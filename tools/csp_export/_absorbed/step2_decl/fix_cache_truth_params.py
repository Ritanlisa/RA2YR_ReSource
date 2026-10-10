#!/usr/bin/env python3
"""C2664 param-type truth alignment (G41.42).

The corpus's def/decl pairs are self-consistent but their param TYPES
drifted from the binary (e.g. `FlagProcess(int, void *)` where the cache
renders `FlagProcess(Power *this, int)`). Callers then fail C2664.

Faithful fix, per error site:
  - parse callee qualname + failing arg index N from the message
  - locate the callee's decl via its own `// 0xADDR` annotation
  - read the cache-truth params INCLUDING the explicit this (the corpus
    materializes this-as-param in defs, so positional identity holds:
    decl arg N <-> cache param N-1... i.e. cache index N-1 counting `this`
    as index 0 -- the DECL has no this, so arg N maps to cache index N)
  - rewrite decl param N's TYPE to the cache type (name kept); rewrite the
    same position in the cpp DEF when the def head has the same count

Only the flagged position is touched; no other params, no arity changes.
Dry run by default; --apply writes.

Usage: python tools/csp_export/fix_cache_truth_params.py <census_log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
CACHE = ROOT / '.omo' / 'ida_cache'

ERR_RE = re.compile(
    r'^(.+?)\((\d+)\): error C2664: ["\u201c]([^"\u201d]+)["\u201d]')
ARG_RE = re.compile(r'参数 (\d+)')
NAME_RE = re.compile(r'([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+|(?<![\w:])::[A-Za-z_]\w+|\b[A-Za-z_]\w+)\s*\(')

CC_KW = {'__thiscall', '__stdcall', '__cdecl', '__fastcall'}
USER_CC_RE = re.compile(r'__(?:userpurge|usercall)(?:@<[^>]*>)?\s*')


def strip_defaults(p):
    return re.sub(r'\s*=\s*[^,]*$', '', p).strip()


def cache_params(addr):
    """(list_of_cache_param_types including 'this', ret) or None."""
    cp = CACHE / ('func_0x%X.json' % addr)
    if not cp.exists():
        return None
    try:
        txt = json.load(open(cp, encoding='utf-8')).get('decompiled', '')
    except (OSError, json.JSONDecodeError):
        return None
    sig_line = next((ln for ln in txt.split('\n')
                     if '(' in ln and ')' in ln), None)
    if not sig_line:
        return None
    sig_line = USER_CC_RE.sub('', sig_line.strip())
    op = sig_line.index('(')
    cl = sig_line.rindex(')')
    if cl < op:
        return None
    head = sig_line[:op].strip()
    raw = sig_line[op + 1:cl].strip()
    toks = head.split()
    ret_toks = []
    for t in toks[:-1]:
        s = t.lstrip('*')
        if s in CC_KW:
            ret_toks.append('*' * (len(t) - len(s)))
        else:
            ret_toks.append(t)
    ret = ' '.join(ret_toks).strip()
    pl = [p.strip() for p in re.split(r',(?![^()]*\))', raw) if p.strip()]
    types = []
    for p in pl:
        if p == '...':
            types.append('...')
            continue
        nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', p)
        t = p[:nm.start()].strip() if nm else p
        if not t:
            t = 'int'
        types.append(t)
    return types, ret


def split_params(seg):
    return [p.strip() for p in re.split(r',(?![^()]*\))', seg.strip())
            if p.strip()]


def retype_param(plist, idx, newtype):
    """Replace the TYPE of plist[idx] keeping the trailing name."""
    p = plist[idx]
    nm = re.search(r'([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*$', p)
    if not nm:
        return plist[:idx] + [newtype + ' a%d' % idx] + plist[idx + 1:]
    return plist[:idx] + [newtype + ' ' + p[nm.start():]] + plist[idx + 1:]


_DEF_HEAD_MEMO = {}


def find_def_head_cpp(callee, short):
    """Param-list text of the callee's DEF head (first match with a `{`),
    or None. Memoized per callee."""
    if callee in _DEF_HEAD_MEMO:
        return _DEF_HEAD_MEMO[callee]
    got = None
    pat = re.compile(
        r'^\s*(?:virtual\s+|static\s+)*'
        r'(?:[A-Za-z_][\w:<>,\s\*&\(\)]*?[\s\*&])?'
        r'(?:[A-Za-z_]\w*::)*~?' + re.escape(short) +
        r'\s*\((.*)\)\s*(?:const\s*)?(?:noexcept\b[^{;]*)?\{?\s*$')
    for cpp in (ROOT / 'src').rglob('*.cpp'):
        if '_generated' in str(cpp):
            continue
        try:
            text = cpp.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        if short not in text:
            continue
        for cl in text.split('\n'):
            mm = pat.match(cl)
            if mm:
                got = mm.group(1)
                break
        if got is not None:
            break
    _DEF_HEAD_MEMO[callee] = got
    return got


def main():
    c2664 = []
    seen = set()
    for ln in open(LOG, encoding='utf-8', errors='replace'):
        m = ERR_RE.match(ln.strip())
        if not m:
            continue
        argm = ARG_RE.search(ln)
        if not argm:
            continue
        n = int(argm.group(1))
        msg = m.group(3)
        names = NAME_RE.findall(msg)
        if not names:
            continue
        qual = [x for x in names if '::' in x]
        callee = (qual[-1] if qual else names[-1]).strip()
        # skip CRT/Win32 (unqualified _-prefixed names)
        if '::' not in callee and callee.startswith('_'):
            continue
        if (callee, n) in seen:
            continue
        seen.add((callee, n))
        c2664.append((callee, n))
    print('C2664 callee/arg sites (unique):', len(c2664))

    # locate decls by annotation for each callee
    short_to_decl = {}
    for callee, n in c2664:
        short = callee.split('::')[-1]
        short_to_decl.setdefault(short, None)
    # G41.42 disambiguation: collect EVERY annotation-bearing decl of the
    # short name tree-wide; resolve only when UNIQUE and (for member
    # callees) the decl's hpp also declares the class -- CRT names like
    # strcat otherwise collide with unrelated project decls.
    decl_hits = {}
    for hp in list((ROOT / 'src').rglob('*.hpp')) + list((ROOT / 'src').rglob('*.h')):
        if any(x in str(hp) for x in ('_generated', 'csp_canon', '_gap2')):
            continue
        try:
            hlines = hp.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        htext = '\n'.join(hlines)
        for k, hl in enumerate(hlines):
            noc = re.sub(r'//.*$', '', hl).rstrip()
            if not noc.endswith(';'):
                continue
            dm0 = re.match(r'^\s*(?:virtual\s+|static\s+)*'
                           r'[A-Za-z_][\w:<>,\s\*&\(\)]*?'
                           r'(~?[A-Za-z_]\w*)\s*\(', noc)
            if not dm0:
                continue
            short = dm0.group(1).lstrip('~')
            if short not in short_to_decl:
                continue
            am = re.search(r'//\s*(?:IDA\s+)?0x([0-9A-Fa-f]{5,8})', hl)
            ptail = dm0 and noc[noc.index('(') + 1:noc.rindex(')')]
            if am:
                decl_hits.setdefault(short, []).append(
                    (str(hp), k, int(am.group(1), 16), htext, ptail))
            else:
                # un-annotated decl (e4_protos.h style): still a hit, with
                # the address resolved from signals later
                decl_hits.setdefault(short, []).append(
                    (str(hp), k, None, htext, ptail))

    # signals fallback for un-annotated decls
    SIG = {}
    sigp = ROOT / 'signals.json'
    if sigp.exists():
        try:
            SIG = json.load(open(sigp, encoding='utf-8')).get('_by_name', {})
        except (OSError, json.JSONDecodeError):
            SIG = {}

    def _sig_addr(name):
        e = SIG.get(name)
        if not e:
            return None
        for a, kind in (e.get('symbols') or {}).items():
            if kind == 'function':
                return int(a, 16)
        return None

    for short, hits in decl_hits.items():
        if not hits:
            continue
        callee = next((c for c, _ in c2664 if c.split('::')[-1] == short),
                      None)
        if callee is None:
            continue
        dcount = None
        dh = find_def_head_cpp(callee, short)
        if dh is not None:
            dcount = len(split_params(dh))
        chosen = None
        if len(hits) == 1:
            chosen = hits[0]
        elif dcount is not None:
            # disambiguate overloads by param count == def count
            cand = [h for h in hits
                    if len(split_params(strip_defaults(h[4]))) == dcount]
            if len(cand) == 1:
                chosen = cand[0]
        if chosen is None:
            continue
        hp, k, addr, htext, _ptail = chosen
        if callee.count('::') >= 2:
            # qualified Cls::Method (ns::Cls::Method) -- verify the decl's
            # hpp declares the class. A 2-part gamemd::Fn name is
            # namespace::free-function: no class context to check.
            cls = callee.split('::')[-2]
            if not re.search(r'\b(?:class|struct)\s+' + re.escape(cls) +
                             r'\b', htext):
                continue      # the decl's hpp does not declare the class
        if addr is None:
            # signals keys: short name, gamemd-stripped qualified, full
            stripped = re.sub(r'^gamemd::', '', callee)
            addr = (_sig_addr(short) or _sig_addr(stripped)
                    or _sig_addr(callee))
            if addr is None:
                continue
        short_to_decl[short] = (hp, k, addr)

    edits = {}
    n_fixed = n_skip = 0
    for callee, n in c2664:
        short = callee.split('::')[-1]
        dl = short_to_decl.get(short)
        if not dl:
            n_skip += 1
            continue
        hp, k, addr = dl
        t = cache_params(addr)
        if not t:
            n_skip += 1
            continue
        types, ret = t
        if n - 1 < 0 or n - 1 >= len(types) or types[n - 1] == '...':
            n_skip += 1
            continue
        # decl line retype
        hl = Path(hp).read_text(encoding='utf-8', errors='replace').split('\n')[k]
        dm = re.match(r'^(\s*(?:virtual\s+|static\s+)*)'
                      r'([A-Za-z_][\w:<>,\s\*&\(\)]*?[\s\*&])?'
                      r'(~?[A-Za-z_]\w*)\s*\((.*)\)\s*'
                      r'((?:const\s*)?(?:noexcept(?:\s*\([^)]*\))?)?[^;]*);',
                      hl)
        if not dm:
            n_skip += 1
            continue
        plist = split_params(dm.group(4))
        if n - 1 >= len(plist):
            n_skip += 1
            continue
        # G41.42 faithfulness rule: only UPGRADE pure void* filler params
        # (arity-extension artifacts). Never degrade a typed/canonical
        # param to the cache's raw spelling (int*/void* would lose the
        # til-truth class pointer, e.g. SaveLoad_Prefix aP1).
        old_t = plist[n - 1]
        if not re.match(r'^void\s*\*\s*(?:[A-Za-z_]\w*)?$', old_t):
            n_skip += 1
            continue
        # G41.43 positional disambiguation via the DEF's param count:
        #   len(def) == len(cache)   -> this materialized: decl[i] ~ cache[i]
        #   len(def) == len(cache)-1 -> implicit this:    decl[i] ~ cache[i+1]
        # The failing arg N (1-based over the decl) -> decl idx N-1.
        def_head = find_def_head_cpp(callee, short)
        if def_head is None:
            n_skip += 1
            continue
        dcount = len(split_params(def_head))
        cache_idx = None
        if dcount == len(types):
            cache_idx = n - 1
        elif dcount == len(types) - 1:
            cache_idx = n
        if cache_idx is None or cache_idx >= len(types) or \
                types[cache_idx] == '...':
            n_skip += 1
            continue
        newt = types[cache_idx]
        newpl = retype_param(plist, n - 1, newt)
        # G41.43: preserve EVERYTHING after the closing paren's first `;`
        # (trailing `// 0xADDR` annotations live there and are the
        # verifier's address authority -- losing them breaks the corpus)
        close = hl.find(')', dm.start(4))
        semi = hl.find(';', close)
        after_semi = hl[semi + 1:] if semi >= 0 else ''
        newl = (dm.group(1) + (dm.group(2) or '') + dm.group(3) +
                '(' + ', '.join(newpl) + ')' + (dm.group(5) or '') + ';' +
                after_semi)
        if newl != hl:
            edits.setdefault(hp, []).append((k, newl))
            n_fixed += 1
            # def side: same positional retype when counts match
            for cpp in (ROOT / 'src').rglob('*.cpp'):
                if any(x in str(cpp) for x in ('_generated',)):
                    continue
                try:
                    clines = cpp.read_text(encoding='utf-8',
                                           errors='replace').split('\n')
                except OSError:
                    continue
                for j, cl in enumerate(clines):
                    if re.search(r'\b' + re.escape(short) + r'\s*\(', cl) \
                            and not cl.rstrip().endswith(';') \
                            and re.search(r'\b' + re.escape(short) +
                                          r'\s*\(', cl):
                        cm = re.match(
                            r'^(\s*)((?:[A-Za-z_][\w:<>,\s\*&\(\)]*?[\s\*&])?)'
                            r'((?:[A-Za-z_]\w*::)*~?' + re.escape(short) +
                            r')\s*\((.*)\)\s*(\{)?\s*$', cl)
                        if not cm:
                            continue
                        dpl = split_params(cm.group(4))
                        if len(dpl) != len(plist):
                            break
                        # same faithfulness rule on the def side
                        if not re.match(r'^void\s*\*\s*(?:[A-Za-z_]\w*)?$',
                                        dpl[n - 1]):
                            break
                        # body-safety: a filler the BODY references is not
                        # a filler (arity-bug family) -- withhold both edits
                        fnm = re.search(r'([A-Za-z_]\w*)\s*$', dpl[n - 1])
                        if fnm:
                            bstart = j if cm.group(5) else j + 1
                            depth = 0
                            body = []
                            for bl in clines[bstart:min(bstart + 400,
                                                        len(clines))]:
                                depth += bl.count('{') - bl.count('}')
                                body.append(bl)
                                if depth <= 0 and len(body) > 1:
                                    break
                            btxt = '\n'.join(body)
                            if re.search(r'\b' + re.escape(fnm.group(1)) +
                                         r'\b', btxt):
                                de = edits.get(hp, [])
                                edits[hp] = [e for e in de if e[0] != k]
                                break
                        ndpl = retype_param(dpl, n - 1, newt)
                        brace = (cm.group(5) or ' {')
                        newcl = (cm.group(1) + (cm.group(2) or '') +
                                 cm.group(3) + '(' + ', '.join(ndpl) + ')' +
                                 brace)
                        edits.setdefault(str(cpp), []).append((j, newcl))
                        break
                break

    print('param-type alignments:', n_fixed, ' skipped:', n_skip)
    if APPLY:
        for f, es in edits.items():
            p = Path(f)
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
            for i, new in es:
                if i < len(lines):
                    lines[i] = new
            p.write_text('\n'.join(lines), encoding='utf-8')
        print('written %d file(s)' % len(edits))
    else:
        print('DRYRUN -- pass --apply')


if __name__ == '__main__':
    main()
