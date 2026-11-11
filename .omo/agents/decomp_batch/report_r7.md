# DECOMP R7 报告 — 供给面二度恢复：852 行 WIP 固化 → 修复验证 → 331/251 全量重跑

日期：2026-11-11
范围：`tools/decomp_sys/`（**未触碰 `src/`、未触碰 `minclass_solver.py`**；六规则 checker 未改、未绕过，violations 照实记账）
前任状态：两度死于配额，未提交 852 行 + `report_r7.md` 缺失。

---

## 0. 结论速览

| 项 | 结果 |
|---|---|
| 未提交 diff 审查 | 5 文件 **+852/−32**；`r7_prediff_passes.patch` = passes.py 当前 diff 的**精确快照**（同 blob hash `f840c1522..1cf1a1cfd`），无需二次应用；`r7_tmp_patch.py` 的 4 处 relax 已在树内 |
| 固化 | `86517fd9e` WIP（852 行，先提交后验证） |
| 样本验证（5 件 C2228/C2059 纯败件） | **0/5 → 5/5 编译通过**（全部进入 diffasm MISMATCH） |
| 331 全量重跑 | 5 件 NG→CF 回归先修复（R7.1）后 326 件分 **17 part** 全跑 → **76 件编译转化**（74 NG + 1 OK + 1 PENDING） |
| 零回归检查（30 抽样，最终代码） | **29/30 NG；1 CF = 预存缺陷**（0x5b2950，旧代码对照同样 CF，账本旧 NG 为陈旧记录）→ **0 件 R7 造成的回归** |
| 251 残墙二跑 | 13 part 全跑，251 件全部维持 CF（确认 r7.2 未引入噪声） |
| 最终账本 | **OK 425 / NG 321 / COMPILE_FAIL 251 / PENDING 3**（会话起点 424/243/331/2）→ **CF −80，NG +78，OK +1，PENDING +1** |
| MUST NOT | `src/` 零改动；`minclass_solver.py` 零改动；REVERSE/checker 六规则零修改 |

**一句话**：R7 供给面（C2228 递归壳 / C2059 stru_ 与宏残留 / fn-ptr cast 调参 / 十字段参数供给）
方向有效，清掉 80 件编译墙；但它的两处启发式（`a1` 一律=this、`->`/`&` 一律=指针）曾带 8 件
NG→CF 回归，已全部定量修复并二次验证归零。剩余 251 件是下一轮分桶目标（§7）。

---

## 1. 未提交 diff 审查（步骤 1）

### 1.1 构成（`git diff`，+852/−32，5 文件）

| 文件 | 增量 | 内容 |
|---|---|---|
| `passes.py` | +777 | ①`pass_param_rename` 改**位置式 aN 映射**（原“出现顺序”写法在 body 只引用部分 aN 时错位）；②`pass_struct_globals` 2b 族：`G.?[N]` / `.vfptrN` / `.__pad_H[M]` 链 / 具名成员视图（registry 反查唯一 offset）；③`pass_member_shapes`：numeric member（`this->0`）、`__pad_`/`field_` 名合成、disasm-singleton 绑定、穿透指针链（`this->rubble->vfptr1`、`v11[1].field_08`）、true-pointer 视图；④`pass_unknown_symbols`：`...` 原型硬错误、IDA 字符串标签（`aStructuretab`）、调用约定关键字/`va_*` 宏排除；⑤新 pass `pass_prune_type_only_globals`（类名=全局名幻影）；⑥新 pass `pass_fncast_harmonize`（fn-ptr cast 参数按实参放松）；⑦`pass_local_retype` 指针头赋值推断；⑧`#NNN`/`va_start(ap,this)`/指针移位宏残留；⑨`pass_ret_view_align` 的 `&this->m` 不算整数证据；⑩`pass_callees` 参数按实参形态重定型（void* 槽）、返回值按 LHS 指针定型 |
| `decompile.py` | +47 | `shell_augment`：跨类成员视图 → 空壳类**定义**（depth=2），接入 `run_function`/`batch_run` 三处；`pass_fncast_harmonize`/`pass_prune_type_only_globals` 挂链 |
| `pseudo.py` | +17 | proto 头窗口 12→24 行 + 控制关键字/语句守卫（Blit 13+ 参数族的外泄 proto 修复） |
| `registry_ext.py` | +36 | `global_member_offset()` 跨类反查（全类同名成员唯一 offset 才回答） |
| `batch_run.py` | +7 | 两处 hpp 发射前 `shell_augment` 合并 |

### 1.2 与 `r7_prediff_passes.patch` 的关系

patch 头部 `index f840c1522..1cf1a1cfd` 与当前 `git diff tools/decomp_sys/passes.py`
逐字节一致（同一 blob 对）→ **patch 就是前任 14:09 时刻的 diff 备份，不是补充**。
`r7_tmp_patch.py`（四处 `_arg_ptrish` relax：去掉 `endswith("]")`/宽松 cast 前缀）已在树内
（对应注释 "NOTE: bare `x[i]` is the ELEMENT" 可见）。审查结论：**无需应用额外补丁**。

### 1.3 审查发现的机制风险（→ 后续真实回归，见 §5）

- `pass_param_rename`：`base = 2 if not free` 假设 `a1` 恒为 this——对 `__stdcall` 纯栈参数
  叶子/PIC-free `__fastcall` 成立吗？**否**（0x56E7C0 / 0x433770 实证）。
- `pass_callees`/`pass_fncast_harmonize`：`_arg_ptrish` 以 `"->" in s or "&" in s` 判指针——
  `(int)this->m`、`this->x - 1`、`(x >> 16) & 0xFF`、`*(unsigned int *)(...)` 全被误判
  （0x5C1FA0 / 0x720A80 / 0x4802A0 / 0x50E1C0 实证）。

---

## 2. 先固化（步骤 2，防第三度死亡）

```
86517fd9e decomp_sys r7 WIP: supply-side passes (852 lines) -- pre-verification
```
5 文件 852 insertions / 32 deletions。验证全部在其后进行；后续修复分开提交（可回滚定位）。

---

## 3. 样本验证（步骤 3，编译输出实证）

5 件 = 账本 COMPILE_FAIL 的 C2228/C2059 代表（`r7_census.json` 首错）：

| addr | 函数 | 原首错 | R7 后 |
|---|---|---|---|
| 0x41FD60 | AITriggerTypeClass::RegisterSuccess | C2228 `.__pad_FC` | **rc=0**，MISMATCH(extern_reloc) |
| 0x42A5B0 | CellClass::ClearOccupancyGrid | C2228 `.__pad_190` | **rc=0**，MISMATCH(regalloc) |
| 0x480510 | BuildingPlacement::ValidateType | C2228 `.__pad_FC` | **rc=0**，MISMATCH(branch_polarity) |
| 0x472160 | CaptureManagerClass::DrawLinks | C2059 `'...'` | **rc=0**，MISMATCH(frame_sched) |
| 0x4974B0 | RLEBlit…::Blit_Alpha_ZReadWrite_Lucent25 | C2059 `'('` | **rc=0**，MISMATCH(codegen_shape) |

5/5 从「编译不过」进入「编译过、字节比较层」，修复生效。

---

## 4. 全量重跑（步骤 4）

### 4.1 331 口径先例修复：5 件 NG→CF 回归（R7.1，`e675997ab`）

审查工作树账本时发现前任 ad-hoc 已暴露 5 件 NG→COMPILE_FAIL（不是本会话引入，而是 852 行
R7 本身引入、验证未收尾）：

| addr | 函数 | 回归错误 | 根因 |
|---|---|---|---|
| 0x5C1FA0 | MPCooperative::Revert | C2664 GetSection int→void* | 实参 `(int)this->m33C` 含 `->` 被判指针 |
| 0x720A80 | Movie::SelectNextBuildableType | C2664 Range uint→void* | 实参 `this->u32_24 - 1` 顶层算术被判指针 |
| 0x4802A0 | TacticalClass::DrawCellTerrainOverlay | C2664 GetTerrainFlag int→void* | 实参 `((this->visibleCells[13] >> 16) & 0xFF)` 被判指针 |
| 0x50E1C0 | TechnoClass::Process | C2664 `int (void *)` uint→void* | fn-cast 实参 `*(unsigned int *)(...)` 的 `&` 被判指针 |
| 0x56E7C0 | MapClass::CheckCellsBuildable | C2446 `>=` `unsigned short*` vs int | `__stdcall` 叶子无 this，位置式映射整体错一槽 |

修复（R7.1）：
1. `decompile.py` 新增 **`this_at_a1`** 签名真值：仅 thiscall/fastcall 接收者或 proto 明写 `this` 时为真；
2. `passes.py` 新增 **`_arg_is_pointerish`** 精确门：显式标量 cast 头 / 顶层算术（`+ - * / % & | ^ << >>`，
   左操作数为已知指针名时除外）/ 标量指针 deref / 顶层下标=元素 / `&` 地址 = 指针；
3. 五件全部回归 NG（重跑实证：`r7_regressA3`）。

### 4.2 326 件 × 17 part（commits `8abcaa406` … `d641f5270`）

每 part 20 件，part 末提交 ledger + 产物（沿用 `run_census383_r7.py` 布局）。
结果：**326 → 250 CF**，即 **76 件编译转化** = 74 NG + 1 OK（0x7BAB70 XSurface::entry_3C_，MATCH）
+ 1 PENDING（0x5F6A70 ObjectClass::CheckGroundHeightDiff，OBJ_EXTRACT_FAIL，待查）。

按 part 转化数（part: 转化/20）：
p00 2、p01 8、p02 14、p03 15、p04 0、p05 3、p06 9、p07 10、p08 2、p09 0、p10 3、p11 0、p12 3、p13 2、p14 3、p15 1(MATCH)、p16 0。
零转化簇（p04/p09/p11 等）经首错对照 = 与本轮供给面无关的异质长尾（C2446 `>` / C2100 / C2036 /
C2371 size_t / C2146 / C2086 redefinition…），不是 pass 失败。

### 4.3 251 件 × 13 part 二跑（commits `1179210da` … `6359eb888`）

r7.2 后对残余 251 件全量复跑：**251/251 维持 CF**（无意外转化、无新崩溃）——确认 r7.2 的
收紧只作用于回归面，不改变残墙判定；同时形成 251 件最新首错 census（§7）。

---

## 5. 零回归检查（步骤 5）：30 抽样 + 旧代码对照

### 5.1 第一轮（r7.1 代码）：4 件 CF

样本 = 30 件 NG（size≥20，seed 707）。结果 26 NG + **4 CF**：

| addr | 函数 | 错误 | 归因 |
|---|---|---|---|
| 0x433770 | BinkMovieClass::OpenFile | C2065 `a1` undeclared | **R7.1 回归**：free `__fastcall`（无 this）被 `this_at_a1` 误判 → a1 悬空 |
| 0x509B20 | HouseClass::Find | C2664 FindSWTarget int→void* | **R7.1 回归**：`this->preferredTargetType`（int32 成员）被判指针 |
| 0x565B00 | MapClass::FreeAllCells | C2664 fn-cast `char*` ← `int*` | **R7.1 回归**：`&this->m134[4]` 被新下标规则先判成元素 |
| 0x5B2950 | Math::Sub16 | C2296 `&` on `unsigned short *` | **预存**（下证） |

### 5.2 旧代码对照（`git checkout f855d784a -- tools/decomp_sys/*` 复跑）

| addr | 旧代码结果 | 结论 |
|---|---|---|
| 0x433770 | **NG（编译过）** | R7 系回归，必须修 |
| 0x509B20 | **NG（编译过）** | R7 系回归，必须修 |
| 0x565B00 | **CF（同一错误）** | 与 R7 无关；但 r7.2 的 `&` 规则顺手修复 |
| 0x5B2950 | **CF（同一错误）** | 与 R7 无关；ledger 旧 NG 是**陈旧记录**（未在 census383 批内重跑） |

### 5.3 R7.2 修复（`cb76926e7`）

1. `this_at_a1`：cc 条件收窄为 `thiscall`/`__thiscall` **或** proto 含 `this`——`__fastcall`
   纯栈/寄存器叶子不再误判（0x433770）；
2. `pass_callees` 实参门新增 **registry 成员反查**：`this->NAME` 先查
   `member_offset_by_ida_name`/`inherited`，标量成员 → 不放松（0x509B20）；
3. `_arg_is_pointerish`：**地址符 `&` 判定前置于下标规则**（`&x[i]` 是指针证据，0x565B00）。

### 5.4 最终零回归（r7.2 代码，同一 30 样本）

**29/30 NG + 1 CF（0x5B2950 预存）** = 0 件 R7 造成的回归。
（注：30 样本中 3 件 0x433770/0x509B20/0x565B00 均恢复 NG，与 §5.3 修复逐件对应。）

### 5.5 为什么 OK 口径只做 30 抽样

账本 425 件 OK 中 **423 件是 <20B 的 return-thunk 存根**（`pseudo.fetch().size` 实测：
size≥20 仅 2 件），不经过本轮改动的 pass 面；故零回归实际由 NG 面（322 件真实 codegen）
抽样承担。30 件样本全部 ≥20B（中位 169.5B，max 485B）。

---

## 6. 账本演化（可核对）

| 阶段 | OK | NG | COMPILE_FAIL | PENDING |
|---|---|---|---|---|
| 会话起点（工作树） | 424 | 243 | 331 | 2 |
| 5 回归修复（R7.1 前置） | 424 | 248 | 326 | 2 |
| 326 × 17 part 完成 | 425 | 322 | 250 | 3 |
| 零回归第一轮 4 件落账 | 425 | 318 | 254 | 3 |
| R7.2 修复 3 件 | 425 | 321 | 251 | 3 |
| 251 × 13 part + 最终 30 抽样 | **425** | **321** | **251** | **3** |

净变化：**CF −80**（331→251）；NG +78；OK +1；PENDING +1（0x5F6A70 OBJ_EXTRACT_FAIL）。
上述每个非代码阶段都由 part 级 commit 固化，任何数字可从 `git log` + `status.json` 复查。

---

## 7. 251 残墙首错 census（下一轮分桶）

| code | n | 代表形态 | 攻击面（下一轮建议） |
|---|---|---|---|
| C2440 | 33 | `'=' cannot convert from 'unsigned int *' to 'int *'`、`char *`→`int` | 类型层长尾（R6 域的延续） |
| C2109 | 29 | `subscript requires array or pointer type` | 数组视图 vs 标量视图供给（views 声明形态） |
| C2228 | 28 | `.spawnStatus` / `.barrelFacing` / `.__pad_FC` on 非类 | 壳供给扩展到 registry 标量型全局/局部（2b 族覆盖面） |
| C2039 | 24 | `'m_1'/'__pad_0' is not a member of ...` | `shell_augment` 跳过 `by_cls` 已有类的视图合并缺口 |
| C2106 | 19 | `'=' left operand must be l-value` | 窄宏 store 目标（LOWORD 等）落在指针/常量上的再拼 |
| C2036 | 14 | `'void *' : unknown size` | 指针视图元素类型（`void*` 算术） |
| C2664 | 13 | `LODWORD`/`Locomotor__GetSpeed` 实参与 slot 失配 | 宏/桩参数类型豁免表 |
| C2562 | 10 | `'void' function returning a value` | ret 真值 vs body return（VtableStub/Release 族） |
| C2065 | 10 | `IID_IUnknown` / `DSurface_Vtable` undeclared | COM GUID / vtable 符号外部声明供给 |
| C2296 | 10 | `'&' illegal, left operand has type 'X *'` | 指针参与位运算的 store 再拼 |
| C2059 | 10 | `'?'`（**裸 `v11.?`** 非 `.?[N]`）/ `'('` | 裸 `.?` 规则补 2b-1；LinkClass `(` 语法源 |
| 其他 | ~45 | C2146/C2446/C2040/C2100/C2227/C2143/C2653/C2198/C2665/C2660/C2027/C2018(`0x60` 反引号)/C2086/C2371/C2110/C2679 | 异质长尾 |

> 注：`shell_augment` 的 `if c in by_cls: continue` 是 C2039 族的直接嫌疑（类已有方法但
> 跨类视图未并进该类的 hpp 块）；`pass_struct_globals` 2b-1 只匹配 `.?[N]`，裸 `.?`（0x4371D0
> `v11.? = ...`）仍是 C2059——两者都是下一轮低成本单点。

---

## 8. 工件与复现

- WIP/修复提交：`86517fd9e` → `e675997ab`（R7.1）→ `cb76926e7`（R7.2）
- 全量 part 提交：`8abcaa406`…`d641f5270`（17 件，fix331）；`1179210da`…`6359eb888`（13 件，fix251）
- 产物目录（`.omo/decomp_batch/`）：`r7_fix331/p00..p16`、`r7_fix251/p00..p12`、
  `r7_sample5{,b}`、`r7_regressA{2,3,4}/B`、`r7_zero30{,_final}`、`r7_oldprobe`
- 批次/分析：`r7_fix331_batch.json`、`r7_fix251_batch.json`、`r7_zero_regress30_batch.json`、
  `r7_census.json`（R7 前基线）
- 复现：
  ```
  python tools/decomp_sys/batch_run.py <addr...> --out <dir> --chunk N
  python .omo/agents/decomp_batch/run_fix251_r7.py 0 12   # 需 r7_fix251_batch.json
  ```
- 硬约束遵守：`git status` 中 `src/` 零改动（`src/decomp_out/` 为会话前既有未跟踪物，未触碰）；
  `tools/csp_export/minclass_solver.py` 零改动；`tools/decomp_sys/checker.py`（六规则）零改动，
  `rule_violations` 照实输出（本轮未做任何 suppression）。

---

## 9. 与前任/后续的衔接

- 前任 14:09 的 `r7_prediff_passes.patch` 已确认是 diff 快照（非补充），本会话的 WIP 提交
  与其等价；`r7_tmp_patch.py` 已在树内。
- 前任账本里 17 件 CF→NG 的 ad-hoc 结论中，与 R7 相关者已在 §4.1 逐件复核；5 件 NG→CF
  反向回归已清零。0x5F6A70 的 OBJ_EXTRACT_FAIL 需独立排查（objdump 提取层，不属本 pass 集）。
- 下一轮建议按 §7 从上到下：C2109/C2228/C2039 三个「视图/壳」族是同一供给面自然的延续
  （预计可复用本轮的 `shell_augment`/`_this_member_scalar` 机制），C2059 裸 `.?` 是单点快修。
