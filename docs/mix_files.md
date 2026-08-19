# MIX 文件系统文档

## MIX 文件读取器 (Phase 3 完成)

### 内存支持的 MixFileClass

子 MIX 文件不再通过临时磁盘文件解析，而是直接在内存中存储完整数据：

```cpp
// 内存支持的构造函数：拥有数据缓冲区所有权
MixFileClass(const uint8_t* data, int dataSize, const char* name) noexcept;

// Extract/Peek 自动选择数据源：
//   MemoryData != nullptr → 从内存读取
//   MemoryData == nullptr → 从磁盘 FileName 读取 (传统顶层 MIX)
```

**关键设计点**:
- `MemoryData` / `MemoryDataSize`: 非空时从内存读取，避免删除临时文件后无法读取的 bug
- 析构函数 `~MixFileClass()`: 自动 `free(MemoryData)`
- `IsValid()`: 检查 `CountFiles > 0 && FileName != nullptr && Headers != nullptr`
- 顶层 MIX 文件（`*.mix` on disk）: `MemoryData = nullptr`, 通过 `fopen(fd.cFileName)` 读取
- 子 MIX 文件（从父 MIX 提取）: 直接传入内存数据，后续 Extract 从内存读取

### 子 MIX 验证规则 (防虚假识别)

由于随机数据可能以 `0x0000 0xNNNN` (flags bit1=1) 开头被误判为加密 MIX，添加严格验证：

| 检查 | 条件 | 目的 |
|------|------|------|
| 大小下限 | `sz >= 1000` | 子 MIX 至少 1KB |
| 文件数 | `1 < trial_cnt <= 65535` | 合理的文件数范围 |
| 数据适配 | `dataSize >= off + padded` | 加密头+索引必须完整包含在数据中 |
| 体积适配 | `FileSize <= dataSize - hdr_end` | 声明的主体必须适配剩余数据 |
| 平均大小 | `FileSize / CountFiles >= 200` | 每文件平均至少 200 字节（排除虚假巨型 Count） |
| Headers 分配 | `Headers != nullptr` | IsValid() 确认索引表已分配 |

### 加载顺序

```cpp
// 搜索顺序：从后往前（后加载的 MIX 优先级最高，可覆盖先加载的文件）
for (int i = pool.Count - 1; i >= 0; --i) {
    auto* mix = pool[i]; ...
}
```

顶层 MIX (`*.mix` 按 FindFirstFile 顺序) → 子 MIX (追加到最后，最高优先级)

### 通用格式检测算法 (RA1 MixFileClass 逻辑)

```
读取前2字节 = first_field
if first_field == 0 → 扩展格式 (RA2/MO)
    读取后2字节 = flags
    if flags & 0x0002 → Blowfish加密
        读取 key_source(80B) → Westwood密钥计算(56B) → Blowfish解密头+索引
    else → 无加密扩展格式(falls through to TD header)
else → TD传统格式 (rewind, 读取原始header)
```

### 已验证格式

| 格式 | 特征 | 测试文件 | 结果 |
|------|------|---------|------|
| RA2 加密 | first=0, flags=0x0003 | expandmd01.mix (33文件) | ✅ RULES.INI 确认 |
| RA2 校验 | first=0, flags=0x0001 | — | ✅ 支持 |
| 扩展无加密 | first=0, flags=0x0000 | expandmo04.mix (66文件) | ✅ 数据可读 |
| TD 传统 | first≠0 | test.mix | ✅ 端到端验证 |

### Blowfish 组件

| 组件 | 常量 | 状态 |
|------|------|------|
| BlowfishEngine | 18 P-array + 1024 S-boxes | ✅ Encipher/Decipher 回合验证 |
| Westwood 密钥计算 | RSA 模幂运算 + Barrett 约简 | ✅ Base64 公钥 "AihRvNo..." → 56B 密钥 |
| 头解密 | 8B 块 + reverse32 | ✅ 已验证 expandmd01/language/WDT |

### 扩展格式无加密 MIX 分析

- 前 4 字节 `0x00000000` (first=0, flags=0) 是 RA1 扩展格式，非特殊标记
- Offset 4 开始是标准 TD 格式 (count + body + index)
- 内部文件**未加密**——二进制游戏数据，结构清晰
- 扩展格式 zero-flags 被某些模组（如基于 Ares/Phobos DLL注入的项目）用于容器级混淆
- DLL 注入扩展走原版 Mix 加载路径，格式完全兼容

---

## 跨项目参考：OpenRA / Yuris-Revenge / XCC Mixer

### OpenRA — MIX 文件系统 (C#)
- **`OpenRA.Mods.Cnc.FileSystem.MixLoader`** (`OpenRA/OpenRA.Mods.Cnc/FileSystem/MixFile.cs`)
  - 格式检测：前 2 字节 ≠ 0 → C&C/TD 格式；= 0 → 读 flags，bit1=Blowfish 加密 (RA/TS/RA2)
  - **双哈希索引**：对每个文件名计算 **Classic(TD/RA1)** 和 **CRC32(TS/RA2)** 两种哈希
  - `var bestIndex = crcIndex.Count > classicIndex.Count ? crcIndex : classicIndex;` — 自动选择匹配数更多的哈希算法
  - 嵌套 MIX 加载：`OpenPackage()` → `TryParsePackage()` 递归打开子 MIX
  - 文件名数据库：`XccGlobalDatabase` + `XccLocalDatabase` 映射 hash ID → 文件名

### OpenRA — 资产格式加载
- **SHP 加载器**：`ShpTDLoader`(TD格式) / `ShpTSLoader`(TS/RA2格式) / `ShpD2Loader`(Dune2)
  - RA2 使用 TS 格式 SHP：头 4B file_size + 2B width + 2B height + 2B frames
  - TD 格式 SHP：头 2B frames + 2B width + 2B height
- **调色板**：`PaletteFromFile` — 从 MIX 中按文件名加载 `.pal` 文件
  - YAML 配置：`temperat.pal`, `unitsno.pal`, `anim.pal`, `mousepal.pal` 等
- **文件系统**：`FileSystem.Mount()` — 虚拟文件系统，多 MIX 挂载，**后挂载优先**
  - TS 模式挂载列表：`cache.mix`, `conquer.mix`, `isotemp.mix`, `local.mix`, `sidec01.mix`, `sidec02.mix`, `sno.mix`, `snow.mix`, `sounds.mix`, `tem.mix`, `temperat.mix`, `speech01.mix`, `speech02.mix` 等

### Yuris-Revenge (基于 OpenRA 的 mod)
- 读取原游戏 MIX 文件运行，游戏逻辑有严重错误，但资产读取/渲染代码可参考
- 适用于理解 RA2/YR 的 MIX 文件层级和资产命名

### XCC Mixer — 文件名数据库
- **`xcc/data/ra2 mix description.txt`** (25,584 行) — 完整的 RA2 MIX 文件名列表
- 来源：XCC Mixer (Olaf van der Spek)，社区标准 MIX 工具
- 关键发现：
  - `ra2ts_l.bik` / `ra2ts_s.bik` — **主菜单背景是 BINK 视频，非 SHP**！
  - `ls640*.shp` / `ls800*.shp` — 各国家加载屏幕 SHP
  - `libtem.pal` / `liburb.pal` / `libsno.pal` 等 — 地形调色板
  - `urb.mix`, `generic.mix`, `cameo.mix`, `sidenc01.mix` 等 — 子 MIX 文件名

---

## MIX 文件系统架构总结

### 哈希算法
| 算法 | 项目 | 特点 |
|------|------|------|
| **Classic (TD/RA1)** | RA1, TD | XOR-rotate-left, 不足4字节补0 |
| **CRC32 (TS/RA2)** | RA2, TS | 标准 CRC32 + **TS风格填充**：余数字节=长度差，后补末4字节块末字符 |

**TS CRC32 填充规则** (OpenRA `PackageEntry.HashFilename`):
```cpp
// 长度不能整除4时：
// 1. 追加1字节：(len - lenRoundedDownToFour)
// 2. 如果还有剩余(padding>1)：重复 name[lenRoundedDownToFour] 字符
// 例: "LOCAL.MIX"(9字节) → "LOCAL.MIX" + \x01 + 'X' + 'X' → 12字节 → CRC32
int lenRounded = (len / 4) * 4;
int padding = (len % 4) ? (4 - len % 4) : 0;
crc ^= (uint8_t)(len - lenRounded);  // pad byte
for (int p = 1; p < padding; ++p)
    crc ^= toupper(name[lenRounded]);  // repeat last char
```

### MIX 层级结构
```
工作目录 (所有 .mix 文件自动加载)
├── expandmd01.mix    (33 文件) — YR 扩展数据 + 子MIX容器
├── ra2.mix           (21 文件) — RA2 核心容器
│   ├── temperat.mix  (237 文件) — 温带地形资产
│   ├── snow.mix      (377 文件) — 雪地地形资产
│   └── ... (其他19个未命名的子MIX容器)
├── ra2md.mix         (25 文件) — YR 核心容器
│   ├── isogenmd.mix  (82 文件)
│   └── ... (其他24个未命名的子MIX容器)
├── langmd.mix        (10 文件) — 语言数据
├── language.mix      (6 文件)  — 语言数据
├── multi.mix         (97 文件) — 多人游戏资产
├── multimd.mix      (173 文件) — YR多人资产
├── WDT.MIX          (126 文件) — 地形/调色板
├── MAPS*.mix              — 地图
├── MOVIES*.mix            — 过场动画(.bik)
├── THEME*.mix             — 游戏音乐(.aud)
└── ... (当前共加载16个顶层MIX，递归提取17子MIX → 33总池)
```

### 文件加载链 (IDA 逆向)
```
sub_5B40B0(filename, is_shp)                    // 文件加载器 (0x5B40B0)
  ├── _strupr(Str)                               // 大写
  ├── sub_4A1DE0(Str, len)                       // CRC32 哈希 (0x4A1DE0)
  │     └── 查表 dword_81F7B4 (256项CRC32表)
  ├── 哈希表缓存查找 (dword_ABF00C)
  ├── if is_shp || strstr(Str, ".SHP"):
  │     sub_69E430(buf, filename)                // SHP 加载器 (0x69E430)
  │       ├── sub_4739F0() → 路径解析
  │       └── sub_473B10() → 文件读取
  └── else:
        sub_4A3890()                              // 通用文件加载
```

### 当前实现状态

| 组件 | 状态 | 备注 |
|------|------|------|
| MIX 文件加载 | ✅ 工作 | 16顶层 → 递归提取17子MIX → 33总池 |
| Blowfish 解密 | ✅ 工作 | `ComputeBlowfishKey` 密钥推导 |
| 文件名→哈希映射 | ⚠️ 部分 | 尝试 CRC32(TS) + Classic 双哈希 |
| 哈希→文件名映射 | ❌ 无 | 需要 XCC 全局数据库 (25,584行) |
| 文件查找 (LoadFile) | ⚠️ 部分 | 遍历33个MIX的哈希索引 |
| SHP 解码 | ✅ 工作 | RLE3 + Raw 格式 |
| 调色板 | ✅ 工作 | 768字节内容扫描 |
| DDraw 渲染 | ✅ 工作 | 手动 Lock/Write/Unlock 已验证 |
| 主菜单 BINK 背景 | ❌ 待实现 | `ra2ts_l.bik` 是 BINK 视频 |
| 主菜单 SHP 按钮/UI | ❌ 待实现 | 需从 XCC 数据库定位文件名→哈希 |
| 过场动画 | ❌ 待实现 | `.bik` 文件在 MOVIES*.mix 中 |
| 游戏音乐 | ❌ 待实现 | `.aud` 格式 (Miles Sound System) |
| VXL/HVA 体素 | ❌ 待实现 | 仅头文件定义，无 .cpp |

### 测试数据

| 目录 | 格式 | 已验证 |
|------|------|--------|
| RA2YRMIX/ | first=0, flags=0x0003 (加密) | expandmd01(33文件), language(6), WDT(126) |
| MOMIX/ | first=0, flags=0x0000 (无加密) | expandmo04(66), expandmo90(45) |
