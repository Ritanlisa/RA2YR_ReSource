# report_win32 — era_types.h Win32 ABI 结构补全（CF −6 / 0 损失）

日期：2026-11-18（重启恢复后）｜轨道：DECOMP type-supply

## 根因（实证）
CF 族谱 C2039（180 件）中有一组纯 **Win32 ABI 类型供给缺口**：
`era_types.h` 把这些平台结构声明成无字段的占位块——
`struct _WIN32_FIND_DATAA { unsigned char __pad[320]; };`
`struct sockaddr { unsigned char __pad[16]; };`
body 访问 `.dwFileAttributes` / `.sa_family` / `.sa_data` → C2039。

## 修复（size-preserving）
- `_WIN32_FIND_DATAA`：补全真实 Win32 布局（dwFileAttributes / 3×FILETIME /
  nFileSizeHigh/Low / dwReserved0/1 / cFileName[260] / cAlternateFileName[14] /
  __tail_pad[2]），**sizeof 保持 320**（与旧 __pad 一致）。
- `sockaddr`：`unsigned short sa_family; char sa_data[14];`，**sizeof 保持 16**。
- `_WIN32_FIND_DATAW` 未动（无 C2039 证据，避免无谓布局变更）。

## 验证
- 10 件 C2039 样本：**6 件 CF→可编译**（另 4 件转其他族首错：C2660 ×1、C2059 ×2、C2039 q3F074 ×1）。
- OK 对照 20：**20/20 MATCH**；NG 回归 40：40/40 可编译（CF=0）。
- **canonical 全池 A/B（同批单同序 955 parts）**：
  - COMPILE_FAIL **3,038 → 3,032（−6）**；CF 新增 **0**；OK 6,550 不变（0 得 0 失）。
  - 6 件转化：0x47af70 FileClass::FindFirstWithCD / 0x47b0c0 FileFind::Next /
    0x52cb90 Credits::Screen / 0x530000 ObjectClass::LoadExpansionMixFiles /
    0x559c20 LoadOptions::Check / 0x7b0dd0 IPXInterfaceClass::initSocket。

## 结论
平台 ABI 真值补全（非发明），size 不变、零回归；CF −6。剩余 C2039（TurnRate 15 /
Piggybackee 7 / m000 6 等）属成员供给族，需独立规则。
