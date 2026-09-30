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

// 0x533D20
namespace gamemd {
int KeyboardConfig::LoadINI()
{

  int v0; // esi
  const char *StringByIndex; // ebp
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int i; // [esp+4h] [ebp-CCh]
  int Int_Overwrite; // [esp+8h] [ebp-C8h]
  void *v8[16]; // [esp+Ch] [ebp-C4h] BYREF
  char v9; // [esp+4Ch] [ebp-84h]
  unsigned int v10[22]; // [esp+64h] [ebp-6Ch] BYREF
  unsigned char v11[12]; // [esp+BCh] [ebp-14h] BYREF
  int v12; // [esp+C8h] [ebp-8h]

  INIClass::INIClass(v8); /*0x533d2b*/
  v9 = 0; /*0x533d3b*/
  v8[0] = &CCINIClass_Vtable; /*0x533d3f*/
  CCFileClass::Construct(v10, MEMORY[0x827B88]); /*0x533d47*/
  if ( CCINIClass::Load(v8, (int)v10, 0, 0) ) /*0x533d57*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F680]); /*0x533d6c*/
    v0 = 0; /*0x533d74*/
    MEMORY[0x87F680] = 0; /*0x533d7a*/
    MEMORY[0x87F684] = 0; /*0x533d85*/
    MEMORY[0x87F688] = 0; /*0x533d8b*/
    MEMORY[0x87F68C] = 0; /*0x533d91*/
    MEMORY[0x87F690] = 0; /*0x533d97*/
    for ( i = 0; i < (int)(INIClass)::GetKeyCount((char *)v8, (uint8_t *)g_INI_Key_Hotkey); v0 = i ) /*0x533da8*/
    {
      StringByIndex = (const char *)INIClass::GetStringByIndex((char *)v8, (uint8_t *)g_INI_Key_Hotkey, v0); /*0x533dbf*/
      v2 = 0; /*0x533dd1*/
      Int_Overwrite = INIClass::ReadInt_Overwrite(g_INI_Key_Hotkey, StringByIndex, 0); /*0x533dd3*/
      if ( MEMORY[0x87F668] > 0 ) /*0x533dde*/
      {
        while ( strcmp( /*0x533e1f*/
                  (const char *)(*(int (**)(unsigned int))(**((unsigned int **)MEMORY[0x87F65C] + v2) + 4))(*((unsigned int *)MEMORY[0x87F65C] + v2)),
                  StringByIndex) )
        {
          if ( ++v2 >= MEMORY[0x87F668] ) /*0x533e29*/
            goto LABEL_14; /*0x533e29*/
        }
        v3 = *((unsigned int *)MEMORY[0x87F65C] + v2); /*0x533e32*/
        if ( v3 && Int_Overwrite ) /*0x533e3f*/
        {
          v4 = MEMORY[0x87F688]; /*0x533e47*/
          if ( (int)(MEMORY[0x87F684] + 1) <= MEMORY[0x87F688] ) /*0x533e4f*/
            goto LABEL_13; /*0x533e4f*/
          if ( !MEMORY[0x87F688] ) /*0x533e53*/
            v4 = 10; /*0x533e55*/
          if ( (uint8_t)KeyboardConfig::ReleaseBuffer(v4) ) /*0x533e60*/
          {
LABEL_13:
            *((unsigned int *)MEMORY[0x87F680] + 2 * MEMORY[0x87F684]) = Int_Overwrite; /*0x533e74*/
            *((unsigned int *)MEMORY[0x87F680] + 2 * MEMORY[0x87F684] + 1) = v3; /*0x533e83*/
            MEMORY[0x87F68C] = 0; /*0x533e8d*/
            ++MEMORY[0x87F684]; /*0x533e93*/
          }
        }
      }
LABEL_14:
      ++i; /*0x533e98*/
    }
    v10[0] = (unsigned int)(&vt_CCFileClass);
    v12 = 0; /*0x533ec8*/
    Vector::Clear((int)v11); /*0x533ecf*/
    v10[0] = &off_7E1668; /*0x533ed8*/
    ((BufferIOFileClass *)(v10))->Dtor(); /*0x533ee0*/
    HashTable::DestroyHashTableINIClass(v8); /*0x533ee9*/
    return 1; /*0x533eee*/
  }
  else
  {
    this->Debug::Log(); /*0x533efe*/
    v10[0] = &vt_CCFileClass; /*0x533f0d*/
    v12 = 0; /*0x533f15*/
    Vector::Clear((int)v11); /*0x533f1c*/
    v10[0] = &off_7E1668; /*0x533f25*/
    ((BufferIOFileClass *)(v10))->Dtor(); /*0x533f2d*/
    HashTable::DestroyHashTableINIClass(v8); /*0x533f36*/
    return 0; /*0x533f3b*/
  }

}
} // namespace gamemd
// 0x538B80
namespace gamemd {
AbstractClass * KeyboardConfig::ReleaseBuffer( int a2)
{

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x538b8c*/
    return 0; /*0x538b8c*/
  v3 = (char *)RA2_OPNEW(8 * (a2 + *(unsigned int *)(this + 8))); /*0x538ba0*/
  if ( !v3 ) /*0x538ba7*/
    return 0; /*0x538c00*/
  for ( i = 0; i < *(unsigned int *)(this + 4); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x538bb5*/
  {
    v5 = 8 * i; /*0x538bb9*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x538bc2*/
    *(unsigned int *)&v3[v5] = *v6; /*0x538bc7*/
  }
  RA2_OPDEL(*(void **)this); /*0x538bdb*/
  v7 = a2 + *(unsigned int *)(this + 8); /*0x538be6*/
  *(unsigned int *)this = v3; /*0x538be8*/
  *(unsigned int *)(this + 8) = v7; /*0x538bea*/
  *(unsigned int *)(this + 16) = 0; /*0x538bed*/
  return 1; /*0x538bf4*/

}
} // namespace gamemd