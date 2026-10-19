#!/usr/bin/env python3
"""X79a -- token-only rename of `vt_*` identifiers (NOT `vt_slot_*`).

Fixed rule (user X79a):
  * every identifier matching ``\\bvt_(?!slot_)[A-Za-z0-9_]+`` is renamed;
  * if a declaration line of the identifier carries ``// data: 0xADDR``
    (or a ``/*0xADDR*/`` declaration comment), new name = ``g_ptr_<ADDR>``
    (uppercase hex, no 0x);
  * otherwise new name = ``g_var_<hash6>`` where hash6 is the first six hex
    characters of sha1(old_name) -- deterministic, never skipped;
  * replacement is word-boundary exact, everywhere under ``src/``
    (declarations, uses, comments, raw_decomp, csp_canon bodies);
  * no line is deleted, inserted, merged or re-ordered; types, initializers
    and comments keep their text except for the renamed identifier;
  * ``vt_slot_*`` and the REVERSE-protected files are never touched.

Idempotent: after a successful apply a second run finds 0 tokens / 0 writes.

Usage:
  python tools/csp_export/x79a_rename_vt_globals.py --dry-run
  python tools/csp_export/x79a_rename_vt_globals.py --apply
  python tools/csp_export/x79a_rename_vt_globals.py --dry-run --report FILE
"""
import argparse
import hashlib
import os
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
SRC = ROOT / 'src'
EVID = ROOT / '.omo' / 'evidence' / 'optimization' / 'x79a'

# Source text files.  `.inc` = csp_canon bodies (grep=0 requirement);
# `.bak` = src/structure/building.cpp.bak (inside src, grep=0 requirement).
EXTS = ('.cpp', '.hpp', '.h', '.inl', '.inc', '.c', '.cc', '.cxx',
        '.hh', '.hxx', '.bak')

TOKEN = re.compile(r'\bvt_(?!slot_)[A-Za-z0-9_]+')
DATA_RE = re.compile(r'//\s*data:\s*0x([0-9A-Fa-f]{6,8})\b')
BLOCK_ADDR_RE = re.compile(r'/\*\s*0x([0-9A-Fa-f]{6,8})\s*\*/')

# Paths that must never be written (AGENTS.md REVERSE pipeline protection,
# plus this tool's own copy of the list).
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

_IDENT = re.compile(r'[A-Za-z_][A-Za-z0-9_]*')


def read_text(path):
    """Decode utf-8 with surrogateescape so every byte round-trips."""
    return path.read_bytes().decode('utf-8', 'surrogateescape')


def write_text_atomic(path, text):
    data = text.encode('utf-8', 'surrogateescape')
    tmp = path.with_name(path.name + '.x79a.tmp')
    with open(tmp, 'wb') as fh:
        fh.write(data)
    os.replace(tmp, path)


def iter_source_files():
    for p in sorted(SRC.rglob('*')):
        if not p.is_file():
            continue
        if p.suffix.lower() in EXTS:
            yield p


def global_decl_re(name):
    """True when `code` (comment-free line prefix) declares global `name`.

    Accepts the two shapes present in the tree:
      extern unsigned char vt_X[4];
      extern void* vt_X;
    plus general scalar/pointer/array definitions.  Function declarations
    (``... vt_X(...)``) deliberately do NOT match.
    """
    esc = re.escape(name)
    return re.compile(
        r'^\s*(?:extern\s+|static\s+|const\s+|volatile\s+|'
        r'__declspec\([^)]*\)\s+)*'
        r'(?:(?:unsigned|signed|long|short)\s+)*'
        r'(?:char|int|short|long|float|double|bool|void|'
        r'__int(?:8|16|32|64)|[A-Za-z_]\w*)\s*(?:\*\s*)*'
        + esc +
        r'\s*(?:\[[^\]]*\]\s*)?(?:=[^;]*)?;\s*$')


def collect(files):
    """Scan all files once.

    Returns (occ, file_occ, name_files, addr_by_name, addr_lines,
             conflicts, identifier_set).
    """
    occ = Counter()
    file_occ = Counter()
    name_files = defaultdict(set)
    addr_by_name = {}
    addr_lines = defaultdict(list)
    conflicts = defaultdict(set)
    identifiers = set()

    for path in files:
        rel = path.relative_to(ROOT).as_posix()
        text = read_text(path)
        identifiers.update(_IDENT.findall(text))
        hits = 0
        for ln, line in enumerate(text.split('\n'), 1):
            matches = list(TOKEN.finditer(line))
            if not matches:
                continue
            hits += len(matches)
            for m in matches:
                name = m.group(0)
                occ[name] += 1
                name_files[name].add(rel)
            # --- declaration address extraction (same line only) ---------
            code = None
            addr = None
            md = DATA_RE.search(line)
            if md:
                addr = md.group(1)
                code = line[:md.start()]
            else:
                mb = BLOCK_ADDR_RE.search(line)
                if mb:
                    addr = mb.group(1)
                    code = line[:mb.start()]
            if addr is None:
                continue
            for m in matches:
                if code is None or m.start() > len(code):
                    continue
                name = m.group(0)
                if not global_decl_re(name).match(code):
                    continue
                a = addr.upper()
                addr_lines[name].append((rel, ln, a, line.strip()))
                prev = addr_by_name.get(name)
                if prev is None:
                    addr_by_name[name] = a
                elif prev != a:
                    conflicts[name].add(prev)
                    conflicts[name].add(a)
        file_occ[rel] = hits
    return (occ, file_occ, name_files, addr_by_name, addr_lines,
            conflicts, identifiers)


def hash6(name):
    return hashlib.sha1(name.encode('utf-8')).hexdigest()[:6]


def build_mapping(occ, addr_by_name):
    mapping = {}
    for name in occ:
        addr = addr_by_name.get(name)
        mapping[name] = ('g_ptr_%s' % addr) if addr else ('g_var_%s' % hash6(name))
    return mapping


def apply_mapping(text, mapping):
    return TOKEN.sub(lambda m: mapping.get(m.group(0), m.group(0)), text)


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    g = ap.add_mutually_exclusive_group()
    g.add_argument('--dry-run', action='store_true',
                   help='print mapping/counts, write nothing (default)')
    g.add_argument('--apply', action='store_true',
                   help='rewrite src/ files in place')
    ap.add_argument('--report', default=None,
                    help='write a TSV mapping + counts report to this path '
                         '(dry-run stays read-only unless given)')
    ap.add_argument('--show-map', action='store_true', default=True,
                    help='print the full mapping table (default)')
    args = ap.parse_args(argv)
    apply = bool(args.apply)

    files = list(iter_source_files())
    (occ, file_occ, name_files, addr_by_name, addr_lines,
     conflicts, identifiers) = collect(files)
    mapping = build_mapping(occ, addr_by_name)

    # ---- reverse map / collision checks ---------------------------------
    new_to_old = defaultdict(set)
    for old, new in mapping.items():
        new_to_old[new].add(old)
    merged = {new: sorted(olds) for new, olds in new_to_old.items()
              if len(olds) > 1}
    # new name colliding with a pre-existing identifier (not one of the old
    # vt_ names being renamed away) is fatal -- would alias two symbols.
    collisions = {}
    for old, new in mapping.items():
        if new in identifiers and new not in mapping:
            collisions.setdefault(new, []).append(old)

    total_occ = sum(occ.values())
    addr_names = sum(1 for n in occ if n in addr_by_name)
    hash_names = len(occ) - addr_names

    print('X79a vt_* rename plan (%s)' % ('APPLY' if apply else 'DRY-RUN'))
    print('  src files scanned : %d' % len(files))
    print('  occurrences       : %d' % total_occ)
    print('  unique names      : %d' % len(occ))
    print('  via // data: ADDR : %d names / %d occurrences'
          % (addr_names, sum(occ[n] for n in occ if n in addr_by_name)))
    print('  via sha1 hash     : %d names / %d occurrences'
          % (hash_names, sum(occ[n] for n in occ if n not in addr_by_name)))
    print('  files with hits   : %d' % len([k for k, v in file_occ.items() if v]))
    print('  address conflicts : %d' % len(conflicts))
    print('  new-name merges   : %d' % len(merged))
    for new, olds in merged.items():
        print('    MERGE %s <- %s' % (new, ', '.join(olds)))
    print('  existing-ident collisions : %d' % len(collisions))
    for new, olds in collisions.items():
        print('    COLLISION %s <- %s' % (new, ', '.join(olds)))

    if conflicts:
        print('\nADDRESS CONFLICTS (apply aborts):')
        for name, addrs in sorted(conflicts.items()):
            print('  %s : %s' % (name, sorted(addrs)))
            for rel, ln, a, line in addr_lines[name]:
                print('    %s:%d %s  %s' % (rel, ln, a, line[:160]))
        if apply:
            return 2

    if args.show_map:
        print('\nMAPPING (old\tnew\tcount\taddr)')
        for old in sorted(mapping, key=lambda n: (-occ[n], n)):
            print('%s\t%s\t%d\t%s' % (
                old, mapping[old], occ[old],
                addr_by_name.get(old, 'hash:' + hash6(old))))

    print('\nPER-FILE OCCURRENCES')
    for rel, n in sorted(file_occ.items(), key=lambda kv: (-kv[1], kv[0])):
        if n:
            print('%d\t%s' % (n, rel))

    if args.report:
        rp = Path(args.report)
        rp.parent.mkdir(parents=True, exist_ok=True)
        lines = ['# x79a mapping  old\tnew\tcount\taddr']
        for old in sorted(mapping, key=lambda n: (-occ[n], n)):
            lines.append('%s\t%s\t%d\t%s' % (
                old, mapping[old], occ[old],
                addr_by_name.get(old, 'hash:' + hash6(old))))
        lines.append('')
        lines.append('# per-file occurrences')
        for rel, n in sorted(file_occ.items(), key=lambda kv: (-kv[1], kv[0])):
            if n:
                lines.append('%d\t%s' % (n, rel))
        rp.write_text('\n'.join(lines) + '\n', encoding='utf-8')
        print('\nreport written: %s' % rp)

    if not apply:
        print('\nDRY-RUN: no file written.')
        return 0

    # ---- apply ----------------------------------------------------------
    if not mapping:
        print('\nAPPLY: nothing to rename (idempotent 0-write run).')
        return 0

    touched = []
    protected_hits = []
    for path in files:
        rel = path.relative_to(ROOT).as_posix()
        old_text = read_text(path)
        new_text = apply_mapping(old_text, mapping)
        if new_text == old_text:
            continue
        if rel in PROTECTED:
            protected_hits.append(rel)
            continue
        write_text_atomic(path, new_text)
        touched.append(rel)

    print('\nAPPLIED: %d files rewritten' % len(touched))
    for rel in touched:
        print('  %s' % rel)
    if protected_hits:
        print('PROTECTED FILES WITH MATCHES (not written): %s'
              % ', '.join(protected_hits))
        return 3
    return 0


if __name__ == '__main__':
    sys.exit(main())
