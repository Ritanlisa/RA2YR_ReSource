"""Test the generator on first 20 functions"""
import json, os, sys

# Add tools to path
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

# Import the generator
import importlib.util
spec = importlib.util.spec_from_file_location("task17_generate", 
    os.path.join(os.path.dirname(__file__), "task17_generate.py"))
gen = importlib.util.module_from_spec(spec)
spec.loader.exec_module(gen)

DECOMPILE_DIR = 'tools/sub_decompiles'
FUNCTIONS_FILE = 'injectFunctionTest/functions.json'
PROPOSALS_FILE = 'tools/sub_naming_proposals.json'

with open(FUNCTIONS_FILE) as f:
    funcs_data = json.load(f)
funcs_by_addr = {f['address']: f for f in funcs_data['functions']}

with open(PROPOSALS_FILE) as f:
    proposals = json.load(f)['proposals']

decompile_files = [f for f in os.listdir(DECOMPILE_DIR) 
                   if f.endswith('.json') and not f.startswith('_')]

count = 0
for fname in sorted(decompile_files):
    addr_hex = fname.replace('.json', '')
    addr = '0x' + addr_hex.upper()
    func_info = funcs_by_addr.get(addr, {})
    name = func_info.get('name', '')
    if not name.startswith('sub_'):
        continue
    size = func_info.get('size', 999)
    if size >= 50:
        continue
    prop_name = proposals.get(addr)
    if not prop_name:
        continue
    
    # Generate
    fpath = os.path.join(DECOMPILE_DIR, fname)
    with open(fpath) as f:
        ddata = json.load(f)
    
    try:
        code = gen.generate_function(addr, prop_name, func_info, ddata)
        print(f'// === {addr} -> {prop_name} ({size}B) ===')
        print(code)
        count += 1
    except Exception as e:
        print(f'// ERROR {addr}: {e}')
    
    if count >= 20:
        break
