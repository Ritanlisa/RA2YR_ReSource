# gamemd.exe 完整文件加载流程

> 涵盖 MIX 引导 → INI 加载 → 调色板 → SHP → CSF → 音频 → 所有文件 I/O 链。所有函数/变量名均为 IDA 确认的命名, `→` 表示调用关系, `→` 表示数据流。

---

## 1. 启动配置加载 (WinMain 阶段)

```
WinMain
  └─ ParseCommandLine (0x52F620)
       └─ INIClass::Constructor → RA2MD.INI 读取:
            ├─ [Video] VideoBackBuffer / ScreenWidth / ScreenHeight / AllowModeToggle
            └─ [Network] Socket / DestNet

    语言文件 (WinMain_Setup 中):
      LANGMD.MIX → LANGUAGE.MIX → ra2md.str
        └─ CSFClass::LoadFile (0x7346A0) → "ra2md.csf"
             ├─ 读 24B 头: magic " FSC" + num_labels + num_strings
             ├─ 分配 label 表 (40*N), string offset 表, string data 表
             ├─ File::ParseCSFString → qsort labels 排序
             └─ 语言选择: CSF_Language = 0 (en) ~ 9
```

---

## 2. MIX 文件系统 — 三层引导

### 2.1 MixFileClass::Bootstrap (0x5301A0) — 核心初始化

```
MixFileClass::Bootstrap
  │
  ├── [1] EXPAND: 扫描 EXPANDMD00~99.MIX
  │     for i = 99..0:
  │       sprintf("EXPANDMD%02d.MIX", i)
  │       ↓ RawFileClass::Construct → vtable[20]=IsAvailable?
  │         → YES: MixFileClass::FromFile → 加入 g_MixFilePool
  │         → NO:  跳过
  │
  ├── [2] RA2MD.MIX    → g_MixFile_RA2MD  (0x884DF8)
  ├── [3] RA2.MIX      → g_MixFile_RA2     (0x884DFC)
  ├── [4] CACHEMD.MIX  → g_MixFile_CACHEMD (0x884E48)
  ├── [5] CACHE.MIX    → g_MixFile_CACHE   (0x884E4C)
  ├── [6] LOCALMD.MIX  → g_MixFile_LOCALMD (0x884E50)
  └── [7] LOCAL.MIX    → g_MixFile_LOCAL   (0x884E54)
```

每个 MIX 文件通过 `MixFileClass::FromFile` 构造且加入全局池。

### 2.2 MixFile::LoadAll (0x530460) — 附属 MIX 加载

```
MixFile::LoadAll (InitGame 的 "Init Secondary Mixfiles" 步骤)
  │
  ├── CONQMD.MIX    → g_MixFile_CONQMD   (0x884E38)
  ├── GENERMD.MIX   → g_MixFile_GENERMD  (0x884E18)
  ├── GENERIC.MIX   → g_MixFile_GENERIC  (0x884E14)
  ├── ISOGENMD.MIX  → g_MixFile_ISOGENMD (0x884E28)
  ├── ISOGEN.MIX    → g_MixFile_ISOGEN   (0x884E24)
  ├── CONQUER.MIX   → g_MixFile_CONQUER  (0x884E3C)
  ├── CAMEOMD.MIX   → g_MixFile_CAMEOMD  (0x884E40)
  ├── CAMEO.MIX     → g_MixFile_CAMEO    (0x884E44)
  │
  ├── MAPS:
  │     ├─ -CD 模式: MAPSMD*.MIX → FileClass::FindFirstWithCD → 逐个 FileFind::Next
  │     │     → g_MixFile_MAPSMDFirst (0x884E60) + g_MixFileArray_Maps
  │     │     → 回退: MAPS*.MIX → g_MixFile_MAPSFirst (0x884E64) + g_MixFileArray_Maps
  │     └─ 正常模式: MAPSMD%02d.MIX + MAPS%02d.MIX (CD 编号)
  │
  ├── MULTIMD.MIX   → g_MixFile_MULTIMD  (0x884DD8)
  ├── THEMEMD.MIX / THEME.MIX → g_MixFile_THEME (0x87E738)
  │     └─ 设置 g_ThemeMIXLoaded = 1
  │
  ├── MOVIES:
  │     ├─ -CD 模式: 探测 MIXFILES\MOVIES01.MIX → MOVIES*.MIX → FileFind
  │     │     → g_MixFile_MOVIES (0x884E2C) + g_MixFileArray_Movies
  │     └─ 正常模式: MOVMD%02d.MIX / MOVIES%02d.MIX (CD 编号)
  │
  └── Audio::LoadWAVFiles → 从 g_MixFile_THEME 加载 WAV
```

### 2.3 LoadExpansionMixFiles (0x530000) — 模组扩展

```
LoadExpansionMixFiles (InitGame 中每次调用)
  ├── ECACHE*.MIX → FindFirstFileA → 每个文件:
  │     └── MixFileClass::FromFile → 加入 g_MixFilePool
  └── ELOCAL*.MIX → FindFirstFileA → 每个文件:
        └── MixFileClass::FromFile → 加入 g_MixFilePool
```

引擎启动后加载用户自定义 MIX, **后追加、优先搜索** (遍历 g_MixFilePool 时从尾到头)。

---

## 3. MixFileClass::FromFile — MIX 文件构造器

```
MixFileClass::FromFile (0x5B3C20, 0x28 B 对象)
  │
  ├── CD 检测: CD::Available (dword_81C1D0)
  │
  ├── CCFileClass::Construct(filename)
  │     └─ CCFileClass::Open (vtable[20]=IsAvailable) → FileStraw 包装
  │
  ├── 格式检测:
  │     ├─ 读前 2 字节:
  │     │   ├─ 0x0000 → 扩展格式 (RA2/TS)
  │     │   │     ├─ 读 flags (2B): bit0=校验, bit1=Blowfish 加密
  │     │   │     └─ 加密时: PKStrawClass::Initialize → PKStrawClass::SetSource
  │     │   │           → PKStrawClass::RelayBlowfishKey → 解密
  │     │   └─ ≠0 → TD/RA1 格式 (rewind, 直接读)
  │     │
  │     ├─ 读 header: count (2B) + body_size (4B)
  │     │
  │     └─ 分配索引表: malloc(12 * count) → 读入
  │
  ├── MixFileClass::LinkIntoPool → 链入 g_MixFilePool_Root 链表
  │
  └── 清理 FileStraw → 返回 this
```

---

## 4. 全局文件缓存 — SearchMIXFile

```
SearchMIXFile (0x5B40B0) ← 文件查找的唯一切入点
  │
  ├── _strupr(filename) → Checksummer::Add_Buffer → CRC32 hash
  │
  ├── 哈希表查找: g_FileCacheHashRoot (0xABF00C) — 二叉树
  │     └─ 命中 → 返回缓存数据指针 (跳过磁盘 I/O)
  │
  └── 缓存未命中:
        ├── CCFileClass::Construct(filename) → CCFileClass::Open
        ├── 分支:
        │     ├─ 参数 is_shp 或文件名含 ".SHP":
        │     │     └─ LoadSHPFile (0x69E430) → ShpImage::LoadFromMemory
        │     └─ 否则:
        │           ├─ MIX 池遍历 (g_MixFilePool 从尾到头):
        │           │     └─ MixFileClass[索引 table] → 匹配 CRC32 hash
        │           │         → 提取子文件数据
        │           └─ CCFileClass::ReadEntireFile → 磁盘直接读取
        │
        └─ InsertIntoHashTree → 缓存到二叉树 → 返回指针
```

### MIX 池搜索顺序

```
g_MixFilePool 遍历方向: 从尾到头 (后加载的 MIX 优先级最高)
  ├── ECACHE*.MIX / ELOCAL*.MIX (最后加载, 最先搜索)  ← 模组可覆盖
  ├── LOCAL.MIX / LOCALMD.MIX
  ├── CACHE.MIX / CACHEMD.MIX
  ├── RA2.MIX / RA2MD.MIX
  └── EXPANDMD*.MIX (最先加载, 最后搜索)  ← 原版文件
```

---

## 5. 文件 I/O 基础类

### 5.1 CCFileClass — 通用磁盘文件

```
CCFileClass::Construct (0x4739F0) → 设置文件名
CCFileClass::Open (0x473C50)    → vtable[20]=Exists?, OpenFile→fopen
CCFileClass::Read (0x473B10)    → vtable[36]=fread(data, 1, size, fd)
CCFileClass::ReadEntireFile (0x4A3890) → vtable[44]=GetSize→malloc→fread→返回buffer
CCFileClass::Seek (0x473BA0)    → vtable[?]=fseek

继承链: FileClass → BufferIOFileClass → CCFileClass / RawFileClass
```

### 5.2 FileStraw — 流式读取包装器

```
FileStraw (文件→内存流):
  └─ 包装 CCFileClass, 提供 Read(StreamStraw*, void*, size) 接口

BlowStraw (加密文件→解密流):
  └─ 包装 FileStraw, 内部 Blowfish 解密

PKStrawClass (RSA+Blowfish 加密流):
  ├── PKStrawClass::Initialize (0x633050) → 设置 BlowStraw + RSA key_source
  ├── PKStrawClass::SetSource (0x633110)  → 设置源 FileStraw
  └── PKStrawClass::RelayBlowfishKey (0x6330C0) → RSA→Blowfish 密钥中继
```

---

## 6. 调色板加载链 (InitGame)

```
InitGame → 9 个调色板, 统一流程:
  │
  ├── SearchMIXFile("UNITSNO.PAL") → byte_886380
  ├── SearchMIXFile("TEMPERAT.PAL") → FileSystem_TEMPERAT_PAL (0x885780)
  ├── SearchMIXFile("WAYPOINT.PAL") → byte_885180
  ├── SearchMIXFile("ANIM.PAL")    → FileSystem_ANIM_PAL (0x87F6C0)
  ├── SearchMIXFile("PALETTE.PAL") → FileSystem_THEATER_PAL (0x87F6C4)
  ├── SearchMIXFile("CAMEO.PAL")   → FileSystem_CAMEO_PAL (0x87F6B0)
  ├── SearchMIXFile("MOUSEPAL.PAL") → FileSystem_MOUSE_PAL (0x87F6C8)
  │
  ├── CCFileClass::Construct("voxels.vpl") → VoxelPaletteClass::LoadFromFile
  │     └─ VoxelPalette::Init → sub_758A30 → VoxelPalette::Reset
  │
  └── CCFileClass::Construct("GRFXTXT.PAL") → Open → ReadEntireFile
        └─ FileSystem_GRFXTXT_PAL + ConvertClass::Construct
```

每个非体素调色板:

```
SearchMIXFile(name) → 返回 768 字节数据
  └─ for i=0..255: Palette::6BitTo16Bit(R*4, G*4, B*4)
       └─ ConvertClass::Construct(palette, TEMPERAT_PAL, DSurface_Primary, flags, 0)
            → 创建显示表面兼容的调色板转换对象
```

---

## 7. SHP 文件加载

```
LoadSHPFile (0x69E430) ← .SHP 文件专用加载器
  │
  ├── CCFileClass::Construct + Open
  ├── 读 SHP 头:
  │     ├─ TS/RA2 格式: 4B file_size + 2B width + 2B height + 2B frames
  │     └─ TD 格式: 2B frames + 2B width + 2B height
  │
  ├── 逐帧解码:
  │     ├─ RLE3 压缩 (RA2/TS 格式)
  │     └─ Raw 未压缩像素
  │
  └── 返回 ShpImage* → 缓存到 g_FileCacheHashRoot

LoadFileSHP (0x4A38D0) ← SHP 加载便捷封装
  ├── SearchMIXFile(name, 0) → 缓存命中
  └── 未命中: CCFileClass::Open → vtable[44]=GetSize → malloc → vtable[36]=Read
       → 返回原始字节 (无解码)
```

---

## 8. INI 文件加载链

```
InitGame → 三个 INI 文件加载, 统一流程:

  SOUNDMD.INI:
    CCFileClass::Construct("SOUNDMD.INI") → Open
      → CCINIClass::Constructor → CCINIClass::Load(CCFileClass*, 0, 0)
        → Audio::LoadSoundINI (0x7513F0)
        → Audio::InitFromINI (0x7510D0)

  EVAMD.INI:
    CCFileClass::Construct("EVAMD.INI") → Open
      → CCINIClass::Constructor → CCINIClass::Load
        → LoadINIEVA (0x7531A0)
        → InitFromINIEVA (0x753000)

  THEMEMD.INI:
    CCFileClass::Construct("THEMEMD.INI") → Open
      → CCINIClass::Constructor → CCINIClass::Load
        → ThemeClass::InitializeThemes (0x720590)
        → Audio::LoadWAVFiles (0x7207F0)

  RULES.INI / ART.INI (Rules::Initialize 内部):
    CCINIClass_INI_Rules (0x887048) + CCINIClass_INI_Art (0x887180)
      ├── RulesClass::LoadBuildingTypes → [BuildingTypes]→BuildingTypeClass::FindOrCreate
      ├── RulesClass::LoadAnimTypes → [Animations]→AnimTypeClass::FindOrCreate
      └── 所有 Type 对象 vtable[100] = READ_INI
```

### CCINIClass 加载过程

```
CCINIClass::Load (0x4741F0)
  ├── CCFileClass::ReadEntireFile → 读入内存
  ├── INIClass::Parse → 按 [Section]→Key=Value 解析到哈希表
  │     ├── HashTableSection::Find (查找 section)
  │     └── INIClass::BinarySearchSection (二分查找 section)
  └── 查询接口: GetKeyCount / GetStringByIndex / GetString / ReadBool
```

---

## 9. CSF 字符串表加载

```
CSFClass::LoadFile (0x7346A0) → "ra2md.csf"
  │
  ├── CCFileClass::Construct → Open → CCFileClass::Read(header, 24B)
  │     ├─ magic: " FSC" = 0x43534620
  │     ├─ dword_B1CF6C: num_labels
  │     └─ dword_B1CF70: num_strings
  │
  ├── 分配表:
  │     ├─ dword_B1CF74: label 表 (40 * num_labels)
  │     ├─ dword_B1CF78: string offset 表 (4 * num_strings)
  │     └─ dword_B1CF7C: string data 表 (4 * num_strings)
  │
  ├── File::ParseCSFString → 解析标签/值对
  │
  ├── qsort(dword_B1CF74, num_labels, 40, _strcmpi)
  │     → 排序标签用于二分查找
  │
  └── 语言检测: CSF_Language (0x845728) = 0~9
       └─ dword_845678 数组: [0]=0(en), [1]=1(fr), ...
```

---

## 10. 文件加载全局索引

### MIX 文件全局变量

| 地址 | 变量 | 文件 |
|------|------|------|
| `0x884DF8` | `g_MixFile_RA2MD` | RA2MD.MIX |
| `0x884DFC` | `g_MixFile_RA2` | RA2.MIX |
| `0x884E48` | `g_MixFile_CACHEMD` | CACHEMD.MIX |
| `0x884E4C` | `g_MixFile_CACHE` | CACHE.MIX |
| `0x884E50` | `g_MixFile_LOCALMD` | LOCALMD.MIX |
| `0x884E54` | `g_MixFile_LOCAL` | LOCAL.MIX |
| `0x884E38` | `g_MixFile_CONQMD` | CONQMD.MIX |
| `0x884E18` | `g_MixFile_GENERMD` | GENERMD.MIX |
| `0x884E14` | `g_MixFile_GENERIC` | GENERIC.MIX |
| `0x884E28` | `g_MixFile_ISOGENMD` | ISOGENMD.MIX |
| `0x884E24` | `g_MixFile_ISOGEN` | ISOGEN.MIX |
| `0x884E3C` | `g_MixFile_CONQUER` | CONQUER.MIX |
| `0x884E40` | `g_MixFile_CAMEOMD` | CAMEOMD.MIX |
| `0x884E44` | `g_MixFile_CAMEO` | CAMEO.MIX |
| `0x884E60` | `g_MixFile_MAPSMDFirst` | MAPSMD*.MIX (首个) |
| `0x884E64` | `g_MixFile_MAPSFirst` | MAPS*.MIX (首个) |
| `0x884DD8` | `g_MixFile_MULTIMD` | MULTIMD.MIX |
| `0x87E738` | `g_MixFile_THEME` | THEMEMD/THEME.MIX |
| `0x884E2C` | `g_MixFile_MOVIES` | MOVIES/MOVMD MIX |

### MIX 文件池管理

| 地址 | 变量 | 说明 |
|------|------|------|
| `0x884D90` | `g_MixFileArray` | 主 MIX 文件池数组 |
| `0x884D94` | `g_MixFilePool` | 池数据指针 |
| `0x884D98` | `g_MixFilePool_Capacity` | 池容量 |
| `0x884DA0` | `g_MixFilePool_Count` | 池当前数量 |
| `0x884DA4` | `g_MixFilePool_GrowSize` | 池增长步长 |
| `0x884D9D` | `g_MixFilePool_Flag` | 池扩展标志 |
| `0xABEFF0` | `g_MixFilePool_Root` | 链表根节点 |
| `0xA8E7B0` | `g_MixFile_LoadCount` | 加载计数 |

### 文件缓存

| 地址 | 变量 | 说明 |
|------|------|------|
| `0xABF00C` | `g_FileCacheHashRoot` | 文件缓存二叉树根 |

### 调色板

| 地址 | 变量 | 文件 |
|------|------|------|
| `0x885780` | `FileSystem_TEMPERAT_PAL` | TEMPERAT.PAL |
| `0x886380` | `byte_886380` | UNITSNO.PAL |
| `0x885180` | `byte_885180` | WAYPOINT.PAL |
| `0x87F6C0` | `FileSystem_ANIM_PAL` | ANIM.PAL |
| `0x87F6C4` | `FileSystem_THEATER_PAL` | PALETTE.PAL |
| `0x87F6B4` | `FileSystem_UNITx_PAL` | UNITSNO.PAL |
| `0x87F6B0` | `FileSystem_CAMEO_PAL` | CAMEO.PAL |
| `0x87F6C8` | `FileSystem_MOUSE_PAL` | MOUSEPAL.PAL |
| `0xA8F790` | `FileSystem_GRFXTXT_PAL` | GRFXTXT.PAL |
| `0x87F6BC` | `FileSystem_GRFTXT_TIBERIUM_PAL` | (共享 UNITx) |

### INI 配置

| 地址 | 变量 | 文件 |
|------|------|------|
| `0x8870C0` | `CCINIClass_INI_RA2MD` | RA2MD.INI |
| `0x887048` | `CCINIClass_INI_Rules` | RULES.INI |
| `0x887180` | `CCINIClass_INI_Art` | ART.INI |
| `0x889F64` | `g_INI_DefaultBuffer` | INI 读入默认值 |

### CSF 字符串

| 地址 | 变量 | 说明 |
|------|------|------|
| `0xB1CF68` | `g_CSF_Filename` | CSF 文件名 |
| `0xB1CF6C` | `g_CSF_NumLabels` | 标签数量 |
| `0xB1CF70` | `g_CSF_NumStrings` | 字符串数量 |
| `0xB1CF74` | `g_CSF_LabelTable` | 标签表 (40B each) |
| `0xB1CF78` | `g_CSF_OffsetTable` | 偏移量表 |
| `0xB1CF7C` | `g_CSF_StringData` | 字符串数据 |
| `0xB1CF80` | `g_CSF_Loaded` | 已加载标志 |
| `0xB13EB0` | `g_CSF_FilenameBuffer` | CSF 文件名缓冲区 |
| `0x845728` | `CSF_Language` | 当前语言 (0=en) |

---

## 11. 文件加载总览图

```
┌─────────────────────────────────────────────────────────────────────┐
│                        文件加载完整流程                               │
├─────────────────────────────────────────────────────────────────────┤
│                                                                     │
│  WinMain                                                            │
│    ├── RA2MD.INI → INIClass::Constructor → Load (配置)              │
│    └── LANGMD.MIX → ra2md.csf → CSFClass::LoadFile (字符串)         │
│                                                                     │
│  InitGame                                                            │
│    ├── MixFileClass::Bootstrap ──────────────────────────┐          │
│    │     ├── EXPANDMD%02d.MIX (99→0 扫描)                │          │
│    │     ├── RA2MD.MIX                                   │          │
│    │     ├── RA2.MIX                                     │          │
│    │     ├── CACHEMD.MIX / CACHE.MIX                     │          │
│    │     └── LOCALMD.MIX / LOCAL.MIX                     │          │
│    │                                                     │          │
│    ├── [调色板] ×9 ────────────────────────────────────┐ │          │
│    │     └── SearchMIXFile(name) → memcpy → 6BitTo16Bit│ │          │
│    │                                                     │ │          │
│    ├── [CD 检测] → MixFile::LoadAll ───────────────────┐ │ │          │
│    │     ├── CONQMD/GENERMD/GENERIC/ISOGEN             │ │ │          │
│    │     ├── CONQUER/CAMEOMD/CAMEO                     │ │ │          │
│    │     ├── MAPSMD/MAPS (CD扫描)                      │ │ │          │
│    │     ├── MULTIMD                                   │ │ │          │
│    │     ├── THEMEMD/THEME    ← 音频 WAV               │ │ │          │
│    │     └── MOVIES/MOVMD     ← 过场动画               │ │ │          │
│    │                                                     │ │ │          │
│    ├── LoadExpansionMixFiles ─────────────────────────┐ │ │ │          │
│    │     └── ECACHE*.MIX + ELOCAL*.MIX                 │ │ │ │          │
│    │                                                     │ │ │ │          │
│    ├── [INI 加载] ×3                                    │ │ │ │          │
│    │     ├── SOUNDMD.INI → Audio 系统                   │ │ │ │          │
│    │     ├── EVAMD.INI   → EVA 系统                     │ │ │ │          │
│    │     └── THEMEMD.INI → Theme 系统                   │ │ │ │          │
│    │                                                     │ │ │ │          │
│    ├── [Type READ_INI]                                  │ │ │ │          │
│    │     ├── RULES.INI → CCINIClass_INI_Rules           │ │ │ │          │
│    │     │     ├── RulesClass::LoadBuildingTypes        │ │ │ │          │
│    │     │     ├── RulesClass::LoadAnimTypes            │ │ │ │          │
│    │     │     └── 各 Type::READ_INI (vtable[100])      │ │ │ │          │
│    │     └── ART.INI → CCINIClass_INI_Art                │ │ │ │          │
│    │                                                     │ │ │ │          │
│    └── [SHP/音频]                                       │ │ │ │          │
│          ├── MOUSE.SHA → LoadFileSHP                    │ │ │ │          │
│          └── GAME.FNT → BitTextClass::LoadFont          │ │ │ │          │
│                                                         │ │ │ │          │
│  所有查找路径都经过:                                     │ │ │ │          │
│    SearchMIXFile(name) ─────────────────────────────────┘ │ │ │          │
│      ├── g_FileCacheHashRoot (二叉树缓存)                 │ │ │          │
│      │     └─ CRC32 hash 命中 → 返回缓存数据              │ │ │          │
│      │                                                    │ │ │          │
│      ├── MIX 池搜索 (g_MixFilePool 从尾到头)              │ │ │          │
│      │     └─ MixFileClass::sub_55B190 → 遍历索引表       │ │ │          │
│      │          → CRC32 hash 匹配 → 提取子文件数据         │ │ │          │
│      │                                                    │ │ │          │
│      └── 磁盘直接读取                                     │ │ │          │
│            └─ CCFileClass::Open → ReadEntireFile          │ │ │          │
│               → InsertIntoHashTree → 缓存                │ │ │          │
│                                                           │ │ │          │
│  MixFileClass::FromFile 构造器:                           │ │ │          │
│    CCFileClass::Open → 读 header → 格式检测:              │ │ │          │
│      ├─ 0x0000 → 扩展格式: flags (bit1=加密)              │ │ │          │
│      │   ├─ 加密: PKStrawClass → Blowfish 解密            │ │ │          │
│      │   └─ 无加密: 直接读                                │ │ │          │
│      └─ ≠0 → TD 格式 (rewind)                              │ ┘ │          │
│    → 读 count+body_size → 索引表 malloc → LinkIntoPool      ┘          │
│                                                                         │
└─────────────────────────────────────────────────────────────────────────┘
```

---

## 12. 本次新命名 (文件 I/O 链)

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x530000` | `LoadExpansionMixFiles` | 406B | ECACHE/ELOCAL MIX |
| `0x5B4590` | `MixFileClass::LinkIntoPool` | 45B | MIX 链表插入 |
| `0x5B4610` | `MixFileClass::UnlinkFromPool` | 30B | MIX 链表移除 |
| `0x633050` | `PKStrawClass::Initialize` | 98B | RSA+Blowfish 流构造 |
| `0x633110` | `PKStrawClass::SetSource` | 32B | 设置加密流源头 |
| `0x6330C0` | `PKStrawClass::RelayBlowfishKey` | 76B | RSA→Blowfish 密钥 |
| `0x5B3FF0` | `InsertIntoHashTree` | 45B | 文件缓存二叉树 |
| `0x69E430` | `LoadSHPFile` | 200B | SHP 文件加载 |
| `0x753B70` | `VoxelPaletteClass::LoadFromFile` | 91B | voxels.vpl 加载 |
| `0x4A38D0` | `LoadFileSHP` | — | SHP 加载便捷封装 |
| `0x4A3890` | `CCFileClass::ReadEntireFile` | — | 读整个文件到内存 |

### 新命名全局变量 (40+)

见上方各表格 (MIX 池管理 ×11, MIX 文件 ×18, 调色板 ×10, INI ×4, CSF ×9)
