# CW2 编译墙系统轮恢复报告（2026-11-12）

范围：`tools/decomp_sys/`（**`src/` 零改动；`tools/csp_export/minclass_solver.py` 零改动；
`checker.py`（六规则）零改动、无豁免、violations 照实记账**）。

任务链：恢复前任 WIP → 固化 → 抽样验证 → A 层 200 件编译率测量 → 报告。

---

## 0. 结论速览

| 指标 | 数值 |
|---|---:|
| 前任 WIP 未提交改动 | **5 源文件**（batch_run / decompile / hpp_pilot / passes + 新 `era_types.h`） |
| 恢复提交 | `b0c33e5d8`（WIP 原样固化）→ `dc716a604`（本轮轮内补齐） |
| CW2 错误族靶向样本（31 件硬 CF） | 编译通过 **0 → 20 / 31（64.5%）**，MATCH 0 → 1 |
| 回归（历史 MATCH 10 件） | **10/10 MATCH，0 rule violation** |
| A 层 200 件（leaf < 200B） | 编译通过 **161 / 200 = 80.5%**（目标 70%+ 达成） |
| A 层字节匹配 | MATCH 57 / MISMATCH 104（MATCH/总 = 28.5%，MATCH/已对拍 = 35.4%） |
| A 层消融（pre-CW2 代码，同一 200 件） | 编译 160/200 = 80.0%，MATCH 54 |
| 归因 | A 层相对 44.2% 基线的增益**主要来自已提交的 NO_CLS 自由函数通道**；CW2 自身在该层 +1 编译 / +3 MATCH（详见 §4.3） |

---

## 1. 恢复流程（审查先行 → 先固化）

### 1.1 WIP diff 审查

`git status` 实测：无 staged 改动；工作树 5 个源文件 modified + 1 个新增 `era_types.h`
（任务描述的 4 文件中 `checker.py` 实际未改——它在 HEAD `dcd4b0ec9` 已提交；
额外出现的是 `passes.py`，与 `registry_ext.py` 仅 mtime 变化、内容无 diff）。
逐文件 diff 审查结论：

| 文件 | 改动 | 判定 |
|---|---|---|
| `decompile.py` (+59) | `sanitize_ident`（mangled/IDA 名 → C++ 标识符）、param 内 `@<st0>` 寄存器注解擦洗、`char *Name` 参数名去胶着、`write_era_types` 发 era 前导 | 方向正确，保留 |
| `hpp_pilot.py` (+70/-) | `_fwd_ok` 门（禁 primitives/era 名/限定名 forward-declare）、成员/全局/参数类型过 `spell_type`、类 hpp include `era_types.h` | 方向正确，保留 |
| `passes.py` (+173/-) | `spell_type` 擦注解 + 限定/mangled 类型降级 `void*`、`ERA_TYPE_NAMES`、CRT 名单扩宽、`_KNOWN_API_SIGS`、`_ctx_ptr_names`（含带初始化器指针局部）、`_CALL_KEYWORDS` 单一定义（旧重复定义在 import 时覆盖，丢失 else/do/new/delete） | 方向正确，保留 |
| `batch_run.py` (+1) | 每 part 重置 include 目录后补 `decompile.write_era_types(inc_dir)` | 必要，保留 |
| `era_types.h` (new, 244L) | types-only 前导（Win32/IDA 别名、tag 结构、位切片宏），**无函数、无改符号宏** —— 避免与 emitted extern 块 C2371 冲突 | 保留 |

### 1.2 固化

- `b0c33e5d8` — 前任 WIP 原样提交（5 源文件 + era_types.h + pycache），防再次中断。
- `dc716a604` — 本轮轮内补齐（见 §2）。

### 1.3 并发冲突

审计纠偏 Agent 的最后一笔（`dcd4b0ec9`）已在 HEAD；工作树无其未提交 hunk。
本轮所有提交只含 `tools/decomp_sys/` + `.omo` 产物，无跨 Agent 混入。

---

## 2. CW2 错误族修复清单（本轮最终状态）

前任 WIP 之上，本轮实测补齐 6 处（每处都由 31 样本首错驱动，非猜测）：

| # | 错误族 | 机制（实证） | 修复 |
|---|---|---|---|
| 1 | C2061/C2065/C2143（free 单元 Win32 类型） | `gen_free_hpp` 未 include `era_types.h` → `HRSRC/LPMSG/LPPOINT/INT_PTR/SHORT` 未声明 | free hpp 加 era 前导（与类 hpp 对齐） |
| 2 | C2061（缺类型别名） | `INT_PTR/SHORT/LSTATUS/REGSAM/u_long/u_short/LPCDLGTEMPLATEA/LPCLSID/PHKEY/LPWORD` 不在 era_types | 按 census 证据补齐（注：LPCLSID 必须在 CLSID typedef 之后） |
| 3 | C2143 `missing ',' before '*'`（proto 参数名胶着） | `sendto(..., const char *buf p1)`：`*buf` 带空格时旧循环不触发 | WIP 的星号胶着剥离覆盖（`_scrub_param`） |
| 4 | C2664 `__imp_X`（IAT thunk） | `extern int __imp_LoadResource(void*, int, ...)` 由观测调用形状捏造，拒绝真实原型参数 | `__imp_X` 镜像 `X` 的 registry 原型 + 观测 arity 补齐（指针槽用 `const void *`，避免拒收 `const char *` 实参） |
| 5 | C2664 `ClientToScreen/MoveWindow/SelectObject/DeleteObject` | 实参 `(HWND)this`、`(LPPOINT)&Rect` 无指针证据 → registry 的 `int` 槽保留 | `_arg_is_pointerish` 承认 cast-to-pointer-typedef / cast-to-pointer 为指针证据；补 `SelectObject/DeleteObject` 已知原型 |
| 6 | C2039 `lfWidth` not member of `tagLOGFONTA` | era 的 `tagLOGFONTA` 是 opaque pad | 补真实 60B 布局；类/free hpp 加 `<math.h>`（`fabs` C2065） |

另有 2 处“限定名/反引号”清理：`(struct Concurrency::X *)` → `(void *)`、
`&Class::\`vftable'` → `0`（pilot 壳无 vtable 对象，地址常量退化）。

---

## 3. 验证

### 3.1 CW2 靶向样本（31 件硬 CF，全量重跑）

| 阶段 | COMPILE_FAIL | MISMATCH | MATCH | 编译通过 |
|---|---:|---:|---:|---:|
| pre-CW2（ablation：`dcd4b0ec9` 代码，同一 31 件） | **31** | 0 | 0 | 0% |
| 前任最后一次（p1d，轮内中间态） | 25 | 6 | 0 | 19.4% |
| 本轮最终（p2i） | **11** | 19 | 1 | **64.5%** |

样本构成：proto 参数名 / Win32 类型供给 / 未定义 struct tag / 未知返回类型 /
关键字 callee / 限定-mangled 类型 / extern 返回类型 fwd / LONG-uint32 八族。

### 3.2 回归（无回退）

历史 MATCH 抽 10 件（0x401940/0x486380/0x4870d0/0x406540/0x4065c0/0x4065d0/
0x4065e0/0x406640/0x410490/0x411540）重跑：

```text
MATCH=10  pathology={}  rule_violation_fns=0
```

---

## 4. A 层批量（200 件，leaf < 200B）

### 4.1 抽样

- 选择器：`python tools/decomp_sys/batch_select5.py --layers A --n 200 --tag a200`
- 抽样前池：A = **5,513**（未判定 = ledger∪results 排除后；B=0/C=6,839/D=3,715/X=0）
- 采样：层内按 `(size, calls, indirect, ds, addr)` 排序的**确定性分位抽样**，
  size 1..197B（mean 29B），200/200 调用数 = 0（严格 leaf）
- 驱动：`python tools/decomp_sys/run_a200.py`（20 件/part × 10 parts，**每 part 成功即 commit**；
  失败重试 3 次；本批 10/10 part 一次通过，单 part 9.8–14.2s）

### 4.2 结果（`a200/p00..p09`）

| 指标 | 数值 |
|---|---:|
| 总件数 | 200 |
| MATCH | **57** |
| MISMATCH | 104 |
| COMPILE_FAIL | **39** |
| **编译通过率** | **161/200 = 80.5%** |
| 字节匹配（/总） | 57/200 = 28.5% |
| 字节匹配（/已对拍） | 57/161 = 35.4% |
| rule violation 函数 | **33（照实记账，未豁免）** |

MISMATCH 病理：`extern_reloc 56 / codegen_shape 18 / branch_order 18 / regalloc 4 /
cc_mismatch 2 / branch_polarity 2 / width_mismatch 1 / signedness 1 / ret_norm 1 / const_fold 1`。

COMPILE_FAIL 首错族（39 件）：

| code | n | 形态 |
|---|---:|---|
| C2100 | 21 | `illegal indirection`：`*this->m001[3]`（vector 模板壳 `m001` 被降级成 `char[1]`，14 件集中在 `_VectorClass_*` / `_DynamicVectorClass_*` 单元） |
| C2065 | 5 | `TClassFactory`（3）/ `DataGlobal_B0CE` / `TypeList` 未声明 |
| C2109 | 4 | `subscript requires array or pointer`（`AbstractClass::COMStub*`、`TileSystem`、Jumpjet 等） |
| C2296 | 4 | `'&' illegal, left operand has type 'char*/void*'`（`_strpbrk/_memset/0x54A990/0x75AB30`） |
| C2059 | 3 | 裸 `?`（`TechnoClass::GetBuildCost`、`RadBeam::InitState`） |
| C2446 | 2 | `'==' no conversion from int/const double` |
| C2562 | 1 | `'void' function returning a value`（`nullsub_2`） |

### 4.3 消融（隔离 CW2 贡献；诚实归因）

同一 200 件在 **pre-CW2 代码**（`git show dcd4b0ec9:tools/decomp_sys/*` 影子树，
joins 仓库既有夹具；`out/batch_report.json` 存档）上重跑：

| 代码状态 | COMPILE_FAIL | MATCH | 编译通过 |
|---|---:|---:|---:|
| pre-CW2（HEAD `dcd4b0ec9`） | 40 | 54 | 160/200 = 80.0% |
| CW2 后（本轮） | 39 | **57** | **161/200 = 80.5%** |
| 差异 | −1 | +3 | +0.5pp |

翻转明细（3 件，均无回退）：`0x4026a0 MISMATCH→MATCH`、`0x4a5130 MISMATCH→MATCH`、
`0x6c8e70 COMPILE_FAIL→MATCH`。

**结论：A 层相对 2026-11-11 普查基线 44.2% 的跃升，主体来自已提交的 NO_CLS 自由函数
通道（`dcd4b0ec9` 及此前 27 part 提交），不是 CW2。** 交叉验证：旧普查 A 层 642 件中
NO_CLS = 291；**非 NO_CLS 的 351 件当时编译率已是 283/351 = 80.6%** —— 与本轮
CW2 后实测 80.5% 完全一致，说明 A 层的墙本来就只有“壳生成”一堵，壳一开即达标。
CW2 的价值集中在 §3.1 的八族硬样本（0 → 20 编译）与后续 C/D 层。

---

## 5. 剩余错误族（下一轮攻击面）

1. **vector 模板壳 `m001` 降级**（C2100 ×21 中的 14 件）：`m001` 是 `T** Items` 视图，
   当前按未知元素落地为 `char[1]`；需要元素指针宽度/类型证据接入 `_view_span`/arrs 供给。
2. **C2109/C2296 全局/成员标量视图**（8 件）：`g_MissionQueueFrame` 等全局按标量声明后
   被下标/取址。
3. **C2065 模板类**（`TClassFactory/TypeList/DataGlobal_*`）→ 类 fwd/全局供给。
4. **C2059 裸 `?`**（3 件）→ 伪码 `.?` 残留规则。
5. `.lineTrailer` 全局结构成员（`DataGlobal_887598` 按 `unsigned char` 落地）→ 全局结构类型供给。
6. 伪码结构伤：`while(1);` 后的孤儿 `break`（C2043）、`return (void*)(this;)`（C2143）。

---

## 6. 硬约束合规

- `git status`：`src/` 零 tracked 改动（仅会话前既有未跟踪 `src/decomp_out/`）；
  `tools/csp_export/minclass_solver.py` 零改动。
- `checker.py` 零改动；本轮无任何白名单/suppression；A 层 33 件 rule-violating 函数、
  CW2 样本 5 件全部照实计入 `rule_violations`。
- 规则 6（零 stub）：COMPILE_FAIL 件同样 emit 完整实现，仅 verdict 记账，无 stub 降级。
- 每 part commit：`fa1802c63`(p00) `8a3957c73`(p01) `ac5a37767`(p02) `790363835`(p03)
  `25c127212`(p04) `92fdcde43`(p05) `d1bd62682`(p06) `5ba03ad8f`(p07) `8d48f1090`(p08)
  `66285923f`(p09)。每个 commit 含：part 目录（cpp/hpp/obj/report/log）+ part batch +
  `results.jsonl` + `status.json` + `timings.jsonl`。

---

## 7. 工件与复现

- 报告：`.omo/agents/decomp_batch/report_cw2.md`（本文件）
- 消融存档：`cw2_ablation_a200.json`、`cw2_ablation_sample31.json`
- 样本重跑：`.omo/decomp_batch/cw2_p2a..p2i/`、`.omo/decomp_batch/cw2_regress/`
- A 层产物：`.omo/decomp_batch/a200/p00..p09/` + `parts/a200_p*.json` + `timings.jsonl`
- 批次：`.omo/agents/decomp_batch/batch_a200_A.json`（选择器 `--tag a200`）
- 复现：

```bash
python tools/decomp_sys/batch_select5.py --layers A --n 200 --tag a200
python tools/decomp_sys/run_a200.py                   # 200 件，20/part，逐 part commit
python tools/decomp_sys/batch_run.py --batch .omo/agents/decomp_batch/cw2_sample_batch.json \
       --chunk 20 --out <dir> --no-ledger             # 31 件 CW2 样本
```
