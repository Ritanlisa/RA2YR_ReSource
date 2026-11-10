# DECOMP R3 恢复报告 — 审查 / 病理复验 / batch400

日期：2026-11-10  
范围：`tools/decomp_sys/`（**未触碰 `src/`、未触碰 `minclass_solver.py`**）

---

## 0. 结论速览

| 项 | 结果 |
|---|---|
| 上一 Agent 未提交改动 | **完整可用**，审查通过（466 行，5 文件） |
| 病理修复复验 | `ret_norm` **已修复**（Cell::IsEmpty）; `cc_mismatch`/`codegen_shape` 未修复（如实报告） |
| batch400 | **265 / 400 MATCH = 66.2%**（目标 ≥55% ✅）；decided 口径 **89.8%** |
| 分块 | 20 part × 20 fn，**每个 part 一次独立 commit**（共 45 次 checkpoint 提交） |
| 新增修复 | 4 处（见 §1.3），均在工具层，均有实测收益/零回退 |

---

## 1. 步骤 1：审查上一 Agent 的未提交改动

`git diff tools/decomp_sys/` = **5 文件 +466/−12**，另有新增未跟踪 `batch_select3.py`。

### 1.1 decompile.py（+124）

* **`_disasm_ret_width()`**：按 `retn` 切分指令 run，取每条返回路径**最后一次**写 `al/ah`、`ax`、`eax` 的宽度，跨路径取 min → 1/2/4/None。`derive_signature` 只用它收窄 int 族返回类型（`int→unsigned char/short`）。
  → 这是 `ret_norm`（bool/char 返回归一化 al vs eax）的根因修复，属于**正确设计**。
* **`__stdcall` 仲裁**：`thiscall` 下 `retn N > 4*nparams` 物理上不可能（this 走 ECX），仲裁为 `__stdcall member`（this 变成第 1 个栈参数）并按 `retn` 补/删参数。反方向：registry 已定 `__stdcall` 时按 `retn N = 4*(1+nparams)` 校正 arity。
  → 针对 `Game::Stub3` / `MissionStubReturnZero2` 族（round-2 已实测 2 件转 MATCH，ledger 可查）。
* **`pass_callees` 接入** `run_function`；`emit_cpp` 支持 `__stdcall` 修饰；`main()` 把 callee 伪签名并进 `by_cls`、把 extern 原型并进 hpp。

### 1.2 passes.py（+296）

* **`_expand_abs`**：`abs16/abs64/abs` 从三元展开改为**无分支代数式** `((x ^ (x>>31)) - (x>>31))`，与二进制里 `movsx/cdq/xor/sub` 的 Westwood 惯用法一致。
* **`pass_intrinsics_lobyte`**：byte 返回 + byte 值表达式 → `return expr;`；byte 返回 + **比较表达式** → `if (e) return 1; return 0;`（VC6 只有该形状会发出 `xor al,al / mov al,1`）。这是 `ret_norm` 的第二半修复。
* **函数级 disasm 宽度仲裁** `_disasm_this_widths/_disasm_min/max_width`：
  * 成员视图被类级 IG 合并收窄时，本函数若按 dword 读 → widen（ObjectClass 4B getter 族）；
  * 本函数若有 `byte ptr [ecx+off]` 写（无 IG 记录）→ narrow（`TActionClass+0x44` 族）。
* **`pass_callees`（+160，新 pass）**：qualified call site（`Owner::Method(args)`）→ 注册表签名 → 改写成 **receiver call** `((Owner *)(recv))->Method(rest)`；owner 用调用名的前缀（diffasm 比对的是 signals 名字，不是 registry receiver 类型）；arity 不符时信调用点；callee 声明通过 `used_callees` 注入 `by_cls` 由 hpp 声明（无自有函数的 owner 生成 stub class）；free/static callee 生成 `extern` 原型并把 `Qual::Name` 消毒成 `Qual__Name`。整体单调用体做 `tail_forward_ret_align`。

### 1.3 我补的 4 处（本轮新增，均有实测）

| # | 文件 | 内容 | 依据 / 收益 |
|---|---|---|---|
| 1 | decompile.py | registry `ret == unknown` 时采用 export proto 的 `void` | `PowerClass::Stub 0x63F7B0`：registry ret=`unknown→int`、proto=`void`，原实现发出 `int Stub(){...}` 触发 **C4716 must return a value**（编译失败）|
| 2 | passes.py | `tail_forward_ret_align` 中，无 `return` 的语句形式调用若**本函数 proto 为 void** 则 ret 取 void（不让占位 callee `int` 覆盖） | 同上：修完后 0x63F7B0 从 COMPILE_FAIL → MISMATCH（不再毒化单元）|
| 3 | hpp_pilot.py | `_is_prim` 只允许**裸标识符**做前向声明，并加入 `wchar_t` | 原实现把 `const void *`/`const wchar_t *` 参数生成 `class const void;` / `class const wchar_t;` → **C2628 / C2079**，一个坏 hpp 毒化整单元（p01/p02/p03/p08/p15 共 25 件 `$S` 族）|
| 4 | passes.py | `TYPE_MAP` 增加 Win32 别名（LONG/ULONG/DWORD/UINT/USHORT/BYTE/WORD/HANDLE/LPVOID/LPCVOID） | hpp 只 include `<string.h>`，`LONG __stdcall M()` 直接 **C2143**。实测把 p02/p03 的 5 件 COMPILE_FAIL 转为 MISMATCH（不产生假 MATCH，但让账诚实）|

### 1.4 batch_select3.py（新增，未跟踪）

400 件选择器：size 4..<200、`n_calls 0..2`、非空 Hex-Rays 体、类方法优先、per-class cap 15、账本恢复优先（PENDING→fresh→NG→OK）、保证 ≥80 个 non-leaf。
**审查缺陷（未改，如实记录）**：
1. **方法名不校验标识符**：选中 `OleUninitialize::0`、`GetCurrentThreadId::0` 等 6 件，生成的 `void __stdcall 0();` 必然 C2059 → 6 件固定 COMPILE_FAIL（占 1.5%）。
2. **`n_calls` 未进入排序主键**，池子按 size 升序填充 → 实际选中位数 6B，320/400 是 leaf。R3 想要的 non-leaf 覆盖只有 80 件（reserve 侧保证）。

### 1.5 其它被改动文件

`batch_run.py`（+26：callee 伪签名并入 by_cls / extern 原型并入 hpp / `__stdcall` 修饰）、`registry_ext.py`（+14：`function_by_name()` 索引，ICF 重名取首地址）、`hpp_pilot.py`（+18：`extra_externs`、`__stdcall`）。**审查结论：设计一致、无 TODO/空实现、与被提交的 round-2 负载兼容。**

---

## 2. 步骤 2：三个 pilot 病理复验（before/after）

| 函数 | round-2（before） | 本轮（after，最终代码） | 判定 |
|---|---|---|---|
| **0x486380 Cell::IsEmpty** | MISMATCH / `ret_norm`；20B vs 23B；`+14 xor al,al` vs `+14 xor eax,eax` | **MATCH**；20B == 20B；字节序列**逐字节相同**：`8b41383dffff0000740785c0740332c0c3b001c3` | ✅ 修复 |
| **0x5B2990 Math::Abs16Cmp** | MISMATCH / `cc_mismatch`；42B vs 56B；`+0 mov eax,[esp+4]` vs `+0 mov ax,[ecx]` | **仍 MISMATCH**；42B vs 56B；同一 first_diff | ❌ 未修复 |
| **0x5F6560 Math::DistSq2D** | MISMATCH / `codegen_shape`；62B vs 51B；`+0 sub esp,0xc` vs `+0 mov eax,[ecx]` | **仍 MISMATCH**；62B vs 51B；同一 first_diff | ❌ 未修复（预期内） |

`Cell::IsEmpty` 产出的 C++（即修复后的形状）：

```cpp
bool Cell::IsEmpty()
{
        int result = this->m038;
        if (result == 0xFFFF || result == 0)
        {
            return 1;
        }
        return 0;
}
```

### 2.1 未修复项根因（实证，非推测）

**0x5B2990 Math::Abs16Cmp** — 标签 `cc_mismatch` 是**误分类**。反汇编对照：

```
orig: mov eax,[esp+4]; mov cx,[ecx]; mov edx,[esp+8]; push esi;
      sub cx,[eax]; movsx eax,[edx]; cdq; mov esi,eax;
      movsx eax,cx; xor esi,edx; sub esi,edx; cdq; xor eax,edx; sub eax,edx;
      cmp esi,eax; pop esi; setge al; ret 8
ours: mov ax,[ecx]; mov ecx,[esp+4]; push esi; push edi;
      sub ax,[ecx]; ... sar ecx,0x1f ... (56B, 多 push/pop edi)
```

差异是**求值顺序 + 寄存器分配**（VC6 只在值位于 EAX 时把 `x>>31` 发成 `cdq`；本式令其落在 ESI 故用 `sar`）。已试点 6 种 C++ 写法（含 int/short 局部量、交换 `>=` 两侧、裸 int 公式）——**全部 56-59B，无 42B 匹配**（探针：`.omo/decomp_batch/r3_probe_abs/probe.py`）。结论：在不猜原始源码形态的前提下无法字节级复现，保持 NG。

**0x5F6560 Math::DistSq2D** — 真 `codegen_shape`：orig 是 `sub esp,0xc` 先行 + 一次 `call [eax+48h]` 后直接读返回指针；ours 把 `sub esp` 排到 `mov eax,[ecx]` 之后，且 51B（vs 62B）——虚调用/成员函数指针的寄存器与栈排布不同。属 VC6 调度差异，非一条 pass 可解，如实保留。

---

## 3. 步骤 3：batch400 结果

驱动：`python .omo/agents/decomp_batch/run_one_part.py <i>`（每次 20 件，独立 `--out p%02d`），
`run_all_parts.py` 在每个 part 后执行 `git add -f 账本+results+part_report + tools` 并 commit（**中断最多丢 1 个 part**）。
`part_report.json` → `.omo/decomp_batch/r3_400/p00..p19/part_00/`；聚合 = `.omo/agents/decomp_batch/batch400_aggregate.json`。

### 3.1 总账（400/400 有判定）

| verdict | n | 占比 |
|---|---|---|
| **MATCH** | **265** | **66.2%** |
| MISMATCH | 30 | 7.5% |
| COMPILE_FAIL | 104 | 26.0% |
| DUP_SKIP | 1 | 0.25% |

* **MATCH / decided = 89.8%**；**MATCH / total = 66.2%（目标 ≥55% 达成，+11.2pt）**。
* leaf（n_calls=0）：**246/320 = 76.9%**；non-leaf（n_calls=1）：**19/80 = 23.8%** —— R3 的 `pass_callees` 只把 non-leaf 拉到 24%，**callee 声明/ABI 仍是主瓶颈**（见 §3.3）。
* 选择器噪音 6 件（数字方法名）全部 COMPILE_FAIL；剔除后 394 件口径 = 67.3%。

### 3.2 逐 part

| part | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|---|---|---|---|---|---|---|---|---|---|
| MATCH | 15 | 4 | 0 | 0 | 7 | 19 | 19 | 14 | 1 | 19 |
| MISMATCH | 2 | 0 | 8 | 12 | 1 | 0 | 0 | 0 | 0 | 0 |
| CMP_FAIL | 3 | 16 | 12 | 8 | 12 | 1 | 1 | 6 | 19 | 0 |
| DUP | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |

| part | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|---|---|---|---|---|---|---|---|---|---|---|
| MATCH | 20 | 20 | 20 | 20 | 18 | 7 | 17 | 14 | 16 | 15 |
| MISMATCH | 0 | 0 | 0 | 0 | 0 | 0 | 2 | 2 | 1 | 2 |
| CMP_FAIL | 0 | 0 | 0 | 0 | 2 | 13 | 1 | 4 | 3 | 3 |

p10–p13 全 20/20；p01/p02/p08/p15 是重灾区（详见 §3.3）。

### 3.3 NG 病理分类

#### A. MISMATCH 30 件（病理标签）

| pathology | n | 代表与 first_diff（orig → ours） | 性质 |
|---|---|---|---|
| **frame_sched** | **18** | `0x41C650 TechnoClass::processGuardState` +0 `sub dword ptr [esp+4],4` → `mov eax,[esp+4]`；`0x4B4DA0 JumpjetLocomotionClass::GetField_0x7C` 同形 | **COM 接口 thunk 族**：stdcall 下 `this` 在栈上，原文是 `sub [esp+this],N; jmp Callee`（receiver 偏移），我们按 thiscall 成员调用生成 → 帧序不同。**可系统性修复**（见 §4-1）|
| codegen_shape | 5 | `0x63F7B0 PowerClass::Stub` `jmp 0x652cf0` → `call`；`0x7447A0 InfantryClass::ScanTarget_0` `jmp 0x4d4dc0` → `mov ecx,edx`；`0x4105F0 INoticeSource::Dispatch` `sub [esp+4],4` → `push ecx` | 单 `jmp` 尾跳 thunk：registry cc=fastcall/int 返回等占位签名覆盖了真实 ABI（同样归 §4-1）|
| const_fold | 4 | `0x408140 ThemeClass::GetValue` `[ecx+0x20]` → `[ecx+8]`；`0x70C5C0 ObjectClass::GetFogByte` `[ecx+0x271]` → `[ecx+0x274]` | registry 成员偏移错位（不是常量折叠）→ 归成员表 |
| signedness | 1 | `0x486670 CellClass::InBounds` `jl` → `jb` | 有符号/无符号比较，成员类型 signed 性 |
| ret_norm | 1 | `0x5176A0 InfantryClass::SetField6` `not al` → `not eax` | 残余 bool 归一化（非 al-only 路径，`_disasm_ret_width` 取 min 未覆盖全路径）|
| width_mismatch | 1 | `0x578AC0 MapClass::IncrementRedrawCounter` `inc byte [ecx+0x1158]` → `inc dword [ecx+0x1CE0]` | 成员偏移+宽度双错 |

#### B. COMPILE_FAIL 104 件（按首个错误族）

| 族 | n | 根因 | 可否机械修 |
|---|---|---|---|
| undeclared identifier | 25 | ① **字符串 getter 族**（`return aDefensetab;`，p08 12 件）：IDA 名字不在 registry globals，且 orig/obj 的 DATA 符号键无法相等 → 无论 extern 还是字面量都不匹配；② pass_globals 的"具名全局"分支按**名字**查 `reg['globals']`，但该表实际按**地址**键 → 分支恒不命中（潜在 bug，已记录未改） | ①不可（需符号名真值）；②可修但只解 C2065，不产 MATCH |
| cannot convert | 21 | `LONG`/`HANDLE` 等 SDK 类型 + `$S1` 模板渲染；已修 TYPE_MAP 后剩 21 件是 receiver/返回类型错（如 `void→int` 的 COM thunk、`VectorCursor*` vs `uint*`）| 部分（需逐族 ABI 建模）|
| syntax decl (C2143/2146) | 16 | `unknown` 类 + `LONG` 已修后残余：`HWND hwndLock p0`（registry 参数类型里带名字）、`VtableStub::72F510` 数字方法名 | 选择器侧过滤可根除 |
| C4234 nonstandard ext | 10 | 模板类名（`_VectorCursor_V_...`）被写成 `__thiscall` 关键字位置/类型位 | 模板类命名族，需专门规则 |
| not a member | 7 | `__pad_0` 不是成员（模板类的 layout 表缺失）| registry 类表缺口 |
| import-param types | 5 | `HWND/HIMAGELIST` 未 include windows.h 且参数声明非法 | 选择器侧过滤可根除 |
| call arity/type | 4 | `QueryInterface` arity 不符（C2660/C2664）| callee 签名缺口 |
| other | 16 | 杂项（`AbstractClass` 未声明、`wchar_t` 类型等）| — |

**单元毒化说明**：危险不是单件坏，而是**一个 hpp 坏 → 同 unit 全灭**。p01/p02/p08/p15 的大数字即此机制（p08 19 件里 12 件是同一 `aXxx` 字符串 getter 族）。修复 §1.3-3 后 `$S` 族不再毒化整单元（已实测：p02/p03 各 -4/-1 件 COMPILE_FAIL）。

### 3.4 有价值的事实

1. **R3 的 cc/ret 修复有效**：round-2 的两个已知 `cc_mismatch` 件（`0x5865E0 Game::Stub3`、`0x5D6310 ScenarioClass::MissionStubReturnZero2`）在本轮为 MATCH（ledger 记录 attempt 4 转 OK）；`0x6241C0 ObjectClass::Release` 也从 `codegen_shape` NG 转 OK。
2. **tiny-getter 池已近饱和**：320 leaf 中 246 MATCH（76.9%），剩余主要是成员偏移/宽度错位（`const_fold`/`width_mismatch`）。
3. **non-leaf 是明确的下一个金矿**：80 件里 39 件 COMPILE_FAIL + 22 件 MISMATCH，仅 19 MATCH。`pass_callees` 的机制（stub class + extern 原型）能编译，但**call ABI（stdcall + receiver-on-stack offset）**没有建模。

---

## 4. 下一步建议（按 ROI 排序）

1. **COM 接口 thunk 族 pass（预计 +15~20 MATCH，风险中）**
   识别：disasm 首指令 `sub dword ptr [esp+N], bias`，或全函数只有 1 条 `jmp`。
   生成：`RET __stdcall M(params) { return Owner__Method((char*)p0 - bias, rest...); }`（**free stdcall 调用**，不是成员调用），extern 用 callee 的真实原型。证据样本：`0x41C650/0x4B4DA0/0x4D0520/0x510A30/0x5139F0/0x4105F0`。
2. **`ret_type=unknown` → proto 全覆盖**（本轮只处理了 `void`；其余 `unknown` 可回退 proto 类型）。
3. **选择器硬过滤**：方法名必须 `^[A-Za-z_]\w*$`；类名 `unknown` / 参数类型含 `HWND/IMAGE` 的 import thunk 直接排除（可去掉 ~10 件固定失败，账更干净）。
4. **pass_globals 的具名全局分支**：`reg['globals']` 是 addr 键表，按名查恒 miss；应按 `globals_by_addr` 反查地址（修 C2065 族，但不产 MATCH，仅提升 decided 质量）。
5. **成员偏移错位族**（`const_fold` 4 件）应为 registry member_lookup 修复，而不是翻译层。

---

## 5. 产物与复现

```
# 审查
git diff fe092a551..HEAD -- tools/decomp_sys/

# pilot 复验
python tools/decomp_sys/batch_run.py 0x5b2990 0x486380 0x5f6560 \
       --out .omo/decomp_batch/r3_pilot_final --chunk 3

# batch400（分块 + 每 part 提交）
python .omo/agents/decomp_batch/run_all_parts.py 0 19 20

# 聚合
python .omo/agents/decomp_batch/final_stats.py
```

| 产物 | 路径 |
|---|---|
| 本报告 | `.omo/agents/decomp_batch/report_r3.md` |
| 聚合账 | `.omo/agents/decomp_batch/batch400_aggregate.json` |
| 逐 part 报告 | `.omo/decomp_batch/r3_400/p00..p19/part_00/part_report.json` |
| 逐函数对拍证据 | 同目录 `orig_XXXXXX.json` / `ours_XXXXXX.json` |
| 账本 | `.omo/codegen_match/status.json`（已随每个 part 提交） |
| 流水 | `.omo/agents/decomp_batch/results.jsonl`（追加式，已随每个 part 提交） |

**未触碰**：`src/` 全部、`tools/csp_export/minclass_solver.py`、`anchors/minclass_*.json`（工作区里的
minclass 改动与本轮无关，未纳入任何提交）。
