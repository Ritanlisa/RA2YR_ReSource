## 目标
修复 `ra2-translate` 的 `rename_symbol`，使包含 `::` 的 C++ 限定名始终作为一个完整参数处理，并防止宽泛替换、索引残留和部分成功后的静默不一致。

## 实施步骤

1. **加 rename 预检层**
   - 在 `tools/rename_symbol.py` 增加统一的名称校验与变更计划生成。
   - `::`、`~`、模板符号等合法 C++ 名称字符作为名称内容保留，禁止任何 `split(':')` 类逻辑。
   - 拒绝空名、控制字符、`old_name == new_name`。
   - 对裸类名/裸短名的多命中情况给出明确拒绝或要求使用限定名，防止再次出现 `BuildingClass → SelectWeaponSlot` 这种数百处误替换。
   - dry-run 先生成完整变更清单；发现替换数量异常、名称冲突或多个不同实体时，不执行任何写入。

2. **修复源码替换边界**
   - 把当前通用 `\b...\b` 替换改为适合 C++ 符号的精确边界处理。
   - 对 `Class::Method` 做完整字符串匹配，避免把限定名嵌入其他限定名或把裸类名替换进类型、模板、成员声明。
   - 保留类内声明的正确形式：限定名 rename 应能同步类外定义、类内裸声明和调用点，但不把 `Class::` 前缀注入类内声明。

3. **完善 canonical/derived 数据同步**
   - `signals.json`：同步 `symbols`、`_by_name`，并正确处理顶层 `globals` 的 name→address 形态。
   - 成员 rename 时同步 `signals.classes` 的 `ida_name` 和 `_member_by_name`，同时保留 class、offset、type、继承元信息。
   - 同步 `tools/member_lookup.json` 与 `tools/ida_name_index.json`。
   - 对新名称已存在的情况做地址/类型冲突检查；只有同一实体的索引合并，禁止静默覆盖不同地址。
   - 保持 JSON 输出的仓库规范（`indent=2`、LF），避免 rename 造成整文件格式漂移。

4. **改为可验证的事务式执行**
   - 预检阶段读取并计算所有修改，正式阶段先写临时文件，再原子替换目标文件。
   - 任一 canonical 数据更新失败时返回非零并保留可恢复的 debt，不让 MCP 报告“成功”而实际只更新了一部分。
   - `--no-ida` 继续记录明确的 rename debt；IDA rename 与 `idb_save` 的结果纳入返回状态。
   - 保留现有 `rename_debt.json` replay 机制。

5. **改进 MCP 返回契约**
   - `tools/mcp_translate_server.py` 的 `tool_rename_symbol()` 解析脚本结果并返回结构化字段：`ok`、`exit`、源码替换数、signals/index/member/IDA 更新数、冲突/债务信息。
   - 子进程非零、预检拒绝或部分失败时让 MCP 响应带 `isError=true`，不能只返回协议层成功。
   - MCP 继续使用 argv 列表传参，并显式测试 `::` 参数不会被重新拼接或拆分。
   - 为 `member_lookup` 增加 mtime 缓存失效，确保同一个常驻 MCP 进程在 rename 后读取到新成员名。

6. **增加隔离回归测试**
   - 新增不修改真实仓库数据的临时 fixture 测试，覆盖：
     - `BuildingClass::OldMethod → BuildingClass::NewMethod` dry-run：所有文件/JSON/debt hash 不变；
     - 正式 `--no-ida`：限定名完整保留、类内声明不被注入限定前缀、旧名消失、新名出现；
     - `_by_name`、顶层 globals、classes、`_member_by_name`、member_lookup、ida_name_index 全部同步；
     - 新名称碰撞、裸名多命中、old 不存在、old==new、前缀/后缀相似名；
     - IDA mock 成功、失败、idb_save 失败和 debt replay；
     - MCP wrapper 检查 exit、`ok` 和 `isError`，而不是只检查工具调用是否返回。
   - 扩展 `mcp_translate_smoke.py --heavy` 使用真实含 `::` 的 dry-run 探针。

7. **验证与文档**
   - 运行 rename 回归、MCP smoke、`audit_consistency.py`、signals/_by_name 一致性检查和受影响 TU 的单文件构建。
   - 更新 `docs/mcp_tools.md`，明确 `::` 是合法参数内容、dry-run/冲突拒绝/事务返回语义和测试方式。
   - 更新 `docs/roadmap_post_csp.md` 执行日志，记录修复前因、修复范围及验证结果。

## 预期结果
- `rename_symbol` 不再可能因 `::` 被拆分而执行类级灾难替换。
- 真实限定名 rename 具有可审计的变更数量、冲突保护和完整索引同步。
- MCP 能区分“协议调用成功”和“rename 实际成功”，失败不会静默污染仓库。