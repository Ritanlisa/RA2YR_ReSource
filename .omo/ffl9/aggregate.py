"""ffl9 聚合：物化（基实体+off→pointee 实体）、宽度冲突弃置、ffl8 交集收敛，
产出 anchors/insn_granularity_types.json。

物化规则（ig-fix 2026-11-18 修订，见 .omo/agents/bm/report_ig_fix.md）：
  T:fn + off        -> M:fn:this:0xoff
  M:fn:this:A + off -> 不可物化（DROP）——指针链偏移折叠禁用
  P:fn:k + off      -> PP:fn:k:0xoff          （k 归一为 %d 十进制，spec 格式串）
  G:a + off         -> GP:a:0xoff
  S/RET/V 基实体不可物化 -> 跳过计数；off<0 跳过（负 pointee 不健全，ffl8 同语义）

M 基折叠禁用理由（report_mr_ig.md §1② 病理②，反汇编实证）：
  M 基实体的寄存器持有 [this+A] 的**值**；以它为基址的访存是解引用该值。
  A 为指针成员时（0x6C4+0x230=0x8F4 算术互证），折叠成 this+(A+off) 是幻影
  成员偏移——校准 3,818:2 实证产物 98.65% 错误（真值来自被指向对象布局，
  与 this 布局无关）。A 为内联子对象时折叠数学上碰巧成立，但事件层无法
  区分两种情况（需 A 的类型知识 = member_types 上游 = 循环依赖）。证据
  纪律：不可判定的证据移出 strict 集（保守化，MR>IG 仲裁同结论）。

类型候选（ig-fix 2026-11-18：词汇表确定性扩词，病理①）：
  判据 = 访问宽度只证明「被访问字节/字的首元素宽度」，成员本身可为任何
  首元素同宽的标量或数组（byte 访问 char[N]/uint8_t[N] 首字节、bool 成员
  均合法）。候选集从 anchors/type_universe.json 按首字节宽度确定性派生：
  u8 -> 全部 1B 标量（char, unsigned char, bool, uint8_t, unsigned __int8）
        + 全部 1B 元素数组（char[N] 家族 / uint8_t[3] 等）
  u16-> 全部 2B 标量（short, unsigned short, signed short, int16_t,
        uint16_t, wchar_t；universe 无 2B 元素数组 token）
  扩词是纯放宽：族域交运算下单调不减，只恢复空交簇，不产生 unique 损失。
冲突：同实体 u16+u16 无冲突；u16 vs u8 = 宽度矛盾 -> 实体弃置 + 计数。
ffl8 合并：同实体（PP 的 k 归一后比较）与 anchors/insn_value_types.json 求交集——
  movzx/movsx 证据的符号性实锤收敛候选集；交集空 = 宽度矛盾 -> 弃置 + 计数。
"""
import json
import re
import collections
import time

universe = set(json.load(open("anchors/type_universe.json"))["types"])


def _derive_types(u):
    """从封闭词汇表按首元素宽度确定性派生 u8/u16 候选集（ig-fix 病理①）。"""
    b1_scalars = {"char", "unsigned char", "bool", "uint8_t", "unsigned __int8"}
    b2_scalars = {"short", "unsigned short", "signed short",
                  "int16_t", "uint16_t", "wchar_t"}
    arr_re = re.compile(r"^([A-Za-z_ ][\w ]*)\[(\d+)\]$")
    u8, u16 = set(b1_scalars), set(b2_scalars)
    for t in u:
        if t in b1_scalars or t in b2_scalars:
            continue
        m = arr_re.match(t)
        if not m:
            continue
        el = m.group(1).strip()
        if el in b1_scalars:
            u8.add(t)
        elif el in b2_scalars:
            u16.add(t)
    return {"u16": sorted(u16), "u8": sorted(u8)}


TYPES = _derive_types(universe)
for labs in TYPES.values():
    for name in labs:
        assert name in universe, "spelling %r not in type_universe" % name

full = json.load(open(".omo/ffl9/full.json"))
events = full["events"]
failed = full["failed_chunks"]

kind_cnt = collections.Counter(e[1] for e in events)
label_cnt = collections.Counter(e[4] for e in events)
base_cnt = collections.Counter(e[2].split(":")[0] for e in events)


def norm_k(k):
    """P 实体 k 段归一：引擎两种来源（%d 十进制参数 / %X 负十六进制 var_N）统一为 int。"""
    try:
        return int(k)
    except ValueError:
        return int(k, 16)


def norm_ent(ent):
    p = ent.split(":")
    if p[0] == "PP" and len(p) == 4:
        return "PP:%s:%d:%s" % (p[1], norm_k(p[2]), p[3])
    return ent


def mat_pointee(E, off):
    """基实体 E + off -> pointee 实体串（off!=0 已在引擎端保证）；不可物化返回 None，坏偏移 'SKIP'。

    ig-fix 2026-11-18：M 基（成员值载入后的解引用）不再折叠为 this:(A+off)——
    指针链病理（report_mr_ig.md §1②），保守 drop + 计数。"""
    parts = E.split(":")
    pfx = parts[0]
    if pfx in ("S", "RET", "V", "M"):
        if pfx == "M":
            return "DROP_FOLD"
        return None
    if pfx == "T":
        return "M:%X:this:0x%X" % (int(parts[1], 16), off) if off > 0 else "SKIP"
    if pfx == "P":
        return "PP:%X:%d:0x%X" % (int(parts[1], 16), norm_k(parts[2]), off) if off > 0 else "SKIP"
    if pfx == "G":
        return "GP:%X:0x%X" % (int(parts[1], 16), off) if off > 0 else "SKIP"
    return None


# ---------- 物化 ----------
mat_form_cnt = collections.Counter()
skip_cnt = collections.Counter()
raw_events = []  # (ea, kind, ent, label)

for e in events:
    ea, kind, E, off, lab = e[0], e[1], e[2], e[3], e[4]
    ent = mat_pointee(E, off)
    if ent == "DROP_FOLD":
        skip_cnt["pointee_member_fold_dropped"] += 1
        continue
    if ent is None:
        skip_cnt["pointee_unmaterializable_%s" % E.split(":")[0]] += 1
        continue
    if ent == "SKIP":
        skip_cnt["pointee_bad_offset"] += 1
        continue
    mat_form_cnt[ent.split(":")[0]] += 1
    raw_events.append((ea, kind, norm_ent(ent), lab))

# ---------- 去重 / 宽度冲突 ----------
agg = collections.defaultdict(lambda: {"labels": set(), "sites": []})
for ea, kind, ent, lab in raw_events:
    agg[ent]["labels"].add(lab)
    agg[ent]["sites"].append((ea, kind))

conflicts = {e: v for e, v in agg.items() if len(v["labels"]) > 1}
clean = {e: v for e, v in agg.items() if len(v["labels"]) == 1}
width_combo = collections.Counter(tuple(sorted(v["labels"])) for v in conflicts.values())
events_dropped = sum(1 for ea, k, ent, lab in raw_events if ent in conflicts)
width_hist = collections.Counter(next(iter(v["labels"])) for v in clean.values())

# ---------- ffl8 交集收敛 ----------
ffl8 = json.load(open("anchors/insn_value_types.json"))
ffl8_types = {}
for x in ffl8["evidence"]:
    ffl8_types[norm_ent(x["ent"])] = set(x["types"])

overlap_ents = set(clean) & set(ffl8_types)
converged = 0
ffl8_conflict_dropped = 0
evidence = []
new_cover = 0
for ent, v in sorted(clean.items()):
    lab = next(iter(v["labels"]))
    cands = list(TYPES[lab])
    ea0, kind0 = min(v["sites"])
    via = "%s@0x%X" % (kind0, ea0)
    if ent in ffl8_types:
        inter = [t for t in cands if t in ffl8_types[ent]]
        if not inter:
            ffl8_conflict_dropped += 1
            continue
        if len(inter) < len(cands):
            converged += 1
            via += "+ffl8"
        cands = inter
    else:
        new_cover += 1
    evidence.append({"ent": ent, "types": cands, "via": via})

meta = {
    "generated": time.strftime("%Y-%m-%d %H:%M:%S"),
    "generator": ".omo/ffl9 (ffl4 engine copy; bare partial-register granularity; "
                 "ig-fix 2026-11-18: 1B/2B vocabulary derived from type_universe "
                 "+ M-base pointer-chain fold dropped)",
    "method": {
        "IPL": "mov r16,[base+off] / mov r8,[base+off], dst in "
               "{ax,bx,cx,dx,si,di,bp | al,bl,cl,dl,ah,bh,ch,dh} (ah/bh/ch/dh high "
               "byte = byte granularity). IDA omits size prefix when register "
               "implies width (probe-verified) -> width criterion = register name. "
               "-> [ea,'IPL',E,off,'u16'|'u8']",
        "IPS": "mov [base+off],r16 / mov [base+off],r8, src partial register -> "
               "same event shape, kind 'IPS'",
        "base_entity": "base_ent: als->T:fn first, else def[reg]; prefixes T/M/P/G "
                       "kept, S/RET/V suppressed (noise); off!=0 (ffl7/ffl8 "
                       "semantics); HIWORD [base+X+2] covered by multi-constant "
                       "offset folding in off_of",
        "materialization": "T:fn+off->M:fn:this:off | P:fn:k+off->PP:fn:k:off "
                           "(k normalized to decimal per spec) | G:a+off->GP:a:off "
                           "| off<0 dropped | M-base fold DROPPED (ig-fix "
                           "2026-11-18: pointer-chain offset folding produced "
                           "phantom this+(A+off) members, see "
                           ".omo/agents/bm/report_ig_fix.md)",
        "type_candidates": "width criterion proves only the first-element width "
                           "of the accessed member -> candidate set derived "
                           "deterministically from anchors/type_universe.json: "
                           "u8 = all 1B scalars (char, unsigned char, bool, "
                           "uint8_t, unsigned __int8) + all 1B-element arrays "
                           "(char[N] family); u16 = all 2B scalars (short, "
                           "unsigned short, signed short, int16_t, uint16_t, "
                           "wchar_t). Pure widening: intersections are "
                           "monotone non-shrinking (ig-fix 2026-11-18, "
                           "pathology-1 vocabulary gap bool/char[N]).",
        "ffl8_merge": "entities overlapping anchors/insn_value_types.json "
                      "(movzx/movsx = signedness proof) intersect candidate sets; "
                      "empty intersection = width contradiction -> dropped",
        "soundness": "events fire pre-transfer (def state = before instruction); "
                     "join = intersection, <=10 fixpoint rounds; bare mov only "
                     "(movzx/movsx collected by ffl7/ffl8, overlap deduped here)",
    },
    "spelling_source": "anchors/type_universe.json (closed vocabulary; every "
                       "derived candidate token asserted present)",
    "counts": {
        "events_total": len(events),
        "events_by_kind": dict(kind_cnt),
        "events_by_label": dict(label_cnt),
        "events_by_base_prefix": dict(base_cnt),
        "events_materialized": len(raw_events),
        "materialization_skips": dict(skip_cnt),
        "pointee_forms": dict(mat_form_cnt),
        "entities_unique": len(agg),
        "entities_width_contradictory": len(conflicts),
        "entities_evidence": len(evidence),
        "events_dropped_by_contradiction": events_dropped,
        "failed_chunks": failed,
    },
    "width_contradiction_combos": {"|".join(k): v for k, v in sorted(width_combo.items())},
    "width_histogram": dict(width_hist),
    "ffl8_overlap": {
        "ffl8_entities": len(ffl8_types),
        "ffl9_entities_pre_merge": len(clean),
        "overlap_entities": len(overlap_ents),
        "candidates_narrowed_by_ffl8": converged,
        "width_conflict_dropped": ffl8_conflict_dropped,
        "new_coverage": new_cover,
    },
}

# ig-fix: u8 域扩至 ~446 token，indent=1 的逐 token 展开会产生数百万行。
# evidence 每条单行 compact（消费端 _load_type_family 只做 OR 掩码，无序无碍）。
_out = open("anchors/insn_granularity_types.json", "w")
_out.write('{"meta": ' + json.dumps(meta, indent=1) + ',\n "evidence": [\n')
_out.write(",\n".join("  " + json.dumps(x) for x in evidence))
_out.write("\n ]\n}")
_out.close()

print("events: %d  kinds: %s  labels: %s" % (len(events), dict(kind_cnt), dict(label_cnt)))
print("base prefixes: %s" % dict(base_cnt))
print("materialized: %d | skips: %s | pointee forms: %s"
      % (len(raw_events), dict(skip_cnt), dict(mat_form_cnt)))
print("TYPES derived: u8=%d tokens (sample %s) | u16=%d tokens"
      % (len(TYPES["u8"]), TYPES["u8"][:6], len(TYPES["u16"])))
print("entities unique: %d | width-contradictory(dropped): %d | evidence: %d"
      % (len(agg), len(conflicts), len(evidence)))
print("width combos:", dict(width_combo), "| width hist:", dict(width_hist))
print("ffl8 overlap: %d | narrowed: %d | conflict-dropped: %d | new coverage: %d"
      % (len(overlap_ents), converged, ffl8_conflict_dropped, new_cover))
print("[out] anchors/insn_granularity_types.json  (%d evidence entries)" % len(evidence))
for x in evidence[:6]:
    print("   %s -> %d types: %s%s" % (x["ent"], len(x["types"]),
                                       x["types"][:4], "..." if len(x["types"]) > 4 else ""))
