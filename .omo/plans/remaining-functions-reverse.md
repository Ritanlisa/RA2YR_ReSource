# 翻译工作流——子 Agent 必须照此执行

## 核心原则

**假设子 agent 会忘记所有规则。用硬性步骤防止错误，用脚本代替手工分析。**

## 强制工作流（分步脚本）

### Step 0: 预检——翻译前必须通过

```
python tools/pre_translate.py ClassName::MethodName 0xADDR
```

此脚本自动：
1. 从 IDA MCP 反编译函数 → 提取所有偏移（自动归一化 DWORD/byte）
2. 从 `member_lookup.json` 查找每个偏移的成员名
3. **检查所有 callee 是否在 functions.json 中有已声明符号** → 缺失则报错
4. 输出 `pre_translate_{函数名}.md` — 偏移映射表 + callee 清单

**如果任何偏移/callee 无法解析 → 翻译阻塞 → 必须先修 header**

### Step 1: 编写代码

使用 Step 0 输出的映射表：
- 每个 `READ(this+0x6C)` → `this->health`（查表即得）
- 每个 `CALL(0x5B3A00)` → 查 functions.json 得函数名 → 调用
- **禁止手算偏移** — 映射表已有答案

### Step 2: 编译循环

```
cmake --build build_win --config Debug
```
→ 失败 → 读错误 → 修复 → 重编译 → 重复直到 0 errors

### Step 3: 保存 IDA 缓存

```
python tools/verify_execution_flow.py --save-ida 0xADDR
```

### Step 4: 验证

```
python tools/verify_execution_flow.py --auto
```
→ PASS 或 "This function is not translated properly!"（不含原因）

## 硬性限制（cmake 自动拦截）

| 违规 | 拦截方式 |
|------|---------|
| 指针算术 `ptr+N` | clang-tidy → 编译错误 |
| 非数组 `ptr[i]` | clang-tidy → 编译错误 |
| `static_cast`/`reinterpret_cast` | Python checker → 编译错误 |
| `goto` | Python checker → 编译错误 |
| hex 地址作指针 | Python checker → 编译错误 |
| IDA 变量名 `v1`/`field_0`/`dword_ABC` | Python checker → 编译错误 |
| stub/注释壳 | Python checker → 编译错误 |
| 新增 extern/函数声明 | Python checker → 编译错误 |
| 调用不存在符号 | pre_translate.py → 翻译前阻塞 |

## 软性引导（任务提示中注入）

1. **"先查再写"**：Step 0 的映射表是唯一答案，不要手算
2. **"信任 header 声明"**：用 `int Deploy()` 而不是 IDA 的 `__stdcall char Deploy(_DWORD*)`
3. **"用脚本做批量操作"**：`lookup_member.py --from-ida` 代替逐偏移查询
4. **"不要删除 IDA 逻辑路径"**：用 `// TODO: needs member name at offset N` 保留未映射分支
5. **"类成员所有权：this-> 和 ptr-> 不同"**：不要混淆对象和它的 Type

## cmake 自动化

```
cmake --build build_win --config Debug
```
自动执行：
1. `check_translated_functions.py` — 函数级违规检查
2. `verify_execution_flow.py --auto` — IDA 执行流匹配（读取缓存）
3. 所有检查通过 → 编译成功
4. 任一失败 → 编译失败
