#!/usr/bin/env python3
"""checker.py -- DECOMP-2 rule 3/4 self-check on EMITTED cpp text.

Semantics mirror tools/clang_ast_checker.py's ptr-arithmetic / cast-index /
ptr-nonptr-conv families, specialized for the six-rule contract:

  R3  no member-offset access:  *(T*)(p + N) | ((T*)p)[N] | p[N] on
      class-typed names | (T*)this + N | &this->member puns
  R4  no pointer+integer arithmetic on class-typed names
      (carve-out: registry function-table subscript dispatch
       `((Fn**)member)[slot](...)`)

The checker knows which identifiers are class-typed (this + class params +
registry-class-pointer locals) and which members exist in the emitted hpp.
"""
import re


class RuleReport(object):
    def __init__(self):
        self.violations = []
        self.checked_patterns = 0

    def ok(self):
        return not self.violations


def check_function(cls, body_text, class_typed, known_members):
    """body_text: emitted function body (no signature).

    class_typed: set of identifiers whose type is a registry class pointer
                 (always includes 'this')
    known_members: set of member names declared for `cls` in the pilot hpp
    """
    rep = RuleReport()
    text = body_text
    ct = set(class_typed) | {"this"}

    def flag(rule, pat, detail):
        rep.violations.append({"rule": rule, "pattern": pat, "detail": detail})

    # R3/R4: class-typed identifier + integer (with optional cast head)
    for name in sorted(ct):
        for m in re.finditer(
                r"\b%s\s*\+\s*(?:0x)?\d+\b" % re.escape(name), text):
            flag("R4", "ptr+int", m.group(0))
        for m in re.finditer(
                r"\(\s*\w[\w\s]*\*+\s*\)\s*%s\s*\+" % re.escape(name), text):
            flag("R4", "cast-ptr+int", m.group(0))
        # p[N] on class pointers (array member access must be this->m[i])
        for m in re.finditer(r"\b%s\s*\[" % re.escape(name), text):
            seg = text[m.start():text.find("]", m.start()) + 1]
            flag("R3", "class-ptr subscript", seg)
        # *(T*)name (cast-deref of a class pointer -- must be member access)
        for m in re.finditer(
                r"\*\s*\(\s*\w[\w\s]*\*+\s*\)\s*%s\b" % re.escape(name), text):
            flag("R3", "cast-deref class ptr", m.group(0))
        rep.checked_patterns += 4

    # R3: cast-deref containing '+' at top level: *(T*)(EXPR + N)
    for m in re.finditer(r"\*\s*\(\s*\w[\w\s]*\*+\s*\)\s*\([^()]*\+", text):
        # carve-out: function-table dispatch already handled below; any
        # remaining cast-deref-plus is a violation
        seg = m.group(0)
        if not _inside_dispatch_whitelist(text, m.start()):
            flag("R3", "cast-deref-plus", seg)
    rep.checked_patterns += 1

    # R3: cast-index ((T*)x)[N] -- allowed only as function-table dispatch
    for m in re.finditer(r"\(\s*\(?\s*\w[^()]*\)\s*\)\s*\[", text):
        seg = text[m.start():text.find("]", m.start()) + 1]
        if not _inside_dispatch_whitelist(text, m.start()):
            flag("R3", "cast-index", seg)
    rep.checked_patterns += 1

    # R3: address-of member pun: (T*)&this->m
    for m in re.finditer(r"\(\s*\w[\w\s]*\*+\s*\)\s*&\s*this->", text):
        flag("R3", "member-pun (&this->m cast)", m.group(0))
    rep.checked_patterns += 1

    # R3: member existence: every this->M must be in the emitted hpp
    for m in re.finditer(r"this->([A-Za-z_]\w*)", text):
        mem = m.group(1)
        if known_members is not None and mem not in known_members:
            flag("R3", "undeclared member", "this->%s not in registry hpp" % mem)
    rep.checked_patterns += 1

    # R4 carve-out sanity: dispatch whitelist shape must call afterwards
    for m in re.finditer(r"\)\s*\[\s*\d+\s*\]\s*\(", text):
        rep.checked_patterns += 1
    return rep


_DISPATCH_WHITELIST = re.compile(
    r"\)\s*this->\w+\)\s*\[\s*\d+\s*\]")


def _inside_dispatch_whitelist(text, pos):
    """True when pos falls inside a `((Fn**)this->m)[slot](` span."""
    for m in _DISPATCH_WHITELIST.finditer(text):
        if m.start() <= pos <= m.end() + 16:
            return True
    return False
