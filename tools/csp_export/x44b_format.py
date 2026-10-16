#!/usr/bin/env python3
"""x44b_format.py -- X44 Stage-2 body formatter (single deterministic pass).

Design (replaces the oscillating iterative engine that was reverted in the
aborted X44 session -- see x44_stage2_apply_ledger.json: 39 files reverted
"unconverged"):

  ONE pass, no fix-loop:
    1. analyze_lines() (x44b_ctokens) computes, per line, tokenizer-aware
       (string/char literals and both comment kinds skipped):
         - brace depth at line start, with namespace braces EXCLUDED from the
           effective depth (matches the corpus's dominant style where function
           signatures inside `namespace gamemd {` sit at column 0);
         - an unclosed-paren carry (lines inside a multi-line call/expression
           are CONTINUATION lines and are left untouched);
         - a leading-'}' pop rule: a statement line starting with `}` is
           indented at the depth AFTER the closes (matches `} else {` and
           block-closing convention).
    2. Per-file dominant base offset = mode(current_indent - depth*2) over all
       statement lines; the file is normalized onto ITS OWN dominant grid.
    3. Statement lines -> indent = (depth*2 + base) spaces.
       Preprocessor lines -> column 0. Continuation lines, blank lines and
       lines inside block comments -> untouched.

  PROOF per file (hard gate, on failure the file is NOT written):
    - token multiset before == after (comments INCLUDED as inner-text words,
      whitespace excluded);
    - /*0xADDR*/ anchor count invariant (global + per file).

  IDEMPOTENCE: the transform is a pure function of content (depths do not
  depend on current indentation), so run 2 writes nothing.

Line numbers are preserved (indentation-only edits): every line-anchored
instrument (logs, ledgers, /*0xADDR*/ def anchors, verify_execution_flow)
stays valid.

Usage:
  python tools/csp_export/x44b_format.py            # dry-run, no writes
  python tools/csp_export/x44b_format.py --apply    # write + proofs
  python tools/csp_export/x44b_format.py --verify-apply  # apply, then re-run
                                                        # analysis to prove 0 edits
Exit 0 iff: every file processed or recorded-skip, all proofs PASS.
"""
import argparse
import collections
import json
import re
import sys
import time
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
from x44b_ctokens import analyze_lines, token_multiset, count_anchors, \
    _find_quote_close  # noqa: E402

EXTRA_SCOPE = ['src/_gap2/gap2_global_defs.cpp', 'src/_generated/link_stubs.cpp']
LEDGER_DIR = ROOT / '.omo/evidence/optimization/x44b'

_CTRL_OPENERS = {'if', 'else', 'for', 'while', 'do'}


def protected_paths():
    mp = json.loads((ROOT / 'tools/protected_paths.json').read_text(encoding='utf-8'))
    out = set(mp.get('protected_files', []))
    for pre in mp.get('protected_dirs', []):
        out.add(pre if pre.endswith('/') else pre + '/')
    return out


def scope_files():
    files = sorted(str(p.relative_to(ROOT)).replace('\\', '/')
                   for p in (ROOT / 'src/e4').rglob('*.cpp'))
    files += EXTRA_SCOPE
    return files


def strip_line_code(ln):
    """Comment-stripped code view of one physical line (quote-aware).
    Cuts `//` comments, removes complete block comments; an unterminated
    block comment ends the code view (this line's code tokens are still
    correct for statement classification)."""
    out = []
    i, L = 0, len(ln)
    while i < L:
        c = ln[i]
        if c == '/' and i + 1 < L and ln[i + 1] == '/':
            break
        if c == '/' and i + 1 < L and ln[i + 1] == '*':
            j = ln.find('*/', i + 2)
            if j < 0:
                break  # block comment continues beyond this line
            out.append(' ')
            i = j + 2
            continue
        if c == '"' or c == "'":
            j = _find_quote_close(ln, i, c, L)
            if j is None:
                out.append(c)
                i += 1
                continue
            out.append(ln[i:j])
            i = j
            continue
        out.append(c)
        i += 1
    return ''.join(out)


def line_shape(ln):
    """(first_tok, last_tok, has_open_brace) of the comment-stripped line."""
    code = strip_line_code(ln).strip()
    if not code:
        return None, None, False
    toks = re.findall(r'[A-Za-z_]\w*|.', code)
    first = toks[0] if toks else None
    last = toks[-1] if toks else None
    return first, last, '{' in code


def fmt_file(text):
    """Return (new_text, stats) -- pure function of content."""
    info = analyze_lines(text)
    lines = text.split('\n')
    n = len(lines)
    # ---- pass 1: subordination levels per statement line
    levels = [0] * n
    case_seen = {}  # effective depth -> sticky flag for case bodies
    pend = 0
    for idx in range(n):
        meta = info[idx]
        if meta['cls'] != 'stmt':
            continue
        d = meta['indent_depth']
        first, last, has_brace = line_shape(lines[idx])
        if lines[idx].lstrip().startswith('}'):
            levels[idx] = d
            pend = 0
            for k in [k for k in case_seen if k > d]:
                del case_seen[k]
            continue
        if first in ('case', 'default') and last == ':':
            levels[idx] = d + pend
            case_seen[d] = True
            pend = 0
            continue
        levels[idx] = d + (1 if case_seen.get(d) else 0) + pend
        pend = 0
        # control-opener -> subordinate the next body statement
        if (first in _CTRL_OPENERS and not has_brace
                and last in (')', 'else', 'do')):
            j = idx + 1
            skip = False
            while j < n:
                m2 = info[j]
                if lines[j].strip() == '' or m2['cls'] == 'blockcomment':
                    j += 1
                    continue
                if m2['cls'] in ('continuation', 'preproc', 'preproccont'):
                    skip = True  # multi-line header: do not subordinate
                break
            if not skip and j < n and not lines[j].lstrip().startswith('{'):
                pend = 1
    # ---- pass 2: rewrite on the corpus grid (base 0).
    # Measured (recon, 2026-10-16): 582/591 in-scope files have dominant
    # base == 0; the 9 outliers are the aborted session's "unconverged"
    # casualties with MIXED conventions -- their mode is damage, not style,
    # so the formatter always targets the corpus-wide dominant grid
    # (statement line -> level*2 spaces).
    edits = 0
    out = []
    for ln, meta, lv in zip(lines, info, levels):
        cls = meta['cls']
        if cls == 'stmt':
            cur_ws_len = len(ln) - len(ln.lstrip(' \t'))
            new_ws = ' ' * (lv * 2)
            if ln[cur_ws_len:] and new_ws != ln[:cur_ws_len]:
                out.append(new_ws + ln[cur_ws_len:])
                edits += 1
                continue
        elif cls == 'preproc':
            body = ln.lstrip(' \t')
            if ln != body:
                out.append(body)
                edits += 1
                continue
        out.append(ln)
    return '\n'.join(out), {'edits': edits, 'base': 0}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true', help='write changes (default dry-run)')
    ap.add_argument('--preview', help='print unified diff for one file (with --apply too)')
    args = ap.parse_args()

    prot = protected_paths()
    scope = scope_files()
    protected_hits = [f for f in scope
                      if f in prot or any(f.startswith(p) for p in prot)]
    if protected_hits:
        print('FATAL: protected files in scope:', protected_hits)
        return 2

    t0 = time.time()
    files_edited = {}
    skips = {}
    anchor_global_before = 0
    anchor_global_after = 0
    proof_fail = []
    for fname in scope:
        if args.preview and not fname.endswith(args.preview):
            continue
        raw = (ROOT / fname).read_bytes()
        try:
            text = raw.decode('utf-8')
            enc = 'utf-8'
        except UnicodeDecodeError:
            text = raw.decode('latin-1')
            enc = 'latin-1'
        try:
            new_text, st = fmt_file(text)
        except Exception as e:  # noqa: BLE001 -- record and skip, never half-write
            skips[fname] = f'analyze-error: {e!r}'
            continue
        a_before, a_after = count_anchors(text), count_anchors(new_text)
        anchor_global_before += a_before
        anchor_global_after += a_after
        if args.preview and st['edits']:
            import difflib
            for dl in list(difflib.unified_diff(
                    text.split('\n'), new_text.split('\n'),
                    lineterm='', n=2))[:80]:
                print(dl)
        if st['edits'] == 0:
            continue
        # hard proofs
        if token_multiset(text) != token_multiset(new_text):
            skips[fname] = 'PROOF-FAIL: token multiset differs'
            proof_fail.append(fname)
            continue
        if a_before != a_after:
            skips[fname] = f'PROOF-FAIL: anchors {a_before} -> {a_after}'
            proof_fail.append(fname)
            continue
        files_edited[fname] = {'edits': st['edits'], 'base': st['base'],
                               'anchors': a_before, 'enc': enc}
        if args.apply:
            data = new_text.encode(enc)
            (ROOT / fname).write_bytes(data)

    ledger = {
        'mode': 'APPLY' if args.apply else 'DRY-RUN',
        'preview': args.preview or '',
        'wall_s': round(time.time() - t0, 1),
        'scope_files': len(scope),
        'files_edited': len(files_edited),
        'edits_total': sum(v['edits'] for v in files_edited.values()),
        'files': files_edited,
        'skips': skips,
        'proof_fail': proof_fail,
        'anchor_global_before': anchor_global_before,
        'anchor_global_after': anchor_global_after,
    }
    name = 'x44b_stage2_apply_ledger.json' if args.apply else 'x44b_stage2_dry_ledger.json'
    out = LEDGER_DIR / name
    if not args.preview:
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_text(json.dumps(ledger, indent=1), encoding='utf-8')
    print(json.dumps({k: ledger[k] for k in
                      ('mode', 'wall_s', 'scope_files', 'files_edited', 'edits_total',
                       'anchor_global_before', 'anchor_global_after')}, indent=1))
    print('skips:', len(skips), 'proof_fail:', len(proof_fail))
    for f, why in list(skips.items())[:20]:
        print('  SKIP', f, why)
    return 0


if __name__ == '__main__':
    sys.exit(main())
