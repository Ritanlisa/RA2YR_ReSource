// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x758A30
int VoxelPaletteClass::ConvertFromFile(int a2)
{
{

  int v3 = 0; /*0x758a42*/
  if ( !(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 28))(a2, 1) ) /*0x758a44*/
    goto LABEL_5; /*0x758a44*/
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF
  if ( (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 36))(a2, v9, 16) != 16 ) /*0x758a5c*/
    goto LABEL_5; /*0x758a5c*/
  int v4 = v9[2]; /*0x758a62*/
  int v5 = v9[1]; /*0x758a66*/
  *this = v9[0]; /*0x758a6a*/
  int v6 = v9[3]; /*0x758a6c*/
  this->q002 = v4; /*0x758a70*/
  int v7 = this->q004; /*0x758a73*/
  this->q004 = v5; /*0x758a76*/
  this->q003 = v6; /*0x758a79*/
  if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 36))(a2, v7, 768) != 768 /*0x758aaa*/
    || (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 36))(a2, this->q005, this->q002 << 8) != this->q002 << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758aac*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 52))(a2); /*0x758ab5*/
  return v3; /*0x758ab8*/
}

// 0x753B70
int VoxelPaletteClass::LoadFromFile()
{
{
    int v2;
    int v4[8];
    VoxelPalette::Init(v4, (int)&DataGlobal_B2FB78, (int)g_VoxelColorPalette);
    v2 = VoxelPaletteClass::ConvertFromFile(v4, (int)this);
    DataGlobal_B2FB74 = v4[0];
    DataGlobal_B4317C = v4[1];
    DataGlobal_B2FB58 = v4[2];
    DataGlobal_B43178 = v4[3];
    VoxelPalette::Reset((int)v4);
    return v2;
}
}
