"""Member-access audit over REAL translated code (user directive):
- scan every src/*.cpp function definition
- functions whose body contains the IDA-pseudocode marker are untranslated
  (raw original code, baseline-compile-error-allowed) -> skipped
- remaining real-code functions are grepped for forbidden patterns:
  pointer-arithmetic member access / cast-index / raw offsets
"""
import re
import pathlib

INSIDE = '// [IDA decompile] original pseudocode'
PATTERNS = [
    (r'\(\s*_BYTE\s*\*\s*\)\s*\w+\s*\+', '(_BYTE*)ptr +'),
    (r'\(\s*(?:uint8_t|int|char|short|long|_DWORD|_WORD)\s*\*\s*\)\s*\w+\s*\+', 'cast ptr + int'),
    (r'\(\(\w+\s*\*\)\s*\w+\)\s*\[\s*\d+\s*\]', '((T*)ptr)[N]'),
    (r'\*\(\s*\w+\s*\*\s*\*\s*\)\s*\(\s*\(\s*uint8_t\s*\*\s*\)\s*\w+', '*(T**)((uint8_t*)p'),
    (r'\bMEMORY\[', 'MEMORY[]'),
    (r'\bfield_0x', 'field_0x name'),
    (r'\(\s*int\s*\*\s*\)\s*\(.*\+\s*\d+\s*\)', '(int*)(x + N)'),
]

DEF_HEAD = re.compile(r'^\s*[\w:<>\*&\[\]]+(?:\s+[\w:<>\*&\[\]]+)*\s+([\w:~]+)::([\w~]+)\s*\(')

def strip_comments(lines):
    """Blank out // and /* */ comments, preserving line structure for line
    numbers. Violations inside comments are documentation, not code."""
    out = []
    in_block = False
    for ln in lines:
        buf = []
        j = 0
        while j < len(ln):
            c = ln[j]
            nxt = ln[j + 1] if j + 1 < len(ln) else ''
            if in_block:
                if c == '*' and nxt == '/':
                    buf.append('  ')
                    j += 2
                    in_block = False
                    continue
                buf.append(' ' if c != '\t' else '\t')
                j += 1
            elif c == '/' and nxt == '/':
                break
            elif c == '/' and nxt == '*':
                buf.append('  ')
                j += 2
                in_block = True
            else:
                buf.append(c)
                j += 1
        out.append(''.join(buf))
    return out


def audit(path):
    text = pathlib.Path(path).read_bytes().decode('latin-1')
    lines = text.split('\n')
    code_lines = strip_comments(lines)
    findings = []
    i = 0
    while i < len(lines):
        m = DEF_HEAD.match(lines[i])
        if not m or lines[i].rstrip().endswith(';'):
            i += 1
            continue
        # Skip inner pseudocode defs: when the outer real function's signature
        # does not match DEF_HEAD (free functions without ::, ctors without a
        # return type), the pseudocode's own signature line below the marker
        # gets matched instead. A marker line within the preceding 10 lines
        # means this def lives inside a marker'd untranslated block.
        if any(INSIDE in lines[j] for j in range(max(0, i - 10), i)):
            i += 1
            continue
        k = i
        while k < len(lines) and '{' not in lines[k].split('//')[0]:
            if lines[k].rstrip().endswith(';'):
                break
            k += 1
        if k >= len(lines) or '{' not in lines[k].split('//')[0]:
            i += 1
            continue
        depth = 0
        started = False
        e = k
        while e < len(lines):
            code = lines[e].split('//')[0]
            depth += code.count('{') - code.count('}')
            if '{' in code:
                started = True
            if started and depth <= 0:
                break
            e += 1
        body = '\n'.join(code_lines[i:e + 1])
        raw_body = '\n'.join(lines[i:e + 1])
        if INSIDE not in raw_body:
            for pi, (pat, label) in enumerate(PATTERNS):
                for mm in re.finditer(pat, body):
                    ln_no = i + body[:mm.start()].count('\n') + 1
                    findings.append((path, ln_no, label, lines[ln_no - 1].strip()[:80]))
        i = e + 1
    return findings

EXCLUDE = ('_generated', '_gap2', 'gap2_defs', 'subs', 'link_stubs')
total = 0
for p in sorted(pathlib.Path('src').rglob('*.cpp')):
    if any(x in str(p) for x in EXCLUDE):
        continue
    for f in audit(p):
        print(f"{f[0]}:{f[1]} [{f[2]}] {f[3]}")
        total += 1
print(f"\nreal-code violations: {total}")
