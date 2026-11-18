# CF 族谱工作单（cf2）

数据源：`.omo/agents/r1/cf2/cf_census.json`（3,038 条，含真实 cl 首错文本）。
生成：2026-11-18，全池口径 = `.omo/agents/r1/ab_hpp/full_setB`（955 parts）。

## 家族总表（按首错代码）

| family | count | share | 首个典型消息 | 修复方向 |
|---|---|---|---|---|
| C2440 | 425 | 14.0% | 'type cast' : cannot convert from 'void' to 'int' | Assignment/type-cast conversion: extend an assign harmonizer (cast insertion; x86-32 pointer<->int casts are codegen-neutral). ASSIGNED to impl agent (void*<->scalar + char**->const char**). |
| C2664 | 296 | 9.7% | 'atexit' : cannot convert parameter 1 from 'unsigned int' to 'void (__ | Callee prototype vs arg type. CRT-callback subfamily only ~50 (qsort/bsearch/atexit/CreateDialog/ResetEvent/CreateThread/ShowDialogConfirm). Bulk = declared-proto mismatch; needs arg-vs-declared-proto harmonization or signature authority for the callee. |
| C2065 | 270 | 8.9% | '_ET1' : undeclared identifier | Undeclared identifier. _ET1/_RT1 = CRT EH internals (OUT OF SCOPE per CRT-version policy). pad_0/rc_ptr = hpp supply gaps (template names). |
| C2446 | 265 | 8.7% | '!=' : no conversion from 'unsigned int' to 'void *'; D:\RA2YR_ReSourc | Comparison pointer-vs-int; pass_compare_harmonize covers some; residual needs per-site cast or type retype. |
| C2039 | 180 | 5.9% | 'TurnRate' : is not a member of 'JumpjetLocomotionClass' | Member not in class: hpp member supply gap (registry member vs declared hpp class). |
| C2660 | 154 | 5.1% | 'GetRect' : function does not take 1 parameters | Call arity vs declared proto: call-site arg count/typing (e.g. SetFileName takes 1). |
| C2227 | 152 | 5.0% | left of '->flags' must point to class/struct/union | Left of -> must point to class: receiver type resolution (local/param type). |
| C2228 | 136 | 4.5% | left of '.m_3' must have class/struct/union type; D:\RA2YR_ReSource\.o | Left of . must have class type: member-chain receiver resolution. |
| C2100 | 126 | 4.1% | illegal indirection | Illegal indirection: deref of non-pointer expression. |
| C2296 | 120 | 3.9% | '&' : illegal, left operand has type 'void *' | & on char*: bitwise-and of pointer; needs cast or retype. |
| C2059 | 100 | 3.3% | syntax error : ')' | Syntax error: residual pseudo fragments (needs sample-level diagnosis). |
| C2036 | 79 | 2.6% | 'void *' : unknown size | Unknown size: incomplete class used by value. |
| C2109 | 76 | 2.5% | subscript requires array or pointer type | Subscript on non-array: member scalar indexed. |
| C2143 | 61 | 2.0% | syntax error : missing ';' before '&&' | Missing ) before { : macro/paren imbalance residual. |
| C2027 | 58 | 1.9% | use of undefined type 'IStream'; D:\RA2YR_ReSource\.omo\agents\r1\ab_h | Undefined type Stream: forward-decl-only class used by value/reference. |
| C2146 | 57 | 1.9% | syntax error : missing ';' before identifier 'p2'; D:\RA2YR_ReSource\. | Missing ; before identifier: declaration-shape residual. |
| C2064 | 57 | 1.9% | term does not evaluate to a function | Term does not evaluate to a function: fn-ptr call via non-fnptr. |
| C2679 | 36 | 1.2% | binary '=' : no operator defined which takes a right-hand operand of t | No operator= for RHS type: assignment to class-typed LHS. |
| C2061 | 35 | 1.2% | syntax error : identifier 'DeleteAndZero'; D:\RA2YR_ReSource\.omo\agen | 未分类 |
| C2198 | 31 | 1.0% | 'unsigned int *(__stdcall *)(class MovementAI *,int,unsigned char *)'  | 未分类 |
| C2653 | 27 | 0.9% | 'CD' : is not a class or namespace name; D:\RA2YR_ReSource\.omo\agents | 未分类 |
| C2102 | 23 | 0.8% | '&' requires l-value | 未分类 |
| C2105 | 23 | 0.8% | '++' needs l-value | 未分类 |
| C2665 | 18 | 0.6% | 'sscanf' : none of the 2 overloads can convert parameter 1 from type ' | 未分类 |
| C2297 | 18 | 0.6% | '*' : illegal, right operand has type 'void *' | 未分类 |
| C2403 | 16 | 0.5% | 'Ch' : register must be base/index in 'first operand' | 未分类 |
| C2371 | 16 | 0.5% | 'GUID' : redefinition; different basic types | 未分类 |
| C2040 | 14 | 0.5% | 'FileStartOffset' : 'void *[1]' differs in levels of indirection from  | 未分类 |
| C2086 | 12 | 0.4% | 'HalfDamageSmokeLocation1_dword' : redefinition; D:\RA2YR_ReSource\.om | 未分类 |
| C2110 | 9 | 0.3% | cannot add two pointers | 未分类 |
| C2144 | 9 | 0.3% | syntax error : missing ')' before type 'char'; D:\RA2YR_ReSource\.omo\ | 未分类 |
| C2451 | 9 | 0.3% | conditional expression of type 'void' is illegal | 未分类 |
| C2197 | 8 | 0.3% | 'int (__thiscall SaveGame::*)(void)' : too many actual parameters; D:\ | 未分类 |
| C2171 | 7 | 0.2% | '!' : illegal on operands of type 'void'; D:\RA2YR_ReSource\.omo\agent | 未分类 |
| C2659 | 6 | 0.2% | '=' : overloaded function as left operand; D:\RA2YR_ReSource\.omo\agen | 未分类 |
| C2120 | 6 | 0.2% | 'void' illegal with all types; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp | 未分类 |
| C2106 | 6 | 0.2% | '=' : left operand must be l-value | 未分类 |
| C2425 | 6 | 0.2% | '-' : non-constant expression in 'first operand'; D:\RA2YR_ReSource\.o | 未分类 |
| C2018 | 6 | 0.2% | unknown character '0x60'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full | 未分类 |
| C2520 | 5 | 0.2% | conversion from unsigned __int64 to double not implemented, use signed | 未分类 |
| C2450 | 5 | 0.2% | switch expression of type 'void *' is illegal | 未分类 |
| C2046 | 5 | 0.2% | illegal case; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_7 | 未分类 |
| C2561 | 5 | 0.2% | 'UnloadUnits' : function must return a value | 未分类 |
| C2676 | 5 | 0.2% | binary '+' : 'class SequenceStruct' does not define this operator or a | 未分类 |
| C2044 | 5 | 0.2% | illegal continue; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\pa | 未分类 |
| C2079 | 5 | 0.2% | 'v5' uses undefined class 'WNDPROC'; D:\RA2YR_ReSource\.omo\agents\r1\ | 未分类 |
| C2043 | 4 | 0.1% | illegal break | 未分类 |
| C2556 | 4 | 0.1% | 'struct IUnknown *__fastcall __fastcall LayerClass__Pathfinding_Find(v | 未分类 |
| C2230 | 4 | 0.1% | '-' : indirection to different types; D:\RA2YR_ReSource\.omo\agents\r1 | 未分类 |
| C2166 | 4 | 0.1% | l-value specifies const object; D:\RA2YR_ReSource\.omo\agents\r1\ab_hp | 未分类 |
| C2373 | 3 | 0.1% | 'dword_887770' : redefinition; different type modifiers | 未分类 |
| C2113 | 3 | 0.1% | pointer can only be subtracted from another pointer | 未分类 |
| C2628 | 3 | 0.1% | '$S1' followed by '__int8' is illegal (did you forget a ';'?) | 未分类 |
| C2677 | 2 | 0.1% | binary '*' : no global operator defined which takes type 'class Functi | 未分类 |
| C2196 | 2 | 0.1% | case value '2' already used; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\f | 未分类 |
| C2108 | 2 | 0.1% | subscript is not of integral type; D:\RA2YR_ReSource\.omo\agents\r1\ab | 未分类 |
| C2582 | 2 | 0.1% | 'NetworkID' : 'operator =' function is unavailable; D:\RA2YR_ReSource\ | 未分类 |
| C2675 | 2 | 0.1% | unary '++' : 'class TeamClass' does not define this operator or a conv | 未分类 |
| OTHER | 2 | 0.1% | D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_828\_VectorCurs | 未分类 |
| C2275 | 2 | 0.1% | 'VectorCursor' : illegal use of this type as an expression; D:\RA2YR_R | 未分类 |
| C2535 | 2 | 0.1% | 'void __thiscall XSurface::vt_entry_68(void)' : member function alread | 未分类 |
| C2408 | 2 | 0.1% | illegal type on PTR operator in 'first operand'; D:\RA2YR_ReSource\.om | 未分类 |
| C1001 | 2 | 0.1% | INTERNAL COMPILER ERROR | 未分类 |
| C2411 | 1 | 0.0% | '__pad_C' : illegal struct/union member in 'first operand'; D:\RA2YR_R | 未分类 |
| C2094 | 1 | 0.0% | label 'A9FF80h' was undefined; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp | 未分类 |
| C4235 | 1 | 0.0% | nonstandard extension used : '__int128' keyword not supported in this  | 未分类 |
| C2182 | 1 | 0.0% | 'p0' : illegal use of type 'void'; D:\RA2YR_ReSource\.omo\agents\r1\ab | 未分类 |
| C2133 | 1 | 0.0% | 'v22' : unknown size; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_set | 未分类 |

## 逐族样本（addr / name / 首错）

### C2440（425）
- `0x4054a0` Audio::UpdatePlaybackPosition — '=' : cannot convert from 'unsigned int' to 'unsigned int *'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_set
- `0x4055c0` UpdateVoicePlayback — '=' : cannot convert from 'unsigned int *' to 'unsigned int'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_
- `0x406170` VocClass::Check — 'type cast' : cannot convert from 'double' to 'int *'
- `0x406e80` AudioMixer::Shutdown — 'type cast' : cannot convert from 'void' to 'int'
- `0x407b60` ThreadAudioMixerMain — '=' : cannot convert from 'class RawFileClass *' to 'unsigned int *'
- `0x409c40` AudioBuffer::InitializePlayback — 'initializing' : cannot convert from 'unsigned int' to 'class AudioBuffer'; D:\RA2YR_ReSource\.omo\agents\r1
- `0x40d1b0` SmallFunc_40D1B0 — '=' : cannot convert from 'void *' to 'char'
- `0x40d8e0` sub_40D8E0 — 'initializing' : cannot convert from 'unsigned char' to 'char *'

### C2664（296）
- `0x4011c0` LoadAudioFile — 'qsort' : cannot convert parameter 4 from 'int (const char *,const char *)' to 'int (__cdecl *)(const
- `0x403a80` DumpAudioDeviceDebug — 'int (int)' : cannot convert parameter 1 from 'char [200]' to 'int'
- `0x409470` sub_409470 — 'CreateThread' : cannot convert parameter 3 from 'void *' to 'int'; D:\RA2YR_ReSource\.omo\agents\r1
- `0x40bdd0` sub_40BDD0 — 'atexit' : cannot convert parameter 1 from 'unsigned int' to 'void (__cdecl *)(void)'
- `0x412b40` AircraftTrackerClass::FillCurrentVector — 'int (int,int)' : cannot convert parameter 1 from 'char *' to 'int'; D:\RA2YR_ReSource\.omo\agents
- `0x41aa80` AircraftClass::AssignDestination_SyncLog — 'SetFocus' : cannot convert parameter 1 from 'void *' to 'int'; D:\RA2YR_ReSource\.omo\agents\r1\a
- `0x41f580` AITriggerTypeClass::LoadFromINI — 'GetString' : cannot convert parameter 4 from 'int' to 'void *'; D:\RA2YR_ReSource\.omo\agents
- `0x423ac0` TechnoClass::CreateUnit — 'int (class AnimClass *,void *)' : cannot convert parameter 1 from 'unsigned int' to 'class AnimClass

### C2065（270）
- `0x40d3c0` sub_40D3C0 — 'MixFileClass_Array_Alt' : undeclared identifier
- `0x40d400` sub_40D400 — 'MixFileClass_Array_Alt' : undeclared identifier
- `0x41a160` TechnoClass::FindClosestPlacementCell — 'v42' : undeclared identifier; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_43\TechnoClass
- `0x41a9e0` TechnoClass::CanFireAtTarget — 'abs16' : undeclared identifier
- `0x427d00` AnimTypeClass::LoadFromINI — '_RT1' : undeclared identifier; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_63\AnimType
- `0x42a460` BuildingClass::AddRectToDrawList — '_ET1' : undeclared identifier
- `0x42b7f0` SimplifyPathFilter — 'abs16' : undeclared identifier
- `0x4397e0` AnimClass::InitRotation — '_ET1' : undeclared identifier

### C2446（265）
- `0x403fa0` sub_403FA0 — '!=' : no conversion from 'unsigned int' to 'class DListNode *'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hp
- `0x4041d0` ProcessAudioFrame — '!=' : no conversion from 'unsigned int' to 'class DListNode *'; D:\RA2YR_ReSource\.omo\agents\r1\a
- `0x410a60` AbstractTypeClass::LoadFromINI — '!=' : no conversion from 'unsigned int' to 'char *'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\
- `0x415a50` AircraftClass::ProcessReturnToBase — '==' : no conversion from 'class AbstractClass *' to 'int'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hp
- `0x419b00` Cell::IsOccupied — '>=' : no conversion from 'void *' to 'int'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_43\Cell.cp
- `0x41b660` AircraftClass::HandleTargetDestroyed — '==' : no conversion from 'class AircraftTypeClass *' to 'int *'; D:\RA2YR_ReSource\.omo\agents\r1
- `0x41b870` AircraftClass::ProcessPassengerEjection — '!=' : no conversion from 'const int' to 'void *'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_set
- `0x41c3f0` BulletClass::NormalizeZeroVector — '==' : no conversion from 'double' to 'void *'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_47\Bu

### C2039（180）
- `0x4073b0` SaveGame::CountLinkedList — 'm000' : is not a member of 'SaveGame'
- `0x40e3e0` sub_40E3E0 — 'vtable' : is not a member of 'GenericList'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_27\Gener
- `0x40e4c0` sub_40E4C0 — 'vtable' : is not a member of 'List'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_27\List.cpp(49) :
- `0x4115f0` BSurface::Lock — 'XSurface' : is not a member of 'BSurface'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_38\BS
- `0x411650` BSurface::ScalarDtor — 'XSurface' : is not a member of 'BSurface'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_38\BS
- `0x4289d0` AnimTypeClass::PowerDrainUpdate — 'Flat_flag' : is not a member of 'AnimTypeClass'
- `0x42c290` Pathfinding::AStar — 'm064' : is not a member of 'Pathfinding'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_67\Pathf
- `0x42d170` Pathfinding::CalcDistance — 'm064' : is not a member of 'Pathfinding'; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_67\Pathf

### C2660（154）
- `0x401980` CCFileClass::Destru_vt08 — 'SetFileName' : function does not take 1 parameters; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_set
- `0x4091c0` ReadAudioStream — 'sub_409100' : function does not take 0 parameters
- `0x4105e0` IRTTITypeInfo::QueryInterface — 'QueryInterface' : function does not take 1 parameters
- `0x4151e0` AircraftClass::ProcessLanding — 'CheckHeightDiff' : function does not take 1 parameters; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\f
- `0x417fe0` AircraftClass::Mission_Attack — 'CheckPassengerCount' : function does not take 1 parameters; D:\RA2YR_ReSource\.omo\agents\r1\ab_
- `0x41a5c0` AircraftClass::GetMissionTimer — 'CheckHeightDiff' : function does not take 1 parameters
- `0x41a940` AircraftClass::EvaluateTargetingState — 'CheckHeightDiff' : function does not take 1 parameters
- `0x41adc0` AircraftClass::ProcessDockCheck — 'GetCursorOverObject' : function does not take 1 parameters

### C2227（152）
- `0x40a090` sub_40A090 — left of '->CreateSoundBuffer' must point to class/struct/union; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\ful
- `0x416d50` Carryall::MissionStateMachine — left of '->flags' must point to class/struct/union
- `0x423930` AnimClass::UpdateProjectileTrajectory — left of '->firstObject' must point to class/struct/union; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full
- `0x425670` ConstructionPositionTracker — left of '->landType' must point to class/struct/union; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full
- `0x42a5b0` CellClass::ClearOccupancyGrid — left of '->vfptr1' must point to class/struct/union; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB
- `0x4415f0` FootClass::ProcessDemolish — left of '->__pad_28' must point to class/struct/union; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\fu
- `0x447f10` BuildingClass::GetFireError — left of '->EMPulseCannon' must point to class/struct/union; D:\RA2YR_ReSource\.omo\agents\r1\ab_hp
- `0x4496b0` BuildingClass::CheckState1 — left of '->SuperWeapon' must point to class/struct/union; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\

### C2228（136）
- `0x409360` sub_409360 — left of '.QuadPart' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_set
- `0x410ce0` BSurface::Construct — left of '.field_0' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB\part_3
- `0x411820` ManageMultimediaTimer — left of '.RecursionCount' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\fu
- `0x414310` AircraftClass::MoveTo — left of '.vfptr' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_s
- `0x4165c0` AircraftClass::DeployWithAnim — left of '.vfptr' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_s
- `0x417cc0` AircraftClass::GetActionOnObject — left of '.vfptr' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_s
- `0x424ce0` ProductionCompletionCallback — left of '.vfptr' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_setB
- `0x431b80` BufferIOFileClass::Dtor — left of '.__tail_0' must have class/struct/union type; D:\RA2YR_ReSource\.omo\agents\r1\ab_hpp\full_se

## 纪律

- 规则级修复（单根因），禁逐函数手修。
- 门禁：单点 ≥10 样本编译 + OK 对照 20 全 MATCH + NG 回归 40 全可编译 + canonical 全池 A/B 同批单同序（lead 执行）。
- 已证伪勿重跑：批量 ScalarDtor 改名、uintN_t 拼写、__usercall strip、语句/常量/循环等价改写（0 命中）。
- CRT EH 内部件（_ET1/_RT1 等）按 AGENTS.md 裁决移出形态战场。

## 附：C2446（265）现状评估 —— 现有 harmonizer 覆盖已广，残余属形状缺口

`pass_compare_harmonize` 已覆盖：ptr vs int（`(unsigned int)` 重拼）、ptr vs ptr（不相容→RHS cast）、
extended-RHS、pointer-cast-immediate、ident vs &global、cast-deref vs &global、vdd 形态。
残余 265 件的样本分布：
- `'!=' : no conversion from 'unsigned int' to 'class DListNode *'`（ptr/int 但操作数形状未被
  `_CMP_SIMPLE`/`_CMP_CASTSUB` 捕获）
- `'==' : no conversion from 'class AbstractClass *' to 'int'`（cls 类对象 vs int；
  `_rhs_ptr_head` 的 `cls` kind 不在 `rewrite()` 分支内）
- `'==' : no conversion from 'class AircraftTypeClass *' to 'int *'`（不相容 ptr/ptr）
修复方向（若重启）：扩展 `_rhs_ptr_head`/`rewrite` 处理 `cls` kind 与复杂操作数；
注意全部为 32-bit cmp 恒等重拼（codegen-neutral），可安全门禁。

## 附：C2660/C2227/C2228/C2664 形状配方（供下一轮直接开工）

### C2660（154）— call 实参多于声明 arity
| 形态 | 数量 | 样例 |
|---|---|---|
| 声明 0 参、调用传 1 | 80 | `SetFileName` / `sub_409100` |
| 传 2 / 传 0 / 传 4 / 传 3 | 34/11/11/8 | `QueryInterface` / `CheckHeightDiff` |
修复方向：以 call 点为二进制真值，给被调**声明**补齐 int 形参到调用 arity
（`pass_callees` 的 csigs 通道）；注意同 unit 内被调定义需同步（decl/def 一致，防 C2511）。

### C2227（152）— `X->field` 的 X 非类类型
151/151 同一形态。样例：`->CreateSoundBuffer`（X=void*/int）、`->flags`、`->firstObject`、`->landType`。
修复方向：由成员名反查 owner 类（`member_lookup` 名字唯一时）或由 disasm 元素类
（`_cw5_elem_class`）确定，再把接收者 cast/retype 为该类。已有 `pass_global_arrow_members`
对 `void*` 全局覆盖；残余为**局部/参数**接收者。

### C2228（137）— `X.field` 的 X 非类类型
136/137 同一形态。样例：`.QuadPart`（LARGE_INTEGER）、`.RecursionCount`（CRITICAL_SECTION）、
`.vfptr`（未声明为类对象的局部）、`.field_0`。
修复方向：按成员证据（`_TypeEnv` + member_lookup 反查）**retype 局部/参数**为 owner 类。

### C2664（296）— 参数转换
| 位置 | 数量 |
|---|---|
| parameter 1 | 159 |
| parameter 2 | 45 |
| parameter 3 | 33 |
| parameter 4 | 5 |
CRT 回调子族仅 ~50（qsort/bsearch/atexit/CreateDialog/ResetEvent/CreateThread/ShowDialogConfirm，
已量化）；其余为**被调声明原型 vs 实参**形状，需 `pass_arg_harmonize` 向声明侧收敛或
签名权威化（属签名层，非单点规则）。

## 附：C2228 的 Win32 结构供给假说 —— 已核查（结构已完整，假说部分证伪）

`era_types.h` 实际已含 `LARGE_INTEGER`（union + QuadPart，第 259-262 行）与
`CRITICAL_SECTION`（struct + RecursionCount，第 205-213 行）→ **结构供给不是缺口**。
C2228 中 `.QuadPart`/`.RecursionCount` 仅 2 件，根因是**接收者类型**（局部被声明为
`__int64`/`int*` 等标量而非 LARGE_INTEGER/CRITICAL_SECTION）。该族 137 件分布在
`.vfptr`/`.field_0`/`.m_N` 等成员名上，属接收者类型推断（`_TypeEnv`/member 反查），
非类型供给补全。
