"""ir.parser -- Hex-Rays / emitted-C++ body parser with source spans.

Scope (spec): declaration region, if/else, while, for, do/while, switch,
goto/label, return, expression statements, blocks; expressions: assignment,
ternary, binary, unary, call, subscript, member (./->), cast, deref,
pre/post increment.  Extensions kept from the evaluation prototype
(``.omo/agents/ir_eval/proto/parse.py``): switch/case/default, break/continue,
sizeof, comma expressions, declaration lists with initializers.

Differences vs the prototype (which discarded token positions):

* every node is a :class:`Node` carrying absolute ``start`` / ``end`` offsets
  into the parsed text, so the value layer can rewrite exact source spans;
* a ``parse_statements`` entry point parses a brace-less body (the shape the
  decomp_sys emitter produces);
* tolerant tokenizer for Hex-Rays plate names (``dword_XXXX``, ``#123``,
  ``__int16``, templates, ``?`` identifiers, backquoted types).

The parser never guesses semantics; it only builds structure.  ``walk()``
and ``statements()`` give deterministic source-order traversals for binding.
"""
import re

# ---------------------------------------------------------------- tokens

TOK_RE = re.compile(r"""
    (?P<ws>\s+)
  | (?P<lcomment>//[^\n]*)
  | (?P<bcomment>/\*.*?\*/)
  | (?P<num>0[xX][0-9A-Fa-f]+[uUlL]* | (?:\d+\.\d*|\.\d+|\d+)(?:[eE][+-]?\d+)?[fFlLuUiI0-9]* )
  | (?P<str>[LuU]?"(?:\\.|[^"\\])*")
  | (?P<chr>[LuU]?'(?:\\.|[^'\\])*')
  | (?P<bq>`[^\s']*')
  | (?P<anon>\#[0-9]+)
  | (?P<id>[$?@A-Za-z_][$\w?]*)
  | (?P<op><<=|>>=|\.\.\.|->|\+\+|--|<<|>>|<=|>=|==|!=|&&|\|\||\+=|-=|\*=|/=|%=|&=|\|=|\^=|::|.)
""", re.S | re.X)

TYPE_WORDS = {
    "void", "char", "short", "int", "long", "float", "double", "signed",
    "unsigned", "bool", "wchar_t", "size_t", "int8_t", "int16_t", "int32_t",
    "int64_t", "uint8_t", "uint16_t", "uint32_t", "uint64_t", "intptr_t",
    "uintptr_t", "BYTE", "WORD", "DWORD", "QWORD", "TBYTE", "PBYTE", "PWORD",
    "PDWORD", "PVOID", "BOOL", "UINT", "ULONG", "USHORT", "UCHAR", "LONG",
    "LPSTR", "LPCSTR", "LPVOID", "HANDLE", "HWND", "HDC", "HRESULT", "WCHAR",
    "TCHAR", "LPARAM", "WPARAM", "LRESULT", "ATOM", "COLORREF", "GUID",
    "IID", "CLSID", "FARPROC", "SIZE_T", "SSIZE_T", "DWORD64", "DWORD32",
    "va_list", "LONGLONG", "ULONGLONG", "SHORT", "CHAR", "FLOAT", "DOUBLE",
    "INT", "UINT_PTR", "LPCVOID", "LPCRITICAL_SECTION", "CRITICAL_SECTION",
}
TYPE_PREFIX = ("_", "__")
CC_WORDS = {"__thiscall", "__cdecl", "__stdcall", "__fastcall", "__userpurge",
            "__usercall", "__noreturn", "__pascal", "__ptr64", "__w64"}
BIN_PREC = [
    ("||",), ("&&",), ("|",), ("^",), ("&",), ("==", "!="),
    ("<", ">", "<=", ">="), ("<<", ">>"), ("+", "-"), ("*", "/", "%"),
]
ASSIGN_OPS = {"=", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>="}
TYPE_RE = re.compile(r"_[A-Z]")
CC_STRICT = re.compile(
    r"__(int(8|16|32|64)|m64|m128|m128i|m256|cdecl|stdcall|fastcall|thiscall|"
    r"userpurge|usercall|noreturn|pascal|ptr64|w64|sptr|uptr|unaligned|"
    r"wchar_t|time64_t|int64|int32|int16|int8|debugbreak)$")


class ParseError(Exception):
    def __init__(self, msg, tok_text=None, pos=None):
        super().__init__(msg)
        self.kind = msg.split(":")[0]
        self.tok_text = tok_text
        self.pos = pos


class Tok:
    __slots__ = ("kind", "text", "pos")

    def __init__(self, kind, text, pos):
        self.kind, self.text, self.pos = kind, text, pos

    def __repr__(self):
        return "%s(%r)" % (self.kind, self.text)


def tokenize(text):
    toks = []
    i, n = 0, len(text)
    while i < n:
        m = TOK_RE.match(text, i)
        if not m:
            raise ParseError("tokenize stuck at %d: %r" % (i, text[i:i + 20]),
                             text[i:i + 20], i)
        kind = m.lastgroup
        if kind not in ("ws", "lcomment", "bcomment"):
            if kind == "anon":
                kind = "id"
            toks.append(Tok(kind, m.group(), i))
        i = m.end()
    toks.append(Tok("eof", "", n))
    return toks


def is_type_word(t):
    return (t in TYPE_WORDS or t in CC_WORDS or CC_STRICT.match(t) is not None
            or TYPE_RE.match(t) is not None or t.endswith("_t")
            or (t[:1] == "#" and t[1:].isdigit()))


# ---------------------------------------------------------------- AST node

class Node:
    """Generic AST node with a source span.

    ``start`` / ``end`` are absolute character offsets into the text passed to
    the parser; ``text[start:end]`` is exactly the construct's source.
    Kind-specific payload lives in attributes (``name``, ``op``, ``kids``...).
    """

    __slots__ = ("kind", "start", "end", "__dict__")

    def __init__(self, kind, start, end, **kw):
        self.kind = kind
        self.start = start
        self.end = end
        self.__dict__.update(kw)

    def __repr__(self):
        extra = ""
        if self.kind in ("id", "num"):
            extra = " " + repr(getattr(self, "name", getattr(self, "text", "")))
        elif self.kind == "member":
            extra = " %s%s" % (self.op, self.name)
        elif self.kind == "bin":
            extra = " " + self.op
        return "<%s%s [%d:%d]>" % (self.kind, extra, self.start, self.end)


def walk(node):
    """Yield every node reachable from ``node`` in source order (pre-order)."""
    if not isinstance(node, Node):
        return
    yield node
    for child in _children(node):
        for x in walk(child):
            yield x


def _children(node):
    k = node.kind
    if k in ("block",):
        return list(node.stmts)
    if k == "if":
        out = [node.cond]
        if node.then is not None:
            out.append(node.then)
        if node.els is not None:
            out.append(node.els)
        return out
    if k == "while":
        return [node.cond, node.body]
    if k == "do":
        return [node.body, node.cond]
    if k == "for":
        return [x for x in (node.init, node.cond, node.step, node.body)
                if x is not None]
    if k == "switch":
        return [node.expr, node.body]
    if k == "case":
        return ([node.value] if node.value is not None else []) + [node.body]
    if k == "label":
        return [node.body] if node.body is not None else []
    if k == "return":
        return [node.value] if node.value is not None else []
    if k == "decl":
        return [init for _n, init in node.decls if init is not None]
    if k == "expr":
        return [node.value]
    if k == "paren":
        return [node.expr]
    if k == "unary" or k == "post":
        return [node.expr]
    if k == "call":
        return [node.func] + list(node.args)
    if k == "index":
        return [node.base, node.idx]
    if k == "member":
        return [node.base]
    if k == "memptr":
        return [node.base, node.expr]
    if k == "assign":
        return [node.lhs, node.rhs]
    if k == "ternary":
        return [node.cond, node.a, node.b]
    if k == "bin":
        return [node.lhs, node.rhs]
    if k == "cast":
        return [node.expr]
    if k == "comma":
        return list(node.exprs)
    if k == "sizeof_expr":
        return [node.expr]
    return []


def statements(node, out=None):
    """Collect statement nodes (block containers excluded) in source order."""
    if out is None:
        out = []
    for child in _children(node):
        if child.kind in ("block",):
            statements(child, out)
        elif child.kind in ("if", "while", "do", "for", "switch", "case",
                            "label", "return", "decl", "expr"):
            if child.kind != "expr" or getattr(child, "value", None) is not None:
                if child.kind in ("if", "while", "do", "for", "switch",
                                  "case", "label", "return", "decl", "expr"):
                    if child.kind not in ("block",):
                        out.append(child)
            for sub in _children(child):
                if sub.kind in ("block",):
                    statements(sub, out)
    return out


# ---------------------------------------------------------------- parser

class Parser:
    def __init__(self, toks, text, extended=True):
        self.t = toks
        self.text = text
        self.i = 0
        self.extended = extended

    # -- helpers
    def peek(self, k=0):
        j = min(self.i + k, len(self.t) - 1)
        return self.t[j]

    def at(self, *texts):
        return self.peek().text in texts

    def accept(self, *texts):
        if self.peek().text in texts:
            tok = self.peek()
            self.i += 1
            return tok
        return None

    def expect(self, *texts):
        tok = self.accept(*texts)
        if tok is None:
            raise ParseError("unexpected: expected %s got %r" % (texts, self.peek().text),
                             self.peek().text, self.peek().pos)
        return tok

    def expect_id(self):
        tok = self.peek()
        if tok.kind != "id":
            raise ParseError("unexpected: expected identifier got %r" % (tok.text,),
                             tok.text, tok.pos)
        self.i += 1
        return tok

    def _start(self):
        return self.peek().pos

    def _mk(self, kind, start, **kw):
        tok = self.t[self.i - 1] if self.i else self.peek()
        end = tok.pos + len(tok.text)
        return Node(kind, start, end, **kw)

    # -- top level
    def parse_statements(self):
        stmts = []
        while self.peek().kind != "eof":
            if self.at("}"):
                raise ParseError("unexpected: stray }", "}", self.peek().pos)
            stmts.append(self.parse_stmt())
        return stmts

    def parse_block_text(self, require_block=True):
        st = self._start()
        self.expect("{")
        stmts = []
        while not self.at("}"):
            if self.peek().kind == "eof":
                raise ParseError("unexpected: eof inside block")
            stmts.append(self.parse_stmt())
        self.expect("}")
        return self._mk("block", st, stmts=stmts)

    # -- declarations
    def parse_decl_specifiers(self):
        self.parse_type_name()
        while self.peek().text in ("const", "volatile", "static", "extern",
                                   "register", "inline", "virtual"):
            self.i += 1

    def parse_type_name(self):
        seen = False
        while True:
            tok = self.peek()
            if tok.kind != "id":
                break
            t = tok.text
            if is_type_word(t):
                self.i += 1
                seen = True
                continue
            if t in ("struct", "union", "enum", "class"):
                self.i += 1
                if self.peek().kind == "id":
                    self.i += 1
                    seen = True
                continue
            if t in ("const", "volatile"):
                self.i += 1
                continue
            nxt = self.peek(1)
            if nxt.text == "*":
                self.i += 1
                seen = True
                continue
            if nxt.text == "::":
                j = self.i + 1
                while j < len(self.t) and self.t[j].text == "::":
                    j += 2
                follow = self.t[j].text if j < len(self.t) else ""
                if follow in ("*", ",", ")", "]", "[", ">"):
                    self.i += 1
                    seen = True
                    while self.accept("::"):
                        self.expect_id()
                    continue
                break
            if self.at("<") and self._looks_like_template_tail():
                self._skip_template_args()
                seen = True
                continue
            if (not seen and t[:1].isupper()
                    and (nxt.text in (";", "=", "[", ",", ")", "]", ">")
                         or (nxt.kind == "id"
                             and self.peek(2).text in (";", "=", "[", ",", ")")))):
                self.i += 1
                seen = True
                continue
            if not seen and nxt.kind == "id":
                j = self.i + 1
                while j < len(self.t) and self.t[j].text in CC_WORDS:
                    j += 1
                if (j + 1 < len(self.t) and self.t[j].kind == "id"
                        and self.t[j + 1].text == "("):
                    self.i += 1
                    seen = True
                    continue
            if not seen and nxt.kind == "id" and self.peek(2).text in (";", "=", ",", ")"):
                self.i += 1
                seen = True
                continue
            break
        if not seen:
            raise ParseError("unexpected: expected type name got %r" % (self.peek().text,),
                             self.peek().text, self.peek().pos)

    @staticmethod
    def _is_type_ident(name):
        return name.endswith("_t") or (name[:1].isupper()
                                       and any(c.islower() for c in name))

    def parse_abstract_declarator(self, allow_name=False):
        while self.accept("*"):
            if self.peek().text in ("const", "volatile"):
                self.i += 1
        if allow_name and self.peek().kind == "id":
            if self.peek().text not in TYPE_WORDS and \
                    not self.peek().text.startswith("__"):
                self.i += 1
        while self.at("["):
            self.i += 1
            if not self.at("]"):
                self.parse_expr()
            self.expect("]")
        if self.at("("):
            self.i += 1
            while not self.at(")"):
                if self.peek().kind == "eof":
                    raise ParseError("unexpected: eof in declarator")
                self.i += 1
            self.expect(")")
            if self.at("("):
                self.i += 1
                depth = 1
                while depth:
                    tok = self.peek()
                    if tok.kind == "eof":
                        raise ParseError("unexpected: eof in function type")
                    self.i += 1
                    if tok.text == "(":
                        depth += 1
                    elif tok.text == ")":
                        depth -= 1

    def parse_decl(self):
        st = self._start()
        self.parse_type_name()
        decls = []
        while True:
            if self.at("(") and self._looks_like_fnptr_declarator():
                name = self._consume_fnptr_declarator()
                decls.append((name, None))
                if not self.accept(","):
                    break
                continue
            while self.accept("*"):
                if self.peek().text in ("const", "volatile"):
                    self.i += 1
            name = self.expect_id().text
            while self.at("["):
                self.i += 1
                if not self.at("]"):
                    self.parse_expr()
                self.expect("]")
            init = None
            if self.accept("="):
                init = self.parse_expr()
            decls.append((name, init))
            if not self.accept(","):
                break
        self.expect(";")
        return self._mk("decl", st, decls=decls)

    def _is_decl_start(self):
        tok = self.peek()
        if tok.kind != "id":
            return False
        t = tok.text
        if is_type_word(t) or t in ("struct", "union", "enum", "const", "volatile"):
            return True
        nxt = self.peek(1).text
        if nxt == "*" and self.peek(2).kind == "id" and self.peek(3).text in (";", "=", "[", ",", ")"):
            return True
        if t[:1].isupper() and self.peek(1).kind == "id" and self.peek(2).text in (";", "=", "[", ","):
            return True
        return False

    def _looks_like_fnptr_declarator(self):
        assert self.at("(")
        j = self.i + 1
        id_seen = 0
        while j < len(self.t):
            tok = self.t[j]
            if tok.kind == "eof":
                return False
            if tok.text == ")":
                return id_seen <= 1
            if tok.text == "*" or tok.text in CC_WORDS or tok.text in ("const", "volatile"):
                j += 1
                continue
            if tok.kind == "id":
                id_seen += 1
                if id_seen > 1:
                    return False
                j += 1
                continue
            return False
        return False

    def _consume_fnptr_declarator(self):
        self.expect("(")
        name = None
        while not self.at(")"):
            tok = self.peek()
            if tok.kind == "eof":
                raise ParseError("unexpected: eof in fnptr declarator")
            if tok.kind == "id" and tok.text not in CC_WORDS and tok.text not in ("const", "volatile"):
                name = tok.text
            self.i += 1
        self.expect(")")
        if self.at("("):
            depth = 0
            while True:
                tok = self.peek()
                if tok.kind == "eof":
                    raise ParseError("unexpected: eof in fnptr params")
                self.i += 1
                if tok.text == "(":
                    depth += 1
                elif tok.text == ")":
                    depth -= 1
                    if depth == 0:
                        break
        return name

    # -- statements
    def parse_stmt(self):
        tok = self.peek()
        t = tok.text
        st = tok.pos
        if t == "{":
            return self.parse_block_text()
        if t == ";":
            self.i += 1
            return self._mk("empty", st)
        if t == "if":
            self.i += 1
            self.expect("(")
            cond = self.parse_expr()
            self.expect(")")
            then = self.parse_stmt()
            els = None
            if self.accept("else"):
                els = self.parse_stmt()
            return self._mk("if", st, cond=cond, then=then, els=els)
        if t == "while":
            self.i += 1
            self.expect("(")
            cond = self.parse_expr()
            self.expect(")")
            return self._mk("while", st, cond=cond, body=self.parse_stmt())
        if t == "for":
            self.i += 1
            self.expect("(")
            init = None
            if not self.at(";"):
                if self._is_decl_start():
                    init = self.parse_decl()
                else:
                    init = self.parse_expr()
            self.expect(";")
            cond = None if self.at(";") else self.parse_expr()
            self.expect(";")
            step = None if self.at(")") else self.parse_expr()
            self.expect(")")
            return self._mk("for", st, init=init, cond=cond, step=step,
                            body=self.parse_stmt())
        if t == "do":
            if not self.extended:
                raise ParseError("unsupported: do/while", t, tok.pos)
            self.i += 1
            body = self.parse_stmt()
            self.expect("while")
            self.expect("(")
            cond = self.parse_expr()
            self.expect(")")
            self.expect(";")
            return self._mk("do", st, body=body, cond=cond)
        if t == "switch":
            self.i += 1
            self.expect("(")
            e = self.parse_expr()
            self.expect(")")
            return self._mk("switch", st, expr=e, body=self.parse_block_text())
        if t in ("case", "default"):
            self.i += 1
            val = None
            if t == "case":
                val = self.parse_expr()
            self.expect(":")
            body = self.parse_stmt()
            return self._mk("case", st, value=val, body=body)
        if t == "return":
            self.i += 1
            e = None if self.at(";") else self.parse_expr()
            self.expect(";")
            return self._mk("return", st, value=e)
        if t in ("break", "continue"):
            self.i += 1
            self.expect(";")
            return self._mk(t, st)
        if t == "goto":
            self.i += 1
            label = self.expect_id().text
            self.expect(";")
            return self._mk("goto", st, label=label)
        if t in ("asm", "__asm"):
            raise ParseError("unsupported: inline asm", t, tok.pos)
        if tok.kind == "id" and self.peek(1).text == ":":
            self.i += 1
            self.expect(":")
            return self._mk("label", st, name=tok.text, body=self.parse_stmt())
        if self._is_decl_start():
            return self.parse_decl()
        e = self.parse_expr()
        self.expect(";")
        return self._mk("expr", st, value=e)

    # -- expressions
    def parse_expr(self):
        e = self.parse_assignment()
        if self.at(","):
            if not self.extended:
                raise ParseError("unsupported: comma expr", ",", self.peek().pos)
            items = [e]
            while self.accept(","):
                items.append(self.parse_assignment())
            return Node("comma", e.start, items[-1].end, exprs=items)
        return e

    def parse_assignment(self):
        left = self.parse_ternary()
        if self.peek().text in ASSIGN_OPS:
            op = self.peek().text
            self.i += 1
            right = self.parse_assignment()
            return Node("assign", left.start, right.end, op=op, lhs=left, rhs=right)
        return left

    def parse_ternary(self):
        cond = self.parse_binary(0)
        if self.accept("?"):
            a = self.parse_expr()
            self.expect(":")
            b = self.parse_ternary()
            return Node("ternary", cond.start, b.end, cond=cond, a=a, b=b)
        return cond

    def parse_binary(self, level):
        if level >= len(BIN_PREC):
            return self.parse_unary()
        left = self.parse_binary(level + 1)
        while self.peek().text in BIN_PREC[level]:
            op = self.peek().text
            self.i += 1
            right = self.parse_binary(level + 1)
            left = Node("bin", left.start, right.end, op=op, lhs=left, rhs=right)
        return left

    def parse_unary(self):
        t = self.peek().text
        st = self.peek().pos
        if t in ("+", "-", "!", "~", "*", "&", "++", "--"):
            self.i += 1
            return self._mk("unary", st, op=t, expr=self.parse_unary())
        if t == "sizeof":
            self.i += 1
            if self.at("("):
                save = self.i
                try:
                    self.i += 1
                    self.parse_type_name()
                    self.parse_abstract_declarator()
                    self.expect(")")
                    return self._mk("sizeof_type", st)
                except ParseError:
                    self.i = save
            return self._mk("sizeof_expr", st, expr=self.parse_unary())
        if self.at("(") and self._looks_like_cast():
            self.i += 1
            type_start = self.peek().pos
            self.parse_type_name()
            self.parse_abstract_declarator()
            type_end = self.t[self.i - 1].pos + len(self.t[self.i - 1].text)
            self.expect(")")
            expr = self.parse_unary()
            return self._mk("cast", st, type_text=self.text[type_start:type_end],
                            expr=expr)
        return self.parse_postfix()

    def _looks_like_cast(self):
        assert self.at("(")
        if self.peek(1).text == "(":
            return False
        depth = 0
        j = self.i
        toks = []
        while True:
            tok = self.t[j]
            if tok.kind == "eof":
                return False
            if tok.text == "(":
                depth += 1
            elif tok.text == ")":
                depth -= 1
                if depth == 0:
                    break
            elif depth == 1:
                # only top-level tokens: a nested `void`/`int` inside a call
                # argument must not turn `(f(void))` into a cast
                toks.append(tok)
            j += 1
        if not toks:
            return False
        for tok in toks:
            if tok.text in ("+", "-", "/", "%", "=", "==", "!=", "<", ">", "<=", ">=",
                            "&&", "||", "?", ":", "!", "~", "^", "|", ".", "->",
                            "++", "--", "<<", ">>"):
                return False
            if tok.kind in ("num", "str", "chr"):
                return False
        texts = [t.text for t in toks]
        if toks[0].text == "(":
            return False
        if texts[0] in ("*", "&", "!", "~", "++", "--"):
            return False
        # a cast must be followed by an operand: reject `(Name)` used as a
        # parenthesized value/call target (`return (int)(f());`)
        nxt = self.t[j + 1] if j + 1 < len(self.t) else self.t[-1]
        operand_start = (nxt.kind in ("id", "num", "str", "chr")
                         or nxt.text in ("(", "sizeof"))
        strong = (any(is_type_word(x) for x in texts)
                  or texts[-1] == "*")
        if not operand_start:
            # `(T*)&x` / `(T*)-p`: an operator may start the operand only for
            # a syntactically strong type cast, never for `(CamelName)` --
            # `(f(x)) & 0xFF` is a binary expression, not a cast
            if not (strong and nxt.text in ("-", "+", "!", "~", "*", "&",
                                            "++", "--")):
                return False
        if any(is_type_word(x) for x in texts):
            return True
        if texts[-1] == "*" and all(t.kind == "id" or t.text in ("*", "::") for t in toks):
            return any(t.kind == "id" for t in toks)
        if len(texts) == 1 and self._is_type_ident(texts[0]):
            return True
        return False

    def parse_postfix(self):
        e = self.parse_primary()
        while True:
            t = self.peek().text
            if t == "(":
                self.i += 1
                args = []
                if not self.at(")"):
                    while True:
                        args.append(self.parse_expr())
                        if not self.accept(","):
                            break
                self.expect(")")
                e = Node("call", e.start, self.t[self.i - 1].pos + 1,
                         func=e, args=args)
            elif t == "[":
                self.i += 1
                idx = self.parse_expr()
                self.expect("]")
                e = Node("index", e.start, self.t[self.i - 1].pos + 1,
                         base=e, idx=idx)
            elif t in (".", "->"):
                self.i += 1
                if self.at("*"):
                    # pointer-to-member: `this->*((fnptr *)x)[3]` (the era
                    # compiler renders virtual dispatch through data slots
                    # this way in VectorClass-family code)
                    self.i += 1
                    expr = self.parse_unary()
                    e = Node("memptr", e.start, expr.end, op=t, base=e,
                             expr=expr)
                    continue
                ntok = self.peek()
                if ntok.kind in ("id", "bq", "num"):
                    self.i += 1
                    name = ntok.text
                else:
                    raise ParseError("unexpected: member name %r" % (ntok.text,),
                                     ntok.text, ntok.pos)
                e = Node("member", e.start, ntok.pos + len(ntok.text),
                         op=t, base=e, name=name)
            elif t in ("++", "--"):
                self.i += 1
                e = Node("post", e.start, self.t[self.i - 1].pos + 2,
                         op=t, expr=e)
            else:
                break
        return e

    def _looks_like_template_tail(self):
        depth = 0
        j = self.i
        while True:
            tok = self.t[j]
            if tok.kind == "eof":
                return False
            if tok.text == "<":
                depth += 1
            elif tok.text == "<<":
                depth += 2
            elif tok.text == ">":
                depth -= 1
                if depth <= 0:
                    break
            elif tok.text == ">>":
                depth -= 2
                if depth <= 0:
                    break
            elif tok.text in (";", "{", "}", "=", "?", "&&", "||", "+", "-", "/", "%"):
                return False
            j += 1
        nxt = self.t[j + 1] if j + 1 < len(self.t) else self.t[-1]
        return nxt.text in ("::", "(")

    def _skip_template_args(self):
        depth = 0
        while True:
            tok = self.peek()
            if tok.kind == "eof":
                raise ParseError("unexpected: eof in template args")
            self.i += 1
            if tok.text == "<":
                depth += 1
            elif tok.text == "<<":
                depth += 2
            elif tok.text == ">":
                depth -= 1
                if depth <= 0:
                    return
            elif tok.text == ">>":
                depth -= 2
                if depth <= 0:
                    return

    def parse_primary(self):
        tok = self.peek()
        if tok.kind == "num":
            self.i += 1
            return self._mk("num", tok.pos, text=tok.text)
        if tok.kind == "str":
            self.i += 1
            return self._mk("str", tok.pos, text=tok.text)
        if tok.kind == "chr":
            self.i += 1
            return self._mk("chr", tok.pos, text=tok.text)
        if tok.text == "(":
            self.i += 1
            e = self.parse_expr()
            self.expect(")")
            return self._mk("paren", tok.pos, expr=e)
        if tok.kind == "id" or tok.kind == "bq":
            self.i += 1
            name = tok.text
            while True:
                if self.accept("::"):
                    nxt = self.peek()
                    if nxt.kind in ("id", "bq"):
                        self.i += 1
                        name += "::" + nxt.text
                        continue
                    raise ParseError("unexpected: qualified name after :: got %r"
                                     % (nxt.text,), nxt.text, nxt.pos)
                if self.at("<") and self._looks_like_template_tail():
                    self._skip_template_args()
                    continue
                break
            return self._mk("id", tok.pos, name=name)
        raise ParseError("unexpected: primary %r" % (tok.text,), tok.text, tok.pos)


# ---------------------------------------------------------------- entry points

def parse_statements(text, extended=True):
    """Parse a brace-less statement list (the ctx.lines body shape)."""
    p = Parser(tokenize(text), text, extended=extended)
    return p.parse_statements()


def parse_block(text, extended=True):
    p = Parser(tokenize(text), text, extended=extended)
    return p.parse_block_text()


def parse_function(text, extended=True):
    """Parse a full function definition (signature + body).  Mainly a test /
    compatibility entry point; the decomp pipeline only needs the body."""
    p = Parser(tokenize(text), text, extended=extended)
    p.parse_decl_specifiers()
    # declarator name (qualified, optional stars / CC words)
    while True:
        if p.accept("*") or p.accept("&"):
            continue
        if p.peek().text in CC_WORDS:
            p.i += 1
            continue
        break
    p.expect_id()
    while p.accept("::"):
        p.expect_id()
    p.expect("(")
    if not p.at(")"):
        while True:
            if p.accept("..."):
                break
            p.parse_type_name()
            p.parse_abstract_declarator(allow_name=True)
            if not p.accept(","):
                break
    p.expect(")")
    body = p.parse_block_text()
    if p.peek().kind != "eof":
        raise ParseError("trailing: %r after body" % (p.peek().text,),
                         p.peek().text, p.peek().pos)
    return body
