# 从 IDA 重写 hpp 声明 — 建立 1:1 映射

## TL;DR

> **核心目标**: 以 IDA 为权威数据源，重写所有 hpp 函数声明 + 更新 functions.json，使 IDA ↔ hpp ↔ functions.json 三者完全一一对应。
>
> **产出物**:
> - 所有 hpp 声明与 IDA 函数 1:1 对应，地址注释完整
> - functions.json name 字段与 IDA 同步
> - 后续只需实现函数体，不需新增定义

**并行执行**: YES — T1 提取后按类批量并行重写

---

## Context

### 现状
- **226 HIGH** — 已验证匹配，保留不动
- **2,605 非 HIGH** — 重写目标（MEDIUM 432 + LOW 1,057 + CONFLICT 254 + UNMATCHABLE 862）
- IDA: 13,422 命名 + 5,459 sub_*，每个函数有签名和地址
- functions.json: 19,067 条目（含 CRT/thunks）

### 核心逻辑
类 X 在 IDA 中有 N 个成员函数 → hpp 中应有相同的 N 个声明。IDA 是权威源——不是匹配旧声明，而是直接从 IDA 重新生成声明然后替换。

---

## Work Objectives

### Core Objective
以 IDA 为权威数据源，重写 hpp 函数声明，使 IDA 中每个游戏函数在 hpp 中有对应的规范声明，hpp 中每个函数声明对应 IDA 中一个函数。建立严格的 1:1 映射。

### Concrete Deliverables
- `tools/ida_rewrite.py` — 主工具
- 更新后的 hpp 文件 — 所有声明与 IDA 一致
- 更新后的 functions.json — name 字段同步
- `cmake --build build_win` → 0 errors

### Definition of Done
- [ ] IDA 中每个命名函数在 hpp 有对应声明（排除 CRT/thunks）
- [ ] hpp 中每个函数声明对应 IDA 中一个函数（NOT_FOUND = 0）
- [ ] 所有声明格式统一：`ReturnType MethodName(params);  // 0xADDR`
- [ ] functions.json name 与 IDA 一致
- [ ] `cmake --build build_win` → 0 errors

### Must Have
- IDA 为权威源，hpp 声明从 IDA 生成
- 226 HIGH 声明保留不动
- 2,605 非 HIGH → 从 IDA 重写
- sub_* 函数 → 生成声明到对应类或全局文件
- 格式统一: `// 0xADDR` 大写十六进制

### Must NOT Have
- **禁止**: 删除 226 HIGH 声明
- **禁止**: 修改已有 REVERSE 标记的函数
- **禁止**: 修改 menu_globals_gen.cpp（生成文件）
- **禁止**: 包含 CRT/thunks（crt_exclusions.json）
- **禁止**: 重写时不保留地址注释

---

## Verification Strategy

每批次后：
- `cmake --build build_win` → 0 errors
- `python tools/normalize_addresses.py --check` → missing_address = 0
- 抽查 20 个声明：hpp 地址 → IDA 函数名一致

---

## Execution Strategy

```
T1: 从 IDA 按类导出成员函数清单 → tools/ida_class_members.json
T2: 生成重写工具 → tools/ida_rewrite.py (analyze + generate + apply)
T3: 按类批量重写 hpp 声明（串行，每类完成后验证编译）
T4: 更新 functions.json 同步 name 字段
T5: 全量编译验证 + 修复
```

### Agent Dispatch
- T1: `deep`（IDA 批量导出）
- T2: `deep`（工具开发）
- T3-T5: `deep`（按类批量 + 验证，T3→T4→T5 串行）

---

## TODOs

- [x] 1. 从 IDA 按类导出成员函数清单

  **What to do**:
  - 通过 IDA MCP 按 class_name 分组导出所有成员函数
  - 对每个函数导出: name, address, full signature, param_count, return_type, is_virtual, is_thiscall
  - 同时导出全局函数（按 category 分组）
  - 输出: `tools/ida_class_members.json` — {class_name: [{name, addr, sig, ...}]}
  - 排除 CRT/thunks（匹配 crt_exclusions.json + `j_`/`nullsub` 前缀）
  - 预期: ~1,100 个类, ~9,000 成员函数

  **QA**: 类数量 ≥ 1,000, 成员函数 ≥ 8,000

  **Commit**: `feat(ida): export class member function inventory`

- [x] 2. 生成重写工具

  **What to do**:
  - 创建 `tools/ida_rewrite.py` — 三模式:
    1. `--analyze`: 对比 IDA 成员 vs hpp 当前声明, 输出差异报告
    2. `--generate`: 从 IDA 数据生成规范 hpp 声明文本
    3. `--apply`: 替换 hpp 中非 HIGH 声明, 保留 HIGH
  - 生成逻辑: 从 IDA签名提取 return_type, method_name, params → `ReturnType MethodName(params);  // 0xADDR`
  - 特殊处理: thiscall → 保留在类声明内; virtual → 保留 virtual 前缀; 构造/析构 → 匹配类名
  - `--dry-run` 先预览变更

  **QA**: `python tools/ida_rewrite.py --analyze` 输出差异统计

  **Commit**: `feat(tools): IDA-based hpp declaration rewriter`

- [x] 3. 按类批量重写 hpp 声明

  **What to do**:
  - 运行 `python tools/ida_rewrite.py --apply` 对所有类
  - 对每个类: 保留 HIGH 声明, 删除/替换非 HIGH 声明, 新增 IDA 有但 hpp 无的声明
  - 每 5-10 个类完成后验证编译
  - 全局函数: 放到对应模块的 `globals_*.hpp` 文件
  - sub_* 函数: 如果有 class_name → 放到对应类 hpp; 无 class → 放到 `src/core/_funcs.hpp`
  - 验证: `python tools/normalize_addresses.py --check` → missing 减少

  **QA**: 编译通过, missing_address 减少 ≥ 1,500

  **Commit**: `feat: rewrite hpp declarations from IDA — 1:1 mapping`

- [x] 4. 更新 functions.json 同步

  **What to do**:
  - 运行 `python tools/normalize_addresses.py --match` 更新 translated
  - 对 IDA 中更名了的函数: 更新 functions.json 的 `name` 字段
  - 验证: functions.json 中 name 与 IDA 名一致（抽样 100 个）

  **QA**: translated 增加, name 一致性 ≥ 95%

  **Commit**: `chore(meta): sync functions.json names with IDA`

- [x] 5. 全量编译验证 + 修复

  **What to do**:
  - `cmake --build build_win` → 修复所有编译错误
  - `python tools/normalize_addresses.py --check` → missing_address = 0
  - `python tools/audit_translation.py --full` → 验证一致性
  - 抽样 50 个类: hpp 声明与 IDA 成员列表完全一致

  **QA**: 编译 0 errors, missing_address = 0, NOT_FOUND = 0

  **Commit**: `fix: compile fixes after hpp rewrite`

---

## Commit Strategy

| Task | Message |
|------|---------|
| T1 | `feat(ida): export class member function inventory` |
| T2 | `feat(tools): IDA-based hpp declaration rewriter` |
| T3 | `feat: rewrite hpp declarations from IDA — 1:1 mapping` |
| T4-T5 | `chore: sync functions.json + compile fixes` |

---

## Success Criteria

```bash
# Zero missing addresses
python tools/normalize_addresses.py --check
# Expected: missing_address = 0

# 1:1 mapping verified
python tools/ida_rewrite.py --analyze
# Expected: "0 mismatches, 0 missing, 0 extra"

# Build clean
cmake --build build_win --target gamemd_core
# Expected: 0 errors
```
