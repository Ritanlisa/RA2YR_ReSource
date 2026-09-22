// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4A02B0_e4.hpp"
#include "e4/classes/E4Recv_4A0380_e4.hpp"
#include "e4/classes/E4Recv_4A0450_e4.hpp"
#include "e4/classes/E4Recv_4A08D0_e4.hpp"
#include "e4/classes/E4Recv_4A0CE0_e4.hpp"
#include "e4/classes/E4Recv_4A0DB0_e4.hpp"
#include "e4/classes/E4Recv_4A2030_e4.hpp"
#include "e4/classes/E4Recv_4A20B0_e4.hpp"
#include "e4/classes/E4Recv_4A2880_e4.hpp"
#include "e4/classes/E4Recv_4A3270_e4.hpp"
#include "e4/classes/E4Recv_4A3630_e4.hpp"
#include "e4/classes/E4Recv_4A4E30_e4.hpp"
#include "e4/classes/E4Recv_4A52D0_e4.hpp"
#include "e4/classes/E4Recv_4A52E0_e4.hpp"
#include "e4/classes/E4Recv_4A5950_e4.hpp"
#include "e4/classes/E4Recv_4A5E50_e4.hpp"
#include "e4/classes/E4Recv_4A6840_e4.hpp"
#include "e4/classes/E4Recv_4AECD0_e4.hpp"
#include "e4/classes/E4Recv_4AF2A0_e4.hpp"
#include "e4/classes/E4Recv_4AF9B0_e4.hpp"
#include "e4/classes/E4Recv_4AFAA0_e4.hpp"
#include "e4/classes/E4Recv_4AFB00_e4.hpp"
#include "e4/classes/E4Recv_4AFED0_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"

// 0x4A0190
int EnumConnectionsClass::_vt06(unsigned int * a1, unsigned int * a2)
{
{
  int i; // esi

  if ( !a2 ) /*0x4a019a*/
    return -2147467261; /*0x4a019d*/
  _DWORD * v3 = __2_YAPAXI_Z(0x24u); /*0x4a01ad*/
  if ( !v3 ) /*0x4a01b4*/
    return -2147024882; /*0x4a029d*/
  v3[2] = 0; /*0x4a01c8*/
  v3[3] = 0; /*0x4a01cb*/
  *((_BYTE *)v3 + 16) = 1; /*0x4a01ce*/
  *((_BYTE *)v3 + 17) = 0; /*0x4a01d2*/
  v3[1] = &vt_VectorClass_tagCONNECTDATA; /*0x4a01d5*/
  if ( v3 + 1 != a1 + 1 ) /*0x4a01db*/
  {
    VectorClass::ClearAndFree2((int)(v3 + 1)); /*0x4a01df*/
    int v4 = a1[3]; /*0x4a01e5*/
    v3[3] = v4; /*0x4a01ea*/
    if ( v4 ) /*0x4a01ed*/
    {
      void * v5 = __2_YAPAXI_Z(8 * v4); /*0x4a01f7*/
      v3[2] = v5; /*0x4a0201*/
      if ( v5 ) /*0x4a0204*/
      {
        int v6 = v3[3]; /*0x4a0206*/
        int v7 = 0; /*0x4a0209*/
        *((_BYTE *)v3 + 17) = 1; /*0x4a020d*/
        if ( v6 > 0 ) /*0x4a0211*/
        {
          do /*0x4a0236*/
          {
            _DWORD * v8 = (_DWORD *)(a1[2] + 8 * v7); /*0x4a021f*/
            _DWORD * v9 = (_DWORD *)(v3[2] + 8 * v7++); /*0x4a0224*/
            *v9 = *v8; /*0x4a0229*/
            v9[1] = v8[1]; /*0x4a022e*/
          }
          while ( v7 < v3[3] ); /*0x4a0236*/
        }
      }
    }
    else
    {
      v3[2] = 0; /*0x4a023c*/
      *((_BYTE *)v3 + 17) = 0; /*0x4a023f*/
    }
  }
  v3[5] = a1[5]; /*0x4a0249*/
  v3[6] = a1[6]; /*0x4a024f*/
  v3[1] = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a0252*/
  int v10 = a1[7]; /*0x4a0258*/
  v3[8] = 0; /*0x4a025b*/
  v3[7] = v10; /*0x4a025e*/
  *v3 = &vt_EnumConnectionsClass; /*0x4a0261*/
  for ( i = 0; i < v3[5]; ++i ) /*0x4a026e*/
  {
    int v13 = *(_DWORD *)(v3[2] + 8 * i); /*0x4a0276*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a0279*/
  }
  int v12 = *v3; /*0x4a0284*/
  v3[8] = 0; /*0x4a0287*/
  (*(void (__stdcall **)(_DWORD *))(v12 + 4))(v3); /*0x4a028a*/
  *a2 = v3; /*0x4a0295*/
  return 0; /*0x4a019c*/
}
}

// 0x4A02B0
namespace gamemd {
unsigned int * E4Recv_4A02B0::sub_4A02B0(unsigned int * a2)
{
{
  int i; // esi

  char * v3 = &this->M4; /*0x4a02bc*/
  this->M8 = 0; /*0x4a02c1*/
  this->M12 = 0; /*0x4a02c4*/
  this->M16 = 1; /*0x4a02c7*/
  this->M17 = 0; /*0x4a02cb*/
  this->M4 = &vt_VectorClass_tagCONNECTDATA; /*0x4a02ce*/
  if ( &this->M4 != a2 ) /*0x4a02d4*/
  {
    VectorClass::ClearAndFree2((int)(this + 1)); /*0x4a02d8*/
    int v4 = a2[2]; /*0x4a02de*/
    *((_DWORD *)v3 + 2) = v4; /*0x4a02e3*/
    if ( v4 ) /*0x4a02e6*/
    {
      void * v5 = __2_YAPAXI_Z(8 * v4); /*0x4a02ec*/
      *((_DWORD *)v3 + 1) = v5; /*0x4a02f6*/
      if ( v5 ) /*0x4a02f9*/
      {
        int v6 = *((_DWORD *)v3 + 2); /*0x4a02fb*/
        int v7 = 0; /*0x4a02fe*/
        v3[13] = 1; /*0x4a0302*/
        if ( v6 > 0 ) /*0x4a0306*/
        {
          do /*0x4a0322*/
          {
            int v8 = a2[1]; /*0x4a0308*/
            int v9 = *((_DWORD *)v3 + 1); /*0x4a030b*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a0311*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a0318*/
            ++v7; /*0x4a031f*/
          }
          while ( v7 < *((_DWORD *)v3 + 2) ); /*0x4a0322*/
        }
      }
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0; /*0x4a0328*/
      v3[13] = 0; /*0x4a032b*/
    }
  }
  *((_DWORD *)v3 + 4) = a2[4]; /*0x4a0331*/
  *((_DWORD *)v3 + 5) = a2[5]; /*0x4a0337*/
  *(_DWORD *)v3 = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a033a*/
  this->M28 = 0; /*0x4a0340*/
  this->q020 = 0; /*0x4a0343*/
  *this = &vt_EnumConnectionsClass; /*0x4a0346*/
  for ( i = 0; i < this->M20; ++i ) /*0x4a0353*/
  {
    int v12 = *(_DWORD *)(this->M8 + 8 * i); /*0x4a035b*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v12 + 4))(v12); /*0x4a035e*/
  }
  return this; /*0x4a036b*/
}
} // namespace gamemd
}

// 0x4A0380
namespace gamemd {
unsigned int * E4Recv_4A0380::sub_4A0380(unsigned int * a2)
{
{
  int i; // esi

  char * v3 = &this->M4; /*0x4a038f*/
  this->M8 = 0; /*0x4a0394*/
  this->M12 = 0; /*0x4a0397*/
  this->M16 = 1; /*0x4a039a*/
  this->M17 = 0; /*0x4a039e*/
  this->M4 = &vt_VectorClass_tagCONNECTDATA; /*0x4a03a1*/
  if ( &this->M4 != a2 + 1 ) /*0x4a03a7*/
  {
    VectorClass::ClearAndFree2((int)(this + 1)); /*0x4a03ab*/
    int v4 = a2[3]; /*0x4a03b1*/
    *((_DWORD *)v3 + 2) = v4; /*0x4a03b6*/
    if ( v4 ) /*0x4a03b9*/
    {
      void * v5 = __2_YAPAXI_Z(8 * v4); /*0x4a03c3*/
      *((_DWORD *)v3 + 1) = v5; /*0x4a03cd*/
      if ( v5 ) /*0x4a03d0*/
      {
        int v6 = *((_DWORD *)v3 + 2); /*0x4a03d2*/
        int v7 = 0; /*0x4a03d5*/
        v3[13] = 1; /*0x4a03d9*/
        if ( v6 > 0 ) /*0x4a03dd*/
        {
          do /*0x4a03f9*/
          {
            int v8 = a2[2]; /*0x4a03df*/
            int v9 = *((_DWORD *)v3 + 1); /*0x4a03e2*/
            *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(v8 + 8 * v7); /*0x4a03e8*/
            *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v8 + 8 * v7 + 4); /*0x4a03ef*/
            ++v7; /*0x4a03f6*/
          }
          while ( v7 < *((_DWORD *)v3 + 2) ); /*0x4a03f9*/
        }
      }
    }
    else
    {
      *((_DWORD *)v3 + 1) = 0; /*0x4a03ff*/
      v3[13] = 0; /*0x4a0402*/
    }
  }
  *((_DWORD *)v3 + 4) = a2[5]; /*0x4a040c*/
  *((_DWORD *)v3 + 5) = a2[6]; /*0x4a0412*/
  *(_DWORD *)v3 = &vt_DynamicVectorClass_tagCONNECTDATA; /*0x4a0415*/
  int v10 = a2[7]; /*0x4a041b*/
  this->q020 = 0; /*0x4a041e*/
  this->M28 = v10; /*0x4a0421*/
  *this = &vt_EnumConnectionsClass; /*0x4a0424*/
  for ( i = 0; i < this->M20; ++i ) /*0x4a0431*/
  {
    int v13 = *(_DWORD *)(this->M8 + 8 * i); /*0x4a0439*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 4))(v13); /*0x4a043c*/
  }
  return this; /*0x4a0449*/
}
} // namespace gamemd
}

// 0x4A0B20
int EnumConnectionPointsClass::_vt06(unsigned int * a1, unsigned int * a2)
{
{
  int i; // esi

  if ( !a2 ) /*0x4a0b2a*/
    return -2147467261; /*0x4a0b2d*/
  _DWORD * v3 = __2_YAPAXI_Z(0x24u); /*0x4a0b3d*/
  if ( !v3 ) /*0x4a0b44*/
    return -2147024882; /*0x4a0c13*/
  v3[1] = a1[1]; /*0x4a0b59*/
  v3[2] = 0; /*0x4a0b5c*/
  v3[4] = 0; /*0x4a0b61*/
  v3[5] = 0; /*0x4a0b64*/
  *((_BYTE *)v3 + 24) = 1; /*0x4a0b67*/
  *((_BYTE *)v3 + 25) = 0; /*0x4a0b6b*/
  v3[3] = &vt_VectorClass_IConnectionPoint; /*0x4a0b6e*/
  if ( v3 + 3 != a1 + 3 ) /*0x4a0b74*/
  {
    VectorClass::CleanupTyped((int)(v3 + 3)); /*0x4a0b78*/
    int v4 = a1[5]; /*0x4a0b7e*/
    v3[5] = v4; /*0x4a0b83*/
    if ( v4 ) /*0x4a0b86*/
    {
      void * v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0b90*/
      v3[4] = v5; /*0x4a0b9a*/
      if ( v5 ) /*0x4a0b9d*/
      {
        int v6 = v3[5]; /*0x4a0b9f*/
        int v7 = 0; /*0x4a0ba2*/
        *((_BYTE *)v3 + 25) = 1; /*0x4a0ba6*/
        if ( v6 > 0 ) /*0x4a0baa*/
        {
          do /*0x4a0bbe*/
          {
            *(_DWORD *)(v3[4] + 4 * v7) = *(_DWORD *)(a1[4] + 4 * v7); /*0x4a0bb5*/
            ++v7; /*0x4a0bbb*/
          }
          while ( v7 < v3[5] ); /*0x4a0bbe*/
        }
      }
    }
    else
    {
      v3[4] = 0; /*0x4a0bc2*/
      *((_BYTE *)v3 + 25) = 0; /*0x4a0bc5*/
    }
  }
  v3[7] = a1[7]; /*0x4a0bcb*/
  v3[8] = a1[8]; /*0x4a0bd1*/
  v3[3] = &vt_DynamicVectorClass_IConnectionPoint; /*0x4a0bd4*/
  *v3 = &vt_EnumConnectionPointsClass; /*0x4a0bda*/
  for ( i = 0; i < v3[7]; ++i ) /*0x4a0be7*/
  {
    int v9 = *(_DWORD *)(v3[4] + 4 * i); /*0x4a0bef*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x4a0bf2*/
  }
  (*(void (__stdcall **)(_DWORD *))(*v3 + 4))(v3); /*0x4a0c00*/
  *a2 = v3; /*0x4a0c0b*/
  return 0; /*0x4a0b2c*/
}
}

// 0x4A2370
namespace gamemd {
AbstractClass * * DrawSidebarCreditsTimer()
{
{
  unsigned __int8 result; // al
  wchar_t *StringCSF; // eax

  if ( a3 || (result = *(_BYTE *)(a1 + 8)) != 0 ) /*0x4a2383*/
  {
  int v19[3]; // [esp+18h] [ebp-Ch] BYREF
  int v18[3]; // [esp+Ch] [ebp-18h] BYREF
  int v17; // [esp+8h] [ebp-1Ch] BYREF
    int v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)DSurface_Sidebar + 124))(DSurface_Sidebar, a2); /*0x4a239f*/
    if ( HouseClass_Player == (#375 *)HouseClass_Observer ) /*0x4a23aa*/
    {
      UI_Draw_6D0E60(&DataGlobal_87F7E8); /*0x4a23b5*/
      v17 = v5 / 2; /*0x4a23c2*/
      v18[0] = 2; /*0x4a23c6*/
      int v6 = *(_DWORD *)(a1 + 4); /*0x4a241f*/
  int v7; // esi
      v7 = ((unsigned __int8)DataGlobal_B0FA1C >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x4a2422*/
         | (BYTE1(DataGlobal_B0FA1C) >> g_BitMask_Blue << g_BitMask_Green)
         | (BYTE2(DataGlobal_B0FA1C) >> g_BitShift_Blue << g_BitShift_Blue);
      if ( v6 / 3600 > 99 ) /*0x4a243a*/
        v6 = 359999; /*0x4a243c*/
      int v8 = v6 / 3600; /*0x4a2454*/
      int v9 = 720 * (4 * (v6 / -3600) - v6 / 3600) + v6; /*0x4a246d*/
      int v16 = v9 % 60; /*0x4a2488*/
      int v15 = v9 / 60; /*0x4a2489*/
      StringCSF = GetStringCSF(g_Str_TXT_TIME_FORMAT_HOURS, 0, aDRa2mdpostCred, 107); /*0x4a2499*/
      swprintf(&DataGlobal_89F860, (const size_t)StringCSF, (const wchar_t *const)v8, v15, v16); /*0x4a24a4*/
      int v11 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar); /*0x4a24c6*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a24db*/
                                  v18,
                                  (size_t)&DataGlobal_89F860,
                                  DSurface_Sidebar,
                                  v11,
                                  (int)v19,
                                  (int)&v17,
                                  v7,
                                  0,
                                  0x4108u);
      *(_BYTE *)(a1 + 8) = 0; /*0x4a24e3*/
      *(_BYTE *)(a1 + 10) = 0; /*0x4a24e7*/
    }
    else
    {
      if ( *(_BYTE *)(a1 + 10) && g_RulesClass_Instance->ScatterSound >= 2 ) /*0x4a250b*/
      {
        if ( *(_BYTE *)(a1 + 9) ) /*0x4a250d*/
          AbstractClass *v12 = *(_DWORD *)g_RulesClass_Instance->ChuteSound; /*0x4a2526*/
        AbstractClass *v12 = *(_DWORD *)(g_RulesClass_Instance->ChuteSound + 4); /*0x4a2530*/
        PlayVocClass(v12, 0x2000, 0.5, 0); /*0x4a2533*/
      }
      UI_Draw_6D0E60(&DataGlobal_87F7E8); /*0x4a253d*/
      v17 = v5 / 2; /*0x4a254e*/
      v18[0] = 2; /*0x4a2552*/
  int v14; // [esp-14h] [ebp-38h]
      v14 = ((unsigned __int8)DataGlobal_B0FA1C >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x4a25be*/
          | (BYTE1(DataGlobal_B0FA1C) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(DataGlobal_B0FA1C) >> g_BitShift_Blue << g_BitShift_Blue);
      int v13 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 120))(DSurface_Sidebar); /*0x4a25c7*/
      result = (unsigned __int8)TextRenderer::Printf( /*0x4a25db*/
                                  v18,
                                  (size_t)&off_81FBB4,
                                  DSurface_Sidebar,
                                  v13,
                                  (int)v19,
                                  (int)&v17,
                                  v14,
                                  0,
                                  0x4108u);
      *(_BYTE *)(a1 + 8) = 0; /*0x4a25e3*/
      *(_BYTE *)(a1 + 10) = 0; /*0x4a25e7*/
    }
  }
  return result; /*0x4a24ed*/
}
} // namespace gamemd
}

// 0x4A2B60
namespace gamemd {
void CStreamClass___vt03(int a1, char * a2, signed int Size, signed int * a4)
{
{
  int result; // eax
  ModemGame *v9; // edi
  size_t v10; // eax
  CampaignClass *v14; // ecx
  int v4 = Size; /*0x4a2b66*/
  if ( !a2 ) /*0x4a2b6e*/
    return -2147467261; /*0x4a2b72*/
  if ( Size < 0 ) /*0x4a2b7e*/
    return -2147024809; /*0x4a2b82*/
  _DWORD * v6 = (_DWORD *)a1; /*0x4a2b8c*/
  if ( !*(_DWORD *)(a1 + 8) ) /*0x4a2b90*/
    return -2147467259; /*0x4a2b99*/
  if ( *(_BYTE *)(a1 + 17) ) /*0x4a2ba3*/
    return -2147467259; /*0x4a2baa*/
  signed int * v7 = a4; /*0x4a2bb6*/
  *(_BYTE *)(a1 + 16) = 1; /*0x4a2bba*/
  if ( v7 ) /*0x4a2bc0*/
    *v7 = 0; /*0x4a2bc2*/
  for ( ; v4 > 0; v6[5] = v6[10] ) /*0x4a2bca*/
  {
    int v8 = v6[5]; /*0x4a2bd0*/
    if ( v8 > 0 ) /*0x4a2bd5*/
    {
      v9 = v4; /*0x4a2bd9*/
      if ( v4 >= v8 ) /*0x4a2bdb*/
        v9 = v6[5]; /*0x4a2bdd*/
      memcpy(a2, (const void *)(v6[6] + v6[10] - v8), v9); /*0x4a2bf0*/
      v4 -= v9; /*0x4a2c01*/
      v10 = v6[5] - v9; /*0x4a2c03*/
      a2 += v9; /*0x4a2c05*/
      v6[5] = v10; /*0x4a2c09*/
    }
    if ( !v4 ) /*0x4a2c0e*/
      break; /*0x4a2c0e*/
    int v11 = v6[2]; /*0x4a2c14*/
    a1 = 0; /*0x4a2c17*/
    if ( !v11 ) /*0x4a2c21*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c28*/
    int * v12 = v6 + 9; /*0x4a2c34*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD *, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6 + 9, 8, &a1); /*0x4a2c3e*/
    if ( result < 0 ) /*0x4a2c43*/
      return result; /*0x4a2c43*/
    if ( a1 != 8 ) /*0x4a2c4a*/
      return -2147467259; /*0x4a2c4a*/
    if ( !v6[2] ) /*0x4a2c50*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c5c*/
    result = (*(int (__stdcall **)(_DWORD, _DWORD, int, int *))(*(_DWORD *)v6[2] + 12))(v6[2], v6[7], *v12, &a1); /*0x4a2c73*/
    if ( result < 0 ) /*0x4a2c78*/
      return result; /*0x4a2c78*/
    int v13 = *v12; /*0x4a2c7a*/
    if ( a1 != *v12 ) /*0x4a2c82*/
      return -2147467259; /*0x4a2c82*/
    _BYTE * v15 = (_BYTE *)v6[6]; /*0x4a2c92*/
    v14 = (unsigned __int8 *)v6[7]; /*0x4a2c93*/
    int v16 = 0x10000; /*0x4a2c96*/
    DecodeBlockLCW(v14, v13, v15, &v16, 0); /*0x4a2c9e*/
  }
  if ( a4 ) /*0x4a2cb7*/
    *a4 = Size; /*0x4a2cbd*/
  return 0; /*0x4a2b70*/
}
} // namespace gamemd
}

// 0x4A3270
namespace gamemd {
void * E4Recv_4A3270::sub_4A3270(int a2, int a3, int a4)
{
{

  int * v5 = &this->M112; /*0x4a3287*/
  *this = a4; /*0x4a328f*/
  *(&this->M88) = 0; /*0x4a3291*/
  *(&this->M89) = 0; /*0x4a3297*/
  memset(&this->M4, 0, 0x6Cu); /*0x4a329e*/
  this->M4 = 108; /*0x4a32a4*/
  this->M8 = 7; /*0x4a32aa*/
  *(&this->M87) = dword_81FC60[a4]; /*0x4a32b8*/
  this->M16 = a2; /*0x4a32bf*/
  this->M12 = a3; /*0x4a32c2*/
  if ( a4 == 1 ) /*0x4a32c5*/
  {
    this->M8 = 71; /*0x4a32c7*/
    this->M28 = 16; /*0x4a32ce*/
  }
  if ( !DataGlobal_8A0E00 /*0x4a32e5*/
    || !(*(int (__stdcall **)(int, int *, int *, _DWORD))(*(_DWORD *)DataGlobal_8A0E00 + 24))(
          DataGlobal_8A0E00,
          &this->M4,
          &this->M112,
          0) )
  {
    int v6 = *v5; /*0x4a32ec*/
    if ( v6 ) /*0x4a32f0*/
    {
      if ( a4 ) /*0x4a32f5*/
      {
        if ( a4 == 1 ) /*0x4a32f8*/
        {
  _DWORD v8[25]; // [esp+10h] [ebp-64h] BYREF
          memset(v8, 0, sizeof(v8)); /*0x4a3314*/
          v8[0] = 100; /*0x4a331a*/
          v8[20] = -1; /*0x4a332a*/
          (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v6 + 20))( /*0x4a3339*/
            v6,
            0,
            0,
            0,
            0x2000000,
            v8);
          return this; /*0x4a3347*/
        }
        if ( a4 != 2 ) /*0x4a32fb*/
          return this; /*0x4a3306*/
      }
      (**(void (__stdcall ***)(int, void *, int))v6)(v6, &unk_7F8130, (int)(&this->M89)); /*0x4a3356*/
    }
  }
  return this; /*0x4a32ff*/
}
} // namespace gamemd
}

// 0x4A38D0
namespace gamemd {
AbstractClass * * LoadFileSHP(ConvertClass * aP0, ConvertClass * aP1)
{
{
  ConvertClass *v2; // ebx
  void *result; // eax
  AbstractClass *v6; // edi
  v2 = aP1; /*0x4a38d4*/
  LOBYTE(aP1) = 0; /*0x4a38d9*/
  v2->__pad_0[0] = 0; /*0x4a38db*/
  result = (void *)SearchMIXFile(aP0->__pad_0, (IUnknown *)aP1); /*0x4a38de*/
  if ( !result ) /*0x4a38e5*/
  {
  bool v7; // zf
  _DWORD v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
    CCFileClass::Construct(v8, aP0->__pad_0); /*0x4a38ed*/
    AbstractClass *v5 = 0; /*0x4a38f2*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v8[0] + 20))(v8, 0) ) /*0x4a38fd*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 44))(v8); /*0x4a390f*/
      v5 = (void *)__2_YAPAXI_Z(v6); /*0x4a3917*/
      v7 = v5 == 0; /*0x4a391c*/
      if ( !v5 ) /*0x4a391e*/
      {
LABEL_6:
        v2->__pad_0[0] = !v7; /*0x4a392f*/
        v8[0] = &vt_CCFileClass; /*0x4a3938*/
  _DWORD v9[5]; // [esp+64h] [ebp-14h] BYREF
        v9[3] = 0; /*0x4a3940*/
        Vector::Clear((int)v9); /*0x4a3948*/
        v8[0] = &off_7E1668; /*0x4a3951*/
        BufferIOFileClass::Dtor(v8); /*0x4a3959*/
        return v5; /*0x4a395e*/
      }
      (*(void (__thiscall **)(_DWORD *, void *, size_t))(v8[0] + 36))(v8, v5, v6); /*0x4a392a*/
    }
    v7 = v5 == 0; /*0x4a392d*/
    goto LABEL_6; /*0x4a392d*/
  }
  return result; /*0x4a3961*/
}
} // namespace gamemd
}

// 0x4A3970
namespace gamemd {
AbstractClass * * FileClass_LoadToBuffer(char ** a1, bool * a2)
{
{
  int result; // eax
  AbstractClass *v6; // ebx
  char * v3 = String::GetOrEmpty_Alt(a1); /*0x4a397c*/
  *a2 = 0; /*0x4a3982*/
  result = SearchMIXFile(v3, 0); /*0x4a3985*/
  if ( !result ) /*0x4a398c*/
  {
  bool v7; // zf
  _DWORD v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
    CCFileClass::Construct(v8, v3); /*0x4a3994*/
    AbstractClass *v5 = 0; /*0x4a3999*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v8[0] + 20))(v8, 0) ) /*0x4a39a4*/
    {
      v6 = (*(int (__thiscall **)(_DWORD *))(v8[0] + 44))(v8); /*0x4a39b6*/
      v5 = __2_YAPAXI_Z(v6); /*0x4a39be*/
      v7 = v5 == 0; /*0x4a39c3*/
      if ( !v5 ) /*0x4a39c5*/
      {
LABEL_6:
        *a2 = !v7; /*0x4a39d6*/
        v8[0] = &vt_CCFileClass; /*0x4a39df*/
  _DWORD v9[5]; // [esp+64h] [ebp-14h] BYREF
        v9[3] = 0; /*0x4a39e7*/
        Vector::Clear((int)v9); /*0x4a39ef*/
        v8[0] = &off_7E1668; /*0x4a39f8*/
        BufferIOFileClass::Dtor(v8); /*0x4a3a00*/
        return (int)v5; /*0x4a3a05*/
      }
      (*(void (__thiscall **)(_DWORD *, void *, size_t))(v8[0] + 36))(v8, v5, v6); /*0x4a39d1*/
    }
    v7 = v5 == 0; /*0x4a39d4*/
    goto LABEL_6; /*0x4a39d4*/
  }
  return result; /*0x4a3a08*/
}
} // namespace gamemd
}

// 0x4A3C30
namespace gamemd {
void Palette_Fade(const void * a1, signed int a2, void (*a3)(void) a3)
{
{
  int result; // eax
  DWORD v8; // edx
  DWORD v10; // eax
  DWORD v19; // eax
  DWORD Ticks; // [esp+8h] [ebp-910h]
  _BYTE Src[768]; // [esp+318h] [ebp-600h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Primary + 112))(g_DSurface_Primary); /*0x4a3c48*/
  if ( result == 1 ) /*0x4a3c4e*/
  {
  int v17; // edi
  signed int v16; // eax
  signed int v15; // esi
    Ticks = Timer::GetTicks(); /*0x4a3c5f*/
    signed int v22 = a2; /*0x4a3c63*/
  _BYTE v24[768]; // [esp+18h] [ebp-900h] BYREF
    _BYTE * v6 = &v24[2]; /*0x4a3c67*/
    int v7 = 256; /*0x4a3c6b*/
    do /*0x4a3c7e*/
    {
      *(v6 - 2) = 0; /*0x4a3c72*/
      *(v6 - 1) = 0; /*0x4a3c75*/
      *v6 = 0; /*0x4a3c78*/
      v6 += 3; /*0x4a3c7a*/
      --v7; /*0x4a3c7d*/
    }
    while ( v7 ); /*0x4a3c7e*/
    v8 = Ticks; /*0x4a3c80*/
    qmemcpy(v24, &DataGlobal_89F990, sizeof(v24)); /*0x4a3c92*/
  _BYTE v26[768]; // [esp+618h] [ebp-300h] BYREF
    qmemcpy(v26, a1, sizeof(v26)); /*0x4a3ca9*/
    while ( 1 ) /*0x4a3cab*/
    {
      signed int v9 = v22; /*0x4a3cab*/
      if ( v8 != -1 ) /*0x4a3cb2*/
      {
        v10 = Timer::GetTicks(); /*0x4a3cb8*/
        v8 = Ticks; /*0x4a3cbd*/
        signed int v11 = v10 - Ticks; /*0x4a3cc1*/
        if ( v11 >= v22 ) /*0x4a3cc5*/
          return Surface::CreateSurfacePalette(v26); /*0x4a3cc5*/
        v9 = v22 - v11; /*0x4a3ccb*/
      }
      if ( !v9 ) /*0x4a3ccf*/
        return Surface::CreateSurfacePalette(v26); /*0x4a3daf*/
      qmemcpy(Src, v24, sizeof(Src)); /*0x4a3ce8*/
      signed int v12 = v22; /*0x4a3cea*/
      if ( v8 != -1 ) /*0x4a3cee*/
      {
        signed int v13 = Timer::GetTicks() - Ticks; /*0x4a3cf9*/
        if ( v13 >= v22 ) /*0x4a3cff*/
          v12 = 0; /*0x4a3d05*/
        else
          v12 = v22 - v13; /*0x4a3d01*/
      }
      int v14 = ((a2 - v12) << 8) / a2; /*0x4a3d13*/
      if ( v14 >= 255 ) /*0x4a3d1a*/
        v14 = 255; /*0x4a3d1c*/
      Render_Helper(v14, v26); /*0x4a3d31*/
      v15 = v22; /*0x4a3d36*/
      if ( Ticks == -1 ) /*0x4a3d3f*/
        goto LABEL_18; /*0x4a3d3f*/
      v16 = Timer::GetTicks() - Ticks; /*0x4a3d4a*/
      if ( v16 < v22 ) /*0x4a3d50*/
        break; /*0x4a3d50*/
      v17 = 0; /*0x4a3d8c*/
LABEL_19:
      Surface::CreateSurfacePalette(Src); /*0x4a3d56*/
      if ( a3 ) /*0x4a3d64*/
LABEL_20:
        a3(); /*0x4a3d66*/
      v8 = Ticks; /*0x4a3d68*/
      while ( 1 ) /*0x4a3d6c*/
      {
        signed int v18 = v22; /*0x4a3d6c*/
        if ( v8 != -1 ) /*0x4a3d73*/
        {
          v19 = Timer::GetTicks(); /*0x4a3d79*/
          v8 = Ticks; /*0x4a3d7e*/
          signed int v20 = v19 - Ticks; /*0x4a3d82*/
          if ( v20 >= v22 ) /*0x4a3d86*/
            v18 = 0; /*0x4a3d90*/
          else
            v18 = v22 - v20; /*0x4a3d88*/
        }
        if ( v18 != v17 || !v17 ) /*0x4a3d9c*/
          break; /*0x4a3d9c*/
        if ( a3 ) /*0x4a3da4*/
          goto LABEL_20; /*0x4a3da4*/
      }
    }
    v15 = v22 - v16; /*0x4a3d52*/
LABEL_18:
    v17 = v15; /*0x4a3d54*/
    goto LABEL_19; /*0x4a3d54*/
  }
  return result; /*0x4a3db6*/
}
} // namespace gamemd
}

// 0x4A4130
namespace gamemd {
INIClass * * int sub_4A4130()
{
{
  INIClass *v0; // eax
  HRESULT v2; // eax
  CHAR Text[80]; // [esp+78h] [ebp-18Ch] BYREF

  v0 = g_lpDirectDraw7; /*0x4a4130*/
  char v1 = 0; /*0x4a413c*/
  if ( !g_lpDirectDraw7 ) /*0x4a4148*/
  {
    v2 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a4153*/
    if ( v2 ) /*0x4a415a*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4168*/
      {
        g_DDraw_ErrorCallback(v2); /*0x4a4170*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2); /*0x4a427b*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4296*/
      }
      v0 = 0; /*0x4a4172*/
      g_lpDirectDraw7 = 0; /*0x4a4174*/
    }
    else
    {
      v0 = g_lpDirectDraw7; /*0x4a429d*/
      v1 = 1; /*0x4a42a2*/
    }
  }
  unsigned int v3 = 0; /*0x4a4179*/
  if ( v0 ) /*0x4a417d*/
  {
  _DWORD v9[79]; // [esp+C8h] [ebp-13Ch] BYREF
    v9[0] = 316; /*0x4a418a*/
    if ( !v0->lpVtbl->GetCaps(v0, (LPDDCAPS)v9, 0) ) /*0x4a419a*/
    {
      int v4 = v9[15]; /*0x4a41af*/
      Debug::Log(); /*0x4a41bb*/
  _DWORD v7[27]; // [esp+Ch] [ebp-1F8h] BYREF
      memset(v7, 0, sizeof(v7)); /*0x4a41ce*/
      v7[0] = 108; /*0x4a41d9*/
      if ( !g_lpDirectDraw7->lpVtbl->GetDisplayMode(g_lpDirectDraw7, (LPDDSURFACEDESC)v7) ) /*0x4a41e5*/
      {
        Debug::Log(); /*0x4a4206*/
        v4 += v7[2] * v7[3] * (v7[21] >> 3); /*0x4a421f*/
      }
      v3 = (v4 + 0x20000) & 0xFFF00000; /*0x4a4227*/
      Debug::Log(); /*0x4a4239*/
    }
    v0 = g_lpDirectDraw7; /*0x4a4241*/
  }
  if ( v1 && v0 ) /*0x4a4250*/
  {
    int v5 = v0->lpVtbl->Release(v0); /*0x4a4259*/
    if ( v5 ) /*0x4a425e*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4268*/
      {
        g_DDraw_ErrorCallback(v5); /*0x4a426c*/
      }
      else
      {
        sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v5); /*0x4a42b4*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a42cf*/
      }
    }
    g_lpDirectDraw7 = 0; /*0x4a42d1*/
  }
  return v3; /*0x4a42dd*/
}
} // namespace gamemd
}

// 0x4A4900
namespace gamemd {
unsigned int * sub_4A4900(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
{
  size_t NumOfElements; // [esp+14h] [ebp-24h]
  void **v16; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-Ch]
  int v19; // [esp+30h] [ebp-8h]
  int v20; // [esp+34h] [ebp-4h]
  if ( !g_lpDirectDraw7 ) /*0x4a4915*/
    return 0; /*0x4a4ab2*/
  sub_4A4E30(&v16, 0, 0); /*0x4a4923*/
  v16 = &vt_DynamicVectorClass_DDSURFACEDESC; /*0x4a4937*/
  v20 = 10; /*0x4a493f*/
  v19 = 0; /*0x4a4947*/
  if ( g_lpDirectDraw7->lpVtbl->EnumDisplayModes(g_lpDirectDraw7, 0, 0, &v16, (LPDDENUMMODESCALLBACK)sub_4A4850) /*0x4a4967*/
    || !v19 )
  {
    v16 = &vt_VectorClass_DDSURFACEDESC; /*0x4a4a93*/
    if ( Block && BYTE1(v18) ) /*0x4a4aa5*/
      __3_YAXPAX_Z(Block); /*0x4a4aa8*/
    return 0; /*0x4a4aa8*/
  }
  AbstractClass *v5 = (unsigned int *)__2_YAPAXI_Z(8 * v19 + 4); /*0x4a497e*/
  AbstractClass *v6 = v5; /*0x4a4990*/
  memset(v5, 0, 8 * v19 + 4); /*0x4a4995*/
  NumOfElements = 0; /*0x4a4999*/
  int v7 = 0; /*0x4a49aa*/
  if ( v19 <= 0 ) /*0x4a49ae*/
    goto LABEL_13; /*0x4a49ae*/
  do /*0x4a4a12*/
  {
    _DWORD * v8 = (_DWORD *)*((_DWORD *)Block + v7); /*0x4a49b9*/
    unsigned int v9 = v8[3]; /*0x4a49bc*/
    if ( v9 <= a3 ) /*0x4a49c1*/
    {
      unsigned int v10 = v8[2]; /*0x4a49c3*/
      if ( v10 <= a4 && v9 >= a1 && v10 >= a2 && v8[21] == a5 ) /*0x4a49e3*/
      {
        *v6 = v9; /*0x4a49e5*/
        _DWORD * v11 = v6 + 1; /*0x4a49ea*/
        *v11 = v8[2]; /*0x4a49ed*/
        v6 = v11 + 1; /*0x4a49f3*/
        ++NumOfElements; /*0x4a49f7*/
      }
    }
    __3_YAXPAX_Z(*((void **)Block + v7++)); /*0x4a4a03*/
  }
  while ( v7 < v19 ); /*0x4a4a12*/
  if ( v6 == v5 ) /*0x4a4a17*/
  {
LABEL_13:
    __3_YAXPAX_Z(v5); /*0x4a4a1a*/
    v16 = &vt_VectorClass_DDSURFACEDESC; /*0x4a4a28*/
    if ( Block && BYTE1(v18) ) /*0x4a4a38*/
    {
      __3_YAXPAX_Z(Block); /*0x4a4a3b*/
      return 0; /*0x4a4a4b*/
    }
    return 0; /*0x4a4a38*/
  }
  qsort(v5, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4A48C0); /*0x4a4a5b*/
  v16 = &vt_VectorClass_DDSURFACEDESC; /*0x4a4a69*/
  if ( Block && BYTE1(v18) ) /*0x4a4a79*/
    __3_YAXPAX_Z(Block); /*0x4a4a7c*/
  return v5; /*0x4a4a45*/
}
} // namespace gamemd
}

// 0x4A59E0
namespace gamemd {
unsigned int * GetTextBoundingRect(unsigned int * a1, CampaignScore * a2, int a3, int a4, short a5, int a6, int a7)
{
{
  BitFont *v7; // edi
  int v13; // ecx
  v7 = (BitFont *)aP0; /*0x4a59e4*/
  int v9 = Text::MeasureWidth(a2, 0); /*0x4a59f1*/
  int v10 = v7[2].field_4; /*0x4a59f6*/
  int v11 = v9; /*0x4a59f9*/
  int v12 = a3; /*0x4a5a06*/
  if ( (a5 & 0x100) != 0 ) /*0x4a5a08*/
  {
    v13 = a3 - v11 / 2; /*0x4a5a11*/
LABEL_5:
    v12 = v13; /*0x4a5a1c*/
    goto LABEL_6; /*0x4a5a1c*/
  }
  if ( (a5 & 0x200) != 0 ) /*0x4a5a18*/
  {
    v13 = a3 - v11; /*0x4a5a1a*/
    goto LABEL_5; /*0x4a5a1a*/
  }
LABEL_6:
  *a1 = v12 - a6; /*0x4a5a1e*/
  a1[1] = a4 - a7; /*0x4a5a3a*/
  a1[2] = v11 + 2 * a6; /*0x4a5a3d*/
  a1[3] = v10 + 2 * a7; /*0x4a5a40*/
  return a1; /*0x4a5a43*/
}
} // namespace gamemd
}

// 0x4A5A50
namespace gamemd {
void SHP_DrawBuildingTiles(int * a1, int a2, char a3)
{
{

  int v81 = 15; /*0x4a5a69*/
  int v86 = 14; /*0x4a5a74*/
  _DWORD * v5 = (_DWORD *)*((_DWORD *)BuildingTypeClass_AnimTable + BuildingAnim::GetType()); /*0x4a5a7f*/
  int v6 = v5[202]; /*0x4a5a8b*/
  int v7 = v5[200]; /*0x4a5a91*/
  int v8 = v5[201]; /*0x4a5a97*/
  int v74 = v5[199]; /*0x4a5a9d*/
  int v77 = v74; /*0x4a5aa1*/
  _DWORD v73[2]; // [esp+84h] [ebp-60h] BYREF
  v73[1] = v6; /*0x4a5aad*/
  int v78 = v6; /*0x4a5ab1*/
  int v82 = 12; /*0x4a5ab8*/
  int v85 = 12; /*0x4a5abf*/
  v73[0] = v7; /*0x4a5acd*/
  int v76 = v7; /*0x4a5ad1*/
  int v88 = v7; /*0x4a5ad8*/
  int v91 = v7; /*0x4a5adf*/
  int v92 = v7; /*0x4a5ae6*/
  int v95 = v7; /*0x4a5aed*/
  int v80 = 13; /*0x4a5afb*/
  int v83 = 13; /*0x4a5b02*/
  int v84 = 13; /*0x4a5b09*/
  int v87 = 13; /*0x4a5b10*/
  int v9 = v5[203]; /*0x4a5b17*/
  int v75 = v8; /*0x4a5b1d*/
  int v79 = v8; /*0x4a5b24*/
  int v89 = v9; /*0x4a5b2b*/
  int v90 = v9; /*0x4a5b34*/
  int v93 = v9; /*0x4a5b3b*/
  int v94 = v9; /*0x4a5b42*/
  int * v10 = &v73[4 * a2]; /*0x4a5b49*/
  if ( a3 ) /*0x4a5b4d*/
  {
    int v11 = v5[195]; /*0x4a5b4f*/
    int v12 = *v10; /*0x4a5b55*/
    if ( *(_DWORD *)(v11 + 4) == 1 ) /*0x4a5b5b*/
      int v13 = *(unsigned __int8 *)(*(_DWORD *)(v11 + 372) + v12); /*0x4a5b68*/
    else
      v13 = *(unsigned __int16 *)(*(_DWORD *)(v11 + 372) + 2 * v12); /*0x4a5b74*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, a1, v13); /*0x4a5b82*/
  }
  int v14 = a2 - 4; /*0x4a5b85*/
  if ( v14 ) /*0x4a5b88*/
  {
    if ( v14 == 1 ) /*0x4a5b8f*/
    {
      int v51 = v5[195]; /*0x4a5d9c*/
      int v52 = v10[2]; /*0x4a5da2*/
      if ( *(_DWORD *)(v51 + 4) == 1 ) /*0x4a5da9*/
        int v53 = *(unsigned __int8 *)(*(_DWORD *)(v51 + 372) + v52); /*0x4a5db3*/
      else
        v53 = *(unsigned __int16 *)(*(_DWORD *)(v51 + 372) + 2 * v52); /*0x4a5dc0*/
      int v54 = a1[1] + 1; /*0x4a5dca*/
  _DWORD v72[4]; // [esp+74h] [ebp-70h] BYREF
      v72[0] = *a1 + 1; /*0x4a5dcb*/
      int v55 = a1[2]; /*0x4a5dcf*/
      v72[1] = v54; /*0x4a5dd2*/
      int v56 = a1[3] - 1; /*0x4a5dda*/
      v72[2] = v55 - 1; /*0x4a5ddb*/
      v72[3] = v56; /*0x4a5de6*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))(g_DSurface_Hidden_2, v72, v53); /*0x4a5df1*/
    }
    else
    {
      int v15 = v5[195]; /*0x4a5b95*/
      int v16 = v10[1]; /*0x4a5b9b*/
      int v17 = *(_DWORD *)(v15 + 4); /*0x4a5b9e*/
      int v18 = *(_DWORD *)(v15 + 372); /*0x4a5ba1*/
      if ( v17 == 1 ) /*0x4a5baa*/
        int v19 = *(unsigned __int8 *)(v18 + v16); /*0x4a5bae*/
      else
        v19 = *(unsigned __int16 *)(v18 + 2 * v16); /*0x4a5bb5*/
      int v20 = *a1; /*0x4a5bb9*/
      int v21 = a1[3]; /*0x4a5bc3*/
      int v66 = a1[2] + *a1; /*0x4a5bc6*/
      int v67 = v21 + a1[1]; /*0x4a5bd3*/
  _DWORD v62[2]; // [esp+34h] [ebp-B0h] BYREF
      v62[1] = v67; /*0x4a5bd7*/
      v62[0] = v20; /*0x4a5be2*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5bed*/
        g_DSurface_Hidden_2,
        v62,
        &v66,
        v19);
      int v22 = v5[195]; /*0x4a5bf0*/
      int v23 = v10[1]; /*0x4a5bf6*/
      int v24 = *(_DWORD *)(v22 + 4); /*0x4a5bf9*/
      int v25 = *(_DWORD *)(v22 + 372); /*0x4a5bfc*/
      if ( v24 == 1 ) /*0x4a5c05*/
        int v26 = *(unsigned __int8 *)(v25 + v23); /*0x4a5c09*/
      else
        v26 = *(unsigned __int16 *)(v25 + 2 * v23); /*0x4a5c10*/
      int v27 = a1[2] + *a1; /*0x4a5c19*/
      int v28 = a1[3] + a1[1]; /*0x4a5c21*/
  _DWORD v64[2]; // [esp+44h] [ebp-A0h] BYREF
      v64[1] = a1[1]; /*0x4a5c24*/
  _DWORD v71[2]; // [esp+6Ch] [ebp-78h] BYREF
      v71[0] = v27; /*0x4a5c33*/
      v71[1] = v28; /*0x4a5c37*/
      v64[0] = v27; /*0x4a5c3b*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5c46*/
        g_DSurface_Hidden_2,
        v64,
        v71,
        v26);
      int v29 = v5[195]; /*0x4a5c49*/
      int v30 = v10[2]; /*0x4a5c4f*/
      int v31 = *(_DWORD *)(v29 + 4); /*0x4a5c57*/
      int v32 = *(_DWORD *)(v29 + 372); /*0x4a5c5a*/
      if ( v31 == 1 ) /*0x4a5c62*/
        int v33 = *(unsigned __int8 *)(v32 + v30); /*0x4a5c66*/
      else
        v33 = *(unsigned __int16 *)(v32 + 2 * v30); /*0x4a5c6d*/
      int v34 = a1[2] + *a1; /*0x4a5c7a*/
  _DWORD v60[2]; // [esp+24h] [ebp-C0h] BYREF
      v60[0] = *a1; /*0x4a5c7e*/
      int v69 = v34; /*0x4a5c86*/
      int v70 = a1[1]; /*0x4a5c8d*/
      v60[1] = v70; /*0x4a5c91*/
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5c9e*/
        g_DSurface_Hidden_2,
        v60,
        &v69,
        v33);
      int v35 = v5[195]; /*0x4a5ca1*/
      int v36 = v10[2]; /*0x4a5ca7*/
      int v37 = *(_DWORD *)(v35 + 4); /*0x4a5caa*/
      int v38 = *(_DWORD *)(v35 + 372); /*0x4a5cad*/
      if ( v37 == 1 ) /*0x4a5cb5*/
        int v39 = *(unsigned __int8 *)(v38 + v36); /*0x4a5cb9*/
      else
        v39 = *(unsigned __int16 *)(v38 + 2 * v36); /*0x4a5cc0*/
      int v40 = *a1; /*0x4a5cc7*/
      int v41 = a1[3] + a1[1]; /*0x4a5ccc*/
  _DWORD v63[2]; // [esp+3Ch] [ebp-A8h] BYREF
      v63[1] = a1[1]; /*0x4a5ccf*/
  _DWORD v61[2]; // [esp+2Ch] [ebp-B8h] BYREF
      v61[0] = v40; /*0x4a5cde*/
      v61[1] = v41; /*0x4a5ce2*/
      v63[0] = v40; /*0x4a5ce6*/
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 48))( /*0x4a5cf1*/
        g_DSurface_Hidden_2,
        v63,
        v61,
        v39);
      int v42 = v5[195]; /*0x4a5cf4*/
      int v43 = v10[3]; /*0x4a5cfa*/
      if ( *(_DWORD *)(v42 + 4) == 1 ) /*0x4a5d05*/
        int v44 = *(unsigned __int8 *)(*(_DWORD *)(v42 + 372) + v43); /*0x4a5d12*/
      else
        v44 = *(unsigned __int16 *)(*(_DWORD *)(v42 + 372) + 2 * v43); /*0x4a5d1e*/
      int v45 = a1[1]; /*0x4a5d24*/
  _DWORD v65[2]; // [esp+4Ch] [ebp-98h] BYREF
      v65[0] = *a1; /*0x4a5d27*/
      v65[1] = a1[3] + v45; /*0x4a5d37*/
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 36))(g_DSurface_Hidden_2, v65, v44); /*0x4a5d42*/
      int v46 = v5[195]; /*0x4a5d45*/
      int v47 = v10[3]; /*0x4a5d4b*/
      if ( *(_DWORD *)(v46 + 4) == 1 ) /*0x4a5d51*/
        int v48 = *(unsigned __int8 *)(*(_DWORD *)(v46 + 372) + v47); /*0x4a5d5b*/
      else
        v48 = *(unsigned __int16 *)(*(_DWORD *)(v46 + 372) + 2 * v47); /*0x4a5d68*/
      int v49 = a1[1]; /*0x4a5d71*/
  _DWORD v68[2]; // [esp+5Ch] [ebp-88h] BYREF
      v68[0] = *a1 + a1[2]; /*0x4a5d76*/
      v68[1] = v49; /*0x4a5d81*/
      return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 36))(g_DSurface_Hidden_2, v68, v48); /*0x4a5d8c*/
    }
  }
  else
  {
    int v57 = v5[195]; /*0x4a5e01*/
    int v58 = v10[2]; /*0x4a5e07*/
    if ( *(_DWORD *)(v57 + 4) == 1 ) /*0x4a5e0e*/
      int v59 = *(unsigned __int8 *)(*(_DWORD *)(v57 + 372) + v58); /*0x4a5e18*/
    else
      v59 = *(unsigned __int16 *)(*(_DWORD *)(v57 + 372) + 2 * v58); /*0x4a5e25*/
    return (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))(g_DSurface_Hidden_2, a1, v59); /*0x4a5e33*/
  }
}
} // namespace gamemd
}

// 0x4A5EB0
namespace gamemd {
void * RenderTextLabel(int * a0, AbstractClass * aP1, int * a2, AbstractClass aP3)
{
{
  AbstractClass *v4; // edx
  CampaignScore *v6; // edi
  BitFont *v10; // ebx
  char ah1; // ah
  AbstractClass *a2a; // [esp+10h] [ebp-28h]
  int v19; // [esp+18h] [ebp-20h] BYREF
  int v20; // [esp+1Ch] [ebp-1Ch]
  char *v21; // [esp+20h] [ebp-18h]
  char *v22; // [esp+24h] [ebp-14h]
  _DWORD v23[4]; // [esp+28h] [ebp-10h] BYREF

  v6 = aP1; /*0x4a5ebe*/
  int * v5 = v5; /*0x4a5ec2*/
  v10 = (BitFont *)aP0; /*0x4a5ec8*/
  int v8 = *(_DWORD *)&aP1->__pad_0[4] + a2[1]; /*0x4a5ed3*/
  int v9 = *a2 + *(_DWORD *)aP1->__pad_0; /*0x4a5ed8*/
  a2a = v4; /*0x4a5ee8*/
  Text::Layout( /*0x4a5eec*/
    aP0,
    (unsigned __int16 *)v4,
    (AbstractClass *)&a2,
    (AbstractClass *)&aP1,
    *(AbstractClass **)&aP1->__pad_0[8]);
  ah1 = aP3[9]; /*0x4a5ef1*/
  if ( (aP3[9] & 1) != 0 ) /*0x4a5efc*/
  {
    v9 += (int)a2 / -2; /*0x4a5f07*/
    ah1 = aP3[9]; /*0x4a5f09*/
  }
  else if ( (aP3[9] & 2) != 0 ) /*0x4a5f12*/
  {
    v9 -= (int)a2; /*0x4a5f14*/
  }
  if ( ah1 >= 0 ) /*0x4a5f19*/
  {
    if ( (ah1 & 4) != 0 ) /*0x4a5f64*/
    {
      v21 = (char *)a2 + 2; /*0x4a5f6c*/
      v22 = &aP1->__pad_0[2]; /*0x4a5f7a*/
      v20 = v8 - 1; /*0x4a5f82*/
      v19 = v9 - 1; /*0x4a5f86*/
      (*(void (__thiscall **)(int *, int *, _DWORD))(*a0 + 20))(a0, &v19, 0); /*0x4a5f93*/
    }
  }
  else
  {
    v21 = (char *)a2 + 2; /*0x4a5f21*/
    v20 = v8 - 1; /*0x4a5f2c*/
    v22 = &aP1->__pad_0[2]; /*0x4a5f30*/
    v19 = v9 - 1; /*0x4a5f42*/
    int v11 = *a0; /*0x4a5f46*/
    *(_WORD *)&aP3[8] = 0; /*0x4a5f4c*/
    aP3[10] = 0; /*0x4a5f57*/
    a0->GetStringValue(&v19, &aP3[8], 60); /*0x4a5f5c*/
  }
  int v12 = *(_DWORD *)&v6->__pad_0[8]; /*0x4a5f98*/
  int v13 = *(_DWORD *)&v6->__pad_0[4]; /*0x4a5f9b*/
  v23[0] = *(_DWORD *)v6->__pad_0; /*0x4a5f9e*/
  int v14 = v12 + v23[0]; /*0x4a5fa2*/
  int v15 = *(_DWORD *)&v6->__pad_0[12]; /*0x4a5fa4*/
  v23[1] = v13; /*0x4a5fa7*/
  v23[2] = v14; /*0x4a5fb1*/
  v23[3] = v13 + v15; /*0x4a5fb5*/
  Char::Swap(v10, (ObjectClass *)1); /*0x4a5fb9*/
  TextGroup::SetRect(v10, (AbstractClass *)v23); /*0x4a5fc5*/
  Property::Set(v10, *(AbstractClass **)aP3[0]); /*0x4a5fd1*/
  FontRenderer::DrawText((AbstractClass *)v10, a0, (unsigned __int16 *)a2a, v9, v8, 0, 0); /*0x4a5fed*/
  int *v18; // [esp+14h] [ebp-24h]
  *v18 = v9; /*0x4a5ff7*/
  v18[1] = v8; /*0x4a5ff9*/
  return v18; /*0x4a5ff6*/
}
} // namespace gamemd
}

// 0x4A6010
namespace gamemd {
void globalHelper_0A6010()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd
}

// 0x4A6360
namespace gamemd {
ControlClass * * RenderTextLabelWordWrap(int * a1, const wchar_t * a2, int a3, unsigned int * a4, int * a5, short a6, int a7, int a8, unsigned int a9, unsigned int * a10)
{
{
  wchar_t *v12; // ebp
  wchar_t *v14; // eax
  BitFont *v15; // edx
  unsigned __int16 v16; // ax
  wchar_t *v18; // edi
  BitFont *v26; // [esp+10h] [ebp-420h]
  wchar_t Destination[512]; // [esp+30h] [ebp-400h] BYREF

  ControlClass *v10 = a1; /*0x4a636f*/
  int v11 = *a5; /*0x4a6371*/
  int v28 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wcscpy(Destination, a2); /*0x4a638e*/
    _DWORD * v24 = (_DWORD *)aP0; /*0x4a639c*/
    v12 = Destination; /*0x4a63a0*/
    unsigned int v13 = 0; /*0x4a63a4*/
    int v25 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      v14 = wcschr(v12, 9u); /*0x4a63be*/
      v15 = (BitFont *)v14; /*0x4a63c3*/
      v26 = (BitFont *)v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      v16 = *v12; /*0x4a63d5*/
      if ( *v12 ) /*0x4a63d5*/
      {
        int v17 = 0; /*0x4a63e2*/
        v18 = v12; /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v18; /*0x4a63eb*/
          v17 += FontClass::GetPixelData(v24, v16); /*0x4a63f3*/
          v16 = *v18; /*0x4a63f5*/
        }
        while ( *v18 && v17 + v13 < a9 ); /*0x4a6409*/
        if ( v17 + v13 >= a9 ) /*0x4a6417*/
        {
          v17 -= FontClass::GetPixelData(v24, *(v18 - 1)); /*0x4a642a*/
          *(v18 - 1) = 0; /*0x4a642c*/
          v25 = 0; /*0x4a6431*/
        }
        int v19 = a5[1]; /*0x4a6444*/
  _DWORD v29[2]; // [esp+20h] [ebp-410h] BYREF
        v29[0] = v13 + *a5; /*0x4a6450*/
        v29[1] = v19; /*0x4a645b*/
  int v30; // [esp+28h] [ebp-408h] BYREF
        int * v20 = RenderTextLabel(&v30, (int)v12, a3, a4, (int)v29, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v17; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v26; /*0x4a6491*/
        v28 = v20[1]; /*0x4a6498*/
      }
      if ( !v15 ) /*0x4a649e*/
        break; /*0x4a649e*/
      unsigned int * v21 = a10; /*0x4a64a0*/
      if ( a10 ) /*0x4a64a9*/
      {
        if ( v13 > *a10 ) /*0x4a64ad*/
        {
  unsigned int v22; // eax
          do /*0x4a64b7*/
          {
            v22 = v21[1]; /*0x4a64af*/
            ++v21; /*0x4a64b2*/
          }
          while ( v13 > v22 ); /*0x4a64b7*/
          a10 = v21; /*0x4a64b9*/
        }
        v13 = *v21; /*0x4a64c0*/
      }
      else
      {
        v13 = 10 * (5 * v13 + 5); /*0x4a64cb*/
      }
      v12 = (wchar_t *)&v15->__pad_0[2]; /*0x4a64d1*/
    }
    while ( v25 ); /*0x4a64d6*/
  }
  *v10 = v11; /*0x4a64e2*/
  v10[1] = v28; /*0x4a64e4*/
  return v10; /*0x4a64e9*/
}
} // namespace gamemd
}

// 0x4A65C0
namespace gamemd {
int * * sub_4A65C0(int * a1, int a2, int a3, unsigned int * a4, int a5, short a6, int a7, int a8, int a9, int a10)
{
{
  int *v12; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a65d0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a65fb*/
  }
  else
  {
    int v14 = Color::ConvertToRGB((unsigned __int8 *)(*((_DWORD *)BuildingTypeClass_AnimTable + a9) + 776), (int)&a9); /*0x4a6628*/
    LOWORD(v15[0]) = *(_WORD *)v14; /*0x4a6630*/
    BYTE2(v15[0]) = *(_BYTE *)(v14 + 2); /*0x4a663e*/
    v12 = RenderTextLabel( /*0x4a66b2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (BYTE1(v15[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (BYTE2(v15[0]) >> g_BitShift_Blue << g_BitShift_Blue)
          | (LOBYTE(v15[0]) >> g_BitShift_Green_0 << g_DDraw_BlueMask),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6602*/
  a1[1] = v12[1]; /*0x4a660a*/
  return a1; /*0x4a6604*/
}
} // namespace gamemd
}

// 0x4A66D0
namespace gamemd {
void globalHelper_0A66D0()
{
// (no pseudocode — ASM-only function)
} // namespace gamemd
}

// 0x4A67E0
namespace gamemd {
int * * sub_4A67E0(char a1, int a2)
{
{

  LOBYTE(a2) = a1; /*0x4a67e0*/
  BYTE1(a2) = a1; /*0x4a67e4*/
  DataGlobal_8A0150 = 0; /*0x4a67e6*/
  DataGlobal_8A0154 = 0; /*0x4a67ed*/
  int v2 = a2 << 16; /*0x4a67f2*/
  DataGlobal_8A0158 = 0; /*0x4a67f5*/
  LOWORD(v2) = a2; /*0x4a67fa*/
  *(int *)((char *)&DataGlobal_8A0158 + 3) = v2; /*0x4a6802*/
  HIBYTE(DataGlobal_8A015C) = a2; /*0x4a6808*/
  return &DataGlobal_8A0150; /*0x4a6813*/
}
} // namespace gamemd
}

// 0x4A6840
namespace gamemd {
AbstractClass * * E4Recv_4A6840::sub_4A6840(HWND hWnd, int a3, int a4, int a5)
{
{
  int i; // eax
  HDC DC; // edi

  *this = 0; /*0x4a6855*/
  this->M4 = 0; /*0x4a6857*/
  this->M8 = 0; /*0x4a685a*/
  this->M12 = 0; /*0x4a685d*/
  this->M16 = a3; /*0x4a6860*/
  this->M20 = a4; /*0x4a6863*/
  this->M24 = 0; /*0x4a6866*/
  this->M28 = 0; /*0x4a6869*/
  this->M32 = 0; /*0x4a686c*/
  _DWORD * v6 = __2_YAPAXI_Z(0x42Cu); /*0x4a686f*/
  this->M4 = v6; /*0x4a6879*/
  if ( !v6 ) /*0x4a687c*/
    goto LABEL_12; /*0x4a687c*/
  *v6 = 40; /*0x4a6882*/
  *(_DWORD *)(this->M4 + 4) = a3; /*0x4a688d*/
  *(_DWORD *)(this->M4 + 8) = -a4; /*0x4a6893*/
  *(_WORD *)(this->M4 + 12) = 1; /*0x4a689d*/
  *(_WORD *)(this->M4 + 14) = 8; /*0x4a68a6*/
  *(_DWORD *)(this->M4 + 16) = 0; /*0x4a68af*/
  *(_DWORD *)(this->M4 + 20) = 0; /*0x4a68b5*/
  *(_DWORD *)(this->M4 + 24) = 0; /*0x4a68bb*/
  *(_DWORD *)(this->M4 + 28) = 0; /*0x4a68c6*/
  *(_DWORD *)(this->M4 + 32) = 256; /*0x4a68cc*/
  *(_DWORD *)(this->M4 + 36) = 256; /*0x4a68d2*/
  for ( i = 0; i < 256; *(_BYTE *)(this->M4 + 4 * i + 39) = 0 ) /*0x4a68d5*/
  {
    _BYTE * v8 = (_BYTE *)(a5 + 2 * (i % 256) + i % 256); /*0x4a68ef*/
    ++i; /*0x4a68f1*/
    *(_BYTE *)(this->M4 + 4 * i + 36) = v8[2]; /*0x4a68fa*/
    *(_BYTE *)(this->M4 + 4 * i + 37) = v8[1]; /*0x4a6904*/
    *(_BYTE *)(this->M4 + 4 * i + 38) = *v8; /*0x4a690d*/
  }
  _DWORD * v9 = this + 12; /*0x4a6929*/
  DC = GetDC(hWnd); /*0x4a692e*/
  this->M8 = CreateDIBSection(DC, *((const BITMAPINFO **)this + 1), 0, (void **)this + 3, 0, 0); /*0x4a693f*/
  ReleaseDC(hWnd, DC); /*0x4a6942*/
  if ( !this->M8 ) /*0x4a6948*/
    goto LABEL_12; /*0x4a6948*/
  AbstractClass *v11 = this->M4; /*0x4a6951*/
  this->M16 = v11->vtable2; /*0x4a6957*/
  AbstractClass *v12 = this->M16; /*0x4a6962*/
  this->M20 = abs32(v11->vtable3); /*0x4a6965*/
  int v13 = v12 + 3; /*0x4a6968*/
  LOBYTE(v13) = (v12 + 3) & 0xFC; /*0x4a696b*/
  this->M28 = v13; /*0x4a696d*/
  if ( v11->vtable3 <= 0 ) /*0x4a6975*/
  {
    this->M24 = *v9; /*0x4a698b*/
  }
  else
  {
    this->M24 = *v9 + v12 * (this->M20 - 1); /*0x4a6981*/
    v13 = -v13; /*0x4a6984*/
  }
  this->M28 = v13; /*0x4a698e*/
  unsigned int v14 = abs32(v13); /*0x4a6998*/
  _DWORD * v15 = __2_YAPAXI_Z(0x20u); /*0x4a699f*/
  if ( v15 ) /*0x4a69a6*/
  {
    int v16 = this->M20; /*0x4a69a8*/
    AbstractClass *v17 = this->M12; /*0x4a69ab*/
    v15[2] = v16; /*0x4a69ae*/
    v15[1] = v14; /*0x4a69b9*/
    v15[3] = 0; /*0x4a69bc*/
    *v15 = &XSurface_Vtable; /*0x4a69bf*/
    v15[4] = 1; /*0x4a69c5*/
    Buffer::Init(v15 + 5, v17, v14 * v16); /*0x4a69cc*/
    *v15 = &BSurface_Vtable; /*0x4a69d1*/
  }
  else
  {
    v15 = 0; /*0x4a69d9*/
  }
  this->M32 = v15; /*0x4a69dd*/
  if ( !v15 ) /*0x4a69e0*/
LABEL_12:
    *this = 1; /*0x4a69e2*/
  return this; /*0x4a69e7*/
}
} // namespace gamemd
}

// 0x4A6CF0
namespace gamemd {
long long long Direction_InitOffsets()
{
{
  __int64 result; // rax

  double v0 = Math::SinCos(0.0174532925199433 * 270.0); /*0x4a6d03*/
  int v1 = Math::RoundToInt(v0 * 240.0); /*0x4a6d1f*/
  double v2 = Math::ArcTan2(0.0174532925199433 * 270.0); /*0x4a6d24*/
  DataGlobal_8A0180[0] = Math::RoundToInt(v2 * 240.0); /*0x4a6d40*/
  DataGlobal_8A0184[0] = v1; /*0x4a6d45*/
  double v3 = Math::SinCos(0.0174532925199433 * 292.0); /*0x4a6d4e*/
  int v4 = Math::RoundToInt(v3 * 240.0); /*0x4a6d6a*/
  double v5 = Math::ArcTan2(0.0174532925199433 * 292.0); /*0x4a6d6f*/
  DataGlobal_8A0188 = Math::RoundToInt(v5 * 240.0); /*0x4a6d8b*/
  DataGlobal_8A018C = v4; /*0x4a6d90*/
  double v6 = Math::SinCos(0.0174532925199433 * 315.0); /*0x4a6d99*/
  int v7 = Math::RoundToInt(v6 * 240.0); /*0x4a6db5*/
  double v8 = Math::ArcTan2(0.0174532925199433 * 315.0); /*0x4a6dba*/
  DataGlobal_8A0190 = Math::RoundToInt(v8 * 240.0); /*0x4a6dd6*/
  DataGlobal_8A0194 = v7; /*0x4a6ddb*/
  double v9 = Math::SinCos(0.0174532925199433 * 337.0); /*0x4a6de4*/
  int v10 = Math::RoundToInt(v9 * 240.0); /*0x4a6e00*/
  double v11 = Math::ArcTan2(0.0174532925199433 * 337.0); /*0x4a6e05*/
  DataGlobal_8A0198 = Math::RoundToInt(v11 * 240.0); /*0x4a6e19*/
  DataGlobal_8A019C = v10; /*0x4a6e1e*/
  double v12 = Math::SinCos(0.0); /*0x4a6e24*/
  int v13 = Math::RoundToInt(v12 * 240.0); /*0x4a6e38*/
  double v14 = Math::ArcTan2(0.0); /*0x4a6e3a*/
  DataGlobal_8A01A0 = Math::RoundToInt(v14 * 240.0); /*0x4a6e59*/
  DataGlobal_8A01A4 = v13; /*0x4a6e5e*/
  double v15 = Math::SinCos(0.0174532925199433 * 22.0); /*0x4a6e67*/
  int v16 = Math::RoundToInt(v15 * 240.0); /*0x4a6e83*/
  double v17 = Math::ArcTan2(0.0174532925199433 * 22.0); /*0x4a6e88*/
  DataGlobal_8A01A8 = Math::RoundToInt(v17 * 240.0); /*0x4a6ea4*/
  DataGlobal_8A01AC = v16; /*0x4a6ea9*/
  double v18 = Math::SinCos(0.0174532925199433 * 45.0); /*0x4a6eb2*/
  int v19 = Math::RoundToInt(v18 * 240.0); /*0x4a6ece*/
  double v20 = Math::ArcTan2(0.0174532925199433 * 45.0); /*0x4a6ed3*/
  DataGlobal_8A01B0 = Math::RoundToInt(v20 * 240.0); /*0x4a6eef*/
  DataGlobal_8A01B4 = v19; /*0x4a6ef4*/
  double v21 = Math::SinCos(0.0174532925199433 * 67.0); /*0x4a6efd*/
  int v22 = Math::RoundToInt(v21 * 240.0); /*0x4a6f19*/
  double v23 = Math::ArcTan2(0.0174532925199433 * 67.0); /*0x4a6f1e*/
  DataGlobal_8A01B8 = Math::RoundToInt(v23 * 240.0); /*0x4a6f3a*/
  DataGlobal_8A01BC = v22; /*0x4a6f3f*/
  double v24 = Math::SinCos(0.0174532925199433 * 90.0); /*0x4a6f48*/
  int v25 = Math::RoundToInt(v24 * 240.0); /*0x4a6f64*/
  double v26 = Math::ArcTan2(0.0174532925199433 * 90.0); /*0x4a6f69*/
  DataGlobal_8A01C0 = Math::RoundToInt(v26 * 240.0); /*0x4a6f85*/
  DataGlobal_8A01C4 = v25; /*0x4a6f8a*/
  double v27 = Math::SinCos(0.0174532925199433 * 112.0); /*0x4a6f93*/
  int v28 = Math::RoundToInt(v27 * 240.0); /*0x4a6faf*/
  double v29 = Math::ArcTan2(0.0174532925199433 * 112.0); /*0x4a6fb4*/
  DataGlobal_8A01C8 = Math::RoundToInt(v29 * 240.0); /*0x4a6fd0*/
  DataGlobal_8A01CC = v28; /*0x4a6fd5*/
  double v30 = Math::SinCos(0.0174532925199433 * 135.0); /*0x4a6fde*/
  int v31 = Math::RoundToInt(v30 * 240.0); /*0x4a6ffa*/
  double v32 = Math::ArcTan2(0.0174532925199433 * 135.0); /*0x4a6fff*/
  DataGlobal_8A01D0 = Math::RoundToInt(v32 * 240.0); /*0x4a701b*/
  DataGlobal_8A01D4 = v31; /*0x4a7020*/
  double v33 = Math::SinCos(0.0174532925199433 * 157.0); /*0x4a7029*/
  int v34 = Math::RoundToInt(v33 * 240.0); /*0x4a7045*/
  double v35 = Math::ArcTan2(0.0174532925199433 * 157.0); /*0x4a704a*/
  DataGlobal_8A01D8 = Math::RoundToInt(v35 * 240.0); /*0x4a7066*/
  DataGlobal_8A01DC = v34; /*0x4a706b*/
  double v36 = Math::SinCos(0.0174532925199433 * 180.0); /*0x4a7074*/
  int v37 = Math::RoundToInt(v36 * 240.0); /*0x4a7090*/
  double v38 = Math::ArcTan2(0.0174532925199433 * 180.0); /*0x4a7095*/
  DataGlobal_8A01E0 = Math::RoundToInt(v38 * 240.0); /*0x4a70b1*/
  DataGlobal_8A01E4 = v37; /*0x4a70b6*/
  double v39 = Math::SinCos(0.0174532925199433 * 202.0); /*0x4a70bf*/
  int v40 = Math::RoundToInt(v39 * 240.0); /*0x4a70db*/
  double v41 = Math::ArcTan2(0.0174532925199433 * 202.0); /*0x4a70e0*/
  DataGlobal_8A01E8 = Math::RoundToInt(v41 * 240.0); /*0x4a70fc*/
  DataGlobal_8A01EC = v40; /*0x4a7101*/
  double v42 = Math::SinCos(0.0174532925199433 * 235.0); /*0x4a710a*/
  int v43 = Math::RoundToInt(v42 * 240.0); /*0x4a7126*/
  double v44 = Math::ArcTan2(0.0174532925199433 * 235.0); /*0x4a712b*/
  DataGlobal_8A01F0 = Math::RoundToInt(v44 * 240.0); /*0x4a7147*/
  DataGlobal_8A01F4 = v43; /*0x4a714c*/
  double v45 = Math::SinCos(0.0174532925199433 * 257.0); /*0x4a7155*/
  int v46 = Math::RoundToInt(v45 * 240.0); /*0x4a7171*/
  double v47 = Math::ArcTan2(0.0174532925199433 * 257.0); /*0x4a7176*/
  result = Math::RoundToInt(v47 * 240.0); /*0x4a7184*/
  DataGlobal_8A01FC = v46; /*0x4a7189*/
  DataGlobal_8A01F8 = result; /*0x4a718f*/
  return result; /*0x4a7194*/
}
} // namespace gamemd
}

// 0x4A80D6
namespace gamemd {
int sub_4A80D6()
{
// positive sp value has been detected, the output may be wrong!
{
  HANDLE FileA; // eax
  DWORD Ticks; // [esp-110h] [ebp-120h]
  DWORD v12; // [esp-104h] [ebp-114h] BYREF
  DWORD v13[4]; // [esp-100h] [ebp-110h] BYREF
  CHAR v14[128]; // [esp-F0h] [ebp-100h] BYREF
  CHAR v15[128]; // [esp-70h] [ebp-80h] BYREF

  Timer::GetTicks(); /*0x4a80e2*/
  signed int v11 = a2; /*0x4a80fc*/
  int v4 = a1 + 65; /*0x4a8100*/
  Ticks = Timer::GetTicks(); /*0x4a8109*/
  wsprintfA(v14, g_Str_Trace__c__, a1 + 65); /*0x4a8120*/
  if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a814a*/
  {
LABEL_8:
    if ( !_strcmpi(aYr1, v15) ) /*0x4a81cd*/
    {
      int v7 = 0; /*0x4a81e4*/
      wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a81e6*/
      FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a8206*/
      if ( FileA != (HANDLE)-1 ) /*0x4a820b*/
      {
LABEL_12:
        CloseHandle(FileA); /*0x4a8241*/
        return 2; /*0x4a8257*/
      }
      while ( ++v7 < 2 ) /*0x4a820d*/
      {
        wsprintfA(v14, "%c:\\YR1.dsk", v4); /*0x4a821e*/
        FileA = CreateFileA(v14, 0x80000000, 1u, 0, 3u, 0x80u, 0); /*0x4a823a*/
        if ( FileA != (HANDLE)-1 ) /*0x4a823f*/
          goto LABEL_12; /*0x4a823f*/
      }
    }
  }
  else
  {
    while ( 1 ) /*0x4a8154*/
    {
      MSVQAnim *v5 = v11; /*0x4a8154*/
      if ( Ticks != -1 ) /*0x4a815b*/
      {
        signed int v6 = Timer::GetTicks() - Ticks; /*0x4a8166*/
        if ( v6 >= v11 ) /*0x4a816c*/
          return -1; /*0x4a816c*/
        v5 = v11 - v6; /*0x4a8172*/
      }
      if ( !v5 || GetLastError() != 21 ) /*0x4a8185*/
        break; /*0x4a8185*/
      wsprintfA(v14, g_Str_Trace__c__, v4); /*0x4a8196*/
      if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a81ba*/
        goto LABEL_8; /*0x4a81be*/
    }
  }
  return -1; /*0x4a8257*/
}
} // namespace gamemd
}

// 0x4A8EB0
namespace gamemd {
void GetBuildingPlacement(IUnknown * aP0, int a2, DisplayClass * aP2, IUnknown * aP3)
{
{
  int FoundationWidth; // eax
  IUnknown *v15; // eax
  IUnknown *v16; // esi
  __int16 v19[2]; // [esp+8h] [ebp-20h] BYREF
  IUnknown *aP0a; // [esp+2Ch] [ebp+4h]
  char aP2a; // [esp+34h] [ebp+Ch]
  IUnknown *aP3a; // [esp+38h] [ebp+10h]

  if ( a2 != *(_DWORD *)(HouseClass_Player.field_0 + 48) /*0x4a8f19*/
    || HouseClass_Player[45087]
    || !aP2
    || LOWORD(aP3->field_0) == *(_WORD *)&stru_89E138[8896]
    && HIWORD(aP3->field_0) == *(_WORD *)&stru_89E138[8898]
    || !aP0
    || (*(int (__thiscall **)(IUnknown *))(aP0->field_0 + 44))(aP0) != 7 )
  {
    return 1; /*0x4a905d*/
  }
  aP0a = (IUnknown *)BuildingTypeClass::GetFoundationHeight((int)aP0, 0); /*0x4a8f2c*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(aP0); /*0x4a8f30*/
  int v6 = SLOWORD(aP3->field_0); /*0x4a8f35*/
  int v7 = SHIWORD(aP3->field_0); /*0x4a8f38*/
  int v8 = FoundationWidth; /*0x4a8f3c*/
  int v9 = *(_DWORD *)&aP0->__pad_DFC[184] + 1; /*0x4a8f48*/
  int v20 = v8; /*0x4a8f4b*/
  int v23 = v7; /*0x4a8f54*/
  int v10 = v6 - v9 + v8 + 2 * v9; /*0x4a8f58*/
  int v11 = v7 - v9; /*0x4a8f5a*/
  aP2a = 0; /*0x4a8f61*/
  aP3a = (IUnknown *)(v6 - v9); /*0x4a8f66*/
  int v22 = v10; /*0x4a8f6a*/
  if ( v6 - v9 < v10 ) /*0x4a8f6e*/
  {
    char * v12 = (char *)aP0a + 2 * v9 + v11; /*0x4a8f74*/
    char * v21 = v12; /*0x4a8f76*/
    do /*0x4a9048*/
    {
      int v13 = v11; /*0x4a8f7c*/
      if ( v11 < (int)v12 ) /*0x4a8f7e*/
      {
        do /*0x4a9033*/
        {
          v19[0] = (__int16)aP3a; /*0x4a8f90*/
          v19[1] = v13; /*0x4a8f95*/
          if ( (__int16)aP3a < v6 || (__int16)aP3a >= v6 + v20 || (__int16)v13 < v23 || (__int16)v13 >= (int)aP0a + v23 ) /*0x4a8fb9*/
          {
            _DWORD * v14 = CellCoord::To_CellObj(&stru_87C374[13428], v19); /*0x4a8fc5*/
            v15 = (IUnknown *)Cell::IsBridge(v14); /*0x4a8fcc*/
            v16 = v15; /*0x4a8fd1*/
            if ( v15 ) /*0x4a8fd5*/
            {
              _DWORD * v17 = (_DWORD *)v15->field_21C; /*0x4a8fd7*/
              if ( v17[12] == a2 && *(_BYTE *)(v15->field_520 + 5455) ) /*0x4a8fec*/
                aP2a = 1; /*0x4a8ff5*/
              if ( HouseClass_Player[29976] /*0x4a900e*/
                && (unsigned __int8)HouseClass::IsAlliedWith(v17, *(IUnknown **)&HouseClass_Array->__pad_0[4 * a2]) )
              {
                if ( *(_BYTE *)(v16->field_520 + 5456) ) /*0x4a901d*/
                  aP2a = 1; /*0x4a9027*/
              }
            }
          }
          v12 = v21; /*0x4a902c*/
          ++v13; /*0x4a9030*/
        }
        while ( v13 < (int)v21 ); /*0x4a9033*/
        v10 = v22; /*0x4a9039*/
      }
      aP3a = (IUnknown *)((char *)aP3a + 1); /*0x4a9044*/
    }
    while ( (int)aP3a < v10 ); /*0x4a9048*/
  }
  return aP2a; /*0x4a9054*/
}
} // namespace gamemd
}

// 0x4A9070
namespace gamemd {
void ProcessDataBuildingTypeClass(unsigned int * a0, DisplayClass * aP1, DisplayClass * aP2, short * a3)
{
{
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  DisplayClass *v8; // eax
  int v10; // edi
  int GroundHeight; // [esp+18h] [ebp-14h]
  int v14; // [esp+20h] [ebp-Ch]
  DisplayClass *aP1a; // [esp+34h] [ebp+8h]
  DisplayClass *aP2a; // [esp+38h] [ebp+Ch]

  if ( aP1 != *(DisplayClass **)(HouseClass_Player.field_0 + 48) /*0x4a90c0*/
    || HouseClass_Player[45087]
    || !aP2
    || *a3 == *(_WORD *)&stru_89E138[8896] && a3[1] == *(_WORD *)&stru_89E138[8898] )
  {
    return 1; /*0x4a90c0*/
  }
  if ( !a0 ) /*0x4a90cc*/
    return 1; /*0x4a90cc*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a0 + 44))(a0) != 7 ) /*0x4a90dc*/
    return 1; /*0x4a90dc*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a0, 0); /*0x4a90ed*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a0); /*0x4a90ef*/
  int v6 = *a3; /*0x4a90f4*/
  int v7 = a3[1]; /*0x4a90f7*/
  v8 = (DisplayClass *)(v6 + FoundationWidth); /*0x4a90fb*/
  v14 = v7; /*0x4a90fd*/
  int v9 = v6; /*0x4a9103*/
  aP2a = v8; /*0x4a9105*/
  if ( v6 >= (int)v8 ) /*0x4a9109*/
    return 1; /*0x4a9109*/
  aP1a = (DisplayClass *)(v7 + FoundationHeight); /*0x4a9111*/
  while ( 1 ) /*0x4a9119*/
  {
    v10 = v7; /*0x4a9119*/
    if ( v7 < (int)aP1a ) /*0x4a911d*/
      break; /*0x4a911d*/
LABEL_14:
    if ( ++v9 >= (int)v8 ) /*0x4a917e*/
      return 1; /*0x4a917e*/
  }
  while ( 1 ) /*0x4a913d*/
  {
  _DWORD v12[2]; // [esp+10h] [ebp-1Ch] BYREF
    v12[1] = ((__int16)v10 << 8) + 128; /*0x4a913d*/
    v12[0] = ((__int16)v9 << 8) + 128; /*0x4a9146*/
    GroundHeight = 0; /*0x4a914a*/
    GroundHeight = Cell::GetGroundHeight((IUnknown *)v12); /*0x4a9157*/
    if ( Cell::IsPassable((IUnknown *)v12) ) /*0x4a9161*/
      return a0[918] != 0; /*0x4a919f*/
    if ( ++v10 >= (int)aP1a ) /*0x4a9171*/
    {
      v7 = v14; /*0x4a9173*/
      v8 = aP2a; /*0x4a9177*/
      goto LABEL_14; /*0x4a9177*/
    }
  }
}
} // namespace gamemd
}

// 0x4A9770
namespace gamemd {
void RemoveTarget(IUnknown * aP0)
{
{
  IUnknown *v1; // edi
  v1 = aP0; /*0x4a9772*/
  if ( aP0 ) /*0x4a9778*/
  {
    int v2 = *(_DWORD *)&aP0->__pad_8C[8]; /*0x4a977e*/
    if ( v2 != -1 ) /*0x4a9787*/
    {
      int v3 = 3 * v2; /*0x4a978d*/
      int v4 = 8 * v3 + 9044832; /*0x4a979b*/
      int v5 = (*(int (__thiscall **)(int, IUnknown **))(*(_DWORD *)&stru_89E138[5296][8 * v3 + 3448] + 16))(v4, &aP0); /*0x4a97a9*/
      if ( v5 != -1 ) /*0x4a97af*/
      {
        int v6 = *(_DWORD *)(v4 + 16); /*0x4a97b1*/
        if ( v5 < v6 ) /*0x4a97b6*/
        {
          int v7 = v6 - 1; /*0x4a97b8*/
          for ( *(_DWORD *)(v4 + 16) = v7; /*0x4a97be*/
                v5 < *(_DWORD *)(v4 + 16);
                *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5) )
          {
            ++v5; /*0x4a97c3*/
          }
          *(_DWORD *)&v1->__pad_8C[8] = -1; /*0x4a97d2*/
        }
      }
      if ( *(_DWORD *)&v1->__pad_8C[8] != -1 ) /*0x4a97e3*/
      {
        char * v8 = &stru_89E138[8760]; /*0x4a97e5*/
        do /*0x4a982a*/
        {
          while ( 1 ) /*0x4a97ea*/
          {
            int v9 = *((_DWORD *)v8 - 4); /*0x4a97ea*/
            aP0 = v1; /*0x4a97f4*/
            int v10 = (*(int (__thiscall **)(char *, IUnknown **))(v9 + 16))(v8 - 16, &aP0); /*0x4a97f9*/
            if ( v10 == -1 || v10 >= *(_DWORD *)v8 ) /*0x4a9805*/
              break; /*0x4a9805*/
            int v11 = *(_DWORD *)v8 - 1; /*0x4a9807*/
            for ( *(_DWORD *)v8 = v11; /*0x4a980c*/
                  v10 < *(_DWORD *)v8;
                  *(_DWORD *)(*((_DWORD *)v8 - 3) + 4 * v10 - 4) = *(_DWORD *)(*((_DWORD *)v8 - 3) + 4 * v10) )
            {
              ++v10; /*0x4a9811*/
            }
          }
          v8 += 24; /*0x4a9821*/
        }
        while ( (int)v8 < (int)&stru_89E138[8880] ); /*0x4a982a*/
        *(_DWORD *)&v1->__pad_8C[8] = -1; /*0x4a982c*/
      }
    }
  }
}
} // namespace gamemd
}

// 0x4AA2B0
namespace gamemd {
unsigned char * sub_4AA2B0(unsigned char * a1)
{
{
  int v2; // ebp
  int v3; // eax
  _BYTE v8[5]; // [esp+3h] [ebp-5h]

  v8[4] = 0; /*0x4aa2b7*/
  *(_DWORD *)v8 = a1 == 0; /*0x4aa2c8*/
  _DWORD * v1 = &DataGlobal_820030; /*0x4aa2d1*/
  while ( 1 ) /*0x4aa2d8*/
  {
    v2 = 0; /*0x4aa2d8*/
    v3 = 6 * *v1; /*0x4aa2dd*/
    if ( DataGlobal_8A0370[v3] > 0 ) /*0x4aa2e8*/
      break; /*0x4aa2e8*/
LABEL_12:
    if ( (int)++v1 >= (int)DataGlobal_82003C ) /*0x4aa35b*/
      return *(_BYTE **)&v8[1]; /*0x4aa36c*/
  }
  while ( 1 )
  {
    int v4 = DataGlobal_8A0364[v3]; /*0x4aa2ea*/
    _BYTE * v5 = *(_BYTE **)(v4 + 4 * v2); /*0x4aa2f0*/
    if ( !v5 ) /*0x4aa2f5*/
      goto LABEL_11; /*0x4aa2f5*/
    _BYTE * v6 = (v5[20] & 1) != 0 ? v5 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 100))(*(_DWORD *)(v4 + 4 * v2)) /*0x4aa318*/
      || !v6
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 316))(v6) )
    {
      goto LABEL_11; /*0x4aa320*/
    }
    if ( !*(_DWORD *)&v8[1] ) /*0x4aa328*/
      *(_DWORD *)&v8[1] = v5; /*0x4aa32a*/
    if ( v8[0] ) /*0x4aa334*/
      return v5; /*0x4aa369*/
    v8[0] = a1 == v5; /*0x4aa33c*/
LABEL_11:
    ++v2; /*0x4aa341*/
    v3 = 6 * *v1; /*0x4aa347*/
    if ( v2 >= DataGlobal_8A0370[v3] ) /*0x4aa350*/
      goto LABEL_12; /*0x4aa350*/
  }
}
} // namespace gamemd
}

// 0x4AA380
namespace gamemd {
unsigned char * sub_4AA380(unsigned char * a1)
{
{
  int v2; // ebp
  _BYTE v6[5]; // [esp+3h] [ebp-5h]

  v6[4] = 0; /*0x4aa387*/
  *(_DWORD *)v6 = a1 == 0; /*0x4aa398*/
  _DWORD * v1 = &DataGlobal_82003C; /*0x4aa3a1*/
  while ( 1 ) /*0x4aa3b2*/
  {
    v2 = DataGlobal_8A0370[6 * *v1] - 1; /*0x4aa3b2*/
    if ( v2 >= 0 ) /*0x4aa3b3*/
      break; /*0x4aa3b3*/
LABEL_12:
    if ( (int)++v1 >= (int)&DataGlobal_820048 ) /*0x4aa41d*/
      return *(_BYTE **)&v6[1]; /*0x4aa42a*/
  }
  while ( 1 )
  {
    _BYTE * v3 = *(_BYTE **)(DataGlobal_8A0364[6 * *v1] + 4 * v2); /*0x4aa3c1*/
    if ( !v3 ) /*0x4aa3c6*/
      goto LABEL_11; /*0x4aa3c6*/
    _BYTE * v4 = (v3[20] & 1) != 0 ? v3 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 100))(v3) /*0x4aa3e8*/
      || !v4
      || !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 316))(v4) )
    {
      goto LABEL_11; /*0x4aa3f0*/
    }
    if ( !*(_DWORD *)&v6[1] ) /*0x4aa3f8*/
      *(_DWORD *)&v6[1] = v3; /*0x4aa3fa*/
    if ( v6[0] ) /*0x4aa404*/
      return v3; /*0x4aa427*/
    v6[0] = a1 == v3; /*0x4aa40c*/
LABEL_11:
    if ( --v2 < 0 ) /*0x4aa412*/
      goto LABEL_12; /*0x4aa412*/
  }
}
} // namespace gamemd
}

// 0x4AC4F0
namespace gamemd {
ScenarioClass * * sub_4AC4F0()
{
{
  int v6; // ecx
  void *result; // eax
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+Ch] [ebp-18h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  int v12; // [esp+14h] [ebp-10h]
  int v0 = 0; /*0x4ac4fb*/
  int v1 = 0; /*0x4ac4fd*/
  int v2 = 0; /*0x4ac4ff*/
  v10 = 0; /*0x4ac503*/
  v11 = 0; /*0x4ac507*/
  v12 = 0; /*0x4ac50b*/
  if ( g_SidebarState > 0 ) /*0x4ac50f*/
  {
    char * v3 = (char *)g_TechnoClass_Count; /*0x4ac512*/
    int v8 = g_SidebarState; /*0x4ac519*/
    do /*0x4ac567*/
    {
      int v4 = *(_DWORD *)v3; /*0x4ac51d*/
      if ( !*(_BYTE *)(*(_DWORD *)v3 + 129) && *(_BYTE *)(v4 + 1050) ) /*0x4ac52a*/
      {
        v1 += *(_DWORD *)(v4 + 156); /*0x4ac53e*/
        v2 += *(_DWORD *)(v4 + 160); /*0x4ac543*/
        int v5 = *(_DWORD *)(v4 + 164); /*0x4ac549*/
        v10 = v1; /*0x4ac54c*/
        v11 = v2; /*0x4ac552*/
        v12 += v5; /*0x4ac556*/
        ++v0; /*0x4ac55a*/
      }
      v3 += 4; /*0x4ac55f*/
      --v8; /*0x4ac563*/
    }
    while ( v8 ); /*0x4ac567*/
  }
  v12 = 0; /*0x4ac56d*/
  if ( v0 ) /*0x4ac575*/
  {
    v10 = v1 / v0; /*0x4ac57a*/
    v6 = v2 / v0; /*0x4ac583*/
    v11 = v2 / v0; /*0x4ac58a*/
    v12 = 0 / v0; /*0x4ac58e*/
  }
  else
  {
  _DWORD v13[3]; // [esp+18h] [ebp-Ch] BYREF
    v10 = *HouseClass::GetStartCoords(HouseClass_Player, v13); /*0x4ac5aa*/
    v6 = HouseClass::GetStartCoords(HouseClass_Player, v13)[1]; /*0x4ac5ba*/
    v11 = v6; /*0x4ac5bd*/
  }
  LOWORD(v9) = v10 / 256; /*0x4ac5d3*/
  HIWORD(v9) = v6 / 256; /*0x4ac5e6*/
  *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466) = v9; /*0x4ac5f4*/
  *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13466); /*0x4ac605*/
  *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13462); /*0x4ac616*/
  *(_DWORD *)((char *)g_ScenarioClass_Instance + 13454) = *(_DWORD *)((char *)g_ScenarioClass_Instance + 13458); /*0x4ac627*/
  result = g_ScenarioClass_Instance; /*0x4ac62d*/
  *((_DWORD *)g_ScenarioClass_Instance + 132) = *((_DWORD *)g_ScenarioClass_Instance + 131); /*0x4ac638*/
  if ( g_TacticalClass_Instance ) /*0x4ac646*/
    return (void *)Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v10); /*0x4ac64d*/
  return result; /*0x4ac5c5*/
}
} // namespace gamemd
}

// 0x4AE750
namespace gamemd {
AbstractClass * * DispatchSelectionWaypointMove()
{
{
  _DWORD **v4; // eax
  CellStruct *v6; // ecx
  int i; // esi
  CellStruct *v13; // ebp
  LOBYTE(v4) = ArmageddonMode; /*0x4ae753*/
  unsigned int v27 = -1; /*0x4ae761*/
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  LOBYTE(v26) = 0; /*0x4ae765*/
  if ( ArmageddonMode ) /*0x4ae769*/
    return (char)v4; /*0x4ae769*/
  int v28 = *(_DWORD *)HouseClass::ClampToUsableCell(&v28, &a2); /*0x4ae78f*/
  _DWORD * v5 = Waypoint::FindByCell((char *)HouseClass_Player, &a2); /*0x4ae794*/
  if ( v5 ) /*0x4ae79b*/
    WaypointClass::FindOrCreate((char *)HouseClass_Player, (int)v5, &v27, &v26); /*0x4ae7ae*/
  v6 = g_SelectionManager; /*0x4ae7b3*/
  v4 = (_DWORD **)g_ObjectClass_CurrentCount; /*0x4ae7b9*/
  for ( i = 0; i < (int)g_SelectionManager; ++i ) /*0x4ae7c4*/
  {
    (*(void (__thiscall **)(_DWORD *, unsigned int, int))(*v4[i] + 420))(v4[i], v27, v26); /*0x4ae7d7*/
    v4 = (_DWORD **)g_ObjectClass_CurrentCount; /*0x4ae7dd*/
    int v8 = *((_DWORD *)g_ObjectClass_CurrentCount + i); /*0x4ae7e2*/
    if ( v8 && (*(_BYTE *)(v8 + 20) & 4) != 0 ) /*0x4ae7f6*/
    {
      *(_BYTE *)(v8 + 1072) = 0; /*0x4ae7fa*/
      v4 = (_DWORD **)g_ObjectClass_CurrentCount; /*0x4ae800*/
    }
    v6 = g_SelectionManager; /*0x4ae805*/
  }
  int v9 = a1; /*0x4ae810*/
  if ( a1 ) /*0x4ae816*/
  {
    int v10 = 0; /*0x4ae818*/
    if ( (int)v6 > 0 ) /*0x4ae81c*/
    {
      while ( 1 ) /*0x4ae82d*/
      {
        int * v11 = v4[v10]; /*0x4ae82d*/
        a1 = *v11; /*0x4ae836*/
        int v12 = (*(int (__thiscall **)(int *, int, _DWORD, int, _DWORD))(a1 + 116))(v11, v9, 0, v9, 0); /*0x4ae83a*/
        (*(void (__thiscall **)(int *, int))(a3 + 324))(v11, v12); /*0x4ae844*/
        LOBYTE(v4) = (_BYTE)g_SelectionManager; /*0x4ae84a*/
        ++v10; /*0x4ae851*/
        g_MoveFeedback = 0; /*0x4ae852*/
        if ( v10 >= (int)g_SelectionManager ) /*0x4ae85a*/
          break; /*0x4ae85a*/
        v4 = (_DWORD **)g_ObjectClass_CurrentCount; /*0x4ae824*/
      }
      g_MoveFeedback = 1; /*0x4ae85f*/
      return (char)v4; /*0x4ae86a*/
    }
LABEL_32:
    g_MoveFeedback = 1; /*0x4ae992*/
    return (char)v4; /*0x4ae993*/
  }
  if ( a3 == 1 || a3 == 51 ) /*0x4ae87d*/
  {
    int v21 = 0; /*0x4ae94e*/
    if ( (int)v6 > 0 ) /*0x4ae952*/
    {
      while ( 1 ) /*0x4ae96b*/
      {
        _DWORD * v22 = v4[v21]; /*0x4ae96b*/
        int v23 = *v22; /*0x4ae972*/
  int v24; // eax
        v24 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v22 + 112))( /*0x4ae976*/
                v22,
                &a2,
                0,
                0,
                &a2,
                &a2,
                0);
        (*(void (__thiscall **)(_DWORD *, int))(v23 + 320))(v22, v24); /*0x4ae97c*/
        LOBYTE(v4) = (_BYTE)g_SelectionManager; /*0x4ae982*/
        ++v21; /*0x4ae987*/
        g_MoveFeedback = 0; /*0x4ae98a*/
        if ( v21 >= (int)g_SelectionManager ) /*0x4ae990*/
          break; /*0x4ae990*/
        v4 = (_DWORD **)g_ObjectClass_CurrentCount; /*0x4ae956*/
      }
    }
    goto LABEL_32; /*0x4ae990*/
  }
  if ( a3 == 2 ) /*0x4ae886*/
  {
    v13 = v6; /*0x4ae888*/
    int v14 = 0; /*0x4ae88a*/
    if ( (int)v6 <= 0 ) /*0x4ae88e*/
      goto LABEL_32; /*0x4ae88e*/
    while ( 1 ) /*0x4ae8a8*/
    {
      int * v15 = v4[v14]; /*0x4ae8a8*/
      a1 = *v15; /*0x4ae8b6*/
  int v16; // eax
      v16 = (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(a1 + 112))( /*0x4ae8ba*/
              v15,
              &a2,
              0,
              0,
              &a2,
              &a2,
              0);
      LOBYTE(v4) = (*(int (__thiscall **)(int *, int))(a4 + 320))(v15, v16); /*0x4ae8c4*/
      ++v14; /*0x4ae8cc*/
      g_MoveFeedback = 0; /*0x4ae8cf*/
      if ( v14 >= (int)v13 ) /*0x4ae8d5*/
        break; /*0x4ae8d5*/
      v4 = (_DWORD **)g_ObjectClass_CurrentCount; /*0x4ae896*/
    }
    g_MoveFeedback = 1; /*0x4ae8da*/
  }
  else
  {
    int v17 = 0; /*0x4ae8e8*/
    if ( (int)v6 <= 0 ) /*0x4ae8ec*/
      goto LABEL_32; /*0x4ae8ec*/
    while ( 1 ) /*0x4ae8fc*/
    {
      a1 = -1; /*0x4ae8fc*/
      _DWORD * v18 = v4[v17]; /*0x4ae916*/
      int v19 = *v18; /*0x4ae91d*/
  int v20; // eax
      v20 = (*(int (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, int *, int *, _DWORD))(*v18 + 112))( /*0x4ae921*/
              v18,
              &a2,
              0,
              0,
              &a2,
              &a1,
              0);
      (*(void (__thiscall **)(_DWORD *, int))(v19 + 320))(v18, v20); /*0x4ae927*/
      LOBYTE(v4) = (_BYTE)g_SelectionManager; /*0x4ae92d*/
      ++v17; /*0x4ae932*/
      g_MoveFeedback = 0; /*0x4ae935*/
      if ( v17 >= (int)g_SelectionManager ) /*0x4ae93b*/
        break; /*0x4ae93b*/
      v4 = (_DWORD **)g_ObjectClass_CurrentCount; /*0x4ae8f4*/
    }
    g_MoveFeedback = 1; /*0x4ae940*/
  }
  return (char)v4; /*0x4ae85e*/
}
} // namespace gamemd
}

// 0x4AEA20
namespace gamemd {
void sub_4AEA20()
{
{
  int result; // eax

  if ( a2 == -1 ) /*0x4aea27*/
    int v2 = 0; /*0x4aea29*/
  else
    v2 = 8 * (a2 % 12); /*0x4aea35*/
  int v3 = 0; /*0x4aea46*/
  int v4 = *(_DWORD *)(DataGlobal_87F6C8 + 372) + 2; /*0x4aea48*/
  do /*0x4aeac1*/
  {
    int v5 = (v3 + v2) % 256; /*0x4aea5b*/
    char * v6 = &DataGlobal_885180[3 * v5]; /*0x4aea5c*/
    v4 += 2; /*0x4aea63*/
    LOWORD(v5) = (unsigned __int8)((unsigned __int8)v6[2] >> g_BitShift_Blue); /*0x4aea83*/
    LOWORD(a1) = (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)v6) >> g_BitMask_Blue); /*0x4aea97*/
    int v7 = a1 << g_BitMask_Green; /*0x4aea9b*/
    int v8 = v7 | (v5 << g_BitShift_Blue); /*0x4aeaa3*/
    LOWORD(v7) = (unsigned __int8)((unsigned __int8)*(_WORD *)v6 >> g_BitShift_Green_0); /*0x4aeab1*/
    a1 = v7 << g_DDraw_BlueMask; /*0x4aeab5*/
    result = a1 | v8; /*0x4aeab7*/
    ++v3; /*0x4aeab9*/
    *(_WORD *)(v4 - 2) = result; /*0x4aeaba*/
  }
  while ( v3 < 8 ); /*0x4aeac1*/
  return result; /*0x4aeac6*/
}
} // namespace gamemd
}

// 0x4AED70
namespace gamemd {
void DrawToSurfaceSHP(int a1, int a2, ConvertClass * aP2, unsigned int arg4, ConvertClass * aP4, ConvertClass * aP5, ConvertClass * aP6, ConvertClass * aP7, int aP7a, ConvertClass * aP9, ConvertClass * aP10, ConvertClass * aP11, int a13, ConvertClass * aP13, int a15, ConvertClass * aP15)
{
{
  AbstractClass *v16; // edi
  IUnknown **v20; // eax
  int SubFile; // eax
  ConvertClass *v25; // esi
  ObjectClass *v28; // esi
  int ecx19; // ecx
  IUnknown *v31; // eax
  TechnoClass *v30; // eax
  XSurface *SHPFrame; // eax
  AbstractClass *v32; // [esp-8h] [ebp-A8h]
  ObjectClass *v35; // [esp+Ch] [ebp-94h]
  ObjectClass *v36; // [esp+Ch] [ebp-94h]
  int var90a; // [esp+10h] [ebp-90h]
  ObjectClass *var90; // [esp+10h] [ebp-90h]
  ObjectClass *v39; // [esp+14h] [ebp-8Ch]
  ObjectClass *v40; // [esp+14h] [ebp-8Ch]
  XSurface a4; // [esp+18h] [ebp-88h] BYREF
  XSurface var78; // [esp+28h] [ebp-78h] BYREF
  XSurface *v41; // [esp+38h] [ebp-68h] BYREF
  XSurface *v50; // [esp+3Ch] [ebp-64h]
  int Height; // [esp+40h] [ebp-60h]
  TechnoClass *v52; // [esp+44h] [ebp-5Ch]
  TechnoClass *aP12; // [esp+48h] [ebp-58h]
  XSurface *v55; // [esp+50h] [ebp-50h]
  _DWORD *var44; // [esp+5Ch] [ebp-44h]
  IUnknown *v59; // [esp+60h] [ebp-40h] BYREF
  IUnknown *var3C; // [esp+64h] [ebp-3Ch]
  XSurface aP3; // [esp+70h] [ebp-30h] BYREF

  v16 = aP2; /*0x4aed79*/
  var44 = (_DWORD *)a2; /*0x4aed86*/
  v55 = (XSurface *)a1; /*0x4aed8a*/
  if ( aP2 ) /*0x4aed8e*/
  {
    if ( *(_WORD *)aP2->__pad_0 == 0xFFFF ) /*0x4aed98*/
    {
      if ( !aP2->__pad_6[10] ) /*0x4aed9a*/
        House::Constructor((char **)aP2); /*0x4aeda3*/
      v16 = *(ConvertClass **)&aP2->__pad_6[6]; /*0x4aeda8*/
    }
    if ( v16 ) /*0x4aedad*/
    {
      _DWORD * v19 = (_DWORD *)(*(int (__thiscall **)(int, XSurface **))(*(_DWORD *)a1 + 120))(a1, &v41); /*0x4aedbc*/
  _DWORD v58[4]; // [esp+90h] [ebp-10h] BYREF
      v58[0] = *v19; /*0x4aedc1*/
      v58[1] = v19[1]; /*0x4aedcf*/
      v58[2] = v19[2]; /*0x4aedd9*/
      v58[3] = v19[3]; /*0x4aedec*/
      v59 = *(IUnknown **)aP5->__pad_0; /*0x4aedf5*/
      var3C = *(IUnknown **)&aP5->field_2[2]; /*0x4aedfc*/
      int v53 = *(_DWORD *)&aP5->__pad_6[2]; /*0x4aee03*/
      int v54 = *(_DWORD *)&aP5->__pad_6[6]; /*0x4aee12*/
      v20 = (IUnknown **)ClipRectIntersection((IUnknown *)&v41, (IUnknown *)aP5, (IUnknown *)v58, 0, 0); /*0x4aee1a*/
      v59 = *v20; /*0x4aee23*/
      var3C = v20[1]; /*0x4aee2a*/
      v53 = (int)v20[2]; /*0x4aee31*/
      int v21 = (int)v20[3]; /*0x4aee35*/
      v54 = v21; /*0x4aee3a*/
      if ( v53 > 0 && v21 > 0 ) /*0x4aee46*/
      {
        *(_DWORD *)(a2 + 380) = aP7; /*0x4aee5a*/
        v35 = *(ObjectClass **)aP4->__pad_0; /*0x4aee75*/
        v39 = *(ObjectClass **)&aP4->field_2[2]; /*0x4aee79*/
        a4 = *(XSurface *)Building::GetFoundationSize(&v41, arg4); /*0x4aee84*/
        SubFile = MixFileClass::GetSubFile((char **)v16, arg4); /*0x4aeea0*/
        int v23 = *(__int16 *)&v16->field_2[2]; /*0x4aeea9*/
        int v24 = SubFile; /*0x4aeeb1*/
        int v48 = *(__int16 *)v16->field_2; /*0x4aeeb7*/
        int v49 = v23; /*0x4aeec1*/
        Surface::Construct(&aP3, (ObjectClass *)a4.Height, (IUnknown *)a4.LockCount); /*0x4aeec7*/
        aP3.LockCount = 0; /*0x4aeed8*/
        *(_DWORD *)aP3[0] = &XSurface_Vtable; /*0x4aeee3*/
        int v56 = 1; /*0x4aeeeb*/
  _DWORD v57[3]; // [esp+84h] [ebp-1Ch] BYREF
        Buffer::Init(v57, v24, (AbstractClass *)(a4.LockCount * a4.Height)); /*0x4aeef6*/
        *(_DWORD *)aP3[0] = &BSurface_Vtable; /*0x4aeefb*/
        v25 = aP15; /*0x4aef11*/
        aP12 = (TechnoClass *)a15; /*0x4aef18*/
        int v46 = (int)aP15; /*0x4aef1e*/
        if ( a13 ) /*0x4aef22*/
        {
          var78 = *(XSurface *)Building::GetFoundationSize(&v41, (unsigned int)aP13); /*0x4aef3e*/
          v28 = (ObjectClass *)__2_YAPAXI_Z(0x20u); /*0x4aef5e*/
          if ( v28 ) /*0x4aef65*/
          {
            var90a = MixFileClass::GetSubFile((char **)a13, (unsigned int)aP13); /*0x4aef7c*/
            Surface::Construct(v28, (ObjectClass *)var78.Height, (IUnknown *)var78.LockCount); /*0x4aef86*/
            *(_DWORD *)&v28->__pad_0[12] = 0; /*0x4aef8b*/
            *(_DWORD *)v28->__pad_0 = &XSurface_Vtable; /*0x4aef92*/
            v32 = (AbstractClass *)(var78.LockCount * var78.Height); /*0x4aefa5*/
            v28->uniqueId = 1; /*0x4aefaa*/
            Buffer::Init(&v28->abstractFlags, var90a, v32); /*0x4aefb1*/
            *(_DWORD *)v28->__pad_0 = &BSurface_Vtable; /*0x4aefb6*/
            var90 = v28; /*0x4aefbc*/
            v25 = (ConvertClass *)v46; /*0x4aefc0*/
          }
          else
          {
            v25 = (ConvertClass *)v46; /*0x4aefc6*/
            var90 = 0; /*0x4aefca*/
          }
        }
        else
        {
          var78 = *(XSurface *)&stru_89E138[9744]; /*0x4aefe5*/
          var90 = 0; /*0x4aefee*/
        }
        if ( (BYTE1(aP6) & 2) != 0 ) /*0x4af00c*/
        {
          v35 = (ObjectClass *)((char *)v35 + v48 / -2); /*0x4af027*/
          v39 = (ObjectClass *)((char *)v39 + v49 / -2); /*0x4af034*/
        }
        if ( a13 ) /*0x4af03a*/
        {
          aP12 = (TechnoClass *)(a15 - (v48 / 2 - *(_DWORD *)a4[0])); /*0x4af05e*/
          v25 = (ConvertClass *)((char *)v25 - (v49 / 2 - a4.Width)); /*0x4af062*/
        }
        v36 = (ObjectClass *)((char *)v35 + *(_DWORD *)a4[0]); /*0x4af072*/
        v40 = (ObjectClass *)((char *)v39 + a4.Width); /*0x4af07c*/
        *(_DWORD *)a4[0] = 0; /*0x4af084*/
        a4.Width = 0; /*0x4af088*/
        if ( !a13 ) /*0x4af08c*/
          goto LABEL_21; /*0x4af08c*/
        aP12 = (TechnoClass *)((char *)aP12 + *(_DWORD *)var78[0]); /*0x4af0a0*/
        v25 = (ConvertClass *)((char *)v25 + var78.Width); /*0x4af0a6*/
        v41 = (XSurface *)-(int)aP12; /*0x4af0a8*/
        v50 = (XSurface *)-(int)v25; /*0x4af0b6*/
        Height = var78.Height; /*0x4af0be*/
        v52 = (TechnoClass *)var78.LockCount; /*0x4af0cb*/
        _DWORD * v27 = ClipRectIntersection((IUnknown *)&var78, (IUnknown *)&a4, (IUnknown *)&v41, 0, 0); /*0x4af0d4*/
        *(_DWORD *)a4[0] = *v27; /*0x4af0d8*/
        a4.Width = v27[1]; /*0x4af0df*/
        a4.Height = v27[2]; /*0x4af0e6*/
        ecx19 = v27[3]; /*0x4af0ea*/
        a4.LockCount = ecx19; /*0x4af0ef*/
        if ( a4.Height > 0 && ecx19 > 0 ) /*0x4af0fb*/
        {
LABEL_21:
          if ( aP7 ) /*0x4af10a*/
          {
            v31 = (IUnknown *)aP6; /*0x4af10c*/
            LOBYTE(v31) = (unsigned __int8)aP6 | 0x10; /*0x4af113*/
            aP6 = (ConvertClass *)v31; /*0x4af115*/
          }
          if ( Helper_69E900((char **)v16, arg4) ) /*0x4af126*/
          {
            v30 = (TechnoClass *)LightConvertClass::SelectRLEBlitter(var44, (IUnknown *)aP6); /*0x4af13f*/
            if ( v30 ) /*0x4af146*/
            {
              v41 = (XSurface *)v36; /*0x4af154*/
              v50 = (XSurface *)v40; /*0x4af15c*/
              Height = a4.Height; /*0x4af164*/
              v52 = (TechnoClass *)a4.LockCount; /*0x4af16f*/
              BlitterRLEBlitSHP( /*0x4af1bf*/
                (IUnknown *)v55,
                (int *)&v59,
                (TechnoClass *)&v41,
                (IUnknown *)&aP3,
                &a4,
                (int *)a4[0],
                v30,
                aP7a,
                (int)aP9,
                (TechnoClass *)aP10,
                0,
                (int)var90,
                aP12,
                (int)v25,
                (int)aP11);
            }
          }
          else
          {
            SHPFrame = (XSurface *)BuildingClass::GetSHPFrame(var44, aP6); /*0x4af1d5*/
            if ( SHPFrame ) /*0x4af1dc*/
            {
              v50 = 0; /*0x4af1e6*/
              v41 = 0; /*0x4af1ee*/
              *(_DWORD *)var78[0] = v36; /*0x4af1f6*/
              var78.Width = (int)v40; /*0x4af1fe*/
              var78.Height = a4.Height; /*0x4af206*/
              var78.LockCount = a4.LockCount; /*0x4af211*/
              Height = aP3.Width; /*0x4af261*/
              v52 = (TechnoClass *)aP3.Height; /*0x4af265*/
              BlitterCopySHP( /*0x4af269*/
                v55,
                (XSurface *)&v59,
                &var78,
                &aP3,
                (int)&v41,
                &a4,
                SHPFrame,
                (XSurface *)aP7a,
                (XSurface *)aP9,
                (int)aP10,
                (int)aP11,
                0);
            }
          }
        }
        if ( var90 ) /*0x4af275*/
          (**(void (__thiscall ***)(ObjectClass *, int))var90->__pad_0)(var90, 1); /*0x4af27b*/
        Vector::Clear((int)v57); /*0x4af284*/
      }
    }
  }
}
} // namespace gamemd
}

// 0x4AF2A0
namespace gamemd {
int E4Recv_4AF2A0::BlitterDrawSHP()
{
{
  int SHPFrame; // eax
  XSurface *v7; // [esp-18h] [ebp-40h]
  XSurface aP2; // [esp+8h] [ebp-20h] BYREF
  XSurface *aP3; // [esp+2Ch] [ebp+4h]
  XSurface *aP5; // [esp+30h] [ebp+8h]
  XSurface *v12; // [esp+34h] [ebp+Ch]
  XSurface *aP1; // [esp+38h] [ebp+10h]
  XSurface *aP6; // [esp+40h] [ebp+18h]
  XSurface *aP7; // [esp+44h] [ebp+1Ch]
  XSurface *aP8; // [esp+48h] [ebp+20h]

  SHPFrame = (int)aP6; /*0x4af2a0*/
  int v14; // [esp+3Ch] [ebp+14h]
  _DWORD * v1 = v14; /*0x4af2b1*/
  if ( !aP6 )
    SHPFrame = BuildingClass::GetSHPFrame(v1, v14 != 0 ? (ConvertClass *)0x10 : 0);
  int v4 = *(_DWORD *)v12->__pad_0; /*0x4af2d0*/
  aP2.Width = v12->Width; /*0x4af2d5*/
  *(_DWORD *)aP2[0] = v4; /*0x4af2dd*/
  aP2.Height = aP5->Height; /*0x4af2e4*/
  aP2.LockCount = aP5->LockCount; /*0x4af2eb*/
  v7 = (XSurface *)SHPFrame; /*0x4af308*/
  char v9[16]; // [esp+18h] [ebp-10h] BYREF
  int v5 = (*(int (__thiscall **)(XSurface *, char *))(*(_DWORD *)aP3->__pad_0 + 120))(aP3, v9); /*0x4af313*/
  int v18; // [esp+4Ch] [ebp+24h]
  int v19; // [esp+50h] [ebp+28h]
  int v20; // [esp+54h] [ebp+2Ch]
  return BlitterCopySHP((XSurface *)this, aP1, &aP2, aP3, v5, aP5, v7, aP7, aP8, v18, v19, v20); /*0x4af328*/
}
} // namespace gamemd
}

// 0x4AF9B0
namespace gamemd {
void * E4Recv_4AF9B0::sub_4AF9B0(void * a2)
{
{
  const void *v10; // eax
  int v11; // edx
  _DWORD v13[12]; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  Matrix3x4::Identity(v13); /*0x4af9bc*/
  ObjectClass *v3 = *(&this->u32_42); /*0x4af9c1*/
  if ( v3 ) /*0x4af9ca*/
  {
    int v4 = this->M36; /*0x4af9d0*/
    int v5 = *(&this->u32_41); /*0x4af9d3*/
    if ( v4 != -1 ) /*0x4af9df*/
    {
      if ( (int)g_CurrentFrame - v4 >= v5 ) /*0x4af9e7*/
        v5 = 0; /*0x4af9ed*/
      else
        v5 -= (int)g_CurrentFrame - v4; /*0x4af9e9*/
    }
    if ( (double)(v3 - v5) / (double)*(&this->u32_42) < 1.0 ) /*0x4afa08*/
    {
  double v7; // st7
      ObjectClass *v6 = *(&this->u32_42); /*0x4afa0a*/
      if ( v6 ) /*0x4afa13*/
      {
        int v8 = this->M36; /*0x4afa1d*/
        int v9 = *(&this->u32_41); /*0x4afa20*/
        if ( v8 != -1 ) /*0x4afa26*/
        {
          if ( (int)g_CurrentFrame - v8 >= v9 ) /*0x4afa2e*/
            v9 = 0; /*0x4afa34*/
          else
            v9 -= (int)g_CurrentFrame - v8; /*0x4afa30*/
        }
        v7 = (double)(v6 - v9) / (double)*(&this->u32_42); /*0x4afa40*/
      }
      else
      {
        v7 = 1.0; /*0x4afa15*/
      }
      v10 = InterpolateVoxelAnimPose(v14, this->M32, this->M28, v7); /*0x4afa55*/
      goto LABEL_17; /*0x4afa5a*/
    }
  }
  v11 = this->M28; /*0x4afa5c*/
  if ( v11 ) /*0x4afa61*/
  {
    v10 = CopyAudioData(v14, v11); /*0x4afa67*/
LABEL_17:
    qmemcpy(v13, v10, sizeof(v13)); /*0x4afa77*/
  }
  qmemcpy(a2, v13, 0x30u); /*0x4afa79*/
  return a2; /*0x4afa8a*/
}
} // namespace gamemd
}

// 0x4A0450
namespace gamemd {
void E4Recv_4A0450::sub_4A0450()
{
{
    int v2;
    int v3;
    int *v4;
    void *v5;
    int v6;
    v2 = 0;
    for ( *(void**)this = &vt_EnumConnectionsClass; v2 < this->M20; ++v2 )
  {
    v6 = *(int *)(this->M8 + 8 * v2);
    (*(void (__stdcall **)(int))(*(int *)(v6) + 8))(v6);
  }
    v3 = this->M4;
    v4 = this + 1;
    (*(void (__thiscall **)(int *))(v3 + 12))(v4);
    v5 = (void *)v4[1];
    *v4 = &vt_VectorClass_tagCONNECTDATA;
    if ( v5 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v5);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}
} // namespace gamemd

// 0x4A08D0
namespace gamemd {
void E4Recv_4A08D0::sub_4A08D0()
{
{
    int v2;
    int v3;
    int *v4;
    void *v5;
    v2 = this->M24;
    *(void**)this = &vt_ConnectionPointClass;
    (*(void (__stdcall **)(int))(*(int *)(v2) + 8))(v2);
    v3 = this->M28;
    v4 = this + 7;
    (*(void (__thiscall **)(int *))(v3 + 12))(v4);
    v5 = (void *)v4[1];
    *v4 = &vt_VectorClass_tagCONNECTDATA;
    if ( v5 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v5);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}
} // namespace gamemd

// 0x4A0CE0
namespace gamemd {
unsigned int * E4Recv_4A0CE0::sub_4A0CE0(unsigned int * a2)
{
{
    int *v3;
    int v4;
    void *v5;
    int v6;
    int v7;
    int i;
    int v10;
    v3 = this + 3;
    this->M4 = *((int*)(a2) + 1);
    this->M8 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M24 = 1;
    this->M25 = 0;
    this->M12 = &vt_VectorClass_IConnectionPoint;
    if ( this + 3 != a2 + 3 )
  {
    VectorClass::CleanupTyped((int)(this + 3));
    v4 = *((int*)(a2) + 5);
    this->M20 = v4;
    if ( v4 )
    {
    v5 = __2_YAPAXI_Z(4 * v4);
    this->M16 = v5;
    if ( v5 )
      {
    v6 = this->M20;
    v7 = 0;
    this->M25 = 1;
    if ( v6 > 0 )
        {
    do
          {
    *(int *)(this->M16 + 4 * v7) = *(int *)(*((int*)(a2) + 4) + 4 * v7);
    ++v7;
          }
    while ( v7 < this->M20 );
        }
      }
    }
    else
    {
    this->M16 = 0;
    this->M25 = 0;
    }
  }
    this->M28 = *((int*)(a2) + 7);
    this->M32 = *((int*)(a2) + 8);
    *v3 = &vt_DynamicVectorClass_IConnectionPoint;
    *(void**)this = &vt_EnumConnectionPointsClass;
    for ( i = 0; i < this->M28; ++i )
  {
    v10 = *(int *)(this->M16 + 4 * i);
    (*(void (__stdcall **)(int))(*(int *)(v10) + 4))(v10);
  }
    return this;
}
}
} // namespace gamemd

// 0x4A0DB0
namespace gamemd {
void E4Recv_4A0DB0::sub_4A0DB0()
{
{
    int v2;
    int v3;
    int *v4;
    void *v5;
    int v6;
    v2 = 0;
    for ( *(void**)this = &vt_EnumConnectionPointsClass; v2 < this->M28; ++v2 )
  {
    v6 = *(int *)(this->M16 + 4 * v2);
    (*(void (__stdcall **)(int))(*(int *)(v6) + 8))(v6);
  }
    v3 = this->M12;
    v4 = this + 3;
    (*(void (__thiscall **)(int *))(v3 + 12))(v4);
    v5 = (void *)v4[1];
    *v4 = &vt_VectorClass_IConnectionPoint;
    if ( v5 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v5);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}
} // namespace gamemd

// 0x4A1540
namespace gamemd {
int sub_4A1540()
{
{
    DataGlobal_89F7E8 = 0;
    DataGlobal_89F7EC = 0;
    DataGlobal_89F7F0 = 0;
    DataGlobal_89F7F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A1560
namespace gamemd {
void sub_4A1560()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89F800 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4A1590
namespace gamemd {
void sub_4A1590()
{
{
    DataGlobal_89F850 = DataGlobal_89F800 / 60.0;
}
}
} // namespace gamemd

// 0x4A15B0
namespace gamemd {
void sub_4A15B0()
{
{
    DataGlobal_89F838 = 1.0 / DataGlobal_89F850;
}
}
} // namespace gamemd

// 0x4A15D0
namespace gamemd {
void sub_4A15D0()
{
{
    DataGlobal_89F830 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4A15F0
namespace gamemd {
void sub_4A15F0()
{
{
    DataGlobal_89F808 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4A1610
namespace gamemd {
void sub_4A1610()
{
{
    DataGlobal_89F7E0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4A1630
namespace gamemd {
long long sub_4A1630()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89F7E0 - DataGlobal_89F808);
    result = Math::RoundToInt(v0 * DataGlobal_89F800 * 0.5);
    DataGlobal_89F858 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A1670
namespace gamemd {
void sub_4A1670()
{
{
    DataGlobal_89F810 = Math::ArcTan((double)DataGlobal_89F858 * 0.00390625);
}
}
} // namespace gamemd

// 0x4A16A0
namespace gamemd {
void sub_4A16A0()
{
{
    DataGlobal_89F828 = Math::ArcTan((double)(2 * DataGlobal_89F858) / DataGlobal_89F800);
}
}
} // namespace gamemd

// 0x4A16D0
namespace gamemd {
long long sub_4A16D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89F858) + 0.5);
    DataGlobal_89F84C = result;
    return result;
}
}
} // namespace gamemd

// 0x4A1700
namespace gamemd {
int sub_4A1700()
{
{
    DataGlobal_89F7F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A1710
namespace gamemd {
int sub_4A1710()
{
{
    DataGlobal_89F818 = 0;
    DataGlobal_89F81C = 0;
    DataGlobal_89F820 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A1730
namespace gamemd {
int sub_4A1730()
{
{
    DataGlobal_89F848 = 0;
    DataGlobal_89F840 = 128;
    DataGlobal_89F844 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4A2030
namespace gamemd {
int E4Recv_4A2030::sub_4A2030(Pipe * aP1, int aP2)
{
{
    this->Checksummer_3.Add_Buffer((unsigned char *)aP1, (IUnknown *)aP2);
    return (int)Delegate::Dispatch(this, aP1, (Pipe *)aP2);
}
}
} // namespace gamemd

// 0x4A20B0
namespace gamemd {
int E4Recv_4A20B0::sub_4A20B0(Straw * aP1, int aP2)
{
{
    IUnknown *v4;
    if ( !aP1 || aP2 < 1 )
    return 0;
    v4 = (IUnknown *)Delegate::Invoke(this, (int)aP1, (Straw *)aP2);
    this->Checksummer_3.Add_Buffer((unsigned char *)aP1, v4);
    return (int)v4;
}
}
} // namespace gamemd

// 0x4A2140
namespace gamemd {
int sub_4A2140()
{
{
    DataGlobal_89F8E8 = 0;
    DataGlobal_89F8EC = 0;
    DataGlobal_89F8F0 = 0;
    DataGlobal_89F8F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A2160
namespace gamemd {
void sub_4A2160()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89F900 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4A2190
namespace gamemd {
void sub_4A2190()
{
{
    DataGlobal_89F950 = DataGlobal_89F900 / 60.0;
}
}
} // namespace gamemd

// 0x4A21B0
namespace gamemd {
void sub_4A21B0()
{
{
    DataGlobal_89F938 = 1.0 / DataGlobal_89F950;
}
}
} // namespace gamemd

// 0x4A21D0
namespace gamemd {
void sub_4A21D0()
{
{
    DataGlobal_89F930 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4A21F0
namespace gamemd {
void sub_4A21F0()
{
{
    DataGlobal_89F908 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4A2210
namespace gamemd {
void sub_4A2210()
{
{
    DataGlobal_89F8E0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4A2230
namespace gamemd {
long long sub_4A2230()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89F8E0 - DataGlobal_89F908);
    result = Math::RoundToInt(v0 * DataGlobal_89F900 * 0.5);
    DataGlobal_89F958 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A2270
namespace gamemd {
void sub_4A2270()
{
{
    DataGlobal_89F910 = Math::ArcTan((double)DataGlobal_89F958 * 0.00390625);
}
}
} // namespace gamemd

// 0x4A22A0
namespace gamemd {
void sub_4A22A0()
{
{
    DataGlobal_89F928 = Math::ArcTan((double)(2 * DataGlobal_89F958) / DataGlobal_89F900);
}
}
} // namespace gamemd

// 0x4A22D0
namespace gamemd {
long long sub_4A22D0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89F958) + 0.5);
    DataGlobal_89F94C = result;
    return result;
}
}
} // namespace gamemd

// 0x4A2300
namespace gamemd {
int sub_4A2300()
{
{
    DataGlobal_89F8F8 = 0;
    DataGlobal_89F8FA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A2310
namespace gamemd {
int sub_4A2310()
{
{
    DataGlobal_89F918 = 0;
    DataGlobal_89F91C = 0;
    DataGlobal_89F920 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A2330
namespace gamemd {
int sub_4A2330()
{
{
    DataGlobal_89F948 = 0;
    DataGlobal_89F940 = 128;
    DataGlobal_89F944 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4A2880
namespace gamemd {
void E4Recv_4A2880::sub_4A2880()
{
{
    int v2;
    void *v3;
    void *v4;
    int v5;
    ULONG v6;
    v2 = this->M8;
    *(void**)this = vt_CStreamClass;
    this->M4 = &vt_CStreamClass;
    if ( v2 )
  {
    if ( (unsigned char)this->M17 && this->M20 > 0 && this->M8 )
    IStream::Read(*((IStream **)(this) + 6), *((void **)(this) + 5), v6);
    if ( this->M8 && (*(int (__stdcall **)(int, int))(**((int **)(this) + 2) + 32))(this->M8, 0) >= 0 )
    {
    if ( !this->M8 )
    WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(int))(**((int **)(this) + 2) + 8))(this->M8);
    this->M8 = 0;
    }
  }
    __3_YAXPAX_Z(*((void **)(this) + 8));
    v3 = (void *)this->M24;
    this->M32 = 0;
    __3_YAXPAX_Z(v3);
    v4 = (void *)this->M28;
    this->M24 = 0;
    __3_YAXPAX_Z(v4);
    this->M28 = 0;
    v5 = this->M8;
    if ( v5 )
    (*(void (__stdcall **)(int))(*(int *)(v5) + 8))(v5);
}
}
} // namespace gamemd

// 0x4A3250
namespace gamemd {
int sub_4A3250()
{
{
    DataGlobal_89F960 = 0;
    DataGlobal_89F964 = 0;
    DataGlobal_89F968 = 0;
    DataGlobal_89F96C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A3630
namespace gamemd {
unsigned int * E4Recv_4A3630::sub_4A3630()
{
{
    this->M98304 = 0;
    return this;
}
}
} // namespace gamemd

// 0x4A3650
namespace gamemd {
void nullsub_115()
{
  ;
}
} // namespace gamemd

// 0x4A3A10
namespace gamemd {
int sub_4A3A10(int * a1, void ** a2, void ** a3, int a4)
{
{
    int v6;
    char *v7;
    int v8;
    int result;
    size_t v10;
    int v11;
    size_t v12;
    void *v13;
    _TBYTE Src;
    v6 = *a1;
    v7 = (char *)*a2;
    v13 = *a3;
    v8 = 0;
    if ( !(*(unsigned char (__thiscall **)(int *))(v6 + 24))(a1) )
  {
    result = (*(int (__thiscall **)(int *, int))(*a1 + 28))(a1, 1);
    if ( !result )
    return result;
    v8 = 1;
  }
    (*(void (__thiscall **)(int *, size_t *, int))(*a1 + 36))(a1, &v12, 2);
    (*(void (__thiscall **)(int *, _TBYTE *, int))(*a1 + 36))(a1, &Src, 8);
    v10 = v12 + 65528;
    v12 += 65528;
    if ( WORD3(Src) )
  {
    v11 = *a1;
    v12 = v10 - *(int *)((char *)&Src + 6);
    if ( a4 )
    (*(void (__thiscall **)(int *, int, int))(v11 + 36))(a1, a4, SWORD3(Src));
    else
    (*(void (__thiscall **)(int *, int, int))(v11 + 40))(a1, SWORD3(Src), 1);
    LOWORD(v10) = v12;
    WORD3(Src) = 0;
  }
    if ( *a2 == *a3 )
    v7 = (char *)*((int*)(a2) + 1) + (int)v7 - (unsigned short)v10 - 8;
    memcpy(v7, &Src, 8u);
    (*(void (__thiscall **)(int *, char *, int))(*a1 + 36))(a1, v7 + 8, (unsigned short)v12);
    v12 = sub_5584F0(v7, v13);
    if ( v8 )
    (*(void (__thiscall **)(int *))(*a1 + 52))(a1);
    return (unsigned short)v12;
}
}
} // namespace gamemd

// 0x4A3B30
namespace gamemd {
int ReturnNull()
{
return 0;
}
} // namespace gamemd

// 0x4A3B40
namespace gamemd {
HRSRC FindResource(unsigned short a1, const CHAR * a2)
{
{
    HRSRC result;
    result = FindResourceA(*(HMODULE *)&g_CellDirectionOffsets[740], (LPCSTR)a1, a2);
    if ( result )
  {
    result = (HRSRC)LoadResource(*(HMODULE *)&g_CellDirectionOffsets[740], result);
    if ( result )
    return (HRSRC)LockResource(result);
  }
    return result;
}
}
} // namespace gamemd

// 0x4A3BF0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_3()
{
return 1;
}
} // namespace gamemd

// 0x4A3C10
namespace gamemd {
int sub_4A3C10()
{
{
    DataGlobal_89F980 = 0;
    DataGlobal_89F984 = 0;
    DataGlobal_89F988 = 0;
    DataGlobal_89F98C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A3FD0
namespace gamemd {
void sub_4A3FD0()
{
{
    HRESULT v0;
    struct IDirectDrawVtbl *lpVtbl;
    int v2;
    CHAR Text[80];
    Debug::Log();
    if ( !g_lpDirectDraw7 )
  {
    v0 = DirectDrawCreate(0, &g_lpDirectDraw7, 0);
    if ( v0 )
    {
    if ( g_DDraw_ErrorCallback )
      {
    g_DDraw_ErrorCallback(v0);
    Debug::Log();
      }
    else
      {
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0);
    MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
    Debug::Log();
      }
    }
    else
    {
    lpVtbl = g_lpDirectDraw7->lpVtbl;
    if ( DataGlobal_89F978 )
    v2 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 8);
    else
    v2 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 17);
    if ( v2 )
      {
    if ( g_DDraw_ErrorCallback )
        {
    g_DDraw_ErrorCallback(v2);
        }
    else
        {
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2);
    MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x4A40C0
namespace gamemd {
LPDIRECTDRAW sub_4A40C0()
{
{
    LPDIRECTDRAW result;
    CHAR Text[80];
    result = g_lpDirectDraw7;
    if ( g_lpDirectDraw7 )
  {
    result = (LPDIRECTDRAW)g_lpDirectDraw7->lpVtbl->Release(g_lpDirectDraw7);
    if ( result )
    {
    if ( g_DDraw_ErrorCallback )
      {
    result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result);
    g_lpDirectDraw7 = 0;
    return result;
      }
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, result);
    result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
    }
    g_lpDirectDraw7 = 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x4A44F0
namespace gamemd {
int sub_4A44F0()
{
{
    LPDIRECTDRAW result;
    int v2;
    CHAR Buffer[4];
    CHAR Text[76];
    result = g_lpDirectDraw7;
    if ( g_lpDirectDraw7 )
  {
    v2 = ((int (__stdcall *)(LPDIRECTDRAW, int))g_lpDirectDraw7->lpVtbl->RestoreDisplayMode)(g_lpDirectDraw7, a1);
    if ( v2 )
    {
    if ( g_DDraw_ErrorCallback )
      {
    g_DDraw_ErrorCallback(v2);
      }
    else
      {
    sprintf(Text, g_Str_Trace_DDRAW_DLL_Error_code____08X, v2);
    MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u);
      }
    }
    g_DisplayWidth = 0;
    DataGlobal_8A00A8 = 0;
    DataGlobal_8A00AC = 0;
    result = (LPDIRECTDRAW)((int (__cdecl *)(LPDIRECTDRAW))g_lpDirectDraw7->lpVtbl->Release)(g_lpDirectDraw7);
    if ( result )
    {
    if ( g_DDraw_ErrorCallback )
      {
    result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result);
    g_lpDirectDraw7 = 0;
    return result;
      }
    sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, result);
    result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u);
    }
    g_lpDirectDraw7 = 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x4A45C0
namespace gamemd {
int sub_4A45C0()
{
{
    int v1[16];
    int v2;
    char Buffer[256];
    if ( !g_lpDirectDraw7 )
    return 0;
    v1[0] = 316;
    if ( g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v1, 0) )
    return 0;
    sprintf(Buffer, DataGlobal_81FE6C, v2);
    return v2;
}
}
} // namespace gamemd

// 0x4A4700
namespace gamemd {
char sub_4A4700()
{
{
    HRESULT v0;
    char Buffer[80];
    LOBYTE(v0) = DataGlobal_81FC6C;
    if ( DataGlobal_81FC6C )
  {
    v0 = g_lpDirectDraw7->lpVtbl->WaitForVerticalBlank(g_lpDirectDraw7, 1, 0);
    if ( v0 == -2147467263 )
    {
    DataGlobal_81FC6C = 0;
    }
    else if ( v0 )
    {
    if ( g_DDraw_ErrorCallback )
      {
    LOBYTE(v0) = g_DDraw_ErrorCallback(v0);
      }
    else
      {
    sprintf(Buffer, g_Str_Trace_DDRAW_DLL_Error_code____08X, v0);
    LOBYTE(v0) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u);
      }
    }
  }
    return v0;
}
}
} // namespace gamemd

// 0x4A4850
namespace gamemd {
int sub_4A4850(const void * a1, int a2)
{
{
    void *v2;
    int v3;
    int v4;
    int v5;
    int v6;
    v2 = __2_YAPAXI_Z(0x6Cu);
    qmemcpy(v2, a1, 0x6Cu);
    v3 = *(int *)(a2 + 8);
    if ( *(int *)(a2 + 16) < v3 || (*(char *)(a2 + 13) || !v3) && (v4 = *(int *)(a2 + 20), v4 > 0) && (*(unsigned char (__thiscall **)(int, int, int))(*(int *)(a2) + 8))(a2, v3 + v4, 0) )
  {
    v5 = *(int *)(a2 + 16);
    v6 = *(int *)(a2 + 4);
    *(int *)(a2 + 16) = v5 + 1;
    *(int *)(v6 + 4 * v5) = v2;
  }
    return 1;
}
}
} // namespace gamemd

// 0x4A48C0
namespace gamemd {
int sub_4A48C0(unsigned int * a1, unsigned int * a2)
{
{
    int v2;
    int v3;
    v2 = *((int*)(a1) + 1);
    v3 = *((int*)(a2) + 1);
    if ( *a2 > *a1 )
    return -1;
    if ( *a2 < *a1 )
    return 1;
    if ( v2 >= v3 )
    return v3 < v2;
    return -1;
}
}
} // namespace gamemd

// 0x4A4E30
namespace gamemd {
unsigned int * E4Recv_4A4E30::sub_4A4E30(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_DDSURFACEDESC;
    if ( a2 )
  {
    if ( a3 )
    {
    this->M4 = a3;
    return this;
    }
    this->M4 = __2_YAPAXI_Z(4 * a2);
    this->M13 = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x4A4E80
namespace gamemd {
int sub_4A4E80()
{
{
    DataGlobal_8A00C0 = 0;
    DataGlobal_8A00C4 = 0;
    DataGlobal_8A00C8 = 0;
    DataGlobal_8A00CC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A4EA0
namespace gamemd {
void sub_4A4EA0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A00D8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4A4ED0
namespace gamemd {
void sub_4A4ED0()
{
{
    DataGlobal_8A0128 = DataGlobal_8A00D8 / 60.0;
}
}
} // namespace gamemd

// 0x4A4EF0
namespace gamemd {
void sub_4A4EF0()
{
{
    DataGlobal_8A0110 = 1.0 / DataGlobal_8A0128;
}
}
} // namespace gamemd

// 0x4A4F10
namespace gamemd {
void sub_4A4F10()
{
{
    DataGlobal_8A0108 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4A4F30
namespace gamemd {
void sub_4A4F30()
{
{
    DataGlobal_8A00E0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4A4F50
namespace gamemd {
void sub_4A4F50()
{
{
    DataGlobal_8A00B8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4A4F70
namespace gamemd {
long long sub_4A4F70()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A00B8 - DataGlobal_8A00E0);
    result = Math::RoundToInt(v0 * DataGlobal_8A00D8 * 0.5);
    DataGlobal_8A0130 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A4FB0
namespace gamemd {
void sub_4A4FB0()
{
{
    DataGlobal_8A00E8 = Math::ArcTan((double)DataGlobal_8A0130 * 0.00390625);
}
}
} // namespace gamemd

// 0x4A4FE0
namespace gamemd {
void sub_4A4FE0()
{
{
    DataGlobal_8A0100 = Math::ArcTan((double)(2 * DataGlobal_8A0130) / DataGlobal_8A00D8);
}
}
} // namespace gamemd

// 0x4A5010
namespace gamemd {
long long sub_4A5010()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0130) + 0.5);
    DataGlobal_8A0124 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A5040
namespace gamemd {
int sub_4A5040()
{
{
    DataGlobal_8A00D0 = 0;
    DataGlobal_8A00D2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A5050
namespace gamemd {
int sub_4A5050()
{
{
    DataGlobal_8A00F0 = 0;
    DataGlobal_8A00F4 = 0;
    DataGlobal_8A00F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A5070
namespace gamemd {
int sub_4A5070()
{
{
    DataGlobal_8A0120 = 0;
    DataGlobal_8A0118 = 128;
    DataGlobal_8A011C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4A5090
namespace gamemd {
void nullsub_116()
{
  ;
}
} // namespace gamemd

// 0x4A50A0
namespace gamemd {
signed int sub_4A50A0(signed int a1)
{
{
    DWORD Ticks;
    DWORD v3;
    signed int result;
    DWORD v5;
    int v6;
    Ticks = Timer::GetTicks();
    v6 = a1;
    v5 = Ticks;
    do
  {
    if ( Ticks == -1 )
    {
    result = a1;
    }
    else
    {
    v3 = Timer::GetTicks();
    Ticks = v5;
    result = v3 - v5;
    if ( result >= a1 )
    return result;
    result = a1 - result;
    a1 = v6;
    }
  }
    while ( result );
    return result;
}
}
} // namespace gamemd

// 0x4A52D0
namespace gamemd {
void E4Recv_4A52D0::sub_4A52D0()
{
{
    this->M24 = 0;
    this->M25 = 1;
}
}
} // namespace gamemd

// 0x4A52E0
namespace gamemd {
char E4Recv_4A52E0::sub_4A52E0()
{
{
    this->M24 = 0;
    this->M25 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A5390
namespace gamemd {
int sub_4A5390()
{
{
    DataGlobal_8A0138 = 0;
    DataGlobal_8A013C = 0;
    DataGlobal_8A0140 = 0;
    DataGlobal_8A0144 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A5950
namespace gamemd {
unsigned int E4Recv_4A5950::_GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ()
{
{
    return this->M180;
}
}
} // namespace gamemd

// 0x4A59C0
namespace gamemd {
int sub_4A59C0()
{
{
    DataGlobal_8A0160 = 0;
    DataGlobal_8A0164 = 0;
    DataGlobal_8A0168 = 0;
    DataGlobal_8A016C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A5E50
namespace gamemd {
int E4Recv_4A5E50::sub_4A5E50(int a2, AbstractClass * aP2, AbstractClass * aP3)
 {
{
  BitFont *v5; // esi
  int PixelData; // eax

  *(_DWORD *)aP2->__pad_0 = 0; /*0x4a5e5e*/
  *(_DWORD *)aP3->__pad_0 = 0; /*0x4a5e65*/
  v5 = (BitFont *)aP0; /*0x4a5e6b*/
  if ( !this || !aP0 ) /*0x4a5e77*/
    return 0; /*0x4a5ea2*/
  PixelData = FontClass::GetPixelData(aP0, 0x57u); /*0x4a5e7d*/
  Text::Layout(v5, this, aP2, aP3, (AbstractClass *)(a2 * PixelData)); /*0x4a5e8d*/
  return *(_DWORD *)aP3->__pad_0 / v5[2].field_4; /*0x4a5e98*/
}
} // namespace gamemd
}

// 0x4A6500
namespace gamemd {
unsigned int * FillRectangle(IUnknown * aP0, IUnknown * aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    int v12;
    int *v13;
    int v14;
    int v16;
    v12 = Color::ConvertToRGB((unsigned char *)(a6 + 776), (int)&a6);
    LOWORD(v16) = *(short *)v12;
    BYTE2(v16) = *(char *)(v12 + 2);
    v13 = RenderTextLabelWordWrap( &v16, (const wchar_t *)aP1, a3, (int *)a4, (int *)a5, ((unsigned char)v16 >> DataGlobal_89E138[11420] << DataGlobal_89E138[11416]) | (BYTE1(v16) >> DataGlobal_89E138[11436] << DataGlobal_89E138[11432]) | (BYTE2(v16) >> DataGlobal_89E138[11428] << DataGlobal_89E138[11424]), a7, a8, a9, (unsigned int *)a10);
    aP0->field_0 = *v13;
    v14 = v13[1];
    aP0->field_4 = v14;
    return &aP0->field_0;
}
}
} // namespace gamemd

// 0x4A6820
namespace gamemd {
int sub_4A6820()
{
{
    DataGlobal_8A0170 = 0;
    DataGlobal_8A0174 = 0;
    DataGlobal_8A0178 = 0;
    DataGlobal_8A017C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A6A60
namespace gamemd {
void sub_4A6A60()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A0238 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4A6A90
namespace gamemd {
void sub_4A6A90()
{
{
    DataGlobal_8A0288 = DataGlobal_8A0238 / 60.0;
}
}
} // namespace gamemd

// 0x4A6AB0
namespace gamemd {
void sub_4A6AB0()
{
{
    DataGlobal_8A0270 = 1.0 / DataGlobal_8A0288;
}
}
} // namespace gamemd

// 0x4A6AD0
namespace gamemd {
void sub_4A6AD0()
{
{
    DataGlobal_8A0268 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4A6AF0
namespace gamemd {
void sub_4A6AF0()
{
{
    DataGlobal_8A0240 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4A6B10
namespace gamemd {
void sub_4A6B10()
{
{
    DataGlobal_8A0200 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4A6B30
namespace gamemd {
long long sub_4A6B30()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A0200 - DataGlobal_8A0240);
    result = Math::RoundToInt(v0 * DataGlobal_8A0238 * 0.5);
    DataGlobal_8A0290 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A6B70
namespace gamemd {
void sub_4A6B70()
{
{
    DataGlobal_8A0248 = Math::ArcTan((double)DataGlobal_8A0290 * 0.00390625);
}
}
} // namespace gamemd

// 0x4A6BA0
namespace gamemd {
void sub_4A6BA0()
{
{
    DataGlobal_8A0260 = Math::ArcTan((double)(2 * DataGlobal_8A0290) / DataGlobal_8A0238);
}
}
} // namespace gamemd

// 0x4A6BD0
namespace gamemd {
long long sub_4A6BD0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0290) + 0.5);
    DataGlobal_8A0284 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A6C00
namespace gamemd {
int sub_4A6C00()
{
{
    DataGlobal_8A0230 = 0;
    DataGlobal_8A0232 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A6C10
namespace gamemd {
int sub_4A6C10()
{
{
    DataGlobal_8A0250 = 0;
    DataGlobal_8A0254 = 0;
    DataGlobal_8A0258 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A6C30
namespace gamemd {
int sub_4A6C30()
{
{
    DataGlobal_8A0280 = 0;
    DataGlobal_8A0278 = 128;
    DataGlobal_8A027C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4A6C50
namespace gamemd {
int sub_4A6C50()
{
{
    DataGlobal_8A0220 = 0;
    DataGlobal_8A0224 = 0;
    DataGlobal_8A0228 = 0;
    DataGlobal_8A022C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A6C70
namespace gamemd {
int sub_4A6C70()
{
{
    DataGlobal_8A020C = 0;
    DataGlobal_8A0210 = 0;
    DataGlobal_8A0214 = 1;
    DataGlobal_8A0215 = 0;
    DataGlobal_8A0208 = (int)&vt_DynamicVectorClass_DiskLaserClass;
    DataGlobal_8A021C = 10;
    DataGlobal_8A0218 = 0;
    return atexit(sub_4A6CB0);
}
}
} // namespace gamemd

// 0x4A6CB0
namespace gamemd {
void sub_4A6CB0()
{
{
    DataGlobal_8A0208 = (int)&vt_VectorClass_DiskLaserClass;
    if ( DataGlobal_8A020C && DataGlobal_8A0215 )
  {
    __3_YAXPAX_Z(DataGlobal_8A020C);
    DataGlobal_8A020C = 0;
  }
    DataGlobal_8A0215 = 0;
    DataGlobal_8A0210 = 0;
}
}
} // namespace gamemd

// 0x4A80D0
namespace gamemd {
int AlwaysFindYRCD()
{
return 2;
}
} // namespace gamemd

// 0x4A83D0
namespace gamemd {
bool sub_4A83D0(INIClass * aP0)
{
{
    char Buffer[256];
    sprintf(Buffer, &DataGlobal_81FFCC, aP0);
    return MessageBoxA(0, Buffer, aHey, 1u) == 1;
}
}
} // namespace gamemd

// 0x4A8410
namespace gamemd {
char sub_4A8410(int a1)
{
return 1;
}
} // namespace gamemd

// 0x4A8420
namespace gamemd {
int sub_4A8420()
{
{
    DataGlobal_8A03E8 = 0;
    DataGlobal_8A03EC = 0;
    DataGlobal_8A03F0 = 0;
    DataGlobal_8A03F4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A8440
namespace gamemd {
void sub_4A8440()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A0400 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4A8470
namespace gamemd {
void sub_4A8470()
{
{
    DataGlobal_8A0738 = DataGlobal_8A0400 / 60.0;
}
}
} // namespace gamemd

// 0x4A8490
namespace gamemd {
void sub_4A8490()
{
{
    DataGlobal_8A0628 = 1.0 / DataGlobal_8A0738;
}
}
} // namespace gamemd

// 0x4A84B0
namespace gamemd {
void sub_4A84B0()
{
{
    DataGlobal_8A0620 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4A84D0
namespace gamemd {
void sub_4A84D0()
{
{
    DataGlobal_8A0408 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4A84F0
namespace gamemd {
void sub_4A84F0()
{
{
    DataGlobal_8A03D8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4A8510
namespace gamemd {
long long sub_4A8510()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A03D8 - DataGlobal_8A0408);
    result = Math::RoundToInt(v0 * DataGlobal_8A0400 * 0.5);
    DataGlobal_8A0740 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A8550
namespace gamemd {
void sub_4A8550()
{
{
    DataGlobal_8A0410 = Math::ArcTan((double)DataGlobal_8A0740 * 0.00390625);
}
}
} // namespace gamemd

// 0x4A8580
namespace gamemd {
void sub_4A8580()
{
{
    DataGlobal_8A0610 = Math::ArcTan((double)(2 * DataGlobal_8A0740) / DataGlobal_8A0400);
}
}
} // namespace gamemd

// 0x4A85B0
namespace gamemd {
long long sub_4A85B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A0740) + 0.5);
    DataGlobal_8A0730 = result;
    return result;
}
}
} // namespace gamemd

// 0x4A85E0
namespace gamemd {
int sub_4A85E0()
{
{
    DataGlobal_8A03F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A85F0
namespace gamemd {
int sub_4A85F0()
{
{
    DataGlobal_8A0600 = 0;
    DataGlobal_8A0604 = 0;
    DataGlobal_8A0608 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4A8610
namespace gamemd {
int sub_4A8610()
{
{
    DataGlobal_8A0728 = 0;
    DataGlobal_8A0720 = 128;
    DataGlobal_8A0724 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4A8630
namespace gamemd {
int sub_4A8630()
{
{
    int *v0;
    int v1;
    v0 = &DataGlobal_8A0368;
    v1 = 5;
    do
  {
    *(v0 - 1) = 0;
    *v0 = 0;
    *((char *)(v0) + 4) = 1;
    *((char *)(v0) + 5) = 0;
    *(v0 - 2) = &vt_VectorClass_ObjectClass;
    *(v0 - 2) = &vt_DynamicVectorClass_ObjectClass;
    v0[3] = 10;
    v0[2] = 0;
    *(v0 - 2) = &DataGlobal_7E6060;
    v0 += 6;
    --v1;
  }
    while ( v1 );
    return atexit(sub_4A8680);
}
}
} // namespace gamemd

// 0x4A8680
namespace gamemd {
void sub_4A8680()
{
{
    int v0;
    int v1;
    void *v2;
    if ( (DataGlobal_8A03E1 & 1) == 0 )
  {
    DataGlobal_8A03E1 |= 1u;
    v0 = 9044956;
    v1 = 5;
    do
    {
    v2 = *(void **)(v0 - 24);
    v0 -= 24;
    *(int *)(v0 - 4) = &vt_VectorClass_ObjectClass;
    if ( v2 )
      {
    if ( *(char *)(v0 + 9) )
        {
    __3_YAXPAX_Z(v2);
    *(int *)v0 = 0;
        }
      }
    --v1;
    *(char *)(v0 + 9) = 0;
    *(int *)(v0 + 4) = 0;
    }
    while ( v1 );
  }
}
}
} // namespace gamemd

// 0x4A86E0
namespace gamemd {
int sub_4A86E0()
{
{
    GadgetClass::Construct(DataGlobal_8A06F8, 0, 0, 0, 0, 127, 1);
    DataGlobal_8A06F8[0] = (int)&vt_DisplayClass_TacticalClass;
    return atexit(sub_4A8710);
}
}
} // namespace gamemd

// 0x4A8710
namespace gamemd {
void sub_4A8710()
{
{
    if ( (DataGlobal_8A03E0 & 1) == 0 )
  {
    DataGlobal_8A03E0 |= 1u;
    GadgetClass::Dtor(DataGlobal_8A06F8);
  }
}
}
} // namespace gamemd

// 0x4A8D40
namespace gamemd {
void nullsub_10()
{
  ;
}
} // namespace gamemd

// 0x4A8EA0
namespace gamemd {
void nullsub_11()
{
  ;
}
} // namespace gamemd

// 0x4AECD0
namespace gamemd {
int E4Recv_4AECD0::sub_4AECD0()
{
{
    int v1;
    HMODULE LibraryA;
    HMODULE v3;
    FARPROC ProcAddress;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    v1 = 0;
    LibraryA = LoadLibraryA(this);
    v3 = LibraryA;
    if ( LibraryA )
  {
    ProcAddress = GetProcAddress(LibraryA, aDllgetversion);
    if ( ProcAddress )
    {
    v7 = 0;
    v6 = 20;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    if ( ProcAddress(&v6) >= 0 )
    v1 = (unsigned short)v8 | ((unsigned short)v7 << 16);
    }
    FreeLibrary(v3);
  }
    return v1;
}
}
} // namespace gamemd

// 0x4AED50
namespace gamemd {
int sub_4AED50()
{
{
    DataGlobal_8A0748 = 0;
    DataGlobal_8A074C = 0;
    DataGlobal_8A0750 = 0;
    DataGlobal_8A0754 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4AF330
namespace gamemd {
void sub_4AF330()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_8A0778 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x4AF360
namespace gamemd {
void sub_4AF360()
{
{
    DataGlobal_8A07C8 = DataGlobal_8A0778 / 60.0;
}
}
} // namespace gamemd

// 0x4AF380
namespace gamemd {
void sub_4AF380()
{
{
    DataGlobal_8A07B0 = 1.0 / DataGlobal_8A07C8;
}
}
} // namespace gamemd

// 0x4AF3A0
namespace gamemd {
void sub_4AF3A0()
{
{
    DataGlobal_8A07A8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x4AF3C0
namespace gamemd {
void sub_4AF3C0()
{
{
    DataGlobal_8A0780 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x4AF3E0
namespace gamemd {
void sub_4AF3E0()
{
{
    DataGlobal_8A0758 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x4AF400
namespace gamemd {
long long sub_4AF400()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A0758 - DataGlobal_8A0780);
    result = Math::RoundToInt(v0 * DataGlobal_8A0778 * 0.5);
    DataGlobal_8A07D0 = result;
    return result;
}
}
} // namespace gamemd

// 0x4AF440
namespace gamemd {
void sub_4AF440()
{
{
    DataGlobal_8A0788 = Math::ArcTan((double)DataGlobal_8A07D0 * 0.00390625);
}
}
} // namespace gamemd

// 0x4AF470
namespace gamemd {
void sub_4AF470()
{
{
    DataGlobal_8A07A0 = Math::ArcTan((double)(2 * DataGlobal_8A07D0) / DataGlobal_8A0778);
}
}
} // namespace gamemd

// 0x4AF4A0
namespace gamemd {
long long sub_4AF4A0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_8A07D0) + 0.5);
    DataGlobal_8A07C4 = result;
    return result;
}
}
} // namespace gamemd

// 0x4AF4D0
namespace gamemd {
int sub_4AF4D0()
{
{
    DataGlobal_8A0770 = 0;
    DataGlobal_8A0772 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4AF4E0
namespace gamemd {
int sub_4AF4E0()
{
{
    g_DDraw_ClipRect = 0;
    DataGlobal_8A0794 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4AF500
namespace gamemd {
int sub_4AF500()
{
{
    DataGlobal_8A07C0 = 0;
    DataGlobal_8A07B8 = 128;
    DataGlobal_8A07BC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x4AF520
namespace gamemd {
int sub_4AF520()
{
{
    DataGlobal_8A0760 = 0;
    DataGlobal_8A0764 = 0;
    DataGlobal_8A0768 = 0;
    DataGlobal_8A076C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x4AFAA0
namespace gamemd {
double E4Recv_4AFAA0::sub_4AFAA0()
{
{
    int v1;
    int v3;
    int v4;
    v1 = this->M48;
    if ( !v1 )
    return 1.0;
    v3 = this->M36;
    v4 = this->M44;
    if ( v3 != -1 )
  {
    if ( (int)g_CurrentFrame - v3 < v4 )
    return (double)(v1 - (v4 - ((int)g_CurrentFrame - v3))) / (double)v1;
    v4 = 0;
  }
    return (double)(v1 - v4) / (double)v1;
}
}
} // namespace gamemd

// 0x4AFB00
namespace gamemd {
int E4Recv_4AFB00::sub_4AFB00(int a2)
{
{
    int result;
    int *v3;
    int v4;
    result = this->M28;
    if ( a2 != result )
  {
    this->M32 = result;
    this->M28 = a2;
    v3 = this + 9;
    *v3 = g_CurrentFrame;
    v3[1] = v4;
    v3[2] = 3;
    v3[3] = 3;
    return v4;
  }
    return result;
}
}
} // namespace gamemd

// 0x4AFED0
namespace gamemd {
BOOL E4Recv_4AFED0::sub_4AFED0()
{
{
    int v1;
    double v2;
    int v3;
    int v4;
    int v5;
    int result;
    v1 = this->M48;
    if ( v1 )
  {
    v3 = this->M44;
    v4 = this->M36;
    if ( v4 != -1 )
    {
    if ( (int)g_CurrentFrame - v4 >= v3 )
    v3 = 0;
    else
    v3 -= (int)g_CurrentFrame - v4;
    }
    v2 = (double)(v1 - v3) / (double)(int)this->M48;
  }
    else
  {
    v2 = 1.0;
  }
    result = 0;
    if ( v2 == 1.0 )
  {
    v5 = this->M12;
    if ( fabs(*(float *)(v5 + 808)) < 0.005 && fabs(*(float *)(v5 + 812)) < 0.005 )
    return 1;
  }
    return result;
}
}
} // namespace gamemd
