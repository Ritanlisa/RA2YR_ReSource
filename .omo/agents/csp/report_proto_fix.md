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
