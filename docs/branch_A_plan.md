# 分支甲计划：词汇·批量·解锁线（Branch A）

> 版本：2026-09-19 v1。**本文件自洽**——甲线执行者只需本文件 + AGENTS.md。
> 终止条件：甲名下全部桶 pending 归零（贡献 7,267 总量中的 ≈4,700+）。
> 姊妹分支：乙线（docs/branch_B_plan.md，语义·考古·核心线）——互不干扰契约见 §3。

## 0. 使命与总量

高吞吐引擎：所有不需要逐函数语义考古的工作。分摊量 ≈4,700+ 函数：

| 桶 | 数量 | 主阻塞因 |
|---|---|---|
| misc/misc_ext | 852 | 机械形态 + 词汇 |
| gap2 五件套 + _gap2 | ~1,460 | ✅W0b 已解锁 535；#55 类目 |
| e4 各桶 | ~1,900 | E1 全局命名 + CRT + stub |
| render/render_ext | 204 | 机械 |
| core/utility_ext_bodies | 132 | 机械 |
| ui/ui_ext + network/network_ext | 172 | 机械 |
| stub 池（无伪码 def，散布） | ~2,454 | 再物化 |
| CRT/OS glue | ~80 | 分治 |
| #56 无参签名 | 65 | 再物化 |

## 1. 文件所有权（独占写权——乙线不得写）

- `src/_gap2/**`、各模块 `gap2_defs.cpp`（生成器产物）
- `src/e4/**`、`src/misc/**`、`src/render/**`、`src/core/**`
- `src/_generated/**`、`e4_globals.hpp`
- `tools/efv_*.py`、`tools/verify_execution_flow.py`、`tools/gen_gap2_defs.py`、
  `tools/gen_e4_materialize*`、`tools/mcp_translate_server.py`
- `.omo/` 工具脚本（fleet/dry/normalize/暂存族）

**IDA 资源**：无头副本 `gamemd_extract_replica.i64`（idat 批提取）；主实例仅
同步点短暂使用。**读**乙线文件合法（写禁止）。

## 2. 共享资源协议

- `signals.json` / `tools/member_lookup.json`：改动**只写暂存**
  `.omo/branch_a_signals.json`；同步点一次性应用；应用窗口内乙不得写。
- commit 前缀 `[甲]`；tag 重锚在同步点。
- 跨分支阻塞打 `【需乙】` 标签（issue 台账）。

## 3. 阶段 A1-A7

### A1 — 验证器词汇收尾（≈1 会话）
- 已完成：trivial-stub 守卫 / vfptr-install 豁免 / do-while→for 镜像 /
  cache 归一 / OperatorDelete / blob 静默对称。
- 剩余：#114 下标/address-of 两型（dry 已做：下标 114 函数）——
  `efv_cpp_events` 补退化指针读事件 + 全池复跑零回归。
- 验收：#114 resolve；全池 PASS 维持。

### A2 — E1 全局命名轮 ×5 区（≈2 会话，解锁 ~355）
- 区域：0x884D58-0x8875xx / 0x87F538-0x87F7D8 / 0x87DE28-0x87E8xx /
  0x89ECF8-0x89F7xx / 杂项 + COM GUID(16)。三区为 BSS 运行时缓冲——
  xref 用途考古（G5 范式，idat 批提取）。
- 验收：#67-#71+#57+#129 全 resolve；e4_globals.hpp 生成器侧落盘。

### A3 — gap2 舰队波 ×N（≈4-6 会话，回收 ~800-1,200）
- 存量：W0b 解锁 535 + gap2 五件套 1,193。g5_fleet 直驱 +
  for-form/静默全局预处理 pass；每波 40-118；FAIL 回滚。
- 验收：gap2 五件套 + _gap2 归零。

### A4 — 机械 Fry 三线（≈2 会话，+150-350）
- H3r 精分类批产（G14 sigfix/defix）+ H6 ternary 逐形态算术化
  （每形态 20 块试点 PASS≥60%）+ #56 再物化 65。
- 验收：三线清零。

### A5 — CRT/COM 分治（≈1 会话）
- (b) 排除台账（inline-asm/x87/goto 类，**转账不是清零——M4 口径单列**）；
  (a) FILE/_iobuf/PMD/TypeDescriptor/CRT 全局定义管道 → 真翻。
- 验收：#20/#30-#37/#42/#63/#66 全 resolve。

### A6 — stub 池再物化（≈3-5 会话，~2,454）
- gen_e4_materialize 批量补参+补伪码 → 可翻者入舰队、纯 stub 台账化。
- 验收：signals 非完成 − marker 差值 → 0。

### A7 — 归零支持（≈1-2 会话）
- 甲名下桶全零后支援散布翻译 + 全池终验 + M4 口径核对。

## 4. 汇合点与门

- β 门：A1/A2/A3 首三波完成（合账 pending ≤3,500）
- γ 门：A4/A5 完成（合账 ≤1,800）
- δ 门：A6 stub 池归零 + 台账封账
- ε 门：甲段支持 D1-D4 对拍

## 5. 风险

- 舰队 FAIL-recycle：只在新词汇落地后直驱，波次净增入账。
- stub 再物化质量：每批抽验 verify；纯 stub 台账化不硬翻。
- 验证器改动：每次词汇变更全池复跑零回归才提交。
