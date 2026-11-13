# 阶段 3 上半场：编译墙清剿报告（report_s3a）

**性质**：CF 族清剿执行轮（写账本 / 每 part commit / 六规则红线未动 / `src/` 零改动 /
`minclass_solver.py` 零改动）。批跑通道独占（无并发写账本）。

**起始快照**：`2026-11-13` 全池判定 19,078：**CF 4,494 / NG 9,356 / OK 5,161 / PENDING 67**。

**最终快照**：**CF 3,691 / NG 10,133 / OK 5,183 / PENDING 71**（19,078 全池）。

**净结果：CF 4,494 → 3,691（−803，−17.9%）**。**未达 <2,500 目标**——原因与残余账见 §7。

---

## 1. 刷新后的 CF 分布（步骤 1）

### 1.1 阶段轨迹（账本实测）

| 时点 | CF | OK | NG | 本轮动作 |
|---|---:|---:|---:|---|
| 起始 | 4,494 | 5,161 | 9,356 | 全池判定完成 |
| 第一刀 C2036 | 4,180 | 5,161 | 9,670 | 472 件重跑，314 转出 |
| C2440 首轮 | 4,086 | 5,164 | 9,761 | 607 件重跑，94 转出 |
| C2109 首轮 | 4,039 | 5,164 | 9,807 | 486 件重跑，46 转出 |
| C2109 声明守卫 | 3,876 | 5,174 | 9,960 | 439 件重跑，163 转出 |
| C2440 二轮 | 3,868 | 5,174 | 9,968 | 513 件重跑，8 转出 |
| mix1（C2440+C2065+C2036） | 3,806 | 5,175 | 10,029 | 1,021 件重跑，64 转出 |
| 陈旧证据重跑 | 3,740 | 5,181 | 10,089 | 605 件重跑，66 转出 |
| censusC/D 重跑（40 part） | 3,710 | 5,182 | 10,117 | 800 件重跑，29 转出 |
| **final1（C2440+C2227）** | **3,691** | **5,183** | **10,133** | 766 件重跑，17 转出 |

### 1.2 首错码分布（起始 → 最终，实测）

| code | 起始 | 最终 | Δ | 读法 |
|---|---:|---:|---:|---|
| C2109 | 486 | 83 | **−403** | 两个单行生成器 bug 被清除（§4） |
| C2036 | 472 | 118 | **−354** | void* 算术 pass（§2） |
| C2440 | 600 | 490 | −110 | 数组 LHS/元素指针/对象→指针（§3） |
| C2227 | 249 | 162 | −87 | 全局 `->member` 偏移真值化（§5） |
| C2065 | 347 | 305 | −42 | 模板 vftable/time/aN arity/类型表（§3.2） |
| C2446 | 235 | 264 | +29 | 下移重分类（转出函数的下一错误） |
| C2664 | 227 | 245 | +18 | 同上 |
| C2039 | 183 | 202 | +19 | 同上 |
| C2100 | 207 | 194 | −13 | — |
| 其余 60 码 | — | — | — | 长尾 |

> 读法：转出的函数把“首错”让给了下游错误码，部分族计数上升是**进展的副产物**，
> 不是新增债；总量以 CF 计（4,494 → 3,691）。

### 1.3 运行账（每 part commit，全部 rc=0）

| run | n | 转出 | 率 | 备注 |
|---|---:|---:|---:|---|
| s3a_c2036 | 472 | 314 | 66.5% | void* 算术 pass |
| s3a_c2440 | 607 | 94 | 15.5% | 数组 LHS + 元素指针 + void ret |
| s3a_c2109 | 486 | 46 | 9.5% | 比较式下标误伤修复 |
| s3a_c2109b | 439 | 163 | 37.1% | 声明守卫（318 件同形态） |
| s3a_c2440b | 513 | 8 | 1.6% | 残余分散 |
| s3a_mix1 | 1,021 | 64 | 6.3% | C2440+C2065+C2036 复跑 |
| s3a_stale | 605 | 66 | 10.9% | pre-current 证据刷新 |
| s3a_rest | 800 | 29 | 3.6% | censusC/D 抽样 |
| s3a_final1 | 766 | 17 | 2.2% | 全局箭头修复后复跑 |

---

## 2. 第一刀：C2036（`'void *' : unknown size`）

### 根因（实证）

普查的 282 件同一行 `*(unsigned int *)(this->m004[0] + 4 * i - 4)` 全部来自
vector/dynamic-vector 模板壳：hpp 把未知指向成员声明为 `void * m004[1]`（元素视图），
body 保留 IDA 的**字节算术**。C 不允许 void* 算术；x86-32 上 `(char *)V + E`
与原始 `lea/add` 逐字节同构（不改变 sizeof/对齐）。

第二形态：合成 vtable 槽是**标量** `void * vfptr`，body 保留 IDA 的
`this->vfptr[0]`（字段本身，不是解引用）——`[0]` 在 void* 上是 C2036。
`mov eax,[esi]; call [eax+1Ch]` 实证：表达式 = 字段值 + 字节偏移。

第三形态：`void *` 局部/参数/全局的 `+ N` 字节偏移（`p0 + 84`、`v3 + 8`——
后者在 `pass_assign_harmonize` 把 `operator new` 结果局部 retype 成 void* 之后才出现，
早跑一次的 pass 看不到，故 pass 在管线末**再跑一次**）。

### 修复

`passes.pass_voidptr_arith`（管线位置：`pass_member_addr_view` 之后 + 末段
`pass_residual_idents` 之后各一次）：
- 只对**可证 void\*** 操作数生效：own-class 视图标量/数组元素、局部/参数/全局 `void *`、
  `base->MEM` 经 registry 证实的 void* 成员、`*(void **)(...)` 解引用；
- `V +/− E` → `(char *)V +/− E`；标量 void* 成员 `this->M[0]` → `this->M`（字段读）；
- 幂等：已带 `(char *)` 或前有 `&` 的站点跳过；`_void_ty` 归一 `void*`/`void *`。

### 实测

472 件 C2036 族全量重跑：**314 件转出**（66.5%），158 件仍有首错（多为下游码）。
残余 C2036（118 件全池）形态：全局 void* 下标（`DataGlobal_815E9C[i]`，需全局类型供给）、
不完整类指针算术（`(LinkedList *)v3 + 23`，sizeof 不可知，**不发明**）、
`p0[3].field` 等；均如实留 CF。

---

## 3. 第二刀：C2440（600）/ C2065（347）

### 3.1 C2440 修复（可证、codegen 中性）

| 形态 | 修复 | 位置 |
|---|---|---|
| 数组视图成员赋值 LHS（`this->m004 = (char *)(0)`，hpp `char m004[1]` + union 兄弟） | 改标量兄弟视图 `this->m004_dword = ...`（同偏移）；无兄弟时 `*(int *)this->NAME = ...` | `pass_array_lhs_store` |
| `this->M[i]` 元素为指针（`void *` 元素视图）被当 int | `_rhs_ptr_head` 返回元素指针类型 → 赋值侧 `(unsigned int)` 包裹 | `_rhs_ptr_head` |
| `ident[idx]` 元素（`v1[86]` on `void **`） | 同上，新增 bare-subscript 分支 | `_rhs_ptr_head` |
| 声明初始化器指针限定符（`const char **v = (char **)...`） | 声明初始化器按声明拼写包裹（`_DECL_INIT_PTR`） | `pass_assign_harmonize2` |
| `void` 返回 callee 被值 cast（`(unsigned int)(...->GetNext())`） | 调用点 cast 即返回真值：callee 声明 ret 改 `int` | `pass_void_call_retype` |
| 对象被 cast 成指针（`(AudioQueue *)(DataGlobal_87E810)`，hpp 是对象） | `(T *)(&obj)`——二进制即 `mov ecx, offset unk_87E810` | `pass_object_addr_cast` |

### 3.2 C2065 修复

| 形态 | 修复 |
|---|---|
| 模板 vftable 名（`&VectorClass<TPoint3D<int>>::`vftable'`） | `_VT_CLS` 支持嵌套模板 → 可解析者发 `vt_*`，不可解析者按 CW8 策略落 `0`（编译优先，不发明符号） |
| `time()` 未声明 | hpp 前置 `#include <time.h>` |
| Win32 残类型 `_TBYTE/LARGE_INTEGER/WNDCLASSA/HWND_MESSAGE` | `era_types.h` 补齐（纯拼写别名，零 codegen 影响） |
| body 引用 `aN` 超出签名 arity（proto 有第 3 参、registry 2 参） | `pass_param_rename` 按 body 引用**扩展签名**（body 即 arity 证据；stdcall 的 `retn N` 与参数宽度一致） |

### 实测

- C2440：607 首轮 94 转出；513 二轮 8 转出；mix1 与 final1 见 §1.3。
  残余 490 的根因已分散（成员链 LHS 类型、调用结果类型、值↔指针转换）。
- C2065：305 仍 CF。其中 asm 助记符（`fld/fstp/fild/fmul/_RT1/_ED`）78 件为硬底；
  模板局部类型（`rc_ptr v8[4]`、`_VectorCursor_... v4`）需 sizeof 证据，**不发明**。

---

## 4. 第三刀（本轮新发现）：C2109 单行生成器 bug（486 → 83）

### 根因（实证，两次）

1. **比较式误伤**：`pass_compare_harmonize` 的 `_CMP_SIMPLE` 把 `occupant[77]` 的
   **基址**当比较操作数：`v11 < occupant[77]` → `v11 < ((unsigned int)(occupant))[77]`，
   下标落到 int 上（C2109）。修复：操作数后随 `[` 时不算比较操作数（两侧 lookahead 加 `[`）。
2. **声明被当全局下标**：`pass_scalar_subscript` 的全局标量下标改写把**局部数组声明**
   `char Buffer[512];`（名字与 registry 全局同名）改成
   `char ((unsigned char *)(&(Buffer)))[512];`——318 件同一形态。
   修复：声明站点守卫（类型前缀 + `;` 后缀）跳过；合法全局下标改写保持。

### 实测

486 件全量：46 转出；声明守卫后 439 件再跑：**163 转出**（合计 209/486 = 43%）。
全池 C2109：**486 → 83（−403）**。残余为 `i[1].__pad_0` 链式成员、
`(*(unsigned char *)0xADDR)[i]` 等。

---

## 5. 附加修复（同轮，全部有实证支撑）

| 修复 | 目标族 | 证据 |
|---|---|---|
| `pass_global_arrow_members`：`void*` 全局的 `G->M` → `(*(T *)((char *)G + off))`（含 `G->Arr[i]` 下标） | C2227/C2039/C2109 | `mov ecx, dword_A8B230; mov eax,[ecx+1258h]` 逐偏移一致；样例 0x417fd0 由 CF → **MATCH 9B** |
| `pass_field_arrow_members`：`BASE->Owner_field_XX` 箭头形态 → 偏移真值 dword 访问 | C2227 | 名字自带 owner+offset（CW5-7b 的箭头补充） |
| `era_types.h` 增补（`_TBYTE/LARGE_INTEGER/WNDCLASSA/HWND_MESSAGE`） | C2065/C2061 | 样例 0x4a3a10/0x5caf70/0x60d450 编译前进 |
| `pass_voidptr_arith` 末段第二次调用 | C2036（retype 后） | 0x4a0760 `v3 + 8` 由 CF → 编译 |
| `_VT_CLS` 嵌套模板 | C2065 | 0x45e580 由 C2065 → 编译 |

---

## 6. 验证

- **零回归抽样（每刀后跑）**：30 件历史 MATCH 随机样本（seed 20261113），
  **7 次全部 30/30 MATCH**（`regress30`…`30h`，`--no-ledger` 探针目录）。
- **六规则红线**：`checker.py` 未豁免/未弱化；新增 pass 只做**可证类型**的拼写改写，
  不动语句语义；每 part 报告含 `rule_violation_fns`。
- **每 part commit**：`run_wa.py` 驱动，part 目录 + part batch + results.jsonl + 账本
  + timings 一次提交；本轮 9 个 run 目录逐 part commit 全部 rc=0（git log 可查）。
- **声明守卫的反向证据**：`char Buffer[512];` 在探针中恢复原样；合法全局下标
  （`DataGlobal_815E9C[i]`）仍走地址真值改写。

---

## 7. 残余与下一步（诚实账）

**未达 <2,500**。CF 3,691 的构成与下一步：

1. **D 层（censusD）是比率墙**：约 1,343 件仍 CF；重跑 800 件只转出 29 件（3.6%）——
   首错是异质长尾（C2446/C2039/C2100/C2296/C2146…），没有下一个单点根因。
2. **C2440（490）**：`void*→int/uint` 赋值站点仍占多数，但根因分散。下一轮应做
   **成员链 LHS 类型解析**（`v3->field = ...` 的 v3 类型供给）与**调用结果类型**供给，
   而不是继续加宽赋值包裹规则。
3. **C2065（305）**：asm 硬底 78 + 模板局部类型（需 sizeof 真值）。
4. **C2227（162）**：`this_->m`（NO_CLS free 函数）需要 receiver 类归属；
   `cast-arrow` 剩余多为下游。
5. **硬底**：asm 助记符、`?` 成员名/截断（普查 99 件）——规则不可修，等 IDA 重导出。
6. **不发明原则**：不完整类指针算术（`(LinkedList *)v3 + 23`）、`rc_ptr v8[4]` 等
   需要 sizeof/类型真值，本轮**如实留 CF**，未用 `(char *)` 猜测（会改变 stride 语义）。

**勿重跑**：CW4 已证伪族（语句交换/常量形态/循环改写/窄 cast）、`uintN_t` 补类型、
`__usercall` strip、批量 `ScalarDtor` 改名、2,149 全量盲跑（族定向重跑已覆盖）。

---

## 8. 最终快照（实测）

`cf_refresh.py` 实测（`status.json` 19,078 条）：

| 指标 | 值 |
|---|---|
| CF | **3,691** |
| NG | 10,133 |
| OK | 5,183 |
| PENDING | 71 |
| 首错码种类 | 69 |
| 陈旧账本行（末次判定非 CF） | 0 |
| CF 率 | 19.4% |

Top 15 首错码：C2440 490 / C2065 305 / C2446 264 / C2664 245 / C2039 202 /
C2100 194 / C2227 162 / C2296 142 / C2660 136 / C2228 127 / C2036 118 /
C2653 115 / C2377 115 / C2059 91 / C2061 91。

**净变化：4,494 → 3,691（−803）。**
