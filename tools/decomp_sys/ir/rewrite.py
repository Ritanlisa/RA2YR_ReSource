"""ir.rewrite -- value-layer rewrites for correctable AST nodes.

The rewriter consumes a :class:`ir.bind.BindReport` and emits span edits on
the parsed body text.  Three value-layer repairs (matching the evaluation
report's "literal value / symbolization / width normalization"):

1. **member offset / width**: a member node whose layout displacement or
   access width disagrees with the disassembly is rewritten to offset-true
   storage access, e.g.
   ``this->m050`` -> ``*(unsigned int *)((char *)this + 0x50)``;
   a member used as a pointer value (``*(int *)(this->m05B)``) becomes
   ``*(int *)((char *)this + 0x5B)`` (the pipeline had memberized a raw
   address computation).

2. **symbolization**: a floating literal that the original loads from a
   .rdata/.data symbol becomes that symbol (``1.0`` -> ``dbl_7E1718``);
   an unresolved ``g_*`` global becomes the address-encoding canonical
   symbol ``DataGlobal_<VA>`` so the COFF reloc key resolves to the
   original absolute address.

3. **signedness / literal value**: comparison operands get the signedness
   the original ``cmp``+``jcc`` pair proves; a single unmatched literal is
   replaced by the single unmatched immediate of the function.

All edits are plain ``(start, end, replacement)`` span edits on the original
text; overlapping edits are resolved by a stable priority (most specific
node wins).  No edit ever changes anything outside a bound node.
"""
from .bind import WIDTH_CTYPE, _i32, _sym_addr, _type_width, _float_value

# edit priorities: lower = applied first, most specific wins
P_LITERAL = 0
P_MEMBER = 1
P_INDEX = 2
P_GLOBAL = 3
P_SYMBOL = 4
P_CMP = 5

# signed spellings for width-normalised loads: `movsx` proves the value is
# sign-extended, `movzx`/`mov` an unsigned one
SIGNED_CTYPE = {1: "char", 2: "short", 4: "int", 8: "__int64"}


class Edit:
    __slots__ = ("start", "end", "text", "category", "priority", "site")

    def __init__(self, start, end, text, category, priority, site=None):
        self.start = start
        self.end = end
        self.text = text
        self.category = category
        self.priority = priority
        self.site = site

    def overlaps(self, other):
        if self.start == self.end and other.start == other.end:
            return self.start == other.start
        if self.start == self.end:
            return other.start < self.start < other.end
        if other.start == other.end:
            return self.start < other.start < self.end
        return max(self.start, other.start) < min(self.end, other.end) or \
            (self.start <= other.start and other.end <= self.end) or \
            (other.start <= self.start and self.end <= other.end)

    def __repr__(self):
        return "<Edit %s [%d:%d] %r>" % (self.category, self.start, self.end,
                                         self.text[:60])


def _base_expr(text, node):
    """Address-producing text for a member base depending on ./->."""
    bt = text[node.base.start:node.base.end]
    if node.op == ".":
        return "(&(%s))" % bt
    return bt


def _hexoff(off):
    return "0x%X" % (off & 0xFFFFFFFF)


def _access_expr(ctype, base_txt, off):
    # parenthesised: the value is routinely used as a base (`->`) or as an
    # lvalue, and unary `*` binds looser than postfix `->`
    return "(*(%s *)((char *)(%s) + %s))" % (ctype, base_txt, _hexoff(off))


def _addr_expr(text, node, off):
    """Address-of-member expression text for this member node."""
    bt = text[node.base.start:node.base.end]
    if node.op == "->":
        return "((char *)%s + %s)" % (bt, _hexoff(off))
    return "((char *)(&(%s)) + %s)" % (bt, _hexoff(off))


def _addr_of_symbol(sym, off):
    if off == 0:
        return "&%s" % sym
    return "((char *)&%s + %s)" % (sym, _hexoff(off))


def plan_edits(rep, text):
    """BindReport -> (edits, decls).  ``decls`` are extern declarations the
    caller must supply for newly referenced symbols."""
    edits = []
    decls = []
    decl_seen = set()

    def want_decl(ty, name):
        key = (ty, name)
        if key not in decl_seen:
            decl_seen.add(key)
            decls.append("extern %s %s;" % (ty, name))

    for s in rep.sites:
        node = s.node
        if s.kind == "member":
            off = None
            if s.status == "correctable":
                off = s.target.get("offset")
            if off is None:
                off = s.offset
            if off is None:
                continue
            base = _base_expr(text, node)
            is_array = s.target.get("declared_array") is True
            asm_role = s.target.get("asm_role")
            if s.role == "ptr_value" and not is_array and \
                    s.target.get("declared_ptr") is False:
                # a scalar member used as a pointer value: the pipeline turned
                # a raw address computation into a member load.  Only sound
                # when the disassembly itself takes the address (`lea`); a
                # `mov`/`push [mem]` proves it was a genuine load.
                if asm_role != "addr":
                    continue
                bt = text[node.base.start:node.base.end]
                if node.op == "->":
                    new = "(char *)%s + %s" % (bt, _hexoff(off))
                else:
                    new = "(char *)(&(%s)) + %s" % (bt, _hexoff(off))
                edits.append(Edit(node.start, node.end, new,
                                  "member_ptr_addr", P_MEMBER, s))
                continue
            if s.role == "address" or is_array:
                # array decay / address-of member: layout drift is fixed by
                # emitting the address computation with the asm displacement
                drift = (s.offset is not None and off != s.offset)
                if not drift or asm_role != "addr":
                    continue
                edits.append(Edit(node.start, node.end,
                                  _addr_expr(text, node, off),
                                  "member_address", P_MEMBER, s))
                continue
            if s.role != "value":
                continue
            drift = (s.offset is not None and off != s.offset)
            width_target = s.target.get("width") or s.width
            width_diff = (width_target and s.width and width_target != s.width)
            if not (drift or width_diff):
                continue
            if asm_role == "addr":
                # the original computes the member's address; a load rewrite
                # would silently change semantics
                edits.append(Edit(node.start, node.end,
                                  _addr_expr(text, node, off),
                                  "member_address", P_MEMBER, s))
                continue
            decl_ty = s.target.get("decl_type")
            if s.target.get("declared_ptr") and decl_ty:
                # keep the declared pointee type: `this->Type->Field` must
                # stay a typed pointer, not an unsigned int
                ctype = decl_ty.rstrip()
            elif s.target.get("asm_mnemonic") in ("movsx",):
                ctype = SIGNED_CTYPE.get(width_target or s.width or 4,
                                         "int")
            else:
                ctype = WIDTH_CTYPE.get(width_target or s.width or 4,
                                        "unsigned int")
            new = _access_expr(ctype, base, off)
            edits.append(Edit(node.start, node.end, new,
                              "member_offset" if drift else "member_width",
                              P_MEMBER, s))

        elif s.kind == "index":
            if s.role != "value":
                continue
            width = s.target.get("width")
            base_txt = s.target.get("member_base")
            if base_txt is not None:
                # `obj->arr[i]`: element address is member offset + i*elem
                off = s.target.get("offset") if s.status == "correctable" \
                    else s.offset
                if off is None:
                    continue
                op = s.target.get("member_op") or "->"
                base_addr = ("(char *)%s + %s" % (base_txt, _hexoff(off))
                             if op == "->"
                             else "(char *)(&(%s)) + %s" % (base_txt, _hexoff(off)))
                ctype = WIDTH_CTYPE.get(width or 4, "unsigned int")
                if s.status == "correctable":
                    new = _access_expr(ctype, base_addr, 0)
                    edits.append(Edit(node.start, node.end, new,
                                      "index_member", P_INDEX, s))
                continue
            a = s.target.get("addr")
            if a is None:
                continue
            if not width:
                continue
            sym = s.name
            if sym and _sym_addr(sym) is not None:
                off = a - _sym_addr(sym)
                base_expr = _addr_of_symbol(sym, off)
            else:
                # no symbol identity: fall back to the absolute address
                base_expr = "((char *)0x%X)" % a
                sym = None
            ctype = WIDTH_CTYPE.get(width, "unsigned int")
            if s.status == "correctable" or (s.width and s.width != width):
                new = _access_expr(ctype, base_expr, 0)
                edits.append(Edit(node.start, node.end, new, "index_width",
                                  P_INDEX, s))

        elif s.kind == "global":
            if s.status != "correctable":
                continue
            if s.category not in ("symbol", "symbol_canon"):
                continue
            a = s.target.get("addr")
            if a is None:
                continue
            width = s.target.get("width") or 4
            ctype = WIDTH_CTYPE.get(width, "unsigned int")
            name = "DataGlobal_%X" % a
            want_decl(ctype, name)
            new = _access_expr(ctype, "&%s" % name, 0)
            edits.append(Edit(node.start, node.end, new, "global_symbol",
                              P_GLOBAL, s))

        elif s.kind == "literal":
            if s.status != "correctable":
                continue
            if s.category == "symbolize":
                sym = s.target.get("symbol")
                width = s.target.get("width") or 8
                if not sym:
                    continue
                ty = "double" if width == 8 else "float"
                want_decl(ty, sym)
                edits.append(Edit(node.start, node.end, sym, "fp_symbol",
                                  P_SYMBOL, s))
            elif s.category == "literal_value":
                v = s.target.get("value")
                if v is None:
                    continue
                v = _i32(v)
                txt = str(v) if -9 <= v <= 9 else (
                    "-0x%X" % (-v) if v < 0 else "0x%X" % v)
                edits.append(Edit(node.start, node.end, txt, "literal_value",
                                  P_LITERAL, s))

        elif s.kind == "cmp":
            if s.status != "correctable" or s.category != "signedness":
                continue
            sign = s.target.get("sign")
            ctype = "int" if sign == "signed" else "unsigned int"
            for operand in (node.lhs, node.rhs):
                if operand.kind == "num":
                    continue
                otxt = text[operand.start:operand.end]
                if otxt.strip().startswith("(%s)" % ctype):
                    continue
                new = "((%s)(%s))" % (ctype, otxt)
                edits.append(Edit(operand.start, operand.end, new,
                                  "cmp_%s" % sign, P_CMP, s))

    # stable de-overlap: priority first, then larger span (outermost)
    edits.sort(key=lambda e: (e.priority, e.start, -(e.end - e.start)))
    chosen = []
    for e in edits:
        if any(e.overlaps(c) for c in chosen):
            continue
        chosen.append(e)
    chosen.sort(key=lambda e: e.start)
    return chosen, decls


def apply_edits(text, edits):
    out = text
    for e in sorted(edits, key=lambda x: x.start, reverse=True):
        out = out[:e.start] + e.text + out[e.end:]
    return out


def rewrite(rep, text):
    """Return (new_text, applied_edits, decls)."""
    edits, decls = plan_edits(rep, text)
    return apply_edits(text, edits), edits, decls
