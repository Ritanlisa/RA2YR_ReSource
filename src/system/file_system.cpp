#include "gamemd/system/file_system.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/convert_class.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/render/palette.hpp"

#include <cstdio>
#include <cstring>
#include <cstdlib>

namespace gamemd
{

static MixFileClass** g_search_mixes[] = {
    &MixFileClass::Generics.RA2MD,
    &MixFileClass::Generics.RA2,
    &MixFileClass::Generics.LANGMD,
    &MixFileClass::Generics.LANGUAGE,
    &MixFileClass::Generics.MAIN,
    nullptr
};

void* FileSystem::LoadFile(const char* pFileName, bool bLoadAsSHP)
{
    if (!pFileName) return nullptr;

    uint32_t id = MixFileClass::ComputeID(pFileName);

    for (int i = 0; g_search_mixes[i]; ++i) {
        auto* mix = *g_search_mixes[i];
        if (!mix || !mix->IsValid()) continue;

        int idx = mix->FindIndex(id);
        if (idx < 0) continue;

        int sz = mix->GetSize(idx);
        if (sz <= 0) continue;

        void* buf = malloc(sz);
        if (!buf) return nullptr;

        if (mix->Extract(idx, buf, sz)) {
            fprintf(stderr, "[gamemd] FileSystem: loaded '%s' (%d bytes) from MIX\n",
                pFileName, sz);
            return buf;
        }
        free(buf);
    }

    FILE* fp = fopen(pFileName, "rb");
    if (!fp) return nullptr;

    fseek(fp, 0, SEEK_END);
    long sz = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    void* buf = malloc(sz);
    if (!buf) { fclose(fp); return nullptr; }

    fread(buf, 1, sz, fp);
    fclose(fp);
    return buf;
    (void)bLoadAsSHP;
}

void* FileSystem::LoadWholeFileEx(const char* pFilename, bool& outAllocated)
{
    void* data = LoadFile(pFilename, false);
    outAllocated = (data != nullptr);
    return data;
}

BytePalette* FileSystem::AllocatePalette(const char* pFilename)
{
    void* data = LoadFile(pFilename, false);
    if (!data) return nullptr;

    uint8_t* raw = static_cast<uint8_t*>(data);

    auto* palette = static_cast<BytePalette*>(malloc(sizeof(BytePalette)));
    if (!palette) { free(data); return nullptr; }

    for (int i = 0; i < 256; ++i) {
        palette->Entries[i].R = raw[i * 3 + 0] << 2;
        palette->Entries[i].G = raw[i * 3 + 1] << 2;
        palette->Entries[i].B = raw[i * 3 + 2] << 2;
    }

    free(data);
    return palette;
}

ConvertClass* FileSystem::LoadPALFile(const char* pFileName, DSurface* pSurface)
{
    (void)pFileName;
    (void)pSurface;
    return nullptr;
}

} // namespace gamemd
