# G17 准备工作包（2026-09-16 G16 会话末备齐）

> 当前态：completed **11,892** / pending **4,719**；HEAD `639e59d6`；
> tag `auto-fill-baseline` 与 HEAD 同步。G16 执行日志见 `docs/roadmap_post_csp.md`
> 文末；本文件是下一会话的**可执行准备材料**（git 跟踪，不依赖 .omo 本地态）。

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

## 快速验收清单（G17 开工顺序）

```
[ ] curl :13337 探测
[ ] P0 BulletType til（tools/ida_bullettype_fix_g16.py + idb_save + resolve #112/#113）
[ ] P1 TechnoClass 尾区（读 YRpp 100-181 + ctor 写图表 → 四源 → t14 --apply → A1 复跑）
[ ] P2 词汇前置（slot 196/1064 裁决 + member 1768/3644 INI 考古）
[ ] P2 H5 波（0x51df10 起小函数 ×3-5）
[ ] 提交 + tag auto-fill-baseline 重锚
```
