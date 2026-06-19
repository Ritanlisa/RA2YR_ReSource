# 函数精确匹配计划 — IDA 多方验证 + 统一命名

## TL;DR

> **核心目标**: 为全部 1,735 个 hpp 声明找到 IDA 中对应函数，通过签名+调用链+git历史三向验证，确认后更新 IDA 命名、hpp 地址注释、functions.json。目标 100% 匹配。
>
> **产出物**:
> - 1,735 个函数全部匹配（HIGH 自动 + MEDIUM 人工确认 + 无法匹配的明确标记原因）
> - IDA 中对应函数名更新为规范格式
> - hpp 地址注释 100% 覆盖
> - functions.json translated 更新

**并行执行**: YES — 工具先行后批量验证，最多 3 个验证器并行
**关键路径**: T1（提取）→ T2（签名匹配）→ T3（调用链匹配）→ T4（git 匹配）→ T5（交叉验证）→ T6（批量更新）

---

## Context

### 当前状态
- 1,735 个 hpp 函数声明无地址注释
- functions.json: 19,067 条目，named=13,437，translated=1,657，sub_*=5,459
- IDA 中有 13,573 个已命名函数，但命名可能使用旧格式（早期命名 vs 当前规范）
- git 历史中有 15+ 次命名相关的 commit，记录了命名演变

### 核心挑战
函数在 hpp 中的声明名 ≠ IDA 中的函数名 ≠ functions.json 中的 name 字段，三者可能完全不同。原因：
1. **IDA 命名演化**: 早期会话用 `ModuleName_FunctionName`，后来统一为 `ClassName::MethodName`
2. **functions.json 再生**: `ida_extract.py` 多次重跑，中间可能丢失手动命名
3. **hpp 命名独立演进**: hpp 文件在会话中独立修改，可能与 IDA 不同步

### 匹配策略（按可靠性排序）
1. **函数签名**: 参数类型+数量+返回值 → 但 thiscall 在 IDA 中以 `this` 为第一参数
2. **调用链**: 被调用函数名 + 调用者上下文 → 最可靠（函数改名前调用关系不变）
3. **git 历史**: 之前的命名 commit → 可追溯旧名→新名的演变
4. **地址范围**: 类成员函数通常在类 vtable 附近 → 缩小搜索范围

---

## Work Objectives

### Core Objective
为 1,735 个未匹配的 hpp 函数声明找到 IDA 中对应函数，多方验证确认同一函数后，统一更新 IDA 命名、hpp 地址注释、functions.json。

### Concrete Deliverables
- `tools/ida_match_engine.py` — 多策略匹配引擎
- `tools/ida_match_results.json` — 匹配结果（含置信度）
- 更新后的 hpp 文件 — 补充地址注释
- 更新后的 IDA 命名 — 统一为 ClassName::MethodName 格式
- 更新后的 functions.json — translated 增加

### Definition of Done
- [ ] 1,735 个函数全部处理：匹配成功 或 标记为"无法匹配"并注明原因
- [ ] 匹配成功数 ≥ 1,200（至少 70% 可自动/半自动匹配）
- [ ] 每个匹配至少 2 个独立策略确认
- [ ] 0 个误匹配
- [ ] 无法匹配的函数分类记录：纯虚函数、编译器生成、已被优化掉、待解编译
- [ ] hpp 地址注释 100% 覆盖（匹配成功有地址，无法匹配标记 `// IDA: UNMATCHED`）
- [ ] IDA 命名已更新并 idb_save
- [ ] functions.json translated 更新
- [ ] `cmake --build build_win` → 0 errors

### Must Have
- 每个匹配至少 2 个独立验证策略通过
- 100% hpp 函数声明有地址注释 或 有明确的不匹配原因标记
- IDA 命名统一为 ClassName::MethodName（成员）或 PascalCase（全局）
- functions.json name 字段同步更新

### Must NOT Have
- **绝不允许**未经确认的匹配（宁可漏匹，不可误匹）
- 不修改函数签名
- 不覆盖已有的正确 IDA 命名

---

## Verification Strategy

### 匹配置信度标准

| 置信度 | 条件 | 行动 | 回滚 |
|--------|------|------|------|
| **HIGH** | 调用链匹配 + (签名匹配 或 git 历史) | 自动更新 IDA/hpp/functions.json | git revert + IDA restore |
| **MEDIUM** | 调用链匹配仅单独，或签名+git 但无调用链 | 记录到 review 列表，暂不自动应用 | N/A |
| **LOW** | 仅签名匹配，或仅 git 历史 | 不更新，记录待查 | N/A |
| **CONFLICT** | 两个策略指向不同 IDA 函数 | 记录冲突，降低为 MEDIUM，人工审查 | N/A |
| **UNMATCHABLE** | 所有策略均无信号 | 标记 `// IDA: UNMATCHED — {原因}` | N/A |

### 策略可靠性排序（冲突时以此为准）
1. **调用链匹配**（最可靠）— 函数改名不影响调用关系
2. **Git 历史匹配**（可靠）— 曾用名可直接定位
3. **签名匹配**（辅助）— thiscall 差异、IDA 类型推断不完整

### 无法匹配的分类原因
| 原因 | 标记 | 示例 |
|------|------|------|
| 纯虚函数 | `// IDA: UNMATCHED — pure virtual` | `virtual void Foo() = 0;` |
| 编译器生成 | `// IDA: UNMATCHED — compiler-generated` | 默认构造/析构、copy assign |
| 已被优化掉 | `// IDA: UNMATCHED — optimized out` | 空 inline，编译器内联 |
| IDA 未识别 | `// IDA: UNMATCHED — not in IDA` | 函数在二进制中但 IDA 未反编译 |
| 多候选冲突 | `// IDA: UNMATCHED — ambiguous: {candidates}` | 多个 IDA 函数签名相同 |

---

### 特殊函数处理

| 类型 | IDA 中常见名 | 匹配方式 |
|------|-------------|---------|
| 构造函数 | `ClassName::ClassName`, `ctor`, `Ctor` | 匹配类名 + 无返回值 + 在 vtable 之前 |
| 析构函数 | `~ClassName`, `dtor`, `DTOR`, `SDDTOR` | 匹配 `~` 前缀 + 无返回值 |
| operator= | `operator=`, `op_assign` | 签名：ref 参数 + ref 返回 |
| operator new/delete | `new`, `delete`, `scalar deleting dtor` | IDA 特殊标记 |
| thunk/trampoline | `Thunk_`, `j_` 前缀 | 编译器生成 — 跳过不匹配 |

### 回滚机制

每次批量更新前自动备份：
1. **functions.json**: `cp → functions.json.bak.{timestamp}`
2. **IDA**: `idb_save` 保存，git 跟踪 .i64 文件
3. **hpp**: `cp -r src/ tools/backups/src/`

回滚：
```bash
cp functions.json.bak.{ts} injectFunctionTest/functions.json
cp -r tools/backups/src/* src/
# IDA: 从 git 回退 .i64 文件
```

### 重命名后验证

批量更新后运行调用图完整性检查：
- renamed 函数的 callees 地址仍有效
- 其他函数的 callers 列表中 renamed 函数不丢失
- 0 个 dangling reference

---

## Execution Strategy

```
Wave 1 (信息提取):
├── Task 1: 提取 1,735 个缺失函数的详细信息 [quick]
└── Task 2: 从 IDA 提取所有函数的签名+调用链信息 [deep]

Wave 2 (多策略匹配):
├── Task 3: 签名匹配 — 参数类型/数量/返回值比对 [deep]
├── Task 4: 调用链匹配 — 被调函数名+调用者上下文 [deep]
└── Task 5: git 历史匹配 — 追溯命名演变 [quick]

Wave 3 (验证 + 更新):
├── Task 6: 交叉验证 — 多信号一致性确认 [deep]
└── Task 7: 批量更新 — IDA 命名 + hpp 地址 + functions.json [quick]
```

### Agent Dispatch
- Wave 1: T1 → `quick`, T2 → `deep`（并行）
- Wave 2: T3-T5 → `deep`（并行，不同策略独立）
- Wave 3: T6 → `deep`, T7 → `quick`（串行，T6→T7）

---

## TODOs

- [x] 1. 提取缺失函数清单

  **What to do**:
  - 从 normalize_addresses.py --check 输出中提取 1,735 个缺失地址的函数
  - 对每个函数记录：hpp 文件路径、类名、方法名、完整签名、是否为 virtual/static/override
  - 输出 `tools/missing_functions.json`: [{file, class, method, signature, is_virtual, is_static}]
  - 同时收集已匹配函数（有地址注释的）作为正样本对照

  **QA**: missing_functions.json 条目数 = 1,735

  **Commit**: `feat(tools): extract 1735 missing function declarations`

- [x] 2. 从 IDA 提取完整函数信息

  **What to do**:
  - 通过 IDA MCP 批量导出:
    1. 所有已命名函数的签名（参数类型+数量+返回值）
    2. 每个函数的调用链（callees + callers，各 20 个）
    3. 函数地址和所属段
  - 特殊处理 thiscall：IDA 中 this 指针是第一个参数（ecx），需要标注
  - 保存为 `tools/ida_function_db.json`：{addr: {name, signature, callees[], callers[], segment}}
  - 索引构建：按函数名、按 callee 名、按 caller 名

  **QA**: ida_function_db.json 条目数 ≥ 13,000

  **Commit**: `feat(ida): export full function signatures + call graphs`

- [x] 3. 签名匹配

  **What to do**:
  - 对每个缺失函数，从 hpp 签名提取参数个数和类型信息
  - 在 IDA 函数库中比对：
    1. 参数个数匹配
    2. 参数类型模糊匹配（int→_DWORD, void*→PVOID, bool→BOOL 等 MSVC 类型映射）
    3. 返回值类型匹配
    4. thiscall 特殊处理：IDA 签名比 hpp 多一个参数（this）
  - 在同类/同模块函数中优先搜索（缩小范围）
  - 输出候选列表：{hpp_func → [{ida_addr, confidence, reason}]}

  **Must NOT**: 仅凭签名匹配就确认（签名可能被误识别）

  **QA**: 候选匹配数 ≥ 800

  **Commit**: `feat(match): signature-based candidate matching`

- [x] 4. 调用链匹配

  **What to do**:
  - 对每个缺失函数，分析 hpp 中同类/同模块的其他已匹配函数（有地址的）
  - 从已匹配函数的 IDA 调用关系中推断：谁调用了缺失函数？缺失函数调用了谁？
  - 在 IDA 调用图中搜索匹配的调用模式
  - 对每个 hpp 类：已知成员函数 A(@0xAddrA) 调用了 B，在 IDA 中 A 的 callees 里找未命名函数 → 可能就是未匹配的 B
  - 调用链比签名更可靠——函数改名不影响调用关系

  **QA**: 调用链匹配数 ≥ 500

  **Commit**: `feat(match): call-graph-based candidate matching`

- [x] 5. git 历史匹配

  **What to do**:
  - 扫描 git log 中的命名相关 commit（关键词：rename, 命名, batch_name, IDA rename）
  - 提取每次命名的旧名→新名映射
  - 构建 `tools/git_name_history.json`: {new_name: [old_names], old_name: [new_names]}
  - 对缺失函数，查找是否曾被命名过（旧名存在但 functions.json 中已丢失）
  - 特别关注: ff192fd (822 sub_* batch), cf8c19f (函数命名规范全面修复), 025b8ad (DetectProcessorType 等重命名)

  **QA**: git_name_history.json 条目数 ≥ 200

  **Commit**: `feat(match): git history name evolution tracking`

- [x] 6. 交叉验证 + 确认

  **What to do**:
  - 合并 T3+T4+T5 的候选匹配，对每个 hpp 函数汇总所有信号
  - 分配置信度：
    - HIGH: 签名 + 调用链 都匹配 → 自动接受
    - MEDIUM: 调用链匹配 或 签名+git → 标记待确认
    - LOW: 仅单个弱信号 → 丢弃
    - CONFLICT: 多个候选不互斥 → 人工审查
  - 生成最终匹配清单 `tools/ida_match_results.json`
  - 对 HIGH 置信度的匹配：验证函数体逻辑是否合理（抽查 10%）
  - 对 MEDIUM 的：输出待确认列表

  **Must NOT**: HIGH 置信度也不能 100% 自动——至少抽查验证

  **QA**: HIGH 置信度匹配 ≥ 600, 抽查全部通过

  **Commit**: `feat(verify): cross-validate all matches + confidence scoring`

- [x] 7. 批量更新 IDA + hpp + functions.json

  **What to do**:
  - 对 HIGH 置信度匹配：
    1. **IDA**: `ida-pro-mcp_rename` 更新函数名（统一 ClassName::MethodName 格式）
    2. **hpp**: 添加 `// 0xADDR` 地址注释到函数声明行
    3. **functions.json**: `name` 字段同步，`translated=true`
  - 对 MEDIUM 匹配：仅记录到文件，不自动应用
  - 运行 `idb_save` 持久化 IDA 修改
  - 运行 `tools/normalize_addresses.py --match` 更新 translated 计数
  - 验证: `python tools/normalize_addresses.py --check` → missing_address 显著减少

  **QA**: missing_address ≤ 800, translated ≥ 2,200

  **Commit**: `feat: apply verified matches — IDA rename + hpp address + translated update`

---

## Commit Strategy

| Wave | Message |
|------|---------|
| 1 | `feat(tools): extract missing functions + IDA function database` |
| 2 | `feat(match): signature + call-graph + git-history matching` |
| 3 | `feat(verify+apply): cross-validate matches + batch update IDA/hpp/functions.json` |

---

## Success Criteria

```bash
# Missing addresses eliminated
python tools/normalize_addresses.py --check
# Expected: missing_address = 0（全部匹配或标记为 UNMATCHED）

# Translated count increased
python -c "import json; d=json.load(open('injectFunctionTest/functions.json',encoding='utf-8')); print(sum(1 for f in d['functions'] if f['hook'].get('translated')))"
# Expected: ≥ 2800

# Build unaffected
cmake --build build_win --target gamemd_core
# Expected: 0 errors from modified files
```
