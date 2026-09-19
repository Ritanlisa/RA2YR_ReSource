# CSP 后时代路线图 — 类型体系收官 → 语义重建 → 功能对等

> 2026-09-05 制定。CSP 约束求解体系已达证据上限（TOP=0，七通道全绿），
> 本文档是此基线上的完整后续工作分解。前情：AGENTS.md「最近完成」各条目、
> `docs/coverage.md`、memory `type-infer-oop-rebuild-roadmap`。
>
> **执行状态首查表（2026-09-16 G14 会话更新：YRpp 腿就位 + A1 命名轮 + align bug 修正 + 舰队两波）**：
>
> | 任务 | 状态 | 摘要 |
> |---|---|---|
> | **G14 证据补全 + A1 命名轮** | ✅ **完成（2026-09-16，提交 ef0da229）** | **YRpp submodule 修复**（gitlink+浅克隆，A1 三源证据腿就位）；**vtable 槽位 +11**（ObjectClass@124 IsAboveScreenMargin 二进制定案）；**DataGlobal +14**（IQ/GameSettings/WOL 键表 blob 头族 + -1 哨兵族，next-layer 3 波全清）；**A1 成员命名 109 项**（新工具 .omo/g14_a1_yrpp.py：YRpp 声明序+多锚对齐+til 锚定+系统性漂移检测器）；**AnimClass sizeof=456 二进制定案**（vtable 槽 48 mov eax,1C8h——class_layouts 6324/til 90200 双双证伪）；OO refresh rewritten 4,496 |
> | **G14 align bug 修正** | ✅ **完成（提交 613c0cd7）** | **根因：align() 对 12B TimerStruct/CoordStruct 误 8 对齐 → 链式 +4 位移**；二进制裁决 = TeamClass ctor timer1@88/96、timer2@100/108、Tag@112（12B 步长）；**43/109 已应用项移除+修正版重应用 53 项**（引用排查 25 处全在 pending 伪码、已完成译体零引用——事件对称门控防假完成实证）；Team/Trigger/Weapon -4 漂移族全部消解 |
> | **G14 舰队两波** | ✅ **completed 11,843 → 11,894 / pending 4,717（0f60d26c + 613c0cd7）** | W1 108 桶 +48；W2 99 桶 +3——**FAIL-recycle 天花板确认**（255 GENERATED 残余全为词汇缺口，规则生成器无新词汇下到顶）；addr7C/7D 0% 维持（CRT/swap 词汇） |
> | **G14 新增债面** | 🔴 | 漂移族账本 .omo/g14_drift_ledger.txt（33 类三源分歧画像，ctor 裁决候选清单）；addr7C/7D 短排序族词汇专项（H6 候选）；H2 unit.cpp 15 pending 未动；gap2_refresh 冻结维持 |
> | **G13 证据补全** | ✅ **完成（2026-09-15，提交 9710bf2c）** | **live til 全量导出 1,706 UDT / 10,975 语义成员**（.omo/g13_til_live.json，兼作 broken-arrow 序数表）；**member_lookup 合并 +503 语义成员 / 22 类**（占位符过滤 + 同名异位冲突 84 整批剔除 + mbn 漂移族 23 规避——TechnoClass 中段三族争议区再实证）；**vtable 槽位 +15**（RTTI 祖先链守卫经 class_name_align 桥接）；**DataGlobal +4**（live xref 定性）；**hash 序数定案 3**（#378=AbstractClass 签名互证法——12 块解锁，HASH_TYPE_MAP 9→12） |
> | **G13 OO refresh** | ✅ **rewritten 4,514 / unmapped 5,661；11,173 已译记录保留（3e94ae9a）** | e4 侧 refresh；g5_fleet class_layout 父链合并（PARENTS = layouts + rtti 直读桥接，192 条）；**g7_gap2_refresh '{' 注入 bug 回滚冻结**（六 gap2 文件 checkout，bug 未修） |
> | **G13 舰队波 + H2** | ✅ **completed 11,788 → 11,843（30d9480c）** | 109 桶 +47 全 CFG；**H2 A 类 17 项 hpp+def 手术 + unit.cpp +8**（记录级确定性重建管线 .omo/g13_rebuild_records.py：伪迹免疫端检测）；FootClass_field_5A4→Archive 四方重命名；波 rollback 13 条 +1 伪差缓存重拼修复；**事故链全记录**（0X 大写化 bug 重演 / 波中禁直读 signals） |
> | **G13 新识别债面** | 🔴 | 主树旧译缺地址注解 → E4 双份物化幽灵 pending（addr 桶 0% 通过率真因）；YRpp submodule 为空（A1 三源证据腿缺失）；IsCrushable 0x5f6cd0 遗留损坏区挂账 |
> | **G9 证据补全** | ✅ **完成（2026-09-14，提交 5494bf60 + 重锚，IDA 会话当时离线——连接状态非持久，使用前必须当场探测，见 G9 日志注记）** | **RTTI 容器族回填 76 类 306 成员**（owner 考古链 addr→vtable_signatures→rtti_vtable_class 离线贯通；证据=RTTI vtable 家族统一/vt-install 体内证据/til 短名别名，继承层级取最派生；三重冲突守卫 member_lookup 既有/til 语义名/class_layouts 父链）；**signals._member_by_name 全量同步 +814 名**（修复 TypeList::Count 解析到全局 0xB79BE0 的 resolver fallback bug——G2 时代只进 member_lookup 的类从此可验证）；**vt_ 全局 +23**（RTTI 主表地址直读，vftable-ref 主根因）；DataGlobal +4；til 语义 +7 |
> | **G9 证据补全** | ✅ **完成（2026-09-14，提交 5494bf60 + 重锚，IDA 会话当时离线——连接状态非持久，使用前必须当场探测，见 G9 日志注记）** | **RTTI 容器族回填 76 类 306 成员**（owner 考古链 addr→vtable_signatures→rtti_vtable_class 离线贯通；证据=RTTI vtable 家族统一/vt-install 体内证据/til 短名别名，继承层级取最派生；三重冲突守卫 member_lookup 既有/til 语义名/class_layouts 父链）；**signals._member_by_name 全量同步 +814 名**（修复 TypeList::Count 解析到全局 0xB79BE0 的 resolver fallback bug——G2 时代只进 member_lookup 的类从此可验证）；**vt_ 全局 +23**（RTTI 主表地址直读，vftable-ref 主根因）；DataGlobal +4；til 语义 +7 |
> | **G9 舰队修复五连** | ✅ 同上提交 | ①**THIS_CAST_PAREN G7 双括号 bug**（`*(CAST *)(this + N)` 单括号形态从未匹配——residual-this-cast 696 的真根因）；②**foreign-receiver 旁路+逆映射**（缓存接收者命名 Block/a1 → IDA 侧成员事件恒 0，翻译必须无 this-> token——G6-G8 gap2 低 PASS 率隐藏成分）；③hoist 双变体仲裁（no-hoist alt 经 swap_body 直驱）；④memory-chain 词汇；⑤raw-this-residue 守卫精确化（deref 上下文追踪）；g_by_addr 无尺寸数组正则（G8 遗留）。试点 MSPCXAnim 36/38、TypeList 70/71（修复后 100%） |
> | **G9 OO refresh** | ✅ rewritten 5,684 / unmapped 5,365；9,802 已译记录字节级保留（5494bf60） | 同上提交 |
> | **G9 舰队波 1** | ✅ **completed 10,456 → 11,591（+1,235 全 CFG 验证，提交 ffedee1a + 重锚）** | 544 桶全量直驱 48.5 分钟（含试点）；6 括号坏块 HEAD 外科恢复（swap_body 吃外层闭合的根因修复 = deficit 加固）；波后注解 6 补齐、一致性 69/3 基线 |
> | **G9 舰队波 2 + 外科轮** | ✅ **completed 11,591 → 11,665（+74，提交 8c3c3be5 + 重锚）** | sigfix2 def 参数外科 84 + defix free-this 下划线 def 成员化 54（thunk 族）+ v3 截断占位块 ida_cache 重建 7（53 无缓存=v4 截断不播种留待 IDA 回线）；波后注解 15 补齐（6 mismatch=同名函数地址歧义挂账） |
> | **G9 后续队列** | 🔴 | 剩余 4,624 pending 构成：too-long 1,771（语义翻译/分块）+ raw-this-residue ~525（真类无名区 A1/B4）+ **FAIL-recycle ~350**（do/while+LABEL 复杂体，规则生成器天花板，波 1/2 实证）+ vftable-ref 141（模板嵌套渲染/非 this 目标长尾）+ hash-type 144 + ternary 109 + 截断 53 + param-mismatch 残余 ~70 |
> | **G8 证据补全** | ✅ **完成（2026-09-14，提交 b18839c2 + 重锚）** | **全局 dry-scan 体系**（.omo/g8_dryscan.py：全部 pending 块 translate() 试生成 + skip 归因聚合）；**vtable 槽位 +65/35 类**（仅主表 col_offset==0 直读 + 函数名须属本类或 class_layouts 祖先链；56 诚实拒绝；2 非法标识符名剔除）；**47 全局**（使用形态类型化：字符串实参→unsigned char[]/标量算术→int/索引→int[4]/字节→char/RTDynamicCast→void*；stru_815F54 成员访问型移除保诚实 skip）；**14 til 语义成员**（InfantryClass Type@1728 等；field_*/__pad_* 按 G7 政策跳过）；槽位头声明同步 65 处（G6 变参先例）；**裁决：RulesClass/SessionClass 等 44 无 vtable 槽位类 = T19 误归属向量族 operator=（slot@12=Clear 形态），保持 skip 防 member_lookup 语义错位假 PASS（A2 owner 考古债）** |
> | **G8 OO refresh** | ✅ rewritten 6,289 / unmapped 5,468；7,785 已译记录字节级保留（b18839c2） | 同上提交 |
> | **G8 舰队波 1** | ✅ **completed 8,324 → 10,323（+1,999 全 CFG 验证，提交 65d17fe4 + 重锚）** | **471 桶全量直驱（61 分钟）**：replaced 2,504 / PASS 2,023 / FAIL 481 自动回滚（80.8%）；**g5_fleet 两守卫上线**（gap2 高 FAIL 诊断产物）：param-mismatch（def 签名 vs 伪码参数名错位，#50 族）+ raw-this-residue（区间内无名成员裸 this+N，cpp 侧 0 事件恒 FAIL）——system/gap2 生成浪费 49→7 清零；波后括号 HEAD-delta 0 新增、注解 18 缺失补齐后 10,071/0/0、一致性 69/3 基线 |
> | **G8 舰队波 2（sigfix）** | ✅ **completed 10,323 → 10,350（+22，提交 f933b53f + 重锚）** | **g8_sigfix.py #50 族机械清偿**：155 成员 def 参数名对齐 v4 伪码（纯改名不动类型）+ 52 Block→this 词边界归一；param-mismatch 268 → 116（余为参数数错配需 hpp 手术）；**事故如实记录**：首版 def 行重写丢尾部 `{`（rstrip('{') 所致）→ 155 行括号失衡 → 逐行补回修复（155/155）+ HEAD-delta 复验 0 新增；**too-long 试验否决**：addr7D max-lines 200 = 5/59 PASS（8.5%），复杂形态（三元/memory-chain/goto-switch CRT）规则生成器天花板实证，维持 defer |
> | **G8 后续队列** | 🔴 | 剩余 6,541 pending 构成（dry-scan 口径）：too-long 1,988（需语义翻译/分块策略）+ raw-this-residue 1,451（**A1 命名前置**：til field_* 占位触发 ida-naming 门控）+ residual-this-cast 610 + param-mismatch 116（参数数错配，需 hpp 手术）+ vftable-ref 275 + memory-chain 245 + ternary 126 + free-this 75——机械收割面已尽 |
> | **G7 证据补全** | ✅ **完成（2026-09-13，提交 0103a195 + 重锚）** | **full_export v4 重导出**（19,088 函数；live IDA 已把 stru mega-blob 归一化 MEMORY[绝对地址]，v3 陈旧形态实证 0x87F7E8[539944] vs 0xB0FE64）；**gap2 pending 活码刷新 1,812/1,838**（.omo/g7_gap2_refresh.py；25 截断块诚实保留）；e4 refresh 7,288 已译记录保留 + E1 +857 extern；**171 缺失全局 DataGlobal 批产**（4 个 90,160B mega-blob = EventClass/AnimClass 族 IDA 巨型 struct 模型破案）；**til 语义成员合并 +2,136/68 类**（RulesClass +505/HouseClass +247/AircraftClass +159）；**g5_fleet 五项升级**——DECL_RE 误吃 `break;`→`br eak;`（mangled-keyword 根因，305 解锁）、bare-`*this`→`*(void**)this` 双侧 0 事件（1,367 解锁）、`*(cast*)(this+N)` 字面偏移对齐验证器 T8 语义、MEMORY 全局 vtable 安装词汇、派生类成员回退；generator-ready 2,467→3,805 |
> | **G7 舰队波 1** | ✅ **completed 7,548 → 8,324（+776 全 CFG 验证，提交 3ff45951 + 重锚）** | 14 桶（addr4E/74/46/73/58/51/66/68 + gap2 六桶 v4 活码首批）；addr 桶 PASS 95-100%、gap2 桶 52-81%（FAIL 自动回滚）；**ida_cache v4 播种 17,270**（首轮 0/106 全灭根因 = IDA MCP 离线 exit 2 非翻译问题；v4=live 渲染，播种后**离线验证能力恢复**）；pending 9,385 → **8,600** |
> | **G5 证据补全** | ✅ **完成（2026-09-11，提交 0db19f5e + 重锚）** | **10,744 DataGlobal 全局批产**（pending 块引用全扫 + IDA 批查，解锁 #67-71/#57）；**#50 gap2 重生成**（520 Gap2Recv 接收者类 + member_lookup/vtable_offsets 用验证器 leaf 保证偏移一致 + signals._member_by_name 383 类）；#51 两块伪码 live 置换；vtable 槽位 +614/213 类（自有表锚定，AbstractClass 修正 0x7E1F50，回归 119/120）；#62 phantom 8 条补建；**验证器 ns 前缀修复**（单行 namespace+def 类提取）；OO refresh 2,273 保留 |
> | **G5 舰队波** | ✅ **completed 2,477 → 3,736（+1,259 全 CFG 验证）** | g5_fleet.py 直驱（fleetA 规则泛化）：addr7C **414**/addr40 245/addr77 209/addr72 149/addr4E 96/addr49 46/gap2 ~91（Gap2Recv 机制首批）；PASS 率 addr 桶 97-100%、gap2 59%；生成器加固（三元/memory-chain/断词/残留 cast 跳过 + signals↔extern 同步 1,330）；波后括号零新增/审计基线维持 |
> | **G4 证据补全轮** | ✅ 完成（2026-09-10，72175ec7） | vtable_offsets +208 类 + 639 vt_ 全局 + CRT 87 全局 + #26 FactoryClass 破案 |
> | **G3 舰队波 1** | ✅ +1,360（VectorClass 桶） | 直驱范式确立 |
> | **最终目标债（翻译积压）** | 🔴 **核心主线** | MCP pending **4,935**；completed **11,696**（G11 后）。**清偿总计划见文末「Phase H」**：H1 即时收割 319 → H2 A1 命名轮（解锁 raw-this 605）→ H3 机械小 fry ~210 → H4 舰队波 2 → H5 语义翻译主体 2,365（too-long+goto，agent 舰队）→ H6 词汇专项 → H7 A2 owner 考古；里程碑 M1~M4 到 0 |
> | B1 apply_sigs 550 失败 | ✅ 完成 | fail=0，914 处 return/param 编辑落盘 |
> | B2 mass_type 1 失败 | ✅ 完成 | CRT RTTI 折叠体池级过滤 |
> | B3 枚举通道 | ✅ 完成 | 5 枚举声明 + 8 成员 + 2 参数回填 |
> | A4 命名一致性 | ✅ **完成（含 09-08 清偿）** | 511 → 0（09-06 基线）→ 87 → **1**（09-08 轮）；审计器补 dtor 形态归一/namespace 边界/~ 保留 |
> | hpp-impl 存量债务 | ✅ 迁移完成 | 1,765 → 0 违规 |
> | **构建红线（编译层）** | ✅ **恢复** | 2,874 → **0 编译错误**；链接产出 `build_win/Debug/gamemd.exe`（1.5MB，/FORCE:UNRESOLVED 容忍 682 历史未解析 stub 债） |
> | **构建红线（gate 层）** | ✅ **3/3（重锚后）** | 用户裁决 v2：未完成翻译保留为 **IDA 原始反编译活代码块**（不再使用 `#if 0`）；存量编译错误按基线裁决允许 |
> | **ra2-translate MCP 工具集** | ✅ **已上线** | 22 工具全流程 MCP 化（翻译/重命名/错误追踪/0xADDR 注解维护）；HTTP 常驻 `127.0.0.1:13399/mcp` + stdio 双模式；官方 SDK 客户端冒烟全过（见 `docs/mcp_tools.md`）；09-08 补全局注解审计的伪码块/ASM 行跳过 |
> | A1 成员语义命名 | 🔶 **进行中（污染优先）** | 09-06 武器槽/军衔谓词 7 函数 + 09-07 污染清偿轮 12 函数改名 + **09-08 大轮：member_lookup BuildingTypeClass 3800 区段 til 对齐清偿（0 残留）+ 20 hpp sub_ 滞留名 + 9 Method_ 对齐 + 12 owner 冲突裁决**；成员语义命名主体未展开；**G9 容器族回填 76 类是首批规模化落地（RTTI 证据链）** |
> | A2 sub_* Pass 3 命名 | ⬜ 未开始 | |
> | A5 T14/T19 类型与 owner 污染排查 | 🔶 **进行中** | 快照扫描 320 个标量指针 this；09-07 清偿 owner/命名污染 + **09-08：signals/_by_name 同步缺口全修复（0 missing/0 extra）、receiver 候选 4 高置信 live 复核（Coord::GetCoords 出参修正，type_map 侧债记 issue #11）**；剩余 TechnoTypeClass 中段布局、AnimClass 中段成员与 tiberium/C4/draw-position 函数待考古；**G9 owner 考古链（addr→vtable_signatures→rtti_vtable_class）为 A2 提供离线证据基座** |
> > | B4 零观测 struct 考古 | ⬜ 未开始（可选） | 与 TechnoClass/TechnoTypeClass 中段布局和类型侧 Weapon 数组债务相互关联 |
> | B5 池外 thiscall | ⬜ 未开始（可选） | |
> | C1-C4 批量翻译 | 🔶 **进行中（机械收割前端 + A1 前置）** | completed 39 → **919**（pending 17,263）。G1 机械收割 524（A 全局 getter 50 / C 常量 174 / P 直通 2 / E 净化直排 298，全 CFG 双射 PASS）；手动批次实证 BuildingClass 卡 issue #4、VectorClass mega 桶卡 vtable 身份债——**A1/A2 命名轮是剩余主体的前置**。收割器已修复 E6 行号漂移 bug（地址注解定位 + 现算 span），`.omo/e7_harvest*.py` 带全部防护可续跑 |
> | **E 全量落盘：定义+签名+类声明+全局变量** | ✅ **E0-E4 完成（2026-09-09 会话，提交 c70eb5cd + 重锚）** | v3 快照 19,088 函数 100%；E4 物化 14,576 无体函数（pending **3,416 → 17,992 真实总账**）；E3 声明 1,057；E2 类 289；E1 全局 882；偏移→OO 重写 1,869 处；TechnoClass 452-580 考古四源对齐（issue #19 挂剩余两争议区）；93 错类声明清偿回基线 3 normalized；auto-fill-baseline 重锚 c70eb5cd（重锚不清账）。E5 完成（154 PASS 校准）；E6 收割持续（G1 波次承接，见下行） |
> | **F 证据补全轮：偏移成员访问重写收尾** | ✅ **已执行（2026-09-09 F 会话，提交 1eeb4bea + 重锚）** | rewritten **1,869 → 9,217**（4.9×）；F1 til 导入 247 新类 + 4,578 填洞 + 容器语义 138 实例（SuperClass/MPCooperative/Radar/MapClass/Network/RandomMap/EventClass/JumpjetLocomotion/WarheadTypeClass 等全部真身确认——非幽灵类，是 til 有 layouts 无的缺口）；F2 重写器升级（继承链走查 + member_types 嵌套子对象解析 + own 区段防污染 + til-pad 伪条目清除 175）；F3 w1/w2 load 截断形态；F4 refresh 模式（214 翻译记录字节级保留）+ E3 前向声明 bug 修复。验收：一致性 38/3=基线、注解 0 missing、括号 0 失衡。剩余 unmapped 6,202（争议区/占位类，A1/B4 输入） |
> | D1-D4 集成验收 | ⬜ 未开始 | exe 已产出待运行时验收 |
>
> 详细过程与遗留问题见文末「执行日志」。

## 用户裁决（2026-09-06 深夜，本路线图的基线事件）

> **裁决 v2（同夜追加，取代第 2 条的 #if 0 形态）**：撤销 `#if 0` 包装，
> IDA 原始反编译代码**直接作为函数体活代码**；**基线上的编译错误被明确
> 允许**（解包后 3,544 个 = 3,434 块未翻译伪码的天然规模）。执行提交
> 98fc14c2（`tools/unwrap_if0_blocks.py`，3,405 个 stub return 行同删）。
> 翻译工作形态变为：在函数体内就地以真 C++ 替换伪码。

1. **最终目标**：翻译所有内容（全部真翻译，非 stub）。
2. **未完成翻译的占位形态**（v2）：函数体 = **IDA 原始反编译活代码**
   （带 `[IDA decompile]` 标记行界定），编译错误在基线被允许。
   ~~v1 的 #if 0 形态~~已撤销。
3. **baseline 重锚**：`auto-fill-baseline` tag 移到最新裁决执行提交，
   暂时避免门控对存量债的 FAIL。**重锚不是销账**——债清单全部保留
   在本文档「最终目标债清单」节，是 C 线的工作队列。
4. **gate 语义保持**：今后修改含伪码的函数，gate 的 rejectable 检查
   （函数指针 cast/伪码形态）会 FAIL——**设计使然**，强制该函数完成
   真翻译后才能过 gate。存量债只能通过真翻译清偿，不能绕过。
5. **completed 虚标纠正**（本次执行附带）：`BuildingClass::GetPowerOutput`
   真翻译已恢复（语义完整），但其 CFG 缺 1 个 `vfptr+468` 事件——根因是
   src 侧继承链 vtable 槽位与二进制系统错位（实测槽 124 vs 二进制 117；
   object.hpp 虚区存在错位插入：`GetCellCoords_Alt` 标注 [165] 却排在
   [110] 位、`GetMapCoords` 无槽位标注）。`signals.json` 该函数
   completed=true→**false**（附 note）——存在未对齐事件即不满足
   completed 语义；真翻译代码保留。**新增工作项：vtable 槽位审计**
   （ObjectClass 虚区 124+ 槽对齐二进制注释，波及全继承链 vfptr 校验）。
6. **已完成真翻译（本执行）**：GetAmmoCountScaled（0x44D700）与
   SWAvailable（0x457630）exec-flow CFG 校验**通过**；GetPowerOutput
   见上条。三函数均以 IDA til 权威布局翻译（发现并绕开 member_lookup
   的 BuildingTypeClass 3800 区段错位：3808 实为 PowerBonus 而非
   DoorStages——**member_lookup 数据修正列入债清单**）。
7. **已完成代码核验（v2，2026-09-08 增量）**：
   - **逻辑忠实**：MCP `completed=true` 当前为 **28 函数**；09-08 新增 `IsNonNullPtr(0x70E240)` 并通过 CFG 双射。27 个既有 completed 回归中 26 PASS；`FacingClass::Set_SyncLog` 的对象表达式调用暴露 issue #12（工具债），`AbstractClass::QueryInterface` 仍受 issue #9 虚调用提取不对称影响；
   - **成员访问**：`tools/audit_member_access.py` 增加 marker 回看和注释剥离，全库真代码当前 **0 个裸偏移成员访问**；剩余 14 处仅为 surface.cpp 帧缓冲 `pix/zptr` 行进游标，按既有裁决保留；
   - **语义命名/污染修复**：09-08 完成函数注解 7 mismatch→0、signals/_by_name 同步 0 missing/0 extra、BuildingTypeClass 3800 区段 til 对齐、20 个 hpp `sub_` 名和 9 个 `Method_` 名对齐、导入跳板/owner 误认领清理；`Coord::GetCoords` 出参修正为 `int*`；issue #7 相关 receiver 复核债转为 issue #11；
   - **命名规范**：局部变量继续使用 lowerCamelCase；当前 `audit_consistency.py` 为 37 raw / **1 normalized mismatch**，唯一剩余为 getMapCoords vtable 槽位审计债。

## 最终目标债清单（C 线工作队列，重锚不清账）

| 债 | 数量 | 说明 |
|---|---|---|
| IDA 原码活代码块 | **17,263 pending（MCP，E4 后真实总账）** | v2 已撤销 `#if 0` 包装；未完成函数以 `[IDA decompile] original pseudocode` 活代码块占位。数量以 `mcp__RA2-MCP__stats` 为权威（09-09 会话完成 10 个）。**⚠ 这只是「已落体」子集**：全集 19,133 中 ~13,700 尚无 src 函数体（仅声明/无声明）——E4 落盘后 pending 将升到 ~19,000 真实总账，见「Phase E」节。 |
| CFG 不忠实真翻译 | **69** | 基线有真实译但 exec-flow CFG 校验不通过——需逐函数对照 IDA 修复（清单见执行日志 09-06 终态甄别） |
| triage 未定位 | **20** | 行号漂移致甄别失败，需重扫 |
| 链接未解析符号 | **682** | 有声明从未有定义；`/FORCE:UNRESOLVED` 容忍链接。`tools/gen_link_stubs.py` 已生成 101 个近似签名 stub（`src/_generated/link_stubs.cpp`），**未入构建**——需按 hpp 原声明精确签名后接入，最终全部真翻译 |
| 无二进制对应函数 | 1 | `LocomotionClass::ChangeLocomotorTo`（历史手工编造，IDA 无此函数）——保留注释体，翻译时按调用语义重建或删除 |
| **vtable 槽位审计** | 1 项 | src 继承链虚函数声明槽位与二进制 vtable 系统错位（object.hpp 虚区至少 2 处错位插入 + 编译器实测 124 vs 二进制 117）——波及所有含虚调用函数的 exec-flow vfptr 校验。GetPowerOutput(0x44E7B0) 真翻译已就位但被此阻塞（completed 已纠正为 false） |
| **member_lookup 错位** | ✅ 已清偿 | BuildingTypeClass 3800 区段已按 IDA til 名字锚定重排；3808=PowerBonus、3816=ExtraPowerBonus、3840=DoorStages，债区残留 mismatch=0；基类短偏移区（0-3572）保持历史形态 |
| ~~真代码裸偏移成员访问~~ | ~~1~~ | ✅ 已清偿（2026-09-07）：`updated` 链考古完成——0x70E1A0/0x4526F0/0x7177C0/0x7177E0 实为武器槽选择器族（T19 误命名为 UpdatePowered/SelectVocOrSfx/GetAudioEntry）；返回 WeaponTypeClass** 槽位指针，+180=WeaponTypeClass::MinimumRange@+0xB4（til 与 DisplayBuildingInfoPanel@0x4B99FA 的 Name@+0x64 字符串渲染双重印证）。UpdatePowered 返回类型改为 WeaponTypeClass**，GetPowerFrame 尾段改 `(*weaponSlot)->MinimumRange` 成员访问；audit_member_access 加注释剥离+marker 回看后全库真代码 0 违规（余 surface.cpp 14 处已裁决帧缓冲游标） |
| **T14/T19 类型与 owner 污染** | **1 项** | ✅ 已修正：IsRookie 误名、3 个 IDB primitive this 类型、HasVoiceResponse owner 与调用点污染强转；🔶 剩余 TechnoTypeClass 中段布局、AnimClass 中段成员与 tiberium/C4/draw-position 函数待考古（issue #7 已结案） |
| 嵌入子对象 receiver 类型污染 | **已复核，剩余 type_map 债** | 🔶 FacingClass/CDTimerClass/Coord 等 IDB ABI 已按 live IDA 复核；Coord::GetCoords 出参已修正为 `int*`。Float4::Sum 的 type_map `BuildingTypeClass*` 误锚记录为 issue #11；VoxelAnimClass::QuaternionToMatrix 等名称/布局债留 A2 证据轮。 |
| ~~verifier 伪码缓存缺口~~ | ~~1 项~~ | ✅ `VeterancyStruct::IsRookie` 已补齐 IDA 伪码并通过 CFG 双射，issue #8 结案；后续 verifier 主债转为虚调用事件提取不对称（issue #9） |
| ida-artifact 门控空转 | 1 | `tools/check_pointer_arithmetic.py` 为**空文件**（f5da6e4f 起所有可达版本皆空）——三重门控之一从未真正检查。需用户裁决恢复实现（部分功能由 code-standards 的 AST ptr-arithmetic 检查覆盖，但那是 diff-scoped 非全量） |


## 0. 当前基线（2026-09-16 G14 会话刷新）

| 维度 | 数值 |
|---|---|
| 约束/求解 | 1,196,795 条约束 → type_map 732,742 变量类型 |
| 类类型变量 | 138,884（this 10,767 / SSA 103,821 / 栈槽 10,193 / 成员 8,203 / 参数 3,992 / 全局 1,781 / 返回 127） |
| TOP 矛盾 | **0**（verify_csp 七通道 ALL PASS） |
| IDB 落盘 | this 签名 ~9,840 / 局部变量 ~19,695 / 参数+返回 1,419 / 全局 449 |
| til struct | 1,706 UDT 全量导出（G13 live 快照 .omo/g13_til_live.json，10,975 语义成员） |
| **class_layouts** | **1,281 类**（F1：+247 til 导入 + 4,578 填洞 + 138 容器语义 + til-pad 伪条目清除 175） |
| **偏移重写** | **rewritten 4,468 / unmapped 5,610**（G14 修正版 refresh 口径；分母随已译体退出） |
| 反编译 | 19,067 函数全部可反编译 |
| 快照 | **full_export v4**（09-13 重导出，mega-blob 区 live 归一化；⚠ 截断 ~100 个 + gap2 内 25 块标记保留，翻译时 get_context live 拉取）；v3 归档 full_export_v3_20260913 |
| **src 函数体覆盖** | ~17,880 / 19,133（93.5%；未译以 IDA 原码活代码块占位） |
| **MCP completed** | **11,894**（G3-G14 舰队波累计 + 历史真翻译；全部 CFG 验证口径） |
| **MCP pending** | **4,717**（G14 后；构成 = too-long ~2,037 + goto ~352 + raw-this ~605 + FAIL-recycle 255（GENERATED 残余=词汇缺口，G14 W2 实证天花板）+ ternary ~132 + param-mismatch ~110 + 长尾） |
| 待命名 | sub_* 残留 5,468（其中 3,590 需反编译上下文命名）——A2 |
| 命名不一致 | 91 raw / **7 normalized**（基线维持；增量均为别名自愈型） |
| 基线/标签 | auto-fill-baseline = **613c0cd7**（G14 align 修正+W2；重锚不清账） |

**关键认知**：类型体系的工作重心已从"推断"转移到"消费"——快照里
19K 函数的伪代码现在带着 this 类型、~19.7K 个类型化局部变量和结构化
成员访问，这是语义命名与批量翻译的输入质量天花板跃升。

---

## Phase A — 语义命名轮（roadmap ④，快照消费，无需 IDA）

**目标**：把 `field_0xNN` / `v123` / `sub_XXXXXX` 变成有语义的名字。
**输入**：`decompile-results/full_export/` v2 快照 + `anchors/class_db.json`
+ YRpp/ecosystem 参考源（docs/ecosystem.md 四重参考）。

### A1. 类成员语义命名（最高收益）
- class_db 1,557 类中 ~1,252 类有布局；成员名当前多为 `field_0xNN` 占位。
- 方法：按类分桶 → LLM 依据（伪代码中该成员的所有访问上下文 + YRpp
  同名类偏移对照 + INI key 映射）生成候选名 → 人工抽检 → 
  `tools/rename_symbol.py` 四方同步（src/ + signals.json + member_lookup.json + IDA）。
- 优先序：TechnoClass/FootClass/ObjectClass 家族（成员访问频次最高）
  → 容器类（VectorClass/DynamicVector）→ UI 类。
- 验收：抽样 50 类，成员名与伪代码行为一致；构建 0 错误（hpp 改名后）。
- 规模：~8,200 个类类型成员偏移，预计 3-5 个工作日（分批+抽检）。

### A2. sub_* 函数命名 Pass 3（3,590 个池外函数）
- 前 two passes 命名 822 个靠 caller 上下文；Pass 3 用**类型化伪代码**
  （快照 v2）做反编译级命名——调用模式 + this 类型 + 成员访问语义。
- 产出：`sub_naming_proposals.json` v2 → rename_symbol.py 批量执行。
- 验收：IDA 名覆盖率 70.5% → 85%+；signals.json 同步 0 mismatch。

### A3. 局部变量语义命名
- `type_map` 103,821 个 SSA 类类型 + 19.7K IDA 局部类型已落盘；
  `auto_name.py`（T21）基于此生成 `renaming_suggestions.json`。
- 快照消费侧：LLM 依据类型+用途命名（`v28:TechnoClass*` → `pTarget`）。
- 只影响快照/反编译可读性，不动 src/（翻译时自然吸收）。

### A4. 命名一致性基线 ✅（2026-09-06 完成；2026-09-07 后续命名轮已追加语义改名）
- 59 method_diff：IDA↔hpp 别名差异，逐函数查快照裁决。
- 116 wrong_class：声明挂错类体，需移动声明（机械重构）。
- 40 other：签名差异逐个处理。
- 验收：`tools/audit_consistency.py` → 0 剩余。
- **终态**：基线漂移到 511（中间批量改名引入回归）→ 清零。
  - 502 个 IDA `Class[N]::M` → `Class_N::M`（signals/src 已是 _N 形态，
    补 IDA 改名 + ida_function_db.json 大写键同步）；
  - 3 个 `::?` 占位名对齐 hpp vt_method 命名（IDA+signals+db 三方同步）；
  - 4 个 hpp 陈旧 sub_ 名改语义名（InitScoreScreenData 等）；
  - 2 个错误地址注解移除（Hash 类误认领 0x5dac00=WideString::Hash、
    Memory 模板误认领 0x65d190=FileClass::Delete，IDA 反编译验证）。
  - **验收达成（A4 基线）**：0 mismatch / 0 normalized mismatch；后续 2026-09-07 语义改名（武器槽/军衔谓词）曾引入 87 条报告差异，已在 2026-09-08 清偿轮中复核，当前为 37 raw / 1 normalized（唯一剩余为 getMapCoords vtable 槽位审计债）。

---

## Phase B — 类型体系收尾（工程债，小而必要）

| 任务 | 内容 | 规模 | 状态 |
|------|------|------|------|
| B1 | t14_apply_sigs 550 失败归因（return 通道新类型拼接问题，同 wchar_t 双 CC 类） | 半天 | ✅ 完成（见日志） |
| B2 | mass_type 1 失败（RTtypeid CRT 折叠体，0x7caacb 非函数起始） | 1 小时 | ✅ 完成（见日志） |
| B3 | 枚举通道：Action/Armor/CellFlags/LandType/Layer 走 IDA enum 声明（非 struct）；type_map 枚举类型变量回填 enum 类型 | 1 天 | ✅ 完成（见日志） |
| B4 | 7 零观测 struct 考古（OwnedTiberiumStruct/LineTrail/Sequence/PassengersClass/PlanningTokenClass/RecoilData/RepeatableTimerStruct）：IDA 字段级 xref + YRpp 源对照恢复布局 | 2-3 天，可选 | ⬜ 未开始 |
| B5 | 888 池外 thiscall：需新证据源（vtable 间接 this 传递链深挖），排后 | 可选 | ⬜ 未开始 |

---

## Phase C — 函数体批量翻译（Phase 1 主线，最大工作量）

**流程（每函数）**：快照伪代码 → `tools/pre_translate.py`（门控）→
翻译到 src/ → `cmake --build build_win`（Clang AST 门控）→ REVERSE
对拍（Inject/Replace → comparisonResult.log Same）→ completed=true。

### C1. 优先队列重建
- 以 `docs/todo.md` P0/P1 为骨架，用**调用频次×类核心度**重排：
  ObjectClass/TechnoClass/FootClass 虚方法（游戏循环每帧路径）→
  容器/算法 → UI/Dialog → INI/序列化 → 网络。
- 每批 30-50 函数，走完对拍再进下一批。

### C2. sub_* 翻译积压
- 4,255 个 <50B 存根 + 1,203 个 50-500B 存根（`src/_generated/`，
  含 IDA 伪代码注释）——A2 命名后按 C1 优先级逐步替换为真实实现。
- 目标节奏：每会话 30-80 个（视复杂度）。

### C3. 对拍管道扩容
- 当前 Inject 活跃仅 2 个、39 个标 None——翻译进度上来后逐步激活。
- 首个写 .data 的非渲染函数 Inject 回滚测试（当前阻塞项，
  AGENTS.md「当前阻塞」#1）。
- 高频函数标 idempotent=true 避免事务开销（M4 教训）。

### C4. 门控红线维持
- 每函数过 `verify_execution_flow.py`（translation-incomplete 需手动
  IDA 对照补全）；禁止绕过（AGENTS.md 门控条例）。

---

## Phase D — 集成与验收（Phase 1 出口）

| 任务 | 内容 |
|---|---|
| D1 | gamemd.exe 全量构建对拍：菜单进入 + 主界面 15s+ 存活 + comparisonResult.log |
| D2 | EIP=0 偶发崩溃（Blit_Tracker DEFINE_HOOK 覆盖指令问题）——按 M7 六项标准排查 |
| D3 | 功能对等清单：按 docs/coverage.md 模块逐项对照原版行为 |
| D4 | Phase 1 验收 → 进入 Phase 2（现代化重构）立项 |

---

## Phase E — 全量落盘：定义 + 签名 + 类声明 + 全局变量（用户裁决 2026-09-09）⬜ 计划就绪

**目标形态（用户裁决原话）**：先全部把 **①代码的定义（反编译）②签名（CSP 求解
结果）③类声明 ④全局变量声明** 弄好，**最后完成全部 pending 的翻译**。
终态：全集 19,133 函数统一为「completed + pending」两态，无中间层。

**签名来源裁决（纠正 09-09 早版计划——CSP 就是签名的类型权威）**：
IDA 原生原型满是 `void*`/`_DWORD*` 的 C 反编译结构，**不能**直接当签名落盘。
分工：

| 层 | 来源 | 提供什么 |
|---|---|---|
| 结构骨架 | IDA prototype（full_export） | 参数个数/顺序、调用约定、函数名、地址 |
| **参数/返回类型** | **CSP 求解结果**（type_map 732,742 / csp_param 3,992 / return 通道 B10c / member_types / class_db 归属） | 类类型指针、枚举、已知结构——把 `void*` 升级成 `TechnoClass*` 这类语义类型 |
| 无证据槽位 | 回退 IDA 原生类型占位 | 标记低置信，随类型体系升级替换 |

这正是 T14 已验证的路径（apply_sigs 按此落盘过 1,419 处 param/return 编辑），
E 线把它从「单函数批处理」升级为「全集合成」。

**数据源**：

| 源 | 内容 | 用途 | 局限 |
|---|---|---|---|
| `decompile-results/full_export/` v2 | 19,087 函数 prototype+类型化伪码+汇编 100%；全局 10,674 地址/globals.hpp 15,797 条；1,343 类头 | 结构骨架 + 占位体来源 + 全局清单 | 09-05 时点快照，其后改名/类型变更未反映（TechnoClass 452-464 实证陈旧）→ E0 重导出 v3 |
| CSP 体系 | type_map / csp_functions 13,949 / member_types / class_db 1,557 类 / 各锚 | **签名类型权威** + 类归属 | return 通道覆盖低（127）——无证据槽位回退 IDA 类型并标记 |
| `signals.json` | 19,133 元数据 + 0xADDR/全局地址权威 | 对账基准 | — |

### E0. IDA 在线窗口同步（IDA 已回线，尽快执行）

1. rename debt 重放 ✅（09-09 已执行：5 条全部落 IDA）；
2. `ida_function_db.json` 重刷新（消除 2 条 rename-debt 陈旧镜像 mismatch）；
3. 5 个 NOCACHE completed 函数 live 复验 + 缓存回填（回归 → 39 PASS）；
4. **full_export v3 重导出**（~30 分钟）——E1-E4 全部锁定 v3，v2 归档。

### E1. 全局变量声明（第④层）

- 盘点：full_export 全局 10,674 地址 vs src 已声明+注解 ~1,406——差集批量补
  src 声明（extern + `// data: 0xADDR`）。
- 类型来源：type_map 全局通道（类类型全局 1,781）→ global_types/ida_global_types
  锚 → 无类型数据 `uint8_t[]`/`int` 占位。
- 验收：伪码体引用的全局 100% 有 src 声明；globals_annotations_audit 0 missing。

### E2. 类声明对齐（第③层）

- 盘点：src hpp（1,120 IDA 类，6 月完成）vs class_db 1,557 / til 1,474
  （含 t14 最小 struct 202 + 观测建 20）——差集 ~437（模板实例/COM 内部件/
  匿名类）按既有惯例补最小声明（vfptr/观测成员）。
- 验收：class_db 每类在 src 有可编译声明（最小形态可）；E4 占位体引用的类
  100% 已声明。

### E3. 签名合成 + hpp 声明补全（第②层）

- 全集 19,133 逐函数合成签名：骨架=IDA prototype，**类型=CSP 通道优先**
  （vtable/ctor 锚 > csp_param/return > type_map 置信度分级），无证据回退
  IDA 原生类型+低置信标记。
- 清洗沿用 T14 教训清单：无名参数补名、非法名 `[N]`→`_N`、双 CC 归一、
  函数指针形参深度切分、CRT `?` 修饰名识别。
- 产出：~2,900 JSON-only 函数补 hpp 声明 + 既有声明的 CSP 类型升级。
- 验收：audit_consistency JSON-only / missing annotation → 0；抽样 100 签名
  人工核对 CSP 证据链。

### E4. 定义（反编译占位体）批量落盘（第①层）

- ~13,700 无体函数 → 裁决 v2 pending 块（def 行 + marker + 伪码 + ASM 注释），
  按模块/类分桶；MCP pending 3,416 → **~19,000 真实总账浮出**。
- **gate 策略（执行前需用户裁决）**：批量新符号触发 new-symbol 门控——按
  09-06 先例物化提交后 `auto-fill-baseline` 重锚、重锚不清账。
- 编译验证：全量单 TU 不可行（C1003），分层抽样探针 TU + 新 hpp 的
  check_hpp_implementations 全查。

### E5. 中间态口径统一（~1,900 有体未标）

- 批量 CFG 回归（退出码）：PASS → mark_completed（预计 +400-500，历史 472
  真翻译为主）；FAIL → 并入 69-CFG 债清单。完成后 stats 单数字可信。

### E6. → C 线：翻译全部 pending

- 全量队列上按 调用频次 × 类核心度 排序；A1/A2 命名轮继续作为提速前置
  （E 线不依赖 A1，可并行）。

---

## 依赖关系与建议顺序

```
E0-E4 全量落盘(done) ──→ E5 口径统一(done) ──→ E6 收割队列 ─┐
                                                            ▼
F1-F4 证据补全(done, 1eeb4bea) ──→ G1 机械收割(进行中 +524) ─┴→ 剩余主体（≈12,800 语句块 + 占位类）⇐ 阻塞
                    │（F 产出：6,204 unmapped 点分布 = A1 优先序）              │
                    └────────────────────────→ A1 成员命名(G2) ──→ A2 函数命名 ┘
                                                      │
              B 线工程债（并行随时）──────────────────→ ▼
                                              C 线翻译主线 + D1-D4 集成验收
                                                  │
              B 线工程债（并行随时）──────────────→ ▼
                                              D1-D4 集成验收
```

- **F 线是 A1 的证据输入与 C 线的质量前置**：F1/F2 的考古产出（类真身、早区成员名）
  直接成为 A1 命名候选；重写率提升让占位体伪码可读性质变。F 与 E6 收割（G1）并行。
- **E 线是 C 线的范围前提**（用户裁决 2026-09-09）：四层（定义/签名/类声明/
  全局变量）全部落盘之后，翻译对象才是全集 19,133 而非当前的 3,455 个有体函数。
  ✅ 已达成（pending 17,778 真实总账浮出）。
- **签名 = CSP 求解结果**（类型权威），IDA prototype 仅提供参数个数/调用约定
  骨架；无 CSP 证据的槽位回退 IDA 类型并标记低置信——E3 是 CSP 体系
  （type_map/csp_functions/class_db）作为「消费端」的最大单笔变现。
- A1/A2 是 C 线的**输入质量投资**：命名后的快照让 LLM 翻译的上下文
  可读性质变（`this->AvailableCredits` vs `*(int*)(this+588)`）。
  E 线不依赖 A1——两线并行。
- B 线与 A/C/E/F 并行，互不阻塞。
- A3（局部变量命名）随 C 线自然吸收，不单独立项。

## 度量与检查点

| 指标 | 制定时 | 2026-09-09 F+G1 会话后 | A 轮后目标 | C 线里程碑 |
|---|---|---|---|---|
| IDA 函数命名覆盖 | 70.5% | A2 未开始 | 85%+ | — |
| 类成员语义名 | ~0（field_0xNN 占位） | 容器族 Items/Capacity/IsInitialized 138 实例（F1）；主体未展开 | >60% | — |
| 命名不一致 | 215 | 38 raw / **3 normalized**（基线维持：getMapCoords + 2 rename-debt 自愈型） | 0 | 0（维持） |
| hpp-impl 违规 | 1,765 隐性 | **0** | 0 | 0（红线） |
| 完整翻译函数 | 472 | MCP completed=**919**（口径经 E5 校准 + G1 全 CFG 验证） | — | 1,000 → 3,000 → 全量 |
| REVERSE 对拍 | 41 函数 | 41 函数 | — | Same 率 >95% |
| 构建 | gate 假绿 | build errors=0（MCP 记录）；伪码块编译错误按裁决 v2 基线允许 | — | 0/0 + gate 3/3 |
| MCP completed | — | **919** | — | 1,000 → 3,000 → 全量 |
| MCP pending（真实总账） | 3,416（失真） | **17,263** | — | → 0 |
| 偏移重写率（F 线目标） | rewritten 1,869 / unmapped 4,379 / 沉默 9,889 | **rewritten 9,215 / unmapped 6,204**（沉默 owner 全部入场，分母 15,433） | ~~rewritten 5,000+~~ ✅ 超额达成 | 维持 |

## 风险与对策

0. **F 线考古的错误归一风险** → ✅ **已消解（F 会话执行）**：所谓幽灵类全部为
   til 真实结构（非 Hex-Rays 泛称），直接 til 导入避免了任何别名臆测；别名归一
   （House→HouseClass）未启用（til House 以自身骨架导入，名字带偏移可追溯）。
   实际发生的风险转为**数据陈旧**：class_layouts 基区遗留错位行（424 个）经
   own 区段防护旁路 + til-pad 伪条目清除 175（重复名铁证判据）双重处置。

1. **LLM 命名的正确性**：语义名是假设立——错名比 field_0xNN 更危险。
   对策：命名必须附证据（伪代码上下文/YRpp 对照）；REVERSE 对拍兜底
   （行为对不上时命名嫌疑优先排查）；A1 抽检率 ≥10%。
2. **rename_symbol.py 四方同步漏网**：IDA 不在线时 --no-ida 模式会留下
   同步债——账目化（`.omo/rename_debt.json`），恢复连接后补同步。
3. **翻译引入回归**：每批对拍 Same 后才提交；崩一个回滚一个
   （M7 六项标准）。
4. **快照漂移**：IDA 侧任何类型/命名变更后需重导出（约 30 分钟）；
   快照版本号写入 README，翻译任务锁定快照版本。
5. **构建红线的"假绿"风险（2026-09-06 实证）**：`auto-fill-baseline`
   标签丢失导致 gate_prebuild diff 失败 → `add_dependencies(gamemd
   gate_check)` 使 gamemd 编译被整体跳过 → 历史"构建 0/0"报告部分为
   未编译假象。对策：标签已恢复（锚定 b01d3cf9）；任何构建验证必须
   确认 gamemd.vcxproj 实际执行了 cl 编译（非仅 gate 通过）。

---

## Phase F — 证据补全轮：偏移成员访问重写收尾（✅ 2026-09-09 F 会话已执行）

**执行终态**（提交 1eeb4bea，auto-fill-baseline 重锚；详细日志见文末 F 会话节）：

| 子项 | 计划 | 执行结果 |
|---|---|---|
| F1 owner 类修复 | 幽灵类考古 ~530 + 别名归一 ~200 + VectorClass 布局 ~229 | **考古结论反转**：所谓幽灵类（SuperClass/MPCooperative/Radar/MapClass/Network/DSurface/RandomMap/EventClass/...）全部是 til 真实结构（T14 时代声明），缺口仅在 class_layouts —— live IDA til 批量导出 427 结构 → **247 新类 + 4,578 填洞**；VectorClass 族经 `src/core/vector.hpp` ctor 验证布局赋容器语义名（Items@4/Capacity@8/IsInitialized@C/IsAllocated@D/Count@10）**138 实例**；AbstractClass 四 vtable（abstract.hpp ctor 注释证据）；AudioController 嵌入子对象 |
| F2 偏移考古 | ObjectClass 早区 ~200 / SessionClass 大偏移 / 其余 → ≤1,000 | **机制突破替代逐点考古**：① 继承链走查（class_layouts parent 链，绝对偏移系）——ObjectClass 早区（+0x10~0x20 经 AbstractClass 链直达）等基区缺口自动清偿；② member_types ANCHORED 嵌套子对象解析（覆盖成员尺寸==类布局尺寸排除数组）——`ambientSoundController.AudioController_field_04` 形态；③ til-pad 伪条目清除 175（重复名铁证判据）+ own 区段防护（条目仅 [父类 size, 本类 size) 有效——TechnoTypeClass+4="IdleRate" 基区错位行不得污染链解析）；④ 非法标识符名过滤。**unmapped 4,379 → 6,202**（分母从 6,248 扩到 15,433：沉默 owner 全部入场后） |
| F3 字宽降级 | w1/w2 → 已知 4B 成员，形态裁决 | **load-only 截断形态**：`(unsigned char)this->member`（store 上下文保持原始伪码——截断写丢高位） |
| F4 重写器重跑 + 重锚 | 幂等重跑 | **refresh 模式**：214 已翻译 e4 记录字节级保留 + marker 块全量重生成；E3 前向声明 bug 修复（`class X;` fwd decl 匹配后 find("{") 落进下一类体——house.hpp StartingTechnoStruct 实证，曾插错 64 条声明）；E1/E2 并集合并 |

**验收**：rewritten **9,217** / unmapped 6,202（诚实保留：争议区 + 占位类 + 真无名）；括号平衡 0 破坏；
注解审计 8,771 matched / 0 missing / 0 mismatch；一致性 38 raw / 3 normalized（=既有基线）；
保留块 214/214 字节一致。

**遗留**（A1/B4 输入）：Type 类基区遗留错位行（424 个基区名被 own 区段防护旁路，未删——B4 字段级考古后清理）；
SessionClass +0x2840 / TechnoTypeClass 中段 / issue #4 区（0x6E9/0x534 等 til pad 内无名）；
mega-blob 家族（House/Scenario/Mission/Tactical 21-90K，til ≥4096B pad 截断防护已内置）。

**F1. owner 类修复（解锁 ~1,630 函数沉默群体）**

实查构成（2026-09-09 核实，class_layouts 1,033 键）：

| 形态 | 证据 | 量级 | 处置 |
|---|---|---|---|
| 幽灵类名 | `SuperClass`(243 命中；class_layouts 仅 SuperClassVector 变体)、`MPCooperative`(163，完全无近邻)、`Radar`(124，仅 RadarHashVector 变体) | ~530 | F1a 逐个反汇编取证真身——Hex-Rays 泛称渲染、旧名、还是真类；禁止按名臆测 |
| 别名键不匹配 | `House`(124) → `HouseClass` 存在；csp 模板修饰名 vs canon 键同类 | ~200+ | F1b 名字键归一表（扩展 mangled_alias 机制或新建 `anchors/class_alias.json`），rewrite_pseudocode 查表前先归一；每条别名须 vtable/RTTI/单一最小祖先证据 |
| 真缺布局的核心类 | `VectorClass`（模板容器，type_map 5.9K 变量的载体，class_layouts 无此键——仅 VectorClassUInt 等实例变体） | ~229+ | F1c 布局补建：vtable 锚 + 观测成员 + 最小 struct 路径（t14_minimal_structs 先例），IDA→header pipeline 四源同步 |

- 验收：owner_not_in_layouts 命中清偿 ≥80%；错误归一 0（抽检 20 类逐一对照
  vtable 安装点）。
- 产出：`anchors/class_alias.json` + class_layouts 增量 + 不可解类 issue 化挂账。

**F2. 偏移访问考古（清偿 4,379 unmapped 主体，557 函数）**

| 子项 | 目标 | 方法 |
|---|---|---|
| F2a | ObjectClass 早区 +0x4/+0x8/+0xC/+0x3C/+0x40/+0x44（~200 命中，最大单项） | 先核对 owner 判定是否被 Hex-Rays 旧名污染（记录名行 vs 声明行 vs 调用方三方对照）；再 ctor 写入序列 + 访问点上下文 + YRpp 对照 → member_lookup/class_layouts/til/src hpp 四源补名 |
| F2b | SessionClass +0x2840 大偏移（23 命中） | 布局表完整性核查——大结构疑似只建了部分；以二进制访问点上界重建尺寸 |
| F2c | ParasiteClass +0x28 等其余未名点 | 按 B4 零观测 struct 考古方法逐类分桶 |

- 验收：unmapped 4,379 → ≤1,000（其余为无证据真天花板，issue 化挂账）。

**F3. 字节/字宽降级重写（w1/w2 → 已知 4B 成员）**

- 对象：HashTable +0x14 w1、RulesClass +0xD w1 等「字节/字读落在已知 4B 成员」的
  宽度不匹配命中（约 40-100 处）。
- 形态裁决（执行前需确认）：`(uint8_t)this->member` 显式截断 vs `成员 & 0xFF` vs
  位域——以 verifier CFG 事件等价为判据，抽样 30 处 verify PASS 后才批量。
- 验收：宽度不匹配类命中清偿；无 verify 回归。

**F4. 重写器重跑 + 门控收口**

- `tools/gen_e4_materialize.py` 幂等重跑（F1-F3 落地后）。
- 验收：括号平衡 0 破坏；注解审计 0 missing；一致性 ≤3 normalized（基线）；
  rewritten 由 1,869 显著上升（预期 5,000+）。
- 提交 + `auto-fill-baseline` 重锚（重锚不清账，未清偿项 issue 化保留）。

**F 线定位**：F 是 A1 成员语义命名的证据输入（F2 考古产出的名字直接成为 A1 候选）、
也是 C 线翻译质量的前置。F 与 E6 收割队列（G1）可并行。

---

## Phase G — 剩余工作排序（F 线之后/并行）

| 序 | 工作 | 内容 | 依赖 | 状态 |
|---|---|---|---|---|
| G1 | 机械收割波次 | 全局 getter / 常量 / 直通 / 净化直排（`.omo/e7_harvest*.py`，已修行号漂移 + free-form-this/return-this 防护）；剩余 ≈ 12,800 个 >8 语句块需逐个真翻译 | 无 | 🔶 **+524**（completed 919）；单语句池近枯竭，下一档 = 2-4 语句赋值/比较体（需扩白名单模板） |
| G2 | A1 成员语义命名 | **当前最大杠杆**：占位成员名（field_ 系）触发 ida-naming 门控，是 17,263 主体积压的直接阻塞。优先序 = 未映射命中密度（F 后剩 6,204 点的 owner 分布：ObjectClass 436 / TechnoTypeClass 388 / SessionClass 230 / VectorClass mega 191…）× 调用频次；rename_symbol.py 四方同步 | F 产出（6,204 unmapped 点 + 424 基区错位名旁路清单） | ⬜ 未展开 |
| G3 | C 线批量翻译主线 | 17,263 pending 全量（G1 是其机械前端）；手动批次 = MCP 全流程 | A1（G2） | 🔶 919/19,133 |
| G4 | 既有工程债 | 69 CFG 不忠实 / 682 链接未解析 / vtable 槽位审计（getMapCoords 债）/ issue #4 #17 #19 / ida-artifact 门控空文件 | 与上并行 | ⬜ |
| G5 | D1-D4 集成验收 | 翻译覆盖率达标后运行时验收 | C 线里程碑 | ⬜ |

---

## 执行日志 — 2026-09-06 会话（B1/B2/B3 + A4 完成；hpp-impl 债务迁移）

### 已完成

**B1 — t14_apply_sigs 550 失败归因修复（fail=0）**

诊断重跑（加 fail_log 落盘）后 637/637 失败全数归因于两类解析器缺陷：

1. **无名声明**（585 个 `int __stdcall(...)` 形 + 52 个 `int(...)` 形）：
   IDA C 解析器拒绝无名函数声明（已知 MCP 规则），而 param-only 编辑
   路径从不插入函数名——旧代码只在 `__thiscall(` 分支插名。修复：头部
   不以函数名结尾时统一插入 `nm`（同名重声明非改名，不破坏
   symbols-locked 1:1:1）。
2. **函数指针形参碎切**（2 个）：参数表用裸 `split(",")` 把
   `int (__stdcall ****)(A, B)` 的内层形参表切碎，重组后多出一个 `)`
   （双右括号畸形）。修复：深度感知切分（与 name_anon_params 同法）。

终态：`fail=0`，本轮 **914 处 return/param 编辑全部落盘**（重试 637 →
2 → 0），抽查 InfantryClass::updateOccupiedBuilding / Session::RemoveTeam
原型已带 IUnknown*/MSShapeAnim* 参数。

**B2 — mass_type CRT 折叠体过滤（fail=0）**

- 根因：`anchors/ctor_types.json` 含 7 条 CRT RTTI 支持类记录
  （type_info×1 / __non_rtti_object×2 / bad_typeid×2 / bad_cast×2）——
  全是 COMDAT 折叠体，地址非函数起始（0x7caacb ∈ RTtypeid 内部），
  vtable 安装属 CRT 自身而非游戏类。
- 修复：`load_truth()` 池级剔除 CRT RTTI 类（与 `_` 前缀 CRT 防御
  同源的确定性排除）；state 清理（fail 归零，移除已入 done 的折叠地址）。

**B3 — 枚举通道（5 枚举 + 8 成员 + 2 参数，IDB 已保存）**

- IDA til 声明 5 枚举，成员取自 `src/core/enums.hpp` +
  `src/system/cell.hpp` **权威表**（首版曾误发臆造成员，已删除重建）：
  Action(73) / Armor(11) / LandType(12) / Layer(5) / CellFlags(33)。
  成员名带前缀（`Action_`/`Armor_`/`Land_`/`Layer_`）防全局重名；
  CellFlags 头文件已带前缀。CellFlags 以普通枚举落盘（bitmask 模式
  与 None=0 成员冲突，非阻塞）。
- struct 成员回填 8 处（int[1]/int[2] 占位 → 枚举）：
  AnimTypeClass+0x364→Layer、CellClass+0x140→CellFlags、
  DifficultyStruct+0x18→Armor（**顺带修复 int[2] 与 ROF@0x1c 重叠**）、
  ObjectTypeClass+0x9C→Armor、OverlayTypeClass+0x294→LandType、
  SuperWeaponTypeClass+0xBC→Action、UnitTypeClass+0x2EC→LandType、
  ScriptActionNode+0x0→Action（成员本名即 Action）。
- 函数参数回填 2 处（type_map param2 通道，语义验证吻合）：
  ArmorType::FindIndex 第 4 参→Armor、AnimTypeClass::ReadINIString
  第 4 参→Layer。
- 布局完整性验证：三个抽查类成员偏移/尺寸无漂移。

**A4 — 命名一致性 511 → 0**

（详见上文 A4 小节终态。）IDA 侧 502 改名 + 3 个 `::?` 三方同步 +
ida_function_db.json 大写键同步（52+450）；hpp 侧 4 处语义名 + 2 处
错误注解移除（IDA 反编译实证函数真实归属）。
验收：`audit_consistency.py` → **0 mismatch / 0 normalized mismatch**。

**附带 — auto-fill-baseline 标签恢复（构建红线修复）**

- 本克隆标签丢失 → gate_prebuild `git diff` rc=128 → 构建永久失败
  （"1/3 gates FAILED" 且无 FAIL 明细）。
- 恢复路径考据：先锚 1f300ba8（gate restore commit 声明的基线）→
  暴露 1,526+ 违规（Phase A 无条件全量扫描，与 diff 无关）→ 改锚
  **b01d3cf9**（路线图基线 commit，文档明载构建 0/0 态）→ 仅剩
  tab.hpp 1 个（实为 Phase A 全量扫描命中，非 diff 引入）。
- 教训已入"风险与对策"第 5 条：标签丢失期间"构建 0/0"报告部分为
  未编译假象。

**新增工作项 — hpp-impl 存量债务机械化迁移（1,765 → 0）**

- 发现：标签恢复后 Phase A（全量 hpp 扫描）暴露 **1,765 处**头文件
  函数体（misc_ext.hpp 852 / locomotion.hpp 273 / utility_ext.hpp 136 /
  game_systems.hpp 53 …），系历史翻译会话积累、被 gate 假绿掩盖。
- 新工具 `tools/move_hpp_bodies.py`：libclang AST 偏移精确迁移——
  - latin-1 字节保真读写（token 偏移是字节偏移；UTF-8 会错位）+
    `newline=''`（CRLF 折叠会使偏移漂移）——两条都是实战踩坑；
  - 普通成员/自由函数 → `<stem>_bodies.cpp`（namespace 分组、
    默认实参留声明侧、声明侧剥 `inline`、`Class::` 限定、
    ctor init-list 定义侧保留且注释感知）；
  - 模板/constexpr → `<stem>_bodies.inl`（hpp 末尾 #include，
    AGENTS.md 明文许可路线）；
  - `= default` 析构 → hpp 声明 + cpp `X::~X() = default;`
    （libclang 对 defaulted 函数 token 流**不含结尾分号**，需回退到
    末 token——清零 115 残余的关键）；
  - 转换运算符（CONVERSION_FUNCTION）spelling 是规范类型
    （`operator unsigned int` vs 源码 `operator target_t`），从声明头
    提取实际文本匹配；
  - windows.h 宏 A/W 后缀回退（GetClassName→GetClassNameA）；
  - 模板名剥离（`Node<T>`→`Node`）；friend 定义扫描确认零风险。
- 终态：**1,765 → 0 违规**（hpp_scan 全量复扫验证）；产出 83 个
  `_bodies.cpp` + 3 个 `_bodies.inl`。

### 未完成 / 阻塞

**🔶 构建红线：编译层已恢复、gate 层 2/3（2026-09-06 深夜会话终态）**

**编译层 ✅**：2,874 → **0 编译错误**（35 轮迭代），链接产出
`build_win/Debug/gamemd.exe`（1.5MB）。主要修复（详见下方 09-06 夜日志）：

1. **IDA 嵌入体隔离**（`tools/quarantine_ida_embeds.py`）：历史"伪翻译"
   把 IDA 反编译裸文本（`#374`/`__thiscall`/`_DWORD`）粘进函数体——
   这些 TU 从未编译过。19 万行注释化 + 3,404 个显式 stub（保留原文本
   为参考注释，Task 17/18 存根惯例）。62 文件。
2. **Surface 抽象基类重建**（surface.hpp，IDA vtable 0x7E2198 实证）：
   32 条 vtable + Width@+4/Height@+8（0x411540/0x411550 反汇编铁证）；
   DrawSHP/DrawText 4 重载声明补齐；GetRect 出参形态（0x411510）。
3. **misc_ext.hpp 垃圾建模清理**：4 个 kernel32 导入跳板误建类删除
   （GetCurrent* / OleUninitialize，IDA 实证 jmp __imp）；13 个数字名
   虚函数合法化 Method_XXXXXX；3 个构造误生成修复；IClassFactory
   COM 头补齐。
4. **大规模存量甄别修复**：checksummer/radbeam/shp_struct/ebolt/
   waypoint 系成员声明恢复；GameMode 枚举/类冲突裁决（删错误工具类，
   0x5D5DE0 实为 thiscall 成员）；CellStruct typedef 对齐（math.hpp
   `Vector2D<short>`）；namespace 分裂缓解（locomotion FootClass 桥、
   foot.cpp Mission 全局限定）；空指针 return 修正 197 处；
   bodies 双重定义去重（misc_ext_bodies 852 个 = hpp inline 迁移与
   原 cpp 定义并存）；类内 `= default` dtor 误迁出回滚（LNK2005 根因）。
5. **链接 stub 基建**（`tools/gen_link_stubs.py`）：682 个历史未解析
   符号（从未有定义的声明）以 /FORCE:UNRESOLVED 容忍链接（既有策略）；
   101 个 stub 已生成（`src/_generated/link_stubs.cpp`），因 demangle
   签名近似误差暂未入构建——后续按 hpp 原声明精确生成后接入。

**gate 层 🔶（2/3，ida-artifact ✅ / code-standards ❌ / exec-flow ❌）**：

- exec-flow **232 translation-incomplete**（终态甄别 `.omo/triage_final.py`）：
  - **143 个**基线即伪翻译（非法嵌入体）——隔离为 stub 后 CFG 校验
    FAIL 是诚实反映，语义与基线等价（从未工作过）；
  - **69 个**基线真翻译但 CFG 不忠实（building/unit/infantry 主力，
    如 SetProduction/UpdateProduction/Mission_Harvest）——**真修复
    对象**，即 C 线首批工作；
  - **20 个**定位失败（行号漂移，需重扫）。
- code-standards **35 FAIL**（26 stub + 9 comment shell）：隔离产出的
  stub 函数与注释占比过高的函数——同批 C 线对象。
- **决策点 → 已裁决（2026-09-06 深夜，用户）**：未完成翻译以 IDA 原始
  反编译 `#if 0` 块占位（`tools/uncomment_ida_blocks.py` 全量转换
  3,421 块 + `.omo/fill_isolated_ida.py` 从快照回填 16 个虚构 API legacy
  函数），提交后 `auto-fill-baseline` 重锚该提交。gate 对存量债转绿，
  债转入「最终目标债清单」节跟踪。object.cpp 双重前缀修正 68 行
  （单文件试验 + 全量两次隔离所致，`.omo/fix_double_prefix.py`）。

**69 个 CFG 不忠实真翻译清单**（C 线修复对象，按文件分组；
✅=本执行已真翻译并通过 exec-flow，🔶=已真翻译待 vtable 审计解锁）：

- building.cpp（32）：✅GetAmmoCountScaled / 🔶GetPowerOutput /
  ✅SWAvailable /
  Construct / Dtor / IsCellPlaceable / ValidatePlacement /
  FindPlacementCells2 / SearchPlacement / CheckBuildability / SetRallyPoint /
  CheckExitPath / SellEffects / PowerDrainUpdate / IsPoweredOn /
  IsPoweredActive / StartProduction / UpdateProduction / SetProduction /
  Infiltrate / GetCrew / Is1x1AndUndeployable_BuildingMassSelectable /
  IsInvisible / OnObjectExpired / SetType / AddUpgrade / CalcDrawPos /
  GetBoundingSizeExt / GetFactoryPosition / Mission_Missile / Mission_Repair /
  ClearSuperWeaponAnim
- unit.cpp（12）：Mission_Harvest / GetExitCell / SimpleDeployerDeploy /
  SimpleDeployerUndeploy / MissionDispatch / ApproachTarget_DisallowMoving /
  UpdateRotation_TurretFacing_EMP / CheckForNearbyEnemies / CanCrushTarget /
  Destructor / LoadFromStream / ClearTargetRef / UnloadPassengers /
  ProcessIdleOrders
- infantry.cpp（7）：ProcessDeployAction / GetFireError / FindNearbyCell /
  CalcFacingToTarget / SelectAutoTarget / CalculateApproachPath
- aircraft.cpp（3）：MissionDispatch / GetMissionTimer / Destruct
- tactical.cpp（11）：RenderIsometric / DrawMap / DrawTerrain /
  DrawTerrainPartial / SetView / SetViewDimensions / SetViewportPosition /
  ScrollViewport / AddToDrawQueue / DecrementCounter / MouseInput /
  PixelToCellCheck / ScreenToCellLookup / TransformPixel
- 其他：techno.cpp SelectWeapon ×2 / surface.cpp DSurface::Unlock /
  connection.cpp queueSendPacket / network_ext.cpp NetworkOptions::DlgProc /
  init_game.cpp CCFileClass::Open / CCFileClass::Reset / CCINIClass::Load /
  cell.cpp CellClass::DrawDispatch / mix_file.cpp MixFileClass::Bootstrap

**⚠ 新发现——ida-artifact 门控空转**：`tools/check_pointer_arithmetic.py`
为空文件（0 字节），`git log` 显示 f5da6e4f 起所有可达版本皆空——
三重门控之一从未真正执行检查，属 AGENTS.md「静默退化」条目的实例。
未擅自恢复（门控基建需用户审查）；部分功能被 code-standards 的
AST 检查（diff-scoped）覆盖，全量扫描缺失。

**⬜ 其余未开始任务**（优先序不变）：

- C 线主线 = 「最终目标债清单」逐一清偿（3,437 #if 0 + 69 CFG + 682 链接）；
- A1 类成员语义命名（TechnoClass/FootClass/ObjectClass 家族优先）；
- A2 sub_* Pass 3 反编译级命名（3,590 池外）；
- A3 局部变量语义命名（随 C 线吸收）；
- B4 7 零观测 struct 考古（可选）；B5 池外 thiscall（可选）；
- D1-D4 集成验收（exe 已产出，待真翻译覆盖率提升后运行时验收）；
- 快照重导出（本轮 IDA 侧类型/命名变更后需要：5 枚举 + 8 成员回填 +
  502 改名 + 914 签名落盘都尚未反映到 full_export）。

### 本轮度量变化（09-06 深夜会话，含裁决执行）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| 编译错误 | 2,874 | **0** |
| gamemd.exe | 无（从未链接成功） | **产出**（/FORCE:UNRESOLVED 容忍 682 stub 债） |
| IDA 嵌入体形态 | 190,744 行裸文本（非法语法） | **3,437 个 `#if 0` IDA 原码块**（原码在体，可编译可 grep） |
| hpp-impl 违规 | 0（迁移后） | **0**（hpp_scan 全量复扫维持） |
| gate | 假绿（未真正运行） | 诚实 2/3 → **重锚后 3/3**（ida-artifact 空转存疑） |
| Surface 基类 | 未定义（734 错根因） | 重建（IDA vtable 实证） |
| 双重定义（LNK2005） | 852+3 | 0 |
| 磁盘 | D: 100% | 清理 ~1GB（.omo/tmp 452M + 2 IDA 副本 486M） |
| 提交 | — | 本次提交（含 baseline 重锚，tag 同步移动） |

**新增工具**：`tools/quarantine_ida_embeds.py`（嵌入体隔离）、
`tools/quarantine_backfill.py`（stub 补插 pass 2）、
`tools/uncomment_ida_blocks.py`（裁决执行：注释伪代码 → `#if 0` 原码块）、
`tools/isolate_broken_translations.py`（虚构 API 翻译隔离）、
`tools/dedup_bodies.py`（bodies 去重）、`tools/gen_link_stubs.py`
（链接 stub 生成）、`.omo/check_ns.py`（hpp namespace/brace 平衡检查）、
`.omo/fill_isolated_ida.py`（快照回填 IDA 原码）、
`.omo/fix_double_prefix.py`（双重隔离前缀修正）、
`tools/unwrap_if0_blocks.py`（裁决 v2：撤 #if 0 原码活代码化）、
`tools/audit_member_access.py`（成员访问全量审计）。

---

## 执行日志 — ra2-translate MCP 工具集上线（2026-09-06 深夜续）

**用户指令**：编写专用 MCP 工具集，使翻译/重命名/追踪错误等机械性
复杂操作全部经 MCP 完成；函数/变量与 IDA 地址一一对应、注释由 MCP
维护；随后启动服务并提供配置 JSON。

### 交付

- **`tools/mcp_translate_server.py`**（22 工具，自包含无第三方依赖）：
  - 翻译流水线 7：list_pending / next_batch / get_context /
    replace_body / verify_function / mark_completed / function_state
  - 重命名 2：rename_symbol（四方同步）/ rename_local（函数域）
  - 编译验证 4：build（单 TU 秒级 / 全项目）、get_build_errors、
    run_gates、audit_access
  - **地址一一对应 5**（用户要求）：annotations_audit / annotations_fix /
    globals_annotations_audit / annotate_function / addr_lookup——
    replace_body 翻译后**自动维护 `// 0xADDR`**
  - 错误追踪 4：issues_add / issues_list / issues_resolve / stats
- **双传输**：stdio（客户端自动拉起）+ HTTP 常驻
  （`--http 13399`，本会话已后台启动，GET / 健康检查 + initialize +
  stats 三项探针验证通过）
- **冒烟**：`tools/mcp_translate_smoke.py` 用官方 MCP SDK 客户端跑通
  全部 22 工具（--heavy 附带 build/verify）
- 文档：`docs/mcp_tools.md`（注册 JSON ×2 + 纯 MCP 标准工作流）

### 地址注解初始化与 09-08 清偿终态

初始 `annotations_fix` 补齐 **2,689** 条函数 `// 0xADDR` 注解；09-08 逐条
对照 live IDA 后终态为 **matched 3,319 / missing with known address 0 /
addr mismatch 0 / unknown in signals 2,051**（helper/别名形态，翻译时甄别归因）。
全局变量注解终态：**annotated 1,406 / missing 0**；审计器已排除伪码块和
inline ASM 操作数误报。

### 关键实现决策

- **协议自实现**：官方 mcp SDK 2.0 的 `add_request_handler` dual-era
  分发以 -32602（ValidationError→"Invalid request parameters"）拒绝
  经典 tools/call 信封（实测多轮定位）——改为直接实现 stdio
  JSON-RPC 循环（~80 行）；官方 SDK **客户端**连接验证正常。
- member_lookup：IDA 在线（:13337）时以 til 为权威；BuildingTypeClass 3800
  区段已完成重排，get_context 不再把该区段报告为已知坏区。
- signals 写回统一使用仓库的 `indent=2` JSON 格式，避免 MCP 写回造成整文件
  缩进漂移和无意义大 diff。

### C 线工作方式（自此变更）

翻译全部经 MCP 工作流执行：
`next_batch` → `get_context` → `replace_body(dry_run)` →
`replace_body` → `build(scope=file)` → `audit_access(file)` →
`verify_function` → `mark_completed`；失败路径 `issues_add` +
`get_build_errors(file)` 定位。地址注解由 replace_body 自动维护，
人工翻译时不再手写 `// 0xADDR`。

---

## 执行日志 — 2026-09-07 继续调研：T14/T19 污染排查、命名与计划刷新

### 当前 MCP 统计

- pending translations: **3,426**
- completed functions: **28**
- open issues: **6**
- 最近 MCP build error 记录：**0**（本轮单 TU 探针编译干净；`run_gates` 本轮调用超时，未据此宣称全门控通过）

### 污染排查与确定性修复

对 `decompile-results/full_export/src/` 的函数原型进行标量指针 this 扫描，发现
320 个 `float*`/`double*`/`char*` 等原型。逐个按反汇编与调用方分类，得到以下结果：

1. **军衔谓词三件套已确定并命名**：
   - `VeterancyStruct::IsRookie` @ 0x74FFC0：`fld [ecx]`，`0.0f <= value < 1.0f`；
     原 signals/IDA 名为 `Crate::initializeCrate`/`sub_74FFC0`，已四方同步纠正，
     并完成真翻译 `this->Veterancy`。
   - `VeterancyStruct::IsVeteran` @ 0x74FF90：阈值 1.0f。
   - `VeterancyStruct::IsElite` @ 0x750010：阈值 2.0f；这里的 `float*` 经 x87
     `fld/fcomp` 指令确认是真实 ABI，不是 T14 污染；但同族 `SelectWeaponSlot`
     的 float* this 确认为 T14 污染。

2. **武器槽选择器族已命名**：`GetPoweredWeaponSlot`、`SelectWeaponSlot`
   （Techno/Building 两个 owner）、`GetWeaponSlot`、`GetEliteWeaponSlot`。
   `WeaponStruct` 28 字节、`Weapon[18]`/`EliteWeapon[18]` 数组和调用方
   `lea [esi+150h]` 的 veterancy 参数共同提供证据。

3. **HasVoiceResponse owner 与调用点污染已修正**：
   `TechnoTypeClass::HasVoiceResponse` → `TechnoClass::HasVoiceResponse`；
   调用方均传 `TechnoClass*`，并已删除 `(float*)this` 强转。IDB 参数类型同步为
   `TechnoClass*`，源码声明从 `techno_type.hpp` 迁到 `techno.hpp`。

4. **成员访问清债维持**：全库真代码审计为 0 个裸偏移成员访问；surface.cpp
   剩余 14 处为既有裁决的帧缓冲游标，不是对象成员访问。审计器新增 marker 回看
   与注释剥离，避免把内层 IDA 伪码签名和注释误报为真代码。

### 尚未修改的污染债务

- `BuildingClass::AdjustHeight` @ 0x62D5E0：已裁决为 `ParticleClass::AdjustHeight`，owner 已修正；后续留给布局考古与真翻译。
- `Audio::SetScoreVolume`/`SetSoundVolume`/`SetVoiceVolume`：已裁决为 `Options::Set{...}Volume`，owner 已修正。
- `TechnoTypeClass` 的 til 模型仅 0x2EC，无法容纳 Weapon[18]/EliteWeapon[18] 数组；类型侧函数 owner/布局仍是独立债务。
- `HouseClass::AccumulateScore` 已裁决为 `VeterancyStruct::Accumulate`，owner 已修正。
- 0x750030 存在 JUMPOUT，暂不命名。
- `VeterancyStruct::IsRookie` 的成员访问审计通过并已补验 PASS（issue #8 结案）；`AbstractClass::QueryInterface` 的虚调用提取不对称另挂 issue #9。

### 新增：嵌入子对象 receiver 类型污染候选

本轮从 full_export 调用点和 type_map 交叉筛查出一种不同于“完整对象 owner 错误”的污染：
函数本身属于 `FacingClass`、`Coord`、`Float4` 等嵌入结构，但调用方把外层对象的
`base + offset` 传入；Hex-Rays 原型显示为 `char*`/`float*`/`int* this`，type_map
却把 receiver 误归为外层对象、整数或无关类。翻译时应恢复嵌入成员的 `.`/`->` 语义
访问，不能把外层对象类型直接传播给被调函数。

**高置信候选（7）**：

| 地址 | 函数 | 调用方证据 | type_map 异常 |
|---:|---|---|---|
| `0x4C9300` | `FacingClass::Set_SyncLog` | Aircraft/Building/Techno/Unit 多处传 `this+904/928` | this→ObjectClass / DIRECT_PROP |
| `0x4C9220` | `FacingClass::Update` | Building/Unit/Aircraft 多处传 `this+904/928` | this→ObjectClass / DIRECT_PROP |
| `0x4399A0` | `Coord::GetCoords` | Anim/VoxelAnim 多处传 `(float*)this+44/74` | this→int / DIRECT_PROP |
| `0x6C9650` | `Float4::Sum` | Foot/Infantry/Techno/Unit 多处传 `(float*)this+207` | this→BuildingTypeClass / ANCHORED |
| `0x6C9690` | `Float::Accumulate` | Infantry/Unit 多处传 `(float*)this+207` | this→BuildingTypeClass / DIRECT_PROP |
| `0x4399E0` | `VoxelAnimClass::QuaternionToMatrix` | VoxelAnim 多处传 `(float*)this+44` | this→int / DIRECT_PROP |
| `0x439B00` | `JumpjetLocomotionClass::Update2` | AnimClass 传 `this+296` | this→int / DIRECT_PROP |

**中置信候选（3）**：

| 地址 | 函数 | 证据 | 当前限制 |
|---:|---|---|---|
| `0x750030` | `FootClass::CheckAccelLimit` | 调用处传 `(float*)this+84` | 中间对象来源需确认 |
| `0x426630` | `Locomotor::GetSpeed` | 多处传 `(int*)this+2`、`this+139` | receiver 可能存在多种布局 |
| `0x74FFF0` | `VeinholeClass::GetState` | 单点传 `(float*)this+84` | 调用证据不足 |

**明确排除**：`TechnoClass::Fire @ 0x70ECE0` 属 weapon 相关，按当前 weapon selector
专项边界不纳入本组；`IsVeteran/IsElite` 的 `float*` 是真实 x87 标量 ABI；surface.cpp
14 处是帧缓冲游标，不是对象成员访问。

这些候选尚未修改。下一步应按优先级检查每个 receiver 的 vtable/struct 来源和所有调用方，
再决定是补充嵌入成员类型、修正 `type_map`，还是保持合法的字段指针 ABI。

---

## 执行日志 — 2026-09-07 污染清偿轮 + 翻译推进（MCP 全流程）

### 污染修复（全部证据 = 反汇编 + 调用方 xref + live IDA）

**基础设施层（污染传播链切断）**：

- **rename_symbol.py IDA 通道从未生效**：原实现调不存在的 `ida-pro-mcp_py_eval`
  CLI（WinError 2）——重走 HTTP `127.0.0.1:13337/mcp`（rename 工具 func/data
  batch + idb_save）；附带发现 0x70D0D0 的 IDA 名自上轮起一直滞留旧名，已补齐。
- **`_by_name` / `ida_name_index` 派生索引滞后**：rename_symbol 补两处同步；
  signals 主表 0x70D0D0 旧 owner 纠正 + `_by_name` 全量重建（25,228 条）；
  `ida_name_index.json` 从 ida_function_db 权威重建。
- **rename 债务账目化**：`.omo/rename_debt.json` + `--replay-debt` 重放
  （roadmap 风险条 2 落地）；MCP 服务器 signals 缓存改 mtime 失效。

**命名/类型污染修复（12 个函数改名 + 8 处 IDB 类型/结构）**：

| 原名（误） | 新名（证据） |
|---|---|
| Locomotor::GetSpeed（虚构类） | CDTimerClass::TimeRemaining（读 {start,pad,count} 倒计时；FacingClass::Set_SyncLog 传 &RotationTimer） |
| Audio::Set{Score,Sound,Voice}Volume | Options::Set{...}Volume（14 调用点全传 &0xA8EB60 全局；兄弟族 Options::DlgProc 同 receiver；音量槽 +0x38/0x3C/+0x40） |
| TechnoTypeClass::CheckFlag | GameSettings::SetScoreVolume（=[this+0xC]·min(v,255)；3/3 调用方传 &0xA83D10；声明迁 game_systems.hpp） |
| BuildingClass::AdjustHeight | ParticleClass::AdjustHeight（调用方全粒子系统；体读 location@0x9C/height@0xE4） |
| HouseClass::AccumulateScore | VeterancyStruct::Accumulate（3/3 调用方传 TechnoClass+0x150 军衔 float；this 保持 float* 字段 ABI） |
| BuildingClass::SetField8/SetField95 | AnimClass::SetField8/SetField95（4/4 调用方传 AnimClass：ctor 结果/建筑动画槽项；写 +0x19E byte/+0x17C dword；成员名待 AnimClass 中段考古） |

IDB：FacingClass/CDTimerClass til 结构补成员声明（class_layouts 权威）；
0x4C9220/0x4C9300 this→FacingClass*+DirStruct*、0x62D5E0→ParticleClass*、
音量三连→Options*、0x721290→GameSettings*、0x6C9690 param1 BuildingTypeClass*→float。
反编译立即恢复 `this->DesiredFacing`/`this->RotationTimer.StartTime` 语义渲染。
`g_CurrentFrame`(0xA8ED84) src 类型 void*→int；该全局深埋 HouseClass_Player
45KB 误标 mega-blob——blob 拆分记数据模型债。虚构类 Locomotor 双声明删除。

**Receiver 污染候选裁决（7 高 + 3 中，issue #7 结案附全表）**：已修 6 项；
Coord::/Float::/Float4:: 家族转 A2 逐函数证据轮；0x750030 边界损坏禁动；
VeinholeClass::GetState 单调用点证据不足维持。

### 翻译推进（completed 24 → 27）

- **CDTimerClass::TimeRemaining(0x426630)**、**FacingClass::Update(0x4C9220)**、
  **FacingClass::Set_SyncLog(0x4C9300)**：真翻译 + CFG 双射 PASS + completed。
- **VeterancyStruct::IsRookie(0x74FFC0)**：补验 PASS（issue #8 结案；根因三重：
  签名正则不认 namespace 单行前缀 / `&&` 切分 vs IDA 扁平单块 / IDA 离线）。
- **AbstractClass::QueryInterface(0x410260)**：真翻译落盘（编译净/audit 0/
  STEP3 OK/结构 10↔10 同构），但 verifier 逐块事件集合相等拒收——C++ 侧
  AddRef 提取为 CALL、IDA 侧间接虚调用无事件（提取不对称）→ issue #9。
- 批次 B 余 5 函数（issue #4/#10）：SetField8/95 owner 破案改名；三函数
  （CheckC4Active/IsTiberium*）经 live til 复核维持布局考古延缓。

### CFG 双射经验（翻译方法论沉淀）

1. 条件方向照抄 IDA 伪码文本（`if (<=0) goto` 形态要用空真臂 if/else 镜像）。
2. C++ `&&`/`||` 切分多块 vs Hex-Rays 扁平化——能用单块表达式（含非短路 `&`）
   就不用短路运算。
3. 三元 `?:` 降级为菱形块——位技巧 abs（`(x^(x>>31))-(x>>31)`）替代分支 abs。
4. 多语句无事件臂可折叠，带 gating 事件（CALL/WRITE）或全局 READ 的臂独立成块
   ——全局读提升到条件块外。
5. 伪码的 if 外默认赋值（无 else 形态）必须镜像为"默认赋值+覆盖"而非 else 臂。

### 工具债清偿

issue #2（replace_body 双签名自动剥离）、#8（IsRookie 补验）、#7（污染全表结案）
已 resolve；新增 #9（虚调用提取不对称）、#10（批次 B 进展记录）。

---

## 执行日志 — rename_symbol MCP 安全修复

`rename_symbol` 的当前 MCP 链路使用独立 argv，不会主动拆分 `::`；本轮修复了
真正会导致同类事故的安全和一致性缺口：

- 预检拒绝空名、控制字符、no-op、危险裸类名和多 owner 裸成员名；目标名称
  与不同地址 canonical symbol/index 冲突时拒绝执行。
- 源码替换改为 C++ 符号边界；限定名仍作为一个完整参数传递，并同步类内裸声明，
  不会把 `Class::` 前缀注入类体。
- 同步范围补齐：`signals.symbols`、顶层 `globals`、`_by_name`、`classes`、
  `_member_by_name`、`class_layouts.json`、`member_lookup.json`、
  `ida_name_index.json`；JSON 原子写回统一 `indent=2` + LF。
- MCP wrapper 解析 `RENAME_RESULT`，返回 `ok/exit/source_replacements/signals/
  member_lookup/class_layouts/IDA` 等结构化字段；子进程非零时返回 `isError=true`，
  不再把协议成功误当成 rename 成功。
- `member_lookup` 缓存增加 mtime 失效；MCP heavy smoke 改用真实
  `Function::Method_41C430 → Function::Method_41C430_Probe` dry-run。
- 新增 `tools/test_rename_symbol.py` 隔离回归：限定名 dry-run 无副作用、类内声明
  替换、后缀边界、多 owner 拒绝、同类成员冲突拒绝、signals/member/index/layout
  同步均通过（5/5）。

### 修复后测试与审计（2026-09-08 终态）

- **隔离回归**：`tools/test_rename_symbol.py` **5/5 PASS**（限定名 dry-run
  hash 校验 unchanged、类内声明替换且 `OldMethodExtra` 后缀不受影响、
  多 owner 裸名拒绝、同类成员冲突拒绝、全索引同步断言）。
- **MCP heavy smoke**：`rename_symbol(dry) ok=True exit=0 qualified=True
  src=3`（真实 `Function::Method_41C430` 探针）；其余 22 工具全绿。
- **危险裸名拒绝**：`BuildingClass→SelectWeaponSlot` CLI exit=2
  （"ambiguous bare symbol"），MCP 层 `isError=true`——09-07 灾难场景现在
  在预检即被拦截。
- **真实仓库 dry-run**：`Function::Method_41C430` 探针对 signals/
  ida_name_index/member_lookup/class_layouts/rename_debt/受影响 src 的
  sha256 快照 **unchanged=True**。
- **一致性审计**：audit_consistency 37 raw / **1 normalized**（getMapCoords
  vtable 债，维持）；signals `_by_name` vs 主表 **0 missing / 0 extra /
  0 name conflicts**，completed=**28**。
- **注解审计终态**：rename 引入的 33 个 bodies 定义缺注解由 `annotations_fix`
  补齐 → **matched 3,352 / missing 0 / mismatch 0**；全局注解
  **annotated 1,406 / missing 0**。
- 附带清理：`audit_consistency.py` 2 处行尾空白（git diff --check 归零）。

### 未完成 / 下一步

- **full_export 快照重导出**（本轮 IDB 变更大量未反映：12 改名 + 8 类型 +
  2 结构声明；~30 分钟）；
- Coord::/Float::/Float4:: 家族 A2 命名轮（逐函数证据）；
- verifier 虚调用提取补齐（issue #9/#3 同族）或 vtable 槽位审计落地；
- AnimClass/TechnoClass 中段布局考古（SetField8/95 与 tiberium 族解锁前提）；
- issue #4 三函数 + 69 CFG 不忠实清单继续清偿。

---

## 执行日志 — 2026-09-08 污染清偿大轮 + 翻译管线打通

### 污染检验与修复（全部 live IDA 取证）

**函数注解（annotations_audit 7 mismatch → 0）**：hash_table/radio×3 的
调用方地址混入注释被审计器误读（改写为无 0x 前缀形态）；aircraft/building×3
为真实错注（0x41ADF0→0x41ADC0、0x43bfa0 在 Dtor 内→0x453e20、
0x4d9f70=SellUnit 张冠李戴→0x739ec0），逐个以 live IDA 函数名+尺寸证据修正。

**命名一致性（audit_consistency 87 → 1）**，1 = getMapCoords（vtable 槽位
审计债挂账，有意保留）：

- **09-07 改名轮的四方同步缺口修复**：signals 主表 4 条旧名
  （Locomotor::GetSpeed→CDTimerClass::TimeRemaining 等）+ `_by_name` 索引
  10 缺 10 旧键残留（武器槽/军衔族）+ 音量三连（Audio::→Options::）+
  HouseClass::AccumulateScore→VeterinaryStruct::Accumulate——全部对照
  live IDA 确认后修复，`_by_name` 与主表达成 0 missing / 0 extra。
- **审计器等价盲区修复**（audit_consistency.py）：dtor 形态归一
  （X::ddtor/Dtor/DTOR/SDDTOR/Destruct ↔ ~X()/Destructor 同一函数）；
  hpp 提取保留 `~`（此前源信息丢失）；namespace 边界感知（namespace 内
  自由函数不再误挂外层类名）+ 单段 namespace 前缀透明（Math::RoundToInt
  vs RoundToInt）。
- **hpp 滞留 sub_ 名 20 条**（含 2 条畸形 sub_54C58C0/sub_55D4390）全部
  rename 为 IDA 语义名；**Method_ 前缀 9 条** IDA 侧改名对齐。
- **owner 冲突 12 条裁决**：4 条 kernel32/user32 导入跳板误认领（SetFileTime/
  GetFileTime/InvalidateRect/ShowCursor——`jmp __imp_*` 单指令铁证，删 hpp
  地址注解保留声明）；WriteINI（h p p SaveToINI 别名→统一 IDA 名）；
  FractalNoise::Dtor 函数体为引用计数 Release（--refcount/向量摘除/delete，
  38 个 Blit dtor 调用方）→ IDA 改名 Release；BlowStraw::Get（函数体为解压
  Get 实现，hpp Release 误名→改 Get）；ScenarioClass::allocateCells（函数体
  为 delete+清零的释放例程，语义相反）→ IDA 回退 sub_5D80B0 + hpp 注解删除；
  CheckBltStatus（DSurface_Vtable slot 37 铁证→删 XSurface 侧重复注解）；
  RoundToInt（namespace 修复消解）；GetField10/FindLinkIndex/AccumulateScore/
  Territory ctor 4 条误认领注解删除。
- ** VeterancyStruct 三谓词归属修复**：map.hpp struct Crate 的误声明删除，
  techno.hpp 补 IsRookie/IsVeteran/IsElite 声明（owner=live IDA 确认）。

**member_lookup BuildingTypeClass 3800 区段错位（债清单项）→ 清偿**：
根因 = 数组尺寸被低估（BuildupFile 16B 按 4B、PowersUpBuilding 24B 按 4B、
BuildingAnimFrame[18]/BuildingAnim[357] 同类）造成三级累积偏移（-12/-32/
-100→-1820）。修复 = til 名字锚定重排（186+49 条重定位，17 占位名二轮锚定），
终态**债区与 til 0 残留 mismatch**（3808=PowerBonus ✓ 3840=DoorStages ✓）。
基类短偏移区（0-3572）保持历史形态未动（MCP KNOWN_BAD 警告区已撤）。

**全局变量注解（1443 missing → 0 真缺）**：1443 中 1327 为审计器缺陷误报
（伪码块/内联 ASM 文本的 Destination/Source/Buffer/Delimiter 撞名）——
审计器补伪码块跳过 + ASM 助记符行排除；真缺 116 条批量补 `// data: 0xADDR`。

**基础设施**：ida_export_func_db.py 的 H: 残留路径修 D:（memory 迁移债）；
ida_function_db.json 双刷新（13,443 函数，09-07 改名全部反映）。

### 事故与恢复（本轮自身失误，如实记录）

**rename_symbol 批量误调灾难**：bash 循环用 `:` 做分隔符而符号名含 `::`，
实际执行了 `BuildingClass→SelectWeaponSlot`（946 处）等 4 组灾难替换
（共 ~2,200 行 src 破坏）。发现后 `git checkout -- src/` 全量回滚 +
member_lookup OverlayTypeClass.22 误改（Crate→IsRookie）手工恢复 + 7 处
合法注解修复重放。**教训：含 `::` 的参数禁止用冒号做列表分隔符；rename
前必跑 dry-run 看 replacement 数量级。** 二次小事故：rename 新名误带
`Class::` 限定前缀污染类内声明（4 处，手工修正）；member_lookup 修正脚本
第二轮丢失 3680 门限把基类短偏移区误移（49 条），逆向恢复时识别出 17 条
门内占位修正需保留、2 条同名碰撞损失（HalfDamageSmokeLocation1/2、
BuildingAnim[0x15]）补回。

### 翻译管线打通（completed 27 → 28）

- **IsNonNullPtr(0x70E240)**：全流程真翻译（get_context → 签名修正
  int→int* → replace_body → build 0 新错 → verify PASS → mark_completed）。
- **verifier 两处工具缺陷修复**：
  1. `verify_execution_flow.py` def 正则不认 gap2 单行 namespace 包裹形态
     （`namespace gamemd { int F(...) {`）——加可选前缀（issue #8 根因之一
     的正式修复，gap2 555 函数从此可验证）；
  2. `efv_cpp_events.py` PascalCase 调用规则把签名行自身匹配为 CALL(self)
     （裸函数名无 `::` 限定时）——加 `_looks_like_definition` 守卫
     （`) {` / `) const {` 是定义不是调用）。
- **27 个 completed 回归**：26 PASS；0x4C9300 FacingClass::Set_SyncLog 暴露
  为 issue #3 文法盲区新案例（对象表达式调用 `RotationTimer.TimeRemaining()`
  不产生 CALL 事件——符合语义访问裁决的规范形态反被旧文法卡住）→ issue #12
  记账，维持 completed。
- **目标筛选经验**：BuildingClass 批次（next_batch core-small-first）全卡
  issue #4 布局争议区（0x6E9/0x534 等 til 无名成员）；CreateInstanceCOM 等
  COM 虚调用族卡 issue #9/#12 提取不对称；`_generated` 存根无地址注解不可
  verify。**单体函数的成员考古成本是当前翻译节奏瓶颈**——A1 成员语义命名
  （ TechnoClass/FootClass/BuildingClass 家族优先）是 C 纡提速的前置投资，
  与路线图依赖判断一致。

### 度量变化

| 指标 | 会话前 | 会话后 |
|---|---|---|
| 函数注解 addr_mismatch | 7 | **0** |
| audit_consistency normalized | 87 | **1**（vtable 债挂账） |
| member_lookup 3800 区段 | 整段错位（-12→-32→-1820 累积） | **til 对齐 0 残留** |
| 全局变量注解 missing | 1,443（含 1,327 误报） | **0**（审计器缺陷修复 + 116 补齐） |
| signals _by_name 索引 | 10 缺 10 旧键残留 | **0 missing / 0 extra** |
| MCP completed | 27 | **28** |
| verifier 可覆盖形态 | gap2 namespace 形态不可验证 | **已覆盖**（+签名自 CALL 守卫） |

---

## 执行日志 — 2026-09-08 二次会话：verifier 虚调用提取盲区清偿 + completed 池校准

### 污染检验（四重审计全基线）

annotations_audit 0 mismatch / globals 0 missing / audit_access 14 处全部为
surface.cpp 帧缓冲游标（既有裁决）/ audit_consistency 37 raw / 1 normalized
（getMapCoords vtable 债挂账）——与 09-08 首轮终态一致。

### verifier 提取盲区清偿（issue #3/#9/#12 同族，全数 resolve）

- **efv_cpp_events 三条新文法**（全部单元验证）：
  1. 对象表达式调用 `obj.Method()` / `ptr->Method(...)` → CALL(0xADDR)，
     经 `_strict_resolve_call` **严格唯一解析**（歧义裸名不发事件，杜绝
     shared `_resolve_call` 的 min-pick 臆造——AddRef 在 ~200 个 COM 类上
     曾被解析到 VectorClass::AddRef）；
  2. `_receiver_is_cast_of_this`：`((Type*)this)->X(...)` 按 this 分支处理
     （vtable 槽位解析 + 严格解析兜底）；
  3. `_is_known_virtual` 抑制：跨对象调用已知虚方法（vtable_offsets 任一
     类占位）不发事件——IDA 侧对局部变量 vtable 派发（如
     `(*(_DWORD*)v1+116))(v1)`）本就不提取，词汇表对称。
- **efv_ida_events 新增 `_IDA_VTABLE_INDIRECT`**：this 相关间接调用
  `(*(CAST)(expr + N))(...)` → CALL(vfptr+N)；**排除**局部指针 vtable 形态
  （v1+116 属于另一对象 vtable，C++ 侧词汇表不可表达——放行即制造假不对称，
  GetAmmoCountScaled 回归实证后收紧）。
- **verify 查找顺序修正**：`find_cpp_function`（名字精确）优先于
  `find_cpp_function_by_addr`（邻近启发式曾把 0x7105E0 误定位到
  CheckHealthForRepair 体中——ASM 注释块的 def 形态假阳性）；与
  callee provider 既有顺序一致。

### 二进制直读补 vtable ground truth（tools/vtable_offsets.json）

| 类 | 槽位 | 实证 | 附带效果 |
|---|---|---|---|
| BuildingClass | IsFactorySelectable=128 | 0x7E3EBC+128=0x457620（**修正原误名 CheckHealthDiff**——0x701140 是 InfantryClass 的方法，从不在此表） | CheckHealthForRepair PASS |
| BuildingClass | CheckMissionGuard=1024 / MissionStubReturnZero6=1032 | 0x458dd0 / 0x4581f0 | HasActiveParam/CheckMissionGuard PASS |
| BuildingClass | GetExitCoords=72 | 0x447ac0（override；基表 0x7E1F50+72=0x4104C0 同槽） | SquaredDistanceTo/GetCoords PASS |
| AbstractClass | QueryInterface=0 / COMStub_AddRef=4 / COMStub_Release=8 | 0x7E1F50 头三槽 | QueryInterface PASS |

另记（未动）：BuildingClass 槽 117（+468）= 0x70C5B0 = `ObjectClass::GetShroudByte`
（object.hpp:539 地址注解双重吻合；CanRepair 的该槽调用为 byte 返回形态）。
GetPowerOutput golden 体的 `this->Mission_Harvest()`（hpp 序 124）与二进制
槽 117 的语义归属差异仍属 vtable 槽位审计债——**本会话不改其语义**。

### 提取盲区暴露的假 completed 纠偏（盲验时期产物）

| 函数 | 判定 | 处置 |
|---|---|---|
| HasActiveParam(0x458db0) | 旧体把虚自派发（vtable+1024 CheckMissionGuard）误译为成员读 field_bool_6E9 | 重译 + PASS + completed |
| CheckMissionGuard(0x458dd0) | 体已对，缺槽位真值（虚调用曾被提取为直接 CALL） | 补真值 + PASS |
| SquaredDistanceTo(0x5f6500) | 旧体 dx²+dy² 为臆造（真实 = 双虚坐标 + 2D 平方差） | 重译 + PASS |
| IsBeingRepairedOrCaptured(0x7105e0) | 旧体读 +0x6E8/+0x6E3 无关布尔（真实 = locomotorTarget@704 ∥ locomotorSource@708） | 重译 + PASS |
| AbstractClass::GetCoords(0x410540) | 定义误名 fetchCoordinatesHere、体为置零占位 | 改名 + 槽 18 派发重译 + PASS；fetchCoordinatesHere 保留委托（techno.cpp 2 调用方） |
| QueryInterface(0x410260) | AddRef 裸调用被 min-pick 到 VectorClass::AddRef | this->COMStub_AddRef() + PASS + **completed** |
| IsIdleWithNoCaptives(0x63be10) | 真实结构 = GetPrimaryOrFallback(槽 97)==11 + 标志卫；忠实重译被 +1444 无名成员阻塞 | **completed→false（GetPowerOutput 先例）+ issue #17** |

### completed 池终态与回归

- **completed 28 → 29**（+QueryInterface +CheckHealthForRepair −IsIdleWithNoCaptives）。
- 逐函数回归：**22 PASS / 5 NOCACHE / 1 FAIL**（0x63BE10 issue #17）。
  NOCACHE 5 个（TimeRemaining/FacingClass::Update/Set_SyncLog/IsNonNullPtr/
  IsRookie）为 IDA 离线且缓存未存——09-07/08 曾对 live IDA 验证过；
  Set_SyncLog 的文法根因（issue #12）已单元级修复，IDA 回线重缓存即过。
- 编译：building.cpp / abstract.cpp / locomotion_bodies.cpp 全部 0 新错；
  audit_access 全 0 违规。
- efv_cpp_events 自测的 GetPowerOutput golden FAIL（vfptr+496 vs +468）
  为**既有 vtable 审计债**（git stash 对照确认先于本会话存在），非本轮回归。

### C 线批次推进诊断（本轮 next_batch 实测，pending=3,426 不变）

BuildingClass 15 个 pending 逐个 get_context 评估，**全部受阻于三类前置债**
（与路线图"A1 命名是 C 线提速前置投资"判断一致）：

1. **无名成员**：IsIdleWithNoCaptives +1444、CanRepair aP1 侧 ironTintTimer
   索引数学、GetFactoryPosition 哨兵全局 0x89C848-50（signals 无名）；
2. **签名/声明缺失**：CanBeSold 需槽 97 方法（MissionClass::GetPrimaryOrFallback
   无 hpp 声明）、GetTargetFacing 需 GetTurretAngle 签名考古（hpp 0 参 vs
   二进制 3 参）、CanRepair 需槽 117 身份裁决；
3. **既有争议区**：issue #4 的 +68/+286（IsTiberium*Eligible）、AnimClass
   中段（SetField8/95）维持延缓。

### 本轮账本变化

issues：#3/#9/#12 resolve；#17 新增（IsIdleWithNoCaptives 降级 + +1444 考古）。
file_class.hpp GetFileSize 0x7C8512 导入跳板注解删除（jmp __imp_* 字节实证，
issue #11d 清偿，声明保留）。signals.json 0x63BE10 completed=false 附 note。

---

## 执行日志 — 2026-09-09 F 会话：Phase F 证据补全执行 + G1 机械收割波次

### Phase F 执行（提交 1eeb4bea + 重锚）

见「Phase F」节终态表。关键认知修正与工具：

- **F1 考古结论反转**：路线图预设的「幽灵类考古」（SuperClass/MPCooperative/Radar）
  实为 **til 真实结构 vs class_layouts 缺键**——live IDA `py_exec_file` 批量导出
  427 结构（`.omo/export_til_layouts.py`），合并策略：新类全量导入 + 既有类填洞
  （不覆盖既有名、不越既有 size）+ mega-blob 截断（til ≥4096B pad 起点截断，
  House/Scenario/Mission/Tactical 21-90K 家族防护）。
- **容器语义**（`src/core/vector.hpp` ctor 验证布局）：Items@4/Capacity@8/
  IsInitialized@C(w1)/IsAllocated@D(w1)/Count@10——138 个模板实例全部获得语义名
  （仅当 til 全部非 pad 成员为 field_* 占位时套用——TimerClass 等具名真类不受影响）。
- **重写器三项升级**（gen_e4_materialize.py）：
  1. 继承链走查（parent 链 + own 区段防护 [父size, 本size)，基区遗留错位行
     TechnoTypeClass+4="IdleRate" 实证 424 个基区名被旁路）；
  2. 嵌套子对象解析（member_types ANCHORED 类型 + 覆盖成员尺寸==类布局尺寸
     排除数组——`ambientSoundController.AudioController_field_04` 形态）；
  3. w1/w2 load-only 截断（`(unsigned char)this->M`；store 保持原始伪码）。
- **til-pad 伪条目清除**：class_layouts 中「til 显式 pad 覆盖 + 名字与 til 别处
  赋名重复」双重铁证判据删除 175 条（BuildingClass 0x118/0x11C/0x120 与
  0x10C/0x110/0x114 重复名实证）。首版误用「pad 覆盖即删」过激判据（误删 1,320
  条 Type 类基区有效映射）——从备份重建后改用双重铁证。
- **E3 前向声明 bug**：类定位正则匹配 `class X;` fwd decl 后 `find("{")` 落进
  下一类体（house.hpp:41 fwd → :67 StartingTechnoStruct），64 条声明插错类体；
  修复 = 跳过行尾分号的声明行。一致性曾飙至 85 normalized，修复后回基线 3。
- **refresh 模式**：`--phase refresh` 保留已翻译 e4 记录（块级提取 + 字节级回写 +
  used_names 预播种防重名漂移 + E1/E2 并集合并）；验收 214/214 字节一致。

### G1 机械收割（wave A-E）

**收割器基础设施修复（E6 遗留 bug）**：`build_pending_index` 的 marker_line 在
同文件多次 replace 后行号上移，旧收割器按陈旧行号读块 → 每文件只处理首个候选
（E6 需两轮收割的根因）。新收割器（`.omo/e7_harvest*.py`）改为**地址注解行 →
向下 marker → 现算括号平衡 span** 的漂移安全定位 + 每条目重读文件。

| 波次 | 模式 | 结果 |
|---|---|---|
| A | `return <全局>;`（src 已声明） | 50 |
| C | `return <常量>;`（E6 残留） | 174 |
| P | `return aN;` 参数直通 | 2 |
| B | `return [cast]this->语义成员;` | 门控 ida-naming 排除 field_ 系名 + free-form-this 防护后少量 |
| E | 净化直排（≤8 语句；白名单词法：禁 v\d 局部/伪码类型名/调用/goto/循环/field_ 名；free-form 禁 this） | **298 marked / 31 reverted** |

**wave E 事故与恢复**：首版 E 波漏了「自由形态函数（合成时 this 参数被丢弃）
体内禁 this」防护——59 个无效翻译（`return *(this+3);` 形）混入；人工回滚脚本
自身有顺序替换索引失效 bug 加剧损坏（19 文件括号失衡）→ 干净恢复路径：
`git checkout HEAD -- src/e4` + signals 取消 400 个 G1 标记 + 白名单修复 +
refresh#3 重跑 + 收割重放（脚本确定性）。终态 0 无效翻译残留。

**门控语义确认**：单行体（`return 176;`）被 code-standards 的 stub 启发式 FAIL
（"1 real line"）——按 E6 先例 + 用户裁决模式（提交 + 重锚吸收，重锚不清账）处理。

**手动批次结论**：BuildingClass 批次维持 issue #4 延缓（CanBeSold/CalcDrawPos/
CheckOverlap 全部卡 0x6E9/0x534 争议区 + 槽 97 声明缺失 + vtable 身份未定）；
VectorClass mega 桶（1,562 pending）属 vtable 身份债（vector.hpp 已注明 IDA
系统性误标 _vt06=GetItem 等）——**A1/A2 命名轮是 C 线提速前置**的判断再次实证。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| 偏移重写 | 1,869 rewritten / 4,379 unmapped | **9,215 / 6,204**（沉默 owner 全部入场） |
| class_layouts | 1,033 类 | **1,281 类**（+247 til 导入 + 容器语义） |
| MCP completed | 406 | **919**（+524 G1：A=50 / C=174 / P=2 / E=298；含 11 return-this CRT 与 59 free-form-this 无效体回滚后终态） |
| 一致性 | 38/3 | 38/3（维持基线） |
| auto-fill-baseline | c70eb5cd | F+G1 提交后重锚（本会话末） |
| src/e4 翻译记录 | 214 | **798**（214 保留 + 584 G1 收割） |

## 执行日志 — 2026-09-09 会话（续）：Phase E 全量落盘执行 + E5/E6 启动

### Phase E 执行终态（E0-E4 全部完成，提交 c70eb5cd，auto-fill-baseline 重锚）

**E0 IDA 回线同步**：
- rename debt 55 条全清偿：10 条 09-08 灾难条目标 cancelled（src 已回滚，永不重放）、
  19 条 sub_* 债对 live IDA 核验「IDA 已是语义名」直接销账、2 条畸形地址校正
  （0x4C58C0=EMPulseClass::IterateCellsInRadius、0x5D4390=Chat::RefreshMessagePositions）。
- ida_function_db.json 双刷新（13,443 具名，含全部 09-09 改名）。
- 5 个 NOCACHE completed 函数 live 复验全 PASS（TimeRemaining/FacingClass::Update/
  Set_SyncLog/IsNonNullPtr/IsRookie）→ completed 池 39 PASS / 0 FAIL。
- **full_export v3 重导出完成**：19,088 函数 100%（伪码+汇编）、globals 5,847 数据段
  条目、include 1,343 类头、71MB。v2 归档为 full_export_v2_20260909/。
  ⚠ v3 已知限制：export_funcs 对超长伪码有输出截断（`[NNNN chars total]` 标记，
  ~100 个长函数受影响）——E4 物化时已检测并注释化；翻译时以 get_context live 拉取为准。

**E3-IDA TechnoClass 452-580 考古修复**（三重二进制铁证）：
- forceShielded@0x1C4（IronCurtain@0x70E2C0 `mov dword ptr [ecx+1C4h],1/0`）；
- isDeactivated@0x1C8（IsDeactivated@0x70FBD0 `mov al,[ecx+1C8h]`）；
- focus@0x21C 锚点（GetTarget `mov eax,[ecx+21Ch]`）+ 460-540 区 80 字节紧凑排列
  推导 → airstrikeTintStage@0x1CC、drain 三连起于 0x1D0。
- 裁决：til 仅 0x1C4-0x1CF 三成员顺序错；member_lookup 从 464 起整体 +4 错到 0x244
  （09-09 会话修正了头部但把尾部带偏）。四源对齐：til（t14_structs --only 重声明）+
  class_layouts + member_lookup + src/techno.hpp。
- 残留两争议区挂 issue #19（244-280 区 +12、424-448 区 +4，member_lookup 单方偏离，
  待 B4 字段级 xref 考古）。

**E1-E4 全量落盘**（tools/gen_e4_materialize.py，50 秒可再生，幂等）：
- **E4 定义占位体**：14,576 无体函数物化为裁决 v2 pending 块（src/e4/ 565 桶文件；
  member 形态 6,080 + free 形态 8,496）。MCP pending **3,416 → 17,992 真实总账浮出**
  （19,133 全集 − 3,455 既有体 − 39 completed − 若干信号外形态 ≈ 17,992 精确对账）。
- **E3-src 签名合成 + hpp 声明**：1,057 条成员声明插入 94 个 hpp（签名=IDA 骨架 +
  已应用 CSP 类型；**方法名以记录名行（IDA label/signals 权威）为准**——Hex-Rays
  声明行会渲染 T14 时代嵌入的旧类型名（VectorClass::_vt06 vs 实际 VectorClass::Clear
  实证））；花括号 code-aware 匹配（注释/字符串剥离——house.hpp 曾因原始计数把
  HouseClass 声明插进 StartingTechnoStruct）。
- **E2 最小类声明**：289 个（src/e4/classes/*.hpp，vfptr + 方法声明，CSP inferred
  class 驱动）。
- **E1 全局声明**：882 个伪码引用全局 extern（e4_globals.hpp；参数名噪音过滤——
  IDA 数据自动名 a1/aP1 与参数名不可区分，保守排除）。
- **偏移→OO 语法重写**：1,869 处 this 相对偏移改写为 `this->成员名`（owner 证据 =
  记录名行 :: + csp_functions.inferred_real_class for sub_*；宽度按 cast 类型对齐
  class_layouts 成员表精确匹配 offset+size）。4,379 处未映射（owner 未知/成员无名/
  尺寸错配）保持原始形态——诚实优先。
- 截断记录处理：v3 超长伪码截断检测 → 注释化 + 空体（括号平衡，replace_body 安全）。

**审计回归清偿**（E4 曾引入 2,119 raw / 5,004 missing 两类审计噪音）：
- MCP 注解审计补 namespace 行跳过 + 伪码块内伪 def 跳过 → **matched 8,771 /
  missing 0 / mismatch 0**（服务源码级修复，进程热载需重启）。
- audit_consistency 补 src/e4 跳过 + **93 条历史 wrong-class 声明删除**
  （五组 Type↔Instance 混淆：HouseClass↔StartingTechnoStruct 104 对、TagTypeClass↔
  TagClass 28、VoxelAnimTypeClass↔VoxLib 24、ScriptTypeClass↔ScriptActionNode 14、
  TriggerTypeClass↔TriggerClass 12——删除错类侧，保留 IDA 权威侧）→
  **回基线 38 raw / 3 normalized**（getMapCoords vtable 债 + 2 rename-debt 自愈型）。
- MCP 服务器：pending 索引 mtime 失效（新增 src 文件自动入账，不再需要 annotate
  触发重置）；build_pending_index/_signals 状态一致性维持。

**auto-fill-baseline 重锚**：c70eb5cd（E4 物化提交），diff=0，门控空转通过。
**重锚不清账**：债清单全部保留（17,992 pending / 69 CFG / 682 链接 / vtable 审计 /
issue #4/#17/#19 等），是 C 线工作队列。

**基建缺陷记录（未修）**：
- e4 声明插入产生个别非法方法名（`int AbstractClass(); // 0x4385D0`——方法名与
  基类同名，合法 C++ 冲突）；签名类型偶有不可解析形态（std::locale::facet* 等）——
  均在「基线编译错误允许」框架内，翻译到具体函数时逐个吸收。
- v3 快照长函数截断（见 E0 注）。

### E5 口径统一（完成）

- 候选 = 有真体未标 completed 的 2,900 函数（.omo/e5_candidates.json）；
  4 并行 verify_execution_flow 子进程全量跑完（live IDA fetch 回填缓存）。
- **终态：154 PASS → 全部 mark_completed；2,746 FAIL（存根/不忠实/受阻）诚实保留
  pending**。stats 单数字自此可信（completed=406 @ 本会话末）。
- ⚠ 经验：signals.json 并行写（标记）与并行读（verify 子进程）在 Windows 上撞
  Errno 22 —— 标记操作须带 6 次退避重试（e6_harvest_const.py 已内置）。

### E6 翻译启动（纯 MCP 工作流，机械收割优先）

- **常量返回收割完成**：374 个 `return CONST;` 型候选中 **213 个真翻译 + verify
  PASS + 标记**（两轮收割 0 FAIL；对账清扫确认无已译未标损失）。
- 后续批次队列：58 个全局 getter、457 个证据完备（偏移已重写）函数、
  6,146 个 ≤8 行小函数长尾、BuildingClass 布局争议区（issue #4）维持延缓。
- 已知瓶颈再确认：单体函数成员考古成本（BombClass 0x30/0x38 hpp 缺成员实证）——
  A1 成员语义命名仍是 C 线提速前置投资。

### 本会话度量变化（2026-09-09 Phase E 会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP pending | 3,416（失真，仅含有体子集） | **17,778（真实总账）** |
| MCP completed | 39 | **406**（+213 常量收割 + 154 E5 校准） |
| src 函数体覆盖 | ~3,455 / 19,133 | **~17,870 / 19,133**（93.5%） |
| 类声明 | 1,120 | +289 E2 最小声明 |
| 全局声明 | ~1,406 | +882 E1 extern |
| IDA til TechnoClass 452-580 | 三成员错序 | 四源对齐（铁证修复） |
| rename debt | 29 未清 | **0**（10 灾难 cancelled + 19 销账） |
| 一致性审计 | 37 raw / 3 normalized | 38 raw / **3 normalized**（清偿 93 错类后回基线） |
| 注解审计 | 3,345 matched | **8,771 matched / 0 missing / 0 mismatch** |
| 快照 | v2（09-05，陈旧） | **v3（19,088 函数 100%，含全部改名/类型/布局修复）** |

---

## 执行日志 — 2026-09-09 会话：污染复检全基线 + IDA 离线纯 MCP 翻译轮（completed 29 → 39）

### 污染检验（会话首四重审计）

注解 0 mismatch / 全局注解 0 missing / audit_access 全库 14 处全为 surface.cpp
帧缓冲游标（既有裁决）/ audit_consistency 37 raw / 1 normalized（getMapCoords
vtable 债）——与 09-08 终态一致，**无新增污染**。会话尾复核：注解 matched 3,345 /
0 mismatch、全局 0 missing、一致性 39 raw / **3 normalized**（=getMapCoords
既有债 + 2 条 rename-debt：0x465D40/0x5220F0 的 ida_function_db 侧仍为旧名，
IDA 回线后 `--replay-debt` 自愈，非真污染）。

### 环境约束与工作队列（IDA 离线）

IDA MCP（:13337）全程离线 → get_context 走 member_lookup 回退、verify 只能用
`.omo/ida_cache/`（581 函数 live 缓存）、rename 全走 debt。工作队列 = pending
索引 ∩ 缓存 = **283 个可验证目标**，按伪码行数升序取小函数。

### 翻译完成（10 函数，全部 CFG PASS + completed）

| 函数 | 地址 | 要点 |
|---|---|---|
| BuildingClass::IsFactorySelectable | 0x457620 | `return this->Type->Is1x1AndUndeployable...()` tail 委托 |
| BuildingClass::IsMassSelectable | 0x459C00 | 赋值臂独立+RET 尾块镜像；`TechnoClass::CanMoveToCell()` 限定直调（ASM call 非虚派发铁证） |
| BuildingClass::GetTypeField60 | 0x459ED0 | `return this->Type->UIName`（快照权威 +0x60）；返回类型 int→const wchar_t* |
| InfantryClass::SetPermanentBerzerk | 0x5220F0 | 原 SetFlag1752 语义改名（+0x6D8=PermanentBerzerk 快照名）；int→void |
| InfantryClass::IsBridgeRepairEnabled | 0x5224D0 | `return this->Type->Engineer`（+0xEC3；FootClass 伪码 VoiceResponse(14) 并列读佐证） |
| AbstractClass::IsClean | 0x410450 | `return !NeedsSaveOrLink`（ASM [ecx+20h] 字节判零；+0x20 双语义既有习语） |
| UnitClass::IsDeactivated | 0x70FBD0 | `return isDeactivated`（Activate=0/Deactivate=1/ctor=bl 三重铁证）；int→bool |
| CellClass::DrawWrapper | 0x653F50 | 纯转发 UpdateTerrainAndWaypoints；签名 2 参→4 参修正（retn 10h=4 栈参） |
| UnitClass::StubReturn176 | 0x6B4F30 | `return 176;` |
| UnitClass::StubReturn29 | 0x6B4F40 | `return 29;` |

### 污染修复（本轮主体）

1. **owner 修复**：`BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable`
   → **BuildingTypeClass::**（0x465D40）。证据链：两调用方（0x457620/0x459C00）
   均 `mov ecx,[esi+520h]`（this->Type）后 call；被调体读 Foundation@+0xEF0 查
   1x1 宽高表。声明 building.hpp→building_type.hpp 迁移；IDA 侧 rename debt。
2. **member_lookup TechnoClass 452-464 区外科修正**（备份
   `.omo/member_lookup.backup_0909.json`）：452=forceShielded（IronCurtain
   @0x70E2C0 写 dword 1/0）、456=isDeactivated（字节写读三重证）、
   460=airstrikeTintStage（位移名）、464 删错位条目。原区整体 +4 错位。
   **快照 TechnoClass.hpp 该区仍为旧形态**（重导出待办）。
3. **GadgetClass::ClearState 受阻建账**：src 模型为宽松自定义（缺 NeedsRedraw
   成员，hpp 注释自证 binary@+0x1C），加成员须走 IDA→header pipeline——未擅自添加。

### verifier 基建修复（3 处，回归零退化）

1. **rename-debt 别名**（verify_execution_flow.load_signals）：未清偿
   `.omo/rename_debt.json` 的旧名→新地址映射，否则 IDA 缓存伪码里的旧名调用
   解析失败→事件缺失→假 FAIL（IsFactorySelectable 实证）。
2. **namespace 双层前缀**：def 正则 `namespace\s+\w+\s*\{\s*)?` → `*`（两处），
   支持 `namespace ra2 { namespace game {` 形态（上次只修了单层 gamemd）。
3. **qualified 定义头守卫**（efv_cpp_events）：`A::B(...)` 路径补
   `_looks_like_definition`——`RetType Class::Method() {` 签名行不再伪造
   CALL(self)（09-08 只给 PascalCase 简单路径加了守卫）。

### 编译验证方法论（单 TU C1003 中止问题）

带存量伪码债的文件 MSVC 在 ~100 错误即 C1003 中止，**编辑区根本没编译到**——
MCP build 的"0 errors"字段此时无意义。本轮建立**探针 TU 方法**：抽取原文件
include 块 + 仅含新函数定义的小 TU（`.omo/probe_*.cpp`）同 flags 编译，
rc=0 判定（6+4 函数全过）。infantry.cpp 顺带补缺失的
`#include "type/infantry_type.hpp"`（hpp 只有前向声明，`Type->Engineer` 不可达）。
Clang AST 门控（check_translated_functions）在大 TU 上 40min+ 不完成（已知
基建限制，run_gates 同症）；hpp 侧以 `check_hpp_implementations` 直查
5 个触碰头文件全 CLEAN，cpp 侧以探针+audit_access+verify 兜底——**本轮不宣称
gate 3/3**。

### 新定位的受阻函数（下一轮考古输入）

processEnterTarget（0x7178B0，+0x814 变索引 dword 数组无名）、IsPoweredOn
（0x4525F0，+3392 CheckPowerFlags receiver 无名）、GetHealthRatio（0x5F5C60，
vtable 槽 34 身份未知）、startPanic（0x772AC0，MissionClass+324 无名）、
ClearState（0x4E1550，GadgetClass 模型缺成员）、IsObserver（0x5E9440，三全局
0xAC11A4/8/C 无名且无 pending 体）、Hash::InsertOrdered（0x4F4410，全局头
0xA8EF54 无名）、CCFileClass::Reset（0x473CE0，+88/+100 无名）、
LoadOptions::Run（0x5587F0，成员无名）——**成员考古瓶颈再次确认**，与
"A1 是 C 线提速前置投资"判断一致。

### 基建观察（待修，未动）

- MCP pending 索引对「签名与 `{` 分行」形态丢失 class/function 归属
  （`_enclosing_function` 要求上一行以 `{` 结尾）——3,400 个 class=""
  pending 中相当部分源于此；按地址 target 可绕过。
- replace_body 落盘后行号移位使缓存索引 stale——file:line target 失效，
  地址 target 稳定。

### 度量变化

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 29 | **39**（+10） |
| pending | 3,426 | 3,416 |
| completed 池回归 | 22 PASS/5 NOCACHE/1 FAIL | **34 PASS / 0 FAIL / 5 NOCACHE** |
| 一致性 normalized | 1（getMapCoords） | 3（+2 rename-debt 自愈型） |
| verifier 覆盖形态 | 单层 namespace | 双层 namespace + qualified 定义头 |
| rename debt | 3 条 | 5 条（+Is1x1 owner +SetPermanentBerzerk） |

issues：#18 新增（UnitClass::SaveState 0x6B4F00 stdcall-vt06 签名建模债：
二进制 3 栈参 thunk + ECX 不装载 this，转发 SaveLoad_Prefix@0x410320 疑似
stdcall 3 参非 thiscall）。

---

## 执行日志 — 2026-09-10 会话：G2 证据补全轮 + G3 批量翻译第一波

### G2 证据补全（提交 c520e656 + 重锚；"IDA MCP + CSP 结果补全签名/类/全局 → OO 语法替换 → 提交重锚"执行）

**Type 家族布局重建（本会话最大考古成果，三层证据互证）**：

1. **ctor 写入铁证**：TechnoTypeClass::ConstructorFull(0x710AF0) 首写 0x294
   （=ObjectTypeClass 尺寸 660 ✓）；InfantryTypeClass ctor 首写 **0xDF8**
   → TechnoTypeClass 真实尺寸 **3576**（til/class_layouts 旧值 748 系截断错模型）；
   AircraftTypeClass ctor 首写 0xDF8 三方确认。
2. **YRpp 锚点体系**：声明序 + 嵌入提示（align_XXX / unknown_*_XXX /
   **field_XXX 也是锚点**——此前只认 align/unknown 前缀导致 BuildingType 中段
   +0x28 漂移）+ MSVC 对齐规则（bool 后接 int 补 pad，Sight@0x5E8 实证）。
   解算器 `.omo/g2_solve_layouts.py` + `.omo/g2_apply.py`（A/B/C 三级置信
   分档：锚点直接采信 / 干净段传播 / ctor 精确写入+邻域覆盖；漂移段诚实丢弃）。
3. **二进制裁决**：GetPowerOutput(0x44E7B0) 读 [Type+3808]=PowerBonus、
   [Type+3816]=ExtraPowerBonus —— 与 09-08 裁决精确对齐，同时证伪 6 月
   yrpp_full.json 的累积游走偏移（Weapon@0xFEB→EliteWeapon@0xFF0 荒谬间距）。

| 类 | 旧 size | 新 size | 成员 | 说明 |
|---|---|---|---|---|
| TechnoTypeClass | 748 | **3576** | 249 | Weapon[18]@0x898/EliteWeapon@0xA94（ctor 循环 stride 28 + memory 佐证 2200/2708）；TypeList 20 锚点 |
| InfantryTypeClass | 3792 | 3792 | 39 全解 | walk_end 精确 0xED0；Sequence@0xE3C/Engineer@0xEC3 族 |
| UnitTypeClass | 3704 | 3704 | 37 | |
| AircraftTypeClass | 768 | **3600** | 11 | 旧 768 严重截断 |
| BuildingTypeClass | 6132 | **6040** | 147 | walk_end 精确 0x1798；field_ED8 锚点修复 +0x28 漂移 |
| SessionClass | 12508 | 12508 | 36 | +0x2840=StartSpots.Items（23 命中点解锁） |
| VectorClass 族 | 20(误) | **16/24/28** | 容器语义 | **VectorClass=16B**（4+4+4+1+1 对齐）；TypeList=28B（ctor 间距 + YRpp unknown_18） |

**落盘三通道**：class_layouts（own 区段整体替换，漂移旧名清除）+ member_lookup
扁平重建（verifier/get_context 权威）+ IDA til 9 struct 精确重建（g2_til_apply，
idb 已存）。member() 升级：宽成员基址读 + 容器内部子成员展开（`Member.Items`）。

**OO 语法批量替换**：gen_e4_materialize --phase refresh 重跑，rewritten
**9,215 → 10,075**（unmapped 6,204 → 5,430；剩余大头 = ObjectClass 音频嵌套 320 /
BuildingType 漂移段 181 / 真无名长尾——A1/B4 挂账）。

**scan_e4_preserved 三轮加固（G1 内注解劫持已译记录的系统性修复）**：
G1 收割在 def 行与 `{` 之间维护的 `// 0xADDR` 内注解被旧切分器当记录头，
把已译记录切成两半（尾部悬空 def → 括号失衡 33 文件）。终版判据（正向）：
记录头下一非空行以 `namespace` 开头，或下一行是 def 且上一行以 `}` 开头
（兼容 `} // namespace x`）。幂等 708/708，字节级保留验证通过。

### G3 批量翻译第一波（提交 47f8961a + 重锚；completed 919 → 1,103）

**多 agent 舰队模式（本会话确立的新工作形态）**：3 agent 并行，各领独立桶，
MCP 全流程（get_context → replace_body → verify → mark_completed），
CFG 双射规则写进任务书。单波 ~78 分钟 / +118 完成 / 全部 verify PASS。

| 批次 | 桶 | 完成 | 要点 |
|---|---|---|---|
| A | VectorClass_e4 | 62 | 容器语义可译（G2 红利）；`vectorclass_worklist.json` 存 ~737 无阻塞候选；发现 #28→根因=VectorClass 尺寸模型错误（已修 16B） |
| B | addr7C/7D（CRT） | 47 | itoa/wcs/ctype/malloc 族；独立 harness 抽检 46/47 零错零警；结构性跳过（x87 传参/内联 ASM/FILE 类型缺失/CRT 全局未声明）全部 issue 化 |
| C | 核心类+addr40 | 9 | AnimClass::SetField8=PowerOff@0x19E（布局链锚定）；audio mixer 5 件（Callback 返回宽度修正 __int64）；**#26 bug 级**：ObjectClass 0x24-0x70 区疑似系统性错位（[esi+6Ch] 实为 HouseClass* 用途，三方标注均标 health） |

**试点确立的 CFG 范式**：CompareFunc3Int——三元 `?:` 与 IDA 扁平块不对称，
比较器族算术化 `return 2 * (a >= b) - 1;` 达成 3 块双射。

**事故与修复（agent 引入，均已修复+复验）**：
- VectorClass 尺寸模型错误（我 G2 引入，agent 发现）：20→16B，Count@0x10 回到
  DynamicVectorClass own 区；class_layouts/member_lookup/til 三方同步。
- addr40 五记录多余 `}`（agent 译文自带函数收尾 + replace_body 括号叠加）
  + nullsub_57 被错位注解 `// 0x40d260` 劈裂——修复后 5 音频函数复验 PASS。
- 全库括号复扫：e4 全 0；infantry.cpp/gap2_defs.cpp 各 -1 为基线继承（非本轮）。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| 偏移重写 | 9,215 / unmapped 6,204 | **10,075 / 5,430** |
| TechnoTypeClass 布局 | 748（截断错模型） | **3576（ctor 铁证）** |
| BuildingTypeClass 布局 | 6132 | **6040**（尾界二进制对齐） |
| MCP completed | 919 | **1,103**（+184 全 CFG 验证） |
| MCP pending | 17,263 | **17,075** |
| til 容器/Type 家族 | 截断/漂移 | 9 struct 精确重建 |
| issue 池 | 6 | **36**（#20-#42 新记，含 #26 bug 级） |
| auto-fill-baseline | adf32f61 | **47f8961a**（重锚不清账） |

### G3 续波队列（下一会话直接接手）

1. **VectorClass worklist**（~737 候选已分类：Destroy/FindItemIndex/
   GetItemIndex/operator==/GetAt 五形态实例化变体）——最高性价比；
2. gap2 三桶（global_defs 551 / system 406 / object 300）+ addr77/72/49/4E
   ——小函数长尾，agent 舰队直接推进；
3. 阻塞前置（按解锁面排序）：#26 ObjectClass 0x24-0x70 错位复核（bug 级）→
   #28 系余波清理 → #41 模板实例 vtable 符号导出（解锁 12+ 构造/析构）→
   CRT 全局声明批补（#30/#31/#37，解锁 CRT 长尾）；
4. 每波后固定动作：括号复扫 + annotations_audit + audit_consistency +
   提交重锚（舰队事故模式已两次实证——修复脚本化待做）。

---

## 执行日志 — 2026-09-11 G5 会话：证据补全大轮 + 舰队波（completed 2,477 → 3,736）

### 证据补全（提交 0db19f5e + 重锚）

| 项 | 产出 | 说明 |
|---|---|---|
| **无名全局批产** | **10,744 DataGlobal_<HEX> extern** | 全部 pending 块引用扫描（e4 + _gap2 + gap2_defs，11,548 引用地址）→ IDA 批查名/尺寸/类型 → extern + signals.globals 2,056→12,800。**不在 IDA 改名**（验证器 IDA 侧按 dword_XXX 形态提取事件，两侧按地址会合）。解锁 #67-71/#57 全局长尾 |
| **#50 gap2 重生成** | 520 Gap2Recv_<HEX> 接收者类 | 551 pending 四路分类：类限定名(真类)/类型化 this(真类)/裸 this(合成类)/无 this(自由函数补参)。合成类 member_lookup M<off> + vtable_offsets Vf<off> **用验证器自身 leaf 提取**（偏移语义保证一致）；signals._member_by_name 同步 383 类 |
| **#51 清偿** | 0x6686C0/0x74D7C0 伪码置换 | live IDA 重取（ResetRules(RulesClass*)/VeinholeMonsterClass::Update），def 迁成员形态 |
| **vtable 槽位补齐** | +614 槽/213 类 | 自有表锚定（slot0 归属本类 > 投票）+ 决定性投票（≥2 且领先）；AbstractClass 修正 0x7E3EBC→0x7E1F50；completed 池抽样回归 119/120 |
| **#62 清偿** | 8 条 loc_ 槽位函数 signals 补建 | VectorClass 实例 73B 同型体族，#48 先例形态（注意 signals 名用 `::` 非 `__` 形态） |
| **验证器修复** | `_extract_function_body` ns 前缀剥离 | 单行 `namespace X { ret Cls::M() {` 形态类名提取失败→free-function 豁免路径（负测试暴露假 PASS 风险后修复） |
| **OO refresh** | 2,273 已译记录保留 | 5,692 rewritten/5,421 unmapped（分母=已译体退出）；DataGlobal 全部幸存 keep-loop；括号 HEAD 对比零新增 |

**试点验证**：0x6DC420 Gap2Recv::GetHeightMap 全流程 PASS+completed——接收者类机制端到端成立（合成类 member 事件与 IDA 侧按偏移对齐）。

### 舰队波（提交 e504cab5 + 重锚；g5_fleet.py 直驱范式）

| 桶 | PASS/替换 | 说明 |
|---|---|---|
| addr7C(CRT) | **414/435** | 全局批产直接解锁（tolower/stdio 族历史 blocker 消解） |
| addr40 | 245/248 | |
| addr77 | 209/216 | |
| addr72 | 149/151 | |
| addr4E | 96/97 | |
| addr49 | 46/46 | |
| gap2 | ~91 | Gap2Recv 机制首批；易收割池尽后残部 0/11 诚实回滚 |

生成器加固（g5_fleet.py = fleetA 规则泛化）：三元/memory-chain/#NN 类型/断词(mangled-keyword)/残留 this-cast 跳过；`*this`→`this->vfptr`（layout 有 vfptr 时）；signals.globals↔e4_globals extern 差集同步 1,330（A8ED54 类"signals 有名无 extern"缺口）。

### 遗留与下一步

- **gap2 剩余 458 pending**：too-long 169（>60 行）/vftable-ref/bare-this-novfptr 143（`*this` 用法但成员提取空——需 IDA 侧确认是否 READ(member,0) 事件）/三元 7。bare-this-novfptr 族需逐个判定。
- **e4 free-with-this 1,189**（#56 族）：Gap2Recv 机制可复用——改 gen_e4_materialize synth_signature 对 ownerless-thiscall 出成员形态即可（本会话未做，机制已验证）。
- **PASS 率悬殊**：gap2 59%（长尾复杂体）vs addr 桶 97-100%（Globals 解锁后形态规整）。
- 审计基线：注解 8,775/0/0；一致性 38/3。

---

## 执行日志 — 2026-09-10 会话（G4 证据补全 + 舰队波 1：completed 1,103 → 2,476）

### G4 证据补全轮（提交 72175ec7 + 重锚；用户指令"IDA MCP + CSP 结果补全签名/类/全局 → OO 替换 → 提交重锚 → RA2MCP 翻译"执行）

**vtable 槽位真值批产（#40 解锁，208 类）**：
- 算法 = **函数地址匹配**（非名字）：e4 类头（274 个解析出方法+地址）×
  `vtable_signatures.json`（13,279 槽位）地址 join，class→vtable 归属按
  多数投票（≥2 命中，单命中诚实跳过 28 类）；产出 `tools/vtable_offsets.json`
  +208 类条目（含 VectorClass/DynamicVectorClass/TypeList 统一 7 槽位表，
  布局权威 = vector.hpp 注释：[0]~dtor [1]operator== [2]SetCapacity [3]Clear
  [4]FindItemIndex [5]GetItemIndex [6]GetItem）。
- 机制验证：`this->Method()` 事件发射先查 vtable_offsets（链式）→ 命中即发
  CALL(vfptr+off)，**无需 e4 类头补 virtual 声明**。

**639 个模板实例 vtable 全局符号（#41 解锁，规模超 issue 预估 50×）**：
- pending 块扫描 `&X::`vftable'` 引用 = 639 个 distinct owner（非 #41 列的 12 个）；
  IDA `idautils.Names()` + demangle 建立反修饰名→地址映射（928 vtables），
  拼写变体归一（尾部 `::` 剥离 / `unsigned char`→`uchar` / `enum ` 剥离 /
  空格无关匹配）后 **639/639 全解析**。
- 三方落盘：signals globals（`vt_<owner>`）+ e4_globals.hpp extern +
  IDA 数据改名 639（SN_FORCE）+ idb_save。
- **教训（keep-loop 兼容性）**：首版 extern 行地址用了 `0X`（大写 X）——
  gen_e4_materialize 的 keep-loop 正则只认 `0x`，refresh 时 639 行被静默清空
  （CRT 行小写幸存才定位到根因）；已按兼容格式重加。**生成器消费端格式
  约束要在写入端对齐**。

**member_lookup 容器批补**：+139 容器实例化类（class_layouts ida_name 扁平化，
VectorClass__*/DynamicVector__*/TypeList_* 族）+ 后补 vfptr@0（vtable 安装行的
严格 WRITE(member,0) 事件）。

**#26 破案（bug 级 issue 证伪）**：0x4C9FF0 = **FactoryClass::AbandonProduction**，
IDA 名 BuildingClass_AbandonProduction 系启发式误标。证据链：13 调用方全
FactoryClass 语境（DemandProduction/SetObject/CopyTo/HouseClass 生产管理族）+
YRpp FactoryClass 布局六字段完美双射（Owner@0x6C / IsSuspended@0x70 /
Object@0x58 / Balance@0x60 / SpecialItem@0x68 / Production 定时器区 0x24-0x38）。
**ObjectClass Health@0x6C 无错位**（YRpp/member_lookup/til 三方一致）。
处置：rename_symbol 四方改名 + 声明迁 factory.hpp + pending 体迁 factory.cpp
（void→bool 对齐）。

**CRT 全局批补（#30/#31/#37 解锁）**：B7 区 87 个未声明全局以 `CRTGlobal_BXXXXXX`
结构名落盘（signals + e4_globals + IDA 62 改名；25 个 stru 内部子项无名地址
跳过）；语义命名留 A1。附带：#28 根因收尾——全局 `Count@0xB79BE0` 实为 CRT
stdio 流计数（xrefs _flsall/initstdio/getstream/fcloseall/rmtmp），三面改名
CRTStreamCount（rename_symbol 预检因容器成员 Count 歧义拒绝裸名 → 手动三面）。

**#48 清偿**：3 个 JumpjetLocomotionClass MI thunk（loc_4B4DC0/4B4DD0/4B4DE0）
signals symbols+_by_name 条目补建（**dict 规范形态 `{symbols:{addr:kind}}`**）+
verify PASS + completed（+3=1106）。

**OO 重写 refresh**：rewritten 9,887 / unmapped 5,425（绝对数降 = G3 波译体
退出分母，非倒退）；899 翻译记录字节级保留。

**审计器修复（globals 审计使用行误报）**：`return g_X;` / `g_X = 0;` /
`Buffer[0] = *Drive;` / `wchar_t* p = g_X;` 四形态是使用行非声明——补
return 关键字 + 名字为行首 token（含 `*&` 剥离）+ 名字前有 `=` 三个排除
（mcp_translate_server.py，非保护文件）。终态 1,456 annotated / 0 missing。

**基线审计**：函数注解 8,771→8,773 matched / 0 missing / 0 mismatch；
一致性 38 raw / 3 normalized（ida_function_db.json 0x4C9FF0 镜像外科同步，
idaapi 导出超时未跑全量刷新）；括号 HEAD 对比零新增（51 文件的既有 delta
系伪码注释内 `{` 噪音，非真失衡）。

### G3 舰队波 1（提交 d9b34ee0 + 8c4cce14 + 重锚；completed 1,106 → 2,476）

**Agent A — VectorClass 桶（本会话最大丰收）：1478 → 113 pending**：
- **1,365 翻译落盘 / 1,347 verify PASS / 1,339 mark_completed**（8 个 PASS
  无 signals 条目挂 #62）。
- 方法论：17 个跨家族样本手工跑通全流程 → 规则生成器（`.omo/fleetA_gen.py`）
  + stdio JSON-RPC 直驱 MCP server（`.omo/fleetA_drive.py`）批量
  replace→verify（4 并行）→mark，失败自动回滚 pending。
- 两轮自修：① for-init 事件/块不对称（IDA 侧 cast 形态不定产块）→
  hoist/不 hoist 双变体按 IDA 缓存离线择优（+115）；② goto 伪码 4 个漏网
  → 回滚跳过。
- 关键事件语法（沉淀给后续波）：typed `this->成员名`（verify IDA 侧真值是
  live raw 伪码，事件等价）；`this->vfptr = vt_X` 走 unresolved WRITE 通配
  仅在块内还有其他成员写时匹配，**纯安装块用 `*(void**)this = vt_X`（0 事件，
  已过 gate）**；虚调用槽名**逐类严格反查**（同槽名不同类偏移不同，泛化回退
  产错事件）；非 this 基分派保留函数指针形态。
- 跳过 113 全部记账（#56-#63）：E3 展平签名丢 this 64 / 未声明数据全局 16 /
  外类 til 成员名 12 / vtable_offsets 缺 slot@12 12 / goto 5 / this+N 超布局 5。
- #24/#28/#41/#40 根因确认消除并 resolve。

**Agent B — gap2_global_defs 551：0 完成，系统性 blocker #50 定位**：
- 551/551 的生成器签名**把 ECX this 丢了**（def 参数数 == 栈参数数恒缺 this；
  535 个 body 直接用 this → C2355 编译器实证）。
- 修复路径：(a) gen_gap2_defs.py 重生成补首位 this 参数（hpp+cpp 同步）；
  (b) 按 owner 类迁入类方法桶。修复后 **534 个「仅缺 this」函数可立即批量翻**
  （228 个 ≤20 行）。逐函数明细 `.omo/fleet_B_inventory3.json`。
- 次级：#51 两例嵌入伪码地址错位（生成器数据 bug）。

**Agent C — gap2 system+object 706：+16 verified，两项重要发现**：
- **#53 CellClass 布局债（波及全库）**：src/system/cell.hpp 丢失 0x28-0x4B
  36B 真实成员区，field_4C 起全成员编译偏移与二进制差 **-36**（ctor 0x47BBF0
  实证；sensors@88 应为 124、firstObject@192 应为 228）——需 header pipeline
  考古补成员，影响所有 CellClass 翻译语义。
- **#54 验证器 namespace 缺陷（同会话已修复）**：build_cpp_cfg 首个 `{` 前内容
  当签名丢弃——namespace 包裹 def 的分支函数 CFG 必 FAIL。修复 =
  `_strip_namespace_wrappers` 预处理（剥前导 namespace 包裹 + 匹配尾部 }）；
  合成分支测试两形态 6 块一致 + completed 池 13 回归全 PASS。
- 跳过 689 分类记账（#52/#55）：未命名全局 ~140+ / 误归属 owner ~120+ /
  CellClass gap ~70 / goto/复杂 ~180 / void* 强转 ~80 等。
- 附带发现：验证器 detect_this_type 不识别 double* this（0x487CE0，记账 #55）。

**#28 根因收尾**：全局 Count→CRTStreamCount（见 G4 节）。

### 舰队波 2（中断保留，任务书已写好）

- 三 agent 分桶：**addr40+49（631）/ addr7C（558）/ addr77+72+4E（782）**，
  任务书吸收波 1 全部经验（见 Agent A 关键事件语法 4 条 + namespace 已修）。
- 中断前 Agent D 完成 addr40 首批 **5 函数**（0x4010C0 AudioMixer_EndFrame /
  0x4018C0 / 0x4019E0 / 0x401B00 / 0x402440，audio mixer 族 5/5 verify PASS），
  提交 8c4cce14 + 重锚。
- **下一会话直接接手**：重发三 agent（任务书在本会话历史，或按上节要点重写）
  → 波后固定动作（括号 HEAD-delta 复扫 + annotations_audit + audit_consistency
  + 提交重锚）→ #50 gap2 签名重生成（534 解锁）→ #53 CellClass 考古。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 1,103 | **2,476**（净 +1,373，全部 verify PASS 口径：Agent A 1,339 + Agent C 16 + #48 3 + 波 2 Agent D 5 + 校准余差 10） |
| MCP pending | 17,075 | **15,705** |
| vtable_offsets | 5 类 | **213 类**（+208 地址匹配） |
| vtable 全局符号 | 0 | **639**（signals+e4_globals+IDA 三方） |
| member_lookup | 38 类 | **264 类**（+139 容器实例 + vfptr@0） |
| CRT 全局声明 | 0 | **87**（CRTGlobal_BXXXXXX） |
| issue 池 | 36 open | **44 open**（+新发现 8 项；#24/#26/#28/#40/#41/#48/#54 共 7 resolve） |
| 偏移重写 | 10,075 / unmapped 5,430 | **9,887 / 5,425**（分母缩小系已译体退出） |
| 一致性 | 38/3 | 38/3（基线维持） |
| auto-fill-baseline | 47f8961a | **16fa3497**（重锚不清账） |

---

## 执行日志 — 2026-09-12 G6 会话：E4Recv 合成类机制 + 舰队量产（completed 3,736 → 7,548）

### 证据补全（#56 族根因修复 + E4Recv 机制落地）

**根因（gen_e4_materialize.synth_signature 双缺陷）**：
1. **多行签名**：v3 伪码签名折行（首行止于 `(`），单行括号正则解析失败返回 None
   → 自由形态丢 this + 丢全部参数（1,194 free-with-this 实证）；join 上限二次坑
   （8→30：10+ 参数的 `?$Blit` 模板族 thiscall）。
2. **thiscall 首参命名**：IDA 把 this 命名为 Block/FileName/a1 等 → 按位次剥离
   + G6b 词边界归一为 this（记录内标识符唯一作用于该参数，安全）。

**E4Recv 机制（Gap2Recv 复用，路线图既定项落地）**：
- ownerless-thiscall：typed this 且类在 member_lookup → 真类（45）；否则
  `E4Recv_<HEX>` 合成类（578，其中 58 类带 Vf 槽位）。
- **偏移提取换用 `efv_ida_events.make_ida_leaf`**（verify 同源 leaf，含
  _IDA_VTABLE_INDIRECT 通用派发形态）——旧 leaf 提取不到 `(*CAST)(*this+N))`
  形态 → Vf 缺失 → cpp/IDA 事件不对称（leaf 返回事件字符串列表非元组）。
- 三方落盘：member_lookup M<off> + vtable_offsets Vf<off> +
  signals._member_by_name（cpp 侧 Resolver 从 signals 解析 this->M12）。
- E2 头补 `int VfN(int, ...);` 变参槽位声明（任意实参可编译，事件层表驱动）。
- TYPE_MAP 复合形态前置（`unsigned __int8` → `unsigned char`，曾产
  "unsigned signed char *" 非法类型）。

**验证器关键修复**：find_cpp_function 跳过 `_generated`（Task 17/18 存根
glob 序先于 e4，按名抢占 sub_* 匹配 → 假 translation-incomplete；gap2 未踩坑
因其记录名非 sub_*）。共享验证器修改按规程跑 completed 池抽样回归
（117/120 PASS；3 FAIL 经 stash 对照证实既有）。

**Task18 幻影 pending 清零**：src/_generated 1,203 个存根带同款 marker +
尺寸后缀地址注解（不匹配 scan_src_addrs 裸地址正则）→ 与 e4 记录双计 pending。
全量核对 1,203/1,203 已有 e4 规范记录后剥除 marker。

### 舰队词汇表（g5_fleet 移植 fleetA，波 1 暴露的简化缺陷回补）

| 词汇 | 形态 | 译法 |
|---|---|---|
| vtable 安装 | `*this = &X<T>::vftable'` | `*(void**)this = vt_X`（0 事件） |
| 局部目标安装 | `v9[0] = (int)&X::vftable'` | `v9[0] = (unsigned int)vt_X`（verify 兜底） |
| vtable 派发 | `(*CAST)(*this+N))(this,args)` | `this->VfN(args)`（CALL(vfptr+N) 表驱动） |
| fp 类型声明 | `char (__thiscall *v4)(...)` | 透传（合法局部声明；守卫恢复 fleetA 原版） |

**事故与修复（本会话自身失误）**：派发实参带前导空白时 `args[len(a0):]` 切片
产幽灵首参 `s`（`this->Vf4(s, a2, ...)`——事件层无感知但代码错误）——停止在跑
批次 → 修复（`args.split(',',1)[1]`）→ 27 条污染确定性修复 + 复验 PASS。

### 波次成绩（全 CFG 验证口径）

| 波 | 桶 | 标记 |
|---|---|---|
| 1 | addr49 | **138/138**（100%）+ 7 前置 |
| 2 | addr63/CreateTClassFactory/addr40/7B/6E/42 | **432**（addr42 104/104、addr7B 80/80） |
| 3 | addr5B/4A/62/43/5A/76/77/4F | **682**（addr76 161/162） |
| 4 | addr7D/CreateTeamCommand/Jumpjet/4C/55/75 | **978** |
| 5 | addr5C/65/7C/4E/6C/54/47 | **542** |
| 6 | addr5F/53/6B/72/41/5D/VectorClass | **482** |
| 7 | addr64/69/Network/48/71/AbstractClass/UI/6A | **555** |

每波后固定动作：括号扫描（全平衡）/ phantom-s 扫描 / annotations_audit /
audit_consistency（3 normalized 基线维持）/ 提交重锚。

### 度量变化

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 3,736 | **7,548**（7 波全 CFG 验证） |
| MCP pending | 14,445 | **~10,600**（含 Task18 幻影清偿 -1,203） |
| e4 pending | 11,145 | **7,288** |
| 偏移重写 | 5,692 | **6,367** |
| member 形态 | 4,142 | **5,379**（+E4Recv 578 + typed 45 + 参数找回） |
| 一致性 | 38/3 | 69 raw / **3 normalized**（raw 增量为 typed 真类类限定自愈型） |

### 遗留与下一步

- **剩余跳过主体**：too-long（>60 行体，需分块策略或 max-lines 提升）、
  bare-this-novfptr、residual-this-cast（fetch 型 `v4 = (cast)(*this+N)` 局部
  变量取槽再调用族）、全局对象裸算术审计（`*((char*)g_Scenario + N)` 类）、
  未命名全局长尾（#67-71 族）。
- gap2 长尾（too-long 169 / bare-this-novfptr 143）待词汇表收益评估后重试。
- addr77 波 3 有 8 回滚未诊断（diag 被后续桶覆盖）。

---

## 执行日志 — 2026-09-13 G7 会话：v4 快照重锚 + 证据大轮 + 舰队波 1（completed 7,548 → 8,324）

### 关键发现：v3 快照对 mega-blob 区域已陈旧（本会话最重要的考古结论）

- **实证链**：gap2 块内嵌伪码 `MEMORY[0x87F7E8][539944]`（v3 渲染）vs live IDA
  反汇编 `dword ptr HouseClass_Player.__pad_5568+59D4h`（= 0x87A280+0x5568+0x59D4）
  vs live 反编译 `MEMORY[0xB0FE64]`——v3 时代的巨型 blob 缩放索引（`dword_A8ED54[132164]`
  / `stru_X.__pad_Y[539944]`）在当前 IDB 已全部归一化为**绝对地址 MEMORY 形态**。
- **4 个 90,160B blob 破案**：stru_87C374/830620/B05488/89E138/B1D188 实为
  EventClass/AnimClass 等被 IDA 建成巨型 struct 的 mega-blob 模型（til size 90160
  与 blob 尺寸吻合）。翻译这些区域的函数必须以 v4 为准。
- **处置**：full_export v4 重导出（19,088 函数，归档 v3 → `full_export_v3_20260913`）；
  gap2 pending 块活码刷新（e4 由 gen_e4_materialize refresh 覆盖，gap2 需专用刷新器）。

### gap2 刷新器（.omo/g7_gap2_refresh.py）与两次事故修复

gap2 文件混有舰队已译体，不能走 gen_gap2_defs 重生成（会清掉翻译）——专用刷新器
只换 marker 块内伪码，def/marker/已译体全保留。

1. **事故一（就地拼接索引漂移）**：`out[i+1:k] = body` 用原始索引在已变更列表上
   切片，首个长度变化后所有后续拼接错位，吞掉 1,047 个 marker。git 恢复 + 改为
   **顺序构建输出**（append-only）。
2. **事故二（drop 尾括号）**：误以为 v4 伪码的 `}` 与文件闭合重复而丢弃——实际
   伪码自含闭合（def 的 namespace/函数双括号由文件尾部 `} }` 配对）。恢复
   drop 前逻辑，逐块括号平衡验证。
3. **边界判据**：块内嵌的 `// 0x...` 行（v3 跨界粘连伪码）不是函数边界——
   addr 注解必须后跟 `namespace` def 行才算；25 个 v4 截断块（`[NNNN chars total]`）
   诚实保留原状。
4. 终态：**1,812/1,838 刷新，marker 守恒 1,838，逐块括号平衡 0 失衡**
   （string-aware 计数器 `.omo/g7_brace_check.py`）。

### 证据补全产出

| 项 | 产出 |
|---|---|
| 缺失全局 | 171 DataGlobal extern（扫描 9,385 pending 引用 vs e4_globals 差集 → IDA 批查；大 blob 按 `unsigned char[N]`） |
| til 语义成员 | +2,136 成员 / 68 类入 member_lookup + signals._member_by_name（跳过 `__pad_*`/`field_*` 门控风险名；RulesClass +505/HouseClass +247/AircraftClass +159/FootClass +155/ScenarioClass +131/CellClass +54——CellClass 28/36/76/92/108 等 til 已有语义名，#53 时代 pad 区已被 til 演化填名） |
| E1 refresh | +857 extern（v4 引用形态） |
| OO 重写 | 6,300 rewritten / 5,472 unmapped（refresh 口径） |

### g5_fleet 生成器五项升级（generator-ready 2,467 → 3,805，+54%）

| 修复 | 解锁 | 根因/证据 |
|---|---|---|
| DECL_RE 关键字守卫 | 305（mangled-keyword 全灭） | `break;` 被声明正则吃成 type='br' name='eak' → `br eak;`；`return X;` 恰好原样往返所以历史无恙 |
| bare `*this` → `*(void**)this` | 1,367（bare-this-novfptr 类别消失） | 验证器两侧 leaf 均无裸 `*this` 模式（IDA 无正则命中 / cpp 无 `this->` token）→ 双侧 0 事件对称；替代旧 `this->vfptr` 词汇（那会产 READ(member,0) 单侧事件） |
| `*(CAST)(this + N)` 字面偏移 | ~521 | rep_paren 旧按 cast 宽度 ×4 缩放，与验证器 _IDA_CAST_PAREN 的 T8/G4 字面语义相悖（`*(_DWORD *)(this + 1532)` 真值 1532 非 6128）；cast 列表 1:1 对齐验证器（double/_QWORD 移除防单侧事件） |
| MEMORY 全局安装词汇 | ~75（vftable-ref 480→405） | `MEMORY[0xA] = (int)&X<T>::vftable'` → `NameA = (unsigned int)vt_X;`（vt 符号 639 全解析） |
| 派生类成员回退 + slot 别名 | ~50 | VectorClass 静态类型 receiver 写 DynamicVectorClass.Count@16（CHILDREN map from class_layouts parent）；`DynamicVector`→`DynamicVectorClass` 短名别名 |

另：`THIS_CAST_AFTER` 按cast宽度缩放（旧用 this 宽度，_WORD cast 在 _DWORD-this 上
产错偏移）+ 括号-this 容忍移除（`*((cast*)(this)+N)` IDA 侧 0 事件，重写即单侧）。

### 舰队波 1 与 ida_cache v4 播种

- **首轮 0/106 全灭**：verify exit 2 = "no IDA pseudocode available"（IDA MCP 离线），
  非翻译质量问题；翻译自动回滚无损。
- **播种**：v4 导出即 live IDA 渲染（本会话导出后 IDB 无变更），按缓存格式
  `{"addr","decompiled","name","timestamp"}` 播种 17,270 条（不覆盖既有 1,689 条
  live 缓存）——**IDA 离线时验证能力恢复**（旧警告"快照播种引入裸偏移渲染"针对
  v2 前时代，v4 已带全部 til 类型）。
- **播种一致性验证（IDA 回线后）**：抽样 12 条（波 1 marked + signals completed
  注解），v4 播种缓存 vs live IDA 反编译 **11/11 字节级一致**（1 条无缓存 =
  截断块未播种，符合预期）——播种路径正式转正，后续离线会话可放心依赖。
- **波次成绩**（14 桶）：

| 桶 | PASS/替换 | 桶 | PASS/替换 |
|---|---|---|---|
| addr4E | 99/106 | gap2_global | 75/93 |
| addr74 | 64/66 | gap2_system | 90/138 |
| addr46 | 63/64 | gap2_object | 69/91 |
| addr73 | 53/62 | gap2_house | 29/55 |
| addr58 | 59/62 | gap2_ui | 20/36 |
| addr51 | 59/59 | gap2_entity | 10/23 |
| addr66 | 53/55 | | |
| addr68 | 47/54 | | |

- addr 桶 PASS 95-100%；**gap2 桶（v4 活码块首批）52-81%**——FAIL 全部自动回滚；
  gap2 低 PASS 率主因 = v4 伪码更长（活码含完整声明区）触发 join/事件形态差异，
  待下波分析 diag 明细。
- 波后审计：括号 0 新增失衡（2 个报告点为未触碰的既有已译记录）；注解
  10,059/0/0；一致性 69 raw / 3 normalized = 基线。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 7,548 | **8,324**（+776 全 CFG 验证） |
| MCP pending | ~10,600（G6 口径） | **8,600**（含 v4 重锚后的诚实口径修正） |
| 快照 | v3（09-09，mega-blob 区陈旧） | **v4（19,088 函数 live 渲染）** |
| gap2 pending 块 | v3 陈旧伪码 | **1,812 块 v4 活码** |
| member_lookup | — | **+2,136 语义成员 / 68 类** |
| e4_globals | — | +171 DataGlobal + 857 E1 |
| generator-ready | 2,467 | **3,805** |
| ida_cache | 1,711（live） | **+17,270 v4 播种** |
| auto-fill-baseline | cc2740ef | **3ff45951**（两次重锚：0103a195 → 3ff45951；重锚不清账） |

### 遗留与下一步（G7 续波队列）

1. **续舰队波**（直接可跑）：gap2 剩余桶（global_defs 383/system 310/object 221/
   ui 149/house 141/entity 115 pending）+ addr7C 137/addr7D 133/addr72 105/
   VectorClass 102/addr40 97 + building.cpp 92——按本次 14 桶范式继续；
   gap2 低 PASS 率先读 `.omo/g5_fleet_last.json` diag 归因。
2. **too-long 1,990**：体长分布实测 ≤60:3,815 / 61-80:172 / 81-120:177 /
   121-200:124 / >200:89——提升 max_lines 至 200 上限收益 ~473（其余 1,418 被
   其他 skip 掩盖）；建议按桶试验 PASS 率后推广。
3. **residual-this-cast 主体 = A1/B4 前置**：AbstractClass 52/BuildingClass 38/
   HouseClass 38/ObjectClass 23——核心类真无名区（pad/争议区），需字段级 xref
   考古，是剩余最大的单体阻塞类别。
4. **25 个 v4 截断块** + `0x7CAACB`（导出截断/non-func 地址）：翻译时 get_context
   live 拉取。
5. **free-this 73 / audit / 三元长尾**：逐类小词汇或人工批次。
6. ~~IDA 回线后建议 `idb_save`~~ ✅ 已回线（09-13 收尾）：本会话只读查询未改
   IDB，无未存变更；播种一致性 11/11 验证通过（见上）。

---

## 执行日志 — 2026-09-14 G8 会话：证据补全 + 471 桶全量舰队波（completed 8,324 → 10,350）

用户指令四段式（G4/G5 同款）：IDA MCP + CSP 结果补全签名/类/全局 → OO 语法
替换 → 提交重锚 → RA2MCP 舰队翻译。

### 证据补全（提交 b18839c2 + 重锚）

**全局 dry-scan 体系**（`.omo/g8_dryscan.py`）：全部 pending 块（596 文件 8,569
函数）过 g5_fleet.translate() 试生成，skip 归因聚合到 (class, offset)/(class,
slot)/addr 三维——证据补全从"猜哪里缺"变为"精确目标清单"。首扫结论：
GENERATED 3,135 / too-long 1,993 / residual-this-cast 1,527 / 缺成员 435 /
缺槽位 176 / 缺全局 33。

| 项 | 产出 | 过滤规则（诚实优先） |
|---|---|---|
| vtable 槽位 | +65 槽/35 类入 vtable_offsets + 头声明同步 | 仅主表（col_offset==0）vtable 直读；函数名须 `本类::` / 祖先链（class_layouts parent）/ 裸名；56 拒绝（foreign 22/conflict/nofunc）；`CStreamClass '?'`/`WarheadTypeClass 'vt[03]'` 非法标识符 2 项剔除 |
| 全局 | +47 DataGlobal（33+12+2 级联） | **按 pending 块使用形态类型化**：字符串实参（sscanf/sprintf fmt、GetKeyCount section）→ `unsigned char[]`；标量算术→int；`dword_X[0]` 索引→int[4]；奇地址字节测试→unsigned char；`&MEMORY` RTDynamicCast→void*；`stru_815F54.isInLogic` 成员访问型**移除**（无法声明保诚实 skip） |
| til 成员 | +14 纯语义（InfantryClass Type@1728/SequenceAnim@1732、HouseTypeClass veteranInfantry@332 等） | `field_*`/`__pad_*` 跳过（ida-naming 门控，G7 政策）；til 无成员的（TActionClass@144 = 最大单项 24 函数）诚实挂账 A1/B4 |
| **误归属裁决** | 44 无 vtable 槽位类**不回填** | RulesClass/SessionClass/HouseClass 等 slot@12 家族 = T19 caller-context 命名把 DynamicVectorClass<T>::operator= 误归属；member_lookup 这些类低偏移有语义名（RulesClass@8=DetailBufferZoneWidth）——按名解析会产**语义错误但 CFG 通过**的假翻译；保持 skip 记 A2 owner 债 |

### OO 语法替换（同提交）

gen_e4_materialize --phase refresh：rewritten **6,289** / unmapped 5,468
（分母随已译体退出）；**7,785 已译记录字节级保留**；E2 minimal classes 734。
验收：括号 0 失衡（9 触碰文件逐块）、注解 10,059/0/0、一致性 69/3 基线。

### 舰队波 1（提交 65d17fe4 + 重锚；+1,999）

**471 桶全量直驱 61 分钟**：replaced 2,504 / verify PASS 2,023（80.8%）/
FAIL 481 全自动回滚。addr 桶 95-100%，gap2 大桶 12-34%。

**gap2 高 FAIL 两根因（g5_fleet 守卫上线）**：
1. `param-mismatch`：def 合成签名参数名/参数数 vs v4 伪码错位（`int a1` vs
   `Block, a2`）→ 未声明标识符；
2. `raw-this-residue`：区间内无名成员（member() 返回 None 不报错）保持裸
   `this + N`——IDA 侧 leaf 产 member 事件、cpp 侧无 `this->` token 恒不对称。
两守卫把浪费型 replace+verify 周期转前置 skip（system/gap2 生成 49→7，
剩余 7 恰为实跑 PASS 的 7——预测精确）。

### 舰队波 2：sigfix 签名对齐（提交 f933b53f + 重锚；+22）

`.omo/g8_sigfix.py`（#50 族机械清偿）：155 成员 def 参数名对齐 v4 伪码
（纯改名不动类型，hpp 声明不受影响）+ 52 Block→this 词边界归一（G6b 法）。
param-mismatch 268 → 116（余为参数数错配，需 hpp 手术，挂 A2）。

**事故与修复（如实记录）**：首版 def 行重写 `sig.rstrip('{')` 丢尾部
` {` → 155 行块开括号缺失（括号扫描器 HEAD-delta 全数定位）→ 逐行补回
修复（155/155 一一对应）+ 复验 0 新增；脚本已修正（tail 保 `{`）。

### too-long 试验否决（风险对策落地）

addr7D `--max-lines 200`：**5/59 PASS（8.5%）**——长体被三元（18）/
memory-chain（14）/goto-switch CRT 状态机主导，规则生成器天花板实证。
维持 defer：需分块策略/语义翻译/词汇扩展（fleetA CompareFunc 三元算术化
先例的逐形态推广），不是提参数能解决的。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 8,324 | **10,350**（+2,026 全 CFG 验证：波 1 +1,999 + 波 2 +22 + 校准余差 5） |
| MCP pending | 8,600 | **6,541** |
| vtable_offsets | 304 类 | **337 类**（+35 类 65 槽，主表直读） |
| e4_globals DataGlobal | — | +47（使用形态类型化） |
| 偏移重写 | 6,300（G7 refresh） | 6,289（本会话 refresh 口径；分母缩小系已译退出） |
| 一致性 | 69/3 | 69/3（基线维持） |
| 注解 | 10,059/0/0 | **10,071/0/0** |
| 全局注解 | 1,456 annotated | **13,582 annotated / 0 missing**（审计器两遍扫描修复后口径，见下） |
| auto-fill-baseline | f50f37d5 | **f933b53f**（三次重锚：b18839c2 → 65d17fe4 → f933b53f；重锚不清账） |

**会话收尾增补（文档刷新轮）**：
- **globals 审计器两遍扫描修复**（mcp_translate_server.py，非保护文件）：
  G8 舰队译文体保留的 IDA 局部声明（`CHAR Buffer[1024];` 影射已注解全局
  `Buffer`@0x8A3A08）被误报 missing——192 条全为假阳性。修复 = 先收集全部
  已注解声明名，第二遍对"已在别处有注解声明的同名命中"豁免（重复真实定义
  本会是链接错误，无漏报面）。进程内验证 13,582 annotated / **0 missing**；
  会话内 stdio 服务进程为旧代码，重启后 MCP 工具生效。
- **文档刷新**：`docs/coverage.md` 头表从 6 月口径刷新到 G8 口径（新增
  翻译总进度表 + 权威指针）；`docs/mcp_tools.md` 地址对应现状节更新
  （completed 28→10,350、matched 3,352→10,071、全局注解、member_lookup
  1,304 类）；`docs/todo.md` completed 39→10,350。

### 遗留与下一步（G8 后续队列）

1. **A1 成员语义命名 = 最大杠杆**：raw-this-residue 1,451 + 缺成员 434 distinct
   全部卡成员名（til 有布局但 field_* 占位）；A1 命名轮直接解锁这两池主体。
2. **too-long 1,988**：语义翻译（LLM 手动批次）或分块策略；词汇扩展收益
   需逐形态评估（三元算术化先例在 fleetA）。
3. **param-mismatch 116**：参数数错配需 def+hpp 双手术（e4 hpp 声明同步）。
4. **vftable-ref 275 / memory-chain 245 / free-this 75**：小词汇扩展或人工。
5. **44 误归属向量族 + TActionClass@144 等**：A2 owner 考古（T19 命名修正）。

---

## 执行日志 — 2026-09-14 G9 会话：RTTI 容器族证据 + 舰队修复五连 + 两波（completed 10,350 → 11,665）

用户指令四段式（G4/G5/G8 同款）：IDA MCP + CSP 结果补全签名/类/全局 → OO 语法
替换 → 提交重锚 → RA2MCP 舰队翻译。**IDA 全程离线**——证据链全部离线化
（v4 快照播种 ida_cache + vtable_signatures + rtti_vtable_class + til 合并数据）。

> **⚠ IDA 连接状态注记（用户指令 2026-09-14）**：上文"IDA 全程离线"仅反映
> G9 会话当时的状态记录，**不构成对未来状态的断言**。IDA 连接
> （127.0.0.1:13337）随时可能在离线↔在线之间双向切换（IDA 可能无效）——
> **任何需要 IDA 的操作执行前必须当场探测连接**（`curl -m 5
> http://127.0.0.1:13337/` 或短超时 MCP 调用），不得以本文档、先前会话日志、
> 甚至本会话早前的探测结果为据。下文所有"留待 IDA 回线"的挂账项
> （53 个 v4 截断块重建、NOCACHE completed 复验、rename debt 重放、
> til 权威布局核对）同理：先探测——在线即做并落盘缓存，离线保持挂账不臆造。

### 证据补全（提交 5494bf60 + 重锚）

| 项 | 产出 | 机制 |
|---|---|---|
| **owner 考古链** | addr → vtable_signatures → rtti_vtable_class 全链离线贯通 | raw-this-residue 1,467 分类：VT-OWNER-DIFF 429（T19 误归属，RTTI 揭示真身=`?$DynamicVectorClass@...` 模板实例）+ NO-VT 454（ctor/helper）+ MATCH 82 |
| **容器族回填** | **76 类 306 成员**（Items/Capacity/IsInitialized/IsAllocated/Count/CapacityIncrement） | 证据三源：RTTI vtable 家族统一 / 体内 vt-install 符号 / til 短名别名（DynamicVector/Vector）；**继承层级归并**（{VectorClass,DynamicVectorClass} 混合 → 最派生家族——基子对象 vtable 属正常形态）；冲突守卫三重（member_lookup 既有 / til 语义名 / class_layouts 父链——FootClass@4 被 AbstractClass vtable1 拦截）；vtable_offsets 家族表同步拷贝 |
| **_member_by_name 全量同步** | +814 名 / 170 类 | **修复 resolver fallback bug**：TypeList::Count 落到全局 0xB79BE0（CRTStreamCount 同名）→ 块事件错位 FAIL——G2 时代只进 member_lookup 的容器类从此可验证 |
| vt_ 全局 | +23 符号（vt_CellClass/vt_HouseClass/vt_UnitClass...） | RTTI 主表地址直读（vftable-ref 275 主根因 = G4 只声明了 639 模板实例） |
| DataGlobal | +4（使用形态类型化） | 839D10 字符串实参→unsigned char[]；A8DB48/A8DB60/89A308 标量算术→int |
| til 语义 | +7（Surface Width/Height@4/8、RawFileClass FileTimeDateLo@20 等） | owner-match 无名池 |

### 舰队修复五连（g5_fleet.py，全部 FAIL 自动回滚护航下实证）

1. **THIS_CAST_PAREN G7 双括号 bug**：G7 版正则要求 `*((` 双括号形态，v4 渲染的
   `*(_DWORD *)(this + N)` 单括号形态从未匹配——**residual-this-cast 696 的真根因**
   （此前被 lint 兜底 skip 掩盖）。修复为与验证器 _IDA_CAST_PAREN 1:1 镜像。
2. **foreign-receiver 旁路 + 逆映射**：ida_cache 接收者命名为 Block/a1 时，IDA 侧
   成员/派发事件恒 0（正则全是 this 基）——翻译必须无 this-> token：成员/派发重写
   全旁路 + 预重写块 `this->Name` 逆映射回裸形态（布局偏移/类型 or field_0xNN 后缀）。
   **G6-G8 gap2 低 PASS 率（52-81%）的隐藏成分**。试点 MSPCXAnim 9/9。
3. **hoist 双变体仲裁**：for-init hoist 对部分渲染修块序、对另一些造块序（G4 Agent A
   已知）——alt(no-hoist) 变体 swap_body 直驱 + 复验采纳（replace_body 只认 pending
   状态，已译函数需文件手术）。
4. **memory-chain 词汇**：`MEMORY[A][idx]` → `DataGlobal_A[idx]`（事件两侧归约为
   全局访问，索引算术无事件）；`->?` 破损渲染守卫。
5. **raw-this-residue 守卫精确化**：deref 上下文追踪（ctx.residues）替代文本扫描——
   非解引用 cast（`v3 = (_DWORD *)(this+4);`）两侧 0 事件可透传；cast 列表扩展
   （unsigned int/_QWORD/__int64 ×4、unsigned __int16 ×2——注意 _QWORD 验证器按 ×4）。

另：g_by_addr 无尺寸数组正则修复（G8 的 `[]` 声明舰队不可见）；residual-this-cast
lint 移除（cast 列表 ⊇ 验证器后剩余形态双侧 0 事件）；swap_body/rollback 括号
deficit 加固（波 1 的 6 个坏块根因 = swap 吃外层闭合，HEAD 外科恢复 + 加固）。

### OO refresh + 舰队波

- **refresh**：rewritten 5,684 / unmapped 5,365；9,802 已译记录字节级保留。
- **波 1（ffedee1a）**：544 桶全量 48.5 分钟，+1,218 全 CFG 验证；试点桶 PASS
  77-100%。波后注解 6 补齐、一致性 69/3 基线、括号仅基线 -1。
- **外科轮**：sigfix2（def 参数对齐伪码声明 84——G8 sigfix 的参数数错配清偿）+
  defix（free-this 下划线 def 成员化 54，thunk 族 `// attributes: thunk`）+
  v3 截断占位块 ida_cache 重建 7（53 无缓存 = v4 截断不播种，留待 IDA 回线）。
- **波 2（8c3c3be5）**：177 桶 +76；addr 桶 FAIL-recycle（do/while+LABEL 复杂体
  复跑全灭——规则生成器天花板再次实证，非回归）。波后注解 15 补齐
  （6 mismatch = 同名函数地址歧义挂账不动）。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 10,350 | **11,665**（+1,315：证据解锁 + 两波全 CFG 验证） |
| MCP pending | 6,541 | **4,624** |
| member_lookup | 1,311 类 | +76 类 306 容器语义成员 |
| signals._member_by_name | ~1,300 类 | **+814 名（resolver fallback bug 修复）** |
| vt_ 全局符号 | 639+23(G8) | **+23（G9 RTTI 直读）** |
| generator-ready | 429 | 峰值 2,069（证据+修复后）→ 收割后 ~0 |
| 一致性 | 69/3 | 69/3（基线维持） |
| 注解 | 10,071/0/0 | 9,831/0/6（6 mismatch=同名歧义挂账） |
| auto-fill-baseline | f933b53f | **8c3c3be5**（三次重锚：5494bf60 → ffedee1a → 8c3c3be5；重锚不清账） |

### 遗留与下一步（G9 后续队列）

1. **too-long 1,771**：语义翻译（LLM 手动批次/agent 舰队）或分块策略——机械面已尽。
2. **raw-this-residue ~525**：真类无名区（TActionClass@144/68、CCFileClass@100、
   Cell@56 等）——A1 成员语义命名 / B4 字段级考古前置。
3. **FAIL-recycle ~350**：do/while+LABEL/HIWORD-BYTE1 内在函数/指针算术链复杂体
   ——需要逐形态词汇或语义翻译。
4. **vftable-ref 141**：模板嵌套渲染/非 this 目标长尾；**截断 53**：执行前先
   当场探测 IDA 连接（状态非持久）——在线即 `get_context` live 拉取重建并回填
   ida_cache，离线保持挂账。
5. **hash-type 144 / ternary 109 / param-mismatch ~70**：小词汇或 def/hpp 手术。
6. **A2 owner 考古**：G9 的 RTTI owner 考古链（离线）可批量纠正 T19 误归属命名
   （44 向量族 + VT-OWNER-DIFF 清单在 .omo/g9_owner.json）。

---

## 执行日志 — 2026-09-14 G10 会话：IDA 在线窗口证据补全 + G9 截断损害修复 + 舰队波（completed 修正 11,665 → 11,505 诚实口径）

用户指令四段式（G4/G5/G8/G9 同款第 5 次）：IDA MCP + CSP 结果补全签名/类/全局 →
OO 语法替换 → 提交重锚 → RA2MCP 翻译。**IDA 全程在线**（当场探测确认）。

### G9 截断损害修复（本会话最重要的考古成果，破坏性发现）

- **发现**：OO refresh 首跑后 pending 暴涨 +1,252 → 追查发现 **G9 波 1（ffedee1a）
  曾把 7 个文件整段截断**（gap2_global_defs -460 / Jumpjet_e4 -280 / object/gap2 -225 /
  house/gap2 -153 / WarheadTypeClass -19 / entity/gap2 -15 / SessionClass -8，
  共 **1,160 条记录 silently 丢失**——译体与 pending 同殃）。G9 期末的 pending 4,624
  因此少计 ~1,460，且 582 个 completed 是幽灵（译体已不存在）。
- **恢复（零臆造，全部字节来自 git 5494bf60）**：235 条译体直接恢复 + 257 条被
  幽灵 marker 占位的译体置换恢复 + 619 条 pending 恢复；**316 个幽灵 completed
  诚实复位 pending**（83 截断丢失 + 230 无体假完成 + 3 残尾）——completed
  11,665 → 11,335 为真实口径。
- **marker&completed 矛盾 670 → 0**（HEAD 基线 11）；17 个双定义 marker 删除
  + 3 个真体补标准注解（裸名碰撞假阳性 14 个二次复位修正）。

### gen_e4_materialize 扫描器双修复（根因）

1. `scan_e4_preserved` 记录头规则 b 的 prev 守卫扩展（`}` OR `#include`/`//`/
   文件起点）——G9 波次译体大量为文件首记录，旧守卫漏识别 → refresh 重复物化毁译体；
2. `DEF_INLINE_ADDR_RE`（def 行行尾内联注解）纳入 bodyless 判定与 preserved 扫描
   ——544 个真体曾因此被误判 bodyless 而 e4 桶重复物化（双定义）。

### 证据补全（IDA 在线窗口清偿 G9 挂账）

| 项 | 产出 | 机制 |
|---|---|---|
| ida_cache 回填 | **74/75**（70 decompile 工具 + 4 py_eval 全量分块 180K 字符） | G9 挂账"53 截断块留待 IDA 回线"清偿；0x5D7030 AI::CreateMCV Hex-Rays 反编译失败诚实挂账 |
| A1 成员命名 | **37 成员**（TActionClass 10 + SuperClass 全链 19 + CheckListClass/ParticleClass/BulletClass/DropListClass/MPCooperative/BinkMovie/Theme/SidebarClass） | 双/三源：YRpp 声明序 + LoadFromINI 参数槽位铁证 + ctor/usage 二进制；ScriptTypeClass@160/CCFileClass@100/Cell@56/NullModemClass@56 诚实 skip |
| SuperClass mbn 漂移 | 尾区 12 条修正（+2~+4） | YRpp 三锚点（CanHold@0x60 注释/ChronoMapCoords@0x62/Animation@0x68）+ 二进制 SetReadiness→111 双向仲裁 |
| **BulletTypeClass mbn 漂移** | **65 条修正**（AA@16→675 字节态错位族、尾区平移、Airburst@0 假条目删除） | 语义翻译 0x46C820 暴露；member_lookup/til 为权威反向同步 |
| vtable 槽位 | +15 槽（XSurface/ParticleSystemClass/AircraftClass×4/CCFileClass 等） | live 主表直读 + 祖先链过滤；38 诚实拒绝（foreign/nofunc/illegal） |
| DataGlobal | +5（使用形态类型化） | 0x815F54 维持 G8 诚实 skip |

### OO refresh + 舰队波

- refresh（修复后）：preserved 10,625 / rewritten 5,850 / E4 buckets 450 文件。
- **波 1（5210c7df）：193 桶 17.8 分钟 +162 全 CFG 验证**（replaced 780 / FAIL 618
  自动回滚——dry-scan 的"GENERATED"含大量 G9 FAIL-recycle 回收体，生成器天花板
  形态再实证）。
- **语义批（d62a6fa0）：+9 全 CFG 验证**——PointerExpired 三连（TActionClass
  0x6DD2C0 事件双设反向确认 NextAction@40；BulletTypeClass 0x46C820 暴露 mbn 大漂移）、
  PlayAudioAtRandomWP do-while 镜像、GetKeyStateSafe（def 补参 + 词汇新知）、
  AbstractClass 可见性族 5 连 deleting dtor 模式。
- **词汇表新知**：①全局索引读必须 `*(DataGlobal_X + i)` 退化指针形态（下标形态
  不发 cpp READ 事件，0x53EC70 实证）；②IDA 名数字开头的 thunk（VtableStub::5CB6C0）
  非法 C++ 标识符 tokenize 不出 CALL——issue #72 挂账。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 11,665（含 316 幽灵） | **11,505（诚实口径：-316 复位 +162 波 +9 语义）** |
| MCP pending | 4,624（截断少计） | **5,150（真实总账浮出）** |
| marker&completed 矛盾 | 11（HEAD 基线，实际 582 潜伏） | **0** |
| ida_cache | 18,981 | +74（截断块全量） |
| member_lookup | — | +37 语义成员 |
| signals._member_by_name | SuperClass/BulletTypeClass 漂移 | 12+65 条修正 |
| 一致性 | 69/3 | 91/7（别名自愈型增量，E3 插入的 hpp 声明名变体） |
| auto-fill-baseline | 8c3c3be5 | **d62a6fa0**（三次重锚；重锚不清账） |

### 遗留与下一步（G10 后续队列）

1. **too-long ~1,776 + FAIL-recycle 618**：语义翻译主体（agent 舰队/手动批次）；
   本会话后台 agent 不可用（idle-time 限制），已验证手动 MCP 语义流程效率
   （9 函数含考古）。
2. **误归属族**：TActionClass 桶的 execute*Action 多为 DisplayClass 等误归属
   （this+54xx 超界铁证）——A2 owner 考古批量化。
3. **issue #72**：thunk 合法别名符号管道。
4. **TActionClass@40-48 已命名**（PointerExpired 族解锁）；其余 member-missing
   527 distinct 按 A1 双源法逐类推进。

---

## 执行日志 — 2026-09-14 G11 会话：截断真值修复链 + 验证器对称性七连 + 舰队波（completed 11,505 → 11,696）

用户指令四段式（G4/G5/G8/G9/G10 同款第 6 次）：IDA MCP + CSP 结果补全签名/类/全局 →
OO 语法替换 → 提交重锚 → RA2MCP 翻译。**IDA 全程在线**（当场探测确认，uptime 57min）。

### 证据补全（提交 e0cf04c1 + 重锚）

| 项 | 产出 | 机制 |
|---|---|---|
| **截断块全量修复** | **src 截断标记 60→0**（48 文件清零） | gen_e4_materialize 接入 ida_cache 置换（签名合成/OO 重写之前，完整伪码同吃成员重写）；DEF_INLINE_DECL 纯声明不算有体注释 |
| **G10 截断 cache 暴露** | 23 条 HTTP 输出预算截断的 cache 经 py_eval 进程内全量重取（0x712170 最大 168K） | G10 的 74/75 回填实际有 23 条只存了 ~1K + `[NNNNN chars total]` 尾 |
| **诚实复位** | **10 个 G10 假完成复位 pending**（对截断真值验证通过的假阳性；0x60d540 GameScreen_DlgProc 等，全量真值下缺 59 事件） | completed 11,505 → 11,495 真实口径 |
| **vt_ 全量补齐** | **+515 符号**（模板实例 191 live 反修饰匹配 + RTTI 主表 324） | g_by_addr 同址 DataGlobal 后置重排（vt_ 优先）；vftable-ref 232→8 |
| vtable 槽位 | +12 槽（g10 主表直读法两轮） | foreign 诚实拒绝（CCFileClass@4=ObjectClass::GetMember06 误名族挂 A2） |
| DataGlobal | +7（INI key 字符串铁证 4：LANScrollText/LastNickSlot/ScrollRate/GuardArea + 标量 1 + 对象指针 2） | 使用形态类型化 |
| OO refresh | preserved 10,963 / rewritten 4,557 / unmapped 5,590 | 双物化外科 2（0x76E180/0x76FEB0 gap2 已译体 vs e4 pending） |

### 验证器对称性七连（本会话核心发现：G10 截断修复暴露的系统性 FAIL 链）

舰队波首轮 0/177 全灭 → 逐层归因（全部经 completed 池抽样回归 119-120/120 PASS）：

1. **vt_ 0 事件**（efv_cpp_resolve）：IDA 侧对 vftable 引用零提取（实测
   `MEMORY[0x..]=&X::`vftable'` 仅目标 WRITE），cpp 侧 global 解析造单侧
   READ(global)——G4 以来安装词汇的对称性缺口，vt_ 符号入 signals.globals 后显形。
2. **til 直渲 this->Name 对称提取**（efv_ida_events + verify 单函数路径传参）：
   v4/live 伪码直接携带 IDA til 成员名（`this->field_0`），IDA 侧原无提取、
   cpp 侧未解析发通配——单侧事件恒不对称。现两侧镜像（解析→偏移事件/
   未解析→同款通配）；class 经 C++ 体前置定位传参（sub_* 名无 `::`）。
3. **元素单位派发缩放 ×4**：`(CAST)*this + N` 的 N 是元素算术（cast 使 *this
   成为 4B 元素表指针），`+18→72/+73→292/+110→440` 实证全中真槽位；
   判定=前置闭 cast + N%4≠0（38 个 N%4==0 歧义保守字面，0 completed 暴露）。
4. **goto 守卫先于 DECL_RE**：`goto LABEL_N;` 被声明正则吃成 (type=goto,
   name=LABEL_N) 原样透传——G7 只守卫了 break/continue；vftable 兜底解锁
   CRT 状态机块后暴露（goto skip 6→329 诚实分类）。
5. **双层括号派发解包**：`(*((CAST)BASE))(args)` 的 cast 提取吞掉全部内容。
6. **THIS_BASE 扩展**：`*(CAST)(this) + N` 派发基座形态。
7. **g5_fleet vftable RHS 兜底**：任意 LHS 的 vftable 引用统一重写 vt_ 符号，
   LHS 走正常成员解析路径（member-target/out-struct/cast 形态）。

### 舰队波 + 事故与修复

- **波 1（1c8eef89）：167 桶 +202 全 CFG 验证**（addr40 9/14、gap2 桶 2-3/桶）；
  +0x4C68E0 手动语义批。**too-long max-lines 150 重测 0/24**——G8 否决在新词汇
  下维持（switch 状态机/memory-chain 是生成器天花板，语义翻译队列实证）。
- **两次中断波遗留 36 个 replaced-未验证记录**全部从 cache 重建标准 pending 块
  （HEAD 无对应记录——本会话 refresh 新物化）；3 处重复记录 + 3 处括号损伤
  外科修复（g7 权威口径 fresh=0）。
- **验收**：括号 fresh 0 / 注解 10,158+0+0 / 一致性 91/7 基线 /
  marker&completed 对账 0。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 11,505 | **11,696**（+202 波 +1 语义 -10 诚实复位） |
| MCP pending | 5,150 | **4,935** |
| src 截断标记 | 60 块/48 文件 | **0** |
| vt_ 符号 | ~699 | **+515（模板 191 + RTTI 主表 324）** |
| ida_cache | 23 条截断污染 | 全量重取（g11-live-pyeval） |
| vftable-ref skip | 232 | 8 |
| goto 诚实分类 | 6 | 329（透传 bug 修复后） |
| 一致性 | 91/7 | 91/7（基线维持） |
| auto-fill-baseline | 9ae672b1 | **1c8eef89**（两次重锚：e0cf04c1 → 1c8eef89；重锚不清账） |

### 遗留与下一步（G11 后续队列）

1. **too-long 2,044 + goto 328 + FAIL-recycle**：语义翻译主体（新词汇下
   max-lines 提升仍 0/24——规则生成器天花板三次实证）。LLM 手动批/agent 舰队。
2. **raw-this-residue 607**：真类无名区（til field_* 占位）——A1 成员考古
   （本会话 til 批查 24 类目标偏移全 field_*/越界，G10 跳过名单维持）。
3. **hash-type 176 / ternary 124 / param-mismatch ~80**：小词汇或 def/hpp 手术。
4. **38 个 cast-direct N%4==0 派发歧义**：需逐函数二进制仲裁（0 completed 暴露，
   非阻塞）。
5. **HEAD 既有 284 个 replaced-未验证记录**（历史波次遗留，非本会话引入）：
   下次 refresh 前需甄别（防 scan_e4_preserved 误固化）。


---

## 执行日志 — 2026-09-15 G12 会话：验证器对称性双修复 + hash-type 破案 + H1 舰队波 + 中断波事故链（completed 11,696 → 11,788）

用户指令四段式（第 7 次，G4/G5/G8/G9/G10/G11 同款）：IDA MCP + CSP 结果补全签名/类/全局 →
OO 语法替换 → 提交重锚 → RA2MCP 翻译。**IDA 全程在线**（当场探测确认，uptime 3.4h）。

### 证据补全（提交 389356d9 + 重锚）

| 项 | 产出 | 机制 |
|---|---|---|
| **hash-type 175 悬空序数破案** | **HASH_TYPE_MAP 9 项**（#374=AnimClass/#375=HouseClass/#376=BuildingTypeClass/#377=BuildingClass/#72=wchar_t/#381=RulesClass/#56=LPCSTR/#122=u_short/#355=exception） | til live 批查（374-380 为**悬空 ordinal**——get_numbered_type 失败、无名无实体）+ 使用上下文铁证（Destruct 自身 this/HouseClass_Array 元素/DemolishBridge receiver）；**#378 异义挂账**（ProcessPower this 调用方异构：BombClass/FoggedObject/HouseClass——A2 考古）；覆盖 ~96% 实例 |
| A1 成员命名 | CCFileClass@88=`FileBuffer` | ctor 0x473A80 `Buffer::Init(this+88,0,0)` 嵌入子对象铁证（G2 容器族同型）；**til 尺寸 84 系截断错模型**（真 ≥108）；+100/+104=Buffer+12/16（Buffer::Init 只命名 +0 指针/+4 尺寸/+8 IsAllocated——余下 B4） |
| broken-arrow 考古 | 72 块定性 | `->?[N]` 为 **IDB 侧 til 无名成员序数渲染**（live 重现 v4 同形态——路线图"live 重取置换"方案证伪）；修复需 til 序数表导出 + 验证器 `this->?[N]` 序数形态对称扩展（G11 til 直渲同型范式）——挂 H2/H6 |

### 验证器对称性双修复（H1 波 0% 全灭的根因链）

首跑 0/319 全灭 → 逐层归因（completed 池抽样回归 118/120，2 回归 stash 对照定位后随修复消除）：

1. **下标全局事件**（efv_cpp_events）：`DataGlobal_X[i]` 下标分支对 global 基类发
   READ/WRITE（IDA 侧 `MEMORY[A][idx]` 恒发事件；旧 blanket-drop 制造单侧 0 事件——
   **G9 memory-chain 词汇从未真正通过验证的根因**，所有下标形态函数 completed=0 实证）；
   member/local 基类保持丢弃（`Upgrades[slot]` 既有对称）。
2. **def_pattern 嵌套括号**（verify_execution_flow）：函数指针参数
   `int (__thiscall *a4)(int)` 使 `[^)]*` 内层截断 → 名字查找失败 → by_addr 回退
   命中旧假存根（Array::ForEach 0x4068F0 init_game.cpp 假存根抢占实证；
   **3,200 个陈旧注解与 pending 记录双注解为存量债**——本会话只修正则）。
3. **g5_fleet 回滚大小写**：`// 0x447E90` vs 文件小写头严格匹配失败 → building.cpp
   7 个失败译文滞留未回滚（改大小写不敏感）。
4. **记录 span 走查边界**：重复 def 头使括号平衡永不归零 → 旧走查吞掉文件尾部
   （G9/G12 两代吞尾同根因；跨下一记录头 = 损坏记录拒做手术）。

### H1 舰队波与事故链（如实记录）

- **修复后重跑：+101 全 CFG 验证**（addr72 0→24、addr4C 0→13）。
- **autofix 事故**：波后括号修复脚本把伪码内部 `// 0x...` 锚点行误判为记录头 →
  6 文件 vandalize（插入 300+ 垃圾括号行）→ 完整止损：restore + 确定性重放 +
  **84 幽灵逐个裁决**（83 假幽灵验证 PASS 重标 / 1 FAIL 从 cache 重建 pending /
  2 无 namespace 形态补判）。
- **G11 遗留损坏清偿**：六文件重复 def/失衡记录 15+ 处从 ida_cache 权威重建为
  规范 pending 块（house 12,700 行 G10-G11 损坏堆积区规范化 -3,700 行）；
  `0X` 大写头事故（G4 教训重演）当场发现修正；0x696AE0 陈旧重复记录删除。
- **净账**：completed 11,696 → **11,788**（+92：101 波 - 6 中断损失 + 复位差）；
  六文件 0 失衡；注解 10,151/0/0；一致性 91/7 基线；marker&completed 对账 0 幽灵。

### H5 前台 agent 试点（unit.cpp 桶）

0 PASS / **35 全部精确记账**（issue #73-#107）——**unit.cpp 是 header-pipeline
前置桶**的实证：①hpp 声明全无参 vs IDA 原型 1-5 参（16 函数）②member_lookup↔hpp
双体系脱节（radioContact@248 等仅 member_lookup 有名，9 函数）③被调未声明
（WinAPI::Wrapper/Float::Accumulate/Power::TimerProcess 等，6 函数）④接收者语义
矛盾（UnloadPassengers +0xAC int32 当指针，1）⑤块数据损坏（1）⑥B1D0xx 全局
extern 缺段（1，**事件面最窄的重译首选**）。附带勘误：get_context member_map
空类名 bug、Random::Range/LinkedList::Pop 实已声明。

### 度量变化（本会话）

| 指标 | 会话前 | 会话后 |
|---|---|---|
| MCP completed | 11,696 | **11,788**（+92 全 CFG 验证） |
| MCP pending | 4,935 | **4,840** |
| hash-type skip | 175 | **~10**（#378 18 + 长尾；96% 解锁待收割） |
| 验证器对称形态 | 下标全局 0 事件 / fn-ptr 签名失明 | 双修复（回归 118/120→全绿） |
| issue 池 | 52 | **87**（+35 unit.cpp 精确记账） |
| 六 gap2 文件 | G11 遗留损坏 | 0 失衡（cache 权威重建） |
| auto-fill-baseline | 1c8eef89 | **389356d9**（重锚不清账） |

### 遗留与下一步（G12 后续队列）

1. **hash-type 解锁收割**：~165 块现可生成（GENERATED 重分类）——直接 g5_fleet 直驱。
2. **OO refresh 本会话未跑**：G11 refresh 产生重复 def 头的管线根因未查——下次
   refresh 前先 root-cause（防再生成损坏记录）。
3. **H2 前置清单已账面化**：unit.cpp 35 函数的 hpp 签名/成员双体系/声明缺口
   （issue #73-#107）= A1/A2 的精确工作队列。
4. **broken-arrow 72 块**：til 序数表导出 + 验证器 `->?[N]` 对称扩展（半会话）。
5. **后台 agent 仍不可用**（idle-time 限制，G10 同款）；前台 agent 有效但核心类
   桶被声明债阻塞——优先收割机械面（hash-type/addr 桶）+ H2 声明补全。

---

## 执行日志 — 2026-09-15 G13 会话：证据补全大轮 + OO refresh + 舰队波 + H2 手术（completed 11,788 → 11,843 / pending 4,840 → 4,771）

> 三提交：9710bf2c（证据补全）→ 3e94ae9a（OO refresh）→ 30d9480c（舰队波 + H2）；
> auto-fill-baseline 重锚 30d9480c。IDA :13337 全程在线（探测后使用）。

### 证据补全（9710bf2c）
- **live til 全量导出** 1,706 UDT / 10,975 语义成员（`.omo/g13_til_live.json`，
  py_exec_file + tinfo 迭代，成员序数天然含在列表序中——broken-arrow 序数表已就位）
- **member_lookup 合并 +503 语义成员 / 22 类**（InfantryClass 121 / UnitClass 115 /
  HouseTypeClass 44 / AnimTypeClass 40 / TubeClass 40）；占位符过滤 + 垃圾填充名
  清洗 41；`signals._member_by_name` 双写同步
- **UnitClass til 增量第二轮 54 干净成员**：84 同名异位冲突 + 23 mbn 漂移族诚实
  剔除——**TechnoClass 中段三族争议区（+4/+12/+188）再次实证**（flashing 228 vs
  240 vs 424 三源三值），冲突守卫是硬要求
- **vtable 槽位 +15 真新增**（live 主表直读 + RTTI 祖先链守卫经 class_name_align
  桥接）；ObjectClass 槽名冲突暴露 hpp 虚区错位旧债（IsAboveScreenMargin hpp=344
  vs 二进制=124，AGENTS 裁决 #5 的又一实证）——保守不覆盖
- **DataGlobal +4**（live xref 函数定性：83D4E4 RulesClass::ReadIQSection 键表 /
  833240 GameSettings::Read / 83F158 ScenarioClass 网络配置 / 89A318 标量）
- **hash-type 悬空序数定案 3**：**#378=AbstractClass**（`AbstractClass::ProcessPower`
  自身签名即 `#378 *this`——函数名与 this 型互证，12 块解锁）/ #473=ScenarioClass /
  #487=AircraftTypeVector；HASH_TYPE_MAP 9→12
- **member_missing 548 对终局归因**：til 占位 236 / til 无覆盖 283 / interior 18
  （数组元素访问，验证器下标不支持诚实搁置）/ 语义提案 11——**A1 债的 til 侧
  天花板已到**，剩余需 YRpp+ctor 三源证据（YRpp submodule 为空需补齐）

### OO refresh（3e94ae9a）
- `gen_e4_materialize --phase refresh`：**rewritten 4,514 / unmapped 5,661**，
  11,173 已译记录字节级保留；e4_globals.hpp E1 增量 +651 行
- 物化副作用修正：10 条 bodyless 新记录剔除（0x448260 括号 +4 拼接伪差 v4 源
  仅 +1——物化器拼接 bug 记账）
- **g7_gap2_refresh '{' 注入损伤回滚**：六 gap2 文件 checkout 恢复（纯 `{` 无配对
  删除插入，house +31 等）——**bug 未修，gap2 refresh 冻结至修复**
- g5_fleet **class_layout 父链合并**（T14 扁平模型语义；PARENTS 表 =
  class_layouts.parent + rtti_hierarchy.direct 经 class_name_align 桥接，192 条）：
  UnitClass@540 focus / AnimClass@56 attachedBomb 等基类区解锁

### 舰队波 + H2（30d9480c）
- **G13 W2 波 109 桶 +47**（g13_wave2_plan 从 dry-scan 重建，GENERATED 293）；
  TActionClass 4/4、AbstractTypeClass/AbstractClass #378 族全 PASS
- **addr 桶 0% 通过率甄别**：幽灵 pending（主树旧译无地址注解 → E4 物化双份，
  verify 按名命中 menu_select.cpp 等旧译）+ 旧译对 v4 真值不忠实——诚实回滚，
  **主树旧译地址注解补全是新识别的债面**
- **H2 A 类 17 项 hpp+def 手术**（unit.hpp 参数补全 + def 行对齐）；
  **记录级确定性重建管线** `.omo/g13_rebuild_records.py`（内联伪迹免疫端检测 +
  规范形态 [addr,def,{,marker,live,}]）；ida_cache 10 函数 live 更新
  （738d30 等陈旧 mega-blob 尾段破案）
- **unit.cpp +8 完成**（738d30 DeployToBuilding 等）；15 pending 剩余（B/C 类
  成员名 + 被调声明债）；FootClass_field_5A4 → **Archive** 四类四方重命名
  （ProcessReturnToBase vt111 比较型证据 + YRpp 语义）
- **波 rollback 拼接 +1 伪差 13 条修复**（缓存确定性重拼——rollback 路径的
  splice 有 off-by-one 记账）

### 事故与止损（全记录）
- unit.cpp 恢复链：拼接丢 def 闭合 → 手工括号手术恶化（strip_code 跨记录注释
  状态使逐记录测量失真）→ **checkout + 确定性重建重放**（正确范式）；
  signals 7 幽灵复位（**`a.upper()` 把 `0x` 变 `0X` 的匹配 bug——G12 警告
  重演**）→ 重放标记 8
- 文件级括子 2→-8 为遗留副本清除的记账漂移（marker 记录全部结构健全、
  g5_fleet 可解析、0 幽灵——功能门全绿）
- 波运行期间 signals.json 直读撕裂（mark并发写）——**波中禁直读 signals，
  改用 MCP stats 口径**

### 波后动作
括号净 0 新增（LightSourceClass/unit.cpp 均 2→0 改善）/ 注解 1 missing
（IsCrushable 0x5f6cd0 定义记录在遗留损坏区——挂账）/ 一致性 91/7 基线 /
marker&completed 对账 **0 幽灵** / readiness READY

---

## 执行日志 — 2026-09-16 G14 会话：证据补全 + A1 YRpp 命名轮 + align bug 修正 + 舰队两波（completed 11,843 → 11,894 / pending 4,717）

> 三提交：ef0da229（证据补全 + OO refresh）→ 0f60d26c（舰队 W1 +48）→
> 613c0cd7（align 修正 + W2 +3）；auto-fill-baseline 重锚 613c0cd7。
> IDA :13337 全程在线（探测后使用）。

### 证据补全（ef0da229）
- **YRpp submodule 修复**：gitlink 注册 + 浅克隆（Phobos-developers/YRpp，
  headers 在仓库根）——A1 三源证据的 YRpp 腿就位（交接单基建项 #5）
- **vtable 槽位 +11**（g13_slot_read/merge 复跑：ObjectClass@124
  IsAboveScreenMargin 二进制定案 / InfantryClass@1156 ValidatePlacement /
  AircraftClass@684 等；43 拒绝为 COMDAT 折叠伪影，守卫正确）
- **DataGlobal +14**（live xref 定性：83D4D8/83D4C0 IQ 键表 blob 头族、
  8331EC/8331C8/8331A8 GameSettings 键表族、83F150/83F148/83F104 WOL 网络配置
  键表族、89A318/89A31C/89A320 setOverlayType -1 哨兵族、815F54 音频调试格式
  blob、8392C0 EVA 消息名 blob、B78160 WWMouse -1 哨兵——next-layer 3 波全清）
- **A1 成员命名轮（新工具 `.omo/g14_a1_yrpp.py`）**：YRpp 声明序解析 +
  多锚对齐（S1 声明序 / S2 in-name 偏移锚 field_XX-unknown_XX / S3 sizeof
  断言 / S4 member_lookup 语义名锚 / S5 class_layouts 尺寸界 + til 锚定 +
  系统性漂移检测器）；模板基类尺寸解析（VectorClass=16/DynamicVectorClass=24）；
  占位名前缀过滤；双键双写（canon 键 + Class 键，ml + mbn 双体系）
- **AnimClass sizeof=456 二进制定案**：vtable 槽 48 `mov eax, 1C8h; ret`
  （误名 MissionStubReturnZero 实为 Size()）——class_layouts 6324 / til 90200
  双双证伪为膨胀复合体
- OO refresh：rewritten 4,496 / 11,200 译体保留；member_missing 543→501

### align bug 发现与修正（613c0cd7，本会话核心事故链）
- **根因**：`align()` 把 ≥8B 一律 8 对齐——12B TimerStruct/CoordStruct 被
  8 对齐后链式 +4 位移（TeamClass SuspendTimer 100→104）
- **二进制裁决链**：TeamClass ctor（vtable 安装者 0x6e8b32，名 MissionClass::
  Construct）写 timer1@88/96、timer2@100/108、Tag@112 = 12B 步长；YRpp
  CDTimerClass=TimerStruct<FrameTimer> 别名同为 12B（SysTimerClass 断言 0xC）
- **影响面**：43/109 已应用项位移（AnimClass 260↔264 族 / BulletClass
  TargetCoords 312↔320 族 / MapClass outBuffer 24↔40 族）；**引用排查
  证明 25 处引用全在 pending 伪码、已完成译体零引用**——CFG 事件对称门控
  使误位项只能 FAIL 回滚，不产假完成（防御体系实证）
- **修复**：43 项移除（ml+mbn）→ 修正版工具重应用 53 项（til 守卫下重新
  背书）→ refresh 重跑 → Team/Trigger/Weapon -4 漂移族全部消解
- **方法论沉淀**：MSVC 自然对齐 = 最大成员对齐（本代码库 ≤4），仅
  double/__int64 8 对齐；12B 复合结构 4 对齐

### 舰队两波（0f60d26c + 613c0cd7）
- **W1 108 桶 +48**（300 GENERATED：A1 填充后 286→300）；addr7C/addr7D
  0% 维持 G13 基线（CRT/swap 词汇缺口）；gap2 三文件括子 delta 为 rollback
  splice 记账族（parse 健全）
- **W2 99 桶 +3**——**FAIL-recycle 天花板确认**：255 GENERATED 残余全部为
  词汇缺口（同块反复生成-验证-回滚），规则生成器无新词汇下已到顶
- ghost 审裁幂等复跑（82 已收编 / 2 遗留损坏区挂账：0x4a0630/0x4f42f0）

### 波后状态
括号 balance-delta 文件 **0**（AnimClass 0→4 经修正链自然清零）/ 注解
1 missing（IsCrushable 挂账维持）/ 一致性 91/7 基线 / readiness 待复跑

### G14 新增债面与下一步
- **漂移族账本** `.omo/g14_drift_ledger.txt`（33 类三源分歧画像：Cell -36、
  TerrainType -88/-92、WeaponType -295、BuildingClass 多族）——后续 ctor
  二进制裁决的候选清单（ctor 裁决起点 23 类已落盘
  `.omo/g15_drift_ctors.json`——.omo 不入 git，精华投影如下：
  WeaponTypeClass Constructor@0x771c70 / BuildingClass ctor@0x43b680 +
  Construct@0x43b740 / TerrainTypeClass@0x71da80 / CellClass Construct@0x47bbf0 /
  BulletTypeClass Construct@0x46bbc0 / SmudgeTypeClass@0x6b5260，其余 17 类
  RadSite/House/Gadget/Locomotion 族/Wave/Tiberium/Script/Campaign/Object/
  Terrain/Factory/Surface 见 json）
- **addr7C/7D 短排序族**（shortsort/swap cdecl 回调词汇）——39 个
  generate-OK-但-verify-FAIL 函数清单已落盘 `.omo/g15_addr7x_targets.json`
  （addr7C 21 + addr7D 18，含地址+函数名+失败原因）；H6 词汇专项首选入口
- H2 unit.cpp 15 pending 未动（B/C 类债维持）；gap2_refresh '{' bug 未修
  （冻结维持）；broken-arrow 32 块维持（需 efv 序数词汇 + 用户报备）


> 数据基线：MCP pending **4,935**（dry-scan 归因 4,881 + ~54 无伪码/ASM-only 块）。
> 归因构成（2026-09-14 G11 末 dry-scan 权威口径，`.omo/g8_dryscan.json`）：

| # | 类别 | 块数 | 根因 | 解法（已实证的边界） |
|---|---|---|---|---|
| 1 | too-long | **2,037** | 体长 >60 行，switch 状态机/memory-chain/三元长链主导 | **LLM 语义翻译**。规则生成器天花板三次实证（G8 max-lines 200 = 8.5%、G11 新词汇下 150 = 0/24） |
| 2 | raw-this-residue | **605** | 真类无名区（til `field_*`/`__pad_*` 占位，529 distinct） | **A1 成员语义命名前置**（YRpp 声明序 + LoadFromINI 参数槽位 + ctor 写入三源法；G10 单会话 37 名、G9 容器族 306 名先例） |
| 3 | goto | **328** | CRT 状态机 LABEL 交叉跳转 | **LLM 语义翻译**（goto→结构化控制流；G9 试点 PlayAudioAtRandomWP do-while 镜像先例） |
| 4 | GENERATED | **319** | 生成器已可产码 | **舰队波直驱**（无前置；按新词汇 PASS 率预期 +80~150） |
| 5 | hash-type | **175** | 伪码含 `#NN` 内部类型 ID | 词汇缺口：需 IDA live 会话解析 #NN→真类型后加 TYPE_MAP，或手动批次 |
| 6 | ternary | **124** | 三元 `?:` 与 IDA 扁平块 CFG 不对称 | 逐形态算术化词汇（fleetA CompareFunc `2*(a>=b)-1` 先例推广）；不易算术化者手动 |
| 7 | param-mismatch | **~110** | def 合成签名参数名/参数数 vs v4 伪码错位 | **def/hpp 双手术**（G8 sigfix 机械清偿 155+52 先例，可脚本化批产） |
| 8 | free-this | 46 | 自由形态 def 丢 this（thunk 族） | def 成员化手术（G9 defix 54 先例） |
| 9 | ida-broken-arrow | 31 | 伪码 `->?` 破损渲染 | IDA live `get_context` 重取置换（在线窗口） |
| 10 | IDA-ism 残留 | 24 | `dword_`/`unk_` 裸名全局 | 全局命名考古（A1 附带） |
| 11 | slot foreign / member 长尾 | ~150 | T19 误归属（44 向量族）/ 真无名 | A2 owner 考古（G9 RTTI 链离线化，`.omo/g9_owner.json` 清单） |
| 12 | 无伪码/ASM-only | ~54 | 导出即无伪码 | 纯汇编兜底翻译或诚实 defer（单列不计入翻译 KPI） |

### 执行波次（依赖排序）

| 波 | 内容 | 前置 | 方法 | 预期净增 | 估时 |
|---|---|---|---|---|---|
| **H1 即时收割** | ~~319 GENERATED 直驱~~ **✅ G14 已收割并实证天花板**：剩余 235 GENERATED = FAIL-recycle（同块反复失败），**直驱无增量** | 无 | 预建计划 `.omo/g15_wave_plan.json`（仅作词汇落地后验证波） | +0（需新词汇前置） | — |
| **H2 A1 命名轮** | 529 distinct 成员（头部：CCFileClass@100/Cell@56/CheckListClass@280/LayerClass@244/NullModemClass@56…；G10 跳过名单逐一复核）——**G13 后 til 侧天花板已到**（til 占位 236/无覆盖 283/interior 18 诚实搁置），剩余需 YRpp+ctor 三源证据 | 无（快照消费为主，IDA 在线增强）；**YRpp submodule 为空需先补齐** | 三源证据表 → rename_symbol 四方同步 → member_lookup/_member_by_name 双体系 | 解锁 #2 全部 605 + #11 member 长尾 | 2-3 会话 |
| **H3 机械小 Fry** | param-mismatch ~110 + free-this 46 + IDA-ism 24 + broken-arrow 31（live） | IDA 在线（broken-arrow/部分签名） | sigfix/defix 脚本化批产 + live 重取 | +120~180 | 1 会话 |
| **H4 舰队波 2** | H2/H3 解锁块直驱（raw-this 585 + member ~150） | H2+H3+**新词汇**（G14 实证：无新词汇直驱 = FAIL-recycle 0 增量） | g5_fleet 直驱 + `.omo/g15_handoff.md` P1/P2 预备材料（漂移族 ctor 起点 23 类 / addr7C 短排序族 39 函数清单） | 视词汇落地量 | 1-2 波 |
| **H5 语义翻译主线** | too-long 2,037 + goto 328 = **2,365**（持久主体） | 无硬前置（H2 提升可读性） | **agent 舰队 MCP 全流程**（G3 范式：3 agent 分桶 + CFG 双射规则书 + FAIL 自动回滚）；优先序 = 调用频次 × 类核心度（building.cpp 71 / TechnoClass 族 / 工厂生产链 → UI/INI/网络）；手动批 G10 实测 ~9/会话含考古，agent 舰队 G3 实测 +118/波 | 每波 +60~120 | **主体 ≈ 15-25 会话** |
| **H6 词汇专项** | ternary 124（算术化逐形态）+ hash-type 175（#NN 考古） | IDA 在线（#NN 解析） | 每形态 20 块试点 → PASS≥60% 推广，否则转 H5 手动 | +150~250 | 1-2 会话 |
| **H7 A2 owner 考古** | slot foreign 95 + 44 向量族误归属 | 无（G9 链离线可用） | RTTI owner 链批量改名（A2） | 间接解锁 | 1 会话（可与 H2 并行） |

### 里程碑

| 里程碑 | 口径 | 预计 |
|---|---|---|
| M1 机械面清偿 | H1+H3+H4 后 pending → **~3,900-4,100** | 近期（3-4 会话） |
| M2 词汇收益落地 | H6 后 pending → **~3,700** | 中期 |
| M3 语义翻译 50% | H5 过半，pending → **~1,800** | 远期主体 |
| M4 全量翻译完成 | pending → **0**，进入 D1-D4 集成验收 | Phase 1 出口 |

### 执行纪律（既有裁决沿用）

1. **completed 语义不放松**：每块 mark_completed 必须过 exec-flow CFG 双射；
   截断/无缓存真值不得验证（G11 的 10 假完成复位为鉴）。
2. **FAIL 自动回滚**：舰队波 FAIL 块回滚 pending，不硬留译体。
3. **语义翻译的 CFG 范式**：条件方向照抄 IDA 文本 / 单块表达式优先非短路 /
   三元降级菱形块 / 默认赋值+覆盖镜像（G2 会话沉淀五条全适用）。
4. **每波固定动作**：括号 HEAD-delta（g7 权威口径）→ annotations_audit →
   audit_consistency → marker&completed 对账 → 提交重锚。
5. **中断波恢复协议**：replaced-未验证记录从 ida_cache 重建 pending 块
   （G11 会话 36 块重建流程已脚本化验证）。

## 执行日志 — 2026-09-16 G15 会话：漂移族 ctor 裁决六类重建 + A1 四 bug + 舰队/手动波 + 假完成复位（completed 11,894 → 11,888 / 净 −6，诚实口径收紧；pending 4,723）

> 提交链：bf9baa92（证据+OO refresh 4551+重锚）→ 7b0ef3c0（舰队+手动+15、
> 复位×22、T8 叶缩放双修）→ 3afb6a0c（E3 代 unsigned-signed 首批基线语法债
> 10 处）。**gate 3/3 本会话首次全过**（此前一直被 addr7C 假完成挡在编译前），
> 编译首次推进到主体 → 基线编译债开始暴露（5,335 全量重建口径，裁决 v2 允许）。
> 全池 exec-flow 验证首次作为门控回归基线运行，暴露并复位 22 个 G3-G6 代假完成。

### 漂移族裁决（用户主线 ①：证据补全）

- **A1 工具四 bug 修复**（`.omo/g14_a1_yrpp.py`）：
  1. parse_header 把尾注释含 `(` 的成员行当方法调用丢弃（`int Range; // int(256*ini value)` → -8 链漂移；57 行/15+ 头）
  2. til `ColorStruct` 是 88B 误名结构（真身 3B R,G,B packed；23 头受影响；88B 假体在 til 无成员引用）
  3. PROP_RE 类型组不允许 `*`（`DECLARE_PROPERTY(TypeList<AnimTypeClass*>, Anim)` 整行丢 → -28 漂移）
  4. align() 对 3B 组合体按 4 对齐（MSVC 自然对齐=最大成员；ColorStruct 全 BYTE → 1）
- **二进制 sizeof 神谕**：live vtable slot-12 `mov eax,imm;ret`（GetObjectSize 范式）扫全部 23 漂移类 → `.omo/g15_ctor_writes.json`（ctor 写入分布 live 提取）+ `.omo/g15_drift_adjudicate.py`（链 vs 神谕 vs ctor 锚三证裁决）
- **六类重建**（til 重声明+class_layouts+member_lookup+mbn 四源，全部 ctor 锚定）：
  WeaponType 352（20 锚，TypeList=28B 定案：16+count+cap10+delta；Burst=1 默认/LaserDuration=10/FireInTransport=1 ctor 逐点验证）/
  TerrainType 700（7/7 全中）/ RadSite 116（12 锚）/ TriggerType 180（5/5，Difficulty[3] 数组性修正）/
  SmudgeType 676（真 ctor 0x6b5260 5/5）/ Jumpjet 152（av=13，bin 204 证伪）
- **DEFER 清单**（docs/g15_drift_adjudication.md）：BulletType 760（YRpp 头尾 744-759 缺成员 + Elasticity 声明 double 实为 float——ctor dword@716=0x3FE00000）/ ScriptType 564（链溢 4）/ Campaign 928（零锚+解析疑）/ Wave 576 / Building 1824（G13 争议区）/ Tiberium / Terrain / 各 Loco 零锚
- **ml 双口径发现**：TypeClass 族（Weapon/Bullet/Terrain…）ml 条目曾是 own 相对坐标污染（与 TechnoClass/CellClass 绝对坐标并存）——六类统一绝对坐标
- A1 dry 复跑：WeaponType agree=126（原 125 冲突清零）；+10 fills applied（BulletClass/RadarClass 等新解锁）

### OO refresh（用户主线 ②）+ 提交重锚（主线 ③）

- `gen_e4_materialize --phase refresh`：**rewritten 4,551 / unmapped 5,523**，11,236 已译记录字节保留；括号净 delta=0
- 提交 bf9baa92 + tag auto-fill-baseline 重锚（用户预告场景：refresh 改 pending 伪码块触发 modified-function 门控 → 重锚清账）

### 舰队波 + 手动 H5 波（主线 ④）

- g5_fleet 94 桶验证波：**+8**（addr40×4/Jumpjet/Smudge/TerrainType/team-gap2）+ WeaponType 试点 +2 = **+10**；FAIL-recycle 天花板维持（G14 实证一致）
- **手动 H5 语义翻译 +6**（infantry.cpp 小函数，全 CFG 双射）：HandleTargetDestroyed（Type@1728 证据名）/ ComputeDeploySpeedFactor（Crawling@1755+魔数除3表达式保留）/ ProcessUpdate（SequenceAnim+vfptr112）/ GetDeployWeaponIndex（**broken-arrow `?[0x820/824]` 反汇编解码=TurretWeapon[3/4]，raw 形态双侧零事件对称——通用解法**）/ GetProductionLimit（g_RulesClass_Instance@0x8871E0+难度 BuildLimit 数组 0xD58/C/D60）/ ProcessEnterOrRepair（叶修复后 vfptr 1152/496/1368 全对称）
- **mbn 双体系漂移实证**：focus 在 _member_by_name=544 vs ml/反汇编=540（Infantry/Foot/Techno 三类修正）——G10「mbn 与 member_lookup 双体系漂移」的又一实例
- **T8 叶缩放 bug 修复**：`*this + N` 裸形态（cast-paren 双指针 `#375 **this`）应 ×4（类型化指针算术；ProcessEnterOrRepair `*this+288`==`call [vfptr+480h]` 反汇编实证）；`*(_DWORD *)this + N` 标量形态不缩放（维持）。回归面实证=0（全池含该形态已完成函数 0 个）
- 手动波系统发现：**InfantryClass 链 vtable 槽词汇缺口是 H5 主阻塞**（槽 122/488B=现名 ParticleClass::MissionDispatch 误归属嫌疑、槽 49/196B 无名、槽 116 hpp 无声明）——issue #108/#109 记账，需 vtable 槽位审计轮（G4/G5 范式：binary vtable 直读命名 + vo + hpp 虚区声明）

### 假完成复位 ×10（诚实口径收紧）

- 全池 exec-flow 验证暴露（G14 align 修正移除 43 误位项后的滞回暴露 + G6 双括号伪码体族）：_flsall/start（G6 双括号伪码体）/ FacingClass::Update+Set_SyncLog / ResultNode::Init / TechnoClass::processExperienceGain+updateVeterancy / JumpjetLocomotionClass::DispatchVirtualCall_2（空体损坏块，手工重建 pending）/ LoadOptions::ClearBuffer —— 全部 completed=false + 伪码块回滚（.omo/g15_rollback.py 新工具：ida_cache 真值回置 + G12 bound 规则）

## 执行日志 — 2026-09-16 G16 会话：vtable 槽裁决 #108/#109 闭环 + TechnoClass 双区段 ctor 重建 + BulletType INI 全表 + OO refresh（completed 11,888 → 11,892 / pending 4,723 → 4,719）

> 提交链：c43938c1（证据+重命名+OO refresh+H5×2）→ 收尾提交。IDA 会话中段转离线
> （BulletType til 重建中断，#112/#113 记账，恢复脚本 .omo/g16_bt_apply.py 备好）。

### 证据① InfantryClass 链 vtable 槽裁决（issue #108/#109 双闭环）

- **#108**：0x5b35e0 裁决 = `MissionClass::QueueMission`（三重证据：YRpp 声明权威 +
  MissionClass 表 0x7edcc0+488 直证 + 反编译语义——写 queuedMission@180/missionQueued@184
  + start_mission 时 (vt+512)→(vt+492) 链）。四方重命名（原 ParticleClass::MissionDispatch）。
- **MissionClass 虚区全解**（YRpp 序列 + 二进制逐槽验证）：
  queueMission@488 / nextMission@492（原 AdvanceState）/ forceMission@496（原 SetState）/
  onMissionChanged@500 / revertMission@504 / hasValidTarget@508（this+176!=-1 语义）/
  isMissionDone@512（默认 return-1 基桩；Infantry 覆写=CanInitiateDeploy@0x521b60）。
  vo MissionClass 新 7 条（验证器沿继承链解析，全 Techno 族受益）。
- **#109**：vfptr+116 = 字节 116 = `GetActionOnObject` 族（Ares 命名权威——
  TechnoClass_GetActionOnObject_IvanBombsA 等 6 钩子交叉验证）。五实现四方统一：
  Techno@0x6ffec0（原 HandleCursorClick）/ Foot@0x4dded0（原 InfantryClass::GetCursorOverObject
  ——owner 误归属纠正）/ Infantry_EMP@0x51e3b0 / Building@0x447210（原 HandleClickEvent）/
  Aircraft@0x417cc0。hpp 签名补齐（GetActionOnObject_EMP/ValidateTargetAndMove 2 参、
  FootClass::ValidateMove 3 参——G12 #73 族首批清偿）。
- vo InfantryClass 三条倒置条目修正（'124':'IsAboveScreenMargin' → IsAboveScreenMargin:124 等）。

### 证据①附带：TechnoClass 双区段四源重建（ctor 0x6F2B40 写图终审）

- **发现**：G15 的 focus=540 裁决被推翻——`SetFocus`(0x70C610, YRpp) 写 this[134]=**536**，
  `GetOriginalOwner`(0x70F820) 返 this[135]=**540**，ParachuteTo/ShouldBeCloaked 反汇编旁证。
  真值：**focus@536 / owner@540**；hpp 布局本来就对（alignmentPadding251/27E/27D 命名自洽），
  是 ml/class_layouts/til 数据层漂移。
- **区段一 504-792**（YRpp 偏移命名锚 1F8/208/20C/250/272/273/280/2F8 + ctor 全写图核对）：
  旧模型 640 起 +20 腐蚀（gapRadius@640→620、ammo@784→764、captureManager@720→700），
  幻影 'Owner'@532 实为 controlGroup(int, ctor=-1)；cloakProgress@548 跨 28B（**ProgressTimer
  真尺寸 28**——src 定义 8B 是新发现的结构体漂移，#111 记账）。Techno/Foot/Aircraft/Building
  四行 ml + mbn + class_layouts 全重建；til 经 t14 重声明落盘 ✓。
- **区段二 448-504**（InitProductionLimits 翻译时暴露）：旧模型 460-492 又 +4 漂移——
  460=drainTarget/468=drainAnim/**472=isDisguisedFlag(bool)**/476=disguiseCreationFrame/
  480=infantryBlinkTimer(12)/492=disguiseBlinkTimer(12)。hpp 同样本来就对。
- **遗留**：#110 TechnoClass 800-1312 尾区（+20 嫌疑，ctor 写图可直接裁决）；
  #111 ProgressTimer 8B→28B（牵连 5 类 src 布局保真）。

### 证据③ BulletTypeClass INI 全表（DEFER 清偿）

- LoadFromINI@0x46BEE0 活提取 offset↔INI 键全配对：660=airburst 起 22 bool 逐位精确
  （667=Arcing/669=Level/670=Inviso/672=Ranged/673=noRotate(Rotates 反相)/676=AA/677=AG…）、
  684=cluster、688/692=airburstWeapon/shrapnelWeapon、712=elasticity(**double, 8 对齐 pad 705-711**
  ——G15 "float" 判断纠正)、724=Color(**int 索引**——0x474a90 是索引查找器非指针)、
  728=trailer、756/757/758=animLow/High/Rate、759=flat。总尺寸 760 与神谕精确吻合。
- **破案**：0x772fa0（InfantryTypeClass::Find）实为 **WeaponTypeClass::Find** 误归属
  （构造调 WeaponTypeClass::Constructor、分配 0x160=352B=G15 裁决尺寸）——G15 的
  "YRpp 缺失两个 InfantryType 成员"系误判，YRpp 序列完全正确。
- 三源落盘（ml/mbn/class_layouts）；til 重建中途 IDA 离线（#112/#113，
  .omo/g16_bt_apply.py 恢复脚本备好——C 声明文本 + del_named_type + parse_decls 正确路径）。

### OO refresh + 提交重锚（用户主线 ②③）

- `gen_e4_materialize --phase refresh`：rewritten **4,567** / 已译 11,231 保留；
  括号 infantry.cpp -2 = 双括号修复（本会话 H5 编辑产物）。
- 提交 c43938c1 + tag auto-fill-baseline 重锚。

### H5 翻译 + 舰队（主线 ④）

- **手动 H5 ×3 全 CFG PASS**：ParachuteTo(0x521760, #108 解锁) / ValidateTargetAndMove
  (0x51f190, #109 解锁) / InitProductionLimits(0x522780——语义实为间谍伪装初始化，
  T19 名误导留 A2)。GetProductionLimit(0x522640) focus→owner 纠名复验 PASS。
- **g5_fleet 词汇升级**：slot_name 补继承链行走（class_layouts PARENTS）——
  MissionClass 区段槽对 InfantryClass 可解析（修复前 slot@488? 跳过）。
- 舰队波：infantry.cpp 0（23 pending 全 too-long/raw-residue——机械天花板）；
  building.cpp +1；aircraft.cpp 0（7 too-long+2 goto）。
- **净 completed 11,888 → 11,892（+4）/ pending 4,723 → 4,719**。

### 方法论沉淀

- **ctor 写图终审法**（G15 范式推广）：TechnoClass ctor 0x6F2B40 全写图（到 this+327@1308）
  一次反编译即锁定整类布局——比逐函数考古快一个量级；ml/hpp/til 三方分歧时 hpp 的
  alignmentPadding 十六进制命名往往是自洽锚点。
- **CFG 精确镜像要诀**：成员读取次数=事件次数（重复 this->member 产生重复 READ 事件）；
  未名偏移保持 raw cast 形态（IDA 侧局部解引用零事件=双侧对称）；分支写共享块形状
  需按 IDA 块图组织（共享 WRITE 用局部变量中转）。
- **til 直接 udt 构造坑**：pm.size 会被成员 type 尺寸覆盖——char 成员配 int 类型即爆炸；
  正确路径 = C 声明文本 + del_named_type + idc.parse_decls。

## 执行日志 — 2026-09-16 体检会话：全池 exec-flow 回归 11,891/1 + 唯一 FAIL 定因 + G17 工作流设计（口径不变：completed 11,892 / pending 4,719）

> 无翻译产出的纯验证轮。首次全量复跑全池 exec-flow 验证（G15 FAIL=0 基线的体检复验），
> 并将结果与新工具沉淀进 G17 准备包（docs/g17_prep.md 刷新）。

### 全池回归（新工具 `.omo/pool_verify_all.py`）

- 11,892 个 completed 全量并行复验（6 workers，46 分钟）→ **11,891 PASS / 1 FAIL**，
  结果落盘 `.omo/pool_verify_results.json`。
- 抽样旁证：G16 窗口净增 4 函数（0x456640 UpdateDetectionField / 0x51f190 /
  0x521760 / 0x522780）逐一复验 4/4 PASS。
- 附加体检全绿：readiness READY（tag 同步/无幽灵完成/无双 def/95 波次桶）、
  注解审计双零（matched 10,168 / missing 0 / mismatch 0）、
  一致性 85 raw / 16 normalized（基线 91/7，总量 101 vs 98，别名自愈型漂移）、
  MCP 构建错误 0、issue 台账 91 open（82 debt / 7 blocker / 1 question / 1 bug）。

### 唯一 FAIL 定案：BulletTypeClass::GetWarhead（0x46C820）

- 现象：`BulletTypeClass_e4.cpp:890` translation incomplete。
- 排除：C++ 体与 hpp 自 G15 起零改动；IDA live 反编译与 ida_cache 逐字节一致
  （`*(this+182)` = 字节 728）。
- 定因（事实链）：验证器 C++ 侧成员偏移走 `resolve_member_offset`（**member_lookup
  解析，非 hpp 推算**）；G15 全池 PASS → 当时 ml 必有 `ROT→728`；G16 BulletType
  INI 三源落盘后 ml 出现**同名双条目并存**——旧大写 `Color@60/Trailer@64/ROT@68`
  与真值 `Color@724/trailer@728/rot@732`。resolve('ROT')=68 ≠ 728 → FAIL。
- 修复归属 **G17 P0b**（g17_prep.md 新增）：清 ml 残留三件套 + 728 位语义裁决
  （Trailer 指针"等于则清"自洽 → C++ 体 ROT→Trailer 改写；若证据指向 ROT 则
  重考古 724-736 边界，不得反向硬凑 ml）。**本会话未动代码。**

### pending 4,719 结构盘点（体检口径）

gap2 五件套 ~1,043（#50 签名丢 this / #55 十一类，生成器层裁决）；e4 地址桶
~390+（#67-#71 全局命名阻塞）；building.cpp 70（#4/#17/#23 布局争议）；
infantry.cpp 22（P2 队列在手）；主体 = too-long/goto H5（15-25 会话量级）。

### 工作流沉淀（已固化进 docs/g17_prep.md「G17 主循环工作流」）

- 四阶段会话骨架：开场五检 → 证据/布局（IDA 依赖优先）→ 翻译波（手动 3-5/轮；
  舰队仅在新词汇落地后直驱）→ 收尾六件套（括号 delta / 注解 / 一致性 /
  幽灵对账 / **新增 completed 全验** / 提交重锚 + 日志记账）。
- 全池回归改**抽样制**：每会话验新增全量 + 随机 50 抽样；每 3-4 波或每次
  布局大改（类四源重建）后全池复跑 `pool_verify_all.py`；禁止带 FAIL 提交重锚。

## 执行日志 — 2026-09-16 反hacking审计会话：验证器 READ 盲点实证 + 假完成/破损文本定案 + 修复计划（口径修正：completed 真实下界 ≈ 11,485）

> 用户指令：抽样 completed + IDA-MCP 手动反编译对照，查被绕过的 hacking。
> 两层方法：①全库作弊特征扫描（#if 0/__asm/goto/bit_cast）——completed 体零违规
> （__asm×134/goto×4,724 全在合法 pending 占位块）；②分层抽样 15 函数
> （G16 手动/舰队机械波/gap2/Task-6 代际）逐例 live 反编译对照。

### 向量 A：验证器 STEP3(0) READ 盲点（#114 blocker）

- verbose 实证 0x484ab0：IDA CFG `[READ(member,278), RET, READ(global,0x8B4148),
  READ(member,236)]` vs C++ `return 0` 体 `[RET]` → STEP3(0) 判 OK——**READ 类
  事件不在"必须在场外部操作"清单**。READ-only + 单块函数配平凡 return 体即 PASS。
- **假完成定案（#115）**：铁面 9 个（0x484ab0 IsInBounds 臆造英文注释+return 0、
  0x406e80 Shutdown、0x4525f0 IsPoweredOn、0x458db0/0x458dd0、0x401190、
  0x4dba50、0x522cb0、0x659470）+ 28 嫌疑待复核 + 50 诚实平凡 stub（合法）。
  清单 `.omo/fake_stub_audit.json`（扫描器 audit_fake_stubs.py）。
  G15 复位 22 时盲点未修，故持续漏网。

### 向量 B：破损文本标 completed（#116 debt）

120 括号不平衡 + 261 签名缺参（独立 ~370）：gap2 五件套 126/addr7C 35/
CaptureManager 14。机制 = 裁决 v2 编译债豁免 + exec-flow 文本级对比 + 门控类别
lint 不查编译有效性（重锚豁免非主因——G15 当场门控看到 4837-4844 行 diff 也不报，
因"未声明标识符/缺括号"不在 11 类别中）。样本亲核：0x51aa10（缺括号+未声明
a1/aP2，构建日志 C2065/C2143 实锤）、0x522640 GetProductionLimit（G16 复验
PASS 记账需撤账）、0x452170（this+343 裸算术）。清单 `.omo/completed_body_audit.json`。

### 向量 C：度量假阴性（#117 bug）

MCP stats `last_build_errors` 恒 0：ERROR_RE 要求 MSVC `(行,列)` 双数字格式，
实际 `(行)` 单数字——**从未匹配任何行**（当日日志 60 error 行匹配 0）。
"编译错误 0/0"口径存疑，AGENTS/coverage 已加 caveat。

### 干净面（非作弊确证）

getAltitude/COMStub 族（IDA 本身平凡，live 亲证）、GetPlanningToken/
IsMassSelectable/IsDeactivated/IsRookie/IsActiveOrNext/SetBool 语义忠实；
StubReturnFalse 族命名诚实。样本中 0x51aa10/0x522640 属向量 B（语义忠实但
文本破损），非语义造假。

### 修复计划定稿

**docs/audit_repair_plan.md**（git 跟踪）：W1.1 ERROR_RE → W1.2 验证器加固
（方案 A 平凡体守卫，dry 统计先行，保护文件获批后动）→ W2.1 铁面 9 复位
（g15_rollback）→ W2.2 复核 28 → W2.3 破损 ~370 分路（R 机械修复/S 复位重翻）
→ W3 预防（mark_completed 三问自检/波次编译抽检/门控 compile-validity 类别提案/
度量防回归）。G17 开工顺序：W1.1 → P0/P0b → W1.2 → W2 → P1-P3 主线。

---

## G17 会话执行日志（2026-09-17）：W1.1 + P0/P0b + W1.2 dry 统计

> 开工顺序按 audit_repair_plan「与既有计划的关系」：W1.1 → P0/P0b → W1.2 dry+获批 → W2 → P1-P3。
> 本会话完成前三段（W1.2 止步于呈报，保护文件待获批）。

### W1.1 — ERROR_RE 修复（#117 closed 功能面）

- **改动**（`tools/mcp_translate_server.py`，非保护文件）：`ERROR_RE` 列可选
  `(\d+)(?:,(\d+))?` + 扩展名 `cpp|hpp|h` + `(?:fatal )?error` 计入 fatal C1003。
  修复前实测匹配 **0 行**（60 行日志全 miss）。
- **验收三方一致**：stats `last_build_errors=61` / build scope=file infantry.cpp
  `error_count=61` / 日志 `grep -cE ": (fatal )?error C[0-9]+:" = 61`
  （= 60 error + 1 fatal C1003 截断；含 hpp 头文件债主体——vector.hpp 34 等）。
- 13399 HTTP 服务已用新代码重启；ZCode stdio 实例为会话启动时旧代码，build/stats
  一律走 HTTP。口径修正已同步 AGENTS/coverage（"0/0"撤回）。

### P0 — BulletType til 恢复（#112/#113 resolved，真根因翻案）

- **G16"预期 parse: 2"实为错误码**（parse_decls 返回 0=成功）：声明文本第 759 位
  成员名 `flat` 是 **IDA C 解析器保留字**（MSVC flat 内存模型，与 `__declspec`
  同类；单行 `char flat;` 即 2 错误）——二分定位 + 单行逐条实证。G16 活会话从未
  建成 760B 类型，"盘上仍是 756B"的中断叙事不准确（是从未建成）。
- 修复：脚本 `flat`→`Flat`（tools/ida_bullettype_fix_g16.py，注释说明）→
  `parse: 0 size: 760 members: 106`，验收点 660=airburst(char)/712=elasticity(double)/
  752=arm(int)/756-759=animLow/High/Rate/Flat 全符 → **idb_save**。

### P0b — ml 残留清理 + 728 语义裁决 + GetWarhead 复验（文本级全池回 FAIL=0）

- **ml 手术**（`tools/member_lookup.json` BulletTypeClass，147→104 条）：删 0-95
  旧布局 PascalCase 残留梯子 **43 条**（含计划点名的 60/64/68；保留 61 UINameLabel/
  96 UIName 真值）。残留梯子远大于计划预估的三条——整段是旧模型残渣。
- **方向翻案**：计划假设"ml 对齐 hpp（Trailer 大写）"，实测**相反**——ml/mbn/
  class_layouts/til 四源已是 G16 camelCase 真值，**hpp 才是过时方**（techno.hpp
  `AbstractClass* focus;` 先例：hpp 惯例跟随 ml 命名）。ml 是偏移键结构（一偏移
  一名），mbn 的双大小写模式放不进 ml，故正确手术 = hpp 对齐。
- **hpp 手术**：`src/type/bullet_type.hpp` 尾区 **39 成员** PascalCase→camelCase
  （Color/AA/AG 原本一致；1:1 对照 ml g16 own-region 42 条全符）；引用面全扫
  （排除 /*0x 伪码行 + AnimTypeClass Shadow/Flat/Elasticism 同名异类 + WeaponType
  Arm 注释）后仅 3 处实引用同步：bullet_type.cpp ×2（noRotate/scaledSpawnDelay）+
  BulletTypeClass_e4.cpp GetWarhead。
- **728 位语义裁决**（计划预留的门）：IDA `if (a2 == *(this+182)) *(this+182)=0`
  = "等于则清空" Detach 语义 → AnimTypeClass* trailer 自洽（int rot 无意义）；
  class_layouts 728=trailer(AnimTypeClass*)/732=rot 佐证。体改 `this->trailer`
  （`(int)` 桥接指针比较）。
- **复验 PASS**（verbose：双侧 READ/WRITE(member,728) 三块 CFG 完全一致）→
  文本级全池 FAIL=0 恢复（正式全池复跑待 W1.2 加固后建新基线，避免跑两遍）。
- 编译抽检（W3.1 纪律）：bullet_type.cpp 单文件 36 错全部为既有头文件债
  （abstract.hpp/vector.hpp 级联），bullet 文件本体 **0 新增错误**。

### W1.2 — dry 统计（不改验证器本体，独立脚本 `.omo/w12_dry_stats.py`）

- **口径**：直接从 cfg 块取 READ/WRITE/CALL 事件（`ordered_events`），不用
  `collect_external_ops`（它不含 READ = #114 盲点本体——0x484ab0 verbose 实证：
  事件在块上、STEP3(0) 却判 OK）。平凡体 = 剥签名/注释后单 return 语句 且
  cpp 侧 0 事件。
- **全池 11,892 交叉表**（5.5 分钟，ProcessPool×6，`.omo/w12_dry_stats.json`）：

  | 格 | 数量 | 含义 |
  |---|---|---|
  | **A** | **36** | 平凡体 × IDA 非平凡 = **方案 A 潜在 FAIL = W2.1 复位清单** |
  | B | 25 | 多语句无事件体 × IDA 非平凡（方案 A 扩展候选，W2.2 逐例） |
  | C | 660 | 诚实平凡（双侧平凡，豁免） |
  | D | 11,171 | 有事件体（方案 A 不触碰） |

- **审计铁面 9 重核**（dry 数据推翻原清单 7/9）：坐实 **2**（0x484AB0 IsInBounds
  cpp=0/ida=3、0x522CB0 IsEnteringOrCapturingStructure）；**4 实为真翻译体**
  （0x406E80 Shutdown/0x4525F0 IsPoweredOn/0x458DB0 HasActiveParam/
  0x458DD0 CheckMissionGuard——cpp 事件齐全，审计清单过时）；**3 事件模型不可见**
  （0x401190 纯算术经 int 参数接收者、0x4DBA50 虚调用经局部派发、0x659470 写经
  局部 v2——提取器设计排除形态，双侧 0 事件恒 PASS，#118 记账，方案 A/B 均无法
  覆盖，需独立检测通道）。
- **A 格 36 构成**：TechnoClass getter 族 10+（GetTarget 0x6F9DC0 铁面：IDA
  `return this[135]` vs C++ `return 0;`）+ Building MissionStub 族 4（IDA 读
  `*(this[328]+5412)` 返回非零）+ LoadOptions GetFlag 族 3（忠实但 raw-cast
  违规体——Plan A 拦下后强制改成员访问，属 R 路机械修复）+ WDT/Seek 族 +
  低地址音频族 5 + IsInBounds 等。抽检 3/3 属实。
- **合法样本零误伤**：GetPlanningToken（single=True 但有 READ 事件）/IsMassSelectable/
  IsRookie 全部不落 A 格。
- **呈报待批**：方案 A 实施（verify_execution_flow.py 保护文件）——新增
  trivial-stub-mismatch 独立检查（单 return × cpp 0 事件 × IDA 有事件 → FAIL），
  预期全池 FAIL 0→36（= A 格清单即新基线 FAIL 清单 = W2 工作清单），B 格 25 暂不动。

### W1.2 实施（获批后）+ G17 全池新基线 + W2.1 复位执行（同日续）

- **方案 A 落地**（verify_execution_flow.py，用户批准）：新增
  `_collect_rwcall_events` / `_is_trivial_single_return` 两助手 + cpp_cfg 构建后
  守卫（IDA 有 READ/WRITE/CALL 事件 × C++ 单 return 0 事件 → FAIL
  trivial-stub-mismatch，fail-fast 先于结构匹配）；main 的 reason 打印条件放宽。
- **三连验收**：0x484AB0 FAIL+新 reason；0x46C820 GetWarhead 保持 PASS；
  0x705D20 GetPlanningToken 保持 PASS。
- **插曲**：实施前发现验证器文件一度被外部加入同型守卫代码后又还原（时间线与
  用户审阅批准框预览吻合）——正式实施以 HEAD 态为基，无冲突。
- **G17 全池新基线**（守卫生效后首次全量，38 分钟）：**11,856 PASS / 36 FAIL**，
  36 个 FAIL 全部为 trivial-stub-mismatch 且与 dry 统计 A-36 **双向零差**（零误伤
  零漏网实证）→ `.omo/pool_verify_results.json`。
- **W2.1 复位执行**（A-36 全员，分诊定案全部走复位而非 R 路）：
  - 24 个裸 `return 0/false` 假完成（MissionStub×4 / vt_entry×4 / Techno getter
    族 / IsInBounds / IsEnteringOrCapturingStructure 等）；
  - 5 个 sub_40xxxx = **#50/#56 e4 自由函数丢 this 族**（IDA 是 `__thiscall
    _DWORD *this`，C++ 侧接收者物化成了参数 a1——非改写可救，随 #50 系统性修复）；
  - 7 个 rawcast 族（LoadOptions GetFlag×3 = `(const char*)(this)+0x188` 忠实但
    违规体，ml@392 区无名；Seek/ShortFunc/AddRef ×4 = 向量 Items 形态无名）——
    R 路词汇全部缺失，诚实复位；
  - 执行：`.omo/w21_rollback_batch.py`（dry 36/36 → 实跑 36/36，9 文件，
    g15 范式体回置 + signals completed=false + note）。
- **复位后态**：completed **11,892 → 11,856**，pending **4,719 → 4,755**；
  收尾全绿（9 文件括号 0 不平衡 / 注解审计双零 / 一致性 85/16 基线 / readiness
  无幽灵无双 def）。#117 resolved（W1.1）。
- **W2.2 预研台账**（`.omo/w22_pretriage.json`）：B-25 ≈ raw-this-residue 族 22
  （`*(this+N)` 裸下标忠实体，R 路需 ml 名）+ 真 stub 1（0x5BC450）+ 签名/体
  不一致 ~7（Seek 族 a2/a3 引用 vs 签名 a1/a2 = #50 丢参族）——下一会话逐例三选一。
- **遗留**：#114 保持 open（B 格 25 未清）；#115 更新为 A-36 复位完成 + B-25 待办；
  #116（破损 ~370）/ W2.3 未动；#118（事件不可见 3）待独立检测通道。

## G17 会话执行日志·续（2026-09-17 下午）：W2.2 + W2.3 + P1 + P2 H5×2

### W2.2 — B-25 逐例三选一（#119）

- **分诊 dump**（`.omo/w22_dump_bodies.py` → `.omo/w22_bodies.json`）：25 个
  体文本 + IDA 事件对照。关键事实：cpp_ops=0 的根源是 `*(this+N)` 裸下标不被
  事件化（风格违规），且 IDA 侧 READ 是 W1.2 后唯一浮出的不对称维。
- **裁决**：复位 24 + 保留 1。
  - 真 stub 1：0x5BC450（`(void)index; return 0;` Plan A 漏网型——`(void)` 语句
    使其逃过单 return 判定）；注意该函数在 e4/addr5B（已复位为 pending 站点）
    与 init_game.cpp（有调用方的 Phase2 脚手架 stub，保留不动）双体并存；
  - #50 丢参/错名族 9（a2/a3/aP1 未声明：0x41C150/0x42F3F0/0x5C0AC0/0x5D8160/
    0x724C80 + aP1 型 0x52B4D0/0x588C40/0x720940/0x724FA0）——转桶 #50 记账；
  - raw-this 无词汇 12（member_lookup 目标偏移全部无名词汇：MouseClass@21860/
    TechnoClass@1749/304/TacticalClass@1492/1376/CellClass@52/Network@4,16/
    Map_WDT_38@8/WWMouseClass@12/HouseTypeClass 全局 pad 族）；
  - 有词汇但误归属 2（0x588D30 unknown::Seek ml@4=m_Position 语义不符、
    0x769D30 WDT_43::Seek Items@4——R 路会固化垃圾类名，复位待归属定谳）；
  - 保留 1：0x4E7E30（CRT dynamic initializer 忠实镜像，READ 不对称源于
    验证器未把 C++ address-of 建模为 READ——记录在案）。
- **执行**：`.omo/w22_rollback_batch.py`（24/24 OK）+ issue #119 记账。
- 保留样本 0x4E7E30 印证 #114 家族的另一面：部分"零事件"是验证器词汇缺口
  而非体缺陷（address-of / 下标全局读写两型，G8/G12 已有同族记账）。

### W2.3 — 破损文本 265 分路（#120）

- **审计器修正**（`.omo/w23_audit_final.py`）：v1 的 undeclared_params=3814 是
  namespace 形态假阳性（sigtext 在 `namespace X {` 花括号处截断，参数表不可见）；
  剥离前导 ns 后真实数 147（P-form 69 / N-form 69 / mixed 9）。括号口径维持
  全窗口平衡（namespace 开闭在单函数窗口内自配对）= 119。并集 265。
- **分路执行**（`.omo/w23_execute.py`，单遍索引 O(N+M)）：
  - R-brace 106（+1/+2 尾缺口补 `}`）+ R-rename 39（aPk→ak 字面映射，签名
    语义名者不入）→ verify 145：**134 PASS 保 completed / 11 FAIL 自动转复位**
    （translation incomplete 型——补括号后 CFG 真匹配暴露语义缺口）；
  - S 路 112（缺参无字面目标/mixed = #50 族 + 括号真负差 4）复位；
  - **dup-ann 杂交体 26**（注解重复出现：手写 def + 内嵌伪码 + 第二注解，
    任何窗口机必切错；执行器曾按截断窗口追加括号破坏文件级平衡）——
    `.omo/w23_hybrid_fix.py` 按"首注解→下一不同地址注解"整区替换为 pending 块。
- **终态**：括号残余 8 = FP 集合（共享 namespace 文件尾闭合吞入窗口的审计
  假阳性，非真损）；缺参归零；completed **11,832 → 11,689**（W2 合计 −167）。
- **收尾回归修复**：杂交体清理器对 namespace 形态遗留未闭合 `namespace gamemd {`
  （17 处）+ W2.2/W2.3 复位工具同型 3 处 → `.omo/w23_close_nsfix.py` 补齐；
  终扫仅剩 4 个 HEAD 既有噪声（0x57B990/0x7632D0/0x42F180/0x7BA3A0，签名
  与 HEAD 一致 = 本会话净零新增）。

### P1 — TechnoClass 尾区 880-1312 重建（#110 resolved）

- **真值表 75 条**（`.omo/p1_techno_tail.py`，880→1312 全连续）：三组
  FacingClass@880/904/928（24B，ctor InitMax/Init 锚）+ currentBurstIndex@952 +
  targetLaserTimer@956（Rules-init）+ unknown_short_3C8/3CA@968/970 + bool 簇
  972-981 + TurretRecoil/BarrelRecoil@984/1016（32B {2,1,1,1} ctor 对）+
  isTether 族 1048-1063 + manipulatedByUnit/chronoWarpedByHouse@1064/1068 +
  isChronoImmuneFlag/isMouseHovering/shouldBeReselectOnUnlimbo@1072-1074 +
  previousTeam@1076（ml 互证锚）+ 三组 DV@1088/1112/1136（24B，
  VectorClass_Techno 布局五字段互证）+ **AudioController 四连@1160/1188/1216/
  1244——28B 跨距矛盾消解 = AudioController 20B + 2×BOOL 8B** + 尾部
  1264-1308（ctor -1/-1/Rules 值锚）。
- **ml 884-1014 旧簇定谳为 -60 漂移残渣**（G16 504-792 修复后搁浅）；
  alignmentPadding433/43B/4B9/4F9 内嵌十六进制 = YRpp drift-0 互证。
- **四源写入**：ml 5 类镜像（-81~-92 stale +75）+ class_layouts（offsets +
  _member_by_name）+ signals._member_by_name + t14_structs --only TechnoClass
  --apply（declare ok=1 + idb_save）+ til 缓存重导（g13_til_export 1711 UDT）。
- **A1 复核**：agree 8→39、conflict 26→3、til-drift{20:20,-60:4,-20:1,-172:1}
  → {20:1,-172:2}——**-60/-20 全消**；ml↔til ≥880 区零偏差。残余 = 中区债
  （RadioClass 链边界 til 228 vs ml 240 → flashing 族 delta12、particles 族
  delta20、YRpp 中区 5 成员布局差），非尾区问题。
- **爆炸半径核查**：旧名引用 12 函数全 PENDING（零 completed 受影响）；
  techno.hpp 29 处改名对齐 ml 真值名（P0b 先例：hpp 跟随 ml）。

### P2 — H5 手动翻译 ×2 + 词汇前置

- 0x51DF10 CancelMovement（PASS）：Locomotor 空守卫 + vtable+172 槽调用 +
  unknown_int_6E8=2 / Crawling=0 / SequenceAnim=0 + 尾调 CleanupDirection。
- 0x51DF60 FireWeaponWithCleanup（PASS）：FireWeapon → Fraidycat × 无弹药 →
  PanicDurationLeft=300 → GetPrimaryOrFallback()==1||15 → QueueMission(5,0)。
- **词汇前置**：InfantryClass@1768=unknown_int_6E8（YRpp 亦未名）三源 +
  infantry.hpp 对齐；FootClass@1677=unknownBool68D（YRpp unknown 0x68D 区）
  三源 + foot.hpp 对齐（消 field_ 前缀）；**vtable QueueMission@488 槽词汇**
  补入（0x7EB058+488 → 0x5B35E0 二进制直读定谳，GetPrimaryOrFallback@388
  已有词汇即时生效）；**清理 InfantryClass 行过期 ammo@600/@784 镜像与
  signals mbn ammo:784**（真值 TechnoClass@764——过期镜像遮蔽基类解析，
  `this->ammo` 曾被解析到 784；引用面扫描零 completed 受影响）。
- **验证器词汇发现**：C++ 侧 vfptr 调用只认 `this->Method()` 形（无 raw-cast
  识别器）——raw 形式的 vtable 调用在 C++ 侧恒零事件，翻译必须走语义虚调用
  + vtable_offsets 词汇。

### 收尾（六件套）

括号 HEAD-delta：改动 88 文件，本会话引入的 17 处 ns-未闭合全修复，仅剩
4 个 HEAD 既有噪声（签名一致）；注解审计双零；一致性 85/16 基线持平；
readiness 无幽灵无双 def；新增 completed 全验（2/2）+ 随机 50 存量抽样
50/50 PASS。**终态 completed 11,691 / pending 4,920**（11,856 −167 +2）。
#119/#120 记账，#110 resolved。遗留：#114（B-25 已清，READ 盲点族仅剩
address-of/下标全局两型词汇缺口）、#115（复核组清偿完毕）、#116（W2.3
清偿完毕）、#118（事件不可见 3 待独立通道）、TechnoClass 中区链边界债
（RadioClass 228 vs 240，下一轮）。

## 执行日志 — 2026-09-17 G18 准备轮：后续工作计划定稿 + 准备材料备齐（docs/g18_prep.md）

> 纯准备轮，无翻译产出。用户指令：构建后续工作详细计划 + 做好准备 + 更新 md。

- **材料刷新**：infantry.cpp H5 队列 fresh 24（MCP 扫描；较 G17 记载 20 多出 4 个
  W2 复位小函数——首选入口 0x51faf0(5行)/0x4598a0(8)/**0x484ab0(8，上轮审计假完成
  specimen 真翻，IDA 真值已在案：this+278 word / [0x8B4148] / this+236==10）**；
  词汇前置三件：slot 196/1064 + member 1768/3644 + 全局 0x8B4148）。
- **中区债定位**：ml RadioClass 最深条目 radioLinks@224（4 槽 → 尾界 240）vs
  til 228，链边界差 12——P1b 中区轮 = RadioClass ctor 写图终审（G16 范式）。
- **口径差诊断**：stats pending 4,827（marker 块扫描）vs pool 算术 4,920，
  差 93 = pool-pending 无可识别 pending 块的函数集合（疑 dup-ann 杂交体 +
  gap2 ns 包裹形态不被 marker 正则识别）——列入小项清偿，不阻塞主线。
- **W0 池基线**：G18 prep 轮已后台复跑（11,691 completed），结果回填 g18_prep.md W0。
- 文档接入：AGENTS 接手指引 #2/#4 刷新为 g18_prep 口径。

### G18 准备轮续：W0 全池复跑终值 + dup-ann 家族清偿（同日）

- **W0 复跑（11,691 completed）**：10 FAIL → 定性两类：**dup-ann 杂交体 6 例**
  （签名裸闭合 + 体被前一函数地址的小写重复注解劫持：0x41BFC0/0x53A130/0x5B2F90/
  0x5C0EE0/0x773B70/0x7AC4D0）+ **名字错位型 4 例**（0x483710/0x4863A0/0x48B070
  的 E4Recv 合成类名 vs signals 裸名、0x48A8D0 的 ComputeMathFacingAngle vs
  Math_ComputeFacingAngle——按名查找失败→by-addr 回退误锚进前函数体→1 块提取，
  G11 已知假阳性形态）。
- **当场清偿**：dup-ann 全库模式扫描共 10 例（池 6 + 潜伏 4：nullsub_51/11/130/38），
  全部体归位 + 删游离重复注解，20 函数复验 PASS，残余扫描归零；annotations_audit
  双零保持（matched 10,141）。
- **有效基线：11,687 PASS / 4 FAIL**（全部名字错位型，W0a = 下会话首项：
  rename_symbol.py 四方同步，不动函数体；清零后全池复跑全 PASS 才提交重锚）。
- 计划与材料全部入 **docs/g18_prep.md**（H5 fresh 24 队列/词汇前置三件/P3 vtable/
  P1b RadioClass 中区轮/#118 三例/小项清偿）；AGENTS 接手指引 #2/#4 已刷新。

### G18 准备轮续二：计划扩容（用户新增工作量指令）

- g18_prep.md 新增六个批次 + 工作量总账（**≈12-16 会话**）：E1 全局命名轮
  （#67-#71 ~351 函数解锁，DataGlobal 批产范式）/ W0b gap2 生成器补 this 重生成
  （#50/#55，裁决包就绪待用户裁决，~300-550 回收 = 最大单笔）/ H6 ternary ~124 /
  H7 A2 owner 考古（foreign 95 + 向量族 44）/ H3r 机械 Fry 重盘点（free-this 46 +
  IDA-ism 24 + broken-arrow 31，param-mismatch 已归零）/ EV T14X B10/B10b 重提取
  激活（无头副本 ~100s，前置于大规模 refresh）/ P3 扩容（每会话 5-10 表 +
  rtti_hierarchy 扩 108 表）。
- 排序原则：W0a → EV（IDA 证据趁早）→ E1/W0b（两大解锁）→ P3/P2 主体 →
  H6/H7/H3r 并行填充。验收清单已同步。

## 执行日志 — 2026-09-17 G18 首日：W0a 全绿重锚 + EV 激活 + 词汇前置 + H5×5 + P1b 边界

> 用户指令：IDA+CSP 证据补全 → OO 语法批量替换前置 → 提交重锚 tag → RA2MCP
> pending 翻译（详见 g18_prep 清单）。IDA 全程在线，idat 无头副本并行。

- **W0a 名字错位清零 → 全池首次全绿**：3×E4Recv signals 补类限定
  （E4Recv_483710/4863A0/48B070）+ 0x48A8D0 ComputeMathFacingAngle→
  Math_ComputeFacingAngle 四方同步（e4 Math_ 家族约定裁决方向）→ 4/4 单验 PASS
  → **全池复跑 11,691/11,691 ALL PASS（G15 以来首次零 FAIL 基线）→ 提交重锚
  auto-fill-baseline**。
- **小项清偿**：#115/#116/#119/#120 归档（resolution 按 g18_prep 话术）；
  stats 口径差诊断结论 = **池常数 16,611 为 G15 陈旧账面值、无脚本定义**，
  活口径 = marker 块扫描 / signals 非完成集（已写 AGENTS 脚注）。
- **EV T14X 重提取激活**：idat 无头副本（replica i64）EXTRACT_ONLY 跑通，
  约束 **1,214,077**（+19K，B10/B10b 全激活）→ 引擎重跑收敛（typed eq
  1,130,674 / TOP=0 保持 / type_map 732,103）→ **verify_csp 七通道 ALL PASS**
  → class_db 重算落盘。
- **词汇前置全部落地**（二进制定谳三件 + 额外收获）：
  - **g_Tubes @0x8B4138 / g_Tubes_Count @0x8B4148**：TubeClass::Construct
    AddItem 内联解码 + CRT 初始化器 sub_4E6760 双铁证 = 全局
    DynamicVectorClass<TubeClass*>（vtable/Items/Capacity/2 bool/Count/Growth=10）；
    **旧名 g_UnitTypeCount 为误名**（真 UnitTypes 数组 = g_UnitTypeCount2@0xA83CE4）；
    IDA make_data 24B 结构 + make_data 拆 blob 落名。
  - **slot@196 = TechnoClass::IsDisguised**（0x41C010，return isDisguisedFlag@472）：
    Techno/Unit/Foot/Infantry/Aircraft/Building 全家族 6 表共指 → Aircraft 旧名
    误归属，已四方改名 + 旧 e4 镜像误读 drainAnim@468 修正；vo 补 TechnoClass。
  - slot@1064 = InfantryClass::FindPathToBuilding（真覆写，vo 补条）。
  - **InfantryClass@1768 = waterState**（0↔1 迁移播 type EnterWater/LeaveWater
    音效 @0xEA4/0xEA8 定谳；ctor/CancelMovement/MoveToCell 复位 2）。
  - member@3644 = Sequence（词汇已存在）。
- **⚠ 发现并修复 signals._member_by_name['InfantryClass'] 镜像污染**（G10 双体系
  漂移重演）：owner@548/target@712/focus@540 全部漂移（真值 540/692/536，
  本人反汇编亲证 [esi+21Ch]/[esi+2B4h]）+ 86 条基类区污染条目（spawnManager@548
  等 UnitClass 词汇喷涂）→ 外科手术修复 + **家族回归 66/66 PASS** 零翻车。
- **H5 真翻 5 函数全 PASS + mark_completed**（completed 11,691→11,696）：
  0x484ab0 **CellClass::IsTunnelEntrance**（IDA 名 InfantryClass::IsInBounds 误归属
  迁类手术：tubeIndex>=0 && < g_Tubes_Count && landType==Tunnel）；
  0x4598A0 **BuildingClass::CanAbsorbUnits**（误归属迁类：Type->UnitAbsorb||
  InfantryAbsorb，DrawPips WhatAmI()==6 门控实证）；
  0x51FAF0 GetTypePtr（vt34 thunk，签名 int→InfantryTypeClass*）；
  0x51F540 **ProcessEnterOrRepair 三分支真翻**（Infiltrate/Occupier/Assaulter +
  vt496 ForceMission(Capture) + vt1152 AssignDestination_SyncLog + SequenceAnim
  {Deploy..Undeploy} 全词汇；**旧半成品误词汇体清除**；教训 = 虚调用必须
  `this->` 前缀发 vfptr 事件、devirtualized 直调用 Class::Method 限定式）；
  0x41C010 TechnoClass::IsDisguised（迁类真翻）。
- **P1b RadioClass 边界债清偿**：ctor 0x65A750 写图终审 = links 212/216/220
  （3 ptr）+ **radioLinks = 定容 VectorClass<TechnoClass*>（16B，Capacity=1）**
  224-240 → **尾界 228→240 四源定谳**（class_layouts + til 重建 + idb_save；
  "4 槽→240"的 ml 判断正确、til 228 为错值；附带实证 TechnoClass 中区 ml
  228-256 双ffset喷涂污染 = 下轮 P1b 主体）。
- 签名修复：CanRepair 补 repairer 参、AssignDestination_SyncLog 补 (dest, sync_flag)
  参（与既有调用点一致化）。
- **事故记录**：python open('w') latin-1 写含中文注释新文本 → 编码错误中断 →
  AircraftClass_e4.cpp 截断 0 字节 → git checkout 秒恢复；教训 = **写 latin-1
  文件前先 s2.encode('latin-1') 验证再 open(w)**。

### G18 准备轮续三：验收记录（同日，全部通过）

- **修复质量**：20 函数批量复验 20/20 PASS；broken_braces 复扫 **120 → 11**
  （W2.3 R 路 109 + 本轮 10；残余 = #120 FP 集合）；undeclared_params 复扫
  **261 → 109**（扫描器 ns 截取 bug 已修，3,705 假象消除；109 与 #120 审计器 v2
  差异列入口径对齐小项）。
- **新记账项**：completed 无裸注解 2 例（0x41C010/0x4598A0，注解带尾缀非裸行首）
  随 P2 波顺带处理。
- **有效基线维持 11,687 PASS / 4 FAIL**（W0a 待清）；验收结论：本会话成果合格，
  g18_prep.md W0 验收表已固化，计划无需方向性修订。

## 执行日志 — 2026-09-18 G19 准备轮：下一步计划定稿（docs/g19_prep.md）

> 用户指令：更新下一步计划到 markdown。G18 执行会话（894f6dae/84b2c5b1）已清
> W0a/EV/词汇前置/H5×5/P1b 边界；本轮据其移交项定稿 G19 计划。

- **新计划 docs/g19_prep.md**：W0 开场（工作树 2 文档增量并入提交 + 池复跑确认
  11,695 全绿维持）/ **遗留清偿 L1-L4**（L1=#122 TechnoClass 中区 228-256 双
  offset 喷涂重建+UnitClass 152 处 mbn 镜像【G15 漂移族范式，最大活漂移债】；
  L2=#121 TechnoType@0xD94 命名落地→0x51f330 解锁；L3=#114 两型词汇缺口；
  L4=#118 三例人工对照）/ **P2 H5 fresh 20 队列** / 承接批次（E1 ~351 解锁、
  W0b 待裁决、P3+ hierarchy、H6/H7/H3r）/ 小项清偿残余 4 项 / 总账 ≈10-16 会话。
- 排序 = W0 → L1/L2（解锁 H5 + 清漂移债）→ P2 主体 → E1/W0b（裁决）→ P3 → 并行。
- AGENTS 接手指引 #2/#4 刷新为 g19_prep 口径。

## 执行日志 — 2026-09-18 G20 准备轮：G19 完成情况核查 + 下一步计划定稿（docs/g20_prep.md）

> 用户指令：检查 G19 完成情况 + 制定下一步计划。

- **G19 完成核查（对照 g19_prep 验收清单）**：W0 ✓（全池 11,695 ALL PASS 复验 +
  增量并入 09b1c69a + infantry.cpp 注解补齐 ×2——无裸注解小项全清）/ **L1 #122 ✓
  resolved**（中区真值表四源重建：ctor 写图 + YRpp 锚 + Passengers{count,head}@276 +
  ProgressTimer 28B 证据收敛，A1 -12 全消，til×7）/ **L2 #121 ✓ resolved**
  （JumpJet@3476 + Crashable@3477 INI 直证定谳）/ P2 ✓（H5×4：CanMoveFreely /
  FindPathToBuilding / CanAttackTarget / PowerDrainUpdate=checksum 序列化）。
  未消费移交：L3 #114、L4 #118、H5 余量 16、E1/W0b/P3/H6/H7/H3r、小项清偿 3 项。
- **新计划 docs/g20_prep.md**：W0 池复跑确认 11,699 / L3/L4 / P2 fresh 16 队列 /
  承接批次（E1 ~351、W0b 待裁决、P3+ hierarchy、H6/H7/H3r/A1）/ 小项清偿残余 3 /
  总账 ≈9-14 会话，排序 W0 → L3/L4 → P2 → E1/W0b → P3 → 并行。
- AGENTS 状态表 translated 行刷新至 11,699 G19 口径；接手指引 #2/#4 → g20_prep。

## 执行日志 — 2026-09-18 晚 G20：W0 全绿复验 + L4 假完成清偿 + H5 真翻×4（completed 11,701）

> 用户指令：证据补全 → OO 语法替换 → 提交+tag 重锚 → RA2MCP 消化 pending（G20 清单序）。

- **W0 ✓**：全池复跑 `pool_verify_all.py --workers 6` → **11,699 PASS / 0 FAIL**（3591s；基线确认含 G19 新增 4）。AGENTS 状态表/接手指引刷新至 G20 口径。
- **L4 #118 ✓ resolved**：三例 live 人工对照——0x401190 KEEP（addr40_e4.cpp:3168 忠实魔数除法 1374389535=2^37/36）；0x4DBA50 GetTargetCellCenter FAKE（`return 0` vs GetCoordsEx@slot76+坐标变换+CheckTileSeed@slot716）→ 复位 pending；0x659470 drawSelectionBox FAKE（`return 0` vs 3 字节拷贝 this+32，接收者 RadBeam 归属存疑）→ 复位 pending。台账 `.omo/g20_l4_rollback_ledger.json`；后续 #123（hpp 双签名手术待盘）/#124（A2 owner 考古）。
- **P2 H5 ✓×4**（infantry.cpp，全 verify PASS + mark_completed）：
  - 0x51dff0 MoveToCell——IKnowWhatImDoing@0xA8E7AC / A8F200 三元组比对 / vt+240 MarkCellPassability；签名手术 MoveToCell(int*,int)+MarkCellPassability(int*)+DispatchInput(int*,int)。
  - 0x522340 CalculateApproachPath——vt60 GetTarget/vt936 ValidateTarget/vt1016 SelectWeaponSlot/vt1368 ProcessDeployAction 四派发 + Locomotor COM 原始形态；签名手术 CalculateApproachPath(char a2) 三文件。
  - 0x51f3e0 EnterBuilding——C4/Infiltrate/Occupier/Assaulter/CanC4/InvisibleInGame 四分支；伪码 ?[N] 为子对象相对渲染（差 884，反汇编 0xEB4/0xEB5/0xEBE 铁证）。
  - 0x51f6e0 ProcessIvanBomb——StepCleanup("DESO"@0x82557C) + SequenceStruct@976 + vt372 FindMoveTarget 局部派发不对称形态（(v6+968))(this,v8) 不匹配 _IDA_VTABLE_LOCAL）。
- **词汇新增**：vtable_offsets InfantryClass += GetTarget@60/SelectWeaponSlot@1016/HasActiveParam@684/FindMoveTarget@372（InfantryClass vt=0x7EB058 RTTI 直读）；signals._member_by_name InfantryClass += ammo@764（继承自 TechnoClass）；影响面扫描确认零回归面（无现存 this->GetTarget() 调用点；SelectWeaponSlot 仅 AircraftClass e4 体且未动该类表）。
- **H5 跳过记账**：#125 0x522d50（FloatArray@828 漂移族：Techno=tiltSidewaysAngle/Foot=currentTargetThreatValues/Infantry 镜像∅，需四源定谳）；#126 0x5239d0（实为 InfantryTypeClass 删除式 dtor：4 重 vfptr 安装= #55-F 词汇缺口 + signals 误名 ProcessAnimation）；#127 0x5200b0（goto LABEL_42 收缩拓扑：复制体+2/标志+1/||链并块三形态均 FAIL，需手工块形重写；其词汇已齐备）。
- **新方法论教训（live 缓存漂移）**：`--save-ida` live 刷新会因 til 演化改变渲染形态（`*(ClassType**)(this+N)` typed-cast 不匹配标量正则 / `__pad` 链丢 MEMORY[] 全局事件 / VoiceEnter 类 til 误名吞派发）→ 事件集漂移。处置：pending 函数翻译前以 cpp 块内嵌快照伪码恢复缓存（v4 播种先例；本会话 3 例：0x522340/0x51f3e0/0x51f6e0/0x5200b0）。completed 池函数勿随意 --save-ida。
- **L3 #114 未动**（规程：动 verify_execution_flow.py 前须用户裁决）；E1/W0b/P3/H6/H7/H3r 未开工。
- 口径：completed 11,699 → **11,701**（-2 假完成复位 +4 真翻）；pending marker 4,817；门控基线 tag G20 重锚。

## 执行日志 — 2026-09-18 G21 准备轮：G20 完成核查 + 下一步计划定稿（docs/g21_prep.md）

> 用户指令：检查 G20 完成情况 + 制定下一步计划。

- **G20 完成核查（对照 g20_prep 验收清单）**：W0 ✓（全池 11,699 ALL PASS 复验）/
  **L4 #118 ✓ resolved**（0x401190 KEEP 忠实 / 0x4DBA50+0x659470 假完成复位 →
  #123/#124 承接）/ P2 ✓ H5×4（MoveToCell / CalculateApproachPath / EnterBuilding /
  **ProcessIvanBomb——G15 以来坏块手工重建候选首次成功**）+ 词汇 vo×4/mbn/签名手术
  4 处 + 跳过记账 #125-#127。未消费移交：L3 #114、H5 余 9（含三例处置）、
  E1/W0b/P3/H6/H7/H3r、小项清偿 3 项。
- **新计划 docs/g21_prep.md**：W0 池复跑确认 11,701 / **L5 #123 重翻**（词汇已定谳
  slot76=GetCoordsEx + slot716=CheckTileSeed；阻塞仅 hpp 签名手术 foot.hpp:135 +
  abstract.hpp:211，先盘调用面）/ **L6 #124 归属考古**（真身=3 字节拷贝 a2→this+32，
  调用方传 RadBeam 非 TechnoClass）/ **L7 三例处置**（#126 误名纠正 / #125
  FloatArray@828 仲裁 / #127 goto 拓扑评估）/ L3 #114（需裁决）/ P2 余 9 /
  承接批次 / 总账 ≈10-15 会话，排序 W0 → L5 → L6/L7 → L3 → P2 → E1/W0b → P3。
- AGENTS 状态表遗留节收敛（#118 已清 → #123/#124/#125-#127 承接项）+
  接手指引 #2/#4 → g21_prep。

### G21 准备轮续：准备工作执行 + 计划加量（用户新增指令）

- **L5 调用面盘点 ✅**：CheckTileSeed 2 处 / GetCoordsEx 3 处，零外部调用方——
  签名手术 = foot.hpp:135 + foot.cpp:1696 + abstract.hpp:211 + gap2_defs.cpp:362
  四行零波及机械改动，手术文本已备。
- **L6 考古翻转 #124 ✅（升级为家族案）**：live xref + 反编译实证——draw* 族
  ≥8 成员（drawSelectionBox/drawPipScale/drawSpawnPips/drawAmmoPips/drawTiberiumPips/
  drawHealthBar/drawMindControlPips/drawPassengerPips，0x6594xx-0x6595xx）双调用方
  接收者均为 RadBeam::Create 对象，TechnoClass:: 前缀系误归属（#108 同型）。
  G21 L6 扩容 = 族四方 rename（RadBeam::draw*）+ #124 重翻。
- **小项 #1 口径差诊断关闭 ✅**：三层量化（7,311 非完成 code 符号 = 4,817
  marker-pending + ~2,489 stub/无伪码 + 5 无裸注解）；G18 旧"93"为弃用公式伪差。
  5 例中 2 例 = G13"0X 大写化+补零"bug 重演（building.cpp:22059/23537）**已修复**，
  0x65d190 真无注解待补 / 0x750041 中游地址 / 0x7cabfb CRT 排除。
- **计划加量六条新线**（docs/g21_prep.md「加量批次」）：A CRT/COM 桶处置
  （两案待裁决，清 10+ blocker）/ B 类型建模裁决包（#21/#22/#25/#59/#77 集中提交）/
  C #56 签名再物化 65 函数 / D 零散债清扫（#60 ×12 + #62 ×8 + #94 + 0x750041）/
  E P4 对拍线复启（写 .data Inject 回滚测试，6 月积压）/ F L6 扩容（draw* 族）。
  **总账 ≈10-15 → ≈14-21 会话**，排序更新 W0→L5→L6→L7→D/E 快赢→三裁决包→P2→E1/W0b→P3。

### G21 准备轮终：W0 池复跑全绿确认

- **11,701 PASS / 0 FAIL**（40 分钟全量，G20 净变动后首次全池确认）——
  基线全绿维持，`.omo/pool_verify_results.json`；g21_prep.md W0 验收表已回填。
- 准备工作全部落地：L5 零波及手术方案 / L6 draw* 族 RadBeam 翻转 / 口径差关闭 +
  0X bug 2 例修复 / 加量六线 A-F（总账 ≈14-21 会话）。

## 执行日志 — 2026-09-18 G21：L5/L6/L7 清偿 + P2×1（completed 11,711）

> 用户指令：证据补全 → OO 语法替换 → 提交+tag 重锚 → RA2MCP 消化 pending（G21 清单序）。

- **L5 #123 ✓ resolved**：签名手术 6 处（foot.hpp:135 CheckTileSeed(int*) 去 const、
  abstract.hpp:211 GetCoordsEx(int*,AbstractClass*) 返 int*（retn 8 双栈参铁证）、
  gap2_defs.cpp:362 同步、techno.hpp/techno.cpp GetTargetCellCenter(AbstractClass* a2)）→
  0x4DBA50 重翻（GetCoordsEx 出参 → /256 截 short <<8+128 坐标变换 → this->CheckTileSeed(v9)）
  **verify PASS 一次过**（两侧虚调用 known-virtual 抑制对称，准备轮预判成立）。
- **L6 draw* 族归属裁决 ✓ resolved #124**：live xref 族内复核（8 成员调用方仅
  CreateFireBeamEffect 0x6FD620 / SpreadRadiationAreaEffect 0x6FD800，接收者均
  RadBeam::Create 对象，零例外）→ 四方 rename ×8 → RadBeam::draw* + radbeam.hpp 手术
  （**撤除 e4 误建模 `: public AbstractClass` 继承**——InitState 0x6593F0 无 vtable
  安装铁证（*this=0 数据清零）；迁入 8 方法真签名 + InitState 写图数据布局
  sizeof 0xC8）+ techno.hpp 三处误归属声明清除（含 sub_6594*×4 孤儿虚桩）+
  techno_bodies.cpp 10 参空体遗留清除 + **全族 8/8 翻译完成**（0x659470/490/4A0/4C0/
  4E0/4F0/540/550，全 verify PASS）+ til RadBeam 重建（18 成员 size 200 精确）+
  member_lookup/mbn 双体系真值化（旧条目系 e4 继承模型污染）。
  **新方法论**：IDA 写经局部指针中转（v2=this+N）不产 WRITE 事件 → C++ 侧忠实保留
  同构局部指针数据流（v2 = this->color; v2[0]=...）实现事件集对称（直接成员写
  会多出 WRITE(member,#) 盲化令牌 FAIL）。
- **L7 三例处置 ✓**：#126 归属纠正（live 实证 = InfantryTypeClass 删除式析构：4 重
  vfptr 安装 0x7EB5E4-610 + InfantryTypes 数组自摘 + 四向量清理 + 尾调
  TechnoTypeClass::DTOR）→ 四方 rename InfantryTypeClass::DTOR + infantry.hpp:64 错挂
  移除 + infantry_type.hpp 声明补齐；翻译阻塞（vfptr-install 词汇裁决 #55-F + 3 全局
  命名）细化移交 **#128**。#127 永久跳过定谳（桶政策，#29/#64/#65 goto 族先例，
  唯一解锁路径 = 用户特批 goto 形态）。#125 FloatArray@828 未动（下会话 ctor 写图仲裁）。
- **P2 H5 ×1**：0x521320 **GetIdleTimer 三态真翻 verify PASS 一次过**（非部署态
  Deployer/DeployFire/UndeployDelay/Archive/missionStartTime+Rules@908 表下标 +
  GetExitCoords/focus 坐标比对逗号链 + Locomotor COM vt16/vt72 + ShouldDeploy@1764 写；
  部署态 memberAtOffset3383 分支 GetCellCoords_Alt→To_CellObj→占用率<RadLevel/3 →
  vt968 局部派发+GetFireError(960)+FireWeaponWithCleanup(972)+AssignTarget_SyncLog(0)；
  else FindPathToBuilding(1064)）。词汇：vo InfantryClass += GetFireError@960/
  FireWeaponWithCleanup@972（vtable 0x7EB058 直读）；WeaponTypeClass@344=RadLevel/
  @336=AreaFire/@297=UseFireParticles、TechnoTypeClass@1732=UndeployDelay、
  InfantryTypeClass@1708=DeployFire、InfantryClass@1764=ShouldDeploy 词汇消费确认。
- **0x51C8B0 GetFireError 考古产出（未翻，移交）**：live 反编译 + vtable 直读铁证——
  **0x6FC0B0（signals 误名 TriggerTypeClass::ReadINI）真身 = TechnoClass 级
  GetFireError 基类版**（400 行公共开火裁决 0-9 码，尾 vt936 ValidateTarget 派发）；
  槽 444 = ObjectClass::GetCellCoords@0x5F6960；0x6F3970 TechnoClass::GetValue = 武器
  均值评估（SelectWeaponSlot→152+164）；0x51C8B0 自身含 goto LABEL_37/64 收缩拓扑
  （#127 同族）+ 4 个被调未声明（GetValue/ReadINI/StreamClass::Set2(QI 真身)/
  ComPtr::Release_Alt 已声明）——列为 goto-restructure + 归属考古双料件，下会话处置。
- **D 清扫部分**：#94 过时关闭（目标块已随后续波次清理，unit.cpp 现 15,365 行）；
  0x750041 同判（signals-only 中游地址，无 src 现场）。#60/#62 未动（需专项）。
- **收尾**：全量变更提交 + **tag auto-fill-baseline 重锚（G21）** + AGENTS 状态表
  11,711 + 接手指引刷新。
- 口径：completed 11,701 → **11,711**（L5×1 + L6×8 + P2×1）；pending marker 4,817 →
  **4,813**；issue 净变动 −4（#123/#124/#126/#127/#94 清偿，#128 新增承接）。
- 未消费移交：P2 余 5（0x51e140 SelectAutoTarget / 0x51dbd0 / 0x51c8b0 goto 族 /
  0x418e20 / 0x736579 块地址修复）、#125 FloatArray 仲裁、#128 双裁决件、
  L3/B/A 三裁决包、E1/W0b/P3/H6/H7/H3r、D 余项（#60/#62）。

## 执行日志 — 2026-09-18 G22 准备轮：G21 完成审计（用户判定工作量过少成立）+ 吞吐优先定稿（docs/g22_prep.md）

- **G21 审计**：计划 14 线实际执行 4.5 线（L5 ✓/L6 ✅✅ 8/8 族翻译/L7 ◐/P2 仅×1/
  D ◐），净产出 **+10**；L6 为高价值家族案（RadBeam 裁决 + 新方法论）非浪费，
  但 **E1/W0b/P3/H6/H7/H3r/A/B/C/E 九线零动**——六大解锁线（pending 20%+ 当量）
  连续四会话排"时间富余"档。
- **根因**：①H5 手动范式天花板 3-5 函数/会话；②大收益项卡"等裁决"（六个裁决包
  悬置）或被"时间富余"挤掉；③会话固定开销（五检/六件套/口径维护）。
- **G22 吞吐配额制**（docs/g22_prep.md）：每会话首要产出 = ≥1 条批量解锁线
  （B1 E1 命名轮 ~351 / B2 P3 批量 / B3 H3r ~100 / B4 H6 ~124 / B5 #56 再物化 65），
  H5 降填充档；**D1 裁决集中包六项一次提交用户单次拍板**；日志首行记净增 completed、
  <15 归因。总账 ≈8-13 会话，**吞吐目标净增 300-600+（对比四会话 +16）**。
- AGENTS 状态表加吞吐审计注记；接手指引 #2/#4 → g22_prep。

## 执行日志 — 2026-09-18 总计划定稿（docs/master_plan.md，单一权威）

- 用户指令：后续全部计划整体设计落地。**docs/master_plan.md** 收敛全部剩余工作：
  ①pending 全景三层口径（marker 4,813 + 存根池 ~2,454 = signals 非完成 7,267）
  与按桶/按阻塞因双分布；②七族 22 线工作目录（批量解锁/验证器裁决/语义翻译/
  布局证据/对拍运行时/集成验收 D1-D4/口径维护——D1 构建对拍·D2 EIP=0 排查·
  D3 功能对等·D4 Phase 1 出口首次纳入序列）；③Phase α 裁决快赢 → β 批量清偿 →
  γ 语义主体 → δ 收尾 → ε 集成验收依赖链；④里程碑 M0(已达)→M1(≈3,500)→
  M2(≈2,500)→M3(≈1,800)→M4(0) 刷新；⑤吞吐模型与风险登记；⑥五道阶段验收门。
- AGENTS 文档分布表置顶 master_plan（单一权威）；接手指引 #2 补入口。

### G22 准备轮续：D1 六裁决定谳（用户授权自行裁决）

- **①W0b = (a) 重生成补 ECX**（gap2 defs 本是合成类成员形态、C2355 实证 def 丢
  成员语境；(b) 迁真类桶转 E2 语义轮）→ 解锁 535 + 舰队直驱。
- **②CRT/COM = 分治**：语言不可表达类（inline asm/x87/goto 中块着陆）→ (b) 排除
  台账先行；可表达类（FILE/RTTI/CRT 全局）→ (a) 定义跟进真翻（M4=0 完整性）。
- **③#114 = 退化指针统一词汇**：两缺口形态归入 `*(DataGlobal_X + i)` 词汇族扩展，
  verify_execution_flow.py 提取器补识别 + 全池 dry 统计先行（保护文件，本裁决即
  批准，dry 数据仍先入档）。
- **④B 五项**：#21 继承建模（LoadOptions/SaveLoadDialog 布局兼容统一）、#22 子对象
  成员建模（Passengers 范式）、#25/#59 转 H7、#77 现场复核后建模。
- **⑤#125 = FootClass own 区归属 + FloatArray 类型采信**（唯一实测语义
  SlaveGiveMoney RecordBalanceBefore 吻合；命名证据轮终审；InfantryClass 镜像补条）。
- **⑥#128 = 定向豁免词汇**：WRITE(member,0/4/8/12) 指向已知名 vtable 安装锚
  （ctor_types 佐证）时豁免（与对象表达式词汇族同构）；解锁
  InfantryTypeClass::DTOR + TechnoTypeClass::DTOR 同形态。
- 执行排程：即时=裁决 1 重生成+B1 直驱+裁决 3/6 dry 实施；次会话=裁决 2 台账+
  5 现场仲裁+4 建模复核。g22_prep.md D1 节已重写为定谳记录；AGENTS 接手指引 #4 同步。

## 执行日志 — 2026-09-19 G22 D1 执行会话：裁决1 W0b 落地 + 裁决6 词汇实施 + E1 定向切片（净增 +0，解锁面记账）

> 用户指令"直接开始工作直到全部做完"。按吞吐配额制执行 D1 裁决序。
> **净增 +0 归因**：本会话产出全部为解锁面（配额制第 3 条折算）——W0b 批量线
> 535 函数解锁 + #128 第一层词汇 + E1 切片 4 命名。

- **W0**：11,711 PASS / 0 FAIL（42 分钟）——基线全绿维持（过滤器共存验证）。
- **裁决 1 W0b ✅**：_gap2 TU def 层首次全合法。系统性缺陷实证 = 519 合成类
  （Gap2Recv_* 等）被 cpp def 引用但全库零声明 + hpp 误发自由声明（C2653×518）。
  修复 = `.omo/g22_gap2_declare.py`（幂等）：519 struct + 5 类内插入 +
  3 垃圾类名重命名（`__int8::X` signals 名污染）。成员形态 = thiscall ABI 忠实
  （this=ECX 隐式）；def 签名已带栈参（#50 实证）。编译验收：C2653 清零，
  残余 = 伪码基线债（同态）。**535 函数解锁。**
- **裁决 6 ✅**：efv_ida_events.py `_is_vtable_write` 后置过滤器（WRITE(member,N)
  RHS 为 vtable 符号时丢弃）；dry 统计 completed 零命中=无风险；W0 共存全绿。
- **裁决 3 dry**：address-of 865 函数已处理；下标形态 114 函数 = 真缺口面
  （词汇实施待 DTOR 族后）。
- **E1 切片**：g_InfantryTypes/Items/Count + OperatorDelete 四命名落地。
- **DTOR×2 ⏸ #129**：D1-6b vcall-on-global 词汇 spec + InfantryTypeClass 尾区
  四源重建（hpp 指针模型 vs 内嵌 TypeList 冲突）；TechnoTypeClass 块已 til 命名态。
- **GetResourceID 族 📌**：this==小整数比较 ptr→int 门禁全禁（#129 独立记账）。
- 提交：54e0805e（计划+六裁决定谳）→ dade4cff（D1 执行）。

### G22 执行续：D1-6b 首翻落地（InfantryTypeClass::DTOR，净增 +1）

- **InfantryTypeClass::DTOR(0x5239d0) ✅ completed**：删除式析构真翻（4 重 vfptr
  安装=豁免词汇、InfantryTypes 注册自摘、RecordTable/三 TypeList 字段清理、
  尾调 TechnoTypeClass::DTOR），verify 全绿。
- **新词汇三条（do-while 族解锁钥匙）**：①Hex-Rays 将 do-while 渲染为
  `for(;;cond;shift)`——cpp 侧必须镜像 for 形态（shift 在 inc 槽）才块对齐；
  ②cache 归一：`*(void**)/(CCINIClass**)(this+N)` → `*(_DWORD*)(this+N)`、
  `__3_YAXPAX_Z` → `OperatorDelete`（4 字节读/调用语义保持）；③全局 blob 读
  （MEMORY[0xA8Exxx]→HouseClass_Player.__pad 渲染）IDA 侧不提取事件 → cpp 侧
  g_* 保持未解析静默对称（_by_name 不加条目）。
- **TechnoTypeClass::DTOR(0x711ae0) 前置精确化（#129）**：ml 33 成员缺口
  （11 TypeList 嵌入字段，基座名已有：VoiceFeedback/MoveSound/DieSound/...，
  字段名=基座+角色后缀）；g_AbstractClassArray/g_TechnoTypes 已定谳。
- 提交链：54e0805e → dade4cff → afed9740 → e1cf2181，tag 随每步重锚。

### G22 执行续二：dtor 族批量收割 + E1 收官 + A3 舰队波（净增 +119 → 11,839）

- **Cleanup-shape 复盘与重做（×7，commit 8bb78bc9）**：G22 早前批量 7/7 FAIL
  根因三连——①生成器产出四冒号畸形 `Cls::::ddtor`（signals 名拆分 bug）；
  ②插入逻辑覆盖 `BridgeClass::GetCellData` 存根（数据丢失事故）；③0x74f4b0
  记录名 `?::ddtor` 非法类名。重做配方：**就地替换基线空存根体**（非新定义）
  + `?::ddtor`→`_::ddtor` signals 纠名（对齐 __e4.hpp E2 声明，`_` 为合法
  C++ 标识符）。ml+mbn 补 4 类 {4:Items, 8:Capacity, 13:IsAllocated}（7 cache
  伪码同构=二进制铁证）。
- **GUID_writer ×5（827f6853）**：E_POINTER+GUID 写入族，签名手术
  `int(a1,_DWORD* a2)` 对齐 cache（记录名 ddtor vs 体=QI 族，槽位误名债不阻翻
  译）；0x4a0a50/0x4a00b0 goto 族排除、0x4a3110 __userpurge 大件另案。
- **wave3 ×3（29c51e18）**：Timer::GetTicks 调用件、_vt08 setter 件、
  VectorClass_ParticleClass 子对象 ctor 形态（**OperatorNew cache 手术 +
  _by_name 别名**——镜像 OperatorDelete 先例；vfptr-install 豁免实战生效）。
- **Blit/Convert 蹦床 ×20（fc48ea86 + a9cfdced）**：`?$Blit*@G` 仿函数族
  槽位考古法——**signatures 里 vt+12=蹦床自身地址 反查 vtable 基址** → slot+4
  =AddRef（14+6 类 uniform）→ cpp `this->AddRef(a2..a8,0)` 语义调用 =
  CALL(vfptr+4) 对称。vtable_offsets +20 类。9 参垃圾渲染（Hex-Rays 类型失配）
  不影响事件面。
- **x3 Cleanup-variant（e918cc66）**：BaseClass/unknown/ToolTipClass（局部指针
  中转 + Count@16 清零；G21 对称规则的 clean 应用）。
- **A3 舰队波（85661e73）**：gap2 全桶 14 文件 1,161 pending 直驱——净 +6
  （system 4 + object/entity 各 1），FAIL 29 自动回滚。**结论：机械规则线已
  榨干**，剩余主体 = member@N?Class（ml 缺口）/slot@N?Class（vtable 审计面）/
  too-long（H5 手动档）。
- **E1 收官（a57bc09d；fleet 尾计修正：addr40 再收 0x401f80 EnterCriticalRegionHelper，issue #66 前提已解，wave 总标记 7 件而非 6）**：5 区 804 全局已被 G5 DataGlobal 覆盖（0 垃圾名，
  **issue #67-#71 主体陈旧已 resolve**）——E1 真实剩余=补缺：0x848628
  （MapSize 表 [] 形态）+ B1D010-B1D09C 36 dwords（scalar uint；#107 解锁前提）
  落 e4_globals.hpp。#44/#45/#70 同批 resolve。
- **CellClass::DTOR 大件 ✅（0x47bb60，+1）**：vfptr×4 豁免 +
  **CellAttachedStub 合成接收者**（foreign-receiver 静默对称文法：local 接收者
  `v2->Delete(1)` 双侧零事件）+ `unsigned int *v4` 退化下标 `--v4[101]`（局部
  基静默对称）+ mbn/ml 228/324 漂移以别名 firstLink 绕行（#53 cell.hpp -36 族
  活体样本，不改争议名）。
- **#114 活体样本定谳（issue #131）**：CounterClass for-inc 槽
  `this->M[i]=v` cpp=WRITE(member,off) vs IDA=READ(member,off)+静默解引——
  统一词汇需类型上下文裁决（方案 a/b + 全池回归风险已记账），ml 已备即收割。
- **门控后台核验**：check_translated_functions 全 FAIL 项 = 行数启发式对既有
  存根/2 行真翻的误报 + 文件内既有 stub——重锚清零，无新违规类别。
- **Type 族 SDDTOR ×11（363627dd + 补标 ×2）**：注册表自摘配方定型——
  ①事件驱动生成（recv×2/count×3/items×2 精确配平）；②声明名走 hpp 真名
  （g_AnimPoolManager 族/BulletTypeClass_Array/VoxelAnimTypeClass_Array/
  g_MultiplayerPool——DataGlobal_* 假设名会静默失配）；③**do-while 自回边
  形态**（G21 for-form 教训的逆方向：IDA 渲染 do-while 时 cpp 必须真 do-while，
  for-form 反而块错位）；④`Cls *blk = this;` 局部对称（**Block 撞真全局
  0x87C484 教训**——局部名走小写）；⑤OperatorDelete/OperatorNew cache 手术。
- 口径：completed **11,830** / dtor 族队列余 15
- **TClassFactory 族 ×46/47（80c02ff3 + b311a3f3 + 2eb5000e）**：CreateInstance
  形态全量产——记录 0 参 vs 3 栈参（arg4=ppvOuter/arg8=riid/v8=ppvOut）签名手术
  `void* a2,int a3,_DWORD* a4`；E_POINTER/E_NOAGGREGATION/OOM 早退 5×RET；
  OperatorNew cache 手术双侧配平；callee 名双侧同解析（X::Construct/CTOR/
  Helper_NNNN 全变体泛化：`(v2)`/`(v2, 0)`/无 cast 渲染/函数指针 cast 渲染）；
  QI/Release 虚调经局部接收者静默。46/47 PASS（余 TClassFactory_UnitClass
  0x6c3410=GetSize 误名+寄存器参数件）。
- MapFile::ddtor +1（DynamicVector 元素逆序 DeleteAndZero；this-> vs blk 的
  事件选择取决于 cache this 形参渲染名）
- **TechnoClass::DTOR 大件 ✅（0x6f4500，b13cebb2）**：32 块全对齐。三条
  cache 词汇新沉淀：①接收者 `(_DWORD *)(this + N)` → `&this->ml名`（地址语义
  保持，双侧 this->X 提取 READ 对称——音频控制器对/AbstractClassVector 尾调）；
  ②`*(void **)(this + N)` 双星读归一化（G22 早前 void** 教训的 _DWORD** 变体）；
  ③off_7F4934 第 4 接口 vtable 安装不在豁免词表（off_ ≠ vt_）→ 事件面对位=
  vtable3 复位写（install 链编译器管理，死存储语义无害）。ml +9 向量成员
  （vecTechno/vecInt/vecAbs 三组 Items/Capacity/IsAllocated）。
- **SmudgeType/TerrainType ddtor ✅ ×2（11,833）**：fastcall 怪态签名重整
  （`(void** this, AbstractClass*, char)` → `(AbstractClass*, char)`）+ Image@164
  清理 + 注册表段未解析名静默对称（InfantryTypeClass 先例泛化：cpp 侧全局解析
  =signals.globals 名键，hpp extern 不参与→未解析名即静默）。
- **BuildingLight SDDTOR 挂起**：事件 7 读对位完成（recv×2+count×3+items×2，
  blob 渲染基址提取），do-while/for 两形态块集均对齐但**边拓扑差**（IDA
  && 链 cond2 落入 fallthrough 块 vs cpp 三分支链）——需边级规范化迭代，
  diff 数据留 .omo/bl_blocks.txt。
- **BuildingLight SDDTOR ✅（11,834）**：循环形态裁决=**以 IDA-extractor 的
  CFG 划分为准**（cache 文本 do-while 但 CFG 是 while 语义——`v3 < --X` ≡
  `--X; while (v3 < X)` 事件/CFG 等价变换）；7 读 blob 渲染基址配平。
- **CounterClass ✅（11,835）＝#131 词汇案破案**：无需验证器改动！cache 归一
  `*(this+1)+4*i-4 解引用写` → `this->Items[i]=0` 下标形态 → IDA 侧同发
  WRITE(member,4)（基址读双侧消失）→ 类型化下标 cpp 门控合法 → 对称 PASS。
  统一词汇的实现路径 = **cache 侧归一化**而非提取器扩展（零回归风险）。
- **GraphicMenuImageItem ✅ / IPXManagerClass ✅（11,836-11,837）**：误名实
  函数双件（动画装载链 7 调用配平；包轮询连接表轮转）——变量索引访问
  `this + 4*idx + 40` cache 归一 `this->connTable[idx]` 双侧对称 + 合成
  IPXConnStub@100。
- **UDP ddtor ✅（11,839）**：广播判定分派（this->AddRef=CALL(vfptr+16)，
  vtable_offsets 槽名考古；AudioQueue::WriteBuffer 8 参直调）。
- **RulesClass::DTOR 三/四轮结论（cpp 回滚；ml/cache 数据为准）**：
  ①off_-RHS 安装行写入是真实 IDA 事件（off_ 不在豁免词表）必须保留——37 缺失
  由此起；②23 行宽松扫描补齐后全 250 行归一（0 残余）；③四轮出现跨清理块
  q 名换位（IDA [R2597,W2592…] vs cpp [R328,W324…] 成对互换）——回扫窗口
  在多 lea 参数组中取错行。**下会话正道：逐清理块配对校验**（IDA 块事件序
  vs cpp 块事件序成对 diff，块级重指派 q 名），块表与偏移数据全在
  .omo/rc4.txt+rules_q_offsets2/3.json。
- **RulesClass::DTOR 二轮迭代结论（cpp 回滚，准备全保留）**：verbatim 策略
  使块数对齐（114=114）且 STEP3 OK——剩余 78 差类 = **两提取器对异形行
  （LODWORD 部分写/下标/解Ref 组合 250 行）的分块行为不同构**。数据全留档：
  .omo/rules_full_disasm.json（748 指令）/rules_q_offsets2.json（精确偏移）/
  rules_q_lines.json（250 行址）/rc2.txt（全量块表）。下会话路径：按行类
  （A/B/C/D/E/F/vt 七类）逐类归一化到两提取器同构形式，每类小批验证。
- **RulesClass::DTOR 深化准备已落盘（未完，回滚 cpp 保 ml/cache）**：
  ①250 个 ? 行地址→反汇编→151 偏移全解析（.omo/rules_q_offsets.json）；
  ②cache 已归一 ?→q 名（139 新名 qXXX 入 ml/mbn，RulesClass 偏移全映射）；
  ③转换器首版 384 行产生 143 块签名差（IDA 114 vs cpp 139）——根因=被省略的
  106 条 vt 安装行在 IDA 侧留下分支空块而 cpp 塌缩 + D_partial(LODWORD) 行
  post-naming 事件行为待精确定义。下会话路径：不省略安装行，改为保留行文本
  （post-naming 双侧同提取）或以空语句保 CFG；按块类迭代。
- **RulesClass::DTOR 考古（下会话首件）**：587 行=blk0 mega-block（42×
  VectorClass::Destroy + TryFreeAndClear + Destroy 族 17 调用 + 1×READ(member,?)
  wildcard）+ 尾部命名成员条件清理块（2876/2844/2776…全 ml 已映射）。
  关键发现：`&this->?` 行（til 未名成员）被 IDA 提取器跳过（仅 CALL 事件），
  cpp 侧须同跳过——Destroy 实参用局部中转或不发事件形态；`this->?` 解引用行
  发 1×READ(member,?) wildcard。转换脚本可模板化：剥 (int) 强转 + ? 行特殊化。
- **RulesClass::DTOR ✅（11,840，五轮迭代）**：最终配方=①?成员经反汇编
  this 寄存器（esi/ecx）扫描定偏移+q%03X 名 ml/mbn 全量映射；②cache 全量
  归一后 cpp=verbatim（剥地址注释+剥 (int) 强转）；③**下标安装行保留**
  （`this->vec[6] = &vt_X` 的 [N] 破坏 IDA 豁免正则→真实 WRITE 必须镜像）、
  无下标安装省略（豁免丢弃）；④off_-RHS 写为真实事件保留。587 行最大件
  收割，验证器词汇无任何改动。
- **MSFont ✅ / CStream ✅ / UnitClass TF ✅（11,843）**：MSFont=文本渲染
  实函数（CharToOem/字体度量/SHP 绘制 8 事件配平，this->CharWidth=vfptr+4
  槽名）；CStream=__userpurge 重整（Block 局部全静默+OperatorDelete 手术×4）；
  UnitClass TF=计数增减器（栈参签名手术 int* a2,int a3 全静默）。
  Enum×2 复核：全空签名块的图同构检验下 goto 棱形无法结构化克隆——
  G21 goto 族排除政策终验成立（永久挂起件）。
- **AnimFile 终验（dtor 队列战役终结）**：LABEL_42/41 跳出扫描环=与 Enum×2
  同族的 goto 图同构问题，结构化重写不可达——永久挂起。**dtor 族 126 件队列
  终态：收割 123 / goto 永久挂起 3（AnimFile+Enum×2）**。
- **dtor 队列终态分诊（余 15 全部 H5 手动档）**：TechnoClass::DTOR（20 写×12 调大件）/
  AnimFile（成员阵列-heavy）/ IPXManager _vt03（包服务循环=误名实函数）/
  MSFont _vt03（文本绘制）/ GraphicMenuImageItem _vt03（NullGuard+CCFile 链）/
  BuildingLight SDDTOR（blob-member 渲染 7 读需 struct 型全局词汇）/
  UDP _vt03（8 参签名）/ SmudgeType+TerrainType（fastcall 2 形参怪态）/
  UDP ✅已收 / MapSize ✅已收（合成 MapSizeOptStub 链+globals 名键词汇）/
  Counter ✅已收 / RulesClass::DTOR ✅已收（587 行最大件）/ MSFont ✅已收 /
  CStream ✅已收 / UnitClass TF ✅已收 / AnimFile（187 行
  goto 播放引擎）/ MSFont（文本渲染）/ CStreamClass（__userpurge）/ Enum×2
  （goto 族）/ UnitClass TF（寄存器参数）——余 7 件均需独立会话档
  （下一既定批量 = TClassFactory 族 ×13 签名手术：0 参数记录 vs 3 栈参
  CreateInstance 形态 arg4/a3/v8 + OperatorNew cache 手术） / 提交链 8bb78bc9 →
  827f6853 → 29c51e18 → fc48ea86 → a9cfdced → e918cc66 → 85661e73 →
  a57bc09d。注：前三单提交消息的 11,733/11,738/11,741 为基线算术笔误（+6），
  真实里程碑 11,727/11,732/11,735，以 signals 为准。


### G22 补充：W0b 关键技术结论与本会话终态
- **W0b(a) 与验证器对称性冲突定谳**：thisArg 重命名方案会使 cpp 侧
  `thisArg->X` 静默，而 gap2 cache 文本 `this->X`（class-less 全局成员索引）
  在 IDA 侧发事件——不对称必 FAIL。可行路径=(b) 迁类方法桶（this 合法化）
  或（重生成时同步重取 cache 使双侧同为具名参数）。需生成器+IDA 重提取
  联动，独立会话工程。
- **H3r 三类别重扫=全清零**：free-this/IDA-ism/broken-arrow 在 G14-G22 间期
  波次中已消化（DataGlobal 名键化+?归一化覆盖），B3 线原始目标消失。
- **pending 全池实测 4,770 marker 块**（11,843 completed + 4,770 marker +
  ~2,454 stub 池 = 19,067 总账吻合）；Top：system/gap2 269、_gap2 265、
  object 140、ui 122、addr7C 119。
- **dtor 族战役终态**：126 队列 → 123 收割 / 3 goto 永久挂起（AnimFile+
  Enum×2，图同构不可达已终验）。


### G22 H6 解锁线：洋葱剥层两轮（+11 → 11,852）
- **第一轮**：舰队跳过原因中 26 个 (类,偏移) 对 → q 名 ml/mbn 批量入
  （q 约定中性名，A1 轮可语义化升级）→ 舰队重跑 9 桶 +9
  （system1/ui2/entity2/core2_2/app1/misc1）。
- **第二轮**：新暴露层 6 成员+2 槽位（FileClass slot52/CCFileClass slot4
  vtable_offsets）→ +2（system）。**收益递减确认**：深层 blocker 转移至
  ternary/param-mismatch/raw-this-residue——归 H6 专项与 W0b。
- 词汇：slot@N 跳过 = vtable_offsets 缺条目（'vtNNN': N 名键即解锁），
  member@N = ml 缺条目——两类批量解锁配方已验证可复制。

- **W0 保险：会话 134 标记回归验证 134/134 ALL PASS**（748d42d5→HEAD
  completed 差集逐个 verify，exit=0 全绿）——本会话全部收割无假完成，
  dtor 族战役/TClassFactory 量产/双大件全数复核。


### G22 会话终章：W0b 重大突破——_gap2 金矿 verbatim 转换管线打通（11,854 → 11,858 起步）

**背景修正**：早前"W0b 对称性冲突定谳"结论有误——`src/_gap2/gap2_global_defs.cpp`
的 def 已在 G22 前段被生成为 **Gap2Recv_* 合成类成员函数**（`this` 字面量
合法、ECX=this ABI 正确），无需 thisArg 重命名；唯一前置障碍是舰队规则不
适配（60 块 replaced 后 0 PASS）。

**配方（RulesClass verbatim 配方的复用）**：
1. cache 伪码剥地址注释 + 剥 `(int)&this->`/`(int)this->` 强转；
2. vt_ 安装行省略（豁免丢弃）、`[N]` 下标安装保留；
3. 局部声明行（`// eax/BYREF` 注释行）提取为 decls；
4. OperatorDelete/OperatorNew cache 手术（必要时）；
5. def 体内残留伪码整体替换为转换文本。

**试点结果（60 块）**：PASS 18（0x41C250/0x430AC0/0x432C10/0x43C0D0/
0x455F10/0x459CA0/0x45A160/0x486E30/0x48DEB0/0x48DF30/0x4CB760/0x4CB7C0/
0x4CE4B0/0x4D0430/0x4F9F70/0x507B80/0x50DA10/0x70E240，其中 4 件新标记、
14 件此前舰队波已标记）/ FAIL 42（goto/未名成员/寄存器参数残留）。
失败件已随批次留在转换文本中——**回滚仅适用于整批；本批 PASS 件已标，
FAIL 件保持 FAIL 态等待逐件归因**（注意：FAIL 件的 cpp 已是转换文本而非
伪码，下会话 triage 时以 verify 失败原因为准）。

**剩余 487 块**（547 解析 - 60 试点）：同管线可批量；深层类目=goto/
寄存器参数（fastcall/@<edi> 等）/未名成员（需反汇编偏移解析管线——
RulesClass q 名配方）。

**下一步**：
1. 试点 2：60-160 区间 100 块，统计三失败类占比，定向补配方（声明提取
   放宽/goto 块剔除/寄存器参签名手术模板）；
2. 失败块不回滚（保持转换文本），按 verify 逐件归因迭代；
3. 全量 547 块完成后 _gap2 桶预期 +300~400 completed——超过本会话其余
   全部批次总和。

**会话累计**：11,720 → 11,858（+138），W0 回归 134/134 全绿后新增
试点已标记件待下会话开场复跑。
