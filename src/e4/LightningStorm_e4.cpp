// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/ListBox_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/LightSourceClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Return_e4.hpp"  // G42.36 C2027 supply

// 0x539EB0
namespace gamemd {  // G42.18 ns repair
int LightningStorm::Start(int a1, int a2, int a3, void * a4)
{


  int result = a3; // eax /*0x539eb1*/
  if ( a3 == dword_A9F9F8 ) /*0x539ec3*/
  {
    int v12; // [esp+Ch] [ebp-4h]
    for ( ; !(&dword_87F7E8)->CoordinatesLegal((__int16 *)&a3); a3 = v12 ) /*0x539edd*/
    {
      __int16 v7; // si
      v7 = Random::Range(&dword_A8B230[14].NeedsSaveOrLink, 0, dword_87F918); /*0x539f04*/
      LOWORD(v12) = Random::Range(&dword_A8B230[14].NeedsSaveOrLink, 0, dword_87F914); /*0x539f1e*/
      HIWORD(v12) = v7; /*0x539f23*/
    }
    result = a3; /*0x539f3e*/
  }
  LightningStorm_Coords = result; /*0x539f46*/
  LightningStorm_Owner = (int)(a4); /*0x539f4b*/
  if ( !LightningStorm_Active ) /*0x539f59*/
  {
    if ( a2 ) /*0x539f61*/
    {
      result = LightningStorm_Deferment; /*0x539f63*/
      if ( !LightningStorm_Deferment || LightningStorm_Deferment >= a2 ) /*0x539f6e*/
        LightningStorm_Deferment = a2; /*0x539f70*/
      LightningStorm_Duration = a1; /*0x539f77*/
    }
    else
    {
      CreateTriggerClassIfFarEnough(13, a2, result); /*0x539f89*/
      int v8 = 0; // esi /*0x539f99*/
      LightningStorm_Duration = a1; /*0x539f9b*/
      LightningStorm_StartTime = (int)dword_A8ED84; /*0x539fa3*/
      for ( LightningStorm_Active = 1; v8 < dword_A80238; ++v8 ) /*0x539fb0*/
      {
        if ( !LightningStorm_Owner /*0x539fc5*/
          || !(unsigned __int8)HouseClass::IsAlliedWith(
                                 LightningStorm_Owner,
                                 *(HouseClass **)&dword_A8022C->AbstractClass[4 * v8]) )
        {
          int v9; // ecx
          v9 = *(unsigned int *)&dword_A8022C->AbstractClass[4 * v8]; /*0x539fd3*/
          if ( !*(unsigned char *)(v9 + 501) && !dword_A8B538 ) /*0x539fe7*/
            HouseClass::CreateRadarOutage(v9, a1); /*0x539fea*/
        }
      }
      if ( dword_A83D4C ) /*0x53a000*/
        dword_A83D4C->u32_5779 = 1; /*0x53a002*/
      ScenarioClass::UpdateLighting(); /*0x53a009*/
      if ( LOBYTE(dword_8871E0[1].?) ) /*0x53a014*/
      {
        int v10 = 3; // esi /*0x53a023*/
        if ( dword_A83D4C ) /*0x53a02a*/
          v10 = dword_A83D4C->startingCell; /*0x53a02c*/
        PlayVocClass(dword_8871E0->q730, 0x2000, 1.0, 0); /*0x53a044*/
        wchar_t *StringCSF; // eax
        StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531); /*0x53a067*/
        MessageListClass::AddMessage(unk_A8BC60, 0, 0, StringCSF, v10, 16454, 150, 0); /*0x53a076*/
      }
      return MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x53a082*/
    }
  }
  return result; /*0x539f76*/

}
}  // G42.18 ns repair
// 0x53A100
namespace gamemd {
int LightningStorm::IsActive()
{

  int result; // eax
  (*((unsigned char *)&(result))) = LightningStorm_Active; /*0x53a100*/
  return result; /*0x53a105*/
}
}
// 0x53A140
namespace gamemd {
int LightningStorm::Strike(int aP0)
{


  unsigned int *v1; // esi
  v1 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&aP0); /*0x53a159*/
  int v2; // eax
  v2 = (*(int (**)(unsigned int))(**(unsigned int **)dword_8871E0->q730 + 156))(*(unsigned int *)dword_8871E0->q730); /*0x53a165*/
  int v3; // ecx
  v3 = ((v1->u32_140 & 0x100) != 0 ? dword_A9FA84 : 0)
  + Coord::ScaleToScreenY((void *)(*(__int16 *)(v2 + 4) / 2))
  + dword_A9FA90 * v1->u32_11B;
  int result; // eax
  result = ((__int16)aP0 << 8) + 128; /*0x53a1bb*/
  int v9[3]; // [esp+4h] [ebp-Ch] BYREF
  v9[0] = result; /*0x53a1c8*/
  v9[1] = (SHIWORD(aP0) << 8) + 128; /*0x53a1cc*/
  v9[2] = v3; /*0x53a1d0*/
  if ( result != dword_A9FA30 || (SHIWORD(aP0) << 8) + 128 != qword_A9FA34 || v3 != MEMORY[0xA9FA38] ) /*0x53a1e4*/
  {
    void *v5; // esi
    v5 = *(void **)(dword_8871E0->q730 + 4 * ((unsigned int)Random::State(&dword_A8B230[14].NeedsSaveOrLink) % dword_8871E0->q730)); /*0x53a213*/
    void **v6; // eax
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a216*/
    void **v7; // esi
    if ( v6 ) /*0x53a220*/
      v7 = AnimClass::ctor(v6, v5, v9, 0, 1, (void *)0x600, 0, 0); /*0x53a23c*/
    else
      v7 = 0; /*0x53a240*/
    if ( dword_A9FA70 < dword_A9FA68 /*0x53a278*/
      || (byte_A9FA6D || !dword_A9FA68)
      && dword_A9FA74 > 0
      && (*(unsigned __int8 (**)(int *, int, unsigned int))(LightningStorm_CloudsManifesting + 8))(
           &LightningStorm_CloudsManifesting,
           dword_A9FA68 + dword_A9FA74,
           0) )
    {
      int v8; // eax
      v8 = dword_A9FA70++; /*0x53a285*/
      *((unsigned int *)dword_A9FA64 + v8) = v7; /*0x53a294*/
    }
    result = dword_A9F9D8; /*0x53a297*/
    if ( dword_A9F9E0 < dword_A9F9D8 /*0x53a2d3*/
      || (byte_A9F9DD || !dword_A9F9D8)
      && dword_A9F9E4 > 0
      && (result = (*(int (**)(int *, int, unsigned int))(LightningStorm_CloudsPresent + 8))(
                     &LightningStorm_CloudsPresent,
                     dword_A9F9D8 + dword_A9F9E4,
                     0),
          (unsigned char)result) )
    {
      result = dword_A9F9E0++; /*0x53a2db*/
      *((unsigned int *)dword_A9F9D4 + result) = v7; /*0x53a2ea*/
    }
  }
  return result; /*0x53a2ed*/

}
}
// 0x53A300
namespace gamemd {
int LightningStorm::Strike2(int a1, int a2, int a3)
{

  unsigned int *v3; // esi
  int *Coords; // eax
  int v5; // ecx
  int v6; // edx
  void *v7; // edi
  void **v8; // eax
  void **v9; // edi
  int v10; // eax
  void **v11; // eax
  RulesClass *v12; // eax
  unsigned int v13; // eax
  int Climb; // ebp
  void *WarheadVersusMultiplier; // ebx
  void **v16; // edi
  void *v17; // eax
  unsigned int *v18; // ebx
  int ClosestObjectCell; // eax
  int v20; // edi
  void **v21; // edi
  void **v22; // esi
  int v23; // eax
  char v25; // [esp+12h] [ebp-2Eh]
  char v26; // [esp+13h] [ebp-2Dh]
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h] BYREF
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+28h] [ebp-18h] BYREF
  int v32; // [esp+2Ch] [ebp-14h]
  void **v33; // [esp+30h] [ebp-10h]
  int v34[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = Coord::To_Cell(&dword_87F7E8, &a1); /*0x53a31a*/
  Coords = CellClass::GetCoords(v3, &v29); /*0x53a31f*/
  v5 = Coords[1]; /*0x53a328*/
  v6 = Coords[2]; /*0x53a32b*/
  v34[0] = *Coords; /*0x53a32e*/
  v34[1] = v5; /*0x53a337*/
  v34[2] = v6; /*0x53a33b*/
  v7 = *(void **)(dword_8871E0->AbstractClass_2DC + 4 * ((unsigned int)Random::State((unsigned int *)dword_A8B230 + 134) % dword_8871E0->AbstractClass_2DC)); /*0x53a363*/
  v8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a366*/
  if ( v8 ) /*0x53a370*/
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0); /*0x53a38c*/
  else
    v9 = 0; /*0x53a390*/
  if ( dword_A9FA28 < dword_A9FA20 /*0x53a3c8*/
    || (byte_A9FA25 || !dword_A9FA20)
    && dword_A9FA2C > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(LightningStorm_BoltsPresent + 8))(
         &LightningStorm_BoltsPresent,
         dword_A9FA2C + dword_A9FA20,
         0) )
  {
    v10 = dword_A9FA28++; /*0x53a3d5*/
    *((unsigned int *)dword_A9FA1C + v10) = v9; /*0x53a3e4*/
  }
  v27 = v3->objectTypeFlags; /*0x53a40f*/
  v28 = *((char *)v3 + 283); /*0x53a413*/
  v11 = (void **)(v28 * dword_A9FA90 + ((v3->currentRank & 0x100) != 0 ? dword_A9FA84 : 0));
  v31 = ((__int16)v27 << 8) + 128; /*0x53a43d*/
  v32 = ((short)(((v27) >> 16) & 0xFFFF) << 8) + 128; /*0x53a441*/
  v33 = v11; /*0x53a445*/
  if ( v31 != dword_A9FA30 || ((((unsigned int)v11 & 0xFFFFFFFFull)) << 32 | (((short)(((v27) >> 16) & 0xFFFF) << 8) + 128 & 0xFFFFFFFFull)) != qword_A9FA34 ) /*0x53a451*/
  {
    v12 = dword_8871E0; /*0x53a45f*/
    if ( dword_8871E0->q744 > 0 ) /*0x53a46c*/
    {
      v13 = Random::State((unsigned int *)dword_A8B230 + 134); /*0x53a47a*/
      StartAudioControllerAt(*(unsigned int *)(dword_8871E0 + 4 * (v13 % dword_8871E0)), (int)&v31, 0); /*0x53a49e*/
      v12 = dword_8871E0; /*0x53a4a3*/
    }
    Climb = v12[1].?; /*0x53a4ae*/
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(Climb, HIDWORD(v12[1].?), v3[59], &v31); /*0x53a4c7*/
    v16 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a4d3*/
    if ( v16 ) /*0x53a4da*/
    {
      v17 = (void *)Return::HRESULT_Fail(v31, v32, (int)v33); /*0x53a4f7*/
      AnimClass::ctor(v16, WarheadVersusMultiplier, &v31, 0, 1, (void *)0x2600, v17, 0); /*0x53a50e*/
    }
    v25 = 0; /*0x53a515*/
    v18 = Cell::IsBridge(v3); /*0x53a51f*/
    v29 = 0; /*0x53a524*/
    v30 = 0; /*0x53a528*/
    ClosestObjectCell = Object::FindClosestObjectCell(v3, &v29, 0, 0); /*0x53a538*/
    v20 = ClosestObjectCell; /*0x53a53d*/
    if ( !ClosestObjectCell /*0x53a552*/
      || (v26 = 1, (*(int (**)(int))(*(unsigned int *)ClosestObjectCell + 44))(ClosestObjectCell) != 15) )
    {
      v26 = 0; /*0x53a554*/
    }
    if ( !v18 && !v20 ) /*0x53a55f*/
    {
      switch ( v3->animation ) /*0x53a575*/
      {
        case 1: /*0x53a575*/
        case 3: /*0x53a575*/
        case 4: /*0x53a575*/
        case 0xB: /*0x53a575*/
          v25 = 1; /*0x53a57c*/
          break; /*0x53a57c*/
        default:
          break;
      }
    }
    CreateSmokeEffectAt(Climb, HIDWORD(dword_8871E0[1].?), v31, v32, (int)v33, 0, 0); /*0x53a581*/
    PlaySoundEffectAt(&v31, Climb, 0, HIDWORD(dword_8871E0[1].?), 1, (int)LightningStorm_Owner); /*0x53a5d0*/
    if ( v18 == Cell::IsBridge(v3) /*0x53a607*/
      && (v29 = 0, v30 = 0, v20 == Object::FindClosestObjectCell(v3, &v29, 0, 0))
      && v3->u32_11B == v28 )
    {
      LOBYTE(v11) = v25; /*0x53a60d*/
    }
    else
    {
      LOBYTE(v11) = 1; /*0x53a609*/
    }
    if ( !v26 ) /*0x53a617*/
    {
      if ( (unsigned char)v11 ) /*0x53a61b*/
      {
        v11 = (void **)Random::Range((unsigned int *)dword_A8B230 + 134, 2, 4); /*0x53a62c*/
        if ( (int)v11 > 0 ) /*0x53a633*/
        {
          v21 = v11; /*0x53a635*/
          do /*0x53a691*/
          {
            v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a63c*/
            v22 = v11; /*0x53a641*/
            if ( v11 ) /*0x53a648*/
            {
              v23 = Random::Range((unsigned int *)dword_A8B230 + 134, 0, dword_8871E0->ExecutePlanSound - 1); /*0x53a665*/
              LOBYTE(v11) = (unsigned __int8)AnimClass::ctor( /*0x53a68b*/
                                               v22,
                                               *(void **)(dword_8871E0->DefaultChronoSound + 4 * v23),
                                               &v31,
                                               0,
                                               1,
                                               (void *)0x600,
                                               0,
                                               0);
            }
            v21 = (void **)((char *)v21 - 1); /*0x53a690*/
          }
          while ( v21 ); /*0x53a691*/
        }
      }
    }
  }
  return (char)v11; /*0x53a693*/

}
}
// 0x53A090
namespace gamemd {
char LightningStorm::End()
{

  char result = LightningStorm_Active; // al /*0x53a090*/
  if ( LightningStorm_Active ) /*0x53a097*/
    LightningStorm_TimeToEnd = 1; /*0x53a099*/
  return result; /*0x53a0a0*/
}
} // namespace gamemd
