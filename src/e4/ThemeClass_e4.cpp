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

// 0x4080C0
namespace gamemd {
int ThemeClass::RequestBuffer()
{

  return RequestBufferMixer((unsigned int *)(*((unsigned int *)this + 5) + 16), 0);

}
} // namespace gamemd
// 0x408140
namespace gamemd {
int ThemeClass::GetValue()
{

  return *((unsigned int *)this + 4); /*0x408146*/

}
} // namespace gamemd
// 0x720480
namespace gamemd {
int ThemeClass::ReadThemeEntry( uint8_t *** a2)
{

  CCINIClass *v3; // edi
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al
  int v6; // ecx
  char v8; // [esp-Ch] [ebp-14h]

  INIClass::ResetSection(a2); /*0x72048a*/
  if ( !INIClass::BinarySearchSection((int)a2, (INIClass *)this) ) /*0x720492*/
    return 0; /*0x720584*/
  v3 = (CCINIClass *)(this + 256); /*0x7204a6*/
    ((INIClass *)(/*0x7204bf*/     a2))->GetString((unsigned char *)((INIClass *)this), (uint8_t *)&stru_830620.__pad_579C[59788], (INIClass *)&g_abs_87F8E4, (INIClass *)(this + 256), 256);
  while ( v3->__pad_0[0] == 36 || v3->__pad_0[0] == 35 ) /*0x7204cc*/
    v3 = (CCINIClass *)((char *)v3 + 1); /*0x7204ce*/
  strcpy((char *)(this + 256), v3->__pad_0); /*0x7204e9*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x720501*/
                    (int)a2,
                    (uint8_t *)this,
                    (CCINIClass *)&stru_81B1A4.sectionHead[2],
                    *(INIClass **)(this + 640));
  v8 = *(unsigned char *)(this + 648); /*0x72050e*/
  *(unsigned int *)(this + 640) = Int_Overwrite; /*0x720515*/
  *(unsigned char *)(this + 648) = INIClass::ReadBool_Overwrite( /*0x720520*/
                             (int)a2,
                             (uint8_t *)this,
                             (CCINIClass *)&stru_81BB58.headNode[1],
                             v8);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x720535*/
                     (int)a2,
                     (uint8_t *)this,
                     (CCINIClass *)&stru_830620.__pad_579C[59780],
                     *(unsigned char *)(this + 649));
  v6 = *(unsigned int *)(this + 652); /*0x72053a*/
  *(unsigned char *)(this + 649) = Bool_Overwrite; /*0x720540*/
    *(unsigned int *)(this + 652) = ((HouseTypeClass *)((unsigned char *)(/*0x720554*/                               a2)))->loadCountryData((uint8_t *)this, (uint8_t *)&stru_8172FC.unknown38, v6);
  if ( *(unsigned char *)(this + 648) ) /*0x72055a*/
    INIClass::GetStringEx( /*0x720577*/
      (int)a2,
      (INIClass *)this,
      (CCINIClass *)&g_abs_81784C,
      (CCINIClass *)(this + 512),
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
  uint8_t *StringByIndex; // eax
  int v7; // esi
  int v8; // eax
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

  v2 = (char *)((int)(a2));
  KeyCount = (int)(INIClass::GetKeyCount(a2, (uint8_t *)g_INI_Key_Themes));
  v5 = 0; /*0x7205ab*/
  v18 = KeyCount; /*0x7205af*/
  for ( i = 0; v5 < KeyCount; i = v5 ) /*0x7205b7*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v2, (uint8_t *)g_INI_Key_Themes, v5); /*0x7205d1*/
    if ( INIClass::GetString( /*0x7205de*/
           (uint8_t ***)v2,
           (uint8_t **)g_INI_Key_Themes,
           StringByIndex,
           (char *)&MEMORY[0x87F7E8][10719],
           Destination,
           32) )
    {
      if ( &v16 == (int *)-24 ) /*0x7205f1*/
        goto LABEL_10; /*0x7205f1*/
      if ( !strlen(Destination) ) /*0x7205f7*/
        goto LABEL_10; /*0x7205f7*/
      v7 = 0; /*0x720606*/
      if ( *((int *)this + 9) <= 0 ) /*0x72060a*/
        goto LABEL_10; /*0x72060a*/
      while ( _strcmpi(*(const void **)(*((unsigned int *)this + 6) + 4 * v7), Destination) ) /*0x720622*/
      {
        if ( ++v7 >= *((unsigned int *)this + 9) ) /*0x72062a*/
          goto LABEL_10; /*0x72062a*/
      }
      if ( v7 == -1 ) /*0x720631*/
      {
LABEL_10:
        v8 = __2_YAPAXI_Z(656); /*0x720637*/
        v9 = 0; /*0x720641*/
        if ( v8 ) /*0x720648*/
        {
          *(unsigned int *)(v8 + 640) = 0; /*0x72064a*/
          *(unsigned int *)(v8 + 644) = 0; /*0x720650*/
          *(unsigned short *)(v8 + 512) = 0; /*0x720656*/
          *(unsigned char *)(v8 + 648) = 1; /*0x72065d*/
          *(unsigned char *)(v8 + 649) = 0; /*0x720664*/
          *(unsigned char *)(v8 + 650) = 0; /*0x72066b*/
          *(unsigned int *)(v8 + 652) = -1; /*0x720672*/
          *(unsigned char *)v8 = 0; /*0x72067c*/
          *(unsigned char *)(v8 + 256) = 0; /*0x72067f*/
          v9 = (char *)v8; /*0x720686*/
        }
        strcpy(v9, Destination); /*0x7206a0*/
        v10 = *((unsigned int *)this + 7); /*0x7206a9*/
        if ( *((unsigned int *)this + 9) < v10 /*0x7206d1*/
          || (*((unsigned char *)this + 33) || !v10)
          && (v11 = *((unsigned int *)this + 10), v11 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)this + 5) + 8))((char *)this + 20, v10 + v11, 0) )
        {
          v12 = *((unsigned int *)this + 9); /*0x7206d8*/
          v13 = *((unsigned int *)this + 6); /*0x7206db*/
          *((unsigned int *)this + 9) = v12 + 1; /*0x7206e1*/
          *(unsigned int *)(v13 + 4 * v12) = v9; /*0x7206e4*/
        }
      }
      else
      {
        v9 = *(char **)(*((unsigned int *)this + 6) + 4 * v7); /*0x7206ec*/
      }
      ThemeClass::ReadThemeEntry((int)v9, (uint8_t ***)a2); /*0x7206f6*/
      v5 = i; /*0x7206fb*/
      KeyCount = v18; /*0x7206ff*/
      v2 = a2; /*0x720703*/
    }
    ++v5; /*0x720707*/
  }
  result = this->Audio::GetEnabled(); /*0x720714*/
  if ( result ) /*0x72071b*/
  {
    Enabled = (unsigned int)(this->Audio::GetEnabled());
    result = (unsigned int)(AudioStream::Constructor(Enabled, 0x4E20u));
    *((unsigned int *)this + 11) = result; /*0x720732*/
    if ( result ) /*0x720735*/
    {
      SetAudioFileName((int)result, aMusicStream); /*0x72073e*/
      AudioQueue::IsEmpty(*((unsigned int *)this + 11), MEMORY[0x87E744]); /*0x72074c*/
      return (void *)AudioQueue::IsNotEmpty(*((unsigned int *)this + 11), MEMORY[0x87E754]); /*0x72075a*/
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

  result = MEMORY[0xB1D4BC]; /*0x752370*/
  if ( MEMORY[0xB1D4BC] ) /*0x752377*/
  {
    if ( MEMORY[0xB1D4B8] ) /*0x75238c*/
    {
      *(unsigned int *)(*((unsigned int *)MEMORY[0xB1D4B8] + 3) + 80) = 2; /*0x752391*/
      __3_YAXPAX_Z(MEMORY[0xB1D4B8]); /*0x75239b*/
      MEMORY[0xB1D4B8] = 0; /*0x7523a3*/
    }
    for ( i = AudioQueue::GetNext(&MEMORY[0xB1D3F0]); i; i = AudioQueue::GetNext(&MEMORY[0xB1D3F0]) ) /*0x7523bb*/
    {
      LinkedList::Init((unsigned int **)i); /*0x7523bf*/
      *(unsigned int *)(*(unsigned int *)(i + 12) + 80) = 2; /*0x7523c8*/
      __3_YAXPAX_Z((void *)i); /*0x7523cb*/
    }
    for ( j = AudioQueue::GetNext(&MEMORY[0xB1D3C8]); j; j = AudioQueue::GetNext(&MEMORY[0xB1D3C8]) ) /*0x7523f1*/
    {
      LinkedList::Init((unsigned int **)j); /*0x7523f5*/
      *(unsigned int *)(*(unsigned int *)(j + 12) + 80) = 2; /*0x7523fe*/
      __3_YAXPAX_Z((void *)j); /*0x752401*/
    }
    v3 = (int *)MEMORY[0xB1D450]; /*0x752419*/
    do /*0x752457*/
    {
      result = AudioQueue::GetNext(v3); /*0x752420*/
      for ( k = result; result; k = result ) /*0x752429*/
      {
        LinkedList::Init((unsigned int **)k); /*0x75242d*/
        *(unsigned int *)(*(unsigned int *)(k + 12) + 80) = 2; /*0x752436*/
        __3_YAXPAX_Z((void *)k); /*0x752439*/
        result = AudioQueue::GetNext(v3); /*0x752443*/
      }
      v3 += 3; /*0x75244e*/
    }
    while ( (int)v3 < (int)&MEMORY[0xB1D480] ); /*0x752457*/
  }
  return result; /*0x75245c*/

}
} // namespace gamemd
// 0x752AB0
namespace gamemd {
void ThemeClass::GetField(int a1)
{

  g_abs_846614 = a1; /*0x752ab6*/
  if ( a1 >= 255 ) /*0x752abc*/
    g_abs_846614 = 255; /*0x752abe*/

}
} // namespace gamemd