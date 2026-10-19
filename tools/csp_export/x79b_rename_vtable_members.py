#!/usr/bin/env python3
"""X79b -- token-only rename of residual `vtableN` / `vtblN` identifiers.

Fixed rule (user X79b):
  * N = numeric suffix of the old token (bare `vtable`/`vtbl` -> N = 0);
  * new name = ``ptr_<HEX>`` where HEX = uppercase hex of 4*N, no 0x
    (vtable0->ptr_0, vtable1->ptr_4, vtable2->ptr_8, vtable3->ptr_C,
     vtable4->ptr_10, vtable5->ptr_14, vtable22->ptr_58, ...);
  * class member declaration collision (same class already declares the
    target name): that class's token + all of its uses -> ``ptr_<HEX>_a``;
  * local declaration collision (same function already declares the target
    local): that function's token + uses -> ``ptr_<HEX>_l``;
  * ambiguous source (same class / same function has two old tokens landing on
    the same target) -> bank the class/function, never half-edit;
  * comments are renamed too: the acceptance grep covers all of ``src/`` and
    every changed line differs ONLY in the identifier;
  * ``vt_slot_*`` is never matched; REVERSE-protected files are never written.

No line is inserted, deleted, merged or re-ordered.  Types, initializers and
comments keep their text except for the renamed identifier.

Idempotent: after a successful apply a second run finds 0 tokens / 0 writes.

Usage:
  python tools/csp_export/x79b_rename_vtable_members.py --dry-run
  python tools/csp_export/x79b_rename_vtable_members.py --apply
  python tools/csp_export/x79b_rename_vtable_members.py --dry-run --report FILE
"""
import argparse
import hashlib
import json
import os
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x79b'

EXTS = ('.cpp', '.hpp', '.h', '.inl', '.inc', '.c', '.cc', '.cxx',
        '.hh', '.hxx', '.bak')

# REVERSE pipeline protection (AGENTS.md).  Only files under src/ can ever be
# touched by this tool; this list is still checked defensively.
PROTECTED = {
    'injectFunctionTest/gen_reverse_hooks.py',
    'injectFunctionTest/gen_re_impl.py',
    'injectFunctionTest/PostProcStub.asm',
    'injectFunctionTest/tls_storage.h',
    'injectFunctionTest/shadow_txn.h',
    'injectFunctionTest/shadow_txn.cpp',
    'injectFunctionTest/hook_template.hpp',
    'injectFunctionTest/hook_main.cpp',
    'injectFunctionTest/render_hooks.cpp',
    'injectFunctionTest/headless_server.cpp',
    'injectFunctionTest/CMakeLists.txt',
    'injectFunctionTest/functions.json',
    'src/core/reverse_marker.hpp',
    'functionComparison.md',
    'injectFunctionTest/analyze_idempotent.py',
    'injectFunctionTest/annotations.json',
    'injectFunctionTest/purity_effects.json',
}

TOKEN = re.compile(r'\b(?:vtable|vtbl)(?P<num>[0-9]*)\b')
NEWTOKEN = re.compile(r'\bptr_[0-9A-F]+(?:_[al])?\b')

# Robust comment/string mask (x79 pattern): stray apostrophes in legacy IDA
# strings must NOT poison the state machine for the rest of the file.
STR_TOKEN = re.compile(r'"(?:[^"\\\n]|\\.)*"')
CHR_TOKEN = re.compile(r"'(?:[^'\\\n]|\\.){0,8}'")
KEYWORDS = {'return', 'if', 'else', 'while', 'for', 'do', 'switch', 'case',
            'goto', 'break', 'continue', 'delete', 'new', 'throw', 'sizeof',
            'typedef', 'using', 'namespace', 'template', 'operator'}

CLASS_OPEN = re.compile(
    r'\b(?:class|struct|union)\s+([A-Za-z_]\w*)\b[^;{}()]*\{')
FUNC_SIG = re.compile(r'\)\s*(?:const\s*)?(?:noexcept\s*)?\{?\s*$')
CTRL = re.compile(r'^\s*(?:if|for|while|switch|else|do|catch|try)\b')


def n_of(tok):
    m = TOKEN.match(tok)
    s = m.group('num') if m else ''
    return int(s) if s else 0


def base_of(tok):
    return 'ptr_%X' % (4 * n_of(tok))


def read_text(path):
    return path.read_bytes().decode('utf-8', 'surrogateescape')


def write_text_atomic(path, text):
    data = text.encode('utf-8', 'surrogateescape')
    tmp = path.with_name(path.name + '.x79b.tmp')
    with open(tmp, 'wb') as fh:
        fh.write(data)
    os.replace(tmp, path)


def iter_source_files():
    for p in sorted(SRC.rglob('*')):
        if p.is_file() and p.suffix.lower() in EXTS:
            yield p


def mask_comments(s):
    """Blank // and /* */ comments and valid string/char literals.

    Offsets and newlines are preserved so line numbers map 1:1.
    """
    out = list(s)
    i, n, state = 0, len(s), 0
    while i < n:
        c = s[i]
        if state == 0:
            if c == '/' and i + 1 < n and s[i + 1] == '/':
                out[i] = ' '
                out[i + 1] = ' '
                i += 2
                state = 1
                continue
            if c == '/' and i + 1 < n and s[i + 1] == '*':
                out[i] = ' '
                out[i + 1] = ' '
                i += 2
                state = 2
                continue
            if c == '"':
                tok = STR_TOKEN.match(s, i)
                if tok:
                    for j in range(i, tok.end()):
                        if s[j] != '\n':
                            out[j] = ' '
                    i = tok.end()
                    continue
                i += 1
                continue
            if c == "'":
                tok = CHR_TOKEN.match(s, i)
                if tok:
                    for j in range(i, tok.end()):
                        if s[j] != '\n':
                            out[j] = ' '
                    i = tok.end()
                    continue
                i += 1
                continue
            i += 1
        elif state == 1:
            if c == '\n':
                state = 0
            else:
                out[i] = ' '
            i += 1
        elif state == 2:
            if c == '*' and i + 1 < n and s[i + 1] == '/':
                out[i] = ' '
                out[i + 1] = ' '
                i += 2
                state = 0
            else:
                if c != '\n':
                    out[i] = ' '
                i += 1
    return ''.join(out)


def match_brace(code, open_pos):
    depth = 0
    for j in range(open_pos, len(code)):
        if code[j] == '{':
            depth += 1
        elif code[j] == '}':
            depth -= 1
            if depth == 0:
                return j
    return None


def line_of(text, pos):
    return text.count('\n', 0, pos) + 1


def top_level_members(body):
    """Member identifiers declared at brace depth 0 of a class body."""
    names = set()
    depth = 0
    for line in body.split('\n'):
        if depth == 0:
            for m in re.finditer(r'\b([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*;', line):
                names.add(m.group(1))
            for m in re.finditer(r'\b(ptr_[0-9A-Fa-f]+|vtable[0-9_]*|vtbl[0-9_]*)\b', line):
                names.add(m.group(1))
        depth += line.count('{') - line.count('}')
        if depth < 0:
            depth = 0
    return names


def parse_classes(path, code):
    """Yield (class_name, member_names, first_line, last_line)."""
    out = []
    for m in CLASS_OPEN.finditer(code):
        name = m.group(1)
        open_pos = code.find('{', m.start())
        close_pos = match_brace(code, open_pos)
        if close_pos is None:
            continue
        body = code[open_pos + 1:close_pos]
        out.append((name, top_level_members(body),
                    line_of(code, open_pos), line_of(code, close_pos)))
    return out


def looks_like_decl(code_line, start, end):
    """True when the token at [start,end) is the declared name of this line."""
    before = code_line[:start]
    after = code_line[end:]
    b = before.strip()
    if not b:
        return False
    if '=' in b:
        return False
    first = re.match(r'[A-Za-z_]\w*', b)
    if not first:
        return False
    if first.group(0) in KEYWORDS:
        return False
    if first.group(0) in ('unsigned', 'signed', 'long', 'short', 'const',
                          'volatile', 'static', 'extern', 'register', 'auto',
                          'struct', 'class', 'union', 'enum'):
        pass  # valid type prefix
    # after: optional array, optional function-pointer suffix, optional init, ;
    if not re.match(r'\s*(?:\[[^\]]*\])?\s*(?:\([^;{}]*\))?\s*(?:=[^;]*?)?\s*;',
                    after):
        return False
    # the character immediately before the token must be a type/decl separator
    if b[-1] not in '*)]':
        if not (b[-1].isalnum() or b[-1] == '_'):
            return False
    return True


def parse_function_ranges(code_lines):
    """Best-effort function bodies: [(start_line, end_line, qualifier)]."""
    ranges = []
    n = len(code_lines)
    joined = '\n'.join(code_lines)
    line_start = [0] * (n + 1)
    pos = 0
    for i, ln in enumerate(code_lines):
        line_start[i] = pos
        pos += len(ln) + 1
    line_start[n] = pos
    i = 0
    while i < n:
        line = code_lines[i]
        if '{' not in line:
            i += 1
            continue
        # look back up to 8 lines for a signature head
        head = line
        start = i
        for back in range(1, 9):
            if ')' in head and '(' in head:
                break
            if i - back < 0:
                break
            prev = code_lines[i - back].strip()
            if prev.endswith(';') or prev.endswith('}'):
                break
            head = prev + ' ' + head
            start = i - back
        pre = head.split('{', 1)[0].strip()
        if '(' not in pre or ')' not in pre or CTRL.match(pre):
            i += 1
            continue
        if pre.rstrip().endswith(';'):
            i += 1
            continue
        qual = ''
        mq = re.search(r'([A-Za-z_]\w*)\s*::\s*[~A-Za-z_]\w*\s*\(', pre)
        if mq:
            qual = mq.group(1)
        else:
            mt = re.search(r'([A-Za-z_]\w*)\s*\*\s*this\b', pre)
            if mt:
                qual = mt.group(1)
        open_pos = line_start[i] + line.index('{')
        close_pos = match_brace(joined, open_pos)
        if close_pos is None:
            i += 1
            continue
        end = joined.count('\n', 0, close_pos) + 1
        ranges.append((start + 1, end, qual))
        i += 1
    # innermost ranges first for lookup
    ranges.sort(key=lambda r: (r[1] - r[0], r[0]))
    return ranges


def range_at(ranges, line):
    best = None
    for r in ranges:
        if r[0] <= line <= r[1]:
            if best is None or (r[1] - r[0]) < (best[1] - best[0]):
                best = r
    return best


def local_decls(code_lines):
    """line -> set(tokens) for declaration lines."""
    out = defaultdict(set)
    for i, line in enumerate(code_lines, 1):
        for m in TOKEN.finditer(line):
            if looks_like_decl(line, m.start(), m.end()):
                out[i].add(m.group(0))
        for m in re.finditer(r'\bptr_[0-9A-Fa-f]+\b', line):
            if looks_like_decl(line, m.start(), m.end()):
                out[i].add(m.group(0))
    return out


def collect(files):
    records = []          # dict per occurrence
    file_counts = Counter()
    token_counts = Counter()
    token_kind = defaultdict(Counter)
    classes = {}
    class_ranges_by_file = {}
    func_ranges_by_file = {}

    for path in files:
        rel = path.relative_to(ROOT).as_posix()
        text = read_text(path)
        code = mask_comments(text)
        raw_lines = text.split('\n')
        code_lines = code.split('\n')

        cls = parse_classes(path, code) if path.suffix.lower() in (
            '.hpp', '.h', '.inl', '.inc') and 'raw_decomp' not in rel else []
        class_ranges_by_file[rel] = [(a, b, n) for (n, _m, a, b) in cls]
        for name, members, _a, _b in cls:
            classes.setdefault(name, set()).update(members)

        fr = parse_function_ranges(code_lines)
        func_ranges_by_file[rel] = fr

        for i, (raw_line, code_line) in enumerate(zip(raw_lines, code_lines), 1):
            tms = list(TOKEN.finditer(raw_line))
            if not tms:
                continue
            cms = list(TOKEN.finditer(code_line))
            cpos = {(m.start(), m.end()): m.group(0) for m in cms}
            for m in tms:
                tok = m.group(0)
                target = base_of(tok)
                in_code = (m.start(), m.end()) in cpos
                if not in_code:
                    kind = 'comment'
                    cname = ''
                    fname = ''
                else:
                    cname = ''
                    for a, b, n in class_ranges_by_file[rel]:
                        if a <= i <= b:
                            cname = n
                            break
                    frng = range_at(fr, i)
                    fname = frng[2] if frng else ''
                    if looks_like_decl(code_line, m.start(), m.end()):
                        kind = 'decl-member' if cname else (
                            'decl-local' if frng else 'decl-other')
                    else:
                        before = code_line[:m.start()]
                        kind = 'use-member' if re.search(r'(->|\.)\s*$', before) else 'use-bare'
                rec = {
                    'file': rel, 'line': i, 'col': m.start() + 1,
                    'tok': tok, 'target': target, 'kind': kind,
                    'class': cname, 'fn': fname,
                }
                records.append(rec)
                file_counts[rel] += 1
                token_counts[tok] += 1
                token_kind[tok][kind] += 1
    return {
        'records': records,
        'file_counts': file_counts,
        'token_counts': token_counts,
        'token_kind': token_kind,
        'classes': classes,
        'class_ranges': class_ranges_by_file,
        'func_ranges': func_ranges_by_file,
    }


def compute_collisions(data):
    """Class and local collision maps + bank list (deterministic)."""
    classes = data['classes']
    class_override = {}
    class_bank = {}
    collisions = []

    # ---- class member collisions --------------------------------------
    for cname in sorted(classes):
        members = classes[cname]
        by_base = defaultdict(list)
        for name in members:
            if TOKEN.fullmatch(name):
                by_base[base_of(name)].append(name)
        for base, toks in sorted(by_base.items()):
            toks = sorted(set(toks))
            if len(toks) > 1:
                class_bank[cname] = (base, toks)
                collisions.append({
                    'scope': 'class', 'name': cname, 'target': base,
                    'tokens': ','.join(toks), 'action': 'bank',
                    'reason': 'two old tokens map to same target',
                })
            elif base in members and base not in toks:
                class_override[(cname, toks[0])] = base + '_a'
                collisions.append({
                    'scope': 'class', 'name': cname, 'target': base,
                    'tokens': toks[0], 'action': base + '_a',
                    'reason': 'class already declares target',
                })

    # ---- local declaration collisions ---------------------------------
    # Read local declarations and function ranges from the collected records:
    # recompute per file from source (records do not carry full decl lines).
    local_override = {}
    local_bank = {}
    fn_index = Counter()
    for rel in sorted(data['func_ranges']):
        path = ROOT / rel
        text = read_text(path)
        code = mask_comments(text)
        code_lines = code.split('\n')
        decls = local_decls(code_lines)
        fr = data['func_ranges'][rel]
        if not decls:
            continue
        # attribute each declaration line to its innermost function
        by_fn = defaultdict(lambda: {'vt': set(), 'ptr': set(), 'lines': []})
        for ln, toks in sorted(decls.items()):
            r = range_at(fr, ln)
            key = (r[0], r[1], r[2]) if r else ('FILE', 0, '')
            for tok in toks:
                if TOKEN.fullmatch(tok):
                    by_fn[key]['vt'].add(tok)
                    by_fn[key]['lines'].append((ln, tok))
                elif re.match(r'^ptr_[0-9A-Fa-f]+$', tok):
                    by_fn[key]['ptr'].add(tok)
        for key, info in sorted(by_fn.items(), key=lambda kv: repr(kv[0])):
            if not info['vt']:
                continue
            ptrs = info['ptr']
            by_base = defaultdict(set)
            for tok in info['vt']:
                by_base[base_of(tok)].add(tok)
            for base, toks in sorted(by_base.items()):
                if len(toks) > 1:
                    local_bank[key] = (base, sorted(toks))
                    ln, tok = info['lines'][0]
                    collisions.append({
                        'scope': 'local', 'name': '%s:%s' % (rel, key[0]),
                        'target': base, 'tokens': ','.join(sorted(toks)),
                        'action': 'bank',
                        'reason': 'two old local tokens map to same target',
                        'file': rel, 'line': ln,
                    })
                elif base in ptrs:
                    for tok in toks:
                        local_override[(key, tok)] = base + '_l'
                    ln = next((l for l, t in info['lines'] if t in toks), key[0])
                    collisions.append({
                        'scope': 'local', 'name': '%s:%s' % (rel, key[0]),
                        'target': base, 'tokens': ','.join(sorted(toks)),
                        'action': base + '_l',
                        'reason': 'function already declares target local',
                        'file': rel, 'line': ln,
                    })
    return class_override, class_bank, local_override, local_bank, collisions


def token_only_walk(old, new, subs):
    """Strict proof that `new` differs from `old` only by token substitutions.

    `subs` maps (start_offset_in_old, old_token) -> new_token for every
    occurrence renamed on this line.  The walker compares characters one by
    one; the only permitted divergence is at a substituted token, where the
    old token text must be followed immediately by the replacement text.
    Returns (ok, reason).
    """
    i = j = 0
    n, m = len(old), len(new)
    while i < n and j < m:
        if old[i] == new[j]:
            i += 1
            j += 1
            continue
        key = None
        for (pos, tok) in subs:
            if pos == i and old.startswith(tok, i):
                key = (pos, tok)
                break
        if key is None:
            return False, 'divergence at %d (%r vs %r)' % (
                i, old[i:i + 24], new[j:j + 24])
        rep = subs[key]
        if not new.startswith(rep, j):
            return False, 'replacement mismatch at %d' % i
        i += len(key[1])
        j += len(rep)
    if i != n or j != m:
        return False, 'tail mismatch'
    return True, ''


def target_for(rec, class_override, class_bank, local_override, local_bank,
               func_ranges):
    tok = rec['tok']
    base = rec['target']
    cname = rec['class']
    if cname:
        if cname in class_bank:
            return None                       # banked: leave untouched
        ov = class_override.get((cname, tok))
        if ov:
            return ov
    fr = range_at(func_ranges, rec['line'])
    key = (fr[0], fr[1], fr[2]) if fr else ('FILE', 0, '')
    if key in local_bank:
        return None
    ov = local_override.get((key, tok))
    if ov:
        return ov
    return base


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    g = ap.add_mutually_exclusive_group()
    g.add_argument('--dry-run', action='store_true',
                   help='print plan/counts, write nothing under src (default)')
    g.add_argument('--apply', action='store_true',
                   help='rewrite src/ files in place')
    ap.add_argument('--report', default=None,
                    help='write the full TSV report to this path')
    ap.add_argument('--quiet', action='store_true',
                    help='omit per-token mapping table from stdout')
    args = ap.parse_args(argv)
    apply = bool(args.apply)

    files = list(iter_source_files())
    data = collect(files)
    recs = data['records']

    class_override, class_bank, local_override, local_bank, collisions = \
        compute_collisions(data)

    # ---- protected-file check ------------------------------------------
    protected_hits = [r for r in recs
                      if r['file'] in PROTECTED]
    if protected_hits:
        print('ERROR: %d token(s) inside REVERSE-protected files:'
              % len(protected_hits))
        for r in protected_hits[:20]:
            print('  %s:%d %s' % (r['file'], r['line'], r['tok']))
        if apply:
            return 3

    # ---- mapping counts ------------------------------------------------
    mapping = {}
    for tok, n in sorted(data['token_counts'].items(),
                         key=lambda kv: (-kv[1], kv[0])):
        mapping[tok] = base_of(tok)
    per_n = Counter()
    for tok, n in data['token_counts'].items():
        per_n[n_of(tok)] += n

    code_n = sum(1 for r in recs if r['kind'] != 'comment')
    comment_n = len(recs) - code_n
    kind_counts = Counter(r['kind'] for r in recs)

    print('X79b vtableN/vtblN rename plan (%s)' %
          ('APPLY' if apply else 'DRY-RUN'))
    print('  src files scanned : %d' % len(files))
    print('  occurrences       : %d  (code %d / comment %d)'
          % (len(recs), code_n, comment_n))
    print('  distinct tokens   : %d' % len(mapping))
    print('  files with hits   : %d'
          % len([k for k, v in data['file_counts'].items() if v]))
    print('  kinds             : %s' % json.dumps(dict(kind_counts)))
    print('  class blocks      : %d' % len(data['classes']))
    print('  class collisions  : %d' % len(class_override))
    print('  class banks       : %d' % len(class_bank))
    print('  local collisions  : %d' % len(local_override))
    print('  local banks       : %d' % len(local_bank))
    print('  protected matches : %d' % len(protected_hits))
    print('  per-N occurrences : %s'
          % json.dumps({str(k): v for k, v in sorted(per_n.items())}))

    if not args.quiet:
        print('\nMAPPING (old -> new, total/code/comment, kinds)')
        for tok in sorted(mapping, key=lambda t: (-data['token_counts'][t], t)):
            kinds = data['token_kind'][tok]
            c = kinds.get('comment', 0)
            print('%s\t%s\t%d\t%d\t%d\t%s' % (
                tok, mapping[tok], data['token_counts'][tok],
                data['token_counts'][tok] - c, c,
                json.dumps(dict(kinds), sort_keys=True)))

    if collisions:
        print('\nCOLLISIONS / BANKS')
        for c in collisions:
            print('  %s %s target=%s tokens=%s action=%s (%s)%s' % (
                c['scope'], c['name'], c['target'], c['tokens'],
                c['action'], c['reason'],
                (' @%s:%d' % (c['file'], c['line'])) if c.get('line') else ''))

    print('\nPER-FILE OCCURRENCES (top 40)')
    for rel, n in sorted(data['file_counts'].items(),
                         key=lambda kv: (-kv[1], kv[0]))[:40]:
        print('%6d\t%s' % (n, rel))

    # ---- plan: which records are renamed --------------------------------
    rename_recs = []
    bank_recs = []
    for r in recs:
        tgt = target_for(r, class_override, class_bank, local_override,
                         local_bank, data['func_ranges'].get(r['file'], []))
        if tgt is None:
            bank_recs.append(r)
        else:
            r2 = dict(r)
            r2['new'] = tgt
            rename_recs.append(r2)

    # ---- per-file line plan + token-only proof -------------------------
    per_file = defaultdict(list)
    for r in rename_recs:
        per_file[r['file']].append(r)
    plan = {}
    for rel in sorted(per_file):
        path = ROOT / rel
        text = read_text(path)
        lines = text.split('\n')
        by_line = defaultdict(list)
        for r in per_file[rel]:
            by_line[r['line']].append(r)
        changed = {}
        proof_ok = 0
        proof_bad = []
        for ln, rs in sorted(by_line.items()):
            old = lines[ln - 1]
            new = old
            off = 0
            for r in sorted(rs, key=lambda x: x['col']):
                a = r['col'] - 1 + off
                b = a + len(r['tok'])
                if new[a:b] != r['tok']:
                    proof_bad.append((rel, ln, 'stale-target'))
                    break
                new = new[:a] + r['new'] + new[b:]
                off += len(r['new']) - len(r['tok'])
            else:
                subs = {(r['col'] - 1, r['tok']): r['new'] for r in rs}
                ok, why = token_only_walk(old, new, subs)
                if ok:
                    proof_ok += 1
                else:
                    proof_bad.append((rel, ln, why))
                changed[ln] = new
        if changed:
            plan[rel] = {'lines': lines, 'changed': changed,
                         'proof_ok': proof_ok, 'proof_bad': proof_bad}

    total_changed_lines = sum(len(p['changed']) for p in plan.values())
    total_proof_ok = sum(p['proof_ok'] for p in plan.values())
    total_proof_bad = [b for p in plan.values() for b in p['proof_bad']]

    print('\nPLAN')
    print('  renamed occurrences : %d' % len(rename_recs))
    print('  banked occurrences  : %d' % len(bank_recs))
    print('  files to rewrite    : %d' % len(plan))
    print('  changed lines       : %d' % total_changed_lines)
    print('  token-only proof    : %d/%d' %
          (total_proof_ok, total_changed_lines))
    if total_proof_bad:
        print('  PROOF FAILURES      : %d' % len(total_proof_bad))
        for b in total_proof_bad[:10]:
            print('    %s:%d %s' % b)

    # ---- sample changes -------------------------------------------------
    print('\nSAMPLES (first 12 changed lines)')
    shown = 0
    for rel in sorted(plan):
        for ln in sorted(plan[rel]['changed']):
            old = plan[rel]['lines'][ln - 1].strip()
            new = plan[rel]['changed'][ln].strip()
            print('%s:%d' % (rel, ln))
            print('  - %s' % old[:220])
            print('  + %s' % new[:220])
            shown += 1
            if shown >= 12:
                break
        if shown >= 12:
            break

    # ---- evidence report ------------------------------------------------
    EVID.mkdir(parents=True, exist_ok=True)
    tag = 'apply' if apply else 'dryrun'
    report_lines = [
        '# x79b %s report' % ('APPLY' if apply else 'DRY-RUN'),
        '# occurrences\t%d' % len(recs),
        '# code\t%d' % code_n,
        '# comment\t%d' % comment_n,
        '# distinct_tokens\t%d' % len(mapping),
        '# files_with_hits\t%d' % len(data['file_counts']),
        '# classes\t%d' % len(data['classes']),
        '# class_collisions\t%d' % len(class_override),
        '# class_banks\t%d' % len(class_bank),
        '# local_collisions\t%d' % len(local_override),
        '# local_banks\t%d' % len(local_bank),
        '# changed_lines\t%d' % total_changed_lines,
        '# token_only_proof\t%d/%d' % (total_proof_ok, total_changed_lines),
        '',
        '# mapping\told\tnew\ttotal\tcode\tcomment\tkinds',
    ]
    for tok in sorted(mapping, key=lambda t: (-data['token_counts'][t], t)):
        kinds = data['token_kind'][tok]
        c = kinds.get('comment', 0)
        report_lines.append('%s\t%s\t%d\t%d\t%d\t%s' % (
            tok, mapping[tok], data['token_counts'][tok],
            data['token_counts'][tok] - c, c,
            json.dumps(dict(kinds), sort_keys=True)))
    report_lines.append('')
    report_lines.append('# collision\tscope\tname\ttarget\ttokens\taction\treason\tfile\tline')
    for c in collisions:
        report_lines.append('%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s' % (
            c['scope'], c['name'], c['target'], c['tokens'], c['action'],
            c['reason'], c.get('file', ''), c.get('line', '')))
    report_lines.append('')
    report_lines.append('# occurrences\tfile\tline\tcol\ttok\tnew\tkind\tclass\tfn')
    for r in recs:
        tgt = target_for(r, class_override, class_bank, local_override,
                         local_bank, data['func_ranges'].get(r['file'], []))
        report_lines.append('%s\t%d\t%d\t%s\t%s\t%s\t%s\t%s' % (
            r['file'], r['line'], r['col'], r['tok'],
            (tgt if tgt is not None else 'BANK'), r['kind'],
            r['class'], r['fn']))
    report_lines.append('')
    report_lines.append('# per-file\tcount\tfile')
    for rel, n in sorted(data['file_counts'].items(),
                         key=lambda kv: (-kv[1], kv[0])):
        report_lines.append('%d\t%s' % (n, rel))
    report_path = Path(args.report) if args.report else (
        EVID / ('x79b_%s.txt' % tag))
    report_path.write_text('\n'.join(report_lines) + '\n', encoding='utf-8')
    print('\nreport written: %s' % report_path)

    if not apply:
        print('\nDRY-RUN: no file written under src.')
        return 0

    # ---- apply ----------------------------------------------------------
    if not rename_recs:
        print('\nAPPLY: nothing to rename (idempotent 0-write run).')
        return 0
    if total_proof_bad:
        print('\nAPPLY ABORTED: token-only proof failed before writing.')
        return 4

    touched = []
    for rel in sorted(plan):
        p = ROOT / rel
        if rel in PROTECTED:
            print('APPLY ABORTED: protected file in plan: %s' % rel)
            return 3
        old_text = read_text(p)
        old_lines = old_text.split('\n')
        new_lines = list(old_lines)
        for ln, new in plan[rel]['changed'].items():
            new_lines[ln - 1] = new
        new_text = '\n'.join(new_lines)
        if new_text == old_text:
            continue
        if old_text.count('\n') != new_text.count('\n'):
            print('APPLY ABORTED: line count changed in %s' % rel)
            return 4
        write_text_atomic(p, new_text)
        touched.append(rel)

    print('\nAPPLIED: %d files rewritten' % len(touched))
    for rel in touched:
        print('  %s' % rel)
    if bank_recs:
        print('BANKED occurrences left untouched: %d' % len(bank_recs))
        for r in bank_recs[:20]:
            print('  %s:%d %s' % (r['file'], r['line'], r['tok']))
        return 3
    return 0


if __name__ == '__main__':
    sys.exit(main())
