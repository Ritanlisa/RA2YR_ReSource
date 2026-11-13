# 快照修复 v2 — 539 个 D 层坏块 IDA 重导出（2026-11-13）

## 0. 结论

| 项 | 结果 |
|---|---|
| 目标块 | **539 / 539** 重导出并块级替换（D 层 bad-snapshot 全集） |
| 抓取失败 | **0**（live IDA MCP，539/539 三调全部成功；无 spill 失败） |
| 格式校验 | **539 / 539** 通过 `pseudo.fetch` 块头正则（`// ==== / name / addr / proto`） |
| QMARK 消除 | **335 / 335 = 100%**（含 23 件 QMARK+ASMBODY 重叠，`?` 全部消失） |
| TRUNC 消除 | **111 / 111 = 100%**（81 件全净 + 30 件主体完整但带内联 x87 asm） |
| 坏型旗标消除 | **392 / 539 = 72.7%** 全净；余 **147 件 ASMBODY**（非快照兜底体，见 §6） |
| 全池坏块 | **820 → 428**（QMARK 559→**224** / TRUNC 111→**0** / ASMBODY 177→208） |
| `pseudo.fetch` | **539 / 539** 成功，无空 body |
| 转换通道（不编译） | **539 / 539** 函数转换，offset 站点还原 **45,316 / 53,884 = 84.1%**，无崩溃 |
| 完整性 | 199 个被改文件：block 计数全部不变；`备份 + 539 块重放` 与现文件 **逐字节相等 199/199** |
| 抽样 probe（30 件，不写账本） | 编译通过 **3/30 = 10.0%**（Wilson 95% CI 3.5–25.6）；**快照标记类错误 4 → 0** |
| 备份 | `.omo/snapshot_fix2_backup/files/`（199 个全文件）+ `blocks/`（539 个原块）+ `manifest.json` |

> 核心判据不是"编译率上升"（本轮 paired 前后均为 3/30，见 §5.3），而是
> **快照不再是错误来源**：probe 的 27 件 COMPILE_FAIL 里 `?` / `... [N chars total]` /
> `missing ';' before '...'` 出现 **0 次**（改前同 30 件有 4 次）；剩余错误全部是
> 类型/成员/接收者供给（C2227 / C2109 / C2065 / C2296 / C2440 …），属后续编译轮可修面。

快照目录 `decompile-results/` 与 `.omo/` 均被 `.gitignore` 忽略，因此本轮 commit =
本报告 + `docs/snapshot_fix2_manifest.json`（539 块逐条审计清单）。

---

## 1. 清单与数据源

### 1.1 目标集重建（与 `report_d_census.md` 同口径）

- 池：`signals.json` 全函数 −（`status.json` ∪ `results.jsonl`）→ `batch_select5.classify`
  → **D 层 3,715 件**（复现实测 = 报告值，完全一致）。
- 坏块：对当前 `decompile-results/full_export/src/*.cpp` 全量重扫
  （`TRUNC` / `QMARK` / `ASMBODY` 三正则，同 `cw6_badsnap.py`）→ **820 件**；
  其中 D 池内 **539 件**（与普查报告 539 完全一致）。
- 交叉核对：与 v1 已修 125 件重叠 **0**；D 池外坏块 **281 件不动**。
- 分类：**QMARK 335**（Q-only 312 + Q∩A 23）/ **TRUNC 111**（Q∩T=0）/ **ASMBODY-only 93**；
  共 199 个快照文件。

| 类别 | D 池目标 |
|---|---:|
| QMARK（含 Q∩A） | 335 |
| TRUNC | 111 |
| ASMBODY-only | 93 |
| **并集** | **539** |

### 1.2 环境

- IDA 探测：`curl -m 5 http://127.0.0.1:13337/` → **404**（服务在线，根路径无 handler）。
- IDB：`decompile-results/gamemd.exe.i64`（live，`hexrays_ready=true`，与 v1 相同）。
- 并发漂移声明：本会话期间其他会话在工作树修改了
  `tools/decomp_sys/{decompile,passes,registry_ext}.py` 与 `tools/codegen_match/diffasm.py`
  （均未提交）。本轮的快照替换不依赖这些改动；paired probe 的前后两跑使用同一工作树代码，
  对照仍然成立。

---

## 2. 重导出方法

沿用 v1 验证过的 live MCP 长任务通道（`.omo/snapshot_fix/snfix_lib.py`）：

- 每件三调：`lookup_funcs`（name/size）→ `export_funcs(format=json)`（prototype/code）
  → `disasm(max_instructions=max(400, size+8))`（完整反汇编）。
- 大负载：工具返回 `Output truncated` 时跟进 `/output/<uuid>.json` 取完整 JSON
  （TRUNC 的根治点；本轮 539 件全部走通）。
- 块文本按 `tools/type_infer/ida_full_export.py::phase_functions` 原格式逐字复刻：
  `// ====×70 / // name / // addr=0x%08X size=... / // proto: ... / IDA disasm / Hex-Rays`。
- 逐件缓存 `.omo/snapshot_fix2/cache/<ADDR>.block.txt` + meta（幂等可重跑）。
- 替换：按 `// addr=0x%08X` 定位，span = 本块分隔线起点 → 下一块分隔线起点；
  每文件整文件备份 → 原子写（tmp + `os.replace`）；只动 539 块。

脚本：`.omo/snapshot_fix2/run_fix2.py`（fetch+apply）、`build_targets.py`（清单）、
`verify.py`（完整性/重扫）、`probe_before.py`（配对对照）。均本地、未入库。

---

## 3. 结果

### 3.1 类别迁移（539 件）

| old → new | 件数 |
|---|---:|
| QMARK → 净 | 311 |
| QMARK → ASMBODY（主体完整，含内联 x87） | 1 |
| QMARK+ASMBODY → ASMBODY（`?` 清除，asm 保留） | 23 |
| TRUNC → 净 | 81 |
| TRUNC → ASMBODY（主体完整，含内联 x87） | 30 |
| ASMBODY → ASMBODY（刷新，asm 数不变） | 93 |
| **合计** | **539** |

- **QMARK 残留 = 0**（335/335），**TRUNC 残留 = 0**（111/111）。
- 全池重扫：**820 → 428**；QMARK **559 → 224**（余量全部在 D 池外）、TRUNC **111 → 0**、
  ASMBODY **177 → 208**（+31 = 30 TRUNC + 1 QMARK 转 ASMBODY，23 Q∩A 仍是 A）。

### 3.2 体积与内容刷新

- 539 块合计：旧 **8,774,286** 字符 → 新 **18,904,807** 字符。
  增量主要来自 111 件 TRUNC（中位 17,777 → 85,954 字符；旧块只存了截断前缀）。
- ASMBODY-only 93 件：asm 行数 **93/93 不变**；29 件长度差 ≤64 字符（基本同体），
  24 件增长 >1 KB，1 件缩小 >1 KB——说明这批是"当前 IDB 的完整 C 体 + 内联 x87"，
  重导出只做刷新，不改变 asm 形态。
- 体积最大刷新：`0x43c2d0 BuildingClass::MissionController` 32,660 → 53,322 字符
  （旧块陈旧/不全，新块完整；asm 27→27）。

### 3.3 名称漂移（4 件，仅 `// name` 显示行）

| addr | 旧块名 | 当前 IDA 名 |
|---|---|---|
| 0x73d630 | FactoryClass::CompleteProduction | UnitClass::Mission_Harvest |
| 0x5fdf70 | Object::DrawObject | OverlayClass::ScalarDtor |
| 0x6fc0b0 | TriggerTypeClass::ReadINI | TechnoClass::ReadINI |
| 0x75d3a0 | Voxel_Section::Draw | WarheadTypeClass::ReadINI |

- 与 v1 的 `0x772080` 同类：IDA 侧名字已演化（L4/审计轮），`index.json` 的 name 未刷新。
- 产线发射名优先取 `signals.json`（`decompile.run_function`: `fn.get("name") or ex.name`），
  块名仅作 fallback/展示；`index.json` 的 `file` 字段不受影响。未改 `signals.json`。

---

## 4. 完整性校验（`verify.py`）

- **block 计数**：199 个被改文件，改动前后 `// addr=` 块计数逐文件相等。
- **重放等价**：以 199 个 `.bak` 为基底、按 manifest 顺序重放 539 个新块，
  结果与当前文件 **逐字节相等 199/199** → 无越界替换、无附带损坏。
- **`pseudo.fetch`**：539/539 成功、无空 body、无块头解析失败。
- 全池重扫只发现 428 个坏块，其中含 147 个目标残块；D 池外 281 个坏块零变动
  （证明只动目标 539 块）。

---

## 5. 抽样验证（30 件，`--no-ledger`）

### 5.1 抽样

按旧/新类别分层（`random.Random(20261113)`）：

| 层 | 抽 |
|---|---:|
| QMARK→净 | 18 |
| TRUNC→净 | 5 |
| TRUNC→ASMBODY | 2 |
| QMARK+ASMBODY→ASMBODY | 2 |
| ASMBODY→ASMBODY | 3 |
| 合计 | 30 |

样本 median size **895 B**（131–16,337 B）——与 D 层"调用密集大函数"分布一致，偏 S3。

### 5.2 修复后 probe（账本未写）

| 指标 | 数值 |
|---|---:|
| COMPILE_FAIL | **27 / 30** |
| MISMATCH（编译通过） | **3 / 30 = 10.0%**（CI 3.5–25.6） |
| 快照标记类错误（`?` / `chars total` / `missing ';' before '...'`） | **0** |
| 首错族 | C2227 5 / C2109 5 / C2065 3 / C2296 2 / C2440 2 / C2019 2 / C2039 2 / C2100 1 / C2228 1 / C2377 1 / C2446 1 / C2059 1 / C2660 1 |

3 件编译通过：`0x430650 BuildingPlacement::RenderBuildingPlacementShadow`（QMARK）、
`0x6f1920 TechnoClass::Create`（QMARK）、`0x63b150 RenderBuilding`（QMARK）。

> 账本副作用说明（同 v1）：`--no-ledger` 不写 `.omo/codegen_match/status.json`（已复核：
> 上述地址账本状态未变）；但 `batch_run` 仍会向 `results.jsonl` 追加本次 30 行运行记录
>（该模式无关闭开关）。按 v1 先例未做回删——运行期间有其他并发会话在同一文件追加，
> 按尾截断会误删他人数据。这 30 条带 `batch="snapshotfix2_probe"` 标记，可精确识别。

### 5.3 配对对照（同一 30 件、旧块 vs 新块）

用备份块构造 shadow 快照（`.omo/snapshot_fix2/shadow_before`），同一代码跑旧块：

| 指标 | 旧块（before） | 新块（after） |
|---|---:|---:|
| 编译通过 | 4 / 30 | 3 / 30 |
| 其中"静默空体"（ours 1–3 B） | **1**（0x440580：orig 4,201 B / ours **1 B**） | 0 |
| 诚实编译 | **3 / 30** | **3 / 30** |
| CF 中快照标记错误 | **4** | **0** |

3 个判定翻转：

1. `0x63b150 RenderBuilding` **CF → MISMATCH**（`?` 成员还原后编译通过）；
2. `0x440580 BuildingClass::Unlimbo_UnitDeliveryFix` **MISMATCH → CF**：
   旧块是 TRUNC 前缀（`... [31138 chars total]`），编译产物仅 **1 字节 ret**（orig 4,201 B）；
   新块是完整 31 KB body，首错 C2227（`->NukeDown` 接收者类型）——从"假通过"变诚实失败；
3. `0x47c620 CellClass::IsPassable` **MISMATCH → CF**：
   旧体的 `stru_A8EB00.?[340]` / `DSurface_ViewBounds.__pad_FC[324]` 等占位视图编译通过；
   新体还原为 `stru_A8E960.random[452]` / `dword_8871E0->NukeDown` 等真实成员后，
   暴露 C2440（`void**` → `int`）类型缺口——同样是"更真实的体、更诚实的失败"。

> 结论：本样本上编译率没有净提升（诚实口径前后均 3/30），但**错误来源发生了迁移**——
> 快照损坏不再制造语法/截断错误，也不再制造 1 字节静默空体"假 MISMATCH"。
> 继续提升编译率需按 `report_d_census.md` §8 的类型/供给族（C2227/C2109/C2065/C2296 …）处理。

### 5.4 转换通道（全 539，不编译）

`python tools/decomp_sys/decompile.py <539 addrs> --no-compile --out .omo/snapshot_fix2/conv_all`

- **539/539** 函数转换成功，无异常/崩溃；
- offset 站点还原 **45,316 / 53,884 = 84.1%**，narrow-macro sightings 2,796；
- 规则自检 149 PASS / 390 FAIL（D 层既有的 `cast-deref-plus` 债务，非本轮引入；
  与 `report_d_census.md` §7 的 D 层违规密度一致，照实记账，未豁免）。

---

## 6. 残余与后续

1. **147 件 ASMBODY 残留**（93 件 A-only + 23 件 Q∩A + 31 件 Q/T→A）：
   全部是**完整 C 体 + Hex-Rays 内联 `__asm { fld/fmul/fstp ... }`**，不是快照兜底体。
   重导出无法消除（IDA 当前输出形态），需 `tools/decomp_sys` 解析器增加 `__asm` 词法
   （d_census W7；本轮禁止改 decomp_sys）。这些块 `pseudo.fetch` 可读，产线会照常处理。
2. **QMARK 余 224 件、ASMBODY 余 61 件在 D 池外**（已判定/非 D 层）；本轮按令未动。
3. **类型/供给墙**：probe 的 27 件 CF 首错全部指向成员/接收者/参数类型
   （C2227/C2109/C2065/C2296/C2440…），与 d_census §8 的 W10/W2/W9 族一致。
4. **4 件名称漂移**：只影响块显示名，产线优先 signals 名；若后续刷新 `index.json` 可一并收口。

---

## 7. 工件与复现

| 路径 | 内容 |
|---|---|
| `.omo/snapshot_fix2_backup/files/*.bak` | 199 个被改快照文件的全文件备份（改前） |
| `.omo/snapshot_fix2_backup/blocks/*.txt` | 539 个原块文本（改前） |
| `.omo/snapshot_fix2_backup/manifest.json` | 逐块清单：addr/file/name/size/kinds(old,new)/sha256/长度/asm 行数/span、逐文件 sha256、name_drift |
| `docs/snapshot_fix2_manifest.json` | 上述 manifest 的入库副本（+ transitions 汇总） |
| `.omo/snapshot_fix2/run_fix2.py` | 抓取 + 备份 + 块级替换主脚本 |
| `.omo/snapshot_fix2/verify.py` | 539 块重扫 + pseudo.fetch + 重放等价 + 全池 delta |
| `.omo/snapshot_fix2/conv_all/` | 539 件转换通道产物与 report（本地） |
| `.omo/decomp_batch/snapshotfix2_probe{,_before}/` | 30 件 after/before probe 的 part_report 与生成代码（本地） |

重跑方式（IDA 在线时）：`python .omo/snapshot_fix2/run_fix2.py`
（fetch 有 `<ADDR>.block.txt` 缓存，已抓取的不再请求；`--apply-only` 只做替换）。
