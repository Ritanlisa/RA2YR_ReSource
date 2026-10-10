// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"

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
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/VoxelPaletteClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/RulesClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TextBuffer_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BitTextClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Palette_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int System_Get_751520(...); }  // w16g4 raw call-form
namespace gamemd { int sub_631FC0(...); }  // w16g4 raw call-form
namespace gamemd { int sub_631FE0(...); }  // w16g4 raw call-form
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int InitializeAudioSubsystem(...);  // raw 00406B10: int __thiscall InitializeAudioSubsystem(ObjectClass *this)
    int LoadExpansionMixFiles(...);  // raw 00530000: char LoadExpansionMixFiles(ObjectClass *this)
} // namespace gamemd

// 0x522100
namespace gamemd {  // G42.18 ns repair
int E4Recv_522100::sub_522100()
{
  int (__stdcall ***v2)(unsigned int, void *, int *); // eax
  int v3; // esi
  int v4; // eax
  bool v6; // bl
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  unsigned char v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  if ( !*(unsigned char *)(this->M1728 + 3476) ) /*0x522109*/
    return 0; /*0x522113*/
  v2 = (int (__stdcall ***)(unsigned int, void *, int *))this->M1652; /*0x522119*/
  v7 = 0; /*0x522124*/
  if ( !v2 ) /*0x52212c*/
    goto LABEL_11; /*0x52212c*/
  v3 = (**v2)(v2, &unk_818858, &v8); /*0x52213d*/
  if ( v3 >= 0 ) /*0x522141*/
  {
    v8 = v8; /*0x522150*/
    ((ComPtr *)((ComPtr *)&v7))->Release_Alt(); /*0x522158*/
    v4 = v8; /*0x52215d*/
  }
  else
  {
    ((ComPtr *)((ComPtr *)&v7))->Release_Alt(); /*0x522147*/
    v4 = 0; /*0x52214c*/
  }
  v7 = v4; /*0x522161*/
  if ( v3 < 0 && v3 != -2147467262 ) /*0x52216d*/
    sub_7DC720(v3); /*0x522170*/
  if ( !v4 ) /*0x52217b*/
  LABEL_11:
    sub_7DC720(-2147467261); /*0x522182*/
  (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)v4 + 12))(v4, v9); /*0x522193*/
  v6 = memcmp(v9, &g_CLSID_JumpjetLocomotion, 0x10u) == 0; /*0x5221ac*/
  if ( v7 ) /*0x5221b1*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x5221b6*/
  return v6; /*0x522115*/
}
}  // G42.18 ns repair
// 0x523440
namespace gamemd {
int BinaryArraySearch(AbstractClass * aP0, int edx0, int * a2)
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
    v5 = *(unsigned int *)(aP0 + 8 * (v3 / 2)); /*0x523456*/
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
    v22.vfptr = &vt_TypeList; /*0x52548c*/
    for ( i = (ObjectClass *)strtok(String, Str); i; i = (ObjectClass *)strtok(0, Str) ) /*0x52549e*/
    {
      if ( !(*((unsigned char *)&(i->vfptr))) ) /*0x5254a0*/
        break; /*0x5254a2*/
      _751520 = (ObjectClass *)System_Get_751520(i); /*0x5254a6*/
      if ( _751520 ) /*0x5254ad*/
      {
        _7515C0 = System_Get_7515C0(_751520); /*0x5254ba*/
        if ( v23 < v22.Capacity /*0x5254e2*/
          || (v22.IsAllocated || !v22.Capacity)
          && v24 > 0
          && (*((uint8_t (**)(VectorClass *, int, unsigned int))v22.vfptr + 2))(
               &v22,
               v24 + v22.Capacity,
               0) )
        {
          v15 = v23++; /*0x5254ed*/
          *((unsigned int *)v22.Items + v15) = _7515C0; /*0x5254f8*/
        }
      }
    }
    IntVector::Copy((IntVector *)a1,(unsigned int *)(&v22)); /*0x525514*/
    *(unsigned int *)a1 = (unsigned int)(&vt_TypeList); /*0x52551e*/
    v16 = v24; /*0x525528*/
    *(unsigned int *)(a1 + 16) = v23; /*0x52552c*/
    Items = v22.Items; /*0x52552f*/
    v18 = v22.Items == 0; /*0x525533*/
    *(unsigned int *)(a1 + 20) = v16; /*0x525535*/
    v22.vfptr = &vt_VectorClass; /*0x525538*/
    if ( !v18 && v22.IsAllocated ) /*0x525542*/
    {
      operator delete((void *)(Items)); /*0x525545*/
      v22.Items = 0; /*0x52554d*/
    }
    v19 = a6; /*0x525551*/
    v22.IsAllocated = 0; /*0x525558*/
    v22.Capacity = 0; /*0x52555e*/
    a5 = &vt_VectorClass; /*0x525562*/
    if ( a6 && (*(((unsigned char *)&(a8)) + (sizeof(a8) - 1))) ) /*0x525572*/
      goto LABEL_20; /*0x525572*/
  }
  else
  {
    *(unsigned int *)(a1 + 4) = 0; /*0x525587*/
    *(unsigned int *)(a1 + 8) = 0; /*0x52558a*/
    *(unsigned char *)(a1 + 12) = 1; /*0x52558d*/
    *(unsigned char *)(a1 + 13) = 0; /*0x525591*/
    *(unsigned int *)a1 = (unsigned int)(&vt_VectorClass); /*0x525594*/
    TypeList::Copy((TypeList *)a1, &a5); /*0x525596*/
    *(unsigned int *)a1 = (unsigned int)(&vt_TypeList); /*0x52559b*/
    a5 = &vt_VectorClass; /*0x5255a1*/
    v20 = a10; /*0x5255af*/
    *(unsigned int *)(a1 + 16) = a9; /*0x5255b6*/
    v19 = a6; /*0x5255b9*/
    v18 = a6 == 0; /*0x5255c0*/
    *(unsigned int *)(a1 + 20) = v20; /*0x5255c2*/
    if ( !v18 && (*(((unsigned char *)&(a8)) + (sizeof(a8) - 1))) ) /*0x5255ce*/
  LABEL_20:
      operator delete((void *)(v19)); /*0x5255d0*/
  }
  return (void *)(a1);
}
}
// 0x528220
namespace gamemd {
int E4Recv_528220::sub_528220(unsigned char * a2, unsigned char * a3, int a4)
{

  unsigned __int8 *v4; // ebp
  unsigned __int8 *v6; // edx
  unsigned int *vtable2; // esi
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
  unsigned char v23[12]; // [esp+8h] [ebp-Ch] BYREF

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
      v12 = *(unsigned int *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x529f1a*/
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
    v9 = strlen((const char *)LODWORD(v7)) + 1; /*0x52a15e*/
    v18 = (unsigned __int8 *)LODWORD(v7); /*0x52a164*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v21.buffer, 0); /*0x52a16a*/
    a4 = COERCE_FLOAT(Checksummer::Add_Buffer(v10, v18, v9 - 1)); /*0x52a176*/
    v11 = vtable2 + 11; /*0x52a17a*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a184*/
    {
      v12 = *(unsigned int *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a199*/
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
  v7 = String::GetOrEmpty_Alt((String *)LODWORD(Source)); /*0x52a310*/
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
      v12 = *(unsigned int *)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a39a*/
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
    || (strncpy(Destination, (const char *)LODWORD(Source), 0x40u),
        Destination[63] = 0,
        String::Trim(Destination),
        !strlen(Destination)) )
  {
LABEL_18:
    v14 = *a5; /*0x52a4a9*/
    v15 = (float *)*((unsigned int *)a5 + 1); /*0x52a4b2*/
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
  *((unsigned int *)a2 + 1) = v15; /*0x52a4c0*/
  a2[2] = v16; /*0x52a4c3*/
  return a2; /*0x52a4c6*/

}
}
// 0x52A4D0
namespace gamemd {
ObjectClass * * E4Recv_52A4D0::sub_52A4D0(uint8_t * a2)
{

  int v3; // eax
  ObjectClass *nextObject; // ecx
  int v5; // edi
  unsigned int *v6; // eax
  ObjectClass *v7; // edx
  int fallRate; // ecx
  int v9; // eax
  ObjectClass *v10; // eax
  unsigned int *v11; // ecx
  ObjectClass *v12; // ecx
  int v13; // ebp
  unsigned __int8 *v14; // edi
  int v15; // edx
  unsigned char v17[12]; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 *v18; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x52a4e0*/
    return 0; /*0x52a4e0*/
  memset(v17, 0, sizeof(v17)); /*0x52a4ed*/
  v3 = Checksummer::Add_Buffer((Checksummer *)v17, a2, strlen((const char *)a2)); /*0x52a504*/
  nextObject = this->nextObject; /*0x52a509*/
  v5 = v3; /*0x52a50c*/
  v18 = (unsigned __int8 *)v3; /*0x52a510*/
  if ( !nextObject ) /*0x52a514*/
    return 0; /*0x52a514*/
  v6 = (unsigned int *)this->ambientSoundController[0]; /*0x52a51a*/
  if ( v6 && *v6 == v5 ) /*0x52a523*/
    goto LABEL_9; /*0x52a523*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a525*/
  {
    qsort((void *)this->fallRate, (size_t)nextObject, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a536*/
    this->ambientSoundController[0] = 0; /*0x52a53e*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a541*/
  }
  v7 = this->nextObject; /*0x52a545*/
  fallRate = this->fallRate; /*0x52a54d*/
  *(unsigned int *)v17 = v5; /*0x52a550*/
  v9 = UI_Find(fallRate, (int)v7, (int *)v17); /*0x52a554*/
  if ( !v9 ) /*0x52a55b*/
    return 0; /*0x52a5f8*/
  this->ambientSoundController[0] = v9; /*0x52a561*/
LABEL_9:
  v10 = this->nextObject; /*0x52a564*/
  if ( !v10 ) /*0x52a56a*/
    return unk_B78830; /*0x52a56a*/
  v11 = (unsigned int *)this->ambientSoundController[0]; /*0x52a56c*/
  if ( v11 && *v11 == v5 ) /*0x52a575*/
    return *(unsigned int *)(this->ambientSoundController[0] + 4); /*0x52a5f3*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a577*/
  {
    qsort((void *)this->fallRate, (size_t)v10, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc3Int); /*0x52a588*/
    this->ambientSoundController[0] = 0; /*0x52a590*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a593*/
  }
  v12 = this->nextObject; /*0x52a597*/
  v13 = this->fallRate; /*0x52a59a*/
  if ( (int)v12 <= 0 ) /*0x52a59f*/
    return unk_B78830; /*0x52a59f*/
  while ( 1 ) /*0x52a5ac*/
  {
    v14 = *(unsigned __int8 **)(v13 + 8 * ((int)v12 / 2)); /*0x52a5ac*/
    v15 = v13 + 8 * ((int)v12 / 2); /*0x52a5b0*/
    if ( (int)v14 <= (int)v18 ) /*0x52a5b6*/
      break; /*0x52a5b6*/
    v12 = (ObjectClass *)((int)v12 / 2); /*0x52a5b8*/
LABEL_19:
    if ( (int)v12 <= 0 ) /*0x52a5ca*/
      return unk_B78830; /*0x52a5ca*/
  }
  if ( v14 != v18 ) /*0x52a5bc*/
  {
    v13 = v15 + 8; /*0x52a5be*/
    v12 = (ObjectClass *)((char *)v12 - 1 - (int)v12 / 2); /*0x52a5c6*/
    goto LABEL_19; /*0x52a5c6*/
  }
  if ( v15 ) /*0x52a5df*/
  {
    this->ambientSoundController[0] = v15; /*0x52a5e1*/
    return *(unsigned int *)(this->ambientSoundController[0] + 4); /*0x52a5e1*/
  }
  return unk_B78830; /*0x52a5d2*/

}
}
// 0x52A610
namespace gamemd {
ObjectClass * * E4Recv_52A610::sub_52A610(void * a2, void * aPrivatekey, void * aPublickey)
{
  signed int v3; // eax
  signed int v4; // eax
  unsigned char v6[512]; // [esp+8h] [ebp-200h] BYREF

  v3 = sub_631FC0((ObjectClass *)a2, v6); /*0x52a628*/
  INIClass::ReadBase64Data((uint8_t *)aPublickey, (int)v6, v3); /*0x52a63a*/
  v4 = sub_631FE0((ObjectClass *)a2, v6); /*0x52a646*/
  INIClass::ReadBase64Data((uint8_t *)aPrivatekey, (int)v6, v4); /*0x52a658*/
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

  Debug::Log("Init Game\n") /*G57c1: IDA 0x52ba73 push offset aInitGame*/;
  int v0 = operator new(0x3740u);
  int v1 = 0;
  if ( !v0 )
  {
    *(unsigned int *)&((unsigned int *)HouseClass_Player)[29924]= 0;
    goto LABEL_3;
  }
  *(unsigned int *)&((unsigned int *)HouseClass_Player)[29924]= (int)(ScenarioClass::Constructor((void *)(v0)));
  if ( !*(unsigned int *)&((unsigned int *)HouseClass_Player)[29924])
  {
LABEL_3:
    Debug::Log("Failed to instantiate Scenario!\n") /*G57c1: IDA 0x52baa0 push offset aFailedToInstan*/;
    return -1;
  }
  v3 = (RulesClass *)new RulesClass;
  if ( !v3 )
  {
    *(unsigned int *)&(&stru_87C374)[44652 ]= 0;
    goto LABEL_3;
  }
  *(unsigned int *)&(&stru_87C374)[44652 ]= RulesClass::Constructor(v3);
  if ( !*(unsigned int *)&(&stru_87C374)[44652 ])
    goto LABEL_3;
  Debug::Log("Bootstrap.....") /*G57c1: IDA 0x52bb07 push offset aBootstrap*/;
  if ( !g_Is16BitMode )
    FadePalette(&(&stru_87C374)[35596], 0, 0);
  if ( (&stru_89E138)[616] == 1 )
    SetSoundWarning(-2);
  do
    ((EventQueue *)(*(unsigned int **)&(&stru_87C374)[13308]))->Process();
  while ( !((unsigned int *)HouseClass_Player)[45108] );
  (&stru_89E138)[8040] = 0;
  TextBufferEntry = (unsigned char *)GetTextBufferEntry(4);
  ((TextBuffer *)TextBufferEntry)->Init();
  if ( !MixFileClass::Bootstrap() )
  {
    Debug::Log("Failed to initialize bootstrap mixfiles!\n") /*G57c1: IDA 0x52bb72 push offset aFailedToInitia*/;
    Debug::Log_0();
    return -1;
  }
  unsigned int * v5 = (unsigned int *)operator new(4u);
  if ( v5 )
    unk_89C4B8 = (unsigned char)(((BitTextClass *)v5)->LoadFont());
  else
    unk_89C4B8 = 0;
  Init::StubPlaceholder();
  LoadMouseClassResources();
  InitializeAudioSubsystem(*(void **)&stru_830620[66640]);
  ((Timer*)(*(HWND **)&(&stru_87C374)[13308]))->PumpMessages();
  IDA_LOBYTE(v6) = 0;
  v7 = (AbstractClass *)SearchMIXFile( (char *)(&(&g_Str_File_MOUSE_SHA)[140]),(char)(v6));
  memcpy(&(&stru_87C374)[40972], v7, 0x300u);
  for ( i = 0; i < 256; ++i )
  {
    esi20 = (char *)(&((unsigned int **)&stru_87C374)[22428][3 * (i % 256) + 18544]);
  unsigned char v89[4]; // [esp+34h] [ebp-2F0Ch] BYREF
    v9 = (ObjectClass *)Palette::SixBitTo16Bit(
                          v89,
                          4 * *esi20,
                          4 * (&stru_87C374)[22428][3 * (i % 256) + 18545],
                          4 * (&stru_87C374)[22428][3 * (i % 256) + 18546]);
    *(unsigned short *)esi20 = *(unsigned short *)v9->q000;
    esi20[2] = ((unsigned char *)&v9->q000)[2];
  }
  IDA_LOBYTE(v11) = 0;
  v12 = (AbstractClass *)SearchMIXFile( (char *)(&(&g_Str_File_MOUSE_SHA)[124]),(char)(v11));
  memcpy(&(&stru_87C374)[37900], v12, 0x300u);
  for ( j = 0; j < 256; ++j )
  {
    char * v14 = &((unsigned int **)&stru_87C374)[22428][3 * (j % 256) + 15472];
    v13 = (ObjectClass *)Palette::SixBitTo16Bit(
                           v90,
                           4 * *v14,
                           4 * (&stru_87C374)[22428][3 * (j % 256) + 15473],
                           4 * (&stru_87C374)[22428][3 * (j % 256) + 15474]);
    *(unsigned short *)v14 = *(unsigned short *)v13->q000;
    v14[2] = ((unsigned char *)&v13->q000)[2];
  }
  Block::Copy(&(&stru_87C374)[38668], &(&stru_87C374)[37900]);
  Block::Copy(&(&stru_87C374)[40204], &(&stru_87C374)[37900]);
  (&stru_87C374)[39438] = (&stru_87C374)[35598];
  IDA_LOBYTE(v16) = 0;
  *(unsigned short *)&(&stru_87C374)[39436 ]= *(unsigned short *)&(&stru_87C374)[35596];
  eax23 = (AbstractClass *)SearchMIXFile( (char *)(&(&g_Str_File_MOUSE_SHA)[108]),(char)( v16));
  memcpy( (void *)((unsigned char *)&stru_87C374 + 36364), (const void *)(eax23), 0x300u);
  for ( k = 0; k < 256; ++k )
  {
    char * v19 = (unsigned char *)&stru_87C374 + 22428[3 * (k % 256) + 13936];
  unsigned char v87[4]; // [esp+2Ch] [ebp-2F14h] BYREF
    v17 = (ObjectClass *)Palette::SixBitTo16Bit(
                           v87,
                           4 * *v19,
                           4 * ((unsigned char *)&stru_87C374)[22428][3 * (k % 256) + 13937],
                           4 * ((unsigned char *)&stru_87C374)[22428][3 * (k % 256) + 13938]);
    *(unsigned short *)v19 = *(unsigned short *)v17->q000;
    v19[2] = ((unsigned char *)&v17->q000)[2];
  }
  ((CCFileClass*)Buffer)->Construct( (char *)((unsigned char *)&g_Str_File_MOUSE_SHA + 96));
  ((VoxelPaletteClass *)Buffer)->LoadFromFile();
  int v21 = 0;
  char * v22 = (unsigned char *)&stru_B1D188 + 76273;
  do
  {
  unsigned char v85[4]; // [esp+24h] [ebp-2F1Ch] BYREF
    v20 = (ObjectClass *)((Palette *)(v85))->SixBitTo16Bit(*(v22 - 1), *v22, v22[1]);
    ecx26 = (unsigned char *)&stru_87C374 + 22428[3 * (v21 % 256) + 19312];
    v22 += 3;
    ++v21;
    *(unsigned short *)ecx26 = *(unsigned short *)v20->q000;
    ecx26[2] = v20->q000[2];
  }
  while ( (int)v22 < (int)&((unsigned char *)&stru_B1D188)[77041] );
  *(float *)&((unsigned char *)&stru_87C374)[45224] = 0.95990276;
  ((unsigned char *)&stru_87C374)[45220] = 1;
  ((Matrix3x4*)((unsigned char *)&stru_87C374 + 45244))->Identity();
  Voxel::SetProjectionAngle(0.785375);
  dword_B43184 = 1;
  dword_B43180 = 0;
  Voxel::Projection_Setup();
  unsigned int * v25 = (unsigned int *)operator new(0x188u);
  if ( v25 )
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13124] = ConvertClass::Construct(
                                                 v25,
                                                 (ConvertClass *)&((unsigned char *)&stru_87C374)[37900],
                                                 (int)&((unsigned char *)&stru_87C374)[37900],
                                                 *(ConvertClass **)&((unsigned char *)&stru_87C374)[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13124] = 0;
  Array::ForEach(((Array *)a0), 3, (IUnknown *)0x100, (int (*)(int))Struct::Zero3);
  IDA_LOBYTE(edx30) = 0;
  v27 = (AbstractClass *)SearchMIXFile( (char *)((unsigned char *)&g_Str_File_MOUSE_SHA + 84),(char)(edx30));
  memcpy( (void *)(a0), (const void *)(v27), sizeof(a0));
  for ( m = 0; m < 256; ++m )
  {
    v24 = (ConvertClass *)(3 * (m % 256));
    unsigned char * v30 = &a0[(unsigned int)v24];
  unsigned char v82[4]; // [esp+18h] [ebp-2F28h] BYREF
    v26 = (ObjectClass *)Palette::SixBitTo16Bit(
                           v82,
                           4 * a0[(unsigned int)v24],
                           4 * a0[(unsigned int)v24 + 1],
                           4 * a0[(unsigned int)v24 + 2]);
    *(unsigned short *)v30 = *(unsigned short *)v26->q000;
    v30[2] = v26->q000[2];
  }
  unsigned int * v32 = (unsigned int *)operator new(0x188u);
  if ( v32 )
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13132] = ConvertClass::Construct(
                                                 v32,
                                                 (ConvertClass *)a0,
                                                 (int)&((unsigned char *)&stru_87C374)[37900],
                                                 *(ConvertClass **)&((unsigned char *)&stru_87C374)[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13132] = 0;
  IDA_LOBYTE(v33) = 0;
  eax35 = (AbstractClass *)SearchMIXFile( (char *)((unsigned char *)&g_Str_File_MOUSE_SHA + 72),(char)(v33));
  memcpy( (void *)(a0), (const void *)(eax35), sizeof(a0));
  for ( n = 0; n < 256; ++n )
  {
    v29 = (ConvertClass *)(3 * (n % 256));
    unsigned char * v37 = &a0[(unsigned int)v29];
  unsigned char v83[4]; // [esp+1Ch] [ebp-2F24h] BYREF
    v31 = (ObjectClass *)Palette::SixBitTo16Bit(
                           v83,
                           4 * a0[(unsigned int)v29],
                           4 * a0[(unsigned int)v29 + 1],
                           4 * a0[(unsigned int)v29 + 2]);
    *(unsigned short *)v37 = *(unsigned short *)v31->q000;
    v37[2] = v31->q000[2];
  }
  eax37 = (unsigned int)((unsigned int *)operator new(0x188u));
  if ( eax37 )
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13136] = ConvertClass::Construct(
                                                 eax37,
                                                 (ConvertClass *)a0,
                                                 (int)&((unsigned char *)&stru_87C374)[37900],
                                                 *(ConvertClass **)&((unsigned char *)&stru_87C374)[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13136] = 0;
  IDA_LOBYTE(v40) = 0;
  eax40 = (AbstractClass *)SearchMIXFile( (char *)((unsigned char *)&g_Str_File_MOUSE_SHA + 140),(char)(v40));
  memcpy( (void *)(a0), (const void *)(eax40), sizeof(a0));
  for ( ii = 0; ii < 256; ++ii )
  {
    v34 = (ConvertClass *)(3 * (ii % 256));
    esi41 = &a0[(unsigned int)v34];
  unsigned char v84[4]; // [esp+20h] [ebp-2F20h] BYREF
    v36 = (ObjectClass *)Palette::SixBitTo16Bit(
                           v84,
                           4 * a0[(unsigned int)v34],
                           4 * a0[(unsigned int)v34 + 1],
                           4 * a0[(unsigned int)v34 + 2]);
    *(unsigned short *)esi41 = *(unsigned short *)v36->q000;
    esi41[2] = v36->q000[2];
  }
  eax42 = (unsigned int)((unsigned int *)operator new(0x188u));
  if ( eax42 )
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13120] = ConvertClass::Construct(
                                                 eax42,
                                                 (ConvertClass *)a0,
                                                 (int)&((unsigned char *)&stru_87C374)[37900],
                                                 *(ConvertClass **)&((unsigned char *)&stru_87C374)[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13120] = 0;
  IDA_LOBYTE(v47) = 0;
  v48 = (AbstractClass *)SearchMIXFile( (char *)(aCameoPal),(char)(v47));
  memcpy( (void *)(a0), (const void *)(v48), sizeof(a0));
  for ( jj = 0; jj < 256; ++jj )
  {
    v39 = (ConvertClass *)(3 * (jj % 256));
    unsigned char * v51 = &a0[(unsigned int)v39];
  unsigned char v86[4]; // [esp+28h] [ebp-2F18h] BYREF
    v41 = (ObjectClass *)Palette::SixBitTo16Bit(
                           v86,
                           4 * a0[(unsigned int)v39],
                           4 * a0[(unsigned int)v39 + 1],
                           4 * a0[(unsigned int)v39 + 2]);
    *(unsigned short *)v51 = *(unsigned short *)v41->q000;
    v51[2] = v41->q000[2];
  }
  eax47 = (unsigned int)((unsigned int *)operator new(0x188u));
  if ( eax47 )
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13116] = ConvertClass::Construct(
                                                 eax47,
                                                 (ConvertClass *)a0,
                                                 (int)&((unsigned char *)&stru_87C374)[37900],
                                                 *(ConvertClass **)&((unsigned char *)&stru_87C374)[44948],
                                                 (ObjectClass *)0x35,
                                                 0);
  else
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13116] = 0;
  IDA_LOBYTE(v54) = 0;
  v55 = (AbstractClass *)SearchMIXFile( (char *)((unsigned char *)&g_Str_File_MOUSE_SHA + 56),(char)(v54));
  memcpy( (void *)(a0), (const void *)(v55), sizeof(a0));
  for ( kk = 0; kk < 256; ++kk )
  {
    v44 = (ConvertClass *)(3 * (kk % 256));
    GameDirectoryCD = &a0[(unsigned int)v44];
  int v88; // [esp+30h] [ebp-2F10h] BYREF
    v46 = (ObjectClass *)Palette::SixBitTo16Bit(
                           &v88,
                           4 * a0[(unsigned int)v44],
                           4 * a0[(unsigned int)v44 + 1],
                           4 * a0[(unsigned int)v44 + 2]);
    *(unsigned short *)GameDirectoryCD = *(unsigned short *)v46->q000;
    GameDirectoryCD[2] = v46->q000[2];
  }
  unsigned int * v60 = (unsigned int *)operator new(0x188u);
  if ( v60 )
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13140] = ConvertClass::Construct(
                                                 v60,
                                                 (ConvertClass *)a0,
                                                 (int)&((unsigned char *)&stru_87C374)[37900],
                                                 *(ConvertClass **)&((unsigned char *)&stru_87C374)[44948],
                                                 (ObjectClass *)1,
                                                 0);
  else
    *(unsigned int *)&((unsigned char *)&stru_87C374)[13140] = 0;
  *(unsigned int *)&((unsigned char *)&stru_87C374)[13128] = *(unsigned int *)&((unsigned char *)&stru_87C374)[13120];
  ((CCFileClass*)v103)->Construct( (char *)((unsigned char *)&g_Str_File_MOUSE_SHA + 44));
  if ( ((CCFileClass *)(v103))->Open(0) )
  {
    *(unsigned int *)&((unsigned char *)&HouseClass_Player)[47684] = ((CCFileClass *)(v103))->ReadEntireFile();
    CCFileClass::Reset((gamemd::CCFileClass *)(v103));
    for ( kk = 0; kk < 256; ++kk )
    {
      GameDirectoryCD = (unsigned char *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[47684] + 2 * (kk % 256) + kk % 256);
      v49 = (ObjectClass *)Palette::SixBitTo16Bit(
                             v81,
                             4 * *GameDirectoryCD,
                             4 * GameDirectoryCD[1],
                             4 * GameDirectoryCD[2]);
      *(unsigned short *)GameDirectoryCD = *(unsigned short *)v49->q000;
      GameDirectoryCD[2] = v49->q000[2];
    }
  }
      *(unsigned int *)&((unsigned char *)&HouseClass_Player)[47692] = ConvertClass::Construct(
  {
                                                          *(ConvertClass **)&((unsigned char *)&HouseClass_Player)[47684],
                                                          (int)&((unsigned char *)&stru_87C374)[37900],
                                                          *(ConvertClass **)&((unsigned char *)&stru_87C374)[44948],
                                                          v62,
                                                          *(ConvertClass **)((unsigned char *)&HouseClass_Player)[47684],
                                                          (int)((unsigned char *)&stru_87C374)[37900],
      *(unsigned int *)&((unsigned char *)&HouseClass_Player)[47692] = 0;
                                                          (ObjectClass *)1,
                                                          0);
    else
      *(unsigned int *)((unsigned char *)&HouseClass_Player)[47692] = 0;
    *(unsigned int *)&((unsigned char *)&HouseClass_Player)[47688] = ((CCFileClass *)(v102))->ReadEntireFile();
  ((CCFileClass*)v102)->Construct( (char *)(&g_Str_File_MOUSE_SHA[32]));
  if ( ((CCFileClass *)(v102))->Open(0) )
  {
    *(unsigned int *)((unsigned char *)&HouseClass_Player)[47688] = ((CCFileClass *)(v102))->ReadEntireFile();
    CCFileClass::Reset((gamemd::CCFileClass *)(v102));
  }
  LoadExpansionMixFiles();
  ((CCFileClass *)v102)->Destruct();
*(unsigned int *)&((unsigned char *)&stru_B05488)[26728] = (unsigned int)LoadFileSHP( (char *)(&g_Str_File_MOUSE_SHA), (bool *)&((unsigned char *)&stru_B05488)[26732]);
  ((CCFileClass *)Buffer)->Destruct();
  Debug::Log_0();
  if ( *(unsigned int *)&((unsigned char *)&stru_B05488)[26728] )
*(unsigned int *)((unsigned char *)&stru_B05488)[26728] = (unsigned int)LoadFileSHP( (char *)(&g_Str_File_MOUSE_SHA), (bool *)&((unsigned char *)&stru_B05488)[26732]);
    (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 12))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);

  if ( *(unsigned int *)((unsigned char *)&stru_B05488)[26728] )
(*(void (**)(unsigned int, unsigned int *, unsigned int, unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 4))( *(unsigned int *)&((unsigned char *)&stru_87C374)[45772], (unsigned int *)(v81), *(unsigned int *)&((unsigned char *)&stru_B05488)[26728], 0);
    (*(void (**)(unsigned int))(**(unsigned int **)((unsigned char *)&stru_87C374)[45772] + 12))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
    v81[0] = 0;
    v81[1] = 0;
(*(void (**)(unsigned int, unsigned int *, unsigned int, unsigned int))(**(unsigned int **)((unsigned char *)&stru_87C374)[45772] + 4))( *(unsigned int *)&((unsigned char *)&stru_87C374)[45772], (unsigned int *)(v81), *(unsigned int *)((unsigned char *)&stru_B05488)[26728], 0);

  Mission_e4::SetAndCall( (int)((int *)&((unsigned char *)&stru_87C374)[13428]), 0, 0);


  if ( !*(unsigned int *)&((unsigned char *)&stru_89E138)[728] )
  Mission_e4::SetAndCall( (int)((int *)((unsigned char *)&stru_87C374)[13428]), 0, 0);
  Event::Dispatch();
  Debug::Log();
  if ( !*(unsigned int *)((unsigned char *)&stru_89E138)[728] )
  {
    Debug::Log();
    kk = (int)(void*)(void*)&CD_vftable;
    if ( !(uint8_t)(*(uint8_t (**)(void *))(*(unsigned int *)-1 + 0))(-1) )
    {
LABEL_68:
      Debug::Log();
      Debug::Log();
      return 1;
      if ( *(int *)&((unsigned char *)&HouseClass_Player)[44036] > 0 )
    while ( 1 )
        char * v63 = &((unsigned char *)&HouseClass_Player)[43932];
      Source[0].q000[0] = 0;
      if ( *(int *)((unsigned char *)&HouseClass_Player)[44036] > 0 )
      {
        char * v63 = ((unsigned char *)&HouseClass_Player)[43932];
        while ( 1 )
        {
          sprintf(
            Buffer,
            (ObjectClass *)&g_Str_Trace______c_.ambientSoundController[3],
          if ( v1 >= *(int *)&((unsigned char *)&HouseClass_Player)[44036] )
          strcat( Source[0].q000, (const char *)(Buffer));
          ++v1;
          v63 += 4;
          if ( v1 >= *(int *)((unsigned char *)&HouseClass_Player)[44036] )
            break;
          strcat(Source[0].q000, Control[0]);
        }
        kk = (int)(void*)(void*)&CD_vftable;
        v1 = 0;
      }
      GameDirectoryCD = (unsigned char *)Game::FindGameDirectoryCD((const char *)(Source));
      if ( GameDirectoryCD == (unsigned char *)1 )
        break;
      if ( GameDirectoryCD == (unsigned char *)2 )
        goto LABEL_79;
      if ( !(uint8_t)(*(uint8_t (**)(void *))(*(unsigned int *)dword_81C1D0 + 0))(dword_81C1D0) )
        goto LABEL_68;
LABEL_80:
      if ( !GameDirectoryCD )
      {
        v53 = (Tactical *)-1;
        goto LABEL_82;
      }
    }
    if ( !(uint8_t)(*(uint8_t (**)(void *))(*(unsigned int *)dword_81C1D0 + 0))(dword_81C1D0) )
      goto LABEL_68;
LABEL_79:
    FadePalette(&((unsigned char *)&stru_87C374)[37900], 0, 0);
    v81[0] = (unsigned int)&stru_82083C;
    StringCSF = GetStringCSF( (wchar_t *)(g_Str_TXT_CANCEL), 0, (const char *)(g_Str_File_Init_CPP), 4276);
    v76 = GetStringCSF( (wchar_t *)(g_Str_TXT_OK), 0, (const char *)(g_Str_File_Init_CPP), 4276);
    v64 = GetStringCSF( (wchar_t *)(aTxtCdDialog1), 0, (const char *)(g_Str_File_Init_CPP), 4276);
    if ( ((Dialog *)(int)v64)->ShowMessageBox( (unsigned short *)(v76), (unsigned short *)((Movie *)StringCSF), 0, 0, v78) == 1 )
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
  ((GameSettings *)(uint16_t *)&((unsigned char *)&HouseClass_Player)[44564])->Read();
  Debug::Log();
  AnimSystem::Init();
  ResetAnimSystem(0);
  Debug::Log();
  off_822724 = &g_INI_Key_Grey;
  Debug::Log();
  if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[44976] )
    (*(void (**)(unsigned int, int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[44976] + 32))(
      *(unsigned int *)&((unsigned char *)&stru_87C374)[44976],
      1);
  int v66 = operator new(0xE18u);
  if ( !v66 )
  {
    *(unsigned int *)&((unsigned char *)&stru_87C374)[44976] = 0;
    goto LABEL_89;
  }
  *(unsigned int *)&((unsigned char *)&stru_87C374)[44976] = TacticalMap::Construct(v66);
  if ( !*(unsigned int *)&((unsigned char *)&stru_87C374)[44976] )
  {
LABEL_89:
    Debug::Log();
    return -1;
  }
  *(unsigned int *)&((unsigned char *)&stru_87C374)[44960] = *(unsigned int *)&((unsigned char *)&stru_87C374)[44952];
  Debug::Log();
  ((CCFileClass*)&aP1)->Construct( (char *)(aSoundmdIni));
  if ( !((CCFileClass *)(&aP1))->Open(0) )
  {
    Debug::Log();
LABEL_93:
    *(unsigned int *)aP1[0] = (unsigned int)&vt_CCFileClass;
LABEL_94:
    int v93 = 0;
  unsigned char v92[12]; // [esp+ACh] [ebp-2E94h] BYREF
    ((Vector *)((int)v92))->Clear((int)((Vector *)((int)v92)));
    ((BufferIOFileClass *)(&aP1))->Destruct();
    return -1;
  }
  INIClass::Constructor(v97);
  v98 = 0;
  v97[0] = (unsigned int)&CCINIClass_Vtable;
  if ( !((CCINIClass *)(v97))->Load( (int)(&aP1), 0, 0) )
  {
    Debug::Log();
    HashTable_flat::DestroyHashTableINIClass( (void *)(v97));
    goto LABEL_93;
  }
  Audio::LoadSoundINI();
  Audio::InitFromINI((uint8_t ***)v97);
  Debug::Log();
  ((CCFileClass*)&v94)->Construct( (char *)(aEvamdIni));
  if ( !((CCFileClass *)(&v94))->Open(0) )
  {
    Debug::Log();
    *(unsigned int *)v94[0] = (unsigned int)&vt_CCFileClass;
    v96 = 0;
    ((Vector *)((int)v95))->Clear((int)((Vector *)((int)v95)));
    ((BufferIOFileClass *)(&v94))->Destruct();
    HashTable_flat::DestroyHashTableINIClass( (void *)(v97));
    *(unsigned int *)aP1[0] = (unsigned int)&vt_CCFileClass;
    goto LABEL_94;
  }
  INIClass::INIClass(&v99);
  v99.ownsFile = 0;
  *(unsigned int *)v99[0] = (unsigned int)&CCINIClass_Vtable;
  if ( !((CCINIClass *)(&v99))->Load( (int)(&v94), 0, 0) )
  {
    Debug::Log();
    HashTable_flat::DestroyHashTableINIClass((void **)&v99);
    *(unsigned int *)v94[0] = (unsigned int)&vt_CCFileClass;
    v96 = 0;
    ((Vector *)((int)v95))->Clear((int)((Vector *)((int)v95)));
    ((BufferIOFileClass *)(&v94))->Destruct();
LABEL_109:
    HashTable_flat::DestroyHashTableINIClass( (void *)(v97));
    ((CCFileClass *)&aP1)->Destruct();
    return -1;
  }
  void *v67; // ecx
  LoadINIEVA(v67);
  InitFromINIEVA(&v99);
  Debug::Log();
  ((CCFileClass*)v101)->Construct( (char *)(aThememdIni));
  if ( !((CCFileClass *)(v101))->Open(0) )
  {
    Debug::Log();
LABEL_108:
    ((CCFileClass *)v101)->Destruct();
    HashTable_flat::DestroyHashTableINIClass((void **)&v99);
    ((CCFileClass *)&v94)->Destruct();
    goto LABEL_109;
  }
  CCINIClass::CCINIClass(v100);
  if ( !((CCINIClass *)(v100))->Load( (int)(v101), 0, 0) )
    goto LABEL_106;
  ((ThemeManager *)(int)&g_BuildingTypeClass_Count)->Cleanup();
  ((ThemeClass *)(int)&g_BuildingTypeClass_Count)->InitializeThemes( (char *)v100);
  Audio::LoadWAVFiles( (void *)(&g_BuildingTypeClass_Count));
  Debug::Log();
  if ( !InitBulkData() )
  {
LABEL_107:
    HashTable_flat::DestroyHashTableINIClass( (void *)(v100));
    goto LABEL_108;
  }
  Debug::Log();
  if ( !InitRules() )
  {
LABEL_106:
    Debug::Log();
    goto LABEL_107;
  }
  RulesClass::LoadAnimTypes(*(RulesClass **)&((unsigned char *)&stru_87C374)[44652]);
  for ( mm = 0; mm < *(int *)&((unsigned char *)&stru_89E138)[90152]; ++mm )
(*(void (**)(unsigned int, char *))(**(unsigned int **)(*(unsigned int *)&((unsigned char *)&stru_89E138)[90140] + 4 * mm) + 100))( *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_89E138)[90140] + 4 * mm), (char *)(&((unsigned char *)&stru_87C374)[44556]));


  RulesClass::LoadBuildingTypes(*(RulesClass **)&((unsigned char *)&stru_87C374)[44652]);
  for ( nn = 0; nn < (int)g_TriggerClassCount; ++nn )
    (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)g_TriggerTypeCount + nn) + 100))(
      *((unsigned int *)g_TriggerTypeCount + nn),
      *(unsigned int *)&((unsigned char *)&stru_87C374)[44244]);
  uint64_t v70; // rax
  IDA_LODWORD(v70) = Audio::Callback();
  if ( v70 < *(unsigned long long *)&((unsigned char *)&HouseClass_Player)[47676] )
  {
    do
  uint64_t v71; // rax
      IDA_LODWORD(v71) = Audio::Callback();
    while ( v71 < *(unsigned long long *)&((unsigned char *)&HouseClass_Player)[47676] );
  }
  PlayIntroSequence(0, -1, (int)&g_INI_Key_Grey);
  int v72 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&stru_87C374)[44652] + 5328);
  off_822724 = &g_INI_Key_Grey;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[30716] = v72;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[38960] = 0;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[38964] = 0;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[38972] = 0;
  char * v73 = &((unsigned char *)&HouseClass_Player)[38108];
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
  while ( (int)v73 < (int)&((unsigned char *)&HouseClass_Player)[39004] );
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[37820] = 16843009;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[37824] = 16843009;
  InitRandomSeed();
  Debug::Log();
  InitCommands();
  Debug::Log();
  CompleteGameInit();
  HashTable_flat::DestroyHashTableINIClass( (void *)(v100));
  ((CCFileClass *)v101)->Destruct();
  HashTable_flat::DestroyHashTableINIClass((void **)&v99);
  ((CCFileClass *)&v94)->Destruct();
  HashTable_flat::DestroyHashTableINIClass( (void *)(v97));
  ((CCFileClass *)&aP1)->Destruct();
  return 0;
}
} // namespace gamemd
}

// 0x52CB50
namespace gamemd {
char PlayIntroSequence(int a1, int a2, int a3)
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
  void (***v15)(unsigned int, int); // ecx
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
  *(unsigned int *)dwInitParam.__pad_0 = &vt_DynamicVectorClass; /*0x52cd8e*/
  v18 = 10; /*0x52cd9c*/
  *(unsigned int *)dwInitParam.__tail_10 = 0; /*0x52cda4*/
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
    v3 = (INIClass *)operator new(0x58u); /*0x52cdf3*/
    v4 = (CCINIClass *)v3; /*0x52cdf8*/
    if ( v3 ) /*0x52cdff*/
    {
      INIClass::INIClass(v3); /*0x52ce03*/
      v4->ownsFile = 0; /*0x52ce08*/
      *(unsigned int *)v4->__pad_0 = &CCINIClass_Vtable; /*0x52ce0b*/
    }
    else
    {
      v4 = 0; /*0x52ce13*/
    }
    CCINIClass::Load(v4, (int)&v19, 0, 0); /*0x52ce1e*/
    if ( _strcmpi(cAlternateFileName, aRulesmdIni) ) /*0x52ce29*/
    {
      if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 /*0x52cecb*/
        || ((((unsigned char *)&(dwInitParam.m_C))[1]) || !dwInitParam.m_8)
        && v18 > 0
        && (*(uint8_t (**)(_VectorClass_PAVCCINIClass *, int, unsigned int))(*(unsigned int *)dwInitParam.__pad_0
                                                                                        + 8))(
             &dwInitParam,
             v18 + dwInitParam.m_8,
             0) )
      {
        v6 = (*(unsigned int *)dwInitParam.__tail_10)++; /*0x52ced6*/
        *(unsigned int *)(*(unsigned int *)&dwInitParam.m_1[3] + 4 * v6) = v4; /*0x52cee1*/
      }
      goto LABEL_24; /*0x52cee1*/
    }
    v5 = *(unsigned int *)dwInitParam.__tail_10; /*0x52ce35*/
    v16 = 1; /*0x52ce3f*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52ce44*/
      goto LABEL_15; /*0x52ce44*/
    if ( ((((unsigned char *)&(dwInitParam.m_C))[1]) || !dwInitParam.m_8) /*0x52ce6c*/
      && v18 > 0
      && (*(uint8_t (**)(_VectorClass_PAVCCINIClass *, int, unsigned int))(*(unsigned int *)dwInitParam.__pad_0
                                                                                      + 8))(
           &dwInitParam,
           v18 + dwInitParam.m_8,
           0) )
    {
      v5 = *(unsigned int *)dwInitParam.__tail_10; /*0x52ce73*/
  LABEL_15:
      if ( v5 ) /*0x52ce79*/
        memcpy((void *)(*(unsigned int *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v5); /*0x52ce88*/
      **(unsigned int **)&dwInitParam.m_1[3] = v4; /*0x52ce94*/
      ++*(unsigned int *)dwInitParam.__tail_10; /*0x52ce9b*/
    }
  LABEL_24:
    *(unsigned int *)v19.__pad_0 = &vt_CCFileClass; /*0x52cee4*/
    v21 = 0; /*0x52cef3*/
    Vector::Clear((int)v20); /*0x52cefa*/
    *(unsigned int *)v19.__pad_0 = &off_7E1668; /*0x52cf03*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v19))->Dtor(); /*0x52cf0b*/
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52cf19*/
  FindClose(FirstFileA); /*0x52cf28*/
  if ( !v16 ) /*0x52cf32*/
  {
  LABEL_27:
    CCFileClass::Construct((CCFileClass *)&v19, aRulesmdIni); /*0x52cf38*/
    v7 = (INIClass *)operator new(0x58u); /*0x52cf48*/
    v8 = (CCINIClass *)v7; /*0x52cf4d*/
    if ( v7 ) /*0x52cf54*/
    {
      INIClass::INIClass(v7); /*0x52cf58*/
      v8->ownsFile = 0; /*0x52cf5d*/
      *(unsigned int *)v8->__pad_0 = &CCINIClass_Vtable; /*0x52cf60*/
    }
    else
    {
      v8 = 0; /*0x52cf68*/
    }
    CCINIClass::Load(v8, (int)&v19, 0, 0); /*0x52cf73*/
    v9 = *(unsigned int *)dwInitParam.__tail_10; /*0x52cf78*/
    if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 ) /*0x52cf82*/
    {
  LABEL_36:
      if ( v9 ) /*0x52cfaf*/
        memcpy((void *)(*(unsigned int *)&dwInitParam.m_1[3] + 4), *(const void **)&dwInitParam.m_1[3], 4 * v9); /*0x52cfbe*/
      **(unsigned int **)&dwInitParam.m_1[3] = v8; /*0x52cfca*/
      ++*(unsigned int *)dwInitParam.__tail_10; /*0x52cfd1*/
    }
    else if ( ((((unsigned char *)&(dwInitParam.m_C))[1]) || !dwInitParam.m_8) /*0x52cfa2*/
           && v18 > 0
           && (*(uint8_t (**)(_VectorClass_PAVCCINIClass *, int, unsigned int))(*(unsigned int *)dwInitParam.__pad_0
                                                                                           + 8))(
                &dwInitParam,
                v18 + dwInitParam.m_8,
                0) )
    {
      v9 = *(unsigned int *)dwInitParam.__tail_10; /*0x52cfa9*/
      goto LABEL_36; /*0x52cfa9*/
    }
    *(unsigned int *)v19.__pad_0 = &vt_CCFileClass; /*0x52cfe1*/
    v21 = 0; /*0x52cfe5*/
    Vector::Clear((int)v20); /*0x52cfec*/
    *(unsigned int *)v19.__pad_0 = &off_7E1668; /*0x52cffa*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v19))->Dtor(); /*0x52cffe*/
  }
  if ( *(int *)dwInitParam.__tail_10 <= 0 ) /*0x52d013*/
  {
    *(unsigned int *)dwInitParam.__pad_0 = &vt_VectorClass; /*0x52d019*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d021*/
    return 0; /*0x52d032*/
  }
  CCFileClass::Construct(&v22, aArtmdIni); /*0x52d03f*/
  if ( !CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[228], (int)&v22, 0, 0) ) /*0x52d053*/
  {
    Debug::Log(); /*0x52d061*/
    *(unsigned int *)v22.__tail_0 = &vt_CCFileClass; /*0x52d070*/
    v24 = 0; /*0x52d077*/
    Vector::Clear((int)v23); /*0x52d07e*/
    *(unsigned int *)v22.__tail_0 = &off_7E1668; /*0x52d08a*/
    ((BufferIOFileClass *)((BufferIOFileClass *)&v22))->Dtor(); /*0x52d091*/
    *(unsigned int *)dwInitParam.__pad_0 = &vt_VectorClass; /*0x52d09a*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d0a2*/
    return 0; /*0x52d0b3*/
  }
  if ( *(unsigned int *)dwInitParam.__tail_10 == 1 ) /*0x52d0b9*/
  {
    v11 = **(unsigned int **)&dwInitParam.m_1[3]; /*0x52d0bf*/
  }
  else
  {
    v12 = DialogBoxParamA(g_hInstance, (LPCSTR)0x93, g_hWnd, (DLGPROC)ReadModConfigINI, (LPARAM)&dwInitParam); /*0x52d0df*/
    if ( v12 == -1 ) /*0x52d0e8*/
      v12 = 0; /*0x52d0ea*/
    v11 = *(unsigned int *)(*(unsigned int *)&dwInitParam.m_1[3] + 4 * v12); /*0x52d0f0*/
  }
  *(unsigned int *)&DSurface_ViewBounds.__pad_34[116] = v11; /*0x52d0fa*/
  RulesClass::ReadColors(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d0ff*/
  RulesClass::ReadColorAdd(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d111*/
  RulesClass::ReadMovies(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d121*/
  Rules::ReadMiscINI(*(Rules **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d132*/
  Dialog::ReadMultiplayerDialogSettings(*(Dialog **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d144*/
  *(unsigned int *)&stru_A8B250.__pad_0[12] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5252); /*0x52d159*/
  *(unsigned int *)&stru_A8B250.__pad_0[32] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5268); /*0x52d165*/
  g_RulesInitConfig = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5276); /*0x52d171*/
  *(unsigned int *)&stru_A8B250.__pad_0[24] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5280); /*0x52d17d*/
  *(unsigned int *)&stru_A8B250.__pad_0[40] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5284); /*0x52d189*/
  *(unsigned int *)&stru_A8B250.__pad_0[36] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5288); /*0x52d195*/
  stru_A8B250.__pad_0[16] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5292); /*0x52d1a1*/
  stru_A8B250.__pad_0[8] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5295); /*0x52d1ad*/
  stru_A8B250.__pad_0[17] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5297); /*0x52d1b9*/
  byte_A8B31E = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5298); /*0x52d1c5*/
  byte_A8B31D = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5299); /*0x52d1d1*/
  stru_A8B250.__pad_0[28] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5300); /*0x52d1dd*/
  byte_A8B31C = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x52d1e9*/
  stru_A8B250.__pad_0[18] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5302); /*0x52d1f5*/
  stru_A8B250.__pad_0[19] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5305); /*0x52d201*/
  stru_A8B250.__pad_0[20] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5306); /*0x52d20d*/
  byte_A8B31F = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5303); /*0x52d219*/
  dword_A8B320 = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5304); /*0x52d22c*/
  CCFileClass::Construct(&v25, aLangruleIni); /*0x52d231*/
  if ( (uint8_t)((CCFileClass *)(&v25))->Open(0) == 1 ) /*0x52d245*/
  {
    INIClass::INIClass((INIClass *)&v19); /*0x52d24f*/
    v19.ownsFile = 0; /*0x52d25b*/
    *(unsigned int *)v19.__pad_0 = &CCINIClass_Vtable; /*0x52d267*/
    if ( CCINIClass::Load(&v19, (int)&v25, 1, 0) > 1 ) /*0x52d277*/
    {
      HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d281*/
      *(unsigned int *)v25.__tail_0 = &vt_CCFileClass; /*0x52d28d*/
      v27 = 0; /*0x52d294*/
      Vector::Clear((int)v26); /*0x52d29b*/
      *(unsigned int *)v25.__tail_0 = &off_7E1668; /*0x52d2a7*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v25))->Dtor(); /*0x52d2ae*/
      *(unsigned int *)v22.__tail_0 = &vt_CCFileClass; /*0x52d2ba*/
      v24 = 0; /*0x52d2c1*/
      Vector::Clear((int)v23); /*0x52d2c8*/
      *(unsigned int *)v22.__tail_0 = &off_7E1668; /*0x52d2d4*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v22))->Dtor(); /*0x52d2db*/
      *(unsigned int *)dwInitParam.__pad_0 = &vt_VectorClass; /*0x52d2e4*/
      if ( *(unsigned int *)&dwInitParam.m_1[3] ) /*0x52d2ee*/
      {
        if ( (((unsigned char *)&(dwInitParam.m_C))[1]) ) /*0x52d2f4*/
          operator delete((void *)(*(void **)&dwInitParam.m_1[3])); /*0x52d2f7*/
      }
      return 0; /*0x52d30b*/
    }
    RulesClass::Addition(*(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]); /*0x52d317*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d320*/
  }
  v13 = 0; /*0x52d329*/
  if ( *(int *)dwInitParam.__tail_10 > 0 ) /*0x52d32d*/
  {
    v14 = *(unsigned int *)&dwInitParam.m_1[3]; /*0x52d32f*/
    do /*0x52d355*/
    {
      v15 = *(void (****)(unsigned int, int))(v14 + 4 * v13); /*0x52d333*/
      if ( v15 != *(void (****)(unsigned int, int))&DSurface_ViewBounds.__pad_34[116] && v15 ) /*0x52d342*/
      {
        (**v15)(v15, 1); /*0x52d348*/
        v14 = *(unsigned int *)&dwInitParam.m_1[3]; /*0x52d34a*/
      }
      ++v13; /*0x52d352*/
    }
    while ( v13 < *(int *)dwInitParam.__tail_10 ); /*0x52d355*/
  }
  CCFileClass::Construct(&v28, aAimdIni); /*0x52d363*/
  CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[140], (int)&v28, 1, 0); /*0x52d378*/
  *(unsigned int *)v28.__tail_0 = &vt_CCFileClass; /*0x52d384*/
  v29[3] = 0; /*0x52d38b*/
  Vector::Clear((int)v29); /*0x52d392*/
  *(unsigned int *)v28.__tail_0 = &off_7E1668; /*0x52d39e*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v28))->Dtor(); /*0x52d3a5*/
  *(unsigned int *)v25.__tail_0 = &vt_CCFileClass; /*0x52d3b1*/
  v27 = 0; /*0x52d3b8*/
  Vector::Clear((int)v26); /*0x52d3bf*/
  *(unsigned int *)v25.__tail_0 = &off_7E1668; /*0x52d3cb*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v25))->Dtor(); /*0x52d3d2*/
  *(unsigned int *)v22.__tail_0 = &vt_CCFileClass; /*0x52d3de*/
  v24 = 0; /*0x52d3e5*/
  Vector::Clear((int)v23); /*0x52d3ec*/
  *(unsigned int *)v22.__tail_0 = &off_7E1668; /*0x52d3f8*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v22))->Dtor(); /*0x52d3ff*/
  *(unsigned int *)dwInitParam.__pad_0 = &vt_VectorClass; /*0x52d408*/
  if ( *(unsigned int *)&dwInitParam.m_1[3] && (((unsigned char *)&(dwInitParam.m_C))[1]) ) /*0x52d418*/
    operator delete((void *)(*(void **)&dwInitParam.m_1[3])); /*0x52d41b*/
  return 1; /*0x52d028*/
}
}
// 0x52D870
namespace gamemd {
void sub_52D870(HWND hDlg, unsigned int a2, unsigned int a3, unsigned int a4)
{
  HWND DlgItem; // esi
  int result; // eax
  unsigned int *WindowLongA; // eax
  LRESULT v7; // eax
  LRESULT v8; // eax
  bool v9; // [esp+13h] [ebp-1h]
  HWND hDlga; // [esp+18h] [ebp+4h]

  v9 = 0; /*0x52d87f*/
  DlgItem = GetDlgItem(hDlg, 1860); /*0x52d88a*/
  result = BaseDialogProc(hDlg, a2, a3, a4); /*0x52d89e*/
  if ( !result ) /*0x52d8a5*/
  {
    WindowLongA = (unsigned int *)GetWindowLongA(hDlg, 8); /*0x52d8ae*/
    hDlga = (HWND)WindowLongA; /*0x52d8c2*/
    if ( a2 == 273 ) /*0x52d8c6*/
    {
      if ( (uint16_t)a3 == 1670 ) /*0x52d92b*/
      {
        if ( WindowLongA ) /*0x52d94c*/
          *WindowLongA = -1; /*0x52d94e*/
      }
      else if ( (uint16_t)a3 == 1860 ) /*0x52d932*/
      {
        v9 = (*(((unsigned short *)&(a3)) + 1)) == 0; /*0x52d943*/
      }
      else
      {
        v9 = (uint16_t)a3 == 1861; /*0x52d937*/
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
              *(unsigned int *)hDlga = v8; /*0x52d98d*/
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
  void (***v11)(unsigned int, int); // ecx
  Movie *eax34; // eax
  Movie *v12; // eax
  wchar_t *StringCSF; // esi
  wchar_t *v15; // ebp
  LONG v16; // eax
  IUnknown *v17; // eax
  Movie *v18; // eax
  HWND Dialog_v; // eax
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
  void * v59; // [esp+26h] [ebp-100h] (G57w18j4: live til CD v59; CD carrier unsupplied, ptr-store semantics)
  LONG v62[23]; // [esp+6Ah] [ebp-BCh] BYREF
  LONG v63[24]; // [esp+C6h] [ebp-60h] BYREF

  v0 = (Movie *)((StringList *)(&g_BuildingTypeClass_Count))->Find(g_INI_Key_INTRO);
  ((ThemeClass *)((int *)&g_BuildingTypeClass_Count))->Play( (int)(v0));
LABEL_2:
  int v1 = *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4584;
  ((unsigned char *)&HouseClass_Player)[44116] = 1;
  HouseClass_Player.field_0 = 0;
  dword_8B41F8 = 0;
  word_8B41FC = 0;
  unk_8B4200 = 0;
  Networking_LastEventIndex = 0;
  g_NetworkEventIndex = 0;
  Networking_NextPacketIndex = 0;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[45112] = 0;
  *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4584) = 0;
  char v55 = 0;
  int v60; // [esp+2Ah] [ebp-FCh]
  *(unsigned int *)(v1 + 4) = v60;
  var110_2 = 1;
  *(unsigned int *)(v1 + 8) = 0;
  unsigned int * v2 = (unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4584);
  int v3 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4584);
  if ( v3 != -1 )
  {
    int v4 = *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4592);
    if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[45112] - v3 >= v4 )
      int v5 = 0;
    else
      v5 = v4 - (*(unsigned int *)&((unsigned char *)&HouseClass_Player)[45112] - v3);
    *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4592) = v5;
    *v2 = -1;
  }
  j = 1;
  *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1552) = 1;
  *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1548) = 1;
  byte_A83D49 = 0;
  ((unsigned char *)&HouseClass_Player)[44932] = 0;
  unk_8B41C0 = 0;
  byte_A83D48 = 0;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[30700] = 0;
  ((Mouse *)((int)&((unsigned char *)&stru_87C374)[13428]))->SetBounds(0);
  *(unsigned int *)&((unsigned char *)&stru_87C374)[17944] = 0;
  *(unsigned int *)&((unsigned char *)&stru_87C374)[17948] = 0;
  *(unsigned int *)&((unsigned char *)&stru_87C374)[17952] = -1;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[30740] = 0;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[30744] = 0;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[30732] = 30;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29868] = 0;
  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29840] = 0;
  for ( i = 0; i < 112; i += 28 )
  {
    int v8 = i + *(unsigned int *)&((unsigned char *)&HouseClass_Player)[38972];
    *(unsigned int *)&((unsigned char *)&HouseClass_Player)[21864][4 * v8 + 16264] = -1;
  }
  Mission_e4::SetAndCall( (int)((int *)&((unsigned char *)&stru_87C374)[13428]), 0, 0);
  if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45044] )
    ((Tooltip *)(*(void **)&((unsigned char *)&stru_87C374)[45044]))->Enable(0);
  if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] )
    esi12 = (*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] == 4) + 16;
  else
    esi12 = 18;
  if ( ((unsigned char *)&HouseClass_Player)[45087] )
    goto LABEL_145;
  if ( (((unsigned char *)&HouseClass_Player)[39084] & 2) != 0 && ((CCFileClass *)(&((unsigned char *)&HouseClass_Player)[38976]))->Open(0) )
  {
    if ( !((FileClass *)(int *)&((unsigned char *)&HouseClass_Player)[38976])->Load( (CDFileClass *)1) )
    {
      v9 = *(Movie **)&((unsigned char *)&HouseClass_Player)[39084];
      IDA_LOBYTE(v9) = ((unsigned char *)&HouseClass_Player)[39084] & 0xFD;
      *(unsigned int *)&((unsigned char *)&HouseClass_Player)[39084] = (unsigned int)v9;
      goto LABEL_20;
    }
LABEL_18:
(*(void (**)(char *, ObjectClass **, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 36))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (ObjectClass **)(&g_RulesInitConfig), 4);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 36))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[45128]), 4);



(*(void (**)(char *, int, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 36))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4692, 4);



(*(void (**)(char *, int, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 36))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4700, 260);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 36))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[44868]), 4);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 36))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[44052]), 4);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 36))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[44564]), 184);



    Debug::Log();
    ((Theme *)(&g_BuildingTypeClass_Count))->Stop((ObjectClass *)1);
    goto LABEL_145;
  }
LABEL_20:
  while ( 2 )
  {
    v11 = *(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748];
    if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
    {
      if ( ((unsigned char *)&HouseClass_Player)[40532] )
      {
        if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44224] )
          ((NetworkEventQueueClass *)((int)&g_NetworkEventQueue))->WaitForResponse();
        v11 = *(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748];
        ((unsigned char *)&HouseClass_Player)[40532] = 0;
      }
      if ( v11 )
        (**v11)(v11, 1);
      *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = 0;
      Network::Init();
    }
    if ( esi12 == 18 )
    {
      if ( ((unsigned char *)&HouseClass_Player)[45073] )
        goto LABEL_32;
      esi12 = MainMenu::Screen(0, -1);
    }
    if ( ((unsigned char *)&HouseClass_Player)[45073] )
    {
LABEL_32:
      esi12 = 8;
      goto LABEL_34;
    }
    if ( esi12 == 7 )
      goto LABEL_35;
LABEL_34:
    eax34 = (Movie *)((StringList *)(&g_BuildingTypeClass_Count))->Find(g_INI_Key_INTRO);
    ((ThemeClass *)((int *)&g_BuildingTypeClass_Count))->Play( (int)(eax34));
LABEL_35:
    Event::Dispatch();
    switch ( esi12 )
    {
      case -1:
        if ( (((unsigned char *)&HouseClass_Player)[39084] & 4) == 0
          || !((CCFileClass *)(&((unsigned char *)&HouseClass_Player)[38976]))->Open(0) )
        {
          goto LABEL_40;
        }
        j = *(unsigned int *)&((unsigned char *)&HouseClass_Player)[39084] | 2;
        *(unsigned int *)&((unsigned char *)&HouseClass_Player)[39084] |= 2u;
        if ( ((FileClass *)(int *)&((unsigned char *)&HouseClass_Player)[38976])->Load( (CDFileClass *)1) )
          goto LABEL_18;
        v12 = *(Movie **)&((unsigned char *)&HouseClass_Player)[39084];
        IDA_LOBYTE(v12) = ((unsigned char *)&HouseClass_Player)[39084] & 0xFD;
        *(unsigned int *)&((unsigned char *)&HouseClass_Player)[39084] = (unsigned int)v12;
LABEL_40:
        esi12 = 18;
        goto LABEL_134;
      case 1:
        *(&g_MatrixTransformState + 2222) = 0;
        esi12 = Campaign::Screen(1);
        goto LABEL_134;
      case 2:
        esi12 = 16;
        *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 4;
        Multiplayer::Screen((void *)2);
        goto LABEL_134;
      case 3:
        esi12 = 16;
        *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 3;
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
        StringCSF = GetStringCSF( (wchar_t *)(aGuiExitareyous), 0, (const char *)(g_Str_File_Init_CPP), 2502);
        j = (int)GetStringCSF( (wchar_t *)(g_Str_TXT_OK), 0, (const char *)(g_Str_File_Init_CPP), 2503);
        v15 = GetStringCSF( (wchar_t *)(aGuiCancel), 0, (const char *)(g_Str_File_Init_CPP), 2504);
        Screen::Capture(1, 0, 0, (int)v15);
        v58 = &stru_82083C;
        if ( ((Dialog *)(int)StringCSF)->ShowMessageBox( (unsigned short *)j, (unsigned short *)((Movie *)v15), 0, 0, (int)v54) )
        {
          Screen::Capture(1, 0, 0, (int)v15);
          esi12 = 18;
        }
        else
        {
          esi12 = 7;
          ((ScenarioClass *)((int)&((unsigned char *)&HouseClass_Player)[44564]))->SaveGameOptions();
        }
        goto LABEL_134;
      case 7:
        ((Theme *)(&g_BuildingTypeClass_Count))->Stop((ObjectClass *)1);
        int v40 = *(unsigned int *)&((unsigned char *)&stru_87C374)[45004];
        if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[44996] != -1 )
          v40 += TimerGetTicks() - *(unsigned int *)&((unsigned char *)&stru_87C374)[44996];
        int v41 = v40 + 3000;
        while ( ((Theme *)(int)&g_BuildingTypeClass_Count)->IsPlaying() )
        {
          if ( !(uint8_t)Audio::IsPlaying() )
            break;
          int v42 = *(unsigned int *)&((unsigned char *)&stru_87C374)[45004];
          if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[44996] != -1 )
            v42 += TimerGetTicks() - *(unsigned int *)&((unsigned char *)&stru_87C374)[44996];
          if ( v41 <= v42 )
            break;
          Event::Dispatch();
        }
        ((Theme *)(&g_BuildingTypeClass_Count))->Stop(0);
        if ( !g_Is16BitMode )
          FadePalette(&((unsigned char *)&stru_87C374)[35596], 30, 0);
        return 0;
      case 8:
        if ( &stru_89E138 != (IUnknown *)-22440 )
          Menu::Reset((int)&((unsigned char *)&stru_89E138)[22440]);
  int v57; // [esp+1Eh] [ebp-108h]
        (v57) = ((v57) & ~0xFF) | ((unsigned int)(0) & 0xFF);
        dwNewLong = -1;
        if ( g_UnitTypeInitState || (Credits::Screen(), g_UnitTypeInitState) )
        {
          InitializeGameLoading();
          AudioController::Init( (void *)(&((unsigned char *)&HouseClass_Player)[46516]));
          *(unsigned int *)&((unsigned char *)&HouseClass_Player)[47700] = 0;
          *(unsigned int *)&((unsigned char *)&HouseClass_Player)[47704] = 0;
          *(unsigned int *)&((unsigned char *)&HouseClass_Player)[47708] = 0;
          Dialog_v = (HWND)CreateDialog(
                           0x94u,
                           (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))CampaignSelect::DlgProc,
                           0);
          j = (int)Dialog_v;
          if ( Dialog_v )
          {
            SetWindowLongA(Dialog_v, 8, (LONG)&dwNewLong);
            SetDialogParent( (HWND)j, (HWND)(g_hWnd));
            ((Dialog *)((HWND)j))->Show();
            while ( !(unsigned char)v57 )
            {
              if ( Dialog::PumpMessages() == 1 )
                break;
              if ( *(unsigned int *)&stru_825BAC.isOnMap != -1 )
              {
  uint64_t v20; // rax
                IDA_LODWORD(v20) = Audio::Callback();
                if ( *(unsigned long long *)&((unsigned char *)&HouseClass_Player)[47700] < v20 )
                {
                  ((AudioController *)(&((unsigned char *)&HouseClass_Player)[46516]))->Stop();
                  PlayVocClass(*(int *)&stru_825BAC.isOnMap, 0x2000, 1.0, (int)&((unsigned char *)&HouseClass_Player)[46516]);
                  *(unsigned int *)&stru_825BAC.isOnMap = -1;
                }
              }
              if ( ((unsigned char *)&stru_89E138)[8040] )
              {
                ((unsigned char *)&stru_89E138)[8040] = 0;
                Screen::Capture(1, 0, 0, -1);
                IDA_LOBYTE(v21) = 0;
                Frame::Present(v21, 0);
              }
            }
            ((Dialog *)(SkirmishDialog *)j)->Destroy();
          }
  int64_t v22; // rax
          IDA_LODWORD(v22) = Audio::Callback();
          *(unsigned long long *)&((unsigned char *)&HouseClass_Player)[47700] = v22 + 3000;
          while ( ((AudioSource *)((int **)&((unsigned char *)&HouseClass_Player)[46516]))->Get() )
          {
  uint64_t v23; // rax
            IDA_LODWORD(v23) = Audio::Callback();
            if ( *(unsigned long long *)&((unsigned char *)&HouseClass_Player)[47700] <= v23 )
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
        *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13516) = (unsigned int)v18;
        if ( *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13516) == -1 )
        {
          var110_2 = 1;
          esi12 = 1;
          continue;
        }
        switch ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44568] )
        {
          case 0:
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1552) = 2;
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1548) = 0;
            *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
            break;
          case 1:
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1552) = 2;
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1548) = 1;
            *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
            break;
          case 2:
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1552) = 1;
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1548) = 1;
            *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
            break;
          case 3:
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1552) = 0;
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1548) = 1;
            *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
            break;
          case 4:
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1552) = 0;
            *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 1548) = 2;
            goto LABEL_143;
          default:
LABEL_143:
            *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
            break;
        }
LABEL_147:
        ((Timer*)(*(HWND **)&((unsigned char *)&stru_87C374)[13308]))->PumpMessages();
        InitRandomSeed();
        PlanningNodeClass::CleanupAll();
        if ( v55 || *(unsigned int *)&((unsigned char *)&HouseClass_Player)[31596] )
          goto LABEL_189;
        Debug::Log();
        (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 12))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
        if ( esi12 != 8 )
        {
          if ( !g_Is16BitMode )
            FadePalette(&((unsigned char *)&stru_87C374)[35596], 15, (void (*)(void))Event::Dispatch);
          (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[44952] + 24))(
            *(unsigned int *)&((unsigned char *)&stru_87C374)[44952],
            0);
          IDA_LOBYTE(ecx152) = 1;
          Frame::Present(ecx152, 0);
        }
        (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 16))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
        if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] == 4 )
        {
          int v37 = *(unsigned int *)&((unsigned char *)&stru_87C374)[44996];
          j = (int)&((unsigned char *)&HouseClass_Player)[42296];
          do
          {
            int v38 = *(unsigned int *)&((unsigned char *)&stru_87C374)[45004];
            if ( v37 != -1 )
            {
              Ticks = TimerGetTicks();
              v37 = *(unsigned int *)&((unsigned char *)&stru_87C374)[44996];
              v38 += Ticks - *(unsigned int *)&((unsigned char *)&stru_87C374)[44996];
            }
            *(unsigned int *)j = v38;
            j += 4;
          }
          while ( j < (int)&((unsigned char *)&HouseClass_Player)[42328] );
        }
        if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932]
          || ((unsigned char *)&HouseClass_Player)[45073]
          || (((unsigned char *)&HouseClass_Player)[39084] & 2) != 0 )
        {
          if ( ScenarioClass::LoadScenarioAndStart(
                 (AnimClass *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4700),
                 1,
                 -1) )
          {
            goto LABEL_184;
          }
          if ( ((unsigned char *)&HouseClass_Player)[45087] )
            goto LABEL_183;
          goto LABEL_2;
        }
        if ( ScenarioClass::LoadScenarioAndStart(
               (AnimClass *)(*(unsigned int *)&g_CampaignTypeArray->q000[4
                                                                    * *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924]
                                                                                + 13516)]
                           + 156),
               1,
               *(unsigned int *)(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 13516)) )
        {
LABEL_184:
          if ( (((unsigned char *)&HouseClass_Player)[39084] & 1) != 0 )
          {
            if ( ((FileClass *)(int *)&((unsigned char *)&HouseClass_Player)[38976])->Load( (CDFileClass *)2) )
            {
              Debug::Log();
(*(void (**)(char *, ObjectClass **, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 48))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (ObjectClass **)(&g_RulesInitConfig), 4);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 48))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[45128]), 4);



(*(void (**)(char *, int, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 48))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4692, 4);



(*(void (**)(char *, int, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 48))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29924] + 4700, 260);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 48))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[44868]), 4);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 48))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[44052]), 4);



(*(void (**)(char *, char *, int))(*(unsigned int *)&((unsigned char *)&HouseClass_Player)[38976] + 48))( (char *)(&((unsigned char *)&HouseClass_Player)[38976]), (char *)(&((unsigned char *)&HouseClass_Player)[44564]), 184);



              int v44 = *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44052];
              (v44) = ((v44) & ~0xFF) | ((unsigned int)(((unsigned char *)&HouseClass_Player)[44052] & 0xFB) & 0xFF);
              *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44052] = v44;
              goto LABEL_189;
            }
            v49 = *(Movie **)&((unsigned char *)&HouseClass_Player)[39084];
            IDA_LOBYTE(v49) = ((unsigned char *)&HouseClass_Player)[39084] & 0xFE;
            *(unsigned int *)&((unsigned char *)&HouseClass_Player)[39084] = (unsigned int)v49;
          }
          int v46 = *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44052];
          (v46) = ((v46) & ~0xFF) | ((unsigned int)(((unsigned char *)&HouseClass_Player)[44052] & 0xFB) & 0xFF);
          *(unsigned int *)&((unsigned char *)&HouseClass_Player)[44052] = v46;
LABEL_189:
          Debug::Log();
          Debug::Log();
          if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932]
            && *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] != 5
            && (((unsigned char *)&HouseClass_Player)[39084] & 2) == 0 )
          {
            ((SessionClass *)&((unsigned char *)&HouseClass_Player)[29932])->CreateConnections();
            if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] == 3 )
            {
              if ( (unsigned int)(((Network *)&((unsigned char *)&HouseClass_Player)[44148])->GetLobbyStatus() + 2) >= 0xF )
                int v47 = ((Network *)&((unsigned char *)&HouseClass_Player)[44148])->GetLobbyStatus() + 2;
              else
                v47 = 15;
              Network::SetConnectionParams(
                (int *)&((unsigned char *)&HouseClass_Player)[44148],
                (IUnknown *)v47,
                -1,
                600,
                (CellStruct *)1);
              if ( (unsigned int)(((Network *)&((unsigned char *)&HouseClass_Player)[44148])->GetLobbyStatus() + 2) >= 0x3C )
                int v48 = ((Network *)&((unsigned char *)&HouseClass_Player)[44148])->GetLobbyStatus() + 2;
              else
                v48 = 60;
              ((TacticalClass *)(&((unsigned char *)&HouseClass_Player)[44148]))->SetCameraPosition(v48, -1, 600);
            }
            else if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] == 4
                   && !*(unsigned int *)&((unsigned char *)&HouseClass_Player)[30756] )
            {
              if ( (unsigned int)(((Network *)&((unsigned char *)&HouseClass_Player)[44148])->GetLobbyStatus() + 2) >= 0x3C )
                eax203 = ((Network *)&((unsigned char *)&HouseClass_Player)[44148])->GetLobbyStatus() + 2;
              else
                eax203 = 60;
              Network::SetConnectionParams(
                (int *)&((unsigned char *)&HouseClass_Player)[44148],
                (IUnknown *)eax203,
                -1,
                600,
                (CellStruct *)1);
            }
          }
          Event::Dispatch();
          (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 12))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
          if ( !g_Is16BitMode )
            FadePalette(&((unsigned char *)&stru_87C374)[35596], 15, (void (*)(void))Event::Dispatch);
          (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[44952] + 24))(
            *(unsigned int *)&((unsigned char *)&stru_87C374)[44952],
            0);
          IDA_LOBYTE(v50) = 1;
          Frame::Present(v50, 0);
          (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 16))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
          *(unsigned int *)&((unsigned char *)&stru_87C374)[44960] = *(unsigned int *)&((unsigned char *)&stru_87C374)[44952];
          ((Mouse *)((int)&((unsigned char *)&stru_87C374)[13428]))->SetCursor( (int)((ObjectClass *)0x13), 0);
          ((MouseClass *)(&((unsigned char *)&stru_87C374)[13428]))->GetPosition();
          if ( !((unsigned char *)&HouseClass_Player)[45087] )
            TacticalClass::BuildCommandBar(&((unsigned char *)&stru_87C374)[13428], j, 1);
          ((MapClass *)((int)(&((unsigned char *)&stru_87C374)[13428])))->MarkForRedraw((int)((MapClass *)((int)(&((unsigned char *)&stru_87C374)[13428]))), 0);
          Event::Dispatch();
          (*(void (**)(unsigned int))(**(unsigned int **)&((unsigned char *)&stru_87C374)[45772] + 12))(*(unsigned int *)&((unsigned char *)&stru_87C374)[45772]);
          ChatMessageWOL(0, (wchar_t *)&((unsigned char *)&stru_87C374)[46016]);
          return 1;
        }
        if ( !((unsigned char *)&HouseClass_Player)[45087] )
          goto LABEL_2;
LABEL_183:
        ChatMessageWOL(0, (wchar_t *)&((unsigned char *)&stru_87C374)[46016]);
        return 0;
      case 9:
        ++*(unsigned int *)&((unsigned char *)&HouseClass_Player)[43616];
        Credits::Screen();
        --*(unsigned int *)&((unsigned char *)&HouseClass_Player)[43616];
  unsigned int v61[14]; // [esp+32h] [ebp-F4h] BYREF
        Options = LoadOptions::LoadOptions(v61);
        char v25 = LoadOptions::Run(Options);
        ((LoadOptions *)v61)->Cleanup();
        if ( v25 )
        {
          v55 = 1;
LABEL_145:
          if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] == 4 )
          {
            v35 = GetStringCSF( (wchar_t *)(aTxtAwayLoading), 0, (const char *)(g_Str_File_Init_CPP), 2993);
            ChatMessageWOL( 1, (wchar_t *)(v35));
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
        *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 5;
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
        v17 = (IUnknown *)((StringList *)(&g_BuildingTypeClass_Count))->Find(g_INI_Key_INTRO);
        ((Theme*)((int)&g_BuildingTypeClass_Count))->QueueSong( (int)(v17));
        Screen::Capture(1, 0, 0, -1);
        goto LABEL_134;
      case 16:
      case 17:
LABEL_81:
        ((ScenarioClass *)((int)&((unsigned char *)&HouseClass_Player)[29932]))->LoadNetworkConfig();
        for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
          (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)g_SuperWeaponTypeCount + j) + 100))(
            *((unsigned int *)g_SuperWeaponTypeCount + j),
            *(unsigned int *)&((unsigned char *)&stru_87C374)[44244]);
        *(unsigned int *)&((unsigned char *)&HouseClass_Player)[40296] = 0;
        switch ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] )
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
            ((unsigned char *)&HouseClass_Player)[39106] = 1;
            if ( !((NullModemClass *)&((unsigned char *)&HouseClass_Player)[44324])->COMStub() )
            {
              esi12 = 18;
              *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
              goto LABEL_134;
            }
            ((EventClass *)(&((unsigned char *)&HouseClass_Player)[44324]))->CheckFlag();
            if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] == 2 )
            {
              if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[40420] )
                goto LABEL_93;
            }
            else if ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] != 1
                   || *(unsigned int *)&((unsigned char *)&HouseClass_Player)[40420] != 2 )
            {
LABEL_93:
              v27 = ModemGuest::Dialog((LONG)v62);
              goto LABEL_97;
            }
            v27 = ModemHost::Dialog((LONG)v63);
LABEL_97:
            if ( !v27 )
            {
              *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
              esi12 = 18;
            }
LABEL_116:
            switch ( *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] )
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
                ((ScenarioClass *)((int)&((unsigned char *)&HouseClass_Player)[29932]))->LoadNetworkConfig();
                if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
                {
                  (***(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748])(
                    *(unsigned int *)&((unsigned char *)&stru_87C374)[45748],
                    1);
                  *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = 0;
                }
                for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
                  (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)g_SuperWeaponTypeCount + j) + 100))(
                    *((unsigned int *)g_SuperWeaponTypeCount + j),
                    *(unsigned int *)&((unsigned char *)&stru_87C374)[44244]);
                *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 3;
                *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29952] = 2;
                if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
                  goto LABEL_134;
                unsigned int * v33 = (unsigned int *)operator new(0x3F310u);
                if ( v33 )
                  v36 = (IPXInterfaceClass *)IPXInterfaceClass::Construct(v33);
                IPXInterfaceClass *v36 = 0;
                *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = (unsigned int)v36;
                ((WinsockInterface *)(v36))->Init();
                Screen::Capture(1, 0, 0, -1);
                if ( InitNetworkGameState() && NetworkLobby::CreateGame() )
                  goto LABEL_145;
                *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
                esi12 = 18;
                if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
                  (***(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748])(
                    *(unsigned int *)&((unsigned char *)&stru_87C374)[45748],
                    1);
                *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = 0;
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
            memset( (void *)(&((unsigned char *)&HouseClass_Player)[40672]), 0, 0x20u);
            j = 0;
            *(unsigned short *)&((unsigned char *)&HouseClass_Player)[42332] = 0;
            char v29 = Network::Init();
            int v30 = RunWOLMainLoop(esi12 == 17);
            esi12 = 16;
            ((unsigned char *)&HouseClass_Player)[39106] = 0;
            switch ( v30 )
            {
              case -2:
              case 0:
                if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
                  (***(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748])(
                    *(unsigned int *)&((unsigned char *)&stru_87C374)[45748],
                    1);
                *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = 0;
                esi12 = 18;
                *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
                v31 = (Movie *)((StringList *)(&g_BuildingTypeClass_Count))->Find(g_INI_Key_INTRO);
                ((ThemeClass *)((int *)&g_BuildingTypeClass_Count))->Play( (int)(v31));
                goto LABEL_116;
              case -1:
                ((Theme *)(&g_BuildingTypeClass_Count))->Stop((ObjectClass *)1);
                if ( !g_Is16BitMode )
                  FadePalette(&((unsigned char *)&stru_87C374)[35596], 30, 0);
                if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
                  (***(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748])(
                    *(unsigned int *)&((unsigned char *)&stru_87C374)[45748],
                    1);
                *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = 0;
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
                  *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
                  esi12 = 18;
                  if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
                    (***(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748])(
                      *(unsigned int *)&((unsigned char *)&stru_87C374)[45748],
                      1);
                  *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = 0;
                  g_WOLReturnCode = -1;
                }
                goto LABEL_116;
              case 2:
                if ( *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] )
                  (***(void (****)(unsigned int, int))&((unsigned char *)&stru_87C374)[45748])(
                    *(unsigned int *)&((unsigned char *)&stru_87C374)[45748],
                    1);
                *(unsigned int *)&((unsigned char *)&stru_87C374)[45748] = 0;
                *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
                esi12 = 11;
                goto LABEL_116;
              default:
                goto LABEL_116;
            }
            return result;
          case 5:
            if ( !ShowSkirmishSetupScreen(0, -1) )
            {
              *(unsigned int *)&((unsigned char *)&HouseClass_Player)[29932] = 0;
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
  int16_t v10; // ax
  uint16_t v11; // ax
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
  unsigned char v26[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v27; // [esp+20h] [ebp-18h]
  int v28; // [esp+24h] [ebp-14h] BYREF
  int16_t v29; // [esp+28h] [ebp-10h]

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
    (*((unsigned char *)&(v6))) = dword_A8E960 | 4; /*0x52f78e*/
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
          *((unsigned char *)&v27 + v7) = v23; /*0x52f817*/
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
    (*((unsigned char *)&(v12))) = dword_A8D5F8 | 4; /*0x52f9f0*/
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
  unsigned char v4[1012]; // [esp+1Ch] [ebp-3F4h] BYREF

  Debug::Log(); /*0x52fc2d*/
  if ( dword_A8B8B8 || (dword_A8D5F8 & 2) != 0 || UI_Update() ) /*0x52fc4f*/
  {
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe66*/
    memcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe80*/
    SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe8d*/
    memcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52feab*/
    return Debug::Log(); /*0x52fead*/
  }
  else
  {
    if ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x52fc68*/
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
    memcpy(&dword_A8B230[14].NeedsSaveOrLink, v4, 0x3F4u); /*0x52fe31*/
    result = (int)SeedInitRNG((ObjectClass *)v4, dword_A8ED94); /*0x52fe3e*/
    memcpy(&Randomizer_Global, v4, 0x3F4u); /*0x52fe51*/
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
  result = (*(int (**)(int, unsigned int))(*(unsigned int *)&((DSurface *)g_DSurface_Hidden)->q_60))(g_DSurface_Hidden, 0);  /*0x52ffdd*/
  if ( a1 ) /*0x52ffe3*/
  {
    IDA_LOBYTE(v3) = 1; /*0x52ffed*/
// 0x4f4780
    return (unsigned int)Frame::Present(v3, 0); /*0x52ffef*/
{

  int *v9; // eax
  int result; // eax
  int v11; // edi
  LONG v12; // eax
  int v13; // edx
  LONG v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // ebp
  LONG v21; // edi
  LONG v22; // ebx
  int v23; // eax
  double v24; // st7
  LPPERSISTSTREAM v25; // edi
  int v26; // eax
  double v27; // st7
  LONG v28; // ebx
  LONG v29; // eax
  char v30; // al
  int v31; // ecx
  int v32; // edi
  int v33; // eax
  unsigned int v34; // edi
  int v35; // edi
  int v36; // eax
  char v37; // [esp+31h] [ebp-4Dh]
  unsigned char v38[12]; // [esp+32h] [ebp-4Ch] BYREF
  int v39; // [esp+3Eh] [ebp-40h]
  int v40; // [esp+42h] [ebp-3Ch]
  int v41; // [esp+46h] [ebp-38h]
  double v42; // [esp+4Ah] [ebp-34h] BYREF
  int v43; // [esp+52h] [ebp-2Ch]
  unsigned int v44; // [esp+56h] [ebp-28h]
  int v45; // [esp+5Ah] [ebp-24h] BYREF
  int v46; // [esp+5Eh] [ebp-20h] BYREF
  LONG v47; // [esp+62h] [ebp-1Ch]
  LONG v48; // [esp+66h] [ebp-18h]
  int v49; // [esp+6Ah] [ebp-14h]
  struct tagRECT Rect; // [esp+6Eh] [ebp-10h] BYREF
  int v51; // [esp+8Eh] [ebp+10h]

  if ( !a5 ) /*0x4f4790*/
  {
    v9 = (int *)(*(int (**)(int, int *))(*(unsigned int *)a1 + 120))(a1, &v46); /*0x4f479b*/
    v39 = *v9; /*0x4f47a0*/
    v40 = v9[1]; /*0x4f47a7*/
    v41 = v9[2]; /*0x4f47b6*/
    LODWORD(v42) = v9[3]; /*0x4f47bd*/
  }
  result = GetClientRect(g_hWnd, &Rect); /*0x4f47cc*/
  if ( result ) /*0x4f47d4*/
  {
    *(double *)&v38[4] = *(double *)&Rect.left; /*0x4f47e2*/
    result = ClientToScreen(g_hWnd, (LPPOINT)&v38[4]); /*0x4f47f6*/
    if ( result ) /*0x4f47fe*/
    {
      v11 = (*(int (**)(int, int, int, int))(*(unsigned int *)a1 + 128))(a1, a4, a3, a2); /*0x4f4811*/
      v12 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4817*/
      v13 = dword_87F7F0; /*0x4f4828*/
      v45 = v40; /*0x4f4830*/
      v46 = v41; /*0x4f4834*/
      v47 = v12; /*0x4f4838*/
      v48 = v11; /*0x4f483c*/
      if ( !dword_87F7EC ) /*0x4f4840*/
      {
        if ( !dword_87F7F0 ) /*0x4f4844*/
          goto LABEL_18; /*0x4f4844*/
        goto LABEL_13; /*0x4f4844*/
      }
      if ( dword_87F7EC <= 0 ) /*0x4f484a*/
      {
        if ( dword_87F7EC >= 0 ) /*0x4f4856*/
        {
LABEL_13:
          if ( dword_87F7F0 > 0 ) /*0x4f4860*/
          {
            v14 = v11 - dword_87F7F0; /*0x4f4865*/
            v46 = dword_87F7F0 + v41; /*0x4f4867*/
LABEL_17:
            v48 = v14; /*0x4f4871*/
            goto LABEL_18; /*0x4f4871*/
          }
          if ( dword_87F7F0 < 0 ) /*0x4f486d*/
          {
            v14 = dword_87F7F0 + v11; /*0x4f486f*/
            goto LABEL_17; /*0x4f486f*/
          }
LABEL_18:
          if ( !byte_A8EB7C && !byte_A8ED6B ) /*0x4f4887*/
          {
            v15 = dword_886FB8 - v12; /*0x4f4895*/
            if ( (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar) >= v15 ) /*0x4f489e*/
              v16 = v15; /*0x4f48ad*/
            else
              v16 = (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x4f48a8*/
            if ( v16 <= 0 ) /*0x4f48b1*/
            {
              v18 = 0; /*0x4f48df*/
            }
            else
            {
              v17 = dword_886FB8 - v47; /*0x4f48c3*/
              if ( (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar) >= v17 ) /*0x4f48cc*/
                v18 = v17; /*0x4f48db*/
              else
                v18 = (*(int (**)(int))(*(unsigned int *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x4f48d6*/
            }
            v13 = dword_87F7F0; /*0x4f48e5*/
            v19 = v18 + v45; /*0x4f48eb*/
            v12 = v47; /*0x4f48ed*/
            v45 = v19; /*0x4f48f1*/
          }
          v20 = *a8; /*0x4f48f9*/
          v21 = a8[1]; /*0x4f48fb*/
          v22 = a8[2]; /*0x4f48fe*/
          Rect.right = a8[3]; /*0x4f4904*/
          v49 = v20; /*0x4f4910*/
          Rect.left = v21; /*0x4f4914*/
          Rect.top = v22; /*0x4f4918*/
          if ( g_TacticalClass_Instance /*0x4f4934*/
            && (g_TacticalClass_Instance[48].__tail_0
             || g_TacticalClass_Instance[49].__tail_0 != (struct IPersistStreamVtbl *)1072693248) )
          {
            v51 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4941*/
            v23 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1); /*0x4f4949*/
            v24 = (double)v51; /*0x4f494f*/
            v25 = g_TacticalClass_Instance; /*0x4f4953*/
            *(unsigned int *)v38 = v23; /*0x4f4959*/
            v42 = v24 / *(double *)&g_TacticalClass_Instance[48].__tail_0; /*0x4f4965*/
            v26 = Math::RoundToInt((v24 - v42) * 0.5); /*0x4f4973*/
            v27 = (double)*(int *)v38; /*0x4f4978*/
            v20 = v26; /*0x4f497c*/
            *(double *)v38 = v27 / *(double *)&v25[48].__tail_0; /*0x4f4986*/
            v21 = Math::RoundToInt((v27 - *(double *)v38) * 0.5); /*0x4f499d*/
            v28 = Math::RoundToInt(v42); /*0x4f49a8*/
            v29 = Math::RoundToInt(*(double *)v38); /*0x4f49aa*/
            v13 = dword_87F7F0; /*0x4f49af*/
            v49 = v20; /*0x4f49b5*/
            Rect.left = v21; /*0x4f49b9*/
            Rect.top = v28; /*0x4f49bd*/
            Rect.right = v29; /*0x4f49c1*/
          }
          else
          {
            if ( v22 >= v12 ) /*0x4f49c9*/
              Rect.top = v12; /*0x4f49cb*/
            if ( Rect.right >= v48 ) /*0x4f49d9*/
              Rect.right = v48; /*0x4f49db*/
          }
          if ( v13 < 0 ) /*0x4f49e1*/
            Rect.left = v21 - v13; /*0x4f49e5*/
          if ( dword_87F7EC < 0 ) /*0x4f49f0*/
            v49 = v20 - dword_87F7EC; /*0x4f49f4*/
          if ( !byte_A8E378 ) /*0x4f49ff*/
            goto LABEL_51; /*0x4f49ff*/
          if ( dword_887368 ) /*0x4f4a09*/
          {
            if ( (unsigned __int8)Frame::Init() ) /*0x4f4a0b*/
            {
              v13 = dword_87F7F0; /*0x4f4a14*/
              v30 = 1; /*0x4f4a1a*/
LABEL_47:
              if ( !byte_884D2E && !v13 && !v30 ) /*0x4f4a36*/
              {
                v48 -= *((unsigned int *)dword_B0FC58 + 3); /*0x4f4a4a*/
                Rect.right -= *((unsigned int *)dword_B0FC58 + 3); /*0x4f4a53*/
              }
LABEL_51:
              if ( dword_87F7EC ) /*0x4f4a5e*/
              {
                v31 = (*(int (**)(int))(*(unsigned int *)a1 + 128))(a1) - *((unsigned int *)dword_B0FC58 + 3); /*0x4f4a7c*/
                HIDWORD(v42) = v41; /*0x4f4a82*/
                v44 = v31; /*0x4f4a86*/
                v43 = abs32(dword_87F7EC); /*0x4f4a91*/
                if ( dword_87F7EC >= 0 ) /*0x4f4a95*/
                  LODWORD(v42) = v45 - dword_87F7EC; /*0x4f4aad*/
                else
                  LODWORD(v42) = v45 + v47; /*0x4f4aa1*/
                v32 = *(unsigned int *)g_DSurface_Primary; /*0x4f4ac1*/
                v33 = (*(int (**)(int, unsigned char *, double *, unsigned int))(*(unsigned int *)g_DSurface_Primary + 120))( /*0x4f4ac5*/
                        g_DSurface_Primary,
                        v38,
                        &v42,
                        0);
                (*(void (**)(int, int))(v32 + 16))(g_DSurface_Primary, v33); /*0x4f4acf*/
                v13 = dword_87F7F0; /*0x4f4ad2*/
              }
              if ( v13 ) /*0x4f4ada*/
              {
                v34 = abs32(v13); /*0x4f4ae7*/
                v43 = (*(int (**)(int))(*(unsigned int *)a1 + 124))(a1); /*0x4f4af0*/
                LODWORD(v42) = v40; /*0x4f4af9*/
                v44 = v34; /*0x4f4aff*/
                if ( dword_87F7F0 >= 0 ) /*0x4f4b03*/
                  HIDWORD(v42) = v46 - dword_87F7F0; /*0x4f4b1b*/
                else
                  HIDWORD(v42) = v46 + v48; /*0x4f4b0f*/
                v35 = *(unsigned int *)g_DSurface_Primary; /*0x4f4b2f*/
                v36 = (*(int (**)(int, unsigned char *, double *, unsigned int))(*(unsigned int *)g_DSurface_Primary + 120))( /*0x4f4b33*/
                        g_DSurface_Primary,
                        v38,
                        &v42,
                        0);
                (*(void (**)(int, int))(v35 + 16))(g_DSurface_Primary, v36); /*0x4f4b3d*/
              }
              if ( v37 && dword_887640 ) /*0x4f4b50*/
                (*(void (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 60))(dword_887640, a1, 0); /*0x4f4b57*/
              result = (*(int (**)(int, int *, int))(*(unsigned int *)g_DSurface_Primary + 8))( /*0x4f4b7b*/
                         g_DSurface_Primary,
                         &v45,
                         a1);
              if ( v37 ) /*0x4f4b83*/
              {
                result = dword_887640; /*0x4f4b85*/
                if ( dword_887640 ) /*0x4f4b8c*/
                {
                  Sleep(0x32u); /*0x4f4b90*/
                  return (*(int (**)(int, int, unsigned int))(*(unsigned int *)dword_887640 + 64))(dword_887640, a1, 0); /*0x4f4ba1*/
                }
              }
              return result; /*0x4f4ba1*/
            }
            v13 = dword_87F7F0; /*0x4f4a1e*/
          }
          v30 = 0; /*0x4f4a24*/
          goto LABEL_47; /*0x4f4a24*/
        }
        v12 += dword_87F7EC; /*0x4f4858*/
      }
      else
      {
        v12 -= dword_87F7EC; /*0x4f484e*/
        v45 = dword_87F7EC + v40; /*0x4f4850*/
      }
      v47 = v12; /*0x4f485a*/
      goto LABEL_13; /*0x4f485a*/
    }
  }
  return result; /*0x4f4ba4*/

}
char E4Recv_520260::sub_520260()
{

  int v2; // eax
  unsigned int v4[3]; // [esp+4h] [ebp-Ch] BYREF

    v2 = this->u32_5D4;
    if ( v2 && this->isInPlayfield[0] )
    *(unsigned char *)(v2 + 130) = 1; /*0x52027a*/
    if ( this->u32_5D4 )
    return 0; /*0x520281*/
    if ( (*(int (**)(TechnoClass *))(this->vtable0 + 388))(this) != 5 )
    return 0; /*0x520298*/
    v4[0] = this->location[0];
    v4[1] = this->location[1];
    v4[2] = this->location[2];
  if ( (uint8_t)((Tactical *)&dword_87F7E8)->IsCellVisible( (IUnknown *)(v4)) ) /*0x5202c2*/
    return 0; /*0x5202e6*/
    (*(void (**)(TechnoClass *))(this->vtable0 + 928))(this);
    (*(void (**)(TechnoClass *))(this->vtable0 + 248))(this);
  return 1; /*0x5202e1*/

}
} // namespace gamemd
}
}

// 0x522540
namespace gamemd {
char E4Recv_522540::sub_522540()
{
  return *(unsigned char *)(this->airstrikeTimer + 1708); /*0x52254c*/
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
  int64_t result; // rax

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
  int64_t result; // rax

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
  *(unsigned int *)this = &vt_INIClassINIEntry; /*0x52aaf7*/
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
      operator delete((void *)(this->u32_14)); /*0x52ab33*/
      this->u32_14 = v4; /*0x52ab3d*/
    }
    while ( v4 ); /*0x52ab40*/
  }
  free(*(unsigned int *)&this->q018); /*0x52ab47*/
  this->u32_18 = 0; /*0x52ab51*/
  *(unsigned int *)this = &vt_GenericNode; /*0x52ab54*/
  if ( this ) /*0x52ab5a*/
  {
    v5 = this->ptr_10; /*0x52ab5c*/
    if ( v5 ) /*0x52ab61*/
    {
      v6 = this->u32_8; /*0x52ab63*/
      if ( v6 ) /*0x52ab68*/
      {
        *(unsigned int *)(v6 + 4) = v5; /*0x52ab6a*/
        this->ptr_10->vtable3 = this->u32_8; /*0x52ab73*/
        this->u32_8 = 0; /*0x52ab76*/
        this->ptr_10 = 0; /*0x52ab79*/
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
  int64_t result; // rax

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
  int64_t result; // rax

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
INT_PTR ReadModConfigINI(HWND hDlg, UINT, WPARAM, int * a4)
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
      if ( ((uint16_t)a3 == 2 || (uint16_t)a3 == 1188) && !(*(((unsigned short *)&(a3)) + 1)) ) /*0x52d563*/
      {
        DlgItem = GetDlgItem(hDlg, 1187); /*0x52d575*/
        v8 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d585*/
        EndDialog(hDlg, v8); /*0x52d58d*/
        DestroyWindow(hDlg); /*0x52d594*/
      }
    }
    else if ( a2 == 534 ) /*0x52d51d*/
    {
      return (uint8_t)Window::ClampToScreen(a4); /*0x52d546*/
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
  ((Dialog *)(hDlg))->RestoreParent(); /*0x52d492*/
  v5 = GetDlgItem(hDlg, 1187); /*0x52d4a9*/
  for ( i = 0; i < a4[4]; ++i ) /*0x52d4b9*/
  {
    INIClass::GetString( /*0x52d4da*/
      *(uint8_t ****)(a4[1] + 4 * i),
      (uint8_t *)g_INI_Key_General,
      (uint8_t *)g_INI_Key_Name,
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
  unsigned int *WindowLongA; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x52d7a9*/
  if ( result ) /*0x52d7b0*/
    return result; /*0x52d7b0*/
  WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x52d7b9*/
  if ( a2 == 15 ) /*0x52d7c2*/
  {
    DlgItem = GetDlgItem(hWnd, 1818); /*0x52d82a*/
    SendMessageA(DlgItem, 0x4F0u, 0, 0); /*0x52d83a*/
    return 0; /*0x52d83a*/
  }
  if ( a2 != 273 ) /*0x52d7ca*/
    return 0; /*0x52d840*/
  switch ( (int16_t)a3 ) /*0x52d7e5*/
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
