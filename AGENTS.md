# RA2YR ReSource — 从 gamemd.exe 重建红色警戒 2/尤里的复仇源码

## 项目目标

逆向工程完整的 `gamemd.exe` C++ 源码并重建为独立可执行文件。

目标文件：32 位 Windows PE，MSVC 6.0 编译，约 7.6MB，基址 0x400000，含 19,067 个函数。

| 阶段 | 目标 | 产出 |
|------|------|------|
| Phase 1 (当前) | 完整逆向重建，功能对等原版 | 可直接替换的 Win32 EXE (`gamemd.exe`) |
| Phase 2 (远期) | 现代化重构 (现代渲染 / AI Bot / 原生模组系统) | 跨平台现代游戏引擎 |

当前构建产物：可执行文件 `gamemd.exe`，CMake + C++20。

## 项目专属行为准则

1. **只操作指定的文件。** 不修改未要求修改的文件。
2. **`D:\RA2MD\` 只能写入 `hook_dll.dll`。** 游戏目录不能放置任何其他文件。
3. **`D:\RA2MD\` 只能有一个 `hook_dll.dll`。** Syringe 自动加载所有带 `.syhks00` section 的 DLL，多个变体会导致 hook 冲突。
4. **`gen/*.cpp` 不在 git 跟踪中。** 切换分支后必须 `python gen_reverse_hooks.py` 重新生成。
5. **`PostProcStub.asm` 不添加任何新 EXTERN。** 新符号会偏移 DLL 导出序数，导致所有 hook 静默失效。
6. **REVERSE 管道相关文件改动需用户审查。** 见下方"REVERSE 管道保护文件"列表。
7. **测试验收最低标准：进程存活 15 秒 + `comparisonResult.log` 生成。** 两者缺一不可。

### 故障排除最低标准

任何崩溃报告必须包含：

- [ ] EIP 对应的反汇编（用 .map / dumpbin）
- [ ] 完整栈 dump（至少 64 字节）
- [ ] 寄存器全状态
- [ ] 复现率（N 次测试中崩 M 次）
- [ ] 对照实验（上一稳定版本 vs 当前版本崩溃率对比）
- [ ] 自己改动的代码 diff（最近 3 个 commit）

缺任何一项，禁止使用"根因是 X"这类确定性结论。可以提推测，但必须明确标注为推测。

### REVERSE 管道保护文件

以下文件构成对拍验证管道的核心基础设施。**未经用户明确许可，不得修改其中任何一个。**
违反此规则修改这些文件并导致"编译通过"或"测试通过"的假象，属于蓄意绕过验证的行为。

#### 生成器（代码逻辑）

- `injectFunctionTest/gen_reverse_hooks.py`   — REVERSE 扫描、钩子体生成、幂等判定集成
- `injectFunctionTest/gen_re_impl.py`          — RE_* 函数模板（修改此文件而非 gen/re_impl.cpp）

#### 运行时基础设施

- `injectFunctionTest/PostProcStub.asm`        — slot stack push/pop + LogComparison 调用
- `injectFunctionTest/tls_storage.h`           — ShadowSlot 结构体（slot stack + depth + txn）
- `injectFunctionTest/shadow_txn.h` / `.cpp`   — VEH handler + ShadowTransaction
- `injectFunctionTest/hook_template.hpp`       — 共享格式定义（Hex8/Fmt/FmtArr/WrFile）
- `injectFunctionTest/hook_main.cpp`           — DllMain + ExeRun hook（g_owner_tid）
- `injectFunctionTest/render_hooks.cpp`        — DSurface::Blit hook（UI 追踪）
- `injectFunctionTest/headless_server.cpp`     — TCP :25400 调试接口

#### 生成产物（gitignore，每次构建重新生成）

- `injectFunctionTest/gen/reverse_hooks.cpp`   — 钩子入口 + write_entry + 格式化
- `injectFunctionTest/gen/reverse_check.cpp`   — completed 校验
- `injectFunctionTest/gen/re_impl.cpp`         — RE_* 函数包装器

#### 分析管道

- `injectFunctionTest/analyze_idempotent.py`   — SCC 不动点幂等判定
- `injectFunctionTest/ida_extract_purity.py`   — IDA 直接 .data 扫描（Phase 1）
- `injectFunctionTest/ida_extract_phase3.py`   — IDA vtable 调用解析（Phase 3）
- `injectFunctionTest/gen_annotations.py`      — 三层标注生成
- `injectFunctionTest/annotations.json`        — 标注数据（提交 git）
- `injectFunctionTest/purity_effects.json`     — 纯度数据（提交 git）

#### 构建 + 元数据

- `injectFunctionTest/CMakeLists.txt`          — HOOK_REGEN_GENERATED option
- `injectFunctionTest/functions.json`          — 19K 函数元数据（completed/done/idempotent）
- `src/core/reverse_marker.hpp`     — REVERSE 宏定义
- `functionComparison.md`                      — 对拍管线设计文档

#### 锁定理由

这些文件的任何"便利性修改"（如临时 return true、跳过校验、改默认值、删错误检查）都会导致：

1. **静默退化**：对拍系统表面上"正常工作"，实则不再检测差异
2. **假阳性通过**：未完成的 RE 实现被标记为 verified，掩盖 bug
3. **管道腐化**：后续分析依赖的元数据被污染，连锁影响所有函数判定

修改策略：如需调整，**必须先向用户说明改什么、为什么、影响哪些函数**，获批准后再实施。
未经许可的修改将被视为绕过验证，对应的测试结果无效。

## 构建命令

```bash
# Windows EXE (VS 2022, 32-bit)
cmake -B build_win -G "Visual Studio 17 2022" -A Win32
cmake --build build_win

# hook DLL (Release, 必须输出 .map 文件)
cmake -B build_hook -G "Visual Studio 17 2022" -A Win32 -DHOOK_OUTPUT_DIR=D:/RA2MD
cmake --build build_hook --config Release

# 生成 REVERSE 钩子代码
cd injectFunctionTest && python gen_reverse_hooks.py

# Linux 验证编译 (x86_64 ELF, 仅代码验证, 不能运行游戏)
cmake -B build_linux -G "Unix Makefiles"
cmake --build build_linux
```

## comparisonResult.log 调试工作流

这是 Inject/Replace 模式下验证 RE 实现正确性的核心流程。

### 日志结构

```text
============ Different Compares ============  ← RE ≠ 原版，需修复
  [function_sig-0xADDR]
  Call N: caller()<-ret_addr
    Input:  ...                          ← 输入参数
    Return: hook=false != original=true  ← 差异

================ Captures ================   ← Capture 模式（仅记录）

============= Same Compares ==============   ← RE = 原版，已验证
  [function_sig-0xADDR]
    Return: hook=original=X                 ← 一致

============== None Calls ================  ← 零次调用的函数
```

### 调试步骤

```text
1. 运行游戏（菜单进入 + 主界面 15s+）
   → comparisonResult.log 生成

2. 检查 Different Compares 下的函数
   → 提取输入样本（Input 行）

3. 对每个差异函数：
    a. IDA 反编译原版 → 对比 RE 实现
    b. 重点关注: outcode 顺序、边界条件、浮点运算差异
    c. 修改 gen_re_impl.py 的模板（不是 gen/re_impl.cpp，后者被 gitignore 会被覆盖）
    d. python gen_reverse_hooks.py && cmake --build build_hook

4. 当函数从 Different → Same 迁移：
    a. functions.json: hook.done = true
    b. 源文件: REVERSE 标记改为 "None"
    c. 提交
```

### completed 硬性规则

**`completed=true` 只能设置在完全逆向完成的函数上。**

| 字段 | 含义 | 设置时机 |
|------|------|---------|
| `completed` | RE 实现完整（代码层面） | IDA 反编译→完整实现→编译通过 |
| `done` | 对拍验证通过（行为层面） | comparisonResult.log Same Compares |

**强制约束**：

1. `completed=true` 必须满足：函数在 `src/` 下有完整 C++ 实现（非 stub/return 0/TODO），且编译 0 error 0 warning。
2. 任何 Inject/Replace 钩子若对应函数 `completed=false` → `gen_reverse_hooks.py` 报 ERROR，构建中止。
3. 设置 `completed=true` 前必须对照 IDA 反编译确认所有分支、边界、返回路径均已覆盖。
4. 禁止批量标记 `completed=true`——每个函数须逐个核实。
5. 违反以上规则导致的崩溃由标记者承担全责。

### 常见差异原因

| 原因 | 示例 | 修复 |
|------|------|------|
| RE stub 返回 0 | `return 0; // TODO` | 实现完整算法 |
| outcode 顺序/边界不同 | `clip_r-1` vs `clip_r` | 匹配 IDA 反编译 |
| fild vs fld (int vs double) | 坐标类型不同 | 查 IDA 指令确认 |
| gen/re_impl.cpp 被覆盖 | 手动编辑后 regen 覆盖 | 改 gen_re_impl.py 模板 |

## 当前状态

| 指标 | 数值 |
|------|------|
| 已实现函数（存根） | ~140（~200+ stubs）+ **4,255 sub_* <50B 存根 (Task 17)** + **1,203 sub_* 50-500B 存根 (Task 18)** |
| 编译错误 / 警告 | **0 / 0** (gamemd 来自 _generated/ 和主要模块) |
| symbol-locked | **symbols-locked-v2** — 全部 19,067 函数 1:1:1 映射 (IDA↔signals↔hpp)，0 naming mismatches |
| completed (符号定义) | **19,133 / 19,133 (100%)** — 所有函数在 IDA/signals.json/hpp 中有名称和地址 |
| translated (完整IDA对照) | **472** — 完整 C++ 实现经 IDA 反编译验证（58 REVERSE + 183 structure + 312 other − 62 dedup） |
| IDA 命名 | **13,437 / 19,067 (70.5%)** — 822 sub_* 已自动命名 (Task 19) |
| IDA 类 header | **1,120 / 1,120 (100%)** — 所有类成员变量已解析，0 unknown_ |
| sub_* 残留 | **5,468** — 函数级别 (非类成员)，0 已翻译 |
| 命名一致性 | 215 剩余 (59 method_diff + 116 wrong_class + 40 other)，需逐函数审查 |
| REVERSE 标记 | ~32（2 Inject 活跃, 39 None） |
| 幂等自动判定 | Phase 1+2 完成: TRUE 31%, FALSE 36%, UNCERTAIN 33% |
| 源文件 | ~130 .hpp + ~135 .cpp (~110,000 行) |

## 文档分布

主 AGENTS.md 只保留**行为准则、入口指引、项目特定经验**。详细技术资料在 `docs/` 下：

| 文档 | 内容 |
|------|------|
| `docs/coverage.md` | 编译状态、函数覆盖、vtable、类层次、成员变量 inventory |
| `docs/ecosystem.md` | 四重参考源、Ares/Phobos/Spawner/Syringe 完整生态 |
| `docs/todo.md` | R0-R1 + P0-P5 完整工作分解 |
| `docs/menu_architecture.md` | 19-case 状态机、Dialog 系统、BINK 渲染链 |
| `docs/menu_lessons.md` | BINK/主菜单踩坑记录、失败尝试、工作基线 |
| `docs/dsurface.md` | Surface 继承链、38 条 vtable、IDDS7 映射 |
| `docs/mix_files.md` | 格式检测、Blowfish、层级、哈希、OpenRA/XCC 参考 |
| `docs/globals.md` | 全局变量表、IDA 命名函数、Locomotor GUID 表 |
| `docs/voxel_format.md` | VXL/HVA 格式概述 |
| `docs/isometric.md` | 坐标转换数学、方向偏移 |
| `docs/ddraw_integration.md` | cnc-ddraw 配置、MinGW 交叉编译 |

接手新任务前先看 `docs/coverage.md` 了解当前进度，再看具体子领域文档。

---

## IDA 函数命名规范（项目特定）

### 核心认知

**vtable 只覆盖虚函数**。非虚成员函数（构造/析构/普通方法/静态方法）不在 vtable 中，但仍是类成员。**不能仅凭"不在 vtable"就判为全局函数**。

### 判定优先级

| 方法 | 置信度 | 覆盖范围 |
|------|--------|----------|
| vtable 中出现 | 100% | 仅虚成员函数 |
| `__thiscall` 调用约定 | ~95% | 虚 + 非虚成员函数 |
| 构造/析构模式（`mov [ecx], vtable_ptr; ret this`） | >99% | 构造函数 |
| 旧 `.i64` 命名 `ClassName_MethodName` | 不可靠 | 仅参考 |
| `__stdcall` / `__cdecl` | ~90% 全局 | 静态成员函数也用 stdcall |

### 命名格式

| 类型 | 格式 | 示例 |
|------|------|------|
| 成员函数 | `ClassName::Method` | `BulletClass::FlightUpdate` |
| 全局函数 | `VerbNounPhrase`（PascalCase） | `DistributeRandomMapTerrain` |
| 未命名 vtable 条目 | `ClassName::sub_XXXXXX` | `BuildingClass::sub_45A3C0` |
| 静态成员（无法区分） | 保守用 `VerbNounPhrase` | — |

### 常见错误

| 错误 | 例子 | 正确 |
|------|------|------|
| 双重前缀 | `VectorClass::VectorClass_vt00` | `VectorClass::vt00` |
| j_ 跳转丢类名 | `MouseClass::j_SidebarClass_InitButtons` | `SidebarClass::InitButtons` |
| loc_ 在 vtable | `AbstractClass::loc_45FE50` | `AbstractClass::sub_45FE50` |
| 短词贪婪匹配 | `Control::InitAudioController` | `AudioController::Init` |
| nullsub 加前缀 | `nullsub::2` | `nullsub_2` |

### 类名提取规则

从 `VerbNounClassName` 格式函数名提取类名时：
1. 取**最长匹配**有意义类名
2. 短通用词（Control/Count/File/Stream）不优先于长专用词（AudioController/RefCount）
3. 先用已有 `::` 命名构建类字典，找不到时从 `_` 格式补充

### IDA Python 踩坑

- `xrefblk_t` 非 `xrefblt_t`
- `ida_funcs` 无 `FUNC_THISCALL` 标志
- `tinfo_t.get_cc()` 不存在，用 `dstr()` 解析：`"__thiscall" in tif.dstr()`
- `func_type_data_t.cc` 属性不可用
- 大脚本写 `.py` 用 `py_exec_file` 执行（不用 `py_eval`）

### 改名后即时持久化

每次批量改名后立即 `idb_save()`。意外关闭丢失所有未保存命名。

### 批量改名管线

```
Phase 1: Vtable 扫描
  扫描 .rdata → 分组连续函数指针为 vtables
  按多数投票确定 vtable 所属类
  未命名 → ClassName::sub_XXXXXX

Phase 2: Thiscall 批量检测
  非 vtable、非 :: 的函数 → tif.dstr() 检查 __thiscall
  → 取最长类名匹配改名

Phase 3: 旧 .i64 交叉验证
  仅当目标地址在 vtable 或 thiscall 确认后才改为 :: 

Phase 4: 清理
  双重前缀 / j_ 跳转 / loc_ 在 vtable / nullsub
```

---

## 编码约定

1. namespace: `gamemd` 或 `ra2::game`
2. `enum class` + `constexpr operator|` for 位标志
3. 虚函数按 YRpp vtable 顺序，`__stdcall` 调用约定
4. C++20: `noexcept`, `override`, `constexpr`, `= default`
5. RA1 看结构、YRpp 看偏移、IDA 验证、cnc-ddraw 接口参考
6. 前向声明匹配实际定义（class vs struct）
7. MIX 文件名仅存 hash ID
8. **C 风格强制转换**: 用 `(Type)expr` 或 `Type(expr)`，禁止 `static_cast`/`reinterpret_cast`/`dynamic_cast`（MSVC 6.0 原始风格）
9. **类成员访问**: 只用 `.` 和 `->` 运算符，禁止指针算术访问成员

### 类成员访问——模式识别规则（强制）

**IDA 反编译器输出 raw offset 是因为它不知道类布局。我们有 1,120 个完整 class header，知道每个 offset 对应的成员名。必须还原。**

以下 ANY 模式出现 = 类成员访问，必须改写为 `ptr->MemberName`：

| 模式 | 示例 | 改写 |
|------|------|------|
| `(int*)(this) + N` | `*(int*)(this) + 47` | `this->memberAtOffset188` |
| `((int*)ptr)[N]` | `((int*)this)[191] = 1` | `this->memberAtOffset764 = 1` |
| `typeData[N/4]` | `typeData[2048/4]` | `type->MemberAt2048` |
| `*(int*)((uint8_t*)ptr + N)` | `*(int*)((uint8_t*)*target + 704)` | `(*target)->MemberAt704` |
| `(int*)((uint8_t*)ptr + N)` | `(int*)((uint8_t*)this + 20)` | `&this->MemberAt20` |

**识别口诀**：
- 指针 + 常数偏移 → 成员变量（`this+188` = `this->field_BC`）
- 数组索引 + `/4` 倍率 → 成员变量（`ptr[588/4]` = `ptr->field_24C`）
- `ax+b` 线性偏移 → 类的数组 or 成员是数组的类
- 对指针做常数偏移加法后再类型转换 → 确定是类成员变量

**方法**：
1. 从 IDA 反编译看到 `*(int*)((uint8_t*)house + 588)`
2. 查 `house.hpp`：588 对应 `AvailableCredits`
3. 写 `house->AvailableCredits`

**违规 = 翻译不合格，整个批次驳回。**

### 跨 namespace 枚举桥接

同一枚举在两个 namespace 需用 `static_cast<ra2::game::Mission>(static_cast<int>(gamemd::Mission::X))` 桥接，不应在局部添加 `using` 声明（会与另一 namespace 冲突产生歧义）。

---

## 项目特定方法论（hook 框架）

以下经验是从崩溃实战中提取的项目特定原则。**通用方法论已在全局 AGENTS.md**，这里只列项目特定的技术约束。

### M1: hook_size 必须对齐指令边界

- hook_size 必须 ≥ 5（容纳 JMP）**且**等于前 N 条完整指令的字节总和
- **用 Capstone 验证**，不要手工数或信任 functions.json 的 min_safe_size
- 每个新钩子加入前，加入 hook_size 断言到 `gen_reverse_hooks.py`
- 失败案例：4/13 hooks 不对齐导致 Zydis 静默生成损坏跳板，崩溃位置在跳板内距 region 起始 ~50 字节

### M2: VEH 只在事务激活时处理 .data 范围内的 AV

- 无事务时：`return EXCEPTION_CONTINUE_SEARCH`，绝不做 unprotect
- 事务激活时：只处理 `.data` 范围（0x812000-0xB7A000）内的写 AV，范围外也 CONTINUE_SEARCH
- VEH 是进程级的，所有线程的 AV 都走这个 handler
- 每个 hook 入口必须检查 `GetCurrentThreadId() != g_owner_tid`
- 失败案例：音频线程（`AudioStreamThreadProc` @ 0x409848、`sub_7B8610` @ 0x7B868E）写 .data 触发 VEH，并发访问 m_backups 导致 vector 腐坏

### M3: CallRE 必须按调用约定映射参数

- **thiscall**: ECX=this, 栈参数 = arg0, arg1, ...
- **fastcall**: ECX=arg0, EDX=arg1, 栈参数 = arg2, ...
- **stdcall/cdecl**: 全部在栈上
- **绝不能**固定 4 参 `(V.c, V.d, V.stk0, V.stk1)`——这会把 thiscall 的 EDX 垃圾当参数传入
- 失败案例：SetPixel `RE` 函数把 EDX (=vtable 地址) 当 X 坐标传给 Lock，崩在 RE_XSurface_SetPixel+0x35

### M4: ostringstream 在 hook 高频路径有显著代价

- 局部 `std::ostringstream os` 每次构造析构 ≥2 次堆操作
- `os.str()` 返回临时 std::string → 额外 1-2 次堆操作
- 13 个 Capture hook × 每帧多次触发 × 4 次堆操作 = 数十万次/局
- **高频路径继续用 wsprintfA + 栈缓冲 + WriteFile**，ostringstream 保留给 PostProcStub 后的 LogComparison（每次 Inject 才触发一次）

### M5: 二进制分析中 EDX 指向 vtable ≠ 虚调用失败

- BuildingClass vtable 0x7E3EBC 扫描 0-49 槽位无 NULL，但崩溃时 EDX=0x7E3EBC
- EDX 可能被用于：非虚调用的函数表 / RTTI 比较 / 对象身份验证（`CMP EDX, vtable`）
- 不要自动假设"EDX=vtable 就意味着虚调用失败"
- 用 IDA 反汇编崩溃前指令，确认 EDX 的实际加载来源（`mov edx, [ecx]` vs `mov edx, [ecx+24h]` 含义完全不同）

### M6: 自动化 hook_size 验证 (Capstone)

- 每次 `gen_reverse_hooks.py` 运行时，对每个 Inject/Replace 钩子用 Capstone 解码目标地址指令
- 自动计算正确的 `min_safe_size`（前 N 条完整指令字节总和≥5）
- 与 functions.json 中声明值不一致时 → WARNING + 自动更新
- 无需手动维护 hook_size——从二进制直接计算
- 依赖：`capstone` Python 包，读取 `D:\RA2MD\gamemd.exe`

| 地址 | 函数 | hook_size |
|------|------|-----------|
| 0x7BC2B0 | ClipLine | 9 |
| 0x7BAEB0 | XSurface::SetPixel | 5 |
| 0x7BAE60 | XSurface::GetPixel | 5 |
| 0x7BAF90 | XSurface::PutPixel | 5 |
| 0x7BAF10 | XSurface::GetPixelAtCoords | 6 |
| 0x7BAB90 | XSurface::WalkLine | 5 |
| 0x7BA610 | XSurface::DrawLineEx | 6 |
| 0x7BA5E0 | XSurface::DrawLine | 7 |
| 0x7BA8C0 | XSurface::DrawDashedLine | 8 |
| 0x7BBAB0 | XSurface::Fill | 8 |
| 0x7BADC0 | XSurface::DrawRectEx | 8 |
| 0x7BAD90 | XSurface::DrawRect | 8 |
| 0x7BB350 | XSurface::DrawEllipseOutline | 8 |

hook_size 从 functions.json 自动读取，不要手动改。

### **M7: 故障诊断（必须严格遵守！）**

**对于崩溃事件，你必须整理崩溃报告后分析崩溃原因。**
**任何崩溃报告必须包含:**

[ ] **EIP 对应的反汇编 (用 .map / dumpbin)**
[ ] **完整栈 dump (至少 64 字节)**
[ ] **寄存器全状态**
[ ] **复现率 (N 次测试中崩 M 次)**
[ ] **对照实验 (上一稳定版本 vs 当前版本崩溃率对比)**
[ ] **自己改动的代码 diff (最近 3 个 commit)**

**缺任何一项,不许下"根因"结论。**


---

## 逆向经验（项目特定取证技巧）

### 函数翻译前必检工具：`tools/pre_translate.py`

**此工具必须在翻译任何函数之前运行。** 自动化 IDA 偏移解析，减少 80% 的手动偏移分析时间。

```bash
# 按函数名运行
python tools/pre_translate.py UnitClass::Scatter

# 按地址运行
python tools/pre_translate.py 0x743A50

# 指定类（当函数名不含类名时）
python tools/pre_translate.py --class UnitClass 0x743A50
```

**工作流程：**
1. Agent 调用 `ida-pro-mcp_decompile` 获取伪代码
2. Agent 将结果 (JSON: `{"code": "...", "refs": [...]}`) 保存到 `.omo/mcp_input.txt`
3. Agent 运行 `python tools/pre_translate.py FuncName`
4. 读取输出 `.omo/translation_maps/pre_translate_*.md`

**产出（Markdown）：**
- **Member Offsets** — IDA 伪代码 → 字节偏移 → 成员名（通过 member_lookup.json + 继承链）
- **UNKNOWN Members** — 最近已知邻居 + 修复建议（`Check offset within 'X' at +N`）
- **Vtable Calls** — `(*this + N)` / `(v12 + 1152)` → vtable 索引
- **Global Variables** — `MEMORY[0xADDR]` / `dword_XXXXXX` → 全局变量名
- **Callee Functions** — 所有被调用函数 + 可用性检查 (functions.json `completed`)

**门控逻辑：**
- 任何 UNKNOWN 偏移 → exit 1: "Add members to headers before translation"
- 任何不可用的被调用函数 → exit 1: "Fix missing symbols before translation"
- 全部已解析 → exit 0: GATE PASSED

**关键：** 不要在门控未通过的情况下开始翻译。先补全 header/全局变量/被调用函数，再重新运行。

### 代码质量门控系统（Clang AST）

**目的：** 门控系统强制执行翻译阶段的质量红线——禁止裸指针算术、禁止类型越狱、禁止添加新符号、禁止头文件实现、禁止 IDA 产物命名。这不是建议，是硬性阻塞。通过门控是编译的前提条件。

**⚠️ 严禁绕过门控：** 以下行为属于蓄意欺诈，一经发现全部驳回：
- 把裸偏移放到 `.hpp` 的 inline 函数里（门控查不到 .hpp）
- 用 `union { int; Type*; }` 绕类型系统
- 用 `std::bit_cast` / `memcpy` 做越狱转换
- 用 `#if 0` 把原始反编译藏起来假装翻译了
- 在函数体内定义新 struct/class 绕开类型检查
- 用 `goto` 跳转、`__asm` 内联汇编、函数指针强转
**门控检查所有修改过的文件（.cpp + .hpp），不是只查 .cpp。绕过门控的代码会在下一轮检查中被发现。**

**概述：** `cmake --build build_win` 在每次编译前自动运行代码质量门控检查。检查器使用 Clang AST（非正则）分析所有从 `auto-fill-baseline` 修改过的 .cpp 函数和 .hpp 文件。

**运行方式：**
```bash
# 完整构建（含门控）：
cmake --build build_win

# 单独运行门控：
python tools/check_translated_functions.py src/structure/building.cpp

# 单独检查 hpp 实现：
python -c "import sys; sys.path.insert(0,'tools'); from clang_ast_checker import ClangChecker; c=ClangChecker('src/structure/building.hpp'); c.parse(); print(c.check_hpp_implementations())"
```

**⚠️ 输出禁止截断：** 门控/cmake 输出**严禁**使用管道截断或筛选。包括但不限于：
- 禁止 `| Select-Object -Last N`
- 禁止 `| Select-Object -First N`  
- 禁止 `2>&1 | ... ` 任何截断操作
- 禁止 `| tail`、`| head`
完整输出对于诊断至关重要——差这一点上下文就是差全部。

**检查项目：**

| 检查 | 类别 | 触发条件 | 修复方案 |
|------|------|----------|----------|
| **new-symbol** | .cpp/.hpp | 在 git-diff 新增行上声明任何新符号（VarDecl/FunctionDecl/FieldDecl/ClassDecl/EnumDecl/TypedefDecl） | 禁止添加新符号。只能修改已有符号的名称、签名或函数体。新成员须通过 IDA→header pipeline 添加，不能临时添加 |
| **hpp-impl** | .hpp | 头文件中存在函数体实现（FunctionDecl.isDefinition()） | 将实现移到 .cpp 文件。hpp 只允许声明（纯虚函数 `=0` 除外） |
| **ptr-arithmetic** | .cpp | 指针对整数偏移的加减法 `(uint8_t*)ptr + N` | 改用 `ptr->memberName` 成员访问 |
| **cast-index** | .cpp | 指针下标 `((Type*)ptr)[N]` | 改用 `ptr->memberName` 成员访问 |
| **ptr-nonptr-conv** | .cpp | 指针↔非指针之间的双向转换 | 禁止 `(int)ptr` / `(Type*)intVal`。用 `std::bit_cast` 或成员访问 |
| **illegal-ptr-cast** | .cpp | 无关指针类型间的 C 风格转换（如 `TypeA* → uint8_t*`）；void* 转换 | 只允许父子类指针转换。void* 禁止 |
| **non-ptr-to-ptr** | .cpp | 非指针类型转换为指针类型 `(Type*)intVal` | 禁止。用已有成员访问 |
| **ida-naming** | .cpp | 成员/变量名包含 `field_`/`dword_`/`sub_`/`unk_` | 重命名为有意义的名字 |
| **cxx-cast** | .cpp | 使用 `static_cast`/`dynamic_cast`/`reinterpret_cast` | 改用 C 风格转换 `(Type)expr` |
| **goto** | .cpp | 使用 `goto` 语句 | 改用结构化控制流 `if/else/for/while` |
| **func-ptr-cast-calls** | .cpp | 调用经过 C 风格转换的函数指针 | 使用正确的函数声明 |

### 违规详细修复指南

#### new-symbol（新增符号）
**问题**：翻译时在函数体内或类定义中新增了变量、成员、函数、类。
**禁止行为**：
- 添加局部变量 `int result;`（把逻辑合并到现有变量）
- 添加类成员 `bool HasTiberiumAmmo;`（必须通过 IDA→header pipeline，验证二进制偏移）
- 添加辅助函数（所有函数必须预先在 header 中声明）
- 添加 union / struct 来绕开类型转换（门控禁止在翻译文件中定义任何新类型）
**允许行为**：
- 修改现有函数的函数体
- 修改现有成员的名称（重命名）
- 修改函数签名（参数类型、返回类型）
**修复步骤**：
1. 删除新增的符号
2. 如果需要新增成员来映射二进制偏移：先运行 `python tools/pre_translate.py FuncName`
3. 确认偏移对应的成员是否已在 header 中存在（可能用不同名称）
4. 如确实缺失，向用户报告，由用户通过 IDA pipeline 添加

#### hpp-impl（头文件实现）
**问题**：在 .hpp 文件中有函数体实现（包括 `{ return ...; }`）。
**注意：门控不排除任何实现形式。** 模板函数体、`=default`、`=delete` 均在禁止之列。仅 `= 0` 纯虚函数不受此限制。
**禁止行为**：
- 在 .hpp 中写任何函数体——包括普通函数、模板函数、inline 函数、`=default`、`=delete`
- 在 .hpp 中写辅助函数来隐藏原始偏移
**允许行为**：
- 函数声明（仅签名 + 分号）
- `= 0` 纯虚函数
- `#include` 实现文件（使用非 `.hpp` 扩展名如 `.inl`、`.ipp`、`.tpp`）
**修复步骤**：
1. 将函数体从 .hpp 移到对应的 .cpp 文件
2. 对于模板：将实现移到 `.inl` 文件，在 .hpp 末尾 `#include "xxx.inl"`（门控不检查非 `.hpp` 扩展名）
3. .hpp 中只保留声明：`ReturnType FuncName(Params);`

#### ptr-arithmetic（指针算术） / cast-index（指针下标）
**问题**：用 `(uint8_t*)ptr + offset` 或 `((int*)this)[N]` 直接计算偏移。
**修复步骤**：
1. 运行 `python tools/pre_translate.py FuncName` 获取偏移→成员映射
2. 将原始偏移替换为 `this->memberName` 或 `ptr->memberName`
3. 如果偏移映射返回 UNKNOWN：检查 member_lookup.json 中该 class 的成员列表
4. 如果确实没有对应成员：向用户报告缺失

#### ptr-nonptr-conv / non-ptr-to-ptr / illegal-ptr-cast（类型转换违规）
**问题**：指针和整数之间互转，或用 `(uint8_t*)` 在无关类型间强转。
**禁止行为**：
- `(int)ptr` / `(Type*)(int)val` — 指针↔整数
- `(uint8_t*)classPtr + offset` — 强转为无关指针类型后做偏移
- `std::bit_cast<Type*, uint32_t>(val)` — bit_cast 越狱
- `(void*)ptr` / `(Type*)(void*)val` — void* 中转
- `memcpy(&ptrVar, &intVar, 4)` — memcpy 越狱
**允许行为**：
- 父子类指针互转：`(ParentClass*)childPtr`（向上转型，C 风格），`dynamic_cast<ChildClass*>(parentPtr)`（向下转型）
- 成员访问：`this->Type`、`ptr->Member`
**修复步骤**：
1. 识别偏移对应的成员名（使用 pre_translate.py）
2. 直接使用成员访问替代裸指针操作
3. 如果确实需要类型转换（如多态转换），使用 `dynamic_cast` 或父类 C 风格转型

#### bit-cast-bypass / memcpy-bypass（越狱操作）
**问题**：用 `std::bit_cast` 或 `memcpy` 绕过类型系统读取原始字节。
**禁止行为**：
- `std::bit_cast<Type*>(rawInt)` — 整数→指针的越狱转换
- `memcpy(&ptrVar, &intVar, sizeof(ptrVar))` — 通过 memcpy 绕开类型检查
**修复步骤**：
1. 删除 bit_cast/memcpy 调用
2. 使用 `ptr->memberName` 直接访问成员
3. 检查是否已有合适的成员名映射到该偏移

#### ida-naming（IDA 产物命名）
**问题**：变量名或成员名包含 `field_`、`dword_`、`sub_`、`unk_` 前缀。
**禁止行为**：手动重命名符号。**所有符号重命名必须通过 `tools/rename_symbol.py` 脚本执行。**
**修复步骤**：
1. 无法通过 "查找" 来解决——IDA 里的名字和代码里的名字一样，都是 `field_*` 格式
2. 使用脚本批量重命名：`python tools/rename_symbol.py OldName NewName`
3. 脚本自动同步：所有源文件 + signals.json + member_lookup.json + IDA
4. 先 dry-run：`python tools/rename_symbol.py OldName NewName --dry-run`
5. 确认后执行：`python tools/rename_symbol.py OldName NewName`

**重命名脚本功能**（`tools/rename_symbol.py`）：
- 全 `.hpp` / `.cpp` 文件 word-boundary 精确替换
- `signals.json` 中符号名同步
- `member_lookup.json` 中成员名同步
- IDA Pro 中符号重命名（需要 IDA MCP 运行中）
- 支持 `--dry-run` 预览模式
- 支持 `--no-ida` 跳过 IDA 同步

#### cxx-cast（C++ 风格转换）
**问题**：使用了 `static_cast`、`reinterpret_cast`。
**允许**：`dynamic_cast<ChildClass*>(parentPtr)` 用于父→子安全转换。
**修复步骤**：
1. `static_cast<Type>(val)` → `(Type)val`
2. `reinterpret_cast<Type*>(val)` → 禁止。先检查为什么需要重新解释内存——应该用成员访问。

#### translation-incomplete（翻译不完整）
**问题**：函数被标记为"翻译不完整"。来自 `verify_execution_flow.py` 的 exec-flow 门控。
**原因**：C++ 实现的逻辑与 IDA 二进制伪代码不完全匹配。

**⚠️ 门控不会告诉你具体缺什么。** 门控只报"翻译不完整"这一句话。Agent 必须自己对比 C++ 代码和 IDA 反编译来发现缺失。

**手动对比流程**：
1. 从 IDA 获取反编译：`ida-pro-mcp_decompile 0xADDR`
2. 仔细阅读 C++ 实现和 IDA 伪代码，逐行对比
3. 常见的缺失类型：
   - IDA 有虚函数调用但 C++ 没有 → 虚调用丢失。查 vtable_offsets.json 或 header 找到正确方法名，添加 `this->Method()` 调用
   - IDA 有全局变量访问但 C++ 没有 → 全局变量读取丢失。查 globals_*.hpp 或 cmdline.hpp 中的 `extern` 声明，添加对应的全局变量引用
   - IDA 有某个函数调用但 C++ 没有 → 直接调用丢失。用 IDA MCP 查函数地址对应的函数名，添加调用
   - IDA 有 5 个条件分支但 C++ 只有 3 个 → 缺少 `else if` 或条件判断。对比 IDA 的 `if/else` 链，补全分支
   - IDA 有循环体但 C++ 用内联替代 → 内联展开不被门控识别。使用正确的 vtable 调用或循环结构
4. 修复后验证：`python tools/verify_execution_flow.py 0xADDR`

**注意**：忽略门控报错直接提交的代码会被驳回重做。Agent 必须自己对 IDA 做手动对照——门控不会提供差异详情。

### 从原始偏移定位类成员（详细流程）
1. **运行 pre_translate.py**：`python tools/pre_translate.py ClassName::FuncName`
2. **查看输出**：`.omo/translation_maps/pre_translate_*.md`
   - Resolved 部分：已解析的偏移→成员映射
   - UNKNOWN 部分：无法解析的偏移，显示最近的已知邻居
3. **查 member_lookup.json**：如果 pre_translate 返回 UNKNOWN，运行：
   ```python
   import json
   d = json.load(open('tools/member_lookup.json'))
   cls = d['BuildingClass']  # 替换为目标类
   items = sorted(cls.items(), key=lambda x: int(x[0]))
   nearby = [(k, v['name']) for k, v in items if abs(int(k) - TARGET_OFFSET) < 20]
   print(nearby)
   ```
4. **查 IDA 结构体**（最后手段）：调用 `ida-pro-mcp_py_eval` 检查 struct 成员
5. **如果所有方法都找不到**：向用户报告缺失的成员偏移，不要自行在 header 中临时添加

### 门控报错格式
```
FAIL: file.cpp:行号: 函数名 -- 类别: 具体问题描述。FIX: 修复建议。
```

### 加速 cmake 构建
```bash
# 使用 MSBuild 并行（自动检测 CPU 核心数）
cmake --build build_win -- /m

# 或设置具体并行数
cmake --build build_win -- /m:8

# Debug 构建（增量编译，仅重编译修改过的文件）
cmake --build build_win --config Debug
```

### INI Key → 成员变量映射验证

反编译类的 READ_INI/ReadINI 函数，查找 `INIClass::GetString(ini, section, "KeyName", ..., this+OFFSET, ...)` 模式：

```
WarheadTypeClass @ 0x772080:
  *(this + 0xA4) = ReadInt("Damage", *(this+0xA4));
  *(this + 0xCA) = ReadBool("MindControl", *(this+0xCA));
  *(this + 0xD0) = ReadBool("IsLocomotor", *(this+0xD0));
```

每个 INI key 对应一个成员偏移。验证工具：`tools/verify_yrpp_members.py`。

### COM GUID 表定位

RA2/YR 的移动系统使用 COM 架构。GUID 表位于 `.rdata` 段（0x7E9A60，8 个 CLSID）。

定位方法：
1. INI 中看到 `Locomotor={4A582746-9839-11d1-B709-00A024DDAFD1}`
2. 在 IDA 中 `find_bytes` 搜索 GUID 的 16 字节二进制（小端序：`46 27 58 4A 39 98 D1 11 ...`）
3. `xrefs_to` 查每个 GUID 的引用 → 确认对应类名

详见 `docs/globals.md` 的 Locomotor GUID 表。

### Jumpjet GUID 特殊性

`{92612C46-...}` 有 10+ xrefs（FootClass::CalculateApproachPath 等），其他 Locomotor GUID 仅在 WinMain 注册和自身 ddtor 中出现。这导致 `Warhead.IsLocomotor=yes` + `Locomotor={GUID}` 的弹头效果只在 Jumpjet 时正常工作——其他类型缺少"临时替换后恢复"的完整生命周期。

### 类成员变量逆向方法论

- **构造函数验证**（最高置信度）：`mov [esi+OFFSET], value` 序列与 header 字段布局对照
- **YRpp 交叉引用**（高置信度）：YRpp 已运行时分析得出大部分字段
- **IDA 字段访问追踪**（中等置信度）：搜索特定 offset 的读写指令分析上下文
- **YRpp 全覆盖结论**：523 个 unknown_ 字段在 YRpp 中均无解析——需深度 IDA 字段级 xref 才能突破
- **AudioController sizeof 陷阱**：原以为 28B（7 dwords），构造函数确认 20B（5 dwords，0x14）。使用 `tools/verify_layout.py` 验证

详细 inventory 见 `docs/coverage.md`。

---

### 类型推断引擎 (Type Inference Engine)

基于约束传播的类型推断系统, 为 19,067 个函数自动推断变量类型。

**核心架构**: T7 Steensgaard union-find → T9 工作列表类型传播 → T10 置信度 BFS → T11 矛盾检测。

| 阶段 | 描述 | 输入 | 输出 |
|------|------|------|------|
| T7 | Steensgaard 等价类合并 (ASSIGN/RETURN/CALL 边) | `raw_constraints.json` (97K 约束) | union-find 等价类 + anchor 标签 |
| T9 | 工作列表 lattice.meet 类型传播 | 等价类邻接图 | `type_map.json` (1,241 条目) |
| T10 | BFS 距离置信度评分 | anchoring 节点 | 四级置信度标注 |
| T11 | 矛盾检测 (TOP 节点) | 冲突 anchor 对 | `contradictions.md` 可读报告 |
| T12 | 建议类型生成 | `type_map.json` + anchor cross-ref | `suggested_types.json` (323 ANCHORED) |
| T14 | IDA 类型应用 | `suggested_types.json` | IDA `SetType`/`SetCmt` |
| T15 | 增量重传播 | 单函数修改 + 已有 type_map | 局部类型更新 (< 10s) |
| T20 | 偏移→成员重写 | `suggested_types.json` + `member_lookup.json` | `.omo/rewrite_offsets.patch` |
| T21 | 自动局部变量命名 | `type_map.json` + 源文件扫描 | `renaming_suggestions.json` |

#### 运行方式

```bash
# 完整管线 (T7→T9→T10→T11)
python -m tools.type_infer.engine

# 增量更新 (单函数, 修改后快速重传播)
python -m tools.type_infer.incremental 0xADDR [--annotation var=Type]

# 生成建议类型
python tools/type_infer/generate_suggested.py

# IDA 类型标注 (预览模式)
python ida_apply_types.py --dry-run

# IDA 类型标注 (实际应用)
python ida_apply_types.py              # 通过 MCP 连接 IDA

# 偏移→成员批量重写 (生成 .patch)
python tools/type_infer/rewrite_offsets.py [--dry-run] [--verbose]

# 自动局部变量命名建议
python tools/type_infer/auto_name.py
```

#### 置信度体系

| 级别 | 含义 | 距离 | 使用场景 |
|------|------|------|---------|
| **ANCHORED** | 直接 anchor 确定 | 0 hops | `member_types`/`global_types`/`vtable` 直接命中 |
| **DIRECT_PROP** | 相邻节点传播 | 1 hop | anchor 的直接邻居 |
| **CHAIN_PROP** | 短链传播 | 2-3 hops | 通过 1-2 层邻接传播 |
| **INFERRED** | 长距离推断 | >3 hops | 通过 ≥3 层邻接到达 |

- `ANCHORED` + `DIRECT_PROP` → IDA `SetType` (高置信度, 直接设置类型)
- `CHAIN_PROP` + `INFERRED` → IDA `SetCmt` (低置信度, 仅注释)
- `ida_apply_types.py --dry-run` 预览所有建议 (不实际修改 IDB)

#### 输入数据源

| 文件 | 内容 | 大小 |
|------|------|------|
| `tools/type_infer/constraints/raw_constraints.json` | 约束边 (ASSIGN/RETURN/CALL/CALL_VTABLE/STACK_VAR) | ~97K |
| `tools/type_infer/constraints/call_graph.json` | 调用图边 (caller→callee) | ~46K |
| `tools/type_infer/anchors/vtable_signatures.json` | vtable 条目 (函数存在性 anchor) | ~13K |
| `anchors/member_types.json` | 成员偏移→类型映射 | ~5K |
| `anchors/global_types.json` | 全局变量→类型映射 | ~1.3K |
| `tools/class_layouts.json` | 类继承层次 (lattice 的 `is_subtype` 依据) | ~1,120 类 |

#### 输出产物

| 文件 | 格式 | 用途 |
|------|------|------|
| `type_map.json` | `{var_name: {type, confidence, eq_root}}` | 1,241 个变量类型, 含置信度 |
| `suggested_types.json` | `{addr.label: {type, confidence, evidence}}` | 323 个 ANCHORED 建议, 含证据链 |
| `contradictions.md` | Markdown 表格 | TOP 节点 + 冲突类型对报告 |
| `renaming_suggestions.json` | `{func_addr: {old: new}}` | 局部变量重命名建议 |
| `.omo/rewrite_offsets.patch` | `git apply` 格式 diff | 偏移→成员访问重写 (需审查) |

#### 工作原理简述

1. **约束提取**: 从 IDA 反编译伪代码提取 ~97K 条类型约束 (赋值/返回/调用/栈变量)
2. **Steensgaard 合并**: ASSIGN/RETURN 边合并为等价类; 调用图连接 caller 和 callee 的返回站点
3. **Anchor 注入**: 从 `member_types.json` (成员变量), `global_types.json` (全局变量), `vtable_signatures.json` (函数存在性) 加载已知类型
4. **Lattice 传播**: 从 anchor 节点 BFS 传播类型, 使用 `lattice.meet()` (最大下界) 合并多路径信息
5. **Lattice 层次**: `BOTTOM` (未知) → `VOID_PTR` (void*, meet 单位元) → `ConcreteType` (如 `BuildingClass`) → `TOP` (矛盾)
6. **矛盾检测**: 不可兼容的 anchor 类型在 meet 时产生 TOP (如 `BuildingClass meet FootClass → TOP`)
7. **置信度**: BFS 距离标注 — 0 hop = ANCHORED, 1 = DIRECT_PROP, 2-3 = CHAIN_PROP, >3 = INFERRED

#### 当前局限

- 仅建议类指针类型 (如 `BuildingClass*`), 不推断 `int`/`float`/`BOOL` 等基础类型
- ~~TOP~~ 矛盾条目占 `type_map.json` 的 74% (918/1241), 说明当前约束数据冲突率较高
- 增量模式依赖完整运行一次 engine 后缓存 UF 状态
- `rewrite_offsets.py` 生成的 patch 必须人工审查后才能 `git apply`

---

## 项目环境信息

- IDA 连接：`127.0.0.1:13337`（gamemd.exe.i64）
- BINK SDK 分析：`127.0.0.1:13338`（binkw32.dll）
- 工作目录：`D:\RA2YR_ReSource\`
- 游戏目录：`D:\RA2MD\`
- Python：3.14.2（`python` 或 `py`）
- 测试地图：XMP27T8.MAP

---

## 已知问题

### EIP=0 偶发崩溃（Ares AI Team + Chrono use-after-free）

| 属性 | 值 |
|------|-----|
| 首次发现 | 2026-06-08 |
| 调用链 | 不固定 |
| 触发 | 玩家高速滚动屏幕 |
| 根因 | `DEFINE_HOOK(0x4BB0D0, Blit_Tracker, 0x6)` 在挂入钩子时覆盖了首个指令 `sub esp,88h`，返回时本应执行此指令, 疑似累计大量调用后数组越界 |
| 与 hook_dll 关系 | DEFINE_HOOK 覆盖了指令导致意料之外的结果（任何 DEFINE_HOOK 都应该考虑这一问题, 尤其是需要原函数功能正常运行的钩子） |
| 50 局 baseline（无 hook_dll） | 0 / 50 |
| 带 hook_dll 复现率 | 基本上能够通过快速滚动稳定触发 |
| 处置 | 先禁用无关钩子，只保留对拍内容（任何 `DEFINE_HOOK` 都需要考虑被覆盖的代码是否应该被执行） |

**验证记录**：

- Hex 验证：`0x6EAD4B = E8 FFFFB810`（DIRECT call rel32 → Math::DistSq2D，非间接调用）
- EDX=0x2026C0D0 来源：`mov edx, [edi+24h]`（team 对象成员字段，非 vtable）
- 栈上 `DisplayClass::ExitMode` / `Timer::PumpMessages` 来自 Ares SEH handler 全栈捕获，非崩溃路径

### Capture 模式当前限制

- `comparisonResult.log` 记录前 50 个 Call/函数（防文件膨胀）
- write_entry 同步刷盘，高频钩子下有 I/O 开销
- TLS 已从 `__declspec(thread)` 改为 `static global ShadowSlot` + `g_owner_tid` 主线程门控（多线程时其他线程透传，避免 TIB 干扰）

---

## 当前会话上下文（多会话恢复）

### 最近完成（按时间倒序）

- **2026-06-21**: Name mismatch fix (Phase 4) — 343 → 215 剩余命名不一致 (-37.3%)
  - **audit_consistency.py 增强**:
    - `addr_pattern` 现在也匹配 `// IDA 0xADDR` 格式（不仅 `// 0xADDR`）
    - 前一行的 IDA 注释提取（`// IDA 0xADDR -- ClassName::Method` → 解析为 hpp 名称）
    - `_find_enclosing_class()` 也识别 `struct` 和 `namespace`（不仅 `class`）
    - 注释名优先于函数名（`// IDA 0xADDR -- Dialog::OptionIDToIndex` 优先于 `OptionIDToIndex`）
    - 名称更新逻辑改进：带有 `::` 的注释名覆盖非限定名
    - `normalize_name()` 函数：去除尾部下划线（IDA `___` 产物）、规范化 `vt[NN]` ↔ `vt_NN`、减少连续下划线
  - **Phase 1 (no_scope)**: 65 → 0 不匹配 ✅
    - 28 个 `ClassNameMethodName` 条目通过注释提取解决
    - 36 个 namespace/struct 上下文条目通过 `_find_enclosing_class()` 扩展解决
    - 2 个手动注释添加至 hpp 文件（`ddraw_init.hpp`, `locomotion.hpp`）
  - **Phase 2 (method_diff)**: 64 → 59
    - `FindOrAllocate` → `FindOrCreate` 全局替换（16 文件）
    - `Construct()` → `Constructor()` 修复
    - 名称规范化解决了 5 个误报
  - **Phase 3 (wrong_class)**: 180 → 116（通过命名空间/结构体上下文识别减少了 64 个）
  - **Phase 4 (other)**: 34 → 40（净变化 +6）
  - **构建验证**: 0 错误, 0 警告（gamemd）
  - 工具: `tools/audit_consistency.py`（已增强）, `tools/fix_phase2_easy.py`
  - 证据: `.omo/no_scope_v2.txt`, `.omo/method_diff_v2.txt`, `.omo/wrong_class_v2.txt`, `.omo/other_v2.txt`

- **2026-06-21**: Name mismatch fix (Phase 1-3) — 2,574 → 343 (-86.7%)
  - 增强 audit_consistency.py: 类上下文、注释名提取、namespace/struct 识别、名称规范化
  - 385 C-style → `ClassName::Method` 在 `_funcs.hpp` 文件
  - 构建: 0 错误, 0 警告

- **2026-06-20**: Task 5 — 修复 131 orphan `// 0xADDR` 注解 (hpp 中地址不在 functions.json 中)
  - **1498 hpp_only 孤儿** 分类: 1367 data-section (`.data`/`.rdata`), 131 code-section (`.text`)
  - **Phase 2 (data-section)**: 1382 行 `// 0xADDR` → `// data: 0xADDR` 前缀 (14 hpp 文件)
  - **Phase 3 (code-section)**: 122 地址修正 (指向含函数起始地址), 9 移除 (非函数), 66 新条目加入 functions.json
  - 通过 IDA MCP 验证所有 131 code-section 地址的包含函数
  - locomotion.hpp: 113 虚拟桩修正; building_type.hpp: 6 area 标记修正
  - object.hpp: 5 Audio 函数修正; command_class.hpp: 5 Execute 覆盖修正
  - **结果: `audit_consistency.py` → 0 hpp_only orphans**
  - Evidence: `.omo/evidence/task5-orphans-fixed.txt`
  - 工具: `tools/task5_fix_orphans.py` (Phase 2), `tools/task5_phase3_fix.py` (Phase 3)

- **2026-06-20**: Task 8 — 双注解解析 (hpp // 0xADDR + // IDA: 0xADDR → 单一 // 0xADDR)
  - **9964 IDA 地址注解** 转换为洁净 `// 0xADDR` 格式（跨 63 个 hpp 文件）
  - 180 真双重注解 (同函数两种格式 → 合并, 移除重复注释行 16 条)
  - 9784 单注解 (仅 `// IDA: 0xADDR` → `// 0xADDR`)
  - 特殊 IDA 注解保留 (NOT_FOUND, UNMATCHED 等 2427 条)
  - **结果: 0 `// IDA: 0xADDR` 地址注解残留**, 0 文件同时存在两种格式
  - 未修改函数签名/类型, 0 处语法破坏
  - 工具: `tools/resolve_double_annotations.py`（可重复运行, 支持 --dry-run/--apply）
  - 证据: `.omo/evidence/task-8-dedup-check.txt`, `.omo/evidence/task-8-addr-match.txt`
- **2026-06-19**: Task 6 (T6) — 三策略交叉验证合并 missing hpp 函数 IDA 地址匹配
  - **2,831 missing hpp 函数** 从 T3 (signature), T4 (call-graph), T5 (git history) 交叉验证
  - 输出：`tools/ida_match_results.json` (2.1MB, 完整 2,831 条目)
  - 置信度分布：HIGH 152 (5.4%), MEDIUM 488 (17.2%), LOW 1,059 (37.4%), CONFLICT 269 (9.5%), UNMATCHABLE 863 (30.5%)
  - 优先级层级：call-graph > git > signature
  - T4 仅覆盖 911/2,831 函数 → HIGH 目标 600 无法达成（数据覆盖率瓶颈）
  - **Spot-verification (72 样本)**: 70.8% 精确匹配 (51/72), 29.2% 同类别名不同 (21/72), 0% 错误类别
  - 同类别名不同主要是 ctor/dtor 命名约定差异 (Destructor/Release, Constructor/Construct)
  - 关键发现：T5 git history 与 T1 missing functions 几乎无交集 (仅 2/2831) — git history 跟踪已实现函数的重命名，不覆盖未实现函数
  - 合并逻辑：检查 ALL T3 candidates (非仅 top), 匹配 call-graph 地址 → HIGH；call-graph 仅 → MEDIUM
  - 工具：`tools/t6_merge.py`（可重复生成）
- **2026-06-19**: Task 18 — 中大型 sub_* 函数批量存根生成 (50-500 bytes)
  - **1203 函数存根** 生成到 `src/_generated/`（29 个 .cpp，11,088 行）
  - 规模分布：269 (200-500B) + 355 (100-199B) + 579 (50-99B)
  - 29 模块：core (7), misc (4), system (6), render (3), ui (2), structure (2), house/entity/network/object/team (各1)
  - 每个存根包含：IDA 反编译伪代码注释、地址、大小、调用约定
  - 命名来自 `sub_naming_proposals.json`（ClassName::Method → ClassName_Method_XXXXXX）
  - 构建验证：**0 errors, 0 warnings** (来自 _generated/ 文件)
  - 工具：`tools/gen_sub_stubs.py`（可重复生成）
  - 存根是翻译占位符——后续会话需手动翻译实现
- **2026-06-19**: Task 17 — 小函数批量存根翻译 (sub_* <50 bytes)
  - 4,255 函数从 IDA 伪代码生成 C++ 存根
  - 21 个 `src/{module}/subs*.cpp` 文件，46,916 行
  - 函数用 `sub_naming_proposals.json` 命名（PascalCase，`::` 替换为 `_`）
  - IDA 伪代码保留为注释，供后续手动翻译
  - 引用 IDA 全局变量自动添加 `extern` 声明
  - 构建验证：0 errors, 0 warnings (gamemd)
  - 工具：`tools/task17_generate.py`（可重复生成）
- **2026-06-18**: Task 6 — structure/ 函数批量翻译 (IDA decompile → C++)
  - 4 文件, ~160 stub 函数翻译为忠实 C++ 实现
  - **aircraft.cpp**: MoveTo 飞行路径逻辑, Mission_Enter 5-状态机, ValidateMovement switch 分支, ProcessLanding 任务过滤
  - **infantry.cpp**: ProcessDeployAction 部署验证, GetFireError 完整错误码 0-7, CanAttackTarget 敌人/隐身检查
  - **unit.cpp**: CheckStatus 返回 Type 指针 (非 0), CompareCoordinateMagnitude 绝对值比较
  - **building.cpp**: **关键修复** — Activate 地址修正 (0x449a50→0x70fbe0 继承自 TechnoClass), Mission_Guard 返回值 0→1824, Mission_Construction 返回值 15→6, ProductionCheck/CanAcceptType/GetPowerOutput/GetPowerDrain/SWAvailable 逻辑
  - 后台 agent 并行反编译: 41 unit + 32 infantry + 23+ building 函数
  - 验证: `python tools/audit_translation.py --check-stubs` → 0 stubs in structure/
  - 编译: 0 errors from structure/ files
- **2026-06-18**: Task 19 — 全局函数批量命名 (sub_* 自动命名管线)
  - 822/4,412 非 CRT sub_* 函数通过 caller-context 启发式自动命名
  - `batch_name_subs_ida.py`：两轮迭代命名（Pass 1: 794, Pass 2: 28）
  - `ida_extract.py` 重新生成 functions.json：13,437 已命名 (+3,071)，11,872 已完成
  - gamemd 编译：0 errors, 0 warnings
  - 剩余 3,590 sub_* 需解编译命名（后续 Pass 3+）
- **2026-06-17**: IDA 类 header 定义全部完成
  - 1,120 个 IDA 类的成员变量全部解析并生成 C++ header
  - 0 unknown_ 残留字段，0 sub_* 匿名占位符
  - 所有类有完整的成员变量声明、偏移注释和 sizeof 验证
- **2026-06-10**: 编译时自动化幂等判定系统（Phase 1+2）
  - `gen_annotations.py` → `annotations.json`（373 导入规则 + 35 命名模式 + 手动覆盖）
  - `ida_extract_purity.py` → `purity_effects.json`（17K 函数直接 .data R/W 扫描，24s）
  - `analyze_idempotent.py` → SCC 不动点传递闭包 + 三态判定（TRUE/FALSE/UNCERTAIN）
  - `gen_reverse_hooks.py`：completed gate + 自动查表 + 手动覆盖警告（`idempotent_reason` 必填）
  - `CMakeLists.txt`：`HOOK_REGEN_GENERATED=ON` 触发完整分析→代码生成管道
- **2026-06-10**: Inject 模式 13/13 函数全部部署 (Fill 50-call 事务验证通过, 零孤儿)
- **2026-06-09**: hook_size 修复 + VEH 修复 + Caller 表重建 + ostringstream 重构 + Replace/Inject 基础设施完成
- **2026-06-03**: 音频子系统完整逆向 + INI 函数 281/281 + COM.md 8 GUID 全部命名
- **2026-06-02**: vt_entry 公式破解 + 1084 vtables 识别 + 模板容器类 _vtNN 全部消除
- **2026-06-01**: YRpp struct 25+ 类批量导入 + 全局变量 ~390 命名
- **2026-05-31**: BINK 视频 + 音频 + 主菜单 BINK 背景接通

### 当前阻塞

- .data 回滚验证仍需非渲染函数（13 已完成函数全是 XSurface，不写 .data）
- Phase 2 将 13 个 XSurface 判定为 UNCERTAIN（vtable Lock/Unlock 未解析）→ 手动覆盖 + 警告生效。Phase 3 可减少 UNCERTAIN 比例。
- 1,204 sub_* 仍需翻译（4,255 已有存根，含 IDA 伪代码注释）
- 3,590 sub_* 仍需解编译命名（调用链太深，缺少非 sub_* caller）
- 215 命名不一致剩余 (59 method_diff, 116 wrong_class, 40 other) — 需要逐个函数审查
  - method_diff: 大部分是 IDA ↔ hpp 函数名别名差异，需逐函数查 IDA 确认
  - wrong_class: 函数声明在错误类体中，需要结构调整（移动声明）
  - other: 函数签名/命名差异，没有简单模式可自动修复

### 后续计划

1. 完成一个写 .data 的非渲染函数，做真正的 Inject (idempotent=false) 回滚测试
2. 扩展更多 Replace/Inject 钩子（高频函数应标 idempotent=true 避免事务开销）
3. Pass 3+：对剩余 3,590 sub_* 进行解编译命名（需 IDA decompiler，预计 2-5 小时运行时间）

并行进行：
- 10-19 xref 全局变量命名（~180 个）
- 函数体逆向翻译（继续从 P0/P1 优先级，Task 6 完成 structure/ 后继续其他目录）
- 解编译数据存档：`.omo/evidence/` 下有 unit (41 funcs), infantry (32 funcs), building 的 IDA 完整伪代码
- 215 命名不一致修复 (59 method_diff + 116 wrong_class + 40 other) — 需逐函数 IDA 审查
- symbols-locked-v2 已创建 tag（全部 19,067 函数 1:1:1 IDA↔signals↔hpp），后续命名变更需同步更新 signals.json 和 IDA

## 下一会话快速接手指引

1. 看 `docs/coverage.md` 了解整体进度（**1,120 IDA 类全部完成 header，0 unknown_**）
2. 看 `docs/todo.md` 找当前优先任务（类成员逆向已完成，下一优先级：函数体翻译）
3. 看 `git log -10` 了解最近改动
4. 看 `injectFunctionTest/comparisonResult.log` 了解最新 Capture 数据
5. 看 `D:\RA2MD\debug\snapshot-*` 了解最近崩溃记录
6. 任何崩溃分析：先满足"故障排除最低标准"6 项，缺一项不下结论
7. 查看 `.omo/evidence/fr-task-19-globals.txt` 了解 Task 19 详细状态
8. symbols-locked-v2: 全部 19,067 函数 1:1:1 IDA↔signals↔hpp 映射，0 naming mismatches。`signals.json` 是权威函数元数据源
