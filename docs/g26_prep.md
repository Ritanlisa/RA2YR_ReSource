> ⚠️ **已作废（2026-09-20）**：本工作包所属的旧 fleet/H5 管线已被
> 六步 CSP 机械重建取代（`docs/mech_rebuild_plan.md`）。不要执行本包；
> 当前阶段 = 第 6 步 RA2MCP（csp_canon 基底补锚/重命名/对拍）。
>
> **G26 收尾记录（2026-09-20）**：第 6 步 RA2MCP 首轮已完成——18 函数翻译+
> 验证全 PASS、净增 +8 → completed 12,856、~10 件 HEAD 假完成修复、
> pending 3,979。原「G26 工作分解」中：收割续跑已停并清除检查点（bodyless
> 函数 verify PASS 机理未定界，防假完成）；其余项移交 G27
> （docs/g27_prep.md）。执行详情 = docs/mech_rebuild_plan.md
> 「第 6 步 RA2MCP 阶段执行记录」。

# G26 准备工作包（2026-09-20，G25 词汇解锁会话后续）

> 背景：G25 会话打穿验证器三层词汇缺口（裸名全局 / ternary 扁平化 /
> 伪码局部遮蔽），全池 pending 重验证收割（g25_pending_reverify.py，
> 断点续跑，结果 .omo/g25_reverify_results.json）。#133 mlq 对账定案：
> 根因 = signals._member_by_name 1,835 条字符串值旧格式（新格式 int），
> 归一后 6 件真转换 PASS——**G24 口径 12,437 含 6 件假完成（标记在、
> 翻译无），真基线 12,431**。

## G25 终态口径

| 指标 | 值 |
|---|---|
| completed | **12,793**（HEAD 12,437 → 净增 +356；G24 口径含 6 件假完成，真基线 12,431） |
| 主收割 | 3,922 pending 重验证：3400 检查 / 370 新 PASS / **余 522 件断点续跑**（.omo/g25_reverify_results.json） |
| 词汇修复 | 裸名全局（0 completed 回归面/5,199 pending 上side）+ ternary 扁平化（efv_cpp_cfg._lower_ternary 关闭）+ 局部遮蔽（locals_hint 三模块贯通，`#373`/双星正则坑已修） |
| signals 卫生 | 1,835 str→int 归一 + 66 幽灵长键删除 |
| 回归 | 25/25 + 149/150 + 120/120 + 60/60 全绿（1 FAIL=0x76df50 既有债 #135） |
| 遗留 issue | #134 幻影族 / #135 0x76df50 体提取 / #132 B 族双解引用派发 |

## G26 工作分解（按优先级）

### 1. 收割续跑确认（W0）

`.omo/g25_reverify_results.json` 断点续跑：`python .omo/g25_pending_reverify.py`
（已检查 3,400 地址自动跳过，余 522 件）。确认完成后做 marker&completed
对账=0。

### 2. globals 证据同步 + 二轮收割（1367 件盲区）

hpp `// data:` 注解 14,767 vs signals.globals 13,443——1,367 个
DataGlobal_XXX 名 cpp 侧 Resolver 解析盲区（0x674000 实证：入口块两读
丢失 → normalize 吞块）。执行 `.omo/g25_globals_sync.py --apply` 后：
- 复测 0x674000（RulesClass::LoadSpeedTypes，STEP3(0) OK 19 vs 18）；
- 全池抽样回归（补全后 cpp 侧新增 READ/WRITE，凡 IDA 侧本有对应事件的
  FAIL 件应转 PASS；凡双侧原本都静默的会翻 FAIL——抽样定量）；
- 对仍 pending 函数跑第三轮 reverify。

### 3. 0x76df50 既有债（#135）

G19 全池 ALL PASS 时代 PASS、现在 FAIL：cpp 体提取抓到整个文件尾部
（addr76_e4.cpp:3078 起多函数拼接，单块巨事件表）。HEAD signals 二分
已排除 G25 变更——G20-G24 间 addr76_e4.cpp 编辑破坏 body 边界。定位
find_cpp_function 的闭合括号配对哪一步失配。

### 4. 幻影族 signals 注册（#62+#134 扩展）

8+3 件翻译在文件+可验但 signals 无条目：#134 新实证
TacticalClass::ProcessTick/2/3（0x41C050/0x41C150/0x41C160，IDA live
确认，≤15B getter）。解锁 = signals.symbols 注册（symbols+_by_name 双
索引）+ src MiniStub 名对齐 + 归属复核（issue #52④⑤⑥ Techno 族 vtable
槽引用 vs IDA 今名的矛盾）。

### 5. B 线词汇（g25_prep 遗留）

- 双解引用派发 `(*(_DWORD *)*this + N))(*this)`（0x5233d0）——先修
  InfantryClass 误归属（`*this = 0` 写偏移 0 语义不成立，真 owner 是
  持 IUnknown* 的 wrapper 类），再扩 convert_dispatches 接收者白名单；
- 0x7ae5d0 CALL(vfptr+0) 形态 verbose 定位。

### 6. no_def 重生成（裁决 1b 迁类桶，g25_prep 遗留）

gap2 全 TU no_def ~46 块。多数为幻影 signals（MiniStub 无声明无条目）
——与 #4 合并处理，先注册后物化。

## 快速验收清单

```
[ ] curl :13337 探测
[ ] harvest 续跑完成确认 + 对账
[ ] globals sync --apply + 0x674000 复测 + 抽样回归
[ ] 0x76df50 二分定位（#135）
[ ] 收尾六件套（净增首行 / 抽样回归 / 对账 / 提交 / tag 重锚 / AGENTS 刷新）
```
