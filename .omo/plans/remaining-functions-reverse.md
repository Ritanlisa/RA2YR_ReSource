# 函数体 IDA 翻译

## TL;DR

> **核心目标**: 16,787 个未翻译函数 → IDA 反编译 → 完整 C++ 实现 → `translated=true`。
> sub_* 函数翻译后根据功能统一重命名（全局查找替换）。
>
> **当前进度**: translated=472 / 17,259（2.7%）
> **产出**: 每个函数 body ≥5 行，所有分支/边界/返回路径覆盖，编译 0/0。
> **并行执行**: YES — 3 waves + FINAL，按类/模块分组，同类内可并行。

---

## 状态

| 指标 | 值 |
|------|-----|
| 总函数 | 19,133（全部 completed=true） |
| 已翻译 | 472（58 REVERSE + 183 structure + 312 other − 62 dedup） |
| 待翻译 | ~16,787（~11,300 已命名 + ~5,468 sub_*） |
| sub_* 反编译 | 5,461 伪代码在 `tools/sub_decompiles/` |
| CRT 排除 | 1,874（不翻译） |

---

## 规则

### 翻译（强制——违反即驳回）

#### 1. 禁止注释壳 / stub
- **每个方法 body 必须 ≥3 行非注释 C++ 代码**。纯注释 + `return 0;` = stub = 不合格。
- 不得用 `// TODO`、`// Check if...`、`// Calculate...` 代替真实代码。
- 验证：`python tools/audit_translation.py --check-stubs` → 0 + 人工抽查方法体。

#### 2. 恢复原始成员访问（禁止 raw pointer offset）
- **必须**: 用 `ptr->MemberName` 访问类成员，禁止 `reinterpret_cast<int*>(ptr)[offset/4]`
- IDA 反编译输出 raw offset（如 `*(this + 588)`）是因为它不知道类布局——**我们有 1,120 个完整类 header，知道每个 offset 对应的成员名**。
- 方法：IDA 输出 `*(int*)((uint8_t*)house + 588)` → 查 `house.hpp` offset 588 → 写 `house->AvailableCredits`
- 全局变量同理：`*(int*)0x87F7E8` → 查 globals 表 → 写 `g_RulesData->SomeField`（用 `->` 访问）
- **禁止**: `reinterpret_cast<int*>(*house)[588/4]`、`*(int*)(0x87F7E8 + offset)` 等 raw offset 写法

#### 3. C 风格强制类型转换
- **必须**: 用 `(Type)expr` 或 `Type(expr)` —— MSVC 6.0 原始风格
- **禁止**: `static_cast<Type>(expr)`、`reinterpret_cast<Type>(expr)`、`dynamic_cast` 等 C++ 风格
- 例: `(int)value` 不能写 `static_cast<int>(value)`；`(HouseClass*)ptr` 不能写 `static_cast<HouseClass*>(ptr)`

#### 4. 伪代码来源
- **必须**用 IDA MCP `ida-pro-mcp_decompile` 实时反编译，禁止使用 `tools/sub_decompiles/` 或任何缓存

#### 5. 优化还原
- 合并连续同类循环、变量语义化命名、同变量合并、消除编译器优化痕迹
- 不改变函数外部行为（输入→输出不变）

### 翻译后验证（Atlas 门控——每批必须）

每批翻译完成后，Atlas 执行以下检查，任一失败 = 驳回重做：

| 检查项 | 方法 | 标准 |
|--------|------|------|
| 编译 | `cmake --build build_win` | 0 errors |
| 无 stub | `python tools/audit_translation.py --check-stubs` | 0 stubs |
| 无显式指针加法 | grep `(uint8_t\*).*\+ \|\(int\*\)\(this\)\|\(char\*\)\(this\)` src/ | 0 匹配 |
| 无非数组 `[]` | grep `\[[0-9]+/[0-9]+\]\|\(\(int\*\)[^)]+\)\[` src/ | 0 匹配 |
| 无 raw offset | grep `reinterpret_cast<.*\*.*\[` src/ | 0 匹配 |
| 无 C++ cast | grep `static_cast\|reinterpret_cast\|dynamic_cast` src/ | 0 匹配 |
| 无注释壳 | 人工抽查 ≥3 方法 body | 每方法 ≥3 行真实代码 |
| 成员访问正确 | `python tools/lookup_member.py Class offset` 验证 | 100% |

### sub_* 重命名
- 翻译完成后根据函数实际功能命名（PascalCase 全局函数 / `ClassName::Method` 成员函数）
- **三处同步更新**:
  1. IDA: `ida-pro-mcp_rename` → `idb_save`
  2. functions.json: 更新 `name` 字段
  3. 源码: hpp 声明 + cpp 实现 + 所有引用处的全局查找替换

### 禁止
- 使用 `tools/sub_decompiles/` 或任何缓存的反编译数据
- 修改类 header 成员变量布局
- 修改 REVERSE 管道保护文件
- 批量标记 translated 不经 IDA 验证 + Atlas 门控
- 翻译 CRT/thunk 函数
- 改变函数外部行为（输入相同必须输出相同）
- **显式指针加法**: `(uint8_t*)ptr + N`、`(int*)(this) + N`、`(char*)(this)` 等
- **非数组 `[]` 运算符**: `ptr[N/4]`、`((int*)ptr)[N]` 等——类成员访问只用 `.` 和 `->`
- **C++ 风格类型转换**: `static_cast`、`reinterpret_cast`、`dynamic_cast`
- **注释壳/stub**: 纯注释 + `return 0;` 组成的空函数体

---

## TODOs

### Wave 1: 核心类方法（最高优先级）

- [ ] 1. structure/ 类方法 — BuildingClass, InfantryClass, UnitClass, AircraftClass
  > 四类约 495 方法。已有 ~160 部分翻译（2026-06-18），剩余 ~335 从 IDA 反编译完整实现。
  > 实时 IDA 反编译 → 优化还原原始 C++ → 编译验证 → translated=true。
  > **Agent**: `deep` | **Parallel**: 四个类可并行分派

- [ ] 2. object/ 类方法 — TechnoClass, FootClass, ObjectClass, MissionClass, RadioClass, AbstractClass
  > 六类约 600+ 方法。核心对象层次。
  > **Agent**: `deep` | **Parallel**: 六个类可并行分派 | **Blocked By**: 1

- [ ] 3. 其余类方法 — render (DSurface/XSurface 82), system (TacticalClass), ui (Dialog/Gadget/Sidebar), misc (Jumpjet 43, Locomotor), house, entity, network, type
  > 分散在各模块的类方法。按模块分组，同模块内顺序翻译。
  > **Agent**: `deep` | **Parallel**: 模块间可并行 | **Blocked By**: 1

### Wave 2: 命名全局函数

- [ ] 4. 全局函数 — 按模块分批：menu/rendering → object/system → combat/AI/network → misc/init
  > ~11,300 已命名全局函数。已有部分实现，剩余从 IDA 翻译。
  > 每批 200-500 函数，编译验证后标记 translated。
  > **Agent**: `deep` | **Parallel**: 不相关模块可并行 | **Blocked By**: 1

### Wave 3: sub_* 翻译 + 重命名

- [ ] 5. sub_* <50B 翻译 + 重命名 (~4,200)
  > 已有 4,255 存根（`src/_generated/`，仅供参考——**必须用 IDA MCP 实时反编译**）。
  > 逐函数 IDA 实时反编译 → 优化还原原始 C++ → 编译验证 → 根据功能重命名。
  > 重命名后三处同步：IDA rename & idb_save + functions.json + 源码全局查找替换。
  > **Agent**: `deep` | **Parallel**: 模块间可并行 | **Blocked By**: 1-4

- [ ] 6. sub_* 50-500B 翻译 + 重命名 (~1,200)
  > 已有 1,203 存根。中大型函数需逐行 IDA 实时反编译对照。
  > 优化还原原始 C++（变量语义化、循环合并、编译器痕迹消除）。
  > 关注浮点精度（fild vs fld）、边界条件、outcode 顺序。
  > 重命名后三处同步：IDA + functions.json + 源码。
  > **Agent**: `deep` | **Parallel**: 模块间可并行 | **Blocked By**: 1-4

### Wave 4: 审计 + 收尾

- [ ] 7. 最终审计 — 全量验证 translated 准确性
  > 抽样 200 函数：IDA 反编译 vs C++ 实现 100% 匹配。
  > 确认 functions.json `translated` 计数 = 实际已翻译数。
  > **Agent**: `quick` | **Blocked By**: 1-6

---

## Final Verification Wave

- [ ] F1. 翻译完整性 — 全部 17,259 游戏函数 translated=true
- [ ] F2. 编译 — `cmake --build build_win` 0/0
- [ ] F3. IDA 一致性审计 — 抽样 50 函数 100% 匹配
- [ ] F4. 管道回归 — `gen_reverse_hooks.py` 0 errors

---

## 进度追踪

每完成一批翻译：
```bash
python -c "import json; d=json.load(open('injectFunctionTest/functions.json')); print(sum(1 for f in d['functions'] if f['hook']['translated']))"
```

目标：472 → 17,259。每次提交附带 translated 增量。
