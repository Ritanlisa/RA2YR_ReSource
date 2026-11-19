# report_proto_fix — CSP 错误约束三连修复（用户裁决 + IDA 核对）

日期：2026-11-19｜触发：用户指出"无矛盾最少类"算法下空簇=错约束，要求用 IDA 核对。

## 根因 A（决定性）：proto 锚是循环证据
`anchors/ida_function_protos.json` 的 `src` 字段指向我们自己的生成代码（如 `_addr_40.cpp`），
不是 IDA 数据库。实证：
- 0x004010C0 EndFrameAudioMixer：锚 = `int __fastcall(int *, _DWORD *)`；**live IDA = `int __fastcall(AudioMixer *, _DWORD *)`**
- 全量对照：19,058 公共地址中 **1,350 (7.1%) proto 不一致**（both_scalar 845 / both_ptr 403 / live_ptr_old_scalar 97 / old_ptr_live_scalar 5）
修复：从 live IDA 导出全部原型（IDAPython `idc.get_type`，19,081 条）→ `anchors/ida_function_protos_live.json`；
旧锚备份 `anchors/ida_function_protos.pre_live_backup.json`；活跃锚切换到 live 版本。
影响：C2/C7/proto-this 等依赖原型的族不再吃"我们自己的错误类型"。

## 根因 B：同宽基元多解（用户授权约定）
4,050 空簇中 **2,021 条为 prim-only**（CPI+MR 921 / IG+MR 601 / AV+MR 401 …），例如
CPI=`int` vs MR=`unsigned int` —— 同宽标量在 32-bit codegen 不可区分，却在 universe 里是不同原子。
修复（按用户指令"uint/int 多解直接用 int"）：`_norm_ty` 增加同宽基元规范化
（4B→int / 2B→short / 1B→char / 8B→__int64；指针不合并）。
效果：覆盖 unique 47,262 → **64,368**（50.4% → 71.0%）。

## 根因 C：IG 族等式约束不健全
IG（`insn_granularity_types.json`）把 `mov al,[ecx+off]`（字节访问）编码为
"成员类型 ∈ {bool,char,char[N]...}" 的等式掩码；但字节访问只是宽度的**下界**
（成员可以是 int/dword，按字节视图读取）。与 MR 的 `int` AND 必空 → **3,579 条伪矛盾**。
修复：停用 IG 硬掩码（生成器若要恢复须改成"宽度下界掩码"或只收全宽访问）。
效果：空簇 7,220 → **3,609**；覆盖 **67,748/92,568 = 73.2%**。

## 终态（gate-off，live protos + 基元统一 + IG 停用）
| 项 | 基线 | 现在 |
|---|---|---|
| unique / constrained | 47,264 / 93,804 (50.4%) | **67,748 / 92,568 (73.2%)** |
| empty_clusters | 4,050 | **3,609** |
| K_min | 906 | 905 |
| conflicts（正式账） | 0 | 0 |
| 确定性 | — | 双跑 domains/assignments sha256 全等（dd811ba1 / 2e60b9b1） |

说明：73.2% 是"约定下的唯一"（int-over-uint 等宽合并），报告中须如实标注口径。

## 剩余 3,609 条矛盾的构成（下一步）
- CPI+MR 1,387（prim 1,066 / class∩prim 321）—— CPI 常量初始化的宽度推断待核（可能同样有下界问题）
- AV+MR 401 / C2+MR 328 / G3+YVP 307 / C10+C2+YVP 49 —— **class 域 ∩ prim 域 = 轴混用**
  （类归属轴 vs 值类型轴被 AND 在一起）；需按族标注语义轴，只在同轴内求交
- IT+IV+MR 290 / IV+MR 51 / FP+MR 44 / G3+TC 77 —— prim 宽/符号冲突，逐族核对

## 工件
- 改动：`tools/csp_export/minclass_solver.py`（_norm_ty 基元规范化 + IG 停用）
- 锚：`anchors/ida_function_protos.json`（live 版）、`_live` / `.pre_live_backup` 保留
- 求解器产物：`anchors/minclass_*.json` 全量再生

## 补记（同日第二轮）：基元规范化下沉 `_tok_ix`
发现 MR/MT/MD 加载器直接 `_tok_ix(str(...))`、且在其定义之前执行 → 基元规范化未覆盖它们。
修复：`_PRIM_CANON` + `_canon_prim_ty` 提升到模块级，`_tok_ix` 入口统一规范化；`_norm_ty` 委托。
实测：覆盖 **67,748/92,568 (73.2%) → 69,226/93,839 (73.8%)**；空簇 **3,609 → 3,192**；K_min 905→**892**。
剩余 3,192 分解：CPI+MR 1,072（prim 751 宽度差待核）/ AV+MR 401 / C2+MR 327 / G3+YVP 307（常量 null 兼容问题）/ IT+IV+MR 247 / G3+TC 77 / C7+YVP 93。

## 补记（同日第三轮）：CPI 常量定型不健全 + T[1] 规范化
- CPI `cpi-const`（2,196 条）编码"成员用常量初始化"→types=[bool,int] 等；但常量 0 可为
  null 指针/0.0/false，非零常量也可存进更宽成员——**对成员类型零信息量**（与 MR 的
  CampaignClass/void* 冲突 1,072 条中的 751）。只保留 cpi-m8/m16（12 条宽度真值）。
- `T[1]` ≡ `T` 同布局合并（MR char[1] vs CPI char 类伪矛盾）。
实测：覆盖 **69,226/93,839 (73.8%) → 69,901/94,354 (74.1%)**；空簇 **3,192 → 2,083**；K_min 893。

## 补记（同日第四轮）：G3 常量规则停用
`gs-const01`/`gs-const-wide`（1,482 条）只说明"压入常量 0/1/小整数"，对类型（尤其类指针槽）
零信息；与 YVP 类参数 AND 出 307 条伪矛盾。只保留 gs-str（char*，1 条）。
实测：覆盖 **69,901/94,354 (74.1%) → 69,920/93,388 (74.9%)**；空簇 **2,083 → 1,696**。

## 剩余 1,696 条的设计级结论（轴分离，需下一轮专项）

剩余伪矛盾几乎全部是**语义轴混用**：
- `AV+MR 406`：AV 约束"分配对象的**所指类**"（pointee sizeof==size），MR 约束"**成员/值的声明类型**"
- `C2+MR 327`：C2 约束"作为 this 传递的**对象类**"，MR 约束"值类型"（void*/int 成员被 cast 成 X*）
- `IT+IV+MR 236` / `IV+MR 47` / `IV+SG 37`：指令语义族的**宽度/符号**差（需逐族按 store/load 宽度核对）
- `C7+YVP 93`：签名类域 vs YRpp 参数类（class-vs-class，需要 IDA 逐条核）
- `C10+C2+YVP 49` / `RA+RD 44` / `C1+C2+MR 37` / `C1+C2+LS 27`

**轴分离设计（建议）**：实体域应携带轴标签：
- `T:`/`R:` = 对象类轴（class-domain 族适用）
- `M:`/`P:`/`G:`/`RET:`/`EAX:`/`GS:` = 值类型轴（MR/MT/IT/IV/CPI/... 适用；class-domain 族如 C2/AV/C3 只能经"指针类型兼容"条件参与，不能直接 AND）
实现方式：family 表加 axis 字段；求交时同轴 AND，跨轴仅当值类型是"指针/void*"时把 class 域解释为 pointee 子域（或直接跳过该 class 族）。
该改动是求解器语义级修改，需专项设计 + 全量回归（K_min/覆盖/冲突/确定性四表）。

## 补记（同日第五轮）：MR 基元默认拼写剔除 —— 覆盖口径修正为 68.9%（诚实值）

IDA 核对：`0x4361D0 +0x4`（FollowingObject，虚调用/对象方法使用）MR 却给 `void*`；
`0x48BE60 +0x4`（operator new 结果存储）MR 给 `int`。MR 的 12,723 条中 **~10,800 条是单基元**
（unsigned int 2,724 / bool 1,904 / void* 1,504 / char[1] 1,413 / int 1,277 …）——是注册表
对未定型成员的**默认拼写**（且 meta 注明 regen from solver outputs = 自反馈），不是证据。

修复：MR/MR9 只保留含**类名**的行（12,723→1,219；1,828→406）。

| 配置 | 覆盖 | 空簇 | K_min |
|---|---|---|---|
| MR 全量 | 74.9% (69,920/93,388) | 1,696 | 893 |
| MR 全停 | 67.8% (55,577/81,986) | 540 | 857 |
| **MR 仅类名（采用）** | **68.9% (56,803/82,428)** | **601** | **867** |

**口径修正：此前报的 74.9% 含 ~6pp 由基元默认拼写撑起的假 unique；68.9% 是剔除不健全证据后的诚实覆盖。**
剩余 601 条分布（无单一主导族）：C7+YVP 93 / C10+C2+YVP 49 / RA+RD 44 / IV+SG 37 /
C1+C2+LS 27 / C2+MR 25 / BM+C7 23 / C1+C15+C2+OT 19 / C10 19 / RD+VR2 19。
确定性：4 个求解器产物双跑 sha256 全等。

## 补记（同日第六轮）：C7 循环掩码停用 + 两向轴分离 + 空掩码守卫

- **C7 参数类掩码停用**：来自 ida_function_protos（我们自己写进 IDB 的类型，循环证据），
  与 YVP（YRpp 外部真值）冲突 93 条。停用后覆盖 69.2→70.6%、空簇 548→412。
- **空掩码守卫**（[rs-build] + C10 注入）：EP 5 / IM2 3 / MW 88 / SS 88 个退化掩码丢弃，
  空簇 601→548。
- **两向轴分离**：
  - pointee 轴族（C2/C3/C9/C10/OT/AV/RD/VR2）不适用于值类型实体（P/M/G/RET/EAX/S/GS）：
    丢 AV 807 / C2 4,871 / C3 1,671 / RD 1,227 / VR2 234 → 空簇 412→182
  - type 轴族（LS/AL/SG/IT/IV/CPI/CR/SP/MS/YVP/IMP/IM2/S2/SGN/RU/MH/G3/FP）不适用于
    T:/R: 对象类实体：丢 LS 33 / IV 17 / CR 1
- 实测（gate-off）：unique 56,617 / constrained 73,877 = 76.6%；空簇 **182**；K_min 866；
  conflicts 0；4 产物双跑 sha256 全等。
- **口径警示**：轴分离会让只有单一（错轴）证据的实体变为 free（无约束），constrained 从
  80,208 降到 73,877；百分比上升部分来自分母缩小，绝对 unique 56,617。这是"宁缺勿错"的
  诚实代价。

## 附：601 条伪矛盾全量归因（最终）

| 类别 | 数量 | 根因 | 处置 |
|---|---|---|---|
| C7 参数类掩码（循环 IDB 证据） | 93+ | proto 来自我们写进 IDB 的类型，与 YVP/YRpp 冲突 | 停用 C7 掩码 ✓ |
| 空掩码（退化证据） | 53 | AND 收敛为 0 的族掩码（EP/IM2/MW/SS） | 守卫丢弃 ✓ |
| C2/C3/AV 类轴落在值实体 | 131 | pointee 轴 ∩ 值类型轴 | 轴分离 ✓ |
| RD/VR2 类轴落在 EAX + LS 类型轴落在 R | 99 | 同上 | 轴分离 ✓ |
| **IV+SG** | **37** | 宽度**下界 vs 等式**：窄访问（short）是宽变量（int）的合法视图 | 需宽度合并语义（保留最宽） |
| C1+C15+C2+OT | 19 | 类 vs 类：C15/OT（二进制 vtable 归属）vs C1（布局缺失） | 逐例 IDA |
| C10 | 14 | C10-only 空域（调用图传播自相矛盾） | 查 fixpoint |
| IT+IV+MR | 14 | 指令语义宽度/符号冲突 | 逐例 disasm |
| C10+YVP | 12 | C10 类（pointee）vs YVP 声明类型 | 轴语义待裁 |
| C1+C2+C6+MW / C2X+SS 族 | 10/8/4/3/3 | 类 vs 类多族 | 逐例 IDA |
| MR+MT | 6 | 成员类型分歧 | 逐例 |
| GX+G2+YVP | 8 | GS 实参 vs YRpp | 逐例 |
| EP+RA / FP+IT+IV+MR | 7 | EAX 消费/FP | 逐例 |

结论：**"601 个矛盾"中 419 是已修复的错误约束（循环证据/退化掩码/轴混用），剩余 182 全是
"类 vs 类"或"宽度下界 vs 等式"级别的逐例裁决**，不再有系统性根因。
