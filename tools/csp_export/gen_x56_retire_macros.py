"""X56 tree pass: retire IDA decompiler macro vocabulary with real constructs.

Dry-run by default; --apply writes; second run writes 0 files (idempotent).
Per-site ledger -> .omo/evidence/optimization/x56/ledger_<batch>.jsonl.

Rules shared with the regen emitter: tools/csp_export/_ida_macro_retire.py
(fix-at-generator contract; _ida_vocab.py imports the same read/write forms).

Usage:
  python tools/csp_export/gen_x56_retire_macros.py                 # dry, all
  python tools/csp_export/gen_x56_retire_macros.py --families pair  # dry b1
  python tools/csp_export/gen_x56_retire_macros.py --families pair --apply
"""
from __future__ import annotations

import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
import _ida_macro_retire  # noqa: E402
from _ida_macro_retire import (  # noqa: E402
    FAMILY, Scan, balanced_paren, read_form, write_form, pair_form,
    resolve_operand_width, W64, W32, W16, W8, WPTR, WUNK, WDBL, WFLT,
)

OUTDIR = ROOT / '.omo' / 'evidence' / 'optimization' / 'x56'

BATCHES = {
    'pair':   ['__PAIR64__', '__PAIR32__', '__SPAIR64__'],
    'rot':    ['__ROL4__', '__ROL8__', '__ROR4__', '__ROR8__',
               '__CFADD__', '__OFSUB__'],
    'dword':  ['LODWORD', 'SLODWORD', 'HIDWORD', 'SHIDWORD', 'DWORD1', 'DWORD2'],
    'word':   ['LOWORD', 'SLOWORD', 'HIWORD', 'SHIWORD',
               'WORD1', 'SWORD1', 'WORD2', 'SWORD2', 'SWORD3'],
    'byte':   ['LOBYTE', 'SLOBYTE', 'BYTE1', 'SBYTE1', 'BYTE2', 'SBYTE2',
               'BYTE3', 'BYTE4'],
    'hibyte': ['HIBYTE', 'SHIBYTE'],
}
ALL_MACROS = [m for v in BATCHES.values() for m in v]
RETIRE_FAMILY_MACROS = ALL_MACROS
_TOKEN_RE = re.compile(
    r'\b(IDA_)?(' + '|'.join(sorted(ALL_MACROS, key=len, reverse=True)) + r')\s*\(')

# REVERSE-protected + shim headers are never edited
PROTECT = (
    'injectFunctionTest/', 'src/core/reverse_marker.hpp', 'functionComparison.md',
    'src/core/ida_compat.h', 'src/core/missing_globals_compat.h',
    'src/core/ida_vtables.h', 'tools/', '.omo/',
)
EXTS = ('.cpp', '.hpp', '.h', '.inc')


def iter_targets():
    for base in (ROOT / 'src',):
        for p in base.rglob('*'):
            if p.suffix in EXTS and p.is_file():
                rel = p.relative_to(ROOT).as_posix()
                if any(rel.startswith(t) or rel == t for t in PROTECT):
                    continue
                yield p, rel


_MEMBER_CHAIN_RE = re.compile(
    r'[A-Za-z_]\w*(?:\s*\[[^\]]*\])*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*(?:\s*\[[^\]]*\])*)+')


def _rhs_integral(rhs: str, lines: list[str], line_idx: int) -> bool:
    """write/compound RHS must be provably integral (no calls, no derefs,
    no pointer-typed operands) -- else the mask form C2296s on pointers."""
    s = rhs.strip()
    if not s:
        return False
    s2 = re.sub(r'\b(?:sizeof|alignof)\s*\([^)]*\)', '0', s)
    if re.search(r'\b[A-Za-z_]\w*\s*\(', s2):
        return False                      # call in RHS: return type unproven
    if '*' in s2 and not re.match(r'^[\s\d+xXa-fA-F+\-()<>]+$', s2):
        return False                      # deref/pointer-shaped text
    # member chains resolve as whole expressions first
    def _chain_ok(m):
        op = resolve_operand_width(m.group(0).strip(), lines, line_idx)
        return op.width in (W8, W16, W32, W64)
    s2 = _MEMBER_CHAIN_RE.sub(lambda m: '0' if _chain_ok(m) else '\x00BAD\x00', s2)
    if '\x00BAD\x00' in s2:
        return False
    # remaining bare identifiers
    for m in re.finditer(r'\b[A-Za-z_]\w*\b', s2):
        w = m.group(0)
        if w in ('unsigned', 'signed', 'int', 'long', 'short', 'char', 'bool',
                 'true', 'false', 'sizeof', 'this'):
            continue
        op = resolve_operand_width(w, lines, line_idx)
        if op.width not in (W8, W16, W32, W64):
            return False
    return True


def _simple_atom(e: str) -> bool:
    """operand safe for double evaluation: pure arithmetic, no calls/side effects"""
    s = e.strip()
    if re.search(r'\b[A-Za-z_]\w*\s*\(', s):     # function-like call
        return False
    if re.search(r'\+\+|--', s):                 # inc/dec side effect
        return False
    if re.search(r'(?<![=!<>+\-*/&|^])=(?!=)', s):  # assignment/comma-of-assign
        return False
    return True


def _top_commas(s: str):
    parts, depth, last = [], 0, 0
    for i, c in enumerate(s):
        if c in '([':
            depth += 1
        elif c in ')]':
            depth -= 1
        elif c == ',' and depth == 0:
            parts.append(s[last:i])
            last = i + 1
    parts.append(s[last:])
    return parts


def convert_site(text: str, m, scan: Scan, lines: list[str], line_of) -> tuple[str | None, dict]:
    """Return (replacement_text_or_None, info)."""
    name = m.group(2)
    open_idx = m.end() - 1
    close_idx = balanced_paren(text, open_idx)
    if close_idx < 0:
        return None, {'action': 'bank', 'reason': 'unbalanced'}
    operand = text[open_idx + 1:close_idx].strip()
    after = close_idx + 1
    # statement-local paren depth before macro (for terminator decisions)
    stmt_start = max(text.rfind(';', 0, m.start()), text.rfind('{', 0, m.start()),
                     text.rfind('}', 0, m.start()))
    pre_depth = text.count('(', stmt_start, m.start()) - text.count(')', stmt_start, m.start())

    if name in ('__PAIR64__', '__PAIR32__', '__SPAIR64__'):
        parts = _top_commas(operand)
        if len(parts) != 2:
            return None, {'action': 'bank', 'reason': f'pair-arity-{len(parts)}'}
        h, l = parts[0].strip(), parts[1].strip()
        return pair_form(name, h, l), {'action': 'pair', 'operand': operand}

    if name in ('__ROL4__', '__ROL8__', '__ROR4__', '__ROR8__'):
        parts = _top_commas(operand)
        if len(parts) != 2:
            return None, {'action': 'bank', 'reason': f'rot-arity-{len(parts)}'}
        fn = {'__ROL4__': '_rotl', '__ROL8__': '_rotl64',
              '__ROR4__': '_rotr', '__ROR8__': '_rotr64'}[name]
        return f'{fn}({parts[0].strip()}, {parts[1].strip()})', {'action': 'rot', 'operand': operand}

    if name in ('__CFADD__', '__OFSUB__'):
        parts = _top_commas(operand)
        if len(parts) != 2:
            return None, {'action': 'bank', 'reason': f'flag-arity-{len(parts)}'}
        a, b = parts[0].strip(), parts[1].strip()
        if not (_simple_atom(a) and _simple_atom(b)):
            return None, {'action': 'bank', 'reason': 'flag-nonsimple-operand'}
        oa = resolve_operand_width(a, lines, line_of)
        ob = resolve_operand_width(b, lines, line_of)
        if name == '__CFADD__':
            # 32-bit carry-out test, unsigned comparison forced by the u-mask;
            # exact for ANY integer operand widths
            return (f'((({a}) + ({b})) & 0xFFFFFFFFu) < (({a}) & 0xFFFFFFFFu)'), \
                {'action': 'cfadd', 'operand': operand}
        # __OFSUB__: int subtraction overflow (shim semantics, int arithmetic)
        if oa.width not in (W64, WDBL, WFLT, WPTR) and ob.width not in (W64, WDBL, WFLT, WPTR):
            return (f'((((({a}) ^ ({b})) & (({a}) ^ (({a}) - ({b}))))) < 0)'), \
                {'action': 'ofsub', 'operand': operand}  # balanced: see x56 notes
        return None, {'action': 'bank', 'reason': f'ofsub-width-{oa.width}/{ob.width}'}

    # ---- bitfield families ----
    op = resolve_operand_width(operand, lines, line_of)
    info = {'action': '', 'operand': operand, 'opclass': f'{op.kind}/{op.width}'}
    if op.width == WPTR:
        info['action'] = 'bank'
        info['reason'] = 'pointer-operand'
        return None, info

    # look ahead for assignment / compound / incdec
    j = after
    while j < len(text) and text[j] in ' \t\r\n':
        j += 1
    rest = text[j:j + 3]
    if rest.startswith('++') or rest.startswith('--'):
        info['action'] = 'bank'
        info['reason'] = 'incdec-form'
        return None, info
    compound = None
    for c in ('<<=', '>>=', '|=', '&=', '^=', '+=', '-=', '*=', '/=', '%='):
        if rest.startswith(c):
            compound = c
            break
    is_assign = rest.startswith('=') and compound is None

    if is_assign:
        # RHS = balanced expression to depth-0 ';' ',' or ')'
        k = j + 1
        depth = 0
        while k < len(text):
            c = text[k]
            if c == '(':
                depth += 1
            elif c == ')':
                if depth == 0 and pre_depth > 0:
                    break
                depth -= 1
            elif c == ';' and depth == 0:
                break
            elif c == ',' and depth == 0 and pre_depth > 0:
                break
            k += 1
        rhs = text[j + 1:k].strip()
        new = write_form(name, operand, rhs, op) if _rhs_integral(rhs, lines, line_of) else None
        info['action'] = 'write' if new else 'bank'
        if not new:
            info['reason'] = 'write-nonsimple' if _rhs_integral(rhs, lines, line_of) else 'write-rhs-integral'
            info['reason'] = info['reason'] if not new else info['reason']
            return None, info
        end = k  # include up to (not including) terminator
        return ('REPLACE', m.start(), end, new), info

    if compound:
        if op.width not in (W8, W16, W32, W64):
            info['action'] = 'bank'
            info['reason'] = f'compound-{op.kind}/{op.width}'
            return None, info
        k = j + len(compound)
        depth = 0
        while k < len(text):
            c = text[k]
            if c == '(':
                depth += 1
            elif c == ')':
                if depth == 0 and pre_depth > 0:
                    break
                depth -= 1
            elif c in ';,' and depth == 0:
                break
            k += 1
        rhs = text[j + len(compound):k].strip()
        if not _rhs_integral(rhs, lines, line_of):
            info['action'] = 'bank'
            info['reason'] = 'compound-rhs-integral'
            return None, info
        shift, bits, signed = FAMILY[name]
        if name in ('HIBYTE', 'SHIBYTE'):
            if op.width in (W16,):
                shift = 8
            else:
                info['action'] = 'bank'
                info['reason'] = f'compound-hibyte-{op.width}'
                return None, info
        one = _ida_macro_retire._lit(bits, shift)
        fe = f'({operand})'
        fr = f'({rhs})'
        if shift:
            slice_ = f'((({fr}) & {one}) << {shift})'
        else:
            slice_ = f'(({fr}) & {one})'
        if compound == '|=':
            return ('REPLACE', m.start(), k, f'{fe} |= {slice_}'), {**info, 'action': 'or-assign'}
        if compound == '^=':
            return ('REPLACE', m.start(), k, f'{fe} ^= {slice_}'), {**info, 'action': 'xor-assign'}
        if compound == '&=':
            clear = f'(((~({rhs})) & {one})' + (f' << {shift})' if shift else ')')
            return ('REPLACE', m.start(), k, f'{fe} &= ~{clear}'), {**info, 'action': 'and-assign'}
        info['action'] = 'bank'
        info['reason'] = f'compound-{compound}'
        return None, info

    # plain read
    new = read_form(name, operand, op)
    info['action'] = 'read' if new else 'bank'
    if not new:
        info['reason'] = f'read-{op.kind}/{op.width}'
        return None, info
    return ('REPLACE', m.start(), close_idx + 1, new), info


_UNSIGNED_HINT = re.compile(r'\bunsigned\b')


def _decl_unsigned(name: str, lines: list[str]) -> bool:
    for l in lines:
        if re.search(r'\b(?:unsigned|u?int32_t|_DWORD|DWORD)\b[^;]*\b' + re.escape(name) + r'\b', l) \
                and not l.strip().startswith('//'):
            return True
    return False


def process_file(p: Path, rel: str, wanted: set[str], apply: bool):
    raw = p.read_bytes()
    text = raw.decode('utf-8', errors='replace')
    lines = text.split('\n')
    all_edits = []
    ledger = []
    # fixpoint: nested macros (e.g. BYTE1(v) = BYTE2(v);) need outer-then-inner
    for _round in range(8):
        scan = Scan(text)
        offs = [0]
        for l in lines:
            offs.append(offs[-1] + len(l) + 1)

        def line_of(idx):
            lo, hi = 0, len(offs) - 1
            while lo < hi:
                mid = (lo + hi + 1) // 2
                if offs[mid] <= idx:
                    lo = mid
                else:
                    hi = mid - 1
            return lo

        edits = []      # (start, end, newtext, info)
        round_ledger = []
        for m in _TOKEN_RE.finditer(text):
            if m.group(2) not in wanted:
                continue
            if not scan.code[m.start()]:
                continue
            li = line_of(m.start())
            res, info = convert_site(text, m, scan, lines, li)
            entry = {
                'file': rel, 'line': li + 1, 'family': m.group(2),
                'round': _round,
                'before': text[max(0, m.start() - 10):m.start()] + text[m.start():text.find('\n', m.start())][:120].strip(),
            }
            entry.update(info)
            if isinstance(res, tuple) and res and res[0] == 'REPLACE':
                _, s, e, newt = res
                edits.append((s, e, newt))
                entry['after'] = newt[:160]
            elif isinstance(res, str):
                open_idx = m.end() - 1
                close_idx = balanced_paren(text, open_idx)
                edits.append((m.start(), close_idx + 1, res))
                entry['after'] = res[:160]
            round_ledger.append(entry) if (info['action'] != 'bank' or _round == 0) else None
        if not edits:
            break
        # keep non-overlapping edits, outer (earlier start) wins
        edits.sort(key=lambda t: (t[0], -t[1]))
        kept = []
        last_end = -1
        for s, e, newt in edits:
            if s < last_end:
                continue  # overlaps previous kept span -> next round
            kept.append((s, e, newt))
            last_end = e
        # always simulate in-memory (dry = same accounting, no write)
        out = text
        for s, e, newt in sorted(kept, key=lambda t: -t[0]):
            out = out[:s] + newt + out[e:]
        text = out
        lines = text.split('\n')
        all_edits.extend(kept)
        ledger.extend(round_ledger)

    n = len(all_edits)
    if n and apply:
        p.write_bytes(text.encode('utf-8'))
    return rel, ledger, n, None


def main() -> int:
    apply = '--apply' in sys.argv
    fams = [a.split('=', 1)[1] for a in sys.argv if a.startswith('--families=')]
    wanted = set()
    for f in (fams or list(BATCHES)):
        wanted.update(BATCHES[f])
    OUTDIR.mkdir(parents=True, exist_ok=True)
    tag = '-'.join(fams) if fams else 'all'
    led_path = OUTDIR / f'ledger_{tag}.jsonl'
    total_conv = total_bank = files_touched = 0
    family_stat: dict[str, dict[str, int]] = {}
    with open(led_path, 'w', encoding='utf-8') as lf:
        for p, rel in iter_targets():
            rel2, ledger, n, err = process_file(p, rel, wanted, apply)
            if err:
                print(f'!! {rel}: {err}')
            if ledger:
                for e in ledger:
                    lf.write(json.dumps(e, ensure_ascii=False) + '\n')
                    st = family_stat.setdefault(e['family'], {'converted': 0, 'banked': 0})
                    st['converted' if e['action'] not in ('bank',) else 'banked'] += 1
                    if e['action'] not in ('bank',):
                        total_conv += 1
                    else:
                        total_bank += 1
                if n and apply:
                    files_touched += 1
    print(f'batch={tag} apply={apply}')
    print(f'sites: converted={total_conv} banked={total_bank} files_touched={files_touched}')
    for fam in sorted(family_stat, key=lambda k: -sum(family_stat[k].values())):
        st = family_stat[fam]
        print(f'  {fam:12s} converted={st["converted"]:5d} banked={st["banked"]:5d}')
    print(f'ledger: {led_path}')
    return 0


if __name__ == '__main__':
    sys.exit(main())
