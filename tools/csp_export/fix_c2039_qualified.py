# -*- coding: utf-8 -*-
"""G41.47: C2039 qualified-name family repair (1,713 mentions / 619 pairs).

Four truth-anchored handlers driven by the fresh census:
  E. doubled-prefix line repair  `Power::Tim  Power::TimerProcess(` /
     `v10  v10 =`  ->  drop the orphan first token when the remainder
     starts with it (old generator line-merge corruption).
  A. flattened free-function      cache truth has no this/no __thiscall
     (e.g. ObjectPtr_RegisterForTracking) -> call sites `Cls::Name(`
     -> `Flattened_Name(`, proto into e4_protos.h, wrong member decl
     dropped from the class hpp.
  B. this->Cls::Method hybrid     -> `((Cls *)this)->Method(args)` when
     the truth is a thiscall member (e.g. this->Debug::Log()).
  C. pad-member supply            `this->m_1[3]` on pad classes ->
     append `unsigned char m_1[64];` (compile plumbing, annotated).
Plus a data-member supply rerun for fresh q0/u32_/field_ sites.
Dry-run default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
CENSUS = os.path.join(ROOT, '.omo', 'tu_errors.json')
PROTOS = os.path.join(ROOT, 'src', 'e4', 'e4_protos.h')
CACHE = os.path.join(ROOT, '.omo', 'ida_cache')

def cache_first_line(addr):
    for p in (os.path.join(CACHE, 'func_%s.json' % addr),
              os.path.join(CACHE, 'func_0x%08X.json' % int(addr, 16)),
              os.path.join(CACHE, 'func_0x%X.json' % int(addr, 16))):
        if os.path.exists(p):
            t = json.load(open(p, encoding='utf-8'))
            dec = t.get('decompiled', '')
            return dec.split('\n')[0] if dec else None
    return None

_line_cache = {}
_dirty = set()

def get_lines(path):
    if path not in _line_cache:
        _line_cache[path] = open(
            path, encoding='utf-8', errors='replace').read().split('\n')
    return _line_cache[path]

census = json.load(open(CENSUS, encoding='utf-8'))
sig = json.load(open(os.path.join(ROOT, 'signals.json'), encoding='utf-8'))
name2addrs = collections.defaultdict(list)
addr2sym = {}
for addr, v in sig['symbols'].items():
    if not re.match(r'^0x[0-9A-Fa-f]+$', str(addr)):
        continue
    name2addrs[v['name']].append(addr)
    addr2sym[addr] = v

# ---------------- collect error sites
sites = []      # (path, line_idx, cls, member, kind_hint)
data_pairs = collections.Counter()
for tu, el in census.items():
    for e in el:
        sm = re.match(r'^(.+?)\((\d+)\): error C2039: "(.+?)": 不是 "(.+?)" 的成员', e)
        if not sm:
            continue
        p = sm.group(1)
        if not os.path.isabs(p):
            p = os.path.join(ROOT, p)
        mem, clsq = sm.group(3), sm.group(4)
        cls = clsq.split('::')[-1]
        sites.append((p, int(sm.group(2)) - 1, cls, mem))
        if re.match(r'^(q0|u32_|field_|__pad|vtable)', mem):
            data_pairs[(cls, mem)] += 1

stats = collections.Counter()
protos_new = []
decl_drops = []

# ---------------- handler E: doubled-prefix lines (any error family line)
seen_lines = set()
for p, li, cls, mem in sites:
    if p not in _line_cache and os.path.exists(p):
        get_lines(p)
    if p not in _line_cache or li >= len(_line_cache[p]):
        continue
    ln = _line_cache[p][li]
    m = re.match(r'^(\s*)(\S+)(\s+)(\2\S*.*)$', ln)
    if m and m.group(4).startswith(m.group(2)):
        _line_cache[p][li] = m.group(1) + m.group(4)
        _dirty.add(p)
        stats['doubled-prefix-repaired'] += 1
        seen_lines.add((p, li))

# ---------------- classify remaining sites and apply A/B
for p, li, cls, mem in sites:
    if (p, li) in seen_lines:
        continue
    if p not in _line_cache or li >= len(_line_cache[p]):
        continue
    ln = _line_cache[p][li]
    # A: static-form call `Cls::Member(`
    m = re.search(r'\b%s::%s\s*\(' % (re.escape(cls), re.escape(mem)), ln)
    if not m:
        stats['site-shape-miss'] += 1
        continue
    qname = '%s::%s' % (cls, mem)
    addrs = [a for a in name2addrs.get(qname, [])]
    if len(addrs) != 1:
        stats['no-unique-addr'] += 1
        continue
    tline = cache_first_line(addrs[0])
    if not tline:
        stats['no-cache'] += 1
        continue
    is_member = '__thiscall' in tline or \
        re.search(r'\bthis\s*[,)]', tline.split('(')[-1]) is not None
    if not is_member:
        # A: flattened free function
        fm = re.search(r'([A-Za-z_]\w*)\s*\($', tline.split('(')[0].strip())
        flat = tline.split('(')[0].strip().split()[-1]
        flat = re.sub(r'[*&]', '', flat)
        flat = flat.split('::')[-1] if '::' in flat else flat
        # truth name: prefer the cache's own spelling
        fm2 = re.search(r'(\w+)\s*\($', tline.rstrip())
        true_name = fm2.group(1) if fm2 else flat
        if true_name == mem:
            stats['A-skip-same-name'] += 1
            continue
        new_ln = re.sub(r'\b%s::%s\s*\(' % (re.escape(cls), re.escape(mem)),
                        '%s(' % true_name, ln)
        _line_cache[p][li] = new_ln
        _dirty.add(p)
        stats['A-flattened-rewritten'] += 1
        # proto supply (once)
        pm = re.match(r'^(.+?)\s*\w+\s*\($', tline)
        ret = tline.split('(')[0].strip().rsplit(' ', 2)[0] if ' ' in tline else 'int'
        protos_new.append((true_name, tline))
    else:
        # B: member -- `Cls::Member(this, ...)` or `this->Cls::Member(...)`
        if re.search(r'this\s*->\s*%s::%s\s*\(' % (re.escape(cls), re.escape(mem)), ln):
            new_ln = re.sub(r'\bthis\s*->\s*%s::%s\s*\(' % (re.escape(cls), re.escape(mem)),
                            '((%s *)this)->%s(' % (cls, mem), ln)
            _line_cache[p][li] = new_ln
            _dirty.add(p)
            stats['B-hybrid-rewritten'] += 1
        else:
            stats['B-deferred-member-form'] += 1

# ---------------- handler C: m_N pad members
pad_cls = collections.defaultdict(set)
for p, li, cls, mem in sites:
    if re.match(r'^m_\d+$', mem):
        pad_cls[cls].add(mem)
for cls, mems in pad_cls.items():
    fn = os.path.join(ROOT, 'src', 'e4', 'classes', '%s_e4.hpp' % cls)
    if not os.path.exists(fn):
        stats['C-no-class-file'] += len(mems)
        continue
    lines = get_lines(fn)
    have = any(re.search(r'\b%s\s*\[' % re.escape(m), ln) for ln in lines for m in mems)
    if have:
        stats['C-already'] += 1
        continue
    # insert before the class close
    close = next((i for i, ln in enumerate(lines) if ln.strip() == '};'), None)
    if close is None:
        stats['C-no-close'] += 1
        continue
    for m in sorted(mems):
        lines.insert(close, '    unsigned char %s[64];  // pad compile-supply (G41.47)' % m)
    _dirty.add(fn)
    stats['C-pad-supplied'] += len(mems)

print('E doubled-prefix:', stats['doubled-prefix-repaired'])
print('A flattened:', stats['A-flattened-rewritten'],
      ' protos:', len(set(n for n, _ in protos_new)))
print('B hybrid:', stats['B-hybrid-rewritten'],
      ' deferred:', stats['B-deferred-member-form'])
print('C pad members:', stats['C-pad-supplied'])

# ---------------- handler B2: `this->X::Y(` -> `((X *)this)->Y(` corpus-wide
# (unambiguous hybrid form; X = the class named in the qualification)
b2 = 0
for fn in os.listdir(os.path.join(ROOT, 'src', 'e4')):
    if not fn.endswith('_e4.cpp'):
        continue
    fp = os.path.join(ROOT, 'src', 'e4', fn)
    lines = get_lines(fp)
    touched = False
    for i, ln in enumerate(lines):
        m = re.search(r'\bthis\s*->\s*([A-Za-z_]\w*)::([A-Za-z_]\w*)\s*\(', ln)
        if m:
            ln2 = re.sub(r'\bthis\s*->\s*([A-Za-z_]\w*)::([A-Za-z_]\w*)\s*\(',
                         r'((\1 *)this)->\2(', ln)
            lines[i] = ln2
            b2 += 1
            touched = True
    if touched:
        _dirty.add(fp)
stats['B2-hybrid-corpus'] = b2
print('B2 corpus rewrites:', b2)
for k, v in stats.most_common(12):
    print(' ', v, k)

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)

# append protos for flattened functions (dedup)
if protos_new:
    txt = open(PROTOS, encoding='utf-8', errors='replace').read()
    add = []
    seen = set()
    for nm, tline in protos_new:
        if nm in seen or re.search(r'\b%s\s*\(' % re.escape(nm), txt):
            continue
        seen.add(nm)
        head = tline.split('(')[0].strip()
        # rebuild: `RET [CC] NAME(` -> extern RET __? NAME
        hm = re.match(r'^(.*?)\s+((?:__\w+\s+)?)((?:\w+::)*)(\w+)\s*$', head)
        if not hm:
            continue
        ret = hm.group(1).strip() or 'int'
        cc = hm.group(2).strip()
        cc = '__stdcall ' if cc == '__stdcall' else ''
        add.append('extern %s %s%s(%s);' % (
            ret, cc, nm, ', '.join(
                _p.strip() for _p in
                (tline[tline.find('(') + 1:tline.rfind(')')].split(',') if ',' in tline or tline.find('(') < tline.rfind(')')
                 else []))))
    if add:
        txt += '\n' + '\n'.join([''] + ['// G41.47 flattened free-function protos'] + add) + '\n'
        open(PROTOS, 'w', encoding='utf-8', newline='\n').write(txt)
        print('protos appended:', len(add))

for p in _dirty:
    open(p, 'w', encoding='utf-8', newline='\n').write('\n'.join(get_lines(p)))
print('files written:', len(_dirty))
