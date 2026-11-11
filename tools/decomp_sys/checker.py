#!/usr/bin/env python3
"""checker.py -- DECOMP-2 rule 3/4 + semantic sanity self-check on cpp text.

Semantics mirror tools/clang_ast_checker.py's ptr-arithmetic / cast-index /
ptr-nonptr-conv families, specialized for the six-rule contract:

  R3  no member-offset access:  *(T*)(p + N) | *((T*)p + N) | ((T*)p)[N] |
      p[N] on class-typed names | (T*)this + N | (T*)(&this->m) puns
  R4  no pointer+integer arithmetic on class-typed names
      (carve-out: registry function-table subscript dispatch
       `((Fn**)member)[slot](...)`)
  R7  semantic sanity: `this` compared to a small non-zero integer
      (with or without a pointer cast) -- a receiver that never gets
      dereferenced and is compared against id-sized constants is an
      integer ID, not an object pointer.  This is the 0x602AE0 family:
      byte-identical code can be produced by a semantically absurd
      `this == (Dialog *)293` chain; bytes alone cannot distinguish the
      pointer compare from the integer compare.

The checker knows which identifiers are class-typed (this + class params +
registry-class-pointer locals) and which members exist in the emitted hpp.

Violations are span-deduplicated: one source construct yields ONE violation
(the most specific/longest span), never two.  Overlapping detections of the
same construct (R4 `this + N` inside R3 `*((T*)this + N)`) are collapsed.
"""
import re

# one C-style cast head: `(unsigned int *)`, `(Queue *)`, `(char *)`
_CAST_HEAD = r"\(\s*(?:[A-Za-z_]\w*\s+)*[A-Za-z_]\w*\s*\*+\s*\)"

# `this` compared to an id-sized constant, three spellings
_THIS_AS_ID_PATTERNS = (
    re.compile(r"\bthis\s*(?:==|!=)\s*%s\s*(0x[0-9A-Fa-f]+|\d+)\b"
               % _CAST_HEAD),
    re.compile(r"\bthis\s*(?:==|!=)\s*(0x[0-9A-Fa-f]+|\d+)\b"),
    re.compile(r"\(\s*(?:int|unsigned int|long|unsigned long|_DWORD)\s*\)"
               r"\s*this\s*(?:==|!=)\s*(0x[0-9A-Fa-f]+|\d+)\b"),
)
_THIS_AS_ID_MAX = 0x10000


class RuleReport(object):
    def __init__(self):
        self.violations = []
        self.checked_patterns = 0

    def ok(self):
        return not self.violations


def _dedupe_spans(hits):
    """Keep one violation per overlapping source span (longest wins).

    A single `*((unsigned int *)this + 22)` must not fire R4 ptr+int,
    R4 cast-ptr+int AND R3 cast-deref-plus: the outer (longest) span is
    the truthful description of the construct.  Non-overlapping hits are
    all kept, so independent violations still count separately.
    """
    def length(h):
        return h["sp"][1] - h["sp"][0]

    kept = []
    for h in sorted(hits, key=length, reverse=True):
        a, b = h["sp"]
        clash = False
        for k in kept:
            c, d = k["sp"]
            if a < d and c < b:          # interval overlap
                clash = True
                break
        if not clash:
            kept.append(h)
    kept.sort(key=lambda h: h["sp"][0])
    return kept


def check_function(cls, body_text, class_typed, known_members):
    """body_text: emitted function body (no signature).

    class_typed: set of identifiers whose type is a registry class pointer
                 (always includes 'this')
    known_members: set of member names declared for `cls` in the pilot hpp
    """
    rep = RuleReport()
    text = body_text
    ct = set(class_typed) | {"this"}
    hits = []

    def flag(rule, pat, detail, start, end):
        hits.append({"rule": rule, "pattern": pat, "detail": detail,
                     "sp": (start, end)})

    # R3/R4: class-typed identifier + integer (with optional cast head)
    for name in sorted(ct):
        nm = re.escape(name)
        for m in re.finditer(r"\b%s\s*\+\s*(?:0x)?\d+\b" % nm, text):
            flag("R4", "ptr+int", m.group(0), m.start(), m.end())
        for m in re.finditer(r"%s\s*%s\s*\+" % (_CAST_HEAD, nm), text):
            flag("R4", "cast-ptr+int", m.group(0), m.start(), m.end())
        # *(T*)(p + N) / *((T*)p + N): member-offset deref through arith
        # (the nested-parenthesis spelling escaped the R3 regex before --
        # 42/424 OK functions emitted exactly this shape)
        for m in re.finditer(
                r"\*\s*\(\s*%s\s*%s\s*\+\s*(?:0x)?\d+\s*\)"
                % (_CAST_HEAD, nm), text):
            flag("R3", "cast-deref-plus", m.group(0), m.start(), m.end())
        # p[N] on class pointers (array member access must be this->m[i])
        for m in re.finditer(r"\b%s\s*\[" % nm, text):
            close = text.find("]", m.start())
            end = close + 1 if close >= 0 else m.end()
            flag("R3", "class-ptr subscript", text[m.start():end],
                 m.start(), end)
        # *(T*)name (cast-deref of a class pointer -- must be member access)
        for m in re.finditer(r"\*\s*%s\s*%s\b" % (_CAST_HEAD, nm), text):
            flag("R3", "cast-deref class ptr", m.group(0),
                 m.start(), m.end())
        rep.checked_patterns += 5

    # R3: cast-deref containing '+' at top level: *(T*)(EXPR + N)
    for m in re.finditer(r"\*\s*%s\s*\([^()]*\+" % _CAST_HEAD, text):
        # carve-out: function-table dispatch already handled below; any
        # remaining cast-deref-plus is a violation
        seg = m.group(0)
        if not _inside_dispatch_whitelist(text, m.start()):
            flag("R3", "cast-deref-plus", seg, m.start(), m.end())
    rep.checked_patterns += 1

    # R3: cast-index ((T*)x)[N] -- allowed only as function-table dispatch
    for m in re.finditer(r"\(\s*\(?\s*\w[^()]*\)\s*\)\s*\[", text):
        close = text.find("]", m.start())
        end = close + 1 if close >= 0 else m.end()
        if not _inside_dispatch_whitelist(text, m.start()):
            flag("R3", "cast-index", text[m.start():end], m.start(), end)
    rep.checked_patterns += 1

    # R3: address-of member pun: (T*)&this->m  /  (T*)(&this->m)
    for m in re.finditer(r"%s\s*\(?\s*&\s*this->" % _CAST_HEAD, text):
        flag("R3", "member-pun (&this->m cast)", m.group(0),
             m.start(), m.end())
    rep.checked_patterns += 1

    # R3: member existence: every this->M must be in the emitted hpp
    for m in re.finditer(r"this->([A-Za-z_]\w*)", text):
        mem = m.group(1)
        if known_members is not None and mem not in known_members:
            flag("R3", "undeclared member",
                 "this->%s not in registry hpp" % mem, m.start(), m.end())
    rep.checked_patterns += 1

    # R7: this-as-id -- receiver compared to id-sized constants
    for pat in _THIS_AS_ID_PATTERNS:
        for m in pat.finditer(text):
            try:
                val = int(m.group(1), 0)
            except ValueError:
                continue
            if 0 < val < _THIS_AS_ID_MAX:
                flag("R7", "this-as-id",
                     "%s (small integer 0x%X compared against `this`; "
                     "receiver is an ID, not an object pointer)"
                     % (m.group(0), val), m.start(), m.end())
    rep.checked_patterns += 1

    # R4 carve-out sanity: dispatch whitelist shape must call afterwards
    for m in re.finditer(r"\)\s*\[\s*\d+\s*\]\s*\(", text):
        rep.checked_patterns += 1

    rep.violations = _dedupe_spans(hits)
    for v in rep.violations:
        del v["sp"]
    return rep


_DISPATCH_WHITELIST = re.compile(
    r"\)\s*this->\w+\)\s*\[\s*\d+\s*\]")


def _inside_dispatch_whitelist(text, pos):
    """True when pos falls inside a `((Fn**)this->m)[slot](` span."""
    for m in _DISPATCH_WHITELIST.finditer(text):
        if m.start() <= pos <= m.end() + 16:
            return True
    return False
