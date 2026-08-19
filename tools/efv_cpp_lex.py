#!/usr/bin/env python3
"""
efv_cpp_lex.py -- Tokenizer for the C++ function-body subset of the
execution-flow-cfg pipeline (Task T10).

This is a LEXER only. It turns C++ source text into a flat list of `Token`s.
It does NOT parse, does NOT build a CFG, and does NOT expand lambdas. The
statement parser / CFG builder (T12) and the "reject unverifiable constructs"
pass (T15) consume the token stream produced here.

------------------------------------------------------------------------------
WHY A HAND-WRITTEN LEXER (and not a regex line scanner)
------------------------------------------------------------------------------
The original `verify_execution_flow.py:clean_line()` stripped comments with
per-line regexes. That breaks on block comments spanning multiple lines and on
`//` / `/* */` sequences that live inside string or char literals. A real,
character-driven lexer handles strings, chars, and both comment styles
correctly and -- crucially -- preserves the char OFFSET of every token so T12
can map an event back to its exact source position.

------------------------------------------------------------------------------
TOKEN MODEL
------------------------------------------------------------------------------
`Token` is a namedtuple `(kind, value, pos)`:

    kind   one of the KIND_* constants below (a short upper-case string)
    value  the exact source text of the token (substring of the input)
    pos    0-based character offset of the token's first char in the input

Kinds:

    IDENT    identifier or keyword            e.g. Type, HasPower, if, return
    NUMBER   integer / float / hex literal    e.g. 0, 200, 0x44E7B0, 1.5f, 100u
    STRING   "..." string literal             escapes handled; unterminated safe
    CHAR     '...' character literal          escapes handled; unterminated safe
    OP       operator or punctuation          incl. multi-char: -> :: << >> == !=
                                              <= >= && || ++ -- += -= *= /= %=
                                              &= |= ^= .* ... <<= >>= ->* <=>
                                              and single-char ( ) { } [ ] ; , . etc.
    LAMBDA   a lambda *introducer* marker      value = the capture clause "[...]"
                                              (T15 rejects any function whose
                                              token stream contains a LAMBDA)
    UNKNOWN  any single char the lexer cannot  the lexer NEVER raises; it emits
             classify                          UNKNOWN and advances by one char.

Keywords are emitted as IDENT (distinguish them via the KEYWORDS set / token
value). Comments (`//`, `/* */`, and IDA `/*0xADDR*/` markers) are stripped and
produce no token.

------------------------------------------------------------------------------
LAMBDA HANDLING (recognise, do NOT expand)
------------------------------------------------------------------------------
Project C++ is MSVC-6.0-era and contains no lambdas; T15 must reject any that
slip in. This lexer emits a single LAMBDA marker token at a lambda introducer
and then lets the rest tokenize normally (it does not try to bracket the body).

A `[` is treated as a lambda introducer (not array subscript) when BOTH hold:
  1. the previous significant token is NOT a postfix primary
     (IDENT / NUMBER / STRING / CHAR / ')' / ']'); i.e. `arr[i]` is a subscript,
     `= [..](){}` / `f(v, [..](){})` is a lambda introducer; and
  2. the bracket `[...]` is balanced and the next significant char after the
     closing `]` is `(` or `{`  (i.e. the `](` / `]{` lambda shape).
Otherwise `[` is emitted as an ordinary OP.

------------------------------------------------------------------------------
ROBUSTNESS CONTRACT
------------------------------------------------------------------------------
* `tokenize()` never raises on any input string.
* C-style casts `(Type)expr` tokenize as `(` IDENT `)` -- the lexer assigns no
  meaning, it just emits the punctuation, so casts "don't break".
* Templates `<...>` tokenize as `<` ... `>` ; nested `>>` is one OP (the classic
  pre-C++11 shift/closing-angle reading, which matches MSVC-6.0 source where
  nested templates require `> >`). The lexer's job is only to not break.
"""

from collections import namedtuple


# ============================================================
# Token + kind constants
# ============================================================

Token = namedtuple("Token", ["kind", "value", "pos"])

KIND_IDENT = "IDENT"
KIND_NUMBER = "NUMBER"
KIND_STRING = "STRING"
KIND_CHAR = "CHAR"
KIND_OP = "OP"
KIND_LAMBDA = "LAMBDA"
KIND_UNKNOWN = "UNKNOWN"

# All kinds the lexer can emit (handy for consumers that validate).
KINDS = frozenset({
    KIND_IDENT, KIND_NUMBER, KIND_STRING, KIND_CHAR,
    KIND_OP, KIND_LAMBDA, KIND_UNKNOWN,
})

# Keywords are emitted as IDENT; T12 can branch on the value via this set.
KEYWORDS = frozenset({
    "if", "else", "for", "while", "do", "switch", "case", "default",
    "break", "continue", "return", "goto",
    "int", "char", "short", "long", "float", "double", "bool", "void",
    "unsigned", "signed", "const", "static", "extern", "register", "volatile",
    "struct", "class", "union", "enum", "typedef", "namespace", "using",
    "public", "private", "protected", "virtual", "inline", "friend",
    "new", "delete", "this", "true", "false", "nullptr", "NULL",
    "sizeof", "operator", "template", "typename", "auto", "mutable",
    "static_cast", "reinterpret_cast", "const_cast", "dynamic_cast",
})


# ============================================================
# Character classes (ASCII; deterministic, no Unicode surprises)
# ============================================================

_ID_START = frozenset("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_")
_ID_CONT = _ID_START | frozenset("0123456789")
_DIGITS = frozenset("0123456789")
_HEX = frozenset("0123456789abcdefABCDEF")
_NUM_SUFFIX = frozenset("fFuUlL")
_WS = frozenset(" \t\r\n\f\v")


# ============================================================
# Operator tables (matched longest-first)
# ============================================================

_OPS3 = frozenset({"<<=", ">>=", "->*", "...", "<=>"})

_OPS2 = frozenset({
    "->", "::", "<<", ">>", "==", "!=", "<=", ">=", "&&", "||",
    "++", "--", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=",
    ".*", "##",
})

_OPS1 = frozenset("+-*/%=<>&|^~!?:.,;()[]{}#")

# Tokens after which a '[' is a postfix array subscript, not a lambda.
_POSTFIX_OP_VALUES = frozenset({")", "]"})


# ============================================================
# Sub-lexers (each returns (Token, next_index))
# ============================================================

def _lex_string(text, i, n):
    """Lex a "..." string starting at text[i] == '"'. Handles escapes; an
    unterminated string is consumed up to EOL/EOF without raising."""
    start = i
    i += 1  # consume opening quote
    while i < n:
        c = text[i]
        if c == "\\":
            i += 2  # skip the escaped char (slicing clamps if it runs past n)
            continue
        if c == '"':
            i += 1
            break
        if c == "\n":
            break  # unterminated -> stop at line end, stay safe
        i += 1
    return Token(KIND_STRING, text[start:i], start), i


def _lex_char(text, i, n):
    """Lex a '...' char literal starting at text[i] == "'". Same escape rules
    as strings; unterminated is consumed up to EOL/EOF without raising."""
    start = i
    i += 1  # consume opening quote
    while i < n:
        c = text[i]
        if c == "\\":
            i += 2
            continue
        if c == "'":
            i += 1
            break
        if c == "\n":
            break
        i += 1
    return Token(KIND_CHAR, text[start:i], start), i


def _lex_number(text, i, n):
    """Lex a numeric literal starting at a digit: hex (0x...), decimal, float
    (with '.' and e/E exponent), plus f/F/u/U/l/L suffixes."""
    start = i
    if text[i] == "0" and i + 1 < n and text[i + 1] in "xX":
        i += 2
        while i < n and text[i] in _HEX:
            i += 1
    else:
        while i < n and text[i] in _DIGITS:
            i += 1
        if i < n and text[i] == ".":
            i += 1
            while i < n and text[i] in _DIGITS:
                i += 1
        if i < n and text[i] in "eE":
            j = i + 1
            if j < n and text[j] in "+-":
                j += 1
            if j < n and text[j] in _DIGITS:
                i = j
                while i < n and text[i] in _DIGITS:
                    i += 1
            # else: a lone 'e' is not an exponent -> leave it (becomes an IDENT)
    while i < n and text[i] in _NUM_SUFFIX:
        i += 1
    return Token(KIND_NUMBER, text[start:i], start), i


def _match_operator(text, i, n):
    """Return (op_text, next_index) for the longest operator at text[i], or
    (None, i) if no operator/punctuation matches."""
    if i + 3 <= n and text[i:i + 3] in _OPS3:
        return text[i:i + 3], i + 3
    if i + 2 <= n and text[i:i + 2] in _OPS2:
        return text[i:i + 2], i + 2
    if text[i] in _OPS1:
        return text[i], i + 1
    return None, i


def _try_lambda(text, i, n, tokens):
    """If text[i] == '[' begins a lambda introducer, return (LAMBDA token,
    next_index_after_']'). Otherwise return (None, i) so the caller emits '['
    as an ordinary OP.

    Lambda iff (a) previous significant token is not a postfix primary, and
    (b) the balanced '[...]' is followed (ignoring whitespace) by '(' or '{'.
    """
    # (a) reject array-subscript context: x[i], f()[i], a[b][c], "s"[i], 'c'[i]
    if tokens:
        p = tokens[-1]
        if p.kind in (KIND_IDENT, KIND_NUMBER, KIND_STRING, KIND_CHAR):
            return None, i
        if p.kind == KIND_OP and p.value in _POSTFIX_OP_VALUES:
            return None, i

    # (b) scan to the matching ']' (track nesting; skip embedded string/char)
    depth = 0
    j = i
    matched = False
    while j < n:
        c = text[j]
        if c == "[":
            depth += 1
        elif c == "]":
            depth -= 1
            if depth == 0:
                j += 1  # advance past the closing ']'
                matched = True
                break
        elif c == '"':
            _, j = _lex_string(text, j, n)
            continue
        elif c == "'":
            _, j = _lex_char(text, j, n)
            continue
        j += 1
    if not matched:
        return None, i  # no balanced ']' -> not a lambda

    # skip whitespace after ']'
    k = j
    while k < n and text[k] in _WS:
        k += 1
    if k < n and text[k] in "({":
        return Token(KIND_LAMBDA, text[i:j], i), j
    return None, i


# ============================================================
# Public entry point
# ============================================================

def tokenize(cpp_text):
    """Tokenize a C++ function-body subset string into a list[Token].

    Strips `//` line comments, `/* */` block comments (incl. IDA
    `/*0xADDR*/` markers) and whitespace. Recognises identifiers/keywords,
    numeric / string / char literals, single- and multi-char operators, and
    a lambda introducer (emitted as a single LAMBDA marker, NOT expanded).
    Any unclassifiable character is emitted as an UNKNOWN token; this function
    never raises.
    """
    if cpp_text is None:
        return []
    text = cpp_text
    tokens = []
    i = 0
    n = len(text)

    while i < n:
        c = text[i]

        # -- whitespace ------------------------------------------------------
        if c in _WS:
            i += 1
            continue

        # -- comments (// line, /* block, /*0xADDR*/ marker) -----------------
        if c == "/" and i + 1 < n:
            nxt = text[i + 1]
            if nxt == "/":
                j = text.find("\n", i + 2)
                i = n if j < 0 else j + 1
                continue
            if nxt == "*":
                j = text.find("*/", i + 2)
                i = n if j < 0 else j + 2  # unterminated block -> eat to EOF
                continue

        # -- string / char literals -----------------------------------------
        if c == '"':
            tok, i = _lex_string(text, i, n)
            tokens.append(tok)
            continue
        if c == "'":
            tok, i = _lex_char(text, i, n)
            tokens.append(tok)
            continue

        # -- numbers (must start with a digit) -------------------------------
        if c in _DIGITS:
            tok, i = _lex_number(text, i, n)
            tokens.append(tok)
            continue

        # -- identifiers / keywords ------------------------------------------
        if c in _ID_START:
            j = i + 1
            while j < n and text[j] in _ID_CONT:
                j += 1
            tokens.append(Token(KIND_IDENT, text[i:j], i))
            i = j
            continue

        # -- lambda introducer '[' (else falls through to OP) ----------------
        if c == "[":
            lam, nj = _try_lambda(text, i, n, tokens)
            if lam is not None:
                tokens.append(lam)
                i = nj
                continue
            # not a lambda: emit '[' as an ordinary OP below

        # -- operators / punctuation -----------------------------------------
        op, nj = _match_operator(text, i, n)
        if op is not None:
            tokens.append(Token(KIND_OP, op, i))
            i = nj
            continue

        # -- unknown: never crash, emit one UNKNOWN char and advance ---------
        tokens.append(Token(KIND_UNKNOWN, c, i))
        i += 1

    return tokens


# ============================================================
# Self-test / evidence generator
# ============================================================

def _selftest():
    import sys

    out = []

    def line(s=""):
        out.append(s)

    # ---- T1: GetPowerOutput (target C++ style) -------------------------
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
    toks = tokenize(get_power_output)
    line("=" * 70)
    line("T1: GetPowerOutput body -> tokens")
    line("=" * 70)
    for t in toks:
        line("  {:>4}  {:<8} {!r}".format(t.pos, t.kind, t.value))

    vals = [t.value for t in toks]
    kinds_by_val = {}
    for t in toks:
        kinds_by_val.setdefault(t.value, t.kind)

    checks = []

    def check(name, cond):
        checks.append((name, bool(cond)))

    # 'Type' tokenized as an IDENT (bare member name, not split)
    check("'Type' is IDENT", any(t.kind == KIND_IDENT and t.value == "Type" for t in toks))
    # '::' is ONE OP token
    check("'::' is one OP", any(t.kind == KIND_OP and t.value == "::" for t in toks))
    # '->' is ONE OP token (not '-' '>')
    check("'->' is one OP", any(t.kind == KIND_OP and t.value == "->" for t in toks))
    check("no stray '-' '>' from '->'", "->" in vals and not (
        # there must be no place where '-' immediately precedes '>' as 2 OPs
        any(toks[k].value == "-" and k + 1 < len(toks) and toks[k + 1].value == ">"
            for k in range(len(toks)))))
    # '||' is ONE OP token (not '|' '|')
    check("'||' is one OP", any(t.kind == KIND_OP and t.value == "||" for t in toks))
    # '+=' is ONE OP token
    check("'+=' is one OP", any(t.kind == KIND_OP and t.value == "+=" for t in toks))
    # C-style cast (int) -> '(' IDENT 'int' ')'
    cast_ok = False
    for k in range(len(toks) - 2):
        if (toks[k].value == "(" and toks[k + 1].kind == KIND_IDENT
                and toks[k + 1].value == "int" and toks[k + 2].value == ")"):
            cast_ok = True
            break
    check("C-style cast '(int)' -> ( IDENT )", cast_ok)
    # numbers
    check("'0' is NUMBER", any(t.kind == KIND_NUMBER and t.value == "0" for t in toks))
    check("'200' is NUMBER", any(t.kind == KIND_NUMBER and t.value == "200" for t in toks))
    # IDA /*0xADDR*/ marker + // comment fully stripped
    check("no comment text leaked (no '0x44E7B0' token)",
          all(t.value != "0x44E7B0" for t in toks))
    check("no '//' comment text leaked (no 'base' IDENT)",
          all(t.value != "base" for t in toks))
    # NO illegal UNKNOWN tokens for clean target code
    unknowns = [t for t in toks if t.kind == KIND_UNKNOWN]
    check("no UNKNOWN tokens in clean code", not unknowns)
    # pos preserved & monotonic
    check("positions strictly increasing",
          all(toks[k].pos < toks[k + 1].pos for k in range(len(toks) - 1)))
    # pos maps back to source
    check("pos maps back to source text",
          all(get_power_output[t.pos:t.pos + len(t.value)] == t.value
              for t in toks if t.kind != KIND_LAMBDA))

    # ---- T2: template type does not break -----------------------------
    tmpl = "DynamicVectorClass<InfantryClass*> vec;\n"
    ttoks = tokenize(tmpl)
    line("")
    line("=" * 70)
    line("T2: template type -> tokens (must not break)")
    line("=" * 70)
    for t in ttoks:
        line("  {:>4}  {:<8} {!r}".format(t.pos, t.kind, t.value))
    check("template: '<' is OP", any(t.value == "<" and t.kind == KIND_OP for t in ttoks))
    check("template: '>' is OP", any(t.value == ">" and t.kind == KIND_OP for t in ttoks))
    check("template: no UNKNOWN", all(t.kind != KIND_UNKNOWN for t in ttoks))

    # ---- T3: lambda snippet -> LAMBDA marker, no crash ----------------
    lam_src = (
        "auto cmp = [](InfantryClass* a, InfantryClass* b)\n"
        "{ return a->Health > b->Health; };\n"
    )
    ltoks = tokenize(lam_src)
    line("")
    line("=" * 70)
    line("T3: lambda snippet -> tokens (LAMBDA marker, no crash)")
    line("=" * 70)
    for t in ltoks:
        line("  {:>4}  {:<8} {!r}".format(t.pos, t.kind, t.value))
    lam_toks = [t for t in ltoks if t.kind == KIND_LAMBDA]
    check("lambda: exactly one LAMBDA marker", len(lam_toks) == 1)
    check("lambda: marker value is the capture clause '[]'",
          lam_toks and lam_toks[0].value == "[]")
    check("lambda: no crash, body still tokenized ('return' present)",
          any(t.value == "return" for t in ltoks))

    # ---- T4: array subscript is NOT a lambda --------------------------
    sub_src = "x = arr[i] + buf[j][k];\n"
    stoks = tokenize(sub_src)
    check("subscript: arr[i] is NOT a LAMBDA",
          all(t.kind != KIND_LAMBDA for t in stoks))
    check("subscript: '[' present as OP",
          any(t.kind == KIND_OP and t.value == "[" for t in stoks))

    # ---- T5: never crashes on garbage ---------------------------------
    garbage = "@`$ \x01 \"unterminated  /* unterminated comment  'x"
    try:
        gtoks = tokenize(garbage)
        crashed = False
    except Exception as exc:  # pragma: no cover - must never happen
        gtoks = []
        crashed = True
        line("CRASH on garbage: {!r}".format(exc))
    check("garbage: tokenize() did not raise", not crashed)
    check("garbage: produced UNKNOWN tokens",
          any(t.kind == KIND_UNKNOWN for t in gtoks))

    # ---- summary ------------------------------------------------------
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
    import sys
    sys.exit(_selftest())
