# G18 准备工作包（2026-09-17 G17 收官后备齐）

> 当前态：completed **11,691** / pending **4,920**；HEAD `31109bdc`（G17 W2 收官+P1+P2）；
> tag `auto-fill-baseline` 同步。前作：`docs/audit_repair_plan.md`（W1/W2 收官）
> → `docs/g17_prep.md`（G17 准备，已消费）。审计四向量（#114-#117）已全部闭环或受控：
> 守卫生效（trivial-stub-mismatch）、假完成 36+24 已复位、破损缺参归零、度量真实。
> 本文件是下一会话的**可执行准备材料**（git 跟踪，不依赖 .omo 本地态）。

## 使用前提（沿用）

1. IDA 连接非持久：任何 IDA 操作前当场探测 `curl -m 5 http://127.0.0.1:13337/`。
2. RA2-MCP 常驻服务不热加载：改了 `tools/mcp_translate_server.py` 或
   `tools/verify_execution_flow.py` 需重启（`python tools/mcp_translate_server.py --http 13399`）。
3. 守卫口径提醒：verify 现在 = 文本 CFG 双射 + 平凡体守卫，**仍不含可编译性保证**。

---

## W0 — 全池新基线（本包备齐时已在后台复跑）

- 命令：`python .omo/pool_verify_all.py --workers 6`（约 45 分钟，11,691 个 completed）。
- 预期：**全 PASS**（W2.1/W2.2 复位后池内不应再有已知假完成）。
- 任何 FAIL 按纪律逐条定因（真值缓存陈旧 / 布局漂移 / 守卫新误伤），**禁止带 FAIL 提交重锚**。
- 结果回填：`.omo/pool_verify_results.json` → 本节。
- **W0 终值（2026-09-17 复跑，11,691 completed）**：复跑 10 FAIL →
  **dup-ann 杂交体 10 例当场修复（残余扫描归零）→ 有效基线 11,687 PASS / 4 FAIL**
  （4 FAIL 全部 = 名字错位型，见 W0a；提交重锚前须清零）。

### W0 修复台账（本包备齐轮已完成）

dup-ann 杂交体 = 签名裸闭合 + 函数体被**前一个函数地址的小写重复注解**劫持。
池 FAIL 揪出 6 例（0x41BFC0/0x53A130/0x5B2F90/0x5C0EE0/0x773B70/0x7AC4D0），
全库模式扫描追加 4 例潜伏（0x48DED0 nullsub_51 / 0x4A8EA0 nullsub_11 /
0x4C6170 nullsub_130 / 0x6B8B20 nullsub_38——非 completed 邻居或尚未被池覆盖）。
修复 = 体归位 + 删游离重复注解（游离注解均确认真身大写注解在别处有完整 def）。
全部单验 PASS + 邻居 PASS；`annotations_audit` 双零保持（matched 10,141）。

### W0a — 下会话首项：4 个名字错位 FAIL 清零（不动函数体，只做名字同步）

| 地址 | signals 名 | def 名 | 修法 |
|---|---|---|---|
| 0x483710 | `sub_483710`（裸名） | `E4Recv_483710::sub_483710` | signals 补类限定（G6 E4Recv 合成类范式） |
| 0x4863A0 | `sub_4863A0`（裸名） | `E4Recv_4863A0::sub_4863A0` | 同上 |
| 0x48B070 | `sub_48B070`（裸名） | `E4Recv_48B070::sub_48B070` | 同上 |
| 0x48A8D0 | `ComputeMathFacingAngle` | `Math_ComputeFacingAngle` | rename_symbol.py 四方同步（先 dry-run 裁决方向；G17 techno.hpp 29 改名同款） |

机理（已定性）：按名查找失败 → by-addr 回退**误锚进前一函数体内**（G11 记载的
已知假阳性形态）→ 提取 1 块假体 → 结构匹配 FAIL。不是翻译错误，是名字数据错位。
修复后全池复跑应全 PASS，才可提交重锚。

## 小项清偿（半小时级，开工先做）

1. **Issue 归档**（账实同步）：
   - #115 / #116 → resolve，resolution：「已被 #119（W2.2 B-25 三选一执行记录）/#120（W2.3 破损分路执行记录）接替；复位与修复已落地，存量清单以 .omo/w22_pretriage.json + #120 描述为准」；
   - #119 / #120 → resolve，resolution：「执行完毕（31109bdc）；残余：括号 FP 8（审计器 ns 假阳性集合，无需动作）+ #118 三例单列」。
2. **stats pending 口径差 93 诊断**：`pending_translations`（marker 块扫描 = 4,827）
   vs AGENTS 口径（pool 算术 16,611 − completed = 4,920）。方向已定：**93 个
   pool-pending 函数在 src 无可识别 pending 块**（疑 dup-ann 杂交体 26 + 无 def
   物化形态 + gap2 ns 包裹不被 marker 正则识别族）。诊断入口：
   `tools/mcp_translate_server.py::build_pending_index` vs signals 全集差集。
   处置：只是记账口径，不阻塞主线；诊断结论补进 AGENTS 状态表脚注。
3. **e4 括号非零 delta ×8**（G16 遗留，pending 块伪码噪声）：确认仍在即维持豁免
   记账（g7 权威口径）。

---

## P2 — H5 语义翻译主线（主产出线）

### 词汇前置（翻译前先清，缺一即舰队 FAIL-recycle）

| 项 | 内容 | 方法 |
|---|---|---|
| slot@196 / slot@1064 | InfantryClass 表空槽裁决（G17 已验 QueueMission@488 同范式） | 二进制直读 vtable 定谳 → 四方 rename + vo 补条 |
| member@1768(0x6E8) / member@3644(0xE3C) | InfantryTypeClass 成员无名 | LoadFromINI 考古法（G16 BulletType 范式） |
| 全局 0x8B4148 | IsInBounds 上界比对全局（疑 map 尺寸） | DataGlobal 命名轮 |

### infantry.cpp 队列（fresh 24，MCP 2026-09-17 扫描，行号为当前 def 位置）

| 地址 | 行数 | 备注 |
|---|---|---|
| 0x51faf0 | 5 | **首选入口**（A 格复位函数 GetTypePtr 真翻） |
| 0x4598a0 | 8 | 小函数 |
| 0x484ab0 | 8 | **上轮审计假完成 specimen 真翻**——IDA 真值已知：读 this+278(0x116 word) / 比对 [0x8B4148] / 查 this+236(0xEC)==10；需 member@278/236 命名（无名则 raw cast 双侧对称形态）+ 0x8B4148 命名 |
| 0x51f540 | 28 | |
| 0x5227f0 | 30 | raw-this-residue 嫌疑（G16 清单） |
| 0x5216d0 | 32 | slot@196 嫌疑 |
| 0x51f330 | 34 | |
| 0x521c90 | 35 | |
| 0x51f3e0 | 46 | |
| 0x51dff0 | 50 | |
| 0x51f6e0 | 53 | ProcessIvanBomb——舰队 FAIL 回滚块，手工重建候选 |
| 0x5239d0 | 56 | |
| 0x522d50 | 54 | |
| 0x5200b0 | 75 | too-long |
| 0x522340 | 65 | |
| 0x418e20 | 95 | **先核归属**（0x418 地址段，Aircraft 桶误入嫌疑） |
| 0x51e140 | 100 | too-long |
| 0x51dbd0 | 107 | too-long |
| 0x521320 | 125 | too-long |
| 0x51c8b0 | 114 | too-long |
| 0x736579 | 160 | **先修块地址**（中游地址，疑注解错位） |
| 0x51d6f0 | 185 | ProcessDeployAction 主入口 |
| 0x514310 | 339 | too-long |
| 0x51bf90 | 359 | too-long |

### 手动范式（G16/G17 成熟，3-5 函数/轮含考古）

`get_context` → 未名偏移 raw cast 双侧零事件对称 → 语义虚调用（**C++ 侧 vfptr 只认
`this->Method()`，槽词汇缺时二进制直读 vtable 定谳**）→ CFG 按 IDA 块图镜像
（重复成员读 = 重复 READ 事件；分支写用局部变量中转）→ verify（守卫生效口径）→
mark_completed。舰队波仅在新词汇落地后直驱（无新词汇 = FAIL-recycle 零增量）。

---

## P3 — vtable 审计批量轮（材料齐：docs/g16_vtable_audit_queue.md）

- 优先队列头（嫌疑数）：NeuronClass 316 / AbstractTypeClass 315 /
  MultiplayerObserverTeam 297 / TabClass 267 / HouseClass 266。
- **个案优先**：TeleportLocomotionClass 全 362 槽挂 Jumpjet 名 = 相邻表整体误归属。
- InfantryClass 真空槽 196/1064 与 P2 词汇前置**联动**（审出真名即解锁 H5 卡账）。
- 四步范式（#108/#109 验证，单表 15-60 分钟）：反汇编槽函数裁决真语义 →
  `rename_symbol` 四方 → vo 错值修正（已知 vo=344 错、二进制 124 对类）→ hpp 虚区声明补齐。
- 108 个 RTTI 未覆盖表需先扩 `anchors/rtti_hierarchy.json` full 图再审计。

## P1b — TechnoClass 中区轮（RadioClass 链边界债）

- 现状：ml RadioClass 最深条目 `radioLinks@224`（4 槽 → 尾界 240）vs **til 228**
  ——链边界差 12，影响 TechnoClass own 区起点可信度与 RadioClass ≥200 区函数翻译。
- 范式（G16 ctor 写图终审法，TechnoClass 0x6F2B40 同款）：
  1. 定位 RadioClass ctor（`anchors/ctor_types.json` vtable 安装锚 / vtable 双引用）；
  2. 全写图转录（对照 YRpp RadioClass.h Properties 序列）；
  3. 四源写入（ml 镜像 + signals._member_by_name + class_layouts +
     `python tools/type_infer/t14_structs.py --only RadioClass --apply` + **idb_save**）；
  4. `.omo/g14_a1_yrpp.py` 复跑看链漂移收敛。

## A1 复跑（P1/中区轮解锁后追加命名）

`python .omo/g14_a1_yrpp.py`（dry 看 agree/REJ）→ 确认后 `--apply`。
P1 后 agree 8→39；中区轮完成后 TechnoClass 链 REJ 应进一步收敛。

---

## 扩容批次（本包新增，按解锁收益排序）

### E1 — 全局命名轮：e4 地址桶解锁 ~350 函数（issues #67-#71 + #57）

- **存量**：#67 addr40 区 0x884D58-0x8875xx（131 函数/280 全局）+ #68 CD/音频配置区
  0x87F538-0x87F7D8（83/119）+ #69 音频数学常数区 0x87DE28-0x87E8xx（59/80）+
  #70 addr49 区 0x89ECF8-0x89F7xx（48/98）+ #71 杂项（14/42）+ #57 COM GUID 族
  0x7F7CA0/0xA8EC88（16）≈ **351 函数被未命名全局卡死**。
- **范式**：G5 DataGlobal 批产（10,744 条先例）——IDA 在线 live 提取 offset↔语义
  （xref 考古/表结构判型），signals.globals + e4_globals.hpp 双落盘。
- **注意**：e4_globals.hpp 是管线生成物，加条目走生成器侧（`gen_e4_materialize`），
  不手补 extern（new-symbol 门禁）。
- 量级：1-2 会话；解锁后这些地址桶回到 H4 舰队直驱候选。

### W0b — gap2 生成器补 this 重生成（#50/#55 裁决包已就绪，解锁 ~551+300）

- **存量**：#50 `src/_gap2/gap2_global_defs.cpp` 551 函数签名丢 ECX this（生成器
  bug 实证在案）；#55 gap2 五件套 689 跳过的 A-K 十一类。
- **裁决包**（证据全在 .omo，无需新考古）：`.omo/fleet_B_inventory3.json`
  （535 个"仅缺 this、栈参齐全"明细）+ issue #50 修复路径两案：
  (a) 重生成时把 IDA 原型 ECX 补为首位参数（hpp+cpp 同步）；(b) 按 owner 迁类方法桶。
- **执行前置**：**(a)/(b) 需用户裁决**；改 `gen_gap2_defs.py` 属生成器层改动。
- 裁决后量级：重生成 0.5 会话 + 舰队直驱回收（#55 D 类签名族 ~24 同批）1-2 会话，
  **预期净回收 300-550 completed**——全计划最大单笔收益。

### H6 — ternary 词汇专项（~124 块）

- 存量：ternary 形态 124（hash-type 已全清，见 coverage 口径）。
- 范式（roadmap H6 既定）：逐形态算术化，每形态 20 块试点 PASS≥60% 推广，
  否则转 H5 手动。
- 量级：1 会话（含形态盘点，live 数字以当时 pending 扫描为准）。

### H7 — A2 owner 考古批量轮（slot foreign 95 + 向量族 44）

- 存量：vtable 槽位 foreign 接收者 95 + 44 向量族误归属（G9 已裁决同族 44 例，
  方法链离线可用：addr→vtable_signatures→rtti_vtable_class）。
- 范式：RTTI owner 链批量改名（`rename_symbol` 四方），顺带 vo 错值修正。
- 量级：1 会话；间接解锁 H5 raw-this 族卡账。

### H3r — 机械 Fry 残余重盘点（free-this / IDA-ism / broken-arrow）

- 存量（G14 live 口径，W2.3 后 param-mismatch 已归零，需重盘）：free-this ~46 +
  IDA-ism ~24 + broken-arrow ~31 ≈ **~100 机械可修**。
- 范式：sigfix/defix 脚本化批产（G14 工具链）+ live 重取。
- 量级：1 会话（盘点 0.5 + 批产 0.5）。

### EV — T14X B10/B10b 重提取激活（IDA 依赖，证据管线债）

- 现状：提取器 B10（RETURN 边源接通）/B10b（RETURN_TO 作用域化）**已实现未激活**
  （AGENTS 类型推断引擎节明确记载"下次 IDA 会话重跑提取管线"）。
- 上次激活收益：约束 978K→1,195K；type_map 656K→729K；SSA 类类型 +50%。
- 操作：无头副本方案（`T14X_EXTRACT_ONLY=1 idat -A -S<script> copy.i64`，~100s）
  → 引擎重跑 → class_db/gen 重算 → OO refresh。
- 量级：0.5-1 会话；**前置于任何大规模 refresh 波**（否则重写器吃旧 type_map）。

### P3 扩容 — vtable 审计从"1-2 表"提额到"每会话 5-10 表批量"

- 队列深度：30+ 核心表在册（docs/g16_vtable_audit_queue.md），单表 15-60 分钟。
- **前置子项**：108 个 RTTI 未覆盖表需先扩 `anchors/rtti_hierarchy.json` full 图
  （0.5 会话，解锁后审计面翻倍）。
- 量级：主线 2-4 会话 + hierarchy 扩展 0.5。

---

## 工作量总账（G18 展望）

| 批次 | 量级 | 解锁/产出 |
|---|---|---|
| W0a 名字错位清零 | 0.5 会话 | 基线回 FAIL=0 |
| 小项清偿 | 0.5 会话 | 台账干净 |
| P2 H5 续波（24 队列） | 2-3 会话 | +20-40 completed |
| P3 vtable 批量（扩容后） | 2-4.5 会话 | 词汇+误归属清偿，间接解锁 H5 |
| P1b 中区轮 | 0.5-1 会话 | RadioClass 链 + A1 追加 |
| E1 全局命名轮 | 1-2 会话 | **~350 函数解锁** |
| W0b gap2 重生成（待裁决） | 1.5-2.5 会话 | **~300-550 completed 回收** |
| H6 ternary | 1 会话 | +60-120 |
| H7 A2 owner 考古 | 1 会话 | 间接解锁 |
| H3r 机械 Fry | 1 会话 | +60-100 |
| EV T14X 重提取 | 0.5-1 会话 | 证据质量跃升（前置 refresh） |
| #118 三例 + A1 复跑 | 并入各轮 | — |

**合计 ≈ 12-16 会话**；排序原则 = 解锁收益 × 依赖序：
W0a → EV（IDA 证据管线趁早）→ E1/W0b（两大解锁，W0b 等裁决）→ P3/P2 主体 →
H6/H7/H3r 并行填充。

## #118 — 事件不可见 3 例（守卫覆盖不了，人工 IDA 对照）

0x401190（纯算术 + 参数接收者读 a1+44）/ 0x4DBA50（局部 v2 虚调用派发）/
0x659470（写经局部 v2=this+32）。逐例 live 反编译三选一：真翻译保留（记理由）/
复位重翻 / 转桶。检测通道研究（算术指纹、参数接收者成员读）超出守卫范围——
立项待用户裁决，不自行扩验证器。

---

## 快速验收清单（G18 开工顺序）

```
[ ] curl :13337 探测
[ ] 开场五检（readiness / annotations_audit / consistency / git）
[ ] W0a 名字错位 4 FAIL 清零（上表；rename_symbol.py dry-run 先行）→ 全池复跑全 PASS → 提交重锚
[ ] 小项清偿（issue 归档 #115/#116/#119/#120 + stats pending 口径差 93 诊断）
[ ] EV T14X B10/B10b 重提取激活（无头副本 ~100s + 引擎重跑，前置于大规模 refresh）
[ ] P2 词汇前置（slot 196/1064 + member 1768/3644 + 全局 0x8B4148）
[ ] P2 H5 波 ×3-5（0x51faf0 → 0x4598a0 → 0x484ab0 → 0x51f540）
[ ] P3 vtable 审计批量（TeleportLocomotionClass 个案优先；hierarchy 扩展解锁 108 表）
[ ] E1 全局命名轮（#67-#71，DataGlobal 批产范式）
[ ] P1b 中区轮（RadioClass ctor 写图，时间富余再做）
[ ] W0b gap2 重生成（**先向用户提交 (a)/(b) 裁决包**，批准后执行）
[ ] H6 ternary / H7 A2 owner / H3r 机械 Fry（按会话余量并行填充）
[ ] 收尾六件套 + 新增 completed 全验 + 提交 + tag 重锚
```
