# W2 报告：.rdata 静态表放量（Theater 模式复制到全部静态表）

> 任务：把 TheaterClass 表（w1，672B 首试 100%）的复现配方推广到 .rdata 全部静态数据表。
> 参考二进制：`D:\RA2MD\gamemd.exe`；工具链：`.vc6-8447`（CL 6.00.8447 后端 + LINK 6.00.8447，与原版指纹一致）。
> 工作产物：`tools/data_match/w2/`；日期：2026-11-11。

---

## 0. 执行摘要

| 目标 | 结果 | 数字 |
|---|---|---|
| ≥10 张表全等 | **达成** | **240/240 个数据单元逐字节 100% 全等**（其中 ≥100B 的表级单元 26 个、32-99B 65 个、<32B 149 个）；零前缀级部分匹配残留 |
| 布局序规则实证 | **达成** | E1-E5 五组实验钉死 3 条规则（声明序/链接序/自然对齐），全部有原始测量数据 |
| 覆盖 .rdata 静态数据区 ≥30% | **达成** | **35,796B / 60,868B = 58.8%**（口径见 §4；对全非导入区 187,096B 为 19.1%） |

**一句话结论**：era 工具链对游戏静态数据表的复现是**零损**的——GUID/掩码/整数/浮点/双精度/结构体六类
发射器全部逐字节全等，含 `π/180 = 0.017453292519943295` 这类 17 位十进制字面量经 VC6 解析后位级还原
（VC6 strtod 舍入正确性的直接证据）。.rdata 剩余缺口全部是**指针承载结构**（占位 25,072B）与 CRT 库数据
（88,912B，随 CRT 调用面收敛自动出现），没有新的原理性障碍。

## 1. 静态表盘点（方法 + 区域图）

### 1.1 区域事实（PE 头 + 逐 dword 分类）

- .rdata = RVA 0x3E1000..0x411074（虚拟 0x30074B）；无独立 .idata，导入结构占 0x3E1000..0x3E1608（IAT）
  和 0x40F0E0..0x411074（描述符/INT/hn 池）——w1 已覆盖。
- **游戏数据区**（本次口径）= 0x3E1608..0x3F9590（98,184B）。0x3F9590 为 CRT 边界
  （起于 "Access violation - no RTTI data!" / typeid / strftime locale 串，与 libcmt 成员对应）。
- 减去 **vtable/RTTI 指针列**（≥8 连续 .text 指针的游程，37,316B）→ **静态数据区分母 = 60,868B**。
- 指针判定：dword ∈ .text/.data/.rdata 的 VA 区间（0x401000..0x7DF390 / 0x812000..0xB79BE4 /
  0x7E1000..0x811074）。已知假阳性：theater 表内宽字符（`T\0T\0`=0x00540054）——命名锚定单元按人工边界豁免。

### 1.2 盘点法

1. `scan_tables2.py`：全区域逐 dword 分类（numpy，4 相位非对齐 VA 交叉引用普查）+ 块分割（vtable 界内切块）
   + GUID 16B 记录游程 + 等步长探测 → `inventory.json`。
2. 跳表考古：`.text` 内扫 `FF 24 /r`（jmp [reg*4+disp32]）全部 369 处引用——**全部落在 .text**
   （MSVC 6.0 把 switch 跳表放 .text，不放 .rdata），故 .rdata 的 TXTP 游程= vtable/RTTI，与数据表无纠缠。
3. `.text` 交叉引用热点（`mov [mem],imm32` / `add reg,imm32` 编码）验证表活性：theater 基址 4 次、
   `theater[0].ext`(0x3E1BC6) 20 次（`shl edx,4; add edx,imm` 索引形态）等。

### 1.3 内容识别（.rdata 前部非指针内容的构成）

| 内容 | 代表 | 处置 |
|---|---|---|
| TheaterClass 描述表 0x3E1B78..0x3E1E18 | 6×0x70B | w1 已复现，w2 纳入总账 |
| **{60.0, π/180} 角度常数对** | 遍布 30+ 处，全部 8 对齐 | 六重对称（等距六边形）表格族的头；无指针的头部已收编，带 fn[6] 指针的记录体留待代码重建 |
| GUID 农场 ×4 | 0x3E94E0(104+4 记录)/0x3EB788(7)/0x3F7500(16+头尾)/**0x3F7CB0..0x3F9590(397 记录 6.2KB, DirectShow/DX GUID 群)** | 16B 记录 struct Guid 发射 |
| 0x20/0xDB 掩码块 ×2 | 0x3E2B0C..0x3E3234(1832B) / 0x3EC440..0x3ECBD8(1944B，含三角形累计偏移表 0,4,12,...,0x384) | uchar[] 发射 |
| 整数偏移/朝向表族 | 0x3E622C..0x3E7A38(6156B) / 0x3F12F0..(5760B，同族第二实例) / 0x3E7B1C..(876B) / 0x3F2A34..(816B) 等 | uint[] 发射 |
| 浮点/双精度常量表 | 0x3E3544({0,0.2,0.4,0.6}+…) / 0x3E8974(π/2,-π/2,π/512) / 0x3ED7D8({9e10?,0.95} 对) 等 9 单元 | float[]/double[] 字面量发射 |
| CRT 数据 0x3F9590..0x40F0E0 | locale/月份/RTTI 串/ctype（88,912B） | libcmt 自带，`/opt:ref` 下只有真实 CRT 调用面出现才拉入（test2.exe 实测不含）——随 src/ 重建自动收敛，不手抄 |

## 2. 每表配方账（Theater 模式：提取器 → C 源 → era CL /O2 → 字节比对）

`gen_tables.py` 从真值二进制逐单元提取 → 按内容选发射器 → 生成 `tables_w2.c`（160KB，确定性：
重跑 sha256 一致）→ `build_w2.cmd`（CL /O2 /c + LINK /fixed /filealign:0x1000 /opt:ref /opt:icf + libcmt）
→ `compare_w2.py` 逐单元全字节搜索比对 → `w2_result.md`（240 行全账）。

### 2.1 发射器类别与实测一致率（全部 100%）

| 发射器 | 单元数 | 代表 | 实测 |
|---|---|---|---|
| struct（Theater 语义结构体） | 1 | theater 672B（8 char[] + 4 float + 3 int 字段） | 100% |
| guid（struct Guid 16B 记录） | 4 | dshowfarm 6,368B=397 记录 / guidA 1,664B / guidC / guidD | 100% |
| mask（unsigned char[]） | 2 | maskA 1,832B / triB_maskB 1,944B | 100% |
| float/double（最短往返字面量） | 9 | pihdr3 `{60.0, 0.017453292519943295,…}`×3+0 / fc_8848 double[7] / fc26_dbl {0,0.2,0.4,0.6,…} | 100% |
| ints（unsigned int[] 十六进制） | 224 | intfam 6,156B / u_3F12F0 5,760B / u_3E7B1C 876B… | 100% |

### 2.2 Top 表（≥100B 全部 26 个见 w2_result.md；此处列前 12）

| 表 | 原 RVA | 尺寸 | 发射器 | 一致率 |
|---|---|---|---|---|
| dshowfarm（DirectShow/DX GUID 群） | 0x3F7CB0..0x3F9590 | 6,368 | guid | **100%** |
| intfam（朝向/偏移整数表族 A） | 0x3E622C..0x3E7A38 | 6,156 | ints | **100%** |
| u_3F12F0（同族第二实例） | 0x3F12F0..0x3F2970 | 5,760 | ints | **100%** |
| triB_maskB（三角偏移表+掩码 B） | 0x3EC440..0x3ECBD8 | 1,944 | mask | **100%** |
| maskA（{60,π/180}头+掩码 A） | 0x3E2B0C..0x3E3234 | 1,832 | mask | **100%** |
| guidA（COM CLSID 农场 A+B，含 Locomotor 4A582740-47） | 0x3E94E0..0x3E9B60 | 1,664 | guid | **100%** |
| u_3E7B1C | 0x3E7B1C..0x3E7E88 | 876 | ints | **100%** |
| u_3F2A34 | 0x3F2A34..0x3F2D64 | 816 | ints | **100%** |
| theater（TheaterClass 表） | 0x3E1B78..0x3E1E18 | 672 | struct | **100%** |
| deg_3ed5fc（度数表 {70,70,70,80,90,…}） | 0x3ED5FC..0x3ED7D8 | 476 | ints | **100%** |
| u_3E836C | 0x3E836C..0x3E84FC | 400 | ints | **100%** |
| u_3F0960 | 0x3F0960..0x3F0AA8 | 328 | ints | **100%** |

## 3. 表间布局序规则（小实验实证，E1-E5）

**装置**：五个异构探针表（int[16]/uchar[64]/double[8]/struct{int,float,char[8]}[6]/float[7]）+ 垫片实验
（float[7]→int[2]→double[3]→short[5]→struct{int,int}[2]→struct{char[13]}[2]→float[1] 链）。
全部用与正式构建相同的 era 工具链与链接旗标。原始测量：`exp1-5.exe` + `exp_order.py`。

### 实测原始数据

- **E1（同 obj 声明序）**：声明 a,b,c,d,e → .rdata 顺序 a→b→c→d→e；声明逆序 e,d,c,b,a → .rdata 逆序
  e→d→c→b→a。两种方向均逐一对应。
- **E4（跨 obj）**：链接 `x1.obj x2.obj` → x(y) 先于 z(w)；链接 `x2.obj x1.obj` → 反转。**obj 链接序**决定。
- **E5（垫片）**：f7(28B)→i2 **pad 0**；i2(8B)→d3 **pad +4**（8 对齐）；d3(24B)→s5 **pad 0**；
  s5(10B)→r4v **pad +6**（8 对齐）；r4v(16B)→r13v **pad 0**（已 8 对齐）；r13v(26B)→f1 **pad +2**（4 对齐）。

### 规则（全部由上述测量直接支撑）

| # | 规则 | 证据 |
|---|---|---|
| R-L1 | 同 obj 内 .rdata 发射序 = **源码声明序**（不是字母序/尺寸序/逆序） | E1 双向 |
| R-L2 | 跨 obj 发射序 = **obj 链接序**（命令行顺序） | E4 双向 |
| R-L3 | 表间垫片 = **自然对齐**：标量数组按元素对齐（char 1/short 2/int、float 4），**double 数组与 struct 数组一律 8**（/Zp8 默认）；无其他填充 | E5 六段链 |
| 附 | 与 w1 R7（/GF 池逆源序）正交；whole-section 复现时按 R-L1/R-L2/R-L3 + 池规则 + CRT 波序组装 | — |

## 4. 覆盖率账（口径明示）

| 口径 | 字节 | 百分比 |
|---|---|---|
| 游戏静态数据区（0x3E1608..0x3F9590 − vtable/RTTI 37,316B） | 60,868 | 100%（分母） |
| **w2 已全等** | **35,796** | **58.8%**（目标 ≥30% ✅） |
| 残余（指针承载表：{60,π/180}+fn[6] 记录族、tag+指针分派表、字符串池、零散指针簇） | 25,072 | 41.2% |
| 参考：全非导入区 0x3E1608..0x40F0E0 | 187,096 | w2 占 19.1% |
| 参考：CRT 库数据 0x3F9590..0x40F0E0（自动收敛，不手抄） | 88,912 | 47.5% |

残余 25,072B 的性质：全部含绝对指针（.text/.data VA）。字节级对齐它们有两条路：
(a) **代码重建收敛后自然再生**（指针指向真实函数/全局——唯一"真"路径）；
(b) 过渡期脚手架：把冻结 VA 当常量发射（字节可全等但语义悬空）——本轮未采用，保持账面诚实。

## 5. 复现清单

```bat
. .\.vc6\vc6vars.ps1
python tools\data_match\w2\scan_tables2.py       :: 盘点（inventory.json）
python tools\data_match\w2\probe_units.py         :: 分母测算（game 区 − vtable）
python tools\data_match\w2\gen_tables.py          :: → tables_w2.c + w2_main.c + w2_units.json（确定性）
cmd /c tools\data_match\w2\build_w2.cmd           :: → w2.exe
python tools\data_match\w2\compare_w2.py          :: → 240/240 全等 + w2_result.md
:: 布局实验
cmd /c tools\data_match\w2\build_exp.cmd
python tools\data_match\w2\exp_order.py tools\data_match\w2\exp1.exe tbl_a,tbl_b,tbl_c,tbl_d,tbl_e
```

## 6. 工件清单（tools/data_match/w2/）

`scan_tables2.py`（盘点 v2）/ `probe_units.py`（分母+单元核查）/ `gen_tables.py`（主生成器，六类发射器）/
`tables_w2.c`+`w2_main.c`（生成物，确定性）/ `build_w2.cmd` / `compare_w2.py` / `w2_result.md|.json`（240 行全账）/
`inventory.json` / `w2_units.json` / `exp_layout.c|.c_rev|x1|x2|main|main2|main3|pad.c` + `build_exp.cmd` +
`exp_order.py` + `exp1-5.exe`（布局实验族）。

## 7. 下一步（按杠杆）

1. **指针承载表的自然再生管道**：随 src/ 函数重建，{60,π/180}+fn[6] 记录族（≈25KB 残余的主体）将随真实
   代码地址出现——在整像收敛阶段用 R-L1/R-L2/R-L3 直接组装 whole-section。
2. CRT 区 88,912B：随 CRT 调用面收敛（test2 已证明 /opt:ref 只拉入被引用成员），无需手抄；可做一个
   "libcmt 成员→.rdata 贡献"清单用于预测收敛顺序。
3. .rdata vtable/RTTI 37,316B：与 csp_canon/rtti_base_arrays 联动，vtable 复现=类层次+槽位序的编译期再生。
4. w1 遗留的 IAT/INT 槽内置换（.idata 唯一缺口）与本轮正交，继续按 w1 §6.1 路线。
