# NO_CLS 修复报告（2026-11-12）

范围：`tools/decomp_sys/`（**`src/` 零改动；`tools/csp_export/minclass_solver.py` 零改动；
checker 六规则未改、未绕过，violations 照实记账**）。
对象：全池普查 `results.jsonl` 中末判为 **NO_CLS 的 537 件**（2,000 件分层样本的 26.8%）。

---

## 0. 结论速览

| 指标 | 修复前 | 修复后 |
|---|---:|---:|
| NO_CLS（壳生成硬失败） | **537** | **0** |
| 壳生成成功（cpp+hpp emitted） | 0 | **537 / 537 (100%)** |
| 编译通过（到对拍） | 0 | **364 / 537 (67.8%)** |
| 字节匹配 MATCH | 0 | **109 / 537 (20.3%)** |
| MISMATCH（编译通过、字节不同） | 0 | **255** |
| COMPILE_FAIL（壳在、单位内编译墙） | 0 | **173** |
| 类归属恢复 | 0 | **7**（vtable_slot 铁证） |
| 其余如实登记为无类自由函数 | — | **530** |

537 件末判：`MATCH 109 / MISMATCH 255 / COMPILE_FAIL 173`。
回归：历史 MATCH 抽 10 件重跑 **10/10 仍 MATCH，0 rule violation**（无回退）。

---

## 1. 归因（全 537 件分类，非抽样）

### 1.1 证据源优先级与结果（多源仲裁）

| 优先级 | 源 | 命中 | 处置 |
|---|---|---:|---|
| a | `vtable_slot_authority` 主表槽归属（二进制身份） | **7** | 直接定类（全部唯一 owner） |
| b | full_export proto `Class *this` | 7（与 a 同集合，交叉印证） | 不新增（a 已定） |
| c | `call_convention=thiscall` + 入口 ECX 使用 | 1 件（0x765000） | **只证「是成员」，不能定类** → 如实登记 |
| d | 名字前缀 `Class::` | 0 | 无 `::` 名字（537/537 均为自由函数形态） |

7 件铁证明细（`slot=1`，vtable 地址 = 类身份）：

| 地址 | 证据类（mangled） | 归一到 registry 类 | vtable |
|---|---|---|---|
| 0x491b40 | `?$RLEBlitTransXlatZRead@E` | `RLEBlitTransXlatZRead` | 0x7E5AC0 |
| 0x4965b0 | `?$RLEBlitTransXlatZRead@G` | `RLEBlitTransXlatZRead` | 0x7E5560 |
| 0x491ea0 | `?$RLEBlitTransRemapXlatZRead@E` | `__RLEBlitTransRemapXlatZRead_E` | 0x7E5A90 |
| 0x491c50 | `?$RLEBlitTransZRemapXlatZRead@E` | `__RLEBlitTransZRemapXlatZRead_E` | 0x7E5AB0 |
| 0x4966d0 | `?$RLEBlitTransZRemapXlatZRead@G` | `__RLEBlitTransZRemapXlatZRead_G` | 0x7E5550 |
| 0x492100 | `?$RLEBlitTransZRemapXlatZReadWrite@E` | `__RLEBlitTransZRemapXlatZReadWrite_E` | 0x7E5A70 |
| 0x497230 | `?$RLEBlitTransZRemapXlatZReadWrite@G` | `__RLEBlitTransZRemapXlatZReadWrite_G` | 0x7E54C0 |

### 1.2 530 件无类自由函数（如实登记，非缺陷）

| 形态 | 件数 | | 调用约定 | 件数 |
|---|---:|---|---|---:|
| `sub_*` | 436 | | `unknown` | 430 |
| 语义名全局（`Map_Helper`/`Audio_Process_*`/`UI_*`…） | 62 | | `cdecl` | 57 |
| `_CRT/other`（`__toupper`/`_pow`/`GetEnvironmentStrings`…） | 18 | | `fastcall` | 39 |
| `nullsub_*` | 13 | | `stdcall` | 3 |
| `j_*`（跳转别名） | 1 | | `thiscall` | 1（0x765000） |

这些件在 signals / proto / vtable / 名字四个源中**均无类证据**：
430/530 连调用约定都是 `unknown`（IDA 无 thiscall 证据）；CRT/API 桩与空体桩本身即自由函数。
**不发明类**——按发射器既有的 file-level 自由函数通道输出。

### 1.3 形态 × 终判（530 自由函数）

| 形态 | MATCH | MISMATCH | COMPILE_FAIL |
|---|---:|---:|---:|
| `sub_*` | 86 | 228 | 122 |
| named global | 9 | 15 | 38 |
| `_CRT/other` | 1 | 5 | 12 |
| `nullsub_*` | 12 | 0 | 1 |
| `j_*` | 1 | 0 | 0 |

---

## 2. 根因（实证）

1. **VSA 地址键零填充不一致**（7 件全灭的直接原因）
   `vtable_slot_authority` 槽地址 = `0x00491B40`（8 位补零），signals/registry 地址 =
   `0x491b40`（无补零）。registry.py 的 `vsa_owner` 以字符串去 `0x` 建索引，
   `"00491b40" != "491b40"` → 7 个模板 blitter 槽位归属**从未命中**。
   实测：`vsa_claims(0x491b40)` 修前字符串比较 0 命中；`int()` 归一后 7/7 命中。
2. **mangled 模板类名未归一**
   VSA raw key = `?$RLEBlitTransXlatZRead@E`；registry 类键 = `RLEBlitTransXlatZRead`
   / `__RLEBlitTransZRemapXlatZRead_E`（差 `?$`/`@` 清洗与 `template_base` 规则）。
   必须复用 registry.py 的 Canonizer（`class_name_align` → `mangled_alias`）才等价。
3. **`decompile.run_function` 对 `cls is None` 硬失败**
   `raise SystemExit("no registry class")` 在签名推导后立即拦截；发射器本就有
   `free`（文件级）通道。这是 530 件（98.7%）的结构性根因。
4. **无类 unit 的 hpp 无处承载**
   hpp 仅由 `gen_class_hpp(cls,...)` 产出；`cls=None` 时既不生成类壳，也没人写
   extern 块 → cpp 的 `#include <unit>.hpp` 无法解析。新增 `gen_free_hpp`。
5. **thiscall 无类时的接收者拼写**
   0x765000（`char *__thiscall(int this, void *)`）body 引用 `this`；
   自由函数不能叫 `this`。按 `__fastcall` + 显式首参 `this_` 机械表达（ECX==arg1）。
6. **已恢复成员的 signals 参数全为 `int`**（7 件 C2100 次因）
   proto 已给出 `_BYTE *`/`unsigned __int8 *`/`char *`；registry 11 个 `int` 使
   `p0[v17]` 非法。**仅对 `cls_src=resolve:*` 群体**改用 proto 参数拼写（同源 live
   typing，与返回类型同一通道），7 件由 COMPILE_FAIL → MISMATCH（到对拍）。

---

## 3. 修复清单

| 文件 | 变更 | 作用 |
|---|---|---|
| `tools/decomp_sys/registry_ext.py` | `+ class_key()`（exact / `Class` 后缀 / Canonizer / `ns::` 尾归一）<br>`+ _canon()`（复用 registry.Canonizer）<br>`+ _vsa_by_addr()/vsa_claims()`（int 地址归一）<br>`+ resolve_function_class()`（a→b→c 仲裁 + evidence/rejected 台账）<br>`class_keys(None) -> []`（None 安全） | 类查找归一 + 7 件回收 + 归属审计 |
| `tools/decomp_sys/decompile.py` | `derive_signature`: `cls is None` → resolver<br>`run_function`: NO_CLS → 自由函数通道（保留 cc；thiscall → `__fastcall` + `this_`）<br>`_cc_token`/`free_decl`/`emit_cpp`: cc 按签名拼写<br>`proto_param_spell`: 仅 resolve:* 群体<br>`shell_augment`: 跳过 None 视图桶<br>main: None 不入 by_cls + 无类 unit 写 gen_free_hpp | 537 件全部产出壳 |
| `tools/decomp_sys/hpp_pilot.py` | `+ gen_free_hpp()`（guard + fwd + extern-only） | 无类 unit 的镜像 hpp |
| `tools/decomp_sys/batch_run.py` | None 不入 by_cls（unit + isolated）<br>无类 unit/iso 写 gen_free_hpp<br>`emitted` 自由函数不带 `None::` | 批产线一致 |
| `tools/decomp_sys/run_nocls.py` | **新增**驱动：537 件 20/part、每 part commit、失败重试 | 本轮复现 + 审计 |

说明：工作树同时存在**并行会话**对 `decompile.py/batch_run.py/hpp_pilot.py` 的 CW2
改动（`era_types.h` 等，非本任务）。本任务只暂存自己的 hunk，完整 diff 存档 =
`.omo/agents/decomp_batch/nocls_hooks.patch`（`git apply --cached --check` PASS）。

---

## 4. 验证

### 4.1 冒烟（代表性 6 件）

```text
0x491b40 RLEBlitTransXlatZRead::sub_491B40   （vsa 归属）
0x7dfd00 Audio_Process_7DFD00 -> 自由函数     （Audio_Process 单元）
0x5889f0 globalHelper_0889F0 -> _addr_58     （fastcall 自由函数）
0x40ff30 nullsub_64 -> _addr_40              （+ MATCH）
0x765000 sub_765000 -> _addr_76              （thiscall → this_ 自由函数）
0x5b3b10 sub_5B3B10 -> _addr_5B
→ 0 NO_CLS；nullsub_64 字节 MATCH
```

### 4.2 全量重跑（537 件 / 27 parts / 20 件每 part，逐 part commit）

- 驱动：`python tools/decomp_sys/run_nocls.py`（27 parts 全部 `ok`）
- 墙钟：单 part 12.4–20.2 s，合计 ≈ 7.6 min
- **NO_CLS 残留 = 0**；537/537 有 `emitted` 名与 cpp/hpp 壳
- 终判：`MATCH 109 / MISMATCH 255 / COMPILE_FAIL 173`

### 4.3 回归（无回退）

历史 MATCH 抽 10 件（0x401940/0x486380/0x4870d0/0x406540/0x4065c0/0x4065d0/
0x4065e0/0x406640/0x410490/0x411540）重跑：

```text
MATCH=10  pathology={}  rule_violation_fns=0
```

（本任务新增代码路径仅对 `cls=None` / `cls_src=resolve:*` 生效，历史类函数零接触。）

### 4.4 过程性推论检验

假设「7 件 NO_CLS 由 VSA 地址零填充不一致造成」：
- 若成立：`int()` 归一后 `vsa_claims` 应命中这 7 件，且 registry 类键应存在。
- 实测：修前字符串索引 0 命中 → 修后 **7/7 命中**；7 个 canon 键全部在
  `decomp_registry['classes']` 中（`RLEBlitTransXlatZRead` size=8 等）。✅

假设「530 件为真自由函数」：
- 若成立：四源均无类证据；cc 多为 unknown；名字无 `::`。
- 实测：537/537 无 `::`；530/530 proto 无类类型 `*this`；VSA 0 命中；
  430/530 cc=unknown。✅

---

## 5. 剩余登记（诚实账）

### 5.1 173 件 COMPILE_FAIL（壳已生成，卡在既有编译墙）

| 首错 | 件数 | 说明 |
|---|---:|---|
| C2065 | 55 | 未声明标识符（全局/类型供给） |
| C2440 | 45 | 指针 vs 裸 dword（R6 同源墙） |
| C2664 | 19 | 参数类型转换 |
| C2109 | 11 | 下标基非指针（全局类型） |
| C2673 | 9 | 非成员函数却用 `this`（伪码残留） |
| 其他 | 34 | C2143/C2371/C2665/C2064/C2653/C4716… |

这些不是类归属问题；样本量证明自由函数通道已打开（同批 364 件编译通过）。

### 5.2 29 件 rule violation（照实记账，未绕过 checker）

全部为 **class-less 接收者/局部变量上的 `*(T*)(x + N)`**（cast-deref-plus）：
自由函数没有成员表可还原，属六规则 R3 的目的边界（成员偏移还原）之外的
裸结构体访问。checker 未改、未加白名单；计数如实上报（`rule_violations`）。

### 5.3 255 件 MISMATCH 病理

`extern_reloc 161 / codegen_shape 62 / regalloc 9 / const_fold 5 / signedness 3 /
eval_order 3 / branch_order 3 / branch_polarity 3 / frame_sched 2 / cc_mismatch 2 /
ret_norm 1 / width_mismatch 1`。
`extern_reloc` 主导 = 全局符号解析差异（reloc key 对绝对地址），非壳生成问题。

### 5.4 池外延

537 是 2,000 件分层样本内的 NO_CLS；全池未处理 ≈16,067 件按同率外推 ≈4.3k 件
同类（**外推，非实测**）。系统性修复（resolver + 自由函数通道）对未来所有批生效，
无需只为这 537 件开特例。

---

## 6. 提交

- 逐 part commit（27 parts + p04 重跑 = 28 条）：
  `15b896e7b`(p00) `8446a3ead`(p01) `1fe5ab7ab`(p02) `1de5b67d1`(p03)
  `978b154bc`(p04) `dfaed51bf`(p05) `98524b54f`(p06) `7b7abe32b`(p07)
  `2130b9ece`(p08) `01731f8bb`(p09) `919d049bd`(p10) `2aed71b59`(p11)
  `90231aaa0`(p12) `13b6c205f`(p13) `199dd0fe0`(p14) `5e25bb986`(p15)
  `1e0b5c00d`(p16) `2395a9019`(p17) `2d8df138e`(p18) `85eb4aef4`(p19)
  `eefbba6d3`(p20) `a053b6fd0`(p21) `6ba311877`(p22) `2a301dd14`(p23)
  `fabb624f6`(p24) `a8462189f`(p25) `e18a4f552`(p26) `7e2afef31`(p04 重跑)
- 每个 part commit 含：part 目录（cpp/hpp/obj/report/log）+ part batch +
  `results.jsonl` + `status.json` + `timings.jsonl`。
- 代码提交：`registry_ext.py`（纯本任务）+ `run_nocls.py`（新增）；
  `decompile.py/batch_run.py/hpp_pilot.py` 的本任务 hunk 经
  `nocls_hooks.patch` 单独暂存（不吞并行会话 CW2 改动）。

## 7. 复现

```bash
python tools/decomp_sys/run_nocls.py            # 537 件、20/part、逐 part commit
python tools/decomp_sys/run_nocls.py --no-commit --max-parts 1   # 冒烟
```
