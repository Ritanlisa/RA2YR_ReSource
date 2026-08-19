#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
efv_cpp_reject.py -- "reject unverifiable C++ construct" gate for the
execution-flow-cfg pipeline (Task T15).

------------------------------------------------------------------------------
WHAT THIS IS / WHERE IT SITS
------------------------------------------------------------------------------
The execution-flow verifier is a *two-state* PASS/FAIL machine (decisions.md
DEC-2). It maps a faithful C++ re-implementation to an OFFSET-based event model
(CALL/READ/WRITE/RET at byte offsets) extracted from the original binary, and
checks the two CFGs match.

A few C++ constructs CANNOT be expressed in that offset-based event model
because they change the symbol table / introduce control flow or code that has
no this-relative-offset event representation. The crucial property of the ones
we reject here is that they are **AVOIDABLE on the C++ side**: the exact same
logic can always be written without them. So instead of silently mis-verifying
them, this gate FAILs early with a *specific, actionable* "rewrite without X"
hint.

Per DEC-2 this is the ONE FAIL case allowed to carry a specific reason; every
other failure stays a generic FAIL.

T19 (CLI integration) runs `check_rejectable()` on the candidate C++ BEFORE any
CFG matching: a non-None result short-circuits to FAIL with the hint.

------------------------------------------------------------------------------
WHAT WE REJECT (and ONLY these) -- all AVOIDABLE C++-side constructs
------------------------------------------------------------------------------
  * lambda      -- an anonymous closure introduces its own symbol/scope/function
                   that the offset-based event model cannot resolve.
                   Rewrite: named helper function, or inline the body.
  * goto        -- arbitrary jumps do not correspond to an offset event sequence
                   (decisions.md: "lambda/goto -> FAIL with rewrite hint").
                   Rewrite: loops / conditionals / early returns.
  * inline asm  -- raw machine code (`__asm` / `_asm`, MSVC-6.0 spellings) has no
                   C++-level offset events at all.
                   Rewrite: equivalent C++ expressions / function calls.

------------------------------------------------------------------------------
WHAT WE DELIBERATELY DO **NOT** REJECT (handled elsewhere; NOT C++-avoidable)
------------------------------------------------------------------------------
  * jump tables / switch  -- an UNAVOIDABLE shape of the original binary; the IDA
                             side decomposes it into blocks (Task T9). A faithful
                             C++ `switch` is fine and must verify, not be rejected.
  * inlined original code -- the binary may inline a callee; that is an IDA-side
                             concern (Task T22), not a C++-side avoidable construct.
These are properties of the *original binary*, not avoidable choices in the C++
re-write, so rejecting them would be wrong (you cannot "rewrite away" the binary).

------------------------------------------------------------------------------
HOW DETECTION WORKS -- consumes T10's token stream contract
------------------------------------------------------------------------------
We do NOT re-parse C++. We rely on `efv_cpp_lex.tokenize()` (Task T10), whose
documented contract is:

  * a lambda introducer is emitted as exactly one `KIND_LAMBDA` marker token
    (`value` = the capture clause, e.g. "[]"); `arr[i]` subscripts are NOT
    lambdas (they stay `KIND_OP` "[").  -> we reject any `KIND_LAMBDA` token.
  * keywords are emitted as `KIND_IDENT` (distinguish by `.value`); `goto` is in
    the lexer's KEYWORDS set, so it arrives as `IDENT "goto"`.
  * `__asm` / `_asm` begin with `_`, an identifier-start char, so they arrive as
    `IDENT "__asm"` / `IDENT "_asm"`.
  * comments and string/char literals are already stripped/classified, so a
    "goto"/"__asm" living inside a comment or a string can never false-trigger
    (it is never an IDENT).

`check_rejectable()` accepts either the raw C++ text (it will tokenize) OR an
already-tokenized `list[Token]` (it will not re-tokenize), and returns the FIRST
rejectable construct in source order (lowest `.pos`) -- so the hint points at the
earliest offender -- or `None` when nothing is rejectable (this gate passes).
"""

import os
import sys

# --- robust sibling import of the T10 lexer ---------------------------------
# Works both run-as-script (tools/ is sys.path[0]) and imported from elsewhere.
try:
    from efv_cpp_lex import tokenize, KIND_LAMBDA, KIND_IDENT
except ImportError:  # pragma: no cover - import-path fallback
    sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
    from efv_cpp_lex import tokenize, KIND_LAMBDA, KIND_IDENT


# ============================================================
# Reject reason
# ============================================================

class RejectReason(object):
    """A single avoidable-construct rejection.

    Attributes:
        construct  stable ASCII key of the construct ("lambda" / "goto" /
                   "inline asm") -- handy for tests / programmatic branching.
        pos        0-based char offset in the C++ source where it was found
                   (the offending token's `.pos`; -1 if unknown).
        value      the offending token's source text (e.g. "[]", "goto", "__asm").
        message    English, ACTIONABLE "rewrite without X" hint.

    Truthy by default (it is a non-None object), so callers may write either
    `if check_rejectable(x) is not None:` or `if check_rejectable(x):`.
    `str(reason)` yields the message.
    """

    __slots__ = ("construct", "pos", "value", "message")

    def __init__(self, construct, pos, value, message):
        self.construct = construct
        self.pos = pos
        self.value = value
        self.message = message

    def __str__(self):
        return self.message

    def __repr__(self):
        return "RejectReason(construct={!r}, pos={!r}, value={!r})".format(
            self.construct, self.pos, self.value)


# ============================================================
# Construct descriptors (label + actionable rewrite hint, English)
# ============================================================
#
# Each descriptor: (construct_key, label, hint)

_DESC_LAMBDA = (
    "lambda", "lambda",
    "use a named helper function, or inline its logic",
)

_DESC_GOTO = (
    "goto", "goto",
    "restructure the control flow with loops / conditionals / early returns",
)

_DESC_ASM = (
    "inline asm", "inline asm (__asm)",
    "replace the __asm block with equivalent C++ expressions or function calls",
)

# MSVC-6.0 inline-assembly keywords. Plain `asm` is NOT an MSVC spelling and is a
# reserved word elsewhere, so we keep the set tight to avoid false positives.
_INLINE_ASM_KEYWORDS = frozenset({"__asm", "_asm"})


def _make_reason(desc, pos, value):
    """Build a RejectReason from a construct descriptor.

    The message uses the canonical phrasing and appends the
    construct-specific actionable rewrite hint.
    """
    construct_key, label, hint = desc
    message = (
        "Verifier cannot verify construct '{label}' (the same logic can be "
        "written without it); please rewrite: {hint}."
    ).format(label=label, hint=hint)
    return RejectReason(construct_key, pos, value, message)


# ============================================================
# Public entry point
# ============================================================

def check_rejectable(cpp_text_or_tokens):
    """Return a RejectReason if the input uses an AVOIDABLE C++ construct the
    offset-based event model cannot verify (lambda / goto / inline asm), else None.

    `cpp_text_or_tokens` may be:
        * a `str`  -- the C++ source; it is tokenized via T10's `tokenize()`.
        * a `list`/iterable of `efv_cpp_lex.Token` -- used as-is (NOT re-tokenized).
        * `None`   -- treated as nothing to check -> None.

    Detection is purely token-driven (T10 contract): a `KIND_LAMBDA` marker, an
    `IDENT "goto"`, or an `IDENT` whose value is an MSVC inline-asm keyword.
    Returns the FIRST offender in source order (lowest `.pos`). Never raises on
    well-formed input -- a `str` goes through `tokenize()` which itself never
    raises.
    """
    if cpp_text_or_tokens is None:
        return None

    if isinstance(cpp_text_or_tokens, str):
        tokens = tokenize(cpp_text_or_tokens)
    else:
        tokens = list(cpp_text_or_tokens)

    for tok in tokens:
        kind = tok.kind
        # lambda -> single LAMBDA marker emitted by the lexer
        if kind == KIND_LAMBDA:
            return _make_reason(_DESC_LAMBDA, tok.pos, tok.value)
        # goto / inline-asm -> keywords arrive as IDENT (distinguish by value)
        if kind == KIND_IDENT:
            value = tok.value
            if value == "goto":
                return _make_reason(_DESC_GOTO, tok.pos, tok.value)
            if value in _INLINE_ASM_KEYWORDS:
                return _make_reason(_DESC_ASM, tok.pos, tok.value)

    return None


# ============================================================
# Self-test / evidence generator
# ============================================================

def _selftest():
    out = []

    def line(s=""):
        out.append(s)

    checks = []

    def check(name, cond):
        checks.append((name, bool(cond)))

    # ---- sample bodies -------------------------------------------------
    lambda_body = (
        "void Sort(DynamicVectorClass<InfantryClass*>& vec)\n"
        "{\n"
        "    auto cmp = [](InfantryClass* a, InfantryClass* b)\n"
        "    { return a->Health > b->Health; };\n"
        "    vec.Sort(cmp);\n"
        "}\n"
    )
    goto_body = (
        "int Find(int n)\n"
        "{\n"
        "    int i = 0;\n"
        "retry:\n"
        "    if (i < n) { ++i; goto retry; }\n"
        "    return i;\n"
        "}\n"
    )
    asm_body = (
        "int FastAdd(int a, int b)\n"
        "{\n"
        "    int r;\n"
        "    __asm { mov eax, a; add eax, b; mov r, eax }\n"
        "    return r;\n"
        "}\n"
    )
    asm_underscore_body = (
        "void Halt()\n"
        "{\n"
        "    _asm hlt\n"
        "}\n"
    )
    # The clean target body from T10's self-test: NO lambda / goto / __asm.
    get_power_output = (
        "int BuildingClass::GetPowerOutput()\n"
        "{\n"
        "    if (!Type || !HasPower) return 0;          /*0x44E7B0*/\n"
        "    int power = Type->PowerOutput; // base value\n"
        "    if (IsOverpowered) power += 200;\n"
        "    if (HasExtraPowerBonus) power += 100;\n"
        "    if (health < (int)(Type->Strength))\n"
        "        power = (power * health) / (int)(Type->Strength);\n"
        "    return power;\n"
        "}\n"
    )
    # array subscript must NOT be mistaken for a lambda (T10 contract).
    subscript_body = "x = arr[i] + buf[j][k];\n"
    # a clean switch / jump-table must NOT be rejected here (IDA-side, T9).
    switch_body = (
        "int IsTechno(int what)\n"
        "{\n"
        "    switch (what) {\n"
        "        case 1: case 2: case 6: case 15: return what;\n"
        "        default: return 0;\n"
        "    }\n"
        "}\n"
    )

    # ---- T15.1 lambda -> reject + hint ---------------------------------
    r_lambda = check_rejectable(lambda_body)
    line("=" * 72)
    line("T15.1  lambda body -> EXPECT reject + rewrite hint")
    line("=" * 72)
    line("  result    : {!r}".format(r_lambda))
    line("  message   : {}".format(r_lambda.message if r_lambda else "<None>"))
    check("lambda: rejected (not None)", r_lambda is not None)
    check("lambda: construct == 'lambda'", r_lambda and r_lambda.construct == "lambda")
    check("lambda: pos points into source", r_lambda and r_lambda.pos >= 0
          and lambda_body[r_lambda.pos] == "[")
    check("lambda: message has rewrite hint 'please rewrite'",
          r_lambda and "please rewrite" in r_lambda.message)
    check("lambda: message names the construct 'lambda'",
          r_lambda and "lambda" in r_lambda.message)

    # ---- T15.2 goto -> reject + hint -----------------------------------
    r_goto = check_rejectable(goto_body)
    line("")
    line("=" * 72)
    line("T15.2  goto body -> EXPECT reject + rewrite hint")
    line("=" * 72)
    line("  result    : {!r}".format(r_goto))
    line("  message   : {}".format(r_goto.message if r_goto else "<None>"))
    check("goto: rejected (not None)", r_goto is not None)
    check("goto: construct == 'goto'", r_goto and r_goto.construct == "goto")
    check("goto: value == 'goto'", r_goto and r_goto.value == "goto")
    check("goto: pos maps back to 'goto' in source",
          r_goto and goto_body[r_goto.pos:r_goto.pos + 4] == "goto")
    check("goto: message has rewrite hint 'please rewrite'",
          r_goto and "please rewrite" in r_goto.message)

    # ---- T15.3 inline asm (__asm) -> reject + hint ---------------------
    r_asm = check_rejectable(asm_body)
    line("")
    line("=" * 72)
    line("T15.3  inline asm (__asm) body -> EXPECT reject + rewrite hint")
    line("=" * 72)
    line("  result    : {!r}".format(r_asm))
    line("  message   : {}".format(r_asm.message if r_asm else "<None>"))
    check("asm: rejected (not None)", r_asm is not None)
    check("asm: construct == 'inline asm'", r_asm and r_asm.construct == "inline asm")
    check("asm: value == '__asm'", r_asm and r_asm.value == "__asm")
    check("asm: message has rewrite hint 'please rewrite'",
          r_asm and "please rewrite" in r_asm.message)

    # ---- T15.4 inline asm (_asm spelling) -> reject --------------------
    r_asm2 = check_rejectable(asm_underscore_body)
    check("asm: '_asm' spelling also rejected",
          r_asm2 is not None and r_asm2.construct == "inline asm")

    # ---- T15.5 GetPowerOutput (clean) -> NO reject ---------------------
    r_clean = check_rejectable(get_power_output)
    line("")
    line("=" * 72)
    line("T15.5  GetPowerOutput body -> EXPECT no reject (None)")
    line("=" * 72)
    line("  result    : {!r}".format(r_clean))
    check("clean: NOT rejected (None)", r_clean is None)

    # ---- T15.6 array subscript is NOT a lambda -> NO reject ------------
    r_sub = check_rejectable(subscript_body)
    check("subscript arr[i]: NOT rejected (None)", r_sub is None)

    # ---- T15.7 clean switch / jump-table -> NO reject (IDA-side, T9) ---
    r_switch = check_rejectable(switch_body)
    check("switch/jump-table: NOT rejected (None)", r_switch is None)

    # ---- T15.8 input flexibility: pre-tokenized list ------------------
    pre_tokens = tokenize(lambda_body)
    r_pretok = check_rejectable(pre_tokens)
    check("pre-tokenized list: same lambda reject",
          r_pretok is not None and r_pretok.construct == "lambda")
    check("pre-tokenized list: same pos as text path",
          r_pretok is not None and r_lambda is not None
          and r_pretok.pos == r_lambda.pos)

    # ---- T15.9 robustness: None / empty / garbage never raise ---------
    crashed = False
    try:
        check("None input -> None", check_rejectable(None) is None)
        check("empty string -> None", check_rejectable("") is None)
        check("garbage -> None (no avoidable construct, no raise)",
              check_rejectable("@`$ \x01 \"unterminated /* x 'y") is None)
    except Exception as exc:  # pragma: no cover - must never happen
        crashed = True
        line("CRASH on robustness inputs: {!r}".format(exc))
    check("robustness: no raise on None/empty/garbage", not crashed)

    # ---- T15.10 first-offender ordering (goto before a later lambda) --
    mixed = "void f(){ goto end; auto g=[](){return 1;}; end: return; }\n"
    r_mixed = check_rejectable(mixed)
    check("mixed goto+lambda: reports FIRST (goto, lowest pos)",
          r_mixed is not None and r_mixed.construct == "goto")

    # ---- summary -------------------------------------------------------
    line("")
    line("=" * 72)
    line("CHECKS")
    line("=" * 72)
    all_pass = True
    for name, ok in checks:
        line("  [{}] {}".format("PASS" if ok else "FAIL", name))
        all_pass = all_pass and ok
    line("")
    line("RESULT: {} ({} checks)".format(
        "ALL PASS" if all_pass else "FAILURE", len(checks)))

    report = "\n".join(out)
    print(report)

    # ---- write evidence (path relative to repo root, CWD-independent) --
    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    ev_dir = os.path.join(repo_root, ".omo", "evidence")
    try:
        os.makedirs(ev_dir, exist_ok=True)
        ev_path = os.path.join(ev_dir, "task-15-reject.txt")
        with open(ev_path, "w", encoding="utf-8") as fh:
            fh.write(report)
            fh.write("\n")
    except OSError as exc:  # pragma: no cover - evidence write is best-effort
        print("WARN: could not write evidence: {!r}".format(exc))

    return 0 if all_pass else 1


if __name__ == "__main__":
    sys.exit(_selftest())
