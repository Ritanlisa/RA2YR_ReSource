#!/usr/bin/env python3
"""Step-6 mechanical backfill: re-anchor completed translations onto the
CSP-canonical foundation.

Pure algorithm, no per-function manual handling:
  1. Index all old-tree function bodies once (addr -> body text).
  2. For each signals-completed function:
       - manifest sig != 'csp'            -> downgrade (ida-proto, unanchored)
       - no manifest cls                  -> no-cls
       - no indexed body                  -> no-body
       - else: member renames via
           old name -> offset (member_lookup, class chain derived-first)
           offset   -> new name (csp_canon_members, absolute offsets)
         applied only on `->Name` / `.Name` tokens, word-bounded.
  3. Bodies with status direct/renamed -> src/csp_canon/bodies/fn_XX.inc
  4. anchors/backfill_manifest.json + signals 'backfill' annotation.

Deterministic; re-runnable.
"""
import json, re, sys
from pathlib import Path
from collections import defaultdict

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))

BODY_DIR = ROOT / 'src' / 'csp_canon' / 'bodies'
BODY_DIR.mkdir(parents=True, exist_ok=True)

def J(p):
    return json.loads(Path(p).read_text(encoding='utf-8'))

print('loading tables...', flush=True)
signals = J(ROOT / 'signals.json')
manifest = J(ROOT / 'anchors/csp_canon_manifest.json')
mtab = J(ROOT / 'anchors/csp_canon_members.json')
member_lookup = J(ROOT / 'tools/member_lookup.json')
db = J(ROOT / 'anchors/class_db.json')['classes']
align = J(ROOT / 'anchors/class_name_align.json')
rtti2canon = align.get('rtti_to_canon', {})

def canon(c):
    if not c:
        return None
    v = rtti2canon.get(c)
    if isinstance(v, dict):
        return v.get('canon') or c
    if isinstance(v, list) and v:
        return v[0] or c
    if isinstance(v, str):
        return v
    return c

# ---------------- old member name -> offset, per class chain ----------------
old_chain_index = {}   # cls -> {name: offset}
def chain_index(cls):
    if cls in old_chain_index:
        return old_chain_index[cls]
    idx = {}
    chain = [cls]
    e = db.get(cls) or {}
    for a in (e.get('full_ancestors') or []):
        c = canon(a) or a
        if c != cls:
            chain.append(c)
    for c in chain:
        for off, m in (member_lookup.get(c) or {}).items():
            try:
                o = int(off)
            except ValueError:
                continue
            n = (m or {}).get('name') if isinstance(m, dict) else None
            if n and n not in idx:
                idx[n] = o
    old_chain_index[cls] = idx
    return idx

# ---------------- one-pass body indexer ----------------
ADDR_RE = re.compile(r'^//\s*0x([0-9A-Fa-f]{6,8})\s*$')
TRAIL_RE = re.compile(r'//\s*0x([0-9A-Fa-f]{6,8})\s*$')
DEF_RE = re.compile(r'\w+\s*\([^;{]*\)\s*\{?\s*$')

def index_bodies():
    idx = {}
    files = [p for p in (ROOT / 'src').rglob('*.cpp')]
    for p in files:
        try:
            lines = p.read_text(encoding='utf-8', errors='replace').split('\n')
        except OSError:
            continue
        i = 0
        n = len(lines)
        while i < n:
            line = lines[i]
            m = ADDR_RE.match(line.strip())
            started = None
            i_def = None
            if m:
                started = int(m.group(1), 16)
                j = i + 1
                while j < min(i + 9, n):
                    lj = lines[j]
                    if '(' in lj and not lj.lstrip().startswith('//'):
                        i_def = j
                        break
                    j += 1
            else:
                tm = TRAIL_RE.search(line)
                if tm and '(' in line:
                    started = int(tm.group(1), 16)
                    i_def = i
            if started and i_def is not None and started not in idx:
                # brace match: first '{' at/after def line
                k = i_def
                depth = 0
                end = None
                seen_open = False
                while k < min(i_def + 8, n) and not seen_open:
                    if '{' in lines[k]:
                        seen_open = True
                    else:
                        k += 1
                if seen_open:
                    while k < n:
                        for ch in lines[k]:
                            if ch == '{':
                                depth += 1
                            elif ch == '}':
                                depth -= 1
                                if depth == 0:
                                    end = k
                                    break
                        if end is not None:
                            break
                        k += 1
                if end is not None:
                    idx[started] = {'file': str(p.relative_to(ROOT)),
                                    'text': '\n'.join(lines[i_def:end + 1])}
                    i = end
            i += 1
    return idx

print('indexing old-tree bodies...', flush=True)
bodies = index_bodies()
print('bodies indexed:', len(bodies), flush=True)

TOKEN_RE = re.compile(r'(->|\.)\s*([A-Za-z_]\w*)')

def backfill_body(text, renames):
    if not renames:
        return text, 0
    cnt = 0
    def sub(m):
        nonlocal cnt
        op, name = m.group(1), m.group(2)
        new = renames.get(name)
        if new:
            cnt += 1
            return op + new
        return m.group(0)
    return TOKEN_RE.sub(sub, text), cnt

completed = {a: s for a, s in signals['symbols'].items()
             if isinstance(s, dict) and s.get('completed')}
print('completed:', len(completed), flush=True)

result = {}
buckets = defaultdict(list)
counts = defaultdict(int)
for a, sym in sorted(completed.items()):
    try:
        ai = int(a, 16)
    except ValueError:
        continue
    man = manifest.get('0x%08X' % ai) or {}
    sig = man.get('sig')
    cls = man.get('cls')
    body_rec = bodies.get(ai)
    entry = {'sig': sig, 'cls': cls}
    if sig != 'csp':
        entry['status'] = 'downgrade'
        counts['downgrade'] += 1
    elif body_rec is None:
        entry['status'] = 'no-body'
        counts['no-body'] += 1
    elif not cls or cls not in mtab:
        nm = sym.get('name') or ''
        if sig == 'csp' and '::' not in nm:
            entry['status'] = 'direct'
            entry['free_function'] = True
            buckets[(ai >> 16) & 0xFF].append(
                '// ==== BACKFILL 0x%08X  %s  cls=-  sig=csp  free-function ====\n%s\n'
                % (ai, nm, body_rec['text']))
            counts['direct'] += 1
        else:
            entry['status'] = 'no-cls'
            counts['no-cls'] += 1
    else:
        text = body_rec['text']
        chain = chain_index(cls)
        renames = {}
        for op, name in set(TOKEN_RE.findall(text)):
            if name in renames or name in chain:
                pass
        for name, off in chain.items():
            newm = (mtab.get(cls, {}).get('members', {}).get(str(off)) or {})
            newn = newm.get('name')
            if newn and newn != name:
                renames[name] = newn
        new_text, cnt = backfill_body(text, renames)
        valid_names = {v['name'] for v in mtab.get(cls, {}).get('members', {}).values()}
        residual = sorted({name for op, name in TOKEN_RE.findall(new_text)
                           if name in chain and name not in valid_names})
        if residual:
            status = 'needs-retranslation'
        else:
            status = 'renamed' if cnt else 'direct'
        entry['status'] = status
        entry['renames'] = renames
        entry['renamed_refs'] = cnt
        entry['residual_tokens'] = residual
        entry['body_file'] = 'src/csp_canon/bodies/fn_%02X.inc' % ((ai >> 16) & 0xFF)
        buckets[(ai >> 16) & 0xFF].append(
            '// ==== BACKFILL 0x%08X  %s  cls=%s  sig=csp  renamed_refs=%d  residual=%s ====\n%s\n'
            % (ai, sym.get('name', ''), cls, cnt, ','.join(residual) or '-', new_text))
        counts[status] += 1
    result[a] = entry

for bkey, parts in sorted(buckets.items()):
    (BODY_DIR / ('fn_%02X.inc' % bkey)).write_text(
        '// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon\n'
        '// member names (tools/csp_export/backfill_completed.py, mechanical).\n'
        '// Reference substrate for RA2MCP step-6 rework; not compiled.\n\n'
        + '\n'.join(parts), encoding='utf-8')

# signals annotation (additive, mechanical)
for a, entry in result.items():
    sym = signals['symbols'].get(a)
    if isinstance(sym, dict):
        sym['backfill'] = {'status': entry['status'],
                           'cls': entry.get('cls'),
                           'renamed_refs': entry.get('renamed_refs', 0)}

Path(ROOT / 'anchors/backfill_manifest.json').write_text(
    json.dumps(result, indent=1, ensure_ascii=False), encoding='utf-8')
sp = ROOT / 'signals.json'
sp.write_text(json.dumps(signals, indent=2, ensure_ascii=False) + '\n', encoding='utf-8')

print('=== backfill accounts ===')
for k, v in sorted(counts.items()):
    print(f'  {k}: {v}')
print('bodies written to', len(buckets), '.inc buckets')
print('DONE')
