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
    int32_t Init();
    // IDA 0x4071C0
    int32_t PlayBuffer(int32_t index, int32_t volume, int32_t pan);
    // IDA 0x4071C0 area
    int32_t RequestOrEndBuffer(int32_t index);
    // IDA 0x407150 area
    void ReleaseChannel(int32_t channel);
    // IDA 0x407150 area
    void RequestAllBuffers();
    // IDA 0x407150 area
    void StopAll();
    // IDA 0x407150 area
    void SetVolume(int32_t volume);
    // IDA 0x407150 area
    void SetPan(int32_t pan);
    // IDA 0x407150 area
    bool IsPlaying(int32_t channel);

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
    void SetFlag70();
    // IDA 0x48B2A0 area
    void SetFlag68();
    // IDA 0x48B2A0 area
    static int32_t DlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);
    // IDA 0x48B2A0 area
    void LoadINI();
    // IDA 0x48B2A0 area
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
    static void Stop(int32_t channel);
    // IDA 0x407150 area
    static void DetachChannel(AudioController* ctrl);

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
    static void ReleaseChannel(int32_t channel);
    // IDA 0x407150 area
    static void RequestAllBuffers();

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
    void RequestBuffer(int32_t index);
    // IDA 0x48B2A0 area
    int32_t GetValue() const;
    // IDA 0x48B2A0 area
    void ReadThemeEntry(const char* name);
    // IDA 0x48B2A0 area
    void LoadThemeINI();
    // IDA 0x48B2A0 area
    int32_t GetThemeIndex(const char* name);
    // IDA 0x48B2A0 area
    const char* GetThemeName(int32_t index);
    // IDA 0x48B2A0 area
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
    static void QueueSong(int32_t index);
    // IDA 0x48B2A0 area
    static void Stop();
    // IDA 0x48B2A0 area
    static bool IsPlaying();

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
    static void ProcessCallback();
    // IDA 0x48B2A0 area
    static void Cleanup();

    static int32_t  s_CallbackState; // 0x00
};

} // namespace gamemd
