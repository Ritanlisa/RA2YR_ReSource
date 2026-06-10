# Hook 对拍系统 — 完整审查资料

## 构建流程

```bash
# 1. 扫描 REVERSE 标记 + 生成钩子代码
cd D:\RA2YR_ReSource\injectFunctionTest
python gen_reverse_hooks.py

# 2. 构建 hook_dll.dll (Release, VS 2022, Win32, /MAP 输出)
cmake -B D:\RA2YR_ReSource\build_hook_release -G "Visual Studio 17 2022" -A Win32 -DHOOK_OUTPUT_DIR=D:/RA2MD
cmake --build D:\RA2YR_ReSource\build_hook_release --config Release
# DLL 自动复制到 D:/RA2MD/hook_dll.dll
# MAP 文件输出到 build_hook_release/injectFunctionTest/hook_dll.map

# 3. 运行测试
cd D:\RA2MD
Syringe.exe "gamemd.exe" -cd -SPAWN
```

## 当前活跃钩子 (13 Inject)

| 地址 | 函数 | 模式 | 约定 | idempotent |
|------|------|------|------|------------|
| 0x7BC2B0 | ClipLine(int start[2], int end[2], int clip_rect[4]) | Inject | fastcall | — |
| 0x7BAEB0 | XSurface::SetPixel(const Point2D&, uint32_t) | **Replace** | thiscall | true |
| 0x7BAE60 | XSurface::GetPixel(const Point2D&) | Inject | thiscall | — |
| 0x7BAF90 | XSurface::PutPixel(const Point2D&, uint16_t, const RectangleStruct&) | Inject | thiscall | — |
| 0x7BAF10 | XSurface::GetPixelAtCoords(const Point2D&, const RectangleStruct&) | Inject | thiscall | — |
| 0x7BAB90 | XSurface::WalkLine(const Point2D&, const Point2D&, callback) | Inject | thiscall | — |
| 0x7BA610 | XSurface::DrawLineEx(const RectangleStruct&, const Point2D&, const Point2D&, uint32_t) | Inject | thiscall | — |
| 0x7BA5E0 | XSurface::DrawLine(const Point2D&, const Point2D&, uint32_t) | Inject | thiscall | — |
| 0x7BA8C0 | XSurface::DrawDashedLine(const Point2D&, const Point2D&, uint16_t, const uint8_t[16], int) | Inject | thiscall | — |
| 0x7BBAB0 | XSurface::Fill(uint32_t) | Inject | thiscall | — |
| 0x7BADC0 | XSurface::DrawRectEx(const RectangleStruct&, const RectangleStruct&, uint32_t) | Inject | thiscall | — |
| 0x7BAD90 | XSurface::DrawRect(const RectangleStruct&, uint32_t) | Inject | thiscall | — |
| 0x7BB350 | XSurface::DrawEllipseOutline(const Point2D&, int, int, const RectangleStruct&, uint16_t) | Inject | thiscall | — |

29 个 None 模式标记 (未启用, 仅出现在 None Calls section)。

## 关键文件清单

| 文件 | 作用 |
|------|------|
| `injectFunctionTest/gen_reverse_hooks.py` | 主生成器: 扫描 `REVERSE()` → 生成钩子 + 格式化代码 |
| `injectFunctionTest/gen_re_impl.py` | RE_* 函数模板生成 (仅 Inject/Replace 模式) |
| `injectFunctionTest/PostProcStub.asm` | 栈劫持后 ASM 存根, 读 g_current_slot, 调用 LogComparison |
| `injectFunctionTest/shadow_txn.cpp` | VEH handler + ShadowTransaction (Begin/End/Discard/OnWriteViolation) |
| `injectFunctionTest/tls_storage.h` | ShadowSlot 结构体 + g_current_slot + g_owner_tid + g_re_depth |
| `injectFunctionTest/hook_main.cpp` | DllMain (InstallVEH) + ExeRun hook (初始化 g_owner_tid + TCP server) |
| `injectFunctionTest/headless_server.cpp` | TCP :25400 (STATS/MEM/REG/CLICK 等) |
| `injectFunctionTest/render_hooks.cpp` | DSurface::Blit hook (UI 元素追踪) |
| `injectFunctionTest/functions.json` | 19K 函数元数据 (调用约定+min_safe_size+idempotent) |
| `include/gamemd/core/math.hpp` | Point2D/RectangleStruct 结构体定义 (被生成代码 include) |

## 四层架构

```
Layer 1: REVERSE 宏标记 (src/render/surface.cpp)
  ↓
Layer 2: gen_reverse_hooks.py + gen_re_impl.py (Python 代码生成器)
  → 扫描 REVERSE() → 解析 C++ 声明 → 生成钩子 + RE_* + 诊断
  ↓
Layer 3: C++ 钩子存根 (编译进 hook_dll.dll)
  Capture: 记录参数 → write_entry → return 0
  Replace: 栈劫持 → PostProcStub → LogComparison → CallRE → 写对拍日志
  Inject: 同上 + re_depth gate + 线程过滤
  ↓
Layer 4: 运行时 (Syringe 注入 → gamemd.exe)
  PostProcStub.asm → LogComparison(C++) → CallRE → RE_* → 对比 → 返回
```

## Replace 模式执行流 (当前活跃)

```
Hook 入口
  → 保存 GPR + 栈参数 → V.a..V.stk3
  → 读 idempotent 字段:
      idempotent=true (SetPixel):
        → g_current_slot->hook_addr = ADDR
        → 劫持返回地址: Stack(0) = &PostProcStub
        → return 0 — 无事务, 零保护开销
      idempotent=false:
        → 线程门控 + stale 清理 + ShadowTransaction + 栈劫持
  ↓
  原始函数执行 (无保护)
  ↓
  PostProcStub:
    → 取 orig_eax, 读 [g_current_slot] 获取 hook_addr
    → 调用 LogComparison(orig_eax, hook_addr)
  ↓
  LogComparison:
    → 若 s->txn → EndCurrent() — Replace 模式无 txn, 跳过
    → ReDepthGuard { ++g_re_depth; CallRE(idx); --g_re_depth; }
    → 存储 re_result_eax/re_edx 到 slot
    → 对比 orig vs re → write_entry('I', ...) → comparisonResult.log
    → return re_eax
  ↓
  PostProcStub: jmp 回原调用者 (EAX=re_eax, EDX=re_edx)
```

## Inject 模式 (基础设施就绪, 未激活)

与 Replace 模式的区别:
- Hook 入口: 线程门控 + g_re_depth gate (RE 内部调用透传) + stale 清理 + 完整事务
- LogComparison: 执行 EndCurrent() 回滚 .data
- RE 函数内部调用原版 callee → 触发 hook → g_re_depth>0 → 透传

## 运行时基础设施

### VEH Handler (shadow_txn.cpp)

```
1. 过滤非 ACCESS_VIOLATION → CONTINUE_SEARCH
2. 过滤非写 AV (access != 1) → CONTINUE_SEARCH
3. 过滤非 .data 范围 → CONTINUE_SEARCH
4. 无活跃事务 → CONTINUE_SEARCH
5. 主线程 (g_owner_tid): OnWriteViolation(backup + unprotect) → CONTINUE_EXECUTION
6. 非主线程: 直接 VirtualProtect(unprotect) — 不备份, 避免 m_backups 竞争
```

### ShadowSlot (tls_storage.h)

```cpp
struct ShadowSlot {
    uint32_t original_ret_addr;  // +0x00
    uint32_t re_result_eax;      // +0x04
    uint32_t re_result_edx;      // +0x08
    uint32_t hook_addr;          // +0x0C
    ShadowTransaction* txn;      // +0x10
};
// 全局变量 (静态, 多线程通过 g_owner_tid 门控)
extern ShadowSlot  g_slot_storage;
extern void*       g_current_slot;  // extern "C", ASM 可访问
extern DWORD       g_owner_tid;     // 在 ExeRun hook 中初始化
extern int         g_re_depth;      // RE 执行深度 (RAII Guard)
extern int         g_orphan_count;  // stale txn 清理计数
```

### PostProcStub.asm

```asm
PostProcStub PROC
    push ebx                          ; save ebx
    mov  ebx, eax                      ; orig_eax
    mov  ecx, [g_current_slot]        ; ShadowSlot*
    test ecx, ecx
    jz   no_slot
    push dword ptr [ecx + 12]         ; hook_addr
    push ebx                           ; orig_eax
    call LogComparison                 ; returns re_eax
    add  esp, 8
    mov  ecx, [g_current_slot]
    mov  edx, [ecx + 8]               ; re_result_edx
    mov  ecx, [ecx]                   ; original_ret_addr
    pop  ebx
    jmp  ecx                          ; EAX=re_eax, EDX=re_edx
no_slot:
    mov  eax, ebx ; pop ebx ; ret
PostProcStub ENDP
```

## comparisonResult.log 格式

```
============ Different Calls ============

[bool XSurface::SetPixel(const Point2D& point, uint32_t color)-0x007BAEB0]

Call 1: SomeFunc()<-0x00XXXXXX
  Input:  this=0x09562090 point(Stack)=<Point2D,X=10,Y=20>(0x001AB304) color(Stack)=52758(0x0000CE16)
  Return: hook=true(0x00000001)(EAX) != original=false(0x00000000)(EAX)

================ Captures ================

[bool ClipLine(int start[2], int end[2], int clip_rect[4])-0x7BC2B0]

Call 1: XSurface::DrawLineEx()<-0x7BA689
  Input:   start(ECX)=[127,128](0x001AA31C) end(EDX)=[129,128](0x001AA324) clip_rect(Stack)=[0,0,255,255](0x001AA32C)
  Return: false(0x00000000)(EAX)

============= Same Compares ==============
============== None Calls ================
[int InitGame(bool no_cd)-0x0052BA60]
```

- 格式化: `ostringstream` (非 wsprintfA), Hex8 8 位十六进制, Fmt 类型感知, FmtArr 数组打印
- I/O: 差异立即 flush, 前 100 条立即 flush, 之后 32 条/1 秒批量
- 最终: static destructor 在 DLL unload 时 flush
- 数组: 十进制 `[v0,v1](0xADDR)` 格式
- 返回: 值(EAX) 或 hook=值(EAX) != original=值(EAX)

## CallRE 参数映射 (按调用约定)

```cpp
// thiscall: V.c(this), V.stk0(arg1), V.stk1(arg2), ...
// fastcall: V.c(arg1), V.d(arg2), V.stk0(arg3), ...
// stdcall/cdecl: V.stk0(arg1), V.stk1(arg2), ...
// 不再使用固定 4 参 (V.c,V.d,V.stk0,V.stk1) — thiscall 的 V.d 是垃圾值
```

## RE 函数模板 (gen_re_impl.py)

- `pixel_write`: Point2D 解引用 `int x = *(int*)(ptr+0)`, Lock→写像素→Unlock
- `pixel_read`: 同上解引用, Lock→读像素→Unlock
- `fill`: vt[GetRect] + vt[FillRectEx], named params (this_, color)
- 其他: TODO stub, 返回 0

## 已知问题

### EIP=0 崩溃 (Ares AI Team + Chrono) — 已归档

| 属性 | 值 |
|------|-----|
| 首次发现 | 2026-06-08 |
| 崩溃地址 | EIP=0x00000000 |
| 调用链 | GameFrameLoop → Scenario::Update → TeamClass::Update → RecruitMember → Math::DistSq2D |
| 触发 | AI team 管理 + Chrono/Paradrop/SuperWeapon 密集 + 长时间游戏 |
| 根因 | `g_UnitClassPool` 僵尸条目 (Ares use-after-free) |
| 与 hook_dll 关联 | 否 — 栈无 hook_dll, 无 VEH 级联, 无 m_backups 受损 |
| 处置 | 归档, 不阻塞开发 |

### ostringstream 堆压力

每次 Capture hook 触发 → write_entry → ostringstream 构造/析构 + str() 临时 string → 4 次堆操作。
13 Capture hooks × 每帧触发 N 次 → 数十万次/局。短期无崩溃风险, 长期可切换到轻量格式化。

### Reflect mode 性能

- idempotent=true: 零事务开销 (SetPixel 当前)
- idempotent=false: VirtualProtect × 872 页 ≈ 10-90ms — 仅适合低频函数 (InitGame 等)

## 修复历史 (关键 commit)

| Commit | 修复 |
|--------|------|
| `c9f35d7` | hook_size 指令边界对齐 (4/13) |
| `702d524` | VEH 无事务时 CONTINUE_SEARCH + .data 范围检查 |
| `03672ae` | Caller() 使用 functions.json 14K IDA 名 |
| `0ca7d87` | Stage 0a: TLS 改造 (static global ShadowSlot, 移除 fs:[0x18]) |
| `59d3fcf` | Stage 0b: PostProcStub 重写 + Discard() |
| `795ae3e` | Stage 0c: I/O 智能批量化 |
| `4a8bd9e` | 格式化重构: wsprintfA → ostringstream |
| `dfb3767` | CallRE 按调用约定映射参数 + Point2D 解引用 |
| `a70335f` | VEH 线程过滤 + idempotent 字段 |
| `8c3f8d7` | FmtArr 十进制输出 + 签名空白规范化 |
| `3c616d7` | EIP=0 崩溃归档为已知问题 |
