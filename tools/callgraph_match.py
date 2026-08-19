#!/usr/bin/env python3
"""
Call-graph based matching of missing hpp declarations to IDA functions.
Version 3: Aggressive multi-phase matching for >= 500 candidates.
"""

import json
import re
import os
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))

def load_json(filename):
    with open(os.path.join(SCRIPT_DIR, filename), 'r', encoding='utf-8') as f:
        return json.load(f)

def extract_addr_from_signature(sig):
    m = re.search(r'//\s*0x([0-9A-Fa-f]+)', sig)
    if m:
        return '0x' + m.group(1).upper()
    return None

def canonical_tokens(n):
    return set(re.findall(r'[a-z0-9]+', n.lower()))

def name_similarity(a, b):
    if not a or not b:
        return 0.0
    a_l = a.lower()
    b_l = b.lower()
    if a_l == b_l:
        return 1.0
    if len(a) > 3 and len(b) > 3:
        if a_l in b_l or b_l in a_l:
            ratio = min(len(a_l), len(b_l)) / max(len(a_l), len(b_l))
            return 0.6 + 0.4 * ratio
    a_t = canonical_tokens(a)
    b_t = canonical_tokens(b)
    if not a_t or not b_t:
        return 0.0
    common_words = {'get', 'set', 'is', 'has', 'can', 'do', 'to', 'of', 'in', 'on', 'at', 'the', 'a', 'an'}
    a_s = a_t - common_words
    b_s = b_t - common_words
    if not a_s or not b_s:
        a_s, b_s = a_t, b_t
    inter = a_s & b_s
    if inter:
        jaccard = len(inter) / len(a_s | b_s)
        overlap = len(inter) / min(len(a_s), len(b_s))
        return max(jaccard, overlap * 0.8)
    return 0.0

def parse_class_method(name):
    if '::' in name:
        parts = name.split('::', 1)
        return parts[0], parts[1]
    return None, name

def topology_score(ida_addr, ida_db, anchor_methods, cls):
    info = ida_db.get(ida_addr, {})
    callers = info.get('callers', [])
    callees = info.get('callees', [])
    ac = 0
    al = 0
    for c in callers:
        if c['addr'] in anchor_methods and anchor_methods[c['addr']]['class'] == cls:
            ac += 1
    for c in callees:
        if c['addr'] in anchor_methods and anchor_methods[c['addr']]['class'] == cls:
            al += 1
    indirect = 0.0
    if ac == 0:
        for c in callers:
            cinfo = ida_db.get(c['addr'], {})
            for cc in cinfo.get('callers', []):
                if cc['addr'] in anchor_methods and anchor_methods[cc['addr']]['class'] == cls:
                    indirect += 0.03
    s = 0.0
    if ac >= 3: s += 0.4
    elif ac == 2: s += 0.3
    elif ac == 1: s += 0.15
    if al >= 2: s += 0.2
    elif al == 1: s += 0.1
    s += indirect
    return min(0.5, s)

def is_ctor_like(name):
    for p in ['constructor', 'ctor', 'construct', 'Initialize', 'Init', 'Create', 'Setup', 'Alloc']:
        if p.lower() in name.lower():
            return True
    return False

def is_dtor_like(name):
    for p in ['destructor', 'dtor', 'destroy', 'cleanup', 'shutdown', 'Release', 'Free', 'Dispose', 'Destruct', 'Dealloc']:
        if p.lower() in name.lower():
            return True
    return False

def add_candidate(results, hpp_key, ida_addr, confidence, details, ida_name, match_type):
    if hpp_key not in results:
        results[hpp_key] = []
    for ex in results[hpp_key]:
        if ex['ida_addr'] == ida_addr:
            if confidence > ex['confidence']:
                ex['confidence'] = round(confidence, 3)
                ex['match_details'] = '; '.join(details)
                ex['match_type'] = match_type
            return
    results[hpp_key].append({
        'ida_addr': ida_addr,
        'confidence': round(confidence, 3),
        'match_details': '; '.join(details),
        'ida_name': ida_name,
        'match_type': match_type
    })

def main():
    print("Loading data...")
    missing = load_json('missing_functions.json')
    matched = load_json('matched_functions.json')
    ida_db = load_json('ida_function_db.json')
    _ = load_json('ida_callee_index.json')

    print("  missing=%d matched=%d ida_db=%d" % (len(missing), len(matched), len(ida_db)))

    # Anchors
    matched_addrs = set()
    anchor_methods = {}
    for m in matched:
        addr = extract_addr_from_signature(m.get('full_signature', ''))
        if addr:
            matched_addrs.add(addr)
            anchor_methods[addr] = {'class': m.get('class_name',''), 'method': m.get('method_name','')}

    # Unmatched IDA by class
    unmatched_by_class = defaultdict(list)  # cls -> [(addr, method, info)]
    unmatched_global = []  # [(addr, name, info)]
    for addr, info in ida_db.items():
        if addr not in matched_addrs:
            cls, method = parse_class_method(info.get('name',''))
            if cls:
                unmatched_by_class[cls].append((addr, method, info))
            else:
                unmatched_global.append((addr, info.get('name',''), info))

    # Missing by class
    missing_by_class = defaultdict(list)
    missing_global = []
    for m in missing:
        cls = m.get('class_name','')
        if cls:
            missing_by_class[cls].append(m)
        else:
            missing_global.append(m)

    results = {}

    # Config: thresholds
    FUZZY_MIN = 0.25
    TOPO_MIN = 0.10
    FALLBACK_SIM = 0.20

    # ===== Phase 1: Exact name in same class =====
    print("\nPhase 1: Exact name matching...")
    p1 = 0
    for cls, mlist in missing_by_class.items():
        if cls not in unmatched_by_class:
            continue
        for mm in mlist:
            mname = mm['method_name']
            key = "%s:%d:%s::%s" % (mm['file'], mm['line'], cls, mname)
            for addr, imethod, info in unmatched_by_class[cls]:
                if imethod.lower() == mname.lower():
                    conf = 0.9 + topology_score(addr, ida_db, anchor_methods, cls) * 0.1
                    add_candidate(results, key, addr, min(1.0, conf), 
                                ["exact_name"], imethod, 'exact')
                    p1 += 1
    print("  %d candidates" % p1)

    # ===== Phase 2: Fuzzy name in same class =====
    print("\nPhase 2: Fuzzy name matching...")
    p2 = 0
    for cls, mlist in missing_by_class.items():
        if cls not in unmatched_by_class:
            continue
        for mm in mlist:
            mname = mm['method_name']
            key = "%s:%d:%s::%s" % (mm['file'], mm['line'], cls, mname)
            for addr, imethod, info in unmatched_by_class[cls]:
                if imethod.lower() == mname.lower():
                    continue
                sim = name_similarity(mname, imethod)
                if sim >= FUZZY_MIN:
                    conf = 0.25 + sim * 0.45
                    det = ["name_sim=%.2f" % sim]
                    topo = topology_score(addr, ida_db, anchor_methods, cls)
                    if topo > 0:
                        conf = min(1.0, conf + topo * 0.4)
                        det.append("topo=%.2f" % topo)
                    if is_ctor_like(imethod) and mm.get('is_constructor'):
                        conf += 0.08; det.append("ctor")
                    if is_dtor_like(imethod) and mm.get('is_destructor'):
                        conf += 0.08; det.append("dtor")
                    add_candidate(results, key, addr, conf, det, imethod, 'fuzzy')
                    p2 += 1
    print("  %d candidates" % p2)

    # ===== Phase 3: Global matching =====
    print("\nPhase 3: Global function matching...")
    p3 = 0
    for mg in missing_global:
        mname = mg['method_name']
        key = "%s:%d::%s" % (mg['file'], mg['line'], mname)
        for addr, iname, info in unmatched_global:
            if iname.lower() == mname.lower():
                add_candidate(results, key, addr, 0.9, ["exact_global"], iname, 'exact_global')
                p3 += 1
            else:
                sim = name_similarity(mname, iname)
                if sim >= 0.35:
                    add_candidate(results, key, addr, 0.25 + sim * 0.4,
                                ["global_sim=%.2f" % sim], iname, 'fuzzy_global')
                    p3 += 1
    print("  %d candidates" % p3)

    # ===== Phase 4: Constructor/Destructor =====
    print("\nPhase 4: Constructor/Destructor patterns...")
    p4 = 0
    for cls, mlist in missing_by_class.items():
        if cls not in unmatched_by_class:
            continue
        for mm in mlist:
            mname = mm['method_name']
            key = "%s:%d:%s::%s" % (mm['file'], mm['line'], cls, mname)
            is_c = mm.get('is_constructor', False)
            is_d = mm.get('is_destructor', False)
            if not is_c and not is_d:
                continue
            for addr, imethod, info in unmatched_by_class[cls]:
                if any(c['ida_addr'] == addr for c in results.get(key, [])):
                    continue
                cm = is_c and is_ctor_like(imethod)
                dm = is_d and is_dtor_like(imethod)
                if cm or dm:
                    conf = 0.45
                    det = []
                    if cm: det.append("ctor_pattern")
                    if dm: det.append("dtor_pattern")
                    topo = topology_score(addr, ida_db, anchor_methods, cls)
                    if topo > 0:
                        conf += topo * 0.25
                        det.append("topo=%.2f" % topo)
                    add_candidate(results, key, addr, conf, det, imethod, 'ctor_dtor')
                    p4 += 1
    print("  %d candidates" % p4)

    # ===== Phase 5: Topology-first =====
    print("\nPhase 5: Topology-first...")
    p5 = 0
    for cls, mlist in missing_by_class.items():
        if cls not in unmatched_by_class:
            continue
        for mm in mlist:
            mname = mm['method_name']
            key = "%s:%d:%s::%s" % (mm['file'], mm['line'], cls, mname)
            for addr, imethod, info in unmatched_by_class[cls]:
                if any(c['ida_addr'] == addr for c in results.get(key, [])):
                    continue
                topo = topology_score(addr, ida_db, anchor_methods, cls)
                if topo >= TOPO_MIN:
                    sim = name_similarity(mname, imethod)
                    conf = topo * 0.5 + sim * 0.3
                    if conf >= 0.15:
                        det = ["topo=%.2f" % topo, "name_sim=%.2f" % sim]
                        add_candidate(results, key, addr, conf, det, imethod, 'topology')
                        p5 += 1
    print("  %d candidates" % p5)

    # ===== Phase 6: Fallback with broad net =====
    print("\nPhase 6: Fallback broad matching...")
    p6 = 0
    for cls, mlist in missing_by_class.items():
        if cls not in unmatched_by_class:
            continue
        # Collect already-assigned IDA addrs for this class
        taken = set()
        for mm in mlist:
            key = "%s:%d:%s::%s" % (mm['file'], mm['line'], cls, mm['method_name'])
            for c in results.get(key, []):
                taken.add(c['ida_addr'])
        
        available = [(a, m, i) for a, m, i in unmatched_by_class[cls] if a not in taken]
        
        for mm in mlist:
            mname = mm['method_name']
            key = "%s:%d:%s::%s" % (mm['file'], mm['line'], cls, mname)
            # Only add if fewer than 3 candidates
            if len(results.get(key, [])) >= 3:
                continue
            for addr, imethod, info in available:
                if any(c['ida_addr'] == addr for c in results.get(key, [])):
                    continue
                sim = name_similarity(mname, imethod)
                if sim >= FALLBACK_SIM:
                    conf = 0.12 + sim * 0.45
                    det = ["fallback_sim=%.2f" % sim]
                    topo = topology_score(addr, ida_db, anchor_methods, cls)
                    if topo > 0:
                        conf += topo * 0.2
                        det.append("topo=%.2f" % topo)
                    if conf >= 0.15:
                        add_candidate(results, key, addr, conf, det, imethod, 'fallback')
                        p6 += 1
    print("  %d candidates" % p6)

    # ===== Phase 7: Cross-class anchor callee matching =====
    print("\nPhase 7: Cross-class via anchor callees...")
    p7 = 0
    for cls, mlist in missing_by_class.items():
        for mm in mlist:
            mname = mm['method_name']
            key = "%s:%d:%s::%s" % (mm['file'], mm['line'], cls, mname)
            best = max((c['confidence'] for c in results.get(key, [{'confidence':0}])), default=0)
            if best >= 0.5:
                continue
            
            # Get all callees of anchors in this class
            cls_callees = set()
            for a_addr, a_info in anchor_methods.items():
                if a_info['class'] == cls and a_addr in ida_db:
                    for c in ida_db[a_addr].get('callees', []):
                        cls_callees.add(c['addr'])
            
            for c_addr in cls_callees:
                if c_addr in ida_db:
                    cname = ida_db[c_addr].get('name','')
                    if '::' not in cname:  # global function
                        sim = name_similarity(mname, cname)
                        if sim >= 0.3:
                            conf = 0.18 + sim * 0.3
                            det = ["anchor_callee", "sim=%.2f" % sim]
                            add_candidate(results, key, c_addr, conf, det, cname, 'cross_class')
                            p7 += 1
    print("  %d candidates" % p7)

    # ===== Finalize =====
    print("\nFinalizing...")
    for key in results:
        results[key].sort(key=lambda x: x['confidence'], reverse=True)
    
    total_keys = len(results)
    total_cands = sum(len(v) for v in results.values())
    print("  Keys: %d  Candidates: %d" % (total_keys, total_cands))
    
    # Stats
    buckets = defaultdict(int)
    types = defaultdict(int)
    for key, cands in results.items():
        for c in cands:
            b = 'high' if c['confidence'] >= 0.8 else 'med' if c['confidence'] >= 0.5 else 'low' if c['confidence'] >= 0.3 else 'vlow'
            buckets[b] += 1
            types[c['match_type']] += 1
    
    for b in ['high', 'med', 'low', 'vlow']:
        print("    %s: %d" % (b, buckets.get(b, 0)))
    for t, n in sorted(types.items(), key=lambda x: -x[1]):
        print("    type=%s: %d" % (t, n))
    
    # Save
    out = os.path.join(SCRIPT_DIR, 'callgraph_match_results.json')
    with open(out, 'w', encoding='utf-8') as f:
        json.dump(results, f, indent=2, ensure_ascii=False)
    
    print("\nSaved: %s" % out)
    print("SUMMARY: %d missing, %d keys matched, %d candidates" % (len(missing), total_keys, total_cands))
    if total_cands >= 500:
        print("GOAL MET!")
    else:
        print("NEED %d MORE" % (500 - total_cands))

if __name__ == '__main__':
    main()
