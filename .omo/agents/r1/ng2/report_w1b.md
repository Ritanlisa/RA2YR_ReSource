# report_w1b — diffasm reloc 归一对称性修复（+3 OK / 0 损失）

日期：2026-11-18（重启恢复后）｜轨道：DECOMP measurement（diffasm）

## 根因（实证）
`0x40bd70 sub_40BD70`：伪码 `return atexit(sub_40BDA0);`，obj 产出
`push <DIR32 reloc sub_40BDA0>`，原版 exe 为 `push 0x40BDA0`。
diffasm 对**非 call/jump 的 code 地址立即数**只归一侧：
- obj 侧：DIR32 reloc key → `data_ref_canon` → `DATA:...`
- orig 侧：仅 `_in_data(val)` 才归一（code 地址不是 data）→ 保持原始 `push 0x40bda0`

两侧命名空间不对称 → 假 MISMATCH（const_fold/extern_reloc 族的首差形态）。

## 修复（两处，均 measurement 侧、零 codegen 影响）
1. `Side.normalize()` CS_OP_IMM 分支：orig 侧补 code 地址归一——
   `val in _func_map_cache` → `key = "DATA:0x%X" % val`（按 VA 身份，与 obj 侧同命名空间）。
2. `_IDA_PLATE_KEY` 扩展 `sub_`/`loc_`（原 regex 只有
   stru|dword|word|byte|qword|flt|dbl|unk|off）→ `data_key_canon("sub_40BDA0")`
   解析为 `0x40BDA0`，obj 侧键 `DATA:sub_40BDA0` → `DATA:0x40BDA0` 双侧一致。

## 验证
- 单点 0x40bd70：reloc 站点全部归一一致（`push DATA:0x40BDA0` 双侧相同），
  仅剩尾部 `pop ecx` vs `add esp,4`（真实 codegen shape 差，非本修复范围）→ 仍 MISMATCH（诚实）。
- OK 对照 20：**20/20 MATCH**；NG 回归 40：40/40 可编译（CF=0）。
- **canonical 全池 A/B（同批单同序 955 parts）：OK 6,547 → 6,550 = gained 3 / LOST 0**
  （0x6a4ce0 / 0x6a4dc0 / 0x6cfba0）。

## 结论
- 该修复修正了测量层的命名空间不对称（sound：按 VA 身份比较）；净收益 +3、零损失。
- extern_reloc 族 50 件抽样中 45 件为真实长度差（另案已证），本修复只覆盖"同形异址"子集。
- 0x40bd70 一类剩余差异 = `pop ecx` vs `add esp,4` 的真实代码形状差，属 codegen_shape。
