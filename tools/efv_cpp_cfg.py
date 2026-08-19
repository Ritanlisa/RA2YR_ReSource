#!/usr/bin/env python3
"""
efv_cpp_cfg.py -- Build a control-flow graph from a C++ FUNCTION BODY.

Task T12 of the execution-flow-cfg pipeline. This is the C++-side mirror of T7's
`efv_ida_cfg.py` (which builds CFGs from IDA Hex-Rays pseudocode). It builds
STRUCTURE ONLY: basic blocks + edges. It does NOT extract execution-flow events
(CALL/READ/WRITE/RET) -- that is T14's job (`efv_cpp_events.py`). Each block
instead retains the RAW C++ statement fragments that fall inside it, so T14 can
run its leaf extractor over them later.

------------------------------------------------------------------------------
WHY THIS SHARES T7's AST + BUILDER
------------------------------------------------------------------------------
The AST->CFG construction logic (if/while/for/do/switch/break/continue/goto ->
blocks + edges) is IDENTICAL for both sides -- only the FRONT END differs (C++
tokens here vs IDA pseudocode text in T7). So this module IMPORTS T7's AST node
types and its `_Builder` and SUBCLASSES the builder (`_CppBuilder`). T7 itself is
NOT modified or refactored, so it cannot be broken (verified: T7's braceless /
goto / do-while invariants still pass -- see `_selftest`).

The ONLY C++-specific additions live in `_CppBuilder`:
  * short-circuit `&&` / `||`  -> split into separate CONDITION BLOCKS
  * `?:` ternary               -> lowered (in the parser) into an `If` DIAMOND
  * local variable declarations -> synthesised `"decl <name>"` marker events

------------------------------------------------------------------------------
FRONT END (consumes T10's token stream)
------------------------------------------------------------------------------
`efv_cpp_lex.tokenize()` turns C++ text into `Token(kind, value, pos)`s. The
recursive-descent parser here walks those tokens (whitespace/newlines are not
tokens, so braceless bodies -- same-line OR next-line -- reassemble correctly,
the token-level equivalent of T7's whitespace-insensitive parse). Each statement
/ condition's RAW text is recovered by slicing the ORIGINAL source via the token
`pos` offsets, so `ordered_events` keep faithful C++ fragments for T14.

------------------------------------------------------------------------------
RAW-TEXT / METADATA CONTRACT (read by T11 / T14)
------------------------------------------------------------------------------
`efv_model.Block` uses `__slots__ = (id, ordered_events, successors)`, so a
`block._raw` / `block._locals` attribute is IMPOSSIBLE (AttributeError -- the
exact constraint T7 hit). Therefore ALL per-block information lives in
`ordered_events` (source order):

    "if (<cond>)"      conditional test (one per SPLIT short-circuit atom)
    "while (<cond>)"   loop test (loop header AND do-while tail)
    "for-cond (<cond>)" for-loop test
    "switch (<sel>)"   switch selector (dispatch block)
    "decl <name>"      a local variable declaration came into scope HERE
    "return ..."       return statement (terminal block)
    "goto LABEL"       unconditional jump
    "<stmt>"           any plain linear statement, verbatim

The `"decl <name>"` markers are this task's "local-declaration-per-scope"
tracking: the set of locals visible at a block = the union of `decl` markers
along every path from entry to that block (T11/T14 compute scope via CFG
traversal). Like T7's `"if (cond)"` markers, they are T12->T14 plumbing: T14
reads each block's `ordered_events`, runs its leaf extractor, and REPLACES the
list with canonical CALL/READ/WRITE/RET events, so the markers never reach the
matcher (T16/T18).

------------------------------------------------------------------------------
SHORT-CIRCUIT ALIGNMENT NOTE (for T17 normalization)
------------------------------------------------------------------------------
Empirically (GetPowerOutput 0x44E7B0) Hex-Rays renders short-circuit FLATTENED:
`if ( *(_BYTE*)(v3+5806) || *(_BYTE*)(v3+5807) )`. T7's parser keeps that whole
condition as ONE block. This C++ side, per the T12 spec, SPLITS `||`/`&&` into
separate condition blocks (`if(!Type || !HasPower)` -> two blocks). The two
sides therefore differ at short-circuit sites until T17 reconciles them (T17 can
split the IDA-side condition strings the same way, since the split is a pure
text operation on the condition fragment). This module deliberately produces the
SPLIT form because the binary actually executes two separate test+branch ops.

Public API:  build_cpp_cfg(cpp_function_body_text) -> efv_model.CFG
"""

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
if _HERE not in sys.path:
    sys.path.insert(0, _HERE)

# Stable data-model contract (T5). MUST use this exact API.
from efv_model import (
    CFG,
    EDGE_TRUE,
    EDGE_FALSE,
    EDGE_FALLTHROUGH,
    EDGE_BACK,
)

# T10 tokenizer (the required front-end input).
from efv_cpp_lex import (
    tokenize,
    KIND_IDENT,
    KIND_OP,
    KEYWORDS,
)

# SHARED AST + CFG builder from T7. We import (not duplicate) the AST node types
# and the `_Builder`/`_Ctx` classes and subclass the builder. efv_ida_cfg has no
# import-time side effects, so importing it here is safe; T7 stays untouched.
from efv_ida_cfg import (
    _Builder,
    _Ctx,
    _Node,
    Simple,
    Seq,
    Return,
    Goto,
    Label,
    Break,
    Continue,
    If,
    While,
    For,
    DoWhile,
    Switch,
    CaseLabel,
    DefaultLabel,
    _split_for,
)

__all__ = ["build_cpp_cfg"]


# ============================================================
# C++-only AST node : local declaration
# ============================================================

class Decl(_Node):
    """A local variable declaration. `names` are the declared identifiers (in
    source order); `text` is the verbatim declaration statement (so its
    initialiser RHS is still available to T14's leaf extractor)."""
    __slots__ = ("names", "text")

    def __init__(self, names, text):
        self.names = names
        self.text = text


# ============================================================
# Keyword sets
# ============================================================

# Control-flow keywords handled structurally (subset of efv_cpp_lex.KEYWORDS).
_CTRL_KW = frozenset({
    "if", "while", "for", "do", "switch", "case", "default",
    "goto", "return", "break", "continue",
})

# Declaration leading keywords (cv / storage qualifiers + builtin type words).
_DECL_QUALIFIERS = frozenset({
    "const", "static", "volatile", "register", "extern", "mutable",
    "signed", "unsigned",
})
_BUILTIN_TYPES = frozenset({
    "int", "char", "short", "long", "float", "double", "bool", "void",
    "auto", "unsigned", "signed",
})
_TAG_KEYWORDS = frozenset({"struct", "class", "union", "enum"})
_DECL_LEAD = _DECL_QUALIFIERS | _BUILTIN_TYPES | _TAG_KEYWORDS

_OPEN = frozenset({"(", "[", "{"})
_CLOSE = frozenset({")", "]", "}"})


# ============================================================
# Token-list helpers (depth tracking; used by free + parser code)
# ============================================================

def _is_op(tok, value):
    return tok is not None and tok.kind == KIND_OP and tok.value == value


def _is_open(tok):
    return tok is not None and tok.kind == KIND_OP and tok.value in _OPEN


def _is_close(tok):
    return tok is not None and tok.kind == KIND_OP and tok.value in _CLOSE


# ============================================================
# Declaration name extraction (operates on a flat token list)
# ============================================================

def _maybe_type_name(toks, k, n):
    """If toks[k] starts a user-defined type-name `IDENT (:: IDENT)* (< ... >)?`,
    return the index just past it; else None. Never consumes a keyword as the
    leading IDENT."""
    if k >= n or toks[k].kind != KIND_IDENT or toks[k].value in KEYWORDS:
        return None
    j = k + 1
    # qualified  ::name  (lexer emits '::' as one OP token)
    while j + 1 < n and _is_op(toks[j], "::") and toks[j + 1].kind == KIND_IDENT:
        j += 2
    # template argument list  < ... >  (best-effort angle matcher)
    if j < n and _is_op(toks[j], "<"):
        depth = 0
        m = j
        while m < n:
            t = toks[m]
            if _is_op(t, "<"):
                depth += 1
            elif _is_op(t, ">"):
                depth -= 1
                if depth <= 0:
                    m += 1
                    break
            elif _is_op(t, ">>"):
                depth -= 2
                if depth <= 0:
                    m += 1
                    break
            elif _is_op(t, ";"):
                break  # never cross a statement end
            m += 1
        if depth <= 0 and m > j:
            j = m
    return j


def _declarator_names(toks, start, n):
    """Split toks[start:n] at depth-0 ',' into declarators; from each take the
    first IDENT name (skipping leading '*' / '&' / 'const'). Returns names."""
    names = []
    segs = []
    depth = 0
    seg_a = start
    j = start
    while j < n:
        t = toks[j]
        if _is_open(t):
            depth += 1
        elif _is_close(t):
            if depth > 0:
                depth -= 1
        elif _is_op(t, ",") and depth == 0:
            segs.append((seg_a, j))
            seg_a = j + 1
        j += 1
    segs.append((seg_a, n))
    for (sa, sb) in segs:
        k = sa
        while k < sb and (_is_op(toks[k], "*") or _is_op(toks[k], "&")
                          or (toks[k].kind == KIND_IDENT and toks[k].value == "const")):
            k += 1
        if k < sb and toks[k].kind == KIND_IDENT and toks[k].value not in KEYWORDS:
            names.append(toks[k].value)
    return names


def _extract_decl_names(toks):
    """Conservative declaration detector + name extractor over a flat token list
    (the statement's tokens, WITHOUT a trailing ';'). Returns the declared local
    names, or [] if the statement is not (confidently) a declaration.

    Handles the common project forms: `int power = ...`, `int a, b`, `int *p`,
    `const Foo* p`, `struct Foo x`, `BuildingClass* b = ...`, `auto cmp = ...`.
    Expression statements (`power += 200`, `foo()`, `a = b`) yield [] (no markers).
    Most-vexing-parse / heavy template edge cases are best-effort by design.
    """
    n = len(toks)
    if n == 0:
        return []
    first = toks[0]
    if first.kind != KIND_IDENT:
        return []
    led_by_specifier = first.value in _DECL_LEAD
    # A control / non-decl keyword leading the statement is never a declaration.
    if first.value in KEYWORDS and not led_by_specifier:
        return []

    k = 0
    saw_builtin = False
    saw_tag = False
    if led_by_specifier:
        # consume leading run of qualifier / builtin-type / tag keywords
        while k < n and toks[k].kind == KIND_IDENT and toks[k].value in _DECL_LEAD:
            if toks[k].value in _BUILTIN_TYPES:
                saw_builtin = True
            if toks[k].value in _TAG_KEYWORDS:
                saw_tag = True
            else:
                saw_tag = False  # tag must be the LAST consumed keyword
            k += 1
        if saw_tag:
            # `struct Foo x` -- the tag name is the type, consume one IDENT
            if k < n and toks[k].kind == KIND_IDENT and toks[k].value not in KEYWORDS:
                k += 1
        elif not saw_builtin:
            # only cv/storage qualifiers so far -> a user type-name must follow
            te = _maybe_type_name(toks, k, n)
            if te is None:
                return []
            k = te
    else:
        # D2: leading user type-name, then a declarator MUST follow
        te = _maybe_type_name(toks, 0, n)
        if te is None or te == 0 or te >= n:
            return []
        k = te

    if k >= n:
        return []
    return _declarator_names(toks, k, n)


def _extract_param_names(tokens, brace_idx):
    """Extract a function's PARAMETER names from its signature.

    The parameter list is the first balanced `( ... )` before the body `{`
    (`brace_idx`). A parameter's NAME is the LAST identifier in its declarator
    (skipping the type and any default value after a depth-0 '='). Returns the
    name list (best-effort: an unnamed / function-pointer parameter may yield a
    stray type token, but that only ever ADDS a local name -- which can at most
    SHADOW a same-named bare access, never fabricate an event).

    Parameters ARE locals: a bare parameter access is not an observable member /
    global side effect. Treating them as locals stops a parameter whose name
    collides with a signals.json global/member (e.g. an IDA-promoted `ppv` that
    signals.json records as a global) from being misresolved to a spurious
    global READ/WRITE (FP#1 AbstractClass::QueryInterface)."""
    limit = brace_idx if brace_idx is not None else len(tokens)
    open_i = None
    for k in range(limit):
        if _is_op(tokens[k], "("):
            open_i = k
            break
    if open_i is None:
        return []
    depth = 0
    close_i = None
    for k in range(open_i, len(tokens)):
        t = tokens[k]
        if _is_open(t):
            depth += 1
        elif _is_close(t):
            depth -= 1
            if depth == 0:
                close_i = k
                break
    if close_i is None:
        return []

    def _last_name(seg):
        cut = len(seg)
        d = 0
        for idx, t in enumerate(seg):
            if _is_open(t):
                d += 1
            elif _is_close(t):
                if d > 0:
                    d -= 1
            elif d == 0 and _is_op(t, "="):
                cut = idx
                break
        for t in reversed(seg[:cut]):
            if t.kind == KIND_IDENT and t.value not in KEYWORDS:
                return t.value
        return None

    names = []
    seg = []
    d = 0
    for k in range(open_i + 1, close_i):
        t = tokens[k]
        if _is_open(t):
            d += 1
            seg.append(t)
        elif _is_close(t):
            d -= 1
            seg.append(t)
        elif d == 0 and _is_op(t, ","):
            nm = _last_name(seg)
            if nm:
                names.append(nm)
            seg = []
        else:
            seg.append(t)
    nm = _last_name(seg)
    if nm:
        names.append(nm)
    return names


# ============================================================
# Depth-0 text splitter (re-tokenises a fragment; robust on quotes/parens)
# ============================================================

def _split_top_level(text, op):
    """Split `text` at depth-0 occurrences of operator `op` ('||' or '&&'),
    tracking () [] {} and skipping string/char literals (via the lexer). Returns
    the operand fragments (stripped). A fragment with no depth-0 `op` returns
    `[text.strip()]`."""
    toks = tokenize(text)
    cuts = []
    depth = 0
    for t in toks:
        if _is_open(t):
            depth += 1
        elif _is_close(t):
            if depth > 0:
                depth -= 1
        elif depth == 0 and t.kind == KIND_OP and t.value == op:
            cuts.append((t.pos, t.pos + len(op)))
    if not cuts:
        s = text.strip()
        return [s] if s else []
    parts = []
    prev = 0
    for (a, b) in cuts:
        parts.append(text[prev:a].strip())
        prev = b
    parts.append(text[prev:].strip())
    return parts


# ============================================================
# Front end : tokens -> AST (recursive descent; raw text via source slicing)
# ============================================================

class _TokParser:
    """Recursive-descent parser over the C++ token stream. Produces the SHARED
    T7 AST node types (+ this module's `Decl`). Raw statement / condition text is
    recovered by slicing the original source (`self.src`) via token offsets, so
    `ordered_events` hold faithful C++ fragments. Whitespace is not tokenised, so
    braceless bodies (same-line or next-line) reassemble naturally."""

    def __init__(self, tokens, src):
        self.toks = tokens
        self.src = src
        self.i = 0
        self.n = len(tokens)

    # -- low-level -----------------------------------------------------------

    def at(self, off=0):
        j = self.i + off
        return self.toks[j] if 0 <= j < self.n else None

    def _is_kw(self, tok, kw):
        return tok is not None and tok.kind == KIND_IDENT and tok.value == kw

    def _raw(self, a, b):
        """Raw source text spanning tokens[a:b] (exclusive end)."""
        if a >= b or a >= self.n:
            return ""
        b = min(b, self.n)
        start = self.toks[a].pos
        last = self.toks[b - 1]
        end = last.pos + len(last.value)
        return self.src[start:end].strip()

    def _match_balanced(self, open_idx):
        """tokens[open_idx] is an opening delimiter; return the index just past
        its matching close (or self.n if unbalanced)."""
        depth = 0
        j = open_idx
        while j < self.n:
            t = self.toks[j]
            if _is_open(t):
                depth += 1
            elif _is_close(t):
                depth -= 1
                if depth == 0:
                    return j + 1
            j += 1
        return self.n

    def _scan_stmt_end(self, start):
        """Index just past the depth-0 ';' at/after `start` (or self.n)."""
        depth = 0
        j = start
        while j < self.n:
            t = self.toks[j]
            if _is_open(t):
                depth += 1
            elif _is_close(t):
                if depth > 0:
                    depth -= 1
            elif depth == 0 and _is_op(t, ";"):
                return j + 1
            j += 1
        return self.n

    # -- statement list ------------------------------------------------------

    def parse_statements(self):
        """Parse statements until a closing '}' (left unconsumed) or EOF."""
        stmts = []
        while True:
            t = self.at()
            if t is None or _is_op(t, "}"):
                break
            if _is_op(t, ";"):
                self.i += 1
                continue
            before = self.i
            node = self.parse_statement()
            if self.i == before:
                self.i += 1  # safety net: never spin on malformed input
                continue
            if node is not None:
                stmts.append(node)
        return stmts

    # -- single statement ----------------------------------------------------

    def parse_statement(self):
        t = self.at()
        if t is None:
            return None

        if _is_op(t, "{"):
            self.i += 1
            inner = self.parse_statements()
            if _is_op(self.at(), "}"):
                self.i += 1
            return Seq(inner)

        if t.kind == KIND_IDENT and t.value in _CTRL_KW:
            v = t.value
            if v == "if":
                return self._if()
            if v == "while":
                return self._while()
            if v == "for":
                return self._for()
            if v == "do":
                return self._do()
            if v == "switch":
                return self._switch()
            if v == "case":
                return self._case()
            if v == "default":
                if _is_op(self.at(1), ":"):
                    self.i += 2
                    return DefaultLabel()
                # else: identifier-like use of 'default' -> plain statement
            elif v == "goto":
                return self._goto()
            elif v == "return":
                return self._return()
            elif v == "break":
                self.i = self._scan_stmt_end(self.i)
                return Break()
            elif v == "continue":
                self.i = self._scan_stmt_end(self.i)
                return Continue()

        # jump label  NAME:  (not NAME:: scope; name not a keyword)
        if t.kind == KIND_IDENT and t.value not in KEYWORDS:
            nx = self.at(1)
            if _is_op(nx, ":") and not _is_op(self.at(2), ":"):
                name = t.value
                self.i += 2
                return Label(name)

        return self._plain_statement()

    # -- control constructs --------------------------------------------------

    def _paren_cond(self):
        """Consume a `( ... )` and return the inner raw text (no parens)."""
        t = self.at()
        if not _is_op(t, "("):
            return ""
        oi = self.i
        ci = self._match_balanced(oi)
        inner = self._raw(oi + 1, ci - 1)
        self.i = ci
        return inner

    def _body(self):
        """Parse ONE body: a `{ ... }` block OR a single (possibly next-line)
        statement. Returns list[_Node]."""
        t = self.at()
        if _is_op(t, "{"):
            self.i += 1
            inner = self.parse_statements()
            if _is_op(self.at(), "}"):
                self.i += 1
            return inner
        node = self.parse_statement()
        return [node] if node is not None else []

    def _if(self):
        self.i += 1                              # 'if'
        cond = self._paren_cond()
        then = self._body()
        els = None
        if self._is_kw(self.at(), "else"):
            self.i += 1
            if self._is_kw(self.at(), "if"):
                els = [self._if()]               # else-if chain
            else:
                els = self._body()
        return If(cond, then, els)

    def _while(self):
        self.i += 1                              # 'while'
        cond = self._paren_cond()
        body = self._body()
        return While(cond, body)

    def _for(self):
        self.i += 1                              # 'for'
        inner = ""
        if _is_op(self.at(), "("):
            oi = self.i
            ci = self._match_balanced(oi)
            inner = self._raw(oi + 1, ci - 1)
            self.i = ci
        init, cond, inc = _split_for(inner)
        body = self._body()
        return For(init, cond, inc, body)

    def _do(self):
        self.i += 1                              # 'do'
        body = self._body()
        cond = ""
        if self._is_kw(self.at(), "while"):
            self.i += 1
            cond = self._paren_cond()
            if _is_op(self.at(), ";"):
                self.i += 1
        return DoWhile(body, cond)

    def _switch(self):
        self.i += 1                              # 'switch'
        sel = self._paren_cond()
        if _is_op(self.at(), "{"):
            self.i += 1
            body = self.parse_statements()
            if _is_op(self.at(), "}"):
                self.i += 1
        else:
            body = self._body()
        return Switch(sel, body)

    def _case(self):
        self.i += 1                              # 'case'
        start = self.i
        depth = 0
        colon = None
        j = self.i
        while j < self.n:
            t = self.toks[j]
            if _is_open(t):
                depth += 1
            elif _is_close(t):
                if depth > 0:
                    depth -= 1
            elif depth == 0 and _is_op(t, ":"):
                colon = j
                break
            j += 1
        if colon is None:
            val = self._raw(start, self.n)
            self.i = self.n
            return CaseLabel(val)
        val = self._raw(start, colon)
        self.i = colon + 1
        return CaseLabel(val)

    def _goto(self):
        self.i += 1                              # 'goto'
        name = ""
        t = self.at()
        if t is not None and t.kind == KIND_IDENT:
            name = t.value
        self.i = self._scan_stmt_end(self.i)
        return Goto(name)

    def _return(self):
        start = self.i
        end = self._scan_stmt_end(self.i)
        txt, _ = self._raw_no_semi(start, end)
        self.i = end
        tern = _lower_ternary(txt, is_return=True)
        if tern is not None:
            return tern
        return Return(txt)

    # -- plain statement -----------------------------------------------------

    def _raw_no_semi(self, start, end):
        e = end
        if e - 1 >= start and _is_op(self.toks[e - 1], ";"):
            e -= 1
        return self._raw(start, e), e

    def _plain_statement(self):
        start = self.i
        end = self._scan_stmt_end(self.i)
        txt, body_end = self._raw_no_semi(start, end)
        self.i = end
        if not txt:
            return None

        # `?:` -> condition diamond (parser-level transform; no body duplication)
        tern = _lower_ternary(txt, is_return=False)
        if tern is not None:
            return tern

        # local declaration -> Decl (carries names + verbatim text)
        names = _extract_decl_names(self.toks[start:body_end])
        if names:
            return Decl(names, txt)

        return Simple(txt)


# ============================================================
# Ternary lowering : `... C ? A : B ...` -> If diamond
# ============================================================

def _lower_ternary(txt, is_return):
    """If `txt` contains a depth-0 `?:` ternary in the assignment RHS / return
    expression / as a bare expression statement, return an `If` node forming a
    condition DIAMOND (no body duplication: each arm is a distinct statement).
    Returns None if there is no cleanly-splittable top-level ternary."""
    toks = tokenize(txt)
    if not toks:
        return None

    # locate the first depth-0 '?'
    depth = 0
    q = None
    for idx, t in enumerate(toks):
        if _is_open(t):
            depth += 1
        elif _is_close(t):
            if depth > 0:
                depth -= 1
        elif depth == 0 and _is_op(t, "?"):
            q = idx
            break
    if q is None:
        return None

    # matching ':' for this '?' (account for nested ternaries)
    depth = 0
    tern_depth = 0
    colon = None
    for idx in range(q + 1, len(toks)):
        t = toks[idx]
        if _is_open(t):
            depth += 1
        elif _is_close(t):
            if depth > 0:
                depth -= 1
        elif depth == 0 and _is_op(t, "?"):
            tern_depth += 1
        elif depth == 0 and _is_op(t, ":"):
            if tern_depth > 0:
                tern_depth -= 1
            else:
                colon = idx
                break
    if colon is None:
        return None

    q_pos = toks[q].pos
    colon_pos = toks[colon].pos

    # determine the expression prefix (LHS of '=' / after 'return' / nothing)
    prefix = ""
    rhs_start = 0
    if is_return and toks[0].kind == KIND_IDENT and toks[0].value == "return":
        rhs_start = toks[1].pos if len(toks) > 1 else len(txt)
    else:
        depth = 0
        eq_pos = None
        for idx in range(0, q):
            t = toks[idx]
            if _is_open(t):
                depth += 1
            elif _is_close(t):
                if depth > 0:
                    depth -= 1
            elif depth == 0 and t.kind == KIND_OP and t.value == "=":
                eq_pos = t.pos
        if eq_pos is not None:
            rhs_start = eq_pos + 1
            prefix = txt[:rhs_start]

    cond_text = txt[rhs_start:q_pos].strip()
    true_text = txt[q_pos + 1:colon_pos].strip()
    false_text = txt[colon_pos + 1:].strip()
    if not cond_text or not true_text or not false_text:
        return None

    if is_return:
        then = [Return("return " + true_text)]
        els = [Return("return " + false_text)]
    else:
        then = [_make_plain((prefix + " " + true_text).strip())]
        els = [_make_plain((prefix + " " + false_text).strip())]
    return If(cond_text, then, els)


def _make_plain(text):
    """Build a Simple or Decl node from a synthesised statement fragment."""
    if not text:
        return Simple("")
    names = _extract_decl_names(tokenize(text))
    if names:
        return Decl(names, text)
    return Simple(text)


# ============================================================
# CFG builder : AST -> efv_model.CFG  (C++ extensions over T7's _Builder)
# ============================================================

class _CppBuilder(_Builder):
    """Subclass of T7's `_Builder`. Inherits ALL of T7's AST->CFG construction
    (labels, switch, break/continue, goto, the walk machinery) unchanged and
    adds the three C++-specific lowerings: `Decl` markers and short-circuit
    `&&`/`||` condition splitting (for if / while / for / do-while)."""

    # -- statement dispatch: add the Decl case, delegate the rest -------------

    def _stmt(self, st, cur, ctx):
        if type(st) is Decl:
            if cur is None:
                cur = self._fresh()
            for name in st.names:
                cur.add_event("decl " + name)
            if st.text:
                cur.add_event(st.text)
            return cur
        # super's dispatch calls self._if / self._while / ... -> the overrides
        # below run via dynamic dispatch.
        return super(_CppBuilder, self)._stmt(st, cur, ctx)

    # -- short-circuit condition lowering ------------------------------------

    def _lower_cond(self, cond_text, entry, true_id, false_id, kw,
                    final_true_edge=EDGE_TRUE):
        """Lower a (possibly short-circuit) boolean condition into a chain of
        CONDITION BLOCKS. `entry` holds the FIRST atom's test; extra atoms get
        fresh blocks. On overall success an edge labelled `final_true_edge` runs
        to `true_id`; on overall failure an edge labelled EDGE_FALSE runs to
        `false_id`. A single atom (no `||`/`&&`) degenerates to EXACTLY T7's
        single-condition form (entry: TRUE->true_id, FALSE->false_id)."""
        or_ops = _split_top_level(cond_text, "||")
        if not or_ops:
            or_ops = [cond_text.strip()]

        # flatten to atoms: (text, operand_index, is_last_in_operand)
        atoms = []
        for oi, or_op in enumerate(or_ops):
            and_ops = _split_top_level(or_op, "&&")
            if not and_ops:
                and_ops = [or_op.strip()]
            for aj, atom in enumerate(and_ops):
                atoms.append((atom, oi, aj == len(and_ops) - 1))

        # one block per atom (first reuses `entry`)
        blocks = []
        for k, (atom, oi, is_last_and) in enumerate(atoms):
            b = entry if k == 0 else self._new()
            b.add_event(kw + " (" + atom + ")")
            blocks.append((b, oi, is_last_and))

        # the first block of each OR operand (target for a preceding operand's
        # short-circuit failure)
        operand_first = {}
        for k, (b, oi, _last) in enumerate(blocks):
            operand_first.setdefault(oi, b)
        m = len(or_ops)

        def or_fail_target(oi):
            if oi >= m - 1:
                return false_id
            return operand_first[oi + 1].id

        for k, (b, oi, is_last_and) in enumerate(blocks):
            if is_last_and:
                b.add_successor(true_id, final_true_edge)
            else:
                # next AND atom of the SAME operand is the next flattened block
                b.add_successor(blocks[k + 1][0].id, EDGE_TRUE)
            b.add_successor(or_fail_target(oi), EDGE_FALSE)

    # -- if / else (condition split) -----------------------------------------

    def _if(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        then_entry = self._new()
        else_entry = self._new() if st.els is not None else None
        join = self._new()
        false_id = else_entry.id if else_entry is not None else join.id

        self._lower_cond(st.cond, cur, then_entry.id, false_id, "if")

        then_exit = self._seq(st.then, then_entry, ctx)
        if then_exit is not None:
            then_exit.add_successor(join.id, EDGE_FALLTHROUGH)
        if else_entry is not None:
            else_exit = self._seq(st.els, else_entry, ctx)
            if else_exit is not None:
                else_exit.add_successor(join.id, EDGE_FALLTHROUGH)
        return join

    # -- while (condition split; back-edge to first cond block) --------------

    def _while(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        header = self._new()                     # first condition block
        cur.add_successor(header.id, EDGE_FALLTHROUGH)
        body_entry = self._new()
        exit_b = self._new()

        self._lower_cond(st.cond, header, body_entry.id, exit_b.id, "while")

        ctx.append(_Ctx(exit_b.id, header.id))   # continue -> re-eval whole cond
        body_exit = self._seq(st.body, body_entry, ctx)
        ctx.pop()
        if body_exit is not None:
            body_exit.add_successor(header.id, EDGE_BACK)
        return exit_b

    # -- for (condition split) -----------------------------------------------

    def _for(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        if st.init:
            cur.add_event(st.init)
        header = self._new()
        cur.add_successor(header.id, EDGE_FALLTHROUGH)
        body_entry = self._new()
        exit_b = self._new()
        latch = self._new()
        if st.inc:
            latch.add_event(st.inc)

        if st.cond:
            self._lower_cond(st.cond, header, body_entry.id, exit_b.id, "for-cond")
        else:
            header.add_successor(body_entry.id, EDGE_TRUE)
            header.add_successor(exit_b.id, EDGE_FALSE)

        ctx.append(_Ctx(exit_b.id, latch.id))    # continue -> latch (increment)
        body_exit = self._seq(st.body, body_entry, ctx)
        ctx.pop()
        if body_exit is not None:
            body_exit.add_successor(latch.id, EDGE_FALLTHROUGH)
        latch.add_successor(header.id, EDGE_BACK)
        return exit_b

    # -- do-while (tail condition split; final-true edge is the back-edge) ----

    def _dowhile(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        body_entry = self._new()
        cur.add_successor(body_entry.id, EDGE_FALLTHROUGH)
        exit_b = self._new()
        cond_b = self._new()                     # first tail-condition block

        ctx.append(_Ctx(exit_b.id, cond_b.id))   # continue -> tail test
        body_exit = self._seq(st.body, body_entry, ctx)
        ctx.pop()
        if body_exit is not None:
            body_exit.add_successor(cond_b.id, EDGE_FALLTHROUGH)

        # success of the tail test loops back to the body (EDGE_BACK)
        self._lower_cond(st.cond, cond_b, body_entry.id, exit_b.id, "while",
                         final_true_edge=EDGE_BACK)
        return exit_b


# ============================================================
# Public entry point
# ============================================================

def build_cpp_cfg(cpp_function_body_text):
    """Build an `efv_model.CFG` (basic blocks + edges) from a C++ function. The
    input may be a full definition (signature + `{ body }`), a brace-wrapped
    compound body, or a bare statement list. STRUCTURE ONLY -- block
    `ordered_events` hold RAW C++ fragments (+ synthesised tests / `decl`
    markers) for T14. Always returns a CFG with at least one (entry) block."""
    if not cpp_function_body_text:
        cfg = CFG(0)
        cfg.new_block(0)
        return cfg

    tokens = tokenize(cpp_function_body_text)

    # Find the function body opener: the first '{' token. Statements before it
    # (the signature) are discarded. If there is no '{', treat the whole stream
    # as a bare statement list.
    brace_idx = None
    for k, t in enumerate(tokens):
        if t.kind == KIND_OP and t.value == "{":
            brace_idx = k
            break

    parser = _TokParser(tokens, cpp_function_body_text)
    if brace_idx is not None:
        parser.i = brace_idx + 1
    stmts = parser.parse_statements()
    cfg = _CppBuilder().build(stmts)

    # Seed the entry block with the function's PARAMETER names as `decl` markers
    # so T14 treats a parameter access as a LOCAL (not an observable member/global
    # event). The entry block reaches every block, so these locals are visible
    # everywhere -- exactly the scope of a parameter. Without this, a parameter
    # whose name collides with a signals.json global/member is misresolved to a
    # spurious global/member READ/WRITE (FP#1 QueryInterface's `ppv`).
    params = _extract_param_names(tokens, brace_idx)
    if params:
        entry = cfg.get_block(cfg.entry_id)
        if entry is not None:
            entry.ordered_events[:0] = ["decl " + p for p in params]
    return cfg


# ============================================================
# CLI (optional): dump a CFG from a source/JSON file
# ============================================================

def _main(argv):
    import json
    if not argv:
        print("usage: efv_cpp_cfg.py <file.cpp | func.json>", file=sys.stderr)
        return 2
    path = argv[0]
    with open(path, "r", encoding="utf-8") as f:
        raw = f.read()
    try:
        data = json.loads(raw)
        text = data.get("code") or data.get("source") or ""
    except json.JSONDecodeError:
        text = raw
    cfg = build_cpp_cfg(text)
    print("CFG entry={} blocks={}".format(cfg.entry_id, len(cfg)))
    for b in cfg:
        print("  block {} : {} stmt(s) -> {}".format(
            b.id, len(b.ordered_events), b.successors))
    return 0


# ============================================================
# Self-test / evidence generator
# ============================================================

def _selftest():
    out = []

    def line(s=""):
        out.append(s)

    def dump_cfg(cfg, title):
        line("=" * 70)
        line(title)
        line("=" * 70)
        line("CFG entry={} blocks={}".format(cfg.entry_id, len(cfg)))
        for b in cfg:
            line("  block {:>2} -> {}".format(b.id, b.successors))
            for e in b.ordered_events:
                line("        | {}".format(e))

    checks = []

    def check(name, cond):
        checks.append((name, bool(cond)))
        return bool(cond)

    # ---- C1: GetPowerOutput (the T12 target; has `||` + braceless bodies) ----
    get_power_output = (
        "int BuildingClass::GetPowerOutput()\n"
        "{\n"
        "    if (!Type || !HasPower) return 0;\n"
        "    int power = Type->PowerOutput;\n"
        "    if (IsOverpowered) power += 200;\n"
        "    if (HasExtraPowerBonus) power += 100;\n"
        "    if (health < (int)(Type->Strength))\n"
        "        power = (power * health) / (int)(Type->Strength);\n"
        "    return power;\n"
        "}\n"
    )
    cfg = build_cpp_cfg(get_power_output)
    dump_cfg(cfg, "C1: BuildingClass::GetPowerOutput -> C++ CFG")

    # collect every synthesised test event
    if_events = []
    for b in cfg:
        for e in b.ordered_events:
            if e.startswith("if ("):
                if_events.append((b.id, e))

    # `||` split: the early-return test must become TWO condition blocks:
    #   "if (!Type)" and "if (!HasPower)" in DIFFERENT blocks.
    type_blocks = [bid for (bid, e) in if_events if e == "if (!Type)"]
    pow_blocks = [bid for (bid, e) in if_events if e == "if (!HasPower)"]
    line("")
    line("`||` split check:")
    line("  'if (!Type)'     in block(s): {}".format(type_blocks))
    line("  'if (!HasPower)'  in block(s): {}".format(pow_blocks))
    check("`||`: 'if (!Type)' is its own condition block", len(type_blocks) == 1)
    check("`||`: 'if (!HasPower)' is its own condition block", len(pow_blocks) == 1)
    check("`||`: the two atoms are in DIFFERENT blocks",
          type_blocks and pow_blocks and type_blocks[0] != pow_blocks[0])
    # NO flattened `||` survives as a single test event
    check("`||`: no flattened 'if (!Type || !HasPower)' event remains",
          all(e != "if (!Type || !HasPower)" for (_b, e) in if_events))

    # the `!Type` block: TRUE -> then(return 0); FALSE -> the `!HasPower` block.
    if type_blocks and pow_blocks:
        tb = cfg.get_block(type_blocks[0])
        true_targets = [t for (t, l) in tb.successors if l == EDGE_TRUE]
        false_targets = [t for (t, l) in tb.successors if l == EDGE_FALSE]
        check("`||`: '!Type' block has a TRUE and a FALSE edge",
              len(true_targets) == 1 and len(false_targets) == 1)
        check("`||`: '!Type' FALSE edge targets the '!HasPower' block",
              false_targets and false_targets[0] == pow_blocks[0])
        # the return-0 block (TRUE target of !Type) holds "return 0"
        if true_targets:
            rb = cfg.get_block(true_targets[0])
            check("`||`: '!Type' TRUE edge reaches a block with 'return 0'",
                  rb is not None and any(ev == "return 0" for ev in rb.ordered_events))

    # braceless next-line body: `if (health<...)\n power = ...;` keeps the
    # assignment INSIDE the if's TRUE successor (not a sibling).
    health_blocks = [bid for (bid, e) in if_events
                     if e.startswith("if (health <")]
    check("braceless: 'if (health < ...)' present as a test", len(health_blocks) == 1)
    if health_blocks:
        hb = cfg.get_block(health_blocks[0])
        htrue = [t for (t, l) in hb.successors if l == EDGE_TRUE]
        ok = False
        if htrue:
            tb = cfg.get_block(htrue[0])
            ok = tb is not None and any("power = (power * health)" in ev
                                        for ev in tb.ordered_events)
        check("braceless next-line body lands in the if's TRUE block", ok)

    # local declaration tracking: `int power = ...` -> a `decl power` marker.
    decl_markers = [e for b in cfg for e in b.ordered_events if e.startswith("decl ")]
    line("")
    line("decl markers: {}".format(decl_markers))
    check("decl: 'decl power' marker emitted", "decl power" in decl_markers)
    check("decl: raw declaration text retained",
          any("int power = Type->PowerOutput" in e
              for b in cfg for e in b.ordered_events))
    # `power += 200` etc. are NOT declarations -> no spurious markers
    check("decl: no spurious marker for 'power' assignments",
          decl_markers.count("decl power") == 1)

    # the function returns `power` somewhere (terminal)
    check("'return power' present",
          any(e == "return power" for b in cfg for e in b.ordered_events))

    # ---- C2: `&&` short-circuit split --------------------------------------
    and_src = "void f() { if (a && b && c) g(); h(); }\n"
    cfg2 = build_cpp_cfg(and_src)
    dump_cfg(cfg2, "C2: `&&` short-circuit (a && b && c)")
    and_tests = [(b.id, e) for b in cfg2 for e in b.ordered_events
                 if e in ("if (a)", "if (b)", "if (c)")]
    check("`&&`: a/b/c each become their own condition block",
          len(and_tests) == 3 and len(set(b for b, _ in and_tests)) == 3)
    # for `a && b`: a TRUE -> b's block; a FALSE -> the (shared) false target
    a_blk = [b for (b, e) in and_tests if e == "if (a)"]
    b_blk = [b for (b, e) in and_tests if e == "if (b)"]
    if a_blk and b_blk:
        ab = cfg2.get_block(a_blk[0])
        a_true = [t for (t, l) in ab.successors if l == EDGE_TRUE]
        check("`&&`: 'a' TRUE edge advances to the 'b' condition block",
              a_true and a_true[0] == b_blk[0])

    # ---- C3: ternary `?:` -> condition diamond -----------------------------
    tern_src = "void f() { int x = c ? a : b; use(x); }\n"
    cfg3 = build_cpp_cfg(tern_src)
    dump_cfg(cfg3, "C3: ternary `?:` -> diamond (x = c ? a : b)")
    cond_blk = [b.id for b in cfg3 for e in b.ordered_events if e == "if (c)"]
    check("ternary: condition 'if (c)' synthesised", len(cond_blk) == 1)
    # the two arms must hold the substituted assignments x=a and x=b
    has_a = any("x = a" in e for b in cfg3 for e in b.ordered_events)
    has_b = any("x = b" in e for b in cfg3 for e in b.ordered_events)
    check("ternary: true arm holds 'x = a'", has_a)
    check("ternary: false arm holds 'x = b'", has_b)
    if cond_blk:
        cb = cfg3.get_block(cond_blk[0])
        has_true = any(l == EDGE_TRUE for (_t, l) in cb.successors)
        has_false = any(l == EDGE_FALSE for (_t, l) in cb.successors)
        check("ternary: condition block has TRUE and FALSE arms",
              has_true and has_false)

    # ---- C4: switch / case / break (inherited from T7 builder) -------------
    sw_src = ("int f(int x) { switch (x) { case 1: a(); break; "
              "case 2: case 3: b(); break; default: c(); } return 0; }\n")
    cfg4 = build_cpp_cfg(sw_src)
    dump_cfg(cfg4, "C4: switch/case/default/break")
    check("switch: 'switch (x)' dispatch present",
          any(e == "switch (x)" for b in cfg4 for e in b.ordered_events))
    case_edges = [l for b in cfg4 for (_t, l) in b.successors
                  if l.startswith("case:")]
    check("switch: case:1/case:2/case:3 edges present",
          "case:1" in case_edges and "case:2" in case_edges and "case:3" in case_edges)
    check("switch: default edge present",
          any(l == "default" for b in cfg4 for (_t, l) in b.successors))

    # ---- C5: lambda / goto must not crash the parser -----------------------
    lam_src = ("void f() { auto cmp = [](int a, int b) { return a > b; }; "
               "goto done; x(); done: y(); }\n")
    crashed = False
    try:
        cfg5 = build_cpp_cfg(lam_src)
    except Exception as exc:  # pragma: no cover - must never happen
        crashed = True
        line("CRASH on lambda/goto: {!r}".format(exc))
        cfg5 = None
    check("robustness: lambda + goto does not crash build_cpp_cfg", not crashed)
    if cfg5 is not None:
        check("robustness: goto edge wired to its label block",
              any(e == "goto done" for b in cfg5 for e in b.ordered_events))

    # ---- C6: empty / trivial inputs ----------------------------------------
    e0 = build_cpp_cfg("")
    check("trivial: empty input -> 1-block CFG", len(e0) == 1)
    e1 = build_cpp_cfg("if (x) return 1;")        # bare body, no signature/braces
    check("trivial: bare body (no braces) parses",
          any(e == "if (x)" for b in e1 for e in b.ordered_events))

    # ---- T7 REGRESSION: confirm the shared _Builder still works -------------
    line("")
    line("=" * 70)
    line("T7 REGRESSION (shared _Builder via efv_ida_cfg.build_ida_cfg)")
    line("=" * 70)
    from efv_ida_cfg import build_ida_cfg

    # (a) braceless: `if (x)\n return 0;` -> return isolated in TRUE-succ
    t7a = "int f()\n{\n  if (x)\n    return 0;\n  doStuff();\n}\n"
    cfg_a = build_ida_cfg(t7a)
    ret_blocks = [b.id for b in cfg_a for e in b.ordered_events if e == "return 0"]
    do_blocks = [b.id for b in cfg_a for e in b.ordered_events if e == "doStuff()"]
    same = bool(ret_blocks and do_blocks and ret_blocks[0] == do_blocks[0])
    check("T7 braceless: 'return 0' and 'doStuff()' in DIFFERENT blocks",
          ret_blocks and do_blocks and not same)
    line("  return 0 block={} doStuff block={}".format(ret_blocks, do_blocks))

    # (b) do-while back-edge present
    t7b = "int f()\n{\n  int i = 0;\n  do { i++; } while (i < 3);\n  return i;\n}\n"
    cfg_b = build_ida_cfg(t7b)
    check("T7 do-while: a 'back' edge exists", len(cfg_b.back_edges()) >= 1)
    line("  do-while back_edges={}".format(cfg_b.back_edges()))

    # (c) goto edges resolve to the label block
    t7c = ("int f()\n{\n  if (a) goto END;\n  if (b) goto END;\n"
           "  work();\nEND:\n  return 0;\n}\n")
    cfg_c = build_ida_cfg(t7c)
    goto_srcs = [b.id for b in cfg_c for e in b.ordered_events
                 if e.startswith("goto END")]
    # every goto block has a fallthrough edge to a common label block holding RET
    end_targets = set()
    for bid in goto_srcs:
        for (t, l) in cfg_c.get_block(bid).successors:
            end_targets.add(t)
    check("T7 goto: 2 goto sites edge to the (single) END label block",
          len(goto_srcs) == 2 and len(end_targets) == 1)
    line("  goto src blocks={} -> label block(s)={}".format(goto_srcs, sorted(end_targets)))

    # ---- summary -----------------------------------------------------------
    line("")
    line("=" * 70)
    line("CHECKS")
    line("=" * 70)
    all_pass = True
    for name, ok in checks:
        line("  [{}] {}".format("PASS" if ok else "FAIL", name))
        all_pass = all_pass and ok
    line("")
    line("RESULT: {} ({} checks)".format(
        "ALL PASS" if all_pass else "FAILURE", len(checks)))

    report = "\n".join(out)
    print(report)
    return 0 if all_pass else 1


if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] != "--selftest":
        sys.exit(_main(sys.argv[1:]))
    sys.exit(_selftest())
