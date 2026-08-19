# Hook 对拍系统 — 完整审查资料

## 构建流程

```bash
# 默认构建（使用已提交的 gen/*.cpp，无需重跑分析）
cmake -B D:\RA2YR_ReSource\build_hook_release -G "Visual Studio 17 2022" -A Win32 -DHOOK_OUTPUT_DIR=D:/RA2MD
cmake --build D:\RA2YR_ReSource\build_hook_release --config Release

# 重新生成钩子代码 + 幂等分析（REVERSE 标记变更后）
cmake -B D:\RA2YR_ReSource\build_hook_release -DHOOK_REGEN_GENERATED=ON ...
cmake --build D:\RA2YR_ReSource\build_hook_release --config Release

# 手动重跑（不开 CMake 重建时）
cd injectFunctionTest
python analyze_idempotent.py    # 幂等判定
python gen_reverse_hooks.py     # 钩子代码生成

# 运行测试
cd D:\RA2MD
Syringe.exe "gamemd.exe" -cd -SPAWN
```

## 当前活跃钩子 (4 Inject + 37 None)

| 地址 | 函数 | 模式 | done |
|------|------|------|------|
| 0x7BAF90 | XSurface::PutPixel | Inject | — |
| 0x7BAF10 | XSurface::GetPixelAtCoords | Inject | — |
| 0x7BA8C0 | XSurface::DrawDashedLine | Inject | — |
| 0x7BB350 | XSurface::DrawEllipseOutline | Inject | — |

9 个已验证函数已转为 None（SetPixel, GetPixel, WalkLine, DrawLineEx, DrawLine, Fill, DrawRect, ClipLine, DrawRectEx）。37 个 None 模式标记。

## 幂等分析管道

```
purity_effects.json (17K 函数 .data R/W)  ← ida_extract_purity.py (IDA Pro)
annotations.json   (373 导入规则 + 35 命名模式) ← gen_annotations.py
        ↓
analyze_idempotent.py → idempotent_results.json + audit.txt
  SCC 不动点传递闭包 | 三态: TRUE / FALSE / UNCERTAIN
        ↓
gen_reverse_hooks.py
  读 idempotent → 钩子体: 幂等跳过事务, 非幂等启用事务
  completed gate: 仅 completed=true 生成 Inject/Replace
  done 字段: 已调试验证完毕, 改 None
```

**HOOK_REGEN_GENERATED=ON** 触发完整管道。默认 OFF，使用已提交产物。

## 关键文件清单

| 文件 | 作用 |
|------|------|
| `injectFunctionTest/gen_reverse_hooks.py` | 主生成器: 扫描 REVERSE() + 幂等判定 → 生成钩子 |
| `injectFunctionTest/gen_re_impl.py` | RE_* 函数模板 (修改此处而非 gen/re_impl.cpp) |
| `injectFunctionTest/analyze_idempotent.py` | SCC 不动点幂等判定 (TRUE/FALSE/UNCERTAIN) |
| `injectFunctionTest/ida_extract_purity.py` | IDA 提取: 17K 函数直接 .data R/W 扫描 |
| `injectFunctionTest/gen_annotations.py` | 三层标注: 导入表 + 命名模式 + 手动覆盖 |
| `injectFunctionTest/PostProcStub.asm` | Slot stack push/pop + LogComparison 调用 |
| `injectFunctionTest/shadow_txn.cpp` | VEH handler + ShadowTransaction |
| `injectFunctionTest/tls_storage.h` | ShadowSlot (stack[16] + depth) |
| `injectFunctionTest/hook_main.cpp` | DllMain + ExeRun hook (设 g_owner_tid) |
| `injectFunctionTest/functions.json` | 19K 函数元数据 (完成+幂等+done) |
| `injectFunctionTest/purity_effects.json` | 19K 函数直接 .data R/W (提交 git) |
| `injectFunctionTest/annotations.json` | 三层标注 (提交 git) |

## 四层架构

```
Layer 1: REVERSE 宏标记 (src/*.cpp)
  ↓
Layer 2: analyze_idempotent.py + gen_reverse_hooks.py + gen_re_impl.py
  → SCC 幂等分析 → 扫描 REVERSE() → 生成钩子 + RE_* 模板
  ↓
Layer 3: C++ 钩子存根 (编译进 hook_dll.dll)
  Inject: 栈劫持 + re_depth gate + 线程过滤 → PostProcStub → 对拍
  None: 不生成钩子 (已验证通过)
  ↓
Layer 4: 运行时
  Slot stack push → 原版执行 → PostProcStub pop → LogComparison → CallRE → 对比 → 返回
```

## Inject 模式执行流

```
Hook 入口
  → 保存 GPR + 栈参数
  → 读 idempotent 字段:
      true:  re_depth gate + slot stack push + return 0 (零事务)
      false: thread gate + re_depth gate + stale cleanup + txn + push + return 0
  ↓
  原版函数执行
  ↓
  PostProcStub:
    → depth--, 读 slot[r_depth].hook_addr/ret_addr
    → call LogComparison(orig_eax, hook_addr)
  ↓
  LogComparison:
    → 若 txn → EndCurrent()
    → ReDepthGuard → CallRE → 对拍 → write_entry
    → return re_eax
  ↓
  PostProcStub: pop stack, jmp 原调用者 (eax=re, edx=re_edx)
```

## ShadowSlot (slot stack, tls_storage.h)

```cpp
struct ShadowSlot {
    uint32_t ret_addr_stack[16];   // +0x00
    uint32_t hook_addr_stack[16];  // +0x40
    int      depth;                // +0x80
    uint32_t re_result_eax;        // +0x84
    uint32_t re_result_edx;        // +0x88
    ShadowTransaction* txn;        // +0x8C
};
// 全局变量
extern ShadowSlot  g_slot_storage;
extern DWORD       g_owner_tid;
extern int         g_re_depth;      // RAII Guard
extern int         g_orphan_count;
```

## comparisonResult.log 格式

```
============ Different Compares ============  ← RE ≠ 原版
  [sig-0xADDR]
  Call N: caller()<-ret
    Input:  ...
    Return: hook=false(EAX) != original=true(EAX)

================ Captures ================   (仅 Capture 模式)

============= Same Compares ==============   ← RE = 原版
  [sig-0xADDR]
    Return: hook=original=X(EAX)

============== None Calls ================  ← 零次调用
```

## 调试工作流

参见 AGENTS.md § comparisonResult.log 调试工作流。

核心: 差异函数 → IDA 反编译对比 → 修改 gen_re_impl.py 模板 → regen → 重建 → 重测 → Same 后 done/None。

## 修复历史

| Commit | 修复 |
|--------|------|
| `c9f35d7` | hook_size 指令边界对齐 |
| `702d524` | VEH 无事务 CONTINUE_SEARCH |
| `03672ae` | Caller() 14K IDA 命名 |
| `a70335f` | VEH 线程过滤 + idempotent |
| `2bcf3c3` | gen_annotations.py 三层标注 |
| `d8cc300` | ida_extract_purity.py Phase 1 |
| `4876f54` | analyze_idempotent.py SCC 不动点 |
| `0d3cabd` | gen_reverse_hooks 自动幂等判定 |
| `11b91ac` | HOOK_REGEN_GENERATED CMake option |
| `f230d23` | ClipLine + DrawRectEx RE 模板修复 |
| `4d62ac5` | 9 函数 verified → done/None |
