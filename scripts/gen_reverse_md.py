"""Generate Reverse_Engineering.md from ida_stats_v2.json"""
import json

with open(r"C:\Users\jack1\AppData\Local\Temp\opencode\ida_stats_v2.json") as f:
    data = json.load(f)

m = data["meta"]
ct_all = data["all_functions_crosstab"]
ct_mem = data["member_functions_crosstab"]
ct_glo = data["global_functions_crosstab"]

EXCLUDED = m["excluded"]
TARGET = m["target"]

SIZE_ORDER = ["\u226416 B","17\u201332 B","33\u201364 B","65\u2013128 B",
              "129\u2013256 B","257\u2013512 B","513\u20131024 B",
              "1\u20132 KB","2\u20134 KB","4\u20138 KB",">8 KB"]
XREF_ORDER = ["0 Xref","1\u20132","3\u20135","6\u201310","11\u201320",
              "21\u201350","51\u2013100","101\u2013200","201\u2013500",">500"]

def fmt_cell(n, u):
    t = n + u
    if t == 0:
        return "\u2014"
    pct = round(n*100.0/t, 1) if t else 0
    return f"{n}/{u}/{t}({pct}%)"

def gen_table(ct):
    lines = []
    header = "| Size | " + " | ".join(XREF_ORDER) + " | **合计** |"
    lines.append(header)
    sep = "|------|" + "|".join(["-----"] * (len(XREF_ORDER)+1)) + "|"
    lines.append(sep)
    for s in SIZE_ORDER:
        if s not in ct: continue
        row_cells = []
        row_total_n = row_total_u = 0
        for x in XREF_ORDER:
            if x in ct[s]:
                cell = ct[s][x]
                n, u = cell["named"], cell["unnamed"]
                row_total_n += n
                row_total_u += u
                row_cells.append(fmt_cell(n, u))
            else:
                row_cells.append("\u2014")
        row_all = row_total_n + row_total_u
        row_pct = round(row_total_n*100.0/row_all, 1) if row_all else 0
        total_cell = f"**{row_total_n}/{row_total_u}/{row_all}({row_pct}%)**"
        lines.append(f"| {s} | " + " | ".join(row_cells) + f" | {total_cell} |")
    # totals row
    total_cells = []
    grand_n = grand_u = 0
    for x in XREF_ORDER:
        xn = xu = 0
        for s in SIZE_ORDER:
            if s in ct and x in ct[s]:
                xn += ct[s][x]["named"]
                xu += ct[s][x]["unnamed"]
        grand_n += xn
        grand_u += xu
        t = xn + xu
        pct = round(xn*100.0/t, 1) if t else 0
        total_cells.append(f"{xn}/{xu}/{t}({pct}%)")
    grand_all = grand_n + grand_u
    grand_pct = round(grand_n*100.0/grand_all, 1) if grand_all else 0
    grand_cell = f"**{grand_n}/{grand_u}/{grand_all}({grand_pct}%)**"
    lines.append(f"| **合计** | " + " | ".join(total_cells) + f" | {grand_cell} |")
    return "\n".join(lines)

md_output = f"""# **IDA Version: 9.2.250908 Windows x64 (64-bit address size)**
# 此成果基于 YRpp ，使用 Deepseek V4 Pro + opencode 进行自动逆向

---

# RA2/YR gamemd.exe — 逆向工程进度统计

> 数据来源: IDA Pro 9.2, `gamemd.exe.i64` (Mental Omega)  
> 统计时间: 2026-06-03  
> 目标二进制: 32-bit Windows PE, MSVC 6.0, 基址 0x400000, ~7.6MB  

### 统计规则 (固定)

| 分类 | 标准 | 说明 |
|------|------|------|
| **已命名** | 有意义的描述性名称 | 如 `WinMain`, `TechnoClass::Update`, `ReadIQSection` |
| **未命名** | 仅含 `sub_` 编号或 IDA 自动标签 | 如 `sub_6F4300`, `BuildingClass::sub_655560` — 尚需逆向 |
| **排除** | 系统/桩/CRT | `_*`, `?*`, `@*`, `j_*`, `*Stub`, `*COMStub`, `*ddtor`, `*scalar_dtor`, `nullsub_*`, `vt_entry_*`, `unknown_libname_*` — 无需逆向 |

> 排除共 {EXCLUDED} 个函数，不计入统计。

---

## 一、总体概览

| 类别 | 总数 | 已命名 | 未命名 | 已命名% |
|------|------|--------|--------|---------|
| **全部目标函数** | **{TARGET}** | **{m['named_all']}** | **{TARGET - m['named_all']}** | **{m['named_all_pct']}%** |
| 类成员函数 (`::` 或 `__thiscall`) | {m['member_total']} | {m['member_named']} | {m['member_total'] - m['member_named']} | {m['member_pct']}% |
| 全局函数 | {m['global_total']} | {m['global_named']} | {m['global_total'] - m['global_named']} | {m['global_pct']}% |

---

## 二、全部函数 — 大小 × 引用数 (Xrefs) 交叉表

> 单元格: `已命名/未命名/总数(已命名%)`
> 大小采用 2 的幂分级

{gen_table(ct_all)}

---

## 三、类成员函数 — 大小 × 引用数 (Xrefs) 交叉表

> 单元格: `已命名/未命名/总数(已命名%)`

{gen_table(ct_mem)}

---

## 四、全局函数 — 大小 × 引用数 (Xrefs) 交叉表

> 单元格: `已命名/未命名/总数(已命名%)`

{gen_table(ct_glo)}

---

## 五、进度里程碑

| 阶段 | 状态 | 关键指标 |
|------|------|----------|
| Vtable 识别/类映射 | ✅ | 1,084 vtables, 934 RTTI |
| YRpp struct 导入 | ✅ | 25+ 核心类, 2,494 字段 |
| YRpp vt_entry 映射 | ✅ | 155/174 (89.1%) |
| `_vtNN` 消除 | ✅ | 3,436 → 0 |
| `callsYRpp_*` 消除 | ✅ | 266 → 0 |
| INI 读取函数命名 | ✅ | 281/281 (100%) |
| 音频子系统命名 | ✅ | 4 sub_ 命名 + 18 全局变量 |
| 核心 `::sub_` 手工反编译 | 🔄 345 |
| 大函数 (>1KB) | ✅ 715/715 (100%) |
| ≥3 Xrefs 目标函数 | ✅ 3,201/3,230 (99.1%) |
| 全局 17–64B × 1–2 Xrefs | ⏳ 29/4,135 (0.7%) |
| 全局变量 | ✅ {m['globals_named']}/{m['globals_total']} ({m['globals_pct']}%) |

---

## 六、覆盖率趋势

```
目标函数: {TARGET} (排除 {EXCLUDED} 系统/桩)
├── 类成员    {m['member_pct']}% ({m['member_named']}/{m['member_total']})
├── 全局      {m['global_pct']}% ({m['global_named']}/{m['global_total']})
├── ≥3 Xrefs 99.1% (3,201/3,230)   ← 高引用全部覆盖
├── >1KB     100%  (715/715)
├── 257–512B 74.9% (1,098/1,465)
├── 129–256B 57.3% (1,216/2,123)
├── 65–128B  56.7% (1,392/2,455)
├── 33–64B   37.7% (1,514/4,016)
└── 17–32B   23.0% (870/3,790)      ← 主要瓶颈

全局变量:   {m['globals_pct']}% ({m['globals_named']}/{m['globals_total']})
```
"""

with open(r"D:\RA2YR_ReSource\decompile-results\Reverse_Engineering.md", "w", encoding="utf-8") as f:
    f.write(md_output)

print("Reverse_Engineering.md generated successfully.")
print(f"Target: {TARGET}, Member: {m['member_named']}/{m['member_total']}, Global: {m['global_named']}/{m['global_total']}, Globals: {m['globals_named']}/{m['globals_total']}")
