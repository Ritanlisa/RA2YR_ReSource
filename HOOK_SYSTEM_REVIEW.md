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

## 已知问题 (2026-06-09 更新)

| # | 问题 | 状态 | 备注 |
|---|------|------|------|
| 1 | hook_size 不对齐指令边界 (4/13 hooks) | **已修复** `c9f35d7` | PutPixel 8->5, WalkLine 8->5, DrawLine 8->7, GetPixelAtCoords 8->6 |
| 2 | VEH 无事务时 unprotect 所有页 | **已修复** `702d524` | 改为 CONTINUE_SEARCH + .data 范围检查 |
| 3 | Caller() 查找表覆盖不足 | **已修复** `03672ae` | 改用 functions.json 14K IDA 名 |
| 4 | `fs:[0x18]` 覆盖 TIB Self 指针 | **待修复** | 阶段 0a: 改用 `__declspec(thread)` + 全局缓存 |
| 5 | PostProcStub 硬编码 fs:[18h] | **待修复** | 阶段 0b: 改读 g_current_slot 全局变量 |
| 6 | Inject/Replace 未测试 | **待实施** | 阶段 1: Replace (SetPixel), 阶段 2: Inject |
| 7 | write_entry 每次同步 flush | **待修复** | 阶段 0c: 智能批量化 (差异立即 + 前N次立即) |
| 8 | 嵌套 hook reentrancy | **待实施** | 阶段 2: g_re_depth + RAII Guard |
| 9 | 事务异常逃逸无恢复 | **待实施** | ShadowTransaction::Discard() + hook 入口 stale 清理 |

## 下一步计划 (Inject/Replace 实施)

**核心认知**：Inject 和 Replace 模式执行流完全相同——原函数先跑(写被备份)→回滚→RE跑→对比→返回RE结果。区别仅在 RE 函数调用的 callee:
- **Inject**: RE 调原版 callee (通过地址，hook 透传)
- **Replace**: RE 调 RE callee (编译时链接，不触发 hook)

Replace 更简单(无 reentrancy)，先实施。

**实施顺序**:
```
Stage 0a: TLS 改造 (__declspec(thread) + g_current_slot)
Stage 0b: PostProcStub 重写 + ShadowTransaction::Discard()
Stage 0c: I/O 智能批量化
── 每步回归: 13 Capture x5 局 + log diff ──
Stage 1: Replace 模式 (XSurface::SetPixel)
Stage 2: Inject 模式 (re_depth + RAII Guard + 线程过滤)
```

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

## 崩溃历史 (已修复)

### Crash 1: 0xC000041D at 0x092C0032 (已修复)
**根因**: 4 个 hook_size 不对齐指令边界 → Syringe Zydis 生成损坏跳板 → 执行到垃圾字节
**修复**: `c9f35d7` 修正 min_safe_size (Capstone 验证 5/5/7/6)

### Crash 2: EIP=0x00000000, ECX=0x43B7 (已修复/缓解)
**表现**: Scenario::Update → HouseClass vtable[23] → NULL 函数指针调用
**根因**: VEH 无事务时对所有 WRITE AV 执行 unprotect+continue，破坏 Windows/Ares 的保护机制
**修复**: `702d524` VEH 无事务时 CONTINUE_SEARCH
**注意**: Claude Opus 4.7 指出 guard page 用 0x80000001 非 0xC0000005，VEH 修复可能不是真正根因。10 局+ 测试后未复现。

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

这些 .data 写入崩溃发生在早期会话中，原因是 VEH 无事务时强制 unprotect 所有 WRITE AV。已在 `702d524` 中修复（VEH 无事务时 CONTINUE_SEARCH）。
