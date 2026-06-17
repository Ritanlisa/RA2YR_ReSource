"""Final comprehensive cross-reference: IDA classes vs header definitions.
Handles:
- Direct name match (case-insensitive)
- ClassName -> ClassNameClass suffix expansion
- Template instantiations (VectorClass_ptr_XXX, DynamicVectorClass_XXX, etc.)
- Bracket notation (ArrayName[N])
- Blitter variant patterns (BlitTransXlatAlphaZRead_ushort)
- Module/namespace identification
- Forward-only declarations
"""
import os, re, json

root = r'D:\RA2YR_ReSource'

# --- Load data ---
with open(os.path.join(root, 'scripts', 'ida_classes_raw.json'), 'r') as f:
    ida_classes = json.load(f)
with open(os.path.join(root, 'scripts', 'header_classes.json'), 'r') as f:
    header_data = json.load(f)

header_defined = header_data['defined']
forward_only = header_data['forward_only']

# --- Build lookup tables ---
# Exact match (case-insensitive)
header_exact = {}   # lower -> (actual_name, info)
for cls, info in header_defined.items():
    header_exact[cls.lower()] = (cls, info)

# Also track forward decls for matching
forward_exact = {}
for cls, info in forward_only.items():
    forward_exact[cls.lower()] = (cls, info)

# --- Template base types ---
TEMPLATE_BASES = {
    'vectorclass': 'VectorClass',
    'vector': 'VectorClass',
    'dynamicvectorclass': 'DynamicVectorClass',
    'dynamicvector': 'DynamicVectorClass',
    'hashtable': 'HashTable',
    'typelist': 'TypeList',
    'comobject': 'COMObject',
    'ccomobject': 'CComObject',
    'streamext': 'StreamExt',
    'listclass': 'ListClass',
}
TEMPLATE_BASE_LOWERS = {k.lower(): v.lower() for k, v in TEMPLATE_BASES.items()}

# --- Blitter variant patterns ---
# BlitTransXlatAlphaZRead_ushort -> BlitTransXlatAlphaZRead
# BlitTransLucent25AlphaZReadWrite_ushort -> BlitTransLucent25AlphaZReadWrite
BLITTER_PATTERNS = [
    re.compile(r'^(Blit\w+)_ushort$'),
    re.compile(r'^(Blit\w+)_ushort_\d+$'),
]

# --- Module/namespace markers (not classes) ---
# Functions using ModuleName::Method where ModuleName is NOT a class
# Used for organizational grouping in IDA
KNOWN_MODULES = {
    'audio', 'network', 'voxel', 'audioqueue', 'audiostream',
    'string', 'widestring', 'math', 'coord', 'timer', 'array',
    'savegame', 'options', 'randommap', 'createteamcommand',
    'scriptaction', 'mpcooperative', 'loadingoptions', 'loadoptions',
    'game', 'tactical', 'cell', 'object', 'msframeanim', 'msengine',
    'dialog', 'mppregame', 'networklobby', 'webbrowser',
    'misc', 'scr', 'debug', 'house', 'side', 'trigger', 'tag',
    'team', 'script', 'taskforce', 'campaign', 'event', 'action',
    'mode', 'para', 'cnet', 'sidecd', 'special', 'super',
    'theater', 'tutorial', 'waypoint', 'winsock', 'wsa',
    'xcc', 'yr', 'editor'
}

# Classes that IDA names without "Class" suffix but header has "Class" suffix
# IDA_name -> actual header class (auto-append "Class")
IDA_WITHOUT_CLASS_SUFFIX = True  # always try this

# Classes where IDA has bracket notation
BRACKET_PATTERN = re.compile(r'^(\w+)\[(\d+)\]$')

# Classes with trailing numbers (versioned/different)
TRAILING_NUMBER = re.compile(r'^(\w+)(\d+)$')

# --- Start classification ---
RESULTS = {
    'DEFINED': [],
    'TEMPLATE': [],
    'FORWARD_ONLY': [],
    'LIKELY_MODULE': [],  # Not actually a class, just namespace/module grouping
    'MISSING': []
}

for ida_name, info in ida_classes.items():
    method_count = info['count']
    ida_lower = ida_name.lower()
    match_found = None
    
    # --- Try matching strategies in order ---
    
    # 1. Direct exact match
    if ida_lower in header_exact:
        actual, hinfo = header_exact[ida_lower]
        match_found = ('DEFINED', actual, hinfo)
    
    # 2. IDA name + "Class" suffix
    if not match_found and not ida_name.endswith('Class'):
        with_class = ida_name + 'Class'
        if with_class.lower() in header_exact:
            actual, hinfo = header_exact[with_class.lower()]
            match_found = ('DEFINED', actual, hinfo)
    
    # 3. Bracket notation: BlowPipe[23] -> BlowPipe
    if not match_found:
        bm = BRACKET_PATTERN.match(ida_name)
        if bm:
            base = bm.group(1)
            if base.lower() in header_exact:
                actual, hinfo = header_exact[base.lower()]
                match_found = ('DEFINED', actual, hinfo)
            elif (base + 'Class').lower() in header_exact:
                actual, hinfo = header_exact[(base + 'Class').lower()]
                match_found = ('DEFINED', actual, hinfo)
    
    # 4. Template instantiation: VectorClass_ptr_XXX, DynamicVectorClass_XXX, etc.
    if not match_found and '_' in ida_name:
        # Try splitting: first part could be template name
        parts = ida_name.split('_', 1)
        if len(parts) == 2:
            base = parts[0].lower()
            if base in TEMPLATE_BASE_LOWERS:
                template_cls = TEMPLATE_BASE_LOWERS[base]
                # Check if template class exists in headers
                # Template base might be VectorClass (lower: vectorclass)
                for check_name in [base, template_cls]:
                    if check_name in header_exact:
                        actual, hinfo = header_exact[check_name]
                        match_found = ('TEMPLATE', actual, hinfo)
                        break
                if not match_found:
                    # Check DynamicVectorClass, HashTable, etc in headers
                    for check_base in TEMPLATE_BASES.values():
                        if check_base.lower() in header_exact:
                            actual, hinfo = header_exact[check_base.lower()]
                            match_found = ('TEMPLATE', actual, hinfo)
                            break
            else:
                # Try first TWO parts: VectorClass_ptr_HouseClass -> template base VectorClass
                # Split at underscore after potential template name
                for split_idx in range(1, min(4, len(parts))):
                    potential_base = '_'.join(parts[:split_idx]).lower()
                    if potential_base in TEMPLATE_BASE_LOWERS:
                        template_name = TEMPLATE_BASE_LOWERS[potential_base]
                        if template_name in header_exact:
                            actual, hinfo = header_exact[template_name]
                            match_found = ('TEMPLATE', actual, hinfo)
                            break
    
    # 5. Blitter variant: BlitTransXlatAlphaZRead_ushort -> base BlitTrans class
    if not match_found:
        for blit_pat in BLITTER_PATTERNS:
            bm = blit_pat.match(ida_name)
            if bm:
                base_blit = bm.group(1)
                # Check if base exists in headers
                if base_blit.lower() in header_exact:
                    actual, hinfo = header_exact[base_blit.lower()]
                    match_found = ('DEFINED', actual, hinfo)
                    break
                # Also check without "Class" suffix    
                if (base_blit + 'Class').lower() in header_exact:
                    actual, hinfo = header_exact[(base_blit + 'Class').lower()]
                    match_found = ('DEFINED', actual, hinfo)
                    break
    
    # 6. Forward-only declaration check
    if not match_found and ida_lower in forward_exact:
        actual, finfo = forward_exact[ida_lower]
        match_found = ('FORWARD_ONLY', actual, finfo)
    
    # 7. Check if it's likely a module/namespace, not a class
    if not match_found:
        module_lower = ida_lower
        # Strip "Class" suffix for module detection
        if module_lower.endswith('class'):
            module_lower = module_lower[:-5]
        
        if module_lower in KNOWN_MODULES:
            match_found = ('LIKELY_MODULE', None, None)
    
    # --- Record result ---
    if match_found:
        category = match_found[0]
        matched_name = match_found[1]
        hinfo = match_found[2]
        
        entry = {
            'ida_name': ida_name,
            'method_count': method_count,
            'sample_methods': info['methods'][:10],
        }
        
        if category == 'DEFINED':
            entry['matched_header'] = matched_name
            entry['header_file'] = hinfo['files'][0]
            entry['namespace'] = hinfo.get('namespace', '')
            entry['kind'] = hinfo.get('kind', 'class')
        elif category == 'TEMPLATE':
            entry['template_base'] = matched_name
            entry['header_file'] = hinfo['files'][0]
            entry['namespace'] = hinfo.get('namespace', '')
        elif category == 'FORWARD_ONLY':
            entry['forward_declared_in'] = hinfo.get('forward_files', hinfo.get('files', []))
        elif category == 'LIKELY_MODULE':
            entry['module_note'] = 'Module/namespace grouping, not a class'
    else:
        category = 'MISSING'
        entry = {
            'ida_name': ida_name,
            'method_count': method_count,
            'sample_methods': info['methods'][:15],
            'sample_addresses': info['addresses'][:5],
        }
    
    RESULTS[category].append(entry)

# Sort each category by method_count
for cat in RESULTS:
    RESULTS[cat].sort(key=lambda x: -x['method_count'])

# --- Now determine reference status for MISSING classes ---
# Grep source files for class name references
import subprocess

missing_classes = RESULTS['MISSING']

# For each missing class, search .cpp and .hpp files for references
for item in missing_classes:
    ida_name = item['ida_name']
    references = []
    
    # Quick search in key source files
    # Search for class name as standalone word in source
    try:
        # Use grep to find files referencing this class
        result = subprocess.run(
            ['rg', '-l', '--no-heading', '-g', '*.{cpp,hpp,h}', 
             rf'\b{re.escape(ida_name)}\b',
             os.path.join(root, 'src')],
            capture_output=True, text=True, timeout=5
        )
        if result.stdout.strip():
            ref_files = [os.path.relpath(f.strip(), root) for f in result.stdout.strip().split('\n') if f.strip()]
            references = ref_files[:10]  # top 10
    except Exception:
        pass
    
    item['referenced_in_code'] = references
    item['priority'] = 'HIGH' if references else ('MEDIUM' if item['method_count'] >= 10 else 'LOW')

# --- Summary ---
total_ida = len(ida_classes)
total_methods = sum(info['count'] for info in ida_classes.values())

summary_cats = {}
for cat in ['DEFINED', 'TEMPLATE', 'FORWARD_ONLY', 'LIKELY_MODULE', 'MISSING']:
    items = RESULTS[cat]
    cat_methods = sum(x['method_count'] for x in items)
    summary_cats[cat] = {
        'class_count': len(items),
        'method_count': cat_methods,
        'class_pct': len(items) / total_ida * 100,
        'method_pct': cat_methods / total_methods * 100
    }

# Priority breakdown for MISSING
priority_counts = {'HIGH': 0, 'MEDIUM': 0, 'LOW': 0}
for item in RESULTS['MISSING']:
    priority_counts[item['priority']] += 1

report = {
    'metadata': {
        'total_ida_classes': total_ida,
        'total_ida_methods': total_methods,
        'total_header_defined': len(header_defined),
        'total_header_forward_only': len(forward_only),
        'generated_at': '2026-06-17',
    },
    'summary': summary_cats,
    'miss_priority_breakdown': priority_counts,
    'DEFINED': RESULTS['DEFINED'],
    'TEMPLATE': RESULTS['TEMPLATE'],
    'FORWARD_ONLY': RESULTS['FORWARD_ONLY'],
    'LIKELY_MODULE': RESULTS['LIKELY_MODULE'],
    'MISSING': RESULTS['MISSING'],
}

# Save
output_path = os.path.join(root, 'scripts', 'ida_class_coverage.json')
with open(output_path, 'w') as f:
    json.dump(report, f, indent=2)

# --- Print summary ---
print("=" * 70)
print("IDA CLASS HEADER COVERAGE REPORT")
print("=" * 70)
print()
for cat in ['DEFINED', 'TEMPLATE', 'FORWARD_ONLY', 'LIKELY_MODULE', 'MISSING']:
    s = summary_cats[cat]
    print(f"  {cat:16s}: {s['class_count']:5d} classes ({s['class_pct']:5.1f}%)  |  {s['method_count']:5d} methods ({s['method_pct']:5.1f}%)")
print()
print(f"  Total IDA classes:        {total_ida}")
print(f"  Total IDA methods:        {total_methods}")
print(f"  Header class definitions: {len(header_defined)}")
print(f"  Header forward-decls:     {len(forward_only)}")
print(f"  Likely modules/namespaces:{len(RESULTS['LIKELY_MODULE'])}")
print()
print(f"  MISSING priority: HIGH={priority_counts['HIGH']}, MEDIUM={priority_counts['MEDIUM']}, LOW={priority_counts['LOW']}")
print()
print("--- TOP 30 MISSING (HIGHEST METHOD COUNT) ---")
for item in RESULTS['MISSING'][:30]:
    refs = len(item.get('referenced_in_code', []))
    ref_str = f"  [refs: {refs} files]" if refs else ""
    print(f"  {item['method_count']:4d}  {item['ida_name']:40s}  {item['priority']}{ref_str}")
    if item.get('sample_methods'):
        print(f"       methods: {', '.join(item['sample_methods'][:8])}")

print()
print(f"Report saved to scripts/ida_class_coverage.json")
