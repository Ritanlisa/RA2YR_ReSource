# CW7——live 残墙实施报告（2026-11-12）

性质：**规则实施 + 全量重跑轮**。改动仅 `tools/decomp_sys/decompile.py` / `tools/decomp_sys/passes.py`
（提交 `9b5e4c59a`）与每 part 工件/账本/`results.jsonl`；`checker.py` 零改动、`src/` 零改动、
`tools/csp_export/minclass_solver.py` 零改动。快照坏的 125 件（`?`/截断/asm）**不在本轮**（留给 IDA 重导出）。

输入 = CW6 备弹工单（`.omo/agents/decomp_batch/cw6_live_workorder.json`）与 CW6 收尾账本
（`CF 1,052`）。起点 HEAD `29cf42250`；本报告末 commit 待提交。

---

## 0. 结论速览

| 项 | 数值 |
|---|---:|
| 账本 CF | **1,052 → 786（−266，−25.3%）** ✅ 目标 <800 达成 |
| 靶集（W1+W2+W3+W45+W6） | **534 次运行 / 532 唯一地址** |
| 编译转化（MATCH+MISMATCH） | **266 / 534 = 49.8%** |
| ├ MATCH（字节全等） | **42** |
| ├ MISMATCH（编译过、字节不等） | **224** |
| └ 仍 COMPILE_FAIL | 266 |
| 账本 OK / NG / PENDING | 3,921 → **3,963（+42）** / 3,512 → **3,736（+224）** / 31 不变 |
| 目标集外账本变动 | **0 件** |
| 零回归抽样（历史 OK 30 件） | **30/30 MATCH** |
| 新 OK 中的 clean（MATCH+clean+0 违规+非 this-as-id） | **34 / 42**（8 件带违规照实记账） |
| 分 part 提交 | **30 个 part commit**（W1 11 / W2 5 / W3 5 / W45 7 / W6 2） |

**一句话**：CW6 判定"只剩 live 残墙"后，本轮把 **W1（C2440 赋值站点）、W2（C2109 标量下标）、
W3（C2296/C2106 非整数窄宏）** 三个 ROI 最高的族连同 **W4/W5（返回真值 / 比较站点）** 的
低成本兄弟一起落地，共 12 类生成器修复；534 次重跑转化 266 件，CF 从 1,052 降到 **786**。
W45 的 24 个 MATCH 中 23 个是 `nullsub_*` 空体（返回真值仲裁直接产出字节全等），是本轮质量最高的收获。

---

## 1. 执行记录

| 项 | 内容 |
|---|---|
| 靶集构建 | `.omo/decomp_batch/cw7/cw7_build_targets.py`（只读账本 + `results.jsonl` 末条 + `bad_snapshot.json` 排除 evidence） |
| 靶集文件 | `cw7_w1_c2440.json`(205) / `cw7_w2_c2109.json`(84) / `cw7_w3_c2296.json`(89) / `cw7_w45.json`(121) / `cw7_w6.json`(35) |
| 驱动 | `tools/decomp_sys/run_wa.py`（W-A 已验通用 per-part 驱动：20 件/part，part 完成即 commit，resume 靠 `part_report.json`） |
| 运行根 | `.omo/decomp_batch/cw7_w1` / `cw7_w2` / `cw7_w3` / `cw7_w45` / `cw7_w6` |
| 抽样探针 | `.omo/decomp_batch/cw7_probe..cw7_probe8`（5+5+5 件，逐轮修复后重跑；最终 probe8 = **13/15 编译**） |
| 零回归 | `cw7_regress30_final`：pre-CW7 OK 池（3,921）种子 20261112 抽 30，当前 HEAD 全链重跑，**30/30 MATCH** |
| 分析工件 | `cw7_stats.json`（各 family verdict + MATCH 清单）、`cw7_cf_rows_now.json`（残墙 by-code）、`cw7_pre_ledger.json`（改前账本快照） |

### 1.1 ROI 选择（CW6 工单 T5）

| 优先级 | 族 | live 件 | 预计 | 本轮处理 |
|---|---|---:|---:|---|
| **W1** | C2440 赋值站点 | 192 | 163 | ✅ 全部 205（含复败 13） |
| **W3** | C2296 + C2106 非整数窄宏 | 74 | 67 | ✅ 全部 89（含复败 15） |
| **W2** | C2109 标量下标 | 72 | 65 | ✅ 全部 84（含复败 12） |
| W4 | C2562+C4716+C2171 返回真值 | 62 | 56 | ✅ 并入 W45（64+57 比较站点） |
| W5 | C2446 比较站点 | 46 | 39 | ✅ 并入 W45 |
| W6 | C2673 free-body this | 38 | 30 | ⚠️ 部分（35 件，仅 9 编译） |

> W4/W5 与 W1/W2/W3 共用"赋值/比较/声明层"机制，且 W4 的返回真值仲裁在抽样中已随
> W1/W3 一起生效（`ObjectClass::InitializeAudioSubsystem` C4716 → 编译），因此作为同轮
> 低边际成本扩展一起放量。

---

## 2. 残余形态分析与修复（12 类）

抽样阶段（每族 5 件）发现：**旧首错码与实际残余形态严重错位**——很多 C2440 的首错在
现行生成器下已变成 C2446/C2109/C2296/C4716；很多 C2296 是"上一个 pass 改写出来的坏形态"。
逐类证据与修复：

### 2.1 `pass_param_rename`：proto 具名参数的槽位对齐（CW7-R1）

- **证据**：`CDROM::LockVolume`（0x47A6F0）原体 `HIBYTE(v5) = BytesReturned;`（第 4 参），
  旧实现把 `['hDevice','BytesReturned']` 过滤后按位置索引 → `BytesReturned -> p1`（第 2 参、
  HANDLE）。凡是"具名参数前有匿名/纯类型参数"的原型，整条参数序列错位一槽。
- **修复**：保留 proto 参数分割后的**位置**（`None` 占位），仅当首参是显式 `this` 时整体左移；
  按 `i` 对 `param_names[i]` 重命名。
- **验证**：0x47A6F0 从 C2296（`void* & 0xFF`）晋级 MISMATCH（orig 346B / ours 279B）。

### 2.2 `_CAST_THIS_ADDR` / `_BARE_THIS_ADDR`：`this + k` 的算术尾守卫（CW7-R2）

- **证据**：`AnimFile::Check`（0x426DD0）原体 `*((unsigned __int16 *)this + 3 * p0 + 1032)`，
  旧 pass 把 `+ 3` 当作成员字节偏移（0x006 = m006），留下 `* p0 + 1032` →
  `*(this->m006 * p0 + 1032)`，C2296 `char[1]` 乘法。
- **修复**：`this + N` 仅当 N 后不接 `+ - * / %` 时才是成员地址；否则保持原指针算术。
- **验证**：0x426DD0 **MATCH（39B 字节全等）**。

### 2.3 `_compatible_ptr`：void* 转换的方向性（CW7-R3）

- **证据**：`CellClass *v4 = To_Cell(...)`（0x426270）——callee 返回 `void *`，
  旧规则把 void* 双向视为兼容，站点被跳过（C2440 initializing）。
- **修复**：`T* → void*`（LHS void）隐式合法；`void* → T*` 必须显式 cast。
- **验证**：0x426270 / 0x4112D0 / 0x74D670 等晋级 MISMATCH。

### 2.4 `_rhs_ptr_head`：三类 RHS 头识别（CW7-R4）

- **call-result RHS（嵌套实参）**：`ClipRectIntersection((void *)(v16), ...)` 因 `[^()]*` 只允许
  单层括号而未识别；新增"`Ident(` 开头 + 嵌套括号"分支，查 `env.call_ret`。
- **`this->M` / `this->M[i]` 成员读**：旧实现返回 None（`void *v = this->m028;` 从不 cast）。
- **casted-subscript RHS**：`((char **)&DataGlobal_A8EB00)[0 + (20)]` 的元素类型 = `char *`
  （旧实现 None → `result = ...` C2440）。
- **验证**：0x47D210 / 0x4112D0 / 0x49BE40 等。

### 2.5 `_ASSIGN_SITE` / `lhs_type`：LHS 形态扩展（CW7-R5）

- `*(unsigned int *)((char *)&v15)[0x0] = &CCINIClass_Vtable;`（嵌套括号 + 下标）与
  `*(unsigned int *)v16.__tail_0 = &vt_CDFileClass;`（成员点链）此前不匹配赋值站点。
- `v3[2].AudioMixer_field_04`（`BASE[idx].Class_field_NN`）此前被当作"元素类型"，
  LHS 类型取错；新增按视图/registry 的 name-encoded 成员类型仲裁（**视图优先**：
  同一偏移 registry 名 `ptr_8: AudioMixer *` 与 hpp 声明 `AudioMixer_field_08: int` 不同时，
  以实际声明为准）。
- **验证**：0x408A70 / 0x49BE40 晋级 MISMATCH。

### 2.6 `pass_compare_harmonize`：比较站点（CW7-R6，W5）

- `INT op PTR` / `PTR op INT`：指针侧重拼 `(unsigned int)`（32 位同值 cmp，字节中性）；
  两个不兼容指针：RHS 重拼 LHS 类型。覆盖 `v3 < ((char **)&G)[...]`（0x47D210）等旧特化
  正则不认的形态。
- **验证**：0x47D210 从 C2446 晋级 MISMATCH。

### 2.7 `pass_scalar_subscript`：标量下标站点级地址真值（CW7-R7，W2）

- `G[i] -> ((T *)(&(G)))[i]`、`BASE->M[i] / BASE.M[i] -> ((T *)(&(BASE...M)))[i]`
  （元素类型：IDA `T[]` 优先，否则 registry/视图标量；**不改 unit 级声明**，避免与
  同 unit 的 bare 使用冲突——CW3-3b 的 veto 正是为此存在）。
- 指针型索引表达式 `dword_819310[this->DeployingAnim_d]` → 索引转 `(unsigned int)`
  （成员存的是 4 字节 index，但 registry 类型是 `SHPStruct *`）。
- 同一 pass 顺带 **const-strip**：body 写入的全局若 registry 带 `const`（`Game_bAllowVRAMSidebar`）
  去掉 const（`const` 不参与 codegen）。
- **验证**：0x45ECA0 / 0x4E7E20 / 0x45ECA0 / 0x753E00 家族；W2 编译率 56/84。

### 2.8 `pass_this_assign_local`：可变 receiver（CW7-R8，W3）

- IDA 把 receiver 当可写局部：`this = 0;` / `this = v19;`（C2106）。body 出现 `this =` 时
  在入口插入 `Cls *this_ = this;`、全文改 `this_`，并把 `this_ = <非 0 非已 cast>` 的 RHS
  包成 `(Cls *)(...)`。
- **验证**：0x406B10 从 C2106 晋级 MISMATCH（orig 546B / ours 304B）。

### 2.9 free-body this 接收者（CW7-R9，W6）

- `pass_callees` 会把 `AudioStream::CleanupChannels();` 绑定成 `((AudioStream *)(this))->...`，
  在无类自由函数里产生 C2673。最终体仍含 `this` 的 free 函数 → `__fastcall` + 显式
  `void *this_`（ECX == 第 1 参，栈 arity 不变）+ 全文改名。
- **验证**：35 件中 9 件编译（0x406EE0 晋级 MISMATCH）；其余仍撞成员类型/调用形态长尾。

### 2.10 返回真值仲裁（CW7-R10，W4）

- 声明层：body 无 `return` 且签名非 void → **void**（C4716）；body 有 `return expr` 且签名 void
  → **int**（C2562）。函数体字节不变。
- **验证**：W45 的 24 个 MATCH 里 **23 个是 nullsub_***（空体 + 签名仲裁后字节全等）。

### 2.11 `pass_macro_residual_sweep`：指针局部 shift 守卫（CW7-R11）

- 旧规则把 `*v1 >> 4` 里的 `v1 >>` 当成指针移位并改写成 `*(unsigned int)(v1) >> 4`
  （C2100 illegal indirection，`MPCooperative::WriteCoopSaveINI`）。加 `*` 前缀负向断言。
- **验证**：0x49BE40 从 C2100 晋级 MISMATCH。

### 2.12 `pass_intrinsics_lobyte`：指针参数保留宏 store（CW7-R12）

- `LOWORD(p1) = ...`（`unsigned short *p1`）被位运算 fallback 展开成 `p1 & ~0xFF`
  （C2296）。把**指针参数**并入"指针声明局部"集合，保留 era_types 的 lvalue 宏。
- **验证**：0x4A9650 从 C2296 晋级 MISMATCH。

---

## 3. 转化统计

### 3.1 分族实测

| 族 | 靶 | MATCH | MISMATCH | 编译率 | 仍 CF |
|---|---:|---:|---:|---:|---:|
| W1 C2440 | 205 | 4 | 85 | **43.4%** | 116 |
| W2 C2109 | 84 | 1 | 55 | **66.7%** | 28 |
| W3 C2296/C2106 | 89 | 13 | 31 | **49.4%** | 45 |
| W45 C2446/C2562/C4716/C2171 | 121 | 24 | 44 | **56.2%** | 53 |
| W6 C2673 | 35 | 0 | 9 | 25.7% | 26 |
| **合计** | **534** | **42** | **224** | **49.8%** | **266** |

> 合计 534 次运行 = 532 唯一地址（W6 与早期族有 2 件因首错码迁移后重复入靶）。

### 3.2 42 个 MATCH

| 族 | 地址 / 名称 |
|---|---|
| W1 | 0x636570 ScriptAction::Check；0x69E010 SidebarClass::updateFlashTimer；0x76FF20 Trigger::executeActions；0x7B9D90 WWMouseClass::processFrame |
| W2 | 0x512570 HouseTypeClass::LoadHouse |
| W3 | 0x426DD0 AnimFile::Check；0x476EA0；0x4A2350 TabClass::initStripClass；0x4A3840 StructTable::Append；0x588C40 CellClass::initCellData；0x5B2930 Movement::Check；0x5B2950 Math::Sub16；0x645D00；0x656580；0x659550 TechnoClass::drawPassengerPips；0x68BCC0/0x68BF50 ScenarioClass waypoint；0x69BBF0 |
| W45 | **23 × nullsub_***（0x40D300/0x420130/0x454CE0/0x45E750/0x465CB0/0x48DED0/0x4B69D0/0x4F6EB0/0x52CB80/0x532130/0x5FA430/0x60D440/0x691B30/0x6B8B10/0x6B8B20/0x6C9F00/0x6CC070/0x7179C0/0x7236D0/0x749010/0x74FF40/0x763720/0x778170）+ 0x7BA320 WWMouseClass::IsRefCountNegative |
| W6 | — |

---

## 4. 账本对账（硬证据）

### 4.1 总量（pre = `cw7_pre_ledger.json`）

| 状态 | 改前 | 改后 | Δ |
|---|---:|---:|---:|
| OK | 3,921 | **3,963** | **+42** |
| NG | 3,512 | **3,736** | **+224** |
| COMPILE_FAIL | 1,052 | **786** | **−266** |
| PENDING | 31 | 31 | 0 |
| 合计 | 8,516 | 8,516 | 0 |

迁移矩阵：`COMPILE_FAIL → NG 224` + `COMPILE_FAIL → OK 42` = **266**。

### 4.2 目标集外零变动

对 532 个靶地址之外的**全部账本条目**逐条比对改前快照：**0 件**状态变化
（脚本口径 = `pre[a] != now[a]` 且 `a not in targets`）。

### 4.3 clean 池

42 个新 OK 中 **34 件 clean**（`clean=true ∧ rule_violations=0 ∧ !this_as_id`），
8 件带违规照实入账（0x426DD0 2 条、0x4A2350/0x4A3840/0x645D00/0x656580 各 1-2 条…），
**未豁免、未洗白**，不得进入 BM strict 证据池。

---

## 5. 六规则红线

| 事项 | 状态 |
|---|---|
| `tools/decomp_sys/checker.py` | **零改动**（`git diff` 为空） |
| 违规豁免/弱化 | 无 |
| `src/` | 零改动 |
| `tools/csp_export/minclass_solver.py` | 零改动 |
| stub / 占位 | 无；仍 CF 的 266 件同样 emit 完整实现，仅登记 CF |

账本全量违规读数（历史累计，供参照）：1,433 函数 / 4,366 条；本轮未新增豁免规则。

---

## 6. 零回归

| 检查 | 方法 | 结果 |
|---|---|---|
| 历史 OK 抽样 30 件 | pre-CW7 OK 池（3,921）随机 30（seed 20261112），当前 HEAD 全链重跑（生成→VC3/VC6 era 编译→COFF 切片→diffasm），**不写账本** | **30/30 MATCH** |

两轮回归（规则提交后、W6 后）均为 30/30。样本清单 = `.omo/decomp_batch/cw7/cw7_regress30.json`。

---

## 7. 残余残墙（786）

| 桶 | 件 | 说明 |
|---|---:|---|
| evidence（快照坏） | **125** | `?`/截断/asm；规则不可修，**留给 IDA 重导出**（CW6 prep §5 检查单） |
| live-like（本轮之后的当前残墙） | **661** | 见下表 |

按首错码（当前 `results.jsonl` 末条）：

| 首错 | 件 | 备注 |
|---|---:|---|
| C2440 | 110 | W1 之后的残余：`char[N]` 数组 LHS / 嵌套成员链 / 跨类成员类型 |
| C2227 | 58 | 成员链 on scalar（CW5-6/7 残余；`To_Cell` 返回类型等） |
| C2039 | 54 | 壳成员供给（CW5-8/11；无名成员/offset 名） |
| C2065 | 45 | 名字/类型供给（CW5-10/11 残余） |
| C2100 | 44 | 解引用提升（CW3-1 残余） |
| C2143 | 44 | 语法残伤（布尔片段/`this->(cast)`/mangled 名） |
| C2446 | 39 | 本轮比较规则未覆盖的复杂表达式侧 |
| C2664 | 35 | CRT/stub 原型长尾（CW5-12 表扩张） |
| C2660 | 32 | stub arity 供给 |
| C2296 | 32 | 非整数位运算残余（float/double、嵌套元素视图） |
| C2036 | 31 | void* 算术 |
| C2059 | 29 | 语法/`?` 命名残伤 |
| C2109 | 29 | 标量下标残余（嵌套元素视图/局部对象数组） |
| C2653 | 26 | 未知限定名 |
| C2377 | 25 | typedef-extern |

**下一轮建议**（按 ROI）：
1. **C2440 残余 110**：`Class_field_NN` 之外的 `BASE[idx].M`（成员类型来自其它类）与
   `char[N]` 数组成员的指针 store（需成员宽度仲裁）；
2. **C2227 58 + C2039 54**：callee 返回类型表（`To_Cell` → `CellClass *`）+ 视图/壳成员；
3. **C2143 44 + C2059 29**：语法残伤（R5 文本修复后的新形态）；
4. **W6 收尾**：free-this 的 `this_` 目前声明为 `void *`，`this_->mNNN` 形态仍失败
   （可按 `ctx.views[None]` 生成 offset-true 访问，或声明为推断类）。

---

## 8. 诚实声明与局限

1. **件数 ≠ 缺陷数**：unit 级共享 cpp 的首错归因仍有模糊（同一 unit 内先修好的函数会把
   首错"让"给下一个函数）；本报告的分族统计以**账本地址**为单位，与 CW5/CW6 同口径。
2. **W1 实测低于 CW6 预告**：W1 编译率 43.4%（预告 85% 上限），原因是 192 件 live 中
   G2/G3 旧代际证据的"新首错"多为跨类成员类型（`v3[2].M`、数组成员），不在本次 12 类修复面内。
   W2/W3 实测（66.7%/49.4%）高于或接近预告下沿。
3. **W6 只部分落地**：free-this 的接收者类型目前是 `void *`；`this_->mNNN` 仍 CF（26/35）。
   这是一个已定位、可继续收尾的工单，不是"已修完"。
4. **跳过 2 类已知硬形态**（本轮 15 件抽样中 2 件仍 CF）：
   - 嵌套元素视图 `(this->m0C8_addr[2])[0xC+52]`（成员真实是 0x140 步长结构数组，registry 只有
     `char[1]` element view；需要 IDA 成员类型/步长证据）；
   - CRT float/double 位运算（`p0 >> 16`，proto `_TBYTE`；`DWORD1/__CFADD__` 也未定义）。
5. **快照坏 125 件未动**：仍全部 CF，是 786 的硬底。任何"CF 全部清零"的说法必须扣除。
6. **本报告未做 IDA 在线操作**，全部证据来自本地账本/工件/反汇编快照。

---

## 9. 复现

```powershell
# 靶集构建（只读账本，产出 cw7_*.json + 当前 CF 普查）
python .omo/decomp_batch/cw7/cw7_build_targets.py

# 抽样探针（--no-ledger）
python tools/decomp_sys/batch_run.py --batch .omo/decomp_batch/cw7/cw7_probe_batch.json `
  --out .omo/decomp_batch/cw7_probe8 --chunk 20 --no-ledger

# 分族全量（每 part 自动 commit）
python tools/decomp_sys/run_wa.py --batch .omo/decomp_batch/cw7/cw7_w1_c2440.json  --run cw7_w1  --tag cw7w1  --chunk 20
python tools/decomp_sys/run_wa.py --batch .omo/decomp_batch/cw7/cw7_w2_c2109.json   --run cw7_w2  --tag cw7w2  --chunk 20
python tools/decomp_sys/run_wa.py --batch .omo/decomp_batch/cw7/cw7_w3_c2296.json   --run cw7_w3  --tag cw7w3  --chunk 20
python tools/decomp_sys/run_wa.py --batch .omo/decomp_batch/cw7/cw7_w45.json        --run cw7_w45 --tag cw7w45 --chunk 20
python tools/decomp_sys/run_wa.py --batch .omo/decomp_batch/cw7/cw7_w6.json         --run cw7_w6  --tag cw7w6  --chunk 20

# 零回归（不写账本）
python tools/decomp_sys/batch_run.py --batch .omo/decomp_batch/cw7/cw7_regress30.json `
  --out .omo/decomp_batch/cw7_regress30_final --chunk 20 --no-ledger
```
