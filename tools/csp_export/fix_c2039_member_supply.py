# -*- coding: utf-8 -*-
"""G41.46: C2039 data-member supply -- flat members (q0NN/u32_NNNN/...)
referenced by cache-verbatim bodies but absent from the e4 class flat
layout. The member name encodes its byte offset; the field is inserted at
the offset-ordered position (flat e4 classes are offset-annotated), type
from member_lookup when available, unsigned int otherwise.
Dry-run default; --apply writes.
"""
import json, re, os, sys, collections

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.abspath(ROOT)
APPLY = '--apply' in sys.argv
CENSUS = os.path.join(ROOT, '.omo', 'tu_errors.json')

try:
    ML = json.load(open(os.path.join(ROOT, 'tools', 'member_lookup.json'),
                        encoding='utf-8'))
except OSError:
    ML = {}

def member_offset(name):
    m = re.match(r'^(?:q0|u32_|field_)([0-9A-Fa-f]+)$', name)
    if m:
        return int(m.group(1), 16)
    m = re.match(r'^field_0x([0-9A-Fa-f]+)$', name)
    if m:
        return int(m.group(1), 16)
    return None

census = json.load(open(CENSUS, encoding='utf-8'))
pairs = collections.Counter()
for tu, el in census.items():
    for e in el:
        if 'error C2039' not in e:
            continue
        m = re.search(r'"(.+?)": 不是 "(?:gamemd::|ra2::game::)?(.+?)" 的成员', e)
        if m and member_offset(m.group(1)) is not None:
            pairs[(m.group(2), m.group(1))] += 1
print('data-member pairs:', len(pairs), ' mentions:', sum(pairs.values()))

# group by class file
by_cls = collections.defaultdict(list)
for (cls, mem), c in pairs.items():
    by_cls[cls].append(mem)

stats = collections.Counter()
changed = {}
for cls, mems in sorted(by_cls.items(),
                        key=lambda kv: -len(kv[1])):
    # locate the class body in its own hpp
    fn = os.path.join(ROOT, 'src', 'e4', 'classes', '%s_e4.hpp' % cls)
    if not os.path.exists(fn):
        stats['no-own-file'] += len(mems)
        continue
    lines = open(fn, encoding='utf-8', errors='replace').read().split('\n')
    depth = 0
    head = None
    span = None
    for i, ln in enumerate(lines):
        cm = re.match(r'\s*(?:class|struct)\s+([A-Za-z_]\w*)[^;]*$', ln)
        if cm and cm.group(1) == cls and head is None:
            head = (i, depth + ln.count('{') - ln.count('}'))
        depth += ln.count('{') - ln.count('}')
        if head and i > head[0] and depth < head[1]:
            span = (head[0], i)
            break
    if not span:
        stats['no-body'] += len(mems)
        continue
    lo, hi = span
    ml_cls = ML.get(cls, {})
    inserts = []   # (line_idx, text)
    for mem in sorted(set(mems), key=member_offset):
        off = member_offset(mem)
        # already present?
        if any(re.search(r'\b%s\s*;' % re.escape(mem), lines[j])
               for j in range(lo, hi)):
            stats['already-present'] += 1
            continue
        # true type from member_lookup by offset
        ttype = 'unsigned int'
        for k, v in ml_cls.items():
            try:
                if int(k) == off and isinstance(v, dict):
                    ttype = v.get('type') or ttype
            except (ValueError, TypeError):
                continue
        decl = '    %s %s;  // 0x%X' % (ttype, mem, off)
        # offset-ordered insert: before the first member with larger offset
        at = None
        for j in range(lo + 1, hi):
            am = re.search(r'//\s*0x([0-9A-Fa-f]+)', lines[j])
            if am and int(am.group(1), 16) > off and \
                    re.match(r'\s*[\w:<>]+\s+\w+\s*;', lines[j]):
                at = j
                break
        if at is None:
            at = hi          # class close line: insert before it
        inserts.append((at, decl))
        stats['supplied'] += 1
    if inserts:
        for at, decl in sorted(inserts, key=lambda x: -x[0]):
            lines.insert(at, decl)
        changed[fn] = lines

print('members supplied:', stats['supplied'])
for k, v in stats.most_common(8):
    print(' ', v, k)

if not APPLY:
    print('\n(dry run; no files written)')
    sys.exit(0)
for fn, lines in changed.items():
    open(fn, 'w', encoding='utf-8', newline='\n').write('\n'.join(lines))
print('files written:', len(changed))
