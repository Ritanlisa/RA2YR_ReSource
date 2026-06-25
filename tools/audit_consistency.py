#!/usr/bin/env python3
"""audit_consistency.py — Cross-validate signals.json, IDA function DB, hpp annotations.

Data sources:
  1. signals.json (canonical symbol file) — function entries (kind=="function")
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
    """Load function entries from signals.json (canonical) → {normAddr: entry} + entries.

    signals.json keeps function symbols under data["symbols"] (kind=="function"),
    keyed by address. Each is reshaped into the legacy {address, name, call{}, hook{}}
    shape so the rest of this audit (extract_json_name, field_check call.params) is
    unchanged. Member/global symbols are ignored — this audit covers functions only."""
    path = ROOT / "signals.json"
    with open(path, encoding="utf-8") as f:
        data = json.load(f)
    entries = []
    fn_map = {}
    for key, sym in (data.get("symbols", {}) or {}).items():
        if not isinstance(sym, dict) or sym.get("kind") != "function":
            continue
        addr = sym.get("address", key)
        entry = {
            "address": addr,
            "name": sym.get("name", ""),
            "call": {
                "convention": sym.get("call_convention", "unknown"),
                "return_type": sym.get("return_type", "void"),
                "params": sym.get("params", []),
            },
            "hook": {"completed": sym.get("completed", False)},
        }
        entries.append(entry)
        fn_map[normalize_addr(addr)] = entry
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

def _compute_bracket_depth(lines):
    """Compute bracket nesting depth BEFORE each line.
    
    Returns list where depth[i] = depth before processing line i.
    depth[0] = 0 (file start).
    """
    depth = [0] * (len(lines) + 1)
    d = 0
    for i in range(len(lines)):
        depth[i] = d
        d += lines[i].count('{') - lines[i].count('}')
    depth[len(lines)] = d
    return depth


def _find_enclosing_class(lines, line_no, depth=None):
    """Find enclosing class or struct name for a line (0-indexed).
    
    Args:
        lines: file lines
        line_no: 0-indexed line number of the annotation
        depth: precomputed bracket depth array (optional, computed if None)
    
    Returns class/struct name or None.
    Does NOT return namespace names — only class/struct bodies.
    Skips forward declarations: "class Foo;" or "struct Bar;" (line ends with ';').
    Accepts: "class Foo {" or multi-line "class Foo : public Bar" (no ';' on line).
    
    No arbitrary line limit — scans to file start using precomputed depth.
    """
    if depth is None:
        depth = _compute_bracket_depth(lines)
    
    target_d = depth[min(line_no, len(depth) - 1)]
    
    for j in range(line_no, -1, -1):
        cls_match = re.search(r'^\s*(?:class|struct)\s+(\w+)', lines[j])
        if not cls_match:
            continue
        
        decl_d = depth[min(j, len(depth) - 1)]
        if decl_d >= target_d:
            continue  # declaration is at same or deeper level — not enclosing
        
        # Skip forward declarations: line ends with ';' → no body
        # e.g. "class WinsockInterfaceClass;"
        stripped = lines[j].rstrip()
        if stripped.endswith(';'):
            continue
        
        return cls_match.group(1)
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
            # Precompute bracket depth once per file for efficient enclosing-class lookup
            depth = _compute_bracket_depth(lines)
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
                
                # Resolve class context: if name has no :: prefix and we are 
                # inside a class/struct body, prepend the class name.
                # Namespace names are intentionally NOT prepended — functions.json
                # uses bare names for namespace-scoped functions.
                if name and '::' not in name:
                    cls_name = _find_enclosing_class(lines, lineno - 1, depth)
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

# --- Template-name normalization (IDA underscore <-> C++ angle-bracket) ---
#
# IDA cannot use '<' or '>' in identifiers, so template instantiations are
# encoded with underscores. The C++ source uses real angle-bracket notation.
# The two MUST be treated as the same symbol (rules from
# .omo/invalid_names_analysis.json):
#
#     VectorClass_ptr_X         <->  VectorClass<X*>
#     VectorClass_cptr_X        <->  VectorClass<X const*>   (also <const X*>)
#     DynamicVectorClass_X      <->  DynamicVectorClass<X>
#     DynamicVectorClass_ptr_X  <->  DynamicVectorClass<X*>
#     DynamicVectorClass_cptr_X <->  DynamicVectorClass<X const*>
#     TypeList_ptr_X            <->  TypeList<X*>
#     TypeList_cptr_X           <->  TypeList<X const*>
#
# We canonicalize the C++ angle-bracket form INTO the underscore form because
# (a) IDA names are already underscore-encoded, and (b) the underscore form
# survives the later '::' -> '_' flattening cleanly.
#
# This is SURGICAL: only names containing '<' are touched. A genuine method
# like 'Add_Float' (no '<') is never confused with 'AddItem', and two distinct
# template parameters (VectorClass<Foo*> vs VectorClass<Bar*>) stay distinct.
# So the audit's real comparison is preserved, not weakened.

_TEMPLATE_INST_RE = re.compile(r'([A-Za-z_]\w*)<([^<>]*)>')


def _encode_template_arg(arg):
    """Encode one C++ template argument into IDA underscore suffix.

      'X*'        -> '_ptr_X'
      'X const*'  -> '_cptr_X'   (east const)
      'const X*'  -> '_cptr_X'   (west const)
      'X'         -> '_X'

    Multiple comma-separated args are encoded left-to-right and concatenated
    (best-effort; the documented cases are all single-argument).
    """
    arg = arg.strip()
    if not arg:
        return ''
    if ',' in arg:
        return ''.join(_encode_template_arg(p) for p in arg.split(','))
    is_ptr = arg.endswith('*')
    inner = arg[:-1].strip() if is_ptr else arg
    is_const = False
    m = re.match(r'^const\s+(.+)$', inner)       # west const: 'const X'
    if m:
        is_const = True
        inner = m.group(1).strip()
    m = re.match(r'^(.+?)\s+const$', inner)       # east const: 'X const'
    if m:
        is_const = True
        inner = m.group(1).strip()
    inner = inner.strip()
    if is_ptr and is_const:
        return '_cptr_' + inner
    if is_ptr:
        return '_ptr_' + inner
    return '_' + inner


def _normalize_template_to_underscore(name):
    """Convert C++ angle-bracket template notation to IDA underscore form.

    Idempotent: names without '<' are returned unchanged. Handles nesting by
    collapsing innermost <...> first (the regex only matches bracket bodies
    that contain no further '<' or '>').
    """
    if not name or '<' not in name:
        return name
    n = name
    prev = None
    guard = 0
    while '<' in n and prev != n and guard < 64:
        prev = n
        guard += 1
        n = _TEMPLATE_INST_RE.sub(
            lambda m: m.group(1) + _encode_template_arg(m.group(2)), n)
    return n


def normalize_name(name):
    """Normalize a function name for comparison.
    - Strips trailing underscores (IDA artifact)
    - Normalizes vt[N] <=> vt_N formats
    - Strips excessive internal underscores (3+ consecutive → 1)
    """
    if not name:
        return name
    n = name
    # Template instantiation: VectorClass<X*> -> VectorClass_ptr_X (etc.)
    n = _normalize_template_to_underscore(n)
    # Strip trailing underscores (IDA's ___ artifact)
    n = n.rstrip('_')
    # Normalize consecutive underscores (3+ → 1)
    n = re.sub(r'_{3,}', '_', n)
    # Normalize vt[NN] <=> vt_NN
    n = re.sub(r'vt\[\s*(\d+)\s*\]', r'vt_\1', n)
    return n


# --- Bidirectional normalization for convention-tolerant comparison ---

def normalize_name_core(name):
    """Core normalization: strip noise, normalize formats, strip namespace.
    
    Does NOT replace :: with _ (that's done during comparison).
    Does NOT handle constructor/destructor equivalence (that's bidirectional).
    
    Rules applied:
      1. Strip trailing underscores (IDA ___ artifact)
      2. Collapse 3+ consecutive underscores → 1
      3. Normalize vt[NN] <-> vt_NN <-> vtNN → unified vt_N format
      4. Strip gamemd:: namespace prefix
    """
    if not name:
        return name
    n = name.strip()
    # Template instantiation: VectorClass<X*> -> VectorClass_ptr_X (etc.)
    n = _normalize_template_to_underscore(n)
    # Strip trailing underscores
    n = n.rstrip('_')
    # Collapse 3+ consecutive underscores
    n = re.sub(r'_{3,}', '_', n)
    # Normalize vt[NN] / vt_NN / vtNN → vt_N
    n = re.sub(r'vt\[\s*(\d+)\s*\]', r'vt_\1', n)
    n = re.sub(r'\bvt(\d+)\b', r'vt_\1', n)
    # Strip gamemd:: namespace prefix
    n = re.sub(r'^gamemd::', '', n)
    return n


def _has_ctor_pattern(name):
    """Check if name matches ClassName::ClassName or ClassName_ClassName (constructor).
    Returns the class name if found, None otherwise."""
    # :: format: ClassName::ClassName
    parts = name.split('::')
    if len(parts) >= 2 and parts[-1] == parts[-2]:
        return parts[-2]
    # _ format (IDA naming): ClassName_ClassName
    # Detection: last _-separated segment equals the preceding segment
    # e.g. "CaptureManagerClass_CaptureManagerClass" → suffix "CaptureManagerClass"
    parts_u = name.rsplit('_', 1)
    if len(parts_u) == 2 and parts_u[0] == parts_u[1] and parts_u[1]:
        return parts_u[1]
    return None


def _normalize_to_constructor(name):
    """Convert ClassName::ClassName or ClassName_ClassName → Constructor variant."""
    cls = _has_ctor_pattern(name)
    if cls:
        if '::' in name:
            prefix = '::'.join(name.split('::')[:-1])
            return prefix + '::Constructor'
        else:
            prefix = name.rsplit('_' + cls, 1)[0]
            return prefix + '_Constructor'
    return name


def _flatten_for_compare(name):
    """Replace :: with _ for cross-source comparison (IDA uses _ not ::)."""
    return name.replace('::', '_')


def normalize_name_bidirectional(name_a, name_b):
    """Normalize two names for tolerant comparison.
    
    Returns (norm_a_flat, norm_b_flat, is_equivalent, warnings_list).
    
    Normalization rules (applied to BOTH names before comparison):
      1. Core: trailing _, _ collapse, vt format, gamemd:: strip
      2. Constructor: ClassName::ClassName ↔ ClassName::Constructor
      3. Construct alias: Construct → Constructor
      4. Scope separator: :: → _ for comparison
      5. Case-insensitive comparison
      6. Destructor: if names differ only by ~ prefix → WARNING, not mismatch
    
    If is_equivalent=True, the names differ only by convention, not semantics.
    """
    if not name_a or not name_b:
        return (name_a or ''), (name_b or ''), False, []
    
    warnings = []
    
    # Step 1: Core normalization
    a = normalize_name_core(name_a)
    b = normalize_name_core(name_b)
    
    # Step 2: Strip ~ (destructor marker) — must happen BEFORE constructor check
    # because ~ClassName::ClassName → ClassName::ClassName which IS a constructor pattern
    has_tilde_a = '~' in a
    has_tilde_b = '~' in b
    a = a.replace('~', '')
    b = b.replace('~', '')
    
    # Step 3: Constructor normalization
    # ClassName::ClassName → ClassName::Constructor
    a = _normalize_to_constructor(a)
    b = _normalize_to_constructor(b)
    
    # Step 4: Flatten :: → _ for comparison
    a_flat = _flatten_for_compare(a)
    b_flat = _flatten_for_compare(b)
    
    # Step 5: Normalize Construct/Constructor aliases
    # Use (^|_)Construct(_|$) instead of \bConstruct\b because Python's \w includes _
    a_flat = re.sub(r'(^|_)Construct(_|$)', r'\1Constructor\2', a_flat)
    b_flat = re.sub(r'(^|_)Construct(_|$)', r'\1Constructor\2', b_flat)
    
    # Step 6: Case-insensitive comparison
    if a_flat.lower() == b_flat.lower():
        if has_tilde_a or has_tilde_b:
            warnings.append("destructor naming difference (~)")
        return a_flat, b_flat, True, warnings
    
    return a_flat, b_flat, False, warnings


# --- Audit logic ---

def audit():
    print("Loading data sources...", file=sys.stderr)
    
    json_map, json_entries = load_functions_json()
    ida_map = load_ida_function_db()
    crt_set = load_crt_exclusions()
    
    print(f"  signals.json: {len(json_map)} function entries", file=sys.stderr)
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
    
    # --- Normalized name mismatches (convention-tolerant) ---
    normalized_mismatches = []
    normalization_resolved = 0
    for mm in name_mismatches:
        raw_names = {}
        if "json_name" in mm: raw_names["json_name"] = mm["json_name"]
        if "ida_name" in mm: raw_names["ida_name"] = mm["ida_name"]
        if "hpp_name" in mm: raw_names["hpp_name"] = mm["hpp_name"]
        
        names_list = list(raw_names.items())
        all_equivalent = True
        all_warnings = []
        
        # Pairwise bidirectional comparison
        for i in range(len(names_list)):
            for j in range(i + 1, len(names_list)):
                src_a, name_a = names_list[i]
                src_b, name_b = names_list[j]
                norm_a, norm_b, is_eq, warns = normalize_name_bidirectional(name_a, name_b)
                if not is_eq:
                    all_equivalent = False
                all_warnings.extend(warns)
        
        if all_equivalent:
            normalization_resolved += 1
        else:
            norm_entry = {"addr": mm["addr"]}
            norm_entry.update(raw_names)
            if all_warnings:
                norm_entry["warnings"] = list(set(all_warnings))  # deduplicate
            normalized_mismatches.append(norm_entry)
    
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
        "normalized_mismatches": normalized_mismatches,
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
            "name_mismatches": len(name_mismatches),
            "normalized_mismatches": len(normalized_mismatches),
            "normalization_resolved": normalization_resolved
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
    print(f"  signals.json:       {s['total_json_entries']:,} function entries")
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
    
    # --- Normalized Mismatches (convention-tolerant) ---
    norm_count = s.get('normalized_mismatches', 0)
    norm_resolved = s.get('normalization_resolved', 0)
    print(f"\n--- Normalized Mismatches ({norm_count}) ---")
    if norm_resolved > 0:
        print(f"  ({norm_resolved} raw mismatches resolved by convention normalization)")
    if norm_count == 0:
        print("  [OK] No semantic mismatches after convention normalization")
    else:
        for mm in report.get("normalized_mismatches", []):
            print(f"  {mm['addr']}:")
            for k in ["ida_name", "json_name", "hpp_name"]:
                if k in mm:
                    print(f"    {k}: {mm[k]}")
            if mm.get("warnings"):
                print(f"    warnings: {', '.join(mm['warnings'])}")
    
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
    if norm_count > 0:
        issues += 1
        print(f"{norm_count} normalized mismatch(es)", end="; ")
    if c['missing'] > 0:
        issues += 1
        print(f"{c['missing']} unannotated", end="; ")
    if issues == 0:
        print("[OK] No issues found")
    else:
        print()

def _selftest():
    """Self-tests for name normalization, especially template-name equivalence.

    Verifies that IDA underscore template notation and C++ angle-bracket
    notation are treated as the same symbol, WITHOUT weakening the real
    comparison (distinct params/methods stay distinct).
    """
    failures = []
    n_checks = [0]

    def check_equiv(a, b, expect, label):
        n_checks[0] += 1
        _, _, is_eq, _ = normalize_name_bidirectional(a, b)
        if is_eq != expect:
            failures.append(
                f"[{label}] equiv({a!r}, {b!r}) = {is_eq}, expected {expect}")

    def check_encode(name, expected, label):
        n_checks[0] += 1
        got = _normalize_template_to_underscore(name)
        if got != expected:
            failures.append(
                f"[{label}] _normalize_template_to_underscore({name!r}) = "
                f"{got!r}, expected {expected!r}")

    # --- Direct underscore-encoding checks ---
    check_encode("VectorClass<TechnoClass*>", "VectorClass_ptr_TechnoClass", "enc_ptr")
    check_encode("VectorClass<CommandClass const*>", "VectorClass_cptr_CommandClass", "enc_cptr_east")
    check_encode("VectorClass<const CommandClass*>", "VectorClass_cptr_CommandClass", "enc_cptr_west")
    check_encode("DynamicVectorClass<BombClass>", "DynamicVectorClass_BombClass", "enc_value")
    check_encode("DynamicVectorClass<BombClass*>", "DynamicVectorClass_ptr_BombClass", "enc_dv_ptr")
    check_encode("DynamicVectorClass<BombClass const*>", "DynamicVectorClass_cptr_BombClass", "enc_dv_cptr")
    check_encode("TypeList<Foo*>", "TypeList_ptr_Foo", "enc_typelist_ptr")
    check_encode("TypeList<Foo const*>", "TypeList_cptr_Foo", "enc_typelist_cptr")
    check_encode("PlainName::Method", "PlainName::Method", "enc_noop")
    check_encode("VectorClass_ptr_TechnoClass", "VectorClass_ptr_TechnoClass", "enc_already_underscore")

    # --- Template-method equivalence (the required synthetic case + variants) ---
    check_equiv("VectorClass_ptr_TechnoClass::SetCapacity",
                "VectorClass<TechnoClass*>::SetCapacity", True, "req_synthetic")
    check_equiv("VectorClass_cptr_CommandClass::GetAt",
                "VectorClass<CommandClass const*>::GetAt", True, "cptr_method")
    check_equiv("DynamicVectorClass_ptr_BombClass::AddItem",
                "DynamicVectorClass<BombClass*>::AddItem", True, "dv_ptr_method")
    check_equiv("DynamicVectorClass_BombClass::AddItem",
                "DynamicVectorClass<BombClass>::AddItem", True, "dv_value_method")
    check_equiv("TypeList_cptr_TeamTypeClass::FindItemIndex",
                "TypeList<TeamTypeClass const*>::FindItemIndex", True, "typelist_method")

    # --- NEGATIVE: must NOT over-normalize (real comparison preserved) ---
    check_equiv("VectorClass<Foo*>::Get", "VectorClass<Bar*>::Get", False, "neg_diff_param")
    check_equiv("VectorClass<Foo*>::Add", "VectorClass<Foo*>::Remove", False, "neg_diff_method")
    check_equiv("DynamicVector::Add_Float", "DynamicVector::AddItem", False, "neg_addfloat_additem")
    check_equiv("DynamicVector::Remove", "DynamicVector::RemoveItem", False, "neg_remove_removeitem")

    # --- Regression: existing convention normalization still works ---
    check_equiv("CCINIClass::CCINIClass", "CCINIClass::Constructor", True, "reg_ctor")
    check_equiv("gamemd::InitGame", "InitGame", True, "reg_gamemd")

    if failures:
        print("SELFTEST FAILED:")
        for f in failures:
            print("  -", f)
        return 1
    print(f"SELFTEST OK ({n_checks[0]} checks passed)")
    return 0


def main():
    if "--selftest" in sys.argv:
        sys.exit(_selftest())
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
