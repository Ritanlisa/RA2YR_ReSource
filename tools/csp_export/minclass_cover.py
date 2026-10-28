# -*- coding: utf-8 -*-
"""最小类数求解器（min-class cover）· v1

在 v0（成员偏移签名）之上加入**等式约束**：被 ASSIGN/COPY 连接的实体必须属于同一类。
这就把「每个实体自由选类」收紧为「每个等价类（cluster）只能挑一个类」。

求解：cluster -> 候选类集合（成员兼容 ∩）；贪心最少覆盖：
  反复挑选「出现在最多未覆盖 cluster 的候选集」的类，覆盖之，直到全部覆盖。
这是 min-#classes 的经典 set-cover 近似（与用户设计一致：类数目是目标函数）。
"""
import json
import io
import collections

ROOT = r"D:\RA2YR_ReSource"

lay = json.load(io.open(ROOT + r"\tools\class_layouts.json", encoding="utf-8"))
raw = json.load(io.open(ROOT + r"\tools\type_infer\constraints\raw_constraints.json",
                          encoding="utf-8"))
edges = raw["constraints"]

# 类签名
sig = {}
for cls, v in lay.items():
    s = set()
    for k, rec in (v.get("offsets") or {}).items():
        try:
            o = int(str(k), 10)
        except ValueError:
            continue
        w = rec.get("size") if isinstance(rec, dict) else None
        s.add((o, int(w) if isinstance(w, int) and w > 0 else None))
    if s:
        sig[cls] = s
print("候选类:", len(sig))

# 实体观测
ents = collections.defaultdict(set)
for e in edges:
    if e.get("type") != "MEMBER_ACCESS":
        continue
    b = e.get("base")
    if not isinstance(b, str):
        continue
    try:
        o = int(e.get("offset") or 0)
    except (ValueError, TypeError):
        continue
    w = e.get("width")
    w = int(w) if isinstance(w, (int, float)) and w > 0 else None
    ents[b].add((o, w))
print("实体:", len(ents))

# 等式约束 DSU：只在「都是实体」的节点之间合并
parent = {}
def find(x):
    parent.setdefault(x, x)
    while parent[x] != x:
        parent[x] = parent[parent[x]]
        x = parent[x]
    return x
def union(a, b):
    ra, rb = find(a), find(b)
    if ra != rb:
        parent[ra] = rb

EQUAL_KINDS = {"ASSIGN"}
n_eq = 0
for e in edges:
    if e.get("type") not in EQUAL_KINDS:
        continue
    a, b = e.get("from"), e.get("to")
    if isinstance(a, str) and isinstance(b, str) and a in ents and b in ents:
        union(a, b); n_eq += 1
print("等式边（实体-实体 ASSIGN）:", n_eq)

clusters = collections.defaultdict(set)
for b in ents:
    clusters[find(b)] |= ents[b]
print("等价类（cluster）:", len(clusters))

def compatible(obs):
    out = []
    for cls, cs in sig.items():
        ok = True
        for (o, w) in obs:
            if not any(co == o and (w is None or cw is None or cw == w) for (co, cw) in cs):
                ok = False
                break
        if ok:
            out.append(cls)
    return out

domain = {}
empty = 0
for r, obs in clusters.items():
    if len(obs) < 2:
        continue
    d = compatible(obs)
    domain[r] = set(d)
    if not d:
        empty += 1
print("参与求解的 cluster（>=2 偏移）:", len(domain), "| 无候选类:", empty)

csz = collections.Counter(len(v) for v in domain.values())
print("候选集大小分布: 1 ->", csz[1], "| 2-5 ->", sum(csz[k] for k in range(2, 6)),
      "| 6-50 ->", sum(csz[k] for k in range(6, 51)), "| >50 ->", sum(n for k, n in csz.items() if k > 50))

uncovered = {r for r, d in domain.items() if d}
chosen = []
while uncovered:
    cnt = collections.Counter()
    for r in uncovered:
        for c in domain[r]:
            cnt[c] += 1
    if not cnt:
        break
    best, n = cnt.most_common(1)[0]
    chosen.append((best, n))
    uncovered = {r for r in uncovered if best not in domain[r]}

print("\n== 结果 ==")
print("  解释全部 cluster 所需最少类数（贪心上界）:", len(chosen))
print("  IDA RTTI 类数: 954 | class_layouts 类数:", len(lay))
print("  覆盖最多类:", chosen[:12])
json.dump({"classes": len(chosen), "chosen": chosen, "clusters": len(domain),
           "unexplainable": empty},
          io.open(ROOT + r"\.omo\x203\mincover_v1.json", "w", encoding="utf-8"),
          ensure_ascii=False, indent=0)
