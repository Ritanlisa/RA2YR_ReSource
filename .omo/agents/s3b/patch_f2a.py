p = r'D:\RA2YR_ReSource\tools\decomp_sys\pseudo.py'
s = open(p, encoding='utf-8').read()

old = '''def parse_body(body_lines):
    """Parse pseudocode body (no outer braces) into a Stmt list."""
    # join continuation lines: pseudocode statements end with ; { } or are headers
    text = "\\n".join(body_lines)
    return _parse_stmts(text)'''
assert old in s
new = '''# ---- Stage 3b: inline `__asm { ... }` blocks
#
# Hex-Rays renders x87 sequences as real inline-assembly blocks:
#   `__asm { fild dword ptr [esp+50h+var_34] } /*0x418f25*/`
#   `__asm /*0x418f34*/\\n{\\n  fild ...\\n  fstp ...\\n}`
# `_split_top` treats the braces as a C block, so the old pipeline emitted a
# bare `__asm;` statement and spilled every mnemonic into the C++ body
# (`fild [esp+..]` as a statement) -- C2065/C2400/C2059 in 194 bodies.
#
# The blocks are protected here (replaced by a one-line declaration marker
# that every pass treats as an ordinary local decl) and restored verbatim at
# emission time by `restore_asm_blocks`.
_ASM_OPEN = re.compile(r"__asm\\b\\s*(?:/\\*[^*]*\\*/\\s*)?\\{")
_ASM_MARK = "__asm_block_%d_"


def _asm_disp(expr):
    """IDA frame spellings -> MASM displacements.

    `var_34` is -0x34 from the frame base, `arg_4` is ebp+0xC, so
    `[esp+50h+var_34]` -> `[esp+50h-34h]` and `[esp+34h+arg_4]` ->
    `[esp+34h+0Ch]`.  Both are the same effective address the original
    instruction used.
    """
    def _var(m):
        sign, name = m.group(1), m.group(2)
        try:
            v = int(name, 16)
        except ValueError:
            return m.group(0)
        return "%s%Xh" % ("-" if sign == "+" else "+", v)

    expr = re.sub(r"([+\\-])\\s*var_([0-9A-Fa-f]+)\\b", _var, expr)

    def _arg(m):
        sign, name = m.group(1), m.group(2)
        try:
            v = int(name, 16)
        except ValueError:
            return m.group(0)
        off = 8 + v
        return "%s%Xh" % ("+" if sign == "+" else "-", off)

    expr = re.sub(r"([+\\-])\\s*arg_([0-9A-Fa-f]+)\\b", _arg, expr)
    return expr


# operand-size defaults for the x87 forms IDA leaves unsized (the export's
# local decl block is the only type source and it does not key the slot).
_ASM_SIZE_DEFAULT = {
    "fild": "dword ptr", "fistp": "dword ptr", "fist": "dword ptr",
    "fiadd": "dword ptr", "fisub": "dword ptr", "fimul": "dword ptr",
    "fidiv": "dword ptr", "fidivr": "dword ptr",
    "fld": "qword ptr", "fstp": "qword ptr", "fst": "qword ptr",
    "fadd": "qword ptr", "fsub": "qword ptr", "fsubr": "qword ptr",
    "fmul": "qword ptr", "fdiv": "qword ptr", "fdivr": "qword ptr",
    "fcom": "qword ptr", "fcomp": "qword ptr",
}
_ASM_SIZES = ("byte ptr", "word ptr", "dword ptr", "qword ptr",
              "tbyte ptr", "real4 ptr", "real8 ptr")


def _asm_line(ln):
    ln = ln.strip()
    if not ln or ln.startswith(";"):
        return ln
    ln = _asm_disp(ln)
    toks = ln.split(None, 1)
    op = toks[0].lower()
    rest = toks[1] if len(toks) > 1 else ""
    if rest and "[" in rest and not any(z in rest for z in _ASM_SIZES):
        dflt = _ASM_SIZE_DEFAULT.get(op)
        if dflt:
            ln = "%s %s %s" % (toks[0], dflt, rest)
    return ln


def _asm_block_text(body):
    lines = [_asm_line(x) for x in body.split("\\n")]
    lines = [x for x in lines if x]
    return "__asm {\\n" + "\\n".join("    " + x for x in lines) + "\\n}"


def protect_asm_blocks(text):
    """Replace every `__asm {...}` block by a marker decl line.

    Returns (text, blocks) where blocks[i] is the MASM text for marker i.
    """
    blocks = []
    out = []
    i = 0
    n = len(text)
    while True:
        m = _ASM_OPEN.search(text, i)
        if not m:
            out.append(text[i:])
            break
        out.append(text[i:m.start()])
        depth = 1
        j = m.end()
        while j < n and depth:
            if text[j] == "{":
                depth += 1
            elif text[j] == "}":
                depth -= 1
            j += 1
        body = text[m.end():j - 1]
        # the block may be followed by its `/*0xADDR*/` anchor
        k = j
        am = re.match(r"\\s*/\\*0x[0-9A-Fa-f]+\\*/", text[k:])
        if am:
            k += am.end()
        out.append("\\nint %s;\\n" % (_ASM_MARK % len(blocks)))
        blocks.append(_asm_block_text(body))
        i = k
    return "".join(out), blocks


_ASM_RESTORE = re.compile(r"^\\s*int\\s+(__asm_block_(\\d+)_)\\s*;\\s*$")


def restore_asm_blocks(lines, blocks):
    """Marker decl lines -> the original `__asm { ... }` block."""
    if not blocks:
        return lines
    out = []
    for ln in lines:
        m = _ASM_RESTORE.match(ln)
        if m and int(m.group(2)) < len(blocks):
            blk = blocks[int(m.group(2))]
            for k, bl in enumerate(blk.split("\\n")):
                out.append(bl if k == 0 else "    " + bl)
        else:
            out.append(ln)
    return out


def parse_body(body_lines):
    """Parse pseudocode body (no outer braces) into a Stmt list."""
    # join continuation lines: pseudocode statements end with ; { } or are headers
    text = "\\n".join(body_lines)
    return _parse_stmts(text)'''
s = s.replace(old, new, 1)
open(p, 'w', encoding='utf-8', newline='').write(s)
print('pseudo patched')
