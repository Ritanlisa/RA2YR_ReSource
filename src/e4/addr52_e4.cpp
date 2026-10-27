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
namespace gamemd { int System_Get_751520(ObjectClass *p_this); }  // x4:ida@0x751520
namespace gamemd { int sub_631FC0(int p0, int p1); }  // x4:signals@0x631fc0
namespace gamemd { int sub_631FE0(int p0, int p1); }  // x4:signals@0x631fe0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int InitializeAudioSubsystem(ObjectClass *p_this);  // x4:ida@0x406b10
int LoadExpansionMixFiles(ObjectClass *p_this);  // x4:ida@0x530000
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
  return (int)(aP0 + 8 * (v3 / 2)); /*0x523474*/
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
  char String_buf[128]; // [esp+28h] [ebp-80h] BYREF

  if ( (((INIClass *)edx0)->GetString(aP1, a2, &g_INI_DefaultBuffer, String_buf, 128) ) /*0x52545c*/
  {
    VectorClass::Construct(&v22, 0, 0); /*0x525471*/
    v24 = 10; /*0x52547a*/
    v23 = 0; /*0x525488*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4DD8) */  /*0x52548c*/
    for ( i = (ObjectClass *)strtok(String_buf, Delimiter); i; i = (ObjectClass *)strtok(0, Delimiter) ) /*0x52549e*/
    {
      if ( !LOBYTE(i->ptr_0) ) /*0x5254a0*/
        break; /*0x5254a2*/
      _751520 = (ObjectClass *)System_Get_751520(i); /*0x5254a6*/
      if ( _751520 ) /*0x5254ad*/
      {
        _7515C0 = ((ObjectClass *)_751520)->System_Get_7515C0(); /*0x5254ba*/
        if ( v23 < v22.Capacity /*0x5254e2*/
          || (v22.IsAllocated[0] || !v22.Capacity)
          && v24 > 0
          && (*(unsigned __int8 (**)(VectorClass *, int, unsigned int))(v22.ptr_0 + 8))(
               &v22,
               v24 + v22.Capacity,
               0) )
        {
          v15 = v23++; /*0x5254ed*/
          *(unsigned int *)(v22.Items + 4 * v15) = _7515C0; /*0x5254f8*/
        }
      }
    }
    IntVector::Copy((IntVector *)a1, &v22); /*0x525514*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E4DD8) */  /*0x52551e*/
    v16 = v24; /*0x525528*/
    a1->q010 = v23; /*0x52552c*/
    Items = (void *)v22.Items; /*0x52552f*/
    v18 = v22.Items == 0; /*0x525533*/
    a1->u32_14 = v16; /*0x525535*/
    /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E4DB8) */  /*0x525538*/
    if ( !v18 && v22.IsAllocated[0] ) /*0x525542*/
    {
      __3_YAXPAX_Z(Items); /*0x525545*/
      v22.Items = 0; /*0x52554d*/
    }
    v19 = a6; /*0x525551*/
    v22.IsAllocated[0] = 0; /*0x525558*/
    v22.Capacity = 0; /*0x52555e*/
    a5 = &g_ptr_7E4DB8; /*0x525562*/
    if ( a6 && HIBYTE(a8) ) /*0x525572*/
      goto LABEL_20; /*0x525572*/
  }
  else
  {
    a1->Items = 0; /*0x525587*/
    a1->Capacity = 0; /*0x52558a*/
    a1->IsInitialized = 1; /*0x52558d*/
    a1->IsAllocated = 0; /*0x525591*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E4DB8) */  /*0x525594*/
    TypeList::Copy((TypeList *)a1, &a5); /*0x525596*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E4DD8) */  /*0x52559b*/
    a5 = &g_ptr_7E4DB8; /*0x5255a1*/
    v20 = a10; /*0x5255af*/
    a1->q010 = a9; /*0x5255b6*/
    v19 = a6; /*0x5255b9*/
    v18 = a6 == 0; /*0x5255c0*/
    a1->u32_14 = v20; /*0x5255c2*/
    if ( !v18 && HIBYTE(a8) ) /*0x5255ce*/
LABEL_20:
      __3_YAXPAX_Z(v19); /*0x5255d0*/
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
  String *pN; // esi
  unsigned __int8 *v8; // eax
  int v9; // ecx
  HashTable *v10; // esi
  unsigned __int8 **HashTable_field_0x10; // ecx
  int v12; // eax
  unsigned __int8 **v13; // ecx
  int v14; // eax
  char ***v15; // esi
  unsigned __int8 *v16; // edi
  unsigned __int8 **attachedBomb; // eax
  int v18; // eax
  int *v19; // esi
  char **v21; // esi
  const char *v22; // esi
  unsigned char v23[12]; // [esp+8h] [ebp-Ch] BYREF

  v4 = a2; /*0x528227*/
  if ( a2 ) /*0x52822f*/
  {
    v6 = a3; /*0x528235*/
    if ( a3 ) /*0x52823b*/
    {
      if ( a2 == (unsigned __int8 *)this->ptr_4 ) /*0x528248*/
      {
        pN = this->ptr_8; /*0x52824e*/
LABEL_5:
        if ( pN ) /*0x528253*/
        {
          memset(v23, 0, sizeof(v23)); /*0x528259*/
          v8 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v23, v6, strlen((const char *)v6)); /*0x528277*/
          v9 = pN->u32_30; /*0x52827c*/
          v10 = (HashTable *)(pN + 44); /*0x52827f*/
          a3 = v8; /*0x528284*/
          if ( v9 ) /*0x528288*/
          {
            HashTable_field_0x10 = (unsigned __int8 **)v10->u32_10; /*0x52828e*/
            if ( HashTable_field_0x10 && *HashTable_field_0x10 == v8 ) /*0x528297*/
            {
LABEL_11:
              if ( v10->u32_4 ) /*0x5282b4*/
              {
                v13 = (unsigned __int8 **)v10->u32_10; /*0x5282bf*/
                if ( v13 && *v13 == v8 ) /*0x5282c8*/
                  goto LABEL_16; /*0x5282c8*/
                v14 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282d1*/
                if ( v14 ) /*0x5282d8*/
                {
                  v10->u32_10 = v14; /*0x5282de*/
LABEL_16:
                  v15 = (char ***)(v10->u32_10 + 4); /*0x5282e1*/
                  goto LABEL_29; /*0x5282e7*/
                }
              }
              v15 = (char ***)&unk_B78830; /*0x52838b*/
LABEL_29:
              v21 = *v15; /*0x528390*/
              if ( v21 ) /*0x528394*/
              {
                v22 = v21[4]; /*0x528396*/
                if ( v22 ) /*0x52839b*/
                  sscanf(v22, "%x", &a4); /*0x5283a8*/
              }
              return a4; /*0x5283a8*/
            }
            v12 = HashTable::BinarySearchAlt(v10, (int *)&a3); /*0x5282a0*/
            if ( v12 ) /*0x5282a7*/
            {
              v10->u32_10 = v12; /*0x5282ad*/
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
        attachedBomb = (unsigned __int8 **)this->attachedBomb; /*0x52831f*/
        if ( !attachedBomb || *attachedBomb != v16 ) /*0x528328*/
        {
          v18 = SortedArray::BinarySearch(&this->SortedArray_28, (int *)&a2); /*0x528331*/
          if ( !v18 ) /*0x528338*/
            goto LABEL_27; /*0x528338*/
          this->attachedBomb = v18; /*0x52833a*/
        }
        a2 = v16; /*0x528341*/
        if ( (unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a2) ) /*0x528348*/
          v19 = (int *)(this->attachedBomb + 4); /*0x528354*/
        else
          v19 = (int *)&unk_B7882C; /*0x528359*/
        pN = *v19; /*0x52835e*/
        if ( pN ) /*0x528362*/
        {
          v6 = a3; /*0x528364*/
          this->ptr_8 = pN; /*0x528368*/
          this->ptr_4 = (int)v4; /*0x52836b*/
          goto LABEL_5; /*0x528370*/
        }
      }
LABEL_27:
      this->ptr_4 = 0; /*0x528375*/
      this->ptr_8 = 0; /*0x52837c*/
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
  int pN; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  char **v12; // eax
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
  if ( v7 == (char *)this->ptr_4 ) /*0x529ebc*/
  {
    pN = this->ptr_8; /*0x529ec2*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x529fab*/
    v18 = (Checksummer *)KeyValuePair::Init(v26, 0); /*0x529fb7*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x529fca*/
    v23 = v19; /*0x529fcf*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x529ff0*/
      || (v24 = v19, (pN = *(unsigned int *)((SortedArray *)&this->owningHouseIndex)->FindValue(&v24)) == 0) )
    {
      this->ptr_4 = 0; /*0x52a006*/
      this->ptr_8 = 0; /*0x52a009*/
      goto LABEL_11; /*0x52a00c*/
    }
    v6 = a4; /*0x529ff2*/
    this->ptr_8 = pN; /*0x529ff9*/
    this->ptr_4 = (int)v7; /*0x529ffc*/
  }
  if ( pN ) /*0x529ec7*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x529ece*/
    v21 = (unsigned __int8 *)a4; /*0x529edb*/
    v10 = (Checksummer *)KeyValuePair::Init(v27, 0); /*0x529ee2*/
    v11 = (int *)(pN + 44); /*0x529ef5*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x529efb*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x529f02*/
    {
      v12 = *(char ***)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x529f1a*/
      if ( v12 ) /*0x529f1e*/
      {
        v13 = v12[4]; /*0x529f20*/
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
  String *pN; // esi
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // esi
  char **v12; // eax
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
  if ( a3 == (unsigned __int8 *)this->ptr_4 ) /*0x52a14a*/
  {
    pN = this->ptr_8; /*0x52a150*/
  }
  else
  {
    memset(&v21, 0, 12); /*0x52a256*/
    *(float *)&v16 = COERCE_FLOAT(Checksummer::Add_Buffer(&v21, a3, strlen((const char *)a3))); /*0x52a280*/
    a3 = v16; /*0x52a285*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, (int *)&a3) /*0x52a2a6*/
      || (v20 = (int)v16, (pN = *(unsigned int *)((SortedArray *)&this->owningHouseIndex)->FindValue(&v20)) == 0) )
    {
      this->ptr_4 = 0; /*0x52a2b9*/
      this->ptr_8 = 0; /*0x52a2bc*/
      goto LABEL_11; /*0x52a2bf*/
    }
    v7 = a4; /*0x52a2a8*/
    this->ptr_8 = pN; /*0x52a2ac*/
    this->ptr_4 = (int)v6; /*0x52a2af*/
  }
  if ( pN ) /*0x52a155*/
  {
    v9 = strlen((const char *)LODWORD(v7)) + 1; /*0x52a15e*/
    v18 = (unsigned __int8 *)LODWORD(v7); /*0x52a164*/
    v10 = (Checksummer *)KeyValuePair::Init((KeyValuePair *)&v21.buffer, 0); /*0x52a16a*/
    a4 = COERCE_FLOAT(Checksummer::Add_Buffer(v10, v18, v9 - 1)); /*0x52a176*/
    v11 = &pN->u32_2C; /*0x52a17a*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a184*/
    {
      v12 = *(char ***)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a199*/
      if ( v12 ) /*0x52a19d*/
      {
        v13 = v12[4]; /*0x52a19f*/
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
  int pN; // ebx
  unsigned int v9; // kr04_4
  Checksummer *v10; // eax
  int *v11; // ebx
  float *v12; // eax
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
  if ( v7 == (char *)this->ptr_4 ) /*0x52a33c*/
  {
    pN = this->ptr_8; /*0x52a342*/
  }
  else
  {
    v17 = strlen(v7) + 1; /*0x52a443*/
    v18 = (Checksummer *)KeyValuePair::Init(&v26, 0); /*0x52a44f*/
    v19 = Checksummer::Add_Buffer(v18, (unsigned __int8 *)v7, v17 - 1); /*0x52a462*/
    v23 = v19; /*0x52a467*/
    if ( !(unsigned __int8)HashTable::BinarySearch(&this->owningHouseIndex, &v23) /*0x52a488*/
      || (v24 = v19, (pN = *(unsigned int *)((SortedArray *)&this->owningHouseIndex)->FindValue(&v24)) == 0) )
    {
      this->ptr_4 = 0; /*0x52a49e*/
      this->ptr_8 = 0; /*0x52a4a1*/
      goto LABEL_11; /*0x52a4a4*/
    }
    v6 = a4; /*0x52a48a*/
    this->ptr_8 = pN; /*0x52a491*/
    this->ptr_4 = (int)v7; /*0x52a494*/
  }
  if ( pN ) /*0x52a347*/
  {
    v9 = strlen((const char *)v6) + 1; /*0x52a34e*/
    v21 = (unsigned __int8 *)a4; /*0x52a35b*/
    v10 = (Checksummer *)KeyValuePair::Init(v29, 0); /*0x52a362*/
    v11 = (int *)(pN + 44); /*0x52a375*/
    a4 = (char **)Checksummer::Add_Buffer(v10, v21, v9 - 1); /*0x52a37b*/
    if ( (unsigned __int8)SortedArray::Find(v11, (int *)&a4) ) /*0x52a382*/
    {
      v12 = *(float **)SortedArray::BinarySearch2((int)v11, (int *)&a4); /*0x52a39a*/
      if ( v12 ) /*0x52a39e*/
      {
        v13 = v12[4]; /*0x52a3a0*/
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
  a2->Prev = v15; /*0x52a4c0*/
  a2->Next = v16; /*0x52a4c3*/
  return a2; /*0x52a4c6*/

}
}
// 0x52A4D0
namespace gamemd {
int E4Recv_52A4D0::sub_52A4D0(uint8_t * a2)
{

  unsigned __int8 *v3; // eax
  size_t nextObject; // ecx
  unsigned __int8 *v5; // edi
  unsigned __int8 **v6; // eax
  int v7; // edx
  int fallRate; // ecx
  int v9; // eax
  size_t v10; // eax
  unsigned __int8 **v11; // ecx
  int v12; // ecx
  int v13; // ebp
  unsigned __int8 *v14; // edi
  int v15; // edx
  unsigned char v17[12]; // [esp+Ch] [ebp-Ch] BYREF
  unsigned __int8 *v18; // [esp+1Ch] [ebp+4h]

  if ( !a2 ) /*0x52a4e0*/
    return 0; /*0x52a4e0*/
  memset(v17, 0, sizeof(v17)); /*0x52a4ed*/
  v3 = (unsigned __int8 *)Checksummer::Add_Buffer((Checksummer *)v17, a2, strlen((const char *)a2)); /*0x52a504*/
  nextObject = this->nextObject; /*0x52a509*/
  v5 = v3; /*0x52a50c*/
  v18 = v3; /*0x52a510*/
  if ( !nextObject ) /*0x52a514*/
    return 0; /*0x52a514*/
  v6 = (unsigned __int8 **)this->ambientSoundController[0]; /*0x52a51a*/
  if ( v6 && *v6 == v5 ) /*0x52a523*/
    goto LABEL_9; /*0x52a523*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a525*/
  {
    qsort((void *)this->fallRate, nextObject, 8u, CompareFunc3Int); /*0x52a536*/
    this->ambientSoundController[0] = 0; /*0x52a53e*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a541*/
  }
  v7 = this->nextObject; /*0x52a545*/
  fallRate = this->fallRate; /*0x52a54d*/
  *(unsigned int *)v17 = v5; /*0x52a550*/
  v9 = UI_Find(fallRate, v7, (int *)v17); /*0x52a554*/
  if ( !v9 ) /*0x52a55b*/
    return 0; /*0x52a5f8*/
  this->ambientSoundController[0] = v9; /*0x52a561*/
LABEL_9:
  v10 = this->nextObject; /*0x52a564*/
  if ( !v10 ) /*0x52a56a*/
    return unk_B78830; /*0x52a56a*/
  v11 = (unsigned __int8 **)this->ambientSoundController[0]; /*0x52a56c*/
  if ( v11 && *v11 == v5 ) /*0x52a575*/
    return *(unsigned int *)(this->ambientSoundController[0] + 4); /*0x52a5f3*/
  if ( !LOBYTE(this->attachedBomb) ) /*0x52a577*/
  {
    qsort((void *)this->fallRate, v10, 8u, CompareFunc3Int); /*0x52a588*/
    this->ambientSoundController[0] = 0; /*0x52a590*/
    LOBYTE(this->attachedBomb) = 1; /*0x52a593*/
  }
  v12 = this->nextObject; /*0x52a597*/
  v13 = this->fallRate; /*0x52a59a*/
  if ( v12 <= 0 ) /*0x52a59f*/
    return unk_B78830; /*0x52a59f*/
  while ( 1 ) /*0x52a5ac*/
  {
    v14 = *(unsigned __int8 **)(v13 + 8 * (v12 / 2)); /*0x52a5ac*/
    v15 = v13 + 8 * (v12 / 2); /*0x52a5b0*/
    if ( (int)v14 <= (int)v18 ) /*0x52a5b6*/
      break; /*0x52a5b6*/
    v12 /= 2; /*0x52a5b8*/
LABEL_19:
    if ( v12 <= 0 ) /*0x52a5ca*/
      return unk_B78830; /*0x52a5ca*/
  }
  if ( v14 != v18 ) /*0x52a5bc*/
  {
    v13 = v15 + 8; /*0x52a5be*/
    v12 += -1 - v12 / 2; /*0x52a5c6*/
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
  unsigned char v6[512]; // [esp+8h] [ebp-200h] BYREF
  v3 = sub_631FC0((ObjectClass *)a2, v6); /*0x52a628*/
  ((uint8_t *)aPublickey)->ReadBase64Data((int)v6, v3); /*0x52a63a*/
  signed int v4; // eax
  v4 = sub_631FE0((ObjectClass *)a2, v6); /*0x52a646*/
  ((uint8_t *)aPrivatekey)->ReadBase64Data((int)v6, v4); /*0x52a658*/
  return (gamemd::ObjectClass **)(1); /*0x52a65d*/
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

  ScenarioClass *v2; // eax
  int v3; // ebx
  RulesClass *v5; // eax
  TextBuffer *TextBufferEntry; // eax
  BitTextClass *v7; // eax
  void *v8; // eax
  int i; // edi
  char *v10; // esi
  unsigned char *v11; // eax
  void *v12; // eax
  int j; // edi
  char *v14; // esi
  unsigned char *v15; // eax
  void *v16; // eax
  int k; // edi
  char *v18; // esi
  unsigned char *v19; // eax
  int v20; // edi
  char *v21; // esi
  unsigned char *v22; // eax
  char *v23; // ecx
  ConvertClass *v24; // eax
  void *v25; // eax
  int m; // edi
  int v27; // eax
  unsigned char *v28; // esi
  unsigned char *v29; // eax
  ConvertClass *v30; // eax
  void *v31; // eax
  int n; // edi
  int v33; // eax
  unsigned char *v34; // esi
  unsigned char *v35; // eax
  ConvertClass *v36; // eax
  void *v37; // eax
  int ii; // edi
  int v39; // eax
  unsigned char *v40; // esi
  unsigned char *v41; // eax
  ConvertClass *v42; // eax
  void *v43; // eax
  int jj; // edi
  int v45; // eax
  unsigned char *v46; // esi
  unsigned char *v47; // eax
  ConvertClass *v48; // eax
  void *v49; // eax
  int kk; // edi
  int v51; // eax
  unsigned char *GameDirectoryCD; // esi
  unsigned char *v53; // eax
  ConvertClass *v54; // eax
  unsigned char *v55; // eax
  ConvertClass *v56; // eax
  ObjectClass *v57; // ebp
  int *v58; // eax
  int v59; // ecx
  MixFile *v60; // ecx
  Tactical *v61; // eax
  ObjectClass *v62; // ecx
  int mm; // esi
  int nn; // esi
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  int v67; // edx
  int *v68; // ecx
  unsigned int *v69; // eax
  int v70; // edx
  wchar_t *v71; // [esp-10h] [ebp-2F50h]
  wchar_t *StringCSF; // [esp-Ch] [ebp-2F4Ch]
  MixFileClass *v73; // [esp+0h] [ebp-2F40h]
  Voxel *v74; // [esp+0h] [ebp-2F40h]
  ObjectClass *v75; // [esp+0h] [ebp-2F40h]
  ObjectClass *v76; // [esp+0h] [ebp-2F40h]
  Audio *v77; // [esp+0h] [ebp-2F40h]
  Audio *v78; // [esp+0h] [ebp-2F40h]
  ObjectClass *v79; // [esp+0h] [ebp-2F40h]
  TechnoClass *v80; // [esp+0h] [ebp-2F40h]
  ObjectClass *v81; // [esp+0h] [ebp-2F40h]
  ObjectClass *v82; // [esp+0h] [ebp-2F40h]
  unsigned char v83[1640]; // [esp+10h] [ebp-2F30h] BYREF
  CCFileClass Buffer[2]; // [esp+678h] [ebp-28C8h] BYREF
  char Source[10240]; // [esp+740h] [ebp-2800h] BYREF

  Debug::Log(); /*0x52ba73*/
  v2 = (ScenarioClass *)__2_YAPAXI_Z(0x3740u); /*0x52ba7d*/
  v3 = 0; /*0x52ba82*/
  if ( !v2 ) /*0x52ba89*/
  {
    dword_A8B230 = 0; /*0x52bab6*/
    goto LABEL_3; /*0x52babc*/
  }
  dword_A8B230 = (AbstractClass *)ScenarioClass::Constructor(v2); /*0x52ba94*/
  if ( !dword_A8B230 ) /*0x52ba99*/
  {
LABEL_3:
    Debug::Log(); /*0x52ba9b*/
    return -1; /*0x52bab5*/
  }
  v5 = (RulesClass *)__2_YAPAXI_Z(0x18C0u); /*0x52bac3*/
  if ( !v5 ) /*0x52bacd*/
  {
    dword_8871E0 = 0; /*0x52bafa*/
    goto LABEL_3; /*0x52bb00*/
  }
  dword_8871E0 = (RulesClass *)RulesClass::RulesClass(v5); /*0x52bad8*/
  if ( !dword_8871E0 ) /*0x52badd*/
    goto LABEL_3; /*0x52badd*/
  Debug::Log(); /*0x52bb07*/
  if ( !g_Is16BitMode ) /*0x52bb16*/
    FadePalette(&word_884E80, 0, 0); /*0x52bb20*/
  if ( byte_89E3A0 == 1 ) /*0x52bb2c*/
    SetSoundWarning(-2); /*0x52bb33*/
  do /*0x52bb4a*/
    EventQueue::Process((EventQueue *)dword_87F770); /*0x52bb3e*/
  while ( !stru_A8E960.random[524] ); /*0x52bb4a*/
  g_LoadScreenFlag = 0; /*0x52bb51*/
  TextBufferEntry = (TextBuffer *)GetTextBufferEntry(4); /*0x52bb58*/
  TextBuffer::Init(TextBufferEntry); /*0x52bb5f*/
  if ( !MixFileClass::Bootstrap(v73) ) /*0x52bb64*/
  {
    Debug::Log(); /*0x52bb72*/
    Debug::Log_0(); /*0x52bb7f*/
    return -1; /*0x52bb94*/
  }
  v7 = (BitTextClass *)__2_YAPAXI_Z(4u); /*0x52bb97*/
  if ( v7 ) /*0x52bba1*/
    g_GameFontObject = (int)BitTextClass::LoadFont(v7); /*0x52bbaa*/
  else
    g_GameFontObject = 0; /*0x52bbb1*/
  Init::StubPlaceholder(); /*0x52bbb7*/
  LoadMouseClassResources(); /*0x52bbbc*/
  InitializeAudioSubsystem(g_Audio_MixerEnabled); /*0x52bbc7*/
  ((Timer *)dword_87F770)->PumpMessages(); /*0x52bbd2*/
  v8 = SearchMIXFile(aUnitsnoPal, 0); /*0x52bbe3*/
  memcpy(&stru_886380, v8, 0x300u); /*0x52bbee*/
  for ( i = 0; i < 256; ++i ) /*0x52bbf6*/
  {
    v10 = (char *)&stru_886380 + 3 * (i % 256); /*0x52bc16*/
    v11 = Palette::SixBitTo16Bit( /*0x52bc2f*/
            (Palette *)&v83[36],
            4 * *v10,
            4 * *((unsigned char *)&stru_886380.Block_field_00 + 3 * (i % 256) + 1),
            4 * *((unsigned char *)&stru_886380.Block_field_00 + 3 * (i % 256) + 2));
    *(unsigned short *)v10 = *(unsigned short *)v11; /*0x52bc38*/
    v10[2] = v11[2]; /*0x52bc44*/
  }
  v12 = SearchMIXFile(aTemperatPal, 0); /*0x52bc55*/
  memcpy(&FileSystem_TEMPERAT_PAL, v12, 0x300u); /*0x52bc60*/
  for ( j = 0; j < 256; ++j ) /*0x52bc68*/
  {
    v14 = (char *)&FileSystem_TEMPERAT_PAL + 3 * (j % 256); /*0x52bc88*/
    v15 = Palette::SixBitTo16Bit( /*0x52bca1*/
            (Palette *)&v83[40],
            4 * *v14,
            4 * byte_885781[3 * (j % 256)],
            4 * byte_885782[3 * (j % 256)]);
    *(unsigned short *)v14 = *(unsigned short *)v15; /*0x52bcaa*/
    v14[2] = v15[2]; /*0x52bcb6*/
  }
  Block::Copy(&stru_885A80, &FileSystem_TEMPERAT_PAL); /*0x52bcc5*/
  Block::Copy(&stru_886080, &FileSystem_TEMPERAT_PAL); /*0x52bcd4*/
  byte_885D82 = byte_884E82; /*0x52bce5*/
  word_885D80 = word_884E80; /*0x52bcf7*/
  v16 = SearchMIXFile(aWaypointPal, 0); /*0x52bcfd*/
  memcpy(byte_885180, v16, 0x300u); /*0x52bd08*/
  for ( k = 0; k < 256; ++k ) /*0x52bd10*/
  {
    v18 = &byte_885180[3 * (k % 256)]; /*0x52bd30*/
    v19 = Palette::SixBitTo16Bit( /*0x52bd4e*/
            (Palette *)&v83[28],
            4 * *v18,
            4 * byte_885181[3 * (k % 256)],
            4 * byte_885182[3 * (k % 256)]);
    *(unsigned short *)v18 = *(unsigned short *)v19; /*0x52bd57*/
    v18[2] = v19[2]; /*0x52bd63*/
  }
  CCFileClass::Construct(Buffer, aVoxelsVpl); /*0x52bd74*/
  VoxelPaletteClass::LoadFromFile((VoxelPaletteClass *)Buffer); /*0x52bd80*/
  v20 = 0; /*0x52bd85*/
  v21 = (char *)&unk_B2FB79; /*0x52bd87*/
  do /*0x52bdcf*/
  {
    v22 = Palette::SixBitTo16Bit((Palette *)&v83[20], *(v21 - 1), *v21, v21[1]); /*0x52bd9b*/
    v23 = (char *)&unk_886680 + 3 * (v20 % 256); /*0x52bdb5*/
    v21 += 3; /*0x52bdbc*/
    ++v20; /*0x52bdbf*/
    *(unsigned short *)v23 = *(unsigned short *)v22; /*0x52bdc0*/
    v23[2] = v22->ptr_2; /*0x52bdcc*/
  }
  while ( (int)v21 < (int)byte_B2FE79 ); /*0x52bdcf*/
  __asm /*0x52bdd1*/
  {
    fld ds:flt_7E1E6C
    fstp flt_88741C
  }
  byte_887418 = 1; /*0x52bde2*/
  Matrix3x4::Identity(&stru_887430); /*0x52bde9*/
  Voxel::SetProjectionAngle(0.785375); /*0x52bdf5*/
  dword_B43184 = 1; /*0x52bdfa*/
  dword_B43180 = 0; /*0x52be04*/
  Voxel::Projection_Setup(v74); /*0x52be0a*/
  v24 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x52be14*/
  if ( v24 ) /*0x52be1e*/
    dword_87F6B8 = (int)ConvertClass::Construct( /*0x52be3b*/
                          v24,
                          (int)&FileSystem_TEMPERAT_PAL,
                          (int)&FileSystem_TEMPERAT_PAL,
                          (int)g_DSurface_Primary,
                          53,
                          0);
  else
    dword_87F6B8 = 0; /*0x52be42*/
  Array::ForEach((int *)&v83[872], 3, 256, (int (*)(int))Struct::Zero3); /*0x52be5c*/
  v25 = SearchMIXFile(aAnimPal, 0); /*0x52be6d*/
  memcpy(&v83[872], v25, 0x300u); /*0x52be7b*/
  for ( m = 0; m < 256; ++m ) /*0x52be83*/
  {
    v27 = 3 * (m % 256); /*0x52be95*/
    v28 = &v83[v27 + 872]; /*0x52bea6*/
    v29 = Palette::SixBitTo16Bit((Palette *)&v83[8], 4 * v83[v27 + 872], 4 * v83[v27 + 873], 4 * v83[v27 + 874]); /*0x52bec4*/
    *(unsigned short *)v28 = *(unsigned short *)v29; /*0x52becd*/
    v28[2] = v29->ptr_2; /*0x52bed9*/
  }
  v30 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x52bee3*/
  if ( v30 ) /*0x52beed*/
    dword_87F6C0 = (int)ConvertClass::Construct( /*0x52bf0d*/
                          v30,
                          (int)&v83[872],
                          (int)&FileSystem_TEMPERAT_PAL,
                          (int)g_DSurface_Primary,
                          53,
                          0);
  else
    dword_87F6C0 = 0; /*0x52bf14*/
  v31 = SearchMIXFile(aPalettePal, 0); /*0x52bf26*/
  memcpy(&v83[872], v31, 0x300u); /*0x52bf34*/
  for ( n = 0; n < 256; ++n ) /*0x52bf3c*/
  {
    v33 = 3 * (n % 256); /*0x52bf4e*/
    v34 = &v83[v33 + 872]; /*0x52bf5f*/
    v35 = Palette::SixBitTo16Bit((Palette *)&v83[12], 4 * v83[v33 + 872], 4 * v83[v33 + 873], 4 * v83[v33 + 874]); /*0x52bf78*/
    *(unsigned short *)v34 = *(unsigned short *)v35; /*0x52bf81*/
    v34[2] = v35->ptr_2; /*0x52bf8d*/
  }
  v36 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x52bf97*/
  if ( v36 ) /*0x52bfa1*/
    dword_87F6C4 = (BuildingClass *)ConvertClass::Construct( /*0x52bfc1*/
                                      v36,
                                      (int)&v83[872],
                                      (int)&FileSystem_TEMPERAT_PAL,
                                      (int)g_DSurface_Primary,
                                      53,
                                      0);
  else
    dword_87F6C4 = 0; /*0x52bfc8*/
  v37 = SearchMIXFile(aUnitsnoPal, 0); /*0x52bfda*/
  memcpy(&v83[872], v37, 0x300u); /*0x52bfe8*/
  for ( ii = 0; ii < 256; ++ii ) /*0x52bff0*/
  {
    v39 = 3 * (ii % 256); /*0x52c002*/
    v40 = &v83[v39 + 872]; /*0x52c013*/
    v41 = Palette::SixBitTo16Bit((Palette *)&v83[16], 4 * v83[v39 + 872], 4 * v83[v39 + 873], 4 * v83[v39 + 874]); /*0x52c02c*/
    *(unsigned short *)v40 = *(unsigned short *)v41; /*0x52c035*/
    v40[2] = v41->ptr_2; /*0x52c041*/
  }
  v42 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x52c04b*/
  if ( v42 ) /*0x52c055*/
    dword_87F6B4 = (BuildingClass *)ConvertClass::Construct( /*0x52c075*/
                                      v42,
                                      (int)&v83[872],
                                      (int)&FileSystem_TEMPERAT_PAL,
                                      (int)g_DSurface_Primary,
                                      53,
                                      0);
  else
    dword_87F6B4 = 0; /*0x52c07c*/
  v43 = SearchMIXFile(aCameoPal, 0); /*0x52c08e*/
  memcpy(&v83[872], v43, 0x300u); /*0x52c09c*/
  for ( jj = 0; jj < 256; ++jj ) /*0x52c0a4*/
  {
    v45 = 3 * (jj % 256); /*0x52c0b6*/
    v46 = &v83[v45 + 872]; /*0x52c0c7*/
    v47 = Palette::SixBitTo16Bit((Palette *)&v83[24], 4 * v83[v45 + 872], 4 * v83[v45 + 873], 4 * v83[v45 + 874]); /*0x52c0e0*/
    *(unsigned short *)v46 = *(unsigned short *)v47; /*0x52c0e9*/
    v46[2] = v47->ptr_2; /*0x52c0f5*/
  }
  v48 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x52c0ff*/
  if ( v48 ) /*0x52c109*/
    dword_87F6B0 = (int)ConvertClass::Construct( /*0x52c129*/
                          v48,
                          (int)&v83[872],
                          (int)&FileSystem_TEMPERAT_PAL,
                          (int)g_DSurface_Primary,
                          53,
                          0);
  else
    dword_87F6B0 = 0; /*0x52c130*/
  v49 = SearchMIXFile(aMousepalPal, 0); /*0x52c142*/
  memcpy(&v83[872], v49, 0x300u); /*0x52c150*/
  for ( kk = 0; kk < 256; ++kk ) /*0x52c158*/
  {
    v51 = 3 * (kk % 256); /*0x52c16a*/
    GameDirectoryCD = &v83[v51 + 872]; /*0x52c17b*/
    v53 = Palette::SixBitTo16Bit((Palette *)&v83[32], 4 * v83[v51 + 872], 4 * v83[v51 + 873], 4 * v83[v51 + 874]); /*0x52c194*/
    *(unsigned short *)GameDirectoryCD = *(unsigned short *)v53; /*0x52c19d*/
    GameDirectoryCD[2] = v53->ptr_2; /*0x52c1a9*/
  }
  v54 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x52c1b3*/
  if ( v54 ) /*0x52c1bd*/
    dword_87F6C8 = (int)ConvertClass::Construct( /*0x52c1dd*/
                          v54,
                          (int)&v83[872],
                          (int)&FileSystem_TEMPERAT_PAL,
                          (int)g_DSurface_Primary,
                          1,
                          0);
  else
    dword_87F6C8 = 0; /*0x52c1e4*/
  dword_87F6BC = (int)dword_87F6B4; /*0x52c1fb*/
  CCFileClass::Construct((CCFileClass *)&v83[764], aGrfxtxtPal); /*0x52c200*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v83[764], 0) ) /*0x52c20d*/
  {
    *(unsigned int *)&stru_A8E960.waypoints[2046] = CCFileClass::ReadEntireFile((CCFileClass *)&v83[764]); /*0x52c229*/
    CCFileClass::Reset((CCFileClass *)&v83[764]); /*0x52c22e*/
    for ( kk = 0; kk < 256; ++kk ) /*0x52c233*/
    {
      GameDirectoryCD = (unsigned char *)(*(unsigned int *)&stru_A8E960.waypoints[2046] + 2 * (kk % 256) + kk % 256); /*0x52c254*/
      v55 = Palette::SixBitTo16Bit((Palette *)v83, 4 * *GameDirectoryCD, 4 * GameDirectoryCD[1], 4 * GameDirectoryCD[2]); /*0x52c26b*/
      *(unsigned short *)GameDirectoryCD = *(unsigned short *)v55; /*0x52c274*/
      GameDirectoryCD[2] = v55->ptr_2; /*0x52c280*/
    }
  }
  if ( *(unsigned int *)&stru_A8E960.waypoints[2046] ) /*0x52c28b*/
  {
    v56 = (ConvertClass *)__2_YAPAXI_Z(0x188u); /*0x52c292*/
    if ( v56 ) /*0x52c29c*/
      *(unsigned int *)&stru_A8E960.waypoints[2054] = ConvertClass::Construct( /*0x52c2bb*/
                                                  v56,
                                                  *(int *)&stru_A8E960.waypoints[2046],
                                                  (int)&FileSystem_TEMPERAT_PAL,
                                                  (int)g_DSurface_Primary,
                                                  1,
                                                  0);
    else
      *(unsigned int *)&stru_A8E960.waypoints[2054] = 0; /*0x52c2c2*/
  }
  CCFileClass::Construct((CCFileClass *)&v83[656], aGrfxtxtShp); /*0x52c2d4*/
  if ( (unsigned __int8)CCFileClass::Open((CCFileClass *)&v83[656], 0) ) /*0x52c2e1*/
  {
    *(unsigned int *)&stru_A8E960.waypoints[2050] = CCFileClass::ReadEntireFile((CCFileClass *)&v83[656]); /*0x52c2fd*/
    CCFileClass::Reset((CCFileClass *)&v83[656]); /*0x52c302*/
  }
  LoadExpansionMixFiles(v75); /*0x52c307*/
  CCFileClass::Destruct((CCFileClass *)&v83[656]); /*0x52c313*/
  CCFileClass::Destruct((CCFileClass *)&v83[764]); /*0x52c31f*/
  CCFileClass::Destruct(Buffer); /*0x52c32b*/
  Debug::Log_0(); /*0x52c335*/
  Debug::Log(); /*0x52c33f*/
  dword_B0BCF0 = (int)LoadFileSHP(g_Str_File_MOUSE_SHA, (bool *)&byte_B0BCF4); /*0x52c358*/
  if ( dword_B0BCF0 ) /*0x52c35d*/
  {
    (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x52c367*/
    *(unsigned int *)v83 = 0; /*0x52c36e*/
    *(unsigned int *)&v83[4] = 0; /*0x52c377*/
    (*(void (**)(MouseClass *, unsigned char *, int, unsigned int))(dword_887640->HandleClick_ph + 4))( /*0x52c38a*/
      dword_887640,
      v83,
      dword_B0BCF0,
      0);
  }
  Mission::SetAndCall((MouseClass *)&dword_87F7E8, 0, 0); /*0x52c394*/
  Event::Dispatch(); /*0x52c399*/
  Debug::Log(); /*0x52c3a3*/
  if ( !CmdLine_NoCD ) /*0x52c3b5*/
  {
    Debug::Log(); /*0x52c3c0*/
    kk = (int)&g_ptr_7E4C30; /*0x52c3c8*/
    *(unsigned int *)&v83[60] = &g_ptr_7E4C30; /*0x52c3d1*/
    if ( !(unsigned __int8)g_ptr_7E4C30(-1) ) /*0x52c3d6*/
    {
LABEL_68:
      Debug::Log(); /*0x52c3e0*/
      Debug::Log(); /*0x52c3f2*/
      return 1; /*0x52c409*/
    }
    while ( 1 ) /*0x52c40f*/
    {
      Source[0] = 0; /*0x52c40f*/
      if ( dword_A8E950 > 0 ) /*0x52c419*/
      {
        v57 = &dword_A8E8E8; /*0x52c41f*/
        while ( 1 ) /*0x52c438*/
        {
          sprintf(Buffer[0].__tail_0, "%c:\\", v57->ptr_0 + 65); /*0x52c438*/
          strcat(Source, Buffer[0].__tail_0); /*0x52c46a*/
          ++v3; /*0x52c476*/
          v57 = (ObjectClass *)((char *)&v57->ptr_4); /*0x52c477*/
          if ( v3 >= dword_A8E950 ) /*0x52c47e*/
            break; /*0x52c47e*/
          strcat(Source, asc_81C8FC); /*0x52c4a8*/
        }
        kk = (int)&g_ptr_7E4C30; /*0x52c4b9*/
        v3 = 0; /*0x52c4be*/
      }
      GameDirectoryCD = (unsigned char *)Game::FindGameDirectoryCD(Source); /*0x52c4cc*/
      if ( GameDirectoryCD == 1 ) /*0x52c4cf*/
        break; /*0x52c4cf*/
      if ( GameDirectoryCD == 2 ) /*0x52c4d2*/
        goto LABEL_79; /*0x52c4d2*/
      *(unsigned int *)&v83[44] = &g_ptr_7E4C30; /*0x52c4de*/
      if ( !(unsigned __int8)g_ptr_7E4C30(dword_81C1D0) ) /*0x52c4ea*/
        goto LABEL_68; /*0x52c4ea*/
LABEL_80:
      if ( !GameDirectoryCD ) /*0x52c582*/
      {
        v59 = -1; /*0x52c588*/
        goto LABEL_82; /*0x52c588*/
      }
    }
    *(unsigned int *)&v83[52] = &g_ptr_7E4C30; /*0x52c4fb*/
    if ( !(unsigned __int8)g_ptr_7E4C30(dword_81C1D0) ) /*0x52c50c*/
      goto LABEL_68; /*0x52c50c*/
LABEL_79:
    FadePalette(&FileSystem_TEMPERAT_PAL, 0, 0); /*0x52c512*/
    *(unsigned int *)v83 = asc_82083C; /*0x52c532*/
    StringCSF = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_Init_CPP, 4276); /*0x52c546*/
    v71 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Init_CPP, 4276); /*0x52c55d*/
    v58 = (int *)GetStringCSF(aTxtCdDialog1, 0, g_Str_File_Init_CPP, 4276); /*0x52c568*/
    if ( Dialog::ShowMessageBox(v58, v71, StringCSF, 0, 0, (int)v76) == 1 ) /*0x52c57a*/
      goto LABEL_68; /*0x52c57a*/
    goto LABEL_80; /*0x52c57a*/
  }
  Debug::Log(); /*0x52c5c4*/
  v59 = -2; /*0x52c5cc*/
LABEL_82:
  SetSoundWarning(v59); /*0x52c58a*/
  Debug::Log(); /*0x52c594*/
  if ( !MixFile::LoadAll(v60) ) /*0x52c59c*/
  {
    Debug::Log_0(); /*0x52c5aa*/
    return -1; /*0x52c5be*/
  }
  Debug::Log_0(); /*0x52c5d8*/
  Movie::Play(-1, -1, kk, aEaWwlogo, 1, 1, 1, 0); /*0x52c5ee*/
  ShowLoadingScreen(v76, kk, (int)GameDirectoryCD); /*0x52c5f3*/
  Debug::Log(); /*0x52c5fd*/
  Credits::Screen(); /*0x52c605*/
  Debug::Log(); /*0x52c60f*/
  Debug::Log(); /*0x52c619*/
  Debug::Log(); /*0x52c623*/
  GameSettings::Read((GameSettings *)&stru_A8E960.altNextScenario[252]); /*0x52c630*/
  Debug::Log(); /*0x52c63a*/
  AnimSystem::Init(); /*0x52c642*/
  ResetAnimSystem(0); /*0x52c649*/
  Debug::Log(); /*0x52c653*/
  off_822724 = aGrey; /*0x52c662*/
  Debug::Log(); /*0x52c668*/
  if ( g_TacticalClass_Instance ) /*0x52c678*/
    (*(void (**)(LPPERSISTSTREAM, int))(*(unsigned int *)g_TacticalClass_Instance + 32))( /*0x52c67e*/
      g_TacticalClass_Instance,
      1);
  v61 = (Tactical *)__2_YAPAXI_Z(0xE18u); /*0x52c686*/
  if ( !v61 ) /*0x52c690*/
  {
    g_TacticalClass_Instance = 0; /*0x52c6bc*/
    goto LABEL_89; /*0x52c6c2*/
  }
  g_TacticalClass_Instance = (LPPERSISTSTREAM)TacticalMap::Construct(v61); /*0x52c69b*/
  if ( !g_TacticalClass_Instance ) /*0x52c6a0*/
  {
LABEL_89:
    Debug::Log(); /*0x52c6a2*/
    return -1; /*0x52c6bb*/
  }
  g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x52c6ce*/
  Debug::Log(); /*0x52c6d3*/
  CCFileClass::Construct((CCFileClass *)&v83[68], aSoundmdIni); /*0x52c6e4*/
  if ( !(unsigned __int8)CCFileClass::Open((CCFileClass *)&v83[68], 0) ) /*0x52c6ee*/
  {
    Debug::Log(); /*0x52c6fc*/
LABEL_93:
    *(unsigned int *)&v83[68] = &g_ptr_7E16B0; /*0x52c704*/
LABEL_94:
    *(unsigned int *)&v83[168] = 0; /*0x52c70c*/
    Vector::Clear((int)&v83[156]); /*0x52c71a*/
    BufferIOFileClass::Destruct((BufferIOFileClass *)&v83[68]); /*0x52c723*/
    return -1; /*0x52c734*/
  }
  INIClass::INIClass((INIClass *)&v83[284]); /*0x52c73c*/
  v83[348] = 0; /*0x52c754*/
  *(unsigned int *)&v83[284] = &CCINIClass_Vtable; /*0x52c75c*/
  if ( !CCINIClass::Load((CCINIClass *)&v83[284], (int)&v83[68], 0, 0) ) /*0x52c763*/
  {
    Debug::Log(); /*0x52c771*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v83[284]); /*0x52c780*/
    goto LABEL_93; /*0x52c785*/
  }
  Audio::LoadSoundINI(v77); /*0x52c78a*/
  Audio::InitFromINI(v78, a1, a2); /*0x52c796*/
  Debug::Log(); /*0x52c7a0*/
  CCFileClass::Construct((CCFileClass *)&v83[176], aEvamdIni); /*0x52c7b4*/
  if ( !(unsigned __int8)CCFileClass::Open((CCFileClass *)&v83[176], 0) ) /*0x52c7c1*/
  {
    Debug::Log(); /*0x52c7cf*/
    *(unsigned int *)&v83[176] = &g_ptr_7E16B0; /*0x52c7e3*/
    *(unsigned int *)&v83[276] = 0; /*0x52c7ea*/
    Vector::Clear((int)&v83[264]); /*0x52c7f1*/
    BufferIOFileClass::Destruct((BufferIOFileClass *)&v83[176]); /*0x52c7fd*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v83[284]); /*0x52c809*/
    *(unsigned int *)&v83[68] = &g_ptr_7E16B0; /*0x52c80e*/
    goto LABEL_94; /*0x52c812*/
  }
  INIClass::INIClass((INIClass *)&v83[372]); /*0x52c81e*/
  v83[436] = 0; /*0x52c834*/
  *(unsigned int *)&v83[372] = &CCINIClass_Vtable; /*0x52c83c*/
  if ( !CCINIClass::Load((CCINIClass *)&v83[372], (int)&v83[176], 0, 0) ) /*0x52c843*/
  {
    Debug::Log(); /*0x52c851*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v83[372]); /*0x52c860*/
    *(unsigned int *)&v83[176] = &g_ptr_7E16B0; /*0x52c86c*/
    *(unsigned int *)&v83[276] = 0; /*0x52c877*/
    Vector::Clear((int)&v83[264]); /*0x52c87e*/
    BufferIOFileClass::Destruct((BufferIOFileClass *)&v83[176]); /*0x52c88a*/
LABEL_109:
    HashTable::DestroyHashTableINIClass((INIClass *)&v83[284]); /*0x52c9a2*/
    CCFileClass::Destruct((CCFileClass *)&v83[68]); /*0x52c9b2*/
    return -1; /*0x52c9c3*/
  }
  LoadINIEVA(v62); /*0x52c894*/
  InitFromINIEVA((ObjectClass *)&v83[372]); /*0x52c8a0*/
  Debug::Log(); /*0x52c8aa*/
  CCFileClass::Construct((CCFileClass *)&v83[548], aThememdIni); /*0x52c8be*/
  if ( !(unsigned __int8)CCFileClass::Open((CCFileClass *)&v83[548], 0) ) /*0x52c8cb*/
  {
    Debug::Log(); /*0x52c8d9*/
LABEL_108:
    CCFileClass::Destruct((CCFileClass *)&v83[548]); /*0x52c97e*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v83[372]); /*0x52c991*/
    CCFileClass::Destruct((CCFileClass *)&v83[176]); /*0x52c99d*/
    goto LABEL_109; /*0x52c99d*/
  }
  CCINIClass::CCINIClass((CCINIClass *)&v83[460]); /*0x52c8ed*/
  if ( !CCINIClass::Load((CCINIClass *)&v83[460], (int)&v83[548], 0, 0) ) /*0x52c903*/
    goto LABEL_106; /*0x52c903*/
  ThemeManager::Cleanup((ThemeManager *)&stru_A83CD9.attachedTag + 3); /*0x52c918*/
  ThemeClass::InitializeThemes((int)&stru_A83CD9.attachedTag + 3, &v83[460]); /*0x52c92a*/
  Audio::LoadWAVFiles((Audio *)((char *)&stru_A83CD9.attachedTag + 3)); /*0x52c934*/
  Debug::Log(); /*0x52c93e*/
  if ( !InitBulkData() ) /*0x52c94d*/
  {
LABEL_107:
    HashTable::DestroyHashTableINIClass((INIClass *)&v83[460]); /*0x52c972*/
    goto LABEL_108; /*0x52c979*/
  }
  Debug::Log(); /*0x52c954*/
  if ( !InitRules(v79) ) /*0x52c95c*/
  {
LABEL_106:
    Debug::Log(); /*0x52c96a*/
    goto LABEL_107; /*0x52c96a*/
  }
  RulesClass::LoadAnimTypes(dword_8871E0); /*0x52c9d1*/
  for ( mm = 0; mm < dword_8B4160; ++mm ) /*0x52c9df*/
    (*(void (**)(unsigned int, INIClass *))(**((unsigned int **)dword_8B4154 + mm) + 100))( /*0x52c9f0*/
      *((unsigned int *)dword_8B4154 + mm),
      &dword_887180);
  RulesClass::LoadBuildingTypes(dword_8871E0); /*0x52ca09*/
  for ( nn = 0; nn < dword_A83C78; ++nn ) /*0x52ca17*/
    (*(void (**)(unsigned int, unsigned __int8 ***))(**((unsigned int **)dword_A83C6C + nn) + 100))( /*0x52ca2a*/
      *((unsigned int *)dword_A83C6C + nn),
      dword_887048);
  (v65) = ((v65) & 0xFFFFFFFF00000000ull) | ((Audio::Callback()) & 0xFFFFFFFFull); /*0x52ca37*/
  if ( v65 < *(unsigned long long *)&stru_A8E960.waypoints[2038] ) /*0x52ca4c*/
  {
    do /*0x52ca63*/
      (v66) = ((v66) & 0xFFFFFFFF00000000ull) | ((Audio::Callback()) & 0xFFFFFFFFull); /*0x52ca4e*/
    while ( v66 < *(unsigned long long *)&stru_A8E960.waypoints[2038] ); /*0x52ca63*/
  }
  PlayIntroSequence(0, -1, (int)aGrey); /*0x52ca65*/
  v67 = *&dword_8871E0->u32_14D0; /*0x52ca70*/
  off_822724 = aGrey; /*0x52ca76*/
  dword_A8B548 = v67; /*0x52ca7c*/
  dword_A8D57C = 0; /*0x52ca82*/
  dword_A8D580 = 0; /*0x52ca88*/
  dword_A8D588 = 0; /*0x52ca8e*/
  v68 = &dword_A8D228; /*0x52ca94*/
  do /*0x52cac1*/
  {
    *((unsigned short *)v68 - 22) = 0; /*0x52ca99*/
    *v68 = 0; /*0x52ca9d*/
    v69 = v68 + 1; /*0x52ca9f*/
    v70 = 4; /*0x52caa2*/
    do /*0x52cab6*/
    {
      v69[4] = -1; /*0x52caa7*/
      *v69 = -1; /*0x52caaa*/
      v69[8] = -1; /*0x52caac*/
      v69[12] = -1; /*0x52caaf*/
      ++v69; /*0x52cab2*/
      --v70; /*0x52cab5*/
    }
    while ( v70 ); /*0x52cab6*/
    v68 += 28; /*0x52cab8*/
  }
  while ( (int)v68 < (int)dword_A8D5A8 ); /*0x52cac1*/
  *(unsigned int *)byte_A8D108 = 16843009; /*0x52cac8*/
  dword_A8D10C = 16843009; /*0x52cacd*/
  InitRandomSeed(v80); /*0x52cad2*/
  Debug::Log(); /*0x52cadc*/
  InitCommands(v81); /*0x52cae4*/
  Debug::Log(); /*0x52caee*/
  CompleteGameInit(v82); /*0x52caf6*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v83[460]); /*0x52cb02*/
  CCFileClass::Destruct((CCFileClass *)&v83[548]); /*0x52cb0e*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v83[372]); /*0x52cb1a*/
  CCFileClass::Destruct((CCFileClass *)&v83[176]); /*0x52cb26*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v83[284]); /*0x52cb32*/
  CCFileClass::Destruct((CCFileClass *)&v83[68]); /*0x52cb3b*/
  return 0; /*0x52baab*/

}
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
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EB82C) */  /*0x52cd8e*/
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
    v3 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cdf3*/
    v4 = (CCINIClass *)v3; /*0x52cdf8*/
    if ( v3 ) /*0x52cdff*/
    {
      INIClass::INIClass(v3); /*0x52ce03*/
      v4->ownsFile = 0; /*0x52ce08*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x52ce0b*/
    }
    else
    {
      v4 = 0; /*0x52ce13*/
    }
    CCINIClass::Load(v4, (int)&v19, 0, 0); /*0x52ce1e*/
    if ( _strcmpi(cAlternateFileName, aRulesmdIni) ) /*0x52ce29*/
    {
      if ( *(int *)dwInitParam.__tail_10 < dwInitParam.m_8 /*0x52cecb*/
        || (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8)
        && v18 > 0
        && (*(unsigned __int8 (**)(_VectorClass_PAVCCINIClass *, int, unsigned int))(*(unsigned int *)dwInitParam.__pad_0
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
    if ( (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52ce6c*/
      && v18 > 0
      && (*(unsigned __int8 (**)(_VectorClass_PAVCCINIClass *, int, unsigned int))(*(unsigned int *)dwInitParam.__pad_0
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
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52cee4*/
    v21 = 0; /*0x52cef3*/
    Vector::Clear((int)v20); /*0x52cefa*/
    *(unsigned int *)v19.__pad_0 = &off_7E1668; /*0x52cf03*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cf0b*/
  }
  while ( FindNextFileA(FirstFileA, &FindFileData) ); /*0x52cf19*/
  FindClose(FirstFileA); /*0x52cf28*/
  if ( !v16 ) /*0x52cf32*/
  {
LABEL_27:
    CCFileClass::Construct((CCFileClass *)&v19, aRulesmdIni); /*0x52cf38*/
    v7 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x52cf48*/
    v8 = (CCINIClass *)v7; /*0x52cf4d*/
    if ( v7 ) /*0x52cf54*/
    {
      INIClass::INIClass(v7); /*0x52cf58*/
      v8->ownsFile = 0; /*0x52cf5d*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x52cf60*/
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
    else if ( (BYTE1(dwInitParam.m_C) || !dwInitParam.m_8) /*0x52cfa2*/
           && v18 > 0
           && (*(unsigned __int8 (**)(_VectorClass_PAVCCINIClass *, int, unsigned int))(*(unsigned int *)dwInitParam.__pad_0
                                                                                           + 8))(
                &dwInitParam,
                v18 + dwInitParam.m_8,
                0) )
    {
      v9 = *(unsigned int *)dwInitParam.__tail_10; /*0x52cfa9*/
      goto LABEL_36; /*0x52cfa9*/
    }
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52cfe1*/
    v21 = 0; /*0x52cfe5*/
    Vector::Clear((int)v20); /*0x52cfec*/
    *(unsigned int *)v19.__pad_0 = &off_7E1668; /*0x52cffa*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v19); /*0x52cffe*/
  }
  if ( *(int *)dwInitParam.__tail_10 <= 0 ) /*0x52d013*/
  {
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EB80C) */  /*0x52d019*/
    VectorClass_ptr_CCINIClass::ddtor(&dwInitParam); /*0x52d021*/
    return 0; /*0x52d032*/
  }
  CCFileClass::Construct(&v22, aArtmdIni); /*0x52d03f*/
  if ( !CCINIClass::Load((CCINIClass *)&DSurface_ViewBounds.__pad_FC[228], (int)&v22, 0, 0) ) /*0x52d053*/
  {
    Debug::Log(); /*0x52d061*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52d070*/
    v24 = 0; /*0x52d077*/
    Vector::Clear((int)v23); /*0x52d07e*/
    *(unsigned int *)v22.__tail_0 = &off_7E1668; /*0x52d08a*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d091*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EB80C) */  /*0x52d09a*/
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
  if ( (unsigned __int8)CCFileClass::Open(&v25, 0) == 1 ) /*0x52d245*/
  {
    INIClass::INIClass((INIClass *)&v19); /*0x52d24f*/
    v19.ownsFile = 0; /*0x52d25b*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x52d267*/
    if ( CCINIClass::Load(&v19, (int)&v25, 1, 0) > 1 ) /*0x52d277*/
    {
      HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x52d281*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52d28d*/
      v27 = 0; /*0x52d294*/
      Vector::Clear((int)v26); /*0x52d29b*/
      *(unsigned int *)v25.__tail_0 = &off_7E1668; /*0x52d2a7*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d2ae*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52d2ba*/
      v24 = 0; /*0x52d2c1*/
      Vector::Clear((int)v23); /*0x52d2c8*/
      *(unsigned int *)v22.__tail_0 = &off_7E1668; /*0x52d2d4*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d2db*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EB80C) */  /*0x52d2e4*/
      if ( *(unsigned int *)&dwInitParam.m_1[3] ) /*0x52d2ee*/
      {
        if ( BYTE1(dwInitParam.m_C) ) /*0x52d2f4*/
          __3_YAXPAX_Z(*(void **)&dwInitParam.m_1[3]); /*0x52d2f7*/
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
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52d384*/
  v29[3] = 0; /*0x52d38b*/
  Vector::Clear((int)v29); /*0x52d392*/
  *(unsigned int *)v28.__tail_0 = &off_7E1668; /*0x52d39e*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v28); /*0x52d3a5*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52d3b1*/
  v27 = 0; /*0x52d3b8*/
  Vector::Clear((int)v26); /*0x52d3bf*/
  *(unsigned int *)v25.__tail_0 = &off_7E1668; /*0x52d3cb*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v25); /*0x52d3d2*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E16B0) */  /*0x52d3de*/
  v24 = 0; /*0x52d3e5*/
  Vector::Clear((int)v23); /*0x52d3ec*/
  *(unsigned int *)v22.__tail_0 = &off_7E1668; /*0x52d3f8*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v22); /*0x52d3ff*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EB80C) */  /*0x52d408*/
  if ( *(unsigned int *)&dwInitParam.m_1[3] && BYTE1(dwInitParam.m_C) ) /*0x52d418*/
    __3_YAXPAX_Z(*(void **)&dwInitParam.m_1[3]); /*0x52d41b*/
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

  double v1; // st7
  int v2; // eax
  int *p_vfptr3; // edx
  int *v4; // eax
  int ptr_C; // ecx
  int abstractFlags; // edx
  int v7; // edx
  int j; // edi
  int i; // eax
  int v10; // edx
  LONG v11; // esi
  int v12; // eax
  WinsockInterface *v13; // ecx
  int v14; // eax
  int v15; // eax
  int *StringCSF; // esi
  wchar_t *v17; // ebp
  int v18; // eax
  int v19; // eax
  LONG v20; // eax
  HWND Dialog; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  LoadOptions *v25; // eax
  char v26; // bl
  _UNKNOWN **v27; // eax
  char v28; // al
  _UNKNOWN **v29; // eax
  char v30; // bl
  int v31; // eax
  int v32; // eax
  _UNKNOWN **v33; // eax
  IPXInterfaceClass *v34; // eax
  WinsockInterface *v35; // eax
  wchar_t *v36; // eax
  int v37; // eax
  int v38; // esi
  int Ticks; // ecx
  int v40; // esi
  int v41; // edi
  int v42; // esi
  char result; // al
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  TechnoClass *v50; // [esp+6h] [ebp-120h]
  int v51; // [esp+6h] [ebp-120h]
  int v52; // [esp+Ah] [ebp-11Ch]
  int *v53; // [esp+Eh] [ebp-118h]
  char v54; // [esp+18h] [ebp-10Eh]
  char v55; // [esp+19h] [ebp-10Dh]
  LONG dwNewLong; // [esp+1Ah] [ebp-10Ch] BYREF
  int v57; // [esp+1Eh] [ebp-108h]
  const wchar_t *v58; // [esp+22h] [ebp-104h]
  CD v59; // [esp+26h] [ebp-100h]
  int v60; // [esp+2Ah] [ebp-FCh]
  LoadOptions v61; // [esp+32h] [ebp-F4h] BYREF
  LONG v62[23]; // [esp+6Ah] [ebp-BCh] BYREF
  LONG v63[24]; // [esp+C6h] [ebp-60h] BYREF

  v2 = StringList::Find((StringList *)((char *)&stru_A83CD9.attachedTag + 3), g_INI_Key_INTRO); /*0x52d9b4*/
  ThemeClass::Play((ThemeClass *)((char *)&stru_A83CD9.attachedTag + 3), v2); /*0x52d9bf*/
LABEL_2:
  p_vfptr3 = &dword_A8B230[127].ptr_C; /*0x52d9c9*/
  stru_A8E960.nextScenario[64] = 1; /*0x52d9d7*/
  *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) = 0; /*0x52d9de*/
  dword_8B41F8 = 0; /*0x52d9e4*/
  dword_8B41FC = 0; /*0x52d9ea*/
  dword_8B4200 = 0; /*0x52d9f0*/
  dword_A802C8 = 0; /*0x52d9f6*/
  dword_A802CC = 0; /*0x52d9fc*/
  dword_A802D0 = 0; /*0x52da02*/
  *(unsigned int *)&stru_A8E960.random[528] = 0; /*0x52da08*/
  dword_A8B230[127].ptr_C = 0; /*0x52da0e*/
  v55 = 0; /*0x52da16*/
  p_vfptr3->Items = v60; /*0x52da1b*/
  v54 = 1; /*0x52da1e*/
  p_vfptr3->Capacity = 0; /*0x52da23*/
  v4 = &dword_A8B230[127].ptr_C; /*0x52da2c*/
  ptr_C = dword_A8B230[127].ptr_C; /*0x52da32*/
  if ( ptr_C != -1 ) /*0x52da3a*/
  {
    abstractFlags = dword_A8B230[127].abstractFlags; /*0x52da42*/
    if ( *(unsigned int *)&stru_A8E960.random[528] - ptr_C >= abstractFlags ) /*0x52da49*/
      v7 = 0; /*0x52da4f*/
    else
      v7 = abstractFlags - (*(unsigned int *)&stru_A8E960.random[528] - ptr_C); /*0x52da4b*/
    dword_A8B230[127].abstractFlags = v7; /*0x52da51*/
    *v4 = -1; /*0x52da54*/
  }
  j = 1; /*0x52da5c*/
  dword_A8B230[43].ptr_4 = 1; /*0x52da67*/
  dword_A8B230[43].ptr_0 = 1; /*0x52da72*/
  LOBYTE(stru_A83CD9.estimatedHealth) = 0; /*0x52da78*/
  stru_A8E960.random[348] = 0; /*0x52da7f*/
  byte_8B41C0 = 0; /*0x52da86*/
  HIBYTE(stru_A83CD9.health) = 0; /*0x52da8d*/
  dword_A8B538[0] = 0; /*0x52da94*/
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x52da9a*/
  dword_88098C = 0; /*0x52da9f*/
  dword_880990 = 0; /*0x52daa5*/
  dword_880994 = -1; /*0x52daab*/
  *(unsigned int *)dword_A8B560 = 0; /*0x52dab1*/
  dword_A8B564 = 0; /*0x52dab7*/
  dword_A8B558 = (wchar_t *)30; /*0x52dabd*/
  dword_A8B1F8 = 0; /*0x52dac7*/
  dword_A8B1DC = 0; /*0x52dacd*/
  for ( i = 0; i < 112; i += 28 ) /*0x52dad3*/
  {
    v10 = i + dword_A8D588; /*0x52dadb*/
    dword_A8D23C[v10] = -1; /*0x52dae4*/
  }
  Mission::SetAndCall((MouseClass *)&dword_87F7E8, 0, 0); /*0x52daf4*/
  if ( *(unsigned int *)&stru_887338.__pad_1C[20] ) /*0x52db01*/
    Tooltip::Enable(*(Tooltip **)&stru_887338.__pad_1C[20], 0); /*0x52db04*/
  if ( *(unsigned int *)&dword_A8B238 ) /*0x52db10*/
    v11 = (*(unsigned int *)&dword_A8B238 == 4) + 16; /*0x52db24*/
  else
    v11 = 18; /*0x52db12*/
  if ( stru_A8E960.random[503] ) /*0x52db2d*/
    goto LABEL_145; /*0x52db2d*/
  if ( (dword_A8D5F8 & 2) != 0 && (unsigned __int8)CCFileClass::Open(&dword_A8D58C, 0) ) /*0x52db46*/
  {
    if ( !FileClass::Load(&dword_A8D58C, (const CHAR *)1) ) /*0x52db60*/
    {
      v12 = dword_A8D5F8; /*0x52dc34*/
      (v12) = ((v12) & ~0xFF) | ((dword_A8D5F8 & 0xFD) & 0xFF); /*0x52dc39*/
      dword_A8D5F8 = v12; /*0x52dc3b*/
      goto LABEL_20; /*0x52dc3b*/
    }
LABEL_18:
    (*(void (**)(CCFileClass *, LPARAM *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 36))( /*0x52db66*/
      &dword_A8D58C,
      &g_RulesInitConfig,
      4);
    (*(void (**)(CCFileClass *, char *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 36))( /*0x52db8c*/
      &dword_A8D58C,
      &stru_A8E960.random[544],
      4);
    (*(void (**)(CCFileClass *, int *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 36))( /*0x52dba9*/
      &dword_A8D58C,
      &dword_A8B230[130].ptr_C,
      4);
    (*(void (**)(CCFileClass *, int *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 36))( /*0x52dbc7*/
      &dword_A8D58C,
      &dword_A8B230[130].abstractFlags,
      260);
    (*(void (**)(CCFileClass *, char *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 36))( /*0x52dbdb*/
      &dword_A8D58C,
      &stru_A8E960.random[284],
      4);
    (*(void (**)(CCFileClass *, ScenarioClass *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 36))( /*0x52dbf0*/
      &dword_A8D58C,
      &stru_A8E960,
      4);
    (*(void (**)(CCFileClass *, char *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 36))( /*0x52dc07*/
      &dword_A8D58C,
      &stru_A8E960.altNextScenario[252],
      184);
    Debug::Log(); /*0x52dc1c*/
    Theme::Stop((Theme *)&stru_A83CD9.attachedTag + 3, 1); /*0x52dc2a*/
    goto LABEL_145; /*0x52dc2f*/
  }
LABEL_20:
  while ( 2 ) /*0x52dc40*/
  {
    v13 = dword_887628; /*0x52dc40*/
    if ( dword_887628 ) /*0x52dc48*/
    {
      if ( stru_A8D804.__pad_3D[863] ) /*0x52dc51*/
      {
        if ( *(unsigned int *)&stru_A8E960.nextScenario[172] ) /*0x52dc59*/
          NetworkEventQueueClass::WaitForResponse((NetworkEventQueueClass *)&dword_B052D0); /*0x52dc60*/
        v13 = dword_887628; /*0x52dc65*/
        stru_A8D804.__pad_3D[863] = 0; /*0x52dc6b*/
      }
      if ( v13 ) /*0x52dc74*/
        (**(void (***)(WinsockInterface *, int))v13->__pad_0)(v13, 1); /*0x52dc7a*/
      dword_887628 = 0; /*0x52dc7c*/
      Network::Init(); /*0x52dc82*/
    }
    if ( v11 == 18 ) /*0x52dc8a*/
    {
      if ( stru_A8E960.random[489] ) /*0x52dc93*/
        goto LABEL_32; /*0x52dc93*/
      v11 = MainMenu::Screen(0, -1); /*0x52dc9f*/
    }
    if ( stru_A8E960.random[489] ) /*0x52dca8*/
    {
LABEL_32:
      v11 = 8; /*0x52dcaa*/
      goto LABEL_34; /*0x52dcaf*/
    }
    if ( v11 == 7 ) /*0x52dcb4*/
      goto LABEL_35; /*0x52dcb4*/
LABEL_34:
    v14 = StringList::Find((StringList *)((char *)&stru_A83CD9.attachedTag + 3), g_INI_Key_INTRO); /*0x52dcb6*/
    ThemeClass::Play((ThemeClass *)((char *)&stru_A83CD9.attachedTag + 3), v14); /*0x52dccb*/
LABEL_35:
    Event::Dispatch(); /*0x52dcd0*/
    switch ( v11 ) /*0x52dce1*/
    {
      case -1: /*0x52dce1*/
        if ( (dword_A8D5F8 & 4) == 0 || !(unsigned __int8)CCFileClass::Open(&dword_A8D58C, 0) ) /*0x52dcf7*/
          goto LABEL_40; /*0x52dcfe*/
        j = dword_A8D5F8 | 2; /*0x52dd08*/
        dword_A8D5F8 |= 2u; /*0x52dd10*/
        if ( FileClass::Load(&dword_A8D58C, (const CHAR *)1) ) /*0x52dd16*/
          goto LABEL_18; /*0x52dd1d*/
        v15 = dword_A8D5F8; /*0x52dd23*/
        (v15) = ((v15) & ~0xFF) | ((dword_A8D5F8 & 0xFD) & 0xFF); /*0x52dd28*/
        dword_A8D5F8 = v15; /*0x52dd2a*/
LABEL_40:
        v11 = 18; /*0x52dd2f*/
        goto LABEL_134; /*0x52dd34*/
      case 1: /*0x52dce1*/
        g_MenuStateFlags = 0; /*0x52dd45*/
        v11 = Campaign::Screen(1); /*0x52dd50*/
        goto LABEL_134; /*0x52dd52*/
      case 2: /*0x52dce1*/
        v11 = 16; /*0x52dd5c*/
        *(unsigned int *)&dword_A8B238 = 4; /*0x52dd61*/
        Multiplayer::Screen((Multiplayer *)2); /*0x52dd6b*/
        goto LABEL_134; /*0x52dd70*/
      case 3: /*0x52dce1*/
        v11 = 16; /*0x52dd7a*/
        *(unsigned int *)&dword_A8B238 = 3; /*0x52dd7f*/
        Multiplayer::Screen((Multiplayer *)1); /*0x52dd89*/
        goto LABEL_134; /*0x52dd8e*/
      case 4: /*0x52dce1*/
        v11 = Campaign::Screen(1); /*0x52dda4*/
        goto LABEL_134; /*0x52dda6*/
      case 5: /*0x52dce1*/
        v11 = 18; /*0x52ddab*/
        Options::Screen_Dialog(); /*0x52ddb0*/
        goto LABEL_134; /*0x52ddb5*/
      case 6: /*0x52dce1*/
        StringCSF = (int *)GetStringCSF(aGuiExitareyous, 0, g_Str_File_Init_CPP, 2502); /*0x52dde1*/
        j = (int)GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_Init_CPP, 2503); /*0x52ddf9*/
        v17 = GetStringCSF(aGuiCancel, 0, g_Str_File_Init_CPP, 2504); /*0x52de04*/
        Screen::Capture(1, 0, 0, (int)v17); /*0x52de06*/
        v58 = asc_82083C; /*0x52de0f*/
        if ( Dialog::ShowMessageBox(StringCSF, (unsigned short *)j, v17, 0, 0, (int)v50) ) /*0x52de1c*/
        {
          Screen::Capture(1, 0, 0, (int)v17); /*0x52de3d*/
          v11 = 18; /*0x52de42*/
        }
        else
        {
          v11 = 7; /*0x52de2a*/
          ScenarioClass::SaveGameOptions((ScenarioClass *)&stru_A8E960.altNextScenario[252]); /*0x52de2f*/
        }
        goto LABEL_134; /*0x52de34*/
      case 7: /*0x52dce1*/
        Theme::Stop((Theme *)&stru_A83CD9.attachedTag + 3, 1); /*0x52e76b*/
        v40 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x52e775*/
        if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x52e77d*/
          v40 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x52e78f*/
        v41 = v40 + 3000; /*0x52e796*/
        while ( Theme::IsPlaying((Theme *)&stru_A83CD9.attachedTag + 3) ) /*0x52e79c*/
        {
          if ( !(unsigned __int8)Audio::IsPlaying() ) /*0x52e7a5*/
            break; /*0x52e7ac*/
          v42 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x52e7b3*/
          if ( *(unsigned int *)stru_887338.__pad_0 != -1 ) /*0x52e7bb*/
            v42 += Timer::GetTicks() - *(unsigned int *)stru_887338.__pad_0; /*0x52e7cd*/
          if ( v41 <= v42 ) /*0x52e7d1*/
            break; /*0x52e7d1*/
          Event::Dispatch(); /*0x52e7d3*/
        }
        Theme::Stop((Theme *)&stru_A83CD9.attachedTag + 3, 0); /*0x52e7ec*/
        if ( !g_Is16BitMode ) /*0x52e7f8*/
          FadePalette(&word_884E80, 30, 0); /*0x52e805*/
        return 0; /*0x52e816*/
      case 8: /*0x52dce1*/
        if ( &stru_8A38E0 ) /*0x52df0c*/
          Menu::Reset(&stru_8A38E0); /*0x52df0e*/
        (v57) = ((v57) & ~0xFF) | ((0) & 0xFF); /*0x52df18*/
        dwNewLong = -1; /*0x52df1f*/
        if ( *(int *)((char *)&stru_A83CD9.fallRate + 3) /*0x52df30*/
          || (Credits::Screen(), *(int *)((char *)&stru_A83CD9.fallRate + 3)) )
        {
          InitializeGameLoading(); /*0x52df39*/
          AudioController::Init((AudioController *)&stru_A8E960.waypoints[878]); /*0x52df43*/
          *(unsigned int *)&stru_A8E960.waypoints[2062] = 0; /*0x52df53*/
          *(unsigned int *)&stru_A8E960.waypoints[2066] = 0; /*0x52df59*/
          *(unsigned int *)&stru_A8E960.waypoints[2070] = 0; /*0x52df5f*/
          Dialog = (HWND)CreateDialog( /*0x52df65*/
                           0x94u,
                           (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))CampaignSelect::DlgProc,
                           0);
          j = (int)Dialog; /*0x52df6a*/
          if ( Dialog ) /*0x52df6e*/
          {
            SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x52df7c*/
            SetDialogParent((HWND)j, g_hWnd); /*0x52df8a*/
            Dialog::Show((Dialog *)j); /*0x52df91*/
            while ( !(unsigned char)v57 ) /*0x52df9c*/
            {
              if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x52dfa9*/
                break; /*0x52dfa9*/
              if ( g_ScenarioLoadEvent != -1 ) /*0x52dfb5*/
              {
                LODWORD(v22) = Audio::Callback(); /*0x52dfb7*/
                if ( *(unsigned long long *)&stru_A8E960.waypoints[2062] < v22 ) /*0x52dfd0*/
                {
                  AudioController::Stop((AudioController *)&stru_A8E960.waypoints[878]); /*0x52dfd7*/
                  PlayVocClass(g_ScenarioLoadEvent, 0x2000u, 1.0, (AudioSource *)&stru_A8E960.waypoints[878]); /*0x52dff1*/
                  g_ScenarioLoadEvent = -1; /*0x52dff6*/
                }
              }
              if ( g_LoadScreenFlag ) /*0x52e003*/
              {
                g_LoadScreenFlag = 0; /*0x52e009*/
                Screen::Capture(1, 0, 0, -1); /*0x52e010*/
                Frame::Present((int)g_DSurface_Hidden, 0, -1, j, 0, (int)v50, v52, v53); /*0x52e01e*/
              }
            }
            Dialog::Destroy((Dialog *)j); /*0x52e031*/
          }
          LODWORD(v23) = Audio::Callback(); /*0x52e036*/
          *(unsigned long long *)&stru_A8E960.waypoints[2062] = v23 + 3000; /*0x52e047*/
          while ( AudioSource::Get((AudioSource *)&stru_A8E960.waypoints[878]) ) /*0x52e052*/
          {
            LODWORD(v24) = Audio::Callback(); /*0x52e05b*/
            if ( *(unsigned long long *)&stru_A8E960.waypoints[2062] <= v24 ) /*0x52e074*/
              break; /*0x52e074*/
            Event::Dispatch(); /*0x52e076*/
          }
          CleanupEVASystem(); /*0x52e089*/
          v20 = dwNewLong; /*0x52e08e*/
        }
        else
        {
          v20 = -1; /*0x52df32*/
        }
        dword_A8B230[375].uniqueId = v20; /*0x52e098*/
        if ( dword_A8B230[375].uniqueId == -1 ) /*0x52e0a9*/
        {
          v54 = 1; /*0x52e0af*/
          v11 = 1; /*0x52e0b4*/
          continue; /*0x52e0b9*/
        }
        switch ( *(unsigned int *)&stru_A8E960.altNextScenario[256] ) /*0x52e536*/
        {
          case 0: /*0x52e536*/
            dword_A8B230[43].ptr_4 = 2; /*0x52e53d*/
            dword_A8B230[43].ptr_0 = 0; /*0x52e54d*/
            *(unsigned int *)&dword_A8B238 = 0; /*0x52e553*/
            break; /*0x52e559*/
          case 1: /*0x52e536*/
            dword_A8B230[43].ptr_4 = 2; /*0x52e55e*/
            dword_A8B230[43].ptr_0 = 1; /*0x52e56d*/
            *(unsigned int *)&dword_A8B238 = 0; /*0x52e577*/
            break; /*0x52e57d*/
          case 2: /*0x52e536*/
            dword_A8B230[43].ptr_4 = 1; /*0x52e587*/
            dword_A8B230[43].ptr_0 = 1; /*0x52e593*/
            *(unsigned int *)&dword_A8B238 = 0; /*0x52e599*/
            break; /*0x52e59f*/
          case 3: /*0x52e536*/
            dword_A8B230[43].ptr_4 = 0; /*0x52e5a1*/
            dword_A8B230[43].ptr_0 = 1; /*0x52e5ac*/
            *(unsigned int *)&dword_A8B238 = 0; /*0x52e5b6*/
            break; /*0x52e5bc*/
          case 4: /*0x52e536*/
            dword_A8B230[43].ptr_4 = 0; /*0x52e5be*/
            dword_A8B230[43].ptr_0 = 2; /*0x52e5ca*/
            goto LABEL_143; /*0x52e5ca*/
          default:
LABEL_143:
            *(unsigned int *)&dword_A8B238 = 0; /*0x52e5d4*/
            break; /*0x52e5da*/
        }
LABEL_147:
        Timer::PumpMessages((Timer *)dword_87F770); /*0x52e60e*/
        InitRandomSeed(v50); /*0x52e619*/
        PlanningNodeClass::CleanupAll(); /*0x52e61e*/
        if ( v55 || dword_A8B8B8 ) /*0x52e635*/
          goto LABEL_189; /*0x52e635*/
        Debug::Log(); /*0x52e647*/
        (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x52e657*/
        if ( v11 != 8 ) /*0x52e65d*/
        {
          if ( !g_Is16BitMode ) /*0x52e666*/
            FadePalette(&word_884E80, 15, (void (*)(void))Event::Dispatch); /*0x52e677*/
          (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x52e685*/
          Frame::Present((int)g_DSurface_Hidden, 0, -1, j, 0, (int)v50, v52, v53); /*0x52e691*/
        }
        (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x52e69e*/
        if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x52e6a8*/
        {
          v37 = *(unsigned int *)stru_887338.__pad_0; /*0x52e6aa*/
          j = (int)dword_A8E284; /*0x52e6af*/
          do /*0x52e6de*/
          {
            v38 = *(unsigned int *)&stru_887338.__pad_6[2]; /*0x52e6b4*/
            if ( v37 != -1 ) /*0x52e6bc*/
            {
              Ticks = Timer::GetTicks(); /*0x52e6c8*/
              v37 = *(unsigned int *)stru_887338.__pad_0; /*0x52e6ca*/
              v38 += Ticks - *(unsigned int *)stru_887338.__pad_0; /*0x52e6d1*/
            }
            *(unsigned int *)j = v38; /*0x52e6d3*/
            j += 4; /*0x52e6d5*/
          }
          while ( j < (int)&byte_A8E2A4 ); /*0x52e6de*/
        }
        if ( *(unsigned int *)&dword_A8B238 || stru_A8E960.random[489] || (dword_A8D5F8 & 2) != 0 ) /*0x52e6f8*/
        {
          if ( ScenarioClass::LoadScenarioAndStart((char *)&dword_A8B230[130].abstractFlags, 1, v1, -1) ) /*0x52e745*/
            goto LABEL_184; /*0x52e74c*/
          if ( stru_A8E960.random[503] ) /*0x52e759*/
            goto LABEL_183; /*0x52e759*/
          goto LABEL_2; /*0x52e759*/
        }
        if ( ScenarioClass::LoadScenarioAndStart( /*0x52e718*/
               (char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.NeedsSaveOrLink + 3) + 4 * dword_A8B230[375].uniqueId)
                      + 156),
               1,
               v1,
               dword_A8B230[375].uniqueId) )
        {
LABEL_184:
          if ( (dword_A8D5F8 & 1) != 0 ) /*0x52e87f*/
          {
            if ( FileClass::Load(&dword_A8D58C, (const CHAR *)2) ) /*0x52e88c*/
            {
              Debug::Log(); /*0x52e8a9*/
              (*(void (**)(CCFileClass *, LPARAM *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 48))( /*0x52e8c3*/
                &dword_A8D58C,
                &g_RulesInitConfig,
                4);
              (*(void (**)(CCFileClass *, char *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 48))( /*0x52e8d7*/
                &dword_A8D58C,
                &stru_A8E960.random[544],
                4);
              (*(void (**)(CCFileClass *, int *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 48))( /*0x52e8f4*/
                &dword_A8D58C,
                &dword_A8B230[130].ptr_C,
                4);
              (*(void (**)(CCFileClass *, int *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 48))( /*0x52e912*/
                &dword_A8D58C,
                &dword_A8B230[130].abstractFlags,
                260);
              (*(void (**)(CCFileClass *, char *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 48))( /*0x52e926*/
                &dword_A8D58C,
                &stru_A8E960.random[284],
                4);
              (*(void (**)(CCFileClass *, ScenarioClass *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 48))( /*0x52e93b*/
                &dword_A8D58C,
                &stru_A8E960,
                4);
              (*(void (**)(CCFileClass *, char *, int))(*(unsigned int *)dword_A8D58C.__tail_0 + 48))( /*0x52e952*/
                &dword_A8D58C,
                &stru_A8E960.altNextScenario[252],
                184);
              v44 = *(unsigned int *)stru_A8E960.nextScenario; /*0x52e955*/
              LOBYTE(v44) = stru_A8E960.nextScenario[0] & 0xFB; /*0x52e95a*/
              *(unsigned int *)stru_A8E960.nextScenario = v44; /*0x52e95c*/
              goto LABEL_189; /*0x52e961*/
            }
            v45 = dword_A8D5F8; /*0x52e963*/
            (v45) = ((v45) & ~0xFF) | ((dword_A8D5F8 & 0xFE) & 0xFF); /*0x52e968*/
            dword_A8D5F8 = v45; /*0x52e96a*/
          }
          v46 = *(unsigned int *)stru_A8E960.nextScenario; /*0x52e96f*/
          LOBYTE(v46) = stru_A8E960.nextScenario[0] & 0xFB; /*0x52e974*/
          *(unsigned int *)stru_A8E960.nextScenario = v46; /*0x52e976*/
LABEL_189:
          Debug::Log(); /*0x52e982*/
          Debug::Log(); /*0x52e9a5*/
          if ( *(unsigned int *)&dword_A8B238 && *(unsigned int *)&dword_A8B238 != 5 && (dword_A8D5F8 & 2) == 0 ) /*0x52e9ca*/
          {
            SessionClass::CreateConnections((SessionClass *)&dword_A8B238); /*0x52e9d5*/
            if ( *(unsigned int *)&dword_A8B238 == 3 ) /*0x52e9e2*/
            {
              if ( (unsigned int)(Network::GetLobbyStatus((Network *)&stru_A8E960.nextScenario[96]) + 2) >= 0xF ) /*0x52e9f4*/
                v47 = Network::GetLobbyStatus((Network *)&stru_A8E960.nextScenario[96]) + 2; /*0x52ea07*/
              else
                v47 = 15; /*0x52e9f6*/
              Network::SetConnectionParams((IPXManagerClass *)&stru_A8E960.nextScenario[96], v47, -1, 600, 1); /*0x52ea18*/
              if ( (unsigned int)(Network::GetLobbyStatus((Network *)&stru_A8E960.nextScenario[96]) + 2) >= 0x3C ) /*0x52ea2d*/
                v48 = Network::GetLobbyStatus((Network *)&stru_A8E960.nextScenario[96]) + 2; /*0x52ea40*/
              else
                v48 = 60; /*0x52ea2f*/
              TacticalClass::SetCameraPosition((IPXManagerClass *)&stru_A8E960.nextScenario[96], v48, -1, 600); /*0x52ea4f*/
            }
            else if ( *(unsigned int *)&dword_A8B238 == 4 && !dword_A8B570 ) /*0x52ea61*/
            {
              if ( (unsigned int)(Network::GetLobbyStatus((Network *)&stru_A8E960.nextScenario[96]) + 2) >= 0x3C ) /*0x52ea73*/
                v49 = Network::GetLobbyStatus((Network *)&stru_A8E960.nextScenario[96]) + 2; /*0x52ea86*/
              else
                v49 = 60; /*0x52ea75*/
              Network::SetConnectionParams((IPXManagerClass *)&stru_A8E960.nextScenario[96], v49, -1, 600, 1); /*0x52ea97*/
            }
          }
          Event::Dispatch(); /*0x52ea9c*/
          (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x52eaa9*/
          if ( !g_Is16BitMode ) /*0x52eab3*/
            FadePalette(&word_884E80, 15, (void (*)(void))Event::Dispatch); /*0x52eac4*/
          (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->ptr_0 + 24))(g_DSurface_Hidden, 0); /*0x52ead2*/
          Frame::Present((int)g_DSurface_Hidden, 0, -1, j, 0, (int)v50, v52, v53); /*0x52eade*/
          (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x52eaeb*/
          g_DSurface_Hidden_2 = (AudioStream *)g_DSurface_Hidden; /*0x52eafb*/
          Mouse::SetCursor((int)&dword_87F7E8, 19, 0); /*0x52eb00*/
          MouseClass::GetPosition((MouseClass *)&dword_87F7E8); /*0x52eb0a*/
          if ( !stru_A8E960.random[503] ) /*0x52eb16*/
            TacticalClass::BuildCommandBar((TabClass *)1, j, v51); /*0x52eb1f*/
          MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x52eb2a*/
          Event::Dispatch(); /*0x52eb2f*/
          (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x52eb3c*/
          ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x52eb46*/
          return 1; /*0x52eb4b*/
        }
        if ( !stru_A8E960.random[503] ) /*0x52e72c*/
          goto LABEL_2; /*0x52e72c*/
LABEL_183:
        ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x52e85f*/
        return 0;
      case 9: /*0x52dce1*/
        ++dword_A8E7AC; /*0x52e0be*/
        Credits::Screen(); /*0x52e0c4*/
        --dword_A8E7AC; /*0x52e0d0*/
        v25 = (LoadOptions *)LoadOptions::LoadOptions(&v61); /*0x52e0da*/
        v26 = LoadOptions::Run(v25); /*0x52e0ea*/
        LoadOptions::Cleanup(&v61); /*0x52e0ec*/
        if ( v26 ) /*0x52e0f3*/
        {
          v55 = 1; /*0x52e5dc*/
LABEL_145:
          if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x52e5ea*/
          {
            v36 = GetStringCSF(aTxtAwayLoading, 0, g_Str_File_Init_CPP, 2993); /*0x52e5fd*/
            ChatMessageWOL(1, v36); /*0x52e606*/
          }
          goto LABEL_147; /*0x52e606*/
        }
        v11 = 1; /*0x52e0f9*/
LABEL_134:
        if ( !v54 ) /*0x52e44c*/
          goto LABEL_145; /*0x52e44c*/
        continue; /*0x52e44c*/
      case 10: /*0x52dce1*/
        v11 = 1; /*0x52e105*/
        goto LABEL_134; /*0x52e10a*/
      case 11: /*0x52dce1*/
        *(unsigned int *)&dword_A8B238 = 5; /*0x52e10f*/
        goto LABEL_81; /*0x52e10f*/
      case 13: /*0x52dce1*/
        v11 = 4; /*0x52de5a*/
        Movie::Play(-1, -1, j, aRenegadeBik, 1, 1, 1, 0); /*0x52de5f*/
        Screen::Capture(1, 0, 0, -1); /*0x52de68*/
        goto LABEL_134; /*0x52de6d*/
      case 14: /*0x52dce1*/
        v18 = Campaign::Screen(1); /*0x52de7e*/
        j = v18; /*0x52de83*/
        if ( v18 == -1 || !v18 ) /*0x52de8b*/
        {
          v11 = 4; /*0x52dec9*/
        }
        else
        {
          v59 = (CD)&g_ptr_7E4C30; /*0x52de8d*/
          if ( (unsigned __int8)g_ptr_7E4C30(*(unsigned int *)(v18 + 8)) ) /*0x52de9d*/
          {
            Movie::Play(-1, -1, j, *(const char **)j, 1, 1, 1, 0); /*0x52deb6*/
            Screen::Capture(1, 0, 0, -1); /*0x52debf*/
          }
        }
        goto LABEL_134; /*0x52dec4*/
      case 15: /*0x52dce1*/
        v11 = 4; /*0x52ded3*/
        CreditsPower::Display((CreditsPower *)v50, j, 4); /*0x52ded8*/
        v19 = StringList::Find((StringList *)((char *)&stru_A83CD9.attachedTag + 3), g_INI_Key_INTRO); /*0x52dee7*/
        Theme::QueueSong((int)&stru_A83CD9.attachedTag + 3, v19); /*0x52def2*/
        Screen::Capture(1, 0, 0, -1); /*0x52defb*/
        goto LABEL_134; /*0x52df00*/
      case 16: /*0x52dce1*/
      case 17: /*0x52dce1*/
LABEL_81:
        ScenarioClass::LoadNetworkConfig((ScenarioClass *)&dword_A8B238); /*0x52e119*/
        for ( j = 0; j < dword_A83CA8; ++j ) /*0x52e12c*/
          (*(void (**)(unsigned int, unsigned __int8 ***))(**((unsigned int **)dword_A83C9C + j) + 100))( /*0x52e140*/
            *((unsigned int *)dword_A83C9C + j),
            dword_887048);
        *(unsigned int *)&stru_A8D804.__pad_3D[627] = 0; /*0x52e152*/
        switch ( *(unsigned int *)&dword_A8B238 ) /*0x52e161*/
        {
          case 0: /*0x52e161*/
            goto LABEL_40;
          case 1: /*0x52e161*/
          case 2: /*0x52e161*/
            v27 = &g_PlayerHouseFlags; /*0x52e185*/
            do /*0x52e19e*/
            {
              if ( !*((unsigned char *)v27 + 12) ) /*0x52e18a*/
                *(unsigned char *)*v27 = 0; /*0x52e193*/
              v27 += 4; /*0x52e196*/
            }
            while ( (int)v27 < (int)g_PlayerHouseFlags_End ); /*0x52e19e*/
            byte_A8D60E = 1; /*0x52e1a5*/
            if ( !NullModemClass::COMStub((NullModemClass *)&stru_A8E960.altNextScenario[12]) ) /*0x52e1b3*/
            {
              v11 = 18; /*0x52e20e*/
              *(unsigned int *)&dword_A8B238 = 0; /*0x52e213*/
              goto LABEL_134; /*0x52e219*/
            }
            EventClass::CheckFlag((EventClass *)&stru_A8E960.altNextScenario[12]); /*0x52e1ba*/
            if ( *(unsigned int *)&dword_A8B238 == 2 ) /*0x52e1c7*/
            {
              if ( *(unsigned int *)&stru_A8D804.__pad_3D[751] ) /*0x52e1cf*/
                goto LABEL_93; /*0x52e1cf*/
            }
            else if ( *(unsigned int *)&dword_A8B238 != 1 || *(unsigned int *)&stru_A8D804.__pad_3D[751] != 2 ) /*0x52e1e8*/
            {
LABEL_93:
              v28 = ModemGuest::Dialog((ModemGuest *)v62); /*0x52e1d1*/
              goto LABEL_97; /*0x52e1da*/
            }
            v28 = ModemHost::Dialog((ModemHost *)v63); /*0x52e1f1*/
LABEL_97:
            if ( !v28 ) /*0x52e1f8*/
            {
              *(unsigned int *)&dword_A8B238 = 0; /*0x52e1fe*/
              v11 = 18; /*0x52e204*/
            }
LABEL_116:
            switch ( *(unsigned int *)&dword_A8B238 ) /*0x52e356*/
            {
              case 1: /*0x52e356*/
              case 2: /*0x52e356*/
              case 4: /*0x52e356*/
              case 5: /*0x52e356*/
                goto LABEL_145;
              case 3: /*0x52e356*/
                v33 = &g_PlayerHouseFlags; /*0x52e35d*/
                do /*0x52e376*/
                {
                  if ( !*((unsigned char *)v33 + 12) ) /*0x52e362*/
                    *(unsigned char *)*v33 = 0; /*0x52e36b*/
                  v33 += 4; /*0x52e36e*/
                }
                while ( (int)v33 < (int)g_PlayerHouseFlags_End ); /*0x52e376*/
                ScenarioClass::LoadNetworkConfig((ScenarioClass *)&dword_A8B238); /*0x52e37d*/
                if ( dword_887628 ) /*0x52e38a*/
                {
                  (**(void (***)(WinsockInterface *, int))dword_887628->__pad_0)(dword_887628, 1); /*0x52e390*/
                  dword_887628 = 0; /*0x52e392*/
                }
                for ( j = 0; j < dword_A83CA8; ++j ) /*0x52e3a1*/
                  (*(void (**)(unsigned int, unsigned __int8 ***))(**((unsigned int **)dword_A83C9C + j) + 100))( /*0x52e3b4*/
                    *((unsigned int *)dword_A83C9C + j),
                    dword_887048);
                *(unsigned int *)&dword_A8B238 = 3; /*0x52e3c6*/
                dword_A8B24C = 2; /*0x52e3d2*/
                if ( dword_887628 ) /*0x52e3dc*/
                  goto LABEL_134; /*0x52e3dc*/
                v34 = (IPXInterfaceClass *)__2_YAPAXI_Z(0x3F310u); /*0x52e3e3*/
                if ( v34 ) /*0x52e3ed*/
                  v35 = (WinsockInterface *)IPXInterfaceClass::Construct(v34); /*0x52e3f1*/
                else
                  v35 = 0; /*0x52e3f8*/
                dword_887628 = v35; /*0x52e3fc*/
                WinsockInterface::Init(v35); /*0x52e401*/
                Screen::Capture(1, 0, 0, -1); /*0x52e40a*/
                if ( InitNetworkGameState() && NetworkLobby::CreateGame((NetworkLobby *)v50) ) /*0x52e418*/
                  goto LABEL_145; /*0x52e41f*/
                *(unsigned int *)&dword_A8B238 = 0; /*0x52e42b*/
                v11 = 18; /*0x52e433*/
                if ( dword_887628 ) /*0x52e438*/
                  (**(void (***)(WinsockInterface *, int))dword_887628->__pad_0)(dword_887628, 1); /*0x52e43e*/
                dword_887628 = 0; /*0x52e440*/
                break; /*0x52e440*/
              default:
                goto LABEL_134;
            }
            break; /*0x52e440*/
          case 4: /*0x52e161*/
            v29 = &g_PlayerHouseFlags; /*0x52e21e*/
            do /*0x52e237*/
            {
              if ( !*((unsigned char *)v29 + 12) ) /*0x52e223*/
                *(unsigned char *)*v29 = 0; /*0x52e22c*/
              v29 += 4; /*0x52e22f*/
            }
            while ( (int)v29 < (int)g_PlayerHouseFlags_End ); /*0x52e237*/
            Debug::Log(); /*0x52e23e*/
            memset(&stru_A8D804.__pad_3FD[43], 0, 0x20u); /*0x52e252*/
            j = 0; /*0x52e254*/
            word_A8E2A8 = 0; /*0x52e256*/
            v30 = Network::Init(); /*0x52e265*/
            v31 = RunWOLMainLoop(v11 == 17); /*0x52e26a*/
            v11 = 16; /*0x52e272*/
            byte_A8D60E = 0; /*0x52e27a*/
            switch ( v31 ) /*0x52e287*/
            {
              case -2: /*0x52e287*/
              case 0: /*0x52e287*/
                if ( dword_887628 ) /*0x52e296*/
                  (**(void (***)(WinsockInterface *, int))dword_887628->__pad_0)(dword_887628, 1); /*0x52e29c*/
                dword_887628 = 0; /*0x52e2a8*/
                v11 = 18; /*0x52e2ae*/
                *(unsigned int *)&dword_A8B238 = 0; /*0x52e2b3*/
                v32 = StringList::Find((StringList *)((char *)&stru_A83CD9.attachedTag + 3), g_INI_Key_INTRO); /*0x52e2b9*/
                ThemeClass::Play((ThemeClass *)((char *)&stru_A83CD9.attachedTag + 3), v32); /*0x52e2c4*/
                goto LABEL_116; /*0x52e2c9*/
              case -1: /*0x52e287*/
                Theme::Stop((Theme *)&stru_A83CD9.attachedTag + 3, 1); /*0x52e81e*/
                if ( !g_Is16BitMode ) /*0x52e82a*/
                  FadePalette(&word_884E80, 30, 0); /*0x52e837*/
                if ( dword_887628 ) /*0x52e844*/
                  (**(void (***)(WinsockInterface *, int))dword_887628->__pad_0)(dword_887628, 1); /*0x52e84a*/
                dword_887628 = 0; /*0x52e84c*/
                result = 0; /*0x52e855*/
                break; /*0x52e85e*/
              case 1: /*0x52e287*/
                Debug::Log(); /*0x52e2d7*/
                if ( v30 ) /*0x52e2e1*/
                {
                  v54 = 0; /*0x52e2e3*/
                  g_WOLReturnCode = 2; /*0x52e2e8*/
                }
                else
                {
                  *(unsigned int *)&dword_A8B238 = 0; /*0x52e2fa*/
                  v11 = 18; /*0x52e302*/
                  if ( dword_887628 ) /*0x52e307*/
                    (**(void (***)(WinsockInterface *, int))dword_887628->__pad_0)(dword_887628, 1); /*0x52e30d*/
                  dword_887628 = 0; /*0x52e30f*/
                  g_WOLReturnCode = -1; /*0x52e315*/
                }
                goto LABEL_116; /*0x52e2f2*/
              case 2: /*0x52e287*/
                if ( dword_887628 ) /*0x52e329*/
                  (**(void (***)(WinsockInterface *, int))dword_887628->__pad_0)(dword_887628, 1); /*0x52e32f*/
                dword_887628 = 0; /*0x52e331*/
                *(unsigned int *)&dword_A8B238 = 0; /*0x52e337*/
                v11 = 11; /*0x52e33d*/
                goto LABEL_116; /*0x52e33d*/
              default:
                goto LABEL_116;
            }
            return result; /*0x52e85e*/
          case 5: /*0x52e161*/
            if ( !ShowSkirmishSetupScreen((ObjectClass *)v50, -1) ) /*0x52e168*/
            {
              *(unsigned int *)&dword_A8B238 = 0; /*0x52e175*/
              v11 = 1; /*0x52e17b*/
            }
            goto LABEL_116; /*0x52e180*/
          default:
            goto LABEL_116;
        }
        goto LABEL_134; /*0x52e440*/
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
    v17 = (const wchar_t *)GetStringCSF((char *)aTxtOptionHelp0_4, (int)g_Str_File_Init_CPP, 3419); /*0x52fc16*/
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
      Random::AdvanceRandomBytes(g_MixFile_LoadCount, SystemTime.wMilliseconds); /*0x52fc83*/
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
(*((unsigned char *)&(v3))) = 1; /*0x52ffed*/
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

    v2 = this->M1492;
    if ( v2 && this->isInPlayfield[0] )
      *(unsigned char *)(v2 + 130) = 1; /*0x52027a*/
    if ( this->M1492 )
      return 0; /*0x520281*/
    if ( (*(int (**)(TechnoClass *))(this->ptr_0 + 388))(this) != 5 )
      return 0; /*0x520298*/
    v4[0] = this->location[0];
    v4[1] = this->location[1];
    v4[2] = this->location[2];
    if ( (uint8_t)((Tactical *)&dword_87F7E8)->IsCellVisible( (IUnknown *)(v4)) ) /*0x5202c2*/
      return 0; /*0x5202e6*/
    (*(void (**)(TechnoClass *))(this->ptr_0 + 928))(this);
    (*(void (**)(TechnoClass *))(this->ptr_0 + 248))(this);
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
  unsigned int v5; // ecx
  unsigned int *v6; // eax
  void *v7; // [esp-8h] [ebp-10h]

  v2 = (void *)this->u32_C; /*0x52aaf4*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EB734) */  /*0x52aaf7*/
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
      __3_YAXPAX_Z(this->u32_14); /*0x52ab33*/
      this->u32_14 = v4; /*0x52ab3d*/
    }
    while ( v4 ); /*0x52ab40*/
  }
  free(this->u32_18); /*0x52ab47*/
  this->u32_18 = 0; /*0x52ab51*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E1B0C) */  /*0x52ab54*/
  if ( this ) /*0x52ab5a*/
  {
    v5 = this->u32_4; /*0x52ab5c*/
    if ( v5 ) /*0x52ab61*/
    {
      v6 = (unsigned int *)this->u32_8; /*0x52ab63*/
      if ( v6 ) /*0x52ab68*/
      {
        v6[1] = v5; /*0x52ab6a*/
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

  if ( UINT > 0x110 ) /*0x52d440*/
  {
    if ( UINT == 273 ) /*0x52d516*/
    {
      if ( ((unsigned __int16)WPARAM == 2 || (unsigned __int16)WPARAM == 1188) && !HIWORD(WPARAM) ) /*0x52d563*/
      {
        DlgItem = GetDlgItem(hDlg, 1187); /*0x52d575*/
        v8 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x52d585*/
        EndDialog(hDlg, v8); /*0x52d58d*/
        DestroyWindow(hDlg); /*0x52d594*/
      }
    }
    else if ( UINT == 534 ) /*0x52d51d*/
    {
      return (unsigned __int8)Window::ClampToScreen(&a4->ptr_0); /*0x52d546*/
    }
    return 0; /*0x52d51d*/
  }
  if ( UINT != 272 ) /*0x52d446*/
  {
    if ( UINT == 83 ) /*0x52d44b*/
    {
      ((ObjectClass *)a4)->System_Read(); /*0x52d475*/
      return 0; /*0x52d483*/
    }
    if ( UINT == 123 ) /*0x52d450*/
    {
      ((ObjectClass *)(ObjectClass *)WPARAM)->System_Read_7768A0(); /*0x52d45d*/
      return 0; /*0x52d46b*/
    }
    return 0; /*0x52d59a*/
  }
  Dialog::RestoreParent((Dialog *)hDlg); /*0x52d492*/
  v5 = GetDlgItem(hDlg, 1187); /*0x52d4a9*/
  for ( i = 0; i < a4->uniqueId; ++i ) /*0x52d4b9*/
  {
    ((INIClass *)(*(INIClass **)(a4->ptr_4 + 4 * i)))->GetString( /*0x52d4da*/ g_INI_Key_General, (unsigned __int8 *)g_INI_Key_Name, &g_INI_DefaultBuffer, lParam, 128);
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
