r"""
IDA Python script: Collect reverse engineering statistics.
Uses same exclusion rules and fine-grained buckets as Reverse_Engineering.md.
Saves results to temp/opencode/ida_stats_v2.json
"""
import idaapi, idautils, idc, ida_funcs
import re, json, os
from collections import defaultdict

# ── Names to exclude from "target" (system/stub/CRT) ────────────
_EXCLUDE = [
    re.compile(r'^_'),         # CRT thunks
    re.compile(r'^\?'),        # C++ mangled
    re.compile(r'^@'),         # compiler internals
    re.compile(r'^j_'),        # thunks
    re.compile(r'Stub$'),      # *Stub
    re.compile(r'COMStub'),    # *COMStub*
    re.compile(r'ddtor'),      # *ddtor*
    re.compile(r'scalar_dtor'),# *scalar_dtor*
    re.compile(r'^nullsub_'),  # nullsub_*
    re.compile(r'^vt_entry_'), # vt_entry_*
    re.compile(r'^unknown_libname_'),
]

def is_excluded(name):
    if not name: return True
    for pat in _EXCLUDE:
        if pat.search(name):
            return True
    return False

def is_unnamed(name):
    """sub_ prefix or Class::sub_ prefix or IDA auto-generated data names = unnamed"""
    if not name: return True
    import re as _re
    # sub_ or Class::sub_
    if name.startswith('sub_') or '::sub_' in name:
        return True
    # IDA auto data labels: TYPE_HEXADDR or ClassName::TYPE_HEXADDR
    if _re.match(r'^[a-z]+_[0-9A-Fa-f]+$', name):
        return True
    if _re.match(r'^[^:]+::[a-z]+_[0-9A-Fa-f]+$', name):
        return True
    return False

def is_class_member_by_name(name):
    return '::' in name

# ── Fine-grained size buckets (matching Reverse_Engineering.md) ──
SIZE_BUCKETS = [
    (0,   16,   "\u226416 B"),
    (17,  32,   "17\u201332 B"),
    (33,  64,   "33\u201364 B"),
    (65,  128,  "65\u2013128 B"),
    (129, 256,  "129\u2013256 B"),
    (257, 512,  "257\u2013512 B"),
    (513, 1024, "513\u20131024 B"),
    (1025,2048, "1\u20132 KB"),
    (2049,4096, "2\u20134 KB"),
    (4097,8192, "4\u20138 KB"),
    (8193,9999999, ">8 KB"),
]

XREF_BUCKETS = [
    (0,   0,   "0 Xref"),
    (1,   2,   "1\u20132"),
    (3,   5,   "3\u20135"),
    (6,   10,  "6\u201310"),
    (11,  20,  "11\u201320"),
    (21,  50,  "21\u201350"),
    (51,  100, "51\u2013100"),
    (101, 200, "101\u2013200"),
    (201, 500, "201\u2013500"),
    (501, 9999999, ">500"),
]

def get_bucket(val, buckets):
    for lo, hi, label in buckets:
        if lo <= val <= hi:
            return label
    return "?"

# ── Collect ──────────────────────────────────────────────────────

target_funcs = []   # (name, size, xrefs, is_member)
all_funcs = 0

for ea in idautils.Functions():
    all_funcs += 1
    name = idc.get_func_name(ea) or ""
    if is_excluded(name): continue

    func = ida_funcs.get_func(ea)
    size = func.size() if func else 0

    xrefs = 0
    for _ in idautils.XrefsTo(ea):
        xrefs += 1

    member = is_class_member_by_name(name)
    target_funcs.append((name, size, xrefs, member))

excluded_cnt = all_funcs - len(target_funcs)
target_cnt = len(target_funcs)

member_funcs = [(n,s,x) for n,s,x,m in target_funcs if m]
global_funcs = [(n,s,x) for n,s,x,m in target_funcs if not m]

named_all   = sum(1 for n,*_ in target_funcs  if not is_unnamed(n))
named_member= sum(1 for n,*_ in member_funcs  if not is_unnamed(n))
named_global= sum(1 for n,*_ in global_funcs  if not is_unnamed(n))

# ── Globals ──────────────────────────────────────────────────────

globals_list = []
for ea, name in idautils.Names():
    flags = idc.get_full_flags(ea)
    if not idaapi.is_data(flags): continue
    if re.match(r'^a[A-Z][a-zA-Z0-9]*$', name): continue  # exclude string constants
    xrefs = 0
    for _ in idautils.XrefsTo(ea):
        xrefs += 1
    globals_list.append((name, xrefs))

named_globals = sum(1 for n,*_ in globals_list if not is_unnamed(n))

# ── Build 2D cross-tables ────────────────────────────────────────

def make_crosstab(items, size_buckets, xref_buckets):
    """Returns rows dict: row_label -> list of (named,unnamed) per xref bucket"""
    matrix = {}
    for s_lo, s_hi, s_label in size_buckets:
        row = {}
        for x_lo, x_hi, x_label in xref_buckets:
            named = unnamed = 0
            for item in items:
                name, size, xrefs = item[0], item[1], item[2]
                if s_lo <= size <= s_hi and x_lo <= xrefs <= x_hi:
                    if is_unnamed(name): unnamed += 1
                    else: named += 1
            row[x_label] = (named, unnamed)
        matrix[s_label] = row
    return matrix

def make_1d(items, buckets, key_fn):
    """key_fn takes a tuple and returns the bucket value"""
    result = {}
    for lo, hi, label in buckets:
        named = unnamed = 0
        for item in items:
            if lo <= key_fn(item) <= hi:
                if is_unnamed(item[0]): unnamed += 1
                else: named += 1
        result[label] = (named, unnamed)
    return result

# ── Output JSON ──────────────────────────────────────────────────

output = {
    "meta": {
        "total_functions": all_funcs,
        "excluded": excluded_cnt,
        "target": target_cnt,
        "named_all": named_all,
        "named_all_pct": round(named_all * 100.0 / target_cnt, 1) if target_cnt else 0,
        "member_total": len(member_funcs),
        "member_named": named_member,
        "member_pct": round(named_member * 100.0 / len(member_funcs), 1) if member_funcs else 0,
        "global_total": len(global_funcs),
        "global_named": named_global,
        "global_pct": round(named_global * 100.0 / len(global_funcs), 1) if global_funcs else 0,
        "globals_total": len(globals_list),
        "globals_named": named_globals,
        "globals_pct": round(named_globals * 100.0 / len(globals_list), 1) if globals_list else 0,
    },
    "all_functions_crosstab": {},
    "member_functions_crosstab": {},
    "global_functions_crosstab": {},
    "all_size_buckets": {},
    "all_xref_buckets": {},
}

# Convert crosstab for JSON
def ct_to_json(matrix):
    result = {}
    for s_label, row in sorted(matrix.items()):
        jrow = {}
        for x_label, (n,u) in sorted(row.items()):
            t = n + u
            pct = round(n*100.0/t, 1) if t else 0
            jrow[x_label] = {"named": n, "unnamed": u, "total": t, "pct": pct}
        result[s_label] = jrow
    return result

output["all_functions_crosstab"] = ct_to_json(make_crosstab(target_funcs, SIZE_BUCKETS, XREF_BUCKETS))
output["member_functions_crosstab"] = ct_to_json(make_crosstab(member_funcs, SIZE_BUCKETS, XREF_BUCKETS))
output["global_functions_crosstab"] = ct_to_json(make_crosstab(global_funcs, SIZE_BUCKETS, XREF_BUCKETS))

# 1D breakdowns
def dict_to_json(d):
    result = {}
    for label, (n,u) in sorted(d.items()):
        t = n+u
        result[label] = {"named": n, "unnamed": u, "total": t, "pct": round(n*100.0/t, 1) if t else 0}
    return result

output["all_size_buckets"] = dict_to_json(make_1d(target_funcs, SIZE_BUCKETS, lambda x: x[1]))
output["all_xref_buckets"] = dict_to_json(make_1d(target_funcs, XREF_BUCKETS, lambda x: x[2]))

outdir = r"C:\Users\jack1\AppData\Local\Temp\opencode"
os.makedirs(outdir, exist_ok=True)
outpath = os.path.join(outdir, "ida_stats_v2.json")
with open(outpath, 'w') as f:
    json.dump(output, f, indent=2)

print(f"Target funcs: {target_cnt} (excluded {excluded_cnt} of {all_funcs})")
print(f"Named: {named_all}/{target_cnt} ({round(named_all*100.0/target_cnt,1)}%)")
print(f"Member: {len(member_funcs)} total, {named_member} named ({round(named_member*100.0/len(member_funcs),1)}%)")
print(f"Global: {len(global_funcs)} total, {named_global} named ({round(named_global*100.0/len(global_funcs),1)}%)")
print(f"Global vars: {len(globals_list)} total, {named_globals} named ({round(named_globals*100.0/len(globals_list),1)}%)")
print(f"Saved to {outpath}")
