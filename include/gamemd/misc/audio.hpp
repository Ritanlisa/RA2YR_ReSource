#pragma once

#include <cstdint>
#include <windows.h>

#include "..\core\enums.hpp"
#include "..\core\vector.hpp"
#include "..\fundamentals.hpp"
#include "..\object\object.hpp"

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

struct VolumeStruct
{
    int32_t  Volume;
    uint32_t audioField_4;
    int32_t  audioField_8;
    int32_t  audioField_C;
    int32_t  audioField_10;
    int32_t  audioField_14;
    uint32_t audioField_18;
    int32_t  audioField_1C;
};

class VocClass
{
public:
    static DynamicVectorClass<VocClass*>* Array;
    static bool VoicesEnabled;

    static VocClass* Find(const char* pName);
    static int32_t FindIndex(const char* pName);

    static void PlayGlobal(int32_t index, int32_t panning, float volume, AudioController* pCtrl = nullptr);
    static void PlayAt(int32_t index, const CoordStruct& coords, AudioController* pCtrl = nullptr);
    static void PlayIndexAtPos(int32_t index, const CoordStruct& coords, int32_t a3 = 0);

    VocClassHeader   Header;
    int32_t          SamplesOK;
    SoundControl     Control;
    SoundType        Type;
    VolumeStruct     Volume;
    uint32_t         audioField_38;
    uint32_t         audioField_3C;
    SoundPriority    Priority;
    uint32_t         audioField_44;
    int32_t          Limit;
    int32_t          Loop;
    int32_t          Range;
    float            MinVolume;
    int32_t          MinDelay;
    int32_t          MaxDelay;
    int32_t          MinFDelta;
    int32_t          MaxFDelta;
    int32_t          VShift;
    char             Name[0x20];
    uint32_t         audioField_8C;
    uint32_t         audioField_90;
    uint32_t         audioField_94;
    uint32_t         audioField_98;
    uint32_t         audioField_9C;
    uint32_t         audioField_A0;
    uint32_t         audioField_A4;
    uint32_t         audioField_A8;
    uint32_t         audioField_AC;
    uint32_t         audioField_B0;

    int32_t          SampleIndex[0x20];
    int32_t          NumSamples;
    int32_t          Attack;
    int32_t          Decay;
    uint32_t         audioField_140;
    uint32_t         audioField_144;

    VocClass() = delete;
    ~VocClass() = delete;
};

class VoxClass
{
public:
    static DynamicVectorClass<VoxClass*>* Array;
    static int32_t EVAIndex;

    static VoxClass* Find(const char* pName);
    static int32_t FindIndex(const char* pName);

    static void Play(const char* pName, int32_t unk1 = -1, int32_t unk2 = -1);
    static void PlayIndex(int32_t index, int32_t unk1 = -1, int32_t unk2 = -1);
    static void PlayAtPos(int32_t index, CoordStruct* pCoords, uint32_t unk = 0);
    static void SilenceIndex(int32_t index);
    static const char* GetName(int32_t index);
    static void DeleteAll();

    VoxClass(const char* pName);
    ~VoxClass();

    const char* GetFilename() const;
    bool LoadFromINI(CCINIClass* pINI);

    char           Name[0x28];
    float          Volume;
    char           YuriVoice[9];
    char           RussianVoice[9];
    char           AlliedVoice[9];
    VoxPriority    Priority;
    VoxType        Type;
    int32_t        audioField_50;

    // TODO: complete VoxClass
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

    bool IsPlaying() const { return false; }
    void Stop() {}

    // TODO: complete AudioEventHandle
};

// --- DirectSound audio system (IDA 0x40A7A0 / 0x407000) ---
bool AudioInit(HWND hWnd);
void AudioShutdown();
bool AudioIsSoundEnabled();       // IDA 0x407000: checks dword_87E728
IDirectSound* Audio_GetDirectSound();  // IDA 0x40A7A0: returns ppDS (0x87E89C)

} // namespace gamemd
