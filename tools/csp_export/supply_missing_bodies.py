#!/usr/bin/env python3
"""Supply missing function bodies (no-file FAIL family, G41.40).

1,484 exec-flow FAILs are functions with a signals entry + ida_cache
snapshot + header declaration but NO definition anywhere in src/ — the
Step-4 body regen replaced existing bodies only and never landed these.

For each (name, addr) in the supply list:
  0. RC1 CSP-authority gate: the address must exist in
     anchors/csp_canon_manifest.json with the SAME, semantic (non-
     placeholder) name.  Unnamed / `sub_XXXXXX` / mismatching entries are
     REJECTED to the unresolved report -- never landed as a malformed
     `int sub_XXX(...)` definition line.
  1. locate the class's header (decl hpp) and the namespace chain in force
     at the class (ra2::game vs gamemd)
  2. take the cache pseudocode; RC1 truth-ify (operator new/delete,
     bitfield-extraction -> width-exact C++, __PAIR*__ inline, qmemcpy ->
     memcpy; MEMORY[/JUMPOUT/flag-read forms REFUSED); extract the body
  3. def signature from the CACHE (types are til-authoritative); explicit
     `this` param dropped; CC keyword stripped
  4. land `// 0xADDR + namespace-wrapped def` in <module>/supplied_bodies.cpp
     where module = the decl hpp's parent dir

Idempotent: a landing file is skipped for addrs already present in it.
RC1: any rejected function lands in .omo/unresolved_reports/
supply_missing_bodies.unresolved.json and the process exits non-zero.
Dry run by default; --apply writes.

Usage: python tools/csp_export/supply_missing_bodies.py [--apply]
"""
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from _ida_vocab import find_refusals, truthify, type_ids

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
APPLY = '--apply' in sys.argv
LIST = ROOT / '.omo' / 'g98_supply_list.json'
CACHE = ROOT / '.omo' / 'ida_cache'
MANIFEST = ROOT / 'anchors' / 'csp_canon_manifest.json'

# RC1: names that are placeholders, not identities.  A definition line is
# CSP-authoritative or it is not written.
BAD_NAME_RE = re.compile(
    r'^(?:.*::)?(?:sub_[0-9A-Fa-f]{4,}|q[0-9A-F]{3}\w*|u(?:8|16|32|64)_[0-9A-F]+'
    r'|__pad.*|__align.*|field_.*|vtable\d*|vt_?\d+|j_|nullsub_\d*)$')

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
    # RC1: truth-ify IDA vocabulary inline -- no IDA_-prefixed shims.
    code = truthify(code)
    code = type_ids(code)

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


_HPP_CONTENT = {}


def _hpp_text(p):
    """Cached hpp content: find_class_header is called once per class, and
    re-reading the ~3,300-file tree per class is O(classes x tree)."""
    if p not in _HPP_CONTENT:
        try:
            _HPP_CONTENT[p] = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            _HPP_CONTENT[p] = ''
    return _HPP_CONTENT[p]


def find_class_header(cls, method):
    """hpp declaring `class/struct cls` with a `method(` decl; returns
    (path, namespace_chain)."""
    cand = []
    for p in SRC.rglob('*.hpp'):
        s = str(p)
        if any(x in s for x in ('_generated', 'csp_canon', '_gap2')):
            continue
        t = _hpp_text(p)
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
    try:
        manifest = json.loads(MANIFEST.read_text(encoding='utf-8'))
    except (OSError, json.JSONDecodeError) as e:
        print('FATAL: CSP canon manifest unreadable (%s) -- cannot '
              'establish signature authority.' % MANIFEST)
        sys.exit(2)
    landings = {}     # target file -> [blocks]
    stats = {'ok': 0, 'no-header': 0, 'sig-unparse': 0, 'body-unparse': 0,
             'multi-header': 0, 'dup': 0,
             'no-manifest': 0, 'name-mismatch': 0, 'placeholder-name': 0,
             'refused-vocab': 0}
    rejected = {}
    hdr_cache = {}
    for name, addr in supply:
        ai = int(addr, 16)
        mkey = '0x%08X' % ai
        rec = manifest.get(mkey)
        if rec is None:
            stats['no-manifest'] += 1
            rejected.setdefault(
                'no-manifest', []).append(
                {'name': name, 'addr': '0x%X' % ai,
                 'reason': 'no anchors/csp_canon_manifest.json entry '
                           '(no CSP signature authority)'})
            continue
        mname = rec.get('name') or ''
        if mname != name:
            stats['name-mismatch'] += 1
            rejected.setdefault(
                'name-mismatch', []).append(
                {'name': name, 'addr': '0x%X' % ai, 'manifest_name': mname,
                 'reason': 'supply name differs from CSP-authoritative '
                           'manifest name'})
            continue
        if not mname or BAD_NAME_RE.match(mname):
            stats['placeholder-name'] += 1
            rejected.setdefault(
                'placeholder-name', []).append(
                {'name': name, 'addr': '0x%X' % ai,
                 'reason': 'placeholder/unnamed identity -- a malformed '
                           '`int sub_XXX(...)` def line would be produced'})
            continue
        cp = CACHE / ('func_0x%X.json' % ai)
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
                r'\b' + re.escape(method) + r'\s*\(', _hpp_text(c[0]))))
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
        refusals = find_refusals(body)
        if refusals:
            stats['refused-vocab'] += 1
            rejected.setdefault(
                'refused-vocab', []).append(
                {'name': name, 'addr': '0x%X' % ai, 'patterns': refusals,
                 'reason': 'untruth-ifiable IDA constructs (RC1 policy)'})
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
    n_rejected = sum(len(v) for v in rejected.values())
    if n_rejected:
        rpt_dir = ROOT / '.omo' / 'unresolved_reports'
        rpt_dir.mkdir(parents=True, exist_ok=True)
        rpt = rpt_dir / 'supply_missing_bodies.unresolved.json'
        rpt.write_text(json.dumps({
            '_meta': {'generator': 'supply_missing_bodies.py',
                      'policy': 'rc1-csp-authoritative-or-reject',
                      'total_rejected': n_rejected, 'apply': APPLY},
            'rejected': rejected}, indent=1), encoding='utf-8')
        print('UNRESOLVED REPORT: %s (%d functions rejected)' %
              (rpt, n_rejected))
        print('FAIL LOUD: exit 1')
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
    sys.exit(1 if n_rejected else 0)


if __name__ == '__main__':
    main()
