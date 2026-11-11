# C++ 质量审计 — 字节 MATCH 池的语义完整性

- 日期：2026-11-11
- 范围：`.omo/codegen_match/status.json` 的 OK 池（425 条）+ `.omo/decomp_batch/` 产物 + `.omo/agents/mirror/`
- 方法：逐函数读生成 C++、对照 `decompile-results/full_export` 的 Hex-Rays/反汇编、重跑 `tools/decomp_sys/checker.py`、重跑当前 HEAD 的 `decompile.py`、独立重算 orig/ours 字节、读 era cl 警告
- 约束遵守：未修改任何生成物、未改 `tools/`、未碰 `src/`；只读引用 + 在 `.omo/audit/` 下新建审计脚本/临时重建输出

---

## 0. 结论速览

| 问题 | 结论 | 证据强度 |
|---|---|---|
| 字节 MATCH 函数里有「匹配但 C++ 语义可疑」的吗？ | **有，而且不是孤例**。40 件抽样：语义 P 19 / W 18 / F 3；43/424（10.1%）OK 函数带 checker R3/R4 违规；23.6% 的 OK 条目账本类名与生成类名不一致 | 实证（代码 + 复算） |
| 字节优先是否系统性损害了 C++？ | **是，但损害发生在「门禁 / 类型 / 身份」层，不在「表达式翻译」层**。40/40 的 body 与伪码/源语义一致（生成器是忠实的）；问题是被字节判定放行的函数类型、签名、类归属和成员名不可信 | 实证 + 机制代码 |
| 损害程度 | **当前：中等**（OK 池作为「完成」信号严重失真）；**对复杂逻辑：高风险但尚未发生**——OK 池 99.8% 是 ≤20B 的 thunk/getter（仅 4 件 >1 语句），复杂函数全在 NG 池 | 实证（分布 + 抽样） |
| NG 是否等于 stub？ | **否，架构主张成立**。20/20 NG 抽样 body 完整（3–176 行、1–90 条语句），0 个 TODO/空体；89 个可抽取 NG body 中 0 空体、0 TODO | 实证 |
| 六规则 checker 过吗？ | **OK 池 43/424 不过**（10.1%）；且 checker 只覆盖 R3/R4，R1/R2/R5/R6 名义通过但 R5 在复杂 NG 上实际退化 | 实证（重跑 + 代码） |
| 红旗（asm/pragma/union 越狱） | **body 层 0 例**（245 个 OK cpp 文件全扫）；hpp 壳层 49/456 个 hpp 用 union 做多证据视图（不是 body 越狱，但属类型系统妥协） | 实证（文本扫描） |

**一句话**：字节优先没有把复杂函数「翻译坏」——它把复杂函数挡在 OK 之外，把 OK 做成了「4–6B 常量 thunk + 单字段 getter」的集合；在这个集合里，它放行了 43 件规则不合规、100 件类归属漂移、以及唯一一件实质函数（161B）的语义荒谬。**真正的风险是「OK = 完成」这个度量本身，而不是表达式层。**

---

## 1. 审计方法与样本

### 1.1 数据源

| 数据 | 路径 |
|---|---|
| 账本 | `.omo/codegen_match/status.json`（425 OK / 321 NG / 251 COMPILE_FAIL / 3 PENDING） |
| 生成产物 | `.omo/decomp_batch/<run>/…/part_00/`（cpp、obj、orig_<ADDR>.json、ours_<ADDR>.json、include/*.hpp、part_report.json） |
| 伪码/反汇编 | `decompile-results/full_export/src/*.cpp`（按 `// addr=0x…` 分块） |
| mirror 产物 | `.omo/agents/mirror/`（src/ 的 standalone era TU） |
| 工具（只读调用） | `tools/decomp_sys/{decompile.py,checker.py,batch_run.py,pseudo.py}` |

### 1.2 OK 抽样设计（40 件）

OK 池没有「病理标签」（病理只在 NG 上产生），因此 40 件按以下方式分层，**故意富集缺陷族**（不是患病率估计；池级患病率用全量扫描单独给出）：

| 层 | 数量 | 选法 |
|---|---|---|
| A：4B getter/thunk | 12 | 覆盖 identity 漂移、rv>0、干净 getter、pointer→int |
| B：5–6B 常量/stub | 11 | 覆盖 stdcall 常量、`retn N`、曾为 ret_norm/width_mismatch 后转 MATCH、CF→MATCH |
| C：7–8B | 13 | 覆盖 fastcall setter、vtable stub、rv>0、identity 漂移、sites 2/2 |
| D：>8B | 4 | 11B mirror、17B 数组、20B 前 ret_norm、161B 唯一实质函数 |
| 合计 | 40 | 覆盖 OK 池全部尺寸带与全部可观察缺陷族 |

病理类的覆盖由**反向 NG 抽样**承担：20 件覆盖全部 12 个病理标签（branch_polarity / branch_order / codegen_shape / frame_sched / regalloc / const_fold / extern_reloc / width_mismatch / signedness / ret_norm / cc_mismatch / eval_order），每类至少 1 件。

### 1.3 复核手段（不是看账本标签）

1. 逐件读生成 cpp body（`samples.json` 保存全文）；
2. 对照 `full_export` 的 Hex-Rays 与反汇编（proto、`retn N`、ECX/EDX 读）；
3. 用 `checker.check_function` 对 body 重新跑 R3/R4，比较账本记录的 `rule_violations`；
4. 独立比较 `orig_*.json` / `ours_*.json` 的 `bytes_hex`（含 REL32 掩码）；
5. 对 8 件 OK + 6 件 NG 用**当前 HEAD** `decompile.py` 重建（`.omo/audit/rebuild*`），看是否复现质量结论与编译警告；
6. 文本扫描 245 个 OK cpp / 456 个 hpp：`__asm`、`#pragma`、`union`、`goto LABEL_`、`if(...);`。

### 1.4 证据分级

- **实证**：贴出的代码、复算字节、checker 输出、era cl 警告、账本/报告 JSON。
- **推断**：成员名/类归属「是否正确」——没有独立布局证据时只记为「不可验证/冲突」，不写成定论。
- **局限**：见 §10。

---

## 2. 基座核验：OK 池到底装了什么

### 2.1 账本 vs 产物

- 账本 OK **425**；有 MATCH 产物 **424**；缺 1 件：`0x4072c0 DListNode::Init`（note=`smoke B`），在归档产物中不可复核。
- OK 池尺寸分布（`orig_size`，424 件均有值）：

| 尺寸 | 件数 | 占比 |
|---|---:|---:|
| ≤6B | 352 | 83.0% |
| 7–20B | 71 | 16.7% |
| >20B | **1**（`0x602ae0`，161B） | 0.24% |

- 400 件主批（`r3_400`）的 265 个 MATCH 同样极端：**200 件 ≤6B + 65 件 7–20B + 0 件 ≥21B**。
- 首个 100 件批次（`run4`/report.md）：70 MATCH 中 **69 件是 4–6B getter/stub**，仅 1 件 17B。

### 2.2 OK body 组成（424 件全文抽取）

| body 形态 | 件数 | 占比 |
|---|---:|---:|
| 常量返回（`return <const>;`） | **254** | 59.9% |
| 单成员/this 访问（`return this->x;` / 单字段写） | **155** | 36.6% |
| 全局访问（`return g_X;`） | 9 | 2.1% |
| 其它单 return（含调用转发） | 5 | 1.2% |
| 无产物 | 1 | 0.2% |

- **语句数 >1 的 OK 函数只有 4 件**（`0x48d1d0` 2 条、`0x486380` 3 条、`0x4f2b40`/`0x4f2b50` 2 条）；**没有任何一件超过 3 条语句**。
- 结论（实证）：**OK 池 ≈ 「常量返回 + 单字段 getter/setter」池；字节匹配在这个池里几乎没有可牺牲的 C++ 语义面。** 唯一实质函数是 `0x602ae0`（161B）。

### 2.3 规则违规与身份漂移（全量）

| 指标 | 数值 |
|---|---:|
| checker R3/R4 违规的 OK 条目 | **43 / 424（10.1%）**（42 件为 `this + N` 的 R4 双计；1 件 `0x634800` 为 R3 member-pun） |
| 账本类名 ≠ 生成类名/unit | **100 / 424（23.6%）** |
| 生成的 emitted 名 ≠ 账本 name | **115 / 424（27.1%）** |
| 占位风味名字（sub_/GetMember/Stub/Return/vt_entry/GetAuxField…） | **270 / 424（63.7%）**；其中 `Stub*` 152、`sub_*` 20、`GetMember*` 6 |
| 返回类型类别与 IDA proto 不一致 | **15 / 424（3.5%）**：ptr→int 1、int→char 6、int→uchar 3、int→bool 1、char→int 3、bool→char 1 |

---

## 3. 40 件 MATCH：五维结果

### 3.1 通过率

| 维度 | P | W | F | P 率 |
|---|---:|---:|---:|---:|
| a 语义合理性（body 自洽 + 与伪码语义一致） | 19 | 18 | 3 | 47.5% |
| b cc/宽度（ECX/EDX/retn 证据；signedness/返回宽度） | 35 | 5 | 0 | 87.5% |
| c 可读性（有意义命名、无魔法数） | 3 | 24 | 13 | 7.5% |
| d 六规则（重跑 checker；R1/R2/R5/R6 手查） | 32 | — | 8 | 80.0% |
| e 红旗（asm/pragma/union/刻意怪写法） | 13 | 25 | 2 | 32.5% 无异常 |

> 说明：d 的 20% 失败率是**富集抽样**的结果（专门抽了 8 件 rv>0）；池级为 10.1%。c 的 P 极低，是因为 OK 池的 hpp 本身就是 stand-in 壳（见 §4.4），不是这 40 件特别差。

### 3.2 逐件表（P=通过，W=警告，F=失败）

| # | addr | B | 账本 name | emitted | a | b | c | d | e | 依据 |
|---|------|---|-----------|----------|---|---|---|---|---|------|
| 1 | `0x401940` | 4 | `ObjectClass::GetMember06` | `RawFileClass::GetMember06` | P | P | W | P | W | dword 读自洽；GetMember06 占位；账本 ObjectClass vs 生成 RawFileClass（pilot 报告记为 ICF 残留纠正，但账本未同步） |
| 2 | `0x4ca160` | 4 | `AbstractClass::GetType` | 同名 | W | P | F | F | W | `this + 22` 裸偏移，无成员；R4 ×2 |
| 3 | `0x50e370` | 4 | `AbstractClass::checkPassability` | 同名 | W | P | F | F | W | `this + 12` 裸偏移；R4 ×2 |
| 4 | `0x48ba80` | 4 | `CellClass::GetBridgeIndex` | 同名 | W | P | W | P | W | 指针成员 `rubble` → `int` 返回；名/成员冲突 |
| 5 | `0x4722d0` | 4 | `TechnoClass::processPowerDrain` | 同名 | W | P | W | P | W | 指针成员 `attachedTag` → `int`；名/成员冲突 |
| 6 | `0x4389f0` | 4 | `BombClass::IsDeathBomb` | 同名 | W | P | W | P | W | 返回 `audioController[0]`；域冲突 |
| 7 | `0x408d50` | 4 | `AudioStream::GetChannel` | 同名 | W | P | W | P | P | `m014[0]` 偏移式成员 |
| 8 | `0x411630` | 4 | `BSurface::GetBytesPerPixel` | 同名 | P | P | P | P | P | 干净的语义 getter |
| 9 | `0x540f90` | 4 | `Network::GetSendCount` | `IPXManagerClass::GetSendCount` | W | P | F | F | W | `this + 17`；账本 Network vs 生成 IPXManagerClass；R4 ×2 |
| 10 | `0x5c0f30` | 4 | `ScenarioClass::initTeams` | `MultiplayerGameMode::initTeams` | F | W | F | P | W | 名为 initTeams，body `return -1`；常量返回，this 不可观测 |
| 11 | `0x4886a0` | 4 | `ObjectClass::GetStateFlag` | `ShpButtonClass::GetStateFlag` | W | P | W | P | W | `(char)Image`；GetStateFlag vs Image；类漂移 |
| 12 | `0x6241c0` | 4 | `ObjectClass::Release` | `SimpleDialogControl@OwnerDraw::Release` | W | P | F | P | W | `Release` 返回数据字节；返回类型被字节驱动收窄；类漂移 |
| 13 | `0x55ab70` | 5 | `JumpjetLocomotionClass::MissionStub2` | `IUnknown::MissionStub2` | P | P | W | P | W | 忠实的 stdcall stub；账本 Jumpjet vs 生成 IUnknown |
| 14 | `0x55ac60` | 5 | `JumpjetLocomotionClass::StubReturnTrue_3` | 同名 | P | P | W | P | P | 忠实常量 true |
| 15 | `0x4ca750` | 6 | `FactoryClass::StubReturn12` | 同名 | P | W | W | P | P | 忠实常量 12；this/free 不可观测 |
| 16 | `0x5b2e40` | 6 | `TechnoClass::StubReturn450` | `MissionClass::StubReturn450` | P | W | W | P | W | 忠实常量 450；账本 Techno vs Mission |
| 17 | `0x5d6310` | 5 | `ScenarioClass::MissionStubReturnZero2` | `MultiplayerGameMode::MissionStubReturnZero2` | F | P | F | P | W | 名字说 ReturnZero2，body 返回 1 |
| 18 | `0x642ad0` | 5 | `Scenario::SetByte96` | 同名 | P | P | W | P | P | 自然字节 store；`m060` 占位 |
| 19 | `0x65c600` | 5 | `FileClass::Stub` | 同名 | P | P | W | P | P | 忠实 stub |
| 20 | `0x5f3530` | 5 | `NullModemClass::Send` | 同名 | P | P | W | P | P | 忠实 stub |
| 21 | `0x7b1750` | 5 | `IPXInterfaceClass::Send` | `WinsockInterfaceClass::Send` | P | P | W | P | W | 账本类 vs 生成类不一致 |
| 22 | `0x4b4c60` | 5 | `JumpjetLocomotionClass::MissionStub6` | `IUnknown::MissionStub6` | P | W | W | P | W | proto 为 stdcall，生成 thiscall 成员；只有 retn 4 证据 |
| 23 | `0x7bab70` | 5 | `XSurface::entry_3C_` | 同名 | W | P | F | P | F | 10 个虚构参数只为复现 `retn 0x2C` |
| 24 | `0x408070` | 7 | `Audio::IsSoundPlaying` | 同名 | P | P | W | P | P | 位测试自洽；`m00C` 占位 |
| 25 | `0x408520` | 8 | `AudioController::GetOffset` | 同名 | W | P | W | P | W | `(Queue *)(&this->field)` 成员类型双关；与伪码一致 |
| 26 | `0x40d230` | 8 | `InputManager_ProcessEvents::AddRef` | `GScreenClass::AddRef` | P | P | W | P | W | 账本类 vs 生成类不一致 |
| 27 | `0x40d240` | 8 | `InputManager_ProcessEvents::Release` | `GScreenClass::Release` | P | P | W | P | W | 同上 |
| 28 | `0x41c010` | 7 | `TechnoClass::IsDisguised` | 同名 | P | P | P | P | P | 语义成员名 + 宽度忠实 |
| 29 | `0x681100` | 7 | `LoadOptions::GetData` | 同名 | W | P | F | F | W | `this + 264`；R4 ×2 |
| 30 | `0x746d80` | 7 | `FootClass::updateScanRange` | 同名 | W | P | F | F | W | `this + 1760` 字节读；R4 ×2 |
| 31 | `0x759f70` | 7 | `MovieClass::GetWidth` | 同名 | W | P | F | F | W | `this + 326` dword 读；R4 ×2 |
| 32 | `0x600670` | 7 | `ComboBoxOwnerDraw::GetWidthHeight` | 同名 | P | P | W | P | P | 两个字段相乘；`m000/m004` 占位 |
| 33 | `0x70c5b0` | 7 | `ObjectClass::GetShroudByte` | `TechnoClass::GetShroudByte` | W | P | W | P | W | 返回 `isBeingWarpedOut`；账本 ObjectClass vs TechnoClass |
| 34 | `0x406520` | 7 | `AbstractTypeClass::sub_406520` | 同名 | P | P | W | P | P | fastcall setter；ECX+EDX 实证；sub_ 占位 |
| 35 | `0x425270` | 8 | `VtableStub::Method_425270` | 同名 | W | P | F | F | W | `this + 414` 字节写；VtableStub 伪类；R4 ×2 |
| 36 | `0x557b00` | 7 | `CheckListClass::GetItemCount` | `ListClass::GetItemCount` | W | P | F | F | W | `this + 91`；账本 CheckList vs ListClass；R4 ×2 |
| 37 | `0x4722c0` | 11 | `CellClass::HasContent` | `?HasContent@CellClass@@QAEHXZ` | W | P | W | P | W | mirror src；`*&this->attached3` 写法 |
| 38 | `0x4870d0` | 17 | `Cell::IsPassableOffset` | 同名 | P | P | P | P | P | 命名数组成员，scale/width 忠实 |
| 39 | `0x486380` | 20 | `Cell::IsEmpty` | 同名 | P | P | W | P | P | bool 谓词忠实；`m038` 占位 |
| 40 | `0x602ae0` | 161 | `Dialog::IsSpecialTemplate` | 同名 | F | W | F | P | F | 指针与 18 个对话框 ID 比较；ECX 证据只证明 thiscall，不证明 ECX 是对象指针 |

### 3.3 维度分析

**a 语义**：P 19 / W 18 / F 3。P 的典型是 `BSurface::GetBytesPerPixel`、`TechnoClass::IsDisguised`、`Cell::IsPassableOffset`、`Cell::IsEmpty`；W 的典型是裸偏移 getter、指针→int、成员名/函数名域冲突；F 三件是 `initTeams` 返回 -1、`MissionStubReturnZero2` 返回 1、`IsSpecialTemplate` 指针比 ID。注意：**40/40 body 都与伪码/源语义一致**（39 件 decompile body 逐字对应 Hex-Rays；1 件 mirror 由 src 重写，语义等价）——语义问题不在表达式改写，而在类型/签名/命名/类归属层。

**b cc/宽度**：35 P / 5 W / 0 F。抽样中 25 件有 ECX 读、9 件有 `retn N`、1 件 fastcall ECX+EDX、1 件 mirror；只有 4 件常量返回无法从二进制区分 this/free（<10%）。池级则更弱：**199/424（46.9%）常量返回无 ECX/retn 证据，23/424（5.4%）仅 retn N**——即 **52.4% 的 OK 函数，cc 选择是 registry 模型决定的，不是二进制证明的**。另有 20 件 proto 为 `__stdcall` 但生成 thiscall 成员（无 ECX，body 忽略 this，ABI 等价但 API 语义不同）；8 件 proto 为 `__thiscall` 但生成 `__stdcall`（WebBrowser 族，`retn N` 证明 stdcall 是对的，属于对 IDA proto 的正确纠正）。

**c 可读性**：3 P / 24 W / 13 F。OK 池 63.7% 的账本名是占位风味；样本 hpp 90 个成员中 56 个是 `__pad_*`（62.2%），15 个是 `mNNN/qNNN`，19 个语义名，且其中至少 8 个与函数名/域冲突（见 §4.4）。3 个 P 是 `GetBytesPerPixel`、`IsDisguised`、`IsPassableOffset`。

**d 规则**：32 P / 8 F。池级 43/424 违规。重跑 checker 与账本记录 **逐件一致**（无账本造假/漏记），说明记录是诚实的；问题在**记录不参与 gate**。

**e 红旗**：13 无异常 / 25 轻微 / 2 严重。body 层无 inline asm、无 pragma、无 union；「怪写法」集中在类型层（见 §4.5）。

---

## 4. 红旗清单（逐条代码）

### 4.1 语义红旗（最严重）

**(1) `0x602ae0 Dialog::IsSpecialTemplate`（161B，账本 OK，唯一实质 MATCH 函数）**

生成代码：
```cpp
int Dialog::IsSpecialTemplate()
{
        return this == (Dialog *)293
          || this == (Dialog *)231
          || this == (Dialog *)278
          || this == (Dialog *)194
          || this == (Dialog *)201
          || this == (Dialog *)285
          || this == (Dialog *)284
          || this == (Dialog *)276
          || this == (Dialog *)700
          || this == (Dialog *)275
          || this == (Dialog *)265
          || this == (Dialog *)271
          || this == (Dialog *)279
          || this == (Dialog *)230
          || this == (Dialog *)243
          || this == (Dialog *)244
          || this == (Dialog *)270
          || this == (Dialog *)274;
}
```
- 伪码与生成代码**逐字一致**（IDA 也把它渲染成 `this == (Dialog *)293`）。
- 但二进制只有 `cmp ecx, 125h` / `jz` 链，没有一次内存访问（`decode` 见 `full_export/src/Dialog.cpp`，`602ae0..602b80`）。`ecx` 在这里是**对话框 ID**，不是对象指针；`this` 签名是 IDA 的 thiscall 推断，生成器接受了它。
- 这是「字节 MATCH + C++ 语义荒谬」的教科书样本：checker 0 违规、era cl rc=0、账本 OK。**证据等级：实证**（反汇编 + 代码）；「它实际是 `bool IsSpecialTemplate(int id)`」是**推断**（从无内存访问 + 小整数比较得出，置信度高）。

**(2) `0x51faf0 InfantryClass::GetTypePtr`（7B，账本 OK，在 40 件样本外、全量扫描发现）**
```cpp
int InfantryClass::GetTypePtr()
{
        return (int)(this->Type);
}
```
- hpp：`unsigned int Type; // 0x6C0`；IDA proto：`InfantryTypeClass *__thiscall(InfantryClass *this)`。
- 二进制 `8b 81 c0 06 00 00 c3` = `mov eax,[ecx+0x6C0]; ret`，确实只搬 4 字节。但 C++ API 名为 `GetTypePtr`，成员本是类型指针，registry 把成员类型擦成 `unsigned int`、返回写成 `int`——**类型信息被字节优先抹掉**。这是 15 件返回类型不一致中唯一明确的 `ptr→int`。

**(3) `0x6241c0 Release`（4B，账本 OK；从 ret_norm MISMATCH 转 MATCH）**
```cpp
char SimpleDialogControl_OwnerDraw::Release()
{
        return (char)((this->m008));
}
```
- 伪码：`LOBYTE(result) = *(this + 8); return result;`；二进制 `8a 41 08 c3` = `mov al,[ecx+8]; ret`。
- `Release` 返回对象内的数据字节——自然 C++ 语义应是 `void`/`int`（COM 风格）；`char` 返回是为了 AL 字节匹配的「ret_norm 修复」。代码忠实于二进制，但 API 语义可疑。

**(4) `0x5d6310 MissionStubReturnZero2`（5B，账本 OK；从 ret_norm MISMATCH 转 MATCH）**
```cpp
char __stdcall MultiplayerGameMode::MissionStubReturnZero2()
{
        return (char)((1));
}
```
- 二进制 `b0 01 c2 04 00` = `mov al,1; ret 4`。**函数名说 Zero，body 返回 1**；名字/值矛盾，账本却记为 OK。名字来自信号层，body 来自二进制——两者没有一致性检查。

**(5) 指针成员 → int 返回（`0x48ba80`、`0x4722d0`）**
```cpp
int CellClass::GetBridgeIndex()  { return (int)((int)this->rubble); }      // rubble: BuildingTypeClass*
int TechnoClass::processPowerDrain() { return (int)((int)this->attachedTag); } // attachedTag: void*
```
- 这两个都是 4B `mov eax,[ecx+off]; ret`，字节正确；但 C++ 里把类型指针压成 `int`，且函数名/成员名域冲突（桥索引 vs 废墟指针；电力消耗 vs 附加标签）。**类型/命名层失真，二进制层忠实。**

**(6) 成员名域冲突（`0x4389f0`、`0x4886a0`、`0x70c5b0`、`0x69bbe0`）**
```cpp
int BombClass::IsDeathBomb()        { return (int)(this->audioController[0]); }
char ShpButtonClass::GetStateFlag() { return (char)((this->Image)); }
unsigned char TechnoClass::GetShroudByte() { return (unsigned char)((this->isBeingWarpedOut[0])); }
char SessionClass::GetGameSpeed()   { return (char)((this->CurrentlyInGame)); }
```
- 每个 body 都与其 hpp 成员自洽、与伪码一致；但「IsDeathBomb → audioController」「GetShroudByte → isBeingWarpedOut」「GetGameSpeed → CurrentlyInGame」在语义上不可信。**成员名来自 registry 的偏移→名字映射，不是本函数的语义。**

**(7) `0x7bab70 XSurface::entry_3C_`（5B，账本 OK，CF→MATCH）**
```cpp
char __stdcall XSurface::entry_3C_(int p0, int p1, int p2, int p3, int p4,
                                   int p5, int p6, int p7, int p8, int p9)
{
        return (char)(0);
}
```
- 二进制 `32 c0 c2 2c 00` = `xor al,al; ret 0x2C`。为了复现 `ret 0x2C`，签名必须有 10 个栈参数（+this=11×4=44=0x2C）。这 10 个参数不是从语义得来的，是**从栈清理字节数反推的虚构 API**。字节 MATCH；C++ 签名荒谬。

**(8) `0x408520 AudioController::GetOffset`（8B，账本 OK）**
```cpp
int AudioController::GetOffset()
{
        return (int)(((Queue *)(&this->AudioController_field_08))->GetNext());
}
```
- 伪码：`return Queue::GetNext((Queue *)&this->AudioController_field_08);`；二进制是 `add ecx,8; jmp Queue::GetNext`（尾调用）。
- 与伪码一致，但 `(Queue *)(&this->field)` 是把成员地址当另一个类对象的**类型双关**；语义上应有一个 `Queue` 成员/基类布局，而不是 cast。checker 的 member-pun 正则没有命中这个带括号变体（见 4.2）。

**(9) `0x5c0f30 initTeams`（4B，账本 OK）**
```cpp
int MultiplayerGameMode::initTeams()
{
        return (int)(-1);
}
```
- 二进制 `83 c8 ff c3` = `or eax,-1; ret`。body 忠实；名字 `initTeams` 与「返回 -1」矛盾。40 件里语义 F 之一。

**(10) `0x4ca160` / `0x50e370` / `0x681100` / `0x746d80` / `0x759f70` / `0x425270` / `0x557b00`（裸 `this + N`）**
```cpp
int AbstractClass::GetType()        { return (int)(*((unsigned int *)this + 22)); }
int AbstractClass::checkPassability(){ return (int)(*((unsigned int *)this + 12)); }
char * LoadOptions::GetData()       { return (char *)((char *)this + 264); }
char FootClass::updateScanRange()   { return (char)(*((unsigned char *)this + 1760)); }
int MovieClass::GetWidth()          { return (int)(*((unsigned int *)this + 326)); }
void VtableStub::Method_425270()    { *((unsigned char *)this + 414) = 0; }
int ListClass::GetItemCount()       { return (int)(*((unsigned int *)this + 91)); }
```
- 这 7 件全部 checker `R4 ptr+int + cast-ptr+int` 违规（14 个 violation），账本仍 OK。原因：hpp 壳没有该偏移的成员，生成器宁可用裸偏移也不发明成员/不判 NG。**这是「字节优先于规则」的最直接机制证据。**

**(11) `0x634800 sub_634800`（4B，账本 OK，唯一 R3 member-pun）**
```cpp
return (char *)((char *)&this->attachedBomb);
```
- 二进制是 `lea eax,[ecx+off]; ret`；返回成员地址。C++ 可写 `return (char*)&this->attachedBomb;`，但 checker 判 R3 member-pun，账本 OK。说明 R3 违规也不阻断 MATCH。

### 4.2 规则红旗与 checker 盲区

- 重跑 checker：**账本 rv 与重跑结果逐件一致**（40/40），说明记录没有造假；问题是 **gate 不消费这个结果**。
- 池级 43 件违规构成：`R4 ptr+int` 42 + `R4 cast-ptr+int` 42（同一 `this+N` 双计）+ `R3 member-pun` 1。
- **checker 盲区（实证）**：`0x408520` 的 `(Queue *)(&this->field)` 不被 member-pun 正则命中（正则要求 `) &` 紧邻，实际是 `)(&`），因此该函数记录 rv=0，但人工按 R3 精神应判违规。类似变体在全池可能还有，43 是**下界**，不是上界。
- R1/R2/R5/R6 手查：
  - R1（符号只在 hpp）：40 件 cpp 无文件作用域新类型/新全局；sample 全过。
  - R2（cpp/hpp 同名）：40/40 同名（mirror 为独立 TU，按设计豁免）。
  - R5（局部最小作用域）：40 件 OK 基本无局部；**NG 复杂件明显退化**（`0x7c81db` 22 个前置声明、`0x5865f0` 9 个、`0x65a820` 8 个）。
  - R6（零 stub + 必须编译）：OK 40/40 有 obj；NG 20/20 有编译产物（1 件在 HEAD 上已 C2664，见 §5.4）。

### 4.3 形态红旗（cc/signedness）

- 无「cc 与二进制证据相反」的样本：ECX 读 → thiscall；`retn N` → stdcall；ECX+EDX → fastcall；全部一致。
- 但有 **模型选择 vs 二进制证明** 的缺口：
  - 池级 199/424（46.9%）常量返回：没有 ECX、没有 retn，this/free 从二进制不可区分；生成器按 registry 类归属选 thiscall 成员。
  - 23/424（5.4%）只有 `retn N`：能证明 callee-clean，不能证明「this 在 ECX」；样本 `0x4b4c60`（proto stdcall → 生成 thiscall 成员）即此类。
  - 20/424（4.7%）proto `__stdcall` → 生成 thiscall 成员；body 全部忽略 this，ABI 等价，但 API 语义（显式 this vs 隐式 this）是模型选择。
  - 8/424 proto `__thiscall` → 生成 `__stdcall`（WebBrowser 7 + 1），这是**正确的纠正**：二进制 `retn 4/8/0x14` 证明 stdcall，IDA proto 错。
- signedness/返回宽度：15/424 返回类型类别与 proto 不一致。多数是合法的字节忠实收窄（`bool`/`unsigned char`），但 `0x51faf0 ptr→int`、`0x6241c0 Release→char`、`0x69bbe0 GetGameSpeed→char` 属于「字节驱动、域可疑」。
- 样本 `0x4886a0` 的 `char`（signed）vs `Image`（unsigned int）收窄：二进制只写 AL，`char` 与 `unsigned char` 都会 MATCH，生成器选了 signed char——signedness 选择没有域证据，属任意选择。

### 4.4 可读性红旗（hpp 壳与命名）

- hpp 是 `hpp_pilot.py` 生成的 **stand-in 壳**，不是真实类布局。抽样 39 个 unit 的 hpp：**90 个成员，56 个 `__pad_*`（62.2%）**，15 个 `mNNN/qNNN` 偏移名，19 个语义名；语义名中至少 8 个与函数域冲突。
- 实证片段（hpp）：
```cpp
// BombClass.hpp
char __pad_000[48];
int audioController[1];  /* element view */  // 0x030
char __pad_034[40];

// CellClass.hpp
char __pad_000[28];
BuildingTypeClass * rubble;  // 0x01C
char __pad_020[296];

// TechnoClass.hpp
char __pad_000[52];
void * attachedTag;  // 0x034
char __pad_038[1256];

// ShpButtonClass.hpp
char __pad_000[28];
unsigned int Image;  // 0x01C

// InfantryClass.hpp（IDA proto 是 InfantryTypeClass*）
char __pad_000[1728];
unsigned int Type;  // 0x6C0
```
- 这些成员名让 body「看起来像 C++」（`this->audioController[0]`、`this->rubble`），但域语义不可信。**可读性低不是翻译器排版问题，是壳/注册表的命名来源问题。**
- **union 视图**：456 个抽样 hpp 中 **49 个含 union**（`hpp_pilot` 的多证据视图），例如：
```cpp
union {  // multi-evidence view @0x07C
    short sensorsOfHouses[24];
    int sensorsOfHouses_dword;
};
```
  - 这不是 body 层 `union` 越狱（body 0 例），而是**壳层布局冲突的妥协**：同一偏移有两种宽度证据时，用 union 同时满足。六规则不禁止 hpp union，但它意味着「类布局不是单一权威模型」。
- 魔法数字：`0x602ae0` 的 18 个对话框 ID（293/231/278/…）直接以裸常量出现；`0x7bab70` 的 10 个参数；4–6B 常量返回的 450/12/1776 等。对 thunk 而言这些是值本身，不算异常；对 161B 函数则是可读性 F。

### 4.5 越狱/奇怪写法扫描（全量文本扫描）

| 模式 | OK cpp | 说明 |
|---|---:|---|
| `__asm` | **0 / 245 文件** | 无 inline asm |
| `#pragma` | **0 / 245** | 无 pragma |
| body `union` | **0 / 245** | 无 body 层 union |
| `goto LABEL_` | **0 / 245** | OK 池无 goto（因为无复杂控制流） |
| `if (...) ;` | **0 / 245** | OK 池无空 if |
| hpp `union` | **49 / 456 hpp** | 壳层多证据视图（见 §4.4），非 body 越狱 |

「刻意奇怪写法」清单（OK）：
1. `this == (Dialog *)293 || …`（`0x602ae0`）
2. `(int)(this->Type)`，成员本是指针（`0x51faf0`）
3. `(Queue *)(&this->field)` 成员地址类型双关（`0x408520`）
4. `*&this->attached3 > 0`（`0x4722c0` mirror）
5. `char __stdcall ... (int p0…p9)` 十个虚构参数（`0x7bab70`）
6. `char Release() { return (char)(this->m008); }`（`0x6241c0`）
7. `(char *)((char *)&this->attachedBomb)`（`0x634800`，R3）

NG 池的「怪异写法」更多（见 §5），但那是 NG，不是 MATCH。

---

## 5. 反向抽样：20 件 NG 是否仍是完整实现

### 5.1 完整性表（全部真实读 body）

| # | addr | 病理 | 函数 | 行 | 语句; | if | loop | 完整性 | 备注 |
|---|------|------|------|----|-------|----|------|--------|------|
| 1 | `0x405c00` | branch_polarity | `AudioFileClass::Release` | 63 | 36 | 7 | 2 | P | 完整；大量 raw this/offset |
| 2 | `0x526960` | branch_polarity | `INIClass::GetKeyCount` | 60 | 32 | 8 | 0 | P | 完整；goto 6 处 |
| 3 | `0x48b570` | branch_order | `PacketQueue::ExtractEntry` | 46 | 26 | 5 | 1 | P | 完整；36*idx 表达式重复 14 次 |
| 4 | `0x565b00` | branch_order | `MapClass::FreeAllCells` | 35 | 21 | 3 | 3 | P | 完整；两段循环清晰（较好的 NG） |
| 5 | `0x499860` | codegen_shape | `RLEBlitTransLucent50AlphaZReadWrite_ushort::AddRef` | 104 | 51 | 11 | 3 | P | 完整 RLE/alpha blit 主逻辑 |
| 6 | `0x448070` | codegen_shape | `AnimClass::updateAnimation` | 73 | 35 | 11 | 1 | P | 完整；goto 7 处；`if(p0);` |
| 7 | `0x42e820` | frame_sched | `BridgeClass::GetCellData` | 79 | 42 | 10 | 4 | P | 完整；short[2] 当 dword 用 |
| 8 | `0x472160` | frame_sched | `CaptureManagerClass::DrawLinks` | 92 | 56 | 9 | 1 | P | 完整；`v2=v1` 未初始化；varargs `...` 丢失但保留 va_start |
| 9 | `0x7c81db` | regalloc | `AudioCodec::Decode` | 176 | 90 | 19 | 2 | P | 完整 LZ 解码器（语义最完整的一件） |
| 10 | `0x4863d0` | regalloc | `CellLand::IsBuildable` | 123 | 36 | 27 | 0 | P | 完整；27 个 if 链 |
| 11 | `0x7b0f50` | const_fold | `NetworkOptions::ApplySettings` | 45 | 16 | 4 | 0 | P | 完整；sprintf 用 6 个未初始化局部 |
| 12 | `0x5865f0` | const_fold | `CellClass::SpiralFindClosest` | 45 | 26 | 4 | 2 | P | 完整；raw pointer arithmetic |
| 13 | `0x75f140` | extern_reloc | `Voxel::loadSectionData` | 29 | 27 | 0 | 0 | P | 完整；纯字段写 + vtable 调用 |
| 14 | `0x475610` | extern_reloc | `INIClass::SetHouseName` | 29 | 13 | 4 | 0 | P | 完整；goto 4 处；strcpy 逻辑完整 |
| 15 | `0x4766f0` | width_mismatch | `ScenarioClass::SaveTypeNameListToINI` | 23 | 13 | 2 | 2 | P | 完整；width 不匹配 |
| 16 | `0x726900` | width_mismatch | `TActionClass::executeDetonateAction` | 3 | 1 | 0 | 0 | P | 完整（单表达式）；4B 指针写 vs 1B 字节写 |
| 17 | `0x56d100` | signedness | `MapSeed::CheckTileMatch` | 34 | 17 | 3 | 0 | P | 完整；`jg` vs `ja` |
| 18 | `0x5176a0` | ret_norm | `InfantryClass::SetField6` | 3 | 1 | 0 | 0 | P | 完整（单表达式）；`not al` vs `not eax` |
| 19 | `0x65a820` | cc_mismatch | `ObjectClass::ProcessGroupInput` | 91 | 42 | 13 | 3 | P | 完整；逗号运算符令 if 取 this/p0 低字节；v13 可能未初始化；重复 return |
| 20 | `0x4c9220` | eval_order | `FacingClass::Update` | 77 | 45 | 9 | 0 | P | 完整；`result` 未初始化使用；掩码拼接 |

**20/20 完整实现，0 TODO/0 空体。** 89 个可抽取的 NG body 全扫：0 空体、0 TODO、32 个单 return（都是忠实 getter/stub）。**「NG ≠ stub」的架构主张成立。**

### 5.2 NG 的完整性与质量是两件事（红旗片段）

**(1) `0x472160 CaptureManagerClass::DrawLinks` — 读未初始化局部**
```cpp
int v1;
int v2;
v2 = v1;                       // v1 未初始化
v3 = *(unsigned int *)(v1 + 72);
...
int v20;
v20 = (v20 & ~0xFF) | ...;     // v20 未初始化
```
当前 HEAD 重建的 era cl 输出（实证）：
```
CaptureManagerClass.cpp(12) : warning C4700: local variable 'v1' used without having been initialized
CaptureManagerClass.cpp(71) : warning C4700: local variable 'v19' used without having been initialized
... 'v18' / 'v17' / 'v16' / 'v21' / 'retaddr'
```
并且 IDA proto 是 **varargs**（`char DrawLinks(CaptureManagerClass *this, ...)`），生成签名却丢了 `...`（`char DrawLinks(int p0)`），body 仍保留 `va_list va; va_start(va, p0);` —— 这是**签名/类型丢失**，不是一句「丑」。`retaddr` 也是未初始化局部。

**(2) `0x4c9220 FacingClass::Update` — `result` 未初始化**
```cpp
int result;
result = (result & ~0xFF) | ((*(unsigned short *)this) & 0xFF);
```
```
FacingClass.cpp(79) : warning C4700: local variable 'v15' used without having been initialized
```
（`result` 的首个使用读自身；`v15` 在返回路径上未初始化。）

**(3) `0x7b0f50 NetworkOptions::ApplySettings` — sprintf 用未初始化局部**
```cpp
unsigned char v8, v9, v10, v11, v12;
int v13;
sprintf(Buffer, "?? ?? ?? ?? : %02x %02x ...", v8, v9, v10, v11, v12, (unsigned char)v13);
```
```
NetworkOptions.cpp(26) : warning C4700: local variable 'v13' used without having been initialized
... v12 / v11 / v10 / v9 / v8
```
（6 个未初始化读；编译器警告，不阻断。）

**(4) `0x448070 AnimClass::updateAnimation` — 空 if 丢语句**
```cpp
LABEL_15:
      if ( p0 );
        *(unsigned char *)(v9 + 979) = 0;
```
`if (p0);` 是**空语句**。伪码原本是 `if (a2) { *(BYTE*)(v9+979)=0; LABEL_17: *(BYTE*)(this+979)=1; }`；生成物把大括号块拆成「空 if + 无条件写 + LABEL_17 + 无条件写」，**条件语义丢失**（R5 报告 F2 的 `_rebuild` 丢 `{}` 同族）。这不是 stub，但控制流语义被改变了。

**(5) `0x65a820 ObjectClass::ProcessGroupInput` — 逗号运算符丢实参 + 无界循环 + 重复 return**
```cpp
if ( !(unsigned char)((Object *)(*(Object **)(p0 + 540))->IsAlliedWithObjectHouse(), this) )
    return 10;
...
while ( *v13 != p0 ) { ++v12; }   // v13 只在 v11>0 时赋值；无上界
...
return 1;
return ((ObjectClass *)(this))->ProcessInputKey();   // 不可达重复 return
```
- 逗号表达式 `(call, this)` / `(call, p0)` 使 `if` 条件取 **`this` / `p0` 的低字节**，`IsAlliedWithObjectHouse()` 的返回值被丢弃——这已经不是「丑」，是控制流语义错误；`while ( *v13 != p0 ) { ++v12; }` 在 `v11<=0` 时读未初始化 `v13`，且循环体不推进 `v13`（推进在另一个分支），可能死循环。**完整但 UB + 语义错误。**
- 用 HEAD 重建时该件已变成 `C2664` COMPILE_FAIL（见 §5.4）。

**(6) `0x42e820 BridgeClass::GetCellData` — 把 short[2] 当 dword**
```cpp
short v20[2];
*(unsigned int *)v20 = v3[1];
```
（用 `short[2]` 承载一个 dword；严格别名/对齐双违规。）

**(7) `0x726900 TActionClass::executeDetonateAction` — 宽度错误**
```cpp
void TActionClass::executeDetonateAction()
{
        this->TActionClass_field_44 = (AbstractClass *)(0);
}
```
原二进制 `mov byte ptr [ecx+0x44], 0`（1B 写）；生成的是 4B 指针写。完整，但类型/宽度错（这就是 width_mismatch 病理）。

**(8) `0x56d100 MapSeed::CheckTileMatch` — signedness 错**
```cpp
bool v12 = v11 + v10 > *(int *)&((char *)g_Cell_PositionLUT)[0] ...
```
原二进制用 `jg`（有符号）；生成用 `>` 于 `int`，最终汇编 `ja`（无符号）。完整，但 signedness 与二进制不一致。

### 5.3 「完整」不等于「正确」

- 20/20 有真实控制流/调用/循环（除 2 件单表达式）；但没有一件是「可合并回 src/ 的生产级 C++」。
- 主要质量债：raw `this+N`（49 个 NG 有 R3/R4 违规，最多 72）、goto（9/20）、未初始化局部（4/20）、类型双关（2/20）、宽度/符号错（3/20）、逗号表达式/va_start 误用（2/20）。
- 这证明「零 stub」规则**确实被执行**（没有 TODO/空体），但也证明**「完整」只保证语句存在，不保证语义正确**。

### 5.4 当前 HEAD 重建的漂移（证据）

- 8 件 OK fresh 重建（`0x401940/0x4ca160/0x602ae0/0x55ab70/0x51faf0/0x6241c0/0x5d6310/0x486380`）：body 与归档产物一致（`0x486380` 仅多一个等价 cast），OK 结论不变。
- 6 件 NG fresh 重建：5 件复现；**`0x65a820` 在 HEAD 上已 `C2664`（IsAlliedWithObjectHouse 参数类型）**，与 r4 产物（MISMATCH、编译过）不一致。
- 含义：ledger/artifact 是**时间点快照**，不是 HEAD 可复现的当前行为；对 OK 的小函数影响小（8/8 复现），对 NG 复杂件有漂移（1/6）。

---

## 6. 机制根因（为什么字节优先会牺牲 C++）

### 6.1 门禁：MATCH 只看字节，checker 结果不参与判定

`tools/decomp_sys/batch_run.py`（实证）：
```python
rep = checker.check_function(...)
r["rule_violations"] = len(rep.violations)
if rep.violations:
    check_viol += 1
    r["note"] = (r["note"] or "") + "rule:%s" % rep.violations[0]["pattern"]
```
—— 只记录，不 gate。随后：
```python
ok, first = dmod.compare(sa, sb, verbose=False)
...
if ok:
    r.update(verdict="MATCH", note="%dB" % orig_art["size"])
else:
    r.update(verdict="MISMATCH", ...)
```
—— **verdict 只由 `ok`（字节 diff）决定**。`decompile.py` 里 `[check] FAIL` 也只影响退出码（`all_ok`），不影响 emit/compile。

**实证复现**（当前 HEAD）：
```
[check] FAIL 0x004CA160 0/0 restored; 2 violations
[era] AbstractClass rc=0
```
—— check FAIL，仍然编译、仍然可入账 OK。

### 6.2 类型层：IDA proto + registry 类型被原样接受

- `0x602ae0`：IDA proto = `int __thiscall(Dialog *this)` → 生成器生成 `Dialog::IsSpecialTemplate()` → `this == (Dialog*)293`。**checker PASS、编译 rc=0**（实证）。
- `0x51faf0`：IDA proto 返回 `InfantryTypeClass*`，registry/壳把成员 `Type` 定为 `unsigned int`，方法返回 `int`；生成器按 registry 走，类型信息丢失。
- `0x7bab70`：IDA 从 `retn 0x2C` 反推 10 个参数 → 生成器照抄 → 虚构 API。

**结论**：生成器对伪码是忠实的；C++ 语义错误主要来自**上游 proto/registry 的类型/签名**，而字节 gate 不会质疑它们。

### 6.3 成员供给：没有成员 → 裸 `this + N` 也放行

- `hpp_pilot` 壳只声明「该 unit 观测到的 offset」；当函数访问的 offset 没有成员证据时，`pass_member_shapes` 保留 `this + N`。
- checker 会报 R4，但（6.1）不 gate → 43 件 OK 带违规。
- 这是「规则合规」与「字节匹配」之间的**直接 trade-off**：要么不发明成员（保持 R3/R4 干净但编译失败/无法表达），要么用裸偏移（字节过、规则不过）。当前选择是后者，且把 OK 给了它。

### 6.4 返回宽度/符号：ret_norm 修复的副作用

- 早期 `0x6241c0` / `0x5d6310` 是 `ret_norm` MISMATCH（ORIG `mov al,...` / OURS `push ecx` + int 返回）。修复方式是**把返回类型收窄为 `char`**，从而 AL 匹配、MATCH。
- 这是典型的「字节驱动的 C++ 类型选择」：类型选择服从寄存器宽度，不服从 API 域。对 bool/uchar getter 是正确的；对 `Release`/`GetGameSpeed` 这类命名 API 则是语义妥协。
- 同样地，`signedness` 在只有 AL 写时不可区分 `char` vs `unsigned char`，生成器按 registry 选 signed，无域证据。

### 6.5 选择偏差：OK 池由 4–6B thunk 组成

- 400 件主批 265 MATCH：200 ≤6B + 65 7–20B + 0 ≥21B。
- 全池 425 OK：352 ≤6B + 71 7–20B + 1 161B；254 常量返回，仅 4 件 >1 语句。
- 因此「MATCH 率」主要衡量的是「常量/单字段函数是否逐字节一致」，**不衡量 C++ 语义**。字节优先不是把复杂函数翻坏，而是**把复杂函数挡在指标之外**。

### 6.6 账本卫生

- 账本只存 `status/note/attempts/first_diff`，不存：生成批次/commit、`rule_violations`、`emitted` vs `name`、cc/返回类型、产物 hash。
- **423/425 的 OK note 都是 `decomp_batch r2: MATCH`**，即使产物实际来自 r3_400 / r4 / r5 / r7 / r8 或 mirror；账本无法回答「这个 OK 是哪版工具生成的」。
- 结果：OK 有 100 件类名漂移、115 件 emitted 名漂移、43 件规则违规，账本都看不出来；`0x4072c0` OK 但没有产物。
- 账本的时间点快照与 HEAD 会漂移（§5.4），但没有 re-verify 机制。

---

## 7. 结论：字节优先级是否系统性损害 C++ 质量？程度如何？

### 7.1 分层回答

**A. 表达式/控制流翻译层：没有系统性损害。**
39/39 的 decompile MATCH body 与 Hex-Rays 表达式一致（第 40 件是 mirror，由 src 重写、语义等价）；20/20 NG body 也是完整实现。生成器不是「为了字节随意改写表达式」；它忠实地渲染伪码。**红旗中的 `this == (Dialog*)293` 也原样出现在伪码里**——不是 codegen 发明的。

**B. 类型/签名层：有系统性损害，但规模有限、可定位。**
- 43/424 OK 带 R3/R4 违规（10.1%），全部源于「没有成员就裸偏移」；
- 15/424 返回类型与 proto 类别不一致（3.5%），其中 1 件 ptr→int、若干 int→char 是字节驱动；
- 20/424 proto stdcall→thiscall 成员、23/424 只有 retn 证据；cc 选择对 52.4% 的 OK 函数是模型选择而非二进制证明；
- 1 件 161B 实质函数语义荒谬，1 件 10 参数虚构 API，若干件名/值矛盾。
这些是**真实、可复现**的 C++ 质量损失，且都发生在 OK 池（被标成完成）。

**C. 度量/身份层：系统性损害，程度严重。**
- OK 池 60% 常量返回、36.6% 单字段、仅 4 件 >1 语句、仅 1 件 >20B；
- 23.6% 类归属漂移、27.1% 名字漂移、63.7% 占位命名；
- 因此 **「OK」不能作为「C++ 完成/正确」的信号**。这不是个别函数问题，是度量定义问题。

**D. 复杂逻辑：尚未被字节优先伤害，但风险是潜在的。**
- 复杂函数全在 NG；NG 的质量债（未初始化局部、goto、raw offset、宽度错）已经存在。
- 如果下一步把 NG 的复杂函数「打到 MATCH」，而 gate 仍是字节-only，那么 6.1–6.4 的机制会同样作用于它们：**分析预期：会以类型擦除/裸偏移/返回宽度/虚构参数换取字节**。这是高风险，不是现状。

### 7.2 程度评级

| 维度 | 现状 | 评级 |
|---|---|---|
| 表达式忠实度 | 40/40 与伪码/源语义一致 | 好 |
| OK 池规则合规 | 43/424 违规（10.1%） | 中 |
| OK 池类型/签名可信度 | 15 返回类型不一致、20 cc 模型选择、1 ptr→int | 中 |
| OK 池身份/命名可信度 | 100 类漂移 / 115 名漂移 / 270 占位 | 差 |
| OK 池语义正确性（实质函数） | 唯一 161B 函数语义 F | 差 |
| OK 池作为「完成」信号 | 99.8% 无实质逻辑 | **不可用** |
| NG 完整性（非 stub） | 20/20 完整 | 好 |
| NG 质量（可合并性） | UB/goto/raw offset 普遍 | 差 |

**总体：中等损害、高危趋势。** 若把 OK 当「已完成、可合并」，现状会系统性地把 10.1% 规则违规、23.6% 身份错误和 63.7% 占位命名带进下一阶段；若把 OK 仅当「字节层回归样本」，损害可控，但必须补语义/规则门禁。

---

## 8. 改进建议（按杠杆排序）

1. **把规则与类型门禁并入 MATCH 判定（最高杠杆）**
   - `MATCH_CLEAN = 字节 MATCH && rule_violations == 0 && 无语义红旗`；账本增加 `clean` 字段，OK 拆成 `OK_MATCH` / `OK_CLEAN`。
   - 当前 `rule_violations` 已记录，只差一行 gate；不会增加生成成本。

2. **新增「语义合理性」静态检查（低成本、高命中）**
   - `this` 与小整数（< 0x10000）比较 → 标记 `this-as-id`（`0x602ae0`）。
   - 指针成员/返回被 cast 成 `int`（`0x51faf0`、`0x48ba80`）→ 标记 `ptr-erasure`。
   - 函数名 vs body 返回值矛盾（`ReturnZero` → 非零、`init*` → -1）→ 标记 `name-value-mismatch`。
   - 这些规则在 40 件里可命中 3 个语义 F 中的 3 个，在池级可命中至少 2 件 ptr→int、多件常量名矛盾。

3. **成员供给：没有成员就不要用裸偏移换 MATCH**
   - 无成员证据的 offset → 不 emit `this + N`，而是 `UNRESOLVED_MEMBER` + NG/占位；或从 `class_layouts` 生成具名占位成员（`fieldAt0xNN` 不可接受，应按 registry 证据）。
   - 这样 43 件规则违规会变成 NG/待补，而不是 OK。

4. **返回类型/符号记录 provenance**
   - 每个方法记录：IDA proto 返回类型、registry 返回类型、二进制返回寄存器证据（AL/AX/EAX）、选择理由。
   - `bool`/`unsigned char` 谓词优先；`char` 仅在有符号证据时使用；`ptr→int` 必须显式 `reinterpret` 审计标记。
   - 对 `Release`/`GetGameSpeed` 这类命名 API，增加「返回宽度窄于名称域」警告。

5. **cc 选择记录证据等级**
   - `ECX-read`（强）/`retn-only`（中）/`const-unobservable`（弱）/`proto-divergence`（需理由）。
   - 20 件 proto stdcall→member 要么补 IDA proto 纠正记录，要么改用 free stdcall；至少让账本可见。

6. **账本卫生与 re-verify**
   - 记录生成批次、commit、产物路径/hash、`emitted`、`rule_violations`、返回类型。
   - 对 OK 池做定期 fresh re-run（本次 8/8 OK 复现，说明成本低）；NG 复杂件要记录漂移（`0x65a820` 已 CF）。
   - `0x4072c0` 无产物，应降级/补产物。

7. **度量口径**
   - 报告 MATCH 率必须按尺寸分层：≤6B / 7–20B / 21–120B / >120B；把 ≤6B thunk 排除出「C++ 质量」 headline。
   - 对 21B+ 的函数设独立 target（当前 OK 池 >20B = 1 件）；否则 MATCH 率永远是 60% 常量 thunk 的游戏。

8. **复杂函数的 UB 门禁**
   - 把 `C4700`（未初始化局部）提升为 fail-closed（至少对 OK_CLEAN），或在 emit 前用静态扫描标记；当前 `0x472160` 7 个 C4700 仍编译/可入账。
   - `if (...);`、逗号表达式丢实参、`va_start` 非 varargs 应进 checker。

9. **hpp 壳命名 provenance**
   - 成员名来自 registry 时标注来源/置信度；当成员名与函数名域冲突时输出 warning（`audioController` vs `IsDeathBomb`、`rubble` vs `GetBridgeIndex`）。
   - 49/456 hpp 的 union 视图应记录「多证据冲突」原因，避免被当成单一权威布局。

---

## 9. 复现与工件

- 审计脚本/数据（新建，未改工具/生成物）：`.omo/audit/`
  - `build_index.py` → `index.json`（账本 OK → 产物索引）
  - `extract_samples.py` → `samples.json`（40 OK + 20 NG 的 body/伪码/hpp/字节）
  - `verify_samples.py` → `verify.json`（重跑 checker、字节对比、hpp 统计）
  - `cc_audit.py` → `cc_rows.json`（全池 cc/符号/返回类型证据）
  - `ng_stub_scan.py` → `ng_scan.json`（NG 空体/TODO/单 return 扫描）
  - `gen_tables.py`（40 件五维表生成）
- Fresh 重建（审计临时目录，不污染生成树）：
  - `.omo/audit/rebuild/`（`0x401940`, `0x4ca160`）
  - `.omo/audit/rebuild2/`（`0x602ae0`, `0x55ab70`, `0x51faf0`）
  - `.omo/audit/rebuild3/`（`0x448070`, `0x472160`）
  - `.omo/audit/rebuild4/`（`0x4c9220`, `0x7b0f50`, `0x65a820`, `0x42e820`）
  - `.omo/audit/rebuild5/`（`0x6241c0`, `0x5d6310`, `0x486380`）
- 复现命令：
```bash
python .omo/audit/build_index.py
python .omo/audit/extract_samples.py
python .omo/audit/verify_samples.py
python .omo/audit/cc_audit.py
python .omo/audit/ng_stub_scan.py
python .omo/audit/gen_tables.py
# 单件 fresh 重建（示例）
python tools/decomp_sys/decompile.py 0x4ca160 --out .omo/audit/rebuild
```
- 关键原始证据位置：
  - `0x602ae0`：`.omo/decomp_batch/r5_regression_final/p09/part_00/Dialog.cpp`；伪码 `decompile-results/full_export/src/Dialog.cpp:1761+`
  - `0x4ca160`：`.omo/decomp_batch/r5_regression_final/p04/part_00/AbstractClass.cpp`
  - `0x51faf0`：`.omo/decomp_batch/r5_regression_final/p05/part_00/InfantryClass.cpp`
  - `0x6241c0`：`.omo/decomp_batch/r5_regression_final/p09/part_00/SimpleDialogControl_OwnerDraw.cpp`
  - `0x7bab70`：`.omo/decomp_batch/r7_fix331/p15/part_00/XSurface.cpp`
  - `0x472160` C4700：`.omo/audit/rebuild3` 的 cl 输出（本报告 §5.2 已贴）

---

## 10. 局限与证据分级

- **抽样偏向**：40 件 OK 是缺陷富集抽样（rv>0 占 20% vs 池级 10.1%；>8B 占 10% vs 池级 0.7%）；不能把 40 件的 P/W/F 比例外推为池级比例。池级比例用全量扫描（§2.3）与全量 body 组成（§2.2）给出。
- **语义判断**：P/W/F 中的「名/成员域冲突」很多只能判「不可验证」而非「错」；本报告把「body 与伪码一致但命名可疑」记为 W，不记为 F，以避免把推断当实证。
- **IDA proto 可能本身就是错的**：`0x602ae0` 的 `this` 是 IDA 推断；生成器忠实执行了错误 proto。根因在 proto/registry 层，不在表达式翻译层。
- **产物时间点**：ledger 是 2026-11-11 16:36 的快照；r8 probes 之后 HEAD 有漂移（`0x65a820` 已 CF）。本报告的池级统计基于归档产物；fresh 重建用于验证结论仍可复现（8/8 OK，5/6 NG）。
- **1 件 OK 无产物**：`0x4072c0` 只能按账本记录，未纳入 40 件。
- **checker 覆盖**：`checker.py` 只实现 R3/R4；R1/R2/R5/R6 是人工/编译验证，不是自动 gate。43 件违规是**下界**（`0x408520` 的 `(T*)(&this->m)` 变体未被正则捕获）。

---

## 11. 最终判断

- **「匹配但 C++ 语义可疑」确实存在**：40 件里 3 件语义 F、18 件 W；池级 43 件规则违规、100 件类归属漂移、1 件实质函数语义荒谬。
- **但字节优先没有把复杂 C++ 翻译坏**：40/40 body 与伪码/源语义一致，NG 20/20 完整；真正的复杂逻辑在 NG，不在 OK。
- **系统性损害在「门禁/度量/身份」层**：MATCH 只看字节，rule/type/identity/name 全部不 gate；OK 池 99.8% 无实质逻辑，因此 OK 作为「完成」信号不可用。
- **程度：当前中等，趋势高危。** 如果只把 OK 当字节回归样本，可继续用；如果把它当 C++ 完成度，必须先实施 §8 的 1–3 条（规则 gate、语义红旗、成员供给），否则下一阶段会把 10.1% 规则违规和 23.6% 身份错误带入集成。
