#!/usr/bin/env python3
"""G42.30b v2: syntax-storm repair pack (agent gap-filling edition).

1. fix_c2511_align wrote cache-truth params verbatim -- IDA register
   annotations (`a1@<edi>`) and duplicated/zip-offset names reached decls
   (C2018/C2146/C3646 storms). Strip `@<...>`; merge `a1 a1`; keep the
   cache name in `Source a2` zip-offset slots.
2. IDA pseudo garbage -> 0: ``&Cls::`vftable'`` (incl. template classes),
   ``...`RTTI ...'`` variants, `` `typeinfo for'...``.
   v2 fixes (agent simulation): the old `@<`/backtick token gate silently
   skipped 110 files of dup-name sites; VTFT missed `<...>` template
   names; RTTI matched only one variant; .inc bodies never scanned.

Usage: [--apply]
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv

SEG = r'[A-Za-z_]\w*(?:<[^\'\n]*?>)?'
REG = re.compile(r'@<[^>]*>')
VTFT = re.compile(r'&?(?:' + SEG + r'::)+`vftable\'')
RTTI = re.compile(r'&?[\w:&<>\s]*`RTTI[^\']*\'')
TYPEINFO = re.compile(r'`typeinfo for\'[\w:<>]*')
DUPNAME = re.compile(r'\b([A-Za-z_]\w*)\s+\1\b(?=\s*[,)])')
# zip-offset slot (`declName aN`) -- the head token must NOT be a type word
# (else `int a2)` loses its type). v1 matched 34,871 legit params: guard.
TYPW = (r'void|int|char|unsigned|signed|short|long|float|double|bool|const|'
        r'struct|class|enum|union|__int64|wchar_t|size_t|_DWORD|_BYTE|'
        r'_WORD|_QWORD|u_int|u_char|u_short|uint8_t|uint16_t|uint32_t|'
        r'int8_t|int16_t|int32_t|FILE|HWND|HDC|HRESULT|DWORD|WORD|BYTE')
ZIPNAME = re.compile(r'\b(?!' + TYPW + r'\b)([A-Za-z_]\w*)\s+'
                     r'(a\d+|aP\d+)(?=\s*[,)])')

n_reg = n_vt = n_rtti = n_dup = n_zip = 0
SRC = ROOT / 'src'

# X11 (user ruling 2026-10-13): a vtable install is compiler-generated — it
# must never be rewritten to `= 0` (that silently zeroed real installs and is
# the historical source of `vfptr = 0` corruption). Standalone install
# statements are elided (marker comment) instead; mentions that are not part
# of a standalone statement are left in place (fail-loud; no silent zeroing).
import sys as _sys
_sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
try:
    from _vtelide import elide_vtable_install_lines as _elide_vt
except Exception:  # pragma: no cover
    _elide_vt = None

files = (list(SRC.rglob('*.cpp')) + list(SRC.rglob('*.hpp')) +
         list(SRC.rglob('*.h')) + list(SRC.rglob('*.inc')))
for p in files:
    try:
        txt = p.read_text(encoding='utf-8', errors='replace')
    except OSError:
        continue
    orig = txt
    txt, k = REG.subn('', txt)
    n_reg += k
    if _elide_vt is not None:
        txt, k2, _notes = _elide_vt(txt)
        n_vt += k2
    # remaining backtick vtable mentions (non-statement contexts) stay
    # untouched — zeroing them corrupted installs (I-corrupted class).
    txt, k = RTTI.subn('0', txt)
    n_rtti += k
    txt, k = TYPEINFO.subn('0', txt)
    n_rtti += k
    txt, k = DUPNAME.subn(r'\1', txt)
    n_dup += k
    txt, k = ZIPNAME.subn(r'\1', txt)
    n_zip += k
    if txt != orig and APPLY:
        p.write_text(txt, encoding='utf-8', errors='replace')

print('reg-anno: %d, `vftable\' elided: %d, RTTI: %d, dup-names: %d, zip: %d, '
      'files: %d %s' % (n_reg, n_vt, n_rtti, n_dup, n_zip, len(files),
                        '(written)' if APPLY else '(DRY)'))
