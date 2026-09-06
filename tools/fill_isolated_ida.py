"""Fill isolated legacy functions with original IDA decompile from the
full_export snapshot (user decision: IDA original code instead of a bare
stub). Replaces the commented hand-written body (which referenced fictional
APIs) with an `#if 0` IDA block; the compilable stub return stays.
"""
import json
import pathlib
import re

MARK = '// quarantined legacy pseudo-translation'
INSIDE = '// [IDA decompile] original pseudocode - translation pending (final goal)'

index = json.load(open('decompile-results/full_export/index.json', encoding='utf-8'))
snapshot_cache = {}


def hexrays(addr_int):
    key = f'{addr_int:08X}'
    ent = index.get(key)
    if not ent:
        return None
    f = pathlib.Path('decompile-results/full_export') / ent['file']
    if f not in snapshot_cache:
        snapshot_cache[f] = f.read_text(encoding='utf-8', errors='replace').split('\n')
    lines = snapshot_cache[f]
    # locate the addr header line
    hdr = f'addr=0x{addr_int:08X}'
    for i, ln in enumerate(lines):
        if hdr in ln:
            # find Hex-Rays section
            j = i
            while j < len(lines) and '---- Hex-Rays ----' not in lines[j]:
                if j > i and lines[j].startswith('// addr=0x'):
                    return None  # next function before HR section
                j += 1
            if j >= len(lines):
                return None
            out = []
            k = j + 1
            while k < len(lines) and not lines[k].startswith('// ====='):
                out.append(lines[k])
                k += 1
            # trim trailing blanks
            while out and not out[-1].strip():
                out.pop()
            return out
    return None


filled = 0
missed = []
for p in [pathlib.Path('src/structure/building.cpp'),
          pathlib.Path('src/structure/unit.cpp'),
          pathlib.Path('src/misc/locomotion_bodies.cpp')]:
    lines = p.read_bytes().decode('latin-1').split('\n')
    # find each marker
    i = 0
    inserts = []
    while i < len(lines):
        if MARK in lines[i]:
            # walk up to the nearest `// 0xADDR` header
            a = i - 1
            addr = None
            while a >= 0:
                m = re.match(r'^// 0x([0-9A-Fa-f]+)\s*$', lines[a].strip())
                if m:
                    addr = int(m.group(1), 16)
                    break
                a -= 1
            if addr is None:
                missed.append((str(p), 'no addr header above marker', i + 1))
                i += 1
                continue
            code = hexrays(addr)
            if not code:
                missed.append((str(p), f'snapshot miss 0x{addr:X}', i + 1))
                i += 1
                continue
            # body extent: commented lines from marker+1 until stub/`}` line
            j = i + 1
            while j < len(lines) and (lines[j].lstrip().startswith('//')):
                j += 1
            inserts.append((i, j, addr, code))
            i = j
        else:
            i += 1
    # apply bottom-up
    for s, e, addr, code in sorted(inserts, reverse=True):
        block = ['#if 0', INSIDE] + [('#' not in ln[:1] and ln or ln) for ln in code] + ['#endif']
        lines[s:e] = block
        filled += 1
    if inserts:
        p.write_bytes('\n'.join(lines).encode('latin-1'))
        print(f"{p}: {len(inserts)} filled")

print(f"\nfilled: {filled}")
for m in missed:
    print("MISSED:", m)
