# RA2YR ReSource — 从 gamemd.exe 重建红色警戒 2/尤里的复仇源码

## 项目目标

逆向工程完整的 `gamemd.exe` C++ 源码并重建为独立可执行文件。

目标文件：32 位 Windows PE，MSVC 6.0 编译，约 7.6MB，基址 0x400000，含 19,067 个函数。

| 阶段 | 目标 | 产出 |
|------|------|------|
| Phase 1 (当前) | 完整逆向重建，功能对等原版 | 可直接替换的 Win32 EXE (`gamemd.exe`) |
| Phase 2 (远期) | 现代化重构 (现代渲染 / AI Bot / 原生模组系统) | 跨平台现代游戏引擎 |

当前构建产物：静态库 `gamemd_core` + EXE `gamemd.exe`，CMake + C++20。

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

未经用户许可不得修改：

- `include/gamemd/core/reverse_marker.hpp`（REVERSE 宏定义）
- `injectFunctionTest/gen_reverse_hooks.py` / `gen_re_impl.py`（生成器）
- `injectFunctionTest/gen/reverse_hooks.cpp` / `reverse_check.cpp` / `re_impl.cpp`（生成产物）
- `injectFunctionTest/render_hooks.cpp` / `hook_main.cpp`
- `injectFunctionTest/PostProcStub.asm` / `tls_storage.h`
- `injectFunctionTest/shadow_txn.h/cpp`
- `injectFunctionTest/functions.json`（函数元数据）
- `injectFunctionTest/CMakeLists.txt`
- `functionComparison.md`（对拍管线设计文档）

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

# Linux 验证编译 (仅 gamemd_core 静态库, 不能运行游戏)
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
| 已实现函数 | ~140（~200+ stubs） |
| 编译错误 / 警告 | 0 / 0 |
| IDA 命名 | ~10,272 / 19,067 (53.9%) |
| REVERSE 标记 | ~32（4 Inject 活跃, 37 None） |
| 已完成函数 | 39（faithful translations, completed:true） |
| Inject 模式 | **4/13 活跃**（9 verified → None, slot stack 防并发覆写） |
| 幂等自动判定 | Phase 1+2 完成: TRUE 31%, FALSE 36%, UNCERTAIN 33% |
| 当前阻塞 | .data 回滚验证仍需非渲染函数 |

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

### M6: 当前 Capture 钩子（13 个）

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

---

## 逆向经验（项目特定取证技巧）

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
| 调用链 | GameFrameLoop → Scenario::Update → TeamClass::Update → RecruitMember → Math::DistSq2D → `call [vtable+48h]` → EIP=0 |
| 触发 | AI team 管理（Create_One_Of）+ Chrono/Paradrop/SuperWeapon 密集 + 长时间游戏 |
| 推断根因 | `g_UnitClassPool`（0x8B410C）中单位对象提前释放但引用未清除 |
| 与 hook_dll 关系 | 无（栈无 hook_dll 地址 / 无 VEH AV / 无 m_backups 受损） |
| 50 局 baseline（无 hook_dll） | 0 / 50 |
| 带 hook_dll 复现率 | ≤ 20%（小样本） |
| 处置 | 归档，不阻塞开发 |

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

### 后续计划

1. 完成一个写 .data 的非渲染函数，做真正的 Inject (idempotent=false) 回滚测试
2. 扩展更多 Replace/Inject 钩子（高频函数应标 idempotent=true 避免事务开销）

并行进行：
- 类成员变量逆向（~523 unknown_ 字段，长期任务）
- 10-19 xref 全局变量命名（~180 个）

## 下一会话快速接手指引

1. 看 `docs/coverage.md` 了解整体进度
2. 看 `docs/todo.md` 找当前优先任务
3. 看 `git log -10` 了解最近改动
4. 看 `injectFunctionTest/comparisonResult.log` 了解最新 Capture 数据
5. 看 `D:\RA2MD\debug\snapshot-*` 了解最近崩溃记录
6. 任何崩溃分析：先满足"故障排除最低标准"6 项，缺一项不下结论
