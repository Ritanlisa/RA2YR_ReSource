# G27 准备工作包（2026-09-20，G26 收尾时创建）

> 承接：第 6 步 RA2MCP 阶段首轮（docs/mech_rebuild_plan.md
> 「第 6 步 RA2MCP 阶段执行记录」）。基线：completed **12,856**，
> pending **3,979**，tag `auto-fill-baseline`（HEAD 6502f94d 之后重锚）。

## G26 会话教训（先读）

1. **偏离计划的代价**：G26 中段曾复活 G23 旧转换器直改旧树（Wave A）+
   对 bodyless 函数跑收割，产生半成品与假完成风险——全部回退 HEAD 后按
   计划第 6 步 RA2MCP 循环重做。**后续会话不要 resurrect 旧管线；
   一切经 RA2MCP 工具循环。**
2. **收割脚本盲区**：g25_pending_reverify.py 选目标是"全部 completed=false
   符号"，对无体函数（downgrade/no-cls 账）verify 仍可 PASS（机理未定界，
   疑 STEP3(0) 盲点族）→ 已停、检查点 `.omo/g25_reverify_results.json`
   已删。**重启前必须先定界**。
3. **G26 机制结论**（已实证，直接复用）：
   - 翻译前用验证器同源 `detect_this_type + _this_mult` 算偏移
     （get_context member_map 对 `_BYTE *this` 缩放错 → #136）；
   - 缺失成员 ml+mbn 双侧注册（`.omo/g26_member_check.py --reg`，
     q<HEX> 中性名 + 显式 size）；
   - 链式访问 `this->ptrMember->field` 靠 ml 条目 `type` 字段解析；
   - replace_body 用 `0xADDR` 形态顺序执行（file:line 并行会因行位移失配）；
   - `Errno 22 Invalid argument` 为瞬时文件锁，重试即可。

## G27 工作分解（按优先级）

### 1. hpp 声明补齐（解锁编译）

G26 注册的 17 条 q 名成员（TechnoClass q5C4/q5D1/q6C0/q6C4/q610/q204/q6E1/
q6E2、BuildingClass q520/q694、UnitTypeClass qEC8/qE1B、BuildingTypeClass
q1524/q1528/q152C、InfantryTypeClass qEC8——全清单见
`tools/member_lookup.json` 各类新增条目）尚无 hpp 声明。经 IDA→header
pipeline 补进 `src/object/techno.hpp` / `src/structure/building.hpp` /
`src/type/*_type.hpp`（类型取 ml 条目 `type` 字段；布局偏移即注释）。
完成后 file build techno.cpp/building.cpp，验证翻译函数进入编译。

### 2. RA2MCP 循环批量化（pending 3,979 → 0 的主通道）

保持 RA2MCP 循环语义，批量化驱动：`next_batch(core-small-first, 20)` →
并行 get_context → 逐件翻译（语义名/小驼峰局部）→ 顺序 replace_body(0xADDR)
→ 并行 verify_function → mark_completed。规模分布（G26 实测索引
`.omo/fleet_index.json`）：琐碎 ≤10 行 552 / 小 11-30 行 726 / 中 31-80 行
1,229 / 大 81-200 行 1,015 / 超大 >200 行 469（CRT/库）。
**吞吐纪律：日志首行净增 completed，单会话 <15 归因。**
建议顺序：core-small-first（TechnoClass/BuildingClass 桶已开头）→
e4 桶 → gap2/超大 CRT 桶（最后，多为库函数可考虑 verbatim 策略另议）。

### 3. 命名轮（用户要求的小驼峰语义命名）

- G26 挂起的 5 项语义发现复核（mech_rebuild_plan.md 语义发现表）：
  GetTarget/GetID/HasPassengers 的 IDA 名疑错——用 vtable 槽位证据
  （vtable_offsets.json + RTTI 表）定谳后 `rename_symbol` 四方同步。
- q<HEX> 中性名语义升级：每译一批，凡含义明确者即行
  `rename_symbol.py Old New`（dry-run 先行；小驼峰；成员名按树内惯例
  PascalCase 也可，与 YRpp 对齐优先）。
- ml airstrikeTimer@432 矛盾仲裁（ctor 写图法，G16 范式）。

### 4. 收割机理审计（防假完成复发）

定界 verify_execution_flow.py 对无注册体函数的 PASS 路径（raw_decomp？
_return 退化？STEP3(0)？），修正 g25_pending_reverify.py 的目标筛选
（只取有体 pending），再重启收割。

### 5. 签名缺口补锚（mech 计划边界 3）

downgrade 4,875 + no-cls 2,256：CSP 增量求解器
（`python -m tools.type_infer.incremental 0xADDR`）逐桶补锚 →
锚定后走第 6 步回填/RA2MCP 循环。配合 #135（0x708c10 出参签名）类
个案修复。

## 快速验收清单

```
[ ] curl :13337 探测（IDA 相关操作前）
[ ] hpp 声明补齐 + file build techno.cpp/building.cpp 无新增错误
[ ] 批量翻译 ≥2 波，日志首行净增 completed
[ ] 命名轮：5 项发现定谳 + 当批 q 名升级
[ ] 收割机理定界结论入档（issue 或 docs）
[ ] 收尾六件套（净增首行 / 抽样回归 / 对账 / 提交 / tag 重锚 / AGENTS 刷新）
```
