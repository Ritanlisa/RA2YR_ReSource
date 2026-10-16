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
#include "e4/classes/ObjectClass_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int sub_4A4E30(int p0, int p1, int p2); }  // x4:signals@0x4a4e30
// [w18j2] C2065 global supply (data addr evidence)
extern unsigned char byte_885180;  // w18j2 data: 0x885180
namespace VectorClass { int CleanupTyped(int p_this); }  // x4:ida@0x4a1330
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int Render_Helper(uint8_t p0, int p1);  // x4:signals@0x626120
} // namespace gamemd

// 0x4A0190
namespace gamemd {  // G42.18 ns repair
int EnumConnectionsClass::_vt06(unsigned int * a1, unsigned int * a2)
{


  if ( !a2 ) /*0x4a019a*/
    return -2147467261; /*0x4a019d*/
  int v3; // edi
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
    int EnumConnectionsClass_field_0x0C; // eax
    EnumConnectionsClass_field_0x0C = a1->EnumConnectionsClass_field_0x0C; /*0x4a01e5*/
    *(unsigned int *)(v3 + 12) = EnumConnectionsClass_field_0x0C; /*0x4a01ea*/
    if ( EnumConnectionsClass_field_0x0C ) /*0x4a01ed*/
    {
      int v5; // eax
      v5 = (int)(__2_YAPAXI_Z(8 * EnumConnectionsClass_field_0x0C)); /*0x4a01f7*/
      *(unsigned int *)(v3 + 8) = v5; /*0x4a0201*/
      if ( v5 ) /*0x4a0204*/
      {
        int v6; // eax
        v6 = *(unsigned int *)(v3 + 12); /*0x4a0206*/
        int v7 = 0; // ecx /*0x4a0209*/
        *(unsigned char *)(v3 + 17) = 1; /*0x4a020d*/
        if ( v6 > 0 ) /*0x4a0211*/
        {
          do /*0x4a0236*/
          {
            unsigned int *v8; // edx
            v8 = (unsigned int *)(a1->EnumConnectionsClass_field_0x08 + 8 * v7); /*0x4a021f*/
            unsigned int *v9; // eax
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
  int v10; // eax
  v10 = *((unsigned int *)a1 + 7); /*0x4a0258*/
  *(unsigned int *)(v3 + 32) = 0; /*0x4a025b*/
  *(unsigned int *)(v3 + 28) = v10; /*0x4a025e*/
  *(unsigned int *)v3 = (unsigned int)(&vt_EnumConnectionsClass); /*0x4a0261*/
  int i; // esi
  for ( i = 0; i < *(unsigned int *)(v3 + 20); ++i ) /*0x4a026e*/
  {
    int v13; // [esp-Ch] [ebp-14h]
    v13 = *(unsigned int *)(*(unsigned int *)(v3 + 8) + 8 * i); /*0x4a0276*/
    (*(void (**)(int))(*(unsigned int *)v13 + 4))(v13); /*0x4a0279*/
  }
  int v12; // eax
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


  int *p_EnumConnectionsClass_field_0x04 = &this->M4; // esi /*0x4a02bc*/
  this->M8 = 0; /*0x4a02c1*/
  this->M12 = 0; /*0x4a02c4*/
  LOBYTE(this->M16) = 1; /*0x4a02c7*/
  BYTE1(this->M16) = 0; /*0x4a02cb*/
  this->M4 = (int)&vt_VectorClass; /*0x4a02ce*/
  if ( &this->M4 != a2 ) /*0x4a02d4*/
  {
    VectorClass::ClearAndFree2((int)&this->M4); /*0x4a02d8*/
    int v4; // eax
    v4 = a2[2]; /*0x4a02de*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a02e3*/
    if ( v4 ) /*0x4a02e6*/
    {
      int v5; // eax
      v5 = (int)(__2_YAPAXI_Z(8 * v4)); /*0x4a02ec*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a02f6*/
      if ( v5 ) /*0x4a02f9*/
      {
        int v6; // ecx
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a02fb*/
        int v7 = 0; // eax /*0x4a02fe*/
        *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a0302*/
        if ( v6 > 0 ) /*0x4a0306*/
        {
          do /*0x4a0322*/
          {
            int v8; // ecx
            v8 = a2[1]; /*0x4a0308*/
            int v9; // edx
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
  *p_EnumConnectionsClass_field_0x04 = (int)&vt_DynamicVectorClass; /*0x4a033a*/
  this->M28 = 0; /*0x4a0340*/
  this->q020 = 0; /*0x4a0343*/
  /* X11: vtable install elided (implicit via EnumConnectionsClass virtuals 0x4a0346) */
  int i; // esi
  for ( i = 0; i < this->M20; ++i ) /*0x4a0353*/
  {
    int v12; // [esp-4h] [ebp-14h]
    v12 = *(unsigned int *)(this->M8 + 8 * i); /*0x4a035b*/
    (*(void (**)(int))(*(unsigned int *)v12 + 4))(v12); /*0x4a035e*/
  }
  return this->__pad_0; /*0x4a036b*/

}
}
// 0x4A0380
namespace gamemd {
unsigned int * E4Recv_4A0380::sub_4A0380(unsigned int * a2)
{


  int *p_EnumConnectionsClass_field_0x04 = &this->M4; // esi /*0x4a038f*/
  this->M8 = 0; /*0x4a0394*/
  this->M12 = 0; /*0x4a0397*/
  LOBYTE(this->M16) = 1; /*0x4a039a*/
  BYTE1(this->M16) = 0; /*0x4a039e*/
  this->M4 = (int)&vt_VectorClass; /*0x4a03a1*/
  if ( &this->M4 != a2 + 1 ) /*0x4a03a7*/
  {
    VectorClass::ClearAndFree2((int)&this->M4); /*0x4a03ab*/
    int v4; // eax
    v4 = a2[3]; /*0x4a03b1*/
    p_EnumConnectionsClass_field_0x04[2] = v4; /*0x4a03b6*/
    if ( v4 ) /*0x4a03b9*/
    {
      int v5; // eax
      v5 = (int)(__2_YAPAXI_Z(8 * v4)); /*0x4a03c3*/
      p_EnumConnectionsClass_field_0x04[1] = v5; /*0x4a03cd*/
      if ( v5 ) /*0x4a03d0*/
      {
        int v6; // ecx
        v6 = p_EnumConnectionsClass_field_0x04[2]; /*0x4a03d2*/
        int v7 = 0; // eax /*0x4a03d5*/
        *((unsigned char *)p_EnumConnectionsClass_field_0x04 + 13) = 1; /*0x4a03d9*/
        if ( v6 > 0 ) /*0x4a03dd*/
        {
          do /*0x4a03f9*/
          {
            int v8; // edx
            v8 = a2[2]; /*0x4a03df*/
            int v9; // ecx
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
  *p_EnumConnectionsClass_field_0x04 = (int)&vt_DynamicVectorClass; /*0x4a0415*/
  int v10; // eax
  v10 = a2[7]; /*0x4a041b*/
  this->q020 = 0; /*0x4a041e*/
  this->M28 = v10; /*0x4a0421*/
  /* X11: vtable install elided (implicit via EnumConnectionsClass virtuals 0x4a0424) */
  int i; // esi
  for ( i = 0; i < this->M20; ++i ) /*0x4a0431*/
  {
    int v13; // [esp-4h] [ebp-14h]
    v13 = *(unsigned int *)(this->M8 + 8 * i); /*0x4a0439*/
    (*(void (**)(int))(*(unsigned int *)v13 + 4))(v13); /*0x4a043c*/
  }
  return this->__pad_0; /*0x4a0449*/

}
}
// 0x4A0B20
namespace gamemd {  // G42.18c ns repair
int EnumConnectionPointsClass::_vt06(unsigned int * a1, unsigned int * a2)
{


  if ( !a2 ) /*0x4a0b2a*/
    return -2147467261; /*0x4a0b2d*/
  int v3; // edi
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
    int EnumConnectionPointsClass_field_0x14; // eax
    EnumConnectionPointsClass_field_0x14 = a1->EnumConnectionPointsClass_field_0x14; /*0x4a0b7e*/
    *(unsigned int *)(v3 + 20) = EnumConnectionPointsClass_field_0x14; /*0x4a0b83*/
    if ( EnumConnectionPointsClass_field_0x14 ) /*0x4a0b86*/
    {
      int v5; // eax
      v5 = (int)(__2_YAPAXI_Z(4 * EnumConnectionPointsClass_field_0x14)); /*0x4a0b90*/
      *(unsigned int *)(v3 + 16) = v5; /*0x4a0b9a*/
      if ( v5 ) /*0x4a0b9d*/
      {
        int v6; // ecx
        v6 = *(unsigned int *)(v3 + 20); /*0x4a0b9f*/
        int v7 = 0; // eax /*0x4a0ba2*/
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
  int i; // esi
  for ( i = 0; i < *(unsigned int *)(v3 + 28); ++i ) /*0x4a0be7*/
  {
    int v9; // [esp-Ch] [ebp-14h]
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
  ObjectClass *v4; // esi
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  int v20[3]; // [esp+Ch] [ebp-18h] BYREF
  int v21[3]; // [esp+18h] [ebp-Ch] BYREF

  int v3; // ecx
  int v5 = v3; // ebp /*0x4a237a*/
  uint8_t result; // al
  if ( (unsigned char)this || (result = *(unsigned char *)(v3 + 8)) != 0 ) /*0x4a2383*/
  {
    int v7; // kr00_4
    v7 = (*((int (**)(DSurface *, int))DSurface_Sidebar + 31))(DSurface_Sidebar, a2); /*0x4a239f*/
    if ( dword_A83D4C == (int)((Object *))HouseClass_Observer ) /*0x4a23aa*/
    {
      UI_Draw_6D0E60(v4); /*0x4a23b5*/
      v19 = v7 / 2; /*0x4a23c2*/
      v20[0] = 2; /*0x4a23c6*/
      int v8; // ecx
      v8 = *(unsigned int *)(v5 + 4); /*0x4a241f*/
      int v9; // esi
      v9 = ((uint8_t)DataGlobal_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a2422*/
      | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
      | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      if ( v8 / 3600 > 99 ) /*0x4a243a*/
        v8 = 359999; /*0x4a243c*/
      int v10 = v8 / 3600; // edi /*0x4a2454*/
      int v11; // ecx
      v11 = 720 * (4 * (v8 / -3600) - v8 / 3600) + v8; /*0x4a246d*/
      int v18; // [esp-8h] [ebp-2Ch]
      v18 = v11 % 60; /*0x4a2488*/
      int v17; // [esp-Ch] [ebp-30h]
      v17 = v11 / 60; /*0x4a2489*/
      wchar_t *StringCSF; // eax
      StringCSF = GetStringCSF((char *)&stru_81AF8C.IsAnimatedTiberium, 0, aDRa2mdpostCred, 107); /*0x4a2499*/
      swprintf(&word_89F860, (const size_t)StringCSF, (const wchar_t *const)v10, v17, v18); /*0x4a24a4*/
      int v13; // eax
      v13 = (*((int (**)(DSurface *))DSurface_Sidebar + 30))(DSurface_Sidebar); /*0x4a24c6*/
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
      if ( *(unsigned char *)(v5 + 10) && *(int *)(*(unsigned int *)&g_RulesClass_Instance + 1756) >= 2 ) /*0x4a250b*/
      {
        int v14; // ecx
        if ( *(unsigned char *)(v5 + 9) ) /*0x4a250d*/
          v14 = **(unsigned int **)(*(unsigned int *)&g_RulesClass_Instance + 1744); /*0x4a2526*/
        else
          v14 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 1744) + 4); /*0x4a2530*/
        PlayVocClass(v14, 0x2000, 0.5, 0); /*0x4a2533*/
      }
      UI_Draw_6D0E60(v4); /*0x4a253d*/
      v19 = v7 / 2; /*0x4a254e*/
      v20[0] = 2; /*0x4a2552*/
      int v16; // [esp-14h] [ebp-38h]
      v16 = ((uint8_t)DataGlobal_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4a25be*/
      | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[621] >> g_BitMask_Blue << g_BitMask_Green)
      | ((uint8_t)g_BuildingLoadQueue_Array.__pad_F70[622] >> g_BitMask_Red << g_BitShift_Blue);
      int v15; // eax
      v15 = (*((int (**)(DSurface *))DSurface_Sidebar + 30))(DSurface_Sidebar); /*0x4a25c7*/
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

  int v4 = Size; // ebp /*0x4a2b66*/
  if ( !a2 ) /*0x4a2b6e*/
    return -2147467261; /*0x4a2b72*/
  if ( Size < 0 ) /*0x4a2b7e*/
    return -2147024809; /*0x4a2b82*/
  unsigned int *v6; // esi
  v6 = (unsigned int *)a1; /*0x4a2b8c*/
  if ( !*(unsigned int *)(a1 + 8) ) /*0x4a2b90*/
    return -2147467259; /*0x4a2b99*/
  if ( *(unsigned char *)(a1 + 17) ) /*0x4a2ba3*/
    return -2147467259; /*0x4a2baa*/
  signed int *v7 = a4; // eax /*0x4a2bb6*/
  *(unsigned char *)(a1 + 16) = 1; /*0x4a2bba*/
  if ( v7 ) /*0x4a2bc0*/
    *v7 = 0; /*0x4a2bc2*/
  for ( ; v4 > 0; v6[5] = v6[10] ) /*0x4a2bca*/
  {
    int v8; // eax
    v8 = v6[5]; /*0x4a2bd0*/
    if ( v8 > 0 ) /*0x4a2bd5*/
    {
      size_t v9 = v4; // edi /*0x4a2bd9*/
      if ( v4 >= v8 ) /*0x4a2bdb*/
        v9 = v6[5]; /*0x4a2bdd*/
      memcpy(a2, (const void *)(v6[6] + v6[10] - v8), v9); /*0x4a2bf0*/
      v4 -= v9; /*0x4a2c01*/
      size_t v10; // eax
      v10 = v6[5] - v9; /*0x4a2c03*/
      a2 += v9; /*0x4a2c05*/
      v6[5] = v10; /*0x4a2c09*/
    }
    if ( !v4 ) /*0x4a2c0e*/
      break; /*0x4a2c0e*/
    int v11; // eax
    v11 = v6[2]; /*0x4a2c14*/
    a1 = 0; /*0x4a2c17*/
    if ( !v11 ) /*0x4a2c21*/
      sub_7DC720(-2147467261); /*0x4a2c28*/
    int *v12; // edi
    v12 = (int *)(v6 + 9); /*0x4a2c34*/
    int result; // eax
    result = (*(int (__stdcall **)(unsigned int, unsigned int *, int, int *))(*(unsigned int *)v6[2] + 12))(v6[2], v6 + 9, 8, &a1); /*0x4a2c3e*/
    if ( result < 0 ) /*0x4a2c43*/
      return result; /*0x4a2c43*/
    if ( a1 != 8 ) /*0x4a2c4a*/
      return -2147467259; /*0x4a2c4a*/
    if ( !v6[2] ) /*0x4a2c50*/
      sub_7DC720(-2147467261); /*0x4a2c5c*/
    result = (*(int (__stdcall **)(unsigned int, unsigned int, int, int *))(*(unsigned int *)v6[2] + 12))(v6[2], v6[7], *v12, &a1); /*0x4a2c73*/
    if ( result < 0 ) /*0x4a2c78*/
      return result; /*0x4a2c78*/
    int v13 = *v12; // edx /*0x4a2c7a*/
    if ( a1 != *v12 ) /*0x4a2c82*/
      return -2147467259; /*0x4a2c82*/
    unsigned char *v15; // [esp+8h] [ebp-1Ch]
    v15 = (unsigned char *)v6[6]; /*0x4a2c92*/
    uint8_t *v14; // ecx
    v14 = (uint8_t *)v6[7]; /*0x4a2c93*/
    int v16; // [esp+20h] [ebp-4h] BYREF
    v16 = 0x10000; /*0x4a2c96*/
    DecodeBlockLCW((gamemd::AbstractClass *)(v14), v13, v15, &v16, 0); /*0x4a2c9e*/
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


  int *p_estimatedHealth = &this->estimatedHealth; // ebx /*0x4a3287*/
  this->AbstractClass = (void *)a4; /*0x4a328f*/
  this->estimatedHealth = 0; /*0x4a3291*/
  *&this->M116 = 0; /*0x4a3297*/
  memset(&this->M116, 0, 0x6Cu); /*0x4a329e*/
  this->M116 = (unsigned int)((void *)108); /*0x4a32a4*/
  this->M8 = (unsigned int)((void *)7); /*0x4a32aa*/
  this->health = dword_81FC60[a4]; /*0x4a32b8*/
  this->M16 = a2; /*0x4a32bf*/
  this->M12 = (unsigned int)((void *)a3); /*0x4a32c2*/
  if ( a4 == 1 ) /*0x4a32c5*/
  {
    this->M8 = (unsigned int)((void *)71); /*0x4a32c7*/
    this->M28 = 16; /*0x4a32ce*/
  }
  if ( !dword_8A0E00 /*0x4a32e5*/
    || !(*(int (**)(int, void **, int *, unsigned int))(*(unsigned int *)dword_8A0E00 + 24))(
          dword_8A0E00,
          &this->?,
          &this->estimatedHealth,
          0) )
  {
    int v6 = *p_estimatedHealth; // ebx /*0x4a32ec*/
    if ( v6 ) /*0x4a32f0*/
    {
      if ( a4 ) /*0x4a32f5*/
      {
        if ( a4 == 1 ) /*0x4a32f8*/
        {
          unsigned int v8[25]; // [esp+10h] [ebp-64h] BYREF
          memset(v8, 0, sizeof(v8)); /*0x4a3314*/
          v8[0] = 100; /*0x4a331a*/
          v8[20] = -1; /*0x4a332a*/
          (*(void (**)(int, unsigned int, unsigned int, unsigned int, int, unsigned int *))(*(unsigned int *)v6 + 20))( /*0x4a3339*/
            v6,
            0,
            0,
            0,
            0x2000000,
            v8);
          return (int *)this; /*0x4a3347*/
        }
        if ( a4 != 2 ) /*0x4a32fb*/
          return (int *)this; /*0x4a3306*/
      }
      (**(void (***)(int, void *, char *))v6)(v6, &unk_7F8130, &this->isOnMap); /*0x4a3356*/
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
  void * v5;
  size_t v6; // edi
  bool v7; // zf
  CCFileClass v8; // [esp+Ch] [ebp-6Ch] BYREF
  int v9[5]; // [esp+64h] [ebp-14h] BYREF

  *aP1 = 0; /*0x4a38db*/
  result = (void *)SearchMIXFile(aP0, 0); /*0x4a38de*/
  if ( !result ) /*0x4a38e5*/
  {
    CCFileClass::Construct(&v8, aP0); /*0x4a38ed*/
    v5 = 0; /*0x4a38f2*/
    if ( (*(uint8_t (**)(CCFileClass *, unsigned int))(*(unsigned int *)v8.vtable1 + 20))(&v8, 0) ) /*0x4a38fd*/
    {
      v6 = (*(int (**)(CCFileClass *))(*(unsigned int *)v8.vtable1 + 44))(&v8); /*0x4a390f*/
      v5 = (void *)((int)(operator new(v6))); /*0x4a3917*/
      v7 = v5 == 0; /*0x4a391c*/
      if ( !v5 ) /*0x4a391e*/
      {
        LABEL_6: *aP1 = (unsigned int)(!v7);
        /* X11: vtable install elided (implicit via CCFileClass virtuals 0x4a3938) */
        v9[3] = (unsigned int)(0); /*0x4a3940*/
        Vector::Clear((int)v9); /*0x4a3948*/
        /* X11: vtable install elided (implicit via off_7E1668 virtuals 0x4a3951) */
        ((BufferIOFileClass *)((BufferIOFileClass *)&v8))->Dtor(); /*0x4a3959*/
        return v5; /*0x4a395e*/
      }
      (*(void (**)(CCFileClass *, int, size_t))(*(unsigned int *)v8.vtable1 + 36))(&v8, v5, v6); /*0x4a392a*/
    }
    v7 = v5 == 0; /*0x4a392d*/
    goto LABEL_6; /*0x4a392d*/
  }
  return result; /*0x4a3961*/
}
}
// 0x4A3970
namespace gamemd {
AbstractClass * * FileClass_LoadToBuffer(char ** a1, bool * a2)
{
  char *v3; // esi
  int result; // eax
  void *v5; // esi
  size_t v6; // ebx
  bool v7; // zf
  unsigned int v8[22]; // [esp+Ch] [ebp-6Ch] BYREF
  unsigned int v9[5]; // [esp+64h] [ebp-14h] BYREF

  v3 = (char *)((int)(((String *)(a1))->GetOrEmpty_Alt()));
  *a2 = 0; /*0x4a3982*/
  result = (int)(SearchMIXFile(v3, 0)); /*0x4a3985*/
  if ( !result ) /*0x4a398c*/
  {
    CCFileClass::Construct(v8, v3); /*0x4a3994*/
    v5 = 0; /*0x4a3999*/
    if ( (*(uint8_t (**)(unsigned int *, unsigned int))(v8[0] + 20))(v8, 0) ) /*0x4a39a4*/
    {
      v6 = (*(int (**)(unsigned int *))(v8[0] + 44))(v8); /*0x4a39b6*/
      v5 = operator new(v6); /*0x4a39be*/
      v7 = v5 == 0; /*0x4a39c3*/
      if ( !v5 ) /*0x4a39c5*/
      {
        LABEL_6: *a2 = (gamemd::AbstractClass **)(!v7);
        v8[0] = (unsigned int)(&vt_CCFileClass); /*0x4a39df*/
        v9[3] = 0; /*0x4a39e7*/
        Vector::Clear((int)v9); /*0x4a39ef*/
        v8[0] = (unsigned int)&off_7E1668; /*0x4a39f8*/
        ((BufferIOFileClass *)(v8))->Dtor(); /*0x4a3a00*/
        return (gamemd::AbstractClass **)((int)v5); /*0x4a3a05*/
      }
      (*(void (**)(unsigned int *, void *, size_t))(v8[0] + 36))(v8, v5, v6); /*0x4a39d1*/
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
    Ticks = TimerGetTicks(); /*0x4a3c5f*/
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
    memcpy(v24, &unk_89F990, sizeof(v24)); /*0x4a3c92*/
    memcpy(v26, a1, sizeof(v26)); /*0x4a3ca9*/
    while ( 1 ) /*0x4a3cab*/
    {
      v9 = v22; /*0x4a3cab*/
      if ( v8 != -1 ) /*0x4a3cb2*/
      {
        v10 = TimerGetTicks(); /*0x4a3cb8*/
        v8 = Ticks; /*0x4a3cbd*/
        v11 = v10 - Ticks; /*0x4a3cc1*/
        if ( v11 >= v22 ) /*0x4a3cc5*/
          return Surface::CreateSurfacePalette(v26); /*0x4a3cc5*/
        v9 = v22 - v11; /*0x4a3ccb*/
      }
      if ( !v9 ) /*0x4a3ccf*/
        return Surface::CreateSurfacePalette(v26); /*0x4a3daf*/
      memcpy(Src, v24, sizeof(Src)); /*0x4a3ce8*/
      v12 = v22; /*0x4a3cea*/
      if ( v8 != -1 ) /*0x4a3cee*/
      {
        v13 = TimerGetTicks() - Ticks; /*0x4a3cf9*/
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
      Surface::CreateSurfacePalette(Src); /*0x4a3d56*/
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
unsigned int sub_4A4130(void *a1)
{
  LPDIRECTDRAW v1; // eax
  CHAR Text[80]; // [esp+78h] [ebp-18Ch] BYREF

  v1 = (LPDIRECTDRAW)(g_lpDirectDraw7);
  char v2 = 0; // bl /*0x4a413c*/
  if ( !g_lpDirectDraw7 ) /*0x4a4148*/
  {
    int v3; // eax
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
      v1 = (LPDIRECTDRAW)(g_lpDirectDraw7);
      v2 = 1; /*0x4a42a2*/
    }
  }
  unsigned int v4 = 0; // esi /*0x4a4179*/
  if ( v1 ) /*0x4a417d*/
  {
    unsigned int v10[79]; // [esp+C8h] [ebp-13Ch] BYREF
    v10[0] = 316; /*0x4a418a*/
    if ( !v1->lpVtbl->GetCaps(v1, (LPDDCAPS)v10, 0) ) /*0x4a419a*/
    {
      int v5; // esi
      v5 = v10[15]; /*0x4a41af*/
      Debug::Log(); /*0x4a41bb*/
      unsigned int v8[27]; // [esp+Ch] [ebp-1F8h] BYREF
      memset(v8, 0, sizeof(v8)); /*0x4a41ce*/
      v8[0] = 108; /*0x4a41d9*/
      if ( !g_lpDirectDraw7->lpVtbl->GetDisplayMode(g_lpDirectDraw7, (LPDDSURFACEDESC)v8) ) /*0x4a41e5*/
      {
        Debug::Log(); /*0x4a4206*/
        v5 += v8[2] * v8[3] * (v8[21] >> 3); /*0x4a421f*/
      }
      v4 = (v5 + 0x20000) & 0xFFF00000; /*0x4a4227*/
      Debug::Log(); /*0x4a4239*/
    }
    v1 = (LPDIRECTDRAW)(g_lpDirectDraw7);
  }
  if ( v2 && v1 ) /*0x4a4250*/
  {
    int v6; // eax
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
  return v4; /*0x4a42dd*/
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
  v16 = &vt_DynamicVectorClass; /*0x4a4937*/
  v20 = 10; /*0x4a493f*/
  v19 = 0; /*0x4a4947*/
  if ( g_lpDirectDraw7->lpVtbl->EnumDisplayModes(g_lpDirectDraw7, 0, 0, &v16, (LPDDENUMMODESCALLBACK)sub_4A4850) || !v19 ) /*0x4a4967*/
  {
    v16 = &vt_VectorClass; /*0x4a4a93*/
    if ( Block && (((unsigned char *)&(v18))[1]) ) /*0x4a4aa5*/
      operator delete((Block)); /*0x4a4aa8*/
    return 0; /*0x4a4aa8*/
  }
  v5 = (unsigned int *)operator new(8 * v19 + 4); /*0x4a497e*/
  v6 = v5; /*0x4a4990*/
  memset(v5, 0, 8 * v19 + 4); /*0x4a4995*/
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
    operator delete((*((void **)Block + v7++))); /*0x4a4a03*/
  }
  while ( v7 < v19 ); /*0x4a4a12*/
  if ( v6 == v5 ) /*0x4a4a17*/
  {
    LABEL_13:
    operator delete((v5)); /*0x4a4a1a*/
    v16 = &vt_VectorClass; /*0x4a4a28*/
    if ( Block && (((unsigned char *)&(v18))[1]) ) /*0x4a4a38*/
    {
      operator delete((Block)); /*0x4a4a3b*/
      return 0; /*0x4a4a4b*/
    }
    return 0; /*0x4a4a38*/
  }
  qsort(v5, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4A48C0); /*0x4a4a5b*/
  v16 = &vt_VectorClass; /*0x4a4a69*/
  if ( Block && (((unsigned char *)&(v18))[1]) ) /*0x4a4a79*/
    operator delete((Block)); /*0x4a4a7c*/
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
  v9 = Text::MeasureWidth(a2, 0); /*0x4a59f1*/
  v10 = v7->CampaignScore_field_0x1C; /*0x4a59f6*/
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

  int v81; // [esp+A8h] [ebp-3Ch]
  v81 = 15; /*0x4a5a69*/
  int v86; // [esp+BCh] [ebp-28h]
  v86 = 14; /*0x4a5a74*/
  unsigned int *v5; // edi
  v5 = (unsigned int *)*((unsigned int *)dword_B054D4 + BuildingAnim::GetType()); /*0x4a5a7f*/
  int v6; // ecx
  v6 = v5[202]; /*0x4a5a8b*/
  int v7; // eax
  v7 = v5[200]; /*0x4a5a91*/
  int v8; // ebx
  v8 = v5[201]; /*0x4a5a97*/
  int v74; // [esp+8Ch] [ebp-58h]
  v74 = v5[199]; /*0x4a5a9d*/
  int v77; // [esp+98h] [ebp-4Ch]
  v77 = v74; /*0x4a5aa1*/
  unsigned int v73[2]; // [esp+84h] [ebp-60h] BYREF
  v73[1] = v6; /*0x4a5aad*/
  int v78; // [esp+9Ch] [ebp-48h]
  v78 = v6; /*0x4a5ab1*/
  int v82; // [esp+ACh] [ebp-38h]
  v82 = 12; /*0x4a5ab8*/
  int v85; // [esp+B8h] [ebp-2Ch]
  v85 = 12; /*0x4a5abf*/
  v73[0] = v7; /*0x4a5acd*/
  int v76; // [esp+94h] [ebp-50h]
  v76 = v7; /*0x4a5ad1*/
  int v88; // [esp+C4h] [ebp-20h]
  v88 = v7; /*0x4a5ad8*/
  int v91; // [esp+D0h] [ebp-14h]
  v91 = v7; /*0x4a5adf*/
  int v92; // [esp+D4h] [ebp-10h]
  v92 = v7; /*0x4a5ae6*/
  int v95; // [esp+E0h] [ebp-4h]
  v95 = v7; /*0x4a5aed*/
  int v80; // [esp+A4h] [ebp-40h]
  v80 = 13; /*0x4a5afb*/
  int v83; // [esp+B0h] [ebp-34h]
  v83 = 13; /*0x4a5b02*/
  int v84; // [esp+B4h] [ebp-30h]
  v84 = 13; /*0x4a5b09*/
  int v87; // [esp+C0h] [ebp-24h]
  v87 = 13; /*0x4a5b10*/
  int v9; // ecx
  v9 = v5[203]; /*0x4a5b17*/
  int v75; // [esp+90h] [ebp-54h]
  v75 = v8; /*0x4a5b1d*/
  int v79; // [esp+A0h] [ebp-44h]
  v79 = v8; /*0x4a5b24*/
  int v89; // [esp+C8h] [ebp-1Ch]
  v89 = v9; /*0x4a5b2b*/
  int v90; // [esp+CCh] [ebp-18h]
  v90 = v9; /*0x4a5b34*/
  int v93; // [esp+D8h] [ebp-Ch]
  v93 = v9; /*0x4a5b3b*/
  int v94; // [esp+DCh] [ebp-8h]
  v94 = v9; /*0x4a5b42*/
  int *v10; // ebx
  v10 = (int *)(&v73[4 * a2]); /*0x4a5b49*/
  if ( a3 ) /*0x4a5b4d*/
  {
    int v11; // eax
    v11 = v5[195]; /*0x4a5b4f*/
    int v12 = *v10; // ecx /*0x4a5b55*/
    int v13; // eax
    if ( *(unsigned int *)(v11 + 4) == 1 ) /*0x4a5b5b*/
      v13 = *(uint8_t *)(*(unsigned int *)(v11 + 372) + v12); /*0x4a5b68*/
    else
      v13 = *(uint16_t *)(*(unsigned int *)(v11 + 372) + 2 * v12); /*0x4a5b74*/
    (*(void (**)(int, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, a1, v13); /*0x4a5b82*/
  }
  int v14 = a2 - 4; // ebp /*0x4a5b85*/
  if ( v14 ) /*0x4a5b88*/
  {
    if ( v14 == 1 ) /*0x4a5b8f*/
    {
      int v51; // edi
      v51 = v5[195]; /*0x4a5d9c*/
      int v52; // ebx
      v52 = v10[2]; /*0x4a5da2*/
      int v53; // eax
      if ( *(unsigned int *)(v51 + 4) == 1 ) /*0x4a5da9*/
        v53 = *(uint8_t *)(*(unsigned int *)(v51 + 372) + v52); /*0x4a5db3*/
      else
        v53 = *(uint16_t *)(*(unsigned int *)(v51 + 372) + 2 * v52); /*0x4a5dc0*/
      int v54; // edx
      v54 = a1[1] + 1; /*0x4a5dca*/
      unsigned int v72[4]; // [esp+74h] [ebp-70h] BYREF
      v72[0] = *a1 + 1; /*0x4a5dcb*/
      int v55; // ecx
      v55 = a1[2]; /*0x4a5dcf*/
      v72[1] = v54; /*0x4a5dd2*/
      int v56; // edx
      v56 = a1[3] - 1; /*0x4a5dda*/
      v72[2] = v55 - 1; /*0x4a5ddb*/
      v72[3] = v56; /*0x4a5de6*/
      return (*(int (**)(int, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 88))( /*0x4a5df1*/
               g_DSurface_Hidden_2,
               v72,
               v53);
    }
    else
    {
      int v15; // eax
      v15 = v5[195]; /*0x4a5b95*/
      int v16; // ecx
      v16 = v10[1]; /*0x4a5b9b*/
      int v17; // edx
      v17 = *(unsigned int *)(v15 + 4); /*0x4a5b9e*/
      int v18; // eax
      v18 = *(unsigned int *)(v15 + 372); /*0x4a5ba1*/
      int v19; // edx
      if ( v17 == 1 ) /*0x4a5baa*/
        v19 = *(uint8_t *)(v18 + v16); /*0x4a5bae*/
      else
        v19 = *(uint16_t *)(v18 + 2 * v16); /*0x4a5bb5*/
      int v20 = *a1; // eax /*0x4a5bb9*/
      int v21; // ebp
      v21 = a1[3]; /*0x4a5bc3*/
      int v66; // [esp+54h] [ebp-90h] BYREF
      v66 = a1[2] + *a1; /*0x4a5bc6*/
      int v67; // [esp+58h] [ebp-8Ch]
      v67 = v21 + a1[1]; /*0x4a5bd3*/
      unsigned int v62[2]; // [esp+34h] [ebp-B0h] BYREF
      v62[1] = v67; /*0x4a5bd7*/
      v62[0] = v20; /*0x4a5be2*/
      (*(void (**)(int, unsigned int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5bed*/
        g_DSurface_Hidden_2,
        v62,
        &v66,
        v19);
      int v22; // eax
      v22 = v5[195]; /*0x4a5bf0*/
      int v23; // ecx
      v23 = v10[1]; /*0x4a5bf6*/
      int v24; // edx
      v24 = *(unsigned int *)(v22 + 4); /*0x4a5bf9*/
      int v25; // eax
      v25 = *(unsigned int *)(v22 + 372); /*0x4a5bfc*/
      int v26; // edx
      if ( v24 == 1 ) /*0x4a5c05*/
        v26 = *(uint8_t *)(v25 + v23); /*0x4a5c09*/
      else
        v26 = *(uint16_t *)(v25 + 2 * v23); /*0x4a5c10*/
      int v27; // eax
      v27 = a1[2] + *a1; /*0x4a5c19*/
      int v28; // ebp
      v28 = a1[3] + a1[1]; /*0x4a5c21*/
      unsigned int v64[2]; // [esp+44h] [ebp-A0h] BYREF
      v64[1] = a1[1]; /*0x4a5c24*/
      unsigned int v71[2]; // [esp+6Ch] [ebp-78h] BYREF
      v71[0] = v27; /*0x4a5c33*/
      v71[1] = v28; /*0x4a5c37*/
      v64[0] = v27; /*0x4a5c3b*/
      (*(void (**)(int, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5c46*/
        g_DSurface_Hidden_2,
        v64,
        v71,
        v26);
      int v29; // eax
      v29 = v5[195]; /*0x4a5c49*/
      int v30; // ecx
      v30 = v10[2]; /*0x4a5c4f*/
      int v31; // edx
      v31 = *(unsigned int *)(v29 + 4); /*0x4a5c57*/
      int v32; // eax
      v32 = *(unsigned int *)(v29 + 372); /*0x4a5c5a*/
      int v33; // edx
      if ( v31 == 1 ) /*0x4a5c62*/
        v33 = *(uint8_t *)(v32 + v30); /*0x4a5c66*/
      else
        v33 = *(uint16_t *)(v32 + 2 * v30); /*0x4a5c6d*/
      int v34; // ecx
      v34 = a1[2] + *a1; /*0x4a5c7a*/
      unsigned int v60[2]; // [esp+24h] [ebp-C0h] BYREF
      v60[0] = *a1; /*0x4a5c7e*/
      int v69; // [esp+64h] [ebp-80h] BYREF
      v69 = v34; /*0x4a5c86*/
      int v70; // [esp+68h] [ebp-7Ch]
      v70 = a1[1]; /*0x4a5c8d*/
      v60[1] = v70; /*0x4a5c91*/
      (*(void (**)(int, unsigned int *, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5c9e*/
        g_DSurface_Hidden_2,
        v60,
        &v69,
        v33);
      int v35; // eax
      v35 = v5[195]; /*0x4a5ca1*/
      int v36; // ecx
      v36 = v10[2]; /*0x4a5ca7*/
      int v37; // edx
      v37 = *(unsigned int *)(v35 + 4); /*0x4a5caa*/
      int v38; // eax
      v38 = *(unsigned int *)(v35 + 372); /*0x4a5cad*/
      int v39; // edx
      if ( v37 == 1 ) /*0x4a5cb5*/
        v39 = *(uint8_t *)(v38 + v36); /*0x4a5cb9*/
      else
        v39 = *(uint16_t *)(v38 + 2 * v36); /*0x4a5cc0*/
      int v40 = *a1; // eax /*0x4a5cc7*/
      int v41; // ebp
      v41 = a1[3] + a1[1]; /*0x4a5ccc*/
      unsigned int v63[2]; // [esp+3Ch] [ebp-A8h] BYREF
      v63[1] = a1[1]; /*0x4a5ccf*/
      unsigned int v61[2]; // [esp+2Ch] [ebp-B8h] BYREF
      v61[0] = v40; /*0x4a5cde*/
      v61[1] = v41; /*0x4a5ce2*/
      v63[0] = v40; /*0x4a5ce6*/
      (*(void (**)(int, unsigned int *, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 48))( /*0x4a5cf1*/
        g_DSurface_Hidden_2,
        v63,
        v61,
        v39);
      int v42; // eax
      v42 = v5[195]; /*0x4a5cf4*/
      int v43; // ecx
      v43 = v10[3]; /*0x4a5cfa*/
      int v44; // eax
      if ( *(unsigned int *)(v42 + 4) == 1 ) /*0x4a5d05*/
        v44 = *(uint8_t *)(*(unsigned int *)(v42 + 372) + v43); /*0x4a5d12*/
      else
        v44 = *(uint16_t *)(*(unsigned int *)(v42 + 372) + 2 * v43); /*0x4a5d1e*/
      int v45; // edx
      v45 = a1[1]; /*0x4a5d24*/
      unsigned int v65[2]; // [esp+4Ch] [ebp-98h] BYREF
      v65[0] = *a1; /*0x4a5d27*/
      v65[1] = a1[3] + v45; /*0x4a5d37*/
      (*(void (**)(int, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 36))(g_DSurface_Hidden_2, v65, v44); /*0x4a5d42*/
      int v46; // edi
      v46 = v5[195]; /*0x4a5d45*/
      int v47; // ebx
      v47 = v10[3]; /*0x4a5d4b*/
      int v48; // eax
      if ( *(unsigned int *)(v46 + 4) == 1 ) /*0x4a5d51*/
        v48 = *(uint8_t *)(*(unsigned int *)(v46 + 372) + v47); /*0x4a5d5b*/
      else
        v48 = *(uint16_t *)(*(unsigned int *)(v46 + 372) + 2 * v47); /*0x4a5d68*/
      int v49; // edx
      v49 = a1[1]; /*0x4a5d71*/
      unsigned int v68[2]; // [esp+5Ch] [ebp-88h] BYREF
      v68[0] = *a1 + a1[2]; /*0x4a5d76*/
      v68[1] = v49; /*0x4a5d81*/
      return (*(int (**)(int, unsigned int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 36))( /*0x4a5d8c*/
               g_DSurface_Hidden_2,
               v68,
               v48);
    }
  }
  else
  {
    int v57; // edi
    v57 = v5[195]; /*0x4a5e01*/
    int v58; // ebx
    v58 = v10[2]; /*0x4a5e07*/
    int v59; // eax
    if ( *(unsigned int *)(v57 + 4) == 1 ) /*0x4a5e0e*/
      v59 = *(uint8_t *)(*(unsigned int *)(v57 + 372) + v58); /*0x4a5e18*/
    else
      v59 = *(uint16_t *)(*(unsigned int *)(v57 + 372) + 2 * v58); /*0x4a5e25*/
    return (*(int (**)(int, int *, int))(*(unsigned int *)g_DSurface_Hidden_2 + 88))(g_DSurface_Hidden_2, a1, v59); /*0x4a5e33*/
  }
}
}
// 0x4A5EB0
namespace gamemd {
void * RenderTextLabel(int * a0, AbstractClass * aP1, int * a2, AbstractClass, void * v12, void * a3, void * a4, void * a5, void * a6, void * a8)
{
  int v22; // [esp+18h] [ebp-20h] BYREF
  int v23; // [esp+1Ch] [ebp-1Ch]
  int v24; // [esp+20h] [ebp-18h]
  char *v25; // [esp+24h] [ebp-14h]

  a4 = a4; /*0x4a5ebe*/
  Char *v10; // ebx
  v10 = (Char *)g_FogOfWarState; /*0x4a5ec8*/
  int v11; // ebp
  v11 = a4[1] + *(unsigned int *)(a5 + 4); /*0x4a5ed3*/
  int v12; // esi
  v12 = *(unsigned int *)a5 + *a4; /*0x4a5ed8*/
  Text::Layout(g_FogOfWarState, a2, &a5, &a4, a4[2]); /*0x4a5eec*/
  char v13; // ah
  v13 = (((unsigned char *)&(a8))[1]); /*0x4a5ef1*/
  if ( (a8 & 0x100) != 0 ) /*0x4a5efc*/
  {
    v12 += a5 / -2; /*0x4a5f07*/
    v13 = (((unsigned char *)&(a8))[1]); /*0x4a5f09*/
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
      v25 = &a4->u8_2; /*0x4a5f7a*/
      v23 = v11 - 1; /*0x4a5f82*/
      v22 = (int)(v12 - 1); /*0x4a5f86*/
      (*(void (**)(int *, int *, unsigned int))(*a3 + 20))(a3, &v22, 0); /*0x4a5f93*/
    }
  }
  else
  {
    v24 = (int)(a5 + 2); /*0x4a5f21*/
    v23 = v11 - 1; /*0x4a5f2c*/
    v25 = &a4->u8_2; /*0x4a5f30*/
    v22 = (int)(v12 - 1); /*0x4a5f42*/
    int v14; // edx
    v14 = (int)(*a3); /*0x4a5f46*/
    (*((unsigned short *)&(a8))) = 0; /*0x4a5f4c*/
    (((unsigned char *)&(a8))[2]) = 0; /*0x4a5f57*/
    a3->GetStringValue(&v22, &a8, 60); /*0x4a5f5c*/
  }
  int v15; // edx
  v15 = a4[2]; /*0x4a5f98*/
  int v16; // ecx
  v16 = a4[1]; /*0x4a5f9b*/
  unsigned int v26[4]; // [esp+28h] [ebp-10h] BYREF
  v26[0] = (unsigned int)(*a4); /*0x4a5f9e*/
  int v17; // eax
  v17 = v15 + v26[0]; /*0x4a5fa2*/
  int v18; // edx
  v18 = a4[3]; /*0x4a5fa4*/
  v26[1] = v16; /*0x4a5fa7*/
  v26[2] = v17; /*0x4a5fb1*/
  v26[3] = v16 + v18; /*0x4a5fb5*/
  (v10)->Swap(1); /*0x4a5fb9*/
  ((TextGroup *)((TextGroup *)v10))->SetRect(v26); /*0x4a5fc5*/
  ((Property *)((Property *)v10))->Set(a6); /*0x4a5fd1*/
  FontRenderer::DrawText(v10, a3, a2, v12, v11, 0, 0); /*0x4a5fed*/
  *v12 = v12; /*0x4a5ff7*/
  v12[1] = v11; /*0x4a5ff9*/
}
}
// 0x4A6010
namespace gamemd {
int * globalHelper_0A6010(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8, void * a9)
{

  int v11; // eax
  v11 = ((uint8_t *)(a6 + 776))->ConvertToRGB((int)&a6); /*0x4a6028*/
  int v14; // [esp+8h] [ebp-8h] BYREF
  (*((unsigned short *)&(v14))) = *(unsigned short *)v11; /*0x4a6036*/
  (((unsigned char *)&(v14))[2]) = v11->field_2; /*0x4a603e*/
  int *v12; // eax
  v12 = RenderTextLabel( /*0x4a60b2*/
          &v14,
          a2,
          a3,
          a4,
          a5,
          ((uint8_t)v14 >> g_BitShift_Green_0 << g_BitShift_Red)
          | ((((unsigned char *)&(v14))[1]) >> g_BitMask_Blue << g_BitMask_Green)
          | ((((unsigned char *)&(v14))[2]) >> g_BitMask_Red << g_BitShift_Blue),
          a7,
          a8,
          a9);
  *a1 = *v12; /*0x4a60b9*/
  a1[1] = v12[1]; /*0x4a60bf*/
  return a1; /*0x4a60bb*/
}
}
// 0x4A6360
namespace gamemd {
ControlClass * * RenderTextLabelWordWrap(int * a1, const wchar_t * a2, int a3, unsigned int * a4, int * a5, short a6, int a7, int a8, unsigned int a9, unsigned int * a10)
{
  unsigned int v22; // eax

  int *v10 = a1; // esi /*0x4a636f*/
  int v11 = *a5; // edi /*0x4a6371*/
  int v27; // [esp+1Ch] [ebp-414h]
  v27 = a5[1]; /*0x4a637c*/
  if ( a2 ) /*0x4a6380*/
  {
    wchar_t Destination[512]; // [esp+30h] [ebp-400h] BYREF
    wcscpy(Destination, a2); /*0x4a638e*/
    wchar_t *v12 = Destination; // ebp /*0x4a63a0*/
    unsigned int v13 = 0; // ebx /*0x4a63a4*/
    int v24; // [esp+Ch] [ebp-424h]
    v24 = 1; /*0x4a63a6*/
    do /*0x4a64d6*/
    {
      if ( v13 >= a9 ) /*0x4a63b5*/
        break; /*0x4a63b5*/
      wchar_t *v14; // eax
      v14 = wcschr(v12, 9u); /*0x4a63be*/
      wchar_t *v15 = v14; // edx /*0x4a63c3*/
      wchar_t *v25; // [esp+10h] [ebp-420h]
      v25 = v14; /*0x4a63ca*/
      if ( v14 ) /*0x4a63ce*/
        *v14 = 0; /*0x4a63d0*/
      (*((unsigned short *)&(v14))) = *v12; /*0x4a63d5*/
      if ( *v12 ) /*0x4a63d5*/
      {
        int v16 = 0; // esi /*0x4a63e2*/
        wchar_t *v17 = v12; // edi /*0x4a63e4*/
        do /*0x4a6409*/
        {
          ++v17; /*0x4a63eb*/
          v14 = (wchar_t *)(v14)->GetPixelData(); /*0x4a63ee*/
          v16 += (int)v14; /*0x4a63f3*/
          (*((unsigned short *)&(v14))) = *v17; /*0x4a63f5*/
        }
        while ( *v17 && v16 + v13 < a9 ); /*0x4a6409*/
        int v18; // eax
        (*(((unsigned short *)&(v18)) + 1)) = (*(((unsigned short *)&(a9)) + 1)); /*0x4a640b*/
        if ( v16 + v13 >= a9 ) /*0x4a6417*/
        {
          (*((unsigned short *)&(v18))) = *(v17 - 1); /*0x4a6419*/
          v16 -= (v18)->GetPixelData(); /*0x4a642a*/
          *(v17 - 1) = 0; /*0x4a642c*/
          v24 = 0; /*0x4a6431*/
        }
        int v19; // edx
        v19 = a5[1]; /*0x4a6444*/
        unsigned int v28[2]; // [esp+20h] [ebp-410h] BYREF
        v28[0] = v13 + *a5; /*0x4a6450*/
        v28[1] = v19; /*0x4a645b*/
        int *v20; // eax
        int v29; // [esp+28h] [ebp-408h] BYREF
        v20 = RenderTextLabel(&v29, (int)v12, a3, a4, (int)v28, a6, a7, a8, 1); /*0x4a6484*/
        v11 = *v20; /*0x4a6489*/
        v13 += v16; /*0x4a648b*/
        v10 = a1; /*0x4a648d*/
        v15 = v25; /*0x4a6491*/
        v27 = v20[1]; /*0x4a6498*/
      }
      if ( !v15 ) /*0x4a649e*/
        break; /*0x4a649e*/
      unsigned int *v21 = a10; // ecx /*0x4a64a0*/
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
  return v10; /*0x4a64e9*/
}
}
// 0x4A65C0
namespace gamemd {
int * * sub_4A65C0(int * a1, int a2, int a3, unsigned int * a4, int a5, short a6, int a7, int a8, int a9, int a10)
{
  int *v12; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a65d0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a65fb*/
  }
  else
  {
    int v14; // eax
    v14 = ((uint8_t *)(*((unsigned int *)dword_B054D4 + a9) + 776))->ConvertToRGB((int)&a9); /*0x4a6628*/
    (*((unsigned short *)&(v15[0]))) = *(unsigned short *)v14; /*0x4a6630*/
    (((unsigned char *)&(v15[0]))[2]) = *(unsigned char *)(v14 + 2); /*0x4a663e*/
    v12 = RenderTextLabel( /*0x4a66b2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            ((((unsigned char *)&(v15[0]))[1]) >> g_BitMask_Blue << g_BitMask_Green)
            | ((((unsigned char *)&(v15[0]))[2]) >> g_BitMask_Red << g_BitShift_Blue)
            | ((*((unsigned char *)&(v15[0]))) >> g_BitShift_Green_0 << g_BitShift_Red),
            a7,
            a8,
            a10);
  }
  *a1 = *v12; /*0x4a6602*/
  a1[1] = v12[1]; /*0x4a660a*/
  return a1; /*0x4a6604*/
}
}
// 0x4A66D0
namespace gamemd {
int * globalHelper_0A66D0(int * a1, void * a2, void * a3, void * a4, void * a5, short a6, int a7, int a8, void * a9, int a10)
{
  int *v12; // eax
  int v15[2]; // [esp+8h] [ebp-8h] BYREF

  if ( a9 == -1 ) /*0x4a66e0*/
  {
    v12 = RenderTextLabel(v15, a2, a3, a4, a5, a6, a7, a8, a10); /*0x4a670b*/
  }
  else
  {
    int v14; // eax
    v14 = Color::ConvertToRGB((uint8_t *)(*((unsigned int *)dword_B054D4 + a9) + 776), (int)&a9); /*0x4a6738*/
    (*((unsigned short *)&(v15[0]))) = *(unsigned short *)v14; /*0x4a6740*/
    (((unsigned char *)&(v15[0]))[2]) = *(unsigned char *)(v14 + 2); /*0x4a674e*/
    v12 = RenderTextLabel( /*0x4a67c2*/
            v15,
            a2,
            a3,
            a4,
            a5,
            ((((unsigned char *)&(v15[0]))[1]) >> g_BitMask_Blue << g_BitMask_Green)
            | ((((unsigned char *)&(v15[0]))[2]) >> g_BitMask_Red << g_BitShift_Blue)
            | ((*((unsigned char *)&(v15[0]))) >> g_BitShift_Green_0 << g_BitShift_Red),
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

  (*((unsigned char *)&(a2))) = a1; /*0x4a67e0*/
  (((unsigned char *)&(a2))[1]) = a1; /*0x4a67e4*/
  dword_8A0150 = 0; /*0x4a67e6*/
  dword_8A0154 = 0; /*0x4a67ed*/
  int v2 = a2 << 16; // ecx /*0x4a67f2*/
  dword_8A0158 = 0; /*0x4a67f5*/
  (*((unsigned short *)&(v2))) = a2; /*0x4a67fa*/
  *(int *)((char *)&dword_8A0158 + 3) = v2; /*0x4a6802*/
  (*(((unsigned char *)&(dword_8A015C)) + (sizeof(dword_8A015C) - 1))) = a2; /*0x4a6808*/
  return &dword_8A0150; /*0x4a6813*/
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

  LOBYTE(this->AbstractClass) = 0; /*0x4a6855*/
  this->M4 = 0; /*0x4a6857*/
  this->M8 = 0; /*0x4a685a*/
  this->M12 = 0; /*0x4a685d*/
  this->M16 = a3; /*0x4a6860*/
  this->M20 = a4; /*0x4a6863*/
  this->q018 = 0; /*0x4a6866*/
  this->M28 = 0; /*0x4a6869*/
  this->q020 = 0; /*0x4a686c*/
  v6 = (unsigned int *)__2_YAPAXI_Z(0x42Cu); /*0x4a686f*/
  this->M4 = v6; /*0x4a6879*/
  if ( !v6 ) /*0x4a687c*/
    goto LABEL_12; /*0x4a687c*/
  *v6 = 40; /*0x4a6882*/
  *((unsigned int *)this->M4 + 1) = a3; /*0x4a688d*/
  *((unsigned int *)this->M8 + 2) = -a4; /*0x4a6893*/
  *((unsigned short *)this->M12 + 6) = 1; /*0x4a689d*/
  *((unsigned short *)this->? + 7) = 8; /*0x4a68a6*/
  *((unsigned int *)this->M16 + 4) = 0; /*0x4a68af*/
  *((unsigned int *)this->M20 + 5) = 0; /*0x4a68b5*/
  *((unsigned int *)this->q018 + 6) = 0; /*0x4a68bb*/
  *((unsigned int *)this->M28 + 7) = 0; /*0x4a68c6*/
  *((unsigned int *)this->q020 + 8) = 256; /*0x4a68cc*/
  *((unsigned int *)this->M24 + 9) = 256; /*0x4a68d2*/
  for ( i = 0; i < 256; *((unsigned char *)this->M24 + 4 * i + 39) = 0 ) /*0x4a68d5*/
  {
    v8 = (unsigned char *)(a5 + 2 * (i % 256) + i % 256); /*0x4a68ef*/
    ++i; /*0x4a68f1*/
    *((unsigned char *)this->? + 4 * i + 36) = v8[2]; /*0x4a68fa*/
    *((unsigned char *)this->? + 4 * i + 37) = v8[1]; /*0x4a6904*/
    *((unsigned char *)this->M4 + 4 * i + 38) = *v8; /*0x4a690d*/
  }
  p_vtable3 = &this->M12; /*0x4a6929*/
  DC = GetDC(hWnd); /*0x4a692e*/
  this->M8 = CreateDIBSection(DC, (const BITMAPINFO *)this->M8, 0, &this->M8, 0, 0); /*0x4a693f*/
  ReleaseDC(hWnd, DC); /*0x4a6942*/
  if ( !this->M8 ) /*0x4a6948*/
    goto LABEL_12; /*0x4a6948*/
  vtable1 = this->M4; /*0x4a6951*/
  this->M16 = vtable1->vtable2; /*0x4a6957*/
  uniqueId = this->M16; /*0x4a6962*/
  this->M20 = abs32(vtable1[2]); /*0x4a6965*/
  v13 = uniqueId + 3; /*0x4a6968*/
  LOBYTE(v13) = (uniqueId + 3) & 0xFC; /*0x4a696b*/
  this->M28 = v13; /*0x4a696d*/
  if ( (int)vtable1[2] <= 0 ) /*0x4a6975*/
  {
    this->q018 = *p_vtable3; /*0x4a698b*/
  }
  else
  {
    this->q018 = *p_vtable3 + uniqueId * (this->q018 - 1); /*0x4a6981*/
    v13 = -v13; /*0x4a6984*/
  }
  this->M28 = v13; /*0x4a698e*/
  v14 = abs32(v13); /*0x4a6998*/
  v15 = (char *)__2_YAPAXI_Z(0x20u); /*0x4a699f*/
  if ( v15 ) /*0x4a69a6*/
  {
    abstractFlags = this->M20; /*0x4a69a8*/
    vtable3 = this->M12; /*0x4a69ab*/
    v15->u32_8 = abstractFlags; /*0x4a69ae*/
    v15->__pad_004 = v14; /*0x4a69b9*/
    v15->u32_C = 0; /*0x4a69bc*/
    *(unsigned int *)v15 = &XSurface_Vtable; /*0x4a69bf*/
    v15->u32_10 = 1; /*0x4a69c5*/
    Buffer::Init(&v15->Straw_14, (int)vtable3, v14 * abstractFlags); /*0x4a69cc*/
    *(unsigned int *)v15 = &BSurface_Vtable; /*0x4a69d1*/
  }
  else
  {
    v15 = 0; /*0x4a69d9*/
  }
  this->q020 = v15; /*0x4a69dd*/
  if ( !v15 ) /*0x4a69e0*/
    LABEL_12:
  LOBYTE(this->AbstractClass) = 1; /*0x4a69e2*/
  return (char *)this; /*0x4a69e7*/

}
}
// 0x4A6CF0
namespace gamemd {
long long Direction_InitOffsets()
{

  double v0; // st7
  v0 = Math::SinCos(0.0174532925199433 * 270.0); /*0x4a6d03*/
  int v1; // esi
  v1 = Math::RoundToInt(v0 * 240.0); /*0x4a6d1f*/
  double v2; // st7
  v2 = Math::ArcTan2(0.0174532925199433 * 270.0); /*0x4a6d24*/
  dword_8A0180[0] = Math::RoundToInt(v2 * 240.0); /*0x4a6d40*/
  dword_8A0184[0] = v1; /*0x4a6d45*/
  double v3; // st7
  v3 = Math::SinCos(0.0174532925199433 * 292.0); /*0x4a6d4e*/
  int v4; // esi
  v4 = Math::RoundToInt(v3 * 240.0); /*0x4a6d6a*/
  double v5; // st7
  v5 = Math::ArcTan2(0.0174532925199433 * 292.0); /*0x4a6d6f*/
  dword_8A0188 = Math::RoundToInt(v5 * 240.0); /*0x4a6d8b*/
  dword_8A018C = v4; /*0x4a6d90*/
  double v6; // st7
  v6 = Math::SinCos(0.0174532925199433 * 315.0); /*0x4a6d99*/
  int v7; // esi
  v7 = Math::RoundToInt(v6 * 240.0); /*0x4a6db5*/
  double v8; // st7
  v8 = Math::ArcTan2(0.0174532925199433 * 315.0); /*0x4a6dba*/
  dword_8A0190 = Math::RoundToInt(v8 * 240.0); /*0x4a6dd6*/
  dword_8A0194 = v7; /*0x4a6ddb*/
  double v9; // st7
  v9 = Math::SinCos(0.0174532925199433 * 337.0); /*0x4a6de4*/
  int v10; // esi
  v10 = Math::RoundToInt(v9 * 240.0); /*0x4a6e00*/
  double v11; // st7
  v11 = Math::ArcTan2(0.0174532925199433 * 337.0); /*0x4a6e05*/
  dword_8A0198 = Math::RoundToInt(v11 * 240.0); /*0x4a6e19*/
  dword_8A019C = v10; /*0x4a6e1e*/
  double v12; // st7
  v12 = Math::SinCos(0.0); /*0x4a6e24*/
  int v13; // esi
  v13 = Math::RoundToInt(v12 * 240.0); /*0x4a6e38*/
  double v14; // st7
  v14 = Math::ArcTan2(0.0); /*0x4a6e3a*/
  dword_8A01A0 = Math::RoundToInt(v14 * 240.0); /*0x4a6e59*/
  dword_8A01A4 = v13; /*0x4a6e5e*/
  double v15; // st7
  v15 = Math::SinCos(0.0174532925199433 * 22.0); /*0x4a6e67*/
  int v16; // esi
  v16 = Math::RoundToInt(v15 * 240.0); /*0x4a6e83*/
  double v17; // st7
  v17 = Math::ArcTan2(0.0174532925199433 * 22.0); /*0x4a6e88*/
  dword_8A01A8 = Math::RoundToInt(v17 * 240.0); /*0x4a6ea4*/
  dword_8A01AC = v16; /*0x4a6ea9*/
  double v18; // st7
  v18 = Math::SinCos(0.0174532925199433 * 45.0); /*0x4a6eb2*/
  int v19; // esi
  v19 = Math::RoundToInt(v18 * 240.0); /*0x4a6ece*/
  double v20; // st7
  v20 = Math::ArcTan2(0.0174532925199433 * 45.0); /*0x4a6ed3*/
  dword_8A01B0 = Math::RoundToInt(v20 * 240.0); /*0x4a6eef*/
  dword_8A01B4 = v19; /*0x4a6ef4*/
  double v21; // st7
  v21 = Math::SinCos(0.0174532925199433 * 67.0); /*0x4a6efd*/
  int v22; // esi
  v22 = Math::RoundToInt(v21 * 240.0); /*0x4a6f19*/
  double v23; // st7
  v23 = Math::ArcTan2(0.0174532925199433 * 67.0); /*0x4a6f1e*/
  dword_8A01B8 = Math::RoundToInt(v23 * 240.0); /*0x4a6f3a*/
  dword_8A01BC = v22; /*0x4a6f3f*/
  double v24; // st7
  v24 = Math::SinCos(0.0174532925199433 * 90.0); /*0x4a6f48*/
  int v25; // esi
  v25 = Math::RoundToInt(v24 * 240.0); /*0x4a6f64*/
  double v26; // st7
  v26 = Math::ArcTan2(0.0174532925199433 * 90.0); /*0x4a6f69*/
  dword_8A01C0 = Math::RoundToInt(v26 * 240.0); /*0x4a6f85*/
  dword_8A01C4 = v25; /*0x4a6f8a*/
  double v27; // st7
  v27 = Math::SinCos(0.0174532925199433 * 112.0); /*0x4a6f93*/
  int v28; // esi
  v28 = Math::RoundToInt(v27 * 240.0); /*0x4a6faf*/
  double v29; // st7
  v29 = Math::ArcTan2(0.0174532925199433 * 112.0); /*0x4a6fb4*/
  dword_8A01C8 = Math::RoundToInt(v29 * 240.0); /*0x4a6fd0*/
  dword_8A01CC = v28; /*0x4a6fd5*/
  double v30; // st7
  v30 = Math::SinCos(0.0174532925199433 * 135.0); /*0x4a6fde*/
  int v31; // esi
  v31 = Math::RoundToInt(v30 * 240.0); /*0x4a6ffa*/
  double v32; // st7
  v32 = Math::ArcTan2(0.0174532925199433 * 135.0); /*0x4a6fff*/
  dword_8A01D0 = Math::RoundToInt(v32 * 240.0); /*0x4a701b*/
  dword_8A01D4 = v31; /*0x4a7020*/
  double v33; // st7
  v33 = Math::SinCos(0.0174532925199433 * 157.0); /*0x4a7029*/
  int v34; // esi
  v34 = Math::RoundToInt(v33 * 240.0); /*0x4a7045*/
  double v35; // st7
  v35 = Math::ArcTan2(0.0174532925199433 * 157.0); /*0x4a704a*/
  dword_8A01D8 = Math::RoundToInt(v35 * 240.0); /*0x4a7066*/
  dword_8A01DC = v34; /*0x4a706b*/
  double v36; // st7
  v36 = Math::SinCos(0.0174532925199433 * 180.0); /*0x4a7074*/
  int v37; // esi
  v37 = Math::RoundToInt(v36 * 240.0); /*0x4a7090*/
  double v38; // st7
  v38 = Math::ArcTan2(0.0174532925199433 * 180.0); /*0x4a7095*/
  dword_8A01E0 = Math::RoundToInt(v38 * 240.0); /*0x4a70b1*/
  dword_8A01E4 = v37; /*0x4a70b6*/
  double v39; // st7
  v39 = Math::SinCos(0.0174532925199433 * 202.0); /*0x4a70bf*/
  int v40; // esi
  v40 = Math::RoundToInt(v39 * 240.0); /*0x4a70db*/
  double v41; // st7
  v41 = Math::ArcTan2(0.0174532925199433 * 202.0); /*0x4a70e0*/
  dword_8A01E8 = Math::RoundToInt(v41 * 240.0); /*0x4a70fc*/
  dword_8A01EC = v40; /*0x4a7101*/
  double v42; // st7
  v42 = Math::SinCos(0.0174532925199433 * 235.0); /*0x4a710a*/
  int v43; // esi
  v43 = Math::RoundToInt(v42 * 240.0); /*0x4a7126*/
  double v44; // st7
  v44 = Math::ArcTan2(0.0174532925199433 * 235.0); /*0x4a712b*/
  dword_8A01F0 = Math::RoundToInt(v44 * 240.0); /*0x4a7147*/
  dword_8A01F4 = v43; /*0x4a714c*/
  double v45; // st7
  v45 = Math::SinCos(0.0174532925199433 * 257.0); /*0x4a7155*/
  int v46; // esi
  v46 = Math::RoundToInt(v45 * 240.0); /*0x4a7171*/
  double v47; // st7
  v47 = Math::ArcTan2(0.0174532925199433 * 257.0); /*0x4a7176*/
  int64_t result; // rax
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
char GetBuildingPlacement(IUnknown * aP0, int a2, DisplayClass * aP2, IUnknown * aP3)
{

  if ( a2 != dword_A83D4C->relatedTagsCount /*0x4a8f19*/
    || byte_A8ED6B
    || !aP2
    || *(unsigned int *)aP3 == dword_8A03F8
    || !aP0
    || aP0->IsSameType() != 7 )
  {
    return 1; /*0x4a905d*/
  }
  int FoundationHeight; // [esp+2Ch] [ebp+4h]
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)aP0, 0); /*0x4a8f2c*/
  int FoundationWidth; // eax
  FoundationWidth = ((BuildingTypeClass *)(aP0))->GetFoundationWidth(); /*0x4a8f30*/
  int v6 = *aP3; // ebp /*0x4a8f35*/
  int v7; // ebx
  v7 = aP3[1]; /*0x4a8f38*/
  int v8 = FoundationWidth; // edx /*0x4a8f3c*/
  int v9; // eax
  v9 = aP0[941] + 1; /*0x4a8f48*/
  int v20; // [esp+Ch] [ebp-1Ch]
  v20 = v8; /*0x4a8f4b*/
  int v23; // [esp+1Ch] [ebp-Ch]
  v23 = v7; /*0x4a8f54*/
  int v10 = v6 - v9 + v8 + 2 * v9; // edx /*0x4a8f58*/
  int v11 = v7 - v9; // ebx /*0x4a8f5a*/
  char v25; // [esp+34h] [ebp+Ch]
  v25 = 0; /*0x4a8f61*/
  int v26; // [esp+38h] [ebp+10h]
  v26 = v6 - v9; /*0x4a8f66*/
  int v22; // [esp+14h] [ebp-14h]
  v22 = v10; /*0x4a8f6a*/
  if ( v6 - v9 < v10 ) /*0x4a8f6e*/
  {
    int v12 = v11 + FoundationHeight + 2 * v9; // esi /*0x4a8f74*/
    int v21; // [esp+10h] [ebp-18h]
    v21 = v12; /*0x4a8f76*/
    do /*0x4a9048*/
    {
      int v13 = v11; // edi /*0x4a8f7c*/
      if ( v11 < v12 ) /*0x4a8f7e*/
      {
        do /*0x4a9033*/
        {
          int16_t v19[2]; // [esp+8h] [ebp-20h] BYREF
          v19[0] = v26; /*0x4a8f90*/
          v19[1] = v13; /*0x4a8f95*/
          if ( (int16_t)v26 < v6 /*0x4a8fb9*/
            || (int16_t)v26 >= v6 + v20
            || (int16_t)v13 < v23
            || (int16_t)v13 >= v23 + FoundationHeight )
          {
            unsigned int *v14; // eax
            v14 = ((CellCoord *)(&dword_87F7E8))->To_CellObj(v19); /*0x4a8fc5*/
            unsigned int *v15; // eax
            v15 = ((Cell *)(v14))->IsBridge(); /*0x4a8fcc*/
            unsigned int *v16 = v15; // esi /*0x4a8fd1*/
            if ( v15 ) /*0x4a8fd5*/
            {
              int v17 = v15->u32_21C; // ecx /*0x4a8fd7*/
              if ( *(unsigned int *)(v17 + 48) == a2 && *(unsigned char *)(v15[328] + 5455) ) /*0x4a8fec*/
                v25 = 1; /*0x4a8ff5*/
              if ( (unsigned char)g_abs_A8B264 /*0x4a900e*/
                && (uint8_t)HouseClass::IsAlliedWith((void *)v17, *&dword_A8022C->vtable1) )
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
bool ProcessDataBuildingTypeClass(unsigned int * a0, DisplayClass * aP1, DisplayClass * aP2, short * a3)
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

  if ( aP1 != dword_A83D4C->relatedTagsCount ) /*0x4a9086*/
    return 1; /*0x4a9086*/
  if ( byte_A8ED6B ) /*0x4a9093*/
    return 1; /*0x4a9093*/
  if ( !aP2 ) /*0x4a909f*/
    return 1; /*0x4a909f*/
  if ( *(unsigned int *)a3 == dword_8A03F8 ) /*0x4a90b3*/
    return 1; /*0x4a90b3*/
  if ( !a0 ) /*0x4a90cc*/
    return 1; /*0x4a90cc*/
  if ( (*(int (**)(unsigned int *))(*a0 + 44))(a0) != 7 ) /*0x4a90dc*/
    return 1; /*0x4a90dc*/
  FoundationHeight = BuildingTypeClass::GetFoundationHeight((int)a0, 0); /*0x4a90ed*/
  FoundationWidth = ((BuildingTypeClass *)(a0))->GetFoundationWidth(); /*0x4a90ef*/
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
    if ( Cell::IsPassable(v12) ) /*0x4a9161*/
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

  int v2 = aP0; // edi /*0x4a9772*/
  if ( aP0 ) /*0x4a9778*/
  {
    result = aP0->u32_94; /*0x4a977e*/
    if ( result != -1 ) /*0x4a9787*/
    {
      int v3 = 3 * result; // eax /*0x4a978d*/
      int v4 = 8 * v3 + 9044832; // esi /*0x4a979b*/
      result = (*(int (**)(int, int *))(stru_8A0360[2 * v3] + 16))(v4, &aP0); /*0x4a97a9*/
      if ( result != -1 ) /*0x4a97af*/
      {
        int v5; // ecx
        v5 = *(unsigned int *)(v4 + 16); /*0x4a97b1*/
        if ( result < v5 ) /*0x4a97b6*/
        {
          int v6 = v5 - 1; // ecx /*0x4a97b8*/
          for ( *(unsigned int *)(v4 + 16) = v6; /*0x4a97be*/
          result < *(unsigned int *)(v4 + 16);
          *(unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * result - 4) = *(unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * result) )
          {
            ++result; /*0x4a97c3*/
          }
          v2->u32_94 = -1; /*0x4a97d2*/
        }
      }
      if ( v2->u32_94 != -1 ) /*0x4a97e3*/
      {
        int *v7 = dword_8A0370; // esi /*0x4a97e5*/
        do /*0x4a982a*/
        {
          while ( 1 ) /*0x4a97ea*/
          {
            int v8; // eax
            v8 = *(v7 - 4); /*0x4a97ea*/
            aP0 = v2; /*0x4a97f4*/
            result = (*(int (**)(int *, int *))(v8 + 16))(v7 - 4, &aP0); /*0x4a97f9*/
            if ( result == -1 || result >= *v7 ) /*0x4a9805*/
              break; /*0x4a9805*/
            int v9 = *v7 - 1; // ecx /*0x4a9807*/
            for ( *v7 = v9; result < *v7; *(unsigned int *)(*(v7 - 3) + 4 * result - 4) = *(unsigned int *)(*(v7 - 3) + 4 * result) ) /*0x4a980c*/
              ++result; /*0x4a9811*/
          }
          v7 += 6; /*0x4a9821*/
        }
        while ( (int)v7 < (int)&dword_8A03E8 ); /*0x4a982a*/
        v2->u32_94 = -1; /*0x4a982c*/
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
  v1 = &unk_820030; /*0x4aa2d1*/
  while ( 1 ) /*0x4aa2d8*/
  {
    v2 = 0; /*0x4aa2d8*/
    v3 = 6 * *v1; /*0x4aa2dd*/
    if ( dword_8A0370[v3] > 0 ) /*0x4aa2e8*/
      break; /*0x4aa2e8*/
    LABEL_12:
    if ( (int)++v1 >= (int)dword_82003C ) /*0x4aa35b*/
      return *(unsigned char **)&v8[1]; /*0x4aa36c*/
  }
  while ( 1 )
  {
    v4 = dword_8A0364[v3]; /*0x4aa2ea*/
    v5 = *(unsigned char **)(v4 + 4 * v2); /*0x4aa2f0*/
    if ( !v5 ) /*0x4aa2f5*/
      goto LABEL_11; /*0x4aa2f5*/
    v6 = (v5[20] & 1) != 0 ? v5 : 0;
    if ( !(*(uint8_t (**)(unsigned int))(*&v5->u32_190))(*(unsigned int *)(v4 + 4 * v2)) /*0x4aa318*/
      || !v6
      || !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v6 + 316))(v6) )
    {
      goto LABEL_11; /*0x4aa320*/
    }
    if ( !*(unsigned int *)&v8[1] ) /*0x4aa328*/
      *(unsigned int *)&v8[1] = v5; /*0x4aa32a*/
    if ( v8[0] ) /*0x4aa334*/
      return v5; /*0x4aa369*/
    v8[0] = a1 == v5; /*0x4aa33c*/
    LABEL_11:
    ++v2; /*0x4aa341*/
    v3 = 6 * *v1; /*0x4aa347*/
    if ( v2 >= dword_8A0370[v3] ) /*0x4aa350*/
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
    v2 = dword_8A0370[6 * *v1] - 1; /*0x4aa3b2*/
    if ( v2 >= 0 ) /*0x4aa3b3*/
      break; /*0x4aa3b3*/
    LABEL_12:
    if ( (int)++v1 >= (int)0 ) /*0x4aa41d*/
      return *(unsigned char **)&v6[1]; /*0x4aa42a*/
  }
  while ( 1 )
  {
    v3 = *(unsigned char **)(dword_8A0364[6 * *v1] + 4 * v2); /*0x4aa3c1*/
    if ( !v3 ) /*0x4aa3c6*/
      goto LABEL_11; /*0x4aa3c6*/
    v4 = (v3[20] & 1) != 0 ? v3 : 0;
    if ( !(*(uint8_t (**)(unsigned char *))(*&v3->u32_190))(v3) /*0x4aa3e8*/
      || !v4
      || !(*(uint8_t (**)(unsigned char *))(*(unsigned int *)v4 + 316))(v4) )
    {
      goto LABEL_11; /*0x4aa3f0*/
    }
    if ( !*(unsigned int *)&v6[1] ) /*0x4aa3f8*/
      *(unsigned int *)&v6[1] = v3; /*0x4aa3fa*/
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
  int v7; // ecx

  int v1 = 0; // edi /*0x4ac4fb*/
  int v2 = 0; // eax /*0x4ac4fd*/
  int v3 = 0; // ebx /*0x4ac4ff*/
  int v11; // [esp+Ch] [ebp-18h] BYREF
  v11 = 0; /*0x4ac503*/
  int v12; // [esp+10h] [ebp-14h]
  v12 = 0; /*0x4ac507*/
  int v13; // [esp+14h] [ebp-10h]
  v13 = 0; /*0x4ac50b*/
  if ( dword_A8EC88 > 0 ) /*0x4ac50f*/
  {
    char *v4; // ebp
    v4 = (char *)dword_A8EC7C; /*0x4ac512*/
    int v9; // [esp+8h] [ebp-1Ch]
    v9 = dword_A8EC88; /*0x4ac519*/
    do /*0x4ac567*/
    {
      int v5; // ecx
      v5 = *(unsigned int *)v4; /*0x4ac51d*/
      if ( !*(unsigned char *)(*&v4->u32_204) && *(unsigned char *)(v5 + 1050) ) /*0x4ac52a*/
      {
        v2 += *(unsigned int *)(v5 + 156); /*0x4ac53e*/
        v3 += *(unsigned int *)(v5 + 160); /*0x4ac543*/
        int v6; // esi
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
    unsigned int v14[3]; // [esp+18h] [ebp-Ch] BYREF
    v11 = *HouseClass::GetStartCoords((HouseClass *)dword_A83D4C, v14); /*0x4ac5aa*/
    v7 = HouseClass::GetStartCoords((HouseClass *)dword_A83D4C, v14)[1]; /*0x4ac5ba*/
    v12 = v7; /*0x4ac5bd*/
  }
  int v10; // [esp+8h] [ebp-1Ch]
  (*((unsigned short *)&(v10))) = v11 / 256; /*0x4ac5d3*/
  (*(((unsigned short *)&(v10)) + 1)) = v7 / 256; /*0x4ac5e6*/
  *(int *)((char *)&dword_A8B230[374].vfptr + 2) = v10; /*0x4ac5f4*/
  *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2) = *(int *)((char *)&dword_A8B230[374].vfptr + 2); /*0x4ac605*/
  *(int *)((char *)&dword_A8B230[373].referenceCount + 2) = *(int *)((char *)&dword_A8B230[373].NeedsSaveOrLink + 2); /*0x4ac616*/
  *(int *)((char *)&dword_A8B230[373].nextArrayIndex + 2) = *(int *)((char *)&dword_A8B230[373].referenceCount + 2); /*0x4ac627*/
  void *result = dword_A8B230; // eax /*0x4ac62d*/
  dword_A8B230[14].nextArrayIndex = dword_A8B230[14].abstractFlags; /*0x4ac638*/
  if ( g_TacticalClass_Instance ) /*0x4ac646*/
    return (void *)Tactical::SetTacticalPosition((TacticalClass *)g_TacticalClass_Instance, &v11); /*0x4ac64d*/
  return result; /*0x4ac5c5*/
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

  (*((unsigned char *)&(v4))) = byte_A8ED6B; /*0x4ae753*/
  v27 = -1; /*0x4ae761*/
  (*((unsigned char *)&(v26))) = 0; /*0x4ae765*/
  if ( byte_A8ED6B ) /*0x4ae769*/
    return (char)v4; /*0x4ae769*/
  a2 = *(unsigned int *)HouseClass::ClampToUsableCell(&v28, &a2); /*0x4ae78f*/
  v5 = Waypoint::FindByCell((char *)dword_A83D4C, &a2); /*0x4ae794*/
  if ( v5 ) /*0x4ae79b*/
    WaypointClass::FindOrCreate((char *)dword_A83D4C, (int)v5, &v27, &v26); /*0x4ae7ae*/
  v6 = dword_A8ECC8; /*0x4ae7b3*/
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
    v6 = dword_A8ECC8; /*0x4ae805*/
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
        v12 = (*(int (**)(int *, int, unsigned int, int, unsigned int))(a1 + 116))(v11, v9, 0, v9, 0); /*0x4ae83a*/
        (*(void (**)(int *, int))(a3 + 324))(v11, v12); /*0x4ae844*/
        (*((unsigned char *)&(v4))) = (unsigned char)dword_A8ECC8; /*0x4ae84a*/
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
        v24 = (*(int (**)(unsigned int *, int *, unsigned int, unsigned int, int *, int *, unsigned int))(*v22 + 112))( /*0x4ae976*/
                v22,
                &a2,
                0,
                0,
                &a2,
                &a2,
                0);
        (*(void (**)(unsigned int *, int))(v23 + 320))(v22, v24); /*0x4ae97c*/
        (*((unsigned char *)&(v4))) = (unsigned char)dword_A8ECC8; /*0x4ae982*/
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
      v16 = (*(int (**)(int *, int *, unsigned int, unsigned int, int *, int *, unsigned int))(a1 + 112))( /*0x4ae8ba*/
              v15,
              &a2,
              0,
              0,
              &a2,
              &a2,
              0);
      (*((unsigned char *)&(v4))) = (*(int (**)(int *, int))(a4 + 320))(v15, v16); /*0x4ae8c4*/
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
      v20 = (*(int (**)(unsigned int *, int *, unsigned int, unsigned int, int *, int *, unsigned int))(*v18 + 112))( /*0x4ae921*/
              v18,
              &a2,
              0,
              0,
              &a2,
              &a1,
              0);
      (*(void (**)(unsigned int *, int))(v19 + 320))(v18, v20); /*0x4ae927*/
      (*((unsigned char *)&(v4))) = (unsigned char)dword_A8ECC8; /*0x4ae92d*/
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
int sub_4AEA20(int a1, int a2)
{
  int result; // eax

  int v2; // edx
  if ( a2 == -1 ) /*0x4aea27*/
    v2 = 0; /*0x4aea29*/
  else
    v2 = 8 * (a2 % 12); /*0x4aea35*/
  int v3 = 0; // esi /*0x4aea46*/
  int v4; // edi
  v4 = *(unsigned int *)(dword_87F6C8 + 372) + 2; /*0x4aea48*/
  do /*0x4aeac1*/
  {
    int v5; // eax
    v5 = (v3 + v2) % 256; /*0x4aea5b*/
    char *v6; // ecx
    v6 = &byte_885180[3 * v5]; /*0x4aea5c*/
    v4 += 2; /*0x4aea63*/
    (*((unsigned short *)&(v5))) = (uint8_t)((uint8_t)v6[2] >> g_BitMask_Red); /*0x4aea83*/
    (*((unsigned short *)&(a1))) = (uint8_t)((uint8_t)(*(((unsigned char *)&(*(unsigned short *)v6)) + (sizeof(*(unsigned short *)v6) - 1))) >> g_BitMask_Blue); /*0x4aea97*/
    int v7 = a1 << g_BitMask_Green; // ebx /*0x4aea9b*/
    int v8; // eax
    v8 = v7 | (v5 << g_BitShift_Blue); /*0x4aeaa3*/
    (*((unsigned short *)&(v7))) = (uint8_t)((uint8_t)*(unsigned short *)v6 >> g_BitShift_Green_0); /*0x4aeab1*/
    a1 = v7 << g_BitShift_Red; /*0x4aeab5*/
    result = a1 | v8; /*0x4aeab7*/
    ++v3; /*0x4aeab9*/
    *(unsigned short *)(v4 - 2) = result; /*0x4aeaba*/
  }
  while ( v3 < 8 ); /*0x4aeac1*/
  return result; /*0x4aeac6*/
}
// 0x4AED70
namespace gamemd {
// G57e1: p10 int per IDA truth 0x4AED70 (raw literal 0/2/1000)
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
  int v32; // eax
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
  int v55; // [esp+4Ch] [ebp-54h]
  int *v56; // [esp+50h] [ebp-50h]
  int v57; // [esp+54h] [ebp-4Ch]
  int v58; // [esp+58h] [ebp-48h]
  unsigned int *v59; // [esp+5Ch] [ebp-44h]
  int v60; // [esp+60h] [ebp-40h] BYREF
  int v61; // [esp+64h] [ebp-3Ch]
  int v62; // [esp+68h] [ebp-38h]
  int v63; // [esp+6Ch] [ebp-34h]
  int v64[5]; // [esp+70h] [ebp-30h] BYREF
  int v65[3]; // [esp+84h] [ebp-1Ch] BYREF
  int v66[4]; // [esp+90h] [ebp-10h] BYREF

  v17 = a3; /*0x4aed79*/
  v59 = (unsigned int *)a2; /*0x4aed86*/
  v56 = (int *)a1; /*0x4aed8a*/
  if ( a3 ) /*0x4aed8e*/
  {
    if ( *(unsigned short *)a3 == 0xFFFF ) /*0x4aed98*/
    {
      (*((unsigned char *)&(result))) = *(unsigned char *)(a3 + 16); /*0x4aed9a*/
      if ( !(unsigned char)result ) /*0x4aed9f*/
        House::Constructor((char **)a3); /*0x4aeda3*/
      v17 = *(unsigned int *)(a3 + 12); /*0x4aeda8*/
    }
    if ( v17 ) /*0x4aedad*/
    {
      v20 = (int *)(*(int (**)(int, int *))(*(unsigned int *)a1 + 120))(a1, &v50); /*0x4aedbc*/
      v66[0] = *v20; /*0x4aedc1*/
      v66[1] = v20[1]; /*0x4aedcf*/
      v66[2] = v20[2]; /*0x4aedd9*/
      v66[3] = v20[3]; /*0x4aedec*/
      v60 = *a6; /*0x4aedf5*/
      v61 = a6[1]; /*0x4aedfc*/
      v62 = a6[2]; /*0x4aee03*/
      v63 = a6[3]; /*0x4aee12*/
      v21 = ClipRectIntersection(&v50, a6, v66, 0, 0); /*0x4aee1f*/
      v60 = *v21; /*0x4aee23*/
      v61 = v21->vtable2; /*0x4aee2a*/
      result = v21->vtable3; /*0x4aee2e*/
      v62 = result; /*0x4aee31*/
      v22 = v21->vtable4; /*0x4aee35*/
      v63 = v22; /*0x4aee3a*/
      if ( result > 0 && v22 > 0 ) /*0x4aee46*/
      {
        *(unsigned int *)(a2 + 380) = a8; /*0x4aee5a*/
        v36 = *a5; /*0x4aee75*/
        v40 = a5[1]; /*0x4aee79*/
        FoundationSize = Building::GetFoundationSize(&v50, a4); /*0x4aee7d*/
        v42 = *FoundationSize; /*0x4aee84*/
        v43 = FoundationSize[1]; /*0x4aee8c*/
        v44 = FoundationSize[2]; /*0x4aee95*/
        v45 = FoundationSize[3]; /*0x4aee9c*/
        SubFile = MixFileClass::GetSubFile((char **)v17, a4); /*0x4aeea0*/
        v25 = v17->q004; /*0x4aeea9*/
        v26 = SubFile; /*0x4aeeb1*/
        v57 = v17->House_field_0x2; /*0x4aeeb7*/
        v58 = v25; /*0x4aeec1*/
        Surface::Construct(v64, v44, v45); /*0x4aeec7*/
        v64[3] = 0; /*0x4aeed8*/
        v64[0] = (int)&XSurface_Vtable; /*0x4aeee3*/
        v64[4] = 1; /*0x4aeeeb*/
        Buffer::Init(v65, v26, v45 * v44); /*0x4aeef6*/
        v64[0] = (int)&BSurface_Vtable; /*0x4aeefb*/
        v27 = a16; /*0x4aef11*/
        v54 = a15; /*0x4aef18*/
        v55 = a16; /*0x4aef1e*/
        if ( a13 ) /*0x4aef22*/
        {
          v28 = Building::GetFoundationSize(&v50, a14); /*0x4aef37*/
          v46 = *v28; /*0x4aef3e*/
          v47 = v28->ptr_4; /*0x4aef47*/
          v48 = v28->ptr_8; /*0x4aef4e*/
          v49 = v28->u32_C; /*0x4aef55*/
          v29 = operator new(0x20u); /*0x4aef5e*/
          if ( v29 ) /*0x4aef65*/
          {
            v38 = MixFileClass::GetSubFile((char **)a13, a14); /*0x4aef7c*/
            Surface::Construct(v29, v48, v49); /*0x4aef86*/
            v29->u32_C = 0; /*0x4aef8b*/
            *v29 = &XSurface_Vtable; /*0x4aef92*/
            v35 = v49 * v48; /*0x4aefa5*/
            v29->u32_10 = 1; /*0x4aefaa*/
            Buffer::Init(v29 + 5, v38, v35); /*0x4aefb1*/
            *v29 = &BSurface_Vtable; /*0x4aefb6*/
            v39 = (void (***)(unsigned int, int))v29; /*0x4aefbc*/
            v27 = v55; /*0x4aefc0*/
          }
          else
          {
            v27 = v55; /*0x4aefc6*/
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
        if ( (a7 & 0x200) != 0 ) /*0x4af00c*/
        {
          v36 += v57 / -2; /*0x4af027*/
          v40 += v58 / -2; /*0x4af034*/
        }
        if ( a13 ) /*0x4af03a*/
        {
          v54 = a15 - (v57 / 2 - v42); /*0x4af05e*/
          v27 -= v58 / 2 - v43; /*0x4af062*/
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
        v30 = ClipRectIntersection(&v46, &v42, &v50, 0, 0); /*0x4af0d4*/
        v42 = *v30; /*0x4af0d8*/
        v43 = v30->vtable2; /*0x4af0df*/
        v44 = v30->vtable3; /*0x4af0e6*/
        v31 = v30->vtable4; /*0x4af0ea*/
        v45 = v31; /*0x4af0ef*/
        if ( v44 > 0 && v31 > 0 ) /*0x4af0fb*/
        {
          LABEL_21:
          if ( a8 ) /*0x4af10a*/
          {
            v32 = a7; /*0x4af10c*/
            (*((unsigned char *)&(v32))) = a7 | 0x10; /*0x4af113*/
            a7 = v32; /*0x4af115*/
          }
          if ( Helper_69E900((char **)v17, a4) ) /*0x4af126*/
          {
            v33 = (int *)((LightConvertClass *)(v59))->SelectRLEBlitter(a7); /*0x4af13f*/
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
                a9,
                a10,
                a11,
                0,
                (int)v39,
                v54,
                v27,
                a12);
            }
          }
          else
          {
            SHPFrame = (int *)BuildingClass::GetSHPFrame(v59, a7); /*0x4af1d5*/
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
              BlitterCopySHP(v56, &v60, &v46, v64, (int)&v50, &v42, SHPFrame, a9, a10, a11, a12, 0); /*0x4af269*/
            }
          }
        }
        if ( v39 ) /*0x4af275*/
          (**v39)(v39, 1); /*0x4af27b*/
        return Vector::Clear((int)v65); /*0x4af284*/
      }
    }
  }
  return result; /*0x4af289*/
}
}
}
// 0x4AF2A0
namespace gamemd {
int E4Recv_4AF2A0::BlitterDrawSHP(int * a1, int a2, int * a3, unsigned int * a4, int * a5, unsigned int * a6, int a7, int * a8, int a9, int a10, int a11, int a12, int a13)
{

  int *SHPFrame = a8; // eax /*0x4af2a0*/
  a2->u32_17C = a7; /*0x4af2b1*/
  if ( !a8 )
    SHPFrame = (int *)BuildingClass::GetSHPFrame((BuildingClass *)a2, a7 != 0 ? 0x10 : 0);
  int v15 = *a5; // edx /*0x4af2d0*/
  int v19[4]; // [esp+8h] [ebp-20h] BYREF
  v19[1] = a5[1]; /*0x4af2d5*/
  v19[0] = v15; /*0x4af2dd*/
  v19[2] = a4[2]; /*0x4af2e4*/
  v19[3] = a4[3]; /*0x4af2eb*/
  int *v18; // [esp-18h] [ebp-40h]
  v18 = SHPFrame; /*0x4af308*/
  int v16; // eax
  char v20[16]; // [esp+18h] [ebp-10h] BYREF
  v16 = (*(int (**)(int *, char *))(*a3 + 120))(a3, v20); /*0x4af313*/
  int result; // eax
  (*((unsigned char *)&(result))) = BlitterCopySHP(a1, a6, v19, a3, v16, a4, v18, a9, a10, a11, a12, a13); /*0x4af323*/
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

  Matrix3x4::Identity(&v13); /*0x4af9bc*/
  nextObject = this->nextObject; /*0x4af9c1*/
  if ( nextObject ) /*0x4af9ca*/
  {
    occupant = this->occupant; /*0x4af9d0*/
    fallRate = this->fallRate; /*0x4af9d3*/
    if ( occupant != -1 ) /*0x4af9df*/
    {
      if ( *(unsigned int *)&TeamTypeClass_Array - occupant >= fallRate ) /*0x4af9e7*/
        fallRate = 0; /*0x4af9ed*/
      else
        fallRate -= *(unsigned int *)&TeamTypeClass_Array - occupant; /*0x4af9e9*/
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
          if ( *(unsigned int *)&TeamTypeClass_Array - v8 >= v9 ) /*0x4afa2e*/
            v9 = 0; /*0x4afa34*/
          else
            v9 -= *(unsigned int *)&TeamTypeClass_Array - v8; /*0x4afa30*/
        }
        v7 = (double)((int)v6 - v9) / (double)(int)this->nextObject; /*0x4afa40*/
      }
      else
      {
        v7 = 1.0; /*0x4afa15*/
      }
      v10 = InterpolateVoxelAnimPose(v14, (int)this->?, this->?, v7); /*0x4afa55*/
      goto LABEL_17; /*0x4afa5a*/
    }
  }
  referenceCount = this->M28; /*0x4afa5c*/
  if ( referenceCount ) /*0x4afa61*/
  {
    v10 = CopyAudioData(v14, referenceCount); /*0x4afa67*/
    LABEL_17:
    memcpy(&v13, v10, sizeof(v13)); /*0x4afa77*/
  }
  memcpy(a2, &v13, 0x30u); /*0x4afa79*/
  return a2; /*0x4afa8a*/

}
}
// 0x4A0450
namespace gamemd {
void E4Recv_4A0450::sub_4A0450()
{


  int v2 = 0; // edi /*0x4a0457*/
  for ( *(unsigned int *)this->vfptr = &vt_EnumConnectionsClass; v2 < this->M20; ++v2 ) /*0x4a0464*/
  {
    int v6; // [esp-4h] [ebp-10h]
    v6 = *(unsigned int *)(this->M8 + 8 * v2); /*0x4a046c*/
    (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x4a046f*/
  }
  int EnumConnectionsClass_field_0x04 = this->M4; // edx /*0x4a047a*/
  int *p_EnumConnectionsClass_field_0x04 = &this->M4; // esi /*0x4a047d*/
  (*(void (**)(int *))(EnumConnectionsClass_field_0x04 + 12))(p_EnumConnectionsClass_field_0x04); /*0x4a0482*/
  void *v5; // eax
  v5 = (void *)p_EnumConnectionsClass_field_0x04[1]; /*0x4a0485*/
  *p_EnumConnectionsClass_field_0x04 = (int)&vt_VectorClass; /*0x4a0488*/
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


  int ConnectionPointClass_field_0x18 = this->M24; // eax /*0x4a08d4*/
  /* X11: vtable install elided (implicit via ConnectionPointClass virtuals 0x4a08d7) */
  (*(void (**)(int))(*(unsigned int *)ConnectionPointClass_field_0x18 + 8))(ConnectionPointClass_field_0x18); /*0x4a08e0*/
  int ConnectionPointClass_field_0x1C = this->M28; // edx /*0x4a08e3*/
  int *p_ConnectionPointClass_field_0x1C = &this->M28; // esi /*0x4a08e6*/
  (*(void (**)(int *))(ConnectionPointClass_field_0x1C + 12))(p_ConnectionPointClass_field_0x1C); /*0x4a08eb*/
  void *v5; // eax
  v5 = (void *)p_ConnectionPointClass_field_0x1C[1]; /*0x4a08ee*/
  *p_ConnectionPointClass_field_0x1C = (int)&vt_VectorClass; /*0x4a08f5*/
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


  int *p_EnumConnectionPointsClass_field_0x0C = &this->M12; // esi /*0x4a0cf2*/
  this->M4 = a2[1]; /*0x4a0cf5*/
  this->M8 = 0; /*0x4a0cf8*/
  this->M16 = 0; /*0x4a0cfd*/
  this->M20 = 0; /*0x4a0d00*/
  LOBYTE(this->q018) = 1; /*0x4a0d03*/
  BYTE1(this->q018) = 0; /*0x4a0d07*/
  this->M12 = (int)&vt_VectorClass; /*0x4a0d0a*/
  if ( &this->M12 != a2 + 3 ) /*0x4a0d10*/
  {
    VectorClass::CleanupTyped((int)&this->M12); /*0x4a0d14*/
    int v4; // eax
    v4 = a2[5]; /*0x4a0d1a*/
    this->M20 = v4; /*0x4a0d1f*/
    if ( v4 ) /*0x4a0d22*/
    {
      int v5; // eax
      v5 = __2_YAPAXI_Z(4 * v4); /*0x4a0d2c*/
      this->M16 = v5; /*0x4a0d36*/
      if ( v5 ) /*0x4a0d39*/
      {
        int EnumConnectionPointsClass_field_0x14 = this->M20; // ecx /*0x4a0d3b*/
        int v7 = 0; // eax /*0x4a0d3e*/
        BYTE1(this->EnumConnectionPointsClass_field_0x18) = 1; /*0x4a0d42*/
        if ( EnumConnectionPointsClass_field_0x14 > 0 ) /*0x4a0d46*/
        {
          do /*0x4a0d5a*/
          {
            *(unsigned int *)(this->M16 + 4 * v7) = *(unsigned int *)(a2[4] + 4 * v7); /*0x4a0d51*/
            ++v7; /*0x4a0d57*/
          }
          while ( v7 < this->M20 ); /*0x4a0d5a*/
        }
      }
    }
    else
    {
      this->M16 = 0; /*0x4a0d5e*/
      BYTE1(this->EnumConnectionPointsClass_field_0x18) = 0; /*0x4a0d61*/
    }
  }
  this->M28 = a2[7]; /*0x4a0d67*/
  this->EnumConnectionPointsClass_field_0x20 = a2[8]; /*0x4a0d6d*/
  *p_EnumConnectionPointsClass_field_0x0C = (int)&vt_DynamicVectorClass; /*0x4a0d70*/
  /* X11: vtable install elided (implicit via EnumConnectionPointsClass virtuals 0x4a0d76) */
  int i; // esi
  for ( i = 0; i < this->M28; ++i ) /*0x4a0d83*/
  {
    int v10; // [esp-4h] [ebp-14h]
    v10 = *(unsigned int *)(this->M16 + 4 * i); /*0x4a0d8b*/
    (*(void (**)(int))(*(unsigned int *)v10 + 4))(v10); /*0x4a0d8e*/
  }
  return this->__pad_0; /*0x4a0d9b*/

}
} // namespace gamemd

// 0x4A0DB0
namespace gamemd {
void E4Recv_4A0DB0::sub_4A0DB0()
{


  int v2 = 0; // edi /*0x4a0db7*/
  for ( *(unsigned int *)this->vfptr = &vt_EnumConnectionPointsClass; /*0x4a0dc4*/
  v2 < this->M28;
  ++v2 )
  {
    int v6; // [esp-4h] [ebp-10h]
    v6 = *(unsigned int *)(this->M16 + 4 * v2); /*0x4a0dcc*/
    (*(void (**)(int))(*(unsigned int *)v6 + 8))(v6); /*0x4a0dcf*/
  }
  int EnumConnectionPointsClass_field_0x0C = this->M12; // edx /*0x4a0dda*/
  int *p_EnumConnectionPointsClass_field_0x0C = &this->M12; // esi /*0x4a0ddd*/
  (*(void (**)(int *))(EnumConnectionPointsClass_field_0x0C + 12))(p_EnumConnectionPointsClass_field_0x0C); /*0x4a0de2*/
  void *v5; // eax
  v5 = (void *)p_EnumConnectionPointsClass_field_0x0C[1]; /*0x4a0de5*/
  *p_EnumConnectionPointsClass_field_0x0C = (int)&vt_VectorClass; /*0x4a0de8*/
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
  v0 = Math::Sin(dbl_89F7E0 - dbl_89F808); /*0x4a1642*/
  int64_t result; // rax
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

  Checksummer::Add_Buffer(&this->u32_C, aP1, aP2); /*0x4a2042*/
  return Delegate::Dispatch((Pipe *)this, (int)aP1, aP2); /*0x4a2050*/

}
} // namespace gamemd

// 0x4A20B0
namespace gamemd {
int E4Recv_4A20B0::sub_4A20B0(Straw * aP1, int aP2)
{


  if ( !aP1 || aP2 < 1 ) /*0x4a20c3*/
    return 0; /*0x4a20e2*/
  int v4; // esi
  v4 = Delegate::Invoke((Straw *)this, (int)aP1, aP2); /*0x4a20cd*/
  Checksummer::Add_Buffer(&this->u32_C, aP1, v4); /*0x4a20d4*/
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
  v0 = Math::Sin(dbl_89F8E0 - dbl_89F908); /*0x4a2242*/
  int64_t result; // rax
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


  int CStreamClass_field_0x08 = this->M8; // eax /*0x4a2886*/
  /* X11: vtable install elided (implicit via CStreamClass virtuals 0x4a2889) */
  this->M4 = (int)&vt_CStreamClass; /*0x4a2891*/
  if ( CStreamClass_field_0x08 ) /*0x4a2898*/
  {
    ULONG v6; // [esp+0h] [ebp-8h]
    if ( BYTE1(this->M8) && this->M20 > 0 && this->M8 ) /*0x4a28aa*/
      IStream::Read((IStream *)this->M24, (void *)this->M20, v6); /*0x4a28b4*/
    if ( this->M8 /*0x4a28da*/
      && (*(int (**)(int, unsigned int))(*(unsigned int *)this->M8 + 32))(
           this->M8,
           0) >= 0 )
    {
      if ( !this->M8 ) /*0x4a28dc*/
        sub_7DC720(-2147467261); /*0x4a28e6*/
      (*(void (**)(int))(*(unsigned int *)this->M8 + 8))(this->M8); /*0x4a28f1*/
      this->M8 = 0; /*0x4a28f4*/
    }
  }
  __3_YAXPAX_Z((void *)this->q020); /*0x4a28fb*/
  void *CStreamClass_field_0x18; // ecx
  CStreamClass_field_0x18 = (void *)this->M24; /*0x4a2900*/
  this->q020 = 0; /*0x4a2903*/
  __3_YAXPAX_Z(CStreamClass_field_0x18); /*0x4a2907*/
  void *CStreamClass_field_0x1C; // edx
  CStreamClass_field_0x1C = (void *)this->M28; /*0x4a290c*/
  this->M24 = 0; /*0x4a290f*/
  __3_YAXPAX_Z(CStreamClass_field_0x1C); /*0x4a2913*/
  this->M28 = 0; /*0x4a2918*/
  int v5 = this->M8; // esi /*0x4a291b*/
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
  this->M98304 = 0; /*0x4a3632*/
  return &this->vfptr; /*0x4a363c*/
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
  _TBYTE Src; // [esp+2Ch] [ebp-Ch] BYREF

  int v6 = *a1; // edx /*0x4a3a21*/
  char *v7; // edi
  v7 = (char *)*a2; /*0x4a3a23*/
  void *v13; // [esp+28h] [ebp-10h]
  v13 = *a3; /*0x4a3a25*/
  int v8 = 0; // ebp /*0x4a3a2b*/
  if ( !(*(uint8_t (**)(int *))(v6 + 24))(a1) ) /*0x4a3a2d*/
  {
    int result; // eax
    result = (*(int (**)(int *, int))(*a1 + 28))(a1, 1); /*0x4a3a3a*/
    if ( !result ) /*0x4a3a3f*/
      return result; /*0x4a3a3f*/
    v8 = 1; /*0x4a3a4b*/
  }
  size_t v12; // [esp+24h] [ebp-14h] BYREF
  (*(void (**)(int *, size_t *, int))(*a1 + 36))(a1, &v12, 2); /*0x4a3a5b*/
  (*(void (**)(int *, _TBYTE *, int))(*a1 + 36))(a1, &Src, 8); /*0x4a3a69*/
  size_t v10 = v12 + 65528; // eax /*0x4a3a75*/
  v12 += 65528; /*0x4a3a7d*/
  if ( (((unsigned short *)&(Src))[3]) ) /*0x4a3a81*/
  {
    int v11 = *a1; // edx /*0x4a3a89*/
    v12 = v10 - *(unsigned int *)((char *)&Src + 6); /*0x4a3a8b*/
    if ( a4 ) /*0x4a3a95*/
      (*(void (**)(int *, int, unsigned int))(v11 + 36))(a1, a4, (*((signed short *)(((unsigned char *)&(Src)) + 6)))); /*0x4a3a9e*/
    else
      (*(void (**)(int *, unsigned int, int))(v11 + 40))(a1, (*((signed short *)(((unsigned char *)&(Src)) + 6))), 1); /*0x4a3aab*/
    (*((unsigned short *)&(v10))) = v12; /*0x4a3aae*/
    (((unsigned short *)&(Src))[3]) = 0; /*0x4a3ab2*/
  }
  if ( *a2 == *a3 ) /*0x4a3ac1*/
    v7 = (char *)a2[1] + (unsigned int)v7 - (uint16_t)v10 - 8; /*0x4a3acd*/
  memcpy(v7, &Src, 8u); /*0x4a3ad9*/
  (*(void (**)(int *, char *, unsigned int))(*a1 + 36))(a1, v7 + 8, (uint16_t)v12); /*0x4a3af4*/
  v12 = sub_5584F0(v7, v13); /*0x4a3b04*/
  if ( v8 ) /*0x4a3b08*/
    (*(void (**)(int *))(*a1 + 52))(a1); /*0x4a3b0e*/
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
  CHAR Text[80]; // [esp+Ch] [ebp-50h] BYREF

  Debug::Log(); /*0x4a3fd8*/
  if ( !g_lpDirectDraw7 ) /*0x4a3fe7*/
  {
    int v1; // eax
    v1 = DirectDrawCreate(0, &g_lpDirectDraw7, 0); /*0x4a3ff2*/
    if ( v1 ) /*0x4a3ff9*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4003*/
      {
        g_DDraw_ErrorCallback(v1); /*0x4a4007*/
        Debug::Log(); /*0x4a400e*/
      }
      else
      {
        sprintf(Text, "DDRAW.DLL Error code = %08X", v1); /*0x4a4025*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a4040*/
        Debug::Log(); /*0x4a404b*/
      }
    }
    else
    {
      struct IDirectDrawVtbl *lpVtbl; // ecx
      lpVtbl = g_lpDirectDraw7->lpVtbl; /*0x4a4063*/
      int v3; // eax
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
      CHAR Text[80]; // [esp+4h] [ebp-50h] BYREF
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
  LPDIRECTDRAW result = g_lpDirectDraw7; // eax /*0x4a44f0*/
  if ( g_lpDirectDraw7 ) /*0x4a44fd*/
  {
    int v1; // esi
    int v3; // eax
    v3 = ((int (__stdcall *)(LPDIRECTDRAW, int))g_lpDirectDraw7->lpVtbl->RestoreDisplayMode)(g_lpDirectDraw7, v1); /*0x4a4507*/
    if ( v3 ) /*0x4a4512*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a451c*/
      {
        g_DDraw_ErrorCallback(v3); /*0x4a4520*/
      }
      else
      {
        CHAR Text[76]; // [esp+Ch] [ebp-4Ch] BYREF
        sprintf(Text, "DDRAW.DLL Error code = %08X", v3); /*0x4a452f*/
        MessageBoxA(g_hWnd, Text, g_Str_Direct_X, 0x30u); /*0x4a454a*/
      }
    }
    *(unsigned long long *)&g_DisplayWidth = 0; /*0x4a4551*/
    g_DisplayBPP = 0; /*0x4a455d*/
    result = (LPDIRECTDRAW)((int (__cdecl *)(LPDIRECTDRAW))g_lpDirectDraw7->lpVtbl->Release)(g_lpDirectDraw7); /*0x4a4566*/
    if ( result ) /*0x4a456b*/
    {
      if ( g_DDraw_ErrorCallback ) /*0x4a4575*/
      {
        result = (LPDIRECTDRAW)g_DDraw_ErrorCallback(result); /*0x4a4579*/
        g_lpDirectDraw7 = 0; /*0x4a457b*/
        return result; /*0x4a4586*/
      }
      CHAR Buffer[4]; // [esp+8h] [ebp-50h] BYREF
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

  if ( !g_lpDirectDraw7 ) /*0x4a45cd*/
    return 0; /*0x4a45cd*/
  int v2[16]; // [esp+0h] [ebp-23Ch] BYREF
  v2[0] = 316; /*0x4a45d3*/
  if ( g_lpDirectDraw7->lpVtbl->GetCaps(g_lpDirectDraw7, (LPDDCAPS)v2, 0) ) /*0x4a45e1*/
    return 0; /*0x4a460d*/
  int v3; // [esp+40h] [ebp-1FCh]
  char Buffer[256]; // [esp+13Ch] [ebp-100h] BYREF
  sprintf(Buffer, "In Get_Free_Video_Memory. About to return %d bytes", v3); /*0x4a45fa*/
  return v3; /*0x4a4606*/
}
} // namespace gamemd

// 0x4A4700
namespace gamemd {
char sub_4A4700()
{

  HRESULT v1; // eax
  (*((unsigned char *)&(v1))) = byte_81FC6C; /*0x4a4700*/
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
        (*((unsigned char *)&(v1))) = g_DDraw_ErrorCallback(v1); /*0x4a473d*/
      }
      else
      {
        char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF
        sprintf(Buffer, "DDRAW.DLL Error code = %08X", v1); /*0x4a474e*/
        (*((unsigned char *)&(v1))) = MessageBoxA(g_hWnd, Buffer, g_Str_Direct_X, 0x30u); /*0x4a4769*/
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
  v2 = operator new(0x6Cu); /*0x4a485e*/
  memcpy(v2, a1, 0x6Cu); /*0x4a4867*/
  int v3; // ecx
  v3 = *(unsigned int *)(a2 + 8); /*0x4a4870*/
  int v4; // eax
  if ( *(unsigned int *)(a2 + 16) < v3 /*0x4a4895*/
    || (*(unsigned char *)(a2 + 13) || !v3)
    && (v4 = *(unsigned int *)(a2 + 20), v4 > 0)
    && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)a2 + 8))(a2, v3 + v4, 0) )
  {
    int v5; // eax
    v5 = *(unsigned int *)(a2 + 16); /*0x4a489c*/
    int v6; // edx
    v6 = *(unsigned int *)(a2 + 4); /*0x4a489f*/
    *(unsigned int *)(a2 + 16) = v5 + 1; /*0x4a48a5*/
    *(unsigned int *)(v6 + 4 * v5) = v2; /*0x4a48a8*/
  }
  return 1; /*0x4a48ab*/
}
} // namespace gamemd

// 0x4A48C0
namespace gamemd {
int sub_4A48C0(unsigned int * a1, unsigned int * a2)
{

  int v2; // esi
  v2 = a1[1]; /*0x4a48cb*/
  int v3; // edx
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
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x4a4e48) */
  if ( a2 ) /*0x4a4e4e*/
  {
    if ( a3 ) /*0x4a4e56*/
    {
      this->Items = (void *)a3; /*0x4a4e58*/
      return &this->vtable0; /*0x4a4e5e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4a4e6d*/
    this->IsAllocated = 1; /*0x4a4e70*/
  }
  return &this->vtable0; /*0x4a4e5d*/

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
  v0 = Math::Sin(dbl_8A00B8 - dbl_8A00E0); /*0x4a4f82*/
  int64_t result; // rax
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
  signed int result; // eax

  DWORD Ticks; // ecx
  Ticks = TimerGetTicks(); /*0x4a50af*/
  int v6; // [esp+Ch] [ebp-4h]
  v6 = a1; /*0x4a50b1*/
  DWORD v5; // [esp+4h] [ebp-Ch]
  v5 = Ticks; /*0x4a50b5*/
  do /*0x4a50df*/
  {
    if ( Ticks == -1 ) /*0x4a50bc*/
    {
      result = a1; /*0x4a50db*/
    }
    else
    {
      DWORD v3; // eax
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

  LOBYTE(this->M24) = 0; /*0x4a52d0*/
  BYTE1(this->M25) = 1; /*0x4a52d4*/

}
} // namespace gamemd

// 0x4A52E0
namespace gamemd {
char E4Recv_4A52E0::sub_4A52E0()
{

  LOBYTE(this->M24) = 0; /*0x4a52e2*/
  BYTE1(this->M25) = 0; /*0x4a52e5*/
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

  *aP2 = 0; /*0x4a5e5e*/
  *aP3 = 0; /*0x4a5e65*/
  Text *v5 = g_FogOfWarState; // esi /*0x4a5e6b*/
  if ( !this || !g_FogOfWarState ) /*0x4a5e77*/
    return 0; /*0x4a5ea2*/
  int PixelData; // eax
  PixelData = ((FontClass *)((FontClass *)g_FogOfWarState))->GetPixelData(0x57u); /*0x4a5e7d*/
  Text::Layout(v5, (uint16_t *)this, aP2, aP3, a2 * PixelData); /*0x4a5e8d*/
  return *aP3 / v5[7].Text_field_00; /*0x4a5e98*/
}
}
// 0x4A6500
namespace gamemd {
unsigned int * FillRectangle(IUnknown * aP0, IUnknown * aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  int v12; // eax
  v12 = Color::ConvertToRGB((uint8_t *)(a6 + 776), (int)&a6); /*0x4a6518*/
  int16_t v16; // [esp+8h] [ebp-8h] BYREF
  v16 = *(unsigned short *)v12; /*0x4a6526*/
  uint8_t v17; // [esp+Ah] [ebp-6h]
  v17 = v12->field_2; /*0x4a652e*/
  unsigned int *v13; // eax
  v13 = (unsigned int *)RenderTextLabelWordWrap( /*0x4a65a7*/
                    &v16,
                    aP1,
                    a3,
                    a4,
                    a5,
                    ((uint8_t)v16 >> g_BitShift_Green_0 << g_BitShift_Red)
                    | ((*(((unsigned char *)&(v16)) + (sizeof(v16) - 1))) >> g_BitMask_Blue << g_BitMask_Green)
                    | (v17 >> g_BitMask_Red << g_BitShift_Blue),
                    a7,
                    a8,
                    a9,
                    a10);
  *aP0 = *v13; /*0x4a65ae*/
  int v14 = v13->X; // edx /*0x4a65b1*/
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
  v0 = Math::Sin(dbl_8A0200 - dbl_8A0240); /*0x4a6b42*/
  int64_t result; // rax
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
  dword_8A0208 = (int)&vt_DynamicVectorClass; /*0x4a6c8d*/
  dword_8A021C = 10; /*0x4a6c97*/
  dword_8A0218 = 0; /*0x4a6ca1*/
  return atexit(sub_4A6CB0); /*0x4a6cac*/
}
} // namespace gamemd

// 0x4A6CB0
namespace gamemd {
void sub_4A6CB0()
{
  dword_8A0208 = (int)&vt_VectorClass; /*0x4a6cb8*/
  if ( dword_8A020C && byte_8A0215 ) /*0x4a6ccc*/
  {
    operator delete((void *)(dword_8A020C)); /*0x4a6ccf*/
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
  v0 = Math::Sin(dbl_8A03D8 - dbl_8A0408); /*0x4a8522*/
  int64_t result; // rax
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

  unsigned int *v0 = &unk_8A0368; // eax /*0x4a8630*/
  int v1 = 5; // edx /*0x4a8635*/
  do /*0x4a866b*/
  {
    *(v0 - 1) = 0; /*0x4a863c*/
    *v0 = 0; /*0x4a863f*/
    *((unsigned char *)v0 + 4) = 1; /*0x4a8641*/
    *((unsigned char *)v0 + 5) = 0; /*0x4a8645*/
    *(v0 - 2) = &vt_VectorClass; /*0x4a8648*/
    *(v0 - 2) = &vt_DynamicVectorClass; /*0x4a864f*/
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

  if ( (byte_8A03E1 & 1) == 0 ) /*0x4a868a*/
  {
    byte_8A03E1 |= 1u; /*0x4a8691*/
    int v0 = 9044956; // esi /*0x4a8697*/
    int v1 = 5; // edi /*0x4a869c*/
    do /*0x4a86cb*/
    {
      void *v2; // eax
      v2 = *(void **)(v0 - 24); /*0x4a86a3*/
      v0 -= 24; /*0x4a86a6*/
      *(unsigned int *)(v0 - 4) = &vt_VectorClass; /*0x4a86ab*/
      if ( v2 ) /*0x4a86b2*/
      {
        if ( *(unsigned char *)(v0 + 9) ) /*0x4a86b4*/
        {
          operator delete((v2)); /*0x4a86ba*/
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
  GadgetClass::Construct(stru_8A06F8, 0, 0, 0, 0, 127, 1); /*0x4a86f1*/
  stru_8A06F8[0] = (int)&vt_DisplayClassTacticalClass; /*0x4a86fb*/
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
    GadgetClass::Dtor(stru_8A06F8); /*0x4a8729*/
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
  FARPROC ProcAddress; // eax

  int v1 = 0; // esi /*0x4aecd6*/
  HMODULE LibraryA; // eax
  LibraryA = LoadLibraryA(lpLibFileName); /*0x4aecd8*/
  HMODULE v3 = LibraryA; // edi /*0x4aecde*/
  if ( LibraryA ) /*0x4aece2*/
  {
    ProcAddress = GetProcAddress(LibraryA, aDllgetversion); /*0x4aecea*/
    if ( ProcAddress ) /*0x4aecf2*/
    {
      int v7; // [esp+Ch] [ebp-10h]
      v7 = 0; /*0x4aecff*/
      int v6; // [esp+8h] [ebp-14h] BYREF
      v6 = 20; /*0x4aed03*/
      int v8; // [esp+10h] [ebp-Ch]
      v8 = 0; /*0x4aed0b*/
      int v9; // [esp+14h] [ebp-8h]
      v9 = 0; /*0x4aed0f*/
      int v10; // [esp+18h] [ebp-4h]
      v10 = 0; /*0x4aed13*/
      if ( ProcAddress(&v6) >= 0 ) /*0x4aed1b*/
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
  v0 = Math::Sin(dbl_8A0758 - dbl_8A0780); /*0x4af412*/
  int64_t result; // rax
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
  nextObject = this->nextObject; /*0x4afaa4*/
  if ( !nextObject ) /*0x4afaad*/
    return 1.0; /*0x4afab9*/
  int occupant; // edx
  occupant = this->occupant; /*0x4afaba*/
  int fallRate; // eax
  fallRate = this->fallRate; /*0x4afabd*/
  if ( occupant != -1 ) /*0x4afac3*/
  {
    if ( *(unsigned int *)&TeamTypeClass_Array - occupant < fallRate ) /*0x4afacf*/
      return (double)((int)nextObject - (fallRate - (*(unsigned int *)&TeamTypeClass_Array - occupant))) /*0x4afae5*/
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

  int result = this->M28; // eax /*0x4afb00*/
  if ( a2 != result ) /*0x4afb0c*/
  {
    this->M32 = result; /*0x4afb0e*/
    this->M28 = a2; /*0x4afb11*/
    unsigned int *v3; // ecx
    v3 = this->vfptr + 9); /*0x4afb19*/
    *v3 = dword_A8ED84; /*0x4afb22*/
    int v4; // [esp+4h] [ebp-Ch]
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

  double v2; // st7

  ObjectClass *nextObject; // edi
  nextObject = this->nextObject; /*0x4afed4*/
  if ( nextObject ) /*0x4afedd*/
  {
    int fallRate; // eax
    fallRate = this->fallRate; /*0x4afee7*/
    int occupant; // esi
    occupant = this->occupant; /*0x4afeeb*/
    if ( occupant != -1 ) /*0x4afef1*/
    {
      if ( *(unsigned int *)&TeamTypeClass_Array - occupant >= fallRate ) /*0x4afefd*/
        fallRate = 0; /*0x4aff03*/
      else
        fallRate -= *(unsigned int *)&TeamTypeClass_Array - occupant; /*0x4afeff*/
    }
    v2 = (double)((int)nextObject - fallRate) / (double)(int)this->nextObject; /*0x4aff10*/
  }
  else
  {
    v2 = 1.0; /*0x4afedf*/
  }
  BOOL result = 0; // eax /*0x4aff4f*/
  if ( v2 == 1.0 ) /*0x4aff20*/
  {
    float *vtable3; // ecx
    vtable3 = (float *)this->M12; /*0x4aff22*/
    if ( fabs(vtable3[202]) < 0.005 && fabs(vtable3[203]) < 0.005 ) /*0x4aff4d*/
      return 1; /*0x4aff20*/
  }
  return result; /*0x4aff54*/

}
} // namespace gamemd
