# G17 准备工作包（2026-09-16 G16 会话末备齐；2026-09-17 G17 前半执行后刷新）

> 当前态：completed **11,856** / pending **4,755**（W2.1 复位 36 假完成后）；
> HEAD `63b2dd35`，tag `auto-fill-baseline` 与 HEAD 同步。执行日志见
> `docs/roadmap_post_csp.md` 文末 G17 节；本文件是下一会话的**可执行准备材料**
> （git 跟踪，不依赖 .omo 本地态）。**下一会话入口见文末「下一会话开工清单」
> （W2.2 → W2.3 → P1-P3）**。
>
> **体检基线（2026-09-16 体检轮；2026-09-17 G17 更新）**：全池 exec-flow 回归
> **11,891 PASS / 1 FAIL**（首次全量复跑，46 分钟，`.omo/pool_verify_results.json`；
> 驱动 `.omo/pool_verify_all.py`）。唯一 FAIL = BulletTypeClass::GetWarhead(0x46C820)
> ——**✅ G17 P0/P0b 已修复（2026-09-17）**：til 760B 重建（真根因 = 声明文本
> 第 759 位成员名 `flat` 是 IDA C 解析器保留字，单行即 2 个解析错误，G16 记录的
> "预期 parse: 2"实为错误码而非成功）+ ml 删 0-95 旧布局残留 43 条（保留 61/96）+
> `src/type/bullet_type.hpp` 尾区 39 成员对齐 G16 camelCase 真值名（hpp 是过时方，
> 参照 techno.hpp focus 先例）+ 728 位语义裁决（IDA `*(this+182)`"等于则清零"=
> AnimTypeClass* trailer 的 Detach 语义，对 int rot 无意义）→ 体改 `this->trailer`
> → 复验 PASS（双侧 READ/WRITE(member,728) CFG 一致）。#112/#113 已 resolve。
> readiness 全检 READY（无幽灵完成/无双 def/tag 同步）；注解审计双零；
> 一致性 85 raw / 16 normalized（基线 91/7，别名自愈型漂移，无污染信号）。
>
> **W1.2 dry 统计已出（2026-09-17 G17，`.omo/w12_dry_stats.py` 驱动，5.5 分钟）**：
> 全池 11,892 交叉表 = **A 格 36**（平凡体 × IDA 非平凡 = 方案 A 潜在 FAIL，明细
> `.omo/w12_dry_stats.json`）/ B 格 25（多语句无事件体近失，W2.2 逐例）/ 诚实平凡
> 660 / 有事件体 11,171。审计铁面 9 重核：仅 0x484AB0/0x522CB0 坐实；4 个实为
> 真翻译体；3 个事件模型不可见（0x401190/0x4DBA50/0x659470，#118）。合法样本
> GetPlanningToken/IsMassSelectable/IsRookie 全部不落 A 格（零误伤）。
> **W2.1 复位清单以 A 格 36 为准（不再用审计铁面 9 原清单）**。
>
> **⚠ 反hacking审计补充（同日）**：全池 FAIL=0 的含义 = **文本 CFG 双射**，不含
> 可编译性/非 stub 保证。抽样对照实证：验证器 READ 盲点（#114）+ 假完成 9 铁面
> +28 嫌疑（#115）+ 破损文本 completed ~370（#116）+ ERROR_RE 恒 0 假阴性（#117）。
> **修复计划 = `docs/audit_repair_plan.md`（W1 加固 / W2 存量修复 / W3 预防），
> G17 开工顺序以该文件「与既有计划的关系」节为准。**

## 使用前提

1. IDA 连接非持久：任何 IDA 操作前当场探测 `curl -m 5 http://127.0.0.1:13337/`。
2. `gen/*.cpp` 切分支后需 `python gen_reverse_hooks.py` 重生成（若动 hook）。
3. RA2-MCP 常驻服务不热加载源码：改了 `tools/mcp_translate_server.py` 或
   `tools/verify_execution_flow.py` 需重启服务（`python tools/mcp_translate_server.py --http 13399`）。

---

## P0 — BulletTypeClass til 恢复（IDA 回线第一件事，约 2 分钟）

G16 会话中段 IDA 离线打断 til 重建：活会话已 `del_named_type` 但未 `idb_save`，
**盘上 idb 仍是 756B 旧版**。三源（ml/mbn/class_layouts）已是 760B 真值不受影响。

操作（IDA 在线时）：

```bash
# 方式 A：MCP py_exec_file
#   mcp__ida-pro-mcp__py_exec_file file_path=D:\RA2YR_ReSource\tools\ida_bullettype_fix_g16.py
# 方式 B：无头副本
#   T14X 不适用（这是声明脚本）；直接在 GUI 的 IDA 控制台 execfile 亦可
```

脚本 = `tools/ida_bullettype_fix_g16.py`（C 声明文本 + del_named_type + parse_decls，
预期打印 `parse: 2 ... size: 760`）。**跑完必须 idb_save**（MCP `idb_save` 工具）。

验收：til 里 BulletTypeClass size==760，660=airburst(char)/712=elasticity(double)/
752=arm(int)/756-759=animLow/High/Rate/flat(char×4)。
完成后 resolve issue #112 + #113。

### P0b — member_lookup 残留清理 + GetWarhead 复验（体检轮新增，约 10 分钟）

体检发现唯一全池 FAIL 的定案事实链：

1. 验证器 C++ 侧成员偏移**走 member_lookup 解析**（`resolve_member_offset`），
   不是 hpp 布局推算；IDA 侧 `*(this+182)`（`_DWORD*` this）= 字节 **728**。
2. G15 全池 FAIL=0 时本函数 PASS → 当时 ml 必有 `ROT→728`；
   G16「BulletType INI 全表」落盘后 ml 变成**同名双条目并存**：
   旧大写三件套 `Color@60 / Trailer@64 / ROT@68` + 真值
   `Color@724 / trailer@728 / rot@732`。resolve('ROT')=68 ≠ 728 → FAIL。
3. 同名（仅大小写差）双条目必有一假：60/64/68 三条是旧布局残渣。

操作：
1. ml 的 BulletTypeClass 删除偏移 60/64/68 三条旧条目（class_layouts._member_by_name
   侧已无大写 ROT，可作旁证）；
2. **语义裁决（真正的门）**：IDA 访问的 728 在 G16 真值里是 `trailer` 位。
   若裁决该 dword 确为 Trailer 指针（"等于则清空"语义自洽）→ 把 C++ 体
   `this->ROT` 改为 `this->Trailer`（hpp 已有该成员，纯函数体编辑）→ 复验；
   若语义证据指向 ROT → 则 G16 的 724-736 边界（trailer@728/rot@732）需重考古，
   不得反向硬凑 ml；
3. `python tools/verify_execution_flow.py 0x46c820` → PASS 后，
   全池状态回到 FAIL=0，记入 roadmap 日志。

## G17 主循环工作流（体检轮设计定稿）

每会话统一骨架，四阶段：

**阶段 1 — 开场五检（~5 分钟，全零才开工）**

```
[ ] curl -m 5 http://127.0.0.1:13337/        # IDA 连接探测（在线→P0/P1 类可做；离线→跳到 P2/P3 离线项）
[ ] python .omo/g13_readiness.py             # tag 同步/幽灵完成/双 def/波次桶
[ ] MCP annotations_audit                    # missing_with_known_addr 与 addr_mismatch 双零
[ ] python tools/audit_consistency.py        # 命名一致性（基线 85/16，仅记账不阻塞）
[ ] git status + git log -3                  # 工作树干净、口径衔接
```

**阶段 2 — 证据与布局（IDA 依赖项优先，趁在线先做）**

优先序 = 依赖解锁面：P0/P0b（til+ml，恢复全池 FAIL=0）→ P1（TechnoClass 尾区，
解锁 A1 追加命名）→ P2 词汇前置（slot 196/1064 裁决、member 1768/3644 INI 考古——
G16 LoadFromINI 范式）。P3 vtable 审计（1-2 表/轮）可穿插在等待/间隙做。

**阶段 3 — 翻译波（主线产出）**

- 手动 H5：3-5 函数/轮（G16 实测节奏，含考古）；入口 = P2 队列表从上往下。
- 舰队波（可选）：g5_fleet 直驱，仅当本轮落地了**新词汇**（G14 实证：无新词汇
  直驱 = FAIL-recycle 零增量）；FAIL 块自动回滚 pending，不硬留译体。
- 每函数过 verify → mark_completed；截断/无缓存真值不得验证。

**阶段 4 — 收尾六件套（缺一不提交）**

```
[ ] 括号 HEAD-delta（g7 权威口径；e4 已知 8 处 pending 块伪码噪声豁免）
[ ] MCP annotations_audit（双零）
[ ] python tools/audit_consistency.py（记账）
[ ] marker&completed 对账（g13_readiness.py 含此项，必须 0 幽灵）
[ ] 新增 completed 全量复验（逐个 verify_execution_flow，本会话新增即全验）
[ ] 提交 + tag auto-fill-baseline 重锚 + roadmap 执行日志记账（completed/pending 口径）
```

**全池回归节奏（体检轮定案）**：不再每会话全池跑（46 分钟）；改为
**抽样制**——每会话收尾验"本会话新增 completed 全量 + 随机 50 存量的抽样"；
**每 3-4 个波次或每布局大改（类重建/四源写入）后全池复跑一次**
`python .omo/pool_verify_all.py --workers 6`（FAIL 清单逐条定因，禁止带 FAIL 提交重锚）。

**中断恢复协议（既有裁决沿用）**：replaced-未验证记录从 ida_cache 重建 pending 块
（G11 36 块流程已脚本化验证）；波中禁直读 signals（G13 教训）。

## P1 — TechnoClass 尾区 800-1312 重建（#110，ctor 写图已全量在手）

证据已在盘上：`.omo/ida_cache/func_0x6f2b40.json`（TechnoClass ctor 0x6F2B40
live 反编译，G16 提取）。写图 ≥800 区转录如下（raw，偏移=字节）：

| 字节区 | ctor 写入 | 备注 |
|---|---|---|
| 772-803 | memset(this+193, 0, 0x20) | 32B 清零块（ParticleSystem 族 @772-796 已在 504-792 修复区） |
| 804-824 | *(this+201..205)=0; (this+206)=-1 | 824=-1 哨兵 |
| 828 | Delegate::GetField(this+207) | 子对象 ctor |
| 848 | TechnoClass::checkCloakState(this+212) | 子对象 init |
| 880 | FrameSnapshot::InitMax((_WORD*)this+440, 3) | 6B |
| 904 / 928 | FrameSnapshot::Init(this+452 / +464) | 子对象 ×2 |
| 952/956/964 | (this+238)=0; +239=Rules值; +241=0 | |
| 968-981 | word@970=0; (this+243/244)=0; byte 980/981=0 | |
| 984-996 | (this+246)=2; +247/+248/+249=1 | 2/1/1/1 四连 |
| 1004-1040 | (this+251/252)=0; (this+254)=2; +255/256/257=1; +259/260=0 | 同构四连再现（两组 = 两套同构子结构） |
| 1048-1063 | bytes: 1048-1056=0, 1057=1, 1058=1, 1059-1063=0 | |
| 1064-1084 | (this+266/267)=0; bytes 1072-1074; (this+269)=0; bytes 1080-1082; (this+271)=0 | |
| **1088** | (this+272)=&vt_DynamicVectorClass_int | **嵌入 DV\<int\> vptr 锚** |
| 1100/1101 | byte=1 / 0 | |
| 1104-1120 | (this+276)=0; +277=10; +279=0; +280=0 | capacity=10 模式 |
| 1124/1125 | byte=1 / 0 | |
| **1112** | (this+278)=&vt_DynamicVectorClass_AbstractClass | **嵌入 DV\<Abstract\> vptr 键** |
| 1128-1156 | (this+282)=0; +283=10; (this+284)=&vt_DV_Abstract(→1136); (this+285)=0; +286=0; bytes 1148/1149; (this+288)=0; +289=10 | 第三组 DV |
| **1136** | (this+284)=&vt_DynamicVectorClass_AbstractClass | **嵌入 DV vptr 锚 #3** |
| 1180/1184 | (this+295)=1; +296=0 | |
| 1208/1212 | byte 1208=0; (this+303)=0 | |
| 1236/1240 | byte 1236=0; (this+310)=0 | |
| 1264/1268 | (this+316)=-1; +317=-1 | |
| 1272-1284 | byte 1272=0; (this+319)=Rules值; +320/321=0 | |
| 1296-1308 | (this+324..327)=0 | |
| **1160/1188/1216/1244** | AudioController::Init(this+290/297/304/311) | 4 个 28B 跨距子对象 ctor——**与 AGENTS 记载"AudioController=20B"矛盾，需 sizeof 终审**（G16 新发现，重建时先裁决） |

操作范式（G16 已验证两轮）：

1. `Ares/YRpp/TechnoClass.h` Properties 序列（成员 100-181，本会话未打印，直接读头文件）
   提供偏移命名锚（unknown_2F8@760 式）；
2. 上表 ctor 写图逐点核对 → 真值表；
3. 四源写入（member_lookup 5 行镜像 + signals._member_by_name + class_layouts +
   `python tools/type_infer/t14_structs.py --only TechnoClass --apply` + idb_save）；
4. 跑 `.omo/g14_a1_yrpp.py --apply` 复核（G16 时 TechnoClass REJ 的
   `til-drift{20: 20, -60: 4, -20: 1, -172: 1}` 应消失或大幅收敛 → A1 解锁追加）。

注意：FootClass/AircraftClass/BuildingClass/InfantryClass 四行 ml 需镜像同步
（G16 修复 504-792 时已同法处理）。

## P2 — H5 语义翻译主线（infantry.cpp 队列 22 个在手）

infantry.cpp 剩余 pending（G16 末清单，伪码行数括注）：

| 地址 | 行数 | 舰队跳过原因 |
|---|---|---|
| 0x51df10 | 12 | ≤60 待查（最小候选） |
| 0x51df60 | 30 | raw-this-residue 族 |
| 0x5227f0 | 30 | raw-this-residue 族 |
| 0x5216d0 | 32 | slot@196 / member@1768 嫌疑 |
| 0x51f330 | 34 | — |
| 0x521c90 | 35 | — |
| 0x5239d0 | 56 | — |
| 0x51f3e0 | 46 | — |
| 0x51dff0 | 50 | — |
| 0x51f6e0 | 53 | 舰队生成过但 FAIL 回滚（ProcessIvanBomb——坏块手工重建候选，G15 同型） |
| 0x522d50 | 54 | — |
| 0x5200b0 | 75 | too-long |
| 0x51e140 | 100 | too-long |
| 0x51dbd0 | 107 | too-long |
| 0x521320 | 125 | too-long |
| 0x51c8b0 | 114 | too-long |
| 0x418e20 | 95 | too-long（Aircraft 桶误入？0x418 地址段——先核归属） |
| 0x736579 | 160 | too-long + 非常规地址（0x736579 中游地址，疑块注解错位——**先修块地址**） |
| 0x51d6f0 | 185 | too-long（ProcessDeployAction 主入口） |
| 0x514310 | 339 | too-long |
| 0x51bf90 | 359 | too-long |

词汇前置（翻译前先清）：
- **slot@196**：InfantryClass 表字节 196 = 0x41c010（现名 AircraftClass::CheckReloadState
  ——误归属嫌疑，审计队列同款）；字节 1064 同待裁决。
- **member@1768(0x6E8) / member@3644(0xE3C)**：InfantryTypeClass 成员无名——
  LoadFromINI 考古法（G16 BulletType 范式）可直接命名。
- **param-mismatch:a2**：hpp 声明缺参——G16 签名手术范式（Edit + def 行同步）。

手动范式（G16 成熟，3 函数/轮含考古）：
`get_context` → 未名偏移 raw cast 双侧零事件对称 → CFG 按 IDA 块图镜像
（重复 `this->member` = 重复 READ 事件；分支写用局部变量中转共享块）→ verify → mark_completed。

## P3 — vtable 审计批量轮（材料齐：docs/g16_vtable_audit_queue.md）

G16 已验证范式（YRpp 头文件虚区 + 表二进制直读 + 误归属反编译裁决 + 四方 rename +
vo 补条 + hpp 声明）覆盖单表 15-60 分钟。优先队列头：
NeuronClass 316 / AbstractTypeClass 315 / MultiplayerObserverTeam 297 / HouseClass 266；
**TeleportLocomotionClass 362 槽全挂 Jumpjet 名 = 相邻表整体误归属个案**。
InfantryClass 真空槽：字节 196 / 1064（见 P2 词汇前置）。

## 快速验收清单（G17 全日执行完毕；下一会话入口见下）

```
[x] curl :13337 探测
[x] 开场五检（readiness / annotations_audit / consistency / git）
[x] W1.1 ERROR_RE 修复 + 重启 MCP（#117 resolved；三方验收 stats 61 / build 61 / grep 61）
[x] P0 BulletType til（#112 resolved；真根因 = flat 是 IDA C 解析器保留字，760B 建成 + idb_save）
[x] P0b ml 残留清理 43 条 + hpp 39 改名对齐 + GetWarhead 复验 PASS（#113 resolved）
[x] W1.2 验证器加固（dry 统计 A36/B25/C660/D11171 → 获批 → 方案 A 落地 → 新基线 11,856/36 ≡ A-36 双向零差）
[x] W2.1 A-36 假完成全员复位（commit 63b2dd35）
[x] W2.2 B-25 三选一：复位 24 + 保留 1（0x4E7E30）+ #50 转桶 9（#119）
[x] W2.3 破损 265 分路：R134 保 + S112 + 杂交体 26（ns 假阳性修正后真实清单；#120）
[x] P1 TechnoClass 尾区 75 条真值表四源 + til + A1 复核（#110 resolved；残余=中区链边界债）
[x] P2 词汇前置（InfantryClass@1768 / FootClass@1677 / QueueMission@488 槽 / ammo 镜像清理）
[x] P2 H5×2（0x51DF10 CancelMovement + 0x51DF60 FireWeaponWithCleanup，均 PASS）
[x] 收尾六件套 + 抽样 50/50 + 提交 + tag 重锚
```

## 下一会话开工清单（W2 收官后：P2 续 → P3 → 中区轮）

1. **开场五检**（同「G17 主循环工作流」阶段 1；completed 口径 **11,691 /
   pending 4,920**——W2 全线收官后诚实口径）。
2. **P2 H5 续波**（infantry.cpp 队列剩余 20 个，从 0x5227f0/0x51f330 起小函数）：
   - 已验证范式：词汇前置（三源 ml+layouts+signals mbn，hpp 跟随改名）→
     `get_context` → 语义虚调用（**C++ 侧 vfptr 只认 `this->Method()`——raw cast
     形恒零事件**，槽词汇缺时二进制直读 vtable 定谳后补 vtable_offsets.json）→
     verify → mark_completed；
   - 词汇债清单一批：InfantryTypeClass member@1768/3644 INI 考古（G16 BulletType
     范式）、slot@196/1064 裁决（P3 vtable 审计交叉）、param-mismatch:a2。
3. **P3 vtable 审计批量轮**（docs/g16_vtable_audit_queue.md 166 表；
   NeuronClass 316 / AbstractTypeClass 315 / TeleportLocomotion 362 误归属个案）。
4. **TechnoClass 中区轮**（新识别债）：RadioClass 链边界 til 228 vs ml 240
   （flashing 族 delta12 / particles 族 delta20 / YRpp 中区 5 成员 -172）——
   A1 的 TechnoClass REJ 最后收敛项。
5. 全池回归节奏照旧：抽样制，每 3-4 波后 `python .omo/pool_verify_all.py --workers 6`
   （本日会话后建议先跑一次全池建立 W2 收官后新基线）。
