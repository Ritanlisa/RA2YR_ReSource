// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Event_e4.hpp"

// 0x4080F0
char ThemeManager::ProcessCallback()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4080F0(int this)
{
  int v2; // ebp
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // kr00_8

  v2 = Audio::Callback(); /*0x4080fa*/
  LODWORD(v3) = *(_DWORD *)(this + 20); /*0x4080fc*/
  v4 = *(_QWORD *)(v3 + 32) + __PAIR64__(HIDWORD(v3), v2); /*0x408104*/
  while ( (*(_BYTE *)(this + 12) & 1) != 0 ) /*0x408107*/
  {
    LODWORD(v3) = *(_DWORD *)(this + 20); /*0x40810d*/
    if ( *(_DWORD *)(v3 + 20) == *(_DWORD *)(v3 + 24) ) /*0x408118*/
      break; /*0x408118*/
    LODWORD(v3) = Audio::Callback(); /*0x40811a*/
    if ( v3 >= v4 ) /*0x408127*/
      break; /*0x408127*/
    LOBYTE(v3) = Event::Dispatch(); /*0x408129*/
  }
  return v3; /*0x408130*/
}
}

// 0x720770
void ThemeManager::Cleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ThemeManager::Cleanup(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // ecx

  while ( this->q009 > 0 ) /*0x720778*/
  {
    __3_YAXPAX_Z(**(void ***)(this + 24)); /*0x720780*/
    v2 = this->q009; /*0x720785*/
    if ( v2 > 0 ) /*0x72078d*/
    {
      v3 = v2 - 1; /*0x72078f*/
      v4 = 0; /*0x720792*/
      for ( this->q009 = v3; /*0x720799*/
            v4 < this->q009;
            *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)(this + 24) + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  v5 = *(_DWORD **)(this + 44); /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    ThemeClass::RequestBuffer(v5); /*0x7207bb*/
    ThemeManager::ProcessCallback(*(_DWORD *)(this + 44)); /*0x7207c3*/
    Audio::Release(*(_DWORD **)(this + 44)); /*0x7207cb*/
    AudioSample::Destructor(*(void **)(this + 44)); /*0x7207d3*/
    *(_DWORD *)(this + 44) = 0; /*0x7207d8*/
  }
}
}
