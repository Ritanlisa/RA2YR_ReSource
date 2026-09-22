# AutoLoad 手册（结论版）

> 只记"改代码 / 部署 / 排错时必须知道的结论"。过程性排查、已取代的旧方案、
> 版本断代史一律不记。实现以 `src/AutoLoad.c` 为准，本文件只解释"为什么这样写"。

源码布局：`src/AutoLoad.c`（单文件全部逻辑）、`dist/`（发布构建 + `AutoLoad.ini`
样例）、`tools/mingw`（构建链）、`tools/out/ares_hooks.txt`（Ares 钩子清单）。

---

## 1. 部署与加载（双环境，行为不同）

- DLL 通过 Syringe 挂到引擎每帧函数（`0x55D360`，5 字节钩子）上工作；
  钩子声明内嵌在 PE 段 `.syhks00`（段名必须 8 字节精确，16 字节一条
  `{hookAddr, hookSize, 导出名指针, 0}`），**不需要 `.inj` 文件**。
- `G:\motest`：经典 Syringe，无 `-i` 参数，扫描全目录自动发现 DLL。
- `G:\Red Alert 2`（CnCNet 客户端）：`SyringeEx` 只加载 `-i=` 名单里的 DLL，
  名单在 `Resources\ClientDefinitions.ini` 的 `ExtraCommandLineParams` 行，
  部署必须追加 `-i=AutoLoad.dll`，否则 DLL 一行代码都不会执行
  （表现为连 `AutoLoad.log` 都没有）。
- 同一客户端启动的是 `gamemd-spawn.exe` 而非 `gamemd.exe`，帧钩里的宿主兜底
  必须两种名都认。两者基址/大小/时间戳（`0x3BDF544E`）相同、关键地址字节级
  一致，硬编码地址通用；**不校验 exeCRC**（重打包变体 CRC 不同但映像一致）。

## 2. 联机安全与事件布局（核心约束）

- 装车走引擎标准事件管线：`QueueMegaMission (0x646E90, fastcall)`，
  `ECX=mission(7=Enter)`、`EDX=&TargetTC`、栈上 `Whom(byval 8字节)` + `&DestTC`，
  返回 AL=是否入队。事件经 `OutList (0xA802C8)` 广播，所有机器按帧执行。
- 事件里的单位引用是 `TargetClass {ID, RTTI}`（5 字节 pack(1)），不是裸指针，
  所以跨机器可序列化；构造的 Enter 事件与玩家右键载具产生的**字节级同构**，
  不可能造成不同步。满了则丢弃（返回 0），下帧续传。
- 真实 Enter 事件布局（对照 FootClass::Active_Click_With 点载具分支确认）：
  `Mission=7, Target={0,0}空, Destination=TC(载具对象), Follow={0,0}`。
  两条铁律，违反必现对应故障：
  - 载具**必须放 Destination**：放 Target 会进 `SetTarCom`（攻击目标槽），
    步兵开火打自家载具。
  - Destination **必须给载具对象**：给格子会被 `0x40DD70` 判 NULL，
    步兵走到格旁就放弃（Area_Guard）。
- 变体选择（Ctrl+T）只调本地 `Select` 改选中状态，不写 `OutList`，
  与原生 T 键一致，联机安全。

## 3. 地址 / 偏移速查

| 用途 | 地址 / 偏移 |
|---|---|
| 每帧钩子 | `0x55D360`（5 字节） |
| 下发事件 | `0x646E90` QueueMegaMission；`0x6E6AB0` 由对象取 TargetClass |
| 选中列表 | Items `0xA8ECBC`，Count `0xA8ECC8` |
| 对象坐标（lepton） | `[obj+0x9C]`（XY 各 4 字节，距离比较只用平面） |
| 身份判定 | `[obj+0]` 主虚表：步兵 `0x7EB058` / 载具 `0x7F5C70` / 建筑 `0x7E3EBC` / 飞行器 `0x7E22A4` |
| 类型指针 | 步兵 `[obj+0x6C0]` / 载具 `[obj+0x6C4]` / 建筑 `[obj+0x520]` / 飞行器 `[obj+0x6C4]` |
| 容量 / 已占 | 容量 `[type+0x5E0]`（int）；已占槽数调 `0x473460`（`ecx=trn+0x114`），= Σ乘客 `Size`（`[type+0x380]` double，逐个 FTOL），**不要读 `[trn+0x114]`（那是乘客个数）** |
| 装载等级 | `[type+0x388]` SizeLimit（double）；判据与引擎一致：`used+Size<=容量 且 Size<=SizeLimit`；`<1.0` 的载具谁也进不来 |
| T 键判定复用 | `0x732580`（归属/可选中）、`0x7342C0`（存活）；`Select` = `vtbl+0x14C` |
| 同屏候选 | Tactical 实例 `[0x887324]`，数量 `+0xDB0`，数组 `0xB0CEC8`（每项 12 字节，+0=对象） |
| 全图候选 | Techno Array Items `0xA8EC7C`，Count `0xA8EC88` |
| IFV 变体 | 类型 `Gunner+0x805`（byte）、`WeaponCount+0x80C`、ID 字符串 `+0x24`（仅日志）；对象当前武器序号 `[obj+0x138]` |
| 武器解析 | **必须调 accessor `0x7177C0`**（`ecx=类型, idx` 入栈，返回 WeaponStruct*，+0 即实际武器指针）。Ares 接管了 18+ 槽位存储，直接按 `type+0x898+idx*0x1C` 计算只对 `idx<18` 有效，更大会读到垃圾并分出幻影组。该 accessor 只给普通武器，天然忽略 Elite（符合需求） |
| Ares NoManualUnload | `ares.dll` 在才可信：`ext=*(type+0x2FC)`，`NoManualUnload=*(byte)(ext+0x4C5)`（Ares 读取点 `0x10049E70`；若 Ares 升级先复查此式） |

## 4. 装载算法（最终规则）

输入：当前选中里的步兵 + 地面载具（乘客）与有容量载具（运输方）。
口诀：**分组 → 组内就近排队 → 组间轮流 → 按四级规则选车**。

1. **收集**：乘客 = 非飞行步兵 + 非飞行地面载具（占位 `cost=FTOL(Size)`，
   保底 1）；运输方 = 容量 >0 且 `SizeLimit>=1` 的载具，空位
   `= 容量 − 已占 − 本轮已用预算`。预算表跨帧累加（载具的 used 计数要等
   乘客真钻进去才涨，不记账会超发）。
2. **范围过滤**：只留 30 格内（相对任一选中乘客）的运输方。
3. **分组**：按类型指针分组（首次出现顺序），类型内保持选中顺序。
4. **组内就近**：按（到最近可进载具的距离，选中顺序）重排，
   超员时近者先得；无可进载具者 key=INF 排最后。
5. **组间轮流 + 选车**：每轮每组派一个成员占座。选车四级：
   **同类型已分最少 → 总已分配最少 → 距离最近 → 选中顺序**。
   第一级保证同类铺开（如 5 反 + 5 光 + 10 守卫争 5 辆×4 座必得每车 1+1+2，
   与站位无关）；后三级保总数均衡与就近。选满/`OutList` 满（每帧 ≤96 条）
   即停，满则下帧续传（靠已办名单 + 预算去重）。
6. **整组判死**：同类型成员 cost 相同、可进集合相同，一旦某成员无车可进，
   整组退出（余量只减不增，后面的同样进不去），避免空转。
7. **结束**：全部办完 → 完成；有剩余但本帧零下发 → 范围内无空位，结束；
   队列满 → 保持，下帧继续。

## 5. 过滤规则

- **飞行**：按**类型**上的 Locomotor GUID（`[type+0x34C]`，16 字节）判定，
  命中 Rocket（全部 MO 飞行步兵）或 Jumpjet（兼容原版）即跳过。
  不要用运行时运动器虚表（实测不可靠）。
- **NoManualUnload**（清道夫 TRACTOR 等）：**只在收集运输方时跳过**
  （不可被进入），它自己仍可当乘客进运输船（规则只约束被进入/卸载）。
- **载具乘客**：只进 Unit 型运输载具（不进建筑/飞行器）；本轮已当运输工具
  的载具不再当乘客。

## 6. 变体选择（Ctrl+T）

- 需求：Gunner 载具（FV/AMC/TRACTOR/STING 等）同注册名下有多种实际武器，
  原生 T 键全选会混在一起。按**（类型指针，当前普通武器实际指针）**
  过滤加选：`Weapon2` 与 `Weapon10` 指向同一实际武器视为同一种；
  非 Gunner 退化为纯类型选择。
- 参照 = 当前选中里的（类型，武器）组合去重；序号越界回落 0（即 Weapon1，
  与引擎一致）；单击同屏、500ms 内双击全图（对齐原生 T 键窗口）。

## 7. 构建

```bat
set PATH=G:\motest\AutoLoadDev\tools\mingw\mingw32\bin;%PATH%
gcc -O2 -Wall -Wextra -ffreestanding -shared -o dist/AutoLoad.dll src/AutoLoad.c ^
  -nostdlib -lkernel32 -luser32 -lgdi32 -lgcc ^
  -Wl,--enable-stdcall-fixup -Wl,--entry,DllMain
:: nolog 版加 -DAUTOLOAD_NOLOG（无任何文件 I/O，输出 dist/AutoLoad_nolog.dll）
```
（目录职责见根目录 `目录规范.md`：构建直出 `dist/`，调试中间物进 `build/`，
实验文件进 `test/`，三者不混用。）

- `-nostdlib` 无 CRT：源码自带字节版 `memcpy`/`memset`（GCC 会把数组搬移
  习语优化成库调用，没有自带实现就链接失败）；`-ffreestanding` 让 GCC
  不再主动生成此类调用；`-lgcc` 必需（大栈帧触发 `__chkstk_ms`）。
- 构建后必查：`objdump -h` 有 `.syhks00` 段，`objdump -p` 有
  `SyringeHandshake` + `AutoLoad_FrameHook` 两个导出。
- 构建产物同步到 `dist/`（`AutoLoad.dll` 带日志版先行验证，
  稳定后再换 nolog 版）。

## 8. 日志速查（带日志版，游戏目录 `AutoLoad.log`）

- `config: hotkey = … / variant hotkey = …`：实际生效键（文件缺失即默认）。
- `group N type=…` + `  #序号 obj=… d2cells=…`：组内就近顺序（距离平方/格²，
  `NO TRANSPORT` = 无可进载具）。
- `queue enter: unit=… -> trn=… cost=… tSame=… dist=…`：下发记录；
  `tSame` = 该车接完后车上同类数（理想分配里小类型应全是 1）；
  `dist` = 与所选车的距离（`>>8`，单调）。
- `group out of slots …`：某类型无车可进，整组剩余落选（正常超员现象）。
- `frame result: events queued=… units remaining=…` → `auto-load pass COMPLETE`
  / `ENDED, leftover units=… (no slots in range)`。
- `variant-select: refs=… scope=SCREEN/MAP` + `refN: type=… cur=a/b wpn=…` +
  `group: type=… wpn=… n=… MATCHED`：变体选择的参照与候选直方图
  （组数应等于实际武器数，`MATCHED` = 命中本次参照）。

## 9. 热键配置（DLL 同目录 `AutoLoad.ini`）

```ini
[AutoLoad]
Hotkey=Ctrl+D
VariantHotkey=Ctrl+T
```

语法：`[Ctrl+][Alt+][Shift+][Win+]主键`，主键 A-Z/0-9/F1-F24/方向键等，
大小写不敏感；`None` 禁用；非法值回落默认并写日志。缺文件即默认值。
