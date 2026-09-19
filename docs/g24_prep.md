# G24 准备工作包（2026-09-20，W0b 工业化收割后续）

> 背景：G23 会话（2026-09-19/20）将 W0b _gap2 verbatim 转换从手工配方
> 工业化为 `​.omo/g23_gap2_convert.py`（转换器 v1.4），跨七个 gap2 TU
> 批量收割 **+432**（11,858 → 12,290），单会话净增为 G18-G23 六会话之最
> （此前四会话 +16、G22 +138）。W0b 管线本身已无技术阻塞。

## G23 终态口径

| 指标 | 值 |
|---|---|
| completed | **12,290**（signals MCP 口径） |
| 会话净增 | **+432** |
| 转换/验证 | converted 433 / PASS 432 / 抽样回归 25/25 + 假完成复发 2 件已重转修复 |
| gap2 七 TU 剩余 pending | **450** marker 块（goto ~170 / FAIL 类 ~130 / no_def ~15 / 尾部未入清单 ~54） |
| tag | auto-fill-baseline → 17047f69（两度重锚） |

## 转换器 v1.4 配方（.omo/g23_gap2_convert.py，可复用）

```
--file <tu> <lo> <hi>   任意 gap2 形态 TU（内联 pending-marker 清单）
1. cache 伪码剥 /*0xADDR*/ + 声明行尾注
2. this 相对访问 → this->M<off>（合成类）/ this->q<HEX>（真类，H6 中性名）
   —— 正则/缩放 import 验证器本体（_IDA_* + _cast_byte_off + detect_this_type）
3. MEMORY[0xADDR]/dword__ADDR → 语义名（e4_globals 全库扫描）缺失补 DataGlobal_*+extern
4. `(*(CAST)(*(_DWORD *)this + N))(this[,rest])` → this->vt<N/4>(rest) + vtable_offsets 名键
5. vtable 安装写 verbatim 保留（裁决 6 豁免词汇，两侧对称静默）
6. 尾部闭合区整体归一（双 ns `} } }` 兼容）；def 行 `(` 守卫（=default 误配防）
```

失败四类（G23 实测）：goto 图同构（跳过）/ 名字歧义错配（验证器按名定位限制）/
ternary CFG 形状差（H6 专项）/ 局部接收者虚派发（词汇缺口）。

## G24 工作分解（按优先级）

### 1. W0b 收尾波（0.5 会话，预期 +80-120）

- `_gap2` 尾部 54 块（在 gap2host_blocks.json 清单内但属其他形态）＋
  七 TU 剩余 FAIL 件逐件归因（goto 永久跳过定谳除外）；
- system/gap2 201 剩余 = goto 30 + FAIL 22 + nodef——FAIL 件按 G23 四类分诊。

### 2. B 线续推（每会话 ≥1 条批量线配额维持）

- **B2 P3 vtable 审计**：G21 bonus 0x6FC0B0 GetFireError 族普查续查；
- **B5 C #56 签名再物化**（65 函数，gen_e4_materialize 补参）；
- **B4 H6 ternary**：G23 失败类中 ~30 件属此类，与转换器失败件合并处理。

### 3. 验证器词汇债（G23 新识别，记 D2 裁决包）

| # | 缺口 | 证据 | 提议 |
|---|---|---|---|
| V1 | 按名定位歧义 | Network_Init 0x540a80 错配 e4 真函数（blk 31>10） | find_cpp_function 优先 addr 注解定位（G12 已有 by_addr 回退，改优先级） |
| V2 | 局部接收者虚派发 | 0x5cb790 `(v+24)` 形态 IDA 发 CALL(vfptr+24) cpp 静默 | 与 #72 退化指针词汇族合并处理 |
| V3 | ternary 块形状 | 0x588960 blk 2>3 | H6 既有专项 |

### 4. 收尾六件套

净增计数入日志首行 / 抽样回归 / marker&completed 对账 / 提交 / tag 重锚 /
AGENTS 状态表刷新。

## 快速验收清单

```
[ ] curl :13337 探测
[ ] W0 复跑 G23 标记 432 件抽样 25（上会话末已全绿，防漂移）
[ ] W0b 收尾波（_gap2 尾 54 + FAIL 分诊）
[ ] B 线择一（P3 续查 / #56 再物化 / H6 ternary）
[ ] 收尾六件套
```
