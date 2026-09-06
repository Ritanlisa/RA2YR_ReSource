"""Normalize lines inside `#if 0` IDA blocks: strip any repeated leading
`// ` prefixes left by double-quarantine (object.cpp was processed by both
the single-file trial and the global apply run)."""
import pathlib

INSIDE = '// [IDA decompile] original pseudocode - translation pending (final goal)'

total = 0
for p in sorted(pathlib.Path('src').rglob('*.cpp')):
    t = p.read_bytes().decode('latin-1')
    if INSIDE not in t:
        continue
    lines = t.split('\n')
    out = []
    in_block = False
    fixed = 0
    for ln in lines:
        s = ln.rstrip('\r\n')
        if s == INSIDE:
            in_block = True
            out.append(ln)
            continue
        if in_block and s == '#endif':
            in_block = False
            out.append(ln)
            continue
        if in_block:
            eol = ln[len(s):]
            while s.startswith('// ') or s == '//':
                s = s[3:] if s.startswith('// ') else ''
                fixed += 1
            out.append(s + eol)
        else:
            out.append(ln)
    if fixed:
        p.write_bytes('\n'.join(out).encode('latin-1'))
        print(f"{p}: {fixed} prefixes stripped")
    total += fixed
print(f"total: {total}")
