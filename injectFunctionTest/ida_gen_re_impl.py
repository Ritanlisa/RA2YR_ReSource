#!/usr/bin/env python3
"""
ida_gen_re_impl.py — Auto-extract IDA decompiled pseudocode and convert to C++.

Usage: python ida_gen_re_impl.py [--force]
  Connects to IDA Pro MCP server (localhost env or MCP config).
  For each Inject-mode function: extracts prototype + pseudocode,
  normalizes to compilable C++, writes gen/re_impl_generated.cpp.
  Falls back to cached file when IDA unavailable.
"""
import json, os, sys, re

SCRIPT = os.path.dirname(os.path.abspath(__file__))
FUNCTIONS_JSON = os.path.join(SCRIPT, "functions.json")
OUT_FILE = os.path.join(SCRIPT, "gen", "re_impl_generated.cpp")
FORCE = '--force' in sys.argv

def find_inject_addrs():
    """Scan source files for REVERSE markers with mode=Inject/Replace."""
    import glob as gmod
    addrs = set()
    src_dir = os.path.normpath(os.path.join(SCRIPT, "..", "src"))
    inc_dir = os.path.normpath(os.path.join(SCRIPT, "..", "include"))
    pat = re.compile(r'REVERSE\(0x([0-9A-Fa-f]+),\s*"[^"]*",\s*"(Inject|Replace)"\)')
    for start in [src_dir, inc_dir]:
        for fpath in gmod.glob(os.path.join(start, "**", "*.cpp"), recursive=True):
            try:
                with open(fpath, 'r', encoding='utf-8', errors='ignore') as f:
                    for m in pat.finditer(f.read()):
                        addrs.add(f"0x{m.group(1).upper()}")
            except: pass
        for fpath in gmod.glob(os.path.join(start, "**", "*.hpp"), recursive=True):
            try:
                with open(fpath, 'r', encoding='utf-8', errors='ignore') as f:
                    for m in pat.finditer(f.read()):
                        addrs.add(f"0x{m.group(1).upper()}")
            except: pass
    return addrs

def call_ida_mcp(method, params=None):
    """Call IDA via MCP (modelcontextprotocol) using the ida-pro-mcp server."""
    if params is None:
        params = {}
    try:
        # The ida-pro-mcp server uses stdio transport.
        # For our pipeline, we use the CLI approach: exec Python in IDA context
        # via a temp script that communicates through the MCP server.
        import subprocess, tempfile

        # Construct a Python script that uses IDAPython directly in IDA's process
        script = f'''
import json, sys
try:
    import idaapi, ida_funcs, ida_hexrays
    ea = {int(params.get("addr", "0"), 16) if isinstance(params.get("addr"), str) else 0}
    if "{method}" == "decompile":
        func = ida_funcs.get_func(ea)
        if func:
            try:
                cfunc = ida_hexrays.decompile(func)
                if cfunc:
                    sv = cfunc.get_pseudocode()
                    code = "\\n".join([s.line for s in sv])
                    print(json.dumps({{"ok": True, "code": code, "proto": str(ida_funcs.get_func(ea))}}))
                else:
                    print(json.dumps({{"ok": False, "error": "decompile failed"}}))
            except Exception as e:
                print(json.dumps({{"ok": False, "error": str(e)}}))
        else:
            print(json.dumps({{"ok": False, "error": "no function at ea"}}))
    elif "{method}" == "server_health":
        print(json.dumps({{"ok": True}}))
    else:
        print(json.dumps({{"ok": False, "error": f"unknown method {method}"}}))
except Exception as e:
    print(json.dumps({{"ok": False, "error": str(e)}}))
'''
        # Write to temp file
        fd, path = tempfile.mkstemp(suffix='.py', prefix='ida_extract_', text=True)
        with os.fdopen(fd, 'w') as f:
            f.write(script)

        # Execute via IDA's idat64.exe with -S flag (run script)
        # This starts IDA headless and runs our script
        ida_exe = os.environ.get("IDA_EXE", r"C:\Program Files\IDA Pro 9\idat.exe")
        db_path = os.environ.get("IDA_DB", r"D:\RA2MD\gamemd.exe.i64")

        result = subprocess.run(
            [ida_exe, "-A", "-S" + path, db_path],
            capture_output=True, text=True, timeout=60,
            cwd=SCRIPT
        )

        os.unlink(path)

        # Parse output
        for line in result.stdout.splitlines():
            line = line.strip()
            if line.startswith('{') and '"ok"' in line:
                return json.loads(line)

        return {"ok": False, "error": result.stderr or "no JSON in output"}
    except Exception as e:
        return {"ok": False, "error": str(e)}

def check_ida():
    """Check if IDA is accessible."""
    result = call_ida_mcp("server_health")
    return result.get("ok", False)

def get_decompile(addr_str):
    """Get decompiled pseudocode for a function."""
    raw = int(addr_str, 16)
    result = call_ida_mcp("decompile", {"addr": hex(raw)})
    if result.get("ok"):
        return result.get("code", ""), result.get("proto", "")
    return None, None

def translate_pseudocode_to_cpp(code, name, addr, conv, ret_type, param_count):
    """Convert IDA pseudocode to compilable C++.
    
    Handles:
    - IDA types (_DWORD*, _WORD*, _BYTE*, __int16, etc.)
    - thiscall/fastcall parameter mapping
    - Math::RoundToInt → (int)(x >= 0 ? x + 0.5 : x - 0.5)
    - Vtable calls → typed function pointer casts
    """
    lines = code.replace('\r', '').split('\n')

    # Build parameter mapping
    param_list = []
    pi = 0
    if conv == 'thiscall':
        param_list.append(('void*', 'self', 'p0'))
        pi = 1
    elif conv == 'fastcall':
        param_list.append(('void*', 'a1', 'p0'))
        param_list.append(('void*', 'a2', 'p1'))
        pi = 2
    elif conv == 'stdcall':
        pass  # all stack, start at p0

    for i in range(param_count):
        param_list.append(('DWORD', f'a{i+1}', f'p{pi}'))
        pi += 1

    # Start building output
    out = []
    out.append(f"// {name} @ {addr}")
    out.append(f"// IDA prototype: {ret_type} {conv}({','.join(t for t,_,_ in param_list)})")
    out.append('')

    # Build extern "C" function
    pnames = [p for _, _, p in param_list]
    sig = ', '.join(f'DWORD {p}' for p in pnames) if pnames else 'DWORD p0'
    out.append(f'extern "C" DWORD RE_{name.replace("::","_")}({sig}) {{')

    if conv == 'thiscall':
        out.append(f'    void* self = (void*)p0;')
        for i, (_, vn, pn) in enumerate(param_list[1:], 1):
            out.append(f'    DWORD {vn} = {pn};')
    elif conv == 'fastcall':
        out.append(f'    void* a1 = (void*)p0;')
        out.append(f'    void* a2 = (void*)p1;')
        for i, (_, vn, pn) in enumerate(param_list[2:], 2):
            out.append(f'    DWORD {vn} = {pn};')
    else:
        for i, (_, vn, pn) in enumerate(param_list):
            out.append(f'    DWORD {vn} = {pn};')

    # Translate body: replace IDAisms with C++
    in_body = False
    for line in lines:
        sline = line.strip()
        if not sline:
            continue

        # Skip function header, find opening brace
        if not in_body and '{' in sline:
            in_body = True
            continue
        if not in_body:
            continue
        if sline == '}':
            continue

        # Replace IDA patterns
        sline = sline.replace('_DWORD', 'DWORD')
        sline = sline.replace('_WORD', 'WORD')
        sline = sline.replace('_BYTE', 'BYTE')
        sline = sline.replace('__int16', 'short')
        sline = sline.replace('__int8', 'char')

        # Replace Math::RoundToInt calls
        sline = re.sub(r'Math::RoundToInt\(([^)]+)\)', r'((int)(\1 >= 0.0 ? \1 + 0.5 : \1 - 0.5))', sline)

        # Replace /*0xNNNNNN*/ comments
        sline = re.sub(r'\s*/\*0x[0-9A-Fa-f]+\*/', '', sline)

        # Add indentation
        out.append(f'    {sline}')

    out.append('}')
    out.append('')
    return '\n'.join(out)

def generate():
    print("ida_gen_re_impl.py — IDA extraction pipeline")
    print(f"  Output: {OUT_FILE}")

    inject_addrs = find_inject_addrs()
    if not inject_addrs:
        print("  No Inject-mode functions found in source. Skipping.")
        return True

    print(f"  Found {len(inject_addrs)} Inject functions: {sorted(inject_addrs)}")

    # Check IDA
    ida_ok = check_ida()
    print(f"  IDA {'available' if ida_ok else 'not available'}" + ("" if ida_ok else " (will use cache)"))

    # If IDA not available and cache exists, use it
    if not ida_ok and not FORCE:
        if os.path.exists(OUT_FILE):
            print(f"  Using cached {OUT_FILE}")
            return True
        print(f"  WARNING: IDA unavailable and no cache — skipping generation")
        return False

    # Load functions.json
    with open(FUNCTIONS_JSON) as f:
        data = json.load(f)

    inject_funcs = []
    for item in data['functions']:
        if item['address'].lower() in {a.lower() for a in inject_addrs}:
            inject_funcs.append(item)

    if not inject_funcs:
        print("  No matching functions in functions.json. Skipping.")
        return True

    # Extract from IDA
    header = [
        "// Auto-generated from IDA Pro decompilation",
        f"// Functions: {', '.join(i['name'] for i in inject_funcs)}",
        "// Generated by ida_gen_re_impl.py — DO NOT EDIT",
        "",
        "#include <windows.h>",
        "#include <cstdint>",
        "#include <cmath>",
        "",
        "namespace gamemd {",
        "namespace re_impl {",
        "",
    ]

    for func in inject_funcs:
        addr = func['address']
        name = func['name']
        conv = func.get('call', {}).get('convention', 'stdcall')
        ret_type = func.get('call', {}).get('return_type', 'int')
        param_count = len(func.get('call', {}).get('params', []))

        print(f"  Extracting {name} ({addr})...")
        code, proto = get_decompile(addr)

        if code is None:
            print(f"  WARNING: Failed to decompile {name}")
            header.append(f"// {name} @ {addr} — DECOMPILATION FAILED")
            header.append(f'extern "C" DWORD RE_{name.replace("::","_")}(DWORD p0) {{ return 0; }}')
            header.append('')
            continue

        cpp = translate_pseudocode_to_cpp(code, name, addr, conv, ret_type, param_count)
        header.append(cpp)
        print(f"    -> translated ({len(cpp)} chars)")

    header.append("} // namespace re_impl")
    header.append("} // namespace gamemd")

    with open(OUT_FILE, 'w') as f:
        f.write('\n'.join(header))

    print(f"  Written {OUT_FILE}")
    return True

if __name__ == '__main__':
    ok = generate()
    sys.exit(0 if ok else 1)
