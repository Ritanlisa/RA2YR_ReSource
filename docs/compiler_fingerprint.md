# gamemd.exe 编译环境完整指纹还原报告

> 目标：确定 `D:\RA2MD\gamemd.exe`（RA2 Yuri's Revenge 主程序）的 **MSVC 版本 / SP 级别 / 优化选项 / 链接选项**，
> 为「联合 RA1 源码做更完美的代码还原」提供编译环境基线。
>
> 数据源：`D:\RA2MD\gamemd.exe`（4,813,072 字节，SHA-256 见 `.omo/agents/cfp/`）+ 快照 `decompile-results/full_export/`（19,088 函数 / 980,504 指令行）。
> 方法：手写 Rich Header XOR 解析器 + PE 解析（`.omo/agents/cfp/cfp_parse.py`）+ 全库代码生成模式普查（`census.py`）。
> 全程只读，未使用 IDA。生成日期：2026-11-08。

---

## 0. 执行摘要（TL;DR）

| 项 | 结论 | 置信度 |
|---|---|---|
| 编译器（主代码） | **cl 12.00.8447（VC6 SP3 系）**，513 个 C++ 对象 + 1 个 C 对象 | 100%（Rich Header 直接证据） |
| 编译器（遗留库） | cl 12.00.8168（**VC6 RTM**），189 C + 12 C++ 对象（TS 时代静态库 + RTM CRT） | 100% |
| 汇编器 | **MASM ml 6.13.7299**（VC6 RTM 系），48 个 .asm 对象（blitter/MMX 库） | 100% |
| 链接器 | **link 6.00.8447**（SP3~SP5 通用版本；PE 头 LinkerVersion=6.00 互证） | 100% |
| SP 级别 | **VC6 SP3 时代工具链**；全二进制**无** SP4(8797)/SP5(8804+) 编译器痕迹 | 高 |
| CRT | **静态多线程 libcmt.lib（/MT）**——无 msvcrt.dll 导入 + Tls/CS 导入集 + R600x 串 | 极高 |
| 优化 | **/O2**（含 /Oy /Oi /Gs /GF /Gy 成分）+ /OPT:ICF；**无 /GX**（全库 0 个 C++ 异常帧） | 极高 |
| 架构目标 | 默认混合（/GB），非 /G6（98 万指令中 cmov 仅 12 处） | 高 |
| 链接特征 | /FIXED（无 .reloc）+ **FileAlignment=0x1000（非默认 → /FILEALIGN:4096）** | 100% / 极高 |
| 构建时间 | **2001-10-31 01:30:54 UTC**（YR 发售窗口） | 100% |
| 原始工程名 | **SUN.exe / tsun.dbg**（调试目录泄露；版本资源 InternalName=Sun）——RA2 引擎沿用 Tiberian Sun 的 SUN 工程 | 100% |

**重建用最可能命令行**（详见 §3.1）：

```bat
cl /nologo /O2 /MT /W3 /c /DWIN32 /DNDEBUG /D_WINDOWS ...   (cl 12.00.8447)
link /nologo /subsystem:windows /machine:I386 /fixed /opt:icf /filealign:0x1000 ...
```

---

## 1. 第 1 层：确定性载体（Rich Header + PE 头）——100% 可靠

### 1.1 Rich Header 解析结果（完整原始表）

- 位置：DanS @ file offset `0x80`，Rich @ `0xF0`，XOR key = **0x4D5F62E9**，校验和 = 0（正常——本机 VS2022 产物同为 0，这是 MS 链接器的常见写法，非篡改）。
- 解码约定：**低 16 位 = 工具 build 号，高 16 位 = 产品 ID**。该约定经本机 VS2022 对照实验钉死：
  本仓库 `build_win/CMakeFiles/4.2.1/CompilerIdCXX/CompilerIdCXX.exe`（linker=14.44）解码出
  `(product 0x0105, build 35207)` = MSVC 14.44.**35207** 工具链，与其 PE LinkerVersion 14.44 完全互证。
- 工具名映射依据：社区 comp.id 数据库三方交叉（`agrajag9/getrichlaikaboss comp_ids.txt`、`RichHeaderResearch/RichPE rich.py`、`avast/pelib RichHeader.cpp`）+
  RE-wiki 语义说明（product 0x0001 build 0 = 无 comp.id 的导入库成员）。

#### gamemd.exe Rich 完整表（13 条目）

| # | 产品ID | 工具（映射） | build | 工具版本 | 对象数 | 原始 idbuild（XOR 前） |
|---|--------|-------------|-------|----------|--------|------------------------|
| 0 | 0x0000 | 无标记（legacy） | 0 | — | 0 | 0x4D5F62E9 |
| 1 | 0x000C | **待映射**（12.00.7291 = VC6 前身/beta 时代工具，疑 WW 内部老库） | 7291 | 12.00.7291 | 18 | 0x4D537E92 |
| 2 | 0x000B | **C++ 编译器（cl）** | 8168 | **VC6 RTM 12.00.8168** | 12 | 0x4D547D01 |
| 3 | 0x000A | **C 编译器（cl）** | 8168 | **VC6 RTM 12.00.8168** | 189 | 0x4D557D01 |
| 4 | 0x0004 | link 导入/导出记录 | 8447 | link 6.00.8447 | 15 | 0x4D5B4216 |
| 5 | 0x0000 | 无标记 | 0 | — | 21 | 0x4D5F62E9 |
| 6 | 0x0013 | Linker512（VC5 系 link） | 8022 | link 5.12.8022 | 13 | 0x4D4C7DBF |
| 7 | 0x0013 | Linker512（VC5 系 link） | 8034 | link 5.12.8034 | 27 | 0x4D4C7D8B |
| 8 | 0x0001 | 无 comp.id 的导入库成员 | 0 | — | 338 | 0x4D5E62E9 |
| 9 | **0x000B** | **C++ 编译器（cl）——主代码** | **8447** | **VC6 SP3 系 12.00.8447** | **513** | 0x4D544216 |
| 10 | 0x000A | C 编译器（cl） | 8447 | 12.00.8447 | 1 | 0x4D554216 |
| 11 | 0x0006 | cvtres（资源转换器） | 1735 | cvtres 5.00.1735 | 1 | 0x4D59642E |
| 12 | 0x000E | **MASM（ml.exe）** | 7299 | **ml 6.13.7299（VC6 RTM 系）** | 48 | 0x4D517E6A |

**映射可信度锚点**（与公开 comp.id 表逐条互证）：

- `000a1fe8 [C] VS98 (6.0) build 8168` / `000b1fe8 [C++] VS98 (6.0) build 8168` ←→ 本表 #2/#3 完全一致 → 0x0A=C 编译器、0x0B=C++ 编译器、8168=VC6 RTM **实锤**。
- `000420ff [LNK] VC++ 6.0 imp/exp build 8447` ←→ 本表 #4（注：comp_ids 把该条标注在 SP5 环境下出现 → **link 6.00.8447 从 SP3 一直用到 SP5**）。
- `000606c7 [RES] VS98 cvtres build 1735(≈1736)` ←→ 本表 #11；`000606b8 cvtres build 1720` ←→ RA2MD/YURI 表中同款。
- avast/pelib 版本表：`8168→"6.0"`、`8447→"6.0 SP3"`、`8797→"6.0 SP4"`、`8804→"6.0 SP4"`（SP4 期热修）、`8943/9044→"6.0 SP5 Processor Pack"`、`7299→MASM "6.13 SP1"`、`8022/8034→link "5.12"`。
- 0x0001/0x0000 无标记条目语义 = 导入库成员（RE-wiki：计数随导入函数数缩放——gamemd 导入 371 个函数 ↔ 338 条，game.exe 335、RA2MD 133、Blowfish 83，全部成比例 ✓）。

**关于任务提示映射（"RTM=8447 / SP3=8499 / SP4=8502 / SP5=8508"）的裁定**：
该组数字是 **link.exe 6.00.x 系列** 的版本线（8447 为 SP3 起的 link，SP5 环境下 link 仍报 8447，见 comp_ids 原注）；
编译器线为 12.00.8168(RTM) → 12.00.8447(SP3) → 12.00.8797(SP4，本目录 Ra2.exe 实证) → 12.00.8804(SP4 末/SP5 初) → 8966+(SP5/PP) → 9782(SP6)。
本报告以「编译器 build 判编译器 SP、link build 判链接器」的双线口径陈述，与三方数据库一致。

**对象构成解读**：

- **513 C++ + 1 C 对象 @12.00.8447 = 游戏本体**（YR 代码库约 500+ 编译单元，合理）。
- **189 C + 12 C++ @12.00.8168 = 遗留静态库**：TS/RA2 时代以 RTM 编译后一直复用的 WW 内部库 + RTM 期 libcmt 成员（与 game.exe 的 190+12 几乎相同 → 同一批库跨 RA2/YR 复用）。
- **48 个 MASM 对象 = 手写汇编库**（blitter/透明表/MMX 例程；与第 2 层 MMX 指令普查互证）。
- VC5 link 5.12 的 40 条记录 = VC5 时代 Platform SDK 导入库残留。
- **Westwood 构建机从未升级到 SP4/SP5 编译器**（对照：Ra2.exe 主代码 8797=SP4 是 RA2 组另一台机器/时期；见 §1.4）。

### 1.2 PE 头全字段

| 字段 | 值 | 判读 |
|---|---|---|
| Machine | 0x014C | i386 |
| **TimeDateStamp** | 1004491854 = **2001-10-31 01:30:54 UTC** | YR 发售窗口（北美 2001-10-23 上市，此为发售周补丁版构建） |
| Characteristics | 0x010F | EXECUTABLE_IMAGE\|32BIT\|RELOCS_STRIPPED\|LINE_NUMS_STRIPPED\|LOCAL_SYMS_STRIPPED（符号/行号/重定位全剥） |
| COFF 符号表 | ptr=0, num=0 | 无 COFF 符号 |
| **MajorLinkerVersion/Minor** | **6.00** | **link.exe 6.00.x = VC6 链接器**（VS2002=7.0，…） |
| ImageBase | 0x400000 | 默认 |
| SectionAlignment | 0x1000 | 默认 |
| **FileAlignment** | **0x1000** | **非默认（默认 0x200）→ 使用 `/FILEALIGN:4096`**（本机 VS2022 默认产物对照为 0x200；当年常见于提速载入/对齐保护） |
| OS Ver / Subsys Ver | 4.0 / 4.0 | Win9x/NT4 时代默认 |
| Subsystem | 2 (GUI) | — |
| Stack/Heap | 1MB reserve / 4KB commit | 默认 |
| 段表 | `.text`(0x3DF38D, RX) → `.rdata`(0x30074, R) → `.data`(0x367BE4, RW) → `.rsrc`(0x18128, R) | 4 段标准序，**无 .reloc**（EXE 默认 /FIXED）、无自定义 /MERGE、无 /SECTION 痕迹 |
| 入口点 | RVA 0x3CD80F | CRT 启动（WinMainCRTStartup） |

### 1.3 导入表与 CRT 判定

15 个 DLL、371 个函数：KERNEL32(162) USER32(96) GDI32(22) ADVAPI32(9) SHELL32(1) ole32(15) OLEAUT32(11) WINMM(5) WSOCK32(19) DDRAW(1) DSOUND(1) VERSION(3) COMCTL32(7) IMM32(6) binkw32(13)。

- **无 msvcrt.dll / msvcrtd.dll** → 静态链接 CRT。
- **libcmt.lib（多线程静态，/MT）证据链**：导入集含 `TlsAlloc/TlsGetValue/TlsSetValue/CreateThread/InitializeCriticalSection/EnterCriticalSection/HeapAlloc`——libcmt 的每线程 errno/strtok/多重初始化机制的教科书式签名（单线程 libc.lib 不引用 Tls/CS）。
- CRT 错误串嵌入：`Runtime Error`、`R600…`×3、`R6028`（堆耗尽）、`Microsoft Visual C++` @.rdata 0x3F9C14 一带 → 静态 CRT 运行时错误串。
- CRT 对象 vintage：@8168（RTM）——与遗留库一致（VC6 SP3 装机的 libcmt 若为 SP3 重建则应报 8447；观测为 8168 → WW 链的是 RTM 期 libcmt，或 SP3 未重建该库）。

### 1.4 调试目录与版本资源（考古彩蛋）

- 调试目录仅 1 条 **MISC(类型4)** 记录，数据区内容：`01 00 00 00 10 01 00 00 00 00 00 00 "tsun.dbg\0SUN.exe\0…"`
  → **原始工程名 = SUN（Tiberian Sun 的 SUN 工程）**，RA2/YR 直接沿用；tsun.dbg 为 TS 时代分离调试库引用残留。无 CODEVIEW/PDB 路径（发行版剥离）。
- 版本资源：`FileDescription="Main executable for Yuri's Revenge"`、`FileVersion=1.11`、`ProductName="Command & Conquer : Yuri's Revenge"`、`ProductVersion=1.11`、**`InternalName=Sun`、`OriginalFilename=Sun.exe`**。

**同目录 Westwood 二进制 Rich 对照**（完整表存 `.omo/agents/cfp/rich_tables_others.txt`）：

| 文件 | 时间戳 | 主编译器构成 | 备注 |
|---|---|---|---|
| game.exe（RA2 主程序） | 2001-06-06 | 8447×(505+1+15) + 8168×(190+12) + MASM7299×48 | 与 gamemd 几乎同构成 = **同一构建系统** |
| gamemd.exe（YR） | 2001-10-31 | **8447×(513+1+15) + 8168×(189+12) + MASM7299×48** | 本报告对象 |
| RA2MD.EXE / YURI.EXE（YR 启动器） | 2001-08-23（两者同 key=0xFB254628，同对象集） | 8168×(119+32+1)（纯 RTM 编译） | 启动器组用 RTM 机器构建 |
| Ra2.exe（RA2 启动器） | 2000-09-24 | **8797×(120+9)=VC6 SP4** + 8168×5 | 6 段（含加壳/保护），或为保护厂商工具链 |
| Blowfish.dll | 1999-07-12 | 8168×(83+8) + 8447×(4+1+1) + MASM7299×22 | 残留 NB10 PDB 路径 **`C:\Ra2\Blowfish\Debug\Blowfish.pdb`**（WW 内部路径泄露） |

---

## 2. 第 2 层：统计性载体（代码生成模式普查）——高置信推断

普查对象：快照全库 19,088 函数 / 980,504 条指令（IDA 反汇编注释行）。原始 JSON：`.omo/agents/cfp/census_report.json`。

### 2.1 EBP 省略率（/Oy 探针）

| 形态 | 函数数 | 占比 |
|---|---|---|
| FPO（无 `push ebp; mov ebp,esp` 序） | **18,379** | **97.74%**（非平凡函数口径） |
| EBP 帧保留 | 425 | 2.26% |
| thunk/其他（无有效序言） | 227 | — |

→ **/Oy 开启**（VC6 中为 /O2 成分）。保留 EBP 的 425 例为 SEH/深栈/调试符号函数，属正常残留。

### 2.2 内联 CRT 率（/Oi 探针）

| 模式 | 计数 |
|---|---|
| `rep movsd` | **1,116** |
| `rep movsb` | 566 |
| `rep stosd` | **641** |
| `rep stosb` | 158 |
| （合计 rep 串操作） | **2,485** |
| `call memcpy` | 160 |
| `call memset` | **6** |

`rep stosd` 641 处 ≈ 构造函数/清缓存内联 memset（VC6 /Oi 特征）；memset 实调用仅 6 → **/Oi 开启**（/O2 成分）。

### 2.3 ICF 折叠证据（/Gy + /OPT:ICF）

- 函数起始对齐 mod16=0 占 **95.4%**（18,201/19,088）→ 16 字节颗粒 COMDAT 布局（**/Gy**）。
- mod64=0 仅 24% → 无 64 字节 cache-line 对齐（排除后期 MSVC 链接器风格）。
- 非对齐起始的 887 例 = 16B 块内打包的小函数/IDA 切分产物。
- 项目既有记录（IDA 符号层）：**CommandClass 47 例 + CRT 127 例 COMDAT 折叠**（同名异符号共址）→ 链接期 **/OPT:ICF** 生效（/Gy 前提）。快照按地址去重，无法自证折叠数，以 IDA 期记录为据。

### 2.4 安全特性缺失确认（时代判定）

| 特性 | 观测 | 结论 |
|---|---|---|
| `__security_cookie` / `__security_check_cookie` | **0 处** | 无 /GS（VS2003 前不存在）✓ VC6 时代 |
| SDL 检查（__buf... 迭代器检查等） | 无 | ✓ 前现代 |
| `_chkstk` 栈探测 | **0 处** | 无 >4K 栈帧；与 /O2 的 /Gs 阈值一致 |
| debug `int3` | 1 处 | 发行版 ✓ |

### 2.5 EH 形态（/GX 探针）

- `__CxxFrameHandler` 引用 = **0**——19,088 函数中**没有任何 C++ try/catch 帧** → **未用 /GX**（WW 代码风格：错误码，无异常）。与 RA1 LAUNCHER.DSP 的 `/GX` 形成对照（不同工程不同配置，见 §3.2）。
- `fs:0` 访问仅 40 处 → 少量原生 SEH（音频/DSOUND 胶水层）。

### 2.6 MMX/3DNow 分布（blitter 家族）

- MMX 指令 136 处、`emms` **8 处**、3DNow 0 处。
- emms/指令比（8:136）= 大块 MMX 序列配少量状态清场 → **手写 MASM 实现**（对应 Rich 表 MASM×48 对象），而非编译器 intrinsic 生成（VC6 RTM/SP3 编译器无自动 MMX 生成能力；Processor Pack 才有，且未使用）。

### 2.7 调用约定分布

快照 proto 口径：`__thiscall` 10,180（53%）｜无标注(默认 cdecl) 5,145｜`__stdcall` 1,655｜`__cdecl` 849｜`__fastcall` 963｜userpurge/usercall 267。
signals.json 权威口径（25,240 符号）：thiscall 9,622（50%）｜unknown 5,663（29%）｜stdcall 2,087（10.9%）｜fastcall 973（5%）｜cdecl 733（3.8%）。

两口径一致：**成员函数 thiscall 为主 + WinAPI stdcall + WW 性能路径自选 fastcall**（如 EndFrameAudioMixer）。fastcall 数量可观是 WW 源码自身的约定选择，非编译器选项。

### 2.8 架构目标探针（/G2~G6）

`cmov` 仅 12 处（98 万指令中≈0，且分布于 CRT/MASM 对象）→ 未用 /G6（P6）；`setcc` 3,279、`cpuid`×4、`rdtsc`×3（游戏自身 CPU 探测）→ **默认混合目标（/GB）**。

### 2.9 字符串池化探针（/GF）

.rdata 内 ≥8 字符可打印串 544 条，重复仅 39 条且全部为空白运行（非字符串字面量）→ 字面量零重复 → **/GF 生效**（/O2 成分）。

### 2.10 链接器填充字节特征

函数间 16B 对齐空隙填充：**0x90（NOP）16,840 处 vs 0xCC 104 处**（0xCC 集中在少量 thunk/资源区）。NOP 填充为 VC6 链接器 16B 块布局特征（后期 MSVC 以 int3 填充为主），与 /Gy 块布局互证。

---

## 3. 第 3 层：综合结论

### 3.1 推断的完整命令行（分级置信度）

**编译（cl 12.00.8447）**：

```bat
cl /nologo /O2 /MT /W3 /c /DWIN32 /DNDEBUG /D_WINDOWS /I... game.cpp
```

| 选项 | 置信度 | 依据 |
|---|---|---|
| `/O2`（整体） | ★★★★★ | FPO 97.7% + rep 内联 + 16B COMDAT + 发行版形态，全部 /O2 成分齐活 |
| `/Oy`（含于 /O2） | ★★★★★ | §2.1 |
| `/Oi`（含于 /O2） | ★★★★★ | §2.2 |
| `/Gs`（含于 /O2） | ★★★★☆ | _chkstk=0 |
| `/GF`（含于 /O2） | ★★★★☆ | §2.9 |
| `/Gy`（含于 /O2） | ★★★★★ | §2.3 |
| `/MT`（libcmt 静态多线程） | ★★★★★ | §1.3 |
| 无 `/GX` | ★★★★★ | §2.5（0 异常帧） |
| 架构默认（/GB，未加 /G5/G6） | ★★★★☆ | §2.8 |
| `/W3` | ★★☆☆☆ | 二进制不可测；由 RA1 LAUNCHER.DSP 的 WW 风格外推 |
| `/YX` / `/FD` | ★☆☆☆☆ | 二进制不可测；同上外推 |
| `/Ob1`（/O2 隐含） | ★★★★☆ | 与 /O2 定义一致 |

**链接（link 6.00.8447）**：

```bat
link /nologo /subsystem:windows /machine:I386 /fixed /opt:icf /filealign:0x1000 /out:Sun.exe objs... libcmt.lib ...
```

| 选项 | 置信度 | 依据 |
|---|---|---|
| `/subsystem:windows` | ★★★★★ | Subsystem=2 |
| `/machine:I386` | ★★★★★ | 0x014C |
| `/fixed`（默认） | ★★★★★ | 无 .reloc + RELOCS_STRIPPED |
| `/filealign:0x1000` | ★★★★★ | FileAlignment=0x1000（非默认 0x200，VS2022 对照） |
| `/opt:icf` | ★★★★☆ | CommandClass 47 + CRT 127 折叠记录 |
| `/map`（或 ww 工具链等效） | ★★☆☆☆ | WW 工程风格（LAUNCHER.DSP Release 带 /map）+ MISC dbg 残留；二进制无法直接确认 |
| 无 `/debug` | ★★★★★ | 无 CODEVIEW 目录、无 COFF 符号 |

**Rich Header 复现预期**：以该配置重编后产物 Rich 表应出现 `0x000B @8447`（C++ 对象数≈源文件数）与 `0x0004 @8447`；若链 SP5 环境，link 仍报 8447（见 §1.1 裁定）。

### 3.2 与 RA1 源码的关系（构建脚本考古）

- **RA1（CnC_Red_Alert）官方构建 = Watcom C/C++ 10.6（wpp386）+ TASM 4.0**（README 明示；CODE/MAKEFILE 中 `CC=..\watcom\binnt\wpp386`、`utils\tasm`、`wlink`/`nwlink` 全部在案）——WWFLAT32/RULES.MAK/wmake 体系，与 YR 的 MSVC 无直接选项继承。
- RA1 树中的 **VC 痕迹**：
  1. `LAUNCHER/LAUNCHER.DSP` —— **VC6 Developer Studio 工程**（Format Version 6.00）：
     Release=`cl /nologo /W3 /GX /O2 /D WIN32 /D NDEBUG /D _WINDOWS /YX /FD /c`，
     link=`/nologo /subsystem:windows /map /machine:I386`（Debug 配置另链 `patchw32.lib`——WW 运行时补丁引擎，即本目录 Patchw32.dll）。
     这是 WW 在 VC6 上的**选项风格样本**（但注意：launcher 带 /GX，gamemd 不带——按工程各自配置）。
  2. `WIN32LIB/MEM/MSVC/` 等目录存在 MSVC 变体 makefile（主体仍为 Watcom/Borland 变体 .WAT/.BOR）。
- **演进脉络**：RA1(Watcom/wmake) → TS("SUN" 工程, 1999, VC6 RTM 8168——Blowfish.dll 实证) → RA2(2000-2001, 8168 机器 + SP4 机器混编——game.exe/Ra2.exe) → **YR gamemd(2001-10, cl 12.00.8447 SP3 系机器 + RTM 遗留库 + MASM 6.13)**。
- **对代码还原的实操含义**：
  - RA1 源码作为**结构/逻辑**参考依然成立（README 的四源三角验证），但**编译选项不可从 RA1 直接移植**——Watcom 语义（如 #pragma pack、调用约定默认值）与 MSVC 有差。
  - 还原 YR 函数时的对照基线应为「VC6 SP3 系 cl + /O2」的代码生成形态：FPO 序言、rep stosd 构造清场、16B 函数颗粒、NOP 填充、无异常帧、fastcall 性能路径。

### 3.3 验证方案（取得 VC6 后的 A/B 对拍清单）

**工具获取途径**：
1. VC6 SP5/SP6 完整版：archive.org 存档 "Visual Studio 6.0 Enterprise"（GPL 兼容性无关，仅本地对拍用；安装时注意关杀软/用兼容模式）。
2. **SP3 精确编译器（12.00.8447）**：从 VC6 SP3 补丁包（Vs6sp3.exe 存档）解出 cl.exe/c1.dll/c2.dll 覆盖安装；这是与 gamemd 主代码最接近的 pass。
3. RTM libcmt.lib（8168 对象）：需 VC6 RTM 原版光盘镜像提取（SP3 覆盖后 libcmt 或已更新）。
4. MASM 6.13.7299：VC6 RTM 自带 ml.exe；6.14=SP3 后续版（8444），差异极小。

**对拍验证清单**（每项过/不过都要记录）：
1. `cl /?` 输出版本横幅 = 12.00.8447（SP3 包）。
2. 以 `cl /nologo /O2 /MT /W3 /c` 编译 5–10 个**已完整逆向的源文件**（建议 XSurface 族 GetPixel/SetPixel、EndFrameAudioMixer——调用约定已知、体量小）。
3. 对拍维度：
   - [ ] 函数序言形态（push 序列 / `sub esp,N` 直落）与快照反汇编一致；
   - [ ] `rep stosd/movsd` 内联出现位置吻合；
   - [ ] 函数体 16B 边界 + NOP 填充；
   - [ ] 无 EBP 帧（/Oy）形态比例接近 97%；
   - [ ] 乘法取魔数（如 0x51EB851F÷100 序列，见快照 0x401190）逐指令一致；
   - [ ] 链接后 Rich 表出现 `0x000B @<build>`，`/filealign:0x1000` 下 FileAlignment=0x1000。
4. 若只能取得 SP5(12.00.8804)：后端同源，可作**近似对拍**——预期差异集中在内联启发与指令调度细节；逐指令 diff 时以「基本块等价」为通过线。
5. 长期：把该配置固化为 CI 侧「codegen 回归器」（本仓库 raw_decomp 对拍管线的编译侧补充）。

### 3.4 未定项与风险

| # | 未定项 | 状态 | 影响 |
|---|---|---|---|
| 1 | 8447 的精确 SP 归属（SP3 vs SP3+QFE） | avast 表归 SP3；comp_ids 显示 SP5 环境 link 也报 8447。已按「cl 8447=SP3 系编译器」双线口径陈述 | 低（对拍时 SP3/SP5 后端差异极小） |
| 2 | @8168 的 189 C + 12 C++ 对象中 CRT 与 WW 库的边界 | 未完全定（无 RTM libcmt 样本比对） | 低 |
| 3 | product 0x000C @7291（18 对象） | **待映射**（疑 VC6 beta 时代工具/WW 内部老库） | 无 |
| 4 | /W 级别、/YX、/FD、宏定义集 | 二进制不可测 | 还原时按需假设 |
| 5 | Ra2.exe 的 8797=SP4 与 6 段结构 | 疑保护厂商工具链，未深究 | 无（非 gamemd） |
| 6 | 0xCC 填充 104 处的分布成因 | 未深究（疑 thunk/资源区） | 无 |

---

## 4. 工作文件索引（`.omo/agents/cfp/`）

| 文件 | 内容 |
|---|---|
| `cfp_parse.py` | 手写 Rich/PE/导入/调试目录解析器（只读，支持任意 exe） |
| `gamemd_layer1.json` | gamemd.exe 第 1 层全部原始数据（Rich 13 条目含原始 XOR 值/PE 全字段/导入表/版本块） |
| `census.py` | 第 2 层普查脚本 |
| `census_report.json` | 普查原始数据 |
| `rich_tables_others.txt` | game.exe / RA2MD.EXE / Ra2.exe / YURI.EXE / Blowfish.dll 的 Rich+PE 完整输出 |

**对拍速查卡**（还原翻译时的编译器预期形态）：
FPO 序言 97.7% ｜ 构造清场=rep stosd ｜ 函数 16B 颗粒 + 0x90 填充 ｜ 除法=魔数乘法 ｜ 无异常帧 ｜ 无栈探测 ｜ 成员 thiscall ｜ 性能路径 fastcall ｜ MMX=手写 MASM。
