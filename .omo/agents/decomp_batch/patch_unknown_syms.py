"""Patch passes.py: add pass_unknown_symbols (R4) + wire into callers."""
p = 'tools/decomp_sys/passes.py'
s = open(p, encoding='utf-8').read()

anchor = '''# ---------------------------------------------------------------- pass 4: scope
'''
assert anchor in s
new_pass = '''# ---------------------------------------------------------------- unknown syms
#
# R4: identifiers the registry never covers.  Two families survive every
# earlier pass and are pure C2065 compile failures:
#   * unqualified CALL targets (IDA renders CRT/internal callees by their
#     literal symbol: `_qsort(...)`, `__2_YAPAXI_Z(...)`); declaring them as
#     `extern int name(...)` compiles AND keeps the reloc key equal to the
#     signals name the original side compares against.
#   * IDA-prefixed GLOBALS (`dword_XXXX`, `byte_XXXX`, ...) that are absent
#     from the registry globals table; declaring with the prefix-implied
#     type is the honest fallback (keeps the compile alive, records the
#     registry gap as a site).
# Names already declared by the pilot hpp (<string.h>/<stdlib.h>), by the
# function's own params/locals, or that name a registry class are skipped.

_CRT_NAMES = {
    "qsort", "abs", "labs", "atoi", "atol", "malloc", "free", "calloc",
    "realloc", "memcpy", "memmove", "memset", "memcmp", "strcpy", "strncpy",
    "strcat", "strncat", "strcmp", "strncmp", "strlen", "strchr", "strrchr",
    "strstr", "sprintf", "swprintf", "printf", "sprintf", "fopen", "fclose",
    "fread", "fwrite", "fseek", "ftell", "rand", "srand", "time", "sqrt",
    "pow", "sin", "cos", "tan", "atan", "atan2", "floor", "ceil", "fabs",
    "tolower", "toupper", "isalpha", "isdigit", "isspace", "getenv", "exit",
    "abort", "memcpy", "qmemcpy",
}

_CALL_KEYWORDS = {
    "if", "for", "while", "switch", "return", "sizeof", "do", "else",
    "case", "defined", "catch", "throw", "new", "delete",
}

_LOCAL_DECL = re.compile(
    r"^\\s*(?:const\\s+)?(?:unsigned\\s+|signed\\s+)*"
    r"(?:char|short|int|long|float|double|void|bool|wchar_t|"
    r"_BYTE|_WORD|_DWORD|_QWORD|size_t|__int64|__int16|__int8|"
    r"GUID|HWND|HDC|HANDLE|LCID|HKL|HBRUSH|HPEN|HFONT|HMENU|HRGN|"
    r"HICON|HCURSOR|HINSTANCE|HMODULE|LPSTR|LPCSTR|DWORD|UINT|WORD|BYTE|"
    r"[A-Z]\\w*)\\s*\\**\\s*([A-Za-z_]\\w*)\\s*(?:\\[|=|;)", re.M)

_GLOBAL_PREFIX_TY = {
    "dword": "unsigned int", "word": "unsigned short",
    "byte": "unsigned char", "qword": "__int64", "flt": "float",
    "dbl": "double", "unk": "unsigned char", "stru": "unsigned char",
    "off": "unsigned int",
}

_UNKNOWN_GLOBAL = re.compile(
    r"\\b(dword|word|byte|qword|flt|dbl|unk|stru|off)_[0-9A-Fa-f]{5,8}\\b")

_UNQUAL_CALL = re.compile(r"(?<![\\w:.>])([A-Za-z_]\\w*)\\s*\\(")


def pass_unknown_symbols(ctx):
    text = "\\n".join(ctx.lines)
    # IDA's qmemcpy builtin is memcpy (declared via <string.h>)
    text = re.sub(r"\\bqmemcpy\\s*\\(", "memcpy(", text)

    if not hasattr(ctx, "used_callee_exts"):
        ctx.used_callee_exts = []
    if not hasattr(ctx, "used_globals"):
        ctx.used_globals = {}

    locals_ = set(ctx.sig.get("param_names") or [])
    for m in _LOCAL_DECL.finditer(text):
        locals_.add(m.group(1))

    declared = set()
    for d in ctx.used_callee_exts:
        dm = re.search(r"\\b([A-Za-z_]\\w*)\\s*\\(", d)
        if dm:
            declared.add(dm.group(1))

    for m in _UNQUAL_CALL.finditer(text):
        name = m.group(1)
        if name in _CALL_KEYWORDS or name in _CRT_NAMES or name in locals_:
            continue
        if name == ctx.sig.get("method"):
            continue
        if name in declared or name in ctx.used_globals:
            continue
        if name in ctx.reg.classes or (name + "Class") in ctx.reg.classes:
            continue
        # only treat it as a CALL when an argument list follows on the line
        # (declarations like `void f(...)` are not in the body)
        ctx.used_callee_exts.append("extern int %s(...);" % name)
        declared.add(name)
        ctx.sites.append(Site(
            "callee", name + "(...)",
            "unqualified callee not in registry -> extern int %s(...) "
            "(literal IDA symbol spelling keeps the reloc key)" % name, False))

    # IDA-prefixed globals with no registry record
    for m in _UNKNOWN_GLOBAL.finditer(text):
        name = m.group(0)
        if name in ctx.used_globals:
            continue
        ty = _GLOBAL_PREFIX_TY.get(m.group(1), "unsigned int")
        ctx.used_globals[name] = ty
        ctx.sites.append(Site(
            "global", name,
            "unresolved IDA global -> extern %s %s (registry gap)"
            % (ty, name), False))

    ctx.lines = text.split("\\n")


# ---------------------------------------------------------------- pass 4: scope
'''
s = s.replace(anchor, new_pass, 1)
open(p, 'w', encoding='utf-8', newline='\n').write(s)
print('pass added')

# wire into both drivers
for p2 in ('tools/decomp_sys/decompile.py', 'tools/decomp_sys/batch_run.py'):
    t = open(p2, encoding='utf-8').read()
    old = "    passes.pass_callees(ctx)"
    if old in t:
        t = t.replace(old, old + "\n    passes.pass_unknown_symbols(ctx)", 1)
        open(p2, 'w', encoding='utf-8', newline='\n').write(t)
        print(p2, 'wired')
    else:
        print(p2, 'NO ANCHOR')
