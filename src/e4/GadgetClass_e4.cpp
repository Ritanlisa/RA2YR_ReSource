// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4E12F0
namespace gamemd {
void * GadgetClass::Construct(GadgetClass * aP1, GadgetClass * aP2, GadgetClass * aP3, ControlClass * aP4, GadgetClass * aP5, GadgetClass * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  GadgetClass *result; // eax

  result = (GadgetClass *)this; /*0x4e12f4*/
  this->Height = aP2; /*0x4e12fb*/
  this->Width = aP1; /*0x4e1302*/
  this->ID = aP4; /*0x4e1309*/
  this->Visible = aP3; /*0x4e1312*/
  this->X = 0; /*0x4e1319*/
  this->Y = 0; /*0x4e131c*/
  this->q070 = 0; /*0x4e131f*/
  this->q01E = 0; /*0x4e1322*/
  this->q01D = (_BYTE)aP6; /*0x4e1327*/
  this->q020 = aP5; /*0x4e132a*/
  *this = &vt_GadgetClass; /*0x4e132d*/
  if ( (_BYTE)aP6 ) /*0x4e1334*/
    this->q020 = (unsigned int)aP5 | 5; /*0x4e1339*/
  return (ControlClass *)result; /*0x4e1333*/
}
}
} // namespace gamemd

// 0x4E1390
namespace gamemd {
int GadgetClass::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  *this = &vt_GadgetClass; /*0x4e1390*/
  int v1 = DataGlobal_8B3E90; /*0x4e1396*/
  if ( this == (_DWORD *)DataGlobal_8B3E90 ) /*0x4e139f*/
  {
    int v2 = this->q020; /*0x4e13a1*/
    BYTE1(v2) &= ~1u; /*0x4e13a4*/
    this->q020 = v2; /*0x4e13a7*/
    v1 = 0; /*0x4e13aa*/
    DataGlobal_8B3E90 = 0; /*0x4e13ac*/
  }
  if ( this == (_DWORD *)DataGlobal_8B3E88 ) /*0x4e13ba*/
    DataGlobal_8B3E88 = 0; /*0x4e13bc*/
  if ( this == (_DWORD *)DataGlobal_8B3E8C ) /*0x4e13cb*/
    DataGlobal_8B3E8C = 0; /*0x4e13cd*/
  if ( this == (_DWORD *)v1 ) /*0x4e13d5*/
    DataGlobal_8B3E90 = 0; /*0x4e13d7*/
  return LinkClass::Destruct();
}
}
} // namespace gamemd

// 0x557920
namespace gamemd {
int GadgetClass::DrawBuildingPlacement(ControlClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // edi

  if ( !GadgetClass::ClearState((_BYTE *)this, aP1) ) /*0x55792e*/
    return 0; /*0x557a0b*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)&DataGlobal_87F8E4[32092] + 32))( /*0x557965*/
    *(_DWORD *)&DataGlobal_87F8E4[32092],
    this->Width,
    this->Height,
    this->Visible,
    this->ID);
  bool v3 = this->Visible; /*0x55796b*/
  int v4 = this->Height; /*0x55796e*/
  int v9[4]; // [esp+10h] [ebp-10h] BYREF
  v9[0] = this->Width; /*0x557971*/
  int v5 = this->ID; /*0x557975*/
  v9[2] = v3; /*0x557978*/
  v9[3] = v5; /*0x55797c*/
  v9[1] = v4; /*0x55798b*/
  DrawBuildingTilesSHP(v9, 4, 1); /*0x55798f*/
  if ( this->q044 ) /*0x557994*/
  {
    for ( i = 0; i < this->q050; ++i ) /*0x5579a2*/
    {
      int v7 = i + this->q170; /*0x5579ad*/
      if ( this->q044 > v7 ) /*0x5579b1*/
        (*(void (__thiscall **)(int, int, int, int, int, bool))(this->q0C8)( /*0x5579e0*/
          this,
          v7,
          this->Width + 1,
          i * this->q130 + this->Height + 1,
          this->Visible - 2,
          v7 == *(_DWORD *)(this + 364));
    }
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[32092] + 36))(*(_DWORD *)&DataGlobal_87F8E4[32092]); /*0x5579f6*/
  return 1; /*0x5579fe*/
}
}
} // namespace gamemd

// 0x60AAB0
namespace gamemd {
int GadgetClass::FindByWindow(HWND hWnd, LPARAM a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND Parent; // edi
  HWND *v4; // eax
  HWND *v5; // eax
  int DlgCtrlID; // eax
  HWND v14; // [esp+Ch] [ebp-94h] BYREF
  HWND v17; // [esp+18h] [ebp-88h] BYREF
  HWND v18; // [esp+1Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+20h] [ebp-80h] BYREF

  Parent = GetParent(hWnd); /*0x60aac7*/
  _DWORD * v3 = 0; /*0x60aace*/
  v14 = hWnd; /*0x60aad0*/
  _DWORD * v15 = 0; /*0x60aad6*/
  if ( g_DialogHashMap_Count ) /*0x60aada*/
  {
    v4 = (HWND *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v14) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x60aafb*/
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
  int v12; // eax
  bool v11; // al
  int v8; // eax
    v14 = Parent; /*0x60ab2e*/
    if ( !g_DialogHashMap_Count ) /*0x60ab34*/
      goto LABEL_12; /*0x60ab34*/
    v5 = (HWND *)*((_DWORD *)g_DialogHashMap_Base + HashTable::ComputeHash((int)&g_DialogHashMap_Base, (int)&v14)); /*0x60ab4b*/
    if ( !v5 ) /*0x60ab50*/
      goto LABEL_12; /*0x60ab50*/
    while ( *v5 != v14 ) /*0x60ab58*/
    {
      v5 = (HWND *)v5[129]; /*0x60ab5e*/
      if ( !v5 ) /*0x60ab66*/
        goto LABEL_12; /*0x60ab66*/
    }
    _DWORD * v9 = v5 + 1; /*0x60acaf*/
    if ( v9 ) /*0x60acb4*/
      int v6 = v9[27]; /*0x60acba*/
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
    HashTable::Get(&g_DialogHashMap_Base, &v18, &v14); /*0x60ad2e*/
    if ( !v14 ) /*0x60ad39*/
      goto LABEL_86; /*0x60ad39*/
    int v10 = *((_DWORD *)v14 + 27); /*0x60ad3f*/
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
    *((_DWORD *)v14 + 44) = 2; /*0x60adcf*/
    v17 = hWnd; /*0x60ade4*/
    GetClassNameA(hWnd, ClassName, 128); /*0x60ade8*/
    if ( !strcmp(ClassName, g_INI_Key_Edit) || !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x60ae37*/
      goto LABEL_85; /*0x60ae5c*/
  int v16; // [esp+14h] [ebp-8Ch] BYREF
    if ( !strcmp(ClassName, g_INI_Key_ListBox) && (v16 = 0, HashTable::Get(&g_DialogHashMap_Base, &v17, &v16)) ) /*0x60aeab*/
    {
      v11 = *(_DWORD *)(v16 + 104) == 1; /*0x60aebc*/
    }
    else
    {
      if ( strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x60aed0*/
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
} // namespace gamemd

// 0x623560
namespace gamemd {
void GadgetClass::SetTooltip(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  size_t v3; // eax
  if ( this->q028 ) /*0x623564*/
  {
    __3_YAXPAX_Z(this->q028); /*0x62356c*/
    this->q028 = 0; /*0x623574*/
  }
  if ( aP1 ) /*0x623581*/
  {
    if ( *(_WORD *)aP1->__pad_0 ) /*0x623583*/
    {
      v3 = wcslen((const wchar_t *)aP1); /*0x62358a*/
      void * v4 = (void *)__2_YAPAXI_Z(2 * v3 + 2); /*0x623594*/
      this->q028 = v4; /*0x62359b*/
      wcscpy((wchar_t *)v4, (const wchar_t *)aP1); /*0x62359e*/
    }
  }
}
}
} // namespace gamemd

// 0x723EA0
namespace gamemd {
int GadgetClass::Show()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v1 = *(_DWORD *)this; /*0x723ea0*/
  this->q0B4 = 1; /*0x723ea2*/
  return (*(int (**)(void))(v1 + 72))();
}
}
} // namespace gamemd
