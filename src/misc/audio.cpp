#include "misc/audio.hpp"
#include "core/vector.hpp"
#include "object/object.hpp"

#include <mmsystem.h>
#include <dsound.h>
#include <cstring>
extern int g_VocPlayState;  // data: 0xB1D388 (globals_core.hpp:1028)
extern int g_VocAudioConfig;  // data: 0xB1D37C (e4_globals_decls.hpp:1826 int 形; 41 行 use-cast 兼容)
extern char g_Str_Invalid_Voc[12];  // data: 0x846574 raw char* 真值 (globals_core.hpp:581 同址)

namespace gamemd
{

DynamicVectorClass<VocClass*>* VocClass::Array = nullptr;
DynamicVectorClass<VoxClass*>* VoxClass::Array = nullptr;

bool     VocClass::VoicesEnabled = true;
int32_t  VoxClass::EVAIndex      = 0;

// --- VocClass ---

VocClass* VocClass::Find(const char* pName)
{
    // TODO: complete implementation
    // Search VocClass::Array by name
    return nullptr;
}

// 0x7514d0
int32_t VocClass::FindIndex(const char* pName)
{
  int v2; // esi
  char *v3; // ecx
  char *v4; // eax

  if ( !pName ) /*0x7514d6*/
    return -1; /*0x7514d6*/
  v2 = 0; /*0x7514dd*/
  if ( g_VocPlayState <= 0 ) /*0x7514e1*/
    return -1; /*0x751515*/
  while ( 1 )
  {
    v3 = (char *)**((unsigned int **)g_VocAudioConfig + v2); /*0x7514eb*/
    v4 = (char *)(v3 ? (v3)->GetSampleName() : g_Str_Invalid_Voc);
    if ( !_strcmpi((char *)pName, v4) ) /*0x7514ff*/
      break; /*0x7514ff*/
    if ( ++v2 >= g_VocPlayState ) /*0x751513*/
      return -1; /*0x751513*/
  }
  return v2; /*0x751515*/
}
void VocClass::PlayGlobal(int32_t index, int32_t panning, float volume, AudioController* pCtrl)
{
    // TODO: complete implementation
}

void VocClass::PlayAt(int32_t index, const CoordStruct& coords, AudioController* pCtrl)
{
    // TODO: complete implementation
}

void VocClass::PlayIndexAtPos(int32_t index, const CoordStruct& coords, int32_t a3)
{
    // TODO: complete implementation
}

// --- VoxClass ---

VoxClass::VoxClass(const char* pName)
{
    std::memset(Name, 0, sizeof(Name));
    std::strncpy(Name, pName, sizeof(Name) - 1);

    Volume      = 1.0f;

    std::memset(YuriVoice,    0, sizeof(YuriVoice));
    std::memset(RussianVoice, 0, sizeof(RussianVoice));
    std::memset(AlliedVoice,  0, sizeof(AlliedVoice));

    Priority    = VoxPriority{};
    Type        = VoxType{};
    voiceIndex  = 0;

    if (Array)
    {
        Array->AddItem(this);
    }
}

VoxClass::~VoxClass()
{
    // TODO: complete implementation
    // Remove from Array, free resources
}

VoxClass* VoxClass::Find(const char* pName)
{
    // TODO: complete implementation
    return nullptr;
}

int32_t VoxClass::FindIndex(const char* pName)
{
    // TODO: complete implementation
    return -1;
}

void VoxClass::Play(const char* pName, int32_t unk1, int32_t unk2)
{
    // TODO: complete implementation
}

void VoxClass::PlayIndex(int32_t index, int32_t unk1, int32_t unk2)
{
    // TODO: complete implementation
}

void VoxClass::PlayAtPos(int32_t index, CoordStruct* pCoords, uint32_t unk)
{
    // TODO: complete implementation
}

void VoxClass::SilenceIndex(int32_t index)
{
    // TODO: complete implementation
}

const char* VoxClass::GetName(int32_t index)
{
    // TODO: complete implementation
    return nullptr;
}

void VoxClass::DeleteAll()
{
    // TODO: complete implementation
}

const char* VoxClass::GetFilename() const
{
    // TODO: complete implementation
    return Name;
}

bool VoxClass::LoadFromINI(CCINIClass* pINI)
{
    // TODO: complete implementation
    return false;
}

// --- DirectSound audio init (matches IDA 0x40A7A0 / 0x407000) ---

static HMODULE s_dsound_dll = nullptr;
static IDirectSound* g_pDirectSound = nullptr;  // IDA: ppDS at 0x87E89C
static bool g_Audio_Enabled = false;            // IDA: dword_87E728

typedef HRESULT (__stdcall *DirectSoundCreate_t)(LPCGUID lpGuid, LPDIRECTSOUND* ppDS, LPUNKNOWN pUnkOuter);

bool AudioInit(HWND hWnd)
{
    if (g_pDirectSound) return true;

    s_dsound_dll = LoadLibraryA("dsound.dll");
    if (!s_dsound_dll) return false;

    auto pCreate = (DirectSoundCreate_t)GetProcAddress(s_dsound_dll, "DirectSoundCreate");
    if (!pCreate) {
        FreeLibrary(s_dsound_dll);
        s_dsound_dll = nullptr;
        return false;
    }

    IDirectSound* pDS = nullptr;
    HRESULT hr = pCreate(nullptr, &pDS, nullptr);
    if (FAILED(hr) || !pDS) {
        FreeLibrary(s_dsound_dll);
        s_dsound_dll = nullptr;
        return false;
    }

    hr = pDS->SetCooperativeLevel(hWnd, DSSCL_EXCLUSIVE);
    if (FAILED(hr)) {
        pDS->Release();
        FreeLibrary(s_dsound_dll);
        s_dsound_dll = nullptr;
        return false;
    }

    g_pDirectSound = pDS;
    g_Audio_Enabled = (void *)(true);
    return true;
}

void AudioShutdown()
{
    g_Audio_Enabled = (false);
    if (g_pDirectSound) {
        g_pDirectSound->Release();
        g_pDirectSound = nullptr;
    }
    if (s_dsound_dll) {
        FreeLibrary(s_dsound_dll);
        s_dsound_dll = nullptr;
    }
}

bool AudioIsSoundEnabled()   // IDA 0x407000
{
    return g_Audio_Enabled;
}

IDirectSound* Audio_GetDirectSound()  // IDA 0x40A7A0
{
    return g_pDirectSound;
}

// --- AudioController member functions (defined in object.cpp, namespace ra2) ---

} // namespace gamemd

#include "misc/audio.hpp"
#include "e4/e4_globals_decls.hpp"
#include "core/globals_core.hpp"
#include "core/globals_core.hpp"

namespace gamemd {

// --- AudioEventHandle ---

bool AudioEventHandle::IsPlaying() const { return false; 
void AudioEventHandle::Stop() {

} // namespace gamemd
}  // L-fix: close namespace tail 1
} // namespace gamemd
