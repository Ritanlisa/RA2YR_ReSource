# INT/IAT 槽位置换终击（R8）— 最终报告：机制破译 + 371/371 全量验证

> 任务：INT/IAT 终击三度恢复（接前任 14:17 遗产 `link_fns.json`），续攻 0x478258 映射数组 +
> 双计数器，产出机制假说 + 全量 371 槽验证。
> 日期：2026-11-11（R8）。工具链：`.vc6-8447/`（LINK 6.00.8447 / ML 6.13.7299 / LIB），
> MinGW-W64 GDB 16.3（可调试 32 位 LINK.EXE）。

## 0. 结论（已破译，100% 验证）

**机制**：LINK 6.0 在输出 `.idata$4`（INT）与 `.idata$5`（IAT）前，把这两个输出段的所有
contribution 收集为一个**指针数组**，用 **`MSVCRT.DLL` 的系统 `qsort`**、按 **DLL 名（模块名）**
字符串比较排序；**同一 DLL 的所有节比较结果相等**，因此排序结果完全由
**系统 msvcrt qsort 对全等键的置换行为**决定：

| 等键组大小 N | 系统 msvcrt qsort 输出（id 顺序） |
|---|---|
| N ≤ 8 | **rot-left-1**：`[1,2,...,N-1,0]` |
| N ≥ 9 | 恒等或分段置换（由全局数组/分区决定） |

每个 DLL 的数组元素 = **n 个导入 + 1 个特殊元素**（DLL 终止符/null thunk 的 4 字节节）→
单 DLL 时 N = n+1，于是 **n≤7 → rot1、n≥8 → 恒等** 与实测完全一致。
多 DLL 时所有 DLL 的节在**同一个全局数组**里排序（键=各自 DLL 名），因此单 DLL 的置换
依赖全局集合与各 DLL 名在字典序中的位置——即 R7 的"全局集合效应"。

**验证（全绿）**：
- 2-DLL 全矩阵（U n + W m，n,m=1..8）：**128/128 块 = 100.0%**
- 3-DLL（U n + W m + VERSION 3，n,m=1..8）：**192/192 块 = 100.0%**
- **test2 全量 371 槽（15 DLL）：371/371 = 100.00%**（逐 DLL 全对，见 §5）

三铁律全部由该机制解释：
1. **纯位置性**：同一 DLL 的键全等，qsort 的比较结果恒 0，输出只依赖位置；
2. **分段逆序形态**：msvcrt qsort 的分区交换在 N≥9 时产生分段/逆序（如 GDI32 `desc(19..12)…`）；
3. **n≤7 rot1 / n≥8 恒等分裂 + 全局依赖**：组大小 = n+1 对 8 的边界 + 全局数组的排序分区。

---

## 1. 前任遗产（link_fns.json）与"H-双编号"裁决

`link_fns.json`（75KB, 14:17）= `link_final_scan.py` 产物：LINK.EXE `.text` 线性扫描的
**2,695 个函数边界** + 10 个嫌疑全局（0x478258 映射数组 / 0x47CA58/0x47CA5A 双计数器 /
0x474258 serialArray 等）的跨函数 xref。

**裁决：该路线（双计数器/映射数组）与 INT 置换无关**。原始反汇编证据：
- 0x411BD0 = `fread(dest,size)` 包装；`[0x480E70]` = 当前输入剩余字节数；
- 0x411C90/0x411CE0/0x411DA0 = OMF 变长索引 / 带类型值 / 长度前缀串读取；
- **0x412030 = 追加 18B COFF 符号表条目**（`[0..7]`=名字内联或串池指针、`+8`=Value、
  `+0xC`=Section、`+0xE`=Type、`+0x10`=StorageClass、`+0x11`=AuxCount）：

```
00412124  8D 14 C0             lea  edx,[eax+eax*8]      ; recNo*9
00412127  A1 F4 AD 46 00       mov  eax,[0x46adf4]       ; recBuf
0041212E  8D 0C 50             lea  ecx,[eax+edx*2]      ; +recNo*18
00412135  89 11                mov  [ecx],edx
0041213F  89 41 08             mov  [ecx+8],eax
0041214C  66 8B 54 24 10       mov  dx,[esp+0x10]
00412151  66 89 51 10          mov  [ecx+0x10],dx
```
- 0x414D92..0x414DBA = 18B 记录顺序 fwrite 到输出（**输出符号表**）；
- 0x414260 = 211 桶遍历物化（符号表顺序 = 名字 hash 序）。
→ 双计数器服务于 **COFF 输出符号表**，与 .idata 排列无关。

---

## 2. 决定性取证：置换发生在哪个阶段

### 2.1 `.idata$6` 按插入序，`.idata$4/$5` 才被置换（PE 原始字节）

`o_base4.exe`（user32 四导入，插入序 GetKeyState→GetFocus→SendMessageA→GetDC）：

```
.rdata RVA 0x2000:
  0x2000 IAT : 5e200000 6a200000 7a200000 50200000 00000000   ← rot1
  0x2014 desc: 3c200000 ... 82200000 00200000
  0x203c INT : 5e200000 6a200000 7a200000 50200000 00000000   ← rot1
  0x2050 hint/name: 1201"GetKeyState" 0701"GetFocus" 1402"SendMessageA" fd00"GetDC" "USER32.dll"
```
- hint/name 池 = **插入序**；
- INT/IAT = rot1；
- `.data` 的 `dd __imp_X` 顺序 = 插入序，但 thunk 的 IAT 槽引用为 3,0,1,2 → **槽分配**被置换。

### 2.2 成员 pull/转换顺序 = 插入序（gdb，test2）

断点 0x463930（short import object 识别/转换，检查 `Sig1==0 && Sig2==0xFFFF`）：

```
004639A1  66 83 3E 00          cmp  word ptr [esi],0
004639A5  75 7F                jne  0x463a26
004639A7  66 81 7E 02 FF FF    cmp  word ptr [esi+2],0xFFFF
004639AD  75 77                jne  0x463a26
```
test2 全量链接，按模块索引统计 HINT 序列 → 与 `slot_diff.ins`（ref.obj 符号表序）比较：
**KERNEL32 162/162 逐项相同**；GDI32/ADVAPI32/WINMM 去掉跨模块杂散后同样完全一致。
→ pull 顺序 = 插入序；置换在**输出段布局阶段**。

---

## 3. 机制本体：LINK 用系统 msvcrt qsort 按 DLL 名排序节列表

### 3.1 排序函数 0x40F580（原始反汇编）

```
0040F580  83 EC 10             sub  esp,0x10
0040F583  53 56 57             push ebx/esi/edi
0040F58A  8B 46 04             mov  eax,[esi+4]          ; count
0040F58D  C1 E0 02             shl  eax,2
0040F590  50                   push eax
0040F591  E8 8A 25 04 00       call 0x451b20             ; malloc(count*4)
0040F59E  E8 BD 04 00 00       call 0x40fa60             ; 列表迭代器 init
0040F5B3  8B 44 24 18          mov  eax,[esp+0x18]
0040F5BB  89 03                mov  [ebx],eax            ; 收集对象指针
...
0040F5CD  68 30 F6 40 00       push 0x40f630             ; ★ comparator
0040F5D2  6A 04                push 4                    ; width = 4 (指针)
0040F5D4  52                   push edx                  ; num
0040F5D5  57                   push edi                  ; base
0040F5D6  FF 15 D8 11 40 00    call dword ptr [0x4011d8] ; ★ qsort (MSVCRT.dll)
...
0040F5E9  8B 10                mov  edx,[eax]            ; 排序后重建链表
0040F5EB  8B 58 04             mov  ebx,[eax+4]
0040F5F2  89 5A 20             mov  [edx+0x20],ebx       ; next 指针
```

### 3.2 comparator 0x40F630（按 DLL 名字符串比较）

```
0040F630  8B 44 24 08          mov  eax,[esp+8]
0040F636  8B 08                mov  ecx,[eax]
0040F63C  8B 51 18             mov  edx,[ecx+0x18]       ; 对象→名字记录
0040F641  8B 72 04             mov  esi,[edx+4]          ; → 字符串指针
...（内联 strcmp：逐字节比较，全等返回 0）
0040F66E  33 C0                xor  eax,eax
```

### 3.3 gdb 实测排序参数与键

o_base4（4 导入）：`qsort num=5 width=4 comp=0x40F630 names=['USER32.dll' ×5]`（调用两次 =
.idata$4 与 .idata$5 两轮）。
o_base8（8 导入）：`qsort num=9 ... names=['USER32.dll'×9]`。
→ 每个 DLL 的列表 = **n 个导入节 + 1 个特殊节**（4 字节、chars 0xc0300040 的终止符节），
全部键相同（该库的 DLL 名）→ qsort 全等键置换。

### 3.4 关键：LINK 运行时用的是 **MSVCRT.DLL 的动态 qsort**，不是静态 CRT

LINK.EXE 的 IAT 指向系统 `MSVCRT.dll`。用系统 msvcrt 实测（`tools/data_match/w1/qs_sys.c`）：

| N | 系统 msvcrt qsort 全等键输出 |
|---|---|
| 1 | 0 |
| 2 | 1,0 |
| 3 | 1,2,0 |
| 4 | 1,2,3,0 |
| 5 | 1,2,3,4,0 |
| 6 | 1,2,3,4,5,0 |
| 7 | 1,2,3,4,5,6,0 |
| 8 | 1,2,3,4,5,6,7,0 |
| 9 | 0,1,2,3,4,5,6,7,8（恒等） |
| 10+ | 恒等 |

（注意：VC6 `libcmt.lib` 的静态 qsort 在 N=9 时给出 `[4,1,2,3,0,5,6,7,8]`——**不同**；
本会话先前的静态 CRT 实验一度误导，系统 DLL 才是 LINK 的真实行为。）

---

## 4. 模型与验证

### 4.1 模型（可执行）

```
输入: 各 DLL 的导入数 n_d（DLL 名 + 库/命令行顺序）
1) 列表 = 按命令行库序，对每个 DLL 追加 (n_d 个导入节 + 1 个特殊节)，键 = DLL 名字符串
2) 用系统 msvcrt qsort 按 DLL 名排序（全部用真实 oracle）
3) 每个 DLL 的输出顺序 = 排序结果中该 DLL 导入节的相对顺序（丢弃特殊节）
```

Oracle：`tools/data_match/w1/qs_oracle2.c`（动态加载 msvcrt.dll 的 qsort，读入键数组，
输出 id 置换）。

### 4.2 验证结果

| 数据集 | 结果 |
|---|---|
| 单 DLL n=1..12（crt/无 crt/不同 dd 序） | 100%（n≤7 rot1、n≥8 恒等） |
| 2-DLL 全矩阵 n,m=1..8（64 构建 × 2 块） | **128/128 = 100.0%** |
| 3-DLL（U n + W m + VERSION 3，n,m=1..8，108 构建 × 3 块） | **192/192 = 100.0%** |
| **test2 全量 15 DLL / 371 槽** | **371/371 = 100.00%** |

test2 逐 DLL：KERNEL32 162/162、USER32 96/96、GDI32 22/22、ADVAPI32 9/9、SHELL32 1/1、
ole32 15/15、OLEAUT32 11/11、WINMM 5/5、WSOCK32 19/19、DDRAW 1/1、DSOUND 1/1、
VERSION 3/3、COMCTL32 7/7、IMM32 6/6、binkw32 13/13。

复现：
```
python tools/data_match/w1/qs_oracle2.c  → 编译为 qs_oracle2.exe
python tools/data_match/w1/fit_qsort_model2.py     # 2-DLL/3-DLL 拟合
python tools/data_match/w1/predict_test2.py        # 371 槽验证（本报告 §5）
```

---

## 5. 371 槽验证原始输出（摘要）

```
KERNEL32.dll   n=162 match 162/162  pred[:8]=[52,53,54,55,56,57,58,59]
USER32.dll     n=96  match  96/96   pred[:8]=[66,67,68,69,70,71,72,73]
GDI32.dll      n=22  match  22/22   pred[:8]=[19,18,17,16,15,14,13,12]
ADVAPI32.dll   n=9   match   9/9    pred[:8]=[1,2,3,4,5,6,7,8]
SHELL32.dll    n=1   match   1/1
ole32.dll      n=15  match  15/15   pred[:8]=[1,0,2,3,4,5,6,7]
OLEAUT32.dll   n=11  match  11/11   pred[:8]=[9,8,7,6,5,4,3,2]
WINMM.dll      n=5   match   5/5    pred[:8]=[3,4,0,1,2]
WSOCK32.dll    n=19  match  19/19   pred[:8]=[7,8,9,10,11,12,13,14]
DDRAW.dll      n=1   match   1/1
DSOUND.dll     n=1   match   1/1
VERSION.dll    n=3   match   3/3
COMCTL32.dll   n=7   match   7/7    pred[:8]=[6,5,4,3,2,1,0]
IMM32.dll      n=6   match   6/6    pred[:8]=[4,3,2,1,0,5]
binkw32.dll    n=13  match  13/13   pred[:8]=[12,11,10,9,8,7,6,5]
TOTAL 371 / 371 = 1.0
```

---

## 6. 工程含义（下一步可直接用）

1. **正解 = 控制排序输入**：任何构建的 INT/IAT 顺序都可由
   「命令行库序 + 各 DLL 导入数 + DLL 名 + 系统 msvcrt qsort」完全预测。
2. **复现原版 gamemd 的 .idata**：原版槽序 = 原版插入序经同一 qsort 的结果；
   对模型求逆即可从原版 INT 顺序**反解出原版的对象符号表插入顺序**（qsort 对等键是可逆的
   置乱），再按该插入顺序生成 ref 对象/调整链接顺序，即可逐字节复现 INT/IAT。
3. **陷阱**：验证/模拟必须用系统 `MSVCRT.dll` 的 qsort（LINK 的运行时导入），
   不能用 `libcmt.lib` 静态 qsort（N=9 行为不同）。Windows 版本变化可能影响 qsort 内部
   实现——生成/验证应在同一系统上进行，或用 oracle 直接调用系统 DLL。
4. `.idata$6` hint/name 池、thunk 布局、描述符顺序均**不受**该排序影响（已在 §2.1 证实）。

---

## 7. LINK.EXE 地标（本会话修正）

- 0x411BD0 fread 包装 / 0x480E70 剩余字节 / 0x411C90/0x411CE0/0x411DA0 OMF 读原语
- 0x411DF0 名字 hash(`h*3+c % 211`) / 0x411E20 查 / 0x411E80 插入 / 0x411EE0 intern
- **0x412030 = 18B COFF 符号表条目构造**；0x412170 追加原始记录；0x414260 211 桶遍历物化；
  0x414A9E 符号表 fwrite（**均与 .idata 置换无关**）
- **0x463930 = short import object 识别/转换入口**；0x4638B0 字段校验
- **0x40F580 = 按名字排序链表（malloc 指针数组 + qsort(4, comp) + 重建 next 链）**
- **0x40F630 = DLL 名字符串 comparator**（`[[obj+0x18]+4]` 内联 strcmp）
- 0x40F4F0 = 按名字查找（0x40E763/0x436745/… 调用）
- 0x41D289 / 0x421010 = import 节记录合成（40B 记录：+0x10 size、+0x14 start、+0x18 end、
  +0x20 word、+0x24、+0x28 chars）
- 0x420280 按名字查 40B 节记录；0x420310 读并登记节数据

---

## 8. 工件与复现

- 报告（本文件）：`.omo/agents/datamatch/link_order_final.md`
- 数据：`exp_matrix3.json`（2-DLL 全矩阵）、`exp_3dll_uvw.json`（3-DLL）、`slot_diff.json`、
  `qs_sys_perm.txt`（系统 msvcrt qsort 全等键表）、`qs_perm.txt`（静态 CRT 对照）
- 脚本（`tools/data_match/w1/`，已入库）：
  - `link_dis.py`（LINK.EXE 反汇编）、`link_trace.py`（gdb 探针）
  - `exp_probe.py` / `exp_matrix3.py` / `exp_order2.py`（构建矩阵与顺序对照）
  - `qs_sys.c`（系统 msvcrt qsort 指纹）、`qs_perm.c`（静态 CRT 对照）、`qs_oracle2.c`（oracle）
  - `fit_qsort_model2.py`（2-DLL/3-DLL 拟合）、`predict_test2.py`（371 槽验证）
  - `analyze_test2_trace2.py`（pull 序 vs INT 序）
- **gdb 操作纪律**（踩坑）：断点必须在 `starti` 之后安装；`Set-Content` 后用一次重跑规避
  文件缓存竞争；`python` 单行命令过长会静默不执行（拆行）；用 `set args` 而非 `--args`。

---

## 9. 铁律对照（最终）

| 铁律 | 机制解释 | 证据 |
|---|---|---|
| 纯位置性 | 同 DLL 键全等 → qsort 比较恒 0 → 输出只依赖位置 | 2-DLL 128/128、3-DLL 192/192 |
| 分段逆序形态 | msvcrt qsort 的分区交换（N≥9） | GDI32 `[19..12 desc]`、COMCTL32 全逆、KERNEL32 asc/desc 游程 |
| n≤7 rot1 / n≥8 恒等 | 组大小 = n+1；N≤8 全等键 → rot1，N≥9 → 恒等 | 单 DLL 12/12、系统 msvcrt 指纹 |
| 全局集合依赖 | 所有 DLL 节在同一全局数组排序，键=各自 DLL 名 | U/W/V 组合矩阵、test2 15 DLL |
