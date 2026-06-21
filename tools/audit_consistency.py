#!/usr/bin/env python3
"""audit_consistency.py — Cross-validate functions.json, IDA function DB, hpp annotations.

Data sources:
  1. injectFunctionTest/functions.json (stripped) — REVERSE pipeline entries
  2. tools/ida_function_db.json — IDA-extracted function metadata
  3. src/ + include/gamemd/ hpp files — `// 0xADDR` address annotations
  4. tools/fr_crt_exclusions.json — CRT/library function exclusions

Output:
  - name_mismatches: entries where json/idb/hpp names differ
  - orphan_addresses: addresses in one source but not others
  - coverage: game function annotation stats
  - field_check: params presence in call.params

Usage:
  python tools/audit_consistency.py         # human-readable report
  python tools/audit_consistency.py --json  # machine-readable JSON to stdout
"""
import json, os, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parent.parent

# --- Data loading ---

def load_functions_json():
    """Load stripped functions.json → {addr: entry} + set of addrs."""
    path = ROOT / "injectFunctionTest" / "functions.json"
    with open(path) as f:
        data = json.load(f)
    entries = data.get("functions", [])
    fn_map = {}
    for e in entries:
        addr = normalize_addr(e["address"])
        fn_map[addr] = e
    return fn_map, entries

def load_ida_function_db():
    """Load tools/ida_function_db.json → {addr: entry}."""
    path = ROOT / "tools" / "ida_function_db.json"
    if not path.exists():
        print(f"WARNING: {path} not found — ida_function_db checks skipped", file=sys.stderr)
        return {}
    with open(path) as f:
        data = json.load(f)
    result = {}
    for addr, entry in data.items():
        result[normalize_addr(addr)] = entry
    return result

def load_crt_exclusions():
    """Load tools/fr_crt_exclusions.json → set of addrs."""
    path = ROOT / "tools" / "fr_crt_exclusions.json"
    if not path.exists():
        return set()
    with open(path) as f:
        data = json.load(f)
    excluded = data.get("excluded_addresses", [])
    return {normalize_addr(a) for a in excluded}

# --- Address normalization ---

def normalize_addr(addr):
    """Normalize address to uppercase 8-char hex string with 0x prefix."""
    if not addr:
        return ""
    a = str(addr).strip().upper()
    if a.startswith("0X"):
        a = "0X" + a[2:]  # preserve case of prefix? No, normalize prefix too
    # Normalize to standard format
    a = a.replace("0X", "0x").upper()
    if not a.startswith("0X"):
        a = "0x" + a.lstrip("0X").zfill(8)
    # Re-uppercase after 0x handling
    if a.startswith("0x"):
        a = "0X" + a[2:].upper()
    # Ensure proper padding
    hex_part = a[2:] if a.startswith("0X") else a
    hex_part = hex_part.zfill(8)
    return "0X" + hex_part

# --- HPP annotation extraction ---

def _find_enclosing_class(lines, line_no):
    """Find enclosing class or namespace name for a line (0-indexed). Returns name or None."""
    for j in range(line_no, max(0, line_no - 800), -1):
        cls_match = re.search(r'^\s*(?:class|struct|namespace)\s+(\w+)', lines[j])
        if not cls_match:
            continue
        name = cls_match.group(1)
        # Verify we are inside the body (brace depth > 0 after processing declaration)
        depth = 0
        for k in range(j, min(len(lines), line_no + 1)):
            depth += lines[k].count('{') - lines[k].count('}')
            if depth > 0:
                return name
        return None
    return None

def extract_hpp_annotations(directories):
    """Extract `// 0xADDR` annotations from hpp files.
    
    Returns: {addr: {"name": function_name_or_None, "files": [file_paths]}}
    """
    addr_pattern = re.compile(r'//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{5,8})')
    # Simple function name extraction: last identifier before (params) before the comment
    func_pattern = re.compile(r'(\w[\w:]*(?:<[^>]*>)?)\s*\([^)]*\)\s*(?:const\s*)?\s*;\s*//\s*0x')
    # Broader: any word before the // 0x comment that looks like a function signature
    line_pattern = re.compile(r'(?:^|\n)([^\n]*?)\s*//\s*(?:IDA\s+)?(0x[0-9A-Fa-f]{5,8})')
    # Comment-based name extraction: "// 0xADDR (ClassName::Method)" 
    comment_paren_pattern = re.compile(r'//\s*(?:IDA\s+)?0x[0-9A-Fa-f]{5,8}\s*\((\w[\w:]*(?:<[^>]*>)?)\)')
    # Also: "// IDA 0xADDR -- ClassName::Method" or "// 0xADDR -- ClassName::Method"  
    comment_dash_pattern = re.compile(r'//\s*(?:IDA\s+)?(?:0x[0-9A-Fa-f]{5,8}\s*--\s+)(\w[\w:]*(?:<[^>]*>)?)')
    # On-line annotation extraction: "// 0xADDR" at end of line (the actual function line)
    
    result = {}  # addr → {"name": str|None, "files": [str]}
    
    for directory in directories:
        dirpath = ROOT / directory
        if not dirpath.exists():
            continue
        for hpp in dirpath.rglob("*.hpp"):
            try:
                with open(hpp, encoding='utf-8', errors='replace') as f:
                    lines = f.readlines()
            except Exception:
                continue
            rel = str(hpp.relative_to(ROOT))
            for lineno, line in enumerate(lines, 1):
                m = addr_pattern.search(line)
                if not m:
                    continue
                addr = normalize_addr(m.group(1))
                
                # Try to extract function name
                name = None
                fm = func_pattern.search(line)
                if fm:
                    name = fm.group(1)
                
                # Prefer comment-based name if available (on same line)
                # Pattern 1: "// IDA 0xADDR (ClassName::Method)" or "// 0xADDR (ClassName::Method)"
                cm = comment_paren_pattern.search(line)
                if cm:
                    cname = cm.group(1)
                    if cname and ':' in cname:
                        name = cname
                
                # Pattern 2: "// IDA 0xADDR -- ClassName::Method" or "// 0xADDR -- ClassName::Method"
                if not name or ':' not in str(name):
                    cm2 = comment_dash_pattern.search(line)
                    if cm2:
                        cname = cm2.group(1)
                        if cname and ':' in cname:
                            name = cname
                
                # Pattern 3: Look at PREVIOUS line for IDA comment annotation
                # E.g.:
                #   // IDA 0x54F000 -- EventQueue::Process
                #   void EventQueueProcess(void* bink_player);  // 0x54F000
                if (not name or ':' not in str(name)) and lineno > 1:
                    prev_line = lines[lineno - 2]  # 0-indexed
                    cm_prev = comment_dash_pattern.search(prev_line)
                    if cm_prev:
                        cname = cm_prev.group(1)
                        if cname and ':' in cname:
                            name = cname
                
                # Resolve class/namespace context: if name has no :: prefix and we are 
                # inside a class or namespace body, prepend the context name
                if name and '::' not in name:
                    cls_name = _find_enclosing_class(lines, lineno - 1)
                    if cls_name:
                        name = f"{cls_name}::{name}"
                
                if addr not in result:
                    result[addr] = {"name": name, "files": []}
                result[addr]["files"].append(f"{rel}:{lineno}")
                # Update name from better matches:
                # - If current name has :: and stored name doesn't → update
                # - If stored name is None → update
                if name:
                    stored = result[addr].get("name")
                    if not stored or (':' in name and ':' not in (stored or '')):
                        result[addr]["name"] = name
    
    return result

# --- Name extraction helpers ---

def extract_json_name(entry):
    """Get display name from stripped functions.json entry."""
    return entry.get("name", "")

def extract_ida_name(ida_entry):
    """Get display name from ida_function_db entry."""
    if isinstance(ida_entry, dict):
        return ida_entry.get("name", "")
    return ""

def extract_hpp_name(annot):
    """Get display name from hpp annotation."""
    return annot.get("name", "")

def normalize_name(name):
    """Normalize a function name for comparison.
    - Strips trailing underscores (IDA artifact)
    - Normalizes vt[N] <=> vt_N formats
    - Strips excessive internal underscores (3+ consecutive → 1)
    """
    if not name:
        return name
    n = name
    # Strip trailing underscores (IDA's ___ artifact)
    n = n.rstrip('_')
    # Normalize consecutive underscores (3+ → 1)
    n = re.sub(r'_{3,}', '_', n)
    # Normalize vt[NN] <=> vt_NN
    n = re.sub(r'vt\[\s*(\d+)\s*\]', r'vt_\1', n)
    return n

# --- Audit logic ---

def audit():
    print("Loading data sources...", file=sys.stderr)
    
    json_map, json_entries = load_functions_json()
    ida_map = load_ida_function_db()
    crt_set = load_crt_exclusions()
    
    print(f"  functions.json: {len(json_map)} entries", file=sys.stderr)
    print(f"  ida_function_db: {len(ida_map)} entries", file=sys.stderr)
    print(f"  CRT exclusions: {len(crt_set)} addresses", file=sys.stderr)
    
    # Extract hpp annotations
    hpp_dirs = ["src", "include/gamemd"]
    hpp_annots = extract_hpp_annotations(hpp_dirs)
    print(f"  hpp annotations: {len(hpp_annots)} unique addresses", file=sys.stderr)
    
    # --- Name mismatches ---
    name_mismatches = []
    all_addrs = set(json_map.keys()) | set(ida_map.keys()) | set(hpp_annots.keys())
    
    for addr in sorted(all_addrs):
        j_entry = json_map.get(addr, {})
        i_entry = ida_map.get(addr, {})
        h_entry = hpp_annots.get(addr, {"name": None})
        
        j_name = extract_json_name(j_entry)
        i_name = extract_ida_name(i_entry)
        h_name = extract_hpp_name(h_entry)
        
        # Collect non-empty names
        names = {}
        if j_name: names["json"] = normalize_name(j_name)
        if i_name: names["ida"] = normalize_name(i_name)
        if h_name: names["hpp"] = normalize_name(h_name)
        
        # Skip if only one source has a name
        if len(names) < 2:
            continue
        
        # Check if all names are the same (case-insensitive)
        unique = set(v.lower() for v in names.values())
        if len(unique) <= 1:
            continue
        
        mismatch = {"addr": addr}
        if j_name: mismatch["json_name"] = j_name
        if i_name: mismatch["ida_name"] = i_name
        if h_name: mismatch["hpp_name"] = h_name
        name_mismatches.append(mismatch)
    
    # --- Orphan addresses ---
    hpp_only = sorted(set(hpp_annots.keys()) - set(json_map.keys()))
    json_only = sorted(set(json_map.keys()) - set(hpp_annots.keys()) - crt_set)
    
    # --- Coverage ---
    total_game = len(json_map) - len(json_map.keys() & crt_set)
    annotated = len(set(json_map.keys()) & set(hpp_annots.keys()))
    missing = total_game - annotated
    
    # --- Field check ---
    has_params = 0
    missing_params = 0
    for e in json_entries:
        params = e.get("call", {}).get("params", [])
        if params:
            has_params += 1
        else:
            missing_params += 1
    
    report = {
        "name_mismatches": name_mismatches,
        "orphan_addresses": {
            "hpp_only": hpp_only,
            "json_only": json_only,
            "ida_only": sorted(set(ida_map.keys()) - set(json_map.keys()))
        },
        "coverage": {
            "total_game": total_game,
            "annotated": annotated,
            "missing": missing
        },
        "field_check": {
            "has_params": has_params,
            "missing_params": missing_params
        },
        "summary": {
            "total_json_entries": len(json_map),
            "total_ida_entries": len(ida_map),
            "total_hpp_addrs": len(hpp_annots),
            "crt_exclusions": len(crt_set),
            "name_mismatches": len(name_mismatches)
        }
    }
    
    return report

def print_human(report):
    """Print human-readable report."""
    s = report["summary"]
    c = report["coverage"]
    f = report["field_check"]
    o = report["orphan_addresses"]
    
    print("=" * 60)
    print("  AUDIT CONSISTENCY REPORT")
    print("=" * 60)
    print(f"\nData sources:")
    print(f"  functions.json:     {s['total_json_entries']:,} entries")
    print(f"  ida_function_db:    {s['total_ida_entries']:,} entries")
    print(f"  hpp annotations:    {s['total_hpp_addrs']:,} unique addresses")
    print(f"  CRT exclusions:     {s['crt_exclusions']:,} addresses")
    
    print(f"\n--- Name Mismatches ({s['name_mismatches']}) ---")
    if s['name_mismatches'] == 0:
        print("  [OK] All shared names consistent")
    else:
        for mm in report["name_mismatches"]:
            print(f"  {mm['addr']}:")
            for k in ["ida_name", "json_name", "hpp_name"]:
                if k in mm:
                    print(f"    {k}: {mm[k]}")
    
    print(f"\n--- Coverage ---")
    print(f"  Game functions:     {c['total_game']:,}")
    print(f"  HPP-annotated:      {c['annotated']:,}")
    print(f"  Missing annotation: {c['missing']:,}")
    if c['total_game'] > 0:
        pct = c['annotated'] / c['total_game'] * 100
        print(f"  Coverage:           {pct:.1f}%")
    
    print(f"\n--- Orphan Addresses ---")
    print(f"  HPP-only (not in json):  {len(o['hpp_only']):,}")
    print(f"  JSON-only (not in hpp):  {len(o['json_only']):,}")
    print(f"  IDA-only (not in json):  {len(o['ida_only']):,}")
    if o['hpp_only'] and len(o['hpp_only']) <= 20:
        for a in o['hpp_only']:
            print(f"    {a}")
    elif o['hpp_only']:
        print(f"    (showing first 10 of {len(o['hpp_only'])})")
        for a in o['hpp_only'][:10]:
            print(f"    {a}")
    
    print(f"\n--- Field Check ---")
    print(f"  call.params populated:   {f['has_params']:,}")
    print(f"  call.params empty:       {f['missing_params']:,}")
    
    print(f"\nStatus: ", end="")
    issues = 0
    if s['name_mismatches'] > 0:
        issues += 1
        print(f"{s['name_mismatches']} name mismatch(es)", end="; ")
    if c['missing'] > 0:
        issues += 1
        print(f"{c['missing']} unannotated", end="; ")
    if issues == 0:
        print("[OK] No issues found")
    else:
        print()

def main():
    check_only = "--check-only" in sys.argv
    json_flag = "--json" in sys.argv
    
    report = audit()
    
    if json_flag:
        print(json.dumps(report, indent=2))
    elif check_only:
        mismatch_count = report["summary"]["name_mismatches"]
        if mismatch_count > 0:
            print(f"FAIL: {mismatch_count} name mismatch(es) found.", file=sys.stderr)
            print("Run 'python tools/audit_consistency.py' for details.", file=sys.stderr)
            sys.exit(1)
        else:
            print("audit_consistency: OK (0 mismatches)")
            sys.exit(0)
    else:
        print_human(report)

if __name__ == "__main__":
    main()
