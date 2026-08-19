#!/usr/bin/env python3
"""
efv_ida_cfg.py — Build a control-flow graph from IDA Hex-Rays pseudocode TEXT.

Task T7 of the execution-flow-cfg pipeline. This module builds STRUCTURE ONLY:
basic blocks + edges. It does NOT extract execution-flow events (CALL/READ/WRITE/
RET) — that is T8's job (`efv_ida_events.py`). Each block instead retains the raw
pseudocode statement fragments that fall inside it, so T8 can run its leaf
extractor over them later.

------------------------------------------------------------------------------
RAW-TEXT CONTRACT (read by T8)
------------------------------------------------------------------------------
A CFG produced here stores RAW pseudocode statement strings in every block's
`ordered_events` list (in source order). They are placeholders, NOT yet-extracted
events. `efv_model.Block` uses `__slots__`, so a `block._raw` attribute is
impossible; per the T7 spec, the raw text lives in `ordered_events`. T8 reads
each block's `ordered_events`, extracts the real event strings, and replaces the
list with the canonical CALL/READ/WRITE/RET events.

Stored fragments include the synthesised branch tests so T8 sees the events that
live in a condition:
    "if (<cond>)"          conditional test (added to the deciding block)
    "while (<cond>)"       loop test (in the loop-header / do-while-tail block)
    "for-cond (<cond>)"    for-loop test
    "switch (<sel>)"       switch selector (in the dispatch block)
    "return ..."           return statement (terminal block)
    "goto LABEL"           unconditional jump (block then edges to the label)
    "<stmt>"               any plain linear statement, verbatim

------------------------------------------------------------------------------
WHY A NEW PARSER (root-cause-1 fix)
------------------------------------------------------------------------------
The old `verify_execution_flow.py` walked the pseudocode LINE BY LINE and emitted
an END_IF the moment an `if (...)` line ended, so a braceless body on the *next*
line (`if (x)\n  return 0;`) was treated as a sibling of the `if`, not its body.
This builder instead joins the whole (comment-stripped) body into one text blob
and parses it with a recursive-descent parser over balanced delimiters, so a
braceless body — whether on the same line or the next — is consumed as the
control structure's single body statement. The `return 0` therefore lands INSIDE
the if's true-successor block, never after it.

------------------------------------------------------------------------------
SUPPORTED CONSTRUCTS
------------------------------------------------------------------------------
  if / else if / else .......... true / false successors, join block
  while / for .................. header test, body, EDGE_BACK latch, exit
  do { } while ................. body, tail test, EDGE_BACK to body, exit
  switch / case / default ...... dispatch -> case arms (edge_case / default),
                                 C fallthrough between arms
  goto LABEL ................... edge to the label's pre-registered block
  LABEL: ....................... starts a block; fallthrough flows into it
  return ....................... terminal block (no successor)
  break / continue ............. edge to enclosing loop/switch exit / header
  try / catch / finally ........ split into blocks IF Hex-Rays emits them;
                                 absent in normal output -> no-op

Public API:  build_ida_cfg(pseudocode_text) -> efv_model.CFG
"""

import os
import re
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
    EDGE_DEFAULT,
    EDGE_BACK,
    edge_case,
)

# Reusable text helpers from the original verifier (handle IDA `/*0xADDR*/`
# markers + brace/paren balancing). MUST NOT modify that file; importing is safe
# (it has no import-time side effects). `take_statement` was NOT a fit for this
# recursive-descent design (its opened-block flag targets a flat line walker), so
# only the three delimiter-aware helpers below are reused.
from verify_execution_flow import (
    clean_line,
    balanced_paren,
    take_to_semicolon,
)

__all__ = ["build_ida_cfg"]


# ============================================================
# AST node types (lightweight)
# ============================================================

class _Node:
    __slots__ = ()


class Simple(_Node):
    """A single linear statement (verbatim text, no trailing ';')."""
    __slots__ = ("text",)

    def __init__(self, text):
        self.text = text


class Seq(_Node):
    """A `{ ... }` group — no CFG boundary of its own, just nesting."""
    __slots__ = ("stmts",)

    def __init__(self, stmts):
        self.stmts = stmts


class Return(_Node):
    __slots__ = ("text",)

    def __init__(self, text):
        self.text = text


class Goto(_Node):
    __slots__ = ("target",)

    def __init__(self, target):
        self.target = target


class Label(_Node):
    __slots__ = ("name",)

    def __init__(self, name):
        self.name = name


class Break(_Node):
    __slots__ = ()


class Continue(_Node):
    __slots__ = ()


class If(_Node):
    __slots__ = ("cond", "then", "els")

    def __init__(self, cond, then, els):
        self.cond = cond
        self.then = then            # list[_Node]
        self.els = els              # list[_Node] | None


class While(_Node):
    __slots__ = ("cond", "body")

    def __init__(self, cond, body):
        self.cond = cond
        self.body = body


class For(_Node):
    __slots__ = ("init", "cond", "inc", "body")

    def __init__(self, init, cond, inc, body):
        self.init = init
        self.cond = cond
        self.inc = inc
        self.body = body


class DoWhile(_Node):
    __slots__ = ("body", "cond")

    def __init__(self, body, cond):
        self.body = body
        self.cond = cond


class Switch(_Node):
    __slots__ = ("sel", "body")

    def __init__(self, sel, body):
        self.sel = sel
        self.body = body            # flat list incl. CaseLabel/DefaultLabel


class CaseLabel(_Node):
    __slots__ = ("value",)

    def __init__(self, value):
        self.value = value


class DefaultLabel(_Node):
    __slots__ = ()


# Control / structural keywords that must never be mistaken for a `LABEL:`.
_KEYWORDS = frozenset({
    "if", "else", "while", "for", "do", "switch", "case", "default",
    "goto", "return", "break", "continue", "try", "catch", "finally",
})

_IDENT = re.compile(r"[A-Za-z_]\w*")
# A goto label / jump label at statement start: `NAME:` but not `NAME::` (scope).
_LABEL = re.compile(r"([A-Za-z_]\w*)\s*:(?!:)")


# ============================================================
# Pre-clean
# ============================================================

def _preclean(text):
    """Strip IDA address markers + comments line-by-line, then rejoin so the
    whole body is a single blob (newlines become plain whitespace to the
    parser, which lets multi-line / next-line-braceless bodies reassemble)."""
    return "\n".join(clean_line(line) for line in text.split("\n"))


# ============================================================
# Small scanners
# ============================================================

def _kw(s, kw):
    """True if `s` begins with keyword `kw` followed by a word boundary."""
    n = len(kw)
    if not s.startswith(kw):
        return False
    if len(s) == n:
        return True
    c = s[n]
    return not (c.isalnum() or c == "_")


def _read_to_colon(s):
    """Return (text_before_depth0_colon, rest_after_colon). Skips `::` scope
    operators and ignores colons inside nested () [] {}. Used for `case X:`."""
    depth = 0
    i = 0
    n = len(s)
    while i < n:
        c = s[i]
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == ":" and depth == 0:
            if i + 1 < n and s[i + 1] == ":":
                i += 2
                continue
            return s[:i], s[i + 1:]
        i += 1
    return s, ""


def _split_for(inner):
    """Split a `for (...)` header into (init, cond, inc) by depth-0 ';'."""
    parts = []
    depth = 0
    start = 0
    for i, c in enumerate(inner):
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == ";" and depth == 0:
            parts.append(inner[start:i])
            start = i + 1
    parts.append(inner[start:])
    while len(parts) < 3:
        parts.append("")
    return parts[0].strip(), parts[1].strip(), parts[2].strip()


# ============================================================
# Parser : text -> AST
# ============================================================

class _Parser:
    """Recursive-descent parser over the function body text. Consumes from the
    front of `self.s`. Whitespace (incl. newlines) is insignificant, which is
    exactly what makes next-line braceless bodies parse correctly."""

    def __init__(self, text):
        self.s = text

    # -- helpers -------------------------------------------------------------

    def _skip_ws(self):
        self.s = self.s.lstrip()

    def _body(self):
        """Parse ONE body: a `{ ... }` block OR a single (possibly next-line)
        statement. Returns list[_Node]."""
        self._skip_ws()
        if self.s[:1] == "{":
            self.s = self.s[1:]
            inner = self.parse_statements()
            self._skip_ws()
            if self.s[:1] == "}":
                self.s = self.s[1:]
            return inner
        stmt = self.parse_statement()
        return [stmt] if stmt is not None else []

    # -- statement list ------------------------------------------------------

    def parse_statements(self):
        """Parse statements until a closing '}' (left unconsumed) or EOF."""
        stmts = []
        while True:
            self._skip_ws()
            if not self.s or self.s[0] == "}":
                break
            before = len(self.s)
            stmt = self.parse_statement()
            if len(self.s) == before:
                # Safety net: no progress -> drop a char so we cannot spin.
                self.s = self.s[1:]
                continue
            if stmt is not None:
                stmts.append(stmt)
        return stmts

    # -- single statement ----------------------------------------------------

    def parse_statement(self):
        self._skip_ws()
        s = self.s
        if not s:
            return None
        c = s[0]

        if c == "{":
            self.s = s[1:]
            inner = self.parse_statements()
            self._skip_ws()
            if self.s[:1] == "}":
                self.s = self.s[1:]
            return Seq(inner)

        if c == ";":
            self.s = s[1:]
            return None

        # structural keywords (consume a '(' / body)
        if _kw(s, "if"):
            return self._if()
        if _kw(s, "while"):
            return self._while()
        if _kw(s, "for"):
            return self._for()
        if _kw(s, "do"):
            return self._do()
        if _kw(s, "switch"):
            return self._switch()

        # try / catch / finally — only if Hex-Rays emits them. Treat each block
        # as a plain Seq (they become ordinary fallthrough blocks). Absent in
        # normal pseudocode, so this path is rarely taken.
        if _kw(s, "try"):
            self.s = s[3:]
            return Seq(self._body())
        if _kw(s, "catch"):
            self.s = s[5:]
            self._skip_ws()
            if self.s[:1] == "(":
                _exc, self.s = balanced_paren(self.s)
            return Seq(self._body())
        if _kw(s, "finally"):
            self.s = s[7:]
            return Seq(self._body())

        # case / default labels (inside a switch body)
        if _kw(s, "case"):
            val, rest = _read_to_colon(s[4:])
            self.s = rest
            return CaseLabel(val.strip())
        if _kw(s, "default"):
            after = s[7:].lstrip()
            if after[:1] == ":":
                self.s = after[1:]
                return DefaultLabel()
            # not a switch default (e.g. an identifier starting with 'default')
            # -> fall through to plain-statement handling
        if _kw(s, "goto"):
            stmt, rest = take_to_semicolon(s[4:])
            self.s = rest
            return Goto(stmt.strip())
        if _kw(s, "return"):
            stmt, rest = take_to_semicolon(s)
            self.s = rest
            return Return(stmt.strip())
        if _kw(s, "break"):
            _stmt, rest = take_to_semicolon(s)
            self.s = rest
            return Break()
        if _kw(s, "continue"):
            _stmt, rest = take_to_semicolon(s)
            self.s = rest
            return Continue()

        # jump label  NAME:
        m = _LABEL.match(s)
        if m and m.group(1) not in _KEYWORDS:
            self.s = s[m.end():]
            return Label(m.group(1))

        # plain linear statement
        stmt, rest = take_to_semicolon(s)
        self.s = rest
        text = stmt.strip()
        return Simple(text) if text else None

    # -- control constructs --------------------------------------------------

    def _cond(self):
        self._skip_ws()
        if self.s[:1] == "(":
            inner, self.s = balanced_paren(self.s)
            return inner.strip()
        return ""

    def _if(self):
        self.s = self.s[2:]                      # 'if'
        cond = self._cond()
        then = self._body()
        els = None
        self._skip_ws()
        if _kw(self.s, "else"):
            self.s = self.s[4:]
            self._skip_ws()
            if _kw(self.s, "if"):
                els = [self._if()]               # else-if chain
            else:
                els = self._body()
        return If(cond, then, els)

    def _while(self):
        self.s = self.s[5:]                      # 'while'
        cond = self._cond()
        body = self._body()
        return While(cond, body)

    def _for(self):
        self.s = self.s[3:]                      # 'for'
        self._skip_ws()
        inner = ""
        if self.s[:1] == "(":
            inner, self.s = balanced_paren(self.s)
        init, cond, inc = _split_for(inner)
        body = self._body()
        return For(init, cond, inc, body)

    def _do(self):
        self.s = self.s[2:]                      # 'do'
        body = self._body()
        self._skip_ws()
        cond = ""
        if _kw(self.s, "while"):
            self.s = self.s[5:]
            cond = self._cond()
            self._skip_ws()
            if self.s[:1] == ";":
                self.s = self.s[1:]
        return DoWhile(body, cond)

    def _switch(self):
        self.s = self.s[6:]                      # 'switch'
        sel = self._cond()
        self._skip_ws()
        body = []
        if self.s[:1] == "{":
            self.s = self.s[1:]
            body = self.parse_statements()
            self._skip_ws()
            if self.s[:1] == "}":
                self.s = self.s[1:]
        else:
            body = self._body()
        return Switch(sel, body)


# ============================================================
# CFG builder : AST -> efv_model.CFG
# ============================================================

class _Ctx:
    """Break/continue targets of an enclosing loop or switch."""
    __slots__ = ("break_target", "continue_target")

    def __init__(self, break_target, continue_target):
        self.break_target = break_target
        self.continue_target = continue_target


class _Builder:
    def __init__(self):
        self.cfg = None
        self._n = 0
        self.label_block = {}        # label name -> block id

    def _new(self):
        bid = self._n
        self._n += 1
        return self.cfg.new_block(bid)

    # -- public --------------------------------------------------------------

    def build(self, stmts):
        self.cfg = CFG(0)
        entry = self._new()                  # entry block id 0
        self.cfg.entry_id = entry.id
        self._collect_labels(stmts)          # pre-register label blocks
        self._seq(stmts, entry, [])
        return self.cfg

    # -- label pre-registration ---------------------------------------------

    def _collect_labels(self, stmts):
        for st in stmts:
            t = type(st)
            if t is Label:
                if st.name not in self.label_block:
                    self.label_block[st.name] = self._new().id
            elif t is If:
                self._collect_labels(st.then)
                if st.els:
                    self._collect_labels(st.els)
            elif t in (While, For, DoWhile):
                self._collect_labels(st.body)
            elif t is Switch:
                self._collect_labels(st.body)
            elif t is Seq:
                self._collect_labels(st.stmts)

    # -- ctx helpers ---------------------------------------------------------

    @staticmethod
    def _break_target(ctx):
        return ctx[-1].break_target if ctx else None

    @staticmethod
    def _continue_target(ctx):
        for c in reversed(ctx):
            if c.continue_target is not None:
                return c.continue_target
        return None

    # -- walk ----------------------------------------------------------------

    def _seq(self, stmts, cur, ctx):
        for st in stmts:
            cur = self._stmt(st, cur, ctx)
        return cur

    def _fresh(self):
        """A fresh (initially unreachable) block, to preserve raw text that
        appears after a divert (return/goto/break) with no incoming edge."""
        return self._new()

    def _stmt(self, st, cur, ctx):
        t = type(st)

        if t is Simple:
            if cur is None:
                cur = self._fresh()
            cur.add_event(st.text)
            return cur

        if t is Seq:
            return self._seq(st.stmts, cur, ctx)

        if t is Label:
            lb = self.cfg.get_block(self.label_block[st.name])
            if cur is not None and cur is not lb:
                cur.add_successor(lb.id, EDGE_FALLTHROUGH)
            return lb

        if t is Goto:
            if cur is None:
                cur = self._fresh()
            cur.add_event("goto " + st.target)
            tgt = self.label_block.get(st.target)
            if tgt is not None:
                cur.add_successor(tgt, EDGE_FALLTHROUGH)
            return None

        if t is Return:
            if cur is None:
                cur = self._fresh()
            cur.add_event(st.text)
            return None

        if t is Break:
            if cur is None:
                cur = self._fresh()
            bt = self._break_target(ctx)
            if bt is not None:
                cur.add_successor(bt, EDGE_FALLTHROUGH)
            return None

        if t is Continue:
            if cur is None:
                cur = self._fresh()
            ct = self._continue_target(ctx)
            if ct is not None:
                cur.add_successor(ct, EDGE_BACK)
            return None

        if t is If:
            return self._if(st, cur, ctx)
        if t is While:
            return self._while(st, cur, ctx)
        if t is For:
            return self._for(st, cur, ctx)
        if t is DoWhile:
            return self._dowhile(st, cur, ctx)
        if t is Switch:
            return self._switch(st, cur, ctx)

        # CaseLabel / DefaultLabel only appear inside a switch body and are
        # consumed by _switch; if one leaks out, keep its text harmlessly.
        if t is CaseLabel:
            if cur is None:
                cur = self._fresh()
            cur.add_event("case " + st.value)
            return cur
        if t is DefaultLabel:
            if cur is None:
                cur = self._fresh()
            cur.add_event("default")
            return cur

        return cur

    # -- if/else -------------------------------------------------------------

    def _if(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        cur.add_event("if (" + st.cond + ")")

        then_entry = self._new()
        cur.add_successor(then_entry.id, EDGE_TRUE)
        then_exit = self._seq(st.then, then_entry, ctx)

        join = self._new()
        if then_exit is not None:
            then_exit.add_successor(join.id, EDGE_FALLTHROUGH)

        if st.els is None:
            cur.add_successor(join.id, EDGE_FALSE)
        else:
            else_entry = self._new()
            cur.add_successor(else_entry.id, EDGE_FALSE)
            else_exit = self._seq(st.els, else_entry, ctx)
            if else_exit is not None:
                else_exit.add_successor(join.id, EDGE_FALLTHROUGH)
        return join

    # -- while ---------------------------------------------------------------

    def _while(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        header = self._new()
        cur.add_successor(header.id, EDGE_FALLTHROUGH)
        header.add_event("while (" + st.cond + ")")

        body_entry = self._new()
        header.add_successor(body_entry.id, EDGE_TRUE)
        exit_b = self._new()
        header.add_successor(exit_b.id, EDGE_FALSE)

        ctx.append(_Ctx(exit_b.id, header.id))
        body_exit = self._seq(st.body, body_entry, ctx)
        ctx.pop()
        if body_exit is not None:
            body_exit.add_successor(header.id, EDGE_BACK)
        return exit_b

    # -- for -----------------------------------------------------------------

    def _for(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        if st.init:
            cur.add_event(st.init)

        header = self._new()
        cur.add_successor(header.id, EDGE_FALLTHROUGH)
        if st.cond:
            header.add_event("for-cond (" + st.cond + ")")

        body_entry = self._new()
        header.add_successor(body_entry.id, EDGE_TRUE)
        exit_b = self._new()
        header.add_successor(exit_b.id, EDGE_FALSE)

        latch = self._new()                  # runs the increment, then loops
        if st.inc:
            latch.add_event(st.inc)

        ctx.append(_Ctx(exit_b.id, latch.id))  # `continue` -> latch
        body_exit = self._seq(st.body, body_entry, ctx)
        ctx.pop()
        if body_exit is not None:
            body_exit.add_successor(latch.id, EDGE_FALLTHROUGH)
        latch.add_successor(header.id, EDGE_BACK)
        return exit_b

    # -- do-while ------------------------------------------------------------

    def _dowhile(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        body_entry = self._new()
        cur.add_successor(body_entry.id, EDGE_FALLTHROUGH)
        exit_b = self._new()
        cond_b = self._new()

        ctx.append(_Ctx(exit_b.id, cond_b.id))   # `continue` -> tail test
        body_exit = self._seq(st.body, body_entry, ctx)
        ctx.pop()
        if body_exit is not None:
            body_exit.add_successor(cond_b.id, EDGE_FALLTHROUGH)

        cond_b.add_event("while (" + st.cond + ")")
        cond_b.add_successor(body_entry.id, EDGE_BACK)   # true -> loop again
        cond_b.add_successor(exit_b.id, EDGE_FALSE)
        return exit_b

    # -- switch --------------------------------------------------------------

    def _switch(self, st, cur, ctx):
        if cur is None:
            cur = self._fresh()
        cur.add_event("switch (" + st.sel + ")")
        exit_b = self._new()

        # `break` -> switch exit; `continue` keeps the enclosing loop's target.
        ctx.append(_Ctx(exit_b.id, self._continue_target(ctx)))

        arms = self._group_switch(st.body)
        prev_exit = None
        has_default = False
        for labels, body in arms:
            arm_entry = self._new()
            for kind, val in labels:
                if kind == "default":
                    cur.add_successor(arm_entry.id, EDGE_DEFAULT)
                    has_default = True
                else:
                    cur.add_successor(arm_entry.id, edge_case(val))
            if prev_exit is not None:        # C fallthrough between arms
                prev_exit.add_successor(arm_entry.id, EDGE_FALLTHROUGH)
            prev_exit = self._seq(body, arm_entry, ctx)

        ctx.pop()
        if prev_exit is not None:
            prev_exit.add_successor(exit_b.id, EDGE_FALLTHROUGH)
        if not has_default:
            cur.add_successor(exit_b.id, EDGE_DEFAULT)
        return exit_b

    @staticmethod
    def _group_switch(body):
        """Group a flat switch body into (labels, stmts) arms. Consecutive
        case/default labels share one arm; a label appearing after statements
        starts a new arm."""
        arms = []
        cur_labels = []
        cur_body = []
        started = False
        for st in body:
            t = type(st)
            if t is CaseLabel or t is DefaultLabel:
                if cur_body:
                    arms.append((cur_labels, cur_body))
                    cur_labels = []
                    cur_body = []
                started = True
                if t is CaseLabel:
                    cur_labels.append(("case", st.value))
                else:
                    cur_labels.append(("default", None))
            else:
                cur_body.append(st)
        if started or cur_body:
            arms.append((cur_labels, cur_body))
        return arms


# ============================================================
# Public entry point
# ============================================================

def build_ida_cfg(pseudocode_text):
    """Build an `efv_model.CFG` (basic blocks + edges) from IDA Hex-Rays
    pseudocode text. STRUCTURE ONLY — block `ordered_events` hold raw
    pseudocode fragments for T8 to turn into events. Always returns a CFG with
    at least one (entry) block."""
    if not pseudocode_text:
        cfg = CFG(0)
        cfg.new_block(0)
        return cfg

    text = _preclean(pseudocode_text)
    brace = text.find("{")
    if brace < 0:
        cfg = CFG(0)
        cfg.new_block(0)
        return cfg

    parser = _Parser(text[brace + 1:])       # parse the function body
    stmts = parser.parse_statements()
    return _Builder().build(stmts)


# ============================================================
# CLI (optional): dump a CFG from a cache JSON or raw file
# ============================================================

def _main(argv):
    import json
    if not argv:
        print("usage: efv_ida_cfg.py <func_0xADDR.json | raw.txt>", file=sys.stderr)
        return 2
    path = argv[0]
    with open(path, "r", encoding="utf-8") as f:
        raw = f.read()
    try:
        data = json.loads(raw)
        text = data.get("decompiled") or data.get("code") or ""
    except json.JSONDecodeError:
        text = raw
    cfg = build_ida_cfg(text)
    print("CFG entry={} blocks={}".format(cfg.entry_id, len(cfg)))
    for b in cfg:
        print("  block {} : {} stmt(s) -> {}".format(
            b.id, len(b.ordered_events), b.successors))
    return 0


if __name__ == "__main__":
    sys.exit(_main(sys.argv[1:]))
