#!/usr/bin/env python3
"""CSP 归属深度修复: member-value 越界观测 -> this 类型沿格下推。

架构依据(用户裁决): this 判定用父类关系(subsumption)——vtable/成员访问的
this = 包含类的最深公共祖先(LCA join)。越界观测 (cls, off) 的含义:
接收者实际是 cls 的某个后代(偏移落在其 own 区)。修复 = this 升为
LCA(包含 off 的 cls 后代集 S), 严格深于原归属时才升级(只升不降)。

输出: csp_functions params[0].real_type 升级 + depth_upgrades.json 台账。
"""
import json
import re
import collections

layouts = json.load(open('tools/class_layouts.json', encoding='utf-8', errors='replace'))
csp_path = 'tools/csp/full_report/csp_functions.json'
csp = json.load(open(csp_path, encoding='utf-8', errors='replace'))

# ---- 格: layouts.parent 主链 (布局推理的权威格) ----
LATT = {c: i for c, i in layouts.items() if i.get('size')}
parent = {c: i.get('parent') for c, i in LATT.items()}
children = collections.defaultdict(list)
for c, p in parent.items():
    if p:
        children[p].append(c)


def ancestors(c):
    out, cur = set(), c
    while cur and cur in LATT:
        out.add(cur)
        cur = parent.get(cur)
    return out


DEPTH = {}


def depth(c):
    if c not in DEPTH:
        DEPTH[c] = 1 + (depth(parent[c]) if parent.get(c) else 0)
    return DEPTH[c]


# 子树缓存
SUB = {}


def subtree(c):
    if c not in SUB:
        s = {c}
        for ch in children.get(c, []):
            s |= subtree(ch)
        SUB[c] = s
    return SUB[c]


def lca(classes):
    anc_sets = [ancestors(c) for c in classes]
    if not anc_sets:
        return None
    common = set.intersection(*anc_sets)
    if not common:
        return None
    return max(common, key=depth)


# ---- 观测索引: (cls, off) -> [fn...] ----
PRIM = {'void', 'int', 'char', 'short', 'long', 'float', 'double', 'unsigned',
        'signed', 'BOOL', 'DWORD', 'WORD', 'BYTE', 'LPVOID', 'HANDLE', 'HWND',
        'UINT', 'WCHAR', 'void*', 'int*', 'char*', 'void *', 'int *',
        'char *', 'unknown', ''}
cls_pat = re.compile(r'^([A-Za-z_]\w*)\s*\*?$')
tm = json.load(open('type_map.json', encoding='utf-8', errors='replace'))['type_map']
obs = collections.defaultdict(set)
n_obs = 0
for k in tm:
    m = re.match(r'^(0x[0-9A-Fa-f]+):this\.member\(0x([0-9A-Fa-f]+)\)$', k)
    if not m:
        continue
    n_obs += 1
    fn, off = m.group(1), int(m.group(2), 16)
    f = csp['functions'].get(fn)
    if not f:
        continue
    params = f.get('params') or []
    t = ''
    if params and isinstance(params[0], dict):
        t = (params[0].get('real_type') or params[0].get('type') or '').strip()
    cm = cls_pat.match(t)
    if cm and t not in PRIM and cm.group(1) in LATT:
        obs[(cm.group(1), off)].add(fn)

print('observations:', n_obs, '| (cls,off) groups:', len(obs))

# ---- 深度升级 ----
upgrades = {}
ambig = {}
n_in = n_ooo = n_up = n_ambig = 0
for (cls, off), fns in sorted(obs.items()):
    n_in += 0 if off >= LATT[cls]['size'] else 1
    if off < LATT[cls]['size']:
        continue  # 界内: 无需修复
    n_ooo += 1
    S = [c for c in subtree(cls)
         if c in LATT and off < LATT[c]['size']]
    if not S:
        continue  # 全树无人包含: 伪影观测, 留记账
    target = lca(S)
    if not target or target == cls:
        n_ambig += 1  # 跨分支只交于 cls: subsumption 保持基类(正确)
        for fn in fns:
            f = csp['functions'][fn]
            p0 = (f.get('params') or [{}])[0]
            p0['subsumption_note'] = (
                'off 0x%X spans multiple subclasses of %s; base class is the '
                'correct LCA (no-evidence subclass vote forbidden)' % (off, cls))
            ambig[fn] = {'base': cls, 'off': off, 'S_size': len(S)}
        continue
    if LATT[target]['size'] <= off and len(S) > 1:
        # LCA 自身不覆盖 off(own 起点族): 类型仍升 LCA(格语义),
        # 成员登记留待更深层证据
        pass
    for fn in fns:
        f = csp['functions'][fn]
        p0 = (f.get('params') or [{}])[0]
        old = p0.get('real_type') or ''
        p0['real_type'] = target
        p0['depth_upgrade'] = ('%s -> %s by member(0x%X) LCA-of-%d'
                               % (cls, target, off, len(S)))
        upgrades[fn] = {'from': cls, 'to': target, 'off': off,
                        'S_size': len(S), 'fns': sorted(fns)}
    n_up += 1

print(f'in-bounds groups: {n_in} | out-of-bounds groups: {n_ooo}')
print(f'upgraded groups: {n_up} | ambiguous(keep base): {n_ambig}')
json.dump(csp, open(csp_path, 'w', encoding='utf-8', errors='replace'))
json.dump(upgrades, open('.omo/depth_upgrades.json', 'w'), indent=1)
json.dump(ambig, open('.omo/depth_ambiguous.json', 'w'), indent=1)

# 函数级统计
fn_up = set()
for g in upgrades.values():
    fn_up |= set(g['fns'])
pairs = collections.Counter((g['from'], g['to']) for g in upgrades.values())
print('functions upgraded:', len(fn_up))
print('top (from->to):', pairs.most_common(8))
