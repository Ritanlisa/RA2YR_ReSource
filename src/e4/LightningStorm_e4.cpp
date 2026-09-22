// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x539EB0
namespace gamemd {
int LightningStorm::Start(int a1, int a2, int a3, void * a4)
{
{
  int result; // eax
  TechnoTypeClass *v7; // si
  wchar_t *StringCSF; // eax

  result = a3; /*0x539eb1*/
  if ( a3 == unk_A9F9F8 ) /*0x539ec3*/
  {
  int v12; // [esp+Ch] [ebp-4h]
    for ( ; !LayerClass::CoordinatesLegal(&DataGlobal_87F7E8, (__int16 *)&a3); a3 = v12 ) /*0x539edd*/
    {
      v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_AircraftTrackerState); /*0x539f04*/
      LOWORD(v12) = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_AircraftTrackerPool); /*0x539f1e*/
      HIWORD(v12) = v7; /*0x539f23*/
    }
    result = a3; /*0x539f3e*/
  }
  unk_A9F9CC = result; /*0x539f46*/
  unk_A9FACC = a4; /*0x539f4b*/
  if ( !unk_A9FAB4 ) /*0x539f59*/
  {
    if ( a2 ) /*0x539f61*/
    {
      result = unk_A9FAB8; /*0x539f63*/
      if ( !unk_A9FAB8 || unk_A9FAB8 >= a2 ) /*0x539f6e*/
        unk_A9FAB8 = a2; /*0x539f70*/
      unk_827FC4 = a1; /*0x539f77*/
    }
    else
    {
      CreateTriggerClassIfFarEnough(13, a2, result); /*0x539f89*/
      int v8 = 0; /*0x539f99*/
      unk_827FC4 = a1; /*0x539f9b*/
      unk_827FC0 = (int)g_CurrentFrame; /*0x539fa3*/
      for ( unk_A9FAB4 = 1; v8 < HouseClass_Count; ++v8 ) /*0x539fb0*/
      {
        if ( !unk_A9FACC /*0x539fc5*/
          || !(unsigned __int8)HouseClass::IsAlliedWith(unk_A9FACC, *(#375 **)&HouseClass_Array->__pad_0[4 * v8]) )
        {
          int v9 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v8]; /*0x539fd3*/
          if ( !*(_BYTE *)(v9 + 501) && !MuteSWLaunches ) /*0x539fe7*/
            HouseClass::CreateRadarOutage(v9, a1); /*0x539fea*/
        }
      }
      if ( HouseClass_Player ) /*0x53a000*/
        *((_BYTE *)HouseClass_Player + 22393) = 1; /*0x53a002*/
      ScenarioClass::UpdateLighting(); /*0x53a009*/
      if ( LOBYTE(g_RulesClass_Instance[1].?) ) /*0x53a014*/
      {
        int v10 = 3; /*0x53a023*/
        if ( HouseClass_Player ) /*0x53a02a*/
          v10 = *((_DWORD *)HouseClass_Player + 22549); /*0x53a02c*/
        PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x53a044*/
        StringCSF = GetStringCSF(aTxtLightningSt, 0, g_Str_File_Ion_cpp, 531); /*0x53a067*/
        MessageListClass::AddMessage(g_GameNetworkObject, 0, 0, StringCSF, v10, 16454, 150, 0); /*0x53a076*/
      }
      return MapClass::MarkForRedraw(&DataGlobal_87F7E8, 1); /*0x53a082*/
    }
  }
  return result; /*0x539f76*/
}
} // namespace gamemd

// 0x53A100
namespace gamemd {
int LightningStorm::IsActive()
{
{
  return unk_A9FAB4; /*0x53a105*/
}
} // namespace gamemd

// 0x53A140
namespace gamemd {
AnimClass * * LightningStorm::Strike(IUnknown * aP0)
{
{
  int result; // eax
  CoordStruct *v5; // esi
  void **v6; // eax
  AnimClass *v7; // esi
  AnimClass *v8; // eax
  CoordStruct aP2; // [esp+4h] [ebp-Ch] BYREF

  _DWORD * v1 = CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP0); /*0x53a159*/
  int v2 = (*(int (__thiscall **)(_DWORD))(***(_DWORD ***)(*(_DWORD *)&stru_87C374[44652] + 732) + 156))(**(_DWORD **)(*(_DWORD *)&stru_87C374[44652] + 732)); /*0x53a165*/
  int v3; // ecx
  v3 = ((v1[80] & 0x100) != 0 ? unk_A9FA84 : 0)
     + Coord::ScaleToScreenY((void *)(*(__int16 *)(v2 + 4) / 2))
     + unk_A9FA90 * *((char *)v1 + 283);
  result = ((__int16)aP0 << 8) + 128; /*0x53a1bb*/
  aP2.X = result; /*0x53a1c8*/
  aP2.Y = (SHIWORD(aP0) << 8) + 128; /*0x53a1cc*/
  aP2.Z = v3; /*0x53a1d0*/
  if ( result != unk_A9FA30 || __PAIR64__(v3, (SHIWORD(aP0) << 8) + 128) != qword_A9FA34 ) /*0x53a1dc*/
  {
    v5 = *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 704) /*0x53a213*/
                         + 4
                         * ((unsigned int)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player[29924] + 536))
                          % *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 716)));
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a216*/
    if ( v6 ) /*0x53a220*/
      v7 = AnimClass::ctor(v6, v5, &aP2, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x53a23c*/
    AnimClass *v7 = 0; /*0x53a240*/
    if ( dword_A9FA70 < dword_A9FA68 /*0x53a278*/
      || (unk_A9FA6D || !dword_A9FA68)
      && dword_A9FA74 > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A9FA60 + 8))(
           &dword_A9FA60,
           dword_A9FA68 + dword_A9FA74,
           0) )
    {
      v8 = (AnimClass *)dword_A9FA70++; /*0x53a285*/
      *((_DWORD *)unk_A9FA64 + (_DWORD)v8) = v7; /*0x53a294*/
    }
    result = dword_A9F9D8; /*0x53a297*/
    if ( dword_A9F9E0 < dword_A9F9D8 /*0x53a2d3*/
      || (unk_A9F9DD || !dword_A9F9D8)
      && dword_A9F9E4 > 0
      && (result = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(dword_A9F9D0 + 8))(
                     &dword_A9F9D0,
                     dword_A9F9D8 + dword_A9F9E4,
                     0),
          (_BYTE)result) )
    {
      result = dword_A9F9E0++; /*0x53a2db*/
      *((_DWORD *)unk_A9F9D4 + result) = v7; /*0x53a2ea*/
    }
  }
  return result; /*0x53a2ed*/
}
} // namespace gamemd

// 0x53A300
namespace gamemd {
int LightningStorm::Strike2(int a1, int a2, int a3)
{
{
  int *Coords; // eax
  void **v8; // eax
  void **v9; // edi
  void **v11; // eax
  RulesClass *v12; // eax
  int Climb; // ebp
  void *WarheadVersusMultiplier; // ebx
  void **v16; // edi
  int ClosestObjectCell; // eax
  void **v21; // edi
  void **v22; // esi
  void **v33; // [esp+30h] [ebp-10h]

  IUnknown *v3 = Coord::To_Cell(&DataGlobal_87F7E8, &a1); /*0x53a31a*/
  int v29; // [esp+1Ch] [ebp-24h] BYREF
  Coords = CellClass::GetCoords(v3, &v29); /*0x53a31f*/
  int v5 = Coords[1]; /*0x53a328*/
  int v6 = Coords[2]; /*0x53a32b*/
  int v34[3]; // [esp+34h] [ebp-Ch] BYREF
  v34[0] = *Coords; /*0x53a32e*/
  v34[1] = v5; /*0x53a337*/
  v34[2] = v6; /*0x53a33b*/
  void *v7; // edi
  v7 = *(void **)(g_RulesClass_Instance->? /*0x53a363*/
                + 4 * ((unsigned int)Random::State((_DWORD *)g_ScenarioClass_Instance + 134) % g_RulesClass_Instance->?));
  v8 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a366*/
  if ( v8 ) /*0x53a370*/
    v9 = AnimClass::ctor(v8, v7, v34, 0, 1, (void *)0x600, 0, 0); /*0x53a38c*/
  AnimClass *v9 = 0; /*0x53a390*/
  if ( unk_A9FA28 < unk_A9FA20 /*0x53a3c8*/
    || (unk_A9FA25 || !unk_A9FA20)
    && unk_A9FA2C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(unk_A9FA18 + 8))(&unk_A9FA18, unk_A9FA2C + unk_A9FA20, 0) )
  {
    AnimClass *v10 = unk_A9FA28++; /*0x53a3d5*/
    *((_DWORD *)unk_A9FA1C + v10) = v9; /*0x53a3e4*/
  }
  int v27 = v3[9]; /*0x53a40f*/
  int v28 = *((char *)v3 + 283); /*0x53a413*/
  v11 = (void **)(v28 * unk_A9FA90 + ((v3[80] & 0x100) != 0 ? unk_A9FA84 : 0));
  int v31 = ((__int16)v27 << 8) + 128; /*0x53a43d*/
  int v32 = (SHIWORD(v27) << 8) + 128; /*0x53a441*/
  v33 = v11; /*0x53a445*/
  if ( v31 != unk_A9FA30 || __PAIR64__((unsigned int)v11, (SHIWORD(v27) << 8) + 128) != qword_A9FA34 ) /*0x53a451*/
  {
    v12 = g_RulesClass_Instance; /*0x53a45f*/
    if ( g_RulesClass_Instance->? > 0 ) /*0x53a46c*/
    {
      unsigned int v13 = Random::State((_DWORD *)g_ScenarioClass_Instance + 134); /*0x53a47a*/
      StartAudioControllerAt(*(_DWORD *)(g_RulesClass_Instance->?[1] + 4 * (v13 % g_RulesClass_Instance->?)), (int)&v31, 0); /*0x53a49e*/
      v12 = g_RulesClass_Instance; /*0x53a4a3*/
    }
    Climb = v12[1].?; /*0x53a4ae*/
    WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier(Climb, HIDWORD(v12[1].?), v3[59], &v31); /*0x53a4c7*/
    v16 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a4d3*/
    if ( v16 ) /*0x53a4da*/
    {
      void * v17 = (void *)Return::HRESULT_Fail(v31, v32, (int)v33); /*0x53a4f7*/
      AnimClass::ctor(v16, WarheadVersusMultiplier, &v31, 0, 1, (void *)0x2600, v17, 0); /*0x53a50e*/
    }
    char v25 = 0; /*0x53a515*/
    Coord *v18 = Cell::IsBridge(v3); /*0x53a51f*/
    v29 = 0; /*0x53a524*/
    int v30 = 0; /*0x53a528*/
    ClosestObjectCell = Object::FindClosestObjectCell(v3, &v29, 0, 0); /*0x53a538*/
    TechnoClass *v20 = ClosestObjectCell; /*0x53a53d*/
    if ( !ClosestObjectCell /*0x53a552*/
  char v26; // [esp+13h] [ebp-2Dh]
      || (v26 = 1, (*(int (__thiscall **)(int))(*(_DWORD *)ClosestObjectCell + 44))(ClosestObjectCell) != 15) )
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
    CreateSmokeEffectAt(Climb, HIDWORD(g_RulesClass_Instance[1].?), v31, v32, (int)v33, 0, 0); /*0x53a581*/
    PlaySoundEffectAt(&v31, Climb, 0, HIDWORD(g_RulesClass_Instance[1].?), 1, (int)unk_A9FACC); /*0x53a5d0*/
    if ( v18 == Cell::IsBridge(v3) /*0x53a607*/
      && (v29 = 0, v30 = 0, v20 == Object::FindClosestObjectCell(v3, &v29, 0, 0))
      && *((char *)v3 + 283) == v28 )
    {
      LOBYTE(v11) = v25; /*0x53a60d*/
    }
    else
    {
      LOBYTE(v11) = 1; /*0x53a609*/
    }
    if ( !v26 ) /*0x53a617*/
    {
      if ( (_BYTE)v11 ) /*0x53a61b*/
      {
        v11 = (void **)Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 2, 4); /*0x53a62c*/
        if ( (int)v11 > 0 ) /*0x53a633*/
        {
          v21 = v11; /*0x53a635*/
          do /*0x53a691*/
          {
            v11 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x53a63c*/
            v22 = v11; /*0x53a641*/
            if ( v11 ) /*0x53a648*/
            {
              int v23 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, g_RulesClass_Instance->ExecutePlanSound - 1); /*0x53a665*/
              LOBYTE(v11) = (unsigned __int8)AnimClass::ctor( /*0x53a68b*/
                                               v22,
                                               *(void **)(g_RulesClass_Instance->DefaultChronoSound + 4 * v23),
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
} // namespace gamemd

// 0x53A090
namespace gamemd {
char LightningStorm::End()
{
{
    char result;
    result = LightningStorm_Active;
    if ( LightningStorm_Active )
    LightningStorm_TimeToEnd = 1;
    return result;
}
}
} // namespace gamemd
