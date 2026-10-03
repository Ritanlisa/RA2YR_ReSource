// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseClass_24_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Function_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CounterClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BaseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TriggerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/HouseTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/DynamicVector_e4.hpp"  // G42.36 C2027 supply

// 0x43B5E0
namespace gamemd {
void ** HouseClass::PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3)
{

  void *v6; // edi
  int *v7; // eax
  AnimClass *v8; // eax
  void **v9; // esi
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  unsigned char v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (void *)*((unsigned int *)dword_8B4154 + ((AnimTypeClass *)(a3))->FindIndex()); /*0x43b5fb*/
  v7 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v12); /*0x43b605*/
  v11[0] = *v7; /*0x43b60a*/
  v11[1] = v7[1]; /*0x43b616*/
  v11[2] = v7[2]; /*0x43b61d*/
  v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x43b621*/
  if ( v8 ) /*0x43b62b*/
    v9 = ((AnimClass *)(v8))->ctor(v6, v11, 0, 1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  BuildingClass::SetField95((BuildingClass *)v9, arg0); /*0x43b654*/
  ((Function *)((Function *)v9))->Method_424CA0((int)(aP0)); /*0x43b65c*/
  *((unsigned char *)v9 + 413) = 1; /*0x43b661*/
  return v9; /*0x43b66a*/

}
}
// 0x459840
namespace gamemd {
int HouseClass::GetRepairStepAmount()
{

  unsigned int *v1; // edx
  int result; // eax

  v1 = (unsigned int *)this->builtInfantryTypes[126]; /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return this->builtInfantryTypes[243]; /*0x459864*/
    }
  }
  return result; /*0x45986a*/

}
}
// 0x4ADEE0
namespace gamemd {
int HouseClass::ResetObjectOrders(char a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4ADEE0)
}
}
// 0x4ADFF0
namespace gamemd {
int HouseClass::RevealShroudForAllies(char a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4ADFF0)
}
}
// 0x4F54A0
namespace gamemd {
int HouseClass::Construct(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F54A0)
}

// 0x4F9A50
namespace gamemd {
int HouseClass::IsAlliedWith()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F9A50)
}
}
// 0x4FBE40
namespace gamemd {
int HouseClass::IsCellOccupied(IUnknown * aP1, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FBE40)
}
}
// 0x4FC790
namespace gamemd {
int HouseClass::DestroyAllBuildings()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FC790)
}
}
// 0x4FC820
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNonNaval()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FC820)
}
}
// 0x4FC8D0
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNaval()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4FC8D0)
}
}
// 0x501540
namespace gamemd {
int HouseClass::CanAlly(HouseClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x501540)
}
}
// 0x501640
namespace gamemd {
int HouseClass::CanDetect()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x501640)
}
}
// 0x503040
namespace gamemd {
AbstractClass * * HouseClass::SaveLoad_Prefix(int a1, LPSTREAM pStm)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x503040)
}

} // namespace gamemd

// 0x505360
namespace gamemd {
int HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x505360)
}
}
// 0x506EF0
namespace gamemd {
AbstractClass * * HouseClass::AutoBuildScanAndSort(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x506EF0)
}

// 0x508C30
namespace gamemd {
int HouseClass::UpdatePower(double a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x508C30)
}
}
// 0x508DF0
namespace gamemd {
void * HouseClass::CanTogglePower()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x508DF0)
}
}
// 0x5098F0
namespace gamemd {
CellStruct * * HouseClass::UpdateAITryFireSW(void *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5098F0)
}
}
// 0x50BC90
namespace gamemd {
int HouseClass::CreatePowerOutage(int a2)
{

  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = dword_A8ED84; /*0x50bc90*/
  *((unsigned char *)this + 22392) = 1; /*0x50bc9c*/
  *((unsigned int *)this + 169) = v2; /*0x50bcaa*/
  *((unsigned int *)this + 170) = v4; /*0x50bcb4*/
  *((unsigned int *)this + 171) = a2; /*0x50bcb7*/
  return v4; /*0x50bcba*/

}
}
// 0x50BCD0
namespace gamemd {
int HouseClass::CreateRadarOutage(int a2)
{

  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = dword_A8ED84; /*0x50bcd0*/
  *((unsigned char *)this + 22393) = 1; /*0x50bcdc*/
  *((unsigned int *)this + 172) = v2; /*0x50bcea*/
  *((unsigned int *)this + 173) = v4; /*0x50bcf4*/
  *((unsigned int *)this + 174) = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/

}
}
// 0x50D320
namespace gamemd {
void HouseClass_RespawnStartingBuildings()
{
  int v4; // ecx
  int result; // eax
  int16_t *v7; // edi
  int v8; // esi
  int16_t *v9; // ebx
  Cell *v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // esi
  void *v16; // eax
  unsigned int *v17; // eax
  int v22[3]; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v23[4]; // [esp+20h] [ebp-10h] BYREF
  void *retaddr; // [esp+30h] [ebp+0h] BYREF

  v4 = v4; /*0x50d324*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d32c*/
  for ( result = result; result >= 0; --result )
  {
    v7 = *(int16_t **)(*(unsigned int *)(v4 + 368) + 4 * result); /*0x50d340*/
    v8 = *(unsigned int *)v7; /*0x50d343*/
    if ( (*(int (**)(unsigned int))(**(unsigned int **)v7 + 44))(*(unsigned int *)v7) == 7 )
    {
      v9 = v7 + 2; /*0x50d355*/
      v10 = (Cell *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v7 + 2); /*0x50d35e*/
      v11 = ((Cell *)(v10))->IsBridge(); /*0x50d365*/
      if ( v11 && (v12 = v11[328], v12 == v8) && v11[135] == v4 )
      {
        v13 = *v11; /*0x50d386*/
        v22[0] = -*(unsigned int *)(v12 + 160); /*0x50d38a*/
        (*(void (**)(int *, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(v13 + 364))( /*0x50d3ac*/
          v11,
          v22,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          0,
          0,
          0);
      }
      else
      {
        v14 = (*(int (**)(int, int, unsigned int *, int, void **))(*(unsigned int *)v8 + 140))(v8, v4, v23, a4, a2); /*0x50d3bf*/
        if ( v14 )
          v15 = (*(int (**)(int))(v14->q02C)(v14) == 6 ? v14 : 0;
        else
          v15 = 0; /*0x50d3c5*/
        v16 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v9); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v17 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)v16 + 72))(v16); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v23[0] = *v17; /*0x50d3f8*/
        v23[1] = v17[1]; /*0x50d3ff*/
        v23 = v23; /*0x50d40a*/
        v23[2] = v17[2]; /*0x50d40b*/
        if ( !(*(uint8_t (**)(int))(*(unsigned int *)v15 + 1168))(v15) ) /*0x50d413*/
          (*(void (**)(int))(*(unsigned int *)v15 + 248))(v15); /*0x50d421*/
      }
    }
    result = result - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}
}
// 0x50D440
namespace gamemd {
int HouseClass::RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4)
{

  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // edi
  int16_t *v8; // ebp
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  unsigned int *v12; // eax
  int v16; // [esp+10h] [ebp-1Ch]
  unsigned int v17[4]; // [esp+1Ch] [ebp-10h] BYREF
  void *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  v5 = v4; /*0x50d444*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d44c*/
  v16 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v7 = 0; /*0x50d466*/
      v8 = *(int16_t **)(*(unsigned int *)(v5 + 368) + 4 * result); /*0x50d468*/
      v9 = *(unsigned int *)v8; /*0x50d46b*/
      switch ( (*(int (**)(unsigned int, unsigned int *, int, void **))(**(unsigned int **)v8 + 44))(
                 *(unsigned int *)v8,
                 a3,
                 a4,
                 a2) )
      {
        case 3:
        case 7:
        case 40:
          v10 = (*(int (**)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d491*/
          if ( v10 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v7 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v10 = (*(int (**)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d4a4*/
          if ( v10 )
LABEL_9:
            v7 = (*(unsigned char *)(v10 + 20) & 1) != 0 ? v10 : 0;
          else
            v7 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v11 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(v8 + 2); /*0x50d4c0*/
      a2 = &retaddr; /*0x50d4d4*/
      v12 = (unsigned int *)(*(int (**)(void *))(*(unsigned int *)v11 + 72))(v11); /*0x50d4d7*/
      a4 = 0; /*0x50d4dc*/
      v17[0] = *v12; /*0x50d4de*/
      v17[1] = v12[1]; /*0x50d4e5*/
      a3 = v17; /*0x50d4f0*/
      v17[2] = v12[2]; /*0x50d4f1*/
      if ( !(*(uint8_t (**)(int))(*(unsigned int *)v7 + 1168))(v7) ) /*0x50d4f9*/
        (*(void (**)(int))(*(unsigned int *)v7 + 248))(v7); /*0x50d507*/
      result = --v16; /*0x50d511*/
      if ( v16 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v16; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/

}
}
// 0x50D9E0
namespace gamemd {
int HouseClass::GetInfSelfHealStep()
{

  return *(unsigned int *)&this->__pad_13C[40] * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 52); /*0x50d9ef*/

}
}
// 0x50D9F0
namespace gamemd {
int HouseClass::GetUnitSelfHealStep()
{

  return *(unsigned int *)&this->__pad_13C[44] * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 60); /*0x50d9ff*/

}
}
// 0x50E0E0
namespace gamemd {
void HouseClass::LostPoweredCenter(int a2, void *a2_2)
{

  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // esi

  v3 = *((unsigned int *)this + 182) - 1; /*0x50e0eb*/
  *((unsigned int *)this + 182) = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = dword_A8EC88 - 1; /*0x50e10b*/
      if ( dword_A8EC88 - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((unsigned int *)dword_A8EC7C + v5); /*0x50e11d*/
          if ( *(unsigned int *)(v6 + 540) == this /*0x50e138*/
            && (*(int (**)(unsigned int))(*(unsigned int *)v6 + 132))(*((unsigned int *)dword_A8EC7C + v5)) == a2
            && !*(unsigned char *)(v6 + 129) )
          {
            TechnoClass::Deactivate((unsigned int *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && byte_A8E9A0 ) /*0x50e15a*/
        {
          if ( dword_A8B238[0] ) /*0x50e163*/
          {
            if ( (void *)this != dword_A83D4C ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( *((unsigned char *)this + 492) || *((unsigned char *)this + 493) ) /*0x50e16f*/
          {
LABEL_16:
            if ( !dword_A8E7AC ) /*0x50e18f*/
              ((VoxClass *)(g_Str_EVA_RobotTanksOffline))->FindAndPlay(-1); /*0x50e19b*/
          }
        }
      }
    }
  }

}
}
// 0x5471B0
namespace gamemd {
int HouseClass::GetCameoTypeIndex(int a2)
{

  unsigned int *v2; // eax
  int v3; // ecx

  v2 = (unsigned int *)(*((int (**)(HouseClass *))this->vtable1 + 39))(this); /*0x5471b2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x5471d3*/
    return *(char *)(v3 + 42); /*0x5471d5*/
  else
    return 0; /*0x5471dc*/

}
}
// 0x5D70F0
namespace gamemd {
AbstractClass * * HouseClass::AIDecision(ObjectClass * aP0, int * a1)
{

  int v2; // ebp
  int InfantryTypeVector_field_0x14; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  unsigned int *v10; // ecx
  int v11; // eax
  int v12; // edi
  int InfantryTypeVector_field_0x08; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  int InfantryTypeVector_field_0x1C; // edx
  int v22; // esi
  void **v23; // eax
  int *v24; // edi
  int16_t *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  InfantryTypeVector v30; // [esp+18h] [ebp-30h] BYREF
  int v31; // [esp+38h] [ebp-10h]
  char v32; // [esp+3Dh] [ebp-Bh]
  int v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a1 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a1; /*0x5d710d*/
  UnitTypeVector::Construct2((UnitTypeVector *)&v30.InfantryTypeVector_field_0x18, 0, 0); /*0x5d7111*/
  v30.InfantryTypeVector_field_0x18 = (int)&vt_DynamicVectorClass; /*0x5d711c*/
  v34 = 10; /*0x5d7124*/
  v33 = 0; /*0x5d712c*/
  InfantryTypeVector::ConstructFromData(&v30, 0, 0); /*0x5d7130*/
  InfantryTypeVector_field_0x14 = 10; /*0x5d7139*/
  *(unsigned int *)v30.__pad_0 = &vt_DynamicVectorClass; /*0x5d713e*/
  v30.InfantryTypeVector_field_0x14 = 10; /*0x5d7146*/
  v4 = *((unsigned int *)aP0 + 13); /*0x5d714a*/
  v30.InfantryTypeVector_field_0x10 = 0; /*0x5d714d*/
  v5 = 1 << *(unsigned int *)(v4 + 180); /*0x5d7161*/
  if ( dword_A83CF0 <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = v31; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *((unsigned int *)dword_A83CE4 + v2); /*0x5d7175*/
    if ( *(unsigned char *)(v7 + 1749) /*0x5d719e*/
      && (v5 & *(unsigned int *)(v7 + 1740)) != 0
      && *(unsigned int *)(v7 + 1588) <= *((unsigned int *)aP0 + 117) )
    {
      v8 = 0; /*0x5d71a6*/
      v9 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2864); /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
LABEL_11:
        if ( v33 < v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v32 || !v6) && v34 > 0 ) /*0x5d71dc*/
        {
          if ( (*(uint8_t (**)(int *, int, unsigned int))(v30.InfantryTypeVector_field_0x18 + 8))( /*0x5d71eb*/
                 &v30.InfantryTypeVector_field_0x18,
                 v34 + v6,
                 0) )
          {
LABEL_16:
            v11 = v33++; /*0x5d71f2*/
            *(unsigned int *)(v30.InfantryTypeVector_field_0x1C + 4 * v11) = v7; /*0x5d7201*/
          }
          v6 = v31; /*0x5d7204*/
        }
      }
      else
      {
        v10 = *(unsigned int **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2852); /*0x5d71b2*/
        while ( *v10 != v7 ) /*0x5d71ba*/
        {
          ++v8; /*0x5d71bc*/
          ++v10; /*0x5d71bd*/
          if ( v8 >= v9 ) /*0x5d71c2*/
            goto LABEL_11; /*0x5d71c2*/
        }
      }
    }
    ++v2; /*0x5d7208*/
  }
  while ( v2 < dword_A83CF0 ); /*0x5d7210*/
  InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d7216*/
LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( dword_A8E358 > 0 ) /*0x5d7223*/
  {
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *((unsigned int *)dword_A8E34C + v12); /*0x5d7239*/
      if ( *(unsigned char *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(unsigned int *)(v14 + 1740)) != 0
        && *(unsigned int *)(v14 + 1588) <= *((unsigned int *)aP0 + 117) )
      {
        if ( v30.InfantryTypeVector_field_0x10 < InfantryTypeVector_field_0x08 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (BYTE1(v30.InfantryTypeVector_field_0x0C) || !InfantryTypeVector_field_0x08) /*0x5d7274*/
          && InfantryTypeVector_field_0x14 > 0 )
        {
          break; /*0x5d7274*/
        }
      }
LABEL_33:
      if ( ++v12 >= dword_A8E358 ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      InfantryTypeVector_field_0x14 = v30.InfantryTypeVector_field_0x14; /*0x5d722f*/
    }
    if ( (*(uint8_t (**)(InfantryTypeVector *, int, unsigned int))(*(unsigned int *)v30.__pad_0 + 8))( /*0x5d7283*/
           &v30,
           InfantryTypeVector_field_0x14 + InfantryTypeVector_field_0x08,
           0) )
    {
LABEL_31:
      v15 = v30.InfantryTypeVector_field_0x10++; /*0x5d728a*/
      *(unsigned int *)(v30.InfantryTypeVector_field_0x04 + 4 * v15) = v14; /*0x5d7299*/
    }
    InfantryTypeVector_field_0x08 = v30.InfantryTypeVector_field_0x08; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
LABEL_34:
  v16 = v33; /*0x5d72ab*/
  if ( v33 || v30.InfantryTypeVector_field_0x10 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a1; /*0x5d731f*/
    if ( *a1 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v16 - 1); /*0x5d735f*/
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x1C; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v30.InfantryTypeVector_field_0x10 - 1); /*0x5d737e*/
          InfantryTypeVector_field_0x1C = v30.InfantryTypeVector_field_0x04; /*0x5d7383*/
        }
        v22 = *(unsigned int *)(InfantryTypeVector_field_0x1C + 4 * v20); /*0x5d7387*/
        v23 = (void **)(*(int (**)(int, MultiplayerGameMode *))(*(unsigned int *)v22 + 140))(v22, aP0); /*0x5d7393*/
        v24 = (int *)__RTDynamicCast( /*0x5d73b4*/
                       v23,
                       0,
                       0,
                       0,
                       0);
        CurrentOption = (int16_t *)HouseClass::GetCurrentOption((HouseClass *)aP0, &v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition(v24, CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (**)(int))(*(unsigned int *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a1; /*0x5d73eb*/
          *a1 -= v27; /*0x5d73f3*/
          if ( ((int)dword_A8B230->vtable1 & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag((Timer *)(v24 + 84), 1); /*0x5d740a*/
          if ( (uint8_t)((House *)((House *)aP0))->IsCurrentPlayer() ) /*0x5d7411*/
            (*(void (**)(int *, int))(*v24 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (**)(int *, int))(*v24 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (**)(int *, int))(*v24 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a1; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v33; /*0x5d732b*/
      }
    }
    *(unsigned int *)v30.__pad_0 = &vt_VectorClass; /*0x5d7446*/
    if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d7456*/
    {
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d7459*/
      v30.InfantryTypeVector_field_0x04 = 0; /*0x5d7461*/
    }
    BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d7469*/
    v30.InfantryTypeVector_field_0x08 = 0; /*0x5d7470*/
    v30.InfantryTypeVector_field_0x18 = (int)&vt_VectorClass; /*0x5d7474*/
    if ( v30.InfantryTypeVector_field_0x1C && v32 ) /*0x5d7484*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  *(unsigned int *)v30.__pad_0 = &vt_VectorClass; /*0x5d72bf*/
  if ( v30.InfantryTypeVector_field_0x04 && BYTE1(v30.InfantryTypeVector_field_0x0C) ) /*0x5d72d1*/
  {
    __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x04); /*0x5d72d4*/
    v30.InfantryTypeVector_field_0x04 = 0; /*0x5d72dc*/
  }
  BYTE1(v30.InfantryTypeVector_field_0x0C) = 0; /*0x5d72e4*/
  v30.InfantryTypeVector_field_0x08 = 0; /*0x5d72eb*/
  v30.InfantryTypeVector_field_0x18 = (int)&vt_VectorClass; /*0x5d72ef*/
  if ( v30.InfantryTypeVector_field_0x1C ) /*0x5d72f7*/
  {
    if ( v32 ) /*0x5d72ff*/
      __3_YAXPAX_Z((void *)v30.InfantryTypeVector_field_0x1C); /*0x5d7302*/
  }
  return 0; /*0x5d730a*/

}
}
// 0x5D74A0
namespace gamemd {
int HouseClass::InitAlliances()
{

  int nextArrayIndex; // edx
  unsigned int *vtable3; // eax
  int v3; // edi
  int v4; // ebp
  int *v5; // ebx
  int v6; // ecx
  int *v7; // esi
  int v9; // [esp+0h] [ebp-4h]

  nextArrayIndex = ((char *)&stru_A80220); /*0x5d74a1*/
  if ( ((char *)&stru_A80220) <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  vtable3 = ((char *)&stru_A80220); /*0x5d74af*/
  v3 = 1; /*0x5d74b8*/
  v4 = 0; /*0x5d74bd*/
  v9 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v5 = (int *)vtable3[v4]; /*0x5d74c3*/
    if ( !*(unsigned char *)(v5[13] + 422) ) /*0x5d74c9*/
    {
      v6 = v5[22551]; /*0x5d74d4*/
      if ( v6 != -2 && v6 != -1 && v3 < nextArrayIndex ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v7 = (int *)vtable3[v3]; /*0x5d74e8*/
          if ( !*(unsigned char *)(v7[13] + 422) && *(unsigned int *)(vtable3[v4] + 90204) == v7[22551] ) /*0x5d7509*/
          {
            ((HouseClass *)(v5))->HandleAlliance((int)v7, 0); /*0x5d7510*/
            ((HouseClass *)(v7))->HandleAlliance((int)v5, 0); /*0x5d751a*/
            vtable3 = ((char *)&stru_A80220); /*0x5d751f*/
          }
          nextArrayIndex = ((char *)&stru_A80220); /*0x5d7524*/
          ++v3; /*0x5d752a*/
        }
        while ( v3 < ((char *)&stru_A80220) ); /*0x5d752d*/
        v3 = v9; /*0x5d752f*/
      }
    }
    ++v3; /*0x5d7533*/
    ++v4; /*0x5d7534*/
    v9 = v3; /*0x5d7537*/
  }
  while ( v3 - 1 < nextArrayIndex ); /*0x5d7540*/
  return 1; /*0x5d7549*/

}
}
// 0x5EE9D0
namespace gamemd {
AbstractClass * * HouseClass::FindStartPositions(void *a1)
{

  int v1; // eax
  int *p_uniqueId; // ecx
  int nextArrayIndex; // eax
  int i; // edi
  HouseClass *v5; // esi
  char v6; // bl
  int v7; // edx
  int v8; // eax
  int *v9; // ecx
  int *started; // eax
  int v11; // edi
  HouseClass *v12; // esi
  int *v13; // eax
  int v14; // [esp+0h] [ebp-34h] BYREF
  int v15; // [esp+4h] [ebp-30h] BYREF
  int v16; // [esp+8h] [ebp-2Ch] BYREF
  Multiplayer v17[16]; // [esp+Ch] [ebp-28h] BYREF
  Multiplayer v18[4]; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v20; // [esp+29h] [ebp-Bh]

  ((Multiplayer *)(v18))->FindStartPositions(); /*0x5ee9d9*/
  v1 = 0; /*0x5ee9e4*/
  p_uniqueId = &dword_A8B230[124].uniqueId; /*0x5ee9e6*/
  do /*0x5eea04*/
    v17[v1++] = (Multiplayer)(*p_uniqueId++ != -1); /*0x5ee9f1*/
  while ( v1 < 16 ); /*0x5eea04*/
  nextArrayIndex = ((char *)&stru_A80220); /*0x5eea06*/
  for ( i = 0; i < ((char *)&stru_A80220); ++i ) /*0x5eea11*/
  {
    v5 = (HouseClass *)*((unsigned int *)((char *)&stru_A80220) + i); /*0x5eea1f*/
    if ( !*(unsigned char *)(v5->relatedTagsCapacity + 422) && v5->currentPlayer ) /*0x5eea33*/
    {
      v6 = 0; /*0x5eea47*/
      v7 = -1; /*0x5eea49*/
      v8 = 0; /*0x5eea4c*/
      v9 = &dword_A8B230[124].uniqueId; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v9 == i ) /*0x5eea56*/
        {
          v6 = 1; /*0x5eea58*/
          v7 = v8; /*0x5eea5a*/
        }
        ++v8; /*0x5eea5c*/
        ++v9; /*0x5eea5d*/
      }
      while ( v8 < 16 ); /*0x5eea63*/
      if ( v6 ) /*0x5eea67*/
      {
        ((HouseClass *)(v5))->SetMapSeed(*((unsigned int *)Block + v7)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v14, i, (int)v18, (int)v17, 1); /*0x5eea8d*/
        ((HouseClass *)(v5))->SetMapSeed(*started); /*0x5eea97*/
        HouseClass::GetCurrentOption(v5, &v15); /*0x5eeaa3*/
        HouseClass::GetCurrentOption(v5, &v16); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    nextArrayIndex = ((char *)&stru_A80220); /*0x5eeadb*/
  }
  v11 = 0; /*0x5eeaeb*/
  if ( nextArrayIndex > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v12 = (HouseClass *)*((unsigned int *)((char *)&stru_A80220) + v11); /*0x5eeafb*/
      if ( !*(unsigned char *)(v12->relatedTagsCapacity + 422) && !v12->currentPlayer ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v13 = AssignRandomMapStartPositions(&v16, v11, (int)v18, (int)v17, 0); /*0x5eeb39*/
        ((HouseClass *)(v12))->SetMapSeed(*v13); /*0x5eeb43*/
        HouseClass::GetCurrentOption(v12, &v15); /*0x5eeb4f*/
        HouseClass::GetCurrentOption(v12, &v14); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v11; /*0x5eeb7b*/
    }
    while ( v11 < ((char *)&stru_A80220) ); /*0x5eeb7e*/
  }
  *(unsigned int *)v18 = &vt_VectorClass; /*0x5eeb8b*/
  if ( Block ) /*0x5eeb94*/
  {
    if ( v20 ) /*0x5eeb9c*/
      __3_YAXPAX_Z(Block); /*0x5eeb9f*/
  }

}
}
// 0x740DF0
namespace gamemd {
int HouseClass::SetPrimaryFactory(int a2)
{

  if ( a2 == -1 || this->builtInfantryTypes[233] != -1 ) /*0x740e00*/
    return 0; /*0x740e17*/
  this->builtInfantryTypes[233] = a2; /*0x740e02*/
  (*((void (**)(HouseClass *, int))this->vtable1 + 73))(this, 2); /*0x740e0c*/
  return 1; /*0x740e14*/

}
}
// 0x429210
namespace gamemd {
int HouseClass::QueryInterface_Helper()
{

  const void **v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(a3, &unk_7F7CA0, 0x10u) && memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = a2; /*0x42925c*/
  (*(void (**)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x429261*/
  return 0; /*0x42921a*/

}
} // namespace gamemd

// 0x429270
namespace gamemd {
int HouseClass::QueryInterface_Dispatch()
{

  unsigned int *v4; // eax
  int v6; // ebx
  unsigned int *v7; // [esp+20h] [ebp+10h]

  v4 = v7; /*0x429270*/
  if ( !v7 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *v7 = 0; /*0x42928c*/
  if ( a3 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v6 = -2147467262; /*0x4292b4*/
  if ( !memcmp(a4, &unk_7E36C0, 0x10u) || !memcmp(a4, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&punk ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v6 = (*(int (**)(IUnknown *, void **, unsigned int *))punk.field_0)(&punk, a4, v7); /*0x4292f3*/
    if ( v6 < 0 ) /*0x4292f7*/
      __3_YAXPAX_Z(&punk); /*0x4292fe*/
    v4 = v7; /*0x429306*/
  }
  if ( !memcmp(a4, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&dword_87F7E8 ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v6 = (*(int (**)(IUnknown *, void **, unsigned int *))dword_87F7E8.field_0)(&dword_87F7E8, a4, v4); /*0x429340*/
    if ( v6 < 0 ) /*0x429344*/
      __3_YAXPAX_Z(&dword_87F7E8); /*0x42934b*/
  }
  return v6; /*0x42927c*/

}
} // namespace gamemd

// 0x42F380
namespace gamemd {
int HouseClass::FailedToPlaceNode(int a1)
{

  int result; // eax
  int v2; // ecx

  result = a1; /*0x42f380*/
  if ( a1 ) /*0x42f386*/
  {
    v2 = *(unsigned int *)(a1 + 12) + 1; /*0x42f38e*/
    *(unsigned int *)(a1 + 12) = v2; /*0x42f38f*/
    return v2; /*0x42f392*/
  }
  return result; /*0x42f388*/

}
} // namespace gamemd

// 0x4E8240
namespace gamemd {
int HouseClass::vt_placeholder_00()
{

  return 1; /*0x4e8245*/

}
} // namespace gamemd

// 0x4E8250
namespace gamemd {
int HouseClass::vt_placeholder_01()
{

  return 1; /*0x4e8255*/

}
} // namespace gamemd

// 0x4E8260
namespace gamemd {
int HouseClass::vt_placeholder_02()
{

  return 0; /*0x4e8262*/

}
} // namespace gamemd

// 0x4E8270
namespace gamemd {
std::locale::facet * HouseClass::initAngerStruct(char a2)
{

  this->vtable1 = &vt_VersionClass; /*0x4e8279*/
  if ( (a2 & 1) != 0 ) /*0x4e827f*/
    __3_YAXPAX_Z(this); /*0x4e8282*/
  return (std::locale::facet *)this; /*0x4e828c*/

}
} // namespace gamemd

// 0x4F28A0
namespace gamemd {
int HouseClass_24::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4f28aa*/

}
} // namespace gamemd

// 0x4F28C0
namespace gamemd {
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{

  *(unsigned int *)this = &vt_VectorCursorGraphicMenuItemDynamicVectorClass; /*0x4f28c9*/
  if ( (a2 & 1) != 0 ) /*0x4f28cf*/
    __3_YAXPAX_Z(this); /*0x4f28d2*/
  return this; /*0x4f28dc*/

}
} // namespace gamemd

// 0x4F28E0
namespace gamemd {
char HouseClass_24::AddRef(int a2)
{

  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4f28e2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4f28ed*/
  {
    v3 = 0; /*0x4f28ef*/
    if ( m_8 <= 0 ) /*0x4f28f3*/
      return 1; /*0x4f2913*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x4f28f5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4f28fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4f2904*/
    {
      ++v3; /*0x4f2906*/
      ++v4; /*0x4f2907*/
      if ( v3 >= m_8 ) /*0x4f290c*/
        return 1; /*0x4f290c*/
    }
  }
  return 0; /*0x4f290e*/

}
} // namespace gamemd

// 0x4F2920
namespace gamemd {
char HouseClass_24::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4f292c*/
  {
    LOBYTE(this->m_C) = 0; /*0x4f2936*/
    if ( a3 ) /*0x4f293c*/
      v4 = a3; /*0x4f2952*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x4f294e*/
    LOBYTE(this->m_C) = 1; /*0x4f2956*/
    if ( v4 ) /*0x4f295a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x4f2965*/
      {
        m_8 = this->m_8; /*0x4f296c*/
        if ( a2 < m_8 ) /*0x4f2971*/
          m_8 = a2; /*0x4f2973*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4f2979*/
          ++i; /*0x4f297e*/
        if ( BYTE1(this->m_C) ) /*0x4f298b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4f2996*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x4f299e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x4f29a7*/
      this->m_8 = a2; /*0x4f29af*/
      BYTE1(this->m_C) = a3 == 0; /*0x4f29b2*/
      return 1; /*0x4f29b8*/
    }
    else
    {
      return 0; /*0x4f295f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4f29c2*/
    return 1; /*0x4f29c8*/
  }

}
} // namespace gamemd

// 0x4F29D0
namespace gamemd {
void HouseClass_24::ddtor()
{

  if ( *(unsigned int *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x4f29dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x4f29e3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4f29eb*/
  }
  BYTE1(this->m_C) = 0; /*0x4f29ee*/
  this->m_8 = 0; /*0x4f29f1*/

}
} // namespace gamemd

// 0x4F2A00
namespace gamemd {
int HouseClass_24::Read(unsigned int * a2, void *a2_2)
{

  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x4f2a00*/
    return 0; /*0x4f2a08*/
  m_8 = this->m_8; /*0x4f2a0e*/
  result = 0; /*0x4f2a11*/
  if ( m_8 <= 0 ) /*0x4f2a15*/
    return -1; /*0x4f2a2c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4f2a1b*/
  {
    if ( ++result >= m_8 ) /*0x4f2a2a*/
      return -1; /*0x4f2a2a*/
  }
  return result; /*0x4f2a0a*/

}
} // namespace gamemd

// 0x4F2A40
namespace gamemd {
unsigned int HouseClass_24::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x4f2a40*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4f2a55*/
  else
    return 0; /*0x4f2a47*/

}
} // namespace gamemd

// 0x4F2B40
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_09()
{

  ++*((unsigned int *)this + 2); /*0x4f2b42*/
  return this; /*0x4f2b45*/

}
} // namespace gamemd

// 0x4F2B50
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_10()
{

  --*((unsigned int *)this + 2); /*0x4f2b52*/
  return this; /*0x4f2b55*/

}
} // namespace gamemd

// 0x4F2B60
namespace gamemd {
VectorClass_flat * HouseClass_24::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x4f2b63*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x4f2b66*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x4f2b70*/
  {
    __3_YAXPAX_Z(v3); /*0x4f2b78*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x4f2b80*/
  }
  BYTE1(Block->m_C) = 0; /*0x4f2b8b*/
  Block->m_8 = 0; /*0x4f2b91*/
  if ( (a2 & 1) != 0 ) /*0x4f2b98*/
    __3_YAXPAX_Z(Block); /*0x4f2b9b*/
  return Block->__pad_0; /*0x4f2ba5*/

}
} // namespace gamemd

// 0x4F6830
namespace gamemd {
int HouseClass::QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2)
{

  int *p_arrayIndex; // ecx
  HouseTypeClass **p_buildingType; // ecx
  int *relatedTags; // ecx

  if ( !a2 ) /*0x4f6836*/
    return -2147467261; /*0x4f6838*/
  *a2 = 0; /*0x4f6859*/
  if ( !memcmp(a1, &IID_IUnknown, 0x10u) ) /*0x4f685f*/
    *a2 = aP0; /*0x4f6863*/
  if ( !memcmp(a1, &IID_IHouse, 0x10u) ) /*0x4f6874*/
  {
    if ( aP0 ) /*0x4f687a*/
      p_arrayIndex = &aP0->arrayIndex; /*0x4f687c*/
    else
      p_arrayIndex = 0; /*0x4f6881*/
    *a2 = p_arrayIndex; /*0x4f6883*/
  }
  if ( !memcmp(a1, &IID_IPublicHouse, 0x10u) ) /*0x4f6893*/
  {
    if ( aP0 ) /*0x4f6899*/
      p_buildingType = &aP0->buildingType; /*0x4f689b*/
    else
      p_buildingType = 0; /*0x4f68a0*/
    *a2 = p_buildingType; /*0x4f68a2*/
  }
  if ( !memcmp(a1, &unk_7F7CD0, 0x10u) ) /*0x4f68b2*/
  {
    if ( aP0 ) /*0x4f68b8*/
      relatedTags = aP0->relatedTags; /*0x4f68ba*/
    else
      relatedTags = 0; /*0x4f68bf*/
    *a2 = relatedTags; /*0x4f68c1*/
  }
  if ( !memcmp(a1, &IID_IPersist, 0x10u) ) /*0x4f68d1*/
    *a2 = aP0; /*0x4f68d6*/
  if ( !memcmp(a1, &IID_IPersistStream, 0x10u) ) /*0x4f68e6*/
    *a2 = aP0; /*0x4f68ed*/
  if ( !*a2 ) /*0x4f68ef*/
    return -2147467262; /*0x4f68f4*/
  (*((void (**)(HouseClass *))aP0->vtable1 + 1))(aP0); /*0x4f68ff*/
  return 0; /*0x4f683d*/

}
} // namespace gamemd

// 0x4F9610
namespace gamemd {
double HouseClass::GiveTiberium_Storage(float aP1, int aP2)
{

  int v4; // eax
  int result; // eax

  LOWORD(v4) = Math::RoundToInt(aP1 * 5.0 + (double)this->siloMoney); /*0x4f9623*/
  this->siloMoney = v4; /*0x4f9628*/
  LOWORD(result) = Math::RoundToInt( /*0x4f9654*/
                     (double)*(int *)(*(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) + 4 * aP2) + 184)
                   * *(float *)(this->relatedTagsCapacity + 328)
                   * aP1
                   + (double)this->balance);
  this->balance = result; /*0x4f965d*/
  return result; /*0x4f9664*/

}
} // namespace gamemd

// 0x4F9970
namespace gamemd {
char HouseClass::UpdateAllSilos(int a2, int a3)
{

  int v3; // esi
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  int i; // esi
  int v9; // ecx

  v3 = 0; /*0x4f9976*/
  if ( a3 ) /*0x4f997d*/
    v3 = Math::RoundToInt((double)a2 / (double)a3 * 4.0 + 0.5); /*0x4f9998*/
  v5 = 0; /*0x4f99a0*/
  if ( *((unsigned int *)this + 196) ) /*0x4f999a*/
  {
    v6 = Float4::Sum((float *)((char *)this + 764)); /*0x4f99ac*/
    v5 = Math::RoundToInt(v6 / (double)*((int *)this + 196) * 4.0 + 0.5); /*0x4f99c3*/
  }
  if ( v3 != v5 ) /*0x4f99ca*/
  {
    v7 = *((unsigned int *)this + 30); /*0x4f99cc*/
    for ( i = 0; i < v7; ++i ) /*0x4f99d3*/
    {
      v5 = *((unsigned int *)this + 27); /*0x4f99d5*/
      v9 = *(unsigned int *)(v5 + 4 * i); /*0x4f99d8*/
      if ( v9 ) /*0x4f99dd*/
      {
        LOBYTE(v5) = *(unsigned char *)(v9 + 129); /*0x4f99df*/
        if ( !(unsigned char)v5 ) /*0x4f99e7*/
        {
          LOBYTE(v5) = *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5800); /*0x4f99ef*/
          if ( (unsigned char)v5 ) /*0x4f99f7*/
            LOBYTE(v5) = (*(int (**)(int, int))(*(unsigned int *)v9 + 292))(v9, 2); /*0x4f99fd*/
        }
      }
    }
  }
  return v5; /*0x4f9a08*/

}
} // namespace gamemd

// 0x4F9B50
namespace gamemd {
int HouseClass::MakeAlly(int a2, char a3)
{

  return ((HouseClass *)((int *)this))->HandleAlliance(*((unsigned int *)((char *)&stru_A80220) + a2), a3); /*0x4f9b67*/

}
} // namespace gamemd

// 0x4FB920
namespace gamemd {
unsigned int * HouseClass::SDDTORAllAndTriggers()
{

  int v1; // esi
  int v3; // eax
  HouseClass **v4; // ecx
  unsigned int *result; // eax
  int v6; // esi
  int v7; // ecx

  v1 = 0; /*0x4fb926*/
  if ( *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) > 0 ) /*0x4fb92d*/
  {
    v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152); /*0x4fb92f*/
    do /*0x4fb959*/
    {
      v4 = *(HouseClass ***)(v3 + 4 * v1); /*0x4fb934*/
      if ( v4[135] == this ) /*0x4fb93d*/
      {
        if ( v4 ) /*0x4fb941*/
        {
          ((void (*)(HouseClass **, int))(*v4))(v4, 1); /*0x4fb947*/
          v3 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 152); /*0x4fb94a*/
        }
        --v1; /*0x4fb94f*/
      }
      ++v1; /*0x4fb956*/
    }
    while ( v1 < *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 164) ); /*0x4fb959*/
  }
  result = (unsigned int *)dword_A8EAF8; /*0x4fb95b*/
  v6 = 0; /*0x4fb960*/
  if ( dword_A8EAF8 > 0 ) /*0x4fb964*/
  {
    result = dword_A8EAEC; /*0x4fb966*/
    do /*0x4fb99b*/
    {
      if ( *(unsigned int *)(*(unsigned int *)(result[v6] + 36) + 164) == this->relatedTagsCapacity ) /*0x4fb97c*/
      {
        v7 = result[v6]; /*0x4fb97e*/
        if ( v7 ) /*0x4fb983*/
        {
          (*(void (**)(int, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x4fb989*/
          result = dword_A8EAEC; /*0x4fb98c*/
        }
        --v6; /*0x4fb991*/
      }
      ++v6; /*0x4fb998*/
    }
    while ( v6 < dword_A8EAF8 ); /*0x4fb99b*/
  }
  if ( this ) /*0x4fb99f*/
    return (*((unsigned int *(**)(HouseClass *, int))this->vtable1 + 8))(this, 1); /*0x4fb9a7*/
  return result; /*0x4fb9aa*/

}
} // namespace gamemd

// 0x4FBF60
namespace gamemd {
char HouseClass::DroppedFlag(UnitClass * aP1, int a3)
{

  int16_t *v3; // edi
  int relatedTagsCapacity; // eax
  HouseClass *v6; // eax
  char v7; // bl
  HouseClass *v8; // eax
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  v3 = aP1; /*0x4fbf63*/
  if ( !(uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CoordinatesLegal(aP1) ) /*0x4fbf6f*/
    return 0; /*0x4fc055*/
  HouseClass::IsCellOccupied((int *)this, this->ourFlagCoords[0], a3); /*0x4fbf8b*/
  relatedTagsCapacity = this->relatedTagsCapacity; /*0x4fbf92*/
  aP1 = *(int16_t **)v3; /*0x4fbf95*/
  v10 = *(unsigned int *)(relatedTagsCapacity + 184); /*0x4fbfa3*/
  v6 = (HouseClass *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&aP1); /*0x4fbfaa*/
  v7 = HouseClass::MarkCellBuildable(v6, v10); /*0x4fbfb6*/
  if ( v7 /*0x4fc034*/
    || (a3 = 0,
        aP1 = (int16_t *)*LayerClass::Pathfinding_Find(
                           &stru_87F5F0.__pad_58[416],
                           0,
                           &v12,
                           v3,
                           1,
                           -1,
                           0,
                           0,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (int16_t *)&a3,
                           0,
                           0),
        aP1 != *(int16_t **)&(unsigned int *)((char *)&stru_A8EB00 + 948))
    && (v11 = *(unsigned int *)(this->relatedTagsCapacity + 184),
        v8 = (HouseClass *)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&aP1),
        (v7 = HouseClass::MarkCellBuildable(v8, v11)) != 0) )
  {
    this->ourFlagCoords[0] = (int)((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj((int16_t *)&aP1); /*0x4fc045*/
  }
  return v7; /*0x4fc04e*/

}
} // namespace gamemd

// 0x4FC060
namespace gamemd {
char HouseClass::PickedUpFlag(ObjectClass * aP1, char a3)
{

  if ( !aP1 || *(unsigned char *)(aP1 + 129) ) /*0x4fc06c*/
    return 0; /*0x4fc0a8*/
  HouseClass::IsCellOccupied((int *)this, this->ourFlagCoords[0], a3); /*0x4fc084*/
  HouseClass::SetPrimaryFactory((HouseClass *)aP1, *(unsigned int *)(this->relatedTagsCapacity + 184)); /*0x4fc095*/
  this->ourFlagCoords[0] = aP1; /*0x4fc09a*/
  return 1; /*0x4fc0a0*/

}
} // namespace gamemd

// 0x509130
namespace gamemd {
void HouseClass::AcquiredThreatNode()
{

  this->hasThreatNode = 1; /*0x509130*/

}
} // namespace gamemd

// 0x50BD10
namespace gamemd {
char HouseClass::ReshroudMap()
{

  char result; // al

  result = BYTE2(this->HouseClass_field_timer_B[2]); /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset((ShroudClass *)&stru_87F5F0.__pad_58[416], (int)this); /*0x50bd20*/
  return result; /*0x50bd25*/

}
} // namespace gamemd

// 0x50E1B0
namespace gamemd {
BOOL HouseClass::GainedPoweredCenter(int a2)
{

  return this->poweredUnitCenters > 0; /*0x50e1bd*/

}
} // namespace gamemd

// 0x50E340
namespace gamemd {
int HouseClass::COMStub_Ret1_1(int a1)
{

  return 1; /*0x50e345*/

}
} // namespace gamemd

// 0x50E350
namespace gamemd {
int HouseClass::COMStub_Ret1_2(int a1)
{

  return 1; /*0x50e355*/

}
} // namespace gamemd

// 0x53A130
namespace gamemd {
char HouseClass::IonSensitivesShouldBeOffline()
{

  return 0; /*0x53a132*/

}
} // namespace gamemd

// 0x54B980
namespace gamemd {
char HouseClass::Set(void *a1, void *a2, void *a3)
{

  unsigned int *v2; // eax
  unsigned int *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*((int (**)(void **))((unsigned int *)this)[0] + 4))(&((unsigned int *)this)[0]); /*0x54b98b*/
  if ( (unsigned char)v2 ) /*0x54b990*/
  {
    (*(void (**)(void *, unsigned int, int))(*(unsigned int *)((unsigned int *)this)[0] + 1348))(((unsigned int *)this)[0], 0, 1072693248); /*0x54b9a4*/
    Value = ((ProgressTimer *)((ProgressTimer *)((char *)((unsigned int *)this)[0] + 904)))->GetValue(&v6); /*0x54b9b8*/
    ((FacingClass*)((char *)&this->repairStationsCount))->Set_SyncLog(Value); /*0x54b9c1*/
    v4 = this->relatedTags[0]; /*0x54b9c6*/
    this->absorbersCapacity = 0; /*0x54b9cc*/
    this->bunkersCount = 0; /*0x54b9cf*/
    this->bunkers[0] = 0; /*0x54b9d2*/
    this->bunkersCapacity = 0; /*0x54b9d5*/
    this->occupiables[0] = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(unsigned char)v2 ) /*0x54b9ec*/
    {
      v2 = (unsigned int *)(*(int (**)(void *, int *))(*(unsigned int *)((unsigned int *)this)[0] + 756))(((unsigned int *)this)[0], &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 ) /*0x54ba08*/
        LOBYTE(v2) = ((GadgetGrid *)((GadgetGrid *)&g_CellClassManager))->InsertItem((int)((unsigned int *)this)[0]); /*0x54ba20*/
      this->unitRepairStations[0] = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/

}
} // namespace gamemd

// 0x6ABC60
namespace gamemd {
int HouseClass::GetStatus(int aP1)
{

  int v2; // edx

  if ( this == (HouseClass *)15 || this == (HouseClass *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (HouseClass *)1 || this == (HouseClass *)40 || this == (HouseClass *)2 || this == (HouseClass *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (HouseClass *)6 || this == (HouseClass *)7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == (HouseClass *)57 || this == (HouseClass *)32 || this == (HouseClass *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/

}
} // namespace gamemd
}  // L-fix: close namespace tail 2
}  // L-fix: close namespace tail 2
