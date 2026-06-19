#pragma once

#include "fundamentals.hpp"
#include "cc_file.hpp"

namespace gamemd
{

struct ColorStruct;
struct BytePalette;
struct SHPStruct;
class ConvertClass;
class DSurface;

struct BytePaletteEntry
{
    uint8_t R;
    uint8_t G;
    uint8_t B;
};

struct BytePalette
{
    BytePaletteEntry Entries[256];
};

class FileSystem
{
public:
    static void* LoadFile(const char* pFileName, bool bLoadAsSHP);

    // Load file and return size via outSize parameter
    static void* LoadFileWithSize(const char* pFileName, int* outSize, bool bLoadAsSHP); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    static void* LoadFile(const char* pFileName)
    {
        return LoadFile(pFileName, false);
    }

    static void* LoadSHPFile(const char* pFileName)
    {
        return LoadFile(pFileName, true);
    }

    static void* LoadWholeFileEx(const char* pFilename, bool& outAllocated);

    template <typename T>
    static T* LoadWholeFileEx(const char* pFilename, bool& outAllocated)
    {
        return static_cast<T*>(LoadWholeFileEx(pFilename, outAllocated));
    }

    template <typename T = void>
    static T* AllocateFile(const char* pFilename) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        CCFileClass file(pFilename);
        return static_cast<T*>(file.ReadWholeFile());
    }

    static BytePalette* AllocatePalette(const char* pFilename); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    static ConvertClass* LoadPALFile(const char* pFileName, DSurface* pSurface);

    // Content-based search: find any 768-byte palette file in MIX pool
    static void* LoadFirstPalette();
    static void* LoadFirstSHP();
    static void* LoadByHash(uint32_t hash);  // XCC hash-based lookup

    static SHPStruct* PIPBRD_SHP;
    static SHPStruct* PIPS_SHP;
    static SHPStruct* PIPS2_SHP;
    static SHPStruct* TALKBUBL_SHP;
    static SHPStruct* WRENCH_SHP;
    static SHPStruct* POWEROFF_SHP;
    static SHPStruct* GRFXTXT_SHP;

    static BytePalette& TEMPERAT_PAL;
    static BytePalette* GRFXTXT_PAL;

    static ConvertClass* CAMEO_PAL;
    static ConvertClass* UNITx_PAL;
    static ConvertClass* x_PAL;
    static ConvertClass* GRFTXT_TIBERIUM_PAL;
    static ConvertClass* ANIM_PAL;
    static ConvertClass* THEATER_PAL;
    static ConvertClass* MOUSE_PAL;
    static ConvertClass* GRFXTXT_Convert;
};

} // namespace gamemd
