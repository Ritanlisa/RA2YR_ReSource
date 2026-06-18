"""Analyze common patterns in small sub_* functions to build translation templates"""
import json, os, re
from collections import Counter

decompile_dir = 'tools/sub_decompiles'

def clean_pseudocode(pseudo):
    """Strip IDA annotations aggressively."""
    result = []
    i = 0
    while i < len(pseudo):
        b = pseudo[i]
        if ord(b) in (0x01, 0x02):
            i += 2
        elif ord(b) < 0x20 and b not in '\t\n\r':
            i += 1
        else:
            result.append(b)
            i += 1
    text = ''.join(result)
    # Remove position markers (16+ hex digits)
    text = re.sub(r'\b[0-9A-Fa-f]{16,}\b', '', text)
    text = re.sub(r'\(\d{16,}', '', text)
    text = re.sub(r'!([^!]*)!', r'\1', text)
    text = re.sub(r'[ \t]+', ' ', text)
    text = re.sub(r'\n\s*\n', '\n', text)
    return text.strip()

def classify_function(cleaned, func_info):
    """Classify function pattern."""
    sig_end = cleaned.find('{')
    if sig_end < 0:
        return {'patterns': ['unknown'], 'conv': '?', 'ret_type': '?', 'sig': '', 'body': cleaned[:200]}
    
    sig = cleaned[:sig_end].strip()
    body = cleaned[sig_end+1:].strip().rstrip('}')
    
    patterns = []
    
    # Check for pure accessor: return *(this + N)
    if re.search(r'return\s+\*\s*\(\s*this\s*\+\s*\d+\s*\)', body, re.IGNORECASE):
        patterns.append('accessor_direct')
    elif re.search(r'return\s+\*\s*this\s*\+\s*\d+', body, re.IGNORECASE):
        patterns.append('accessor_direct')
    
    # Check for accessor with mask: return *(this + N) & M
    if re.search(r'return.*\*\s*\(?\s*this\s*\+\s*\d+.*\&\s*\d+', body, re.IGNORECASE):
        patterns.append('accessor_masked')
    
    # Check for setter: *(this + N) = value
    if re.search(r'\*\s*\(?\s*this\s*\+\s*\d+.*\=\s*', body, re.IGNORECASE):
        patterns.append('setter')
    
    # Check for pointer chain: *(*(this + N) + M)
    if re.search(r'\*\s*\(\s*\*\s*\(\s*this', body, re.IGNORECASE):
        patterns.append('pointer_chain')
    
    # Check for global write
    if re.search(r'(dword_|dbl_|word_|byte_|flt_)\w+\s*=', body):
        patterns.append('global_write')
    
    # Check for global read
    if re.search(r'(dword_|dbl_|word_|byte_|flt_)\w+', body):
        patterns.append('global_read')
    
    # Check for function call
    if re.search(r'[A-Z]\w*::\w+\(', body):
        patterns.append('class_call')
    elif re.search(r'\w+\(', body):
        # Has some function call
        patterns.append('func_call')
    
    # Check for conditional
    if 'if' in body.lower():
        patterns.append('conditional')
    
    if not patterns:
        patterns.append('simple')
    
    # Check calling convention
    conv = 'unknown'
    if '__thiscall' in sig:
        conv = 'thiscall'
    elif '__fastcall' in sig:
        conv = 'fastcall'
    elif '__stdcall' in sig:
        conv = 'stdcall'
    elif '__cdecl' in sig:
        conv = 'cdecl'
    
    # Check return type
    ret_type = 'int'
    if sig.startswith('void '):
        ret_type = 'void'
    elif sig.startswith('__int64 '):
        ret_type = '__int64'
    elif sig.startswith('bool '):
        ret_type = 'bool'
    elif sig.startswith('char '):
        ret_type = 'char'
    elif sig.startswith('double '):
        ret_type = 'double'
    elif sig.startswith('float '):
        ret_type = 'float'
    
    return {
        'patterns': patterns or ['simple'],
        'conv': conv,
        'ret_type': ret_type,
        'sig': sig,
        'body': body[:300]
    }

# Load proposals
with open('tools/sub_naming_proposals.json') as f:
    proposals = json.load(f)['proposals']

# Sample 200 functions and classify
import random
random.seed(42)

all_files = [f for f in os.listdir(decompile_dir) if f.endswith('.json') and not f.startswith('_')]
# Get only small ones
small_files = []
for fname in all_files:
    fpath = os.path.join(decompile_dir, fname)
    with open(fpath, 'r') as f:
        d = json.load(f)
    addr = '0x' + fname.replace('.json', '').upper()
    # Check size from functions.json
    small_files.append((addr, fname))

# Shuffle and take sample
random.shuffle(small_files)
sample = small_files[:300]

pattern_counts = Counter()
conv_counts = Counter()
ret_counts = Counter()
examples = {p: [] for p in ['accessor_direct', 'accessor_masked', 'setter', 
                              'pointer_chain', 'global_write', 'conditional',
                              'func_call', 'simple']}

for addr, fname in sample:
    fpath = os.path.join(decompile_dir, fname)
    with open(fpath, 'r') as f:
        d = json.load(f)
    
    cleaned = clean_pseudocode(d['pseudocode'])
    info = classify_function(cleaned, d)
    
    for p in info['patterns']:
        pattern_counts[p] += 1
        if len(examples.get(p, [])) < 3:
            prop_name = proposals.get(addr, '???')
            examples.setdefault(p, []).append((addr, prop_name, info['body'][:150]))
    
    conv_counts[info['conv']] += 1
    ret_counts[info['ret_type']] += 1

print("=== Pattern distribution (sample of 300) ===")
for p, c in pattern_counts.most_common():
    print(f"  {p}: {c}")

print("\n=== Calling conventions ===")
for c, n in conv_counts.most_common():
    print(f"  {c}: {n}")

print("\n=== Return types ===")
for r, n in ret_counts.most_common():
    print(f"  {r}: {n}")

print("\n=== Examples per pattern ===")
for p in examples:
    if examples[p]:
        print(f"\n--- {p} ---")
        for addr, name, body in examples[p][:3]:
            print(f"  {addr} -> {name}")
            print(f"    {body[:200]}")
