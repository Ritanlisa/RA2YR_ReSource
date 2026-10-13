#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "misc/audio.hpp"

namespace gamemd
{

} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class AudioController; } }
namespace gamemd {
#ifndef GAMEMD_USING_AudioController
#define GAMEMD_USING_AudioController
using ::ra2::game::AudioController;
#endif

// ============================================================================
// AudioMixer — DirectSound mixer (9 methods)
// IDA: Init 0x407150, PlayBuffer 0x4071C0
// ============================================================================
#ifndef GAMEMD_G2_AudioMixer_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioMixer_DEF 1
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
    void ReleaseChannel(int32_t channel);
    // IDA 0x407150 area
    void RequestAllBuffers();
    // IDA 0x407150 area
    void StopAll();
    // IDA 0x407150 area
    void SetVolume(int32_t volume);  // 0x406650
    // IDA 0x407150 area
    // design: no binary equivalent found in IDA
    void SetPan(int32_t pan);
    // IDA 0x407150 area
    bool IsPlaying(int32_t channel);

    uint32_t    AudioMixer_field_00;       // 0x00
    uint32_t    AudioMixer_field_04;       // 0x04
    uint32_t    AudioMixer_field_08;       // 0x08
    uint32_t    AudioMixer_field_0C;       // 0x0C
    uint32_t    AudioMixer_field_10;       // 0x10
    uint32_t    AudioMixer_field_14;       // 0x14
    unsigned char u32_80;  // 0x80
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void ProcessAudioFrame();  // 0x408000
    int SetupChannels();  // 0x408A70
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Pump();  // 0x753620
    int Shutdown();  // 0x406e80
    // === FUNCS-MOVE (END) ===
    unsigned int q008;  // 0x8 (offset-truth)

    unsigned int u32_4C;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_AudioMixer_DEF

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
    void LoadINI();
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    void SaveINI();

    bool        m_Flag68;       // 0x00
    bool        m_Flag70;       // 0x01
    uint8_t     _pad_02[2];     // 0x02
    int32_t     AudioSettings_field_04;       // 0x04
    int32_t     AudioSettings_field_08;       // 0x08
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Check(int a1);  // 0x7209B0
    int ComputeTransform(int a1, int a2, int a3, int a4, int a5);  // 0x720E50
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
};

// ============================================================================
// Voice — voice channel management (2 methods)
// IDA: Stop, DetachChannel
// ============================================================================
#ifndef GAMEMD_G2_Voice_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Voice_DEF 1
class Voice
{
public:
    // IDA 0x407150 area
int Stop(void);  // 0x4025B0
    // IDA 0x407150 area
    static void DetachChannel(AudioController* ctrl);  // 0x404140

    static int32_t  s_ActiveChannels; // 0x00
};
#endif  // GAMEMD_G2_Voice_DEF

// ============================================================================
// Mixer — audio buffer mixer (2 methods)
// IDA: ReleaseChannel, RequestAllBuffers
// ============================================================================
class Mixer
{
public:
    // IDA 0x407150 area
     void ReleaseChannel(int32_t channel);  // 0x406060
    // IDA 0x407150 area
    static void RequestAllBuffers();  // 0x4083D0

    int32_t     Mixer_field_00;       // 0x00
};

// ============================================================================
// ThemeClass — theme music management (7 methods)
// IDA: RequestBuffer, GetValue, ReadThemeEntry
// ============================================================================
// CSP: ThemeClass matched via T1+T3
#ifndef GAMEMD_G2_ThemeClass_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_ThemeClass_DEF 1
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Play(int a1);  // 0x720BB0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int ClearQueues();  // 0x752370
    static bool GetField(int a1);  // 0x752ab0
    // === FUNCS-MOVE (END) ===

    unsigned char u8_9;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_ThemeClass_DEF

// ============================================================================
// Theme — theme playback (3 methods)
// IDA: QueueSong, Stop, IsPlaying
// ============================================================================
class Theme
{
public:
    // IDA 0x48B2A0 area
     void QueueSong(int32_t index);  // 0x720B20
    // IDA 0x48B2A0 area
     void Stop();  // 0x720EA0
    // IDA 0x48B2A0 area
     bool IsPlaying();  // 0x720FD0

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
     void ProcessCallback();  // 0x4080F0
    // IDA 0x48B2A0 area
     void Cleanup();  // 0x720770

    static int32_t  s_CallbackState; // 0x00
};


// === Batch-generated MISSING class stubs ===

// 1 methods in IDA
class Audio3D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Audio3D() = default;

virtual void ComputeRotation(float *a2, unsigned int a3);  // 0x0055a7d0 g57w12-r raw-sync (def-form)

};
// 1 methods in IDA
// CSP: AudioBuffer matched via T1
class AudioBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioBuffer() = default;

    virtual unsigned int * InitializePlayback(); // 0x409C40 (G42.33 批 3: 真值对齐)


    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_74;  // X10 supply (member_lookup)
    unsigned int u32_7C;  // X10 supply (member_lookup)
    unsigned int u32_80;  // X10 supply (member_lookup)
    unsigned int u32_84;  // X10 supply (member_lookup)
    unsigned int u32_88;  // X10 supply (member_lookup)
    unsigned char u32_881[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_8C;  // X10 supply (member_lookup)
    unsigned int u32_90;  // X10 supply (member_lookup)
    unsigned int u32_98;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    unsigned char u32_9C6[4];  /* void */  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
};
// 3 methods in IDA
// CSP: AudioChannel matched via T1
#ifndef GAMEMD_G2_AudioChannel_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioChannel_DEF 1
class AudioChannel
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioChannel() = default;

    virtual int IsActive(); // 0x4010A0
    virtual int DeactivatePlay(); // 0x402600
    virtual int ActivatePlay(); // 0x402650

    uint8_t AudioChannel_field_0x04[4];
    uint8_t AudioChannel_field_0x08[4];
    unsigned int u32_28;  // g57w10 C2039 supply (ml offset name)
    unsigned int u32_50;
    unsigned int u32_A4;
    unsigned int u32_D4;

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
};
#endif  // GAMEMD_G2_AudioChannel_DEF
// 1 methods in IDA
// CSP: AudioCodec matched via T1
class AudioCodec
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioCodec() = default;

    virtual void Decode(); // 0x7C81DB

};
// 1 methods in IDA
// CSP: AudioConfig matched via T1
class AudioConfig
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioConfig() = default;

    virtual void InitDefault(); // 0x754BE0

};
// 1 methods in IDA
// CSP: AudioEvent matched via T1
class AudioEvent
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioEvent() = default;

    virtual void LoadFromINI(); // 0x752DB0

    char LoadFromINI(uint8_t ***a2);
};
// 2 methods in IDA
// CSP: AudioFile matched via T1
#ifndef GAMEMD_G2_AudioFile_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioFile_DEF 1
class AudioFile
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioFile() = default;

    virtual int GetCallback(); // 0x4026A0
    virtual void Stop(); // 0x405FD0

    uint8_t AudioFile_field_0x04[4];

    unsigned int u32_D4;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_AudioFile_DEF
// 1 methods in IDA
class AudioFileClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioFileClass() = default;

    virtual unsigned int * Release(); // 0x405C00


    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
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
#ifndef GAMEMD_G2_AudioIndex_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioIndex_DEF 1
class AudioIndex
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioIndex() = default;

    virtual unsigned int * GetSampleInformation(unsigned int *a1, int a2, unsigned int *a3); // 0x401640 (G42.33 批 3: 真值对齐)

};
#endif  // GAMEMD_G2_AudioIndex_DEF
// 1 methods in IDA
// CSP: AudioList matched via T1
class AudioList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioList() = default;

    virtual int GetNextEntry(); // 0x407480


    unsigned int u32_4;  // X10 supply (member_lookup)
};
// 1 methods in IDA
#ifndef GAMEMD_G2_AudioNode_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioNode_DEF 1
class AudioNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioNode() = default;

    virtual int Release(); // 0x408600


    unsigned int u32_14;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_AudioNode_DEF
// 1 methods in IDA
class AudioOcclusion
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioOcclusion() = default;

    virtual void ComputeBoundingVertices(); // 0x756BB0


    unsigned int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
#ifndef GAMEMD_G2_AudioOptionsClass_DEF  // G42.57w14 carrier twin-guard (shared w/ _w14_nocarrier_e4.hpp)
#define GAMEMD_G2_AudioOptionsClass_DEF 1
// 1 methods in IDA
class AudioOptionsClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioOptionsClass() = default;

    virtual void ApplySettings(); // 0x5FB160


    unsigned int u32_1D;  // X10 supply (member_lookup)
    unsigned int u32_1E;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_46;  // X10 supply (member_lookup)
};
#endif  // GAMEMD_G2_AudioOptionsClass_DEF
// 1 methods in IDA
class AudioPool
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioPool() = default;

    virtual int * ProcessQueue(); // 0x405190


    unsigned int u32_C;  // X10 supply (member_lookup)
};
// 5 methods in IDA
class AudioSample
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioSample() = default;

    virtual int ResetState(); // 0x4024A0
    virtual int Destructor(); // 0x407A90
    virtual int IsBuffering(); // 0x4080D0
    virtual void InitLinkedList(); // 0x408840
    virtual int SetField(); // 0x408930

    uint8_t AudioSample_field_0x04[4];
    uint8_t AudioSample_field_0x08[4];
    uint8_t AudioSample_field_0x0C[4];
    uint8_t AudioSample_field_0x10[4];

    int q004;  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    unsigned char q010[4];  /* AudioMixer */  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    uint32_t u32_15C;  // X10 supply (member_lookup)
    uint32_t u32_160;  // X10 supply (member_lookup)
    uint32_t u32_164;  // X10 supply (member_lookup)
    unsigned int u32_168;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_2C;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_7C;  // X10 supply (member_lookup)
    unsigned int u32_88;  // X10 supply (member_lookup)
    unsigned int u32_90;  // X10 supply (member_lookup)
    unsigned int u32_94;  // X10 supply (member_lookup)
    unsigned int u32_98;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    int u32_B0;  // X10 supply (member_lookup)
    int u32_B4;  // X10 supply (member_lookup)
    int u32_B8;  // X10 supply (member_lookup)
    int u32_BC;  // X10 supply (member_lookup)
    int u32_C0;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class AudioSource
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioSource() = default;

    virtual int * Get(); // 0x406130


    unsigned int u32_4;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
};
// 1 methods in IDA
class AudioThread
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AudioThread() = default;

    virtual int UpdateStats(int64_t a2);


    unsigned int u32_10;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_8;  // X10 supply (member_lookup)
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
