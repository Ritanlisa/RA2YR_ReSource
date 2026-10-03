// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/INIClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ToolTipManager_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/Tiberium_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"

// 0x5447C0
namespace gamemd {
unsigned int * TerrainTypeClass::Construct(int a2, unsigned char a3, unsigned char a4, MapClass * aP4, char a6, void *a6_2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005447C0.json)
}
} // namespace gamemd
// 0x71DA80
namespace gamemd {  // G42.18c ns repair
TerrainTypeClass::TerrainTypeClass(char *Source, int aP1, int aP3, int a2, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DA80.json)
}
}  // G42.18c ns repair
// 0x71DEA0
namespace gamemd {  // G42.18c ns repair
int TerrainTypeClass::LoadFromINI(unsigned __int8 ***a2, int aP1, int aP3, int a3, int a4, int a5, int a6, int a7, int aP2, int a1, int aP0, void * aAnimationproba, void * aAnimationrate, void * aIsanimated, void * aIsflammable, void * aRadarcolor, void * aSnowoccupation, void * aSpawnstiberium, void * aTemperateoccup, void * aWaterbound)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DEA0.json)
}
}  // G42.18c ns repair
  if ( v9 ) /*0x71dfd2*/
  {
    PixelData = MixFileClass::GetPixelData(v9, (int)&v23, 0); /*0x71dfdd*/
    *((unsigned short *)this + 334) = *(unsigned short *)PixelData; /*0x71dfeb*/
    *((unsigned char *)this + 670) = *(unsigned char *)(PixelData + 2); /*0x71dff5*/
  }
  Coord = INIClass::GetCoord( /*0x71e00c*/
            aP1,
            &v23,
            (INIClass *)((char *)this + 36),
            (Color *)&stru_830620.__pad_14B0[6744],
            (Color *)((char *)this + 668));
  v12 = *((unsigned char *)this + 691); /*0x71e014*/
  *((unsigned short *)this + 334) = *(unsigned short *)Coord; /*0x71e01a*/
  *((unsigned char *)this + 670) = *(unsigned char *)(Coord + 2); /*0x71e02a*/
  v13 = INIClass::ReadBool_Overwrite( /*0x71e02d*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[59552],
          v12);
  aP3_4a = *(INIClass **)((char *)this + 672); /*0x71e03a*/
  *((unsigned char *)this + 691) = v13; /*0x71e041*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x71e047*/
                    (int)aP1,
                    (uint8_t *)((char *)this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[59536],
                    aP3_4a);
  aP3 = *(float *)((char *)this + 676); /*0x71e04c*/
  *((unsigned int *)this + 168) = Int_Overwrite; /*0x71e057*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x71e066*/
                       (int)aP1,
                       (INIClass *)((char *)this + 36),
                       (uint8_t *)&stru_830620.__pad_579C[59512],
                       (INIClass *)IDA_LODWORD(aP3));
  v16 = *(CCINIClass **)((char *)this + 680); /*0x71e06b*/
  *(float *)((char *)this + 676) = Double_Overwrite; /*0x71e073*/
  v18 = INIClass::ReadInt_Overwrite( /*0x71e080*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[59488],
          (INIClass *)v16);
  v19 = *(INIClass **)((char *)this + 684); /*0x71e085*/
  *((unsigned int *)this + 170) = v18; /*0x71e08b*/
  *((unsigned int *)this + 171) = INIClass::ReadInt_Overwrite( /*0x71e0a0*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[59468],
                              v19);
  return 1; /*0x71e0a7*/

}
// 0x71E2A0
TerrainTypeClass * * TerrainTypeClass::FindOrCreate(char *Source)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E2A0.json)
}
// 0x71E360
TerrainTypeClass * TerrainTypeClass::ddtor(void * a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E360.json)
}
// 0x53FFA0
int TerrainTypeClass::GetTileData(int a2, void * a3, signed int * a4, unsigned int * a5, unsigned short * a6, unsigned int * a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053FFA0.json)
}
// 0x71DDD0
bool  TerrainTypeClass::GetHeight(TerrainClass * aP2, int a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DDD0.json)
}
// 0x71DE10
TerrainClass * TerrainTypeClass::GetTileIndex(int a2, void *a2_2, void *a3, void *a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071DE10.json)
}
// 0x71E0D0
unsigned int *  TerrainTypeClass::GetWidth(unsigned int * a1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E0D0.json)
}
// 0x71E140
int TerrainTypeClass::PowerDrainUpdate(int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E140.json)
}
// 0x71E1D0
int  TerrainTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E1D0.json)
}
// 0x71E240
int TerrainTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E240.json)
}
// 0x71E260
int TerrainTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0071E260.json)
}
// 0x71E330
int TerrainTypeClass::GetTypeIdentifier()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E330)
}
// 0x71E340
int TerrainTypeClass::GetObjectSize()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E340)
}
// 0x71E350
int TerrainTypeClass::GetAuxField()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x71E350)
}
