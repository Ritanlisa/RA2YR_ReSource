// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"

// 0x4080C0
void ThemeClass::RequestBuffer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return RequestBufferMixer((unsigned int *)(this->q014 + 16), 0);
}
}

// 0x408140
long long ThemeClass::GetValue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->ThemeClass_field_04; /*0x408146*/
}
}

// 0x720480
void ThemeClass::ReadThemeEntry(unsigned char *** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v3; // edi
  int Int_Overwrite; // eax
  char Bool_Overwrite; // al

  INIClass::ResetSection(a2); /*0x72048a*/
  if ( !INIClass::BinarySearchSection((int)a2, (INIClass *)this) ) /*0x720492*/
    return 0; /*0x720584*/
  v3 = (CCINIClass *)(this + 256); /*0x7204a6*/
  INIClass::GetString( /*0x7204bf*/
    a2,
    (INIClass *)this,
    (unsigned __int8 *)&stru_830620[82216],
    (INIClass *)&DataGlobal_87F8E4[42624],
    (INIClass *)(this + 256),
    256);
  while ( v3->__pad_0[0] == 36 || v3->__pad_0[0] == 35 ) /*0x7204cc*/
    v3 = (CCINIClass *)((char *)v3 + 1); /*0x7204ce*/
  strcpy((char *)(this + 256), v3->__pad_0); /*0x7204e9*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x720501*/
                    (int)a2,
                    (unsigned __int8 *)this,
                    (CCINIClass *)&stru_81B1A4.sectionHead[2],
                    *(INIClass **)(this + 640));
  char v8 = *(_BYTE *)(this + 648); /*0x72050e*/
  *(_DWORD *)(this + 640) = Int_Overwrite; /*0x720515*/
  *(_BYTE *)(this + 648) = INIClass::ReadBool_Overwrite( /*0x720520*/
                             (int)a2,
                             (unsigned __int8 *)this,
                             (CCINIClass *)&stru_81BB58.headNode[1],
                             v8);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x720535*/
                     (int)a2,
                     (unsigned __int8 *)this,
                     (CCINIClass *)&stru_830620[82208],
                     *(_BYTE *)(this + 649));
  int v6 = *(_DWORD *)(this + 652); /*0x72053a*/
  *(_BYTE *)(this + 649) = Bool_Overwrite; /*0x720540*/
  *(_DWORD *)(this + 652) = HouseTypeClass::loadCountryData( /*0x720554*/
                              a2,
                              (unsigned __int8 *)this,
                              (unsigned __int8 *)&stru_8172FC.unknown38,
                              v6);
  if ( *(_BYTE *)(this + 648) ) /*0x72055a*/
    INIClass::GetStringEx( /*0x720577*/
      (int)a2,
      (INIClass *)this,
      (CCINIClass *)&g_INI_Key_UIName.headNode[1],
      (CCINIClass *)(this + 512),
      0x40u);
  return 1; /*0x72057c*/
}
}

// 0x720590
void * ThemeClass::InitializeThemes(char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int KeyCount; // ebp
  unsigned __int8 *StringByIndex; // eax
  void *result; // eax
  void *Enabled; // eax
  int i; // [esp+10h] [ebp-28h]
  char Destination[32]; // [esp+18h] [ebp-20h] BYREF

  char * v2 = a2; /*0x720597*/
  KeyCount = INIClass::GetKeyCount(a2, (unsigned __int8 *)g_INI_Key_Themes); /*0x7205a9*/
  int v5 = 0; /*0x7205ab*/
  int v18 = KeyCount; /*0x7205af*/
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
  char *v9; // ebp
  int v16; // [esp+0h] [ebp-38h] BYREF
      if ( &v16 == (int *)-24 ) /*0x7205f1*/
        goto LABEL_10; /*0x7205f1*/
      if ( !strlen(Destination) ) /*0x7205f7*/
        goto LABEL_10; /*0x7205f7*/
      int v7 = 0; /*0x720606*/
      if ( this->q024 <= 0 ) /*0x72060a*/
        goto LABEL_10; /*0x72060a*/
      while ( _strcmpi(*(const void **)(*(_DWORD *)(this + 24) + 4 * v7), Destination) ) /*0x720622*/
      {
        if ( ++v7 >= this->q024 ) /*0x72062a*/
          goto LABEL_10; /*0x72062a*/
      }
      if ( v7 == -1 ) /*0x720631*/
      {
LABEL_10:
        _DWORD * v8 = __2_YAPAXI_Z(0x290u); /*0x720637*/
        v9 = 0; /*0x720641*/
        if ( v8 ) /*0x720648*/
        {
          v8[160] = 0; /*0x72064a*/
          v8[161] = 0; /*0x720650*/
          *((_WORD *)v8 + 256) = 0; /*0x720656*/
          *((_BYTE *)v8 + 648) = 1; /*0x72065d*/
          *((_BYTE *)v8 + 649) = 0; /*0x720664*/
          *((_BYTE *)v8 + 650) = 0; /*0x72066b*/
          v8[163] = -1; /*0x720672*/
          *(_BYTE *)v8 = 0; /*0x72067c*/
          *((_BYTE *)v8 + 256) = 0; /*0x72067f*/
          v9 = (char *)v8; /*0x720686*/
        }
        strcpy(v9, Destination); /*0x7206a0*/
        int v10 = *(_DWORD *)(this + 28); /*0x7206a9*/
        if ( this->q024 < v10 /*0x7206d1*/
          || (*(_BYTE *)(this + 33) || !v10)
  int v11; // ecx
          && (v11 = this->ThemeClass_field_28, v11 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->q014 + 8))(this + 20, v10 + v11, 0) )
        {
          int v12 = this->q024; /*0x7206d8*/
          int v13 = *(_DWORD *)(this + 24); /*0x7206db*/
          this->q024 = v12 + 1; /*0x7206e1*/
          *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7206e4*/
        }
      }
      else
      {
        v9 = *(char **)(*(_DWORD *)(this + 24) + 4 * v7); /*0x7206ec*/
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
      SetAudioFileName((int)result, DataGlobal_844750); /*0x72073e*/
      AudioQueue::IsEmpty(this->ThemeClass_field_2C, g_MixerChannel_Theme); /*0x72074c*/
      return (void *)AudioQueue::IsNotEmpty(this->ThemeClass_field_2C, g_MixerChannel_Stream); /*0x72075a*/
    }
  }
  return result; /*0x72075f*/
}
}

// 0x752370
int ThemeClass::ClearQueues()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // esi
  int j; // esi
  int k; // esi

  result = DataGlobal_B1D4BC; /*0x752370*/
  if ( DataGlobal_B1D4BC ) /*0x752377*/
  {
    if ( DataGlobal_B1D4B8 ) /*0x75238c*/
    {
      *(_DWORD *)(*((_DWORD *)DataGlobal_B1D4B8 + 3) + 80) = 2; /*0x752391*/
      __3_YAXPAX_Z(DataGlobal_B1D4B8); /*0x75239b*/
      DataGlobal_B1D4B8 = 0; /*0x7523a3*/
    }
    for ( i = AudioQueue::GetNext(&DataGlobal_B1D3F0); i; i = AudioQueue::GetNext(&DataGlobal_B1D3F0) ) /*0x7523bb*/
    {
      LinkedList::Init((_DWORD **)i); /*0x7523bf*/
      *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x7523c8*/
      __3_YAXPAX_Z((void *)i); /*0x7523cb*/
    }
    for ( j = AudioQueue::GetNext(&DataGlobal_B1D3C8); j; j = AudioQueue::GetNext(&DataGlobal_B1D3C8) ) /*0x7523f1*/
    {
      LinkedList::Init((_DWORD **)j); /*0x7523f5*/
      *(_DWORD *)(*(_DWORD *)(j + 12) + 80) = 2; /*0x7523fe*/
      __3_YAXPAX_Z((void *)j); /*0x752401*/
    }
    int * v3 = (int *)DataGlobal_B1D450; /*0x752419*/
    do /*0x752457*/
    {
      result = AudioQueue::GetNext(v3); /*0x752420*/
      for ( k = result; result; k = result ) /*0x752429*/
      {
        LinkedList::Init((_DWORD **)k); /*0x75242d*/
        *(_DWORD *)(*(_DWORD *)(k + 12) + 80) = 2; /*0x752436*/
        __3_YAXPAX_Z((void *)k); /*0x752439*/
        result = AudioQueue::GetNext(v3); /*0x752443*/
      }
      v3 += 3; /*0x75244e*/
    }
    while ( (int)v3 < (int)&DataGlobal_B1D480 ); /*0x752457*/
  }
  return result; /*0x75245c*/
}
}

// 0x752AB0
void ThemeClass::GetField(int a1)
{
{
    DataGlobal_846614 = a1;
    if ( a1 >= 255 )
    DataGlobal_846614 = 255;
}
}
