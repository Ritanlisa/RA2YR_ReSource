# G22 准备工作包（吞吐优先定稿，2026-09-18）

> 背景审计（用户判定：G21 真实工作量太少——数据成立）：
> **G18→G21 四会话净增仅 +16**（11,695→11,711，复位后口径），会话容量被
> 考古/裁决/口径维护占满；**六大解锁线（E1 ~351 / W0b ~300-550 / C #56 65 /
> H3r ~100 / H6 ~124 / P3 批量，合计 pending 的 20%+ 当量）连续四会话排
> "时间富余"档从未执行**；六个裁决包（W0b、CRT、#114、B 五项、#125、#128）
> 悬而未决持续阻塞。当前态：completed **11,711** / pending **4,813**；HEAD
> `a739d3d1`；readiness READY。本文件改**配额制**：批量解锁线为首要产出，
> H5 手动降为填充档。

## 吞吐配额制（G22 起执行纪律）

1. 每会话**首要产出 = ≥1 条批量解锁线**（B1-B5 择一，见下），完成前不做 H5 手动；
2. H5 手动只作配额填充（批量线完成后的余量）；
3. roadmap 日志**首行记净增 completed**，单会话 <15 须归因（考古类产出单独折算）；
4. 裁决依赖项一律走 **D1 裁决集中包**通道（一次提交用户单次拍板），不再逐会话散提。

## G21 审计表（计划 14 线 vs 实际）

| 计划线 | 状态 | 说明 |
|---|---|---|
| L5 #123 | ✅ | 签名手术 6 处 + 重翻一次过 |
| L6 draw\* 族 | ✅✅ | 8/8 翻译 + radbeam.hpp 重建 + 三方真值化 + 新方法论（最大单项，高价值） |
| L7 | ◐ | #126 纠正（移交 #128）+ #127 永久跳过；**#125 未动** |
| P2 H5 | ◐ | **仅 ×1**（0x521320）；余 11（fresh 扫描） |
| L3 #114 / A CRT / B 裁决包 / C #56 / E P4 | ✗ | 全未动 |
| D 零散债 | ◐ | #94/0x750041 过时关闭；#60 ×12 / #62 ×8 未动 |
| E1 / W0b / P3 / H6 / H7 / H3r | ✗ | 全未动（P3 仅 bonus 考古 0x6FC0B0 + 槽 444） |
| 小项清偿 | ◐ | 口径差已关闭（准备轮）；余 2 项 |

净产出 **+10**（L6 族 8 + L5 1 + H5 1）；bonus 考古：0x6FC0B0 = TechnoClass 级
GetFireError 基类版（400 行公共开火裁决，误名 ReadINI）+ 槽 444=GetCellCoords。

---

## B1 — E1 全局命名轮【首位，纯执行无裁决】

- 存量：#67-#71 五区 ~335 函数 + #57 ×16 + **#128 三全局并入**
  （0xA8E34C/0xA8E358/0xA8E348 = InfantryTypes DynamicVectorClass 字段）。
- 范式：G5 DataGlobal 批产（10,744 条先例）；live 提取 offset↔语义 →
  signals.globals + e4_globals.hpp 生成器侧双落盘。
- 解锁：e4 地址桶 + #126/#128 的 InfantryTypes 命名 → 量级 **~350 函数回舰队候选**。
- 材料：docs/g18_prep.md 扩容节 E1 条目。

## B2 — P3 vtable 审计批量

- rtti_hierarchy 扩 108 表（0.5 会话，解锁审计面翻倍）；
- TeleportLocomotionClass 362 槽相邻表整体误归属个案；
- **0x6FC0B0 GetFireError 族续查**（G21 bonus 铁证：TechnoClass 级基类版 400 行，
  误名 TriggerTypeClass::ReadINI——同族误名普查）；
- 每会话 5-10 表配额。

## B3 — H3r 机械 Fry 重盘执行（~100）

- free-this 46 / IDA-ism 24 / broken-arrow 31（G14 live 口径，需重扫）；
- sigfix/defix 脚本化批产 + live 重取；**纯机械无裁决**。

## B4 — H6 ternary 词汇专项（~124）

- 逐形态算术化，每形态 20 块试点 PASS≥60% 推广，否则转 H5 手动。

## B5 — C #56 签名再物化（65 函数）

- E3 丢 this/参数的自由函数签名，gen_e4_materialize 补参再物化（生成器层，
  hpp+cpp 同步；与 W0b 同族不同文件，无需裁决——物料清单在 issue #56）。

## D1 — 裁决集中包（✅ 2026-09-18 用户授权自行裁决，六项全部定谳）

> 授权记录：用户指令"你先把6个裁决自行完成了"。以下为证据based裁决 + 执行排程。

### 裁决 1 — W0b gap2 重生成：采 **(a) 重生成补 ECX 参数**

- 依据：gap2 defs 本已是合成类成员形态（`Gap2Recv_XXXXXX::Method`），C2355 实证
  def 侧丢了成员语境；(a) 是生成器层机械修复（def 签名按 IDA 原型补全），立刻
  解锁 535 个"栈参齐全"函数；(b) 迁真类方法桶需 551 个 owner 归属考古，收益
  后置——**转 E2 语义优化轮**（非阻塞）。
- 执行：gen_gap2_defs.py 补 ECX → hpp+cpp 同步重生成 → 舰队直驱（G22 B 线首位）。

### 裁决 2 — CRT/COM 桶：采 **分治——(b) 排除台账先行 + (a) 定义跟进**

- 依据：桶内两性质不同。**语言不可表达类**（memcpy/_alloca_probe 的 inline asm
  跳表、_CIpow/pow 的 x87 寄存器传参、strchr 的 goto 中块着陆）→ **(b) 排除
  台账**（tracked 池永久豁免，逐函数记录理由）；**可表达类**（fclose/fflush/
  sprintf 的 FILE 结构、RTTI helper 的 PMD/TypeDescriptor、CRT locale/heap 全局）
  → **(a) header pipeline 补定义后真翻**（逼近 M4 = 0 的口径完整性）。
- 执行：排除台账 0.5 会话先行；FILE/_iobuf/PMD/TypeDescriptor 定义管道排 G22 后段。

### 裁决 3 — L3 #114 两型词汇：采 **退化指针统一词汇扩展**

- 依据：既定教训（#72）已确立 `*(DataGlobal_X + i)` 读形态；两缺口形态
  （address-of `&DataGlobal_X` 传参、`DataGlobal_X[i]` 下标）统一归入同一
  退化指针词汇族，不另立事件类型。
- 执行：verify_execution_flow.py cpp_events 提取器补两形态识别 → **全池 dry
  统计误伤面 → 实施**（保护文件改动，本裁决即批准；仍按惯例 dry 数据先行入档）。

### 裁决 4 — B 类型建模五项（逐项）

| 项 | 裁决 |
|---|---|
| #21 LoadOptions::Run 尾跳 | **继承建模**：LoadOptions 与 SaveLoadDialog 按 IDA 真值共享 DlgProc this（前缀布局兼容），hpp 布局经 ctor 写图复核后统一 |
| #22 vector-flattening 三件 | **子对象成员建模**：嵌入 `DynamicVectorClass<FileEntryClass*>` 建模为 LoadOptions 内嵌子对象（vfptr@+0x20 锚），同 Passengers{count,head} 范式 |
| #25 RemoveObjectById owner 未知 | **转 H7 队列**（owner 考古优先，不强行建模） |
| #59 member-out-of-layout ×5 | **转 H7 队列**（同上） |
| #77 UnloadPassengers +0xAC | **现场复核后建模**：0x6B4BE0 现场考古定谳 +0xAC 真类型（指针则改型 / enum 则调用语义存疑需 IDA 反汇编仲裁），列入 H5 前置 |

### 裁决 5 — #125 FloatArray@828：采 **FootClass own 区归属 + 类型采信、命名证据轮终审**

- 依据：三源冲突（TechnoClass tiltSidewaysAngle vs FootClass currentTargetThreatValues
  vs InfantryClass ∅）中，**唯一实测语义**（唯一调用方 SlaveManagerClass::ProcessSlaves
  传 slave infantry 接收者做 RecordBalanceBefore，FloatArray 三操作类型一致）与
  FootClass ml 条目偏移/类型吻合；InfantryClass 镜像行为空（G18 手术后 resolver
  走父类）。
- 执行：G22 现场仲裁——InfantryClass/FootClass ctor 写图核对 828 区（L1 范式）；
  命名若与写图冲突则 A1 语义轮终审；InfantryClass 镜像行补条目。

### 裁决 6 — #128 vfptr-install 词汇：采 **豁免词汇（定向）**

- 依据：单继承 C++ 源模型无法声明 vfptr 成员（新符号门禁），vtable 安装由编译器
  生成——cpp 侧天然零事件；IDA 侧 WRITE(member, 0/4/8/12) 指向**已知名 vtable
  安装锚**（ctor_types/vtable_signatures 佐证）时属结构性必然，与既有"对象表达式/
  cast-of-this"豁免词汇族同构。
- 执行：与裁决 3 同批实施（提取器豁免规则 + dry 统计）；解锁 0x5239D0
  InfantryTypeClass::DTOR（56 行）+ TechnoTypeClass::DTOR（163 行）同形态。

### 执行排程（裁决后）

```
即时（G22 首会话）：裁决 1 重生成 → B1 舰队直驱；裁决 3+6 dry 统计+实施
次会话：裁决 2 排除台账 + 定义管道；裁决 5 现场仲裁；裁决 4 hpp 建模复核
```

## P2 — H5 续波（填充档，fresh 11）

0x51d6f0(185 ProcessDeployAction) / 0x5200b0(75 #127 永久跳过已定谳) /
0x514310(339) / 0x51c8b0(114 goto-restructure+归属双料件) / 0x5239d0(56 =#128) /
0x418e20(95 先核归属) / 0x736579(160 先修块地址) / 0x51dbd0(107) /
0x51bf90(359) / 0x51e140(100) / 0x522d50(54 =#125)。

## 小项清偿（残余）

1. 扫描器 v2 对齐（undeclared_params 109 vs #120 归零差异精算）；
2. e4 括号非零 delta ×8 确认。

## 工作量总账（G22 展望，吞吐制）

| 批次 | 量级 | 预期净增 |
|---|---|---|
| W0 开场（含全池复跑确认 11,711） | 0.25 会话 | — |
| D1 裁决集中包整理+提交 | 0.5 会话 | 解锁后续 |
| **B1 E1 命名轮** | 1-2 会话 | **~350 回舰队候选** |
| **B2 P3 vtable 批量** | 2-4.5 会话 | 词汇+误归属，间接解锁 |
| **B3 H3r** | 1 会话 | +60-100 |
| **B4 H6 ternary** | 1 会话 | +60-120 |
| **B5 C #56 再物化** | 0.5-1 会话 | +65 候选 |
| P2 H5 填充 | 1-2 会话 | +5-10 |
| 小项 | 0.25 会话 | — |

**合计 ≈ 8-13 会话；吞吐目标 = 净增 300-600+**（对比 G18-G21 四会话 +16）。

## 快速验收清单（G22 开工顺序）

```
[ ] curl :13337 探测
[ ] 开场五检 + W0 全池复跑确认 11,711 全绿
[ ] D1 裁决集中包一页提交用户（六项）
[ ] B1 E1 全局命名轮（首位产出线；#128 三全局并入）
[ ] B3 H3r 机械 Fry（纯机械，第二产出线）
[ ] B2 P3 vtable（hierarchy 扩展 + GetFireError 族续查）
[ ] B4/B5（H6 ternary / #56 再物化，按余量）
[ ] P2 H5 填充（余 11，批量线完成后才做）
[ ] 收尾六件套 + 净增计数入日志首行 + 提交 + tag 重锚
```
