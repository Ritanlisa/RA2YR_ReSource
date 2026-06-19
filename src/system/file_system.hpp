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
    static void* LoadFile(const char* pFileName, bool bLoadAsSHP); // IDA: NOT_FOUND

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

    static void* LoadWholeFileEx(const char* pFilename, bool& outAllocated); // IDA: NOT_FOUND

    template <typename T>
    static T* LoadWholeFileEx(const char* pFilename, bool& outAllocated)
    {
        return static_cast<T*>(LoadWholeFileEx(pFilename, outAllocated));
    }

    template <typename T = void>
    static T* AllocateFile(const char* pFilename) // IDA: UNMATCHED — no_callgraph_match, no_git_history
    {
        CCFileClass file(pFilename); // IDA: NOT_FOUND
        return static_cast<T*>(file.ReadWholeFile());
    }

    static BytePalette* AllocatePalette(const char* pFilename); // IDA: UNMATCHED — no_callgraph_match, no_git_history

    static ConvertClass* LoadPALFile(const char* pFileName, DSurface* pSurface); // IDA: NOT_FOUND

    // Content-based search: find any 768-byte palette file in MIX pool
    static void* LoadFirstPalette(); // IDA: NOT_FOUND
    static void* LoadFirstSHP(); // IDA: NOT_FOUND
    static void* LoadByHash(uint32_t hash);  // XCC hash-based lookup // IDA: NOT_FOUND

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
