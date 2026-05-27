#include "gamemd/misc/audio.hpp"
#include "gamemd/core/vector.hpp"

#include <cstring>

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

int32_t VocClass::FindIndex(const char* pName)
{
    // TODO: complete implementation
    return -1;
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
    unknown_50  = 0;

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

// --- AudioController ---

void AudioController::Stop()
{
    // TODO: complete implementation
}

void AudioController::Start(int32_t soundIndex)
{
    // TODO: complete implementation
}

void AudioController::Pause()
{
    // TODO: complete implementation
}

void AudioController::Resume()
{
    // TODO: complete implementation
}

} // namespace gamemd
