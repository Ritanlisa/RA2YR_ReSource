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

服务器从自身路径推导项目根，无需 cwd。IDA 在线（127.0.0.1:13337）
时自动增强成员映射（til 权威布局）；离线时快照 + member_lookup 回退。

## 工具清单（22 个）

### 翻译流水线
| 工具 | 用途 |
|---|---|
| `list_pending(file_filter?, class_filter?, limit?)` | 列出待翻译函数（伪码标记索引；返回 target/函数/类/地址/伪码行数） |
| `next_batch(count?, strategy?)` | 下一批：core-small-first（核心类+小函数优先）或 file-order |
| `get_context(target)` | 翻译上下文：快照 Hex-Rays 伪码 + 成员偏移→名称映射（til 优先，标注 member_lookup 已知坏区）+ signals 状态 |
| `replace_body(target, new_body, dry_run?)` | **就地替换伪码块为真 C++**；花括号平衡校验；替换后自动维护 `// 0xADDR` 注解 |
| `verify_function(target)` | exec-flow CFG 双射校验（PASS/FAIL + 缺失事件） |
| `mark_completed(target, note?)` | 验证通过后置 signals.json completed=true |
| `function_state(target)` | 函数状态：待翻译/completed/关联 issue |

### 重命名
| 工具 | 用途 |
|---|---|
| `rename_symbol(old, new, dry_run?, sync_ida?)` | 四方批量重命名（src + signals + member_lookup + IDA），包装 tools/rename_symbol.py |
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
3. replace_body(target, 翻译体, dry_run=true) # 预览
4. replace_body(target, 翻译体)              # 落盘（自动补 0xADDR 注解）
5. build(scope=file, file=…)                 # 单 TU 秒级编译验证
6. audit_access(file=…)                      # -> 访问审计
7. verify_function(target)                   # CFG 校验
8. mark_completed(target, note)              # 通过后标记
9. 失败 → issues_add(…) 记录，get_build_errors(file=…) 定位
```

## 地址对应现状（2026-09-06 初始化）

- `annotations_fix` 已全量补齐 **2,689** 条函数注解：
  matched **3,313** / missing **0** / mismatch **7**（真实差异待审）/
  unknown 2,085（signals 无此函数名——helper/别名形态，翻译时甄别）
- 全局变量注解：annotated 1,034 / missing 22

## 数据源

| 源 | 用途 |
|---|---|
| `src/**.cpp` | 伪码标记索引（`[IDA decompile] original pseudocode` 行） |
| `decompile-results/full_export/` | 自包含快照（index.json + 伪码），离线可用 |
| `signals.json` | 函数元数据（completed）+ globals 地址表 |
| `tools/member_lookup.json` | 成员偏移回退（KNOWN_BAD 区段自动警告） |
| IDA MCP :13337 | til 权威成员布局（在线增强，2 级超时回退） |
| `.omo/mcp_translate_state.json` | issue 追踪状态 |
