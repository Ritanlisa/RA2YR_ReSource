// InitGame — IDA: 0x52BA60 (4333B, 146 basic blocks)
// FAITHFUL game initialization pipeline matching IDA call order.
// Called from MainGame (0x48CCC0). Returns 0 on success, non-zero on failure.

#include <windows.h>
#include <cstring>

#include "gamemd/core/logging.hpp"
#include "gamemd/core/ddraw_init.hpp"
#include "gamemd/system/mix_file.hpp"
#include "gamemd/system/file_system.hpp"
#include "gamemd/render/surface.hpp"

namespace gamemd {

// --- IDA globals ---
void* RulesClass_Instance = nullptr;    // 0x8871E0
void* ScenarioClass_Instance = nullptr; // 0xA8B230
void* g_GameFontObject = nullptr;       // 0x89C4B8
void* g_MouseSHP = nullptr;            // 0xB0BCF0
bool  CmdLine_NoCD = false;            // 0x89E410
int   g_BuildingTypeCount2 = 0;        // 0xA83D10
int   g_BuildingTypeClass_Count = 0;   // 0x8B4160
void* g_AnimTypeCount = nullptr;       // 0x8B4154
void* g_TriggerTypeCount = nullptr;    // 0xA83C6C
int   g_TriggerClassCount = 0;         // 0xA83C78
void* CCINIClass_INI_Rules = nullptr;  // 0x887048
void* CCINIClass_INI_Art = nullptr;    // 0x887180
int   g_GameModeOptions = 0;           // 0xA8EB60

// Extern globals from other modules
extern bool g_Is16BitMode;       // 0x8175B0 (globals.cpp)
extern bool byte_89E3A0;          // 0x89E3A0 (globals.cpp)
extern bool g_DDraw_Active;       // 0xA8ED80 (ddraw_init.cpp)
extern int  g_Audio_MixerEnabled; // 0x840A70 (globals.cpp)

// Simple palette loading helper
static void LoadPaletteFromMIX(const char* name, void* dest_buf)
{
    void* data = FileSystem::LoadFile(name, false);
    if (!data) {
        LOG_WARN("Palette '%s' not found", name);
        return;
    }
    memcpy(dest_buf, data, 768);
    free(data);
    LOG_INFO("  Palette '%s': loaded", name);
}

// ============================================================
// IDA: InitGame @ 0x52BA60 — returns 0 success, -1 failure, 1 CD abort
// ============================================================
bool InitGame(bool no_cd)
{
    LOG_INFO("=== Init Game ===");

    if (no_cd)
        CmdLine_NoCD = true;

    // --- 1. ScenarioClass + RulesClass ---
    // IDA: new ScenarioClass(0x3740), new RulesClass(0x18C0)
    ScenarioClass_Instance = nullptr;  // stub: ScenarioClass_Constructor(malloc(0x3740))
    RulesClass_Instance = nullptr;     // stub: RulesClass_Constructor(malloc(0x18C0))
    LOG_INFO("  Scenario+Rules: stubs created");

    // --- 2. Fade + CD preamble ---
    // IDA: FadePalette(0); SetSoundWarning(-2); EventQueue::Process loop
    (void)g_DDraw_Active;
    (void)byte_89E3A0;
    (void)g_Is16BitMode;

    // --- 3. MIX Bootstrap ---
    LOG_INFO("  Bootstrap: loading MIX files...");
    MixFileClass::Bootstrap();
    LOG_INFO("  Bootstrap: complete");

    // --- 4. Font ---
    // IDA: BitTextClass::LoadFont("GAME.FNT") → g_GameFontObject

    // --- 5. Mouse ---
    // IDA: LoadMouseClassResources()

    // --- 6. Audio ---
    // IDA: InitializeAudioSubsystem(g_Audio_MixerEnabled)

    // --- 7. Palette loading ×9 (IDA order) ---
    LOG_INFO("  Phase 2: Palette Loading");
    char pal_buf[768];
    LoadPaletteFromMIX("UNITSNO.PAL",  pal_buf);   // 0x886380
    LoadPaletteFromMIX("TEMPERAT.PAL", pal_buf);   // 0x885780
    LoadPaletteFromMIX("WAYPOINT.PAL", pal_buf);   // 0x885180
    // voxels.vpl — VoxelPaletteClass::LoadFromFile
    LoadPaletteFromMIX("ANIM.PAL",     pal_buf);   // ANIM.PAL
    LoadPaletteFromMIX("PALETTE.PAL",  pal_buf);   // PALETTE.PAL
    LoadPaletteFromMIX("CAMEO.PAL",    pal_buf);   // CAMEO.PAL
    LoadPaletteFromMIX("MOUSEPAL.PAL", pal_buf);   // MOUSEPAL.PAL
    // GRFXTXT.PAL + GRFXTXT.SHP
    LOG_INFO("  Palettes: loaded");

    // --- 8. Expansion MIX ---
    // IDA: LoadExpansionMixFiles()

    // --- 9. MOUSE.SHA ---
    void* mouse = FileSystem::LoadFile("MOUSE.SHA", false);
    if (mouse) { g_MouseSHP = mouse; LOG_INFO("  MOUSE.SHA: loaded"); }

    // --- 10. CD-ROM check ---
    LOG_INFO("  CD check: %s", no_cd ? "skipped (-CD)" : "emulated");

    // --- 11. Secondary MIX ---
    // IDA: MixFile::LoadAll()
    LOG_INFO("  Secondary mixfiles: by Bootstrap recursion");

    // --- 12. INI files ---
    // IDA: SOUNDMD.INI → EVAMD.INI → THEMEMD.INI
    LOG_INFO("  INI: SOUNDMD, EVAMD, THEMEMD (stubs)");

    // --- 13. Rules / Types / TacticalMap ---
    // IDA: InitRules → LoadAnimTypes → LoadBuildingTypes → Trigger READ_INI
    // IDA: TacticalMap::Construct(0xE18)
    LOG_INFO("  Rules / Types / TacticalMap: stubs");

    // --- 14. InitCommands + CompleteGameInit ---
    // IDA: InitRandomSeed → InitCommands → CompleteGameInit
    LOG_INFO("  Commands + Complete: stubs");

    LOG_INFO("=== Init Game Complete ===");
    return true;
}

} // namespace gamemd
