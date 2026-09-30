// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x539EB0
namespace gamemd {
int LightningStorm::Start(int a1, int a2, int a3, void * a4)
{

  unsigned char * result;
  int16_t v7; // si
  int v8; // esi
  int v9; // ecx
  wchar_t * v10;
  wchar_t *StringCSF; // eax
  int v12; // [esp+Ch] [ebp-4h]

  result = (unsigned char *)(a3);
  if ( a3 == (int)(unk_A9F9F8) ) /*0x539ec3*/
  {
    for ( ; !((LayerClass *)(&g_abs_87F7E8))->CoordinatesLegal((int16_t *)&a3); a3 = v12 ) /*0x539edd*/
    {
      v7 = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, g_abs_87F918); /*0x539f04*/
      IDA_LOWORD(v12) = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, g_abs_87F914); /*0x539f1e*/
      IDA_HIWORD(v12) = v7; /*0x539f23*/
    }
    result = (unsigned char *)(a3);
  }
  unk_A9F9CC = (unsigned char *)(result);
  unk_A9FACC = (unsigned char *)(a4);
  if ( !unk_A9FAB4 ) /*0x539f59*/
  {
    if ( a2 ) /*0x539f61*/
    {
      result = (unsigned char *)(unk_A9FAB8);
      if ( !unk_A9FAB8 || unk_A9FAB8 >= (unsigned char *)(a2) ) /*0x539f6e*/
        unk_A9FAB8 = a2; /*0x539f70*/
      unk_827FC4 = a1; /*0x539f77*/
    }
    else
    {
      CreateTriggerClassIfFarEnough(13, a2, result); /*0x539f89*/
      v8 = 0; /*0x539f99*/
      unk_827FC4 = a1; /*0x539f9b*/
      unk_827FC0 = (int)g_abs_A8ED84; /*0x539fa3*/
      for ( unk_A9FAB4 = 1; v8 < HouseClass_Count; ++v8 ) /*0x539fb0*/
      {
        if ( !unk_A9FACC /*0x539fc5*/
          || !(uint8_t)HouseClass::IsAlliedWith(unk_A9FACC, *(void **)&HouseClass_Array->__pad_0[4 * v8]) )
        {
          v9 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * v8]; /*0x539fd3*/
          if ( !*(unsigned char *)(v9 + 501) && !g_abs_A8B538 ) /*0x539fe7*/
            HouseClass::CreateRadarOutage(v9, a1); /*0x539fea*/
        }
      }
      if ( HouseClass_Player ) /*0x53a000*/
        *((unsigned char *)HouseClass_Player + 22393) = 1; /*0x53a002*/
      ScenarioClass::UpdateLighting(); /*0x53a009*/
      if ( IDA_LOBYTE(g_abs_8871E0[1].?) ) /*0x53a014*/
      {
        v10 = (wchar_t *)((int)((wchar_t *)(3)));
        if ( HouseClass_Player ) /*0x53a02a*/
          v10 = *((unsigned int *)HouseClass_Player + 22549); /*0x53a02c*/
        PlayVocClass(g_abs_8871E0->?[3], 0x2000, 1.0, 0); /*0x53a044*/
        StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531); /*0x53a067*/
        MessageListClass::AddMessage(g_abs_A8BC60, 0, 0, StringCSF, v10, 16454, 150, 0); /*0x53a076*/
      }
      return MapClass::MarkForRedraw(&g_abs_87F7E8, 1); /*0x53a082*/
    }
  }
  return (int)((int)((int)(result)));

}
}
// 0x53A100
namespace gamemd {
int LightningStorm::IsActive()
{

  return (int)((int)((int)(unk_A9FAB4)));

}
}
// 0x53A140
namespace gamemd {
void LightningStorm::Strike(IUnknown * aP0)
{
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */
    unsigned int v5 = 0;  /* G37 hoist */

  unsigned int *v1; // esi
  int v2; // eax
  int v3; // ecx
  int result; // eax
  CoordStruct *v5; // esi
  void **v6; // eax
  AnimClass *v7; // esi
  AnimClass *v8; // eax
  CoordStruct aP2; // [esp+4h] [ebp-Ch] BYREF

  v1 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&aP0); /*0x53a159*/
  v2 = (*(int (**)(unsigned int))(***(unsigned int ***)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 732) + 156))(**(unsigned int **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 732)); /*0x53a165*/
  v3 = ((v1[80] & 0x100) != 0 ? unk_A9FA84 : 0)
     + Coord::ScaleToScreenY((void *)(*(int16_t *)(v2 + 4) / 2))
     + unk_A9FA90 * *((char *)v1 + 283);
  result = ((int16_t)aP0 << 8) + 128; /*0x53a1bb*/
  aP2.X = result; /*0x53a1c8*/
  aP2.Y = (SHIWORD(aP0) << 8) + 128; /*0x53a1cc*/
  aP2.Z = v3; /*0x53a1d0*/
  if ( result != unk_A9FA30 || __PAIR64__(v3, (SHIWORD(aP0) << 8) + 128) != qword_A9FA34 ) /*0x53a1dc*/
  {
    v5 = *(CoordStruct **)(*(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 704) /*0x53a213*/
                         + 4
                         * ((unsigned int)Random::State((unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 536))
                          % *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 716)));
    v6 = (void **)RA2_OPNEW(0x1C8u); /*0x53a216*/
    if ( v6 ) /*0x53a220*/
      v7 = AnimClass::ctor(v6, v5, &aP2, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x53a23c*/
    else
      v7 = 0; /*0x53a240*/
    if ( dword_A9FA70 < dword_A9FA68 /*0x53a278*/
      || (unk_A9FA6D || !dword_A9FA68)
      && dword_A9FA74 > 0
      && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A9FA60 + 8))(
           &dword_A9FA60,
           dword_A9FA68 + dword_A9FA74,
           0) )
    {
      v8 = (AnimClass *)dword_A9FA70++; /*0x53a285*/
      *((unsigned int *)unk_A9FA64 + (unsigned int)v8) = v7; /*0x53a294*/
    }
    result = dword_A9F9D8; /*0x53a297*/
    if ( dword_A9F9E0 < dword_A9F9D8 /*0x53a2d3*/
      || (unk_A9F9DD || !dword_A9F9D8)
      && dword_A9F9E4 > 0
      && (result = (*(int (**)(unsigned int *, int, unsigned int))(dword_A9F9D0 + 8))(
                     &dword_A9F9D0,
                     dword_A9F9D8 + dword_A9F9E4,
                     0),
          (unsigned char)result) )
    {
      result = dword_A9F9E0++; /*0x53a2db*/
      *((unsigned int *)unk_A9F9D4 + result) = v7; /*0x53a2ea*/
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
  unsigned int v12;
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
  RulesClass * v31;
  int v32; // [esp+2Ch] [ebp-14h]
  void **v33; // [esp+30h] [ebp-10h]
  int v34[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = (unsigned int *)(Coord::To_Cell(&g_abs_87F7E8, &a1));
  Coords = CellClass::GetCoords(v3, &v29); /*0x53a31f*/
  v5 = Coords[1]; /*0x53a328*/
  v6 = Coords[2]; /*0x53a32b*/
  v34[0] = *Coords; /*0x53a32e*/
  v34[1] = v5; /*0x53a337*/
  v34[2] = v6; /*0x53a33b*/
  v7 = *(void **)(g_abs_8871E0->? /*0x53a363*/
                + 4 * ((unsigned int)Random::State((unsigned int *)g_abs_A8B230 + 134) % g_abs_8871E0->?));
  v8 = (void **)RA2_OPNEW(0x1C8u); /*0x53a366*/
  if ( v8 ) /*0x53a370*/
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0); /*0x53a38c*/
  else
    v9 = 0; /*0x53a390*/
  if ( unk_A9FA28 < unk_A9FA20 /*0x53a3c8*/
    || (unk_A9FA25 || !unk_A9FA20)
    && unk_A9FA2C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(unk_A9FA18 + 8))(&unk_A9FA18, unk_A9FA2C + unk_A9FA20, 0) )
  {
    v10 = unk_A9FA28++; /*0x53a3d5*/
    *((unsigned int *)unk_A9FA1C + v10) = v9; /*0x53a3e4*/
  }
  v27 = v3[9]; /*0x53a40f*/
  v28 = *((char *)v3 + 283); /*0x53a413*/
  v11 = (void **)(v28 * unk_A9FA90 + ((v3[80] & 0x100) != 0 ? unk_A9FA84 : 0));
  v31 = (gamemd::RulesClass *)((int)((gamemd::RulesClass *)(((int16_t)v27 << 8) + 128)));
  v32 = (SHIWORD(v27) << 8) + 128; /*0x53a441*/
  v33 = v11; /*0x53a445*/
  if ( v31 != unk_A9FA30 || __PAIR64__((unsigned int)v11, (SHIWORD(v27) << 8) + 128) != qword_A9FA34 ) /*0x53a451*/
  {
    v12 = (gamemd::RulesClass *)(g_abs_8871E0);
    if ( g_abs_8871E0->? > 0 ) /*0x53a46c*/
    {
      v13 = (gamemd::RulesClass *)(Random::State((unsigned int *)g_abs_A8B230 + 134));
      StartAudioControllerAt(*(unsigned int *)(g_abs_8871E0->?[1] + 4 * (v13 % g_abs_8871E0->?)), (int)&v31, 0); /*0x53a49e*/
      v12 = g_abs_8871E0; /*0x53a4a3*/
    }
    Climb = v12[1].?; /*0x53a4ae*/
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(Climb, IDA_HIDWORD(v12[1].?), v3[59], &v31); /*0x53a4c7*/
    v16 = (void **)RA2_OPNEW(0x1C8u); /*0x53a4d3*/
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
      switch ( v3[59] ) /*0x53a575*/
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
    CreateSmokeEffectAt(Climb, IDA_HIDWORD(g_abs_8871E0[1].?), v31, v32, (int)v33, 0, 0); /*0x53a581*/
    PlaySoundEffectAt(&v31, Climb, 0, IDA_HIDWORD(g_abs_8871E0[1].?), 1, (int)unk_A9FACC); /*0x53a5d0*/
    if ( v18 == Cell::IsBridge(v3) /*0x53a607*/
      && (v29 = 0, v30 = 0, v20 == Object::FindClosestObjectCell(v3, &v29, 0, 0))
      && *((char *)v3 + 283) == v28 )
    {
      IDA_LOBYTE(v11) = v25; /*0x53a60d*/
    }
    else
    {
      IDA_LOBYTE(v11) = 1; /*0x53a609*/
    }
    if ( !v26 ) /*0x53a617*/
    {
      if ( (unsigned char)v11 ) /*0x53a61b*/
      {
        v11 = (void **)Random::Range((unsigned int *)g_abs_A8B230 + 134, 2, 4); /*0x53a62c*/
        if ( (int)v11 > 0 ) /*0x53a633*/
        {
          v21 = v11; /*0x53a635*/
          do /*0x53a691*/
          {
            v11 = (void **)RA2_OPNEW(0x1C8u); /*0x53a63c*/
            v22 = v11; /*0x53a641*/
            if ( v11 ) /*0x53a648*/
            {
              v23 = Random::Range((unsigned int *)g_abs_A8B230 + 134, 0, g_abs_8871E0->ExecutePlanSound - 1); /*0x53a665*/
              IDA_LOBYTE(v11) = (uint8_t)AnimClass::ctor( /*0x53a68b*/
                                               v22,
                                               *(void **)(g_abs_8871E0->DefaultChronoSound + 4 * v23),
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

  char result; // al

  result = unk_A9FAB4; /*0x53a090*/
  if ( unk_A9FAB4 ) /*0x53a097*/
    unk_A9FAD0 = 1; /*0x53a099*/
  return result; /*0x53a0a0*/

}
} // namespace gamemd
