# G25 准备工作包（2026-09-20，G24 W0b 收尾波后续）

> 背景：G24 会话净增 +147（12,290 → 12,437）。D1-6 CPP 镜像落地（#128
> vtable 安装写豁免双侧对称）、转换器 v1.6 ml 漂移防护（mbn 交叉校验 +
> q<HEX> 双侧播种）、数字开头名两件清偿（Palette/Vector）。W0b 主矿脉
> （gap2 verbatim 转换）已榨干：全部 14 个 gap2 TU 复扫后剩余 marker 均为
> goto/no_def/regparam/mlq_conflict 四类结构性阻塞。

## G24 终态口径

| 指标 | 值 |
|---|---|
| completed | **12,437**（signals MCP 口径，全部带 G24 注记） |
| 会话净增 | **+147** |
| 转换/验证 | wdt 4/4 + core 8/8 + core_2 21/22 + misc 17 + structure 14/18 + system 77/92 |
| 回归 | W0 抽样 22/25（3 FAIL→根因修复全族转 PASS）+ 中段 40/40 + 终段 40/40 |
| 遗留 issue | #132（FAIL 分诊账 21 件）/#133（mlq_conflict 6 件） |

## G25 工作分解（按优先级）

### 1. #133 mlq_conflict 对账（0.5 波，预期 +6-10）

mbn[cls] q<HEX> 名挂错偏移（旧播种格式混淆嫌疑）→ 对账
`q 名蕴含偏移 vs mbn 实挂偏移`，错位条目清理 → 重跑
`.omo/g24_w0b_drive.py src/system/gap2_defs.cpp all` 即收。
涉及：0x52af50 0x52b080 0x52b570 0x567110 0x56b5a0 0x56c020。

### 2. H6 ternary 专项（B4 线，#132 A 族 14 件 + G23 存量 ~30 件）

形态定谳：IDA 写块 `WRITE×2` 合一 vs cpp 三块分裂（0x588990 实证）——
IDA 伪码 `cond ? a : b` 双写或顺序双写在 CFG 合并，转换体按 if/else
展开致块签名错位。处理路径：转换器识别双写合并形态 → 保持顺序双写
（非分支）输出；或 H6 手动范式逐件。STEP3(0) OK 的 5 件
（0x435be0/0x4fae50/0x4faf00/0x674000/0x5d6c70）优先（无缺失事件，
纯形状）。

### 3. B 族词汇缺口（#132 B，转换器 v1.7）

- `(*(_DWORD *)*this + N))(*this)` 双重解引用派发（0x5233d0）——
  扩展 convert_dispatches 接收者白名单 + args 以 `*this` 起头分支；
- 0x7ae5d0 CALL(vfptr+0) 形态定位（cache 内无显式 +0 派发行，
  可能为 `*this` 直接调用形态，待 verbose 定位）。

### 4. B5 #56 签名再物化（65 函数，gen_e4_materialize 补参）

G24 未动（配额已被 W0b 扩容占用）。G25 优先级提升为首位批量线候选。

### 5. no_def 重生成（裁决 1b 迁类桶）

gap2 全 TU no_def ~46 块（system 14 + ui 6 + house 2 + 新 TU 5 + …）
——需 gen_gap2_defs.py 重生成 def（ECX this 补参，裁决 1a 已定谳
未实施）。独立工程，G25 评估。

## 快速验收清单

```
[ ] curl :13337 探测
[ ] W0 复跑 G24 标记 147 件抽样 25（防漂移）
[ ] #133 对账 + system 重跑
[ ] H6 ternary 试点（0x588990 单件破形）
[ ] B 线择一（#56 再物化 / v1.7 双解引用派发）
[ ] 收尾六件套（净增首行 / 抽样回归 / 对账 / 提交 / tag 重锚 / AGENTS 刷新）
```
