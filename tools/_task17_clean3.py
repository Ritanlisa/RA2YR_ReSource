"""Aggressive cleaning: strip ALL \x01 X and \x02 X pairs, then position markers"""
import json, os, re

decompile_dir = 'tools/sub_decompiles'

def clean_pseudocode_v3(pseudo):
    """Aggressive cleaning approach."""
    # Step 1: Remove ALL \x01 X and \x02 X byte pairs
    result = []
    i = 0
    while i < len(pseudo):
        b = pseudo[i]
        if ord(b) == 0x01 or ord(b) == 0x02:
            # Skip this byte and the next (color code)
            i += 2
            continue
        elif ord(b) < 0x20 and b not in '\t\n\r':
            # Other control char - skip
            i += 1
            continue
        else:
            result.append(b)
            i += 1
    
    text = ''.join(result)
    
    # Step 2: Remove position markers (16+ digit numbers, possibly within parens)
    # Pattern: (0000000000000000 through (FFFFFFFFFFFFFFFF 
    text = re.sub(r'\(\d{16,}', '', text)
    # Also standalone long digit sequences that are position markers
    text = re.sub(r'\b\d{16,}\b', '', text)
    
    # Step 3: Clean up IDA highlight marks !text!
    text = re.sub(r'!([^!]*)!', r'\1', text)
    
    # Step 4: Remove lines that are just whitespace
    text = re.sub(r'\n\s*\n', '\n', text)
    
    # Step 5: Collapse multiple spaces
    text = re.sub(r'[ \t]+', ' ', text)
    
    # Step 6: Clean up spacing around operators
    text = re.sub(r' +([;,\(\)\{\}\+\-\*\/\&\|\^\<\>\=]) +', r'\1', text)
    text = re.sub(r'([;,\(\)\{\}\+\-\*\/\&\|\^\<\>\=]) +', r'\1 ', text)
    text = re.sub(r' +([;,\(\)\{\}\+\-\*\/\&\|\^\<\>\=])', r' \1', text)
    
    return text.strip()

# Test
samples = ['00401190', '004011B0', '00401FB0', '00402430', '00403DF0', 
           '00403E50', '004059F0', '00404BB0', '00403E80', '00403CE0',
           '00403D10', '00403D30', '00405490']

# Also load proposals for display
with open('tools/sub_naming_proposals.json') as f:
    proposals = json.load(f)['proposals']

for addr in samples:
    fpath = os.path.join(decompile_dir, f'{addr}.json')
    if not os.path.exists(fpath):
        continue
    
    with open(fpath, 'r') as f:
        d = json.load(f)
    
    cleaned = clean_pseudocode_v3(d['pseudocode'])
    
    norm_addr = f'0x{int(addr, 16):X}'
    prop = proposals.get(norm_addr, '???')
    
    print(f'=== {norm_addr} -> {prop} ({d.get("size", "?")}B) ===')
    # Show first 300 chars
    print(cleaned[:400])
    print()
