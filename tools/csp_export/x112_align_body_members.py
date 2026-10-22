#!/usr/bin/env python3
"""X112 W2: align generated body member names with the rebuilt authority.

Uses the per-anchor `expr_map` in anchors/class_layouts_rebuilt.json:
  the body and the IDA cache share `/*0xADDR*/` anchors, so at a given anchor
  the old name is replaced by the authority member / expression for the offset
  the binary actually accesses.  Examples:
      this->u32_2028        -> this->scenario[24]
      this->BuildingPlacement_field_0x0C -> this->q00C
      this->u32_44          -> this->u32_44   (identity, no write)

Only the function bodies of the sidecar classes are touched; signatures,
comments, strings and all other files are preserved.  Dry-run by default.
Idempotent: after --apply a second run reports 0 writes.
"""
import json, re, sys
from pathlib import Path

ROOT = Path(r'D:\RA2YR_ReSource')
SIDECAR = json.load(open(ROOT / 'anchors/class_layouts_rebuilt.json', encoding='utf-8'))
CLASSES = SIDECAR['classes']
EXPR = {c: e.get('expr_map') or {} for c, e in CLASSES.items()}
ANCHOR_MAP = {c: e.get('anchor_map') or {} for c, e in CLASSES.items()}
VALID = {c: {m['name'] for m in (e.get('members') or [])} for c, e in CLASSES.items()}
GENERATED = re.compile(r'^(?:u(?:8|16|32|64)_[0-9A-Fa-f]+|q[0-9A-F]{2,6}|ptr_[0-9A-Fa-f]+'
                       r'|m_[0-9A-Fa-f]+|__pad_?[0-9A-Fa-f]+|\w*_field_)')
REPAIRABLE = re.compile(r'^(?:u(?:8|16|32|64)_[0-9A-Fa-f]+|q[0-9A-F]{2,6}'
                        r'|ptr_[0-9A-Fa-f]+|\w*_field_)')
APPLY = '--apply' in sys.argv
SHOW = '--show' in sys.argv
ONLY = None
if '--class' in sys.argv:
    ONLY = set(sys.argv[sys.argv.index('--class') + 1].split(','))

FUNC = re.compile(r'^\s*(?:[A-Za-z_][\w:<>,\*&\s]*?\s+)?([A-Za-z_]\w*)\s*::\s*(~?[A-Za-z_]\w*)\s*\(')
ANCHOR = re.compile(r'/\*0x([0-9a-fA-F]{6,8})\*/')
ACC = re.compile(r'\b([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)(?![A-Za-z0-9_\[]|\s*\[)')
ACC_ARR = re.compile(r'\b([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)\s*\[[^\]]*\]')

def code_end(line):
    """index where the trailing comment/anchor starts (preserve it verbatim)."""
    i = line.find('//')
    j = line.find('/*')
    if i < 0:
        i = len(line)
    if j >= 0:
        i = min(i, j)
    return i

def _one(cls, name, anchor):
    m = EXPR.get(cls, {}).get(name)
    if not m:
        return None
    if anchor is not None and anchor in m:
        return m[anchor]
    if '*' in m:
        return m['*']
    vals = set(m.values())
    if len(vals) == 1:
        return next(iter(vals))
    return None

def repl_for(cls, name, anchor):
    """follow rename chains to the final authority name (idempotence)."""
    cur, seen = name, {name}
    for _ in range(6):
        nxt = _one(cls, cur, anchor)
        if nxt is None or nxt == cur:
            return cur if cur != name else None
        # an indexed expression is final (it names the array member)
        if '[' in nxt or '->' in nxt or not re.match(r'^[A-Za-z_]\w*$', nxt):
            return nxt
        if nxt in seen:
            return nxt
        seen.add(nxt)
        cur = nxt
    return cur if cur != name else None

def process_file(path, stats):
    try:
        text = path.read_text(encoding='utf-8')
        codec = 'utf-8'
    except UnicodeDecodeError:
        text = path.read_text(encoding='latin-1')
        codec = 'latin-1'
    lines = text.split('\n')
    n = len(lines)
    changed = False
    i = 0
    while i < n:
        m = FUNC.match(lines[i])
        if not m or m.group(1) not in CLASSES:
            i += 1
            continue
        cls = m.group(1)
        if ONLY and cls not in ONLY:
            i += 1
            continue
        j = i
        while j < n and '{' not in lines[j]:
            if ';' in lines[j]:
                break
            j += 1
        if j >= n or '{' not in lines[j]:
            i += 1
            continue
        depth = lines[j].count('{') - lines[j].count('}')
        k = j + 1
        # class-typed pointer parameters are receivers too
        hdr = ' '.join(lines[i:j + 1])
        params = set()
        pm = re.search(r'\((.*)\)', hdr, re.S)
        if pm:
            for part in pm.group(1).split(','):
                if re.search(r'\b' + re.escape(cls) + r'\s*\*', part.strip()):
                    nm = re.findall(r'([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*$', part.strip())
                    if nm:
                        params.add(nm[-1])
        while k < n and depth > 0:
            line = lines[k]
            depth += line.count('{') - line.count('}')
            ce = code_end(line)
            code, tail = line[:ce], line[ce:]
            am = ANCHOR.search(tail) or ANCHOR.search(line)
            anchor = hex(int(am.group(1), 16)) if am else None
            def sub(mm):
                recv, name = mm.group(1), mm.group(2)
                if recv == 'this' or recv in params:
                    r = repl_for(cls, name, anchor)
                    if r is not None and r != name:
                        out = '%s->%s' % (recv, r)
                        if out != mm.group(0):
                            stats[cls] = stats.get(cls, 0) + 1
                            return out
                # repair: a stale/never-member generated token on any receiver
                # (e.g. `i->u32_3F320` where i aliases this+0x3F320) is mapped
                # from this anchor's binary access list.
                if (name not in VALID.get(cls, set()) and GENERATED.match(name) and anchor
                        and (recv == 'this' or recv in params or REPAIRABLE.match(name))):
                    vals = {x['repl'] for x in (ANCHOR_MAP.get(cls, {}).get(anchor) or [])}
                    if len(vals) == 1:
                        r = next(iter(vals))
                        if r != name:
                            out = '%s->%s' % (recv, r)
                            if out != mm.group(0):
                                stats[cls] = stats.get(cls, 0) + 1
                                return out
                return mm.group(0)
            def sub_arr(mm):
                recv, name = mm.group(1), mm.group(2)
                if (name in VALID.get(cls, set()) or not GENERATED.match(name) or not anchor
                        or not (recv == 'this' or recv in params or REPAIRABLE.match(name))):
                    return mm.group(0)
                vals = {x['repl'] for x in (ANCHOR_MAP.get(cls, {}).get(anchor) or [])}
                if len(vals) == 1:
                    r = next(iter(vals))
                    if r != name:
                        out = '%s->%s' % (recv, r)
                        if out != mm.group(0):
                            stats[cls] = stats.get(cls, 0) + 1
                            return out
                return mm.group(0)
            newcode = ACC_ARR.sub(sub_arr, code)
            newcode = ACC.sub(sub, newcode)
            newcode = re.sub(r'__pad_0+([0-9A-Fa-f]+)\b',
                             lambda m: '__pad_' + format(int(m.group(1), 16), 'X'),
                             newcode)
            if newcode != code:
                if SHOW:
                    print('--- %s:%d [%s]' % (path.name, k + 1, cls))
                    print('  - ' + line.strip()[:260])
                    print('  + ' + (newcode + tail).strip()[:260])
                lines[k] = newcode + tail
                changed = True
            k += 1
        i = max(k, i + 1)
    if changed:
        out = '\n'.join(lines)
        if APPLY:
            path.write_bytes(out.encode(codec))
        return True
    return False

def main():
    stats = {}
    touched = []
    for p in sorted((ROOT / 'src').rglob('*.cpp')):
        if process_file(p, stats):
            touched.append(p)
    print(('APPLIED' if APPLY else 'DRY RUN') + ': %d files changed, %d replacements' %
          (len(touched), sum(stats.values())))
    for c, n in sorted(stats.items(), key=lambda kv: -kv[1])[:60]:
        print('  %-30s %d' % (c, n))
    for p in touched:
        print('  file:', p.relative_to(ROOT))

if __name__ == '__main__':
    main()
