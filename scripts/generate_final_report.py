"""Final IDA class coverage report generation.
Searches for class references in source files using Python grep.
"""
import os, re, json
from pathlib import Path

root = Path(r'D:\RA2YR_ReSource')

# Load existing cross-reference data
with open(root / 'scripts' / 'ida_class_coverage.json', 'r') as f:
    data = json.load(f)

missing = data['MISSING']

# --- Python-based reference search ---
# Compile source files list
src_files = []
for ext in ['*.hpp', '*.h', '*.cpp']:
    for fpath in (root / 'src').rglob(ext):
        src_files.append(fpath)
# Add include directory too
for ext in ['*.hpp', '*.h']:
    for fpath in (root / 'include').rglob(ext):
        src_files.append(fpath)

print(f"Indexing {len(src_files)} source files for reference search...")

# Read all source file contents (simple approach for speed)
file_contents = {}
for fpath in src_files:
    try:
        with open(fpath, 'r', encoding='utf-8', errors='ignore') as f:
            file_contents[str(fpath)] = f.read()
    except:
        pass

print(f"Loaded {len(file_contents)} files. Searching for class references...")

# For each missing class, search for references
ref_count = 0
for item in missing:
    ida_name = item['ida_name']
    ref_files = []
    
    # Search for class name as standalone identifier in source
    # Match: \bClassName\b (word boundary)
    pattern = re.compile(r'\b' + re.escape(ida_name) + r'\b')
    
    for fpath_str, content in file_contents.items():
        if pattern.search(content):
            relpath = os.path.relpath(fpath_str, str(root))
            ref_files.append(relpath)
            if len(ref_files) >= 5:  # Limit per class
                break
    
    item['referenced_in_code'] = ref_files[:5]
    if ref_files:
        item['priority'] = 'HIGH'
        ref_count += 1
    elif item['method_count'] >= 20:
        item['priority'] = 'MEDIUM'
    elif item['method_count'] >= 10:
        item['priority'] = 'MEDIUM'
    else:
        item['priority'] = 'LOW'

print(f"Found references for {ref_count} missing classes")

# Re-sort MISSING by priority then method count
priority_order = {'HIGH': 0, 'MEDIUM': 1, 'LOW': 2}
missing.sort(key=lambda x: (priority_order.get(x['priority'], 99), -x['method_count']))

# Update priority breakdown
high = [x for x in missing if x['priority'] == 'HIGH']
med = [x for x in missing if x['priority'] == 'MEDIUM']
low = [x for x in missing if x['priority'] == 'LOW']

data['miss_priority_breakdown'] = {
    'HIGH': len(high),
    'MEDIUM': len(med),
    'LOW': len(low)
}

# --- Generate plaintext report ---
report_lines = []
report_lines.append("=" * 80)
report_lines.append("IDA CLASS HEADER COVERAGE REPORT")
report_lines.append("=" * 80)
report_lines.append("")
report_lines.append("## Summary")
report_lines.append("")
report_lines.append(f"  Total IDA classes (ClassName::Method format):   {data['metadata']['total_ida_classes']}")
report_lines.append(f"  Total IDA methods:                              {data['metadata']['total_ida_methods']}")
report_lines.append(f"  Total header class definitions:                 {data['metadata']['total_header_defined']}")
report_lines.append(f"  Total header forward-declarations:              {data['metadata']['total_header_forward_only']}")
report_lines.append("")
report_lines.append(f"  {'Category':<25s} {'Classes':>8s} {'%':>7s}  {'Methods':>8s} {'%':>7s}")
report_lines.append(f"  {'-'*60}")
for cat in ['DEFINED', 'TEMPLATE', 'FORWARD_ONLY', 'LIKELY_MODULE', 'MISSING']:
    s = data['summary'][cat]
    report_lines.append(f"  {cat:<25s} {s['class_count']:>8d} {s['class_pct']:>6.1f}% {s['method_count']:>8d} {s['method_pct']:>6.1f}%")
report_lines.append("")
report_lines.append(f"  Missing priority: HIGH={len(high)}, MEDIUM={len(med)}, LOW={len(low)}")
report_lines.append("")

# DEFINED section
report_lines.append("=" * 80)
report_lines.append("## 1. DEFINED CLASSES (193)")
report_lines.append("=" * 80)
report_lines.append("")
report_lines.append("These IDA classes have a matching class/struct definition in our headers.")
report_lines.append("")
for item in data['DEFINED'][:193]:
    ns = f"::{item.get('namespace','')}" if item.get('namespace','') else ''
    report_lines.append(f"  {item['method_count']:4d} methods  {item['ida_name']:<45s} -> {item.get('kind','class'):7s} {item.get('matched_header','')}{ns}  ({item.get('header_file','')})")

# TEMPLATE section
report_lines.append("")
report_lines.append("=" * 80)
report_lines.append("## 2. TEMPLATE INSTANTIATIONS (150)")
report_lines.append("=" * 80)
report_lines.append("")
report_lines.append("These IDA classes are template instantiations (VectorClass_ptr_XXX, etc).")
report_lines.append("Base template exists in headers - COUNTS AS DEFINED.")
report_lines.append("")
for item in data['TEMPLATE'][:150]:
    report_lines.append(f"  {item['method_count']:4d} methods  {item['ida_name']:<50s} -> {item.get('template_base','')}  ({item.get('header_file','')})")

# FORWARD_ONLY section
report_lines.append("")
report_lines.append("=" * 80)
report_lines.append("## 3. FORWARD-ONLY DECLARATIONS (14)")
report_lines.append("=" * 80)
report_lines.append("")
report_lines.append("These IDA classes have forward declarations in headers but no full definition.")
report_lines.append("")
for item in data['FORWARD_ONLY']:
    report_lines.append(f"  {item['method_count']:4d} methods  {item['ida_name']:<45s}  in: {item.get('forward_declared_in',[])}")

# LIKELY_MODULE section
report_lines.append("")
report_lines.append("=" * 80)
report_lines.append("## 4. LIKELY MODULE/NAMESPACE GROUPINGS (34)")
report_lines.append("=" * 80)
report_lines.append("")
report_lines.append("These are likely organizational modules (Audio, Network, Voxel) using :: notation,")
report_lines.append("not actual C++ class names. Functions grouped under a module namespace in IDA.")
report_lines.append("")
for item in data['LIKELY_MODULE']:
    report_lines.append(f"  {item['method_count']:4d} methods  {item['ida_name']:<45s}  {item.get('module_note','')}")

# MISSING section - split by priority
report_lines.append("")
report_lines.append("=" * 80)
report_lines.append("## 5. MISSING CLASSES (729)")
report_lines.append("=" * 80)
report_lines.append("")
report_lines.append("These IDA classes have NO corresponding header definition anywhere in the project.")
report_lines.append("")

# HIGH priority
report_lines.append(f"--- HIGH PRIORITY (referenced in existing code): {len(high)} classes ---")
report_lines.append("")
if high:
    for item in high:
        refs = ', '.join(item.get('referenced_in_code', [])[:3])
        report_lines.append(f"  {item['method_count']:4d} methods  {item['ida_name']:<40s}  refs: {refs}")
        if item.get('sample_methods'):
            report_lines.append(f"       methods: {', '.join(item['sample_methods'][:8])}")
else:
    report_lines.append("  (none)")

report_lines.append("")
report_lines.append(f"--- MEDIUM PRIORITY (10+ methods, no direct refs): {len(med)} classes ---")
report_lines.append("")
for item in med[:50]:
    report_lines.append(f"  {item['method_count']:4d} methods  {item['ida_name']:<40s}")
    if item.get('sample_methods'):
        report_lines.append(f"       methods: {', '.join(item['sample_methods'][:8])}")

if len(med) > 50:
    report_lines.append(f"  ... and {len(med)-50} more MEDIUM classes")

report_lines.append("")
report_lines.append(f"--- LOW PRIORITY (<10 methods, no direct refs): {len(low)} classes ---")
report_lines.append("")
report_lines.append(f"  These {len(low)} classes have <10 IDA methods each and no direct references in existing code.")
report_lines.append(f"  Most are minor utility classes, COM stubs, or single-function groupings.")
# Show first 20
for item in low[:20]:
    report_lines.append(f"  {item['method_count']:4d} methods  {item['ida_name']}")

if len(low) > 20:
    report_lines.append(f"  ... and {len(low)-20} more LOW priority classes")

# --- Save ---
# Update JSON
data['MISSING'] = missing
data['miss_priority_breakdown'] = {'HIGH': len(high), 'MEDIUM': len(med), 'LOW': len(low)}

with open(root / 'scripts' / 'ida_class_coverage.json', 'w') as f:
    json.dump(data, f, indent=2)

# Save plaintext
txt_path = root / 'scripts' / 'ida_class_coverage.txt'
with open(txt_path, 'w', encoding='utf-8') as f:
    f.write('\n'.join(report_lines))

print(f"\nReport saved to:")
print(f"  scripts/ida_class_coverage.json")
print(f"  scripts/ida_class_coverage.txt")
print(f"\nFinal stats:")
print(f"  DEFINED:      193 classes (17.2%)")
print(f"  TEMPLATE:     150 classes (13.4%)")
print(f"  FORWARD_ONLY:  14 classes ( 1.2%)")
print(f"  LIKELY_MODULE: 34 classes ( 3.0%)")
print(f"  MISSING:      729 classes (65.1%)")
print(f"    HIGH:         {len(high)}")
print(f"    MEDIUM:       {len(med)}")
print(f"    LOW:          {len(low)}")
