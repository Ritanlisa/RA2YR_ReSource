// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ToolTipManager_7_e4.hpp"

// 0x724AA0
char ToolTipManager::addRef(int a1)
{
return 1;
}

// 0x724B80
int ToolTipManager::ddtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ToolTipManager::_vt03(int this, char a2)
{
  int result; // eax

  if ( a2 == 1 ) /*0x724b89*/
    ToolTipClass::initString((wchar_t *)this); /*0x724b8b*/
  result = *(_DWORD *)(this + 4); /*0x724b90*/
  if ( result ) /*0x724b95*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 16))(this, this + 24); /*0x724b9f*/
  return result; /*0x724ba2*/
}
}

// 0x724BB0
void ToolTipManager::read(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall ToolTipManager::_vt04(int a1)
{
  Debug::Log(); /*0x724bbd*/
}
}

// 0x724BD0
int ToolTipManager::stubReturnFalse(int a1)
{
return 0;
}

// 0x724F40
namespace gamemd {
DynamicVector * ToolTipManager_7::QueryInterface(unsigned int * Block, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
DynamicVector *__thiscall ToolTipManager_7_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x724f43*/
  *Block = &VectorClass<ToolTip const *>::`vftable'; /*0x724f46*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x724f50*/
  {
    __3_YAXPAX_Z(v3); /*0x724f58*/
    *(Block + 1) = 0; /*0x724f60*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x724f6b*/
  *(Block + 2) = 0; /*0x724f71*/
  if ( (a2 & 1) != 0 ) /*0x724f78*/
    __3_YAXPAX_Z(Block); /*0x724f7b*/
  return (DynamicVector *)Block; /*0x724f85*/
}
}
} // namespace gamemd
