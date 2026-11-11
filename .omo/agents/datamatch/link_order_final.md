# INT/IAT 槽位置换终击（R8）— 最终报告

> 任务：INT/IAT 终击三度恢复，接前任（14:17 死于配额）的 `link_fns.json` 遗产，续攻
> 0x478258 映射数组 + 双计数器控制流，产出机制假说 + 全量 371 槽验证。
>
> 会话日期：2026-11-11（R8，第四次尝试）。
> 工具链：`.vc6-8447/`（ML 6.13.7299 / LINK 6.00.8447 / LIB），MinGW-W64 GDB 16.3（32 位 LINK.EXE 可调试）。
>
> **结论先行（诚实口径）**：
> 1. **阶段定位已被实证钉死**：成员 pull/转换顺序 = 插入序（KERNEL32 **162/162 逐项吻合**），
>    `.idata$6`（hint/name 池）也是插入序；**唯一被置换的是 `.idata$4`(INT) / `.idata$5`(IAT)
>    这两个 4 字节、带重定位的数组**。置换发生在输出段 contribution 排序阶段，不在 pull 阶段。
> 2. 建立了**完整的 n×m 双 DLL 变换矩阵**与三 DLL 数据；2-DLL 经验规则可 100% 拟合 80 个构建
>    （见 §4），但 3-DLL/15-DLL 语境下规则变形，**371 槽 ≥95% 未达成**。
> 3. 三铁律保持成立（纯位置性 / 分段逆序形态 / n≤7 rot-left-1 与 n≥8 恒等分裂）；
>    n=8 阈值与 CRT/重定位顺序/命令行库序无关。
> 4. 精确的 "8 槽容器" 代码位置仍未被定位（已排除哈希/名字键/qsort 名字键/字典序族）。

---

## 1. 前任遗产恢复（link_fns.json 是什么）

`.omo/agents/datamatch/link_fns.json`（75KB，14:17）= `link_final_scan.py` 的产物：
- `fns`: LINK.EXE `.text` 线性扫描得到的 **2,695 个函数边界**（调用目标 + 终止符启发式）；
- `xrefs`: 对 10 个嫌疑全局（0x478258 映射数组、0x47CA58/0x47CA5A 双计数器、0x474258
  serialArray、0x46E240 桶头、0x46E234 段数组、0x4695E8 per-DLL FIFO、0x46ADF0/F4 记录缓冲、
  0x46E1F8 记录数）的跨函数引用索引。
前任的意图：用这个索引重建双计数器/映射数组的控制流（H-双编号假说）。

**本会话对这一路线的裁决**：0x412220/0x412A40/0x412E20 是 **OMF 记录解析器**（EXTDEF/LNAMES/
SEGDEF 等），0x47CA58/0x47CA5A/0x478258 服务于 **COFF 输出符号表**（18 字节符号表条目），
与 .idata 置换**无关**。理由（原始反汇编见 §2.1）：
- 0x411BD0 = `fread(dest,size)` 包装（`[0x480E70]` = 当前输入剩余字节数）；
- 0x411C90/0x411CE0/0x411DA0 = OMF 变长索引 / 带类型值 / 长度前缀串读取；
- 0x412030 = 追加 **18B COFF 符号表条目**（`[0]=名内联或串池指针, [8]=Value, [0xC]=Section,
  [0xE]=Type, [0x10]=StorageClass, [0x11]=AuxCount`），不是 import 记录；
- 0x414D92-0x414DBA = 把 18B 记录顺序 fwrite 到输出（符号表）；
- 0x414260 = 211 桶遍历物化（输出符号表顺序 = 名字 hash 序）。
所以 H-双编号对 INT 置换不成立（它只解释输出符号表的顺序）。

---

## 2. 决定性新证据（本会话核心）

### 2.1 原始反汇编（关键片段）

**(a) 0x412030 = 18 字节 COFF 符号表条目构造器**（`sub esp,0x14`；5 参数 `ret 0x14`）：

```
00412124  8D 14 C0             lea  edx,[eax+eax*8]        ; 记录号*9
00412127  A1 F4 AD 46 00       mov  eax,[0x46adf4]         ; recBuf
0041212E  8D 0C 50             lea  ecx,[eax+edx*2]        ; + 记录号*18
00412131  8B 54 24 00          mov  edx,[esp]              ; local[0..3]  ← 名字(8B 内联)
00412135  89 11                mov  [ecx],edx
00412137  8B 44 24 04          mov  eax,[esp+4]
0041213B  89 41 04             mov  [ecx+4],eax
0041213E  8B 54 24 08          mov  edx,[esp+8]
00412142  89 51 08             mov  [ecx+8],edx            ; +8 = Value(dword)
00412145  8B 44 24 0C          mov  eax,[esp+0xC]
00412149  89 41 0C             mov  [ecx+0xC],eax
0041214C  66 8B 54 24 10       mov  dx,[esp+0x10]
00412151  66 89 51 10          mov  [ecx+0x10],dx          ; +0x10 = 2 字节
00412155  8B 0D F8 E1 46 00    mov  ecx,[0x46e1f8]         ; recCount
0041215D  41                   inc  ecx
0041215E  89 0D F8 E1 46 00    mov  [0x46e1f8],ecx
```
→ 18B 结构 = COFF symbol table entry（name[8], Value, Section, Type, Class, AuxCount）。

**(b) 0x463930 = short import object 识别/转换入口**（前 12 字节）：

```
00463930  55                   push ebp
00463931  8B 6C 24 14          mov  ebp,[esp+0x14]
00463935  56                   push esi
00463936  8B 74 24 0C          mov  esi,[esp+0xC]      ; arg1 = 模块索引
0046393A  85 ED                test ebp,ebp
...
004639A1  66 83 3E 00          cmp  word ptr [esi],0   ; Sig1 == 0
004639A5  75 7F                jne  0x463a26
004639A7  66 81 7E 02 FF FF    cmp  word ptr [esi+2],0xFFFF  ; Sig2 == 0xFFFF
004639AD  75 77                jne  0x463a26           ; ← 非 short import object
```
`esi` = 指向短导入对象头（20B：Sig1/Sig2/Version/Machine/TimeDateStamp/SizeOfData/Hint/Type|NameType）。

**(c) 0x421010 = 40 字节 section record 初始化器**（`ret 0x18`，6 参数）：

```
00421010  56                   push esi
00421011  8B 74 24 08          mov  esi,[esp+8]        ; arg1 = 记录
00421015  57                   push edi
00421016  B9 0A 00 00 00       mov  ecx,0xa
0042101B  33 C0                xor  eax,eax
0042101F  F3 AB                rep stosd               ; 清零 40B
00421021  8B 44 24 14          mov  eax,[esp+0x14]     ; arg3 = 节名指针
00421025  6A 08                push 8
00421027  50                   push eax
00421028  56                   push esi
00421029  FF 15 50 12 40 00    call [0x401250]         ; strncpy(record, name, 8)
...
0042103F  89 56 10             mov  [esi+0x10],edx     ; +0x10 = running offset
00421042  66 89 4E 20          mov  [esi+0x20],cx
00421046  89 46 24             mov  [esi+0x24],eax
...
00421079  89 07                mov  [edi],eax          ; [edi] += size（累计偏移）
```
gdb 实测该函数在 o_base4 构建中每个 import 成员按固定序创建 6 个 40B 记录：
`.debug$S, .text, .debug$S, .idata$5, .idata$4, .idata$6`（4 个成员 × 6 记录，栈地址
0x1ae96c..0x1aea34 循环复用，步长 0x28）。

**(d) 0x414260 = 211 桶遍历物化（输出符号表）**：`mov ecx,0xd3` + `[0x46e240]` 桶头 +
`[0x474258]` serialArray + `[esi+0xC]` 节点 serial。与 INT 无关（已确认）。

### 2.2 铁证：.idata$6 按插入序，.idata$4/.idata$5 才旋转

`o_base4.exe`（exp_order2；user32 四导入，插入序 GetKeyState→GetFocus→SendMessageA→GetDC）
的 PE 原始字节（`.rdata` RVA 0x2000 起）：

```
0x2000 IAT : 5e200000 6a200000 7a200000 50200000 00000000   ← rot1
0x2014 desc: 3c200000 00000000 00000000 00000000 82200000 00200000
0x203c INT : 5e200000 6a200000 7a200000 50200000 00000000   ← rot1
0x2050 names: 1201"GetKeyState" 0007 01"GetFocus"
              001402"SendMessageA" 00fd00"GetDC" "USER32.dll"
```
- hint/name 池顺序：GetKeyState(0x2050) → GetFocus(0x205e) → SendMessageA(0x206a) → GetDC(0x207a)
  = **插入序**；
- INT/IAT 顺序：GetFocus → SendMessageA → GetDC → GetKeyState = **rot-left-1**；
- .data 的 `dd __imp_X` 顺序也是插入序（0x401022→0x401028→0x40102e→0x401034），
  但 thunk 的 IAT 槽分别是 3,0,1,2 —— 证明**槽号分配**（而非 thunk 布局）被旋转。

### 2.3 铁证：成员 pull 序 = 插入序（test2 371 槽，gdb 实测）

断点 0x463930（short import object 转换），test2 全量链接，按模块索引分组（HINT 序列）：

```
KERNEL32.dll mod=10  trace=176(去连续重复)  ins=162  →  trace~ins = 162/162 逐项完全一致！
GDI32.dll    mod=8   trace=[394,47,83,373,...]  ins=[47,83,373,...]  ← 去掉跨模块杂散 394 后完全一致
ADVAPI32.dll mod=7   trace=[448,347,379,...]    ins=[347,379,...]    ← 同上
WINMM.dll    mod=3   trace=[71,152,149,153,154,148] ins=[152,149,153,154,148]
```
→ **pull/转换顺序 = ref.obj symtab 插入序**；旋转只能来自后续的输出段布局。
（杂散的 394/448/71 是前一模块最后一个成员的重复 section 读取。）

---

## 3. 受控实验（本会话新增，全部可复现）

### 3.1 单 DLL（`exp_probe.py --single / --single-nocrt`、`exp_matrix3.py`）

| n | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| perm | [0] | [1,0] | [1,2,0] | [1,2,3,0] | [1,2,3,4,0] | [1,2,3,4,5,0] | [1..6,0] | 恒等 | 恒等 | 恒等 | 恒等 | 恒等 |

- 无 CRT（无 side/main/libcmt）结果完全相同 → 8 阈值与 CRT 无关；
- dd/重定位顺序无关（`exp_order2.py`：symtab ABCD + dd 顺序 CADB → 输出仍 rot1）；
- 非 import 外部符号**占位**参与位置（mix_x1：symtab [A,X,B,C,D] → INT [B,C,D,A]）。

### 3.2 双 DLL 全矩阵（`exp_matrix3.py`，U=user32 先 + W=winmm 后，n,m=1..10）

数据文件：`.omo/agents/datamatch/exp_matrix3.json`。经验规则（对 80 构建全部吻合）：

```
W identity ⟺ (m ≥ 8) 或 (m ≥ n 且 n+m ≥ 7)
U identity ⟺ (n ≥ 8) 或 (n ≥ 6 且 m ≥ n) 或 (n ≤ 5 且 m < n 且 n+m ≥ 7)
其余 = rot-left-1（块内独立旋转，不是全局重排）
```
代表样本：U1W5→W rot；U2W5→U rot/W id；U4W3→U id/W rot；U4W4→U rot/W id；
U6W5→U rot/W rot；U6W6→双 id；U8W5→双 id；U5W5→U rot/W id。

### 3.3 三 DLL（U n + W m + VERSION 3；`exp_3dll_uvw.json`）

- V(3) 绝大多数上下文 = **全逆** `[2,1,0]`（m=1 时 `[2,0,1]`）；
- W 变为复杂置换（分段逆序），如：
  - m=4: `[3,1,0,2]`(n=3,4) / `[3,2,0,1]`(n=5,6) / `[3,2,1,0]`(n=7,8)
  - m=5: `[2,1,0,3,4]` / `[3,1,0,2,4]` / `[3,2,0,1,4]` / `[3,2,1,0,4]`
  - m=8: `[4,3,6,7,2,1,0,5]`(n≤2) / `[3,5,6,7,2,1,0,4]` 等
- 与 test2 的 asc/desc 游程形态一致 → 分段逆序是**真实机制形态**，不是测量噪声。

### 3.4 test2 371 槽：朴素规则命中率（诚实数字）

`rot1 if n<8 else identity` 直接套用到 test2：**16/371 = 4.3%**（15 DLL 语境下全部变形）。
371 槽的全局 INT 序（按描述符序拼接）有 31 个单调游程，identity 位置仅 21/371。
→ **≥95% 目标未达成**；简单规则无法外推到 15 DLL。

---

## 4. 机制假说（当前最佳，含证据强度）

### H-layout（唯一存活，已被 §2.2/§2.3 直接支撑）

> 输出段 contribution 列表对 **4 字节、带重定位的节**（.idata$4/.idata$5）采用了与
> .text/.idata$6 不同的顺序规则：`.idata$6`/`.text` 按模块（=插入）序；
> `.idata$4/.idata$5` 相对其旋转/分段逆序。成员 pull、hint/name 池、thunk 布局均为插入序。

证据强度：**实证**（PE 原始字节 + gdb pull 序 162/162）。

### 关于 "8" 的候选解释（未证实，按优先级）

1. **固定 8 槽暂存容器**：contribution 先进入 8 项暂存数组；未满时输出指针从次项起绕回
   （→ rot1），满 8 项时走另一条（恒等）路径。与 "n≤7 rot1 / n≥8 identity" 精确同构；
   多 DLL 时相邻块共享/接力该容器 → 出现 m≥n、n+m≥7 等条件。
2. 8 项小数组的**插入排序/重排**（MSVC 小数组阈值 8）——但比较键必须是位置性的，
   否则违反铁律；尚未找到该排序。
3. 逐 DLL 的 **serial→slot 映射在 N<8 时使用 (i-1) mod n**（槽号旋转），N≥8 时退化为 i。
   已由 thunk 的 IAT 槽引用实测支持（n=4：槽 3,0,1,2）。

### 已证伪（勿重跑）

| 模型 | 证据 |
|---|---|
| 名字哈希桶游走（含 16 组态） | R7：≤19/371；铁律 |
| 库字典序 / 字母序 | R7：≤3/DLL |
| 全局单值旋转 / 环形缓冲线性探测 | R7 |
| **本会话新增**：dd/重定位顺序驱动 | exp_order2 直接对照 |
| **本会话新增**：pull 顺序驱动 | test2 gdb：162/162 = 插入序 |
| **本会话新增**：位置键哈希（B=2..16, K=1..7 × head/tail × asc/desc） | 3-DLL 数据最优 46.4% |
| **本会话新增**：CRT 参与与否 | --single-nocrt 同 --single |
| **本会话新增**：/INCREMENTAL:NO | 输出不变 |

---

## 5. 动态取证基础设施（本会话建立，后续会话直接复用）

- `tools/data_match/w1/link_dis.py`：LINK.EXE 任意地址区间反汇编（带原始字节 + 跳转目标）。
- `tools/data_match/w1/link_trace.py`：gdb Python 探针（`stack4`/`impobj2`/`secinit`/`findstr`/
  `writechk`/`fwritechk`/`dumptable`），日志 `.omo/agents/datamatch/gdb_trace.log`。
- **关键操作纪律（踩坑实录）**：
  1. **断点必须在 `starti` 之后安装**——启动前安装的断点在 Windows gdb 上经常不生效；
  2. 命令文件用 `Set-Content` 写入后立即启动 gdb 偶发读到旧内容：**先删 gdb_trace.log，
     失败就重跑一次**；
  3. gdb 的 `python` 单行命令过长（>约 300 字符）会静默不执行 → 拆成多行 `python install(...)`；
  4. `set args ...` 比 `--args` 稳（后者与 `-x` 组合时偶发取不到参数）。
- 实验脚本：`exp_probe.py`（单/双/三 DLL 构建矩阵）、`exp_matrix3.py`（n×m 全矩阵）、
  `exp_order2.py`（symtab vs dd 顺序对照）、`analyze_test2_trace2.py`（pull 序 vs INT 序比对）。

---

## 6. 与三铁律的一致性

| 铁律 | 本会话证据 |
|---|---|
| 纯位置性 | pull 序 = 插入序（162/162）；任何名字键模型都不作用于 INT 顺序（§3.4 命中率 4.3% 的朴素规则与名字无关） |
| 分段逆序形态 | 3-DLL W 变换族 `[3,1,0,2]`/`[5,3,2,0,1,4]`；test2 全局 31 个单调游程 |
| n≤7 rot-left-1 / n≥8 恒等 | 复测 12/12 单 DLL；无 CRT 不变；dd 序无关；非 import 符号占位 |

---

## 7. 未完成项与下一步（按 ROI）

1. **定位 8 槽容器**：`gdb` 在 `0x421010` 每次 section record 初始化时记录记录地址与运行偏移；
   已观察到记录地址在栈上循环复用（步长 0x28）。下一步：跟踪这些记录被复制到哪个模块
   section 表（`[0x4968C4]` 表 + 40B 记录），以及输出 section 的 contribution 链表头在哪。
2. **直接抓写入点**：输出 EXE 的写文件路径未走 `_write`/`fwrite` 的直呼点（仅寄存器间接调用），
   需先静态枚举 `mov reg,[0x4010d8]; call reg` 形态，或对输出缓冲设硬件 watchpoint
   （缓冲地址可通过 "在 layout 后任意时刻 find 内存中的 INT 字节模式" 获得——本次在 exit
   时刻已被释放，需在更早的锚点抓）。
3. **15 DLL 全量拟合**：以 §3.2 的块规则为特征，构造 "容器接力" 模拟器，对 test2 371 槽回归；
   若 ≥95% 再回头形式化 "8 槽" 语义。
4. **验证口径**：全量对拍必须用 `comparisonResult.log`-式的外部可观测（INT/IAT 逐槽），
   不接受 "进程没崩" 类判据。

---

## 8. 工件清单

- 本报告：`.omo/agents/datamatch/link_order_final.md`
- 数据（gitignored）：`link_fns.json`、`exp_matrix3.json`、`exp_3dll_uvw.json`、
  `exp_matrix_uw.json`、`exp_order2` 系列构建、`gdb_trace.log`、`hint_map.json`
- 入库脚本：`tools/data_match/w1/{link_dis,link_trace,exp_probe,exp_matrix3,exp_order2,
  analyze_test2_trace2,link_final_scan}.py`
- 前任遗产：`tools/data_match/w1/link_final_scan.py`（本会话补提交）
