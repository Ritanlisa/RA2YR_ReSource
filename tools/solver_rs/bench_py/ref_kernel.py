#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""minclass 求解内核 —— Python 参照实现（与 tools/solver_rs 同算法同数据）。

这是「求解器同款数据结构」的最小核：dict 键 union-find + 任意精度 int 位掩码
+ 集合/字典循环。不是完整求解器（族证据只含 C1 尺寸下界 + C4 EXACT，
G/M 证明、C2/C3/C5..、improve 省略——与 Rust 核完全同口径）。

输出与 Rust 侧相同的统计键，供 run_bench.py 对拍。
"""

import io
import json
import os
import sys
import time
import bisect

try:
    import orjson

    def jload(path):
        with open(path, "rb") as fh:
            return orjson.loads(fh.read())
except ImportError:  # pragma: no cover
    def jload(path):
        with io.open(path, encoding="utf-8") as fh:
            return json.load(fh)

ROOT = sys.argv[1] if len(sys.argv) > 1 else "."
WANT_PROP = "--prop" in sys.argv
OUT_JSON = None
if "--out":
    try:
        OUT_JSON = sys.argv[sys.argv.index("--out") + 1]
    except (IndexError, ValueError):
        OUT_JSON = None

T = {}


def tic():
    return time.perf_counter()


REGS = {"eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp"}
DATA_LO, DATA_HI = 0x812000, 0xB7A000


def hx(s, default=None):
    if isinstance(s, int):
        return s
    if not isinstance(s, str):
        return default
    t = s.strip().lower()
    if t.startswith("0x"):
        t = t[2:]
    try:
        return int(t, 16)
    except ValueError:
        return default


# ---------------------------------------------------------------------------
# ent_id（复刻 minclass_solver.ent_id）
# ---------------------------------------------------------------------------

import re

_RE_ADDRISH = re.compile(r"^[0-9A-Fa-f]{6,8}:")


def global_addr(tok):
    tok = tok.strip()
    if tok.startswith("0x"):
        a = hx(tok)
        return a if a is not None and DATA_LO <= a < DATA_HI else None
    if re.search(r"(dword|byte|word|stru|off|qword|flt)_", tok):
        m = re.search(r"([0-9A-Fa-f]{6,8})$", tok)
        if m:
            a = int(m.group(1), 16)
            if DATA_LO <= a < DATA_HI:
                return a
    return None


def ent_id(raw, fn=None):
    if not isinstance(raw, str):
        return None
    s = raw.strip()
    if not s:
        return None
    if s.endswith(".return"):
        a = hx(s[: -len(".return")])
        return ("RET:%X" % a) if a is not None else None
    if s in REGS:
        return ("R:%X:%s" % (fn, s)) if fn is not None else None
    if s.startswith("stack_+"):
        return ("S:%X:%s" % (fn, s[6:])) if fn is not None else None
    if s.startswith("vtable_slot_"):
        a = hx(s[len("vtable_slot_"):].split(":")[0])
        return ("V:%X" % a) if a is not None else None
    if s.startswith("offset "):
        g = global_addr(s[7:].strip())
        return ("G:%X" % g) if g is not None else None
    if s.startswith("0x") or _RE_ADDRISH.match(s):
        a = hx(s.split(":")[0])
        if a is None:
            return None
        if ".member(" in s:
            off = s.split(".member(", 1)[1].rstrip(")")
            which = "this"
            if "::param" in s:
                which = "p" + s.split("::param", 1)[1].split(".")[0]
            return "M:%X:%s:%s" % (a, which, off)
        if s.endswith(".return"):
            return "RET:%X" % a
        if s.endswith(":this"):
            return "T:%X" % a
        if "::param" in s:
            return "P:%X:%s" % (a, s.split("::param", 1)[1])
    return None


# ---------------------------------------------------------------------------
# 宇宙（复刻 build_universe 骨架：直接名 + alias + @ 剥离）
# ---------------------------------------------------------------------------

t0 = tic()
db = jload(os.path.join(ROOT, "anchors", "class_db.json"))["classes"]
names = list(db.keys())
n_cls_only = len(names)
idx = {nm: i for i, nm in enumerate(names)}
for t in (jload(os.path.join(ROOT, "anchors", "type_universe.json")) or {}).get("types") or []:
    if t not in idx:
        idx[t] = len(names)
        names.append(t)
n = len(names)
FULL = (1 << n) - 1
CLASSMASK = (1 << n_cls_only) - 1

alias = {}
_r2c = (jload(os.path.join(ROOT, "anchors", "class_name_align.json")) or {}).get("rtti_to_canon") or {}
for rn, rec in _r2c.items():
    c = rec.get("canon") if isinstance(rec, dict) else rec
    if c in idx and rn not in alias:
        alias[rn] = c
for k, v in (jload(os.path.join(ROOT, "anchors", "mangled_alias.json")) or {}).items():
    c = v if isinstance(v, str) else (v or {}).get("canon")
    if c in idx and k not in alias:
        alias[k] = c


def resolve(name):
    if not isinstance(name, str):
        return None
    s = name.strip()
    if not s:
        return None
    if s in idx:
        return idx[s]
    if s in alias:
        return idx[alias[s]]
    t = s
    for _ in range(8):
        if t in idx:
            return idx[t]
        if t in alias:
            return idx[alias[t]]
        if t.endswith("@"):
            t = t[:-1]
            continue
        break
    if s.startswith("?$"):
        base = s[2:].split("@", 1)[0]
        if base in idx:
            return idx[base]
    return None


lay = jload(os.path.join(ROOT, "tools", "class_layouts.json")) or {}
layout_size = [None] * n
has_layout = [False] * n
for nm, rec in lay.items():
    if nm in idx and isinstance(rec, dict):
        has_layout[idx[nm]] = True
        s = rec.get("size")
        if isinstance(s, int):
            layout_size[idx[nm]] = s
T["universe"] = (tic() - t0) * 1e6

# ---------------------------------------------------------------------------
# 载入
# ---------------------------------------------------------------------------

t0 = tic()
raw = jload(os.path.join(ROOT, "tools", "type_infer", "constraints", "raw_constraints.json"))["constraints"]
facts = jload(os.path.join(ROOT, "anchors", "minclass_binary_facts.json"))
protos = jload(os.path.join(ROOT, "anchors", "ida_function_protos.json"))
faddrs = sorted(int(a, 16) for a in protos)
try:
    ret_this = (jload(os.path.join(ROOT, "anchors", "fn_returns_this.json")) or {}).get("map") or {}
except Exception:
    ret_this = {}
try:
    takes_this = jload(os.path.join(ROOT, "anchors", "fn_takes_this.json")) or {}
except Exception:
    takes_this = {}
T["load"] = (tic() - t0) * 1e6


def fn_at(a):
    if not faddrs or a is None:
        return None
    i = bisect.bisect_right(faddrs, a) - 1
    return faddrs[i] if i >= 0 else None


# ---------------------------------------------------------------------------
# 阶段 1：实体/观测
# ---------------------------------------------------------------------------

t0 = tic()
ents = {}


def touch(eid):
    if eid is None or eid.startswith(("R:", "V:")):
        return None
    if eid not in ents:
        ents[eid] = {"obs": set()}
    return eid


c1_evidence = 0
for e in raw:
    if e.get("type") != "CALL_ARG":
        continue
    to = e.get("to")
    if not (isinstance(to, str) and to.endswith(":this")):
        continue
    if to.startswith("vtable_slot_"):
        continue
    touch(ent_id(to))

for e in raw:
    if e.get("type") != "MEMBER_ACCESS":
        continue
    base = e.get("base")
    eid = ent_id(base)
    if eid is None:
        continue
    try:
        o = int(e.get("offset") or 0)
    except (TypeError, ValueError):
        continue
    w = e.get("width")
    w = int(w) if isinstance(w, (int, float)) and w > 0 else None
    touch(eid)
    ents[eid]["obs"].add((o, w))
    c1_evidence += 1

for e in raw:
    t = e.get("type")
    if t == "FUNC_PARAM":
        fr = e.get("from")
        a = hx(str(fr).split(":")[0]) if ":this" in str(fr) else None
        touch(ent_id(fr, a))
    elif t == "CALL_ARG":
        a = hx(e.get("addr")) or 0
        touch(ent_id(e.get("to")))
        touch(ent_id(e.get("from"), fn_at(a)))
    elif t == "CALL_VTABLE":
        a = hx(e.get("addr")) or 0
        touch(ent_id(e.get("receiver"), fn_at(a)))
        touch(ent_id(e.get("to")))
    elif t == "RETURN":
        touch(ent_id(e.get("to")))

if facts:
    for fn_, site, _sz, _d in facts.get("alloc_sites") or []:
        touch("N:%X" % site)
T["collect"] = (tic() - t0) * 1e6

# ---------------------------------------------------------------------------
# 阶段 2：C4 EXACT
# ---------------------------------------------------------------------------

t0 = tic()
src = {}
for fn_, site, off, sym in facts.get("this_installs") or []:
    if off != 0:
        continue
    ci = resolve(sym)
    if ci is not None:
        src.setdefault(fn_, set()).add(ci)
c4_exact = 0
exact = {}
for a, ex in src.items():
    if len(ex) != 1:
        continue
    eid = "T:%X" % a
    if eid in ents:
        exact[eid] = [(next(iter(ex)), "C4")]
        c4_exact += 1
T["c4_exact"] = (tic() - t0) * 1e6

# ---------------------------------------------------------------------------
# 阶段 3：等值合并（UF = 求解器同款 dict 路径压缩 + 最小串根 + EXACT 守卫）
# ---------------------------------------------------------------------------

t0 = tic()
p = {}


def find(x):
    if x not in p:
        p[x] = x
        return x
    r = x
    while p[r] != r:
        r = p[r]
    while p[x] != r:
        p[x], x = r, p[x]
    return r


root_exact = {}
for eid, lst in exact.items():
    root_exact.setdefault(find(eid), set()).update(ci for ci, _s in lst)

unions = 0
exact_rejects = 0


def un(a, b):
    global unions, exact_rejects
    if a is None or b is None:
        return False
    ra, rb = find(a), find(b)
    if ra == rb:
        return False
    ea, eb = root_exact.get(ra) or set(), root_exact.get(rb) or set()
    if ea and eb and ea.isdisjoint(eb):
        exact_rejects += 1
        return False
    if ra > rb:
        ra, rb = rb, ra
    p[rb] = ra
    root_exact[ra] = ea | eb
    root_exact.pop(rb, None)
    unions += 1
    return True


for e in raw:
    if e.get("type") != "FUNC_PARAM":
        continue
    fr = e.get("from")
    a = hx(str(fr).split(":")[0]) if isinstance(fr, str) else None
    un(ent_id(fr, a), ent_id(e.get("to"), a))

# CALL_ARG 候选
_edge_cnt = {}
for e in raw:
    if e.get("type") != "CALL_ARG":
        continue
    to = e.get("to")
    if isinstance(to, str) and (":this" in to or "::param" in to):
        _edge_cnt[to] = _edge_cnt.get(to, 0) + 1
edge_cnt_by_ent = {}
for t5s, c5 in _edge_cnt.items():
    ee5 = ent_id(t5s)
    if ee5 is not None:
        edge_cnt_by_ent[ee5] = max(edge_cnt_by_ent.get(ee5, 0), c5)

site_reg = {}
for lk in facts.get("reg_links") or ():
    if len(lk) >= 4:
        site_reg[(lk[0], lk[1])] = (lk[2], bool(lk[3]))


def is_arg_target(to):
    return isinstance(to, str) and (to.endswith(":this") or "::param" in to) \
        and not to.startswith("vtable_slot_")


cands = []
target_froms = {}
for e in raw:
    if e.get("type") != "CALL_ARG" or not is_arg_target(e.get("to")):
        continue
    fr = e.get("from")
    if not isinstance(fr, str) or fr.startswith("stack_+"):
        continue
    a = hx(e.get("addr")) or 0
    te = ent_id(e.get("to"))
    if te is None:
        continue
    if fr in REGS:
        sr = site_reg.get((a, fr))
        if sr and sr[0]:
            cands.append(("reg_def", sr[0], te, sr[0][0], bool(sr[1])))
            target_froms.setdefault(te, set()).add(sr[0])
        continue
    fe = ent_id(fr, fn_at(a))
    if fe is None:
        continue
    cands.append(("callarg_direct", fe, te, fe[0], True))
    target_froms.setdefault(te, set()).add(fe)

rejected = {}


def reject(reason):
    rejected[reason] = rejected.get(reason, 0) + 1


for channel, fe, te, kind, clean in cands:
    if len(target_froms.get(te, ())) > 1 or edge_cnt_by_ent.get(te, 0) > 1:
        reject("multi_caller_join")
        continue
    if channel == "reg_def":
        if not clean:
            reject("reg_flow_tainted")
            continue
    elif kind == "G":
        reject("global_unproven(kernel)")
        continue
    elif kind == "M":
        reject("member_chain_unproven(kernel)")
        continue
    elif kind not in ("T", "P"):
        reject("unproven_kind")
        continue
    un(fe, te)

for as_r, flag in (ret_this or {}).items():
    if not flag:
        continue
    ar = hx(as_r)
    if ar is None:
        continue
    _re, _te = "RET:%X" % ar, "T:%X" % ar
    if _re in ents and _te in ents:
        un(_re, _te)

for as_c, t20 in (takes_this or {}).items():
    if not t20:
        continue
    a20 = hx(as_c[2:]) if str(as_c).lower().startswith("0x") else hx(as_c)
    if a20 is None:
        continue
    _r20, _t20e = "R:%X:ecx" % a20, "T:%X" % a20
    if _r20 in ents and _t20e in ents:
        un(_r20, _t20e)

for (_site17, _reg17), (_src17, _clean17) in site_reg.items():
    if not _clean17 or not isinstance(_src17, str) or not _src17.startswith("T:"):
        continue
    _reid17 = "R:%s:%s" % (_src17[2:], _reg17)
    if _reid17 in ents and _src17 in ents:
        un(_reid17, _src17)
T["equality"] = (tic() - t0) * 1e6

# ---------------------------------------------------------------------------
# 阶段 4：簇
# ---------------------------------------------------------------------------

t0 = tic()
groups = {}
for eid in ents:
    groups.setdefault(find(eid), []).append(eid)
clusters = []
for root, members in groups.items():
    obs = set()
    exs = {}
    for m in members:
        obs |= ents[m]["obs"]
        for ci, s in exact.get(m, ()):
            exs.setdefault(ci, []).append(s)
    clusters.append({"root": root, "ents": members, "obs": obs, "exact": exs})
T["clusters"] = (tic() - t0) * 1e6

# ---------------------------------------------------------------------------
# 阶段 5：簇域 + 贪心
# ---------------------------------------------------------------------------

t0 = tic()
_size_ok_cache = {}


def c1_size_mask(need):
    m = _size_ok_cache.get(need)
    if m is None:
        m = 0
        for i in range(n):
            sz = layout_size[i]
            if not sz or int(sz) >= need:
                m |= 1 << i
        _size_ok_cache[need] = m
    return m


dom_list = []  # (cluster, domain, exact_ci, hard_flag)
conflicted = 0
for cl in clusters:
    root = cl["root"]
    pfx2 = root[:2]
    c1_applies = pfx2 == "T:"
    m = FULL
    masks_c1 = FULL
    if c1_applies and cl["obs"]:
        need = 0
        for (o, w) in cl["obs"]:
            ww = w if w else 4
            if o + ww > need:
                need = o + ww
        if need:
            masks_c1 = m = c1_size_mask(need)
    exs = cl["exact"]
    if len(exs) == 1:
        exact_ci = next(iter(exs))
        dom_list.append((cl, 1 << exact_ci, exact_ci, None))
        continue
    if len(exs) > 1:
        d = 0
        for ci in exs:
            d |= 1 << ci
        dom_list.append((cl, d, None, "exact_conflict"))
        continue
    if pfx2 in ("T:", "R:", "GS"):
        if masks_c1 & CLASSMASK:
            masks_c1 &= CLASSMASK
        else:
            masks_c1 = FULL
        if m & CLASSMASK:
            m &= CLASSMASK
    if m:
        dom_list.append((cl, m, None, None))
        continue
    fb = 0
    if masks_c1 and masks_c1 != FULL:
        fb |= masks_c1
    if not fb:
        fb = FULL
    dom_list.append((cl, fb, None, None))

constrained = [(cl, m) for (cl, m, exci, hf) in dom_list if hf is None and m != FULL]
conflicted = sum(1 for (_cl, _m, _exci, hf) in dom_list if hf is not None)
forced = set()
pinned = set()
for (cl, m, exci, hf) in dom_list:
    if exci is not None:
        forced.add(exci)
    elif m and m.bit_count() == 1:
        forced.add(m.bit_length() - 1)
for (cl, m) in constrained:
    if m.bit_count() == 1:
        pinned.add(m.bit_length() - 1)
dom_popcount_sum = sum(m.bit_count() for (_cl, m) in constrained)

# greedy（复刻 solver greedy + support tie-break）
nc = len(constrained)
cover_of = {}
cls_of_cluster = []
for ci_cl, (cl, m) in enumerate(constrained):
    mm = m
    lst = []
    while mm:
        b = mm & -mm
        i = b.bit_length() - 1
        lst.append(i)
        cover_of.setdefault(i, set()).add(ci_cl)
        mm ^= b
    cls_of_cluster.append(lst)
uncovered = set(range(nc))
counts = {i: len(s) for i, s in cover_of.items()}
support = {}
for (cl, m) in constrained:
    if m.bit_count() == 1:
        support[m.bit_length() - 1] = support.get(m.bit_length() - 1, 0) + 1
ALL_EXACT = {ci for cl in clusters for ci in cl["exact"]}
for ci in ALL_EXACT:
    support[ci] = support.get(ci, 0) + 1
chosen = []
while uncovered:
    best, bestn, bestsup = -1, 0, -1
    for i, c in counts.items():
        if c > bestn or (c == bestn and c > 0 and support.get(i, 0) > bestsup):
            best, bestn, bestsup = i, c, support.get(i, 0)
    if best < 0 or bestn == 0:
        break
    take = cover_of[best] & uncovered
    for cl in take:
        for c in cls_of_cluster[cl]:
            if counts.get(c, 0) > 0:
                counts[c] -= 1
    counts[best] = -1
    chosen.append(best)
    uncovered -= take

# lower_bound
idxs = sorted(range(len(constrained)), key=lambda i: constrained[i][1].bit_count())
picked_union = 0
lb = 0
for i in idxs:
    m = constrained[i][1]
    if m and not (m & picked_union):
        picked_union |= m
        lb += 1
T["solve"] = (tic() - t0) * 1e6

# ---------------------------------------------------------------------------
# 传播吞吐微基准（60 族合成层，与 Rust 同 PRNG）
# ---------------------------------------------------------------------------

prop_micros = 0
prop_gen_micros = 0
prop_and_ops = 0
prop_checksum = 0
if WANT_PROP:
    M64 = (1 << 64) - 1

    def splitmix64(x):
        x = (x + 0x9E3779B97F4A7C15) & M64
        z = x
        z = ((z ^ (z >> 30)) * 0xBF58476D1CE4E5B9) & M64
        z = ((z ^ (z >> 27)) * 0x94D049BB133111EB) & M64
        return z ^ (z >> 31), x

    def fnv1a64(s):
        h = 0xCBF29CE484222325
        for b in s.encode("utf-8"):
            h ^= b
            h = (h * 0x100000001B3) & M64
        return h

    _fnv_cache = {}

    def ent_fnv(eid):
        v = _fnv_cache.get(eid)
        if v is None:
            v = _fnv_cache[eid] = fnv1a64(eid)
        return v

    n_fams = 60

    # phase 1：预生成非 FULL 掩码（单独计时）
    t0 = tic()
    fam_maps = [dict() for _ in range(n_fams)]  # fam -> {ent_str: mask}
    for cl in clusters:
        for eid in cl["ents"]:
            h = ent_fnv(eid)
            for f in range(n_fams):
                st = (h * 0x9E3779B9 + (f << 32)) & M64
                r0, st = splitmix64(st)
                if r0 & 15 != 0:
                    continue  # FULL：无证据
                fm = 0
                filled = 0
                while filled < n:
                    r, st = splitmix64(st)
                    for b in range(64):
                        if filled >= n:
                            break
                        fm |= ((r >> b) & 1) << filled
                        filled += 1
                if fm != FULL:
                    fam_maps[f][eid] = fm
    prop_gen_micros = (tic() - t0) * 1e6

    # phase 2：传播（主计时；= 求解器 cluster_domains 内层循环形状）
    t0 = tic()
    for cl in clusters:
        m = FULL
        for f in range(n_fams):
            fm_fam = fam_maps[f]
            mf = FULL
            hit = False
            for eid in cl["ents"]:
                fm = fm_fam.get(eid)
                if fm is not None:
                    mf &= fm
                    hit = True
            if hit:
                m &= mf
        prop_checksum += m.bit_count()
    prop_micros = (tic() - t0) * 1e6
    for cl in clusters:
        prop_and_ops += (len(cl["ents"]) + 1) * n_fams

# ---------------------------------------------------------------------------
# 输出
# ---------------------------------------------------------------------------

res = {
    "n_edges": len(raw),
    "n_ents": len(ents),
    "n_ents_obs": sum(1 for r in ents.values() if r["obs"]),
    "c1_evidence": c1_evidence,
    "c4_exact": c4_exact,
    "uf_nodes": len(p),
    "unions": unions,
    "exact_rejects": exact_rejects,
    "merge_rejects": sorted(rejected.items()),
    "n_clusters": len(clusters),
    "n_constrained": len(constrained),
    "n_conflicted": conflicted,
    "n_free": len(clusters) - len(constrained) - conflicted,
    "k_greedy": len(chosen),
    "lower_bound": lb,
    "forced_classes": len(forced),
    "pinned_classes": len(pinned),
    "dom_popcount_sum": dom_popcount_sum,
}

print("== python ref kernel ==")
print("[universe] n=%d cls_only=%d with_layout=%d  (%d ms)"
      % (n, n_cls_only, sum(1 for b in has_layout if b), T["universe"] / 1000))
print("[load] edges=%d  (%d ms)" % (len(raw), T["load"] / 1000))
print("[collect] ents=%d with_obs=%d c1_evidence=%d  (%d ms)"
      % (res["n_ents"], res["n_ents_obs"], c1_evidence, T["collect"] / 1000))
print("[c4_exact] pins=%d  (%d ms)" % (c4_exact, T["c4_exact"] / 1000))
print("[equality] uf_nodes=%d unions=%d exact_rejects=%d  (%d ms)"
      % (len(p), unions, exact_rejects, T["equality"] / 1000))
for k, v in sorted(rejected.items()):
    print("           reject %s=%d" % (k, v))
print("[clusters] n=%d  (%d ms)" % (len(clusters), T["clusters"] / 1000))
print("[solve] constrained=%d conflicted=%d free=%d  (%d ms)"
      % (len(constrained), conflicted, res["n_free"], T["solve"] / 1000))
print("        k_greedy=%d lower_bound=%d forced=%d pinned=%d"
      % (len(chosen), lb, len(forced), len(pinned)))
print("        dom_popcount_sum=%d" % dom_popcount_sum)
if WANT_PROP:
    print("[prop-bench] 60 fams: propagate %d ops in %d ms; gen in %d ms  checksum=%d"
          % (prop_and_ops, prop_micros / 1000, prop_gen_micros / 1000, prop_checksum))
total = sum(T[k] for k in ("universe", "load", "collect", "c4_exact", "equality", "clusters", "solve"))
print("[total-kernel] %d ms" % (total / 1000))

if OUT_JSON:
    out = {
        "universe": {"n": n, "n_cls_only": n_cls_only,
                     "with_layout": sum(1 for b in has_layout if b)},
        "timings_us": {k: round(v) for k, v in T.items()},
        "prop": {"and_ops": prop_and_ops, "checksum": prop_checksum,
                 "micros": round(prop_micros), "gen_micros": round(prop_gen_micros)},
        "result": res,
    }
    with io.open(OUT_JSON, "w", encoding="utf-8") as fh:
        json.dump(out, fh, ensure_ascii=False, indent=1)
