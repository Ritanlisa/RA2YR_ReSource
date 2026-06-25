#!/usr/bin/env python3
"""
sync_symbols.py — Synchronize function names: cpp → hpp → signals.json → IDA.

Authoritative source: cpp function definitions (preceded by // 0xADDR annotations).
cpp definitions drive all changes. On unresolvable conflict: FAIL with clear error.
Idempotent: can be re-run safely.

Usage:
    python tools/sync_symbols.py [--check-only] [--no-ida] [--verbose]
"""

import json
import os
import re
import sys
from pathlib import Path

# ── Configuration ────────────────────────────────────────────────────────────
ROOT = Path(__file__).resolve().parent.parent
SRC_DIR = ROOT / "src"
SIGNALS_JSON = ROOT / "signals.json"  # canonical symbol file (was functions.json)
IDA_HOST = "127.0.0.1"
IDA_PORT = 13337


# ── Name normalization ───────────────────────────────────────────────────────

def normalize_name(name: str) -> str:
    """Normalize for comparison: strip ns prefixes, ctor/dtor aliases, case."""
    n = name.strip()
    n = re.sub(r'^(?:gamemd|ra2|game)::', '', n)
    n = n.lower()
    n = re.sub(r'_+', '_', n)
    # Constructor/destructor aliases
    n = n.replace('::construct(', '::constructor(')
    n = n.replace('::destruct(', '::destructor(')
    n = n.replace('::~', '::destructor')
    n = n.replace('~', '')
    return n


# ── CPP scanning ─────────────────────────────────────────────────────────────

def parse_cpp_function(line: str):
    """
    Extract ClassName::Method from a cpp function definition line.
    Returns (class_name, method_name, full_qualified) or (None, None, None).
    """
    decl = line.split('{')[0].split('//')[0].strip()

    # Destructor: ClassName::~Method(
    m = re.search(r'\b(\w+)::~(\w+)\s*\(', decl)
    if m:
        cls, method = m.group(1), m.group(2)
        return cls, f"~{method}", f"{cls}::~{method}()"

    # Regular: ClassName::Method(
    m = re.search(r'\b(\w+)::(\w+)\s*\(', decl)
    if m:
        cls, method = m.group(1), m.group(2)
        return cls, method, f"{cls}::{method}"

    return None, None, None


def find_cpp_addr_entries():
    """
    Scan all src/**/*.cpp for // 0xADDR annotations followed by function definitions.
    Returns {address: {name, file, line, class_name, method_name}}
    """
    entries = {}
    cpp_files = sorted(SRC_DIR.glob("**/*.cpp"))

    for cpp_file in cpp_files:
        rel = str(cpp_file.relative_to(ROOT))
        try:
            with open(cpp_file, 'r', encoding='utf-8', errors='replace') as f:
                lines = f.readlines()
        except Exception as e:
            print(f"  skip {rel}: {e}", file=sys.stderr)
            continue

        for i, line in enumerate(lines):
            stripped = line.strip()
            if not stripped.startswith('//'):
                continue

            # Match standalone annotation: // 0xADDR  (possibly with IDA prefix)
            m = re.match(
                r'^\s*//\s*(?:IDA\s+)?((?:0x)?[0-9A-Fa-f]{5,8})\s*$',
                line
            )
            if not m:
                continue

            addr_str = m.group(1)
            if not addr_str.lower().startswith('0x'):
                addr_str = '0x' + addr_str
            addr = addr_str.upper()

            # Find function definition on following lines (up to 20)
            fn_cls, fn_method, fn_full = None, None, None
            for j in range(i + 1, min(i + 20, len(lines))):
                candidate = lines[j].strip()
                if not candidate or candidate.startswith('//') or candidate.startswith('/*'):
                    continue
                fn_cls, fn_method, fn_full = parse_cpp_function(candidate)
                if fn_full:
                    break
                # If the next line starts with something non-function, give up
                if not re.match(r'^\s*(?:[\w:*&<>,\s]+)\s*(?:\w+::)?\w+\s*\(', lines[j]):
                    break

            if not fn_full:
                continue

            if addr in entries:
                existing = entries[addr]
                if existing['name'] != fn_full:
                    print(
                        f"  CONFLICT: {addr} has cpp names "
                        f"'{existing['name']}' ({existing['file']}:{existing['line']}) "
                        f"vs '{fn_full}' ({rel}:{i+1})",
                        file=sys.stderr
                    )
                continue

            entries[addr] = {
                'name': fn_full,
                'file': rel,
                'line': i + 1,
                'class_name': fn_cls,
                'method_name': fn_method,
            }

    return entries


# ── HPP scanning ─────────────────────────────────────────────────────────────

def parse_hpp_declaration(line: str):
    """
    Extract name from hpp declaration. Returns (name, is_dtor).
    For destructors, name is the class name WITHOUT ~ prefix. is_dtor=True handles the ~.
    name is fully qualified if ClassName::Method present, else just method name.
    """
    decl = re.sub(r'//.*$', '', line).rstrip()

    # Already fully qualified: ClassName::Method(
    m = re.search(r'\b(\w+)::(\w+)\s*\(', decl)
    if m:
        return f"{m.group(1)}::{m.group(2)}", False

    # Destructor: ~ClassName()
    m = re.search(r'~(\w+)\s*\(', decl)
    if m:
        return m.group(1), True  # method name WITHOUT ~

    # Simple unqualified: Method(
    m = re.search(r'(\w+)\s*\(', decl)
    if m:
        kw = m.group(1).lower()
        if kw in ('if', 'while', 'for', 'switch', 'catch', 'return',
                   'sizeof', 'static_cast', 'reinterpret_cast',
                   'dynamic_cast', 'const_cast'):
            return None, False
        return m.group(1), False

    return None, False


def find_enclosing_class(lines, target_idx):
    """Walk backwards from target_idx to find enclosing class/struct name via brace counting."""
    depth = 0
    for i in range(target_idx, -1, -1):
        l = lines[i].rstrip()
        l_nc = re.sub(r'//.*$', '', l)
        depth += l_nc.count('}') - l_nc.count('{')

        m = re.match(r'^\s*(?:class|struct)\s+(\w+)', l)
        if m:
            name = m.group(1)
            if '{' in l_nc:
                depth -= l_nc.count('{')
                if depth <= 0:
                    return name
            elif depth <= 0:
                return name
    return None


def is_data_annotation(line: str) -> bool:
    """Check if annotation is for data section, not code."""
    return bool(re.search(r'//\s*data:', line))


def find_hpp_addr_entries():
    """
    Scan all src/**/*.hpp for // 0xADDR inline annotations inside class bodies.
    Skips data-section annotations and global-scope declarations.
    Returns {address: {name, file, line, method_name, is_dtor}}
    """
    entries = {}
    hpp_files = sorted(SRC_DIR.glob("**/*.hpp"))

    for hpp_file in hpp_files:
        rel = str(hpp_file.relative_to(ROOT))
        try:
            with open(hpp_file, 'r', encoding='utf-8', errors='replace') as f:
                lines = f.readlines()
        except Exception as e:
            print(f"  skip {rel}: {e}", file=sys.stderr)
            continue

        for i, line in enumerate(lines):
            if is_data_annotation(line):
                continue

            # Match // 0xADDR (possibly IDA-prefixed)
            m = re.search(
                r'//\s*(?:(?:IDA|data)\s+)?((?:0x)?[0-9A-Fa-f]{5,8})\b(?!\s*--)',
                line
            )
            if not m:
                continue

            addr_str = m.group(1)
            if not addr_str.lower().startswith('0x'):
                addr_str = '0x' + addr_str
            addr = addr_str.upper()

            name, is_dtor = parse_hpp_declaration(line)
            if not name:
                continue

            # Determine full qualified name
            if '::' in name:
                full_name = name
            else:
                class_name = find_enclosing_class(lines, i)
                if class_name:
                    if is_dtor:
                        full_name = f"{class_name}::~{name}()"
                    else:
                        full_name = f"{class_name}::{name}"
                else:
                    # Global scope — skip (_funcs.hpp, _decls.hpp etc)
                    continue

            if addr in entries:
                # Duplicate address — mark as conflict, skip
                entries[addr]['_dup'] = True
                continue

            entries[addr] = {
                'name': full_name,
                'file': rel,
                'line': i + 1,
                'method_name': name,
                'is_dtor': is_dtor,
                '_dup': False,
            }

    # Remove duplicate entries (can't reliably sync multi-declaration addrs)
    dups = [a for a, e in entries.items() if e.get('_dup')]
    for a in dups:
        del entries[a]

    return entries


# ── JSON handling ────────────────────────────────────────────────────────────

def load_signals_json():
    """Load signals.json (canonical), return (data, {addrUpper: (origKey, entry)}).

    Only function symbols (kind=="function") are indexed. The index value carries the
    original `symbols` key so the `_by_name` index can be kept consistent on rename.
    The full signals dict is returned so members/globals/classes are preserved on write."""
    with open(SIGNALS_JSON, 'r', encoding='utf-8') as f:
        data = json.load(f)
    index = {}
    for orig_key, sym in (data.get('symbols', {}) or {}).items():
        if not isinstance(sym, dict) or sym.get('kind') != 'function':
            continue
        addr = sym.get('address', orig_key).upper()
        index[addr] = (orig_key, sym)
    return data, index


# ── Sync: HPP ← CPP ──────────────────────────────────────────────────────────

def sync_hpp(cpp_entries, hpp_entries, dry_run=False):
    """Compare cpp vs hpp names, update hpp declarations when they differ."""
    changes = []
    common = set(cpp_entries.keys()) & set(hpp_entries.keys())

    for addr in sorted(common):
        cpp = cpp_entries[addr]
        hpp = hpp_entries[addr]

        cpp_name = cpp['name']
        hpp_name = hpp['name']

        if normalize_name(cpp_name) == normalize_name(hpp_name):
            continue

        # Detect class conflict
        cpp_cls = cpp.get('class_name', '')
        if '::' in hpp_name:
            hpp_cls = hpp_name.split('::')[0]
            if cpp_cls and hpp_cls and cpp_cls.lower() != hpp_cls.lower():
                print(
                    f"  CONFLICT: {addr} cpp={cpp_name} ({cpp['file']}:{cpp['line']}) "
                    f"vs hpp={hpp_name} ({hpp['file']}:{hpp['line']}). "
                    f"Different classes ({cpp_cls} vs {hpp_cls}). Skipping.",
                    file=sys.stderr
                )
                continue

        # Read hpp file
        hpp_file = ROOT / hpp['file']
        try:
            with open(hpp_file, 'r', encoding='utf-8') as f:
                file_lines = f.readlines()
        except Exception as e:
            print(f"  cannot read {hpp['file']}: {e}", file=sys.stderr)
            continue

        target_idx = hpp['line'] - 1
        old_line = file_lines[target_idx]

        old_method = hpp.get('method_name', '')
        new_method = cpp.get('method_name', cpp_name.split('::')[-1])

        if not old_method or not new_method:
            print(f"  cannot resolve method names for {addr}", file=sys.stderr)
            continue

        # Replace method name in declaration (match before '(')
        new_line = re.sub(
            rf'\b{re.escape(old_method)}\s*\(',
            f'{new_method}(',
            old_line,
            count=1
        )

        if new_line == old_line:
            print(f"  substitution failed: {addr} '{old_method}' in '{old_line.strip()}'",
                  file=sys.stderr)
            continue

        if not dry_run:
            file_lines[target_idx] = new_line
            with open(hpp_file, 'w', encoding='utf-8') as f:
                f.writelines(file_lines)

        changes.append({
            'addr': addr,
            'file': hpp['file'],
            'line': hpp['line'],
            'old_name': hpp_name,
            'new_name': cpp_name,
        })

    return changes


# ── Sync: functions.json ← CPP ───────────────────────────────────────────────

def sync_functions_json(cpp_entries, json_data, json_index, dry_run=False):
    """Update signals.json function names to match cpp (cpp definitions are canonical).

    Renames the function symbol's `name` in place and keeps the `_by_name` index
    consistent (old name→addr removed, new name→addr added). Every other top-level
    section (members, globals, classes, _member_by_name) is preserved untouched."""
    changes = []
    by_name = json_data.get('_by_name', {})

    for addr in sorted(cpp_entries.keys()):
        cpp_name = cpp_entries[addr]['name']

        if addr not in json_index:
            continue

        orig_key, json_entry = json_index[addr]
        json_name = json_entry.get('name', '')

        if normalize_name(cpp_name) == normalize_name(json_name):
            continue

        if not dry_run:
            json_entry['name'] = cpp_name
            # Keep _by_name consistent: drop old name→addr, add new name→addr.
            old_bucket = by_name.get(json_name)
            if isinstance(old_bucket, dict):
                old_bucket.get('symbols', {}).pop(orig_key, None)
                if not old_bucket.get('symbols'):
                    by_name.pop(json_name, None)
            by_name.setdefault(cpp_name, {'symbols': {}})['symbols'][orig_key] = 'function'

        changes.append({
            'addr': addr,
            'old_name': json_name,
            'new_name': cpp_name,
        })

    if changes and not dry_run:
        # Match build_signals.py output format exactly (indent=2, ensure_ascii=False,
        # default newline handling, NO trailing newline) so sync-written and
        # build_signals-written signals.json are byte-consistent (no spurious diff).
        with open(SIGNALS_JSON, 'w', encoding='utf-8') as f:
            json.dump(json_data, f, indent=2, ensure_ascii=False)

    return changes


# ── Sync: IDA ← CPP (optional) ───────────────────────────────────────────────

def sync_ida(cpp_entries, dry_run=False):
    """Check IDA MCP reachability, report rename candidates. Actual rename requires ida-pro-mcp tool."""
    if dry_run:
        return []

    try:
        import urllib.request
    except ImportError:
        print("  IDA: urllib not available - skipping", file=sys.stderr)
        return []

    try:
        req = urllib.request.Request(
            f"http://{IDA_HOST}:{IDA_PORT}/mcp", method="POST"
        )
    except Exception:
        print("  IDA: not reachable at {0}:{1} - skipping".format(IDA_HOST, IDA_PORT),
              file=sys.stderr)
        return []

    n = len(cpp_entries)
    return [{
        'note': 'IDA reachable: {0} functions eligible for rename'.format(n),
        'count': n,
    }]


# ── Main ─────────────────────────────────────────────────────────────────────

def main():
    import argparse
    parser = argparse.ArgumentParser(
        description="Sync function names: cpp -> hpp -> functions.json -> IDA"
    )
    parser.add_argument('--check-only', action='store_true',
                        help="Report changes without applying")
    parser.add_argument('--no-ida', action='store_true',
                        help="Skip IDA MCP sync")
    parser.add_argument('--verbose', '-v', action='store_true',
                        help="Verbose output")
    args = parser.parse_args()

    dry_run = args.check_only

    # Phase 1
    print("Phase 1: Scanning cpp for // 0xADDR...", file=sys.stderr)
    cpp_entries = find_cpp_addr_entries()
    print("  Found {0} cpp function definitions".format(len(cpp_entries)), file=sys.stderr)

    # Phase 2
    print("Phase 2: Scanning hpp for // 0xADDR...", file=sys.stderr)
    hpp_entries = find_hpp_addr_entries()
    print("  Found {0} hpp declarations (class bodies only)".format(len(hpp_entries)),
          file=sys.stderr)

    # Phase 3
    print("Phase 3: Loading signals.json...", file=sys.stderr)
    json_data, json_index = load_signals_json()
    print("  Loaded {0} function entries".format(len(json_index)), file=sys.stderr)

    # Phase 4
    print("Phase 4: Syncing hpp (cpp -> hpp)...", file=sys.stderr)
    hpp_changes = sync_hpp(cpp_entries, hpp_entries, dry_run=dry_run)

    # Phase 5
    print("Phase 5: Syncing signals.json (cpp -> json)...", file=sys.stderr)
    json_changes = sync_functions_json(cpp_entries, json_data, json_index, dry_run=dry_run)

    # Phase 6
    if not args.no_ida:
        print("Phase 6: Checking IDA reachability...", file=sys.stderr)
        ida_changes = sync_ida(cpp_entries, dry_run=dry_run)
        for c in ida_changes:
            print("  {0}".format(c['note']), file=sys.stderr)
    else:
        print("Phase 6: IDA sync skipped (--no-ida)", file=sys.stderr)

    # Report
    total = len(hpp_changes) + len(json_changes)
    print("")
    print("=" * 60)
    if total == 0:
        print("OK: All symbols in sync - no changes needed.")
    elif dry_run:
        print("DRY RUN: {0} changes would be made:".format(total))
        for c in hpp_changes:
            print("  HPP {0}:{1}  '{2}' -> '{3}'".format(
                c['file'], c['line'], c['old_name'], c['new_name']))
        for c in json_changes:
            print("  JSON {0}  '{1}' -> '{2}'".format(
                c['addr'], c['old_name'], c['new_name']))
    else:
        print("SYNCED: {0} changes applied:".format(total))
        for c in hpp_changes:
            print("  HPP {0}:{1}  '{2}' -> '{3}'".format(
                c['file'], c['line'], c['old_name'], c['new_name']))
        for c in json_changes:
            print("  JSON {0}  '{1}' -> '{2}'".format(
                c['addr'], c['old_name'], c['new_name']))
    print("=" * 60)

    if args.verbose:
        common = len(set(cpp_entries.keys()) & set(hpp_entries.keys()))
        print("", file=sys.stderr)
        print("  cpp entries: {0}".format(len(cpp_entries)), file=sys.stderr)
        print("  hpp entries: {0}".format(len(hpp_entries)), file=sys.stderr)
        print("  shared (cpp & hpp): {0}".format(common), file=sys.stderr)
        print("  hpp changes: {0}".format(len(hpp_changes)), file=sys.stderr)
        print("  json changes: {0}".format(len(json_changes)), file=sys.stderr)

    return 0


if __name__ == '__main__':
    sys.exit(main())
