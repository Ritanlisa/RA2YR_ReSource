#!/usr/bin/env python3
"""X26: truth-ify residual IDA_-prefixed macro vocabulary in landed bodies.

The RC1 contract (tools/csp_export/_ida_vocab.py docstring) requires body
emitters to land CLEAN C++ -- "no IDA_* prefixed macro vocabulary".  The
regen path honours it, but bodies landed by the e4 materializer / earlier
waves still carry IDA_LODWORD / IDA_SWORD1 / IDA___PAIR64__ / qmemcpy ...
forms (C3861 fail-loud; 588 prefixed + 191 qmemcpy sites).

Scope discipline: ONLY the IDA_-prefixed spellings and qmemcpy are expanded.
Bare-name uses (LOBYTE/LOWORD/... ~4.3K) currently compile through the
missing_globals_compat.h macro definitions and are left for the T5 regen.

  - preprocessor lines are restored verbatim (never touch #define bodies);
  - string literals containing a vocabulary name make the file skip;
  - line count must be stable (inline expansion only);
  - ida_compat.h / missing_globals_compat.h excluded (they define vocab).
Idempotent; dry-run by default.

Usage: python tools/csp_export/_absorbed/step4_bodies/fix_e4_ida_vocab.py [--apply]
"""
import glob
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
import _ida_vocab as V  # noqa: E402

APPLY = '--apply' in sys.argv
VOCAB = re.compile(
    r'\bIDA_(BYTE[0-8]|WORD[0-7]|LOWORD|HIWORD|LOBYTE|HIBYTE|LODWORD|'
    r'HIDWORD|SHIWORD|SLOBYTE|SHLOBYTE|SLODWORD|SHIDWORD|SWORD[0-3]|SWWORD|'
    r'__PAIR16__|__PAIR32__|__PAIR64__|__SPAIR64__)\s*\(')
QMEM = re.compile(r'\bqmemcpy\s*\(')
IN_STRING = re.compile(r'"[^"\n]*\b(?:LODWORD|HIDWORD|LOBYTE|HIBYTE|LOWORD|'
                       r'HIWORD|SWORD[0-9]|SLODWORD|SLOBYTE|SHIWORD|SHIDWORD|'
                       r'BYTE[0-9]|WORD[0-9]|qmemcpy|__PAIR[0-9]+__)\b')

_PREF1 = re.compile(r'\bIDA_(' + '|'.join(sorted(V._BITFIELD1,
                                                 key=len, reverse=True)) + r')\s*\(')
_PREF2 = re.compile(r'\bIDA_(' + '|'.join(sorted(V._PAIR,
                                                 key=len, reverse=True)) + r')\s*\(')


def truthify_prefixed(code):
    o1, o2 = V._NAME1_RE, V._NAME2_RE
    try:
        V._NAME1_RE, V._NAME2_RE = _PREF1, _PREF2
        code = V.expand_bitfields(code)
    finally:
        V._NAME1_RE, V._NAME2_RE = o1, o2
    code = V.rewrite_qmemcpy(code)
    return code


def main():
    n_files = n_hits = 0
    skipped = []
    files = (sorted(glob.glob('src/**/*.cpp', recursive=True))
             + sorted(glob.glob('src/**/*.hpp', recursive=True))
             + sorted(glob.glob('src/**/*.h', recursive=True)))
    for fp in files:
        rel = fp.replace('\\', '/')
        if rel.endswith('ida_compat.h') or 'missing_globals_compat' in rel:
            continue
        p = Path(fp)
        try:
            text = p.read_text(encoding='utf-8', errors='replace')
        except OSError:
            continue
        hits = len(VOCAB.findall(text)) + len(QMEM.findall(text))
        if not hits:
            continue
        if IN_STRING.search(text):
            skipped.append(rel)
            continue
        new = truthify_prefixed(text)
        if new == text:
            continue
        ol = text.split('\n')
        nl = new.split('\n')
        if len(ol) != len(nl):
            skipped.append(rel + ' (line-count drift)')
            continue
        for i in range(len(ol)):
            if ol[i].lstrip().startswith('#') and ol[i] != nl[i]:
                nl[i] = ol[i]
        out = '\n'.join(nl)
        if out == text:
            continue
        n_files += 1
        n_hits += hits
        if APPLY:
            p.write_text(out, encoding='utf-8')
    suffix = '(written)' if APPLY else '(DRY)'
    print(f'vocab files rewritten: {n_files} ({n_hits} prefixed/qmemcpy hits) {suffix}')
    if skipped:
        print('SKIPPED (fail loud):')
        for s in skipped:
            print('  ', s)


if __name__ == '__main__':
    main()
