"""Parse IDA pseudocode annotations to extract clean C text"""
import json, os, re, struct

decompile_dir = 'tools/sub_decompiles'

def parse_ida_pseudocode(pseudo):
    """Extract clean C-like code from IDA's annotated pseudocode.
    
    IDA format uses:
    - \x01 CODE \x02 TEXT pattern where CODE is annotation instructions
    - 16-digit hex numbers are position markers
    - \x17 = type start, \x18 = name start, \x19 = keyword
    - !text! = highlighted text
    """
    # First, let's see the raw bytes with annotations
    result = []
    i = 0
    while i < len(pseudo):
        c = pseudo[i]
        if c == '\x01':
            # Start annotation - find matching \x02
            j = pseudo.find('\x02', i + 1)
            if j == -1:
                result.append(f'[ANNOT-UNCLOSED at {i}]')
                i += 1
                continue
            # The annotation is in pseudo[i+1:j]
            annot = pseudo[i+1:j]
            # Skip annotation (don't include in output)
            i = j + 1
        elif c == '\x02':
            # Lone \x02 - skip
            i += 1
        elif c in '\t\n\r ':
            result.append(c)
            i += 1
        elif c.isprintable():
            result.append(c)
            i += 1
        elif ord(c) < 0x20:
            # Other control char - skip
            i += 1
        else:
            result.append(c)
            i += 1
    
    text = ''.join(result)
    
    # Clean up: remove position markers like (0000000000000000
    text = re.sub(r'\(\d{16,}', '', text)
    
    # Remove IDA highlight marks !text! 
    text = re.sub(r'!([^!]*)!', r'\1', text)
    
    # Collapse whitespace
    text = re.sub(r'[ \t]+', ' ', text)
    text = re.sub(r'\n\s*\n', '\n', text)
    
    return text.strip()

# Test with samples
samples = ['00401190', '004011B0', '00401FB0', '00402430', '00404BB0', 
           '004059F0', '00403DF0', '00403E50', '00405490']

for addr in samples:
    fpath = os.path.join(decompile_dir, f'{addr}.json')
    if not os.path.exists(fpath):
        # Try uppercase
        fpath = os.path.join(decompile_dir, f'{addr.upper()}.json')
    if not os.path.exists(fpath):
        print(f'{addr}: NOT FOUND')
        continue
    
    with open(fpath, 'r') as f:
        d = json.load(f)
    
    cleaned = parse_ida_pseudocode(d['pseudocode'])
    print(f'\n=== {addr} ({d["name"]}) ===')
    print(cleaned[:500])
    print('---END---')
