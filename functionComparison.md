# RA2YR ReSource — Function Comparison Pipeline

## 1. Architecture

```
┌─ IDA Pro (一次性) ─────────────────────────────────────────────┐
│ ida_extract_purity.py → purity_effects.json (17K 函数 R/W)     │
│ gen_annotations.py    → annotations.json  (三层标注)            │
└─────────────────────────────────────────────────────────────────┘
                              ↓
┌─ CMake 构建 (HOOK_REGEN_GENERATED=ON) ─────────────────────────┐
│ analyze_idempotent.py → SCC 不动点 → idempotent_results.json   │
│ gen_reverse_hooks.py  → 读结果 + 扫描 REVERSE → gen/*.cpp      │
│ gen_re_impl.py        → RE_* 函数模板                           │
└─────────────────────────────────────────────────────────────────┘
                              ↓
┌─ hook_dll.dll (Syringe 注入 gamemd.exe) ───────────────────────┐
│ Inject 钩子: 栈劫持 → PostProcStub → LogComparison → CallRE    │
│ VEH: 仅非幂等函数的事务中拦截 .data 写                           │
│ Slot stack: 16 深度, push/pop 防多钩子覆盖                       │
└─────────────────────────────────────────────────────────────────┘
```

## 2. 四种模式

### 2.1 None — 不生成钩子

仅标记为钩子目标，不注入任何钩子。`completed=false` 时报 WARNING。

```
REVERSE(0xADDR, "desc", "None")
typeA RepFuncA(a1, a2)
```

执行流：**完全不受影响**，原版调用链照常运行。

```
Entrance → parent functions → typeA FuncA(a1, a2) → typeB FuncB(b1, b2) → typeC LibFunc(c1, c2)
parent functions ← retValA ← FuncA ← retValB ← FuncB ← retValLibFunc ← LibFunc
```

### 2.2 Capture — 记录输入/输出，不影响原版

钩子捕获每次调用的输入参数和返回值，写入 `comparisonResult.log`（Captures 区域）。不触发 PostProcStub，不执行 RE，不影响原始返回值。

```
REVERSE(0xADDR_FuncA, "desc", "Capture")  // FuncA 钩子
REVERSE(0xADDR_FuncB, "desc", "None")      // FuncB 无钩子
```

```
Entrance → parent functions → Hook(Record a1/a2, stack hijack FuncA_Retprocess)
    → typeA FuncA(a1, a2) → typeB FuncB(b1, b2) → typeC LibFunc(c1, c2)
parent functions ← FuncA_Retprocess(print a1/a2/retValA to comparisonResult.log)
    ← retValA ← FuncA ← retValB ← FuncB ← retValLibFunc ← LibFunc
```

### 2.3 Inject — 对拍验证（内存备份回滚）

原版执行 → 备份 .data 页 → 回滚 → RE 执行 → 对比。子函数若为 None 模式，不被钩，原版照常运行。若子函数也为 Inject/Replace，嵌套对拍通过 slot stack 独立记录。

```
REVERSE(0xADDR_FuncA, "desc", "Inject")   // FuncA 钩子
REVERSE(0xADDR_FuncB, "desc", "None")      // FuncB 无钩子
```

```
Entrance → parent functions
    → Hook(Record a1/a2, stack hijack FuncA_Retprocess, backup .data)
    → typeA FuncA(a1, a2)
    → typeB FuncB(b1, b2)            ← None 模式, 无钩子, 正常执行
    → typeC LibFunc(c1, c2)
                                                     FuncA_Retprocess(recover .data)
    ← retValA ← FuncA                               ← FuncB ← LibFunc
    
    FuncA_Retprocess → typeA RepFuncA(a1, a2)        ← 第二轮: RE 执行
    → typeB FuncB(b1, b2)            ← 仍调原版(FuncB 无钩), g_re_depth>0 透传
    → typeC LibFunc(c1, c2)
parent functions
    ← FuncA_Retprocess(print a1/a2/retValA/retValRepA as Call to comparisonResult.log)
    ← retValRepA ← RepFuncA ← retValB ← FuncB ← LibFunc
```

**多层 Inject 嵌套**（父 Inject + 子 Inject）：

```
Entrance → Hook(FuncA) → FuncA → Hook(FuncB) → FuncB → LibFunc
    slot stack: depth=1(FuncA) → depth=2(FuncB)
    ← FuncB 返回 → PostProcStub(FuncB) pop → RE_FuncB → comparison → depth=1
    ← FuncA 返回 → PostProcStub(FuncA) pop → RE_FuncA → comparison → depth=0
```

### 2.4 Replace — 全链路替换对拍

父函数 RE 直接调用子函数 RE（C++ 函数调用，不经钩子）。子函数不独立对拍（不写 comparisonResult.log），仅父函数输出完整对拍结果。RE 调用链完全替换原版调用链。

```
REVERSE(0xADDR_FuncA, "desc", "Replace")  // FuncA 钩子
REVERSE(0xADDR_FuncB, "desc", "Inject")   // FuncB 钩子
```

```
Entrance → parent functions
    → Hook(Record a1/a2, stack hijack FuncA_Retprocess, backup .data)
    → typeA FuncA(a1, a2)
    → Hook(Record b1/b2, stack hijack FuncB_Retprocess)
    → typeB FuncB(b1, b2) → typeC LibFunc(c1, c2)
                                                     FuncA_Retprocess(recover .data)
    ← retValA ← FuncA               ← FuncB_Retprocess ← retValB ← FuncB ← LibFunc
                                    [FuncB 的 PostProcStub 在此触发: RE_FuncB + comparison]
    
    FuncA_Retprocess → typeA RepFuncA(a1, a2)
    → typeB RepFuncB(b1, b2)        ← 直接调 RE_FuncB(C++ call, 不经钩子)
    → typeC LibFunc(c1, c2)
parent functions
    ← FuncA_Retprocess(print a1/a2/retValA/retValRepA as Call)
    ← retValRepA ← RepFuncA ← retValRepB ← RepFuncB ← LibFunc
```

**关键设计点**：`g_re_depth > 0` 时 Inject 钩子 `return 0` — 防止 RE 内部通过 vtable 误调 hooked 版本。RE 应调用子函数的 RE 实现（C++ 直接调用）或 unhooked 原版函数。

### 2.5 CallRE 参数映射

```cpp
// thiscall: V.c(this), V.stk0(arg1), V.stk1(arg2), ...
// fastcall: V.c(arg1), V.d(arg2), V.stk0(arg3), ...
// stdcall/cdecl: V.stk0(arg1), V.stk1(arg2), ...
```

### 2.6 Slot Stack (tls_storage.h)

```
ShadowSlot:
  ret_addr_stack[16]   +0x00  ← hook 入口 push, PostProcStub pop
  hook_addr_stack[16]  +0x40  ← hook 入口 push, PostProcStub pop
  depth                +0x80
  re_result_eax        +0x84
  re_result_edx        +0x88
  txn                  +0x8C
```

## 3. 幂等自动判定

### 3.1 管道

```
purity_effects.json (直接 .data R/W 扫描)
annotations.json   (373 导入规则 + 35 命名模式 + 手动覆盖)
        ↓
SCC 不动点传递闭包 (17K 函数, 36K 边, Tarjan 分解)
        ↓
三态判定: TRUE / FALSE / UNCERTAIN
  TRUE  → 跳过事务 (零 VirtualProtect)
  FALSE → 启用事务+VEH
  UNCERTAIN → 视为 FALSE (保守)
```

### 3.2 判定规则

| 条件 | 结果 |
|------|------|
| direct R∩W ≠ ∅ | FALSE |
| transitive R∩W ≠ ∅ | FALSE |
| 有未解析间接调用 (vtable) | UNCERTAIN |
| 有指针参数 (Phase 3 处理) | UNCERTAIN |
| R∩W = ∅ | TRUE |

### 3.3 当前统计 (19,067 函数)

| 判定 | 数量 | 占比 |
|------|------|------|
| TRUE | 5,943 | 31.2% |
| FALSE | 6,874 | 36.1% |
| UNCERTAIN | 6,250 | 32.8% |

### 3.4 手动覆盖

functions.json 中 `idempotent: true/false` 优先于自动分析。
与自动结果不一致时 → WARNING，需要 `idempotent_reason` 字段。

## 4. functions.json 关键字段

```json
{
  "hook": {
    "is_hookable": true,
    "strategy": "stack_hijack",
    "completed": false,       // RE 实现完成 (代码层面)
    "done": true,              // 调试验证通过 (对拍 Same)
    "idempotent": true,        // 手动覆盖优先, 缺省=自动判定
    "idempotent_reason": "...", // 覆盖原因 (与自动不一致时必填)
    "min_safe_size": 5,
    "re_file": "...",
    "re_line": 123
  }
}
```

## 5. comparisonResult.log 格式

```
============ Different Compares ============  ← RE ≠ 原版
  [sig-0xADDR]
  Call N: caller()<-ret
    Input:  this=0x... point(Stack)=[x,y](ADDR) color=...(HEX)
    Return: hook=false(EAX) != original=true(EAX)

================ Captures ================   (Capture 模式)

============= Same Compares ==============   ← RE = 原版
  [sig-0xADDR]
    Return: hook=original=X(EAX)

============== None Calls ================  ← 零次调用
```

## 6. 调试工作流

```
1. 运行游戏 (15s+) → comparisonResult.log 生成
2. Different Compares → 提取差异函数 + 输入样本
3. IDA 反编译原版 → 对比 RE 实现
4. 重点: outcode 顺序, 边界条件, fild/fld
5. 修改 gen_re_impl.py 模板 (非 gen/re_impl.cpp)
6. regen + rebuild + retest
7. Same → functions.json done=true + REVERSE 改为 None
```

## 7. 构建命令

```bash
# 默认 (使用已提交产物)
cmake -B build_hook_release -G "Visual Studio 17 2022" -A Win32 -DHOOK_OUTPUT_DIR=D:/RA2MD
cmake --build build_hook_release --config Release

# 重跑分析 + 代码生成
cmake -B build_hook_release -DHOOK_REGEN_GENERATED=ON ...
cmake --build build_hook_release --config Release

# 手动重跑
cd injectFunctionTest
python analyze_idempotent.py && python gen_reverse_hooks.py

# 测试
cd D:\RA2MD && Syringe.exe "gamemd.exe" -cd -SPAWN
```

## 8. 当前状态

- **Inject**: 13 活跃 (12 XSurface + Palette)
- **None**: 19 (已完成函数回归验证)
- **Replace**: 0 (待部署)
- 幂等分析: Phase 1+2 完成, Phase 3 (vtable 解析) 待实现
