import re, json, sys

LOG = sys.argv[1] if len(sys.argv) > 1 else '.omo/gap2_baseline_clean.log'
OUT = sys.argv[2] if len(sys.argv) > 2 else '.omo/gap2_lnk2019.json'

# Encoding-robust: anchor on 'LNK20NN:' (the Chinese phrase may be corrupted in
# the captured log). The unresolved symbol is EITHER a bare C-style token
# (_name / ?name) appearing BEFORE the first quote, OR the FIRST quoted C++ pair
# "DEM" (DEC). The later "referenced in function" pair is ignored.
CODE = re.compile(r'LNK20\d\d\s*:\s*(.*)')
QUOTE = re.compile(r'[\"\u201c\u201d](.+?)[\"\u201c\u201d]\s*\(([^)]+)\)')

seen = {}
for line in open(LOG, encoding='utf-8', errors='replace'):
    m = CODE.search(line)
    if not m:
        continue
    seg = m.group(1)
    qcands = [p for p in (seg.find('"'), seg.find('\u201c'), seg.find('\u201d')) if p >= 0]
    qpos = min(qcands) if qcands else -1
    prefix = seg if qpos < 0 else seg[:qpos]
    # a real C-style unresolved symbol starts with '_' (cdecl) before the quote;
    # ignore the corrupted-phrase artifact '?'
    ctoks = [t for t in re.findall(r'_[A-Za-z0-9_@?$]+', prefix) if len(t) > 1]
    if ctoks:                                  # C-style bare symbol
        dec = dem = ctoks[0]
    else:                                      # C++ first quoted pair
        mq = QUOTE.search(seg)
        if not mq:
            continue
        dem, dec = mq.group(1), mq.group(2)
    e = seen.setdefault(dec, {'demangled': dem, 'decorated': dec, 'refs': 0})
    e['refs'] += 1

out = sorted(seen.values(), key=lambda x: -x['refs'])
print('UNIQUE unresolved symbols:', len(out))
for e in out:
    print('  [%3d] %s' % (e['refs'], e['demangled']))
json.dump(out, open(OUT, 'w'), indent=2)
print('wrote', OUT)
