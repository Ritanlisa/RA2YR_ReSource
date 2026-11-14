"""s3b probe: run a small batch with --no-ledger and print verdicts + first errors."""
import json, os, subprocess, sys, re
ROOT = r'D:\RA2YR_ReSource'
PY = sys.executable
BR = os.path.join(ROOT, 'tools', 'decomp_sys', 'batch_run.py')

def make(addrs, path):
    json.dump([{'addr': a, 'family': 'probe'} for a in addrs], open(path,'w',encoding='utf-8'), indent=1)

def run(addrs, out, chunk=20):
    batch = os.path.join(ROOT, '.omo', 'agents', 's3b', 'probe_%s.json' % os.path.basename(out))
    make(addrs, batch)
    os.makedirs(out, exist_ok=True)
    rc = subprocess.call([PY, BR, '--batch', batch, '--out', out, '--chunk', str(chunk), '--no-ledger'], cwd=ROOT)
    rows=[]
    for d in sorted(os.listdir(out)):
        p = os.path.join(out, d, 'part_report.json')
        if not os.path.exists(p): continue
        rep = json.load(open(p, encoding='utf-8'))
        for r in rep['results']:
            rows.append(r)
    from collections import Counter
    print('rc=%s verdicts=%s' % (rc, Counter(r['verdict'] for r in rows)))
    for r in rows:
        if r['verdict'] not in ('MATCH',):
            n = (r.get('note') or '')
            m = re.search(r'error (C\d{4}):\s*([^;\r\n]*)', n)
            print('  %s %-14s %s' % (r['addr'], r['verdict'], (m.group(1)+' '+m.group(2)) if m else n[:120]))
    return rows

if __name__ == '__main__':
    addrs = sys.argv[1].split(',')
    out = sys.argv[2]
    run(addrs, os.path.join(ROOT, '.omo', 'decomp_batch', 's3b', out))
