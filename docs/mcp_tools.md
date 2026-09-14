# ra2-translate MCP 工具集

专用 MCP 服务器，覆盖逆向翻译工作流的全部机械化操作——**仅通过 MCP
即可完成端到端工作**（找待翻译函数 → 取上下文 → 就地翻译 → 编译验证
→ 成员访问审计 → CFG 校验 → 标记完成），外加批量重命名、
**IDA 地址一一对应注解维护**、错误追踪。

- 服务器：`tools/mcp_translate_server.py`（自包含，无第三方依赖；
  自实现 MCP stdio 协议——官方 mcp 2.0 SDK 的 dual-era 分发拒绝
  经典 tools/call 信封，故直接实现公开协议形态）
- 冒烟验证：`python tools/mcp_translate_smoke.py`（官方 SDK 客户端，
  22 工具全过；`--heavy` 附带 build/verify 重操作）

## 注册（ZCode / 任意 MCP 客户端）

**方式 A：stdio（标准，客户端自动拉起）**

```json
{
  "mcpServers": {
    "ra2-translate": {
      "command": "python",
      "args": ["D:\\RA2YR_ReSource\\tools\\mcp_translate_server.py"]
    }
  }
}
```

**方式 B：HTTP 常驻服务（已启动于 127.0.0.1:13399）**

启动命令（本会话已在后台运行）：

```bash
python tools/mcp_translate_server.py --http 13399
```

客户端配置（支持 url 型 MCP 的客户端）：

```json
{
  "mcpServers": {
    "ra2-translate": {
      "url": "http://127.0.0.1:13399/mcp"
    }
  }
}
```

- 健康检查：`GET http://127.0.0.1:13399/`
- 端点：`POST http://127.0.0.1:13399/mcp`（JSON-RPC 2.0，与 stdio 同一分发）
- ZCode 添加路径：设置 → MCP 服务器 → 添加（粘贴上述 JSON 之一）

服务器从自身路径推导项目根，无需 cwd。IDA 在线（127.0.0.1:13337）
时自动增强成员映射（til 权威布局）；离线时快照 + member_lookup 回退。

## IDA 连接状态检查（每次使用前强制，2026-09-14 用户指令）

IDA MCP（`127.0.0.1:13337`）的连接状态**非持久，IDA 可能无效**：
可能从离线变为在线，也可能从在线变为离线——任何时刻得出的"离线"
或"在线"结论都会过期。规则：

- **需要 IDA 的操作执行前，必须当场探测连接**：`curl -m 5 http://127.0.0.1:13337/`
  或一次短超时的廉价 MCP 调用。涉及操作：live 反编译 / get_context live 拉取 /
  til 权威成员布局 / rename_symbol IDA 同步 / 类型回写（mass_type/apply_sigs/t14 系）/
  idb_save / v4 截断块重建 / NOCACHE completed 复验。
- **不得以任何先前记录为据**——会话日志写"IDA 全程离线"（如 G9）只反映
  当时状态；同理，本会话早段探测到的"在线"不担保之后的调用仍在线。
- **在线**：立即使用 live 数据（til 为成员布局权威），并把结果落到本地
  （ida_cache 回填 / member_lookup 刷新 / idb_save），供后续离线会话消费；
  rename 走四方同步。
- **离线**：自动回退快照 + member_lookup（管线不中断）；rename 写
  `.omo/rename_debt.json` 记账，恢复连接后 `--replay-debt` 补同步；
  verify 使用 ida_cache（v4 播种可离线验证）；挂账项（截断块重建等）
  保持挂账，不臆造。

## 工具清单（22 个）

### 翻译流水线
| 工具 | 用途 |
|---|---|
| `list_pending(file_filter?, class_filter?, limit?)` | 列出待翻译函数（伪码标记索引；返回 target/函数/类/地址/伪码行数） |
| `next_batch(count?, strategy?)` | 下一批：core-small-first（核心类+小函数优先）或 file-order |
| `get_context(target)` | 翻译上下文：快照 Hex-Rays 伪码 + 成员偏移→名称映射（IDA til 优先，member_lookup 回退）+ signals 状态；BuildingTypeClass 3800 区段已按 til 对齐，不再作为坏区警告 |
| `replace_body(target, new_body, dry_run?)` | **就地替换伪码块为真 C++**；花括号平衡校验；若 new_body 首行为重复签名则自动剥离并回报 `stripped_signature`；替换后自动维护 `// 0xADDR` 注解 |
| `verify_function(target)` | exec-flow CFG 双射校验（PASS/FAIL + 缺失事件） |
| `mark_completed(target, note?)` | 验证通过后置 signals.json completed=true |
| `function_state(target)` | 函数状态：待翻译/completed/关联 issue |

### 重命名
| 工具 | 用途 |
|---|---|
| `rename_symbol(old, new, dry_run?, sync_ida?)` | 安全的 C++ 符号重命名：`::` 作为名称内容通过独立 argv/JSON 传递，不作批量分隔符；预检危险裸名/目标冲突；同步 src、signals 主表/_by_name/classes/_member_by_name、class_layouts、member_lookup、ida_name_index 与 IDA；返回结构化计数、exit/ok，失败由 MCP 标记 `isError`；IDA 离线写入 rename_debt |
| `rename_local(target, old, new, dry_run?)` | 函数作用域内局部变量重命名（词边界） |

### 编译与门控
| 工具 | 用途 |
|---|---|
| `build(scope, file?)` | scope=file 单 TU 秒级验证；scope=all 全项目（错误按文件分组） |
| `get_build_errors(file?)` | 最近构建日志的结构化错误 |
| `run_gates()` | 三重质量门控 |
| `audit_access(file?)` | 成员访问审计（地址+偏移违规，自动跳过伪码块） |

### IDA 地址一一对应（用户要求：函数/变量 ↔ 地址注释由 MCP 维护）
| 工具 | 用途 |
|---|---|
| `annotations_audit(file_filter?)` | 函数定义 `// 0xADDR` vs signals：缺失/地址不匹配/未知 三分类 |
| `annotations_fix(file_filter?, dry_run?)` | 批量补缺失注解（signals 名称→地址） |
| `globals_annotations_audit(file_filter?)` | 全局变量 `// data: 0xADDR` 对应审计（signals.globals 1,330 条） |
| `annotate_function(target, addr?)` | 单函数设置/修正注解（replace_body 自动调用） |
| `addr_lookup(name? / addr?)` | 函数/全局名 ↔ 地址双向查询 |

### 错误追踪
| 工具 | 用途 |
|---|---|
| `issues_add(description, target?, kind?)` | 记录 bug/debt/blocker/question |
| `issues_list(include_resolved?)` / `issues_resolve(id, resolution?)` | 列出/解决 |
| `stats()` | 总览：待翻译数/分布、completed、issue、最近构建错误 |

## 标准工作流（纯 MCP）

```
1. next_batch(count=10)                      # 取一批
2. get_context(target)                       # 伪码 + 成员映射 + 坏区警告
3. replace_body(target, 翻译体, dry_run=true) # 预览（若误带完整签名会自动剥离）
4. replace_body(target, 翻译体)              # 落盘（自动补 0xADDR 注解；签名行自动剥离）
5. build(scope=file, file=…)                 # 单 TU 秒级编译验证
6. audit_access(file=…)                      # -> 访问审计
7. verify_function(target)                   # CFG 校验
8. mark_completed(target, note)              # 通过后标记
9. 失败 → issues_add(…) 记录，get_build_errors(file=…) 定位
```

### 验证器与批处理注意事项（2026-09-08 二次会话增补）

- **对象表达式调用文法已补全**（issue #3/#12 清偿）：`obj.Method()` /
  `ptr->Method(...)` 经 `_strict_resolve_call` 严格唯一解析产生 CALL(0xADDR)；
  `((Type*)this)->X(...)` 按 this 分支（vtable 槽位优先，严格解析兜底）；
  跨对象调用**已知虚方法**（vtable_offsets 任一类占位）不发事件——与 IDA
  侧局部变量 vtable 派发的不可提取性对称。歧义裸名（如 AddRef）永不
  min-pick。
- **IDA 侧间接虚调用已可提取**（issue #9 清偿）：`(*(CAST)(expr + N))(...)`
  this 相关形态 → CALL(vfptr+N)；局部指针形态（`(*(_DWORD*)v1+N)`）仍排除。
- **verify 查找顺序**：函数名精确匹配优先，地址邻近启发式兜底（后者曾把
  0x7105E0 误定位到前一个函数体内的 ASM 注释块）。
- **离线伪码缓存注意**：`.omo/ida_cache/func_0x*.json` 必须来自 live IDA。
  例外（09-13 G7 会话确立）：**full_export v4 及之后的快照可以播种缓存**——
  v4 是 live 渲染（含全部 til 类型），已按缓存格式播种 17,270 条
  （`.omo` 内播种脚本，不覆盖既有 live 缓存）；旧警告针对 v2 前时代快照
  （裸偏移渲染制造假不匹配）。截断块（`[NNN chars total]`）不播种。
  无缓存函数在 IDA 回线后 `--save-ida`/live fetch 重验。
- `verify_execution_flow.py` 已支持 gap2 常见的单行 namespace 定义形态：
  `namespace gamemd { int Func(...) { ... }`；此前该形态会错误报告
  `C++ source: NOT FOUND`。
- `efv_cpp_events.py` 已排除函数定义签名被误识别为 PascalCase 自调用的情况；
  `Func(...) {` / `Func(...) const {` 不再生成伪造的 `CALL(Func)` 事件。
- 修改共享 verifier/event extractor 后，必须用退出码回归已 completed 函数
  （抽样回归先例：G5 119/120 PASS）。completed 池现约 10,350 个（G8 后），
  全量回归改抽样 + 按桶回归。
- MCP HTTP 常驻服务不会热加载 Python 源码。修改服务器后需重启服务；否则本地
  直跑结果与 HTTP 工具返回可能暂时不一致。
- `signals.json` 写回统一使用 `indent=2`，避免服务器写回产生整文件缩进漂移。
- `rename_symbol` 的 dry-run 会先输出 `Preflight` 和 `RENAME_RESULT`，不写源文件、JSON、debt 或 IDA；正式 rename 前必须确认限定名和 replacement 数量。
- 裸类名/多 owner 裸成员名会被拒绝，必须使用 `Class::Member`；目标名称若与不同地址的 canonical symbol/index 冲突也会被拒绝。
- 常驻 HTTP 服务按 `member_lookup.json` mtime 失效缓存；修改服务器源码后仍需重启服务，源码不会热加载。
- 隔离回归：`python tools/test_rename_symbol.py`；MCP heavy smoke 会验证真实含 `::` 的 dry-run。

## 地址对应现状（2026-09-14 G8 会话后）

- 函数注解审计：matched **9,831** / missing with known address **0** /
  addr mismatch **6**（同名函数地址歧义挂账，G9 波 2 记录）/ unknown in signals
  **1,706**（helper/别名形态，翻译时甄别）。
- 全局变量注解审计：annotated **13,582** / missing **0**。
  审计器已跳过 `[IDA decompile]` 伪码块、inline ASM 操作数，以及**已在别处
  有注解声明的同名命中**（G8 后两遍扫描——舰队译文体保留的 IDA 局部声明
  `CHAR Buffer[1024];` 影射已注解全局，无注解义务）。
- `signals.json` 当前 MCP completed **11,665** / pending **4,624**（G9 后）；
  `_by_name` 与主表函数名集合一致，0 missing / 0 extra / 0 name conflicts。
- `member_lookup.json` 1,304 类（G8 后）；BuildingTypeClass 3800 区段已按
  IDA til 重排，get_context 不再对该区段发出已知坏区警告。
- rename 引入的新定义缺注解可由 `annotations_fix`（默认 dry-run）一键补齐——
  09-08 的 33 个 + G8 波 1 的 18 个 bodies 定义注解即由此恢复。

## 数据源

| 源 | 用途 |
|---|---|
| `src/**.cpp` | 伪码标记索引（`[IDA decompile] original pseudocode` 行） |
| `decompile-results/full_export/` | 自包含快照（index.json + 伪码），离线可用 |
| `signals.json` | 函数元数据（completed）+ globals 地址表 |
| `tools/member_lookup.json` | 成员偏移回退（IDA 在线时以 til 为权威；BuildingTypeClass 3800 区段已完成对齐） |
| IDA MCP :13337 | til 权威成员布局（在线增强，2 级超时回退） |
| `.omo/mcp_translate_state.json` | issue 追踪状态 |
