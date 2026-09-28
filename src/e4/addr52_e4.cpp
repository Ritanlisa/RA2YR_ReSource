// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_520260_e4.hpp"
#include "e4/classes/E4Recv_522100_e4.hpp"
#include "e4/classes/E4Recv_522540_e4.hpp"
#include "e4/classes/E4Recv_524EC0_e4.hpp"
#include "e4/classes/E4Recv_526950_e4.hpp"
#include "e4/classes/E4Recv_528220_e4.hpp"
#include "e4/classes/E4Recv_529E70_e4.hpp"
#include "e4/classes/E4Recv_52A110_e4.hpp"
#include "e4/classes/E4Recv_52A2F0_e4.hpp"
#include "e4/classes/E4Recv_52A4D0_e4.hpp"
#include "e4/classes/E4Recv_52A610_e4.hpp"
#include "e4/classes/E4Recv_52AAF0_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorClass_ptr_CCINIClass_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_541170_e4.hpp"
#include "e4/classes/E4Recv_542F30_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/E4Recv_517110_e4.hpp"
#include "e4/classes/E4Recv_5176D0_e4.hpp"

// 0x522100
namespace gamemd {
int E4Recv_522100::sub_522100()
{
  int (__stdcall ***v2)(_DWORD, void *, int *); // eax
  int v3; // esi
  int v4; // eax
  bool v6; // bl
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  _BYTE v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( !*(_BYTE *)(this->M1728 + 3476) ) /*0x522109*/
    return 0; /*0x522113*/
  v2 = (int (__stdcall ***)(_DWORD, void *, int *))this->M1652; /*0x522119*/
  v7 = 0; /*0x522124*/
  if ( !v2 ) /*0x52212c*/
    goto LABEL_11; /*0x52212c*/
  v3 = (**v2)(v2, &unk_818858, &v8); /*0x52213d*/
  if ( v3 >= 0 ) /*0x522141*/
  {
    v8 = v8; /*0x522150*/
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522158*/
    v4 = v8; /*0x52215d*/
  }
  else
  {
    ComPtr::Release_Alt((ComPtr *)&v7); /*0x522147*/
    v4 = 0; /*0x52214c*/
  }
  v7 = v4; /*0x522161*/
  if ( v3 < 0 && v3 != -2147467262 ) /*0x52216d*/
    WinAPI::Wrapper(v3); /*0x522170*/
  if ( !v4 ) /*0x52217b*/
  LABEL_11:
    WinAPI::Wrapper(-2147467261); /*0x522182*/
  (*(void (__stdcall **)(int, _BYTE *))(*(_DWORD *)v4 + 12))(v4, v9); /*0x522193*/
  v6 = memcmp(v9, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x5221ac*/
  if ( v7 ) /*0x5221b1*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v7 + 8))(v7); /*0x5221b6*/
  return v6; /*0x522115*/
}
}
// 0x523440
namespace gamemd {
void BinaryArraySearch(AbstractClass * aP0, int edx0, int * a2)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  v3 = edx0; /*0x523445*/
  if ( edx0 <= 0 ) /*0x523447*/
    return 0; /*0x523479*/
  v4 = *a2; /*0x52344d*/
  while ( 1 ) /*0x523456*/
  {
    v5 = *(_DWORD *)(aP0 + 8 * (v3 / 2)); /*0x523456*/
    if ( v5 <= v4 ) /*0x52345e*/
      break; /*0x52345e*/
    v3 /= 2; /*0x523460*/
  LABEL_7:
    if ( v3 <= 0 ) /*0x523472*/
      return 0; /*0x523472*/
  }
  if ( v5 != v4 ) /*0x523464*/
  {
    aP0 += 8 * (v3 / 2) + 8; /*0x523466*/
    v3 += -1 - v3 / 2; /*0x52346e*/
    goto LABEL_7; /*0x52346e*/
  }
  return aP0 + 8 * (v3 / 2); /*0x523474*/
}
}
// 0x525430
namespace gamemd {
void * GetINIClassIntList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, void ** a5, void * a6, int a7, short a8, int a9, int a10, int a11)
{
  ObjectClass *i; // eax
  ObjectClass *_751520; // eax
  int _7515C0; // edi
  int v15; // eax
  int v16; // ecx
  void *Items; // eax
  bool v18; // zf
  void *v19; // eax
  int v20; // ecx
  VectorClass v22; // [esp+Ch] [ebp-9Ch] BYREF
  int v23; // [esp+1Ch] [ebp-8Ch]
  int v24; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)edx0, aP1, a2, &g_INI_DefaultBuffer, String, 128) ) /*0x52545c*/
  {
    VectorClass::Construct(&v22, 0, 0); /*0x525471*/
    v24 = 10; /*0x52547a*/
    v23 = 0; /*0x525488*/
    v22.vtable0 = &(void*)(void*)&TypeList_int_vftable; /*0x52548c*/
    for ( i = (ObjectClass *)strtok(String, Str); i; i = (ObjectClass *)strtok(0, Str) ) /*0x52549e*/
    {
      if ( !IDA_LOBYTE(i->AbstractClass) ) /*0x5254a0*/
        break; /*0x5254a2*/
      _751520 = (ObjectClass *)System_Get_751520(i); /*0x5254a6*/
      if ( _751520 ) /*0x5254ad*/
      {
        _7515C0 = System_Get_7515C0(_751520); /*0x5254ba*/
        if ( v23 < v22.Capacity /*0x5254e2*/
          || (v22.IsAllocated || !v22.Capacity)
          && v24 > 0
          && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v22.vtable0 + 2))(
               &v22,
               v24 + v22.Capacity,
               0) )
        {
          v15 = v23++; /*0x5254ed*/
          *((_DWORD *)v22.Items + v15) = _7515C0; /*0x5254f8*/
        }
      }
    }
    IntVector::Copy((IntVector *)a1, &v22); /*0x525514*/
    *(_DWORD *)a1 = &(void*)(void*)&TypeList_int_vftable; /*0x52551e*/
    v16 = v24; /*0x525528*/
    *(_DWORD *)(a1 + 16) = v23; /*0x52552c*/
    Items = v22.Items; /*0x52552f*/
    v18 = v22.Items == 0; /*0x525533*/
    *(_DWORD *)(a1 + 20) = v16; /*0x525535*/
    v22.vtable0 = &(void*)(void*)&VectorClass_int_vftable; /*0x525538*/
    if ( !v18 && v22.IsAllocated ) /*0x525542*/
    {
      RA2_OPDEL(Items); /*0x525545*/
      v22.Items = 0; /*0x52554d*/
    }
    v19 = a6; /*0x525551*/
    v22.IsAllocated = 0; /*0x525558*/
    v22.Capacity = 0; /*0x52555e*/
    a5 = &(void*)(void*)&VectorClass_int_vftable; /*0x525562*/
    if ( a6 && IDA_HIBYTE(a8) ) /*0x525572*/
      goto LABEL_20; /*0x525572*/
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x525587*/
    *(_DWORD *)(a1 + 8) = 0; /*0x52558a*/
    *(_BYTE *)(a1 + 12) = 1; /*0x52558d*/
    *(_BYTE *)(a1 + 13) = 0; /*0x525591*/
    *(_DWORD *)a1 = &(void*)(void*)&VectorClass_int_vftable; /*0x525594*/
    TypeList::Copy((TypeList *)a1, &a5); /*0x525596*/
    *(_DWORD *)a1 = &(void*)(void*)&TypeList_int_vftable; /*0x52559b*/
    a5 = &(void*)(void*)&VectorClass_int_vftable; /*0x5255a1*/
    v20 = a10; /*0x5255af*/
    *(_DWORD *)(a1 + 16) = a9; /*0x5255b6*/
    v19 = a6; /*0x5255b9*/
    v18 = a6 == 0; /*0x5255c0*/
    *(_DWORD *)(a1 + 20) = v20; /*0x5255c2*/
    if ( !v18 && IDA_HIBYTE(a8) ) /*0x5255ce*/
  LABEL_20:
      RA2_OPDEL(v19); /*0x5255d0*/
  }
  return a1; /*0x5255db*/
}
}
// 0x528220
namespace gamemd {
int E4Recv_528220::sub_528220(unsigned char * a2, unsigned char * a3, int a4)
{
  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  _DWORD *vtable2; // esi
  unsigned __int8 *v8; // eax
  int v9; // ecx
  HashTable *v10; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  int *v15; // esi
  unsigned __int8 *v16; // edi
  BombClass *attachedBomb; // eax
  BombClass *v18; // eax
  void **p_vtable1; // esi
  int v21; // esi
  const char *v22; // esi
  _BYTE v23[12]; // [esp+8h] [ebp-Ch] BYREF

  v4 = a2; /*0x528227*/
  if ( a2 ) /*0x52822f*/
  {
    v6 = a3; /*0x528235*/
    if ( a3 ) /*0x52823b*/
    {
      if ( a2 == this->? ) /*0x528248*/
      {
        vtable2 = this->?; /*0x52824e*/
  LABEL_5:
        if ( vtable2 ) /*0x528253*/
        {
          memset(v23, 0, sizeof(v23)); /*0x528259*/
          v8 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, v6, strlen((const char *)v6)); /*0x528277*/
          v9 = vtable2[12]; /*0x52827c*/
          v10 = (HashTable *)(vtable2 + 11); /*0x52827f*/
          a3 = v8; /*0x528284*/
          if ( v9 ) /*0x528288*/
          {
            HashTable_field_0x10 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x52828e*/
            if ( HashTable_field_0x10 && *HashTable_field_0x10 == v8 ) /*0x528297*/
            {
  LABEL_11:
              if ( v10->HashTable_field_0x04 ) /*0x5282b4*/
              {
                v13 = (unsigned __int8 **)v10->HashTable_field_0x10; /*0x5282bf*/
                if ( v13 && *v13 == v8 ) /*0x5282c8*/
                  goto LABEL_16; /*0x5282c8*/
                v14 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282d1*/
                if ( v14 ) /*0x5282d8*/
                {
                  v10->HashTable_field_0x10 = v14; /*0x5282de*/
  LABEL_16:
                  v15 = (int *)(v10->HashTable_field_0x10 + 4); /*0x5282e1*/
                  goto LABEL_29; /*0x5282e7*/
                }
              }
              v15 = (int *)&unk_B78830; /*0x52838b*/
  LABEL_29:
              v21 = *v15; /*0x528390*/
              if ( v21 ) /*0x528394*/
              {
                v22 = *(const char **)(v21 + 16); /*0x528396*/
                if ( v22 ) /*0x52839b*/
                  sscanf(v22, "%x", &a4); /*0x5283a8*/
              }
              return a4; /*0x5283a8*/
            }
            v12 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282a0*/
            if ( v12 ) /*0x5282a7*/
            {
              v10->HashTable_field_0x10 = v12; /*0x5282ad*/
              v8 = a3; /*0x5282b0*/
              goto LABEL_11; /*0x5282b0*/
            }
          }
        }
        return a4; /*0x5283bb*/
      }
      memset(v23, 0, sizeof(v23)); /*0x5282ec*/
      v16 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, a2, strlen((const char *)a2)); /*0x528312*/
      a2 = v16; /*0x528314*/
      if ( this->fallRate ) /*0x528318*/
      {
        attachedBomb = this->attachedBomb; /*0x52831f*/
        if ( !attachedBomb || attachedBomb->AbstractClass != v16 ) /*0x528328*/
        {
          v18 = (BombClass *)SortedArray::BinarySearch((SortedArray *)&this->owningHouseIndex, (int *)&a2); /*0x528331*/
          if ( !v18 ) /*0x528338*/
            goto LABEL_27; /*0x528338*/
          this->attachedBomb = v18; /*0x52833a*/
        }
        a2 = v16; /*0x528341*/
        if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a2) ) /*0x528348*/
          p_vtable1 = &this->attachedBomb->?; /*0x528354*/
        else
          p_vtable1 = (void **)&unk_B7882C; /*0x528359*/
        vtable2 = *p_vtable1; /*0x52835e*/
        if ( vtable2 ) /*0x528362*/
        {
          v6 = a3; /*0x528364*/
          this->? = vtable2; /*0x528368*/
          this->? = v4; /*0x52836b*/
          goto LABEL_5; /*0x528370*/
        }
      }
  LABEL_27:
      this->? = 0; /*0x528375*/
      this->? = 0; /*0x52837c*/
      return a4; /*0x528388*/
    }
  }
  return a4; /*0x528383*/
}
}
// 0x529E70
namespace gamemd {
char ** E4Recv_529E70::sub_529E70(char ** a2, char * Source, char ** a4, char ** a5)
{
  char **v6; // edi
  char *v7; // ebp
  int *vtable2; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  char *v13; // eax
  char *v14; // ecx
  char *v15; // edx
  char *v16; // esi
  unsigned int v17; // kr0C_4
  Checksummer *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  char *v25; // [esp+14h] [ebp-5Ch] BYREF
  KeyValuePair v26[3]; // [esp+18h] [ebp-58h] BYREF
  KeyValuePair v27[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x529e85*/
  a4 = v6; /*0x529e87*/
  v7 = String::GetOrEmpty_Alt((String *)Source); /*0x529e90*/
  Source = &g_INI_DefaultBuffer; /*0x529e98*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x529eb0*/
    goto LABEL_18; /*0x529eb0*/
  if ( v7 == this->? ) /*0x529ebc*/
  {
    vtable2 = (int *)this->?; /*0x529ec2*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x529fab*/
    v18 = (Checksummer *)KeyValuePair::Init(v26, 0); /*0x529fb7*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x529fca*/
    v23 = v19; /*0x529fcf*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x529ff0*/
      || (v24 = v19, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v24)) == 0) )
    {
      this->? = 0; /*0x52a006*/
      this->? = 0; /*0x52a009*/
      goto LABEL_11; /*0x52a00c*/
    }
    v6 = a4; /*0x529ff2*/
    this->? = vtable2; /*0x529ff9*/
    this->? = v7; /*0x529ffc*/
  }
  if ( vtable2 ) /*0x529ec7*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x529ece*/
    v21 = (unsigned __int8 *)a4; /*0x529edb*/
    v10 = (Checksummer *)KeyValuePair::Init(v27, 0); /*0x529ee2*/
    v11 = vtable2 + 11; /*0x529ef5*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x529efb*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x529f02*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x529f1a*/
      if ( v12 ) /*0x529f1e*/
      {
        v13 = *(char **)(v12 + 16); /*0x529f20*/
        if ( v13 ) /*0x529f25*/
          Source = v13; /*0x529f27*/
      }
    }
  }
  LABEL_11:
  if ( !Source /*0x529f5a*/
    || (strncpy(Destination, Source, 0x40u), Destination[63] = 0, String::Trim(Destination), !strlen(Destination)) )
  {
  LABEL_18:
    v14 = *a5; /*0x52a011*/
    v15 = a5[1]; /*0x52a01a*/
    v16 = a5[2]; /*0x52a01d*/
    goto LABEL_19; /*0x52a01d*/
  }
  sscanf(Destination, "%d,%d,%d", &Source, &a5, &v25); /*0x529f88*/
  v14 = Source; /*0x529f8d*/
  v15 = (char *)a5; /*0x529f94*/
  v16 = v25; /*0x529f9b*/
  LABEL_19:
  *a2 = v14; /*0x52a020*/
  a2[1] = v15; /*0x52a028*/
  a2[2] = v16; /*0x52a02b*/
  return a2; /*0x52a02e*/
}
}
// 0x52A110
namespace gamemd {
void * E4Recv_52A110::sub_52A110(float * a2, unsigned char * a3, float a4, float * a5)
{
  unsigned __int8 *v6; // ebx
  float v7; // edx
  int *vtable2; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  int v12; // eax
  char *v13; // eax
  double v15; // st7
  unsigned __int8 *v16; // esi
  float *v17; // ecx
  unsigned __int8 *v18; // [esp-8h] [ebp-78h]
  char *Source; // [esp+10h] [ebp-60h]
  int v20; // [esp+14h] [ebp-5Ch] BYREF
  Checksummer v21; // [esp+18h] [ebp-58h] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  Source = &g_INI_DefaultBuffer; /*0x52a11f*/
  if ( !Destination ) /*0x52a127*/
    goto LABEL_18; /*0x52a127*/
  v6 = a3; /*0x52a12d*/
  if ( *(float *)&a3 == 0.0 ) /*0x52a135*/
    goto LABEL_18; /*0x52a135*/
  v7 = a4; /*0x52a13b*/
  if ( a4 == 0.0 ) /*0x52a141*/
    goto LABEL_18; /*0x52a141*/
  if ( a3 == this->? ) /*0x52a14a*/
  {
    vtable2 = (int *)this->?; /*0x52a150*/
  }
  else
  {
    memset(&v21, 0, 12); /*0x52a256*/
    *(float *)&v16 = COERCE_FLOAT(Checksummer::Add_Buffer(&v21, a3, strlen((const char *)a3))); /*0x52a280*/
    a3 = v16; /*0x52a285*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a3) /*0x52a2a6*/
      || (v20 = (int)v16, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v20)) == 0) )
    {
      this->? = 0; /*0x52a2b9*/
      this->? = 0; /*0x52a2bc*/
      goto LABEL_11; /*0x52a2bf*/
    }
    v7 = a4; /*0x52a2a8*/
    this->? = vtable2; /*0x52a2ac*/
    this->? = v6; /*0x52a2af*/
  }
  if ( vtable2 ) /*0x52a155*/
  {
    v9 = strlen((const char *)IDA_LODWORD(v7)) + 1; /*0x52a15e*/
    v18 = (unsigned __int8 *)IDA_LODWORD(v7); /*0x52a164*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v21.buffer, 0); /*0x52a16a*/
    a4 = COERCE_FLOAT(Checksummer::Add_Buffer(v10, v18, v9 - 1)); /*0x52a176*/
    v11 = vtable2 + 11; /*0x52a17a*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a184*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a199*/
      if ( v12 ) /*0x52a19d*/
      {
        v13 = *(char **)(v12 + 16); /*0x52a19f*/
        if ( v13 ) /*0x52a1a4*/
          Source = v13; /*0x52a1a6*/
      }
    }
  }
  LABEL_11:
  if ( Source ) /*0x52a1b0*/
  {
    strncpy(Destination, Source, 0x40u); /*0x52a1be*/
    Destination[63] = 0; /*0x52a1ca*/
    String::Trim(Destination); /*0x52a1cf*/
    if ( strlen(Destination) ) /*0x52a1d8*/
    {
      sscanf(Destination, "%f,%f,%f", &a4, &a3, &a5); /*0x52a209*/
      *(float *)&v21.crcValue = a4; /*0x52a21f*/
      v21.bytePos = (int)a3; /*0x52a22d*/
      v15 = *(float *)&a5; /*0x52a231*/
      *a2 = a4; /*0x52a238*/
      *(float *)&v21.state = v15; /*0x52a23e*/
      a2[1] = *(float *)&v21.bytePos; /*0x52a242*/
      a2[2] = *(float *)&v21.state; /*0x52a24c*/
      return a2; /*0x52a253*/
    }
  }
  LABEL_18:
  v17 = a5; /*0x52a2c4*/
  *a2 = *a5; /*0x52a2d4*/
  a2[1] = v17[1]; /*0x52a2d9*/
  a2[2] = v17[2]; /*0x52a2e1*/
  return a2; /*0x52a249*/
}
}
// 0x52A2F0
namespace gamemd {
Color * * E4Recv_52A2F0::sub_52A2F0(float * a2, float Source, char ** a4, float * a5)
{
  char **v6; // edi
  char *v7; // ebp
  int *vtable2; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  int v12; // eax
  float v13; // eax
  float v14; // ecx
  float *v15; // edx
  float v16; // esi
  unsigned int v17; // kr0C_4
  Checksummer *v18; // eax
  int v19; // edi
  unsigned __int8 *v21; // [esp-Ch] [ebp-7Ch]
  int v22; // [esp+0h] [ebp-70h] BYREF
  int v23; // [esp+Ch] [ebp-64h] BYREF
  int v24; // [esp+10h] [ebp-60h] BYREF
  float v25; // [esp+14h] [ebp-5Ch] BYREF
  KeyValuePair v26; // [esp+18h] [ebp-58h] BYREF
  float *v27; // [esp+1Ch] [ebp-54h]
  float v28; // [esp+20h] [ebp-50h]
  KeyValuePair v29[3]; // [esp+24h] [ebp-4Ch] BYREF
  char Destination[64]; // [esp+30h] [ebp-40h] BYREF

  v6 = (char **)String::GetOrEmpty_Alt((String *)a4); /*0x52a305*/
  a4 = v6; /*0x52a307*/
  v7 = String::GetOrEmpty_Alt((String *)IDA_LODWORD(Source)); /*0x52a310*/
  Source = COERCE_FLOAT(&g_INI_DefaultBuffer); /*0x52a318*/
  if ( &v22 == (int *)-48 || !v7 || !v6 ) /*0x52a330*/
    goto LABEL_18; /*0x52a330*/
  if ( v7 == this->? ) /*0x52a33c*/
  {
    vtable2 = (int *)this->?; /*0x52a342*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x52a443*/
    v18 = (Checksummer *)KeyValuePair::Init(&v26, 0); /*0x52a44f*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x52a462*/
    v23 = v19; /*0x52a467*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x52a488*/
      || (v24 = v19, (vtable2 = *(int **)SortedArray::FindValue((SortedArray *)&this->owningHouseIndex, &v24)) == 0) )
    {
      this->? = 0; /*0x52a49e*/
      this->? = 0; /*0x52a4a1*/
      goto LABEL_11; /*0x52a4a4*/
    }
    v6 = a4; /*0x52a48a*/
    this->? = vtable2; /*0x52a491*/
    this->? = v7; /*0x52a494*/
  }
  if ( vtable2 ) /*0x52a347*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x52a34e*/
    v21 = (unsigned __int8 *)a4; /*0x52a35b*/
    v10 = (Checksummer *)KeyValuePair::Init(v29, 0); /*0x52a362*/
    v11 = vtable2 + 11; /*0x52a375*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x52a37b*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a382*/
    {
      v12 = *(_DWORD *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a39a*/
      if ( v12 ) /*0x52a39e*/
      {
        v13 = *(float *)(v12 + 16); /*0x52a3a0*/
        if ( v13 != 0.0 ) /*0x52a3a5*/
          Source = v13; /*0x52a3a7*/
      }
    }
  }
  LABEL_11:
  if ( Source == 0.0 /*0x52a3da*/
    || (strncpy(Destination, (const char *)IDA_LODWORD(Source), 0x40u),
        Destination[63] = 0,
        String::Trim(Destination),
        !strlen(Destination)) )
  {
  LABEL_18:
    v14 = *a5; /*0x52a4a9*/
    v15 = (float *)*((_DWORD *)a5 + 1); /*0x52a4b2*/
    v16 = a5[2]; /*0x52a4b5*/
    goto LABEL_19; /*0x52a4b5*/
  }
  sscanf(Destination, "%f,%f,%f", &Source, &a5, &v25); /*0x52a408*/
  *(float *)&v26 = Source; /*0x52a414*/
  v14 = Source; /*0x52a41f*/
  v27 = a5; /*0x52a426*/
  v15 = a5; /*0x52a42e*/
  v28 = v25; /*0x52a432*/
  v16 = v25; /*0x52a436*/
  LABEL_19:
  *a2 = v14; /*0x52a4b8*/
  *((_DWORD *)a2 + 1) = v15; /*0x52a4c0*/
  a2[2] = v16; /*0x52a4c3*/
  return a2; /*0x52a4c6*/
}
}
// 0x52A4D0
namespace gamemd {
ObjectClass * * E4Recv_52A4D0::sub_52A4D0(unsigned char * v14)
{
  int v3; // eax
  size_t v4; // ecx
  unsigned int v5; // edi
  unsigned int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  size_t v10; // eax
  unsigned int *v11; // ecx
  int v12; // ecx
  int v13; // ebp
  int v14; // edi
  int v15; // edx
  unsigned int v17[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !v14 ) /*0x52a4e0*/
    return 0; /*0x52a4e0*/
  memset(v17, 0, sizeof(v17)); /*0x52a4ed*/
  v3 = Checksummer::Add_Buffer(v17, v14, strlen((const char *)v14)); /*0x52a504*/
  v4 = this->nextObject; /*0x52a509*/
  v3 = v3; /*0x52a50c*/
  v3 = v3; /*0x52a510*/
  if ( !v4 ) /*0x52a514*/
    return 0; /*0x52a514*/
  v6 = *(unsigned int **)(&this->nextArrayIndex0); /*0x52a51a*/
  if ( v6 && *v6 == v3 ) /*0x52a523*/
    goto LABEL_9; /*0x52a523*/
  if ( !this->attachedBomb ) /*0x52a525*/
  {
    qsort(*(void **)(&this->uniqueId4), v4, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a536*/
    this->ambientSoundController = 0; /*0x52a53e*/
    this->attachedBomb = 1; /*0x52a541*/
  }
  v7 = this->nextObject; /*0x52a545*/
  v8 = this->fallRate; /*0x52a54d*/
  v17[0] = v3; /*0x52a550*/
  v9 = UI_Find(v8, v7, (int *)v17); /*0x52a554*/
  if ( !v9 ) /*0x52a55b*/
    return 0; /*0x52a5f8*/
  this->ambientSoundController = v9; /*0x52a561*/
  LABEL_9:
  v10 = this->nextObject; /*0x52a564*/
  if ( !v10 ) /*0x52a56a*/
    return unk_B78830; /*0x52a56a*/
  v11 = *(unsigned int **)(&this->nextArrayIndex0); /*0x52a56c*/
  if ( v11 && *v11 == v3 ) /*0x52a575*/
    return this->ambientSoundController->AudioController_field_04; /*0x52a5f3*/
  if ( !this->attachedBomb ) /*0x52a577*/
  {
    qsort(*(void **)(&this->uniqueId4), v10, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a588*/
    this->ambientSoundController = 0; /*0x52a590*/
    this->attachedBomb = 1; /*0x52a593*/
  }
  v12 = this->nextObject; /*0x52a597*/
  v13 = this->fallRate; /*0x52a59a*/
  if ( v12 <= 0 ) /*0x52a59f*/
    return unk_B78830; /*0x52a59f*/
  while ( 1 ) /*0x52a5ac*/
  {
    v14 = *(unsigned int *)(v13 + 8 * (v12 / 2)); /*0x52a5ac*/
    v15 = v13 + 8 * (v12 / 2); /*0x52a5b0*/
    if ( v14 <= v3 ) /*0x52a5b6*/
      break; /*0x52a5b6*/
    v12 /= 2; /*0x52a5b8*/
  LABEL_19:
    if ( v12 <= 0 ) /*0x52a5ca*/
      return unk_B78830; /*0x52a5ca*/
  }
  if ( v14 != v3 ) /*0x52a5bc*/
  {
    v13 = v15 + 8; /*0x52a5be*/
    v12 += -1 - v12 / 2; /*0x52a5c6*/
    goto LABEL_19; /*0x52a5c6*/
  }
  if ( v15 ) /*0x52a5df*/
  {
    this->ambientSoundController = v15; /*0x52a5e1*/
    return this->ambientSoundController->AudioController_field_04; /*0x52a5e1*/
  }
  return unk_B78830; /*0x52a5d2*/
}
}
// 0x52A610
namespace gamemd {
ObjectClass * * E4Recv_52A610::sub_52A610(void * a2)
{
  signed int v3; // eax
  signed int v4; // eax
  _BYTE v6[512]; // [esp+8h] [ebp-200h] BYREF

  v3 = sub_631FC0((ObjectClass *)a2, v6); /*0x52a628*/
  INIClass::ReadBase64Data((unsigned __int8 *)aPublickey, (int)v6, v3); /*0x52a63a*/
  v4 = sub_631FE0((ObjectClass *)a2, v6); /*0x52a646*/
  INIClass::ReadBase64Data((unsigned __int8 *)aPrivatekey, (int)v6, v4); /*0x52a658*/
  return 1; /*0x52a65d*/
}
}
// 0x52B720
namespace gamemd {
int CompareFunc4Int(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b730*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x52BA60
namespace gamemd {
void InitGame()
{
  RulesClass *v3; // eax
  unsigned char *TextBufferEntry; // eax
  IUnknown *v6; // edx
  AbstractClass *v7; // eax
  int i; // edi
  char *esi20; // esi
  ObjectClass *v9; // eax
  IUnknown *v11; // edx
  AbstractClass *v12; // eax
  int j; // edi
  ObjectClass *v13; // eax
  IUnknown *v16; // edx
  AbstractClass *eax23; // eax
  int k; // edi
  ObjectClass *v17; // eax
  ObjectClass *v20; // eax
  char *ecx26; // ecx
  IUnknown *edx30; // edx
  AbstractClass *v27; // eax
  int m; // edi
  ConvertClass *v24; // eax
  ObjectClass *v26; // eax
  IUnknown *v33; // edx
  AbstractClass *eax35; // eax
  int n; // edi
  ConvertClass *v29; // eax
  ObjectClass *v31; // eax
  unsigned int *eax37; // eax
  IUnknown *v40; // edx
  AbstractClass *eax40; // eax
  int ii; // edi
  ConvertClass *v34; // eax
  unsigned char *esi41; // esi
  ObjectClass *v36; // eax
  unsigned int *eax42; // eax
  IUnknown *v47; // edx
  AbstractClass *v48; // eax
  int jj; // edi
  ConvertClass *v39; // eax
  ObjectClass *v41; // eax
  unsigned int *eax47; // eax
  IUnknown *v54; // edx
  AbstractClass *v55; // eax
  int kk; // edi
  ConvertClass *v44; // eax
  unsigned char *GameDirectoryCD; // esi
  ObjectClass *v46; // eax
  ObjectClass *v49; // eax
  wchar_t *v64; // eax
  Tactical *v53; // ecx
  int mm; // esi
  int nn; // esi
  wchar_t *v76; // [esp-10h] [ebp-2F50h]
  wchar_t *StringCSF; // [esp-Ch] [ebp-2F4Ch]
  int v78; // [esp+0h] [ebp-2F40h]
  char v79; // [esp+4h] [ebp-2F3Ch]
  char v80; // [esp+8h] [ebp-2F38h]
  unsigned int v81[2]; // [esp+10h] [ebp-2F30h] BYREF
  unsigned int v90[7]; // [esp+38h] [ebp-2F08h] BYREF
  MultiplayerGameMode aP1; // [esp+54h] [ebp-2EECh] BYREF
  MultiplayerGameMode v94; // [esp+C0h] [ebp-2E80h] BYREF
  unsigned char v95[12]; // [esp+118h] [ebp-2E28h] BYREF
  int v96; // [esp+124h] [ebp-2E1Ch]
  void *v97[16]; // [esp+12Ch] [ebp-2E14h] BYREF
  char v98; // [esp+16Ch] [ebp-2DD4h]
  CCINIClass v99; // [esp+184h] [ebp-2DBCh] BYREF
  void *v100[22]; // [esp+1DCh] [ebp-2D64h] BYREF
  MultiplayerGameMode v101[3]; // [esp+234h] [ebp-2D0Ch] BYREF
  unsigned int v102[27]; // [esp+2A0h] [ebp-2CA0h] BYREF
  unsigned int v103[27]; // [esp+30Ch] [ebp-2C34h] BYREF
  unsigned char a0[768]; // [esp+378h] [ebp-2BC8h] BYREF
  char Buffer[200]; // [esp+678h] [ebp-28C8h] BYREF
  INIClass Source[160]; // [esp+740h] [ebp-2800h] BYREF

  Debug::Log();
  int v0 = operator new(0x3740u);
  int v1 = 0;
  if ( !v0 )
  {
    *(unsigned int *)&HouseClass_Player[29924] = 0;
    goto LABEL_3;
  }
  *(unsigned int *)&HouseClass_Player[29924] = ScenarioClass::Constructor(v0);
  if ( !*(unsigned int *)&HouseClass_Player[29924] )
  {
LABEL_3:
    Debug::Log();
    return -1;
  }
  v3 = (RulesClass *)new RulesClass;
  if ( !v3 )
  {
    *(unsigned int *)&stru_87C374[44652] = 0;
    goto LABEL_3;
  }
  *(unsigned int *)&stru_87C374[44652] = RulesClass::RulesClass(v3);
  if ( !*(unsigned int *)&stru_87C374[44652] )
    goto LABEL_3;
  Debug::Log();
  if ( !g_Is16BitMode )
    FadePalette(&stru_87C374[35596], 0, 0);
  if ( stru_89E138[616] == 1 )
    SetSoundWarning(-2);
  do
    EventQueue::Process(*(unsigned int **)&stru_87C374[13308]);
  while ( !HouseClass_Player[45108] );
  stru_89E138[8040] = 0;
  TextBufferEntry = (unsigned char *)GetTextBufferEntry(4);
  TextBuffer::Init(TextBufferEntry);
  if ( !MixFileClass::Bootstrap() )
  {
    Debug::Log();
    Debug::Log_0();
    return -1;
  }
  unsigned int * v5 = (unsigned int *)operator new(4u);
  if ( v5 )
    unk_89C4B8 = BitTextClass::LoadFont(v5);
  else
    unk_89C4B8 = 0;
  Init::StubPlaceholder();
  LoadMouseClassResources();
  InitializeAudioSubsystem(*(void **)&stru_830620[66640]);
  Timer::PumpMessages(*(HWND **)&stru_87C374[13308]);
  IDA_LOBYTE(v6) = 0;
  v7 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA[140], v6);
  memcpy(&stru_87C374[40972], v7, 0x300u);
  for ( i = 0; i < 256; ++i )
  {
    esi20 = &stru_87C374[22428][3 * (i % 256) + 18544];
    v9 = (ObjectClass *)Palette::SixBitTo16Bit(
  unsigned char v89[4]; // [esp+34h] [ebp-2F0Ch] BYREF
                          v89,
                          4 * *esi20,
                          4 * stru_87C374[22428][3 * (i % 256) + 18545],
                          4 * stru_87C374[22428][3 * (i % 256) + 18546]);
    *(unsigned short *)esi20 = *(unsigned short *)v9->__pad_0;
    esi20[2] = v9->__pad_0[2];
  }
  IDA_LOBYTE(v11) = 0;
  v12 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA[124], v11);
  memcpy(&stru_87C374[37900], v12, 0x300u);
  for ( j = 0; j < 256; ++j )
  {
    char * v14 = &stru_87C374[22428][3 * (j % 256) + 15472];
    v13 = (ObjectClass *)Palette::SixBitTo16Bit(
                           v90,
                           4 * *v14,
                           4 * stru_87C374[22428][3 * (j % 256) + 15473],
                           4 * stru_87C374[22428][3 * (j % 256) + 15474]);
    *(unsigned short *)v14 = *(unsigned short *)v13->__pad_0;
    v14[2] = v13->__pad_0[2];
  }
  Block::Copy(&stru_87C374[38668], &stru_87C374[37900]);
  Block::Copy(&stru_87C374[40204], &stru_87C374[37900]);
  stru_87C374[39438] = stru_87C374[35598];
  IDA_LOBYTE(v16) = 0;
  *(unsigned short *)&stru_87C374[39436] = *(unsigned short *)&stru_87C374[35596];
  eax23 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA[108], v16);
  memcpy(&stru_87C374[36364], eax23, 0x300u);
  for ( k = 0; k < 256; ++k )
  {
    char * v19 = &stru_87C374[22428][3 * (k % 256) + 13936];
    v17 = (ObjectClass *)Palette::SixBitTo16Bit(
  unsigned char v87[4]; // [esp+2Ch] [ebp-2F14h] BYREF
                           v87,
                           4 * *v19,
                           4 * stru_87C374[22428][3 * (k % 256) + 13937],
                           4 * stru_87C374[22428][3 * (k % 256) + 13938]);
    *(unsigned short *)v19 = *(unsigned short *)v17->__pad_0;
    v19[2] = v17->__pad_0[2];
  }
  CCFileClass::Construct(Buffer, &g_Str_File_MOUSE_SHA[96]);
  VoxelPaletteClass::LoadFromFile(Buffer);
  int v21 = 0;
  char * v22 = &stru_B1D188[76273];
  do
  {
  unsigned char v85[4]; // [esp+24h] [ebp-2F1Ch] BYREF
    v20 = (ObjectClass *)Palette::SixBitTo16Bit(v85, *(v22 - 1), *v22, v22[1]);
    ecx26 = &stru_87C374[22428][3 * (v21 % 256) + 19312];
    v22 += 3;
    ++v21;
    *(unsigned short *)ecx26 = *(unsigned short *)v20->__pad_0;
    ecx26[2] = v20->__pad_0[2];
  }
  while ( (int)v22 < (int)&stru_B1D188[77041] );
  *(float *)&stru_87C374[45224] = 0.95990276;
  stru_87C374[45220] = 1;
  Matrix3x4::Identity(&stru_87C374[45244]);
  Voxel::SetProjectionAngle(0.785375);
  dword_B43184 = 1;
  dword_B43180 = 0;
  Voxel::Projection_Setup();
  unsigned int * v25 = (unsigned int *)operator new(0x188u);
  if ( v25 )
    *(unsigned int *)&stru_87C374[13124] = ConvertClass::Construct(
                                                 v25,
                                                 (ConvertClass *)&stru_87C374[37900],
                                                 (int)&stru_87C374[37900],
                                                 *(ConvertClass **)&stru_87C374[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&stru_87C374[13124] = 0;
  Array::ForEach((AbstractClass *)a0, 3, (IUnknown *)0x100, (int (__thiscall *)(int))Struct::Zero3);
  IDA_LOBYTE(edx30) = 0;
  v27 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA[84], edx30);
  memcpy(a0, v27, sizeof(a0));
  for ( m = 0; m < 256; ++m )
  {
    v24 = (ConvertClass *)(3 * (m % 256));
    unsigned char * v30 = &a0[(unsigned int)v24];
    v26 = (ObjectClass *)Palette::SixBitTo16Bit(
  unsigned char v82[4]; // [esp+18h] [ebp-2F28h] BYREF
                           v82,
                           4 * a0[(unsigned int)v24],
                           4 * a0[(unsigned int)v24 + 1],
                           4 * a0[(unsigned int)v24 + 2]);
    *(unsigned short *)v30 = *(unsigned short *)v26->__pad_0;
    v30[2] = v26->__pad_0[2];
  }
  unsigned int * v32 = (unsigned int *)operator new(0x188u);
  if ( v32 )
    *(unsigned int *)&stru_87C374[13132] = ConvertClass::Construct(
                                                 v32,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374[37900],
                                                 *(ConvertClass **)&stru_87C374[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&stru_87C374[13132] = 0;
  IDA_LOBYTE(v33) = 0;
  eax35 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA[72], v33);
  memcpy(a0, eax35, sizeof(a0));
  for ( n = 0; n < 256; ++n )
  {
    v29 = (ConvertClass *)(3 * (n % 256));
    unsigned char * v37 = &a0[(unsigned int)v29];
    v31 = (ObjectClass *)Palette::SixBitTo16Bit(
  unsigned char v83[4]; // [esp+1Ch] [ebp-2F24h] BYREF
                           v83,
                           4 * a0[(unsigned int)v29],
                           4 * a0[(unsigned int)v29 + 1],
                           4 * a0[(unsigned int)v29 + 2]);
    *(unsigned short *)v37 = *(unsigned short *)v31->__pad_0;
    v37[2] = v31->__pad_0[2];
  }
  eax37 = (unsigned int *)operator new(0x188u);
  if ( eax37 )
    *(unsigned int *)&stru_87C374[13136] = ConvertClass::Construct(
                                                 eax37,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374[37900],
                                                 *(ConvertClass **)&stru_87C374[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&stru_87C374[13136] = 0;
  IDA_LOBYTE(v40) = 0;
  eax40 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA[140], v40);
  memcpy(a0, eax40, sizeof(a0));
  for ( ii = 0; ii < 256; ++ii )
  {
    v34 = (ConvertClass *)(3 * (ii % 256));
    esi41 = &a0[(unsigned int)v34];
    v36 = (ObjectClass *)Palette::SixBitTo16Bit(
  unsigned char v84[4]; // [esp+20h] [ebp-2F20h] BYREF
                           v84,
                           4 * a0[(unsigned int)v34],
                           4 * a0[(unsigned int)v34 + 1],
                           4 * a0[(unsigned int)v34 + 2]);
    *(unsigned short *)esi41 = *(unsigned short *)v36->__pad_0;
    esi41[2] = v36->__pad_0[2];
  }
  eax42 = (unsigned int *)operator new(0x188u);
  if ( eax42 )
    *(unsigned int *)&stru_87C374[13120] = ConvertClass::Construct(
                                                 eax42,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374[37900],
                                                 *(ConvertClass **)&stru_87C374[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&stru_87C374[13120] = 0;
  IDA_LOBYTE(v47) = 0;
  v48 = (AbstractClass *)SearchMIXFile(aCameoPal, v47);
  memcpy(a0, v48, sizeof(a0));
  for ( jj = 0; jj < 256; ++jj )
  {
    v39 = (ConvertClass *)(3 * (jj % 256));
    unsigned char * v51 = &a0[(unsigned int)v39];
    v41 = (ObjectClass *)Palette::SixBitTo16Bit(
  unsigned char v86[4]; // [esp+28h] [ebp-2F18h] BYREF
                           v86,
                           4 * a0[(unsigned int)v39],
                           4 * a0[(unsigned int)v39 + 1],
                           4 * a0[(unsigned int)v39 + 2]);
    *(unsigned short *)v51 = *(unsigned short *)v41->__pad_0;
    v51[2] = v41->__pad_0[2];
  }
  eax47 = (unsigned int *)operator new(0x188u);
  if ( eax47 )
    *(unsigned int *)&stru_87C374[13116] = ConvertClass::Construct(
                                                 eax47,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374[37900],
                                                 *(ConvertClass **)&stru_87C374[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&stru_87C374[13116] = 0;
  IDA_LOBYTE(v54) = 0;
  v55 = (AbstractClass *)SearchMIXFile(&g_Str_File_MOUSE_SHA[56], v54);
  memcpy(a0, v55, sizeof(a0));
  for ( kk = 0; kk < 256; ++kk )
  {
    v44 = (ConvertClass *)(3 * (kk % 256));
    GameDirectoryCD = &a0[(unsigned int)v44];
    v46 = (ObjectClass *)Palette::SixBitTo16Bit(
  int v88; // [esp+30h] [ebp-2F10h] BYREF
                           &v88,
                           4 * a0[(unsigned int)v44],
                           4 * a0[(unsigned int)v44 + 1],
                           4 * a0[(unsigned int)v44 + 2]);
    *(unsigned short *)GameDirectoryCD = *(unsigned short *)v46->__pad_0;
    GameDirectoryCD[2] = v46->__pad_0[2];
  }
  unsigned int * v60 = (unsigned int *)operator new(0x188u);
  if ( v60 )
    *(unsigned int *)&stru_87C374[13140] = ConvertClass::Construct(
                                                 v60,
                                                 (ConvertClass *)a0,
                                                 (int)&stru_87C374[37900],
                                                 *(ConvertClass **)&stru_87C374[44948],
                                                 (ObjectClass *)1,
                                                 0);
  else
    *(unsigned int *)&stru_87C374[13140] = 0;
  *(unsigned int *)&stru_87C374[13128] = *(unsigned int *)&stru_87C374[13120];
  CCFileClass::Construct(v103, &g_Str_File_MOUSE_SHA[44]);
  if ( CCFileClass::Open(v103, 0) )
  {
    *(unsigned int *)&HouseClass_Player[47684] = CCFileClass::ReadEntireFile(v103);
    CCFileClass::Reset(v103);
    for ( kk = 0; kk < 256; ++kk )
    {
      GameDirectoryCD = (unsigned char *)(*(unsigned int *)&HouseClass_Player[47684] + 2 * (kk % 256) + kk % 256);
      v49 = (ObjectClass *)Palette::SixBitTo16Bit(
                             v81,
                             4 * *GameDirectoryCD,
                             4 * GameDirectoryCD[1],
                             4 * GameDirectoryCD[2]);
      *(unsigned short *)GameDirectoryCD = *(unsigned short *)v49->__pad_0;
      GameDirectoryCD[2] = v49->__pad_0[2];
    }
  }
  if ( *(unsigned int *)&HouseClass_Player[47684] )
  {
    unsigned int * v62 = (unsigned int *)operator new(0x188u);
    if ( v62 )
      *(unsigned int *)&HouseClass_Player[47692] = ConvertClass::Construct(
                                                          v62,
                                                          *(ConvertClass **)&HouseClass_Player[47684],
                                                          (int)&stru_87C374[37900],
                                                          *(ConvertClass **)&stru_87C374[44948],
                                                          (ObjectClass *)1,
                                                          0);
    else
      *(unsigned int *)&HouseClass_Player[47692] = 0;
  }
  CCFileClass::Construct(v102, &g_Str_File_MOUSE_SHA[32]);
  if ( CCFileClass::Open(v102, 0) )
  {
    *(unsigned int *)&HouseClass_Player[47688] = CCFileClass::ReadEntireFile(v102);
    CCFileClass::Reset(v102);
  }
  LoadExpansionMixFiles();
  CCFileClass::Destruct(v102);
  CCFileClass::Destruct(v103);
  CCFileClass::Destruct(Buffer);
  Debug::Log_0();
  Debug::Log();
  *(unsigned int *)&stru_B05488[26728] = LoadFileSHP(
                                               &g_Str_File_MOUSE_SHA,
                                               (ConvertClass *)&stru_B05488[26732]);
  if ( *(unsigned int *)&stru_B05488[26728] )
  {
    (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 12))(*(unsigned int *)&stru_87C374[45772]);
    v81[0] = 0;
    v81[1] = 0;
    (*(void (__thiscall **)(unsigned int, unsigned int *, unsigned int, unsigned int))(**(unsigned int **)&stru_87C374[45772] + 4))(
      *(unsigned int *)&stru_87C374[45772],
      v81,
      *(unsigned int *)&stru_B05488[26728],
      0);
  }
  Mission::SetAndCall((int *)&stru_87C374[13428], 0, 0);
  Event::Dispatch();
  Debug::Log();
  if ( !*(unsigned int *)&stru_89E138[728] )
  {
    Debug::Log();
    kk = (int)(void*)(void*)&CD_vftable;
    if ( !(uint8_t)CD_vftable(-1) )
    {
LABEL_68:
      Debug::Log();
      Debug::Log();
      return 1;
    }
    while ( 1 )
    {
      Source[0].__pad_0[0] = 0;
      if ( *(int *)&HouseClass_Player[44036] > 0 )
      {
        char * v63 = &HouseClass_Player[43932];
        while ( 1 )
        {
          sprintf(
            Buffer,
            (ObjectClass *)&g_Str_Trace______c_.ambientSoundController[3],
            (INIClass *)(*(unsigned int *)v63 + 65));
          strcat(Source[0].__pad_0, Buffer);
          ++v1;
          v63 += 4;
          if ( v1 >= *(int *)&HouseClass_Player[44036] )
            break;
          strcat(Source[0].__pad_0, Control[0]);
        }
        kk = (int)(void*)(void*)&CD_vftable;
        v1 = 0;
      }
      GameDirectoryCD = (unsigned char *)Game::FindGameDirectoryCD(Source);
      if ( GameDirectoryCD == (unsigned char *)1 )
        break;
      if ( GameDirectoryCD == (unsigned char *)2 )
        goto LABEL_79;
      if ( !(uint8_t)CD_vftable(dword_81C1D0) )
        goto LABEL_68;
LABEL_80:
      if ( !GameDirectoryCD )
      {
        v53 = (Tactical *)-1;
        goto LABEL_82;
      }
    }
    if ( !(uint8_t)CD_vftable(dword_81C1D0) )
      goto LABEL_68;
LABEL_79:
    FadePalette(&stru_87C374[37900], 0, 0);
    v81[0] = &stru_82083C;
    StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_Init_CPP, 4276);
    v76 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Init_CPP, 4276);
    v64 = GetStringCSF(aTxtCdDialog1, 0, g_Str_File_Init_CPP, 4276);
    if ( Dialog::ShowMessageBox((int)v64, v76, (Movie *)StringCSF, 0, 0, v78) == 1 )
      goto LABEL_68;
    goto LABEL_80;
  }
  Debug::Log();
  v53 = (Tactical *)-2;
LABEL_82:
  SetSoundWarning((int)v53);
  Debug::Log();
  if ( !MixFile::LoadAll() )
  {
    Debug::Log_0();
    return -1;
  }
  Debug::Log_0();
  Movie::Play((CCINIClass *)1, 1, (CCINIClass *)1, 0, v78, v79, v80);
  ShowLoadingScreen((int *)0xFFFFFFFF, kk, (int)GameDirectoryCD);
  Debug::Log();
  Credits::Screen();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  GameSettings::Read((uint16_t *)&HouseClass_Player[44564]);
  Debug::Log();
  AnimSystem::Init();
  ResetAnimSystem(0);
  Debug::Log();
  off_822724 = &g_INI_Key_Grey;
  Debug::Log();
  if ( *(unsigned int *)&stru_87C374[44976] )
    (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)&stru_87C374[44976] + 32))(
      *(unsigned int *)&stru_87C374[44976],
      1);
  int v66 = operator new(0xE18u);
  if ( !v66 )
  {
    *(unsigned int *)&stru_87C374[44976] = 0;
    goto LABEL_89;
  }
  *(unsigned int *)&stru_87C374[44976] = TacticalMap::Construct(v66);
  if ( !*(unsigned int *)&stru_87C374[44976] )
  {
LABEL_89:
    Debug::Log();
    return -1;
  }
  *(unsigned int *)&stru_87C374[44960] = *(unsigned int *)&stru_87C374[44952];
  Debug::Log();
  CCFileClass::Construct(&aP1, aSoundmdIni);
  if ( !CCFileClass::Open(&aP1, 0) )
  {
    Debug::Log();
LABEL_93:
    *(unsigned int *)aP1[0] = &vt_CCFileClass;
LABEL_94:
    int v93 = 0;
  unsigned char v92[12]; // [esp+ACh] [ebp-2E94h] BYREF
    Vector::Clear((int)v92);
    BufferIOFileClass::Destruct(&aP1);
    return -1;
  }
  INIClass::INIClass(v97);
  v98 = 0;
  v97[0] = &CCINIClass_Vtable;
  if ( !CCINIClass::Load(v97, &aP1, 0, 0) )
  {
    Debug::Log();
    HashTable_flat::DestroyHashTableINIClass(v97);
    goto LABEL_93;
  }
  Audio::LoadSoundINI();
  Audio::InitFromINI((uint8_t ***)v97);
  Debug::Log();
  CCFileClass::Construct(&v94, aEvamdIni);
  if ( !CCFileClass::Open(&v94, 0) )
  {
    Debug::Log();
    *(unsigned int *)v94[0] = &vt_CCFileClass;
    v96 = 0;
    Vector::Clear((int)v95);
    BufferIOFileClass::Destruct(&v94);
    HashTable_flat::DestroyHashTableINIClass(v97);
    *(unsigned int *)aP1[0] = &vt_CCFileClass;
    goto LABEL_94;
  }
  INIClass::INIClass(&v99);
  v99.ownsFile = 0;
  *(unsigned int *)v99[0] = &CCINIClass_Vtable;
  if ( !CCINIClass::Load(&v99, &v94, 0, 0) )
  {
    Debug::Log();
    HashTable_flat::DestroyHashTableINIClass((void **)&v99);
    *(unsigned int *)v94[0] = &vt_CCFileClass;
    v96 = 0;
    Vector::Clear((int)v95);
    BufferIOFileClass::Destruct(&v94);
LABEL_109:
    HashTable_flat::DestroyHashTableINIClass(v97);
    CCFileClass::Destruct(&aP1);
    return -1;
  }
  void *v67; // ecx
  LoadINIEVA(v67);
  InitFromINIEVA(&v99);
  Debug::Log();
  CCFileClass::Construct(v101, aThememdIni);
  if ( !CCFileClass::Open(v101, 0) )
  {
    Debug::Log();
LABEL_108:
    CCFileClass::Destruct(v101);
    HashTable_flat::DestroyHashTableINIClass((void **)&v99);
    CCFileClass::Destruct(&v94);
    goto LABEL_109;
  }
  CCINIClass::CCINIClass(v100);
  if ( !CCINIClass::Load(v100, v101, 0, 0) )
    goto LABEL_106;
  ThemeManager::Cleanup((int)&g_BuildingTypeClass_Count);
  ThemeClass::InitializeThemes((int)&g_BuildingTypeClass_Count, (char *)v100);
  Audio::LoadWAVFiles(&g_BuildingTypeClass_Count);
  Debug::Log();
  if ( !InitBulkData() )
  {
LABEL_107:
    HashTable_flat::DestroyHashTableINIClass(v100);
    goto LABEL_108;
  }
  Debug::Log();
  if ( !InitRules() )
  {
LABEL_106:
    Debug::Log();
    goto LABEL_107;
  }
  RulesClass::LoadAnimTypes(*(RulesClass **)&stru_87C374[44652]);
  for ( mm = 0; mm < *(int *)&stru_89E138[90152]; ++mm )
    (*(void (__thiscall **)(unsigned int, char *))(**(unsigned int **)(*(unsigned int *)&stru_89E138[90140] + 4 * mm) + 100))(
      *(unsigned int *)(*(unsigned int *)&stru_89E138[90140] + 4 * mm),
      &stru_87C374[44556]);
  RulesClass::LoadBuildingTypes(*(RulesClass **)&stru_87C374[44652]);
  for ( nn = 0; nn < (int)g_TriggerClassCount; ++nn )
    (*(void (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)g_TriggerTypeCount + nn) + 100))(
      *((unsigned int *)g_TriggerTypeCount + nn),
      *(unsigned int *)&stru_87C374[44244]);
  uint64_t v70; // rax
  IDA_LODWORD(v70) = Audio::Callback();
  if ( v70 < *(unsigned long long *)&HouseClass_Player[47676] )
  {
    do
  uint64_t v71; // rax
      IDA_LODWORD(v71) = Audio::Callback();
    while ( v71 < *(unsigned long long *)&HouseClass_Player[47676] );
  }
  PlayIntroSequence(0, -1, (int)&g_INI_Key_Grey);
  int v72 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 5328);
  off_822724 = &g_INI_Key_Grey;
  *(unsigned int *)&HouseClass_Player[30716] = v72;
  *(unsigned int *)&HouseClass_Player[38960] = 0;
  *(unsigned int *)&HouseClass_Player[38964] = 0;
  *(unsigned int *)&HouseClass_Player[38972] = 0;
  char * v73 = &HouseClass_Player[38108];
  do
  {
    *((unsigned short *)v73 - 22) = 0;
    *(unsigned int *)v73 = 0;
    unsigned int * v74 = v73 + 4;
    int v75 = 4;
    do
    {
      v74[4] = -1;
      *v74 = -1;
      v74[8] = -1;
      v74[12] = -1;
      ++v74;
      --v75;
    }
    while ( v75 );
    v73 += 112;
  }
  while ( (int)v73 < (int)&HouseClass_Player[39004] );
  *(unsigned int *)&HouseClass_Player[37820] = 16843009;
  *(unsigned int *)&HouseClass_Player[37824] = 16843009;
  InitRandomSeed();
  Debug::Log();
  InitCommands();
  Debug::Log();
  CompleteGameInit();
  HashTable_flat::DestroyHashTableINIClass(v100);
  CCFileClass::Destruct(v101);
  HashTable_flat::DestroyHashTableINIClass((void **)&v99);
  CCFileClass::Destruct(&v94);
  HashTable_flat::DestroyHashTableINIClass(v97);
  CCFileClass::Destruct(&aP1);
  return 0;
}
} // namespace gamemd

// 0x52CB50
namespace gamemd {
char PlayIntroSequence()
{
  if ( (dword_A8E960 & 4) != 0 ) /*0x52cb57*/
    Movie::Play(-1, a2, a3, 1, 1, 1, 0); /*0x52cb69*/
  Screen::Capture(1, 0, a1, a2); /*0x52cb72*/
  return Event::Dispatch();
}
}
// 0x52CD70
namespace gamemd {
void InitRules()
{
  HANDLE FirstFileA; // ebp
  char *cAlternateFileName; // edi
  INIClass *v3; // eax
  CCINIClass *v4; // esi
  int v5; // eax
  int v6; // eax
  INIClass *v7; // eax
  CCINIClass *v8; // esi
  int v9; // eax
  int v11; // eax
  INT_PTR v12; // eax
  int v13; // esi
  int v14; // eax
  void (__thiscall ***v15)(_DWORD, int); // ecx
  char v16; // [esp+13h] [ebp-309h]
  _VectorClass_PAVCCINIClass dwInitParam; // [esp+14h] [ebp-308h] BYREF
  int v18; // [esp+28h] [ebp-2F4h]
  CCINIClass v19; // [esp+2Ch] [ebp-2F0h] BYREF
  int v20[3]; // [esp+84h] [ebp-298h] BYREF
  int v21; // [esp+90h] [ebp-28Ch]
  CCFileClass v22; // [esp+98h] [ebp-284h] BYREF
  int v23[3]; // [esp+F0h] [ebp-22Ch] BYREF
  int v24; // [esp+FCh] [ebp-220h]
  CCFileClass v25; // [esp+104h] [ebp-218h] BYREF
  int v26[3]; // [esp+15Ch] [ebp-1C0h] BYREF
  int v27; // [esp+168h] [ebp-1B4h]
  CCFileClass v28; // [esp+170h] [ebp-1ACh] BYREF
  int v29[5]; // [esp+1C8h] [ebp-154h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1DCh] [ebp-140h] BYREF

  RulesClass::InitINIChain((RulesClass *)&dwInitParam, 0, 0); /*0x52cd82*/
  *(_DWORD *)dwInitParam.__pad_0 = &(void*)(void*)&DynamicVectorClass_CCINIClass___vftable; /*0x52cd8e*/
  v18 = 10; /*0x52cd9c*/
  *(_DWORD *)dwInitParam.__tail_10 = 0; /*0x52cda4*/
  v16 = 0; /*0x52cda8*/
  FirstFileA = FindFirstFileA(aRulemdIni, &FindFileData); /*0x52cdb2*/
  if ( FirstFileA == (HANDLE)-1 ) /*0x52cdb7*/
    goto LABEL_27; /*0x52cdb7*/
  do /*0x52cf19*/
  {
    if ( (FindFileData.dwFileAttributes & 0x116) != 0 ) /*0x52cdc8*/
      continue; /*0x52cdc8*/
    cAlternateFileName = FindFileData.cAlternateFileName; /*0x52cdd5*/
    if ( !FindFileData.cAlternateFileName[0] ) /*0x52cdde*/
      cAlternateFileName = FindFileData.cFileName; /*0x52cde0*/
    CCFileClass::Construct((CCFileClass *)&v19, cAlternateFileName); /*0x52cdec*/
    v3 = (INIClass *)RA2_OPNEW(0x58u); /*0x52cdf3*/
    v4 = (CCINIClass *)v3; /*0x52cdf8*/
    if ( v3 ) /*0x52cdff*/
    {
      INIClass::INIClass(v3); /*0x52ce03*/
      v4->ownsFile = 0; /*0x52ce08*/
      *(_DWORD *)v4->INIClass = &CCINIClass_Vtable; /*0x52ce0b*/
    }
    else
    {
      v4 = 0; /*0x52ce13*/
    }
    CCINIClass::Load(v4, (int)&v19, 0, 0); /*0x52ce1e*/
    if ( _strcmpi(cAlternateFileName, aRulesmdIni) ) /*0x52ce29*/
    {
      if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 /*0x52cecb*/
        || (IDA_BYTE1(dwInitParam.m_C) || !dwInitParam.m_8)
        && v18 > 0
        && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                        + 8))(
             &dwInitParam,
             v18 + dwInitParam.m_8,
             0) )
      {
        v6 = (*(_DWORD *)dwInitParam.__tail_10)++; /*0x52ced6*/
        *(_DWORD *)(*(_DWORD *)&dwInitParam.m_1[3] + 4 * v6) = v4; /*0x52cee1*/
      }
      goto LABEL_24; /*0x52cee1*/
    }
    v5 = *(_DWORD *)dwInitParam.__tail_10; /*0x52ce35*/
    v16 = 1; /*0x52ce3f*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52ce44*/
      goto LABEL_15; /*0x52ce44*/
    if ( (IDA_BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52ce6c*/
      && v18 > 0
      && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                      + 8))(
           &dwInitParam,
           v18 + dwInitParam.m_8,
           0) )
    {
      v5 = *(_DWORD *)dwInitParam.__tail_10; /*0x52ce73*/
  LABEL_15:
      if ( v5 ) /*0x52ce79*/
        memcpy((void *)(*(_DWORD *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v5); /*0x52ce88*/
      **(_DWORD **)&dwInitParam.m_1[3] = v4; /*0x52ce94*/
      ++*(_DWORD *)dwInitParam.__tail_10; /*0x52ce9b*/
    }
  LABEL_24:
    *(_DWORD *)v19.INIClass = &(void*)(void*)&CCFileClass_vftable; /*0x52cee4*/
    v21 = 0; /*0x52cef3*/
    Vector::Clear((int)v20); /*0x52cefa*/
    *(_DWORD *)v19.INIClass = &off_7E1668; /*0x52cf03*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cf0b*/
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52cf19*/
  FindClose(FirstFileA); /*0x52cf28*/
  if ( !v16 ) /*0x52cf32*/
  {
  LABEL_27:
    CCFileClass::Construct((CCFileClass *)&v19, aRulesmdIni); /*0x52cf38*/
    v7 = (INIClass *)RA2_OPNEW(0x58u); /*0x52cf48*/
    v8 = (CCINIClass *)v7; /*0x52cf4d*/
    if ( v7 ) /*0x52cf54*/
    {
      INIClass::INIClass(v7); /*0x52cf58*/
      v8->ownsFile = 0; /*0x52cf5d*/
      *(_DWORD *)v8->INIClass = &CCINIClass_Vtable; /*0x52cf60*/
    }
    else
    {
      v8 = 0; /*0x52cf68*/
    }
    CCINIClass::Load(v8, (int)&v19, 0, 0); /*0x52cf73*/
    v9 = *(_DWORD *)dwInitParam.__tail_10; /*0x52cf78*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52cf82*/
    {
  LABEL_36:
      if ( v9 ) /*0x52cfaf*/
        memcpy((void *)(*(_DWORD *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v9); /*0x52cfbe*/
      **(_DWORD **)&dwInitParam.m_1[3] = v8; /*0x52cfca*/
      ++*(_DWORD *)dwInitParam.__tail_10; /*0x52cfd1*/
    }
    else if ( (IDA_BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52cfa2*/
           && v18 > 0
           && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVCCINIClass *, int, _DWORD))(*(_DWORD *)dwInitParam.__pad_0
                                                                                           + 8))(
                &dwInitParam,
                v18 + dwInitParam.m_8,
                0) )
    {
      v9 = *(_DWORD *)dwInitParam.__tail_10; /*0x52cfa9*/
      goto LABEL_36; /*0x52cfa9*/
    }
    *(_DWORD *)v19.INIClass = &(void*)(void*)&CCFileClass_vftable; /*0x52cfe1*/
    v21 = 0; /*0x52cfe5*/
    Vector::Clear((int)v20); /*0x52cfec*/
    *(_DWORD *)v19.INIClass = &off_7E1668; /*0x52cffa*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cffe*/
  }
  if ( *(int *)dwInitParam.__tail_10 <= 0 ) /*0x52d013*/
  {
    *(_DWORD *)dwInitParam.__pad_0 = &(void*)(void*)&VectorClass_CCINIClass___vftable; /*0x52d019*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d021*/
    return 0; /*0x52d032*/
  }
  CCFileClass::Construct(&v22, aArtmdIni); /*0x52d03f*/
  if ( !CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[228], (int)&v22, 0, 0) ) /*0x52d053*/
  {
    Debug::Log(); /*0x52d061*/
    *(_DWORD *)v22.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x52d070*/
    v24 = 0; /*0x52d077*/
    Vector::Clear((int)v23); /*0x52d07e*/
    *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d08a*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d091*/
    *(_DWORD *)dwInitParam.__pad_0 = &(void*)(void*)&VectorClass_CCINIClass___vftable; /*0x52d09a*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d0a2*/
    return 0; /*0x52d0b3*/
  }
  if ( *(_DWORD *)dwInitParam.__tail_10 == 1 ) /*0x52d0b9*/
  {
    v11 = **(_DWORD **)&dwInitParam.m_1[3]; /*0x52d0bf*/
  }
  else
  {
    v12 = DialogBoxParamA(g_hInstance, (LPCSTR)0x93, g_hWnd, (DLGPROC)ReadModConfigINI, (LPARAM)&dwInitParam); /*0x52d0df*/
    if ( v12 == -1 ) /*0x52d0e8*/
      v12 = 0; /*0x52d0ea*/
    v11 = *(_DWORD *)(*(_DWORD *)&dwInitParam.m_1[3] + 4 * v12); /*0x52d0f0*/
  }
  *(_DWORD *)&DSurface_ViewBounds.__pad_34[116] = v11; /*0x52d0fa*/
  RulesClass::ReadColors(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d0ff*/
  RulesClass::ReadColorAdd(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d111*/
  RulesClass::ReadMovies(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d121*/
  Rules::ReadMiscINI(*(Rules **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d132*/
  Dialog::ReadMultiplayerDialogSettings(*(Dialog **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d144*/
  *(_DWORD *)&stru_A8B250.__pad_0[12] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5252); /*0x52d159*/
  *(_DWORD *)&stru_A8B250.__pad_0[32] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5268); /*0x52d165*/
  g_RulesInitConfig = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5276); /*0x52d171*/
  *(_DWORD *)&stru_A8B250.__pad_0[24] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5280); /*0x52d17d*/
  *(_DWORD *)&stru_A8B250.__pad_0[40] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5284); /*0x52d189*/
  *(_DWORD *)&stru_A8B250.__pad_0[36] = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5288); /*0x52d195*/
  stru_A8B250.__pad_0[16] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5292); /*0x52d1a1*/
  stru_A8B250.__pad_0[8] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5295); /*0x52d1ad*/
  stru_A8B250.__pad_0[17] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5297); /*0x52d1b9*/
  byte_A8B31E = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5298); /*0x52d1c5*/
  byte_A8B31D = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5299); /*0x52d1d1*/
  stru_A8B250.__pad_0[28] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5300); /*0x52d1dd*/
  byte_A8B31C = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x52d1e9*/
  stru_A8B250.__pad_0[18] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5302); /*0x52d1f5*/
  stru_A8B250.__pad_0[19] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5305); /*0x52d201*/
  stru_A8B250.__pad_0[20] = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5306); /*0x52d20d*/
  byte_A8B31F = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5303); /*0x52d219*/
  dword_A8B320 = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5304); /*0x52d22c*/
  CCFileClass::Construct(&v25, aLangruleIni); /*0x52d231*/
  if ( (unsigned __int8)CCFileClass::Open(&v25, 0) == 1 ) /*0x52d245*/
  {
    INIClass::INIClass((INIClass *)&v19); /*0x52d24f*/
    v19.ownsFile = 0; /*0x52d25b*/
    *(_DWORD *)v19.INIClass = &CCINIClass_Vtable; /*0x52d267*/
    if ( CCINIClass::Load(&v19, (int)&v25, 1, 0) > 1 ) /*0x52d277*/
    {
      HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d281*/
      *(_DWORD *)v25.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x52d28d*/
      v27 = 0; /*0x52d294*/
      Vector::Clear((int)v26); /*0x52d29b*/
      *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x52d2a7*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d2ae*/
      *(_DWORD *)v22.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x52d2ba*/
      v24 = 0; /*0x52d2c1*/
      Vector::Clear((int)v23); /*0x52d2c8*/
      *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d2d4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d2db*/
      *(_DWORD *)dwInitParam.__pad_0 = &(void*)(void*)&VectorClass_CCINIClass___vftable; /*0x52d2e4*/
      if ( *(_DWORD *)&dwInitParam.m_1[3] ) /*0x52d2ee*/
      {
        if ( IDA_BYTE1(dwInitParam.m_C) ) /*0x52d2f4*/
          RA2_OPDEL(*(void **)&dwInitParam.m_1[3]); /*0x52d2f7*/
      }
      return 0; /*0x52d30b*/
    }
    RulesClass::Addition(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d317*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d320*/
  }
  v13 = 0; /*0x52d329*/
  if ( *(int *)dwInitParam.__tail_10 > 0 ) /*0x52d32d*/
  {
    v14 = *(_DWORD *)&dwInitParam.m_1[3]; /*0x52d32f*/
    do /*0x52d355*/
    {
      v15 = *(void (__thiscall ****)(_DWORD, int))(v14 + 4 * v13); /*0x52d333*/
      if ( v15 != *(void (__thiscall ****)(_DWORD, int))&DSurface_ViewBounds.__pad_34[116] && v15 ) /*0x52d342*/
      {
        (**v15)(v15, 1); /*0x52d348*/
        v14 = *(_DWORD *)&dwInitParam.m_1[3]; /*0x52d34a*/
      }
      ++v13; /*0x52d352*/
    }
    while ( v13 < *(int *)dwInitParam.__tail_10 ); /*0x52d355*/
  }
  CCFileClass::Construct(&v28, aAimdIni); /*0x52d363*/
  CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[140], (int)&v28, 1, 0); /*0x52d378*/
  *(_DWORD *)v28.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x52d384*/
  v29[3] = 0; /*0x52d38b*/
  Vector::Clear((int)v29); /*0x52d392*/
  *(_DWORD *)v28.CDFileClass = &off_7E1668; /*0x52d39e*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x52d3a5*/
  *(_DWORD *)v25.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x52d3b1*/
  v27 = 0; /*0x52d3b8*/
  Vector::Clear((int)v26); /*0x52d3bf*/
  *(_DWORD *)v25.CDFileClass = &off_7E1668; /*0x52d3cb*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d3d2*/
  *(_DWORD *)v22.CDFileClass = &(void*)(void*)&CCFileClass_vftable; /*0x52d3de*/
  v24 = 0; /*0x52d3e5*/
  Vector::Clear((int)v23); /*0x52d3ec*/
  *(_DWORD *)v22.CDFileClass = &off_7E1668; /*0x52d3f8*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d3ff*/
  *(_DWORD *)dwInitParam.__pad_0 = &(void*)(void*)&VectorClass_CCINIClass___vftable; /*0x52d408*/
  if ( *(_DWORD *)&dwInitParam.m_1[3] && IDA_BYTE1(dwInitParam.m_C) ) /*0x52d418*/
    RA2_OPDEL(*(void **)&dwInitParam.m_1[3]); /*0x52d41b*/
  return 1; /*0x52d028*/
}
}
// 0x52D870
namespace gamemd {
void sub_52D870(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
  HWND DlgItem; // esi
  int result; // eax
  _DWORD *WindowLongA; // eax
  LRESULT v7; // eax
  LRESULT v8; // eax
  bool v9; // [esp+13h] [ebp-1h]
  HWND hDlga; // [esp+18h] [ebp+4h]

  v9 = 0; /*0x52d87f*/
  DlgItem = GetDlgItem(hDlg, 1860); /*0x52d88a*/
  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x52d89e*/
  if ( !result ) /*0x52d8a5*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hDlg, 8); /*0x52d8ae*/
    hDlga = (HWND)WindowLongA; /*0x52d8c2*/
    if ( a2 == 273 ) /*0x52d8c6*/
    {
      if ( (unsigned __int16)a3 == 1670 ) /*0x52d92b*/
      {
        if ( WindowLongA ) /*0x52d94c*/
          *WindowLongA = -1; /*0x52d94e*/
      }
      else if ( (unsigned __int16)a3 == 1860 ) /*0x52d932*/
      {
        v9 = IDA_HIWORD(a3) == 0; /*0x52d943*/
      }
      else
      {
        v9 = (unsigned __int16)a3 == 1861; /*0x52d937*/
      }
    }
    else if ( a2 == 1175 ) /*0x52d8ce*/
    {
      if ( !DlgItem ) /*0x52d8d6*/
      {
        if ( WindowLongA ) /*0x52d909*/
        {
          *WindowLongA = -1; /*0x52d912*/
          return 0; /*0x52d91c*/
        }
        return 0; /*0x52d909*/
      }
      GameOptionsClass::PopulateMovieList(dword_A8EB60, DlgItem); /*0x52d8de*/
      if ( SendMessageA(DlgItem, 0x186u, wParam, 0) == -1 ) /*0x52d8f7*/
        SendMessageA(DlgItem, 0x186u, 0, 0); /*0x52d903*/
    }
    if ( DlgItem ) /*0x52d956*/
    {
      if ( v9 ) /*0x52d95e*/
      {
        v7 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d96a*/
        wParam = v7; /*0x52d96f*/
        if ( v7 != -1 ) /*0x52d974*/
        {
          v8 = SendMessageA(DlgItem, 0x199u, v7, 0); /*0x52d97f*/
          if ( v8 ) /*0x52d983*/
          {
            if ( hDlga ) /*0x52d98b*/
              *(_DWORD *)hDlga = v8; /*0x52d98d*/
          }
        }
      }
    }
    return 0; /*0x52d98f*/
  }
  return result; /*0x52d90f*/
}
}
// 0x52D9A0
namespace gamemd {
void MenuSelect()
{
  Movie *v0; // eax
  int j; // edi
  int i; // eax
  LONG esi12; // esi
  Movie *v9; // eax
  void (__thiscall ***v11)(unsigned int, int); // ecx
  Movie *eax34; // eax
  Movie *v12; // eax
  wchar_t *StringCSF; // esi
  wchar_t *v15; // ebp
  LONG v16; // eax
  IUnknown *v17; // eax
  Movie *v18; // eax
  HWND Dialog; // eax
  Frame *v21; // ecx
  unsigned int *Options; // eax
  int *p_visibilityFlags; // eax
  Movie *v31; // eax
  IPXInterfaceClass *v36; // eax
  wchar_t *v35; // eax
  Frame *ecx152; // ecx
  DWORD Ticks; // ecx
  char result; // al
  Movie *v49; // eax
  int eax203; // eax
  Frame *v50; // ecx
  Movie *v54; // [esp+6h] [ebp-120h]
  char var110_2; // [esp+18h] [ebp-10Eh]
  LONG dwNewLong; // [esp+1Ah] [ebp-10Ch] BYREF
  CampaignScore *v58; // [esp+22h] [ebp-104h]
  unsigned int (__stdcall **v59)(unsigned int); // [esp+26h] [ebp-100h]
  LONG v62[23]; // [esp+6Ah] [ebp-BCh] BYREF
  LONG v63[24]; // [esp+C6h] [ebp-60h] BYREF

  v0 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
  ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v0);
LABEL_2:
  int v1 = *(unsigned int *)&HouseClass_Player[29924] + 4584;
  HouseClass_Player[44116] = 1;
  HouseClass_Player.field_0 = 0;
  dword_8B41F8 = 0;
  word_8B41FC = 0;
  unk_8B4200 = 0;
  Networking_LastEventIndex = 0;
  g_NetworkEventIndex = 0;
  Networking_NextPacketIndex = 0;
  *(unsigned int *)&HouseClass_Player[45112] = 0;
  *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584) = 0;
  char v55 = 0;
  int v60; // [esp+2Ah] [ebp-FCh]
  *(unsigned int *)(v1 + 4) = v60;
  var110_2 = 1;
  *(unsigned int *)(v1 + 8) = 0;
  unsigned int * v2 = (unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584);
  int v3 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4584);
  if ( v3 != -1 )
  {
    int v4 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4592);
    if ( *(unsigned int *)&HouseClass_Player[45112] - v3 >= v4 )
      int v5 = 0;
    else
      v5 = v4 - (*(unsigned int *)&HouseClass_Player[45112] - v3);
    *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 4592) = v5;
    *v2 = -1;
  }
  j = 1;
  *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1552) = 1;
  *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1548) = 1;
  byte_A83D49 = 0;
  HouseClass_Player[44932] = 0;
  unk_8B41C0 = 0;
  byte_A83D48 = 0;
  *(unsigned int *)&HouseClass_Player[30700] = 0;
  Mouse::SetBounds((int)&stru_87C374[13428], 0);
  *(unsigned int *)&stru_87C374[17944] = 0;
  *(unsigned int *)&stru_87C374[17948] = 0;
  *(unsigned int *)&stru_87C374[17952] = -1;
  *(unsigned int *)&HouseClass_Player[30740] = 0;
  *(unsigned int *)&HouseClass_Player[30744] = 0;
  *(unsigned int *)&HouseClass_Player[30732] = 30;
  *(unsigned int *)&HouseClass_Player[29868] = 0;
  *(unsigned int *)&HouseClass_Player[29840] = 0;
  for ( i = 0; i < 112; i += 28 )
  {
    int v8 = i + *(unsigned int *)&HouseClass_Player[38972];
    *(unsigned int *)&HouseClass_Player[21864][4 * v8 + 16264] = -1;
  }
  Mission::SetAndCall((int *)&stru_87C374[13428], 0, 0);
  if ( *(unsigned int *)&stru_87C374[45044] )
    Tooltip::Enable(*(void **)&stru_87C374[45044], 0);
  if ( *(unsigned int *)&HouseClass_Player[29932] )
    esi12 = (*(unsigned int *)&HouseClass_Player[29932] == 4) + 16;
  else
    esi12 = 18;
  if ( HouseClass_Player[45087] )
    goto LABEL_145;
  if ( (HouseClass_Player[39084] & 2) != 0 && CCFileClass::Open(&HouseClass_Player[38976], 0) )
  {
    if ( !FileClass::Load((int *)&HouseClass_Player[38976], (CDFileClass *)1) )
    {
      v9 = *(Movie **)&HouseClass_Player[39084];
      IDA_LOBYTE(v9) = HouseClass_Player[39084] & 0xFD;
      *(unsigned int *)&HouseClass_Player[39084] = v9;
      goto LABEL_20;
    }
LABEL_18:
    (*(void (__thiscall **)(char *, ObjectClass **, int))(*(unsigned int *)&HouseClass_Player[38976] + 36))(
      &HouseClass_Player[38976],
      &g_RulesInitConfig,
      4);
    (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 36))(
      &HouseClass_Player[38976],
      &HouseClass_Player[45128],
      4);
    (*(void (__thiscall **)(char *, int, int))(*(unsigned int *)&HouseClass_Player[38976] + 36))(
      &HouseClass_Player[38976],
      *(unsigned int *)&HouseClass_Player[29924] + 4692,
      4);
    (*(void (__thiscall **)(char *, int, int))(*(unsigned int *)&HouseClass_Player[38976] + 36))(
      &HouseClass_Player[38976],
      *(unsigned int *)&HouseClass_Player[29924] + 4700,
      260);
    (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 36))(
      &HouseClass_Player[38976],
      &HouseClass_Player[44868],
      4);
    (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 36))(
      &HouseClass_Player[38976],
      &HouseClass_Player[44052],
      4);
    (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 36))(
      &HouseClass_Player[38976],
      &HouseClass_Player[44564],
      184);
    Debug::Log();
    Theme::Stop(&g_BuildingTypeClass_Count, (ObjectClass *)1);
    goto LABEL_145;
  }
LABEL_20:
  while ( 2 )
  {
    v11 = *(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748];
    if ( *(unsigned int *)&stru_87C374[45748] )
    {
      if ( HouseClass_Player[40532] )
      {
        if ( *(unsigned int *)&HouseClass_Player[44224] )
          NetworkEventQueueClass::WaitForResponse((int)&g_NetworkEventQueue);
        v11 = *(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748];
        HouseClass_Player[40532] = 0;
      }
      if ( v11 )
        (**v11)(v11, 1);
      *(unsigned int *)&stru_87C374[45748] = 0;
      Network::Init();
    }
    if ( esi12 == 18 )
    {
      if ( HouseClass_Player[45073] )
        goto LABEL_32;
      esi12 = MainMenu::Screen(0, -1);
    }
    if ( HouseClass_Player[45073] )
    {
LABEL_32:
      esi12 = 8;
      goto LABEL_34;
    }
    if ( esi12 == 7 )
      goto LABEL_35;
LABEL_34:
    eax34 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
    ThemeClass::Play((int *)&g_BuildingTypeClass_Count, eax34);
LABEL_35:
    Event::Dispatch();
    switch ( esi12 )
    {
      case -1:
        if ( (HouseClass_Player[39084] & 4) == 0
          || !CCFileClass::Open(&HouseClass_Player[38976], 0) )
        {
          goto LABEL_40;
        }
        j = *(unsigned int *)&HouseClass_Player[39084] | 2;
        *(unsigned int *)&HouseClass_Player[39084] |= 2u;
        if ( FileClass::Load((int *)&HouseClass_Player[38976], (CDFileClass *)1) )
          goto LABEL_18;
        v12 = *(Movie **)&HouseClass_Player[39084];
        IDA_LOBYTE(v12) = HouseClass_Player[39084] & 0xFD;
        *(unsigned int *)&HouseClass_Player[39084] = v12;
LABEL_40:
        esi12 = 18;
        goto LABEL_134;
      case 1:
        *(&g_MatrixTransformState + 2222) = 0;
        esi12 = Campaign::Screen(1);
        goto LABEL_134;
      case 2:
        esi12 = 16;
        *(unsigned int *)&HouseClass_Player[29932] = 4;
        Multiplayer::Screen((void *)2);
        goto LABEL_134;
      case 3:
        esi12 = 16;
        *(unsigned int *)&HouseClass_Player[29932] = 3;
        Multiplayer::Screen((void *)1);
        goto LABEL_134;
      case 4:
        esi12 = Campaign::Screen(1);
        goto LABEL_134;
      case 5:
        esi12 = 18;
        Options::Screen_Dialog();
        goto LABEL_134;
      case 6:
        StringCSF = GetStringCSF(aGuiExitareyous, 0, g_Str_File_Init_CPP, 2502);
        j = (int)GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Init_CPP, 2503);
        v15 = GetStringCSF(aGuiCancel, 0, g_Str_File_Init_CPP, 2504);
        Screen::Capture(1, 0, 0, (int)v15);
        v58 = &stru_82083C;
        if ( Dialog::ShowMessageBox((int)StringCSF, (unsigned short *)j, (Movie *)v15, 0, 0, (int)v54) )
        {
          Screen::Capture(1, 0, 0, (int)v15);
          esi12 = 18;
        }
        else
        {
          esi12 = 7;
          ScenarioClass::SaveGameOptions((int)&HouseClass_Player[44564]);
        }
        goto LABEL_134;
      case 7:
        Theme::Stop(&g_BuildingTypeClass_Count, (ObjectClass *)1);
        int v40 = *(unsigned int *)&stru_87C374[45004];
        if ( *(unsigned int *)&stru_87C374[44996] != -1 )
          v40 += Timer::GetTicks() - *(unsigned int *)&stru_87C374[44996];
        int v41 = v40 + 3000;
        while ( Theme::IsPlaying((int)&g_BuildingTypeClass_Count) )
        {
          if ( !(uint8_t)Audio::IsPlaying() )
            break;
          int v42 = *(unsigned int *)&stru_87C374[45004];
          if ( *(unsigned int *)&stru_87C374[44996] != -1 )
            v42 += Timer::GetTicks() - *(unsigned int *)&stru_87C374[44996];
          if ( v41 <= v42 )
            break;
          Event::Dispatch();
        }
        Theme::Stop(&g_BuildingTypeClass_Count, 0);
        if ( !g_Is16BitMode )
          FadePalette(&stru_87C374[35596], 30, 0);
        return 0;
      case 8:
        if ( &stru_89E138 != (IUnknown *)-22440 )
          Menu::Reset((int)&stru_89E138[22440]);
  int v57; // [esp+1Eh] [ebp-108h]
        IDA_LOBYTE(v57) = 0;
        dwNewLong = -1;
        if ( g_UnitTypeInitState || (Credits::Screen(), g_UnitTypeInitState) )
        {
          InitializeGameLoading();
          AudioController::Init(&HouseClass_Player[46516]);
          *(unsigned int *)&HouseClass_Player[47700] = 0;
          *(unsigned int *)&HouseClass_Player[47704] = 0;
          *(unsigned int *)&HouseClass_Player[47708] = 0;
          Dialog = (HWND)CreateDialog(
                           0x94u,
                           (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))CampaignSelect::DlgProc,
                           0);
          j = (int)Dialog;
          if ( Dialog )
          {
            SetWindowLongA(Dialog, 8, (LONG)&dwNewLong);
            SetDialogParent((HWND)j, g_hWnd);
            Dialog::Show((HWND)j);
            while ( !(unsigned char)v57 )
            {
              if ( Dialog::PumpMessages() == 1 )
                break;
              if ( *(unsigned int *)&stru_825BAC.isOnMap != -1 )
              {
  uint64_t v20; // rax
                IDA_LODWORD(v20) = Audio::Callback();
                if ( *(unsigned long long *)&HouseClass_Player[47700] < v20 )
                {
                  AudioController::Stop(&HouseClass_Player[46516]);
                  PlayVocClass(*(int *)&stru_825BAC.isOnMap, 0x2000, 1.0, (int)&HouseClass_Player[46516]);
                  *(unsigned int *)&stru_825BAC.isOnMap = -1;
                }
              }
              if ( stru_89E138[8040] )
              {
                stru_89E138[8040] = 0;
                Screen::Capture(1, 0, 0, -1);
                IDA_LOBYTE(v21) = 0;
                Frame::Present(v21, 0);
              }
            }
            Dialog::Destroy((SkirmishDialog *)j);
          }
  int64_t v22; // rax
          IDA_LODWORD(v22) = Audio::Callback();
          *(unsigned long long *)&HouseClass_Player[47700] = v22 + 3000;
          while ( AudioSource::Get((int **)&HouseClass_Player[46516]) )
          {
  uint64_t v23; // rax
            IDA_LODWORD(v23) = Audio::Callback();
            if ( *(unsigned long long *)&HouseClass_Player[47700] <= v23 )
              break;
            Event::Dispatch();
          }
          CleanupEVASystem();
          v18 = (Movie *)dwNewLong;
        }
        else
        {
          v18 = (Movie *)-1;
        }
        *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 13516) = v18;
        if ( *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 13516) == -1 )
        {
          var110_2 = 1;
          esi12 = 1;
          continue;
        }
        switch ( *(unsigned int *)&HouseClass_Player[44568] )
        {
          case 0:
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1552) = 2;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1548) = 0;
            *(unsigned int *)&HouseClass_Player[29932] = 0;
            break;
          case 1:
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1552) = 2;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1548) = 1;
            *(unsigned int *)&HouseClass_Player[29932] = 0;
            break;
          case 2:
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1552) = 1;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1548) = 1;
            *(unsigned int *)&HouseClass_Player[29932] = 0;
            break;
          case 3:
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1552) = 0;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1548) = 1;
            *(unsigned int *)&HouseClass_Player[29932] = 0;
            break;
          case 4:
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1552) = 0;
            *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 1548) = 2;
            goto LABEL_143;
          default:
LABEL_143:
            *(unsigned int *)&HouseClass_Player[29932] = 0;
            break;
        }
LABEL_147:
        Timer::PumpMessages(*(HWND **)&stru_87C374[13308]);
        InitRandomSeed();
        PlanningNodeClass::CleanupAll();
        if ( v55 || *(unsigned int *)&HouseClass_Player[31596] )
          goto LABEL_189;
        Debug::Log();
        (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 12))(*(unsigned int *)&stru_87C374[45772]);
        if ( esi12 != 8 )
        {
          if ( !g_Is16BitMode )
            FadePalette(&stru_87C374[35596], 15, (void (*)(void))Event::Dispatch);
          (*(void (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374[44952] + 24))(
            *(unsigned int *)&stru_87C374[44952],
            0);
          IDA_LOBYTE(ecx152) = 1;
          Frame::Present(ecx152, 0);
        }
        (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 16))(*(unsigned int *)&stru_87C374[45772]);
        if ( *(unsigned int *)&HouseClass_Player[29932] == 4 )
        {
          int v37 = *(unsigned int *)&stru_87C374[44996];
          j = (int)&HouseClass_Player[42296];
          do
          {
            int v38 = *(unsigned int *)&stru_87C374[45004];
            if ( v37 != -1 )
            {
              Ticks = Timer::GetTicks();
              v37 = *(unsigned int *)&stru_87C374[44996];
              v38 += Ticks - *(unsigned int *)&stru_87C374[44996];
            }
            *(unsigned int *)j = v38;
            j += 4;
          }
          while ( j < (int)&HouseClass_Player[42328] );
        }
        if ( *(unsigned int *)&HouseClass_Player[29932]
          || HouseClass_Player[45073]
          || (HouseClass_Player[39084] & 2) != 0 )
        {
          if ( ScenarioClass::LoadScenarioAndStart(
                 (AnimClass *)(*(unsigned int *)&HouseClass_Player[29924] + 4700),
                 1,
                 -1) )
          {
            goto LABEL_184;
          }
          if ( HouseClass_Player[45087] )
            goto LABEL_183;
          goto LABEL_2;
        }
        if ( ScenarioClass::LoadScenarioAndStart(
               (AnimClass *)(*(unsigned int *)&g_CampaignTypeArray->__pad_0[4
                                                                    * *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924]
                                                                                + 13516)]
                           + 156),
               1,
               *(unsigned int *)(*(unsigned int *)&HouseClass_Player[29924] + 13516)) )
        {
LABEL_184:
          if ( (HouseClass_Player[39084] & 1) != 0 )
          {
            if ( FileClass::Load((int *)&HouseClass_Player[38976], (CDFileClass *)2) )
            {
              Debug::Log();
              (*(void (__thiscall **)(char *, ObjectClass **, int))(*(unsigned int *)&HouseClass_Player[38976] + 48))(
                &HouseClass_Player[38976],
                &g_RulesInitConfig,
                4);
              (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 48))(
                &HouseClass_Player[38976],
                &HouseClass_Player[45128],
                4);
              (*(void (__thiscall **)(char *, int, int))(*(unsigned int *)&HouseClass_Player[38976] + 48))(
                &HouseClass_Player[38976],
                *(unsigned int *)&HouseClass_Player[29924] + 4692,
                4);
              (*(void (__thiscall **)(char *, int, int))(*(unsigned int *)&HouseClass_Player[38976] + 48))(
                &HouseClass_Player[38976],
                *(unsigned int *)&HouseClass_Player[29924] + 4700,
                260);
              (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 48))(
                &HouseClass_Player[38976],
                &HouseClass_Player[44868],
                4);
              (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 48))(
                &HouseClass_Player[38976],
                &HouseClass_Player[44052],
                4);
              (*(void (__thiscall **)(char *, char *, int))(*(unsigned int *)&HouseClass_Player[38976] + 48))(
                &HouseClass_Player[38976],
                &HouseClass_Player[44564],
                184);
              int v44 = *(unsigned int *)&HouseClass_Player[44052];
              IDA_LOBYTE(v44) = HouseClass_Player[44052] & 0xFB;
              *(unsigned int *)&HouseClass_Player[44052] = v44;
              goto LABEL_189;
            }
            v49 = *(Movie **)&HouseClass_Player[39084];
            IDA_LOBYTE(v49) = HouseClass_Player[39084] & 0xFE;
            *(unsigned int *)&HouseClass_Player[39084] = v49;
          }
          int v46 = *(unsigned int *)&HouseClass_Player[44052];
          IDA_LOBYTE(v46) = HouseClass_Player[44052] & 0xFB;
          *(unsigned int *)&HouseClass_Player[44052] = v46;
LABEL_189:
          Debug::Log();
          Debug::Log();
          if ( *(unsigned int *)&HouseClass_Player[29932]
            && *(unsigned int *)&HouseClass_Player[29932] != 5
            && (HouseClass_Player[39084] & 2) == 0 )
          {
            SessionClass::CreateConnections(&HouseClass_Player[29932]);
            if ( *(unsigned int *)&HouseClass_Player[29932] == 3 )
            {
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) >= 0xF )
                int v47 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2;
              else
                v47 = 15;
              Network::SetConnectionParams(
                (int *)&HouseClass_Player[44148],
                (IUnknown *)v47,
                -1,
                600,
                (CellStruct *)1);
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) >= 0x3C )
                int v48 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2;
              else
                v48 = 60;
              TacticalClass::SetCameraPosition(&HouseClass_Player[44148], v48, -1, 600);
            }
            else if ( *(unsigned int *)&HouseClass_Player[29932] == 4
                   && !*(unsigned int *)&HouseClass_Player[30756] )
            {
              if ( (unsigned int)(Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2) >= 0x3C )
                eax203 = Network::GetLobbyStatus(&HouseClass_Player[44148]) + 2;
              else
                eax203 = 60;
              Network::SetConnectionParams(
                (int *)&HouseClass_Player[44148],
                (IUnknown *)eax203,
                -1,
                600,
                (CellStruct *)1);
            }
          }
          Event::Dispatch();
          (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 12))(*(unsigned int *)&stru_87C374[45772]);
          if ( !g_Is16BitMode )
            FadePalette(&stru_87C374[35596], 15, (void (*)(void))Event::Dispatch);
          (*(void (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)&stru_87C374[44952] + 24))(
            *(unsigned int *)&stru_87C374[44952],
            0);
          IDA_LOBYTE(v50) = 1;
          Frame::Present(v50, 0);
          (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 16))(*(unsigned int *)&stru_87C374[45772]);
          *(unsigned int *)&stru_87C374[44960] = *(unsigned int *)&stru_87C374[44952];
          Mouse::SetCursor((int)&stru_87C374[13428], (ObjectClass *)0x13, 0);
          MouseClass::GetPosition(&stru_87C374[13428]);
          if ( !HouseClass_Player[45087] )
            TacticalClass::BuildCommandBar(&stru_87C374[13428], j, 1);
          MapClass::MarkForRedraw(&stru_87C374[13428], 0);
          Event::Dispatch();
          (*(void (__thiscall **)(unsigned int))(**(unsigned int **)&stru_87C374[45772] + 12))(*(unsigned int *)&stru_87C374[45772]);
          ChatMessageWOL(0, (wchar_t *)&stru_87C374[46016]);
          return 1;
        }
        if ( !HouseClass_Player[45087] )
          goto LABEL_2;
LABEL_183:
        ChatMessageWOL(0, (wchar_t *)&stru_87C374[46016]);
        return 0;
      case 9:
        ++*(unsigned int *)&HouseClass_Player[43616];
        Credits::Screen();
        --*(unsigned int *)&HouseClass_Player[43616];
  unsigned int v61[14]; // [esp+32h] [ebp-F4h] BYREF
        Options = LoadOptions::LoadOptions(v61);
        char v25 = LoadOptions::Run(Options);
        LoadOptions::Cleanup(v61);
        if ( v25 )
        {
          v55 = 1;
LABEL_145:
          if ( *(unsigned int *)&HouseClass_Player[29932] == 4 )
          {
            v35 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Init_CPP, 2993);
            ChatMessageWOL(1, v35);
          }
          goto LABEL_147;
        }
        esi12 = 1;
LABEL_134:
        if ( !var110_2 )
          goto LABEL_145;
        continue;
      case 10:
        esi12 = 1;
        goto LABEL_134;
      case 11:
        *(unsigned int *)&HouseClass_Player[29932] = 5;
        goto LABEL_81;
      case 13:
        esi12 = 4;
  char v52; // [esp+Ah] [ebp-11Ch]
  char v53; // [esp+Eh] [ebp-118h]
        Movie::Play((CCINIClass *)1, 1, (CCINIClass *)1, 0, (char)v54, v52, v53);
        Screen::Capture(1, 0, 0, -1);
        goto LABEL_134;
      case 14:
        v16 = Campaign::Screen(1);
        j = v16;
        if ( v16 == -1 || !v16 )
        {
          esi12 = 4;
        }
        else
        {
          if ( (uint8_t)CD_vftable(*(unsigned int *)(v16 + 8)) )
          {
            Movie::Play((CCINIClass *)1, 1, (CCINIClass *)1, 0, (char)v54, v52, v53);
            Screen::Capture(1, 0, 0, -1);
          }
        }
        goto LABEL_134;
      case 15:
        esi12 = 4;
        CreditsPower::Display(0, j, 4);
        v17 = (IUnknown *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
        Theme::QueueSong((int)&g_BuildingTypeClass_Count, v17);
        Screen::Capture(1, 0, 0, -1);
        goto LABEL_134;
      case 16:
      case 17:
LABEL_81:
        ScenarioClass::LoadNetworkConfig((int)&HouseClass_Player[29932]);
        for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
          (*(void (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)g_SuperWeaponTypeCount + j) + 100))(
            *((unsigned int *)g_SuperWeaponTypeCount + j),
            *(unsigned int *)&stru_87C374[44244]);
        *(unsigned int *)&HouseClass_Player[40296] = 0;
        switch ( *(unsigned int *)&HouseClass_Player[29932] )
        {
  char v27; // al
          case 0:
            goto LABEL_40;
          case 1:
          case 2:
            p_visibilityFlags = &stru_825BAC.visibilityFlags;
            do
            {
              if ( !*((unsigned char *)p_visibilityFlags + 12) )
                *(unsigned char *)*p_visibilityFlags = 0;
              p_visibilityFlags += 4;
            }
            while ( (int)p_visibilityFlags < (int)g_PlayerHouseFlags_End );
            HouseClass_Player[39106] = 1;
            if ( !NullModemClass::COMStub(&HouseClass_Player[44324]) )
            {
              esi12 = 18;
              *(unsigned int *)&HouseClass_Player[29932] = 0;
              goto LABEL_134;
            }
            EventClass::CheckFlag(&HouseClass_Player[44324]);
            if ( *(unsigned int *)&HouseClass_Player[29932] == 2 )
            {
              if ( *(unsigned int *)&HouseClass_Player[40420] )
                goto LABEL_93;
            }
            else if ( *(unsigned int *)&HouseClass_Player[29932] != 1
                   || *(unsigned int *)&HouseClass_Player[40420] != 2 )
            {
LABEL_93:
              v27 = ModemGuest::Dialog((LONG)v62);
              goto LABEL_97;
            }
            v27 = ModemHost::Dialog((LONG)v63);
LABEL_97:
            if ( !v27 )
            {
              *(unsigned int *)&HouseClass_Player[29932] = 0;
              esi12 = 18;
            }
LABEL_116:
            switch ( *(unsigned int *)&HouseClass_Player[29932] )
            {
              case 1:
              case 2:
              case 4:
              case 5:
                goto LABEL_145;
              case 3:
                int * v32 = &stru_825BAC.visibilityFlags;
                do
                {
                  if ( !*((unsigned char *)v32 + 12) )
                    *(unsigned char *)*v32 = 0;
                  v32 += 4;
                }
                while ( (int)v32 < (int)g_PlayerHouseFlags_End );
                ScenarioClass::LoadNetworkConfig((int)&HouseClass_Player[29932]);
                if ( *(unsigned int *)&stru_87C374[45748] )
                {
                  (***(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748])(
                    *(unsigned int *)&stru_87C374[45748],
                    1);
                  *(unsigned int *)&stru_87C374[45748] = 0;
                }
                for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
                  (*(void (__thiscall **)(unsigned int, unsigned int))(**((unsigned int **)g_SuperWeaponTypeCount + j) + 100))(
                    *((unsigned int *)g_SuperWeaponTypeCount + j),
                    *(unsigned int *)&stru_87C374[44244]);
                *(unsigned int *)&HouseClass_Player[29932] = 3;
                *(unsigned int *)&HouseClass_Player[29952] = 2;
                if ( *(unsigned int *)&stru_87C374[45748] )
                  goto LABEL_134;
                unsigned int * v33 = (unsigned int *)operator new(0x3F310u);
                if ( v33 )
                  v36 = (IPXInterfaceClass *)IPXInterfaceClass::Construct(v33);
                IPXInterfaceClass *v36 = 0;
                *(unsigned int *)&stru_87C374[45748] = v36;
                WinsockInterface::Init(v36);
                Screen::Capture(1, 0, 0, -1);
                if ( InitNetworkGameState() && NetworkLobby::CreateGame() )
                  goto LABEL_145;
                *(unsigned int *)&HouseClass_Player[29932] = 0;
                esi12 = 18;
                if ( *(unsigned int *)&stru_87C374[45748] )
                  (***(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748])(
                    *(unsigned int *)&stru_87C374[45748],
                    1);
                *(unsigned int *)&stru_87C374[45748] = 0;
                break;
              default:
                goto LABEL_134;
            }
            break;
          case 4:
            int * v28 = &stru_825BAC.visibilityFlags;
            do
            {
              if ( !*((unsigned char *)v28 + 12) )
                *(unsigned char *)*v28 = 0;
              v28 += 4;
            }
            while ( (int)v28 < (int)g_PlayerHouseFlags_End );
            Debug::Log();
            memset(&HouseClass_Player[40672], 0, 0x20u);
            j = 0;
            *(unsigned short *)&HouseClass_Player[42332] = 0;
            char v29 = Network::Init();
            int v30 = RunWOLMainLoop(esi12 == 17);
            esi12 = 16;
            HouseClass_Player[39106] = 0;
            switch ( v30 )
            {
              case -2:
              case 0:
                if ( *(unsigned int *)&stru_87C374[45748] )
                  (***(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748])(
                    *(unsigned int *)&stru_87C374[45748],
                    1);
                *(unsigned int *)&stru_87C374[45748] = 0;
                esi12 = 18;
                *(unsigned int *)&HouseClass_Player[29932] = 0;
                v31 = (Movie *)StringList::Find(&g_BuildingTypeClass_Count, g_INI_Key_INTRO);
                ThemeClass::Play((int *)&g_BuildingTypeClass_Count, v31);
                goto LABEL_116;
              case -1:
                Theme::Stop(&g_BuildingTypeClass_Count, (ObjectClass *)1);
                if ( !g_Is16BitMode )
                  FadePalette(&stru_87C374[35596], 30, 0);
                if ( *(unsigned int *)&stru_87C374[45748] )
                  (***(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748])(
                    *(unsigned int *)&stru_87C374[45748],
                    1);
                *(unsigned int *)&stru_87C374[45748] = 0;
                result = 0;
                break;
              case 1:
                Debug::Log();
                if ( v29 )
                {
                  var110_2 = 0;
                  g_WOLReturnCode = 2;
                }
                else
                {
                  *(unsigned int *)&HouseClass_Player[29932] = 0;
                  esi12 = 18;
                  if ( *(unsigned int *)&stru_87C374[45748] )
                    (***(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748])(
                      *(unsigned int *)&stru_87C374[45748],
                      1);
                  *(unsigned int *)&stru_87C374[45748] = 0;
                  g_WOLReturnCode = -1;
                }
                goto LABEL_116;
              case 2:
                if ( *(unsigned int *)&stru_87C374[45748] )
                  (***(void (__thiscall ****)(unsigned int, int))&stru_87C374[45748])(
                    *(unsigned int *)&stru_87C374[45748],
                    1);
                *(unsigned int *)&stru_87C374[45748] = 0;
                *(unsigned int *)&HouseClass_Player[29932] = 0;
                esi12 = 11;
                goto LABEL_116;
              default:
                goto LABEL_116;
            }
            return result;
          case 5:
            if ( !ShowSkirmishSetupScreen(0, -1) )
            {
              *(unsigned int *)&HouseClass_Player[29932] = 0;
              esi12 = 1;
            }
            goto LABEL_116;
          default:
            goto LABEL_116;
        }
        goto LABEL_134;
      default:
        goto LABEL_134;
    }
  }
}
} // namespace gamemd

// 0x52F620
namespace gamemd {
char CommandLine_Parse(int a1, int a2)
{
  char **v4; // esi
  char *v5; // esi
  int v6; // eax
  int v7; // edi
  char *v8; // eax
  int *v9; // eax
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  int v12; // eax
  char *v13; // esi
  char v14; // al
  bool v15; // cc
  const wchar_t *v17; // eax
  const wchar_t *v18; // eax
  const wchar_t *v19; // eax
  const wchar_t *v20; // eax
  const wchar_t *v21; // eax
  const wchar_t *v22; // eax
  char v23; // [esp+10h] [ebp-28h] BYREF
  int v24; // [esp+14h] [ebp-24h]
  char **v25; // [esp+18h] [ebp-20h]
  _BYTE v26[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h] BYREF
  __int16 v29; // [esp+28h] [ebp-10h]

  v27 = a1; /*0x52f630*/
  ScenarioClass::ResetIntroFlags(&dword_A8E960); /*0x52f634*/
  byte_A8ED6B = 0; /*0x52f63e*/
  v24 = 1; /*0x52f644*/
  if ( a1 <= 1 ) /*0x52f64c*/
    return 1; /*0x52fb40*/
  v4 = (char **)(a2 + 4); /*0x52f652*/
  v25 = v4; /*0x52f65a*/
  while ( 1 ) /*0x52f666*/
  {
    v5 = _strupr(*v4); /*0x52f666*/
    if ( _strcmpi(aJabber, v5) ) /*0x52f66e*/
      break; /*0x52f66e*/
    RestartNetworkSession(1); /*0x52f67f*/
  LABEL_64:
    v4 = v25 + 1; /*0x52fb17*/
    v15 = ++v24 < v27; /*0x52fb27*/
    ++v25; /*0x52fb2d*/
    if ( !v15 ) /*0x52fb31*/
      return 1; /*0x52fb31*/
  }
  if ( !_strcmpi(aStr, v5) ) /*0x52f68f*/
  {
    ToggleNetworkSession(1); /*0x52f6a0*/
    goto LABEL_64; /*0x52f6a5*/
  }
  if ( !_strcmpi(aNostr, v5) ) /*0x52f6b0*/
  {
    ToggleNetworkSession(0); /*0x52f6be*/
    goto LABEL_64; /*0x52f6c3*/
  }
  if ( !_strcmpi(aNoaudio, v5) ) /*0x52f6ce*/
  {
    g_Audio_MixerEnabled = 0; /*0x52f6da*/
    goto LABEL_64; /*0x52f6e0*/
  }
  if ( !_strcmpi(aRecord, v5) ) /*0x52f6eb*/
  {
    dword_A8F784 = 1; /*0x52f6f7*/
    goto LABEL_64; /*0x52f701*/
  }
  if ( !_strcmpi(aPlay, v5) ) /*0x52f70c*/
  {
    dword_A8F784 = 2; /*0x52f718*/
    goto LABEL_64; /*0x52f71e*/
  }
  if ( !_strcmpi(&unk_8265B8, v5) /*0x52f76b*/
    || !_strcmpi(&unk_8265B4, v5)
    || !_strcmpi(&unk_8265B0, v5)
    || !_strcmpi(&unk_8265AC, v5) )
  {
    v18 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0, (int)g_Str_File_Init_CPP, 3414); /*0x52fb7b*/
    _putws(v18); /*0x52fb81*/
    v19 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_0, (int)g_Str_File_Init_CPP, 3415); /*0x52fb9a*/
    _putws(v19); /*0x52fba0*/
    v20 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_1, (int)g_Str_File_Init_CPP, 3416); /*0x52fbb9*/
    _putws(v20); /*0x52fbbf*/
    v21 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_2, (int)g_Str_File_Init_CPP, 3417); /*0x52fbd8*/
    _putws(v21); /*0x52fbde*/
    v22 = (const wchar_t *)GetStringCSF(aTxtOptionHelp0_3, (int)g_Str_File_Init_CPP, 3418); /*0x52fbf7*/
    _putws(v22); /*0x52fbfd*/
    v17 = (const wchar_t *)GetStringCSF((wchar_t *)aTxtOptionHelp0_4, (int)g_Str_File_Init_CPP, 3419); /*0x52fc16*/
    goto LABEL_67; /*0x52fc16*/
  }
  if ( Checksummer::HashString(v5) == -648255326 ) /*0x52f787*/
  {
    v6 = dword_A8E960; /*0x52f789*/
    IDA_LOBYTE(v6) = dword_A8E960 | 4; /*0x52f78e*/
    dword_A8E960 = v6; /*0x52f790*/
    goto LABEL_64; /*0x52f795*/
  }
  if ( strstr(v5, SubStr) ) /*0x52f7a0*/
  {
    byte_89E3A0 = 1; /*0x52f7af*/
    Game::FindGameDirectoryCD(v5 + 3); /*0x52f7b6*/
    goto LABEL_64; /*0x52f7bb*/
  }
  if ( strstr(v5, aDestnet_0) ) /*0x52f7c6*/
  {
    v7 = 0; /*0x52f7df*/
    v8 = strtok(v5 + 8, asc_826598); /*0x52f7e1*/
    if ( v8 ) /*0x52f7eb*/
    {
      do /*0x52f82c*/
      {
        sscanf(v8, "%x", &v23); /*0x52f7fc*/
        if ( v7 >= 4 ) /*0x52f807*/
          *((_BYTE *)&v27 + v7) = v23; /*0x52f817*/
        else
          v26[v7] = v23; /*0x52f80d*/
        ++v7; /*0x52f821*/
        v8 = strtok(0, asc_826598); /*0x52f822*/
      }
      while ( v8 ); /*0x52f82c*/
      if ( v7 >= 4 ) /*0x52f831*/
      {
        v28 = -1; /*0x52f83e*/
        v29 = -1; /*0x52f847*/
        dword_A8D5FC = 1; /*0x52f852*/
        v9 = (int *)NetworkAddress::Assign(v26, &v28, 0); /*0x52f85c*/
        stru_A8D600 = *v9; /*0x52f863*/
        dword_A8D604 = v9[1]; /*0x52f86c*/
        dword_A8D608 = v9[2]; /*0x52f875*/
      }
    }
    goto LABEL_64; /*0x52f87a*/
  }
  if ( strstr(v5, aSocket_0) ) /*0x52f885*/
  {
    v10 = atoi(&v5[strlen(aSocket_1)]) + 0x4000; /*0x52f8a8*/
    if ( v10 >= 0x4000 ) /*0x52f8b4*/
      Network::GetField(v10); /*0x52f8ca*/
    goto LABEL_64; /*0x52f8cf*/
  }
  SessionClass::SetInstance(0); /*0x52f8d6*/
  if ( strstr(v5, aMpdebug) ) /*0x52f8e1*/
  {
    byte_B04880 = 1; /*0x52f8ed*/
    byte_A8B8B4 = 1; /*0x52f8f4*/
  }
  if ( strstr(v5, aDrop) ) /*0x52f901*/
  {
    v11 = atoi(&v5[strlen(aDrop)]); /*0x52f91f*/
    SessionClass::SetInstance(v11); /*0x52f92f*/
    goto LABEL_64; /*0x52f934*/
  }
  if ( strstr(v5, aSpeedcontrol) ) /*0x52f93f*/
    byte_A8EDDC = 1; /*0x52f94b*/
  if ( strstr(v5, aDlink1) ) /*0x52f958*/
    dword_B77E18 = 1; /*0x52f964*/
  if ( strstr(v5, aNetgear) ) /*0x52f974*/
    dword_B77E18 = 2; /*0x52f980*/
  if ( strstr(v5, aNorouter) ) /*0x52f98c*/
    byte_A8E2C8 = 0; /*0x52f998*/
  if ( strstr(v5, aStealth) ) /*0x52f9a4*/
  {
    byte_A8D60C = 1; /*0x52f9b0*/
    goto LABEL_64; /*0x52f9b7*/
  }
  if ( strstr(v5, aMessages) ) /*0x52f9c2*/
  {
    byte_A8D60D = 0; /*0x52f9ce*/
    goto LABEL_64; /*0x52f9d4*/
  }
  if ( strstr(v5, aAttract) ) /*0x52f9df*/
  {
    v12 = dword_A8D5F8; /*0x52f9eb*/
    IDA_LOBYTE(v12) = dword_A8D5F8 | 4; /*0x52f9f0*/
    dword_A8D5F8 = v12; /*0x52f9f2*/
    goto LABEL_64; /*0x52f9f7*/
  }
  if ( isdigit(v5[1]) ) /*0x52fa01*/
  {
    sscanf(v5, "-%dX%d", &dword_A8EB84, &dword_A8EB88); /*0x52fa1d*/
    goto LABEL_64; /*0x52fa25*/
  }
  if ( !strcmp(v5, a480) ) /*0x52fa37*/
  {
    dword_A8EB88 = 480; /*0x52fa5c*/
    goto LABEL_64; /*0x52fa66*/
  }
  if ( !strcmp(v5, unk_82650C) ) /*0x52fa78*/
  {
    g_Is16BitMode = 1; /*0x52fa9d*/
    goto LABEL_64; /*0x52faa4*/
  }
  if ( !_strcmpi(v5, aWin) ) /*0x52faac*/
  {
    g_DDraw_Initialized = 1; /*0x52fab8*/
    goto LABEL_64; /*0x52fabf*/
  }
  if ( _strnicmp(v5, unk_8264FC, strlen(unk_826500)) ) /*0x52fad7*/
    goto LABEL_64; /*0x52fad7*/
  v13 = &v5[strlen(unk_8264FC)]; /*0x52faf0*/
  v14 = *v13; /*0x52faf2*/
  if ( !*v13 ) /*0x52faf2*/
    goto LABEL_64; /*0x52faf6*/
  while ( 1 ) /*0x52fafc*/
  {
    ++v13; /*0x52fafc*/
    if ( toupper(v14) != 81 ) /*0x52fb08*/
      break; /*0x52fb08*/
    byte_A8ED64 = 1; /*0x52fb0a*/
    v14 = *v13; /*0x52fb11*/
    if ( !*v13 ) /*0x52fb11*/
      goto LABEL_64; /*0x52fb15*/
  }
  v17 = (const wchar_t *)GetStringCSF(aTxtInvalid, (int)g_Str_File_Init_CPP, 3732); /*0x52fb52*/
  LABEL_67:
  _putws(v17); /*0x52fb57*/
  return 0; /*0x52fb37*/
}
}
// 0x52FC20
namespace gamemd {
Straw * * Random_Init()
{
  DWORD TickCount; // eax
  int result; // eax
  struct _SYSTEMTIME SystemTime; // [esp+8h] [ebp-408h] BYREF
  _BYTE v4[1012]; // [esp+1Ch] [ebp-3F4h] BYREF

  Debug::Log(); /*0x52fc2d*/
  if ( dword_A8B8B8 || (dword_A8D5F8 & 2) != 0 || UI_Update() ) /*0x52fc4f*/
  {
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe66*/
    qmemcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe80*/
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe8d*/
    qmemcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52feab*/
    return Debug::Log(); /*0x52fead*/
  }
  else
  {
    if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x52fc68*/
    {
      GetSystemTime(&SystemTime); /*0x52fc73*/
      Random::AdvanceRandomBytes(stru_A8E7B0.__pad_0, SystemTime.wMilliseconds); /*0x52fc83*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond); /*0x52fc98*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 1); /*0x52fcae*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 2); /*0x52fcc6*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 3); /*0x52fcde*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wSecond >> 4); /*0x52fcf5*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute); /*0x52fd0a*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 1); /*0x52fd21*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 2); /*0x52fd38*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 3); /*0x52fd50*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMinute >> 4); /*0x52fd68*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wHour); /*0x52fd7c*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wDay); /*0x52fd91*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wDayOfWeek); /*0x52fda6*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wMonth); /*0x52fdba*/
      SHA1TickRNG((ObjectClass *)&stru_A8E7B0, SystemTime.wYear); /*0x52fdcf*/
      TickCount = dword_A8ED98; /*0x52fdd4*/
      if ( !dword_A8ED98 ) /*0x52fddb*/
      {
        RandomStraw::Release((RandomStraw *)&stru_A8E7B0, (int)&dword_A8ED94, 4); /*0x52fde9*/
        TickCount = GetTickCount(); /*0x52fdee*/
      }
      dword_A8ED94 = TickCount; /*0x52fdf4*/
    }
    Debug::Log(); /*0x52fe05*/
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe17*/
    qmemcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe31*/
    result = (int)SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe3e*/
    qmemcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52fe51*/
  }
  return result; /*0x52fe53*/
}
}
// 0x52FFD0
namespace gamemd {
void sub_52FFD0(char a1)
{
  int result; // eax
  Frame *v3; // ecx
  result = (*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x52ffdd*/
  if ( a1 ) /*0x52ffe3*/
  {
    IDA_LOBYTE(v3) = 1; /*0x52ffed*/
    return Frame::Present(v3, 0); /*0x52ffef*/
  }
  return result; /*0x52ffe2*/
}
} // namespace gamemd

// 0x520260
namespace gamemd {
char E4Recv_520260::sub_520260()
{
  int v2; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this->u32_5D4; /*0x520266*/
  if ( v2 && this->isInPlayfield[0] ) /*0x520270*/
    *(_BYTE *)(v2 + 130) = 1; /*0x52027a*/
  if ( this->u32_5D4 ) /*0x520281*/
    return 0; /*0x520281*/
  if ( (*(int (__thiscall **)(TechnoClass *))(this->vtable0 + 388))(this) != 5 ) /*0x520298*/
    return 0; /*0x520298*/
  v4[0] = this->location[0]; /*0x5202a6*/
  v4[1] = this->location[1]; /*0x5202b2*/
  v4[2] = this->location[2]; /*0x5202b9*/
  if ( (unsigned __int8)Tactical::IsCellVisible((Tactical *)&dword_87F7E8, v4) ) /*0x5202c2*/
    return 0; /*0x5202e6*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 928))(this); /*0x5202cf*/
  (*(void (__thiscall **)(TechnoClass *))(this->vtable0 + 248))(this); /*0x5202d9*/
  return 1; /*0x5202e1*/
}
} // namespace gamemd

// 0x522540
namespace gamemd {
char E4Recv_522540::sub_522540()
{
  return *(_BYTE *)(this->u32_6C0 + 1708); /*0x52254c*/
}
} // namespace gamemd

// 0x522A50
namespace gamemd {
void nullsub_146(int a1)
{
  ; /*0x522a50*/
}
} // namespace gamemd

// 0x523490
namespace gamemd {
void sub_523490()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52349c*/
  dbl_A8F268 = Math::Sqrt(v0 + v0); /*0x5234ae*/
}
} // namespace gamemd

// 0x5234C0
namespace gamemd {
void sub_5234C0()
{
  dbl_A8F2C0 = dbl_A8F268 / 60.0; /*0x5234cc*/
}
} // namespace gamemd

// 0x5234E0
namespace gamemd {
void sub_5234E0()
{
  dbl_A8F2A8 = 1.0 / dbl_A8F2C0; /*0x5234ec*/
}
} // namespace gamemd

// 0x523500
namespace gamemd {
void sub_523500()
{
  dbl_A8F2A0 = 0.0174532925199433 * 45.0; /*0x52350c*/
}
} // namespace gamemd

// 0x523520
namespace gamemd {
void sub_523520()
{
  dbl_A8F270 = 0.0174532925199433 * 60.0; /*0x52352c*/
}
} // namespace gamemd

// 0x523540
namespace gamemd {
void sub_523540()
{
  dbl_A8F248 = 0.0174532925199433 * 90.0; /*0x52354c*/
}
} // namespace gamemd

// 0x523560
namespace gamemd {
long long sub_523560()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F248 - dbl_A8F270); /*0x523572*/
  result = Math::RoundToInt(v0 * dbl_A8F268 * 0.5); /*0x523586*/
  dword_A8F2CC = result; /*0x52358b*/
  return result; /*0x523590*/
}
} // namespace gamemd

// 0x5235A0
namespace gamemd {
void sub_5235A0()
{
  dbl_A8F278 = Math::ArcTan((double)dword_A8F2CC * 0.00390625); /*0x5235b7*/
}
} // namespace gamemd

// 0x5235D0
namespace gamemd {
void sub_5235D0()
{
  dbl_A8F298 = Math::ArcTan((double)(2 * dword_A8F2CC) / dbl_A8F268); /*0x5235f2*/
}
} // namespace gamemd

// 0x523600
namespace gamemd {
long long sub_523600()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F2CC) + 0.5); /*0x52361b*/
  dword_A8F2BC = result; /*0x523620*/
  return result; /*0x523626*/
}
} // namespace gamemd

// 0x523630
namespace gamemd {
int sub_523630()
{
  word_A8F260 = 0; /*0x523632*/
  word_A8F262 = 0; /*0x523638*/
  return 0; /*0x52363e*/
}
} // namespace gamemd

// 0x523640
namespace gamemd {
int sub_523640()
{
  dword_A8F280 = 0; /*0x523642*/
  dword_A8F284 = 0; /*0x523647*/
  dword_A8F288 = 0; /*0x52364c*/
  return 0; /*0x523651*/
}
} // namespace gamemd

// 0x523660
namespace gamemd {
int sub_523660()
{
  dword_A8F2B8 = 0; /*0x523665*/
  dword_A8F2B0 = 128; /*0x52366f*/
  dword_A8F2B4 = 128; /*0x523674*/
  return 128; /*0x523679*/
}
} // namespace gamemd

// 0x523680
namespace gamemd {
int sub_523680()
{
  dword_A8F250 = 0; /*0x523682*/
  dword_A8F254 = 0; /*0x523687*/
  dword_A8F258 = 0; /*0x52368c*/
  dword_A8F25C = 0; /*0x523691*/
  return 0; /*0x523696*/
}
} // namespace gamemd

// 0x523C80
namespace gamemd {
void nullsub_147()
{
  ; /*0x523c80*/
}
} // namespace gamemd

// 0x5247B0
namespace gamemd {
int InfantryTypeClass::j__do_always_noconv_codecvt_base_std__MBE_NXZ_19()
{
  return AbstractClass::processWeaponFire();
}
} // namespace gamemd

// 0x524EC0
namespace gamemd {
Iostream_init * E4Recv_524EC0::__0Iostream_init_QAE_XZ_4()
{
  return this; /*0x524ec2*/
}
} // namespace gamemd

// 0x5256D0
namespace gamemd {
int sub_5256D0()
{
  dword_A8F2D0 = 0; /*0x5256d2*/
  dword_A8F2D4 = 0; /*0x5256d7*/
  dword_A8F2D8 = 0; /*0x5256dc*/
  dword_A8F2DC = 0; /*0x5256e1*/
  return 0; /*0x5256e6*/
}
} // namespace gamemd

// 0x526950
namespace gamemd {
int E4Recv_526950::sub_526950()
{
  return this->fallRate; /*0x526953*/
}
} // namespace gamemd

// 0x52AAF0
namespace gamemd {
void E4Recv_52AAF0::sub_52AAF0()
{
  void *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  void *v7; // [esp-8h] [ebp-10h]

  v2 = (void *)this->u32_C; /*0x52aaf4*/
  free(v2); /*0x52aafe*/
  v7 = (void *)this->ptr_10; /*0x52ab08*/
  this->u32_C = 0; /*0x52ab09*/
  free(v7); /*0x52ab0c*/
  v3 = this->u32_14; /*0x52ab11*/
  this->ptr_10 = 0; /*0x52ab19*/
  if ( v3 ) /*0x52ab1c*/
  {
    do /*0x52ab40*/
    {
      free(*this->u32_14); /*0x52ab25*/
      v4 = *(unsigned int *)(this->u32_14 + 4); /*0x52ab2f*/
      RA2_OPDEL(this->u32_14); /*0x52ab33*/
      this->u32_14 = v4; /*0x52ab3d*/
    }
    while ( v4 ); /*0x52ab40*/
  }
  free(*(unsigned int *)&this->q018); /*0x52ab47*/
  *(unsigned int *)&this->q018 = 0; /*0x52ab51*/
  if ( this ) /*0x52ab5a*/
  {
    v5 = this->u32_4; /*0x52ab5c*/
    if ( v5 ) /*0x52ab61*/
    {
      v6 = this->u32_8; /*0x52ab63*/
      if ( v6 ) /*0x52ab68*/
      {
        *(unsigned int *)(v6 + 4) = v5; /*0x52ab6a*/
        *(unsigned int *)(this->u32_4 + 8) = this->u32_8; /*0x52ab73*/
        this->u32_8 = 0; /*0x52ab76*/
        this->u32_4 = 0; /*0x52ab79*/
      }
    }
  }
}
} // namespace gamemd

// 0x52B6A0
namespace gamemd {
int CompareFunc3Int(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x52b6b0*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
} // namespace gamemd

// 0x52B7A0
namespace gamemd {
int sub_52B7A0()
{
  dword_A8F2E8 = 0; /*0x52b7a2*/
  dword_A8F2EC = 0; /*0x52b7a7*/
  dword_A8F2F0 = 0; /*0x52b7ac*/
  dword_A8F2F4 = 0; /*0x52b7b1*/
  return 0; /*0x52b7b6*/
}
} // namespace gamemd

// 0x52B7C0
namespace gamemd {
void sub_52B7C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x52b7cc*/
  dbl_A8F418 = Math::Sqrt(v0 + v0); /*0x52b7de*/
}
} // namespace gamemd

// 0x52B7F0
namespace gamemd {
void sub_52B7F0()
{
  dbl_A8F778 = dbl_A8F418 / 60.0; /*0x52b7fc*/
}
} // namespace gamemd

// 0x52B810
namespace gamemd {
void sub_52B810()
{
  dbl_A8F760 = 1.0 / dbl_A8F778; /*0x52b81c*/
}
} // namespace gamemd

// 0x52B830
namespace gamemd {
void sub_52B830()
{
  dbl_A8F758 = 0.0174532925199433 * 45.0; /*0x52b83c*/
}
} // namespace gamemd

// 0x52B850
namespace gamemd {
void sub_52B850()
{
  dbl_A8F5A0 = 0.0174532925199433 * 60.0; /*0x52b85c*/
}
} // namespace gamemd

// 0x52B870
namespace gamemd {
void sub_52B870()
{
  dbl_A8F2E0 = 0.0174532925199433 * 90.0; /*0x52b87c*/
}
} // namespace gamemd

// 0x52B890
namespace gamemd {
long long sub_52B890()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_A8F2E0 - dbl_A8F5A0); /*0x52b8a2*/
  result = Math::RoundToInt(v0 * dbl_A8F418 * 0.5); /*0x52b8b6*/
  dword_A8F780 = result; /*0x52b8bb*/
  return result; /*0x52b8c0*/
}
} // namespace gamemd

// 0x52B8D0
namespace gamemd {
void sub_52B8D0()
{
  dbl_A8F5A8 = Math::ArcTan((double)dword_A8F780 * 0.00390625); /*0x52b8e7*/
}
} // namespace gamemd

// 0x52B900
namespace gamemd {
void sub_52B900()
{
  dbl_A8F648 = Math::ArcTan((double)(2 * dword_A8F780) / dbl_A8F418); /*0x52b922*/
}
} // namespace gamemd

// 0x52B930
namespace gamemd {
long long sub_52B930()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_A8F780) + 0.5); /*0x52b94b*/
  dword_A8F774 = result; /*0x52b950*/
  return result; /*0x52b956*/
}
} // namespace gamemd

// 0x52B960
namespace gamemd {
int sub_52B960()
{
  word_A8F2F8 = 0; /*0x52b962*/
  word_A8F2FA = 0; /*0x52b968*/
  return 0; /*0x52b96e*/
}
} // namespace gamemd

// 0x52B970
namespace gamemd {
int sub_52B970()
{
  dword_A8F638 = 0; /*0x52b972*/
  dword_A8F63C = 0; /*0x52b977*/
  dword_A8F640 = 0; /*0x52b97c*/
  return 0; /*0x52b981*/
}
} // namespace gamemd

// 0x52B990
namespace gamemd {
int sub_52B990()
{
  dword_A8F770 = 0; /*0x52b995*/
  dword_A8F768 = 128; /*0x52b99f*/
  dword_A8F76C = 128; /*0x52b9a4*/
  return 128; /*0x52b9a9*/
}
} // namespace gamemd

// 0x52CB80
namespace gamemd {
void nullsub_18()
{
  ; /*0x52cb80*/
}
} // namespace gamemd

// 0x52D430
namespace gamemd {
INT_PTR ReadModConfigINI(HWND hDlg, UINT a2, WPARAM a3, int * a4)
{
  HWND v5; // ebx
  int i; // esi
  HWND DlgItem; // eax
  INT_PTR v8; // eax
  char lParam[128]; // [esp+4h] [ebp-80h] BYREF

  if ( a2 > 0x110 ) /*0x52d440*/
  {
    if ( a2 == 273 ) /*0x52d516*/
    {
      if ( ((unsigned __int16)a3 == 2 || (unsigned __int16)a3 == 1188) && !IDA_HIWORD(a3) ) /*0x52d563*/
      {
        DlgItem = GetDlgItem(hDlg, 1187); /*0x52d575*/
        v8 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d585*/
        EndDialog(hDlg, v8); /*0x52d58d*/
        DestroyWindow(hDlg); /*0x52d594*/
      }
    }
    else if ( a2 == 534 ) /*0x52d51d*/
    {
      return (unsigned __int8)Window::ClampToScreen(a4); /*0x52d546*/
    }
    return 0; /*0x52d51d*/
  }
  if ( a2 != 272 ) /*0x52d446*/
  {
    if ( a2 == 83 ) /*0x52d44b*/
    {
      System_Read_776880((HWND *)a4); /*0x52d475*/
      return 0; /*0x52d483*/
    }
    if ( a2 == 123 ) /*0x52d450*/
    {
      System_Read_7768A0((HWND)a3); /*0x52d45d*/
      return 0; /*0x52d46b*/
    }
    return 0; /*0x52d59a*/
  }
  Dialog::RestoreParent(hDlg); /*0x52d492*/
  v5 = GetDlgItem(hDlg, 1187); /*0x52d4a9*/
  for ( i = 0; i < a4[4]; ++i ) /*0x52d4b9*/
  {
    INIClass::GetString( /*0x52d4da*/
      *(unsigned __int8 ****)(a4[1] + 4 * i),
      (unsigned __int8 *)g_INI_Key_General,
      (unsigned __int8 *)g_INI_Key_Name,
      &g_INI_DefaultBuffer,
      lParam,
      128);
    SendMessageA(v5, 0x180u, 0, (LPARAM)lParam); /*0x52d4ec*/
  }
  SendMessageA(v5, 0x186u, 0, 0); /*0x52d500*/
  return 0; /*0x52d464*/
}
} // namespace gamemd

// 0x52D610
namespace gamemd {
void nullsub_148()
{
  ; /*0x52d610*/
}
} // namespace gamemd

// 0x52D620
namespace gamemd {
void nullsub_149()
{
  ; /*0x52d620*/
}
} // namespace gamemd

// 0x52D630
namespace gamemd {
void nullsub_150()
{
  ; /*0x52d630*/
}
} // namespace gamemd

// 0x52D790
namespace gamemd {
int sub_52D790(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x52d7a9*/
  if ( result ) /*0x52d7b0*/
    return result; /*0x52d7b0*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x52d7b9*/
  if ( a2 == 15 ) /*0x52d7c2*/
  {
    DlgItem = GetDlgItem(hWnd, 1818); /*0x52d82a*/
    SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x52d83a*/
    return 0; /*0x52d83a*/
  }
  if ( a2 != 273 ) /*0x52d7ca*/
    return 0; /*0x52d840*/
  switch ( (__int16)a3 ) /*0x52d7e5*/
  {
    case 1670: /*0x52d7e5*/
      *WindowLongA = 18; /*0x52d817*/
      result = 0; /*0x52d81e*/
      break; /*0x52d821*/
    case 1677: /*0x52d7e5*/
      *WindowLongA = 13; /*0x52d7ed*/
      result = 0; /*0x52d7f4*/
      break; /*0x52d7f7*/
    case 1678: /*0x52d7e5*/
      *WindowLongA = 14; /*0x52d7fb*/
      result = 0; /*0x52d802*/
      break; /*0x52d805*/
    case 1679: /*0x52d7e5*/
      *WindowLongA = 15; /*0x52d809*/
      result = 0; /*0x52d810*/
      break; /*0x52d813*/
    default:
      return 0;
  }
  return result; /*0x52d7ec*/
}
} // namespace gamemd
