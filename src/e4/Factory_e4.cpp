// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ObjectPlacement_e4.hpp"  // G57w10 D supply

// 0x663D60
namespace gamemd {
int Factory::GetLinkedIndex(int aP1)
{
  int result; // eax
  void *v3; // edx
  char **v4; // esi
  char **i; // ecx

  if ( aP1 == -1 ) /*0x663d68*/
  {
    IDA_LOBYTE(result) = -1; /*0x663d6a*/
  }
  else
  {
    v3 = this->field_10; /*0x663d70*/
    result = 0; /*0x663d73*/
    if ( (int)v3 <= 0 ) /*0x663d79*/
      goto LABEL_9; /*0x663d79*/
    v4 = (char **)this->field_4; /*0x663d7b*/
    for ( i = v4; aP1 != **i; ++i ) /*0x663d7e*/
    {
      if ( ++result >= (int)v3 ) /*0x663d8f*/
      {
        IDA_LOBYTE(result) = -1; /*0x663d93*/
        return result; /*0x663d96*/
      }
    }
    result = (int)v4[result]; /*0x663d99*/
    IDA_LOBYTE(result) = *(_BYTE *)(result + 40); /*0x663d9c*/
    if ( !(_BYTE)result ) /*0x663da1*/
  LABEL_9:
      IDA_LOBYTE(result) = -1; /*0x663da3*/
  }
  return result; /*0x663d6c*/
}
}
// 0x718B70
namespace gamemd {
void* Factory_CalculateExitCell(Factory *aP0, void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
  _DWORD *v6; // ecx
  int *v8; // edi
  _DWORD *v9; // ecx
  int v11; // ecx
  int *v12; // edx
  signed int v13; // ebp
  int v14; // ecx
  int v15; // kr20_4
  int v16; // ecx
  int v17; // kr24_4
  int v18; // edx
  int v19; // edx
  _DWORD *v20; // ebp
  CellClass *v21; // eax
  CellClass *v22; // eax
  int *v23; // eax
  int *v24; // edx
  int v25; // ebx
  void *v26; // eax
  CellClass *v27; // eax
  _DWORD *v28; // ecx
  _BYTE *v29; // ebx
  int v30; // ebp
  _DWORD *v31; // eax
  int v32; // ecx
  _DWORD *v33; // eax
  CellClass *v34; // eax
  int v35; // ecx
  int v36; // ebx
  int v37; // eax
  void *v38; // eax
  ObjectPlacement *v39; // eax
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
  char v59; // [esp+0h] [ebp-84h]
  _DWORD *v60; // [esp+18h] [ebp-6Ch]
  char v61; // [esp+1Ch] [ebp-68h]
  char v65; // [esp+38h] [ebp-4Ch]
  __int16 v66[2]; // [esp+3Ch] [ebp-48h] BYREF
  char v67[4]; // [esp+40h] [ebp-44h] BYREF
  int v68; // [esp+44h] [ebp-40h] BYREF
  char v69; // [esp+48h] [ebp-3Ch]
  unsigned __int16 v70; // [esp+4Ah] [ebp-3Ah]
  __int16 v71[2]; // [esp+4Ch] [ebp-38h] BYREF
  int v72; // [esp+50h] [ebp-34h] BYREF
  _DWORD v73[2]; // [esp+54h] [ebp-30h] BYREF
  void *v74; // [esp+5Ch] [ebp-28h] BYREF
  int v75; // [esp+60h] [ebp-24h] BYREF
  int v76; // [esp+64h] [ebp-20h] BYREF
  int v77; // [esp+68h] [ebp-1Ch]
  int v78; // [esp+6Ch] [ebp-18h] BYREF
  int v79; // [esp+70h] [ebp-14h] BYREF
  int v80; // [esp+74h] [ebp-10h] BYREF
  int v81[3]; // [esp+78h] [ebp-Ch] BYREF

  v6 = v6; /*0x718b74*/
  v8 = v6 + 10; /*0x718b80*/
  if ( v6[10] == g_BuildingLoadQueue_Array.BuildLimit /*0x718b9d*/
    && v6[11] == g_BuildingLoadQueue_Array.Category[0]
    && v6[12] == g_BuildingLoadQueue_Array.unknown_3C0[0] )
  {
    v9 = (_DWORD *)v6[3]; /*0x718ba7*/
    v75 = v9[39]; /*0x718bb6*/
    v76 = v9[40]; /*0x718bbd*/
    v77 = v9[41]; /*0x718bc4*/
    (*(void (__stdcall **)(int *))(*v9 + 244))(&v75); /*0x718bcf*/
  }
  else
  {
    (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)v6[3] + 244))(v6 + 10); /*0x718ba5*/
  }
  v73[0] = *(_DWORD *)this->__pad_0; /*0x718bdf*/
  v11 = *(_DWORD *)this->__pad_0; /*0x718be3*/
  v73[1] = this->field_4; /*0x718be8*/
  v74 = this->field_8; /*0x718bef*/
  if ( v11 == g_BuildingLoadQueue_Array.BuildLimit /*0x718c13*/
    && this->field_4 == (void *)g_BuildingLoadQueue_Array.Category[0]
    && this->field_8 == (void *)g_BuildingLoadQueue_Array.unknown_3C0[0] )
  {
    *v8 = *(_DWORD *)this->__pad_0; /*0x71923b*/
    v6[11] = this->field_4; /*0x719240*/
    v6[12] = this->field_8; /*0x719246*/
  }
  else
  {
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v73)->flags[0] & 0x100) == 0 /*0x718c6e*/
      || (v12 = (int *)(v6[3] + 156),
          v75 = *v12,
          v76 = v12[1],
          v13 = v12[2],
          v65 = 1,
          v13 <= (int)(3 * g_BuildingLoadQueue_Array.Dock[4] + Cell::GetGroundHeight(v73))) )
    {
      v65 = 0; /*0x718c70*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[3] + 44))(v6[3]) == 15 ) /*0x718c80*/
    {
      v14 = v6[3]; /*0x718c86*/
      IDA_LOBYTE(this) = 0; /*0x718c89*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 512))(v14, a3, a2) ) /*0x718c90*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v6[3] + 492))(v6[3]); /*0x718c9f*/
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[3] + 388))(v6[3]) == 8 /*0x718ce3*/
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[3] + 388))(v6[3]) == 9
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[3] + 388))(v6[3]) == 7
        || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[3] + 388))(v6[3]) == 25 )
      {
        *(_DWORD *)v71 = *(_DWORD *)(v6[3] + 1444); /*0x718cf4*/
        if ( *(_DWORD *)v71 ) /*0x718cf8*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v71->fallRate)(*(_DWORD *)v71) == 1 ) /*0x718d02*/
          {
            v15 = *(_DWORD *)this->__pad_0; /*0x718d13*/
            v70 = (int)this->field_4 / 256; /*0x718d28*/
            if ( *(_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)v71 + 440))(*(_DWORD *)v71, v73) == IDA___PAIR32__(v70, v15 / 256) ) /*0x718d3c*/
              IDA_LOBYTE(a5) = 1; /*0x718d49*/
          }
        }
        v16 = *(_DWORD *)(v6[3] + 1444); /*0x718d51*/
        *(_DWORD *)v71 = v16; /*0x718d59*/
        if ( v16 ) /*0x718d5d*/
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 44))(v16) == 2 ) /*0x718d67*/
          {
            v17 = *(_DWORD *)this->__pad_0; /*0x718d78*/
            v18 = **(_DWORD **)v71; /*0x718d86*/
            v70 = (int)this->field_4 / 256; /*0x718d8b*/
            if ( *(_DWORD *)(*(int (__stdcall **)(_DWORD *))(v18 + 440))(v73) == IDA___PAIR32__(v70, v17 / 256) ) /*0x718da1*/
              IDA_LOBYTE(a5) = 1; /*0x718dae*/
          }
        }
        v19 = v6[3]; /*0x718db3*/
        v20 = *(_DWORD **)(v19 + 1444); /*0x718db6*/
        if ( v20 ) /*0x718dbe*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v20 + 44))(*(_DWORD *)(v19 + 1444)) == 6 ) /*0x718dcb*/
          {
            v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], this); /*0x718dd3*/
            if ( Cell::IsBridge((Cell *)v21) == v20 ) /*0x718de1*/
              IDA_LOBYTE(a5) = 1; /*0x718de3*/
          }
        }
      }
      v77 = *v8; /*0x718dee*/
      v78 = v6[11]; /*0x718dfa*/
      a5 = a5; /*0x718e05*/
      v79 = v6[12]; /*0x718e06*/
      v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v74); /*0x718e1e*/
      v23 = ObjectPlacement::CalcPosition((ObjectPlacement *)v22, &v80, &v74, a5, v67[0], 0); /*0x718e25*/
      *v8 = *v23; /*0x718e32*/
      v6[11] = v23[1]; /*0x718e3b*/
      v6[12] = v23[2]; /*0x718e41*/
      IDA_LOWORD(v68) = *v8 / 256; /*0x718e52*/
      v24 = (int *)v6[3]; /*0x718e63*/
      IDA_HIWORD(v68) = v6[11] / 256; /*0x718e69*/
      *(_DWORD *)v71 = v68; /*0x718e76*/
      v25 = *v24; /*0x718e7a*/
      v26 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v71); /*0x718e82*/
      if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD))(v25 + 428))(v6[3], v26, -1, -1, 0) ) /*0x718e8b*/
      {
        *v8 = g_BuildingLoadQueue_Array.BuildLimit; /*0x718e9d*/
        v6[11] = g_BuildingLoadQueue_Array.Category[0]; /*0x718ea4*/
        v6[12] = g_BuildingLoadQueue_Array.unknown_3C0[0]; /*0x718ead*/
      }
      v27 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v76); /*0x718eba*/
      (*(void (__thiscall **)(CellClass *, int *))(v27->mapCoords[0] + 72))(v27, &v79); /*0x718ec8*/
      if ( *v8 == g_BuildingLoadQueue_Array.BuildLimit /*0x718ef5*/
        && v6[11] == g_BuildingLoadQueue_Array.Category[0]
        && v6[12] == g_BuildingLoadQueue_Array.unknown_3C0[0] )
      {
        v28 = (_DWORD *)v6[3]; /*0x718efb*/
        v29 = (_BYTE *)v28[361]; /*0x718efe*/
        if ( v29 ) /*0x718f06*/
        {
          if ( (v29[20] & 2) != 0 ) /*0x718f10*/
          {
            v30 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v28 + 132))(v28) + 1460); /*0x718f1e*/
            v31 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)v29 + 76))(v29, &v78, 0); /*0x718f2f*/
            *(_WORD *)v67 = *v31 / 256; /*0x718f45*/
            v32 = v6[3]; /*0x718f54*/
            *(_WORD *)&v67[2] = v31[1] / 256; /*0x718f5c*/
            v68 = *(_DWORD *)v67; /*0x718f65*/
            v33 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v32 + 76))(v32, &v78, 0); /*0x718f70*/
            v34 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v33); /*0x718f79*/
            v35 = v6[3]; /*0x718f7e*/
            *(_DWORD *)v71 = v34; /*0x718f81*/
            v69 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v35 + 188))(v35, 0); /*0x718f8e*/
            memset(v67, 0, sizeof(v67)); /*0x718fae*/
            v36 = v6[3]; /*0x718fb8*/
            v59 = IDA_BYTE1(*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v68) + 80)) /*0x718fdd*/
                & 1;
            TileIndex = MapClass::GetTileIndex( /*0x718fee*/
                          (MapClass *)&stru_87F5F0.__pad_58[416],
                          (__int16 *)(v71->objectTypeFlags,
                          v30,
                          v69);
            v37 = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 132))(v36); /*0x718ff1*/
            *(_DWORD *)v66 = *LayerClass::Pathfinding_Find( /*0x71901b*/
                                (Type *)&stru_87F5F0.__pad_58[416],
                                (int)&v72,
                                &v72,
                                (__int16 *)&v68,
                                *(_DWORD *)(v37 + 1660),
                                TileIndex,
                                v30,
                                v59,
                                1,
                                1,
                                0,
                                1,
                                0,
                                1,
                                (__int16 *)v67,
                                0,
                                0);
            if ( *(_DWORD *)v66 != g_BuildingLoadQueue_Array.unknown_int_398 ) /*0x71901f*/
            {
              v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x71903d*/
              v61 = (char)this; /*0x71904f*/
              v60 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v38 + 72))(v38, &v78); /*0x71905a*/
              v39 = (ObjectPlacement *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v66); /*0x71906a*/
              v40 = ObjectPlacement::CalcPosition(v39, v81, v60, v61, v65, 0); /*0x719071*/
              *v8 = *v40; /*0x71907a*/
              v6[11] = v40[1]; /*0x71907f*/
              v6[12] = v40[2]; /*0x719085*/
            }
          }
        }
      }
    }
    else
    {
      v41 = (_BYTE *)v6[3]; /*0x71908d*/
      if ( v41[636] ) /*0x719090*/
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v41 + 240))(v41, v6 + 10); /*0x71909d*/
      }
      else
      {
        v42 = *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v41 + 132))(v41) + 1460); /*0x7190b0*/
        v43 = *(_DWORD *)this->__pad_0 / 256; /*0x7190cf*/
        v44 = (int)this->field_4 / 256; /*0x7190d2*/
        IDA_LOWORD(this) = v43; /*0x7190dc*/
        IDA_HIWORD(this) = v44; /*0x7190e1*/
        if ( IDA___PAIR32__(v44, v43) != g_BuildingLoadQueue_Array.unknown_int_398 ) /*0x7190ee*/
        {
          v45 = *(_DWORD *)v6[3]; /*0x719106*/
          v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x719114*/
          if ( (*(int (__thiscall **)(_DWORD, void *, int, int, _DWORD, int))(v45 + 428))(v6[3], v46, -1, -1, 0, 1) ) /*0x71911d*/
          {
            v47 = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&this, v42, v65); /*0x719137*/
            v48 = v6[3]; /*0x71913e*/
            v68 = 0; /*0x719142*/
            v47 = v47; /*0x719163*/
            v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 132))(v48); /*0x719166*/
            this = (Factory *)*LayerClass::Pathfinding_Find( /*0x71918c*/
                                 (Type *)&stru_87F5F0.__pad_58[416],
                                 (int)&this,
                                 &v72,
                                 (__int16 *)&this,
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
        if ( this != (Factory *)g_BuildingLoadQueue_Array.unknown_int_398 ) /*0x71919c*/
        {
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v6[3] + 244))(v6[3], v6 + 10); /*0x7191b5*/
          v50 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&this); /*0x7191c5*/
          v51 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v50 + 72))(v50, v81); /*0x7191d6*/
          v52 = (__int16)(v51[1] / 256) << 8; /*0x71920c*/
          *v8 = ((__int16)(*v51 / 256) << 8) + 128; /*0x71920f*/
          v6[11] = v52 + 128; /*0x71921b*/
          v6[12] = 0; /*0x71921e*/
          GroundHeight = Cell::GetGroundHeight(v6 + 10); /*0x719221*/
          v54 = v6[3]; /*0x719226*/
          v6[12] = GroundHeight; /*0x719229*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v54 + 240))(v54, v6 + 10); /*0x71922f*/
        }
      }
    }
  }
  if ( *v8 == g_BuildingLoadQueue_Array.BuildLimit /*0x71926e*/
    && v6[11] == g_BuildingLoadQueue_Array.Category[0]
    && v6[12] == g_BuildingLoadQueue_Array.unknown_3C0[0] )
  {
    v56 = (_DWORD *)v6[3]; /*0x719286*/
    v75 = v56[39]; /*0x719295*/
    v76 = v56[40]; /*0x71929c*/
    v77 = v56[41]; /*0x7192a3*/
    (*(void (__thiscall **)(_DWORD *, int *))(*v56 + 240))(v56, &v75); /*0x7192ae*/
    return 0; /*0x7192b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v6[3] + 240))(v6[3], v6 + 10); /*0x719276*/
    return 1; /*0x71927d*/
  }
}
}
// 0x523C90
namespace gamemd {
int Factory::FindExitCellByName()
{
  int v2; // esi

  if ( !_strcmpi(this->__pad_0, g_Str__none_) ) /*0x523c9a*/
    return -1; /*0x523c9a*/
  if ( !_strcmpi(this->__pad_0, g_Str_none) ) /*0x523cac*/
    return -1; /*0x523cac*/
  v2 = 0; /*0x523cbd*/
  if ( dword_A8E358 <= 0 ) /*0x523cc1*/
    return -1; /*0x523ce6*/
  while ( _strcmpi((char *)(*((_DWORD *)dword_A8E34C + v2) + 36), this->__pad_0) ) /*0x523cda*/
  {
    if ( ++v2 >= dword_A8E358 ) /*0x523ce4*/
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
