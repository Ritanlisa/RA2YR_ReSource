"""Properly clean IDA pseudocode - KEEP text between color markers"""
import json, os, re

decompile_dir = 'tools/sub_decompiles'

def clean_pseudocode_v2(pseudo):
    """Clean IDA pseudocode: strip color markers, keep text.
    
    Format: \x01 COLOR text... \x02 COLOR
    The text between \x01 COLOR and \x02 COLOR is the actual output.
    """
    result = []
    i = 0
    color_stack = []
    
    while i < len(pseudo):
        c = pseudo[i]
        if c == '\x01':
            # Start color span: \x01 COLOR
            if i + 1 < len(pseudo):
                color = pseudo[i + 1]
                color_stack.append(color)
                i += 2
                # Now read text until \x02 + same_color
                while i < len(pseudo):
                    if pseudo[i] == '\x02':
                        # Check if this \x02 matches our color
                        if i + 1 < len(pseudo):
                            if pseudo[i + 1] == color:
                                # Matching end - pop color and break
                                color_stack.pop()
                                i += 2
                                break
                            else:
                                # \x02 with different color - might be end of current
                                # Actually, \x02 ALWAYS ends current color in IDA format
                                color_stack.pop()
                                i += 1  # Don't consume the next byte - it's next color
                                break
                        else:
                            color_stack.pop()
                            i += 1
                            break
                    elif pseudo[i] == '\x01':
                        # Nested color - recurse? No, \x01 inside same color span
                        # might be a position marker start
                        # But \x01 always means start of annotation
                        # Let's just append the byte and continue
                        # Actually no - inside a color span, \x01 could start a sub-span
                        # For now, just include the byte
                        result.append('\x01')
                        i += 1
                    elif pseudo[i].isprintable() or pseudo[i] in '\t\n\r ':
                        result.append(pseudo[i])
                        i += 1
                    elif ord(pseudo[i]) < 0x20:
                        # Control char within color span - skip
                        i += 1
                    else:
                        result.append(pseudo[i])
                        i += 1
            else:
                i += 1
        elif c == '\x02':
            # Unexpected \x02 - skip it and next byte
            if i + 1 < len(pseudo):
                i += 2
            else:
                i += 1
        elif c.isprintable() or c in '\t\n\r ':
            result.append(c)
            i += 1
        elif ord(c) < 0x20:
            i += 1
        else:
            result.append(c)
            i += 1
    
    text = ''.join(result)
    
    # Remove position markers: (000000000000NNNN 
    text = re.sub(r'\(\d{16,}', '', text)
    
    # Remove solo IDA highlight marks !text! (keep the text)
    text = re.sub(r'!([^!]*)!', r'\1', text)
    
    # Clean up whitespace
    text = re.sub(r'[ \t]+', ' ', text)
    text = re.sub(r' +\n', '\n', text)
    text = re.sub(r'\n\s*\n+', '\n', text)
    text = re.sub(r'\n +', '\n  ', text)
    
    return text.strip()

# Test with all samples
samples = ['00401190', '004011B0', '00401FB0', '00402430', '00403DF0', 
           '00403E50', '004059F0', '00404BB0', '00403E80', '00403CE0',
           '00403D10', '00403D30', '00405490', '00405520']

for addr in samples:
    fpath = os.path.join(decompile_dir, f'{addr}.json')
    if not os.path.exists(fpath):
        fpath = os.path.join(decompile_dir, f'{addr.upper()}.json')
    if not os.path.exists(fpath):
        print(f'{addr}: FILE NOT FOUND')
        continue
    
    with open(fpath, 'r') as f:
        d = json.load(f)
    
    cleaned = clean_pseudocode_v2(d['pseudocode'])
    
    # Extract sig and body
    brace_idx = cleaned.find('{')
    if brace_idx >= 0:
        sig = cleaned[:brace_idx].strip()
        close_idx = cleaned.rfind('}')
        body = cleaned[brace_idx+1:close_idx].strip() if close_idx > brace_idx else cleaned[brace_idx+1:].strip()
    else:
        sig = cleaned
        body = ''
    
    print(f'=== {addr} ({d["name"]}) ===')
    print(f'  Sig: {sig[:150]}')
    print(f'  Body: {body[:300]}')
    print()
