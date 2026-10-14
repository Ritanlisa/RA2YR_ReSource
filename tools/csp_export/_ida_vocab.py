#!/usr/bin/env python3
"""Shared IDA-pseudocode vocabulary rewriter (RC1 generator output contract).

RC1 ruling (plan project-optimization.md #8): body emitters must land CLEAN
C++ -- no IDA_* prefixed macro vocabulary, no silent prefixing.  Every IDA
pseudocode construct is either

  truth-ified here  -- expanded inline to width-exact C++ (bit-extraction
                       family, __PAIR*__ assembly, qmemcpy), or
  refused           -- reported to the caller as unresolvable (MEMORY[0x..]
                       absolute addressing, JUMPOUT cross-function tails,
                       __CFSHL__/__CFSHR__/__OFS__/__CF__ flag reads whose
                       operands are unrecoverable from the expression text).

Expansions replicate the semantics of the (now shrunk) src/core/ida_compat.h
definitions verbatim; they are lvalues where IDA allows lvalues.

Library module (step-pipeline internal, `_`-prefixed per the step1-5 target
architecture); consumers: regen_bodies_from_export.py,
supply_missing_bodies.py.
"""
import re

# --------------------------------------------------------------------------
# operator new/delete: MSVC-decorated forms emitted raw by the typed export
DEC_NEWDEL_RE = re.compile(r'\b__(2_YAPAXI_Z|3_YAXPAX_Z)\s*\(')


def _find_close(text, open_idx):
    """Index of the paren matching text[open_idx] (which must be '(')."""
    depth = 0
    for i in range(open_idx, len(text)):
        c = text[i]
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
            if depth == 0:
                return i
    return -1


def dec_newdel(code):
    """__2_YAPAXI_Z(n) -> operator new(n); __3_YAXPAX_Z(p) ->
    operator delete((void *)(p)).  (The delete cast shape keeps int-global
    args compiling -- G42.35a precedent.)"""
    out = []
    i = 0
    while True:
        m = DEC_NEWDEL_RE.search(code, i)
        if not m:
            out.append(code[i:])
            break
        open_idx = code.index('(', m.end() - 1)
        close = _find_close(code, open_idx)
        if close < 0:
            out.append(code[i:])
            break
        arg = code[open_idx + 1:close]
        if m.group(1).startswith('2_'):
            out.append(code[i:m.start()])
            out.append('operator new(%s)' % arg)
        else:
            out.append(code[i:m.start()])
            out.append('operator delete((void *)(%s))' % arg)
        i = close + 1
    return ''.join(out)


# --------------------------------------------------------------------------
# `#NNN` opaque type ids emitted by the export for unnamed struct types
TYPE_ID = re.compile(r'([ \s(\*&<>,]|^)#(\d+)')


def type_ids(code):
    return TYPE_ID.sub(lambda m: m.group(1) + 'void', code)


# --------------------------------------------------------------------------
# bit-extraction family: name -> single-arg expansion template ({x} = arg)
_BITFIELD1 = {
    'BYTE0':        '(((unsigned char *)&({x}))[0])',
    'BYTE1':        '(((unsigned char *)&({x}))[1])',
    'BYTE2':        '(((unsigned char *)&({x}))[2])',
    'BYTE3':        '(((unsigned char *)&({x}))[3])',
    'BYTE4':        '(((unsigned char *)&({x}))[4])',
    'BYTE5':        '(((unsigned char *)&({x}))[5])',
    'BYTE6':        '(((unsigned char *)&({x}))[6])',
    'BYTE7':        '(((unsigned char *)&({x}))[7])',
    'BYTE8':        '(((unsigned char *)&({x}))[8])',
    'WORD0':        '(((unsigned short *)&({x}))[0])',
    'WORD1':        '(((unsigned short *)&({x}))[1])',
    'WORD2':        '(((unsigned short *)&({x}))[2])',
    'WORD3':        '(((unsigned short *)&({x}))[3])',
    'WORD4':        '(((unsigned short *)&({x}))[4])',
    'WORD5':        '(((unsigned short *)&({x}))[5])',
    'WORD6':        '(((unsigned short *)&({x}))[6])',
    'WORD7':        '(((unsigned short *)&({x}))[7])',
    'LOBYTE':       '(*((unsigned char *)&({x})))',
    'SLOBYTE':      '(*((signed char *)&({x})))',
    'LOWORD':       '(*((unsigned short *)&({x})))',
    'SLOWORD':      '(*((signed short *)&({x})))',
    'LODWORD':      '(*((unsigned int *)&({x})))',
    'SLODWORD':     '(*((signed int *)&({x})))',
    'HIBYTE':       '(*(((unsigned char *)&({x})) + (sizeof({x}) - 1)))',
    'SHIBYTE':      '(*(((signed char *)&({x})) + (sizeof({x}) - 1)))',
    'SHLOBYTE':     '(*((signed char *)(((unsigned char *)&({x})) + 1)))',
    'HIWORD':       '(*(((unsigned short *)&({x})) + 1))',
    'SHIWORD':      '(*((signed short *)(((unsigned char *)&({x})) + 2)))',
    'HIDWORD':      '(*(((unsigned int *)&({x})) + 1))',
    'SHIDWORD':     '(*((signed int *)(((unsigned char *)&({x})) + 4)))',
    'SWORD0':       '(*((signed short *)&({x})))',
    'SWORD1':       '(*((signed short *)(((unsigned char *)&({x})) + 2)))',
    'SWORD2':       '(*((signed short *)(((unsigned char *)&({x})) + 4)))',
    'SWORD3':       '(*((signed short *)(((unsigned char *)&({x})) + 6)))',
    'SWWORD':       '(*((signed short *)&({x})))',
    'SBYTE1':       '(*(((signed char *)&({x})) + 1))',
    'SBYTE2':       '(*(((signed char *)&({x})) + 2))',
    'SBYTE3':       '(*(((signed char *)&({x})) + 3))',
    'DWORD1':       '(((unsigned int *)&({x}))[1])',
    'DWORD2':       '(((unsigned int *)&({x}))[2])',
}

# two-arg assembly macros: __PAIRxx__(high, low) -> width-exact expression
_PAIR = {
    '__PAIR64__':   ('(((unsigned long)(unsigned int)({l})) | '
                     '((unsigned long)(unsigned int)({h}) << 32))'),
    '__PAIR32__':   ('(((unsigned int)(unsigned short)({l})) | '
                     '((unsigned int)(unsigned short)({h}) << 16))'),
    '__PAIR16__':   ('(((unsigned short)(unsigned char)({l})) | '
                     '((unsigned short)(unsigned char)({h}) << 8))'),
    '__SPAIR64__':  ('((long)(((unsigned long)(unsigned int)({h}) << 32) | '
                     '(unsigned int)({l})))'),
}

_NAME1_RE = re.compile(
    r'\b(?:IDA_)?(' + '|'.join(sorted(_BITFIELD1, key=len, reverse=True)) + r')\s*\(')
_NAME2_RE = re.compile(
    r'\b(?:IDA_)?(' + '|'.join(sorted(_PAIR, key=len, reverse=True)) + r')\s*\(')
# X26: the IDA_-prefixed spellings (IDA_LODWORD / IDA___PAIR64__ ...) are the
# SAME vocabulary the RC1 contract requires to be truth-ified -- the old
# regexes skipped them (preceded by `_`), so landed bodies carrying them
# stayed C3861 fail-loud forever.  The optional IDA_ prefix consumes the
# prefix into the match so `\b` still anchors at the identifier start.


def _split_top_args(s):
    """Split a macro argument string on top-level commas."""
    args, depth, last = [], 0, 0
    for i, c in enumerate(s):
        if c in '([':
            depth += 1
        elif c in ')]':
            depth -= 1
        elif c == ',' and depth == 0:
            args.append(s[last:i])
            last = i + 1
    args.append(s[last:])
    return args


def _expand_once(code):
    """One expansion pass. Returns (new_code, n_expanded)."""
    out = []
    n = 0
    i = 0
    while True:
        m1 = _NAME1_RE.search(code, i)
        m2 = _NAME2_RE.search(code, i)
        # take the earliest match of either family
        if m1 and (not m2 or m1.start() <= m2.start()):
            m, single = m1, True
        elif m2:
            m, single = m2, False
        else:
            out.append(code[i:])
            break
        if m.start() > 0:
            prev = code[m.start() - 1]
            if prev.isalnum() or prev in '_.' or \
                    (prev == '>' and m.start() > 1 and code[m.start() - 2] == '-'):
                # part of a longer identifier or a member access
                # (e.g. IDA_LOWORD after a partial pass, or obj->Name(): the
                # macro never follows a member-access operator)
                out.append(code[i:m.end()])
                i = m.end()
                continue
        open_idx = code.index('(', m.end() - 1)
        close = _find_close(code, open_idx)
        if close < 0:                      # unbalanced: refuse downstream
            out.append(code[i:m.end()])
            i = m.end()
            continue
        argstr = code[open_idx + 1:close]
        if single:
            tmpl = _BITFIELD1[m.group(1)]
            repl = tmpl.replace('{x}', argstr.strip())
        else:
            args = [a.strip() for a in _split_top_args(argstr)]
            if len(args) != 2:
                out.append(code[i:close + 1])
                i = close + 1
                continue
            tmpl = _PAIR[m.group(1)]
            repl = tmpl.replace('{h}', args[0]).replace('{l}', args[1])
        out.append(code[i:m.start()])
        out.append(repl)
        n += 1
        i = close + 1
    return ''.join(out), n


def expand_bitfields(code, max_passes=12):
    """Expand all bitfield-extraction / PAIR macros to inline width-exact C++.
    Iterates to fixpoint (arguments may themselves contain macros)."""
    for _ in range(max_passes):
        code, n = _expand_once(code)
        if not n:
            break
    return code


def rewrite_qmemcpy(code):
    """qmemcpy(dst, src, n) -> memcpy(dst, src, n) (identical semantics)."""
    return re.sub(r'\bqmemcpy\s*\(', 'memcpy(', code)


# --------------------------------------------------------------------------
# refusal patterns: constructs the generator cannot truth-ify.  A function
# whose pseudocode contains any of these must NOT be landed -- it is reported
# unresolved and the previous body is kept.
REFUSE_PATTERNS = {
    'MEMORY[':      re.compile(r'\bMEMORY\s*\['),
    'JUMPOUT(':     re.compile(r'\bJUMPOUT\s*\('),
    '__CFSHL__(':   re.compile(r'\b__CFSHL__\s*\('),
    '__CFSHR__(':   re.compile(r'\b__CFSHR__\s*\('),
    '__OFS__(':     re.compile(r'\b__OFS__\s*\('),
    '__CF__(':      re.compile(r'\b__CF__\s*\('),
}


def find_refusals(code):
    """{pattern: occurrence_count} for untruth-ifiable constructs present
    in `code`. Empty dict = landable."""
    found = {}
    for name, rx in REFUSE_PATTERNS.items():
        n = len(rx.findall(code))
        if n:
            found[name] = n
    return found


# --------------------------------------------------------------------------
def truthify(code):
    """Full RC1 body transform: new/delete, bitfield/PAIR expansion,
    qmemcpy.  Returns the clean body text (refusal detection is the
    caller's job via find_refusals, on the PRE-expansion text -- MEMORY[
    etc. survive expansion untouched, so post-expansion works too)."""
    code = dec_newdel(code)
    code = expand_bitfields(code)
    code = rewrite_qmemcpy(code)
    return code
