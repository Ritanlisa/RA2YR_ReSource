#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "misc/audio.hpp"

namespace gamemd
{

class AudioController;

// ============================================================================
// AudioMixer — DirectSound mixer (9 methods)
// IDA: Init 0x407150, PlayBuffer 0x4071C0
// ============================================================================
class AudioMixer
{
public:
    AudioMixer() = default;

    // IDA 0x407150
    int32_t Init();  // 0x401000
    // IDA 0x4071C0
    int32_t PlayBuffer(int32_t index, int32_t volume, int32_t pan);  // 0x4061D0
    // IDA 0x4071C0 area
    int32_t RequestOrEndBuffer(int32_t index);  // 0x406270
    // IDA 0x407150 area
    void ReleaseChannel(int32_t channel);  // 0x406060
    // IDA 0x407150 area
    void RequestAllBuffers();  // 0x4083D0
    // IDA 0x407150 area
    void StopAll();  // 0x403730
    // IDA 0x407150 area
    void SetVolume(int32_t volume);  // 0x406650
    // IDA 0x407150 area
    // design: no binary equivalent found in IDA
    void SetPan(int32_t pan);
    // IDA 0x407150 area
    bool IsPlaying(int32_t channel);  // 0x7529E0

    uint32_t    AudioMixer_field_00;       // 0x00
    uint32_t    AudioMixer_field_04;       // 0x04
    uint32_t    AudioMixer_field_08;       // 0x08
    uint32_t    AudioMixer_field_0C;       // 0x0C
    uint32_t    AudioMixer_field_10;       // 0x10
    uint32_t    AudioMixer_field_14;       // 0x14
};

// ============================================================================
// AudioSettings — audio settings dialog (5 methods)
// IDA: SetFlag70, SetFlag68, DlgProc
// ============================================================================
class AudioSettings
{
public:
    // IDA 0x48B2A0 area
    void SetFlag70();  // 0x5FA440
    // IDA 0x48B2A0 area
    void SetFlag68();  // 0x5FA470
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);  // 0x6B6300
    // IDA 0x48B2A0 area
    void LoadINI();  // 0x533D20 // IDA: KeyboardConfig::LoadINI
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    void SaveINI();

    bool        m_Flag68;       // 0x00
    bool        m_Flag70;       // 0x01
    uint8_t     _pad_02[2];     // 0x02
    int32_t     AudioSettings_field_04;       // 0x04
    int32_t     AudioSettings_field_08;       // 0x08
};

// ============================================================================
// Voice — voice channel management (2 methods)
// IDA: Stop, DetachChannel
// ============================================================================
class Voice
{
public:
    // IDA 0x407150 area
    static void Stop(int32_t channel);  // 0x4025B0
    // IDA 0x407150 area
    static void DetachChannel(AudioController* ctrl);  // 0x404140

    static int32_t  s_ActiveChannels; // 0x00
};

// ============================================================================
// Mixer — audio buffer mixer (2 methods)
// IDA: ReleaseChannel, RequestAllBuffers
// ============================================================================
class Mixer
{
public:
    // IDA 0x407150 area
    static void ReleaseChannel(int32_t channel);  // 0x406060
    // IDA 0x407150 area
    static void RequestAllBuffers();  // 0x4083D0

    int32_t     Mixer_field_00;       // 0x00
};

// ============================================================================
// ThemeClass — theme music management (7 methods)
// IDA: RequestBuffer, GetValue, ReadThemeEntry
// ============================================================================
class ThemeClass
{
public:
    ThemeClass() = default;

    // IDA 0x48B2A0 area
    void RequestBuffer(int32_t index);  // 0x4080C0
    // IDA 0x48B2A0 area
    int32_t GetValue() const;  // 0x408140
    // IDA 0x48B2A0 area
    void ReadThemeEntry(const char* name);  // 0x720480
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    void LoadThemeINI();
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    int32_t GetThemeIndex(const char* name);
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    const char* GetThemeName(int32_t index);
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    bool IsThemeValid(int32_t index);

    int32_t     ThemeClass_field_00;       // 0x00
    int32_t     ThemeClass_field_04;       // 0x04
    char        m_Name[32];     // 0x08
    int32_t     ThemeClass_field_28;       // 0x28
    int32_t     ThemeClass_field_2C;       // 0x2C
};

// ============================================================================
// Theme — theme playback (3 methods)
// IDA: QueueSong, Stop, IsPlaying
// ============================================================================
class Theme
{
public:
    // IDA 0x48B2A0 area
    static void QueueSong(int32_t index);  // 0x720B20
    // IDA 0x48B2A0 area
    static void Stop();  // 0x720EA0
    // IDA 0x48B2A0 area
    static bool IsPlaying();  // 0x720FD0

    static int32_t  s_CurrentTheme;  // 0x00
    static bool     s_IsPlaying;     // 0x04
};

// ============================================================================
// ThemeManager — theme playback manager (2 methods)
// IDA: ProcessCallback, Cleanup
// ============================================================================
class ThemeManager
{
public:
    // IDA 0x48B2A0 area
    static void ProcessCallback();  // 0x4080F0
    // IDA 0x48B2A0 area
    static void Cleanup();  // 0x720770

    static int32_t  s_CallbackState; // 0x00
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class Audio3D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Audio3D() = default;

    virtual void ComputeRotation(); // 0x55A7D0

};
// 1 methods in IDA
class AudioBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioBuffer() = default;

    virtual void InitializePlayback(); // 0x409C40

};
// 3 methods in IDA
class AudioChannel
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioChannel() = default;

    virtual void IsActive(); // 0x4010A0
    virtual void DeactivatePlay(); // 0x402600
    virtual void ActivatePlay(); // 0x402650

    uint8_t AudioChannel_field_0x04[4];
    uint8_t AudioChannel_field_0x08[4];
};
// 1 methods in IDA
class AudioCodec
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioCodec() = default;

    virtual void Decode(); // 0x7C81DB

};
// 1 methods in IDA
class AudioConfig
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioConfig() = default;

    virtual void InitDefault(); // 0x754BE0

};
// 1 methods in IDA
class AudioEvent
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioEvent() = default;

    virtual void LoadFromINI(); // 0x752DB0

};
// 2 methods in IDA
class AudioFile
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioFile() = default;

    virtual void GetCallback(); // 0x4026A0
    virtual void Stop(); // 0x405FD0

    uint8_t AudioFile_field_0x04[4];
};
// 1 methods in IDA
class AudioFileClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioFileClass() = default;

    virtual void Release(); // 0x405C00

};
// 2 methods in IDA
class AudioFrame
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioFrame() = default;

    virtual void ProcessAudioFrame(); // 0x407FB0
    virtual void CounterInc(); // 0x7535B0

    uint8_t AudioFrame_field_0x04[4];
};
// 1 methods in IDA
class AudioIndex
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioIndex() = default;

    virtual void GetSampleInformation(); // 0x401640

};
// 1 methods in IDA
class AudioList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioList() = default;

    virtual void GetNextEntry(); // 0x407480

};
// 1 methods in IDA
class AudioNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioNode() = default;

    virtual void Release(); // 0x408600

};
// 1 methods in IDA
class AudioOcclusion
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioOcclusion() = default;

    virtual void ComputeBoundingVertices(); // 0x756BB0

};
// 1 methods in IDA
class AudioOptionsClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioOptionsClass() = default;

    virtual void ApplySettings(); // 0x5FB160

};
// 1 methods in IDA
class AudioPool
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioPool() = default;

    virtual void ProcessQueue(); // 0x405190

};
// 5 methods in IDA
class AudioSample
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioSample() = default;

    virtual void ResetState(); // 0x4024A0
    virtual void Destructor(); // 0x407A90
    virtual void IsBuffering(); // 0x4080D0
    virtual void InitLinkedList(); // 0x408840
    virtual void SetField(); // 0x408930

    uint8_t AudioSample_field_0x04[4];
    uint8_t AudioSample_field_0x08[4];
    uint8_t AudioSample_field_0x0C[4];
    uint8_t AudioSample_field_0x10[4];
};
// 1 methods in IDA
class AudioSource
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioSource() = default;

    virtual void Get(); // 0x406130

};
// 1 methods in IDA
class AudioThread
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioThread() = default;

    virtual void UpdateStats(); // 0x403920

};
// 1 methods in IDA
class AudioTimer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioTimer() = default;

    virtual void DecrementAll(); // 0x408230

};

} // namespace gamemd
