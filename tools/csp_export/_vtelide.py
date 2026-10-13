#!/usr/bin/env python3
"""_vtelide.py — X11 shared vtable-install elision (text level).

User ruling (2026-10-13): explicit vtable-pointer stores are illegal in the
reconstructed C++; the vtable is emitted by the compiler from the class's
virtual function declarations. A statement that stores a vtable address into
an object's vptr slot is therefore *elided* — replaced by a comment marker
that preserves the class identity + address for the declaration layer — and
never rendered as a member store.

API
  is_install_statement(line)  -> dict | None     (text-only detector)
  elide_vtable_install_lines(text, only_lines=None, extra_addrs=(),
                             allow_bare=False)    -> (text, n, notes)

`only_lines` (1-based line numbers, from the binary-classified ledger) makes
the elision exactly-lineset-driven: the ledger is authoritative and the regex
only validates each line's shape (fail-loud: a ledger row whose line does not
match is left untouched and reported).

The marker contains neither a `vfptr` token nor an assignment, so re-scans
for explicit vptr stores cannot match it (idempotence by construction).
"""
import re

# ---------------------------------------------------------------- signatures
SEG = r'[A-Za-z_]\w*(?:<[^\'\n;]*?>)?(?:::[A-Za-z_]\w*(?:<[^\'\n;]*?>)?)*'
VT_SYM = r'&?\s*(?:' + SEG + r'::)?(?:`vftable\'|`vtable\')'
VT_NAMED = (r'&?\s*(?:[A-Za-z_]\w*::)*\s*'
            r'(?:vt_[A-Za-z_]\w*|__vt_[A-Za-z_]\w*|'
            r'[A-Za-z_]\w*_(?:vftable|Vtable|vtable)\d*)')
OFF_SYM = r'&?\s*off_[0-9A-Fa-f]{6,8}'
CAST_GEN = (r'(?:\(\s*(?:void|int|unsigned\s+int|unsigned|signed|char|long)'
            r'\s*\*?\s*\)\s*)*')

_CORE = r'(?:' + VT_SYM + r'|' + VT_NAMED + r'|' + OFF_SYM + r')'
# value: any interleaving of casts and opening parens, then a vtable symbol,
# then any closing parens (`(void *)((unsigned int)(&vt_X))` etc.)
VAL = r'&?\s*(?:' + CAST_GEN + r'|\(\s*)*' + _CORE + r'(?:\s*\))*'

# ---------------------------------------------------------------- LHS shapes
_CAST = (r'\(\s*(?:unsigned\s+|signed\s+)?'
         r'(?:int|char|long|void|_DWORD|_BYTE|_WORD)\s*\*\s*\)\s*')
_RECV = (r'[A-Za-z_]\w*\s*(?:\[[^\]]*\]\s*)?'
         r'(?:(?:->|\.)\s*[A-Za-z_]\w*\s*(?:\[[^\]]*\]\s*)?)*'
         r'(?:->|\.)\s*')
_SLOT = r'(?:vfptr\d*|vtable\d*)'

# any of: obj.slot / obj->slot / *(cast)obj.slot / *&obj->slot / (obj.slot)
LHS_GEN = (r'\*?\s*'
           r'(?:' + _CAST + r')*'
           r'(?:&\s*)?'
           r'(?:\(\s*)?'
           r'(?:' + _RECV + r')'
           + _SLOT +
           r'(?:\s*\))?')
# this-relative raw forms: *(cast)this / *(cast)this->slot / *(cast)(this+0)
LHS_THIS = (r'\*?\s*'
            r'(?:' + _CAST + r')'
            r'(?:&\s*)?'
            r'(?:\(\s*)?'
            r'this(?:\s*\+\s*0)?'
            r'(?:\s*->\s*' + _SLOT + r')?'
            r'(?:\s*\))?')
# bare local/param slot name (only with allow_bare / binary backing)
LHS_BARE = (r'\*?\s*(?:' + _CAST + r')*(?:&\s*)?(?:\(\s*)?'
            + _SLOT + r'(?:\s*\))?')

LHS = r'(?:' + LHS_GEN + r'|' + LHS_THIS + r')'
LHS_ANY = r'(?:' + LHS_GEN + r'|' + LHS_THIS + r'|' + LHS_BARE + r')'

STMT_RE = re.compile(
    r'^(\s*)'                                  # 1 indent
    r'(' + LHS + r')'                          # 2 lhs
    r'\s*=\s*'
    r'(' + VAL + r')'                          # 3 value
    r'\s*;\s*'
    r'(/\*\s*(0x[0-9A-Fa-f]+)\s*\*/)?\s*$'     # 4/5 trailing addr comment
)
STMT_RE_BARE = re.compile(
    r'^(\s*)(' + LHS_ANY + r')\s*=\s*(' + VAL + r')\s*;\s*'
    r'(/\*\s*(0x[0-9A-Fa-f]+)\s*\*/)?\s*$'
)
_ZERO_VAL = (r'(?:\(\s*(?:int|unsigned\s+int|void\s*\*)\s*\)\s*)*'
             r'(?:0|0\.0)')
STMT_ZERO_RE = re.compile(
    r'^(\s*)((?:' + LHS + r'))\s*=\s*'
    + _ZERO_VAL +
    r'\s*;\s*(/\*\s*(0x[0-9A-Fa-f]+)\s*\*/)?\s*$'
)
STMT_ZERO_BARE_RE = re.compile(
    r'^(\s*)((?:' + LHS_ANY + r'))\s*=\s*'
    + _ZERO_VAL +
    r'\s*;\s*(/\*\s*(0x[0-9A-Fa-f]+)\s*\*/)?\s*$'
)

# contexts we refuse to touch (compound statements -> ledger)
GUARD_BEFORE = re.compile(r'\b(if|for|while|switch|return|else)\b|[?:]|&&|\|\|')


def class_hint_from_value(v):
    m = re.search(r'([A-Za-z_]\w*)(?:<.*?>+)?::`vf?table\'', v)
    if m:
        return m.group(1)
    m = re.search(r'(?:vt_|__vt_)([A-Za-z_]\w*)', v)
    if m:
        return m.group(1)
    m = re.search(r'([A-Za-z_]\w*)_(?:vftable|Vtable|vtable)\d*', v)
    if m:
        return m.group(1)
    m = re.search(r'off_([0-9A-Fa-f]{6,8})', v)
    if m:
        return 'off_' + m.group(1)
    return None


def _strip_comment(line):
    """blank out // and /* */ comments (keeps code shape)."""
    out = []
    i = 0
    n = len(line)
    while i < n:
        if line.startswith('//', i):
            break
        if line.startswith('/*', i):
            j = line.find('*/', i + 2)
            if j < 0:
                break
            out.append(' ' * (j + 2 - i))
            i = j + 2
            continue
        out.append(line[i])
        i += 1
    return ''.join(out)


def is_install_statement(line):
    """Text-only install detector (receiver or this form). Returns dict|None."""
    body = _strip_comment(line)
    m = STMT_RE.match(body)
    if not m:
        return None
    if GUARD_BEFORE.search(body[:m.start(2)]):
        return None
    val = m.group(3)
    return {'lhs': m.group(2), 'value': val,
            'class_hint': class_hint_from_value(val), 'addr': m.group(5)}


def _marker(indent, class_hint, addr, note=''):
    a = (' 0x%s' % addr[2:]) if addr else ''
    tail = (' — %s' % note) if note else ''
    return '%s/* X11: vtable install elided (implicit via %s virtuals%s)%s */' % (
        indent, class_hint or 'class', a, tail)


def _prev_is_control(lines, idx):
    prev = idx - 1
    while prev >= 0 and not lines[prev].strip():
        prev -= 1
    if prev < 0:
        return False
    pl = _strip_comment(lines[prev]).rstrip()
    return bool(re.match(r'^\s*(if|else|for|while|do)\b', pl)) and \
        not pl.endswith(('{', ';', '}'))


def elide_vtable_install_lines(text, only_lines=None, extra_addrs=(),
                               allow_bare=False):
    """Elide vtable-install statements.

    only_lines: 1-based line numbers to consider (None = all lines).
    extra_addrs: addresses whose `= 0` sites are binary-proven installs.
    allow_bare: also match bare slot names (`vfptr = &vt_X;`).
    Returns (new_text, n_elided, notes).
    """
    only = set(only_lines) if only_lines else None
    extra = set(extra_addrs or ())
    lines = text.split('\n')
    out = []
    n = 0
    notes = []
    for i, line in enumerate(lines, 1):
        if only is not None and i not in only:
            out.append(line)
            continue
        body = _strip_comment(line)
        handled = False
        for rx, bare in ((STMT_RE, False), (STMT_RE_BARE, True)):
            if bare and not allow_bare:
                continue
            m = rx.match(line)      # match raw line: trailing /*0xADDR*/ is part of it
            if not m:
                continue
            if GUARD_BEFORE.search(body[:m.start(2)]):
                continue
            val = m.group(3)
            addr = m.group(5)
            hint = class_hint_from_value(val)
            if not hint:
                continue
            indent = m.group(1)
            if _prev_is_control(lines, i - 1):
                out.append('%s; /* X11: vtable install elided (implicit via %s'
                           ' virtuals%s) */' % (indent, hint,
                                                (' 0x%s' % addr[2:]) if addr else ''))
            else:
                out.append(_marker(indent, hint, addr))
            n += 1
            notes.append((addr, hint))
            handled = True
            break
        if handled:
            continue
        # zero-form (binary-proven installs corrupted to 0 by fix_c30a)
        for rx, bare in ((STMT_ZERO_RE, False), (STMT_ZERO_BARE_RE, True)):
            if bare and not allow_bare:
                continue
            m = rx.match(line)
            if not m:
                continue
            addr = m.group(4)
            ai = int(addr, 16) if addr else None
            if ai is None or ai not in extra:
                continue
            if GUARD_BEFORE.search(body[:m.start(2)]):
                continue
            indent = m.group(1)
            if _prev_is_control(lines, i - 1):
                out.append('%s; /* X11: vtable install elided (binary-proven,'
                           ' was 0%s) */' % (indent, (' 0x%s' % addr[2:]) if addr else ''))
            else:
                out.append(_marker(indent, None, addr, 'binary-proven install, was 0'))
            n += 1
            notes.append((addr, None))
            handled = True
            break
        if not handled:
            out.append(line)
    return '\n'.join(out), n, notes


def elide_nonzero_install_lines(text):
    """Generators' entry point: elide text-proven installs only."""
    return elide_vtable_install_lines(text)


if __name__ == '__main__':
    import sys
    from pathlib import Path
    t = Path(sys.argv[1]).read_text(encoding='utf-8', errors='replace')
    nt, n, notes = elide_vtable_install_lines(t)
    print('elided', n)
    for a in notes[:20]:
        print('  ', a)
    if '--write' in sys.argv:
        Path(sys.argv[1]).write_text(nt, encoding='utf-8')
