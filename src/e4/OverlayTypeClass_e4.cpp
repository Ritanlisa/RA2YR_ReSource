// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CCFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BufferIOFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AbstractTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MixFileClass_e4.hpp"  // G42.36 C2027 supply
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_213(); }  // w18j2 raw 0x005FE520
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned char aCellanim;  // data: 0x833544 truth(IDA G42.57w9)
extern unsigned char aChainreaction;  // data: 0x8334f0 truth(IDA G42.57w9)
extern unsigned char aCrate;  // data: 0x833578 truth(IDA G42.57w9)
extern unsigned char aCratetrigger;  // data: 0x833568 truth(IDA G42.57w9)
extern unsigned char aDamagelevels;  // data: 0x833534 truth(IDA G42.57w9)
extern unsigned char aDrawflat;  // data: 0x8334e4 truth(IDA G42.57w9)
extern unsigned char aExplodes;  // data: 0x83355c truth(IDA G42.57w9)
extern unsigned char aIsarock;  // data: 0x8334dc truth(IDA G42.57w9)
extern unsigned char aIsrubble;  // data: 0x8334d0 truth(IDA G42.57w9)
extern unsigned char aIsveinholemons;  // data: 0x833500 truth(IDA G42.57w9)
extern unsigned char aIsveins;  // data: 0x8184a8 truth(IDA G42.57w9)
extern unsigned char aLand;  // data: 0x833580 truth(IDA G42.57w9)
extern unsigned char aNousetilelandt;  // data: 0x833514 truth(IDA G42.57w9)
extern unsigned char aOverrides;  // data: 0x833550 truth(IDA G42.57w9)
extern unsigned char aRadarcolor;  // data: 0x833528 truth(IDA G42.57w9)


// 0x5FE250
namespace gamemd {  // G42.18 ns repair
OverlayTypeClass::OverlayTypeClass(ObjectClass * aP1)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  OverlayTypeClass **v6; // edx

  ((int *)this)->ConstructFull(aP1); /*0x5fe259*/
  this->Strength = 1; /*0x5fe265*/
  *&this->Wall = 1; /*0x5fe26b*/
  this->Explodes = 1; /*0x5fe271*/
  this->RadarColor[1] = 1; /*0x5fe277*/
  this->LandType[0] = -1; /*0x5fe280*/
  this->CellAnim = 0; /*0x5fe28a*/
  this->DamageLevels = 0; /*0x5fe290*/
  this->NoUseTileLandType = 0; /*0x5fe296*/
  this->IsVeinholeMonster = 0; /*0x5fe29c*/
  this->IsVeins = 0; /*0x5fe2a2*/
  this->ImageLoaded = 0; /*0x5fe2a8*/
  this->ChainReaction = 0; /*0x5fe2ae*/
  this->Overrides = 0; /*0x5fe2b4*/
  this->DrawFlat_d = 0; /*0x5fe2ba*/
  this->IsRubble = 0; /*0x5fe2c0*/
  this->IsARock = 0; /*0x5fe2c6*/
  this->RadarColor[0] = 0; /*0x5fe2cc*/
  this->RadarColor[2] = 0; /*0x5fe2d2*/
  this->IsARock_d = 0; /*0x5fe2d8*/
  this->q2B6 = 0; /*0x5fe2de*/
  this->q2B7 = 0; /*0x5fe2e4*/
  this->ParticleTypeClass_2B8 = 0; /*0x5fe2ea*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EF5D4) */  /*0x5fe2f1*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EF5D4) */  /*0x5fe2f7*/
  /* X11: ptr_0 install elided (implicit via OverlayTypeClass virtuals 0x5fe2fd) */
  /* X11: ptr_0 install elided (implicit via OverlayTypeClass virtuals 0x5fe304) */
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x5fe30b*/
  this->RadarInvisible_d = 1; /*0x5fe310*/
  this->Selectable_d = 0; /*0x5fe317*/
  this->Insignificant_d = 1; /*0x5fe31d*/
  this->AllowCellContent_d = 0; /*0x5fe324*/
  v3 = *(unsigned int *)&g_ObjectTypeConfig; /*0x5fe32a*/
  if ( *(int *)&g_ObjectTypeConfig < (int)DataGlobal_A83D88 /*0x5fe368*/
    || (DataGlobal_A83D8D || !DataGlobal_A83D88)
    && *(int *)&DataGlobal_A83D94 > 0
    && (v4 = (*((unsigned __int8 (**)(void **, char *, unsigned int))DataGlobal_A83D80 + 2))(
               &DataGlobal_A83D80,
               (char *)DataGlobal_A83D88 + *(unsigned int *)&DataGlobal_A83D94,
               0) == 0,
        v3 = *(unsigned int *)&g_ObjectTypeConfig,
        !v4) )
  {
    *(unsigned int *)&g_ObjectTypeConfig = v3 + 1; /*0x5fe36d*/
    *(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * v3) = (unsigned int)(this); /*0x5fe377*/
    v3 = *(unsigned int *)&g_ObjectTypeConfig; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( v3 <= 0 ) /*0x5fe383*/
  {
    LABEL_11:
    this->LandType[0] = -1; /*0x5fe397*/
    return &this->ObjectTypeClass; /*0x5fe3a0*/
  }
  else
  {
    v6 = *(OverlayTypeClass ***)g_BuildingTypeClass_Array; /*0x5fe385*/
    while ( *v6 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      ++v6; /*0x5fe390*/
      if ( v5 >= v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    this->LandType[0] = v5; /*0x5fe3a7*/
    return &this->ObjectTypeClass; /*0x5fe3ad*/
  }

}
}  // G42.18c ns repair
// 0x5FE770
namespace gamemd {  // G42.18c ns repair
AnimTypeClass * * OverlayTypeClass::LoadFromINI(unsigned char *** aP1, void *a2)
{
  unsigned int *v13; // eax

  INIClass::ResetSection((INIClass *)a2); /*0x5fe783*/
  if ( !((ObjectTypeClass *)((ObjectTypeClass *)aP1))->LoadFromINI(a2) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  AnimTypeClass *INIString; // eax
  INIString = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                                 (OverlayTypeClass *)a2,
                                 (uint8_t *)aP1->__pad_24,
                                 aLand,
                                 (unsigned int)aP1->CellAnim);
  int v4; // ecx
  v4 = *(unsigned int *)&aP1->Wall; /*0x5fe7b1*/
  aP1->CellAnim = INIString; /*0x5fe7b7*/
  int Int_Overwrite; // eax
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (uint8_t *)aP1->__pad_24, aStrength, v4); /*0x5fe7c6*/
  char NoUseTileLandType; // [esp-Ch] [ebp-298h]
  NoUseTileLandType = aP1->NoUseTileLandType; /*0x5fe7d3*/
  *(unsigned int *)&aP1->Wall = Int_Overwrite; /*0x5fe7da*/
  aP1->NoUseTileLandType = INIClass::ReadBool_Overwrite( /*0x5fe7e5*/
                              (int *)a2,
                              (uint8_t *)aP1->__pad_24,
                              g_INI_Key_Wall,
                              NoUseTileLandType);
  char Bool_Overwrite; // al
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int *)a2,
                     (uint8_t *)aP1->__pad_24,
                     (uint8_t *)g_INI_Key_Tiberium,
                     aP1->IsVeinholeMonster);
  char IsVeins; // cl
  IsVeins = aP1->IsVeins; /*0x5fe7ff*/
  aP1->IsVeinholeMonster = Bool_Overwrite; /*0x5fe805*/
  char v8; // al
  v8 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aCrate, IsVeins); /*0x5fe814*/
  char ImageLoaded; // [esp-Ch] [ebp-298h]
  ImageLoaded = aP1->ImageLoaded; /*0x5fe821*/
  aP1->IsVeins = v8; /*0x5fe828*/
  aP1->ImageLoaded = INIClass::ReadBool_Overwrite( /*0x5fe833*/
                        (int *)a2,
                        (uint8_t *)aP1->__pad_24,
                        aCratetrigger,
                        ImageLoaded);
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aExplodes, aP1->IsRubble); /*0x5fe848*/
  char v10; // cl
  v10 = aP1->RadarColor[0]; /*0x5fe84d*/
  aP1->IsRubble = v9; /*0x5fe853*/
  char v11; // al
  v11 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aOverrides, v10); /*0x5fe862*/
  int DamageLevels; // ebp
  DamageLevels = aP1->DamageLevels; /*0x5fe867*/
  aP1->RadarColor[0] = v11; /*0x5fe884*/
  char Destination[128]; // [esp+Ch] [ebp-280h] BYREF
  if ( INIClass::GetString( /*0x5fe88a*/
         (INIClass *)a2,
         (uint8_t *)aP1->__pad_24,
         aCellanim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v13 = (Destination)->FindOrCreate(); /*0x5fe897*/
  }
  else
  {
    v13 = (unsigned int *)DamageLevels; /*0x5fe89e*/
  }
  aP1->DamageLevels = (int)v13; /*0x5fe8a0*/
  aP1->Strength_2 = INIClass::ReadInt_Overwrite( /*0x5fe8c3*/
                       (bool *)&DataGlobal_887180,
                       (uint8_t *)aP1->ImageFile,
                       aDamagelevels,
                       aP1->Strength_2);
  if ( aP1->IsVeinholeMonster ) /*0x5fe8c9*/
  {
    AnimTypeClass *CellAnim; // eax
    CellAnim = aP1->CellAnim; /*0x5fe8d3*/
    aP1->Armor[0] = 6; /*0x5fe8d9*/
    if ( !CellAnim ) /*0x5fe8e5*/
      aP1->CellAnim = (AnimTypeClass *)5; /*0x5fe8e7*/
  }
  if ( !aP1->Theater && !aP1->DrawFlat ) /*0x5fe8fb*/
  {
    char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF
    _makepath(Buffer, 0, 0, aP1->ImageFile, Ext); /*0x5fe917*/
    aP1->Image = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  int Coord; // eax
  int v28; // [esp+8h] [ebp-284h] BYREF
  Coord = INIClass::GetCoord( /*0x5fe947*/
            (INIClass *)a2,
            (int)&v28,
            (uint8_t *)aP1->__pad_24,
            aRadarcolor,
            (uint8_t *)&aP1->__tail_2B5[1]);
  *(unsigned short *)&aP1->__tail_2B5[1] = *(unsigned short *)Coord; /*0x5fe94f*/
  char Explodes; // [esp-Ch] [ebp-298h]
  Explodes = aP1->Explodes; /*0x5fe95e*/
  *((unsigned char *)aP1 + 696) = *(unsigned char *)(Coord + 2); /*0x5fe965*/
  char v16; // al
  v16 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aNousetilelandt, Explodes); /*0x5fe968*/
  char ChainReaction; // cl
  ChainReaction = aP1->ChainReaction; /*0x5fe96d*/
  aP1->Explodes = v16; /*0x5fe973*/
  char v18; // al
  v18 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aIsveinholemons, ChainReaction); /*0x5fe982*/
  char Overrides; // [esp-Ch] [ebp-298h]
  Overrides = aP1->Overrides; /*0x5fe98f*/
  aP1->ChainReaction = v18; /*0x5fe996*/
  aP1->Overrides = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aIsveins, Overrides); /*0x5fe9a1*/
  char v19; // al
  v19 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aChainreaction, aP1->IsARock); /*0x5fe9b6*/
  char v20; // cl
  v20 = aP1->RadarColor[1]; /*0x5fe9bb*/
  aP1->IsARock = v19; /*0x5fe9c1*/
  char v21; // al
  v21 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aDrawflat, v20); /*0x5fe9d0*/
  char v27; // [esp-Ch] [ebp-298h]
  v27 = aP1->__tail_2B5[0]; /*0x5fe9dd*/
  aP1->RadarColor[1] = v21; /*0x5fe9e4*/
  aP1->__tail_2B5[0] = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)aP1->__pad_24, aIsarock, v27); /*0x5fe9ef*/
  aP1->RadarColor[2] = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                          (int *)a2,
                          (uint8_t *)aP1->__pad_24,
                          aIsrubble,
                          aP1->RadarColor[2]);
  return (gamemd::AnimTypeClass **)(1); /*0x5fea11*/
}
}  // G42.18c ns repair
// 0x5FEAF0
namespace gamemd {  // G42.18c ns repair
ScenarioClass * * OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{

  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  int result; // eax
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)a1, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( a1 ) /*0x5feb13*/
    {
      ((ObjectTypeClass *)a1)->Construct((int)v3); /*0x5feb1c*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EF5D4) */  /*0x5feb21*/
      /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7EF5D4) */  /*0x5feb27*/
      /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7EF5D4) */  /*0x5feb2e*/
      /* X11: ptr_0 install elided (qmark slot, RHS g_ptr_7EF5D4) */  /*0x5feb35*/
    }
    ((char *)a1)->LoadAnim(); /*0x5feb3e*/
    ((char *)a1)->Load2DArt(); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &a1->DamageLevels); /*0x5feb56*/
    if ( !a1->DrawFlat ) /*0x5feb5b*/
    {
      if ( a1->? ) /*0x5feb69*/
      {
        _makepath(&v3[1], 0, 0, a1->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5feba1*/
      }
      else
      {
        _makepath(&v3[1], 0, 0, a1->?, Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(&v3[1], dword_A8B230[130].uniqueId); /*0x5febd7*/
      }
      if ( !a1->? ) /*0x5febdc*/
        a1->? = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/

}
}  // G42.18c ns repair
// 0x5FEDE0
namespace gamemd {  // G42.18c ns repair
AnimTypeClass * * OverlayTypeClass::GetCategory()
{

  void *result; // eax
  SHPStruct *v3; // edi
  CCFileClass v4; // [esp+4h] [ebp-26Ch] BYREF
  int v5[3]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = this->Image; /*0x5fede9*/
  if ( !result && this->DrawFlat_d ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( this->Theater ) /*0x5fee13*/
    {
      _makepath(Buffer, 0, 0, this->ImageFile, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5fee4f*/
    }
    else if ( this->NewTheater ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, this->ImageFile, Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x5fee90*/
    }
    (&v4)->Construct(Buffer); /*0x5fee9f*/
    v3 = (SHPStruct *)CCFileClass::ReadEntireFile(&v4); /*0x5feead*/
    this->Image = v3; /*0x5feeb1*/
    if ( v3 ) /*0x5feeb7*/
      this->ImageAllocated = 1; /*0x5feeb9*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    *(unsigned int *)v4.__tail_0 = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v4); /*0x5feee5*/
    return v3; /*0x5feeea*/
  }
  return result; /*0x5feeed*/

}
}  // G42.18c ns repair
// 0x6440A0
namespace gamemd {  // G42.18c ns repair
unsigned int *  OverlayTypeClass::Construct(char *aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  ((int *)this)->ConstructFull(aP1); /*0x6440a9*/
  this->LandType[0] = -1; /*0x6440b3*/
  *&this->ChargerBarrels_0x12 = -1; /*0x6440b9*/
  this->ParticleTypeClass_2B8 = -1; /*0x6440bf*/
  LOBYTE(this->CellAnim) = 0; /*0x6440c5*/
  this->DamageLevels = 1; /*0x6440cb*/
  this->Strength = 0; /*0x6440d5*/
  *&this->Wall = 50; /*0x6440db*/
  *&this->NoUseTileLandType = 0; /*0x6440e5*/
  *&this->Explodes = 0; /*0x6440eb*/
  *&this->IsRubble = 0; /*0x6440f1*/
  this->u32_2BC = 0; /*0x6440fc*/
  this->q2C0 = 0; /*0x644102*/
  this->u32_2C4 = 0; /*0x644108*/
  this->u32_2C8 = -1717986918; /*0x64410e*/
  this->u32_2D0 = -1717986918; /*0x644114*/
  this->u32_2D8 = 0; /*0x64411a*/
  this->q2E0 = 0; /*0x644120*/
  this->u32_2E8 = 0; /*0x644126*/
  this->u32_2F0 = 0; /*0x64412c*/
  this->u32_2F8 = 0; /*0x644132*/
  this->u32_2CC = 1069128089; /*0x64413b*/
  this->u32_2D4 = 1067030937; /*0x644145*/
  this->u32_2DC = 1077477376; /*0x64414f*/
  this->u32_2E4 = 0; /*0x644159*/
  this->u32_2EC = 0; /*0x64415f*/
  this->u32_2F4 = 0; /*0x644165*/
  this->u32_2FC = 0; /*0x64416b*/
  this->u32_300 = 0; /*0x644171*/
  this->u32_304 = 0; /*0x644177*/
  this->u32_308 = 0; /*0x64417d*/
  this->u32_309 = 0; /*0x644183*/
  this->u32_30A = 0; /*0x644189*/
  this->u32_30B = 0; /*0x644190*/
  this->u32_30C = 0; /*0x644196*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F007C) */  /*0x64419c*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F007C) */  /*0x6441a2*/
  /* X11: ptr_0 install elided (implicit via ParticleSystemTypeClass virtuals 0x6441a8) */
  /* X11: ptr_0 install elided (implicit via ParticleSystemTypeClass virtuals 0x6441af) */
  AbstractClass::GenerateUniqueID(&this->LandType); /*0x6441b6*/
  if ( (int)g_InfantryTypeInitState < *(int *)&DataGlobal_A83D70 /*0x6441ef*/
    || (BYTE1(DataGlobal_A83D74) || !*(unsigned int *)&DataGlobal_A83D70)
    && (int)DataGlobal_A83D7C > 0
    && (*(unsigned __int8 (**)(char *, char *, unsigned int))(*(unsigned int *)&DataGlobal_A83D68 + 8))(
         &DataGlobal_A83D68,
         (char *)DataGlobal_A83D7C + *(unsigned int *)&DataGlobal_A83D70,
         0) )
  {
    void *v3; // eax
    v3 = (void *)(g_InfantryTypeInitState++); /*0x6441fc*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_A83D6C + 4 * (unsigned int)v3) = (unsigned int)(this); /*0x64420b*/
  }
  this->IsLogic_d = 1; /*0x64420e*/
  return &this->ObjectTypeClass; /*0x644217*/

}
}  // G42.18c ns repair
// 0x4754B0
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::ReadINIString(uint8_t * a2, uint8_t * a3, unsigned int a4, void *a4_1)
{

  char *v5; // eax
  v5 = sub_48DFD0(a4); /*0x4754cd*/
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF
  if ( ((INIClass *)this)->GetString(a2, a3, v5, Destination, 128) ) /*0x4754e5*/
    return ((OverlayTypeClass *)((OverlayTypeClass *)Destination))->LookupByName(); /*0x4754f2*/
  else
    return a4; /*0x475502*/
}
}  // G42.18c ns repair
// 0x48DF80
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::LookupByName(void *a1)
{

  if ( !_strcmpi(g_Str__none_, (char *)this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  int v2 = 0; // edi /*0x48df9b*/
  char **v3; // esi
  v3 = (char **)(off_81DA28); /*0x48df9d*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48dfb0*/
  {
    ++v3; /*0x48dfb2*/
    ++v2; /*0x48dfb5*/
    if ( (int)v3 >= (int)off_81DA58 ) /*0x48dfbc*/
      return -1; /*0x48dfbc*/
  }
  return v2; /*0x48dfbe*/
}
}  // G42.18c ns repair
// 0x5FE4C0
namespace gamemd {  // G42.18c ns repair
int * OverlayTypeClass::GetTile(int a1)
{

  if ( (byte_AC15E8 & 1) == 0 ) /*0x5fe4cb*/
  {
    byte_AC15E8 |= 1u; /*0x5fe4e6*/
    dword_AC1640 = 0; /*0x5fe4ec*/
    dword_AC1644 = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return (int *)(&dword_AC1640); /*0x5fe518*/

}
}  // G42.18c ns repair
// 0x5FE530
namespace gamemd {  // G42.18c ns repair
bool OverlayTypeClass::GetType(int16_t *aP2, int a3)
{

  Object *v4; // eax
  v4 = (Object *)operator new(0xB0u); /*0x5fe538*/
  return v4 && (v4)->SpawnAtCell((int)this, aP2, -1); /*0x5fe559*/
}
}  // G42.18c ns repair
// 0x5FE570
namespace gamemd {  // G42.18c ns repair
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{

  Object *v3; // eax
  v3 = (Object *)operator new(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
    return (v3)->SpawnAtCell((int)this, &word_AC1608, -1); /*0x5fe58e*/
  else
    return 0; /*0x5fe597*/
}
}  // G42.18c ns repair
// 0x5FE5A0
namespace gamemd {  // G42.18c ns repair
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{


  char *v4; // edx
  v4 = (char *)DSurface_ViewBounds.field_4 + a2[1] + 15; /*0x5fe5c1*/
  int v6[2]; // [esp+8h] [ebp-8h] BYREF
  v6[0] = DSurface_ViewBounds.field_0 + *a2 + 30; /*0x5fe5c4*/
  v6[1] = (int)v4; /*0x5fe5c8*/
  int v5; // eax
  v5 = (*((int (**)(OverlayTypeClass *))this->ObjectTypeClass + 39))(this); /*0x5fe5f3*/
  DrawToSurfaceSHP( /*0x5fe606*/
    (int)g_DSurface_Hidden_2,
    *(int *)&DataGlobal_87F6B8,
    v5,
    a4,
    v6,
    a3,
    1536,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0,
    0);

}
}  // G42.18c ns repair
// 0x5FEA30
namespace gamemd {  // G42.18c ns repair
unsigned int * OverlayTypeClass::g_var_4f9ac2(unsigned int * a0, OverlayTypeClass * aP1)
{
  a0->ptr_0 = (void *)*aP1; /*0x5fea3d*/
  a0->ptr_1 = aP1->ptr_4; /*0x5fea42*/
  a0->ptr_2 = aP1->ptr_8; /*0x5fea49*/
  return &a0->ptr_0; /*0x5fea45*/
}
}  // G42.18c ns repair
// 0x5FEA50
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{


  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x5fea59*/
  Power::TimerProcess(this->LandType[0]); /*0x5fea67*/
  Power::TimerProcess((int)this->CellAnim); /*0x5fea75*/
  Power::TimerProcess(this->Strength); /*0x5fea83*/
  Power::TimerProcess(*&this->Wall); /*0x5fea91*/
  int v3; // ecx
  LOBYTE(v3) = this->NoUseTileLandType; /*0x5fea96*/
  ((Power *)a2)->FlagProcess(v3); /*0x5fea9f*/
  int v4; // edx
  LOBYTE(v4) = this->IsVeinholeMonster; /*0x5feaa4*/
  int v5; // eax
  v5 = ((Power *)a2)->FlagProcess(v4); /*0x5feaad*/
  LOBYTE(v5) = this->IsVeins; /*0x5feab2*/
  ((Power *)a2)->FlagProcess(v5); /*0x5feabb*/
  int v6; // ecx
  LOBYTE(v6) = this->ImageLoaded; /*0x5feac0*/
  ((Power *)a2)->FlagProcess(v6); /*0x5feac9*/
  int v7; // edx
  LOBYTE(v7) = this->IsRubble; /*0x5feace*/
  return ((Power *)a2)->FlagProcess(v7); /*0x5feadc*/

}
}  // G42.18c ns repair
// 0x5FEC10
namespace gamemd {  // G42.18c ns repair
int   OverlayTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax
  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x5fec1f*/
  if ( result >= 0 ) /*0x5fec26*/
    return 0; /*0x5fec28*/
  return result; /*0x5fec2a*/
}
}  // G42.18c ns repair
// 0x5FEC30
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x5fec36*/
    return -2147467261; /*0x5fec38*/
  *a2 = 1525862009; /*0x5fec46*/
  a2[1] = 298976820; /*0x5fec4e*/
  a2[2] = 1610654892; /*0x5fec57*/
  a2[3] = unk_7E960C; /*0x5fec60*/
  return 0; /*0x5fec3d*/
}
}  // G42.18c ns repair
// 0x5FED00
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::GetRadarColor(int a2, unsigned int a3)
{

  MixFileClass *v4; // eax
  int DamageLevels; // ecx
  int LandType; // esi
  unsigned __int16 *v7; // eax
  char v8; // cl
  int PixelData; // ecx
  unsigned __int16 v11; // [esp+4h] [ebp-4h]

  v4 = (MixFileClass *)(*(int (**)(OverlayTypeClass *))(this->ptr_0 + 156))(this); /*0x5fed06*/
  if ( v4 /*0x5fed28*/
    || (DamageLevels = this->DamageLevels) != 0
    && (v4 = (MixFileClass *)(*(int (**)(int))(*(unsigned int *)DamageLevels + 156))(DamageLevels)) != 0 )
  {
    LandType = this->LandType; /*0x5fed2e*/
    if ( (LandType < 127 || LandType > 138) && (LandType < 147 || LandType > 158) ) /*0x5fed4f*/
    {
      PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5feda2*/
      *(unsigned short *)a2 = *(unsigned short *)PixelData; /*0x5fedad*/
      a2->ptr_2 = *(unsigned char *)(PixelData + 2); /*0x5fedb4*/
      return a2; /*0x5feda4*/
    }
    else
    {
      v7 = (unsigned __int16 *)MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5fed5d*/
      v11 = *v7; /*0x5fed67*/
      v8 = HIBYTE(*v7); /*0x5fed6f*/
      BYTE1(a3) = v7->u32_2; /*0x5fed73*/
      LOBYTE(a3) = v11; /*0x5fed7b*/
      *(unsigned short *)a2 = a3; /*0x5fed86*/
      a2->ptr_2 = v8; /*0x5fed8a*/
      return a2; /*0x5fed77*/
    }
  }
  else
  {
    *(unsigned short *)a2 = 0; /*0x5fedd2*/
    a2->ptr_2 = 0; /*0x5fedd6*/
    return a2; /*0x5fedbb*/
  }

}
}  // G42.18c ns repair
// 0x5FEF00
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::GetTypeIdentifier()
{
  return 21; /*0x5fef05*/
}
}  // G42.18c ns repair
// 0x5FEF10
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::GetObjectSize()
{
  return 700; /*0x5fef15*/
}
}  // G42.18c ns repair
// 0x5FEF20
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::GetAuxField()
{
  return this->LandType[0]; /*0x5fef26*/
}
}  // G42.18c ns repair
// 0x5FEF30
namespace gamemd {  
// G57w10-S ns repair (G42.18c 先例)
int v3; // eax
OverlayTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

/* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EF5D4) */
/* X11: ptr_0 install elided (implicit via OverlayTypeClass virtuals) */
/* X11: ptr_0 install elided (implicit via OverlayTypeClass virtuals) */
/* X11: ptr_0 install elided (implicit via OverlayTypeClass virtuals) */
AbstractClass::AnnounceExpiredPointer(&this->ptr_0, 1); /*0x5fef51*/
v5 = this; /*0x5fef66*/
v3 = (*((int (**)(void **, OverlayTypeClass **))DataGlobal_A83D80 + 4))( /*0x5fef6a*/
         &DataGlobal_A83D80,
         &v5);
if ( v3 != -1 && v3 < *(int *)&g_ObjectTypeConfig ) /*0x5fef7a*/
{
  --*(unsigned int *)&g_ObjectTypeConfig; /*0x5fef7f*/
  for ( ; /*0x5fef85*/
    v3 < *(int *)&g_ObjectTypeConfig;
    *(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)g_BuildingTypeClass_Array
    + 4 * v3) )
  {
    ++v3; /*0x5fef8d*/
  }
}
ObjectTypeClass::Destruct(); /*0x5fefa1*/
if ( (a2 & 1) != 0 ) /*0x5fefab*/
  operator delete((void *)(this)); /*0x5fefae*/
return &this->ObjectTypeClass;
}