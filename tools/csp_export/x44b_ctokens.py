#!/usr/bin/env python3
"""x44b_ctokens.py -- shared tokenizer + line analyzer for the X44b body-cosmetics pass.

Design constraints (from the X44b task):
- Byte-preserving I/O: callers read bytes and decode latin-1; this module is
  pure text-in/text-out so every byte survives a decode/process/encode round
  trip (learnings L357).
- tokenize(): whitespace excluded, comments INCLUDED (as inner-text word
  tokens) so the token-multiset proof is sensitive to any comment mutation.
- analyze_lines(): single deterministic pass (no fix-loop) computing per-line
  brace depth, namespace-aware effective depth, paren carry, and a line
  classification. This is the Stage-2 formatter's entire "engine".
"""
import re

_ANCHOR_RE = re.compile(r'/\*0x[0-9A-Fa-f]+\*/')
_NS_RE = re.compile(r'\bnamespace\b')


def _find_quote_close(text, i, q, n):
    """Find the closing quote for a literal opened at i (text[i]==q).
    Returns index AFTER the closing quote, or None if no unescaped close
    exists before end of line. Real char/string literals in this corpus
    never span lines; unpaired quotes are IDA artifacts (`RTTI ... Descriptor')
    and must be treated as plain characters."""
    j = i + 1
    while j < n:
        c = text[j]
        if c == '\n':
            return None
        if c == '\\':
            j += 2
            continue
        if c == q:
            return j + 1
        j += 1
    return None


def tokenize(text):
    """Tokenize C/C++ text into (kind, text) tuples.

    kinds: 'id' (identifier/number/keyword), 'p' (single punctuation char),
    'str' (string or char literal, verbatim), 'comment' (whitespace-separated
    word from comment inner text). Whitespace is skipped.
    """
    toks = []
    i, n = 0, len(text)
    while i < n:
        c = text[i]
        if c == '/' and i + 1 < n and text[i + 1] == '/':
            j = text.find('\n', i)
            if j < 0:
                j = n
            toks.extend(('comment', w) for w in text[i + 2:j].split())
            i = j
            continue
        if c == '/' and i + 1 < n and text[i + 1] == '*':
            j = text.find('*/', i + 2)
            if j < 0:
                inner, i = text[i + 2:], n
            else:
                inner, i = text[i + 2:j], j + 2
            toks.extend(('comment', w) for w in inner.split())
            continue
        if c == '"' or c == "'":
            j = _find_quote_close(text, i, c, n)
            if j is not None:
                toks.append(('str', text[i:j]))
                i = j
                continue
            # unpaired quote: punctuation, move on
            toks.append(('p', c))
            i += 1
            continue
        if c.isalnum() or c == '_':
            j = i
            while j < n and (text[j].isalnum() or text[j] == '_'):
                j += 1
            toks.append(('id', text[i:j]))
            i = j
            continue
        if not c.isspace():
            toks.append(('p', c))
        i += 1
    return toks


def token_multiset(text):
    from collections import Counter
    return Counter(tokenize(text))


def count_anchors(text):
    """Count /*0xADDR*/ anchors (case-insensitive hex)."""
    return len(_ANCHOR_RE.findall(text))


def analyze_lines(text):
    """Single-pass line analysis. Returns list of dicts, one per line:
      cls: 'blank' | 'preproc' | 'preproccont' | 'continuation' | 'blockcomment' | 'stmt'
      indent_depth: for 'stmt' lines, the effective (namespace-excluded) code
        depth at which the line's code starts, with leading '}' pops applied.
        0 for all other classes.
    The scan tracks string/char literals and both comment kinds; a '}' pops
    the brace stack regardless of its kind (ns or code).
    """
    lines = text.split('\n')
    stack = []            # entries: 'ns' | 'code'
    paren = 0             # '(' opened on a previous line and not yet closed
    in_bc = False         # inside a /* */ block comment at a line boundary
    preproc_carry = False # previous physical line was a preprocessor directive ending with '\'
    out = []
    for ln in lines:
        L = len(ln)
        k = 0
        while k < L and ln[k] in ' \t':
            k += 1
        first = ln[k] if k < L else ''
        if in_bc:
            cls = 'blockcomment'
        elif preproc_carry:
            cls = 'preproccont'
        elif first == '':
            cls = 'blank'
        elif first == '#':
            cls = 'preproc'
        elif paren > 0:
            cls = 'continuation'
        else:
            cls = 'stmt'

        code_start = sum(1 for x in stack if x == 'code')
        ns_start = sum(1 for x in stack if x == 'ns')
        indent_depth = 0
        if cls == 'stmt':
            indent_depth = code_start

        i = 0
        leading_close_done = (cls != 'stmt')
        while i < L:
            c = ln[i]
            if in_bc:
                if c == '*' and i + 1 < L and ln[i + 1] == '/':
                    in_bc = False
                    i += 2
                    continue
                i += 1
                continue
            if c == '/' and i + 1 < L and ln[i + 1] == '/':
                break  # rest of the line is a line comment
            if c == '/' and i + 1 < L and ln[i + 1] == '*':
                in_bc = True
                i += 2
                continue
            if c == '"' or c == "'":
                j = _find_quote_close(ln, i, c, L)
                if j is None:
                    # unpaired quote (IDA artifact): plain character
                    if c != '}' and not c.isspace():
                        leading_close_done = True
                    i += 1
                    continue
                i = j
                continue
            if c != '}' and not c.isspace():
                leading_close_done = True
            if c == '{':
                stack.append('ns' if _NS_RE.search(ln[:i]) else 'code')
                i += 1
                continue
            if c == '}':
                if stack:
                    stack.pop()
                if not leading_close_done:
                    # still inside the leading run of '}': freeze indent depth
                    code_now = sum(1 for x in stack if x == 'code')
                    indent_depth = code_now
                i += 1
                continue
            if c == '(':
                paren += 1
            elif c == ')':
                paren = max(0, paren - 1)
            i += 1
        preproc_carry = (cls in ('preproc', 'preproccont') and ln.endswith('\\'))
        out.append({
            'cls': cls,
            'indent_depth': indent_depth if cls == 'stmt' else 0,
            'code_start': code_start,
            'ns_start': ns_start,
        })
    return out
