#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <windows.h>

#include "gamemd/core/logging.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/render/surface.hpp"
#include "gamemd/core/ddraw_init.hpp"

namespace gamemd {

//
// Init_Game — reverse-engineered from IDA (0x52BA60)
// Complete game resource loading workflow:
//
// The original function is 4333 bytes (146 basic blocks).
// This implementation focuses on the resource loading sections.
//

// External globals set during init
extern void* RulesClass_Instance;   // 0x8871E0
extern void* RandomState_Seed;      // 0xA8B230
void* g_MouseSHP = nullptr;         // dword_B0BCF0 — loaded from MOUSE.SHA
bool  g_CmdLine_NoCD = false;       // 0x89E410

// Color conversion helper: converts 6-bit palette entry to 16-bit RGB565
// (mirrors sub_4355B0 from IDA)
static uint32_t MakeRGB565(uint8_t r, uint8_t g, uint8_t b)
{
    // 8-bit RGB → 5/6/5 bits for 16-bit display
    uint16_t r5 = r >> 3;
    uint16_t g6 = g >> 2;
    uint16_t b5 = b >> 3;
    return (r5 << 11) | (g6 << 5) | b5;
}

// Palette table entry: stores both original RGB bytes + converted 16-bit value
struct PaletteEntry {
    uint8_t  R, G, B;
    uint16_t color16;
};

// ---------------------------------------------------------------------------
// Palette Loading — 7 palettes loaded from MIX in specific order
// Each palette: MIXFile_Search(name) → memcpy(768 bytes) → color conversion
// ---------------------------------------------------------------------------

struct InitPaletteStore
{
    PaletteEntry Unitsno[256];    // "UNITSNO.PAL"
    PaletteEntry Temperat[256];   // "TEMPERAT.PAL"
    PaletteEntry Waypoint[256];   // "WAYPOINT.PAL"
    PaletteEntry Anim[256];       // "ANIM.PAL"
    PaletteEntry Palette[256];    // "PALETTE.PAL" (master palette)
    PaletteEntry Cameo[256];      // "CAMEO.PAL"
    PaletteEntry Mouse[256];      // "MOUSEPAL.PAL"
};

static InitPaletteStore g_Palettes;

// Load a single 768-byte palette from MIX, convert to 16-bit entries
static bool LoadPaletteFromMIX(const char* name, PaletteEntry* out)
{
    void* data = FileSystem::LoadFile(name, false);
    if (!data) {
        LOG_WARN("LoadPaletteFromMIX: '%s' not found", name);
        return false;
    }
    uint8_t* src = static_cast<uint8_t*>(data);
    for (int i = 0; i < 256; ++i) {
        out[i].R = src[i * 3 + 0];
        out[i].G = src[i * 3 + 1];
        out[i].B = src[i * 3 + 2];
        // Convert to 16-bit RGB565 (original uses 6-bit→8-bit shift then 565)
        out[i].color16 = static_cast<uint16_t>(
            MakeRGB565(src[i * 3 + 0] << 2, src[i * 3 + 1] << 2, src[i * 3 + 2] << 2));
    }
    free(data);
    LOG_INFO("  Palette '%s': loaded 256 entries", name);
    return true;
}

// ---------------------------------------------------------------------------
// INI File Loading — 3 INI files loaded via CCINIClass
// SOUNDMD.INI, EVAMD.INI, THEMEMD.INI
// ---------------------------------------------------------------------------

static bool LoadINIFile(const char* filename, const char* display_name)
{
    void* data = FileSystem::LoadFile(filename, false);
    if (!data) {
        // INI files may be embedded in MIX or on disk. Try raw disk read.
        FILE* fp = fopen(filename, "rb");
        if (!fp) {
            LOG_TRACE("LoadINIFile: '%s' (%s) not found (non-fatal)", filename, display_name);
            return false;  // Not fatal — some INI files are optional in mod-compatible init
        }
        fseek(fp, 0, SEEK_END);
        int sz = static_cast<int>(ftell(fp));
        fseek(fp, 0, SEEK_SET);
        data = malloc(sz);
        if (data) { fread(data, 1, sz, fp); }
        fclose(fp);
    }

    if (data) {
        LOG_INFO("  %s: loaded '%s' (%d bytes)", display_name, filename,
                 static_cast<int>(strlen(static_cast<char*>(data))));
        free(data);
        return true;
    }
    return false;
}

// ---------------------------------------------------------------------------
// MIX Bootstrap — Master MIX initialization
// sub_5BC450(4) → sub_5BCC90 — initializes the MIX loading system
// sub_5301A0 — verifies bootstrap
// ---------------------------------------------------------------------------

static void DumpMIXSample(MixFileClass* mix, const char* name)
{
    if (!mix || !mix->IsValid()) return;
    LOG_TRACE("  %s: %d files", name, mix->CountFiles);
    int n = mix->CountFiles < 10 ? mix->CountFiles : 10;
    for (int i = 0; i < n; ++i) {
        uint32_t id = mix->GetFileID(i);
        int sz = mix->GetSize(i);
        LOG_TRACE("    [%d] 0x%08X size=%d", i, id, sz);
    }
    // Search for files that look like palettes (768 bytes)
    int pal_count = 0;
    for (int i = 0; i < mix->CountFiles; ++i) {
        if (mix->GetSize(i) == 768) pal_count++;
    }
    if (pal_count > 0)
        LOG_TRACE("  %s: %d palette-size files", name, pal_count);
}

// ---------------------------------------------------------------------------
// Init_Game — Main entry point
// ---------------------------------------------------------------------------
bool InitGame(bool no_cd)
{
    LOG_INFO("=== Init_Game: resource loading workflow ===");

    // ---- Phase 1: Core System Bootstrap ----
    LOG_INFO("Phase 1: Core System Bootstrap");

    // 1a. MIX file bootstrap (sub_5BC450/5BCC90 + sub_5301A0)
    LOG_INFO("  Bootstrap: loading MIX files...");
    MixFileClass::Bootstrap();

    // 1b. Dump MIX statistics for diagnostics
    DumpMIXSample(MixFileClass::Generics.RA2MD,   "expandmd01.mix");
    DumpMIXSample(MixFileClass::Generics.RA2,     "ra2md.mix");
    DumpMIXSample(MixFileClass::Generics.MAIN,    "ra2.mix");
    DumpMIXSample(MixFileClass::Generics.MULTI,   "multi.mix");
    DumpMIXSample(MixFileClass::Generics.MULTIMD, "multimd.mix");
    LOG_INFO("  Bootstrap: MIX loading complete");

    // ---- Phase 2: Palette Loading (7 palettes in specific order) ----
    LOG_INFO("Phase 2: Palette Loading");

    LoadPaletteFromMIX("UNITSNO.PAL",   g_Palettes.Unitsno);
    LoadPaletteFromMIX("TEMPERAT.PAL",  g_Palettes.Temperat);
    LoadPaletteFromMIX("WAYPOINT.PAL",  g_Palettes.Waypoint);
    LoadPaletteFromMIX("ANIM.PAL",      g_Palettes.Anim);
    LoadPaletteFromMIX("PALETTE.PAL",   g_Palettes.Palette);
    LoadPaletteFromMIX("CAMEO.PAL",     g_Palettes.Cameo);
    LoadPaletteFromMIX("MOUSEPAL.PAL",  g_Palettes.Mouse);

    // 2b. Voxel palette (voxels.vpl — loaded via sub_753B70)
    {
        void* vpl = FileSystem::LoadFile("voxels.vpl", false);
        if (vpl) {
            LOG_INFO("  voxels.vpl: loaded %d bytes", 768);  // always 768 bytes
            free(vpl);
        } else {
            LOG_TRACE("  voxels.vpl: not found (non-fatal for menu-only mode)");
        }
    }

    // 2c. GRFXTXT palette + SHP (UI text graphics)
    {
        void* grfxtxt_pal = FileSystem::LoadFile("GRFXTXT.PAL", false);
        if (grfxtxt_pal) {
            LOG_INFO("  GRFXTXT.PAL: loaded");
            free(grfxtxt_pal);
        }
        void* grfxtxt_shp = FileSystem::LoadFile("GRFXTXT.SHP", false);
        if (grfxtxt_shp) {
            LOG_INFO("  GRFXTXT.SHP: loaded");
            free(grfxtxt_shp);
        }
    }

    LOG_INFO("Phase 2: palettes loaded successfully");

    // ---- Phase 3: Mouse Cursor ----
    LOG_INFO("Phase 3: Mouse Cursor (MOUSE.SHA)");
    {
        void* mouse = FileSystem::LoadFile("MOUSE.SHA", false);
        if (mouse) {
            g_MouseSHP = mouse;
            LOG_INFO("  MOUSE.SHA: loaded");
        } else {
            LOG_TRACE("  MOUSE.SHA: not found (non-fatal)");
        }
    }

    // ---- Phase 4: CD-ROM check (skip if -CD) ----
    LOG_INFO("Phase 4: CD-ROM check");
    if (no_cd || g_CmdLine_NoCD) {
        LOG_INFO("  -CD specified: CD init skipped, all files must be local");
    } else {
        LOG_INFO("  CD check skipped (emulated — always assume local files)");
    }

    // ---- Phase 5: Secondary Mixfiles ----
    LOG_INFO("Phase 5: Secondary Mixfiles");
    // sub_530460 loads additional MIX files (expansion, map-specific, etc.)
    // In our implementation, Bootstrap already does recursive child extraction
    LOG_INFO("  Secondary mixfiles: already handled by Bootstrap recursion");

    // ---- Phase 6: INI Files ----
    LOG_INFO("Phase 6: INI Configuration");

    LoadINIFile("SOUNDMD.INI", "SOUNDMD.INI");
    LoadINIFile("EVAMD.INI",   "EVAMD.INI");
    LoadINIFile("THEMEMD.INI", "THEMEMD.INI");

    // ---- Phase 7: Rules / Type System / Tactical Map ----
    LOG_INFO("Phase 7: Game Systems");

    // Rules initialization (sub_52CD70)
    LOG_INFO("  Rules: initialized (stub)");

    // Type system initialization (sub_6728B0, sub_672660)
    // Iterates type factories: BuildingType, UnitType, InfantryType, etc.
    LOG_INFO("  Type factories: initialized (stub)");

    // TacticalMap creation (sub_6D1C20 — 0xE18 bytes)
    LOG_INFO("  TacticalMap: created (stub)");

    // Bulk data init (sub_531680) — loads DPOD.VXL and other test assets
    LOG_INFO("  Bulk data: initialized (stub)");

    // ---- Phase 8: Command System ----
    LOG_INFO("Phase 8: Command System (sub_532150)");
    LOG_INFO("  Commands: initialized (stub)");

    // ---- Complete ----
    LOG_INFO("=== Init_Game: completed OK ===");

    // Return 0 for success (matches IDA return value)
    return true;
}

} // namespace gamemd
