# 函数地址注释规范化 + 精确匹配

## TL;DR

> **核心目标**: 统一代码中所有函数地址注释格式 → 按地址精确匹配 functions.json → 更新 translated=true
>
> **产出物**:
> - 规范化工具 `tools/normalize_addresses.py` — 自动审计 + 修复 + 匹配
> - 更新后的 functions.json — translated=true 从 116 增至 ~4,000+
> - 4,061 个地址注释全部统一为 `// 0xADDR` 格式

**并行执行**: YES — 3 waves，工具先行后批量规范化
**关键路径**: T1（审计）→ T2（规范化脚本）→ T3（自动修复）→ T4（cpp REVERSE 清理）→ T5（地址匹配 + 更新）

---

## Context

### 问题
当前代码中函数地址注释格式混乱：
1. 有的在函数声明前一行（`// 0x6EC540\nvoid Foo();`）
2. 有的在函数声明同一行行尾（`void Foo(); // 0x6EC540`）
3. 同一个函数前有多条相同地址注释
4. REVERSE 宏混在 .hpp 中（应仅在 .cpp）
5. migrate_translated.py 只用函数名匹配，未利用地址信息 → translated=true 仅 116

### 目标格式
```cpp
// ✅ 正确 — 仅完整声明，行尾，大写十六进制
void RegisterClassCOM(const GUID& clsid);  // 0x6EC540
virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;  // 0x6EC540

// ❌ 错误 — 地址在函数前一行  
// 0x6EC540
void RegisterClassCOM(const GUID& clsid);

// ❌ 错误 — 声明+实现混在 .hpp
void RegisterClassCOM(const GUID& clsid) { /* body */ }  // 0x6EC540

// ❌ 错误 — 前向声明
class Foo;
void Bar();  // 不注释前向声明

// ❌ 错误 — 格式不规范
void Foo();  // 0x6ec540  (小写)
void Foo();  //  0x6EC540 (多余空格)
```

### 特殊规则
1. **声明与实现分离**: .hpp 中带 `{}` 的内联实现 → 实现移到 .cpp，.hpp 仅保留声明 + 地址注释
2. **仅完整声明**: 前向声明（`class Foo;`、无类的 `void Bar();`）不注释地址
3. **成员偏移注释不动**: `/* 0xA4 */` 等成员变量注释不修改
4. **格式规范**: `// 0x` 前缀 + 6-8 位大写十六进制，声明与 `//` 之间一个空格

### 统计数据
- 164 .hpp 文件，63 个有地址注释
- ~4,061 个地址注释（3,854 .hpp + 207 .cpp）
- 32 处地址在函数声明前（不规范）
- 407 个 REVERSE 宏（均在 .cpp，格式正确）
- functions.json: 19,067 条目，每条目有精确 `address` 字段

---

## Work Objectives

### Core Objective
统一所有函数地址注释到 `// 0xADDR` 行尾格式，仅存在于 .hpp 的函数声明后；REVERSE 宏仅存在于 .cpp；然后按地址精确匹配 functions.json 并更新 `translated=true`。

### Concrete Deliverables
- `tools/normalize_addresses.py` — 审计 + 自动修复 + 地址补充 + 匹配
- 修复后的 .hpp 文件 — 所有 164 个 .hpp 中每个函数声明都有 `// 0xADDR`
- 更新后的 functions.json — translated=true 从 116 增至 ~4,000+
- 编译 0/0 全程保持

### Definition of Done
- [ ] 所有 .hpp 地址注释格式统一（行尾 `// 0xADDR`，不在函数前）
- [ ] 100% .hpp 函数声明有地址注释
- [ ] 0 个 REVERSE 宏出现在 .hpp 中
- [ ] 0 个重复地址注释
- [ ] functions.json translated=true ≥ 4,000
- [ ] `cmake --build build_win` → 0 errors

### Must Have
- 地址注释仅在 .hpp 行尾
- 100% .hpp 函数声明有地址注释
- REVERSE 宏仅在 .cpp
- 无重复地址、无函数前地址
- 地址匹配优先于名称匹配

### Must NOT Have
- 不能删除或改变函数签名
- 不能修改函数体逻辑
- 不能变更 REVERSE 管道保护文件的 REVERSE 宏
- 不能修改 .cpp 中已有的 REVERSE 宏（仅处理 .hpp 中的）

---

## Verification Strategy

### QA Policy
每波次：`cmake --build build_win` → 0/0 + 规范化规则检查。

| 检查项 | 命令 | 预期 |
|--------|------|------|
| 地址格式 | `python tools/normalize_addresses.py --check` | 0 违规 |
| 编译 | `cmake --build build_win` | 0 errors |
| 匹配数 | `python -c "..."` | translated ≥ 4,000 |

---

## Execution Strategy

```
Wave 1 (工具开发):
├── Task 1: 审计脚本 — 统计所有不规范地址 [quick]
└── Task 2: 自动修复 + 地址补充工具 [quick]

Wave 2 (批量修复):
├── Task 3: 修复已有地址注释 — 前移 → 行尾 [quick]
├── Task 4: 分离 .hpp 中的声明与实现 — inline body → .cpp [deep]
├── Task 5: 补充缺失地址 — 为无地址的函数声明添加注释 [deep]
└── Task 6: 清理 .hpp 中的 REVERSE 宏 [quick]

Wave 3 (匹配 + 更新):
└── Task 7: 地址匹配 + 更新 functions.json translated=true [quick]
```

### Agent Dispatch
- Wave 1: T1-T2 → `quick`
- Wave 2: T3,T6 → `quick`；T4,T5 → `deep`（T3→T4→T5→T6 串行）
- Wave 3: T7 → `quick`

Max Concurrent: 2 (Wave 1)

---

## TODOs

- [x] 1. 审计脚本 — 全面统计不规范地址模式

  **What to do**:
  - 创建 `tools/normalize_addresses.py` 的 `--check` 模式
  - 扫描所有 src/**/*.hpp 和 src/**/*.cpp
  - 检测所有不规范模式：地址在函数前、多地址注释、.hpp 中有 REVERSE、地址格式异常
  - 输出详细报告：文件:行号 → 问题类型 → 建议修复
  - 只读，不修改任何文件

  **QA**: `python tools/normalize_addresses.py --check` → 列出所有违规

  **Commit**: `feat(tools): address annotation audit script`

- [x] 2. 自动修复脚本 — 规范化执行

  **What to do**:
  - 实现 `tools/normalize_addresses.py` 的 `--fix` 模式
  - 修复逻辑：
    1. 地址在函数前一行 → 移动到函数声明行尾
    2. 多地址注释 → 保留一个，删除重复
    3. .hpp 中的 REVERSE 宏 → 移除（保留到 .cpp 手动处理）
    4. 地址格式标准化 → 统一 `// 0x` 前缀，保留原始地址值
  - 安全保护：操作前备份到 `tools/backups/`，支持 `--dry-run`
  - 仅修改 .hpp 文件，不动 .cpp

  **QA**: `python tools/normalize_addresses.py --fix --dry-run` → 无错误

  **Commit**: `feat(tools): address annotation auto-fix + safety backup`

- [ ] 3. 修复 .hpp 地址注释

  **What to do**:
  - 运行 `python tools/normalize_addresses.py --fix` 对所有 src/**/*.hpp
  - 处理 32 处"地址在函数前" → 移到行尾
  - 处理重复地址注释 → 去重
  - 验证：`python tools/normalize_addresses.py --check` → 0 违规
  - 验证：`cmake --build build_win` → 0 errors
  - 每个文件修改后单独 commit

  **Must NOT**: 不修改函数体、不改变地址值

  **QA**: `python tools/normalize_addresses.py --check` → "All clear, 0 violations"

    **Commit**: `style: normalize address annotations in .hpp files`

- [ ] 4. 分离 .hpp 中的声明与实现

  **What to do**:
  - 扫描 .hpp，找到带 `{}` 函数体的内联实现
  - 提取声明到 .hpp（无 `{}`），实现移到对应 .cpp
  - 示例：`virtual int GetCount() const { return c; }` → .hpp: `virtual int GetCount() const;` + .cpp: `int Class::GetCount() const { return c; }`
  - 验证：`cmake --build build_win` → 0 errors

  **QA**: `grep -Pn "\)\s*(override)?\s*\{[^;]*\}" src/**/*.hpp` → 0

  **Commit**: `refactor: separate inline impl from .hpp declarations`

- [ ] 5. 补充缺失地址 — 为无地址的函数声明添加注释

  **What to do**:
  - 扫描所有 src/**/*.hpp，提取每个函数声明（类名 + 方法名）
  - 对每个无地址注释的函数声明，在 functions.json 中按类名+方法名匹配
  - 获取 functions.json 的 `address` 字段 → 添加 `// 0xADDR` 到声明行尾
  - 目标：101 个无地址 .hpp → 0，所有函数声明 100% 地址覆盖
  - `--dry-run` 模式先预览

  **Must NOT**: 不修改函数签名、不改变已有地址值

  **QA**: `python tools/normalize_addresses.py --coverage` → "100% address coverage"

  **Commit**: `feat: add address annotations to all function declarations`

- [ ] 6. 清理 .hpp 中的 REVERSE 宏

  **What to do**:
  - 搜索所有 .hpp 文件中的 REVERSE 宏
  - 如果对应 .cpp 已有 REVERSE → 从 .hpp 移除
  - 如果对应 .cpp 无 REVERSE → 记录到报告，不自动移除
  - 验证：.hpp 中 0 个 REVERSE 宏
  - 验证：`cmake --build build_win` → 0 errors

  **QA**: `grep -r "REVERSE(" src/**/*.hpp` → 0 结果

  **Commit**: `style: remove REVERSE macros from .hpp files`

- [ ] 7. 地址匹配 + 更新 functions.json

  **What to do**:
  - 实现 `tools/normalize_addresses.py` 的 `--match` 模式
  - 逻辑：
    1. 从所有 .hpp 提取 `// 0xADDR` 地址注释
    2. 在 functions.json 中按 `address` 字段精确匹配
    3. 对匹配成功的函数：设置 `translated=true` + `re_file = hpp_path`
    4. 输出匹配统计：总数、新增、冲突
  - 保守策略：地址有歧义时，记录但不标记
  - 验证：translated=true 计数 ≥ 4,000
  - 验证：`python tools/audit_translation.py --check-metadata` → 不一致减少

  **QA**: `python -c "import json; d=json.load(open('injectFunctionTest/functions.json',encoding='utf-8')); print(sum(1 for f in d['functions'] if f['hook'].get('translated')))"` → ≥ 4,000

  **Commit**: `feat(meta): address-based matching — translated=true from 116 to ~4000+`

---

## Commit Strategy

| Wave | Tasks | Message Pattern |
|------|-------|----------------|
| 1 | 1-2 | `feat(tools): address normalization tool (audit + fix)` |
| 2 | 3-6 | `style: normalize .hpp (addresses + inline分离 + fill + REVERSE cleanup)` |
| 3 | 7 | `feat(meta): address-based translated=true matching` |

---

## Success Criteria

### Verification Commands
```bash
# Format check
python tools/normalize_addresses.py --check
# Expected: "All clear, 0 violations"

# Build
cmake --build build_win --target gamemd_core
# Expected: 0 errors

# Translated count
python -c "import json; d=json.load(open('injectFunctionTest/functions.json',encoding='utf-8')); print(sum(1 for f in d['functions'] if f['hook'].translated))"
# Expected: >= 4000
```
