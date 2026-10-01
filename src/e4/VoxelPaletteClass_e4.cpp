// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VoxelPaletteClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/VoxelPalette_e4.hpp"

// 0x758A30
namespace gamemd {
int VoxelPaletteClass::ConvertFromFile(int a2, void *a2_2)
{

  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  unsigned int v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0; /*0x758a42*/
  if ( !(*(int (**)(int, int))(*(unsigned int *)a2 + 28))(a2, 1) ) /*0x758a44*/
    goto LABEL_5; /*0x758a44*/
  if ( (*(int (**)(int, unsigned int *, int))(*(unsigned int *)a2 + 36))(a2, v9, 16) != 16 ) /*0x758a5c*/
    goto LABEL_5; /*0x758a5c*/
  v4 = v9[2]; /*0x758a62*/
  v5 = v9[1]; /*0x758a66*/
  *(unsigned int *)this = v9[0]; /*0x758a6a*/
  v6 = v9[3]; /*0x758a6c*/
  *((unsigned int *)this + 2) = v4; /*0x758a70*/
  v7 = *((unsigned int *)this + 4); /*0x758a73*/
  *((unsigned int *)this + 1) = v5; /*0x758a76*/
  *((unsigned int *)this + 3) = v6; /*0x758a79*/
  if ( (*(int (**)(int, int, int))(*(unsigned int *)a2 + 36))(a2, v7, 768) != 768 /*0x758aaa*/
    || (*(int (**)(int, unsigned int, unsigned int))(*(unsigned int *)a2 + 36))(
         a2,
         *((unsigned int *)this + 5),
         *((unsigned int *)this + 2) << 8) != *((unsigned int *)this + 2) << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758aac*/
  }
  (*(void (**)(int))(*(unsigned int *)a2 + 52))(a2); /*0x758ab5*/
  return v3; /*0x758ab8*/

}
} // namespace gamemd
// 0x753B70
namespace gamemd {
int VoxelPaletteClass::LoadFromFile()
{

  int v2; // esi
  VoxelPalette v4; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+10h] [ebp-14h]

  VoxelPalette::Init(&v4, (int)&unk_B2FB78, (int)g_VoxelColorPalette); /*0x753b84*/
  v2 = VoxelPaletteClass::ConvertFromFile((VoxelPaletteClass *)&v4, (int)this); /*0x753b93*/
  dword_B2FB74 = *(unsigned int *)v4.__pad_0; /*0x753ba1*/
  dword_B4317C = v4.VoxelPalette_field_0x04; /*0x753baa*/
  dword_B2FB58 = v5; /*0x753bb4*/
  dword_B43178 = v6; /*0x753bba*/
  VoxelPalette::Reset(&v4); /*0x753bbf*/
  return v2; /*0x753bc6*/

}
} // namespace gamemd