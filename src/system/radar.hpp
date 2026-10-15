#pragma once

#include "object/abstract.hpp"
#include "render/display.hpp"
#include "core/vector.hpp"

#include <cstdint>

namespace gamemd {
    // X27: member-decl type supply (log-driven hygiene)
    class CampaignClass;

#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif

class DisplayClass;
class GScreenClass;
class DSurface;
struct RadarTrackingStruct;

class RadarClass : public DisplayClass
{
public:
    virtual ~RadarClass() = default;  // 0x652C00
    static void *Destruct(RadarClass *p_this);  // x4:ida@0x652c00

    // wrapper: delegates to RadarClass::Destruct at 0x652C00
    virtual void CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk);
    // unmatched: no callgraph reference and no git history record
    virtual void SetVisibleRect(const RectangleStruct& map_rect);
    // unmatched: no callgraph reference and no git history record
    virtual void DisposeOfArt();
    // wrapper: delegates to RadarClass::Destruct at 0x652C00
    virtual void* worldToScreenCoords(void* out, Point2D* point);
    // unmatched: no callgraph reference and no git history record
    virtual void onRadarClick(uint32_t unk);
    // design: virtual function, no binary implementation matched in IDA
    virtual void InitForHouse();

    // 0x11E8: spy satellite / zoom state (all zeroed in constructor)
    int32_t                     SpiedSatelliteCount;    // 0x11E8
    int32_t                     RadarZoomLevel;         // 0x11EC
    int32_t                     RadarOffsetX;           // 0x11F0 — centering offset for radar surface
    int32_t                     RadarOffsetY;           // 0x11F4
    int32_t                     RadarClass_field_11F8;             // 0x11F8
    int32_t                     RadarClass_field_11FC;             // 0x11FC

    // 0x1200: additional state fields
    int32_t                     RadarClass_field_1200;             // 0x1200
    int32_t                     RadarClass_field_1204;             // 0x1204
    int32_t                     RadarClass_field_1208;             // 0x1208

    // 0x120C: radar nominal bounds rect (default {0,0,0,0})
    RectangleStruct             RadarBounds;            // 0x120C

    // 0x121C: secondary DSurface used for radar blit operations
    DSurface*                   RadarSurfaceAlt;        // 0x121C

    // 0x1220: primary DSurface holding the radar thumbnail image
    DSurface*                   RadarSurface;           // 0x1220

    // 0x1224: cells currently tracked on the radar minimap
    DynamicVectorClass<CellStruct> RadarCells;          // 0x1224 (0x18 bytes → ends 0x123C)

    // 0x123C: cached pixel buffer for radar cell rendering
    void*                       RadarCellBuffer;        // 0x123C

    // 0x1240–0x1254: radar cell tracking state
    int32_t                     RadarClass_field_1240;             // 0x1240
    int32_t                     RadarClass_field_1244;             // 0x1244
    int32_t                     RadarClass_field_1248;             // 0x1248
    int32_t                     RadarClass_field_124C;             // 0x124C
    int32_t                     RadarClass_field_1250;             // 0x1250
    int32_t                     RadarClass_field_1254;             // 0x1254

    // 0x1258: hash table mapping radar blip positions → TechnoClass*
    void*                       RadarHash;              // 0x1258 (HashTable<RadarTrackingStruct, TechnoClass*>*)

    // 0x125C: pixel points rendered on the radar surface
    DynamicVectorClass<Point2D> RadarPoints;            // 0x125C (0x18 bytes → ends 0x1274)

    // 0x1274: cached pixel buffer for radar point rendering
    void*                       RadarPointBuffer;       // 0x1274

    // 0x1278: pre-computed pixel shapes for each foundation type (0–21)
    DynamicVectorClass<Point2D> foundationTypePixels[22]; // 0x1278 (22 × 0x18 = 0x210 → ends 0x1488)

    // 0x1488: radar zoom scale factor (float)
    float                       radarSizeFactor;        // 0x1488

    // 0x148C–0x1498: render state counters
    int32_t                     RadarClass_field_148C;             // 0x148C — initialized to 1
    int32_t                     RadarClass_field_1490;             // 0x1490
    int32_t                     RadarClass_field_1494;             // 0x1494
    int32_t                     RadarClass_field_1498;             // 0x1498

    // 0x149C: radar viewport clip rectangle
    RectangleStruct             RadarClipRect;          // 0x149C

    // 0x14AC: animation state (0=?, 2=hidden, 3=anim-in, 4=anim-out)
    int32_t                     RadarAnimState;         // 0x14AC

    // 0x14B0: current radar view mode (0=off, 1=small, 3=large)
    int32_t                     RadarViewMode;          // 0x14B0

    // 0x14B4: pending view mode during transition animation
    int32_t                     RadarQueueViewMode;     // 0x14B4

    int32_t                     RadarClass_field_14B8;             // 0x14B8

    bool                        RadarClass_field_14BC;             // 0x14BC
    bool                        RadarClass_field_14BD;             // 0x14BD

    // 0x14C0: Mixer audio channel handle for radar toggle sound
    int32_t                     RadarSoundChannel;      // 0x14C0

    int32_t                     RadarClass_field_14C4;             // 0x14C4
    int32_t                     RadarClass_field_14C8;             // 0x14C8
    int32_t                     RadarClass_field_14CC;             // 0x14CC
    int32_t                     RadarClass_field_14D0;             // 0x14D0

    int32_t                     RadarClass_field_14D4;             // 0x14D4 — initialized to -1

    bool                        IsAvailableNow;         // 0x14D8
    bool                        IsRadarForced;          // 0x14D9 — set by SetFlag to force radar state
    bool                        IsRadarActive;          // 0x14DA — radar active/enabled flag

    // 0x14DC: secondary bounds rectangle
    RectangleStruct             RadarClass_field_14DC;             // 0x14DC

    int32_t                     RadarClass_field_14EC;             // 0x14EC
    int32_t                     RadarClass_field_14F0;             // 0x14F0
    int32_t                     RadarClass_field_14F4;             // 0x14F4
    int32_t                     RadarClass_field_14F8;             // 0x14F8

    // 0x14FC: animation delay counter (SetViewMode sets to 25 during transition)
    int32_t                     RadarAnimDelay;         // 0x14FC

    // 0x1500: radar animation / update timer
    TimerStruct                 RadarClass_field_timer_1500;       // 0x1500

protected:
    RadarClass() = default; // 0x4F4220
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* RenderSpySatellite();  // 0x4A8730
    void SetGlobal();  // 0x55AF40
    int RenderMapPreview();  // 0x565090
    void* Render(int a1);  // 0x565190
    int RenderBlips(void* a1, int a2);  // 0x582D70
    char updateRadarCells(int a1, unsigned int * a2);  // 0x589E20  G42.34: sig sync to cache truth (char __thiscall(this, int, unsigned int*))
    void* drawRadarTerrain(int a1, int a2);  // 0x58ADB0
    void* RenderJammerRadius(int a1, void* a2);  // 0x58AE60
    int drawRadarEvents(void* a1);  // 0x58AF80
    int Create();  // 0x63F6B0
    void* Construct();  // 0x652960
    int Destru_vt05();  // 0x652CF0
    void Destru_vt07();  // 0x652DE0
    int Destru_vt53();  // 0x652E90
    int Destru_vt16(int a1);  // 0x653100
    int Destru_vt34();  // 0x654320
    int UpdateBlips(int a1, void* a2);  // 0x654EA0
    int Process();  // 0x655990
    void InitializeHashTable();  // 0x655B20
    int UpdateFoundationShapesCustom();  // 0x6563B0
    void Toggle(int a1, int a2);  // 0x656BE0
    int SetViewMode(int a1, int a2);  // 0x656CB0
    int IsActiveMode();  // 0x656E50
    bool SetFlag();  // 0x656E90
    void* Destru_vt33(int a1);  // 0x658770
    void* Destru_vt04(int a1);  // 0x6587A0
    int DrawBlips(int a1);  // 0x6D5030
    int DrawBlip(int a1, int a2);  // 0x6D59D0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int FindNearestRadarTarget(int a1, int a2, int a3);  // 0x431090 -- Radar::FindNearestRadarTarget
    bool IsRadarTargetEligible();  // 0x5090f0 -- Radar::IsRadarTargetEligible
    int ProcessSubzone(int a1, int a2, int a3, int a4, int a5);  // 0x5824a0 -- Radar::ProcessSubzone
    void Update(int a1);  // 0x584550 -- Radar::Update
    void* CopyDataArray(int a1);  // 0x58abd0 -- Radar::CopyDataArray
    int PixelIndex();  // 0x6558b0 -- Radar::PixelIndex
    int RenderMinimap();  // 0x656ec0 -- Radar::RenderMinimap
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    bool GetBlip(int a1, int a2, int a3, int a4);  // 0x6a8420
    static int GetBlip(int aP0, int aP1, unsigned int aP2, unsigned int aP3);  // 0x6A8420 G42.35 static-form sync (truth __stdcall 4-arg 无 this; ui/supplied site 0x6A8742)
    // === FUNCS-MOVE (END) ===
    void* RadarClass_field_0x0;  // 0x0 (no offset truth)  G42.34 T11: updateRadarCells body 0x589E20 reads this->RadarClass_field_0x0 as unsigned int* base (IDA til member view)

    unsigned int FoundationTypePixels;  // X10 supply (member_lookup)
    unsigned int MaxLevel;  // X10 supply (csp_canon_members)
    unsigned int RadarSizeFactor;  // X10 supply (member_lookup)
    unsigned int ZoneConnections;  // X10 supply (csp_canon_members)
    unsigned char __pad_004;  // X10 supply (csp_canon_members)
    unsigned char __pad_070;  // X10 supply (csp_canon_members)
    unsigned char __pad_122C;  // X10 supply (csp_canon_members)
    CampaignClass * ptr_1228;  // X10 supply (csp_canon_members)
    CampaignClass * ptr_1260;  // X10 supply (csp_canon_members)
    CampaignClass * ptr_1264;  // X10 supply (csp_canon_members)
    void* ptr_50;  // X10 supply (csp_canon_members)  // X27: template-carrier
    int q008;  // X10 supply (member_lookup)
    int q0B0;  // X10 supply (member_lookup)
    unsigned char q0B4[8];  /* char[8] */  // X10 supply (member_lookup)
    unsigned int q0E4;  // X10 supply (member_lookup)
    unsigned int q0E8;  // X10 supply (member_lookup)
    unsigned int q115C;  // X10 supply (member_lookup)
    unsigned int q1160;  // X10 supply (member_lookup)
    unsigned int q1164;  // X10 supply (member_lookup)
    unsigned int q1168;  // X10 supply (member_lookup)
    unsigned int q1169;  // X10 supply (member_lookup)
    unsigned int q116C;  // X10 supply (member_lookup)
    unsigned int q1170;  // X10 supply (member_lookup)
    unsigned int q1174;  // X10 supply (member_lookup)
    unsigned int q1178;  // X10 supply (member_lookup)
    unsigned int q117A;  // X10 supply (member_lookup)
    unsigned int q117C;  // X10 supply (member_lookup)
    unsigned int q1180;  // X10 supply (member_lookup)
    unsigned int q1181;  // X10 supply (member_lookup)
    unsigned int q1182;  // X10 supply (member_lookup)
    unsigned int q1188;  // X10 supply (member_lookup)
    unsigned int q118C;  // X10 supply (member_lookup)
    unsigned int q1190;  // X10 supply (member_lookup)
    unsigned int q1194;  // X10 supply (member_lookup)
    unsigned int q1198;  // X10 supply (member_lookup)
    unsigned int q119C;  // X10 supply (member_lookup)
    unsigned int q11A0;  // X10 supply (member_lookup)
    unsigned int q11A4;  // X10 supply (member_lookup)
    unsigned int q11A8;  // X10 supply (member_lookup)
    unsigned int q11AC;  // X10 supply (member_lookup)
    unsigned int q11B0;  // X10 supply (member_lookup)
    unsigned int q11B1;  // X10 supply (member_lookup)
    unsigned int q11B2;  // X10 supply (member_lookup)
    unsigned int q11B3;  // X10 supply (member_lookup)
    unsigned int q11B4;  // X10 supply (member_lookup)
    unsigned int q11B8;  // X10 supply (member_lookup)
    unsigned int q11BC;  // X10 supply (member_lookup)
    unsigned int q11C0;  // X10 supply (member_lookup)
    unsigned int q11C4;  // X10 supply (member_lookup)
    unsigned int q11C8;  // X10 supply (member_lookup)
    unsigned int q11CC;  // X10 supply (member_lookup)
    unsigned int q11CD;  // X10 supply (member_lookup)
    unsigned int q11CE;  // X10 supply (member_lookup)
    unsigned int q11CF;  // X10 supply (member_lookup)
    unsigned int q11D0;  // X10 supply (member_lookup)
    unsigned int q11D1;  // X10 supply (member_lookup)
    unsigned int q11D4;  // X10 supply (member_lookup)
    unsigned int q11D8;  // X10 supply (member_lookup)
    unsigned int q11DC;  // X10 supply (member_lookup)
    unsigned int q11E0;  // X10 supply (member_lookup)
    unsigned int q1234;  // X10 supply (member_lookup)
    unsigned int q1238;  // X10 supply (member_lookup)
    unsigned int q126C;  // X10 supply (member_lookup)
    unsigned int q1270;  // X10 supply (member_lookup)
    unsigned int q140;  // X10 supply (member_lookup)
    unsigned int q144;  // X10 supply (member_lookup)
    unsigned int q145;  // X10 supply (member_lookup)
    int q14A4;  // X10 supply (member_lookup)
    unsigned char q14A8[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned int q14E0;  // X10 supply (member_lookup)
    unsigned int q14E4;  // X10 supply (member_lookup)
    unsigned int q14E8;  // X10 supply (member_lookup)
    unsigned char q1504;  // X10 supply (member_lookup)
    int q1508;  // X10 supply (member_lookup)
    unsigned int q164;  // X10 supply (member_lookup)
    unsigned int q380;  // X10 supply (member_lookup)
    unsigned int q804;  // X10 supply (member_lookup)
    unsigned int u32_11E4;  // X10 supply (member_lookup)
    unsigned int u32_1210;  // X10 supply (member_lookup)
    unsigned int u32_1214;  // X10 supply (member_lookup)
    unsigned int u32_1218;  // X10 supply (member_lookup)
    unsigned int u32_14A0;  // X10 supply (member_lookup)
    unsigned int u32_150C;  // X10 supply (member_lookup)
    unsigned int u32_1510;  // X10 supply (member_lookup)
    unsigned int u32_1518;  // X10 supply (member_lookup)
    unsigned int u32_151C;  // X10 supply (member_lookup)
    unsigned int u32_1520;  // X10 supply (member_lookup)
    unsigned int u32_1528;  // X10 supply (member_lookup)
    unsigned int u32_152C;  // X10 supply (member_lookup)
    unsigned int u32_1530;  // X10 supply (member_lookup)
    unsigned int u32_1534;  // X10 supply (member_lookup)
    unsigned int u32_1538;  // X10 supply (member_lookup)
    unsigned int u32_153C;  // X10 supply (member_lookup)
    unsigned int u32_1540;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)
    unsigned int u32_64;  // X10 supply (member_lookup)
    unsigned int u32_C8;  // X10 supply (member_lookup)
    int u8_1231;  // X10 supply (member_lookup)
    int u8_1269;  // X10 supply (member_lookup)
    void* vtable1;  // X10 supply (csp_canon_members)

    unsigned int u32_C;  // X10 supply (member_lookup)
};

} // namespace gamemd
