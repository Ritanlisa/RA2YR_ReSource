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
    r'(.+?)\s+(\w+(?:::\w+)*)\s*\(([^)]*)\)',
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
                    rest = c[m.end():m.end()+500]
                    # Skip comment lines and blank lines to find the real function declaration
                    s = None
                    for raw_line in rest.split('\n'):
                        ln = raw_line.strip()
                        if not ln or ln.startswith('//') or ln.startswith('/*') or ln.startswith('*') or ln.startswith('*/'):
                            continue
                        # Also skip lines that are just annotations like "marked completed"
                        if ln.startswith('marked ') or ln.startswith('repeat '):
                            continue
                        s = SIG.search(ln)
                        if s: break
                    if s is None:
                        s = SIG.search(rest)  # fallback
                    
                    # Heuristic: if the matched "return type" looks like a comment or code,
                    # or if the function name doesn't match JSON name, discard the match
                    fname = s.group(2) if s else "?"
                    params = []       # list of (type_str, name_str)
                    ret_type = ""
                    full_sig = fname
                    if s:
                        rt = s.group(1).strip().lower()
                        # Filter out garbage matches: comments, code fragments, wrong function names
                        garbage_words = ['return','remove','store','global','marked','repeat',
                                        'loads','resets','new','recursive','forward','declare']
                        is_garbage = any(w == rt or rt.startswith(w+' ') for w in garbage_words)
                        # Reject comment-like matches (// or /* in the return type)
                        if not is_garbage and ('//' in s.group(0) or '/*' in s.group(0)):
                            is_garbage = True
                        # Reject if function name doesn't look like a valid identifier
                        if not is_garbage:
                            fn = s.group(2)
                            if not fn[0].isalpha() and fn[0] != '_' and fn[0] != '~':
                                is_garbage = True
                        if is_garbage:
                            s = None  # discard the match
                            fname = "?"
                            full_sig = "?"
                        else:
                            ret_type = rt
                            full_sig = s.group(0).strip().replace('\n',' ').replace('\r',' ').replace('  ',' ')
                        if s:
                            raw_params = s.group(3).strip()
                            # Reject if parameters look like code, not declarations
                            # (e.g. "draw_rect.X, draw_rect.Y" from Point2D tl(draw_rect.X, draw_rect.Y))
                            has_dot = any('.' in p for p in (s.group(3).split(',') if s.group(3) else []))
                            if has_dot:
                                s = None  # discard: found code, not function declaration
                                fname = "?"
                                full_sig = "?"
                            elif raw_params and raw_params != 'void':
                                for p in s.group(3).split(','):
                                    ps = p.strip().split()
                                    if ps and len(ps) >= 2:
                                        n = ps[-1].lstrip('*& ')
                                        ty = ' '.join(ps[:-1])
                                        if n and n!='const': params.append((ty, n))
                    
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
                        if full_sig == '?' or full_sig == fname:
                            full_sig = json_name  # use JSON name as fallback signature
                    
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
                                        ret_type=ret_type, full_sig=full_sig,
                                        convention=fn_info.get('call',{}).get('convention','stdcall')))
    return markers, warnings, errors, none_markers

def san(n):
    return n.replace('::','_').replace('@','_').replace('<','_').replace('>','_')

def fmt_fn(ptype):
    """Return (cpp_formatter, c_fmt) based on parameter type string."""
    ty = ptype.lower()
    if 'bool' in ty: return ('AppB', 'bool')
    if '*' in ty: return ('AppP', 'ptr')
    return ('AppV', 'int')

def conv_reg(conv, j, i):
    """Return (ref, name) for parameter j under calling convention conv."""
    if conv == 'thiscall':
        return ('in[%d].stk%d'%(i,j), 'Stack') if j<4 else ('in[%d].stk3'%i, 'Stack')
    elif conv == 'fastcall':
        if j==0: return ('in[%d].c'%i, 'ECX')
        elif j==1: return ('in[%d].d'%i, 'EDX')
        else: return ('in[%d].stk%d'%(i,j-2), 'Stack') if (j-2)<4 else ('in[%d].stk3'%i, 'Stack')
    else:  # stdcall, cdecl — parameters on stack
        return ('in[%d].stk%d'%(i,j), 'Stack') if j<4 else ('in[%d].stk3'%i, 'Stack')
    """Return (ref, name) for parameter j under calling convention conv."""
    if conv == 'thiscall':
        return ('in[%d].stk%d'%(i,j), 'Stack') if j<4 else ('in[%d].stk3'%i, 'Stack')
    elif conv == 'fastcall':
        if j==0: return ('in[%d].c'%i, 'ECX')
        elif j==1: return ('in[%d].d'%i, 'EDX')
        else: return ('in[%d].stk%d'%(i,j-2), 'Stack') if (j-2)<4 else ('in[%d].stk3'%i, 'Stack')
    else:  # stdcall, cdecl — parameters on stack
        return ('in[%d].stk%d'%(i,j), 'Stack') if j<4 else ('in[%d].stk3'%i, 'Stack')

def generate(markers, functions, fn_map, none_markers=None):
    if none_markers is None: none_markers = []
    total_mk = len(markers) + len(none_markers)  # total for None Calls tracking
    out = []; w = out.append
    w('// Auto-generated by gen_reverse_hooks.py - DO NOT EDIT')
    w('#include <windows.h>')
    w('#include <stdarg.h>')
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
    w('struct S{DWORD a,c,d,b,si,di,bp,sp,re,stk0,stk1,stk2,stk3,stk4,stk5,stk6,stk7;};')
    w(f'static S in[{nmk}]={{}};')
    w('#include <sstream>')
    w('#include <string>')
    w('#define FN_BUF_SZ 12288')
    w(f'static char fn_buf[{nmk}][FN_BUF_SZ]={{0}};')
    w(f'static int  fn_buf_len[{nmk}]={{0}};')
    w('static HANDLE h = INVALID_HANDLE_VALUE;')
    w('')
    # Format: type-aware value output to ostringstream
    w('static void Fmt(std::ostream& os, const char* ty, DWORD v){')
    w('  if(!ty)ty="";')
    w('  if(strstr(ty,"bool")||strstr(ty,"Bool")) os<<(v?"true":"false")<<"("<<std::hex<<v<<")";')
    w('  else if(strchr(ty,\'*\')) os<<"0x"<<std::hex<<v;')
    w('  else os<<v<<"(0x"<<std::hex<<v<<")";')
    w('}')
    w('// Helper: write string to per-function buffer')
    w(f'static void FnBuf(int idx, const std::string& s){{')
    w(f'  int sl=(int)s.size();')
    w(f'  if(fn_buf_len[idx]+sl<FN_BUF_SZ-1){{memcpy(fn_buf[idx]+fn_buf_len[idx],s.c_str(),sl);fn_buf_len[idx]+=sl;}}')
    w(f'}}')
    w('')
    # Init -- unchanged
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
    # FormatInput per function — writes to std::ostringstream&
    w('static void WrFile(const std::string& s){if(h!=INVALID_HANDLE_VALUE){DWORD n;WriteFile(h,s.c_str(),(DWORD)s.size(),&n,0);}}')
    w('')
    for i,m in enumerate(markers):
        conv = functions.get(m['addr'],{}).get('call',{}).get('convention','unknown')
        if conv == 'unknown': conv = 'stdcall'
        params = m.get('params',[])
        s=san(m['fn_name'])
        w(f'static void FI_{s}(std::ostream& os){{')
        if conv == 'thiscall':
            w(f'  os<<"this="<<"0x"<<std::hex<<in[{i}].c;')
            if params:
                w(f'  static const char* ty_{s}[]={{{",".join(f"\"{p[0]}\"" for p in params)}}};')
            for j,pt in enumerate(params):
                reg = f'Stack'
                ref = f'in[{i}].stk{j}'
                w(f'  os<<" {pt[1]}({reg})="; Fmt(os,ty_{s}[{j}],{ref});')
        elif conv == 'fastcall':
            regs = ['ECX','EDX']
            for j in range(min(2, len(params))):
                pn = params[j][1] if j < len(params) else '?'
                ref = f'in[{i}].{chr(ord("c")+j)}'
                w(f'  os<<" {pn}({regs[j]})="<<"0x"<<std::hex<<{ref};')
            for j in range(2, len(params)):
                pn = params[j][1]
                ref = f'in[{i}].stk{j-2}'
                w(f'  os<<" {pn}(Stack)="; Fmt(os,"int",{ref});')
        else:  # stdcall, cdecl
            if params:
                w(f'  static const char* ty_{s}[]={{{",".join(f"\"{p[0]}\"" for p in params)}}};')
            for j,pt in enumerate(params):
                ref = f'in[{i}].stk{j}'
                w(f'  os<<" {pt[1]}(Stack)="; Fmt(os,ty_{s}[{j}],{ref});')
        w(f'  os<<"\\r\\n";')
        w(f'}}')
        w(f'')
    # FI dispatcher
    w('static void FI(int i, std::ostream& os){switch(i){')
    for i,m in enumerate(markers): w(f'  case {i}:FI_{san(m["fn_name"])}(os);break;')
    w('  default:os<<"  Input: ???\\r\\n";break;}}')
    w('')
    # CallRE dispatcher — calls RE_* function with captured inputs (for Inject/Replace)
    # Parameter mapping by calling convention:
    #   thiscall: V.c(this), V.stk0(arg1), V.stk1(arg2), ...
    #   fastcall: V.c(arg1), V.d(arg2), V.stk0(arg3), ...
    #   stdcall/cdecl: V.stk0(arg1), V.stk1(arg2), ...
    w('static DWORD CallRE(int i){')
    w('  auto&V=in[i];')
    w('  switch(i){')
    has_inj = False
    for i,m in enumerate(markers):
        if m.get('mode') not in ('Inject', 'Replace'):
            continue
        has_inj = True
        s=san(m['fn_name'])
        conv = functions.get(m['addr'],{}).get('call',{}).get('convention','stdcall')
        num_p = len(m.get('params',[]))
        # Build args list based on convention
        args = []
        if conv == 'thiscall':
            args.append('V.c')  # this
            for pi in range(num_p):
                args.append(f'V.stk{pi}')
        elif conv == 'fastcall':
            if num_p >= 1: args.append('V.c')
            if num_p >= 2: args.append('V.d')
            for pi in range(max(0, num_p - 2)):
                args.append(f'V.stk{pi}')
        else:  # stdcall, cdecl
            for pi in range(num_p):
                args.append(f'V.stk{pi}')
        arg_str = ', '.join(args) if args else ''
        w(f'    case {i}: return RE_{s}({arg_str});')
    w('    default: return 0;')
    w('  }')
    w('}')
    if not has_inj:
        w('// No Inject/Replace markers active — CallRE is a no-op')
    # Map table + Caller lookup
    w('struct FE{DWORD a;const char*n;};')
    w('static FE F[]={')
    sorted_addrs = sorted(fn_map.keys())
    count = 0
    for a in sorted_addrs:
        n = fn_map[a]
        w(f'  {{0x{a:08X},"{n}"}},')
        count += 1
        if count >= 16000: break
    w('  {0,0}};')
    w(f'static const char* Caller(DWORD v){{')
    w(f'  if({count}==0) return 0;')
    w(f'  int lo=1,hi={count};')
    w('  while(lo<hi){int m=(lo+hi)/2;if(v<F[m].a)hi=m;else lo=m+1;}')
    w(f'  if(lo<=0||lo>{count}) return 0;')
    w('  if(v-F[lo-1].a>0x10000) return 0;')
    w('  return F[lo-1].n;')
    w('}')
    w('')
    # Per-function buffers continued
    w('#define SEC_BUF_SZ 65536')
    w('static char sec_none[SEC_BUF_SZ]={0}; static int sec_none_len=0;')
    w('')
    w('static void flush_full(){')
    w('  if(h==INVALID_HANDLE_VALUE){')
    w('    h=CreateFileA("comparisonResult.log",GENERIC_READ|GENERIC_WRITE,0,0,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,0);')
    w('    if(h==INVALID_HANDLE_VALUE) return;')
    w('  }')
    w('  SetFilePointer(h,0,0,FILE_BEGIN); SetEndOfFile(h);')
    w('  std::ostringstream os;')
    w('  os<<"============ Different Calls ============\\r\\n";')
    w(f'  for(int i=0;i<{nmk};i++) if(has_diff[i]&&fn_buf_len[i]>0) os.write(fn_buf[i],fn_buf_len[i]);')
    w('  os<<"\\r\\n================ Captures ================\\r\\n";')
    w(f'  for(int i=0;i<{nmk};i++) if(is_cap[i]&&!has_diff[i]&&fn_buf_len[i]>0) os.write(fn_buf[i],fn_buf_len[i]);')
    w('  os<<"\\r\\n============= Same Compares ==============\\r\\n";')
    w(f'  for(int i=0;i<{nmk};i++) if(!is_cap[i]&&!has_diff[i]&&fn_buf_len[i]>0) os.write(fn_buf[i],fn_buf_len[i]);')
    w('  os<<"\\r\\n============== None Calls ================\\r\\n";')
    w('  if(sec_none_len>0) os.write(sec_none,sec_none_len);')
    w('  else os<<"\\r\\n";')
    w('  {std::string s=os.str();DWORD n;WriteFile(h,s.c_str(),(DWORD)s.size(),&n,0);}')
    w('  FlushFileBuffers(h);')
    w('}')
    w('')
    w('static int dirty=0;')
    w('static DWORD last_flush_tick=0;')
    w('static int total_entries=0;')
    w('')
    w('// Smart flush: diff entries always immediate; first 100 entries immediate;')
    w('// after that batch at 32 entries or 1 second timeout')
    w('static void maybe_flush(bool is_diff){')
    w('  if(is_diff||total_entries<100){{flush_full();dirty=0;last_flush_tick=GetTickCount();return;}}')
    w('  DWORD now=GetTickCount();')
    w('  if(++dirty>=32||now-last_flush_tick>1000){{flush_full();dirty=0;last_flush_tick=now;}}')
    w('}')
    w('')
    # Helper to append to sec_none buffer
    w('static void SecApp(char* sec, int* plen, const char* s){')
    w('  int sl=lstrlenA(s);')
    w('  if(*plen+sl<SEC_BUF_SZ-1){')
    w('    for(int i=0;i<sl;i++) sec[(*plen)++]=s[i];')
    w('    sec[*plen]=0;')
    w('  }')
    w('}')
    w('')
    # Initial sections setup
    w('static bool sections_written=false;')
    w('static void ensure_sections(){')
    w('  if(sections_written) return;')
    w('  sections_written=true;')
    for i,m in enumerate(none_markers):
        sig = m.get('full_sig', m['fn_name']).replace('\\','\\\\').replace('"','\\"').replace('\n',' ')
        addr_hex = f'0x{int(m["addr"],16):08X}'
        w(f'  SecApp(sec_none,&sec_none_len,"[{sig}-{addr_hex}]\\r\\n");')
    w('  flush_full();')
    w('}')
    w('')
    w('static void rebuild_none(){')
    w('  sec_none_len=0; sec_none[0]=0;')
    # List None-mode markers that are uncalled
    for i,m in enumerate(none_markers):
        sig = m.get('full_sig', m['fn_name']).replace('\\','\\\\').replace('"','\\"').replace('\n',' ')
        addr_hex = f'0x{int(m["addr"],16):08X}'
        w(f'  {{ int called=0;')
        w(f'    for(int j=0;j<{nmk};j++){{')
        w(f'      if(addr_tbl[j]=={addr_hex}&&ctr[j]>0) called=1;')
        w(f'    }}')
        w(f'    if(!called) SecApp(sec_none,&sec_none_len,"[{sig}-{addr_hex}]\\r\\n"); }}')
    # Also list active markers with ctr==0 that aren't None-mode
    w(f'  for(int j=0;j<{nmk};j++){{')
    w( '    if(ctr[j]==0){')
    w( '      int already=0;')
    if none_markers:
        na_vals = ','.join(str(int(m["addr"],16)) for m in none_markers)
        w(f'      unsigned na_tbl[{len(none_markers)}]={{{na_vals}}};')
        w(f'      for(int k=0;k<{len(none_markers)};k++) if(addr_tbl[j]==na_tbl[k]) already=1;')
    w( '      if(!already){')
    w( '        const char* s=sig[j];')
    w( '        if(s&&*s){')
    w( '          char tmp[256]; wsprintfA(tmp,"[%s-0x%08X]\\r\\n",s,addr_tbl[j]);')
    w( '          SecApp(sec_none,&sec_none_len,tmp);')
    w( '        }else{')
    w( '          char tmp[128]; wsprintfA(tmp,"[%s-0x%08X]\\r\\n",nm[j]?nm[j]:"?",addr_tbl[j]);')
    w( '          SecApp(sec_none,&sec_none_len,tmp);')
    w( '        }')
    w( '      }')
    w( '    }')
    w( '  }')
    w('}')
    w('')
    w('static void write_entry(char tag, int i, DWORD addr, DWORD re, DWORD orig, DWORD ret){')
    w('  ensure_sections();')
    w('  int n=++ctr[i];')
    w('  if(n>50) return;')
    w('  const char* cn=Caller(ret-5);')
    w('  const char* hdr=sig[i]&&*sig[i]?sig[i]:nm[i]?nm[i]:"?";')
    w('  std::ostringstream os;')
    w('  os<<std::hex<<std::uppercase;')
    w('  if(n==1) os<<"["<<hdr<<"-0x"<<addr<<"]\\r\\n";')
    w('  os<<"Call "<<std::dec<<n<<": "<<(cn?cn:"?")<<"()<-0x"<<std::hex<<(ret-5)<<"\\r\\n";')
    w('  os<<"  Input:  "; FI(i,os);')
    w('  if(tag==\'C\'){ os<<"  Return: "<<std::dec<<orig<<"("<<std::hex<<orig<<")\\r\\n"; }')
    w('  else if(re==orig){ os<<"  Return: hook=original="<<std::dec<<orig<<"("<<std::hex<<orig<<")\\r\\n"; }')
    w('  else{ has_diff[i]=true; os<<"  Return: hook="<<std::dec<<re<<"("<<std::hex<<re<<") != original="<<std::dec<<orig<<"("<<std::hex<<orig<<")\\r\\n"; }')
    w('  std::string s=os.str(); WrFile(s);')
    w('  FnBuf(i,s);')
    w('  rebuild_none();')
    w('  bool is_diff=(tag==\'I\'&&re!=orig);')
    w('  ++total_entries;')
    w('  maybe_flush(is_diff);')
    w('}')
    w('')
    w('// Final flush on DLL unload (no export needed - static destructor)')
    w('static struct FinalFlush{ ~FinalFlush(){ if(h!=INVALID_HANDLE_VALUE){flush_full();CloseHandle(h);h=INVALID_HANDLE_VALUE;} } } _final_flush;')
    w('')
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
            w('  // Thread gate: only main game thread participates')
            w('  if(GetCurrentThreadId()!=shadow::g_owner_tid) return 0;')
            w(f'  // RE depth gate (Inject mode: RE calls hooked callee -> pass through)')
            w(f'  if(shadow::g_re_depth>0) return 0;')
            w('  // Stale transaction cleanup (previous hook\'s txn escaped)')
            w('  auto*s=shadow::GetSlot();')
            w('  if(s&&s->txn){')
            w('    s->txn->Discard();')
            w('    delete s->txn;')
            w('    s->txn=nullptr;')
            w('    ++shadow::g_orphan_count;')
            w('  }')
            w('  auto* txn = new shadow::ShadowTransaction();')
            w('  txn->Begin();')
            w(f'  s->hook_addr=0x{ah};')
            w('  s->original_ret_addr=R->Stack<DWORD>(0);')
            w('  R->Stack(0,(DWORD)&PostProcStub);')
        
        w('  return 0;')
        w('}')
        w('')
    # LogComparison — called from PostProcStub after original function returns
    # Performs: rollback txn → run RE → compare → log → return re_eax
    w('extern "C" DWORD __cdecl LogComparison(DWORD orig,DWORD addr){')
    w('  int idx=I(addr);if(idx<0)return orig;')
    w('  auto&V=in[idx];')
    w('')
    w('  // Rollback shadow transaction (restore .data pages)')
    w('  shadow::ShadowTransaction::EndCurrent();')
    w('')
    w('  // Run RE version on clean state (RAII guard for re_depth)')
    w('  { struct ReDepthGuard { ReDepthGuard() { ++shadow::g_re_depth; } ~ReDepthGuard() { --shadow::g_re_depth; } } g;')
    w('    V.re = CallRE(idx);')
    w('  }')
    w('')
    w('  // Store RE result in slot for PostProcStub to return to caller')
    w('  auto*s=shadow::GetSlot();')
    w('  if(s) { s->re_result_eax = V.re; s->re_result_edx = V.d; }')
    w('')
    w('  // Compare and log')
    w('  DWORD ret=s?s->original_ret_addr:0;')
    w('  write_entry(\'I\', idx, addr, V.re, orig, ret);')
    w('')
    w('  return V.re;')
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
        pnames = [p[1] for p in m.get('params',[])]
        print(f"  {m['addr']}: {m['fn_name']}({','.join(pnames)}) {'[OK]' if m.get('completed') else '[NOT COMPLETED]'}")
    
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
        pnames = [p[1] for p in m.get('params',[])]
        print(f"  {m['addr']}: {m['fn_name']}({','.join(pnames)}) {status} mode={m['mode']}")
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

    # Build caller lookup from functions.json (IDA names, 19K+ entries)
    # Supplement with .map file entries for any extras
    fn_map = {}
    for addr_str, fn_info in functions.items():
        name = fn_info.get('name', '')
        if not name or name.startswith(('sub_', 'nullsub', 'unknown', 'loc_')):
            continue
        if '`' in name or '<' in name or 'RTTI' in name:
            continue
        addr = int(addr_str, 16)
        fn_map[addr] = name
    for addr, name in parse_map().items():
        if addr not in fn_map:
            fn_map[addr] = name
    print(f"Caller lookup table: {len(fn_map)} entries (functions.json + map)")
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
