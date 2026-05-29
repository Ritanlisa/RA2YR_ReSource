#include "gamemd/system/file_system.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/convert_class.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/render/palette.hpp"
#include "gamemd/system/xcc_names.hpp"
#include "gamemd/core/logging.hpp"

#include <cstdio>
#include <cstring>
#include <cstdlib>

namespace gamemd
{

void* FileSystem::LoadFile(const char* pFileName, bool bLoadAsSHP)
{
    if (!pFileName) return nullptr;

    uint32_t id = MixFileClass::ComputeID(pFileName);
    LOG_TRACE("FileSystem::LoadFile '%s' -> hash 0x%08X", pFileName, id);

    auto& pool = MixFileClass::GetMixPool();
    for (int i = 0; i < pool.Count; ++i) {
        auto* mix = pool[i];
        if (!mix || !mix->IsValid()) continue;

        int idx = mix->FindIndex(pFileName);  // dual-hash search (CRC32 then Classic)
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
    void* best = nullptr; int best_sz = 0;

    for (int mi = 0; mi < pool.Count; ++mi) {
        auto* mix = pool[mi];
        if (!mix || !mix->IsValid()) continue;
        for (int i = 0; i < mix->CountFiles; ++i) {
            int sz = mix->GetSize(i);
            // SHP files: 8KB-4MB, prefer files from UI/menu-related MIXes
            if (sz < 8000 || sz > 4000000) continue;
            uint8_t head[12];
            if (!mix->Peek(i, head, 12)) continue;

            // Try TD header: frames(2), width(2), height(2)
            uint16_t td_frames = *(uint16_t*)(head + 0);
            uint16_t td_w = *(uint16_t*)(head + 2);
            uint16_t td_h = *(uint16_t*)(head + 4);
            bool td_valid = (td_frames > 0 && td_frames <= 500 && td_w > 0 && td_w <= 1024 && td_h > 0 && td_h <= 1024);

            // Try TS/RA2 header: size(4), width(2), height(2), frames(2)
            uint16_t ts_w = *(uint16_t*)(head + 4);
            uint16_t ts_h = *(uint16_t*)(head + 6);
            uint16_t ts_frames = *(uint16_t*)(head + 8);
            bool ts_valid = (ts_frames > 0 && ts_frames <= 500 && ts_w > 0 && ts_w <= 1024 && ts_h > 0 && ts_h <= 1024);

            if (!td_valid && !ts_valid) continue;

            int w = td_valid ? td_w : ts_w;
            int h = td_valid ? td_h : ts_h;
            int f = td_valid ? td_frames : ts_frames;

            if (h < 1 || w < 100) continue;
            int score = w * h;
            if (f > 1) score += f * 100;
            if (h > 200) score += 50000;
            if (h > 400) score += 100000;

            // Log ALL candidates from newly loaded sub-MIXes
            LOG_TRACE("SHP? MIX[%d] idx=%d hash=0x%08X %dx%d %df sz=%d score=%d",
                mi, i, mix->GetFileID(i), w, h, f, sz, score);

            if (score > best_sz) {
                void* data = malloc(sz);
                if (data && mix->Extract(i, data, sz)) {
                    LOG_INFO("SHP candidate: %dx%d %df sz=%d score=%d", w, h, f, sz, score);
                    free(best); best = data; best_sz = score;
                } else { free(data); }
            }
        }
    }
    if (best) LOG_INFO("LoadFirstSHP: best score=%d", best_sz);
    return best;
}

void* FileSystem::LoadByHash(uint32_t hash)
{
    auto& pool = MixFileClass::GetMixPool();
    for (int i = 0; i < pool.Count; ++i) {
        auto* mix = pool[i];
        if (!mix || !mix->IsValid()) continue;
        int idx = mix->FindIndex(hash);
        if (idx < 0) continue;
        int sz = mix->GetSize(idx);
        if (sz <= 0) continue;
        void* buf = malloc(sz);
        if (buf && mix->Extract(idx, buf, sz)) {
            const char* name = xcc::XccLookup(hash);
            LOG_INFO("FileSystem::LoadByHash 0x%08X (%s): %d bytes", hash, name ? name : "?", sz);
            return buf;
        }
        free(buf);
    }
    const char* name = xcc::XccLookup(hash);
    LOG_TRACE("FileSystem::LoadByHash 0x%08X (%s): NOT found", hash, name ? name : "?");
    return nullptr;
}

} // namespace gamemd
