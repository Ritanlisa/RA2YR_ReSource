#!/usr/bin/env python3
"""Restore lost local declarations (vN family) from the IDA cache (G41.45).

C2065/C3861 on `vN` names = the def body (cache-verbatim) references a
local whose declaration line (`int v2; // ecx`) was dropped when the body
landed. Faithful fix: pull the decl line verbatim from the cache's own
preamble for that function and re-insert it at the top of the def body.

Per site:
  1. file:line -> def head via `// 0xADDR` walk-back (name-tolerant:
     any def head within 80 lines)
  2. cache decompiled -> the `TYPE vN; ...` preamble line for the missing
     name (or its `[esp+..]`/`BYREF` form)
  3. insert the line after the def's opening `{` (skipped when the def
     already declares it)

Idempotent by construction (existing decls skip). Dry run by default;
--apply writes.

Usage: python tools/csp_export/fix_missing_locals.py <census_log> [--apply]
"""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[4]
APPLY = '--apply' in sys.argv
LOG = next((a for a in sys.argv[1:] if not a.startswith('--')), None)
CACHE = ROOT / '.omo' / 'ida_cache'

ERR_RE = re.compile(
    r'^(.+?)\((\d+)\): error C(?:2065|3861): ["\u201c]([^"\u201d]+)["\u201d]')


def find_def(lines, err_line):
    """(def_head_idx, brace_idx, addr) for the def containing err_line.
    Anchors on the corpus structure: a standalone `// 0xADDR` marker at
    column 0, optionally `namespace X {`, then the def head with `{`
    within a few lines.  G42.5: also accepts the headless-body form
    (marker then bare `{` directly) -- decl insertion only needs the
    brace position and the address."""
    lo = max(0, err_line - 400)
    i = min(err_line, len(lines)) - 1
    while i >= lo:
        m = re.match(r'^//\s*(0x[0-9A-Fa-f]{5,8})\s*$', lines[i])
        if m:
            addr = int(m.group(1), 16)
            # scan forward for the def head
            j = i + 1
            skipped = 0
            while j < min(i + 6, len(lines)) and skipped < 4:
                s = lines[j].strip()
                if not s or re.match(r'^namespace\s+\w+\s*\{', s):
                    j += 1
                    continue
                if s == '{':
                    return j, j, addr        # headless body: brace is the def
                if '(' in s and not s.startswith('//') and \
                        not s.endswith(';') and '{' not in s:
                    b = j + 1
                    while b < min(j + 4, len(lines)):
                        if '{' in lines[b]:
                            return j, b, addr
                        if lines[b].strip() and '{' not in lines[b]:
                            break
                        b += 1
                    return None, None, None
                if s.startswith('//'):
                    skipped += 1
                j += 1
            return None, None, None
        i -= 1
    return None, None, None


def cache_decl(addr, name):
    """The cache's declaration line for local `name`, or None. Scans the
    cache's preamble (first 60 lines); tolerates initializers and
    array/[esp+..] forms."""
    cp = None
    for cand in ('func_0x%08X.json' % addr, 'func_0x%X.json' % addr):
        c = CACHE / cand
        if c.exists():
            cp = c
            break
    if cp is None:
        return None
    try:
        txt = json.load(open(cp, encoding='utf-8', errors='replace')).get('decompiled', '')
    except (OSError, json.JSONDecodeError):
        return None
    pat = re.compile(r'^\s*[\w:<>\*\s]+\b%s\s*(\[[^\]]*\])?\s*(=\s*[^;]*)?;'
                     % re.escape(name))
    for ln in txt.split('\n'):
        if pat.match(ln):
            return ln.strip()
    return None


def main():
    sites = []
    seen = set()
    for ln in open(LOG, encoding='utf-8', errors='replace'):
        m = ERR_RE.match(ln.strip())
        if not m:
            continue
        name = m.group(3)
        if not re.match(r'^[a-z]\w*$', name):
            continue
        key = (m.group(1), name)
        if key in seen:
            continue
        seen.add(key)
        sites.append((m.group(1), int(m.group(2)), name))
    print('unique local-name sites:', len(sites))

    edits = {}      # file -> [(line_idx, new_line_or_insert_at)]
    inserts = {}    # file -> {brace_idx: [decl lines]}
    n_ok = n_skip = 0
    why = {}
    def skip(reason):
        nonlocal n_skip
        n_skip += 1
        why[reason] = why.get(reason, 0) + 1
    for f, l, name in sites:
        try:
            lines = Path(f).read_text(encoding='utf-8',
                                      errors='replace').split('\n')
        except OSError:
            skip('file-read')
            continue
        di, bi, addr = find_def(lines, l)
        if di is None:
            skip('no-def-found')
            continue
        decl = cache_decl(addr, name)
        if not decl:
            skip('no-cache-decl')
            continue
        # already declared in the def span?
        end = bi + 1
        depth = 1
        while end < len(lines) and depth > 0:
            depth += lines[end].count('{') - lines[end].count('}')
            end += 1
        body = '\n'.join(lines[bi:end])
        # decl must be a statement-initial declaration line (type + name),
        # not a use like `x = result;` that merely ends with `name;`
        if re.search(r'^\s*[\w:<>\*\s&]+\b%s\s*(\[[^\]]*\])?\s*(=\s*[^;]*)?;'
                     % re.escape(name), body, re.M):
            skip('already-declared')
            continue
        # error site must be INSIDE this def (sanity)
        if not (di <= l - 1 < end):
            skip('site-outside-def')
            continue
        indent = re.match(r'\s*', lines[bi + 1] if bi + 1 < len(lines)
                          else lines[di]).group(0)
        inserts.setdefault(f, {}).setdefault(bi + 1, []).append(
            indent + decl)
        n_ok += 1

    print('local decls restored:', n_ok, ' skipped:', n_skip,
          ' reasons:', sorted(why.items(), key=lambda kv: -kv[1]))
    if APPLY:
        for f, bybrace in inserts.items():
            p = Path(f)
            lines = p.read_text(encoding='utf-8',
                                errors='replace').split('\n')
            for idx in sorted(bybrace, reverse=True):
                lines[idx:idx] = bybrace[idx]
            p.write_text('\n'.join(lines), encoding='utf-8', errors='replace')
        print('written %d file(s)' % len(inserts))
    else:
        print('DRYRUN -- pass --apply')


if __name__ == '__main__':
    main()
