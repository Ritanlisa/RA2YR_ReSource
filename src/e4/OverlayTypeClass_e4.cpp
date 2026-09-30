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

// 0x5FE250
OverlayTypeClass::OverlayTypeClass(ObjectClass * aP1)
{

  OverlayTypeClass *v3; // eax
  bool v4; // zf
  int v5; // ecx
  CCINIClass *v6; // edx

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x5fe259*/
  *((unsigned int *)this + 168) = 1; /*0x5fe265*/
  *((unsigned int *)this + 169) = 1; /*0x5fe26b*/
  *((unsigned char *)this + 684) = 1; /*0x5fe271*/
  *((unsigned char *)this + 691) = 1; /*0x5fe277*/
  *((unsigned int *)this + 165) = -1; /*0x5fe280*/
  *((unsigned int *)this + 166) = 0; /*0x5fe28a*/
  *((unsigned int *)this + 167) = 0; /*0x5fe290*/
  *((unsigned char *)this + 680) = 0; /*0x5fe296*/
  *((unsigned char *)this + 681) = 0; /*0x5fe29c*/
  *((unsigned char *)this + 682) = 0; /*0x5fe2a2*/
  *((unsigned char *)this + 683) = 0; /*0x5fe2a8*/
  *((unsigned char *)this + 685) = 0; /*0x5fe2ae*/
  *((unsigned char *)this + 686) = 0; /*0x5fe2b4*/
  *((unsigned char *)this + 687) = 0; /*0x5fe2ba*/
  *((unsigned char *)this + 688) = 0; /*0x5fe2c0*/
  *((unsigned char *)this + 689) = 0; /*0x5fe2c6*/
  *((unsigned char *)this + 690) = 0; /*0x5fe2cc*/
  *((unsigned char *)this + 692) = 0; /*0x5fe2d2*/
  *((unsigned char *)this + 693) = 0; /*0x5fe2d8*/
  *((unsigned char *)this + 694) = 0; /*0x5fe2de*/
  *((unsigned char *)this + 695) = 0; /*0x5fe2e4*/
  *((unsigned char *)this + 696) = 0; /*0x5fe2ea*/
  *this = &OverlayTypeClass::`vftable'; /*0x5fe2f1*/
  *((unsigned int *)this + 1) = &OverlayTypeClass::`vftable'; /*0x5fe2f7*/
  *((unsigned int *)this + 2) = &OverlayTypeClass::`vftable'; /*0x5fe2fd*/
  *((unsigned int *)this + 3) = &vt_OverlayTypeClass; /*0x5fe304*/
  AbstractClass::GenerateUniqueID((int)((unsigned int *)this + 1)); /*0x5fe30b*/
  *((unsigned char *)this + 559) = 1; /*0x5fe310*/
  *((unsigned char *)this + 560) = 0; /*0x5fe317*/
  *((unsigned char *)this + 562) = 1; /*0x5fe31d*/
  *((unsigned char *)this + 565) = 0; /*0x5fe324*/
  v3 = g_abs_A83D90; /*0x5fe32a*/
  if ( (int)g_abs_A83D90 < g_abs_A83D88 /*0x5fe368*/
    || (g_abs_A83D8D || !g_abs_A83D88)
    && g_abs_A83D94 > 0
    && (v4 = ((uint8_t (*)(DynamicVector **, int, unsigned int))g_abs_A83D80->field_8)(
               &g_abs_A83D80,
               g_abs_A83D88 + g_abs_A83D94,
               0) == 0,
        v3 = g_abs_A83D90,
        !v4) )
  {
    g_abs_A83D90 = (OverlayTypeClass *)&v3->__pad_0[1]; /*0x5fe36d*/
    *(unsigned int *)&g_abs_A83D84->__pad_0[4 * (unsigned int)v3] = this; /*0x5fe377*/
    v3 = g_abs_A83D90; /*0x5fe37a*/
  }
  v5 = 0; /*0x5fe37f*/
  if ( (int)v3 <= 0 ) /*0x5fe383*/
  {
LABEL_11:
    *((unsigned int *)this + 165) = -1; /*0x5fe397*/
    return this; /*0x5fe3a0*/
  }
  else
  {
    v6 = g_abs_A83D84; /*0x5fe385*/
    while ( *(unsigned int **)v6->__pad_0 != this ) /*0x5fe38d*/
    {
      ++v5; /*0x5fe38f*/
      v6 = (CCINIClass *)((char *)v6 + 4); /*0x5fe390*/
      if ( v5 >= (int)v3 ) /*0x5fe395*/
        goto LABEL_11; /*0x5fe395*/
    }
    *((unsigned int *)this + 165) = v5; /*0x5fe3a7*/
    return this; /*0x5fe3ad*/
  }

}
// 0x5FE770
AnimTypeClass * * OverlayTypeClass::LoadFromINI(unsigned char *** aP1)
{

  AnimTypeClass *v3; // eax
  INIClass *v4; // ecx
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  AnimTypeClass *v12; // ebp
  AnimTypeClass *v13; // eax
  AnimTypeClass *v14; // eax
  int Coord; // eax
  char v16; // al
  char v17; // cl
  char v18; // al
  char v19; // al
  char v20; // cl
  char v21; // al
  char v23; // [esp-Ch] [ebp-298h]
  char v24; // [esp-Ch] [ebp-298h]
  char v25; // [esp-Ch] [ebp-298h]
  char v26; // [esp-Ch] [ebp-298h]
  char v27; // [esp-Ch] [ebp-298h]
  CCINIClass v28; // [esp+8h] [ebp-284h] BYREF
  char Buffer[512]; // [esp+8Ch] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x5fe783*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  v3 = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                          aP1,
                          (INIClass *)((char *)this + 36),
                          (uint8_t *)&stru_830620.__pad_14B0[6832],
                          *((unsigned int *)this + 166));
  v4 = *(INIClass **)((char *)this + 676); /*0x5fe7b1*/
  *((unsigned int *)this + 166) = v3; /*0x5fe7b7*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5fe7c6*/
                    (int)aP1,
                    (uint8_t *)((char *)this + 36),
                    (CCINIClass *)&stru_830620.__pad_14B0[4264],
                    v4);
  v23 = *((unsigned char *)this + 680); /*0x5fe7d3*/
  *((unsigned int *)this + 169) = Int_Overwrite; /*0x5fe7da*/
  *((unsigned char *)this + 680) = INIClass::ReadBool_Overwrite( /*0x5fe7e5*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_81AC50.headNode[1],
                             v23);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int)aP1,
                     (uint8_t *)((char *)this + 36),
                     (CCINIClass *)&stru_817244.needsSave_flag,
                     *((unsigned char *)this + 681));
  v7 = *((unsigned char *)this + 682); /*0x5fe7ff*/
  *((unsigned char *)this + 681) = Bool_Overwrite; /*0x5fe805*/
  v8 = INIClass::ReadBool_Overwrite( /*0x5fe814*/
         (int)aP1,
         (uint8_t *)((char *)this + 36),
         (CCINIClass *)&stru_830620.__pad_14B0[6824],
         v7);
  v24 = *((unsigned char *)this + 683); /*0x5fe821*/
  *((unsigned char *)this + 682) = v8; /*0x5fe828*/
  *((unsigned char *)this + 683) = INIClass::ReadBool_Overwrite( /*0x5fe833*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6808],
                             v24);
  v9 = INIClass::ReadBool_Overwrite( /*0x5fe848*/
         (int)aP1,
         (uint8_t *)((char *)this + 36),
         (CCINIClass *)&stru_830620.__pad_14B0[6796],
         *((unsigned char *)this + 688));
  v10 = *((unsigned char *)this + 690); /*0x5fe84d*/
  *((unsigned char *)this + 688) = v9; /*0x5fe853*/
  v11 = INIClass::ReadBool_Overwrite( /*0x5fe862*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6784],
          v10);
  v12 = *(AnimTypeClass **)((char *)this + 668); /*0x5fe867*/
  *((unsigned char *)this + 690) = v11; /*0x5fe884*/
  if ( INIClass::GetString( /*0x5fe88a*/
         aP1,
         (INIClass *)((char *)this + 36),
         (uint8_t *)&stru_830620.__pad_14B0[6772],
         (INIClass *)&g_abs_87F8E4,
         (INIClass *)v28.headNode,
         128) )
  {
    v13 = AnimTypeClass::FindOrCreate((AbstractClass *)v28.headNode); /*0x5fe897*/
  }
  else
  {
    v13 = v12; /*0x5fe89e*/
  }
  *((unsigned int *)this + 167) = v13; /*0x5fe8a0*/
  *((unsigned int *)this + 168) = INIClass::ReadInt_Overwrite( /*0x5fe8c3*/
                              (int)&g_abs_87F8E4,
                              (uint8_t *)((char *)this + 504),
                              (CCINIClass *)&stru_830620.__pad_14B0[6756],
                              *(INIClass **)((char *)this + 672));
  if ( *((unsigned char *)this + 681) ) /*0x5fe8c9*/
  {
    v14 = *(AnimTypeClass **)((char *)this + 664); /*0x5fe8d3*/
    *((unsigned int *)this + 39) = 6; /*0x5fe8d9*/
    if ( !v14 ) /*0x5fe8e5*/
      *((unsigned int *)this + 166) = 5; /*0x5fe8e7*/
  }
  if ( !*((unsigned char *)this + 556) && !*((unsigned char *)this + 687) ) /*0x5fe8fb*/
  {
    _makepath(Buffer, 0, 0, (const char *)((char *)this + 504), Ext); /*0x5fe917*/
    *((unsigned int *)this + 41) = SearchMIXFile(Buffer, 1); /*0x5fe92d*/
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            aP1,
            &v28,
            (INIClass *)((char *)this + 36),
            (Color *)&stru_830620.__pad_14B0[6744],
            (Color *)((char *)this + 694));
  *((unsigned short *)this + 347) = *(unsigned short *)Coord; /*0x5fe94f*/
  v25 = *((unsigned char *)this + 684); /*0x5fe95e*/
  *((unsigned char *)this + 696) = *(unsigned char *)(Coord + 2); /*0x5fe965*/
  v16 = INIClass::ReadBool_Overwrite( /*0x5fe968*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6724],
          v25);
  v17 = *((unsigned char *)this + 685); /*0x5fe96d*/
  *((unsigned char *)this + 684) = v16; /*0x5fe973*/
  v18 = INIClass::ReadBool_Overwrite( /*0x5fe982*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6704],
          v17);
  v26 = *((unsigned char *)this + 686); /*0x5fe98f*/
  *((unsigned char *)this + 685) = v18; /*0x5fe996*/
  *((unsigned char *)this + 686) = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)((char *)this + 36), &unk_8184A8, v26); /*0x5fe9a1*/
  v19 = INIClass::ReadBool_Overwrite( /*0x5fe9b6*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6688],
          *((unsigned char *)this + 689));
  v20 = *((unsigned char *)this + 691); /*0x5fe9bb*/
  *((unsigned char *)this + 689) = v19; /*0x5fe9c1*/
  v21 = INIClass::ReadBool_Overwrite( /*0x5fe9d0*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_14B0[6676],
          v20);
  v27 = *((unsigned char *)this + 693); /*0x5fe9dd*/
  *((unsigned char *)this + 691) = v21; /*0x5fe9e4*/
  *((unsigned char *)this + 693) = INIClass::ReadBool_Overwrite( /*0x5fe9ef*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6668],
                             v27);
  *((unsigned char *)this + 692) = INIClass::ReadBool_Overwrite( /*0x5fea0a*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_14B0[6656],
                             *((unsigned char *)this + 692));
  return 1; /*0x5fea11*/

}
// 0x5FEAF0
ScenarioClass * * OverlayTypeClass::SaveLoad_Prefix(int a1, int a2)
{

  int result; // eax
  char v3; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = ObjectTypeClass::LoadCleanup(a1, a2); /*0x5feb04*/
  if ( result >= 0 ) /*0x5feb0b*/
  {
    if ( a1 ) /*0x5feb13*/
    {
      ObjectTypeClass::Construct((unsigned int *)a1, (int)&v3); /*0x5feb1c*/
      *(unsigned int *)a1 = &OverlayTypeClass::`vftable'; /*0x5feb21*/
      *(unsigned int *)(a1 + 4) = &OverlayTypeClass::`vftable'; /*0x5feb27*/
      *(unsigned int *)(a1 + 8) = &OverlayTypeClass::`vftable'; /*0x5feb2e*/
      *(unsigned int *)(a1 + 12) = &vt_OverlayTypeClass; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x5feb45*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 668)); /*0x5feb56*/
    if ( !*(unsigned char *)(a1 + 687) ) /*0x5feb5b*/
    {
      if ( *(unsigned char *)(a1 + 556) ) /*0x5feb69*/
      {
        _makepath( /*0x5feba1*/
          Buffer,
          0,
          0,
          (const char *)(a1 + 504),
          (const char *)&off_7E1BC6 + 112 * *((unsigned int *)g_abs_A8B230 + 1174));
      }
      else
      {
        _makepath(Buffer, 0, 0, (const char *)(a1 + 504), Ext); /*0x5febc0*/
        TheaterObjectTypeClassSpecificID(Buffer, *((unsigned int *)g_abs_A8B230 + 1174)); /*0x5febd7*/
      }
      if ( !*(unsigned int *)(a1 + 164) ) /*0x5febdc*/
        *(unsigned int *)(a1 + 164) = SearchMIXFile(Buffer, 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/

}
// 0x5FEDE0
AnimTypeClass * * OverlayTypeClass::GetCategory()
{

  void *result; // eax
  void *EntireFile; // edi
  unsigned int v4[22]; // [esp+4h] [ebp-26Ch] BYREF
  unsigned char v5[12]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = *(void **)((char *)this + 164); /*0x5fede9*/
  if ( !result && *((unsigned char *)this + 687) ) /*0x5fedf7*/
  {
    Debug::Log(); /*0x5fee0e*/
    if ( *((unsigned char *)this + 556) ) /*0x5fee13*/
    {
      _makepath( /*0x5fee4f*/
        Buffer,
        0,
        0,
        (const char *)((char *)this + 504),
        (const char *)&off_7E1BC6 + 112 * *((unsigned int *)g_abs_A8B230 + 1174));
    }
    else if ( *((unsigned char *)this + 567) ) /*0x5fee59*/
    {
      _makepath(Buffer, 0, 0, (const char *)((char *)this + 504), Ext); /*0x5fee78*/
      TheaterObjectTypeClassSpecificID(Buffer, *((unsigned int *)g_abs_A8B230 + 1174)); /*0x5fee90*/
    }
    CCFileClass::Construct(v4, Buffer); /*0x5fee9f*/
    EntireFile = CCFileClass::ReadEntireFile(v4); /*0x5feead*/
    *((unsigned int *)this + 41) = EntireFile; /*0x5feeb1*/
    if ( EntireFile ) /*0x5feeb7*/
      *((unsigned char *)this + 168) = 1; /*0x5feeb9*/
    v4[0] = &vt_CCFileClass; /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    v4[0] = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor(v4); /*0x5feee5*/
    return EntireFile; /*0x5feeea*/
  }
  return result; /*0x5feeed*/

}
// 0x6440A0
unsigned int *  OverlayTypeClass::Construct( ObjectClass * aP1)
{

  ParticleSystemTypeClass *v3; // eax

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP1); /*0x6440a9*/
  *(this + 165) = -1; /*0x6440b3*/
  *(this + 173) = -1; /*0x6440b9*/
  *(this + 174) = -1; /*0x6440bf*/
  *((unsigned char *)this + 664) = 0; /*0x6440c5*/
  *(this + 167) = 1; /*0x6440cb*/
  *(this + 168) = 0; /*0x6440d5*/
  *(this + 169) = 50; /*0x6440db*/
  *(this + 170) = 0; /*0x6440e5*/
  *(this + 171) = 0; /*0x6440eb*/
  *(this + 172) = 0; /*0x6440f1*/
  *(this + 175) = 0; /*0x6440fc*/
  *(this + 176) = 0; /*0x644102*/
  *(this + 177) = 0; /*0x644108*/
  *(this + 178) = -1717986918; /*0x64410e*/
  *(this + 180) = -1717986918; /*0x644114*/
  *(this + 182) = 0; /*0x64411a*/
  *(this + 184) = 0; /*0x644120*/
  *(this + 186) = 0; /*0x644126*/
  *(this + 188) = 0; /*0x64412c*/
  *(this + 190) = 0; /*0x644132*/
  *(this + 179) = 1069128089; /*0x64413b*/
  *(this + 181) = 1067030937; /*0x644145*/
  *(this + 183) = 1077477376; /*0x64414f*/
  *(this + 185) = 0; /*0x644159*/
  *(this + 187) = 0; /*0x64415f*/
  *(this + 189) = 0; /*0x644165*/
  *(this + 191) = 0; /*0x64416b*/
  *(this + 192) = 0; /*0x644171*/
  *(this + 193) = 0; /*0x644177*/
  *(this + 194) = 0; /*0x64417d*/
  *((unsigned char *)this + 780) = 0; /*0x644196*/
  *this = &ParticleSystemTypeClass::`vftable'; /*0x64419c*/
  *(this + 1) = &ParticleSystemTypeClass::`vftable'; /*0x6441a2*/
  *(this + 2) = &ParticleSystemTypeClass::`vftable'; /*0x6441a8*/
  *(this + 3) = &vt_ParticleSystemTypeClass; /*0x6441af*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6441b6*/
  if ( (int)g_abs_A83D78 < g_abs_A83D70 /*0x6441ef*/
    || (g_abs_A83D75 || !g_abs_A83D70)
    && g_abs_A83D7C > 0
    && ((uint8_t (*)(DynamicVector **, int, unsigned int))g_abs_A83D68->field_8)(
         &g_abs_A83D68,
         g_abs_A83D70 + g_abs_A83D7C,
         0) )
  {
    v3 = g_abs_A83D78; /*0x6441fc*/
    g_abs_A83D78 = (ParticleSystemTypeClass *)((char *)g_abs_A83D78 + 1); /*0x6441ff*/
    *(unsigned int *)&g_abs_A83D6C->__pad_0[4 * (unsigned int)v3] = this; /*0x64420b*/
  }
  *((unsigned char *)this + 564) = 1; /*0x64420e*/
  return this; /*0x644217*/

}
// 0x4754B0
int OverlayTypeClass::ReadINIString(uint8_t * a2, uint8_t * a3, unsigned int a4)
{

  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48DFD0(a4); /*0x4754cd*/
  if ( INIClass::GetString(this, a3, a3, v5, Destination, 128) ) /*0x4754e5*/
    return OverlayTypeClass::LookupByName(Destination); /*0x4754f2*/
  else
    return a4; /*0x475502*/

}
// 0x48DF80
int OverlayTypeClass::LookupByName()
{

  int v2; // edi
  const void **v3; // esi

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
  v3 = (const void **)&unk_81DA28; /*0x48df9d*/
  while ( _strcmpi(*v3, this) ) /*0x48dfb0*/
  {
    ++v3; /*0x48dfb2*/
    ++v2; /*0x48dfb5*/
    if ( (int)v3 >= (int)&unk_81DA58 ) /*0x48dfbc*/
      return -1; /*0x48dfbc*/
  }
  return v2; /*0x48dfbe*/

}
// 0x5FE4C0
int * OverlayTypeClass::GetTile(int a1)
{

  if ( (g_abs_AC15E8 & 1) == 0 ) /*0x5fe4cb*/
  {
    g_abs_AC15E8 |= 1u; /*0x5fe4e6*/
    g_abs_AC1640 = 0; /*0x5fe4ec*/
    g_abs_AC1644 = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return &g_abs_AC1640; /*0x5fe518*/

}
// 0x5FE530
bool OverlayTypeClass::GetType(IUnknown * aP2, int a3)
{

  void *v4; // eax

  v4 = (void *)RA2_OPNEW(0xB0u); /*0x5fe538*/
  return v4 && Object::SpawnAtCell(v4, this, aP2, (BuildingTypeClass *)0xFFFFFFFF); /*0x5fe559*/

}
// 0x5FE570
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{

  void *v3; // eax

  v3 = (void *)RA2_OPNEW(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
    return Object::SpawnAtCell( /*0x5fe58e*/
             v3,
             this,
             (IUnknown *)(&(&g_MatrixTransformState)[213] + 2),
             (BuildingTypeClass *)0xFFFFFFFF);
  else
    return 0; /*0x5fe597*/

}
// 0x5FE5A0
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{

  int v4; // edx
  int v5; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = g_abs_886FA4 + a2[1] + 15; /*0x5fe5c1*/
  v6[0] = g_abs_886FA0 + *a2 + 30; /*0x5fe5c4*/
  v6[1] = v4; /*0x5fe5c8*/
  v5 = (*(int (**)(void *))(*(unsigned int *)this + 156))(this); /*0x5fe5f3*/
  DrawToSurfaceSHP(g_abs_887314, g_abs_87F6B8, v5, a4, v6, a3, 1536, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x5fe606*/

}
// 0x5FEA30
unsigned int * OverlayTypeClass::vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1)
{

  *a0 = *(unsigned int *)aP1->__pad_0; /*0x5fea3d*/
  a0[1] = *(unsigned int *)&aP1->__pad_0[4]; /*0x5fea42*/
  a0[2] = *(unsigned int *)&aP1->__pad_0[8]; /*0x5fea49*/
  return a0; /*0x5fea45*/

}
// 0x5FEA50
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x5fea59*/
  Power::TimerProcess(*((unsigned int *)this + 165)); /*0x5fea67*/
  Power::TimerProcess(*((unsigned int *)this + 166)); /*0x5fea75*/
  Power::TimerProcess(*((unsigned int *)this + 168)); /*0x5fea83*/
  Power::TimerProcess(*((unsigned int *)this + 169)); /*0x5fea91*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 680); /*0x5fea96*/
  Power::FlagProcess(a2, v3); /*0x5fea9f*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 681); /*0x5feaa4*/
  v5 = Power::FlagProcess(a2, v4); /*0x5feaad*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 682); /*0x5feab2*/
  Power::FlagProcess(a2, v5); /*0x5feabb*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 683); /*0x5feac0*/
  Power::FlagProcess(a2, v6); /*0x5feac9*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 688); /*0x5feace*/
  return Power::FlagProcess(a2, v7); /*0x5feadc*/

}
// 0x5FEC10
int   OverlayTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP0); /*0x5fec1f*/
  if ( result >= 0 ) /*0x5fec26*/
    return 0; /*0x5fec28*/
  return result; /*0x5fec2a*/

}
// 0x5FEC30
int OverlayTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x5fec36*/
    return -2147467261; /*0x5fec38*/
  *a2 = 1525862009; /*0x5fec46*/
  a2[1] = 298976820; /*0x5fec4e*/
  a2[2] = 1610654892; /*0x5fec57*/
  a2[3] = -1252326136; /*0x5fec60*/
  return 0; /*0x5fec3d*/

}
// 0x5FED00
int OverlayTypeClass::GetRadarColor(int a2, unsigned int a3)
{

  char **v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // cl
  int PixelData; // ecx
  int16_t v11; // [esp+4h] [ebp-4h]

  v4 = (char **)(*(int (**)(int *))(*(unsigned int *)this + 156))(this); /*0x5fed06*/
  if ( v4 || (v5 = *((char *)this + 167)) != 0 && (v4 = (char **)(*(int (**)(int))(*(unsigned int *)v5 + 156))(v5)) != 0 ) /*0x5fed28*/
  {
    v6 = *((char *)this + 165); /*0x5fed2e*/
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
      v8 = IDA_HIBYTE(*(unsigned short *)v7); /*0x5fed6f*/
      IDA_BYTE1(a3) = *(unsigned char *)(v7 + 2); /*0x5fed73*/
      IDA_LOBYTE(a3) = v11; /*0x5fed7b*/
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
// 0x5FEF00
int OverlayTypeClass::GetTypeIdentifier()
{

  return 21; /*0x5fef05*/

}
// 0x5FEF10
int OverlayTypeClass::GetObjectSize()
{

  return 700; /*0x5fef15*/

}
// 0x5FEF20
int OverlayTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 165); /*0x5fef26*/

}
// 0x5FEF30
OverlayTypeClass * OverlayTypeClass::ddtor(void ** Block, char a2)
{

  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &OverlayTypeClass::`vftable'; /*0x5fef36*/
  *(Block + 1) = &OverlayTypeClass::`vftable'; /*0x5fef3c*/
  *(Block + 2) = &OverlayTypeClass::`vftable'; /*0x5fef43*/
  *(Block + 3) = &vt_OverlayTypeClass; /*0x5fef4a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x5fef51*/
  v5 = Block; /*0x5fef66*/
  v3 = (*(int (**)(int *, void ***))(g_abs_A83D80 + 16))(&g_abs_A83D80, &v5); /*0x5fef6a*/
  if ( v3 != -1 && v3 < g_abs_A83D90 && v3 < --g_abs_A83D90 ) /*0x5fef85*/
  {
    do /*0x5fef9d*/
    {
      ++v3; /*0x5fef8d*/
      *(unsigned int *)&g_abs_A83D84->vtable0[4 * v3 - 4] = *(unsigned int *)&g_abs_A83D84->vtable0[4 * v3]; /*0x5fef91*/
    }
    while ( v3 < g_abs_A83D90 ); /*0x5fef9d*/
  }
  ObjectTypeClass::Destruct((int)Block); /*0x5fefa1*/
  if ( (Block & 1) != 0 ) /*0x5fefab*/
    RA2_OPDEL(Block); /*0x5fefae*/
  return (OverlayTypeClass *)Block; /*0x5fefb8*/

}