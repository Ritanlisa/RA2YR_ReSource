// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/NeuronClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/NeuronClass_e4.hpp"
#include "e4/classes/Connection_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/BuildingPlacement_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/NullModemClass_e4.hpp"
#include "e4/classes/NukeFlash_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"

// 0x43A9C0
namespace gamemd {  // G42.18c ns repair
void * NeuronClass::Reset(unsigned int * Block, char a2)
{

  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E3DC4) */  /*0x43a9cd*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3DC4) */  /*0x43a9d3*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3DC4) */  /*0x43a9da*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3DC4) */  /*0x43a9e1*/
  NeuronClass *v6; // [esp+4h] [ebp-4h] BYREF
  v6 = (gamemd::NeuronClass *)(Block); /*0x43a9ef*/
  int v3; // eax
  v3 = (*(int (**)(int *, NeuronClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x43a9f3*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x43aa03*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x43aa08*/
    for ( ; /*0x43aa0e*/
    v3 < g_BuildingLoadQueue_Array.LightBlueTint;
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
    + 4 * v3) )
    {
      ++v3; /*0x43aa16*/
    }
  }
  v6 = (gamemd::NeuronClass *)(Block); /*0x43aa38*/
  int v4; // eax
  v4 = (*(int (**)(char *, NeuronClass **))(*(unsigned int *)&DataGlobal_B0F5D8 + 16))( /*0x43aa3c*/
         &DataGlobal_B0F5D8,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.PaletteFile[1] ) /*0x43aa4c*/
  {
    --g_BuildingLoadQueue_Array.PaletteFile[1]; /*0x43aa51*/
    for ( ; /*0x43aa57*/
    v4 < g_BuildingLoadQueue_Array.PaletteFile[1];
    *(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[0] + 4 * v4 - 4) = *(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[0] + 4 * v4) )
    {
      ++v4; /*0x43aa5f*/
    }
  }
  ((AbstractClass *)Block)->DTOR(); /*0x43aa73*/
  if ( (a2 & 1) != 0 ) /*0x43aa7d*/
    operator delete((Block)); /*0x43aa80*/
  return Block->tail_0; /*0x43aa8a*/
}
}  // G42.18c ns repair
// 0x43AB20
namespace gamemd {
int NeuronClass_25::Update(int a2, void *a2_2, void *a3_1, void *a4_1)
{
  return *(unsigned int *)(*&this->q004 + 4 * a2); /*0x43ab2a*/
}
} // namespace gamemd

// 0x43AB30
namespace gamemd {
char NeuronClass_25::AddRef(int a2)
{

  int m_8; // esi
  m_8 = this->q008; /*0x43ab32*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x43ab3d*/
  {
    int v3 = 0; // edx /*0x43ab3f*/
    if ( m_8 <= 0 ) /*0x43ab43*/
      return 1; /*0x43ab63*/
    unsigned int *v4; // eax
    v4 = (unsigned int *)(*&this->q004); /*0x43ab45*/
    int v5; // ecx
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x43ab4b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x43ab54*/
    {
      ++v3; /*0x43ab56*/
      ++v4; /*0x43ab57*/
      if ( v3 >= m_8 ) /*0x43ab5c*/
        return 1; /*0x43ab5c*/
    }
  }
  return 0; /*0x43ab5e*/
}
} // namespace gamemd

// 0x43AB70
namespace gamemd {
char NeuronClass_25::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x43ab7c*/
  {
    (this->q00C) = ((this->q00C) & ~0xFF) | ((0) & 0xFF); /*0x43ab86*/
    if ( a3 ) /*0x43ab8c*/
      v4 = a3; /*0x43aba2*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x43ab9e*/
    (this->q00C) = ((this->q00C) & ~0xFF) | ((1) & 0xFF); /*0x43aba6*/
    if ( v4 ) /*0x43abaa*/
    {
      if ( *&this->q004 ) /*0x43abb5*/
      {
        m_8 = this->q008; /*0x43abbc*/
        if ( a2 < m_8 ) /*0x43abc1*/
          m_8 = a2; /*0x43abc3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->q004 + 4 * i - 4) ) /*0x43abc9*/
          ++i; /*0x43abce*/
        if ( (((this->q00C) >> 8) & 0xFF) ) /*0x43abdb*/
        {
          __3_YAXPAX_Z(*&this->q004); /*0x43abe6*/
          *&this->q004 = 0; /*0x43abee*/
        }
      }
      *&this->q004 = v4; /*0x43abf7*/
      this->q008 = a2; /*0x43abff*/
      (this->q00C) = ((this->q00C) & ~(0xFF << 8)) | (((a3 == 0) & 0xFF) << 8); /*0x43ac02*/
      return 1; /*0x43ac08*/
    }
    else
    {
      return 0; /*0x43abaf*/
    }
  }
  else
  {
    (*(void (**)(_VectorClass_PAVNeuronClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x43ac12*/
    return 1; /*0x43ac18*/
  }

}
} // namespace gamemd

// 0x43AC20
namespace gamemd {
int NeuronClass_25::ddtor(void *a1)
{
  if ( *&this->IsAllocated && (((unsigned char *)&(*&this->IsAllocated))[1]) ) /*0x43ac2d*/
  {
    operator delete((void *)(*&this->q004)); /*0x43ac33*/
    *&this->q004 = 0; /*0x43ac3b*/
  }
  (((unsigned char *)&(*&this->q00C))[1]) = 0; /*0x43ac3e*/
  this->q008 = 0; /*0x43ac41*/
}
} // namespace gamemd

// 0x43AC50
namespace gamemd {
int NeuronClass_25::Activate(unsigned int * a2)
{

  if ( !(*((unsigned char *)&(*&this->q00C))) ) /*0x43ac50*/
    return 0; /*0x43ac58*/
  int m_8; // edx
  m_8 = this->q008; /*0x43ac5e*/
  int result = 0; // eax /*0x43ac61*/
  if ( m_8 <= 0 ) /*0x43ac65*/
    return -1; /*0x43ac7c*/
  unsigned int *i; // ecx
  for ( i = *&this->q004; *i != *a2; ++i ) /*0x43ac6b*/
  {
    if ( ++result >= m_8 ) /*0x43ac7a*/
      return -1; /*0x43ac7a*/
  }
  return result; /*0x43ac5a*/
}
} // namespace gamemd

// 0x43AC90
namespace gamemd {
unsigned int NeuronClass_25::Fire(int a2)
{
  if ( (*((unsigned char *)&(*&this->q00C))) ) /*0x43ac90*/
    return (unsigned int)(a2 - *&this->q004) >> 2; /*0x43aca5*/
  else
    return 0; /*0x43ac97*/
}
} // namespace gamemd

// 0x43ACB0
namespace gamemd {
VectorClass_flat * NeuronClass_25::QueryInterface(unsigned int * Block, char a2)
{

  void *v3 = *&Block->__pad_004; // eax /*0x43acb3*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x43acb6*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x43acc0*/
  {
    operator delete((v3)); /*0x43acc8*/
    *&Block->__pad_004 = 0; /*0x43acd0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x43acdb*/
  Block->u32_8 = 0; /*0x43ace1*/
  if ( (a2 & 1) != 0 ) /*0x43ace8*/
    operator delete((Block)); /*0x43aceb*/
  return Block->tail_0; /*0x43acf5*/
}
} // namespace gamemd
