#!/usr/bin/env python3
"""find_addr_collisions.py — Detect hpp annotation collisions.

A collision = the SAME `// 0xADDR` annotation appears on TWO DIFFERENT function
names across hpp files. This violates the 1:1 address->function rule (templates
excepted, but templates use the SAME name at DIFFERENT addresses, so they never
produce a same-address/different-name collision).

This script reuses the EXACT per-line name-resolution logic from
audit_consistency.py (regexes, enclosing-class lookup, comment-name extraction)
but, instead of collapsing to one name per address, it records EVERY occurrence.
Then it groups by address and reports addresses with >=2 distinct normalized
names.

For each collision it looks up signals.json (canonical IDA ground truth) to
determine which name is correct.

Usage:
  python tools/find_addr_collisions.py            # human report
  python tools/find_addr_collisions.py --json     # JSON to stdout
"""
import json, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parent.parent

# Import faithful helpers from the audit tool so detection matches what the
# audit "sees" line-by-line.
sys.path.insert(0, str(ROOT / "tools"))
import audit_consistency as ac


def normalize_addr(addr):
    return ac.normalize_addr(addr)


def load_signals():
    """Return {normAddr: name} from signals.json function symbols + globals."""
    with open(ROOT / "signals.json", encoding="utf-8") as f:
        data = json.load(f)
    addr2name = {}
    addr2kind = {}
    for key, sym in (data.get("symbols", {}) or {}).items():
        if not isinstance(sym, dict):
            continue
        a = normalize_addr(sym.get("address", key))
        addr2name[a] = sym.get("name", "")
        addr2kind[a] = sym.get("kind", "")
    # globals too (so we can recognise data-section addresses)
    for key, g in (data.get("globals", {}) or {}).items():
        if not isinstance(g, dict):
            continue
        a = normalize_addr(g.get("address", key))
        if a not in addr2name:
            addr2name[a] = g.get("name", "")
            addr2kind[a] = "global"
    return addr2name, addr2kind


# --- Per-line annotation extraction (mirrors ac.extract_hpp_annotations) ---

addr_pattern = re.compile(r'//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{5,8})')
func_pattern = re.compile(r'(\w[\w:]*(?:<[^>]*>)?)\s*\([^)]*\)\s*(?:const\s*)?\s*;\s*//\s*0x')
comment_paren_pattern = re.compile(r'//\s*(?:IDA\s+)?0x[0-9A-Fa-f]{5,8}\s*\((\w[\w:]*(?:<[^>]*>)?)\)')
comment_dash_pattern = re.compile(r'//\s*(?:IDA\s+)?(?:0x[0-9A-Fa-f]{5,8}\s*--\s+)(\w[\w:]*(?:<[^>]*>)?)')
# explicit data-section marker we must skip
data_addr_pattern = re.compile(r'//\s*data:\s*(0x[0-9A-Fa-f]{5,8})')


def resolve_name_for_line(lines, lineno_1based, depth):
    """Replicate ac's name resolution for a single annotated line.

    lineno_1based: 1-indexed line number (as ac uses).
    Returns the resolved function name (possibly None).
    """
    line = lines[lineno_1based - 1]
    name = None
    fm = func_pattern.search(line)
    if fm:
        name = fm.group(1)
    cm = comment_paren_pattern.search(line)
    if cm:
        cname = cm.group(1)
        if cname and ':' in cname:
            name = cname
    if not name or ':' not in str(name):
        cm2 = comment_dash_pattern.search(line)
        if cm2:
            cname = cm2.group(1)
            if cname and ':' in cname:
                name = cname
    if (not name or ':' not in str(name)) and lineno_1based > 1:
        prev_line = lines[lineno_1based - 2]
        cm_prev = comment_dash_pattern.search(prev_line)
        if cm_prev:
            cname = cm_prev.group(1)
            if cname and ':' in cname:
                name = cname
    if name and '::' not in name:
        cls_name = ac._find_enclosing_class(lines, lineno_1based - 1, depth)
        if cls_name:
            name = f"{cls_name}::{name}"
    return name


def scan():
    """Scan hpp files; return {addr: [ {name, norm, file, line, raw_line} ]}."""
    occ = defaultdict(list)
    dirs = ["src", "include/gamemd"]
    for d in dirs:
        dp = ROOT / d
        if not dp.exists():
            continue
        for hpp in sorted(dp.rglob("*.hpp")):
            try:
                with open(hpp, encoding='utf-8', errors='replace') as f:
                    lines = f.readlines()
            except Exception:
                continue
            rel = str(hpp.relative_to(ROOT)).replace("\\", "/")
            depth = ac._compute_bracket_depth(lines)
            for lineno, line in enumerate(lines, 1):
                # Skip pure data-section annotations entirely
                if data_addr_pattern.search(line) and not re.search(r'(?<!data:\s)//\s*(?:IDA\s+)?0x', line):
                    # only a data: marker; but be safe — check addr_pattern below
                    pass
                m = addr_pattern.search(line)
                if not m:
                    continue
                # If the ONLY hex on this line is a data: marker, addr_pattern
                # would have failed to match it (it doesn't accept "data:"),
                # so reaching here means a real code annotation exists.
                addr = normalize_addr(m.group(1))
                name = resolve_name_for_line(lines, lineno, depth)
                norm = ac.normalize_name(name).lower() if name else None
                occ[addr].append({
                    "name": name,
                    "norm": norm,
                    "file": rel,
                    "line": lineno,
                    "raw": line.rstrip("\n"),
                })
    return occ


def find_collisions(occ):
    """Return list of collisions: addrs with >=2 DISTINCT non-None normalized names."""
    collisions = []
    for addr, items in occ.items():
        named = [it for it in items if it["norm"]]
        distinct = set(it["norm"] for it in named)
        if len(distinct) >= 2:
            collisions.append((addr, items, distinct))
    collisions.sort(key=lambda x: x[0])
    return collisions


def main():
    json_out = "--json" in sys.argv
    addr2name, addr2kind = load_signals()
    occ = scan()
    collisions = find_collisions(occ)

    results = []
    for addr, items, distinct in collisions:
        canon = addr2name.get(addr)
        canon_norm = ac.normalize_name(canon).lower() if canon else None
        named = [it for it in items if it["norm"]]
        # which occurrences match canonical?
        for it in named:
            it["matches_canon"] = (canon_norm is not None and it["norm"] == canon_norm)
        results.append({
            "addr": addr,
            "canonical_name": canon,
            "canonical_kind": addr2kind.get(addr),
            "distinct_names": sorted(distinct),
            "occurrences": named,
        })

    if json_out:
        print(json.dumps(results, indent=2, ensure_ascii=False))
        return

    print("=" * 70)
    print(f"  HPP ADDRESS COLLISIONS: {len(results)} addresses with >=2 distinct names")
    print("=" * 70)
    for r in results:
        print(f"\n[{r['addr']}]  canonical(signals.json) = {r['canonical_name']!r}  kind={r['canonical_kind']}")
        for it in r["occurrences"]:
            flag = "  <== MATCHES CANON" if it.get("matches_canon") else "  *** WRONG? ***"
            print(f"    {it['file']}:{it['line']}  name={it['name']!r}{flag}")
            print(f"        {it['raw'].strip()[:110]}")
    print(f"\nTotal collisions: {len(results)}")


if __name__ == "__main__":
    main()
