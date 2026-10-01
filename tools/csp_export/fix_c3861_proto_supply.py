# -*- coding: utf-8 -*-
"""G41.46: C3861 bare-name proto supply -- free-function calls to names
the e4 face never declared. For each C3861 site whose call line has no
`Cls::` qualifier: resolve the name in signals (non-thiscall, unique
addr), pull the cache truth signature, and append an extern decl to
e4_protos.h when absent. Names already declared anywhere in e4_protos.h
are skipped (their C3861 has a different cause).
Dry-run default; --apply appends.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
CENSUS = os.path.join(ROOT, '.omo', 'tu_errors.json')
PROTOS = os.path.join(ROOT, 'src', 'e4', 'e4_protos.h')

IDA_TYPE_MAP = [
    ('unsigned __int8', 'uint8_t'), ('unsigned __int16', 'uint16_t'),
    ('unsigned __int32', 'uint32_t'), ('unsigned __int64', 'uint64_t'),
    ('__int8', 'int8_t'), ('__int16', 'int16_t'), ('__int32', 'int32_t'),
    ('__int64', 'int64_t'), ('_QWORD', 'unsigned long long'),
    ('_DWORD', 'unsigned int'), ('_WORD', 'unsigned short'),
    ('_BYTE', 'unsigned char'), ('_BOOL', 'int'), ('__bool', 'int'),
    ('u_short', 'unsigned short'), ('u_char', 'unsigned char'),
    ('u_int', 'unsigned int'), ('u_long', 'unsigned long'),
    ('_UNKNOWN', 'void *'),
]

def norm_type(tp):
    for a, b in IDA_TYPE_MAP:
        tp = re.sub(r'\b%s\b' % a, b, tp)
    return tp.strip()

def split_args(s):
    args, depth, cur, i = [], 0, '', 0
    while i < len(s):
        c = s[i]
        if c in '([{':
            depth += 1
        elif c in ')]}':
            depth -= 1
        elif c == ',' and depth == 0:
            args.append(cur.strip())
            cur = ''
            i += 1
            continue
        cur += c
        i += 1
    if cur.strip():
        args.append(cur.strip())
    return args

def cache_first_line(addr):
    for p in (os.path.join(ROOT, '.omo', 'ida_cache', 'func_%s.json' % addr),
              os.path.join(ROOT, '.omo', 'ida_cache',
                           'func_0x%08X.json' % int(addr, 16)),
              os.path.join(ROOT, '.omo', 'ida_cache',
                           'func_0x%X.json' % int(addr, 16))):
        if os.path.exists(p):
            t = json.load(open(p, encoding='utf-8'))
            dec = t.get('decompiled', '')
            return dec.split('\n')[0] if dec else None
    return None

sig = json.load(open(os.path.join(ROOT, 'signals.json'), encoding='utf-8'))
name2addrs = collections.defaultdict(list)
addr2sym = {}
for addr, v in sig['symbols'].items():
    name2addrs[v['name']].append(addr)
    addr2sym[addr] = v

census = json.load(open(CENSUS, encoding='utf-8'))
names = collections.Counter()
for tu, el in census.items():
    for e in el:
        if 'error C3861' not in e:
            continue
        m = re.search(r'“(.+?)”: 找不到标识符', e)
        if m:
            names[m.group(1)] += 1

proto_txt = open(PROTOS, encoding='utf-8', errors='replace').read()

stats = collections.Counter()
decls = []
for name, cnt in sorted(names.items(), key=lambda kv: -kv[1]):
    if not re.match(r'^[A-Za-z_]\w*$', name):
        stats['junk-shaped'] += cnt
        continue
    if re.search(r'\b%s\s*\(' % re.escape(name), proto_txt):
        stats['already-in-protos'] += cnt
        continue
    addrs = name2addrs.get(name, [])
    if not addrs:
        stats['no-signals'] += cnt
        continue
    if len(addrs) > 1:
        stats['ambiguous'] += cnt
        continue
    cc = addr2sym[addrs[0]].get('call_convention')
    if cc == 'thiscall':
        stats['thiscall(skip)'] += cnt
        continue
    tline = cache_first_line(addrs[0])
    if not tline:
        stats['no-cache'] += cnt
        continue
    m = re.match(
        r'^(.+?)\s*__(?:fastcall|stdcall|cdecl|pascal)?\s*'
        r'((?:[A-Za-z_]\w*::)*~?[A-Za-z_]\w*)\s*\((.*)\)\s*$', tline.strip())
    if not m:
        stats['truth-parse-fail'] += cnt
        continue
    ret, qname, params = m.groups()
    if '::' in qname:
        stats['qualified(skip)'] += cnt
        continue
    pl = split_args(params) if params.strip() else []
    if pl and re.search(r'\bthis\s*$', pl[0]):
        stats['this-truth(skip)'] += cnt
        continue
    ret = norm_type(ret)
    newpl = []
    for ix, p in enumerate(pl):
        pm = re.match(r'^(.*?)([A-Za-z_]\w*)\s*(\[[^\]]*\])?$', p.strip())
        if pm and pm.group(1).strip():
            ttype = norm_type(pm.group(1))
            pname = pm.group(2)
        else:
            ttype, pname = norm_type(p.strip()), 'a%d' % (ix + 1)
        ttype = ttype if (ttype.endswith('*') or ttype.endswith('&')) \
            else ttype + ' '
        newpl.append(ttype + pname + (pm.group(3) or '' if pm else ''))
    decls.append('extern %s %s(%s);' % (ret, name, ', '.join(newpl)))
    stats['supplied'] += 1
    stats['errs-covered'] += cnt

print('protos supplied:', stats['supplied'],
      ' covering mentions:', stats['errs-covered'])
for k, v in stats.most_common(12):
    print(' ', v, k)
print('sample:', decls[:5])

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)

if decls:
    block = ['', '// G41.46 C3861 bare-name supply: free-function protos from',
             '// cache truth for names the e4 face never declared.']
    block += decls
    txt = open(PROTOS, encoding='utf-8', errors='replace').read()
    if 'G41.46 C3861 bare-name supply' not in txt:
        open(PROTOS, 'a', encoding='utf-8', newline='\n').write(
            '\n'.join(block) + '\n')
        print('appended %d protos' % len(decls))
    else:
        print('supply block already present')
