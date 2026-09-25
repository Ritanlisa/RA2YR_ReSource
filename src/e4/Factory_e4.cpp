// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FactoryClass_e4.hpp"

// 0x663D60
namespace gamemd {
int Factory::GetLinkedIndex(DynamicVector * aP1)
{
  char result; // al
  int v3; // edx
  int v4; // eax
  char **v5; // esi

  if ( aP1 == -1 ) /*0x663d68*/
    return -1; /*0x663d6a*/
  v3 = this->q010; /*0x663d70*/
  v4 = 0; /*0x663d73*/
  if ( v3 <= 0 ) /*0x663d79*/
    return -1; /*0x663d79*/
  v5 = (char **)this->q004; /*0x663d7b*/
  for ( v5 = v5; aP1 != **v5; ++v5 ) /*0x663d7e*/
  {
    if ( ++v4 >= v3 ) /*0x663d8f*/
      return -1; /*0x663d96*/
  }
  result = v5[v4][40]; /*0x663d9c*/
  if (!result, unsigned int a1) /*0x663da1*/
    return -1; /*0x663da3*/
  return result; /*0x663d6c*/
}
}
// 0x718B70
namespace gamemd {
void* Factory_CalculateExitCell()
{
  int *v7; // edi
  _DWORD *v8; // ecx
  int v10; // ecx
  int *v11; // edx
  int v12; // ebp
  int v13; // ecx
  int v14; // kr20_4
  __int16 *v15; // ecx
  int v16; // kr24_4
  int v17; // edx
  int v18; // edx
  _DWORD *v19; // ebp
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  int *v22; // eax
  int *v23; // edx
  int v24; // ebx
  void *v25; // eax
  void *v26; // eax
  _DWORD *v27; // ecx
  _BYTE *v28; // ebx
  int v29; // ebp
  _DWORD *v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  __int16 *v33; // eax
  int v34; // ecx
  int v35; // ebx
  int v36; // ecx
  int v37; // eax
  void *v38; // eax
  _DWORD *v39; // eax
  int *v40; // eax
  _BYTE *v41; // ecx
  int v42; // ebp
  int v43; // ecx
  int v44; // eax
  int v45; // ebx
  void *v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  void *v50; // eax
  _DWORD *v51; // ebp
  int v52; // eax
  int GroundHeight; // eax
  int v54; // ecx
  _DWORD *v56; // ecx
  int TileIndex; // [esp-8h] [ebp-8Ch]
  _DWORD *v60; // [esp+18h] [ebp-6Ch]
  char v61; // [esp+1Ch] [ebp-68h]
  int v65; // [esp+38h] [ebp-4Ch]
  int v66; // [esp+3Ch] [ebp-48h] BYREF
  __int16 *v67; // [esp+40h] [ebp-44h] BYREF
  __int16 *v68; // [esp+44h] [ebp-40h] BYREF
  char v69; // [esp+48h] [ebp-3Ch]
  unsigned __int16 v70; // [esp+4Ah] [ebp-3Ah]
  __int16 *v71; // [esp+4Ch] [ebp-38h] BYREF
  int v72; // [esp+50h] [ebp-34h] BYREF
  _DWORD v73[2]; // [esp+54h] [ebp-30h] BYREF
  int v74; // [esp+5Ch] [ebp-28h] BYREF
  int v75; // [esp+60h] [ebp-24h] BYREF
  int v76; // [esp+64h] [ebp-20h] BYREF
  int v77; // [esp+68h] [ebp-1Ch]
  int v78; // [esp+6Ch] [ebp-18h] BYREF
  int v79; // [esp+70h] [ebp-14h] BYREF
  int v80; // [esp+74h] [ebp-10h] BYREF
  int v81[3]; // [esp+78h] [ebp-Ch] BYREF

  v7 = a1 + 10; /*0x718b80*/
  if ( a1[10] == dword_B0EBF8 && a1[11] == dword_B0EBFC && a1[12] == dword_B0EC00 ) /*0x718b9d*/
  {
    v8 = (_DWORD *)a1[3]; /*0x718ba7*/
    v75 = v8[39]; /*0x718bb6*/
    v76 = v8[40]; /*0x718bbd*/
    v77 = v8[41]; /*0x718bc4*/
    (*(void (__stdcall **, unsigned int a1)(int *))(*v8 + 244))(&v75); /*0x718bcf*/
  }
  else
  {
    (*(void (__stdcall **, unsigned int a4, unsigned int a1)(_DWORD *))(*(_DWORD *)a1[3] + 244))(a1 + 10); /*0x718ba5*/
  }
  a4 = a4; /*0x718bd6*/
  v73[0] = *a4; /*0x718bdf*/
  v10 = *a4; /*0x718be3*/
  v73[1] = a4[1]; /*0x718be8*/
  v74 = a4[2]; /*0x718bef*/
  if ( v10 == dword_B0EBF8 && a4[1] == dword_B0EBFC && a4[2] == dword_B0EC00 ) /*0x718c13*/
  {
    *v7 = *a4; /*0x71923b*/
    a1[11] = a4[1]; /*0x719240*/
    a1[12] = a4[2]; /*0x719246*/
  }
  else
  {
    if ( (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, v73) + 80) & 0x100) == 0 /*0x718c6e*/
      || (v11 = (int *)(a1[3] + 156),
          v75 = *v11,
          v76 = v11[1],
          v12 = v11[2],
          IDA_LOBYTE(v65) = 1,
          v12 <= 3 * dword_B0EC38 + Cell::GetGroundHeight(v73)) )
    {
      IDA_LOBYTE(v65, unsigned int a1, unsigned int a4, unsigned int a2, unsigned int a3) = 0; /*0x718c70*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 44))(a1[3]) == 15 ) /*0x718c80*/
    {
      v13 = a1[3]; /*0x718c86*/
      IDA_LOBYTE(a4) = 0; /*0x718c89*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 512))(v13, a3, a2) ) /*0x718c90*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 492))(a1[3]); /*0x718c9f*/
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 8 /*0x718ce3*/
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 9
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 7
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[3] + 388))(a1[3]) == 25 )
      {
        v71 = *(__int16 **)(a1[3] + 1444); /*0x718cf4*/
        if ( v71 ) /*0x718cf8*/
        {
          if ( (*(int (__thiscall **)(__int16 *))(v71->u32_2C)(v71) == 1 ) /*0x718d02*/
          {
            v14 = *a4; /*0x718d13*/
            v70 = a4[1] / 256; /*0x718d28*/
            if ( *(_DWORD *)(*(int (__thiscall **)(__int16 *, _DWORD *))(v71->u32_1B8)(v71, v73) == IDA___PAIR32__(v70, v14 / 256) ) /*0x718d3c*/
              a6 = 1; /*0x718d49*/
          }
        }
        v15 = *(__int16 **)(a1[3] + 1444); /*0x718d51*/
        v71 = v15; /*0x718d59*/
        if ( v15 ) /*0x718d5d*/
        {
          if ( (*(int (__thiscall **)(__int16 *))(*(_DWORD *)v15 + 44))(v15) == 2 ) /*0x718d67*/
          {
            v16 = *a4; /*0x718d78*/
            v17 = *(_DWORD *)v71; /*0x718d86*/
            v70 = a4[1] / 256; /*0x718d8b*/
            if ( *(_DWORD *)(*(int (__stdcall **)(_DWORD *))(v17 + 440))(v73) == IDA___PAIR32__(v70, v16 / 256) ) /*0x718da1*/
              a6 = 1; /*0x718dae*/
          }
        }
        v18 = a1[3]; /*0x718db3*/
        v19 = *(_DWORD **)(v18 + 1444); /*0x718db6*/
        if ( v19 ) /*0x718dbe*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v19 + 44))(*(_DWORD *)(v18 + 1444)) == 6 ) /*0x718dcb*/
          {
            v20 = Coord::To_Cell(&MapClass_Instance, a4); /*0x718dd3*/
            if ( Cell::IsBridge(v20) == v19 ) /*0x718de1*/
              a6 = 1; /*0x718de3*/
          }
        }
      }
      v77 = *v7; /*0x718dee*/
      v78 = a1[11]; /*0x718dfa*/
      a6 = a6; /*0x718e05*/
      v79 = a1[12]; /*0x718e06*/
      v21 = Coord::To_Cell(&MapClass_Instance, &v74); /*0x718e1e*/
      v22 = ObjectPlacement::CalcPosition(v21, &v80, &v74, a6, (char)v67, 0); /*0x718e25*/
      *v7 = *v22; /*0x718e32*/
      a1[11] = v22[1]; /*0x718e3b*/
      a1[12] = v22[2]; /*0x718e41*/
      IDA_LOWORD(v68) = *v7 / 256; /*0x718e52*/
      v23 = (int *)a1[3]; /*0x718e63*/
      IDA_HIWORD(v68) = a1[11] / 256; /*0x718e69*/
      v71 = v68; /*0x718e76*/
      v24 = *v23; /*0x718e7a*/
      v25 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v71); /*0x718e82*/
      if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD))(v24 + 428))(a1[3], v25, -1, -1, 0) ) /*0x718e8b*/
      {
        *v7 = dword_B0EBF8; /*0x718e9d*/
        a1[11] = dword_B0EBFC; /*0x718ea4*/
        a1[12] = dword_B0EC00; /*0x718ead*/
      }
      v26 = Coord::To_Cell(&MapClass_Instance, &v76); /*0x718eba*/
      (*(void (__thiscall **)(void *, int *))(*(_DWORD *)v26 + 72))(v26, &v79); /*0x718ec8*/
      if ( *v7 == dword_B0EBF8 && a1[11] == dword_B0EBFC && a1[12] == dword_B0EC00 ) /*0x718ef5*/
      {
        v27 = (_DWORD *)a1[3]; /*0x718efb*/
        v28 = (_BYTE *)v27[361]; /*0x718efe*/
        if ( v28 ) /*0x718f06*/
        {
          if ( (v28[20] & 2) != 0 ) /*0x718f10*/
          {
            v29 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v27 + 132))(v27) + 1460); /*0x718f1e*/
            v30 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v28 + 76))(v28, &v78, 0); /*0x718f2f*/
            IDA_LOWORD(v67) = *v30 / 256; /*0x718f45*/
            v31 = a1[3]; /*0x718f54*/
            IDA_HIWORD(v67) = v30[1] / 256; /*0x718f5c*/
            v68 = v67; /*0x718f65*/
            v32 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v31 + 76))(v31, &v78, 0); /*0x718f70*/
            v33 = (__int16 *)Coord::To_Cell(&MapClass_Instance, v32); /*0x718f79*/
            v34 = a1[3]; /*0x718f7e*/
            v71 = v33; /*0x718f81*/
            v69 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v34 + 188))(v34, 0); /*0x718f8e*/
            v67 = 0; /*0x718fae*/
            v35 = a1[3]; /*0x718fb8*/
            v36 = *((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v68) + 80) >> 8; /*0x718fd4*/
            IDA_LOBYTE(v36) = v36 & 1; /*0x718fd7*/
            v36 = v36; /*0x718fdd*/
            TileIndex = MapClass::GetTileIndex(&MapClass_Instance, v71 + 18, v29, v69); /*0x718fee*/
            v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v35 + 132))(v35); /*0x718ff1*/
            v66 = *LayerClass::Pathfinding_Find( /*0x71901b*/
                     &MapClass_Instance,
                     (int)&v72,
                     &v72,
                     (__int16 *)&v68,
                     *(_DWORD *)(v37 + 1660),
                     TileIndex,
                     v29,
                     v36,
                     1,
                     1,
                     0,
                     1,
                     0,
                     1,
                     (__int16 *)&v67,
                     0,
                     0);
            if ( v66 != dword_B0EBD8 ) /*0x71901f*/
            {
              v38 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v66); /*0x71903d*/
              v61 = (char)a4; /*0x71904f*/
              v60 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v38 + 72))(v38, &v78); /*0x71905a*/
              v39 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v66); /*0x71906a*/
              v40 = ObjectPlacement::CalcPosition(v39, v81, v60, v61, v65, 0); /*0x719071*/
              *v7 = *v40; /*0x71907a*/
              a1[11] = v40[1]; /*0x71907f*/
              a1[12] = v40[2]; /*0x719085*/
            }
          }
        }
      }
    }
    else
    {
      v41 = (_BYTE *)a1[3]; /*0x71908d*/
      if ( v41[636] ) /*0x719090*/
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v41 + 240))(v41, a1 + 10); /*0x71909d*/
      }
      else
      {
        v42 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v41 + 132))(v41) + 1460); /*0x7190b0*/
        v43 = *a4 / 256; /*0x7190cf*/
        v44 = a4[1] / 256; /*0x7190d2*/
        IDA_LOWORD(a4) = v43; /*0x7190dc*/
        IDA_HIWORD(a4) = v44; /*0x7190e1*/
        if ( IDA___PAIR32__(v44, v43) != dword_B0EBD8 ) /*0x7190ee*/
        {
          v45 = *(_DWORD *)a1[3]; /*0x719106*/
          v46 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4); /*0x719114*/
          if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v45 + 428))(a1[3], v46, -1, -1, 0, 1) ) /*0x71911d*/
          {
            v47 = MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)&a4, v42, v65); /*0x719137*/
            v48 = a1[3]; /*0x71913e*/
            v68 = 0; /*0x719142*/
            v47 = v47; /*0x719163*/
            v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 132))(v48); /*0x719166*/
            a4 = (int *)*LayerClass::Pathfinding_Find( /*0x71918c*/
                           &MapClass_Instance,
                           (int)&a4,
                           &v72,
                           (__int16 *)&a4,
                           *(_DWORD *)(v49 + 1660),
                           v47,
                           v42,
                           v65,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (__int16 *)&v68,
                           0,
                           0);
          }
        }
        if ( a4 != (int *)dword_B0EBD8 ) /*0x71919c*/
        {
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[3] + 244))(a1[3], a1 + 10); /*0x7191b5*/
          v50 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a4); /*0x7191c5*/
          v51 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v50 + 72))(v50, v81); /*0x7191d6*/
          v52 = (__int16)(v51[1] / 256) << 8; /*0x71920c*/
          *v7 = ((__int16)(*v51 / 256) << 8) + 128; /*0x71920f*/
          a1[11] = v52 + 128; /*0x71921b*/
          a1[12] = 0; /*0x71921e*/
          GroundHeight = Cell::GetGroundHeight(a1 + 10); /*0x719221*/
          v54 = a1[3]; /*0x719226*/
          a1[12] = GroundHeight; /*0x719229*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v54 + 240))(v54, a1 + 10); /*0x71922f*/
        }
      }
    }
  }
  if ( *v7 == dword_B0EBF8 && a1[11] == dword_B0EBFC && a1[12] == dword_B0EC00 ) /*0x71926e*/
  {
    v56 = (_DWORD *)a1[3]; /*0x719286*/
    v75 = v56[39]; /*0x719295*/
    v76 = v56[40]; /*0x71929c*/
    v77 = v56[41]; /*0x7192a3*/
    (*(void (__thiscall **)(_DWORD *, int *))(*v56 + 240))(v56, &v75); /*0x7192ae*/
    return 0; /*0x7192b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)a1[3] + 240))(a1[3], a1 + 10); /*0x719276*/
    return 1; /*0x71927d*/
  }
}
}
// 0x523C90
namespace gamemd {
int Factory::FindExitCellByName()
{
  int v2; // esi

  if ( !_strcmpi(this, g_Str__none_) ) /*0x523c9a*/
    return -1; /*0x523c9a*/
  if ( !_strcmpi(this, g_Str_none) ) /*0x523cac*/
    return -1; /*0x523cac*/
  v2 = 0; /*0x523cbd*/
  if ( g_LoadScreenProgress <= 0 ) /*0x523cc1*/
    return -1; /*0x523ce6*/
  while ( _strcmpi((const void *)(*((_DWORD *)Factory_ExitCellTable + v2) + 36), this) ) /*0x523cda*/
  {
    if ( ++v2 >= g_LoadScreenProgress ) /*0x523ce4*/
      return -1; /*0x523ce4*/
  }
  return v2; /*0x523ce6*/
}
} // namespace gamemd

// 0x731CD0
namespace gamemd {
int Factory::IdleHandler()
{
  return System_Handle(77, 0); /*0x731cde*/
}
} // namespace gamemd
