"""
IDA Python script v2: decompile all menu functions and save to JSON.
"""
import json
import idaapi
import ida_hexrays
import ida_funcs

# Load function list
funcs_json_path = r"D:\RA2YR_ReSource\injectFunctionTest\functions.json"
with open(funcs_json_path, 'r', encoding='utf-8') as f:
    all_funcs = json.load(f)

# Filter: menu category, not completed
menu_addrs = []
for func in all_funcs['functions']:
    if func.get('category') == 'menu' and not func.get('completed', False):
        addr = int(func['address'], 16)
        menu_addrs.append((addr, func['name'], func.get('size', 0)))

print(f"Found {len(menu_addrs)} menu functions to decompile")

# Initialize decompiler
ida_hexrays.init_hexrays_plugin()

results = {}
decompiled = 0
errors = 0

for addr, name, size in menu_addrs:
    func = ida_funcs.get_func(addr)
    if not func:
        results[name] = {"error": f"No function at 0x{addr:X}"}
        errors += 1
        continue
    
    try:
        cfunc = ida_hexrays.decompile(func)
        if cfunc:
            pseudocode = str(cfunc)
            results[name] = {
                "addr_hex": f"0x{addr:X}",
                "name": name,
                "size": size,
                "pseudocode": pseudocode
            }
            decompiled += 1
        else:
            results[name] = {"error": f"Decompile returned None at 0x{addr:X}"}
            errors += 1
    except Exception as e:
        results[name] = {"error": f"Decompile exception at 0x{addr:X}: {str(e)}"}
        errors += 1
    
    if decompiled % 50 == 0:
        print(f"  Decompiled: {decompiled}, Errors: {errors}")

# Write output
output_path = r"D:\RA2YR_ReSource\.omo\evidence\menu_decompilations.json"
with open(output_path, 'w', encoding='utf-8') as f:
    json.dump(results, f, indent=2, ensure_ascii=False)

print(f"\nDone! Decompiled: {decompiled}, Errors: {errors}")
print(f"Output: {output_path}")
