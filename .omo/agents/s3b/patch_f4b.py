import re
p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
src = open(p, encoding='utf-8').read()

# A) extend ERA_TYPE_NAMES from era_types.h (single source of truth)
old_tail = '''    "LPTEXTMETRICA", "tagTEXTMETRICA", "tagPAINTSTRUCT", "tagLOGFONTA",
}'''
assert old_tail in src
new_tail = '''    "LPTEXTMETRICA", "tagTEXTMETRICA", "tagPAINTSTRUCT", "tagLOGFONTA",
    # IDA pseudo-registers (asm leaks) and the unresolved return spelling
    "_EA", "_EBX", "_ECX", "_EDX", "_ESI", "_EDI", "_EBP", "_ESP",
    "_AH", "_AL", "_BH", "_BL", "_CH", "_CL", "_DH", "_DL",
    "_AX", "_BX", "_CX", "_DX", "_SI", "_DI", "_BP", "_SP",
    "unknown",
}


def _load_era_typedefs():
    """Every typedef/tag spelled in era_types.h is a TYPE, never a class.

    Stage 3b: keeping this list hand-maintained let `LPPERSISTSTREAM` be
    both a typedef (era_types) and a forward-declared class (hpp_pilot
    `_fwd_ok`) -> C2040.  Parsing the header makes the two agree.
    """
    names = set()
    path = os.path.join(os.path.dirname(os.path.abspath(__file__)),
                        "era_types.h")
    try:
        txt = open(path, encoding="utf-8").read()
    except Exception:
        return names
    for m in re.finditer(r"^\\s*typedef\\s+[^;{}]*?([A-Za-z_]\\w*)\\s*;",
                         txt, re.M):
        names.add(m.group(1))
    for m in re.finditer(
            r"^\\s*(?:struct|class|union)\\s+([A-Za-z_]\\w*)\\s*;", txt, re.M):
        names.add(m.group(1))
    return names


ERA_TYPE_NAMES |= _load_era_typedefs()'''
src = src.replace(old_tail, new_tail, 1)

# B) drop the duplicate literal set, reuse ERA_TYPE_NAMES
start = src.index('# Stage 3b: bare TYPE spellings that IDA renders as if they were calls.')
end = src.index('def pass_unknown_symbols(ctx):', start)
src = src[:start] + src[end:]
src = src.replace('        if name in _ERA_TYPE_NAMES:', '        if name in ERA_TYPE_NAMES:')
open(p, 'w', encoding='utf-8', newline='').write(src)
print('ok')
