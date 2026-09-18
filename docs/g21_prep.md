# G21 准备工作包（2026-09-18，G20 执行后备齐）

> **⚠ G21 执行回填（2026-09-18 深夜，执行记录详见 roadmap 文末）**：本包清单已执行——
> W0 ✓（准备轮 11,701 ALL PASS）/ **L5 #123 ✓**（签名手术 6 处 + 0x4DBA50 重翻一次过）/
> **L6 ✓ 扩容达成**（draw* 族 8 成员 RadBeam 归属 + 全族 8/8 翻译 + radbeam.hpp 误继承撤除）/
> **L7 部分 ✓**（#126 归属纠正→InfantryTypeClass::DTOR + #128 承接阻塞；#127 永久跳过定谳；
> #125 未动）/ **P2 H5 ×1**（0x521320 GetIdleTimer；余 5 移交）/ **D 部分**（#94+0x750041
> 过时关闭；#60/#62 未动）。completed 11,701 → **11,711** / pending 4,817 → **4,813**。
> 新考古：0x6FC0B0 真身 = TechnoClass 级 GetFireError 基类版（误名
> TriggerTypeClass::ReadINI）——0x51C8B0 的 goto 拓扑 + 归属双料件处置依据。


> 当前态：completed **11,701** / pending **4,817**（marker 口径）；HEAD `232de91c`；
> tag 同步；readiness READY。**G20 已清**：W0（全池 11,699 ALL PASS 复验）/
> L4 #118 resolved（0x401190 KEEP 忠实 / 0x4DBA50+0x659470 假完成复位 →
> #123/#124 承接）/ P2 H5×4（MoveToCell / CalculateApproachPath / EnterBuilding /
> **ProcessIvanBomb——G15 以来坏块手工重建候选首次成功**）/ 词汇（InfantryClass
> vo += GetTarget@60 / SelectWeaponSlot@1016 / HasActiveParam@684 / FindMoveTarget@372，
> RTTI 表 0x7EB058 直读 + mbn ammo@764 + 签名手术 4 处）/ H5 跳过记账 #125-#127。
> **AGENTS 状态表本轮已刷 11,701 + g21_prep 口径。**
> 本文件是下一会话的**可执行准备材料**（git 跟踪）。

## 使用前提（沿用）

1. IDA 连接非持久：操作前当场探测 `curl -m 5 http://127.0.0.1:13337/`。
2. RA2-MCP 不热加载：改验证器/MCP 服务需重启（13399）。
3. 守卫口径：verify = 文本 CFG 双射 + trivial-stub-mismatch 守卫，不含可编译性保证。
4. **G20 教训沿用**：live `--save-ida` 刷新会因 til 演化丢事件（typed-cast/pad-chain
   渲染）——pending 函数翻译前以 cpp 块内嵌快照伪码恢复缓存（v4 播种先例）。

---

## 准备工作完成记录（本包备齐轮已执行，2026-09-18）

| 项 | 结果 |
|---|---|
| W0 池复跑 | ✅ **11,701 PASS / 0 FAIL**（40 分钟，11,701 全量，G20 净变动后首次全池确认——全绿基线维持，`.omo/pool_verify_results.json`） |
| **L5 调用面盘点** | ✅ `CheckTileSeed` 全库仅 2 处（foot.hpp:135 声明 + foot.cpp:1696 存根定义）；`GetCoordsEx` 仅 3 处（abstract.hpp:151 注释 + abstract.hpp:211 声明 + gap2_defs.cpp:362 pending def）。**零外部调用方——签名手术 = 4 行零波及机械改动**，手术文本已备（L5 节） |
| **L6 归属考古——结论翻转 #124** | ✅ live xref：0x659470 有**两个**调用方，除 SpreadRadiationAreaEffect 外还有 `TechnoClass::CreateFireBeamEffect`(0x6fd620)；反编译实证——**两调用方接收者都是 `RadBeam::Create` 返回对象**，且 CreateFireBeamEffect 在同一接收者上连调 drawPipScale/drawSpawnPips/drawAmmoPips/drawTiberiumPips/drawSelectionBox/drawHealthBar/drawMindControlPips/drawPassengerPips 全族。**draw\* 族（0x6594xx-0x6595xx ≥8 成员）真实 owner = RadBeam，`TechnoClass::` 前缀系误归属（#108 同型家族案）**。0x659470 不在任何 RTTI vtable 内（非虚成员）。→ L6 扩容为「draw\* 族四方 rename + #124 按 RadBeam+32 成员名重翻」 |
| **小项 #1 口径差诊断——关闭** | ✅ 三层结构量化：signals 非完成 code 符号 **7,311 = 4,817 marker-pending（带伪码块）+ ~2,489 stub/无伪码 def + 5 真无裸注解**；G18 旧"93"系已弃用池常数公式伪差。5 例中 2 例 = **G13"0X 大写化+补零"bug 重演**（building.cpp:22059/23537 `// 0X005f5cd0`/`// 0X00452540`）**本轮已修复规范化**；0x65d190 FileClass::Delete 真无注解（待补）；0x750041 nullsub 中游地址（注解在起点即可）；0x7cabfb CRT bad_cast（桶排除，无动作） |

## W0 — 开场

1. 全池复跑确认 **11,701** 全绿维持（G20 净变动 -2 复位 +4 新增未进池基线）：
   `python .omo/pool_verify_all.py --workers 6`；预期 ALL PASS。
2. 开场五检 + `list_pending` 重新扫描取 fresh 行号（H5 余量以当时扫描为准）。

## 遗留清偿（G20 移交，按可做程度排序）

### L5 — #123 GetTargetCellCenter 重翻（词汇已定谳，最接近可做）

- **词汇已定谳**：a2 虚调用 slot76 = `AbstractClass::GetCoordsEx`(0x4104F0，
  出参缓冲+this 参)；this 虚调用 slot716 = `FootClass::CheckTileSeed`(0x4D3810，
  vtable 0x7e8f60 直读铁证)。
- **唯一阻塞 = hpp 签名手术**：`foot.hpp:135 virtual bool CheckTileSeed() const`
  缺 1 参（coords 指针）；`abstract.hpp:211 int GetCoordsEx()` 缺 2 参。
  **手术前先盘点两声明的调用面**（影响现有调用方/已译体），Edit + def 行同步。
- 真翻体（G20 已备）：GetCoordsEx 出参 → v3[0]/v3[1] 坐标 → /256 截 short →
  <<8+128 → v9[2]=0 → `this->CheckTileSeed(v9)`；两侧虚调用无事件（known-virtual
  抑制）= CFG 应 PASS。

### L6 — draw\* 族归属裁决 + #124 重翻（考古已翻转，见准备记录）

- **新结论（准备轮考古实证）**：draw\* 族 ≥8 成员（drawSelectionBox 0x659470 /
  drawPipScale 0x6594A0 / drawSpawnPips 0x6594C0 / drawAmmoPips 0x6594E0 /
  drawTiberiumPips 0x6594F0 / drawHealthBar 0x659490 / drawMindControlPips 0x659540 /
  drawPassengerPips 0x659550）真实 owner = **RadBeam**——双调用方
  （TechnoClass::CreateFireBeamEffect 0x6fd620 + SpreadRadiationAreaEffect 0x6fd800）
  接收者均为 `RadBeam::Create` 返回对象；`TechnoClass::` 前缀系误归属（#108 同型）。
- 步骤：①族内逐成员调用方接收者复核（确认无例外）→ ②四方 rename
  `TechnoClass::draw*` → `RadBeam::draw*`（rename_symbol.py，dry-run 先行）→
  ③vo/hpp 虚区核对（0x659470 非虚，无 vo 条目）→ ④#124 按 `RadBeam` this+32
  成员名重翻（真身=3 字节颜色对拷贝 a2→this+32；CreateFireBeamEffect 的
  v18/v19 = stru_87C374 +6192/6246/6249 色表槽）。
- 附：techno.cpp:4593 已复位 pending ✓；techno_bodies.cpp:8 的 ra2::game 空 10 参体
  非 verify 目标（无害遗留，可顺手清理）。

### L7 — #125/#126/#127 H5 跳过三例处置

- **#126 0x5239D0**（signals 误名 `InfantryClass::ProcessAnimation`）：实为
  InfantryTypeClass 删除式析构（装 4 重 vtable）→ 误名四方纠正 + 重归类 + 签名后
  即可重翻（与 L6 同属归属考古产出）。
- **#125 0x522d50**（SlaveGiveMoney 54 行）：FloatArray 子对象 @828 漂移族争议 →
  需 ctor 写图仲裁（L1 #122 同款范式，FloatArray 布局定谳后解锁）。
- **#127 0x5200B0 ProcessIdleDeploy**（75 行）：goto LABEL_42 收缩拓扑不可结构化
  镜像 → 评估：永久跳过（桶政策）或用户特批 goto 形态（当前门控禁 goto）。

### L3 — #114 两型词汇缺口（**需用户裁决后动验证器**）

- address-of / 下标全局读两形态的事件对称表达；既定教训：全局索引读用退化指针
  `*(DataGlobal_X + i)`。
- 流程：方案 + 全池 dry 统计误伤面 → 用户批准 → 实施 → 试点推广。
- 完成后 **resolve #114**（G19 起该 issue 只剩此残留语义）。

## P2 — H5 续波（余 9，AGENTS 口径；开场重新扫描取 fresh 行号）

| 地址 | 行数 | 备注 |
|---|---|---|
| 0x51e140 | 100 | too-long |
| 0x51dbd0 | 107 | too-long |
| 0x51c8b0 | 114 | too-long |
| 0x521320 | 125 | too-long |
| 0x418e20 | 95 | **先核归属**（0x418 地址段嫌疑） |
| 0x736579 | 160 | **先修块地址**（中游地址疑注解错位） |
| 0x5200b0 | 75 | = #127（goto 拓扑，见 L7） |
| 0x522d50 | 54 | = #125（FloatArray 漂移仲裁后解锁） |
| 0x5239d0 | 56 | = #126（重归类后解锁） |

## 承接批次（材料：docs/g18_prep.md 扩容节）

| 批次 | 量级 | 产出 | 备注 |
|---|---|---|---|
| **E1 全局命名轮** | 1-2 会话 | ~351 函数解锁（#67-#71 五区） | DataGlobal 批产范式；e4_globals.hpp 走生成器侧 |
| **W0b gap2 重生成** | 1.5-2.5 会话 | ~300-550 回收 | **先向用户提交 (a)/(b) 裁决包**（`fleet_B_inventory3.json`） |
| **P3 vtable 批量** | 2-4.5 会话 | 词汇+误归属清偿 | TeleportLocomotionClass 362 槽个案；rtti_hierarchy 扩 108 表前置 |
| H6 ternary | 1 会话 | +60-120 | 每形态 20 块试点 PASS≥60% 推广 |
| H7 A2 owner 考古 | 1 会话 | 间接解锁 | 与 L6 同范式，可合并执行 |
| H3r 机械 Fry | 1 会话 | +60-100 | free-this 46 / IDA-ism 24 / broken-arrow 31 重盘 |

## 加量批次（本包备齐轮新增，六条新线）

### A — CRT/COM 桶处置轮（清 10+ blocker issue）

- 存量：#30/#31/#33/#35/#42（CRT locale/heap/onexit 全局、FILE/_iobuf、RTTI
  PMD/TypeDescriptor 结构缺定义）+ #20（Win32 import thunk 参数化）+ #63
  （vftable 符号缺声明）+ #66（_EnterCriticalRegionHelper this 缺参）+ #72
  （VtableStub::NNN 非法名别名）。
- **两条路（裁决包就绪后提交用户）**：(a) header pipeline 补定义（FILE/_iobuf、
  PMD/_s_RTTI*、CRT 全局 extern 走 e4_globals 生成器）后按桶真翻；
  (b) 正式桶排除台账（CRT/OS glue 永久豁免，pending 清出 tracked 池）。
- 量级：(a) 1-2 会话 / (b) 0.5 会话。

### B — 类型建模裁决包（A-series 集中一批，向用户提交）

- 存量：#21/#22（LoadOptions::Run/CopyItems/Cleanup——SaveLoadDialog 虚签名
  统一 + VectorClass 子对象成员建模）、#25（VectorClass::RemoveObjectById owner
  缺失，sizeof>9620 外层类）、#59（member-out-of-layout ×5）、#77
  （UnloadPassengers 接收者 +0xAC int→指针仲裁）。
- 形式：每项一页证据 + 两案建议 → 用户逐项裁决 → 裁决后即解锁（合计 ~10 函数
  + 解锁同类形态族）。
- 量级：裁决包整理 0.5 会话。

### C — #56 no-class 签名再物化（65 函数）

- 存量：E3 物化丢 this/参数的自由函数签名（`int VectorClass_cptr_MultiMission_j_vt09()`
  形态），伪码参数不可达。
- 路径：gen_e4_materialize 补参数再物化（生成器层，hpp+cpp 同步；同 W0b 家族）。
- 量级：0.5-1 会话；解锁后回舰队候选。

### D — 零散债清扫包（小而确定，半天级）

- #60 vtable_offsets 缺槽 ×12（VectorClass 族 byteoff 12/24，vo 补条即解锁）；
- #62 phantom-signals ×8（翻译体+verify PASS 但 signals 无条目——folded/thunk 对账）；
- #94 unit.cpp:16573 ProcessIdleOrders 块地址错位（真址 0x6B7BB0，修注解+伪码来源）；
- 0x750041 nullsub 中游地址注解归位（准备轮遗留）。
- 量级：0.5 会话。

### E — P4 对拍线复启：写 .data 非渲染函数 Inject 回滚测试

- AGENTS「后续计划」第 1 项（6 月积压）：当前 13 个已完成函数全是 XSurface
  不写 .data，回滚验证从未真正执行。
- 路径：从 L1 #122 刚重建的 TechnoClass 中区选一个写 .data 的非渲染 completed
  函数 → REVERSE 标记 Inject → 对拍 + 回滚验证（M1-M7 纪律全适用）。
- 量级：0.5-1 会话；恢复 hook 管线进度（Phase 1 验收要件）。

### F — L6 扩容：draw\* 族归属裁决（已并入 L6，单列记账）

- 见 L6 节——考古已翻转，四方 rename + 族内复核 + 重翻。
- 量级：0.5-1 会话（并入 L6 计）。

## 小项清偿（残余 3 项）

1. stats pending 口径差诊断（marker 4,817 vs 活口径）。
2. 扫描器 v2 对齐：`.omo/audit_completed_bodies.py` undeclared_params vs #120 审计器。
3. e4 括号非零 delta ×8 确认（维持豁免记账）。

## 工作量总账（G21 展望，加量后）

| 批次 | 量级 |
|---|---|
| W0 开场 | 0.25 会话 |
| L5 #123 签名手术 + 重翻（调用面已盘，4 行零波及） | 0.5 会话 |
| L6 draw\* 族归属裁决 + #124 重翻（考古已翻转） | 1-1.5 会话 |
| L7 三例处置 | 0.5-1 会话 |
| L3 #114（需裁决） | 0.5-1 会话 |
| P2 H5 余 9 | 1.5-2.5 会话 |
| A CRT/COM 桶处置（两案待裁决） | 0.5-2 会话 |
| B 类型建模裁决包 | 0.5-1 会话 |
| C #56 签名再物化 | 0.5-1 会话 |
| D 零散债清扫 | 0.5 会话 |
| E P4 对拍线 Inject 回滚测试 | 0.5-1 会话 |
| E1 / W0b / P3 / H6 / H7 / H3r | 6-10 会话 |
| 小项清偿 | 0.25 会话（#1 已关闭） |

**合计 ≈ 14-21 会话**；排序 = **W0 → L5（零波及手术）→ L6（考古已备）→ L7 →
D/E（半天级快赢）→ L3/B/A（三个裁决包并行提交）→ P2 主体 → E1/W0b → P3 → 并行**。

## 快速验收清单（G21 开工顺序）

```
[ ] curl :13337 探测
[ ] 开场五检 + list_pending fresh 扫描
[ ] W0 全池复跑确认 11,701 全绿维持
[ ] L5 #123：foot.hpp:135/abstract.hpp:211 + foot.cpp:1696/gap2_defs.cpp:362 四行手术 → 重翻 → verify
[ ] L6：draw* 族四方 rename（RadBeam）→ #124 重翻
[ ] L7：#126 误名纠正 → #125 FloatArray 仲裁 → #127 跳过评估
[ ] D 零散债清扫（#60 vo ×12 / #62 对账 / #94 块地址 / 0x750041 注解）
[ ] E P4：写 .data Inject 回滚测试（选 L1 重建区 completed 函数）
[ ] L3/B/A 三裁决包整理提交（#114 / 类型建模 / CRT 桶两案）
[ ] P2 H5 波 ×2-4（0x51e140 / 0x51dbd0 起 too-long 组）
[ ] E1 全局命名轮（或 W0b 裁决包提交，视用户在场与否）
[ ] 收尾六件套 + 新增 completed 全验 + 提交 + tag 重锚
```
