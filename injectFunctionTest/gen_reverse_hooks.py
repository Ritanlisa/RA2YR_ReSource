#!/usr/bin/env python3
"""Scan REVERSE macros, generate DEFINE_HOOK stubs with completion checks.

Features:
  - Completion check via #pragma/#error (reads functions.json)
  - "No Call" summary for all hooked functions on exit
  - Caller lookup via gamemd.exe.map binary search
  - Parameter names from C++ function declaration
  - comparisonResult.log with [FuncName-0xADDR] format
"""
import os, re, json, sys, struct

SCRIPT = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(SCRIPT, ".."))
OUT  = os.path.join(SCRIPT, "gen", "reverse_hooks.cpp")
CHK  = os.path.join(SCRIPT, "gen", "reverse_check.cpp")
JSON = os.path.join(SCRIPT, "functions.json")
MAP  = os.path.join(ROOT, "decompile-results", "gamemd.exe.map")
CAL  = os.path.join(SCRIPT, "callee_map.json")

RES  = os.path.join(SCRIPT, "idempotent_results.json")
EXE  = "D:\\RA2MD\\gamemd.exe"
BASE = 0x400000  # image base

def validate_hook_size(addr_str, declared_size):
    """Use Capstone to verify hook_size aligns to instruction boundary.
    Returns (actual_min_size, insn_lengths) or (None, []) if unavailable."""
    try:
        import capstone
    except ImportError:
        return None, []
    if not os.path.isfile(EXE):
        return None, []
    rva = int(addr_str, 16) - BASE
    if rva < 0:
        return None, []
    try:
        with open(EXE, 'rb') as f:
            f.seek(0x3C); pe_off = struct.unpack('<I', f.read(4))[0]
            f.seek(pe_off + 6); ns = struct.unpack('<H', f.read(2))[0]
            f.seek(pe_off + 0x18 + 0xE0)  # PE sig(4) + FileHdr(20) + PE32 OptHdr(0xE0)
            sec = None
            for _ in range(ns):
                sn = f.read(8).rstrip(b'\x00').decode()
                vs = struct.unpack('<I', f.read(4))[0]; vr = struct.unpack('<I', f.read(4))[0]
                fs = struct.unpack('<I', f.read(4))[0]; fo = struct.unpack('<I', f.read(4))[0]
                f.seek(12, 1)
                if vr <= rva < vr + vs:
                    sec = {'fo': fo, 'vr': vr}; break
            if not sec: return None, []
            f.seek(sec['fo'] + (rva - sec['vr']))
            code = f.read(32)
    except Exception:
        return None, []
    md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    insn_info = []
    for insn in md.disasm(code, int(addr_str, 16)):
        insn_info.append((insn.mnemonic, insn.op_str, insn.size))
        if len(insn_info) >= 6:
            break
    if not insn_info:
        return None, []
    total = 0; actual = 0
    for _, _, sz in insn_info:
        total += sz
        if total >= 5:
            actual = total; break
    if actual == 0:
        actual = total
    return actual, insn_info[:5]

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

def get_json_line(addr, raw):
    if not raw: return '?'
    try:
        pos = raw.find(f'"address": "{addr}"')
        if pos >= 0:
            return raw[:pos].count('\n') + 1
    except:
        pass
    return '?'

def load_idempotent_results():
    """Load analysis results from analyze_idempotent.py output.
    Returns dict: addr → "TRUE" | "FALSE" | "UNCERTAIN", or {} if missing."""
    if not os.path.exists(RES):
        return {}
    with open(RES) as f:
        return json.load(f)

def resolve_idempotent(addr, fn_info, results, warnings_list, hook_path, line_no):
    """Resolve idempotent status for a hook function.

    Priority:
      1. Manual `idempotent` in functions.json → use as-is
         - If manual=true but auto != True → WARNING (with reason check)
         - If manual=false but auto == True → no warning (conservative)
      2. No manual → use auto result
         - UNCERTAIN → treated as false
      3. No manual AND no auto → FATAL error

    Returns: (bool, list of extra errors)
    """
    hook = fn_info.get('hook', {})
    manual_val = hook.get('idempotent')  # None, True, or False
    extra_errors = []

    # Normalize addr for lookup: strip 0x (case-insensitive), uppercase, pad to 8 chars
    addr_norm = addr.upper().replace('0X', '').zfill(8)
    # Try multiple formats
    auto_str = None
    if addr_norm in results:
        auto_str = results[addr_norm]
    elif addr in results:
        auto_str = results[addr]
    elif addr.upper() in results:
        auto_str = results[addr.upper()]
    
    if auto_str is not None:
        auto_val = auto_str == "TRUE"
    else:
        auto_val = None

    # Case 1: manual override exists
    if manual_val is not None:
        if manual_val and auto_str == "FALSE":
            # Manual=true contradicts definitive FALSE → warn with reason required
            reason = hook.get('idempotent_reason', '')
            if not reason:
                extra_errors.append(
                    f"{hook_path}:{line_no}: {addr} ({fn_info.get('name','?')}) "
                    f"manual idempotent=true but analysis says FALSE — "
                    f"missing idempotent_reason. Add reason or fix analysis."
                )
            else:
                sig = fn_info.get('name', fn_info.get('call', {}).get('method_name', '?'))
                ret_type = fn_info.get('call', {}).get('return_type', 'int')
                warnings_list.append(
                    f"{hook_path}:{line_no}: Function {ret_type} {sig}(...) "
                    f"should be protected (analysis: FALSE) "
                    f'but user insists it\'s idempotent because "{reason}"'
                )
        # UNCERTAIN + manual=true → silently accept (analysis limitation, user knows better)
        # UNCERTAIN + manual=false → silently accept (conservative)
        # TRUE + any manual → silently accept
        return manual_val, extra_errors

    # Case 2: no manual override, use auto
    if auto_val is not None:
        if auto_str == "UNCERTAIN":
            sig = fn_info.get('name', fn_info.get('call', {}).get('method_name', '?'))
            warnings_list.append(
                f"{hook_path}:{line_no}: {addr} ({sig}) idempotent=UNCERTAIN — "
                f"transactions enabled (conservative). Fix: implement Phase 3 vtable "
                f"resolution or add manual idempotent with reason."
            )
        return auto_val, extra_errors

    # Case 3: neither manual nor auto → FATAL
    extra_errors.append(
        f"FATAL: {addr} ({fn_info.get('name','?')}) has no idempotent value. "
        f"Run analyze_idempotent.py or add manual idempotent to functions.json."
    )
    return False, extra_errors  # conservative default after fatal error


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

def find_markers(functions, raw_json, callee_map, callee_names, all_marked, idem_results):
    pat = re.compile(r'REVERSE\(\s*(0x[0-9A-Fa-f]+)\s*,\s*"([^"]*)"\s*,\s*"([^"]*)"\s*\)', re.I)
    markers = []
    none_markers = []  # mode=None markers for "None Calls" section
    warnings = []
    errors = []
    seen_addrs = {}    # addr → (file, line) for duplicate detection
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
                    # ERROR: duplicate REVERSE address
                    line_no = c[:m.start()].count(chr(10))+1
                    if addr in seen_addrs:
                        prev_file, prev_line = seen_addrs[addr]
                        errors.append(f"{fp}:{line_no}: DUPLICATE REVERSE(0x{addr}) — already defined in {prev_file}:{prev_line}")
                        continue  # skip duplicate
                    seen_addrs[addr] = (os.path.relpath(fp,ROOT), line_no)
                    ls = c.rfind('\n',0,m.start())+1
                    line = c[ls:m.end()]
                    if line.lstrip().startswith('//'): continue
                    rest = c[m.end():m.end()+500]
                    # Find the next non-blank, non-comment line (MUST contain declaration)
                    s = None
                    for raw_line in rest.split('\n'):
                        ln = raw_line.strip()
                        if not ln or ln.startswith('//') or ln.startswith('/*') or ln.startswith('*') or ln.startswith('*/'):
                            continue
                        if ln.startswith('marked ') or ln.startswith('repeat '):
                            continue
                        # Multi-line declaration: first line has '(' but no ')' 
                        if '(' in ln and ')' not in ln:
                            s = SIG.search(rest)  # search full rest for the complete declaration
                        else:
                            s = SIG.search(ln)     # single-line: match against this line only
                        break  # only check the first non-blank/non-comment line
                    
                    # ERROR: Capture/Replace/Inject MUST be followed by a function declaration
                    if s is None and mode in ("Capture", "Replace", "Inject"):
                        errors.append(f"{fp}:{line_no}: REVERSE(0x{addr}) mode={mode} — no function declaration found after REVERSE macro")
                        continue
                    # Heuristic: if the matched "return type" looks like a comment or code,
                    # or if the function name doesn't match JSON name, discard the match
                    fname = s.group(2) if s else "?"
                    params = []       # list of (type_str, name_str)
                    ret_type = ""
                    full_sig = fname
                    if s:
                        rt = s.group(1).strip()  # preserve case for C++ type matching
                        # Filter out garbage matches: comments, code fragments, wrong function names
                        garbage_words = ['return','remove','store','global','marked','repeat',
                                        'loads','resets','new','recursive','forward','declare']
                        is_garbage = any(w == rt.lower() or rt.lower().startswith(w+' ') for w in garbage_words)
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
                            fs = s.group(0).strip()
                            fs = re.sub(r'\s+', ' ', fs)   # collapse whitespace
                            fs = fs.replace('( ', '(')     # no space after opening paren
                            full_sig = fs
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
                                        arr_sz = 0
                                        arr_m = re.search(r'\[(\d+)\]', n)
                                        if arr_m:
                                            arr_sz = int(arr_m.group(1))
                                            n = n[:arr_m.start()]
                                        ty = ' '.join(ps[:-1])
                                        if n and n!='const': params.append((ty, n, arr_sz))
                    
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
                    
                    # Resolve idempotent status for Inject/Replace hooks
                    is_idem = False
                    if mode in ("Replace", "Inject"):
                        line_no = c[:m.start()].count(chr(10))+1
                        is_idem, extra_errs = resolve_idempotent(
                            addr, fn_info, idem_results, warnings,
                            os.path.relpath(fp, ROOT), line_no)
                        errors.extend(extra_errs)
                    
                    markers.append(dict(addr=addr,desc=m.group(2),fn_name=fname,
                                        file=os.path.relpath(fp,ROOT),params=params,
                                        completed=completed,mode=mode,
                                        ret_type=ret_type, full_sig=full_sig,
                                        is_idem=is_idem,
                                        convention=fn_info.get('call',{}).get('convention','stdcall')))
    # Deduplicate none_markers: keep entry with best full_sig per address
    dedup = {}
    for m in none_markers:
        addr = m['addr']
        cur = m.get('full_sig', '')
        if addr not in dedup:
            dedup[addr] = m
        else:
            prev = dedup[addr].get('full_sig', '')
            # prefer entry with params (contains '(') over name-only
            if '(' not in prev and '(' in cur:
                dedup[addr] = m
            elif '(' in prev and '(' in cur and len(cur) > len(prev):
                dedup[addr] = m
    none_markers = list(dedup.values())
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
    w('#include "Syringe.h"')
    w('#include "tls_storage.h"')
    w('#include "shadow_txn.h"')
    w('#include "hook_template.hpp"')
    w('extern "C" void PostProcStub();')
    # Forward-declare RE_* functions for Inject/Replace mode only
    for m in markers:
        if m.get('mode') not in ('Inject', 'Replace'):
            continue
        s=san(m['fn_name'])
        conv = functions.get(m['addr'],{}).get('call',{}).get('convention','stdcall')
        n_params = len(m.get('params',[]))
        if conv == 'thiscall': n_params += 1  # +this
        param_list = ', '.join(['DWORD'] * n_params) if n_params > 0 else ''
        w(f'extern "C" DWORD RE_{s}({param_list});')
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
    w(f'static S in[{nmk}]={{}};')
    w('#include "hook_template.hpp"')
    w('')
    w(f'static char fn_buf[{nmk}][FN_BUF_SZ]={{0}};')
    w(f'static int  fn_buf_len[{nmk}]={{0}};')
    w('static HANDLE h = INVALID_HANDLE_VALUE;')
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
        rt = m.get('ret_type', '').replace('\n',' ').replace('\r',' ')
        w(f'  nm[{si}]="{m["fn_name"]}"; addr_tbl[{si}]=0x{int(m["addr"],16):08X};')
        w(f'  sig[{si}]="{sig}"; rt[{si}]="{rt}";')
    w('}')
    w('struct InitHookNames { InitHookNames() { NN(); } };')
    w('static InitHookNames _init;')
    # Index
    w('static int I(DWORD x){static DWORD A[]={')
    for m in markers: w(f'  0x{int(m["addr"],16):08X},')
    w('  0};for(int i=0;A[i];++i)if(A[i]==x)return i;return -1;}')
    for i,m in enumerate(markers):
        conv = functions.get(m['addr'],{}).get('call',{}).get('convention','unknown')
        if conv == 'unknown': conv = 'stdcall'
        params = m.get('params',[])
        s=san(m['fn_name'])
        w(f'static void FI_{s}(std::ostream& os){{')
        if conv == 'thiscall':
            w(f'  os<<"this=";Fmt(os,"this",in[{i}].c);')
            if params:
                w(f'  static const char* ty_{s}[]={{{",".join(f"\"{p[0]}\"" for p in params)}}};')
                w(f'  static int arr_{s}[]={{{",".join(str(p[2]) for p in params)}}};')
            for j,pt in enumerate(params):
                reg = 'Stack'
                ref = f'in[{i}].stk{j}'
                if pt[2] > 0:
                    w(f'  os<<" {pt[1]}({reg})="; FmtArr(os,arr_{s}[{j}],{ref});')
                else:
                    w(f'  os<<" {pt[1]}({reg})="; Fmt(os,ty_{s}[{j}],{ref});')
        elif conv == 'fastcall':
            regs = ['ECX','EDX']
            for j in range(min(2, len(params))):
                pt = params[j]
                pn = pt[1]
                ref = f'in[{i}].{chr(ord("c")+j)}'
                if pt[2] > 0:
                    w(f'  os<<" {pn}({regs[j]})="; FmtArr(os,{pt[2]},{ref});')
                else:
                    w(f'  os<<" {pn}({regs[j]})="<<"0x"<<std::hex<<{ref};')
            for j in range(2, len(params)):
                pt = params[j]
                pn = pt[1]
                ref = f'in[{i}].stk{j-2}'
                if pt[2] > 0:
                    w(f'  os<<" {pn}(Stack)="; FmtArr(os,{pt[2]},{ref});')
                else:
                    w(f'  os<<" {pn}(Stack)="; Fmt(os,"int",{ref});')
        else:  # stdcall, cdecl
            if params:
                w(f'  static const char* ty_{s}[]={{{",".join(f"\"{p[0]}\"" for p in params)}}};')
                w(f'  static int arr_{s}[]={{{",".join(str(p[2]) for p in params)}}};')
            for j,pt in enumerate(params):
                ref = f'in[{i}].stk{j}'
                if pt[2] > 0:
                    w(f'  os<<" {pt[1]}(Stack)="; FmtArr(os,arr_{s}[{j}],{ref});')
                else:
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
    w('static char sec_none[SEC_BUF_SZ]={0}; static int sec_none_len=0;')
    w('')
    w('static void flush_full(){')
    w('  if(h==INVALID_HANDLE_VALUE){')
    w('    h=CreateFileA("comparisonResult.log",GENERIC_READ|GENERIC_WRITE,0,0,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,0);')
    w('    if(h==INVALID_HANDLE_VALUE) return;')
    w('  }')
    w('  SetFilePointer(h,0,0,FILE_BEGIN); SetEndOfFile(h);')
    w('  std::ostringstream os;')
    w('  os<<"============ Different Compares ============\\r\\n";')
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
        rt = m.get('ret_type', '').strip()
        if '(' not in sig and rt: sig = f'{rt} {sig}'
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
        rt = m.get('ret_type', '').strip()
        if '(' not in sig and rt: sig = f'{rt} {sig}'
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
    w('  if(n==1) os<<"\\r\\n["<<hdr<<"-0x"<<addr<<"]\\r\\n";')
    w('  os<<"Call "<<std::dec<<n<<": "<<(cn?cn:"?")<<"()<-0x"<<std::hex<<(ret-5)<<"\\r\\n";')
    w('  os<<"  Input:  "; FI(i,os);')
    w('  if(tag==\'C\'){ os<<"  Return: ";Fmt(os,rt[i],orig);os<<"(EAX)\\r\\n"; }')
    w('  else if(re==orig){ os<<"  Return: hook=original=";Fmt(os,rt[i],orig);os<<"(EAX)\\r\\n"; }')
    w('  else{ has_diff[i]=true; os<<"  Return: hook=";Fmt(os,rt[i],re);os<<"(EAX) != original=";Fmt(os,rt[i],orig);os<<"(EAX)\\r\\n"; }')
    w('  std::string s=os.str(); WrFile(h,s);')
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
        conv=fn.get('call',{}).get('convention','?') if fn else '?'
        mode=m.get('mode','None')

        # Auto-compute hook_size from binary via Capstone (PE instruction decode)
        # No functions.json dependency — always computed, never read from metadata
        hs = validate_hook_size(m['addr'], 0)[0] or 8

        w(f'// {m["fn_name"]} @ {m["addr"]} ({conv}) mode={mode} hook_size={hs}')
        w(f'// {m["desc"]}')
        w(f'DEFINE_HOOK(0x{ah}, Rev_{s}, 0x{hs:X})')
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
        elif mode == "Replace":
            is_idem = m.get('is_idem', False)
            if is_idem:
                # No transaction: push slot stack, hijack, return
                w('  auto*s=shadow::GetSlot();')
                w(f'  int d=s->depth; if(d<16){{s->ret_addr_stack[d]=R->Stack<DWORD>(0);s->hook_addr_stack[d]=0x{ah};s->depth=d+1;}}')
                w('  R->Stack(0,(DWORD)&PostProcStub);')
            else:
                # Full transaction for non-idempotent functions
                w('  // Thread gate: only main game thread participates')
                w('  if(GetCurrentThreadId()!=shadow::g_owner_tid) return 0;')
                w('  // Stale transaction cleanup')
                w('  auto*s=shadow::GetSlot();')
                w('  if(s&&s->txn){s->txn->Discard();delete s->txn;s->txn=nullptr;++shadow::g_orphan_count;}')
                w(f'  int d=s->depth; if(d<16){{s->ret_addr_stack[d]=R->Stack<DWORD>(0);s->hook_addr_stack[d]=0x{ah};s->depth=d+1;}}')
                w('  auto* txn = new shadow::ShadowTransaction();')
                w('  txn->Begin();')
                w('  R->Stack(0,(DWORD)&PostProcStub);')
        elif mode == "Inject":
            is_idem = m.get('is_idem', False)
            if is_idem:
                w(f'  if(shadow::g_re_depth>0) return 0;')
                w('  auto*s=shadow::GetSlot();')
                w(f'  int d=s->depth; if(d<16){{s->ret_addr_stack[d]=R->Stack<DWORD>(0);s->hook_addr_stack[d]=0x{ah};s->depth=d+1;}}')
                w('  R->Stack(0,(DWORD)&PostProcStub);')
            else:
                # Non-idempotent: full transaction + thread gate + re_depth gate
                w('  if(GetCurrentThreadId()!=shadow::g_owner_tid) return 0;')
                w(f'  if(shadow::g_re_depth>0) return 0;')
                w('  auto*s=shadow::GetSlot();')
                w('  if(s&&s->txn){s->txn->Discard();delete s->txn;s->txn=nullptr;++shadow::g_orphan_count;}')
                w(f'  int d=s->depth; if(d<16){{s->ret_addr_stack[d]=R->Stack<DWORD>(0);s->hook_addr_stack[d]=0x{ah};s->depth=d+1;}}')
                w('  auto* txn = new shadow::ShadowTransaction();')
                w('  txn->Begin();')
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
    w('  // Rollback (only if transaction exists; Replace mode has no txn)')
    w('  auto*s=shadow::GetSlot();')
    w('  if(s&&s->txn) shadow::ShadowTransaction::EndCurrent();')
    w('')
    w('  // Run RE version (RAII guard for re_depth)')
    w('  { struct ReDepthGuard { ReDepthGuard() { ++shadow::g_re_depth; } ~ReDepthGuard() { --shadow::g_re_depth; } } g;')
    w('    V.re = CallRE(idx);')
    w('  }')
    w('')
    w('  // Store RE result in slot for PostProcStub to return to caller')
    w('  if(s) { s->re_result_eax = V.re; s->re_result_edx = 0; }  // edx=V.d is INPUT edx, not RE output')
    w('')
    w('  // Compare and log')
    w('  DWORD ret=s?s->ret_addr_stack[s->depth]:0;')
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
    
    # Load idempotency analysis results
    idem_results = load_idempotent_results()
    if idem_results:
        print(f"Loaded idempotency results: {len(idem_results)} entries")
    else:
        print("WARNING: idempotent_results.json not found — run analyze_idempotent.py first")
    
    markers, warnings, errors, none_markers = find_markers(functions, raw_json, callee_map, callee_names, all_marked, idem_results)
    
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
