"""
Task 17: Generate compilable C++ stubs for sub_* functions <50 bytes.
Preserves IDA pseudocode as comments for future manual translation.
"""
import json, os, re
from collections import defaultdict

DECOMPILE_DIR = 'tools/sub_decompiles'
PROPOSALS_FILE = 'tools/sub_naming_proposals.json'
FUNCTIONS_FILE = 'injectFunctionTest/functions.json'
OUTPUT_DIR = 'src'
MAX_SIZE = 50
FUNCS_PER_FILE = 300

IDA_TO_CPP = {
    '_DWORD': 'int', '_BYTE': 'unsigned char', '_WORD': 'unsigned short',
    '_UNKNOWN': 'void',
    'int': 'int', 'void': 'void', 'bool': 'bool', 'char': 'char',
    'double': 'double', 'float': 'float',
    '__int64': 'int64_t', '__int32': 'int32_t', '__int16': 'int16_t',
    'unsigned int': 'unsigned int', 'unsigned __int64': 'uint64_t',
    'unsigned __int8': 'uint8_t', 'unsigned __int16': 'uint16_t',
    'long double': 'double', 'HRESULT': 'int',
    # Windows types
    'BOOL': 'int', 'DWORD': 'unsigned int', 'HLOCAL': 'void*',
    'INT_PTR': 'intptr_t', 'LONG': 'long', 'LONGLONG': 'int64_t',
    'LPTOP_LEVEL_EXCEPTION_FILTER': 'void*', 'LRESULT': 'intptr_t',
    'exception': 'void',  # C++ std::exception conflict, map to void*
}


def norm_addr(a):
    a = a.upper()
    if a.startswith('0X'): a = '0x' + a[2:]
    if a.startswith('0x'):
        h = a[2:].lstrip('0') or '0'
        return '0x' + h
    h = a.lstrip('0') or '0'
    return '0x' + h


def assign_module(name):
    if '::' in name:
        cls = name.split('::')[0]
        m = {
            'String': 'core', 'Math': 'core', 'Random': 'core',
            'VectorClass': 'core', 'Matrix3x4': 'core', 'Coord': 'core',
            'CellCoord': 'core', 'Color': 'core', 'Timer': 'system',
            'Cell': 'system', 'MapClass': 'system', 'Map': 'system',
            'ScenarioClass': 'system', 'Tactical': 'system',
            'INIClass': 'system', 'HashTable': 'core', 'Checksummer': 'core',
            'ComPtr': 'core', 'ListClass': 'core', 'LinkedList': 'core',
            'Audio': 'misc', 'AudioStream': 'misc', 'Debug': 'core',
            'House': 'house', 'BuildingType': 'type', 'ObjectType': 'type',
            'WarheadType': 'type', 'LocomotionClass': 'misc',
            'TextRenderer': 'render', 'ControlClass': 'ui',
            'MultiplayerGameMode': 'network', 'BufferIOFileClass': 'system',
        }
        return m.get(cls, 'core')
    nl = name.lower()
    if any(w in nl for w in ['audio','mixer','sound','voice','voc','music','stream']): return 'misc'
    if any(w in nl for w in ['render','draw','surface','blit','pixel','ddraw','palette','bink','shp']): return 'render'
    if any(w in nl for w in ['math','sqrt','sin','cos','tan','pow','round','float','double','arctan']): return 'core'
    if any(w in nl for w in ['cell','map','coord','tile','terrain','zone']): return 'system'
    if any(w in nl for w in ['team','script','trigger','taskforce']): return 'team'
    if any(w in nl for w in ['house','player','side','country']): return 'house'
    if any(w in nl for w in ['dialog','gadget','button','menu','sidebar','mouse','keyboard','gui']): return 'ui'
    if any(w in nl for w in ['network','socket','winsock','multiplayer','wol','internet','lan','chat']): return 'network'
    if any(w in nl for w in ['building','infantry','unit','aircraft','vessel','techno','object','foot','bullet','anim','particle']): return 'entity'
    if any(w in nl for w in ['locomotor','drive','jumpjet','rocket','hover','walk','movement']): return 'misc'
    if any(w in nl for w in ['ini','rules','load','read']): return 'system'
    return 'core'


def clean_ida(pseudo):
    """Strip IDA annotations, keep readable pseudocode."""
    result = []
    i = 0
    n = len(pseudo)
    while i < n:
        b = ord(pseudo[i])
        if b == 0x01:
            if i + 1 >= n: i += 1; continue
            color = ord(pseudo[i + 1]); i += 2
            if color == 0x28:
                while i < n and pseudo[i] in '0123456789ABCDEFabcdef': i += 1
            else:
                while i < n:
                    cb = ord(pseudo[i])
                    if cb == 0x02:
                        if i+1 < n and ord(pseudo[i+1]) == color: i += 2; break
                        elif i+1 < n: i += 2; break
                        else: i += 1; break
                    elif cb == 0x01: break
                    elif cb < 0x20 and pseudo[i] not in '\t\n\r': i += 1
                    else: result.append(pseudo[i]); i += 1
        elif b == 0x02:
            i += 2 if i+1 < n else 1
        elif b == 0x04:
            i += 2 if i+1 < n and ord(pseudo[i+1]) == 0x04 else 1
        elif b < 0x20 and pseudo[i] not in '\t\n\r':
            i += 1
        else:
            result.append(pseudo[i]); i += 1
    text = ''.join(result)
    text = re.sub(r'!([^!]*)!', r'\1', text)
    text = re.sub(r'[ \t]+', ' ', text)
    text = re.sub(r'\n[ \t]*\n+', '\n', text)
    return text.strip()


def extract_func(cleaned):
    idx = cleaned.find('{')
    if idx < 0: return cleaned.strip(), ''
    sig = cleaned[:idx].strip()
    rest = cleaned[idx:]
    depth = 0; end = -1
    for i, c in enumerate(rest):
        if c == '{': depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0: end = i; break
    body = rest[1:end].strip() if end >= 0 else rest[1:].strip()
    return sig, body


def parse_sig(sig):
    sig = re.sub(r'\bsub_[0-9A-Fa-f]+\b', '', sig)
    conv = 'cdecl'
    for kw, c in [('__thiscall','thiscall'),('__fastcall','fastcall'),
                   ('__stdcall','stdcall'),('__cdecl','cdecl'),
                   ('__usercall','cdecl')]:
        if kw in sig: conv = c; sig = sig.replace(kw, ''); break
    # Remove @<register> annotations (IDA usercall syntax)
    sig = re.sub(r'@<[^>]+>', '', sig)
    sig = sig.strip()
    p = sig.find('(')
    if p >= 0: ret = sig[:p].strip(); par = sig[p:]
    else: ret = sig.strip(); par = '()'
    # Map return type, handling pointers
    ret_base = ret.rstrip(' *')
    ptr_count = len(ret) - len(ret_base)
    ret_base = IDA_TO_CPP.get(ret_base, ret_base)
    if ret_base in ('long double',): ret_base = 'double'
    # For struct/class names that aren't in our mapping, use void*
    if ret_base not in IDA_TO_CPP and ret_base not in ('void',) and not ret_base.startswith('_'):
        # Unknown type - could be project-specific class
        # Try to keep it if it looks like a valid identifier
        if re.match(r'^[A-Za-z_]\w*$', ret_base) and ptr_count > 0:
            pass  # Keep as-is for pointer types
        elif ptr_count == 0:
            ret_base = 'int'  # Fallback for non-pointer unknown types
    ret = ret_base + '*' * (ptr_count // 2)  # type* not type *
    return conv, ret, par


def count_params(par):
    inner = par.strip('() ')
    if not inner: return 0
    d = n = 0
    for c in inner:
        if c == '(': d += 1
        elif c == ')': d -= 1
        elif c == ',' and d == 0: n += 1
    return n + 1


def analyze_body_for_stub_return(cleaned_body, ret_type):
    """Analyze pseudocode body to determine likely stub return value.
    
    - If body has 'return X' with a constant, use that constant
    - If body only has assignments (no return), use 0 for non-void
    - If body has conditional returns, use 0
    """
    if not cleaned_body:
        return '0' if ret_type != 'void' else None
    
    lines = [l.strip() for l in cleaned_body.split('\n') if l.strip()]
    
    # Check for simple return with constant
    for line in lines:
        m = re.match(r'return\s+(-?\w+)\s*;', line)
        if m:
            val = m.group(1)
            # Check if it's a simple constant
            if re.match(r'^-?(0x[0-9a-fA-F]+|\d+)$', val):
                return val
    
    # Check last line for return
    if lines:
        last = lines[-1]
        if re.match(r'return\s+(-?\w+)\s*;', last):
            return '0'
    
    return '0' if ret_type != 'void' else None


def sanitize_name(prop_name):
    """Make naming proposal a valid C++ identifier.
    - Replace :: with _ (no class declarations available)
    - Prefix digit-starting names
    """
    name = prop_name.replace('::', '_')
    if name[0].isdigit():
        name = 'sub_' + name
    # Replace any remaining invalid chars
    name = re.sub(r'[^a-zA-Z0-9_]', '_', name)
    return name


def generate_one(addr, prop_name, func_info, decompile_data):
    """Generate compilable C++ stub with pseudocode as comment."""
    safe_name = sanitize_name(prop_name)
    cleaned = clean_ida(decompile_data['pseudocode'])
    sig, body = extract_func(cleaned)
    
    if not sig:
        conv = func_info.get('call', {}).get('convention', 'cdecl')
        ret, par = 'void', '()'
        pseudocode_lines = ['// Pseudocode not available']
    else:
        conv, ret, par = parse_sig(sig)
        # Handle multi-line signatures: comment each line
        sig_lines = sig.split('\n')
        pseudocode_lines = [f'// IDA: {sig_lines[0].strip()}']
        for sl in sig_lines[1:]:
            pseudocode_lines.append(f'//       {sl.strip()}')
        if body:
            for line in body.split('\n'):
                line = line.strip()
                if line:
                    pseudocode_lines.append(f'//   {line}')
    
    if ret in ('__int64',): ret = 'int64_t'
    
    n = count_params(par)
    if conv == 'thiscall':
        fps = 'void* _this'
        for i in range(max(0, n - 1)): fps += f', int a{i}'
    elif n > 0:
        fps = ', '.join(f'int a{i}' for i in range(n))
    else:
        fps = ''
    
    # Determine stub return value
    stub_ret = analyze_body_for_stub_return(body, ret)
    
    cc = f' // {conv}' if conv != 'cdecl' else ''
    
    code = f'// IDA: {addr}  proposal: {prop_name}\n'
    for pl in pseudocode_lines:
        code += f'{pl}\n'
    code += f'{ret} {safe_name}({fps}){cc}\n'
    code += '{\n'
    if stub_ret is not None:
        code += f'  return {stub_ret};\n'
    code += '}\n'
    return code


def collect_globals_from_pseudocode(cleaned_body):
    """Find IDA-named globals for extern declarations."""
    pattern = r'\b((?:dword|dbl|word|byte|flt)_[A-Za-z0-9_]+)\b'
    return set(m.group(1) for m in re.finditer(pattern, cleaned_body))


def main():
    print("Task 17: Loading data...")
    
    with open(FUNCTIONS_FILE) as f:
        flist = json.load(f)['functions']
    fmap = {norm_addr(x['address']): x for x in flist}
    
    with open(PROPOSALS_FILE) as f:
        props = {norm_addr(a): n for a, n in json.load(f)['proposals'].items()}
    
    dfiles = [x for x in os.listdir(DECOMPILE_DIR) if x.endswith('.json') and not x.startswith('_')]
    
    targets = []
    for fn in dfiles:
        addr = norm_addr(fn.replace('.json', ''))
        fi = fmap.get(addr, {})
        if not fi.get('name', '').startswith('sub_'): continue
        if fi.get('size', 999) >= MAX_SIZE: continue
        pn = props.get(addr)
        if not pn: continue
        targets.append((addr, fn, fi, pn))
    
    print(f"Found {len(targets)} target functions")
    
    modules = defaultdict(list)
    for addr, fn, fi, pn in targets:
        try:
            with open(os.path.join(DECOMPILE_DIR, fn)) as f:
                dd = json.load(f)
        except Exception as e:
            print(f"  ERROR {fn}: {e}")
            continue
        mod = assign_module(pn)
        modules[mod].append((addr, fi, pn, dd))
    
    print("\nModule distribution:")
    for m in sorted(modules): print(f"  {m}: {len(modules[m])}")
    
    total = 0
    for mod in sorted(modules):
        funcs = modules[mod]
        for bi in range(0, len(funcs), FUNCS_PER_FILE):
            batch = funcs[bi:bi + FUNCS_PER_FILE]
            odir = os.path.join(OUTPUT_DIR, mod)
            os.makedirs(odir, exist_ok=True)
            ofile = os.path.join(odir, 'subs.cpp' if len(funcs) <= FUNCS_PER_FILE 
                                 else f'subs_{bi // FUNCS_PER_FILE + 1}.cpp')
            
            batch_globals = set()
            func_codes = []
            
            for addr, fi, pn, dd in batch:
                try:
                    code = generate_one(addr, pn, fi, dd)
                    func_codes.append(code)
                    # Collect globals from cleaned pseudocode
                    cleaned = clean_ida(dd['pseudocode'])
                    _, body = extract_func(cleaned)
                    batch_globals |= collect_globals_from_pseudocode(body)
                    total += 1
                except Exception as e:
                    print(f"  ERROR {pn}: {e}")
            
            # Build file
            code = '// Auto-generated by tools/task17_generate.py\n'
            code += f'// Module: {mod} | Functions: {len(batch)}\n'
            code += '// Regenerate: python tools/task17_generate.py\n\n'
            code += '#include <cstdint>\n#include <cstddef>\n\n'
            
            if batch_globals:
                code += '// IDA-named globals referenced (extern stubs)\n'
                for g in sorted(batch_globals):
                    if g.startswith('dword_'):
                        code += f'extern int {g};\n'
                    elif g.startswith('dbl_'):
                        code += f'extern double {g};\n'
                    elif g.startswith('flt_'):
                        code += f'extern float {g};\n'
                    elif g.startswith('word_'):
                        code += f'extern unsigned short {g};\n'
                    elif g.startswith('byte_'):
                        code += f'extern unsigned char {g};\n'
                    else:
                        code += f'extern int {g};\n'
                code += '\n'
            
            code += 'namespace gamemd {\n\n'
            code += '\n'.join(func_codes)
            code += '\n} // namespace gamemd\n'
            
            with open(ofile, 'w', encoding='utf-8') as f:
                f.write(code)
            print(f"  {ofile} ({len(batch)} funcs)")
    
    print(f"\nTotal: {total} functions")
    print("Done.")


if __name__ == '__main__':
    main()
