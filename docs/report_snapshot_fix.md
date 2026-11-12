# 快照修复报告 — 125 个 CW6 CF 坏块 IDA 重导出（2026-11-13）

## 0. 结论

| 项 | 结果 |
|---|---|
| 目标块 | **125 / 125** 重导出并块级替换（`cw6_prep/bad_snapshot.json` → `cf`） |
| 损坏类别消除 | **TRUNC 18 → 0，QMARK 88 → 0**（QMARK 含 3 件 QMARK+ASMBODY 重叠） |
| 替换后状态 | **96 件全净** + **29 件仅剩 Hex-Rays 内联 `__asm` 片段**（ASMBODY，非快照兜底体） |
| 管线可解析性 | `pseudo.fetch` **125 / 125** 成功，无空 body |
| 转换通道 | `decompile.py --no-compile` **125 / 125** 函数全部转换，offset site 还原 8,515 / 9,462 = **90.0%** |
| 抽样 probe（10 件） | `?` / `... [N chars total]` 报错 **0 次**；1 件编译通过（MISMATCH），9 件 CF 均为非快照问题（类型/内联 asm） |
| 完整性 | 82 个被改文件 block 计数全部不变；`备份 + 125 块替换` 重建结果与现文件逐字节相等 82/82 |
| 备份 | `.omo/snapshot_fix_backup/files/<file>.bak`（82 个全文件）+ `blocks/<Class>__<ADDR>.txt`（125 个原块）+ `manifest.json` |

> 快照目录 `decompile-results/` 与 `.omo/` 均被 `.gitignore` 忽略，快照本身不可入库；
> 因此本轮 commit = 本报告 + `docs/snapshot_fix_manifest.json`（备份与替换清单）。

## 1. 清单与根因

工具扫描口径（`cw6_prep/cw6_badsnap.py`）：在 `decompile-results/full_export/src/*.cpp`
逐 block 匹配 Hex-Rays 段。125 件全部来自 `bad_snapshot.json.cf`（`in_cf=true`）。

| 类别 | CF 命中 | 根因 | 本轮动作 |
|---|---:|---|---|
| TRUNC | 18 | MCP 工具输出有大小上限，返回 `Output truncated. Run: curl -o .ida-mcp/<uuid>.json http://127.0.0.1:13337/output/<uuid>.json`；v2 导出器未跟进该链接，把提示行当成了函数体 | 重导出时跟进 spill 链接取完整 JSON |
| QMARK | 88 | v2 快照导出于 2026-09-05，早于 X123（2026-10-24）的 til 空名/占位成员修复；全量导出从未重跑 | 当前 IDB 重导出后 `->?` 变为真实成员名 |
| ASMBODY | 22 | v2 口径把 `__asm { fcomp ... }` 等 Hex-Rays 内联汇编也计入；当前 IDB 中这些函数体的主体是 C，仅保留 x87 内联片段 | 重导出（主体完整化），内联 asm 片段残留（见 §6） |

## 2. 重导出方法（live IDA MCP）

- 探针：`curl -m 5 http://127.0.0.1:13337/` 在线；`server_health` 返回
  `idb_path=D:\RA2YR_ReSource\decompile-results\gamemd.exe.i64`、`module=gamemd.exe`、
  `imagebase=0x400000`、`hexrays_ready=true`。
- 每件三调：`lookup_funcs`（name/size）→ `export_funcs(format=json)`（prototype/code）→
  `disasm(max_instructions=max(400,size+8))`（完整函数反汇编）。
- 大结果处理：工具返回 `Output truncated` 时从 `/output/<uuid>.json` 取完整负载
  （TRUNC 的根治点）。
- block 文本按 `tools/type_infer/ida_full_export.py::phase_functions` 的原格式逐字复刻：
  `// ====×70 / // name / // addr=0x%08X size=0x.. / // proto: ... / IDA disasm / Hex-Rays`。
  必带 `// proto:` 行——`pseudo.fetch` 的块头正则要求该行存在。
- 替换：按 `// addr=0x%08X` 定位块，span = 本块分隔行起点 → 下一块分隔行起点；
  每文件先整文件备份，再原子写（tmp + os.replace）。逐文件、逐块，不触碰其他块。

## 3. 结果与完整性

### 3.1 类别迁移（125 件）

| old → new | 件数 |
|---|---:|
| QMARK → 净 | 83 |
| TRUNC → 净 | 12 |
| TRUNC → ASMBODY（主体完整，含内联 asm） | 6 |
| QMARK+ASMBODY → ASMBODY | 3 |
| QMARK → ASMBODY | 2 |
| ASMBODY → ASMBODY | 18 |
| ASMBODY → 净 | 1 |
| **合计** | **125** |

### 3.2 完整性校验

- 82 个被改文件：`// addr=` block 计数 **改动前 = 改动后**（逐文件）。
- 重建校验：以 82 个 `.bak` 为基底、重放 125 个新块，结果与当前文件 **逐字节相等 82/82** → 无越界替换、无附带损坏。
- `pseudo.fetch`（读取 `index.json` 的 addr→file 映射）**125/125** 成功、无空 body。
- 唯一名称漂移：`0x772080` 旧块名 `WarheadTypeClass::ReadINI`，当前 IDA 名
  `WeaponTypeClass::ReadINI`（L4 已正名的类归属；`index.json` 的 name 字段未更新，
  但该字段不参与产线 unit 选择，仅 `file` 字段被使用）。

### 3.3 体积变化（信息）

旧块合计 1,392,011 字符 → 新块合计 3,261,996 字符。增量全部来自被截断/被省略的函数体与
完整反汇编（旧 TRUNC 块最大仅约 1 KB，新块 22 KB–431 KB）。

## 4. 特殊件：0x739ec0 `BuildingClass::ProcessSell`

- 旧块 TRUNC（`... [33504 chars total]`）。
- 重导出仍失败：Hex-Rays 在 **自递归调用 0x480eaf** 处报
  `Decompilation failed at 0x739ec0 (address: 0x73b056)`。
- 证据链：
  - `0x73b056` = `call BuildingClass::SellEffects`；目标 `0x480cb0` 的类型为
    `int __userpurge@<eax>(int this@<ecx>, CellStruct)`（垃圾签名，其自身反编译也失败于
    `0x480eaf`——同一函数的自递归调用）。
  - 受控实验（`SetType` 后再 `decompile`）：
    `int __thiscall f(BuildingClass *this, int cell)` → **OK**；
    `int __thiscall f(BuildingClass *this, CellStruct cell)` → **FAIL**。
    即按值结构体参数 + 自递归触发 Hex-Rays 失败，而非调用点本身。
  - 真值：callee `retn 4`（1 个栈 dword），ECX=this；4 个调用点均 push 单个 dword
    （`0xFFFFFFFF`、`0xC8`、栈变量、成员 `[ebx+98h]`）；函数体早期把该参数按 dword
    与 -1 比较。`.X/.Y` 写入是编译器复用参数栈槽给局部 `CellStruct`，不是参数类型。
- 处置：`0x480cb0` 类型改为 `int __thiscall(BuildingClass *this, int cell)`，
  `force_recompile` 后 ProcessSell 与 SellEffects 均反编译成功；`idb_save` 已持久化。
  新块 84,798 字符，无 TRUNC/QMARK。

## 5. 验证

### 5.1 全量静态验证

- 125 块重扫：TRUNC 0 / QMARK 0 / ASMBODY 29（见 §6）/ 其余净。
- **全池重扫（口径同 `cw6_badsnap.py`）**：坏块 916 → **820**（恰好 −96 = 96 件转净；
  29 件仍以 ASMBODY 留在池中）。分类计数：QMARK **647 → 559**（−88，CF 全清）、
  TRUNC **129 → 111**（−18，CF 全清）、ASMBODY **170 → 177**（+7 = 6 件 TRUNC 与 2 件
  QMARK 转 ASMBODY，−1 件 ASMBODY 转净）。非 CF 坏块零变动 → 证明只动了目标 125 块。
- 转换通道（不编译）：`python tools/decomp_sys/decompile.py <125 addrs> --no-compile --out .omo/snapshot_fix/conv_all2`
  → `functions=125`，`offset_sites_identified=9462`，`restored=8515`（90.0%），无转换崩溃。

### 5.2 抽样 probe（10 件，不写账本）

命令：`python tools/decomp_sys/batch_run.py <10 addrs> --no-ledger --out .omo/snapshot_fix/probe_run`

| addr | 旧类别 | probe 判定 | 错误性质 |
|---|---|---|---|
| 0x427d00 | TRUNC | COMPILE_FAIL | `_RT1` 未声明（伪寄存器/类型） |
| 0x576ba0 | TRUNC | COMPILE_FAIL | C2100/C2664（类型） |
| 0x4b2630 | TRUNC | COMPILE_FAIL | C2664（形参类型） |
| 0x481a00 | TRUNC | COMPILE_FAIL | 生成 hpp 预处理行（C2019） |
| 0x739ec0 | TRUNC | COMPILE_FAIL | `_EBP` 与 era_types.h 类型名冲突 |
| 0x7258d0 | QMARK | COMPILE_FAIL | C2446（指针/整数比较，类型） |
| 0x41f0d0 | QMARK | **MISMATCH（编译通过）** | codegen_shape（orig 171B / ours 315B） |
| 0x50b760 | QMARK | COMPILE_FAIL | C2109（下标，类型） |
| 0x43fb20 | ASMBODY | COMPILE_FAIL | `_EBP` 冲突 + 内联 asm |
| 0x4265b0 | ASMBODY | COMPILE_FAIL | 内联 `fstp` 未被解析 |

**关键判据**：probe 错误文本中 `?` 语法错误与 `... [N chars total]` 出现 **0 次**。
残余错误均为快照之外的问题（类型推断/伪寄存器命名/内联 asm），符合“重导出后 CF 从
不可修变为可被规则/类型修复”的预期。

> `batch_run` 的 `--no-ledger` 不写 `status.json`（复核：上述地址在账本中仍为旧
> COMPILE_FAIL 记录）。`results.jsonl` 为运行日志，probe 会追加 10 行（该模式下无关闭开关）；
> 未对日志做回删——运行期间另有并发会话在写入，按文件尾截断会误删他人数据。

## 6. 残余与后续

1. **29 件 ASMBODY 仍含 Hex-Rays 内联 `__asm { ... }`**（x87 `fcomp/fadd/fstp` 等）。
   这不是快照截断，而是当前 IDB 的 Hex-Rays 输出形态；`tools/decomp_sys` 的解析器
   没有 `__asm` 词法，因此这些函数仍会 CF（如 `0x4265b0` 的 C2065 `'fstp'`）。
   处理属产线解析器工作（本轮禁止修改 decomp_sys），本轮只保证快照不再是瓶颈。
2. **`_EBP` 命名冲突**：IDA 伪码寄存器 `_EBP` 与 `era_types.h` 的结构体名 `_EBP` 冲突
   （`probe` 中 BuildingClass.cpp 的 C2143/C2275 系列）。同样是产线层问题。
3. `0x772080` 名称漂移已记录；`index.json` 的 name 字段未刷新（不参与 unit 选择）。
4. 若后续要重跑 125 件 CF 进账本：直接 `batch_run.py --batch <125>` 即可，
   快照已可被 `pseudo.fetch` 完整读取。

## 7. 工件与复现

| 路径 | 内容 |
|---|---|
| `.omo/snapshot_fix_backup/files/*.bak` | 82 个被改快照文件的全文件备份（改前） |
| `.omo/snapshot_fix_backup/blocks/*.txt` | 125 个原块文本（改前） |
| `.omo/snapshot_fix_backup/manifest.json` | 逐块清单：addr/file/name/size/kinds(old,new)/sha256/长度/asm 行数/span、逐文件 sha256 |
| `docs/snapshot_fix_manifest.json` | 上述 manifest 的入库副本（快照目录被 gitignore） |
| `.omo/snapshot_fix/run_fix.py` | 抓取 + 备份 + 块级替换主脚本（本地，未入库） |
| `.omo/snapshot_fix/verify_scan.py` / `integrity.py` | 125 块重扫 / 重建逐字节校验（本地） |
| `.omo/snapshot_fix/probe_run/` | 10 件 probe 的 part_report / 生成代码（本地） |
| `.omo/snapshot_fix/conv_all2/` | 125 件转换通道产物与 report.json（本地） |

重跑方式（IDA 在线时）：`python .omo/snapshot_fix/run_fix.py`（fetch 有 `<ADDR>.block.txt`
缓存，已抓取的不再请求）；单件重取删对应缓存即可。
