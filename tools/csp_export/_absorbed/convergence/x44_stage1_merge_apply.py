"""X44 Stage 1: decl + first-assign MERGE (token-changing, condition-gated).

Merges:
    T v; // reg                v = <pure-read rhs>; /*0xADDR*/ [// reg2]
 -> int v = <rhs>; // reg /*0xADDR*/ [// reg2]

Conditions (ALL must hold, else SKIP and count):
  1. decl is `T v;` UNINITIALIZED (array-typed decls skipped)
  2. IMMEDIATELY next statement (same brace depth, blank lines allowed,
     nothing else between) is `v = <rhs>;` -- simple '=' only
  3. RHS is a pure-read expression: no '(' ')' ',' '?' '=' '++' '--'
     (guarantees zero gating CALL/WRITE/RET events in the C++ verify CFG;
     READ events are advisory-only per efv_match v2 and may be dropped)
  4. no preprocessor line between decl and assign
  5. decl comment is not a stack-slot marker ('[esp+' / '[ebp') --
     DECL_STACK channel in csp_export/normalize_blocks.py requires the
     literal `T vN; // [esp+Xh]` shape
Comment preservation: decl's trailing comment first, then the assign line's
full trailing comment (source order). /*0xADDR*/ anchors always survive.

Idempotent by construction: merged form is not re-matched (decl must be
uninitialized `T v;`).

Usage:
  python x44_stage1_merge.py --dry-run
  python x44_stage1_merge.py --apply
"""
import argparse
import json
import os
import re

ROOT = r'D:\RA2YR_ReSource'  # X47 path-normalization: original derived ROOT from __file__ parents (lived in .omo/); absorbed copy hardcodes the repo root
OUT_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), '_ledgers')  # X47: dry/apply ledgers land beside this script, NOT into the historical x44 evidence dir
os.makedirs(OUT_DIR, exist_ok=True)

TARGET_DIRS = [
    os.path.join(ROOT, 'src', 'e4'),
    os.path.join(ROOT, 'src', '_generated'),
    os.path.join(ROOT, 'src', '_gap2'),
]
PREPROC_RE = re.compile(r'^\s*#')

# `T v;` -- uninitialized declaration (optional array suffix), trailing comment kept
DECL_RE = re.compile(
    r'^(?P<head>(?:(?:const\s+|unsigned\s+|signed\s+|struct\s+|union\s+|enum\s+)*)'
    r'[A-Za-z_]\w*(?:::\w+)?'
    r'(?:(?:\s+const|\s+unsigned|\s+signed|\s+int|\s+char|\s+short|\s+long|\s+double|\s+float))*)'
    r'(?P<stars>\s*\**\s*|\s+&\s*)'
    r'(?P<name>[A-Za-z_]\w*)'
    r'\s*(?:\[[^\]]*\])?\s*'
    r';'
    r'(?P<comment>.*)$'
)
# `v = <rhs>;` -- simple assignment, trailing comment kept
ASSIGN_RE = re.compile(
    r'^(?P<name>[A-Za-z_]\w*)'
    r'\s*=\s*'
    r'(?P<rhs>[^;=]+)'
    r';'
    r'(?P<comment>.*)$'
)
CONTROL_KW = ('if', 'for', 'while', 'switch', 'return', 'else', 'do', 'case',
              'default', 'goto', 'break', 'continue', 'try', 'catch', 'throw')
# pure-read RHS: only idents, numbers, member access, arithmetic/bitwise/logical
RHS_SAFE_RE = re.compile(r'^[A-Za-z0-9_.\->+*/%&|^~!<\s]+$')
RHS_FORBIDDEN = ('(', ')', ',', '?', '=', '++', '--')


def strip_line_comment(line):
    i = 0
    n = len(line)
    while i < n:
        c = line[i]
        if c == '"':
            i += 1
            while i < n:
                if line[i] == '\\':
                    i += 2
                    continue
                if line[i] == '"':
                    i += 1
                    break
                i += 1
            continue
        if c == "'":
            i += 1
            while i < n:
                if line[i] == '\\':
                    i += 2
                    continue
                if line[i] == "'":
                    i += 1
                    break
                i += 1
            continue
        if c == '/' and i + 1 < n and line[i + 1] == '/':
            return line[:i]
        i += 1
    return line


def scan_line_depth(line, in_block_comment):
    depth = 0
    i = 0
    n = len(line)
    while i < n:
        c = line[i]
        if in_block_comment:
            j = line.find('*/', i)
            if j < 0:
                return depth, True
            i = j + 2
            in_block_comment = False
            continue
        if c == '/' and i + 1 < n and line[i + 1] == '/':
            return depth, False
        if c == '/' and i + 1 < n and line[i + 1] == '*':
            in_block_comment = True
            i += 2
            continue
        if c == '"' or c == "'":
            q = c
            i += 1
            while i < n:
                if line[i] == '\\':
                    i += 2
                    continue
                if line[i] == q:
                    i += 1
                    break
                i += 1
            continue
        if c == '{':
            depth += 1
        elif c == '}':
            depth -= 1
        i += 1
    return depth, in_block_comment


def find_merges(lines):
    """Return list of merge ops: dicts with decl_idx, assign_idx span, merged_text."""
    ops = []
    n = len(lines)
    depth = 0
    in_c = False
    depths = []      # depth_before per line
    for raw in lines:
        depths.append(depth)
        d, in_c = scan_line_depth(raw, in_c)
        depth = max(0, depth + d)

    i = 0
    while i < n:
        raw = lines[i]
        s = raw.strip()
        i += 1
        if not s or PREPROC_RE.match(s):
            continue
        if s.startswith('//'):
            continue
        m = DECL_RE.match(s)
        if not m:
            continue
        d0 = depths[i - 1]
        if d0 < 1:
            continue
        dcomment = m.group('comment')
        if '[esp+' in dcomment or '[ebp' in dcomment:
            ops.append({'kind': 'skip', 'line': i, 'why': 'stack_typed_decl'})
            continue
        # find next meaningful line
        j = i  # index of the next line (0-based)
        skipped_blank = 0
        while j < n and not lines[j].strip():
            j += 1
            skipped_blank += 1
        if j >= n:
            ops.append({'kind': 'skip', 'line': i, 'why': 'next_is_eof'})
            continue
        nxt_raw = lines[j]
        nxt = nxt_raw.strip()
        if PREPROC_RE.match(nxt):
            ops.append({'kind': 'skip', 'line': i, 'why': 'preprocessor_between'})
            continue
        if nxt.startswith('//'):
            ops.append({'kind': 'skip', 'line': i, 'why': 'comment_between'})
            continue
        if depths[j] != d0:
            ops.append({'kind': 'skip', 'line': i, 'why': 'depth_mismatch'})
            continue
        am = ASSIGN_RE.match(nxt)
        if not am:
            ops.append({'kind': 'skip', 'line': i, 'why': 'next_not_simple_assign'})
            continue
        name = m.group('name')
        if am.group('name') != name:
            ops.append({'kind': 'skip', 'line': i, 'why': 'name_mismatch'})
            continue
        first_word = nxt.split(None, 1)[0] if nxt else ''
        if first_word in CONTROL_KW:
            ops.append({'kind': 'skip', 'line': i, 'why': 'control_kw'})
            continue
        rhs = am.group('rhs').strip()
        if name in rhs:
            ops.append({'kind': 'skip', 'line': i, 'why': 'self_reference'})
            continue
        if any(tok in rhs for tok in RHS_FORBIDDEN):
            ops.append({'kind': 'skip', 'line': i, 'why': 'rhs_not_pure_read'})
            continue
        if not RHS_SAFE_RE.match(rhs):
            ops.append({'kind': 'skip', 'line': i, 'why': 'rhs_charset_unsafe'})
            continue
        acomment = am.group('comment')
        head = m.group('head') + m.group('stars')
        merged = f"{head}{name} = {rhs};"
        parts = []
        if dcomment.strip():
            parts.append(dcomment.strip())
        if acomment.strip():
            parts.append(acomment.strip())
        if parts:
            merged = merged + ' ' + ' '.join(parts)
        ops.append({
            'kind': 'merge',
            'decl_idx': i - 1,          # 0-based
            'assign_idx': j,            # 0-based
            'decl_indent': raw[:len(raw) - len(raw.lstrip(' '))],
            'merged': merged,
            'decl': s,
            'assign': nxt,
            'name': name,
        })
    return ops


def process_file(path, apply):
    with open(path, 'r', encoding='utf-8', errors='replace') as f:
        text = f.read()
    lines = text.split('\n')
    ops = find_merges(lines)
    merges = [o for o in ops if o['kind'] == 'merge']
    skips = {}
    for o in ops:
        if o['kind'] == 'skip':
            skips[o['why']] = skips.get(o['why'], 0) + 1
    if not merges or not apply:
        return merges, skips, False
    # apply bottom-up so indices stay valid
    for o in sorted(merges, key=lambda x: x['decl_idx'], reverse=True):
        di = o['decl_idx']
        ai = o['assign_idx']
        lines[di] = o['decl_indent'] + o['merged']
        for k in range(di + 1, ai):
            lines[k] = None  # blank lines swallowed between decl and assign
        lines[ai] = None
    new_lines = [ln for ln in lines if ln is not None]
    with open(path, 'w', encoding='utf-8', newline='') as f:
        f.write('\n'.join(new_lines))
    return merges, skips, True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--apply', action='store_true')
    args = ap.parse_args()
    total_merged = 0
    total_skip = {}
    files_touched = []
    per_file = {}
    ledger = []
    for d in TARGET_DIRS:
        if not os.path.isdir(d):
            continue
        for dirpath, _, fns in os.walk(d):
            for fn in sorted(fns):
                if not fn.endswith('.cpp'):
                    continue
                p = os.path.join(dirpath, fn)
                merges, skips, wrote = process_file(p, args.apply)
                rel = os.path.relpath(p, ROOT).replace('\\', '/')
                if merges:
                    total_merged += len(merges)
                    per_file[rel] = len(merges)
                    for o in merges:
                        ledger.append({
                            'file': rel,
                            'decl_line': o['decl_idx'] + 1,
                            'before': [o['decl'], o['assign']],
                            'after': o['merged'].strip(),
                        })
                for k, v in skips.items():
                    total_skip[k] = total_skip.get(k, 0) + v
                if wrote:
                    files_touched.append(rel)
    mode = 'APPLY' if args.apply else 'DRY-RUN'
    summary = {
        'mode': mode,
        'merged': total_merged,
        'files_touched': len(files_touched),
        'skip_reasons': total_skip,
    }
    print(json.dumps(summary, indent=1))
    suffix = 'apply' if args.apply else 'dry'
    with open(os.path.join(OUT_DIR, f'x44_stage1_{suffix}_ledger.json'), 'w',
              encoding='utf-8') as f:
        json.dump({'summary': summary, 'per_file': per_file, 'ops': ledger}, f,
                  indent=1)


if __name__ == '__main__':
    main()
