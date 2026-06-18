"""Test cleaner with proper position marker handling"""
import json, os, re

DECOMPILE_DIR = 'tools/sub_decompiles'

def clean_ida_v2(pseudo):
    """Proper IDA pseudocode cleaning.
    
    Annotations:
    - \\x01 COLOR text... \\x02 COLOR : color span (keep text)
    - \\x01\\x28 hexdigits : position marker (strip)
    - \\x04\\x04 : end-of-function marker
    """
    result = []
    i = 0
    n = len(pseudo)
    
    while i < n:
        b = ord(pseudo[i])
        
        if b == 0x01:
            if i + 1 >= n:
                i += 1
                continue
            color = ord(pseudo[i + 1])
            i += 2
            
            if color == 0x28:
                # Position marker - skip all following hex digits
                while i < n and pseudo[i] in '0123456789ABCDEFabcdef':
                    i += 1
            else:
                # Color span - read text until matching \\x02 COLOR
                while i < n:
                    if ord(pseudo[i]) == 0x02:
                        # Check if next byte matches color
                        if i + 1 < n and ord(pseudo[i + 1]) == color:
                            i += 2  # Skip \\x02 COLOR
                            break
                        elif i + 1 < n:
                            # \\x02 with different color - might still end span
                            i += 2
                            break
                        else:
                            i += 1
                            break
                    elif ord(pseudo[i]) == 0x01:
                        # Nested annotation - break out
                        break
                    elif ord(pseudo[i]) < 0x20 and pseudo[i] not in '\t\n\r':
                        i += 1
                    else:
                        result.append(pseudo[i])
                        i += 1
        
        elif b == 0x02:
            # Unexpected \\x02 - skip it and next byte
            if i + 1 < n:
                i += 2
            else:
                i += 1
        
        elif b == 0x04:
            # End marker: \\x04\\x04
            if i + 1 < n and ord(pseudo[i + 1]) == 0x04:
                i += 2
            else:
                i += 1
        
        elif b < 0x20 and pseudo[i] not in '\t\n\r':
            i += 1
        
        else:
            result.append(pseudo[i])
            i += 1
    
    text = ''.join(result)
    text = re.sub(r'!([^!]*)!', r'\1', text)
    text = re.sub(r'[ \t]+', ' ', text)
    text = re.sub(r'\n[ \t]*\n+', '\n', text)
    text = text.strip()
    return text


samples = ['00401190', '004011B0', '00401FB0', '00402430', '00403DF0',
           '00403E50', '004059F0', '00403E80', '00403CE0', '00405490']

for addr in samples:
    fpath = os.path.join(DECOMPILE_DIR, f'{addr}.json')
    if not os.path.exists(fpath):
        continue
    with open(fpath) as f:
        d = json.load(f)
    
    cleaned = clean_ida_v2(d['pseudocode'])
    
    idx = cleaned.find('{')
    sig = cleaned[:idx].strip() if idx >= 0 else cleaned
    body = cleaned[idx+1:].strip().rstrip('}') if idx >= 0 else ''
    
    print(f'=== {addr} ===')
    print(f'  Sig: {sig[:150]}')
    print(f'  Body: {body[:300]}')
    print()
