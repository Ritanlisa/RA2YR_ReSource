# IDA Batch Function Lookup Script
# Run via: ida-pro-mcp py_exec_file with this file
# Reads tools/ida_queries.json, writes tools/ida_results.json

import json
import os
import re
import sys
from collections import defaultdict

# Paths (relative to IDA's working directory — project root)
QUERIES_FILE = "tools/ida_queries.json"
RESULTS_FILE = "tools/ida_results.json"

def build_name_index():
    """Build name→address index from all IDA functions."""
    import ida_funcs
    import ida_name
    
    index = {}  # lower_name -> address (first match)
    name_list = []  # (lower_name, address, full_name)
    
    n = ida_funcs.get_func_qty()
    print(f"Indexing {n} functions...")
    
    for i in range(n):
        func = ida_funcs.getn_func(i)
        if not func:
            continue
        addr = func.start_ea
        name = ida_name.get_name(addr)
        if not name:
            continue
        
        lower = name.lower()
        if lower not in index:
            index[lower] = addr
        name_list.append((lower, addr, name))
    
    # Build substring index for faster lookup
    # method_name -> [(class_name, addr), ...]
    method_index = defaultdict(list)
    for lower, addr, full_name in name_list:
        if "::" in full_name:
            parts = full_name.split("::")
            mn = parts[-1].lower()
            cn = parts[0].lower()
            method_index[mn].append((cn, addr, full_name))
    
    print(f"  {len(index)} unique names")
    print(f"  {len(method_index)} unique method names")
    
    return index, method_index, name_list


def match_query(query, index, method_index):
    """
    Try to match a query against IDA function index.
    query: {func_name, class_name, file, line}
    Returns: {address, match_type, ida_name} or None
    """
    func_name = query["func_name"]
    class_name = query.get("class_name")
    fn_lower = func_name.lower()
    
    # 1. Exact name match (global function or full ClassName::Method)
    if fn_lower in index:
        return {
            "address": f"0x{index[fn_lower]:X}",
            "match_type": "exact_name",
        }
    
    # 2. ClassName::Method exact
    if class_name:
        full = f"{class_name.lower()}::{fn_lower}"
        if full in index:
            return {
                "address": f"0x{index[full]:X}",
                "match_type": "class_method_exact",
            }
    
    # 3. Method name match in method_index
    if fn_lower in method_index:
        candidates = method_index[fn_lower]
        
        # Single candidate → use it
        if len(candidates) == 1:
            return {
                "address": f"0x{candidates[0][1]:X}",
                "match_type": "method_only_unique",
            }
        
        # Multiple candidates → try class name matching
        if class_name:
            cl_lower = class_name.lower()
            # Exact class match
            exact = [(cn, addr, full) for cn, addr, full in candidates if cn == cl_lower]
            if len(exact) == 1:
                return {
                    "address": f"0x{exact[0][1]:X}",
                    "match_type": "class_exact",
                }
            
            # Substring class match
            substr = [(cn, addr, full) for cn, addr, full in candidates if cl_lower in cn]
            if len(substr) == 1:
                return {
                    "address": f"0x{substr[0][1]:X}",
                    "match_type": "class_substring",
                }
            
            # hpp_class + "Class" match
            suffix = [(cn, addr, full) for cn, addr, full in candidates if cn == cl_lower + "class"]
            if len(suffix) == 1:
                return {
                    "address": f"0x{suffix[0][1]:X}",
                    "match_type": "class_suffix",
                }
    
    # 4. Destructor match
    if func_name.startswith("~"):
        dtor_class = func_name[1:].lower()
        for full_lower, addr in index.items():
            if ("::" + dtor_class + "_ddtor" in full_lower.lower() or
                "::" + dtor_class + "_dtor" in full_lower.lower() or
                "::~" + dtor_class in full_lower.lower()):
                return {
                    "address": f"0x{addr:X}",
                    "match_type": "dtor_search",
                }
    
    # 5. Constructor match
    if class_name and fn_lower == class_name.lower():
        for full_lower, addr in index.items():
            if full_lower.endswith("::" + fn_lower) and "sub_" not in full_lower:
                return {
                    "address": f"0x{addr:X}",
                    "match_type": "ctor_search",
                }
    
    return None


def main():
    print("=== IDA Batch Function Lookup ===\n")
    
    # Load queries
    if not os.path.exists(QUERIES_FILE):
        print(f"ERROR: {QUERIES_FILE} not found")
        return
    
    with open(QUERIES_FILE, "r", encoding="utf-8") as f:
        queries = json.load(f)
    print(f"Loaded {len(queries)} queries\n")
    
    # Build index
    index, method_index, name_list = build_name_index()
    
    # Process queries
    results = []
    matched = 0
    for i, query in enumerate(queries):
        result = {
            "func_name": query["func_name"],
            "class_name": query.get("class_name"),
            "file": query.get("file", ""),
            "line": query.get("line", 0),
            "address": None,
            "match_type": None,
        }
        
        match = match_query(query, index, method_index)
        if match:
            result["address"] = match["address"]
            result["match_type"] = match["match_type"]
            matched += 1
        
        results.append(result)
        
        if (i + 1) % 500 == 0:
            print(f"  Processed {i+1}/{len(queries)}... ({matched} matched)")
    
    # Write results
    with open(RESULTS_FILE, "w", encoding="utf-8") as f:
        json.dump(results, f, indent=2)
    
    print(f"\nDone! {matched}/{len(queries)} matched")
    print(f"Results written to {RESULTS_FILE}")


if __name__ == "__main__":
    main()
