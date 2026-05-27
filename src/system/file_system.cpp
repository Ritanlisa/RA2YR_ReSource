#include "gamemd/system/file_system.hpp"
#include "gamemd/system/convert_class.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/render/palette.hpp"

namespace gamemd
{

SHPStruct* FileSystem::PIPBRD_SHP = nullptr;
SHPStruct* FileSystem::PIPS_SHP = nullptr;
SHPStruct* FileSystem::PIPS2_SHP = nullptr;
SHPStruct* FileSystem::TALKBUBL_SHP = nullptr;
SHPStruct* FileSystem::WRENCH_SHP = nullptr;
SHPStruct* FileSystem::POWEROFF_SHP = nullptr;
SHPStruct* FileSystem::GRFXTXT_SHP = nullptr;

BytePalette& FileSystem::TEMPERAT_PAL = *reinterpret_cast<BytePalette*>(nullptr);
BytePalette* FileSystem::GRFXTXT_PAL = nullptr;

ConvertClass* FileSystem::CAMEO_PAL = nullptr;
ConvertClass* FileSystem::UNITx_PAL = nullptr;
ConvertClass* FileSystem::x_PAL = nullptr;
ConvertClass* FileSystem::GRFTXT_TIBERIUM_PAL = nullptr;
ConvertClass* FileSystem::ANIM_PAL = nullptr;
ConvertClass* FileSystem::THEATER_PAL = nullptr;
ConvertClass* FileSystem::MOUSE_PAL = nullptr;
ConvertClass* FileSystem::GRFXTXT_Convert = nullptr;

void* FileSystem::LoadFile(const char* pFileName, bool bLoadAsSHP)
{
    // TODO: search MIX archives, then disk, for the file
    (void)pFileName;
    (void)bLoadAsSHP;
    return nullptr;
}

void* FileSystem::LoadWholeFileEx(const char* pFilename, bool& outAllocated)
{
    // TODO: open CCFileClass, read entire file into buffer
    (void)pFilename;
    outAllocated = false;
    return nullptr;
}

BytePalette* FileSystem::AllocatePalette(const char* pFilename)
{
    // TODO: load .pal file from MIX/disk, allocate BytePalette
    (void)pFilename;
    return nullptr;
}

ConvertClass* FileSystem::LoadPALFile(const char* pFileName, DSurface* pSurface)
{
    // TODO: load palette file, create ConvertClass from it
    (void)pFileName;
    (void)pSurface;
    return nullptr;
}

} // namespace gamemd
