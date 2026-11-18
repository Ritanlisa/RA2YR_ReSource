"""Solver run driver for the BM5 round (CSP track).

Runs minclass_solver.py with a fixed flag set, captures the log, snapshots the
dump products, and reports coverage metrics + sha256 of every product so two
identical runs can be compared byte-for-byte.

usage: python .omo/agents/csp/run_solver.py <label> [--arb]
       --arb  adds --arbitrate-mr-over-ig (gate-on)
"""
import sys, os, json, hashlib, shutil, subprocess, time

sys.stdout.reconfigure(encoding='utf-8')
os.chdir(r'D:\RA2YR_ReSource')

label = sys.argv[1]
arb = '--arb' in sys.argv[2:]

PRODUCTS = [
    'anchors/minclass_result.json',
    'anchors/minclass_assignments.json',
    'anchors/minclass_clusters.json',
    'anchors/minclass_domains.json',
    'anchors/minclass_domain_contents.json',
    'anchors/minclass_conflicts.json',
    'anchors/minclass_conflict_resolution.json',
    'anchors/derived_layouts.json',
    'anchors/c10_contradicted_entities.json',
]

outdir = os.path.join('.omo', 'agents', 'csp', label)
os.makedirs(outdir, exist_ok=True)

cmd = [sys.executable, 'tools/csp_export/minclass_solver.py', '--use-rs', '--dump-domains']
if arb:
    cmd.append('--arbitrate-mr-over-ig')
env = dict(os.environ)
env['MINCLASS_NO_CACHE'] = '1'

print('RUN', label, 'CMD', ' '.join(cmd), 'CACHE=off', flush=True)
t0 = time.time()
logp = os.path.join(outdir, 'run.log')
with open(logp, 'w', encoding='utf-8') as lf:
    p = subprocess.run(cmd, env=env, stdout=lf, stderr=subprocess.STDOUT)
dt = time.time() - t0
print('exit', p.returncode, 'in %.1fs' % dt, flush=True)
if p.returncode != 0:
    tail = open(logp, encoding='utf-8', errors='replace').read()[-3000:]
    print(tail)
    raise SystemExit(p.returncode)

res = json.load(open('anchors/minclass_result.json', encoding='utf-8'))['meta']
asm = json.load(open('anchors/minclass_assignments.json', encoding='utf-8'))
uniq = sum(1 for v in asm.values() if len(v.get('candidates') or []) == 1)
n = len(asm)
forced = sum(1 for v in asm.values() if v.get('confidence') == 'forced')
print('K_min=%s constrained=%s conflicts=%s unassigned=%s | assignments=%d unique=%d forced=%d pct=%.4f'
      % (res.get('K_min'), res.get('constrained_clusters'), res.get('conflicts'),
         None, n, uniq, forced, 100.0 * uniq / res['constrained_clusters']), flush=True)

shas = {}
for f in PRODUCTS:
    dst = os.path.join(outdir, os.path.basename(f))
    shutil.copyfile(f, dst)
    h = hashlib.sha256(open(dst, 'rb').read()).hexdigest()
    shas[os.path.basename(f)] = h
summary = {
    'label': label,
    'cmd': cmd,
    'cache': 'MINCLASS_NO_CACHE=1',
    'runtime_s': round(dt, 1),
    'meta': {k: res.get(k) for k in ('K_min', 'K_upper', 'lower_bound', 'constrained_clusters',
                                     'free_clusters', 'conflicts', 'c1_gaps', 'entities', 'universe')},
    'assignments': n,
    'unique': uniq,
    'forced': forced,
    'pct': round(100.0 * uniq / res['constrained_clusters'], 4),
    'sha256': shas,
}
json.dump(summary, open(os.path.join(outdir, 'summary.json'), 'w', encoding='utf-8'),
          ensure_ascii=False, indent=1)
print('SNAPSHOT', outdir, 'sha256(assignments)=', shas['minclass_assignments.json'], flush=True)
