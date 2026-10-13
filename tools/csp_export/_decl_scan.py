#!/usr/bin/env python3
"""X10 shared declaration scanner + mini-preprocessor (decl_authority tool).

Single source for:
  * nesting-aware class/struct declaration extraction (top-level vs nested)
  * `this->X` member-name extraction from class bodies
  * a mini C preprocessor model (include/if/define) for macro-accurate
    per-TU definition visibility

Consolidated from the X10 analysis scripts (.omo/x10/decls.py,
.omo/x10/pp_model.py).
"""
import re
from pathlib import Path, PurePosixPath

DECL_RE = re.compile(r'(?:^|\n)[ \t]*(?:class|struct)[ \t]+([A-Za-z_]\w*)')


# ---------------------------------------------------------------- primitives

def _scan(text, i, limit=None):
    """Advance from i skipping whitespace/comments; return new index."""
    n = len(text) if limit is None else limit
    while i < n:
        c = text[i]
        if c in ' \t\r\n':
            i += 1
        elif text.startswith('//', i):
            j = text.find('\n', i)
            i = n if j < 0 else j + 1
        elif text.startswith('/*', i):
            j = text.find('*/', i)
            i = n if j < 0 else j + 2
        else:
            break
    return i


def _extract_body(text, brace_start):
    depth = 0
    n = len(text)
    i = brace_start
    body_start = brace_start + 1
    while i < n:
        if text.startswith('//', i):
            j = text.find('\n', i)
            i = n if j < 0 else j + 1
            continue
        if text.startswith('/*', i):
            j = text.find('*/', i)
            i = n if j < 0 else j + 2
            continue
        c = text[i]
        if c == '{':
            depth += 1
            if depth == 1:
                body_start = i + 1
        elif c == '}':
            depth -= 1
            if depth == 0:
                return text[body_start:i], i + 1
        i += 1
    return text[body_start:], n


def normalize_body(body):
    body = re.sub(r'//[^\n]*', ' ', body)
    body = re.sub(r'/\*.*?\*/', ' ', body, flags=re.S)
    body = re.sub(r'\s+', ' ', body)
    return body.strip()


def _class_depths(text):
    """For every position: number of enclosing CLASS-like frames.
    Namespaces/plain blocks are not counted (namespace-wrapped classes stay
    'top level')."""
    n = len(text)
    out = [0] * (n + 1)
    stack = []
    cls_depth = 0
    i = 0
    while i < n:
        c = text[i]
        if text.startswith('//', i):
            j = text.find('\n', i)
            j = n if j < 0 else j
            for k in range(i, j):
                out[k] = cls_depth
            i = j
            continue
        if text.startswith('/*', i):
            j = text.find('*/', i)
            j = n if j < 0 else j + 2
            for k in range(i, min(j, n)):
                out[k] = cls_depth
            i = j
            continue
        if c == '"' or c == "'":
            j = i + 1
            while j < n:
                if text[j] == '\\':
                    j += 2
                    continue
                if text[j] == c:
                    j += 1
                    break
                j += 1
            for k in range(i, min(j, n)):
                out[k] = cls_depth
            i = j
            continue
        out[i] = cls_depth
        if c == '{':
            seg = text[max(0, i - 400):i]
            seg = re.sub(r'//[^\n]*', ' ', seg)
            seg = re.sub(r'/\*.*?\*/', ' ', seg, flags=re.S)
            kind = 'other'
            if re.search(r'\b(?:class|struct|union)\s+[A-Za-z_]\w*'
                         r'(?:\s*<[^(;{}]*>)?\s*(?::[^{;]*)?$', seg):
                kind = 'cls'
            elif re.search(r'\benum(?:\s+class)?\s+[A-Za-z_]\w*'
                           r'\s*(?::[^{;]*)?$', seg):
                kind = 'cls'
            stack.append(kind)
            if kind == 'cls':
                cls_depth += 1
        elif c == '}':
            if stack:
                if stack.pop() == 'cls':
                    cls_depth -= 1
        i += 1
    out[n] = cls_depth
    return out


def _iter_decls_pos(text):
    """Yield (name, kind, body, class_depth, start_pos) — same as iter_decls
    plus the byte offset of the name."""
    depths = _class_depths(text)
    for m in DECL_RE.finditer(text):
        name = m.group(1)
        start = m.start(1)
        depth = depths[start] if start < len(depths) else 0
        i = _scan(text, m.end())
        n = len(text)
        if i >= n:
            yield (name, 'fwd', None, depth, start)
            continue
        c = text[i]
        if c == ';':
            yield (name, 'fwd', None, depth, start)
            continue
        j = i
        found = None
        while j < n:
            if text.startswith('//', j):
                k = text.find('\n', j)
                j = n if k < 0 else k + 1
                continue
            if text.startswith('/*', j):
                k = text.find('*/', j)
                j = n if k < 0 else j + 2
                continue
            ch = text[j]
            if ch == '{':
                found = j
                break
            if ch == ';':
                break
            j += 1
        if found is None:
            yield (name, 'odd', None, depth, start)
            continue
        body, _ = _extract_body(text, found)
        yield (name, 'def', normalize_body(body), depth, start)


def iter_decls(text):
    """Yield (name, kind, body, class_depth).
    kind: 'fwd' | 'def' | 'odd'; body: normalized for 'def'. """
    for (n, k, b, d, _pos) in _iter_decls_pos(text):
        yield (n, k, b, d)


_NS_TOK_RE = re.compile(
    r'namespace\s*(?:([A-Za-z_]\w*)\s*)?\{|(?<![:\w])namespace\s+'
    r'([A-Za-z_]\w*(?:::\w+)*)\s*\{|\{|\}|//[^\n]*|/\*.*?\*/', re.S)


def defs_ns_in_text(text):
    """Map name -> (norm_body, enclosing namespace path) for the first
    top-level definition of each name. Single decl scan; brace-aware but
    directive-free: call this on text that already went through the
    preprocessor walk (active lines only)."""
    bodies = {}
    pos_of = {}
    for (n, k, b, d, pos) in _iter_decls_pos(text):
        if k == 'def' and d == 0 and n not in pos_of:
            bodies[n] = b
            pos_of[n] = pos
    out = {}
    if not pos_of:
        return out
    todo = sorted(pos_of.items(), key=lambda kv: kv[1])
    ti = 0
    stack = []
    for m in _NS_TOK_RE.finditer(text):
        tok = m.group(0)
        while ti < len(todo) and todo[ti][1] < m.start():
            out[todo[ti][0]] = (bodies[todo[ti][0]],
                                tuple(x for x in stack if x != '#'))
            ti += 1
        if tok.startswith('//') or tok.startswith('/*'):
            continue
        if tok.startswith('namespace'):
            stack.append(m.group(1) or m.group(2) or '(anon)')
        elif tok == '{':
            stack.append('#')
        elif tok == '}':
            if stack:
                stack.pop()
    while ti < len(todo):
        out[todo[ti][0]] = (bodies[todo[ti][0]],
                            tuple(x for x in stack if x != '#'))
        ti += 1
    return out


def def_span(text, name):
    """Return (start, body_start, body_end, end) offsets of the first
    TOP-LEVEL definition of `name`, or None. end = after closing brace."""
    depths = _class_depths(text)
    for m in DECL_RE.finditer(text):
        nm = m.group(1)
        if nm != name:
            continue
        start = m.start(1)
        if (depths[start] if start < len(depths) else 0) != 0:
            continue
        i = _scan(text, m.end())
        j = i
        n = len(text)
        found = None
        while j < n:
            if text.startswith('//', j):
                k = text.find('\n', j)
                j = n if k < 0 else k + 1
                continue
            if text.startswith('/*', j):
                k = text.find('*/', j)
                j = n if k < 0 else k + 2
                continue
            ch = text[j]
            if ch == '{':
                found = j
                break
            if ch == ';':
                break
            j += 1
        if found is None:
            continue
        body, end = _extract_body(text, found)
        # extend start to the beginning of the line for clean removal
        ls = text.rfind('\n', 0, start)
        ls = 0 if ls < 0 else ls + 1
        return (ls, found, found + 1 + len(body), end)
    return None


def defs_in_text(text):
    """Top-level full definitions: list of (name, norm_body)."""
    return [(n, b) for (n, k, b, d) in iter_decls(text)
            if k == 'def' and d == 0]


def all_defs_in_text(text):
    return [(n, b) for (n, k, b, d) in iter_decls(text) if k == 'def']


MEMBER_NAME_RE = re.compile(
    r'\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(?:=[^;]*)?;')
MEMBER_METH_RE = re.compile(
    r'\b([A-Za-z_]\w*)\s*\([^;{}]*\)\s*(?:const)?\s*(?:override)?\s*'
    r'(?:=\s*0)?\s*;')


def member_names(body_norm):
    parts = []
    cur = ''
    depth = 0
    for ch in body_norm:
        depth += (ch == '{') - (ch == '}')
        if ch == ';' and depth == 0:
            parts.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        parts.append(cur)
    names = set()
    for p in parts:
        p = p.strip()
        if not p:
            continue
        for m in MEMBER_METH_RE.finditer(p + ';'):
            names.add(m.group(1))
        for m in MEMBER_NAME_RE.finditer(p + ';'):
            names.add(m.group(1))
    return names


# --------------------------------------------------------------- pp model

class PP:
    """Mini C preprocessor: `#include "..."`, if/ifdef/ifndef/elif/else,
    define/undef, pragma-once-equivalent per walk. System includes skipped."""

    def __init__(self, src_root, max_depth=100):
        self.src = Path(src_root)
        self._text_cache = {}
        self.max_depth = max_depth

    def read(self, rel):
        if rel not in self._text_cache:
            try:
                self._text_cache[rel] = (self.src / rel).read_text(
                    encoding='utf-8', errors='replace')
            except OSError:
                self._text_cache[rel] = ''
        return self._text_cache[rel]

    def _eval_cond(self, expr, env):
        expr = re.sub(r'/\*.*?\*/', ' ', expr)
        expr = re.sub(r'//.*$', '', expr)
        expr = re.sub(r'defined\s*\(\s*([A-Za-z_]\w*)\s*\)',
                      lambda m: '1' if m.group(1) in env else '0', expr)
        expr = re.sub(r'defined\s+([A-Za-z_]\w*)',
                      lambda m: '1' if m.group(0) in env else '0', expr)
        expr = re.sub(r'\b[A-Za-z_]\w*\b',
                      lambda m: '1' if m.group(0) in env else '0', expr)
        expr = expr.replace('&&', ' and ').replace('||', ' or ')
        expr = re.sub(r'!(?!=)', ' not ', expr)
        expr = re.sub(r'[^01() \tandornot]', ' ', expr)
        try:
            return bool(eval(expr, {'__builtins__': {}}, {}))
        except Exception:
            return True  # conservative

    def resolve_include(self, cur_rel, inc):
        """Compiler-accurate quoted-include resolution within src/:
        dir-of-includer first, then src/ root (CMake target_include_dirs).
        X10 closeout fix: bare includes like `#include "misc_ext.hpp"` from
        src/misc/*.cpp were previously mis-resolved to src/ root -> whole
        closures silently dropped (false 'missing' in the reachability
        census, false negatives in the same-TU conflict scan)."""
        raw = inc.replace('\\', '/').strip()
        if not raw or ':' in raw or raw.startswith('/'):
            return raw  # absolute/drive-letter: leave as-is (will miss)
        d = PurePosixPath(cur_rel).parent
        cand = (d / raw).as_posix() if str(d) != '.' else raw
        if (self.src / cand).exists():
            return cand
        return raw

    def active_defs(self, tu_rel):
        """({name: {file: norm_body}}, files_entered)."""
        defs, _ns, entered = self.active_defs_full(tu_rel)
        return defs, entered

    def active_defs_full(self, tu_rel):
        """({name: {file: body}}, {name: {file: ns_path}}, files_entered).

        ns_path = enclosing namespace tuple of the (first) top-level def of
        `name` in that file, computed on the PREPROCESSED (active) text of
        the file as seen from this TU."""
        per_file = {}
        entered = []
        self._walk(tu_rel, set(), set(), per_file, entered, 0)
        defs = {}
        nsmap = {}
        for rel in entered:
            lines = per_file.get(rel)
            if not lines:
                continue
            text = '\n'.join(lines)
            for name, (body, ns) in defs_ns_in_text(text).items():
                defs.setdefault(name, {})[rel] = body
                nsmap.setdefault(name, {})[rel] = ns
        return defs, nsmap, entered

    def _walk(self, rel, env, once_done, per_file, entered, depth):
        if rel in once_done or depth > self.max_depth:
            return
        once_done.add(rel)
        entered.append(rel)
        txt = self.read(rel)
        if not txt:
            return
        out = per_file.setdefault(rel, [])
        stack = []  # [parent_active, active, taken]

        def active():
            return all(f[1] for f in stack)

        for raw in txt.split('\n'):
            s = raw.lstrip()
            if s.startswith('#'):
                m = re.match(r'#\s*(\w+)\s*(.*)$', s)
                if not m:
                    if active():
                        out.append(raw)
                    continue
                d, rest = m.group(1), m.group(2)
                if d == 'ifdef' or d == 'ifndef':
                    parts = rest.split()
                    name = parts[0] if parts else ''
                    cond = (name in env) if d == 'ifdef' else (
                        name not in env)
                    parent = active()
                    stack.append([parent, parent and cond, parent and cond])
                elif d == 'if':
                    cond = self._eval_cond(rest, env)
                    parent = active()
                    stack.append([parent, parent and cond, parent and cond])
                elif d == 'elif':
                    if stack:
                        f = stack[-1]
                        if f[2] or not f[0]:
                            f[1] = False
                        else:
                            cond = self._eval_cond(rest, env)
                            f[1] = cond
                            f[2] = cond
                elif d == 'else':
                    if stack:
                        f = stack[-1]
                        f[1] = f[0] and not f[2]
                        f[2] = True
                elif d == 'endif':
                    if stack:
                        stack.pop()
                elif d == 'define':
                    if active():
                        nm = re.match(r'\s*([A-Za-z_]\w*)', rest)
                        if nm:
                            env.add(nm.group(1))
                elif d == 'undef':
                    if active():
                        nm = re.match(r'\s*([A-Za-z_]\w*)', rest)
                        if nm:
                            env.discard(nm.group(1))
                elif d == 'include':
                    if active():
                        im = re.match(r'\s*"([^"]+)"', rest)
                        if im:
                            self._walk(
                                self.resolve_include(rel, im.group(1)),
                                env, once_done, per_file, entered,
                                depth + 1)
            else:
                if active():
                    out.append(raw)
