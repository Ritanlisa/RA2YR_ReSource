"""ir.bind -- bind AST value nodes to facts recovered from the function's own
disassembly.

For every literal / subscript / member / global-reference node the binder
tries to establish one of three states:

    confirmed    identity is visible in the disassembly (same value, same
                 offset, same resolved data address, same access width);
    correctable  the node does not match the disassembly but the correct fact
                 is recoverable -- an unmatched immediate, a different member
                 displacement, a data-symbol load with the same value, or a
                 memory operand width;
    unknown      no recoverable fact (constant encoded as xor/inc/test, base
                 register not traceable, ...).

Matching is deliberately loose and ordered: strong identity first (absolute
data address), then source-order alignment of member accesses against
non-stack memory operands (the "statement order + register-chain" loose
association), then FP-literal <-> data-symbol loads, then comparison
signedness.  The evaluation report (``.omo/agents/ir_eval/report.md`` §3)
measured the binding ceiling this module is aiming at.
"""
import re
import struct

PLATE_RE = re.compile(
    r"\b(?P<pre>dbl|flt|stru|dword|word|byte|qword|tbyte|xmmword|unk|off)"
    r"_(?P<hex>[0-9A-Fa-f]{5,8})\b")
DATA_GLOBAL_RE = re.compile(r"\bDataGlobal_([0-9A-Fa-f]{6,8})\b")
GLOBAL_NAME_RE = re.compile(
    r"^(?:DataGlobal_[0-9A-Fa-f]{6,8}|(?:dbl|flt|stru|dword|word|byte|qword|"
    r"tbyte|xmmword|unk|off)_[0-9A-Fa-f]{5,8}|g_[A-Za-z_]\w*)$")

REG_W = {
    "al": 1, "ah": 1, "bl": 1, "bh": 1, "cl": 1, "ch": 1, "dl": 1, "dh": 1,
    "ax": 2, "bx": 2, "cx": 2, "dx": 2, "si": 2, "di": 2, "sp": 2, "bp": 2,
    "eax": 4, "ebx": 4, "ecx": 4, "edx": 4, "esi": 4, "edi": 4, "esp": 4,
    "ebp": 4,
}
PTR_W = {"byte": 1, "word": 2, "dword": 4, "qword": 8, "tbyte": 10,
         "xmmword": 16}
WIDTH_CTYPE = {1: "unsigned char", 2: "unsigned short", 4: "unsigned int",
               8: "unsigned __int64"}
SIGNED_JCC = {"jl", "jle", "jg", "jge"}
UNSIGNED_JCC = {"jb", "jbe", "ja", "jae"}
REL_JCC = SIGNED_JCC | UNSIGNED_JCC
REL_OPS = {"<", ">", "<=", ">="}
ASM_LINE_RE = re.compile(r"^\s*([0-9A-Fa-f]+):\s*(.*)$")
LABEL_RE = re.compile(r"^\s*(?:loc|LABEL|short)?_?[0-9A-Fa-f]+:\s*$")


# ---------------------------------------------------------------- asm facts

class AsmMemOp:
    __slots__ = ("insn", "role", "width", "base", "disp", "sym", "addr",
                 "text", "mnemonic", "is_stack")

    def __init__(self, insn, role, width=None, base=None, disp=None, sym=None,
                 addr=None, text="", mnemonic="", is_stack=False):
        self.insn = insn
        self.role = role
        self.width = width
        self.base = base
        self.disp = disp
        self.sym = sym
        self.addr = addr
        self.text = text
        self.mnemonic = mnemonic
        self.is_stack = is_stack

    def __repr__(self):
        return "<Mem %s w=%s base=%s disp=%s sym=%s addr=%s>" % (
            self.role, self.width, self.base, self.disp, self.sym,
            hex(self.addr) if self.addr is not None else None)


class AsmInsn:
    __slots__ = ("idx", "addr", "mnemonic", "op_str", "operands", "imms",
                 "mem_ops", "syms", "raw")

    def __init__(self, idx, addr, mnemonic, op_str, raw):
        self.idx = idx
        self.addr = addr
        self.mnemonic = mnemonic
        self.op_str = op_str
        self.operands = []
        self.imms = []
        self.mem_ops = []
        self.syms = []
        self.raw = raw

    def __repr__(self):
        return "<Insn %x %s %s>" % (self.addr, self.mnemonic, self.op_str)


def _split_operands(op_str):
    out, cur, depth = [], [], 0
    for ch in op_str:
        if ch == "[":
            depth += 1
        elif ch == "]":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur).strip())
            cur = []
        else:
            cur.append(ch)
    if cur:
        out.append("".join(cur).strip())
    return [x for x in out if x]


def _parse_num(tok):
    tok = tok.strip().rstrip(",")
    if not tok:
        return None
    neg = False
    if tok[0] in "+-":
        neg = tok[0] == "-"
        tok = tok[1:]
    m = re.fullmatch(r"(0[xX][0-9A-Fa-f]+|[0-9A-Fa-f]+)h?", tok)
    if not m:
        return None
    s = m.group(1)
    try:
        v = int(s, 16) if (s.lower().startswith("0x") or tok.lower().endswith("h")) \
            else int(s, 10)
    except ValueError:
        return None
    return -v if neg else v


def _i32(v):
    v &= 0xFFFFFFFF
    return v - 0x100000000 if v & 0x80000000 else v


def _sym_addr(name):
    m = PLATE_RE.search(name)
    if m:
        return int(m.group("hex"), 16)
    m = DATA_GLOBAL_RE.search(name)
    if m:
        return int(m.group(1), 16)
    return None


def _sym_plate(name):
    """Plate prefix for an address (dbl_/flt_/dword_...) or None."""
    m = PLATE_RE.search(name)
    return m.group("pre") if m else None


def _reg_width(text):
    t = text.strip().lower()
    return REG_W.get(t)


def _mem_inner(operand):
    """Return the text inside the outermost [ ] (or None)."""
    a = operand.find("[")
    if a < 0:
        return None
    b = operand.rfind("]")
    if b <= a:
        return None
    return operand[a + 1:b]


def _ptr_width(operand):
    m = re.search(r"\b(byte|word|dword|qword|tbyte|xmmword)\s+ptr\b", operand)
    if m:
        return PTR_W[m.group(1)]
    return None


def _mem_parts(inner):
    """Parse `[ecx+0Ch]`-style inner text -> (base, disp, sym, addr, stack)."""
    base = None
    disp = None
    sym = None
    stack = False
    low = inner.lower()
    if "esp" in low or "ebp" in low or re.search(r"\barg_\w+|\bvar_\w+", inner):
        stack = True
    for reg in ("eax", "ebx", "ecx", "edx", "esi", "edi", "esp", "ebp"):
        if re.search(r"\b%s\b" % reg, low):
            base = reg
            break
    sm = PLATE_RE.search(inner) or DATA_GLOBAL_RE.search(inner)
    if sm:
        sym = sm.group(0)
    # displacement: the last +/- number that is not a scale factor
    nums = list(re.finditer(r"(?:([+-])\s*)?\b(0[xX][0-9A-Fa-f]+|[0-9A-Fa-f]+h|[0-9]+)\b",
                            inner))
    for m in nums:
        after = inner[m.end():].strip()
        if after.startswith("*"):
            continue
        v = _parse_num(m.group(2))
        if v is None:
            continue
        if m.group(1) == "-":
            v = -v
        disp = v
    if sym is None and base is None and disp is not None:
        return None, disp, None, disp & 0xFFFFFFFF, False
    addr = None
    if sym is not None:
        sa = _sym_addr(sym)
        if sa is not None:
            addr = (sa + (disp or 0)) & 0xFFFFFFFF
    elif base is None and disp is not None:
        addr = disp & 0xFFFFFFFF
    if stack:
        addr = None
    elif base is not None and disp is None:
        disp = 0
    return base, disp, sym, addr, stack


def parse_disasm(disasm_lines, name_addr=None):
    """Parse the full_export disassembly block into ordered AsmInsn objects."""
    insns = []
    for raw in disasm_lines:
        line = raw.split(";")[0].rstrip()
        if not line.strip() or LABEL_RE.match(line):
            continue
        m = ASM_LINE_RE.match(line)
        if not m:
            continue
        try:
            addr = int(m.group(1), 16)
        except ValueError:
            continue
        body = m.group(2).strip()
        if not body:
            continue
        parts = body.split(None, 1)
        mnemonic = parts[0].lower()
        op_str = parts[1].strip() if len(parts) > 1 else ""
        if mnemonic in ("db", "dd", "dw", "align", "assume", "public",
                        "extrn", "endp", "proc"):
            continue
        insn = AsmInsn(len(insns), addr, mnemonic, op_str, raw)
        insn.operands = _split_operands(op_str)
        insns.append(insn)
    _fill_insn_facts(insns, name_addr or {})
    return insns


def _fill_insn_facts(insns, name_addr):
    for ins in insns:
        mn = ins.mnemonic
        ops = ins.operands
        is_lea = mn == "lea"
        is_branch = mn.startswith("j") or mn in ("call", "loop", "jecxz")
        # register-width hint from a non-memory operand
        regw = None
        for o in ops:
            if "[" in o:
                continue
            w = _reg_width(o)
            if w:
                regw = w
                break

        def bare_symbol(txt):
            t = txt.strip()
            if not re.fullmatch(r"[A-Za-z_?$@][\w?$@]*", t):
                return None, None
            if _reg_width(t) or is_type_word_like(t):
                return None, None
            a = _sym_addr(t)
            if a is None:
                a = name_addr.get(t)
            return t, a

        for oi, op_txt in enumerate(ops):
            raw_txt = op_txt
            # IDA renders segment overrides on absolute symbol operands
            op_txt = re.sub(r"^(?:ds|cs|es|ss|fs|gs):", "", op_txt.strip(),
                            flags=re.I)
            low = op_txt.lower()
            # top-level immediates
            if "[" not in op_txt and not low.startswith("offset ") and \
                    not _reg_width(op_txt) and not _sym_addr(op_txt):
                bsym, _ba = bare_symbol(op_txt)
                if bsym is None:
                    if is_branch and oi == 0:
                        continue
                    v = _parse_num(op_txt)
                    if v is not None:
                        ins.imms.append(_i32(v))
            inner = _mem_inner(op_txt)
            if inner is None and low.startswith("offset "):
                base, disp, sym, addr, stack = None, None, None, None, False
                rest = op_txt[len("offset "):].strip()
                sm = PLATE_RE.search(rest) or DATA_GLOBAL_RE.search(rest)
                if sm:
                    sym = sm.group(0)
                    addr = _sym_addr(sym)
                else:
                    bsym, ba = bare_symbol(rest)
                    if bsym:
                        sym, addr = bsym, ba
                role = "addr"
            elif inner is None:
                if is_branch:
                    continue        # code target, not a data access
                bsym, ba = bare_symbol(op_txt)
                if bsym is None:
                    continue
                # bare global symbol operand == absolute memory access
                sym = bsym
                base, disp, stack = None, 0, False
                addr = ba
                role = "load"
            else:
                base, disp, sym, addr, stack = _mem_parts(inner)
                if sym is None:
                    # `[g_Global]` with a name-addressed symbol
                    bsym, ba = bare_symbol(inner)
                    if bsym:
                        sym, addr = bsym, ba
                        if disp is not None and addr is not None:
                            addr = (addr + disp) & 0xFFFFFFFF
                if is_lea:
                    role = "addr"
                else:
                    role = "load"
            width = _ptr_width(op_txt)
            if width is None:
                width = regw
            if is_lea:
                width = None
            if mn in ("cmp", "test") and role != "addr":
                role = "test"
            if mn in ("mov", "movzx", "movsx", "fld", "fst", "fstp", "fild",
                      "fistp") and oi == 0 and role == "load":
                role = "store"
            if mn in ("push", "pushad") and role == "addr":
                role = "addr"
            if mn in ("inc", "dec", "neg", "not", "or", "and", "xor", "add",
                      "sub", "shl", "shr", "sar") and oi == 0 and role == "load":
                role = "store"
            mem = AsmMemOp(ins.idx, role, width=width, base=base, disp=disp,
                           sym=sym, addr=addr, text=raw_txt, mnemonic=mn,
                           is_stack=stack or (base in ("esp", "ebp")))
            ins.mem_ops.append(mem)
            if sym:
                ins.syms.append(sym)
        # `fld dword ptr [x]` style: width of a memory operand may be the
        # other operand's width for fld/fstp; keep explicit ptr width.
        for mem in ins.mem_ops:
            if mem.width is None and mem.mnemonic in ("fld", "fstp", "fst",
                                                      "fadd", "fsub", "fmul",
                                                      "fdiv", "fcomp"):
                mem.width = 8


def is_type_word_like(t):
    return t in ("eax", "ebx", "ecx", "edx", "esi", "edi", "esp", "ebp",
                 "ax", "bx", "cx", "dx", "si", "di", "al", "ah", "bl", "bh",
                 "cl", "ch", "dl", "dh", "byte", "word", "dword", "qword",
                 "ptr", "short", "near", "far", "offset")


# ---------------------------------------------------------------- hpp layout

_CPP_TYPE_W = {
    "char": 1, "BOOL": 1, "bool": 1, "BYTE": 1, "UCHAR": 1,
    "short": 2, "unsigned short": 2, "WORD": 2, "USHORT": 2,
    "int": 4, "unsigned int": 4, "long": 4, "unsigned long": 4, "DWORD": 4,
    "UINT": 4, "ULONG": 4, "float": 4, "": 4,
    "double": 8, "unsigned __int64": 8, "__int64": 8, "LONGLONG": 8,
}
_MEM_LINE_RE = re.compile(
    r"^\s*(?P<type>[A-Za-z_][\w\s\*]*?)\s+(?P<name>[A-Za-z_]\w*)"
    r"\s*(?:\[[^\]]*\])?\s*;.*?//\s*0x([0-9A-Fa-f]+)\s*$")


class MemberInfo:
    __slots__ = ("name", "offset", "width", "is_pointer", "is_array")

    def __init__(self, name, offset, width, is_pointer, is_array):
        self.name = name
        self.offset = offset
        self.width = width
        self.is_pointer = is_pointer
        self.is_array = is_array

    def __repr__(self):
        return "<%s @0x%X w=%s%s>" % (self.name, self.offset, self.width,
                                      " ptr" if self.is_pointer else "")


def _type_width(type_text):
    t = type_text.strip()
    if "*" in t:
        return 4
    t = re.sub(r"\b(const|volatile)\b", " ", t)
    t = re.sub(r"\s+", " ", t).strip()
    if t in _CPP_TYPE_W:
        return _CPP_TYPE_W[t]
    if "char" in t:
        return 1
    if "short" in t:
        return 2
    if "double" in t or "__int64" in t:
        return 8
    return 4


def _pointee_width(type_text):
    """Element width of a pointer type: char* -> 1, T* -> sizeof(T), ** -> 4."""
    t = type_text.replace("*", " ").strip()
    if "*" in type_text:
        # count stars via the factor: 'char **' has pointee char*
        nstars = type_text.count("*")
        if nstars > 1:
            return 4
    t = re.sub(r"\b(const|volatile)\b", " ", t)
    t = re.sub(r"\s+", " ", t).strip()
    if t in _CPP_TYPE_W:
        return _CPP_TYPE_W[t]
    if "char" in t:
        return 1
    if "short" in t:
        return 2
    if "double" in t or "__int64" in t:
        return 8
    return 4


def _natural_align(width):
    if width and width >= 8:
        return 8
    if width and width >= 4:
        return 4
    if width == 2:
        return 2
    return 1


class MemberInfo:
    __slots__ = ("name", "offset", "width", "is_pointer", "is_array",
                 "elem_width", "elem_count", "hint", "type_text")

    def __init__(self, name, offset, width, is_pointer, is_array,
                 elem_width=4, elem_count=1, hint=None, type_text=""):
        self.name = name
        self.offset = offset
        self.width = width
        self.is_pointer = is_pointer
        self.is_array = is_array
        self.elem_width = elem_width
        self.elem_count = elem_count
        self.hint = hint
        self.type_text = type_text

    def __repr__(self):
        return "<%s @0x%X w=%s%s%s>" % (
            self.name, self.offset, self.width,
            " ptr" if self.is_pointer else "",
            " array[%d]" % self.elem_count if self.is_array else "")


def parse_hpp_layout(hpp_text):
    """Class name -> {member name -> MemberInfo} from a generated pilot hpp.

    Offsets are **computed from the declared member list with C layout rules**
    (natural alignment), not copied from the generator's ``// 0xNNN`` hint:
    the hint is what the generator intended, the computed offset is what the
    era compiler actually lays out (``char __pad_004[36]`` after a one-byte
    member shifts everything by one -- the AudioMixer m050 drift).

    Two things the pilot hpps get structurally wrong are modeled here:

    * a class that declares a ``virtual`` method gets a compiler-inserted
      vptr at offset 0, before every declared member (the hpp's own
      ``ptr_0_ptr`` is then just a normal member at +4).  Ignoring this made
      every member of a virtual class look 4 bytes early;
    * anonymous multi-evidence unions carry the offset in the ``@0xNNN``
      comment on the ``union`` line; their members are recorded at that base.
    """
    out = {}
    cur = None
    offset = 0
    union_base = None
    union_size = 0
    block = []

    def _emit_block(cls, lines):
        """Second pass for one class body: layout with the virtual-vptr rule."""
        base = 4 if any(re.match(r"^\s*virtual\b", ln) for ln in lines) else 0
        off = base
        ubase = None
        usize = 0
        for line in lines:
            mu = re.match(r"^\s*union\b", line)
            if mu:
                um = re.search(r"@0x([0-9A-Fa-f]+)", line)
                ubase = int(um.group(1), 16) if um else off
                usize = 0
                continue
            if re.match(r"^\s*};", line) and ubase is not None:
                off = max(off, ubase + usize)
                ubase = None
                usize = 0
                continue
            if re.match(r"^\s*(?:public|private|protected)\s*:", line):
                continue
            in_union = ubase is not None
            mm = _MEM_LINE_RE.match(line)
            if mm is None and in_union:
                mm = re.match(
                    r"^\s*(?P<type>[A-Za-z_][\w\s\*]*?)\s+(?P<name>[A-Za-z_]\w*)"
                    r"\s*(?:\[[^\]]*\])?\s*;\s*(?:/\*.*?\*/)?\s*$", line)
                if mm is None:
                    continue
            if mm is None:
                continue
            name = mm.group("name")
            ty = mm.group("type")
            hint = None
            if mm.re is _MEM_LINE_RE:
                hint = int(mm.group(3), 16)
            decl = line.split(";")[0]
            arr = re.search(r"\[\s*([0-9]+)\s*\]", decl)
            count = int(arr.group(1)) if arr else 0
            ptr = "*" in ty
            elem_w = _type_width(ty)
            w = 4 if ptr else elem_w
            size = (w * count) if (count and not ptr) else w
            if in_union:
                moff = ubase
                usize = max(usize, size)
            else:
                align = _natural_align(w)
                moff = (off + align - 1) // align * align
                off = moff + size
            cls[name] = MemberInfo(name, moff, w, ptr, bool(arr),
                                   elem_w, count or (1 if not arr else 0),
                                   hint, ty.strip())

    for line in hpp_text.splitlines():
        if cur is None:
            m = re.match(r"^\s*(?:class|struct)\s+([A-Za-z_]\w*)", line)
            if m and not line.rstrip().endswith(";"):
                cur = m.group(1)
                block = []
                depth = line.count("{") - line.count("}")
                continue
            continue
        block.append(line)
        depth += line.count("{") - line.count("}")
        # anonymous unions close with `};` too: only a `};` that returns the
        # brace depth to zero ends the class body
        if depth <= 0 and re.match(r"^\s*};", line):
            _emit_block(out.setdefault(cur, {}), block)
            cur = None
            block = []
    if cur is not None:
        _emit_block(out.setdefault(cur, {}), block)
    return out


# ---------------------------------------------------------------- AST sites

NAME_OFF_RE = re.compile(r"(?P<h>[0-9A-Fa-f]{1,4})$")


def _name_offset(name):
    """Offset encoded in a member name (m05B / field_50 / __pad_5C / m028).

    The trailing hex run must contain a digit and be preceded by a non-hex
    character, so `Load` (trailing 'ad') is not mistaken for 0xAD.
    """
    m = NAME_OFF_RE.search(name)
    if not m:
        return None
    h = m.group("h")
    if not any(c.isdigit() for c in h):
        return None
    if m.start() > 0 and name[m.start() - 1] in "0123456789abcdefABCDEF":
        return None
    if len(h) < 2:
        return None
    try:
        return int(h, 16)
    except ValueError:
        return None


def _num_value(text):
    """int value of a numeric literal (suffix-aware) or None."""
    t = text.strip()
    low = t.lower()
    # float literals are handled separately
    if "." in t or ("e" in low and not low.startswith("0x")):
        return None
    t = re.sub(r"[uUlL]+$", "", t)
    try:
        if low.startswith("0x"):
            return _i32(int(t, 16))
        return _i32(int(t, 10))
    except ValueError:
        return None


def _float_value(text):
    t = text.strip().lower().rstrip("fl")
    try:
        return float(t)
    except ValueError:
        return None


def _cast_type_of(node):
    if node.kind == "cast":
        return node.type_text
    return None


def _is_ptr_type(type_text):
    return type_text is not None and "*" in type_text


def _class_of_type(type_text):
    if not type_text:
        return None
    t = type_text.replace("*", " ")
    for part in reversed(re.findall(r"[A-Za-z_]\w*", t)):
        if part in ("const", "volatile", "unsigned", "signed", "int", "char",
                    "short", "long", "void", "double", "float"):
            continue
        return part
    return None


class Site:
    __slots__ = ("kind", "node", "status", "category", "value", "target",
                 "base_text", "role", "width", "offset", "cls", "name",
                 "evidence", "stmt")

    def __init__(self, kind, node, stmt=0):
        self.kind = kind
        self.node = node
        self.stmt = stmt
        self.status = "unknown"
        self.category = None
        self.value = None
        self.target = {}
        self.base_text = None
        self.role = "value"
        self.width = None
        self.offset = None
        self.cls = None
        self.name = None
        self.evidence = ""

    def mark(self, status, category, evidence, **target):
        self.status = status
        self.category = category
        self.evidence = evidence
        self.target.update(target)

    def __repr__(self):
        return "<Site %s %s %s off=%s val=%s %s>" % (
            self.kind, getattr(self.node, "name", ""), self.status,
            self.offset, self.value, self.evidence)


def _eval_global_addr(expr, member_map=None, cls=None, depth=0):
    """Best-effort constant address of an lvalue expression.

    Returns (symbol_name, constant_offset, element_width) or None.  Handles
    `&G`, `(char *)&G`, `((char *)&G)[0x5C + 48]`, `&stru_X.__pad_5C[...]`.
    """
    if depth > 8 or expr is None:
        return None
    k = expr.kind
    if k == "paren":
        return _eval_global_addr(expr.expr, member_map, cls, depth + 1)
    if k == "cast":
        inner = _eval_global_addr(expr.expr, member_map, cls, depth + 1)
        if inner is None:
            return None
        w = _pointee_width(expr.type_text) if expr.type_text else None
        return (inner[0], inner[1], w or inner[2])
    if k == "unary" and expr.op == "&":
        inner = _eval_global_addr(expr.expr, member_map, cls, depth + 1)
        return inner
    if k == "id":
        if GLOBAL_NAME_RE.match(expr.name):
            a = _sym_addr(expr.name)
            if a is not None:
                return (expr.name, 0, None)
        return None
    if k == "member":
        base = _eval_global_addr(expr.base, member_map, cls, depth + 1)
        if base is None:
            return None
        off = _name_offset(expr.name)
        if off is None and member_map:
            mi = (member_map.get(base[0]) or {}).get(expr.name)
            if mi:
                off = mi.offset
        if off is None:
            return None
        return (base[0], base[1] + off, base[2])
    if k == "index":
        base = _eval_global_addr(expr.base, member_map, cls, depth + 1)
        if base is None:
            return None
        iv = _const_int(expr.idx)
        if iv is None:
            return None
        elem = base[2] or 1
        return (base[0], base[1] + iv * elem, elem)
    return None


def _const_int(expr):
    if expr is None:
        return None
    k = expr.kind
    if k == "num":
        return _num_value(expr.text)
    if k == "paren":
        return _const_int(expr.expr)
    if k == "cast":
        return _const_int(expr.expr)
    if k == "unary" and expr.op in ("+", "-"):
        v = _const_int(expr.expr)
        if v is None:
            return None
        return -v if expr.op == "-" else v
    if k == "bin" and expr.op in ("+", "-", "*", "/", "<<", ">>"):
        a, b = _const_int(expr.lhs), _const_int(expr.rhs)
        if a is None or b is None:
            return None
        if expr.op == "+":
            return _i32(a + b)
        if expr.op == "-":
            return _i32(a - b)
        if expr.op == "*":
            return _i32(a * b)
        if expr.op == "/":
            return _i32(int(a / b)) if b else None
        if expr.op == "<<":
            return _i32(a << (b & 31))
        if expr.op == ">>":
            return _i32(a >> (b & 31))
    return None


def collect_sites(ast, text, member_map=None, class_name=None,
                  used_globals=None):
    """Walk statements in source order and record bindable sites."""
    used_globals = used_globals or {}
    sites = []
    local_names = set()

    def base_role(node, parents):
        ps = list(parents)
        while ps and ps[-1].kind == "paren":
            ps.pop()
        if not ps:
            return "value"
        p = ps[-1]
        if p.kind == "unary" and p.op == "&":
            return "address"
        if p.kind == "unary" and p.op == "*":
            return "ptr_value"
        if p.kind == "cast" and len(ps) >= 2:
            gp = ps[-2]
            if gp.kind == "unary" and gp.op == "*":
                return "ptr_value"
            if _is_ptr_type(p.type_text) and gp.kind in ("call", "assign",
                                                         "return", "ternary",
                                                         "bin", "unary"):
                # pointer cast applied to the member value (member-as-pointer)
                return "ptr_value"
        if p.kind == "cast" and _is_ptr_type(p.type_text):
            return "ptr_value"
        return "value"

    def _skip_as_subexpr(parents):
        ps = list(parents)
        while ps and ps[-1].kind == "paren":
            ps.pop()
        # `arr[i]` is handled by the index site; a member used as the base of
        # a member chain (`this->Type->Field`) is a real site: its offset is
        # the displacement of the chain's first load
        return bool(ps) and ps[-1].kind == "index"

    def rec(node, parents, stmt_idx, idx_ctx=False):
        if node is None:
            return
        k = node.kind
        if k == "num":
            v = _num_value(node.text)
            fv = _float_value(node.text) if v is None else None
            s = Site("literal", node, stmt_idx)
            s.value = v if v is not None else fv
            # sign contributed by the enclosing operator: `-100` is a unary
            # minus over the literal 100, `x - 100` negates the rhs.  The
            # effective value is what the machine compares/stores.
            ps = list(parents)
            while ps and ps[-1].kind == "paren":
                ps.pop()
            neg = False
            if ps:
                p = ps[-1]
                if p.kind == "unary" and p.op == "-":
                    neg = True
                elif p.kind == "bin" and p.op == "-" and p.rhs is node:
                    neg = True
            s.target["neg"] = neg
            s.category = "int" if v is not None else ("float" if fv is not None else None)
            if v is not None:
                s.width = 4
            else:
                s.width = 8 if node.text.lower().rstrip("fl").count(".") == 1 else 8
            s.role = "index" if idx_ctx else "value"
            if idx_ctx:
                s.mark("unknown", "index_literal", "awaiting displacement match")
            sites.append(s)
        elif k == "id":
            if GLOBAL_NAME_RE.match(node.name):
                s = Site("global", node, stmt_idx)
                s.name = node.name
                s.role = base_role(node, parents)
                a = _sym_addr(node.name)
                s.target["addr"] = a
                ty = used_globals.get(node.name)
                s.width = _type_width(ty) if ty else None
                sites.append(s)
        elif k == "member" and not _skip_as_subexpr(parents):
            s = Site("member", node, stmt_idx)
            s.name = node.name
            s.role = base_role(node, parents)
            s.base_text = text[node.base.start:node.base.end]
            # declared class
            bc = node.base
            if bc.kind == "id" and bc.name == "this":
                s.cls = class_name
            elif bc.kind == "cast":
                s.cls = _class_of_type(bc.type_text)
            elif bc.kind == "paren" and bc.expr.kind == "cast":
                s.cls = _class_of_type(bc.expr.type_text)
            if s.cls and member_map:
                mi = (member_map.get(s.cls) or {}).get(node.name)
                if mi:
                    s.offset = mi.offset
                    # an array member's value is the element address
                    s.width = mi.elem_width if mi.is_array else mi.width
                    s.target["declared_ptr"] = mi.is_pointer
                    s.target["declared_array"] = mi.is_array
                    s.target["elem"] = mi.elem_width
                    s.target["hint_offset"] = mi.hint
                    s.target["decl_type"] = mi.type_text
                    if mi.is_array and s.role == "value":
                        s.role = "address"
            no = _name_offset(node.name)
            s.target["name_off"] = no
            if s.offset is None:
                s.offset = no
            if s.width is None:
                s.width = 4
            sites.append(s)
        elif k == "index":
            s = Site("index", node, stmt_idx)
            s.role = base_role(node, parents)
            ev = _eval_global_addr(node, member_map, class_name)
            if ev is not None:
                sym, off, elem = ev
                s.name = sym
                s.offset = off
                s.base_text = sym
                s.width = elem
                s.target["addr"] = (_sym_addr(sym) or 0) + off
            else:
                iv = _const_int(node.idx)
                s.value = iv
                # `this->arr[i]` / `ptr->arr[i]`: address = member offset +
                # i * element width (declared array only -- a genuine pointer
                # member dereferences twice and must not be collapsed)
                b = node.base
                while b.kind == "paren":
                    b = b.expr
                if b.kind == "member" and iv is not None:
                    mini = None
                    bcls = None
                    if b.base.kind == "id" and b.base.name == "this":
                        bcls = class_name
                    elif b.base.kind == "cast":
                        bcls = _class_of_type(b.base.type_text)
                    if bcls and member_map:
                        mini = (member_map.get(bcls) or {}).get(b.name)
                    if mini is not None and not mini.is_pointer:
                        elem = mini.elem_width if mini.is_array else mini.width
                        s.offset = mini.offset + iv * (elem or 1)
                        s.width = elem or mini.width
                        s.base_text = text[b.base.start:b.base.end]
                        s.target["member_base"] = text[b.base.start:b.base.end]
                        s.target["member_op"] = b.op
                        s.target["member_off"] = mini.offset
                        if mini.hint is not None:
                            s.target["hint_offset"] = mini.hint + iv * (elem or 1)
                        s.target["decl_type"] = mini.type_text
                        s.target["declared_ptr"] = mini.is_pointer
                        s.target["declared_array"] = mini.is_array
                elif iv is not None and s.offset is None:
                    s.offset = iv
            sites.append(s)
        elif k == "bin" and node.op in REL_OPS:
            s = Site("cmp", node, stmt_idx)
            s.target["op"] = node.op
            sites.append(s)

        # recurse in source order
        if k == "block":
            for st in node.stmts:
                rec(st, parents + [node], stmt_idx)
                stmt_idx += 1
        elif k == "if":
            rec(node.cond, parents + [node], stmt_idx)
            rec(node.then, parents + [node], stmt_idx)
            rec(node.els, parents + [node], stmt_idx)
        elif k in ("while", "do"):
            rec(node.cond if k == "while" else node.body, parents + [node], stmt_idx)
            rec(node.body if k == "while" else node.cond, parents + [node], stmt_idx)
        elif k == "for":
            rec(node.init, parents + [node], stmt_idx)
            rec(node.cond, parents + [node], stmt_idx)
            rec(node.step, parents + [node], stmt_idx)
            rec(node.body, parents + [node], stmt_idx)
        elif k == "switch":
            rec(node.expr, parents + [node], stmt_idx)
            rec(node.body, parents + [node], stmt_idx)
        elif k == "case":
            rec(node.value, parents + [node], stmt_idx)
            rec(node.body, parents + [node], stmt_idx)
        elif k == "label":
            rec(node.body, parents + [node], stmt_idx)
        elif k == "return":
            rec(node.value, parents + [node], stmt_idx)
        elif k == "expr":
            rec(node.value, parents + [node], stmt_idx)
        elif k == "decl":
            for nm, init in node.decls:
                local_names.add(nm)
                rec(init, parents + [node], stmt_idx)
        elif k == "paren":
            rec(node.expr, parents + [node], stmt_idx)
        elif k in ("unary", "post", "cast"):
            rec(node.expr, parents + [node], stmt_idx)
        elif k == "call":
            rec(node.func, parents + [node], stmt_idx)
            for a in node.args:
                rec(a, parents + [node], stmt_idx)
        elif k == "index":
            rec(node.base, parents + [node], stmt_idx)
            rec(node.idx, parents + [node], stmt_idx, idx_ctx=True)
        elif k == "member":
            rec(node.base, parents + [node], stmt_idx)
        elif k == "memptr":
            rec(node.base, parents + [node], stmt_idx)
            rec(node.expr, parents + [node], stmt_idx)
        elif k == "assign":
            rec(node.lhs, parents + [node], stmt_idx)
            rec(node.rhs, parents + [node], stmt_idx)
        elif k == "ternary":
            rec(node.cond, parents + [node], stmt_idx)
            rec(node.a, parents + [node], stmt_idx)
            rec(node.b, parents + [node], stmt_idx)
        elif k == "bin":
            rec(node.lhs, parents + [node], stmt_idx)
            rec(node.rhs, parents + [node], stmt_idx)
        elif k == "comma":
            for e in node.exprs:
                rec(e, parents + [node], stmt_idx)

    # statements are the top-level shape
    if isinstance(ast, list):
        for i, st in enumerate(ast):
            rec(st, [], i)
    else:
        rec(ast, [], 0)
    return sites


# ---------------------------------------------------------------- binding

class DataReader:
    """Lazy gamemd.exe reader for data-symbol value checks (FP constants)."""

    def __init__(self, exe_path=None):
        self.exe_path = exe_path or r"D:\RA2MD\gamemd.exe"
        self._pe = None
        self._cache = {}

    def read(self, va, size):
        key = (va, size)
        if key in self._cache:
            return self._cache[key]
        try:
            if self._pe is None:
                from tools.codegen_match.extract import _get_pe
                self._pe = _get_pe(self.exe_path)
            data = self._pe.read(va, size)
        except Exception:
            data = None
        self._cache[key] = data
        return data

    def double(self, va):
        d = self.read(va, 8)
        if not d or len(d) < 8:
            return None
        return struct.unpack("<d", d)[0]

    def float(self, va):
        d = self.read(va, 4)
        if not d or len(d) < 4:
            return None
        return struct.unpack("<f", d)[0]


class BindReport:
    def __init__(self):
        self.sites = []
        self.asm = []
        self.stats = {}

    def of(self, kind):
        return [s for s in self.sites if s.kind == kind]

    def summary(self):
        st = {}
        for s in self.sites:
            st.setdefault(s.kind, {}).setdefault(s.status, 0)
            st[s.kind][s.status] += 1
        return st


def bind(ast, text, disasm_lines, member_map=None, class_name=None,
         used_globals=None, reader=None, name_addr=None, loose=True):
    """Bind all value nodes.  Returns a :class:`BindReport`."""
    asm = parse_disasm(disasm_lines, name_addr=name_addr)
    sites = collect_sites(ast, text, member_map=member_map,
                          class_name=class_name, used_globals=used_globals)
    for s in sites:
        if s.kind == "global" and s.target.get("addr") is None and name_addr:
            a = name_addr.get(s.name)
            if a is not None:
                s.target["addr"] = a
                # a spelling the diffasm map cannot resolve needs the
                # address-encoding canonical name even when the address is
                # right (extern_reloc family)
                s.target["canon_needed"] = _sym_addr(s.name) is None
    rep = BindReport()
    rep.asm = asm
    rep.sites = sites

    all_ops = [op for ins in asm for op in ins.mem_ops]
    value_ops = [op for op in all_ops
                 if op.role in ("load", "store", "test") and not op.is_stack]
    addr_ops = [op for op in all_ops if op.role == "addr" and not op.is_stack]
    consumed = set()

    # ---- tier A: absolute data address identity (strong) ---------------
    for s in sites:
        if s.status != "unknown":
            continue
        if s.kind not in ("index", "global"):
            continue
        a = s.target.get("addr")
        if a is None:
            continue
        cands = [op for op in value_ops if id(op) not in consumed and
                 op.addr == a]
        if not cands:
            # address-of uses match `lea`/`push offset`
            cands = [op for op in addr_ops if id(op) not in consumed and
                     op.addr == a]
            if cands:
                op = cands[0]
                consumed.add(id(op))
                s.mark("confirmed", "address", "addr 0x%X == lea" % a,
                       asm_index=op.insn, addr=a)
                continue
            continue
        op = cands[0]
        consumed.add(id(op))
        if s.role == "value" and op.width and s.width and op.width != s.width:
            s.mark("correctable", "width", "addr 0x%X width %d != %d" %
                   (a, op.width, s.width), asm_index=op.insn, width=op.width,
                   addr=a)
        elif s.kind == "global" and s.target.get("canon_needed"):
            s.mark("correctable", "symbol_canon",
                   "global %s resolves to 0x%X; symbol spelling not in the "
                   "verifier map" % (s.name, a),
                   asm_index=op.insn, addr=a, width=op.width or 4)
        else:
            s.mark("confirmed", "addr", "addr 0x%X" % a, asm_index=op.insn)

    # propagate strong address-identity corrections to duplicate sites
    # (the same global/subscript usually appears more than once -- e.g. the
    # initializer and the guarding `if`; both must be rewritten)
    strong = {}
    for s in sites:
        if s.status == "correctable" and s.kind in ("index", "global"):
            a = s.target.get("addr")
            if a is not None:
                strong.setdefault((s.kind, a), s)
    for s in sites:
        if s.status != "unknown" or s.kind not in ("index", "global"):
            continue
        a = s.target.get("addr")
        if a is None:
            continue
        t = strong.get((s.kind, a))
        if t is None or t is s:
            continue
        s.mark("correctable", t.category, t.evidence + " (duplicate site)",
               **dict(t.target))

    # ---- tier B: member / subscript offset alignment -------------------
    member_sites = [s for s in sites
                    if s.kind == "member" or
                    (s.kind == "index" and s.target.get("member_off") is not None)]
    pools = {
        "value": [op for op in value_ops if op.base is not None and
                  op.disp is not None],
        "addr": [op for op in addr_ops if op.base is not None and
                 op.disp is not None],
    }
    all_reg_ops = sorted(pools["value"] + pools["addr"],
                         key=lambda op: (op.insn, op.base or ""))

    def _mark_member(s, op, why):
        off = op.disp
        s.target["asm_role"] = op.role
        s.target["asm_width"] = op.width
        s.target["asm_mnemonic"] = op.mnemonic
        addr_like = (s.role != "value") or (op.role == "addr")
        if why == "offset":
            if addr_like:
                s.mark("confirmed", "member_addr", "offset 0x%X (role %s)" %
                       (off, s.role), asm_index=op.insn, offset=off)
            elif op.width and s.width and op.width != s.width:
                s.mark("correctable", "member_width",
                       "offset 0x%X width %d != %d" % (off, op.width, s.width),
                       asm_index=op.insn, offset=off, width=op.width)
            else:
                s.mark("confirmed", "member_offset", "offset 0x%X" % off,
                       asm_index=op.insn, offset=off)
        elif why in ("name_off", "hint"):
            s.mark("correctable",
                   "member_address" if addr_like else "member_offset",
                   "%s offset 0x%X != layout %s" %
                   ("hint" if why == "hint" else "name",
                    off, ("0x%X" % s.offset) if s.offset is not None else "?"),
                   asm_index=op.insn, offset=off,
                   width=op.width or s.width)
        else:
            if s.offset is not None and off is not None and s.offset != off \
                    and 0 <= off < 0x10000 and s.offset < 0x10000:
                if s.role != "value":
                    s.mark("correctable", "member_address",
                           "ordered member disp 0x%X (layout 0x%X, role %s)" %
                           (off, s.offset, s.role),
                           asm_index=op.insn, offset=off)
                else:
                    s.mark("correctable", "member_offset",
                           "ordered member disp 0x%X (layout 0x%X)" %
                           (off, s.offset), asm_index=op.insn, offset=off,
                           width=op.width or s.width)
            else:
                s.mark("unknown", "order_only", "ordered pair w/o evidence")

    # phase 1a: generator-hint offset (the hpp comment carries IDA's true
    # offset; the computed layout is what the era compiler really used, and
    # for virtual classes / alignment-drifted pads the two disagree).  The
    # hint is only trusted when no other member of the same class computes to
    # that offset (otherwise the operand is ambiguous).  Runs before the
    # computed-layout phase: a drift can make a member's *computed* offset
    # equal a different member's true offset, and the hint wins that tie.
    hint_count = {}
    if member_map:
        for cls, members in member_map.items():
            by_off = {}
            for mi in members.values():
                if mi.offset is not None:
                    by_off.setdefault(mi.offset, set()).add(mi.name)
            hint_count[cls] = by_off
    for s in member_sites:
        if s.status != "unknown":
            continue
        h = s.target.get("hint_offset")
        if h is None or h == s.offset:
            continue
        by_off = hint_count.get(s.cls) or {}
        if len(by_off.get(h, ())) > 1:
            continue
        cands = [op for op in all_reg_ops
                 if id(op) not in consumed and op.disp == h]
        if cands:
            op = cands[0]
            consumed.add(id(op))
            _mark_member(s, op, "hint")
    # phase 1: exact layout-offset matches (both pools; this lets an array
    # member used as an address still bind to the folded store/load operand)
    for s in member_sites:
        if s.status != "unknown" or s.offset is None:
            continue
        cands = [op for op in all_reg_ops
                 if id(op) not in consumed and op.disp == s.offset]
        if cands:
            op = cands[0]
            consumed.add(id(op))
            _mark_member(s, op, "offset")
    # phase 2: name-encoded offset matches (layout drift evidence)
    for s in member_sites:
        if s.status != "unknown":
            continue
        no = s.target.get("name_off")
        if no is None:
            continue
        cands = [op for op in all_reg_ops
                 if id(op) not in consumed and op.disp == no]
        if cands:
            op = cands[0]
            consumed.add(id(op))
            _mark_member(s, op, "name_off")
    # phase 3: order fallback for scalar value members only (address/array
    # sites need identity -- an ordered guess on `lea` is too weak)
    leftover = [s for s in member_sites
                if s.status == "unknown" and s.role == "value" and
                not s.target.get("declared_array")]
    free_ops = [op for op in pools["value"]
                if id(op) not in consumed and op.disp < 0x10000]
    if leftover and len(leftover) == len(free_ops):
        for s, op in zip(leftover, free_ops):
            consumed.add(id(op))
            _mark_member(s, op, "order")

    # ---- tier C: unresolved global symbol -> absolute address ----------
    # only spellings with no address identity of their own (g_* names): an
    # address-encoded name (DataGlobal_/plate) that the asm never touches is
    # a *wrong* name, and pairing it with some other absolute is a gamble.
    gsites = [s for s in sites if s.kind == "global" and s.status == "unknown"
              and _sym_addr(s.name) is None]
    abs_ops = [op for op in value_ops if op.addr is not None and
               id(op) not in consumed and op.base is None]
    if gsites and abs_ops and len(gsites) == len(abs_ops):
        for s, op in zip(gsites, abs_ops):
            consumed.add(id(op))
            s.mark("correctable", "symbol",
                   "global %s <-> absolute 0x%X" % (s.name, op.addr),
                   asm_index=op.insn, addr=op.addr, width=op.width or 4)

    # ---- tier D: FP literal <-> data-symbol load -----------------------
    if reader is not None:
        fp_ops = [op for op in value_ops
                  if id(op) not in consumed and op.addr is not None and
                  op.width in (4, 8) and
                  op.mnemonic in ("fld", "fadd", "fsub", "fmul", "fdiv",
                                  "fcomp", "fcompp", "fstp", "fst") and
                  op.role in ("load", "test")]
        lits = [s for s in sites if s.kind == "literal" and
                s.status in ("unknown", "confirmed") and s.category == "float"]
        unmatched_lits = [s for s in lits if s.status == "unknown"]
        unmatched_ops = [op for op in fp_ops if id(op) not in consumed]
        if len(unmatched_lits) == len(unmatched_ops) and unmatched_ops:
            for s, op in zip(unmatched_lits, unmatched_ops):
                real = reader.double(op.addr) if op.width == 8 else \
                    reader.float(op.addr)
                if real is None:
                    continue
                if abs(real - s.value) <= abs(real) * 1e-12 + 1e-30:
                    consumed.add(id(op))
                    plate = "dbl" if op.width == 8 else "flt"
                    pl = _sym_plate(op.text) or _sym_plate(op.text) or plate
                    s.mark("correctable", "symbolize",
                           "float %.17g == %s_%X" % (s.value,
                                                     "dbl" if op.width == 8 else "flt",
                                                     op.addr),
                           asm_index=op.insn, addr=op.addr,
                           symbol="%s_%X" % ("dbl" if op.width == 8 else "flt",
                                             op.addr),
                           width=op.width)
        # also: unbound int literal equal to a dword data value is ignored
        # (identity is not visible; left to the type layer)

    # ---- tier E: integer literal multiset + conservative correction ----
    int_lits = [s for s in sites if s.kind == "literal" and
                s.category == "int" and s.role != "index"]
    pool = {}
    for op in value_ops:
        for v in _insn_imms(asm, op.insn):
            pool[v] = pool.get(v, 0) + 1
    left = []
    for s in int_lits:
        v = s.value
        eff = -v if (v is not None and s.target.get("neg")) else v
        if pool.get(eff, 0) > 0:
            pool[eff] -= 1
            s.mark("confirmed", "literal", "immediate %d" % eff)
        else:
            left.append(s)
    left_imms = sorted(v for v, n in pool.items() for _ in range(n))
    if loose and len(left) == 1 and len(left_imms) == 1 and left_imms[0] not in (0, 1):
        s = left[0]
        eff = left_imms[0]
        lit = -eff if s.target.get("neg") else eff
        s.mark("correctable", "literal_value",
               "single unmatched literal %s <-> immediate %d" %
               (s.value, eff), value=lit)

    # ---- subscript literals vs non-stack displacements -----------------
    idx_lits = [s for s in sites if s.kind == "literal" and s.role == "index"]
    disp_pool = {}
    for op in value_ops:
        if op.disp:
            disp_pool[abs(op.disp)] = disp_pool.get(abs(op.disp), 0) + 1
    for s in idx_lits:
        v = s.value
        if v is None:
            continue
        hit = None
        for scale in (1, 2, 4, 8):
            cand = abs(v * scale)
            if disp_pool.get(cand, 0) > 0:
                hit = cand
                break
            if v and abs(v) % scale == 0 and disp_pool.get(abs(v) // scale, 0) > 0:
                hit = abs(v) // scale
                break
        if hit is not None:
            disp_pool[hit] -= 1
            s.mark("confirmed", "index_disp", "index %d * scale == disp 0x%X" %
                   (v, hit))
        else:
            s.mark("unknown", "index_disp", "no displacement match")

    # ---- tier F: comparison signedness --------------------------------
    cmp_sites = [s for s in sites if s.kind == "cmp"]
    rel = []
    for i, ins in enumerate(asm):
        # only real `cmp` pairs: `test reg,reg` guards boolean/null checks and
        # would desynchronise the source-order pairing of relational sites
        if ins.mnemonic != "cmp":
            continue
        for j in (i + 1, i + 2):
            if j >= len(asm):
                break
            mn = asm[j].mnemonic
            if mn in REL_JCC:
                rel.append((ins.idx, mn in SIGNED_JCC, mn))
                break
            if mn in ("jmp",):
                break
    if cmp_sites and len(cmp_sites) == len(rel):
        for s, (_ii, signed, mn) in zip(cmp_sites, rel):
            node = s.node
            if node.lhs.kind == "num" and node.rhs.kind == "num":
                s.mark("confirmed", "cmp_literal", "both operands literal")
                continue
            s.mark("correctable", "signedness",
                   "cmp %s <-> %s (%s)" %
                   (node.op, mn, "signed" if signed else "unsigned"),
                   sign="signed" if signed else "unsigned", jcc=mn)

    # stats
    rep.stats = rep.summary()
    return rep


def _insn_imms(asm, idx):
    if 0 <= idx < len(asm):
        return asm[idx].imms
    return []
