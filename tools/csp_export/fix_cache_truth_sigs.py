#!/usr/bin/env python3
"""Cache-truth signature reconciliation (G41.41).

Ground truth = the IDA cache decompiled text (Hex-Rays render of the
binary). For functions with a cpp def annotated `// 0xADDR`:

  C2562 "void function returns a value":
      the def's declared ret is `void` while the body returns a value;
      the cache signature's ret IS the binary truth -> set the def head
      ret (and the matching hpp decl ret) to the cache ret.

  C2671 "static member function has no this pointer":
      the hpp decl (or the def) says `static` while the cache says
      `__thiscall` (a real member) -> drop the `static` qualifier on both.

Nothing else is touched: only error-site functions with a readable cache
signature are rewritten, so every edit is a truth alignment.

Idempotent: after alignment the error cannot re-fire. Dry run by default;
--apply writes.

Usage: python tools/csp_export/fix_cache_truth_sigs.py <census_log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
CACHE = ROOT / '.omo' / 'ida_cache'

CC_KW = {'__thiscall', '__stdcall', '__cdecl', '__fastcall'}
USER_CC_RE = re.compile(r'__(?:userpurge|usercall)(?:@<[^>]*>)?\s*')

# error lines
C2562_RE = re.compile(
    r'^(.+?)\((\d+)\): error C2562: ["\u201c]([^"\u201d]+)["\u201d]')
C2671_RE = re.compile(
    r'^(.+?)\((\d+)\): error C2671: ["\u201c]([^"\u201d]+)["\u201d]')


def cache_truth(addr):
    """(ret, is_thiscall, qualname, params) parsed from the cache's first
    sig line; explicit `this` first param dropped from params."""
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
    raw_params = sig_line[op + 1:cl].strip()
    toks = head.split()
    if not toks:
        return None
    qname = toks[-1]
    is_thiscall = '__thiscall' in toks
    rest = []
    for t in toks[:-1]:
        s = t.lstrip('*')
        if s in CC_KW:
            rest.append('*' * (len(t) - len(s)))
        else:
            rest.append(t)
    ret = ' '.join(rest).strip()
    pl = [p.strip() for p in re.split(r',(?![^()]*\))', raw_params) if p.strip()]
    if pl and re.match(r'^(?:[A-Za-z_][\w:<>]*\s*\*\s*)this$', pl[0]):
        pl = pl[1:]
    params = ', '.join(pl)
    if params == 'void':
        params = ''
    return ret, is_thiscall, qname, params


def load_file(path):
    try:
        return Path(path).read_text(encoding='utf-8', errors='replace').split('\n')
    except OSError:
        return None


def find_def_head(lines, err_line, short_name):
    """Def head index for the error line: scan up to 60 lines for a def-head
    (has `(`, not ending `;`, not a decl) whose text contains the failing
    function's short name AND whose `// 0xADDR` annotation sits on the same
    or an adjacent-above line."""
    lo = max(0, err_line - 61)
    for i in range(min(err_line, len(lines)) - 1, lo, -1):
        s = lines[i].strip()
        if not s or s.startswith('//'):
            continue
        if '(' in s and not s.rstrip().endswith(';') and \
                not s.startswith('//') and 'operator' not in s:
            if short_name and not re.search(r'\b' + re.escape(short_name)
                                            + r'\s*\(', s):
                continue
            for d in (0, 1, 2):
                j = i - d
                if j < 0:
                    continue
                m = re.search(r'//\s*(?:IDA\s+)?0x([0-9A-Fa-f]{5,8})',
                              lines[j])
                if m:
                    return i, int(m.group(1), 16)
    return None, None


def find_ret_end(head):
    """Split a def head into (indent+prefix..., ret, qualname(params)); the
    ret is the token run before the qualified name."""
    m = re.match(r'^(\s*)((?:[A-Za-z_][\w:<>,\s\*&\(\)]*?[\s\*&])?)'
                 r'((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)\(', head)
    if not m:
        return None
    return m


def fix_def_ret(lines, i, new_ret):
    """Return (fixed_head, old_ret). Idempotent-safe: a previously
    corrupted `new_ret old_ret name(` head is first stripped of the
    inserted token, then the substitution is applied cleanly."""
    head = lines[i]
    m = find_ret_end(head.rstrip())
    if not m:
        return None
    indent = head[:len(head) - len(head.lstrip())]
    toks = head.strip().split(' ', 2)
    # self-heal: token1 == new_ret and token2 is a plain type token that
    # differs -> the earlier buggy run double-inserted; drop token1
    if len(toks) == 3 and toks[0] == new_ret and \
            re.match(r'^[A-Za-z_]\w*$', toks[1]) and toks[1] != new_ret:
        head = indent + toks[1] + ' ' + toks[2]
        m = find_ret_end(head.rstrip())
        if not m:
            return None
    old_ret = (m.group(2) or '').strip()
    if not old_ret:
        return None
    tail = head[m.start(3):]
    newhead = head[:m.start(2)] + new_ret + ' ' + tail
    return newhead, old_ret


def main():
    c2562 = []
    c2671 = []
    for ln in open(LOG, encoding='utf-8', errors='replace'):
        m = C2562_RE.match(ln.strip())
        if m:
            c2562.append((m.group(1), int(m.group(2)), m.group(3)))
            continue
        m = C2671_RE.match(ln.strip())
        if m:
            c2671.append((m.group(1), int(m.group(2)), m.group(3)))
    # dedupe by (file, func)
    c2562 = list({(f, n): (f, l, n) for f, l, n in c2562}.values())
    c2671 = list({(f, n): (f, l, n) for f, l, n in c2671}.values())
    print('C2562 sites:', len(c2562), ' C2671 sites:', len(c2671))

    cache_memo = {}
    edits = {}   # path -> list[(line_idx, newline)]
    n_ret = n_static = n_skip = 0

    for f, l, name in c2562:
        lines = load_file(f)
        if lines is None:
            n_skip += 1
            continue
        short = name.split('::')[-1].lstrip('~')
        i, addr = find_def_head(lines, l, short)
        if i is None:
            n_skip += 1
            continue
        if addr not in cache_memo:
            cache_memo[addr] = cache_truth(addr)
        t = cache_memo[addr]
        if not t or not t[0]:
            n_skip += 1
            continue
        # strict identity: cache qualname must match the failing function
        # (namespace-insensitive) -- a drifted free/member pairing is NOT
        # the same binary function and must not be truth-aligned
        cq = t[2].split('::')[-1].lstrip('~')
        if cq != short.lstrip('~'):
            n_skip += 1
            continue
        r = fix_def_ret(lines, i, t[0])
        if not r:
            n_skip += 1
            continue
        newhead, old_ret = r
        if old_ret == t[0]:
            continue
        edits.setdefault(f, []).append((i, newhead))
        n_ret += 1
        # align the hpp decl ret too
        qm = re.search(r'((?:[A-Za-z_]\w*::)+[A-Za-z_]\w*)\(', newhead)
        if qm:
            qn = qm.group(1)
            cls, meth = qn.rsplit('::', 1)
            for hp in (ROOT / 'src').rglob('*.hpp'):
                if any(x in str(hp) for x in ('_generated', 'csp_canon')):
                    continue
                try:
                    htxt = hp.read_text(encoding='utf-8', errors='replace')
                except OSError:
                    continue
                dm = re.search(
                    r'^(\s*(?:virtual\s+|static\s+)*)([A-Za-z_][\w:<>,\s\*&\(\)]*?[\s\*&])'
                    r'(~?' + re.escape(meth) + r'\s*\([^;{]*\))\s*;',
                    htxt, re.M)
                if dm and cls.split('::')[-1] in htxt.split('\n')[0:0] or dm:
                    rel = str(hp.relative_to(ROOT))
                    if (cls + '::' + meth) not in htxt and cls not in htxt:
                        continue
                    hlines = htxt.split('\n')
                    for k, hl in enumerate(hlines):
                        dm2 = re.match(
                            r'^(\s*(?:virtual\s+|static\s+)*)([A-Za-z_][\w:<>,\s\*&\(\)]*?[\s\*&])'
                            r'(~?' + re.escape(meth) + r'\s*\()(.*)$',
                            hl)
                        if dm2 and dm2.group(2).strip() == old_ret:
                            newl = (dm2.group(1) + t[0] + ' ' +
                                    dm2.group(3) + dm2.group(4))
                            edits.setdefault(rel, []).append((k, newl))
                    break
    for f, l, name in c2671:
        lines = load_file(f)
        if lines is None:
            n_skip += 1
            continue
        short = name.split('::')[-1].lstrip('~')
        i, addr = find_def_head(lines, l, short)
        if i is None or addr is None:
            n_skip += 1
            continue
        if addr not in cache_memo:
            cache_memo[addr] = cache_truth(addr)
        t = cache_memo[addr]
        if not t or not t[1]:
            n_skip += 1  # cache does not confirm a member; leave alone
            continue
        cq = t[2].split('::')[-1].lstrip('~')
        if cq != short.lstrip('~'):
            n_skip += 1
            continue
        ret, _, qname = t[0], t[1], t[2]
        params = t[3] if len(t) > 3 else ''
        # The def body uses `this` -> a real member. C2671 fires because the
        # hpp DECL's param list drifted from the def (decl wins for
        # this-ness). Faithful fix: rewrite the decl (located by its own
        # `// 0xADDR` annotation) to the cache-truth signature.
        fixed_decl = False
        for hp in (ROOT / 'src').rglob('*.hpp'):
            if any(x in str(hp) for x in ('_generated', 'csp_canon', '_gap2')):
                continue
            try:
                htxt = hp.read_text(encoding='utf-8', errors='replace')
            except OSError:
                continue
            hlines = htxt.split('\n')
            for k, hl in enumerate(hlines):
                am = re.search(r'//\s*(?:IDA\s+)?0x([0-9A-Fa-f]{5,8})', hl)
                if not am or int(am.group(1), 16) != addr:
                    continue
                dm = re.match(r'^(\s*(?:virtual\s+|static\s+)*)'
                              r'([A-Za-z_][\w:<>,\s\*&\(\)]*?[\s\*&])?'
                              r'(~?[A-Za-z_]\w*)\s*\([^;{]*\)'
                              r'((?:\s*const)?[^;]*);', hl)
                if not dm:
                    continue
                # build the truth decl: ret + name(cache params) + tail
                prefix = re.sub(r'\bstatic\s+', '', dm.group(1), count=1)
                tail = dm.group(4) or ''
                newdecl = ('%s%s %s(%s)%s;' % (prefix, ret, dm.group(3),
                                               params, tail)) if ret else \
                          ('%s%s(%s)%s;' % (prefix, dm.group(3), params,
                                            tail))
                if newdecl != hl:
                    edits.setdefault(str(hp), []).append((k, newdecl))
                    n_static += 1
                    fixed_decl = True
                break
            if fixed_decl:
                break
        if not fixed_decl:
            n_skip += 1

    print('ret alignments:', n_ret, ' static drops:', n_static,
          ' skipped:', n_skip)
    if APPLY:
        for f, es in edits.items():
            lines = load_file(f)
            if lines is None:
                continue
            for i, new in es:
                if i < len(lines):
                    lines[i] = new
            Path(f).write_text('\n'.join(lines), encoding='utf-8')
        print('written %d file(s)' % len(edits))
    else:
        print('DRYRUN -- pass --apply')


if __name__ == '__main__':
    main()
