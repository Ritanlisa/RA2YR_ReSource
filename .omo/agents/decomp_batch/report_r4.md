# DECOMP R4 报告 — cdecl/cc 仲裁 · Abs16Cmp 前提证伪 · 中等函数批 400

日期：2026-11-10
范围：`tools/decomp_sys/`（**未触碰 `src/`、未触碰 `minclass_solver.py`**）

---

## 0. 结论速览

| 项 | 结果 |
|---|---|
| `_cdecl` 仲裁 | **已实现并实测生效**（4 件 ObjectClass/CRT 族转 free `__cdecl`），但 **人口不是 Abs16Cmp** |
| Abs16Cmp 0x5B2990 | **前提证伪**：orig 读 ECX（`mov cx,[ecx]`）+ `retn 8`，是**真 thiscall 成员**；ours 参数偏移与 orig 相同（`[esp+4]`/`[esp+8]`，非任务描述的 `[esp+8]` vs `[esp+4]`）。剩余差异 = **求值顺序 + 寄存器分配**（44 种写法探针，无一命中 42B） |
| 中等函数批 400 | **1 MATCH / 400（0.25%）**，14 MISMATCH，385 COMPILE_FAIL —— **未达 ≥45% 目标**，根因 = 编译墙（仅 15/400 编译通过） |
| 回归验证 | 17/17 历史 MATCH 函数重跑仍 MATCH（0 回归） |
| 新增工具修复 | 8 处（hpp 重叠视图 union / scalar span 用声明宽度 / 未知符号声明 / 局部与成员指针 retype / scope-shrink 嵌套使用守卫 / `*this` 绑定 / `__thiscall` 转换 / 选择器 v4） |

**一句话**：cc 修复方向正确但不是 Abs16Cmp 的问题；中等函数（150–500B）当前被编译墙挡住（3.75% 可编译），
即便编译通过 MATCH 率也只有 1/15 —— 下一轮应先做编译墙，而不是继续加函数。

---

## 1. 阶段 1：cc 仲裁

### 1.1 用户前提 vs 二进制证据（Abs16Cmp 0x5B2990）

任务描述：「orig 首参 `[esp+4]`（cdecl 自由函数），我们生成 `[esp+8]`（thiscall 多占 ECX 槽）」。
**实测反证**（full_export 反汇编 + 本轮重跑）：

```
orig  5b2990: mov eax, [esp+arg_0]     ; [esp+4]  —— 第一个 STACK 参数
      5b2994: mov cx, [ecx]           ; ← 读 ECX！thiscall 的 this
      5b2997: mov edx, [esp+arg_4]     ; [esp+8]  —— 第二个 STACK 参数
      ...
      5b29b7: retn 8                   ; 弹出 2×4 字节 = 2 个栈参数
ours  +0 mov ax, [ecx]                 ; 同样读 ECX（this->q000）
      +3 mov ecx, [esp+4]              ; p0 在 [esp+4] —— 与 orig 相同
      ...
      +13 ret 8                        ; 同样只弹 2 个参数
```

判定依据（3 条独立证据）：
1. **ECX 被读**（`mov cx,[ecx]`）→ 有 receiver → 不是 cdecl；
2. `retn 8` = 2×4 → 2 个栈参数，且该函数 registry 参数正好 2 个（`uint16_t*`, `int16_t*`）；
3. **我们当前的参数槽位就是 `[esp+4]/[esp+8]`**（如上），不存在「多占 ECX 槽」的偏移错误。

`first_diff` 是 `+0 mov eax,[esp+4]` vs `+0 mov ax,[ecx]` —— 即**首指令顺序**（orig 先取栈参，ours 先读 this），
分类器按 `[esp..]` 启发式把它标成 `cc_mismatch`，**该标签是误分类**（R3 已怀疑，本轮定案）。

### 1.2 Abs16Cmp 探针矩阵（44 种写法，全部不命中 42B）

| 变体族 | 例 | 尺寸 |
|---|---|---|
| R3 的 xor 展开（`(x^(x>>31))-(x>>31)`） | `v01_current` 等 16 种 | **56–61B** |
| CRT `abs()` 展开 + 各种语句顺序 | `w01_abs_short` … `w11`（11 种） | **44–49B** |
| `abs()` + if 形式 / 布尔局部 / 三元 | `x04_if_form`（40B）、`x06_bool_local`（40B） | **40B** |
| 三元 `x<0?-x:x` | `v14_ternary` | 44B |
| 局部短整型 / 交换比较侧 / 减法形式 | `v02/w05/x08` | 44–58B |

目标 42B 的精确形状（原版）：
```
mov eax,[esp+4] → mov cx,[ecx] → mov edx,[esp+8] → push esi → sub cx,[eax]
movsx eax,[edx] → cdq → mov esi,eax → movsx eax,cx → xor esi,edx → sub esi,edx
cdq → xor eax,edx → sub eax,edx → cmp esi,eax → pop esi → setge al → ret 8
```
关键差异：orig 用 `cdq`（值在 EAX 时的 `x>>31`）且把左操作数 abs 结果放进 **ESI**（需要 callee-saved），
即 **先算 `abs(*p1)` 再算 `abs(diff)`**；VC6 在我们写出的所有等价式里都选择先算差值的 abs 并落 ECX/EAX
（`sar` 替代 `cdq`、无需 ESI）。这不是一条 pass 能修的顺序问题；**探针结论：保持 NG，不再猜源码形状**。

补充事实（供下一轮参考）：`abs()` 展开把该族从 56B 拉到 **40–45B**（更接近 42B），
说明原文很可能用的是 CRT `abs()` 而不是手写 xor。**本轮未改 `_expand_abs`**（会影响已 MATCH 函数，需单独一轮带对拍）。

### 1.3 实现的 cdecl/自由函数仲裁（decompile.derive_signature）

判据（全部来自反汇编，不看 registry）：

```python
retn_bare   = 末尾是裸 retn（无 callee cleanup）
no_ecx      = 前 20 条指令不含 ecx/cx/cl/ch
stack_args  = 出现 [esp+arg_N] / [ebp+arg_N]（或 [esp+4+] 裸偏移）
⇒ cc = "__cdecl"，emit 为全局函数（无 this），参数改从 export proto 取（保留 this 位置的栈参）
```

**实测人口为 0（thiscall 族）**：全库 19,025 个 full_export 块中，
 registry=thiscall 且「无 ECX + 栈参 + 裸 retn」的函数 **0 个** —— 9,597 个 thiscall 函数**全部读 ECX**，
说明 registry 的 thiscall 归属在这批数据上与二进制一致。仲裁真正命中 4 件（registry cc=`unknown`，
类名 `ObjectClass` 但实为 CRT 函数）：

| addr | 名称 | before（R3 HEAD） | after |
|---|---|---|---|
| 0x7CEC87 | `__cftoe2` | `unsigned char * ObjectClass::__cftoe2(...)`（thiscall 成员，`ret 20`）| `unsigned char * __cdecl __cftoe2(...)`（free，`ret`）✓ |
| 0x7D29B2 | `___loctotime_t` | `int ObjectClass::___loctotime_t(...)`（thiscall）| `int __cdecl ___loctotime_t(...)` ✓ |
| 0x7D6EA7 | `_TranslateName` | `int ObjectClass::_TranslateName(...)` | `int __cdecl _TranslateName(...)` ✓ |
| 0x7CCB2E | `__expandtime` | `void ObjectClass::__expandtime(...)`（丢掉了 this 位置的栈参）| `void __cdecl __expandtime(ObjectClass * p0, …)`（5 参）✓ |

编译结果：4 件仍 COMPILE_FAIL，但**错误已不在 ABI**（`strcpy` 的 `unsigned char*` → `char*` C2664），
即 cc 层修复已完成，剩余是调用点类型问题（见 §4.6）。

---

## 2. 阶段 2：中等函数批 400

### 2.1 选择器 `batch_select4.py`

* size **150 ≤ s < 500**（实测 mean 236B, min 150, max 491）
* `≤4` 个内部 call（calls+tail-jmp），indirect ≤2
* 有非空 Hex-Rays 体；类方法优先；per-class cap 10
* **账本去重**：`status.json` ∪ `results.jsonl` 里已判定的地址一律排除（decided 命中 = 17）
* 硬过滤（结构性不可达族）：
  * 方法名/类名非合法标识符（`VtableStub::5CB6C0` 族）
  * 类名 `unknown`、模板实例名（`_ptr_`/`@`/数字）
  * **vtable 安装**（`mov [reg], offset ??_7...`，291 件）——reloc key 永远对不上 mangled vtable 符号
  * MI adjustor thunk（`sub [esp+arg_0],N; jmp`）
* 选中：400 件 / 222 个类；call 直方图 0:109 / 1:38 / 2:68 / 3:115 / 4:70

### 2.2 结果（400/400 有判定）

| verdict | n | 占比 |
|---|---|---|
| **MATCH** | **1** | **0.25%** |
| MISMATCH | 14 | 3.5% |
| COMPILE_FAIL | 385 | 96.25% |

唯一 MATCH：`0x602AE0 Dialog::IsSpecialTemplate`（161B）。

> **与目标（≥45%）的差距**：不是代码生成退步（17/17 历史 MATCH 回归全绿），而是 **150–500B 波段被编译墙挡住**：
> 400 件里只有 **15 件（3.75%）** 编译通过；编译通过者中 MATCH 1/15 = 6.7%、MISMATCH 14/15。
> 即「先解决编译，再谈对拍」——当前 pipeline 的通过面仍停留在 R3 的 <100B 波段。

### 2.3 编译墙分解（385 件，按首个错误码）

| 错误码 | n | 代表 | 含义 |
|---|---|---|---|
| C2440 | 52 | 0x6252F0 `this->m000 = v5`（void*→int） | 指针/整数类型不匹配（成员/局部/调用点） |
| C2143 | 52 | 0x50DF30 `missing ')' before 'this'` | 语法：未声明类型进 cast / pad 名 |
| C2228 | 40 | 0x44E3A0 `left of '.__pad_58' must have class/struct/union` | 成员结构体类型缺失 |
| C2065 | 38 | 0x5CD4D0 `g_GameFontObject` 未声明 | 未覆盖的全局（具名）+ 局部 |
| C2059 | 35 | 0x6D5F60 `syntax error '?'` | IDA 伪码残留（`?` 运算符/宏） |
| C2039 | 31 | 0x4DC810 `planningPathIdx is not a member of FootClass` | body/hpp 视图分歧（成员表缺项） |
| C2664 | 24 | 0x5CC970 `strcpy` 参数 | CRT 调用点类型（`unsigned char*`→`char*`） |
| C4234 | 22 | 0x7B22E0 hpp 里 `__thiscall` | callee 伪签名把 `__thiscall` 带进 hpp |
| C2109 | 15 | 0x48BF40 `subscript requires array or pointer` | 成员数组视图缺失 |
| C2227 | 12 | 0x624BE0 `->AnimClass_field_0x0` | 成员指针类型缺失 |
| C2146/C2036/C2061/其它 | ~100 | — | 长尾 |

前一版（未做本轮修复）同一批 400 的分解：C2440 60 / C2143 53 / C2065 44 / C2228 39 / C2039 30，
说明本轮 8 处修复把错误**逐条后移**但**未跨过编译门槛**（每次修完都停在下一族错误上 —— 见 §4 的修复列表与实测）。

### 2.4 MISMATCH 14 件（已编译，形态差异）

| addr | 函数 | orig → ours（first_diff） | 性质 |
|---|---|---|---|
| 0x50EB70 | DynamicVectorClass::InsertAt | `push esi` → `push ebx` | regalloc / 帧序 |
| 0x509B20 | HouseClass::Find | `sub esp,8` → `ret 4` | 签名/体量（ours 近乎空体） |
| 0x509C10 | HouseClass::FireStoredSW | `sub esp,8` → `ret 4` | 同上 |
| 0x433330 | BinkMovie::AdjustSurfaceFormat | `sub esp,0x30` → `sub esp,0x14` | 局部帧大小 |
| 0x7B1D10 | WinsockInterfaceClass::Cleanup | `push ebx` → `push ecx` | 帧序 |
| 0x7B5B80 | String::ToLowerCopy | `push edi` → `xor ebx,ebx` | 循环归约形状 |
| 0x5FED00 | OverlayTypeClass::GetRadarColor | `push ecx` → `push esi` | 帧序 |
| 0x62D830 | ParticleClass::vt_entry_1E8 | `jl +0x…` → `jl +0x…` | 分支布局 |
| 0x4664C0 | Particle::Init | `mov esi,[esp+0x14]` → `push edi` | 帧序 |
| 0x7C35C0 | AbstractClass::finalizeDestruction | `push esi` → `xor edx,edx` | 帧序 |
| 0x517440 | Color::ConvertToRGB | `sub esp,0x20` → `sub esp,0x14` | 局部帧大小 |
| 0x48B890 | PacketQueue::ReleaseEntry | `je` → `jne` | branch polarity（嵌套深度） |
| 0x5975E0 | SettingsClass::ClampValues | `jl` → `jge` | 同上 |
| 0x65A820 | ObjectClass::ProcessGroupInput | `mov ebx,[esp+0xc]` → `mov ebx,ecx` | 参数槽/帧序 |

结论：编译通过后，中等函数的主要差异是 **帧序/regalloc/branch layout**（13/14），不是单一 pass 可解；
和 R3 小函数以「单指令形状」为主完全不同。

---

## 3. PENDING 106 归因（R3 遗留账）

`status.json` 中 106 条 PENDING 全部有 results 记录：**104 COMPILE_FAIL + 1 DUP_SKIP + 1 NO_RESULT**。
抽样 10 件的错误族（全量与抽样一致）：

| 错误码 | n | 代表 | 根因 |
|---|---|---|---|
| C2065 | 25 | 0x407010 `Audio::GetEnabled`：`g_Audio_Enabled` | IDA 具名全局不在 registry globals（`signals.globals` 也无此名），extern 名与 orig DATA key 无法相等 |
| C2146 | 12 | 0x40A7A0 `Audio::GetDirectSound` | 语法（`LONG`/SDK 类型，本轮已补 LPSTR 等别名后可编译性提升） |
| C2440 | 12 | 0x477740 `VtableStub::Method_477740` | `return` void→int（tail-jmp 到 void callee） |
| C4234 | 10 | 0x40CC00 `VectorClass_ptr_IsometricTileClass` | 模板实例名进 `__thiscall` 关键字位 |
| C2664 | 9 | 0x4B4D90 `JumpjetLocomotionClass::GetField_0x78` | callee 参数类型（COM stub 族） |
| C2039 | 7 | 0x41C070 `AircraftClass::CheckDockState` | 成员表缺项（`frozenStill`） |
| C2059 | 7 | 0x5CB6C0 `VtableStub::5CB6C0` | 数字方法名（选择器已过滤） |
| C2061 | 5 | 0x7C89F2 `ImageList::DragEnter` | `HWND` 未声明（本轮已补 TYPE_MAP） |
| C2562 | 4 | 0x408600 `AudioNode::Release` | `void` 函数返回值 |
| C2660 | 4 | 0x4105E0 `IRTTITypeInfo::QueryInterface` | callee arity |
| C2143 | 4 | 0x425260 `AnimClass::SetField8` | 语法 |

即：PENDING 不是「无伪码/隔离失败」，而是 **编译失败的不同族**（无伪码只占 1 件 NO_RESULT 之外的 0 件）。

---

## 4. 工具改动（本轮，全部在 `tools/decomp_sys/`）

| # | 文件 | 内容 | 实测依据 |
|---|---|---|---|
| 1 | decompile.py | **cdecl/自由函数仲裁**（§1.3）；`ret=unknown` 改用 proto 全类型（R3 只处理 void） | 4 件 ObjectClass/CRT：ABI 由 thiscall 成员变为 free `__cdecl`；`ret=unknown` 不再输出字面类型名 `unknown`（C2146 族） |
| 2 | passes.py | **未知符号声明**：未限定 callee → `extern int f(...)`（字面 IDA 符号拼写，reloc key 与 signals 同名）；裸函数名（qsort 回调）→ `extern int __cdecl f(const void*, const void*)`；未解析 IDA 前缀全局 → 前缀类型 extern | 0x7AD930 `CChatEventSink::GrowBuffer` COMPILE_FAIL → **MISMATCH**（首次跨过编译） |
| 3 | passes.py | `*this`（IDA `int *this` 伪码的第 0 偏移读）→ `this->m000`（含 `->`/`[`/`+` 排除） | 0x52B170 `SortedArray::Find` 的 `qsort((void *)*this,…)` C2440 消失；首版正则误吃 `4 * this->X`，已修 |
| 4 | passes.py | 局部/成员**指针 retype**：`v = (T*)…` 的 dword 局部改 `T*`；`this->M = <ptr local>` 的成员改 `unsigned char *` 并给赋值加 cast | 0x6252F0 的 C2440 从成员侧后移到真正的下一处错误 |
| 5 | passes.py | **scope-shrink 嵌套使用守卫**：body 被单个 `if` 包住时，顶层 flow 里看不到变量使用 → 曾把活声明当 dead 丢掉（`Dialog::GrowBuffer` 的 `v2 undeclared`） | 修复后 `v2/v3/v4…` 声明保留 |
| 6 | passes.py | `__thiscall` → `__stdcall`（仅 cast 类型位置，VC6 拒绝 `__thiscall` 关键字 C4234）；`_CALL_KEYWORDS` 增补 `__thiscall/__stdcall/...`（曾生成 `extern int __thiscall(...);`） | 0x5CC970 的 C2143/C4234 消失 |
| 7 | hpp_pilot.py | ① 重叠成员视图 → **union**（0xC 的 dword 内嵌 0xD 的 byte，旧实现 `if off < cursor: continue` 直接丢窄视图 → C2039）；② 成员 span 用**声明宽度**而非 registry 字节跨度（13B pad 吞掉 +4/+8/+0xC）；③ `#include <stdlib.h>`；④ 常量 cast 类型的**前向声明**（`extra_fwd`） | 0x658DE0 `RadarHashVector::Construct`：m004/m008/field_0x0C 从「不存在」变为声明；`DSurface` 未声明导致的 C2143 消失（0x5CC970） |
| 8 | passes.py TYPE_MAP | 补全 Win32 别名：`LPSTR/LPCSTR/LPWSTR/LPBYTE/HRESULT/HWND/HDC/HICON/...`（R3 只补了 LONG/ULONG/DWORD…） | 0x7CEC87 单元的 `extern LPSTR lpMultiByteStr;` C2146 消失（此前毒化整个 ObjectClass 单元） |
| 9 | batch_select4.py | 新选择器（§2.1） | 见 §2.1 |

**回归验证**：R3 账本里 17 个历史 MATCH 函数重跑 = **17/17 MATCH**（0 回归）。
（另有 2 个账本标 OK 的函数在 R3 HEAD 上本来就 COMPILE_FAIL/MISMATCH —— 属账本陈旧，非本轮引入。）

---

## 5. 与任务的偏差（必须声明）

1. **Abs16Cmp 未转 MATCH**：任务前提（cdecl 偏移错误）被二进制证伪，实际是 thiscall 成员 + 求值顺序差异；
   44 种源码写法探针无一命中 42B。已如实保留 NG，未用猜测性 hack 伪造 MATCH。
2. **中等函数批未达 ≥45%**：实测 0.25%（1/400）。原因不是代码生成退步，而是 **3.75% 编译通过率**；
   仅在编译通过者中 MATCH 率 6.7%。**这是本轮最重要的事实**，下一轮必须先做编译墙。
3. 未改 `_expand_abs`（`abs()` 假设）：会波及已 MATCH 函数，需独立一轮带对拍。

---

## 6. 下一轮建议（按 ROI）

1. **编译墙专项**（最高优先）：按 §2.3 的 18 个错误码建工单，每族用 20 件样本验证「修复后是否跨过编译」
   （本轮教训：一次修一处，但每族修完只把错误后移，未跨门槛 —— 必须整族清完再计分）。
   首选三族：C2440（52）/ C2228（40）/ C2039（31）—— 全部指向 **成员类型/结构体类型供给**（class_db 的 struct 定义进 hpp）。
2. **帧序/regalloc 研究**：14 件已编译 MISMATCH 里 13 件是帧序/寄存器分配/分支布局；用这 14 件做「写法 → 帧序」对照，
   不要从 400 件里盲选。
3. **波段渐进**：先做 **100–150B**（R3 已有 66% 于 <100B，100–150 是未测空档），再做 150–250，最后 250–500；
   直接跳到 150–500 的边际收益被编译墙吃掉。
4. `_expand_abs` → `abs()` 的 A/B（40–45B vs 56–61B，接近原版 42B）+ 现有 MATCH 回归集。

---

## 7. 产物与复现

```
# cc 探针（44 种写法）
python .omo/decomp_batch/r4_probe_abs/probe2.py
python .omo/decomp_batch/r4_probe_abs/probe3.py
python .omo/decomp_batch/r4_probe_abs/probe4.py

# cdecl 人口扫描（0 件 thiscall，4 件 unknown/CRT）
python .omo/agents/decomp_batch/scan_ecx.py

# Abs16Cmp / cdecl 四件 before/after
python tools/decomp_sys/batch_run.py 0x5b2990 0x7cec87 0x7d29b2 0x7d6ea7 0x7ccb2e \
       --out .omo/decomp_batch/r4_final_pilot --chunk 5 --no-ledger

# R4 批（400 件，20/part，每 part 一次 commit）
python tools/decomp_sys/batch_select4.py          # -> .omo/agents/decomp_batch/batch400_r4.json
python .omo/agents/decomp_batch/run_all_parts_r4.py 0 19 20
```

| 产物 | 路径 |
|---|---|
| 本报告 | `.omo/agents/decomp_batch/report_r4.md` |
| 选择结果 | `.omo/agents/decomp_batch/batch400_r4.json` |
| 逐 part 报告 | `.omo/decomp_batch/r4_400/p00..p19/part_00/part_report.json` |
| cc 探针 | `.omo/decomp_batch/r4_probe_abs/{probe2,probe3,probe4}.py` + `v*/w*/x*.cpp/.obj` |
| cdecl 扫描 | `.omo/agents/decomp_batch/scan_ecx.py` / `cdecl_candidates.json` |
| 账本 | `.omo/codegen_match/status.json`（随每个 part 提交） |
| 流水 | `.omo/agents/decomp_batch/results.jsonl`（追加式） |

**未触碰**：`src/` 全部、`tools/csp_export/minclass_solver.py`、`anchors/minclass_*.json`。
