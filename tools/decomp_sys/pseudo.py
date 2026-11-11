#!/usr/bin/env python3
"""pseudo.py -- full_export pseudocode loader + statement-level body parser.

Source material: decompile-results/full_export/ (index.json + src/*.cpp blocks
with `/*0xADDR* /` anchors).  This module never guesses semantics; it only
parses the Hex-Rays text into structure the transform passes can chew on.
"""
import json
import os
import re

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
EXPORT_DIR = os.path.join(ROOT, "decompile-results", "full_export")


class ExportFn(object):
    """One function's export block."""

    def __init__(self, name, addr, size, proto, disasm_lines, body_lines):
        self.name = name
        self.addr = addr                    # '0x5B2990'
        self.size = int(size, 16)
        self.proto = proto                  # raw export proto text
        self.disasm_lines = disasm_lines    # list[str] (no // prefix)
        self.body_lines = body_lines        # list[str] pseudocode body

    def body_text(self):
        return "\n".join(self.body_lines)


def load_index():
    with open(os.path.join(EXPORT_DIR, "index.json"), encoding="utf-8") as f:
        return json.load(f)


_BLOCK_CACHE = {}


def _load_file(rel):
    if rel not in _BLOCK_CACHE:
        path = os.path.join(EXPORT_DIR, rel.replace("/", os.sep))
        with open(path, encoding="utf-8", errors="replace") as f:
            _BLOCK_CACHE[rel] = f.read()
    return _BLOCK_CACHE[rel]


def fetch(addr):
    """addr '0x5B2990' (case-insensitive) -> ExportFn (raises KeyError)."""
    idx = load_index()
    key = addr.lower().replace("0x", "").zfill(8)
    e = idx.get(key.upper())
    if not e:
        raise KeyError("addr %s not in full_export index" % addr)
    text = _load_file(e["file"])
    m = re.search(
        r"// ======================================================================\n"
        r"// [^\n]+\n"
        r"// addr=0x" + key.upper() + r"\b.*?"
        r"(?=\n// =====|\Z)",
        text, re.S)
    if not m:
        raise KeyError("block for %s not found in %s" % (addr, e["file"]))
    block = m.group(0)
    hdr = re.search(
        r"// ([^\n]+)\n// addr=(0x[0-9A-Fa-f]+) size=(0x[0-9A-Fa-f]+)\n"
        r"// proto: ([^\n]*)\n", block)
    dis = []
    body = []
    in_dis = False
    in_body = False
    for line in block.split("\n"):
        if line.startswith("// ---- IDA disasm ----"):
            in_dis, in_body = True, False
            continue
        if line.startswith("// ---- Hex-Rays ----"):
            in_dis, in_body = False, True
            continue
        if in_dis and line.startswith("//"):
            dis.append(re.sub(r"^//(\s+)?", "", line))
            continue
        if in_body and not line.startswith("//") and line.strip():
            body.append(line)
    # drop signature line, outer braces
    # R5: the Hex-Rays section can open with a MULTI-LINE signature
    # rendering (`char __thiscall Cls::M(\n  Cls *this,\n  ...)`) -- the
    # old single-line drop leaked the whole proto into the body as
    # garbage declarations (C2143 INIClass family).  Everything before
    # the first standalone '{' that parses as a signature is dropped.
    if body:
        brace_idx = None
        for i, ln in enumerate(body[:12]):
            if ln.strip() == "{":
                brace_idx = i
                break
        if brace_idx is not None:
            head = body[:brace_idx]
            looks_sig = bool(head) and "(" in head[0] \
                and ";" not in " ".join(head)
            if looks_sig or brace_idx == 0:
                body = body[brace_idx + 1:]
            elif head and re.search(r"\)\s*$", head[0]) \
                    and "=" not in head[0].split("(")[0]:
                body = body[1:]
        elif body and re.search(r"\)\s*$", body[0]) \
                and "=" not in body[0].split("(")[0]:
            body = body[1:]
    if body and body[0].strip() == "{":
        body = body[1:]
    if body and body[-1].strip() == "}":
        body = body[:-1]
    return ExportFn(hdr.group(1), hdr.group(2), hdr.group(3),
                    hdr.group(4), dis, body)


# ---------------------------------------------------------------- body parsing

ANCHOR = re.compile(r"/\*0x[0-9A-Fa-f]+\*/\s*$")

IDA_TYPES = {
    "_DWORD", "_WORD", "_BYTE", "_QWORD", "_OWORD", "unsigned __int16",
    "unsigned __int8", "unsigned __int32", "unsigned __int64", "__int16",
    "__int8", "__int64", "unsigned __int64", "bool", "void", "char",
    "unsigned char", "signed char", "int", "unsigned int", "short",
    "unsigned short", "long", "unsigned long", "float", "double",
    "long double", "size_t", "int32_t", "uint32_t", "int16_t", "uint16_t",
    "int8_t", "uint8_t", "wchar_t", "GUID", "HDC", "HWND", "HANDLE",
    "LCID", "HKL", "HINSTANCE", "HMODULE", "HBRUSH", "HPEN", "HFONT",
    "HGDIOBJ", "HBITMAP", "HRGN", "HMENU", "HRESULT", "DWORD", "WORD",
    "BYTE", "BOOL", "UINT", "ULONG", "LONG", "LPSTR", "LPCSTR", "LPVOID",
}


class Stmt(object):
    """Lightweight statement node."""

    def __init__(self, kind, text, children=None, header=None):
        self.kind = kind          # decl|expr|return|if|while|for|do|block|label|goto|switch|empty
        self.text = text          # full statement text (no trailing ;/braces)
        self.children = children or []
        self.header = header      # controlling expression for if/while/for
        self.decl = None          # for decls: dict(name,type,init,array)

    def __repr__(self):
        return "<Stmt %s %r>" % (self.kind, self.text[:50])


_DECL_RE = re.compile(
    r"^(?P<type>(?:const\s+)?[A-Za-z_]\w*(?:\s+(?:__int\d+|unsigned|signed|char|short|int|long|double|float))*)"
    r"(?P<stars>\s*\*+)?"
    r"\s*(?:__restrict\b\s*)?"
    r"(?P<name>[A-Za-z_]\w*)"
    r"(?P<array>(?:\[[^\]]*\])+)?"
    r"\s*(?:=\s*(?P<init>.+))?$")


def looks_like_decl(line):
    """Heuristic: 'TYPE name;' / 'TYPE name = ...;' / 'TYPE name[N];'."""
    s = line.rstrip(";").strip()
    if not s or "(" in s.split("=")[0]:
        return False
    head = re.match(r"^(?:const\s+)?([A-Za-z_]\w*)", s)
    if not head:
        return False
    t0 = head.group(1)
    if t0 in IDA_TYPES:
        pass
    elif re.match(r"^_", t0):
        pass
    elif " " in s.split("=")[0].strip():
        pass
    else:
        return False
    m = _DECL_RE.match(s)
    return bool(m and m.group("name"))


def parse_decl(line):
    s = line.rstrip(";").strip()
    m = _DECL_RE.match(s)
    if not m:
        return None
    ty = re.sub(r"\s+", " ", m.group("type")).strip()
    if m.group("stars"):
        # R6: preserve EVERY star -- `RefCount **v6` was re-declared as
        # `RefCount * v6` through the statement re-render (parse ->
        # decl-dict -> render round-trip), and the star-dropped decl made
        # every downstream `v6 = (RefCount **)&...` a C2440.
        ty = ty + m.group("stars").replace(" ", "")
    return {
        "type": ty,
        "name": m.group("name"),
        "array": m.group("array") or "",
        "init": (m.group("init") or "").strip() or None,
        "raw": line,
    }


def strip_anchor(text):
    return ANCHOR.sub("", text).strip()


def parse_body(body_lines):
    """Parse pseudocode body (no outer braces) into a Stmt list."""
    # join continuation lines: pseudocode statements end with ; { } or are headers
    text = "\n".join(body_lines)
    return _parse_stmts(text)


def _split_top(text, seps=";{}"):
    """Split text into chunks at top-level separators, tracking parens/brackets.

    Returns list of (chunk_text, sep_char) where sep is ';' '{' '}' or ''.
    """
    out = []
    depth_p = depth_b = 0
    cur = []
    i = 0
    n = len(text)
    while i < n:
        c = text[i]
        if c == "(":
            depth_p += 1
        elif c == ")":
            depth_p -= 1
        elif c == "[":
            depth_b += 1
        elif c == "]":
            depth_b -= 1
        elif c == '"' or c == "'":
            j = i + 1
            while j < n and text[j] != c:
                if text[j] == "\\":
                    j += 1
                j += 1
            cur.append(text[i:j + 1])
            i = j + 1
            continue
        if depth_p == 0 and depth_b == 0 and c in seps:
            out.append(("".join(cur), c))
            cur = []
        else:
            cur.append(c)
        i += 1
    if "".join(cur).strip():
        out.append(("".join(cur), ""))
    return out


def _parse_stmts(text):
    stmts = []
    chunks = _split_top(text)
    i = 0
    n = len(chunks)
    while i < n:
        raw, sep = chunks[i]
        s = strip_anchor(raw.strip())
        if not s:
            i += 1
            continue
        # label:  loc_XXXXXX:
        if sep == "" and re.match(r"^(loc|short)_?\w*:$", s):
            stmts.append(Stmt("label", s.rstrip(":")))
            i += 1
            continue
        if s.startswith("else"):
            # 'else' handled by if-parser; stray else (shouldn't happen)
            stmts.append(Stmt("else", s[4:].strip()))
            i += 1
            continue
        m = re.match(r"^(if|while|for|switch)\s*\(", s)
        if m and sep in (";", "", "{"):
            kw = m.group(1)
            # gather header until matching paren of the kw
            pi = s.find("(")
            hdr, end = _extract_paren(s, pi)
            rest = s[end:].strip()
            node = Stmt(kw, s, header=hdr)
            if rest:
                # inline single/multi statements in the SAME chunk:
                #   `if (x) return 1;`
                node.children = _parse_stmts(rest)
                i += 1
            elif sep == "{":
                # body = chunks between this '{' and its matching '}'
                j = _skip_brace(chunks, i)
                inner = _rebuild(chunks, i + 1, j)
                node.children = _parse_stmts(inner)
                i = j + 1
            elif i + 1 < n and chunks[i + 1][1] == "{":
                j = _skip_brace(chunks, i + 1)
                inner = _rebuild(chunks, i + 2, j)
                node.children = _parse_stmts(inner)
                i = j + 1
            elif i + 1 < n and chunks[i + 1][0].strip():
                bs = strip_anchor(chunks[i + 1][0].strip())
                node.children = _parse_stmts(bs)
                i += 2
            else:
                i += 1
            # possible 'else' / 'else if' chain
            if i < n and kw == "if":
                nxt_raw, nxt_sep = chunks[i]
                nxt = strip_anchor(nxt_raw.strip())
                if nxt.startswith("else"):
                    tail = nxt[4:].strip()
                    if tail.startswith("if"):
                        # else-if: consume inline or brace form
                        if nxt_sep == "{":
                            j = _skip_brace(chunks, i)
                            text = _rebuild(chunks, i, j + 1)
                            node.children.extend(
                                _parse_stmts(text.strip()[4:].strip()))
                            i = j + 1
                        else:
                            node.children.extend(_parse_stmts(tail))
                            i += 1
                    elif nxt_sep == "{":
                        j = _skip_brace(chunks, i)
                        inner = _rebuild(chunks, i + 1, j)
                        node.children.append(Stmt("else", "else",
                                                   children=_parse_stmts(inner)))
                        i = j + 1
                    elif tail:
                        node.children.append(Stmt(
                            "else", "else", children=_parse_stmts(tail)))
                        i += 1
                    else:
                        # bare 'else': brace body OR single statement
                        if i + 1 < n and chunks[i + 1][1] == "{":
                            j = _skip_brace(chunks, i + 1)
                            inner = _rebuild(chunks, i + 2, j)
                            node.children.append(Stmt(
                                "else", "else",
                                children=_parse_stmts(inner)))
                            i = j + 1
                        elif i + 1 < n and chunks[i + 1][0].strip():
                            bs = strip_anchor(chunks[i + 1][0].strip())
                            node.children.append(Stmt(
                                "else", "else", children=_parse_stmts(bs)))
                            i += 2
                        else:
                            i += 1
            stmts.append(node)
            continue
        m_do = re.match(r"^do\b(.*)$", s, re.S)
        if m_do:
            node = Stmt("do", "do")
            # R5: the old reconstruction (_brace_block) mixed absolute and
            # relative chunk indices and LOST body statements -- the do
            # body emptied and the while-header escaped as a top-level
            # `while (c) { }` (Struct/IPX/BlitTrans C2143/C2036 batch).
            # Mirror the if-branch: _skip_brace + _rebuild.  The '{' can
            # ride the do chunk's own sep OR the next chunk's; a single
            # statement can ride INSIDE the do chunk itself.

            def _while_hdr(wraw):
                wt = strip_anchor(wraw.strip()).rstrip(";").strip()
                if wt.startswith("while"):
                    pi = wt.find("(")
                    if pi >= 0:
                        return _extract_paren(wt, pi)[0]
                return wt

            inline_rest = m_do.group(1).strip()
            if inline_rest:
                node.children = _parse_stmts(inline_rest)
                if i + 1 < n and chunks[i + 1][0].strip().startswith(
                        "while"):
                    node.header = _while_hdr(chunks[i + 1][0])
                    i += 2
                else:
                    i += 1
            elif sep == "{":
                j = _skip_brace(chunks, i)
                inner = _rebuild(chunks, i + 1, j)
                node.children = _parse_stmts(inner)
                if j + 1 < n:
                    node.header = _while_hdr(chunks[j + 1][0])
                    i = j + 2
                else:
                    i = j + 1
            elif i + 1 < n and chunks[i + 1][1] == "{":
                j = _skip_brace(chunks, i + 1)
                inner = _rebuild(chunks, i + 2, j)
                node.children = _parse_stmts(inner)
                if j + 1 < n:
                    node.header = _while_hdr(chunks[j + 1][0])
                    i = j + 2
                else:
                    i = j + 1
            elif i + 2 < n and chunks[i + 1][0].strip() and \
                    chunks[i + 2][0].strip().startswith("while"):
                bs = strip_anchor(chunks[i + 1][0].strip())
                node.children = _parse_stmts(bs)
                node.header = _while_hdr(chunks[i + 2][0])
                i = i + 3
            elif i + 1 < n and chunks[i + 1][0].strip().startswith("while"):
                node.header = _while_hdr(chunks[i + 1][0])
                i = i + 2
            else:
                i += 1
            stmts.append(node)
            continue
        if s.startswith("return"):
            stmts.append(Stmt("return", s[6:].strip()))
            i += 1
            continue
        if s.startswith("goto "):
            stmts.append(Stmt("goto", s[5:].strip().rstrip(";")))
            i += 1
            continue
        if s.startswith("break") or s.startswith("continue"):
            stmts.append(Stmt("expr", s))
            i += 1
            continue
        if sep == ";" and looks_like_decl(s):
            node = Stmt("decl", s)
            node.decl = parse_decl(s)
            stmts.append(node)
            i += 1
            continue
        stmts.append(Stmt("expr", s))
        i += 1
    return stmts


def _rebuild(chunks, i, j):
    """Rejoin chunk texts over [i, j), re-emitting EVERY separator.

    R5: the old version re-emitted only ';' -- '{'/'}' separators were
    silently DROPPED, so a reconstructed if-body containing a do-block or
    a nested if lost its braces and the recursive parse consumed single
    statements / empty do-bodies / stray elses (C2181/C2143/C2036 batch).
    """
    out = []
    for k in range(i, j):
        raw, sep = chunks[k]
        out.append(raw)
        if sep:
            out.append(sep)
    return "".join(out)


def _extract_paren(s, start):
    """From s[start] == '(' -> (inner_text, index_after_close)."""
    assert s[start] == "("
    depth = 0
    for i in range(start, len(s)):
        c = s[i]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                return s[start + 1:i], i + 1
    return s[start + 1:], len(s)


def _brace_block(chunks, i, first_raw):
    """Reconstruct the text inside the brace starting at chunks[i] ('{')."""
    return _brace_block_at(chunks, i)


def _brace_block_at(chunks, i):
    parts = []
    depth = 0
    j = i
    while j < len(chunks):
        raw, sep = chunks[j]
        parts.append(raw)
        if sep == "{":
            depth += 1
        elif sep == "}":
            depth -= 1
            if depth == 0:
                break
        elif sep == ";" and depth >= 1:
            parts.append(";")
        j += 1
    text = ""
    for k, (raw, sep) in enumerate(chunks[i:j + 1]):
        if k == 0:
            text = raw  # includes the '{'
        else:
            if chunks[k + i - 1][1] == ";":
                text += ";"
            text += raw
        if sep in ("{", "}", ";"):
            pass
    return text[1:]  # drop leading '{'


def _skip_brace(chunks, i):
    """Return index of the chunk holding the matching '}' for chunks[i]('{')."""
    depth = 0
    j = i
    while j < len(chunks):
        raw, sep = chunks[j]
        if sep == "{":
            depth += 1
        elif sep == "}":
            depth -= 1
            if depth == 0:
                return j
        j += 1
    return len(chunks) - 1


def _parse_else_if(nxt, chunks, i):
    node = Stmt("if", nxt)
    m = re.match(r"^else\s+if\s*\(", nxt)
    hdr, end = _extract_paren(nxt, nxt.find("(", len(m.group(0)) - 1))
    node.header = hdr
    rest = nxt[end:].strip()
    if rest.startswith("{"):
        # brace content lives in following chunks
        inner = _brace_block_at(chunks, i + 1) if i + 1 < len(chunks) else ""
        node.children = _parse_stmts(inner)
        node._end = _skip_brace(chunks, i + 1)
    else:
        node.children = [Stmt("expr", strip_anchor(rest.rstrip(";")))]
        node._end = i
    return node


def render(stmts, indent=1):
    """Stmt list -> C++ text lines (pretty, 4-space)."""
    out = []
    pad = "    " * indent
    for st in stmts:
        if st.kind == "decl":
            d = st.decl
            line = "%s%s %s%s" % (pad, d["type"], d["name"], d["array"])
            if d["init"] is not None:
                line += " = " + d["init"]
            out.append(line + ";")
        elif st.kind == "return":
            out.append((pad + "return " + st.text + ";").replace("return ;", "return;"))
        elif st.kind in ("if", "while", "for"):
            if st.kind == "for":
                hdr = re.sub(r"\s*;\s*", "; ", st.header)
                out.append("%s%s (%s)" % (pad, st.kind, st.header))
            else:
                out.append("%s%s (%s)" % (pad, st.kind, st.header))
            # else-nodes are SIBLINGS of the then-children (parser appends
            # them to the same children list); they must render AFTER the
            # closing brace, not inside it (C2181 family)
            body = [c for c in st.children if c.kind != "else"]
            elses = [c for c in st.children if c.kind == "else"]
            out.append(pad + "{")
            out.extend(render(body, indent + 1))
            out.append(pad + "}")
            for en in elses:
                if len(en.children) == 1 and en.children[0].kind == "if":
                    # else-if chain: re-render the if at this level
                    out.append(pad + "else")
                    out.extend(render(en.children, indent))
                else:
                    out.append(pad + "else")
                    out.append(pad + "{")
                    out.extend(render(en.children, indent + 1))
                    out.append(pad + "}")
        elif st.kind == "else":
            out.append(pad + "else")
            out.append(pad + "{")
            out.extend(render(st.children, indent + 1))
            out.append(pad + "}")
        elif st.kind == "do":
            out.append(pad + "do")
            out.append(pad + "{")
            out.extend(render(st.children, indent + 1))
            out.append(pad + "} while (" + (st.header or "") + ");")
        elif st.kind == "label":
            out.append(st.text + ":")
        elif st.kind == "goto":
            out.append(pad + "goto " + st.text + ";")
        elif st.kind == "expr":
            if st.text:
                out.append(pad + st.text + ";")
        elif st.kind == "switch":
            out.append(pad + "switch (" + st.header + ")")
            out.append(pad + "{")
            for ch in st.children:
                if ch.kind == "case":
                    out.append(pad + "    " + ch.text + ":")
                    out.extend(render(ch.children, indent + 2))
                else:
                    out.extend(render([ch], indent + 1))
            out.append(pad + "}")
        elif st.kind == "case":
            out.append(pad + st.text + ":")
            out.extend(render(st.children, indent + 1))
        else:
            if st.text:
                out.append(pad + st.text + ";")
    return out
