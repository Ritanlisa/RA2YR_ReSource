#!/usr/bin/env python3
"""cw4_variants.py -- CW4 shape-layer variant library (2026-11-12).

Given a GENERATED function body (the text between the outer braces of
`emit_cpp` output), produce a bounded list of EQUIVALENT SOURCE FORM
candidates.  The driver (run_cw4.py) compiles each candidate and
byte-compares it against the original binary; the first MATCH wins.

Variant families (work order report_shape_census.md §5):

  if_else   W3  guard <-> if/else direction.  The dominant A-layer
                pathology: ours emits `if (C) { return A; } else
                { return B; }` (je layout) while the original source was
                the guard `if (!C) { return B; } return A;` (jne layout).
                4 candidates: !C, C==0, negated-if/else, comparison flip.
  order     W5  statement order / block rotation / temp materialization
                point: adjacent swaps of simple top-level statements,
                single-use temp inlining.
  const     §3.7 constant-expression form: `x << N` <-> `x * (1<<N)`,
                literal*operand commutativity.
  micro     W6  narrow return cast add/drop, zero-init split/join.
  loop      W7  while <-> do/while re-spell.

CONTRACT: a variant only re-spells shape.  It must not change the
rule-compliance of the body (the driver compares checker.py violations
against the baseline body and rejects candidates that introduce new
ones).  Semantic equivalence is guaranteed structurally for the
if/else transforms (both arms must terminate with `return`) and is
byte-verified for the rest -- a byte MATCH is the acceptance test.
"""
import re

MAX_VARIANTS = 4


class Variant(object):
    __slots__ = ("vid", "kind", "desc", "lines")

    def __init__(self, vid, kind, desc, lines):
        self.vid = vid
        self.kind = kind
        self.desc = desc
        self.lines = lines

    def text(self):
        return "\n".join(self.lines)


# ----------------------------------------------------------------- text utils

def _split_lines(text):
    return text.replace("\r\n", "\n").split("\n")


def _clean_edges(lines):
    out = list(lines)
    while out and not out[0].strip():
        out.pop(0)
    while out and not out[-1].strip():
        out.pop()
    return out


def _brace_match(text, open_idx):
    depth = 0
    for i in range(open_idx, len(text)):
        c = text[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return i
    return -1


def _paren_match(text, open_idx):
    depth = 0
    for i in range(open_idx, len(text)):
        c = text[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                return i
    return -1


def split_statements(lines):
    """Top-level statement spans [(start, end_exclusive)] over body lines.

    Brace *and* parenthesis depth are tracked: a multi-line `for (...;`
    header must not end the statement at the header's first `;`.
    """
    spans = []
    i = 0
    n = len(lines)
    ctrl = re.compile(r"^(if|for|while|switch)\b")
    while i < n:
        if not lines[i].strip():
            i += 1
            continue
        start = i
        bdepth = 0
        pdepth = 0
        while i < n:
            ln = lines[i]
            bdepth += ln.count("{") - ln.count("}")
            pdepth += ln.count("(") - ln.count(")")
            s = ln.strip()
            i += 1
            if bdepth > 0 or pdepth > 0:
                continue
            if s == "{" or ctrl.match(s) and not s.endswith(";"):
                continue
            if s.endswith("}"):
                # `} else` / `} else if` continues the same statement
                k = i
                while k < n and not lines[k].strip():
                    k += 1
                if k < n and lines[k].strip().startswith("else"):
                    continue
                break
            if s.endswith(";") or s.endswith(":"):
                break
        spans.append((start, i))
    return spans


def parse_if_statement(stmt_lines):
    """Parse one top-level `if` statement.

    Returns dict(cond, then, els) where cond/then/els are text strings and
    els is None when there is no else arm; returns None when the shape is
    not the canonical `if (C) { ... } [else { ... }]`.
    """
    text = "\n".join(stmt_lines)
    m = re.match(r"\s*if\s*\(", text)
    if not m:
        return None
    p_open = m.end() - 1
    p_close = _paren_match(text, p_open)
    if p_close < 0:
        return None
    cond = text[p_open + 1:p_close].strip()
    rest = text[p_close + 1:]
    b_open = rest.find("{")
    if b_open < 0 or rest[:b_open].strip():
        return None
    b_close = _brace_match(rest, b_open)
    if b_close < 0:
        return None
    then_body = _clean_edges(rest[b_open + 1:b_close].split("\n"))
    after = rest[b_close + 1:].strip()
    els = None
    if after.startswith("else"):
        a2 = after[4:].strip()
        if not a2.startswith("{"):
            return None                   # else-if chain: leave to a later round
        e_open = after.find("{")
        e_close = _brace_match(after, e_open)
        if e_close < 0:
            return None
        els = _clean_edges(after[e_open + 1:e_close].split("\n"))
        after = after[e_close + 1:].strip()
    if after:
        return None
    return {"cond": cond, "then": then_body, "els": els}


def _as_lines(text):
    return list(text) if isinstance(text, (list, tuple)) else _split_lines(text)


def _ends_with_return(text):
    body = _clean_edges(_as_lines(text))
    if not body:
        return False
    last = body[-1].strip()
    if last == "}":
        # find the opening brace of the last compound and check its tail?
        # conservative: only a directly trailing return counts
        return False
    return last.startswith("return") and last.endswith(";")


def _negate_bang(cond):
    c = cond.strip()
    if c.startswith("!") and not c.startswith("!="):
        inner = c[1:].strip()
        if inner.startswith("(") and _paren_match(inner, 0) == len(inner) - 1:
            return inner[1:-1].strip()
        if re.match(r"^[A-Za-z_]\w*$", inner):
            return inner
    return "!(%s)" % c


def _top_level_cmp(cond):
    """Return (lhs, op, rhs) for a top-level comparison in cond, else None."""
    depth = 0
    i = 0
    n = len(cond)
    while i < n:
        c = cond[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
        elif cond.startswith("->", i):
            i += 2
            continue                      # member arrow, not a comparison
        elif depth == 0:
            for op in ("==", "!=", "<=", ">="):
                if cond.startswith(op, i):
                    return cond[:i].strip(), op, cond[i + 2:].strip()
            if c in "<>":
                return cond[:i].strip(), c, cond[i + 1:].strip()
        i += 1
    return None


_CMP_COMPLEMENT = {"==": "!=", "!=": "==", "<": ">=", "<=": ">",
                   ">": "<=", ">=": "<"}


def _indent_of(line):
    return re.match(r"^(\s*)", line).group(1)


def _rebuild_ifelse(cond, then_text, els_text, indent="    "):
    lines = ["%sif ( %s )" % (indent, cond), "%s{" % indent]
    lines.extend(_as_lines(then_text))
    lines.append("%s}" % indent)
    if els_text is not None:
        lines.append("%selse" % indent)
        lines.append("%s{" % indent)
        lines.extend(_as_lines(els_text))
        lines.append("%s}" % indent)
    return lines


def _guard_lines(cond, els_text, then_text, indent="    "):
    """`if (C) {A} else {B}`  ->  `if (!C) { B } A`  (early-return guard)."""
    lines = ["%sif ( %s )" % (indent, cond), "%s{" % indent]
    lines.extend(_as_lines(els_text))
    lines.append("%s}" % indent)
    lines.extend(_as_lines(then_text))
    return lines


def gen_ifelse_variants(lines):
    """W3: guard <-> if/else direction (<=4 candidates)."""
    out = []
    spans = split_statements(lines)
    if not spans:
        return out
    # ---- (a) trailing if/else with both arms returning
    last_s, last_e = spans[-1]
    parsed = parse_if_statement(lines[last_s:last_e])
    if parsed and parsed["els"] is not None and \
            _ends_with_return(parsed["then"]) and \
            _ends_with_return(parsed["els"]):
        prefix = _clean_edges(lines[:last_s])
        cond, t, e = parsed["cond"], parsed["then"], parsed["els"]
        indent = _indent_of(lines[last_s]) or "    "
        cand = []
        cand.append(("V_IF_GUARD", "if_else",
                     "if(C){A}else{B} -> if(!C){B} A (guard, jne layout)",
                     _guard_lines(_negate_bang(cond), e, t, indent)))
        cand.append(("V_IF_GUARD_EQ", "if_else",
                     "guard with (C)==0 spelling",
                     _guard_lines("(%s) == 0" % cond, e, t, indent)))
        cand.append(("V_IF_SWAPNEG", "if_else",
                     "if(!C){B} else {A} (block swap + negated cond)",
                     _rebuild_ifelse(_negate_bang(cond), e, t, indent)))
        cmp_ = _top_level_cmp(cond)
        if cmp_:
            lhs, op, rhs = cmp_
            flipped = "%s %s %s" % (lhs, _CMP_COMPLEMENT[op], rhs)
            cand.append(("V_IF_CMPFLIP", "if_else",
                         "guard with complement operator (%s)" % flipped,
                         _guard_lines(flipped, e, t, indent)))
        for vid, kind, desc, ls in cand:
            out.append(Variant(vid, kind, desc, prefix + _clean_edges(ls)))
    # ---- (b) tail guard: `if (C) { A } return B;`
    if len(spans) >= 2:
        s2, e2 = spans[-2]
        s3, e3 = spans[-1]
        tail = _clean_edges(lines[s3:e3])
        if len(tail) == 1 and tail[0].strip().startswith("return") and \
                tail[0].strip().endswith(";"):
            parsed = parse_if_statement(lines[s2:e2])
            if parsed and parsed["els"] is None and \
                    _ends_with_return(parsed["then"]):
                prefix = _clean_edges(lines[:s2])
                indent = _indent_of(lines[s2]) or "    "
                ret = [tail[0].strip()]
                cond, t = parsed["cond"], parsed["then"]
                # merge into if/else (je layout)
                out.append(Variant(
                    "V_IF_ELSE_FROM_GUARD", "if_else",
                    "if(C){A} return B -> if(C){A}else{return B}",
                    prefix + _clean_edges(
                        _rebuild_ifelse(cond, t, ret, indent))))
                # normalize to guard: if(!C) { return B; } A
                out.append(Variant(
                    "V_IF_GUARD_FROM_TAIL", "if_else",
                    "if(C){A} return B -> if(!C){return B} A",
                    prefix + _clean_edges(
                        _guard_lines(_negate_bang(cond), ret, t, indent))))
    # de-duplicate by body text
    seen = set()
    uniq = []
    for v in out:
        key = v.text()
        if key in seen:
            continue
        seen.add(key)
        uniq.append(v)
    return uniq


# --------------------------------------------------- short-circuit order (W5)

def _split_top_logical(expr, op):
    depth = 0
    i = 0
    while i < len(expr):
        c = expr[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
        elif expr.startswith("->", i):
            i += 2
            continue
        elif depth == 0 and expr.startswith(op, i):
            return expr[:i].strip(), expr[i + 2:].strip()
        i += 1
    return None


def _effect_free(expr):
    return not re.search(r"(?<![=!<>])=(?!=)|\+\+|--|\w+\s*\(", expr)


def gen_bool_variants(lines):
    """§3.6/W5: swap short-circuit operand order on a plain `return EXPR;`."""
    out = []
    for ln in lines:
        m = re.match(r"^(\s*)return\s+(.+);\s*$", ln)
        if not m:
            continue
        expr = m.group(2)
        prefix, inner, suffix = "", expr, ""
        mu = re.match(r"^(\(\s*(?:unsigned\s+|signed\s+)?[A-Za-z_]\w*\s*\))"
                      r"\s*\((.*)\)$", expr)
        if mu:                            # return (bool)(A && B);
            prefix, inner, suffix = mu.group(1) + "(", mu.group(2), ")"
        for op in ("&&", "||"):
            sp = _split_top_logical(inner, op)
            if not sp:
                continue
            a, b = sp
            if not (_effect_free(a) and _effect_free(b)):
                continue
            ind = m.group(1)
            new = "%sreturn %s%s %s %s%s;" % (ind, prefix, b, op, a, suffix)
            cand = list(lines)
            cand[cand.index(ln)] = new
            out.append(Variant("V_BOOL_SC_SWAP", "order",
                               "swap `%s` operands (short-circuit order)" % op,
                               _clean_edges(cand)))
            break
    return out


# --------------------------------------------------- signedness comparison (W4)

_CMP_SIMPLE = re.compile(
    r"(?<!<)(?<!>)\b([A-Za-z_]\w*(?:\s*\[[^\]]*\])?)"
    r"\s*(<=|>=|==|!=|(?<!<)<(?!<)|(?<!>)>(?!>))\s*"
    r"([A-Za-z_]\w*(?:\s*\[[^\]]*\])?|\d+)\b")


def gen_signed_variants(lines):
    """§3.12: compute the comparison in signed int terms.  The original
    binary's jcc family is the ground truth; when ours lowers to the
    unsigned predicate (jb/jae) because one operand's declared type is
    unsigned, spelling both operands `(int)` restores the signed compare
    without touching the member/global declarations (which are shared)."""
    out = []
    for i, ln in enumerate(lines):
        if re.search(r"->\s*$", ln):
            continue
        m = _CMP_SIMPLE.search(ln)
        if not m:
            continue
        lhs, op, rhs = m.group(1), m.group(2), m.group(3)
        if op in ("==", "!="):
            continue
        new = ln[:m.start()] + "(int)%s %s (int)%s" % (lhs, op, rhs) + \
            ln[m.end():]
        cand = list(lines)
        cand[i] = new
        out.append(Variant("V_MICRO_SIGNED_CMP", "micro",
                           "compare in signed int terms (%s %s %s)"
                           % (lhs, op, rhs), _clean_edges(cand)))
        break
    return out


# --------------------------------------------------------- statement order (W5)

def _is_simple(lines_slice):
    s = "".join(ln.strip() for ln in lines_slice)
    if "{" in s or "}" in s:
        return False
    if not s.endswith(";"):
        return False
    if re.match(r"^(if|for|while|do|switch|case|default|else|return|break|"
                r"continue|goto)\b", s):
        return False
    if re.match(r"^[A-Za-z_]\w*\s*:", s):
        return False
    # declaration-looking statement: swapping it can reorder decl/use and
    # is not a shape claim we want to test (a compile error is noise)
    if re.match(r"^(?:unsigned\s+|signed\s+|const\s+|static\s+|struct\s+|"
                r"class\s+)?(?:void|bool|char|short|int|long|float|double|"
                r"__int8|__int16|__int32|__int64|[A-Z]\w+)\s*\**\s*"
                r"[A-Za-z_]\w*\s*(?:\[[^\]]*\])?\s*(?:=|;)", s):
        return False
    return True


def _swap_spans(lines, spans, i):
    a_s, a_e = spans[i]
    b_s, b_e = spans[i + 1]
    a = lines[a_s:a_e]
    b = lines[b_s:b_e]
    return lines[:a_s] + b + a + lines[b_e:]


def _indent_block(block, delta):
    if not delta:
        return block
    out = []
    for ln in block:
        if not ln.strip():
            out.append(ln)
            continue
        if delta < 0:
            out.append(ln[(-delta):] if ln[:-delta].strip() == "" else ln)
        else:
            out.append(" " * delta + ln)
    return out


def gen_order_variants(lines):
    """W5: adjacent simple-statement swaps + single-use temp inlining."""
    out = []
    spans = split_statements(lines)
    simple = [i for i in range(len(spans) - 1)
              if _is_simple(lines[spans[i][0]:spans[i][1]])
              and _is_simple(lines[spans[i + 1][0]:spans[i + 1][1]])]
    if len(simple) >= 1:
        out.append(Variant("V_ORD_SWAP0", "order",
                           "swap first adjacent simple statements",
                           _swap_spans(lines, spans, simple[0])))
    if len(simple) >= 2:
        out.append(Variant("V_ORD_SWAPN", "order",
                           "swap last adjacent simple statements",
                           _swap_spans(lines, spans, simple[-1])))
    # ---- single-use temp inlining (materialization point moved later)
    decl_pat = re.compile(r"^(\s*)([A-Za-z_][\w \t\*]*?)\b(\w+)"
                          r"\s*=\s*(.+);\s*$")
    for si, (s, e) in enumerate(spans):
        stmt = lines[s:e]
        if len(stmt) != 1:
            continue
        m = decl_pat.match(stmt[0])
        if not m:
            continue
        var, expr = m.group(3), m.group(4).strip()
        if re.search(r"[=+\-*/%&|^<>!]=|[,;]|\+\+|--|sizeof", expr):
            continue
        use_lines = []
        hits = 0
        for ui, (us, ue) in enumerate(spans):
            if ui == si:
                continue
            for k in range(us, ue):
                cnt = len(re.findall(r"\b%s\b" % re.escape(var), lines[k]))
                if cnt:
                    hits += cnt
                    use_lines.append(k)
        if hits != 1:
            continue
        ul = use_lines[0]
        txt = lines[ul]
        # only RHS of an assignment or a return value is a safe splice
        if not (re.search(r"=[^=].*\b%s\b" % re.escape(var), txt) or
                re.match(r"^\s*return\s", txt)):
            continue
        newtxt = re.sub(r"\b%s\b" % re.escape(var), "(%s)" % expr, txt)
        cand = list(lines)
        cand[ul] = newtxt
        del cand[s:e]
        out.append(Variant("V_ORD_INLINE_TEMP", "order",
                           "single-use temp `%s` inlined at use" % var,
                           _clean_edges(cand)))
        break
    # de-dup
    seen = set()
    uniq = []
    for v in out:
        key = v.text()
        if key in seen:
            continue
        seen.add(key)
        uniq.append(v)
    return uniq


# -------------------------------------------------------- constant expressions

_OPERAND = r"[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*|\s*\[[^\]]*\])*"
_SHL = re.compile(r"(%s)\s*<<\s*(\d+)\b" % _OPERAND)
_MUL_LIT_R = re.compile(r"(%s)\s*\*\s*(\d+)\b" % _OPERAND)
_MUL_LIT_L = re.compile(r"\b(\d+)\s*\*\s*(%s)" % _OPERAND)


def gen_const_variants(lines, head_ret=""):
    """§3.7: constant-expression form candidates."""
    out = []
    text = "\n".join(lines)
    if _SHL.search(text):
        new = _SHL.sub(lambda m: "(%s * %d)" % (m.group(1), 1 << int(m.group(2))),
                       text)
        out.append(Variant("V_CONST_SHL2MUL", "const",
                           "x << N -> x * (1<<N)", _clean_edges(_split_lines(new))))
    mul_hits = [m for m in _MUL_LIT_R.finditer(text)
                if int(m.group(2)) >= 2 and (int(m.group(2)) &
                                             (int(m.group(2)) - 1)) == 0]
    if mul_hits:
        def _to_shl(m):
            n = int(m.group(2))
            k = n.bit_length() - 1
            return "(%s << %d)" % (m.group(1), k)
        new = _MUL_LIT_R.sub(_to_shl, text)
        out.append(Variant("V_CONST_MUL2SHL", "const",
                           "x * 2^k -> x << k", _clean_edges(_split_lines(new))))
    if _MUL_LIT_L.search(text):
        new = _MUL_LIT_L.sub(lambda m: "(%s * %s)" % (m.group(2), m.group(1)),
                             text)
        out.append(Variant("V_CONST_MUL_COMMUTE", "const",
                           "literal * x -> x * literal",
                           _clean_edges(_split_lines(new))))
    return out


# ------------------------------------------------------------------ micro (W6)

_NARROW_RET = re.compile(
    r"\breturn\s+\(\s*(?:unsigned\s+)?(?:char|short|bool|__int8|__int16)"
    r"\s*\)\s*(\([^;]*\)|[^;]+);")
_FINAL_SIMPLE_RET = re.compile(r"^(\s*)return\s+(?!\()(.+);\s*$")
_ZERO_DECL = re.compile(r"^(\s*)([A-Za-z_][\w \t\*]*?)\b(\w+)"
                        r"\s*=\s*0;\s*$")
_ZERO_ASSIGN = re.compile(r"^(\s*)(\w+)\s*=\s*0;\s*$")


def gen_micro_variants(lines, head_ret="int"):
    """W6: narrow return cast add/drop, zero-init decl split/join."""
    out = []
    text = "\n".join(lines)
    if _NARROW_RET.search(text):
        new = _NARROW_RET.sub(lambda m: "return %s;" % m.group(1), text)
        out.append(Variant("V_MICRO_DROP_NARROW", "micro",
                           "return (char/short/bool)(X) -> return X",
                           _clean_edges(_split_lines(new))))
    # add narrow cast on a plain final return (orig `mov al` forms)
    body = _clean_edges(lines)
    if body and re.match(r"^int$|^unsigned int$", head_ret or ""):
        m = _FINAL_SIMPLE_RET.match(body[-1])
        if m and len(body) <= 6:
            cand = list(body)
            cand[-1] = "%sreturn (char)(%s);" % (m.group(1), m.group(2))
            out.append(Variant("V_MICRO_ADD_NARROW", "micro",
                               "plain return X -> return (char)(X)",
                               _clean_edges(cand)))
    # zero-init split: `T v = 0;` -> `T v; v = 0;`
    for i, ln in enumerate(lines):
        m = _ZERO_DECL.match(ln)
        if m:
            cand = list(lines)
            ind = m.group(1)
            cand[i:i + 1] = ["%s%s %s;" % (ind, m.group(2), m.group(3)),
                             "%s%s = 0;" % (ind, m.group(3))]
            out.append(Variant("V_MICRO_SPLIT_ZERO", "micro",
                               "T v = 0 -> T v; v = 0", _clean_edges(cand)))
            break
    # zero-init join
    for i in range(len(lines) - 1):
        d = re.match(r"^(\s*)([A-Za-z_][\w \t\*]*?)\b(\w+);\s*$", lines[i])
        a = _ZERO_ASSIGN.match(lines[i + 1])
        if d and a and d.group(3) == a.group(2):
            cand = list(lines)
            cand[i:i + 2] = ["%s%s %s = 0;" % (d.group(1), d.group(2),
                                              d.group(3))]
            out.append(Variant("V_MICRO_JOIN_ZERO", "micro",
                               "T v; v = 0 -> T v = 0", _clean_edges(cand)))
            break
    return out


# ------------------------------------------------------------------- loop (W7)

def gen_loop_variants(lines):
    """W7: while <-> do/while re-spell for one top-level loop."""
    out = []
    spans = split_statements(lines)
    for si, (s, e) in enumerate(spans):
        stmt = lines[s:e]
        text = "\n".join(stmt)
        m = re.match(r"\s*while\s*\(", text)
        if m and not re.search(r"\b(break|continue)\b", text):
            p_open = m.end() - 1
            p_close = _paren_match(text, p_open)
            if p_close < 0:
                continue
            cond = text[p_open + 1:p_close].strip()
            rest = text[p_close + 1:]
            b_open = rest.find("{")
            if b_open < 0 or rest[:b_open].strip():
                continue
            b_close = _brace_match(rest, b_open)
            if b_close < 0 or rest[b_close + 1:].strip():
                continue
            body = rest[b_open + 1:b_close].strip("\n")
            ind = _indent_of(stmt[0]) or "    "
            cand = ["%sdo" % ind, "%s{" % ind]
            cand.extend(_split_lines(body))
            cand.append("%s} while ( %s );" % (ind, cond))
            newlines = lines[:s] + cand + lines[e:]
            out.append(Variant("V_LOOP_WHILE2DO", "loop",
                               "while(C){B} -> do{B}while(C)",
                               _clean_edges(newlines)))
            break
        m = re.match(r"\s*do\b", text)
        if m:
            b_open = text.find("{")
            if b_open < 0:
                continue
            b_close = _brace_match(text, b_open)
            if b_close < 0:
                continue
            wm = re.search(r"while\s*\(", text[b_close:])
            if not wm:
                continue
            body = text[b_open + 1:b_close].strip("\n")
            cond_txt = text[b_close:].strip()
            pc = _paren_match(cond_txt, cond_txt.find("("))
            if pc < 0:
                continue
            cond = cond_txt[cond_txt.find("(") + 1:pc].strip()
            ind = _indent_of(stmt[0]) or "    "
            cand = ["%swhile ( %s )" % (ind, cond), "%s{" % ind]
            cand.extend(_split_lines(body))
            cand.append("%s}" % ind)
            newlines = lines[:s] + cand + lines[e:]
            out.append(Variant("V_LOOP_DO2WHILE", "loop",
                               "do{B}while(C) -> while(C){B}",
                               _clean_edges(newlines)))
            break
    return out


# ---------------------------------------------------------------- dispatcher

def _has_ifelse(lines):
    spans = split_statements(lines)
    if not spans:
        return False
    parsed = parse_if_statement(lines[spans[-1][0]:spans[-1][1]])
    if parsed and parsed["els"] is not None:
        return True
    if len(spans) >= 2:
        parsed = parse_if_statement(lines[spans[-2][0]:spans[-2][1]])
        tail = _clean_edges(lines[spans[-1][0]:spans[-1][1]])
        if parsed and parsed["els"] is None and len(tail) == 1 and \
                tail[0].strip().startswith("return"):
            return True
    return False


def generate(lines, meta):
    """Build the ordered candidate list for one function body.

    meta: {family, path, head_ret, ...} from shape_families /
    shape_census_index.  Priority follows the work-order ROI order:
    if/else direction first (W3), then order (W5), micro (W6),
    const (§3.7), loop (W7).
    """
    family = (meta.get("family") or "").upper()
    path = (meta.get("path") or "").lower()
    head_ret = meta.get("head_ret") or "int"
    lines = _clean_edges(_split_lines("\n".join(lines)))
    cands = []

    ifelse_shape = _has_ifelse(lines)
    want_ifelse = ifelse_shape and (
        family in ("JCC_INVERT", "JCC_INVERT_PLUS", "JCC_LAYOUT_PLUS",
                   "ROTATE_EXACT", "REORDER", "STRUCTURAL", "ONE_INSN",
                   "TWO_FOUR_INSNS", "TOKEN_MISMATCH")
        or path in ("branch_order", "branch_polarity", "const_fold",
                    "regalloc", "eval_order", "codegen_shape"))
    if want_ifelse:
        cands.extend(gen_ifelse_variants(lines))

    if family in ("ROTATE_EXACT", "REORDER", "JCC_LAYOUT_PLUS",
                  "TWO_FOUR_INSNS", "ONE_INSN", "TOKEN_MISMATCH",
                  "REG_ALLOC", "STRUCTURAL") or \
            path in ("regalloc", "eval_order", "signedness"):
        cands.extend(gen_order_variants(lines))
        cands.extend(gen_bool_variants(lines))

    if family in ("TWO_FOUR_INSNS", "ONE_INSN", "TOKEN_MISMATCH",
                  "RET_VOID_STUB", "WIDTH", "IMM") or \
            path in ("ret_norm", "width_mismatch", "const_fold"):
        cands.extend(gen_micro_variants(lines, head_ret))

    if path == "const_fold" or family in ("IMM", "TWO_FOUR_INSNS"):
        cands.extend(gen_const_variants(lines, head_ret))

    if path == "branch_polarity" or family == "JCC_LAYOUT_PLUS":
        cands.extend(gen_loop_variants(lines))
    if family == "STRUCTURAL" and re.search(r"\bdo\b|\bwhile\b",
                                            "\n".join(lines)):
        cands.extend(gen_loop_variants(lines))
    if path == "signedness" or family in ("ROTATE_EXACT", "REORDER",
                                          "JCC_LAYOUT_PLUS", "STRUCTURAL"):
        cands.extend(gen_signed_variants(lines))

    # de-dup by resulting body, cap the candidate budget
    seen = set()
    uniq = []
    for v in cands:
        key = v.text()
        if key in seen or not key.strip():
            continue
        seen.add(key)
        uniq.append(v)
    return uniq[:MAX_VARIANTS]
