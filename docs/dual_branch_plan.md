# 双分支总攻计划（Dual-Branch Total Offensive Plan）：pending → 0 → Phase 1 出口

> 版本：2026-09-19 v1。用户指令：划分两个互不干扰的工作分支，分别制定详细计划，
> 全部做完 = 完成所有 pending。
> 基线：completed **11,712** / marker-pending **4,808** / stub 池 ~2,454 /
> **signals 非完成 code 符号 7,267（本计划的总攻总量）**；HEAD `e1cf2181`；
> 全池 11,701 ALL PASS + G22 增量全验。
> 终止条件：**7,267 → 0**，进入 D1-D4 集成验收（docs/master_plan.md Phase ε）。

---

## 0. 总量分解（两分支分摊的账）

### 0.1 按源桶（signals 非完成 code 7,267）

| 桶 | 数量 | 主分支 | 主阻塞因 |
|---|---|---|---|
| misc/misc_ext | 852 | 甲 | 机械形态 + 词汇 |
| gap2 五件套（system/object/ui/house/entity/team 的 gap2_defs.cpp） | 1,193 | 甲 | #50 后遗症（签名已修，待舰队）+ #55 |
| src/_gap2/gap2_global_defs.cpp | ~265 | 甲 | ✅ 已解锁（W0b struct 修复） |
| e4 各桶（addr7C/addr63/addr48/...） | ~1,900 | 甲 | 全局命名（E1）+ CRT + stub |
| object/techno | 272 | 乙 | too-long + 词汇 |
| structure/building | 232 | 乙 | 布局争议 + too-long |
| render/render_ext | 204 | 甲 | 机械 |
| core/utility_ext_bodies | 132 | 甲 | 机械 |
| object/foot | 104 | 乙 | 词汇 + too-long |
| ui/ui_ext + network/network_ext | 172 | 甲 | 机械 |
| house/entity/team 类文件 | ~270 | 乙 | 混合 |
| 其余散布（e4 小桶 + 各处） | ~1,750 | 甲 | stub 池主体 |
| object/structure 手写类文件语义主体 | ~900 | 乙 | too-long/goto |

### 0.2 按阻塞因（行动视角）

| 阻塞因 | 当量 | 解锁归属 |
|---|---|---|
| 全局未命名（#67-#71+#57+#129 两个） | ~355 | 甲 E1 |
| gap2 签名/结构（W0b 已解锁 535） | ~551+300 | 甲 舰队 |
| CRT/OS glue（#20/#30-#37/#42/#63/#66） | ~80 | 甲 分治 |
| E3 无参签名（#56） | 65 | 甲 再物化 |
| 机械形态（H3r free-this/IDA-ism + H6 ternary） | ~150-350 | 甲 |
| 验证器词汇（#114 两型 + do-while 族已通 ✓） | 全局性 | 甲 |
| 误归属（H7 + draw* 族后续） | ~140 | 乙 A2 |
| 布局争议（#125/#77/#21/#22/#25/#59） | ~30 | 乙 裁决已定 |
| vtable 词汇（hierarchy 108 表 + 0x6FC0B0 族） | 全局性 | 乙 P3 |
| 语义主体（too-long ~2,037 + goto ~328） | ~2,365 | 乙（吃甲解锁） |
| stub 池（无伪码 def） | ~2,454 | 甲 再物化→舰队 |

---

## 1. 分支定义与互不干扰契约

### 1.1 分支甲「词汇·批量·解锁线」（Vocabulary & Mass-Production）

**使命**：所有不需要逐函数语义考古的工作——验证器词汇、全局命名、生成器修复、
机械形态批产、舰队直驱、stub 池再物化。高吞吐引擎。

**文件所有权（独占写权）**：
- `src/_gap2/**`、各模块 `gap2_defs.cpp`（生成器产物）
- `src/e4/**`、`src/misc/**`、`src/render/**`、`src/core/**`
- `src/_generated/**`、`e4_globals.hpp`
- `tools/efv_*.py`、`tools/verify_execution_flow.py`、`tools/gen_gap2_defs.py`、
  `tools/gen_e4_materialize*`、`tools/mcp_translate_server.py`
- `.omo/` 工具脚本（fleet/dry/normalize 族）

**IDA 资源**：**无头副本** `gamemd_extract_replica.i64`（idat 批提取，只读）；
主 IDA 实例仅在同步点短暂使用（全局命名写回）。

### 1.2 分支乙「语义·考古·核心线」（Semantic & Archaeology）

**使命**：核心游戏类的语义翻译与布局考古——ctor 写图、INI 键考古、vtable 槽
裁决、布局争议、too-long/goto 语义主体。低吞吐高价值。

**文件所有权（独占写权）**：
- `src/structure/**`（手写类文件：infantry/building/unit/aircraft.cpp）
- `src/object/**`（techno/foot/abstract.cpp 等）
- `src/type/**`、`src/house/**`、`src/entity/**`、`src/ui/**`（手写类文件）、
  `src/system/**`（手写类文件）、`src/team/**`、`src/network/**`（手写类文件）
- `docs/g16_vtable_audit_queue.md`、布局证据文档

**IDA 资源**：**主实例**（127.0.0.1:13337，live 反编译/til/四方 rename）。

### 1.3 共享资源单写协议（互不干扰的核心）

| 共享资源 | 协议 |
|---|---|
| `signals.json` | **单写窗口制**：分支把改动暂存到 `.omo/branch_{a|b}_signals.json`；同步点（每轮收尾）由当时持锁分支一次性应用；另一分支在该窗口内不读改 signals |
| `tools/member_lookup.json` | 同上（暂存 + 同步点合并；key 空间天然按类不重叠，冲突面≈0） |
| `src/type/*.hpp` | 乙独占（类布局）；甲需要的类型 shim 一律放 `src/_gap2/` 或 `e4_globals.hpp` |
| git 提交/tag 重锚 | **交替制**：每分支收尾各自 commit（信息前缀 `[甲]`/`[乙]`），tag 重锚只在同步点执行 |
| `.omo/ida_cache` | 按函数地址天然不交叉；cache 归一（cast/名称）只允许甲在**乙已翻完或甲正在翻**的地址上执行 |
| issue 台账 | 各自追加；跨分支阻塞 issue 打 `【需乙】`/`【需甲】` 标签 |

### 1.4 冲突矩阵（×=共享需协议，·=独占）

| 资源 | 甲 | 乙 |
|---|---|---|
| signals.json | ×(暂存) | ×(暂存) |
| member_lookup.json | ×(暂存) | ×(暂存) |
| src/e4, misc, render, core, _gap2, _generated | · | 读 |
| src/structure, object, type, house, entity, ui, system, team, network 手写文件 | 读 | · |
| verify/efv/生成器 | · | 读 |
| 主 IDA 实例 | 同步点 | · |
| 无头副本 idat | · | 读(可并行) |

---

## 2. 分支甲详细计划（A1-A7）

### A1 — 验证器词汇收尾（≈1 会话，✅ 部分）
- 已完成：trivial-stub 守卫、vfptr-install 豁免、do-while→for 镜像、cache 归一、
  OperatorDelete/blob 静默对称。
- 剩余：**#114 下标/address-of 两型**（dry 已做：下标 114 函数、address-of 已被
  处理面 865）——`efv_cpp_events` 补 `DataGlobal_X[i]` 退化指针读事件（退化形态
  已有先例）， coupled IDA 侧核对后实施；全池复跑验收零回归。
- 验收：#114 resolve；全池 PASS 维持。

### A2 — E1 全局命名轮 ×5 区（≈2 会话，解锁 ~355）
- 区域：0x884D58-0x8875xx(131 函数) / 0x87F538-0x87F7D8(83) / 0x87DE28-0x87E8xx(59)
  / 0x89ECF8-0x89F7xx(48) / 杂项(14) + COM GUID(16)。
- 注意：三区为**运行时初始化 BSS 缓冲**（字节全零）——命名走 xref 用途考古
  （G5 DataGlobal 范式），idat 无头副本批提取 xref → 分类 → signals.globals +
  e4_globals.hpp（生成器侧）。
- 验收：五区 0 未命名残留；#67-#71+#57+#129 全 resolve。

### A3 — gap2 舰队波 ×N（≈4-6 会话，回收 ~800-1,200）
- 存量：W0b 解锁 535（_gap2）+ gap2 五件套 1,193（签名已修，#55 类目待逐类）。
- 工具链：g5_fleet（slot_name 继承链行走 ✓）+ **for-form/静默全局预处理**
  （A1 词汇自动应用于舰队前置 pass）。
- 波次纪律：每波 40-118；FAIL 自动回滚；禁止无新词汇硬驱。
- 验收：每波净增入账；gap2 五件套 + _gap2 归零。

### A4 — 机械 Fry 三线（≈2 会话，+150-350）
- H3r 重扫精分类（G14 sigfix/defix 工具）→ 批产；H6 ternary 逐形态算术化
  （每形态 20 块试点 PASS≥60%）；#56 签名再物化 65 函数（gen_e4_materialize）。
- 验收：三线 pending 清零归档。

### A5 — CRT/COM 分治（≈1 会话）
- (b) 排除台账先行（inline-asm/x87/goto 中块着陆类，逐函数记理由，tracked 池
  移出 pending 计数——**注意：台账 = pending 转账不是清零，M4 口径时单列**）；
  (a) FILE/_iobuf/PMD/TypeDescriptor/CRT 全局定义管道 → 可表达类真翻。
- 验收：#30-#37/#42/#63/#66/#20 全 resolve。

### A6 — stub 池再物化（≈3-5 会话，~2,454）
- 存量：无伪码/纯 stub def（signals 非完成 - marker 的差值）。
- 路径：gen_e4_materialize 批量再物化（补参+补伪码 from 快照）→ 可翻者入舰队、
  纯 stub 者按 A5 台账归类。
- 验收：signals 非完成 - marker 的差值 → 0（所有 def 都有真体或台账化）。

### A7 — 收尾归零（≈1-2 会话）
- 甲名下桶全零后：支持乙的 δ 段（散布翻译）+ 全池终验 + M4 口径核对。

---

## 3. 分支乙详细计划（B1-B7）

### B1 — DTOR×2 完成（≈0.5 会话，✅ 一半）
- 已完成：InfantryTypeClass::DTOR ✓（#129 前半）。
- 剩余：**TechnoTypeClass::DTOR(0x711ae0)**——前置 = ml 33 成员名（11 TypeList
  嵌入 × Items/Capacity/FlagByte；基座名已有：1240=VoiceFeedback/1268=MoveSound/
  1296=DieSound/1476=DebrisAnims/1592=Prerequisite/1620=PrerequisiteOverride/
  1836=Explosion/1864=DestroyAnim/1912=DamageParticleSystems/1940=
  DestroyParticleSystems 谱系；无名基座 1212/1184/1156/1128/1100/1072/1044/1000/
  816/788 用 `基座类型+序号` 结构名，A2 语义精化后置）+ hpp 字段追加 +
  g_AbstractClassArray/g_TechnoTypes 静默对称（已定谳）。
- 验收：0x711ae0 completed。

### B2 — TypeList 嵌入命名轮 + TechnoTypeClass 尾区四源重建（≈1-2 会话）
- 33 字段语义精化（INI 键考古：TechnoType 真 INI 读取函数定位——0x710af0 实为
  ctor 误名，真 INI reader 需 xref 找）→ 四源（ml+mbn+class_layouts+t14 --apply
  +idb_save）。
- 解锁：TechnoType 族 788-1940 区全部函数翻译。
- 验收：TechnoTypeClass 尾区 0 无名；A1 复跑收敛。

### B3 — P3 vtable 审计批量（≈3-5 会话）
- rtti_hierarchy 扩 108 表（0.5 会话）；TeleportLocomotionClass 362 槽个案；
  0x6FC0B0 GetFireError 族续查；每会话 5-10 表配额。
- 验收：队列 30+ 核心表清零；词汇+误归属产出供 B4。

### B4 — 核心类语义翻译（≈8-12 会话，~800）
- 桶序：techno 272 → building 232 → foot 104 → house/entity/team/system/ui/network
  手写文件 ~270 → 散布。范式：get_context → raw cast 对称 → 语义虚调用 →
  CFG 镜像 → verify → mark_completed；吃甲 A2/A3 解锁。
- 验收：五桶归零。

### B5 — 布局争议裁决执行（≈1 会话）
- D1-4/5 已定谳项落地：#21 继承建模、#22 子对象建模、#77 现场复核、
  #125 FloatArray ctor 写图仲裁、#25/#59 转 H7。
- 验收：#21/#22/#77/#125 resolve。

### B6 — 语义主体（too-long/goto ~2,365，≈15-25 会话）
- 与甲 A3 平行的最大主体。goto 族按 #127 桶政策 + 特批形态；too-long 按桶序
  舰队化+手动混合；词汇前置逐桶清（甲供）。
- 验收：到 δ 段时 ≤200。

### B7 — δ 收尾（≈2 会话）
- 残余散布 + 命名一致性收敛（85/16 → 基线）+ M4 口径核对 + 全池终验。

---

## 4. 汇合与阶段门（master_plan Phase 映射）

| 阶段 | 甲角色 | 乙角色 | 门 |
|---|---|---|---|
| **β 前半** | A1+A2（词汇+命名） | B1+B5（DTOR+裁决落地） | 门：解锁面 ~1,400 全部可翻 |
| **β 后半** | A3 舰队 ×N + A4 | B3 vtable + B4 开始 | M1（pending ≈3,500→实际按两分支合账） |
| **γ** | A3 续 + A6 stub 池 | B4 主体 + B6 语义主体 | M2→M3 |
| **δ** | A5 CRT + A7 归零支持 | B7 收尾 | M4：7,267 → 0（台账单列项除外） |
| **ε** | 支持对拍 | 支持功能对等 | D1-D4 全绿 → Phase 1 出口 |

**量级总账**：甲 ≈ 14-20 会话，乙 ≈ 30-40 会话；两分支交替执行时按 50/50 轮转，
总历时 ≈ 45-60 个工作会话到 pending=0。

---

## 5. 执行轮转模型

### 5.1 单代理轮转（当前现实）
每个工作会话内按 **时间盒** 交替：
```
[甲段 2-3h] A 线任务（批量/词汇/舰队——高吞吐时段）
  → 同步点：signals/ml 暂存应用 + commit [甲] + tag 重锚
[乙段 2-3h] B 线任务（考古/语义翻译——需 IDA live）
  → 同步点：commit [乙] + tag 重锚
```
轮转规则：甲段优先级 > 乙段，除非乙有「已解锁待翻」热函数（如 B1 类）。

### 5.2 双会话并行（如未来可行）
两独立会话按 1.3 文件所有权并行工作：
- 甲会话：不动主 IDA（用无头副本），signals 改动只写暂存文件，commit 前缀 [甲]；
- 乙会话：主 IDA live，signals 暂存，commit 前缀 [乙]；
- 每方收尾自行重锚 tag（交替锁：以 issue 台账登记的同步令牌为准，先登先得）；
- 冲突面 = signals.json/ml 的同一 key——按 1.3 暂存合并，key 冲突时乙优先
  （类布局权威在乙）。

---

## 6. 风险与回退

| 风险 | 缓解 |
|---|---|
| 两分支 signals 合并冲突 | 暂存文件制 + key 空间按类隔离 + 乙优先裁决 |
| 舰队 FAIL-recycle 回潮 | 只在新词汇落地后直驱；波次净增入账 |
| stub 池再物化质量 | 每批抽验 verify；纯 stub 台账化不硬翻 |
| 语义主体吞吐不及预期 | 甲 A6 提前支援散布桶；里程碑门重估 |
| 验证器改动回归 | 每次词汇变更后全池复跑（pool_verify_all）零回归才提交 |
| 布局考古踩 #122 式深坑 | ctor 写图终审法 + 四源同步纪律 + A1 闸 |

---

## 7. 阶段验收门（与 master_plan §7 对齐）

- **β 门**：甲 A1/A2/A3 首三波 + 乙 B1/B5 完成；合账 pending ≤ 3,500；
- **γ 门**：甲 A4/A5 完成 + 乙 B3/B4 完成；合账 pending ≤ 1,800；
- **δ 门**：stub 池归零 + 语义主体 ≤ 200 + 台账单列项封账；
- **ε 门（M4）**：**7,267 → 0**；全池 ALL PASS + readiness READY + 一致性收敛；
  → D1-D4 集成验收 → Phase 1 出口。
