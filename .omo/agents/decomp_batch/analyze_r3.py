import json, glob, collections, re

files = sorted(glob.glob('.omo/decomp_batch/r3_400/p*/part_00/part_report.json'))
allr = []
for f in files:
    allr.extend(json.load(open(f, encoding='utf-8'))['results'])

cf = [r for r in allr if r['verdict'] == 'COMPILE_FAIL']


def fam(n):
    n = n or ''
    if 'HWND' in n:
        return 'unknown-HWND(import/no windows.h)'
    if '$S' in n:
        return 'mangled-$S'
    if 'wchar_t' in n and 'redefinition' in n:
        return 'wchar_t redef'
    if 'YAX' in n:
        return 'mangled-fn-name'
    if 'undeclared identifier' in n:
        return 'undeclared identifier'
    if 'must point to class' in n:
        return 'receiver not class'
    if 'cannot convert' in n:
        return 'cannot convert'
    if 'is not a member' in n:
        return 'not a member'
    if 'is illegal' in n or 'syntax error' in n:
        return 'syntax'
    if 'missing' in n:
        return 'syntax missing ;'
    return 'other: ' + re.sub(r'\s+', ' ', n)[:70]


c = collections.Counter(fam(r.get('note')) for r in cf)
print('COMPILE_FAIL families (%d):' % len(cf))
for k, v in c.most_common():
    print('%3d  %s' % (v, k))

print('\n--- MISMATCH pathology ---')
mm = [r for r in allr if r['verdict'] == 'MISMATCH']
pc = collections.Counter(r.get('pathology') for r in mm)
for k, v in pc.most_common():
    print('%3d  %s' % (v, k))

print('\n--- per-part verdicts ---')
for f in files:
    d = json.load(open(f, encoding='utf-8'))
    vc = collections.Counter(x['verdict'] for x in d['results'])
    print(f.split('r3_400')[1][:12], dict(vc))
