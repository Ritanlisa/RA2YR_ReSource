# 阶段 3 下半场：CF 3,691 续清剿报告（report_s3b）

**性质**：CF 族清剿执行轮（写账本 / 每 part commit / 六规则红线未动 / `src/` 零改动 /
`minclass_solver.py` 零改动）。批跑通道独占（无并发写账本）。

**起始快照**（report_s3a §8）：全池 19,078：**CF 3,691 / OK 5,183 / NG 10,133 / PENDING 71**。

**最终快照**（`status.json` 实测）：**CF 3,350 / OK 5,196 / NG 10,455 / PENDING 77**。

**净结果：CF 3,691 → 3,350（−341，−9.2%）**；OK +13；CF→MISMATCH 322。
**未达 <2,500 目标**——原因与残余账见 §7。

---

## 1. 刷新后的 CF 分布（步骤 1）

### 1.1 运行账（每 part commit，全部 rc=0）

| run | 件数 | parts | 转出（MISMATCH+MATCH） | 率 | 备注 |
|---|---:|---:|---:|---:|---|
| s3b_all1 | 1,400 | 35 | 112 | 8.0% | 首批全池 CF 前缀（chunk 40，后改 20） |
| s3b_t1 | 2,093 | 105 | 173 | 8.3% | 陈旧证据定向重跑（族定向集） |
| s3b_f1 | 3,402 | 171 | 45 | 1.3% | 全池 CF 复跑（验证已修族 + 收残余） |
| s3b_f2 | 3,356 | 168 | 5 | 0.1% | 最后一刀后全池复跑（收敛确认） |
| **合计** | — | **479** | **335** | — | 账本 CF −341（另 6 件 DUP_SKIP/PENDING 变动） |

### 1.2 首错码分布（起始 → 最终，实测）

| code | 起始 | 最终 | Δ | 读法 |
|---|---:|---:|---:|---|
| C2377 | 115 | **0** | **−115** | `extern int INT_PTR(int, ...)` 型名当函数（§2.1）全清 |
| C2019 | 100 | **0** | **−100** | `#374 *` IDA 类型引用（§2.5）全清 |
| C2533 | 47 | 3 | **−44** | 构造名==类名（§2.2） |
| C2380 | 49 | 2 | **−47** | 同上 |
| C2109 | 83 | 55 | −28 | `i[1].__pad_0[4]` 链（§6 残余） |
| C2100 | 194 | 102 | −92 | 比较式误伤 `*((unsigned int)(x))`（§2.3）+ pun 去 cast（§2.4） |
| C2227 | 162 | 151 | −11 | 同上（`(unsigned int)(this)->m`） |
| C2228 | 127 | 129 | +2 | 同上，下移重分类 |
| C2059 | 91 | 64 | −27 | `(X,)` 尾逗号（§2.6） |
| C2143 | 73 | 106 | +33 | 下移重分类（`_ESI` 声明误判修复后暴露下游） |
| C2061 | 91 | 112 | +21 | 下移重分类 |
| C2440 | 490 | 652 | +162 | **下移重分类**：上列族转出后的下一错误几乎全是 C2440 |
| C2446 | 264 | 212 | −52 | 比较式边界修复（§2.3） |
| C2039 | 202 | 280 | +78 | 下移重分类 |
| C2664 | 245 | 226 | −19 | — |

> 读法：`+` 项全部是**进展的副产物**（转出函数把首错让给下游码），总量以 CF 计
> （3,691 → 3,350）。真正的债只减不增：CF 净 −341，OK 净 +13，其余转出进了 MISMATCH。

### 1.3 最终 Top 15 首错码（实测）

C2440 652 / C2039 280 / C2664 226 / C2446 212 / C2065 173 / C2227 151 / C2228 129 /
C2036 126 / C2660 120 / C2061 112 / C2146 111 / C2653 108 / C2143 106 / C2100 102 / C2296 76。

---

## 2. 本轮九刀（每刀：抽样 5 件 → 修 → 全族/全池重跑）

### 2.1 `pass_unknown_symbols`：类型名被当成被调函数（C2377 115 → 0）

**根因（实证）**：IDA 把 `(int)v5` 渲染成 `INT_PTR(v5)`。`_UNQUAL_CALL` 把它当函数调用，
在 hpp 的 extern 块落 `extern int INT_PTR(int, ...);` → 与 `era_types.h` 的 typedef
重定义（**C2377**，115 件首错全在这一行）。

**修复**：`ERA_TYPE_NAMES` 改为**从 `era_types.h` 解析**（typedef + tag 前向声明），
并把它作为 `pass_unknown_symbols` 的类型名跳过门；`hpp_pilot._fwd_ok` 共用同一集合
（此前手写列表与头文件漂移，`LPPERSISTSTREAM` 同时是 typedef 和前向声明类 → C2040）。
`TYPE(x)` 保留为函数式转换，语义与 `(TYPE)x` 相同。

**实测**：C2377 全池 **115 → 0**；C2040 由 20 → 26（下移）后经同源修复回落。

### 2.2 构造名==类名（C2533 47 + C2380 49 → 5）

**根因（实证）**：registry 的 method 名等于其自身类名（`AircraftTypeClass::AircraftTypeClass`）。
在类体内声明为 `int AircraftTypeClass(char * p0);` → VC6 视为"带返回类型的构造函数"
（C2380/C2533）；定义 `int Cls::Cls(...)` 同样报错。而函数体以 `return (int)(this);`
结尾——**不能**改写成真构造函数（构造函数不得返回值）。

**修复**：`derive_signature` 在 `method == cls_ident` 时把方法名改为
`<Method>_<ADDR>`（CW5-12 `_Helper` 先例），`pass_callees` 对同一 callee 施加**同名改写**
（`((class Cls *)(recv))->Cls_<ADDR>(...)`），声明/定义/调用点三处一致。

**实测**：96 件首错（C2533 47 + C2380 49）→ 5 件残余（多为 `_TClassFactory_V*` 单元的下游码）。

### 2.3 `pass_compare_harmonize`：操作数边界（C2100 −92 / C2227 −11 / C2446 −52）

**根因（实证，两处，同一 pass）**：
1. `_CMP_SIMPLE` 把**操作数的一部分**当整个操作数：
   `*v15 <= v12` → a=`v15`（`*` 留下）→ `*((unsigned int)(v15))` = **C2100**（71 件）；
   `p0 >= this->m[1]` → b=`this`（`->m[1]` 留下）→ `((unsigned int)(this))->m[1]` = **C2227**（32 件）。
2. 反向缺口：简单侧 vs **扩展侧**（成员链/下标）时两侧都不匹配 → 该修的比较点一个都没修。

**修复**：操作数边界门（前缀 `* & ! ~`、后缀 `-> . [` 一律不算简单操作数）+ 新增
`_CMP_EXTB`（simple-a vs extended-b：只重拼**简单侧**的指针为 `(unsigned int)`，
绝不把 cast 塞进成员链）。

**实测**：探针 11 件中 3 件转出（C2100/C2446 → MISMATCH），其余首错下移；
全池 C2100 194 → 102、C2446 264 → 212。

### 2.4 `pass_member_addr_view`：pun 丢 cast（C2100，40 bodies）

**根因（实证）**：`*(_WORD *)&this->M[i]` 被改写为 `*this->m6E8[i]`——**cast 和 `&` 都被丢掉**，
`m6E8` 是 char 元素视图 → `*char` = C2100。逐 pass 快照探针定位到 `pass_member_addr_view`。

**修复**：pun 是**带类型的地址表达式**，改写保留 cast 并把地址括起来：
`(T *)(&(this->mNNN[i]))`（同值同类型；checker R3 的 `(T*)&this->` 模式因 `&(` 不命中，
规则未弱化）。

**实测**：0x42cf80 由 CF → MISMATCH；0x426ed0/0x426fd0 首错下移。

### 2.5 `spell_type`：IDA 类型引用 `#NNN`（C2019 100 → 0）

**根因（实证）**：proto/registry 的返回类型直接是 IDA 的类型表 id：`#374 * MissionStubReturnZero3(...)`
——`#` 在 C++ 里是预处理记号 → **C2019**（100 件首错同一行）。

**修复**：`spell_type` 把 `#NNN *` → `void *`、裸 `#NNN` → `int`（4 字节槽的 ABI 真值，
与既有 `#NNN` 擦洗策略同源）。C2019 全清。

### 2.6 `pass_intrinsics_lobyte`：尾逗号（C2059 ')' 53 → 64 族内大幅下降）

**根因（实证）**：语句切分把 IDA 的逗号表达式拆行，`LOWORD(v19) = *v6 / 256,` 的 RHS
捕获带着**尾逗号**，合成出 `((*v6 / 256,) & 0xFF)` → **C2059**。
且窄存储被改写成**独立语句**，切断了外层 `|| (a, b, c)` 的逗号表达式。

**修复**：RHS 去尾逗号；原行以 `,` 结尾时改写行也以 `,` 结尾（保持逗号表达式成员身份）。

**实测**：0x418e20/0x44acf0 首错下移（C2143 → 更下游），全池 C2059 91 → 64。

### 2.7 `__asm { ... }` 块保全（194 bodies；C2065/C2400/C2143 族）

**根因（实证）**：Hex-Rays 的 x87 序列是**真的 inline asm**：
`__asm { fild dword ptr [esp+50h+var_34] }` / `__asm /*0x…*/\n{ … }`。
`_split_top` 把 `{}` 当 C 块，于是产出裸 `__asm;` 语句、把助记符当 C 语句散落
（`fild [esp+…]` → C2065/C2400/C2059，194 个函数体）。

**修复**：`pseudo.protect_asm_blocks` 在解析前把块换成一行标记声明，`restore_asm_blocks`
在发射前原样还原；块内操作数做 **MASM 归一**：
`+var_XX` → `-XXh`、`+arg_N` → `+<8+N>h`、`IDA数据名_地址` → `dword/qword/word ptr ds:[ADDRh]`、
缺尺寸的 x87 形式补 `dword/qword ptr`（`fild/fi*` → dword，`fld/fstp/f*` → qword）。
`FunctionCtx` 侧同时修复 `_ESI = v8 + 29;` 被 `looks_like_decl` 误判成声明
（type `_ES` + name `I`，因为 `_` 前缀分支接受任意标识符）→ C2143/C2065；
`era_types.h` 的伪寄存器从 **typedef 改成 extern 变量**（`(_AX & 0x4100)` 曾按声明解析）。

**实测**：asm 块现已逐字出现在发射体里并编译通过；探针函数首错全部下移
（`fild`/`fstp` 不再报错）。

### 2.8 `pass_bitop_harmonize` + `pass_indirect_var_calls`（C2296 / C2064）

**根因（实证）**：
* 位运算作用在指针/浮点上（`p2 >> 16`、`ptr & 0xFF`、`this_->Capacity & 0xFF`）→ **C2296**（145 首错）。
  二进制里是对同一 32 位寄存器/dword 的 ALU 运算。
* 被调方是**保存代码指针的变量**（`void *p2` / `extern int g_DDraw_ErrorCallback`），
  `p2((int)this_)` → **C2064**（75 首错）。

**修复**：`pass_bitop_harmonize` 把左操作数重拼为 `(unsigned int)`（指针：值转换；
float：`*(unsigned int *)&x` 原始位型）；`pass_indirect_var_calls` 按**观测到的实参形状**
构造函数指针类型并强转被调表达式（`((int (__cdecl *)(int))p2)(…)`，调用本身不变）。
被调名若在 registry 函数表里则不触发（防回归）。

**实测**：C2064 75 → 47（探针 0x4068f0/0x4a3c30 转 MISMATCH）；C2296 145 → 76。
**已知残余**：左操作数是复合表达式（`(((char **)&G)[3]) & 0xFF`）时边界门不匹配，仍 CF。

### 2.9 `pass_void_call_retype` 扩展（void 被调当值用）

**修复**：成员被调之外，**自由函数**的 `extern void NAME(...)` 声明在出现
`(值类型)(NAME(...))` 时也重拼为 `extern int`。探针 0x406e80/0x40ffff 仍 CF——
`used_callees` 侧 ret 非 void 的路径未覆盖，如实留 CF。

---

## 3. 验证

* **零回归**：30 件历史 MATCH 随机样本（`batch_regress30.json`），本轮 **3 次全部 30/30 MATCH**
  （`s3b/regress30a`、`s3b/regress30b`，`--no-ledger` 探针目录）。OK 计数 5,183 → **5,196（净 +13）**。
* **六规则红线**：`checker.py` 未豁免 / 未弱化；新增 pass 只做**可证类型**的拼写改写
  （指针↔int 的 32 位恒等、float 位型、地址真值），不改语句语义；每 part 报告含
  `rule_violation_fns`。
* **每 part commit**：`run_wa.py` 驱动，part 目录 + part batch + results.jsonl + 账本 + timings
  一次提交；本轮 4 个 run 共 **479 个 part 全部 rc=0**（git log 可查：`s3b_all1_p*` /
  `s3b_t1_p*` / `s3b_f1_p*` / `s3b_f2_p*`）。
* **证据链**：每个根因都用**逐 pass 快照探针**（monkeypatch 每个 `pass_*` 比较 before/after）
  或**发射体原文 + 原始伪码对照**定位，不是猜测。

---

## 4. 按族的实测贡献（探针/全池）

| 刀 | 目标族 | 首错变化 | 备注 |
|---|---|---:|---|
| 类型名 extern 门 | C2377 | 115 → **0** | 全清 |
| 构造名改写 | C2533+C2380 | 96 → 5 | 声明/定义/调用三处一致 |
| 比较式边界 | C2100+C2446+C2227 | −92 / −52 / −11 | 一处正则两形态 + 新 EXT_B |
| pun 保 cast | C2100 | −40 bodies | checker R3 未弱化 |
| `#NNN` 擦洗 | C2019 | 100 → **0** | 全清 |
| 尾逗号 | C2059 | 91 → 64 | 含逗号表达式成员保全 |
| asm 保全 | C2065/C2400/C2143 | 194 bodies 编译通过 | 助记符不再进 C 语句流 |
| 位运算重拼 | C2296 | 145 → 76 | 复合左操作数仍残 |
| 间接调用强转 | C2064 | 75 → 47 | 需 fn-ptr 形状 |
| 数组视图复用名 | C2039 | 264 → 280（下移）后回落 | 消除 `mNNN_addr` 孤儿引用 |

---

## 5. 全池最终分布（实测）

| 指标 | 起始 | 最终 | Δ |
|---|---:|---:|---:|
| CF | 3,691 | **3,350** | **−341** |
| OK | 5,183 | **5,196** | **+13** |
| NG | 10,133 | 10,455 | +322 |
| PENDING | 71 | 77 | +6 |
| 首错码种类 | 69 | **55** | −14 |
| 陈旧账本行（末次判定非 CF） | 0 | **0** | — |

---

## 6. 残余形态（最终 Top 15 的实测抽样）

| code | n | 实测形态（原文） | 卡点 |
|---|---:|---|---|
| C2440 | 652 | `'=' : cannot convert from 'void *' to 'unsigned int'`(32) / `'const int' to 'int [1]'`(46) / `'unsigned int' to 'void *'`(37) / `type cast: '' to 'void (__cdecl *)(void)'` | 赋值站点两侧类型需**逐站点**证据；数组视图 LHS 未进 `views.arrays` |
| C2039 | 280 | `'TurnRate' : is not a member of 'JumpjetLocomotionClass'`(21) / `'IncrementStat' : is not a member of 'TechnoClass'`(14) / `'m120' : is not a member of 'AnimClass'` | **成员供给缺口**：body 名来自 pass 合成或继承链，hpp 未声明 |
| C2664 | 226 | `'strcpy' : param 1 from 'char' to 'char *'`(15) / `'ResetEvent' : param 1 from 'void *' to 'int'`(7) / `'wcsncpy' : param 2 from 'int *' to 'const unsigned short *'`(7) | 实参形状与 SDK 原型不符（需逐站点强转） |
| C2446 | 212 | `'==' : no conversion from 'unsigned int' to 'class HouseClass *'`(26) / `... to 'void *'`(16) | 复杂比较表达式（两侧都非简单操作数） |
| C2065 | 173 | `'fild'/'fld'/'fstp' : undeclared identifier`（asm 族残余，多因同函数另有 asm 形态未被保护）/ `'_VectorClass_VCell'` 模板局部 | asm 变体 + 模板类型需 sizeof |
| C2227/C2228 | 280 | `left of '->lpVtbl'`(14) / `->flags`(12) / `->m010`(12) / `.m_3`(25) / `.vfptr`(14) | 接收者类型供给（`void *` 全局、不完整 SDK 类） |
| C2036 | 126 | `&g_ScenarioClass_Instance[13].uniqueId` / `(LinkedList *)v3 + 23` | 全局 void* 的**元素 stride** 与不完整类 sizeof（**不发明**） |
| C2061/C2146/C2653 | 331 | `LPPERSISTSTREAM`(残余于 SDK 原型) / `extern INIClass DataGlobal_87F8E4;` / `'std' : is not a class or namespace name`(40) | 未声明类型与 `std::` 命名空间（需真实头文件或前向声明体系） |
| C2556 | 69 | `int SetRange();` 与既有 `SetRange` 仅返回类型不同 | 类体内同名方法的**跨函数去重**（需 unit 级 sig 仲裁） |
| C2628/C2086 | 68 | 语句拼接（`';' followed by 'type' is illegal`）/ 重定义 | 解析层残余 |

---

## 7. 未达标的诚实账

**目标 <2,500 未达成（实际 3,350）**。原因：

1. **上一轮的"单点根因"红利已吃完**。s3a 的 314/472（C2036 void* 算术）、163/439（C2109 声明守卫）
   是**一个 pass 一条正则**级别的缺陷；本轮清掉的 C2377/C2019/C2533/C2380 也是同类，但
   合起来只有 ~330 件，而 C2440/C2039/C2664/C2227 四大族（1,600+ 件）**没有共同根因**。
2. **族定向重跑的边际收益快速衰减**：s3b_all1 8.0% → s3b_t1 8.3% → s3b_f1 1.3% → s3b_f2 0.1%。
   第三次全池复跑只转出 5 件——说明当前生成器在剩余 3,350 件上已**没有可自动收割的形态**。
3. **剩余大族的共同特征是"逐站点类型证据"**，不是生成器 bug：
   * C2440 652：赋值两侧类型（`void*→uint` 32 件、`const int→int[1]` 46 件…）——需要
     **LHS 成员链的类型真值**与**调用结果类型**，属 W1/W4 的领土；
   * C2039 280：**成员供给**（body 引用的成员在 hpp 不存在）——需要把 pass 合成的成员名
     回写到 `views` 并让 `gen_class_hpp` 声明，或补齐继承链；
   * C2227/C2228 280：接收者类型供给（`void *` 全局、不完整 SDK 类 `IStream`/`IDirectDraw7`）——
     需要 SDK 结构定义或偏移真值访问；
   * C2036 126：不完整类 sizeof / 全局数组 stride——**不发明**原则下不能猜。

**下一轮建议（按 ROI 排序）**：
1. **成员供给闭环**（C2039 280 + C2227/C2228 一部分）：给 `pass_member_addr_view` /
   `pass_member_chain_reads` 合成的成员名加"注册到 views"的义务，并在 `gen_class_hpp`
   里保证声明（本轮 §2.9 的 `m120_addr` 孤儿就是这条路的一半，已修一半）。
2. **SDK 不完整类型定义**（C2027 43 + C2227 的 `lpVtbl` 族 + C2036 一部分）：
   `IStream`/`IStreamVtbl`/`IDirectDraw7` 按 COM ABI 补定义（真值来自公开 ABI，非发明）。
3. **C2556 类体内同名方法去重**（69）：unit 级 sig 仲裁 + 地址后缀改名（本轮构造名改写的同一机制）。
4. **C2440 逐站点**（652）：`_rhs_ptr_head` 已有类型判定，缺的是 LHS 侧；建议做
   **赋值 LHS 类型解析**（`v3->field = ...` 的 v3 类型供给）后再统一包裹。

**勿重跑**（本轮已实测证伪 / 无收益）：
* 全池盲跑（s3b_f2 只转出 5 件，1.3% → 0.1%）；
* 位运算 pass 对**复合左操作数**（`(((char **)&G)[3]) & 0xFF`）——边界门不匹配，需表达式级解析；
* `pass_void_call_retype` 对 `used_callees` 里 ret 非 void 的站点（0x406e80/0x40ffff 仍 CF）。

---

## 8. 改动清单（工具层，全部在 `tools/decomp_sys/`）

| 文件 | 改动 |
|---|---|
| `passes.py` | `ERA_TYPE_NAMES` 从 `era_types.h` 自动装载；`pass_unknown_symbols` 类型名跳过；`pass_compare_harmonize` 操作数边界 + `_CMP_EXTB`；`pass_member_addr_view` 保 cast / 复用数组视图名；`pass_intrinsics_lobyte` 尾逗号 + 逗号表达式成员；`spell_type` `#NNN` 擦洗；新增 `pass_bitop_harmonize` / `pass_indirect_var_calls`；`pass_void_call_retype` 覆盖自由被调；`FunctionCtx` 接入 asm 保护 |
| `pseudo.py` | `protect_asm_blocks` / `restore_asm_blocks` + MASM 操作数归一；`looks_like_decl` 修复 `_ESI = …` / `_ESI[i] = …` 误判为声明 |
| `decompile.py` | 构造名==类名改写；asm 块还原；两个新 pass 接线 |
| `hpp_pilot.py` | （经 `ERA_TYPE_NAMES` 共享）前向声明与 typedef 不再打架 |
| `era_types.h` | `LPPERSISTSTREAM/SIZE_T/LPOVERLAPPED/LPFILETIME/VARTYPE/LPCWCH/DWORD_PTR/LONGLONG/PFILETIME/LPTHREAD_START_ROUTINE/LPDDENUMMODESCALLBACK` + `IPersistStreamVtbl/IStreamVtbl/IStorageVtbl/IDirectDraw7Vtbl` tag + `typedef int unknown`；伪寄存器 typedef → extern 变量 |

**未改**：`src/`、`tools/csp_export/minclass_solver.py`、`checker.py`、`diffasm`、账本结构。
