# report_return_this — `pass_return_this_artifact`（规则级，零回归）

日期：2026-11-18 · HEAD 起点：`9601d3ae5` · 规则：单种问题（offset-0 成员返回 artifact）

## 0. 结论（先看这里）

| 指标 | OFF canonical | ON (v2 复现) | 差 |
|---|---|---|---|
| OK | 6,430 | **6,544** | **+114** |
| NG | 9,228 | 9,114 | −114 |
| COMPILE_FAIL | 3,038 | 3,038 | 0 |
| PENDING / THUNK | 95 / 303 | 95 / 303 | 0 |
| OK 损失 | — | — | **0（红线保持）** |

- 规则名：`passes.pass_return_this_artifact`（接线于 `pass_era_normalize` 之后）
- 形态：`return (T *)(this-><offset-0 成员>);` → `return (T *)this;`
- 族规模（NG 池扫描）：核心形态 61 处（35 泛型 + 26 具名类 cast）+ 双 cast 变体 12 处
- 实测转化：**+114**（QueryInterface / ScalarDtor / Constructor / checkAmmunition / Construct / DestroyPipe 族）

## 1. 根因（实证）

`0x720210 AbstractClass::checkAmmunition`（30B）：

```
orig: 8B C6      mov eax, esi        ; esi = this（8B F1 mov esi, ecx）
ours: 8B 06      mov eax, [esi]      ; this->vtable1 载入
```

- 伪码快照 `decompile-results/full_export/src/AbstractClass.cpp`：
  `return this->__pad_0; /*0x72022a*/` —— **Hex-Rays 保真性 bug**：二进制返回 `this`
  本身（地址），伪码却渲染成 offset-0（vtable 槽）成员的载入。
- 管道把 `this->__pad_0` 按 offset 0 映射为 hpp 成员 `vtable1`，于是发射
  `return (unsigned int *)(this->vtable1);` → `mov eax,[esi]`。

## 2. 规则（二进制裁决，非逐函数）

```python
# passes.py
def pass_return_this_artifact(ctx):
    # 触发面：cls 存在 + views.scalars[cls][0] 有成员名 + 有 disasm
    # 证据（严格）：函数每一条返回路径的最后一条 EAX 写指令都是
    #   `mov eax, <receiver 别名>`（无访存），别名集 = {ecx} ∪ {R | mov R, ecx}
    # 任一返回路径不合格（载入/常数/xor eax,eax 等）→ 整函数跳过
    # 改写：return (CAST)(this->m0);      -> return (CAST)this;
    #       return (CAST)((INNER)this->m0); -> return (CAST)this;
```

- 关键设计：**证据用函数自身反汇编**（`ctx.ex.disasm_lines`），不是启发式；
  `mov eax, [ecx]`（真返回 vptr 的函数）最后写者是载入 → 不合格 → 不触发。
- 代码gen 中性：`(T*)this` 与 `(T*)(this->vptr)` 的唯一差异就是是否载入。

## 3. 门禁（规则纪律全走）

| 门 | 结果 |
|---|---|
| 单点 0x720210 | MISMATCH → **MATCH** |
| OK 对照 20（`okctl20.json`） | **20/20 MATCH** |
| NG 回归 40（`r10c_ngctl.json`） | 40/40 保持可编译（0 COMPILE_FAIL；pathologies 分布不变） |
| 规范全池 A/B（`.omo/full_export_funcs.json`，955 parts，同序） | **+114 / lost 0** |
| 确定性 | ON v1 与 ON v2 两次全池运行账本逐项一致（6,544/9,114/3,038/95/303） |

## 4. 方法论事故与教训（重要）

**第一轮测量（错误归因）**：以工作区账本（OK 6,476，来自 `ng_hpp` NG 池重判）为基线，
全池 ON 跑出 **"45 OK 损失 + 1 OK→PENDING"**，触发红线警报。

**取证判别**：抽样 8 个损失地址检查其生成 cpp 是否含规则改写——
6-7 个**根本无 `return (T*)this` 改写**（差异是偏移/shape/全局指针，如
`[ecx+4]` vs `[ecx]`、`mov eax, 0x82767c` vs `mov eax, [0]`），证明与规则无关。

**真因**：旧基线账本不是规范全池口径（`ng_hpp` 只重判 NG 池 8,920 件，OK 池状态
来自更早不同 part 组成的历史 run）。**同一函数的判定依赖 part 内函数集合
（iso hpp 视图合并）——跨口径账本不可直接相减。**

**修正**：跑规则 OFF 的**规范全池**（955 parts，同一批单同一序）作基线，再 ON 复现。
→ 真实效果 **+114 / 0 损失**。

**纪律沉淀**：
1. 任何规则改动的 A/B，必须**同一批单、同一 part 顺序**两侧各跑一次全池；
2. 拿"工作区账本"当基线前，先确认它是否由规范全池产生（看产出目录/part 数）；
3. 损失归因先做"改写存在性"探针（损失地址的生成体是否含本规则形态），再谈因果。

## 5. 工件

- 规则：`tools/decomp_sys/passes.py`（`_RET_THIS_INSN`/`_RET_ANY_AX`/`_ECV_MOV_ALIAS`/
  `_RETN_ANY` + `pass_return_this_artifact`）、`tools/decomp_sys/decompile.py`（接线 1169 行）
- 全池 A/B 产出：`.omo/agents/r1/ab_hpp/full_ruleOFF/`（OFF 955 parts）、
  `full_ruleON_v2/`（ON 955 parts）
- 账本快照：`status_ruleOFF_canonical.json` / `status_ruleON_v1.json` / `status_ruleON_v2`（=final）
- 探针脚本：`ab_hpp/{patch_toggle,add_rule,delta,ab_compare,final_check,loss_probe,forms,scan_vt1,family_probe2}.py`
- 前序 2 件"OK 损失"（hpp 对齐轮）在本轮同样口径下复核：`0x720210` 已由本规则恢复 OK；
  `0x7656d0` 仍 NG（`[ecx+4]` vs `[ecx]` 偏移差异，属另一 artifact 族，未在本轮处理）。

## 6. 未处理残余（记录，不扩面）

1. 双 cast 变体之外的 8+4 处 `((INIClass *)(this->vtable1))->SetString(...)` ——
   经 vptr 成员"调用方法"的形态，属另一 artifact 族（疑似 `this->field_0` 的
   MI 首基类解析差异），需独立取证。
2. `0x7656d0` 类 `[ecx+4]` vs `[ecx]` 偏移 artifact —— 成员偏移解析差异，另立规则。
3. 本规则的别名追踪为文本级（不处理寄存器覆盖/`call` clobber）—— 本池实测 0 误触发，
   若未来 hpp 类型变化引入新触发面，需升级为保守失效追踪（写入非 ecx 源即剔除别名、
   `call` 后清 eax/ecx/edx）。

---

## 7. 后续一轮：byte-carrier (`m_N[K]`) 研究 —— 负结果（已回退，勿盲目重跑）

研究目标：`&this->m_1[3]` 类形态（IDA til 名字内编码字节偏移）被管道错误解析，
产生 union 吞并（`[ecx]` vs `[ecx+4]`）与 `&v21.m_1[3]` = +13 而非 +4 的大面积偏差。

### 实证根因（三条，全部经伪码+反汇编交叉验证）
1. **字节语义确认**：`0x5ae6f0 Matrix3D::Constructor` 伪码
   `*(_DWORD *)&this->m_1[3]` → 反汇编 `mov [esi+4], eax`；
   `&this->m_5[3]` → `[esi+8]`；`&this->m_9[3]` → `[esi+0xC]`。
   ⇒ `m_N[K]` = offset N + K（BYTE 索引），而 registry `member_lookup` 给 m_1
   的 `size` 默认 4 —— **默认宽度被当成真实声明跨度**。
2. **union 吞并**：`_view_span` 用 4B 跨度 → 组 end=5 → 把 offset 4 的派生视图
   吞进 0x000 union；hpp 里 offset-4 成员落在 union 基址 → 体读出 [ecx]。
3. **多 pass 交互**：常量索引路径 `pass_member_shapes`（reuse arec 重算 index，
   把 +3 字节偏移折叠成 `m_1[0]`）；call 实参路径 `pass_this_ptr_math`
   （`*(char **)&this->m_1[3]` → `(char*)this + 0`，丢失 +3）；
   以及 `merge_views` 不携带新的标记。三处都需同步，单改一处无效。

### 尝试实现（已全部回退）
- `ClassView.byte_carriers`（使用证据标记，绝不用名字模式——`m000`/`m010` 是真实 dword 成员）
- `pass_member_shapes`：`_bc` 分支（新建 1B 载体数组 + 在 abs_off 建 `elem-restore` 视图）
- `hpp_pilot._view_span`：载体 span=1（经 `merge_views` 传递）
- `pass_return_this_artifact` 扩展 receiver 位置（`((T*)(this->m0))->M()` → `((T*)this)->M()`，
  call 前 `mov ecx,<alias>` 证据 + 无 `mov ecx,[alias]`）
- disasm 注释剥离（`mov ecx, esi; this  ; this` 的 `; this` 后缀）

### 实测（canonical full pool, 955 parts）
| 项 | 基线（已提交） | 尝试集 |
|---|---|---|
| OK | 6,544 | 6,541 |
| 变化 | — | **gained 0 / LOST 3**（0x7b48d0 String::Assign_Alt / 0x7b4da0 String::Concat2 / 0x7b5360 ObjectClass::sub_7B5360）|

**裁决：净负 → 全部回退**（`git checkout` 三文件 + 账本快照恢复；已提交规则冒烟 0x720210 MATCH 复验通过）。

### 若下一轮重启该族，必需的设计前置
1. `pass_this_ptr_math` 与 `pass_member_shapes` 必须共享**同一字节载体判定**（先标记、后消费），
   且标记需跨越 per-fn→unit 的 `merge_views`（本次已实现传递，但未解决 this_ptr_math）。
2. Matrix3D 残余 = 常量 hoist 调度差（orig `mov ecx,0x3f800000` 提前），属 codegen_shape，
   源形规则难以覆盖；修 m_N 只能解决布局与偏移，不能清除调度差。
3. 3 个回退损失（String/ObjectClass 族）需先做"改写存在性"探针确认归属（receiver 改写 vs
   byte-carrier span 改动），再决定是否拆分规则。

---

## 8. Set B（§7 的后续）：receiver 伪影修正 + r8o 视图偏移权威（+3 OK / 0 损失，已推送 c46665666）

### 3 个 §7 回退损失的归因（探针结果）
attempt(`full_bc`) vs baseline(`full_ruleON_v2`) 同函数生成体 diff：
- 0x7b48d0 String::Assign_Alt: `__3_YAXPAX_Z((void *)(this->m000))` → `(void *)this`
- 0x7b4da0 String::Concat2: `strlen((char *)(this->m000))` → `strlen((char *)this)`
- 0x7b5360 ObjectClass::sub_7B5360: `__3_YAXPAX_Z((void *)(this->vfptr))` → `(void *)this`

⇒ 全部是 **receiver 正则把调用的右括号误当 receiver 外层**，与 byte-carrier 无关。
修正 = `(?=\s*->\s*\w+\s*\()` 前瞻（必须真是方法调用）。

### 第二处真凶（0x536260 CenterTeamCommand::Do）
`pass_r8o_shell_mismatch` 用名字编码偏移（`CenterTeamCommand_field_00`→0x00）发射
`(char*)(this)+0x0`，而 hpp 把数组成员声明在 0x4（`&m_1[3]`→+4）。修正 = `_view_off`
（同名视图存在时用视图偏移，否则保留名字偏移）。

### 实测（canonical 全池 955 parts，同批单同序）
OK 6,544 → **6,547（gained 3 / LOST 0）**：0x536080 SelectTeamCommand::Do、
0x536170 AddTeamCommand::Do、0x536260 CenterTeamCommand::Do。
门禁：单点全 MATCH；OK-ctl 20/20；NG-reg 40/40（CF=0）。
账本：OK 6,547 / NG 9,111 / CF 3,038 / PENDING 95 / THUNK 303。
提交 = c46665666，已推送（6c8351f5e..c46665666）。
