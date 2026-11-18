# IG 证据族源头修复：1B/2B 词汇确定性派生 + 指针链折叠禁用

日期：2026-11-18　｜　轨道：CSP IG 证据质量（R5-B / ig-fixer）　｜　状态：**已实施 + 30/30 静态验证 PASS**

## 0. 结论摘要

| 项 | 修复前 | 修复后 |
|---|---|---|
| u8 候选 token | 2（char, unsigned char） | **446**（全部 1B 标量 + 全部 1B 元素数组 char[N]，从 type_universe 确定性派生） |
| u16 候选 token | 2（short, unsigned short） | **6**（+signed short, int16_t, uint16_t, wchar_t） |
| M 基指针链折叠 | 1,264 事件 → 984 幻影实体 | **全部 drop**（pointee_member_fold_dropped=1,264） |
| evidence 实体 | 8,119 | **7,145**（−974：−975 fold-only 实体 + 边界 ±1） |
| arbitrated 4,162 簇修复后去向 | — | **B 直接 join 3,305（79.4%）+ A fold-drop 等效仲裁 226（5.4%）+ C 真宽度冲突 631（15.2%，MR>IG 仲裁继续裁决）** |
| 30 条台账静态验证 | — | **30/30 PASS**（含 report 实证样板 0x8F4/0x14CE 折叠对） |

修复方式 = **源头修生成器**（.omo/ffl9/aggregate.py 物化层）+ 数据重物化
（anchors/insn_granularity_types.json）。IDA 采集端（run.py/full.json 10,275
事件）零改动、无需 IDA 在线。未跑求解器（禁令遵守）；cache key 随 anchors
文件内容变化，下次求解自动全量重判。

## 1. 病理定位（report_mr_ig.md 已实证，本修直击生成器机制层）

IG 生成链 = `.omo/ffl9/run.py`（IDA 内数据流引擎 → full.json 10,275 事件）
→ **`.omo/ffl9/aggregate.py`（物化层 → anchors/insn_granularity_types.json）**
→ minclass_solver.py L3453 `_load_type_family`（消费端，types→位掩码 OR）。

两大病理都在物化层（aggregate.py）：

| 病理 | 修复前代码 | 机制缺陷 |
|---|---|---|
| ① 词汇缺口（~3,160 件） | `TYPES = {"u16": [short, ushort], "u8": [char, uchar]}` | byte 访问的宽度判据只证明「被访问字节的首元素宽度 1B」；bool 成员与 char[N] 首字节访问完全合法，候选集却硬编码排除了它们 → 宽度一致、纯 token 缺席的假矛盾 |
| ② 指针链折叠（~605 件） | `mat_pointee` M 分支：`M:fn:this:A + off → M:fn:this:(A+off)` | M 基寄存器持有 [this+A] 的**值**，以它为基的访存是解引用该值。A 为指针成员时（0x6C4+0x230=0x8F4 算术互证）折叠成幻影 this 偏移——真值来自**被指向对象**布局，与 this 布局无关。A 为内联子对象时折叠数学上碰巧成立，但事件层无法区分（需 A 的类型 = member_types 上游 = 循环依赖） |

## 2. 修复内容与选择理由

### 2.1 病理①：候选集从封闭词汇表确定性派生（非白名单硬编码）

```
u8  = universe 内全部 1B 标量（char, unsigned char, bool, uint8_t, unsigned __int8）
    + 全部 1B 元素数组（char[N] 家族 441 个, uint8_t[3]）          → 446 token
u16 = universe 内全部 2B 标量（short, unsigned short, signed short,
      int16_t, uint16_t, wchar_t；universe 无 2B 元素数组 token）    → 6 token
```

选择理由：
- **确定性规则**（首元素宽度判据 + 封闭词汇表枚举），无启发式/无统计通道——
  byte 访问 char[80] 首字节与访问 bool 成员在判据层不可分，候选集如实表达
  全部可能（不确定性留在域里由其它族收窄），这是候选集语义的诚实表达。
- **纯放宽安全性**：IG 掩码只增不减 token → 族域交运算单调不减 → 只恢复
  空交簇、不可能把非空交变空 → **无 unique 损失机制、矛盾单向减少**。
- 校准靶覆盖（mrig_rows 病理① miss 谱）：bool 1,787 / char[1] 1,297 /
  char[3..N] ~72 / uint8_t 1 全部落入新域。

### 2.2 病理②：M 基折叠禁用（保守 drop + 计数，非新实体前缀）

`mat_pointee` M 分支返回 `DROP_FOLD` → `pointee_member_fold_dropped=1,264`
事件弃置，meta 记录变更理由。

选择理由：
- **drop 优于新前缀实体（PM:）**：求解器实体空间无 pointee-of-member 语义，
  新前缀要么被静默忽略（效果=drop 但更绕）要么需要改 fam 构建点（扩大
  改动面）。drop 干净、可从 full.json 完整回放（原始事件永久保留）。
- **drop 优于布局过滤**：用「折叠偏移是否落在类布局内」过滤需逐函数接收者
  类 = 求解器输出 = **循环依赖**，不可行。
- **证据纪律**：折叠正确性在事件层不可判定（指针 vs 内联），校准实证产物
  98.65% 错误（矛盾簇 3,818:2）→ 不可判定的证据移出 strict 集 = 保守化。
  MR>IG 仲裁在消费端已达同结论（pop IG），本修把结论前移到源头。
- **「逐字节序列化 store」子形态的定性**（report 病理②后半）：构造器对宽
  成员区间逐 byte 清零（0x431A5A-66 六连 store）本质是「byte 访问 4B 成员
  的固有粒度歧义」——属于 C 类真宽度冲突（见 §3），由 MR>IG 仲裁继续
  裁决，**不在生成器层修**（任何单指令层判据都无法区分序列化清零与
  byte 数组成员写，修了就是启发式）。如实报告：该子形态源头不可修。

## 3. 全量静态账（4,162 arbitrated 簇 × 修复后重放，纯内存计算）

```
B  join_restored_IG_contains_MR   3,305  (79.4%)  ← 病理①+②修复直接生效，
                                                   簇不再需要仲裁
A  entity_gone_fold_dropped         226  ( 5.4%)  ← 折叠实体消失，簇只剩 MR
                                                   （== 仲裁的 pop-IG 结果）
C  still_empty_intersection         631  (15.2%)  ← 真宽度冲突，保持仲裁
```

C 类 631 分解：`unsigned int` 373 + `int` 93 + `void*` 48 + `uint32_t` 3 =
**517 件 4B 真值 vs byte/word 访问**（逐字节序列化 + 位操作形态）；
UnitTypeClass/AudioController/Color/CellStruct/double 等类/8B 真值 ~30 件
（byte 访问指针/struct 成员）；word-访问-1B-成员（char[2] 整字访问族）36
件；台账拼写漂移（'Char' 大写类 vs 'char' 小写原语）~10 件——**注意台账
family_domains 是字符串化转储，求解器内部是位掩码（_tok_ix 精确匹配 +
小写回退），C 类的求解器实际行为可能好于本静态账**（静态账是保守下界）。

## 4. 30 条台账静态验证表（分层确定性抽样，非随机）

分层（arbitrated 4,162 内，cluster 字符串排序取前 10，可复现）：
bool 层池 1,879 / char[N] 层池 1,445 / fold 层池 201。

| # | 层 | cluster（台账实体） | MR 域（真值） | IG 域（修复前） | 修复后检验 | 判定 |
|---|---|---|---|---|---|---|
| 1 | P1a bool | M:40B640:this:0xD | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 2 | P1a bool | M:40B670:this:0xC | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 3 | P1a bool | M:40B6A0:this:0xD | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 4 | P1a bool | M:40B6D0:this:0xC | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 5 | P1a bool | M:40B880:this:0xD | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 6 | P1a bool | M:40BAE0:this:0xD | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 7 | P1a bool | M:40BE50:this:0xD | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 8 | P1a bool | M:40BE80:this:0xC | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 9 | P1a bool | M:40C030:this:0xD | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 10 | P1a bool | M:40C230:this:0xD | bool | char\|unsigned char | IG[446] contains bool | PASS |
| 11 | P1b char[N] | M:40B180:this:0xC | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 12 | P1b char[N] | M:40B180:this:0xD | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 13 | P1b char[N] | M:40B270:this:0xD | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 14 | P1b char[N] | M:40B2A0:this:0xC | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 15 | P1b char[N] | M:40B2E0:this:0xC | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 16 | P1b char[N] | M:40B300:this:0xD | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 17 | P1b char[N] | M:40B740:this:0xD | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 18 | P1b char[N] | M:40B7F0:this:0xD | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 19 | P1b char[N] | M:40B820:this:0xC | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 20 | P1b char[N] | M:40B860:this:0xC | char[1] | char\|unsigned char | IG[446] contains char[1] | PASS |
| 21 | P2 fold | M:414310:this:0x14CE | unsigned int | char\|unsigned char | 实体已移除（report 实证 0x6C4+0xE0A 对） | PASS |
| 22 | P2 fold | M:414310:this:0x8F4 | unsigned int | char\|unsigned char | 实体已移除（report 实证 0x6C4+0x230 对） | PASS |
| 23 | P2 fold | M:414BB0:this:0x2C8 | int | char\|unsigned char | 实体已移除 | PASS |
| 24 | P2 fold | M:4267F0:this:0x10C | unsigned int | char\|unsigned char | 实体已移除 | PASS |
| 25 | P2 fold | M:4267F0:this:0x10E | unsigned int | char\|unsigned char | 实体已移除 | PASS |
| 26 | P2 fold | M:42EB50:this:0x10 | CellStruct | char\|unsigned char | 实体已移除 | PASS |
| 27 | P2 fold | M:42F3F0:this:0xC | bool\|char[1] | char\|unsigned char | 实体已移除 | PASS |
| 28 | P2 fold | M:42F490:this:0x8 | AbstractClass\|unsigned int | short\|unsigned short | 实体已移除（Items[2] 字访问样板） | PASS |
| 29 | P2 fold | M:43B740:this:0x1C30 | unsigned int | char\|unsigned char | 实体已移除 | PASS |
| 30 | P2 fold | M:43BCF0:this:0x679 | unsigned int | char\|unsigned char | 实体已移除 | PASS |

**PASS 30/30**。附带回归：report §1③ 已知 2 条 IG-正确的行
（M:433C70:this:0x24 → unsigned short ∈ 新 u16 域；M:6A60E0:this:0x53A6 →
unsigned char ∈ 新 u8 域）真值仍在域内——扩词不伤既有正确命中。

## 5. 影响与风险披露（诚实负结果部分）

- **−747 个伪类型解**：fold-only 975 实体中 748 个在当前 assignments 有解
  （83 forced + 665 narrow），其中 **747 个的候选集完全落在 IG 词汇
  {char, unsigned char, short, unsigned short} 内**——即解由 IG 折叠证据
  独撑，drop 后失解/变 free（1 个 double 解来自其它族，保留）。这些解
  建在幻影偏移上（如 this+0x8F4 = 指针成员 0x6C4 的 pointee+0x230，this
  布局无此成员），是下游类型重建的**污染源而非资产**——校准已证矛盾簇
  内 98.65% 错误，非矛盾簇的 fold-only 实体同理不可判定。预计全局 unique
  口径 −747（求解器实测待队友下一轮，本轨禁跑全量）。
- **正交收益**：B 类 3,305 簇从「仲裁 pop-IG」变为「IG 域含真值直接 join」
  ——台账 status 区分度提高（下游 b3_v5 等不再需要为这 3,305 簇打
  补丁标记）；IG 族本身的 strict 证据质量恢复（不再是 member_types 的
  对抗源）。
- **MR>IG 仲裁 gate 保持不动**：C 类 631 真宽度冲突仍需它裁决；两修互补
  不互替（report §5 的判断在本修后依然成立）。
- ffl8 交集边界漂移：重叠 46→43、收敛 36→34、矛盾弃置 10→9（差值=折叠
  实体被先 drop，逻辑本身单调无恙）。

## 6. 工件清单

| 文件 | 说明 |
|---|---|
| `.omo/ffl9/aggregate.py` | 修复本体（TYPES 派生 + mat_pointee M 分支 drop + meta 注记 + 紧凑输出） |
| `anchors/insn_granularity_types.json` | 重物化产物（7,145 evidence，u8=446/u16=6 token 域，40.2MB） |
| `.omo/agents/bm/ig_fix_verify30.py` / `.json` | 30 条分层验证脚本 + 机读结果 |
| `.omo/agents/bm/ig_pre_fix/insn_granularity_types.json.bak` | 修复前快照（对照用） |
| `.omo/ffl9/full.json` | 原始 10,275 事件（未动，回放母本） |
| 本报告 | `.omo/agents/bm/report_ig_fix.md` |
