#include "gamemd/system/file_system.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/convert_class.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/render/palette.hpp"
#include "gamemd/core/logging.hpp"

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
    &MixFileClass::Generics.MULTI,
    &MixFileClass::Generics.MULTIMD,
    nullptr
};

void* FileSystem::LoadFile(const char* pFileName, bool bLoadAsSHP)
{
    if (!pFileName) return nullptr;

    uint32_t id = MixFileClass::ComputeID(pFileName);
    LOG_TRACE("FileSystem::LoadFile '%s' -> hash 0x%08X", pFileName, id);

    // Search all loaded MIX files (including recursively extracted sub-MIX)
    auto& pool = MixFileClass::GetMixPool();
    for (int i = 0; i < pool.Count; ++i) {
        auto* mix = pool[i];
        if (!mix || !mix->IsValid()) continue;

        int idx = mix->FindIndex(id);
        if (idx < 0) continue;

        int sz = mix->GetSize(idx);
        if (sz <= 0) continue;

        void* buf = malloc(sz);
        if (!buf) return nullptr;

        if (mix->Extract(idx, buf, sz)) {
            LOG_INFO("FileSystem: loaded '%s' (%d bytes) from MIX", pFileName, sz);
            return buf;
        }
        free(buf);
    }

    LOG_TRACE("FileSystem::LoadFile '%s' NOT found in MIX, trying disk", pFileName);

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

void* FileSystem::LoadFirstPalette()
{
    auto& pool = MixFileClass::GetMixPool();
    LOG_TRACE("FileSystem::LoadFirstPalette: scanning %d MIX files", pool.Count);
    for (int mi = 0; mi < pool.Count; ++mi) {
        auto* mix = pool[mi];
        if (!mix || !mix->IsValid()) continue;
        for (int i = 0; i < mix->CountFiles; ++i) {
            int sz = mix->GetSize(i);
            if (sz != 768) continue;
            void* buf = malloc(768);
            if (buf && mix->Extract(i, buf, 768)) {
                LOG_INFO("FileSystem: found 768B file in MIX[%d] idx=%d hash=0x%08X", mi, i, mix->GetFileID(i));
                return buf;
            }
            free(buf);
        }
    }
    LOG_TRACE("FileSystem::LoadFirstPalette: no 768B file found");
    return nullptr;
}

void* FileSystem::LoadFirstSHP()
{
    auto& pool = MixFileClass::GetMixPool();
    LOG_TRACE("FileSystem::LoadFirstSHP: scanning %d MIX files", pool.Count);
    void* best = nullptr;
    int best_score = -1, best_sz = 0;

    for (int mi = 0; mi < pool.Count; ++mi) {
        auto* mix = pool[mi];
        if (!mix || !mix->IsValid()) continue;
        for (int i = 0; i < mix->CountFiles; ++i) {
            int sz = mix->GetSize(i);
            if (sz < 20 || sz > 2000000) continue;
            uint8_t head[8];
            if (!mix->Peek(i, head, 8)) continue;
            uint16_t frames = *(uint16_t*)(head + 0);
            uint16_t max_w  = *(uint16_t*)(head + 2);
            uint16_t max_h  = *(uint16_t*)(head + 4);
            if (frames == 0 || frames > 1000) continue;
            if (max_w == 0 || max_w > 1024) continue;
            if (max_h == 0 || max_h > 1024) continue;

            int score = 0;
            if (max_w >= 640 && max_w <= 1024) score += 100;
            if (max_h >= 400 && max_h <= 768)  score += 50;
            if (frames > 1 && frames <= 300)  score += frames;

            void* data = malloc(sz);
            if (data && mix->Extract(i, data, sz)) {
                LOG_TRACE("SHP candidate: MIX[%d] idx=%d %dx%d %df sz=%d score=%d",
                    mi, i, max_w, max_h, frames, sz, score);
                if (score > best_score) {
                    free(best); best = data; best_score = score; best_sz = sz;
                    continue;
                }
            }
            free(data);
        }
    }

    if (best) { LOG_INFO("LoadFirstSHP: %dx%d %d bytes", best_sz > 0 ? best_sz : 0, best_score, best_sz); }
    return best;
}

} // namespace gamemd
