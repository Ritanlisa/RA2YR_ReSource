#!/usr/bin/env python3
"""Supply missing function bodies (no-file FAIL family, G41.40).

1,484 exec-flow FAILs are functions with a signals entry + ida_cache
snapshot + header declaration but NO definition anywhere in src/ — the
Step-4 body regen replaced existing bodies only and never landed these.

For each (name, addr) in the supply list:
  1. locate the class's header (decl hpp) and the namespace chain in force
     at the class (ra2::game vs gamemd)
  2. take the cache pseudocode; transform (operator new/delete, IDA_*
     bitfield vocab, #NNN type ids); extract the body
  3. def signature from the CACHE (types are til-authoritative); explicit
     `this` param dropped; CC keyword stripped
  4. land `// 0xADDR + namespace-wrapped def` in <module>/supplied_bodies.cpp
     where module = the decl hpp's parent dir

Idempotent: a landing file is skipped for addrs already present in it.
Dry run by default; --apply writes.

Usage: python tools/csp_export/supply_missing_bodies.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LIST = ROOT / '.omo' / 'g98_supply_list.json'
CACHE = ROOT / '.omo' / 'ida_cache'

# ---- transforms (mirrors regen_bodies_from_export.py) ----
DEC_NEWDEL = re.compile(r'\b__(2_YAPAXI_Z|3_YAXPAX_Z)\s*\(')
IDA_VOCAB_RE = re.compile(
    r'\b(BYTE[0-8]|WORD[0-7]|LOWORD|HIWORD|LOBYTE|HIBYTE|LODWORD|HIDWORD|'
    r'SHIWORD|SLOBYTE|SHLOBYTE|SLODWORD|SHIDWORD|SWORD0|SWORD1|SWORD2|'
    r'SWORD3|SWWORD|__PAIR16__|__PAIR32__|__PAIR64__)\(')
TYPE_ID = re.compile(r'([ \s(\*&<>,]|^)#(\d+)')

CC_KW = {'__thiscall', '__stdcall', '__cdecl', '__fastcall'}
USER_CC_RE = re.compile(r'__(?:userpurge|usercall)(?:@<[^>]*>)?\s*')

# G57w10: MSVC mangled vftable refs (``&Cls::`vftable'``) must not pass
# through verbatim -- they are syntax errors in every consumer TU. Rewrite
# to the project vtable-extern vocabulary vt_<Class>; truth table is
# src/e4/e4_globals_decls.hpp.
VT_BACKTICK = re.compile(r'&([\w:]+(?:<[^>;]*>)?)::`vftable\'')
_VT_NAMES = {}


def _vt_name(cls):
    c = re.sub(r'\bconst\b|\*', '', cls)
    c = re.sub(r'[<>,\s]+', '_', c).replace('::', '_')
    c = re.sub(r'_+', '_', c).strip('_')
    if not _VT_NAMES:
        decl = SRC / 'e4' / 'e4_globals_decls.hpp'
        if decl.exists():
            for ln in decl.read_text(encoding='utf-8', errors='replace').splitlines():
                m = re.match(r'extern (?:unsigned char vt_(\w+)\[4\]|void\* vt_(\w+));', ln)
                if m:
                    _VT_NAMES.setdefault(m.group(1) or m.group(2), True)
    return c if c in _VT_NAMES else None


def transform(code):
    code = DEC_NEWDEL.sub(
        lambda m: ('RA2_OPNEW(' if m.group(1).startswith('2_')
                   else 'RA2_OPDEL('), code)
    code = IDA_VOCAB_RE.sub(lambda m: 'IDA_' + m.group(1) + '(', code)
    code = TYPE_ID.sub(lambda m: m.group(1) + 'void', code)

    def _vt(m):
        n = _vt_name(m.group(1))
        return '(void *)&vt_' + n if n else '/* vftable-ref: no vt truth */ 0'
    code = VT_BACKTICK.sub(_vt, code)
    return code


def body_from_pseudo(code):
    lines = code.split('\n')
    start = next((i for i, ln in enumerate(lines) if ln.strip() == '{'), None)
    if start is None:
        return None
    end = next((i for i in range(len(lines) - 1, start, -1)
                if lines[i].strip() == '}'), None)
    if end is None or end <= start:
        return None
    inner = lines[start + 1:end]
    body = '\n'.join(('  ' + ln if ln.strip() else '')
                     for ln in inner)
    # G57w10: reject unbalanced extractions -- truncated cache bodies caused
    # missing-brace / missing-return residue in W0b landings (G57w8-g forensics)
    depth = 0
    for ch in body:
        if ch == '{':
            depth += 1
        elif ch == '}':
            depth -= 1
    if depth != 0:
        return None
    return body


def def_head_from_cache(code, want_name):
    """Parse the cache signature line -> (ret, qualname, params). Drops an
    explicit `this` first param and any CC keyword. Returns None if the
    first line is not a recognizable signature."""
    sig_line = next((ln for ln in code.split('\n')
                     if '(' in ln and ')' in ln), None)
    if not sig_line:
        return None
    sig_line = USER_CC_RE.sub('', sig_line.strip())
    op = sig_line.index('(')
    cl = sig_line.rindex(')')
    if cl < op:
        return None
    head = sig_line[:op].strip()
    params = sig_line[op + 1:cl].strip()
    toks = head.split()
    if not toks:
        return None
    qname = toks[-1]
    if not re.match(r'^[A-Za-z_]\w*(?:::[A-Za-z_]\w*)+$', qname):
        return None
    if qname != want_name:
        return None
    rest = []
    for t in toks[:-1]:
        # `*__thiscall` glues the star to the CC keyword — strip CC ignoring
        # leading pointer stars, keep the stars in the return type
        stripped = t.lstrip('*')
        if stripped in CC_KW:
            rest.append('*' * (len(t) - len(stripped)))
        else:
            rest.append(t)
    ret = ' '.join(rest).strip()
    pl = [p.strip() for p in re.split(r',(?![^()]*\))', params) if p.strip()]
    if pl and re.match(r'^(?:[A-Za-z_][\w:<>]*\s*\*\s*)this$', pl[0]):
        pl = pl[1:]
    params = ', '.join(pl)
    if params == 'void':
        params = ''
    return ret, qname, params


def find_class_header(cls, method):
    """hpp declaring `class/struct cls` with a `method(` decl; returns
    (path, namespace_chain)."""
    cand = []
    for p in SRC.rglob('*.hpp'):
        s = str(p)
        if any(x in s for x in ('_generated', 'csp_canon', '_gap2')):
            continue
        try:
            t = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        if cls is not None:
            if not re.search(r'\b(?:class|struct)\s+' + re.escape(cls) + r'\b', t):
                continue
        if not re.search(r'\b' + re.escape(method) + r'\s*\(', t):
            continue
        ns = re.findall(r'^\s*namespace\s+([\w:]+)\s*\{', t, re.M)
        cand.append((p, '::'.join(ns) if ns else 'gamemd'))
    return cand


def main():
    supply = json.load(open(LIST, encoding='utf-8'))
    print('supply list:', len(supply))
    landings = {}     # target file -> [blocks]
    stats = {'ok': 0, 'no-header': 0, 'sig-unparse': 0, 'body-unparse': 0,
             'multi-header': 0, 'dup': 0}
    hdr_cache = {}
    for name, addr in supply:
        cp = CACHE / ('func_0x%X.json' % int(addr, 16))
        try:
            code = json.load(open(cp, encoding='utf-8')).get('decompiled', '')
        except (OSError, json.JSONDecodeError):
            stats['body-unparse'] += 1
            continue
        if '::' in name:
            cls, method = name.split('::')[-2], name.split('::')[-1]
        else:
            cls, method = None, name
        if cls not in hdr_cache:
            hdr_cache[cls] = find_class_header(cls, method)
        cands = hdr_cache[cls]
        if not cands:
            stats['no-header'] += 1
            continue
        if len(cands) > 1:
            stats['multi-header'] += 1
            # prefer the hpp whose class body mentions the method the most
            cands = sorted(cands, key=lambda c: -len(re.findall(
                r'\b' + re.escape(method) + r'\s*\(',
                c[0].read_text(encoding='utf-8', errors='replace'))))
        hp, ns = cands[0]
        dh = def_head_from_cache(code, name)
        if not dh:
            stats['sig-unparse'] += 1
            continue
        ret, qname, params = dh
        body = body_from_pseudo(transform(code))
        if body is None:
            stats['body-unparse'] += 1
            continue
        module = hp.parent
        target = module / 'supplied_bodies.cpp'
        block = '// 0x%s\nnamespace %s {\n%s%s(%s) {\n%s\n}\n} // namespace %s\n' % (
            addr[2:], ns,
            (ret + ' ') if ret else '', qname, params, body, ns)
        landings.setdefault(target, [])
        if any(b.startswith('// 0x%s\n' % addr[2:])
               for b in landings[target]):
            stats['dup'] += 1
            continue
        landings[target].append(block)
        stats['ok'] += 1

    print('stats:', stats)
    for t, blocks in sorted(landings.items()):
        print('  %-46s %d block(s)' % (t.relative_to(ROOT), len(blocks)))
    if APPLY:
        for t, blocks in landings.items():
            old = t.read_text(encoding='utf-8', errors='replace') \
                if t.exists() else ''
            have = set(re.findall(r'^// (0x[0-9A-Fa-f]+)\s*$', old, re.M))
            fresh = [b for b in blocks
                     if b.split('\n')[0][3:] not in have]
            if not fresh:
                continue
            with open(t, 'a', encoding='utf-8') as f:
                if old and not old.endswith('\n'):
                    f.write('\n')
                f.write('\n'.join(fresh) + '\n')
            print('appended %d -> %s' % (len(fresh), t.relative_to(ROOT)))
    else:
        print('DRYRUN -- pass --apply')


if __name__ == '__main__':
    main()
