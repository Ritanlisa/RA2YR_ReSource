#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""minclass_solver.py —— 最小类数 CSP 求解器（约束族 C1-C8）。

候选集合（类宇宙）
    anchors/class_db.json   1,597 类：继承真值 / vtable 集合 / vtable_slot_count / size / ctors
    tools/class_layouts.json 1,282 类：扁平成员表 {offset: size}（C1 宽度相容判据）
    anchors/vtable_slot_authority.json 954 类 / 13,204 槽位（C3、C6）
    anchors/layout_evidence.json 二进制访问证据（gen_layout_evidence.py 产物）：
        每类 observed_extent（访问范围，尺寸下界）+ 观测 (offset,width) 成员。
        effective_size = max(declared_size, observed_extent)；C1 密度门与 C5 用
        effective_size，declared_size 仅保留为参考。observed_extent 不是 sizeof——
        sizeof 唯一精确来源是 C5 (operator new)。

约束族（每族给出"该实体允许的类集合"或 EXACT 单类）
    C1 成员访问     : 类必须在每个被访问偏移上都有成员；宽度相容按 obs_w <= member_w
    C2 this 传递    : thiscall 的 this 实参类 ⊑ 被调方声明的 this 类；函数自身 this 同规
    C3 虚表槽位     : obj->vtable[k] 的接收者类必须拥有槽位 k（无槽位数据的类=未知，放行）
    C4 ctor/dtor 装表 (EXACT) : 在 [this+0] 装入 vtable 的函数，其 this 的类 == 该 vtable 的类
    C5 分配长度 (EXACT)       : operator new N 产生的对象 effective_size(class) == N
    C6 虚表槽位数 (EXACT)     : 已知 vtable 身份的对象，class.vtable_slot_count == N
    C7 参数/返回方差          : 形参声明类 / 调用点实参类约束实体；T ⊑ U 方差校验
    C8 全局对象身份           : 全局地址按值类对象 / 装了 vtable / 名字证据 → 该类

求解
    实体 = MEMBER_ACCESS base ∪ FUNC_PARAM 端点 ∪ CALL_ARG 目标 ∪ CALL_VTABLE receiver ∪ new 站点
    等式 = FUNC_PARAM / CALL_ARG 具名实体 / 寄存器到达定义（CFG must 分析） / new→ctor
    簇域 = C1(簇内观测并集) ∩ 各族掩码 ∩ EXACT
    目标 = 最少不同类数：贪心集合覆盖 + 局部改进（去冗余 + 2 换 1），附不相交域打包下界
    空域绝不静默丢弃：全部进 anchors/minclass_conflicts.json（best-effort 域仍参与覆盖）

用法
    python tools/csp_export/minclass_solver.py
    python tools/csp_export/minclass_solver.py --no-reg-flow
    python tools/csp_export/minclass_solver.py --build-facts   # 从 full_export 重建二进制事实缓存
    python tools/csp_export/minclass_solver.py --evidence spec         # 仅 layout_evidence.json（默认，非循环）
    python tools/csp_export/minclass_solver.py --evidence spec+proto   # 叠加 proto-this 通道（备选，循环口径）

等式合并策略（proven-same-object，2026-10-29 收紧）
    跨帧合并的唯一合法目标是"同一调用点的实参值 = 形参槽位在该点的值"。
    被调方形参实体（T:<callee> / P:<callee>:k）被所有调用点共享，是多态汇合点；
    把多个调用点的实参实体并进同一汇合点会把无关对象粘成一簇
    （X152: 105 个 C2 空域冲突簇中 71% 是此伪影，如 G:87E790 同时钉到
    AudioStream+CoordBounds）。收紧后：
      - 多源汇合点（>1 个不同来源实体）一律拒绝合并（multi_caller_join）
      - 单源汇合点仍按来源种类门控：
          T:/P:（调用方自身的 this/形参）→ 允许（逐站同一对象）
          G:（全局）→ 仅当 C8 ctor/vtable-install 证明其类时允许（global_unproven）
          M:<fn>:this:<off>（成员链）→ 仅当 member_types.json 解析出成员类时
            允许（member_chain_unproven）
          R:（寄存器）→ 仅当到达定义不跨 call / 不经控制流汇合时允许
            （reg_flow_tainted；重定义由数据流 kill 语义天然排除）
          其它 → 拒绝（unproven_kind）
      - 同帧等式（FUNC_PARAM: this/形参 ↔ 本函数寄存器）与 new→ctor 保持不变
    每个被拒合并按原因计数（rejected_merges），与合并 census 一同打印并落盘。
"""
import argparse
import bisect
import collections
import glob
import hashlib
import io
import json
import os
import shutil
import sys
import re
import time
import zlib

# ---- 解析加速（2026-11-09 speed 轮）：orjson 可用则用之，缺省回退 stdlib ----
# 语义等价：orjson.loads 与 json.loads 对 UTF-8 JSON 文档产出的对象树深相等
# （dict 保序一致 / 大整数一致 / 浮点按同一 RFC 8259 语法解析）。仅替换加载路径，
# 全部 json.dump 写出保持 stdlib——产物字节流零变化。
try:
    import orjson as _orjson
except ImportError:                                    # pragma: no cover
    _orjson = None

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

FAMILIES = ["C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11",
            "C15", "C18", "C19", "C26", "CS", "MT", "MR", "IR", "MRH", "CP", "MD", "SP", "IT", "FS", "IV", "MS", "MH", "IG", "OT", "SG", "RU", "AS", "PU",
            "AL", "LS", "SS", "PP", "CB", "CC", "CR", "FP", "RA", "RD", "GX",
            "TC", "GI", "AV", "SA", "SW", "EP", "VR", "C2X", "MW", "P5",
            "SGN", "G2", "R1", "V2K", "GM", "NI", "S2", "PF2X",
             "G3", "VR2", "CPI", "IMP", "IM2", "YVP", "V2B"]
FAMILY_DESC = {
    "MT": "member type from ??_7 install (by-value member, strict; C4 generalized to off!=0; +mt2_installs.json net-new merge, mptr derived-pointer channel)",
    "MR": "member type via receiver domain x member_types (strict, two-pass; +mr9_member_by_receiver.json net-new merge, same regen semantics)",
    "IR": "all-const returns => int-family (HEURISTIC tier)",
    "MRH": "relaxed member typing: union of KNOWN slot types (HEURISTIC tier)",
    "CP": "all-constant call args => int-family param (HEURISTIC tier)",
    "MD": "member binary-fact types discriminate receiver candidates (strict, MT-sourced)",
    "SP": "string-literal args => char* param (strict, binary-verified strings)",
    "IT": "insn-semantic member types: movzx/movsx widths+sign, FPU float/double (strict)",
    "FS": "format-string arg positions (heuristic)",
    "IV": "insn-semantic value types, full base-entity resolution (strict)",
    "MS": "string-literal returns => char* RET (strict)",
    "MH": "jump-table enum usage => int family (heuristic)",
    "IG": "bare partial-register access granularity (byte/word member width, strict)",
    "OT": "vtable slot occupancy => this in class family (strict, binary fact)",
    "SG": "stack-slot insn granularity (byte/word/float, strict)",
    "RU": "return-value consumer usage int-only (heuristic)",
    "AS": "allocation sizes => class-size mask (heuristic, CS-family semantics)",
    "PU": "param in-body consumption: as-this edges + pointee granularity (strict; +pu3_usage.json net-new edges/gran; pu6 vcall slot-occupancy lands via C3)",
    "CS": "pointer-step size == class sizeof (HEURISTIC tier)",
    "C1": "member access (offset, obs_w<=member_w)",
    "C2": "this passing (arg class ⊑ callee this-class)",
    "C3": "vtable slot membership",
    "C4": "ctor/dtor vtable install @this+0 (EXACT)",
    "C5": "operator new size (EXACT)",
    "C6": "vtable identity slot count (EXACT)",
    "C7": "param/return variance",
    "C8": "global object identity",
    "C9": "vtable slot ownership (F is a slot target of C => F.this is C or a descendant)",
    "C10": "call-graph subtype propagation (caller.this passed as callee.this => callee class is an ancestor)",
    "C11": "member-chain typing (this->member@NN: subobject class is a descendant of the member static type)",
    "C18": "binary offset-signature match (class member offsets observed in its own functions)",
    "C26": "link-order locality (MSVC emits one class methods contiguously; applies to T: entities only)",
    "C15": "static vtable ownership (unique minimal owner => EXACT; ambiguous => narrowing mask)",
    "C19": "constructor-argument typing (source object is ctor-class OR descendant: inlined ctor chains call the base-most ctor first)",
    # ---- 编译器签名第四层（anchors/align_scale_types.json，全部严格）----
    "AL": "and-mask pointer alignment -> pointee type family (strict, compiler-signature L4)",
    "LS": "lea SIB-scale arithmetically-pinned stride -> element type family (strict, compiler-signature L4)",
    "SS": "struct member-layout signature strict-superset match -> this receiver domain (strict, compiler-signature L4)",
    "PP": "all-constant push tuple tail: string-literal offsets -> char* param (strict, compiler-signature L4)",
    "CB": "COM/compiler-signature: GUID-compare iface + qi-triple receiver -> IUnknown-descendant domain (strict)",
    "CC": "COM callback GUID-compare QI receivers -> IUnknown-descendant domain (strict, compiler-signature L5; evidence array of com_callback_types.json; guid_compares/callback_registrations are generator-side informational channels, no emitable spelling)",
    "CR": "CRT call-pattern arg/return types: str family / memcpy src / wsprintfA dst / fopen path+mode / u64 reg+stack pairs -> char*/char[N]/unsigned long long (strict, compiler-signature L6)",
    "FP": "FPU constant linkage: fild/fistp int-load/store + fldz/fld1/.rdata FP-constant producer on x87 stack-top when member FPU mem-op touches [base+off] -> float/double member family (strict, compiler-signature L7)",
    "RA": "caller-site EAX arithmetic/cmp consumption -> int/char* value family (strict, post-call window w/ copy extension)",
    "RD": "consumer-side EAX virtual-dispatch vptr-chain / member-read offset -> class candidate set (strict)",
    "GX": "virtual-dispatch site push-arg direct-to-GS: const01/granular types + bind-origin eq edges (strict)",
    "TC": "TClassFactory template-family vtable slot types: COM triple (QueryInterface/AddRef/Release/CreateInstance) receivers -> void*; template-T `TClassFactory_X*` spellings have no universe atom -> dropped per-token (strict, compiler-signature L8; evidence anchors/tcf_slot_types.json)",
    "GI": "global initializer scan: .data vptr static mirror + CRT __initterm ctor table + string-literal globals -> class / char[N] (strict, binary fact; evidence anchors/global_init_types.json, ent format G:<HEX> aligned with C8/CR)",
    "GM": "global materialize pool: named-global mirror byte typing over the unmaterialized G-entity pool (GI/CR/singleton/global_types dedup-excluded) -- gmat-strlit .data/.rdata printable+NUL -> char[N] (rdata k>=4, .data k<=3 only with igt size>4), gmat-smallint .data raw nonzero dword in [1,64] -> int, gmat-double aligned legal encoding -> double (strict, binary fact; vocab-external rows gmat-fnptr 1,268 / gmat-vtptr 2 are inert ledger, _load_type_family m8==0 skips by design; evidence anchors/global_materialize.json, 1,544 recs / 274 vocab-valid, ent format G:<HEX> aligned with C8/GI/CR, .omo/agents/gmat)",
    "NI": "new-site vfptr0 install typing: operator-new/malloc site <=12-ins window, eax + one-level mov reg,eax copies, off==0 primary-table install mov [reg], offset ??_7X@@6B@ => allocated type = X (ctor-install identity; AV exact-size agreement enforced generator-side, conflict/divisible-k>1 sites excluded from evidence; strict, binary fact; evidence anchors/ninstall_types.json, 99 recs via=nin-vfptr0, ent format N:%X aligned with alloc_sites touch; template spellings ?$...@.. no universe atom dropped per-token, MT precedent)",
    "S2": "signedness discriminator v2: width x sign narrowing (movsx/movzx r,r/m16|r/m8, cwd+idiv/div16, cmp16/8+signed-vs-unsigned jcc family, neg8+jl, printf fmt-verb param types incl %s->char*) => single-value type mask, narrowing AND (SGN v1 same-channel semantics -- types=[single], collapses dual-candidate domains; strict; evidence anchors/signedness2_types.json, 59 recs = 43 short + 11 char* + 2 int + 2 unsigned char + 1 unsigned int; v1 same-ent same-type dedup 128 / type conflicts 0 / sgn2 conflict entities 0 generator-side)",
    "PF2X": "param fingerprints: R2 composite signature (per (fn,k) >=2 distinct (off,width,dir) accesses AND-matched vs flat layouts covering EVERY span, 1..8 candidates emitted) + R3 param->vdispatch deep-slot (N>=0x20) vtable_slot_authority main-table classes -> P:FN:K class-candidate AND-mask (strict; evidence anchors/param_fingerprints.json, 255 recs via=pfp-sig-k*/pfp-vt0x*; K = stack-param index, thiscall this excluded; the 326 eq edges of the same file wired separately via the EF-style bidirectional channel, see the [PFP] line)",
    "AV": "allocation size v2: operator-new arg size at call site, wiring-side candidate computation per allocsize v2 report -- sem=total: pointee sizeof==size OR sizeof divides size (array count unknown); sem=elem: sizeof==size (pure-scale lea/shl multiplier); per-ent mask = union over its (size,sem) observations (strict, binary fact; aggregate anchors/alloc_size_types.json from .omo/agents/allocsize/alloc_sites_v2.json)",
    "SA": "SP-arity: virtual-dispatch site actual-arg count x authoritative slot-proto arity cross-exclusion AND-mask; tier A = uniquely-bound callee ret16 (binary exact), tier B = push-window AND esp-delta simulation double-channel agreement (STRICT tier, restored 2026-11-07 same day as demotion: evidence 10/10 binary-verified; the original -1042 negative gain was the old C9 prefilter unconditionally dropping slot-owner evidence in SS-manufactured structural 3-way conflicts -- now resolved by the C9 blame refinement: empty-AND with C9 pairwise-compatible with every family blames the weakest-evidence side SS instead of C9; .omo/agents/safix/report.md)",
    "SW": "S-slot lifecycle window: vdispatch-observed stack-slot occupant class AND-mask (strict; evidence array of anchors/slot_window_edges.json, 179 recs; eq edges of the same file wired separately via the EF-style bidirectional channel)",
    "EP": "caller-side EAX pointer/array consumption in RETX window (crosses labels/jcc, inner calls keep callee-saved copies): ptrstep stride-N / idxscale [eax+idx*N] / derefstore member-write candidates / derefstore-vt vtable-install -> pointer or class family AND-mask (strict; evidence anchors/eax_ptr_types.json; RA/RD sibling family, 280/305 entities net-new per eaxptr report)",
    "VR": "vdispatch receiver-origin: snapshot-disasm site-level resolution of `call [r2+N]` receiver value to its origin entity (T:FN this / M:FN:this:0xOFF member / P:FN:k param / EAX:FN:callsite ret / G:addr global; label-bounded <=8-instr reaching-def, tier=strict 2424 / entry-alias last-def, tier=fullspan 1558); consumed as C3 slot-mask (vptr_off==0) / C30 secondary-offset mask (vptr_off>0) landing on the origin entity -- same consumption form as the _vt_recv_by branch, replacing nothing (additive; sites in dropped_edges skipped, corrections ecosystem keeps precedence; fullspan tier gated behind --allow-heuristics per vrorg report 'consumption advice'; evidence array = 13 vr-nested chains, layer-1 M-entity class candidates -> AND-mask via _load_type_family_dict; anchors/vr_origin_edges.json, .omo/agents/vrorg/report.md)",
    "C2X": "compound this-offset fingerprints: function FN's traced-this accesses {(off,width,dir)} AND-matched against flat class layouts (>=3 distinct offsets, 1..8 candidates emitted) -> T-entity class-candidate mask (strict; evidence anchors/c18v2_compound_sigs.json, .omo/agents c18v2 v2)",
    "MW": "write-direction evidence for T: entities: (A) vfptr installs -- off==0 primary = ctor semantics, types=[C] single (parity with ctor_types/C4 EXACT, NO descendant widening; generator emits expanded [C]+desc only for off==col>0 own-column rows and MI col-match rows, verified at wiring); (B) pure-write this-offset fingerprints AND-matched vs layouts (strict; evidence anchors/mw_write_fingerprints.json)",
    "P5": "occupant param forms 5-8: PU6 lea-slot-addr-forwarded-to-call -> pointer-vocabulary mask from type_universe '*' tokens (HEURISTIC tier per pu5 report limitation #2: param-slot-as-scratch contamination mode; PU7/PU8 generator-side structural empty sets emit 0 rows; evidence anchors/pu5_forms.json; PU5 global-store eq edges of the same file wired separately via the EF-style bidirectional channel)",
    "SGN": "signedness discriminator: strict post-call / in-body insn windows (RETX semantics) prove int vs unsigned int of a value via cdq / idiv / sar vs shr(N>8) / jcc-signed vs jcc-unsigned consumption -- NARROWING evidence: types=[single] collapses [int, unsigned int] dual-candidate domains to one value, AND-merging with RA-family int evidence naturally (named SGN because SG is already taken by stack-slot granularity, SA-for-SP precedent; strict; evidence anchors/signedness_types.json, 1,120 recs = 1,100 dual-narrowed + 20 single-confirmed; .omo/agents/sgn/sgn_discriminator.py)",
    "G2": "GS site-args v2: full-library virtual-dispatch site push-argument ORIGIN types (gs-const-wide / gs-const01 / gs-str / gs-cons* rules, occupant_callarg guard) for GS:slot:k:root entities -- supersedes the narrow GX v1 pool with the whole-library site census (strict; evidence array of anchors/gs_site_args_v2.json, 10 recs; the 26 eq edges of the same file wired separately via the EF-style bidirectional channel, see the [G2] eq line)",
    "R1": "RA1 official source class evidence: strict-name bridge our Class::Method (or legacy Class_Method[_ADDR]) <-> RA1 class alias (case/underscore/'Class'-suffix tolerance) with unique owner (HEURISTIC tier per ra1 phase-1 pooled strata accuracy 0.859, hierarchy 91-94%; wide-domain filter: only T:FN with domain>8 emitted, 2 recs both in-domain; gate --allow-heuristics; evidence anchors/ra1_types.json; source CnC_Red_Alert EA official)",
    "V2K": "vera20k external oracle: 'Class::Method @ 0xADDR' / 'Class__Method @ 0xADDR' mined from vera20k crossref example contexts (FUN_/sub_/nullsub/j_ excluded), STRICT attribution (pattern address == vera entry addr or our function start) + top-frequency qualified name per address, class prefix canonized via class_name_align + canon universe (HEURISTIC tier per v20k pool accuracy 92.2%; gate --allow-heuristics; evidence anchors/vera20k_types.json, 16 recs)",
    "G3": "GS site-args v3: v2 machinery with the attach gate RELAXED (every `call [vtreg+off]` site in the full_export snapshot, slot=off/4) -- push-argument ORIGIN type evidence (gs-const01 1,256 / gs-const-wide 226 / gs-str 1, occupant_callarg guard) for GS:slot:k:root entities, same spelling as G2 (root 0x-prefixed upper hex; strict; evidence array of anchors/gs_site_args_v3.json, 1,483 recs, zero overlap with the 10-rec v2 pool; all-primitive types int/unsigned int/bool/char* with 'const char *'/'char *' normalized by _norm_ty; the file carries 0 edges, no eq channel wired)",
    "VR2": "VDRET virtual-dispatch return materialization: post-vcall EAX evidence (vdret-arith arithmetic-consumption int-family 164 / vdret-mread-0xOFF member-read class candidates via member_types lookup, ~70 recs) for EAX:FN:site entities (upper hex no 0x, EF/RA spelling; strict tier; evidence array of anchors/vdret_eax_edges.json, 234 recs; class tokens without a universe atom dropped per-token, MT/RD precedent); the 8,221 eq edges of the same file (EAX:FN:site == RET:FN via vdret-slot, RET spelling aligned with the RI family keys) wired separately via the EF-style bidirectional channel, see the [VR2] eq line",
    "CPI": "constructor-param init semantics over structural_truth vtable_install fns (1,398 scanned): cpi-const member-init constant typing (M:FN:this:0xOFF entities, 2,196 recs, types may carry [bool,int] dual values / [bool,char,unsigned char] etc.), cpi-m8/cpi-m16 width-typed inits (12 recs) -- strict binary facts; evidence array of anchors/ctor_param_inits.json, 2,208 recs; the 224 eq edges of the same file (cpi-minit P:FN:K == M:FN:this:0xOFF / cpi-base P:FN1:K == P:FN2:J base-ctor arg forwarding / cpi-gstore M == G:) wired separately via the EF-style bidirectional channel, see the [CPI] eq line",
    "IMP": "import return types: Win32/BINK SDK-contract return semantics of PROVEN import-call sites (form A `call ds:__imp_X` direct / form C `call reg` linear-basic-block back-scan <=6 caller-saved / <=24 callee-saved steps with IDA-annotation cross-check, disagreement dropped) -> EAX:FN:SITE ret entities typed (HANDLE/int/unsigned int/ptr words; RETX-style <=12-insn consumption window classifies first informative use: cdq=>{int}, ptr-deref=>{void*,char*,wchar_t*}, arith=>integer words, cmp/test null-check uninformative; void/uncertain APIs and universe-missing type words skipped) (strict, 100% deterministic contract, no guessing; evidence array of anchors/imp_ret_types.json, 3,170 recs via=imp-XXX; ent format matches RU/RA -- hex uppercase, no 0x)",
    "IM2": "import param types: parameter-side twin of IMP -- Win32/BINK SDK-contract PARAMETER semantics at proven import-call sites (form A `call ds:__imp_X` direct / form B IAT-range label / form C `call reg` linear back-scan with IDA-annotation agreement, machinery reused verbatim from .omo/agents/imp); pushed actual args collected backward (stdcall right-to-left, push nearest the call = param 0; walk stops at label/jump/ret/call, esp writes, `[esp]`-disp-0 rewrites) -> S:ADDR:NAME / P:FN:K / G:HEX / EAX:FN:SITE arg-origin entities typed (char*/wchar_t*/int/unsigned int per SDK signature; strict, 100% deterministic contract, no guessing; evidence array of anchors/imp2_param_types.json, 240 recs via=imp2-API-aK; ent S/G format aligned with C8/GI/CR, P/EAX aligned with RA/RU spelling)",
    "YVP": "YRpp virtual-function param types: per-class full primary-vtable reconstruction from YRpp headers (225 files, 583 classes parsed / 501 resolved; primary base = first declared base, MSVC single-primary layout; secondary COM-iface virtuals excluded by name set; override matching by (name, arity); slot numbering = vtable_slot_authority primary table) -> GS:slot:k:addr entities (strict tier; 8 emission gates: authority alignment / slot_count==len(seq) / non-dtor / arity-mismatch exclusion / own-addr-mismatch exclusion / vocab mapping / entity-level agreement / P-channel authority-placement agreement killing ICF-folded shared stubs; n=20 layered validation 20/20 incl intfam symbol pairs, full pinned n=411 semantic agreement 96.4% -- dominant divergence = YRpp 'int' vs solver 'unsigned int' spelling; evidence anchors/yrpp_vparams.json, 4,172 recs via=yrpp-param, same YRpp-header source as C22/C25)",
    "V2B": "vera20k round-2 wide-domain receiver types: same strict mining as V2K ('Class::Method @ 0xADDR' / 'Class__Method @ 0xADDR', FUN_/sub_/nullsub/j_ excluded, pattern addr == vera entry addr or our fn start, top-frequency qualified name per address, class prefix canonized via class_name_align + canon universe) with attribution widened from T-only to R:<addr>:ecx receiver entities (primary) + T:<addr> wide residual, v1-covered T excluded; wide-domain filter R/T domain > 8, pinned (domain=1) and narrow entities untouched (HEURISTIC tier per full-pool 615 accuracy 92.2%; gate --allow-heuristics; evidence anchors/vera20k_types_v2.json, 126 recs via=vera-rclass)",
}

REGS = {"eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp"}
DATA_LO, DATA_HI = 0x812000, 0xB7A000          # .data（AGENTS.md）

FACTS_PATH = "anchors/minclass_binary_facts.json"
FACTS_SRC = "decompile-results/full_export/src/*.cpp"


def jload(path, default=None):
    p = path if os.path.isabs(path) else os.path.join(ROOT, path)
    if not os.path.exists(p):
        return default
    with io.open(p, "rb") as fh:
        blob = fh.read()
    _IO_STATS["files"] += 1
    _IO_STATS["bytes"] += len(blob)
    if _orjson is not None:
        return _orjson.loads(blob)
    return json.loads(blob.decode("utf-8"))


# ---- perf 打点（speed 轮路径 3）：阶段耗时观测，零语义影响 ----
# 每次真实运行自动输出 [perf] 分段表；不改变任何求解行为。
_IO_STATS = {"files": 0, "bytes": 0}
_PERF_T0 = time.perf_counter()
_PERF_MARKS = []          # [(stage, perf_counter)]


def perf_mark(stage):
    _PERF_MARKS.append((stage, time.perf_counter()))


def perf_report():
    """打印 [perf] 分段表（自进程启动起算的累计时刻 → 相邻差分 = 阶段耗时）。"""
    if not _PERF_MARKS:
        return
    print("[perf] io: %d json files, %.1f MB parsed" % (_IO_STATS["files"],
                                                        _IO_STATS["bytes"] / 1e6), flush=True)
    prev = _PERF_T0
    for stage, ts in _PERF_MARKS:
        print("[perf] %-12s %8.1fs (cum %8.1fs)" % (stage, ts - prev, ts - _PERF_T0),
              flush=True)
        prev = ts


def hx(v, default=None):
    if isinstance(v, int):
        return v
    if not isinstance(v, str):
        return default
    s = v.strip().lower()
    if s.startswith("0x"):
        s = s[2:]
    try:
        return int(s, 16)
    except ValueError:
        return default


class UF:
    def __init__(self):
        self.p = {}

    def find(self, x):
        p = self.p
        if x not in p:
            p[x] = x
            return x
        r = x
        while p[r] != r:
            r = p[r]
        while p[x] != r:
            p[x], x = r, p[x]
        return r

    def union(self, a, b):
        ra, rb = self.find(a), self.find(b)
        if ra == rb:
            return False
        if ra > rb:
            ra, rb = rb, ra
        self.p[rb] = ra
        return True


# ==========================================================================
# 1. 类宇宙
# ==========================================================================
def build_universe(use_evidence=True, prune_dead=False):
    db = jload("anchors/class_db.json")["classes"]
    if prune_dead:
        _dead = set(jload("anchors/dead_classes.json", []) or [])
        _before = len(db)
        db = {k: v for k, v in db.items() if k not in _dead}
        print("[universe] pruned dead classes: %d -> %d" % (_before, len(db)), flush=True)
    lay = jload("tools/class_layouts.json")
    align = jload("anchors/class_name_align.json", {})
    malias = jload("anchors/mangled_alias.json", {})
    r2c = {k: v["canon"] for k, v in (align.get("rtti_to_canon") or {}).items()}

    # ---- 二进制验证类宇宙（用户指令 2026-11-02）----
    # 验证法：gamemd.exe 文件字节包含 ".?AV<名>@@"（RTTI type descriptor 是编译器
    # 生成的 ASCII，与我们/IDA 后来的任何命名无关）。三类处置：
    #   (a) dead 表里但二进制存在 -> 恢复（当初被"无函数证据"启发式误杀）；
    #   (b) class_db 完全缺失 -> 新增（RTTI 证明存在，只是从未进宇宙）；
    #   (c) 排序：新增/恢复 最前，二进制验证过的活类次之，未验证的往后靠
    #       （无名类可能只是没有命名而不是没有解出 —— 候选枚举/贪心平局时优先真类）。
    _bin_uni = jload("anchors/universe_binary_classes.json", {})
    _restored = _added = 0
    if _bin_uni:
        _full_db = jload("anchors/class_db.json")["classes"]
        for _nm in (_bin_uni.get("restore_from_dead") or []):
            if _nm not in db and _nm in _full_db:
                db[_nm] = _full_db[_nm]
                _restored += 1
        for _nm in (_bin_uni.get("add_new") or []):
            if _nm not in db:
                db[_nm] = _full_db.get(_nm) or {}
                _added += 1
        _ver = [c for c in (_bin_uni.get("verified_alive") or []) if c in db]
        _front = [c for c in ((_bin_uni.get("add_new") or []) + (_bin_uni.get("restore_from_dead") or []))
                  if c in db]
        _rest = [c for c in db if c not in set(_front) | set(_ver)]
        db = {c: db[c] for c in (_front + _ver + _rest)}
        print("[universe] binary-verified: restored=%d added=%d verified_first=%d unverifiable_last=%d"
              % (_restored, _added, len(_ver), len(_rest)), flush=True)

    names = list(db.keys())
    # ---- 类型宇宙扩展（用户裁决：类+指针+数组+基元共同张成解空间）----
    _n_cls_only = len(names)
    try:
        _type_extra = [t for t in (jload("anchors/type_universe.json", {}) or {}).get("types") or []
                       if t not in db]
        for _t in _type_extra:
            db[_t] = {}
        if _type_extra:
            names = names + _type_extra
            print("[universe] +type vocabulary: %d (primitives/arrays/pointers join the space)"
                  % len(_type_extra), flush=True)
    except Exception:
        pass
    _CLASSMASK = (1 << _n_cls_only) - 1
    idx = {nm: i for i, nm in enumerate(names)}
    n = len(names)

    alias = {}
    for k in names:
        alias[k] = k
    for rn, rec in (align.get("rtti_to_canon") or {}).items():
        c = rec.get("canon")
        if c in idx and rn not in alias:
            alias[rn] = c
    for k, v in (malias or {}).items():
        if isinstance(v, str) and v in idx and k not in alias:
            alias[k] = v
        elif isinstance(v, dict):
            for cand in ("canon", "canonical", "name"):
                if v.get(cand) in idx and k not in alias:
                    alias[k] = v[cand]
                    break

    def resolve(name):
        if not isinstance(name, str):
            return None
        s = name.strip()
        if not s:
            return None
        if s in idx:
            return idx[s]
        if s in alias:
            return idx[alias[s]]
        t = s
        for _ in range(8):
            if t in idx:
                return idx[t]
            if t in alias:
                return idx[alias[t]]
            if t.endswith("@"):
                t = t[:-1]
                continue
            break
        if s.startswith("?$"):
            base = s[2:].split("@", 1)[0]
            if base in idx:
                return idx[base]
        return None

    members = [dict() for _ in range(n)]
    layout_size = [None] * n
    has_layout = [False] * n
    for i, c in enumerate(names):
        recs = [c] + [r for r in (db[c].get("rtti_names") or []) if r != c]
        cand = [r for r in recs if r in lay] + \
               [r2c[r] for r in recs if r in r2c and r2c[r] in lay]
        best = None
        for r in cand:
            o = lay[r].get("offsets") or {}
            if best is None or len(o) > len(best[1]):
                best = (r, o, lay[r].get("size"))
        if best:
            has_layout[i] = True
            if isinstance(best[2], int):
                layout_size[i] = best[2]
            for k, rec in (best[1] or {}).items():
                try:
                    off = int(str(k), 10)
                except ValueError:
                    continue
                w = rec.get("size") if isinstance(rec, dict) else None
                members[i][off] = int(w) if isinstance(w, int) and w > 0 else None

    # ---- 模板实例继承基模板的 offset 0（vfptr）----
    # 实测：全部 125 个 VectorClass_* 实例的布局缺 offset 0，而其基模板 VectorClass
    # 有 (0,4)；于是 C2 唯一钉到的类被 C1 以"缺 offset 0"排除，制造 290 个假冲突。
    # 只补 offset 0（多态对象首成员），不搬其它成员，避免掩盖真实布局错误。
    _idx_by_name = {nm: i for i, nm in enumerate(names)}
    n_tmpl0 = 0
    for i, c in enumerate(names):
        if "_" not in c or 0 in members[i]:
            continue
        parts = c.split("_")
        base_i = None
        for k in range(len(parts) - 1, 0, -1):
            pfx = "_".join(parts[:k])
            if pfx in _idx_by_name:
                base_i = _idx_by_name[pfx]
                break
        if base_i is None or 0 not in members[base_i]:
            continue
        members[i][0] = members[base_i][0]
        n_tmpl0 += 1
    print("[layout] template instances given base offset0 (vfptr): %d" % n_tmpl0, flush=True)

    size = [None] * n
    for i in range(n):
        s = layout_size[i]
        if s is None:
            s = db[names[i]].get("size")
        size[i] = int(s) if isinstance(s, int) else None

    # ---- 二进制访问证据（observed extent 是尺寸下界，非 sizeof）----
    eff_size = list(size)
    n_ev = 0
    ev_root = ((jload("anchors/layout_evidence.json", {}) or {}).get("classes") or {}) \
        if use_evidence else {}
    for cls, rec in ev_root.items():
        i = resolve(cls)
        if i is None:
            continue
        ext = rec.get("observed_extent")
        if not isinstance(ext, int) or ext <= 0:
            continue
        n_ev += 1
        for ent in rec.get("extra_offsets") or []:
            try:
                off = int(ent["off"])
                w = int(ent.get("width") or 4)
            except (KeyError, TypeError, ValueError):
                continue
            if w <= 0:
                continue
            prev = members[i].get(off)
            members[i][off] = w if not isinstance(prev, int) or prev <= 0 else max(prev, w)
        cur = eff_size[i]
        eff_size[i] = ext if cur is None else max(cur, ext)

    rtti_base = jload("anchors/rtti_base_arrays.json", {})

    # RTTI 基类名深度解析：??_R2 的基类条目大量是修饰名（??_R1A@?0A@A@?$VectorClass@...），
    # 简单 resolve() 只覆盖 54.4%；深度解析（剥 RTTI 前缀 / ?$模板名 / 模板实参）到 67.5%，
    # 实测 +217 条基类链接（含多继承次基类）。仍不可解析者 = 不在本宇宙的类
    # （PowerClass / GScreenClass / IUnknown / IPersist ...），如实保留为未知。
    _alias_map = {}
    try:
        for _ak, _av in (jload("anchors/mangled_alias.json", {}) or {}).items():
            if isinstance(_av, str):
                _alias_map[_ak] = _av
            elif isinstance(_av, dict) and _av.get("canon"):
                _alias_map[_ak] = _av["canon"]
    except Exception:
        _alias_map = {}

    def _deep_resolve(_nm, _d=0):
        if _nm is None or _d > 3:
            return None
        _s = str(_nm)
        _r = resolve(_s)
        if _r is not None:
            return _r
        if _alias_map.get(_s):
            _r = resolve(_alias_map[_s])
            if _r is not None:
                return _r
        _m = re.match(r"^\?\$([A-Za-z_]\w*)@", _s)
        if _m:
            _r = resolve(_m.group(1))
            if _r is not None:
                return _r
            for _a in _s.split("@")[1:]:
                _mm = re.match(r"^(?:PAV|PBV|PA|PB|V|U|H|D|F|G|J|N|C)?([A-Z]\w+)$", _a)
                if _mm:
                    _r = resolve(_mm.group(1))
                    if _r is not None:
                        return _r
            return None
        _m = re.match(r"^([A-Z]\w+?)@@", _s)
        if _m:
            return resolve(_m.group(1))
        _m = re.match(r"^\?\?_R1A@[^@]*@[^@]*@(.*)$", _s)
        if _m:
            return _deep_resolve(_m.group(1), _d + 1)
        return None

    _deep_links = 0
    anc = [set([i]) for i in range(n)]
    for i, c in enumerate(names):
        for a in db[c].get("full_ancestors") or []:
            j = resolve(a)
            if j is not None:
                anc[i].add(j)
        for rn in (db[c].get("rtti_names") or []) + [c]:
            for a in rtti_base.get(rn) or []:
                j = resolve(a)
                if j is None:
                    j = _deep_resolve(a)
                    if j is not None and j not in anc[i]:
                        _deep_links += 1
                if j is not None:
                    anc[i].add(j)
        for r in [c] + list(db[c].get("rtti_names") or []) + \
                 [r2c[x] for x in (db[c].get("rtti_names") or []) if x in r2c]:
            rec = lay.get(r)
            p = rec.get("parent") if isinstance(rec, dict) else None
            j = resolve(p) if p else None
            if j is not None:
                anc[i].add(j)
    changed = True
    while changed:
        changed = False
        for i in range(n):
            add = set()
            for a in anc[i]:
                if a != i:
                    add |= anc[a]
            if not add <= anc[i]:
                anc[i] |= add
                changed = True
    desc = [set() for _ in range(n)]
    for i in range(n):
        for a in anc[i]:
            desc[a].add(i)

    # MI 边自检：rtti_base_arrays 的多基链必须完整进入 desc。
    # X152 曾怀疑 Surface→DSurface 缺失导致"存在公共后代却判空域"——在此可观测。
    def _has_desc(base, dc):
        ib, idc = resolve(base), resolve(dc)
        return bool(ib is not None and idc is not None and idc in desc[ib])

    mi_probe = {("%s->%s" % (b, d)): _has_desc(b, d)
                for (b, d) in (("Surface", "DSurface"), ("XSurface", "DSurface"),
                               ("ObjectClass", "UnitClass"),
                               ("AbstractClass", "TechnoClass"))}

    vtables = [set() for _ in range(n)]
    slot_count = [None] * n
    for i, c in enumerate(names):
        for va in (db[c].get("vtables") or {}):
            v = hx(va)
            if v is not None:
                vtables[i].add(v)
        sc = db[c].get("vtable_slot_count")
        if isinstance(sc, int):
            slot_count[i] = sc

    auth = jload("anchors/vtable_slot_authority.json", {})
    slot_set = [None] * n
    auth_hit = 0
    for k, rec in auth.items():
        i = resolve(k)
        if i is None:
            continue
        auth_hit += 1
        ss = set()
        for sk in (rec.get("slots") or {}):
            try:
                ss.add(int(sk))
            except (TypeError, ValueError):
                pass
        slot_set[i] = ss if slot_set[i] is None else (slot_set[i] | ss)
        sc = rec.get("slot_count")
        if isinstance(sc, int):
            slot_count[i] = sc          # authority（二进制 .rdata 实测）优先于 class_db
        v = hx(rec.get("vtable"))
        if v is not None:
            vtables[i].add(v)

    # ---- 二进制 vtable 范围证据（.rdata text-run 实测，2026-10-29）----
    # anchors/vtable_extent_evidence.json: 每类 primary vtable 的真实槽位数
    # （从 ??_7/??_R4 符号地址起连续 .text 指针计数，RTTI COL 边界止）。
    # slot_set |= {0..extent-1}（C3 成员资格）；slot_count = extent（C6，
    # 二进制实测优先于 authority 的 claimed 计数）。
    ext_ev = jload("anchors/vtable_extent_evidence.json", {}) or {}
    n_ext = 0
    for cls, pc in (ext_ev.get("per_class") or {}).items():
        i = resolve(cls)
        if i is None:
            continue
        pri = pc.get("primary")
        if not pri:
            continue
        ext = pri.get("extent")
        if not isinstance(ext, int) or ext <= 0:
            continue
        n_ext += 1
        ss = slot_set[i] if slot_set[i] is not None else set()
        ss |= set(range(ext))
        slot_set[i] = ss
        slot_count[i] = ext

    return {
        "db": db, "names": names, "idx": idx, "resolve": resolve, "n": n,
        "classmask": _CLASSMASK,
        "members": members, "has_layout": has_layout, "size": size,
        "eff_size": eff_size, "n_evidence": n_ev,
        "anc": anc, "desc": desc, "vtables": vtables, "slot_count": slot_count,
        "slot_set": slot_set, "n_layout": sum(1 for x in has_layout if x),
        "n_auth": auth_hit, "n_extent": n_ext,
        "n_desc_edges": sum(len(d) for d in desc), "desc_mi_probe": mi_probe,
    }


# ==========================================================================
# 2. 二进制事实（C4/C5/C6/C8 与寄存器等式链）
# ==========================================================================
RE_FN = re.compile(r"^// ([^\n]+)\n// addr=0x([0-9A-Fa-f]+) size=0x([0-9A-Fa-f]+)$", re.M)
RE_PROTO = re.compile(r"^// proto: (.*)$", re.M)
RE_LINE = re.compile(r"^//   ([0-9a-f]{6,8}): (.*)$", re.M)
RE_MOVVT = re.compile(
    r"mov\s+(?:dword ptr )?\[([a-z]{2,3})(?:\+([0-9A-Fa-f]+h?))?\],\s*offset (\?\?_7\S+)$")
RE_MOVVT_G = re.compile(
    r"mov\s+(?:dword ptr )?\[([^\]]+)\],\s*offset (\?\?_7\S+)$")
RE_MOVRR = re.compile(r"mov\s+([a-z]{2,3}),\s*([a-z]{2,3})$")
RE_WRREG = re.compile(
    r"(?:mov|xor|add|sub|lea|pop|inc|dec|and|or|shl|shr|sar|imul|neg|not)\s+([a-z]{2,3})\b")
RE_JMP = re.compile(r"^(j[a-z]+|loop[a-z]*)\s+(?:short\s+|near\s+)?([A-Za-z_][\w]*)$")
RE_LABEL = re.compile(r"^(?:loc|def|unk)_([0-9A-Fa-f]{6,8})$")
RE_RET = re.compile(r"^retn?\b")


def vt_sym_to_name(sym):
    s = sym[4:] if sym.startswith("??_7") else sym
    s = re.sub(r"(_\d+)?6B@$", "", s)
    return s


def build_cfg(lines):
    """lines: [(addr, ins)] → (blocks: [(start, [(addr,ins)])], succ: {start: [start]})."""
    if not lines:
        return [], {}
    addrs = [a for a, _ in lines]
    aset = set(addrs)
    succ_i = {}
    targets = set()
    for i, (a, ins) in enumerate(lines):
        nxt = addrs[i + 1] if i + 1 < len(lines) else None
        m = RE_JMP.match(ins)
        if m:
            tgt = m.group(2)
            lm = RE_LABEL.match(tgt)
            s = set()
            if lm:
                t = int(lm.group(1), 16)
                if t in aset:
                    s.add(t)
                    targets.add(t)
            if not ins.startswith("jmp") and nxt is not None:
                s.add(nxt)
            succ_i[a] = s
        elif RE_RET.match(ins) or ins.startswith("jmp"):
            succ_i[a] = set()
        else:
            succ_i[a] = {nxt} if nxt is not None else set()
    leaders = {addrs[0]} | targets
    for i, (a, ins) in enumerate(lines):
        if (RE_JMP.match(ins) or ins.startswith("call") or RE_RET.match(ins)) \
                and i + 1 < len(lines):
            leaders.add(addrs[i + 1])
    blocks = []
    cur = []
    for a, ins in lines:
        if a in leaders and cur:
            blocks.append(cur)
            cur = []
        cur.append((a, ins))
    if cur:
        blocks.append(cur)
    start2idx = {b[0][0]: i for i, b in enumerate(blocks)}
    succ = {}
    for b in blocks:
        last_a = b[-1][0]
        succ[b[0][0]] = [start2idx[x] for x in succ_i.get(last_a, ()) if x in start2idx]
    return blocks, succ


def merge_state(a, b):
    """寄存器状态汇合。值为 (entity_id, clean) 元组或 None：
    两路同源但洁净度不一 → 保留源、置污染；异源或单侧无定义 → None。"""
    if a is None:
        return dict(b) if b else {}
    if b is None:
        return dict(a)
    out = {}
    for r in set(a) | set(b):
        va, vb = a.get(r), b.get(r)
        if va == vb:
            out[r] = va
        elif va is not None and vb is not None and va[0] == vb[0]:
            out[r] = (va[0], False)
        else:
            out[r] = None
    return out


def transfer(st, ins, addr):
    """就地更新寄存器状态（值为 (entity_id, clean) 元组或 None）"""
    if ins.startswith("call"):
        for r in ("eax", "ecx", "edx"):
            st[r] = None
        for r, v in st.items():
            # 跨 call 仍存活的到达定义（callee-saved 寄存器）→ 污染（等式规则 3）
            if v is not None and v[1]:
                st[r] = (v[0], False)
        return
    m = RE_MOVRR.match(ins)
    if m:
        d, s = m.group(1), m.group(2)
        st[d] = st.get(s)
        return
    m = re.match(r"mov\s+([a-z]{2,3}),\s*offset\s+([A-Za-z_0-9]+)$", ins)
    if m:
        st[m.group(1)] = None
        return
    m = RE_WRREG.match(ins)
    if m:
        st[m.group(1)] = None


def parse_export(interest):
    """interest: {(call_addr, reg)} —— 需要解析来源的 CALL_ARG 站点"""
    files = sorted(glob.glob(os.path.join(ROOT, FACTS_SRC)))
    if not files:
        return None
    interest_by_addr = collections.defaultdict(set)
    for (a, r) in interest:
        interest_by_addr[a].add(r)
    interest_addrs = sorted(interest_by_addr)
    allocs, installs, ginst, ctor_raw, sym2addr, reg_links = [], [], [], [], {}, []
    t0 = time.time()
    for path in files:
        txt = io.open(path, encoding="utf-8", errors="replace", newline="").read().replace("\r\n", "\n")
        for b in re.split(r"^// =+$", txt, flags=re.M):
            m = RE_FN.search(b)
            if not m:
                continue
            name = m.group(1).strip()
            fn = int(m.group(2), 16)
            sym2addr[name] = fn
            sym2addr[name.replace("::", "__")] = fn
            pm = RE_PROTO.search(b)
            proto = pm.group(1) if pm else ""
            lines = []
            for lm in RE_LINE.finditer(b):
                ins = lm.group(2).split(";", 1)[0].strip()
                lines.append((int(lm.group(1), 16), ins))
            if not lines:
                continue
            # ---- operator new / malloc 站点 ----
            for i, (a, ins) in enumerate(lines):
                if not ins.startswith("call "):
                    continue
                tgt = ins[5:].strip()
                if not ("YAPAXI" in tgt or tgt == "_malloc" or "??_U" in tgt):
                    continue
                size = None
                if i > 0:
                    prev = lines[i - 1][1]
                    mm = re.match(r"push\s+([0-9A-Fa-f]+h?)$", prev)
                    if mm:
                        sv = mm.group(1)
                        size = int(sv[:-1], 16) if sv.endswith("h") else int(sv, 10)
                    else:
                        mm = re.match(r"push\s+([a-z]{2,3})$", prev)
                        if mm:
                            reg = mm.group(1)
                            for j in range(i - 2, max(-1, i - 10), -1):
                                ins2 = lines[j][1]
                                m2 = re.match(r"mov\s+%s,\s*([0-9A-Fa-f]+h?)$" % reg, ins2)
                                if not m2:
                                    m2 = re.match(r"lea\s+%s,\s*\[([0-9A-Fa-f]+h?)\]$" % reg, ins2)
                                if m2:
                                    sv = m2.group(1)
                                    try:
                                        size = int(sv[:-1], 16) if sv.endswith("h") else int(sv, 10)
                                    except ValueError:
                                        size = None
                                    break
                                if re.match(r"mov\s+%s\b" % reg, ins2):
                                    break
                if size is None or not (0 < size <= 0x40000):
                    continue
                dest = None
                for j in range(i + 1, min(i + 6, len(lines))):
                    mm = re.match(r"mov\s+([a-z]{2,3}),\s*eax$", lines[j][1])
                    if mm:
                        dest = mm.group(1)
                        break
                allocs.append((fn, a, size, dest))
            # ---- vtable 安装（保守 ecx 别名追踪）----
            aliases = {"ecx"} if "__thiscall" in proto else set()
            prev_mov_ecx = None
            for a, ins in lines:
                if ins.startswith("call"):
                    if prev_mov_ecx:
                        ctor_raw.append((fn, a, prev_mov_ecx[1], ins[5:].strip()))
                    prev_mov_ecx = None
                    aliases -= {"eax", "ecx", "edx"}
                    continue
                mm = RE_MOVVT.match(ins)
                if mm:
                    reg, off, sym = mm.group(1), mm.group(2), mm.group(3)
                    o = 0
                    if off:
                        o = int(off[:-1], 16) if off.endswith("h") else int(off, 16)
                    if reg in aliases:
                        installs.append((fn, a, o, vt_sym_to_name(sym)))
                    prev_mov_ecx = None
                    continue
                mm = RE_MOVVT_G.match(ins)
                if mm:
                    dst, sym = mm.group(1).strip(), mm.group(2)
                    if not re.match(r"^[a-z]{2,3}(?:\+.*)?$", dst):
                        ginst.append((fn, a, dst, vt_sym_to_name(sym)))
                    prev_mov_ecx = None
                    continue
                mm = RE_MOVRR.match(ins)
                if mm:
                    d, s = mm.group(1), mm.group(2)
                    if s in aliases:
                        aliases.add(d)
                    else:
                        aliases.discard(d)
                    prev_mov_ecx = (a, s) if d == "ecx" else None
                    continue
                mm = RE_WRREG.match(ins)
                if mm:
                    aliases.discard(mm.group(1))
                prev_mov_ecx = None
            # ---- 寄存器到达定义（仅对该函数内的 CALL_ARG 站点做）----
            # interest 以 (addr,reg) 给出；用全局地址区间判定本函数是否命中
            _i = bisect.bisect_left(interest_addrs, lines[0][0])
            hits = _i < len(interest_addrs) and interest_addrs[_i] <= lines[-1][0]
            if hits:
                blocks, succ = build_cfg(lines)
                if blocks:
                    npred = collections.Counter()
                    for sis in succ.values():
                        for si in sis:
                            npred[si] += 1
                    in_state = [None] * len(blocks)
                    in_state[0] = ({"ecx": ("T:%X" % fn, True)}
                                   if "__thiscall" in proto else {})
                    work = [0]
                    while work:
                        bi = work.pop()
                        st = dict(in_state[bi]) if in_state[bi] else {}
                        for (a, ins) in blocks[bi]:
                            transfer(st, ins, a)
                        for si in succ.get(blocks[bi][0][0], ()):
                            merged = merge_state(in_state[si], st)
                            if merged and npred.get(si, 0) >= 2:
                                # 控制流汇合点：任何穿越它的到达定义 → 污染（等式规则 3）
                                merged = {r: ((v[0], False) if v else v)
                                          for r, v in merged.items()}
                            if in_state[si] is None or merged != in_state[si]:
                                in_state[si] = merged
                                work.append(si)
                    # 回放块，在 interest 站点记录唯一到达值 + 洁净标志
                    for bi, blk in enumerate(blocks):
                        st = dict(in_state[bi]) if in_state[bi] else {}
                        for (a, ins) in blk:
                            regs = interest_by_addr.get(a)
                            if regs:
                                for reg in sorted(regs):
                                    v = st.get(reg)
                                    if v is not None and v[0] is not None:
                                        reg_links.append(
                                            (a, reg, v[0], 1 if v[1] else 0))
                            transfer(st, ins, a)
    # ---- 解析 call 目标 ----
    ctor_calls = []
    for fn, a, reg, tgt in ctor_raw:
        t = sym2addr.get(tgt)
        if t is None:
            mm = re.match(r"^(?:sub_)?([0-9A-Fa-f]{6,8})$", tgt)
            if mm:
                t = int(mm.group(1), 16)
        if t is not None:
            ctor_calls.append((fn, a, reg, t))
    return {
        "meta": {
            "generated_by": "minclass_solver.py --build-facts",
            "source": FACTS_SRC, "files": len(files),
        },
        "alloc_sites": allocs,
        "this_installs": installs,
        "global_installs": ginst,
        "ctor_calls": ctor_calls,
        "reg_links": reg_links,
    }


def load_or_build_facts(rebuild, interest):
    path = os.path.join(ROOT, FACTS_PATH)
    if os.path.exists(path) and not rebuild:
        d = jload(FACTS_PATH)
        if d:
            return d
    d = parse_export(interest)
    if d is None:
        return None
    with io.open(path, "w", encoding="utf-8") as fh:
        json.dump(d, fh, ensure_ascii=False, separators=(",", ":"))
    return d


# ==========================================================================
# 3. 实体命名
# ==========================================================================
GLOBAL_NAME2ADDR = None


def global_addr(tok):
    global GLOBAL_NAME2ADDR
    tok = tok.strip()
    if tok.startswith("0x"):
        a = hx(tok)
        return a if a is not None and DATA_LO <= a < DATA_HI else None
    m = re.search(r"([0-9A-Fa-f]{6,8})$", tok)
    if m and re.search(r"(dword|byte|word|stru|off|qword|flt)_", tok):
        a = int(m.group(1), 16)
        if DATA_LO <= a < DATA_HI:
            return a
    if GLOBAL_NAME2ADDR is None:
        GLOBAL_NAME2ADDR = {}
        for p in ("anchors/ida_global_types.json", "anchors/global_types.json"):
            d = jload(p, {}) or {}
            for a, rec in d.items():
                aa = hx(a)
                nm = (rec or {}).get("name")
                if aa is not None and nm and DATA_LO <= aa < DATA_HI and nm not in GLOBAL_NAME2ADDR:
                    GLOBAL_NAME2ADDR[nm] = aa
    return GLOBAL_NAME2ADDR.get(tok)


def ent_id(raw, fn=None):
    if not isinstance(raw, str):
        return None
    s = raw.strip()
    # 函数返回值：`0x004010A0.return`（地址后无冒号，必须在通用地址解析之前处理）
    if s.endswith(".return"):
        _ar = hx(s[:-len(".return")])
        return ("RET:%X" % _ar) if _ar is not None else None
    if s in REGS:
        return ("R:%X:%s" % (fn, s)) if fn is not None else None
    if s.startswith("stack_+"):
        return ("S:%X:%s" % (fn, s[6:])) if fn is not None else None
    if s.startswith("vtable_slot_"):
        a = hx(s[len("vtable_slot_"):].split(":")[0])
        return ("V:%X" % a) if a is not None else None
    if s.startswith("offset "):
        g = global_addr(s[7:].strip())
        return ("G:%X" % g) if g is not None else None
    if s.startswith("0x") or re.match(r"^[0-9A-Fa-f]{6,8}:", s):
        a = hx(s.split(":")[0])
        if a is None:
            return None
        if ".member(" in s:
            off = s.split(".member(", 1)[1].rstrip(")")
            which = "this"
            if "::param" in s:
                which = "p" + s.split("::param", 1)[1].split(".")[0]
            return "M:%X:%s:%s" % (a, which, off)
        if s.endswith(".return"):
            return "RET:%X" % a        # 函数返回值也是一等变量（返回值类型未知时可求解）
        if s.endswith(":this"):
            return "T:%X" % a
        if "::param" in s:
            return "P:%X:%s" % (a, s.split("::param", 1)[1])
    return None


# ==========================================================================
# 4. 主流程
# ==========================================================================
# ---- 结果缓存（checkpoint）------------------------------------------------
# 输入不变时跳过全量求解，直接把上次 dump 产物复制回 anchors/。
#   键 = SHA256(输入锚点清单+快速指纹 + 求解器源码哈希 + 全部参数)
#   位 = .omo/solve_cache/{strict|heur}/<key[:16]>/
#   环境变量 MINCLASS_NO_CACHE=1 强制跳过缓存（读写都不做）。
CACHE_ROOT = os.path.join(ROOT, ".omo", "solve_cache")

# anchors/ 下的求解器 dump 产物——是输出不是输入，不进缓存键
_CACHE_OUTPUT_BASENAMES = {
    "minclass_result.json",
    "minclass_domains.json",
    "minclass_clusters.json",
    "minclass_assignments.json",
    "minclass_conflicts.json",
    "minclass_conflict_resolution.json",
    "c10_contradicted_entities.json",
    "derived_layouts.json",
}

# 缓存里保存/恢复的全部输出产物（存在才复制）
_CACHE_ARTIFACTS = [
    "minclass_result.json",
    "minclass_domains.json",
    "minclass_clusters.json",
    "minclass_assignments.json",
    "minclass_conflicts.json",
    "minclass_conflict_resolution.json",
    "c10_contradicted_entities.json",
    "derived_layouts.json",
]


# ---- 增量求解检查点（用户裁决架构 2026-11-05）--------------------------
# .omo/solve_checkpoint.json：{每实体域掩码(编码后), post-neutralization 边集, 受约束簇域,
# K_min 解(chosen/assign), 输入锚点指纹, vars(args), universe 指纹}。增量模式以此为热启动
# 起点；任何不一致（域变宽/边删除/新空域/步数超限/单遍不动点验证失败）一律回退全量路径
# （fail-closed：增量结果必须与全量逐字节一致，否则不采用）。
# 掩码编码：0→"0"；bit_count<=48→"i:idx,idx,..."；否则 "x:%x"。缺省条目=FULL。
CKPT_PATH = os.path.join(ROOT, ".omo", "solve_checkpoint.json")
_CKPT_STATE = {"data": None, "loaded": False}      # 惰性加载缓存（每进程一次）
_MEMO_MISS = object()                               # 簇族掩码 memo 哨兵

_CACHE_BIG_FILE = 10 * 1024 * 1024   # 10MB：之上只做 (size, mtime) 快速指纹


def _file_fingerprint(path):
    """输入指纹：>10MB 用 (size, mtime)；≤10MB 用全内容 SHA256。

    小文件内容哈希免疫 mtime 精度/touch 类扰动（防假 HIT）；anchors/ 下有
    大文件（class_db 16MB、raw_constraints 更大），全文件哈希代价比指纹高
    几个数量级——大文件 (size, mtime) 足以区分内容变化。
    """
    st = os.stat(path)
    h = hashlib.sha256()
    if st.st_size > _CACHE_BIG_FILE:
        h.update(("big:%d|%d" % (st.st_size, int(st.st_mtime))).encode("ascii"))
    else:
        with io.open(path, "rb") as fh:
            h.update(fh.read())
        h.update(("|small:%d" % st.st_size).encode("ascii"))
    return h.hexdigest()


def _cache_input_parts(args):
    """构成缓存键的输入清单：anchors/*.json（排除输出产物）+ 非 anchors 输入。"""
    parts = []
    for p in sorted(glob.glob(os.path.join(ROOT, "anchors", "*.json"))):
        base = os.path.basename(p)
        if base in _CACHE_OUTPUT_BASENAMES:
            continue          # 输出产物不是输入
        parts.append("anchors/" + base + ":" + _file_fingerprint(p))
    for rp in ("tools/class_layouts.json",
               "tools/type_infer/constraints/raw_constraints.json"):
        p = os.path.join(ROOT, rp)
        if os.path.exists(p):
            parts.append(rp + ":" + _file_fingerprint(p))
    if not args.no_extra_callargs:
        p = (args.extra_callargs if os.path.isabs(args.extra_callargs)
             else os.path.join(ROOT, args.extra_callargs))
        if os.path.exists(p):
            parts.append(args.extra_callargs + ":" + _file_fingerprint(p))
    return parts


def _compute_cache_key(args, input_parts=None):
    src_path = os.path.abspath(__file__)
    with io.open(src_path, "rb") as fh:
        src_hash = hashlib.sha256(fh.read()).hexdigest()
    blob = json.dumps({
        "v": 1,
        "solver_sha256": src_hash,
        "args": {k: v for k, v in sorted(vars(args).items())},
        "inputs": _cache_input_parts(args) if input_parts is None else input_parts,
    }, sort_keys=True)
    return hashlib.sha256(blob.encode("utf-8")).hexdigest()


def _cache_key_dir(args, key):
    sub = "heur" if args.allow_heuristics else "strict"
    return os.path.join(CACHE_ROOT, sub, key[:16])


def _cache_write(args, key):
    """求解成功后调用：复制全部 dump 产物 + key.json 到缓存目录。

    任何 OSError 都不允许向上抛——缓存写入失败绝不能毁掉一次 30+ 分钟
    求解的收尾输出（只打印告警，产物仍在 anchors/）。瞬态文件系统错误
    （实测 2026-11-05 全量跑 makedirs 阶段裸 FileNotFoundError，事后手动
    重现 0.4s 成功）重试一次再放弃。
    """
    keydir = _cache_key_dir(args, key)
    for _attempt in range(2):
        try:
            if not os.path.isdir(keydir):
                try:
                    os.makedirs(keydir, exist_ok=True)
                except OSError:
                    # 长跑进程末段 stat/mkdir 层曾自相矛盾（isdir=False 而文件写探针成功、
                    # makedirs 报幽灵 filename='T:'）——目录存在性不可信时用文件写探针仲裁：
                    # 能写入即目录真实存在且可写，继续。
                    try:
                        _cy = os.path.join(keydir, ".__canary__")
                        with io.open(_cy, "w") as _f_c:
                            _f_c.write("x")
                        os.remove(_cy)
                    except OSError:
                        raise
            copied = []
            for name in _CACHE_ARTIFACTS:
                src = os.path.join(ROOT, "anchors", name)
                if os.path.exists(src):
                    shutil.copyfile(src, os.path.join(keydir, name))
                    copied.append(name)
            with io.open(os.path.join(keydir, "key.json"), "w", encoding="utf-8") as fh:
                json.dump({"key": key, "args": vars(args), "artifacts": copied,
                           "written_at": time.time()}, fh, indent=1, ensure_ascii=False)
            # 只保留最近 2 个键目录（assignments 单文件可达 400MB，防膨胀）
            try:
                croot = os.path.dirname(keydir)
                entries = []
                for d in os.listdir(croot):
                    kp = os.path.join(croot, d, "key.json")
                    if os.path.exists(kp):
                        entries.append((os.path.getmtime(kp), d))
                entries.sort(reverse=True)
                for _mt, d in entries[2:]:
                    shutil.rmtree(os.path.join(croot, d), ignore_errors=True)
            except OSError:
                pass
            print("[cache] WRITE %s (%d artifacts)" % (keydir, len(copied)), flush=True)
            return
        except OSError as e:
            if _attempt == 0:
                print("[cache] write attempt failed (%r) -- retrying once" % (e,), flush=True)
                time.sleep(1.0)
                continue
            print("[cache] WRITE FAILED (cache skipped, solve results intact): %r" % (e,),
                  flush=True)
            # 取证增强（2026-11-06 两轮全量均失败于首语句且无部分目录遗留，事后重现成功）
            try:
                _pr = os.path.join(CACHE_ROOT, "strict", ".__probe__")
                with io.open(_pr, "w") as _fh_p:
                    _fh_p.write("x")
                os.remove(_pr)
                _probe_ok = True
            except Exception as _e_p:
                _probe_ok = repr(_e_p)
            print("[cache] diag: keydir.isdir=%s strict.isdir=%s root.isdir=%s "
                  "probe_write=%r e.filename=%r keydir=%r cwd=%r CACHE_ROOT=%r"
                  % (os.path.isdir(keydir), os.path.isdir(os.path.dirname(keydir)),
                     os.path.isdir(CACHE_ROOT), _probe_ok, getattr(e, "filename", None),
                     keydir, os.getcwd(), CACHE_ROOT),
                  flush=True)


def _cache_restore(args, key, t_start):
    """命中：复制缓存产物回 anchors/，打印并返回 True（调用方直接 return）。

    fail-closed：key.json 缺失（上次写入中断）或其中登记的任一产物缺失
    都视为未命中——绝不把残缺缓存当完整解复制回 anchors/。
    """
    keydir = _cache_key_dir(args, key)
    rpath = os.path.join(keydir, "minclass_result.json")
    if not os.path.exists(rpath):
        return False
    kmeta = jload(os.path.join(keydir, "key.json"), {}) or {}
    expected = kmeta.get("artifacts") or []
    if not expected:
        print("[cache] corrupt entry (no key.json manifest) -- MISS", flush=True)
        return False
    missing = [nm for nm in expected if not os.path.exists(os.path.join(keydir, nm))]
    if missing:
        print("[cache] corrupt entry (missing %s) -- MISS" % ",".join(missing), flush=True)
        return False
    age = time.time() - (kmeta.get("written_at") or time.time())
    for name in _CACHE_ARTIFACTS:
        src = os.path.join(keydir, name)
        if os.path.exists(src):
            shutil.copyfile(src, os.path.join(ROOT, "anchors", name))
            print("[cache] restored anchors/%s" % name, flush=True)
    print("[cache] HIT (age %.0fs) -- full solve skipped" % age, flush=True)
    # 复现全量跑的收尾输出（family 表 + [time]）
    cached = jload(rpath, {}) or {}
    fam_rows = cached.get("family_table") or []
    if fam_rows:
        print("\n| family | evidence | entities | constrained | forced_cls | K | K_upper | dForced | LB | conflicts | C1 gaps |")
        print("|---|---|---|---|---|---|---|---|---|---|---|")
        for row in fam_rows:
            print("| %s | %d | %d | %d | %d | %d | %d | %+d | %d | %d | %d |"
                  % (row["family"], row["evidence"], row["entities_touched"],
                     row["clusters_constrained"], row["forced_classes"], row["K"],
                     row["K_upper"], row["delta_forced"], row["lower_bound"],
                     row["conflicts"], row["c1_gaps"]))
    print("[time] %.1fs" % (time.time() - t_start), flush=True)
    return True


# ---- dump 快照恢复（speed 轮路径 2b）------------------------------------------
# 痛点：heuristic 跑会覆盖 anchors/minclass_*.json；想拿回 strict dump 原要再跑
# 30-60min 全量。--restore-dumps 直接从 .omo/solve_cache/{strict|heur}/ 最新完整
# 缓存条目复制产物回 anchors/，不跑任何求解。fail-closed 与 _cache_restore 同款：
# key.json 缺失 / manifest 登记产物缺失 / minclass_result.json 缺失 → 跳过该条目。
def _restore_dumps_from_cache(mode="strict"):
    croot = os.path.join(CACHE_ROOT, mode)
    if not os.path.isdir(croot):
        print("[restore-dumps] no cache dir: %s" % croot, flush=True)
        return False
    entries = []
    for d in os.listdir(croot):
        kp = os.path.join(croot, d, "key.json")
        if os.path.exists(kp):
            entries.append((os.path.getmtime(kp), d))
    if not entries:
        print("[restore-dumps] no cache entries under %s" % croot, flush=True)
        return False
    entries.sort(reverse=True)               # 最新优先
    for _mt, d in entries:
        keydir = os.path.join(croot, d)
        kmeta = jload(os.path.join(keydir, "key.json"), {}) or {}
        expected = kmeta.get("artifacts") or []
        if not os.path.exists(os.path.join(keydir, "minclass_result.json")):
            print("[restore-dumps] skip %s (no minclass_result.json)" % d, flush=True)
            continue
        missing = [nm for nm in expected
                   if not os.path.exists(os.path.join(keydir, nm))]
        if missing:
            print("[restore-dumps] skip %s (missing %s)" % (d, ",".join(missing)),
                  flush=True)
            continue
        for name in _CACHE_ARTIFACTS:
            src = os.path.join(keydir, name)
            if os.path.exists(src):
                shutil.copyfile(src, os.path.join(ROOT, "anchors", name))
        age = time.time() - _mt
        print("[restore-dumps] OK %s (age %.0fs, %d artifacts) -> anchors/"
              % (keydir, age, len(expected)), flush=True)
        return True
    print("[restore-dumps] FAILED: no intact entry under %s" % croot, flush=True)
    return False


def _snapshot_dumps():
    """跑前快照 anchors/ 现有 dump 产物到 .omo/dump_snap/<ts>/（存在才复制）。"""
    snap_dir = os.path.join(ROOT, ".omo", "dump_snap",
                            time.strftime("%Y%m%d_%H%M%S"))
    os.makedirs(snap_dir, exist_ok=True)
    copied = []
    for name in _CACHE_ARTIFACTS:
        src = os.path.join(ROOT, "anchors", name)
        if os.path.exists(src):
            shutil.copyfile(src, os.path.join(snap_dir, name))
            copied.append(name)
    if copied:
        print("[snapshot-dumps] %d artifacts -> %s" % (len(copied), snap_dir),
              flush=True)
    else:
        print("[snapshot-dumps] nothing to snapshot (no dump artifacts present)",
              flush=True)
    return snap_dir


def _mask_enc(m):
    """检查点掩码编码：稀疏(<=48位)存索引列表，稠密存 hex。"""
    if m == 0:
        return "0"
    if m.bit_count() <= 48:
        return "i:" + ",".join(str(i) for i in range(m.bit_length()) if (m >> i) & 1)
    return "x:" + format(m, "x")


def _mask_dec(s):
    """解码 _mask_enc；非法输入返回 None（调用方据此回退全量）。"""
    if not isinstance(s, str) or not s:
        return None
    try:
        if s == "0":
            return 0
        if s.startswith("i:"):
            m = 0
            for tok in s[2:].split(","):
                if tok:
                    m |= (1 << int(tok))
            return m
        if s.startswith("x:"):
            return int(s[2:], 16)
        return int(s, 16)
    except ValueError:
        return None


def _ckpt_load():
    if not _CKPT_STATE["loaded"]:
        _CKPT_STATE["loaded"] = True
        try:
            with open(CKPT_PATH, "rb") as fh:
                _blob = zlib.decompress(fh.read())
            _CKPT_STATE["data"] = (_orjson.loads(_blob) if _orjson is not None
                                   else json.loads(_blob.decode("utf-8")))
        except Exception:
            _CKPT_STATE["data"] = None
    return _CKPT_STATE["data"]


def _ckpt_write(payload):
    try:
        _d = os.path.dirname(CKPT_PATH)
        if _d and not os.path.isdir(_d):
            os.makedirs(_d, exist_ok=True)
        with open(CKPT_PATH, "wb") as fh:
            fh.write(zlib.compress(json.dumps(payload, ensure_ascii=False).encode("utf-8")))
        print("[incr] checkpoint written: %s (%.1f KB)" % (CKPT_PATH, os.path.getsize(CKPT_PATH) / 1024.0), flush=True)
    except OSError as e:
        print("[incr] checkpoint write FAILED (solve results intact): %r" % (e,), flush=True)


def main():
    # epilog 仅用于 --help 展示：下列调度/诊断旗标走 sys.argv 探测、不进缓存键
    # （注册进 argparse 会让 vars(args) 变化、作废全部既有结果缓存）。
    ap = argparse.ArgumentParser(
        epilog="Scheduler/diagnostic flags (sys.argv-probed, not cache-keyed): "
               "--snapshot-dumps, --restore-dumps=<dir>, --incremental, "
               "--no-incremental, --c1-covers, --strict-c1, --no-name-pins, "
               "--family-table (per-family diagnostics; default OFF -- the prefix "
               "re-solve loop was 92.5%% of legacy runtime), --use-rs.")
    ap.add_argument("--build-facts", action="store_true")
    ap.add_argument("--no-reg-flow", action="store_true")
    ap.add_argument("--no-c26-locality", action="store_true", help="disable C26 link-order locality")
    ap.add_argument("--allow-heuristics", action="store_true",
                    help="allow heuristic families (C18/C18b/C18c/C26) to produce exact identities (off by default: they are not necessary conditions)")
    ap.add_argument("--audit-layout", default=None, help="report a class layout coverage against its identified functions")
    ap.add_argument("--audit-yrpp", action="store_true",
                    help="check whether each YRpp function->class mapping is still in its cluster's domain")
    ap.add_argument("--explain", default=None, help="dump the domain of one cluster (root id)")
    ap.add_argument("--explain-class", default=None, help="with --explain: report why a class is in/out")
    ap.add_argument("--no-name-pins", action="store_true",
                    help="disable name/proto-this derived class pins")
    ap.add_argument("--prune-dead", action="store_true",
                    help="从候选宇宙剔除零引用死类（anchors/dead_classes.json）")
    ap.add_argument("--proven-universe", dest="proven_universe", action="store_true",
                    default=True,
                    help="proven universe（默认开）：无布局且无二进制证据的幻影类从"
                         "所有族掩码与候选枚举中剔除（掩码级，祖先类保留）。")
    ap.add_argument("--no-proven-universe", dest="proven_universe", action="store_false",
                    help="禁用 proven universe——回归基线口径。")
    ap.add_argument("--dump-domains", action="store_true",
                    help="写出每簇候选域大小（判断多少簇真正被证据确定）")
    ap.add_argument("--strict-c1", action="store_true",
                    help="C1 严格模式：稀疏布局不再「未知放行」，所有类都必须真正"
                         "覆盖被访问的字节区间。用于检验 K 是否被万能空类支配。")
    ap.add_argument("--no-families", default="")
    ap.add_argument("--max-pair-improve", type=int, default=40000)
    ap.add_argument("--extra-callargs", nargs="?",
                    const="anchors/supplementary_call_args.json",
                    default="anchors/supplementary_call_args.json", metavar="PATH",
                    help="补充 CALL_ARG 边文件（调用点实参 → 被调方 this），缺省启用；"
                         "与 raw 既有边按 (addr, to) 去重后原样追加，下游零特判。")
    ap.add_argument("--no-extra-callargs", action="store_true",
                    help="禁用 --extra-callargs（回归基线口径）。")
    ap.add_argument("--evidence", choices=("none", "spec", "spec+proto"), default="spec",
                    help="none=不用访问证据（HEAD 基线口径）; "
                         "spec=仅 anchors/layout_evidence.json (ctor_types/vtable_install)，"
                         "默认（非循环口径）; "
                         "spec+proto=叠加 proto-this 通道——与 C2 FUNC_PARAM 掩码同源"
                         "（函数原型已类型化的 this 声明），用 proto 派生类验证 proto 布局"
                         "属循环论证，仅作备选口径报告。")
    # parse_known_args：让 --incremental / --no-incremental 作为纯调度旗标经 sys.argv 探测，
    # 不进 vars(args)（缓存键含 vars(args)，argparse 注册会作废全部既有结果缓存）。
    # speed 轮同款待遇：--snapshot-dumps / --restore-dumps / --family-table
    # 亦走 sys.argv 探测（不进缓存键；前二者见 _restore_dumps_from_cache/_snapshot_dumps，
    # 后者缺省关闭——族循环 70 次前缀重解画像证据占 92.5% 耗时，O(N²)，
    # 诊断选项应对诊断付费，需要逐族诊断表时显式启用）。
    args, _sched_flags = ap.parse_known_args()
    _sched = set(_sched_flags) | set(sys.argv[1:])

    # ---------------- Rust 内核旗标 --use-rs（sys.argv 探测，不进缓存键）----------------
    # 集成轮（2026-11-10）：solve 管线（cluster_domains+greedy+improve+LB）与
    # C10 不动点下沉到 tools/solver_rs/pyext 的 minclass_rs 扩展；证据构建、
    # 冲突消解编排、dump 写盘全部保留 Python。语义契约：--use-rs 与纯 Python
    # 的 dump 产物逐字节一致（MC_RS_VERIFY=1 进程内逐项对拍；端到端对拍另跑）。
    # 纯 Python 路径原样保留（本旗标纯增量，缺省关闭）。
    _rs_cell = [None]               # [PySolver]，C10 阶段前构建（见下方 [rs-build]）
    _rs_mod_cell = [None]           # [minclass_rs module]
    _RS_VERIFY = False
    if "--use-rs" in _sched:
        _rs_reason = None
        if "--c1-covers" in _sched or "--strict-c1" in _sched:
            _rs_reason = "--c1-covers/--strict-c1 (C1 covers 语义未下沉)"
        elif "--incremental" in _sched:
            _rs_reason = "--incremental（检查点 memo 路径为 Python 专属）"
        elif os.environ.get("MC_DBG_ROOT"):
            _rs_reason = "MC_DBG_ROOT 调试路径"
        elif os.environ.get("MC_ROOT_DIAG") or os.environ.get("MC_CA_ANALYZE"):
            _rs_reason = "MC_ROOT_DIAG/MC_CA_ANALYZE 诊断路径"
        if _rs_reason is None:
            try:
                sys.path.insert(0, os.path.join(ROOT, "tools", "solver_rs", "pyext"))
                import minclass_rs as _rs_mod
                _rs_mod_cell[0] = _rs_mod
                print("[rs] minclass_rs extension loaded (solve pipeline + C10 fixpoint)",
                      flush=True)
            except Exception as _e_rs:
                print("[rs] extension unavailable (%r) -- pure Python fallback"
                      % (_e_rs,), flush=True)
                _rs_reason = "load failed"
        else:
            print("[rs] disabled: %s -- pure Python" % _rs_reason, flush=True)
        if _rs_mod_cell[0] is not None:
            _RS_VERIFY = bool(os.environ.get("MC_RS_VERIFY"))
            if _RS_VERIFY:
                print("[rs] MC_RS_VERIFY=1: 每次 solve 双跑（Python 参照 vs Rust）逐项对拍",
                      flush=True)

    # --restore-dumps[=strict|heur]：从结果缓存最新完整条目恢复 dump 产物，不求解。
    if any(s.startswith("--restore-dumps") for s in _sched):
        _tok = [s for s in _sched if s.startswith("--restore-dumps")][0]
        _mode = _tok.split("=", 1)[1] if "=" in _tok else "strict"
        if _mode not in ("strict", "heur"):
            print("[restore-dumps] bad mode %r (use strict|heur)" % _mode, flush=True)
            return
        perf_mark("restore_dumps")
        _ok = _restore_dumps_from_cache(_mode)
        perf_mark("restore_done")
        perf_report()
        return

    t_start = time.time()
    U = build_universe(use_evidence=(args.evidence != "none"), prune_dead=getattr(args, "prune_dead", False))
    names, idx, resolve, n = U["names"], U["idx"], U["resolve"], U["n"]
    _names_sha = hashlib.sha256("\n".join(names).encode("utf-8")).hexdigest()   # 检查点宇宙指纹
    _solver_sha = hashlib.sha256(io.open(os.path.abspath(__file__), "rb").read()).hexdigest()  # 检查点源码指纹
    FULL = (1 << n) - 1
    _CLASSMASK = U.get("classmask") or FULL
    print("[universe] classes=%d with_layout=%d authority_joined=%d sizes=%d slot_count=%d "
          "evidence_classes=%d desc_edges=%d"
          % (n, U["n_layout"], U["n_auth"], sum(1 for s in U["size"] if s is not None),
             sum(1 for s in U["slot_count"] if s is not None), U["n_evidence"],
             U["n_desc_edges"]), flush=True)
    if not all(U["desc_mi_probe"].values()):
        print("[universe][warn] desc MI probe incomplete: %s"
              % U["desc_mi_probe"], flush=True)
    else:
        print("[universe] desc MI probe ok: %s" % U["desc_mi_probe"], flush=True)
    perf_mark("universe")          # speed 轮路径 3：阶段打点（零语义影响）
    eff_bump = sum(1 for i in range(n) if U["eff_size"][i] is not None
                   and U["size"][i] is not None and U["eff_size"][i] > U["size"][i])
    print("[evidence] extent>declared: %d classes (effective_size = max(declared, observed_extent))"
          % eff_bump, flush=True)

    # ---------------- 结果缓存（checkpoint）：输入不变则跳过全量求解 ----------------
    _cache_on = os.environ.get("MINCLASS_NO_CACHE") != "1"
    _input_parts = None
    if not _cache_on:
        print("[cache] disabled (MINCLASS_NO_CACHE=1)", flush=True)
    else:
        _input_parts = _cache_input_parts(args)
        _ck = _compute_cache_key(args, _input_parts)
        if _cache_restore(args, _ck, t_start):
            return                      # 命中：产物已复制回 anchors/，直接退出
        print("[cache] MISS -- full solve", flush=True)
        # --snapshot-dumps：全量跑会覆盖 anchors/ dump 产物——先快照到
        # .omo/dump_snap/<ts>/（speed 轮路径 2b，sys.argv 探测不进缓存键）。
        if "--snapshot-dumps" in _sched:
            _snapshot_dumps()
        try:
            os.makedirs(_cache_key_dir(args, _ck), exist_ok=True)   # 预创建（见 _cache_write 注释）
        except OSError:
            pass
    # ---- 增量模式门控（用户裁决：--no-incremental / MINCLASS_NO_CACHE=1 强制全量） ----
    _incr_on = (("--incremental" in sys.argv) or os.environ.get("MINCLASS_INCREMENTAL") == "1") \
        and ("--no-incremental" not in sys.argv) and _cache_on
    if _incr_on:
        print("[incr] incremental mode ON (checkpoint=%s)"
              % ("present" if os.path.exists(CKPT_PATH) else "absent"), flush=True)

    raw = jload("tools/type_infer/constraints/raw_constraints.json")["constraints"]

    # ---------------- 补充 CALL_ARG 边（--extra-callargs / --no-extra-callargs） ----------------
    # 与既有边按 (addr, to) 去重后**原样追加**进 raw——下游（touch / C2 / C7 / C10 /
    # merge 候选 / 赋值）看到的即合并后的完整列表，不做任何特判。
    # addr 归一化为整数比较（"0x00401019" 与 "0x401019" 视为同址）。
    if args.no_extra_callargs:
        print("[extra] disabled (--no-extra-callargs)", flush=True)
    else:
        _xj = jload(args.extra_callargs)
        if not _xj:
            print("[extra] file not found: %s (skipped)" % args.extra_callargs, flush=True)
        else:
            _xed = _xj.get("edges") or []

            def _dkey(_e):
                _a = hx(_e.get("addr"))
                return ((_a if _a is not None else _e.get("addr")), _e.get("to"))

            _seen = set()
            for _e in raw:
                _seen.add(_dkey(_e))
            _append = []
            for _e in _xed:
                _k = _dkey(_e)
                if _k in _seen:
                    continue
                _seen.add(_k)
                _append.append(_e)
            raw.extend(_append)
            print("[extra] loaded=%d appended=%d duplicates=%d"
                  % (len(_xed), len(_append), len(_xed) - len(_append)), flush=True)

    protos = jload("anchors/ida_function_protos.json", {})
    faddrs = sorted(int(a, 16) for a in protos)
    print("[data] raw edges=%d functions=%d" % (len(raw), len(protos)), flush=True)
    perf_mark("load_data")        # speed 轮路径 3：raw_constraints(130MB)+protos 加载段

    # ---------------- 函数声明类（提前定义：proto 证据通道与 C2 共用） ----------------
    owner_of_fn = {}
    _NO_NAME_PINS = "--no-name-pins" in sys.argv
    if _NO_NAME_PINS:
        print("[names] name-derived class pins DISABLED", flush=True)
    for a, v in ({} if _NO_NAME_PINS else protos).items():
        nm = (v or {}).get("name") or ""
        if "::" in nm:
            ci = resolve(nm.split("::")[0])
            if ci is not None:
                owner_of_fn[int(a, 16)] = (ci, nm)
    allowed_cache = {}

    # MC_ANC_UNKNOWN=allow：继承血统未知的类，必须是「可能的后代」——按用户裁定
    # 「未知 ≠ 否定证据」，allowed_of 不能因为它们不在 desc 里就排除。
    _anc_unknown_n = 0
    _anc_unknown = set()
    # 默认开启：继承血统未知的类，必须视为「可能的后代」（用户裁定：未知 ≠ 否定证据）。
    # 对照实测：旧口径（desc 只含已知子类）10,284 唯一 / 84 矛盾；
    # 严格口径 10,078 / 54 —— 代价 −206（2%），换掉的是「把血统缺口当否定证据」。
    # MC_ANC_UNKNOWN=off 可回退对照。
    if os.environ.get("MC_ANC_UNKNOWN") != "off":
        try:
            _pdom = jload("anchors/parent_domain.json", {}) or {}
            for _u in (_pdom.get("unknown") or []):
                _ci_u = resolve(_u.get("class")) if isinstance(_u, dict) else None
                if _ci_u is not None:
                    _anc_unknown.add(_ci_u)
            _anc_unknown_n = len(_anc_unknown)
        except Exception:
            _anc_unknown = set()
        print("[anc] unknown-ancestry classes treated as possible descendants: %d"
              % _anc_unknown_n, flush=True)

    def allowed_of(ci):
        m = allowed_cache.get(ci)
        if m is None:
            m = 1 << ci
            for d in U["desc"][ci]:
                m |= (1 << d)
            for _u in _anc_unknown:
                if _u != ci:
                    m |= (1 << _u)
            allowed_cache[ci] = m
        return m

    def parse_proto(proto):
        if not proto:
            return None
        m = re.match(r"^(.*?)\s*(__\w+)\s*\((.*)\)\s*$", proto)
        if not m:
            return None
        ret, cc, argstr = m.group(1).strip(), m.group(2), m.group(3).strip()
        params = [p.strip() for p in argstr.split(",")] if argstr else []
        return ret, cc, params

    def type_class(t):
        if not isinstance(t, str) or "*" not in t:
            return None
        s = re.sub(r"\b(const|volatile|struct|class)\b", " ", t)
        s = s.replace("*", " ").replace("&", " ")
        s = re.sub(r"\[[^\]]*\]", " ", s)
        toks = [x for x in re.split(r"\s+", s) if x]
        for tok in reversed(toks):
            ci = resolve(tok)
            if ci is not None:
                return ci
        return None

    # ---------------- proto-this 证据通道（--evidence spec+proto） ----------------
    # 与 C2 FUNC_PARAM 掩码同一来源：函数原型里已类型化的 this 声明
    # （源自 CSP/binary 锚回写的 til）。把每个原型 this 类的 this 访问并入
    # observed 成员表与 effective_size（同一滤噪规则）。仅扩展证据，不改声明。
    if args.evidence == "spec+proto":
        n_proto_fn = 0
        proto_sites = collections.defaultdict(list)      # ci -> [(off, w, addr)]
        for a, v in protos.items():
            pr = parse_proto((v or {}).get("proto"))
            if not pr or pr[1] != "__thiscall" or not pr[2] or "this" not in pr[2][0]:
                continue
            ci_this = type_class(pr[2][0])
            if ci_this is None:
                continue
            fa = hx(a)
            if fa is None:
                continue
            n_proto_fn += 1
            proto_sites[ci_this].append((fa, None))
        fn_access = collections.defaultdict(list)        # fn -> [(off, w)]
        for e in raw:
            if e.get("type") != "MEMBER_ACCESS":
                continue
            b = e.get("base")
            if not (isinstance(b, str) and b.endswith(":this")):
                continue
            fa = hx(b.split(":")[0])
            if fa is None:
                continue
            try:
                o = int(e.get("offset") or 0)
            except (TypeError, ValueError):
                continue
            w = e.get("width")
            w = int(w) if isinstance(w, (int, float)) and w > 0 else 4
            fn_access[fa].append((o, w))
        added_classes = 0
        added_sites = 0
        for ci_this, fns in proto_sites.items():
            offs_all = collections.defaultdict(list)
            for fa, _x in fns:
                offs_all[fa] = fn_access.get(fa, [])
            merged = collections.defaultdict(int)
            for fa, lst in offs_all.items():
                for (o, w) in lst:
                    if o > 4096 and not any(abs(o - o2) <= 64 for o2 in
                                            [x for (x, _w) in lst if x <= 4096]):
                        near = False
                        for fa2, lst2 in offs_all.items():
                            if fa2 == fa:
                                continue
                            if any(o2 <= 4096 and abs(o - o2) <= 64 for (o2, _w) in lst2):
                                near = True
                                break
                        if not near:
                            continue
                    merged[o] = max(merged[o], w)
            if not merged:
                continue
            added_classes += 1
            ext = 0
            for o, w in merged.items():
                prev = U["members"][ci_this].get(o)
                U["members"][ci_this][o] = w if not isinstance(prev, int) or prev <= 0 \
                    else max(prev, w)
                added_sites += 1
                ext = max(ext, o + w)
            cur = U["eff_size"][ci_this]
            U["eff_size"][ci_this] = ext if cur is None else max(cur, ext)
        print("[evidence] proto-this channel: typed_fns=%d classes_extended=%d sites=%d"
              % (n_proto_fn, added_classes, added_sites), flush=True)

    def fn_at(a):
        if not faddrs or a is None:
            return None
        i = bisect.bisect_right(faddrs, a) - 1
        return faddrs[i] if i >= 0 else None

    # ---------------- 实体与观测 ----------------
    census = {f: 0 for f in FAMILIES}
    exact_count = {f: 0 for f in FAMILIES}
    ents = collections.defaultdict(lambda: {"obs": set(), "raw": set()})

    def touch(eid, raw_id):
        # S:（栈槽/局部变量）升级为一等变量：局部对象指针的类是可求解的。
        # R:/V: 仍是连接点（寄存器值是中间量，vtable_slot 跨类共枢纽语义无效）。
        if eid is None or eid.startswith(("R:", "V:")):
            return None
        ents[eid]["raw"].add(raw_id)
        return eid

    # ---- 被调方实体预创建（类方法签名 = 第 6 项值域的缺口）----
    # C10/C4/C15 都要求实体已存在于 ents；被调函数若自身无成员访问观测，
    # 其 T: 实体从不创建 —— 实测 31,567 条 :this 边因此丢弃，T: 受约束簇仅 713
    # （全库 ~10,773 个函数接收 this）。零观测实体是合法变量：只携带真实证据。
    _callee_touch = 0
    for _e in raw:
        if _e.get("type") != "CALL_ARG":
            continue
        _to = _e.get("to")
        if not (isinstance(_to, str) and _to.endswith(":this")):
            continue
        if _to.startswith("vtable_slot_"):
            continue
        _ce = ent_id(_to)
        if _ce and _ce not in ents:
            touch(_ce, _to)
            _callee_touch += 1
    _ret_touch = 0
    try:
        for _r0 in (jload("anchors/callarg_origins.json", {}) or {}).get("edges") or []:
            if (_r0 or {}).get("kind") != "ret":
                continue
            _cl0 = hx(_r0.get("callee"))
            if _cl0 is None:
                continue
            _re0 = "RET:%X" % _cl0
            if _re0 not in ents:
                touch(_re0, "0x%08X.return" % _cl0)
                _ret_touch += 1
    except Exception:
        pass
    # 槽参数组实体预创建（override 链闭包 + 签名结构一致性，用户裁决机制）
    _gs_touch = _gsP_touch = 0
    try:
        _spg0 = jload("anchors/slot_param_groups.json", {}) or {}
        for _gk, _gv in (_spg0.get("groups") or {}).items():
            _ge0 = "GS:" + _gk
            if _ge0 not in ents:
                touch(_ge0, "slotgroup:" + _gk)
                _gs_touch += 1
            for _oa0 in _gv.get("occ") or []:
                _oa0i = hx(_oa0)
                if _oa0i is None:
                    continue
                _pe0 = "P:%X:%d" % (_oa0i, int(_gk.split(":")[1]))
                if _pe0 not in ents:
                    touch(_pe0, "0x%08X::param%d" % (_oa0i, int(_gk.split(":")[1])))
                    _gsP_touch += 1
    except Exception:
        pass
    # 接收者锚定绑定实体预创建（T:callee / P:callee:K）
    _vb_touch = 0
    try:
        for _b0 in (jload("anchors/vt_receiver_bindings.json", {}) or {}).get("binds") or []:
            _cl0 = hx(_b0.get("callee"))
            if _cl0 is None:
                continue
            _te0 = "T:%X" % _cl0
            if _te0 not in ents:
                touch(_te0, "0x%08X:this" % _cl0)
                _vb_touch += 1
            for _a0 in _b0.get("args") or []:
                _pe0 = "P:%X:%d" % (_cl0, int(_a0.get("k") or 0))
                if _pe0 not in ents:
                    touch(_pe0, "0x%08X::param%d" % (_cl0, int(_a0.get("k") or 0)))
                    _vb_touch += 1
    except Exception:
        pass
    # 赋值物化等值实体预创建（S/M/P/T/RET/G）
    _fs_touch = 0
    try:
        for _pr in (jload("anchors/flow_stores.json", {}) or {}).get("eq") or []:
            for _eid0 in _pr:
                if isinstance(_eid0, str) and _eid0 not in ents:
                    touch(_eid0, _eid0)
                    _fs_touch += 1
    except Exception:
        pass
    # 成员写等值实体预创建（M 目标 + 值侧 S/M/RET/G/T 可能缺）
    _mw_touch = 0
    try:
        for _pr in (jload("anchors/member_writes.json", {}) or {}).get("eq") or []:
            for _eid0 in _pr:
                if isinstance(_eid0, str) and _eid0 not in ents:
                    touch(_eid0, _eid0)
                    _mw_touch += 1
    except Exception:
        pass
    # ret 身份实体预创建（RET:FN —— T:FN 大多已存在）
    _ri_touch = 0
    try:
        for _pr in (jload("anchors/ret_identity.json", {}) or {}).get("eq") or []:
            for _eid0 in _pr:
                if isinstance(_eid0, str) and _eid0.startswith("RET:") and _eid0 not in ents:
                    touch(_eid0, _eid0)
                    _ri_touch += 1
    except Exception:
        pass
    # 值流链实体预创建（EAX:FN:SITE）
    _fc_touch = 0
    try:
        _fch = jload("anchors/flow_chains.json", {}) or {}
        for _pair in (_fch.get("flow") or []) + (_fch.get("eq") or []):
            for _eid0 in _pair:
                if isinstance(_eid0, str) and _eid0.startswith("EAX:") and _eid0 not in ents:
                    touch(_eid0, _eid0)
                    _fc_touch += 1
    except Exception:
        pass
    # EAX 流等值 + GS 站点实参等值实体预创建（EAX:FN:SITE / GS:slot:k:root）。
    # 与 flow_chains 预创建同模式（仅 EAX:/GS: 前缀，幂等 not-in-ents 守卫）；
    # T:/P:/RET:/G:/M:/S: 对侧实体遵循 FS/FC 惯例不预创建（作传播连接点即可）。
    _efeq_touch = 0
    try:
        for _r0 in (jload("anchors/eax_flow_equations.json", {}) or {}).get("edges") or []:
            _eid0 = (_r0 or {}).get("eax")
            if isinstance(_eid0, str) and _eid0.startswith("EAX:") and _eid0 not in ents:
                touch(_eid0, _eid0)
                _efeq_touch += 1
        for _pair0 in (jload("anchors/gs_site_args.json", {}) or {}).get("edges") or []:
            for _eid0 in (_pair0 or []):
                if not isinstance(_eid0, str):
                    continue
                if _eid0.startswith(("EAX:", "GS:")) and _eid0 not in ents:
                    touch(_eid0, _eid0)
                    _efeq_touch += 1
    except Exception:
        pass
    print("[C10-pre] eax/gs eq entity precreate: %d" % _efeq_touch, flush=True)
    # DT 直调 thiscall 接收者边的 EAX 对侧实体预创建（EF/GS 同模式，幂等
    # not-in-ents 守卫；T:/M:/G: 对侧遵循 FS/FC 惯例不预创建——作传播连接点
    # 即可，其域由传播通道经 ents 内邻居收窄）。
    _dt_touch = 0
    try:
        for _r0 in (jload("anchors/dt_thiscall_edges.json", {}) or {}).get("edges") or []:
            _eid0 = (_r0 or {}).get("eq")
            if isinstance(_eid0, str) and _eid0.startswith("EAX:") and _eid0 not in ents:
                touch(_eid0, _eid0)
                _dt_touch += 1
    except Exception:
        pass
    print("[C10-pre] dt eq EAX entity precreate: %d" % _dt_touch, flush=True)
    # VDRET/CPI eq 边端点实体预创建（EF/RI/PU5 同模式，幂等 not-in-ents 守卫）。
    # VDRET：EAX:FN:site own 侧（EF 先例）+ RET:FN 对侧（RI 先例——vdret 槽位
    #   被方大多不在 RI 1,941 名单内，实测新 EAX 1,043 / 新 RET 407）。
    # CPI：P:/M:/G: 双端 touch（PU5 先例——P:FN:K 220 个新参数原子 / M: 仅
    #   8 新（MW/FS 预创建已覆盖 187）/ G: 1 新）。
    _vrcp_touch = [0, 0]
    try:
        for _r0 in (jload("anchors/vdret_eax_edges.json", {}) or {}).get("edges") or []:
            for _eid0 in ((_r0 or {}).get("eax"), (_r0 or {}).get("eq")):
                if (isinstance(_eid0, str)
                        and _eid0.startswith(("EAX:", "RET:")) and _eid0 not in ents):
                    touch(_eid0, _eid0)
                    _vrcp_touch[0] += 1
        for _r0 in (jload("anchors/ctor_param_inits.json", {}) or {}).get("edges") or []:
            for _eid0 in ((_r0 or {}).get("p"), (_r0 or {}).get("eq")):
                if (isinstance(_eid0, str)
                        and _eid0.startswith(("P:", "M:", "G:")) and _eid0 not in ents):
                    touch(_eid0, _eid0)
                    _vrcp_touch[1] += 1
    except Exception:
        pass
    print("[C10-pre] vdret/cpi eq entity precreate: %d/%d"
          % (_vrcp_touch[0], _vrcp_touch[1]), flush=True)
    _m_touch = 0
    for _e in raw:
        if _e.get("type") != "CALL_ARG":
            continue
        _fr = _e.get("from")
        if not (isinstance(_fr, str) and ".member(" in _fr):
            continue
        try:
            _ea_t = int(str(_e.get("addr")), 16)
        except (TypeError, ValueError):
            _ea_t = None
        _me = ent_id(_fr, fn_at(_ea_t) if _ea_t is not None else None)
        if _me and _me not in ents:
            touch(_me, _fr)
            _m_touch += 1
    # 数据流证明的 this 直传：调用方 T: 实体预创建
    _t_ext_touch = 0
    try:
        for _r0 in (jload("anchors/member_callargs_ext.json", {}) or {}).get("edges") or []:
            if (_r0 or {}).get("kind") != "this":
                continue
            _a0 = hx(_r0.get("addr"))
            if _a0 is None:
                continue
            _f0 = fn_at(_a0)
            _me0 = "T:%X" % _f0
            if _me0 not in ents:
                touch(_me0, "0x%08X:this" % _f0)
                _t_ext_touch += 1
    except Exception:
        pass
    # 数据流解析出的 member 边的 M 实体（合成形态不在 raw 中，须在此预创建，
    # 否则簇构建后新建实体不进簇、约束无处落地）
    _m_ext_touch = 0
    try:
        for _r0 in (jload("anchors/member_callargs_ext.json", {}) or {}).get("edges") or []:
            if (_r0 or {}).get("kind") != "member":
                continue
            _a0 = hx(_r0.get("addr"))
            if _a0 is None:
                continue
            _f0 = fn_at(_a0)
            _frm0 = "0x%08X:this.member(0x%X)" % (_f0, int(_r0.get("off") or 0))
            _me0 = ent_id(_frm0, _f0)
            if _me0 and _me0 not in ents:
                touch(_me0, _frm0)
                _m_ext_touch += 1
    except Exception:
        pass
    # 虚调用接收者（IDA 数据流解析的空 receiver CALL_VTABLE）：member 接收者实体预创建
    _vt_recv_by = {}
    _n_vt_m = 0
    try:
        for _r0 in (jload("anchors/vtcall_receivers.json", {}) or {}).get("edges") or []:
            if (_r0 or {}).get("skip"):
                continue
            _a0 = hx(_r0.get("addr"))
            if _a0 is None:
                continue
            _f0 = fn_at(_a0)
            if _f0 is None or _f0 == 0:
                continue
            _vt_recv_by[_a0] = (_r0, _f0)
            if (_r0 or {}).get("kind") == "member":
                _frm0 = "0x%08X:this.member(0x%X)" % (_f0, int(_r0.get("off") or 0))
                _me0 = ent_id(_frm0, _f0)
                if _me0 and _me0 not in ents:
                    touch(_me0, _frm0)
                    _n_vt_m += 1
    except Exception as _e0:
        print("[C3-vt] receiver anchor skipped: %s" % _e0, flush=True)
    print("[C10-pre] callee entities created: %d, member-chain entities created: %d "
          "(+%d dataflow M, +%d dataflow T, +%d vtcall M)"
          % (_callee_touch, _m_touch, _m_ext_touch, _t_ext_touch, _n_vt_m), flush=True)

    # ---- 证据修正（anchors/minclass_evidence_corrections.json，二进制取证）----
    # false_this_protos : 原型 this 类被二进制证伪的函数（this 接收者虚调用
    #                     槽位超出该类 primary vtable 实测范围）→ 跳过其
    #                     FUNC_PARAM self-pin 与 M: 成员链解析。
    # relocated_vtable_receivers : CALL_VTABLE 接收者实为成员子对象 → 改挂实体。
    # dropped_vtable_edges : 接收者寄存器链与 this 无关且不可解析 → 丢弃边。
    corr = jload("anchors/minclass_evidence_corrections.json", {}) or {}
    false_proto_fns = set()
    for k in (corr.get("false_this_protos") or {}):
        a = hx(k)
        if a is not None:
            false_proto_fns.add(a)
    reloc_recv = {}
    for k, v in (corr.get("relocated_vtable_receivers") or {}).items():
        a = hx(k)
        if a is not None and isinstance(v, dict) and v.get("receiver"):
            reloc_recv[a] = v["receiver"]
    dropped_edges = set()
    for k in (corr.get("dropped_vtable_edges") or {}):
        a = hx(k)
        if a is not None:
            dropped_edges.add(a)
    dropped_obs = {}
    for k, v in (corr.get("dropped_member_access") or {}).items():
        a = hx(k)
        if a is None or not isinstance(v, dict):
            continue
        offs = v.get("offsets") or []
        if offs:
            dropped_obs[a] = set(int(x) for x in offs)
    # X159: 地址级剔除（基址寄存器已不是 this 别名）——粒度精确，不误删同偏移合法访问
    dropped_addr = set()
    for _a in (corr.get("dropped_member_access_addr") or []):
        try:
            dropped_addr.add("0x%08X" % int(str(_a), 16))
        except ValueError:
            pass
    print("[corr] false_protos=%d relocated=%d dropped_edges=%d"
          % (len(false_proto_fns), len(reloc_recv), len(dropped_edges)),
          flush=True)

    # ---- 规则 P：类二进制身份门（name-derived pin 不是证据）----
    # 二进制身份 = RTTI primary vtable（vtable_extent_evidence）或
    # ctor/vtable-install 锚（ctor_types / structural_truth）。二者皆无的类
    # 是命名轮发明名，其 C2 pin 与真类 pin 相交为空时制造假冲突。
    identified = set()
    for _cls, _pc in ((jload("anchors/vtable_extent_evidence.json", {}) or {})
                      .get("per_class") or {}).items():
        if _pc.get("primary"):
            _ci = resolve(_cls)
            if _ci is not None:
                identified.add(_ci)
    for _a, _cn in (dict(jload("anchors/ctor_types.json", {}) or {}, **(jload("anchors/ctor_types_ext.json", {}) or {})) or {}).items():
        _ci = resolve(_cn)
        if _ci is not None:
            identified.add(_ci)
    for _a, _cn in ((jload("anchors/structural_truth.json", {}) or {})
                    .get("vtable_install") or {}).items():
        _ci = resolve(_cn)
        if _ci is not None:
            identified.add(_ci)
    # 规则 P 修正：非多态类可以既无 RTTI 表也无 ctor 锚，但只要有**真实成员访问**
    # 就是二进制存在的类（ScenarioClass/TacticalClass/RulesClass/Cell 等 419 个）。
    # 把「零证据」才算虚构，否则会丢掉 2,460 条合法 pin（实测）。
    _ev_cls = (jload("anchors/layout_evidence.json", {}) or {}).get("classes") or {}
    for _cn, _rec in _ev_cls.items():
        if (_rec.get("extra_offsets") or []):
            _ci = resolve(_cn)
            if _ci is not None:
                identified.add(_ci)
    unidentified_pins = collections.Counter()

    def pin_class_identified(ci):
        return ci in identified



    for e in raw:
        if e.get("type") != "MEMBER_ACCESS":
            continue
        eid = ent_id(e.get("base"))
        if eid is None:
            continue
        try:
            o = int(e.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        w = e.get("width")
        w = int(w) if isinstance(w, (int, float)) and w > 0 else None
        touch(eid, e.get("base"))
        if eid.startswith("T:"):
            _fa = hx(eid[2:])
            if _fa is not None and o in dropped_obs.get(_fa, ()):
                continue      # 该访问已被二进制取证证伪（非 this）
        if e.get("addr") and ("0x%08X" % int(str(e["addr"]), 16)) in dropped_addr:
            continue          # 基址寄存器当时不是 this（X159 地址级剔除）
        # 成员链实体（this->member@0xNN）的 obs 偏移是**相对该子对象**的，
        # 正是子对象自己的成员 —— 此前整类丢弃，白白损失 1,499 个实体的证据。
        ents[eid]["obs"].add((o, w))
        census["C1"] += 1

    for e in raw:
        t = e.get("type")
        if t == "FUNC_PARAM":
            fr = e.get("from")
            a = hx(str(fr).split(":")[0]) if ":this" in str(fr) else None
            touch(ent_id(fr, a), fr)
        elif t == "CALL_ARG":
            a = hx(e.get("addr")) or 0
            touch(ent_id(e.get("to")), e.get("to"))
            touch(ent_id(e.get("from"), fn_at(a)), e.get("from"))
        elif t == "CALL_VTABLE":
            a = hx(e.get("addr")) or 0
            touch(ent_id(e.get("receiver"), fn_at(a)), e.get("receiver"))
            touch(ent_id(e.get("to")), e.get("to"))
        elif t == "RETURN":
            touch(ent_id(e.get("to")), e.get("to"))

    interest = set()
    for e in raw:
        if e.get("type") != "CALL_ARG":
            continue
        fr = e.get("from")
        if isinstance(fr, str) and fr in REGS:
            a = hx(e.get("addr")) or 0
            if a:
                interest.add((a, fr))

    facts = load_or_build_facts(args.build_facts, interest)
    # reg_links v2: [addr, reg, src, clean]（clean=不跨 call / 不经控制流汇合）
    site_reg = {}
    facts_v1 = False
    if facts:
        for lk in facts.get("reg_links", ()):
            if len(lk) >= 4:
                site_reg[(lk[0], lk[1])] = (lk[2], bool(lk[3]))
            else:
                facts_v1 = True
                site_reg[(lk[0], lk[1])] = (lk[2], True)
    if facts_v1:
        print("[warn] facts reg_links 为 v1（无 taint 标志）——建议 --build-facts 重建",
              flush=True)
    if facts:
        for fn, site, size, dest in facts["alloc_sites"]:
            touch("N:%X" % site, "new@%X" % site)
    else:
        print("[warn] binary facts missing: C4/C5/C6/reg-flow degrade", flush=True)

    print("[entities][dbg] by prefix: %s" % dict(collections.Counter(k.split(":")[0] for k in ents)), flush=True)
    print("[entities] total=%d with_obs=%d obs>=2=%d"
          % (len(ents), sum(1 for r in ents.values() if r["obs"]),
             sum(1 for r in ents.values() if len(r["obs"]) >= 2)), flush=True)

    fam = {f: {} for f in FAMILIES}
    exact = collections.defaultdict(list)
    c1_gaps = []                                # C1 无解（布局缺口），不丢实体

    # ---- 继承链成员展开（结构性修复）----
    # class_layouts 里 61% 的派生类**只列自身成员**，不含基类成员：
    # OverlayClass 缺 45 个、HouseClass 缺 [0,4,8,12,33]、InfantryClass 334 而
    # 基类 FootClass 384。C1 因此把合法的继承访问当成反证（578 个假冲突）。
    _parents = {}
    try:
        _raw_layouts = jload("tools/class_layouts.json", {}) or {}
        for _cn, _rec in _raw_layouts.items():
            if isinstance(_rec, dict) and _rec.get("parent"):
                _ci = resolve(_cn)
                _pi = resolve(_rec["parent"])
                if _ci is not None and _pi is not None and _ci != _pi:
                    _parents[_ci] = _pi
    except Exception:
        _parents = {}
    # 补 RTTI 精确基类表（954 类）：class_layouts 只给了 103 条父链，是布局稀疏的主因。
    # rtti_base_arrays.json = 类 -> [自身, 直接基类, ...]（二进制 ??_R2 表，权威）。
    _rtti_links = 0
    try:
        _rtti = jload("anchors/rtti_base_arrays.json", {}) or {}
        for _cn, _bases in _rtti.items():
            if not isinstance(_bases, (list, tuple)) or len(_bases) < 2:
                continue
            _ci = resolve(_cn)
            _pi = resolve(_bases[1])
            if _ci is None or _pi is None or _ci == _pi:
                continue
            if _parents.get(_ci) is None:
                _parents[_ci] = _pi
                _rtti_links += 1
    except Exception:
        _rtti_links = 0
    print("[layouts] RTTI base links added: %d (total parent links=%d)"
          % (_rtti_links, len(_parents)), flush=True)
    _inherit_added = 0
    _depth_cache = {}
    def _chain(ci):
        out = []; seen = set(); cur = ci; d = 0
        while cur in _parents and cur not in seen and d < 16:
            seen.add(cur); cur = _parents[cur]; out.append(cur); d += 1
        return out
    for _ci in range(n):
        for _anc in _chain(_ci):
            if not U["has_layout"][_anc]:
                continue
            for _o, _w in U["members"][_anc].items():
                if _o not in U["members"][_ci]:
                    U["members"][_ci][_o] = _w
                    _inherit_added += 1
    print("[layouts] inheritance flattening: %d parent links, %d inherited members added"
          % (len(_parents), _inherit_added), flush=True)

    # ---- A：proven universe（幻影类剔除）----
    # 人肉鉴定只考虑二进制里真实存在的类；「无布局且无二进制证据」的幻影类
    # 对 C1 恒为 FULL 放行（has_layout=False → 稀疏掩码放行），坐在每一个域里
    # 抬高全部域宽。实现为掩码级剔除（不重排宇宙数组，避免重编号涟漪）：
    # cluster_domains 求交时统一与 proven 掩码相交，候选枚举因此见不到幻影类。
    # 保留判据（任一成立）：
    #   (1) tools/class_layouts.json 有含成员的布局记录；
    #   (2) 二进制身份 = identified 集（extent/ctor 装表/structural truth）+
    #       singleton_types 存储锚定；
    #   (3) anchors/layout_evidence.json 记录了 extra_offsets（并入 identified）；
    #   (4) anchors/vtable_slot_authority.json 里拥有 vtable。
    # 层次保护：kept 类的祖先（_parents 链 + rtti_base_arrays + class_db
    # full_ancestors，传递闭包）一律保留，否则 anc/desc 展开断链。
    _proven_mask = FULL
    proven_keep = None
    if getattr(args, "proven_universe", True):
        _keep = set(identified)
        for _rec in (jload("anchors/singleton_types.json", {}) or {}).values():
            _ci = resolve((_rec or {}).get("type"))
            if _ci is not None:
                _keep.add(_ci)
        _lay_prov = jload("tools/class_layouts.json", {}) or {}
        _laycls = {r for r, rec in _lay_prov.items()
                   if isinstance(rec, dict) and (rec.get("offsets") or {})}
        _align_prov = jload("anchors/class_name_align.json", {}) or {}
        _r2c_prov = {k: v["canon"] for k, v in
                     (_align_prov.get("rtti_to_canon") or {}).items()}
        for _i, _c in enumerate(names):
            _recs = [_c] + [r for r in (U["db"][_c].get("rtti_names") or []) if r != _c]
            for _r in _recs:
                if _r in _laycls or (_r in _r2c_prov and _r2c_prov[_r] in _laycls):
                    _keep.add(_i)
                    break
        for _cls in (jload("anchors/vtable_slot_authority.json", {}) or {}):
            _ci = resolve(_cls)
            if _ci is not None:
                _keep.add(_ci)
        # 祖先保留（多源直接祖先 → 传递闭包）
        _rtti_base_prov = jload("anchors/rtti_base_arrays.json", {}) or {}
        _anc_direct = {}
        for _i, _c in enumerate(names):
            _rec = U["db"][_c]
            _anc = set()
            for _a in _rec.get("full_ancestors") or []:
                _j = resolve(_a)
                if _j is not None:
                    _anc.add(_j)
            _rns = [_c] + [r for r in (_rec.get("rtti_names") or []) if r != _c]
            for _rn in _rns:
                for _a in _rtti_base_prov.get(_rn) or []:
                    _j = resolve(_a)
                    if _j is not None:
                        _anc.add(_j)
                for _src in [_rn] + ([_r2c_prov[_rn]] if _rn in _r2c_prov else []):
                    _lr = _lay_prov.get(_src)
                    _p = _lr.get("parent") if isinstance(_lr, dict) else None
                    if _p:
                        _j = resolve(_p)
                        if _j is not None:
                            _anc.add(_j)
            if _anc:
                _anc_direct[_i] = _anc
        _stack = list(_keep)
        while _stack:
            _i = _stack.pop()
            for _j in _anc_direct.get(_i, ()):
                if _j not in _keep:
                    _keep.add(_j)
                    _stack.append(_j)
        proven_keep = _keep
        _proven_mask = 0
        for _i in proven_keep:
            _proven_mask |= (1 << _i)
        # 类型词汇成员永生：基元/数组/指针类型不是幻影类（无布局无证明是正常的）
        _proven_mask |= ((1 << n) - 1) ^ _CLASSMASK
    _n_phantom = n - (_proven_mask.bit_count() if proven_keep is not None else n)
    print("[universe] proven=%d dropped_phantom=%d (no_layout_no_proof)"
          % (n - _n_phantom, _n_phantom), flush=True)
    _proven_cell = [_proven_mask]      # 单元格：K 对照（was）时临时置 FULL 重解

    def _pfm(m):
        """proven 掩码过滤。FULL（未知/无证据）保持 FULL——与真·宇宙剔除同口径：
        未知 = kept 宇宙上的任意类 = 自由簇，不进覆盖问题；只有具体掩码才剥幻影位。"""
        _p = _proven_cell[0]
        if _p == FULL or m == FULL:
            return m
        return m & _p

    # ---- 二进制身份锚定的成员表补全（非循环）----
    # 身份只来自二进制：ctor vtable 装表 / vtable 槽位归属 / 全局单例。
    # 一旦身份确定，该类所有函数在 this 上的访问偏移就是**该类的真实成员**，
    # 把它们并入成员表，C1 才有判别力（此前只有残缺的声明成员表，847/1,282
    # 个类被当成"稀疏=放行"，C1 一条都没钉住）。
    _id_funcs = collections.defaultdict(set)
    for _a, _cn in (dict(jload("anchors/ctor_types.json", {}) or {}, **(jload("anchors/ctor_types_ext.json", {}) or {})) or {}).items():
        _ci = resolve(_cn); _fa = hx(_a)
        if _ci is not None and _fa is not None:
            _id_funcs[_ci].add(_fa)
    for _a, _cn in ((jload("anchors/structural_truth.json", {}) or {})
                    .get("vtable_install") or {}).items():
        _ci = resolve(_cn); _fa = hx(_a)
        if _ci is not None and _fa is not None:
            _id_funcs[_ci].add(_fa)
    _auth = jload("anchors/vtable_slot_authority.json", {}) or {}
    for _cn, _rec in (_auth.get("classes") or {}).items():
        _ci = resolve(_cn)
        if _ci is None:
            continue
        for _sl in (_rec.get("slots") or []):
            if isinstance(_sl, dict) and _sl.get("addr"):
                _fa = hx(str(_sl["addr"]))
                if _fa is not None:
                    _id_funcs[_ci].add(_fa)
    _fn_obs = collections.defaultdict(list)
    for _e in raw:
        if _e.get("type") != "MEMBER_ACCESS":
            continue
        _b = _e.get("base")
        if not (isinstance(_b, str) and _b.endswith(":this")):
            continue
        _fa = hx(_b.split(":")[0])
        if _fa is None:
            continue
        if _e.get("addr") and ("0x%08X" % int(str(_e["addr"]), 16)) in dropped_addr:
            continue
        try:
            _o = int(_e.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        _w = _e.get("width")
        _w = int(_w) if isinstance(_w, (int, float)) and _w > 0 else 4
        _fn_obs[_fa].append((_o, _w))
    _vfslots = {}
    try:
        _vfslots = jload(".omo/x443/vfptr_slots.json", {}) or {}
    except Exception:
        _vfslots = {}
    _bin_added = 0
    _bin_classes = 0
    for _ci, _fns in _id_funcs.items():
        _add = {}
        for _fa in _fns:
            for (_o, _w) in _fn_obs.get(_fa, ()):
                if _o > 0x10000:
                    continue          # 远超对象体的偏移属成员链，跳过
                _add[_o] = max(_add.get(_o, 0), _w)
        _vfn = resolve(_cn) if False else None
        if _add:
            _bin_classes += 1
        for _o, _w in _add.items():
            if _o not in U["members"][_ci]:
                U["members"][_ci][_o] = _w
                _bin_added += 1
    # 自身 vfptr 槽（多继承 0/4/8/12）：来自 ctor 装表序列的前导连续区
    for _cn, _offs in (_vfslots or {}).items():
        _ci = resolve(_cn)
        if _ci is None:
            continue
        for _o in _offs:
            if _o <= 0x20 and _o not in U["members"][_ci]:
                U["members"][_ci][_o] = 4
                _bin_added += 1
    print("[layouts] binary-identity member completion: %d classes, %d members added"
          % (_bin_classes, _bin_added), flush=True)

    # ---- 继承偏移的类型修正（派生类不能改变继承类型，父类 1 字节声明是占位符）----
    # 实证：LocomotionClass+0x50 声明 unsigned char，而 ShipLocomotionClass 同偏移是 double。
    _inh_fix = 0
    try:
        _cor = (jload("anchors/inherited_type_corrections.json", {}) or {}).get("fix") or {}
        for _cn_i, _d_i in _cor.items():
            _ci_i = resolve(_cn_i)
            if _ci_i is None:
                continue
            for _o_is, _v_i in _d_i.items():
                _o_i = int(_o_is, 16)
                _w_i = int((_v_i or {}).get("size") or 4)
                if U["members"][_ci_i].get(_o_i) != _w_i:
                    U["members"][_ci_i][_o_i] = _w_i
                    _inh_fix += 1
    except Exception as _e_i:
        print("[layouts] inherited type corrections skipped: %s" % _e_i, flush=True)
    print("[layouts] inherited type corrections applied: %d" % _inh_fix, flush=True)

    # ---- 布局缺口补全（外部身份 + 二进制观测）----
    # 审计结论：164 个可比类的观测里 45% 的偏移在声明成员表中缺失
    # （RulesClass 819/1161、ConvertClass 96/98）。缺成员会让 C1 **错误排除真解**。
    # 补全依据：类的身份来自 YRpp/装表（外部/二进制），成员来自其已确认函数在 this 上的
    # 实际访问偏移；属于祖先成员的偏移不补（那由继承展开负责）。
    _gap_added = 0
    try:
        _gapfill = (jload("anchors/layout_gap_fill.json", {}) or {}).get("fill") or {}
        for _cn9, _d9 in _gapfill.items():
            _ci9 = resolve(_cn9)
            if _ci9 is None:
                continue
            for _o9s, _w9 in _d9.items():
                _o9 = int(_o9s, 16)
                if _o9 not in U["members"][_ci9]:
                    U["members"][_ci9][_o9] = int(_w9)
                    _gap_added += 1
    except Exception as _e9:
        print("[layouts] gap-fill skipped: %s" % _e9, flush=True)
    print("[layouts] gap-fill from external identity: %d members" % _gap_added, flush=True)
    # ---------------- C1：成员偏移 ----------------
    # C1 密度门：布局只覆盖 >=70% dword 的类视为"完整"，缺失偏移可判负；
    # 稀疏布局（观测得到的成员表）缺失偏移不算反证 —— 实测证明多数布局是稀疏的：
    # TechnoClass 1312B 只有 257 个成员（78%），AnimClass 6324B 只有 65 个（4%）。
    dense = [False] * n
    for i in range(n):
        if not U["has_layout"][i]:
            continue
        sz = U["eff_size"][i]                # effective_size（含 observed extent 下界）
        if not sz or sz < 8:
            continue
        dense[i] = (len(U["members"][i]) * 4) >= 0.7 * sz
    dense_list = [i for i in range(n) if dense[i]]
    dense_mask = 0
    sparse_mask = 0
    for i in range(n):
        if dense[i]:
            dense_mask |= (1 << i)
        else:
            sparse_mask |= (1 << i)
    print("[C1] layout density gate: dense=%d sparse=%d (threshold 70%% dword coverage)"
          % (len(dense_list), n - len(dense_list)), flush=True)

    # C1 用字节覆盖模型：把每个成员展开成 [off, off+width) 区间并合并。
    # 这样 "dword 读 4 个连续 bool"（合法）不会被误判为宽度冲突；
    # 而 "byte 读 int 成员" 也天然合法（区间被覆盖）。
    intervals = [[] for _ in range(n)]
    for i in range(n):
        if not U["has_layout"][i]:
            continue
        iv = []
        for off, w in U["members"][i].items():
            ww = w if isinstance(w, int) and w > 0 else 4
            iv.append((off, off + ww))
        iv.sort()
        merged = []
        for a, b in iv:
            if merged and a <= merged[-1][1]:
                if b > merged[-1][1]:
                    merged[-1] = (merged[-1][0], b)
            else:
                merged.append((a, b))
        intervals[i] = merged

    def covers(ci, o, w):
        for (a, b) in intervals[ci]:
            if a <= o and o + w <= b:
                return True
            if a > o:
                return False
        return False

    c1_cache = {}
    c1_range_cache = {}

    def c1_ok_mask(o, w):
        key = (o, w)
        m = c1_range_cache.get(key)
        if m is None:
            # --strict-c1：稀疏布局不再放行，所有类都必须真正覆盖被访问的字节区间。
            # 这是检验 K 是否被「万能空类」支配的开关（Math 覆盖 968 簇就是该漏洞）。
            # 默认（可靠口径）：C1 只用「装得下」这条**必要条件**（c1_size_mask）。
            # 「缺成员即排除」依赖「布局完备」假设，而实测 class_layouts 缺 45% 观测偏移，
            # 假设不成立。对照实验（2026-10-30）：该判据只贡献 4 个唯一解（10,288 vs 10,284），
            # 却制造约 380 个矛盾簇 —— 收益 0.04%、代价是错误排除真解。
            # 布局因此按值域处理：成员是"已知的"，缺的是"未知"，不是"不存在"。
            # --c1-covers 恢复旧口径；--strict-c1 再叠加「稀疏布局不放行」。
            if "--c1-covers" in sys.argv or "--strict-c1" in sys.argv:
                m = 0 if "--strict-c1" in sys.argv else sparse_mask
                for ci in dense_list:
                    if covers(ci, o, w):
                        m |= (1 << ci)
            else:
                m = FULL
            c1_range_cache[key] = m
        return m

    _size_ok_cache = {}
    _exact_member_cache = {}

    def c1_size_mask(need):
        """对象尺寸硬下界：类的 effective_size 必须 >= 已观测到的最大访问末端。
        手工逆向时这是第一条排除规则（访问到 +0x500 的对象不可能是 40 字节的类），
        而基线 C1 对稀疏布局类无条件放行，让任意小类都能"覆盖"任意大的偏移。"""
        m = _size_ok_cache.get(need)
        if m is None:
            m = 0
            for _i in range(n):
                _sz = U["eff_size"][_i]
                if not _sz or int(_sz) >= need:
                    m |= (1 << _i)      # 尺寸未知的类不排除
            _size_ok_cache[need] = m
        return m

    def c1_mask(obs):
        """C1：dense 类必须覆盖每个被访问的字节区间；稀疏类只做"未知放行"。
        另加尺寸硬下界：类必须装得下观测到的最大偏移。"""
        key = tuple(sorted(obs))
        m = c1_cache.get(key)
        if m is None:
            m = FULL
            _need = 0
            for (o, w) in key:
                _ww = w if w else 4
                m &= c1_ok_mask(o, _ww)
                if o + _ww > _need:
                    _need = o + _ww
                if not m:
                    break
            if m and _need:
                m &= c1_size_mask(_need)
            c1_cache[key] = m
        return m

    def c1_width_conflict(ci, obs):
        """exact 类与观测的字节区间矛盾（只对 dense 布局成立；稀疏=布局缺口）"""
        if not dense[ci]:
            return []
        return [[o, w] for (o, w) in obs if not covers(ci, o, w if w else 4)]

        # ---- 规则 H：调用方多样性证伪被调方原型 ----
    # 同一被调方的 this 寄存器收到 >=3 个不同来源实体、且这些来源的
    # self-pin 类两两无公共后代 -> 没有任何类能同时充当这些对象的类，
    # 被调方原型 this 类被证伪（与 false_proto 同等处理）。
    self_pin_cls = {}          # entity id -> class index (direct proto evidence)
    for _e2 in raw:
        if _e2.get("type") != "FUNC_PARAM":
            continue
        _fr2 = _e2.get("from")
        if not (isinstance(_fr2, str) and _fr2.endswith(":this")):
            continue
        _a2 = hx(_fr2.split(":")[0])
        if _a2 is None or _a2 in false_proto_fns:
            continue
        _pr2 = parse_proto((protos.get("0x%08X" % _a2)
                            or protos.get("0x%x" % _a2) or {}).get("proto"))
        _ci2 = None
        if _pr2 and _pr2[1] == "__thiscall" and _pr2[2] and "this" in _pr2[2][0]:
            _ci2 = type_class(_pr2[2][0])
        if _ci2 is None and _a2 in owner_of_fn:
            _ci2 = owner_of_fn[_a2][0]      # 名字派生（与 C2 分支一致）
        if _ci2 is not None and pin_class_identified(_ci2):
            self_pin_cls["T:%X" % _a2] = _ci2
    reg_sources = collections.defaultdict(set)
    for _e in raw:
        if _e.get("type") != "CALL_ARG":
            continue
        _fr, _to = _e.get("from"), _e.get("to")
        if not (isinstance(_fr, str) and isinstance(_to, str)):
            continue
        if _fr not in REGS or not _to.endswith(":this"):
            continue
        _callee = hx(_to.split(":")[0])
        if _callee is None:
            continue
        _sr = site_reg.get((hx(_e.get("addr")) or 0, _fr))
        if _sr and _sr[1] and _sr[0] in ents:
            reg_sources[_callee].add(_sr[0])
    ruleh_falsified = {}
    for _callee, _srcs in reg_sources.items():
        if len(_srcs) < 3:
            continue
        clss = list(dict.fromkeys(self_pin_cls[s] for s in _srcs
                                  if s in self_pin_cls))
        if len(clss) < 3:
            continue
        disjoint = True
        for _i in range(len(clss)):
            for _j in range(_i + 1, len(clss)):
                if allowed_of(clss[_i]) & allowed_of(clss[_j]):
                    disjoint = False
                    break
            if not disjoint:
                break
        if disjoint and _callee not in false_proto_fns:
            false_proto_fns.add(_callee)
            ruleh_falsified[_callee] = [names[c] for c in clss[:6]]
    if ruleh_falsified:
        print("[ruleH] callee protos falsified by caller diversity: %d (%s)"
              % (len(ruleh_falsified),
                 ", ".join("%s<-%s" % (hex(k), v[0])
                           for k, v in list(ruleh_falsified.items())[:6])),
              flush=True)
# ---------------- C2：this 传递 ----------------
    c2_pin_log = {}
    name_proto_disagree = set()
    rule_s2_records = []
    c2_kind_mask = collections.defaultdict(dict)

    def c2_kind_hit(eid, kind, allowed):
        km = c2_kind_mask[eid]
        if allowed is not None:
            if kind == "self":
                km[kind] = ((km.get(kind) if km.get(kind) is not None
                             else FULL) & allowed)
            else:
                km.setdefault(kind, []).append(allowed)
    for e in raw:
        if e.get("type") != "CALL_ARG":
            continue
        fr, to = e.get("from"), e.get("to")
        if not (isinstance(fr, str) and isinstance(to, str)):
            continue
        if fr.startswith("vtable_slot_") or to.startswith("vtable_slot_"):
            continue
        if not to.endswith(":this"):
            continue
        callee = hx(to.split(":")[0])
        if callee is None or callee not in owner_of_fn:
            continue
        if callee in false_proto_fns:
            continue          # 被调方原型 this 类已被二进制证伪
        if not pin_class_identified(owner_of_fn[callee][0]):
            unidentified_pins[names[owner_of_fn[callee][0]]] += 1
            continue          # 规则 P：被调方类无二进制身份，pin 非证据
        if fr in REGS:
            # 寄存器实参：经洁净到达定义解析回调用方 this 实体后直接钉 C2
            # （约束通道，非合并——不再依赖跨帧等式传播）
            sr = site_reg.get((hx(e.get("addr")) or 0, fr))
            if sr and sr[1] and sr[0] in ents:
                c2_kind_hit(sr[0], "reg", allowed_of(owner_of_fn[callee][0]))
                fam["C2"][sr[0]] = fam["C2"].get(sr[0], FULL) & allowed_of(owner_of_fn[callee][0])
                c2_pin_log.setdefault(sr[0], []).append(
                    ["reg", "0x%08X" % callee, names[owner_of_fn[callee][0]]])
                census["C2"] += 1
            continue
        target = ent_id(fr, fn_at(hx(e.get("addr")) or 0))
        if target is None or target not in ents:
            continue
        c2_kind_hit(target, "edge", allowed_of(owner_of_fn[callee][0]))
        fam["C2"][target] = fam["C2"].get(target, FULL) & allowed_of(owner_of_fn[callee][0])
        c2_pin_log.setdefault(target, []).append(
            ["edge", "0x%08X" % callee, names[owner_of_fn[callee][0]]])
        census["C2"] += 1
    for e in raw:
        if e.get("type") != "FUNC_PARAM":
            continue
        fr = e.get("from")
        if not (isinstance(fr, str) and fr.endswith(":this")):
            continue
        a = hx(fr.split(":")[0])
        if a is None:
            continue
        if a in false_proto_fns:
            continue          # 该函数原型 this 类已被二进制证伪（corrections）
        target = ent_id(fr)
        if target not in ents:
            continue
        m = FULL
        pr = parse_proto((protos.get("0x%08X" % a) or protos.get("0x%x" % a) or {}).get("proto"))
        ci_this = None
        if (not _NO_NAME_PINS) and pr and pr[1] == "__thiscall" and pr[2] and "this" in pr[2][0]:
            ci_this = type_class(pr[2][0])
        if ci_this is not None and not pin_class_identified(ci_this):
            unidentified_pins[names[ci_this]] += 1
            ci_this = None    # 规则 P：proto 类无二进制身份
        if ci_this is not None:
            # proto 的 this 类型是二进制直接证据：优先于名字派生的 owner。
            # 二者不兼容时（实测 931 个函数，名字多把方法错挂到 AbstractClass 等
            # 宽类上）取 proto，避免 allowed_of(owner) ∩ allowed_of(proto) = ∅
            # 把整个实体判成冲突。
            m &= allowed_of(ci_this)
            if a in owner_of_fn and owner_of_fn[a][0] != ci_this:
                name_proto_disagree.add(a)
        elif a in owner_of_fn:
            if pin_class_identified(owner_of_fn[a][0]):
                m &= allowed_of(owner_of_fn[a][0])
            else:
                unidentified_pins[names[owner_of_fn[a][0]]] += 1
        if m != FULL:
            c2_kind_hit(target, "self", m)
            fam["C2"][target] = fam["C2"].get(target, FULL) & m
            c2_pin_log.setdefault(target, []).append(
                ["self", "0x%08X" % a,
                 names[owner_of_fn[a][0]] if a in owner_of_fn else "(unknown)"])
            census["C2"] += 1
    print("[C2] evidence=%d entities=%d name_proto_disagree=%d (proto this preferred)"
          % (census["C2"], len(fam["C2"]), len(name_proto_disagree)), flush=True)
    if unidentified_pins:
        print("[C2] rule-P unidentified-class pins skipped: %d (%s)"
              % (sum(unidentified_pins.values()),
                 ", ".join("%s=%d" % kv
                           for kv in unidentified_pins.most_common(12))), flush=True)

    # ---- 规则 G/J：实体级 C2 域修正 ----
    # G: 实体同时持有 self-pin（直接证据，且未被规则 S 证伪）与 reg/edge-pin
    #    （经由被调方原型，两跳推导），二者类不相交时至多一个为真 -> 保留
    #    self-pin 域，丢弃 reg/edge 域（计数并记录）。
    # J: 实体仅有 edge-pin 且来自 >=2 个不相交类 = 多态汇合槽（同一内存槽
    #    在不同程序点持有不同对象）；单变量域取各边域的并（每条边的约束
    #    仍按其站点成立），交集语义对汇合槽是过约束。
    rule_g_drops = 0
    rule_j_unions = 0
    for _eid, _m in list(fam["C2"].items()):
        if _m:
            continue
        _km = c2_kind_mask.get(_eid)
        if not _km:
            continue
        if _km.get("self"):
            fam["C2"][_eid] = _km["self"]
            rule_g_drops += 1
            continue
        _u = 0
        for _k, _l in _km.items():
            if _k == "self" or not _l:
                continue
            for _mm in _l:
                _u |= _mm
        if _u:
            fam["C2"][_eid] = _u
            rule_j_unions += 1
    if rule_g_drops or rule_j_unions:
        print("[ruleGJ] reg/edge pins dropped by self-pin: %d; "
              "junction unions: %d" % (rule_g_drops, rule_j_unions), flush=True)



    # ---------------- C3：虚表槽位（3 值：满足 ∪ 未知）----------------
    slot_mask = collections.defaultdict(int)
    for i in range(n):
        ss = U["slot_set"][i]
        if ss is not None and len(ss) >= 0:
            for s in ss:
                slot_mask[s] |= (1 << i)
    c3_known = collections.defaultdict(int)
    for i in range(n):
        if U["slot_set"][i] is not None:
            c3_known["any"] |= (1 << i)
    unknown_slot = FULL & ~c3_known["any"]

    def c3_mask(slot):
        # 虚调用要求接收者有 vtable，但**没有 vtable 数据 ≠ 没有 vtable**：
        # vtable_slot_authority 只覆盖 954 类，Sidebar / TacticalClass 等都没有记录。
        # 早先去掉 unknown_slot 使这些类被错误排除（实证 R:4FA350:ecx：
        # IDA 证明对象访问 this+0x53B0、Sidebar 21,468B 7/7 命中，却被 C3 排除）。
        return slot_mask.get(slot, 0) | unknown_slot

    # 次级 vptr 偏移 → 类掩码（C30：接收者类必须在 col_offset K 处有次级 vtable）
    _sec_off_mask = {}
    try:
        _ev30 = (jload("anchors/vtable_extent_evidence.json", {}) or {}).get("per_class") or {}
        for _cn30, _rc30 in _ev30.items():
            if not isinstance(_rc30, dict):
                continue
            for _s30 in (_rc30.get("secondary") or []):
                _co30 = (_s30 or {}).get("col_offset")
                if isinstance(_co30, int) and _co30 > 0:
                    _ci30 = resolve(_cn30)
                    if _ci30 is not None:
                        _sec_off_mask[_co30] = _sec_off_mask.get(_co30, 0) | (1 << _ci30)
    except Exception:
        _sec_off_mask = {}
    _n_vt_c3 = _n_vt_c30 = 0
    c3_garbage_slots = collections.Counter()
    for e in raw:
        if e.get("type") != "CALL_VTABLE":
            continue
        recv = e.get("receiver")
        try:
            slot = int(e.get("vtable_slot"))
        except (TypeError, ValueError):
            continue
        if not (0 <= slot <= 400):
            # 提取伪影（如 0x4000000000000001）：物理不可能的槽位，丢弃并计数
            c3_garbage_slots[slot] += 1
            continue
        site = hx(e.get("addr")) or 0
        if site in dropped_edges:
            continue
        if site in reloc_recv:
            recv = reloc_recv[site]
        if not recv and site in _vt_recv_by:
            # IDA 数据流解析的空接收者：this/member(N) + vptr 偏移 K
            _r30, _f30 = _vt_recv_by[site]
            _k30 = int(_r30.get("vptr_off") or 0)
            if (_r30.get("kind") or "") == "this":
                _tgt30 = "T:%X" % _f30
            else:
                _tgt30 = ent_id("0x%08X:this.member(0x%X)" % (_f30, int(_r30.get("off") or 0)), _f30)
            if _tgt30 and _tgt30 in ents:
                if _k30 == 0:
                    fam["C3"][_tgt30] = fam["C3"].get(_tgt30, FULL) & c3_mask(slot)
                    _n_vt_c3 += 1
                else:
                    _m30 = _sec_off_mask.get(_k30, 0)
                    if _m30:
                        fam["C3"][_tgt30] = fam["C3"].get(_tgt30, FULL) & _m30
                        _n_vt_c30 += 1
            continue
        target = ent_id(recv, fn_at(site)) if recv else None
        if target is None or target not in ents:
            continue
        fam["C3"][target] = fam["C3"].get(target, FULL) & c3_mask(slot)
        census["C3"] += 1
    if _n_vt_c3 or _n_vt_c30:
        print("[C3-vt] dataflow receivers: primary(C3)=%d secondary-offset=%d"
              % (_n_vt_c3, _n_vt_c30), flush=True)
    if c3_garbage_slots:
        print("[C3] garbage slots dropped: %s"
              % dict(c3_garbage_slots), flush=True)
    print("[C3] evidence=%d entities=%d" % (census["C3"], len(fam["C3"]),), flush=True)

    # ---- VR 接收者 origin C3/C30 落地（vr_origin_edges.json 的 edges 数组）----
    # 语义（meta「Consumption」+ vrorg report 消费建议 #1）：站点级接收者解析——
    # `call [r2+N]` 的接收者值 = origin 实体 E（T:/M:/P:/EAX:/G:，值槽实体，
    # 每次调用单值，跨站点 AND 合并类型可靠）。消费形式与 _vt_recv_by 分支
    # 同构：vptr_off==0 → c3_mask(slot)（主表槽位掩码）；vptr_off>0 →
    # _sec_off_mask（次级 vptr 偏移掩码）。落地是**加性**的：主 C3 循环对同一
    # 站点的既有落地（raw receiver → R: 聚合体 / fn:this）不撤销、不重定向。
    # 通道形态说明（相对 PF/SW 的偏离，设计层）：VR 边是 (site → recv) 单实体
    # 记录，不存在两个实体端点——站点/槽位伪节点不在解空间（实测 clusters 0 个
    # vtable_slot/W 实体），R:<fn>:<reg> 聚合体被 C10 通道按健全性过滤（多站点
    # AND 合并不健全，生成器侧零输出）⇒ 无健全双端点可进 _call_edges 等值通道，
    # 约束价值经 fam["C3"] 掩码落地流动（掩码与簇域计算天然相交，效果等同）。
    # 门控：站点在 dropped_edges（corrections 生态已裁决丢弃，含 VR corr=dropped
    # 683 条 + 后补 54 条）→ 跳过；tier=fullspan（入口别名线性末次 def）→ 仅
    # --allow-heuristics 层（vrorg report 分层消费建议）；tier=strict 常开。
    # corr=relocated 340 条保留：与 reloc_recv 语义一致（member 边偏移 225/225
    # 精确复现，拼写异形同实体；10 例深查冲突全部为旧管线遗物、VR 正确），
    # 且 corrections 的 reloc 落地因实体拼写差（十进制 vs 0x 十六进制）实际
    # 未生效——VR 落地恰好补上该缺口。实体预创建 touch 随行。
    _vr_c3 = _vr_c30 = _vr_skip_drop = _vr_skip_tier = _vr_touch = _vr_skip_sec = 0
    try:
        _vrj = jload("anchors/vr_origin_edges.json", {}) or {}
        _vr_heur = bool(getattr(args, "allow_heuristics", False))
        for _r1v in (_vrj.get("edges") or []):
            _e1v = (_r1v or {}).get("recv")
            if not (isinstance(_e1v, str) and _e1v):
                continue
            if _e1v.startswith(("R:", "V:")):
                continue
            _a1v = hx((_r1v or {}).get("site"))
            if _a1v is None:
                continue
            if _a1v in dropped_edges:
                _vr_skip_drop += 1
                continue
            if (_r1v or {}).get("tier") != "strict" and not _vr_heur:
                _vr_skip_tier += 1
                continue
            try:
                _slot1v = int((_r1v or {}).get("slot"))
                _k1v = int((_r1v or {}).get("vptr_off") or 0)
            except (TypeError, ValueError):
                continue
            if not (0 <= _slot1v <= 400):
                continue
            if _e1v not in ents:
                touch(_e1v, _e1v)
                _vr_touch += 1
            if _k1v == 0:
                fam["C3"][_e1v] = fam["C3"].get(_e1v, FULL) & c3_mask(_slot1v)
                _vr_c3 += 1
            else:
                _m1v = _sec_off_mask.get(_k1v, 0)
                if _m1v:
                    fam["C3"][_e1v] = fam["C3"].get(_e1v, FULL) & _m1v
                    _vr_c30 += 1
                else:
                    _vr_skip_sec += 1
        print("[VR] receiver-origin C3=%d C30=%d (skip: dropped=%d tier=%d "
              "no-sec-mask=%d, new-ents=%d)"
              % (_vr_c3, _vr_c30, _vr_skip_drop, _vr_skip_tier, _vr_skip_sec,
                 _vr_touch), flush=True)
    except Exception as _e_vr:
        print("[VR] receiver-origin landing skipped: %r" % _e_vr, flush=True)
    # ---- PU3 pu6：参数虚调用槽位占用 → C3 落地（pu3_usage.json pu6_events）----
    # 语义（PU v2 meta PU6，ffl12 同引擎）：P:fn:k 经 mov R2,[R1]; call [R2+N]
    # 虚派发 ⇒ domain(P:fn:k) ⊆ slot N 的占用类族（OT 语义应用到参数）。
    # 消费形式与 VR/_vt_recv_by 分支同构：vptr_off==0 → c3_mask(slot) 主表
    # 槽位掩码（三值：满足 ∪ 未知）；多槽观测 = 同实体多次 AND 合并（C3 主环
    # 同址多落地先例）。落地在 rule S2 之前（C3 二进制证据参与驳回 C2 pin）。
    # 加性落地，不改主 C3 环既有证据；census["C3"] 计入。
    try:
        _pu3j = jload("anchors/pu3_usage.json", {}) or {}
        _n_pu6 = _n_pu6_touch = 0
        for _r6 in (_pu3j.get("pu6_events") or []):
            _e6 = (_r6 or {}).get("ent")
            if not isinstance(_e6, str):
                continue
            _m6 = FULL
            for _s6 in ((_r6 or {}).get("slots") or []):
                try:
                    _slot6 = int(_s6)
                except (TypeError, ValueError):
                    continue
                if not (0 <= _slot6 <= 400):
                    continue
                _m6 &= c3_mask(_slot6)
            if _m6 == FULL:
                continue
            if _e6 not in ents:
                touch(_e6, _e6)
                _n_pu6_touch += 1
            fam["C3"][_e6] = fam["C3"].get(_e6, FULL) & _m6
            census["C3"] += 1
            _n_pu6 += 1
        print("[PU3] pu6 vcall slot-occupancy params -> C3: %d (new-ents=%d)"
              % (_n_pu6, _n_pu6_touch), flush=True)
    except Exception as _e_pu6:
        print("[PU3] pu6 landing skipped: %r" % _e_pu6, flush=True)
    # ---- 规则 S2：C3 二进制证据驳回 C2 pin ----
    # 实体的 C2 族域与 C3 域（虚表槽位实测）交为空 -> 钉住族中每个类都缺
    # 某个被调槽位，即该类不可能是接收者类；C2 pin（til/proto 推导）被
    # 二进制证据驳回 -> 丢弃 C2 pin，保留 C3。
    rule_s2_drops = 0
    for _eid, _m in list(fam["C2"].items()):
        if not _m:
            continue
        _c3 = fam["C3"].get(_eid)
        if _c3 is None:
            continue
        if _m & _c3:
            continue
        dropped_pins = c2_pin_log.get(_eid, [])[:4]
        fam["C2"][_eid] = FULL
        rule_s2_drops += 1
        c2_pin_log.pop(_eid, None)
        rule_s2_records.append({"entity": _eid,
                                "pin_classes": [names[i] for i in range(n)
                                                if (_m >> i) & 1][:8],
                                "c3_classes": _c3.bit_count()})
    if rule_s2_drops:
        print("[ruleS2] C2 pins refuted by C3 dropped: %d" % rule_s2_drops,
              flush=True)

    # ---------------- C4：ctor/dtor 装表 EXACT ----------------
    src = collections.defaultdict(lambda: {"export": set(), "committed": set()})
    for a, cname in (dict(jload("anchors/ctor_types.json", {}) or {}, **(jload("anchors/ctor_types_ext.json", {}) or {})) or {}).items():
        ci = resolve(cname)
        aa = hx(a)
        if ci is not None and aa is not None:
            src[aa]["committed"].add(ci)
    # structural_truth 的 vtable_install 有误报：把**栈上局部对象**的装表也记成了 this 装表。
    # 实证 0x4770E0：`mov [esp+var_A0], offset ??_7?$TypeList@H@@6B@` 是构造局部 TypeList<int>，
    # YRpp 正确地把该函数归到 INISection。交叉验证：只采信同时出现在 facts.this_installs
    # （带目标偏移，off=0 才是 this）或 ctor_types 里的条目 —— 实测 1,398 条中 1,365 条互证，
    # 33 条仅存于 structural_truth，其中 14 条完全无佐证，予以剔除。
    _inst_fn = set()
    if facts:
        for _fn5, _site5, _off5, _sym5 in facts["this_installs"]:
            if _off5 == 0:
                _inst_fn.add(_fn5)
    _ct_fn5 = set()
    for _a5, _c5 in (dict(jload("anchors/ctor_types.json", {}) or {}, **(jload("anchors/ctor_types_ext.json", {}) or {})) or {}).items():
        _aa5 = hx(_a5)
        if _aa5 is not None:
            _ct_fn5.add(_aa5)
    _st_unverified = 0
    for a, cname in ((jload("anchors/structural_truth.json", {}) or {}).get("vtable_install") or {}).items():
        ci = resolve(cname)
        aa = hx(a)
        if ci is None or aa is None:
            continue
        if aa not in _inst_fn and aa not in _ct_fn5:
            _st_unverified += 1
            continue
        src[aa]["committed"].add(ci)
    if _st_unverified:
        print("[C4] structural_truth entries dropped (no this_install / ctor corroboration): %d"
              % _st_unverified, flush=True)
    if facts:
        for fn, site, off, sym in facts["this_installs"]:
            if off != 0:
                continue
            ci = resolve(sym)
            if ci is not None:
                src[fn]["export"].add(ci)
    c4_disagree = []
    for aa, rec in src.items():
        ex, cm = rec["export"], rec["committed"]
        pick = ex if len(ex) == 1 else (cm if len(ex) == 0 and len(cm) == 1 else None)
        if pick is None:
            if len(ex | cm) > 1:
                c4_disagree.append({"func": "0x%08X" % aa,
                                    "export": [names[c] for c in sorted(ex)],
                                    "committed": [names[c] for c in sorted(cm)]})
            continue
        eid = "T:%X" % aa
        if eid in ents:
            ci = next(iter(pick))
            exact[eid].append((ci, "C4"))
            exact_count["C4"] += 1
            census["C4"] += 1
    _c4_noent = sum(1 for aa, rec in src.items()
                    if (len(rec["export"]) == 1 or (len(rec["export"]) == 0 and len(rec["committed"]) == 1))
                    and ("T:%X" % aa) not in ents)
    print("[C4] exact this=%d source_disagreements=%d pinned_no_entity=%d"
          % (exact_count["C4"], len(c4_disagree), _c4_noent), flush=True)

    # ---------------- C5：operator new 长度 EXACT ----------------
    c5_link = []
    size_obs = collections.defaultdict(collections.Counter)
    size_mask_cache = {}

    def size_mask(sz):
        m = size_mask_cache.get(sz)
        if m is None:
            m = 0
            for i in range(n):
                if U["eff_size"][i] == sz:
                    m |= (1 << i)
            size_mask_cache[sz] = m
        return m

    def known_size(ci):
        s = U["eff_size"][ci]
        return s

    if facts:
        unknown_size = 0
        for i in range(n):
            if U["size"][i] is None:
                unknown_size |= (1 << i)
        ctor_calls = collections.defaultdict(list)
        for fn, a, reg, tgt in facts["ctor_calls"]:
            ctor_calls[fn].append((a, tgt, reg))
        for lst in ctor_calls.values():
            lst.sort()
        _c5_exact = 0
        _c5_fallback = 0
        for fn, site, size, dest in facts["alloc_sites"]:
            eid = "N:%X" % site
            # 分配尺寸是二进制事实：精确匹配优先；无布局的类不借此白拿通行证
            m = size_mask(size)
            if not m:
                m = unknown_size          # 尺寸表本身失真时才退回通配
                _c5_fallback += 1
            else:
                _c5_exact += 1
            if m and m != FULL:
                fam["C5"][eid] = fam["C5"].get(eid, FULL) & m
                census["C5"] += 1
            if not dest:
                continue
            for (ca, tgt, reg) in ctor_calls.get(fn, ()):
                if ca <= site:
                    continue
                if ca - site > 0x200:
                    break
                if reg == dest:
                    # `new` 之后紧跟、且返回值寄存器一致的那个 ctor，就是被构造的类。
                    # 不再要求 ctor 类尺寸 == 分配尺寸：尺寸表本身失真（CCFileClass 声明 84
                    # 却写 +100），这条等式会挡掉绝大多数真实分配点（实测只连上 6/842）。
                    t_eid = "T:%X" % tgt
                    _c5_ctor_hits = [ci for ci, _s in exact.get(t_eid, ())]
                    if _c5_ctor_hits and not any(
                            _ci != _c5_ctor_hits[0] for _ci, _s in exact.get(eid, ())):
                        for ci in _c5_ctor_hits:
                            exact[eid].append((ci, "C5:alloc-ctor"))
                            exact_count["C5"] = exact_count.get("C5", 0) + 1
                            census["C5"] += 1
                            size_obs[ci][size] += 1
                        c5_link.append((eid, t_eid))
                    break
    print("[C5] alloc size exact=%d fallback=%d" % (_c5_exact, _c5_fallback), flush=True)
    print("[C5] alloc_sites=%d size_validated_links=%d classes_with_size_evidence=%d"
          % (len((facts or {}).get("alloc_sites", [])), len(c5_link), len(size_obs)), flush=True)

    # ---------------- C6：vtable 身份 → 槽位数 EXACT（3 值）----------------
    sc_mask_cache = {}

    def sc_mask(sc):
        m = sc_mask_cache.get(sc)
        if m is None:
            m = 0
            for i in range(n):
                if U["slot_count"][i] == sc:
                    m |= (1 << i)
            sc_mask_cache[sc] = m
        return m

    known_sc = 0
    for i in range(n):
        if U["slot_count"][i] is not None:
            known_sc |= (1 << i)
    unknown_sc = FULL & known_sc
    if facts:
        # X154: 派生类构造会先装基类 vtable、后装派生类 vtable（MSVC 语义）。
        # 逐条 install 施加 C6 会把"先装的基类槽数"当成对象的槽数，与 C4 钉出的
        # 派生类互相矛盾（实测 24 个冲突）。对象的运行时类 = **最后一次**在
        # offset 0 安装的 vtable，故按 (fn, off) 取 site 最大者。
        _final_install = {}
        for fn, site, off, sym in facts["this_installs"]:
            if off != 0:
                continue
            key = fn
            cur = _final_install.get(key)
            if cur is None or site > cur[0]:
                _final_install[key] = (site, sym)
        for fn, (site, sym) in _final_install.items():
            ci = resolve(sym)
            if ci is None:
                continue
            eid = "T:%X" % fn
            if eid not in ents:
                continue
            sc = U["slot_count"][ci]
            if sc is None:
                continue
            m = sc_mask(sc) | unknown_sc
            if m != FULL:
                fam["C6"][eid] = fam["C6"].get(eid, FULL) & m
                census["C6"] += 1
    print("[C6] evidence=%d entities=%d" % (census["C6"], len(fam["C6"])), flush=True)

    # ---------------- MT：??_7 成员安装 → 按值成员类型（严格，C4 推广到 off≠0）----------------
    try:
        _name_ix2 = {}
        for _i2 in range(n):
            _name_ix2.setdefault(str(names[_i2]).lower(), _i2)
        for _rec in (jload("anchors/member_type_installs.json", {}) or {}).get("evidence") or []:
            _e = _rec.get("ent")
            _clss = _rec.get("classes") or []
            if not isinstance(_e, str):
                continue
            m2 = 0
            for _c2 in _clss:
                _ix = _name_ix2.get(str(_c2).lower())
                if _ix is not None:
                    m2 |= (1 << _ix)
            if not m2:
                continue
            if _e not in ents:
                touch(_e, _e)
            fam["MT"][_e] = fam["MT"].get(_e, FULL) & m2
            census["MT"] += 1
        print("[MT] install-typed members: evidence=%d entities=%d" % (census["MT"], len(fam["MT"])), flush=True)
    except Exception as _e_mt:
        print("[MT] skipped: %r" % _e_mt, flush=True)

    # ---------------- MT2：装表成员类型净增（mt2_installs.json，并入 MT 同通道）----------------
    # 语义与 MT (member_type_installs.json) 同族：engine-gated this-based installs
    # (mptr this+off derived-pointer 通道)，net-new vs member_type_installs(329)
    # ∪ fixmr mt_final(583)；记录形态同 ent+classes，按 _name_ix2 类掩码
    # AND 合入 fam["MT"]，census["MT"] 计入。不改证据族语义（同通道加性）。
    try:
        _n_mt2 = 0
        for _rec in (jload("anchors/mt2_installs.json", {}) or {}).get("evidence") or []:
            _e2b = _rec.get("ent")
            if not isinstance(_e2b, str):
                continue
            m2b = 0
            for _c2b in (_rec.get("classes") or []):
                _ix2b = _name_ix2.get(str(_c2b).lower())
                if _ix2b is not None:
                    m2b |= (1 << _ix2b)
            if not m2b:
                continue
            if _e2b not in ents:
                touch(_e2b, _e2b)
            fam["MT"][_e2b] = fam["MT"].get(_e2b, FULL) & m2b
            census["MT"] += 1
            _n_mt2 += 1
        print("[MT2] installs net-new merged into MT: %d" % _n_mt2, flush=True)
    except Exception as _e_mt2:
        print("[MT2] skipped: %r" % _e_mt2, flush=True)

    # ---------------- MR：成员类型经接收者域（dom(M) = member_type(dom(T:fn), off)）----------------
    try:
        _name_ix3 = _name_ix2
        for _rec in (jload("anchors/member_by_receiver.json", {}) or {}).get("evidence") or []:
            _e = _rec.get("ent")
            _clss = _rec.get("classes") or []
            if not isinstance(_e, str):
                continue
            m3 = 0
            for _c3 in _clss:
                _ix3 = _name_ix3.get(str(_c3).lower())
                if _ix3 is not None:
                    m3 |= (1 << _ix3)
            if not m3:
                continue
            if _e not in ents:
                touch(_e, _e)
            fam["MR"][_e] = fam["MR"].get(_e, FULL) & m3
            census["MR"] += 1
        print("[MR] receiver-typed members: evidence=%d entities=%d" % (census["MR"], len(fam["MR"])), flush=True)
    except Exception as _e_mr:
        print("[MR] skipped: %r" % _e_mr, flush=True)

    # ---------------- MR9：两遍法净增（mr9_member_by_receiver.json，并入 MR 同通道）----------------
    # 语义与 MR7 (member_by_receiver.json) 完全一致：strict 两遍法 regen
    # (minclass_clusters + minclass_assignments, ANCHORED-only) 的 net-new 子集
    # (meta: old 12,723 / new_full 14,530 / lost 21 → 1,828 净增)。记录形态同
    # ent+classes（含基元/模板全型词汇），按 _name_ix3 类掩码 AND 合入
    # fam["MR"]，census["MR"] 计入。不改证据族语义（同通道加性）。
    try:
        _n_mr9 = 0
        for _rec in (jload("anchors/mr9_member_by_receiver.json", {}) or {}).get("evidence") or []:
            _e9b = _rec.get("ent")
            if not isinstance(_e9b, str):
                continue
            m9b = 0
            for _c9b in (_rec.get("classes") or []):
                _ix9b = _name_ix3.get(str(_c9b).lower())
                if _ix9b is not None:
                    m9b |= (1 << _ix9b)
            if not m9b:
                continue
            if _e9b not in ents:
                touch(_e9b, _e9b)
            fam["MR"][_e9b] = fam["MR"].get(_e9b, FULL) & m9b
            census["MR"] += 1
            _n_mr9 += 1
        print("[MR9] two-pass net-new merged into MR: %d" % _n_mr9, flush=True)
    except Exception as _e_mr9:
        print("[MR9] skipped: %r" % _e_mr9, flush=True)

    # ---------------- MD：成员二进制事实类型反钉接收者（严格）----------------
    try:
        _n_md = 0
        for _rec in (jload("anchors/receiver_by_member.json", {}) or {}).get("evidence") or []:
            _e7 = _rec.get("ent")
            if not isinstance(_e7, str):
                continue
            m7 = 0
            for _c7 in (_rec.get("classes") or []):
                _ix8 = _name_ix2.get(str(_c7).lower())
                if _ix8 is not None:
                    m7 |= (1 << _ix8)
            if not m7:
                continue
            if _e7 not in ents:
                touch(_e7, _e7)
            fam["MD"][_e7] = fam["MD"].get(_e7, FULL) & m7
            _n_md += 1
        census["MD"] = _n_md
        print("[MD] member-discriminated receivers: %d" % _n_md, flush=True)
    except Exception as _e_md:
        print("[MD] skipped: %r" % _e_md, flush=True)

    # ---------------- 通用类型证据族加载器（SP/IT/FS）----------------
    def _norm_ty(t):
        t = str(t).strip()
        if t == "const char *" or t == "const char*":
            return "char*"
        return t.replace(" *", "*").replace("* ", "*")

    def _load_type_family_dict(evid_list, famname):
        n = 0
        for _rec in (evid_list or []):
            _e9 = _rec.get("ent")
            if not isinstance(_e9, str):
                continue
            m9 = 0
            for _t9 in (_rec.get("types") or []):
                _ixa = _name_ix2.get(_norm_ty(_t9).lower())
                if _ixa is not None:
                    m9 |= (1 << _ixa)
            if not m9:
                continue
            if _e9 not in ents:
                touch(_e9, _e9)
            fam[famname][_e9] = fam[famname].get(_e9, FULL) & m9
            n += 1
        return n

    def _load_type_family(fname, famname, gate_heuristic=False):
        if gate_heuristic and not getattr(args, "allow_heuristics", False):
            return 0
        n = 0
        for _rec in (jload(fname, {}) or {}).get("evidence") or []:
            _e8 = _rec.get("ent")
            if not isinstance(_e8, str):
                continue
            m8 = 0
            for _t8 in (_rec.get("types") or []):
                _ix9 = _name_ix2.get(_norm_ty(_t8).lower())
                if _ix9 is not None:
                    m8 |= (1 << _ix9)
            if not m8:
                continue
            if _e8 not in ents:
                touch(_e8, _e8)
            fam[famname][_e8] = fam[famname].get(_e8, FULL) & m8
            n += 1
        return n

    try:
        census["SP"] = _load_type_family("anchors/string_param_types.json", "SP")
        print("[SP] string-literal params: %d" % census["SP"], flush=True)
    except Exception as _e_sp:
        print("[SP] skipped: %r" % _e_sp, flush=True)
    try:
        census["IT"] = _load_type_family("anchors/insn_member_types.json", "IT")
        print("[IT] insn-semantic member types: %d" % census["IT"], flush=True)
    except Exception as _e_it:
        print("[IT] skipped: %r" % _e_it, flush=True)
    try:
        census["FS"] = _load_type_family("anchors/format_param_types.json", "FS", gate_heuristic=True)
        print("[FS] format-string args: %d" % census["FS"], flush=True)
    except Exception as _e_fs:
        print("[FS] skipped: %r" % _e_fs, flush=True)
    try:
        _pud = jload("anchors/param_usage_types_v2.json", {}) or {}
        _n_pug = 0
        for _rec in (_pud.get("gran_evidence") or []):
            _epu = _rec.get("ent")
            if not isinstance(_epu, str):
                continue
            m_pu = 0
            for _tpu in (_rec.get("types") or []):
                _ixpu = _name_ix2.get(_norm_ty(_tpu).lower())
                if _ixpu is not None:
                    m_pu |= (1 << _ixpu)
            if not m_pu:
                continue
            if _epu not in ents:
                touch(_epu, _epu)
            fam["PU"][_epu] = fam["PU"].get(_epu, FULL) & m_pu
            _n_pug += 1
        census["PU"] = _n_pug
        print("[PU] param granularity: %d" % _n_pug, flush=True)
    except Exception as _e_pu:
        print("[PU] gran skipped: %r" % _e_pu, flush=True)
    # ---- PU3 gran 净增（pu3_usage.json gran_evidence，并入 PU 同通道）----
    # ffl12 同引擎（semantics identical to param_usage_types_v2 PU2）delta 扫描
    # 的 net-new（baseline 710 → +9）：PP:fn:k:off 基元粒度标签，types 经
    # _norm_ty+_name_ix2 掩码 AND 合入 fam["PU"]，census["PU"] 计入。
    try:
        _pu3g = jload("anchors/pu3_usage.json", {}) or {}
        _n_pu3g = 0
        for _rec in (_pu3g.get("gran_evidence") or []):
            _ep3 = _rec.get("ent")
            if not isinstance(_ep3, str):
                continue
            m_p3 = 0
            for _tp3 in (_rec.get("types") or []):
                _ixp3 = _name_ix2.get(_norm_ty(_tp3).lower())
                if _ixp3 is not None:
                    m_p3 |= (1 << _ixp3)
            if not m_p3:
                continue
            if _ep3 not in ents:
                touch(_ep3, _ep3)
            fam["PU"][_ep3] = fam["PU"].get(_ep3, FULL) & m_p3
            census["PU"] += 1
            _n_pu3g += 1
        print("[PU3] gran net-new merged into PU: %d" % _n_pu3g, flush=True)
    except Exception as _e_pu3g:
        print("[PU3] gran skipped: %r" % _e_pu3g, flush=True)
    try:
        _n_ot = 0
        for _rec in (jload("anchors/occupant_this_types.json", {}) or {}).get("evidence") or []:
            _eot = _rec.get("ent")
            if not isinstance(_eot, str):
                continue
            m_ot = 0
            for _cot in (_rec.get("classes") or _rec.get("types") or []):
                _ixot = resolve(_cot)
                if _ixot is not None:
                    m_ot |= (1 << _ixot)
            if not m_ot:
                continue
            if _eot not in ents:
                touch(_eot, _eot)
            fam["OT"][_eot] = fam["OT"].get(_eot, FULL) & m_ot
            _n_ot += 1
        census["OT"] = _n_ot
        print("[OT] occupant this types: %d" % _n_ot, flush=True)
    except Exception as _e_ot:
        print("[OT] skipped: %r" % _e_ot, flush=True)
    try:
        census["SG"] = _load_type_family("anchors/slot_granularity_types.json", "SG")
        print("[SG] slot granularity types: %d" % census["SG"], flush=True)
    except Exception as _e_sg:
        print("[SG] skipped: %r" % _e_sg, flush=True)
    # ---- EAX/GS 黑块（用户点名主攻坚）：RA/RD/GX 三族 ----
    try:
        census["RA"] = _load_type_family("anchors/eax_arith_types.json", "RA")
        print("[RA] eax arithmetic-consumption types: %d" % census["RA"], flush=True)
    except Exception as _e_ra:
        print("[RA] skipped: %r" % _e_ra, flush=True)
    try:
        # RD：类候选集（消费侧 vptr 链/成员读偏移证据）——resolve() 走
        # 别名/模板归一（OT 先例）；未解析 token（E4Recv_* 等 173 名）按位丢弃
        _n_rd = 0
        for _rec in (jload("anchors/eax_dispatch_types.json", {}) or {}).get("evidence") or []:
            _erd = _rec.get("ent")
            if not isinstance(_erd, str):
                continue
            m_rd = 0
            for _crd in (_rec.get("types") or []):
                _ixrd = resolve(_crd)
                if _ixrd is not None:
                    m_rd |= (1 << _ixrd)
            if not m_rd:
                continue
            if _erd not in ents:
                touch(_erd, _erd)
            fam["RD"][_erd] = fam["RD"].get(_erd, FULL) & m_rd
            _n_rd += 1
        census["RD"] = _n_rd
        print("[RD] eax dispatch class-candidates: %d" % _n_rd, flush=True)
    except Exception as _e_rd:
        print("[RD] skipped: %r" % _e_rd, flush=True)
    try:
        census["GX"] = _load_type_family("anchors/gs_site_args.json", "GX")
        print("[GX] gs site-arg types: %d" % census["GX"], flush=True)
    except Exception as _e_gx:
        print("[GX] skipped: %r" % _e_gx, flush=True)
    # SGN：符号判别器（signedness_types.json evidence 数组，1,120 recs）。语义 =
    # 收窄：cdq/idiv/sar => int、shr(N>8)/jcc-unsigned => unsigned int，把
    # [int, unsigned int] 双候选域收窄到单值（meta：dual_narrowed=1,100 +
    # single_confirmed=20）。与 RA 族的 int 证据同簇时 AND 合并自然生效（两者
    # 都是 AND 掩码，双候选域 ∩ 单值掩码 => 单值）。实体词汇 EAX:FN:site /
    # RET:FN / S:FN:slot / P:FN:K（RA/RD/SG 族先例）。族名 SGN（SG 已被
    # stack-slot granularity 占用，SA-for-SP 改名先例）。
    try:
        census["SGN"] = _load_type_family("anchors/signedness_types.json", "SGN")
        print("[SGN] sign-discriminator types: %d" % census["SGN"], flush=True)
    except Exception as _e_sgn:
        census["SGN"] = census.get("SGN", 0)
        print("[SGN] skipped: %r" % _e_sgn, flush=True)
    # G2：GS 站点实参 v2（gs_site_args_v2.json evidence 数组，10 recs）——全库
    # 虚分派站点 push 实参 origin 类型（gs-const-wide/gs-const01/gs-str/gs-cons*，
    # occupant_callarg 守卫），实体 GS:slot:k:root，取代 GX v1 的窄池。同文件
    # 26 条 eq 边另走 EF 同款双向通道（见 [G2] eq 行）。
    try:
        census["G2"] = _load_type_family("anchors/gs_site_args_v2.json", "G2")
        print("[G2] gs-site-arg v2 types: %d" % census["G2"], flush=True)
    except Exception as _e_g2:
        census["G2"] = census.get("G2", 0)
        print("[G2] types skipped: %r" % _e_g2, flush=True)
    # R1：RA1 官方源码类证据（ra1_types.json evidence 数组，2 recs）——
    # strict-name 桥接 our Class::Method <-> RA1 类别名（唯一 owner）。按 ra1
    # phase-1 pooled 精度 0.859（分层 B+C-clean）归启发式层：gate --allow-heuristics
    # （FS 先例：gate 关闭时打印 0）。宽域过滤生成器侧已做（domain>8 的 T:FN）。
    try:
        census["R1"] = _load_type_family("anchors/ra1_types.json", "R1", gate_heuristic=True)
        print("[R1] ra1-official class types: %d" % census["R1"], flush=True)
    except Exception as _e_r1:
        census["R1"] = census.get("R1", 0)
        print("[R1] skipped: %r" % _e_r1, flush=True)
    # V2K：vera20k 外部 oracle（vera20k_types.json evidence 数组，16 recs）——
    # crossref 例上下文 'Class::Method @ 0xADDR' 挖掘、严格归因 + 最高频限定名，
    # 类前缀经 class_name_align canon 化。按 v20k 池精度 92.2% 归启发式层：
    # gate --allow-heuristics（FS 先例）。
    try:
        census["V2K"] = _load_type_family("anchors/vera20k_types.json", "V2K", gate_heuristic=True)
        print("[V2K] vera20k oracle class types: %d" % census["V2K"], flush=True)
    except Exception as _e_v2k:
        census["V2K"] = census.get("V2K", 0)
        print("[V2K] skipped: %r" % _e_v2k, flush=True)
    # V2B：vera20k 第二轮宽域（vera20k_types_v2.json evidence 数组，126 recs）——
    # 同 V2K 挖掘口径，归因面从 T-only 放宽到 R:<addr>:ecx receiver（主）+ T 宽域
    # 残差（v1 已覆盖的 T 排除）。宽域过滤 domain>8，pinned/narrow 实体不动。
    # 按全池 615 精度 92.2% 归启发式层：gate --allow-heuristics（V2K/R1 先例）。
    try:
        census["V2B"] = _load_type_family("anchors/vera20k_types_v2.json", "V2B", gate_heuristic=True)
        print("[V2B] vera20k r2 receiver types: %d" % census["V2B"], flush=True)
    except Exception as _e_v2b:
        census["V2B"] = census.get("V2B", 0)
        print("[V2B] skipped: %r" % _e_v2b, flush=True)
    # YVP：YRpp 虚函数参数类型（yrpp_vparams.json evidence 数组，4,172 recs）——
    # YRpp 头文件逐类主虚表重建（主基类=首个声明基类；次级 COM 接口虚函数按名集
    # 排除；(name, arity) 匹配 override；槽号=vtable_slot_authority 主表编号），
    # 实体 GS:slot:k:addr，via=yrpp-param。八道发射门 + n=20 分层验证 20/20（含
    # intfam 符号对）。strict 层，与 C22/C25 同源 YRpp 头文件证据（对齐口径）。
    try:
        census["YVP"] = _load_type_family("anchors/yrpp_vparams.json", "YVP")
        print("[YVP] YRpp vparam types: %d" % census["YVP"], flush=True)
    except Exception as _e_yvp:
        census["YVP"] = census.get("YVP", 0)
        print("[YVP] skipped: %r" % _e_yvp, flush=True)
    if getattr(args, "allow_heuristics", False):
        try:
            census["RU"] = _load_type_family("anchors/ret_usage_types_gated.json", "RU")
            print("[RU] ret usage types: %d" % census["RU"], flush=True)
        except Exception as _e_ru:
            print("[RU] skipped: %r" % _e_ru, flush=True)
        try:
            raise SystemExit(0) if False else None
            for _i2, _nm2 in enumerate(names):
                _sz2 = U["size"][_i2] if _i2 < len(U["size"]) else None
                if isinstance(_sz2, int) and _sz2 > 0:
                    _asz.setdefault(_sz2, 0)
                    _asz[_sz2] |= (1 << _i2)
            _n_as = 0
            for _rec in (jload("anchors/alloc_size_types_gated.json", {}) or {}).get("evidence") or []:
                _ea2 = _rec.get("ent")
                _sizes = _rec.get("sizes") or []
                if not isinstance(_ea2, str) or not _sizes:
                    continue
                m2 = 0
                for _tot in _sizes:
                    _tot = int(_tot)
                    _mk = _asz.get(_tot)
                    if _mk:
                        m2 |= _mk
                if not m2:
                    continue
                if _ea2 not in ents:
                    touch(_ea2, _ea2)
                fam["AS"][_ea2] = fam["AS"].get(_ea2, FULL) & m2
                _n_as += 1
            census["AS"] = _n_as
            print("[AS] alloc size types: %d" % _n_as, flush=True)
        except Exception as _e_as:
            print("[AS] skipped: %r" % _e_as, flush=True)
    else:
        census["RU"] = 0
        census["AS"] = 0
    try:
        census["IG"] = _load_type_family("anchors/insn_granularity_types.json", "IG")
        print("[IG] granularity types: %d" % census["IG"], flush=True)
    except Exception as _e_ig:
        print("[IG] skipped: %r" % _e_ig, flush=True)
    try:
        census["IV"] = _load_type_family("anchors/insn_value_types.json", "IV")
        print("[IV] insn value types: %d" % census["IV"], flush=True)
    except Exception as _e_iv:
        print("[IV] skipped: %r" % _e_iv, flush=True)
    try:
        _msd = jload("anchors/insn_misc_types.json", {}) or {}
        census["MS"] = _load_type_family_dict(_msd.get("strict_evidence"), "MS")
        print("[MS] string-literal returns: %d" % census["MS"], flush=True)
        if getattr(args, "allow_heuristics", False):
            census["MH"] = _load_type_family_dict(_msd.get("heur_evidence"), "MH")
            print("[MH] jump-table enums: %d" % census["MH"], flush=True)
        else:
            census["MH"] = 0
    except Exception as _e_ms:
        print("[MS] skipped: %r" % _e_ms, flush=True)

    # ---------------- 编译器签名第四层：AL/LS/SS/PP（严格，align_scale_types）----------------
    # anchors/align_scale_types.json：对齐掩码 / lea 缩放 / 结构布局签名 / 全常量 push 元组。
    # 用户裁决（2026-11-06）：全部严格层（编译器签名=二进制事实）。
    try:
        _asd = jload("anchors/align_scale_types.json", {}) or {}
        # AL：and reg,{..FE/FC/F8} 对齐掩码——types 只挂在通过前向成员使用门的指针上
        #（实体属性未成的记录 ent=null，加载器自然滤除）。
        census["AL"] = _load_type_family_dict(_asd.get("align_evidence"), "AL")
        print("[AL] ptr-alignment pointee types: %d" % census["AL"], flush=True)
        # LS：lea SIB 缩放——types 仅挂在算术钉定的 effective_stride 上（scale-only 无 types）。
        census["LS"] = _load_type_family_dict(_asd.get("lea_scale_evidence"), "LS")
        print("[LS] lea-scale stride types: %d" % census["LS"], flush=True)
        # SS：单基址寄存器 >=3 个不同 [reg+off] 偏移 = 结构布局签名；对 class_layouts
        # 严格超集匹配。this_alias=true 时基址 = 本函数 this → 约束 T:FN 接收者域。
        # match_truncated=true 的记录类列表被截断（非健全掩码）→ 跳过。
        _n_ss = 0
        for _rec_ss in (_asd.get("struct_sig_evidence") or []):
            if not _rec_ss.get("this_alias") or _rec_ss.get("match_truncated"):
                continue
            _fn_ss = _rec_ss.get("fn")
            if not isinstance(_fn_ss, str) or not _fn_ss:
                continue
            m_ss = 0
            for _c_ss in (_rec_ss.get("match_classes") or []):
                _ix_ss = _name_ix2.get(str(_c_ss).lower())
                if _ix_ss is not None:
                    m_ss |= (1 << _ix_ss)
            if not m_ss or m_ss == FULL:
                continue
            _fa_ss = hx(_fn_ss)
            if _fa_ss is None:
                continue
            _e_ss = "T:%X" % _fa_ss
            if _e_ss not in ents:
                touch(_e_ss, "0x%s:this" % _fn_ss)
            fam["SS"][_e_ss] = fam["SS"].get(_e_ss, FULL) & m_ss
            _n_ss += 1
        census["SS"] = _n_ss
        print("[SS] struct-layout signature receivers: %d" % census["SS"], flush=True)
        # PP：call 前连续全常量 push 元组。右到左压栈 ⇒ 元组尾部紧贴 call，
        # args[-1-j] = 形参 j（与元数无关；fastcall/usercall 寄存器传参破坏该锚定 → 跳过）。
        # 只发 off_str（字符串字面量地址 → char*，SP 同款健全语义）；
        # imm/off_data 宽度证据过弱且 double hi/lo 双 push 会错位索引——不发。
        _n_pp = _pp_skip_cc = 0
        for _rec_pp in (_asd.get("push_pattern_evidence") or []):
            _ca_pp = hx(_rec_pp.get("callee_addr"))
            if _ca_pp is None:
                continue                       # 间接调用无被调方身份
            _proto_pp = protos.get("0x%08X" % _ca_pp) or protos.get("0x%x" % _ca_pp)
            _cc_pp = (parse_proto((_proto_pp or {}).get("proto")) or [None, "", None])[1] \
                if _proto_pp else ""
            if "fastcall" in _cc_pp or "userpurge" in _cc_pp or "usercall" in _cc_pp:
                _pp_skip_cc += 1
                continue
            _args_pp = _rec_pp.get("args") or []
            for _j_pp in range(len(_args_pp)):
                if _args_pp[len(_args_pp) - 1 - _j_pp].get("kind") != "off_str":
                    continue
                _e_pp = "P:%X:%d" % (_ca_pp, _j_pp)
                if _e_pp not in ents:
                    touch(_e_pp, "0x%08X::param%d" % (_ca_pp, _j_pp))
                _m_pp = _name_ix2.get("char*")
                if _m_pp is None:
                    continue
                fam["PP"][_e_pp] = fam["PP"].get(_e_pp, FULL) & (1 << _m_pp)
                _n_pp += 1
        census["PP"] = _n_pp
        print("[PP] const-push tuple string params: %d (cc-skip=%d)"
              % (census["PP"], _pp_skip_cc), flush=True)
    except Exception as _e_as4:
        census["AL"] = census.get("AL", 0)
        census["LS"] = census.get("LS", 0)
        census["SS"] = census.get("SS", 0)
        census["PP"] = census.get("PP", 0)
        print("[AL/LS/SS/PP] skipped: %r" % _e_as4, flush=True)

    # ---------------- CB：COM/回调编译器签名（严格，com_callback_types）----------------
    # GUID 比较（mov offset IID + repe cmpsd）钉接口身份 → 接收者域 = 该 IID 接口的
    # IUnknown 后代族；qi 三联（同 vptr 槽 +0/+4/+8 依序调用）= COM 对象判定。
    # callback_registration 只做记录（类型宇宙无函数指针拼写，生成器侧不发类型）。
    try:
        census["CB"] = _load_type_family("anchors/com_callback_types.json", "CB")
        print("[CB] COM/callback receivers: %d" % census["CB"], flush=True)
    except Exception as _e_cb:
        census["CB"] = census.get("CB", 0)
        print("[CB] skipped: %r" % _e_cb, flush=True)

    # ---------------- CC/CR：编译器签名 L5/L6（严格）----------------
    # CC：COM callback GUID 比较（com_callback_types.json 的 evidence 数组，行格式
    # {ent:"T:<fn>", types:[...], via:"guid-compare..."}，与 CB 同源同 mask —— CB 为
    # L4 接线，CC 为 L5 任务规格的族位，AND 合并恒中性）。顶层 guid_compares(215 行，
    # 字段 site/fn/guid_sym/compared/compared_ent，行内无 types 且 riid 无可发拼写)
    # 与 callback_registrations 均为生成器侧记录通道，不进类型发射。
    # CR：CRT 调用模式（crt_pattern_types.json 的 evidence 数组，行格式
    # {ent, types, via, crt_fn, sites, sample}；ent 前缀 G:/P:/M:/T:）。
    try:
        census["CC"] = _load_type_family("anchors/com_callback_types.json", "CC")
        print("[CC] COM callback GUID-compare receivers: %d" % census["CC"], flush=True)
    except Exception as _e_cc:
        census["CC"] = census.get("CC", 0)
        print("[CC] skipped: %r" % _e_cc, flush=True)
    try:
        census["CR"] = _load_type_family("anchors/crt_pattern_types.json", "CR")
        print("[CR] CRT pattern arg types: %d" % census["CR"], flush=True)
    except Exception as _e_cr:
        census["CR"] = census.get("CR", 0)
        print("[CR] skipped: %r" % _e_cr, flush=True)

    # ---------------- FP：编译器签名 L7（严格）----------------
    # FP：浮点常量联动（fpu_const_types.json 的 evidence 数组，行格式
    # {ent, types:["double"|...], via:"FPC@<site>", const:{addr,semantic}}；
    # 生成器 = .omo/agents/fpu7，producer form = fld .rdata FP 常量在 x87
    # 栈顶 + member FPU mem-op 触达 [base+off]）。证据族语义不在此处改动。
    try:
        census["FP"] = _load_type_family("anchors/fpu_const_types.json", "FP")
        print("[FP] FPU-constant member types: %d" % census["FP"], flush=True)
    except Exception as _e_fp:
        census["FP"] = census.get("FP", 0)
        print("[FP] skipped: %r" % _e_fp, flush=True)

    # ---------------- TC/GI/AV：编译器签名 L8（严格）----------------
    # TC：TClassFactory 模板族槽位类型（tcf_slot_types.json 的 evidence 数组，行格式
    # {ent:"GS:{slot}:{k}:{root}", types:["void *"/"TClassFactory_X*"], via:"tcf-iunknown/
    # tcf-com-create/tcf-template-T", class:...}——与 GX 同实体空间）。注意 `class` 字段
    # 是方法所属工厂的元数据（riid 参数同样携带），权威 typing 在 `types`；其中
    # tcf-template-T 通道的 `TClassFactory_X*` 指针拼写无宇宙原子（宇宙无类指针词表）
    # → 按 token 丢弃（RD 族 173 名同款处置，计数在打印中可见差值）。
    try:
        census["TC"] = _load_type_family("anchors/tcf_slot_types.json", "TC")
        print("[TC] TClassFactory slot types: %d (of 695 evidence recs; "
              "tcf-template-T pointer spellings dropped: no universe atom)" % census["TC"], flush=True)
    except Exception as _e_tc:
        census["TC"] = census.get("TC", 0)
        print("[TC] skipped: %r" % _e_tc, flush=True)
    # GI：.data 全局初始化器扫描（global_init_types.json 的 evidence 数组，行格式
    # {ent:"G:<UPPER_HEX_NO_0X>", addr, types, via:"gdata-rt-install|gdata-crt-ctor|
    # gdata-strlit", ...}）。ent 拼写与 C8/CR 的 G: 实体一致——实测 3,329/3,329 全部
    # `G:<hex>` 规范形，无需归一。与 C8 的 AND 合并无害（exact-pin 主导）；
    # 重叠计数在 C8 段后报告（[GI] C8 overlap 行）。
    try:
        census["GI"] = _load_type_family("anchors/global_init_types.json", "GI")
        print("[GI] global-init types: %d" % census["GI"], flush=True)
    except Exception as _e_gi:
        census["GI"] = census.get("GI", 0)
        print("[GI] skipped: %r" % _e_gi, flush=True)
    # GM：全局物化池（global_materialize.json，GI 后续轮）。signals.json 有名全局 ∄
    # minclass_domains G 实体的批量字节定型，ent 格式 G:<UPPER_HEX>（与 C8/GI/CR
    # 一致，实测 1,544/1,544 规范形）。词表内 274 条（strlit char[N] 149 /
    # smallint int 88 / double 37）经 _load_type_family 物化+AND 约束；
    # 词表外（gmat-fnptr 1,268 / gmat-vtptr type_info 2）m8==0 直接 continue
    # ——既不物化也不约束，仅本锚台账（fnptr 无词表词，vtptr 命中均为
    # type_info RTTI 描述符）。与 GI/CR/singleton/global_types 实体 0 碰撞
    # （生成器 s3 断言），重叠时 AND 合并无害（exact-pin 主导）。
    try:
        census["GM"] = _load_type_family("anchors/global_materialize.json", "GM")
        print("[GM] global-materialize types: %d" % census["GM"], flush=True)
    except Exception as _e_gm:
        census["GM"] = census.get("GM", 0)
        print("[GM] skipped: %r" % _e_gm, flush=True)
    # NI：新分配站点 vfptr0 安装定型（ninstall_types.json，99 evidence）。语义 =
    # R1 call ??2/_malloc 后 ≤12 指令窗内 eax + 单级 `mov reg,eax` 拷贝
    # （caller-saved 在内层 call 处失效），off==0 主表安装 `mov [reg], offset
    # ??_7X@@6B@` ⇒ 分配类型 = X（ctor-install 同一身份判定）。R5 AV 精确尺寸
    # 双侧已知时须 size==sizeof（冲突 8 / 跳过 12 / 整除失配 4 站点生成器侧
    # 已剔除，不在 evidence）。实体 N:<SITE>（与 alloc_sites touch 的 "N:%X"
    # 同形）；模板拼写（?$DynamicVectorClass@... 等 19 token）无 universe 原子，
    # m8==0 整行跳过（56 行），词表内 43 行物化+AND 掩码——MT 族同款逐 token
    # 丢弃语义。
    try:
        census["NI"] = _load_type_family("anchors/ninstall_types.json", "NI")
        print("[NI] ninstall vfptr0 types: %d" % census["NI"], flush=True)
    except Exception as _e_ni:
        census["NI"] = census.get("NI", 0)
        print("[NI] skipped: %r" % _e_ni, flush=True)
    # S2：符号×宽度判别器 v2（signedness2_types.json，59 evidence）。与 SGN v1
    # 同族收窄通道语义（types=[单值] AND 收窄双候选域），新开 S2 保留 census/
    # 消解台账独立可见。via：sgn2-movsx16 29 / sgn2-m16 14 / sgn2-fmt-%s 11 /
    # sgn2-fmt-%d 2 / sgn2-movzx8 2 / sgn2-fmt-%X 1；类型拼写对齐
    # type_universe（short 43 / char* 11 / int 2 / unsigned char 2 /
    # unsigned int 1）。生成器侧已对 v1 同实体同类型去重（v1_dup_skipped=128、
    # v1_type_conflict=0、sgn2 冲突实体 0），与 v1 同簇时 AND 合并自然生效。
    try:
        census["S2"] = _load_type_family("anchors/signedness2_types.json", "S2")
        print("[S2] signedness-v2 width x sign types: %d" % census["S2"], flush=True)
    except Exception as _e_s2:
        census["S2"] = census.get("S2", 0)
        print("[S2] skipped: %r" % _e_s2, flush=True)
    # PF2X：参数指纹（param_fingerprints.json，255 evidence）。R2 复合签名——
    # 每 (fn,k) ≥2 不同 (off,width,dir) 访问 ⇒ 覆盖全部跨度的扁平布局候选
    # （1≤|cands|≤8 才发射）与 R3 参数->vdispatch（N≥0x20 深槽）主表权威类
    # 候选，types 为类候选集（250 行多候选 AND 掩码），C2X/MW 布局指纹同款
    # 语义。实体 P:FN:K（K=栈参数序，thiscall this 不占位）。Mouse /
    # Gap2Recv_5202F0 2 token 无 universe 原子，逐 token 丢弃（MT 先例）。
    # 同文件 326 条 eq 边另走 EF 风格双向通道（见 [PFP] eq 行）。
    try:
        census["PF2X"] = _load_type_family("anchors/param_fingerprints.json", "PF2X")
        print("[PF2X] param-fingerprint types: %d" % census["PF2X"], flush=True)
    except Exception as _e_pf2x:
        census["PF2X"] = census.get("PF2X", 0)
        print("[PF2X] skipped: %r" % _e_pf2x, flush=True)
    # G3：GS 站点实参 v3（gs_site_args_v3.json，1,483 evidence + 0 edges）——
    # v2 机制 attach 门放宽版：全库虚分派站点（snapshot 内每个 call [vtreg+off]，
    # slot=off/4）push 实参 origin 类型（gs-const01 1,256 / gs-const-wide 226 /
    # gs-str 1，occupant_callarg 守卫），实体 GS:slot:k:0xROOT 与 v2 同拼写、
    # 与 v2 十条池零重叠。类型全基元（int/unsigned int/bool/char*——
    # 'const char *'/'char *' 经 _norm_ty 归一 char*）。文件 edges=0，无边通道。
    try:
        census["G3"] = _load_type_family("anchors/gs_site_args_v3.json", "G3")
        print("[G3] gs-site-arg v3 types: %d" % census["G3"], flush=True)
    except Exception as _e_g3:
        census["G3"] = census.get("G3", 0)
        print("[G3] skipped: %r" % _e_g3, flush=True)
    # VR2：VDRET 虚分派返回（vdret_eax_edges.json，234 evidence + 8,221 edges）。
    # evidence = 虚调用后 EAX 物化类型：vdret-arith（算术消费 => int 族，164）
    # + vdret-mread-0xOFF（EAX 作基址的成员读 => member_types 类候选，~70），
    # 实体 EAX:FN:site（大写 hex 无 0x，EF/RA 同拼写）。类名 token 走
    # _name_ix2 直查（无 alias resolve）；无 universe 原子者按位丢弃（MT/RD
    # 先例）。8,221 条 eq 边另走 EF 同款双向通道（见 [VR2] eq 行）。
    try:
        census["VR2"] = _load_type_family("anchors/vdret_eax_edges.json", "VR2")
        print("[VR2] vdret eax types: %d" % census["VR2"], flush=True)
    except Exception as _e_vr2:
        census["VR2"] = census.get("VR2", 0)
        print("[VR2] skipped: %r" % _e_vr2, flush=True)
    # CPI：构造参数初始化（ctor_param_inits.json，2,208 evidence + 224 edges）。
    # evidence = ctor 形参初始化语义的 M:FN:this:0xOFF 成员常量定型：
    # cpi-const（2,196，types 可含 [bool,int] 双值 / [bool,char,unsigned char]
    # 三值等 AND 掩码）+ cpi-m8/cpi-m16（宽度定型 12）。类型全基元（bool/int/
    # char/unsigned char/short/unsigned short/signed short/__int16，全部在
    # type_universe 词汇表）。224 条 eq 边另走 EF 同款双向通道（见 [CPI] eq 行）。
    try:
        census["CPI"] = _load_type_family("anchors/ctor_param_inits.json", "CPI")
        print("[CPI] ctor-param-init types: %d" % census["CPI"], flush=True)
    except Exception as _e_cpi:
        census["CPI"] = census.get("CPI", 0)
        print("[CPI] skipped: %r" % _e_cpi, flush=True)
    # AV：分配尺寸 v2（alloc_size_types.json = .omo/agents/allocsize/alloc_sites_v2.json
    # 站点台账的 ent 聚合件，837 evidence，报告语义「接线端现算」：
    #   sem=total → pointee sizeof==size 或 sizeof 整除 size（new T[n] 的 n 未知）；
    #   sem=elem  → sizeof==size（D/E 纯倍率形态乘数即元素 sizeof）。
    # 每 ent 候选 = 其全部 (size,sem) 观测候选之并（AS 族既有 per-ent OR 语义）。
    # 空/全满掩码跳过（FULL 无信息量，SS 族先例）。既有 AS 族（wave-5 负结果，
    # --allow-heuristics 门控 + exact-only 旧语义）不动——AV 是同一二进制事实的
    # v2 全量重表达，语义遵循生成器 report.md，不改证据族语义。
    try:
        _asz_v2 = {}
        for _i_av, _nm_av in enumerate(names):
            _sz_av = U["size"][_i_av] if _i_av < len(U["size"]) else None
            if isinstance(_sz_av, int) and _sz_av > 0:
                _asz_v2.setdefault(_sz_av, 0)
                _asz_v2[_sz_av] |= (1 << _i_av)
        _combos_v2 = {}                 # (size,sem) -> cached candidate mask
        _combos_seen_v2 = set()
        _combos_hit_v2 = set()
        _n_av = 0
        for _rec_av in (jload("anchors/alloc_size_types.json", {}) or {}).get("evidence") or []:
            _eav = _rec_av.get("ent")
            if not isinstance(_eav, str):
                continue
            _sizes_av = _rec_av.get("sizes") or []
            _sems_av = _rec_av.get("sems") or []
            _m_av = 0
            for _k_av, _szk_av in enumerate(_sizes_av):
                try:
                    _szk_av = int(_szk_av)
                except (TypeError, ValueError):
                    continue
                if _szk_av <= 0:
                    continue
                _sem_av = _sems_av[_k_av] if _k_av < len(_sems_av) else "total"
                _ck_av = (_szk_av, str(_sem_av))
                _combos_seen_v2.add(_ck_av)
                if _ck_av not in _combos_v2:
                    _m_c = _asz_v2.get(_szk_av, 0)
                    if _sem_av == "total":   # 数组整除语义：n 未知，sizeof | size
                        for _s_c in _asz_v2:
                            if _s_c > 0 and _szk_av % _s_c == 0:
                                _m_c |= _asz_v2[_s_c]
                    _combos_v2[_ck_av] = _m_c
                _m_av |= _combos_v2[_ck_av]
                if _combos_v2[_ck_av]:
                    _combos_hit_v2.add(_ck_av)
            if not _m_av or _m_av == FULL:
                continue
            if _eav not in ents:
                touch(_eav, _eav)
            fam["AV"][_eav] = fam["AV"].get(_eav, FULL) & _m_av
            _n_av += 1
        census["AV"] = _n_av
        print("[AS] alloc v2 sizes (family AV): evidence=%d entities=%d "
              "combos(ent-agg)=%d with-candidates=%d"
              % (_n_av, len(fam["AV"]), len(_combos_seen_v2), len(_combos_hit_v2)), flush=True)
    except Exception as _e_av:
        census["AV"] = census.get("AV", 0)
        print("[AS] alloc v2 skipped: %r" % _e_av, flush=True)
    # SA：SP-arity 判别器（sparity_types.json evidence 数组，1,293 recs；ent = 本求解器
    # ent_id 形态 T:/P:/M:/S:/G:/RET:，R:/V: 生成器侧已剔除）。types = 站点实参数 ×
    # 权威槽原型（vtable_slot_authority[+_ext]）交叉排除后的 AND-mask 候选类集：
    #   tier A（bind-ret16）= 唯一绑定被调的 ret imm16/4 精确数（二进制真值）；
    #   tier B（window-sim-agree）= push-window(v3) 与 esp-delta 模拟(v4) 双通道一致
    # （gold-set 19/19）。无 universe atom 的 token（?$DynamicVectorClass@* 模板族、
    # Mouse 等异名）按位丢弃（TC 先例），不影响行级有效性。
    # 【2026-11-07 降级 → 同日重升 strict（safix 诊断闭环 + 用户裁决）】
    # SA 证据本身 10/10 抽样二进制验证全对（push 计数==K；owner 槽 ret16/4==K）。
    # 首次接线时 194 个 C9 交空全部是【结构性三方冲突】：C9∩SA 恒非空（SA 从不
    # 与槽主证据直接矛盾），交空由 SS（结构签名族）先把 C9∩C3 收窄到宽布局类
    # （CampaignClass/RulesClass/FoggedObjectClass 等 unknown-ancestry 大类，
    # 对模板族方法的结构签名近似匹配一切）造成——SA 再正确排除这些类 →
    # 全族 AND=0 → 旧 C9 预滤器无条件丢弃正确的槽主证据 → 空域连锁中和 →
    # 净 -1,042 forced unique，故先降级启发式层（零证据删除）。
    # 重升条件已满足：C9 预滤器归咎精细化落地（见 C9 节「归咎精细化」注释）——
    # 交空时先做逐族归咎检查，C9 与所有参与族两两相容 ⇒ 交空由组合制造 ⇒
    # 丢弃最弱证据侧（SS 优先）而非 C9。SA 恢复 strict（gate_heuristic=False）。
    # 已知生成器侧 wart 仍开放：T:7B8A00 的 0x7B8AF0 站点 receiver 误绑
    # （实为 this->member@0x24 的 vcall，5 实参；tier-A 绑定 K=0 碰巧不改该行
    # 结论），见 safix report「已知边界」。
    try:
        census["SA"] = _load_type_family("anchors/sparity_types.json", "SA",
                                         gate_heuristic=False)
        print("[SA] sparity arity-masks: %d (strict tier restored 2026-11-07: "
              "C9 blame refinement landed, see .omo/agents/safix/report.md)"
              % census["SA"], flush=True)
    except Exception as _e_sa:
        census["SA"] = census.get("SA", 0)
        print("[SA] skipped: %r" % _e_sa, flush=True)
    # SW：槽生命周期窗口类型（slot_window_edges.json 的 evidence 数组，179 recs，
    # via=slotwin-vdispatch：虚分派站点观察到的槽位占用者类候选 AND-mask）。
    # 同文件的 edges（1,829 条等值边）在 EF 同款双向通道单独接线（见 [SW] eq 行）。
    # ent 拼写 S:fn:var_NN[.subsel][@W0xADDR]——SG 族 var_NN 先例兼容；窗口后缀/
    # 点选后缀实体作传播连接点，由本族掩码 + 等值边共同收窄。
    try:
        census["SW"] = _load_type_family("anchors/slot_window_edges.json", "SW")
        print("[SW] slot-window types: %d" % census["SW"], flush=True)
    except Exception as _e_sw:
        census["SW"] = census.get("SW", 0)
        print("[SW] types skipped: %r" % _e_sw, flush=True)
    # VR：嵌套接收者链层 1 类型（vr_origin_edges.json 的 evidence 数组，13 recs，
    # vr-nested：this->off1->off2 两级链）。实体词汇内可承载的是**层 1** 成员类
    # 候选——type_candidates[].mid 的 "M:FN:this:OFF=CLASS" 直取（层 2 嵌套对象
    # 无实体拼写，不发明；proto-this 条件形 "Cls+off=X" 跳过）。同记录多候选
    # OR 合并（记录内析取，记录间 AND）。与 MR 族同类证据（member_types 溯源），
    # 经 _load_type_family_dict 消费；无候选的 7 条记录自然按位丢弃。
    try:
        _vrev = jload("anchors/vr_origin_edges.json", {}) or {}
        _vr_ad = {}
        for _r9v in (_vrev.get("evidence") or []):
            _cands9v = {}
            for _c9v in (_r9v or {}).get("type_candidates") or []:
                _mid9v = (_c9v or {}).get("mid") or ""
                _pp9v = _mid9v.split("=", 1)
                if len(_pp9v) != 2 or not _pp9v[0].startswith("M:"):
                    continue
                _cands9v.setdefault(_pp9v[0], set()).add(_pp9v[1].strip())
            for _ent9v, _cls9v in _cands9v.items():
                _rec9v = _vr_ad.setdefault(_ent9v, {"ent": _ent9v, "types": []})
                _rec9v["types"].extend(sorted(_cls9v))
        census["VR"] = _load_type_family_dict(list(_vr_ad.values()), "VR")
        print("[VR] nested layer-1 types: %d (recs=%d)"
              % (census["VR"], len(_vr_ad)), flush=True)
    except Exception as _e_vrev:
        census["VR"] = census.get("VR", 0)
        print("[VR] nested types skipped: %r" % _e_vrev, flush=True)
    # EP：EAX 指针算术消费（eax_ptr_types.json evidence 数组，405 recs；
    # ptrstep/idxscale/derefstore/derefstore-vt 四规则，RETX 窗口跨标签/jcc、
    # 内嵌 call 保留 callee-saved 拷贝——RD 直线窗口收不到的装表/深偏移写形态）。
    # ent 拼写 EAX:XXXXXX:XXXXXX（RA/RD 同族先例）；types 含类型词汇拼写
    # （char/wchar_t/return 等）与类名，无 universe atom 的 token 按位丢弃。
    # 生成器侧对账：∩RA=7 ∩RD=21，derefstore-vt 107 实体 100% 净增。
    try:
        census["EP"] = _load_type_family("anchors/eax_ptr_types.json", "EP")
        print("[EP] eax ptr-consumption types: %d" % census["EP"], flush=True)
    except Exception as _e_ep:
        census["EP"] = census.get("EP", 0)
        print("[EP] skipped: %r" % _e_ep, flush=True)
    # C2X：复合偏移签名（c18v2_compound_sigs.json evidence 数组，476 recs）。
    # 函数 traced-this 访问 {(off,width,dir)} AND 匹配扁平布局（每个指纹元组都
    # 须被成员区间覆盖），仅发射 ≥3 不同偏移且 1..8 候选的行；types 即候选类表，
    # 直接 AND 掩码（dense-exact1 剔除是生成器侧 writes 通道的对称取舍，本族
    # 候选表原样消费，不重复裁决）。
    try:
        census["C2X"] = _load_type_family("anchors/c18v2_compound_sigs.json", "C2X")
        print("[C2X] compound offset-sig receivers: %d" % census["C2X"], flush=True)
    except Exception as _e_c2x:
        census["C2X"] = census.get("C2X", 0)
        print("[C2X] skipped: %r" % _e_c2x, flush=True)
    # MW：写方向指纹 + vfptr 安装（mw_write_fingerprints.json evidence 数组，
    # 1,975 recs，T 实体）。via 通道按生成器 meta 语义**原样**消费（加载端不
    # 展开、不裁剪，掩码 = types 原文）：
    #   mw-vfptr-0（off==0&col==0 主装表，1,437 条实测全部 |types|==1）＝ ctor
    #     语义、与 ctor_types 通道 parity——C4 EXACT 同款「this==该类」，派生
    #     不展开（求解器对 C4 同样不展开；接线审计 2026-11-07 确认生成器在需要
    #     派生域的通道已自行展开，见下行）；
    #   mw-vfptr-0xN / mw-vfptr-mi-*（off==col>0 本列族装表 / MI 内嵌）＝ 生成
    #     端已展开 types=[C]+desc(C) / strict-desc 列匹配（实证 T:4D31E0 via=
    #     mw-vfptr-0x8 → FootClass+Aircraft+Infantry+Unit）；
    #   mw-writes-kN（纯写指纹 AND 布局）＝ 候选类表原样（dense-exact1 生成端
    #     已剔除）。
    try:
        _mwvc = collections.Counter()
        for _r_mw in (jload("anchors/mw_write_fingerprints.json", {}) or {}).get("evidence") or []:
            _v_mw = str((_r_mw or {}).get("via") or "")
            _mwvc["vfptr" if _v_mw.startswith("mw-vfptr") else
                  ("writes" if _v_mw.startswith("mw-writes") else "other")] += 1
        census["MW"] = _load_type_family("anchors/mw_write_fingerprints.json", "MW")
        print("[MW] write-fingerprint types: %d (vfptr=%d writes=%d)"
              % (census["MW"], _mwvc.get("vfptr", 0), _mwvc.get("writes", 0)), flush=True)
    except Exception as _e_mw:
        census["MW"] = census.get("MW", 0)
        print("[MW] types skipped: %r" % _e_mw, flush=True)
    # P5：占用者参数第五-八形态（pu5_forms.json evidence 数组，108 recs，全部
    # PU6 lea-取址转发形态）。PU6 = 弱指针族证据（param 槽地址被取用并转发到
    # 调用；生成器 meta 注明含 param-slot-as-scratch 场景，pu5 报告限制 #2 建议
    # 归 heuristic tier）→ gate --allow-heuristics。记录无 per-record types，
    # 掩码 = type_universe 指针词汇（'*' token 全集，加载时动态求取，跟随宇宙
    # 演化）。PU7/PU8 生成器结构性空集（0 行）。同文件 PU5 全局存储等值边另走
    # EF 通道（[PU5] eq 行）。
    try:
        if getattr(args, "allow_heuristics", False):
            _pu5d = jload("anchors/pu5_forms.json", {}) or {}
            _ptr_vocab = [str(_t5) for _t5 in
                          (jload("anchors/type_universe.json", {}) or {}).get("types") or []
                          if "*" in str(_t5)]
            _p5_rows = [{"ent": _r5.get("ent"), "types": _ptr_vocab}
                        for _r5 in (_pu5d.get("evidence") or [])
                        if isinstance((_r5 or {}).get("ent"), str)]
            census["P5"] = _load_type_family_dict(_p5_rows, "P5")
            print("[P5] pu6 pointer-family params (heuristic): %d (vocab=%d)"
                  % (census["P5"], len(_ptr_vocab)), flush=True)
        else:
            census["P5"] = 0
            print("[P5] pu6 pointer-family params: 0 (heuristic tier gated; --allow-heuristics to enable)",
                  flush=True)
    except Exception as _e_p5:
        census["P5"] = census.get("P5", 0)
        print("[P5] skipped: %r" % _e_p5, flush=True)

    # ---------------- IMP：导入函数返回值定型（Win32/BINK SDK 契约，严格层）----------------
    # imp_ret_types.json：call ds:__imp_X 直接形态 + call reg 线性基本块回扫证明
    # 形态（IDA 注解交叉核对，不一致即丢弃整站点）；SDK 契约确定的返回语义
    # （HANDLE/int/unsigned int/void*/char*/wchar_t*）定型 EAX:FN:SITE 实体。
    # 消费窗（RETX 式 <=12 指令）分类首次有效使用：cdq=>int / 指针解引用=>ptr
    # 族 / 算术=>integer words；cmp/test 通用 null 检查不计。void/不确定 API
    # 与宇宙缺失词跳过。100% 确定性契约，无猜测——严格层，不挂 heuristic 门。
    try:
        census["IMP"] = _load_type_family("anchors/imp_ret_types.json", "IMP")
        print("[IMP] import-function return types: %d" % census["IMP"], flush=True)
    except Exception as _e_imp:
        census["IMP"] = census.get("IMP", 0)
        print("[IMP] skipped: %r" % _e_imp, flush=True)

    # ---------------- IM2：导入函数参数定型（Win32/BINK SDK 契约，严格层）----------------
    # imp2_param_types.json：IMP 的参数侧孪生——同一套已证明导入调用站点形态
    # （A 直接 call ds:__imp_X / B IAT 区间标签 / C call reg 线性回扫 + IDA 注解
    # 一致），stdcall 右往左回扫收集压栈实参（最靠近 call 的 push = param 0；
    # label/jump/ret/call、esp 写、[esp]-disp-0 改写即停），按 SDK 签名定型
    # 实参来源实体（S:ADDR:NAME / P:FN:K / G:HEX / EAX:FN:SITE）为
    # char*/wchar_t*/int/unsigned int。100% 确定性契约，无猜测——严格层，
    # 不挂 heuristic 门。
    try:
        census["IM2"] = _load_type_family("anchors/imp2_param_types.json", "IM2")
        print("[IM2] import-function param types: %d" % census["IM2"], flush=True)
    except Exception as _e_im2:
        census["IM2"] = census.get("IM2", 0)
        print("[IM2] skipped: %r" % _e_im2, flush=True)

    # ---------------- IR：全 const 返回 ⇒ int 族（启发式层）----------------
    if getattr(args, "allow_heuristics", False):
        try:
            _irf = (jload("anchors/int_returns.json", {}) or {}).get("fns") or []
            _irm = 0
            for _tn in ("int", "unsigned int", "bool", "char", "unsigned char"):
                _ix4 = _name_ix2.get(_tn)
                if _ix4 is not None:
                    _irm |= (1 << _ix4)
            _n_ir = 0
            for _fs in _irf:
                _fa = hx(_fs)
                if _fa is None:
                    continue
                _e4 = "RET:%X" % _fa
                if _irm and (_e4 in ents or True):
                    if _e4 not in ents:
                        touch(_e4, _e4)
                    fam["IR"][_e4] = fam["IR"].get(_e4, FULL) & _irm
                    _n_ir += 1
            census["IR"] = _n_ir
            print("[IR] int-return fns: %d" % _n_ir, flush=True)
        except Exception as _e_ir:
            print("[IR] skipped: %r" % _e_ir, flush=True)

    # ---------------- MRH：放宽成员类型（启发式层）----------------
    if getattr(args, "allow_heuristics", False):
        try:
            _n_mrh = 0
            for _rec in (jload("anchors/member_by_receiver_heur.json", {}) or {}).get("evidence") or []:
                _e5 = _rec.get("ent")
                if not isinstance(_e5, str):
                    continue
                m5 = 0
                for _c5 in (_rec.get("classes") or []):
                    _ix5 = _name_ix2.get(str(_c5).lower())
                    if _ix5 is not None:
                        m5 |= (1 << _ix5)
                if not m5:
                    continue
                if _e5 not in ents:
                    touch(_e5, _e5)
                fam["MRH"][_e5] = fam["MRH"].get(_e5, FULL) & m5
                _n_mrh += 1
            census["MRH"] = _n_mrh
            print("[MRH] relaxed member types: %d" % _n_mrh, flush=True)
        except Exception as _e_mrh:
            print("[MRH] skipped: %r" % _e_mrh, flush=True)

    # ---------------- CP：全常量实参 ⇒ int 族参数（启发式层）----------------
    if getattr(args, "allow_heuristics", False):
        try:
            _cpm = 0
            for _tn2 in ("int", "unsigned int", "bool", "char", "unsigned char"):
                _ix6 = _name_ix2.get(_tn2)
                if _ix6 is not None:
                    _cpm |= (1 << _ix6)
            _n_cp = 0
            for _rec in (jload("anchors/const_param_types.json", {}) or {}).get("evidence") or []:
                _e6 = _rec.get("ent")
                if not isinstance(_e6, str):
                    continue
                m6 = 0
                for _t6 in (_rec.get("types") or []):
                    _ix7 = _name_ix2.get(str(_t6).lower())
                    if _ix7 is not None:
                        m6 |= (1 << _ix7)
                if not m6:
                    continue
                if _e6 not in ents:
                    touch(_e6, _e6)
                fam["CP"][_e6] = fam["CP"].get(_e6, FULL) & m6
                _n_cp += 1
            census["CP"] = _n_cp
            print("[CP] const-arg params: %d" % _n_cp, flush=True)
        except Exception as _e_cp:
            print("[CP] skipped: %r" % _e_cp, flush=True)

    # ---------------- CS（启发式层）：指针步进尺寸 → 类长度 ----------------
    # add/sub reg, imm（imm=类 sizeof）或 lea [base+idx*SCALE] ⇒ 指针指向
    # 该尺寸元素数组。非 100%（可能是缓冲步进/成员跳跃）——仅启发式层。
    if getattr(args, "allow_heuristics", False):
        try:
            _cls_size = {}
            for _c, _v in (jload("tools/class_layouts.json", {}) or {}).items():
                _s = (_v or {}).get("size") if isinstance(_v, dict) else None
                if _s:
                    _cls_size[_c] = int(_s)
            _name_ix = {names[i]: i for i in range(n)}
            _cs_cache = {}
            def _cs_mask(sz):
                m = _cs_cache.get(sz)
                if m is None:
                    m = 0
                    for _c, _s2 in _cls_size.items():
                        if _s2 == sz and _c in _name_ix:
                            m |= (1 << _name_ix[_c])
                    _cs_cache[sz] = m
                return m
            for _rec in (jload("anchors/ptr_step_sizes.json", {}) or {}).get("steps") or []:
                _e = _rec.get("ent")
                _sz = _rec.get("size")
                if not (isinstance(_e, str) and _sz):
                    continue
                if _e not in ents:
                    touch(_e, _e)
                m = _cs_mask(int(_sz))
                if m and m != FULL:
                    fam["CS"][_e] = fam["CS"].get(_e, FULL) & m
                    census["CS"] += 1
            print("[CS] heuristic size evidence=%d entities=%d" % (census["CS"], len(fam["CS"])), flush=True)
        except Exception as _e_cs:
            print("[CS] skipped: %r" % _e_cs, flush=True)

    # X155: 二进制装表（C4/C6）反驳 C2 的名字型 pin。
    # 实测最后 16 个冲突全是这种：实体在函数里装了 vtable（C4 EXACT），而 C2 的
    # pin 来自**命名轮发明的类名**（TeamTypeVector / SmudgeTypeList / …），
    # 两者槽数不同 → 空域。装表是二进制事实，名字不是，故丢弃该 pin。
    c2_refuted_by_install = 0
    if facts:
        _final2 = {}
        for fn, site, off, sym in facts["this_installs"]:
            if off != 0:
                continue
            cur = _final2.get(fn)
            if cur is None or site > cur[0]:
                _final2[fn] = (site, sym)
        for fn, (site, sym) in _final2.items():
            ci = resolve(sym)
            if ci is None:
                continue
            eid = "T:%X" % fn
            m2 = fam["C2"].get(eid)
            if m2 is None:
                continue
            if not ((m2 >> ci) & 1):
                # C2 的 mask 不包含装表类 → 名字 pin 被二进制反驳
                fam["C2"][eid] = FULL
                c2_pin_log.setdefault(eid, []).append(["refuted_by_install", sym, names[ci]])
                c2_refuted_by_install += 1
    print("[C2] pins refuted by binary vtable install: %d" % c2_refuted_by_install, flush=True)

    # ---------------- C7：参数/返回方差 ----------------
    for a, v in protos.items():
        pr = parse_proto((v or {}).get("proto"))
        if not pr:
            continue
        ret, cc, params = pr
        if cc != "__thiscall" or not params or "this" not in params[0]:
            continue
        aa = hx(a)
        for k, ptxt in enumerate(params[1:]):
            ci = type_class(ptxt)
            if ci is None:
                continue
            eid = "P:%X:%d" % (aa, k)
            if eid not in ents:
                continue
            fam["C7"][eid] = fam["C7"].get(eid, FULL) & allowed_of(ci)
            census["C7"] += 1

    callargs = jload("anchors/ida_call_args.json", {}) or {}
    viol = []
    arg_type_pairs = 0
    for ea, rec in callargs.items():
        fn = hx((rec or {}).get("fn"))
        if fn is None:
            continue
        v = protos.get("0x%08X" % fn) or protos.get("0x%x" % fn)
        pr = parse_proto((v or {}).get("proto"))
        cc, params = (pr[1], pr[2]) if pr else ("", [])
        shift = 1 if (cc == "__thiscall" and params and "this" in params[0]) else 0
        for arg in (rec or {}).get("args") or []:
            i = arg.get("i")
            if not isinstance(i, int):
                continue
            tc = type_class(arg.get("type"))
            if tc is None:
                continue
            # C7b 只做方差校验（T ⊑ U），不把多站点的实参类型累积成域：
            # 同一形参在不同调用点静态类型不同是常态，累积会产生假冲突。
            arg_type_pairs += 1
            pi = i + shift
            if pi < len(params):
                uc = type_class(params[pi])
                if uc is not None and uc not in U["anc"][tc]:
                    viol.append({"call": "0x%08X" % (hx(ea) or 0),
                                 "callee": "0x%08X" % fn, "arg_i": i,
                                 "arg_class": names[tc], "param_class": names[uc]})
    print("[C7] evidence=%d entities=%d arg_type_pairs=%d variance_violations=%d"
          % (census["C7"], len(fam["C7"]), arg_type_pairs, len(viol)), flush=True)

    # ---------------- C8：全局对象身份 ----------------
    gtypes = jload("anchors/ida_global_types.json", {}) or {}
    singl = jload("anchors/singleton_types.json", {}) or {}
    gcast = jload("anchors/global_cast_types.json", {}) or {}

    def global_class(addr):
        for key in ("0x%08X" % addr, "0x%x" % addr):
            for src_d in (gtypes, singl):
                rec = src_d.get(key)
                if not rec:
                    continue
                t = rec.get("type") or ""
                if "*" in t:
                    return None
                ci = resolve(t.strip())
                if ci is not None:
                    return ci
        return None

    # C6 数据一致性：class_db.vtable_slot_count vs authority.slot_count
    sc_disagree = []
    auth_raw = jload("anchors/vtable_slot_authority.json", {}) or {}
    for cc, rec in auth_raw.items():
        ci = resolve(cc)
        if ci is None:
            continue
        a_sc = rec.get("slot_count")
        d_sc = U["db"][names[ci]].get("vtable_slot_count")
        if isinstance(a_sc, int) and isinstance(d_sc, int) and a_sc != d_sc:
            sc_disagree.append({"class": names[ci], "class_db": d_sc, "authority": a_sc,
                                "vtable": rec.get("vtable")})
    print("[C6] slot_count class_db vs authority disagreements=%d" % len(sc_disagree), flush=True)

    c8_entities = set()
    c8_cast_dropped = []
    c8_gtype = {}
    for eid in list(ents):
        if not eid.startswith("G:"):
            continue
        ci = global_class(int(eid[2:], 16))
        if ci is not None:
            if not pin_class_identified(ci):
                continue          # 规则 P 同源：无名分 invented 类不构成证据
            c8_gtype[eid] = ci
            exact[eid].append((ci, "C8:global-type"))
            census["C8"] += 1
            exact_count["C8"] += 1
            c8_entities.add(eid)
    for nm, rec in gcast.items():
        ci = resolve((rec or {}).get("type"))
        addr = global_addr(nm)
        if ci is not None and addr is not None:
            eid = "G:%X" % addr
            if eid not in ents:
                continue
            if not pin_class_identified(ci):
                unidentified_pins[names[ci]] += 1
                continue          # cast 到无身份类 = 命名轮噪声
            if eid in c8_gtype and c8_gtype[eid] != ci:
                # 名称证据与 cast 多数派冲突：名称证据胜出（AGENTS 裁决）
                c8_cast_dropped.append({"global": eid,
                                        "kept": names[c8_gtype[eid]],
                                        "dropped": names[ci]})
                continue
            exact[eid].append((ci, "C8:cast-type"))
            census["C8"] += 1
            exact_count["C8"] += 1
            c8_entities.add(eid)
    for fn, site, dst, sym in (facts or {}).get("global_installs", []):
        ci = resolve(sym)
        g = global_addr(dst)
        if ci is not None and g is not None:
            eid = "G:%X" % g
            if eid in ents:
                exact[eid].append((ci, "C8:vtable-install"))
                census["C8"] += 1
                exact_count["C8"] += 1
                c8_entities.add(eid)
    print("[C8] evidence=%d entities=%d (global vtable installs=%d)"
          % (census["C8"], len(c8_entities), len((facts or {}).get("global_installs", []))),
          flush=True)
    # GI∩C8 重叠计数（任务要求：AND 合并无害但计数要准）
    if census.get("GI"):
        _gi_all = set(fam["GI"].keys())
        _gi_c8_ov = _gi_all & c8_entities
        print("[GI] C8 overlap: %d of %d GI entities also C8-pinned "
              "(AND-merge harmless; C8 exact-pin dominates)" % (len(_gi_c8_ov), len(_gi_all)),
              flush=True)

    # ---------------- C15：静态 vtable 归属（唯一最小 owner → EXACT）----------------
    # 纯二进制证据（anchors/vtable_slot_authority.json，.rdata 实测，不用函数名）：
    # 函数 F 出现在类集合 S 的 vtable 上（按槽位地址去重）。最小 owner 定义：
    # c ∈ S 是最小的当且仅当不存在 d ∈ S (d≠c) 使 c ∈ ancestors(d)
    # （祖先链 = class_layouts.json 的 parent 链，20 级上限；不在 layouts 里的
    # 类无祖先，仍可作最小 owner）。
    #   |min(S)| == 1 → 该类即 F 的类（EXACT，复用 C4 的 exact[eid] 通道）
    #   |min(S)| > 1  → COMDAT 折叠共享实现 / 多继承：仅注册族掩码收窄（3 值语义）
    # 顺序约束：C4/C8 既有 EXACT 优先——T:F 已有身份则跳过（skipped_ctor_conflict）。
    # 本块必须位于等式合并之前：root_exact 需含 C15 身份，合并器才能拒绝把两个
    # EXACT 类不相交的实体并进同一簇（否则 exact_conflict 簇会逃过冲突消解）。
    c15_owner = collections.defaultdict(int)
    for _cls, _rec in (jload("anchors/vtable_slot_authority.json", {}) or {}).items():
        _ci = resolve(_cls)
        if _ci is None:
            continue
        for _sv in (_rec.get("slots") or {}).values():
            _fa = hx((_sv or {}).get("addr"))
            if _fa is not None:
                c15_owner[_fa] |= (1 << _ci)
    _c15_anc_cache = {}

    def _c15_ancestors(ci):
        """class_layouts parent 链（不含自身），20 级上限；无链类 = 无祖先。"""
        out = _c15_anc_cache.get(ci)
        if out is None:
            out = set()
            cur = ci
            for _ in range(20):
                cur = _parents.get(cur)
                if cur is None or cur in out:
                    break
                out.add(cur)
            _c15_anc_cache[ci] = out
        return out

    c15_exact_n = c15_amb_n = c15_skipped_ctor = c15_not_entity = 0
    c15_no_minimal = c15_pool_exact = 0
    for _fa, _om in sorted(c15_owner.items()):
        _lst = [i for i in range(n) if (_om >> i) & 1]
        # "谁最先声明这个实现" = 集合中**最基**的类：没有任何其他成员是它的祖先。
        # 原式 `c in ancestors(d)`（c 是 d 的祖先）方向反了，会选出最派生（叶）类 ——
        # 抽样 YRpp 对照实证：0x401940 被 4 个文件类共享，YRpp=RawFileClass（基），
        # 旧式给出 CCFileClass（叶）。COMDAT 折叠的函数属于最先定义它的那个基类。
        _minimal = [c for c in _lst
                    if not any(d in _c15_ancestors(c) for d in _lst if d != c)]
        if not _minimal:
            c15_no_minimal += 1        # 祖先链成环等脏数据：无可判定 owner，跳过
            continue
        if len(_minimal) > 1:
            c15_amb_n += 1
            _eid = "T:%X" % _fa
            if _eid in ents:
                _mamb = 0
                for c in _minimal:
                    _mamb |= (1 << c)
                fam["C15"][_eid] = fam["C15"].get(_eid, FULL) & _mamb
                census["C15"] += 1
            continue
        c15_pool_exact += 1
        _eid = "T:%X" % _fa
        if _eid not in ents:
            c15_not_entity += 1       # C4 同款守卫：只标注已有观测的实体
            continue
        if exact.get(_eid):
            c15_skipped_ctor += 1     # C4/C8 既有身份优先，不覆盖
            continue
        exact[_eid].append((_minimal[0], "C15:vtable-owner"))
        exact_count["C15"] += 1
        census["C15"] += 1
        c15_exact_n += 1
    print("[C15] vtable-owner exact=%d ambiguous=%d entities=%d "
          "(pool_exact=%d skipped_ctor_conflict=%d not_entity=%d no_minimal=%d)"
          % (c15_exact_n, c15_amb_n, len(fam["C15"]), c15_pool_exact,
             c15_skipped_ctor, c15_not_entity, c15_no_minimal), flush=True)

    # ---------------- C11b：成员链类型导出 ----------------
    # M 实体 = 容器的 this->member(NN)。容器类被 C4/C15 钉住时，该成员的**声明类型**
    # 就是子对象的类（人眼分析用的正是这条：AircraftClass+0x6C4 -> AircraftTypeClass）。
    # 类型来源：class_layouts 成员 type + member_types.json 的 Class+0xNN 记录。
    _c11b_exact = _c11b_containers = _c11b_unres = _c11b_nocont = 0
    _decl11b = {}
    # 次级装表 = 精确成员类型：ctor 在 this+N 装 X 的表 => 该偏移的子对象运行时类
    # 就是 X（新构造，不可能是指定类型的派生）。优先于声明类型（声明只是上界）。
    _inst_pairs11 = {}
    try:
        for _e0 in (jload("anchors/install_derived_edges.json", {}) or {}).get("edges") or []:
            if (_e0 or {}).get("kind") != "member":
                continue
            _ci0 = resolve(_e0.get("cls"))
            _xi0 = resolve(_e0.get("sub"))
            _off0 = _e0.get("off")
            if _ci0 is not None and _xi0 is not None and isinstance(_off0, int):
                _inst_pairs11.setdefault((_ci0, _off0), _xi0)
    except Exception:
        _inst_pairs11 = {}
    _c11b0_n = 0
    try:
        _lay11b = jload("tools/class_layouts.json", {}) or {}
        _mt11b = jload("anchors/member_types.json", {}) or {}
        def _strip11b(t):
            t = re.sub(r"\bconst\b", "", str(t or "")).replace("*", "").replace("&", "").strip()
            if "<" in t:
                t = t.split("<")[0].strip()
            return t
        for _cn11b, _rec11b in _lay11b.items():
            _ci11b = resolve(_cn11b)
            if _ci11b is None or not isinstance(_rec11b, dict):
                continue
            for _o11b, _m11b in (_rec11b.get("offsets") or {}).items():
                _ti11b = resolve(_strip11b((_m11b or {}).get("type")))
                if _ti11b is not None:
                    _decl11b[(_ci11b, int(_o11b))] = _ti11b
        _rx11b = re.compile(r"^(.*)\+0[xX]([0-9A-Fa-f]+)$")
        for _k11b, _v11b in _mt11b.items():
            _mm11b = _rx11b.match(_k11b)
            if not _mm11b:
                continue
            _ci11b = resolve(_mm11b.group(1))
            _ti11b = resolve(_strip11b((_v11b or {}).get("type")))
            if _ci11b is not None and _ti11b is not None:
                _decl11b.setdefault((_ci11b, int(_mm11b.group(2), 16)), _ti11b)
    except Exception:
        _decl11b = {}
    _fn_exact_c = {}
    for _eidc, _lstc in exact.items():
        if not _eidc.startswith("T:"):
            continue
        _setc = {_ci for _ci, _s in _lstc}
        if len(_setc) == 1:
            _fn_exact_c[_eidc] = next(iter(_setc))
    for _eidc in list(ents.keys()):
        if not _eidc.startswith("M:"):
            continue
        _pc = _eidc.split(":")
        if len(_pc) != 4 or _pc[2] != "this":
            continue
        _cic = _fn_exact_c.get("T:" + _pc[1])
        if _cic is None:
            _c11b_nocont += 1
            continue
        _c11b_containers += 1
        try:
            _oc = int(_pc[3], 16)
        except ValueError:
            try:
                _oc = int(_pc[3])
            except ValueError:
                continue
        _xi0 = _inst_pairs11.get((_cic, _oc))
        if _xi0 is not None:
            if not (exact.get(_eidc) and any(_ci != _xi0 for _ci, _s in exact[_eidc])):
                exact[_eidc].append((_xi0, "C11b0:install"))
                exact_count["C11"] += 1
                census["C11"] += 1
                _c11b_exact += 1
                _c11b0_n += 1
            continue
        _tic = _decl11b.get((_cic, _oc))
        if _tic is None:
            _c11b_unres += 1
            continue
        # FIX: 成员声明 T* 可以持有 T 的派生类，所以约束是 subobj ⊑ T（后代域），
        # 不是 subobj == T。原实现钉 exact 会**禁止**所有派生类，是硬错误。
        _m11b = allowed_of(_tic)
        fam["C11"][_eidc] = fam["C11"].get(_eidc, FULL) & _m11b
        census["C11"] += 1
        _c11b_exact += 1
    print("[C11b] install-exact=%d declared-mask total=%d (containers=%d unresolved_type=%d no_container=%d)"
          % (_c11b0_n, _c11b_exact, _c11b_containers, _c11b_unres, _c11b_nocont), flush=True)
    print("[C11b] (legacy line) exact=%d (containers=%d unresolved_type=%d no_container=%d)"
          % (_c11b_exact, _c11b_containers, _c11b_unres, _c11b_nocont), flush=True)
    # RETIRED 2026-11-05（用户裁决）：C11 值域在纯类宇宙下计算（无基元/数组/指针），
    # 对实际类型为非类的成员做假断言（void* 成员 → 类后代断言恒假 → 台账空域冲突）。
    # MR+MT+IG+IV 已用完备类型宇宙重新覆盖同一语义。清空证据 = 零参与。
    _c11_n_before_retire = len(fam.get("C11") or {})
    fam["C11"] = {}
    print("[C11b] RETIRED: %d evidence cleared (value-domain incomplete under class-only universe)"
          % _c11_n_before_retire, flush=True)

    # ---------------- C18：二进制偏移签名匹配 ----------------
    # 只用汇编事实：一个类自己那些已确认函数在 this 上访问的 (offset,width) 集合，
    # 就是该类在二进制里的成员签名。若某簇的观测集被**恰好一个**类的签名覆盖，
    # 该簇的类即为那个类。不依赖 IDA 类型、不依赖成员名、不依赖函数名。
    _c18_exact = _c18_tried = _c18_amb = 0
    _sig18 = collections.defaultdict(set)
    for _e18 in raw:
        if _e18.get("type") != "MEMBER_ACCESS":
            continue
        _b18 = _e18.get("base")
        if not (isinstance(_b18, str) and _b18.endswith(":this")):
            continue
        _f18 = hx(_b18.split(":")[0])
        if _f18 is None:
            continue
        try:
            _o18 = int(_e18.get("offset") or 0)
        except (TypeError, ValueError):
            continue
        _w18 = _e18.get("width")
        _w18 = int(_w18) if isinstance(_w18, (int, float)) and _w18 > 0 else 4
        _sig18[_f18].add((_o18, _w18))
    _cls_sig18 = collections.defaultdict(set)
    for _eid18, _lst18 in exact.items():
        if not _eid18.startswith("T:"):
            continue
        _cset18 = {_ci for _ci, _src in _lst18}
        if len(_cset18) != 1:
            continue
        _f18 = hx(_eid18[2:])
        if _f18 is None:
            continue
        _cls_sig18[next(iter(_cset18))] |= _sig18.get(_f18, set())
    _cls_big18 = {_ci: _s for _ci, _s in _cls_sig18.items() if len(_s) >= 5}
    print("[C18] binary offset signatures: classes=%d (>=5 offsets)" % len(_cls_big18), flush=True)

    def _cov18(_s, _obs):
        for (_o, _w) in _obs:
            if not any(_a <= _o and _o + _w <= _a + _b for (_a, _b) in _s):
                return False
        return True

    # --use-rs wave2：C18 三阶段（main/b/c）扫描下沉 Rust；_sig18/_cls_sig18/
    # _cls_big18 的构建与逐轮重建保持 Python 共享（两路径同一代码）。
    _rs18 = _rs_mod_cell[0]
    _ents18_list = list(ents.keys()) if _rs18 is not None else None
    if _rs18 is not None:
        _obs18_list = [[(o, (w if isinstance(w, int) else 0))
                        for (o, w) in ((ents.get(_e18x) or {}).get("obs") or ())]
                       for _e18x in _ents18_list]
        _eff18 = [-1 if _s is None else int(_s) for _s in U["eff_size"]]
        _mem18t = [[(o, w) for o, w in (U["members"][_ci] or {}).items()
                    if isinstance(w, int)] for _ci in range(n)]
        _allow18 = bool(getattr(args, "allow_heuristics", False))

        def _exact18_flat():
            _fl18 = []
            for _i18x, _e18x in enumerate(_ents18_list):
                for _ci18x, _s18x in (exact.get(_e18x) or ()):
                    _fl18.append((_i18x, _ci18x))
            return _fl18

        def _apply18(_r18, _tag18):
            _nb18 = (n + 7) // 8
            for _i18x, _mb18 in _r18["masks"]:
                _e18x = _ents18_list[_i18x]
                fam["C18"][_e18x] = (fam["C18"].get(_e18x, FULL)
                                     & int.from_bytes(_mb18, "little"))
            for _i18x, _c18x in _r18["pins"]:
                exact[_ents18_list[_i18x]].append((_c18x, _tag18))
                exact_count["C18"] = exact_count.get("C18", 0) + 1
                census["C18"] = census.get("C18", 0) + 1
            return len(_r18["pins"])

    if _rs18 is not None:
        _cls18_ci = list(_cls_big18.keys())
        _r18m = _rs18.c18_phase(
            0, n, _cls18_ci, [list(_cls_big18[_c]) for _c in _cls18_ci],
            _obs18_list, _exact18_flat(), _eff18, _mem18t, _allow18)
        _c18_tried = _r18m["tried"]
        _c18_amb = _r18m["amb"]
        _c18_exact = _apply18(_r18m, "C18:binary-signature")
    else:
        _c18_exact = _c18_tried = _c18_amb = 0
        for _eid18 in list(ents.keys()):
            _obs18 = ents[_eid18].get("obs") or set()
            if len(_obs18) < 2:
                continue
            _c18_tried += 1
            _need18 = max(_o + _w for (_o, _w) in _obs18)
            _hit18 = [_ci for _ci, _s in _cls_big18.items()
                      if _cov18(_s, _obs18)
                      and (not U["eff_size"][_ci] or int(U["eff_size"][_ci]) <= 6 * _need18)]
            if not _hit18:
                continue
            _mask18 = 0
            for _ci in _hit18:
                _mask18 |= (1 << _ci)
            fam["C18"][_eid18] = fam["C18"].get(_eid18, FULL) & _mask18
            if len(_hit18) != 1:
                # 只在**布局命中数严格领先**时才仲裁；并列时（如 0x405C00：42 个类全 4/4 命中）
                # 不猜——那属于没有判别力的簇，保持多解。
                _rank18 = []
                for _ci in _hit18:
                    _mem18 = U["members"][_ci] or {}
                    _h18 = sum(1 for (_o, _w) in _obs18
                               if isinstance(_mem18.get(_o), int) and _mem18[_o] >= _w)
                    _sz18 = U["eff_size"][_ci]
                    _gap18 = abs(int(_sz18) - _need18) if _sz18 else float("inf")
                    _rank18.append((- _h18, _gap18, _ci))
                _rank18.sort()
                if _rank18[0][0] <= -2 and _rank18[0][0] < _rank18[1][0]:
                    _hit18 = [_rank18[0][2]]
            if len(_hit18) != 1:
                _c18_amb += 1
                continue
            if exact.get(_eid18) and any(_ci != _hit18[0] for _ci, _src in exact[_eid18]):
                continue
            if not getattr(args, "allow_heuristics", False):
                continue        # --sound-only：签名匹配不产生 exact（仅作排序提示）
            exact[_eid18].append((_hit18[0], "C18:binary-signature"))
            exact_count["C18"] = exact_count.get("C18", 0) + 1
            census["C18"] = census.get("C18", 0) + 1
            _c18_exact += 1
    print("[C18] binary-signature exact=%d (tried=%d ambiguous=%d)"
          % (_c18_exact, _c18_tried, _c18_amb), flush=True)

    # C18b：多类覆盖时取**唯一最小签名**（拟合最紧的那个类）。
    # 防误判门：观测 >= 3 条且最大偏移 >= 0x40 —— 只看 +0..+16 的簇任何小类都能覆盖，
    # 那是假精度，不许钉。
    _c18b_exact = _c18b_amb = 0
    if _rs18 is not None:
        _r18b = _rs18.c18_phase(
            1, n, _cls18_ci, [list(_cls_big18[_c]) for _c in _cls18_ci],
            _obs18_list, _exact18_flat(), _eff18, _mem18t, _allow18)
        _c18b_exact = _apply18(_r18b, "C18b:minimal-signature")
        _c18b_amb = _r18b["amb"]
    else:
        for _eid18b in list(ents.keys()):
            if exact.get(_eid18b):
                continue
            _obs18b = ents[_eid18b].get("obs") or set()
            # 抽样对照 YRpp 实证：门槛 3 条观测时 C18b 的 66/98 条判定与 YRpp 矛盾 —— 太松。
            if len(_obs18b) < 6:
                continue
            if max(_o for (_o, _w) in _obs18b) < 0x40:
                continue
            _need18b = max(_o + _w for (_o, _w) in _obs18b)
            _hit18b = [(_ci, len(_s)) for _ci, _s in _cls_big18.items()
                       if _cov18(_s, _obs18b)
                       and (not U["eff_size"][_ci] or int(U["eff_size"][_ci]) <= 6 * _need18b)]
            if len(_hit18b) < 2:
                continue
            _hit18b.sort(key=lambda x: x[1])
            if _hit18b[0][1] < _hit18b[1][1] and not not getattr(args, "allow_heuristics", False):
                exact[_eid18b].append((_hit18b[0][0], "C18b:minimal-signature"))
                exact_count["C18"] = exact_count.get("C18", 0) + 1
                census["C18"] = census.get("C18", 0) + 1
                _c18b_exact += 1
            else:
                _c18b_amb += 1
    print("[C18b] minimal-signature exact=%d (tied=%d)" % (_c18b_exact, _c18b_amb), flush=True)

    # C18c：级联——用刚定类的函数扩充签名表，再跑一轮唯一覆盖。
    # 签名仍然只由汇编的 (offset,width) 构成，新定类的函数把它们自己的访问并进所属类。
    _c18c_rounds = []
    for _r18 in range(3):
        _cls_sig18 = collections.defaultdict(set)
        for _eid18c, _lst18c in exact.items():
            if not _eid18c.startswith("T:"):
                continue
            _cset18c = {_ci for _ci, _src in _lst18c}
            if len(_cset18c) != 1:
                continue
            _f18c = hx(_eid18c[2:])
            if _f18c is None:
                continue
            _cls_sig18[next(iter(_cset18c))] |= _sig18.get(_f18c, set())
        _cls_big18 = {_ci: _s for _ci, _s in _cls_sig18.items() if len(_s) >= 5}
        _c18c_n = 0
        if _rs18 is not None:
            _cls18_ci = list(_cls_big18.keys())
            _r18c = _rs18.c18_phase(
                2, n, _cls18_ci, [list(_cls_big18[_c]) for _c in _cls18_ci],
                _obs18_list, _exact18_flat(), _eff18, _mem18t, _allow18)
            _c18c_n = _apply18(_r18c, "C18c:cascade")
        else:
            for _eid18c in list(ents.keys()):
                if exact.get(_eid18c):
                    continue
                _obs18c = ents[_eid18c].get("obs") or set()
                if len(_obs18c) < 3 or max(_o for (_o, _w) in _obs18c) < 0x40:
                    continue
                _hit18c = [_ci for _ci, _s in _cls_big18.items() if _cov18(_s, _obs18c)]
                if len(_hit18c) == 1 and not not getattr(args, "allow_heuristics", False):
                    exact[_eid18c].append((_hit18c[0], "C18c:cascade"))
                    exact_count["C18"] = exact_count.get("C18", 0) + 1
                    census["C18"] = census.get("C18", 0) + 1
                    _c18c_n += 1
        _c18c_rounds.append(_c18c_n)
        if not _c18c_n:
            break
    print("[C18c] cascade exact per round=%s (classes in signature table=%d)"
          % (_c18c_rounds, len(_cls_big18)), flush=True)

    # FIX：C18/C18b/C18c 是**启发式**（"该类签名恰好覆盖观测集"依赖"所有类的签名都已知"
    # 这个完备性假设，不成立）。原实现只在写 exact 时设了开关，fam["C18"] 掩码
    # 仍无条件生效 —— 实测制造 310/386 个矛盾簇并改变值域。可靠模式下必须清空。
    if not getattr(args, "allow_heuristics", False):
        if fam.get("C18"):
            print("[C18] heuristic masks discarded in sound mode: %d entities"
                  % len(fam["C18"]), flush=True)
        fam["C18"] = {}
        census["C18"] = 0

    # ---------------- C19：构造调用给出源实体的类 ----------------
    # 汇编事实：`lea ecx,[ebp-18]; call Foo::Foo` / `mov ecx,ebx; call Foo::Foo`
    # —— 被构造对象的类就是 Foo。C4 已用装表把 Foo 的 ctor 钉死，这里反向把
    # **传给它的 this 源实体**定为 Foo。
    # 防误判：源若正是本函数自己的 this（T:fn），那是派生类构造里"传自身给基类 ctor"，
    # 对象真实类是派生类，不能记成基类 —— 跳过。
    _c19_exact = _c19_skip_self = _c19_noent = 0
    _c19_by_src = {}
    _ssa_split = {}
    try:
        _ssa_split = {k: v for k, v in (jload("anchors/stack_lifetime_split.json", {})
                                        or {}).items() if not k.startswith("_")}
    except Exception:
        _ssa_split = {}
    _ssa_use = {}
    _ctor_exact19 = {}
    for _eid19, _lst19 in exact.items():
        if not _eid19.startswith("T:"):
            continue
        _s19 = {_ci for _ci, _src in _lst19 if str(_src).startswith("C4")}
        if len(_s19) == 1:
            _ctor_exact19[_eid19] = next(iter(_s19))
    # Construct 助手（数据流识别：入口 this 链入 ctor 池成员）并入构造池
    _n_ch = 0
    try:
        for _ha, _hcs in ((jload("anchors/construct_helpers.json", {}) or {}).get("helpers") or {}).items():
            _hf = hx(_ha)
            if _hf is None or not _hcs or "T:%X" % _hf in _ctor_exact19:
                continue
            _hrs = {resolve(c) for c in _hcs}
            _hrs.discard(None)
            if len(_hrs) == 1:
                _ctor_exact19["T:%X" % _hf] = next(iter(_hrs))
                _n_ch += 1
    except Exception:
        pass
    print("[C19] construct helpers merged into pool: %d" % _n_ch, flush=True)
    for _e19 in raw:
        if _e19.get("type") != "CALL_ARG":
            continue
        _to19 = str(_e19.get("to") or "")
        if not _to19.endswith(":this"):
            continue
        _c19 = _ctor_exact19.get("T:" + ("%X" % hx(_to19.split(":")[0]))) if hx(_to19.split(":")[0]) is not None else None
        if _c19 is None:
            continue
        _fr19 = str(_e19.get("from") or "")
        try:
            _a19 = int(str(_e19.get("addr")), 16)
        except (TypeError, ValueError):
            continue
        _fn19 = fn_at(_a19)
        if _fr19.endswith(":this"):
            _src19 = ent_id(_fr19)
        elif ".member(" in _fr19:
            _src19 = ent_id(_fr19, _fn19)
        elif _fr19 in REGS or _fr19.startswith("stack_+"):
            _src19 = ent_id(_fr19, _fn19)
        else:
            continue
        if not _src19 or _src19 not in ents:
            _c19_noent += 1
            continue
        if _fn19 is not None and _src19 == "T:%X" % _fn19:
            _c19_skip_self += 1
            continue
        if exact.get(_src19) and any(_ci != _c19 for _ci, _src in exact[_src19]):
            continue
        if any(_ci == _c19 for _ci, _src in exact.get(_src19, ())):
            continue
        _c19_by_src.setdefault(_src19, []).append((_c19, _a19, _to19))
    # 两段式应用：栈槽复用时同一源会收到多个不同 ctor 类（实证 S:545150:+0x33c
    # 先被 CCFile 链的基类 dtor 触到、后段被容器族 ctor 复用）——每次构造都是真
    # 的，域 = 各 ctor 后代域的**并集**；单一 ctor 且无后代时 exact 等价可靠。
    _c19_union = 0
    _c19_skip_reused = 0
    _c19_demoted = 0
    # 被调方钉定表（C4/C15 单点）+ 全边索引（from 形态 -> 被调方列表）
    # 用于"使用边需要派生类"的降级判定（析构侧归因：ctor 池调用是销毁期基类 dtor，
    # 使用边的方法钉定在真后代上）
    _dtor_set19 = set()
    try:
        for _a19d in (jload("anchors/dtor_slots01.json", {}) or {}).get("addrs") or []:
            _v19d = hx(_a19d)
            if _v19d is not None:
                _dtor_set19.add(_v19d)
    except Exception:
        _dtor_set19 = set()
    print("[C19] dtor set (vtable slots 0/1): %d" % len(_dtor_set19), flush=True)
    _pin_by_fn19 = {}
    for _e19k, _lst19k in exact.items():
        if not _e19k.startswith("T:"):
            continue
        _cs19k = {_c for _c, _s2 in _lst19k if str(_s2).startswith(("C4", "C15"))}
        if len(_cs19k) == 1:
            _pin_by_fn19[_e19k] = next(iter(_cs19k))
    _callees_by_from19 = collections.defaultdict(set)
    for _e19i in raw:
        if _e19i.get("type") != "CALL_ARG":
            continue
        _f19i = _e19i.get("from")
        _t19i = _e19i.get("to")
        if not (isinstance(_f19i, str) and isinstance(_t19i, str)):
            continue
        if not _t19i.endswith(":this") or _t19i.startswith("vtable_slot_"):
            continue
        _ca19i = hx(_t19i.split(":")[0])
        if _ca19i is not None:
            _callees_by_from19[_f19i].add(_ca19i)
    _ssa_work = {}
    for _src19, _cls19 in _c19_by_src.items():
        _u19 = {_c for (_c, _a, _t) in _cls19}
        if len(_u19) > 1:
            # 栈槽复用：一个实体 ≥2 个生命周期 —— SSA 分裂（IDA 支配分析，
            # anchors/stack_lifetime_split.json）。每个 ctor 站点 = 一个生命
            # 周期实体 "S:fn:+off@C0xADDR"，使用边按最近支配 ctor 归期。
            _c19_skip_reused += 1
            if _src19.startswith("S:"):
                _ssa_work[_src19] = [(a, names[c], t) for (c, a, t) in _cls19]
                _sp = _ssa_split.get(_src19)
                if _sp:
                    _seen_life = {}
                    for (_c, _a, _t) in _cls19:
                        if _a in _seen_life:
                            continue
                        _seen_life[_a] = _c
                        _life = "%s@C0x%X" % (_src19, _a)
                        if _life not in ents:
                            touch(_life, "stack_+%s@C0x%X" % (_src19.split(":", 2)[2], _a))
                        exact[_life].append((_c, "C19:ssa"))
                        exact_count["C19"] = exact_count.get("C19", 0) + 1
                    for _us, _uc in (_sp.get("uses") or {}).items():
                        try:
                            _ua_s = int(_us, 16)
                        except (TypeError, ValueError):
                            continue
                        _ca = _uc[1] if isinstance(_uc, (list, tuple)) and len(_uc) > 1 else None
                        if _ca is not None and _ca in _seen_life:
                            _ssa_use[_ua_s] = (_src19, _ca)
            continue
        _c19 = next(iter(_u19))
        # 析构侧归因降级：构造若走 Construct 助手（不在 ctor 池），槽上唯一可见的
        # ctor 池调用是销毁期的基类 dtor —— exact 基类与使用边的派生类钉定矛盾
        # （第四十五轮普查：数十例 BufferIO→CCFile 同款）。判据：使用边中被调方
        # 的 C4/C15 钉定是该 ctor 类的**真后代** ⇒ 用后代域掩码（恒健全）。
        # 析构侧归因降级（精化版）：该源唯一可见的 ctor 池调用落在 vtable 槽 0/1
        # （= 析构函数对，二进制可判）⇒ 这是销毁期基类 dtor 作用于完整派生对象，
        # 钉 exact 基类会禁止所有派生类 —— 降为后代域。真构造（非槽 0/1）保持 exact。
        _is_dtor_call = any(_a19x in _dtor_set19 for (_c19x, _a19x, _t19x) in _cls19)
        if _is_dtor_call:
            fam["C19"][_src19] = fam["C19"].get(_src19, FULL) & allowed_of(_c19)
            _c19_demoted += 1
        else:
            exact[_src19].append((_c19, "C19:ctor-arg"))
            exact_count["C19"] = exact_count.get("C19", 0) + 1
            _c19_exact += 1
    if _ssa_work:
        # 附加：该槽在 raw 里的全部使用边 site（分裂时归生命周期用）
        _ssa_out = {}
        _slots_ssa = []
        for _sk, _ctors in _ssa_work.items():
            _p = _sk.split(":")
            if len(_p) < 3: continue
            _fn_s = _p[1]
            try: _fn_v = int(_fn_s, 16)
            except ValueError: continue
            _off_s = _p[2].lstrip("+")
            try: _off_v = int(_off_s, 16) if _off_s.lower().startswith("0x") else int(_off_s)
            except ValueError: continue
            _frm = "stack_+0x%X" % _off_v
            _slots_ssa.append((_sk, _ctors, _frm, _fn_v))
        if _slots_ssa and _rs_mod_cell[0] is not None:
            # --use-rs wave2：147 槽 × 1.38M raw 全扫下沉 Rust（单遍桶化 + fn_at
            # 二分），每槽 uses 保持 raw 序（与逐槽全扫逐项相等）。
            _ca_from, _ca_addr, _ca_to = [], [], []
            for _e19b in raw:
                if _e19b.get("type") != "CALL_ARG":
                    continue
                _ca_from.append(str(_e19b.get("from") or ""))
                try:
                    _ca_addr.append(int(str(_e19b.get("addr")), 16))
                except (TypeError, ValueError):
                    _ca_addr.append(-1)
                _ca_to.append(str(_e19b.get("to")))
            _uses_all = _rs_mod_cell[0].ssa_workload(
                [(_frm, _fn_v) for (_sk, _ct, _frm, _fn_v) in _slots_ssa],
                _ca_from, _ca_addr, _ca_to, list(faddrs))
            for (_sk, _ct, _frm, _fn_v), _us in zip(_slots_ssa, _uses_all):
                _ssa_out[_sk] = {"ctors": _ct, "uses": [[_a, _t] for (_a, _t) in _us]}
        else:
            for _sk, _ctors, _frm, _fn_v in _slots_ssa:
                _uses = []
                for _e19b in raw:
                    if _e19b.get("type") != "CALL_ARG": continue
                    if str(_e19b.get("from") or "") != _frm: continue
                    try: _a19b = int(str(_e19b.get("addr")), 16)
                    except (TypeError, ValueError): continue
                    if fn_at(_a19b) != _fn_v: continue
                    _uses.append([_a19b, str(_e19b.get("to"))])
                _ssa_out[_sk] = {"ctors": _ctors, "uses": _uses}
        json.dump(_ssa_out, open(os.path.join(ROOT, ".omo/ssa2/workload.json"), "w"), indent=1)
        print("[SSA] reused-slot workload dumped: %d slots" % len(_ssa_out), flush=True)
    print("[C19] ctor-argument exact=%d desc-demoted=%d reused_slots_skipped=%d (skip_self=%d not_entity=%d ctor_pool=%d)"
          % (_c19_exact, _c19_demoted, _c19_skip_reused, _c19_skip_self, _c19_noent,
             len(_ctor_exact19)), flush=True)

    # ---------------- C22：YRpp 外部参照（函数地址 -> 类）----------------
    # 用户批准的外部参照：YRpp 头文件里每个虚函数都写明 `JMP_THIS(0xADDR)` 与所属类，
    # 是社区长期维护的权威映射。优先级低于二进制（C4/C15/C11b），仅在无既有身份时使用；
    # 与既有身份冲突时丢弃并计数（二进制优先）。
    _c22_exact = _c22_conflict = 0
    try:
        _yrpp22 = (jload("anchors/yrpp_fn_class.json", {}) or {}).get("map") or {}
    except Exception:
        _yrpp22 = {}
    for _a22s, _cn22 in _yrpp22.items():
        _a22 = hx(_a22s)
        if _a22 is None:
            continue
        _ci22 = resolve(_cn22)
        if _ci22 is None:
            continue
        _eid22 = "T:%X" % _a22
        if _eid22 not in ents:
            continue
        if exact.get(_eid22):
            if any(_ci != _ci22 for _ci, _src in exact[_eid22]):
                _c22_conflict += 1          # 二进制身份优先，丢弃外部参照
            continue
        exact[_eid22].append((_ci22, "C22:yrpp"))
        exact_count["C22"] = exact_count.get("C22", 0) + 1
        census["C22"] = census.get("C22", 0) + 1
        _c22_exact += 1
    print("[C22] YRpp fn->class exact=%d (conflicts_with_binary=%d, pool=%d)"
          % (_c22_exact, _c22_conflict, len(_yrpp22)), flush=True)

    # ---------------- C23：YRpp 全局变量类型 ----------------
    # YRpp 的 `DEFINE_REFERENCE(Type, Name, 0xADDR)` 给出了全局变量地址与类型的权威对应。
    # 对 `G:<addr>` 实体直接定类（外部参照，二进制冲突时丢弃）。
    _c23_exact = _c23_conflict = 0
    try:
        _yrpp23 = (jload("anchors/yrpp_globals.json", {}) or {}).get("map") or {}
    except Exception:
        _yrpp23 = {}
    for _a23s, _cn23 in _yrpp23.items():
        _a23 = hx(_a23s)
        _ci23 = resolve(_cn23)
        if _a23 is None or _ci23 is None:
            continue
        _eid23 = "G:%X" % _a23
        if _eid23 not in ents:
            continue
        if exact.get(_eid23):
            if any(_ci != _ci23 for _ci, _src in exact[_eid23]):
                _c23_conflict += 1
            continue
        exact[_eid23].append((_ci23, "C23:yrpp-global"))
        exact_count["C23"] = exact_count.get("C23", 0) + 1
        census["C23"] = census.get("C23", 0) + 1
        _c23_exact += 1
    print("[C23] YRpp global types exact=%d (conflicts=%d, pool=%d)"
          % (_c23_exact, _c23_conflict, len(_yrpp23)), flush=True)

    # ---------------- C24：全局变量的具体类 ----------------
    # 全局变量是**具体实例**，不是基类句柄：若某全局被当作 this 传给已知类 C 的方法，
    # 该全局就是 C（或 C 的后代）。因此在它所有已知被调方类中取**最派生者**。
    # 与函数的方法归属方向相反（函数取最基类，全局取最派生类），依据是"实例 vs 声明"。
    _c24_exact = _c24_amb = 0
    _g_callees = collections.defaultdict(set)
    for _e24 in raw:
        if _e24.get("type") != "CALL_ARG":
            continue
        _to24 = str(_e24.get("to") or "")
        if not _to24.endswith(":this"):
            continue
        _fr24 = str(_e24.get("from") or "")
        if not (_fr24.startswith("offset ") or _fr24.startswith("dword_") or _fr24.startswith("g_")):
            continue
        _g24 = ent_id(_fr24)
        if not _g24 or not _g24.startswith("G:"):
            continue
        _a24 = hx(_to24.split(":")[0])
        if _a24 is None:
            continue
        _cls24 = _fn_class_seed.get(_a24) if "_fn_class_seed" in dir() else None
        if _cls24 is None:
            _lst24 = exact.get("T:%X" % _a24)
            if _lst24:
                _cs24 = {_ci for _ci, _src in _lst24}
                if len(_cs24) == 1:
                    _cls24 = next(iter(_cs24))
        if _cls24 is not None:
            _g_callees[_g24].add(_cls24)
    for _g24, _cs24 in _g_callees.items():
        if _g24 not in ents or exact.get(_g24):
            continue
        _max24 = None
        for _ci24 in _cs24:
            if all(_ci24 == _cj or _cj in U["anc"][_ci24] for _cj in _cs24):
                _max24 = _ci24
                break
        if _max24 is None:
            _c24_amb += 1
            continue
        exact[_g24].append((_max24, "C24:global-instance"))
        exact_count["C24"] = exact_count.get("C24", 0) + 1
        census["C24"] = census.get("C24", 0) + 1
        _c24_exact += 1
    print("[C24] global-instance exact=%d (ambiguous=%d, globals_with_known_callees=%d)"
          % (_c24_exact, _c24_amb, len(_g_callees)), flush=True)

    # ---------------- C25：YRpp 参数类型 ----------------
    # YRpp 的函数声明带参数类型（如 `IsInSameZoneAs(AbstractClass* pTarget)`），
    # 对 `P:<addr>:<i>` 直接定类（外部参照，二进制冲突时丢弃）。
    _c25_exact = _c25_conflict = 0
    try:
        _yrpp25 = (jload("anchors/yrpp_params.json", {}) or {}).get("map") or {}
    except Exception:
        _yrpp25 = {}
    for _k25, _cn25 in _yrpp25.items():
        _a25s, _i25s = _k25.split(":")
        _a25 = hx(_a25s)
        _ci25 = resolve(_cn25)
        if _a25 is None or _ci25 is None:
            continue
        _eid25 = "P:%X:%s" % (_a25, _i25s)
        if _eid25 not in ents:
            continue
        if exact.get(_eid25):
            if any(_ci != _ci25 for _ci, _src in exact[_eid25]):
                _c25_conflict += 1
            continue
        exact[_eid25].append((_ci25, "C25:yrpp-param"))
        exact_count["C25"] = exact_count.get("C25", 0) + 1
        census["C25"] = census.get("C25", 0) + 1
        _c25_exact += 1
    print("[C25] YRpp param types exact=%d (conflicts=%d, pool=%d)"
          % (_c25_exact, _c25_conflict, len(_yrpp25)), flush=True)

    # ---------------- C21：单函数自己的访问集合 vs 类布局 ----------------
    # C18 用的是「整簇观测并集」，会把同簇里多个函数的访问混在一起，掩盖单函数的指纹。
    # 这里对**每个函数**单独取它在 this 上的 (offset,width) 集合，要求某个类的布局
    # 逐个精确覆盖（成员宽度够），且只被**一个**类覆盖 -> 该函数的类即那个类。
    # 门槛：>=3 个访问且最大偏移 >=0x40（避免只看 +0..+16 的万能小类）。
    _c21_exact = _c21_amb = _c21_none = 0
    _lay21 = {}
    for _i21 in range(n):
        _mm21 = U["members"][_i21]
        if _mm21 and len(_mm21) >= 5:
            _lay21[_i21] = _mm21
    for _fn21, _obs21 in _sig18.items():
        if len(_obs21) < 3 or max(_o for (_o, _w) in _obs21) < 0x40:
            continue
        _eid21 = "T:%X" % _fn21
        if _eid21 not in ents or exact.get(_eid21):
            continue
        _hits21 = [_ci for _ci, _mm in _lay21.items()
                   if all(_mm.get(_o, 0) >= _w for (_o, _w) in _obs21)]
        if len(_hits21) == 1:
            exact[_eid21].append((_hits21[0], "C21:fn-layout"))
            exact_count["C21"] = exact_count.get("C21", 0) + 1
            census["C21"] = census.get("C21", 0) + 1
            _c21_exact += 1
        elif _hits21:
            _c21_amb += 1
        else:
            _c21_none += 1
    print("[C21] per-function layout exact=%d (ambiguous=%d no_match=%d layouts=%d)"
          % (_c21_exact, _c21_amb, _c21_none, len(_lay21)), flush=True)

    # ---------------- 等式（union-find + 证据审计） ----------------
    uf = UF()
    ch_stats = collections.defaultdict(lambda: {"unions": 0, "exact_conflicts": 0,
                                                "examples": []})
    root_exact = {}
    for eid, lst in exact.items():
        root_exact.setdefault(uf.find(eid), set()).update(ci for ci, _s in lst)
    root_self_cls = collections.defaultdict(set)
    for _eid, _ci in self_pin_cls.items():
        root_self_cls[uf.find(_eid)].add(_ci)


    _watch = set(x for x in (os.environ.get("MC_WATCH") or "").split(",") if x)

    def un(a, b, channel):
        if _watch and (str(a) in _watch or str(b) in _watch):
            print("[union] %-22s %-22s via %s" % (a, b, channel), flush=True)
        if a is None or b is None:
            return False
        ra, rb = uf.find(a), uf.find(b)
        if ra == rb:
            return False
        ea, eb = root_exact.get(ra, set()), root_exact.get(rb, set())
        if ea and eb and ea.isdisjoint(eb):
            st = ch_stats[channel]
            st["exact_conflicts"] += 1
            if len(st["examples"]) < 6:
                st["examples"].append({"a": a, "b": b,
                                       "a_classes": [names[c] for c in sorted(ea)],
                                       "b_classes": [names[c] for c in sorted(eb)]})
            return False          # EXACT 硬约束：不合并，记录矛盾证据
        _cra, _crb = root_self_cls.get(ra, set()), root_self_cls.get(rb, set())
        uf.union(a, b)
        nr = uf.find(a)
        root_exact[nr] = ea | eb
        if _cra or _crb:
            root_self_cls[nr] = _cra | _crb
        ch_stats[channel]["unions"] += 1
        return True

    def is_arg_target(to):
        return isinstance(to, str) and (to.endswith(":this") or "::param" in to) \
            and not to.startswith("vtable_slot_")

    for e in raw:
        if e.get("type") != "FUNC_PARAM":
            continue
        fr = e.get("from")
        a = hx(str(fr).split(":")[0]) if isinstance(fr, str) else None
        un(ent_id(fr, a), ent_id(e.get("to"), a), "func_param")

    # ---- 跨帧等式候选收集（proven-same-object 收紧，X152） ----
    # 唯一目标形态：调用点实参值 → 被调方共享形参实体（T:<callee> / P:<callee>:k）。
    # 被调方形参被所有调用点共享 = 多态汇合点；把 >1 个不同来源实体并进去
    # 会把无关对象粘成一簇（X152: C2 空域冲突簇的 71% 由此产生）。
    cands = []                                    # (channel, from_eid, to_eid, kind, clean, site)
    target_froms = collections.defaultdict(set)   # to_entity -> {distinct from entities}
    if facts:
        for e in raw:
            if e.get("type") != "CALL_ARG" or not is_arg_target(e.get("to")):
                continue
            fr = e.get("from")
            if not isinstance(fr, str) or fr.startswith("stack_+"):
                continue
            a = hx(e.get("addr")) or 0
            te = ent_id(e.get("to"))
            if te is None:
                continue
            if fr in REGS:
                if args.no_reg_flow:
                    continue
                sr = site_reg.get((a, fr))
                if sr and sr[0]:
                    cands.append(("reg_def", sr[0], te, sr[0][0], bool(sr[1]), a))
                    target_froms[te].add(sr[0])
                continue
            fe = ent_id(fr, fn_at(a))
            if fe is None:
                continue                          # 实体不可解析——原本也不产生合并
            cands.append(("callarg_direct", fe, te, fe[0], True, a))
            target_froms[te].add(fe)

    rejected_merges = collections.Counter()
    rejected_examples = collections.defaultdict(list)

    def reject(reason, detail):
        rejected_merges[reason] += 1
        lst = rejected_examples[reason]
        if len(lst) < 6:
            lst.append(detail)

    def global_proven(fe):
        """C8 ctor/vtable-install 证明的全局类（等式规则 2）：
        vtable-install（facts 扫描 mov [g_X], offset ??_7Class）或
        singleton_types（构造存储锚定 = ctor 证明）。"""
        if any(s == "C8:vtable-install" for _ci, s in exact.get(fe, ())):
            return True
        try:
            ga = int(fe[2:], 16)
        except ValueError:
            return False
        return any(("%s" % k) in ("0x%08X" % ga, "0x%x" % ga) or hx(k) == ga
                   for k in singl)

    mtypes = jload("anchors/member_types.json", {}) or {}

    def member_chain_class(fe):
        """M:<fn>:this:<off> → 成员类（等式规则 1）；无法解析 → None"""
        try:
            fn = int(fe[2:].split(":", 1)[0], 16)
            which = fe.split(":")[2]
            off = int(fe.rsplit(":", 1)[1])
        except (ValueError, IndexError):
            return None
        if which != "this":
            return None
        if fn in false_proto_fns:
            return None       # 外围函数类归属被证伪，成员链不可信
        own = owner_of_fn.get(fn)
        if own is None:
            return None
        cn = names[own[0]]
        for fmt in ("%s+0x%X" % (cn, off), "%s+0x%x" % (cn, off)):
            rec = mtypes.get(fmt)
            if rec:
                return type_class(rec.get("type") or "")
        return None

    root_self_cls.clear()
    print("[dbg] self_pin_cls=%d" % len(self_pin_cls), flush=True)
    for _probe in ("T:41D540", "T:41DC80", "T:544CB0", "T:547020"):
        _r = uf.find(_probe)
        print("[dbg] %s root=%s cls=%s selfkey=%s" %
              (_probe, _r, [names[c] for c in root_self_cls.get(_r, ())],
                _probe in self_pin_cls), flush=True)
    for _eid, _ci in self_pin_cls.items():
        root_self_cls[uf.find(_eid)].add(_ci)
    multi_joins = sum(1 for s in target_froms.values() if len(s) > 1)
    # 按**边数**统计每个目标的实参边（不是"可解析来源数"）：参数是个槽位，
    # 只要有多个调用点写入，它就不是单一对象 —— 即使其它来源解析不出来。
    # 实证 bug：P:401000:0 有 3 个调用点（edi/esi/edi），仅 1 个可解析，
    # 于是 reg_def 把参数与 T:4023F0 合并，导致整簇观测错乱、C10 与 C1 假冲突。
    _edge_cnt = collections.Counter()
    for _e5 in raw:
        if _e5.get("type") != "CALL_ARG":
            continue
        _t5 = _e5.get("to")
        if isinstance(_t5, str) and (":this" in _t5 or "::param" in _t5):
            _edge_cnt[_t5] += 1
    _edge_cnt_by_ent = collections.Counter()
    for _t5s, _c5 in _edge_cnt.items():
        _ee5 = ent_id(_t5s)
        if _ee5 is not None:
            _edge_cnt_by_ent[_ee5] = max(_edge_cnt_by_ent[_ee5], _c5)
    for channel, fe, te, kind, clean, site in cands:
        detail = {"channel": channel, "from": fe, "to": te, "site": "0x%X" % site}
        if len(target_froms[te]) > 1 or _edge_cnt_by_ent.get(te, 0) > 1:
            reject("multi_caller_join", detail)   # 多态汇合点：非同一对象
            continue
        if channel == "reg_def":
            if not clean:
                reject("reg_flow_tainted", detail)  # 跨 call / 控制流汇合
                continue
        elif kind == "G":
            if not global_proven(fe):
                reject("global_unproven", detail)
                continue
        elif kind == "M":
            if member_chain_class(fe) is None:
                reject("member_chain_unproven", detail)
                continue
        elif kind not in ("T", "P"):
            reject("unproven_kind", detail)
            continue
        _ra, _rb = uf.find(fe), uf.find(te)
        _ca, _cb = root_self_cls.get(_ra, set()), root_self_cls.get(_rb, set())
        _incomp = False
        for _x in _ca:
            for _y in _cb:
                if not (allowed_of(_x) & allowed_of(_y)):
                    _incomp = True
                    break
            if _incomp:
                break
        if _incomp:
            # 规则 M：两侧 self-pin 类无公共后代 -> same-object 主张被证伪
            reject("self_pin_incompatible",
                   {"channel": channel, "from": fe, "to": te,
                    "cls": sorted(names[c] for c in (_ca | _cb))[:4]})
            continue
        un(fe, te, channel)

    for a_eid, b_eid in c5_link:
        un(a_eid, b_eid, "new_ctor")

    # ---- 返回值 = this（等式，二进制事实）----
    # `mov eax, <this 别名>; ret` 的函数，其返回值就是 this（setter/链式调用常见）。
    # 提取自 IDA：1,927 个函数满足。让 RET:<fn> 与 T:<fn> 并簇。
    _ret_unions = 0
    try:
        _rt = (jload("anchors/fn_returns_this.json", {}) or {}).get("map") or {}
    except Exception:
        _rt = {}
    for _as_r in _rt:
        _ar = hx(_as_r)
        if _ar is None:
            continue
        _re = "RET:%X" % _ar
        _te = "T:%X" % _ar
        if _re in ents and _te in ents:
            un(_re, _te, "return_this")
            _ret_unions += 1
    print("[RET] return==this unions: %d" % _ret_unions, flush=True)

    # ---- C20：ECX 即 this（同一对象）----
    # 汇编事实：接收 this 的函数在入口处 ecx 就是 this；该函数内所有以 ecx 为源的
    # 寄存器实体（R:<fn>:ecx）聚合的正是同一个对象。把它与本函数的 T:<fn> 并簇。
    # 判定表 anchors/fn_takes_this.json = 入口在读 ECX 前未写过 ECX 的函数集合（纯汇编）。
    _c20_n = 0
    try:
        _takes_this20 = jload("anchors/fn_takes_this.json", {}) or {}
    except Exception:
        _takes_this20 = {}
    for _fn20s, _t20 in _takes_this20.items():
        if not _t20:
            continue
        _a20 = hx(_fn20s[2:]) if str(_fn20s).lower().startswith('0x') else hx(_fn20s)
        if _a20 is None:
            continue
        _r20 = "R:%X:ecx" % _a20
        _t_eid20 = "T:%X" % _a20
        if _r20 in ents and _t_eid20 in ents:
            un(_r20, _t_eid20, "ecx_is_this")
            _c20_n += 1
    _dbg_r = sum(1 for k in _takes_this20 if ("R:%s:ecx" % ("%X" % int(str(k), 16))) in ents)
    _dbg_t = sum(1 for k in _takes_this20 if ("T:%s" % ("%X" % int(str(k), 16))) in ents)
    _sample_r = [k for k in list(_takes_this20)[:5]]
    print("[C20][dbg] takes_this=%d  R-in-ents=%d  T-in-ents=%d  sample_keys=%s  r_keys_sample=%s"
          % (len(_takes_this20), _dbg_r, _dbg_t, _sample_r[:3],
             [("R:%s:ecx" % ("%X" % int(str(k), 16))) for k in _sample_r[:3]]), flush=True)
    print("[C20] ecx==this unions: %d (functions taking this=%d)"
          % (_c20_n, sum(1 for v in _takes_this20.values() if v)), flush=True)

    # ---- C17：洁净寄存器 = 函数 this（同一对象的等式）----
    # facts.reg_links = [site, reg, src, clean]；clean=True 表示该寄存器的到达定义
    # 未经跨调用/控制流汇合，即在此点它装的就是 src 那个对象。当 src 正是本函数的
    # this（T:<fn>）时，R:<fn>:<reg> 与 T:<fn> 是同一对象 -> 并入同簇。
    _c17_n = 0
    if facts:
        for _lk17 in (facts.get("reg_links") or ()):
            try:
                _site17, _reg17, _src17, _clean17 = _lk17[0], _lk17[1], _lk17[2], _lk17[3]
            except (IndexError, TypeError):
                continue
            if not _clean17 or not isinstance(_src17, str) or not _src17.startswith("T:"):
                continue
            _reid17 = "R:%s:%s" % (_src17[2:], _reg17)
            if _reid17 in ents and _src17 in ents:
                un(_reid17, _src17, "reg_same_object")
                _c17_n += 1
    print("[C17] clean register == function this unions: %d" % _c17_n, flush=True)

    print("[merge-census] candidates=%d (callarg_direct=%d reg_def=%d) "
          "targets=%d multi_source_joins=%d"
          % (len(cands), sum(1 for c in cands if c[0] == "callarg_direct"),
             sum(1 for c in cands if c[0] == "reg_def"),
             len(target_froms), multi_joins), flush=True)
    print("[merge-rejects] " + ("  ".join("%s=%d" % kv for kv in sorted(rejected_merges.items()))
                                or "(none)"), flush=True)
    print("[equality] " + "  ".join(
        "%s=%d(exact-rej %d)" % (k, v["unions"], v["exact_conflicts"])
        for k, v in sorted(ch_stats.items())), flush=True)

    # ---------------- 簇 ----------------
    groups = collections.defaultdict(list)
    for eid in ents:
        groups[uf.find(eid)].append(eid)
    clusters = []
    for root, members in groups.items():
        obs = set()
        exs = {}
        for m in members:
            obs |= ents[m]["obs"]
            for ci, s in exact.get(m, ()):
                exs.setdefault(ci, []).append(s)
        clusters.append({"root": root, "ents": members, "obs": obs,
                         "exact": exs})
    print("[clusters] %d (entities %d)" % (len(clusters), len(ents)), flush=True)

    # ---- C26（可选，默认关闭）：链接序局部性，硬约束形态 ----
    if (not getattr(args, "no_c26_locality", False)) and (not not getattr(args, "allow_heuristics", False)):
        _pts26 = {}
        for _eid26, _lst26 in exact.items():
            if not _eid26.startswith("T:"):
                continue
            _cs26 = {_ci for _ci, _src in _lst26}
            if len(_cs26) == 1:
                _a26 = hx(_eid26[2:])
                if _a26 is not None:
                    _pts26[_a26] = next(iter(_cs26))
        for _as26, _cn26 in ((jload("anchors/yrpp_fn_class.json", {}) or {}).get("map") or {}).items():
            _a26b = hx(_as26); _ci26b = resolve(_cn26)
            if _a26b is not None and _ci26b is not None:
                _pts26.setdefault(_a26b, _ci26b)
        _s26 = sorted(_pts26.items()); _ad26 = [x[0] for x in _s26]
        import bisect as _b26
        _c26 = 0
        for _cl26 in clusters:
            _r26 = (_cl26.get("root") if isinstance(_cl26, dict) else str(_cl26))
            # 局部性只对**函数自身**成立（T: 实体）：0xADDR 是该函数地址。
            # 对 P:/R:/M:/G:/N: 实体，0xADDR 是**外层函数**地址，与实体自身的类无关 ——
            # 早期版本没区分，导致 363 个冲突（实证：P:413850:0 的 C10 与 C26 交集为空）。
            if not str(_r26).startswith("T:"):
                continue
            _pp26 = str(_r26).split(":")
            if len(_pp26) < 2: continue
            _a26c = hx(_pp26[1])
            if _a26c is None: continue
            _i26 = _b26.bisect_left(_ad26, _a26c)
            _cnt26 = collections.Counter()
            _lo26 = _i26 - 1
            while _lo26 >= 0 and _a26c - _ad26[_lo26] <= 0x100:
                _cnt26[_s26[_lo26][1]] += 1; _lo26 -= 1
            _hi26 = _i26
            while _hi26 < len(_ad26) and _ad26[_hi26] - _a26c <= 0x100:
                if _ad26[_hi26] != _a26c: _cnt26[_s26[_hi26][1]] += 1
                _hi26 += 1
            if not _cnt26: continue
            _mc26 = _cnt26.most_common(2)
            if _mc26[0][1] < 3 or (len(_mc26) > 1 and _mc26[1][1] == _mc26[0][1]): continue
            _cur26 = FULL
            for _f26 in FAMILIES:
                if _f26 in ("C26", "C1"): continue
                _fm26 = fam[_f26].get(_r26)
                if _fm26 is not None: _cur26 &= _fm26
            if _cl26.get("obs"):
                _cur26 &= c1_mask(_cl26["obs"])
            _lc26 = _mc26[0][0]
            if _cur26.bit_count() > 1 and ((_cur26 >> _lc26) & 1):
                fam["C26"][_r26] = 1 << _lc26
                _c26 += 1
        print("[C26] locality (hard) applied=%d" % _c26, flush=True)

    # ---- 布局补全：用「已二进制定类」簇的观测补全该类的成员表 ----
    # 身份来自 C4/C15（装表/槽位），簇内观测来自同一对象 -> 这些偏移就是该类的真实成员。
    # 实测：986 条观测的大簇，最好的类也只覆盖 302 条 —— 声明布局缺了约 70% 的真实成员，
    # C1/C18 的判别力因此被系统性削弱。
    _lay_add = 0
    _lay_cls = set()
    for _cl in clusters:
        _exs = _cl.get("exact") or {}
        if len(_exs) != 1:
            continue
        _ci = next(iter(_exs))
        _lay_cls.add(_ci)
        for (_o, _w) in (_cl.get("obs") or ()):
            if _o not in U["members"][_ci]:
                U["members"][_ci][_o] = _w
                _lay_add += 1
    if _lay_add:
        for _i in range(n):
            if not U["has_layout"][_i]:
                continue
            _iv = []
            for _off, _w2 in U["members"][_i].items():
                _ww = _w2 if isinstance(_w2, int) and _w2 > 0 else 4
                _iv.append((_off, _off + _ww))
            _iv.sort()
            _mg = []
            for _a, _b in _iv:
                if _mg and _a <= _mg[-1][1]:
                    if _b > _mg[-1][1]:
                        _mg[-1] = (_mg[-1][0], _b)
                else:
                    _mg.append((_a, _b))
            intervals[_i] = _mg
        c1_cache.clear()
        c1_range_cache.clear()
    print("[layouts] cluster-obs completion: %d members added across %d classes"
          % (_lay_add, len(_lay_cls)), flush=True)
    ALL_EXACT_CLASSES = {ci for cl in clusters for ci in cl["exact"]}

    # ---------------- 求解 ----------------
    _c1_exempt = set()    # 冲突消解台账：C1 证据被驳倒的簇 root（簇局部豁免）
    # 证据自相矛盾的簇：**不仲裁、不丢弃任何族**，答案记为「不知道」。
    # 用户裁定：冲突必须当 bug 追查，禁止按 provenance 强弱丢弃证据后采信结果。
    _unknown_roots = set()

    # 增量调度层：per-(root, family) 簇族掩码 memo（pre-_pfm；_pfm/_unknown_roots 活状态现算）。
    # fam/ents/exact/clusters 自 family 循环起冻结 → memo 在全部 solve() 调用间精确透明。
    _incr_cell = {"on": _incr_on}
    _CLFAM_CACHE = {}

    def cluster_domains(enabled, apply_c1=True):
        """返回 [(cluster, domain, exact_ci, exact_src, flags)]。

        语义层级（硬→软）：
          1) EXACT（C4/C8）决定类；族侧矛盾/宽度冲突只作为 flags 诊断记录，
             不销毁簇（否则 K 会因"簇被移除"而假性下降）。
          2) 无 EXACT 时，各族域求交；交为空 → flags 记录，域退化为非空族域的并
             （best-effort，仍参与覆盖，绝不静默丢实体）。
        """
        out = []
        for cl in clusters:
            # C1 的排除只有当基址寄存器**确定是对象本身**时才成立。
            # T: = 函数 this，一定是对象 -> 成员访问，必要条件成立。
            # M:/P:/S:/R:/G:/N: 的基址是"从某处读出的指针值"，可能指向数组/缓冲区，
            # 此时 [ptr+off] 是数组下标而非成员访问 -> 不能作否定证据。
            # 实测（2026-10-30）：54 个矛盾簇中 53 个根是 M:、1 个是 R:，0 个是 T:；
            # 例 0x42A466 `mov edx,[eax+100000h]`（eax=this->member(0x10)，1MB 偏移，
            # 是堆分配器的计数器，不是成员）。
            _root_pfx = str(cl.get("root") or "")[:2]
            _c1_applies = (_root_pfx == "T:")
            m_c1 = (c1_mask(cl["obs"]) if (cl["obs"] and apply_c1 and _c1_applies)
                    else FULL)
            if cl.get("root") in _c1_exempt:
                m_c1 = FULL     # 冲突消解：该簇的 C1 证据已被驳倒（见消解台账）
            if cl.get("root") in _unknown_roots:
                m_c1 = FULL     # 证据矛盾：不主张任何类
            _dbgr = os.environ.get("MC_DBG_ROOT")
            if _dbgr and str(cl.get("root")) == _dbgr:
                _cw = resolve("Sidebar")
                print("[dbg] %s BEFORE _pfm: c1 allows Sidebar=%s size=%d obs=%d"
                      % (_dbgr, bool(_cw is not None and ((m_c1 >> _cw) & 1)), m_c1.bit_count(),
                         len(cl["obs"])), flush=True)
            m_c1 = _pfm(m_c1)   # proven universe：幻影类从 C1 掩码剔除
            if _dbgr and str(cl.get("root")) == _dbgr:
                _cw = resolve("Sidebar")
                print("[dbg] %s AFTER _pfm: c1 allows Sidebar=%s size=%d exempt=%s"
                      % (_dbgr, bool(_cw is not None and ((m_c1 >> _cw) & 1)), m_c1.bit_count(),
                         str(cl.get("root")) in _c1_exempt), flush=True)
            m = m_c1
            masks = {"C1": m_c1}
            for f in enabled:
                if f == "C1":
                    continue
                if cl.get("root") in _unknown_roots:
                    masks[f] = FULL
                    continue
                if _incr_cell["on"]:
                    _mc_key = (cl.get("root"), f)
                    _mc_val = _CLFAM_CACHE.get(_mc_key, _MEMO_MISS)
                    if _mc_val is _MEMO_MISS:
                        mf = FULL
                        hit = False
                        for eid in cl["ents"]:
                            fm = fam[f].get(eid)
                            if fm is not None:
                                mf &= fm
                                hit = True
                        _CLFAM_CACHE[_mc_key] = (hit, mf)
                    else:
                        hit, mf = _mc_val
                else:
                    mf = FULL
                    hit = False
                    for eid in cl["ents"]:
                        fm = fam[f].get(eid)
                        if fm is not None:
                            mf &= fm
                            hit = True
                masks[f] = _pfm(mf) if hit else FULL   # proven universe：逐族剔除
                m &= masks[f]
            # 类型种类纪律：接收者簇（T:/R:/GS:）必须是类域——基元/数组/指针类型
            # 经等值链流入接收者时按类掩码滤除（this 不可能是 int）。
            # 基元-only 的族证据 = 实参误分类噪声 → 弃用该族证据（置 FULL），不清空。
            if _root_pfx in ("T:", "R:", "GS"):
                for _f2 in masks:
                    if masks[_f2] & _CLASSMASK:
                        masks[_f2] &= _CLASSMASK
                    else:
                        masks[_f2] = FULL
                if m & _CLASSMASK:
                    m &= _CLASSMASK
            exs = {}
            for ci, ss in cl["exact"].items():
                kept = []
                for s in ss:
                    if s.startswith("C4") and "C4" not in enabled:
                        continue
                    if s.startswith("C8") and "C8" not in enabled:
                        continue
                    kept.append(s)
                if kept:
                    exs[ci] = kept
            exact_ci = None
            exact_src = []
            flags = {}
            if len(exs) == 1:
                exact_ci = next(iter(exs))
                exact_src = [(names[exact_ci], s) for s in exs[exact_ci]]
                if cl["obs"]:
                    wconf = c1_width_conflict(exact_ci, cl["obs"])
                    if wconf:
                        flags["width_conflict"] = wconf
                contra = [f for f in enabled
                          if f != "C1" and masks.get(f, FULL) and not (masks[f] >> exact_ci) & 1]
                if (masks["C1"] >> exact_ci) & 1 == 0 and cl["obs"] and "width_conflict" not in flags:
                    contra.append("C1(missing-offset)")
                if contra:
                    flags["exact_contradicts_family"] = contra
                out.append((cl, 1 << exact_ci, exact_ci, exact_src, flags))
                continue
            if len(exs) > 1:
                srcs = [(names[ci], s) for ci, ss in exs.items() for s in ss]
                domain = 0
                for ci in exs:
                    domain |= (1 << ci)
                flags["exact_conflict"] = sorted(names[ci] for ci in exs)
                out.append((cl, domain or FULL, None, srcs, flags))
                continue
            if _dbgr and str(cl.get("root")) == _dbgr:
                _cw = resolve("Sidebar")
                print("[dbg] %s FINAL: m=%d allowsSidebar=%s exs=%d flags=%s masks=%s"
                      % (_dbgr, m.bit_count(), bool(_cw is not None and ((m >> _cw) & 1)),
                         len(exs), sorted(flags), {k: v.bit_count() for k, v in masks.items()}), flush=True)
            if m:
                out.append((cl, m, None, [], flags))
                continue
            # 无 EXACT 且交为空
            fallback = 0
            for f, mf in masks.items():
                if mf and mf != FULL:
                    fallback |= mf
            if "C1" in masks and not m_c1 and cl["obs"]:
                flags["c1_gap"] = True
            else:
                flags["empty_domain"] = True
            out.append((cl, fallback or FULL, None, [], flags))
        return out

    def greedy(dom_list):
        nc = len(dom_list)
        cover_of = collections.defaultdict(set)
        cls_of_cluster = []
        for ci_cl, (cl, m) in enumerate(dom_list):
            mm = m
            lst = []
            while mm:
                b = mm & -mm
                i = b.bit_length() - 1
                lst.append(i)
                cover_of[i].add(ci_cl)
                mm ^= b
            cls_of_cluster.append(lst)
        uncovered = set(range(nc))
        counts = {i: len(s) for i, s in cover_of.items()}
        # 特异性偏好：优先选择"被单点域/EXACT 强制过"的类，避免稀疏布局的
        # 宽域类（如 Options）吃掉成千上万个无信息簇，导致赋值不可解释。
        support = collections.Counter()
        for (cl, m) in dom_list:
            if m.bit_count() == 1:
                support[m.bit_length() - 1] += 1
        for ci in ALL_EXACT_CLASSES:
            support[ci] += 1
        chosen, assign = [], {}
        while uncovered:
            best, bestn, bestsup = -1, 0, -1
            for i, c in counts.items():
                if c > bestn or (c == bestn and c > 0 and support.get(i, 0) > bestsup):
                    best, bestn, bestsup = i, c, support.get(i, 0)
            if best < 0 or bestn == 0:
                break
            take = cover_of[best] & uncovered
            for cl in take:
                assign[cl] = best
                for c in cls_of_cluster[cl]:
                    if counts.get(c, 0) > 0:
                        counts[c] -= 1
            counts[best] = -1
            chosen.append(best)
            uncovered -= take
        return chosen, cover_of, uncovered, assign

    def improve(dom_list, chosen, cover_of, max_pairs):
        doms = [m for (_, m) in dom_list]
        chosen = list(chosen)
        replaced = 0

        def make_index():
            idx_ = collections.defaultdict(list)
            for c in chosen:
                for cl in cover_of[c]:
                    idx_[cl].append(c)
            return idx_

        idx = make_index()
        changed = True
        while changed:
            changed = False
            for c in sorted(chosen, key=lambda x: len(cover_of.get(x, ()))):
                if all(len(idx.get(cl, ())) >= 2 for cl in cover_of.get(c, ())):
                    chosen.remove(c)
                    for cl in cover_of.get(c, ()):
                        idx[cl].remove(c)
                    replaced += 1
                    changed = True
                    break
        n_pairs = 0
        while n_pairs < max_pairs:
            idx = make_index()
            excl1 = collections.defaultdict(list)
            pair2 = collections.defaultdict(list)
            for cl, cs in idx.items():
                if len(cs) == 1:
                    excl1[cs[0]].append(cl)
                elif len(cs) == 2:
                    pair2[(min(cs), max(cs))].append(cl)
            mergeable = [c for c in chosen
                         if any(doms[cl].bit_count() > 1 for cl in cover_of.get(c, ()))]
            improved = False
            for ii in range(len(mergeable)):
                if improved or n_pairs >= max_pairs:
                    break
                a = mergeable[ii]
                for b in mergeable[ii + 1:]:
                    n_pairs += 1
                    if n_pairs >= max_pairs:
                        break
                    excl = excl1.get(a, []) + excl1.get(b, []) + \
                        pair2.get((min(a, b), max(a, b)), [])
                    if not excl:
                        chosen.remove(b)
                        replaced += 1
                        improved = True
                        break
                    excl.sort(key=lambda cl: doms[cl].bit_count())
                    inter = doms[excl[0]]
                    for cl in excl[1:]:
                        inter &= doms[cl]
                        if not inter:
                            break
                    inter &= ~(1 << a) & ~(1 << b)
                    if not inter:
                        continue
                    cand = inter.bit_length() - 1
                    chosen = [x for x in chosen if x not in (a, b)] + [cand]
                    replaced += 1
                    improved = True
                    break
            if not improved:
                break
        return chosen, replaced

    def lower_bound(dom_list):
        idxs = sorted(range(len(dom_list)), key=lambda i: dom_list[i][1].bit_count())
        picked_union = 0
        lb = 0
        for i in idxs:
            m = dom_list[i][1]
            if m and not (m & picked_union):
                picked_union |= m
                lb += 1
        return lb

    HARD_FLAGS = ("exact_conflict", "empty_domain")

    # ---------------- --use-rs：solve 管线下沉 Rust（K1） ----------------
    # 语义 1:1 复刻 _solve_py：cluster_domains(含 C1 尺寸下界/_pfm/接收者钳制/
    # EXACT 分支/空域回退) + greedy(counts 首现序平局) + improve(2换1) +
    # lower_bound + solve 统计。flags 内容仅对 conflicted 簇在 Python 侧重建
    #（成功路径 conflicted 恒空——非空即 FATAL 退出，不落盘）。
    # wave2 拆分：_rs_call（Rust 调用，need_dom_bits 控制候选位 blob）+
    # _rs_unpack（light=仅 conflicted/统计；full=完整 res；keep_blob=附带
    # (roots,counts,blob) 供 Rust 写盘器直用——names 不再逐簇物化为 Python 列表）。
    def _rs_call(enabled, need_dom_bits=False):
        _nb = (n + 7) // 8
        return _rs_cell[0].solve(
            list(enabled), _proven_cell[0].to_bytes(_nb, "little"),
            list(_unknown_roots), args.max_pair_improve, bool(_RS_VERIFY),
            bool(need_dom_bits))

    def _rs_unpack(_out, enabled, light=False, keep_blob=False):
        _masks_b = _out["masks"]
        _exci_a = _out["exci"]
        _flags_a = _out["flagbits"]
        _popc_a = _out["popcounts"]
        _contra_m = _out["contra"]
        _F_EC, _F_ED, _F_GAP, _F_WC, _F_XCF = 1, 2, 4, 8, 16

        def _flags_rebuild(ci_cl):
            """conflicted 簇的 flags/exci/exsrc 重建（镜像 cluster_domains）。
            仅 n_conflicts 个簇走此路径（成功解恒为 0——非空即 FATAL）。"""
            cl = clusters[ci_cl]
            fl = _flags_a[ci_cl]
            flags = {}
            if fl & _F_GAP:
                flags["c1_gap"] = True
            if fl & _F_ED:
                flags["empty_domain"] = True
            exs = {}
            for ci, ss in cl["exact"].items():
                kept = [s for s in ss
                        if not (s.startswith("C4") and "C4" not in enabled)
                        and not (s.startswith("C8") and "C8" not in enabled)]
                if kept:
                    exs[ci] = kept
            exci, exsrc = None, []
            if len(exs) == 1:
                exci = next(iter(exs))
                exsrc = [(names[exci], s) for s in exs[exci]]
                if fl & _F_WC:
                    flags["width_conflict"] = c1_width_conflict(exci, cl["obs"])
                if fl & _F_XCF:
                    _ctr = []
                    for _cf in (_contra_m.get(ci_cl) or []):
                        _ctr.append("C1(missing-offset)" if _cf == 65535
                                    else FAMILIES[_cf])
                    flags["exact_contradicts_family"] = _ctr
            elif len(exs) > 1:
                exsrc = [(names[ci], s) for ci, ss in exs.items() for s in ss]
                flags["exact_conflict"] = sorted(names[ci] for ci in exs)
            return exci, exsrc, flags

        if light:
            # 探针解：只重建 conflicted（消解轮判空用）+ 计数
            _conflicted = []
            for _ci_cl in _out["conflicted"]:
                _exci_r, _exsrc_r, _flags_r = _flags_rebuild(_ci_cl)
                _conflicted.append((clusters[_ci_cl],
                                    int.from_bytes(_masks_b[_ci_cl], "little"),
                                    _exci_r, _exsrc_r, _flags_r))
            _res = {
                "conflicted": _conflicted, "n_conflicts": _out["n_conflicts"],
                "k": _out["k"], "free": _out["free"],
                "__light__": True,
                "__conflicted_idx__": list(_out["conflicted"]),
                "__conflicted_flagbits__": list(_flags_a[_ci] for _ci in _out["conflicted"]),
            }
            return _res

        _constrained = []
        _dom_sizes = {}
        _dom_names = {}
        _dom_ents = {}
        _cluster_obs = {}
        _counts_b = _out["dom_bits_counts"]
        _blob_b = _out["dom_bits_blob"]
        _blob_off = 0
        for _slot, _ci_cl in enumerate(_out["constrained"]):
            _cl = clusters[_ci_cl]
            _m = int.from_bytes(_masks_b[_ci_cl], "little")
            _constrained.append((_cl, _m))
            _rk = _cl["root"]
            _pop = _popc_a[_ci_cl]
            _dom_sizes[_rk] = _pop
            _nb2 = 2 * _counts_b[_slot]          # blob 每槽都有（cap 1600）
            if 0 < _pop <= 1600 and not keep_blob:   # keep_blob: 写盘走 stash，names 免物化
                _dom_names[_rk] = [
                    names[int.from_bytes(_blob_b[_k:_k + 2], "little")]
                    for _k in range(_blob_off, _blob_off + _nb2, 2)]
            if 0 < _pop <= 64:
                _dom_ents[_rk] = list(_cl["ents"])[:6]
            _cluster_obs[_rk] = sorted(_cl["obs"])
            _blob_off += _nb2
        _conflicted = []
        for _ci_cl in _out["conflicted"]:
            _exci_r, _exsrc_r, _flags_r = _flags_rebuild(_ci_cl)
            _conflicted.append((clusters[_ci_cl],
                                int.from_bytes(_masks_b[_ci_cl], "little"),
                                _exci_r, _exsrc_r, _flags_r))
        _assign = {_cl: _c for (_cl, _c) in _out["assign_pairs"]}
        _res = {
            "conflicted": _conflicted, "constrained": _constrained,
            "free": _out["free"], "chosen": _out["chosen"], "k": _out["k"],
            "k_solvable": _out["k"], "k_upper": _out["k"] + len(_conflicted),
            "k_greedy": _out["k_greedy"], "lower_bound": _out["lower_bound"],
            "merges": _out["merges"], "assign": _assign,
            "c1_gaps": _out["c1_gaps"], "exact_conflicts": _out["exact_conflicts"],
            "n_conflicts": _out["n_conflicts"], "pinned_classes": _out["pinned_classes"],
            "forced_classes": _out["forced_classes"], "bad_cover": _out["bad_cover"],
            "flagged": [], "diag_flagged": _out["diag_flagged"],
            "dom_sizes": _dom_sizes, "dom_names": _dom_names, "dom_ents": _dom_ents,
            "cluster_obs": _cluster_obs,
            "assign_map": {str(_cl): _c for (_cl, _c) in _out["assign_pairs"]},
            "constrained_sample": ["dict" if _constrained else "none",
                                   (_constrained[0][0] if _constrained else None)],
        }
        if keep_blob:
            # Rust 写盘器直用：constrained 根序 + 每槽候选数 + 打包 LE u16 位表
            _res["__dom_bits_stash__"] = (
                [_cl["root"] for (_cl, _m) in _constrained],
                list(_counts_b), bytes(_blob_b))
        if _RS_VERIFY:
            _res["__raw_masks__"] = _masks_b
            _res["__exci__"] = _exci_a
            _res["__flagbits__"] = _flags_a
        return _res

    def _rs_solve(enabled):
        return _rs_unpack(_rs_call(enabled, need_dom_bits=True), enabled)

    def _rs_verify_compare(res_py, res_rs, enabled):
        """MC_RS_VERIFY：Python 参照 vs Rust 逐项对拍（fail-closed，差异即退出 2）。"""
        _errs = []
        _doms_py = cluster_domains([x for x in enabled if x != "C1"])
        _masks_b = res_rs.get("__raw_masks__") or {}
        _exci_a = res_rs.get("__exci__") or []
        _flags_a = res_rs.get("__flagbits__") or []
        _F_EC, _F_ED, _F_GAP, _F_WC, _F_XCF = 1, 2, 4, 8, 16
        _n_bad = 0
        for _i, (_cl, _m, _exci, _exsrc, _fl) in enumerate(_doms_py):
            _rm = int.from_bytes(_masks_b[_i], "little")
            if _rm != _m:
                _n_bad += 1
                if _n_bad <= 5:
                    _errs.append("cluster %d %s mask py=%d bits rs=%d bits"
                                 % (_i, _cl.get("root"), _m.bit_count(), _rm.bit_count()))
            _r_exci = _exci_a[_i]
            if (_r_exci if _r_exci >= 0 else None) != _exci:
                _n_bad += 1
                if _n_bad <= 5:
                    _errs.append("cluster %d %s exci py=%s rs=%s"
                                 % (_i, _cl.get("root"), _exci, _r_exci))
            _py_keys = set(_fl)
            _rs_keys = set()
            _fb = _flags_a[_i]
            if _fb & _F_EC: _rs_keys.add("exact_conflict")
            if _fb & _F_ED: _rs_keys.add("empty_domain")
            if _fb & _F_GAP: _rs_keys.add("c1_gap")
            if _fb & _F_WC: _rs_keys.add("width_conflict")
            if _fb & _F_XCF: _rs_keys.add("exact_contradicts_family")
            if _py_keys != _rs_keys:
                _n_bad += 1
                if _n_bad <= 5:
                    _errs.append("cluster %d %s flags py=%s rs=%s"
                                 % (_i, _cl.get("root"), sorted(_py_keys), sorted(_rs_keys)))
        for _k_cmp in ("k", "k_greedy", "lower_bound", "merges", "pinned_classes",
                       "forced_classes", "bad_cover", "c1_gaps", "n_conflicts",
                       "exact_conflicts", "free", "diag_flagged"):
            if res_py[_k_cmp] != res_rs[_k_cmp]:
                _errs.append("%s py=%s rs=%s" % (_k_cmp, res_py[_k_cmp], res_rs[_k_cmp]))
        if [c for c, _ in res_py["constrained"]] != [c for c, _ in res_rs["constrained"]]:
            _errs.append("constrained cluster order differs (py=%d rs=%d)"
                         % (len(res_py["constrained"]), len(res_rs["constrained"])))
        else:
            for (_clp, _mp), (_clr, _mr) in zip(res_py["constrained"], res_rs["constrained"]):
                if _mp != _mr:
                    _errs.append("constrained %s mask differs" % _clp.get("root"))
                    break
        if res_py["chosen"] != res_rs["chosen"]:
            _errs.append("chosen differs (py=%s rs=%s...)"
                         % (res_py["chosen"][:8], res_rs["chosen"][:8]))
        if res_py["assign"] != res_rs["assign"]:
            _errs.append("assign differs (%d entries)"
                         % sum(1 for k in res_py["assign"]
                               if res_py["assign"].get(k) != res_rs["assign"].get(k)))
        if _errs:
            print("[rs-verify] DIFF (%d cluster-level + %d structural):"
                  % (_n_bad, len(_errs)), flush=True)
            for _e_v in _errs[:24]:
                print("   %s" % _e_v, flush=True)
            sys.exit(2)
        print("[rs-verify] PASS: %d clusters mask/exci/flags 一致; "
              "constrained=%d chosen=%d assign=%d K=%d"
              % (len(_doms_py), len(res_rs["constrained"]), len(res_rs["chosen"]),
                 len(res_rs["assign"]), res_rs["k"]), flush=True)

    def solve(enabled):
        if _rs_cell[0] is not None:
            _res = _rs_solve(enabled)
            if _RS_VERIFY:
                _py = _solve_py(enabled)
                # verify 需要全簇原始数组——重取一次（all_masks=True 已在 _rs_solve）
                _rs_verify_compare(_py, _res, enabled)
            return _res
        return _solve_py(enabled)

    def _solve_py(enabled):
        doms = cluster_domains([x for x in enabled if x != "C1"])
        conflicted = [d for d in doms if any(k in d[4] for k in HARD_FLAGS)]
        clean = [d for d in doms if not any(k in d[4] for k in HARD_FLAGS)]
        diag_flagged = sum(1 for d in doms if d[4] and d not in conflicted)
        # 规格口径：冲突簇移出赋值（进 conflicts 报告），K 只在可满足簇上求解。
        constrained = [(cl, m) for (cl, m, exci, exsrc, fl) in clean if m != FULL]
        free = len(doms) - len(constrained) - len(conflicted)
        chosen, cover_of, unc, assign = greedy(constrained)
        k0 = len(chosen)
        chosen, merges = improve(constrained, chosen, cover_of, args.max_pair_improve)
        k = len(chosen)
        k_solvable = k
        # 每个冲突簇至少还需要一个类 → K_upper（保守上界，不是同一优化问题）
        k_upper = k + len(conflicted)
        # 硬下界：单点域去重 + 不相交域打包
        pinned_classes = {m.bit_length() - 1 for (cl, m) in constrained if m.bit_count() == 1}
        forced = set()
        for cl, m, exci, exsrc, flags in doms:
            if exci is not None:
                forced.add(exci)
            elif m and m.bit_count() == 1:
                forced.add(m.bit_length() - 1)
        lb = max(lower_bound(constrained), len(pinned_classes))
        bad_cover = sum(1 for (cl, m) in constrained
                        if not any((m >> c) & 1 for c in chosen))
        gaps = sum(1 for d in clean if "c1_gap" in d[4])
        bad_exact = sum(1 for d in conflicted
                        if "exact_conflict" in d[4] or "width_conflict" in d[4]
                        or "exact_contradicts_family" in d[4])
        flagged = [d for d in doms if d[4]]
        return {
            "conflicted": conflicted, "constrained": constrained,
            "free": free, "chosen": chosen, "k": k, "k_solvable": k_solvable,
            "k_upper": k_upper,
            "k_greedy": k0, "lower_bound": lb, "merges": merges, "assign": assign,
            "c1_gaps": gaps, "exact_conflicts": bad_exact,
            "n_conflicts": len(conflicted), "pinned_classes": len(pinned_classes),
            "forced_classes": len(forced), "bad_cover": bad_cover,
            "flagged": flagged, "diag_flagged": diag_flagged,
            "dom_sizes": {(cl.get("root") if isinstance(cl, dict) else str(cl)): m.bit_count()
                          for (cl, m) in constrained},
            "dom_names": {(cl.get("root") if isinstance(cl, dict) else str(cl)):
                          [names[i] for i in range(n) if (m >> i) & 1][:1600]
                          for (cl, m) in constrained if 0 < m.bit_count() <= 1600},
            "dom_ents": {(cl.get("root") if isinstance(cl, dict) else str(cl)):
                         list(cl.get("ents") or [])[:6]
                         for (cl, m) in constrained if 0 < m.bit_count() <= 64},
            "cluster_obs": {(cl.get("root") if isinstance(cl, dict) else str(cl)):
                            sorted(cl.get("obs") or [])
                            for (cl, m) in constrained},
            "assign_map": {((_cl.get("root") if isinstance(_cl, dict) else str(_cl))): _c
                           for _cl, _c in (assign or {}).items()},
            "constrained_sample": [type(constrained[0][0]).__name__ if constrained else "none",
                                   (constrained[0][0] if constrained else None)],
        }

    # ---------------- C9：vtable 槽位归属（函数 -> 拥有它的类）----------------
    # 二进制事实：若函数 F 出现在类 C 的某个 vtable 槽上，则 F 的 this 必为
    # C 或其后代。这是**正向**槽位证据（C3 只检查"接收者类拥有该槽"，未反查
    # "该函数属于哪个类的槽"）。实测在域 7-64 的宽簇里有 315/1350 命中。
    _AUTH_PATH = os.path.join(ROOT, "anchors", "vtable_slot_authority.json")
    _ALIGN_PATH = os.path.join(ROOT, "anchors", "class_name_align.json")
    c9_owner = {}
    if os.path.exists(_AUTH_PATH):
        _auth = jload(_AUTH_PATH)
        _align = (jload(_ALIGN_PATH, {}) or {}).get("rtti_to_canon") or {}
        for _cls, _v in _auth.items():
            _k = _cls[1:] if _cls.startswith(".") else _cls
            _canon = (_align.get(_k) or {}).get("canon") or _cls
            _ci = resolve(_canon)
            if _ci is None:
                continue
            for _idx, _s in (_v.get("slots") or {}).items():
                _a = (_s or {}).get("addr")
                if not _a:
                    continue
                try:
                    _fa = int(str(_a), 16)
                except ValueError:
                    continue
                c9_owner[_fa] = c9_owner.get(_fa, 0) | (1 << _ci)
        for _eid in list(ents.keys()):
            if not _eid.startswith("T:"):
                continue
            try:
                _fn = int(_eid[2:], 16)
            except ValueError:
                continue
            _m9 = c9_owner.get(_fn)
            if not _m9:
                continue
            _allowed9 = 0
            for _ci9 in range(n):
                if (_m9 >> _ci9) & 1:
                    _allowed9 |= allowed_of(_ci9)
            if _allowed9:
                fam["C9"][_eid] = fam["C9"].get(_eid, FULL) & _allowed9
                census["C9"] += 1
        # C9 是二进制事实（该函数确实被登记在那些类的 vtable 槽上）；
        # C2 的 pin 来自函数名/原型推断。二者不相交时以 C9 为准，丢弃 C2 pin。
        c2_refuted_by_slot = 0
        for _eid9, _m9v in list(fam["C9"].items()):
            _m2v = fam["C2"].get(_eid9)
            if _m2v is None:
                continue
            if (_m2v & _m9v) == 0:
                fam["C2"][_eid9] = FULL
                c2_pin_log.setdefault(_eid9, []).append(["refuted_by_slot_owner", "", ""])
                c2_refuted_by_slot += 1
        print("[C9] C2 pins refuted by slot ownership: %d" % c2_refuted_by_slot, flush=True)

        # C9 自身的边界：若某实体的 C9 掩码与 C1（成员访问）完全不相交，
        # 说明该函数的 vtable 槽归属来自错误分表（实测 20/15544）。此时
        # 保留成员证据、丢弃 C9（二进制分表比"访问偏移"更易出错）。
        c9_dropped = 0
        def _member_covers(ci, o, w):
            mem = U["members"][ci] or {}
            for off, mw in mem.items():
                if off <= o and (mw is None or o + w <= off + (mw or 4)):
                    return True
            return False
        for _eid9b in list(fam["C9"].keys()):
            _m9b = fam["C9"][_eid9b]
            _obs = (ents.get(_eid9b) or {}).get("obs") or set()
            if not _obs:
                continue
            # 只要该掩码里**存在**一个类能覆盖全部观测，就保留（掩码本身是并集语义）
            _ok9 = any(
                all(_member_covers(ci, o, (w or 4)) for (o, w) in _obs)
                for ci in range(n) if (_m9b >> ci) & 1
            )
            if not _ok9:
                del fam["C9"][_eid9b]
                c9_dropped += 1
        print("[C9] dropped (owner class lacks the observed members): %d" % c9_dropped, flush=True)

        # C9 若与其他所有族（C2..C8）的交集为空，说明它与既有证据直接冲突，
        # 此时丢弃 C9（保留其他族）。这是 C9 的最后一道自洽门。
        # 诊断仪表（被动，不改结果）：MINCLASS_DUMP_C9_CONFLICTS=<path> 时
        # 落盘每个交空实体的 C9/参与族掩码名表，供冲突归因（SA 诊断 2026-11-07）。
        #
        # ---- 归咎精细化（2026-11-07 safix 诊断 + 用户裁决，只改交空时的丢弃选择）----
        # 旧机制：交空 ⇒ 无条件丢 C9。safix 全量归因：SA 触发的 194 个交空全部是
        # 【结构性三方冲突】——C9∩SA 恒非空（SA 从不与槽主证据直接矛盾），交空由
        # SS（结构签名族，严格超集匹配）先把 C9∩C3 收窄到宽布局 unknown-ancestry
        # 类（CampaignClass/RulesClass/FoggedObjectClass 等「能匹配一切」的垃圾类），
        # SA 的 arity 二进制真值再正确排除这些类 ⇒ 全族 AND=0。归咎应指向真正的
        # 驳倒方（weakest-evidence 原则）：
        #   (1) 逐族两两检查：某单一族 F 使 C9∩F=∅ ⇒ C9 被直接驳倒 ⇒ 旧路径（丢 C9）；
        #   (2) C9 与所有参与族两两相容（交空由组合制造）⇒ 在「移除即恢复非空」的
        #       驳倒方候选中取最弱证据族担责（序 SS < SW < EP < SA；硬二进制族
        #       C1/C3/C4/C5/C6/C8/C15 永不担责）⇒ 丢弃该实体在该族的贡献，保留 C9。
        #       驳倒方不唯一（样本 T:7B8A00 的 R={SA,SS}，移除任一均非空）——按
        #       safix 二进制验证 SS 是垃圾保留源，固定最弱序优先，不做任意选择；
        #   (3) 无可担责目标（候选空 / 仅豁免族）⇒ 旧路径。
        _c9dbg_path = os.environ.get("MINCLASS_DUMP_C9_CONFLICTS")
        _c9dbg = [] if _c9dbg_path else None
        def _mask_names(_m):
            return [names[_i] for _i in range(n) if (_m >> _i) & 1]
        c9_dropped2 = 0
        _c9_blame_order = ("SS", "SW", "EP", "SA")
        _c9_blame_drops = collections.Counter()
        for _eid in list(fam["C9"].keys()):
            _mm = fam["C9"][_eid]
            _c9_own_names = None
            _parts9 = {}
            for _f9 in FAMILIES:
                if _f9 in ("C1", "C9"):
                    continue
                _o9 = fam[_f9].get(_eid)
                if _o9 is not None:
                    _mm &= _o9
                    _parts9[_f9] = _o9
            if _mm == 0:
                _c9m = fam["C9"][_eid]
                _blame9 = None
                if _parts9 and all((_c9m & _o9b) for _o9b in _parts9.values()):
                    for _fc9 in _c9_blame_order:
                        if _fc9 not in _parts9:
                            continue
                        _rest9 = _c9m
                        for _fo9, _oo9 in _parts9.items():
                            if _fo9 != _fc9:
                                _rest9 &= _oo9
                        if _rest9:
                            _blame9 = _fc9
                            break
                if _c9dbg is not None:
                    try:
                        _fn9 = int(_eid[2:], 16) if _eid.startswith("T:") else None
                    except ValueError:
                        _fn9 = None
                    _c9_own_names = (_mask_names(c9_owner.get(_fn9, 0))
                                     if _fn9 is not None else [])
                    _c9dbg.append({
                        "ent": _eid,
                        "c9_expanded": _mask_names(fam["C9"][_eid]),
                        "c9_owners": _c9_own_names,
                        "families": {str(_k): _mask_names(_v)
                                     for _k, _v in _parts9.items()},
                        "blame": _blame9,
                    })
                if _blame9 is not None:
                    del fam[_blame9][_eid]
                    _c9_blame_drops[_blame9] += 1
                else:
                    del fam["C9"][_eid]
                    c9_dropped2 += 1
        if _c9_blame_drops:
            print("[C9] blame-refined (empty-AND manufactured by soft-family "
                  "combination; weakest-evidence side dropped, C9 kept): %s"
                  % dict(_c9_blame_drops), flush=True)
        if _c9dbg is not None:
            try:
                _c9dir = os.path.dirname(_c9dbg_path)
                if _c9dir:
                    os.makedirs(_c9dir, exist_ok=True)
                with io.open(_c9dbg_path, "w", encoding="utf-8") as _fh9:
                    json.dump({"dropped": c9_dropped2,
                               "blame_drops": dict(_c9_blame_drops),
                               "conflicts": _c9dbg},
                              _fh9, ensure_ascii=False)
                print("[C9] conflict dump written: %s (%d recs)"
                      % (_c9dbg_path, len(_c9dbg)), flush=True)
            except Exception as _e_dbg:
                print("[C9] conflict dump FAILED: %r" % _e_dbg, flush=True)
        print("[C9] dropped (empty intersection with other families): %d" % c9_dropped2, flush=True)

    # ---------------- C11：成员链三向类型约束 ----------------
    # 对 this->member@NN 生成的子对象实体 M，三者互为约束：
    #   容器类 c_C  ·  该 offset 的成员类型 pair[(c_C, NN)]  ·  子对象类 c_M
    # C++ 语义：成员静态类型是上界，故 c_M ⊑ pair[(c_C, NN)]（祖先或同类）。
    _member_pairs = {}
    _n_layout_pairs11 = 0
    _n_mt_pairs11 = 0
    try:
        _layouts11 = jload("tools/class_layouts.json", {}) or {}
        _mt11 = jload("anchors/member_types.json", {}) or {}
        def _nm11(t):
            t = re.sub(r"\bconst\b", "", str(t or "")).replace("*", "").replace("&", "").strip()
            return t
        def _rs11(n):
            if n in _layouts11:
                return n
            b = n.split("<")[0].strip()
            return b if b in _layouts11 else None
        for _cn, _rec11 in _layouts11.items():
            for _off11, _m11 in ((_rec11.get("offsets") or {}) if isinstance(_rec11, dict) else {}).items():
                _tn = _rs11(_nm11((_m11 or {}).get("type")))
                _ci11 = resolve(_cn); _ti11 = resolve(_tn) if _tn else None
                if _ci11 is not None and _ti11 is not None:
                    _member_pairs.setdefault((_ci11, int(_off11)), set()).add(_ti11)
                    _n_layout_pairs11 += 1
        _n_after_layouts11 = len(_member_pairs)
        # 键解析容错：+0x / +0X 前缀、大小写十六进制、模板名（.* 贪婪已覆盖 @/$）
        _rx11 = re.compile(r"^(.*)\+0[xX]([0-9A-Fa-f]+)$")
        for _k11, _v11 in _mt11.items():
            _mm11 = _rx11.match(_k11)
            if not _mm11:
                continue
            _ci11 = resolve(_mm11.group(1))
            _tn = _rs11(_nm11((_v11 or {}).get("type")))
            _ti11 = resolve(_tn) if _tn else None
            if _ci11 is not None and _ti11 is not None:
                _member_pairs.setdefault((_ci11, int(_mm11.group(2), 16)), set()).add(_ti11)
        _n_mt_pairs11 = len(_member_pairs) - _n_after_layouts11
    except Exception:
        _member_pairs = {}

    # ---- B0：次级装表派生成员类型（install_derived_edges.json）----
    # 构造函数在 this+N 装 X 的 vtable = 该偏移处新构造了一个 X 子对象，
    # 其运行时类就是 X（精确，不是静态上界）。继承边（3 条，已与 RTTI 互证）
    # 不进成员表；成员边进 _member_pairs 值域。
    _n_b0 = 0
    try:
        _ied = (jload("anchors/install_derived_edges.json", {}) or {}).get("edges") or []
        for _e0 in _ied:
            if (_e0 or {}).get("kind") != "member":
                continue
            _ci0 = resolve(_e0.get("cls"))
            _xi0 = resolve(_e0.get("sub"))
            if _ci0 is None or _xi0 is None or _ci0 == _xi0:
                continue
            _off0 = _e0.get("off")
            if not isinstance(_off0, int):
                continue
            _s0 = _member_pairs.setdefault((_ci0, _off0), set())
            if _xi0 not in _s0:
                _s0.add(_xi0)
                _n_b0 += 1
    except Exception as _e0:
        print("[C11] install-derived member types skipped: %s" % _e0, flush=True)
    print("[C11] install-derived member types added: %d" % _n_b0, flush=True)

    # ---- B：二进制派生成员类型 ----
    # 人肉鉴定依据「+0xNN 处存的是 X 类」。声明侧（layouts/member_types）之外，
    # 从事实侧补全：容器函数有 C15/C4 EXACT 类（exact["T:fn"] 唯一且同源），
    # 且该 M 子对象实体的族掩码交集为单类（= class(M) 被既有证据精确钉死）
    # → (容器类, offset) -> 子对象类 是二进制事实。
    # 仅 this 链（M:<fn>:this:<off>）——参数链偏移相对形参对象，不并入容器成员表。
    # 注：M 子对象实体从不携带也从不并入 exact[] 身份（实测 3,669 个 M 实体
    # 0 个与 exact 载体同簇），故「class(M) 本身精确」的可用口径 = 族掩码单点域。
    # ---- B：二进制派生成员类型 ----
    # 人肉鉴定依据「+0xNN 处存的是 X 类」。声明侧（layouts/member_types）之外，
    # 从事实侧补全：容器函数有 C15/C4 EXACT 类（exact["T:fn"] 唯一且同源），且
    # class(M) 被既有证据唯一钉死。class(M) 的可用机械口径（按序尝试）：
    #   (d) M 实体所属簇的全族掩码交集为单类；
    #   (c) 子对象观测的 C1 布局覆盖唯一。
    # 仅 this 链——参数链偏移相对形参对象，不并入容器成员表。
    # ⚠ 实测（2026-10-30）：M 实体进 C11 时**零类证据**——exact[] 只挂 T:/G:、
    # 各族掩码不写 M:、C1 覆盖从不成单点（3,457 个 M:this 中 0 命中）。M 的类
    # 只能由 C11 传播（消费 member_pairs）导出，故本通道目前结构性为空
    # （binary_derived=0）；保留实现：未来任何族开始给 M: 实体供证据时自动生效。
    _n_binary_pairs11 = 0
    _fn_exact11 = {}
    for _a11, _lst11 in exact.items():
        if not _a11.startswith("T:"):
            continue
        _cls11 = set()
        for _ci11, _s11 in _lst11:
            if _s11.startswith(("C4", "C15")):
                _cls11.add(_ci11)
        if len(_cls11) == 1:
            _fn_exact11[_a11] = next(iter(_cls11))
    _clu_of_ent11 = {}
    for _cl11x in clusters:
        for _e11x in _cl11x.get("ents") or ():
            _clu_of_ent11[_e11x] = _cl11x
    for _eid11b in ents:
        if not _eid11b.startswith("M:"):
            continue
        _p11b = _eid11b.split(":")
        if len(_p11b) != 4 or _p11b[2] != "this":
            continue
        _cc11b = _fn_exact11.get("T:%s" % _p11b[1])
        if _cc11b is None:
            continue
        _clu11 = _clu_of_ent11.get(_eid11b)
        _obs11 = sorted(_clu11.get("obs") or set()) if _clu11 else []
        _mm11s = FULL
        _hit11 = False
        for _e11y in (_clu11.get("ents") or ()) if _clu11 else ():
            for _f11x in FAMILIES:
                if _f11x in ("C1", "C11"):
                    continue
                _x11 = fam[_f11x].get(_e11y)
                if _x11 is not None:
                    _mm11s &= _x11
                    _hit11 = True
        _c1m11 = c1_mask(_obs11) if _obs11 else FULL
        _cls_cd = _mm11s.bit_length() - 1 if (_hit11 and 0 != _mm11s != FULL
                                              and _mm11s.bit_count() == 1) else None
        _cls_c1 = _c1m11.bit_length() - 1 if (_obs11 and 0 != _c1m11 != FULL
                                              and _c1m11.bit_count() == 1) else None
        try:
            _off11b = int(_p11b[3], 16)
        except ValueError:
            try:
                _off11b = int(_p11b[3])
            except ValueError:
                continue
        for _src_cls in (_cls_cd, _cls_c1):
            if _src_cls is None:
                continue
            _dom_s = _member_pairs.setdefault((_cc11b, _off11b), set())
            if _src_cls not in _dom_s:
                _dom_s.add(_src_cls)
                _n_binary_pairs11 += 1
    print("[C11] member-type sources: layouts=%d member_types=%d binary_derived=%d total=%d"
          % (_n_layout_pairs11, _n_mt_pairs11, _n_binary_pairs11, len(_member_pairs)),
          flush=True)
    print("[C11] class-typed member evidence: %d (class,offset) pairs, %d classes"
          % (len(_member_pairs), len({c for c, _ in _member_pairs})), flush=True)

    _desc_c11 = {}
    def _desc_mask11(ci):
        m = _desc_c11.get(ci)
        if m is None:
            m = 1 << ci
            for d in U["desc"][ci]:
                m |= (1 << d)
            _desc_c11[ci] = m
        return m

    _m_links = []          # (M 实体, 容器实体, offset)
    for _eid11 in ents:
        if not _eid11.startswith("M:"):
            continue
        _p11 = _eid11.split(":")
        if len(_p11) != 4:
            continue
        try:
            _off11 = int(_p11[3], 16)
        except ValueError:
            try:
                _off11 = int(_p11[3])
            except ValueError:
                continue
        _w11 = _p11[2]
        _cont = ("P:%s:param%s" % (_p11[1], _w11[1:])) if _w11.startswith("p") else ("T:%s" % _p11[1])
        if _cont in ents:
            _m_links.append((_eid11, _cont, _off11))
    print("[C11] member-chain links (M -> container): %d" % len(_m_links), flush=True)

    # ---- B1：调用点派生成员类型（被调方身份 = C4/C15 装表/槽位，独立二进制证据）----
    # M 实体（this->member(NN)）作为 this 传给被调方 F；F 的类被钉为 X
    # ⇒ 该偏移子对象 ⊑ X（X 的方法只能作用于 X 或其派生）。证据只依赖被调方
    # 自身的装表/槽位归属，与 M 自身的解无关——无循环。
    _n_b1 = 0
    if _m_links:
        _callees_by_from1 = collections.defaultdict(list)
        for _e1 in raw:
            if _e1.get("type") != "CALL_ARG":
                continue
            _f1, _t1 = _e1.get("from"), _e1.get("to")
            if not (isinstance(_f1, str) and isinstance(_t1, str)):
                continue
            if not _t1.endswith(":this") or _t1.startswith("vtable_slot_"):
                continue
            if ".member(" not in _f1:
                continue
            _ca1 = hx(_t1.split(":")[0])
            if _ca1 is not None:
                _callees_by_from1[_f1].append(_ca1)
        for _mk1, _ck1, _o1 in _m_links:
            _cc1 = _fn_exact_c.get(_ck1)
            if _cc1 is None:
                continue
            for _r1 in (ents.get(_mk1) or {}).get("raw") or ():
                for _ca1 in _callees_by_from1.get(_r1) or ():
                    _cx1 = _fn_exact_c.get("T:%X" % _ca1)
                    if _cx1 is None or _cx1 == _cc1:
                        continue
                    _s1 = _member_pairs.setdefault((_cc1, _o1), set())
                    if _cx1 not in _s1:
                        _s1.add(_cx1)
                        _n_b1 += 1
    print("[C11] call-derived member types added: %d" % _n_b1, flush=True)

    if _m_links:
        _dom11 = {}
        for _e11 in set([x[0] for x in _m_links] + [x[1] for x in _m_links]):
            _m11 = FULL
            for _f11 in FAMILIES:
                if _f11 == "C11":
                    continue
                _fm11 = fam[_f11].get(_e11)
                if _fm11 is not None:
                    _m11 &= _fm11
            _dom11[_e11] = _m11
        _c11_steps = 0
        if _rs_mod_cell[0] is not None:
            # --use-rs wave2：8 轮混沌收窄下沉 Rust（K3，逐链 mk→ck 同址更新序）
            _nb11 = (n + 7) // 8
            _mp_ci, _mp_off, _mp_types = [], [], []
            for (_ciA, _offA), _tsA in _member_pairs.items():
                _mp_ci.append(_ciA)
                _mp_off.append(_offA)
                _mp_types.append(sorted(_tsA))
            _r11 = _rs_mod_cell[0].c11_fixpoint2(
                n, [x[0] for x in _m_links], [x[1] for x in _m_links],
                [x[2] for x in _m_links],
                [(k, v.to_bytes(_nb11, "little")) for k, v in _dom11.items()],
                _mp_ci, _mp_off, _mp_types,
                [list(U["desc"][_i]) for _i in range(n)])
            _c11_steps = _r11["steps"]
            for _k11z, _mb11z in zip(list(_dom11.keys()), _r11["dom"]):
                _dom11[_k11z] = int.from_bytes(_mb11z, "little")
        else:
            for _round in range(8):
                _chg = 0
                for _mk, _ck, _off in _m_links:
                    _dm = _dom11.get(_mk, FULL)
                    _dc = _dom11.get(_ck, FULL)
                    # 子对象必须是容器该成员静态类型的后代（或同类）
                    _allowed_m = 0
                    _has_ev = False
                    _x = _dc
                    while _x:
                        _b = _x & -_x; _x ^= _b
                        _ci = _b.bit_length() - 1
                        _ts = _member_pairs.get((_ci, _off))
                        if not _ts:
                            continue
                        _has_ev = True
                        for _t in _ts:
                            _allowed_m |= _desc_mask11(_t)
                    if _has_ev:
                        _nm = _dm & _allowed_m
                        if _nm != _dm and _nm != 0:
                            _dom11[_mk] = _nm; _dm = _nm; _chg += 1
                    # 反向：容器必须有一个候选类，其该成员类型能与子对象候选相容
                    _allowed_c = 0
                    _x = _dc
                    while _x:
                        _b = _x & -_x; _x ^= _b
                        _ci = _b.bit_length() - 1
                        _ts = _member_pairs.get((_ci, _off))
                        if not _ts:
                            _allowed_c |= _b        # 无证据的类不排除（稀疏布局）
                        elif any((_desc_mask11(_t) & _dm) for _t in _ts):
                            _allowed_c |= _b
                    _nc = _dc & _allowed_c
                    if _nc != _dc and _nc != 0:
                        _dom11[_ck] = _nc; _chg += 1
                _c11_steps += _chg
                if not _chg:
                    break
        _c11_empty = 0
        for _e11, _mm in _dom11.items():
            if _mm == 0:
                _c11_empty += 1
                continue
            if _mm != FULL:
                fam["C11"][_e11] = fam["C11"].get(_e11, FULL) & _mm
        print("[C11] propagated (%d narrowing steps), entities constrained: %d, emptied: %d"
              % (_c11_steps, len(fam["C11"]), _c11_empty), flush=True)

    # ---------------- C10：调用图子类型约束（AC-3 传播到不动点）----------------
    # 用户裁定：函数名默认是错的，不能作为类身份锚。
    # 唯一可靠的调用语义是：若 caller 把自己的 this 传给 callee 作为 this，
    # 则 class(callee) 必须是 class(caller) 的**祖先或同类**（子类型关系）。
    # 以二进制锚（C4 装表 / C9 槽位 / C8 全局）为种子，在 7,113 条 this 传递边
    # 上做弧相容传播，直到不再收窄。这是一次性求解的一部分，不改变任何证据。
    _anc_mask_cache = {}
    _desc_mask_cache = {}
    def _anc_mask(ci):
        m = _anc_mask_cache.get(ci)
        if m is None:
            m = 1 << ci
            for a in U["anc"][ci]:
                m |= (1 << a)
            _anc_mask_cache[ci] = m
        return m
    def _desc_mask(ci):
        m = _desc_mask_cache.get(ci)
        if m is None:
            m = 1 << ci
            for d in U["desc"][ci]:
                m |= (1 << d)
            _desc_mask_cache[ci] = m
        return m

    # 域→祖先/后代并集缓存（纯性能：边数扩大后逐位循环是热点；语义与内联展开一致）
    _anc_union_cache = {}
    _desc_union_cache = {}
    def _anc_union(m):
        r = _anc_union_cache.get(m)
        if r is None:
            r = 0
            _x = m
            while _x:
                _b = _x & -_x; _x ^= _b
                r |= _anc_mask(_b.bit_length() - 1)
            _anc_union_cache[m] = r
        return r
    def _desc_union(m):
        r = _desc_union_cache.get(m)
        if r is None:
            r = 0
            _x = m
            while _x:
                _b = _x & -_x; _x ^= _b
                r |= _desc_mask(_b.bit_length() - 1)
            _desc_union_cache[m] = r
        return r

    # 洁净寄存器到达定义（facts.reg_links = [addr, reg, src, clean]）
    _clean_reg = {}
    _site_src = {}   # (调用点, 寄存器) -> 该点寄存器的到达定义来源实体
    if facts:
        for _lk in (facts.get("reg_links") or ()):
            try:
                _clean_reg[(int(_lk[0]), _lk[1])] = bool(_lk[3])
                if len(_lk) >= 3 and _lk[2]:
                    _site_src[(int(_lk[0]), _lk[1])] = _lk[2]
            except (IndexError, TypeError, ValueError):
                pass
    # 边源扩展（X520 CHANGE B）：此前只收能落到 ents 实体上的源（G:/M:），
    # 污染寄存器边被显式丢弃、洁净寄存器边/栈槽则在实体成员检查处静默死亡
    # （R:/S: 实体从不入 ents）。现把寄存器/栈槽/全局源全部纳入为**连接点**：
    # 所有边仍只是**子类型约束** class(callee) ⊒ class(caller)，绝不并实体/等式。
    # 分类口径：
    #   clean_reg : 洁净寄存器到达定义（:this 直传同桶；V: 槽体维持基线剔除）
    #   dirty_reg : 寄存器到达定义跨 call / 经控制流汇合 —— 纳入，仍只作子类型约束
    #   global    : offset / dword_ / off_ / g_ / stru_ 前缀 → G: 实体
    #   stack     : stack_+0xNN → S: 实体（按指令地址作用域化）
    #   .member(  : 成员链实体归 C11，此处跳过不重复约束
    _GLOBAL_PREF = ("offset ", "dword_", "off_", "g_", "stru_")
    _c10_n_clean = _c10_n_dirty = _c10_n_global = _c10_n_stack = 0
    _c16_param_edges = 0      # C16：目标为被调方参数的 this 传递边（只进 Phase 2）
    _c10_nodes = set()                # G:/S: 连接点实体（可不在 ents；不并簇）
    _c10_drop_callee = 0
    _regext_by = {}
    _m_extra = []
    try:
        for _r in (jload("anchors/callarg_origins.json", {}) or {}).get("edges") or []:
            _a_r = hx(_r.get("addr"))
            if _a_r is not None:
                _regext_by[(_a_r, _r.get("reg"))] = _r
    except Exception:
        pass
    _t_extra = []
    try:
        for _r in (jload("anchors/member_callargs_ext.json", {}) or {}).get("edges") or []:
            _a_r = hx(_r.get("addr"))
            if _a_r is not None:
                _regext_by[(_a_r, _r.get("reg"))] = _r
    except Exception:
        _regext_by = {}
    _call_edges = []
    _call_edges_p1 = []               # Phase 1：洁净寄存器边
    _call_edges_p2 = []               # Phase 2：dirty/global/stack 边（只增不减）
    for _e in raw:
        if _e.get("type") != "CALL_ARG":
            continue
        _fr, _to = _e.get("from"), _e.get("to")
        if not (isinstance(_fr, str) and isinstance(_to, str)):
            continue
        _is_param_target = "::param" in _to
        if not (_to.endswith(":this") or _is_param_target):
            continue
        # 裸寄存器边的跨块数据流解析（anchors/member_callargs_ext.json）。
        # 非破坏性：原边原样保留（R: 连接点的跨站点传播不动），member 解析结果
        # 作为**额外** Phase-2 边叠加 —— only-increase 语义下约束严格变强。
        # （实测教训：破坏性改写会拆掉 R: 连接点，2026-11-02 两个变体各损失 39-51 唯一解。）
        try:
            _ea_rx = int(str(_e.get("addr")), 16)
        except (TypeError, ValueError):
            _ea_rx = None
        if _fr.startswith("stack_+") and _ea_rx is not None and _ea_rx in _ssa_use:
            _fr = "%s@C0x%X" % (_fr, _ssa_use[_ea_rx][1])
        _rx = _regext_by.get((_ea_rx, _fr)) if _ea_rx is not None else None
        if _rx is not None and _rx.get("kind") == "member":
            _fn_rx = fn_at(_ea_rx)
            _m_extra.append(("0x%08X:this.member(0x%X)" % (_fn_rx, int(_rx.get("off") or 0)),
                             _to, _ea_rx))
        elif _rx is not None and _rx.get("kind") == "ret":
            _cl_rx = hx(_rx.get("callee"))
            if _cl_rx is not None:
                _fr = "0x%08X.return" % _cl_rx
        elif _rx is not None and _rx.get("kind") == "stack":
            _fr = "stack_+0x%X" % int(_rx.get("off") or 0)
        elif _rx is not None and _rx.get("kind") == "def":
            # ffl5 def 直通：origin 就是完整实体 id（S:fn:var_NAME / P:fn:k 等），
            # 无法用 stack_+X 形式表达——直接建边后跳过常规分类。
            _de = _rx.get("ent")
            _ce0 = ent_id(_to)
            if isinstance(_de, str) and _ce0 and _ce0 in ents:
                if _de not in ents:
                    touch(_de, _de)
                _call_edges.append((_de, _ce0))
                _call_edges_p2.append((_de, _ce0))
                continue
        elif _rx is not None and _rx.get("kind") == "this":
            # 数据流证明的 this 直传（额外 T:caller->callee 边，非破坏性）。
            # 曾因旧相位的边序依赖净 -11 而关闭；真不动点重设计后实测 +1/+2，
            # 单调性恢复，默认启用。
            _t_extra.append((fn_at(_ea_rx), _to))
        _ce = ent_id(_to)
        if not (_ce and _ce in ents):
            _c10_drop_callee += 1
            continue
        if _is_param_target:
            _c16_param_edges += 1
        # ---- Phase 1 判定 = 改前（HEAD）C10 的精确边语义 ----
        #   :this 直传 → ent_id(_fr)；其余源按指令地址作用域化 ent_id(_fr, fn)，
        #   dirty（clean flag False）丢弃；**双端都必须在 ents** 才保留。
        #   （R:/S: 实体从不入 ents → 基线实际只收 T:/M:/G: 落 ents 的边。）
        _cc_leg = None
        if _is_param_target:
            pass                  # C16：参数目标不进 Phase 1（p1 必须与 HEAD 逐边一致）
        elif _fr.endswith(":this"):
            _cc_leg = ent_id(_fr)
        else:
            try:
                _ea_leg = int(str(_e.get("addr")), 16)
            except (TypeError, ValueError):
                _ea_leg = None
            if _ea_leg is not None and _clean_reg.get((_ea_leg, _fr)) is not False:
                _cc_leg = ent_id(_fr, fn_at(_ea_leg))
        if _cc_leg and _cc_leg in ents and _cc_leg != _ce:
            # 基线边：改前 C10 本就保留（T:/M:/G:/P: 等落 ents 且非 dirty）→ Phase 1，
            # 语义照旧。此处先于新分类返回，保证 p1 集合与 HEAD 逐边一致。
            _call_edges.append((_cc_leg, _ce))
            _call_edges_p1.append((_cc_leg, _ce))
            continue
        # ---- 新分类（X520 CHANGE B）：寄存器/栈槽/全局源全部纳入为连接点 ----
        if _fr.endswith(".return"):
            _rr5 = ent_id(_fr)
            if _rr5 and _rr5 != _ce:
                _call_edges.append((_rr5, _ce))
                _call_edges_p2.append((_rr5, _ce))
            continue
        if ".member(" in _fr:
            # 成员链节点：C11 约束的是 M 实体↔容器，而 M→被调方的子类型关系
            # （class(callee) ⊑ 成员类型）此前被整类跳过 —— 2026-11-02 反例研究：
            # {TClassFactory<X>,X} 族 435 簇正是靠这条被丢掉的约束才能切开。
            try:
                _ea_m = int(str(_e.get("addr")), 16)
            except (TypeError, ValueError):
                _ea_m = None
            _cc_m = ent_id(_fr, fn_at(_ea_m) if _ea_m is not None else None)
            if _cc_m and _cc_m in ents and _cc_m != _ce:
                _call_edges.append((_cc_m, _ce))
                _call_edges_p2.append((_cc_m, _ce))
            continue
        _cc, _kind = None, None
        if _fr.endswith(":this"):
            _cc, _kind = ent_id(_fr), "clean"
        elif _fr in REGS:
            # 调用方的 this 以**寄存器**形式出现（ecx/esi/...）。
            # 优先用该调用点上寄存器的**到达定义来源**（facts.reg_links）：
            # 同一点上它装的就是那个对象，比整函数聚合的 R:<fn>:<reg> 精确得多。
            try:
                _ea = int(str(_e.get("addr")), 16)
            except (TypeError, ValueError):
                continue
            _srcreg = _site_src.get((_ea, _fr))
            if _srcreg and _srcreg in ents:
                _cc = _srcreg
                _kind = "clean"
            else:
                _cc = ent_id(_fr, fn_at(_ea))
                _kind = "dirty" if _clean_reg.get((_ea, _fr)) is False else "clean"
        elif _fr.startswith(_GLOBAL_PREF):
            if _fr.startswith("offset "):
                _cc = ent_id(_fr)                   # ent_id 内部走 global_addr(s[7:])
            else:
                _ga = global_addr(_fr)
                _cc = ("G:%X" % _ga) if _ga is not None else None
            _kind = "global"
        elif _fr.startswith("stack_+"):
            try:
                _ea = int(str(_e.get("addr")), 16)
            except (TypeError, ValueError):
                continue
            _cc = ent_id(_fr, fn_at(_ea))           # S:%X:<slot>
            _kind = "stack"
        else:
            continue
        if not (_cc and _cc != _ce):
            continue
        if _cc not in ents:
            if _cc.startswith("V:"):
                continue      # vtable_slot 实体被 touch 有意排除；且 V:N 把所有类
                              # 的同号槽收进一个枢纽（slot 语义只在同一 vtable 内
                              # 成立），跨类连接会注入错误约束——维持基线剔除
            # R:/S:/G: 连接点：只参与子类型传播，不进 ents/fam/簇（不并实体）
            _c10_nodes.add(_cc)
        _call_edges.append((_cc, _ce))
        _call_edges_p2.append((_cc, _ce))         # 新增边（Phase 2，只增不减）
        if _kind == "clean":
            _c10_n_clean += 1
        elif _kind == "dirty":
            _c10_n_dirty += 1
        elif _kind == "global":
            _c10_n_global += 1
        else:
            _c10_n_stack += 1
    print("[C10] edges: clean_reg=%d dirty_reg=%d global=%d stack=%d total=%d "
          "(p1_baseline=%d p2_new=%d)"
          % (_c10_n_clean, _c10_n_dirty, _c10_n_global, _c10_n_stack,
             len(_call_edges), len(_call_edges_p1), len(_call_edges_p2)), flush=True)

    # 额外 member 边（数据流解析产物）：M 实体 -> 被调方，只进 Phase 2
    _n_mx = 0
    for _mf, _mt, _ma in _m_extra:
        try:
            _mce = ent_id(_mt)
        except Exception:
            continue
        if not (_mce and _mce in ents):
            continue
        _mme = ent_id(_mf, fn_at(_ma) if _ma is not None else None)
        if _mme and _mme in ents and _mme != _mce:
            _call_edges.append((_mme, _mce))
            _call_edges_p2.append((_mme, _mce))
            _n_mx += 1
    _n_tx = 0
    for _tf, _tt in _t_extra:
        _tce = ent_id(_tt)
        if not (_tce and _tce in ents):
            continue
        _tme = "T:%X" % _tf
        if _tme in ents and _tme != _tce:
            _call_edges.append((_tme, _tce))
            _call_edges_p2.append((_tme, _tce))
            _n_tx += 1
    print("[C10] dataflow this-edges added to phase2: %d" % _n_tx, flush=True)
    print("[C10] dataflow member edges added to phase2: %d" % _n_mx, flush=True)
    print("[C10] edges dropped (callee entity not in ents): %d" % _c10_drop_callee, flush=True)
    print("[C16] param edges=%d (this-target edges=%d)"
          % (_c16_param_edges, len(_call_edges) - _c16_param_edges), flush=True)

    # ---- 槽参数组边注入（用户机制：同槽 paramK = 继承族内同一逻辑变量）----
    #  (1) 占用者等值：GS:N:K <-> P:FN:K 双向（签名结构一致 ⇒ paramK 域一致）
    #  (2) 值边：origin 实体 -> GS（虚拟站点实参流入组参数）
    try:
        _spg = jload("anchors/slot_param_groups.json", {}) or {}
        _n_gs_eq = _n_gs_val = 0
        for _gk, _gv in (_spg.get("groups") or {}).items():
            _ge = "GS:" + _gk
            _k = int(_gk.split(":")[1])
            for _oa in _gv.get("occ") or []:
                _oa_i = hx(_oa)
                if _oa_i is None:
                    continue
                _pe = "P:%X:%d" % (_oa_i, _k)
                _call_edges.append((_pe, _ge))
                _call_edges_p2.append((_pe, _ge))
                _call_edges.append((_ge, _pe))
                _call_edges_p2.append((_ge, _pe))
                _n_gs_eq += 2
        for _r in (_spg.get("val_edges") or []):
            _a_r = hx(_r.get("addr"))
            _gs_to = _r.get("gs")
            if _a_r is None or _gs_to is None:
                continue
            _kind = _r.get("kind")
            _fn_r = fn_at(_a_r)
            if _kind == "this":
                if _fn_r is None:
                    continue
                _fr_e = "T:%X" % _fn_r
            elif _kind == "member":
                if _fn_r is None:
                    continue
                _fr_e = "0x%08X:this.member(0x%X)" % (_fn_r, int(_r.get("off") or 0))
                _me = ent_id(_fr_e)
                if _me and _me not in ents:
                    touch(_me, _fr_e)
            elif _kind == "global":
                _ga = hx(_r.get("sym") or "")
                if _ga is None:
                    continue
                _fr_e = "G:%X" % _ga
            elif _kind == "ret":
                _cl = hx(_r.get("callee") or "")
                if _cl is None:
                    continue
                _fr_e = "RET:%X" % _cl
                if _fr_e not in ents:
                    touch(_fr_e, "0x%08X.return" % _cl)
            elif _kind == "stack":
                if _fn_r is None:
                    continue
                _fr_e = "stack_+0x%X" % int(_r.get("off") or 0)
            else:
                continue
            _fe = ent_id(_fr_e, _fn_r) if not _fr_e.startswith(("T:", "G:", "RET:")) else _fr_e
            if _fe is None:
                continue
            _call_edges.append((_fe, _gs_to))
            _call_edges_p2.append((_fe, _gs_to))
            _n_gs_val += 1
        print("[GS] slot-group occupant equality edges=%d value edges=%d"
              % (_n_gs_eq, _n_gs_val), flush=True)
    except Exception as _e_gs:
        print("[GS] injection skipped: %r" % _e_gs, flush=True)

    # ---- 接收者锚定绑定边（用户机制：接收者变量已锚 ⇒ 槽号查表 ⇒ 被调方唯一）----
    try:
        _vb = jload("anchors/vt_receiver_bindings.json", {}) or {}
        import os as _os_vb
        _VB_THIS = (_os_vb.environ.get("VB_THIS", "0") == "1")
        _n_vb_this = _n_vb_arg = 0
        for _b in _vb.get("binds") or []:
            _cl = hx(_b.get("callee"))
            _re = _b.get("recv")
            if _cl is None or not isinstance(_re, str):
                continue
            _te = "T:%X" % _cl
            if _VB_THIS:
                _call_edges.append((_re, _te))
                _call_edges_p2.append((_re, _te))
                _n_vb_this += 1
            for _a in _b.get("args") or []:
                _ae = _a.get("ent")
                if not isinstance(_ae, str):
                    continue
                _pe = "P:%X:%d" % (_cl, int(_a.get("k") or 0))
                _call_edges.append((_ae, _pe))
                _call_edges_p2.append((_ae, _pe))
                _n_vb_arg += 1
        print("[VB] receiver-anchored binds: this-edges=%d arg-edges=%d"
              % (_n_vb_this, _n_vb_arg), flush=True)
    except Exception as _e_vb:
        print("[VB] injection skipped: %r" % _e_vb, flush=True)

    # ---- PU 参数消费边（体内：参数作 this 传递 / 存进成员，严格）----
    try:
        _pue = jload("anchors/param_usage_types_v2.json", {}) or {}
        _n_pue = 0
        for _a3, _b3 in (_pue.get("edges") or []):
            if not (isinstance(_a3, str) and isinstance(_b3, str)):
                continue
            if _a3 not in ents:
                touch(_a3, _a3)
            if _b3 not in ents:
                touch(_b3, _b3)
            _call_edges.append((_a3, _b3))
            _call_edges_p2.append((_a3, _b3))
            _n_pue += 1
        print("[PU] param-consumption edges: %d" % _n_pue, flush=True)
    except Exception as _e_pue:
        print("[PU] edges skipped: %r" % _e_pue, flush=True)
    # ---- PU3 edges 净增（pu3_usage.json edges，并入 PU 同有向边通道）----
    # ffl12 同引擎 delta 扫描的 net-new（baseline 2,231 → +7）：格式同 v2
    # [P:fn:k, T:callee | M:fn:this:off]，单向值域传播（PU1/PU3 语义，
    # strict），端点 touch 预创建 + _call_edges/_call_edges_p2 单向追加，
    # 与 v2 通道幂等叠加。
    try:
        _pu3e = jload("anchors/pu3_usage.json", {}) or {}
        _n_pu3e = 0
        for _a4, _b4 in (_pu3e.get("edges") or []):
            if not (isinstance(_a4, str) and isinstance(_b4, str)):
                continue
            if _a4 not in ents:
                touch(_a4, _a4)
            if _b4 not in ents:
                touch(_b4, _b4)
            _call_edges.append((_a4, _b4))
            _call_edges_p2.append((_a4, _b4))
            _n_pu3e += 1
        print("[PU3] param-consumption edges: %d" % _n_pu3e, flush=True)
    except Exception as _e_pu3e:
        print("[PU3] edges skipped: %r" % _e_pu3e, flush=True)

    # ---- 赋值物化等值（ffl4：每个槽存/成员存都是物理等值边）----
    try:
        _fs = jload("anchors/flow_stores.json", {}) or {}
        _n_fs = 0
        for _a1, _b1 in (_fs.get("eq") or []):
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_fs += 2
        print("[FS] flow-store eq edges=%d" % _n_fs, flush=True)
    except Exception as _e_fs:
        print("[FS] injection skipped: %r" % _e_fs, flush=True)
    # ---- 成员写等值（全 CFG 数据流：mov [this+off], val → 值实体 ≡ M:fn:this:off）----
    try:
        _mw = jload("anchors/member_writes.json", {}) or {}
        _n_mw = 0
        for _a1, _b1 in (_mw.get("eq") or []):
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_mw += 2
        print("[MW] member-write eq edges=%d" % _n_mw, flush=True)
    except Exception as _e_mw:
        print("[MW] injection skipped: %r" % _e_mw, flush=True)
    # ---- ret 身份等值（构造函数返回类实例 / 转发器 / getter）----
    try:
        _ri = jload("anchors/ret_identity.json", {}) or {}
        _n_ri = 0
        for _a1, _b1 in (_ri.get("eq") or []):
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_ri += 2
        print("[RI] ret-identity eq edges=%d" % _n_ri, flush=True)
    except Exception as _e_ri:
        print("[RI] injection skipped: %r" % _e_ri, flush=True)
    # ---- 普适值流链（参数/返回三元组的可映射子集）----
    try:
        import os as _os_fc
        _FC_ON = (_os_fc.environ.get("FLOW_CHAINS", "1") == "1")
        if _FC_ON:
            _fch = jload("anchors/flow_chains.json", {}) or {}
            _n_flow = _n_eq = 0
            for _a1, _b1 in (_fch.get("flow") or []):
                if not (isinstance(_a1, str) and isinstance(_b1, str)):
                    continue
                if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                    continue
                _call_edges.append((_a1, _b1))
                _call_edges_p2.append((_a1, _b1))
                _n_flow += 1
            for _a1, _b1 in (_fch.get("eq") or []):
                if not (isinstance(_a1, str) and isinstance(_b1, str)):
                    continue
                if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                    continue
                _call_edges.append((_a1, _b1))
                _call_edges_p2.append((_a1, _b1))
                _call_edges.append((_b1, _a1))
                _call_edges_p2.append((_b1, _a1))
                _n_eq += 1
            print("[FC] flow edges=%d eq edges=%d" % (_n_flow, _n_eq), flush=True)
    except Exception as _e_fc:
        print("[FC] injection skipped: %r" % _e_fc, flush=True)
    # ---- EAX 流等值（eax_flow_equations：EAX:FN:SITE == T:/P:/RET:，严格后调用窗口）----
    # 语义与 FC eq 相同（值传递 => 同一对象/值），走同一双向通道；
    # 不经 un()（union-find EXACT 硬合并），冲突以空域形式交由中和器裁决。
    try:
        _efe = jload("anchors/eax_flow_equations.json", {}) or {}
        _n_efe = 0
        for _r1 in (_efe.get("edges") or []):
            _a1 = (_r1 or {}).get("eax")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_efe += 2
        print("[EF] eax-flow eq edges=%d" % _n_efe, flush=True)
    except Exception as _e_efe:
        print("[EF] injection skipped: %r" % _e_efe, flush=True)
    # ---- SW 槽生命周期窗口等值（slot_window_edges：S:slot == EAX:/T:/P:/RET:，EF 同款通道）----
    # 语义与 EF eq 相同（栈槽与流入值是同一对象/值），走同一双向通道；
    # 不经 un()（union-find EXACT 硬合并），冲突以空域形式交由中和器裁决。
    # 生成器侧已对账：dup_vs_eax_flow_equations=0（与 EF 无重复边）、
    # eax_not_in_universe=0（EAX: 对侧实体全部在解空间）。S: 侧含 plain
    # （var_NN，SG 族先例）/ 窗口后缀（@W0xADDR）/ 点选后缀（.width/.vfptr）
    # 三种拼写，均作传播连接点。
    try:
        _swe = jload("anchors/slot_window_edges.json", {}) or {}
        _n_swe = 0
        for _r1 in (_swe.get("edges") or []):
            _a1 = (_r1 or {}).get("s")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_swe += 2
        print("[SW] slot-window eq edges=%d" % _n_swe, flush=True)
    except Exception as _e_swe:
        print("[SW] eq edges skipped: %r" % _e_swe, flush=True)
    # ---- PF 参数转发等值（param_forward_edges：P:FN2:K == P:FN1:J / T:FN2 == P:FN1:J）----
    # 语义与 EF/SW eq 相同（直接调用点实参纯转发 => 同一值），走同一双向通道；
    # 不经 un()（硬合并），冲突以空域形式交由中和器裁决。生成器侧已证明：
    # 转发链只穿越良性 staging（push/mov r,[slot]/mov r,r2 ≤2 层）、任何运算
    # 断链、lea 取址不等值、ebp-repoint 守卫；367 条 T 边与 PU1 重复（标 dup，
    # _call_edges 通道幂等无妨）。via=pforward-fc（fastcall ECX/EDX 扩展 56 条）
    # 保留接线——寄存器实参同为纯转发值。
    try:
        _pfe = jload("anchors/param_forward_edges.json", {}) or {}
        _n_pfe = 0
        for _r1 in (_pfe.get("edges") or []):
            _a1 = (_r1 or {}).get("p")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_pfe += 2
        print("[PF] param-forward eq edges=%d" % _n_pfe, flush=True)
    except Exception as _e_pfe:
        print("[PF] eq edges skipped: %r" % _e_pfe, flush=True)
    # ---- PF2 参数转发等值 v2（param_forward_edges_v2：P:FN2:K == P:FN1:J 二跳/
    # fastcall + T:FN2 == M:FN1:this:0xOFF this12 扩展窗，PF 同款 EF 风格通道）----
    # 净新增 552 对级边（生成器已对 PF v1 + DT 去重：dup_vs_pf 1,786 /
    # dup_vs_dt 409 不在本文件）。语义与 PF v1 相同——纯转发值 => 同一值，
    # 双向 _call_edges（不经 un() 硬合并，R:/V: 过滤，冲突以空域交中和器）：
    #   pfv2-2hop  push reg whose origin = [param-slot] 经 ≤1 中间 copy（158）
    #   pfv2-fc    fastcall ecx/edx arg0/1 独立回扫定源（137）
    #   pfv2-this12 直调 receiver ecx 的 [base+off]/lea 成员源，≤12 指令窗
    #              + ≤1 中间 copy（tier=interm 245 / w12 10 / w8 2）=> T: == M:
    # 与 DT 的 dt-member 同形（T:FN2 == M:FN1:this:0xOFF），通道幂等无妨。
    try:
        _pfe2 = jload("anchors/param_forward_edges_v2.json", {}) or {}
        _n_pfe2 = 0
        _pf2_via = collections.Counter()
        for _r2 in (_pfe2.get("edges") or []):
            _a2 = (_r2 or {}).get("p")
            _b2 = (_r2 or {}).get("eq")
            if not (isinstance(_a2, str) and isinstance(_b2, str)):
                continue
            if _a2.startswith(("R:", "V:")) or _b2.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a2, _b2))
            _call_edges_p2.append((_a2, _b2))
            _call_edges.append((_b2, _a2))
            _call_edges_p2.append((_b2, _a2))
            _n_pfe2 += 2
            _pf2_via[(_r2 or {}).get("via") or "?"] += 1
        print("[PF2] param-forward-v2 eq edges=%d (via=%s)"
              % (_n_pfe2, dict(_pf2_via)), flush=True)
    except Exception as _e_pfe2:
        print("[PF2] eq edges skipped: %r" % _e_pfe2, flush=True)
    # ---- DT 直调 thiscall 接收者等值（dt_thiscall_edges：T:FN2 == M:/G:/EAX:，EF 同款通道）----
    # 语义：直接调用点被调方 this（ecx）的寄存器到达定义 = 来源实体，两者是
    # 同一值 ⇒ 双向等值边（EF/SW/PF 同款：不经 un() 硬合并，R:/V: 过滤，冲突
    # 以空域形式交中和器裁决）。三 via（7,048 边 ×2 = 14,096 有向）：
    #   dt-eax     mov ecx,eax（nearest eax def = call）  => T:FN2 == EAX:FN1:SITE
    #   dt-member  mov ecx,[base+off]（base->FN1 this）   => T:FN2 == M:FN1:this:0xOFF
    #              （lea 形 = 内嵌成员对象，vrorg interior 约定）
    #   dt-global  mov ecx,offset G / ds:G / 命名全局     => T:FN2 == G:ADDR
    # 生成器侧 guards：label/jmp/ret/call 屏障 + <=8 指令回扫 + <=3 copy hops +
    # entry-ecx 透传；[ebp+X]/[ebp+arg_N] 栈源跳过（PF 先行覆盖）；dup_vs_pf=0。
    # EAX 对侧实体已预创建（[C10-pre] dt 行）。
    try:
        _dte = jload("anchors/dt_thiscall_edges.json", {}) or {}
        _n_dte = 0
        _dt_via = collections.Counter()
        for _r1 in (_dte.get("edges") or []):
            _a1 = (_r1 or {}).get("t")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_dte += 2
            _dt_via[(_r1 or {}).get("via") or "?"] += 1
        print("[DT] direct-thiscall eq edges=%d (via=%s)"
              % (_n_dte, dict(_dt_via)), flush=True)
    except Exception as _e_dte:
        print("[DT] eq edges skipped: %r" % _e_dte, flush=True)
    # ---- PU5 全局存储等值（pu5_forms：P:FN:K == G:ADDR，EF 同款通道）----
    # 语义：mov <global>, <reg32 whose def=param k>——参数值直存全局本体
    # （g_X.field_NN 成员存储 / g_X[idx] 索引存储不等值全局本体，生成端已
    # 排除）。14 目标 G 均不在 ents（pu5 报告实测）——按报告建议预创建双端
    # 原子（PU as-this 通道 touch 先例），P 侧被其它通道钉死后可经边钉死 G。
    try:
        _pu5e = jload("anchors/pu5_forms.json", {}) or {}
        _n_pu5e = 0
        _pu5_touch = 0
        for _r1 in (_pu5e.get("edges") or []):
            _a1 = (_r1 or {}).get("a")
            _b1 = (_r1 or {}).get("b")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            for _ep5 in (_a1, _b1):
                if _ep5 not in ents:
                    touch(_ep5, _ep5)
                    _pu5_touch += 1
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_pu5e += 2
        print("[PU5] global-store eq edges=%d (endpoints touched=%d)"
              % (_n_pu5e, _pu5_touch), flush=True)
    except Exception as _e_pu5e:
        print("[PU5] eq edges skipped: %r" % _e_pu5e, flush=True)
    # ---- GS 站点实参等值（gs_site_args：GS:slot:k:root == 绑定来源实体，直达式）----
    try:
        _gsa = jload("anchors/gs_site_args.json", {}) or {}
        _n_gxe = 0
        for _a1, _b1 in (_gsa.get("edges") or []):
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_gxe += 2
        print("[GX] gs-site-arg eq edges=%d" % _n_gxe, flush=True)
    except Exception as _e_gxe:
        print("[GX] edges skipped: %r" % _e_gxe, flush=True)
    # ---- ES 返回值存储等值（eax_store_edges：EAX:FN:site == M:/G:，EF 同款通道）----
    # 语义：RETX-E 返回值存储——严格后调用 EAX 窗口（RETX-A 语义：前推到 EAX 被
    # 改写/块边界/pushad/另一 call/12 指令；mov 拷贝扩展最多 eax+1 个寄存器）内
    # 的 dword 存储等值：eax-mstore `mov [reg+off],<tracked>`（off!=0、reg 解析
    # 为 this —— entry-ecx thiscall/fastcall 或 [ebp+8] 非thiscall-this）=>
    # EAX:FN:callsite == M:FN:this:0xOFF；eax-gstore `mov [global],<tracked>`
    # （signals.json globals 解析）=> EAX == G:ADDR。窄存储（al/ax）生成器侧已
    # 排除。存储位置与返回值是同一值 ⇒ 双向等值边（EF/SW/PF 同款：不经 un()
    # 硬合并，R:/V: 过滤，冲突以空域形式交中和器裁决）。
    try:
        _ese = jload("anchors/eax_store_edges.json", {}) or {}
        _n_ese = 0
        _es_via = collections.Counter()
        for _r1 in (_ese.get("edges") or []):
            _a1 = (_r1 or {}).get("eax")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_ese += 2
            _es_via[(_r1 or {}).get("via") or "?"] += 1
        print("[ES] eax-store eq edges=%d (via=%s)" % (_n_ese, dict(_es_via)), flush=True)
    except Exception as _e_ese:
        print("[ES] eq edges skipped: %r" % _e_ese, flush=True)
    # ---- GS 站点实参 v2 等值（gs_site_args_v2：GS:slot:k:root == origin 实体，GX 直达式）----
    # 语义与 GX eq 相同（v2 全库站点 census 的 bind-origin 等值：gs-pdirect /
    # gs-glob），走同一双向通道；pair 列表格式与 GX v1 一致。
    try:
        _g2e = jload("anchors/gs_site_args_v2.json", {}) or {}
        _n_g2e = 0
        for _a1, _b1 in (_g2e.get("edges") or []):
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_g2e += 2
        print("[G2] gs-site-arg-v2 eq edges=%d" % _n_g2e, flush=True)
    except Exception as _e_g2e:
        print("[G2] edges skipped: %r" % _e_g2e, flush=True)
    # ---- PFP 参数指纹等值（param_fingerprints：P:FN:K == T:FN2|G:ADDR，EF 同款通道）----
    # 语义：pfp-thischain R4 —— mov ecx,reg(def=P:k)（或 mov ecx,[slot]）且
    # ecx 无写/无 label join/窗口 ≤16 内直调 takes-this FN2 ⇒ 参数即被调方
    # this，P:FN:K == T:FN2（DT dt-eax/member 同形，T 对侧经 [C10-pre] callee
    # 预创建/既有通道在 ents）；pfp-gstore R5 —— mov <global>,reg(def=P:k)
    # dword 直存 ⇒ P:FN:K == G:ADDR（PU5 全局存储同形，成员/索引/部分宽度
    # 存储生成器侧已排除）。双向 _call_edges（不经 un() 硬合并，R:/V: 过滤，
    # 冲突以空域交中和器）。生成器侧已对 PF/PFv2/DT/pu5 无序对去重（dup 计数
    # 不在本文件，通道幂等无妨）。
    try:
        _pfp = jload("anchors/param_fingerprints.json", {}) or {}
        _n_pfp = 0
        _pfp_via = collections.Counter()
        for _r1 in (_pfp.get("edges") or []):
            _a1 = (_r1 or {}).get("p")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_pfp += 2
            _pfp_via[(_r1 or {}).get("via") or "?"] += 1
        print("[PFP] param-fingerprint eq edges=%d (via=%s)"
              % (_n_pfp, dict(_pfp_via)), flush=True)
    except Exception as _e_pfp:
        print("[PFP] eq edges skipped: %r" % _e_pfp, flush=True)
    # ---- VDRET 虚分派返回等值（vdret_eax_edges：EAX:FN:site == RET:FN，EF 同款通道）----
    # 语义：虚调用槽位被调方集合对 EAX 站点的等值绑定（via=vdret-slot，全
    # 8,221 条同 via）——同一 slot 的全部可能被调方共享返回值槽实体
    # RET:<callee>（拼写与 RI 族的 RET 键逐字对齐，大写 hex 无 0x），EAX 侧
    # 与 EF/RA 同拼写。值传递 => 同一值，双向等值边（EF/SW/PF 同款：不经
    # un() 硬合并，R:/V: 过滤，冲突以空域形式交中和器裁决）。量级
    # 8,221 x 2 = 16,442 有向边；端点预创建见 [C10-pre] vdret/cpi 行
    # （EAX own 侧 EF 先例 + RET 对侧 RI 先例——槽位被调方大多不在 RI
    # 1,941 名单内）。
    try:
        _vre = jload("anchors/vdret_eax_edges.json", {}) or {}
        _n_vre = 0
        _vr_via = collections.Counter()
        for _r1 in (_vre.get("edges") or []):
            _a1 = (_r1 or {}).get("eax")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_vre += 2
            _vr_via[(_r1 or {}).get("via") or "?"] += 1
        print("[VR2] vdret eq edges=%d (via=%s)" % (_n_vre, dict(_vr_via)), flush=True)
    except Exception as _e_vre:
        print("[VR2] eq edges skipped: %r" % _e_vre, flush=True)
    # ---- CPI 构造参数初始化等值（ctor_param_inits：P:FN:K == M:/P:/G:，EF 同款通道）----
    # 语义：ctor 形参值与初始化目标是同一值 ⇒ 双向等值边（EF/SW/PF 同款：
    # 不经 un() 硬合并，R:/V: 过滤，冲突以空域形式交中和器裁决）。三 via：
    #   cpi-minit  mov [this+off],<reg(def=param k)>（194）=> P:FN:K == M:FN:this:0xOFF
    #   cpi-base   基类 ctor 直调实参纯转发（29）=> P:FN1:K == P:FN2:J
    #   cpi-gstore 参数直存全局本体（1）=> M: == G:
    # 生成器侧已对 pu2/pf 系去重（dup_vs_pu2 155 / dup_existing 177 不在本
    # 文件，通道幂等无妨）。端点预创建见 [C10-pre] vdret/cpi 行（PU5 双端
    # touch 先例——P: 220 个新参数原子 / M: 8 新（MW/FS 已覆盖 187）/ G: 1）。
    try:
        _cpe = jload("anchors/ctor_param_inits.json", {}) or {}
        _n_cpe = 0
        _cp_via = collections.Counter()
        for _r1 in (_cpe.get("edges") or []):
            _a1 = (_r1 or {}).get("p")
            _b1 = (_r1 or {}).get("eq")
            if not (isinstance(_a1, str) and isinstance(_b1, str)):
                continue
            if _a1.startswith(("R:", "V:")) or _b1.startswith(("R:", "V:")):
                continue
            _call_edges.append((_a1, _b1))
            _call_edges_p2.append((_a1, _b1))
            _call_edges.append((_b1, _a1))
            _call_edges_p2.append((_b1, _a1))
            _n_cpe += 2
            _cp_via[(_r1 or {}).get("via") or "?"] += 1
        print("[CPI] ctor-param-init eq edges=%d (via=%s)" % (_n_cpe, dict(_cp_via)), flush=True)
    except Exception as _e_cpe:
        print("[CPI] eq edges skipped: %r" % _e_cpe, flush=True)

    _incr_fp_ok = False
    _INCR_BASE_NOW = None
    _edges_fix = []
    _edges_pre_incr = []
    _dom_fix = {}

    # ---------------- [rs-build] --use-rs：构建 Rust 求解器对象 ----------------
    # 此处 fam 除 C10 外全部冻结（C10 在下方不动点写回后经 add_family_entries
    # 增量注入——C10 内核自身跳过 C10 族，不受影响）；clusters/exact/ents/
    # intervals/eff_size 自簇构建后即冻结。
    if _rs_mod_cell[0] is not None:
        _t_rs0 = time.time()
        _nb = (n + 7) // 8
        _fam_eids, _fam_masks = [], []
        for _fr in FAMILIES:
            _ek = list(fam[_fr].keys())
            _fam_eids.append(_ek)
            _fam_masks.append([fam[_fr][_e].to_bytes(_nb, "little") for _e in _ek])
        _rs_cell[0] = _rs_mod_cell[0].PySolver(
            n_bits=n,
            classmask=_CLASSMASK.to_bytes(_nb, "little"),
            families=list(FAMILIES),
            fam_eids=_fam_eids,
            fam_masks=_fam_masks,
            roots=[_cl["root"] for _cl in clusters],
            cluster_ents=[list(_cl["ents"]) for _cl in clusters],
            cluster_obs=[[(_o, -1 if _w is None else _w) for (_o, _w) in _cl["obs"]]
                         for _cl in clusters],
            cluster_exact=[[(_ci, list(_ss)) for _ci, _ss in _cl["exact"].items()]
                           for _cl in clusters],
            eff_size=[-1 if _s is None else int(_s) for _s in U["eff_size"]],
            intervals=[list(_iv) for _iv in intervals],
            dense=list(dense),
            all_exact_classes=sorted(ALL_EXACT_CLASSES),
            anc=[sorted(U["anc"][_i]) for _i in range(n)],
            desc=[sorted(U["desc"][_i]) for _i in range(n)],
            exact_eids=list(exact.keys()),
            exact_cis=[[_ci for (_ci, _s) in _lst] for _lst in exact.values()],
            ent_ids=list(ents.keys()),
        )
        print("[rs] PySolver built: %d classes %d clusters %d fam-entries %.1fs"
              % (n, len(clusters), sum(len(_x) for _x in _fam_eids),
                 time.time() - _t_rs0), flush=True)

    if _call_edges:
        # 除 C10 外全部族的合并域（初始证据；C10 跳过避免自污染）
        def _c10_base_dom(_edges):
            _d = {}
            for _eid in set([a for a, _ in _edges] + [b for _, b in _edges]):
                _m = FULL
                for _f in FAMILIES:
                    if _f == "C10":
                        continue
                    _fm = fam[_f].get(_eid)
                    if _fm is not None:
                        _m &= _fm
                # FIX: exact 钉定（C4 装表 / C15 槽位归属 / C11b0 装表成员）必须作为传播种子。
                # 原实现只看 fam 掩码：6,500+ 个已钉定函数以 FULL 域参与传播，
                # _anc_union(FULL)=FULL，被调方一个都收窄不了（T: 受约束簇停在 713）。
                _ex = exact.get(_eid)
                if _ex:
                    _m_ex = 0
                    for _ci_x, _s_x in _ex:
                        _m_ex |= (1 << _ci_x)
                    _m &= _m_ex
                _d[_eid] = _m
            return _d

        # AC-3 传播到不动点；_skip_empty=True 时拒绝把非空域清空的更新
        #（Phase 2 只增不减：dirty/global/stack 边不得抹掉 Phase 1 已建立的约束）
        def _c10_propagate(_edges, _dom, _skip_empty):
            _steps = _skipped = 0
            for _round in range(12):
                _chg = 0
                for _cc, _ce in _edges:
                    _mc = _dom.get(_cc, FULL)
                    _me = _dom.get(_ce, FULL)
                    # callee 必须是 caller 的祖先（或同类）
                    _allowed_e = _anc_union(_mc)
                    _new_e = _me & _allowed_e
                    if _new_e != _me:
                        if _skip_empty and _new_e == 0:
                            _skipped += 1
                        else:
                            _dom[_ce] = _new_e; _chg += 1
                            _me = _new_e
                    # 反向：caller 必须是 callee 的后代（或同类）
                    _allowed_c = _desc_union(_me)
                    _new_c = _mc & _allowed_c
                    if _new_c != _mc:
                        if _skip_empty and _new_c == 0:
                            _skipped += 1
                        else:
                            _dom[_cc] = _new_c; _chg += 1
                _steps += _chg
                if not _chg:
                    break
            return _steps, _skipped

        # 前置限定：参数实体若有多个调用点，其类 = 各实参类的公共祖先 ——
        # 任一实参类错就使交集为空，故此类实体只作排序提示，不作硬约束。
        # 实证：68 条 C10 矛盾里 19 条是多来源参数。
        _src5 = collections.Counter()
        for _e5b in raw:
            if _e5b.get("type") != "CALL_ARG":
                continue
            _t5b = _e5b.get("to")
            if isinstance(_t5b, str) and "::param" in _t5b:
                _ee5b = ent_id(_t5b)
                if _ee5b is not None:
                    _src5[_ee5b] += 1
        _multi5 = {k for k, v in _src5.items() if v > 1}
        print("[C10] multi-call-site params (constraint not applied): %d" % len(_multi5), flush=True)

        # ---- Phase 1：基线边（HEAD 语义逐字复刻，空域守卫不变）----
        _tr = os.environ.get("MC_TRACE_ENT")
        if _tr:
            for _nm_tr in ("BufferIOFileClass", "CCFileClass", "AbstractClass", "ObjectClass"):
                _ci_tr = resolve(_nm_tr)
                if _ci_tr is not None:
                    print("[trace] desc(%s) = %d" % (_nm_tr, len(U["desc"][_ci_tr])), flush=True)
            _ex_tr = exact.get(_tr)
            print("[trace] exact[%s] = %s" % (_tr, [(names[c], src) for c, src in _ex_tr] if _ex_tr else None),
                  flush=True)
            for _ftr in FAMILIES:
                _mtr = fam[_ftr].get(_tr)
                if _mtr is not None:
                    print("[trace] fam[%s][%s] = %d bits" % (_ftr, _tr, _mtr.bit_count()), flush=True)

        # ---- 真不动点传播（2026-11-02 重设计，取代 p1/p2 分相）----
        # 旧相位设计的 skip_empty 使收敛结果依赖边处理顺序：加边改变被跳过的更新
        # 集合，个别实体以更宽域收场（加边不单调；实测 this 边净 -11 唯一解）。
        # 新语义：
        #   (1) 单一混沌迭代到最小不动点 —— 传播函数单调，最小不动点唯一，与边序无关；
        #   (2) 外层「连接点中和」：R:/S:/G: 聚合节点域空 = 聚合假设被驳倒（同一
        #       寄存器在函数内多处持不同值），确定性批量摘除其全部边、重置域、
        #       从头重传播，迭代至无空域连接点；
        #   (3) 实体端（ents 内）域空 = 真矛盾 → 写 0 掩码，簇级消解标记未知。
        # R:fn:reg 聚合连接点 = 非必要条件（寄存器在函数内复用持有不同值，
        # 聚合即假设同值；严格不动点实测暴露 12,104 实体矛盾 / 18,363 空连接点，
        # 旧 skip_empty 一直在掩盖）。按「判据必须 100% 正确」纪律：默认丢弃
        # 全部 R: 介导边；--allow-heuristics 时保留（启发式层）。
        if not getattr(args, "allow_heuristics", False):
            _n_before = len(_call_edges)
            _call_edges = [(a, b) for (a, b) in _call_edges
                           if not str(a).startswith("R:") and not str(b).startswith("R:")]
            print("[C10] R:-junction edges dropped (unsound aggregation): %d -> %d"
                  % (_n_before, len(_call_edges)), flush=True)
        _edges_fix = list(_call_edges)
        try:
            _fg_dir = ROOT + "/.omo/yr1"
            import os as _os_fx2
            _os_fx2.makedirs(_fg_dir, exist_ok=True)
            with io.open(_fg_dir + "/flowgraph.json", "w") as _fh_fx:
                json.dump({"edges": [[str(a), str(b)] for (a, b) in _edges_fix],
                           "meta": {"n_edges": len(_edges_fix)}}, _fh_fx)
            with io.open(_fg_dir + "/ent_universe.json", "w") as _fh_eu:
                json.dump({"ents": sorted(str(_k) for _k in ents.keys())}, _fh_eu)
        except Exception as _e_fx:
            print("[flowgraph-dump] FAILED: %r" % _e_fx, flush=True)

        # ---- 增量 C10 不动点：checkpoint 热启动 + 工作列表传播（用户裁决架构） ----
        # 单调性：传播算子只收窄 → 混沌迭代收敛到唯一最大不动点（与边序无关）→ 从检查点
        # 不动点出发（D0 = ckpt_fix ∩ base_now，要求 base 只收窄、边只增）迭代所得 == 全量解。
        # 回退全量的硬条件（fail-closed）：检查点结构不符 / 边删除 / 域变宽 / 新空域（走
        # 中和器）/ 步数超限（对齐原 12 轮上限）/ 单遍不动点验证失败。
        def _incr_fixpoint_wl():
            _t0w = time.time()
            _ckp = _ckpt_load()
            if not isinstance(_ckp, dict) or _ckp.get("version") not in (1, 2):
                print("[incr] checkpoint unusable -> full", flush=True)
                return None
            _uvw = _ckp.get("universe") or {}
            if _uvw.get("n") != n or _uvw.get("names_sha") != _names_sha:
                print("[incr] universe changed -> full", flush=True)
                return None
            if _ckp.get("args") != {k: v for k, v in vars(args).items()}:
                print("[incr] solver args changed -> full", flush=True)
                return None
            _ckc = _ckp.get("c10") or {}
            _old_edges = set((a, b) for a, b in (_ckc.get("edges") or []))
            _new_edges = set(_edges_fix)
            _removed_e = _old_edges - _new_edges
            if _removed_e:
                print("[incr] %d edges removed (widening) -> full" % len(_removed_e), flush=True)
                return None
            _added_e = _new_edges - _old_edges
            _old_base = {e: _mask_dec(v) for e, v in (_ckc.get("base") or {}).items()}
            _old_fix = {e: _mask_dec(v) for e, v in (_ckc.get("fix") or {}).items()}
            if any(v is None for v in _old_base.values()) or any(v is None for v in _old_fix.values()):
                print("[incr] checkpoint mask decode failed -> full", flush=True)
                return None
            # ---- 确定性重放捷径（checkpoint v2）：输入指纹逐文件相同 + 求解器源码相同 ----
            # → 全量路径将做出与检查点运行完全相同的演化（同边集/同基线/同中和决策；求解器
            # 确定性已由双跑字节一致实证）→ 直接复用 post-neutralization 边集与不动点域，
            # 零传播。任何指纹差异都走下方通用增量路径/回退（fail-closed）。中和器历史使
            # 通用工作列表必然重引燃已中和的矛盾边（fresh ⊇ post），此捷径是无变更场景的
            # 唯一快速路径。
            if (_ckp.get("version") == 2
                    and _ckp.get("solver_sha256") == _solver_sha
                    and _ckp.get("inputs") == _input_parts):
                _post_lst = [(a, b) for (a, b) in (_ckc.get("edges") or [])]
                _dom_re = {}
                for _e in set(_old_base) | set(_old_fix):
                    _dom_re[_e] = _old_fix.get(_e, _old_base.get(_e, FULL))
                _zre = [e for e, m in _dom_re.items() if m == 0]
                if _zre:
                    print("[incr] shortcut: checkpoint carries empty domains -> full", flush=True)
                    return None
                for (_c, _e2) in _post_lst:
                    _mc = _dom_re.get(_c, FULL)
                    _me = _dom_re.get(_e2, FULL)
                    if (_me & _anc_union(_mc)) != _me or (_mc & _desc_union(_me)) != _mc:
                        print("[incr] shortcut fixpoint self-check failed -> full", flush=True)
                        return None
                print("[incr] deterministic replay shortcut: inputs+src unchanged -> "
                      "reuse checkpoint fixpoint (dom=%d entities, post_edges=%d, 0 steps)"
                      % (len(_dom_re), len(_post_lst)), flush=True)
                return {"dom": _dom_re, "edges": _post_lst, "base": None}
            # ---- 中和历史注定回退（快速拒绝，省去徒劳传播与基线计算）----
            # ckpt 中和器曾删边（removed_edges 非空）且捷径未触发（输入或源码有变化）：
            # 新鲜边集 ⊇ 旧全边集 ⊇ 旧矛盾边；无变宽情形（变宽另有回退，跳过本检查也不影响
            # 终态——一切路径都通向全量）下单调性保证空域只增不减 → 工作列表必然重引燃旧
            # 矛盾出空域。直接回退。
            if _ckc.get("removed_edges"):
                print("[incr] neutralization history (%d removed edges) dooms worklist -> full"
                      % len(_ckc.get("removed_edges")), flush=True)
                return None
            _base_now = _c10_base_dom(_edges_fix)
            _dom = {}
            _seeds = set()
            _widened = 0
            for _e, _mb in _base_now.items():
                _ob = _old_base.get(_e, FULL)
                if _mb == _ob:
                    _dom[_e] = _old_fix.get(_e, _ob)
                    continue
                if _mb & ~_ob:
                    _widened += 1          # 证据被删除（域扩宽）——不可增量修复
                    continue
                _seeds.add(_e)
                _dom[_e] = _old_fix.get(_e, _ob) & _mb
            if _widened:
                print("[incr] %d entities widened (evidence removed) -> full" % _widened, flush=True)
                return None
            for (_ea, _eb) in _added_e:
                _seeds.add(_ea)
                _seeds.add(_eb)
            # 工作列表（AC-3 风格）：只从种子出发沿边传播；每条边施加与全量 _c10_propagate
            # 完全一致的成对约束（含清零更新——空域交给回退判定/中和器）。
            _adjw = collections.defaultdict(list)
            for (_ca, _cb) in _edges_fix:
                _adjw[_ca].append((_cb, True))
                _adjw[_cb].append((_ca, False))
            _wl = collections.deque(sorted(_seeds))
            _inwl = set(_wl)
            _steps = 0
            _capw = 12 * len(_edges_fix) + 1000
            while _wl:
                _x = _wl.popleft()
                _inwl.discard(_x)
                for (_y, _x_is_caller) in _adjw.get(_x, ()):
                    _c, _e2 = (_x, _y) if _x_is_caller else (_y, _x)
                    _mc = _dom.get(_c, FULL)
                    _me = _dom.get(_e2, FULL)
                    _ne = _me & _anc_union(_mc)
                    if _ne != _me:
                        _dom[_e2] = _ne
                        _me = _ne
                        _steps += 1
                        if _steps > _capw:
                            print("[incr] worklist step cap exceeded -> full", flush=True)
                            return None
                        if _e2 not in _inwl:
                            _wl.append(_e2)
                            _inwl.add(_e2)
                    _nc = _mc & _desc_union(_me)
                    if _nc != _mc:
                        _dom[_c] = _nc
                        _steps += 1
                        if _steps > _capw:
                            print("[incr] worklist step cap exceeded -> full", flush=True)
                            return None
                        if _c not in _inwl:
                            _wl.append(_c)
                            _inwl.add(_c)
            _empty_w = [e for e, m in _dom.items() if m == 0]
            if _empty_w:
                print("[incr] %d empty domains (new contradictions) -> neutralizer (full)"
                      % len(_empty_w), flush=True)
                return None
            # 不动点验证（fail-closed）：单次全边扫描，任何仍可收窄即回退。
            for (_c, _e2) in _edges_fix:
                _mc = _dom.get(_c, FULL)
                _me = _dom.get(_e2, FULL)
                if (_me & _anc_union(_mc)) != _me or (_mc & _desc_union(_me)) != _mc:
                    print("[incr] fixpoint verification failed -> full", flush=True)
                    return None
            print("[incr] C10 worklist: seeds=%d steps=%d added_edges=%d entities=%d %.1fs"
                  % (len(_seeds), _steps, len(_added_e), len(_dom), time.time() - _t0w), flush=True)
            return {"dom": _dom, "base": _base_now}

        _edges_pre_incr = list(_edges_fix)      # 检查点 removed_edges = fresh - final
        if _incr_on:
            _r_incr = _incr_fixpoint_wl()
            if _r_incr is not None:
                _dom_fix = _r_incr["dom"]
                if _r_incr.get("edges") is not None:
                    _edges_fix = list(_r_incr["edges"])   # 捷径：确定性重放检查点 post 边集
                if _r_incr.get("base") is not None:
                    _INCR_BASE_NOW = _r_incr["base"]
                _incr_fp_ok = True
        if not _incr_fp_ok and _rs_cell[0] is None:
            # --use-rs：base_dom 在 Rust fixpoint 内部重算（K2），Python 侧预计算跳过
            _dom_fix = _c10_base_dom(_edges_fix)
        _empty_ids = []
        _empty_pfx = collections.Counter()
        _neutralized_total = 0
        _ent_neutralized = 0
        _root_diag = [] if os.environ.get("MC_ROOT_DIAG") else None
        # --use-rs：C10 不动点整体下沉（base_dom + 12 轮混沌传播 + 14 轮中和
        # 器，语义 1:1——dead_j 优先/本地互斥根 witness/边过滤重传播同款）。
        # Rust 路径完成时以空 range 跳过下方 Python 循环（family-table 缺省
        # 跳过先例）；增量成功时照旧跳过（dom 来自检查点）。
        _rs10_done = False
        if _rs_cell[0] is not None and not _incr_fp_ok:
            _t_rs10 = time.time()
            _r10 = _rs_cell[0].c10_fixpoint(_edges_fix)
            _edges_fix = [(_a10, _b10) for (_a10, _b10) in _r10["edges"]]
            _dom_fix = {_e10: int.from_bytes(_m10, "little")
                        for _e10, _m10 in _r10["dom"].items()}
            _empty_ids = list(_r10["empty_ids"])
            _neutralized_total = _r10["neutralized_total"]
            for _de10 in _empty_ids:
                _empty_pfx[str(_de10).split(":")[0]] += 1
            _rs10_done = True
            print("[rs] C10 fixpoint: steps=%d skipped=%d %.1fs"
                  % (_r10["steps"], _r10["skipped"], time.time() - _t_rs10), flush=True)
        for _outer in (() if _rs10_done else range(0 if _incr_fp_ok else 14)):   # 增量成功时跳过中和器（已验证无空域）
            _steps_f, _sk_f = _c10_propagate(_edges_fix, _dom_fix, _skip_empty=False)
            _empt_all = {e for e, m in _dom_fix.items() if m == 0}
            if not _empt_all:
                break
            # 摘除顺序：(1) 空域连接点（聚合假设被驳倒）；(2) 若无，只摘
            # 「本地互斥根」——基线域与某邻居基线域直接冲突的实体。级联受害者
            # 不摘（只摘根后重传播即恢复）。实测：全量摘除会连受害者一起毁掉
            # （edges 35K→7K，唯一解反降）；642 个根才是真源头。
            _dead_j = {e for e in _empt_all if e not in ents}
            _dead_roots = set()
            if not _dead_j:
                _base_now = _c10_base_dom(_edges_fix)
                _adj_now = collections.defaultdict(list)
                for (_a2, _b2) in _edges_fix:
                    _adj_now[_a2].append((_b2, "out"))
                    _adj_now[_b2].append((_a2, "in"))
                for _e0 in _empt_all:
                    _eb0 = _base_now.get(_e0, FULL)
                    _wit0 = None
                    for (_nb0, _d0) in _adj_now.get(_e0, ()):
                        _ob0 = _base_now.get(_nb0, FULL)
                        if _d0 == "out":
                            _hit0 = (_ob0 & _anc_union(_eb0)) == 0 or (_eb0 & _desc_union(_ob0)) == 0
                        else:
                            _hit0 = (_eb0 & _anc_union(_ob0)) == 0 or (_ob0 & _desc_union(_eb0)) == 0
                        if _hit0:
                            _dead_roots.add(_e0)
                            if _root_diag is not None and len(_root_diag) < 2000:
                                _root_diag.append({
                                    "eid": _e0, "dir": _d0, "nb": _nb0,
                                    "pin": [names[c] for c, _sc in (exact.get(_e0) or ())],
                                    "nb_pin": [names[c] for c, _sc in (exact.get(_nb0) or ())],
                                    "base": [names[i] for i in range(len(names)) if (_eb0 >> i) & 1][:10],
                                    "nb_base": [names[i] for i in range(len(names)) if (_ob0 >> i) & 1][:10],
                                })
                            break
            _dead = _dead_j | _dead_roots
            if not _dead:
                break    # 剩余空域 = 多跳交互，非两两可判；提交层兜底
            for _de in _dead:
                if _de in ents:
                    _empty_ids.append(_de)
                    _empty_pfx[str(_de).split(":")[0]] += 1
            _edges_fix = [(a, b) for (a, b) in _edges_fix
                          if a not in _dead and b not in _dead]
            _dom_fix = _c10_base_dom(_edges_fix)
            _neutralized_total += len(_dead)
        _c10_fx_constrained = _c10_fx_empty = 0
        for _eid, _m in _dom_fix.items():
            if _eid not in ents:
                continue          # 连接点只作传播中介
            if _eid in _multi5:
                continue          # 多调用点参数：不作硬约束
            if _m == 0:
                # 防御分支：中和循环结束后不应出现（空域实体已在循环中摘除）。
                _c10_fx_empty += 1
                _empty_pfx[str(_eid).split(":")[0]] += 1
                _empty_ids.append(_eid)
                continue
            if _m != FULL:
                fam["C10"][_eid] = fam["C10"].get(_eid, FULL) & _m
                _c10_fx_constrained += 1
        if _rs_cell[0] is not None:
            # --use-rs：C10 写回完成后把最终 fam["C10"] 掩码增量注入 Rust 求解器
            #（构建时 C10 族为空——内核 base_dom 本就跳过 C10，两不相扰）。
            _nb10 = (n + 7) // 8
            _c10k = list(fam["C10"].keys())
            _rs_cell[0].add_family_entries(
                "C10", _c10k,
                [fam["C10"][_e].to_bytes(_nb10, "little") for _e in _c10k])
        print("[C10] fixpoint: edges=%d constrained=%d roots_neutralized=%d(ent) "
              "cascades_saved=%d"
              % (len(_edges_fix), _c10_fx_constrained, len(_empty_ids),
                 _neutralized_total), flush=True)
        if _empty_pfx:
            print("[C10] entity_empties by prefix: %s" % dict(_empty_pfx), flush=True)
        if _empty_ids:
            json.dump({"meta": {"semantics": "contradicted call-edge sets at the strict fixpoint; "
                                          "C10 evidence deemed unreliable for these entities (mask stays FULL); "
                                          "investigation backlog"},
                       "by_prefix": dict(_empty_pfx),
                       "entities": sorted(_empty_ids)},
                      open(os.path.join(ROOT, "anchors/c10_contradicted_entities.json"), "w"),
                      indent=1)
            print("[C10] contradicted entities ledger: anchors/c10_contradicted_entities.json",
                  flush=True)
        perf_mark("c10_fixpoint")  # speed 轮路径 3：实体+边接线+C10 传播段结束
        if _root_diag:
            json.dump(_root_diag, open(os.path.join(ROOT, ".omo/rt1/roots.json"), "w"), indent=1)
            print("[C10] root witnesses dumped: %d" % len(_root_diag), flush=True)
        if _empty_ids and os.environ.get("MC_CA_ANALYZE"):
            # 根因分类：用基线域（未经传播）判断矛盾是本地证据互斥还是级联污染
            _base_fix = _c10_base_dom(_edges_fix)
            _adj = collections.defaultdict(list)
            for (_a2, _b2) in _edges_fix:
                _adj[_a2].append((_b2, "out"))
                _adj[_b2].append((_a2, "in"))
            _ca_out = []
            _ca_kind = collections.Counter()
            for _eid in _empty_ids:
                _eb = _base_fix.get(_eid, FULL)
                _local = []
                for (_nb, _dirn) in _adj.get(_eid, ()):
                    _ob = _base_fix.get(_nb, FULL)
                    if _dirn == "out":
                        _t1 = _ob & _anc_union(_eb)
                        _t2 = _eb & _desc_union(_ob)
                    else:
                        _t1 = _eb & _anc_union(_ob)
                        _t2 = _ob & _desc_union(_eb)
                    if _t1 == 0 or _t2 == 0:
                        _local.append([_nb, _dirn,
                                       [names[i] for i in range(len(names)) if (_eb >> i) & 1][:8],
                                       [names[i] for i in range(len(names)) if (_ob >> i) & 1][:8]])
                _pin = [names[c] for c, _src in (exact.get(_eid) or ())]
                if _local:
                    _ca_kind["local_conflict"] += 1
                    if len(_ca_out) < 300:
                        _ca_out.append({"eid": _eid, "pin": _pin, "witnesses": _local[:6]})
                else:
                    _ca_kind["cascade_only"] += 1
            json.dump({"kinds": dict(_ca_kind), "samples": _ca_out},
                      open(os.path.join(ROOT, ".omo/fx2/ca_analysis.json"), "w"), indent=1)
            print("[C10] root-cause kinds: %s" % dict(_ca_kind), flush=True)
        census["C10"] = len(fam["C10"])
        print("[C10] total entities constrained=%d" % len(fam["C10"]), flush=True)


        # C1 证据剔除（X159 地址级）后若出现孤立冲突：该簇的观测不足以支持任何类，
        # 按"证据不足"处理——把它从约束集合中移出（记入 free），而不是留作冲突。
        _obs_dropped = set()
        for _e in raw:
            if _e.get("type") != "MEMBER_ACCESS":
                continue
            if _e.get("addr") and ("0x%08X" % int(str(_e["addr"]), 16)) in dropped_addr:
                _obs_dropped.add(str(_e.get("base")))
        print("[C1] entities with dropped observations: %d" % len(_obs_dropped), flush=True)
        print("[C9] evidence=%d entities=%d (slot-owner functions: %d)"
              % (census["C9"], len(fam["C9"]), len(c9_owner)), flush=True)

    # ---------------- 增量验证模式（自动）+ warm-start greedy（信息性 incremental-K） ----------------
    # 验证模式（用户规格 3）：全量重跑一次 cluster_domains 求交（memo 关闭），与增量调度层
    # （memo 开启）的结果逐簇比对；不一致打印差异并永久关闭 memo（后续 solve 全量语义）。
    if _incr_cell["on"]:
        _t_ver = time.time()
        _got_doms = cluster_domains(list(FAMILIES))
        _incr_cell["on"] = False
        _ref_doms = cluster_domains(list(FAMILIES))
        _rmap_r = {str(_d[0].get("root") if isinstance(_d[0], dict) else _d[0]): _d
                   for _d in _ref_doms}
        _rmap_g = {str(_d[0].get("root") if isinstance(_d[0], dict) else _d[0]): _d
                   for _d in _got_doms}
        _mism = []
        for _rk, _rd in _rmap_r.items():
            _gd = _rmap_g.get(_rk)
            if _gd is None or _gd[1] != _rd[1]:
                _mism.append((_rk, _rd[1].bit_count(),
                              None if _gd is None else _gd[1].bit_count()))
        if _mism:
            print("[incr] VERIFY MISMATCH %d/%d clusters -> memo disabled, full semantics"
                  % (len(_mism), len(_rmap_r)), flush=True)
            for _rx, _ra, _rb in _mism[:8]:
                print("   e.g. %s full_bits=%s incr_bits=%s" % (_rx, _ra, _rb), flush=True)
        else:
            _incr_cell["on"] = True
            print("[incr] cluster-domain verify OK: %d clusters %.1fs"
                  % (len(_rmap_r), time.time() - _t_ver), flush=True)
        # warm-start greedy（用户规格 e）：检查点解为起点，只对未覆盖簇重跑——近似解，
        # 报告为 incremental-K；最终落盘 K 一律来自标准管线（保证与全量逐字节一致）。
        if _incr_fp_ok and not _mism:
            try:
                _ckp_w = _ckpt_load() or {}
                _ck_assign_w = _ckp_w.get("assign") or {}
                _constr_w = [(_d[0], _d[1]) for _d in _ref_doms
                             if not any(_k in _d[4] for _k in HARD_FLAGS) and _d[1] != FULL]
                _pre_w = {}
                _seed_cls_w = set()
                for _iw, (_clw, _mw) in enumerate(_constr_w):
                    _cnw = _ck_assign_w.get(str(_clw.get("root")))
                    _ciw = resolve(_cnw) if isinstance(_cnw, str) else None
                    if _ciw is not None and (_mw >> _ciw) & 1:
                        _pre_w[_iw] = _ciw
                        _seed_cls_w.add(_ciw)
                _sub_w = [(_constr_w[_j][0], _constr_w[_j][1])
                          for _j in range(len(_constr_w)) if _j not in _pre_w]
                _chw, _cvw, _unw, _asw = greedy(_sub_w)
                print("[incr] warm-greedy incremental-K=%d (ckpt-seeded %d clusters / %d "
                      "classes, greedy +%d on %d uncovered) -- informational; final K from "
                      "standard pipeline"
                      % (len(_seed_cls_w | set(_chw)), len(_pre_w), len(_seed_cls_w),
                         len(_chw), len(_sub_w)), flush=True)
            except Exception as _e_w:
                print("[incr] warm-greedy skipped: %r" % (_e_w,), flush=True)

    family_table = []
    enabled = []
    prev_k = None
    prev_pin = None
    perf_mark("evidence")         # speed 轮路径 3：实体构建+证据族加载+eq 边+C10 不动点段
    # --family-table（诊断旗标，缺省关闭；sys.argv 探测不进缓存键）：族循环跑
    # len(FAMILIES) 次前缀重解（每次 solve(enabled 前缀) 都全量重解——日志画像
    # heur_run_out3.txt 实证 70 次前缀重解占 6734.6s 中的 6229.2s = 92.5%）。
    # 2026-11-10 裁决翻转缺省：诊断表为诊断付费——快速路径（单次全族求解即最终解）
    # 是唯一缺省路径；需要逐族诊断表时显式加 --family-table。
    # 缺省时 family_table 为空（result 产物中该表为空数组），最终解/冲突消解/
    # dump 全部照常。
    _want_family_table = "--family-table" in _sched
    if not _want_family_table:
        print("[family-table] SKIPPED (default): use --family-table for per-family "
              "diagnostics; %d prefix re-solves omitted; result.family_table will be "
              "empty" % len(FAMILIES), flush=True)
    for f in (FAMILIES if _want_family_table else ()):
        enabled.append(f)
        t0 = time.time()
        res = solve(enabled)
        dt = time.time() - t0
        if f == "C1":
            ents_touched = sum(1 for r in ents.values() if r["obs"])
        else:
            ents_touched = len(fam[f]) + (exact_count[f] if f in ("C4", "C8", "C15") else 0)
        pinned = sum(1 for (cl, m) in res["constrained"] if m.bit_count() == 1)
        k_total = res["k"]                          # 全簇（含冲突 best-effort）覆盖
        family_table.append({
            "family": f, "desc": FAMILY_DESC[f], "evidence": census[f],
            "entities_touched": ents_touched,
            "clusters_constrained": len(res["constrained"]),
            "clusters_pinned": pinned, "clusters_free": res["free"],
            "pinned_classes": res["pinned_classes"],
            "forced_classes": res["forced_classes"],
            "conflicts": res["n_conflicts"], "c1_gaps": res["c1_gaps"],
            "K": res["k"], "K_upper": res["k_upper"], "K_total": k_total,
            "K_greedy": res["k_greedy"],
            "delta_forced": (res["forced_classes"] - prev_pin) if prev_pin is not None
            else res["forced_classes"],
            "delta_K": (k_total - prev_k) if prev_k is not None else k_total,
            "lower_bound": res["lower_bound"], "merges": res["merges"],
            "bad_cover": res["bad_cover"],
            "solve_s": round(dt, 1),
        })
        prev_k = k_total
        prev_pin = res["forced_classes"]
        print("[%s] evid=%d ents=%d constrained=%d pinned=%d/%dcls free=%d | K=%d "
              "LB=%d (greedy %d merges %d bad_cover %d) conflicts=%d gaps=%d | %.1fs"
              % (f, census[f], ents_touched, len(res["constrained"]), pinned,
                 res["forced_classes"], res["free"], res["k"], res["lower_bound"],
                 res["k_greedy"], res["merges"], res["bad_cover"], res["n_conflicts"],
                 res["c1_gaps"], dt), flush=True)
    perf_mark("family_loop")      # speed 轮路径 3：族循环（前缀重解）总段

    # ---------------- 最终解 ----------------
    all_fams = [f for f in FAMILIES if f not in (args.no_families or "").split(",")]

    # ---------------- 冲突消解（weakest-evidence drop，X520 CHANGE A）----------------
    # 模型：本求解器回答「一致约束集下的最少类数」。簇交域为空 = 约束集含矛盾
    # 证据，解未定义——把矛盾继续留在结果里是 bug 不是诚实。处置：对该簇按
    # provenance 强弱丢弃最弱贡献族的掩码（CSP 等价于「该证据被驳倒」），
    # 重算交域直到非空；每次丢弃逐条记入 anchors/minclass_conflict_resolution.json
    # 台账（可审计、可回滚）。只动本簇的实体掩码——簇按并查集划分实体，互不泄漏。
    # 消解后仍有冲突 → 求解未定义，硬失败退出。
    _PROV_RANK = ("C4", "C9", "C8", "C5", "C6", "C3", "C1", "C11", "C10", "C2", "C7", "C15")
    _res_ledger = []
    _res_rounds = 0
    _cl_idx_by_id = [None]               # verify 用：clusters 对象 id -> 下标
    while True:
        # --use-rs wave2：探针解走 light 路径（只重建 conflicted），最终解由
        # 循环退出后的 need_dom_bits=True 重解给出（确定性 → 与逐次全解等价）。
        # MC_RS_VERIFY 保持原 solve()（全解 + 进程内对拍）。
        if _rs_cell[0] is not None and not _RS_VERIFY:
            _out_probe = _rs_call(all_fams, need_dom_bits=False)
            res_probe = _rs_unpack(_out_probe, all_fams, light=True)
        else:
            res_probe = solve(all_fams)
        _empt = [d for d in res_probe["conflicted"] if "empty_domain" in d[4]]
        if not _empt or _res_rounds >= 64:
            break                       # 无可消解冲突 / 防御上限
        _res_rounds += 1
        _n_drops = 0
        _rs_rr = None
        _rs_rr_v = None
        if _rs_cell[0] is not None and res_probe.get("__light__"):
            # 冲突消解 _fmasks 重算下沉 Rust（K4）：逐空域簇重算各族掩码/总交/
            # 前 12 候选（台账数据）；丢弃判定与台账 JSON 留 Python。
            #（verify 路径探针为 solve() 全解——无 __conflicted_idx__，走纯 Python 对照）
            _rs_rr = _rs_cell[0].resolve_round(
                list(all_fams),
                [(ci_cl, (_fb & 2) != 0) for ci_cl, _fb
                 in zip(res_probe["__conflicted_idx__"],
                        res_probe["__conflicted_flagbits__"])])["records"]
        elif _rs_cell[0] is not None and _RS_VERIFY:
            # verify：纯 Python _fmasks 照算，Rust K4 并行重算逐项对拍
            if _cl_idx_by_id[0] is None:
                _cl_idx_by_id[0] = {id(_c): _i for _i, _c in enumerate(clusters)}
            _rs_rr_v = _rs_cell[0].resolve_round(
                list(all_fams),
                [(_cl_idx_by_id[0][id(_c)], "empty_domain" in _f)
                 for (_c, _m0v, _exv, _exsv, _f) in res_probe["conflicted"]])["records"]
        for _rri, (_cl, _m0, _ex, _exs, _fl) in enumerate(_empt):
            if _rs_rr is not None:
                _rec_rr = _rs_rr[_rri]
                _inter = int.from_bytes(_rec_rr["inter"], "little")
                _fams_rr = {all_fams[_p]: _c for _p, _c, _f12 in _rec_rr["fams"]}
                _doms_rr = {all_fams[_p]: [names[_b] for _b in _f12]
                            for _p, _c, _f12 in _rec_rr["fams"]}
            else:
                # 与 cluster_domains 同口径的该簇各族掩码（C1 始终参与）
                _fmasks = {"C1": (c1_mask(_cl["obs"]) if _cl["obs"] else FULL)}
                for _f in all_fams:
                    if _f == "C1":
                        continue
                    _mf, _hit = FULL, False
                    for _eid in _cl["ents"]:
                        _x = fam[_f].get(_eid)
                        if _x is not None:
                            _mf &= _x
                            _hit = True
                    _fmasks[_f] = _mf if _hit else FULL
                _inter = FULL
                for _f in all_fams:
                    _inter &= _fmasks[_f]
                if _rs_rr_v is not None:
                    # MC_RS_VERIFY：K4 Rust 重算与本簇纯 Python 口径逐项对拍
                    _rv = _rs_rr_v[_rri]
                    _ok_v = (
                        int.from_bytes(_rv["inter"], "little") == _inter
                        and {all_fams[_p]: _c for _p, _c, _f12 in _rv["fams"]}
                        == {f: _fmasks[f].bit_count()
                            for f in all_fams if _fmasks[f] != FULL}
                        and {all_fams[_p]: [names[_b] for _b in _f12]
                             for _p, _c, _f12 in _rv["fams"]}
                        == {f: [names[i] for i in range(len(names))
                                if (_fmasks[f] >> i) & 1][:12]
                            for f in all_fams if _fmasks[f] != FULL})
                    if not _ok_v:
                        print("[rs-verify] conflict-resolve DIFF at cluster %s"
                              % _cl.get("root"), flush=True)
                        sys.exit(2)
            # _pfm 感知：族掩码交非空但经 proven-universe 过滤后为空（C10 钉到幽灵类）
            # 时，solve 视角同样是空域 —— 必须同样标记未知，否则永远不可消解。
            if not _inter or not _pfm(_inter):
                # 不仲裁：记录矛盾族集合，该簇答案记为未知（从 constrained 移出）。
                _unknown_roots.add(_cl.get("root"))
                if _rs_rr is not None:
                    _res_ledger.append({
                        "cluster": _cl.get("root"),
                        "status": "inconsistent",
                        "families": sorted(_fams_rr),
                        "family_sizes": _fams_rr,
                        # 详细取证：实体、观测、各族允许的类名（最多 12 个）、exact 钉定
                        "ents": list(_cl.get("ents") or ())[:12],
                        "obs": ["%d:%d" % (o, w if w else 0)
                                for (o, w) in sorted(_cl.get("obs") or set())[:24]],
                        "family_domains": _doms_rr,
                        "exact": {k: [names[c] for c, _s in v]
                                  for k, v in (_cl.get("exact") or {}).items()},
                    })
                else:
                    _res_ledger.append({
                        "cluster": _cl.get("root"),
                        "status": "inconsistent",
                        "families": sorted(_f for _f in all_fams if _fmasks[_f] != FULL),
                        "family_sizes": {f: _fmasks[f].bit_count()
                                         for f in all_fams if _fmasks[f] != FULL},
                        "ents": list(_cl.get("ents") or ())[:12],
                        "obs": ["%d:%d" % (o, w if w else 0)
                                for (o, w) in sorted(_cl.get("obs") or set())[:24]],
                        "family_domains": {f: [names[i] for i in range(len(names))
                                               if (_fmasks[f] >> i) & 1][:12]
                                           for f in all_fams if _fmasks[f] != FULL},
                        "exact": {k: [names[c] for c, _s in v]
                                  for k, v in (_cl.get("exact") or {}).items()},
                    })
                _n_drops += 1
        print("[conflict-resolve] round=%d empty_clusters=%d drops=%d"
              % (_res_rounds, len(_empt), _n_drops), flush=True)
        if _n_drops == 0:
            break                      # 零丢弃 = 无法再靠"丢最弱族"消解，直接退出

    if _rs_cell[0] is not None and not res_probe.get("__dom_bits_stash__"):
        # 循环退出：以 need_dom_bits=True 重解一次（确定性，与末次探针全解等价），
        # full unpack + blob stash（Rust 写盘器直用；verify 路径亦产出 stash
        # 以便进程内对拍写盘字节）。
        res_probe = _rs_unpack(_rs_call(all_fams, need_dom_bits=True), all_fams,
                               keep_blob=True)

    res = res_probe          # 循环退出时 res_probe 即最新丢弃后的求解结果，勿重复求解
    _unresolved = res["n_conflicts"]
    _lpath = os.path.join(ROOT, "anchors/minclass_conflict_resolution.json")
    with io.open(_lpath, "w", encoding="utf-8") as fh:
        json.dump(_res_ledger, fh, ensure_ascii=False, indent=1)
    print("[conflicts] unresolved=%d resolved=%d ledger=anchors/minclass_conflict_resolution.json"
          % (_unresolved, len(_res_ledger)), flush=True)
    perf_mark("final_conflicts")  # speed 轮路径 3：最终解+冲突消解段
    if _unresolved:
        print("[conflicts] FATAL: %d conflicts remain after weakest-evidence drop "
              "(solve undefined)" % _unresolved, flush=True)
        for _cc in (res.get("conflicted") or [])[:6]:
            _clI, _mI, _exI, _exsI, _flI = _cc[0], _cc[1], _cc[2], _cc[3], _cc[4]
            _rI = (_clI.get("root") if isinstance(_clI, dict) else str(_clI))
            print("  UNRESOLVED %s flags=%s exact=%s domain=%d obs=%d"
                  % (_rI, sorted(_flI), _exsI, _mI.bit_count(), len(_clI.get("obs") or ())), flush=True)
            for _fI in FAMILIES:
                _fmI = fam[_fI].get(_rI)
                if _fmI is not None and _fmI != FULL:
                    print("     %-4s %d" % (_fI, _fmI.bit_count()), flush=True)
        sys.exit(2)

    # ---------------- 赋值规则：most-specific compatible class ----------------
    # K 由覆盖求解确定（chosen 不动）；这里只重选每簇的**报告类**。
    # 规则（EXACT 身份恒最优先）：
    #   0) EXACT（ctor/vtable/global 二进制身份）→ 恒保留；
    #   1) 簇无观测 → most-special 无意义（退化为"全宇宙最小类"，如 size=4 的
    #      ILocomotion 吸走全部无证据簇）→ 保留覆盖赋值（no_obs_kept）；
    #   2) 有观测簇的资格 = 候选按 C1 同款字节区间语义（covers()）覆盖**全部**
    #      观测；无一全覆盖 → 保留覆盖赋值（no_cover_kept）；
    #   3) 排序 = 成员精确命中数降序（成员表恰有该偏移且宽度 >= 观测宽度；
    #      仅被宽成员/外层数组"区间罩住"不算命中）→ eff_size 升序（0/None=+inf）
    #      → 成员数升序 → 字典序（确定性 tie-break）。
    def _exact_ci_of(_cl):
        _exs = {}
        for _ci, _ss in (_cl.get("exact") or {}).items():
            _kept = [s for s in (_ss or [])
                     if not (s.startswith("C4") and "C4" not in all_fams)
                     and not (s.startswith("C8") and "C8" not in all_fams)]
            if _kept:
                _exs[_ci] = _kept
        return next(iter(_exs)) if len(_exs) == 1 else None

    _strict_cov_cache = {}

    def _strict_cov_mask(o, w):
        """C1 同款 covers() 语义的严格覆盖掩码（不限 dense；跨簇缓存）。"""
        key = (o, w)
        msk = _strict_cov_cache.get(key)
        if msk is None:
            msk = 0
            for ci in range(n):
                if covers(ci, o, w):
                    msk |= (1 << ci)
            _strict_cov_cache[key] = msk
        return msk

    _old_assign = dict(res.get("assign") or {})
    _new_assign, _changed, _exact_kept = {}, 0, 0
    _chain_picks = 0
    _no_obs_kept, _no_cover_kept = 0, 0
    _ex_root, _ex_old, _ex_new = None, None, None
    for _ci_cl, (_cl, _m) in enumerate(res["constrained"]):
        _obs = sorted(_cl.get("obs") or set())
        _prev = _old_assign.get(_ci_cl)
        _exci = _exact_ci_of(_cl)
        if _exci is not None and (_m >> _exci) & 1:
            _pick = _exci
            _exact_kept += 1
        elif not _obs:
            _pick = _prev                    # 无观测：保留覆盖赋值
            _no_obs_kept += 1
        else:
            _elig = _m
            for (_o, _w) in _obs:
                _elig &= _strict_cov_mask(_o, _w if _w else 4)
                if not _elig:
                    break
            if not _elig:
                _pick = _prev                # 无候选全覆盖：保留覆盖赋值
                _no_cover_kept += 1
            else:
                _obs_l = [(_o, (_w if _w else 4)) for (_o, _w) in _obs]

                def _rank(_ci, _obs_l=_obs_l):
                    # 命中率优先（稀疏布局的类只命中一部分是正常的），同率取尺寸更贴近需求的
                    _mem = U["members"][_ci] or {}
                    _hits = 0
                    for (o, w) in _obs_l:
                        _mw = _mem.get(o)
                        if isinstance(_mw, int) and _mw >= w:
                            _hits += 1
                    _need = max(o + w for (o, w) in _obs_l) if _obs_l else 0
                    _sz = U["eff_size"][_ci]
                    # 尺寸贴近度优先：能装下且最接近需求的类 = 定义该方法的层级
                    _gap = (int(_sz) - _need) if _sz else float("inf")
                    if _gap < 0:
                        _gap = float("inf")
                    return (_gap, -_hits, len(_mem), names[_ci])

                _cands = [i for i in range(n) if (_elig >> i) & 1]
                # 取「能解释全部访问的最小类」= 最基类（定义该类方法的那一层）。
                # 抽样反例 R:404700（Techno 链、需 484B）：链上最派生的 UnitClass 是错的，
                # 正确是 TechnoClass —— 只访问基类字段的函数定义在基类上。
                _pick = min(_cands, key=_rank)
        if _pick is None:
            continue
        _new_assign[_ci_cl] = _pick
        if _prev != _pick:
            _changed += 1
            if _ex_new is None and _obs:     # top_example 必须是有观测簇
                _ex_root = (_cl.get("root") if isinstance(_cl, dict) else str(_cl))
                _ex_old, _ex_new = _prev, _pick
    print("[assign] chain-maximal picks=%d" % _chain_picks, flush=True)
    print("[assign] most-specific: changed=%d exact_kept=%d no_obs_kept=%d "
          "no_cover_kept=%d top_example=%s->%s"
          % (_changed, _exact_kept, _no_obs_kept, _no_cover_kept,
             _ex_root if _ex_root is not None else "none",
             ("%s->%s" % (names[_ex_old] if _ex_old is not None else "?",
                          names[_ex_new] if _ex_new is not None else "?"))
             if _ex_new is not None else "none"), flush=True)
    perf_mark("assign")           # speed 轮路径 3：指派段
    res["assign"] = _new_assign
    res["assign_map"] = {((_cl.get("root") if isinstance(_cl, dict) else str(_cl))): _c
                         for _cl, _c in _new_assign.items()}

    K, K_upper, LB = res["k"], res["k_upper"], res["lower_bound"]
    chosen, constrain, assign = res["chosen"], res["constrained"], res["assign"]
    if proven_keep is not None:
        # A：proven universe 的 K 对照——同一约束集，关掉掩码过滤重解一次。
        # fam 掩码本身从未被过滤（过滤只在 cluster_domains 求交处），
        # 故关掉即真实还原未剔除口径。
        _proven_cell[0] = FULL
        if _rs_cell[0] is not None and not _RS_VERIFY:
            _res_was = _rs_unpack(_rs_call(all_fams, need_dom_bits=False),
                                  all_fams, light=True)   # 只取 k
        else:
            _res_was = solve(all_fams)
        _proven_cell[0] = _proven_mask
        _k_was = _res_was["k"]
    else:
        _k_was = None
    print("\n== FINAL ==")
    print("K_min=%d  K_upper(=K+conflicts)=%d  lower_bound=%d  constrained=%d free=%d "
          "conflicts=%d c1_gaps=%d exact_conflicts=%d unassigned=%d"
          % (K, K_upper, LB, len(constrain), res["free"], res["n_conflicts"],
             res["c1_gaps"], res["exact_conflicts"], len(constrain) - len(assign)),
          flush=True)
    if _k_was is not None:
        print("[universe] K_min with proven universe=%d (was %d)" % (K, _k_was),
              flush=True)
    # 覆盖口径：域大小=1 的簇数 / 受约束簇数；forced/narrow/wide 与 assignments
    # 写出器同阈值（=1 / 2..8 / >8）。
    _cov = collections.Counter()
    _uniq = 0
    for (_cl, _m) in constrain:
        _s = _m.bit_count()
        if _s == 1:
            _uniq += 1
            _cov["forced"] += 1
        elif _s <= 8:
            _cov["narrow"] += 1
        else:
            _cov["wide"] += 1
    _tot = len(constrain)
    print("[coverage] unique=%d total=%d pct=%.1f%%   (pct = unique-domain clusters / "
          "constrained clusters)  forced=%d narrow=%d wide=%d"
          % (_uniq, _tot, (100.0 * _uniq / _tot) if _tot else 0.0,
             _cov["forced"], _cov["narrow"], _cov["wide"]), flush=True)

    # 赋值释义：K 由覆盖求解确定；每簇报告类 = most-specific compatible class
    #（见上方 most-specific 规则），域内最特异布局胜出，EXACT 身份恒保留。
    assign = dict(_new_assign)

    per_class = collections.defaultdict(lambda: {"clusters": 0, "entities": 0,
                                                 "families": collections.Counter()})
    for ci_cl, c in assign.items():
        rec = per_class[names[c]]
        rec["clusters"] += 1
        rec["entities"] += len(constrain[ci_cl][0]["ents"])
        for eid in constrain[ci_cl][0]["ents"]:
            for f in all_fams:
                if f != "C1" and eid in fam[f]:
                    rec["families"][f] += 1
            if eid in exact:
                rec["families"]["EXACT"] += 1
    class_counts = [{"class": nm, "clusters": r["clusters"], "entities": r["entities"],
                     "families": dict(r["families"])}
                    for nm, r in sorted(per_class.items(), key=lambda kv: -kv[1]["clusters"])]
    print("chosen classes=%d (multi-cluster=%d)" % (len(class_counts),
                                                    sum(1 for x in class_counts if x["clusters"] > 1)),
          flush=True)

    # ---------------- 诊断：严格 C1（"必须有成员"）无匹配 ----------------
    # 这是原型报告 2,048 个实体无布局匹配的复现与归因：严格语义下无解 ≠ 类不存在，
    # 而是 (a) 布局表稀疏（观测所得），(b) 成员链/形参的类未知，(c) 偏移是伪偏移。
    strict_cache = {}
    all_cov_cache = {}
    starts = [[a for (a, b) in intervals[i]] for i in range(n)]

    def covers_all(ci, o, w):
        iv = intervals[ci]
        st = starts[ci]
        if not iv:
            return False
        k = bisect.bisect_right(st, o) - 1
        if k < 0:
            return False
        a, b = iv[k]
        return a <= o and o + w <= b

    def all_cov_mask(o, w):
        key = (o, w)
        m = all_cov_cache.get(key)
        if m is None:
            m = 0
            for ci in range(n):
                if covers_all(ci, o, w):
                    m |= (1 << ci)
            all_cov_cache[key] = m
        return m

    def c1_strict(obs):
        """严格 C1：类必须覆盖每个被访问的字节区间（不区分布局密度）"""
        key = tuple(sorted(obs))
        m = strict_cache.get(key)
        if m is None:
            m = FULL
            for (o, w) in key:
                m &= all_cov_mask(o, w if w else 4)
                if not m:
                    break
            strict_cache[key] = m
        return m

    # 原型 v2 的严格规则复现：布局存在 + 所有偏移存在 + 宽度完全相等
    # （这是原型报告 2,048 个实体"无布局匹配"的口径；用于归因，不参与求解）
    off_eq = collections.defaultdict(int)
    ow_eq = collections.defaultdict(int)
    for i in range(n):
        if not U["has_layout"][i]:
            continue
        for off, w in U["members"][i].items():
            if w is None:
                continue
            off_eq[off] |= (1 << i)
            ow_eq[(off, w)] |= (1 << i)
    proto_cache = {}

    def proto_rule_mask(obs):
        key = tuple(obs)
        m = proto_cache.get(key)
        if m is None:
            m = FULL
            for (o, w) in key:
                if w is None:
                    m &= off_eq.get(o, 0)
                else:
                    m &= ow_eq.get((o, w), 0)
                if not m:
                    break
            proto_cache[key] = m
        return m

    proto_stats = collections.Counter()
    proto_examples = []
    for eid, rec in ents.items():
        obs = rec["obs"]
        if len(obs) < 2:
            continue
        proto_stats["entities_ge2"] += 1
        if proto_rule_mask(obs):
            proto_stats["matched_strict"] += 1
            continue
        # 归因
        wrelax = 0
        for (o, w) in obs:
            base = off_eq.get(o, 0)
            if w is None:
                wrelax |= base
            else:
                allowed = 0
                for mw in (1, 2, 4, 8, 16):
                    if mw >= w:
                        allowed |= ow_eq.get((o, mw), 0)
                wrelax |= allowed
        # 是否存在"仅宽度不同"的类
        cand = FULL
        for (o, w) in obs:
            base = off_eq.get(o, 0)
            cand &= base
            if not cand:
                break
        if cand:
            cause = "width_mismatch_only"
        elif any(o > 4096 for o, w in obs):
            cause = "suspicious_large_offset"
        elif eid.startswith("M:"):
            cause = "member_chain_unknown_class"
        elif eid.startswith("P:"):
            cause = "param_unknown_class"
        elif eid.startswith("G:"):
            cause = "global_unknown_class"
        else:
            cause = "no_class_has_all_offsets_sparse_layout"
        proto_stats[cause] += 1
        if len(proto_examples) < 24:
            proto_examples.append({"entity": eid, "obs": sorted(obs)[:10], "cause": cause})
    print("[diag] prototype_rule: entities(>=2 obs)=%d matched=%d no_match=%d %s"
          % (proto_stats["entities_ge2"], proto_stats["matched_strict"],
             proto_stats["entities_ge2"] - proto_stats["matched_strict"],
             {k: v for k, v in proto_stats.items()
              if k not in ("entities_ge2", "matched_strict")}), flush=True)

    nomatch = []
    by_cause = collections.Counter()
    strict_nomatch = 0
    for cl in clusters:
        if not cl["obs"]:
            continue
        if c1_strict(cl["obs"]):
            continue
        strict_nomatch += 1
        if cl["exact"]:
            cause = "exact_class_layout_gap"
        elif any(e.startswith("M:") for e in cl["ents"]):
            cause = "member_chain_unknown_class"
        elif any(e.startswith("P:") for e in cl["ents"]):
            cause = "param_unknown_class"
        elif all(len(ents[e]["obs"]) <= 2 for e in cl["ents"]):
            cause = "sparse_obs_lt2"
        else:
            cause = "no_class_has_all_offsets"
        # 超大偏移（> size）多半是伪偏移（地址/常量被当成 offset）
        if any(o > 4096 for o, w in cl["obs"]):
            cause = "suspicious_large_offset"
        by_cause[cause] += 1
        if len(nomatch) < 400:
            nomatch.append({"cluster": cl["root"], "entities": cl["ents"][:6],
                            "obs": sorted(cl["obs"])[:12],
                            "exact": [names[c] for c in cl["exact"]][:4], "cause": cause})
    print("[diag] strict_C1_no_match=%d %s" % (strict_nomatch, dict(by_cause)),
          flush=True)

    # ---------------- 写盘 ----------------
    def rec_conflict(cl, m, exci, exsrc, flags):
        per = {}
        masks_f = {}
        m_c1 = c1_mask(cl["obs"]) if cl["obs"] else FULL
        per["C1"] = m_c1.bit_count()
        masks_f["C1"] = m_c1
        c2_names = None
        for f in all_fams:
            if f == "C1":
                continue
            mm = FULL
            hit = False
            for eid in cl["ents"]:
                fm = fam[f].get(eid)
                if fm is not None:
                    mm &= fm
                    hit = True
            per[f] = mm.bit_count() if hit else n
            masks_f[f] = mm if hit else FULL
            if f == "C2" and hit and 1 <= mm.bit_count() <= 8:
                c2_names = [names[i] for i in range(n) if (mm >> i) & 1]
        rec = {
            "cluster": cl["root"], "entities": cl["ents"][:8],
            "n_entities": len(cl["ents"]), "obs": sorted(cl["obs"])[:16],
            "exact": exsrc[:6], "flags": flags,
            "family_domain_sizes": per,
            "reason": ("exact_conflict" if "exact_conflict" in flags else
                       ("exact_contradicts_family" if "exact_contradicts_family" in flags else
                        ("exact_width_conflict" if "width_conflict" in flags else "empty_domain"))),
        }
        if per.get("C2") == 0:
            dbg = []
            for eid in cl["ents"][:4]:
                m2 = fam["C2"].get(eid)
                dbg.append([eid, None if m2 is None else m2.bit_count(),
                            None if m2 is None else [names[i] for i in range(n) if (m2 >> i) & 1][:6]])
            rec_dbg = dbg
        pins = []
        for eid in cl["ents"]:
            pins.extend(c2_pin_log.get(eid, [])[:6])
        if pins:
            rec["c2_pins"] = pins[:12]
        if per.get("C2") == 0:
            rec["c2_mask_debug"] = rec_dbg
        if c2_names:
            rec["c2_pinned"] = c2_names
            # 哪些族把钉住类排除在域外（"still binds" 的精确口径）
            excl = [f for f in all_fams
                    if any(not (masks_f.get(f, FULL) >> i) & 1
                           for i in range(n) if (names[i] in c2_names))]
            if excl:
                rec["pinned_excluded_by"] = excl
        return rec

    table_out = [{k: v for k, v in row.items() if k != "solve_s"} for row in family_table]
    conflict_report = {
        "meta": {
            "generated_by": "tools/csp_export/minclass_solver.py",
            "families": all_fams, "reg_flow": not args.no_reg_flow,
            "evidence_mode": args.evidence,
            "evidence_note": ("default=spec（非循环口径）；spec+proto 为循环备选口径"),
            "merge_policy": "proven-same-object (X152)",
            "rejected_merges": dict(rejected_merges),
            "ruleGJ": {"reg_drops": rule_g_drops, "junction_unions": rule_j_unions},
            "ruleS2": {"c2_drops": rule_s2_drops,
                       "records": rule_s2_records[:80]},
            "c8_cast_dropped": c8_cast_dropped[:50],
            "K": K, "K_upper": K_upper, "lower_bound": LB,
            "constrained_clusters": len(constrain), "free_clusters": res["free"],
            "conflicts": res["n_conflicts"], "c1_gaps": res["c1_gaps"],
            "universe": n, "entities": len(ents),
        },
        "family_table": table_out,
        "conflicts": [rec_conflict(*c) for c in res["conflicted"]],
        "diagnostics": {
            "no_layout_match": {"count": sum(by_cause.values()),
                                "by_cause": dict(by_cause), "samples": nomatch},
            "prototype_rule_c1": {
                "description": "prototype v2 rule: layout exists AND every offset exists "
                               "AND width strictly equal (entity level, obs>=2)",
                "entities_ge2": proto_stats["entities_ge2"],
                "matched_strict": proto_stats["matched_strict"],
                "no_match": proto_stats["entities_ge2"] - proto_stats["matched_strict"],
                "by_cause": {k: v for k, v in proto_stats.items()
                             if k not in ("entities_ge2", "matched_strict")},
                "samples": proto_examples,
            },
            "c4_source_disagreements": c4_disagree[:300],
            "c6_slot_count_disagreements": sc_disagree[:300],
            "c7_variance_violations": viol[:500],
            "c7_variance_violation_count": len(viol),
            "equality_channels": {k: {"unions": v["unions"],
                                      "exact_conflicts": v["exact_conflicts"],
                                      "examples": v["examples"]}
                                  for k, v in sorted(ch_stats.items())},
            "merge_census": {
                "policy": "proven-same-object (X152)",
                "candidates": len(cands),
                "callarg_direct": sum(1 for c in cands if c[0] == "callarg_direct"),
                "reg_def": sum(1 for c in cands if c[0] == "reg_def"),
                "param_targets": len(target_froms),
                "multi_source_joins": multi_joins,
            },
            "rejected_merges": {
                "counts": dict(rejected_merges),
                "examples": {k: v for k, v in rejected_examples.items()},
            },
        },
    }
    cpath = os.path.join(ROOT, "anchors/minclass_conflicts.json")
    with io.open(cpath, "w", encoding="utf-8") as fh:
        json.dump(conflict_report, fh, ensure_ascii=False, indent=1)
    print("[out] %s (%.1f KB)" % (cpath, os.path.getsize(cpath) / 1024.0), flush=True)

    result = {
        "meta": {"generated_by": "tools/csp_export/minclass_solver.py",
                 "families": all_fams, "reg_flow": not args.no_reg_flow,
                 "evidence_mode": args.evidence,
                 "evidence_note": ("default=spec（非循环口径：仅 layout_evidence/ctor_types/"
                                   "vtable_install）；spec+proto 用 proto 派生类验证 proto "
                                   "布局，与 C2 掩码同源，属循环口径，仅作备选报告"),
                 "merge_policy": "proven-same-object (X152)",
                 "rejected_merges": dict(rejected_merges),
                 "K_min": K, "K_upper": K_upper, "lower_bound": LB,
                 "constrained_clusters": len(constrain), "free_clusters": res["free"],
                 "conflicts": res["n_conflicts"], "c1_gaps": res["c1_gaps"],
                 "entities": len(ents), "universe": n},
        "family_table": table_out,
        "chosen_classes": class_counts,
    }
    if getattr(args, "audit_layout", None):
        _want = str(args.audit_layout)
        _ci_w = resolve(_want)
        if _ci_w is None:
            print("[audit-layout] %s not in universe" % _want, flush=True)
        else:
            _mm = U["members"][_ci_w]
            _obs = set()
            _nfn = 0
            for _eid_w, _lst_w in exact.items():
                if not _eid_w.startswith("T:"):
                    continue
                _cs_w = {_c for _c, _s in _lst_w}
                if _cs_w == {_ci_w}:
                    _nfn += 1
                    _obs |= (ents.get(_eid_w) or {}).get("obs") or set()
            _miss = [(o, w) for (o, w) in _obs if not (isinstance(_mm.get(o), int) and _mm[o] >= w)]
            print("[audit-layout] %s members=%d identified_fns=%d obs=%d missing=%d %s"
                  % (_want, len(_mm), _nfn, len(_obs), len(_miss),
                     [hex(o) for o, _w in sorted(_miss)[:10]]), flush=True)

    if getattr(args, "audit_yrpp", False):
        # 用 YRpp（独立参照）审计约束：对每个 YRpp 函数->类映射，检查该类是否仍在
        # 该函数所在簇的域内。若被排除，说明某条约束把**真解**排掉了 —— 约束错误。
        _yr = (jload("anchors/yrpp_fn_class.json", {}) or {}).get("map") or {}
        _root_of = {_eid: uf.find(_eid) for _eid in ents}
        _mask_of = {}
        for _cl, _m in res.get("constrained") or ():
            _r = (_cl.get("root") if isinstance(_cl, dict) else str(_cl))
            _mask_of[_r] = _m
        _ok = _out = _nocl = 0
        _excluded_src = collections.Counter()
        _root_members = {}
        for _cl0 in clusters:
            _root_members[(_cl0.get('root') if isinstance(_cl0, dict) else str(_cl0))] = _cl0.get('ents') or []
        _excluded = []
        for _as, _cn in _yr.items():
            _a = hx(_as)
            _ci = resolve(_cn)
            if _a is None or _ci is None:
                continue
            _eid = "T:%X" % _a
            _r = _root_of.get(_eid)
            if _r is None:
                _nocl += 1
                continue
            # 审计口径：只比较**函数自身**的簇（T: 根）。若该函数被并进了参数/寄存器等
            # 簇，簇的类代表的是那个对象，与"函数所属类"无关 —— 拿它们比是无效比较
            # （实证：P:48E570:2 被判矛盾，实为参数类 vs 函数类）。
            if not str(_r).startswith("T:"):
                _nocl += 1
                continue
            _m = _mask_of.get(_r)
            if _m is None:
                _nocl += 1
                continue
            if (_m >> _ci) & 1:
                _ok += 1
            else:
                _out += 1
                _src_e = set()
                for _mm in (_root_members.get(_r) or ()):
                    for _ci_s, _s_s in exact.get(_mm, ()):
                        _src_e.add(str(_s_s).split(":")[0])
                _excluded_src["+".join(sorted(_src_e)) or "?"] += 1
                if len(_excluded) < 25:
                    _excluded.append((_r, _cn, _m.bit_count(), "+".join(sorted(_src_e))))
        print("[audit] YRpp in-domain=%d  EXCLUDED=%d  no-cluster=%d" % (_ok, _out, _nocl))
        print("[audit] excluded by exact-source: %s" % dict(_excluded_src))
        for _r, _cn, _d, _s4 in _excluded:
            print("   EXCLUDED %-22s YRpp=%-24s domain=%d src=%s" % (_r, _cn, _d, _s4))
    if getattr(args, "explain", None):
        _want = str(args.explain).upper()
        for _cl, _m in res.get("constrained") or ():
            _root = (_cl.get("root") if isinstance(_cl, dict) else str(_cl))
            if _root.upper() != _want:
                continue
            _cands = [names[i] for i in range(len(names)) if (_m >> i) & 1]
            print("[explain] %s" % _root)
            print("  domain=%d" % len(_cands))
            print("  members=%s" % ((_cl.get("ents") or [])[:12],))
            _srcs = {}
            for _m2 in (_cl.get("ents") or []):
                for _ci2, _s2 in exact.get(_m2, ()):
                    _srcs.setdefault(names[_ci2], []).append(_s2)
            print("  exact_sources=%s" % _srcs)
            print("  obs=%s" % sorted(_cl.get("obs") or ())[:20])
            print("  candidates=%s" % _cands[:40])
            for _f in FAMILIES:
                # 族掩码按**实体**存储（cluster_domains 亦是逐实体求交），
                # 早先按簇根查会一直显示 (no mask) —— 诊断键名错误。
                _fm = None
                for _eX in (_cl.get("ents") or []):
                    _mx = fam[_f].get(_eX)
                    if _mx is not None:
                        _fm = _mx if _fm is None else (_fm & _mx)
                if _fm is not None and _fm != FULL:
                    print("    %s allows %d: %s" % (_f, _fm.bit_count(),
                          [names[i] for i in range(len(names)) if (_fm >> i) & 1][:12]))
            if getattr(args, "explain_class", None):
                _ci_w = resolve(str(args.explain_class))
                if _ci_w is None:
                    print("  [class] %s : NOT IN UNIVERSE" % args.explain_class)
                else:
                    print("  [class] %s idx=%d eff_size=%s has_layout=%s members=%d"
                          % (args.explain_class, _ci_w, U["eff_size"][_ci_w],
                             U["has_layout"][_ci_w], len(U["members"][_ci_w])))
                    print("  [class] in domain: %s" % bool((_m >> _ci_w) & 1))
                    try:
                        _obs_w = _cl.get("obs") or set()
                        _cm = c1_mask(_obs_w) if _obs_w else FULL
                        print("  [class] c1_mask allows: %s  (sparse=%s dense=%s)"
                              % (bool((_cm >> _ci_w) & 1),
                                 bool((sparse_mask >> _ci_w) & 1),
                                 bool((dense_mask >> _ci_w) & 1)))
                        _need_w = max(_o + _w2 for (_o, _w2) in _obs_w)
                        print("  [class] size_mask(0x%X) allows: %s (eff_size=%s)"
                              % (_need_w, bool((c1_size_mask(_need_w) >> _ci_w) & 1),
                                 U["eff_size"][_ci_w]))
                        for (_o, _w2) in sorted(_obs_w)[:12]:
                            print("     off=0x%-8X w=%d ok_mask=%s"
                                  % (_o, _w2, bool((c1_ok_mask(_o, _w2 if _w2 else 4) >> _ci_w) & 1)))
                    except Exception as _e:
                        print("  [class] c1 debug failed: %s" % _e)
                    for _f in FAMILIES:
                        _fm = fam[_f].get(_root)
                        if _fm is None:
                            print("    %-4s (no mask)" % _f)
                        else:
                            print("    %-4s %s" % (_f, "ALLOW" if (_fm >> _ci_w) & 1 else "DENY"))
    if getattr(args, "dump_domains", False) and os.environ.get("MC_PREFIX_CENSUS"):
        _all_roots = {str(_c8.get("root")): _c8 for _c8 in clusters}
        _con_roots = {str(_c9.get("root")) for (_c9, _m9) in (res.get("constrained") or [])}
        _dsz = res.get("dom_sizes") or {}
        _hist = collections.defaultdict(lambda: collections.Counter())
        _tot = collections.Counter()
        for _rk in _all_roots:
            _pf = _rk.split(":")[0]
            _sz = _dsz.get(_rk, 1435)
            _b = (1 if _sz == 1 else 2 if _sz == 2 else 3 if _sz <= 5 else
                  6 if _sz <= 20 else 21 if _sz <= 100 else 101 if _sz <= 1434 else 1435)
            _hist[_pf][_b] += 1
            _tot[_pf] += 1
        _buckets = [1, 2, 3, 6, 21, 101, 1435]
        _lbl = {1: "1", 2: "2", 3: "3-5", 6: "6-20", 21: "21-100", 101: "101-1434", 1435: "free(1435)"}
        print("[prefix-census] rows=prefix cols=domain-size")
        print("%-6s %8s" % ("前缀", "总计") + "".join("%10s" % _lbl[b] for b in _buckets))
        for _pf in sorted(_hist, key=lambda x: -_tot[x]):
            print("%-6s %8d" % (_pf, _tot[_pf]) + "".join("%10d" % _hist[_pf].get(b, 0) for b in _buckets))
        print("[prefix-census] 合计簇 %d / 宇宙 %d" % (sum(_tot.values()), n))
    if getattr(args, "dump_domains", False) and os.environ.get("MC_MULTI_CENSUS"):
        # 强制多类普查（非唯一簇的边邻居 exact 钉定两两无祖先关系）
        _excl = {}
        for _e1x, _l1x in exact.items():
            _cs1 = {_c for _c, _s1 in _l1x if str(_s1).startswith(("C4", "C15"))}
            if len(_cs1) == 1:
                _excl[_e1x] = next(iter(_cs1))
        _nb = collections.defaultdict(set)
        for (_a3, _b3) in _edges_fix:
            if _a3 in _excl: _nb[_b3].add(names[_excl[_a3]])
            if _b3 in _excl: _nb[_a3].add(names[_excl[_b3]])
        _root_mc = {str(_c9.get("root")): _c9 for _c9 in clusters}
        _forced = _fam = _none = 0
        _out_mc = {}
        def _ancq(a, b):
            ia, ib = resolve(a), resolve(b)
            if ia is None or ib is None: return False
            return ia in U["anc"][ib]
        for (_clm, _mm) in (res.get("constrained") or []):
            _rxm = str(_clm.get("root")) if isinstance(_clm, dict) else str(_clm)
            if (res.get("dom_sizes") or {}).get(_rxm) == 1:
                continue
            _clE = _root_mc.get(_rxm) or {}
            _cal = set()
            for _e4 in (_clE.get("ents") or ()):
                _cal |= _nb.get(_e4, set())
            if len(_cal) < 2:
                _none += 1
                continue
            unrel = False
            cl5 = sorted(_cal)
            for i in range(len(cl5)):
                for j in range(i + 1, len(cl5)):
                    if not _ancq(cl5[i], cl5[j]) and not _ancq(cl5[j], cl5[i]):
                        unrel = True
                        break
                if unrel: break
            if unrel:
                _forced += 1
                if len(_out_mc) < 400: _out_mc[_rxm] = sorted(_cal)[:8]
            else:
                _fam += 1
        print("[multi-census] non-unique: forced-multiclass=%d same-family=%d no-pinned-neighbors=%d"
              % (_forced, _fam, _none), flush=True)
        json.dump(_out_mc, open(os.path.join(ROOT, ".omo/yr1/forced.json"), "w"), indent=1)
    if getattr(args, "dump_domains", False):
        dpath = os.path.join(ROOT, "anchors/minclass_domains.json")
        with io.open(dpath, "w", encoding="utf-8") as fh:
            json.dump(res["dom_sizes"], fh, ensure_ascii=False)
        print("[out] %s" % dpath, flush=True)
        # full domain contents (per-entity candidate lists) for codegen consumers
        _de = res.get("dom_ents") or {}
        _dcontents = {}
        for _root, _entlist in (_de.items() if isinstance(_de, dict) else []):
            for _e in (_entlist or []):
                _rk = _root if isinstance(_root, str) else str(_root)
                _dcontents.setdefault(str(_e), []).append(_rk)
        with io.open(os.path.join(ROOT, "anchors/minclass_domain_contents.json"), "w", encoding="utf-8") as fh:
            json.dump(_dcontents, fh, ensure_ascii=False)
        print("[out] minclass_domain_contents.json (%d entities)" % len(_dcontents), flush=True)
        apath = os.path.join(ROOT, "anchors/minclass_assignments.json")
        _stash_a = res.get("__dom_bits_stash__")
        if _rs_mod_cell[0] is not None and _stash_a is not None:
            # --use-rs wave2：assignments 写盘下沉 Rust（字节等价 stdlib indent=0
            # 编码器；candidates 直接消费打包位表，names 不物化为 Python 列表）。
            _roots_aw = [(c.get("root") if isinstance(c, dict) else str(c))
                         for (c, _m) in (res.get("constrained") or [])]
            _cls_by_root = {}
            for _kk, _cc in (res.get("assign_map") or {}).items():
                try:
                    _ii = int(_kk)
                except (TypeError, ValueError):
                    continue
                if 0 <= _ii < len(_roots_aw) and _cc is not None and 0 <= _cc < n:
                    _cls_by_root[_roots_aw[_ii]] = names[_cc]
            _roots_a, _counts_a, _cls_a, _conf_a = [], [], [], []
            _blob_a = bytearray()
            _ent_map_a = res.get("dom_ents") or {}
            _pops_a = res.get("dom_sizes") or {}
            _off_a = 0
            for _slot_a, _rk_a in enumerate(_stash_a[0]):
                _cnt_a = _stash_a[1][_slot_a]           # blob 计数（cap 1600）
                _pop_a = _pops_a.get(_rk_a, 0)          # 真域宽（过滤口径同纯路径）
                _nb_a = 2 * _cnt_a
                if 0 < _pop_a <= 1600:
                    _roots_a.append(_rk_a)
                    _counts_a.append(_cnt_a)
                    _blob_a += _stash_a[2][_off_a:_off_a + _nb_a]
                    _cc_a = _cls_by_root.get(_rk_a)
                    _cls_a.append(_cc_a)
                    _conf_a.append(0 if _pop_a == 1 else (1 if _pop_a <= 8 else 2))
                _off_a += _nb_a
            _rs_mod_cell[0].dump_assignments(
                apath, _roots_a, _counts_a, bytes(_blob_a), list(names),
                [_ent_map_a.get(_r, []) for _r in _roots_a],
                _cls_a, _conf_a)
            if _RS_VERIFY:
                # 进程内对拍：stash 位表解码出的候选名 vs stdlib indent=0 字节流
                _asg_chk = {}
                _off_v = 0
                for _slot_v, _rk_v in enumerate(_stash_a[0]):
                    _cnt_v = _stash_a[1][_slot_v]
                    _nb_v = 2 * _cnt_v
                    if 0 < _pops_a.get(_rk_v, 0) <= 1600:
                        _cands_v = [names[int.from_bytes(
                                        _stash_a[2][_k:_k + 2], "little")]
                                    for _k in range(_off_v, _off_v + _nb_v, 2)]
                        _asg_chk[_rk_v] = {
                            "candidates": _cands_v,
                            "ents": _ent_map_a.get(_rk_v, []),
                            "class": _cls_by_root.get(_rk_v),
                            "confidence": ("forced" if len(_cands_v) == 1 else
                                           ("narrow" if len(_cands_v) <= 8 else "wide"))}
                    _off_v += _nb_v
                _want_b = json.dumps(_asg_chk, ensure_ascii=False, indent=0).encode("utf-8")
                if os.name == "nt":       # 纯路径经文本模式写盘 → CRLF；Rust 写盘器同口径
                    _want_b = _want_b.replace(b"\n", b"\r\n")
                _got_b = io.open(apath, "rb").read()
                if _got_b != _want_b:
                    print("[rs] assignments dump VERIFY FAILED "
                          "(got %d B, want %d B)" % (len(_got_b), len(_want_b)), flush=True)
                    sys.exit(2)
                print("[rs] assignments dump verify OK (%d B)" % len(_got_b), flush=True)
            _asg_n = len(_roots_a)
            _asg_forced = sum(1 for c in _conf_a if c == 0)
            _asg_narrow = sum(1 for c in _conf_a if c == 1)
        else:
            _asg = {}
            _ents = res.get("dom_ents") or {}
            # most-specific 赋值落到该文件（assign_map 键 = str(constrained 下标)）
            _roots_aw = [(c.get("root") if isinstance(c, dict) else str(c))
                         for (c, _m) in (res.get("constrained") or [])]
            _cls_by_root = {}
            for _kk, _cc in (res.get("assign_map") or {}).items():
                try:
                    _ii = int(_kk)
                except (TypeError, ValueError):
                    continue
                if 0 <= _ii < len(_roots_aw) and _cc is not None and 0 <= _cc < n:
                    _cls_by_root[_roots_aw[_ii]] = names[_cc]
            for cl, nm in (res.get("dom_names") or {}).items():
                _asg[cl] = {"candidates": nm,
                            "ents": _ents.get(cl, []),
                            "class": _cls_by_root.get(cl),
                            "confidence": ("forced" if len(nm) == 1 else
                                           ("narrow" if len(nm) <= 8 else "wide"))}
            with io.open(apath, "w", encoding="utf-8") as fh:
                json.dump(_asg, fh, ensure_ascii=False, indent=0)
            _asg_n = len(_asg)
            _asg_forced = sum(1 for v in _asg.values() if v["confidence"] == "forced")
            _asg_narrow = sum(1 for v in _asg.values() if v["confidence"] == "narrow")
        print("[out] %s (%d assignments, forced=%d narrow=%d)"
              % (apath, _asg_n, _asg_forced, _asg_narrow), flush=True)
    # ---- 由解直接读出类布局（内容是解的输出，不是输入）----
    _assign = res.get("assign_map") or {}
    _obs = res.get("cluster_obs") or {}
    _roots = [(c.get("root") if isinstance(c, dict) else str(c))
              for (c, _m) in (res.get("constrained") or [])]
    # 只从「二进制锚支持」的簇派生（否则宽类会把无证据簇的观测吸进自己的布局）
    _bin_ctor = collections.defaultdict(set)
    for _a, _c in (dict(jload("anchors/ctor_types.json", {}) or {}, **(jload("anchors/ctor_types_ext.json", {}) or {})) or {}).items():
        try:
            _bin_ctor[int(_a, 16)].add(str(_c).replace("??_7", "").rstrip("@").split("::")[-1])
        except ValueError:
            pass
    for _a, _c in ((jload("anchors/structural_truth.json", {}) or {}).get("vtable_install") or {}).items():
        try:
            _bin_ctor[int(_a, 16)].add(str(_c).replace("??_7", "").rstrip("@").split("::")[-1])
        except ValueError:
            pass
    _bin_slot = collections.defaultdict(set)
    for _cls, _v in (jload("anchors/vtable_slot_authority.json", {}) or {}).items():
        for _ix, _sl in (_v.get("slots") or {}).items():
            _ad = (_sl or {}).get("addr")
            if not _ad:
                continue
            try:
                _bin_slot[int(str(_ad), 16)].add(_cls)
            except ValueError:
                pass

    def _bin_supported(_cls, _ents):
        for _e in _ents or []:
            if not _e.startswith("T:"):
                continue
            try:
                _fnx = int(_e[2:], 16)
            except ValueError:
                continue
            for _c in _bin_ctor.get(_fnx, ()):
                if _cls == _c or _cls.startswith(_c) or _c.startswith(_cls):
                    return True
            for _c in _bin_slot.get(_fnx, ()):
                if _cls == _c or _cls.startswith(_c) or _c.startswith(_cls):
                    return True
        return False

    _derived = {}
    for _k, _ci in _assign.items():
        try:
            _idx = int(_k)
        except (TypeError, ValueError):
            continue
        if not (0 <= _idx < len(_roots)):
            continue
        _root = _roots[_idx]
        if _ci is None or _ci < 0 or _ci >= n:
            continue
        _cname = names[_ci]
        if not _bin_supported(_cname, (res.get("dom_ents") or {}).get(_root, [])):
            continue
        _d = _derived.setdefault(_cname, {"members": set(), "clusters": 0})
        _d["clusters"] += 1
        for _o, _w in (_obs.get(_root) or []):
            _o = int(_o); _w = int(_w or 4)
            if _o > 4096:
                continue      # 伪偏移（提取噪声），不进入派生布局
            _d["members"].add((_o, _w))
    _dl = {}
    for _cname, _d in _derived.items():
        _ms = sorted(_d["members"])
        _dl[_cname] = {
            "member_count": len(_ms),
            "extent": (max(o + w for o, w in _ms) if _ms else 0),
            "clusters": _d["clusters"],
            "members": [[o, w] for o, w in _ms],
        }
    # 导出逐簇分配（供二进制锚过滤后的重新派生）
    _clusters = {}
    for _k, _ci in _assign.items():
        try:
            _idx = int(_k)
        except (TypeError, ValueError):
            continue
        if not (0 <= _idx < len(_roots)):
            continue
        if _ci is None or _ci < 0 or _ci >= n:
            continue
        _r = _roots[_idx]
        _clusters[_r] = {"class": names[_ci],
                         "obs": [[int(o), int(w or 4)] for o, w in (_obs.get(_r) or [])],
                         "ents": list((res.get("dom_ents") or {}).get(_r, []))}
    _cpath = os.path.join(ROOT, "anchors/minclass_clusters.json")
    if _rs_mod_cell[0] is not None:
        # --use-rs wave2：clusters 写盘下沉 Rust（字节等价 stdlib indent=0）
        _rs_mod_cell[0].dump_clusters(
            _cpath, list(_clusters.keys()),
            [v["class"] for v in _clusters.values()],
            [[(p[0], p[1]) for p in v["obs"]] for v in _clusters.values()],
            [v["ents"] for v in _clusters.values()])
    else:
        with io.open(_cpath, "w", encoding="utf-8") as fh:
            json.dump(_clusters, fh, ensure_ascii=False, indent=0)
    print("[out] %s (%d clusters)" % (_cpath, len(_clusters)), flush=True)

    _dpath = os.path.join(ROOT, "anchors/derived_layouts.json")
    if _rs_mod_cell[0] is not None:
        # --use-rs wave2：derived_layouts 写盘下沉 Rust（字节等价 stdlib indent=0）
        _rs_mod_cell[0].dump_derived(
            _dpath, list(_dl.keys()),
            [v["member_count"] for v in _dl.values()],
            [v["extent"] for v in _dl.values()],
            [v["clusters"] for v in _dl.values()],
            [[(p[0], p[1]) for p in v["members"]] for v in _dl.values()])
    else:
        with io.open(_dpath, "w", encoding="utf-8") as fh:
            json.dump(_dl, fh, ensure_ascii=False, indent=0)
    print("[out] %s (%d classes, members derived from the solution)" % (_dpath, len(_dl)), flush=True)

    rpath = os.path.join(ROOT, "anchors/minclass_result.json")
    with io.open(rpath, "w", encoding="utf-8") as fh:
        json.dump(result, fh, ensure_ascii=False, indent=1)
    print("[out] %s (%.1f KB)" % (rpath, os.path.getsize(rpath) / 1024.0), flush=True)
    perf_mark("dumps")            # speed 轮路径 3：dump 产物写出段（含 assignments 400MB）
    print("[time] %.1fs" % (time.time() - t_start), flush=True)

    # 求解成功 → 写结果缓存（在 [time] 之后，拷贝 400MB 产物不计入求解耗时）
    if _cache_on:
        _cache_write(args, _ck)
        # ---- 检查点写入（增量热启动状态；失败不阻断——同 _cache_write 哲学） ----
        try:
            _base_final = _INCR_BASE_NOW if (_incr_fp_ok and _INCR_BASE_NOW is not None) \
                else _c10_base_dom(_edges_fix)
            _cl_doms_ck = {}
            for (_clz, _mz) in (res.get("constrained") or []):
                if _mz and _mz != FULL:
                    _cl_doms_ck[str(_clz.get("root") if isinstance(_clz, dict) else _clz)] = \
                        _mask_enc(_mz)
            _roots_aw = [(_clz.get("root") if isinstance(_clz, dict) else str(_clz))
                         for (_clz, _mz) in constrain]
            _assign_ck = {}
            for _ia, _cia in (_new_assign or {}).items():
                if 0 <= _ia < len(_roots_aw) and isinstance(_cia, int) and 0 <= _cia < n:
                    _assign_ck[str(_roots_aw[_ia])] = names[_cia]
            _ckpt_write({
                "version": 2,
                "created_ts": time.time(),
                "solver_sha256": _solver_sha,
                "args": {k: v for k, v in vars(args).items()},
                "inputs": _input_parts if _input_parts is not None else _cache_input_parts(args),
                "universe": {"n": n, "names_sha": _names_sha},
                "c10": {
                    "n_edges": len(_edges_fix),
                    "edges": [[str(a), str(b)] for (a, b) in _edges_fix],
                    "removed_edges": [[str(a), str(b)] for (a, b)
                                      in (set(_edges_pre_incr) - set(_edges_fix))],
                    "base": {str(e): _mask_enc(m)
                             for e, m in _base_final.items() if m != FULL},
                    "fix": {str(e): _mask_enc(m) for e, m in _dom_fix.items()
                            if m != _base_final.get(e, FULL)},
                },
                "cluster_domains": _cl_doms_ck,
                "k_min": K,
                "chosen": [names[c] for c in (res.get("chosen") or [])
                           if isinstance(c, int) and 0 <= c < n],
                "assign": _assign_ck,
            })
        except Exception as _e_ck:
            print("[incr] checkpoint write FAILED (solve results intact): %r" % (_e_ck,), flush=True)
        perf_mark("cache_write")   # speed 轮路径 3：缓存拷贝+检查点段（[time] 之后）

    perf_report()                 # speed 轮路径 3：[perf] 分段总表（进程全生命周期）
    print("\n| family | evidence | entities | constrained | forced_cls | K | K_upper | dForced | LB | conflicts | C1 gaps |")
    print("|---|---|---|---|---|---|---|---|---|---|---|")
    for row in family_table:
        print("| %s | %d | %d | %d | %d | %d | %d | %+d | %d | %d | %d |"
              % (row["family"], row["evidence"], row["entities_touched"],
                 row["clusters_constrained"], row["forced_classes"], row["K"],
                 row["K_upper"], row["delta_forced"], row["lower_bound"],
                 row["conflicts"], row["c1_gaps"]))


if __name__ == "__main__":
    main()






