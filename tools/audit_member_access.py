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

def audit(path):
    text = pathlib.Path(path).read_bytes().decode('latin-1')
    lines = text.split('\n')
    findings = []
    i = 0
    while i < len(lines):
        m = DEF_HEAD.match(lines[i])
        if not m or lines[i].rstrip().endswith(';'):
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
        body = '\n'.join(lines[i:e + 1])
        if INSIDE not in body:
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
