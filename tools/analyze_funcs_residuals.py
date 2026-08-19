#!/usr/bin/env python3
r"""analyze_funcs_residuals.py — READ-ONLY analysis of active residual decls in the
7 src/<mod>/_funcs.hpp files.

For each ACTIVE (uncommented) residual declaration line carrying a `// 0xADDR`
annotation, decide whether REMOVING it from _funcs.hpp keeps the audit at 0/0.

Method: mirror audit_consistency.extract_hpp_annotations EXACTLY, but scan only
the NON-_funcs hpp files. The resolved name at each address is what the audit
would see after the _funcs residual is removed. Compare to signals.json (canonical).

  resolved_without_funcs is None        -> DELETE_SAFE (addr becomes json-only)
  resolved == signals (norm-equiv)      -> DELETE_SAFE (class body already correct)
  resolved != signals                   -> CONFLICT (deleting exposes a mismatch;
                                            the class-body annotation is wrong and
                                            must be fixed first)

Also reports whether the residual's OWN name matches signals (so we know if a
commented-but-still-visible line would itself be consistent).

Output: .omo/funcs_residual_analysis.json + human summary on stdout.
"""
import json, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from audit_consistency import (  # noqa: E402
    normalize_addr, normalize_name, normalize_name_bidirectional,
    _compute_bracket_depth, _find_enclosing_class,
)

SRC = ROOT / "src"
MODULES = ["core", "entity", "misc", "object", "render", "structure", "system"]
FUNCS_FILES = {SRC / m / "_funcs.hpp" for m in MODULES}
HPP_DIRS = ["src", "include/gamemd"]

# --- audit-identical extraction regexes (copied from extract_hpp_annotations) ---
ADDR_PAT = re.compile(r'//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{5,8})')
FUNC_PAT = re.compile(r'(\w[\w:]*(?:<[^>]*>)?)\s*\([^)]*\)\s*(?:const\s*)?\s*;\s*//\s*0x')
COMMENT_PAREN_PAT = re.compile(r'//\s*(?:IDA\s+)?0x[0-9A-Fa-f]{5,8}\s*\((\w[\w:]*(?:<[^>]*>)?)\)')
COMMENT_DASH_PAT = re.compile(r'//\s*(?:IDA\s+)?(?:0x[0-9A-Fa-f]{5,8}\s*--\s+)(\w[\w:]*(?:<[^>]*>)?)')


def extract_line_name(lines, lineno0, depth):
    """Replicate audit's per-line name extraction for one line (0-indexed)."""
    line = lines[lineno0]
    name = None
    fm = FUNC_PAT.search(line)
    if fm:
        name = fm.group(1)
    cm = COMMENT_PAREN_PAT.search(line)
    if cm and cm.group(1) and ':' in cm.group(1):
        name = cm.group(1)
    if not name or ':' not in str(name):
        cm2 = COMMENT_DASH_PAT.search(line)
        if cm2 and cm2.group(1) and ':' in cm2.group(1):
            name = cm2.group(1)
    if (not name or ':' not in str(name)) and lineno0 > 0:
        cm_prev = COMMENT_DASH_PAT.search(lines[lineno0 - 1])
        if cm_prev and cm_prev.group(1) and ':' in cm_prev.group(1):
            name = cm_prev.group(1)
    if name and '::' not in name:
        cls = _find_enclosing_class(lines, lineno0, depth)
        if cls:
            name = f"{cls}::{name}"
    return name


def scan_hpp(exclude_funcs=True):
    """Mirror extract_hpp_annotations -> {addr: {name, files:[file:line]}}.
    rglob order preserved so 'first :: name wins' matches the audit."""
    result = {}
    for directory in HPP_DIRS:
        dp = ROOT / directory
        if not dp.exists():
            continue
        for hpp in dp.rglob("*.hpp"):
            if exclude_funcs and hpp in FUNCS_FILES:
                continue
            try:
                lines = hpp.read_text(encoding="utf-8", errors="replace").splitlines()
            except Exception:
                continue
            rel = str(hpp.relative_to(ROOT)).replace("\\", "/")
            depth = _compute_bracket_depth(lines)
            for i, line in enumerate(lines):
                m = ADDR_PAT.search(line)
                if not m:
                    continue
                addr = normalize_addr(m.group(1))
                name = extract_line_name(lines, i, depth)
                if addr not in result:
                    result[addr] = {"name": name, "files": []}
                result[addr]["files"].append(f"{rel}:{i+1}")
                if name:
                    stored = result[addr].get("name")
                    if not stored or (':' in name and ':' not in (stored or '')):
                        result[addr]["name"] = name
    return result


def load_signals():
    data = json.load(open(ROOT / "signals.json", encoding="utf-8"))
    by_addr = {}
    for k, sym in (data.get("symbols", {}) or {}).items():
        if not isinstance(sym, dict) or sym.get("kind") != "function":
            continue
        by_addr[normalize_addr(sym.get("address", k))] = sym.get("name", "")
    return by_addr


DECL_RE = re.compile(
    r'^(?P<rt>[A-Za-z_][\w\s\*&<>]*?[\w\*&>])\s+'
    r'(?:(?:__\w+|WINAPI|CALLBACK)\s+)?'
    r'(?P<qname>~?[A-Za-z_]\w*(?:::~?[\w\[\]]+)*)'
    r'\s*\((?P<params>[^)]*)\)'
    r'\s*(?:const\b\s*)?(?:noexcept\b\s*)?;'
)


def equiv(a, b):
    if not a or not b:
        return False
    if normalize_name(a).lower() == normalize_name(b).lower():
        return True
    _, _, eq, _ = normalize_name_bidirectional(a, b)
    return eq


def main():
    sig = load_signals()
    comp = scan_hpp(exclude_funcs=True)   # what the audit sees WITHOUT _funcs files

    out = {}
    counts = defaultdict(int)
    for m in MODULES:
        path = SRC / m / "_funcs.hpp"
        lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
        recs = []
        for i, line in enumerate(lines):
            s = line.strip()
            if not s or s.startswith("//"):
                continue   # only ACTIVE (uncommented) lines
            am = ADDR_PAT.search(line)
            if not am:
                continue
            dm = DECL_RE.match(s)
            if not dm:
                continue
            addr = normalize_addr(am.group(1))
            local = dm.group("qname")
            S = sig.get(addr)
            c = comp.get(addr)
            resolved = c["name"] if c else None
            comp_files = c["files"] if c else []
            if resolved is None:
                decision = "DELETE_SAFE_no_competitor"
            elif S and equiv(resolved, S):
                decision = "DELETE_SAFE_class_correct"
            elif S and equiv(resolved, local):
                decision = "DELETE_SAFE_class_matches_funcs"
            else:
                decision = "CONFLICT"
            counts[decision] += 1
            recs.append({
                "lineno": i + 1, "addr": addr, "local_name": local,
                "signals_name": S, "resolved_without_funcs": resolved,
                "competitor_files": comp_files, "decision": decision,
                "raw": s,
            })
        out[m] = recs

    json.dump(out, open(ROOT / ".omo" / "funcs_residual_analysis.json", "w"), indent=1)

    print("=== Active residual decision counts ===")
    for k in sorted(counts):
        print(f"  {k}: {counts[k]}")
    print()
    for m in MODULES:
        recs = out[m]
        if not recs:
            print(f"--- {m}: (no active residuals) ---")
            continue
        nconf = sum(1 for r in recs if r["decision"] == "CONFLICT")
        print(f"--- {m}: {len(recs)} active residuals, {nconf} CONFLICT ---")
        for r in recs:
            if r["decision"] == "CONFLICT":
                print(f"  L{r['lineno']} {r['addr']} funcs={r['local_name']!r} "
                      f"signals={r['signals_name']!r} class_resolves={r['resolved_without_funcs']!r}")
                for cf in r["competitor_files"]:
                    print(f"        @ {cf}")
    print("\nFull detail -> .omo/funcs_residual_analysis.json")


if __name__ == "__main__":
    main()
