# Syringe — DLL 注入器详解

## 概述

Syringe 是一个通用的 DLL 注入框架，通过 **Windows Debugging API**（非 `CreateRemoteThread`）将带有 `.syhks00` PE 段的 DLL 注入目标进程，并在目标 EXE 的指定地址处放置 JMP 钩子。

- **版本**: `./Syringe/` 中为 Syringe 0.7.2.1 (开源，旧版); `D:\RA2MD\Syringe.exe` 为 SyringeEx 0.1.0.0 (闭源，新版，支持 `Syringe.json`)
- **新版新增**: `SyringeEx.dll` 扩展模块，`Syringe.json` 配置文件
- **许可证**: LGPLv3
- **源码位置**: `./Syringe/`
- **构建**: Visual Studio (`Syringe.sln`)，依赖 Zydis 5.0.0 反汇编引擎用于指令重定位

---

## 配置文件 — Syringe.json (新版，闭源)

**注意**: `./Syringe/` 中的源码是**旧版本** (0.7.2.1)，不支持 `Syringe.json`。`D:\RA2MD` 中实际使用的 Syringe.exe (2024/7/28, 425KB) 是**新版闭源**版本，支持 JSON 配置。

### 配置示例 (D:\RA2MD\Syringe.json)

```json
{
  "HookAnalysis": false,
  "DefaultExecutableName": "gamemd.exe",
  "DefaultCommandLine": "-cd -speedcontrol -AI-CONTROL -LOG -WIN -SOCKET",
  "IsRunningYR": true,
  "RemoteDatabaseDump": true,
  "DisableHooks": [],
  "EnableHooks": []
}
```

### 配置项说明

| 配置项 | 类型 | 说明 |
|--------|------|------|
| `HookAnalysis` | `bool` 或 `object` | 钩子分析开关。`false` 关闭，`true` 全开。可细分配置 |
| `DefaultExecutableName` | `string` | 默认启动的 EXE 名称 |
| `DefaultCommandLine` | `string` | 默认命令行参数 |
| `IsRunningYR` | `bool` | 运行的是尤里的复仇（显示额外信息） |
| `RemoteDatabaseDump` | `bool` | 关闭时是否导出到 RemoteData.dmp |
| `DisableHooks` | `array` 或 `object` | 禁用特定钩子 |
| `EnableHooks` | `array` 或 `object` | 启用特定钩子（优先级高于 DisableHooks） |

### HookAnalysis 详细配置

```json
{
  "HookAnalysis": {
    "ByLibrary": false,
    "ByAddress": true,
    "LibraryRange": ["Ares.dll"],
    "AddressRange": [["400000", "7FFFFF"]]
  }
}
```

| 子项 | 类型 | 说明 |
|------|------|------|
| `ByLibrary` | `bool` | 按库筛选 |
| `ByAddress` | `bool` | 按地址范围筛选 |
| `LibraryRange` | `string[]` | 只分析列出的库（空数组 = 全部） |
| `AddressRange` | `[string,string][]` | 只分析指定地址范围（空 = 全部） |

### DisableHooks / EnableHooks 按 DLL 控制

```json
{
  "DisableHooks": {
    "Ares.dll": ["HookName1", "HookName2"]
  },
  "EnableHooks": {
    "hook_dll.dll": ["Rev_ClipLine"]
  }
}
```

`EnableHooks` 优先级高于 `DisableHooks`。该功能允许每个 DLL 有对应的 JSON 配置文件。

---

## 命令行使用

```bash
Syringe.exe <exe名称> [-i=<dll> ...] [--args="..."] [--nodetach] [--nowait] [--handshakes]
```

| 参数 | 说明 |
|------|------|
| `<exe>` | 目标可执行文件名（第一个非 `-` 参数），如 `gamemd.exe` |
| `-i=<dll>` | 指定要注入的 DLL（可重复）。省略时默认为 `*.dll` |
| `--args="..."` | 传递给目标 EXE 的命令行参数 |
| `--nodetach` | 钩子安装完成后不分离调试器（调试用） |
| `--nowait` | 分离后立即退出（默认等待目标进程结束） |
| `--handshakes` | 启用 DLL 握手验证（调用 `SyringeHandshake` 导出函数） |

**示例**:
```bash
# 注入当前目录所有 DLL 到 gamemd.exe
Syringe.exe "gamemd.exe" -cd -SPAWN

# 只注入指定的 DLL
Syringe.exe "gamemd.exe" -i=hook_dll.dll -cd

# 保持调试器附着（调试用）
Syringe.exe "gamemd.exe" --nodetach
```

---

## 注入原理

Syringe 使用 **Windows Debugging API** 而非 `CreateRemoteThread`，核心优势是**无需目标进程已有线程**，`CREATE_SUSPENDED` 即可工作。

### 完整注入序列

```
1. CreateProcess(CREATE_SUSPENDED | DEBUG_ONLY_THIS_PROCESS)
   └─ 目标 EXE 主线程在第一条指令前冻结

2. VirtualAllocEx → 在目标进程中分配共享代码块 (AllocData)
   ├─ LoadLibrary/GetProcAddress 机器码桩 (~35 字节)
   ├─ DLL 名称字符串缓冲
   └─ 导出函数名称字符串缓冲

3. WriteProcessMemory → 写入机器码桩 + 修补字符串指针

4. WriteProcessMemory → 在 EXE 入口点 (0x7CD80F) 写入 INT3 (0xCC)

5. ResumeThread → 目标进程开始执行

6. [INT3 断点] → 入口点断点触发
   ├─ 对每个 DLL 的每个钩子:
   │   ├─ 设置 AllocData.LibName = "hook_dll.dll"
   │   ├─ 设置 AllocData.ProcName = "Rev_ClipLine"
   │   ├─ EIP := 机器码桩地址
   │   ├─ 目标进程执行: LoadLibraryA → GetProcAddress → INT3
   │   └─ 读取结果 AllocData.ProcAddress
   └─ 设置功能标志 (SyringeFeatures)

7. [钩子创建] → 在目标进程分配跳板内存 (EXECUTE_READWRITE)
   ├─ 构建 CALL 存根代码 (PUSHAD → CALL hook_fn → 重定位字节 → JMP 回退)
   ├─ 写入跳板
   └─ 在原始地址写入 JMP <trampoline>

8. DebugActiveProcessStop → 分离调试器
   └─ 目标进程正常运行，所有钩子已激活
```

### 跳板代码结构

每个被钩取的地址生成如下跳板：

```asm
; === 钩子调用块 (每个钩子 ~37 字节) ===
PUSHAD                          ; 保存所有通用寄存器
PUSHFD                          ; 保存 EFLAGS
PUSH <HookAddress>              ; 参数2: 钩子地址
PUSH ESP                        ; 参数1: REGISTERS* R (指向栈上的寄存器快照)
CALL <HookFunction>             ; 调用 DLL 导出的钩子函数
ADD ESP, 8                      ; 清理参数
MOV FS:[0x14], EAX              ; 存储返回值到 TIB 任意数据槽
CMP DWORD PTR FS:[0x14], 0      ; 返回值为 0?
JE  proceed                      ; 是 → 继续执行原始代码

; 非 0 返回值 → 跳转到返回值地址 (用于栈劫持)
POPFD
POPAD_custom                    ; 自定义恢复 (保证 ESP 正确)
JMP DWORD PTR FS:[0x14]         ; 跳转到返回值地址

proceed:
; 返回值为 0 → 恢复寄存器 + 执行被覆盖的原始字节
POPFD
POPAD_custom
<重定位的原始指令>               ; RebuildInstructions() 输出
JMP <original_addr + hook_size>  ; 跳回原始代码之后继续执行
```

### 同一地址多个钩子 → 链式调用

多个 DLL 钩取同一地址时，跳板串联多个 CALL 存根：

```
CALL hook1 → 返回非 0? → JMP FS:[0x14]
CALL hook2 → 返回非 0? → JMP FS:[0x14]
CALL hook3 → 返回非 0? → JMP FS:[0x14]
<重定位的原始指令>
JMP 回退
```

所有钩子都返回 0 时才执行原始代码。

### 寄存器返回通道: `FS:[0x14]`

Syringe 使用 TIB (Thread Information Block) 的 `ArbitraryUserPointer` 字段 (`FS:[0x14]`) 作为钩子函数返回值通道：
- 钩子函数返回 `DWORD` 值
- 返回 0 → 正常执行被覆盖的原始指令
- 返回非 0 → 跳转到返回值地址（允许钩子重定向控制流）

---

## 指令重定位 — RebuildInstructions()

Syringe 用 Zydis 反汇编器将被覆盖的原始字节重定位到跳板中。核心挑战：**相对偏移指令**（JMP、CALL、Jcc）在新地址处需要修正目标。

### 两遍算法

**第一遍**：解码 + 分类
- 对每个被覆盖的指令调用 `ZydisDecoderDecodeFull()`
- 检测相对指令 (`ZYDIS_ATTRIB_IS_RELATIVE`)
- 若目标在前导代码内部 → 标记为 `intraPrologue`（需重新映射）
- 强制使用近格式编码 (`ZYDIS_BRANCH_TYPE_NEAR`)：
  - `Jcc short` (2 字节) → `Jcc near` (6 字节)
  - `JMP short` (2 字节) → `JMP near` (5 字节)
  - `CALL near` (5 字节) → 保持 5 字节

**第二遍**：发射
- `ZydisEncoderEncodeInstructionAbsolute()` 在目标地址编码
- 内部跳转目标重新映射到新地址
- 未解码的尾部字节逐字复制

### 特殊情况
- `LOOP`/`LOOPE`/`LOOPNE`/`JCXZ`/`JECXZ` 仅有 rel8 短格式，不强制近格式
- 跨页面的 JMP/CALL 需要 5 字节对齐边界，Syringe 自动处理

---

## PE 段: `.syhks00` 与 `.syexe00`

### `.syhks00` — 钩子声明段

DLL 编译时将钩子元数据静态嵌入此段。Syringe 无需加载 DLL 即可通过解析磁盘上的 PE 文件发现钩子。

```cpp
// 16 字节对齐的结构体 (SYR_VER=2)
__declspec(align(16)) struct hookdecl {
    unsigned int hookAddr;   // 目标地址 (绝对地址, 基址 0x400000)
    unsigned int hookSize;   // 要覆盖/重定位的字节数
    const char * hookName;   // 导出函数名字符串指针
};
```

**DLL 侧声明** (来自 `Syringe.h`):
```cpp
#define DEFINE_HOOK(hook, funcname, size) \
    declhook(hook, funcname, size) \
    EXPORT_FUNC(funcname)
```

**Syringe 解析流程**:
1. 打开 DLL 的 PE → 查找 `.syhks00` 段
2. 以 16 字节步长遍历原始数据
3. 跳过 MSVC 翻译单元间的 NULL 填充条目
4. 解析每个 `hookdecl` → 收集 `{地址, 文件名, 函数名, 覆盖大小}`

### `.syexe00` — 主机兼容性段

声明 DLL 兼容的目标可执行文件列表。

```cpp
__declspec(align(16)) struct hostdecl {
    unsigned int hostChecksum; // EXE 名称哈希
    const char * hostName;     // EXE 名称 (不含 ".exe")
};
```

当 `.syexe00` 中存在匹配条目（如 `hostName = "gamemd"` → `"gamemd.exe"` 匹配目标 EXE）时，批准加载 DLL。

### DLL 加载授权决策矩阵

| `.syhks00` | 握手 | `.syexe00` | 结果 |
|-----------|------|-----------|------|
| ✅ | 启用 + S_OK | — | 加载 |
| ✅ | 启用 + 失败 | — | **拒绝** |
| ✅ | 未启用 | 匹配 | 加载 |
| ✅ | 未启用 | 无匹配 | 加载 |
| ❌ | — | — | 加载 (回退到 `.inj` 文件) |

---

## SyringeHandshake 导出

DLL 可以导出 `SyringeHandshake` 函数来在注入前验证 EXE 兼容性。

### 协议

1. Syringe 在自己进程中 `LoadLibrary` DLL
2. 查找导出 `SyringeHandshake`
3. 填充 `SyringeHandshakeInfo` 并调用

```cpp
struct SyringeHandshakeInfo {
    int cbSize;              // sizeof(SyringeHandshakeInfo)
    int num_hooks;           // DLL 的钩子总数
    unsigned int checksum;   // 钩子段的 CRC32
    DWORD exeFilesize;       // 目标 EXE 文件大小
    DWORD exeTimestamp;      // PE 时间戳
    unsigned int exeCRC;     // 完整 EXE 的 CRC32
    int cchMessage;          // Message 缓冲区大小
    char* Message;           // DLL 可填写错误信息
};
```

### 返回值

| 返回值 | 含义 |
|--------|------|
| `S_OK` | 允许加载 |
| `S_FALSE` | 跳过（不加载，不报错） |
| 失败 HRESULT | 拒绝加载，终止 |

### DLL 侧实现 (来自 `Syringe.h`)

```cpp
SYRINGE_HANDSHAKE(pInfo)
{
    if (pInfo) {
        pInfo->Message = "Shadow Execution Framework v1.0";
    }
    return S_OK;
}
```

---

## 源文件清单

| 文件 | 用途 |
|------|------|
| `Syringe/Main.cpp` | `WinMain` 入口 — 命令行解析、日志、创建 SyringeDebugger |
| `Syringe/SyringeDebugger.cpp` | **注入引擎** — 进程创建、INT3 处理、LoadLibrary 桩、钩子生成、握手 |
| `Syringe/SyringeDebugger.h` | 类声明、HookBuffer、BreakpointInfo、钩子/主机段结构体 |
| `Syringe/PortableExecutable.cpp` | PE 解析器 — DOS/NT 头、节、IAT 查找 (LoadLibraryA/GetProcAddress) |
| `Syringe/CRC32.cpp` | CRC-32 计算 (多项式 0xEDB88320) |
| `Syringe/Log.cpp` | 基于文件的时间戳日志 (写入 `syringe.log`) |
| `Syringe/Support.h` | 工具类 — `parse_command_line()`、异常处理 |
| `Syringe/Handle.h` | RAII 句柄包装 — `FileHandle`、`VirtualMemoryHandle` 等 |
| `Syringe/FindFile.h` | `FindFirstFile`/`FindNextFile` 迭代器 (用于 `*.dll` 通配符) |
| `Syringe/include/Syringe.h` | **公共 API 头文件** — `REGISTERS`、`DEFINE_HOOK`、`SYRINGE_HANDSHAKE`、`SyringeFeatures` |
| `Syringe/external/` | Zydis 5.0.0 + Zycore 1.5.2 (反汇编/编码器库) |
| `Syringe/tests/RebuildInstructionsTests.cpp` | 18 个指令重定位单元测试 |
| `Syringe/Debugger.vcxproj` | Syringe.exe 的 MSBuild 项目 |
| `Syringe/Syringe.sln` | Visual Studio 解决方案 |

---

## REGISTERS 类 — 钩子函数的参数

Syringe 的跳板在调用钩子函数前执行 `PUSHAD` + `PUSHFD`，然后将 `ESP` 作为参数传递。钩子函数收到的 `REGISTERS* R` 指向栈上的寄存器快照：

```cpp
class REGISTERS {
    // R->EAX()  → 读取钩子触发时的 EAX 值
    // R->ECX()  → 读取钩子触发时的 ECX 值
    // R->Stack<DWORD>(4)  → 读取 [ESP+4] (第一个栈参数)
    // R->Stack(0, value)  → 写入 [ESP] (修改返回地址)
    // R->Origin() → 钩子地址
};
```

**关键**: `PUSHAD` 顺序是 EAX, ECX, EDX, EBX, ESP, EBP, ESI, EDI。因此 `R->ESP()` 是 PUSHAD 之前的原始 ESP 值。

---

## SyringeFeatures — 功能标志

Syringe 在 DLL 加载后遍历每个 DLL 的 3 个导出标志并设置为 `true`：

```cpp
namespace SyringeFeatures {
    extern "C" __declspec(dllexport) inline bool ESPModification = false;
    extern "C" __declspec(dllexport) inline bool ZFPreservation = false;
    extern "C" __declspec(dllexport) inline bool ReladdrInstructionFixup = false;
}
```

DLL 可以在运行时检查这些标志以了解 Syringe 的能力。

---

## 与本项目 hook_dll.dll 的交互

### 关键兼容性约束

1. **导出序数偏移**: `PostProcStub.asm` 中不能添加新 `EXTERN`，否则 DLL 导出序数变化，`GetProcAddress` 返回错误地址
2. **`.syhks00` 段**: 每个 `DEFINE_HOOK` 宏在 `.syhks00` 段生成一个 16 字节条目
3. **`FS:[0x18]` vs `FS:[0x14]`**: 本项目的 `tls_storage.h` 使用 `FS:[0x18]` (TIB Self 指针) 以避免与 Syringe 的 `FS:[0x14]` (返回值通道) 冲突
4. **跳板返回值**: 钩子函数返回 0 时执行原始代码，返回非 0 时跳转到该地址（本项目利用此机制进行 PostProcStub 栈劫持）
5. **同一 DLL 多次加载**: Syringe 自动加载目录下所有带 `.syhks00` 段的 DLL。测试时必须确保 `D:\RA2MD` 中只有一个 `hook_dll.dll`

### 我们的 DllMain 流程

```
DLL_PROCESS_ATTACH:
  → DisableThreadLibraryCalls (减少不必要的调用)
  → shadow::InitTLS() (初始化 FS:[0x18] 槽位)
  → shadow::InstallVEH() (安装页级事务的 VEH 处理器)

-- Syringe 放置 JMP 钩子 --
-- 游戏运行，钩子触发 --

DLL_PROCESS_DETACH:
  → shadow::RemoveVEH()
  → headless::StopServer()
```

### ExeRun 钩子 (0x7CD810)

```cpp
DEFINE_HOOK(7CD810, HDS_StartServer, 9)
{
    headless::StartServer(25400, []() -> int {
        return mismatch_counter;
    });
    return 0; // 让原始 ExeRun 继续 (Ares/Phobos 也钩取此地址)
}
```

在 `DllMain` 返回后、游戏主循环开始前的安全时机启动 TCP 命令服务器。
