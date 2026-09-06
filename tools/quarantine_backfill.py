"""Pass 2 stub backfill: quarantine_ida_embeds.py missed functions whose
signatures end in `) const`, `) noexcept`, `) override` etc. (bare `)`
check). Finds quarantined functions whose body has no stub and adds one
based on return type (bool -> false, void -> nothing, else {}).
"""
import pathlib
import re

STUB_MARK = '// TODO stub - translate quarantined IDA block above'
SIG_TAIL = re.compile(r'\)\s*(?:const\s*)?(?:noexcept\s*)?(?:override\s*)?(?:final\s*)?\{\s*$')


def find_marker_functions(lines):
    """Yield (sig, body_open, marker_idx, embed_end, body_close) tuples."""
    results = []
    for i, ln in enumerate(lines):
        if ln.strip() != '// [IDA decompile]':
            continue
        # find embed end by brace balance
        depth = 0
        started = False
        end = None
        for k in range(i + 1, len(lines)):
            if '{' in lines[k]:
                started = True
            if started:
                depth += lines[k].count('{') - lines[k].count('}')
                if depth <= 0:
                    end = k
                    break
        if end is None:
            continue
        # find body open: walk up skipping comments/blanks
        j = i - 1
        while j >= 0 and (lines[j].strip() == '' or lines[j].strip().startswith('//')):
            j -= 1
        if j < 0:
            continue
        s = lines[j].strip()
        sig = None
        body_open = j
        if s.endswith('{') and SIG_TAIL.search(s):
            sig = s[:-1].strip()
        elif s == '{':
            # multi-line sig: walk up
            parts = []
            k = j - 1
            while k >= 0:
                t = lines[k].strip()
                if t.startswith('}') or t == '' or t.startswith('//'):
                    break
                parts.insert(0, t)
                if SIG_TAIL.search(t) or t.endswith(')') or re.search(r'\)\s*(const|noexcept|override|final)$', t):
                    sig = ' '.join(parts)
                    break
                k -= 1
        if sig is None:
            continue
        # body close via brace balance from body_open
        depth = 0
        started = False
        bc = None
        for k in range(body_open, len(lines)):
            depth += lines[k].count('{') - lines[k].count('}')
            if '{' in lines[k]:
                started = True
            if started and depth <= 0:
                bc = k
                break
        if bc is not None:
            results.append((sig, body_open, i, end, bc))
    return results


def body_only_comments(lines, start, end):
    in_block = False
    for k in range(start, end):
        s = lines[k].strip()
        if in_block:
            if '*/' in s:
                in_block = False
            continue
        if s == '' or s.startswith('//'):
            continue
        if s.startswith('/*'):
            if '*/' not in s:
                in_block = True
            continue
        if s.startswith('*'):
            continue
        return False
    return True


def classify(sig):
    head = sig.split('(')[0].strip()
    m = re.search(r'([\w:~]+)\s*$', head)
    if m:
        before = head[:m.start()].strip()
        if before.endswith('void'):
            return 'void'
        if before.endswith('bool'):
            return 'bool'
    return 'value'


total = 0
for p in sorted(pathlib.Path('src').rglob('*.cpp')):
    t = p.read_bytes().decode('latin-1')
    if '// [IDA decompile]' not in t:
        continue
    lines = t.split('\n')
    funcs = find_marker_functions(lines)
    # collect insertions (line idx -> text), apply bottom-up
    inserts = []
    for sig, body_open, marker, end, bc in funcs:
        # stub already present between end and bc?
        window = '\n'.join(lines[end + 1:bc])
        if STUB_MARK in window or 'return' in window:
            continue
        if bc > end and body_only_comments(lines, end + 1, bc):
            kind = classify(sig)
            if kind == 'bool':
                txt = '    return false; ' + STUB_MARK
            elif kind == 'value':
                txt = '    return {}; ' + STUB_MARK
            else:
                txt = '    ' + STUB_MARK
            inserts.append((bc, txt, sig))
    for bc, txt, sig in sorted(inserts, reverse=True):
        lines.insert(bc, txt)
        print(f"{p}: stub at line {bc+1} <- {sig[:60]}")
        total += 1
    if inserts:
        p.write_bytes('\n'.join(lines).encode('latin-1'))
print(f"\ntotal backfilled: {total}")
