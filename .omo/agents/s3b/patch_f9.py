p = r'D:\RA2YR_ReSource\tools\decomp_sys\passes.py'
s = open(p, encoding='utf-8').read()
anchor = '''# ------------------------------------------- CW7: `this = ...` receiver local'''
assert anchor in s
new = '''# ------------------------------------------- Stage 3b: bitwise on non-ints
#
# `p2 >> 16`, `ptr & 0xFF`, `this->fCap & ~0xFF` -- IDA's pseudo-code applies
# bitwise operators to values it typed as pointers/floats (the binary is a
# plain 32-bit ALU op on the same register/dword).  VC6 rejects both
# (C2296).  Re-spell the LEFT operand as `unsigned int` (pointers: value
# conversion; floats: the raw 32-bit pattern, which is what the ALU saw).

_BITOP = re.compile(
    r"(?<![\\w.>*&!~])(?P<a>(?:this->)?[A-Za-z_]\\w*)(?![\\w\\[.]|->)\\s*"
    r"(?P<op>&(?!&)|\\|(?!\\|)|\\^|>>|<<)")


def pass_bitop_harmonize(ctx):
    text = "\\n".join(ctx.lines)
    env = _TypeEnv(ctx, text)
    n = 0

    def repl(m):
        nonlocal n
        a, op = m.group("a"), m.group("op")
        k, t = _rhs_ptr_head(a, env)
        if k == "ptr":
            n += 1
            ctx.sites.append(Site(
                "bitop", "%s %s" % (a, op),
                "bitwise op on a POINTER -> `(unsigned int)` (same 32-bit "
                "register value; C2296)", True))
            return "((unsigned int)(%s)) %s" % (a, op)
        if k == "float" and (t or "") != "double":
            n += 1
            ctx.sites.append(Site(
                "bitop", "%s %s" % (a, op),
                "bitwise op on a float -> raw 32-bit pattern "
                "`*(unsigned int *)&x` (C2296)", True))
            return "(*(unsigned int *)&(%s)) %s" % (a, op)
        return m.group(0)

    out = _BITOP.sub(repl, text)
    if n:
        ctx.lines = out.split("\\n")


# ------------------------------------------- Stage 3b: indirect var calls
#
# `p2((int)this_)` / `g_DDraw_ErrorCallback(p0)` -- the callee is a
# VARIABLE holding a code pointer (stack slot / global fn-ptr), but its
# declared type is `void *`/`int`, so the call is C2064 ("term does not
# evaluate to a function").  Cast the callee expression to a function
# pointer built from the OBSERVED argument shapes (pointer args -> void *,
# everything else int); the call itself is unchanged.

_FNCALL_SITE = re.compile(r"(?<![\\w:.>])(?P<n>[A-Za-z_]\\w*)\\s*\\(")


def pass_indirect_var_calls(ctx):
    text = "\\n".join(ctx.lines)
    syms = _cw5_sym_types(ctx, text)
    if not syms:
        return
    fn_names = _registry_fn_names(ctx.reg)
    ptrs = set(_ctx_ptr_names(ctx, text))
    for _n, _t in syms.items():
        if (_t or "").rstrip().endswith("*"):
            ptrs.add(_n)
    out = []
    pos = 0
    n = 0
    for m in _FNCALL_SITE.finditer(text):
        if m.start() < pos:
            continue
        nm = m.group("n")
        ty = syms.get(nm)
        if not ty or "(" in ty:
            continue
        if nm in _CALL_KEYWORDS or nm in _CRT_NAMES or nm in fn_names:
            continue
        op = m.end() - 1
        cl = _balanced_close(text, op)
        if cl < 0:
            continue
        inner = text[op + 1:cl].strip()
        args = _split_args(inner) if inner else []
        ptypes = []
        for a in args:
            ptypes.append("void *" if _arg_is_pointerish(a.strip(), ptrs)
                          else "int")
        cast = "int (__cdecl *)(%s)" % (", ".join(ptypes) if ptypes else "void")
        out.append(text[pos:m.start()])
        out.append("((%s)%s)" % (cast, nm))
        pos = m.end()
        n += 1
        ctx.sites.append(Site(
            "indirect_call", "%s(%s)" % (nm, ", ".join(ptypes)),
            "callee `%s` is a %s VARIABLE holding a code pointer -> "
            "call through `%s` (C2064)" % (nm, ty, cast), True))
    if n:
        out.append(text[pos:])
        ctx.lines = "".join(out).split("\\n")


# ------------------------------------------- CW7: `this = ...` receiver local'''
s = s.replace(anchor, new, 1)

old2 = '''    # CW7/W5: pointer<->integer and incompatible-pointer comparison sites
    # (C2446) -- 32-bit cmp identity, codegen-neutral re-spelling.
    passes.pass_compare_harmonize(ctx)'''
if old2 not in s:
    old2 = '''    passes.pass_compare_harmonize(ctx)'''
assert old2 in s
new2 = old2 + '''
    # Stage 3b: bitwise operators on pointer/float operands (C2296) and
    # calls through code-pointer VARIABLES (C2064).
    passes.pass_bitop_harmonize(ctx)
    passes.pass_indirect_var_calls(ctx)'''
s = s.replace(old2, new2, 1)
open(p,'w',encoding='utf-8',newline='').write(s)
print('ok')
