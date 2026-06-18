"""Sample various small sub_* functions to understand pseudocode variety"""
import json, os, re

decompile_dir = 'tools/sub_decompiles'

def clean_pseudocode(pseudo):
    """Clean IDA pseudocode annotations to extract readable C-like code.
    
    IDA format: \x01 COLOR text \x02 COLOR 
    Position markers: (000000000000NNNN 
    Variable highlights: !name!
    """
    result = []
    i = 0
    while i < len(pseudo):
        c = pseudo[i]
        if c == '\x01':
            # Start color span - skip until \x02 of same color
            # Format: \x01 COLOR text... \x02 COLOR
            if i + 1 < len(pseudo):
                color = pseudo[i + 1]
                # Find the matching \x02 color
                # Look for \x02 + same_color pattern
                j = i + 2
                while j < len(pseudo):
                    if pseudo[j] == '\x02':
                        if j + 1 < len(pseudo) and pseudo[j + 1] == color:
                            # Found matching end
                            i = j + 2
                            break
                        elif j + 1 < len(pseudo):
                            # \x02 with different color - might still be valid end
                            i = j + 2
                            break
                        else:
                            i = j + 1
                            break
                    j += 1
                else:
                    i += 2  # Skip \x01 COLOR
            else:
                i += 1
        elif c == '\x02':
            # Lone \x02 at end of file - skip
            if i + 1 < len(pseudo):
                i += 2  # Skip \x02 COLOR
            else:
                i += 1
        elif c.isprintable() or c in '\t\n\r ':
            result.append(c)
            i += 1
        else:
            i += 1
    
    text = ''.join(result)
    
    # Remove position markers: (000000000000NNNN 
    text = re.sub(r'\(\d{16,}', '', text)
    
    # Remove IDA highlight marks: !text!
    text = re.sub(r'!([^!]*)!', r'\1', text)
    
    # Clean up whitespace
    text = re.sub(r'[ \t]+', ' ', text)
    text = re.sub(r' +\n', '\n', text)
    text = re.sub(r'\n\s*\n', '\n', text)
    text = re.sub(r'\n +', '\n  ', text)
    
    return text.strip()

# Function to extract C logic from cleaned pseudocode
def extract_body(cleaned):
    """Extract the function body from cleaned pseudocode."""
    # Find the opening brace
    brace_idx = cleaned.find('{')
    if brace_idx == -1:
        return cleaned, '', ''
    
    # Extract signature (before {)
    sig = cleaned[:brace_idx].strip()
    
    # Find closing brace  
    close_idx = cleaned.rfind('}')
    if close_idx == -1:
        body = cleaned[brace_idx+1:].strip()
    else:
        body = cleaned[brace_idx+1:close_idx].strip()
    
    return sig, body, cleaned[close_idx+1:] if close_idx < len(cleaned) - 1 else ''

# Load naming proposals
with open('tools/sub_naming_proposals.json') as f:
    proposals = json.load(f)['proposals']

# Sample functions of various patterns
samples = [
    '00401190',  # BufferUpdateVolumeSettingsHelper - fastcall, arithmetic
    '004011B0',  # ArithmeticCompute - fastcall, simple math
    '00401FB0',  # GetMember3 - thiscall, accessor
    '00402430',  # GetMember41 - thiscall, accessor with mask
    '00403DF0',  # ArcMath - global, float math
    '00403E50',  # MathRoundToInt - global, call to Math::RoundToInt
    '004059F0',  # MethodStub4059F0 - thiscall, pointer chain
    '00404BB0',  # Random::Range - thiscall, complex
    '00403E80',  # ReturnZero - global, returns 0
    '00403CE0',  # MathDispatch - global
    '00403D10',  # InitGlobal - global
    '00403D30',  # InitFloatConst - global
    '00404C90',  # (if exists)
    '00406000',  # try 0x406000 range  
    '00407000',  # try different range
]

for addr in samples:
    # Normalize
    norm = addr.upper()
    fpath = os.path.join(decompile_dir, f'{norm}.json')
    if not os.path.exists(fpath):
        print(f'{norm}: FILE NOT FOUND')
        continue
    
    with open(fpath, 'r') as f:
        d = json.load(f)
    
    cleaned = clean_pseudocode(d['pseudocode'])
    sig, body, trail = extract_body(cleaned)
    
    proposal = proposals.get(f'0x{int(addr, 16):X}', '???')
    
    print(f'=== {"0x" + str(int(addr, 16)):10s} -> {proposal} ===')
    print(f'  Sig: {sig[:120]}')
    print(f'  Body: {body[:200]}')
    print()
