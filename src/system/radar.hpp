#pragma once

#include "object/abstract.hpp"
#include "render/display.hpp"
#include "core/vector.hpp"

#include <cstdint>

namespace gamemd {

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
    int updateRadarCells(int a1, void* a2);  // 0x589E20
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
};

} // namespace gamemd
