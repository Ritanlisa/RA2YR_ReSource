#!/usr/bin/env python3
"""Scan REVERSE macros, generate DEFINE_HOOK stubs with completion checks.

Features:
  - Completion check via #pragma/#error (reads functions.json)
  - "No Call" summary for all hooked functions on exit
  - Caller lookup via gamemd.exe.map binary search
  - Parameter names from C++ function declaration
  - comparisonResult.log with [FuncName-0xADDR] format
"""
import os, re, json, sys

SCRIPT = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(SCRIPT, ".."))
OUT  = os.path.join(SCRIPT, "gen", "reverse_hooks.cpp")
CHK  = os.path.join(SCRIPT, "gen", "reverse_check.cpp")
JSON = os.path.join(SCRIPT, "functions.json")
MAP  = os.path.join(ROOT, "decompile-results", "gamemd.exe.map")

def load_json():
    if not os.path.exists(JSON): return {}, {}
    with open(JSON) as f:
        data = json.load(f)
    fn_map = {fn['address'].lower(): fn for fn in data['functions']}
    # Build line map lazily per query
    return fn_map, None

def get_json_line(addr, raw=None):
    """Return line number for an address in functions.json."""
    if not os.path.exists(JSON): return '?'
    try:
        if raw is None:
            with open(JSON) as f:
                raw = f.read()
        pos = raw.find(f'"address": "{addr}"')
        if pos >= 0:
            return raw[:pos].count('\n') + 1
    except:
        pass
    return '?'

def parse_map():
    addrs = {}
    re_map = re.compile(r'^\s*0001:([0-9A-Fa-f]+)\s+(\w\S*)')
    if not os.path.exists(MAP): return addrs
    with open(MAP, errors='ignore') as f:
        for line in f:
            m = re_map.match(line)
            if not m: continue
            off = int(m.group(1), 16) + 0x401000
            name = m.group(2)
            if name.startswith(('sub_','null','loc_','unknown','SEH_','__catch$')): continue
            if 'RTTI' in name or '`' in name or '<' in name: continue
            if len(name) < 3: continue
            addrs[off] = name
    return addrs

SIG = re.compile(
    r'(?:inline\s+)?(?:static\s+)?(?:const\s+)?(?:virtual\s+)?'
    r'(?:\w+(?:::+\w+)*[\*\s&]+)+(\w+)\s*\(([^)]*)\)',
    re.IGNORECASE | re.DOTALL)

def find_markers(functions, line_map):
    pat = re.compile(r'REVERSE\(\s*(0x[0-9A-Fa-f]+)\s*,\s*"([^"]*)"\s*,\s*(true|false)\s*\)', re.I)
    markers = []
    warnings = []
    errors = []
    for d in ["src","app","include/gamemd"]:
        for root,dirs,files in os.walk(os.path.join(ROOT,d)):
            for fn in files:
                if not fn.endswith(('.cpp','.hpp','.h')): continue
                fp = os.path.join(root,fn)
                with open(fp, errors='ignore') as f:
                    c = f.read()
                for m in pat.finditer(c):
                    addr = m.group(1).lower()
                    enabled = m.group(3) == 'true'
                    ls = c.rfind('\n',0,m.start())+1
                    line = c[ls:m.end()]
                    if line.lstrip().startswith('//'): continue
                    rest = c[m.end():m.end()+300]
                    s = SIG.search(rest)
                    fname = s.group(1) if s else "?"
                    params = []
                    if s and s.group(2).strip() and s.group(2).strip()!='void':
                        for p in s.group(2).split(','):
                            ps = p.strip().split()
                            if ps:
                                n = ps[-1].lstrip('*& ')
                                if n and n!='const': params.append(n)
                    
                    # Completion check
                    fn_info = functions.get(addr)
                    
                    if fn_info is None:
                        err = f"{fp}:{c[:m.start()].count(chr(10))+1}: REVERSE({addr}) — NOT FOUND in functions.json"
                        errors.append(err)
                        continue
                    
                    completed = fn_info.get('hook',{}).get('completed', False)
                    if not completed:
                        json_line = get_json_line(addr)
                        json_name = fn_info.get('name', '?') if fn_info else '?'
                        msg = f"{fp}:{c[:m.start()].count(chr(10))+1}: {addr} ({json_name}) — NOT completed (functions.json line {json_line})"
                        if enabled:
                            errors.append(msg)
                        else:
                            warnings.append(msg)
                    if not enabled: continue
                    
                    markers.append(dict(addr=addr,desc=m.group(2),fn_name=fname,
                                        file=os.path.relpath(fp,ROOT),params=params,completed=completed))
    return markers, warnings, errors

def san(n):
    return n.replace('::','_').replace('@','_').replace('<','_').replace('>','_')

def reg_ref(r):
    return {'ECX':'V.c','EDX':'V.d','Stack':'V.sp'}.get(r,'V.sp')

def generate(markers, functions, fn_map):
    out = []; w = out.append
    w('// Auto-generated by gen_reverse_hooks.py — DO NOT EDIT')
    w('#include <windows.h>')
    w('#include <cstdio>')
    w('#include "Syringe.h"')
    w('#include "tls_storage.h"')
    w('extern "C" void PostProcStub();')
    w('static FILE* f = nullptr;')
    w(f'static int ctr[{len(markers)}]={{}};')
    w(f'static const char* nm[{len(markers)}]={{}};')
    w(f'static DWORD addr_tbl[{len(markers)}]={{}};')
    w('struct S{DWORD a,c,d,b,si,di,bp,sp,re;};')
    w(f'static S in[{len(markers)}]={{}};')
    # Init
    w('static void NN(){')
    for i,m in enumerate(markers):
        w(f'  nm[{i}]="{m["fn_name"]}"; addr_tbl[{i}]=0x{int(m["addr"],16):08X};')
    w('} static int _=(NN(),0);')
    # Index
    w('static int I(DWORD x){static DWORD A[]={')
    for m in markers: w(f'  0x{int(m["addr"],16):08X},')
    w('  0};for(int i=0;A[i];++i)if(A[i]==x)return i;return -1;}')
    # FormatInput per function
    for i,m in enumerate(markers):
        conv = functions.get(m['addr'],{}).get('call',{}).get('convention','unknown')
        if conv == 'unknown': conv = 'stdcall'
        params = m.get('params',[])
        w(f'static void FI_{san(m["fn_name"])}(){{')
        w(f'  auto&V=in[{i}];')
        if params:
            parts=[]; args=[]
            for j,p in enumerate(params[:4]):
                reg = 'ECX' if j==0 else 'EDX' if j==1 else 'Stack'
                parts.append(f'{p}({reg})=0x%08X')
                args.append(reg_ref(reg))
            w(f'  fprintf(f,"  Input:  {("  ".join(parts))}\\n",{", ".join(args)});')
        else:
            w(f'  fprintf(f,"  Input:  ECX=0x%08X  EDX=0x%08X  ESP=0x%08X\\n",V.c,V.d,V.sp);')
        w('}')
        w('')
    # FI dispatcher
    w('static void FI(int i){switch(i){')
    for i,m in enumerate(markers): w(f'  case {i}:FI_{san(m["fn_name"])}();break;')
    w('  default:fprintf(f,"  Input: ???\\n");break;}}')
    w('')
    # Map table
    w('struct FE{DWORD a;const char*n;};')
    w('static FE F[]={')
    sorted_addrs = sorted(fn_map.keys())
    count = 0
    for a in sorted_addrs:
        n = fn_map[a]
        w(f'  {{0x{a:08X},"{n}"}},')
        count += 1
        if count >= 8000: break
    w('  {0,0}};')
    # Caller lookup
    w(f'static const char* Caller(DWORD v){{')
    w(f'  int lo=1,hi={count};')
    w('  while(lo<hi){int m=(lo+hi)/2;if(v<F[m].a)hi=m;else lo=m+1;}')
    w('  return F[lo-1].n;')
    w('}')
    # Log
    w('static void Log(DWORD a,int i,DWORD re,DWORD orig,DWORD ret){')
    w('  if(!f){f=fopen("comparisonResult.log","a");if(!f)return;}')
    w('  int n=++ctr[i];')
    w('  if(n==1)fprintf(f,"\\n[%s-0x%08X]\\n",nm[i]?nm[i]:"?",a);')
    w('  const char* cn=Caller(ret-5);')
    w('  fprintf(f,"Call %d: %s()<-0x%08X\\n",n,cn?cn:"?",ret-5);')
    w('  FI(i);')
    w('  fprintf(f,"  Return: hook=0x%08X    |    original=0x%08X\\n",re,orig);')
    w('  fflush(f);')
    w('}')
    # No Call summary — called from hook_main.cpp DllMain detach
    w('void WriteNoCallSummary(){')
    w('  if(!f){f=fopen("comparisonResult.log","a");if(!f)return;}')
    w(f'  for(int i=0;i<{len(markers)};++i){{')
    w('    if(ctr[i]==0){')
    w('      fprintf(f,"\\n[%s-0x%08X]\\nNo Call\\n\\n",nm[i]?nm[i]:"?",addr_tbl[i]);')
    w('    }')
    w('  }')
    w('  if(f){fclose(f);f=nullptr;}')
    w('}')
    # ExeTerminate hook — NOT USED (summary written in DllMain detach)
    # ExeTerminate at 0x7CD8EF is hooked by Ares (calls ExitProcess)
    # Our DllMain DLL_PROCESS_DETACH fires before Ares forces exit.
    # Hooks
    for m in markers:
        ah=m['addr'].lstrip('0x').upper();s=san(m['fn_name'])
        fn=functions.get(m['addr'])
        hs=fn.get('hook',{}).get('min_safe_size',5) if fn else 5
        conv=fn.get('call',{}).get('convention','?') if fn else '?'
        w(f'// {m["fn_name"]} @ {m["addr"]} ({conv})')
        w(f'// {m["desc"]}')
        w(f'DEFINE_HOOK({ah}, Rev_{s}, {hs})')
        w('{')
        w(f'  int idx=I(0x{ah});')
        w('  auto&V=in[idx];')
        w('  V.a=R->EAX();V.c=R->ECX();V.d=R->EDX();')
        w('  V.b=R->EBX();V.si=R->ESI();V.di=R->EDI();')
        w('  V.bp=R->EBP();V.sp=R->ESP();')
        w(f'  // TODO: call RE version — {m["fn_name"]}')
        w('  V.re=0;')
        w('  auto*s=shadow::GetSlot();')
        w('  s->re_result_eax=V.re;')
        w(f'  s->hook_addr=0x{ah};')
        w('  s->original_ret_addr=R->Stack<DWORD>(0);')
        w('  R->Stack(0,(DWORD)&PostProcStub);')
        w('  return 0;')
        w('}')
        w('')
    # LogComparison
    w('extern "C" void __cdecl LogComparison(DWORD orig,DWORD addr){')
    w('  int idx=I(addr);if(idx<0)return;')
    w('  auto&V=in[idx];')
    w('  auto*s=shadow::GetSlot();')
    w('  DWORD ret=s?s->original_ret_addr:0;')
    w('  Log(addr,idx,V.re,orig,ret);')
    w('}')
    return '\n'.join(out)

def write_check_file(markers, warnings, errors):
    lines = ['// Auto-generated completion validation for REVERSE markers',
             '// Compiled into hook DLL for build-time diagnostics',
             '#include <windows.h>', '']
    for w in warnings:
        # Strip non-ASCII to avoid C4828 encoding warnings
        clean = w.encode('ascii', errors='replace').decode('ascii').replace('?', '')
        lines.append(f'#pragma message("WARN: {clean}")')
    for e in errors:
        clean = e.encode('ascii', errors='replace').decode('ascii').replace('?', '')
        lines.append(f'#error "ERR: {clean}"')
    if not warnings and not errors:
        lines.append('// All REVERSE markers pass completion check.')
    with open(CHK, 'w', encoding='ascii') as f:
        f.write('\n'.join(lines))

def main():
    functions, line_map = load_json()
    markers, warnings, errors = find_markers(functions, line_map)
    
    # Print diagnostics
    for w in warnings:
        print(f"  WARNING: {w}")
    for e in errors:
        print(f"  ERROR: {e}")
    
    print(f"Found {len(markers)} enabled hooks:")
    for m in markers:
        print(f"  {m['addr']}: {m['fn_name']}({','.join(m.get('params',[]))}) {'[OK]' if m.get('completed') else '[NOT COMPLETED]'}")
    
    if errors:
        print(f"\n{len(errors)} ERROR(s): enabled hooks on uncompleted functions!")
        print("Fix: set REVERSE(..., false) or complete the function first.")
        sys.exit(1)
    
    if not markers:
        print("No enabled hooks. Add REVERSE(..., true) markers.")
    
    # Generate hook code
    fn_map = parse_map()
    code = generate(markers, functions, fn_map)
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT,'w') as f: f.write(code)
    print(f"Generated {OUT} ({os.path.getsize(OUT)/1024:.0f}KB)")
    
    # Generate check header
    write_check_file(markers, warnings, errors)
    if warnings:
        print(f"Generated {CHK} ({len(warnings)} warnings)")
    
    print("\nNext: cmake --build build_hook")

if __name__ == '__main__':
    main()
