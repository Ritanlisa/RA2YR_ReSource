// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/E4Recv_5AFEF0_e4.hpp"
#include "e4/classes/SmudgeTypeVector_e4.hpp"
#include "e4/classes/E4Recv_728A00_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"

// 0x6B5260
SmudgeTypeClass::SmudgeTypeClass(char * Source)
{

  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  void **v6; // edx

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x6b5269*/
  *((unsigned int *)this + 165) = -1; /*0x6b5277*/
  *((unsigned int *)this + 166) = 1; /*0x6b5281*/
  *((unsigned int *)this + 167) = 1; /*0x6b5287*/
  *((unsigned char *)this + 672) = 0; /*0x6b528d*/
  *((unsigned char *)this + 673) = 0; /*0x6b5294*/
  *(unsigned int *)this = &vt_SmudgeTypeClass; /*0x6b529b*/
  *((unsigned int *)this + 1) = &vt_SmudgeTypeClass; /*0x6b52a1*/
  *((unsigned int *)this + 2) = &vt_SmudgeTypeClass; /*0x6b52a7*/
  *((unsigned int *)this + 3) = &vt_SmudgeTypeClass; /*0x6b52ae*/
  AbstractClass::GenerateUniqueID((int)((unsigned char *)this + 4)); /*0x6b52b5*/
  *(unsigned short *)((unsigned char *)this + 559) = 1; /*0x6b52ba*/
  *((unsigned char *)this + 561) = 0; /*0x6b52c7*/
  *((unsigned char *)this + 562) = 1; /*0x6b52ce*/
  *((unsigned char *)this + 563) = 1; /*0x6b52d4*/
  *((unsigned char *)this + 565) = 0; /*0x6b52da*/
  v3 = g_abs_A8EC28; /*0x6b52e1*/
  if ( g_abs_A8EC28 < g_abs_A8EC20 /*0x6b5322*/
    || (g_abs_A8EC25 || !g_abs_A8EC20)
    && g_abs_A8EC2C > 0
    && (v4 = (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A8EC18 + 8))(
               &g_abs_A8EC18,
               g_abs_A8EC20 + g_abs_A8EC2C,
               0) == 0,
        v3 = g_abs_A8EC28,
        !v4) )
  {
    g_abs_A8EC28 = v3 + 1; /*0x6b5327*/
    *((unsigned int *)g_abs_A8EC1C + v3) = this; /*0x6b5331*/
    v3 = g_abs_A8EC28; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( v3 <= 0 ) /*0x6b533d*/
  {
LABEL_11:
    *((unsigned int *)this + 165) = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = (void **)g_abs_A8EC1C; /*0x6b533f*/
    while ( *v6 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      ++v6; /*0x6b534a*/
      if ( v5 >= v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    *((unsigned int *)this + 165) = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }

}
// 0x6B55F0
void SmudgeTypeClass::vt_entry_A0(int * a2, int * a3, int a4, int a5, short * a6)
{
    unsigned int v7 = 0;  /* G37 hoist */
    unsigned int v7 = 0;  /* G37 hoist */

  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  unsigned int *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v7 = (*(int (**)(unsigned int *))(*(unsigned int *)this + 624))(this); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v14 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      v9 = *((unsigned int *)this + 166); /*0x6b5623*/
      v14 += -15 * (a4 / v9 + a4 % v9); /*0x6b5659*/
      v13 += 60 * (a4 / v9 - a4 % v9) / 2; /*0x6b5661*/
    }
    v10 = CellCoord::To_CellObj(&g_abs_87F7E8, a6); /*0x6b5674*/
    v12 = *((int16_t *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP(g_abs_887314, v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0); /*0x6b56b4*/
  }

}
// 0x6B56D0
int SmudgeTypeClass::GetSize( uint8_t *** aP1)
{

  char Bool_Overwrite; // al
  char v4; // cl
  char v5; // al
  INIClass *v7; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6b56e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)aP1, (CCINIClass *)aP1) ) /*0x6b56eb*/
    return 0; /*0x6b57db*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b570b*/
                     (int)aP1,
                     (uint8_t *)(aP1 + 36),
                     &unk_8185F4,
                     *(unsigned char *)(aP1 + 672));
  v4 = *(unsigned char *)(aP1 + 673); /*0x6b5710*/
  *(unsigned char *)(aP1 + 672) = Bool_Overwrite; /*0x6b5716*/
  v5 = INIClass::ReadBool_Overwrite( /*0x6b5725*/
         (int)aP1,
         (uint8_t *)(aP1 + 36),
         (CCINIClass *)&stru_830620.__pad_579C[41580],
         v4);
  v7 = *(INIClass **)(aP1 + 664); /*0x6b5732*/
  *(unsigned char *)(aP1 + 673) = v5; /*0x6b5739*/
  *(unsigned int *)(aP1 + 664) = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                              (int)aP1,
                              (uint8_t *)(aP1 + 36),
                              (CCINIClass *)&stru_82BBD0.sectionHead[1],
                              v7);
  *(unsigned int *)(aP1 + 668) = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                              (int)aP1,
                              (uint8_t *)(aP1 + 36),
                              &g_INI_Key_Height,
                              *(INIClass **)(aP1 + 668));
  if ( *(unsigned char *)(aP1 + 556) ) /*0x6b5764*/
    _makepath(Buffer, 0, 0, (const char *)(aP1 + 504), (const char *)&off_7E1BC6 + 112 * g_abs_A8B230->theater); /*0x6b57b4*/
  else
    _makepath(Buffer, 0, 0, (const char *)(aP1 + 504), Ext); /*0x6b5784*/
  *(unsigned int *)(aP1 + 164) = SearchMIXFile(Buffer, 0); /*0x6b57c7*/
  return 1; /*0x6b57cd*/

}
// 0x6B6160
SmudgeTypeClass *  SmudgeTypeClass::ddtor( void * a2, char a3)
{

  CCINIClass *v3; // eax
  int v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (CCINIClass *)*(this + 41); /*0x6b6164*/
  *this = &vt_SmudgeTypeClass; /*0x6b616a*/
  *(this + 1) = &vt_SmudgeTypeClass; /*0x6b6172*/
  *(this + 2) = &vt_SmudgeTypeClass; /*0x6b6179*/
  *(this + 3) = &vt_SmudgeTypeClass; /*0x6b6180*/
  if ( v3 ) /*0x6b6187*/
  {
    OperatorDelete(v3); /*0x6b618a*/
    *(this + 41) = 0; /*0x6b6192*/
  }
  IDA_LOBYTE(this) = 1; /*0x6b619c*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, this); /*0x6b61a0*/
  v7 = this; /*0x6b61b5*/
  v5 = (*(int (**)(char *, void ***))(*(unsigned int *)&HouseClass_Player.__pad_5568[22884] + 16))( /*0x6b61b9*/
         &HouseClass_Player.__pad_5568[22884],
         &v7);
  if ( v5 != -1 && v5 < *(int *)&HouseClass_Player.__pad_5568[22900] ) /*0x6b61c9*/
  {
    --*(unsigned int *)&HouseClass_Player.__pad_5568[22900]; /*0x6b61ce*/
    for ( ; /*0x6b61d4*/
          v5 < *(int *)&HouseClass_Player.__pad_5568[22900];
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888] + 4 * v5 - 4) = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22888]
                                                                                                + 4 * v5) )
    {
      ++v5; /*0x6b61dc*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x6b61f0*/
  if ( (this & 1) != 0 ) /*0x6b61fa*/
    OperatorDelete(this); /*0x6b61fd*/
  return (SmudgeTypeClass *)this; /*0x6b6207*/

}
// 0x6B5550
bool SmudgeTypeClass::GetType(short * a2, int a3)
{

  void **v4; // eax
  int v5; // edx
  bool result; // al
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (void **)RA2_OPNEW(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( UnitClass::Create(v4, this, (AbstractClass *)v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/

}
// 0x6B55C0
SmudgeClass * SmudgeTypeClass::GetFlag(int a2)
{

  void **v3; // eax

  v3 = (void **)RA2_OPNEW(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
    return UnitClass::Create(v3, this, (AbstractClass *)&stru_B05488.__pad_579C[2948], -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/

}
// 0x6B57F0
int SmudgeTypeClass::PowerDrainUpdate(int * a2)
{

  int v3; // ecx
  int v4; // edx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6b57f9*/
  Power::TimerProcess(*((unsigned int *)this + 165)); /*0x6b5807*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 672); /*0x6b580c*/
  Power::FlagProcess(a2, v3); /*0x6b5815*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 673); /*0x6b581a*/
  Power::FlagProcess(a2, v4); /*0x6b5823*/
  Power::TimerProcess(*((unsigned int *)this + 166)); /*0x6b5831*/
  return Power::TimerProcess(*((unsigned int *)this + 167)); /*0x6b5844*/

}
// 0x6B5850
int  SmudgeTypeClass::LoadTypeData(ObjectTypeClass * aP0, int aP1)
{

  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP0); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( aP0 ) /*0x6b5866*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP0); /*0x6b586f*/
      *(unsigned int *)aP0->__pad_0 = &vt_SmudgeTypeClass; /*0x6b5874*/
      *(unsigned int *)&aP0->__pad_0[4] = &vt_SmudgeTypeClass; /*0x6b587a*/
      *(unsigned int *)&aP0->__pad_0[8] = &vt_SmudgeTypeClass; /*0x6b5881*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_SmudgeTypeClass; /*0x6b5888*/
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x6b5891*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/

}
// 0x6B58B0
int SmudgeTypeClass::SaveToINI(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/

}
// 0x6B58D0
int SmudgeTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = -1252326136; /*0x6b5900*/
  return 0; /*0x6b58dd*/

}
// 0x6B6130
int SmudgeTypeClass::GetTypeIdentifier()
{

  return 30; /*0x6b6135*/

}
// 0x6B6140
int SmudgeTypeClass::GetObjectSize()
{

  return 676; /*0x6b6145*/

}
// 0x6B6150
int SmudgeTypeClass::GetAuxField()
{

  return *((unsigned int *)this + 165); /*0x6b6156*/

}