"""
T6: Cross-validate and merge results from T3 (signature), T4 (call-graph), T5 (git history).
For each missing hpp function, assign final confidence: HIGH, MEDIUM, LOW, CONFLICT, UNMATCHABLE.
Checks ALL T3 candidates (not just top) for agreement with call-graph.
"""
import json
import os
import re
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))

def load_json(path):
    with open(path, 'r', encoding='utf-8') as f:
        return json.load(f)

def build_key_t3(entry):
    cls = entry['class_name']
    method = entry['method_name']
    return f"{cls}::{method}" if cls else method

def build_key_t4(entry):
    file = entry['file']
    line = entry['line']
    cls = entry['class_name']
    method = entry['method_name']
    name = f"{cls}::{method}" if cls else method
    return f"{file}:{line}:{name}"

def build_key_t5(entry):
    cls = entry['class_name']
    method = entry['method_name']
    return f"{cls}::{method}" if cls else method

def extract_addr(name):
    m = re.search(r'sub_([0-9A-Fa-f]+)', name)
    return f"0x{m.group(1)}" if m else None

def get_t3_candidates(t3_results, key):
    cands = t3_results.get(key, [])
    return sorted(
        [c for c in cands if 'ida_addr' in c and c.get('status') != 'no_match'],
        key=lambda x: x['confidence'], reverse=True
    )

def get_t4_top(t4_results, key):
    cands = t4_results.get(key, [])
    best = None
    for c in cands:
        if 'ida_addr' in c:
            if best is None:
                best = c
            elif c.get('match_type') == 'exact' and best.get('match_type') != 'exact':
                best = c
            elif c['confidence'] > best['confidence']:
                best = c
    return best

def get_t5_candidate(t5_data, key):
    history = t5_data.get('new_to_old', {}).get(key, [])
    for old_name in history:
        addr = extract_addr(old_name)
        if addr:
            return addr, old_name
    return None, history[0] if history else None

def classify_unmatchable(entry, has_t3, has_t4, has_t5):
    reasons = []
    sig = entry.get('full_signature', '')
    if '= default' in sig:
        reasons.append('defaulted_special_member')
    elif '= delete' in sig:
        reasons.append('deleted_function')
    elif 'constexpr' in sig:
        reasons.append('constexpr_no_runtime')
    elif 'inline' in sig and entry.get('param_count', 0) <= 2:
        reasons.append('inline_likely_inlined')
    if entry.get('is_constructor') and ('default' in sig or not sig.strip()):
        reasons.append('default_ctor')
    if entry.get('is_destructor') and ('default' in sig or not sig.strip()):
        reasons.append('default_dtor')
    if not has_t3 and not has_t4 and not has_t5:
        reasons.append('no_candidates_from_any_strategy')
    else:
        if not has_t4: reasons.append('no_callgraph_match')
        if not has_t3: reasons.append('no_signature_match')
        if not has_t5: reasons.append('no_git_history')
    if not reasons:
        reasons.append('unknown')
    return reasons

def main():
    print("Loading...")
    t1 = load_json(os.path.join(SCRIPT_DIR, 'missing_functions.json'))
    t3 = load_json(os.path.join(SCRIPT_DIR, 'sig_match_results.json'))
    t4 = load_json(os.path.join(SCRIPT_DIR, 'callgraph_match_results.json'))
    t5 = load_json(os.path.join(SCRIPT_DIR, 'git_name_history.json'))
    t3r = t3['results']

    results = {}
    stats = defaultdict(int)
    ureasons = defaultdict(int)

    for entry in t1:
        t3_key = build_key_t3(entry)
        t4_key = build_key_t4(entry)
        t5_key = build_key_t5(entry)
        hpp_key = f"{entry['file']}:{entry['line']}:{t3_key}"

        t3_cands = get_t3_candidates(t3r, t3_key)
        t4_top = get_t4_top(t4, t4_key)
        t5_addr, t5_old = get_t5_candidate(t5, t5_key)

        t4_addr = t4_top['ida_addr'] if t4_top else None
        t4_conf = t4_top['confidence'] if t4_top else 0
        t4_type = t4_top.get('match_type') if t4_top else None

        best_sig = t3_cands[0] if t3_cands else None
        sig_addr = best_sig['ida_addr'] if best_sig else None
        sig_conf = best_sig['confidence'] if best_sig else 0

        # Check agreement across ALL T3 candidates
        sig_any_agrees_cg = any(c['ida_addr'] == t4_addr for c in t3_cands) if t4_addr else False
        sig_any_agrees_git = any(c['ida_addr'] == t5_addr for c in t3_cands) if t5_addr else False

        strategies = []
        if t4_addr: strategies.append('callgraph')
        if t5_addr: strategies.append('git')
        if sig_addr: strategies.append('signature')

        has_cg = t4_addr is not None
        has_git = t5_addr is not None
        has_sig = sig_addr is not None

        # Assign confidence
        if not strategies:
            conf, final = 'UNMATCHABLE', None

        elif has_cg and (sig_any_agrees_cg or (has_git and t4_addr == t5_addr)):
            conf, final = 'HIGH', t4_addr

        elif has_cg and has_sig and sig_conf >= 0.5:
            conf, final = 'CONFLICT', t4_addr

        elif has_cg and has_git and t4_addr != t5_addr:
            conf, final = 'CONFLICT', t4_addr

        elif has_cg:
            conf, final = 'MEDIUM', t4_addr

        elif has_git and has_sig and (sig_any_agrees_git or t5_addr == sig_addr):
            conf, final = 'MEDIUM', (t5_addr if sig_any_agrees_git else sig_addr)

        elif has_sig:
            conf, final = 'LOW', sig_addr

        elif has_git:
            conf, final = 'LOW', t5_addr

        else:
            conf, final = 'UNMATCHABLE', None

        stats[conf] += 1

        # Build result
        ev = {
            'callgraph': {
                'ida_addr': t4_addr,
                'ida_name': t4_top.get('ida_name'),
                'confidence': t4_conf,
                'match_type': t4_type,
                'match_details': t4_top.get('match_details')
            } if t4_top else None,
            'signature': {
                'top_ida_addr': sig_addr,
                'top_ida_name': best_sig.get('ida_name') if best_sig else None,
                'top_confidence': sig_conf,
                'top_match_type': best_sig.get('match_type') if best_sig else None,
                'total_candidates': len(t3_cands),
                'any_agrees_with_callgraph': sig_any_agrees_cg,
                'any_agrees_with_git': sig_any_agrees_git
            } if best_sig else None,
            'git': {
                'ida_addr': t5_addr,
                'old_name': t5_old
            } if t5_addr else None
        }

        result = {
            'hpp_file': entry['file'],
            'hpp_line': entry['line'],
            'class_name': entry['class_name'],
            'method_name': entry['method_name'],
            'full_signature': entry['full_signature'],
            'final_confidence': conf,
            'final_ida_addr': final,
            'strategies_used': strategies,
            'evidence': ev
        }

        if conf == 'UNMATCHABLE':
            reasons = classify_unmatchable(entry, t3_key in t3r, t4_key in t4, t5_key in t5.get('new_to_old', {}))
            result['unmatchable_reasons'] = reasons
            for r in reasons:
                ureasons[r] += 1

        results[hpp_key] = result

    # Write output
    output = {
        'metadata': {
            'description': 'T6: Cross-validated merge of T3 (signature), T4 (call-graph), T5 (git history)',
            'total_functions': len(t1),
            'confidence_distribution': dict(stats),
            'priority_hierarchy': 'call-graph > git > signature',
            'definitions': {
                'HIGH': 'call-graph + any T3 candidate agree (same address), or call-graph + git agree',
                'MEDIUM': 'call-graph only, or signature+git agree without call-graph',
                'LOW': 'single source (signature or git alone)',
                'CONFLICT': 'call-graph disagrees with top signature (sig conf>=0.5) or git',
                'UNMATCHABLE': 'no candidates from any strategy'
            },
            'agreement_note': 'For call-graph+signature, ALL T3 candidates checked, not just top.',
            'unmatchable_reason_distribution': dict(ureasons),
            'source_sizes': {
                't1_missing': len(t1),
                't3_sig_keys': len(t3r),
                't4_cg_keys': len(t4),
                't5_git_keys': len(t5.get('new_to_old', {}))
            }
        },
        'results': results
    }

    outpath = os.path.join(SCRIPT_DIR, 'ida_match_results.json')
    with open(outpath, 'w', encoding='utf-8') as f:
        json.dump(output, f, indent=2, ensure_ascii=False)

    print(f"Written to {outpath}")
    print(f"\nConfidence distribution:")
    for c in ['HIGH', 'MEDIUM', 'LOW', 'CONFLICT', 'UNMATCHABLE']:
        n = stats.get(c, 0)
        print(f"  {c}: {n} ({n/len(t1)*100:.1f}%)")
    print(f"\nUnmatchable reasons (top 10):")
    for r, n in sorted(ureasons.items(), key=lambda x: -x[1])[:10]:
        print(f"  {r}: {n}")

    # Statistics
    high_n = stats.get('HIGH', 0)
    print(f"\nHIGH: {high_n} (target: >=600)")
    if high_n < 600:
        print(f"  NOTE: Below target due to limited call-graph coverage (T4 has only {len(t4)} entries)")

if __name__ == '__main__':
    main()
