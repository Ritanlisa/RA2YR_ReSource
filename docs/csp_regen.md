# CSP 产物再生手册（X125 W1 — 可复现性）

日期：2026-10-24 · 基线 HEAD `87e4cd26`（x125-pre-1 tag）·
背景：`tools/csp/full_report/csp_functions.json` 是 **gitignored 局部产物**
（`.gitignore:113 tools/*`），X124 的 A 带修复一度只存在于本地脚本
（`.omo/x124/`，同样 ignored）——仓库内无任何东西可再生成它。本轮把修复
管线移植进 tracked 生成器树并固化再生顺序。

---

## 0. 产物与输入分类

| 类别 | 文件 | 状态 |
|------|------|------|
| **tracked 生成器** | `tools/csp_export/x124_snapshot_returns.py` | 本轮新增（X125 W1 移植） |
| **tracked 生成器** | `tools/csp_export/x125_engine_regen.py` | 本轮新增（引擎重跑驱动） |
| **tracked 生成器** | `tools/type_infer/t14_pool_extender.py` | 已有；X125 W3 加尺寸反驳门 |
| **tracked 锚** | `anchors/structural_truth.json` | 已有；X125 W3 加 `size_rebuttals` 节 |
| **tracked 锚** | `anchors/member_types.json` / `anchors/csp_canon_members.json` / `anchors/class_layouts_csp.json` | 已有 |
| **tracked 求解器** | `python -m tools.type_infer.engine` | `tools/type_infer/engine.py` |
| **tracked 验证器** | `tools/type_infer/verify_csp.py` | 七通道只读 |
| **局部输入**（gitignored） | `tools/type_infer/constraints/raw_constraints.json` (~130MB) | IDA 提取（`step1_csp.py --auto` / `extract_constraints_via_mcp.py`） |
| **局部输入**（gitignored） | `tools/csp/full_report/csp_functions.json` | CSP 求解产物（被本管线就地修正） |
| **局部输入**（gitignored） | `decompile-results/full_export/src/_addr_*.cpp` | IDA 类型化快照（`// proto:` 来源） |
| **局部产物**（gitignored） | `type_map.json` / `top_causes.json` / `contradictions.md` | 引擎输出（可再生） |
| **tracked** | `signals.json` | 双写目标（符号权威，不在 ignore 内） |

---

## 1. X124 A 带修复的移植（w2b_correct.py 家族 → tracked）

`.omo/x124/w2_snapshot_returns.py`（首次 apply）+ `.omo/x124/w2b_correct.py`
（修正通道）→ 合并为**最终语义**的单一生成器
`tools/csp_export/x124_snapshot_returns.py`：

1. **注解感知 CC 解析**：`__usercall@<al>` / `__userpurge __spoils<ecx>@<eax>`
   / 普通 `__cdecl` 族——`@<...>` 与 `__spoils<...>` 注解被**消费**而非混入
   返回类型（首次 apply 曾把 35 条 mangling 进返回类型，w2b 修正）。
2. **signals 双写**（键归一化）：csp 键 `0x00XXXXXX` vs signals 键
   `0xXXXXXX`——首次 apply 的双写因键不匹配是静默 no-op；修正后仅在
   signals 侧为**占位值**（''/unknown/?/None）回填，**语义值永不降级**
   （如 0x4a40c0 signals `LPDIRECTDRAW` 优先于快照 `int`）。
3. **守卫**：C4 装饰类型拒绝（`_csp/_Destru/_N/[N]` 后缀）、占位类型拒绝、
   已定型返回（4,733 带）永不触碰。
4. **幂等**：零变更时不重写文件（字节保持）；`--check` 显式断言 no-op
   （有未落盘变更时退出码 1）。

### 再生验证记录（X125 实测）

| 试验 | 结果 |
|------|------|
| 当前产物上 `--check` | **0 变更**，sha256 保持 `52693C72…27A10F`，exit 0 |
| 重建 pre-X124 状态（1,725 typed→void + signals 回退 HEAD）后 `--apply` | 重新落 1,725 返回 + **88** signals 回填，`signals_semantic_kept=122`（与 X124 提交信息一致） |
| 再生 csp_functions.json vs 现役 | **仅 1 条差异**：`0x0046D480` 的历史审计标记 `X124 W2b revert (proto unparseable/void)`（现役有、再生无；两侧 return_type 均为 void——语义等价，纯审计痕迹） |
| 再生 signals.json vs 现役 | symbols 节 **0 差异**；`_member_by_name` 节差异 = 会话前已有的 G31 未提交工作（与本管线无关） |

## 2. 引擎重跑驱动

`tools/csp_export/x125_engine_regen.py`：

```bash
python tools/csp_export/x125_engine_regen.py --record   # 记录当前 type_map sha 为基线
python tools/csp_export/x125_engine_regen.py            # 重跑引擎 + 对比基线（幂等门）
python tools/csp_export/x125_engine_regen.py --no-run   # 只比对当前文件（快速门）
```

### sha256 基线（X124 三次引擎运行的考古结论）

- run1/run2（21:25/21:27，**W4 structural_truth 删除前**）：
  type_map sha `52E5185F…A16B375`，stderr 逐字节一致（TOP pairs 19）。
- run3（21:37，W4 删除后 = **现 HEAD 输入**）：type_map sha
  **`EE16D111E4F3AF786B6A18D02F9DAEECC1EB15ECC37120E61366B8882099A7FD`**
  （769,842 条目，TOP pairs 18）——**现役基线**，`--record` 已落盘。
- 结论：引擎在**输入不变**前提下 sha 稳定（run1==run2 实证）；run3 的差异
  完全由 `structural_truth.json` 的 2 条 W4 删除解释，非不确定性。

## 3. 文档化再生顺序（clean checkout + 局部输入）

```bash
# 前置（一次性）：IDA 在线时提取约束与快照（离线跳过，用既有局部输入）
#   python tools/csp_export/step1_csp.py --auto          # T4a+T4b 全链（需 IDA）

# ① A 带返回类型修正（幂等；对已修正产物为 no-op）
python tools/csp_export/x124_snapshot_returns.py --apply
python tools/csp_export/x124_snapshot_returns.py --check   # 必须退出码 0

# ② 引擎重跑 + sha 幂等门
python tools/csp_export/x125_engine_regen.py               # 对比 .omo/x125/engine_sha_baseline.json

# ③ 结构真值扩展池（含 X125 尺寸反驳门）
python tools/type_infer/t14_pool_extender.py               # → .omo/t14_extra_pool.json + t14_rebuttal_skips.json

# ④ 七通道验证（只读，退出码 0 = 全过）
python tools/type_infer/verify_csp.py
```

## 4. 尺寸反驳门（X125 W3）

- **manifest 层**：`anchors/structural_truth.json` 新增 `size_rebuttals`
  节，记录 3 条被尺寸证据证伪的 csp this 投票（0x00465D40 BuildingClass、
  0x0050DAC0 TechnoClass、0x00653FA0 TechnoClass；幸存者
  BuildingTypeClass/HouseClass/RadarClass 与 structural_slot+this_pass 双通道一致）。
- **生成器层**：`t14_pool_extender.py` 入池前三通道全部过
  `claim_refuted()`：R1 = manifest 记录对（addr, refuted_class）直接拒绝；
  R2 = 现场尺寸检查（this 相对 MEMBER_ACCESS 偏移 ≥ 类尺寸）。拒绝清单
  落 `.omo/t14_rebuttal_skips.json`。首次实跑即拦下 4 条新污染
  （0x006E6220 TagTypeClass / 0x00403490·0x004034A0·0x004A5950 ObjectClass
  LCA）。
- **裁决来源**：`.omo/x124/w4_adjudication_size.json`（X124 W4d，尺寸反驳 =
  offset ≥ size，二进制布局证据，无统计投票）。
