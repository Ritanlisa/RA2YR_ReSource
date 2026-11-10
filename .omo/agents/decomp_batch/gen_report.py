#!/usr/bin/env python3
"""Generate .omo/agents/decomp_batch/report.md from the run artifacts."""
import json
import os
from collections import Counter, defaultdict

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", ".."))
STATE = os.path.join(ROOT, ".omo", "agents", "decomp_batch")
RUN = os.path.join(ROOT, ".omo", "decomp_batch", "run4", "batch_report.json")
CLEAN = os.path.join(ROOT, ".omo", "decomp_batch", "cleanup9", "part_00", "part_report.json")
LEDGER = os.path.join(ROOT, ".omo", "codegen_match", "status.json")

d = json.load(open(RUN, encoding="utf-8"))
rs = d["results"]
summ = d["summary"]
clean = json.load(open(CLEAN, encoding="utf-8"))
led = json.load(open(LEDGER, encoding="utf-8"))
ledc = Counter(e["status"] for e in led.values())

match = [r for r in rs if r["verdict"] == "MATCH"]
miss = [r for r in rs if r["verdict"] == "MISMATCH"]
fail = [r for r in rs if r["verdict"] == "COMPILE_FAIL"]
pilots = ["0x5b2990", "0x5f6560", "0x401940", "0x486380", "0x4870d0"]
pilot_rows = []
for a in pilots:
    r = next(x for x in rs if x["addr"] == a)
    fd = r.get("first_diff") or {}
    pilot_rows.append("| %s | %s | %s | %s | %s | %s |" % (
        a, r.get("name", ""), r["verdict"], r.get("pathology") or "-",
        (fd.get("orig") or "-"), (fd.get("ours") or "-")))

byp = defaultdict(list)
for r in miss:
    byp[r.get("pathology") or "?"].append(r)
byf = defaultdict(list)
for r in fail:
    note = (r.get("note") or "")
    if "C4234" in note:
        k = "C4234 __thiscall reserved (casted fn-ptr expression)"
    elif "C2227" in note:
        k = "C2227 -> on non-class member (type misalignment)"
    elif "C2440: 'return'" in note:
        k = "C2440 return void->int (callee return type)"
    elif "C2562" in note:
        k = "C2562 void fn returns value"
    elif "C2106" in note:
        k = "C2106 assign to non-lvalue (member macro target)"
    else:
        k = "other"
    byf[k].append(r)

L = []
L.append("# DECOMP 扩产恢复报告 — round 2（2026-11-10）")
L.append("")
L.append("**任务**：上次配额中断（账本 OK:3 / PENDING_ERACOMPAT:48 / NG:4，批处理误走")
L.append("`run_pilot` 编译 `src/` 文件撞 enum class 墙）后的恢复。本轮走正确路径：")
L.append("`tools/decomp_sys/decompile.py` 从 `decompile-results/full_export` 伪码生成 cpp，")
L.append("**不 include 任何 `src/` 头**，单元编译只用 decomp_sys 自己生成的 hpp/最小壳。")
L.append("")
L.append("## 0. 结论")
L.append("")
L.append("| 指标 | 数值 |")
L.append("|---|---|")
L.append("| 批函数 | **100**（5 pilot 复核 + 95 新筛） |")
L.append("| 每函数真实编译+对拍 | 100/100（VC6 SP3 `.vc6-8447` + era_shim，`/O2 /Gy /c`） |")
L.append("| MATCH | **%d** |" % len(match))
L.append("| MISMATCH | **%d** |" % len(miss))
L.append("| COMPILE_FAIL | **%d** |" % len(fail))
L.append("| MATCH 率（占总数） | **%.1f%%**（目标 ≥30%%） |" % summ["match_rate_of_total_pct"])
L.append("| MATCH 率（占已判定） | %.1f%% |" % summ["match_rate_of_decided_pct"])
L.append("| 旧账本 PENDING_ERACOMPAT | 48 → **0**（含 9 件遗留二次清理） |")
L.append("| 账本终态 | %d 条：OK %d / NG %d / PENDING %d |" % (
    len(led), ledc.get("OK", 0), ledc.get("NG", 0), ledc.get("PENDING", 0)))
L.append("")
L.append("5 pilot 复核：**2 MATCH / 3 MISMATCH**（下节）。旧 `PENDING_ERACOMPAT` 9 件")
L.append("遗留二次清理：5 MATCH / 3 MISMATCH / 1 COMPILE_FAIL（全部获得真实 verdict）。")
L.append("")
L.append("## 1. 流程")
L.append("")
L.append("每函数：")
L.append("")
L.append("1. `pseudo.fetch` 取 full_export 块（伪码 + disasm + proto；空伪码 → NO_PSEUDO）")
L.append("2. `decompile.run_function`：registry 签名（signals 权威）→ 参数改名 → 全局 →")
L.append("   intrinsic/LOBYTE → vtable dispatch → 成员形态（rule 3/4）→ 作用域收缩 →")
L.append("   era 规范化（IDA 宏零容忍）")
L.append("3. 按 owning class 分组 emit cpp + 最小 hpp（`hpp_pilot.py`，不含 src/ 头）")
L.append("4. VC6/SP3 `cl /nologo /O2 /Gy /c` 编译；单元失败则逐函数隔离重编")
L.append("5. COFF 符号切函数 → `diffasm` 规范化字节对拍（jcc 目标/rel32 符号/DATA 符号掩码）")
L.append("6. verdict + 病理分类；**每 20 函数一个 part**，part 结束立即")
L.append("   `ledger.record` + `results.jsonl` 追加 + part_report 落盘（防配额中断）")
L.append("")
L.append("批组成（`tools/decomp_sys/batch_select2.py`，输出")
L.append("`.omo/agents/decomp_batch/batch100.json`）：")
L.append("")
L.append("- 5 个指定 pilot 固定在前")
L.append("- 95 个从 signals 筛：leaf（无 call / 无 ds: 引用）+ 4B ≤ size < 120B +")
L.append("  full_export 非空伪码；类方法优先；ICF 折叠/thunk 族（COMStub/Thunk/vtN）排除；")
L.append("  每类上限 10；**账本 recovery 优先**（PENDING → fresh → NG → OK）")
L.append("")
L.append("## 2. 本轮工具修复（都在 decomp_sys / codegen_match，未触碰 src/）")
L.append("")
L.append("| # | 文件 | 修复 | 效果 |")
L.append("|---|---|---|---|")
L.append("| 1 | `decompile.py` | registry 的 cc 拼写 `fastcall/stdcall/cdecl` 归一为 `__fastcall/...` | 之前 fastcall 成员按默认约定 emit，EDX 传参函数全 cc_mismatch |")
L.append("| 2 | `passes.py` `_THISLIKE_CAST` | 容忍多词类型（`unsigned int` 等） | `pass_globals` 先改写 `_DWORD`→`unsigned int`，旧单词语法永不匹配；fastcall setter 族绑定 `this` |")
L.append("| 3 | `passes.py` `pass_thislike_param` | 绑定 receiver 后同步 `params_spelled/param_names` | 修 C2511（hpp 声明与 def 漂移） |")
L.append("| 4 | `passes.py` `pass_thislike_param` | 拒绝数组别名/非标量 registry 记录，回落 offset 名 `m%03X` | 修 `char[32]` 别名导致的重复成员名 C2086 / 数组赋值 |")
L.append("| 5 | `diffasm.py` `undecorate` | 数据符号 `?Name@@3IA` → `Name` | extern_reloc 族从「符号键不同」推进到真实差异（signedness） |")
L.append("| 6 | `extract.py` / `diffasm.py` | signals/functions.json/PE 进程级缓存 | 对拍阶段 13–26s/函数 → <0.2s/函数 |")
L.append("| 7 | `batch_run.py` | chunk=20 分 part、part 级 ledger/JSONL/report、`--resume`、`--batch` | 配额中断可续；`--only` 不再劫持 ad-hoc 地址 |")
L.append("| 8 | `batch_run.py` `classify_diff` | 新增 signedness / const_fold，修正 ret N / 宽度误判 | 病理标签可解释 |")
L.append("| 9 | `batch_select2.py` | 新批选择器（leaf/<120B/伪码/类方法优先/recovery 优先） | 100 件可复现生成 |")
L.append("")
L.append("修复 1–4 直接翻转了 5 个此前 `PENDING_ERACOMPAT` 的 fastcall setter")
L.append("（0x406540/0x4065C0/0x4065D0/0x4065E0/0x406640）为 MATCH。")
L.append("")
L.append("## 3. Pilot 复核（5）")
L.append("")
L.append("| addr | name | verdict | pathology | 首差异 ORIG | 首差异 OURS |")
L.append("|---|---|---|---|---|---|")
L.extend(pilot_rows)
L.append("")
L.append("`0x401940` / `0x4870D0` 保持 MATCH。三个 MISMATCH 与旧账本一致，")
L.append("根因分别见 §5.1（cc_mismatch）、§5.2（vt dispatch 帧）、§5.3（char 返回宽度）。")
L.append("")
L.append("## 4. MATCH 清单（%d）" % len(match))
L.append("")
L.append("| addr | emitted | 字节 | 备注 |")
L.append("|---|---|---|---|")
for r in sorted(match, key=lambda x: int(x["addr"], 16)):
    L.append("| %s | `%s` | %sB | %s |" % (
        r["addr"], r.get("emitted") or r.get("name"), r.get("orig_size"),
        (r.get("note") or "")[:40]))
L.append("")
L.append("构成：4–6B getter/stub 约 %d 件，8–42B 叶逻辑 %d 件（含"
         "17B `Cell::IsPassableOffset`、4B `AbstractClass::computeDistanceSquared`、"
         "5B `TechnoClass::IsDirty` 等）。" % (
             sum(1 for r in match if (r.get("orig_size") or 0) <= 6),
             sum(1 for r in match if (r.get("orig_size") or 0) > 6)))
L.append("")
L.append("## 5. MISMATCH（%d）与病理" % len(miss))
L.append("")
L.append("| addr | emitted | pathology | ORIG 首差异 | OURS 首差异 | 尺寸 |")
L.append("|---|---|---|---|---|---|")
for r in sorted(miss, key=lambda x: int(x["addr"], 16)):
    fd = r.get("first_diff") or {}
    L.append("| %s | `%s` | %s | `%s` | `%s` | %sB/%sB |" % (
        r["addr"], (r.get("emitted") or r.get("name") or "")[:44],
        r.get("pathology") or "-", fd.get("orig") or "-", fd.get("ours") or "-",
        r.get("orig_size"), r.get("ours_size")))
L.append("")
L.append("### 5.1 cc_mismatch（%d）" % len(byp.get("cc_mismatch", [])))
L.append("")
L.append("- **WebBrowser COM 桩 7 件**（0x773B40/50/60/70/80/90/BB0）：ORIG `ret 4/8/0xC/0x14`")
L.append("  （`__stdcall` 被调方清栈）vs OURS `ret`（默认 thiscall 约定）。根因：COM 接口的")
L.append("  stdcall 约定与参数宽度未进 registry 签名；修法是给这些桩补 `__stdcall` + 参数表。")
L.append("- **Math::Abs16Cmp**：两个栈参数的求值顺序不同（ORIG 先读 `[esp+4]`，OURS 先读")
L.append("  `[esp+8]`）。伪码表达式为 `abs16(*a3) >= abs16(this_word - *a2)`，C++ 左先右后，")
L.append("  与二进制右先左后相反；需交换比较两侧（`<=` 形式）。")
L.append("")
L.append("### 5.2 codegen_shape（%d）" % len(byp.get("codegen_shape", [])))
L.append("")
L.append("- **ObjectClass 4B getter 5 件**（0x408EC0/0x408ED0/0x409330/0x526950/0x633B70）：")
L.append("  ORIG `mov eax,[ecx+off]`（dword），OURS `xor eax,eax; mov al,[ecx+off]`。根因是")
L.append("  IG 粒度的**类级最窄优先**合并：这些函数本身没有 IG 项（全宽度读不会被 IG 记录），")
L.append("  但同类的另一个函数有 byte 证据，成员被收窄成 bool。修法方向 = IG 作用域改为")
L.append("  **函数级**：本函数无 IG 证据时回退声明宽度（`gran_named_width`）。")
L.append("- **Math::DistSq2D**：vt slot 18 的派发被 `pass_vt_dispatch` 生成为成员函数指针调用")
L.append("  `(this->*...)(v6)`，ORIG 是 `mov eax,[ecx]; call [eax+0x48]` 的虚表直呼，")
L.append("  且缺少 0xC 局部栈帧。修法方向 = dispatch 收敛为具名虚方法（hpp 声明 slot 原型）。")
L.append("- **DynamicVector::distributeStartingUnits**：OURS 多出 `push esi` 帧（局部指针/循环")
L.append("  形态与 ORIG 不同）。")
L.append("- **Game::Stub3**：ORIG `xor al,al` vs OURS `push ecx`（int 返回类型套帧，见 5.3）。")
L.append("")
L.append("### 5.3 ret_norm（%d）" % len(byp.get("ret_norm", [])))
L.append("")
L.append("- **Cell::IsEmpty**：ORIG `xor al,al` / UOURS `xor eax,eax`。二进制所有返回路径只写")
L.append("  AL（`xor al,al` / `mov al,1`），真实返回类型是 bool/char，但 registry 写 int。")
L.append("- **SimpleDialogControl::Release / MissionStubReturnZero2**：ORIG 裸 `mov al,[ecx+8]`")
L.append("  / `mov al,1`（4–5B），OURS 因 int 返回 + `LOBYTE(result)` 局部产生 `push ecx` 帧。")
L.append("- 统一修法方向：从 disasm 的返回路径提取返回寄存器宽度（所有 ret 前只写 AL/AX）→")
L.append("  签名 ret 收窄为 bool/short，再走 `LOBYTE` 自然路径。")
L.append("")
L.append("### 5.4 width_mismatch（%d）" % len(byp.get("width_mismatch", [])))
L.append("")
L.append("- **Scenario::SetByte96 / TActionClass::executeDetonateAction**：伪码 `LOBYTE(this->F)=0`，")
L.append("  ORIG 是单条 `mov byte ptr [ecx+off], 0`（5B），OURS 落入 bit-surgery fallback")
L.append("  `F = (F & ~0xFF) | 0`（读-改-写 9B）。根因：IG 只记录**部分寄存器**访问，不记录")
L.append("  立即数窄存储，`_member_narrow_state` 无证据 → fallback。修法方向：把本函数 disasm 的")
L.append("  `byte/word ptr [ecx+off]` 访问作为函数级窄证据。")
L.append("")
L.append("## 6. COMPILE_FAIL（%d）" % len(fail))
L.append("")
L.append("| addr | emitted | 分类 | 首条错误 |")
L.append("|---|---|---|---|")
for k, rows in sorted(byf.items()):
    for r in sorted(rows, key=lambda x: int(x["addr"], 16)):
        note = (r.get("note") or "").split(";")[0]
        L.append("| %s | `%s` | %s | %s |" % (
            r["addr"], (r.get("emitted") or "")[:42], k, note[:110]))
L.append("")
L.append("根因归纳：")
L.append("")
L.append("- **C4234**（2）：`(int (__thiscall *)(Cls *))` 形式的函数指针强转出现在表达式里；")
L.append("  VC6 只允许 `__thiscall` 出现在成员声明。修法 = 用成员函数指针 `(this->*...)` 或")
L.append("  `__cdecl` + 显式 this 造型。")
L.append("- **C2227**（2）：`this->m_Next->__pad_0`，`m_Next` 被声明为 int → 对非类指针用 `->`；")
L.append("  根因是 LinkClass 成员类型错位（registry int vs 实际 LinkClass*）。")
L.append("- **C2440 return void->int**（3）：被调函数 registry 返回 void，但调用点 `return callee();`")
L.append("  需要 int；修法 = 被调方签名复核（这正是 `GetRelatedObject` 这类命名缺失件）。")
L.append("- **C2562**（1）：函数 ret void 但体里有 `return expr;`——签名与伪码返回不一致。")
L.append("- **C2106**（1）：`((this->vfptr >> 8) & 0xFF) = 71;`，HIBYTE 宏目标不是 lvalue；")
L.append("  根因是 `HIBYTE(this->vfptr)` 这类非 LOBYTE 窄宏目标未走成员窄存储路径。")
L.append("")
L.append("## 7. 病理分类总表（延续三类 + 新类型）")
L.append("")
L.append("| 类别 | 本轮 | 说明 | 修法方向 |")
L.append("|---|---|---|---|")
L.append("| width_mismatch | %d | 读写宽度不一致 | ①IG 函数级作用域 ②disasm 窄存储证据 |" % len(byp.get("width_mismatch", [])))
L.append("| cc_mismatch | %d | 约定/清栈/参数顺序 | COM stdcall 签名 + 表达式操作数顺序 |" % len(byp.get("cc_mismatch", [])))
L.append("| ret_norm | %d | 返回寄存器宽度（AL/AX vs EAX） | disasm 返回宽度 → 签名 ret 收窄 |" % len(byp.get("ret_norm", [])))
L.append("| codegen_shape | %d | 指令形状分叉 | vt dispatch 具名虚方法 / IG 函数级 |" % len(byp.get("codegen_shape", [])))
L.append("| frame_sched | 0 | 栈帧调度 | — |")
L.append("| extern_reloc | 0 | 数据符号键 | 本轮已由 undecorate 修复（0x4865B0 推进到 signedness） |")
L.append("| branch_polarity / branch_order | 0 | 分支极性/布局 | 本轮批内未出现 |")
L.append("| **signedness**（新） | 0* | 同宽度有/无符号比较 | 0x4865B0 修好符号键后暴露 `jl` vs `jb`；属 signed-default 账本问题 |")
L.append("| **const_fold**（新） | 0 | 同形不同立即数 | 常量折叠/表达式化简差异 |")
L.append("")
L.append("\\* signedness 在 run3→run4 的台账中计 0（0x4865B0 不在 100 批内）；")
L.append("它是本轮 diffasm 修复后新暴露的差异类型，已进入分类器。")
L.append("")
L.append("## 8. 复现")
L.append("")
L.append("```bash")
L.append("# 1) 生成 100 件批（5 pilot + 95）")
L.append("python tools/decomp_sys/batch_select2.py")
L.append("")
L.append("# 2) 跑批（20 件/part，逐 part 落账；中断后加 --resume 续跑）")
L.append("python tools/decomp_sys/batch_run.py --batch .omo/agents/decomp_batch/batch100.json \\")
L.append("       --chunk 20 --out .omo/decomp_batch/run4 --resume")
L.append("")
L.append("# 3) 单函数/小批")
L.append("python tools/decomp_sys/batch_run.py 0x406540 0x4065C0 --out .omo/decomp_batch/probe")
L.append("```")
L.append("")
L.append("产物：`run4/part_XX/`（cpp/hpp/orig/ours/part_report）、`run4/batch_report.json`、")
L.append("`.omo/agents/decomp_batch/results.jsonl`（逐函数增量账）、")
L.append("`.omo/codegen_match/status.json`（账本）。")
L.append("")
L.append("## 9. 遗留 / 下一步")
L.append("")
L.append("1. **IG 函数级作用域**（最高杠杆）：修 registry 的类级最窄合并 + `member_at(fn)`，")
L.append("   预计回收本轮 5 件 codegen_shape + 2 件 width_mismatch。")
L.append("2. **返回宽度从 disasm 推断**：回收 3 件 ret_norm。")
L.append("3. **COM stdcall 签名族**：回收 7 件 WebBrowser cc_mismatch。")
L.append("4. **vt dispatch 具名化**：DistSq2D 类（slot 派发）转为 hpp 虚方法声明。")
L.append("5. 编译失败 9 件的类型/签名复核（m_Next 类型、callee 返回类型、非 LOBYTE 窄宏）。")
L.append("6. 下一批：把 `batch_select2.py --n 200 --cap 15` 指向剩余 fresh 池（约 4.5K leaf/<120B）")
L.append("   + 账本 NG 二次攻坚。")
L.append("")
L.append("---")
L.append("")
L.append("附：旧账本 9 件 `PENDING_ERACOMPAT` 遗留二次清理（"
             "`cleanup9`）：5 MATCH / 3 MISMATCH / 1 COMPILE_FAIL，")
L.append("PENDING_ERACOMPAT 计数归零。cleanup 明细见 "
             "`.omo/decomp_batch/cleanup9/part_00/part_report.json`。")

out = os.path.join(STATE, "report.md")
os.makedirs(STATE, exist_ok=True)
with open(out, "w", encoding="utf-8", newline="\n") as f:
    f.write("\n".join(L) + "\n")
print("wrote", out, len(L), "lines")
