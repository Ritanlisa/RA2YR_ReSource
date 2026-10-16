#!/usr/bin/env python3
"""x44b_merge_verify.py -- X44 Stage-1 (decl+assign merge) engine: verify + dry re-run.

Modes (default --verify):
  --verify      R1 spot-check duty: replay every op in the Stage-1 apply ledger
                against the CURRENT tree by CONTENT (leading whitespace
                insensitive, line numbers ignored):
                  - the recorded `after` line must be present in the file;
                  - the recorded adjacent `before` pair must be gone.
                Exit 0 iff zero mismatches.
  --tokenproof  End-to-end token-delta proof vs `git show HEAD:<file>` for a
                stratified sample (or --files): tokenize HEAD version and
                current version (comments included, whitespace excluded), diff
                the multisets, and require the diff to equal EXACTLY the
                aggregate merge pattern predicted from the ledger ops for that
                file: per op  -1 ';'  -1 <varname>  +1 '='.
  --dry         Re-run the Stage-1 merge detector over the current tree
                (idempotence): must report merged=0. Detects
                `TYPE NAME; // cmt` + `NAME = <pure-charset RHS>; /*addr*/`
                with the same skip taxonomy as the original engine.

Read-only: this tool never writes source files.
"""
import argparse
import collections
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
sys.path.insert(0, str(ROOT / 'tools' / 'csp_export'))
from x44b_ctokens import tokenize, token_multiset  # noqa: E402

LEDGER = ROOT / '.omo/evidence/optimization/x44/x44_stage1_apply_ledger.json'

# ---------------------------------------------------------------- merge scan
# decl: TYPE ... NAME ; [// comment]      (single declarator, no init)
DECL_RE = re.compile(
    r'^[ \t]*'                                   # leading ws
    r'(?P<type>(?:const\s+|unsigned\s+|signed\s+|struct\s+)*'
    r'[A-Za-z_]\w*(?:\s*(?:::)\s*[A-Za-z_]\w*|\s+[A-Za-z_]\w*|\s*\*)*?)'  # type tokens
    r'(?P<ptr>\*+)?'                             # pointer stars attached to name
    r'[ \t]+(?P<name>[A-Za-z_]\w*)[ \t]*;'
    r'(?P<cmt>[ \t]*//[^\n]*)?$'
)
# next-statement assign: NAME = RHS ;
ASGN_RE = re.compile(
    r'^[ \t]*(?P<name>[A-Za-z_]\w*)[ \t]*=[ \t]*'
    r'(?P<rhs>[^;\n]*?)[ \t]*;'
    r'(?P<cmt>[ \t]*/\*[^\n]*\*/)?[ \t]*$'
)
# RHS forbidden characters (the original engine's "pure read + charset safe"
# gate, derived from the ledger's recorded op charset
# ` !%&*+-./0-9;<=>A-Z^_a-z|~`: no parens, brackets, quotes, commas, ternary
# -> no calls/casts/subscripts/strings/comma-or-ternary expressions on the
# merged RHS).
RHS_FORBIDDEN_CHR = set('()[]{}",\'?:`\\')
PREPROC_RE = re.compile(r'^[ \t]*#')
COMMENT_ONLY_RE = re.compile(r'^[ \t]*//')


def scan_file_for_merges(text):
    """Return (candidates, skip_reasons) following the original engine's taxonomy."""
    lines = text.split('\n')
    skips = collections.Counter()
    candidates = []
    i = 0
    n = len(lines)
    while i < n:
        ln = lines[i]
        m = DECL_RE.match(ln)
        if not m:
            i += 1
            continue
        name = m.group('name')
        # find the next meaningful line
        j = i + 1
        saw_comment = saw_preproc = False
        nxt = None
        while j < n:
            s = lines[j]
            if s.strip() == '':
                j += 1
                continue
            if COMMENT_ONLY_RE.match(s):
                saw_comment = True
                j += 1
                continue
            if PREPROC_RE.match(s):
                saw_preproc = True
                j += 1
                continue
            nxt = (j, s)
            break
        if nxt is None:
            skips['next_not_simple_assign'] += 1
            i += 1
            continue
        j, s = nxt
        a = ASGN_RE.match(s)
        if not a or a.group('name') != name:
            if a and a.group('name') != name:
                skips['name_mismatch'] += 1
            else:
                skips['next_not_simple_assign'] += 1
            i += 1
            continue
        rhs = a.group('rhs')
        if saw_preproc:
            skips['preprocessor_between'] += 1
            i += 1
            continue
        if saw_comment:
            skips['comment_between'] += 1
            i += 1
            continue
        # stack-typed decl (// [esp..] [ebp..]) never merged
        dcmt = (m.group('cmt') or '')
        if '[esp' in dcmt or '[ebp' in dcmt:
            skips['stack_typed_decl'] += 1
            i += 1
            continue
        # RHS must be a pure read: no assignment/compound/inc-dec ops
        if re.search(r'=(?!=)|\+\+|--|\+=|-=|\*=|/=|%=|&=|\|=|\^=|<<=|>>=', rhs):
            skips['rhs_not_pure_read'] += 1
            i += 1
            continue
        if name in rhs:
            skips['self_reference'] += 1
            i += 1
            continue
        if any(ch in RHS_FORBIDDEN_CHR for ch in rhs):
            skips['rhs_charset_unsafe'] += 1
            i += 1
            continue
        candidates.append((i, j, m, a))
        i = j + 1
    return candidates, skips


# ------------------------------------------------------------------- verify
def cmd_verify(args):
    ledger = json.loads(LEDGER.read_text(encoding='utf-8'))
    ops = ledger['ops']
    by_file = collections.defaultdict(list)
    for idx, op in enumerate(ops):
        by_file[op['file']].append((idx, op))
    cache = {}
    mismatch = []
    ok = 0
    for fname, fops in sorted(by_file.items()):
        p = ROOT / fname
        if fname not in cache:
            cache[fname] = (p.read_bytes().decode('latin-1')).split('\n') if p.exists() else None
        cur = cache[fname]
        if cur is None:
            for idx, op in fops:
                mismatch.append((idx, op['file'], op['decl_line'], 'FILE MISSING'))
            continue
        stripped = [l.strip() for l in cur]
        for idx, op in fops:
            after = op['after'].strip()
            b0 = op['before'][0].strip()
            b1 = op['before'][1].strip()
            found_after = after in stripped
            # before pair must be gone: no adjacent (b0, b1) rows remain
            pair_gone = True
            for k in range(len(stripped) - 1):
                if stripped[k] == b0 and stripped[k + 1] == b1:
                    pair_gone = False
                    break
            if found_after and pair_gone:
                ok += 1
            else:
                why = []
                if not found_after:
                    why.append('AFTER-LINE-MISSING')
                if not pair_gone:
                    why.append('BEFORE-PAIR-STILL-PRESENT')
                mismatch.append((idx, op['file'], op['decl_line'], '/'.join(why)))
    print(f'verify: ops={len(ops)} ok={ok} mismatch={len(mismatch)}')
    for entry in mismatch[:40]:
        print('  MISMATCH', entry)
    return 1 if mismatch else 0


# --------------------------------------------------------------- tokenproof
def varname_of(before0):
    m = re.match(r'^[ \t]*.*?[ \t*]([A-Za-z_]\w*)[ \t]*;', before0)
    if not m:
        m = re.match(r'^[ \t]*([A-Za-z_]\w*)[ \t]*;', before0)
    return m.group(1) if m else None


def comment_tokens_before(text):
    """Token view of a trailing comment AS IT SITS BEFORE the merge.
    '// x'  -> literal words of x (line comment: markers not part of words)
    '/* y */' -> inner words of y (block comment: markers stripped)
    """
    t = text.strip()
    if t.startswith('//'):
        return [('comment', w) for w in t[2:].split()]
    if t.startswith('/*') and t.endswith('*/'):
        return [('comment', w) for w in t[2:-2].split()]
    return [('comment', w) for w in t.split()]


def comment_tokens_after(dec_cmt, asg_cmt):
    """Token view of the merged trailing comment region.
    - decl comment `// x` (standard variant): both comments are absorbed into
      the decl's line comment -> every whitespace word (including `/*...*/`
      marker text) is a literal comment word.
    - decl comment `/* x */` (`return result;` variant): the merged line keeps
      both as separate block comments -> inner words of each.
    """
    dec = (dec_cmt or '').strip()
    asg = (asg_cmt or '').strip()
    if dec.startswith('//'):
        body = dec[2:].strip() + (' ' + asg if asg else '')
        return [('comment', w) for w in body.split()]
    out = []
    for t in (dec, asg):
        if t.startswith('/*') and t.endswith('*/'):
            out.extend(('comment', w) for w in t[2:-2].split())
        elif t.startswith('//'):
            out.extend(('comment', w) for w in t[2:].split())
        elif t:
            out.extend(('comment', w) for w in t.split())
    return out


def cmd_tokenproof(args):
    ledger = json.loads(LEDGER.read_text(encoding='utf-8'))
    ops = ledger['ops']
    by_file = collections.defaultdict(list)
    for op in ops:
        by_file[op['file']].append(op)
    files = args.files or sorted(by_file)
    all_ok = True
    summary = []
    for fname in files:
        fops = by_file.get(fname)
        if fops is None:
            print(f'tokenproof SKIP (no ops): {fname}')
            continue
        head = subprocess.run(['git', 'show', f'HEAD:{fname}'], capture_output=True,
                              cwd=str(ROOT)).stdout.decode('latin-1')
        cur = (ROOT / fname).read_bytes().decode('latin-1')
        before_ms = token_multiset(head)
        after_ms = token_multiset(cur)
        actual_add = after_ms - before_ms
        actual_rm = before_ms - after_ms
        exp_add = collections.Counter()
        exp_rm = collections.Counter()
        for op in fops:
            vn = varname_of(op['before'][0])
            exp_rm[('p', ';')] += 1
            if vn:
                exp_rm[('id', vn)] += 1
            dec_cmt = op['before'][0].split(';', 1)[1] if ';' in op['before'][0] else ''
            asg_cmt = op['before'][1].split(';', 1)[1] if ';' in op['before'][1] else ''
            cb = collections.Counter(comment_tokens_before(dec_cmt)) + \
                 collections.Counter(comment_tokens_before(asg_cmt))
            ca = collections.Counter(comment_tokens_after(dec_cmt, asg_cmt))
            exp_add += ca - cb
            exp_rm += cb - ca
        ok = (actual_add == exp_add) and (actual_rm == exp_rm)
        summary.append((fname, len(fops), ok))
        print(f'tokenproof {"PASS" if ok else "FAIL"}: {fname} ops={len(fops)} '
              f'added={sum(actual_add.values())}/{sum(exp_add.values())} '
              f'removed={sum(actual_rm.values())}/{sum(exp_rm.values())}')
        if not ok:
            all_ok = False
            for tag, extra, base in (('ADDED', actual_add, exp_add),
                                     ('REMOVED', actual_rm, exp_rm)):
                for name, cnt in (extra - base).items():
                    print(f'    UNEXPECTED-{tag}: {name} x{cnt}')
                for name, cnt in (base - extra).items():
                    print(f'    EXPECTED-{tag}-but-absent: {name} x{cnt}')
    print('tokenproof files:', len(summary),
          'PASS:', sum(1 for _, _, o in summary if o),
          'FAIL:', sum(1 for _, _, o in summary if not o))
    return 0 if all_ok else 1


# --------------------------------------------------------------------- dry
def cmd_dry(args):
    scope = sorted(str(p).replace('\\', '/').replace('D:/RA2YR_ReSource/', '')
                   for p in (ROOT / 'src/e4').rglob('*.cpp'))
    scope = [s for s in scope if not s.startswith('/')] + [
        'src/_gap2/gap2_global_defs.cpp', 'src/_generated/link_stubs.cpp']
    total = 0
    skips = collections.Counter()
    per_file = {}
    for fname in scope:
        text = (ROOT / fname).read_bytes().decode('latin-1')
        cands, sk = scan_file_for_merges(text)
        skips.update(sk)
        if cands:
            per_file[fname] = len(cands)
            total += len(cands)
    print(json.dumps({
        'mode': 'DRY-RUN',
        'merged': total,
        'files_touched': len(per_file),
        'skip_reasons': dict(sorted(skips.items(), key=lambda x: -x[1])),
        'per_file': dict(sorted(per_file.items(), key=lambda x: -x[1])[:20]),
    }, indent=1))
    out = ROOT / '.omo/evidence/optimization/x44b/x44b_stage1_redry_ledger.json'
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps({'merged': total, 'per_file': per_file,
                               'skip_reasons': dict(skips)}, indent=1), encoding='utf-8')
    return 0 if total == 0 else 1


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--verify', action='store_true')
    ap.add_argument('--tokenproof', action='store_true')
    ap.add_argument('--dry', action='store_true')
    ap.add_argument('--files', nargs='*', help='tokenproof file subset')
    args = ap.parse_args()
    if args.tokenproof:
        sys.exit(cmd_tokenproof(args))
    if args.dry:
        sys.exit(cmd_dry(args))
    sys.exit(cmd_verify(args))


if __name__ == '__main__':
    main()
