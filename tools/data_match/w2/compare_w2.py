#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
compare_w2.py -- per-unit byte comparison: original gamemd .rdata units vs w2.exe.

For every unit from w2_units.json:
  * take the unit's original bytes
  * locate them in w2.exe (exact search)
  * report match rate = equal-bytes / unit-len (1.0 or 0.0, content is verbatim)
Also emits an alignment diff when a unit is NOT found: nearest partial match
(longest common prefix) for diagnosis.
Prints: per-unit table + coverage totals; writes w2_result.md + w2_result.json
"""
import struct, json, sys

ORIG = r"D:\RA2MD\gamemd.exe"
OURS = r"D:\RA2YR_ReSource\tools\data_match\w2\w2.exe"
UNITS = r"D:\RA2YR_ReSource\tools\data_match\w2\w2_units.json"
DENOM = 60868   # from probe_units.py: game area minus vtable/RTTI bytes

def main():
    b = open(ORIG, 'rb').read()
    w = open(OURS, 'rb').read()
    units = json.load(open(UNITS))
    rows, ok_bytes, ok_cnt = [], 0, 0
    for u in units:
        lo, hi = u["lo"], u["hi"]
        sig = b[lo:hi]
        i = w.find(sig)
        if i >= 0:
            rate, at = 1.0, i
        else:
            # longest prefix match for diagnostics
            best = 0
            step = max(1, (hi - lo) // 64)
            probe = w.find(sig[:64]) if hi - lo >= 64 else w.find(sig)
            if probe >= 0:
                k = 64
                while k < len(sig) and w[probe + k] == sig[k]:
                    k += 1
                best = k
            rate, at = 0.0, probe if probe >= 0 else -1
            if best:
                rate = best / (hi - lo)
        rows.append({'name': u['name'], 'lo': hex(lo), 'len': hi - lo,
                     'emitter': u['emitter'], 'rate': round(rate, 6),
                     'prefix': int(rate * (hi - lo))})
        if rate == 1.0:
            ok_bytes += hi - lo
            ok_cnt += 1
    # report
    L = ["# w2 per-unit byte-match results", "",
         f"units: {len(units)}; fully-equal: {ok_cnt}; bytes: {ok_bytes}/{sum(r['len'] for r in rows)}",
         "", "| unit | orig RVA | len | emitter | match |", "|---|---|---|---|---|"]
    for r in rows:
        L.append(f"| {r['name']} | {r['lo']} | {r['len']} | {r['emitter']} | "
                 f"{'100%' if r['rate']==1.0 else ('%d/%d prefix' % (r['prefix'], r['len']))} |")
    L.append("")
    L.append(f"coverage of game static data area: {ok_bytes}/{DENOM} = {ok_bytes/DENOM*100:.1f}%")
    out = "\n".join(L)
    open(r'D:\RA2YR_ReSource\tools\data_match\w2\w2_result.md', 'w').write(out)
    json.dump(rows, open(r'D:\RA2YR_ReSource\tools\data_match\w2\w2_result.json', 'w'), indent=1)
    # console: failures first
    bad = [r for r in rows if r['rate'] != 1.0]
    print(f"{ok_cnt}/{len(units)} units 100% equal; {len(bad)} failing; coverage {ok_bytes}/{DENOM} = {ok_bytes/DENOM*100:.1f}%")
    for r in bad[:30]:
        print(f"  FAIL {r['name']} {r['lo']} len={r['len']} emitter={r['emitter']} prefix={r['prefix']}")

if __name__ == '__main__':
    main()
