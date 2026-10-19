#!/usr/bin/env python3
"""X83: member-call form for e4 bodies (generator post-pass).

The e4 body generator renders IDA pseudo-code calls verbatim:
    Class::Method(receiver, a2, a3);
For a non-static member function that is not a legal call form (a qualified
call to a non-static member without an object), which is the systemic source
of the C2664 "argument 1 cannot convert Class* to <scalar>" family.

This module rewrites exactly that shape into the member-call form
    (receiver)->Method(a2, a3);
using only the receiver expression that is already present (no new cast).

It is used two ways:
  * imported by tools/gen_e4_materialize.py (future regenerations), and
  * driven site-by-site by .omo/evidence/optimization/x83/x83_memberize_apply.py
    for the current tree (error worklist gives the exact receiver type).

Rules:
  * only classes/methods that have a non-static declaration in an e4 carrier,
  * no declaration is modified, no cast is inserted,
  * argument list is parsed with balanced (), [], {},
  * definitions (`ret Class::Method(params)` followed by `{`) are skipped,
  * idempotent: `(x)->Method(...)` no longer matches `Class::Method(`.
"""
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
E4C = os.path.join(ROOT, 'src', 'e4', 'classes')

_DECL_CACHE = None
_DECL_RE = re.compile(
    r'^\s*(static\s+)?([A-Za-z_][\w:<>,\s\*&]*?)\s+([A-Za-z_]\w*)\s*'
    r'\(([^;{()]*)\)\s*;', re.M)
_CLASS_RE = re.compile(r'\b(?:struct|class)\s+([A-Za-z_]\w*)[^;{]*\{')


def _strip_comments(text):
    text = re.sub(r'/\*.*?\*/', '', text, flags=re.S)
    text = re.sub(r'//[^\n]*', '', text)
    return text


def load_decls(refresh=False):
    """class -> method -> {'static': bool, 'params': str} (e4 carriers)."""
    global _DECL_CACHE
    if _DECL_CACHE is not None and not refresh:
        return _DECL_CACHE
    decls = {}
    if not os.path.isdir(E4C):
        _DECL_CACHE = decls
        return decls
    for fn in sorted(os.listdir(E4C)):
        if not fn.endswith('.hpp'):
            continue
        path = os.path.join(E4C, fn)
        try:
            txt = open(path, encoding='utf-8', errors='replace').read()
        except OSError:
            continue
        code = _strip_comments(txt)
        for cm in _CLASS_RE.finditer(code):
            cname = cm.group(1)
            start = cm.end()
            depth = 1
            j = start
            while j < len(code) and depth > 0:
                if code[j] == '{':
                    depth += 1
                elif code[j] == '}':
                    depth -= 1
                j += 1
            body = code[start:j - 1]
            per = decls.setdefault(cname, {})
            for dm in _DECL_RE.finditer(body):
                name = dm.group(3)
                per.setdefault(name, {'static': bool(dm.group(1)),
                                      'params': dm.group(4).strip(),
                                      'file': os.path.relpath(path, ROOT)})
    _DECL_CACHE = decls
    return decls


def _split_args(text, open_idx):
    """Return (args, close_idx) for the '(' at open_idx; None if unbalanced."""
    depth = 0
    args = []
    cur = []
    i = open_idx + 1
    while i < len(text):
        ch = text[i]
        if ch in '([{':
            depth += 1
            cur.append(ch)
        elif ch in ')]}':
            if depth == 0:
                if ch != ')':
                    return None
                args.append(''.join(cur).strip())
                return [a for a in args if a != ''], i
            depth -= 1
            cur.append(ch)
        elif ch == ',' and depth == 0:
            args.append(''.join(cur).strip())
            cur = []
        else:
            cur.append(ch)
        i += 1
    return None


def _code_end(line):
    i = line.find('/*')
    return len(line) if i < 0 else i


def memberize_line(line, cls, name, decls=None):
    """Rewrite every `cls::name(arg1, rest)` call on one line.

    Only call form is produced; the caller (error worklist) guarantees that
    arg1's static type is cls* (compiler diagnostic).  Returns (new_line, n).
    """
    decls = decls or load_decls()
    d = decls.get(cls, {}).get(name)
    if not d or d.get('static'):
        return line, 0
    end = _code_end(line)
    pat = re.compile(r'(?<![\w:~])' + re.escape(cls) + r'\s*::\s*'
                     + re.escape(name) + r'\s*\(')
    out = []
    last = 0
    n = 0
    for m in pat.finditer(line[:end]):
        # address-of / sizeof object is not a call
        before = line[max(0, m.start() - 8):m.start()]
        if re.search(r'(sizeof\s*\(?|\&\s*)$', before):
            continue
        opened = line.find('(', m.start())
        parsed = _split_args(line[:end], opened)
        if not parsed:
            continue
        args, close = parsed
        if not args:
            continue
        arg1 = args[0]
        rest = ', '.join(args[1:])
        repl = '(%s)->%s(%s)' % (arg1, name, rest)
        out.append(line[last:m.start()])
        out.append(repl)
        last = close + 1
        n += 1
    if not n:
        return line, 0
    out.append(line[last:])
    return ''.join(out), n


_DEF_RE = re.compile(
    r'^\s*(?:virtual\s+)?[A-Za-z_][\w:<>,\s\*&]*?\b'
    r'([A-Za-z_]\w*)::([A-Za-z_]\w*)\s*\(')
_SCAN_RE = re.compile(r'(?<![\w:~])([A-Za-z_]\w*)\s*::\s*([A-Za-z_]\w*)\s*\(')


def memberize_text(text, decls=None):
    """Apply the line rule to a whole generated file (definition-aware)."""
    decls = decls or load_decls()
    lines = text.split('\n')
    n = 0
    for i, ln in enumerate(lines):
        if _DEF_RE.match(ln):
            # a definition header line: skip it (its args are parameters)
            j = i + 1
            while j < len(lines) and not lines[j].strip():
                j += 1
            if j < len(lines) and lines[j].strip().startswith('{'):
                continue
        end = _code_end(ln)
        pairs = []
        for m in _SCAN_RE.finditer(ln[:end]):
            cls, name = m.group(1), m.group(2)
            if (cls, name) not in pairs:
                pairs.append((cls, name))
        cur = ln
        for cls, name in pairs:
            cur, k = memberize_line(cur, cls, name, decls)
            n += k
        if cur != ln:
            lines[i] = cur
    return '\n'.join(lines), n


if __name__ == '__main__':
    import sys
    p = sys.argv[1]
    txt = open(p, encoding='utf-8', errors='replace').read()
    new, n = memberize_text(txt)
    print('rewrote', n, 'calls in', p)
    if '--apply' in sys.argv:
        open(p, 'w', encoding='utf-8', newline='').write(new)
