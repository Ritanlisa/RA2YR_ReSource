// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_EnumConnectionsClass 1  // G57b: e4 flat-carrier opt-in (suppress core/aux twin)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Char_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
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
#include "e4/classes/EnumConnectionPointsClass_e4.hpp"
#include "e4/classes/EnumConnectionsClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/E4Recv_4B69E0_e4.hpp"
#include "e4/classes/E4Recv_491D90_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/classes/E4Recv_496310_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/E4Recv_491FD0_e4.hpp"
#include "e4/classes/E4Recv_4964D0_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/E4Recv_4965B0_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/BuildingAnim_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/classes/FontRenderer_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/TextGroup_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"  // G42.36 C2027 supply
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int Render_Helper(...);  // raw 00626120: unsigned int __thiscall Render_Helper(ObjectClass *this, unsigned __int8 a2, int a3)
} // namespace gamemd

// 0x4A0190
namespace gamemd {
int EnumConnectionsClass::_vt06(unsigned int * a1, unsigned int * a2)
{

  int v3; // edi
  int EnumConnectionsClass_field_0x0C; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int *v8; // edx
  unsigned int *v9; // eax
  int v10; // eax
  int i; // esi
  int v12; // eax
  int v13; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a019a*/
    return -2147467261; /*0x4a019d*/
  v3 = (int)(__2_YAPAXI_Z(0x24u)); /*0x4a01ad*/
  if ( !v3 ) /*0x4a01b4*/
    return -2147024882; /*0x4a029d*/
  *(unsigned int *)(v3 + 8) = 0; /*0x4a01c8*/
  *(unsigned int *)(v3 + 12) = 0; /*0x4a01cb*/
  *(unsigned char *)(v3 + 16) = 1; /*0x4a01ce*/
  *(unsigned char *)(v3 + 17) = 0; /*0x4a01d2*/
  *(unsigned int *)(v3 + 4) = (unsigned int)(&vt_VectorClass); /*0x4a01d5*/
  if ( (int *)(v3 + 4) != &a1->EnumConnectionsClass_field_0x04 ) /*0x4a01db*/
  {
    VectorClass::ClearAndFree2(v3 + 4); /*0x4a01df*/
    EnumConnectionsClass_field_0x0C = a1->EnumConnectionsClass_field_0x0C; /*0x4a01e5*/
    *(unsigned int *)(v3 + 12) = EnumConnectionsClass_field_0x0C; /*0x4a01ea*/
    if ( EnumConnectionsClass_field_0x0C ) /*0x4a01ed*/
    {
      v5 = (int)(__2_YAPAXI_Z(8 * EnumConnectionsClass_field_0x0C)); /*0x4a01f7*/
      *(unsigned int *)(v3 + 8) = v5; /*0x4a0201*/
      if ( v5 ) /*0x4a0204*/
      {
        v6 = *(unsigned int *)(v3 + 12); /*0x4a0206*/
        v7 = 0; /*0x4a0209*/
        *(unsigned char *)(v3 + 17) = 1; /*0x4a020d*/
        if ( v6 > 0 ) /*0x4a0211*/
        {
          do /*0x4a0236*/
          {
            v8 = (unsigned int *)(a1->EnumConnectionsClass_field_0x08 + 8 * v7); /*0x4a021f*/
            v9 = (unsigned int *)(*(unsigned int *)(v3 + 8) + 8 * v7++); /*0x4a0224*/
            *v9 = *v8; /*0x4a0229*/
            v9[1] = v8[1]; /*0x4a022e*/
          }
          while ( v7 < *(unsigned int *)(v3 + 12) ); /*0x4a0236*/
        }
      }
    }
    else
    {
      *(unsigned int *)(v3 + 8) = 0; /*0x4a023c*/
      *(unsigned char *)(v3 + 17) = 0; /*0x4a023f*/
    }
  }
  *(unsigned int *)(v3 + 20) = a1->EnumConnectionsClass_field_0x14; /*0x4a0249*/
  *(unsigned int *)(v3 + 24) = *((unsigned int *)a1 + 6); /*0x4a024f*/
  *(unsigned int *)(v3 + 4) = (unsigned int)(&vt_DynamicVectorClass); /*0x4a0252*/
  v10 = *((unsigned int *)a1 + 7); /*0x4a0258*/
  *(unsigned int *)(v3 + 32) = 0; /*0x4a025b*/
  *(unsigned int *)(v3 + 28) = v10; /*0x4a025e*/
  *(unsigned int *)v3 = (unsigned int)(&vt_EnumConnectionsClass); /*0x4a0261*/
  for ( i = 0; i < *(unsigned int *)(v3 + 20); ++i ) /*0x4a026e*/
  {
    v13 = *(unsigned int *)(*(unsigned int *)(v3 + 8) + 8 * i); /*0x4a0276*/
    (*(void (**)(int))(*(unsigned int *)v13 + 4))(v13); /*0x4a0279*/
  }
  v12 = *(unsigned int *)v3; /*0x4a0284*/
  *(unsigned int *)(v3 + 32) = 0; /*0x4a0287*/
  (*(void (**)(int))(v12 + 4))(v3); /*0x4a028a*/
  *a2 = v3; /*0x4a0295*/
  return 0; /*0x4a019c*/

}
} // namespace gamemd
// 0x4A02B0
namespace gamemd {
unsigned int * E4Recv_4A02B0::sub_4A02B0(unsigned int * a2)
{

  int *p_EnumConnectionsClass_field_0x04; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int i; // esi
  int v12; // [esp-4h] [ebp-14h]

  p_EnumConnectionsClass_field_0x04 = (int *)(&this->EnumConnectionsClass_field_0x04); /*0x4a02bc*/
  this->EnumConnectionsClass_field_0x08 = 0; /*0x4a02c1*/
  this->EnumConnectionsClass_field_0x0C = 0; /*0x4a02c4*/
  LOBYTE(this->EnumConnectionsClass_field_0x10) = 1; /*0x4a02c7*/
  BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a02cb*/
  this->EnumConnectionsClass_field_0x04 = (int)&vt_VectorClass; /*0x4a02ce*/
  if ( &this->EnumConnectionsClass_field_0x04 != a2 ) /*0x4a02d4*/
  {
    VectorClass::ClearAndFree2((int)&this->EnumConnectionsClass_field_0x04); /*0x4a02d8*/
    v4 = a2[2]; /*0x4a02de*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a02e3*/
    if ( v4 ) /*0x4a02e6*/
    {
      v5 = (int)(__2_YAPAXI_Z(8 * v4)); /*0x4a02ec*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a02f6*/
      if ( v5 ) /*0x4a02f9*/
      {
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a02fb*/
        v7 = 0; /*0x4a02fe*/
        *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a0302*/
        if ( v6 > 0 ) /*0x4a0306*/
        {
          do /*0x4a0322*/
          {
            v8 = a2[1]; /*0x4a0308*/
            v9 = p_EnumConnectionsClass_field_0x04[1]; /*0x4a030b*/
            *(unsigned int *)(v9 + 8 * v7) = *(unsigned int *)(v8 + 8 * v7); /*0x4a0311*/
            *(unsigned int *)(v9 + 8 * v7 + 4) = *(unsigned int *)(v8 + 8 * v7 + 4); /*0x4a0318*/
            ++v7; /*0x4a031f*/
          }
          while ( v7 < p_EnumConnectionsClass_field_0x04[2] ); /*0x4a0322*/
        }
      }
    }
    else
    {
      p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a0328*/
      *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a032b*/
    }
  }
  p_EnumConnectionsClass_field_0x04[4] = a2[4]; /*0x4a0331*/
  p_EnumConnectionsClass_field_0x04[5] = a2[5]; /*0x4a0337*/
  *p_EnumConnectionsClass_field_0x04 = (unsigned int)(int)&vt_DynamicVectorClass;
  *((unsigned int *)this + 7) = 0; /*0x4a0340*/
  *((unsigned int *)this + 8) = 0; /*0x4a0343*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_EnumConnectionsClass); /*0x4a0346*/
  for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0353*/
  {
    v12 = *(unsigned int *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a035b*/
    (*(void (**)(int))(*(unsigned int *)v12 + 4))(v12); /*0x4a035e*/
  }
  return this->__pad_0; /*0x4a036b*/

}
}
// 0x4A0380
namespace gamemd {
unsigned int * E4Recv_4A0380::sub_4A0380(unsigned int * a2)
{

  int *p_EnumConnectionsClass_field_0x04; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int i; // esi
  int v13; // [esp-4h] [ebp-14h]

  p_EnumConnectionsClass_field_0x04 = (int *)(&this->EnumConnectionsClass_field_0x04); /*0x4a038f*/
  this->EnumConnectionsClass_field_0x08 = 0; /*0x4a0394*/
  this->EnumConnectionsClass_field_0x0C = 0; /*0x4a0397*/
  LOBYTE(this->EnumConnectionsClass_field_0x10) = 1; /*0x4a039a*/
  BYTE1(this->EnumConnectionsClass_field_0x10) = 0; /*0x4a039e*/
  this->EnumConnectionsClass_field_0x04 = (int)&vt_VectorClass; /*0x4a03a1*/
  if ( &this->EnumConnectionsClass_field_0x04 != a2 + 1 ) /*0x4a03a7*/
  {
    VectorClass::ClearAndFree2((int)&this->EnumConnectionsClass_field_0x04); /*0x4a03ab*/
    v4 = a2[3]; /*0x4a03b1*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a03b6*/
    if ( v4 ) /*0x4a03b9*/
    {
      v5 = (int)(__2_YAPAXI_Z(8 * v4)); /*0x4a03c3*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a03cd*/
      if ( v5 ) /*0x4a03d0*/
      {
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a03d2*/
        v7 = 0; /*0x4a03d5*/
        *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a03d9*/
        if ( v6 > 0 ) /*0x4a03dd*/
        {
          do /*0x4a03f9*/
          {
            v8 = a2[2]; /*0x4a03df*/
            v9 = p_EnumConnectionsClass_field_0x04[1]; /*0x4a03e2*/
            *(unsigned int *)(v9 + 8 * v7) = *(unsigned int *)(v8 + 8 * v7); /*0x4a03e8*/
            *(unsigned int *)(v9 + 8 * v7 + 4) = *(unsigned int *)(v8 + 8 * v7 + 4); /*0x4a03ef*/
            ++v7; /*0x4a03f6*/
          }
          while ( v7 < p_EnumConnectionsClass_field_0x04[2] ); /*0x4a03f9*/
        }
      }
    }
    else
    {
      p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a03ff*/
      *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a0402*/
    }
  }
  p_EnumConnectionsClass_field_0x04[4] = a2[5]; /*0x4a040c*/
  p_EnumConnectionsClass_field_0x04[5] = a2[6]; /*0x4a0412*/
  *p_EnumConnectionsClass_field_0x04 = (unsigned int)(int)&vt_DynamicVectorClass;
  v10 = a2[7]; /*0x4a041b*/
  *((unsigned int *)this + 8) = 0; /*0x4a041e*/
  *((unsigned int *)this + 7) = v10; /*0x4a0421*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(&vt_EnumConnectionsClass); /*0x4a0424*/
  for ( i = 0; i < this->EnumConnectionsClass_field_0x14; ++i ) /*0x4a0431*/
  {
    v13 = *(unsigned int *)(this->EnumConnectionsClass_field_0x08 + 8 * i); /*0x4a0439*/
    (*(void (**)(int))(*(unsigned int *)v13 + 4))(v13); /*0x4a043c*/
  }
  return this->__pad_0; /*0x4a0449*/

}
}
// 0x4A0B20
namespace gamemd {  // G42.18c ns repair
int EnumConnectionPointsClass::_vt06(unsigned int * a1, unsigned int * a2)
{

  int v3; // edi
  int EnumConnectionPointsClass_field_0x14; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  int v9; // [esp-Ch] [ebp-14h]

  if ( !a2 ) /*0x4a0b2a*/
    return -2147467261; /*0x4a0b2d*/
  v3 = (int)(__2_YAPAXI_Z(0x24u)); /*0x4a0b3d*/
  if ( !v3 ) /*0x4a0b44*/
    return -2147024882; /*0x4a0c13*/
  *(unsigned int *)(v3 + 4) = a1->EnumConnectionPointsClass_field_0x04; /*0x4a0b59*/
  *(unsigned int *)(v3 + 8) = 0; /*0x4a0b5c*/
  *(unsigned int *)(v3 + 16) = 0; /*0x4a0b61*/
  *(unsigned int *)(v3 + 20) = 0; /*0x4a0b64*/
  *(unsigned char *)(v3 + 24) = 1; /*0x4a0b67*/
  *(unsigned char *)(v3 + 25) = 0; /*0x4a0b6b*/
  *(unsigned int *)(v3 + 12) = (unsigned int)(&vt_VectorClass); /*0x4a0b6e*/
  if ( (int *)(v3 + 12) != &a1->EnumConnectionPointsClass_field_0x0C ) /*0x4a0b74*/
  {
    VectorClass::CleanupTyped(v3 + 12); /*0x4a0b78*/
    EnumConnectionPointsClass_field_0x14 = a1->EnumConnectionPointsClass_field_0x14; /*0x4a0b7e*/
    *(unsigned int *)(v3 + 20) = EnumConnectionPointsClass_field_0x14; /*0x4a0b83*/
    if ( EnumConnectionPointsClass_field_0x14 ) /*0x4a0b86*/
    {
      v5 = (int)(__2_YAPAXI_Z(4 * EnumConnectionPointsClass_field_0x14)); /*0x4a0b90*/
      *(unsigned int *)(v3 + 16) = v5; /*0x4a0b9a*/
      if ( v5 ) /*0x4a0b9d*/
      {
        v6 = *(unsigned int *)(v3 + 20); /*0x4a0b9f*/
        v7 = 0; /*0x4a0ba2*/
        *(unsigned char *)(v3 + 25) = 1; /*0x4a0ba6*/
        if ( v6 > 0 ) /*0x4a0baa*/
        {
          do /*0x4a0bbe*/
          {
            *(unsigned int *)(*(unsigned int *)(v3 + 16) + 4 * v7) = *(unsigned int *)(a1->EnumConnectionPointsClass_field_0x10 + 4 * v7); /*0x4a0bb5*/
            ++v7; /*0x4a0bbb*/
          }
          while ( v7 < *(unsigned int *)(v3 + 20) ); /*0x4a0bbe*/
        }
      }
    }
    else
    {
      *(unsigned int *)(v3 + 16) = 0; /*0x4a0bc2*/
      *(unsigned char *)(v3 + 25) = 0; /*0x4a0bc5*/
    }
  }
  *(unsigned int *)(v3 + 28) = a1->EnumConnectionPointsClass_field_0x1C; /*0x4a0bcb*/
  *(unsigned int *)(v3 + 32) = a1->EnumConnectionPointsClass_field_0x20; /*0x4a0bd1*/
  *(unsigned int *)(v3 + 12) = (unsigned int)(&vt_DynamicVectorClass); /*0x4a0bd4*/
  *(unsigned int *)v3 = (unsigned int)(&vt_EnumConnectionPointsClass); /*0x4a0bda*/
  for ( i = 0; i < *(unsigned int *)(v3 + 28); ++i ) /*0x4a0be7*/
  {
    v9 = *(unsigned int *)(*(unsigned int *)(v3 + 16) + 4 * i); /*0x4a0bef*/
    (*(void (**)(int))(*(unsigned int *)v9 + 4))(v9); /*0x4a0bf2*/
  }
  (*(void (**)(int))(*(unsigned int *)v3 + 4))(v3); /*0x4a0c00*/
  *a2 = v3; /*0x4a0c0b*/
  return 0; /*0x4a0b2c*/

}
}  // G42.18c ns repair
// 0x4A2370
namespace gamemd {
AbstractClass * * DrawSidebarCreditsTimer(void * a1, void * a2, void * a3)
{
  int v3; // ecx
  ObjectClass *v4; // esi
  int v5; // ebp
  uint8_t result; // al
  int v7; // kr00_4
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  wchar_t *StringCSF; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // [esp-14h] [ebp-38h]
  int v17; // [esp-Ch] [ebp-30h]
  int v18; // [esp-8h] [ebp-2Ch]
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  int v20[3]; // [esp+Ch] [ebp-18h] BYREF
  int v21[3]; // [esp+18h] [ebp-Ch] BYREF

  v5 = v3; /*0x4a237a*/
  if ( (unsigned char)this || (result = *(unsigned char *)(v3 + 8)) != 0 ) /*0x4a2383*/
  {
    v7 = (*((int (**)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0 + 31))( (DSurface *)(DSurface_Sidebar), (int)(a2)); /*0x4a239f*/
    if ( dword_A83D4C == (unsigned int)(gamemd::Object *)HouseClass_Observer ) /*0x4a23aa*/
    {
      UI_Draw_6D0E60(v4); /*0x4a23b5*/
      v19 = v7 / 2; /*0x4a23c2*/
      v20[0] = 2; /*0x4a23c6*/
      v8 = *(unsigned int *)(v5 + 4); /*0x4a241f*/
      v9 = ((uint8_t)&dword_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a2422*/
         | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
         | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      if ( v8 / 3600 > 99 ) /*0x4a243a*/
        v8 = 359999; /*0x4a243c*/
      v10 = v8 / 3600; /*0x4a2454*/
      v11 = 720 * (4 * (v8 / -3600) - v8 / 3600) + v8; /*0x4a246d*/
      v18 = v11 % 60; /*0x4a2488*/
      v17 = v11 / 60; /*0x4a2489*/
      StringCSF = (wchar_t *)(GetStringCSF( (wchar_t *)&stru_81AF8C.IsAnimatedTiberium, 0, (const char *)(aDRa2mdpostCred), 107)); /*0x4a2499*/
      swprintf(&word_89F860, (const size_t)StringCSF, (const wchar_t *const)v10, v17, v18); /*0x4a24a4*/
      v13 = (*((int (**)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 30))( (DSurface *)(DSurface_Sidebar)); /*0x4a24c6*/
      result = (uint8_t)TextRenderer::Printf( /*0x4a24db*/
                                  v20,
                                  (size_t)&word_89F860,
                                  (int)DSurface_Sidebar,
                                  v13,
                                  (int)v21,
                                  (int)&v19,
                                  v9,
                                  0,
                                  0x4108u);
      *(unsigned char *)(v5 + 8) = 0; /*0x4a24e3*/
      *(unsigned char *)(v5 + 10) = 0; /*0x4a24e7*/
    }
    else
    {
      if ( *(unsigned char *)(v5 + 10) && *(int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1756) >= 2 ) /*0x4a250b*/
      {
        if ( *(unsigned char *)(v5 + 9) ) /*0x4a250d*/
          v14 = **(unsigned int **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1744); /*0x4a2526*/
        else
          v14 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1744) + 4); /*0x4a2530*/
        PlayVocClass(v14, 0x2000, 0.5, 0); /*0x4a2533*/
      }
      UI_Draw_6D0E60(v4); /*0x4a253d*/
      v19 = v7 / 2; /*0x4a254e*/
      v20[0] = 2; /*0x4a2552*/
      v16 = ((uint8_t)&dword_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a25be*/
          | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
          | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      v15 = (*((int (**)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 30))( (DSurface *)(DSurface_Sidebar)); /*0x4a25c7*/
      result = (uint8_t)TextRenderer::Printf( /*0x4a25db*/
                                  v20,
                                  (size_t)&off_81FBB4,
                                  (int)DSurface_Sidebar,
                                  v15,
                                  (int)v21,
                                  (int)&v19,
                                  v16,
                                  0,
                                  0x4108u);
      *(unsigned char *)(v5 + 8) = 0; /*0x4a25e3*/
      *(unsigned char *)(v5 + 10) = 0; /*0x4a25e7*/
    }
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x4A2B60
namespace gamemd {
int CStreamClass___vt03(int a1, char * a2, signed int Size, signed int * a4)
{
  int v4; // ebp
  int result; // eax
  unsigned int *v6; // esi
  signed int *v7; // eax
  int v8; // eax
  size_t v9; // edi
  size_t v10; // eax
  int v11; // eax
  int *v12; // edi
  int v13; // edx
  uint8_t *v14; // ecx
  unsigned char *v15; // [esp+8h] [ebp-1Ch]
  int v16; // [esp+20h] [ebp-4h] BYREF

  v4 = Size; /*0x4a2b66*/
  if ( !a2 ) /*0x4a2b6e*/
    return -2147467261; /*0x4a2b72*/
  if ( Size < 0 ) /*0x4a2b7e*/
    return -2147024809; /*0x4a2b82*/
  v6 = (unsigned int *)a1; /*0x4a2b8c*/
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2b90*/
    return -2147467259; /*0x4a2b99*/
  if ( *(unsigned char *)(a1 + 17) ) /*0x4a2ba3*/
    return -2147467259; /*0x4a2baa*/
  v7 = a4; /*0x4a2bb6*/
  *(unsigned char *)(a1 + 16) = 1; /*0x4a2bba*/
  if ( v7 ) /*0x4a2bc0*/
    *v7 = 0; /*0x4a2bc2*/
  for ( ; v4 > 0; v6[5] = v6[10] ) /*0x4a2bca*/
  {
    v8 = v6[5]; /*0x4a2bd0*/
    if ( v8 > 0 ) /*0x4a2bd5*/
    {
      v9 = v4; /*0x4a2bd9*/
      if ( v4 >= v8 ) /*0x4a2bdb*/
        v9 = v6[5]; /*0x4a2bdd*/
      memcpy( (void *)(a2), (const void *)(v6[6] + v6[10] - v8), v9); /*0x4a2bf0*/
      v4 -= v9; /*0x4a2c01*/
      v10 = v6[5] - v9; /*0x4a2c03*/
      a2 += v9; /*0x4a2c05*/
      v6[5] = v10; /*0x4a2c09*/
    }
    if ( !v4 ) /*0x4a2c0e*/
      break; /*0x4a2c0e*/
    v11 = v6[2]; /*0x4a2c14*/
    a1 = 0; /*0x4a2c17*/
    if ( !v11 ) /*0x4a2c21*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c28*/
    v12 = (int *)(v6 + 9); /*0x4a2c34*/
    result = (*(int (**)(unsigned int, unsigned int *, int, int *))(*(unsigned int *)v6[2] + 12))( v6[2], v6 + 9, 8, (int *)(&a1)); /*0x4a2c3e*/
    if ( result < 0 ) /*0x4a2c43*/
      return result; /*0x4a2c43*/
    if ( a1 != 8 ) /*0x4a2c4a*/
      return -2147467259; /*0x4a2c4a*/
    if ( !v6[2] ) /*0x4a2c50*/
      WinAPI::Wrapper(-2147467261); /*0x4a2c5c*/
    result = (*(int (**)(unsigned int, unsigned int, int, int *))(*(unsigned int *)v6[2] + 12))( v6[2], v6[7], *v12, (int *)(&a1)); /*0x4a2c73*/
    if ( result < 0 ) /*0x4a2c78*/
      return result; /*0x4a2c78*/
    v13 = *v12; /*0x4a2c7a*/
    if ( a1 != *v12 ) /*0x4a2c82*/
      return -2147467259; /*0x4a2c82*/
    v15 = (unsigned char *)v6[6]; /*0x4a2c92*/
    v14 = (uint8_t *)v6[7]; /*0x4a2c93*/
    v16 = 0x10000; /*0x4a2c96*/
    DecodeBlockLCW( (gamemd::AbstractClass *)(v14), v13, (unsigned char *)(v15), (unsigned int *)(&v16), 0); /*0x4a2c9e*/
  }
  if ( a4 ) /*0x4a2cb7*/
    *a4 = Size; /*0x4a2cbd*/
  return 0; /*0x4a2b70*/
}
}
// 0x4A3270
namespace gamemd {
void * E4Recv_4A3270::sub_4A3270(int a2, int a3, int a4)
{

  int *p_estimatedHealth; // ebx
  int v6; // ebx
  unsigned int v8[25]; // [esp+10h] [ebp-64h] BYREF

  p_estimatedHealth = (int *)(&this->estimatedHealth); /*0x4a3287*/
  this->AbstractClass = (unsigned int)((void *)a4); /*0x4a328f*/
  this->estimatedHealth = 0; /*0x4a3291*/
  *(unsigned int *)&this->isOnMap = 0; /*0x4a3297*/
  memset( (void *)(&((unsigned int *)this)[0]), 0, 0x6Cu); /*0x4a329e*/
  ((unsigned int *)this)[0] = (unsigned int)((void *)108); /*0x4a32a4*/
  ((unsigned int *)this)[0] = (unsigned int)((void *)7); /*0x4a32aa*/
  this->health = (&dword_81FC60)[a4]; /*0x4a32b8*/
  ((unsigned int *)this)[0] = a2; /*0x4a32bf*/
  ((unsigned int *)this)[0] = (unsigned int)((void *)a3); /*0x4a32c2*/
  if ( a4 == 1 ) /*0x4a32c5*/
  {
    ((unsigned int *)this)[0] = (unsigned int)((void *)71); /*0x4a32c7*/
    ((unsigned int *)this)[0] = 16; /*0x4a32ce*/
  }
  if ( !dword_8A0E00 /*0x4a32e5*/
|| !(*(int (**)(int, void **, int *, unsigned int))(*(unsigned int *)dword_8A0E00 + 24))( dword_8A0E00, (void **)(&((unsigned int *)this)[0]), (int *)(&this->estimatedHealth), 0) )




  {
    v6 = *p_estimatedHealth; /*0x4a32ec*/
    if ( v6 ) /*0x4a32f0*/
    {
      if ( a4 ) /*0x4a32f5*/
      {
        if ( a4 == 1 ) /*0x4a32f8*/
        {
          memset( (void *)(v8), 0, sizeof(v8)); /*0x4a3314*/
          v8[0] = 100; /*0x4a331a*/
          v8[20] = -1; /*0x4a332a*/
(*(void (**)(int, unsigned int, unsigned int, unsigned int, int, unsigned int *))(*(unsigned int *)v6 + 20))( /*0x4a3339*/ v6, 0, 0, 0, 0x2000000, (unsigned int *)(v8));






          return (int *)this; /*0x4a3347*/
        }
        if ( a4 != 2 ) /*0x4a32fb*/
          return (int *)this; /*0x4a3306*/
      }
      (**(void (***)(int, void *, char *))v6)( v6, &unk_7F8130, (char *)(&this->isOnMap) ); /*0x4a3356*/
    }
  }
  return (int *)this; /*0x4a32ff*/

}
}
// 0x4A38D0
namespace gamemd {
void * LoadFileSHP(char * aP0, bool * aP1)
{
  void *result; // eax
  int v5; // esi
  void * v6;
  bool v7; // zf
  CCFileClass v8; // [esp+Ch] [ebp-6Ch] BYREF
  int v9[5]; // [esp+64h] [ebp-14h] BYREF

  *aP1 = 0; /*0x4a38db*/
  result = (void *)SearchMIXFile((char *)(aP0), 0); /*0x4a38de*/
  if ( !result ) /*0x4a38e5*/
  {
    ((CCFileClass*)&v8)->Construct( (char *)(aP0)); /*0x4a38ed*/
    v5 = 0; /*0x4a38f2*/
    if ( (*(uint8_t (**)(CCFileClass *, unsigned int))(*(unsigned int *)v8.CDFileClass + 20))( (CCFileClass *)(&v8), 0) ) /*0x4a38fd*/
    {
      v6 = (void *)((*(int (**)(CCFileClass *))(*(unsigned int *)v8.CDFileClass + 44))( (CCFileClass *)(&v8))); /*0x4a390f*/
      v5 = (int)(RA2_OPNEW(v6)); /*0x4a3917*/
      v7 = v5 == 0; /*0x4a391c*/
      if ( !v5 ) /*0x4a391e*/
      {
  LABEL_6: *aP1 = !v7;
        *(unsigned int *)v8.CDFileClass = (unsigned int)((void*)&CCFileClass_vftable); /*0x4a3938*/
        v9[3] = (unsigned int)(0); /*0x4a3940*/
        ((Vector *)((int)v9))->Clear((int)((Vector *)((int)v9))); /*0x4a3948*/
        *(unsigned int *)v8.CDFileClass = (unsigned int)((gamemd::AbstractClass **)(&off_7E1668)); /*0x4a3951*/
        ((BufferIOFileClass *)((BufferIOFileClass *)&v8))->Dtor(); /*0x4a3959*/
        return (void *)v5; /*0x4a395e*/
      }
      (*(void (**)(CCFileClass *, int, size_t))(*(unsigned int *)v8.CDFileClass + 36))( (CCFileClass *)(&v8), v5, (size_t)(v6)); /*0x4a392a*/
    }
    v7 = v5 == 0; /*0x4a392d*/
    goto LABEL_6; /*0x4a392d*/
  }
  return result;
}
}
// 0x4A3970
namespace gamemd {
AbstractClass * * FileClass_LoadToBuffer(char ** a1, bool * a2)
{
  char *v3; // esi
  gamemd::AbstractClass **result;
  void *v5; // esi
  size_t v6; // ebx
  bool v7; // zf
  unsigned int v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
  unsigned int v9[5]; // [esp+64h] [ebp-14h] BYREF

  v3 = (char *)((int)(((String *)(a1))->GetOrEmpty_Alt()));
  *a2 = (int)(0);
  result = (gamemd::AbstractClass **)SearchMIXFile( (char *)(v3), 0); /*0x4a3985*/
  if ( !result ) /*0x4a398c*/
  {
    ((CCFileClass*)v8)->Construct( (char *)(v3)); /*0x4a3994*/
    v5 = (void *)(0); /*0x4a3999*/
    if ( (*(uint8_t (**)(unsigned int *, unsigned int))(v8[0] + 20))( (unsigned int *)(v8), 0) ) /*0x4a39a4*/
    {
      v6 = (*(int (**)(unsigned int *))(v8[0] + 44))( (unsigned int *)(v8)); /*0x4a39b6*/
      v5 = RA2_OPNEW(v6); /*0x4a39be*/
      v7 = v5 == 0; /*0x4a39c3*/
      if ( !v5 ) /*0x4a39c5*/
      {
  LABEL_6: *a2 = (unsigned int)((gamemd::AbstractClass **)(!v7));
        v8[0] = (unsigned int)((gamemd::AbstractClass **)((void*)&CCFileClass_vftable));
        v9[3] = (unsigned int)((gamemd::AbstractClass **)(0));
        ((Vector *)((int)v9))->Clear((int)((Vector *)((int)v9))); /*0x4a39ef*/
        v8[0] = (unsigned int)((gamemd::AbstractClass **)((unsigned int)&off_7E1668)); /*0x4a39f8*/
        ((BufferIOFileClass *)(v8))->Dtor(); /*0x4a3a00*/
        return (gamemd::AbstractClass **)((int)v5); /*0x4a3a05*/
      }
      (*(void (**)(unsigned int *, void *, size_t))(v8[0] + 36))( (unsigned int *)(v8), (void *)(v5), v6); /*0x4a39d1*/
    }
    v7 = v5 == 0; /*0x4a39d4*/
    goto LABEL_6; /*0x4a39d4*/
  }
  return (gamemd::AbstractClass **)(result);
}
}
// 0x4A3C30
namespace gamemd {
int Palette_Fade(const void * a1, signed int a2, void (*a3)(void))
{
  int result; // eax
  unsigned char *v6; // eax
  int v7; // ecx
  DWORD v8; // edx
  signed int v9; // esi
  DWORD v10; // eax
  signed int v11; // eax
  signed int v12; // esi
  signed int v13; // eax
  int v14; // eax
  signed int v15; // esi
  signed int v16; // eax
  int v17; // edi
  signed int v18; // esi
  DWORD v19; // eax
  signed int v20; // eax
  DWORD Ticks; // [esp+8h] [ebp-910h]
  signed int v22; // [esp+10h] [ebp-908h]
  unsigned char v24[768]; // [esp+18h] [ebp-900h] BYREF
  unsigned char Src[768]; // [esp+318h] [ebp-600h] BYREF
  unsigned char v26[768]; // [esp+618h] [ebp-300h] BYREF

  result = (*(int (**)(int))(*(unsigned int *)g_DSurface_Primary + 112))(g_DSurface_Primary); /*0x4a3c48*/
  if ( result == 1 ) /*0x4a3c4e*/
  {
    Ticks = ((Timer *)0)->GetTicks(); /*0x4a3c5f*/
    v22 = a2; /*0x4a3c63*/
    v6 = &v24[2]; /*0x4a3c67*/
    v7 = 256; /*0x4a3c6b*/
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
    qmemcpy( (void *)(v24), (const void *)(&unk_89F990), sizeof(v24)); /*0x4a3c92*/
    qmemcpy( (void *)(v26), (const void *)(a1), sizeof(v26)); /*0x4a3ca9*/
    while ( 1 ) /*0x4a3cab*/
    {
      v9 = v22; /*0x4a3cab*/
      if ( v8 != -1 ) /*0x4a3cb2*/
      {
        v10 = ((Timer *)0)->GetTicks(); /*0x4a3cb8*/
        v8 = Ticks; /*0x4a3cbd*/
        v11 = v10 - Ticks; /*0x4a3cc1*/
        if ( v11 >= v22 ) /*0x4a3cc5*/
// 0x4a4780
          return (int)(((Surface*)v26)->CreateSurfacePalette()); /*0x4a3cc5*/
        v9 = v22 - v11; /*0x4a3ccb*/
      }
      if ( !v9 ) /*0x4a3ccf*/
// 0x4a4780
        return (int)(((Surface*)v26)->CreateSurfacePalette()); /*0x4a3daf*/
      qmemcpy( (void *)(Src), (const void *)(v24), sizeof(Src)); /*0x4a3ce8*/
      v12 = v22; /*0x4a3cea*/
      if ( v8 != -1 ) /*0x4a3cee*/
      {
                v14 = TimerGetTicks() - Ticks;
        if ( v13 >= v22 ) /*0x4a3cff*/
          v12 = 0; /*0x4a3d05*/
        else
          v12 = v22 - v13; /*0x4a3d01*/
      }
      v14 = ((a2 - v12) << 8) / a2; /*0x4a3d13*/
      if ( v14 >= 255 ) /*0x4a3d1a*/
        v14 = 255; /*0x4a3d1c*/
      Render_Helper(v14, v26); /*0x4a3d31*/
      v15 = v22; /*0x4a3d36*/
      if ( Ticks == -1 ) /*0x4a3d3f*/
        goto LABEL_18; /*0x4a3d3f*/
      v16 = TimerGetTicks() - Ticks; /*0x4a3d4a*/
      if ( v16 < v22 ) /*0x4a3d50*/
        break; /*0x4a3d50*/
      v17 = 0; /*0x4a3d8c*/
  LABEL_19:
      ((Surface*)Src)->CreateSurfacePalette(); /*0x4a3d56*/
      if ( a3 ) /*0x4a3d64*/
  LABEL_20:
        a3(); /*0x4a3d66*/
      v8 = Ticks; /*0x4a3d68*/
      while ( 1 ) /*0x4a3d6c*/
      {
        v18 = v22; /*0x4a3d6c*/
        if ( v8 != -1 ) /*0x4a3d73*/
        {
          v19 = TimerGetTicks(); /*0x4a3d79*/
          v8 = Ticks; /*0x4a3d7e*/
          v20 = v19 - Ticks; /*0x4a3d82*/
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
}
// 0x4A4130
namespace gamemd {
INIClass * * int sub_4A4130()
{
  LPDIRECTDRAW v1; // eax
  char v2; // bl
  int v3; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // eax
  unsigned int v8[27]; // [esp+Ch] [ebp-1F8h] BYREF
  CHAR Text[80]; // [esp+78h] [ebp-18Ch] BYREF
  unsigned int v10[79]; // [esp+C8h] [ebp-13Ch] BYREF

  v1 = g_lpDirectDraw7; /*0x4a4130*/
  v2 = 0; /*0x4a413c*/
  if ( !g_lpDirectDraw7 ) /*0x4a4148*/
  {
    v3 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a4153*/
    if ( v3 ) /*0x4a415a*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4168*/
      {
        g_DDraw_ErrorCallback(v3); /*0x4a4170*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a427b*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4296*/
      }
      v1 = 0; /*0x4a4172*/
      g_lpDirectDraw7 = 0; /*0x4a4174*/
    }
    else
    {
      v1 = g_lpDirectDraw7; /*0x4a429d*/
      v2 = 1; /*0x4a42a2*/
    }
  }
  v4 = 0; /*0x4a4179*/
  if ( v1 ) /*0x4a417d*/
  {
    v10[0] = 316; /*0x4a418a*/
    if ( !v1->lpVtbl->GetCaps(v1, (LPDDCAPS)v10, 0) ) /*0x4a419a*/
    {
      v5 = v10[15]; /*0x4a41af*/
      Debug::Log("DDraw returnded actual VRAM of %d bytes (%dMb)\n"); /*0x4a41bb G57w11: IDA push seq @ 0x4a41bb +2 reg-vararg(s) omitted*/
      memset( (void *)(v8), 0, sizeof(v8)); /*0x4a41ce*/
      v8[0] = 108; /*0x4a41d9*/
      if ( !g_lpDirectDraw7->lpVtbl->GetDisplayMode(g_lpDirectDraw7, (LPDDSURFACEDESC)v8) ) /*0x4a41e5*/
      {
        Debug::Log("Current display size is %dx%dx%d. Pitch is %d\n"); /*0x4a4206 G57w11: IDA push seq @ 0x4a4206 +4 reg-vararg(s) omitted*/
        v5 += v8[2] * v8[3] * (v8[21] >> 3); /*0x4a421f*/
      }
      v4 = (v5 + 0x20000) & 0xFFF00000; /*0x4a4227*/
      Debug::Log("Adjusted VRAM size is %d bytes (%dMb)\n"); /*0x4a4239 G57w11: IDA push seq @ 0x4a4239 +2 reg-vararg(s) omitted*/
    }
    v1 = g_lpDirectDraw7; /*0x4a4241*/
  }
  if ( v2 && v1 ) /*0x4a4250*/
  {
    v6 = v1->lpVtbl->Release(v1); /*0x4a4259*/
    if ( v6 ) /*0x4a425e*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4268*/
      {
        g_DDraw_ErrorCallback(v6); /*0x4a426c*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v6); /*0x4a42b4*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a42cf*/
      }
    }
    g_lpDirectDraw7 = 0; /*0x4a42d1*/
  }
  return (INIClass * * int)v4; /*0x4a42dd*/
}
}
// 0x4A4900
namespace gamemd {
unsigned int * sub_4A4900(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int *v5; // ebx
  unsigned int *v6; // esi
  int v7; // edi
  unsigned int *v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int *v11; // esi
  size_t NumOfElements; // [esp+14h] [ebp-24h]
  void **v16; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v18; // [esp+2Ch] [ebp-Ch]
  int v19; // [esp+30h] [ebp-8h]
  int v20; // [esp+34h] [ebp-4h]

  if ( !g_lpDirectDraw7 ) /*0x4a4915*/
    return 0; /*0x4a4ab2*/
  sub_4A4E30(&v16, 0, 0); /*0x4a4923*/
  v16 = (void **)((void*)&DynamicVectorClass__DDSURFACEDESC___vftable); /*0x4a4937*/
  v20 = 10; /*0x4a493f*/
  v19 = 0; /*0x4a4947*/
  if ( g_lpDirectDraw7->lpVtbl->EnumDisplayModes(g_lpDirectDraw7, 0, 0, &v16, (LPDDENUMMODESCALLBACK)sub_4A4850) || !v19 ) /*0x4a4967*/
  {
    v16 = (void **)((void*)&VectorClass__DDSURFACEDESC___vftable); /*0x4a4a93*/
    if ( Block && IDA_BYTE1(v18) ) /*0x4a4aa5*/
      RA2_OPDEL(Block); /*0x4a4aa8*/
    return 0; /*0x4a4aa8*/
  }
  v5 = (unsigned int *)RA2_OPNEW(8 * v19 + 4); /*0x4a497e*/
  v6 = v5; /*0x4a4990*/
  memset( (void *)(v5), 0, 8 * v19 + 4); /*0x4a4995*/
  NumOfElements = 0; /*0x4a4999*/
  v7 = 0; /*0x4a49aa*/
  if ( v19 <= 0 ) /*0x4a49ae*/
    goto LABEL_13; /*0x4a49ae*/
  do /*0x4a4a12*/
  {
    v8 = (unsigned int *)*((unsigned int *)Block + v7); /*0x4a49b9*/
    v9 = v8[3]; /*0x4a49bc*/
    if ( v9 <= a3 ) /*0x4a49c1*/
    {
      v10 = v8[2]; /*0x4a49c3*/
      if ( v10 <= a4 && v9 >= a1 && v10 >= a2 && v8[21] == a5 ) /*0x4a49e3*/
      {
        *v6 = v9; /*0x4a49e5*/
        v11 = v6 + 1; /*0x4a49ea*/
        *v11 = v8[2]; /*0x4a49ed*/
        v6 = v11 + 1; /*0x4a49f3*/
        ++NumOfElements; /*0x4a49f7*/
      }
    }
    RA2_OPDEL(*((void **)Block + v7++)); /*0x4a4a03*/
  }
  while ( v7 < v19 ); /*0x4a4a12*/
  if ( v6 == v5 ) /*0x4a4a17*/
  {
  LABEL_13:
    RA2_OPDEL(v5); /*0x4a4a1a*/
    v16 = (void **)((void*)&VectorClass__DDSURFACEDESC___vftable); /*0x4a4a28*/
    if ( Block && IDA_BYTE1(v18) ) /*0x4a4a38*/
    {
      RA2_OPDEL(Block); /*0x4a4a3b*/
      return 0; /*0x4a4a4b*/
    }
    return 0; /*0x4a4a38*/
  }
  qsort(v5, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4A48C0); /*0x4a4a5b*/
  v16 = (void **)((void*)&VectorClass__DDSURFACEDESC___vftable); /*0x4a4a69*/
  if ( Block && IDA_BYTE1(v18) ) /*0x4a4a79*/
    RA2_OPDEL(Block); /*0x4a4a7c*/
  return v5; /*0x4a4a45*/
}
}
// 0x4A59E0
namespace gamemd {
unsigned int * GetTextBoundingRect(unsigned int * a1, CampaignScore * a2, int a3, int a4, short a5, int a6, int a7)
{
  int v7; // edi
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // ecx

  v7 = g_FogOfWarState; /*0x4a59e4*/
  v9 = Text::MeasureWidth((int)(a2), 0); /*0x4a59f1*/
  v10 = *(unsigned int *)(v7 + 28); /*0x4a59f6*/
  v11 = v9; /*0x4a59f9*/
  v12 = a3; /*0x4a5a06*/
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
}
// 0x4A5A50
namespace gamemd {
int SHP_DrawBuildingTiles(int * a1, int a2, char a3)
{
  unsigned int *v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // ecx
  int *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // ebp
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edi
  int v47; // ebx
  int v48; // eax
  int v49; // edx
  int v51; // edi
  int v52; // ebx
  int v53; // eax
  int v54; // edx
  int v55; // ecx
  int v56; // edx
  int v57; // edi
  int v58; // ebx
  int v59; // eax
  unsigned int v60[2]; // [esp+24h] [ebp-C0h] BYREF
  unsigned int v61[2]; // [esp+2Ch] [ebp-B8h] BYREF
  unsigned int v62[2]; // [esp+34h] [ebp-B0h] BYREF
  unsigned int v63[2]; // [esp+3Ch] [ebp-A8h] BYREF
  unsigned int v64[2]; // [esp+44h] [ebp-A0h] BYREF
  unsigned int v65[2]; // [esp+4Ch] [ebp-98h] BYREF
  int v66; // [esp+54h] [ebp-90h] BYREF
  int v67; // [esp+58h] [ebp-8Ch]
  unsigned int v68[2]; // [esp+5Ch] [ebp-88h] BYREF
  int v69; // [esp+64h] [ebp-80h] BYREF
  int v70; // [esp+68h] [ebp-7Ch]
  unsigned int v71[2]; // [esp+6Ch] [ebp-78h] BYREF
  unsigned int v72[4]; // [esp+74h] [ebp-70h] BYREF
  unsigned int v73[2]; // [esp+84h] [ebp-60h] BYREF
  int v74; // [esp+8Ch] [ebp-58h]
  int v75; // [esp+90h] [ebp-54h]
  int v76; // [esp+94h] [ebp-50h]
  int v77; // [esp+98h] [ebp-4Ch]
  int v78; // [esp+9Ch] [ebp-48h]
  int v79; // [esp+A0h] [ebp-44h]
  int v80; // [esp+A4h] [ebp-40h]
  int v81; // [esp+A8h] [ebp-3Ch]
  int v82; // [esp+ACh] [ebp-38h]
  int v83; // [esp+B0h] [ebp-34h]
  int v84; // [esp+B4h] [ebp-30h]
  int v85; // [esp+B8h] [ebp-2Ch]
  int v86; // [esp+BCh] [ebp-28h]
  int v87; // [esp+C0h] [ebp-24h]
  int v88; // [esp+C4h] [ebp-20h]
  int v89; // [esp+C8h] [ebp-1Ch]
  int v90; // [esp+CCh] [ebp-18h]
  int v91; // [esp+D0h] [ebp-14h]
  int v92; // [esp+D4h] [ebp-10h]
  int v93; // [esp+D8h] [ebp-Ch]
  int v94; // [esp+DCh] [ebp-8h]
  int v95; // [esp+E0h] [ebp-4h]

  v81 = 15; /*0x4a5a69*/
  v86 = 14; /*0x4a5a74*/
  v5 = (unsigned int *)*((unsigned int *)dword_B054D4 + BuildingAnim::GetType()); /*0x4a5a7f*/
  v6 = v5[202]; /*0x4a5a8b*/
  v7 = v5[200]; /*0x4a5a91*/
  v8 = v5[201]; /*0x4a5a97*/
  v74 = v5[199]; /*0x4a5a9d*/
  v77 = v74; /*0x4a5aa1*/
  v73[1] = v6; /*0x4a5aad*/
  v78 = v6; /*0x4a5ab1*/
  v82 = 12; /*0x4a5ab8*/
  v85 = 12; /*0x4a5abf*/
  v73[0] = v7; /*0x4a5acd*/
  v76 = v7; /*0x4a5ad1*/
  v88 = v7; /*0x4a5ad8*/
  v91 = v7; /*0x4a5adf*/
  v92 = v7; /*0x4a5ae6*/
  v95 = v7; /*0x4a5aed*/
  v80 = 13; /*0x4a5afb*/
  v83 = 13; /*0x4a5b02*/
  v84 = 13; /*0x4a5b09*/
  v87 = 13; /*0x4a5b10*/
  v9 = v5[203]; /*0x4a5b17*/
  v75 = v8; /*0x4a5b1d*/
  v79 = v8; /*0x4a5b24*/
  v89 = v9; /*0x4a5b2b*/
  v90 = v9; /*0x4a5b34*/
  v93 = v9; /*0x4a5b3b*/
  v94 = v9; /*0x4a5b42*/
  v10 = (int *)(&v73[4 * a2]); /*0x4a5b49*/
  if ( a3 ) /*0x4a5b4d*/
  {
    v11 = v5[195]; /*0x4a5b4f*/
    v12 = *v10; /*0x4a5b55*/
    if ( *(unsigned int *)(v11 + 4) == 1 ) /*0x4a5b5b*/
      v13 = *(uint8_t *)(*(unsigned int *)(v11 + 372) + v12); /*0x4a5b68*/
    else
      v13 = *(uint16_t *)(*(unsigned int *)(v11 + 372) + 2 * v12); /*0x4a5b74*/
    (*(void (**)(int, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))( g_DSurface_Hidden_2, (int *)(a1), v13); /*0x4a5b82*/
  }
  v14 = a2 - 4; /*0x4a5b85*/
  if ( v14 ) /*0x4a5b88*/
  {
    if ( v14 == 1 ) /*0x4a5b8f*/
    {
      v51 = v5[195]; /*0x4a5d9c*/
      v52 = v10[2]; /*0x4a5da2*/
      if ( *(unsigned int *)(v51 + 4) == 1 ) /*0x4a5da9*/
        v53 = *(uint8_t *)(*(unsigned int *)(v51 + 372) + v52); /*0x4a5db3*/
      else
        v53 = *(uint16_t *)(*(unsigned int *)(v51 + 372) + 2 * v52); /*0x4a5dc0*/
      v54 = a1[1] + 1; /*0x4a5dca*/
      v72[0] = *a1 + 1; /*0x4a5dcb*/
      v55 = a1[2]; /*0x4a5dcf*/
      v72[1] = v54; /*0x4a5dd2*/
      v56 = a1[3] - 1; /*0x4a5dda*/
      v72[2] = v55 - 1; /*0x4a5ddb*/
      v72[3] = v56; /*0x4a5de6*/
return (*(int (**)(int, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 88))( /*0x4a5df1*/ g_DSurface_Hidden_2, (unsigned int *)(v72), v53);



    }
    else
    {
      v15 = v5[195]; /*0x4a5b95*/
      v16 = v10[1]; /*0x4a5b9b*/
      v17 = *(unsigned int *)(v15 + 4); /*0x4a5b9e*/
      v18 = *(unsigned int *)(v15 + 372); /*0x4a5ba1*/
      if ( v17 == 1 ) /*0x4a5baa*/
        v19 = *(uint8_t *)(v18 + v16); /*0x4a5bae*/
      else
        v19 = *(uint16_t *)(v18 + 2 * v16); /*0x4a5bb5*/
      v20 = *a1; /*0x4a5bb9*/
      v21 = a1[3]; /*0x4a5bc3*/
      v66 = a1[2] + *a1; /*0x4a5bc6*/
      v67 = v21 + a1[1]; /*0x4a5bd3*/
      v62[1] = v67; /*0x4a5bd7*/
      v62[0] = v20; /*0x4a5be2*/
(*(void (**)(int, unsigned int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5bed*/ g_DSurface_Hidden_2, (unsigned int *)(v62), (int *)(&v66), v19);




      v22 = v5[195]; /*0x4a5bf0*/
      v23 = v10[1]; /*0x4a5bf6*/
      v24 = *(unsigned int *)(v22 + 4); /*0x4a5bf9*/
      v25 = *(unsigned int *)(v22 + 372); /*0x4a5bfc*/
      if ( v24 == 1 ) /*0x4a5c05*/
        v26 = *(uint8_t *)(v25 + v23); /*0x4a5c09*/
      else
        v26 = *(uint16_t *)(v25 + 2 * v23); /*0x4a5c10*/
      v27 = a1[2] + *a1; /*0x4a5c19*/
      v28 = a1[3] + a1[1]; /*0x4a5c21*/
      v64[1] = a1[1]; /*0x4a5c24*/
      v71[0] = v27; /*0x4a5c33*/
      v71[1] = v28; /*0x4a5c37*/
      v64[0] = v27; /*0x4a5c3b*/
(*(void (**)(int, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5c46*/ g_DSurface_Hidden_2, (unsigned int *)(v64), (unsigned int *)(v71), v26);




      v29 = v5[195]; /*0x4a5c49*/
      v30 = v10[2]; /*0x4a5c4f*/
      v31 = *(unsigned int *)(v29 + 4); /*0x4a5c57*/
      v32 = *(unsigned int *)(v29 + 372); /*0x4a5c5a*/
      if ( v31 == 1 ) /*0x4a5c62*/
        v33 = *(uint8_t *)(v32 + v30); /*0x4a5c66*/
      else
        v33 = *(uint16_t *)(v32 + 2 * v30); /*0x4a5c6d*/
      v34 = a1[2] + *a1; /*0x4a5c7a*/
      v60[0] = *a1; /*0x4a5c7e*/
      v69 = v34; /*0x4a5c86*/
      v70 = a1[1]; /*0x4a5c8d*/
      v60[1] = v70; /*0x4a5c91*/
(*(void (**)(int, unsigned int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5c9e*/ g_DSurface_Hidden_2, (unsigned int *)(v60), (int *)(&v69), v33);




      v35 = v5[195]; /*0x4a5ca1*/
      v36 = v10[2]; /*0x4a5ca7*/
      v37 = *(unsigned int *)(v35 + 4); /*0x4a5caa*/
      v38 = *(unsigned int *)(v35 + 372); /*0x4a5cad*/
      if ( v37 == 1 ) /*0x4a5cb5*/
        v39 = *(uint8_t *)(v38 + v36); /*0x4a5cb9*/
      else
        v39 = *(uint16_t *)(v38 + 2 * v36); /*0x4a5cc0*/
      v40 = *a1; /*0x4a5cc7*/
      v41 = a1[3] + a1[1]; /*0x4a5ccc*/
      v63[1] = a1[1]; /*0x4a5ccf*/
      v61[0] = v40; /*0x4a5cde*/
      v61[1] = v41; /*0x4a5ce2*/
      v63[0] = v40; /*0x4a5ce6*/
(*(void (**)(int, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5cf1*/ g_DSurface_Hidden_2, (unsigned int *)(v63), (unsigned int *)(v61), v39);




      v42 = v5[195]; /*0x4a5cf4*/
      v43 = v10[3]; /*0x4a5cfa*/
      if ( *(unsigned int *)(v42 + 4) == 1 ) /*0x4a5d05*/
        v44 = *(uint8_t *)(*(unsigned int *)(v42 + 372) + v43); /*0x4a5d12*/
      else
        v44 = *(uint16_t *)(*(unsigned int *)(v42 + 372) + 2 * v43); /*0x4a5d1e*/
      v45 = a1[1]; /*0x4a5d24*/
      v65[0] = *a1; /*0x4a5d27*/
      v65[1] = a1[3] + v45; /*0x4a5d37*/
      (*(void (**)(int, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 36))( g_DSurface_Hidden_2, (unsigned int *)(v65), v44); /*0x4a5d42*/
      v46 = v5[195]; /*0x4a5d45*/
      v47 = v10[3]; /*0x4a5d4b*/
      if ( *(unsigned int *)(v46 + 4) == 1 ) /*0x4a5d51*/
        v48 = *(uint8_t *)(*(unsigned int *)(v46 + 372) + v47); /*0x4a5d5b*/
      else
        v48 = *(uint16_t *)(*(unsigned int *)(v46 + 372) + 2 * v47); /*0x4a5d68*/
      v49 = a1[1]; /*0x4a5d71*/
      v68[0] = *a1 + a1[2]; /*0x4a5d76*/
      v68[1] = v49; /*0x4a5d81*/
return (*(int (**)(int, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 36))( /*0x4a5d8c*/ g_DSurface_Hidden_2, (unsigned int *)(v68), v48);



    }
  }
  else
  {
    v57 = v5[195]; /*0x4a5e01*/
    v58 = v10[2]; /*0x4a5e07*/
    if ( *(unsigned int *)(v57 + 4) == 1 ) /*0x4a5e0e*/
      v59 = *(uint8_t *)(*(unsigned int *)(v57 + 372) + v58); /*0x4a5e18*/
    else
      v59 = *(uint16_t *)(*(unsigned int *)(v57 + 372) + 2 * v58); /*0x4a5e25*/
    return (*(int (**)(int, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 88))( g_DSurface_Hidden_2, (int *)(a1), v59); /*0x4a5e33*/
  }
}
}
// 0x4A5EB0
namespace gamemd {
void * RenderTextLabel(int * a0, AbstractClass * aP1, int * a2, AbstractClass, void * a1, void * a3, void * a4, void * a5, void * a6, void * a8)
{
  unsigned int *v9; // edi
  Char *v10; // ebx
  int v11; // ebp
  int v12; // esi
  char v13; // ah
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v22; // [esp+18h] [ebp-20h] BYREF
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+20h] [ebp-18h]
  char *v25; // [esp+24h] [ebp-14h]
  unsigned int v26[4]; // [esp+28h] [ebp-10h] BYREF

  v9 = (unsigned int *)(a4); /*0x4a5ebe*/
  v10 = (Char *)g_FogOfWarState; /*0x4a5ec8*/
  v11 = a4[1] + *(unsigned int *)((char *)a5 +); /*0x4a5ed3*/
  v12 = (int)(*(unsigned int *)a5 + *a4); /*0x4a5ed8*/
  ((Text *)(g_FogOfWarState))->Layout( (unsigned short *)(a2), (int *)(&a5), (unsigned int *)(&a4), a4[2]); /*0x4a5eec*/
  v13 = IDA_BYTE1(a8); /*0x4a5ef1*/
  if ( (a8 & 0x100) != 0 ) /*0x4a5efc*/
  {
    v12 += a5 / -2; /*0x4a5f07*/
    v13 = IDA_BYTE1(a8); /*0x4a5f09*/
  }
  else if ( (a8 & 0x200) != 0 ) /*0x4a5f12*/
  {
    v12 -= a5; /*0x4a5f14*/
  }
  if ( v13 >= 0 ) /*0x4a5f19*/
  {
    if ( (v13 & 4) != 0 ) /*0x4a5f64*/
    {
      v24 = (int)(a5 + 2); /*0x4a5f6c*/
      v25 = (char *)a4 + 2; /*0x4a5f7a*/
      v23 = v11 - 1; /*0x4a5f82*/
      v22 = v12 - 1; /*0x4a5f86*/
      (*(void (**)(int *, int *, unsigned int))(*a3 + 20))( (int *)(a3), (int *)(&v22), 0); /*0x4a5f93*/
    }
  }
  else
  {
    v24 = (int)(a5 + 2); /*0x4a5f21*/
    v23 = v11 - 1; /*0x4a5f2c*/
    v25 = (char *)a4 + 2; /*0x4a5f30*/
    v22 = v12 - 1; /*0x4a5f42*/
    v14 = (int)(*a3); /*0x4a5f46*/
    IDA_LOWORD(a8) = 0; /*0x4a5f4c*/
    IDA_BYTE2(a8) = 0; /*0x4a5f57*/
    (*(void (**)(int *, int *, int *, int))(v14 + 28))( (int *)(a3), (int *)(&v22), (int *)(&a8), 60); /*0x4a5f5c*/
  }
  v15 = v9[2]; /*0x4a5f98*/
  v16 = v9[1]; /*0x4a5f9b*/
  v26[0] = *v9; /*0x4a5f9e*/
  v17 = v15 + v26[0]; /*0x4a5fa2*/
  v18 = v9[3]; /*0x4a5fa4*/
  v26[1] = v16; /*0x4a5fa7*/
  v26[2] = v17; /*0x4a5fb1*/
  v26[3] = v16 + v18; /*0x4a5fb5*/
  ((Char *)(v10))->Swap(1); /*0x4a5fb9*/
  ((TextGroup *)((TextGroup *)v10))->SetRect( (unsigned int *)(v26)); /*0x4a5fc5*/
  ((Property *)((Property *)v10))->Set((int16_t)(a6)); /*0x4a5fd1*/
  FontRenderer::DrawText(v10, a3, a2, v12, v11, 0, 0); /*0x4a5fed*/
  *a1 = (void *)(v12); /*0x4a5ff7*/
  a1[1] = v11; /*0x4a5ff9*/
  return a1; /*0x4a5ff6*/
}
}
// 0x4A6010
namespace gamemd {
void globalHelper_0A6010(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8, void * a9)
{
  int v11; // eax
  int *v12; // eax
  int v14; // [esp+8h] [ebp-8h] BYREF

  v11 = ((Color *)((uint8_t *)(a6 + 776)))->ConvertToRGB((int)&a6); /*0x4a6028*/
  IDA_LOWORD(v14) = *(unsigned short *)v11; /*0x4a6036*/
  IDA_BYTE2(v14) = *(unsigned char *)(v11 + 2); /*0x4a603e*/
  v12 = RenderTextLabel( /*0x4a60b2*/
          &v14,
          a2,
          a3,
          a4,
          a5,
          ((uint8_t)v14 >> g_BitShift_Green_0 << g_BitShift_Red)
        | (IDA_BYTE1(v14) >> g_BitMask_Blue << g_BitMask_Green)
        | (IDA_BYTE2(v14) >> g_BitMask_Red << g_BitShift_Blue),
          a7,
          a8,
          a9);
  *a1 = (void *)(*v12); /*0x4a60b9*/
  a1[1] = v12[1]; /*0x4a60bf*/
  return a1; /*0x4a60bb*/
}
}
// 0x4A6360
namespace gamemd {
ControlClass * * RenderTextLabelWordWrap(int * a1, const wchar_t * a2, int a3, unsigned int * a4, int * a5, short a6, int a7, int a8, unsigned int a9, unsigned int * a10)
{
  int *v10; // esi
  int v11; // edi
  wchar_t *v12; // ebp
  unsigned int v13; // ebx
  wchar_t *v14; // eax
  wchar_t *v15; // edx
  int v16; // esi
  wchar_t *v17; // edi
  int v18; // eax
  int v19; // edx
  int *v20; // eax
  unsigned int *v21; // ecx
  unsigned int v22; // eax
  int v24; // [esp+Ch] [ebp-424h]
  wchar_t *v25; // [esp+10h] [ebp-420h]
  int v27; // [esp+1Ch] [ebp-414h]
  unsigned int v28[2]; // [esp+20h] [ebp-410h] BYREF
  int v29; // [esp+28h] [ebp-408h] BYREF
  wchar_t Destination[512]; // [esp+30h] [ebp-400h] BYREF

  v10 = a1; /*0x4a636f*/
  v11 = *a5; /*0x4a6371*/
  v27 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wcscpy( (wchar_t *)(Destination), (const wchar_t *)(a2)); /*0x4a638e*/
    v12 = (wchar_t *)(Destination); /*0x4a63a0*/
    v13 = 0; /*0x4a63a4*/
    v24 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      v14 = wcschr(v12, 9u); /*0x4a63be*/
      v15 = v14; /*0x4a63c3*/
      v25 = v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      IDA_LOWORD(v14) = *v12; /*0x4a63d5*/
      if ( *v12 ) /*0x4a63d5*/
      {
        v16 = 0; /*0x4a63e2*/
        v17 = v12; /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v17; /*0x4a63eb*/
          v14 = (wchar_t *)((FontClass *)v14)->GetPixelData((int)((FontClass *)v14)); /*0x4a63ee*/
          v16 += (int)v14; /*0x4a63f3*/
          IDA_LOWORD(v14) = *v17; /*0x4a63f5*/
        }
        while ( *v17 && v16 + v13 < a9 ); /*0x4a6409*/
        IDA_HIWORD(v18) = IDA_HIWORD(a9); /*0x4a640b*/
        if ( v16 + v13 >= a9 ) /*0x4a6417*/
        {
          IDA_LOWORD(v18) = *(v17 - 1); /*0x4a6419*/
          v16 -= ((FontClass *)v18)->GetPixelData((int)((FontClass *)v18)); /*0x4a642a*/
          *(v17 - 1) = 0; /*0x4a642c*/
          v24 = 0; /*0x4a6431*/
        }
        v19 = a5[1]; /*0x4a6444*/
        v28[0] = v13 + *a5; /*0x4a6450*/
        v28[1] = v19; /*0x4a645b*/
        v20 = (int *)RenderTextLabel(&v29, (int)v12, a3, a4, (int)v28, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v16; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v25; /*0x4a6491*/
        v27 = v20[1]; /*0x4a6498*/
      }
      if ( !v15 ) /*0x4a649e*/
        break; /*0x4a649e*/
      v21 = a10; /*0x4a64a0*/
      if ( a10 ) /*0x4a64a9*/
      {
        if ( v13 > *a10 ) /*0x4a64ad*/
        {
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
      v12 = v15 + 1; /*0x4a64d1*/
    }
    while ( v24 ); /*0x4a64d6*/
  }
  *v10 = v11; /*0x4a64e2*/
  v10[1] = v27; /*0x4a64e4*/
  return (gamemd::ControlClass **)(v10); /*0x4a64e9*/
}
}
// 0x4A65C0
namespace gamemd {
int * * sub_4A65C0(int * a1, int a2, int a3, unsigned int * a4, int a5, short a6, int a7, int a8, int a9, int a10)
{
  int *v12; // eax
  int v14; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a65d0*/
  {
    v12 = (int *)RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a65fb*/
  }
  else
  {
    v14 = ((Color *)((uint8_t *)(*((unsigned int *)dword_B054D4 + a9) + 776)))->ConvertToRGB((int)&a9); /*0x4a6628*/
    IDA_LOWORD(v15[0]) = *(unsigned short *)v14; /*0x4a6630*/
    IDA_BYTE2(v15[0]) = *(unsigned char *)(v14 + 2); /*0x4a663e*/
    v12 = RenderTextLabel( /*0x4a66b2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (IDA_BYTE1(v15[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (IDA_BYTE2(v15[0]) >> g_BitMask_Red << g_BitShift_Blue)
          | (IDA_LOBYTE(v15[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6602*/
  a1[1] = v12[1]; /*0x4a660a*/
  return (int **)(a1); /*0x4a6604*/
}
}
// 0x4A66D0
namespace gamemd {
void globalHelper_0A66D0(int * a1, void * a2, void * a3, void * a4, void * a5, short a6, int a7, int a8, void * a9, int a10)
{
  int *v12; // eax
  int v14; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9  ==  (void *)(-1) ) /*0x4a66e0*/
  {
    v12 = (int *)RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a670b*/
  }
  else
  {
    v14 = ((Color *)((uint8_t *)(*((unsigned int *)dword_B054D4 + a9) + 776)))->ConvertToRGB((int)&a9); /*0x4a6738*/
    IDA_LOWORD(v15[0]) = *(unsigned short *)v14; /*0x4a6740*/
    IDA_BYTE2(v15[0]) = *(unsigned char *)(v14 + 2); /*0x4a674e*/
    v12 = RenderTextLabel( /*0x4a67c2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            (IDA_BYTE1(v15[0]) >> g_BitMask_Blue << g_BitMask_Green)
          | (IDA_BYTE2(v15[0]) >> g_BitMask_Red << g_BitShift_Blue)
          | (IDA_LOBYTE(v15[0]) >> g_BitShift_Green_0 << g_BitShift_Red),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6712*/
  a1[1] = v12[1]; /*0x4a671a*/
  return a1; /*0x4a6714*/
}
}
// 0x4A67E0
namespace gamemd {
int * * sub_4A67E0(char a1, int a2)
{
  int v2; // ecx

  IDA_LOBYTE(a2) = a1; /*0x4a67e0*/
  IDA_BYTE1(a2) = a1; /*0x4a67e4*/
  dword_8A0150 = 0; /*0x4a67e6*/
  dword_8A0154 = 0; /*0x4a67ed*/
  v2 = a2 << 16; /*0x4a67f2*/
  dword_8A0158 = 0; /*0x4a67f5*/
  IDA_LOWORD(v2) = a2; /*0x4a67fa*/
  *(int *)((char *)&dword_8A0158 + 3) = v2; /*0x4a6802*/
  IDA_HIBYTE(dword_8A015C) = a2; /*0x4a6808*/
  return (int **)(&dword_8A0150); /*0x4a6813*/
}
}
// 0x4A6840
namespace gamemd {
AbstractClass * * E4Recv_4A6840::sub_4A6840(HWND hWnd, int a3, int a4, int a5)
{

  unsigned int *v6; // eax
  int i; // eax
  unsigned char *v8; // ecx
  int *p_vtable3; // ebp
  HDC DC; // edi
  unsigned int *vtable1; // ecx
  int uniqueId; // edx
  int v13; // eax
  unsigned int v14; // ebp
  char *v15; // edi
  int abstractFlags; // eax
  void *vtable3; // ecx

  LOBYTE(*(unsigned int *)&this->vfptr) = 0; /*0x4a6855*/
  ((unsigned int *)this)[0] = 0; /*0x4a6857*/
  ((unsigned int *)this)[0] = 0; /*0x4a685a*/
  ((unsigned int *)this)[0] = 0; /*0x4a685d*/
  ((unsigned int *)this)[0] = a3; /*0x4a6860*/
  ((unsigned int *)this)[0] = a4; /*0x4a6863*/
  ((unsigned int *)this)[0] = 0; /*0x4a6866*/
  ((unsigned int *)this)[0] = 0; /*0x4a6869*/
  ((unsigned int *)this)[0] = 0; /*0x4a686c*/
  v6 = (unsigned int *)__2_YAPAXI_Z(0x42Cu); /*0x4a686f*/
  ((unsigned int *)this)[0] = (unsigned int)v6; /*0x4a6879*/
  if ( !v6 ) /*0x4a687c*/
    goto LABEL_12; /*0x4a687c*/
  *v6 = 40; /*0x4a6882*/
  *((unsigned int *)((unsigned int *)this)[0] + 1) = a3; /*0x4a688d*/
  *((unsigned int *)((unsigned int *)this)[0] + 2) = -a4; /*0x4a6893*/
  *((unsigned short *)((unsigned int *)this)[0] + 6) = 1; /*0x4a689d*/
  *((unsigned short *)((unsigned int *)this)[0] + 7) = 8; /*0x4a68a6*/
  *((unsigned int *)((unsigned int *)this)[0] + 4) = 0; /*0x4a68af*/
  *((unsigned int *)((unsigned int *)this)[0] + 5) = 0; /*0x4a68b5*/
  *((unsigned int *)((unsigned int *)this)[0] + 6) = 0; /*0x4a68bb*/
  *((unsigned int *)((unsigned int *)this)[0] + 7) = 0; /*0x4a68c6*/
  *((unsigned int *)((unsigned int *)this)[0] + 8) = 256; /*0x4a68cc*/
  *((unsigned int *)((unsigned int *)this)[0] + 9) = 256; /*0x4a68d2*/
  for ( i = 0; i < 256; *((unsigned char *)((unsigned int *)this)[0] + 4 * i + 39) = 0 ) /*0x4a68d5*/
  {
    v8 = (unsigned char *)(a5 + 2 * (i % 256) + i % 256); /*0x4a68ef*/
    ++i; /*0x4a68f1*/
    *((unsigned char *)((unsigned int *)this)[0] + 4 * i + 36) = v8[2]; /*0x4a68fa*/
    *((unsigned char *)((unsigned int *)this)[0] + 4 * i + 37) = v8[1]; /*0x4a6904*/
    *((unsigned char *)((unsigned int *)this)[0] + 4 * i + 38) = *v8; /*0x4a690d*/
  }
  p_vtable3 = (int *)&((unsigned int *)this)[0]; /*0x4a6929*/
  DC = GetDC(hWnd); /*0x4a692e*/
  ((unsigned int *)this)[0] = (unsigned int)(CreateDIBSection(DC, (const BITMAPINFO *)((unsigned int *)this)[0], 0,(void **)( &((unsigned int *)this)[0]), 0, 0)); /*0x4a693f*/
  ReleaseDC(hWnd, DC); /*0x4a6942*/
  if ( !((unsigned int *)this)[0] ) /*0x4a6948*/
    goto LABEL_12; /*0x4a6948*/
  vtable1 = (unsigned int *)(((unsigned int *)this)[0]); /*0x4a6951*/
  ((unsigned int *)this)[0] = vtable1[1]; /*0x4a6957*/
  uniqueId = ((unsigned int *)this)[0]; /*0x4a6962*/
  ((unsigned int *)this)[0] = abs32(vtable1[2]); /*0x4a6965*/
  v13 = uniqueId + 3; /*0x4a6968*/
  LOBYTE(v13) = (uniqueId + 3) & 0xFC; /*0x4a696b*/
  ((unsigned int *)this)[0] = v13; /*0x4a696d*/
  if ( (int)vtable1[2] <= 0 ) /*0x4a6975*/
  {
    ((unsigned int *)this)[0] = *p_vtable3; /*0x4a698b*/
  }
  else
  {
    ((unsigned int *)this)[0] = *p_vtable3 + uniqueId * (((unsigned int *)this)[0] - 1); /*0x4a6981*/
    v13 = -v13; /*0x4a6984*/
  }
  ((unsigned int *)this)[0] = v13; /*0x4a698e*/
  v14 = abs32(v13); /*0x4a6998*/
  v15 = (char *)__2_YAPAXI_Z(0x20u); /*0x4a699f*/
  if ( v15 ) /*0x4a69a6*/
  {
    abstractFlags = ((unsigned int *)this)[0]; /*0x4a69a8*/
    vtable3 = (void *)(((unsigned int *)this)[0]); /*0x4a69ab*/
    *((unsigned int *)v15 + 2) = abstractFlags; /*0x4a69ae*/
    *((unsigned int *)v15 + 1) = v14; /*0x4a69b9*/
    *((unsigned int *)v15 + 3) = 0; /*0x4a69bc*/
    *(unsigned int *)v15 = (unsigned int)&XSurface_Vtable; /*0x4a69bf*/
    *((unsigned int *)v15 + 4) = 1; /*0x4a69c5*/
    ((Buffer*)((Buffer *)(v15 + 20)))->Init((int)vtable3, v14 * abstractFlags); /*0x4a69cc*/
    *(unsigned int *)v15 = (unsigned int)&BSurface_Vtable; /*0x4a69d1*/
  }
  else
  {
    v15 = (char *)(0); /*0x4a69d9*/
  }
  ((unsigned int *)this)[0] = (unsigned int)v15; /*0x4a69dd*/
  if ( !v15 ) /*0x4a69e0*/
LABEL_12:
    LOBYTE(*(unsigned int *)&this->vfptr) = 1; /*0x4a69e2*/
  return (gamemd::AbstractClass **)((char *)this); /*0x4a69e7*/

}
}
// 0x4A6CF0
namespace gamemd {
long long long Direction_InitOffsets()
{
  double v0; // st7
  int v1; // esi
  double v2; // st7
  double v3; // st7
  int v4; // esi
  double v5; // st7
  double v6; // st7
  int v7; // esi
  double v8; // st7
  double v9; // st7
  int v10; // esi
  double v11; // st7
  double v12; // st7
  int v13; // esi
  double v14; // st7
  double v15; // st7
  int v16; // esi
  double v17; // st7
  double v18; // st7
  int v19; // esi
  double v20; // st7
  double v21; // st7
  int v22; // esi
  double v23; // st7
  double v24; // st7
  int v25; // esi
  double v26; // st7
  double v27; // st7
  int v28; // esi
  double v29; // st7
  double v30; // st7
  int v31; // esi
  double v32; // st7
  double v33; // st7
  int v34; // esi
  double v35; // st7
  double v36; // st7
  int v37; // esi
  double v38; // st7
  double v39; // st7
  int v40; // esi
  double v41; // st7
  double v42; // st7
  int v43; // esi
  double v44; // st7
  double v45; // st7
  int v46; // esi
  double v47; // st7
  int64_t result; // rax

  v0 = Math::SinCos(0.0174532925199433 * 270.0); /*0x4a6d03*/
  v1 = Math::RoundToInt(v0 * 240.0); /*0x4a6d1f*/
  v2 = Math::ArcTan2(0.0174532925199433 * 270.0); /*0x4a6d24*/
  (&dword_8A0180)[0] = Math::RoundToInt(v2 * 240.0); /*0x4a6d40*/
  (&dword_8A0184)[0] = v1; /*0x4a6d45*/
  v3 = Math::SinCos(0.0174532925199433 * 292.0); /*0x4a6d4e*/
  v4 = Math::RoundToInt(v3 * 240.0); /*0x4a6d6a*/
  v5 = Math::ArcTan2(0.0174532925199433 * 292.0); /*0x4a6d6f*/
  dword_8A0188 = Math::RoundToInt(v5 * 240.0); /*0x4a6d8b*/
  dword_8A018C = v4; /*0x4a6d90*/
  v6 = Math::SinCos(0.0174532925199433 * 315.0); /*0x4a6d99*/
  v7 = Math::RoundToInt(v6 * 240.0); /*0x4a6db5*/
  v8 = Math::ArcTan2(0.0174532925199433 * 315.0); /*0x4a6dba*/
  dword_8A0190 = Math::RoundToInt(v8 * 240.0); /*0x4a6dd6*/
  dword_8A0194 = v7; /*0x4a6ddb*/
  v9 = Math::SinCos(0.0174532925199433 * 337.0); /*0x4a6de4*/
  v10 = Math::RoundToInt(v9 * 240.0); /*0x4a6e00*/
  v11 = Math::ArcTan2(0.0174532925199433 * 337.0); /*0x4a6e05*/
  dword_8A0198 = Math::RoundToInt(v11 * 240.0); /*0x4a6e19*/
  dword_8A019C = v10; /*0x4a6e1e*/
  v12 = Math::SinCos(0.0); /*0x4a6e24*/
  v13 = Math::RoundToInt(v12 * 240.0); /*0x4a6e38*/
  v14 = Math::ArcTan2(0.0); /*0x4a6e3a*/
  dword_8A01A0 = Math::RoundToInt(v14 * 240.0); /*0x4a6e59*/
  dword_8A01A4 = v13; /*0x4a6e5e*/
  v15 = Math::SinCos(0.0174532925199433 * 22.0); /*0x4a6e67*/
  v16 = Math::RoundToInt(v15 * 240.0); /*0x4a6e83*/
  v17 = Math::ArcTan2(0.0174532925199433 * 22.0); /*0x4a6e88*/
  dword_8A01A8 = Math::RoundToInt(v17 * 240.0); /*0x4a6ea4*/
  dword_8A01AC = v16; /*0x4a6ea9*/
  v18 = Math::SinCos(0.0174532925199433 * 45.0); /*0x4a6eb2*/
  v19 = Math::RoundToInt(v18 * 240.0); /*0x4a6ece*/
  v20 = Math::ArcTan2(0.0174532925199433 * 45.0); /*0x4a6ed3*/
  dword_8A01B0 = Math::RoundToInt(v20 * 240.0); /*0x4a6eef*/
  dword_8A01B4 = v19; /*0x4a6ef4*/
  v21 = Math::SinCos(0.0174532925199433 * 67.0); /*0x4a6efd*/
  v22 = Math::RoundToInt(v21 * 240.0); /*0x4a6f19*/
  v23 = Math::ArcTan2(0.0174532925199433 * 67.0); /*0x4a6f1e*/
  dword_8A01B8 = Math::RoundToInt(v23 * 240.0); /*0x4a6f3a*/
  dword_8A01BC = v22; /*0x4a6f3f*/
  v24 = Math::SinCos(0.0174532925199433 * 90.0); /*0x4a6f48*/
  v25 = Math::RoundToInt(v24 * 240.0); /*0x4a6f64*/
  v26 = Math::ArcTan2(0.0174532925199433 * 90.0); /*0x4a6f69*/
  dword_8A01C0 = Math::RoundToInt(v26 * 240.0); /*0x4a6f85*/
  dword_8A01C4 = v25; /*0x4a6f8a*/
  v27 = Math::SinCos(0.0174532925199433 * 112.0); /*0x4a6f93*/
  v28 = Math::RoundToInt(v27 * 240.0); /*0x4a6faf*/
  v29 = Math::ArcTan2(0.0174532925199433 * 112.0); /*0x4a6fb4*/
  dword_8A01C8 = Math::RoundToInt(v29 * 240.0); /*0x4a6fd0*/
  dword_8A01CC = v28; /*0x4a6fd5*/
  v30 = Math::SinCos(0.0174532925199433 * 135.0); /*0x4a6fde*/
  v31 = Math::RoundToInt(v30 * 240.0); /*0x4a6ffa*/
  v32 = Math::ArcTan2(0.0174532925199433 * 135.0); /*0x4a6fff*/
  dword_8A01D0 = Math::RoundToInt(v32 * 240.0); /*0x4a701b*/
  dword_8A01D4 = v31; /*0x4a7020*/
  v33 = Math::SinCos(0.0174532925199433 * 157.0); /*0x4a7029*/
  v34 = Math::RoundToInt(v33 * 240.0); /*0x4a7045*/
  v35 = Math::ArcTan2(0.0174532925199433 * 157.0); /*0x4a704a*/
  dword_8A01D8 = Math::RoundToInt(v35 * 240.0); /*0x4a7066*/
  dword_8A01DC = v34; /*0x4a706b*/
  v36 = Math::SinCos(0.0174532925199433 * 180.0); /*0x4a7074*/
  v37 = Math::RoundToInt(v36 * 240.0); /*0x4a7090*/
  v38 = Math::ArcTan2(0.0174532925199433 * 180.0); /*0x4a7095*/
  dword_8A01E0 = Math::RoundToInt(v38 * 240.0); /*0x4a70b1*/
  dword_8A01E4 = v37; /*0x4a70b6*/
  v39 = Math::SinCos(0.0174532925199433 * 202.0); /*0x4a70bf*/
  v40 = Math::RoundToInt(v39 * 240.0); /*0x4a70db*/
  v41 = Math::ArcTan2(0.0174532925199433 * 202.0); /*0x4a70e0*/
  dword_8A01E8 = Math::RoundToInt(v41 * 240.0); /*0x4a70fc*/
  dword_8A01EC = v40; /*0x4a7101*/
  v42 = Math::SinCos(0.0174532925199433 * 235.0); /*0x4a710a*/
  v43 = Math::RoundToInt(v42 * 240.0); /*0x4a7126*/
  v44 = Math::ArcTan2(0.0174532925199433 * 235.0); /*0x4a712b*/
  dword_8A01F0 = Math::RoundToInt(v44 * 240.0); /*0x4a7147*/
  dword_8A01F4 = v43; /*0x4a714c*/
  v45 = Math::SinCos(0.0174532925199433 * 257.0); /*0x4a7155*/
  v46 = Math::RoundToInt(v45 * 240.0); /*0x4a7171*/
  v47 = Math::ArcTan2(0.0174532925199433 * 257.0); /*0x4a7176*/
  result = Math::RoundToInt(v47 * 240.0); /*0x4a7184*/
  dword_8A01FC = v46; /*0x4a7189*/
  dword_8A01F8 = result; /*0x4a718f*/
  return result; /*0x4a7194*/
}
}
// 0x4A80D6
namespace gamemd {
int sub_4A80D6(int a1, signed int a2)
{
  int v4; // esi
  signed int v5; // ebx
  signed int v6; // eax
  int v7; // ebp
  HANDLE FileA; // eax
  DWORD Ticks; // [esp-110h] [ebp-120h]
  signed int v11; // [esp-108h] [ebp-118h]
  DWORD v12; // [esp-104h] [ebp-114h] BYREF
  DWORD v13[4]; // [esp-100h] [ebp-110h] BYREF
  CHAR v14[128]; // [esp-F0h] [ebp-100h] BYREF
  CHAR v15[128]; // [esp-70h] [ebp-80h] BYREF

  TimerGetTicks(); /*0x4a80e2*/
  v11 = a2; /*0x4a80fc*/
  v4 = a1 + 65; /*0x4a8100*/
  Ticks = TimerGetTicks(); /*0x4a8109*/
  wsprintfA(v14, "%c:\\", a1 + 65); /*0x4a8120*/
  if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a814a*/
  {
  LABEL_8:
    if ( !_strcmpi(aYr1, v15) ) /*0x4a81cd*/
    {
      v7 = 0; /*0x4a81e4*/
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
      v5 = v11; /*0x4a8154*/
      if ( Ticks != -1 ) /*0x4a815b*/
      {
        v6 = TimerGetTicks() - Ticks; /*0x4a8166*/
        if ( v6 >= v11 ) /*0x4a816c*/
          return -1; /*0x4a816c*/
        v5 = v11 - v6; /*0x4a8172*/
      }
      if ( !v5 || GetLastError() != 21 ) /*0x4a8185*/
        break; /*0x4a8185*/
      wsprintfA(v14, "%c:\\", v4); /*0x4a8196*/
      if ( GetVolumeInformationA(v14, v15, 0x7Fu, 0, &v12, v13, 0, 0) ) /*0x4a81ba*/
        goto LABEL_8; /*0x4a81be*/
    }
  }
  return -1; /*0x4a8257*/
}
}
// 0x4A8EB0
namespace gamemd {
void GetBuildingPlacement(IUnknown * aP0, int a2, DisplayClass * aP2, IUnknown * aP3)
{
  int FoundationWidth; // eax
  int v6; // ebp
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // esi
  int v13; // edi
  unsigned int *v14; // eax
  unsigned int *v15; // eax
  unsigned int *v16; // esi
  int v17; // ecx
  int16_t v19[2]; // [esp+8h] [ebp-20h] BYREF
  int v20; // [esp+Ch] [ebp-1Ch]
  int v21; // [esp+10h] [ebp-18h]
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-Ch]
  int FoundationHeight; // [esp+2Ch] [ebp+4h]
  char v25; // [esp+34h] [ebp+Ch]
  int v26; // [esp+38h] [ebp+10h]

  if ( a2 != *((unsigned int *)dword_A83D4C + 12) /*0x4a8f19*/
    || byte_A8ED6B
    || !aP2
    || *(unsigned int *)aP3 == dword_8A03F8
    || !aP0
    || (*(int (**)(unsigned int *))(*aP0 + 44))( (unsigned int *)(aP0)) != 7 )
  {
    return 1; /*0x4a905d*/
  }
  FoundationHeight = ((BuildingTypeClass *)((int)aP0))->GetFoundationHeight(0); /*0x4a8f2c*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(aP0); /*0x4a8f30*/
  v6 = *aP3; /*0x4a8f35*/
  v7 = aP3[1]; /*0x4a8f38*/
  v8 = FoundationWidth; /*0x4a8f3c*/
  v9 = aP0[941] + 1; /*0x4a8f48*/
  v20 = v8; /*0x4a8f4b*/
  v23 = v7; /*0x4a8f54*/
  v10 = v6 - v9 + v8 + 2 * v9; /*0x4a8f58*/
  v11 = v7 - v9; /*0x4a8f5a*/
  v25 = 0; /*0x4a8f61*/
  v26 = v6 - v9; /*0x4a8f66*/
  v22 = v10; /*0x4a8f6a*/
  if ( v6 - v9 < v10 ) /*0x4a8f6e*/
  {
    v12 = v11 + FoundationHeight + 2 * v9; /*0x4a8f74*/
    v21 = v12; /*0x4a8f76*/
    do /*0x4a9048*/
    {
      v13 = v11; /*0x4a8f7c*/
      if ( v11 < v12 ) /*0x4a8f7e*/
      {
        do /*0x4a9033*/
        {
          v19[0] = v26; /*0x4a8f90*/
          v19[1] = v13; /*0x4a8f95*/
          if ( (int16_t)v26 < v6 /*0x4a8fb9*/
            || (int16_t)v26 >= v6 + v20
            || (int16_t)v13 < v23
            || (int16_t)v13 >= v23 + FoundationHeight )
          {
            v14 = (unsigned int *)((CellCoord *)(&dword_87F7E8))->To_CellObj( (int16_t *)(v19)); /*0x4a8fc5*/
            v15 = ((Cell *)(v14))->IsBridge(); /*0x4a8fcc*/
            v16 = v15; /*0x4a8fd1*/
            if ( v15 ) /*0x4a8fd5*/
            {
              v17 = v15[135]; /*0x4a8fd7*/
              if ( *(unsigned int *)(v17 + 48) == a2 && *(unsigned char *)(v15[328] + 5455) ) /*0x4a8fec*/
                v25 = 1; /*0x4a8ff5*/
              if ( (unsigned char)g_abs_A8B264 /*0x4a900e*/
                && (uint8_t)(((HouseClass *)((void *)v17))->IsAlliedWith( (HouseClass *)(*(void **)((unsigned int *)dword_A8022C)[4 * a2]))) )
              {
                if ( *(unsigned char *)(v16[328] + 5456) ) /*0x4a901d*/
                  v25 = 1; /*0x4a9027*/
              }
            }
          }
          v12 = v21; /*0x4a902c*/
          ++v13; /*0x4a9030*/
        }
        while ( v13 < v21 ); /*0x4a9033*/
        v10 = v22; /*0x4a9039*/
      }
      ++v26; /*0x4a9044*/
    }
    while ( v26 < v10 ); /*0x4a9048*/
  }
  return v25; /*0x4a9054*/
}
}
// 0x4A9070
namespace gamemd {
void ProcessDataBuildingTypeClass(unsigned int * a0, DisplayClass * aP1, DisplayClass * aP2, short * a3)
{
  int FoundationHeight; // edi
  int FoundationWidth; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // edi
  unsigned int v12[2]; // [esp+10h] [ebp-1Ch] BYREF
  int GroundHeight; // [esp+18h] [ebp-14h]
  int v14; // [esp+20h] [ebp-Ch]
  int v15; // [esp+34h] [ebp+8h]
  int v16; // [esp+38h] [ebp+Ch]

  if ( aP1 != (gamemd::DisplayClass *)(*((unsigned int *)dword_A83D4C + 12) )) /*0x4a9086*/
    return 1; /*0x4a9086*/
  if ( byte_A8ED6B ) /*0x4a9093*/
    return 1; /*0x4a9093*/
  if ( !aP2 ) /*0x4a909f*/
    return 1; /*0x4a909f*/
  if ( *(unsigned int *)a3 == dword_8A03F8 ) /*0x4a90b3*/
    return 1; /*0x4a90b3*/
  if ( !a0 ) /*0x4a90cc*/
    return 1; /*0x4a90cc*/
  if ( (*(int (**)(unsigned int *))(*a0 + 44))( (unsigned int *)(a0)) != 7 ) /*0x4a90dc*/
    return 1; /*0x4a90dc*/
  FoundationHeight = ((BuildingTypeClass *)((int)a0))->GetFoundationHeight(0); /*0x4a90ed*/
  FoundationWidth = BuildingTypeClass::GetFoundationWidth(a0); /*0x4a90ef*/
  v6 = *a3; /*0x4a90f4*/
  v7 = a3[1]; /*0x4a90f7*/
  v8 = v6 + FoundationWidth; /*0x4a90fb*/
  v14 = v7; /*0x4a90fd*/
  v9 = v6; /*0x4a9103*/
  v16 = v8; /*0x4a9105*/
  if ( v6 >= v8 ) /*0x4a9109*/
    return 1; /*0x4a9109*/
  v15 = v7 + FoundationHeight; /*0x4a9111*/
  while ( 1 ) /*0x4a9119*/
  {
    v10 = v7; /*0x4a9119*/
    if ( v7 < v15 ) /*0x4a911d*/
      break; /*0x4a911d*/
  LABEL_13:
    if ( ++v9 >= v8 ) /*0x4a917e*/
      return 1; /*0x4a917e*/
  }
  while ( 1 ) /*0x4a913d*/
  {
    v12[1] = ((int16_t)v10 << 8) + 128; /*0x4a913d*/
    v12[0] = ((int16_t)v9 << 8) + 128; /*0x4a9146*/
    GroundHeight = 0; /*0x4a914a*/
    GroundHeight = Cell::GetGroundHeight(v12); /*0x4a9157*/
    if ( Cell::IsPassable( (unsigned int *)(v12)) ) /*0x4a9161*/
      return a0[918] != 0; /*0x4a9193*/
    if ( ++v10 >= v15 ) /*0x4a9171*/
    {
      v7 = v14; /*0x4a9173*/
      v8 = v16; /*0x4a9177*/
      goto LABEL_13; /*0x4a9177*/
    }
  }
}
}
// 0x4A9770
namespace gamemd {
int RemoveTarget(int aP0)
{
  int result; // eax
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  int *v7; // esi
  int v8; // eax
  int v9; // ecx

  aP0 = aP0; /*0x4a9772*/
  if ( aP0 ) /*0x4a9778*/
  {
    result = aP0->u32_94; /*0x4a977e*/
    if ( result != -1 ) /*0x4a9787*/
    {
      v3 = 3 * result; /*0x4a978d*/
      v4 = 8 * v3 + 9044832; /*0x4a979b*/
      result = (*(int (**)(int, int *))((&stru_8A0360)[2 * v3] + 16))( v4, (int *)(&aP0)); /*0x4a97a9*/
      if ( result != -1 ) /*0x4a97af*/
      {
        v5 = *(unsigned int *)(v4 + 16); /*0x4a97b1*/
        if ( result < v5 ) /*0x4a97b6*/
        {
          v6 = v5 - 1; /*0x4a97b8*/
          for ( *(unsigned int *)(v4 + 16) = v6; /*0x4a97be*/
                result < *(unsigned int *)(v4 + 16);
                *(unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * result - 4) = *(unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * result) )
          {
            ++result; /*0x4a97c3*/
          }
          aP0->u32_94 = -1; /*0x4a97d2*/
        }
      }
      if ( aP0->u32_94 != -1 ) /*0x4a97e3*/
      {
        v7 = (int *)(dword_8A0370); /*0x4a97e5*/
        do /*0x4a982a*/
        {
          while ( 1 ) /*0x4a97ea*/
          {
            v8 = *(v7 - 4); /*0x4a97ea*/
            aP0 = aP0; /*0x4a97f4*/
            result = (*(int (**)(int *, int *))(v8 + 16))( v7 - 4, (int *)(&aP0)); /*0x4a97f9*/
            if ( result == -1 || result >= *v7 ) /*0x4a9805*/
              break; /*0x4a9805*/
            v9 = *v7 - 1; /*0x4a9807*/
            for ( *v7 = v9; result < *v7; *(unsigned int *)(*(v7 - 3) + 4 * result - 4) = *(unsigned int *)(*(v7 - 3) + 4 * result) ) /*0x4a980c*/
              ++result; /*0x4a9811*/
          }
          v7 += 6; /*0x4a9821*/
        }
        while ( (int)v7 < (int)&dword_8A03E8 ); /*0x4a982a*/
        aP0->u32_94 = -1; /*0x4a982c*/
      }
    }
  }
  return result; /*0x4a9836*/
}
}
// 0x4AA2B0
namespace gamemd {
unsigned char * sub_4AA2B0(unsigned char * a1)
{
  unsigned int *v1; // ebx
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  unsigned char *v5; // esi
  unsigned char *v6; // edi
  unsigned char v8[5]; // [esp+3h] [ebp-5h]

  v8[4] = 0; /*0x4aa2b7*/
  *(unsigned int *)v8 = a1 == 0; /*0x4aa2c8*/
  v1 = (unsigned int *)(&unk_820030); /*0x4aa2d1*/
  while ( 1 ) /*0x4aa2d8*/
  {
    v2 = 0; /*0x4aa2d8*/
    v3 = 6 * *v1; /*0x4aa2dd*/
    if ( (&dword_8A0370)[v3] > 0 ) /*0x4aa2e8*/
      break; /*0x4aa2e8*/
  LABEL_12:
    if ( (int)++v1 >= (int)dword_82003C ) /*0x4aa35b*/
      return *(unsigned char **)&v8[1]; /*0x4aa36c*/
  }
  while ( 1 )
  {
    v4 = (&dword_8A0364)[v3]; /*0x4aa2ea*/
    v5 = *(unsigned char **)(v4 + 4 * v2); /*0x4aa2f0*/
    if ( !v5 ) /*0x4aa2f5*/
      goto LABEL_11; /*0x4aa2f5*/
    v6 = (v5[20] & 1) != 0 ? v5 : 0;
    if ( !(*(uint8_t (**)(unsigned int))(*(unsigned int *)v5 + 100))(*(unsigned int *)(v4 + 4 * v2)) /*0x4aa318*/
      || !v6
      || !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v6 + 316))( (unsigned char *)(v6)) )
    {
      goto LABEL_11; /*0x4aa320*/
    }
    if ( !*(unsigned int *)&v8[1] ) /*0x4aa328*/
      *(unsigned int *)&v8[1] = (unsigned int)v5; /*0x4aa32a*/
    if ( v8[0] ) /*0x4aa334*/
      return v5; /*0x4aa369*/
    v8[0] = a1 == v5; /*0x4aa33c*/
  LABEL_11:
    ++v2; /*0x4aa341*/
    v3 = 6 * *v1; /*0x4aa347*/
    if ( v2 >= (&dword_8A0370)[v3] ) /*0x4aa350*/
      goto LABEL_12; /*0x4aa350*/
  }
}
}
// 0x4AA380
namespace gamemd {
unsigned char * sub_4AA380(unsigned char * a1)
{
  unsigned int *v1; // ebx
  int v2; // ebp
  unsigned char *v3; // esi
  unsigned char *v4; // edi
  unsigned char v6[5]; // [esp+3h] [ebp-5h]

  v6[4] = 0; /*0x4aa387*/
  *(unsigned int *)v6 = a1 == 0; /*0x4aa398*/
  v1 = &dword_82003C; /*0x4aa3a1*/
  while ( 1 ) /*0x4aa3b2*/
  {
    v2 = (&dword_8A0370)[6 * *v1] - 1; /*0x4aa3b2*/
    if ( v2 >= 0 ) /*0x4aa3b3*/
      break; /*0x4aa3b3*/
  LABEL_12:
    if ( (int)++v1 >= (int)0 ) /*0x4aa41d*/
      return *(unsigned char **)&v6[1]; /*0x4aa42a*/
  }
  while ( 1 )
  {
    v3 = *(unsigned char **)((&dword_8A0364)[6 * *v1] + 4 * v2); /*0x4aa3c1*/
    if ( !v3 ) /*0x4aa3c6*/
      goto LABEL_11; /*0x4aa3c6*/
    v4 = (v3[20] & 1) != 0 ? v3 : 0;
    if ( !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v3 + 100))( (unsigned char *)(v3)) /*0x4aa3e8*/
      || !v4
      || !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v4 + 316))( (unsigned char *)(v4)) )
    {
      goto LABEL_11; /*0x4aa3f0*/
    }
    if ( !*(unsigned int *)&v6[1] ) /*0x4aa3f8*/
      *(unsigned int *)&v6[1] = (unsigned int)v3; /*0x4aa3fa*/
    if ( v6[0] ) /*0x4aa404*/
      return v3; /*0x4aa427*/
    v6[0] = a1 == v3; /*0x4aa40c*/
  LABEL_11:
    if ( --v2 < 0 ) /*0x4aa412*/
      goto LABEL_12; /*0x4aa412*/
  }
}
}
// 0x4AC4F0
namespace gamemd {
ScenarioClass * * sub_4AC4F0()
{
  int v1; // edi
  int v2; // eax
  int v3; // ebx
  char *v4; // ebp
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  void *result; // eax
  int v9; // [esp+8h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-1Ch]
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  unsigned int v14[3]; // [esp+18h] [ebp-Ch] BYREF

  v1 = 0; /*0x4ac4fb*/
  v2 = 0; /*0x4ac4fd*/
  v3 = 0; /*0x4ac4ff*/
  v11 = 0; /*0x4ac503*/
  v12 = 0; /*0x4ac507*/
  v13 = 0; /*0x4ac50b*/
  if ( dword_A8EC88 > 0 ) /*0x4ac50f*/
  {
    v4 = (char *)dword_A8EC7C; /*0x4ac512*/
    v9 = dword_A8EC88; /*0x4ac519*/
    do /*0x4ac567*/
    {
      v5 = *(unsigned int *)v4; /*0x4ac51d*/
      if ( !*(unsigned char *)(*(unsigned int *)v4 + 129) && *(unsigned char *)(v5 + 1050) ) /*0x4ac52a*/
      {
        v2 += *(unsigned int *)(v5 + 156); /*0x4ac53e*/
        v3 += *(unsigned int *)(v5 + 160); /*0x4ac543*/
        v6 = *(unsigned int *)(v5 + 164); /*0x4ac549*/
        v11 = v2; /*0x4ac54c*/
        v12 = v3; /*0x4ac552*/
        v13 += v6; /*0x4ac556*/
        ++v1; /*0x4ac55a*/
      }
      v4 += 4; /*0x4ac55f*/
      --v9; /*0x4ac563*/
    }
    while ( v9 ); /*0x4ac567*/
  }
  v13 = 0; /*0x4ac56d*/
  if ( v1 ) /*0x4ac575*/
  {
    v11 = v2 / v1; /*0x4ac57a*/
    v7 = v3 / v1; /*0x4ac583*/
    v12 = v3 / v1; /*0x4ac58a*/
    v13 = 0 / v1; /*0x4ac58e*/
  }
  else
  {
    v11 = *HouseClass::GetStartCoords(((HouseClass *)dword_A83D4C), v14); /*0x4ac5aa*/
    v7 = HouseClass::GetStartCoords(((HouseClass *)dword_A83D4C), v14)[1]; /*0x4ac5ba*/
    v12 = v7; /*0x4ac5bd*/
  }
  IDA_LOWORD(v10) = v11 / 256; /*0x4ac5d3*/
  IDA_HIWORD(v10) = v7 / 256; /*0x4ac5e6*/
  *(int *)((char *)&((AbstractClass *)dword_A8B230)[374].vtable0 + 2) = v10; /*0x4ac5f4*/
  *(int *)((char *)&((AbstractClass *)dword_A8B230)[373].NeedsSaveOrLink + 2) = *(int *)((char *)&((AbstractClass *)dword_A8B230)[374].vtable0 + 2); /*0x4ac605*/
  *(int *)((char *)&((AbstractClass *)dword_A8B230)[373].referenceCount + 2) = *(int *)((char *)&((AbstractClass *)dword_A8B230)[373].NeedsSaveOrLink + 2); /*0x4ac616*/
  *(int *)((char *)&((AbstractClass *)dword_A8B230)[373].nextArrayIndex + 2) = *(int *)((char *)&((AbstractClass *)dword_A8B230)[373].referenceCount + 2); /*0x4ac627*/
  result = (void *)(dword_A8B230); /*0x4ac62d*/
  ((AbstractClass *)dword_A8B230)[14].nextArrayIndex = ((AbstractClass *)dword_A8B230)[14].abstractFlags; /*0x4ac638*/
  if ( g_TacticalClass_Instance ) /*0x4ac646*/
    return (gamemd::ScenarioClass **)((void *)((Tactical *)((TacticalClass *)g_TacticalClass_Instance))->SetTacticalPosition( (int *)(&v11))); /*0x4ac64d*/
  return (gamemd::ScenarioClass **)(result); /*0x4ac5c5*/
}
}
// 0x4AE750
namespace gamemd {
AbstractClass * * DispatchSelectionWaypointMove(int a1, int a2, int a3, int a4)
{
  unsigned int **v4; // eax
  unsigned int *v5; // eax
  wchar_t *v6; // ecx
  int i; // esi
  int v8; // ecx
  int v9; // ebp
  int v10; // esi
  int *v11; // edi
  int v12; // eax
  wchar_t *v13; // ebp
  int v14; // esi
  int *v15; // edi
  int v16; // eax
  int v17; // esi
  unsigned int *v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // esi
  unsigned int *v22; // edi
  int v23; // ebp
  int v24; // eax
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v27; // [esp+10h] [ebp-8h] BYREF
  int v28; // [esp+14h] [ebp-4h] BYREF

  IDA_LOBYTE(v4) = byte_A8ED6B; /*0x4ae753*/
  v27 = -1; /*0x4ae761*/
  IDA_LOBYTE(v26) = 0; /*0x4ae765*/
  if ( byte_A8ED6B ) /*0x4ae769*/
    return (gamemd::AbstractClass **)((char)v4) /*0x4ae769*/;
  a2 = *(unsigned int *)HouseClass::ClampToUsableCell(&v28, &a2); /*0x4ae78f*/
  v5 = ((Waypoint *)(char *)dword_A83D4C)->FindByCell( (IUnknown *)(&a2)); /*0x4ae794*/
  if ( v5 ) /*0x4ae79b*/
    WaypointClass::FindOrCreate((char *)dword_A83D4C, (int)v5, &v27, &v26); /*0x4ae7ae*/
  v6 = (wchar_t *)(dword_A8ECC8); /*0x4ae7b3*/
  v4 = (unsigned int **)dword_A8ECBC; /*0x4ae7b9*/
  for ( i = 0; i < (int)dword_A8ECC8; ++i ) /*0x4ae7c4*/
  {
    (*(void (**)(unsigned int *, unsigned int, int))(*v4[i] + 420))(v4[i], v27, v26); /*0x4ae7d7*/
    v4 = (unsigned int **)dword_A8ECBC; /*0x4ae7dd*/
    v8 = *((unsigned int *)dword_A8ECBC + i); /*0x4ae7e2*/
    if ( v8 && (*(unsigned char *)(v8 + 20) & 4) != 0 ) /*0x4ae7f6*/
    {
      *(unsigned char *)(v8 + 1072) = 0; /*0x4ae7fa*/
      v4 = (unsigned int **)dword_A8ECBC; /*0x4ae800*/
    }
 v6 = (wchar_t *)((wchar_t *)(dword_A8ECC8)); /*0x4ae805*/
  }
  v9 = a1; /*0x4ae810*/
  if ( a1 ) /*0x4ae816*/
  {
    v10 = 0; /*0x4ae818*/
    if ( (int)v6 > 0 ) /*0x4ae81c*/
    {
      while ( 1 ) /*0x4ae82d*/
      {
        v11 = v4[v10]; /*0x4ae82d*/
        a1 = *v11; /*0x4ae836*/
        v12 = (*(int (**)(int *, int, unsigned int, int, unsigned int))(a1 + 116))( (int *)(v11), v9, 0, v9, 0); /*0x4ae83a*/
        (*(void (**)(int *, int))(a3 + 324))( (int *)(v11), v12); /*0x4ae844*/
        IDA_LOBYTE(v4) = (unsigned char)dword_A8ECC8; /*0x4ae84a*/
        ++v10; /*0x4ae851*/
        g_MoveFeedback = 0; /*0x4ae852*/
        if ( v10 >= (int)dword_A8ECC8 ) /*0x4ae85a*/
          break; /*0x4ae85a*/
        v4 = (unsigned int **)dword_A8ECBC; /*0x4ae824*/
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
    v21 = 0; /*0x4ae94e*/
    if ( (int)v6 > 0 ) /*0x4ae952*/
    {
      while ( 1 ) /*0x4ae96b*/
      {
        v22 = v4[v21]; /*0x4ae96b*/
        v23 = *v22; /*0x4ae972*/
v24 = (*(int (**)(unsigned int *, int *, unsigned int, unsigned int, int *, int *, unsigned int))(*v22 + 112))( /*0x4ae976*/ v22, (int *)(&a2), 0, 0, (int *)(&a2), (int *)(&a2), 0);







        (*(void (**)(unsigned int *, int))(v23 + 320))( (unsigned int *)(v22), v24); /*0x4ae97c*/
        IDA_LOBYTE(v4) = (unsigned char)dword_A8ECC8; /*0x4ae982*/
        ++v21; /*0x4ae987*/
        g_MoveFeedback = 0; /*0x4ae98a*/
        if ( v21 >= (int)dword_A8ECC8 ) /*0x4ae990*/
          break; /*0x4ae990*/
        v4 = (unsigned int **)dword_A8ECBC; /*0x4ae956*/
      }
    }
    goto LABEL_32; /*0x4ae990*/
  }
  if ( a3 == 2 ) /*0x4ae886*/
  {
    v13 = v6; /*0x4ae888*/
    v14 = 0; /*0x4ae88a*/
    if ( (int)v6 <= 0 ) /*0x4ae88e*/
      goto LABEL_32; /*0x4ae88e*/
    while ( 1 ) /*0x4ae8a8*/
    {
      v15 = v4[v14]; /*0x4ae8a8*/
      a1 = *v15; /*0x4ae8b6*/
v16 = (*(int (**)(int *, int *, unsigned int, unsigned int, int *, int *, unsigned int))(a1 + 112))( /*0x4ae8ba*/ v15, (int *)(&a2), 0, 0, (int *)(&a2), (int *)(&a2), 0);







      IDA_LOBYTE(v4) = (*(int (**)(int *, int))(a4 + 320))( (int *)(v15), v16); /*0x4ae8c4*/
      ++v14; /*0x4ae8cc*/
      g_MoveFeedback = 0; /*0x4ae8cf*/
      if ( v14 >= (int)v13 ) /*0x4ae8d5*/
        break; /*0x4ae8d5*/
      v4 = (unsigned int **)dword_A8ECBC; /*0x4ae896*/
    }
    g_MoveFeedback = 1; /*0x4ae8da*/
  }
  else
  {
    v17 = 0; /*0x4ae8e8*/
    if ( (int)v6 <= 0 ) /*0x4ae8ec*/
      goto LABEL_32; /*0x4ae8ec*/
    while ( 1 ) /*0x4ae8fc*/
    {
      a1 = -1; /*0x4ae8fc*/
      v18 = v4[v17]; /*0x4ae916*/
      v19 = *v18; /*0x4ae91d*/
v20 = (*(int (**)(unsigned int *, int *, unsigned int, unsigned int, int *, int *, unsigned int))(*v18 + 112))( /*0x4ae921*/ v18, (int *)(&a2), 0, 0, (int *)(&a2), (int *)(&a1), 0);







      (*(void (**)(unsigned int *, int))(v19 + 320))( (unsigned int *)(v18), v20); /*0x4ae927*/
      IDA_LOBYTE(v4) = (unsigned char)dword_A8ECC8; /*0x4ae92d*/
      ++v17; /*0x4ae932*/
      g_MoveFeedback = 0; /*0x4ae935*/
      if ( v17 >= (int)dword_A8ECC8 ) /*0x4ae93b*/
        break; /*0x4ae93b*/
      v4 = (unsigned int **)dword_A8ECBC; /*0x4ae8f4*/
    }
    g_MoveFeedback = 1; /*0x4ae940*/
  }
  return (char)v4; /*0x4ae85e*/
}
}
// 0x4AEA20
namespace gamemd {
void sub_4AEA20(int a1, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // ebx
  int v8; // eax
  int result; // eax

  if ( a2 == -1 ) /*0x4aea27*/
    v2 = 0; /*0x4aea29*/
  else
    v2 = 8 * (a2 % 12); /*0x4aea35*/
  v3 = 0; /*0x4aea46*/
  v4 = *(unsigned int *)(dword_87F6C8 + 372) + 2; /*0x4aea48*/
  do /*0x4aeac1*/
  {
    v5 = (v3 + v2) % 256; /*0x4aea5b*/
    v6 = &byte_885180[3 * v5]; /*0x4aea5c*/
    v4 += 2; /*0x4aea63*/
    IDA_LOWORD(v5) = (uint8_t)((uint8_t)v6[2] >> g_BitMask_Red); /*0x4aea83*/
    IDA_LOWORD(a1) = (uint8_t)((uint8_t)IDA_HIBYTE(*(unsigned short *)v6) >> g_BitMask_Blue); /*0x4aea97*/
    v7 = a1 << g_BitMask_Green; /*0x4aea9b*/
    v8 = v7 | (v5 << g_BitShift_Blue); /*0x4aeaa3*/
    IDA_LOWORD(v7) = (uint8_t)((uint8_t)*(unsigned short *)v6 >> g_BitShift_Green_0); /*0x4aeab1*/
    a1 = v7 << g_BitShift_Red; /*0x4aeab5*/
    result = a1 | v8; /*0x4aeab7*/
    ++v3; /*0x4aeab9*/
    *(unsigned short *)(v4 - 2) = result; /*0x4aeaba*/
  }
  while ( v3 < 8 ); /*0x4aeac1*/
  return result; /*0x4aeac6*/
}
}
// 0x4AED70
namespace gamemd {
void DrawToSurfaceSHP(int a1, int a2, ConvertClass * aP2, unsigned int arg4, ConvertClass * aP4, ConvertClass * aP5, ConvertClass * aP6, ConvertClass * aP7, int aP7a, ConvertClass * aP9, int aP10, ConvertClass * aP11  // G57e1: p10 int per IDA truth 0x4AED70 (raw literal 0/2/1000), int a13, ConvertClass * aP13, int a15, ConvertClass * aP15)
{
  int result; // eax
  int v17; // edi
  int *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *FoundationSize; // eax
  int SubFile; // eax
  int v25; // edx
  int v26; // ebp
  int v27; // esi
  int *v28; // eax
  unsigned int *v29; // esi
  int *v30; // edx
  int v31; // ecx
  int *v33; // eax
  int *SHPFrame; // eax
  int v35; // [esp-8h] [ebp-A8h]
  int v36; // [esp+Ch] [ebp-94h]
  int v37; // [esp+Ch] [ebp-94h]
  int v38; // [esp+10h] [ebp-90h]
  void (***v39)(unsigned int, int); // [esp+10h] [ebp-90h]
  int v40; // [esp+14h] [ebp-8Ch]
  int v41; // [esp+14h] [ebp-8Ch]
  int v42; // [esp+18h] [ebp-88h] BYREF
  int v43; // [esp+1Ch] [ebp-84h]
  int v44; // [esp+20h] [ebp-80h]
  int v45; // [esp+24h] [ebp-7Ch]
  int v46; // [esp+28h] [ebp-78h] BYREF
  int v47; // [esp+2Ch] [ebp-74h]
  int v48; // [esp+30h] [ebp-70h]
  int v49; // [esp+34h] [ebp-6Ch]
  int v50; // [esp+38h] [ebp-68h] BYREF
  int v51; // [esp+3Ch] [ebp-64h]
  int v52; // [esp+40h] [ebp-60h]
  int v53; // [esp+44h] [ebp-5Ch]
  int v54; // [esp+48h] [ebp-58h]
  int *v56; // [esp+50h] [ebp-50h]
  int v57; // [esp+54h] [ebp-4Ch]
  unsigned int *v59; // [esp+5Ch] [ebp-44h]
  int v60; // [esp+60h] [ebp-40h] BYREF
  int v61; // [esp+64h] [ebp-3Ch]
  int v62; // [esp+68h] [ebp-38h]
  int v63; // [esp+6Ch] [ebp-34h]
  int v64[5]; // [esp+70h] [ebp-30h] BYREF
  int v65[3]; // [esp+84h] [ebp-1Ch] BYREF
  int v66[4]; // [esp+90h] [ebp-10h] BYREF

  v17 = (unsigned int)aP2; /*0x4aed79*/
  v59 = (unsigned int *)a2; /*0x4aed86*/
  v56 = (int *)a1; /*0x4aed8a*/
  if ( aP2 ) /*0x4aed8e*/
  {
    if ( *(unsigned short *)aP2 == 0xFFFF ) /*0x4aed98*/
    {
      IDA_LOBYTE(result) = *(unsigned char *)(aP2 + 16); /*0x4aed9a*/
      if ( !(unsigned char)result ) /*0x4aed9f*/
        ((House *)((char **)aP2))->Constructor(); /*0x4aeda3*/
      v17 = *(unsigned int *)(aP2 + 12); /*0x4aeda8*/
    }
    if ( v17 ) /*0x4aedad*/
    {
      v20 = (int *)(*(int (**)(int, int *))(*(unsigned int *)a1 + 120))( a1, (int *)(&v50)); /*0x4aedbc*/
      v66[0] = *v20; /*0x4aedc1*/
      v66[1] = v20[1]; /*0x4aedcf*/
      v66[2] = v20[2]; /*0x4aedd9*/
      v66[3] = v20[3]; /*0x4aedec*/
      v60 = *(unsigned int *)aP5;
      v61 = aP5[1]; /*0x4aedfc*/
      v62 = aP5[2]; /*0x4aee03*/
      v63 = aP5[3]; /*0x4aee12*/
      v21 = (int *)ClipRectIntersection( (RectangleStruct*)(&v50), (const RectangleStruct*)(aP5), (const RectangleStruct*)(v66), 0, 0); /*0x4aee1f*/
      v60 = *v21; /*0x4aee23*/
      v61 = v21[1]; /*0x4aee2a*/
      result = v21[2]; /*0x4aee2e*/
      v62 = result; /*0x4aee31*/
      v22 = v21[3]; /*0x4aee35*/
      v63 = v22; /*0x4aee3a*/
      if ( result > 0 && v22 > 0 ) /*0x4aee46*/
      {
        *(unsigned int *)(a2 + 380) = (unsigned int)aP7; /*0x4aee5a*/
        v36 = *(unsigned int *)aP4;
        v40 = aP4[1]; /*0x4aee79*/
        FoundationSize = (int *)Building::GetFoundationSize( (unsigned int *)(&v50), arg4); /*0x4aee7d*/
        v42 = *FoundationSize; /*0x4aee84*/
        v43 = FoundationSize[1]; /*0x4aee8c*/
        v44 = FoundationSize[2]; /*0x4aee95*/
        v45 = FoundationSize[3]; /*0x4aee9c*/
        SubFile = ((MixFileClass *)(char **)v17)->GetSubFile( arg4); /*0x4aeea0*/
        v25 = v17->q004; /*0x4aeea9*/
        v26 = SubFile; /*0x4aeeb1*/
        v57 = v17->q008; /*0x4aeeb7*/
        v25 = v25; /*0x4aeec1*/
        Surface::Construct(v64, v44, v45); /*0x4aeec7*/
        v64[3] = 0; /*0x4aeed8*/
        v64[0] = (int)&XSurface_Vtable; /*0x4aeee3*/
        v64[4] = 1; /*0x4aeeeb*/
        ((Buffer*)v65)->Init(v26, v45 * v44); /*0x4aeef6*/
        v64[0] = (int)&BSurface_Vtable; /*0x4aeefb*/
        v27 = (unsigned int)aP15; /*0x4aef11*/
        v54 = a15; /*0x4aef18*/
        aP15 = aP15; /*0x4aef1e*/
        if ( a13 ) /*0x4aef22*/
        {
          v28 = (int *)Building::GetFoundationSize( (unsigned int *)(&v50), (unsigned int)(aP13)); /*0x4aef37*/
          v46 = *v28; /*0x4aef3e*/
          v47 = v28[1]; /*0x4aef47*/
          v48 = v28[2]; /*0x4aef4e*/
          v49 = v28[3]; /*0x4aef55*/
          v29 = (unsigned int *)RA2_OPNEW(0x20u); /*0x4aef5e*/
          if ( v29 ) /*0x4aef65*/
          {
            v38 = ((MixFileClass *)(char **)a13)->GetSubFile( aP13); /*0x4aef7c*/
            Surface::Construct(v29, v48, v49); /*0x4aef86*/
            v29[3] = 0; /*0x4aef8b*/
            *v29 = (unsigned int)&XSurface_Vtable; /*0x4aef92*/
            v35 = v49 * v48; /*0x4aefa5*/
            v29[4] = 1; /*0x4aefaa*/
            ((Buffer*)(v29 + 5))->Init(v38, v35); /*0x4aefb1*/
            *v29 = (unsigned int)&BSurface_Vtable; /*0x4aefb6*/
            v39 = (void (***)(unsigned int, int))v29; /*0x4aefbc*/
            v27 = (unsigned int)aP15; /*0x4aefc0*/
          }
          else
          {
            v27 = (unsigned int)aP15; /*0x4aefc6*/
            v39 = 0; /*0x4aefca*/
          }
        }
        else
        {
          v46 = dword_8A0748; /*0x4aefe5*/
          v39 = 0; /*0x4aefee*/
          v47 = dword_8A074C; /*0x4aeff6*/
          v48 = dword_8A0750; /*0x4aeffa*/
          v49 = dword_8A0754; /*0x4aeffe*/
        }
        if ( (aP6 & 0x200) != 0 ) /*0x4af00c*/
        {
          v36 += v57 / -2; /*0x4af027*/
          v40 += v25 / -2; /*0x4af034*/
        }
        if ( a13 ) /*0x4af03a*/
        {
          v54 = a15 - (v57 / 2 - v42); /*0x4af05e*/
          v27 -= v25 / 2 - v43; /*0x4af062*/
        }
        v37 = v42 + v36; /*0x4af072*/
        v41 = v43 + v40; /*0x4af07c*/
        v42 = 0; /*0x4af084*/
        v43 = 0; /*0x4af088*/
        if ( !a13 ) /*0x4af08c*/
          goto LABEL_21; /*0x4af08c*/
        v54 += v46; /*0x4af0a0*/
        v27 += v47; /*0x4af0a6*/
        v50 = -v54; /*0x4af0a8*/
        v51 = -v27; /*0x4af0b6*/
        v52 = v48; /*0x4af0be*/
        v53 = v49; /*0x4af0cb*/
        v30 = (int *)ClipRectIntersection( (RectangleStruct*)(&v46), (const RectangleStruct*)(&v42), (const RectangleStruct*)(&v50), 0, 0); /*0x4af0d4*/
        v42 = *v30; /*0x4af0d8*/
        v43 = v30[1]; /*0x4af0df*/
        v44 = v30[2]; /*0x4af0e6*/
        v31 = v30[3]; /*0x4af0ea*/
        v45 = v31; /*0x4af0ef*/
        if ( v44 > 0 && v31 > 0 ) /*0x4af0fb*/
        {
  LABEL_21:
          if ( aP7 ) /*0x4af10a*/
          {
            aP6 = aP6; /*0x4af10c*/
            IDA_LOBYTE(aP6) = aP6 | 0x10; /*0x4af113*/
            aP6 = aP6; /*0x4af115*/
          }
          if ( Helper_69E900((char **)v17, arg4) ) /*0x4af126*/
          {
            v33 = (int *)((LightConvertClass *)v59)->SelectRLEBlitter( (IUnknown *)(aP6)); /*0x4af13f*/
            if ( v33 ) /*0x4af146*/
            {
              v50 = v37; /*0x4af154*/
              v51 = v41; /*0x4af15c*/
              v52 = v44; /*0x4af164*/
              v53 = v45; /*0x4af16f*/
              BlitterRLEBlitSHP( /*0x4af1bf*/
                (int)v56,
                &v60,
                &v50,
                (int)v64,
                &v42,
                &v42,
                v33,
                aP7a,
                aP9,
                (TechnoClass *)(TechnoClass *)aP10,
                0,
                (int)v39,
                v54,
                v27,
                aP11);
            }
          }
          else
          {
            SHPFrame = (int *)((BuildingClass *)v59)->GetSHPFrame( aP6); /*0x4af1d5*/
            if ( SHPFrame ) /*0x4af1dc*/
            {
              v51 = 0; /*0x4af1e6*/
              v50 = 0; /*0x4af1ee*/
              v46 = v37; /*0x4af1f6*/
              v47 = v41; /*0x4af1fe*/
              v48 = v44; /*0x4af206*/
              v49 = v45; /*0x4af211*/
              v52 = v64[1]; /*0x4af261*/
              v53 = v64[2]; /*0x4af265*/
              BlitterCopySHP(v56, &v60, &v46, v64, (int)&v50, &v42, SHPFrame, aP7a, aP9, (ConvertClass *)(ConvertClass *)aP10, aP11, 0); /*0x4af269*/
            }
          }
        }
        if ( v39 ) /*0x4af275*/
          (**v39)(v39, 1); /*0x4af27b*/
// 0x43ae50
        return ((Vector *)((int)v65))->Clear((int)((Vector *)((int)v65))); /*0x4af284*/
      }
    }
  }
  return result; /*0x4af289*/
}
}
// 0x4AF2A0
namespace gamemd {
int E4Recv_4AF2A0::BlitterDrawSHP(int * a1, int a2, int * a3, unsigned int * a4, int * a5, unsigned int * a6, int a7, int * a8, int a9, int a10, int a11, int a12, int a13)
{

  int *SHPFrame; // eax
  int v15; // edx
  int v16; // eax
  int result; // eax
  int *v18; // [esp-18h] [ebp-40h]
  int v19[4]; // [esp+8h] [ebp-20h] BYREF
  char v20[16]; // [esp+18h] [ebp-10h] BYREF

  SHPFrame = a8; /*0x4af2a0*/
  *(unsigned int *)(a2 + 380) = a7; /*0x4af2b1*/
  if ( !a8 )
    SHPFrame = (int *)((BuildingClass *)a2)->GetSHPFrame( a7 != 0 ? 0x10 : 0);
  v15 = *a5; /*0x4af2d0*/
  v19[1] = a5[1]; /*0x4af2d5*/
  v19[0] = v15; /*0x4af2dd*/
  v19[2] = a4[2]; /*0x4af2e4*/
  v19[3] = a4[3]; /*0x4af2eb*/
  v18 = SHPFrame; /*0x4af308*/
  v16 = (*(int (**)(int *, char *))(*a3 + 120))( (int *)(a3), (char *)(v20)); /*0x4af313*/
  LOBYTE(result) = BlitterCopySHP(a1, a6, v19, a3, v16, a4, v18, a9, a10, a11, a12, a13); /*0x4af323*/
  return result; /*0x4af328*/

}
}
// 0x4AF9B0
namespace gamemd {
void * E4Recv_4AF9B0::sub_4AF9B0(void * a2)
{

  ObjectClass *nextObject; // ebx
  int occupant; // edx
  int fallRate; // eax
  ObjectClass *v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  const void *v10; // eax
  int referenceCount; // edx
  Matrix3x4 v13; // [esp+1Ch] [ebp-60h] BYREF
  char v14[48]; // [esp+4Ch] [ebp-30h] BYREF

  ((Matrix3x4*)&v13)->Identity(); /*0x4af9bc*/
  nextObject = this->nextObject; /*0x4af9c1*/
  if ( nextObject ) /*0x4af9ca*/
  {
    occupant = this->occupant; /*0x4af9d0*/
    fallRate = this->fallRate; /*0x4af9d3*/
    if ( occupant != -1 ) /*0x4af9df*/
    {
      if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - occupant >= fallRate ) /*0x4af9e7*/
        fallRate = 0; /*0x4af9ed*/
      else
        fallRate -= *(unsigned int *)((char *)&stru_A8EB00 + 416) - occupant; /*0x4af9e9*/
    }
    if ( (double)((int)nextObject - fallRate) / (double)(int)this->nextObject < 1.0 ) /*0x4afa08*/
    {
      v6 = this->nextObject; /*0x4afa0a*/
      if ( v6 ) /*0x4afa13*/
      {
        v8 = this->occupant; /*0x4afa1d*/
        v9 = this->fallRate; /*0x4afa20*/
        if ( v8 != -1 ) /*0x4afa26*/
        {
          if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - v8 >= v9 ) /*0x4afa2e*/
            v9 = 0; /*0x4afa34*/
          else
            v9 -= *(unsigned int *)((char *)&stru_A8EB00 + 416) - v8; /*0x4afa30*/
        }
        v7 = (double)((int)v6 - v9) / (double)(int)this->nextObject; /*0x4afa40*/
      }
      else
      {
        v7 = 1.0; /*0x4afa15*/
      }
      v10 = InterpolateVoxelAnimPose(v14, (int)((unsigned int *)this)[0], ((unsigned int *)this)[0], v7); /*0x4afa55*/
      goto LABEL_17; /*0x4afa5a*/
    }
  }
  referenceCount = ((unsigned int *)this)[0]; /*0x4afa5c*/
  if ( referenceCount ) /*0x4afa61*/
  {
    v10 = (const void *)CopyAudioData( (char *)(v14), referenceCount); /*0x4afa67*/
LABEL_17:
    qmemcpy( (void *)(&v13), (const void *)(v10), sizeof(v13)); /*0x4afa77*/
  }
  qmemcpy( (void *)(a2), (const void *)(&v13), 0x30u); /*0x4afa79*/
  return a2; /*0x4afa8a*/

}
}
// 0x4A0450
namespace gamemd {
void E4Recv_4A0450::sub_4A0450()
{

  int v2; // edi
  int EnumConnectionsClass_field_0x04; // edx
  int *p_EnumConnectionsClass_field_0x04; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0457*/
  for ( *(unsigned int *)this->__pad_0 = &vt_EnumConnectionsClass; v2 < this->EnumConnectionsClass_field_0x14; ++v2 ) /*0x4a0464*/
  {
    v6 = *(unsigned int *)(this->EnumConnectionsClass_field_0x08 + 8 * v2); /*0x4a046c*/
    (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x4a046f*/
  }
  EnumConnectionsClass_field_0x04 = this->EnumConnectionsClass_field_0x04; /*0x4a047a*/
  p_EnumConnectionsClass_field_0x04 = &this->EnumConnectionsClass_field_0x04; /*0x4a047d*/
  (*(void (**)(int *))(EnumConnectionsClass_field_0x04 + 12))( (int *)(p_EnumConnectionsClass_field_0x04)); /*0x4a0482*/
  v5 = (void *)p_EnumConnectionsClass_field_0x04[1]; /*0x4a0485*/
  *p_EnumConnectionsClass_field_0x04 = (unsigned int)(int)&vt_VectorClass;
  if ( v5 && *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) ) /*0x4a0492*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0498*/
    p_EnumConnectionsClass_field_0x04[1] = 0; /*0x4a04a0*/
  }
  *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) = 0; /*0x4a04a3*/
  p_EnumConnectionsClass_field_0x04[2] = 0; /*0x4a04a6*/

}
} // namespace gamemd

// 0x4A08D0
namespace gamemd {
void E4Recv_4A08D0::sub_4A08D0()
{

  int ConnectionPointClass_field_0x18; // eax
  int ConnectionPointClass_field_0x1C; // edx
  int *p_ConnectionPointClass_field_0x1C; // esi
  void *v5; // eax

  ConnectionPointClass_field_0x18 = this->ConnectionPointClass_field_0x18; /*0x4a08d4*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_ConnectionPointClass;
  (*(void (**)(int))(*(unsigned int *)ConnectionPointClass_field_0x18 + 8))(ConnectionPointClass_field_0x18); /*0x4a08e0*/
  ConnectionPointClass_field_0x1C = this->ConnectionPointClass_field_0x1C; /*0x4a08e3*/
  p_ConnectionPointClass_field_0x1C = &this->ConnectionPointClass_field_0x1C; /*0x4a08e6*/
  (*(void (**)(int *))(ConnectionPointClass_field_0x1C + 12))( (int *)(p_ConnectionPointClass_field_0x1C)); /*0x4a08eb*/
  v5 = (void *)p_ConnectionPointClass_field_0x1C[1]; /*0x4a08ee*/
  *p_ConnectionPointClass_field_0x1C = (unsigned int)(int)&vt_VectorClass;
  if ( v5 && *((unsigned char *)p_ConnectionPointClass_field_0x1C + 13) ) /*0x4a08fd*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0903*/
    p_ConnectionPointClass_field_0x1C[1] = 0; /*0x4a090b*/
  }
  *((unsigned char *)p_ConnectionPointClass_field_0x1C + 13) = 0; /*0x4a090e*/
  p_ConnectionPointClass_field_0x1C[2] = 0; /*0x4a0911*/

}
} // namespace gamemd

// 0x4A0CE0
namespace gamemd {
unsigned int * E4Recv_4A0CE0::sub_4A0CE0(unsigned int * a2)
{

  int *p_EnumConnectionPointsClass_field_0x0C; // esi
  int v4; // eax
  int v5; // eax
  int EnumConnectionPointsClass_field_0x14; // ecx
  int v7; // eax
  int i; // esi
  int v10; // [esp-4h] [ebp-14h]

  p_EnumConnectionPointsClass_field_0x0C = &this->EnumConnectionPointsClass_field_0x0C; /*0x4a0cf2*/
  this->EnumConnectionPointsClass_field_0x04 = a2[1]; /*0x4a0cf5*/
  this->EnumConnectionPointsClass_field_0x08 = 0; /*0x4a0cf8*/
  this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0cfd*/
  this->EnumConnectionPointsClass_field_0x14 = 0; /*0x4a0d00*/
  LOBYTE(this->EnumConnectionPointsClass_field_0x18) = 1; /*0x4a0d03*/
  BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0d07*/
  this->EnumConnectionPointsClass_field_0x0C = (int)&vt_VectorClass; /*0x4a0d0a*/
  if ( &this->EnumConnectionPointsClass_field_0x0C != a2 + 3 ) /*0x4a0d10*/
  {
    VectorClass::CleanupTyped((int)&this->EnumConnectionPointsClass_field_0x0C); /*0x4a0d14*/
    v4 = a2[5]; /*0x4a0d1a*/
    this->EnumConnectionPointsClass_field_0x14 = v4; /*0x4a0d1f*/
    if ( v4 ) /*0x4a0d22*/
    {
      v5 = (unsigned int)__2_YAPAXI_Z(4 * v4); /*0x4a0d2c*/
      this->EnumConnectionPointsClass_field_0x10 = v5; /*0x4a0d36*/
      if ( v5 ) /*0x4a0d39*/
      {
        EnumConnectionPointsClass_field_0x14 = this->EnumConnectionPointsClass_field_0x14; /*0x4a0d3b*/
        v7 = 0; /*0x4a0d3e*/
        BYTE1(this->EnumConnectionPointsClass_field_0x18) = 1; /*0x4a0d42*/
        if ( EnumConnectionPointsClass_field_0x14 > 0 ) /*0x4a0d46*/
        {
          do /*0x4a0d5a*/
          {
            *(unsigned int *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v7) = *(unsigned int *)(a2[4] + 4 * v7); /*0x4a0d51*/
            ++v7; /*0x4a0d57*/
          }
          while ( v7 < this->EnumConnectionPointsClass_field_0x14 ); /*0x4a0d5a*/
        }
      }
    }
    else
    {
      this->EnumConnectionPointsClass_field_0x10 = 0; /*0x4a0d5e*/
      BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0d61*/
    }
  }
  this->EnumConnectionPointsClass_field_0x1C = a2[7]; /*0x4a0d67*/
  this->EnumConnectionPointsClass_field_0x20 = a2[8]; /*0x4a0d6d*/
  *p_EnumConnectionPointsClass_field_0x0C = (unsigned int)(int)&vt_DynamicVectorClass;
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_EnumConnectionPointsClass;
  for ( i = 0; i < this->EnumConnectionPointsClass_field_0x1C; ++i ) /*0x4a0d83*/
  {
    v10 = *(unsigned int *)(this->EnumConnectionPointsClass_field_0x10 + 4 * i); /*0x4a0d8b*/
    (*(void (**)(int))(*(unsigned int *)v10 + 4))(v10); /*0x4a0d8e*/
  }
  return this->__pad_0; /*0x4a0d9b*/

}
} // namespace gamemd

// 0x4A0DB0
namespace gamemd {
void E4Recv_4A0DB0::sub_4A0DB0()
{

  int v2; // edi
  int EnumConnectionPointsClass_field_0x0C; // edx
  int *p_EnumConnectionPointsClass_field_0x0C; // esi
  void *v5; // eax
  int v6; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4a0db7*/
  for ( *(unsigned int *)this->__pad_0 = &vt_EnumConnectionPointsClass; /*0x4a0dc4*/
        v2 < this->EnumConnectionPointsClass_field_0x1C;
        ++v2 )
  {
    v6 = *(unsigned int *)(this->EnumConnectionPointsClass_field_0x10 + 4 * v2); /*0x4a0dcc*/
    (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x4a0dcf*/
  }
  EnumConnectionPointsClass_field_0x0C = this->EnumConnectionPointsClass_field_0x0C; /*0x4a0dda*/
  p_EnumConnectionPointsClass_field_0x0C = &this->EnumConnectionPointsClass_field_0x0C; /*0x4a0ddd*/
  (*(void (**)(int *))(EnumConnectionPointsClass_field_0x0C + 12))( (int *)(p_EnumConnectionPointsClass_field_0x0C)); /*0x4a0de2*/
  v5 = (void *)p_EnumConnectionPointsClass_field_0x0C[1]; /*0x4a0de5*/
  *p_EnumConnectionPointsClass_field_0x0C = (unsigned int)(int)&vt_VectorClass;
  if ( v5 && *((unsigned char *)p_EnumConnectionPointsClass_field_0x0C + 13) ) /*0x4a0df2*/
  {
    __3_YAXPAX_Z(v5); /*0x4a0df8*/
    p_EnumConnectionPointsClass_field_0x0C[1] = 0; /*0x4a0e00*/
  }
  *((unsigned char *)p_EnumConnectionPointsClass_field_0x0C + 13) = 0; /*0x4a0e03*/
  p_EnumConnectionPointsClass_field_0x0C[2] = 0; /*0x4a0e06*/

}
} // namespace gamemd

// 0x4A1540
namespace gamemd {
int sub_4A1540()
{
  dword_89F7E8 = 0; /*0x4a1542*/
  dword_89F7EC = 0; /*0x4a1547*/
  dword_89F7F0 = 0; /*0x4a154c*/
  dword_89F7F4 = 0; /*0x4a1551*/
  return 0; /*0x4a1556*/
}
} // namespace gamemd

// 0x4A1560
namespace gamemd {
void sub_4A1560()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a156c*/
  dbl_89F800 = Math::Sqrt(v0 + v0); /*0x4a157e*/
}
} // namespace gamemd

// 0x4A1590
namespace gamemd {
void sub_4A1590()
{
  dbl_89F850 = dbl_89F800 / 60.0; /*0x4a159c*/
}
} // namespace gamemd

// 0x4A15B0
namespace gamemd {
void sub_4A15B0()
{
  dbl_89F838 = 1.0 / dbl_89F850; /*0x4a15bc*/
}
} // namespace gamemd

// 0x4A15D0
namespace gamemd {
void sub_4A15D0()
{
  dbl_89F830 = 0.0174532925199433 * 45.0; /*0x4a15dc*/
}
} // namespace gamemd

// 0x4A15F0
namespace gamemd {
void sub_4A15F0()
{
  dbl_89F808 = 0.0174532925199433 * 60.0; /*0x4a15fc*/
}
} // namespace gamemd

// 0x4A1610
namespace gamemd {
void sub_4A1610()
{
  dbl_89F7E0 = 0.0174532925199433 * 90.0; /*0x4a161c*/
}
} // namespace gamemd

// 0x4A1630
namespace gamemd {
long long sub_4A1630()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89F7E0 - dbl_89F808); /*0x4a1642*/
  result = Math::RoundToInt(v0 * dbl_89F800 * 0.5); /*0x4a1656*/
  dword_89F858 = result; /*0x4a165b*/
  return result; /*0x4a1660*/
}
} // namespace gamemd

// 0x4A1670
namespace gamemd {
void sub_4A1670()
{
  dbl_89F810 = Math::ArcTan((double)dword_89F858 * 0.00390625); /*0x4a1687*/
}
} // namespace gamemd

// 0x4A16A0
namespace gamemd {
void sub_4A16A0()
{
  dbl_89F828 = Math::ArcTan((double)(2 * dword_89F858) / dbl_89F800); /*0x4a16c2*/
}
} // namespace gamemd

// 0x4A16D0
namespace gamemd {
long long sub_4A16D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F858) + 0.5); /*0x4a16eb*/
  dword_89F84C = result; /*0x4a16f0*/
  return result; /*0x4a16f6*/
}
} // namespace gamemd

// 0x4A1700
namespace gamemd {
int sub_4A1700()
{
  dword_89F7F8 = 0; /*0x4a1702*/
  return 0; /*0x4a170e*/
}
} // namespace gamemd

// 0x4A1710
namespace gamemd {
int sub_4A1710()
{
  dword_89F818 = 0; /*0x4a1712*/
  dword_89F81C = 0; /*0x4a1717*/
  dword_89F820 = 0; /*0x4a171c*/
  return 0; /*0x4a1721*/
}
} // namespace gamemd

// 0x4A1730
namespace gamemd {
int sub_4A1730()
{
  dword_89F848 = 0; /*0x4a1735*/
  dword_89F840 = 128; /*0x4a173f*/
  dword_89F844 = 128; /*0x4a1744*/
  return 128; /*0x4a1749*/
}
} // namespace gamemd

// 0x4A2030
namespace gamemd {
int E4Recv_4A2030::sub_4A2030(Pipe * aP1, int aP2)
{

  ((Checksummer*)((Checksummer *)&((unsigned int *)this)[0]))->Add_Buffer(aP1, aP2); /*0x4a2042*/
  return ((Delegate *)(Pipe *)this)->Dispatch( (int)aP1, aP2); /*0x4a2050*/

}
} // namespace gamemd

// 0x4A20B0
namespace gamemd {
int E4Recv_4A20B0::sub_4A20B0(Straw * aP1, int aP2)
{

  int v4; // esi

  if ( !aP1 || aP2 < 1 ) /*0x4a20c3*/
    return 0; /*0x4a20e2*/
  v4 = ((Delegate *)((Straw *)this))->Invoke((int)aP1, aP2); /*0x4a20cd*/
  ((Checksummer*)((Checksummer *)&((unsigned int *)this)[0]))->Add_Buffer(aP1, v4); /*0x4a20d4*/
  return v4; /*0x4a20dc*/

}
} // namespace gamemd

// 0x4A2140
namespace gamemd {
int sub_4A2140()
{
  dword_89F8E8 = 0; /*0x4a2142*/
  dword_89F8EC = 0; /*0x4a2147*/
  dword_89F8F0 = 0; /*0x4a214c*/
  dword_89F8F4 = 0; /*0x4a2151*/
  return 0; /*0x4a2156*/
}
} // namespace gamemd

// 0x4A2160
namespace gamemd {
void sub_4A2160()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a216c*/
  dbl_89F900 = Math::Sqrt(v0 + v0); /*0x4a217e*/
}
} // namespace gamemd

// 0x4A2190
namespace gamemd {
void sub_4A2190()
{
  dbl_89F950 = dbl_89F900 / 60.0; /*0x4a219c*/
}
} // namespace gamemd

// 0x4A21B0
namespace gamemd {
void sub_4A21B0()
{
  dbl_89F938 = 1.0 / dbl_89F950; /*0x4a21bc*/
}
} // namespace gamemd

// 0x4A21D0
namespace gamemd {
void sub_4A21D0()
{
  dbl_89F930 = 0.0174532925199433 * 45.0; /*0x4a21dc*/
}
} // namespace gamemd

// 0x4A21F0
namespace gamemd {
void sub_4A21F0()
{
  dbl_89F908 = 0.0174532925199433 * 60.0; /*0x4a21fc*/
}
} // namespace gamemd

// 0x4A2210
namespace gamemd {
void sub_4A2210()
{
  dbl_89F8E0 = 0.0174532925199433 * 90.0; /*0x4a221c*/
}
} // namespace gamemd

// 0x4A2230
namespace gamemd {
long long sub_4A2230()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89F8E0 - dbl_89F908); /*0x4a2242*/
  result = Math::RoundToInt(v0 * dbl_89F900 * 0.5); /*0x4a2256*/
  dword_89F958 = result; /*0x4a225b*/
  return result; /*0x4a2260*/
}
} // namespace gamemd

// 0x4A2270
namespace gamemd {
void sub_4A2270()
{
  dbl_89F910 = Math::ArcTan((double)dword_89F958 * 0.00390625); /*0x4a2287*/
}
} // namespace gamemd

// 0x4A22A0
namespace gamemd {
void sub_4A22A0()
{
  dbl_89F928 = Math::ArcTan((double)(2 * dword_89F958) / dbl_89F900); /*0x4a22c2*/
}
} // namespace gamemd

// 0x4A22D0
namespace gamemd {
long long sub_4A22D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F958) + 0.5); /*0x4a22eb*/
  dword_89F94C = result; /*0x4a22f0*/
  return result; /*0x4a22f6*/
}
} // namespace gamemd

// 0x4A2300
namespace gamemd {
int sub_4A2300()
{
  word_89F8F8 = 0; /*0x4a2302*/
  word_89F8FA = 0; /*0x4a2308*/
  return 0; /*0x4a230e*/
}
} // namespace gamemd

// 0x4A2310
namespace gamemd {
int sub_4A2310()
{
  dword_89F918 = 0; /*0x4a2312*/
  dword_89F91C = 0; /*0x4a2317*/
  dword_89F920 = 0; /*0x4a231c*/
  return 0; /*0x4a2321*/
}
} // namespace gamemd

// 0x4A2330
namespace gamemd {
int sub_4A2330()
{
  dword_89F948 = 0; /*0x4a2335*/
  dword_89F940 = 128; /*0x4a233f*/
  dword_89F944 = 128; /*0x4a2344*/
  return 128; /*0x4a2349*/
}
} // namespace gamemd

// 0x4A2880
namespace gamemd {
void E4Recv_4A2880::sub_4A2880()
{

  int CStreamClass_field_0x08; // eax
  void *CStreamClass_field_0x18; // ecx
  void *CStreamClass_field_0x1C; // edx
  int v5; // esi
  ULONG v6; // [esp+0h] [ebp-8h]

  CStreamClass_field_0x08 = this->CStreamClass_field_0x08; /*0x4a2886*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_CStreamClass;
  this->CStreamClass_field_0x04 = (int)&vt_CStreamClass; /*0x4a2891*/
  if ( CStreamClass_field_0x08 ) /*0x4a2898*/
  {
    if ( BYTE1(this->CStreamClass_field_0x10) && this->CStreamClass_field_0x14 > 0 && this->CStreamClass_field_0x08 ) /*0x4a28aa*/
      ((IStream *)(this->CStreamClass_field_0x18))->Read( (void *)this->CStreamClass_field_0x14, v6); /*0x4a28b4*/
    if ( this->CStreamClass_field_0x08 /*0x4a28da*/
      && (*(int (**)(int, unsigned int))(*(unsigned int *)this->CStreamClass_field_0x08 + 32))(
           this->CStreamClass_field_0x08,
           0) >= 0 )
    {
      if ( !this->CStreamClass_field_0x08 ) /*0x4a28dc*/
        WinAPI::Wrapper(-2147467261); /*0x4a28e6*/
      (*(void (**)(int))(*(unsigned int *)this->CStreamClass_field_0x08 + 8))(this->CStreamClass_field_0x08); /*0x4a28f1*/
      this->CStreamClass_field_0x08 = 0; /*0x4a28f4*/
    }
  }
  __3_YAXPAX_Z((void *)this->CStreamClass_field_0x20); /*0x4a28fb*/
  CStreamClass_field_0x18 = (void *)this->CStreamClass_field_0x18; /*0x4a2900*/
  this->CStreamClass_field_0x20 = 0; /*0x4a2903*/
  __3_YAXPAX_Z(CStreamClass_field_0x18); /*0x4a2907*/
  CStreamClass_field_0x1C = (void *)this->CStreamClass_field_0x1C; /*0x4a290c*/
  this->CStreamClass_field_0x18 = 0; /*0x4a290f*/
  __3_YAXPAX_Z(CStreamClass_field_0x1C); /*0x4a2913*/
  this->CStreamClass_field_0x1C = 0; /*0x4a2918*/
  v5 = this->CStreamClass_field_0x08; /*0x4a291b*/
  if ( v5 ) /*0x4a2923*/
    (*(void (**)(int))(*(unsigned int *)v5 + 8))(v5); /*0x4a2928*/

}
} // namespace gamemd

// 0x4A3250
namespace gamemd {
int sub_4A3250()
{
  dword_89F960 = 0; /*0x4a3252*/
  dword_89F964 = 0; /*0x4a3257*/
  dword_89F968 = 0; /*0x4a325c*/
  dword_89F96C = 0; /*0x4a3261*/
  return 0; /*0x4a3266*/
}
} // namespace gamemd

// 0x4A3630
namespace gamemd {
unsigned int * E4Recv_4A3630::sub_4A3630()
{

  *((unsigned int *)this + 24576) = 0; /*0x4a3632*/
  return (unsigned int *)this; /*0x4a363c*/

}
} // namespace gamemd

// 0x4A3650
namespace gamemd {
void nullsub_115()
{
  ; /*0x4a3650*/
}
} // namespace gamemd

// 0x4A3A10
namespace gamemd {
int sub_4A3A10(int * a1, void ** a2, void ** a3, int a4)
{
  int v6; // edx
  char *v7; // edi
  int v8; // ebp
  int result; // eax
  size_t v10; // eax
  int v11; // edx
  size_t v12; // [esp+24h] [ebp-14h] BYREF
  void *v13; // [esp+28h] [ebp-10h]
  _TBYTE Src; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = *a1; /*0x4a3a21*/
  v7 = (char *)*a2; /*0x4a3a23*/
  v13 = *a3; /*0x4a3a25*/
  v8 = 0; /*0x4a3a2b*/
  if ( !(*(uint8_t (**)(int *))(v6 + 24))( (int *)(a1)) ) /*0x4a3a2d*/
  {
    result = (*(int (**)(int *, int))(*a1 + 28))( (int *)(a1), 1); /*0x4a3a3a*/
    if ( !result ) /*0x4a3a3f*/
      return result; /*0x4a3a3f*/
    v8 = 1; /*0x4a3a4b*/
  }
  (*(void (**)(int *, size_t *, int))(*a1 + 36))( (int *)(a1), (size_t *)(&v12), 2); /*0x4a3a5b*/
  (*(void (**)(int *, _TBYTE *, int))(*a1 + 36))( (int *)(a1), (_TBYTE *)(&Src), 8); /*0x4a3a69*/
  v10 = v12 + 65528; /*0x4a3a75*/
  v12 += 65528; /*0x4a3a7d*/
  if ( IDA_WORD3(Src) ) /*0x4a3a81*/
  {
    v11 = *a1; /*0x4a3a89*/
    v12 = v10 - *(unsigned int *)((char *)&Src + 6); /*0x4a3a8b*/
    if ( a4 ) /*0x4a3a95*/
      (*(void (**)(int *, int, unsigned int))(v11 + 36))( (int *)(a1), a4, IDA_SWORD3(Src)); /*0x4a3a9e*/
    else
      (*(void (**)(int *, unsigned int, int))(v11 + 40))( (int *)(a1), IDA_SWORD3(Src), 1); /*0x4a3aab*/
    IDA_LOWORD(v10) = v12; /*0x4a3aae*/
    IDA_WORD3(Src) = 0; /*0x4a3ab2*/
  }
  if ( *a2 == *a3 ) /*0x4a3ac1*/
    v7 = (char *)a2[1] + (unsigned int)v7 - (uint16_t)v10 - 8; /*0x4a3acd*/
  memcpy( (void *)(v7), (const void *)(&Src), 8u); /*0x4a3ad9*/
  (*(void (**)(int *, char *, unsigned int))(*a1 + 36))( (int *)(a1), v7 + 8, (uint16_t)v12); /*0x4a3af4*/
  v12 = sub_5584F0(v7, v13); /*0x4a3b04*/
  if ( v8 ) /*0x4a3b08*/
    (*(void (**)(int *))(*a1 + 52))( (int *)(a1)); /*0x4a3b0e*/
  return (uint16_t)v12; /*0x4a3a41*/
}
} // namespace gamemd

// 0x4A3B30
namespace gamemd {
int ReturnNull()
{
  return 0; /*0x4a3b32*/
}
} // namespace gamemd

// 0x4A3B40
namespace gamemd {
HRSRC FindResource(unsigned short a1, const CHAR * a2)
{
  int result; // eax

  result = (int)FindResourceA(hLibModule, (LPCSTR)a1, a2); /*0x4a3b4e*/
  if ( result ) /*0x4a3b56*/
  {
    result = (int)LoadResource(hLibModule, (HRSRC)result); /*0x4a3b61*/
    if ( result ) /*0x4a3b69*/
      return (int)LockResource((HGLOBAL)result); /*0x4a3b6d*/
  }
  return result; /*0x4a3b58*/
}
} // namespace gamemd

// 0x4A3BF0
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_3()
{

  return 1; /*0x4a3bf2*/

}
} // namespace gamemd

// 0x4A3C10
namespace gamemd {
int sub_4A3C10()
{
  dword_89F980 = 0; /*0x4a3c12*/
  dword_89F984 = 0; /*0x4a3c17*/
  dword_89F988 = 0; /*0x4a3c1c*/
  dword_89F98C = 0; /*0x4a3c21*/
  return 0; /*0x4a3c26*/
}
} // namespace gamemd

// 0x4A3FD0
namespace gamemd {
void sub_4A3FD0()
{
  int v1; // eax
  struct IDirectDrawVtbl *lpVtbl; // ecx
  int v3; // eax
  CHAR Text[80]; // [esp+Ch] [ebp-50h] BYREF

  Debug::Log("Prep direct draw.\n"); /*0x4a3fd8 G57w11: IDA push seq @ 0x4a3fd8*/
  if ( !g_lpDirectDraw7 ) /*0x4a3fe7*/
  {
    v1 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a3ff2*/
    if ( v1 ) /*0x4a3ff9*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4003*/
      {
        g_DDraw_ErrorCallback(v1); /*0x4a4007*/
        Debug::Log("DirectDrawCreate failed!\n"); /*0x4a400e G57w11: IDA push seq @ 0x4a400e*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v1); /*0x4a4025*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4040*/
        Debug::Log("DirectDrawCreate failed!\n"); /*0x4a404b G57w11: IDA push seq @ 0x4a404b*/
      }
    }
    else
    {
      lpVtbl = g_lpDirectDraw7->lpVtbl; /*0x4a4063*/
      if ( g_DDraw_Initialized ) /*0x4a4065*/
        v3 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 8); /*0x4a4069*/
      else
        v3 = lpVtbl->SetCooperativeLevel(g_lpDirectDraw7, g_hWnd, 17); /*0x4a4075*/
      if ( v3 ) /*0x4a407a*/
      {
        if ( g_DDraw_ErrorCallback ) /*0x4a4084*/
        {
          g_DDraw_ErrorCallback(v3); /*0x4a4088*/
        }
        else
        {
          sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a4099*/
          MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a40b4*/
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
  int result; // eax
  CHAR Text[80]; // [esp+4h] [ebp-50h] BYREF

  result = (int)g_lpDirectDraw7; /*0x4a40c0*/
  if ( g_lpDirectDraw7 ) /*0x4a40ca*/
  {
    result = g_lpDirectDraw7->lpVtbl->Release(g_lpDirectDraw7); /*0x4a40cf*/
    if ( result ) /*0x4a40d4*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a40de*/
      {
        result = g_DDraw_ErrorCallback(result); /*0x4a40e2*/
        g_lpDirectDraw7 = 0; /*0x4a40e4*/
        return result; /*0x4a40f1*/
      }
      sprintf(Text, "DDRAW.DLL Error code = %08X", result); /*0x4a40fd*/
      result = MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4118*/
    }
    g_lpDirectDraw7 = 0; /*0x4a411e*/
  }
  return result; /*0x4a40ee*/
}
} // namespace gamemd

// 0x4A44F0
namespace gamemd {
int sub_4A44F0()
{
  int v1; // esi
  LPDIRECTDRAW result; // eax
  int v3; // eax
  CHAR Buffer[4]; // [esp+8h] [ebp-50h] BYREF
  CHAR Text[76]; // [esp+Ch] [ebp-4Ch] BYREF

  result = g_lpDirectDraw7; /*0x4a44f0*/
  if ( g_lpDirectDraw7 ) /*0x4a44fd*/
  {
    v3 = ((int (*)(LPDIRECTDRAW, int))g_lpDirectDraw7->lpVtbl->RestoreDisplayMode)(g_lpDirectDraw7, v1); /*0x4a4507*/
    if ( v3 ) /*0x4a4512*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a451c*/
      {
        g_DDraw_ErrorCallback(v3); /*0x4a4520*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a452f*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a454a*/
      }
    }
    *(unsigned long long *)&g_DisplayWidth = 0; /*0x4a4551*/
    g_DisplayBPP = 0; /*0x4a455d*/
    result = (LPDIRECTDRAW)((int (*)(LPDIRECTDRAW))g_lpDirectDraw7->lpVtbl->Release)(g_lpDirectDraw7); /*0x4a4566*/
    if ( result ) /*0x4a456b*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4575*/
      {
        result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result); /*0x4a4579*/
        g_lpDirectDraw7 = 0; /*0x4a457b*/
        return result; /*0x4a4586*/
      }
      sprintf(Buffer, "DDRAW.DLL Error code = %08X", result); /*0x4a4592*/
      result = (LPDIRECTDRAW)MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a45ad*/
    }
    g_lpDirectDraw7 = 0; /*0x4a45af*/
  }
  return result; /*0x4a4582*/
}
} // namespace gamemd

// 0x4A45C0
namespace gamemd {
int sub_4A45C0()
{
  int v2[16]; // [esp+0h] [ebp-23Ch] BYREF
  int v3; // [esp+40h] [ebp-1FCh]
  char Buffer[256]; // [esp+13Ch] [ebp-100h] BYREF

  if ( !g_lpDirectDraw7 ) /*0x4a45cd*/
    return 0; /*0x4a45cd*/
  v2[0] = 316; /*0x4a45d3*/
  if ( g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v2, 0) ) /*0x4a45e1*/
    return 0; /*0x4a460d*/
  sprintf(Buffer, "In Get_Free_Video_Memory. About to return %d bytes", v3); /*0x4a45fa*/
  return v3; /*0x4a4606*/
}
} // namespace gamemd

// 0x4A4700
namespace gamemd {
char sub_4A4700()
{
  HRESULT v1; // eax
  char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF

  IDA_LOBYTE(v1) = byte_81FC6C; /*0x4a4700*/
  if ( byte_81FC6C ) /*0x4a470a*/
  {
    v1 = g_lpDirectDraw7->lpVtbl->WaitForVerticalBlank(g_lpDirectDraw7, 1, 0); /*0x4a4718*/
    if ( v1 == -2147467263 ) /*0x4a4720*/
    {
      byte_81FC6C = 0; /*0x4a4722*/
    }
    else if ( v1 ) /*0x4a472f*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4739*/
      {
        IDA_LOBYTE(v1) = g_DDraw_ErrorCallback(v1); /*0x4a473d*/
      }
      else
      {
        sprintf(Buffer, "DDRAW.DLL Error code = %08X", v1); /*0x4a474e*/
        IDA_LOBYTE(v1) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a4769*/
      }
    }
  }
  return v1; /*0x4a4729*/
}
} // namespace gamemd

// 0x4A4850
namespace gamemd {
int sub_4A4850(const void * a1, int a2)
{
  void *v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx

  v2 = RA2_OPNEW(0x6Cu); /*0x4a485e*/
  qmemcpy( (void *)(v2), (const void *)(a1), 0x6Cu); /*0x4a4867*/
  v3 = *(unsigned int *)(a2 + 8); /*0x4a4870*/
  if ( *(unsigned int *)(a2 + 16) < v3 /*0x4a4895*/
    || (*(unsigned char *)(a2 + 13) || !v3)
    && (v4 = *(unsigned int *)(a2 + 20), v4 > 0)
    && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)a2 + 8))(a2, v3 + v4, 0) )
  {
    v5 = *(unsigned int *)(a2 + 16); /*0x4a489c*/
    v6 = *(unsigned int *)(a2 + 4); /*0x4a489f*/
    *(unsigned int *)(a2 + 16) = v5 + 1; /*0x4a48a5*/
    *(unsigned int *)(v6 + 4 * v5) = (unsigned int)v2; /*0x4a48a8*/
  }
  return 1; /*0x4a48ab*/
}
} // namespace gamemd

// 0x4A48C0
namespace gamemd {
int sub_4A48C0(unsigned int * a1, unsigned int * a2)
{
  int v2; // esi
  int v3; // edx

  v2 = a1[1]; /*0x4a48cb*/
  v3 = a2[1]; /*0x4a48d0*/
  if ( *a2 > *a1 ) /*0x4a48d5*/
    return -1; /*0x4a48d7*/
  if ( *a2 < *a1 ) /*0x4a48dc*/
    return 1; /*0x4a48de*/
  if ( v2 >= v3 ) /*0x4a48e7*/
    return v3 < v2; /*0x4a48f2*/
  return -1; /*0x4a48da*/
}
} // namespace gamemd

// 0x4A4E30
namespace gamemd {
unsigned int * E4Recv_4A4E30::sub_4A4E30(int a2, int a3)
{

  this->Items = 0; /*0x4a4e3b*/
  this->Capacity = a2; /*0x4a4e3e*/
  this->IsInitialized = 1; /*0x4a4e41*/
  this->IsAllocated = 0; /*0x4a4e45*/
  this->vtable1 = &vt_VectorClass; /*0x4a4e48*/
  if ( a2 ) /*0x4a4e4e*/
  {
    if ( a3 ) /*0x4a4e56*/
    {
      this->Items = (void *)a3; /*0x4a4e58*/
      return &this->vtable1; /*0x4a4e5e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x4a4e6d*/
    this->IsAllocated = 1; /*0x4a4e70*/
  }
  return &this->vtable1; /*0x4a4e5d*/

}
} // namespace gamemd

// 0x4A4E80
namespace gamemd {
int sub_4A4E80()
{
  dword_8A00C0 = 0; /*0x4a4e82*/
  dword_8A00C4 = 0; /*0x4a4e87*/
  dword_8A00C8 = 0; /*0x4a4e8c*/
  dword_8A00CC = 0; /*0x4a4e91*/
  return 0; /*0x4a4e96*/
}
} // namespace gamemd

// 0x4A4EA0
namespace gamemd {
void sub_4A4EA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a4eac*/
  dbl_8A00D8 = Math::Sqrt(v0 + v0); /*0x4a4ebe*/
}
} // namespace gamemd

// 0x4A4ED0
namespace gamemd {
void sub_4A4ED0()
{
  dbl_8A0128 = dbl_8A00D8 / 60.0; /*0x4a4edc*/
}
} // namespace gamemd

// 0x4A4EF0
namespace gamemd {
void sub_4A4EF0()
{
  dbl_8A0110 = 1.0 / dbl_8A0128; /*0x4a4efc*/
}
} // namespace gamemd

// 0x4A4F10
namespace gamemd {
void sub_4A4F10()
{
  dbl_8A0108 = 0.0174532925199433 * 45.0; /*0x4a4f1c*/
}
} // namespace gamemd

// 0x4A4F30
namespace gamemd {
void sub_4A4F30()
{
  dbl_8A00E0 = 0.0174532925199433 * 60.0; /*0x4a4f3c*/
}
} // namespace gamemd

// 0x4A4F50
namespace gamemd {
void sub_4A4F50()
{
  dbl_8A00B8 = 0.0174532925199433 * 90.0; /*0x4a4f5c*/
}
} // namespace gamemd

// 0x4A4F70
namespace gamemd {
long long sub_4A4F70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A00B8 - dbl_8A00E0); /*0x4a4f82*/
  result = Math::RoundToInt(v0 * dbl_8A00D8 * 0.5); /*0x4a4f96*/
  dword_8A0130 = result; /*0x4a4f9b*/
  return result; /*0x4a4fa0*/
}
} // namespace gamemd

// 0x4A4FB0
namespace gamemd {
void sub_4A4FB0()
{
  dbl_8A00E8 = Math::ArcTan((double)dword_8A0130 * 0.00390625); /*0x4a4fc7*/
}
} // namespace gamemd

// 0x4A4FE0
namespace gamemd {
void sub_4A4FE0()
{
  dbl_8A0100 = Math::ArcTan((double)(2 * dword_8A0130) / dbl_8A00D8); /*0x4a5002*/
}
} // namespace gamemd

// 0x4A5010
namespace gamemd {
long long sub_4A5010()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0130) + 0.5); /*0x4a502b*/
  dword_8A0124 = result; /*0x4a5030*/
  return result; /*0x4a5036*/
}
} // namespace gamemd

// 0x4A5040
namespace gamemd {
int sub_4A5040()
{
  word_8A00D0 = 0; /*0x4a5042*/
  word_8A00D2 = 0; /*0x4a5048*/
  return 0; /*0x4a504e*/
}
} // namespace gamemd

// 0x4A5050
namespace gamemd {
int sub_4A5050()
{
  dword_8A00F0 = 0; /*0x4a5052*/
  dword_8A00F4 = 0; /*0x4a5057*/
  dword_8A00F8 = 0; /*0x4a505c*/
  return 0; /*0x4a5061*/
}
} // namespace gamemd

// 0x4A5070
namespace gamemd {
int sub_4A5070()
{
  dword_8A0120 = 0; /*0x4a5075*/
  dword_8A0118 = 128; /*0x4a507f*/
  dword_8A011C = 128; /*0x4a5084*/
  return 128; /*0x4a5089*/
}
} // namespace gamemd

// 0x4A5090
namespace gamemd {
void nullsub_116()
{
  ; /*0x4a5090*/
}
} // namespace gamemd

// 0x4A50A0
namespace gamemd {
signed int sub_4A50A0(signed int a1)
{
  DWORD Ticks; // ecx
  DWORD v3; // eax
  signed int result; // eax
  DWORD v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-4h]

  Ticks = TimerGetTicks(); /*0x4a50af*/
  v6 = a1; /*0x4a50b1*/
  v5 = Ticks; /*0x4a50b5*/
  do /*0x4a50df*/
  {
    if ( Ticks == -1 ) /*0x4a50bc*/
    {
      result = a1; /*0x4a50db*/
    }
    else
    {
      v3 = TimerGetTicks(); /*0x4a50c2*/
      Ticks = v5; /*0x4a50c7*/
      result = v3 - v5; /*0x4a50cb*/
      if ( result >= a1 ) /*0x4a50cf*/
        return result; /*0x4a50cf*/
      result = a1 - result; /*0x4a50d3*/
      a1 = v6; /*0x4a50d5*/
    }
  }
  while ( result ); /*0x4a50df*/
  return result; /*0x4a50e1*/
}
} // namespace gamemd

// 0x4A52D0
namespace gamemd {
void E4Recv_4A52D0::sub_4A52D0()
{

  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x4a52d0*/
  BYTE1(((unsigned int *)this)[0]) = 1; /*0x4a52d4*/

}
} // namespace gamemd

// 0x4A52E0
namespace gamemd {
char E4Recv_4A52E0::sub_4A52E0()
{

  LOBYTE(((unsigned int *)this)[0]) = 0; /*0x4a52e2*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x4a52e5*/
  return 0; /*0x4a52e8*/

}
} // namespace gamemd

// 0x4A5390
namespace gamemd {
int sub_4A5390()
{
  dword_8A0138 = 0; /*0x4a5392*/
  dword_8A013C = 0; /*0x4a5397*/
  dword_8A0140 = 0; /*0x4a539c*/
  dword_8A0144 = 0; /*0x4a53a1*/
  return 0; /*0x4a53a6*/
}
} // namespace gamemd

// 0x4A5950
namespace gamemd {
unsigned int E4Recv_4A5950::_GetNumExternalThreads_SchedulerProxy_details_Concurrency__QAEIXZ()
{

  return this->M180; /*0x4a5956*/

}
} // namespace gamemd

// 0x4A59C0
namespace gamemd {
int sub_4A59C0()
{
  dword_8A0160 = 0; /*0x4a59c2*/
  dword_8A0164 = 0; /*0x4a59c7*/
  dword_8A0168 = 0; /*0x4a59cc*/
  dword_8A016C = 0; /*0x4a59d1*/
  return 0; /*0x4a59d6*/
}
} // namespace gamemd

// 0x4A5E50
namespace gamemd {
int E4Recv_4A5E50::sub_4A5E50(int a2, AbstractClass * aP2, AbstractClass * aP3)
{

  Text *v5; // esi
  int PixelData; // eax

  *aP2 = 0; /*0x4a5e5e*/
  *aP3 = 0; /*0x4a5e65*/
  v5 = (Text *)(g_FogOfWarState); /*0x4a5e6b*/
  if ( !this || !g_FogOfWarState ) /*0x4a5e77*/
    return 0; /*0x4a5ea2*/
  PixelData = ((FontClass *)g_FogOfWarState)->GetPixelData( 0x57u); /*0x4a5e7d*/
  ((Text *)(v5))->Layout( (unsigned short *)((uint16_t *)this), (int *)(aP2), (unsigned int *)(aP3), a2 * PixelData); /*0x4a5e8d*/
  return *aP3 / v5[7].Text_field_00; /*0x4a5e98*/

}
}
// 0x4A6500
namespace gamemd {
unsigned int * FillRectangle(IUnknown * aP0, IUnknown * aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v12; // eax
  unsigned int *v13; // eax
  int v14; // edx
  int16_t v16; // [esp+8h] [ebp-8h] BYREF
  uint8_t v17; // [esp+Ah] [ebp-6h]

  v12 = ((Color *)((uint8_t *)(a6 + 776)))->ConvertToRGB((int)&a6); /*0x4a6518*/
  v16 = *(unsigned short *)v12; /*0x4a6526*/
  v17 = *(unsigned char *)(v12 + 2); /*0x4a652e*/
  v13 = (unsigned int *)RenderTextLabelWordWrap( /*0x4a65a7*/
                    &v16,
                    aP1,
                    a3,
                    a4,
                    a5,
                    ((uint8_t)v16 >> g_BitShift_Green_0 << g_BitShift_Red)
                  | (IDA_HIBYTE(v16) >> g_BitMask_Blue << g_BitMask_Green)
                  | (v17 >> g_BitMask_Red << g_BitShift_Blue),
                    a7,
                    a8,
                    a9,
                    a10);
  *aP0 = *v13; /*0x4a65ae*/
  v14 = v13[1]; /*0x4a65b1*/
  aP0[1] = v14; /*0x4a65b6*/
  return aP0; /*0x4a65b0*/
}
} // namespace gamemd

// 0x4A6820
namespace gamemd {
int sub_4A6820()
{
  dword_8A0170 = 0; /*0x4a6822*/
  dword_8A0174 = 0; /*0x4a6827*/
  dword_8A0178 = 0; /*0x4a682c*/
  dword_8A017C = 0; /*0x4a6831*/
  return 0; /*0x4a6836*/
}
} // namespace gamemd

// 0x4A6A60
namespace gamemd {
void sub_4A6A60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a6a6c*/
  dbl_8A0238 = Math::Sqrt(v0 + v0); /*0x4a6a7e*/
}
} // namespace gamemd

// 0x4A6A90
namespace gamemd {
void sub_4A6A90()
{
  dbl_8A0288 = dbl_8A0238 / 60.0; /*0x4a6a9c*/
}
} // namespace gamemd

// 0x4A6AB0
namespace gamemd {
void sub_4A6AB0()
{
  dbl_8A0270 = 1.0 / dbl_8A0288; /*0x4a6abc*/
}
} // namespace gamemd

// 0x4A6AD0
namespace gamemd {
void sub_4A6AD0()
{
  dbl_8A0268 = 0.0174532925199433 * 45.0; /*0x4a6adc*/
}
} // namespace gamemd

// 0x4A6AF0
namespace gamemd {
void sub_4A6AF0()
{
  dbl_8A0240 = 0.0174532925199433 * 60.0; /*0x4a6afc*/
}
} // namespace gamemd

// 0x4A6B10
namespace gamemd {
void sub_4A6B10()
{
  dbl_8A0200 = 0.0174532925199433 * 90.0; /*0x4a6b1c*/
}
} // namespace gamemd

// 0x4A6B30
namespace gamemd {
long long sub_4A6B30()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A0200 - dbl_8A0240); /*0x4a6b42*/
  result = Math::RoundToInt(v0 * dbl_8A0238 * 0.5); /*0x4a6b56*/
  dword_8A0290 = result; /*0x4a6b5b*/
  return result; /*0x4a6b60*/
}
} // namespace gamemd

// 0x4A6B70
namespace gamemd {
void sub_4A6B70()
{
  dbl_8A0248 = Math::ArcTan((double)dword_8A0290 * 0.00390625); /*0x4a6b87*/
}
} // namespace gamemd

// 0x4A6BA0
namespace gamemd {
void sub_4A6BA0()
{
  dbl_8A0260 = Math::ArcTan((double)(2 * dword_8A0290) / dbl_8A0238); /*0x4a6bc2*/
}
} // namespace gamemd

// 0x4A6BD0
namespace gamemd {
long long sub_4A6BD0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0290) + 0.5); /*0x4a6beb*/
  dword_8A0284 = result; /*0x4a6bf0*/
  return result; /*0x4a6bf6*/
}
} // namespace gamemd

// 0x4A6C00
namespace gamemd {
int sub_4A6C00()
{
  word_8A0230 = 0; /*0x4a6c02*/
  word_8A0232 = 0; /*0x4a6c08*/
  return 0; /*0x4a6c0e*/
}
} // namespace gamemd

// 0x4A6C10
namespace gamemd {
int sub_4A6C10()
{
  dword_8A0250 = 0; /*0x4a6c12*/
  dword_8A0254 = 0; /*0x4a6c17*/
  dword_8A0258 = 0; /*0x4a6c1c*/
  return 0; /*0x4a6c21*/
}
} // namespace gamemd

// 0x4A6C30
namespace gamemd {
int sub_4A6C30()
{
  dword_8A0280 = 0; /*0x4a6c35*/
  dword_8A0278 = 128; /*0x4a6c3f*/
  dword_8A027C = 128; /*0x4a6c44*/
  return 128; /*0x4a6c49*/
}
} // namespace gamemd

// 0x4A6C50
namespace gamemd {
int sub_4A6C50()
{
  dword_8A0220 = 0; /*0x4a6c52*/
  dword_8A0224 = 0; /*0x4a6c57*/
  dword_8A0228 = 0; /*0x4a6c5c*/
  dword_8A022C = 0; /*0x4a6c61*/
  return 0; /*0x4a6c66*/
}
} // namespace gamemd

// 0x4A6C70
namespace gamemd {
int sub_4A6C70()
{
  dword_8A020C = 0; /*0x4a6c77*/
  dword_8A0210 = 0; /*0x4a6c7c*/
  byte_8A0214 = 1; /*0x4a6c81*/
  byte_8A0215 = 0; /*0x4a6c88*/
  dword_8A0208 = (int)&DynamicVectorClass_DiskLaserClass___vftable; /*0x4a6c8d*/
  dword_8A021C = 10; /*0x4a6c97*/
  dword_8A0218 = 0; /*0x4a6ca1*/
  return atexit(sub_4A6CB0); /*0x4a6cac*/
}
} // namespace gamemd

// 0x4A6CB0
namespace gamemd {
void sub_4A6CB0()
{
  dword_8A0208 = (int)&VectorClass_DiskLaserClass___vftable; /*0x4a6cb8*/
  if ( dword_8A020C && byte_8A0215 ) /*0x4a6ccc*/
  {
    RA2_OPDEL(dword_8A020C); /*0x4a6ccf*/
    dword_8A020C = 0; /*0x4a6cd7*/
  }
  byte_8A0215 = 0; /*0x4a6cdd*/
  dword_8A0210 = 0; /*0x4a6ce3*/
}
} // namespace gamemd

// 0x4A80D0
namespace gamemd {
int AlwaysFindYRCD()
{
  return 2; /*0x4a80d5*/
}
} // namespace gamemd

// 0x4A83D0
namespace gamemd {
bool sub_4A83D0(INIClass * aP0)
{
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF

  sprintf(Buffer, "Please insert disk %d", aP0); /*0x4a83e5*/
  return MessageBoxA(0, Buffer, aHey, 1u) == 1; /*0x4a8407*/
}
} // namespace gamemd

// 0x4A8410
namespace gamemd {
char sub_4A8410(int a1)
{
  return 1; /*0x4a8412*/
}
} // namespace gamemd

// 0x4A8420
namespace gamemd {
int sub_4A8420()
{
  dword_8A03E8 = 0; /*0x4a8422*/
  dword_8A03EC = 0; /*0x4a8427*/
  dword_8A03F0 = 0; /*0x4a842c*/
  dword_8A03F4 = 0; /*0x4a8431*/
  return 0; /*0x4a8436*/
}
} // namespace gamemd

// 0x4A8440
namespace gamemd {
void sub_4A8440()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4a844c*/
  dbl_8A0400 = Math::Sqrt(v0 + v0); /*0x4a845e*/
}
} // namespace gamemd

// 0x4A8470
namespace gamemd {
void sub_4A8470()
{
  dbl_8A0738 = dbl_8A0400 / 60.0; /*0x4a847c*/
}
} // namespace gamemd

// 0x4A8490
namespace gamemd {
void sub_4A8490()
{
  dbl_8A0628 = 1.0 / dbl_8A0738; /*0x4a849c*/
}
} // namespace gamemd

// 0x4A84B0
namespace gamemd {
void sub_4A84B0()
{
  dbl_8A0620 = 0.0174532925199433 * 45.0; /*0x4a84bc*/
}
} // namespace gamemd

// 0x4A84D0
namespace gamemd {
void sub_4A84D0()
{
  dbl_8A0408 = 0.0174532925199433 * 60.0; /*0x4a84dc*/
}
} // namespace gamemd

// 0x4A84F0
namespace gamemd {
void sub_4A84F0()
{
  dbl_8A03D8 = 0.0174532925199433 * 90.0; /*0x4a84fc*/
}
} // namespace gamemd

// 0x4A8510
namespace gamemd {
long long sub_4A8510()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A03D8 - dbl_8A0408); /*0x4a8522*/
  result = Math::RoundToInt(v0 * dbl_8A0400 * 0.5); /*0x4a8536*/
  dword_8A0740 = result; /*0x4a853b*/
  return result; /*0x4a8540*/
}
} // namespace gamemd

// 0x4A8550
namespace gamemd {
void sub_4A8550()
{
  dbl_8A0410 = Math::ArcTan((double)dword_8A0740 * 0.00390625); /*0x4a8567*/
}
} // namespace gamemd

// 0x4A8580
namespace gamemd {
void sub_4A8580()
{
  dbl_8A0610 = Math::ArcTan((double)(2 * dword_8A0740) / dbl_8A0400); /*0x4a85a2*/
}
} // namespace gamemd

// 0x4A85B0
namespace gamemd {
long long sub_4A85B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0740) + 0.5); /*0x4a85cb*/
  dword_8A0730 = result; /*0x4a85d0*/
  return result; /*0x4a85d6*/
}
} // namespace gamemd

// 0x4A85E0
namespace gamemd {
int sub_4A85E0()
{
  dword_8A03F8 = 0; /*0x4a85e2*/
  return 0; /*0x4a85ee*/
}
} // namespace gamemd

// 0x4A85F0
namespace gamemd {
int sub_4A85F0()
{
  dword_8A0600 = 0; /*0x4a85f2*/
  dword_8A0604 = 0; /*0x4a85f7*/
  dword_8A0608 = 0; /*0x4a85fc*/
  return 0; /*0x4a8601*/
}
} // namespace gamemd

// 0x4A8610
namespace gamemd {
int sub_4A8610()
{
  dword_8A0728 = 0; /*0x4a8615*/
  dword_8A0720 = 128; /*0x4a861f*/
  dword_8A0724 = 128; /*0x4a8624*/
  return 128; /*0x4a8629*/
}
} // namespace gamemd

// 0x4A8630
namespace gamemd {
int sub_4A8630()
{
  unsigned int *v0; // eax
  int v1; // edx

  v0 = &unk_8A0368; /*0x4a8630*/
  v1 = 5; /*0x4a8635*/
  do /*0x4a866b*/
  {
    *(v0 - 1) = 0; /*0x4a863c*/
    *v0 = 0; /*0x4a863f*/
    *((unsigned char *)v0 + 4) = 1; /*0x4a8641*/
    *((unsigned char *)v0 + 5) = 0; /*0x4a8645*/
    *(v0 - 2) = (void*)&VectorClass_ObjectClass___vftable; /*0x4a8648*/
    *(v0 - 2) = (void*)&DynamicVectorClass_ObjectClass___vftable; /*0x4a864f*/
    v0[3] = 10; /*0x4a8656*/
    v0[2] = 0; /*0x4a865d*/
    *(v0 - 2) = &off_7E6060; /*0x4a8660*/
    v0 += 6; /*0x4a8667*/
    --v1; /*0x4a866a*/
  }
  while ( v1 ); /*0x4a866b*/
  return atexit(sub_4A8680); /*0x4a8678*/
}
} // namespace gamemd

// 0x4A8680
namespace gamemd {
void sub_4A8680()
{
  int v0; // esi
  int v1; // edi
  void *v2; // eax

  if ( (byte_8A03E1 & 1) == 0 ) /*0x4a868a*/
  {
    byte_8A03E1 |= 1u; /*0x4a8691*/
    v0 = 9044956; /*0x4a8697*/
    v1 = 5; /*0x4a869c*/
    do /*0x4a86cb*/
    {
      v2 = *(void **)(v0 - 24); /*0x4a86a3*/
      v0 -= 24; /*0x4a86a6*/
      *(unsigned int *)(v0 - 4) = (unsigned int)(void*)&VectorClass_ObjectClass___vftable; /*0x4a86ab*/
      if ( v2 ) /*0x4a86b2*/
      {
        if ( *(unsigned char *)(v0 + 9) ) /*0x4a86b4*/
        {
          RA2_OPDEL(v2); /*0x4a86ba*/
          *(unsigned int *)v0 = 0; /*0x4a86c2*/
        }
      }
      --v1; /*0x4a86c4*/
      *(unsigned char *)(v0 + 9) = 0; /*0x4a86c5*/
      *(unsigned int *)(v0 + 4) = 0; /*0x4a86c8*/
    }
    while ( v1 ); /*0x4a86cb*/
  }
}
} // namespace gamemd

// 0x4A86E0
namespace gamemd {
int sub_4A86E0()
{
  GadgetClass::Construct( (void *)(stru_8A06F8), 0, 0, 0, 0, 127, 1); /*0x4a86f1*/
  stru_8A06F8[0] = (int)&DisplayClass_TacticalClass_vftable; /*0x4a86fb*/
  return atexit(sub_4A8710); /*0x4a870b*/
}
} // namespace gamemd

// 0x4A8710
namespace gamemd {
void sub_4A8710()
{
  if ( (byte_8A03E0 & 1) == 0 ) /*0x4a871a*/
  {
    byte_8A03E0 |= 1u; /*0x4a871e*/
    ((GadgetClass *)(stru_8A06F8))->Dtor(); /*0x4a8729*/
  }
}
} // namespace gamemd

// 0x4A8D40
namespace gamemd {
void nullsub_10()
{
  ; /*0x4a8d40*/
}
} // namespace gamemd

// 0x4A8EA0
namespace gamemd {
void nullsub_11()
{
  ; /*0x4a8ea0*/
}
} // namespace gamemd

// 0x4AECD0
namespace gamemd {
int E4Recv_4AECD0::sub_4AECD0(LPCSTR lpLibFileName)
{

  int v1; // esi
  HMODULE LibraryA; // eax
  HMODULE v3; // edi
  FARPROC ProcAddress; // eax
  int v6; // [esp+8h] [ebp-14h] BYREF
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v1 = 0; /*0x4aecd6*/
  LibraryA = LoadLibraryA(lpLibFileName); /*0x4aecd8*/
  v3 = LibraryA; /*0x4aecde*/
  if ( LibraryA ) /*0x4aece2*/
  {
    ProcAddress = GetProcAddress(LibraryA, aDllgetversion); /*0x4aecea*/
    if ( ProcAddress ) /*0x4aecf2*/
    {
      v7 = 0; /*0x4aecff*/
      v6 = 20; /*0x4aed03*/
      v8 = 0; /*0x4aed0b*/
      v9 = 0; /*0x4aed0f*/
      v10 = 0; /*0x4aed13*/
      if ( ((int (*)(int *))ProcAddress)(&v6) >= 0 ) /*0x4aed1b*/
        v1 = (uint16_t)v8 | ((uint16_t)v7 << 16); /*0x4aed33*/
    }
    FreeLibrary(v3); /*0x4aed36*/
  }
  return v1; /*0x4aed3e*/

}
} // namespace gamemd

// 0x4AED50
namespace gamemd {
int sub_4AED50()
{
  dword_8A0748 = 0; /*0x4aed52*/
  dword_8A074C = 0; /*0x4aed57*/
  dword_8A0750 = 0; /*0x4aed5c*/
  dword_8A0754 = 0; /*0x4aed61*/
  return 0; /*0x4aed66*/
}
} // namespace gamemd

// 0x4AF330
namespace gamemd {
void sub_4AF330()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4af33c*/
  dbl_8A0778 = Math::Sqrt(v0 + v0); /*0x4af34e*/
}
} // namespace gamemd

// 0x4AF360
namespace gamemd {
void sub_4AF360()
{
  dbl_8A07C8 = dbl_8A0778 / 60.0; /*0x4af36c*/
}
} // namespace gamemd

// 0x4AF380
namespace gamemd {
void sub_4AF380()
{
  dbl_8A07B0 = 1.0 / dbl_8A07C8; /*0x4af38c*/
}
} // namespace gamemd

// 0x4AF3A0
namespace gamemd {
void sub_4AF3A0()
{
  dbl_8A07A8 = 0.0174532925199433 * 45.0; /*0x4af3ac*/
}
} // namespace gamemd

// 0x4AF3C0
namespace gamemd {
void sub_4AF3C0()
{
  dbl_8A0780 = 0.0174532925199433 * 60.0; /*0x4af3cc*/
}
} // namespace gamemd

// 0x4AF3E0
namespace gamemd {
void sub_4AF3E0()
{
  dbl_8A0758 = 0.0174532925199433 * 90.0; /*0x4af3ec*/
}
} // namespace gamemd

// 0x4AF400
namespace gamemd {
long long sub_4AF400()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A0758 - dbl_8A0780); /*0x4af412*/
  result = Math::RoundToInt(v0 * dbl_8A0778 * 0.5); /*0x4af426*/
  dword_8A07D0 = result; /*0x4af42b*/
  return result; /*0x4af430*/
}
} // namespace gamemd

// 0x4AF440
namespace gamemd {
void sub_4AF440()
{
  dbl_8A0788 = Math::ArcTan((double)dword_8A07D0 * 0.00390625); /*0x4af457*/
}
} // namespace gamemd

// 0x4AF470
namespace gamemd {
void sub_4AF470()
{
  dbl_8A07A0 = Math::ArcTan((double)(2 * dword_8A07D0) / dbl_8A0778); /*0x4af492*/
}
} // namespace gamemd

// 0x4AF4A0
namespace gamemd {
long long sub_4AF4A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A07D0) + 0.5); /*0x4af4bb*/
  dword_8A07C4 = result; /*0x4af4c0*/
  return result; /*0x4af4c6*/
}
} // namespace gamemd

// 0x4AF4D0
namespace gamemd {
int sub_4AF4D0()
{
  word_8A0770 = 0; /*0x4af4d2*/
  word_8A0772 = 0; /*0x4af4d8*/
  return 0; /*0x4af4de*/
}
} // namespace gamemd

// 0x4AF4E0
namespace gamemd {
int sub_4AF4E0()
{
  g_DDraw_ClipRect = 0; /*0x4af4e2*/
  qword_8A0794 = 0; /*0x4af4e7*/
  return 0; /*0x4af4f1*/
}
} // namespace gamemd

// 0x4AF500
namespace gamemd {
int sub_4AF500()
{
  dword_8A07C0 = 0; /*0x4af505*/
  dword_8A07B8 = 128; /*0x4af50f*/
  dword_8A07BC = 128; /*0x4af514*/
  return 128; /*0x4af519*/
}
} // namespace gamemd

// 0x4AF520
namespace gamemd {
int sub_4AF520()
{
  dword_8A0760 = 0; /*0x4af522*/
  dword_8A0764 = 0; /*0x4af527*/
  dword_8A0768 = 0; /*0x4af52c*/
  dword_8A076C = 0; /*0x4af531*/
  return 0; /*0x4af536*/
}
} // namespace gamemd

// 0x4AFAA0
namespace gamemd {
double E4Recv_4AFAA0::sub_4AFAA0()
{

  ObjectClass *nextObject; // esi
  int occupant; // edx
  int fallRate; // eax

  nextObject = this->nextObject; /*0x4afaa4*/
  if ( !nextObject ) /*0x4afaad*/
    return 1.0; /*0x4afab9*/
  occupant = this->occupant; /*0x4afaba*/
  fallRate = this->fallRate; /*0x4afabd*/
  if ( occupant != -1 ) /*0x4afac3*/
  {
    if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - occupant < fallRate ) /*0x4afacf*/
      return (double)((int)nextObject - (fallRate - (*(unsigned int *)((char *)&stru_A8EB00 + 416) - occupant))) /*0x4afae5*/
           / (double)(int)nextObject;
    fallRate = 0; /*0x4afae6*/
  }
  return (double)((int)nextObject - fallRate) / (double)(int)nextObject; /*0x4afab5*/

}
} // namespace gamemd

// 0x4AFB00
namespace gamemd {
int E4Recv_4AFB00::sub_4AFB00(int a2)
{

  int result; // eax
  unsigned int *v3; // ecx
  int v4; // [esp+4h] [ebp-Ch]

  result = *((unsigned int *)this + 7); /*0x4afb00*/
  if ( a2 != result ) /*0x4afb0c*/
  {
    *((unsigned int *)this + 8) = result; /*0x4afb0e*/
    *((unsigned int *)this + 7) = a2; /*0x4afb11*/
    v3 = (unsigned int *)this + 9; /*0x4afb19*/
    *v3 = dword_A8ED84; /*0x4afb22*/
    v3[1] = v4; /*0x4afb2a*/
    v3[2] = 3; /*0x4afb2d*/
    v3[3] = 3; /*0x4afb30*/
    return v4; /*0x4afb24*/
  }
  return result; /*0x4afb34*/

}
} // namespace gamemd

// 0x4AFED0
namespace gamemd {
BOOL E4Recv_4AFED0::sub_4AFED0()
{

  ObjectClass *nextObject; // edi
  double v2; // st7
  int fallRate; // eax
  int occupant; // esi
  float *vtable3; // ecx
  BOOL result; // eax

  nextObject = this->nextObject; /*0x4afed4*/
  if ( nextObject ) /*0x4afedd*/
  {
    fallRate = this->fallRate; /*0x4afee7*/
    occupant = this->occupant; /*0x4afeeb*/
    if ( occupant != -1 ) /*0x4afef1*/
    {
      if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - occupant >= fallRate ) /*0x4afefd*/
        fallRate = 0; /*0x4aff03*/
      else
        fallRate -= *(unsigned int *)((char *)&stru_A8EB00 + 416) - occupant; /*0x4afeff*/
    }
    v2 = (double)((int)nextObject - fallRate) / (double)(int)this->nextObject; /*0x4aff10*/
  }
  else
  {
    v2 = 1.0; /*0x4afedf*/
  }
  result = 0; /*0x4aff4f*/
  if ( v2 == 1.0 ) /*0x4aff20*/
  {
    vtable3 = (float *)((unsigned int *)this)[0]; /*0x4aff22*/
    if ( fabs(vtable3[202]) < 0.005 && fabs(vtable3[203]) < 0.005 ) /*0x4aff4d*/
      return 1; /*0x4aff20*/
  }
  return result; /*0x4aff54*/

}
} // namespace gamemd
