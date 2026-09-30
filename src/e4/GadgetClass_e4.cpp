// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Gadget_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x4E12F0
namespace gamemd {
ControlClass GadgetClass::Construct(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9)
{

  unsigned int *result; // eax

  result = a1; /*0x4e12f4*/
  *(a1 + 4) = a3; /*0x4e12fb*/
  *(a1 + 3) = a2; /*0x4e1302*/
  *(a1 + 6) = a5; /*0x4e1309*/
  *(a1 + 5) = a4; /*0x4e1312*/
  *(a1 + 1) = 0; /*0x4e1319*/
  *(a1 + 2) = 0; /*0x4e131c*/
  *((unsigned char *)a1 + 28) = 0; /*0x4e131f*/
  *((unsigned char *)a1 + 30) = 0; /*0x4e1322*/
  *((unsigned char *)a1 + 29) = a7; /*0x4e1327*/
  *(a1 + 8) = a6; /*0x4e132a*/
  *a1 = &GadgetClass::`vftable'; /*0x4e132d*/
  if ( a7 ) /*0x4e1334*/
    *(a1 + 8) = a6 | 5; /*0x4e1339*/
  return result; /*0x4e1333*/

}
}
// 0x4E1390
namespace gamemd {
ControlClass GadgetClass::Dtor(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9)
{

  int v1; // eax
  int v2; // eax

  *a1 = &GadgetClass::`vftable'; /*0x4e1390*/
  v1 = MEMORY[0x8B3E90]; /*0x4e1396*/
  if ( a1 == (unsigned int *)MEMORY[0x8B3E90] ) /*0x4e139f*/
  {
    v2 = *(a1 + 8); /*0x4e13a1*/
    BYTE1(v2) &= ~1u; /*0x4e13a4*/
    *(a1 + 8) = v2; /*0x4e13a7*/
    v1 = 0; /*0x4e13aa*/
    MEMORY[0x8B3E90] = 0; /*0x4e13ac*/
  }
  if ( a1 == (unsigned int *)MEMORY[0x8B3E88] ) /*0x4e13ba*/
    MEMORY[0x8B3E88] = 0; /*0x4e13bc*/
  if ( a1 == (unsigned int *)MEMORY[0x8B3E8C] ) /*0x4e13cb*/
    MEMORY[0x8B3E8C] = 0; /*0x4e13cd*/
  if ( a1 == (unsigned int *)v1 ) /*0x4e13d5*/
    MEMORY[0x8B3E90] = 0; /*0x4e13d7*/
  return LinkClass::Destruct();

}
}
// 0x557920
namespace gamemd {
ControlClass GadgetClass::DrawBuildingPlacement(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9)
{

  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int i; // edi
  int v7; // eax
  int v9[4]; // [esp+10h] [ebp-10h] BYREF

  if ( !GadgetClass::ClearState((unsigned char *)a1, a2) ) /*0x55792e*/
    return 0; /*0x557a0b*/
  (*(void (**)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(**(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[10228] + 32))( /*0x557965*/
    *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[10228],
    *(unsigned int *)(a1 + 12),
    *(unsigned int *)(a1 + 16),
    *(unsigned int *)(a1 + 20),
    *(unsigned int *)(a1 + 24));
  v3 = *(unsigned int *)(a1 + 20); /*0x55796b*/
  v4 = *(unsigned int *)(a1 + 16); /*0x55796e*/
  v9[0] = *(unsigned int *)(a1 + 12); /*0x557971*/
  v5 = *(unsigned int *)(a1 + 24); /*0x557975*/
  v9[2] = v3; /*0x557978*/
  v9[3] = v5; /*0x55797c*/
  v9[1] = v4; /*0x55798b*/
  DrawBuildingTilesSHP(v9, 4, 1); /*0x55798f*/
  if ( *(unsigned int *)(a1 + 68) ) /*0x557994*/
  {
    for ( i = 0; i < *(unsigned int *)(a1 + 80); ++i ) /*0x5579a2*/
    {
      v7 = i + *(unsigned int *)(a1 + 368); /*0x5579ad*/
      if ( *(unsigned int *)(a1 + 68) > v7 ) /*0x5579b1*/
        (*(void (**)(int, int, int, int, int, bool))(*(unsigned int *)a1 + 200))( /*0x5579e0*/
          a1,
          v7,
          *(unsigned int *)(a1 + 12) + 1,
          i * *(unsigned int *)(a1 + 76) + *(unsigned int *)(a1 + 16) + 1,
          *(unsigned int *)(a1 + 20) - 2,
          v7 == *(unsigned int *)(a1 + 364));
    }
  }
  (*(void (**)(unsigned int))(**(unsigned int **)&MEMORY[0x87F8E4].__pad_5568[10228] + 36))(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x5579f6*/
  return 1; /*0x5579fe*/

}
}
// 0x60AAB0
namespace gamemd {
AbstractClass * * GadgetClass::FindByWindow(HWND hWnd, LPARAM a2)
{

  HWND Parent; // edi
  unsigned int *v3; // esi
  HWND *v4; // eax
  HWND *v5; // eax
  int v6; // esi
  int DlgCtrlID; // eax
  int v8; // eax
  unsigned int *v9; // eax
  int v10; // eax
  bool v11; // al
  int v12; // eax
  HWND v14; // [esp+Ch] [ebp-94h] BYREF
  unsigned int *v15; // [esp+10h] [ebp-90h]
  int v16; // [esp+14h] [ebp-8Ch] BYREF
  HWND v17; // [esp+18h] [ebp-88h] BYREF
  HWND v18; // [esp+1Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+20h] [ebp-80h] BYREF

  Parent = GetParent(hWnd); /*0x60aac7*/
  v3 = 0; /*0x60aace*/
  v14 = hWnd; /*0x60aad0*/
  v15 = 0; /*0x60aad6*/
  if ( MEMORY[0xAC1B04] ) /*0x60aada*/
  {
    v4 = (HWND *)*((unsigned int *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v14) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x60aafb*/
    if ( v4 ) /*0x60ab00*/
    {
      while ( *v4 != v14 ) /*0x60ab08*/
      {
        v4 = (HWND *)v4[129]; /*0x60ab0a*/
        if ( !v4 ) /*0x60ab12*/
          goto LABEL_7; /*0x60ab12*/
      }
      v3 = v4 + 1; /*0x60ab1a*/
      v15 = v4 + 1; /*0x60ab1d*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x60ab23*/
  {
    v14 = Parent; /*0x60ab2e*/
    if ( !MEMORY[0xAC1B04] ) /*0x60ab34*/
      goto LABEL_12; /*0x60ab34*/
    v5 = (HWND *)*((unsigned int *)MEMORY[0xAC1B00] + HashTable::ComputeHash((int)&MEMORY[0xAC1B00], (int)&v14)); /*0x60ab4b*/
    if ( !v5 ) /*0x60ab50*/
      goto LABEL_12; /*0x60ab50*/
    while ( *v5 != v14 ) /*0x60ab58*/
    {
      v5 = (HWND *)v5[129]; /*0x60ab5e*/
      if ( !v5 ) /*0x60ab66*/
        goto LABEL_12; /*0x60ab66*/
    }
    v9 = v5 + 1; /*0x60acaf*/
    if ( v9 ) /*0x60acb4*/
      v6 = v9[27]; /*0x60acba*/
    else
LABEL_12:
      v6 = 0; /*0x60ab68*/
    DlgCtrlID = GetDlgCtrlID(hWnd); /*0x60ab6b*/
    if ( (v6 == 148 /*0x60ac9e*/
       || v6 == 216
       || v6 == 245
       || v6 == 226
       || v6 == 213
       || v6 == 257
       || v6 == 297
       || v6 == 215
       || v6 == 187
       || v6 == 256
       || v6 == 214
       || v6 == 293
       || v6 == 290
       || v6 == 274
       || v6 == 231
       || v6 == 278
       || v6 == 285
       || v6 == 284
       || v6 == 254
       || v6 == 271
       || v6 == 279
       || v6 == 276
       || v6 == 230
       || v6 == 243
       || v6 == 244
       || v6 == 700
       || v6 == 270
       || v6 == 264
       || v6 == 3014
       || v6 == 3015)
      && DlgCtrlID == 1820 )
    {
      v8 = 37; /*0x60aca0*/
    }
    else if ( (v6 == 188 || v6 == 189 || v6 == 194 || v6 == 201 || v6 == 258 || v6 == 3014) /*0x60acfe*/
           && (DlgCtrlID == 1772 || DlgCtrlID == 1448) )
    {
      v8 = 14; /*0x60ad04*/
    }
    else
    {
      v8 = 0; /*0x60ad00*/
    }
    v18 = Parent; /*0x60ad12*/
    v15[55] = v8; /*0x60ad16*/
    v14 = 0; /*0x60ad26*/
    HashTable::Get(&MEMORY[0xAC1B00], &v18, &v14); /*0x60ad2e*/
    if ( !v14 ) /*0x60ad39*/
      goto LABEL_86; /*0x60ad39*/
    v10 = *((unsigned int *)v14 + 27); /*0x60ad3f*/
    if ( v10 != 269 /*0x60adc9*/
      && v10 != 217
      && v10 != 240
      && v10 != 206
      && v10 != 288
      && v10 != 289
      && v10 != 277
      && v10 != 211
      && v10 != 207
      && v10 != 287
      && v10 != 195
      && v10 != 283
      && v10 != 225
      && v10 != 286
      && v10 != 196
      && v10 != 304
      && v10 != 208
      && v10 != 252
      && v10 != 294 )
    {
      goto LABEL_86; /*0x60adc9*/
    }
    *((unsigned int *)v14 + 44) = 2; /*0x60adcf*/
    v17 = hWnd; /*0x60ade4*/
    GetClassNameA(hWnd, ClassName, 128); /*0x60ade8*/
    if ( !strcmp(ClassName, MEMORY[0x833728]) || !strcmp(ClassName, MEMORY[0x833720]) ) /*0x60ae37*/
      goto LABEL_85; /*0x60ae5c*/
    if ( !strcmp(ClassName, MEMORY[0x833718]) && (v16 = 0, HashTable::Get(&MEMORY[0xAC1B00], &v17, &v16)) ) /*0x60aeab*/
    {
      v11 = *(unsigned int *)(v16 + 104) == 1; /*0x60aebc*/
    }
    else
    {
      if ( strcmp(ClassName, MEMORY[0x83370C]) ) /*0x60aed0*/
        goto LABEL_86; /*0x60aef5*/
      v11 = (GetWindowLongA(v17, -16) & 3) != 3; /*0x60af09*/
    }
    if ( v11 ) /*0x60af0e*/
    {
LABEL_85:
      v12 = 192; /*0x60af10*/
LABEL_87:
      v15[50] = v12; /*0x60af19*/
      return 1; /*0x60af1d*/
    }
LABEL_86:
    v12 = 0; /*0x60af17*/
    goto LABEL_87; /*0x60af17*/
  }
  return 1; /*0x60af23*/

}
}
// 0x623560
namespace gamemd {
AbstractClass * * GadgetClass::SetTooltip(CCINIClass * aP1)
{

  int v3; // eax
  void *v4; // eax

  if ( *((unsigned int *)this + 10) ) /*0x623564*/
  {
    __3_YAXPAX_Z(*((unsigned int *)this + 10)); /*0x62356c*/
    *((unsigned int *)this + 10) = 0; /*0x623574*/
  }
  if ( aP1 ) /*0x623581*/
  {
    if ( *(unsigned short *)aP1 ) /*0x623583*/
    {
      v3 = wcslen(aP1); /*0x62358a*/
      v4 = (void *)__2_YAPAXI_Z(2 * v3 + 2); /*0x623594*/
      *((unsigned int *)this + 10) = v4; /*0x62359b*/
      wcscpy((#72 *)v4, aP1); /*0x62359e*/
    }
  }

}
}
// 0x723EA0
namespace gamemd {
ControlClass GadgetClass::Show(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9)
{

  int v1; // eax

  v1 = *(unsigned int *)a1; /*0x723ea0*/
  *(a1 + 45) = 1; /*0x723ea2*/
  return (*(int (**)(void))(v1 + 72))();

}
}