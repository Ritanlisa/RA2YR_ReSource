# DECOMP 扩产恢复报告 — round 2（2026-11-10）

**任务**：上次配额中断（账本 OK:3 / PENDING_ERACOMPAT:48 / NG:4，批处理误走
`run_pilot` 编译 `src/` 文件撞 enum class 墙）后的恢复。本轮走正确路径：
`tools/decomp_sys/decompile.py` 从 `decompile-results/full_export` 伪码生成 cpp，
**不 include 任何 `src/` 头**，单元编译只用 decomp_sys 自己生成的 hpp/最小壳。

## 0. 结论

| 指标 | 数值 |
|---|---|
| 批函数 | **100**（5 pilot 复核 + 95 新筛） |
| 每函数真实编译+对拍 | 100/100（VC6 SP3 `.vc6-8447` + era_shim，`/O2 /Gy /c`） |
| MATCH | **70** |
| MISMATCH | **21** |
| COMPILE_FAIL | **9** |
| MATCH 率（占总数） | **70.0%**（目标 ≥30%） |
| MATCH 率（占已判定） | 76.9% |
| 旧账本 PENDING_ERACOMPAT | 48 → **0**（含 9 件遗留二次清理） |
| 账本终态 | 182 条：OK 135 / NG 37 / PENDING 10 |

5 pilot 复核：**2 MATCH / 3 MISMATCH**（下节）。旧 `PENDING_ERACOMPAT` 9 件
遗留二次清理：5 MATCH / 3 MISMATCH / 1 COMPILE_FAIL（全部获得真实 verdict）。

## 1. 流程

每函数：

1. `pseudo.fetch` 取 full_export 块（伪码 + disasm + proto；空伪码 → NO_PSEUDO）
2. `decompile.run_function`：registry 签名（signals 权威）→ 参数改名 → 全局 →
   intrinsic/LOBYTE → vtable dispatch → 成员形态（rule 3/4）→ 作用域收缩 →
   era 规范化（IDA 宏零容忍）
3. 按 owning class 分组 emit cpp + 最小 hpp（`hpp_pilot.py`，不含 src/ 头）
4. VC6/SP3 `cl /nologo /O2 /Gy /c` 编译；单元失败则逐函数隔离重编
5. COFF 符号切函数 → `diffasm` 规范化字节对拍（jcc 目标/rel32 符号/DATA 符号掩码）
6. verdict + 病理分类；**每 20 函数一个 part**，part 结束立即
   `ledger.record` + `results.jsonl` 追加 + part_report 落盘（防配额中断）

批组成（`tools/decomp_sys/batch_select2.py`，输出
`.omo/agents/decomp_batch/batch100.json`）：

- 5 个指定 pilot 固定在前
- 95 个从 signals 筛：leaf（无 call / 无 ds: 引用）+ 4B ≤ size < 120B +
  full_export 非空伪码；类方法优先；ICF 折叠/thunk 族（COMStub/Thunk/vtN）排除；
  每类上限 10；**账本 recovery 优先**（PENDING → fresh → NG → OK）

## 2. 本轮工具修复（都在 decomp_sys / codegen_match，未触碰 src/）

| # | 文件 | 修复 | 效果 |
|---|---|---|---|
| 1 | `decompile.py` | registry 的 cc 拼写 `fastcall/stdcall/cdecl` 归一为 `__fastcall/...` | 之前 fastcall 成员按默认约定 emit，EDX 传参函数全 cc_mismatch |
| 2 | `passes.py` `_THISLIKE_CAST` | 容忍多词类型（`unsigned int` 等） | `pass_globals` 先改写 `_DWORD`→`unsigned int`，旧单词语法永不匹配；fastcall setter 族绑定 `this` |
| 3 | `passes.py` `pass_thislike_param` | 绑定 receiver 后同步 `params_spelled/param_names` | 修 C2511（hpp 声明与 def 漂移） |
| 4 | `passes.py` `pass_thislike_param` | 拒绝数组别名/非标量 registry 记录，回落 offset 名 `m%03X` | 修 `char[32]` 别名导致的重复成员名 C2086 / 数组赋值 |
| 5 | `diffasm.py` `undecorate` | 数据符号 `?Name@@3IA` → `Name` | extern_reloc 族从「符号键不同」推进到真实差异（signedness） |
| 6 | `extract.py` / `diffasm.py` | signals/functions.json/PE 进程级缓存 | 对拍阶段 13–26s/函数 → <0.2s/函数 |
| 7 | `batch_run.py` | chunk=20 分 part、part 级 ledger/JSONL/report、`--resume`、`--batch` | 配额中断可续；`--only` 不再劫持 ad-hoc 地址 |
| 8 | `batch_run.py` `classify_diff` | 新增 signedness / const_fold，修正 ret N / 宽度误判 | 病理标签可解释 |
| 9 | `batch_select2.py` | 新批选择器（leaf/<120B/伪码/类方法优先/recovery 优先） | 100 件可复现生成 |

修复 1–4 直接翻转了 5 个此前 `PENDING_ERACOMPAT` 的 fastcall setter
（0x406540/0x4065C0/0x4065D0/0x4065E0/0x406640）为 MATCH。

## 3. Pilot 复核（5）

| addr | name | verdict | pathology | 首差异 ORIG | 首差异 OURS |
|---|---|---|---|---|---|
| 0x5b2990 | Math::Abs16Cmp | MISMATCH | cc_mismatch | +0 mov eax, dword ptr [esp + 4] | +0 mov eax, dword ptr [esp + 8] |
| 0x5f6560 | Math::DistSq2D | MISMATCH | codegen_shape | +0 sub esp, 0xc | +0 mov eax, dword ptr [ecx] |
| 0x401940 | ObjectClass::GetMember06 | MATCH | - | - | - |
| 0x486380 | Cell::IsEmpty | MISMATCH | ret_norm | +14 xor al, al | +14 xor eax, eax |
| 0x4870d0 | Cell::IsPassableOffset | MATCH | - | - | - |

`0x401940` / `0x4870D0` 保持 MATCH。三个 MISMATCH 与旧账本一致，
根因分别见 §5.1（cc_mismatch）、§5.2（vt dispatch 帧）、§5.3（char 返回宽度）。

## 4. MATCH 清单（70）

| addr | emitted | 字节 | 备注 |
|---|---|---|---|
| 0x401940 | `RawFileClass::GetMember06` | 4B | 4B |
| 0x406310 | `ObjectClass::sub_406310` | 4B | 4B |
| 0x406540 | `AbstractTypeClass::sub_406540` | 4B | 4B |
| 0x4065c0 | `AbstractTypeClass::sub_4065C0` | 4B | 4B |
| 0x4065d0 | `AbstractTypeClass::sub_4065D0` | 4B | 4B |
| 0x4065e0 | `AbstractTypeClass::sub_4065E0` | 4B | 4B |
| 0x406640 | `AbstractTypeClass::sub_406640` | 4B | 4B |
| 0x4090f0 | `ObjectClass::sub_4090F0` | 4B | 4B |
| 0x410490 | `AbstractClass::computeDistanceSquared` | 4B | 4B |
| 0x411540 | `Surface::GetWidth` | 4B | 4B |
| 0x411550 | `Surface::GetHeight` | 4B | 4B |
| 0x411630 | `BSurface::GetBytesPerPixel` | 4B | 4B |
| 0x4389f0 | `BombClass::IsDeathBomb` | 4B | 4B |
| 0x4722d0 | `TechnoClass::processPowerDrain` | 4B | 4B |
| 0x4870d0 | `Cell::IsPassableOffset` | 17B | 17B |
| 0x4886a0 | `ShpButtonClass::GetStateFlag` | 4B | 4B |
| 0x48ba80 | `CellClass::GetBridgeIndex` | 4B | 4B |
| 0x49fb60 | `DynamicVectorClass::GetCount` | 4B | 4B |
| 0x4a3c00 | `CreditsScreen::Init` | 4B | 4B |
| 0x4ca120 | `ObjectClass::GetMember09` | 4B | 4B |
| 0x4ca160 | `AbstractClass::GetType` | 4B | 4B |
| 0x50e370 | `AbstractClass::checkPassability` | 4B | 4B |
| 0x55ab70 | `IUnknown::MissionStub2` | 5B | 5B |
| 0x55ab80 | `IUnknown::MissionStub3` | 5B | 5B |
| 0x55aba0 | `LocomotionClass::StubReturnFalse` | 5B | 5B |
| 0x55abc0 | `IUnknown::CheckState2` | 5B | 5B |
| 0x55abe0 | `LocomotionClass::MissionStub4` | 5B | 5B |
| 0x55abf0 | `LocomotionClass::MissionStub5` | 5B | 5B |
| 0x55ac60 | `JumpjetLocomotionClass::StubReturnTrue_3` | 5B | 5B |
| 0x55acd0 | `JumpjetLocomotionClass::StubReturnZero_11` | 5B | 5B |
| 0x55acf0 | `LocomotionClass::MissionStub10` | 5B | 5B |
| 0x55ad00 | `IUnknown::MissionStub11` | 5B | 5B |
| 0x5c02e0 | `VQMovieHandle::validatePathNode` | 4B | 4B |
| 0x5c0e50 | `MultiplayerGameMode::StubReturnFalse3` | 5B | 5B |
| 0x5c0ed0 | `MultiplayerGameMode::StubReturnFalse5` | 5B | 5B |
| 0x5c0f30 | `MultiplayerGameMode::initTeams` | 4B | 4B |
| 0x5d67a0 | `MultiplayerGameMode::MissionStubReturnZero4` | 5B | 5B |
| 0x5f3440 | `unknown::GetState` | 5B | 5B |
| 0x5f3530 | `NullModemClass::Send` | 5B | 5B |
| 0x5f43e0 | `ObjectClass::processStateUpdate` | 4B | 4B |
| 0x5f7610 | `ObjectTypeClass::GetType` | 5B | 5B |
| 0x5fbf70 | `ObjectClass::Map_Helper_5FBF70` | 4B | 4B |
| 0x6241d0 | `SimpleDialogControl@OwnerDraw::GetMember01` | 4B | 4B |
| 0x633a90 | `ObjectClass::sub_633A90` | 4B | 4B |
| 0x633aa0 | `ObjectClass::sub_633AA0` | 4B | 4B |
| 0x636dc0 | `FactoryClass::GetState` | 4B | 4B |
| 0x644940 | `ParticleSystemTypeClass::Stub` | 5B | 5B |
| 0x644950 | `ParticleSystemTypeClass::StubReturnFalse` | 5B | 5B |
| 0x645930 | `ParticleTypeClass::Stub` | 5B | 5B |
| 0x645940 | `ParticleTypeClass::StubReturnFalse` | 5B | 5B |
| 0x65b4b0 | `RadSiteClass::GetSpread` | 4B | 4B |
| 0x65c320 | `RAMFileClass::updateTeamState` | 5B | 5B |
| 0x65c330 | `RAMFileClass::processTeamOrder` | 4B | 4B |
| 0x65c540 | `RAMFileClass::resetTeamState` | 5B | 5B |
| 0x65c600 | `FileClass::Stub` | 5B | 5B |
| 0x65d690 | `ReferenceCounted::RetZero_eax_35` | 5B | 5B |
| 0x7099d0 | `TechnoClass::IsDirty` | 5B | 5B |
| 0x724aa0 | `ToolTipManager::addRef` | 5B | 5B |
| 0x724bd0 | `ToolTipManager::stubReturnFalse` | 5B | 5B |
| 0x74ab40 | `VoxelAnimClass::StubReturnFalse` | 5B | 5B |
| 0x74ba10 | `VoxelAnimTypeClass::Stub` | 5B | 5B |
| 0x74ba20 | `VoxelAnimTypeClass::StubReturnFalse` | 5B | 5B |
| 0x7ab340 | `CChatEventSink::StubReturnFalse` | 5B | 5B |
| 0x7ac4a0 | `CChatEventSink::DispatchStub_38` | 5B | 5B |
| 0x7ac4b0 | `CChatEventSink::DispatchStub_39` | 5B | 5B |
| 0x7ac4c0 | `CChatEventSink::DispatchStub_45` | 5B | 5B |
| 0x7ac4d0 | `CChatEventSink::DispatchStub_46` | 5B | 5B |
| 0x7ac4e0 | `CChatEventSink::DispatchStub_47` | 5B | 5B |
| 0x7ad610 | `_CComObject_VCDownloadEventSink_ATL::StubReturnFalse` | 5B | 5B |
| 0x7b1750 | `WinsockInterfaceClass::Send` | 5B | 5B |

构成：4–6B getter/stub 约 69 件，8–42B 叶逻辑 1 件（含17B `Cell::IsPassableOffset`、4B `AbstractClass::computeDistanceSquared`、5B `TechnoClass::IsDirty` 等）。

## 5. MISMATCH（21）与病理

| addr | emitted | pathology | ORIG 首差异 | OURS 首差异 | 尺寸 |
|---|---|---|---|---|---|
| 0x408ec0 | `ObjectClass::sub_408EC0` | codegen_shape | `+0 mov eax, dword ptr [ecx + 0x18]` | `+0 xor eax, eax` | 4B/6B |
| 0x408ed0 | `ObjectClass::sub_408ED0` | codegen_shape | `+0 mov eax, dword ptr [ecx + 0x14]` | `+0 xor eax, eax` | 4B/6B |
| 0x409330 | `ObjectClass::sub_409330` | codegen_shape | `+0 mov eax, dword ptr [ecx + 0x30]` | `+0 xor eax, eax` | 4B/6B |
| 0x486380 | `Cell::IsEmpty` | ret_norm | `+14 xor al, al` | `+14 xor eax, eax` | 20B/23B |
| 0x526950 | `ObjectClass::sub_526950` | codegen_shape | `+0 mov eax, dword ptr [ecx + 0x2c]` | `+0 xor eax, eax` | 4B/6B |
| 0x5865e0 | `unknown::Stub3` | codegen_shape | `+0 xor al, al` | `+0 push ecx` | 5B/11B |
| 0x5b2990 | `Math::Abs16Cmp` | cc_mismatch | `+0 mov eax, dword ptr [esp + 4]` | `+0 mov eax, dword ptr [esp + 8]` | 42B/46B |
| 0x5d6310 | `MultiplayerGameMode::MissionStubReturnZero2` | ret_norm | `+0 mov al, 1` | `+0 push ecx` | 5B/13B |
| 0x5d87e0 | `DynamicVector::distributeStartingUnits` | codegen_shape | `+0 mov edx, dword ptr [ecx + 0x10]` | `+0 push esi` | 38B/54B |
| 0x5f6560 | `Math::DistSq2D` | codegen_shape | `+0 sub esp, 0xc` | `+0 mov eax, dword ptr [ecx]` | 62B/51B |
| 0x6241c0 | `SimpleDialogControl@OwnerDraw::Release` | ret_norm | `+0 mov al, byte ptr [ecx + 8]` | `+0 push ecx` | 4B/15B |
| 0x633b70 | `ObjectClass::sub_633B70` | codegen_shape | `+0 mov eax, dword ptr [ecx + 0x70]` | `+0 xor eax, eax` | 4B/6B |
| 0x642ad0 | `Scenario::SetByte96` | width_mismatch | `+0 mov byte ptr [ecx + 0x60], 0` | `+0 mov eax, dword ptr [ecx + 0x60]` | 5B/9B |
| 0x726900 | `TActionClass::executeDetonateAction` | width_mismatch | `+0 mov byte ptr [ecx + 0x44], 0` | `+0 mov eax, dword ptr [ecx + 0x44]` | 5B/9B |
| 0x773b40 | `WebBrowser::StubReturnFalse` | cc_mismatch | `+2 ret 4` | `+2 ret ` | 5B/3B |
| 0x773b50 | `WebBrowser::SetSize` | cc_mismatch | `+2 ret 0xc` | `+2 ret ` | 5B/3B |
| 0x773b60 | `WebBrowser::CopyTo` | cc_mismatch | `+2 ret 4` | `+2 ret ` | 5B/3B |
| 0x773b70 | `WebBrowser::Commit` | cc_mismatch | `+2 ret 8` | `+2 ret ` | 5B/3B |
| 0x773b80 | `WebBrowser::Revert` | cc_mismatch | `+2 ret 8` | `+2 ret ` | 5B/3B |
| 0x773b90 | `WebBrowser::LockRegion` | cc_mismatch | `+2 ret 8` | `+2 ret ` | 5B/3B |
| 0x773bb0 | `WebBrowser::Stat` | cc_mismatch | `+2 ret 0x14` | `+2 ret ` | 5B/3B |

### 5.1 cc_mismatch（8）

- **WebBrowser COM 桩 7 件**（0x773B40/50/60/70/80/90/BB0）：ORIG `ret 4/8/0xC/0x14`
  （`__stdcall` 被调方清栈）vs OURS `ret`（默认 thiscall 约定）。根因：COM 接口的
  stdcall 约定与参数宽度未进 registry 签名；修法是给这些桩补 `__stdcall` + 参数表。
- **Math::Abs16Cmp**：两个栈参数的求值顺序不同（ORIG 先读 `[esp+4]`，OURS 先读
  `[esp+8]`）。伪码表达式为 `abs16(*a3) >= abs16(this_word - *a2)`，C++ 左先右后，
  与二进制右先左后相反；需交换比较两侧（`<=` 形式）。

### 5.2 codegen_shape（8）

- **ObjectClass 4B getter 5 件**（0x408EC0/0x408ED0/0x409330/0x526950/0x633B70）：
  ORIG `mov eax,[ecx+off]`（dword），OURS `xor eax,eax; mov al,[ecx+off]`。根因是
  IG 粒度的**类级最窄优先**合并：这些函数本身没有 IG 项（全宽度读不会被 IG 记录），
  但同类的另一个函数有 byte 证据，成员被收窄成 bool。修法方向 = IG 作用域改为
  **函数级**：本函数无 IG 证据时回退声明宽度（`gran_named_width`）。
- **Math::DistSq2D**：vt slot 18 的派发被 `pass_vt_dispatch` 生成为成员函数指针调用
  `(this->*...)(v6)`，ORIG 是 `mov eax,[ecx]; call [eax+0x48]` 的虚表直呼，
  且缺少 0xC 局部栈帧。修法方向 = dispatch 收敛为具名虚方法（hpp 声明 slot 原型）。
- **DynamicVector::distributeStartingUnits**：OURS 多出 `push esi` 帧（局部指针/循环
  形态与 ORIG 不同）。
- **Game::Stub3**：ORIG `xor al,al` vs OURS `push ecx`（int 返回类型套帧，见 5.3）。

### 5.3 ret_norm（3）

- **Cell::IsEmpty**：ORIG `xor al,al` / UOURS `xor eax,eax`。二进制所有返回路径只写
  AL（`xor al,al` / `mov al,1`），真实返回类型是 bool/char，但 registry 写 int。
- **SimpleDialogControl::Release / MissionStubReturnZero2**：ORIG 裸 `mov al,[ecx+8]`
  / `mov al,1`（4–5B），OURS 因 int 返回 + `LOBYTE(result)` 局部产生 `push ecx` 帧。
- 统一修法方向：从 disasm 的返回路径提取返回寄存器宽度（所有 ret 前只写 AL/AX）→
  签名 ret 收窄为 bool/short，再走 `LOBYTE` 自然路径。

### 5.4 width_mismatch（2）

- **Scenario::SetByte96 / TActionClass::executeDetonateAction**：伪码 `LOBYTE(this->F)=0`，
  ORIG 是单条 `mov byte ptr [ecx+off], 0`（5B），OURS 落入 bit-surgery fallback
  `F = (F & ~0xFF) | 0`（读-改-写 9B）。根因：IG 只记录**部分寄存器**访问，不记录
  立即数窄存储，`_member_narrow_state` 无证据 → fallback。修法方向：把本函数 disasm 的
  `byte/word ptr [ecx+off]` 访问作为函数级窄证据。

## 6. COMPILE_FAIL（9）

| addr | emitted | 分类 | 首条错误 |
|---|---|---|---|
| 0x5f9710 | `ObjectTypeClass::SetRTTI71` | C2106 assign to non-lvalue (member macro target) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_03\ObjectTypeClass_5f9710.cpp(7) : error C2106: '=' : left opera |
| 0x556620 | `LinkClass::GetWidth` | C2227 -> on non-class member (type misalignment) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_01\LinkClass.cpp(8) : error C2227: left of '->__pad_0' must poin |
| 0x556630 | `LinkClass::GetHeight` | C2227 -> on non-class member (type misalignment) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_01\LinkClass.cpp(8) : error C2227: left of '->__pad_0' must poin |
| 0x477740 | `Pipe::Method_477740` | C2440 return void->int (callee return type) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_01\Pipe.cpp(8) : error C2440: 'return' : cannot convert from 'vo |
| 0x5d6440 | `MultiplayerGameMode::MissionStubReturnZero` | C2440 return void->int (callee return type) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_03\MultiplayerGameMode_5d6440.cpp(7) : error C2440: 'return' : c |
| 0x7b9d80 | `WWMouseClass::checkVisible` | C2440 return void->int (callee return type) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_04\WWMouseClass.cpp(8) : error C2440: 'return' : cannot convert  |
| 0x4e1960 | `GadgetClass::MarkDirty` | C2562 void fn returns value | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_01\GadgetClass.cpp(10) : error C2562: 'MarkDirty' : 'void' funct |
| 0x40cc00 | `LogicClass::GetItem` | C4234 __thiscall reserved (casted fn-ptr expression) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_01\LogicClass.cpp(8) : error C4234: nonstandard extension used : |
| 0x41b910 | `AircraftClass::MissionStubReturnZero` | C4234 __thiscall reserved (casted fn-ptr expression) | D:\RA2YR_ReSource\.omo\decomp_batch\run4\part_01\AircraftClass.cpp(8) : error C4234: nonstandard extension use |

根因归纳：

- **C4234**（2）：`(int (__thiscall *)(Cls *))` 形式的函数指针强转出现在表达式里；
  VC6 只允许 `__thiscall` 出现在成员声明。修法 = 用成员函数指针 `(this->*...)` 或
  `__cdecl` + 显式 this 造型。
- **C2227**（2）：`this->m_Next->__pad_0`，`m_Next` 被声明为 int → 对非类指针用 `->`；
  根因是 LinkClass 成员类型错位（registry int vs 实际 LinkClass*）。
- **C2440 return void->int**（3）：被调函数 registry 返回 void，但调用点 `return callee();`
  需要 int；修法 = 被调方签名复核（这正是 `GetRelatedObject` 这类命名缺失件）。
- **C2562**（1）：函数 ret void 但体里有 `return expr;`——签名与伪码返回不一致。
- **C2106**（1）：`((this->vfptr >> 8) & 0xFF) = 71;`，HIBYTE 宏目标不是 lvalue；
  根因是 `HIBYTE(this->vfptr)` 这类非 LOBYTE 窄宏目标未走成员窄存储路径。

## 7. 病理分类总表（延续三类 + 新类型）

| 类别 | 本轮 | 说明 | 修法方向 |
|---|---|---|---|
| width_mismatch | 2 | 读写宽度不一致 | ①IG 函数级作用域 ②disasm 窄存储证据 |
| cc_mismatch | 8 | 约定/清栈/参数顺序 | COM stdcall 签名 + 表达式操作数顺序 |
| ret_norm | 3 | 返回寄存器宽度（AL/AX vs EAX） | disasm 返回宽度 → 签名 ret 收窄 |
| codegen_shape | 8 | 指令形状分叉 | vt dispatch 具名虚方法 / IG 函数级 |
| frame_sched | 0 | 栈帧调度 | — |
| extern_reloc | 0 | 数据符号键 | 本轮已由 undecorate 修复（0x4865B0 推进到 signedness） |
| branch_polarity / branch_order | 0 | 分支极性/布局 | 本轮批内未出现 |
| **signedness**（新） | 0* | 同宽度有/无符号比较 | 0x4865B0 修好符号键后暴露 `jl` vs `jb`；属 signed-default 账本问题 |
| **const_fold**（新） | 0 | 同形不同立即数 | 常量折叠/表达式化简差异 |

\* signedness 在 run3→run4 的台账中计 0（0x4865B0 不在 100 批内）；
它是本轮 diffasm 修复后新暴露的差异类型，已进入分类器。

## 8. 复现

```bash
# 1) 生成 100 件批（5 pilot + 95）
python tools/decomp_sys/batch_select2.py

# 2) 跑批（20 件/part，逐 part 落账；中断后加 --resume 续跑）
python tools/decomp_sys/batch_run.py --batch .omo/agents/decomp_batch/batch100.json \
       --chunk 20 --out .omo/decomp_batch/run4 --resume

# 3) 单函数/小批
python tools/decomp_sys/batch_run.py 0x406540 0x4065C0 --out .omo/decomp_batch/probe
```

产物：`run4/part_XX/`（cpp/hpp/orig/ours/part_report）、`run4/batch_report.json`、
`.omo/agents/decomp_batch/results.jsonl`（逐函数增量账）、
`.omo/codegen_match/status.json`（账本）。

## 9. 遗留 / 下一步

1. **IG 函数级作用域**（最高杠杆）：修 registry 的类级最窄合并 + `member_at(fn)`，
   预计回收本轮 5 件 codegen_shape + 2 件 width_mismatch。
2. **返回宽度从 disasm 推断**：回收 3 件 ret_norm。
3. **COM stdcall 签名族**：回收 7 件 WebBrowser cc_mismatch。
4. **vt dispatch 具名化**：DistSq2D 类（slot 派发）转为 hpp 虚方法声明。
5. 编译失败 9 件的类型/签名复核（m_Next 类型、callee 返回类型、非 LOBYTE 窄宏）。
6. 下一批：把 `batch_select2.py --n 200 --cap 15` 指向剩余 fresh 池（约 4.5K leaf/<120B）
   + 账本 NG 二次攻坚。

---

附：旧账本 9 件 `PENDING_ERACOMPAT` 遗留二次清理（`cleanup9`）：5 MATCH / 3 MISMATCH / 1 COMPILE_FAIL，
PENDING_ERACOMPAT 计数归零。cleanup 明细见 `.omo/decomp_batch/cleanup9/part_00/part_report.json`。
