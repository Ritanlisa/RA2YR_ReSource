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
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  OverlayTypeClass **v6; // edx

  ObjectTypeClass::ConstructFull(aP1); /*0x5fe259*/
    *((unsigned int *)this + 672) = 1;
    *((unsigned int *)this + 676) = 1;
    *((unsigned char *)this + 684) = 1;
    *((unsigned char *)this + 691) = 1;
    *((unsigned int *)this + 660) = -1;
    *((unsigned int *)this + 664) = 0;
    *((unsigned int *)this + 668) = 0;
    *((unsigned char *)this + 680) = 0;
    *((unsigned char *)this + 681) = 0;
    *((unsigned char *)this + 682) = 0;
    *((unsigned char *)this + 683) = 0;
    *((unsigned char *)this + 685) = 0;
    *((unsigned char *)this + 686) = 0;
    *((unsigned char *)this + 687) = 0;
    *((unsigned char *)this + 688) = 0;
    *((unsigned char *)this + 689) = 0;
    *((unsigned char *)this + 690) = 0;
    *((unsigned char *)this + 692) = 0;
    *((unsigned char *)this + 693) = 0;
    *((unsigned char *)this + 694) = 0;
    *((unsigned char *)this + 695) = 0;
    *((unsigned char *)this + 696) = 0;
    *this = &OverlayTypeClass::`vftable';
    *((unsigned int *)this + 4) = &OverlayTypeClass::`vftable';
    *((unsigned int *)this + 8) = &OverlayTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_OverlayTypeClass;
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vtable2); /*0x5fe30b*/
    *((unsigned char *)this + 559) = 1;
    *((unsigned char *)this + 560) = 0;
    *((unsigned char *)this + 562) = 1;
    *((unsigned char *)this + 565) = 0;
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
        *((unsigned int *)this + 660) = -1;
        return this;
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
        *((unsigned int *)this + 660) = v5;
        return this;
  }
}
// 0x5FE770
AnimTypeClass * * OverlayTypeClass::LoadFromINI(unsigned char *** aP1)
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
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, aP1) ) /*0x5fe78b*/
    return 0; /*0x5fea1f*/
  INIString = (AnimTypeClass *)OverlayTypeClass::ReadINIString( /*0x5fe7ac*/
                                 (OverlayTypeClass *)aP1,
                                 (uint8_t *)this->?,
                                 aLand,
                                 (unsigned int)this->CellAnim);
    v4 = *(INIClass **)((char *)this + 2704);
    *((unsigned int *)this + 2656) = v3;
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)aP1, (uint8_t *)this->?, aStrength, v4); /*0x5fe7c6*/
    v23 = *((unsigned char *)this + 2720);
    *((unsigned int *)this + 2704) = Int_Overwrite;
    *((unsigned char *)this + 2720) = INIClass::ReadBool_Overwrite(
                              (int *)aP1,
                              (uint8_t *)*(unsigned int *)&this->NoUseTileLandType,
                              g_INI_Key_Wall,
                              NoUseTileLandType);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x5fe7fa*/
                     (int *)aP1,
                     (uint8_t *)this->?,
                     (uint8_t *)g_INI_Key_Tiberium,
                     this->IsVeinholeMonster);
    v7 = *((unsigned char *)this + 2728);
    *((unsigned char *)this + 2724) = Bool_Overwrite;
  v8 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aCrate, IsVeins); /*0x5fe814*/
    v24 = *((unsigned char *)this + 2732);
    *((unsigned char *)this + 2728) = v8;
    *((unsigned char *)this + 2732) = INIClass::ReadBool_Overwrite(
    v9 = INIClass::ReadBool_Overwrite(
    v10 = *((unsigned char *)this + 2760);
    *((unsigned char *)this + 2752) = v9;
  v11 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aOverrides, v10); /*0x5fe862*/
    v12 = *(AnimTypeClass **)((char *)this + 2672);
    *((unsigned char *)this + 2760) = v11;
  if ( INIClass::GetString( /*0x5fe88a*/
         (INIClass *)aP1,
         (uint8_t *)this->?,
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
    *((unsigned int *)this + 2672) = v13;
    *((unsigned int *)this + 2688) = INIClass::ReadInt_Overwrite(
                     (bool *)&DSurface_ViewBounds.__pad_FC[228],
                     (uint8_t *)this->q2A0,
                     aDamagelevels,
                     this->Strength);
    if ( *((unsigned char *)this + 2724) )
  {
        v14 = *(AnimTypeClass **)((char *)this + 2656);
        *((unsigned int *)this + 624) = 6;
    if ( !CellAnim ) /*0x5fe8e5*/
            *((unsigned int *)this + 2656) = 5;
  }
    if ( !*((unsigned char *)this + 2224) && !*((unsigned char *)this + 2748) )
  {
        _makepath(Buffer, 0, 0, (const char *)((char *)this + 2016), Ext);
        *((unsigned int *)this + 656) = SearchMIXFile(Buffer, 1);
  }
  Coord = INIClass::GetCoord( /*0x5fe947*/
            (INIClass *)aP1,
            (int)&v28,
            (uint8_t *)this->?,
            aRadarcolor,
            (uint8_t *)&this->__tail_2B5[1]);
    *((unsigned short *)this + 2776) = *(unsigned short *)Coord;
    v25 = *((unsigned char *)this + 2736);
    *((unsigned char *)this + 2784) = *(unsigned char *)(Coord + 2);
  v16 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aNousetilelandt, Explodes); /*0x5fe968*/
    v17 = *((unsigned char *)this + 2740);
    *((unsigned char *)this + 2736) = v16;
  v18 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aIsveinholemons, ChainReaction); /*0x5fe982*/
    v26 = *((unsigned char *)this + 2744);
    *((unsigned char *)this + 2740) = v18;
    *((unsigned char *)this + 2744) = INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)((char *)this + 144), &unk_8184A8, v26);
    v19 = INIClass::ReadBool_Overwrite(
    v20 = *((unsigned char *)this + 2764);
    *((unsigned char *)this + 2756) = v19;
  v21 = INIClass::ReadBool_Overwrite((int *)aP1, (uint8_t *)this->?, aDrawflat, v20); /*0x5fe9d0*/
    v27 = *((unsigned char *)this + 2772);
    *((unsigned char *)this + 2764) = v21;
    *((unsigned char *)this + 2772) = INIClass::ReadBool_Overwrite(
    *((unsigned char *)this + 2768) = INIClass::ReadBool_Overwrite(
                          (int *)aP1,
                          (uint8_t *)this->q2B4,
                          aIsrubble,
                          this->RadarColor[2]);
  return 1; /*0x5fea11*/
}
// 0x5FEAF0
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
      a1->ObjectTypeClass = (void*)&OverlayTypeClass_vftable; /*0x5feb21*/
      *(void **)&a1->vtable2 = (void*)&OverlayTypeClass_vftable; /*0x5feb27*/
      a1->? = (void*)&OverlayTypeClass_vftable; /*0x5feb2e*/
      a1->? = (void*)&OverlayTypeClass_vftable; /*0x5feb35*/
    }
    VoxelAnimType::LoadAnim((char *)a1); /*0x5feb3e*/
    ObjectTypeClass::Load2DArt((char *)a1); /*0x5feb45*/
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
        a1->q0A4 = (SHPStruct *)SearchMIXFile(&v3[1], 1); /*0x5febf1*/
    }
    return 0; /*0x5febf7*/
  }
  return result; /*0x5febf9*/
}
// 0x5FEDE0
AnimTypeClass * * OverlayTypeClass::GetCategory()
{
  void *result; // eax
  SHPStruct *v3; // edi
  CCFileClass v4; // [esp+4h] [ebp-26Ch] BYREF
  int v5[3]; // [esp+5Ch] [ebp-214h] BYREF
  int v6; // [esp+68h] [ebp-208h]
  char Buffer[512]; // [esp+70h] [ebp-200h] BYREF

  result = *(unsigned int *)&this->Image; /*0x5fede9*/
    if ( !result && *((unsigned char *)this + 2748) )
  {
    Debug::Log(); /*0x5fee0e*/
        if ( *((unsigned char *)this + 2224) )
    {
      _makepath(Buffer, 0, 0, this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x5fee4f*/
    }
        else if ( *((unsigned char *)this + 2268) )
    {
            _makepath(Buffer, 0, 0, (const char *)((char *)this + 2016), Ext);
      TheaterObjectTypeClassSpecificID(Buffer, dword_A8B230[130].uniqueId); /*0x5fee90*/
    }
    CCFileClass::Construct(&v4, Buffer); /*0x5fee9f*/
    v3 = (SHPStruct *)CCFileClass::ReadEntireFile(&v4); /*0x5feead*/
        *((unsigned int *)this + 656) = EntireFile;
    if ( v3 ) /*0x5feeb7*/
            *((unsigned char *)this + 672) = 1;
    *(unsigned int *)v4.CDFileClass = (void*)&CCFileClass_vftable; /*0x5feec4*/
    v6 = 0; /*0x5feecc*/
    Vector::Clear((int)v5); /*0x5feed4*/
    *(unsigned int *)v4.CDFileClass = &off_7E1668; /*0x5feedd*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v4); /*0x5feee5*/
    return v3; /*0x5feeea*/
  }
  return result; /*0x5feeed*/
}
// 0x6440A0
unsigned int *  OverlayTypeClass::Construct()
{
  void *v3; // eax

  ObjectTypeClass::ConstructFull(this); /*0x6440a9*/
    *((unsigned int *)this + 660) = -1;
    *((unsigned int *)this + 692) = -1;
    *((unsigned int *)this + 696) = -1;
    *((unsigned char *)this + 664) = 0;
    *((unsigned int *)this + 668) = 1;
    *((unsigned int *)this + 672) = 0;
    *((unsigned int *)this + 676) = 50;
    *((unsigned int *)this + 680) = 0;
    *((unsigned int *)this + 684) = 0;
    *((unsigned int *)this + 688) = 0;
    *((unsigned int *)this + 700) = 0;
    *((unsigned int *)this + 704) = 0;
    *((unsigned int *)this + 708) = 0;
    *((unsigned int *)this + 712) = -1717986918;
    *((unsigned int *)this + 720) = -1717986918;
    *((unsigned int *)this + 728) = 0;
    *((unsigned int *)this + 736) = 0;
    *((unsigned int *)this + 744) = 0;
    *((unsigned int *)this + 752) = 0;
    *((unsigned int *)this + 760) = 0;
    *((unsigned int *)this + 716) = 1069128089;
    *((unsigned int *)this + 724) = 1067030937;
    *((unsigned int *)this + 732) = 1077477376;
    *((unsigned int *)this + 740) = 0;
    *((unsigned int *)this + 748) = 0;
    *((unsigned int *)this + 756) = 0;
    *((unsigned int *)this + 764) = 0;
    *((unsigned int *)this + 768) = 0;
    *((unsigned int *)this + 772) = 0;
    *((unsigned int *)this + 776) = 0;
  this->u32_309 = 0; /*0x644183*/
  this->u32_30A = 0; /*0x644189*/
  this->u32_30B = 0; /*0x644190*/
    *((unsigned char *)this + 780) = 0;
    *this = &ParticleSystemTypeClass::`vftable';
    *((unsigned int *)this + 4) = &ParticleSystemTypeClass::`vftable';
    *((unsigned int *)this + 8) = &ParticleSystemTypeClass::`vftable';
    *((unsigned int *)this + 12) = &vt_ParticleSystemTypeClass;
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->vtable2); /*0x6441b6*/
  if ( (int)stru_A83D50.SuperClass_field_0x28 < *(int *)&stru_A83D50.__pad_14[12] /*0x6441ef*/
    || (IDA_BYTE1(stru_A83D50.SuperClass_field_0x24) || !*(unsigned int *)&stru_A83D50.__pad_14[12])
    && (int)stru_A83D50.SuperClass_field_0x2C > 0
    && (*(uint8_t (**)(char *, char *, unsigned int))(*(unsigned int *)&stru_A83D50.__pad_14[4] + 8))(
         &stru_A83D50.__pad_14[4],
         (char *)stru_A83D50.SuperClass_field_0x2C + *(unsigned int *)&stru_A83D50.__pad_14[12],
         0) )
  {
    v3 = stru_A83D50.SuperClass_field_0x28++; /*0x6441fc*/
    *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_14[8] + 4 * (unsigned int)v3) = this; /*0x64420b*/
  }
    *((unsigned char *)this + 564) = 1;
    return this;
}
// 0x4754B0
int OverlayTypeClass::ReadINIString(CCINIClass * aP1, unsigned char * a2, AnimTypeClass * aP3)
{
  char *v5; // eax
  char Destination[128]; // [esp+8h] [ebp-80h] BYREF

  v5 = sub_48DFD0(aP3); /*0x4754cd*/
  if ( INIClass::GetString((INIClass *)this, aP1, a2, v5, Destination, 128) ) /*0x4754e5*/
// 0x48df80
    return OverlayTypeClass::LookupByName((OverlayTypeClass *)Destination); /*0x4754f2*/
  else
    return aP3; /*0x475502*/
}
// 0x48DF80
int OverlayTypeClass::LookupByName()
{
  int v2; // edi
  char **v3; // esi

  if ( !_strcmpi(g_Str__none_, (char *)this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
  v3 = off_81DA28; /*0x48df9d*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x48dfb0*/
  {
    ++v3; /*0x48dfb2*/
    ++v2; /*0x48dfb5*/
    if ( (int)v3 >= (int)off_81DA58 ) /*0x48dfbc*/
      return -1; /*0x48dfbc*/
  }
  return v2; /*0x48dfbe*/
}
// 0x5FE4C0
int * OverlayTypeClass::GetTile(int a1)
{
  if ( (byte_AC15E8 & 1) == 0 ) /*0x5fe4cb*/
  {
    byte_AC15E8 |= 1u; /*0x5fe4e6*/
    dword_AC1640 = 0; /*0x5fe4ec*/
    dword_AC1644 = 2147450879; /*0x5fe504*/
    atexit(nullsub_213); /*0x5fe50a*/
  }
  return &dword_AC1640; /*0x5fe518*/
}
// 0x5FE530
bool OverlayTypeClass::GetType(IUnknown * aP2, int a3)
{
  Object *v4; // eax

  v4 = (Object *)RA2_OPNEW(0xB0u); /*0x5fe538*/
// 0x5fc380
  return v4 && Object::SpawnAtCell(v4, (int)this, aP2, -1); /*0x5fe559*/
}
// 0x5FE570
OverlayClass * OverlayTypeClass::GetDamage(int a2)
{
  Object *v3; // eax

  v3 = (Object *)RA2_OPNEW(0xB0u); /*0x5fe578*/
  if ( v3 ) /*0x5fe582*/
// 0x5fc380
    return Object::SpawnAtCell(v3, (int)this, &word_AC1608, -1); /*0x5fe58e*/
  else
    return 0; /*0x5fe597*/
}
// 0x5FE5A0
void OverlayTypeClass::GetLandType(unsigned int * a2, int * a3, unsigned int a4)
{
  char *v4; // edx
  int v5; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = (char *)DSurface_ViewBounds.field_4 + a2[1] + 15; /*0x5fe5c1*/
  v6[0] = DSurface_ViewBounds.field_0 + *a2 + 30; /*0x5fe5c4*/
  v6[1] = (int)v4; /*0x5fe5c8*/
    v5 = (*(int (**)(void *))(*(unsigned int *)this + 156))(this);
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
// 0x5FEA30
unsigned int * OverlayTypeClass::vt_entry_6C(unsigned int * a0, OverlayTypeClass * aP1)
{
    *a0 = *(unsigned int *)aP1->__pad_0;
  a0->vtable2 = (void *)aP1[1]; /*0x5fea42*/
  a0->? = (void *)aP1[2]; /*0x5fea49*/
    return a0;
}
// 0x5FEA50
int OverlayTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx

  AbstractTypeClass::ProcessPower(a2); /*0x5fea59*/
    Power::TimerProcess(*((unsigned int *)this + 2640));
    Power::TimerProcess(*((unsigned int *)this + 2656));
    Power::TimerProcess(*((unsigned int *)this + 2688));
    Power::TimerProcess(*((unsigned int *)this + 2704));
    LOBYTE(v3) = *((unsigned char *)this + 2720);
  Power::FlagProcess((Power *)a2, v3); /*0x5fea9f*/
    LOBYTE(v4) = *((unsigned char *)this + 2724);
  v5 = Power::FlagProcess((Power *)a2, v4); /*0x5feaad*/
    LOBYTE(v5) = *((unsigned char *)this + 2728);
  Power::FlagProcess((Power *)a2, v5); /*0x5feabb*/
    LOBYTE(v6) = *((unsigned char *)this + 2732);
  Power::FlagProcess((Power *)a2, v6); /*0x5feac9*/
    LOBYTE(v7) = *((unsigned char *)this + 2752);
// 0x4a1ca0
  return Power::FlagProcess((Power *)a2, v7); /*0x5feadc*/
}
// 0x5FEC10
int   OverlayTypeClass::SaveLoad_Prefix_0(int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, this, aP2); /*0x5fec1f*/
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
  a2[3] = unk_7E960C; /*0x5fec60*/
  return 0; /*0x5fec3d*/
}
// 0x5FED00
int OverlayTypeClass::GetRadarColor(int a2, unsigned int a3)
{
  MixFileClass *v4; // eax
  int DamageLevels; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // cl
  int PixelData; // ecx
  int16_t v11; // [esp+4h] [ebp-4h]

    v4 = (char **)(*(int (**)(int *))(*(char *)this + 624))(this);
  if ( v4 /*0x5fed28*/
    || (DamageLevels = this->DamageLevels) != 0
    && (v4 = (MixFileClass *)(*(int (**)(int))(*(unsigned int *)DamageLevels + 156))(DamageLevels)) != 0 )
  {
        v6 = *((unsigned int *)this + 660);
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
      IDA_BYTE1(a3) = v7->Blowfish; /*0x5fed73*/
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
    return *((unsigned int *)this + 660);
}
// 0x5FEF30
OverlayTypeClass * OverlayTypeClass::ddtor(char a2)
{
  int v3; // eax
  OverlayTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

    *Block = &OverlayTypeClass::`vftable';
    *(Block + 1) = &OverlayTypeClass::`vftable';
    *(Block + 2) = &OverlayTypeClass::`vftable';
    *(Block + 3) = &vt_OverlayTypeClass;
    AbstractClass::AnnounceExpiredPointer(Block, 1);
  v5 = this; /*0x5fef66*/
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
  ObjectTypeClass::Destruct(); /*0x5fefa1*/
  if ( (a2 & 1) != 0 ) /*0x5fefab*/
    RA2_OPDEL(); /*0x5fefae*/
    return (OverlayTypeClass *)Block;
}