# CSP 缺陷审计（X123 W4 — 仅测量，不修引擎）

日期：2026-10-24 · HEAD `b246ef5e` · 工具：`.omo/x123/s4_w4_measure.py`（可重跑）·
原始测量数据：`.omo/x123/w4_measurements.json`

**本文件只测量、定位（pipeline 阶段 + 具体修复文件/函数），不修改引擎。**
数字全部来自当前磁盘上的权威数据文件（非文档转录），来源逐条标注。

---

## 0. 总表

| # | 缺陷带 | 当前测量 | Pipeline 阶段 | 修复位置（file/function） | 状态 |
|---|--------|---------|---------------|--------------------------|------|
| A | CSP return_type 缺失（csp=void 而 IDA 已知非 void） | **1,726** / 13,747 函数 | CSP 返回投票（solver 从未投过票的历史缺陷的**现存余量**） | `tools/csp_export/solve_return_types_lattice.py`（`analyze_callee_returns`/`collect_usage`）+ 提取侧 `tools/type_infer/ida_extract.py`（B10 RETURN 源边激活） | **开放（已收窄）** |
| B | LCA 过粗（correct-but-weak owner，kept synthetic） | inventory 521 行中 `owner_layout_mismatch` **245** + `this_cast` **36** + `raw_this_arith` **2**；`csp_hint.json` 冻结 **59**（`owner_layout_mismatch` 27 / `gate_growth_bank` 19 / `this_cast` 11 / `raw_this_arith` 2） | T9 join / lattice LCA（合成 `Gap2Recv_*` 接收者被 LCA 到祖先类） | `tools/type_infer/lattice.py`（`TypeLattice` join）+ 投影闸 `.omo/x93_inventory.py`（verdict 逻辑 + `csp_hint` 写入） | **开放** |
| C | type_map ORPHAN | **146,292 / 770,444 = 19.0%**（自 25.1% 改善） | T9 值边传播边界（计算值/B4 边界写，结构性天花板+可激活通道） | `tools/type_infer/engine.py`（`TypeInferenceEngine` 值边传播）+ `tools/type_infer/ida_extract.py`（B10/B10b 激活，需 IDA 重提取） | **开放（结构性部分不可修）** |
| D1 | VOID_PTR 占位型（无类型指针桶） | **162,612 = 21.1%**（type_map type_distribution） | T12 建议类型命名（`VOID_PTR` 是"有值无型"的渲染桶） | `tools/type_infer/generate_suggested.py` | **开放** |
| D2 | TOP 矛盾条目 | **62**（type_map type_distribution；历史曾=0，G31 供给波后重现） | T11 矛盾检测（anchor rank 冲突） | `tools/type_infer/engine.py`（T11/TOP）+ `tools/type_infer/triage_top.py`（分诊） | **开放（小而有界）** |
| D3 | CSP-gap 带（769 个无 CSP 条目的 `Gap2Recv_*` token） | **769**（by_channel 全部 `none`；477 为截断前缀，7 为畸形后缀，其余为截断前缀变体——**无真函数藏在其中**，X93 已证） | 前向声明 token 生成（`_fwd_e4.hpp` 提取伪影） | `tools/csp_export/gen_x45_gap2_fwds.py` / `gen_x49_gap2_fwds.py`（token 生成去伪）+ `.omo/x93_inventory.py`（gap 投影） | **开放（卫生问题，非语义缺口）** |
| D4 | til pad 精细度缺口（authority 精细成员落在 til 已有 pad/成员覆盖内，无法在不破布局下命名） | **7,251** 个 authority 偏移（X123 W1 实测 `auth_overlap_with_til_member`） | til 侧（pad 拆分包）——这些偏移渲染为 `__pad_N[k]`（非 `?`，不阻塞反编译，但阻挡成员级 supply） | 未来 pad-split 工作包（基座 = 本轮 `.omo/x123/s1_w1_audit.py` / `s2_w2_repair.py` 的 extend-in-place 机制） | **新测量（X123）** |
| D5 | 成员供给阻塞（retype candidates 因成员缺失/可见性/E桶无法落地） | member-supply **206**（**已被 X120 治愈**：commit `b246ef5e` 2,506 offsets/162 carriers）；visibility **185**、E-bucket **5,557**（**仍开放**） | X119 join→retype 通道 | visibility/E-bucket：`tools/csp_export/x117b_apply.py` / `x118_expr_rewrite.py`（表达式改写词汇） | **部分治愈** |

---

## 1. 缺陷 A：CSP return_type（精确分带）

**数据源**：`tools/csp/full_report/csp_functions.json`（13,747 函数）× `decompile-results/full_export/src/_addr_*.cpp` 的 `// proto:`（IDA 快照原型，7,792 条可解析）。

| 分带 | 数量 | 含义 |
|------|------|------|
| csp return **typed** | 4,733 (34.4%) | `.return`/投票通道已生效的部分（int 1,899 / AbstractClass* 1,171 / ...) —— 旧 AGENTS 记载"return_type 全 void"**已过时** |
| csp return **void** | 9,014 (65.6%) | 其中： |
| ├─ 有 IDA 原型 & IDA=void（legit void） | 252 | 无缺陷 |
| ├─ 有 IDA 原型 & IDA=**非 void**（**真缺陷**） | **1,726** | solver 未采纳 IDA 已知的返回（int 705 / char 218 / BOOL 163 / `_DWORD *` 129 / std::locale::facet* 50 / char* 46 / ...） |
| └─ 无 IDA 原型（__userpurge/无型，真值未知） | 7,036 | 有界未知（可由 B10 重提取收窄） |

**修复位置**：
- 投票/求解：`tools/csp_export/solve_return_types_lattice.py`（`analyze_callee_returns`、`collect_usage`）——把快照 `// proto:` 返回类型作为 rank-2 输入（与 X120 对 MEMBER_ACCESS 的用法同级）。
- 提取激活：`tools/type_infer/ida_extract.py`（B10 RETURN 源边、B10b RETURN_TO 作用域化——已实现未激活，需 IDA 在线重提取；激活后无原型带（7,036）才会收窄）。

## 2. 缺陷 B：LCA 过粗（owner correct-but-weak）

**数据源**（live，非 MD 转录）：`.omo/x93_inventory.json`（521 行）、`.omo/csp_hint.json`（59 条冻结）、`.omo/csp_gap.json`（769 token）。

- X93（预试点）时 `owner_too_coarse` 86 行（83 带实测偏移：min 0x14 / median 0x18C / max 0x5650；owner=ObjectClass 0xAC）——**当前 live inventory 中该 verdict 已消失（0 行）**：owner 类经 X94-X120 供给波（+X123 til 补成员）长大后，原 86 行大部分迁入 `relocatable`（155）或转为更精确的 `owner_layout_mismatch`（245，合成体成员名与 owner 头不一致——名字级而非尺寸级）。
- 现存 LCA 缺陷带 = **`this_cast` 36**（`this` 被转后代类——LCA 粒度问题的直接形态）+ **`raw_this_arith` 2**（裸 this 算术）+ **`owner_layout_mismatch` 245**（名字不一致形态）。
- 冻结带（`csp_hint.json` 59：`owner_layout_mismatch` 27 / `gate_growth_bank` 19 / `this_cast` 11 / `raw_this_arith` 2）= 已判定"correct-but-weak、保持合成回退"的函数，owner 现分布 TechnoClass 11 / ObjectClass 34 / InfantryClass 2 / INIClass 2 / 其它 10。

**修复位置**：
- LCA/join 本体：`tools/type_infer/lattice.py`（`TypeLattice`）——join 时若 reach 集合存在二进制证据（RTTI/vtable 槽位）支持更深的单一下代，不下沉到祖先 LCA（用户裁决：this 判定用子类型关系，允许"最深公共祖先"被证据反驳时取证据类）。
- 投影/冻结闸：`.omo/x93_inventory.py`（verdict 判定 + `csp_hint` 写入）——reprojection 在每次 owner 类布局（til/authority）变化后重跑，`gate_growth_bank` 19 条是"AST 增长 bank"（X92 先例），解冻条件 = 成员 supply（X120/X123/D4）推进。

## 3. 缺陷 C：ORPHAN（19.0%，结构性部分不可修）

**数据源**：`type_map.json` `_summary.confidence_distribution`（total 770,444）。

ANCHORED 397,885 (51.6%) / DIRECT_PROP 139,076 (18.1%) / CHAIN_PROP 81,283 (10.6%) / INFERRED 5,908 (0.8%) / **ORPHAN 146,292 (19.0%)**。

X93-era 的 ORPHAN 直方图结论仍成立（~30% B4 边界写=计算值、~50% 栈链终于计算写——身份被计算消灭，恒正确无型），即**约一半 ORPHAN 是格语义的结构性边界，不可修**。可修部分 = 提取器未激活通道（B10 RETURN 源边 / B10b RETURN_TO 作用域化，`tools/type_infer/ida_extract.py`，需 IDA 重提取）。

## 4. 缺陷 D1：VOID_PTR 162,612（21.1%）

type_map 里最大单一"类型"桶是 `VOID_PTR`（162,612）——值已证明是指针但无具体型。这是 T12（`tools/type_infer/generate_suggested.py`）输出词汇的占位：**大部分（≈X119 时代的 lvar join 视角）会随成员供给（X120/X123）与 D2/E-bucket 词汇解锁而具体化**。单独无修复动作（派生指标）。

## 5. 缺陷 D2：TOP 62（有界矛盾）

type_map `type_distribution.TOP = 62`（历史 G26 时代曾=0）。G31 供给波（param/this-key/stack_+N 通道接入 + register_offset_members）引入新锚后矛盾重现。**62 个条目波及有界（每条 2-8 变量）**，非系统性腐化。修复位置：`tools/type_infer/engine.py`（T11 矛盾报告）+ `tools/type_infer/triage_top.py`（现成分诊器）。注意：本轮（X123）til 修复改变了 anchor 输入（成员型现在有真名），**重跑引擎前 TOP=62 是预期中间态**。

## 6. 缺陷 D3：CSP-gap 769 token（卫生）

`.omo/csp_gap.json`：769 token，`by_channel = {none: 769}`（vtable 槽位/ctor 安装/调用点 this 三通道全无证据）。构成：477 截断前缀（`_fwd_e4.hpp` 提取伪影，如 `Gap2Recv_402F`←`402F60`）+ 7 畸形后缀（< 0x400000 非函数）+ 其余截断前缀变体。**无真函数隐藏其中**（X93 §3 已证）。修复 = token 生成端去伪（`tools/csp_export/gen_x45_gap2_fwds.py` / `gen_x49_gap2_fwds.py`），非 CSP 引擎问题。

## 7. 缺陷 D4：til pad 精细度（X123 新测量，7,251）

X123 W1 审计：authority（86,969 MEMBER_ACCESS + X112 二进制）中 **7,251 个偏移**已被 til 现有成员（多为 t14 时代的 `__pad_N` 整块 pad）覆盖——**布局合法但粒度粗**：反编译渲染为 `__pad_XX[k]`（有名字、非 `?`），但成员级 supply（X117 join → retype）无法利用。修复 = pad 拆分（把 pad 内的 authority 偏移拆成独立成员，仍 extend-in-place 不破布局）——本轮未做（超出 X123 授权范围），机制基座已在 `.omo/x123/s1_w1_audit.py` / `s2_w2_repair.py`（extend-in-place + verify-before/after-set 已验证 587/587）。

## 8. D5：X119 retype 阻塞带（状态核对）

commit `2ca2a251`（X119）测得 blockers：member-supply 206 / visibility 185 / E-bucket 5,557（retype candidates 7,845）。
- member-supply 206：**已治愈**（X120 `b246ef5e`：2,506 offsets / 162 carriers / 28 retypes 落地 + X123 本轮 3,546 成员/587 类）。
- visibility 185 + E-bucket 5,557：**仍开放**——表达式改写词汇（`x118_expr_rewrite.py`）与 apply 通道（`x117b_apply.py`）的缺口，不在本 round 授权内。

---

## 9. X123 本轮对缺陷面的直接影响（对照）

| 项 | 前 | 后（本轮实测） |
|---|---|---|
| til 未名/缺成员（587 authority 类） | 20 个未名成员 + 3,546 个证据偏移无成员 | **0**（20 renames + 3,546 adds，587/587 verify PASS） |
| X91 member-`?` 残留（107 函数/184 site） | 184 | **0**（fresh re-decompile 全量复检，含 global-object 成员/RulesClass ptr/ptr-member 各类） |
| 提取器输入质量（til 驱动的 MEMBER_ACCESS/类型化伪码） | pad/`?` 混合 | 全具名（含 10 处宽度回退 byte 数组，见 `w2_repair_report.json`） |

**下游（下一轮）激活序**：重跑类型推断引擎（吸收新 til 锚，D2/TOP 预期重洗）→ D4 pad-split（解锁 7,251）→ A 带修复（快照 proto 作 rank-2 输入）→ B 带重投影（x93_inventory 重跑，解冻 gate_growth_bank 19）。

## 10. 方法与可复现性

- 全部数字由 `.omo/x123/s4_w4_measure.py` 单脚本产出（幂等、只读），落盘 `.omo/x123/w4_measurements.json`。
- til 审计（改前）：`.omo/x123/s1_w1_audit.py` → `w1_til_audit.json` / `w1_til_audit.md`。
- til 修复（X123 W2）：`.omo/x123/s2_w2_repair.py`（progress/checkpoint：`w2_progress.json`，per-class 报告 `w2_repair_report.json`；12 批 idb_save）。
- 复检（X123 W3）：`.omo/x123/s3_w3_redecompile.py` → `anchors/ida_cache_qmarkfix/`（107 文件 + `manifest.json`）。
- IDB 改前备份：`decompile-results/gamemd_x123_pre.i64`（0.51 GB）。

---

## 11. X125 增补（2026-10-24，HEAD x125-pre-1 之后）

- **W1 可复现性**：X124 A 带修复管线已移植为 tracked 生成器
  	ools/csp_export/x124_snapshot_returns.py（幂等，--check 门）+ 引擎重跑
  驱动 	ools/csp_export/x125_engine_regen.py（type_map sha 基线
  EE16D111…，run1==run2 幂等实证 + run3 差异=W4 删除解释）。再生顺序、
  sha 基线与差异说明 = **docs/csp_regen.md**。
- **W2 D4 前提修正（实测）**：167 条 owner_layout_mismatch 的阻塞**不是
  pad 粒度**。734 个缺失名实例分解：**577** 非偏移名（合成体成员是语义名，
  与 owner 头名字面不匹配）；**115** 偏移超出 owner 权威尺寸（归属过粗——
  ObjectClass 153 行的真缺口，需 lattice 深属主重归因，csp_defects §2 通道）；
  **42** 权威已具名（hasParachute@0x84 等——canon_member_lowering 声明链
  可解）。对 _gap2 体的 dry census：**706 处转换计划**（F-PAD 676 为主）+
  6 成员供给。**本未轮写 src/（任务禁令）**，解锁序：
  ①canon_member_lowering.py --file _gap2/gap2_global_defs.cpp --apply
  （需先给 PADN 补 M(\d+) 十进制编码）②.omo/x93_inventory.py 重投影
  ③gen_gap2_defs.py --x93-plan/--x93-apply。B 带本轮维持 203。
- **W3 尺寸反驳**：3 条被证伪 csp this 投票（0x00465D40 BuildingClass /
  0x0050DAC0 TechnoClass / 0x00653FA0 TechnoClass）以 manifest 层反驳记录
  固化于 nchors/structural_truth.json size_rebuttals 节（引擎加载器
  只读三具名节，新节安全忽略）；	14_pool_extender.py 入池前 R1(manifest
  对)/R2(现场 offset≥size) 双门——首跑即拦 4 条新污染
  （0x006E6220 TagTypeClass 等，.omo/t14_rebuttal_skips.json）。
- **W4 幂等账**：x116 --check UNCHANGED；x124_snapshot_returns --check 0 变更
  （csp sha 52693C72… 保持）；pool_extender 双跑字节一致；type_map 对基线
  match。verify_csp 7/7 PASS（基线实测）。

## 12. X126 增补（2026-10-25，B 带闭环执行轮，HEAD 4165473f）

解锁序已按 §11 执行完毕，B 带 203→**45 live**（−158）：

- **Fix①** PADN `M(\d+)` 十进制编码已修（canon_member_lowering.py）：
  PADN/PH_NAME 加 M 名 + `(?:__)?tail_`（顺手修了 `__?` 语义缺陷）、
  `_pad_offset` M-十进制分支、MSYN 声明注释权威覆盖（165 个 X30 十六进制
  M 名防误解码）、合成接收者 chain() 追 sidecar>CSP owner 链（1,750 类）。
  _gap2 dry census F-PAD 676→838、ledger 562→264。
- **W2**：`.omo/x126/w2_deepen.py`（幂等）——C1 csp-param/C2 lattice-this
  通道 11 条 sidecar resolved（CSP real_type 升格=X116 G2 先例）；C3
  vtable/ctor 实测 0 命中；C4 name-fit 12 条 tie 全 banked。
- **W1**：lowering F-PAD apply 于 _gap2=412 转换/199 行（owner 语义名采
  纳）；采纳证据经 member_lookup（X126 owner-adopt 标记）交 gen_x30 落
  decl。gen_x30 三修：til 尺寸门 / TClassFactory_* 豁免（修 64 C2338
  sizeof probe）/ log 正则接受 `(line):` 单 TU 形 + 合成接收者豁免
  cross-class veto。
- **W3**：x30 358 文件/2,381 supplies + x93 重定位 9 体 + 全量 MSVC
  **22,599**（基线 22,296，net +303 = 647 修复 vs 950 canon-retype 新站
  点，后者挂账 X120 式逐类 pin-back）；verify_csp 7/7 ALL PASS；无 LNK。
- **B 带终值口径（sidecar 感知投影）**：45 live（OLM 30 / this_cast 12 /
  raw 2 / otc 1）+ 167 owner_banked（sidecar 显式拒绝冻结带，带 reason）
  + 16 relocatable（下一批）+ 9 已重定位。x93_inventory.py 升格
  sidecar 感知 + owner_banked verdict。
- **W1 表实测口径**（最终 owner 下 734 实例）：over-size 241 / spelling
  237 / named-elsewhere 204 / in-size-unnamed 52（§11 的 577/115/42 为
  X125 行内临时 cut；总数 734 一致）。表=.omo/x126/w1_table.md。
