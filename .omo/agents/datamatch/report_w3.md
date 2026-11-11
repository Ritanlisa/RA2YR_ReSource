# W3 报告：.data 全局段对齐（data-first 战略收官段）

> 任务：`.data` 精确盘点 + vptr 实例复现 + CRT 初始化表小实验定规则。
> 参考二进制：`D:\RA2MD\gamemd.exe`（4,813,072 B，link 6.00.8447，/FIXED，FileAlignment=0x1000）。
> 工具链：`.vc6-8447`（CL 12.00.8447 / LINK 6.00.8447 / libcmt，与原版指纹一致）。
> 工作产物：`tools/data_match/w3/`；日期：2026-11-11。

---

## 0. 执行摘要

| 目标 | 结果 | 数字 |
|---|---|---|
| .data 精确盘点（逐 dword 分类账） | **达成** | 全虚拟区 **892,665 dwords / 3,570,660 B** 全覆盖，14 类零遗漏；file-backed 110,592 dwords + zero-tail 782,073 dwords |
| vptr 实例复现 | **达成（机制+身份+位置规则）** | 176 个 singleton：静态镜像 16B 全零；**341 条运行期 `mov [global], offset ??_7` 安装点全部落在零初始化区**；16 样本 29 条安装全部 capstone 逐条验证 |
| CRT 初始化表规则 | **达成（小实验定规则）** | `__xc_a..__xc_z` = 1 前导 NULL + **3,944 项 ctor**（全部唯一、**严格升序 3943/3943**、0x403CE0..0x7BC950）；表序 = TU 内声明序 / 跨 obj 链接序；表固定位于 .data 首 |
| 阶段边界如实标注 | **达成** | 对象在 .bss 的具体位置依赖原始 obj 链接序（未知）；但位置规则已实证（对齐降序→sizeof 降序→声明序），且 .CRT 表严格升序=与 .text 同序，提供 obj 序反解通道 |

**一句话结论**：`.data` 的"内容"已全部归因——**静态镜像里没有任何类实例 vptr**（990 个 vtable 集命中 = 988 个 RTTI type_info 描述符的静态 vfptr + 2 个数值表巧合）；176 个全局类实例全部位于零初始化区，vptr 由 341 条运行期 `mov [global], offset ??_7...` 安装。
`.data` 首 0x3DA4 字节是 `__xc_a..__xc_z` 静态构造器表（3,944 项，严格升序），紧接 C 初始化表与终止器组；era 工具链的 3 组对照实验完整复现了这些表的**位置、空哨兵、排序规则与内容构成**。
剩余缺口全部属于"全链接阶段"：**obj 链接序未知**（决定 .bss 对象位置与 .CRT 表顺序）、指针承载数据（199 rdata + 647 data 指针）需要符号级组装、数值表语义未鉴定（但字节可复现）。

---

## 1. 方法与地面事实

### 1.1 PE 段事实（`dumpbin /headers` 实测）

| 段 | RVA | VirtualSize | SizeOfRawData | File ptr |
|---|---|---|---|---|
| .text | 0x001000 | 0x3DF38D | 0x3E0000 | 0x001000 |
| .rdata | 0x3E1000 | 0x30074 | 0x31000 | 0x3E1000 |
| **.data** | **0x412000** | **0x367BE4** | **0x6C000** | **0x412000** |
| .rsrc | 0x77A000 | 0x18128 | 0x19000 | 0x47E000 |

- .data VA 范围 = **0x812000..0xB79BE4**（892,665 dwords / 3,570,660 B）。
- **file-backed 区** = 0x812000..**0x87E000**（0x6C000 B = 442,368 B = 110,592 dwords）；0x87E000 之后为加载器零填充的 **zero tail**（.bss 合并区）3,128,292 B = 782,073 dwords。
  （注：`0x412000 + 0x6C000 = 0x47E000` → VA **0x87E000**；w3 首轮曾误写 0x878000，本报告与工具均以 0x87E000 为准。）
- .data 最后一个非零字节 = VA 0x87DD87（在 file-backed 区内）。

### 1.2 盘点工具（`tools/data_match/w3/scan_data.py`）

对 .data 全虚拟区逐 dword 归类，优先级链（每个 dword 恰好一个标签）：

1. `crt_cpp_init_table` / `crt_c_init_table` / `crt_term_group` — 按 `__cinit` 反汇编确认的精确区间；
2. `rtti_type_info` — 静态 vfptr = 0x7F9594 的 type_info 对象（`[vfptr][0][name inline]`，按 name 长度确定对象尺寸）；
3. `string_data` / `widestring_data` — 字节级 ASCII ≥8 / UTF-16LE ≥4 字符游程叠加，并与 `global_init_types.json` 的 3,326 条 `char[N]` 锚交叉；
4. `numeric_table` — 未被上述覆盖的**单调升/降游程**（≥16 项，步长 ≤0x2000）；
5. `function_pointer_table` / `function_pointer_single` — 连续 ≥2 / 单个 .text 指针；
6. 其余按值域：`vtable_ref` / `rdata_pointer` / `data_pointer` / `rsrc_pointer` / `zero` / `small_integer` / `other_integer`。

关键防伪点：**先做单调数值游程再做指针识别**。原版 .data 中 0x8650BC..0x8750BC 的 16,384 项单调数值表有 ~6,900 个值恰好落在 .text 地址区间——若先做指针分类会把它误判成 6,900 个"函数指针"（本工具首轮扫描即出现该假阳性，已通过顺序修正并用"数值游程内 .text 值占比"复核：无任何数值游程 >50% 为 text 值）。

### 1.3 锚数据（只读消费）

- `anchors/rtti_vtable_class.json` + `anchors/vtable_slot_authority.json` → 1,214 个 vtable VA 及其类归属；
- `anchors/singleton_types.json` → 176 个已知全局实例；
- `anchors/global_init_types.json` → 3,326 条 `char[N]` 字符串全局 + 安装证据；
- `tools/class_layouts.json` → 部分 singleton 类型的 sizeof。

---

## 2. .data 分类账（dword 级）

### 2.1 总账

| 类别 | dwords | bytes | 占全虚拟 .data | 占 file-backed |
|---|---|---|---|---|
| crt_cpp_init_table | 3,946 | 15,784 | 0.44% | 3.57% |
| crt_c_init_table | 5 | 20 | 0.00% | 0.00% |
| crt_term_group | 9 | 36 | 0.00% | 0.01% |
| **rtti_type_info** | **11,171** | **44,684** | **1.25%** | **10.10%** |
| **string_data** | **34,646** | **138,584** | **3.88%** | **31.33%** |
| widestring_data | 712 | 2,848 | 0.08% | 0.64% |
| **numeric_table** | **25,555** | **102,220** | **2.86%** | **23.11%** |
| function_pointer_table | 83 | 332 | 0.01% | 0.08% |
| function_pointer_single | 358 | 1,432 | 0.04% | 0.32% |
| rdata_pointer | 199 | 796 | 0.02% | 0.18% |
| data_pointer | 647 | 2,588 | 0.07% | 0.59% |
| **zero** | **789,203** | **3,156,812** | **88.41%** | 7,130 dwords / 6.45% |
| small_integer | 4,542 | 18,168 | 0.51% | 4.11% |
| other_integer | 21,589 | 86,356 | 2.42% | 19.52% |

file-backed 区构成（110,592 dwords）：字符串 35,358（31.97%）+ 数字表 25,555（23.11%）+ 其它整数 21,589（19.52%）+ type_info 11,171（10.10%）+ 小整数 4,542（4.11%）+ CRT 表 3,960（3.58%）+ 文件内零 7,130（6.45%）+ 指针类 1,287（1.16%，= 83+358+199+647）。

### 2.2 区域图（16KB 粒度，file-backed）

| 区间 | 主导内容 |
|---|---|
| 0x812000–0x815DA4 | **C++ 静态构造器表 `__xc_a..__xc_z`**（0x3DA4 B；前导 NULL + 3,944 项） |
| 0x815DA4–0x815DE0 | XCZ 空哨兵 + C 初始化表 `__xi_a..__xi_z` + XP*/XT* 终止器组（0x3C B） |
| 0x815DE0–0x84E000 | **字符串 + RTTI type_info 混合区**（~230KB；每 16KB 页 string 6–15KB、type_info 1–8KB） |
| 0x84E000–0x8750BC | **数值表区**（浮点/整数表族 + 16,384 项 64KB 大表；夹少量字符串/其它） |
| 0x8750BC–0x87DD88 | 数值表尾部 + 混合数据/小整数/零，至最后一个非零字节 |
| 0x87E000–0xB79BE4 | **zero tail（.bss 合并区）**：加载器零填充，3,128,292 B |

### 2.3 RTTI type_info 描述符（原"990 vptr"之谜）

- **988 个 type_info 对象**，44,684 B，VA 0x815DE0..0x87DA10；对象布局 `[vfptr=0x7F9594][0][name inline]`，尺寸 = align4(8+strlen+1)。
- 名称前缀：`.?AV`（class）962 个、`.?AU`（struct）26 个。
- **原版 file-backed 区内值 ∈ vtable 集的 dword 共 990 个，精确分解**：
  - 988 = type_info 的静态 vfptr 0x7F9594（type_info 自身 vftable，类 `type_info`，`vtable_slot_authority` 可查）；
  - 2 = **数值表巧合**：0x874F20 值 0x7F31AC（`SlaveManagerClass` 次级 vtable）、0x874F6C 值 0x7F57C8（`?$DynamicVectorClass@PBVToolTip@@` vtable）——两者均位于 16,384 项数值表内部（下标 16,281 / 16,300），是数值恰好等于 vtable 地址，不是指针。
- **类实例 vptr 在静态镜像中的数量 = 0。** 与 `global_init_types.json` 的 `gdata-vptr` 结论一致（该通道的 990 命中全部是 type_info）。

### 2.4 字符串 / char[N] 全局

- ASCII 可打印游程 ≥8：**7,408 段 / 160,816 B**；UTF-16LE ≥4 字符：139 段 / 2,752 B。
- `global_init_types.json` 的 `char[N]` 全局锚：**3,326 条 / 50,206 B**；分类账标签命中 **3,313/3,326**（13 条例外均落在数值/二进制块内或跨标签边界，见 `w3_inventory.json` 的 `anchored_misses`）。
- 与 `ida_global_types.json` 的 `char[N]` 并集（去重）：**3,338 条 / 125,707 B**（额外 12 条为大缓冲 `char[N]`，单条最大数万字节）。
- 字符串是 file-backed 区最大单一构成（31.3%）。原版未启用 /GF（或该 TU 未入池）：字符串字面量以可写 `char[]` 形式直接落在 .data（w1 已证 .rdata 仅含 /GF 池化串；w3 的 era 实验同样观察到未加 /GF 时字面量落 .data）。

### 2.5 数值表

- 91 个单调游程 / 102,220 B。最大者：
  - **0x8650BC..0x8750BC：16,384 项 / 65,536 B**（恰好 64KB），值域 0x0..0x7FFDFF；步长分段：起始 ~512 → 中点前降至 ~362，中点后跳至 ~724 → 末端回落到 ~512（8,192 项处步长由 ~362 跳到 ~724）。语义未鉴定（不影响字节复现——整表按 `unsigned int[]` 逐值发射即可 100% 相等）。
  - 0x8613D8..0x8650B8：3,896 项浮点表（float 1.3698→1.5608，递增步长渐减）；
  - 0x850274 / 0x854274 / 0x858274 起的三组 ±0.77→±1.0 浮点表（各 ~900 项）等。

### 2.6 函数指针与指针类

- 连续 ≥2 的 .text 指针游程仅 **16 段 / 332 B**（最大 0x846840..0x8468C0 128B）；孤立 .text 指针 358 个。
- rdata 指针 199 个、data 指针 647 个、rsrc 指针 0 个。
- 说明：原版 .data **没有**大块函数指针分派表；大量"看似函数指针"的值来自 16K 数值表（见 §1.2 防伪）。少量真实函数指针表集中在 0x816xxx/0x825xxx/0x846xxx/0x87Bxxx。

---

## 3. vptr 实例复现

### 3.1 原版 singleton 实测

- `singleton_types.json` 176 条，**全部位于 zero tail（≥0x87E000）**；静态镜像 16 字节全零。
- 独立扫描 .text 的 `mov dword ptr [imm32], imm32`（`C7 05`）指令：**341 条安装点**，目标全局 **177 个**（= 176 singleton + `0x884D00` MouseClass，后者来自 `gdata-rt-install` 运行时重装证据），243 个不同 vtable。
- **原始字节扫描与 capstone 全 .text 线性反汇编（skipdata）结果逐条一致：341/341，双向 0 差异**（`probe_installs_capstone.py` / `installs_capstone.json`）。
- **341/341 安装目标全部 ≥0x87E000（zero tail）；0 个位于 file-backed 区。**
- 16 样本复验（`verify_singletons.py`，spread 采样）：29 条安装全部 capstone 逐条确认为 `mov dword ptr [global], offset vtable`；样本静态 16B 全部为零；**类身份 29/29 吻合 = 16 条自身 vtable + 13 条 RTTI 基类 vtable**（如 `DynamicVectorClass<T>` ← `VectorClass<T>`，经 `anchors/rtti_base_arrays.json` 的 `??_R2` 基类数组验证），0 条矛盾。

样本（节选，完整表见 `w3_singletons_verify.md`）：

| VA | name | type | 静态16B | 安装点 | 安装 vtable | capstone |
|---|---|---|---|---|---|---|
| 0x87F5D8 | dword_87F5D8 | ?$DynamicVectorClass@PAVBombClass@@ | 全零 | 0x40B563 | 0x7E17CC | ✓ |
| 0x887058 | dword_887058 | CCINIClass | 全零 | 0x40E241 | 0x7E1AF4 | ✓ |
| 0x87F778 | g_GameConfigManager | LogicClass | 全零 | 0x40CBAC | 0x7E18FC | ✓ |
| 0xA8ECE0 | g_CoordScatterManager | VersionClass | 全零 | 0x4E7DE0 | 0x7EA57C | ✓ |
| 0xB1D4A0 | dword_B1D4A0 | ?$DynamicVectorClass@PAVVoxClass@@ | 全零 | 0x75222D | 0x7F6904 | ✓ |

### 3.2 era 工具链复现实验（`tools/data_match/w3/exp/`）

> 关于"正确类类型"的口径：`src/` 下的重建头文件是 C++20（`override`/`enum class`/`noexcept` 等），VC6 CL 12.00 无法解析；按任务约束也不改动 `src/`。
> 因此实验用**结构等价的最小类**（虚析构 + 虚函数 + 成员 + 构造器）复现链接器/CRT 行为；**真实 singleton 的类身份则直接用二进制证据钉死**（安装点 vtable 归属，见 §3.1）。

最小类 A/B/C（虚析构 + 虚函数 + 成员，构造器写成员）：

| 实验 | 全局对象 | 静态 file 字节 | 运行期 vptr | 运行期成员 |
|---|---|---|---|---|
| exp1 | A g_a1,g_a2; B g_b; C g_c; Pod g_pod; int g_int | g_a1/g_a2/g_b/g_c **全零**；g_pod = `78 56 34 12 "hello" … double 3.5`；g_int = `0x0BADF00D` | a1/a2=0x4080D8, b=0x4080E0, c=0x4080E8（A/B/C vftable） | a1.i=0x11111111, a1.j=0x22222222, b.i=0x33333333, b.d=1.5, c.i=0x44444444 |
| exp6 | A ×6 | 全零 | 全部 A vftable | 全部 0x11111111 |

结论（与原版一致）：
1. **类全局对象的静态文件内容 = 全零**（vptr 与成员均不落盘）；
2. **POD 常量初值原样落盘**（`Pod g_pod = {0x12345678,"hello",3.5}` 逐字节出现在 .data；`int g_int = 0x0BADF00D` 同理）；
3. **vptr 由构造器在 CRT 初始化阶段安装**，运行期读到的值等于类的 vftable 地址。

### 3.3 对象位置规则（小实验实证，新增 E-BSS 规则）

| 实验 | 声明/链接 | 观察 |
|---|---|---|
| t1 | 三 TU：A(2 obj) / B / C，链接 a,b,c | .bss 顺序 = a1,a2,b,c（obj 链接序） |
| t2 | 同上，链接 c,b,a | .bss 顺序 = c,b,a1,a2；`__xc` 表序同步 = c,b,a1,a2 |
| t3 | main 在前 + a,b,c | .bss 顺序 = a1,a2,b,c（main 无对象，不参与） |
| exp1/t4 | 单 TU 内声明 a1,a2,b,c（B 含 double，sizeof 24；C 24；A 12） | .bss 顺序 = **b,c,a1,a2**（不是声明序）；`__xc` 表序仍 = 声明序 a1,a2,b,c |
| exp6/exp6c | 同类 6 个 / 六个同尺寸类按声明序 | .bss = a1..a6 / x1..x6（声明序） |
| exp_sz | 不同尺寸同类对齐：S(8)、L(84)、M(28)，声明 S,L,M | .bss = **L,M,S**（sizeof 降序） |
| exp_align | Q(sizeof 20, align 4) 声明在前，P(sizeof 16, **align 8**) 在后 | .bss = **P,Q**（对齐降序优先于尺寸） |

**规则 E-BSS（file-backed 同名段内 .bss 对象布局）**：
- **跨 obj**：obj 链接序（与 w2 的 R-L2 一致）。
- **obj 内**：按 **(对齐降序) → (sizeof 降序) → (声明序升序)** 排列。
- 对照：`__xc_a` 构造器表顺序 = **obj 链接序 → TU 内声明序**（与 .bss 布局顺序无关，见 §4.3）。

### 3.4 结论与边界

- 身份与内容：**已对齐**——176 个全局类实例的类身份（vtable 归属）、静态内容（全零）、vptr 安装点（341 条指令）均有二进制实证。
- 位置：**规则已明**，但需要"原始 obj 链接序 + 每个 TU 的声明清单"才能落地址；这属于全链接阶段（见 §6）。
- 与任务提示一致：`.data` 静态初值 = 编译期零/常数值；vptr 运行期装。

---

## 4. CRT 初始化表

### 4.1 原版表结构（`__cinit@0x7CBDAF` 反汇编）

```
0x7CBDAF  __cinit:
  mov eax, [0x87BEB8]; test eax,eax; je +2; call eax     ; 可选预初始化钩子
  push 0x815DBC; push 0x815DA8; call __initterm          ; C   表 [0x815DA8,0x815DBC)
  push 0x815DA4; push 0x812000; call __initterm          ; C++ 表 [0x812000,0x815DA4)
  add esp,0x10; ret
```

- **C++ 表 `__xc_a..__xc_z` = [0x812000, 0x815DA4)**：0x812000 = NULL（XCA 哨兵）；0x812004..0x815DA0 = **3,944 个构造器指针**（全部唯一、**严格升序：3,943/3,943 对**；范围 0x403CE0..0x7BC950）；0x815DA4 = NULL（XCZ 哨兵）。
- **C 表 `__xi_a..__xi_z` = [0x815DA8, 0x815DBC)**：0x815DA8 = NULL；4 项 = `___onexitinit(0x7C979C)`、`___initstdio(0x7CB33D)`、`___initmbctable(0x7D386A)`、**`sub_7D9FAC`**（0x815DB8）。
  - `sub_7D9FAC` 实测：`push 0x7D9F66; call [0x7E1144(=SetUnhandledExceptionFilter)]; mov [0xB7856C],eax; ret`，且 0x7D9F66 首指令 `cmp dword [eax], 0xE06D7363`（MSVC C++ 异常码）→ **它就是 `__CxxSetUnhandledExceptionFilter` 安装器**（w3 的 try/catch 实验在 era 构建中得到同名符号 `?__CxxSetUnhandledExceptionFilter@@YAXXZ`，行为一致）。
- **终止器组 [0x815DBC,0x815DE0)**（XIZ 哨兵 + XP*/XT* 组）：
  `[0x815DBC]=0, [0x815DC0]=0, [0x815DC4]=___endstdio(0x7CB3E5), [0x815DC8]=__rmtmp(0x7D5791), [0x815DCC]=___termcon(0x7DE12F), [0x815DD0]=0, [0x815DD4]=0, [0x815DD8]=sub_7D9FBD(=__CxxRestoreUnhandledExceptionFilter 同型), [0x815DDC]=0`
  （组身由 `doexit` 的 `__initterm(__xt_a,__xt_z)` 调用，不属于 `__cinit`。）

### 4.2 era 小实验（3 个全局对象带构造器 → 链接 → dumpbin/map/字节）

| 实验 | C++ 表 `__xc`（含哨兵） | C 表 `__xi`（含哨兵） |
|---|---|---|
| exp1（4 对象，有 stdio） | 0, 0x401000, 0x401040, 0x4010E0, 0x401180；反汇编 thunk 目标 = **g_a1,g_a2,g_b,g_c（声明序）** | 0, 0x401370, 0x401D84, 0x405965 = `___onexitinit, ___initstdio, ___initmbctable` |
| t2（链接 c,b,a） | 0, 0x401000, 0x4010A0, 0x401140, 0x401180；目标 = **g_c,g_b,g_a1,g_a2（obj 链接序）** | 0, 0x401300, 0x401D14, 0x4058F5（同上 3 项，地址随布局移动） |
| t4（单 TU 全声明） | 0, 0x401000, 0x401040, 0x401080, 0x4010C0；目标 = g_a1,g_a2,g_b,g_c（声明序；同时 .bss 顺序为 b,c,a1,a2 → **两序独立**） | 0, 0x401300, 0x401D14, 0x4058F5 |
| gui（GUI，无 EH/stdio） | 0, 0x401000, 0x401040（g_a1,g_a2） | 0, 0x401180, 0x4035FF |
| gui_eh（GUI + try/catch） | 0, 0x401000, 0x401040 | 0, 0x4011F0, 0x404813, 0x4026A7 = `___onexitinit, ___initmbctable, __CxxSetUnhandledExceptionFilter` |

**规则（与原版一致）**：
1. **位置**：C++ 表固定位于 `.data` 起始（VM 0x812000），前导 NULL + 构造器项 + XCZ NULL；C 表紧随其后；XP*/XT* 组再紧随。
2. **顺序**：表序 = **obj 链接序**（跨 TU）→ **声明序**（TU 内）；**不是** .bss 布局序。地址严格升序，说明 LINK 未对 `$XCU` 项排序（顺序完全由 obj/声明序决定）。原版 3,944 项严格升序 = 与 .text 发射同序，可反推原始 obj 序。
3. **C 表内容 = 实际被链接拉入的 CRT 对象集合**：`___onexitinit` 恒有；`___initstdio`（使用了 stdio）、`___initmbctable`（使用了 locale/mbcs）、`__CxxSetUnhandledExceptionFilter`（使用了 C++ EH）按用法出现。原版 4 项 = 全拉入；exp1 3 项（无 EH）；gui_eh 3 项（无 stdio）。
4. **数值**：`__xc_a`/`__xc_z`/`__xi_a`/`__xi_z` 等符号由 crt0init.obj 定义；表区长度 = 项数×4；表项均为 .text 地址（原版 3,944/3,944 合法）。

### 4.3 阶段边界（CRT 表）

- **已对齐**：表位置、空哨兵、项数规则、表项内容属性、排序规则（obj 链接序 / 声明序）、C 表构成规则、终止器组构成。
- **未对齐**：原版 3,944 项的具体**顺序/内容**需要原始 obj 链接序与每个 TU 的声明清单（重建工程的 obj 序目前未知）。
- 反解通道：原版 .CRT 表严格升序 ⇒ 表项顺序 = .text 布局顺序 = obj 链接序。若把每个 ctor 映射回其 TU（构造器名/类归属/调用图），即可**反解原始 obj 链接序**，进而按 E-BSS 规则拼出 .bss 对象位置。这是下一步最有价值的杠杆。

---

## 5. 复现配方 / 工件

### 5.1 盘点

```bash
python tools/data_match/w3/scan_data.py            # -> w3_inventory.json / w3_runs.json / w3_summary.md
python tools/data_match/w3/verify_singletons.py    # -> w3_singletons_verify.{json,md}
python tools/data_match/w3/collect_exp.py          # -> w3_crt_experiments.json
```

### 5.2 era 实验构建（示例）

```bash
cd tools/data_match/w3/exp && build_exp.cmd
# VC=BIN, INCLUDE=..\..\..\.vc6-8447\INCLUDE, LIB=..\..\..\.vc6-8447\LIB
# CL /nologo /c /O2 *.cpp
# LINK /nologo /subsystem:console /machine:I386 /fixed /filealign:0x1000 /opt:ref /opt:icf /map:x.map /out:x.exe *.obj libcmt.lib
```

### 5.3 工件清单

| 文件 | 作用 |
|---|---|
| `tools/data_match/w3/scan_data.py` | .data 逐 dword 分类账生成器（确定性可重跑） |
| `tools/data_match/w3/w3_inventory.json` | 总账 + 明细（CRT/type_info/strings/numeric/fpt/singletons/installs/runs） |
| `tools/data_match/w3/w3_runs.json` | 合并后的同标签游程账（分类账的可读形态） |
| `tools/data_match/w3/w3_summary.md` | 总账摘要 |
| `tools/data_match/w3/verify_singletons.py` + `w3_singletons_verify.md` | 16 singleton 逐条复验（静态零 + capstone 安装验证 + 类名匹配） |
| `tools/data_match/w3/probe_installs.py` / `probe_installs_capstone.py` | 安装点扫描（原始 `C7 05` 字节 + capstone 全 .text 反汇编交叉验证，341/341 一致） |
| `tools/data_match/w3/probe_asc.py` / `probe_cinit.py` | 探索期探针（单调表/`__cinit` 反汇编） |
| `tools/data_match/w3/exp/` | era 工具链实验源、构建脚本、map 证据与 `exp_analyze.py`（.exe/.obj 为 gitignore 构建产物，用 `build_*.cmd` 重建） |
| `tools/data_match/w3/collect_exp.py` + `w3_crt_experiments.json` | 实验证据汇总（表项、.bss 顺序、静态字节、运行期输出） |

---

## 6. 阶段边界与下一步

### 6.1 已闭环

1. `.data` 全程逐 dword 归因（14 类，0 未分类）；file-backed 区构成量化到 0.01%。
2. **vptr 语义定案**：静态镜像类实例 vptr = 0；990 vtable 命中 = 988 type_info + 2 数值巧合；341 条运行期安装点全部落在 zero tail。
3. RTTI 描述符定位：988 个 type_info 对象、布局、尺寸、名称前缀全部实测。
4. `__xc_a..__xc_z` 表：位置/项数/空哨兵/严格升序/表序规则（obj 链接序→声明序）全部实证；C 表 4 项与终止器组语义定名。
5. 对象布局新规则 E-BSS：跨 obj = 链接序；obj 内 = 对齐降序→sizeof 降序→声明序。

### 6.2 未闭环（全链接阶段，如实标注）

| 缺口 | 原因 | 需要的输入 |
|---|---|---|
| .bss 对象具体地址（3,128,292 B 的分布） | 原始 **obj 链接序**未知 | 原始 obj 序（可由 §4.3 反解通道获得）/ 每个 TU 的全局声明清单 |
| .CRT 表 3,944 项的具体顺序 | 同上 | ctor→TU 映射 + obj 序 |
| 199 rdata 指针 + 647 data 指针 + 1,287 指针类 | 指针承载结构，需符号级组装 | 符号表/重定位级重建 |
| 数值表语义 | 未鉴定（不影响字节复现） | 游戏逻辑交叉（非本战略必需） |
| 字符串精确顺序 | 依赖每个 TU 的字符串发射序 | TU 声明序 + 编译选项（/GF 状态） |

### 6.3 下一步杠杆（按收益排序）

1. **obj 链接序反解**：对 3,944 个 `__xc` 表项逐个定位构造器函数 → 类/TU；升序表即 .text 布局序，可作为原始 obj 序的直接证据链；配合 E-BSS 规则即可开始拼 .bss 位置。
2. **指针承载表的符号化组装**：199+647 个指针中，相当部分是 RTTI COL/typename 指针与函数指针表；在代码/类重建收敛后随符号自然再生。
3. **字符串波次**：按 TU 重建顺序 + 未启用 /GF 的发射规则，复现 file-backed 区 31.3% 的字符串内容（3,326 个 char[N] 锚已就绪）。
4. **数值表整表发射**：16K 大表等 91 个单调表可直接按 `unsigned int[]` / `float[]` 整表发射字节级复现（w2 已证该发射器 100% 一致）。

---

## 附录 A：关键反汇编证据

**`__cinit@0x7CBDAF`**（capstone 逐条）：

```
7cbdb8  call eax                     ; [0x87BEB8] 可选钩子
7cbdba  push 0x815DBC                ; __xi_z
7cbdbd  push 0x815DA8                ; __xi_a
7cbdc4  call 0x7CBED3                ; __initterm
7cbdc9  push 0x815DA4                ; __xc_z
7cbdce  push 0x812000                ; __xc_a
7cbdd3  call 0x7CBED3                ; __initterm
7cbdd8  add esp, 0x10
7cbddb  ret
```

**安装点样例（原始）**：

```
0x40CBAC: mov dword ptr [0x87F778], 0x7E18FC      ; g_GameConfigManager = LogicClass vftable
0x40D1B2: mov dword ptr [0x87F7E8], 0x7E1964      ; MapClass_Instance  = MouseClass vftable
0x4C3C2D: mov dword ptr [0x8A3770], 0x7E86DC      ; dword_8A3770       = DynamicVectorClass<EgoClass> vftable
```

**type_info 对象样例**：

```
0x815DE0: 94 95 7F 00 | 00 00 00 00 | 2E 3F 41 56 46 69 6C 65 43 6C 61 73 73 40 40 00   ; vfptr,0,".?AVFileClass@@"
0x815DF8: 94 95 7F 00 | 00 00 00 00 | 2E 3F 41 56 52 61 77 46 69 6C 65 43 6C 61 73 73 40 40 00
```

## 附录 B：实验原始数据（节选）

- exp1 静态全局字节：`g_a1/g_a2/g_b/g_c` 全 0；`g_pod @0x409040 = 78 56 34 12 68 65 6c 6c 6f 00…00 00 0c 40`（double 3.5）。
- exp1 运行期输出：
  `runtime vptr: a1=004080D8 a2=004080D8 b=004080E0 c=004080E8`
  `runtime members: a1.i=11111111 a1.j=22222222 b.i=33333333 b.d=1.500000 c.i=44444444`
- exp1 `.CRT` 分组（map）：`.CRT$XCA(4) $XCU(0x10) $XCZ(4) $XIA(4) $XIC(0xC) $XIZ(4) $XPA(4) $XPX(4) $XPZ(4) $XTA(4) $XTZ(4)`，全部并入 .data 起始。
- exp_sz：`sizeof S=8 L=84 M=28`；声明 S,L,M → .bss `g_l@0x407D00, g_m@0x407D58, g_s@0x407D78`。
- exp_align：`sizeof P=16 Q=20`；声明 Q,P → .bss `g_p@0x409FE0, g_q@0x409FF0`（对齐 8 的 P 在前）。
