import re, json
seen = {}
pat = re.compile(r'LNK20\d\d:\s*\S+\s*[\"\u201c\u201d](.+?)[\"\u201c\u201d]\s*\((\?[^)]+)\)')
for line in open('.omo/gap2_relink.log', encoding='utf-8', errors='replace'):
    if 'LNK20' not in line:
        continue
    m = pat.search(line)
    if not m:
        # fallback: decorated name in parens at end
        m2 = re.search(r'\((\?[A-Za-z0-9_@?$]+)\)', line)
        dem = ''
        d2 = re.search(r'LNK20\d\d:\s*\S+\s*(.+?)\s*\(\?', line)
        if d2:
            dem = d2.group(1).strip().strip('"\u201c\u201d')
        if m2:
            dec = m2.group(1)
            seen.setdefault(dec, [dem, 0])
            seen[dec][1] += 1
        continue
    dem, dec = m.group(1), m.group(2)
    seen.setdefault(dec, [dem, 0])
    seen[dec][1] += 1

print('UNIQUE unresolved symbols:', len(seen))
out = []
for dec, (dem, cnt) in sorted(seen.items(), key=lambda x: -x[1][1]):
    print('  [%3d refs] %s' % (cnt, dem))
    print('            decorated=%s' % dec)
    out.append({'decorated': dec, 'demangled': dem, 'refs': cnt})
json.dump(out, open('.omo/gap2_lnk2019.json', 'w'), indent=2)
print('\nwrote .omo/gap2_lnk2019.json')
