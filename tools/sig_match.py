#!/usr/bin/env python3
"""
sig_match.py — Match missing hpp declarations to IDA functions by signature similarity.

4-pass name-based matching (NO signature-only garbage):
  P1a: Exact ClassName::MethodName in IDA
  P1b: Same method name, any class (same_method)
  P1c: Alternate name ordering (VerbNoun ↔ NounVerb)
  P1d: Token overlap for multi-word names (≥2 tokens match)

Scoring: param_count(40%) + type_match(40%) + return_match(20%)
Thiscall: IDA has +1 param (this). Adjusted for class methods.

Output: tools/sig_match_results.json
  Key: "{ClassName}::{MethodName}" or "{MethodName}" (global)
  Value: top-5 candidates sorted by confidence, or [{"status":"no_match"}]
"""

import json, re, os
from pathlib import Path
from collections import defaultdict

# ═══════════════════════════════════════════════════════════
# Type normalization
# ═══════════════════════════════════════════════════════════

def normalize_hpp_type(t: str) -> str:
    t = t.strip()
    t = re.sub(r'&$', '', t)
    t = re.sub(r'^const\s+', '', t)
    t = re.sub(r'\s+const$', '', t)
    m = {
        'int':'int', 'unsigned int':'unsigned int', 'uint32_t':'unsigned int', 'int32_t':'int',
        'uint16_t':'unsigned __int16', 'int16_t':'__int16', 'uint8_t':'unsigned __int8', 'int8_t':'__int8',
        'bool':'bool', 'void':'void', 'float':'float', 'double':'double', 'char':'char',
        'DWORD':'unsigned long', 'WORD':'unsigned __int16', 'BYTE':'unsigned __int8',
        'BOOL':'int', 'LPVOID':'void *', 'PVOID':'void *', 'HANDLE':'void *', 'HWND':'void *',
        'HDC':'void *', 'HINSTANCE':'void *', 'HMODULE':'void *', 'HRESULT':'long',
        'size_t':'unsigned int', 'UINT':'unsigned int', 'INT':'int', 'LONG':'int', 'ULONG':'unsigned int',
        'SHORT':'__int16', 'WPARAM':'unsigned int', 'LPARAM':'int',
    }
    if t in m: return m[t]
    if t.endswith('*'): return normalize_hpp_type(t[:-1].strip()) + ' *'
    return t

def normalize_ida_type(t: str) -> str:
    t = t.strip()
    t = re.sub(r'^const\s+', '', t)
    m = {
        '_DWORD':'int', '_WORD':'unsigned __int16', '_BYTE':'unsigned __int8',
        'BOOL':'int', 'LPVOID':'void *', 'PVOID':'void *', 'HANDLE':'void *', 'HWND':'void *',
        'HDC':'void *', 'int':'int', 'unsigned int':'unsigned int',
        'unsigned __int8':'unsigned __int8', 'unsigned __int16':'unsigned __int16',
        'unsigned __int32':'unsigned int', '__int8':'__int8', '__int16':'__int16', '__int32':'int',
        'bool':'bool', 'void':'void', 'float':'float', 'double':'double', 'char':'char',
        'short':'__int16', 'unsigned short':'unsigned __int16', 'long':'int', 'unsigned long':'unsigned int',
        'size_t':'unsigned int', 'HRESULT':'int', 'UINT':'unsigned int', 'INT':'int',
        'WPARAM':'unsigned int', 'LPARAM':'int',
    }
    if t in m: return m[t]
    if t.endswith('*'):
        parts = t.rsplit('*',1)
        base = parts[0].strip()
        return (m.get(base, base)) + ' *'
    if t == 'const char *': return 'char *'
    return t

# ═══════════════════════════════════════════════════════════
# Signature parsing
# ═══════════════════════════════════════════════════════════

def parse_hpp_params(full_sig: str) -> list:
    m = re.search(r'\(([^)]*(?:\([^)]*\)[^)]*)*)\)', full_sig)
    if not m: return []
    ps = m.group(1).strip()
    if not ps or ps == 'void': return []
    params, depth, cur = [], 0, []
    for ch in ps:
        if ch in '(<{': depth += 1
        elif ch in ')>}': depth -= 1
        if ch == ',' and depth == 0:
            params.append(''.join(cur).strip()); cur = []
        else: cur.append(ch)
    if cur: params.append(''.join(cur).strip())
    types = []
    for p in params:
        p = p.strip()
        if not p: continue
        p = re.sub(r'\s*=.+$','',p).strip()
        toks = p.split()
        if len(toks) == 1: types.append(toks[0])
        else:
            kw = {'const','unsigned','signed','struct','class','enum','volatile','long','short','static'}
            last = toks[-1]
            if last in kw or last == '*': types.append(' '.join(toks))
            elif len(toks)>=2 and toks[-2] in kw: types.append(' '.join(toks))
            elif last[0].isupper() and len(toks)==2: types.append(toks[0])
            elif len(toks)>=3 and toks[-2] in {'*','&'}: types.append(' '.join(toks[:-1]))
            else: types.append(' '.join(toks[:-1]))
    return types

def parse_hpp_ret(full_sig: str) -> str:
    sig = full_sig.strip()
    sig = re.sub(r'^(virtual|static|inline|explicit|constexpr|__stdcall|__cdecl|__fastcall|__thiscall)\s+','',sig)
    pi = sig.find('(')
    if pi < 0: return 'void'
    bp = sig[:pi].strip()
    toks = bp.split()
    if len(toks) <= 1: return ''
    fn = toks[-1]
    if fn == 'operator' and len(toks)>=2: return ' '.join(toks[:-2]) if len(toks)>=3 else ''
    if fn.startswith('operator') or fn.startswith('~'): return ''
    if fn in toks and toks[0]==fn: return ''
    return ' '.join(toks[:-1])

# ═══════════════════════════════════════════════════════════
# Type comparison
# ═══════════════════════════════════════════════════════════

def types_match(a: str, b: str) -> bool:
    if a == b: return True
    if '*' in a and '*' in b:
        ab = a.replace('*','').strip(); bb = b.replace('*','').strip()
        if ab == bb: return True
        if not ab or not bb or ab in ('void','') or bb in ('void',''): return True
    i32 = {'int','unsigned int','__int32','unsigned __int32','long','unsigned long'}
    if a in i32 and b in i32: return ('unsigned' in a) == ('unsigned' in b)
    if a == 'bool' and b in ('bool','int'): return True
    if a == 'unsigned __int8' and b in ('unsigned __int8','char'): return True
    if a == 'unsigned __int16' and b in ('unsigned __int16','unsigned short'): return True
    if a == '__int8' and b in ('__int8','char'): return True
    if a == '__int16' and b in ('__int16','short'): return True
    if a in ('float','double') and b in ('float','double'): return a == b
    if not any(c in a for c in '*&[]()') and not any(c in b for c in '*&[]()'):
        if a.lower() == b.lower(): return True
    return False

def compare_params(hpp_types, ida_types, is_thiscall):
    eff = ida_types
    if is_thiscall: eff = ida_types[1:] if len(ida_types)>1 else []
    if not hpp_types and not eff: return 1.0, 0, 1
    if not hpp_types or not eff: return 0.0, 0, max(len(hpp_types),len(eff))
    hn = [normalize_hpp_type(t) for t in hpp_types]
    ii = [normalize_ida_type(t) for t in eff]
    matches = 0
    mx = max(len(hn), len(ii))
    for i in range(min(len(hn), len(ii))):
        if types_match(hn[i], ii[i]): matches += 1
        else:
            h = hn[i]; it = ii[i]
            if ('*' in h and h.replace('*','').strip().lower()==it.lower()) or \
               ('*' in it and it.replace('*','').strip().lower()==h.lower()):
                matches += 0.5
    pen = abs(len(hn)-len(ii)) * 0.20
    return max(0.0, (matches/mx) - pen), matches, mx

def ret_score(hpp_ret, ida_ret):
    if not hpp_ret and not ida_ret: return 1.0
    hn = normalize_hpp_type(hpp_ret); ii = normalize_ida_type(ida_ret)
    if types_match(hn, ii): return 1.0
    if hn == 'void' and ii in ('void',''): return 1.0
    if hn.lower() == ii.lower(): return 0.8
    return 0.0

# ═══════════════════════════════════════════════════════════
# Candidate builder
# ═══════════════════════════════════════════════════════════

def build_candidate(addr, ida_func, match_type, hpp_pc, hpp_types, hpp_ret, class_name):
    ida_pc = ida_func['param_count']
    ida_types = ida_func.get('param_types',[])
    ida_ret = ida_func.get('return_type','')
    is_tc = ida_func.get('is_thiscall', False)
    has_cls = bool(class_name)
    eff_pc = ida_pc
    if is_tc and has_cls: eff_pc = max(0, ida_pc-1)
    
    ps = 1.0 if hpp_pc==eff_pc else (0.6 if abs(hpp_pc-eff_pc)<=1 else (0.3 if abs(hpp_pc-eff_pc)<=2 else 0.0))
    ts, _, _ = compare_params(hpp_types, ida_types, is_tc and has_cls)
    rs = ret_score(hpp_ret, ida_ret)
    conf = ps*0.40 + ts*0.40 + rs*0.20
    
    return {
        'ida_addr': addr,
        'confidence': round(conf,3),
        'match_type': match_type,
        'param_score': round(ps,3), 'type_score': round(ts,3), 'ret_score': round(rs,3),
        'ida_name': ida_func.get('name',''),
        'ida_param_count': ida_pc, 'ida_effective_params': eff_pc,
        'hpp_param_count': hpp_pc,
        'is_thiscall': is_tc, 'thiscall_adjusted': has_cls and is_tc,
        'hpp_return': hpp_ret, 'ida_return': ida_ret,
        'hpp_param_types': hpp_types, 'ida_param_types': ida_types,
    }

# ═══════════════════════════════════════════════════════════
# Name utilities
# ═══════════════════════════════════════════════════════════

def name_tokens(name: str) -> list:
    """Split CamelCase/PascalCase/underscore name into tokens. Returns ordered list."""
    name = name.replace('::','_').replace(' ','_')
    # Split on _ and camelCase boundaries
    parts = []
    for segment in name.split('_'):
        if not segment: continue
        words = re.findall(r'[A-Z]?[a-z]+|[A-Z]+(?=[A-Z][a-z]|\d|\b|[A-Z]$)', segment)
        if not words:
            words = [segment.lower()]
        parts.extend(words)
    return [w.lower() for w in parts if len(w)>=2]

def alternate_names(method_name: str) -> list:
    """Generate alternate name orderings (VerbNoun → NounVerb)."""
    toks = re.findall(r'[A-Z][a-z]+|[A-Z]+(?=[A-Z]|$)', method_name)
    if len(toks) < 2: return []
    alts = []
    # Reverse
    alts.append(''.join(reversed(toks)))
    # Rotations
    for i in range(1, len(toks)):
        alts.append(''.join(toks[i:]+toks[:i]))
    return alts

# ═══════════════════════════════════════════════════════════
# Main
# ═══════════════════════════════════════════════════════════

def main():
    base = Path(__file__).parent
    
    print("Loading data...")
    with open(base/'missing_functions.json','r',encoding='utf-8') as f:
        missing = json.load(f)
    with open(base/'ida_function_db.json','r',encoding='utf-8') as f:
        ida_db = json.load(f)
    print(f"  {len(missing)} hpp declarations, {len(ida_db)} IDA functions")
    
    # ── Build indexes ──
    print("Indexing IDA functions...")
    by_name = {}               # full_name → [addrs]
    by_lastname = defaultdict(list)  # method_name → [addrs]
    by_global = {}             # global_name → [addrs]
    by_token = defaultdict(list)     # token → [addrs]
    
    for addr, func in ida_db.items():
        name = func['name']
        if name.startswith('sub_') or name.startswith('??') or name.startswith('j_'):
            continue
        
        by_name.setdefault(name, []).append(addr)
        
        if '::' in name:
            mn = name.rsplit('::', 1)[1]
            by_lastname[mn].append(addr)
        else:
            by_global.setdefault(name, []).append(addr)
        
        # Token index for fuzzy matching
        for t in name_tokens(name):
            by_token[t].append(addr)
    
    print(f"  Indexed: {len(by_name)} names, {len(by_lastname)} methods, {len(by_global)} globals, {len(by_token)} tokens")
    
    # ── Match each function ──
    results = {}
    stats = {
        'total': len(missing),
        'p1a_exact': 0, 'p1b_same_method': 0, 'p1c_alt_name': 0, 'p1d_token_overlap': 0,
        'no_match': 0, 'total_candidates': 0,
    }
    
    for i, func in enumerate(missing):
        if (i + 1) % 500 == 0:
            matched = stats['p1a_exact'] + stats['p1b_same_method'] + stats['p1c_alt_name'] + stats['p1d_token_overlap']
            print(f"  Processing {i+1}/{len(missing)} (matched {matched} so far)...")
        
        cn = func.get('class_name', '')
        mn = func.get('method_name', '')
        sig = func.get('full_signature', '')
        hpc = func.get('param_count', 0)
        hret = func.get('return_type', '')
        htypes = parse_hpp_params(sig)
        
        hpp_key = f"{cn}::{mn}" if cn else mn
        if len(hpp_key) > 200:
            hpp_key = hpp_key[:200]
        
        candidates = []
        seen_addrs = set()
        
        # ── P1a: Exact name match ──
        if cn:
            target = f'{cn}::{mn}'
            for a in by_name.get(target, []):
                seen_addrs.add(a)
                c = build_candidate(a, ida_db[a], 'exact_member', hpc, htypes, hret, cn)
                if c['confidence'] >= 0.20:
                    candidates.append(c)
        else:
            for a in by_global.get(mn, []):
                if a not in seen_addrs:
                    seen_addrs.add(a)
                    c = build_candidate(a, ida_db[a], 'exact_global', hpc, htypes, hret, cn)
                    if c['confidence'] >= 0.20:
                        candidates.append(c)
            for a in by_name.get(mn, []):
                if a not in seen_addrs:
                    seen_addrs.add(a)
                    c = build_candidate(a, ida_db[a], 'exact_global', hpc, htypes, hret, cn)
                    if c['confidence'] >= 0.20:
                        candidates.append(c)
        
        # ── P1b: Same method name, any class ──
        for a in by_lastname.get(mn, []):
            if a in seen_addrs:
                continue
            seen_addrs.add(a)
            iname = ida_db[a]['name']
            if cn and f'{cn}::' in iname:
                mt = 'exact_member'
            elif cn:
                mt = 'same_method'
            else:
                mt = 'exact_global'
            c = build_candidate(a, ida_db[a], mt, hpc, htypes, hret, cn)
            threshold = 0.20 if mt in ('exact_member', 'exact_global') else 0.30
            if c['confidence'] >= threshold:
                candidates.append(c)
        
        # ── P1c: Alternate name ordering ──
        if not candidates:
            for alt in alternate_names(mn):
                for a in by_global.get(alt, []):
                    if a not in seen_addrs:
                        seen_addrs.add(a)
                        c = build_candidate(a, ida_db[a], 'alt_name', hpc, htypes, hret, cn)
                        if c['confidence'] >= 0.50:
                            candidates.append(c)
                for a in by_name.get(alt, []):
                    if a not in seen_addrs:
                        seen_addrs.add(a)
                        c = build_candidate(a, ida_db[a], 'alt_name', hpc, htypes, hret, cn)
                        if c['confidence'] >= 0.50:
                            candidates.append(c)
        
        # ── P1d: Token overlap (multi-token names only, high bar) ──
        if not candidates and len(mn) >= 5:
            hpp_tokens = name_tokens(mn)
            if len(hpp_tokens) >= 2:
                # Score each IDA function by token overlap
                token_scores = defaultdict(float)
                for t in hpp_tokens:
                    for a in by_token.get(t, []):
                        token_scores[a] += 1
                
                # Require ≥2 tokens AND ≥60% of hpp tokens matched
                min_tokens = max(2, int(len(hpp_tokens) * 0.60))
                for a, tscore in token_scores.items():
                    if tscore >= min_tokens and a not in seen_addrs:
                        seen_addrs.add(a)
                        c = build_candidate(a, ida_db[a], 'token_overlap', hpc, htypes, hret, cn)
                        # Higher threshold: token overlap is less reliable
                        conf_threshold = 0.50
                        if c['confidence'] >= conf_threshold:
                            candidates.append(c)
        
        # ── Finalize ──
        if candidates:
            candidates.sort(key=lambda x: x['confidence'], reverse=True)
            results[hpp_key] = candidates[:5]
            mt = candidates[0]['match_type']
            if mt in ('exact_member', 'exact_global'):
                stats['p1a_exact'] += 1
            elif mt == 'same_method':
                stats['p1b_same_method'] += 1
            elif mt == 'alt_name':
                stats['p1c_alt_name'] += 1
            else:
                stats['p1d_token_overlap'] += 1
            stats['total_candidates'] += len(candidates[:5])
        else:
            results[hpp_key] = [{'status': 'no_match', 'confidence': 0.0}]
            stats['no_match'] += 1
    
    # ── Aggregate stats ──
    total_matched = stats['p1a_exact'] + stats['p1b_same_method'] + stats['p1c_alt_name'] + stats['p1d_token_overlap']
    
    # Confidence distribution
    high = sum(1 for v in results.values() if v[0].get('confidence', 0) >= 0.80)
    med = sum(1 for v in results.values() if 0.50 <= v[0].get('confidence', 0) < 0.80)
    low = sum(1 for v in results.values() if 0 < v[0].get('confidence', 0) < 0.50)
    
    # Thiscall adjusted
    tc_adj = sum(1 for v in results.values() if v[0].get('thiscall_adjusted'))
    
    # ── Write output ──
    output = {
        'metadata': {
            'total_missing': stats['total'],
            'total_matched': total_matched,
            'total_no_match': stats['no_match'],
            'total_candidates': stats['total_candidates'],
            'pass_breakdown': {
                'p1a_exact_member_global': stats['p1a_exact'],
                'p1b_same_method_diff_class': stats['p1b_same_method'],
                'p1c_alternate_name': stats['p1c_alt_name'],
                'p1d_token_overlap': stats['p1d_token_overlap'],
            },
            'confidence_distribution': {
                'high_gte_0.80': high,
                'medium_0.50_to_0.79': med,
                'low_lt_0.50': low,
            },
            'thiscall_adjusted_count': tc_adj,
            'scoring_formula': 'param_count(40%) + type_match(40%) + return_match(20%)',
            'thiscall_note': 'IDA thiscall functions have 1 extra parameter (this/ecx). When matching class methods, IDA param_count is reduced by 1.',
            'type_mappings': 'int↔_DWORD, void*↔LPVOID/PVOID, bool↔BOOL, float↔_DWORD(4 bytes in IDA signature), etc.',
            'match_quality_note': 'Candidates are PROPOSALS only. T6 cross-validates via IDA decompile. Expect false positives especially in token_overlap pass.',
        },
        'results': results
    }
    
    out_path = base / 'sig_match_results.json'
    with open(out_path, 'w', encoding='utf-8') as f:
        json.dump(output, f, ensure_ascii=False, indent=2)
    
    sz_kb = os.path.getsize(out_path) / 1024
    
    print(f"\n{'='*60}")
    print(f"  sig_match_results.json  ({sz_kb:.0f} KB)")
    print(f"{'='*60}")
    print(f"  Total missing:        {stats['total']}")
    print(f"  Total matched:        {total_matched} ({100*total_matched/stats['total']:.0f}%)")
    print(f"    P1a exact:          {stats['p1a_exact']}")
    print(f"    P1b same_method:    {stats['p1b_same_method']}")
    print(f"    P1c alt_name:       {stats['p1c_alt_name']}")
    print(f"    P1d token_overlap:  {stats['p1d_token_overlap']}")
    print(f"  No match:             {stats['no_match']}")
    print(f"  Total candidates:     {stats['total_candidates']}")
    print(f"  Confidence: H={high} M={med} L={low}")
    print(f"  Thiscall adjusted:    {tc_adj}")

if __name__ == '__main__':
    main()
