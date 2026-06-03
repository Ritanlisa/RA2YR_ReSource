# gamemd.exe 完整音频系统

> 覆盖: 音频初始化 → WAV/AUD 加载 → Miles Sound System → EVA 语音 → Theme 音乐 → 音效播放 → BINK 音频。所有函数/变量名均为 IDA 确认的命名。

---

## 1. 音频初始化 (WinMain → InitGame)

### 1.1 InitializeAudioSubsystem (@ 0x406B10, 546B)

```
InitGame → InitializeAudioSubsystem(enabled_flag)
  │
  ├── 初始化 8 个音频混音器通道:
  │     dword_87E2C0 → dword_87E73C (通道1)
  │     dword_87E4E0 → dword_87E744 (通道2)
  │     dword_87E578 → dword_87E740 (通道3)
  │     dword_87E450 → dword_87E748 (通道4)
  │     dword_87E340 → dword_87E74C (通道5)
  │     dword_87E6A0 → dword_87E754 (通道6)
  │     dword_87E5F8 → dword_87E750 (通道7)
  │     dword_87E3C0 → g_MixerState (主混音器)
  │
  ├── [enabled] CreateAudioChannel:
  │     ├─ 格式: 22050 Hz / 16-bit / 立体声 / 4x 缓冲
  │     ├─ g_Audio_Enabled = 通道句柄
  │     └─ 验证: 16 字节首数据接收成功
  │
  ├── [enabled] 加载音频 MIX:
  │     ├─ AUDIOMD.MIX → MixFileClass::FromFile → dword_87E734
  │     └─ 回退: AUDIO.MIX
  │
  ├── [enabled] LoadAudioFile("audio") → dword_87E724
  │     └─ 加载音频配置文件 (索引表)
  │
  ├── 初始化音频 DSP 管线 + 缓冲区
  ├── VocClass 系统初始化
  └── dword_87E72C = enabled_flag
```

### 1.2 InitializeAudioStreaming (@ 0x53DE00)

```
WinMain 中调用:
  InitializeAudioStreaming
    └─ 创建 DirectSound 对象
       ├─ g_pDirectSound
       └─ BinkSetSoundSystem(BinkOpenDirectSound, g_pDirectSound)
             → BINK 视频音频桥接
```

### 1.3 音频子系统全局变量

| 地址 | 变量 | 说明 |
|------|------|------|
| `0x87E728` | `g_Audio_Enabled` | 音频启用标志 |
| `0x87E758` | `g_MixerState` | 主混音器状态 |
| `0x87E73C` | `g_Mixer_SFX` | 音效混音器通道 |
| `0x87E744` | `g_Mixer_Theme` | 主题音乐混音器 |
| `0x87E740` | `g_Mixer_Voice` | 语音混音器 |
| `0x87E748` | `g_Mixer_Score` | 背景乐混音器 |
| `0x87E724` | `g_AudioFileData` | 音频配置文件 |
| `0x87E734` | `g_MixFile_AUDIO` | AUDIO.MIX 对象 |
| `0x87E89C` | `g_pDirectSound` | DirectSound 对象 |
| `0x87E72C` | `g_AudioInitialized` | 音频初始化完成 |

---

## 2. Miles Sound System / DirectSound

### 2.1 DSP 音频管线

```
音频线程: ThreadAudioMixerMain (0x407B60, 981B)
  │
  ├── DSP_AudioMixBuffers (0x7BF740, 3397B) ← 主混音
  │     ├── 8 通道混音器并行处理
  │     ├── 16-bit 立体声, 22050 Hz
  │     └── 音量包络 (Attack/Decay)
  │
  ├── DSP_AudioProcess (0x7C0C80, 1196B)
  │     └── 音频 DSP 效果处理
  │
  └── SubmitDirectSoundBuffer (0x412000)
        └── DirectSoundBuffer::Play → 硬件输出
```

### 2.2 音频缓冲区管理

```
AudioStream::ProcessStreamPipeline (0x7C2D00, 962B):
  ├── ReadAudioStream → 从 MIX 读取压缩数据
  ├── AudioCodec::Decode → 解码 AUD/WAV 格式
  ├── FillAudioStreamBuffer → 填充环缓冲区
  └── ProcessAudioStreamPlayback → 提交到 DirectSound
```

---

## 3. VocClass — EVA 语音/单位语音

### 3.1 VocClass::LoadFromINI (@ 0x750440, 1246B)

```
[SOMETYPE] ← 每个 voice 类型一个 section
  Sounds = xxxx.wav, yyyy.wav   ← 逗号分隔的 WAV 文件列表
  Volume = 90.0                  ← 音量 (0-100, 内部 ×0.01)
  VShift = 0                     ← 音调偏移
  MinVolume = 10.0               ← 最小音量
  Priority = NORMAL              ← 优先级 (NORMAL/HIGH/LOW)
  Attack = 0                     ← 淡入时间 (ms)
  Decay = 0                      ← 淡出时间 (ms)
  Control = FLAG1,FLAG2          ← 控制标志位
  Type = TYPE1,TYPE2             ← 类型标志位
  Limit = 1                      ← 同时播放上限
  Loop = 0                       ← 循环次数 (-1=无限)
  Range = 100                    ← 可听范围
  Delay = min,max                ← 随机延迟范围
  FShift = 0,0                   ← 频率偏移
```

### 3.2 语音播放链

```
VocClass::FindAndPlay (0x752700) ← EVA 语音入口
  │
  ├── 搜索 g_InfantryRenderPool → 匹配语音名
  ├── UpdateThemeManager(a2) → 创建播放请求
  │     └── Audio::ProcessQueue
  │           ├── AudioController::Start
  │           │     └── LoadAudioFile → 从 MIX 读取 WAV
  │           └── ProcessAudioMixerFrame
  │                 └── 混音器通道播放
  │
  └── QueueTechnoVoiceLine (0x706BD0)
        └── 单位语音排队 (避免重叠)
```

### 3.3 语音事件类型

| 函数 | 说明 |
|------|------|
| `TechnoClass::VoiceAttack` (0x7090A0) | 攻击语音 |
| `TechnoClass::StartEffectAudio` (0x703770) | 特效音频 |
| `FootClass::CheckVoiceResponse` (0x4D4B20) | 检查语音响应 |
| `FootClass::ProcessMissionVoice` (0x4D4CB0) | 任务语音处理 |
| `HouseClass::ProcessPromotionSound` (0x4FB6B0) | 晋升音效 |
| `Scene::TriggerEVA` (0x57B790) | 触发 EVA 语音 |

---

## 4. ThemeClass — 背景音乐

### 4.1 ThemeClass::InitializeThemes (@ 0x720590, 473B)

```
THEMEMD.INI → [Themes]
  每个 Theme:
    ├── 名称 → strcpy → ThemeClass 对象
    ├── ThemeClass::ReadThemeEntry → 读取:
    │     ├── Sound = filename    (AUD 文件)
    │     ├── Scenario = 1        (哪张地图播放)
    │     ├── Normal = yes        (正常播放)
    │     ├── Repeat = yes        (循环)
    │     └── Side = 0            (阵营限制)
    │
    └── 创建 AudioStream (20000B buffer):
          └── SetAudioFileName("Music Stream")
```

### 4.2 音乐播放链

```
ThemeClass::Play (0x720BB0):
  ├── ThemeClass::ClearQueues → 清空等待队列
  ├── AudioQueue::IsEmpty(g_Mixer_Theme) → 检查通道空闲
  ├── LoadAudioFile(theme_sound) → 从 MIX 读取 AUD
  └── AudioStream::Play → 开始播放

UpdateThemes (0x752760) ← 每帧调用:
  ├── 检查当前 Theme 是否结束
  ├── ThemeClass::QueueSong → 排队下一首
  └── Theme::Stop → 停止当前
```

---

## 5. 音效播放 (Sound Effects)

### 5.1 PlaySoundEffectAt (@ 0x489280, 4710B)

```
PlaySoundEffectAt(coords, sound_type, house):
  │
  ├── 距离衰减计算:
  │     ├── ComputeAudioPosition → 3D 定位
  │     └── Audio3D::ComputeRotation → 方向计算
  │
  ├── AudioOcclusion (遮蔽):
  │     ├── InitializeAudioOcclusion → 初始化遮挡
  │     └── InitializeTileAudioOcclusion → 地形遮挡
  │
  ├── Load Audio Mixer:
  │     ├── AudioMixer::PlaySample → 播放
  │     └── PrefetchAudioSamples → 预加载
  │
  └── 音量控制:
        └── Audio::ParseVolume → 根据距离/设置计算音量
```

### 5.2 创建特效

```
CreateSmokeEffectAt / CreateFireAtSW 等:
  ├── AnimClass::ctor → 创建动画
  └── PlaySoundEffectAt → 附带音效
```

### 5.3 音频事件系统

```
AudioEvent::LoadFromINI (0x752DB0):
  读取 EVAMD.INI → 事件-音效映射

DispatchBuildingAudioEvents (0x438BF0):
  建筑音效事件: 建造/损坏/出售/升级

AudioClass::ProcessEvent (0x7228B0):
  通用音频事件处理
```

---

## 6. BINK 视频音频

### 6.1 BINK 音频初始化

```
BinkMovieClass::OpenFile (0x433770):
  ├── BinkOpen("ra2ts_l.bik") → BINK 句柄
  ├── BinkSetSoundSystem(BinkOpenDirectSound, g_pDirectSound)
  │     └─ 将 BINK 音频输出桥接到 DirectSound
  └── BinkSetVolume(handle, volume) → 设置音量
```

### 6.2 BINK 音频播放

```
BinkMovie::RenderLoop (0x432E40) ← 每帧:
  ├── BinkSetVolume(handle, volume)
  │     └─ 按帧同步音量到当前音效音量设置
  ├── g_DDraw_Active? BinkPause(handle, 0) : BinkPause(handle, 1)
  │     └─ DirectDraw 活动时取消暂停
  ├── BinkDoFrame(handle) → 解码当前帧 (含音频)
  └── BinkNextFrame(handle) → 推进
```

### 6.3 Stream::InitializeBinkAudio (@ 0x759260)

```
BINK 音频流管理:
  └── 管理 BINK 音频缓冲区 (与视频帧同步)
```

---

## 7. 音频文件格式

### 7.1 WAV/AUD 解析

```
File::ParseAudioFileRIFF (0x7C12B0, 1152B):
  ├── RIFF header: chunkID + chunkSize + format
  ├── fmt chunk: PCM/ADPCM format detection
  ├── data chunk: sample data
  └── 兼容 AUD (Westwood 压缩) 和 WAV (标准 PCM)
```

### 7.2 AudioCodec::Decode (@ 0x7C81DB)

```
压缩格式支持:
  ├── PCM 16-bit (无压缩)
  ├── Westwood ADPCM (AUD 格式)
  └── IMA ADPCM
```

---

## 8. 音频全局变量索引

### 8.1 混音器通道

| 地址 | 变量 | 用途 |
|------|------|------|
| `0x87E758` | `g_MixerState` | 主混音器 |
| `0x87E73C` | `g_Mixer_SFX` | 音效 |
| `0x87E744` | `g_Mixer_Theme` | 主题音乐 |
| `0x87E740` | `g_Mixer_Voice` | 语音 |
| `0x87E748` | `g_Mixer_Score` | 背景乐 |

### 8.2 配置

| 地址 | 变量 | 说明 |
|------|------|------|
| `0x87E728` | `g_Audio_Enabled` | 音频启用 |
| `0x87E72C` | `g_AudioInitialized` | 初始化完成 |
| `0x87E89C` | `g_pDirectSound` | DirectSound 对象 |
| `0x87E724` | `g_AudioFileData` | 音频配置文件 |
| `0x87E734` | `g_MixFile_AUDIO` | AUDIO MIX |

---

## 9. 音频系统总览

```
┌─────────────────────────────────────────────────────────┐
│                   音频系统完整流程                         │
├─────────────────────────────────────────────────────────┤
│                                                         │
│  初始化阶段:                                              │
│    WinMain → InitializeAudioStreaming                    │
│                    └─ DirectSound 创建                   │
│    InitGame → InitializeAudioSubsystem                   │
│                    ├─ 8 混音器通道                       │
│                    ├─ CreateAudioChannel                 │
│                    └─ AUDIOMD.MIX 加载                   │
│                                                         │
│  INI 加载:                                               │
│    EVAMD.INI → EVA 事件映射                              │
│    SOUNDMD.INI → 音效配置                                │
│    THEMEMD.INI → Theme 列表 + 属性                       │
│    [VoiceTypes] → VocClass 语音数据                      │
│                                                         │
│  运行时:                                                  │
│                                                         │
│  ┌─ 单位语音 ────────────────────────────┐               │
│  │ VocClass::FindAndPlay                │               │
│  │   └─ AudioController::Start          │               │
│  │       └─ LoadAudioFile → 混音器      │               │
│  └─────────────────────────────────────┘               │
│                                                         │
│  ┌─ 音效 ──────────────────────────────┐               │
│  │ PlaySoundEffectAt                   │               │
│  │   ├─ 3D 定位 + 距离衰减              │               │
│  │   └─ AudioMixer::PlaySample         │               │
│  └─────────────────────────────────────┘               │
│                                                         │
│  ┌─ 背景音乐 ─────────────────────────┐                │
│  │ ThemeClass::Play                  │                │
│  │   └─ AudioStream → 环缓冲区        │                │
│  └─────────────────────────────────────┘               │
│                                                         │
│  ┌─ BINK 音频 ────────────────────────┐                │
│  │ BinkOpenDirectSound               │                │
│  │   └─ BinkSetSoundSystem           │                │
│  │       └─ 直接桥接到 DirectSound    │                │
│  └─────────────────────────────────────┘               │
│                                                         │
│  所有输出 → DSP_AudioMixBuffers → DirectSound → 硬件    │
│                                                         │
└─────────────────────────────────────────────────────────┘
```

---

## 10. 本次新命名 (音频子系统)

| 地址 | 名称 | 大小 | 说明 |
|------|------|------|------|
| `0x4063B0` | `Audio::ProcessMixerOutput` | 226B | 混音器输出处理 |
| `0x4054A0` | `Audio::UpdatePlaybackPosition` | 223B | 播放位置更新 |
| `0x402720` | `Audio::GetChannelStatus` | 110B | 通道状态查询 |
| `0x404DD0` | `Audio::FlushChannel` | 73B | 清空通道 |
