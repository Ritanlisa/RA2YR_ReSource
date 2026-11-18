# NG 族谱工作单（ng2）

数据源：`.omo/agents/r1/ng2/classify_fam.json`（9,111 条全量分类，含 orig/ours 首差、shape、cls、size）。
生成：2026-11-18 重启恢复后（原 NG Agent 已死，工件完整保留）。

## 总表（按 pathology）

| pathology | count | share | 可处置性 | 方向 |
|---|---|---|---|---|
| codegen_shape | 3311 | 36.3% | long-tail | 结构级差异（36.3%），自动试错 ROI <10%（历史证据），需逐件 IDA 取证。 |
| regalloc | 1731 | 19.0% | long-tail | 寄存器分配差（19.0%）。 |
| branch_polarity | 989 | 10.9% | rule-candidate | 989 件全为 jcc 目标差（INTRA:+0xE vs +0x25）。已落地的极性规则解决的是分支方向；残余是块布局/目标差，需按 jcc 目标偏移聚类。 |
| frame_sched | 942 | 10.3% | long-tail | 帧内调度差（10.3%）。 |
| const_fold | 650 | 7.1% | rule+tooling | imm_const 差异；部分为数据符号地址折零（push 0x633760 vs push 0）→ 与 extern_reloc 同族；FP 字面量已由 W-A pass 覆盖，勿重跑。 |
| extern_reloc | 427 | 4.7% | tooling-first | diffasm reloc 符号键映射（W1）。可能是测量侧假阴性：字节在 reloc 归一后本应 MATCH。先做 50 件人工核对，若 >30% 真匹配 → 修 diffasm 映射（不动代码）。 |
| branch_order | 405 | 4.4% | ? | 未分类 |
| ret_norm | 175 | 1.9% | rule-candidate | 返回宽度归一（mov eax vs mov al 等）。 |
| width_mismatch | 147 | 1.6% | rule-candidate | 操作数宽度差异（byte/word/dword）。 |
| cc_mismatch | 144 | 1.6% | rule-candidate | ret N vs ret（被调清理宽度）/ 调用约定；对应签名 arity 或 cc 层。 |
| eval_order | 99 | 1.1% | rule-candidate | 求值顺序差；x87 双 FP 操作数右先求值已有先例（W-A）。 |
| signedness | 91 | 1.0% | rule-candidate | 有符号/无符号比较/转换拼写。 |

## 逐族样本（addr / name / orig first-diff / ours）

### branch_polarity（989）
- `0x402330` AudioController::UpdatePlayback — orig `+12 je 0x4023b0` vs ours `+12 je 0x68`
- `0x402600` AudioChannel::DeactivatePlay — orig `+19 je 0x40263d` vs ours `+19 je 0x3b`
- `0x402650` AudioChannel::ActivatePlay — orig `+19 je 0x40268d` vs ours `+19 je 0x31`
- `0x404e70` AudioStream::CleanupChannels — orig `+12 je 0x404fbe` vs ours `+12 je 0x15c`
- `0x405c00` AudioFileClass::Release — orig `+19 je 0x405d31` vs ours `+19 je 0x136`

### const_fold（650）
- `0x401000` AudioMixer::Init — orig `+30 lea ebx, [esi + 0x50]` vs ours `+30 lea ebx, [esi + 0x4d]`
- `0x4019a0` CCFileClass::Destru_vt00 — orig `+3 lea ecx, [esi + 0x58]` vs ours `+3 lea ecx, [esi + 0x160]`
- `0x402220` ObjectClass::Cleanup — orig `+6 mov ebp, dword ptr [esi + 0xac]` vs ours `+6 mov ebp, dword ptr [esi + 0xa8]`
- `0x402720` Audio::GetChannelStatus — orig `+3 test byte ptr [esi + 0xa4], 5` vs ours `+3 test byte ptr [esi + 0x1a0], 5`
- `0x402c70` CreateAudioChannel — orig `+16 mov dword ptr [esp + 0x14], ecx` vs ours `+16 mov dword ptr [esp + 0x18], ecx`

### extern_reloc（427）
- `0x403ed0` sub_403ED0 — orig `+16 mov ecx, 0x87e250` vs ours `+16 mov ecx, dword ptr [0]`
- `0x405140` sub_405140 — orig `+9 fld dword ptr [0x7e1748]` vs ours `+9 fld qword ptr [0]`
- `0x405d40` AudioController::Stop — orig `+1 mov eax, ecx` vs ours `+1 mov edx, dword ptr [0]`
- `0x405e80` sub_405E80 — orig `+1 mov eax, ecx` vs ours `+1 mov eax, dword ptr [0]`
- `0x407000` Audio::IsSoundEnabled — orig `+0 mov ecx, dword ptr [0x87e728]` vs ours `+0 mov ecx, dword ptr [0]`

### branch_order（405）
- `0x4047b0` AudioStream::SelectRandom — orig `+21 je 0x4048a7` vs ours `+21 jne 0x1b`
- `0x404d80` Audio::ReleaseChannelRefs — orig `+14 jle 0x404dbd` vs ours `+14 jg 0x19`
- `0x404e20` PollNextAudioQueue — orig `+18 jle 0x404e58` vs ours `+18 jle 0x45`
- `0x405ac0` sub_405AC0 — orig `+27 jae 0x405aec` vs ours `+27 jb 0x54`
- `0x407520` LinkedList_flat::Next — orig `+4 jne 0x407527` vs ours `+4 je 0xd`

### ret_norm（175）
- `0x407780` sub_407780 — orig `+0 mov eax, dword ptr [0x87e81c]` vs ours `+0 mov al, byte ptr [0x8c]`
- `0x408410` sub_408410 — orig `+0 mov eax, dword ptr [0x87e81c]` vs ours `+0 mov al, byte ptr [0x8c]`
- `0x40cca0` VectorClass_ptr_IsometricTileClass::GetPtrOffset — orig `+0 mov al, byte ptr [ecx + 0xc]` vs ours `+0 mov eax, dword ptr [ecx + 0xc]`
- `0x40da20` sub_40DA20 — orig `+17 mov dword ptr [0x886fa4], eax` vs ours `+17 mov byte ptr [0], al`
- `0x4105a0` AbstractClass::COMStub_8 — orig `+0 mov al, byte ptr [esp + 4]` vs ours `+0 push ecx`

### width_mismatch（147）
- `0x4081a0` AudioQueue::HaltVoices — orig `+0 mov eax, dword ptr [0x87e81c]` vs ours `+0 mov cl, byte ptr [0x8c]`
- `0x408270` AudioQueue::ReleaseBuffers — orig `+0 mov eax, dword ptr [0x87e81c]` vs ours `+0 mov cl, byte ptr [0x8c]`
- `0x4082f0` ProcessAudioTimer — orig `+0 mov eax, dword ptr [0x87e81c]` vs ours `+0 mov cl, byte ptr [0x8c]`
- `0x40b270` VectorClass::Cleanup5 — orig `+6 mov eax, dword ptr [esi + 4]` vs ours `+6 cmp word ptr [esi + 4], bx`
- `0x40b2e0` VectorClass::GetCapacity — orig `+12 mov eax, dword ptr [esp + 4]` vs ours `+12 movsx ecx, word ptr [ecx + 4]`

### cc_mismatch（144）
- `0x40afd0` Array::ForEachReverse — orig `+0 mov eax, dword ptr [esp + 0xc]` vs ours `+0 mov edx, dword ptr [esp + 8]`
- `0x410220` AbstractClass::GetVtable3 — orig `+7 ret 4` vs ours `+7 ret 8`
- `0x412a40` Slider::CalcPosition — orig `+0 mov ecx, dword ptr [esp + 4]` vs ours `+0 mov ecx, dword ptr [esp + 8]`
- `0x413490` nullsub_3 — orig `+0 ret 4` vs ours `+0 ret `
- `0x414a10` nullsub_71 — orig `+0 ret 8` vs ours `+0 ret `

### eval_order（99）
- `0x401640` AudioIndex::GetSampleInformation — orig `+0 mov ecx, dword ptr [ecx]` vs ours `+0 mov eax, dword ptr [esp + 4]`
- `0x4038a0` AudioStream::ResetChannel — orig `+4 mov dword ptr [ecx + 8], eax` vs ours `+4 mov edx, dword ptr [esp + 8]`
- `0x4038c0` AudioStream::ResetChannel2 — orig `+4 mov dword ptr [ecx + 0x20], eax` vs ours `+4 mov edx, dword ptr [esp + 8]`
- `0x4061d0` AudioMixer::PlayBuffer — orig `+0 mov eax, dword ptr [ecx + 0x1c]` vs ours `+0 mov ecx, dword ptr [esp + 4]`
- `0x408ee0` BufferedAudioStreamRead — orig `+9 mov ebp, ecx` vs ours `+9 mov dword ptr [esp + 0x14], edx`

### signedness（91）
- `0x420140` CreateFractalNoise — orig `+18 jle 0x42016e` vs ours `+18 jbe 0x58`
- `0x422b80` TerrainClass::ClearAnimationLinkFlags — orig `+13 jle 0x422bb0` vs ours `+13 jbe 0x30`
- `0x465cc0` BulletTypeClass::ReadTrailerAnim — orig `+13 jle 0x465d29` vs ours `+13 jbe 0x73`
- `0x46b280` BulletClass::InitScalable — orig `+14 jl 0x46b2be` vs ours `+14 jb 0x3e`
- `0x46cc90` CampaignSelect::LookupByName — orig `+13 jle 0x46ccc2` vs ours `+13 ja 0x15`

## 推荐顺序（ROI）

1. **extern_reloc 427（tooling）**：先 50 件核对是否测量假阴性；若是，修 diffasm reloc 键映射（零代码风险，收益最大）。
2. **const_fold 650**：按 cls（mem_disp/stack_slot/shape）分桶，数据符号折零并入 extern_reloc 族。
3. **branch_polarity 989**：按 jcc 目标 INTRA 偏移聚类，找块布局规则（注意：方向极性已落地，勿重复）。
4. **cc_mismatch 144 / ret_norm 175 / width_mismatch 147 / signedness 91**：各自窄规则候选。
5. **codegen_shape 3,311 + regalloc 1,731 + frame_sched 942（65.7%）**：长尾，暂不投入。

## 纪律

- 规则级单根因；门禁 OK 20 全 MATCH + NG 40 全可编译 + canonical 全池 A/B 同批单同序。
- 已证伪勿重跑：语句/常量/循环等价改写（0 命中）；byte-carrier m_N（gained 0）；C2440 R11 宽改（红线回归 0x4035b0，已回退）。

## extern_reloc 核对结论（2026-11-18，重启恢复后补测）

50 件抽样（ours/orig bytes_hex + relocs 对比）：
- `len_diff` **45/50**（真实代码尺寸差异，如 202 vs 211、312 vs 330）——代码gen 差异，非 reloc 键问题
- `diff_outside_reloc` 2/50
- `diff_inside_reloc_only` 3/50（6% —— 即便全按符号键修正，上限极小）

**裁决：extern_reloc 不是测量侧假阴性族，W1（diffasm reloc 符号键映射）ROI 不成立，勿立项。**
该族并入长尾（真实差异），后续需逐件 IDA 取证。
