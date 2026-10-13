// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/ThemeManager_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/TextBuffer_e4.hpp"
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned int aMusicStream;  // data: 0x844750 truth(IDA G42.57w9)


// 0x4080C0
namespace gamemd {  // G42.18 ns repair
int ThemeClass::RequestBuffer()
{
  return RequestBufferMixer((gamemd::VolumeStruct *)((unsigned int *)(this->m_Name[3] + 16)), 0);
}  // G42.18 ns repair
} // namespace gamemd
// 0x408140
namespace gamemd {
int ThemeClass::GetValue()
{
  return *(unsigned long long *)&this->m_Name[6]; /*0x408146*/
}
} // namespace gamemd
// 0x720480
namespace gamemd {
int ThemeClass::ReadThemeEntry(uint8_t ***a2, void * aRepeat, void * aScenario, void * aSide, void * aSound)
{
  const char *v3; // edi
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  int v6; // ecx
  char v8; // [esp-Ch] [ebp-14h]

  INIClass::ResetSection((INIClass *)a2); /*0x72048a*/
  if ( !INIClass::BinarySearchSection((gamemd::INIClass *)((int)a2), (uint8_t *)this) ) /*0x720492*/
    return 0; /*0x720584*/
  v3 = (const char *)this->__pad_37E + 130); /*0x7204a6*/
  INIClass::GetString((INIClass *)a2, (uint8_t *)this, aSound, &g_INI_DefaultBuffer, (char *)this->__pad_37E + 130), 256); /*0x7204bf*/
  while ( *v3 == 36 || *v3 == 35 ) /*0x7204cc*/
    ++v3; /*0x7204ce*/
  strcpy((char *)this->__pad_37E + 130), v3); /*0x7204e9*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)a2, (uint8_t *)this,(uint8_t *)(aScenario), this->u32_280); /*0x720501*/
  v8 = this->u32_288; /*0x72050e*/
  this->u32_280 = Int_Overwrite; /*0x720515*/
  this->u32_288 = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)this,(uint8_t *)(g_INI_Key_Normal), v8); /*0x720520*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (uint8_t *)this,(uint8_t *)(aRepeat), this->u32_289); /*0x720535*/
  v6 = this->u32_28C; /*0x72053a*/
  this->u32_289 = Bool_Overwrite; /*0x720540*/
  this->u32_28C = HouseTypeClass::loadCountryData( /*0x720554*/
                              (HouseTypeClass *)a2,
                              (uint8_t *)this,
                              (uint8_t *)aSide,
                              v6);
  if ( this->u32_288 ) /*0x72055a*/
    INIClass::GetStringEx( /*0x720577*/
      (int)a2,
      (uint8_t *)this,
      (uint8_t *)g_INI_Key_Name,
      (wchar_t *)this->q656 + 426),
      0x40u);
  return 1; /*0x72057c*/
}
} // namespace gamemd
// 0x720590
namespace gamemd {
void * ThemeClass::InitializeThemes(char * a2)
{

  char *v2; // edi
  int KeyCount; // ebp
  int v5; // esi
  unsigned __int8 *StringByIndex; // eax
  int v7; // esi
  unsigned int *v8; // eax
  char *v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  void *result; // eax
  void *Enabled; // eax
  int v16; // [esp+0h] [ebp-38h] BYREF
  int i; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  char Destination[32]; // [esp+18h] [ebp-20h] BYREF

  v2 = a2; /*0x720597*/
  KeyCount = INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_Themes); /*0x7205a9*/
  v5 = 0; /*0x7205ab*/
  v18 = KeyCount; /*0x7205af*/
  for ( i = 0; v5 < KeyCount; i = v5 ) /*0x7205b7*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(v2, (unsigned __int8 *)g_INI_Key_Themes, v5); /*0x7205d1*/
    if ( INIClass::GetString( /*0x7205de*/
           (unsigned __int8 ***)v2,
           (unsigned __int8 *)g_INI_Key_Themes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      if ( &v16 == (int *)-24 ) /*0x7205f1*/
        goto LABEL_10; /*0x7205f1*/
      if ( !strlen(Destination) ) /*0x7205f7*/
        goto LABEL_10; /*0x7205f7*/
      v7 = 0; /*0x720606*/
      if ( this->u32_24 <= 0 ) /*0x72060a*/
        goto LABEL_10; /*0x72060a*/
      while ( _strcmpi(*(const void **)(this->u32_18 + 4 * v7), Destination) ) /*0x720622*/
      {
        if ( ++v7 >= this->u32_24 ) /*0x72062a*/
          goto LABEL_10; /*0x72062a*/
      }
      if ( v7 == -1 ) /*0x720631*/
      {
LABEL_10:
        v8 = __2_YAPAXI_Z(0x290u); /*0x720637*/
        v9 = 0; /*0x720641*/
        if ( v8 ) /*0x720648*/
        {
          v8[160] = 0; /*0x72064a*/
          v8[161] = 0; /*0x720650*/
          *((unsigned short *)v8 + 256) = 0; /*0x720656*/
          *((unsigned char *)v8 + 648) = 1; /*0x72065d*/
          *((unsigned char *)v8 + 649) = 0; /*0x720664*/
          *((unsigned char *)v8 + 650) = 0; /*0x72066b*/
          v8[163] = -1; /*0x720672*/
          *(unsigned char *)v8 = 0; /*0x72067c*/
          *((unsigned char *)v8 + 256) = 0; /*0x72067f*/
          v9 = (char *)v8; /*0x720686*/
        }
        strcpy(v9, Destination); /*0x7206a0*/
        v10 = this->u32_1C; /*0x7206a9*/
        if ( this->u32_24 < v10 /*0x7206d1*/
          || (this->u32_21 || !v10)
          && (v11 = this->ThemeClass_field_28, v11 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(this->u32_14 + 8))(&this->u32_14, v10 + v11, 0) )
        {
          v12 = this->u32_24; /*0x7206d8*/
          v13 = this->u32_18; /*0x7206db*/
          this->u32_24 = v12 + 1; /*0x7206e1*/
          *(unsigned int *)(v13 + 4 * v12) = v9; /*0x7206e4*/
        }
      }
      else
      {
        v9 = *(char **)(this->u32_18 + 4 * v7); /*0x7206ec*/
      }
      ThemeClass::ReadThemeEntry((int)v9, (unsigned __int8 ***)a2); /*0x7206f6*/
      v5 = i; /*0x7206fb*/
      KeyCount = v18; /*0x7206ff*/
      v2 = a2; /*0x720703*/
    }
    ++v5; /*0x720707*/
  }
  result = Audio::GetEnabled(); /*0x720714*/
  if ( result ) /*0x72071b*/
  {
    Enabled = Audio::GetEnabled(); /*0x720724*/
    result = AudioStream::Constructor(Enabled, 0x4E20u); /*0x72072b*/
    this->ThemeClass_field_2C = result; /*0x720732*/
    if ( result ) /*0x720735*/
    {
      SetAudioFileName((int)result, aMusicStream); /*0x72073e*/
      AudioQueue::IsEmpty(this->ThemeClass_field_2C, g_MixerChannel_Theme); /*0x72074c*/
      return (void *)AudioQueue::IsNotEmpty(this->ThemeClass_field_2C, g_MixerChannel_Stream); /*0x72075a*/
    }
  }
  return result; /*0x72075f*/

}
} // namespace gamemd
// 0x752370
namespace gamemd {
int ThemeClass::ClearQueues()
{
  int result; // eax
  int i; // esi
  int j; // esi
  int *v3; // edi
  int k; // esi

  result = dword_B1D4BC; /*0x752370*/
  if ( dword_B1D4BC ) /*0x752377*/
  {
    if ( dword_B1D4B8 ) /*0x75238c*/
    {
      *(unsigned int *)(*((unsigned int *)dword_B1D4B8 + 3) + 80) = 2; /*0x752391*/
      operator delete((void *)(dword_B1D4B8)); /*0x75239b*/
      dword_B1D4B8 = 0; /*0x7523a3*/
    }
    for ( i = ((AudioQueue *)(&stru_B1D3F0))->GetNext(); i; i = ((AudioQueue *)(&stru_B1D3F0))->GetNext() ) /*0x7523bb*/
    {
      LinkedList::Init((unsigned int **)i); /*0x7523bf*/
      *(unsigned int *)(*(unsigned int *)(i + 12) + 80) = (gamemd::Init)(2); /*0x7523c8*/
      operator delete((void *)((void *)i)); /*0x7523cb*/
    }
    for ( j = ((AudioQueue *)(&stru_B1D3C8))->GetNext(); j; j = ((AudioQueue *)(&stru_B1D3C8))->GetNext() ) /*0x7523f1*/
    {
      LinkedList::Init((unsigned int **)j); /*0x7523f5*/
      *(unsigned int *)(*(unsigned int *)(j + 12) + 80) = (gamemd::Init)(2); /*0x7523fe*/
      operator delete((void *)((void *)j)); /*0x752401*/
    }
    v3 = (int *)stru_B1D450; /*0x752419*/
    do /*0x752457*/
    {
      result = ((AudioQueue *)(v3))->GetNext(); /*0x752420*/
      for ( k = result; result; k = result ) /*0x752429*/
      {
        LinkedList::Init((unsigned int **)k); /*0x75242d*/
        *(unsigned int *)(*(unsigned int *)(k + 12) + 80) = (gamemd::Init)(2); /*0x752436*/
        operator delete((void *)((void *)k)); /*0x752439*/
        result = ((AudioQueue *)(v3))->GetNext(); /*0x752443*/
      }
      v3 += 3; /*0x75244e*/
    }
    while ( (int)v3 < (int)&unk_B1D480 ); /*0x752457*/
  }
  return result; /*0x75245c*/
}
} // namespace gamemd
// 0x752AB0
namespace gamemd {
void ThemeClass::GetField(int a1)
{
  dword_846614 = a1; /*0x752ab6*/
  if ( a1 >= 255 ) /*0x752abc*/
    dword_846614 = 255; /*0x752abe*/
}
} // namespace gamemd
