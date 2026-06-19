"""
IDA batch substring function lookup — Phase 2 aggressive search.
For functions not found by exact name match, search by:
1. Substring in function name
2. Only assign when exactly 1 match found
"""
import json
import ida_funcs
import ida_name
import ida_idaapi

QUERIES_PATH = r"D:\RA2YR_ReSource\tools\ida_queries.json"
RESULTS_PATH = r"D:\RA2YR_ReSource\tools\ida_substring_results.json"

with open(QUERIES_PATH, "r", encoding="utf-8") as f:
    queries = json.load(f)

# Filter to only those without patterns that might work
# (first pass already found exact name matches)
# We build a name index: lowercase_name -> address for all functions
print("Building function name index...")
name_index = {}  # lower_name -> addr
name_list = []   # [(lower_name, addr, original_name), ...] for efficient iteration
total_funcs = ida_funcs.get_func_qty()
for n in range(total_funcs):
    func = ida_funcs.getn_func(n)
    if func:
        fname = ida_name.get_name(func.start_ea)
        if fname and not fname.startswith("sub_") and not fname.startswith("j_"):
            name_lower = fname.lower()
            name_index[name_lower] = func.start_ea
            name_list.append((name_lower, func.start_ea, fname))

print(f"Indexed {len(name_index)} named functions out of {total_funcs} total")

# Also index by "last part" of :: names (method name only)
short_name_index = {}
for name, addr in list(name_index.items()):
    if "::" in name:
        short = name.split("::")[-1]
        if short not in short_name_index:
            short_name_index[short] = []
        short_name_index[short].append((name, addr))

results = []
found_count = 0
not_found_count = 0

# Quick stats
substr_found = 0
short_name_found = 0

for idx, q in enumerate(queries):
    if idx % 500 == 0:
        print(f"  Progress: {idx}/{len(queries)}...")
    
    class_name = q.get("class_name")
    func_name = q.get("func_name")
    # Skip if already matched in first pass (check existing results)
    # We just process all — duplicates will be handled by apply script
    
    matched_addr = None
    matched_name = None
    match_type = None
    
    fn_lower = func_name.lower()
    
    # Strategy 1: Substring search in full names
    candidates = []
    for nlower, addr, oname in name_list:
        if fn_lower in nlower:
            candidates.append((oname, addr))
    
    if len(candidates) == 1:
        matched_addr = f"0x{candidates[0][1]:X}"
        matched_name = candidates[0][0]
        match_type = "substring"
        substr_found += 1
    elif len(candidates) > 1 and class_name:
        # Try to filter by class name
        cls_lower = class_name.lower()
        filtered = [(n, a) for n, a in candidates if cls_lower in n.lower()]
        if len(filtered) == 1:
            matched_addr = f"0x{filtered[0][1]:X}"
            matched_name = filtered[0][0]
            match_type = "substring+class"
            substr_found += 1
    
    # Strategy 2: Method-name-only match (for ClassName::MethodName where we have method only)
    if not matched_addr:
        short_candidates = short_name_index.get(fn_lower, [])
        if len(short_candidates) == 1:
            matched_addr = f"0x{short_candidates[0][1]:X}"
            matched_name = short_candidates[0][0]
            match_type = "short_name_unique"
            short_name_found += 1
        elif len(short_candidates) > 1 and class_name:
            cls_lower = class_name.lower()
            filtered = [(n, a) for n, a in short_candidates if cls_lower in n.lower()]
            if len(filtered) == 1:
                matched_addr = f"0x{filtered[0][1]:X}"
                matched_name = filtered[0][0]
                match_type = "short_name+class"
                short_name_found += 1
    
    result = {
        "file": q["file"],
        "line": q["line"],
        "class_name": class_name,
        "func_name": func_name,
        "declaration": q.get("declaration", ""),
        "address": matched_addr,
        "ida_match": matched_name,
        "match_type": match_type,
    }
    results.append(result)
    
    if matched_addr:
        found_count += 1
    else:
        not_found_count += 1

with open(RESULTS_PATH, "w", encoding="utf-8") as f:
    json.dump({
        "found": found_count,
        "not_found": not_found_count,
        "total": len(queries),
        "substr_found": substr_found,
        "short_name_found": short_name_found,
        "results": results,
    }, f, indent=2)

print(f"\nDone! Found: {found_count} (substr: {substr_found}, short_name: {short_name_found}), Not found: {not_found_count}")
print(f"Results written to: {RESULTS_PATH}")
