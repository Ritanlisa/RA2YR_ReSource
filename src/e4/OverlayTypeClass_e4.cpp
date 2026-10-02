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

// 0x5FE250
namespace gamemd {  // G42.18c ns repair
OverlayTypeClass::OverlayTypeClass(ObjectClass * aP1)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  OverlayTypeClass **v6; // edx

  ((ObjectTypeClass *)((int *)this))->ConstructFull(aP1); /*0x5fe259*/
  this->Strength = 1; /*0x5fe265*/
  *(unsigned int *)&this->Wall = 1; /*0x5fe26b*/
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
  this->DrawFlat = 0; /*0x5fe2ba*/
  this->IsRubble = 0; /*0x5fe2c0*/
  this->IsARock = 0; /*0x5fe2c6*/
  this->RadarColor[0] = 0; /*0x5fe2cc*/
  this->RadarColor[2] = 0; /*0x5fe2d2*/
  this->__tail_2B5[0] = 0; /*0x5fe2d8*/
  this->__tail_2B5[1] = 0; /*0x5fe2de*/
  this->__tail_2B5[2] = 0; /*0x5fe2e4*/
  *((unsigned char *)this + 696) = 0; /*0x5fe2ea*/
  this->vtable1 = &vt_OverlayTypeClass; /*0x5fe2f1*/
  ((unsigned int *)this)[0] = &vt_OverlayTypeClass; /*0x5fe2f7*/
  ((unsigned int *)this)[0] = &vt_OverlayTypeClass; /*0x5fe2fd*/
  ((unsigned int *)this)[0] = &vt_OverlayTypeClass; /*0x5fe304*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&((unsigned int *)this)[0]); /*0x5fe30b*/
  ((unsigned int *)this)[0] = 1; /*0x5fe310*/
  ((unsigned int *)this)[0] = 0; /*0x5fe317*/
  ((unsigned int *)this)[0] = 1; /*0x5fe31d*/
  ((unsigned int *)this)[0] = 0; /*0x5fe324*/
  v3 = *(unsigned int *)&stru_A83D50.__pad_3C[4]; /*0x5fe32a*/
  if ( *(int *)&stru_A83D50.__pad_3C[4] < (int)stru_A83D50.SuperClass_field_0x38 /*0x5fe368*/
    || (stru_A83D50.__pad_3C[1] || !stru_A83D50.SuperClass_field_0x38)
    && *(int *)&stru_A83D50.__pad_3C[8] > 0
    && (v4 = (*((uint8_t (**)(void **, char *, unsigned int))stru_A83D50.SuperClass_field_0x30 + 2))(
               &stru_A83D50.SuperClass_field_0x30,
               (char *)stru_A83D50.SuperClass_field_0x38 + *(unsigned int *)&stru_A83D50.__pad_3C[8],
               0) == 0,
        v3 = *(unsigned int *)&stru_A83D50.__pad_3C[4],
        !v4) )
  {
    *(unsigned int *)&stru_A83D50.__pad_3C[4] = v3 + 1; /*0x5fe36d*/
    *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v3) = this; /*0x5fe377*/
    v3 = *(unsigned int *)&stru_A83D50.__pad_3C[4]; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( v3 <= 0 ) /*0x5fe383*/
  {
LABEL_11:
    this->LandType[0] = -1; /*0x5fe397*/
    return this; /*0x5fe3a0*/
  }
  else
  {
    v6 = *(OverlayTypeClass ***)stru_A83D50.__pad_34; /*0x5fe385*/
    while ( *v6 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      ++v6; /*0x5fe390*/
      if ( v5 >= v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    this->LandType[0] = v5; /*0x5fe3a7*/
    return this; /*0x5fe3ad*/
  }

}
}  // G42.18c ns repair
// 0x5FE770
namespace gamemd {  // G42.18c ns repair
AnimTypeClass * * OverlayTypeClass::LoadFromINI(unsigned char *** aP1, void *a2)
{

  AnimTypeClass *INIString; // eax
  int v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char IsVeins; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  int DamageLevels; // ebp
  unsigned int *v13; // eax
  AnimTypeClass *CellAnim; // eax
  int Coord; // eax
  char v16; // al
  char ChainReaction; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  char NoUseTileLandType; // [esp-Ch] [ebp-298h]
  char ImageLoaded; // [esp-Ch] [ebp-298h]
  char Explodes; // [esp-Ch] [ebp-298h]
  char Overrides; // [esp-Ch] [ebp-298h]
  char v27; // [esp-Ch] [ebp-298h]
  int v28; // [esp+8h] [ebp-284h] BYREF
  char Destination[128]; // [esp+Ch] [ebp-280h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)aP1); /*0x5fe783*/
  if ( !((ObjectTypeClass *)((ObjectTypeClass *)this))->LoadFromINI(aP1) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  INIString = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                                 (OverlayTypeClass *)aP1,
                                 (uint8_t *)((unsigned int *)this)[0],
                                 aLand,
                                 (unsigned int)this->CellAnim);
  v4 = *(unsigned int *)&this->Wall; /*0x5fe7b1*/
  this->CellAnim = INIString; /*0x5fe7b7*/
  Int_Overwrite = ((INIClass *)((bool *)aP1))->ReadInt_Overwrite((uint8_t *)((unsigned int *)this)[0], aStrength, v4); /*0x5fe7c6*/
  NoUseTileLandType = this->NoUseTileLandType; /*0x5fe7d3*/
  *(unsigned int *)&this->Wall = Int_Overwrite; /*0x5fe7da*/
  this->NoUseTileLandType = INIClass::ReadBool_Overwrite( /*0x5fe7e5*/
                              (int *)aP1,
                              (uint8_t *)((unsigned int *)this)[0],
                              g_INI_Key_Wall,
                              NoUseTileLandType);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int *)aP1,
                     (uint8_t *)((unsigned int *)this)[0],
                     (uint8_t *)g_INI_Key_Tiberium,
                     this->IsVeinholeMonster);
  IsVeins = this->IsVeins; /*0x5fe7ff*/
  this->IsVeinholeMonster = Bool_Overwrite; /*0x5fe805*/
  v8 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aCrate, IsVeins); /*0x5fe814*/
  ImageLoaded = this->ImageLoaded; /*0x5fe821*/
  this->IsVeins = v8; /*0x5fe828*/
  this->ImageLoaded = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aCratetrigger, ImageLoaded); /*0x5fe833*/
  v9 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aExplodes, this->IsRubble); /*0x5fe848*/
  v10 = this->RadarColor[0]; /*0x5fe84d*/
  this->IsRubble = v9; /*0x5fe853*/
  v11 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aOverrides, v10); /*0x5fe862*/
  DamageLevels = this->DamageLevels; /*0x5fe867*/
  this->RadarColor[0] = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         (INIClass *)aP1,
         (uint8_t *)((unsigned int *)this)[0],
         aCellanim,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v13 = AnimTypeClass::FindOrCreate(Destination); /*0x5fe897*/
  }
  else
  {
    v13 = (unsigned int *)DamageLevels; /*0x5fe89e*/
  }
  this->DamageLevels = (int)v13; /*0x5fe8a0*/
  this->Strength = INIClass::ReadInt_Overwrite( /*0x5fe8c3*/
                     (bool *)&DSurface_ViewBounds.__pad_FC[228],
                     (uint8_t *)((unsigned int *)this)[0],
                     aDamagelevels,
                     this->Strength);
  if ( this->IsVeinholeMonster ) /*0x5fe8c9*/
  {
    CellAnim = this->CellAnim; /*0x5fe8d3*/
    ((unsigned int *)this)[0] = 6; /*0x5fe8d9*/
    if ( !CellAnim ) /*0x5fe8e5*/
      this->CellAnim = (AnimTypeClass *)5; /*0x5fe8e7*/
  }
  if ( !((unsigned int *)this)[0] && !this->DrawFlat ) /*0x5fe8fb*/
  {
    _makepath(Buffer, 0, 0, ((unsigned int *)this)[0], Ext); /*0x5fe917*/
    ((unsigned int *)this)[0] = (SHPStruct *)SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            (INIClass *)aP1,
            (int)&v28,
            (uint8_t *)((unsigned int *)this)[0],
            aRadarcolor,
            (uint8_t *)&this->__tail_2B5[1]);
  *(unsigned short *)&this->__tail_2B5[1] = *(unsigned short *)Coord; /*0x5fe94f*/
  Explodes = this->Explodes; /*0x5fe95e*/
  *((unsigned char *)this + 696) = *(unsigned char *)(Coord + 2); /*0x5fe965*/
  v16 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aNousetilelandt, Explodes); /*0x5fe968*/
  ChainReaction = this->ChainReaction; /*0x5fe96d*/
  this->Explodes = v16; /*0x5fe973*/
  v18 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aIsveinholemons, ChainReaction); /*0x5fe982*/
  Overrides = this->Overrides; /*0x5fe98f*/
  this->ChainReaction = v18; /*0x5fe996*/
  this->Overrides = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aIsveins, Overrides); /*0x5fe9a1*/
  v19 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aChainreaction, this->IsARock); /*0x5fe9b6*/
  v20 = this->RadarColor[1]; /*0x5fe9bb*/
  this->IsARock = v19; /*0x5fe9c1*/
  v21 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aDrawflat, v20); /*0x5fe9d0*/
  v27 = this->__tail_2B5[0]; /*0x5fe9dd*/
  this->RadarColor[1] = v21; /*0x5fe9e4*/
  this->__tail_2B5[0] = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)((unsigned int *)this)[0], aIsarock, v27); /*0x5fe9ef*/
  this->RadarColor[2] = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                          (int *)aP1,
                          (uint8_t *)((unsigned int *)this)[0],
                          aIsrubble,
                          this->RadarColor[2]);
  return 1; /*0x5fea11*/

}
}  // G42.18c ns repair
// 0x5FEAF0
namespace gamemd {  // G42.18c ns repair
ScenarioClass * * OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{

  int result; // eax
  char v3[513]; // [esp+7h] [ebp-201h] BYREF

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)a1, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( a1 ) /*0x5feb13*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)a1, (int)v3); /*0x5feb1c*/
      a1->vtable1 = &vt_OverlayTypeClass; /*0x5feb21*/
      ((unsigned int *)a1)[0] = &vt_OverlayTypeClass; /*0x5feb27*/
      ((unsigned int *)a1)[0] = &vt_OverlayTypeClass; /*0x5feb2e*/
      ((unsigned int *)a1)[0] = &vt_OverlayTypeClass; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &a1->DamageLevels); /*0x5feb56*/
    if ( !a1->DrawFlat ) /*0x5feb5b*/
    {
      if ( ((unsigned int *)a1)[0] ) /*0x5feb69*/
      {
        _makepath(&v3[1], 0, 0, ((unsigned int *)a1)[0], (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5feba1*/
      }
      else
      {
        _makepath(&v3[1], 0, 0, ((unsigned int *)a1)[0], Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(&v3[1], dword_A8B230[130].uniqueId); /*0x5febd7*/
      }
      if ( !((unsigned int *)a1)[0] ) /*0x5febdc*/
        ((unsigned int *)a1)[0] = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x5febf1*/
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

  result = ((unsigned int *)this)[0]; /*0x5fede9*/
  if ( !result && this->DrawFlat ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( ((unsigned int *)this)[0] ) /*0x5fee13*/
    {
      _makepath(Buffer, 0, 0, ((unsigned int *)this)[0], (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5fee4f*/
    }
    else if ( ((unsigned int *)this)[0] ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, ((unsigned int *)this)[0], Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x5fee90*/
    }
    CCFileClass::Construct(&v4, Buffer); /*0x5fee9f*/
    v3 = (SHPStruct *)((CCFileClass *)(&v4))->ReadEntireFile(); /*0x5feead*/
    ((unsigned int *)this)[0] = v3; /*0x5feeb1*/
    if ( v3 ) /*0x5feeb7*/
      ((unsigned int *)this)[0] = 1; /*0x5feeb9*/
    *(unsigned int *)v4.CDFileClass = &vt_CCFileClass; /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    ((Vector *)((int)v5))->Clear(); /*0x5feed4*/
    *(unsigned int *)v4.CDFileClass = &off_7E1668; /*0x5feedd*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v4))->Dtor(); /*0x5feee5*/
    return v3; /*0x5feeea*/
  }
  return result; /*0x5feeed*/

}
}  // G42.18c ns repair
// 0x6440A0
namespace gamemd {  // G42.18c ns repair
unsigned int *  OverlayTypeClass::Construct(ObjectClass * aP1, void *a2, void *a3, void *a4, void *a5, void *a6)
{

  void *v3; // eax

  ((ObjectTypeClass *)((int *)this))->ConstructFull(aP1); /*0x6440a9*/
  this->LandType[0] = -1; /*0x6440b3*/
  *(unsigned int *)&this->RadarColor[2] = -1; /*0x6440b9*/
  *((unsigned int *)this + 174) = -1; /*0x6440bf*/
  LOBYTE(this->CellAnim) = 0; /*0x6440c5*/
  this->DamageLevels = 1; /*0x6440cb*/
  this->Strength = 0; /*0x6440d5*/
  *(unsigned int *)&this->Wall = 50; /*0x6440db*/
  *(unsigned int *)&this->NoUseTileLandType = 0; /*0x6440e5*/
  *(unsigned int *)&this->Explodes = 0; /*0x6440eb*/
  *(unsigned int *)&this->IsRubble = 0; /*0x6440f1*/
  *((unsigned int *)this + 175) = 0; /*0x6440fc*/
  *((unsigned int *)this + 176) = 0; /*0x644102*/
  *((unsigned int *)this + 177) = 0; /*0x644108*/
  *((unsigned int *)this + 178) = -1717986918; /*0x64410e*/
  *((unsigned int *)this + 180) = -1717986918; /*0x644114*/
  *((unsigned int *)this + 182) = 0; /*0x64411a*/
  *((unsigned int *)this + 184) = 0; /*0x644120*/
  *((unsigned int *)this + 186) = 0; /*0x644126*/
  *((unsigned int *)this + 188) = 0; /*0x64412c*/
  *((unsigned int *)this + 190) = 0; /*0x644132*/
  *((unsigned int *)this + 179) = 1069128089; /*0x64413b*/
  *((unsigned int *)this + 181) = 1067030937; /*0x644145*/
  *((unsigned int *)this + 183) = 1077477376; /*0x64414f*/
  *((unsigned int *)this + 185) = 0; /*0x644159*/
  *((unsigned int *)this + 187) = 0; /*0x64415f*/
  *((unsigned int *)this + 189) = 0; /*0x644165*/
  *((unsigned int *)this + 191) = 0; /*0x64416b*/
  *((unsigned int *)this + 192) = 0; /*0x644171*/
  *((unsigned int *)this + 193) = 0; /*0x644177*/
  *((unsigned char *)this + 776) = 0; /*0x64417d*/
  *((unsigned char *)this + 777) = 0; /*0x644183*/
  *((unsigned char *)this + 778) = 0; /*0x644189*/
  *((unsigned char *)this + 779) = 0; /*0x644190*/
  *((unsigned char *)this + 780) = 0; /*0x644196*/
  this->vtable1 = &vt_ParticleSystemTypeClass; /*0x64419c*/
  ((unsigned int *)this)[0] = &vt_ParticleSystemTypeClass; /*0x6441a2*/
  ((unsigned int *)this)[0] = &vt_ParticleSystemTypeClass; /*0x6441a8*/
  ((unsigned int *)this)[0] = &vt_ParticleSystemTypeClass; /*0x6441af*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&((unsigned int *)this)[0]); /*0x6441b6*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 < *(int *)&stru_A83D50.__pad_14[12] /*0x6441ef*/
    || (BYTE1(stru_A83D50.SuperClass_field_0x24) || !*(unsigned int *)&stru_A83D50.__pad_14[12])
    && (int)stru_A83D50.SuperClass_field_0x2C > 0
    && (*(uint8_t (**)(char *, char *, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_14[4] + 8))(
         &stru_A83D50.__pad_14[4],
         (char *)stru_A83D50.SuperClass_field_0x2C + *(unsigned int *)&stru_A83D50.__pad_14[12],
         0) )
  {
    v3 = stru_A83D50.SuperClass_field_0x28++; /*0x6441fc*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * (unsigned int)v3) = this; /*0x64420b*/
  }
  ((unsigned int *)this)[0] = 1; /*0x64420e*/
  return this; /*0x644217*/

}
}  // G42.18c ns repair
// 0x4754B0
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::ReadINIString(uint8_t * a2, uint8_t * a3, unsigned int a4)
{

  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48DFD0(a4); /*0x4754cd*/
  if ( INIClass::GetString((INIClass *)this, a2, a3, v5, Destination, 128) ) /*0x4754e5*/
    return OverlayTypeClass::LookupByName((OverlayTypeClass *)Destination); /*0x4754f2*/
  else
    return a4; /*0x475502*/

}
}  // G42.18c ns repair
// 0x48DF80
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::LookupByName()
{

  int v2; // edi
  char **v3; // esi

  if ( !_strcmpi(g_Str__none_, (char *)this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
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
dword_AC1644 = 2147450879; /*0x5fe504*/
dword_AC1644 = 2147450879; /*0x5fe504*/

  if ( (byte_AC15E8 & 1) == 0 ) /*0x5fe4cb*/
  {
    byte_AC15E8 |= 1u; /*0x5fe4e6*/
    dword_AC1640 = 0; /*0x5fe4ec*/
    dword_AC1644 = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return &dword_AC1640; /*0x5fe518*/

}
}  // G42.18c ns repair
// 0x5FE530
namespace gamemd {  // G42.18c ns repair
bool OverlayTypeClass::GetType(IUnknown * aP2, int a3)
{

  Object *v4; // eax

  v4 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x5fe538*/
  return v4 && ((Object *)(v4))->SpawnAtCell((int)this, aP2, -1); /*0x5fe559*/

}
}  // G42.18c ns repair
// 0x5FE570
namespace gamemd {  // G42.18c ns repair
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{

  Object *v3; // eax

  v3 = (Object *)__2_YAPAXI_Z(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
    return ((Object *)(v3))->SpawnAtCell((int)this, &word_AC1608, -1); /*0x5fe58e*/
  else
    return 0; /*0x5fe597*/

}
}  // G42.18c ns repair
// 0x5FE5A0
namespace gamemd {  // G42.18c ns repair
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{

  char *v4; // edx
  int v5; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = (char *)DSurface_ViewBounds.field_4 + a2[1] + 15; /*0x5fe5c1*/
  v6[0] = DSurface_ViewBounds.field_0 + *a2 + 30; /*0x5fe5c4*/
  v6[1] = (int)v4; /*0x5fe5c8*/
  v5 = (*((int (**)(OverlayTypeClass *))this->vtable1 + 39))(this); /*0x5fe5f3*/
  DrawToSurfaceSHP( /*0x5fe606*/
    (int)g_DSurface_Hidden_2,
    *(int *)&stru_87F5F0.__pad_58[112],
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
unsigned int * OverlayTypeClass::vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1)
{

  a0->ObjectTypeClass = (void *)*aP1; /*0x5fea3d*/
  ((unsigned int *)a0)[0] = (void *)aP1[1]; /*0x5fea42*/
  ((unsigned int *)a0)[0] = (void *)aP1[2]; /*0x5fea49*/
  return a0; /*0x5fea45*/

}
}  // G42.18c ns repair
// 0x5FEA50
namespace gamemd {  // G42.18c ns repair
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  ((AbstractTypeClass *)((AbstractTypeClass *)this))->ProcessPower(a2); /*0x5fea59*/
  Power::TimerProcess(this->LandType[0]); /*0x5fea67*/
  Power::TimerProcess((int)this->CellAnim); /*0x5fea75*/
  Power::TimerProcess(this->Strength); /*0x5fea83*/
  Power::TimerProcess(*(unsigned int *)&this->Wall); /*0x5fea91*/
  LOBYTE(v3) = this->NoUseTileLandType; /*0x5fea96*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x5fea9f*/
  LOBYTE(v4) = this->IsVeinholeMonster; /*0x5feaa4*/
  v5 = ((Power *)((Power *)a2))->FlagProcess(v4); /*0x5feaad*/
  LOBYTE(v5) = this->IsVeins; /*0x5feab2*/
  ((Power *)((Power *)a2))->FlagProcess(v5); /*0x5feabb*/
  LOBYTE(v6) = this->ImageLoaded; /*0x5feac0*/
  ((Power *)((Power *)a2))->FlagProcess(v6); /*0x5feac9*/
  LOBYTE(v7) = this->IsRubble; /*0x5feace*/
  return ((Power *)((Power *)a2))->FlagProcess(v7); /*0x5feadc*/

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
  int v6; // esi
  int v7; // eax
  char v8; // cl
  int PixelData; // ecx
  int16_t v11; // [esp+4h] [ebp-4h]

  v4 = (MixFileClass *)(*((int (**)(OverlayTypeClass *))this->vtable1 + 39))(this); /*0x5fed06*/
  if ( v4 /*0x5fed28*/
    || (DamageLevels = this->DamageLevels) != 0
    && (v4 = (MixFileClass *)(*(int (**)(int))(*(unsigned int *)DamageLevels + 156))(DamageLevels)) != 0 )
  {
    v6 = this->LandType[0]; /*0x5fed2e*/
    if ( (v6 < 127 || v6 > 138) && (v6 < 147 || v6 > 158) ) /*0x5fed4f*/
    {
      PixelData = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5feda2*/
      *(unsigned short *)a2 = *(unsigned short *)PixelData; /*0x5fedad*/
      *(unsigned char *)(a2 + 2) = *(unsigned char *)(PixelData + 2); /*0x5fedb4*/
      return a2; /*0x5feda4*/
    }
    else
    {
      v7 = MixFileClass::GetPixelData(v4, (int)&a3, a3); /*0x5fed5d*/
      v11 = *(unsigned short *)v7; /*0x5fed67*/
      v8 = HIBYTE(*(unsigned short *)v7); /*0x5fed6f*/
      BYTE1(a3) = *(unsigned char *)(v7 + 2); /*0x5fed73*/
      LOBYTE(a3) = v11; /*0x5fed7b*/
      *(unsigned short *)a2 = a3; /*0x5fed86*/
      *(unsigned char *)(a2 + 2) = v8; /*0x5fed8a*/
      return a2; /*0x5fed77*/
    }
  }
  else
  {
    *(unsigned short *)a2 = 0; /*0x5fedd2*/
    *(unsigned char *)(a2 + 2) = 0; /*0x5fedd6*/
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
OverlayTypeClass * OverlayTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  OverlayTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->vtable1 = &vt_OverlayTypeClass; /*0x5fef36*/
  ((unsigned int *)Block)[0] = &vt_OverlayTypeClass; /*0x5fef3c*/
  ((unsigned int *)Block)[0] = &vt_OverlayTypeClass; /*0x5fef43*/
  ((unsigned int *)Block)[0] = &vt_OverlayTypeClass; /*0x5fef4a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x5fef51*/
  v5 = Block; /*0x5fef66*/
  v3 = (*((int (**)(void **, OverlayTypeClass **))stru_A83D50.SuperClass_field_0x30 + 4))( /*0x5fef6a*/
         &stru_A83D50.SuperClass_field_0x30,
         &v5);
  if ( v3 != -1 && v3 < *(int *)&stru_A83D50.__pad_3C[4] ) /*0x5fef7a*/
  {
    --*(unsigned int *)&stru_A83D50.__pad_3C[4]; /*0x5fef7f*/
    for ( ; /*0x5fef85*/
          v3 < *(int *)&stru_A83D50.__pad_3C[4];
          *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34
                                                                                + 4 * v3) )
    {
      ++v3; /*0x5fef8d*/
    }
  }
  ((ObjectTypeClass *)((int)Block))->Destruct(); /*0x5fefa1*/
  if ( (a2 & 1) != 0 ) /*0x5fefab*/
    __3_YAXPAX_Z(Block); /*0x5fefae*/
  return Block; /*0x5fefb8*/

}