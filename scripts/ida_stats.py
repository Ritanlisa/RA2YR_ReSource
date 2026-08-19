r"""
IDA Python script: Collect reverse engineering statistics.
Saves results to temp/opencode/ida_stats.json
"""
import idaapi, idautils, idc, ida_funcs
import re, json, os
from collections import defaultdict

# ── Naming classification ──────────────────────────────────────

SYSTEM_PREFIXES = ['sub_', 'unknown_libname', 'nullsub_', 'j_', '??', '_', '@']
VTABLE_PATTERN = re.compile(r'___vt_\d+_$')
# IDA auto-generated string names: "a" + capitalized content (e.g. aRuntimeError, aLcAll)
IDA_STRING_NAME = re.compile(r'^a[A-Z][a-zA-Z0-9]*$')

def is_system_name(name):
    if not name:
        return True
    name = name.strip()
    # Vtable offset systematic naming
    if VTABLE_PATTERN.search(name):
        return True
    # Standard system prefixes
    for prefix in SYSTEM_PREFIXES:
        if name.startswith(prefix):
            return True
    # IDA auto-generated string constant names
    if IDA_STRING_NAME.match(name):
        return True
    # Pure hex value names
    if re.match(r'^[0-9a-fA-F]+h?$', name):
        return True
    return False

# ── Class member detection ──────────────────────────────────────

def is_class_member(ea):
    func = ida_funcs.get_func(ea)
    if func and func.prototype is not None:
        if '__thiscall' in str(func.prototype):
            return True
    name = idc.get_func_name(ea) or ""
    if '::' in name:
        return True
    return False

# ── Bucket helpers ───────────────────────────────────────────────

SIZE_BUCKETS = [
    (0,    16,   "0-16 B"),
    (17,   64,   "17-64 B"),
    (65,   256,  "65-256 B"),
    (257,  1024, "257-1024 B"),
    (1025, 4096, "1-4 KB"),
    (4097, float('inf'), ">4 KB"),
]

XREF_BUCKETS_FUNC = [
    (0, 0,    "0"),
    (1, 2,    "1-2"),
    (3, 5,    "3-5"),
    (6, 10,   "6-10"),
    (11, 20,  "11-20"),
    (21, 50,  "21-50"),
    (51, 100, "51-100"),
    (101, 200,"101-200"),
    (201, 500,"201-500"),
    (501, float('inf'), ">500"),
]

XREF_BUCKETS_GLOBAL = [
    (0, 0,    "0"),
    (1, 2,    "1-2"),
    (3, 5,    "3-5"),
    (6, 10,   "6-10"),
    (11, 20,  "11-20"),
    (21, 50,  "21-50"),
    (51, 100, "51-100"),
    (101, 200,"101-200"),
    (201, 500,"201-500"),
    (501, float('inf'), ">500"),
]

def get_bucket(value, buckets):
    for lo, hi, label in buckets:
        if lo <= value <= hi:
            return label
    return "unknown"

def bucket_counts(items, buckets):
    result = defaultdict(lambda: {"total": 0, "named": 0, "unnamed": 0})
    for name, val in items:
        bucket = get_bucket(val, buckets)
        result[bucket]["total"] += 1
        if is_system_name(name):
            result[bucket]["unnamed"] += 1
        else:
            result[bucket]["named"] += 1
    return result

# ── Collect functions ───────────────────────────────────────────

all_funcs = []
global_funcs = []
member_funcs = []

for ea in idautils.Functions():
    name = idc.get_func_name(ea) or ""
    func = ida_funcs.get_func(ea)
    size = func.size() if func else 0

    xref_count = 0
    for _ in idautils.XrefsTo(ea):
        xref_count += 1

    member = is_class_member(ea)

    entry = (name, size, xref_count)
    all_funcs.append(entry)
    if member:
        member_funcs.append(entry)
    else:
        global_funcs.append(entry)

print(f"Total functions: {len(all_funcs)}")
print(f"  Global (non-member): {len(global_funcs)}")
print(f"  Class member: {len(member_funcs)}")

# ── Collect global variables ────────────────────────────────────

globals_data = []
for ea, name in idautils.Names():
    flags = idc.get_full_flags(ea)
    if idaapi.is_data(flags):
        # Exclude IDA auto-generated string constants (not real variables)
        if IDA_STRING_NAME.match(name):
            continue
        xref_count = 0
        for _ in idautils.XrefsTo(ea):
            xref_count += 1
        globals_data.append((name, xref_count))

print(f"Global variables: {len(globals_data)}")

# ── Build output ────────────────────────────────────────────────

def make_table(items, label, size_buckets=None, xref_buckets=None):
    total_all = len(items)
    named_all = sum(1 for n, *r in items if not is_system_name(n))
    unnamed_all = total_all - named_all
    pct = round(named_all * 100.0 / total_all, 1) if total_all else 0

    result = {
        "label": label,
        "total": total_all,
        "named": named_all,
        "unnamed": unnamed_all,
        "pct": pct,
    }

    if size_buckets:
        size_items = [(n, r[0]) for n, *r in items]
        b = bucket_counts(size_items, size_buckets)
        for k in b:
            b[k]["pct"] = round(b[k]["named"] * 100.0 / b[k]["total"], 1) if b[k]["total"] else 0
        result["size_buckets"] = dict(b)

    if xref_buckets:
        # items are (name, size, xref) for funcs, (name, xref) for globals
        xref_items = [(n, r[-1]) for n, *r in items]
        b = bucket_counts(xref_items, xref_buckets)
        for k in b:
            b[k]["pct"] = round(b[k]["named"] * 100.0 / b[k]["total"], 1) if b[k]["total"] else 0
        result["xref_buckets"] = dict(b)

    return result

output = {
    "functions": {
        "all":       make_table(all_funcs,     "All Functions",     size_buckets=SIZE_BUCKETS, xref_buckets=XREF_BUCKETS_FUNC),
        "global":    make_table(global_funcs,  "Global Functions",  size_buckets=SIZE_BUCKETS, xref_buckets=XREF_BUCKETS_FUNC),
        "member":    make_table(member_funcs,  "Class Member Funcs", size_buckets=SIZE_BUCKETS, xref_buckets=XREF_BUCKETS_FUNC),
    },
    "globals": make_table(globals_data, "Global Variables", xref_buckets=XREF_BUCKETS_GLOBAL),
}

outdir = r"C:\Users\jack1\AppData\Local\Temp\opencode"
os.makedirs(outdir, exist_ok=True)
outpath = os.path.join(outdir, "ida_stats.json")
with open(outpath, 'w') as f:
    json.dump(output, f, indent=2)

print(f"\nSaved to {outpath}")
print("Script complete.")
