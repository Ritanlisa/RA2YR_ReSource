# RA2YR ReSource

从 `gamemd.exe` 逆向工程重建《红色警戒2/尤里的复仇》C++ 源码。

## 项目状态

这是 Red Alert 2: Yuri's Revenge 游戏引擎 `gamemd.exe` 的逆向重构项目。目标是对 7.6MB 的 32 位 Windows PE 进行完整反编译，该 PE 由 MSVC 6.0 编译，包含 19,059 个函数，分布于 1,120 个类中。

当前输出为静态库 `gamemd_core` + 可执行文件 `gamemd.exe`，使用 CMake + C++20 编译。长期目标是产出可直接替换原版的独立引擎，并逐步进行现代化重构。

## 架构概述

```
RA2/YR (gamemd.exe)
├── 19,059 函数（分布于 1,120 个类，235 个源文件）
├── AbstractClass 基类（4 vtable，多重继承 COM 层）
├── ObjectClass → MissionClass → RadioClass → TechnoClass → FootClass
├── 类型/实例双重层次（TypeClass 原型模式）
├── COM 接口层（INoticeSink/Source 已通过 RTTI 确认）
└── 通过 Ares/Phobos, 基于 Syringe 通过 DLL 注入对 RA2/YR 进行纯功能扩展
```

## 四重参考源方法论

| 来源 | 用途 | 局限 |
|------|------|------|
| **RA1 源码**（CnC_Red_Alert/CODE/）| 框架/架构模板：类继承链、Mission 状态机、TARGET 编码 | RA2 偏移不同，含 MI/COM 层 |
| **YRpp**（~150 头文件）| 运行时验证的成员偏移和 vtable 索引 | 声明层，无函数体 |
| **IDA Pro**（gamemd.exe MCP）| 二进制级验证：构造函数分析、调用图、全局变量 | 伪代码可能有误 |
| **cnc-ddraw**（./cnc-ddraw）| DirectDraw 接口参考与调试验证兼容层 | Phase 2 将替换为现代渲染引擎 |

## 当前代码结构

```
RA2YR_ReSource/
├── src/                     ← ~130 .hpp + 85 .cpp 源文件（20 个子目录）
│   ├── core/                # 枚举、数学、内存、向量、TARGET、坐标
│   ├── object/              # AbstractClass → ObjectClass → FootClass
│   ├── type/                # 类型系统（原型模式）
│   ├── entity/              # 动画、弹道、粒子、覆盖层等
│   ├── structure/           # 步兵、单位、飞行器、建筑
│   ├── house/               # 子阵营、子阵营类型、阵营
│   |                        # ↑ House = 子阵营, Side = 阵营, 每个阵营包含1个及以上的子阵营
│   ├── system/              # 单元格、地图、场景、工厂
│   ├── render/              # DSurface、BINK、SHP、调色板、文字
│   ├── ui/                  # Gadget、Dialog、Command、Sidebar、Mouse
│   ├── misc/                # 音频、移动、规则、超级武器
│   ├── network/             # Winsock、会话、多人游戏
│   └── team/                # 小队、触发器、脚本、战役
├── app/                     ← EXE 入口点 (WinMain + 游戏循环 + DDraw初始化)
├── CMakeLists.txt           # C++20, Win32 静态库 + 可执行文件
└── LICENSE.md               # GPL v3（继承自 CnC_Red_Alert）
```

## 构建

```bash
cmake -B build -G "Visual Studio 17 2022" -A Win32
cmake --build build --config Debug
```

编译状态：235 个源文件可编译（~130 .hpp + 85 .cpp），总代码行数 ~53,600（头文件 ~39,200 + 源文件 ~14,400），无错误与警告。

## RA1 结构对齐进度

| 已完成 | 未完成 |
|--------|--------|
| CellClass → 移除 AbstractClass 继承，改为独立类 | AbstractClass 4 COM 接口中 IPersistStream/IRTTITypeInfo 仍存疑（YRpp 推测，非 RTTI 确认） |
| HouseClass → 删除多余虚函数重写 | TechnoClass MI 混入类（Flasher/Stage/Cargo/Door）未确认 RA2 是嵌入还是 MI |
| AbstractClass → 纯虚函数改为非纯虚默认实现 | DriveClass 层未 IDA 验证（RA1 在 FootClass→UnitClass 之间是否被 ILocomotion 完全取代） |
| TechnoClass → 语音/绘制/查询 18 个函数去虚拟化 | Mission AI 分发引擎 switch 逻辑因枚举命名空间冲突暂未完成 |
| TARGET 编码系统（`core/target.hpp`） | — |
| COORDINATE/CELL 数学库（含 RA1 sin/cos 表） | — |
| Mission 状态机 28 种 stub（`object/mission.hpp`） | — |
| **1,120 个 IDA 类的成员变量全部解析（0 unknown_）** | — |

## 下阶段工作计划

详见 `AGENTS.md`，按依赖顺序分为五阶段：

1. **构建完整类结构**（1,120 个类全部完成 header 定义，成员变量 0 unknown_）
2. **构建完整类结构**（对齐 RA1 命名，验证 sizeof）
3. **根据 IDA 伪代码重写关键函数**（ObjectClass::Put、FootClass::MovementAI 等）
4. **统一处理编译错误**（先修 object.hpp 前向声明→消除~1900连锁错误→逐一清完）
5. **动态执行调试**（编译为 EXE，搭配 cnc-ddraw 兼容层运行，与原版对比验证）

## 许可证

继承自 CnC_Red_Alert——GNU General Public License v3.0，含 Electronic Arts 附加条款（第 7 条）。

## 致谢

- **Westwood Studios** — 创作了原版《Command & Conquer》系列游戏
- **Electronic Arts** — 在 GPL v3 下开源了 CnC_Red_Alert 源码
- **Mentalmeisters** — 创作了 Mental Omega mod
- **FunkyFr3sh/cnc-ddraw** — DirectDraw 兼容层，作为渲染接口逆向参考与调试运行时
- **YRpp 项目** — DLL 注入逆向工程参考

## 钩子对拍系统 (Hook Shadow Execution)

位于 `injectFunctionTest/`。通过 Syringe 注入 hook_dll.dll，在运行时对比 RE 版本与原版函数的执行结果。

**当前状态**: 12 Capture + 1 Replace + 29 None 标记。Replace 模式 SetPixel 稳定运行 (idempotent=true 跳过事务)。Inject 模式基础设施就绪 (g_re_depth gate, 线程过滤, VEH 修复)。

详见 [HOOK_SYSTEM_REVIEW.md](HOOK_SYSTEM_REVIEW.md)。
