// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x655C50
MapClass * * FogOfWar::RevealArea(RadarClass * aP1)
{
{
  IUnknown *result; // eax
  IUnknown *v6; // ecx
  IUnknown *v10; // ecx
  #375 **v13; // ebp
  #375 *v14; // eax
  unsigned __int16 v15; // ax
  RadarClass *v16; // ebx
  #375 *v18; // edx
  RadarClass *v26; // ecx
  int v27; // edx
  RadarClass *v29; // edi
  IUnknown *v30; // ebx
  IUnknown *v31; // ebp
  IUnknown *v32; // ebx
  int v33; // ecx
  char v34; // [esp+13h] [ebp-2Dh]
  int v35; // [esp+14h] [ebp-2Ch]
  IUnknown *v36; // [esp+18h] [ebp-28h]
  _DWORD v37[2]; // [esp+20h] [ebp-20h] BYREF
  IUnknown *GroundHeight; // [esp+28h] [ebp-18h]
  IUnknown *v39; // [esp+2Ch] [ebp-14h]
  char v40[16]; // [esp+30h] [ebp-10h] BYREF
  RadarClass *aP1a; // [esp+44h] [ebp+4h]
  char aP1b; // [esp+44h] [ebp+4h]
  RadarClass *aP1c; // [esp+44h] [ebp+4h]

  result = HouseClass_Player; /*0x655c50*/
  if ( !HouseClass_Player ) /*0x655c62*/
    return (int)result; /*0x655c62*/
  result = (IUnknown *)(*(int (__thiscall **)(_DWORD, char *))(*this->q487 + 120))( /*0x655c75*/
                         this->q487,
                         v40);
  int v5 = aP1->field_0; /*0x655c7e*/
  aP1a = (RadarClass *)aP1->field_0; /*0x655c82*/
  if ( (int)aP1a < result->field_0 ) /*0x655c86*/
    return (int)result; /*0x655c86*/
  if ( v5 >= result->field_0 + result->field_8 ) /*0x655c93*/
    return (int)result; /*0x655c93*/
  v6 = (IUnknown *)aP1->field_4; /*0x655c99*/
  int v7 = result->field_4; /*0x655c9c*/
  if ( (int)v6 < v7 ) /*0x655ca5*/
    return (int)result; /*0x655ca5*/
  result = (IUnknown *)(v7 + result->field_C); /*0x655cae*/
  if ( (int)v6 >= (int)result ) /*0x655cb2*/
    return (int)result; /*0x655cb2*/
  double v8 = (double)(int)aP1a / *(float *)(this + 5256) - (double)*(int *)(this + 5264); /*0x655cc2*/
  v37[0] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d1b*/
  v37[1] = ((__int16)Math::RoundToInt(v8) << 8) + 128; /*0x655d2b*/
  GroundHeight = 0; /*0x655d2f*/
  GroundHeight = (IUnknown *)Cell::GetGroundHeight(v37); /*0x655d38*/
  if ( !g_hWnd || (aP1b = 1, !Cell::IsPassable(v37)) ) /*0x655d4f*/
    aP1b = 0; /*0x655d5d*/
  if ( !g_hWnd || (v34 = 1, !FogOfWar_Get(v37)) ) /*0x655d74*/
    v34 = 0; /*0x655d82*/
  v35 = 0; /*0x655d8a*/
  int v9 = **(_DWORD **)(this + 4696) + 24 * (unsigned __int8)(aP1->field_0 - 5 * (int)aP1->field_4); /*0x655da7*/
  v10 = *(IUnknown **)(v9 + 16); /*0x655daa*/
  int v11 = *(_DWORD *)(v9 + 4); /*0x655dae*/
  v36 = v10; /*0x655db3*/
  if ( (int)v10 <= 0 ) /*0x655db7*/
    goto LABEL_26; /*0x655db7*/
  int v12 = v11 + 4; /*0x655dbd*/
  while ( 1 ) /*0x655dc4*/
  {
    v13 = *(#375 ***)(v12 - 4); /*0x655dc4*/
    if ( *(_DWORD *)v12 != aP1->field_0 || *(void **)(v12 + 4) != aP1->field_4 ) /*0x655dd7*/
      goto LABEL_25; /*0x655dd7*/
    if ( (!aP1b || (unsigned __int8)House::IsHumanPlayer(v13[135])) /*0x655e10*/
      && (!*(_BYTE *)((*((int (__thiscall **)(#375 **))*v13 + 33))(v13) + 559)
       || Object::IsAlliedWithObjectHouse(HouseClass_Player, (IUnknown *)v13)) )
    {
      if ( !*(_BYTE *)((*((int (__thiscall **)(#375 **))*v13 + 33))(v13) + 562) ) /*0x655e24*/
        break; /*0x655e24*/
      if ( *(_BYTE *)((*((int (__thiscall **)(#375 **))*v13 + 33))(v13) + 3227) ) /*0x655e3d*/
        break; /*0x655e3d*/
      v14 = v13[135]; /*0x655e4b*/
      if ( v14 ) /*0x655e53*/
      {
        if ( !*(_BYTE *)(*((_DWORD *)v14 + 13) + 422) ) /*0x655e58*/
          break; /*0x655e58*/
      }
    }
    v10 = v36; /*0x655e66*/
LABEL_25:
    v12 += 16; /*0x655e6a*/
    if ( ++v35 >= (int)v10 ) /*0x655e78*/
      goto LABEL_26; /*0x655e78*/
  }
  if ( !v13 ) /*0x655f4a*/
  {
LABEL_26:
    if ( v34 ) /*0x655e84*/
    {
      v15 = (*(int (__thiscall **)(_DWORD, RadarClass *))(*this->q488 + 40))( /*0x655e93*/
              this->q488,
              aP1);
      (*(void (__thiscall **)(_DWORD, RadarClass *, unsigned int))(*this->q487 + 36))( /*0x655f40*/
        this->q487,
        aP1,
        ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_CellDirectionOffsets[5952]) << g_CellDirectionOffsets[5956]) >> 1) >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952])
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_CellDirectionOffsets[5968]) << g_CellDirectionOffsets[5972]) >> 1) >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968])
      | ((unsigned int)((unsigned __int8)((unsigned __int8)(v15 >> g_CellDirectionOffsets[5960]) << g_CellDirectionOffsets[5964]) >> 1) >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]));
    }
    else if ( aP1b ) /*0x65605e*/
    {
      (*(void (__stdcall **)(RadarClass *, _DWORD))(*this->q487 + 36))(aP1, 0); /*0x65608c*/
    }
    else
    {
      int v20 = *this->q487; /*0x65606f*/
  int v21; // eax
      v21 = (*(int (__thiscall **)(_DWORD, RadarClass *))(*this->q488 + 40))( /*0x656071*/
              this->q488,
              aP1);
      (*(void (__thiscall **)(_DWORD, RadarClass *, int))(v20 + 36))(this->q487, aP1, v21); /*0x65607c*/
    }
    goto LABEL_45; /*0x655f43*/
  }
  v16 = (RadarClass *)v13[135]; /*0x655f50*/
  aP1c = v16; /*0x655f5b*/
  if ( (*((unsigned __int8 (__thiscall **)(#375 **))*v13 + 49))(v13) ) /*0x655f5f*/
  {
    aP1c = (RadarClass *)(*((int (__thiscall **)(#375 **, _DWORD))*v13 + 52))(v13, 0); /*0x655f76*/
    v16 = aP1c; /*0x655f7a*/
  }
  if ( v16 ) /*0x655f7e*/
  int v17; // ebx
    v17 = ((unsigned __int8)aP1c[1].__pad_16BB[2946] >> g_CellDirectionOffsets[5956] << g_CellDirectionOffsets[5952]) /*0x655fd2*/
        | ((unsigned __int8)aP1c[1].__pad_16BB[2947] >> g_CellDirectionOffsets[5972] << g_CellDirectionOffsets[5968])
        | ((unsigned __int8)v16[1].__pad_16BB[2948] >> g_CellDirectionOffsets[5964] << g_CellDirectionOffsets[5960]);
  else
    v17 = *(_DWORD *)(FindBuildingAnimByName(&stru_830620[26796], 1) + 816); /*0x655fe5*/
  v18 = v13[93]; /*0x655feb*/
  int v19 = (int)v13[95]; /*0x655ff1*/
  if ( v18 == (#375 *)-1 ) /*0x655ffa*/
  {
LABEL_37:
    if ( v19 <= 0 /*0x65603a*/
      || (v19 - 1) / *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 136) % 2 != 1
      || v13[135] != (#375 *)HouseClass_Player )
    {
      goto LABEL_41; /*0x65603a*/
    }
    (*(void (__thiscall **)(_DWORD, RadarClass *, int))(*this->q487 + 36))( /*0x656048*/
      this->q487,
      aP1,
      ~v17);
  }
  else
  {
    if ( *(_DWORD *)&g_NetworkPlayerBuffer[5960] - (int)v18 < v19 ) /*0x656006*/
    {
      v19 -= *(_DWORD *)&g_NetworkPlayerBuffer[5960] - (_DWORD)v18; /*0x656008*/
      goto LABEL_37; /*0x656008*/
    }
LABEL_41:
    (*(void (__stdcall **)(RadarClass *, int))(*this->q487 + 36))(aP1, v17); /*0x65604d*/
  }
LABEL_45:
  RadarClass *v22 = *(_DWORD *)(this + 5276); /*0x65608f*/
  int v23 = *(_DWORD *)(this + 5280); /*0x656095*/
  int v24 = this + 4620; /*0x6560a0*/
  int v25 = v22 + aP1->field_0; /*0x6560a6*/
  v26 = (RadarClass *)((char *)aP1->field_4 + v23); /*0x6560a8*/
  if ( *(int *)(v24 + 8) <= 0 || *(int *)(v24 + 12) <= 0 ) /*0x6560be*/
  {
    v27 = v22 + aP1->field_0; /*0x656125*/
    v29 = (RadarClass *)((char *)aP1->field_4 + v23); /*0x656127*/
    result = (IUnknown *)1; /*0x656129*/
    v33 = 1; /*0x65612b*/
  }
  else
  {
    v27 = *(_DWORD *)v24; /*0x6560c2*/
    bool v28 = *(_DWORD *)v24 <= v25; /*0x6560c5*/
    v29 = *(RadarClass **)(v24 + 4); /*0x6560c7*/
    v30 = *(IUnknown **)(v24 + 8); /*0x6560ca*/
    GroundHeight = v30; /*0x6560cd*/
    v39 = *(IUnknown **)(v24 + 12); /*0x6560d4*/
    if ( !v28 ) /*0x6560d8*/
    {
      v30 = (IUnknown *)((char *)v30 + v27 - v25); /*0x6560dc*/
      v27 = v25; /*0x6560de*/
      GroundHeight = v30; /*0x6560e0*/
    }
    if ( (int)v29 > (int)v26 ) /*0x6560e6*/
    {
      v31 = (IUnknown *)((char *)v39 + (char *)v29 - (char *)v26); /*0x6560ee*/
      v29 = v26; /*0x6560f0*/
      v39 = v31; /*0x6560f2*/
    }
    if ( (int)v30 + v27 < v25 + 1 ) /*0x6560fd*/
      GroundHeight = (IUnknown *)(v25 - v27 + 2); /*0x656104*/
    v32 = v39; /*0x656108*/
    if ( (int)v29 + (int)v39 < (int)&v26->field_0 + 1 ) /*0x656114*/
      v32 = (IUnknown *)((char *)v26 - (char *)v29 + 2); /*0x65611b*/
    result = GroundHeight; /*0x65611d*/
    v33 = (int)v32; /*0x656121*/
  }
  *(_DWORD *)v24 = v27; /*0x65612d*/
  *(_DWORD *)(v24 + 4) = v29; /*0x65612f*/
  *(_DWORD *)(v24 + 8) = result; /*0x656132*/
  *(_DWORD *)(v24 + 12) = v33; /*0x656135*/
  return (int)result; /*0x656138*/
}

// 0x656150
int FogOfWar::RenderCell()
{
{
  int result; // eax
  int BuildingAnimByName; // ebx

  int v2 = this->q487; /*0x65615f*/
  int v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 128))(v2); /*0x65616f*/
  __int64 v4 = v3 * (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 124))(v2); /*0x65617b*/
  char * v5 = *(char **)(this + 4724); /*0x65617f*/
  HIDWORD(v4) = (((BYTE4(v4) & 7) + (int)v4) >> 3) + 1; /*0x65618f*/
  memset(v5, 0, 4 * (HIDWORD(v4) >> 2)); /*0x656194*/
  char * v6 = &v5[4 * (HIDWORD(v4) >> 2)]; /*0x656194*/
  unsigned int v7 = BYTE4(v4) & 3; /*0x656198*/
  int v8 = 0; /*0x65619b*/
  memset(v6, 0, v7); /*0x65619d*/
  int v23 = 0; /*0x65619f*/
  do /*0x6562b5*/
  {
    int v9 = v8 + **(_DWORD **)(this + 4696); /*0x6561ab*/
    int v10 = *(_DWORD *)(v9 + 16); /*0x6561ad*/
    result = *(_DWORD *)(v9 + 4); /*0x6561b0*/
    if ( v10 > 0 ) /*0x6561b5*/
    {
      _DWORD * v12 = (_DWORD *)(result + 4); /*0x6561bb*/
      int v22 = v10; /*0x6561be*/
      do /*0x65629e*/
      {
        _DWORD * v13 = (_DWORD *)*(v12 - 1); /*0x6561c8*/
  int v14; // edx
        v14 = *v12 /*0x6561d8*/
            + v12[1] * (*(int (__thiscall **)(_DWORD))(*this->q487 + 124))(this->q487);
        int v15 = 1 << (v14 & 7); /*0x6561e2*/
        _BYTE * v16 = (_BYTE *)(*(_DWORD *)(this + 4724) + (v14 >> 3)); /*0x6561ed*/
        if ( (*v16 & (unsigned __int8)v15) == 0 ) /*0x6561f3*/
        {
          *v16 |= v15; /*0x6561fb*/
          BuildingAnimByName = *((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(v13[135] + 90196)); /*0x656211*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v13 + 196))(v13) ) /*0x656216*/
          {
            if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) ) /*0x656226*/
              BuildingAnimByName = *((_DWORD *)BuildingTypeClass_AnimTable /*0x656248*/
                                   + *(_DWORD *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 208))(v13, 0) + 90196));
            else
              BuildingAnimByName = FindBuildingAnimByName(g_INI_Key_LightGrey, 1); /*0x65625c*/
          }
          int v18 = *(_DWORD *)(BuildingAnimByName + 816); /*0x65625e*/
          int v19 = *(_DWORD *)(BuildingAnimByName + 780); /*0x656264*/
          int v20 = *(_DWORD *)(v19 + 372); /*0x65626d*/
          if ( *(_DWORD *)(v19 + 4) == 1 ) /*0x656276*/
            int v21 = *(unsigned __int8 *)(v20 + v18); /*0x65627a*/
          else
            v21 = *(unsigned __int16 *)(v20 + 2 * v18); /*0x656281*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, int))(*this->q487 + 36))( /*0x65628f*/
            this->q487,
            v12,
            v21);
        }
        v12 += 4; /*0x656296*/
        result = --v22; /*0x656299*/
      }
      while ( v22 ); /*0x65629e*/
      v8 = v23; /*0x6562a4*/
    }
    v8 += 24; /*0x6562a8*/
    v23 = v8; /*0x6562b1*/
  }
  while ( v8 < 6144 ); /*0x6562b5*/
  return result; /*0x6562bb*/
}

// 0x6562D0
AbstractClass * * FogOfWar::RevealCell(IUnknown * aP1)
{
{

  if ( aP1->field_0 >= 0 /*0x656310*/
    && aP1->field_0 < (*(int (__thiscall **)(_DWORD))(*this->q487 + 124))(this->q487)
    && aP1->field_4 >= 0
    && aP1->field_4 < (*(int (__thiscall **)(_DWORD))(*this->q487 + 128))(this->q487) )
  {
  int v3; // edx
    v3 = aP1->field_0 /*0x656329*/
       + aP1->field_4 * (*(int (__thiscall **)(_DWORD))(*this->q487 + 124))(this->q487);
    int v4 = 1 << (v3 & 7); /*0x656333*/
    _BYTE * v5 = (_BYTE *)(*(_DWORD *)(this + 4724) + (v3 >> 3)); /*0x65633e*/
    if ( (*v5 & (unsigned __int8)v4) == 0 ) /*0x656344*/
    {
      *v5 |= v4; /*0x65634f*/
      int v6 = *(_DWORD *)(this + 4708); /*0x656351*/
      if ( *(_DWORD *)(this + 4716) < v6 /*0x656376*/
        || (*(_BYTE *)(this + 4713) || !v6)
  int v7; // ecx
        && (v7 = *(_DWORD *)(this + 4720), v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 4700) + 8))(this + 4700, v6 + v7, 0) )
      {
        int v8 = *(_DWORD *)(this + 4716); /*0x65637d*/
        int v9 = *(_DWORD *)(this + 4704); /*0x656380*/
        *(_DWORD *)(this + 4716) = v8 + 1; /*0x656386*/
        *(_DWORD *)(v9 + 8 * v8) = aP1->field_0; /*0x65638b*/
        *(_DWORD *)(v9 + 8 * v8 + 4) = aP1->field_4; /*0x656391*/
      }
      *(_BYTE *)(this + 5337) = 1; /*0x656395*/
    }
  }
}

// 0x657CE0
int FogOfWar::Render()
{
{
  int result; // eax
  int i; // [esp+10h] [ebp-24h]
  _DWORD v11[6]; // [esp+14h] [ebp-20h] BYREF

  if ( g_hWnd ) /*0x657cf0*/
  {
    int v7 = (*(int (__thiscall **)(_DWORD))(*this->q487 + 124))(this->q487); /*0x657d4e*/
    result = (*(int (__thiscall **)(_DWORD))(*this->q487 + 128))(this->q487); /*0x657d52*/
    int v8 = 0; /*0x657d58*/
    for ( i = result; v8 < result; ++v8 ) /*0x657d60*/
    {
      int v9 = 0; /*0x657d62*/
      if ( v7 > 0 ) /*0x657d66*/
      {
        do /*0x657d7f*/
        {
          v11[0] = v9; /*0x657d6c*/
          v11[1] = v8; /*0x657d73*/
          FogOfWar::RevealArea((int)this, (RadarClass *)v11); /*0x657d77*/
          ++v9; /*0x657d7c*/
        }
        while ( v9 < v7 ); /*0x657d7f*/
        result = i; /*0x657d81*/
      }
    }
  }
  else
  {
    int * v2 = this->q487; /*0x657cf2*/
    int v3 = *v2; /*0x657d06*/
    int v4 = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD, int))(*this->q488 + 120))(this->q488, v11, 0, 1); /*0x657d0d*/
  _BYTE v12[8]; // [esp+2Ch] [ebp-8h] BYREF
    int v5 = (*(int (__thiscall **)(int *, _BYTE *, _DWORD, int))(*v2 + 120))(v2, v12, this->q488, v4); /*0x657d21*/
    (*(void (__thiscall **)(_DWORD, int))(v3 + 8))(this->q487, v5); /*0x657d2b*/
    return FogOfWar::RenderCell((int)this); /*0x657d30*/
  }
  return result; /*0x657d35*/
}

// 0x5864A0
namespace gamemd {
bool FogOfWar_Get(IUnknown * aP0)
{
{
    int v1;
    int v2;
    unsigned int v3;
    int *v4;
    int *NeighbourContent;
    unsigned int v6;
    short v8;
    short v9;
    IUnknown *aP0a;
    v1 = aP0->field_8 / g_MapRenderState;
    if ( (v1 & 1) != 0 )
  {
    v8 = aP0->field_0 / 256;
    v2 = v1 / 2 + 1;
    HIWORD(aP0) = aP0->field_4 / 256 - v2;
    v3 = (short)(v8 - v2) + (SHIWORD(aP0) << 9);
    if ( v3 >= 0x40000 || (v4 = *(int **)(*(int *)&DataGlobal_87C374[13744] + 4 * v3)) == 0 )
    {
    LOWORD(aP0) = v8 - v2;
    g_Map_GlobalCellIndex = aP0;
    v4 = g_CellClassArray;
    }
    if ( (int)v4[79] <= 0 )
    return 0;
    NeighbourContent = Cell::GetNeighbourContent(v4, 3u);
  }
    else
  {
    v9 = aP0->field_0 / 256;
    HIWORD(aP0a) = aP0->field_4 / 256 - v1 / 2;
    LOWORD(aP0a) = v9 - v1 / 2;
    v6 = (short)aP0a + (SHIWORD(aP0a) << 9);
    if ( v6 >= 0x40000 || (NeighbourContent = *(int **)(*(int *)&DataGlobal_87C374[13744] + 4 * v6)) == 0 )
    {
    g_Map_GlobalCellIndex = aP0a;
    NeighbourContent = g_CellClassArray;
    }
  }
    return (int)NeighbourContent[79] > 0;
}
}
} // namespace gamemd
