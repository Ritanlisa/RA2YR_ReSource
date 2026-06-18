"""Inspect pseudocode format to understand cleaning needed"""
import json, os, re

decompile_dir = 'tools/sub_decompiles'

samples = ['00401190', '004011B0', '00401FB0', '00402430', '00404BB0', '004059F0',
           '00403DF0', '00403E50', '00405490', '00405520']

for addr in samples:
    fpath = os.path.join(decompile_dir, f'{addr}.json')
    if not os.path.exists(fpath):
        print(f'{addr}: NOT FOUND')
        continue
    with open(fpath, 'r') as f:
        d = json.load(f)
    pseudo = d['pseudocode']
    
    # Show raw bytes for first 200 chars
    raw_bytes = pseudo.encode('utf-8', errors='replace')
    hex_start = ' '.join(f'{b:02x}' for b in raw_bytes[:40])
    
    # IDA color format: \x01<color_info>\x02<text> or similar
    # \x17 seems to be "start type", \x18 seems to be "start name"
    # Let me try different cleaning approaches
    
    # Approach 1: Remove ALL control characters (0x00-0x1f except newline)
    cleaned1 = re.sub(r'[\x00-\x08\x0b\x0c\x0e-\x1f]', '', pseudo)
    
    # Approach 2: IDA uses \x01 CODE \x02 TEXT \x01 pattern
    # Strip all \x01...\x02 pairs  
    cleaned2 = re.sub(r'\x01[^\x02]*\x02', '', pseudo)
    cleaned2 = re.sub(r'[\x00-\x08\x0b\x0c\x0e-\x1f]', '', cleaned2)
    
    # Approach 3: Keep only printable ASCII and whitespace
    cleaned3 = ''.join(c for c in pseudo if c.isprintable() or c in '\n\t ')
    
    print(f'\n=== {addr} ({d["name"]}) {d.get("size","?")}B ===')
    print(f'  Result 2 (strip x01..x02):')
    print(f'  {cleaned2[:300]}')
    print(f'  Result 3 (printable only):')
    print(f'  {cleaned3[:300]}')
    print()
