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
CAL  = os.path.join(SCRIPT, "callee_map.json")

# Import RE impl generator
sys.path.insert(0, SCRIPT)
from gen_re_impl import generate_re_impl

def load_json():
    if not os.path.exists(JSON): return {}, None
    with open(JSON) as f:
        raw = f.read()
    data = json.loads(raw)
    fn_map = {fn['address'].lower(): fn for fn in data['functions']}
    return fn_map, raw

def get_json_line(addr, raw):
    if not raw: return '?'
    try:
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

def is_lib(name):
    """Filter CRT/library/internal helpers from dependency warnings."""
    if not name: return True
    if name.startswith(('??', '__', '?_', '?$')): return True
    if name.startswith('_') and len(name) > 1 and name[1].isalpha(): return True
    if name.startswith(('j_', 'nullsub', 'unknown_libname')): return True
    if name in ('Debug::Log', 'Debug::Log_0'): return True
    return False

def find_markers(functions, raw_json, callee_map, callee_names, all_marked):
    pat = re.compile(r'REVERSE\(\s*(0x[0-9A-Fa-f]+)\s*,\s*"([^"]*)"\s*,\s*"([^"]*)"\s*\)', re.I)
    markers = []
    none_markers = []  # mode=None markers for "None Calls" section
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
                    mode = m.group(3)  # "None" | "Replace" | "Inject" | "Capture"
                    if mode not in ("None", "Replace", "Inject", "Capture"):
                        mode = "None"
                    ls = c.rfind('\n',0,m.start())+1
                    line = c[ls:m.end()]
                    if line.lstrip().startswith('//'): continue
                    rest = c[m.end():m.end()+300]
                    s = SIG.search(rest)
                    fname = s.group(1) if s else "?"
                    params = []
                    ret_type = ""
                    full_sig = fname
                    if s:
                        ret_type = s.group(0)[:s.group(0).rfind(s.group(1))].strip()
                        full_sig = s.group(0).strip().replace('\n',' ').replace('\r',' ').replace('  ',' ')
                        if s.group(2).strip() and s.group(2).strip()!='void':
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
                    
                    # Prefer JSON function name (IDA naming)
                    json_name = fn_info.get('name', fname)
                    if json_name and json_name != '?':
                        fname = json_name
                    
                    completed = fn_info.get('hook',{}).get('completed', False)
                    
                    if mode == "None":
                        if not completed:
                            json_line = get_json_line(addr, raw_json)
                            warnings.append(f"{fp}:{c[:m.start()].count(chr(10))+1}: {addr} ({fname}) mode=None, not completed (functions.json line {json_line})")
                        if addr in callee_map:
                            unmarked = {}
                            for callee in callee_map[addr]:
                                if callee == addr: continue
                                if callee in all_marked: continue
                                cfn = functions.get(callee)
                                if cfn and cfn.get('hook', {}).get('completed', False): continue
                                cname = callee_names.get(callee, callee)
                                if is_lib(cname): continue
                                if cname not in unmarked:
                                    unmarked[cname] = True
                            if unmarked:
                                uniq = sorted(unmarked.keys())
                                deps_str = ', '.join(uniq[:3])
                                if len(uniq) > 3: deps_str += f' (+{len(uniq)-3})'
                                line_no = c[:m.start()].count(chr(10))+1
                                warnings.append(f"{fp}:{line_no}: {addr} ({fname}) mode=None, {len(uniq)} unmarked-uncompleted: {deps_str}")
                        # Collect for "None Calls" section, but don't generate hooks
                        none_markers.append(dict(addr=addr,desc=m.group(2),fn_name=fname,
                                                 file=os.path.relpath(fp,ROOT),params=params,
                                                 completed=completed,mode=mode,
                                                 ret_type=ret_type, full_sig=full_sig))
                        continue
                    
                    if mode in ("Replace", "Inject"):
                        if not completed:
                            json_line = get_json_line(addr, raw_json)
                            errors.append(f"{fp}:{c[:m.start()].count(chr(10))+1}: {addr} ({fname}) mode={mode} but NOT completed (functions.json line {json_line})")
                        
                        # Dependency check for Replace mode
                        if mode == "Replace" and addr in callee_map:
                            bad_callees = {}
                            for callee in callee_map[addr]:
                                if callee == addr: continue
                                cfn = functions.get(callee)
                                if cfn and cfn.get('hook', {}).get('completed', False): continue
                                cname = callee_names.get(callee, callee)
                                if is_lib(cname): continue
                                has_marker = callee in all_marked
                                if cname not in bad_callees:
                                    bad_callees[cname] = has_marker
                            if bad_callees:
                                uniq = sorted(bad_callees.keys())
                                deps_str = ', '.join(uniq[:5])
                                if len(uniq) > 5: deps_str += f' (+{len(uniq)-5})'
                                line_no = c[:m.start()].count(chr(10))+1
                                errors.append(f"{fp}:{line_no}: {addr} ({fname}) mode=Replace, {len(uniq)} uncompleted callees: {deps_str}")
                    
                    # Capture mode: no completion check, no dependency check
                    
                    markers.append(dict(addr=addr,desc=m.group(2),fn_name=fname,
                                        file=os.path.relpath(fp,ROOT),params=params,
                                        completed=completed,mode=mode,
                                        ret_type=ret_type, full_sig=full_sig))
    return markers, warnings, errors, none_markers

def san(n):
    return n.replace('::','_').replace('@','_').replace('<','_').replace('>','_')

def conv_reg(conv, j):
    """Return (ref, name) for parameter j under calling convention conv."""
    if conv == 'thiscall':
        return ('V.stk%d'%j, 'Stack') if j<4 else ('V.stk3', 'Stack')
    elif conv == 'fastcall':
        if j==0: return ('V.c', 'ECX')
        elif j==1: return ('V.d', 'EDX')
        else: return ('V.stk%d'%(j-2), 'Stack') if (j-2)<4 else ('V.stk3', 'Stack')
    else:  # stdcall, cdecl — parameters on stack
        return ('V.stk%d'%j, 'Stack') if j<4 else ('V.stk3', 'Stack')

def generate(markers, functions, fn_map, none_markers=None):
    if none_markers is None: none_markers = []
    total_mk = len(markers) + len(none_markers)  # total for None Calls tracking
    out = []; w = out.append
    w('// Auto-generated by gen_reverse_hooks.py - DO NOT EDIT')
    w('#include <windows.h>')
    w('#include <cstdio>')
    w('#include "Syringe.h"')
    w('#include "tls_storage.h"')
    w('#include "shadow_txn.h"')
    w('extern "C" void PostProcStub();')
    # Forward-declare RE_* functions for Inject/Replace mode only
    for m in markers:
        if m.get('mode') not in ('Inject', 'Replace'):
            continue
        s=san(m['fn_name'])
        w(f'extern "C" DWORD RE_{s}(DWORD ecx, DWORD edx, DWORD a, DWORD b);')
    w('')
    w('static FILE* f = nullptr;')
    nmk = max(len(markers), 1)
    tnk = total_mk  # total including None markers
    w(f'static int ctr[{nmk}]={{}};')
    w(f'static const char* nm[{tnk}]={{}};')
    w(f'static DWORD addr_tbl[{tnk}]={{}};')
    w(f'static const char* sig[{tnk}]={{}};')
    w(f'static const char* rt[{tnk}]={{}};')
    w(f'static bool is_cap[{nmk}]={{}};')
    w(f'static bool has_diff[{nmk}]={{}};')
    w('struct S{DWORD a,c,d,b,si,di,bp,sp,re,stk0,stk1,stk2,stk3;};')
    w(f'static S in[{nmk}]={{}};')
    # Section state
    w('static bool sections_written=false;')
    # Init
    w('static void NN(){')
    for i,m in enumerate(markers):
        cap = 'true' if m.get('mode') == 'Capture' else 'false'
        sig = m.get('full_sig', m['fn_name']).replace('\\','\\\\').replace('"','\\"').replace('\n',' ').replace('\r',' ')
        rt = m.get('ret_type', '').replace('\n',' ').replace('\r',' ')
        w(f'  nm[{i}]="{m["fn_name"]}"; addr_tbl[{i}]=0x{int(m["addr"],16):08X}; is_cap[{i}]={cap};')
        w(f'  sig[{i}]="{sig}"; rt[{i}]="{rt}";')
    for i,m in enumerate(none_markers):
        si = len(markers) + i
        sig = m.get('full_sig', m['fn_name']).replace('\\','\\\\').replace('"','\\"').replace('\n',' ').replace('\r',' ')
        w(f'  nm[{si}]="{m["fn_name"]}"; addr_tbl[{si}]=0x{int(m["addr"],16):08X};')
        w(f'  sig[{si}]="{sig}";')
    w('}')
    w('struct InitHookNames { InitHookNames() { NN(); } };')
    w('static InitHookNames _init;')
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
        parts=[]; args=[]
        if conv == 'thiscall' and params:
            parts.append('this=0x%08X'); args.append('V.c')
        if params:
            for j,p in enumerate(params[:4]):
                ref, reg = conv_reg(conv, j)
                parts.append(f'{p}({reg})=0x%08X')
                args.append(ref)
        if not parts:
            parts=['ECX=0x%08X','EDX=0x%08X','stk0=0x%08X']
            args=['V.c','V.d','V.stk0']
        w(f'  fprintf(f,"  Input:  {("  ".join(parts))}\\n",{", ".join(args)});')
        w('}')
        w('')
    # FI dispatcher
    w('static void FI(int i){switch(i){')
    for i,m in enumerate(markers): w(f'  case {i}:FI_{san(m["fn_name"])}();break;')
    w('  default:fprintf(f,"  Input: ???\\n");break;}}')
    w('')
    # CallRE dispatcher — calls RE_* function with captured inputs (for Inject/Replace)
    w('static DWORD CallRE(int i){')
    w('  auto&V=in[i];')
    w('  switch(i){')
    has_inj = False
    for i,m in enumerate(markers):
        if m.get('mode') not in ('Inject', 'Replace'):
            continue
        has_inj = True
        s=san(m['fn_name'])
        w(f'    case {i}: return RE_{s}(V.c, V.d, V.stk0, V.stk1);')
    w('    default: return 0;')
    w('  }')
    w('}')
    if not has_inj:
        w('// No Inject/Replace markers active — CallRE is a no-op')
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
    w(f'  if({count}==0) return 0;')
    w(f'  int lo=1,hi={count};')
    w('  while(lo<hi){int m=(lo+hi)/2;if(v<F[m].a)hi=m;else lo=m+1;}')
    w(f'  if(lo<=0||lo>{count}) return 0;')
    w('  return F[lo-1].n;')
    w('}')
    # Dynamic section management — file always in §2.5 format
    w('static void ensure_sections(){')
    w('  if(sections_written) return;')
    w('  sections_written=true;')
    w('  if(!f){f=fopen("comparisonResult.log","w");if(!f)return;}')
    w('  fprintf(f,"============ Different Calls ============\\n");')
    w('  fprintf(f,"================ Captures ================\\n");')
    w('  fprintf(f,"============= Same Compares ==============\\n");')
    w('  fprintf(f,"============== None Calls ================\\n");')
    # Write None-mode markers immediately so they appear at startup
    for i,m in enumerate(none_markers):
        si = len(markers) + i
        sig = m.get('full_sig', m['fn_name']).replace('\\','\\\\').replace('"','\\"').replace('\n',' ').replace('\r',' ')
        w(f'  fprintf(f,"[{sig}-0x{int(m["addr"],16):08X}]\\n");')
    w('  fflush(f);')
    w('}')
    w('')
    w('static void rewrite_sections(){')
    w('  if(!f) return;')
    w('  long end=ftell(f);')
    w('  if(end<1||end>5*1024*1024) return;')
    w('  fseek(f,0,SEEK_SET);')
    w('  char* buf=(char*)malloc(end+1);')
    w('  if(!buf) return;')
    w('  fread(buf,1,end,f); buf[end]=0;')
    w('  fclose(f);')
    w('')
    w('  f=fopen("comparisonResult.log","w");')
    w('  if(!f){free(buf);return;}')
    w('')
    w('  // Section 1: Different Calls')
    w('  fprintf(f,"============ Different Calls ============\\n");')
    w('  const char* p=buf;')
    w('  while(*p){')
    w('    if(*p==\'[\'&&p[1]!=\'D\'&&p[1]!=\'C\'&&p[1]!=\'S\'){')
    w('      const char* b=p; const char* e=p;')
    w('      int has_diff=0;')
    w('      while(*e&&(*e!=\'[\'||e==p)){')
    w('        if(strncmp(e,"!= original=",12)==0) has_diff=1;')
    w('        e++;')
    w('      }')
    w('      if(has_diff){while(p<e){fputc(*p++,f);}} else p=e;')
    w('    }else p++;')
    w('  }')
    w('')
    w('  // Section 2: Captures (entries with Return: but no hook=)')
    w('  fprintf(f,"\\n================ Captures ================\\n");')
    w('  p=buf;')
    w('  while(*p){')
    w('    if(*p==\'[\'&&p[1]!=\'D\'&&p[1]!=\'C\'&&p[1]!=\'S\'){')
    w('      const char* b=p; const char* e=p;')
    w('      int has_hook=0, has_orig=0, has_ret=0;')
    w('      while(*e&&(*e!=\'[\'||e==p)){')
    w('        if(strncmp(e,"hook=",5)==0) has_hook=1;')
    w('        if(strncmp(e,"original=",9)==0) has_orig=1;')
    w('        if(strncmp(e,"Return:",7)==0) has_ret=1;')
    w('        e++;')
    w('      }')
    w('      if(!has_hook&&!has_orig&&has_ret){while(p<e){fputc(*p++,f);}} else p=e;')
    w('    }else p++;')
    w('  }')
    w('')
    w('  // Section 3: Same Compares')
    w('  fprintf(f,"\\n============= Same Compares ==============\\n");')
    w('  p=buf;')
    w('  while(*p){')
    w('    if(*p==\'[\'&&p[1]!=\'D\'&&p[1]!=\'C\'&&p[1]!=\'S\'){')
    w('      const char* b=p; const char* e=p;')
    w('      int has_diff=0, has_hook=0;')
    w('      while(*e&&(*e!=\'[\'||e==p)){')
    w('        if(strncmp(e,"!= original=",12)==0) has_diff=1;')
    w('        if(strncmp(e,"hook=original=",14)==0) has_hook=1;')
    w('        e++;')
    w('      }')
    w('      if(has_hook&&!has_diff){while(p<e){fputc(*p++,f);}} else p=e;')
    w('    }else p++;')
    w('  }')
    w('')
    w('  // Section 4: None Calls (carried over from previous None Calls section in buf)')
    w('  fprintf(f,"\\n============== None Calls ================\\n");')
    w('  p=buf;')
    w('  int in_none=0;')
    w('  while(*p){')
    w('    if(strncmp(p,"============== None Calls",24)==0){in_none=1; p+=24; continue;}')
    w('    if(in_none&&strncmp(p,"============",12)==0) in_none=0;')
    w('    if(in_none&&*p==\'[\'&&p[1]!=\'D\'&&p[1]!=\'C\'&&p[1]!=\'S\'){')
    w('      const char* b=p; const char* e=p;')
    w('      while(*e&&*e!=\'[\') e++;')
    w('      while(p<e) fputc(*p++,f);')
    w('    }else p++;')
    w('  }')
    w('')
    w('  free(buf);')
    w('  fflush(f);')
    w('}')
    w('')
    w('static void write_entry(char tag, int i, DWORD addr, DWORD re, DWORD orig, DWORD ret){')
    w('  if(!f){f=fopen("comparisonResult.log","w");if(!f)return;}')
    w('  ensure_sections();')
    w('  int n=++ctr[i];')
    w('  if(n>50) return;')
    w('  const char* cn=Caller(ret-5);')
    w('  if(n==1){')
    w('    const char* s=sig[i];')
    w('    if(s&&*s)fprintf(f,"[%s-0x%08X]\\n",s,addr);')
    w('    else fprintf(f,"[%s-0x%08X]\\n",nm[i]?nm[i]:"?",addr);')
    w('  }')
    w('  fprintf(f,"Call %d: %s()<-0x%08X\\n",n,cn?cn:"?",ret-5);')
    w('  FI(i);')
    w('  if(tag==\'C\'){')
    w('    fprintf(f,"  Return: 0x%08X\\n",orig);')
    w('  }else if(re==orig){')
    w('    fprintf(f,"  Return: hook=original=0x%08X\\n",orig);')
    w('  }else{')
    w('    has_diff[i]=true;')
    w('    fprintf(f,"  Return: hook=0x%08X != original=0x%08X\\n",re,orig);')
    w('  }')
    w('  // Always rewrite to maintain §2.5 format dynamically')
    w('  rewrite_sections();')
    w('}')
    w('void WriteNoCallSummary(){')
    w('  if(!f){f=fopen("comparisonResult.log","w");if(!f)return;}')
    w('  ensure_sections();')
    w('  rewrite_sections();')
    w('  // None Calls: list all None-mode markers (never hooked, always 0 calls)')
    if none_markers:
        w('  fprintf(f,"\\n============== None Calls ================\\n");')
    for i,m in enumerate(none_markers):
        si = len(markers) + i
        sig = m.get('full_sig', m['fn_name']).replace('\\','\\\\').replace('"','\\"').replace('\n',' ').replace('\r',' ')
        w(f'  fprintf(f,"[{sig}-0x{int(m["addr"],16):08X}]\\n");')
    w(f'  for(int i=0;i<{nmk};++i){{')
    w('    if(ctr[i]==0){')
    w('      const char* s=sig[i];')
    w('      if(s&&*s)fprintf(f,"[%s-0x%08X]\\nNo Call\\n",s,addr_tbl[i]);')
    w('      else fprintf(f,"[%s-0x%08X]\\nNo Call\\n",nm[i]?nm[i]:"?",addr_tbl[i]);')
    w('    }')
    w('  }')
    w('  fclose(f); f=nullptr;')
    w('}')
    # ExeTerminate hook — NOT USED (summary written in DllMain detach)
    # ExeTerminate at 0x7CD8EF is hooked by Ares (calls ExitProcess)
    # Our DllMain DLL_PROCESS_DETACH fires before Ares forces exit.
    # Hooks
    for m in markers:
        ah=m['addr'].lstrip('0x').upper();s=san(m['fn_name'])
        fn=functions.get(m['addr'])
        hs=fn.get('hook',{}).get('min_safe_size',8) if fn else 8
        if hs <= 0:
            print(f'  SKIP: {m["addr"]} ({m["fn_name"]}) — min_safe_size={hs}, not hookable')
            continue
        conv=fn.get('call',{}).get('convention','?') if fn else '?'
        mode=m.get('mode','None')
        w(f'// {m["fn_name"]} @ {m["addr"]} ({conv}) mode={mode}')
        w(f'// {m["desc"]}')
        w(f'DEFINE_HOOK({ah}, Rev_{s}, {hs})')
        w('{')
        w(f'  int idx=I(0x{ah});')
        w('  auto&V=in[idx];')
        w('  V.a=R->EAX();V.c=R->ECX();V.d=R->EDX();')
        w('  V.b=R->EBX();V.si=R->ESI();V.di=R->EDI();')
        w('  V.bp=R->EBP();V.sp=R->ESP();')
        w('  V.stk0=R->Stack<DWORD>(4);V.stk1=R->Stack<DWORD>(8);')
        w('  V.stk2=R->Stack<DWORD>(12);V.stk3=R->Stack<DWORD>(16);')
        
        if mode == "Capture":
            w('  V.re=0;')
            w(f'  write_entry(\'C\', idx, 0x{ah}, V.re, V.re, R->Stack<DWORD>(0));')
        elif mode in ("Replace", "Inject"):
            w('  auto* txn = new shadow::ShadowTransaction();')
            w('  txn->Begin();')
            w('  auto*s=shadow::GetSlot();')
            w(f'  s->hook_addr=0x{ah};')
            w('  s->original_ret_addr=R->Stack<DWORD>(0);')
            w('  R->Stack(0,(DWORD)&PostProcStub);')
        
        w('  return 0;')
        w('}')
        w('')
    # LogComparison — called from PostProcStub after original function returns
    # Performs: rollback txn → run RE → compare → log → store RE result in TLS
    w('extern "C" void __cdecl LogComparison(DWORD orig,DWORD addr){')
    w('  int idx=I(addr);if(idx<0)return;')
    w('  auto&V=in[idx];')
    w('')
    w('  // Rollback shadow transaction (restore .data pages)')
    w('  shadow::ShadowTransaction::EndCurrent();')
    w('')
    w('  // Run RE version on clean state')
    w('  DWORD re = CallRE(idx);')
    w('  V.re = re;')
    w('')
    w('  // Store RE result in TLS for PostProcStub to return to caller')
    w('  auto*s=shadow::GetSlot();')
    w('  if(s) s->re_result_eax = re;')
    w('')
    w('  // Compare and log')
    w('  DWORD ret=s?s->original_ret_addr:0;')
    w('  write_entry(\'I\', idx, addr, re, orig, ret);')
    w('}')
    return '\n'.join(out)

def write_check_file(markers, warnings, errors):
    lines = ['// Auto-generated completion validation for REVERSE markers',
             '// Compiled into hook DLL for build-time diagnostics',
             '#include <windows.h>', '']
    for w in warnings:
        # Strip non-ASCII and escape backslashes for C++ string literals
        import re
        clean = re.sub(r'[^\x20-\x7E]', '', w)
        clean = clean.replace('\\', '/')
        lines.append(f'#pragma message("WARN: {clean}")')
    for e in errors:
        clean = re.sub(r'[^\x20-\x7E]', '', e)
        clean = clean.replace('\\', '/')
        lines.append(f'#error "ERR: {clean}"')
    if not warnings and not errors:
        lines.append('// All REVERSE markers pass completion check.')
    with open(CHK, 'w', encoding='ascii') as f:
        f.write('\n'.join(lines))

def load_all_markers():
    """Return set of ALL REVERSE-marked addresses (enabled or disabled)."""
    pat = re.compile(r'REVERSE\(\s*(0x[0-9A-Fa-f]+)\s*,\s*"([^"]*)"\s*,\s*"([^"]*)"\s*\)', re.I)
    addrs = set()
    for d in ["src","app","include/gamemd"]:
        for root,dirs,files in os.walk(os.path.join(ROOT,d)):
            for fn in files:
                if not fn.endswith(('.cpp','.hpp','.h')): continue
                fp = os.path.join(root,fn)
                with open(fp, errors='ignore') as f:
                    c = f.read()
                for m in pat.finditer(c):
                    ls = c.rfind('\n',0,m.start())+1
                    line = c[ls:m.end()]
                    if not line.lstrip().startswith('//'):
                        addrs.add(m.group(1).lower())
    return addrs
    functions, line_map = load_json()
    
    # Load callee dependency map
    callee_map = {}
    callee_names = {}
    if os.path.exists(CAL):
        with open(CAL) as f:
            data = json.load(f)
        callee_map = data.get('callees', {})
        callee_names = data.get('names', {})
    
    markers, warnings, errors, none_markers = find_markers(functions, line_map, callee_map, callee_names, set())
    
    # Build set of ALL REVERSE-marked addresses (including disabled)
    all_marked = {m['addr'] for m in load_all_markers(functions)}
    
    # Filter dependency warnings: only flag REVERSE-marked callees
    filtered_warnings = []
    for w in warnings:
        if 'calls' in w and 'uncompleted callees' in w:
            # This is a dependency warning — filter it
            # The warning format: "addr (name) calls N uncompleted callees: a, b, c..."
            pass
        else:
            filtered_warnings.append(w)
    
    # Recheck dependencies properly: only REVERSE-marked callees
    for m in markers:
        addr = m['addr']
        if addr in callee_map:
            marked_uncompleted = []
            for c in callee_map[addr]:
                if c in all_marked:
                    cfn = functions.get(c)
                    if cfn and not cfn.get('hook', {}).get('completed', False):
                        cname = callee_names.get(c, c)
                        marked_uncompleted.append(cname)
            if marked_uncompleted:
                deps_str = ', '.join(marked_uncompleted[:5])
                if len(marked_uncompleted) > 5: deps_str += f' (+{len(marked_uncompleted)-5} more)'
                msg = f"{m['file']}: {addr} ({m['fn_name']}) calls {len(marked_uncompleted)} REVERSE-marked uncompleted callees: {deps_str}"
                filtered_warnings.append(msg)
    
    warnings = filtered_warnings
    return markers, warnings, errors, all_marked
    
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

def main():
    functions, raw_json = load_json()
    
    # Load callee dependency map
    callee_map = {}
    callee_names = {}
    if os.path.exists(CAL):
        with open(CAL) as f:
            data = json.load(f)
        callee_map = data.get('callees', {})
        callee_names = data.get('names', {})
    
    # All REVERSE-marked addresses (for dependency filter)
    all_marked = load_all_markers()
    
    markers, warnings, errors, none_markers = find_markers(functions, raw_json, callee_map, callee_names, all_marked)
    
    for w in warnings:
        print(f"  WARNING: {w}")
    for e in errors:
        print(f"  ERROR: {e}")
    
    print(f"Found {len(markers)} active hooks ({len(none_markers)} None-mode):")
    for m in markers:
        status = '[OK]' if m.get('completed') else '[NOT COMPLETED]'
        print(f"  {m['addr']}: {m['fn_name']}({','.join(m.get('params',[]))}) {status} mode={m['mode']}")
    if none_markers:
        print(f"  None markers (for None Calls section):")
        for m in none_markers:
            print(f"    {m['addr']}: {m['fn_name']}")
    
    if errors:
        print(f"\n{len(errors)} ERROR(s): fix before building!")
        sys.exit(1)
    
    if not markers:
        print("No active hooks. Add REVERSE(..., true) markers.")
    
    print(f"None markers: {len(none_markers)}")

    fn_map = parse_map()
    code = generate(markers, functions, fn_map, none_markers)
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT,'w') as f: f.write(code)
    print(f"Generated {OUT} ({os.path.getsize(OUT)/1024:.0f}KB)")
    generate_re_impl(markers)
    
    write_check_file(markers, warnings, errors)
    if warnings:
        print(f"Generated {CHK} ({len(warnings)} warnings)")
    print("\nNext: cmake --build build_hook")

if __name__ == '__main__':
    main()
