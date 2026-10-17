#!/usr/bin/env python3
"""X63: remove X62 amp-form casts by retyping carrier members to the type the
code reads.

Two passes driven by .omo/evidence/optimization/x63/x63_sites.json:

  HPP PASS  - retype EVERY decl copy of the family member (e4 carrier + canon
              twin): width-preserving, name+offset comment preserved.
  CPP PASS  - single-pass, form-classified rewrite of the enumerated sites:
                **(unsigned int **)&m   -> *(unsigned int *)m      (vt read)
                *(unsigned int *)&m     -> m                       (exact view)
                *(T2 *)&m  (T2!=uint)   -> (T2)m   (cast kept, & dies)
                *(unsigned int *)m      -> m               (array decay)
                return m;  (ptr-return fn, uint member) -> return (unsigned int *)m;
                m = &vt_X / &off_X  (uint member)       -> m = (unsigned int)&vt_X;
              void* members (Release_slot): plain assignment, no cast added.

Idempotent: after rewrite the patterns no longer match; 2nd run = 0 writes.
Usage:  python gen_x63_pad_scalar_retype.py [--apply]
"""
import io
import json
import os
import re
import sys
from collections import defaultdict

ROOT = r'D:\RA2YR_ReSource'
X63 = os.path.join(ROOT, '.omo', 'evidence', 'optimization', 'x63')
PLAN = os.path.join(X63, 'x63_sites.json')

def member_type(plan, cls, mem):
    fam = '%s.%s' % (cls, mem)
    if fam in plan['retype_hpp']:
        return plan['retype_hpp'][fam][1]
    return {'JumpjetLocomotion.u32_C': 'unsigned int',
            'AudioStream.__pad_0': 'unsigned int',
            'BulletClass.q00C': 'unsigned int',
            'AnimClass.q00C': 'unsigned int',
            'MapClass.MapClass_field_0x0': 'unsigned int',
            'ScoreAnimClass.m_0': 'unsigned int',
            'CStreamClass.Release_slot': 'void*'}.get(fam)

EXACT = {  # member type -> full cast types (ty + '*') that equal a direct read
    'unsigned int': {'unsigned int *'},
    'short': {'__int16 *', 'short *'},
    'HWND': {'HWND *'},
    'void*': {'unsigned int *'},   # bit-read of the pointer slot; used on assign RHS
}

# ---------------------------------------------------------------- hpp pass
DECL = re.compile(
    r'^(?P<ind>\s*)(?P<ty>(?:unsigned\s+|signed\s+|const\s+)*[A-Za-z_][\w:]*'
    r'(?:\s*::\s*[A-Za-z_]\w*)*)\s*(?P<stars>\**)\s*(?P<name>[A-Za-z_]\w*)'
    r'\s*(?:\[\s*(?P<arr>\d+)\s*\])?\s*;\s*(?P<comment>//\s*0x[0-9A-Fa-f]+.*)$')

def hpp_pass(apply):
    fams = json.load(io.open(PLAN, encoding='utf-8'))['retype_hpp']
    changed = []
    for fam, (old, new) in sorted(fams.items()):
        cls, mem = fam.split('.', 1)
        hits = []
        for dirpath, _, fns in os.walk(os.path.join(ROOT, 'src')):
            for fn in fns:
                if not fn.endswith(('.hpp', '.h')):
                    continue
                p = os.path.join(dirpath, fn)
                try:
                    lines = io.open(p, encoding='utf-8', errors='replace').read().split('\n')
                except OSError:
                    continue
                cur = None
                for i, ln in enumerate(lines):
                    sm = re.match(r'^\s*(?:class|struct)\s+([A-Za-z_]\w*)', ln)
                    if sm:
                        cur = sm.group(1)
                        continue
                    if cur != cls:
                        continue
                    dm = DECL.match(ln)
                    if dm and dm.group('name') == mem:
                        old_ty = dm.group('ty') + '*' * len(dm.group('stars'))
                        arr = dm.group('arr')
                        if arr:
                            old_ty += '[%s]' % arr
                        if old_ty == new:
                            continue  # already retyped (idempotent run)
                        if old_ty != old:
                            print('HPP SKIP %s:%d decl %r != expected %r' %
                                  (os.path.relpath(p, ROOT), i + 1, old_ty, old))
                            continue
                        new_line = '%s%s %s;  %s' % (dm.group('ind'), new,
                                                     dm.group('name'), dm.group('comment'))
                        hits.append((p, i, lines, new_line, ln))
        if not hits:
            print('HPP MISS: %s' % fam)
        for p, i, lines, new_line, old_line in hits:
            changed.append((p, i + 1, old_line.rstrip(), new_line))
            if apply:
                lines[i] = new_line
                io.open(p, 'w', encoding='utf-8', newline='').write('\n'.join(lines))
    return changed

# ---------------------------------------------------------------- cpp pass
RECV = r'(?P<recv>[A-Za-z_]\w*(?:\[[^\]]*\])?)\s*(?P<arrow>->|\.)\s*'
FORM_A = re.compile(r'\*\*\(\s*(?P<ty>[A-Za-z_][\w\s]*?\*)\*\s*\)\s*&\s*' + RECV +
                    r'(?P<mem>[A-Za-z_]\w*)(?![\w\[])')
FORM_B = re.compile(r'\*\(\s*(?P<ty>[A-Za-z_][\w\s]*?\**)\s*\)\s*&\s*' + RECV +
                    r'(?P<mem>[A-Za-z_]\w*)(?![\w\[])')
FORM_C = re.compile(r'\*\(\s*(?P<ty>unsigned\s+int|HWND)\s*\*\s*\)\s*' + RECV +
                    r'(?P<mem>[A-Za-z_]\w*)(?![\w\[])')
VT_RHS = re.compile(r'(?P<lhs>(?:this|[A-Za-z_]\w*)\s*(?:->|\.)\s*(?P<mem>[A-Za-z_]\w*)'
                    r'\s*=\s*)(?P<rhs>&\s*(?:vt_|off_)\w+)\s*(?=[;,\n)])')

def norm_ty(t):
    return re.sub(r'\s+', ' ', t.strip())

def rewrite_line(line, sites_here, mtype):
    mems = {s['mem'] for s in sites_here}
    events = []
    for pat, kind in ((FORM_A, 'A'), (FORM_B, 'B'), (FORM_C, 'C')):
        for m in pat.finditer(line):
            if m.group('mem') not in mems:
                continue
            events.append((m.start(), m.end(), kind, m))
    events.sort(key=lambda e: (e[0], -(e[1] - e[0])))
    filtered = []
    last_end = -1
    for e in events:
        if e[0] >= last_end:
            filtered.append(e)
            last_end = e[1]
    if not filtered:
        return None
    res = []
    pos = 0
    mt = mtype
    for start, end, kind, m in filtered:
        mem = m.group('mem')
        ty = norm_ty(m.group('ty'))
        full_ty = ty if ty.endswith('*') else ty + ' *'
        recv = '%s%s' % (m.group('recv'), m.group('arrow'))
        res.append(line[pos:start])
        if kind == 'A':
            res.append('*(%s)%s%s' % (ty, recv, mem))
        elif kind in ('B', 'C'):
            exact = full_ty in EXACT.get(mt, set())
            res.append('%s%s' % (recv, mem) if exact else '(%s)%s%s' % (full_ty, recv, mem))
        pos = end
    res.append(line[pos:])
    new = ''.join(res)
    if mt == 'unsigned int':
        new = VT_RHS.sub(lambda m2: '%s(unsigned int)%s' % (m2.group('lhs'), m2.group('rhs'))
                         if m2.group('mem') in mems else m2.group(0), new)
    return new

PTR_RETURN_FILES = {
    'src\\e4\\UnitTypeVector_e4.cpp',
    'src\\e4\\MapFile_e4.cpp',
}

def enclosing_returns_ptr(lines, lineno):
    sig = re.compile(r'^[A-Za-z_][\w:<>,*&\s]*\*+\s+[A-Za-z_]\w*::\w*\s*\(')
    for j in range(lineno - 2, max(0, lineno - 120), -1):
        t = lines[j].split('//')[0]
        if '::' in t and '(' in t and sig.match(t):
            return True
        if re.match(r'^\}\s*$', t):
            break
    return False

def cpp_pass(apply):
    plan = json.load(io.open(PLAN, encoding='utf-8'))
    sites = plan['sites']
    # done-ledger guard: FORM_A outputs (`*(T *)m`) intentionally retain one
    # deref+cast; a naive re-run would let FORM_C re-match and destroy them.
    # Applied sites are recorded and skipped, making --apply run-stable.
    led_path = os.path.join(X63, 'x63_apply_ledger.json')
    done = set()
    if os.path.exists(led_path):
        try:
            for e in json.load(io.open(led_path, encoding='utf-8')):
                done.add((e['file'], e['line']))
        except (OSError, ValueError):
            done = set()
    per_file = defaultdict(list)
    for s in sites:
        per_file[s['file']].append(s)
    ledger = []
    for f in sorted(per_file):
        p = os.path.join(ROOT, f)
        try:
            lines = io.open(p, encoding='utf-8', errors='replace').read().split('\n')
        except OSError:
            print('CPP MISS file', f)
            continue
        n = 0
        seen = set()
        for s in sorted(per_file[f], key=lambda x: x['line']):
            li = s['line'] - 1
            if li >= len(lines) or s['line'] in seen or (f, s['line']) in done:
                continue
            old = lines[li]
            mtype = member_type(plan, s['cls'], s['mem'])
            new = rewrite_line(old, [x for x in per_file[f] if x['line'] == s['line']], mtype)
            if new is None and s['form'] == 'plain' and f in PTR_RETURN_FILES:
                if re.search(r'\breturn\s+(?:this|[A-Za-z_]\w*)->' + re.escape(s['mem']) + r'\s*;', old) \
                        and enclosing_returns_ptr(lines, s['line']):
                    new = re.sub(r'\breturn\s+', 'return (unsigned int *)', old, count=1)
            if new is not None and new != old:
                ledger.append(dict(file=f, line=s['line'], cls=s['cls'], mem=s['mem'],
                                   form=s['form'], before=old.strip(), after=new.strip()))
                if apply:
                    lines[li] = new
                n += 1
                seen.add(s['line'])
            elif new is None and s['form'] != 'plain':
                print('CPP SKIP %s L%d %s.%s (%s): pattern miss | %s' %
                      (f, s['line'], s['cls'], s['mem'], s['form'], old.strip()[:110]))
        if apply and n:
            io.open(p, 'w', encoding='utf-8', newline='').write('\n'.join(lines))
    if apply:
        merged = []
        if done:
            try:
                merged = json.load(io.open(led_path, encoding='utf-8'))
            except (OSError, ValueError):
                merged = []
        merged.extend(ledger)
        json.dump(merged, io.open(led_path, 'w', encoding='utf-8'), indent=1)
    return ledger

def main():
    apply = '--apply' in sys.argv
    h = hpp_pass(apply)
    l = cpp_pass(apply)
    print('hpp decl retypes: %d' % len(h))
    for p, ln, o, nw in h:
        print('  %s:%d\n    - %s\n    + %s' % (os.path.relpath(p, ROOT), ln, o.strip(), nw.strip()))
    print('cpp site rewrites: %d' % len(l))
    for e in l:
        print('  %s:%d [%s.%s %s]\n    - %s\n    + %s' % (
            e['file'], e['line'], e['cls'], e['mem'], e['form'],
            e['before'][:130], e['after'][:130]))
    if apply:
        print('ledger updated (%d new entries)' % len(l))
    else:
        print('DRY RUN (use --apply)')

if __name__ == '__main__':
    main()
