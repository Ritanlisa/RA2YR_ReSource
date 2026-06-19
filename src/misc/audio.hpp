#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"
#include "object/object.hpp"

struct IDirectSound;

namespace gamemd
{

#ifndef GAMEMD_USING_AudioController
#define GAMEMD_USING_AudioController
using ra2::game::AudioController;
#endif

class CCINIClass;
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
struct AudioEventHandle;

struct VocClassHeader
{
    VocClassHeader* Next;
    VocClassHeader* Prev;
    uint32_t        Magic;
};

// YRpp: VolumeStruct — DirectSound buffer volume/fade state (8 dwords, 0x20 bytes)
// Used by EndBufferMixer (0x407150) and AudioMixer::PlaySample (0x4071C0)
struct VolumeStruct
{
    int32_t  Volume;          // 0x00: raw INI volume (0-16384); bit0=stopped, bit2=playing
    int32_t  AudioState;      // 0x04: set to 4 during cleanup (VocClass::Cleanup), uninitialized otherwise
    int32_t  ScaledVolume;    // 0x08: Volume * 1024 (default = MaxVolume * 1024)
    int32_t  FadeIncrement;   // 0x0C: default 1073741 — fade step size
    int32_t  FadeDuration;    // 0x10: default 1000 ms — total fade time
    int32_t  FadeLevel;       // 0x14: default 0 — current fade level
    uint32_t hBuffer;         // 0x18: ds:87E848h — DirectSound buffer handle or internal ref
    int32_t  MaxVolume;       // 0x1C: default 16384 — maximum volume
};

class VocClass
{
public:
    static DynamicVectorClass<VocClass*>* Array;
    static bool VoicesEnabled;

    // IDA 0x7514D0
    static VocClass* Find(const char* pName);
    // IDA 0x7514D0 (same address, Find calls FindIndex)
    static int32_t FindIndex(const char* pName);  // 0x7514D0

    // IDA 0x750920
    static void PlayGlobal(int32_t index, int32_t panning, float volume, AudioController* pCtrl = nullptr);
    // IDA 0x7509E0
    static void PlayAt(int32_t index, const CoordStruct& coords, AudioController* pCtrl = nullptr);
    // IDA 0x750E20
    static void PlayIndexAtPos(int32_t index, const CoordStruct& coords, int32_t a3 = 0);

    VocClassHeader   Header;             // 0x00 (0x0C bytes)
    int32_t          SamplesOK;          // 0x0C: 0 or 1, all samples usable
    SoundControl     Control;            // 0x10: sound.ini Control flags (bit5→Attack, bit6→Decay)
    SoundType        Type;               // 0x14: sound.ini Type flags
    VolumeStruct     Volume;             // 0x18: volume/fade/buffer state (0x20 bytes)
    // 0x38: VocClass::Cleanup iterates 4 DS buffer slots at this+0x28
    uint32_t         VocClass_field_38;           // 0x38
    uint32_t         VocClass_field_3C;           // 0x3C
    SoundPriority    Priority;           // 0x40: sound.ini Priority
    uint32_t         VocClass_field_44;           // 0x44: between Priority and Limit
    int32_t          Limit;              // 0x48: sound.ini Limit — max simultaneous plays
    int32_t          Loop;               // 0x4C: sound.ini Loop
    int32_t          Range;              // 0x50: sound.ini Range
    float            MinVolume;          // 0x54: sound.ini MinVolume (0.0–1.0)
    int32_t          MinDelay;           // 0x58: sound.ini Delay min
    int32_t          MaxDelay;           // 0x5C: sound.ini Delay max
    int32_t          MinFDelta;          // 0x60: sound.ini FShift min (frequency delta)
    int32_t          MaxFDelta;          // 0x64: sound.ini FShift max
    int32_t          VShift;             // 0x68: sound.ini VShift (volume shift, 0–100)
    char             Name[0x20];         // 0x6C: sound.ini section name
    // 0x8C–0xA7: audio channel state / buffer context (10 dwords)
    uint32_t         VocClass_field_8C;           // 0x8C
    uint32_t         VocClass_field_90;           // 0x90
    uint32_t         VocClass_field_94;           // 0x94
    uint32_t         VocClass_field_98;           // 0x98
    uint32_t         VocClass_field_9C;           // 0x9C
    uint32_t         VocClass_field_A0;           // 0xA0
    uint32_t         VocClass_field_A4;           // 0xA4
    uint32_t         ActiveBufferCount;  // 0xA8: count of active DS buffer slots (max 4, see Cleanup loop)
    uint32_t         VocClass_field_AC;           // 0xAC
    void*            pVoiceChannel;      // 0xB0: Voice/AudioStream channel pointer (released in Cleanup via AudioStream::ReleaseChannel)

    int32_t          SampleIndex[0x20];  // 0xB4: audio sample indices (max 32)
    int32_t          NumSamples;         // 0x134: number of valid sample indices
    int32_t          Attack;             // 0x138: sound.ini Attack — set by Control bit 0x20
    int32_t          Decay;              // 0x13C: sound.ini Decay — set by Control bit 0x40
    uint32_t         VocClass_field_140;          // 0x140
    uint32_t         VocClass_field_144;          // 0x144

    VocClass() = delete;
    ~VocClass() = delete;
};

class VoxClass
{
public:
    static DynamicVectorClass<VoxClass*>* Array;
    static int32_t EVAIndex;

    // IDA 0x753250
    static VoxClass* Find(const char* pName);
    // IDA 0x752CB0 wrapper (uses Array search)
    static int32_t FindIndex(const char* pName);

    // IDA 0x752700
    static void Play(const char* pName, int32_t unk1 = -1, int32_t unk2 = -1);
    // IDA 0x752480
    static void PlayIndex(int32_t index, int32_t unk1 = -1, int32_t unk2 = -1);
    // IDA 0x750E20
    static void PlayAtPos(int32_t index, CoordStruct* pCoords, uint32_t unk = 0);
    // IDA 0x752A40
    static void SilenceIndex(int32_t index);
    // IDA 0x753330
    static const char* GetName(int32_t index);
    // IDA 0x7531A0
    static void DeleteAll();

    // IDA 0x752CB0
    VoxClass(const char* pName);
    // IDA 0x752D60
    ~VoxClass();

    // IDA 0x753380
    const char* GetFilename() const;
    // IDA 0x752DB0
    bool LoadFromINI(CCINIClass* pINI);

    char           Name[0x28];       // 0x00: eva.ini sound name
    float          Volume;           // 0x28: eva.ini Volume
    char           YuriVoice[9];     // 0x2C: eva.ini Yuri voice
    char           RussianVoice[9];  // 0x35: eva.ini Russian voice
    char           AlliedVoice[9];   // 0x3E: eva.ini Allied voice
    VoxPriority    Priority;         // 0x47: eva.ini Priority (1 byte enum)
    VoxType        Type;             // 0x48: eva.ini Type (1 byte enum)
    int32_t        voiceIndex;       // 0x4C: EVA voice index (YRpp: VoxClass_field_int_50)
};

class AudioController;

struct AudioEventHandle
{
    AudioController* Controller;
    int32_t          SoundIndex;
    int32_t          Volume;
    int32_t          Pan;
    bool             Is3D;
    bool             IsLooping;
    uint8_t          padding[2];
    CoordStruct*     Position3D;

    bool IsPlaying() const;  // 0x7529E0
    void Stop();
};

// --- DirectSound audio system ---

// IDA 0x40A7A0: initializes DirectSound, sets ppDS (0x87E89C), creates primary buffer
bool AudioInit(HWND hWnd);
// IDA 0x40A950: releases DirectSound, zeros ppDS
void AudioShutdown();
// IDA 0x407000: checks g_AudioConfigState (0x87E2A0) and g_SoundEnabled (0x87E728)
bool AudioIsSoundEnabled();
// IDA 0x40A7A0: returns *ppDS (dword_87E89C)
IDirectSound* Audio_GetDirectSound();

} // namespace gamemd
