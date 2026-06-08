# Hook 对拍系统 — 完整审查资料

## 构建流程

```bash
# 1. 扫描 REVERSE 标记 + 生成钩子代码
cd D:\RA2YR_ReSource\injectFunctionTest
python gen_reverse_hooks.py

# 2. 构建 hook_dll.dll + gamemd.exe (VS 2022, Win32)
cmake -B D:\RA2YR_ReSource\build_win -G "Visual Studio 17 2022" -A Win32
cmake --build D:\RA2YR_ReSource\build_win --config Debug

# DLL 自动复制到 D:/RA2MD/hook_dll.dll

# 3. 运行测试
cd D:\RA2MD
Syringe.exe "gamemd.exe" -cd -SPAWN
# hook_dll.dll 由 Syringe 自动加载（.syhks00 section）
# comparisonResult.log 生成在 D:\RA2MD\comparisonResult.log
```

## 关键文件清单

| 文件 | 作用 |
|------|------|
| `injectFunctionTest/gen_reverse_hooks.py` | **主生成器**: 扫描 `REVERSE()` 标记 → 生成钩子 + RE_* stub + 编译诊断 |
| `injectFunctionTest/gen_re_impl.py` | RE_* 函数实现生成器（仅 Inject/Replace 模式） |
| `injectFunctionTest/gen/` (gitignored) | 自动生成的 `reverse_hooks.cpp`, `reverse_check.cpp`, `re_impl.cpp` |
| `injectFunctionTest/PostProcStub.asm` | MASM: 栈劫持后处理存根，调用 LogComparison，返回 RE 结果 |
| `injectFunctionTest/shadow_txn.h/cpp` | 页面级内存事务 (VirtualProtect + VEH)，Begin → 保护 .data → End → 恢复 |
| `injectFunctionTest/tls_storage.h` | `fs:[0x18]` TLS slot 布局 (ShadowSlot: ret_addr, re_eax, hook_addr, transaction) |
| `injectFunctionTest/hook_main.cpp` | DllMain (InitTLS + InstallVEH), SyringeHandshake, ExeRun hook |
| `injectFunctionTest/test_hooks.cpp` | 旧测试钩子 (CellStruct::Set — 已 `#if 0` 禁用) |
| `injectFunctionTest/headless_server.h/cpp` | TCP :25400 命令服务器 (STATS/MEM/CLICKAT/QUIT 等) |
| `injectFunctionTest/render_hooks.cpp` | DSurface::Blit 拦截 (UI 元素追踪) |
| `injectFunctionTest/CMakeLists.txt` | hook_dll 构建: 源文件 + 头文件 + MASM + hook_main |
| `include/gamemd/core/reverse_marker.hpp` | `REVERSE(addr, desc, mode)` NO-OP 宏 |
| `functionComparison.md` | **完整设计文档** (架构、模式、日志格式、陷阱) |

## 四层架构

```
Layer 1: REVERSE 宏标记
  src/render/surface.cpp: REVERSE(0x7BBAB0, "...", "Capture")
  ↓
Layer 2: gen_reverse_hooks.py (Python 代码生成器)
  → 扫描所有 .cpp/.hpp 文件中的 REVERSE() 标记
  → 解析下一行的 C++ 函数声明 (SIG 正则)
  → 查找 functions.json 确认完成状态 + 调用约定
  → 生成 gen/reverse_hooks.cpp (DEFINE_HOOK 存根)
  → 生成 gen/re_impl.cpp (RE_* 函数实现)
  → 生成 gen/reverse_check.cpp (#pragma/#error 诊断)
  ↓
Layer 3: C++ 钩子存根 (编译进 hook_dll.dll)
  Capture 模式: 记录参数 + 写入 comparisonResult.log + return 0
  Inject/Replace 模式: 创建 ShadowTransaction + 栈劫持到 PostProcStub
  ↓
Layer 4: 运行时 (Syringe 注入 → gamemd.exe)
  PostProcStub.asm: 原版返回 → LogComparison → RE 执行 → 对比 → 返回 RE 结果
```

## 执行流 (Inject/Replace 模式)

```
1. Hook 入口 → 保存 GPR + 栈参数到 in[] 数组
2. new ShadowTransaction → Begin() → VirtualProtect 872 页 .data → PAGE_READONLY
3. 劫持返回地址: R->Stack(0) = &PostProcStub, 保存原返回地址到 TLS
4. return 0 → Syringe 恢复寄存器 → JMP 到原函数入口
5. **原版函数运行** → VEH 捕获 .data 写入 → 备份页 → 解除保护
6. 原版 ret → 弹出 PostProcStub 地址 → 进入 PostProcStub
7. PostProcStub 保存 orig_eax → 调用 LogComparison(orig_eax, hook_addr)
8. LogComparison (C++):
   a. ShadowTransaction::EndCurrent() → 回滚所有 .data 页
   b. CallRE(idx) → 用保存的参数运行 RE_* 函数
   c. 对比 orig vs re → 写入 comparisonResult.log
   d. 存储 re_result_eax 到 TLS
9. PostProcStub 加载 re_result_eax → EAX → jmp 到原始调用者
```

## 钩子模式

| 模式 | 钩子行为 | 日志 | 依赖检查 |
|------|---------|------|---------|
| **None** | 不生成钩子，仅警告未完成 | 出现在 None Calls | 仅 WARNING |
| **Capture** | 记录输入/返回值到 log | `[C]` → Captures section | 无 |
| **Inject** | 原版先跑 → 回滚 → RE 跑 → 对比 | `[I]` → Same/Different | ERROR 如果未完成 |
| **Replace** | 同上 + 所有 callee 也必须替换 | `[I]` → Same/Different | ERROR 如果未完成或 callee 未完成 |

## 当前活跃钩子 (13 个 Capture)

| 地址 | 函数 | 调用约定 |
|------|------|---------|
| 0x7BC2B0 | ClipLine(Point2D*,Point2D*,RectangleStruct*) | fastcall |
| 0x7BAEB0 | XSurface::SetPixel(int,int) | thiscall |
| 0x7BAE60 | XSurface::GetPixel(int) | thiscall |
| 0x7BAF90 | XSurface::PutPixel(int,int,RectangleStruct*) | thiscall |
| 0x7BAF10 | XSurface::GetPixelAtCoords(int,RectangleStruct*) | thiscall |
| 0x7BAB90 | XSurface::WalkLine(Point2D*,Point2D*,callback) | thiscall |
| 0x7BA610 | XSurface::DrawLineEx(RectangleStruct*,Point2D*,Point2D*,DWORD) | thiscall |
| 0x7BA5E0 | XSurface::DrawLine(RectangleStruct*,Point2D*,Point2D*,DWORD) | thiscall |
| 0x7BA8C0 | XSurface::DrawDashedLine(RectangleStruct*,Point2D*,Point2D*,DWORD) | thiscall |
| 0x7BBAB0 | XSurface::Fill(uint32_t) | thiscall |
| 0x7BADC0 | XSurface::DrawRectEx(Point2D*,Point2D*) | thiscall |
| 0x7BAD90 | XSurface::DrawRect(RectangleStruct*,Point2D*,DWORD) | thiscall |
| 0x7BB350 | XSurface::DrawEllipseOutline(int,int,int,int,RectangleStruct*) | thiscall |

另有 29 个 None 模式标记（函数名已识别但未启用钩子）。

## 已知问题

1. **PostProcStub EAX 问题** — 跳转时 ECX 存地址，EAX 存返回值
2. **Inject/Replace 未测试** — 当前所有钩子都是 Capture 模式
5. **`fs:[0x18]` 危险** — 直接覆盖 TIB Self 指针，应改用 TlsAlloc()
6. **VEH 无 ThreadId 过滤** — 多线程场景下可能污染
7. **无 SEH/尾调用检测** — 可能导致 PostProcStub 被绕过
8. **`comparisonResult.log` I/O** — 使用 Win32 API (CreateFile/WriteFile/FlushFileBuffers)，无 CRT

## 日志格式 (§2.5)

```
============ Different Calls ============
[bool XSurface::Fill(uint32_t color)-0x007BBAB0]
Call 2: MainGame()<-0x0048CCCF
  Input:  this=0x09639A30  color(Stack)=0(0x00000000)
  Return: hook=1(0x00000001) != original=0(0x00000000)

================ Captures ================
[int ClipLine(Point2D* start, Point2D* end, RectangleStruct* clip_rect)-0x7BC2B0]
Call 1: XSurface::DrawLineEx()<-0x007BA62E
  Input:  start(ECX)=0x0019F2A0  end(EDX)=0x0019F2A8  clip_rect(Stack)=0x0A3F1B00
  Return: 0(0x00000000)

============= Same Compares =============
============== None Calls ================
[int InitGame(bool no_cd)-0x0052BA60]
[void MainGame()-0x0048CCC0]
```

## 崩溃日志 (未修复)

最新 `syringe.log` 末尾：

```
SyringeDebugger::HandleException: 0xC0000005 at 0x092C0032 (ucrtbased.dll+59E0032)
SyringeDebugger::HandleException: 0xC000041D at 0x092C0032 (ucrtbased.dll+59E0032)
SyringeDebugger::Run: Exception C000041D (3221226525).
```

`0xC000041D` = `STATUS_FATAL_USER_CALLBACK_EXCEPTION`，表示在用户回调中发生了未处理的异常。

### 早期会话中出现的 gamemd.exe 内部崩溃地址 (IDA 反编译)

**0x71D76B — InitializeCellSpreadTables** (访问 0xB0EE64 等 .data 地址):
```cpp
int InitializeCellSpreadTables() {
  int v4 = 0;
  dword_B0EDC0 = 0;
  dword_B0EDC4 = *(DWORD*)CellStruct::Set(&v4, 0x7FFF, 0x7FFF);
  memset(&unk_B0EDC8, 0, 0x20u);
  Array::ForEach((int)&unk_B0EDC8, 4, 8, ...);
  // ... 大量 CellStruct::Set 调用，写入 0xB0EDC0-0xB0EF00 范围
  dword_B0EE64 = *(DWORD*)CellStruct::Set(&v4, 1, 0);  // ← 0x71D76B crash
  dword_B0EE68 = *(DWORD*)CellStruct::Set(&v4, 0, 1);  // ← 0x71D779 crash
  dword_B0EE6C = *(DWORD*)CellStruct::Set(&v4, 1, 1);  // ← 0x71D794 crash
  // ...
}
```

**0x4790B9 — SoundWarning_Set** (写入 0x81C1D0):
```cpp
void SoundWarning_Set(int a1) {
  if (byte_89E3A0 == 1) {
    dword_81C1D0 = -2;  // ← 0x4790B9 crash, 写入 .data 段
  } else {
    if (a1 >= 0) a1 = 2;
    dword_81C1D0 = a1;
  }
}
```

**0x7C5EF9 — sub_7C5EE4** (写入 0x822D80):
```cpp
int sub_7C5EE4() {
  unsigned __int16 v1;  // ⚠️ 未初始化的栈变量
  dword_822D80 = v1;    // ← 0x7C5EF9 crash, 写入 .data 段
  return v1;
}
```

**0x402B5E — sub_402AF0** (构造/初始化, 写入 this+12):
```cpp
_DWORD* sub_402AF0(int this) {
  _DWORD* v2 = operator new(0x60u);
  memset(v2, 0, 0x60u);
  DListNode::InitEmpty(v2);
  v2[4] = 0;
  v2[3] = this;
  if (!(*(int(**)(_DWORD*))(this + 20))(v2)) {
    *(DWORD*)(this + 12) |= 1u;  // ← 0x402B5E crash
    InsertAfterDListNode(off_815E98, v2);
    if ((*(BYTE*)(this + 8) & 2) != 0) dword_87DE28 = 1;
    return v2;
  }
  // ... cleanup path
}
```

**0x6BBE65 / 0x6BDCB9 — WinMain** (主入口, 51108 字节, 过大不便完整展示)

### 涉及 .data 段的 crash 地址汇总

| 地址 | 函数 | 写入目标 | 在保护区? |
|------|------|---------|----------|
| 0x71D76B | `InitializeCellSpreadTables` | 0xB0EE64 | ✅ 0x812000-0xB7A000 |
| 0x4790B9 | `SoundWarning_Set` | 0x81C1D0 | ✅ 0x812000-0xB7A000 |
| 0x7C5EF9 | `sub_7C5EE4` | 0x822D80 | ✅ 0x812000-0xB7A000 |

已尝试的修复：`ShadowTransaction::End()` 添加全页解保护、禁用旧 `CellStruct_Set_shadow` 钩子、文件 I/O 改用 Win32 API。**崩溃仍未解决。**
