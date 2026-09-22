// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Event_e4.hpp"

// 0x4080F0
int ThemeManager::ProcessCallback()
{
{

  int v2 = Audio::Callback(); /*0x4080fa*/
  unsigned __int64 v3; // rax
  LODWORD(v3) = this->u32_14; /*0x4080fc*/
  unsigned __int64 v4 = *(_QWORD *)(v3 + 32) + __PAIR64__(HIDWORD(v3), v2); /*0x408104*/
  while ( (this->u8_C & 1) != 0 ) /*0x408107*/
  {
    LODWORD(v3) = this->u32_14; /*0x40810d*/
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
{

  while ( this->q009 > 0 ) /*0x720778*/
  {
    __3_YAXPAX_Z(**(void ***)(&this->u32_84)); /*0x720780*/
    bool v2 = this->q009; /*0x720785*/
    if ( v2 > 0 ) /*0x72078d*/
    {
      int v3 = v2 - 1; /*0x72078f*/
      int v4 = 0; /*0x720792*/
      for ( this->q009 = v3; /*0x720799*/
            v4 < this->q009;
            *(_DWORD *)(this->u32_18 + 4 * v4 - 4) = *(_DWORD *)(this->u32_18 + 4 * v4) )
      {
        ++v4; /*0x72079e*/
      }
    }
  }
  _DWORD * v5 = *(_DWORD **)(&this->u32_104); /*0x7207b4*/
  if ( v5 ) /*0x7207b9*/
  {
    ThemeClass::RequestBuffer(v5); /*0x7207bb*/
    ThemeManager::ProcessCallback(this->u32_2C); /*0x7207c3*/
    Audio::Release(*(_DWORD **)(&this->u32_104)); /*0x7207cb*/
    AudioSample::Destructor(*(void **)(&this->u32_104)); /*0x7207d3*/
    this->u32_2C = 0; /*0x7207d8*/
  }
}
}
