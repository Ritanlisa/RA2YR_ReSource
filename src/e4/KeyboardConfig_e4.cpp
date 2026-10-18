// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/KeyboardConfig_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/JumpjetLocomotionClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/Targeting_e4.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int GetKeyCount(uint8_t* p0); }  // x4:signals@0x526960

// 0x533D20
namespace gamemd {  // G42.18 ns repair
int KeyboardConfig::LoadINI()
{

  int v1; // esi
  unsigned __int8 *StringByIndex; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int i; // [esp+4h] [ebp-CCh]
  int Int_Overwrite; // [esp+8h] [ebp-C8h]
  CCINIClass v9; // [esp+Ch] [ebp-C4h] BYREF
  CCFileClass v10; // [esp+64h] [ebp-6Ch] BYREF
  int v11[3]; // [esp+BCh] [ebp-14h] BYREF
  int v12; // [esp+C8h] [ebp-8h]

  INIClass::INIClass((INIClass *)&v9); /*0x533d2b*/
  v9.ownsFile = 0; /*0x533d3b*/
  /* X11: vtable install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x533d3f*/
  CCFileClass::Construct(&v10, aKeyboardmdIni); /*0x533d47*/
  if ( CCINIClass::Load(&v9, (int)&v10, 0, 0) ) /*0x533d57*/
  {
    __3_YAXPAX_Z(*(void **)&Base); /*0x533d6c*/
    v1 = 0; /*0x533d74*/
    *(unsigned int *)&Base = 0; /*0x533d7a*/
    *(unsigned int *)&NumOfElements = 0; /*0x533d85*/
    *(unsigned int *)&DataGlobal_87F688 = 0; /*0x533d8b*/
    g_FileSystemInitFlag = 0; /*0x533d91*/
    *(unsigned int *)&g_FileSystemPool = 0; /*0x533d97*/
    for ( i = 0; i < INIClass::GetKeyCount(v9.__pad_0, g_INI_Key_Hotkey); v1 = i ) /*0x533da8*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v9.__pad_0, g_INI_Key_Hotkey, v1); /*0x533dbf*/
      v3 = 0; /*0x533dd1*/
      Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)v9.__pad_0, g_INI_Key_Hotkey, StringByIndex, 0); /*0x533dd3*/
      if ( *(int *)&g_CommandClassVector_State > 0 ) /*0x533dde*/
      {
        while ( strcmp( /*0x533e1f*/
                  (const char *)(*(int (**)(unsigned int))(**(unsigned int **)(*(unsigned int *)&g_CommandClass_Capacity
                                                                            + 4 * v3)
                                                              + 4))(*(unsigned int *)(*(unsigned int *)&g_CommandClass_Capacity
                                                                              + 4 * v3)),
                  (const char *)StringByIndex) )
        {
          if ( ++v3 >= *(int *)&g_CommandClassVector_State ) /*0x533e29*/
            goto LABEL_14; /*0x533e29*/
        }
        v4 = *(unsigned int *)(*(unsigned int *)&g_CommandClass_Capacity + 4 * v3); /*0x533e32*/
        if ( v4 && Int_Overwrite ) /*0x533e3f*/
        {
          v5 = *(unsigned int *)&DataGlobal_87F688; /*0x533e47*/
          if ( *(unsigned int *)&NumOfElements + 1 <= *(int *)&DataGlobal_87F688 ) /*0x533e4f*/
            goto LABEL_13; /*0x533e4f*/
          if ( !*(unsigned int *)&DataGlobal_87F688 ) /*0x533e53*/
            v5 = 10; /*0x533e55*/
          if ( KeyboardConfig::ReleaseBuffer((int)&Base, v5) ) /*0x533e60*/
          {
LABEL_13:
            *(unsigned int *)(*(unsigned int *)&Base + 8 * *(unsigned int *)&NumOfElements) = Int_Overwrite; /*0x533e74*/
            *(unsigned int *)(*(unsigned int *)&Base + 8 * *(unsigned int *)&NumOfElements + 4) = v4; /*0x533e83*/
            g_FileSystemInitFlag = 0; /*0x533e8d*/
            ++*(unsigned int *)&NumOfElements; /*0x533e93*/
          }
        }
      }
LABEL_14:
      ++i; /*0x533e98*/
    }
    /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x533ec0*/
    v12 = 0; /*0x533ec8*/
    Vector::Clear((int)v11); /*0x533ecf*/
    *(unsigned int *)v10.__tail_0 = &off_7E1668; /*0x533ed8*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x533ee0*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x533ee9*/
    return 1; /*0x533eee*/
  }
  else
  {
    Debug::Log(); /*0x533efe*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x533f0d*/
    v12 = 0; /*0x533f15*/
    Vector::Clear((int)v11); /*0x533f1c*/
    *(unsigned int *)v10.__tail_0 = &off_7E1668; /*0x533f25*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v10); /*0x533f2d*/
    HashTable::DestroyHashTableINIClass((INIClass *)&v9); /*0x533f36*/
    return 0; /*0x533f3b*/
  }

}
} // namespace gamemd
// 0x538B80
namespace gamemd {
AbstractClass * KeyboardConfig::ReleaseBuffer(int a2, void *v3)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x538b8c*/
    return 0; /*0x538b8c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + this->vtable3)); /*0x538ba0*/
  if ( !v3 ) /*0x538ba7*/
    return 0; /*0x538c00*/
  for ( i = 0; i < this->vtable2; *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x538bb5*/
  {
    v5 = 8 * i; /*0x538bb9*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x538bc2*/
    *(unsigned int *)&v3[v5] = *v6; /*0x538bc7*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x538bdb*/
  v7 = a2 + this->vtable3; /*0x538be6*/
  *(unsigned int *)this = v3; /*0x538be8*/
  this->vtable3 = v7; /*0x538bea*/
  this->uniqueId = 0; /*0x538bed*/
  return 1; /*0x538bf4*/

}
} // namespace gamemd