// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5F15C0_e4.hpp"
#include "e4/classes/E4Recv_5F1F20_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/E4Recv_5D4F20_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/HotkeyOptions_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/_tree_full_e4.hpp"
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int CreateDialog(...); }  // w16g4 raw call-form

// 0x5F0070
namespace gamemd {
char sub_5F0070()
{
  DWORD v0; // eax
  int v1; // edi
  int v2; // esi
  unsigned char v4[108]; // [esp+8h] [ebp-70h] BYREF
  int16_t v5; // [esp+74h] [ebp-4h]
  char v6; // [esp+76h] [ebp-2h]

  IDA_LOBYTE(v0) = dword_A8D5F8; /*0x5f0073*/
  v4[0] = 0; /*0x5f007c*/
  if ( (dword_A8D5F8 & 2) == 0 ) /*0x5f0081*/
  {
    memset( (void *)(v4), 0, sizeof(v4)); /*0x5f0094*/
    v5 = 0; /*0x5f0096*/
    v6 = 0; /*0x5f0098*/
    v4[0] = 19; /*0x5f00a5*/
    ((Stream *)((int)&unk_A8EA70))->WriteBlock((int)v4, 111, 0); /*0x5f00aa*/
    ((Stream *)((int)&unk_A8EA70))->WriteBlock((int)v4, 111, 0); /*0x5f00bd*/
    v1 = dword_887340; /*0x5f00c7*/
    if ( dword_887338 != -1 ) /*0x5f00d0*/
            v1 += ((Timer *)this->0)->GetTicks() - g_abs_887338;
    while ( 1 ) /*0x5f00e4*/
    {
      IDA_LOBYTE(v0) = dword_887338; /*0x5f00e4*/
      v2 = dword_887340; /*0x5f00e9*/
      if ( dword_887338 != -1 ) /*0x5f00f2*/
      {
                v0 = ((Timer *)this->0)->GetTicks() - g_abs_887338;
        v2 += v0; /*0x5f0104*/
      }
      if ( (unsigned int)(v2 - v1) >= 0x1E ) /*0x5f010b*/
        break; /*0x5f010b*/
      ((Stream *)(int)&unk_A8EA70)->ReadPacket(); /*0x5f0112*/
    }
  }
  return v0; /*0x5f0119*/
}
}
// 0x5F0180
namespace gamemd {
char HandlePlayerDisconnection(int a1, int a2)
{
  char result; // al
  int v3; // edi
  wchar_t *StringCSF; // eax
  wchar_t *v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // eax
  wchar_t *v9; // eax
  int v10; // eax
  wchar_t String[80]; // [esp+4h] [ebp-A0h] BYREF

  result = dword_A8B54C; /*0x5f0180*/
  if ( dword_A8B54C != 1 ) /*0x5f018f*/
  {
    result = (char)dword_A8022C; /*0x5f0195*/
    v3 = *(unsigned int *)((unsigned int *)dword_A8022C)[4 * a1]; /*0x5f019a*/
    if ( v3 ) /*0x5f019f*/
    {
      result = v3->currentPlayer; /*0x5f01a5*/
      if ( result ) /*0x5f01ad*/
      {
        String[0] = 0; /*0x5f01b6*/
        if ( a2 == -1 ) /*0x5f01bd*/
        {
          ((ObjectClass *)((int)&unk_A8EA70))->FreeResources(); /*0x5f0227*/
        }
        else if ( a2 ) /*0x5f01c1*/
        {
          if ( a2 == 1 ) /*0x5f01c6*/
          {
            StringCSF = GetStringCSF( (wchar_t *)(aTxtConnectionL), 0, (const char *)(g_Str_File_NullDlg_CPP), 6412); /*0x5f01e0*/
            swprintf(String, (const size_t)StringCSF, (const wchar_t *)(v3 + 90154)); /*0x5f01eb*/
          }
        }
        else
        {
          v5 = GetStringCSF( (wchar_t *)(aTxtLeftGame), 0, (const char *)(g_Str_File_NullDlg_CPP), 6416); /*0x5f020d*/
          swprintf(String, (const size_t)v5, (const wchar_t *)(v3 + 90154)); /*0x5f0218*/
        }
        if ( wcslen(String) ) /*0x5f0231*/
        {
          v6 = Math::RoundToInt(*(double *)&((unsigned int *)(dword_8871E0))[1].__pad_A0 * 900.0); /*0x5f0250*/
          MessageListClass::AddMessage((void *)(unk_A8BC60), 0, 0, String, *(unsigned int *)(v3->relatedTagsCapacity + 192), 16454, v6, 0); /*0x5f0273*/
          ((MapClass *)((int)(&dword_87F7E8)))->MarkForRedraw((int)((MapClass *)((int)(&dword_87F7E8))), 0); /*0x5f027f*/
        }
        v7 = 0; /*0x5f028b*/
        if ( dword_A8DA84 > 0 ) /*0x5f028f*/
        {
          while ( _wcsicmp(*(const wchar_t **)(dword_A8DA78 + 4 * v7), (const wchar_t *)(v3 + 90154)) ) /*0x5f02b0*/
          {
            if ( ++v7 >= dword_A8DA84 ) /*0x5f02ba*/
              goto LABEL_20; /*0x5f02ba*/
          }
          RA2_OPDEL(*(void **)(dword_A8DA78 + 4 * v7)); /*0x5f02c7*/
          v8 = (*(int ((int *)((**)))(int *, int))(stru_A8DA74 + 16))(&stru_A8DA74, dword_A8DA78 + 4 * v7); /*0x5f02e3*/
          if ( v8 != -1 && v8 < dword_A8DA84 && v8 < --dword_A8DA84 ) /*0x5f02fe*/
          {
            do /*0x5f0316*/
            {
              ++v8; /*0x5f0306*/
              *(unsigned int *)(dword_A8DA78 + 4 * v8 - 4) = *(unsigned int *)(dword_A8DA78 + 4 * v8); /*0x5f030a*/
            }
            while ( v8 < dword_A8DA84 ); /*0x5f0316*/
          }
        }
  LABEL_20:
        ((HouseClass *)((void *)v3))->AIBuildBase(); /*0x5f0318*/
        result = --dword_A8B54C; /*0x5f0324*/
        if ( dword_A8B54C == 1 ) /*0x5f032f*/
        {
          v9 = GetStringCSF( (wchar_t *)(aTxtJustYouAndM), 0, (const char *)(g_Str_File_NullDlg_CPP), 6453); /*0x5f0342*/
          swprintf(String, (const size_t)&off_8240B4, v9); /*0x5f0352*/
          v10 = Math::RoundToInt(*(double *)&((unsigned int *)(dword_8871E0))[1].__pad_A0 * 900.0); /*0x5f036e*/
          MessageListClass::AddMessage((void *)(unk_A8BC60), 0, 0, String, *(unsigned int *)(v3->relatedTagsCapacity + 192), 16454, v10, 0); /*0x5f0391*/
          return ((MapClass *)((int)(&dword_87F7E8)))->MarkForRedraw((int)((MapClass *)((int)(&dword_87F7E8))), 0); /*0x5f039d*/
        }
      }
    }
  }
  return result; /*0x5f03a2*/
}
}
// 0x5F2CE0
namespace gamemd {
AbstractClass * * WaitModemConnection(void * a1, void * a2, void * a3)
{
  unsigned int v3;
  wchar_t *StringCSF; // eax
  LPARAM v5; // esi
  AbstractClass ** v6;
  wchar_t *v7; // eax
  AbstractClass ** MessageBox;
  int v9; // esi
  TechnoTypeClass *v10; // ecx
  wchar_t *v11; // eax
  int *v12; // eax
  int *v13; // eax
  HWND v14; // ecx
  wchar_t *v16; // [esp-Ah] [ebp-11Ch]
  wchar_t *v17; // [esp-Ah] [ebp-11Ch]
  int v18; // [esp+6h] [ebp-10Ch]
  unsigned int v19;
  int Buffer; // [esp+1Ah] [ebp-F8h] BYREF
  AbstractClass ** v21;
  HWND hWnd; // [esp+22h] [ebp-F0h]
  unsigned char Source[236]; // [esp+26h] [ebp-ECh] BYREF
v19 = (unsigned int)((gamemd::AbstractClass **)((unsigned int)((gamemd::AbstractClass **)((unsigned int)((gamemd::AbstractClass **)((unsigned int)((gamemd::AbstractClass **)((wchar_t *)((unsigned int)((wchar_t *)((char)((wchar_t *)(IDA_HIBYTE(a1))))))))))))));
  v3 = (unsigned int)((gamemd::AbstractClass **)((int)((gamemd::AbstractClass **)(3))));
  if ( a3 == (void *)(1) ) /*0x5f2d00*/
    StringCSF = GetStringCSF((wchar_t *)aTxtModemConner_0, 0,(const char *)(g_Str_File_NullMgr_CPP), 1580); /*0x5f2d13*/
  else
    StringCSF = GetStringCSF( (wchar_t *)(aTxtWaitingForC_0), 0, (const char *)(g_Str_File_NullMgr_CPP), 1582); /*0x5f2d26*/
  v5 = (LPARAM)StringCSF; /*0x5f2d30*/
    Debug::Log("Waiting for ring\n") /*G57c1: IDA 0x5f2d32 push offset aWaitingForRing*/;
  v6 = (gamemd::AbstractClass **)((int)((char)((gamemd::AbstractClass **)(1))));
  g_NetworkTestFlag = (int)((wchar_t *)(0));
  v7 = (wchar_t *)((gamemd::AbstractClass **)((wchar_t *)((gamemd::AbstractClass **)(GetStringCSF((wchar_t *)(g_Str_TXT_CANCEL), 0,(const char *)(g_Str_File_NullMgr_CPP), 1589)))));
  MessageBox = (gamemd::AbstractClass **)(CreateMessageBox( (LPARAM)((LPARAM)(v5)), (LPARAM)((LPARAM)((LPARAM)v7)), (LONG)&g_NetworkTestFlag));
  v21 = (gamemd::AbstractClass **)((HWND)((gamemd::AbstractClass **)(MessageBox)));
  if ( !MessageBox ) /*0x5f2d6d*/
    return (gamemd::AbstractClass **)(3); /*0x5f3155*/
  ((Dialog *)(MessageBox))->Show(); /*0x5f2d76*/
(*(void (__thiscall **)(HWND, int (*)(), int))(*(unsigned int *)g_ClipboardBuffer + 36))( /*0x5f2d88*/ g_ClipboardBuffer, PumpEventLoop, (int)(a2));



  g_NetworkTestFlag = 0; /*0x5f2d8b*/
  v9 = 3600; /*0x5f2d92*/
  while ( 1 )
  {
        if ( ((Dialog *)0)->PumpMessages() == 1 || *((unsigned char *)&g_MatrixTransformState + 9524) )
    {
      v3 = (unsigned int)((gamemd::AbstractClass **)((int)((HWND)(6))));
            Debug::Log("Answering cancelled\n") /*G57c1: IDA 0x5f30fa push offset aAnsweringCance*/;
      v14 = (HWND)(g_ClipboardBuffer);
      if ( !g_ClipboardBuffer ) /*0x5f310a*/
        goto LABEL_36; /*0x5f310a*/
      goto LABEL_35; /*0x5f310a*/
    }
    IDA_LOBYTE(v10) = (gamemd::Process)(0); /*0x5f2db1*/
    Process(v10, v18); /*0x5f2db3*/
    memset( (void *)(Source), 0, 0xF0u); /*0x5f2dc3*/
v9 = (*(int (**)(HWND, int, unsigned char *, int, int))(*(unsigned int *)g_ClipboardBuffer + 20))( (HWND)((HWND)((HWND)((HWND)(g_ClipboardBuffer)))), v9, (unsigned char *)(Source), 81, v19 != 0 ? 15 : -1);





        Debug::Log("Get_Modem_Result returned %d\n") /*G57c1: IDA 0x5f2ded push offset aGetModemResult*/;
    if ( v9 == -1000 ) /*0x5f2dfb*/
    {
      v3 = (unsigned int)((gamemd::AbstractClass **)((int)((HWND)(6))));
            Debug::Log("Answering cancelled\n") /*G57c1: IDA 0x5f30c5 push offset aAnsweringCance*/;
      v14 = (HWND)(g_ClipboardBuffer);
      if ( !g_ClipboardBuffer ) /*0x5f30d5*/
        goto LABEL_36; /*0x5f30d5*/
  LABEL_35:
      (((Buffer) >> 16) & 0xFF) = 0; /*0x5f310c*/
      IDA_LOWORD(Buffer) = word_8327A0; /*0x5f3118*/
      ((WinModemClass *)((int *)v14))->WriteSerial( (LPCVOID)(&Buffer), 2u); /*0x5f3124*/
      goto LABEL_36; /*0x5f3124*/
    }
    _strupr((char *)(Source)); /*0x5f2e06*/
    if ( strlen((const char *)(Source)) ) /*0x5f2e0f*/
            Debug::Log("Get_Modem_Result returned string:%s\n") /*G57c1: IDA 0x5f2e28 push offset aGetModemResult_0*/;
    if ( !strncmp((const char *)(Source), aRing, 4u) ) /*0x5f2e3c*/
    {
            Debug::Log("RING\n") /*G57c1: IDA 0x5f2e4d push offset aRing_0*/;
      v11 = GetStringCSF( (wchar_t *)(aTxtAnswering), 0, (const char *)(g_Str_File_NullMgr_CPP), 1647); /*0x5f2e66*/
      Network_Start( (HWND)(hWnd), (LPARAM)((LPARAM)((LPARAM)v11))); /*0x5f2e71*/
            Debug::Log("Answering with ATA\n") /*G57c1: IDA 0x5f2e7b push offset aAnsweringWithA*/;
      ((WinModemClass *)((int *)g_ClipboardBuffer))->WriteSerial( (LPCVOID)(aAta), strlen( (const char *)(aAta))); /*0x5f2e9e*/
      v19 = 1; /*0x5f2ea7*/
      v9 = *(unsigned int *)(Buffer + 36); /*0x5f2eac*/
      goto LABEL_22; /*0x5f2eaf*/
    }
    if ( strstr((const char *)Source, aConnect) ) /*0x5f2ebe*/
    {
      memset((void *)(byte_AC1288), 0, 0x50u); /*0x5f2ed8*/
      strncpy((char *)(byte_AC1288),(const char *)(Source), 0x4Fu); /*0x5f2ee4*/
      v3 = 0; /*0x5f2eed*/
            Debug::Log("Result is %s\n") /*G57c1: IDA 0x5f2ef5 push offset g_Str_Trace_Result_is__s*/;
    }
    else if ( !strncmp((const char *)(Source), aBusy, 4u) ) /*0x5f2f0e*/
    {
      v3 = (unsigned int)((gamemd::AbstractClass **)(2));
            Debug::Log("Result is %s\n") /*G57c1: IDA 0x5f2f29 push offset g_Str_Trace_Result_is__s*/;
    }
    else if ( !strncmp((const char *)(Source), aNoC, 4u) ) /*0x5f2f42*/
    {
      v3 = (unsigned int)((gamemd::AbstractClass **)(1));
            Debug::Log("Result is %s\n") /*G57c1: IDA 0x5f2f5d push offset g_Str_Trace_Result_is__s*/;
    }
    else
    {
      if ( strncmp((const char *)(Source), aErro, 4u) ) /*0x5f2f73*/
        goto LABEL_22; /*0x5f2f7d*/
      v3 = 3; /*0x5f2f83*/
            Debug::Log("Result is %s\n") /*G57c1: IDA 0x5f2f8e push offset g_Str_Trace_Result_is__s*/;
      v21 = (gamemd::AbstractClass **)((wchar_t *)((HWND)asc_82083C));
      v16 = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_TXT_OK), 0,(const char *)(g_Str_File_NullMgr_CPP), 1671));
      v12 = (int *)GetStringCSF( (wchar_t *)(aTxtErrorError), 0, (const char *)(g_Str_File_NullMgr_CPP), 1671); /*0x5f2fcc*/
      ((Dialog *)v12)->ShowMessageBox( (unsigned short *)(v16), 0, 0, 0, v18); /*0x5f2fd6*/
    }
    v6 = (AbstractClass **)(0); /*0x5f2fdb*/
  LABEL_22:
    if ( v9 <= 0 ) /*0x5f2fdf*/
      break; /*0x5f2fdf*/
  LABEL_25:
    if ( v6 != (gamemd::AbstractClass **)(1) ) /*0x5f2ff1*/
      goto LABEL_36; /*0x5f2ff1*/
  }
  if ( !v19 ) /*0x5f2fe7*/
  {
    v9 = 3600; /*0x5f2fe9*/
    goto LABEL_25; /*0x5f2fe9*/
  }
  if ( (*(char (**)(HWND))(*(unsigned int *)g_ClipboardBuffer + 12))( (HWND)((HWND)((HWND)((HWND)(g_ClipboardBuffer))))) >= 0 ) /*0x5f3009*/
  {
        Debug::Log("NullModemClass::Answer_Modem has timed out\n") /*G57c1: IDA 0x5f3038 push offset aNullmodemclass_1*/;
    if ( strlen((const char *)(Source)) ) /*0x5f3041*/
            Debug::Log("Answer result is %s\n") /*G57c1: IDA 0x5f305a push offset aAnswerResultIs*/;
    v21 = (gamemd::AbstractClass **)((wchar_t *)((HWND)asc_82083C));
    v17 = (wchar_t *)(GetStringCSF((wchar_t *)(g_Str_TXT_OK), 0,(const char *)(g_Str_File_NullMgr_CPP), 1687));
    v13 = (int *)GetStringCSF((wchar_t *)(g_Str_TXT_ERROR_TIMEOUT), 0,(const char *)(g_Str_File_NullMgr_CPP), 1687); /*0x5f3098*/
    ((Dialog *)v13)->ShowMessageBox( (unsigned short *)(v17), 0, 0, 0, v18); /*0x5f30a2*/
        Debug::Log("Not connected\n") /*G57c1: IDA 0x5f30ac push offset aNotConnected*/;
    v3 = 5; /*0x5f30b4*/
  }
  else
  {
    sprintf((char *const )(byte_AC1288), "%s", aConnected); /*0x5f301a*/
    v3 = 0; /*0x5f3024*/
        Debug::Log("Connected\n") /*G57c1: IDA 0x5f3026 push offset aConnected_0*/;
  }
  LABEL_36:
  (*(void (**)(HWND, unsigned int))(*(unsigned int *)g_ClipboardBuffer + 36))( (HWND)((HWND)((HWND)((HWND)(g_ClipboardBuffer)))), 0); /*0x5f3129*/
  g_NetworkTestFlag = 0; /*0x5f313a*/
  ((Dialog *)v21)->Destroy(); /*0x5f3141*/
  return (gamemd::AbstractClass **)(v3); /*0x5f3149*/
}
}
// 0x5F33B0
namespace gamemd {
void* sub_5F33B0()
{
  uint16_t v0; // ax
  int v1; // esi

    ((Event *)0)->Dispatch();
  MessageLoop(); /*0x5f33b6*/
  v0 = (uint16_t)(((EventQueue *)(dword_87F770))->Process()); /*0x5f33c1*/
  v1 = v0; /*0x5f33c9*/
  if ( !v0 )
    return (void *)(g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0);
  ((Timer*)((HWND *)dword_87F770))->PumpMessages(); /*0x5f33d7*/
  if ( v1 != 27 )
    return (void *)(g_NetworkTestFlag != 0 ? 0xFFFFFC18 : 0);
  g_NetworkTestFlag = (int)((void *)(1));
  return (void *)(-1000);
}
}
// 0x5F66A0
namespace gamemd {
unsigned int * sub_5F66A0(unsigned int * a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  unsigned int *v8; // ebp
  int *v9; // ebp
  int v10; // edx
  int v11; // edi
  bool v12; // zf
  unsigned int *v14; // [esp+10h] [ebp-28h]
  int v15; // [esp+14h] [ebp-24h]

  v2 = *(unsigned int *)(a2 + 16); /*0x5f66a7*/
  v3 = 0; /*0x5f66ae*/
  v4 = 0; /*0x5f66b0*/
  v5 = 0; /*0x5f66b2*/
  v6 = 0; /*0x5f66b4*/
  if ( v2 > 0 ) /*0x5f66bc*/
  {
    v7 = *(unsigned int *)(a2 + 4); /*0x5f66c2*/
    v3 = *(unsigned int *)(*(unsigned int * *)&v7->isBeingWarpedOut; /*0x5f66d0*/
    v4 = *(unsigned int *)(*(unsigned int * *)&v7->owningHouseIndex0; /*0x5f66d9*/
    if ( v2 - 1 < 0 ) /*0x5f66f5*/
    {
      v5 = 0; /*0x5f6762*/
    }
    else
    {
      v5 = 0; /*0x5f66f7*/
      v8 = (unsigned int *)(v7 + 4 * (v2 - 1)); /*0x5f66fb*/
      v14 = v8; /*0x5f6700*/
      v15 = *(unsigned int *)(a2 + 16); /*0x5f6704*/
      do /*0x5f675e*/
      {
        v9 = (int *)(*v8 + 156); /*0x5f6711*/
        v10 = *v9; /*0x5f6713*/
        v11 = v9[1]; /*0x5f6718*/
        if ( *v9 < v3 ) /*0x5f6722*/
        {
          v5 += v3 - v10; /*0x5f6726*/
          v3 = *v9; /*0x5f6728*/
        }
        if ( v11 < v4 ) /*0x5f672c*/
        {
          v6 += v4 - v11; /*0x5f6730*/
          v4 = v9[1]; /*0x5f6732*/
        }
        if ( v10 > v5 + v3 ) /*0x5f6739*/
          v5 = v10 - v3; /*0x5f673d*/
        if ( v11 > v6 + v4 ) /*0x5f6744*/
          v6 = v11 - v4; /*0x5f6748*/
        v8 = v14 - 1; /*0x5f6752*/
        v12 = v15 == 1; /*0x5f6755*/
        --v14; /*0x5f6756*/
        --v15; /*0x5f675a*/
      }
      while ( !v12 ); /*0x5f675e*/
    }
  }
  *a1 = v3; /*0x5f676c*/
  a1[1] = v4; /*0x5f676e*/
  a1[2] = v5; /*0x5f6771*/
  a1[3] = v6; /*0x5f6774*/
  return a1; /*0x5f6777*/
}
}
// 0x5FBEF0
namespace gamemd {
char sub_5FBEF0()
{
  HWND Dialog_v; // esi
  int v1; // ecx
  LONG dwNewLong; // [esp+4h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x5fbefe*/
  Dialog_v = (HWND)CreateDialog(0xA3u, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))HotkeyOptions::DlgProc, 0); /*0x5fbf0b*/
  if ( Dialog_v ) /*0x5fbf0f*/
  {
    SetWindowLongA(Dialog_v, 8, (LONG)&dwNewLong); /*0x5fbf19*/
    ((Dialog *)(Dialog_v))->Show(); /*0x5fbf21*/
    while ( dwNewLong < 0 ) /*0x5fbf2c*/
    {
      if ( ((Dialog *)0)->PumpMessages() == 1 ) /*0x5fbf35*/
        dwNewLong = 2; /*0x5fbf37*/
      if ( !byte_A8E9A0 ) /*0x5fbf46*/
      {
        IDA_LOBYTE(v1) = 0; /*0x5fbf48*/
        Process(v1); /*0x5fbf4a*/
      }
    }
    ((Dialog *)Dialog_v)->Destroy(); /*0x5fbf59*/
  }
  return 1; /*0x5fbf60*/
}
}
// 0x5FDD20
namespace gamemd {
int FindBuildingByTiberiumType(int aP0)
{
  int v1; // eax
  int v2; // ebx
  char *v3; // edi
  unsigned int *v4; // eax
  int v5; // edx
  int v6; // esi
  const char *v8[17]; // [esp-34h] [ebp-48h] BYREF

  if ( aP0  ==  (int)(-1) ) /*0x5fdd28*/
    return -1; /*0x5fdd28*/
  v1 = *((unsigned int *)(unsigned int)(g_BuildingTypeClass_Array)+ aP0); /*0x5fdd33*/
  v1 = v1; /*0x5fdd36*/
  if ( !*(unsigned char *)(v1 + 681) ) /*0x5fdd3a*/
    return -1; /*0x5fddd8*/
  v2 = 0; /*0x5fdd4e*/
  if ( g_CrateProcessState <= 0 ) /*0x5fdd52*/
  {
  LABEL_11:
    qmemcpy( (void *)(v8), (const void *)(v1 + 100), 0x31u); /*0x5fdda4*/
    Debug::Log("Overlay %s not really tiberium\n", v8[0]); /*0x5fddb9*/
    return 0; /*0x5fddc1*/
  }
  else
  {
    v3 = (char *)BuildingClass_InstanceArray; /*0x5fdd54*/
    while ( 1 ) /*0x5fdd5a*/
    {
      v4 = *(unsigned int **)v3; /*0x5fdd5a*/
      v5 = *(unsigned int *)(*(unsigned int *))(v3->q0E0 + 660);  /*0x5fdd62*/
      if ( aP0 >= (int)((IUnknown *)(v5)) && aP0 < (int)((IUnknown *)(v5) + v4[58]) ) /*0x5fdd76*/
        break; /*0x5fdd76*/
      v6 = v4[58]; /*0x5fdd78*/
      if ( aP0 >= (IUnknown *)(v6) + (IUnknown *)(v5) && aP0  <   (int)((IUnknown *)(v5) + v6 + v4[59] )) /*0x5fdd91*/
        break; /*0x5fdd91*/
      ++v2; /*0x5fdd98*/
      v3 += 4; /*0x5fdd99*/
      if ( v2 >= g_CrateProcessState ) /*0x5fdd9e*/
      {
        v1 = v1; /*0x5fdda0*/
        goto LABEL_11; /*0x5fdda0*/
      }
    }
    return v4[38]; /*0x5fddc9*/
  }
}
}
// 0x5FDDF0
namespace gamemd {
AbstractClass * * sub_5FDDF0()
{
  int v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int i; // edi
  BuildingClass *v6; // esi
  void* v7;
  void *Block; // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  char v10; // [esp+18h] [ebp-Ch]
  char v11; // [esp+19h] [ebp-Bh]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorReset(); /*0x5fddfb*/
  v1 = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x5fde0a*/
  v2 = 0; /*0x5fde0e*/
  v3 = 1000; /*0x5fde10*/
  Block = (void *)(0); /*0x5fde17*/
  v9 = 0; /*0x5fde1b*/
  v10 = 1; /*0x5fde1f*/
  v11 = 0; /*0x5fde24*/
  v7 = (void*)&DynamicVectorClass_CellClass___vftable; /*0x5fde28*/
  v12 = 0; /*0x5fde30*/
  v13 = 1000; /*0x5fde34*/
  if ( v1 ) /*0x5fde38*/
  {
    while ( 1 ) /*0x5fde47*/
    {
      if ( *(unsigned int *)(v1 + 68) == 126 ) /*0x5fde4b*/
      {
        if ( *(unsigned char *)(v1 + 286) >= 0x30u /*0x5fde76*/
          && (v12 < v2
           || (v11 || !v2) && v3 > 0 && ((uint8_t (*)(void ***, int, unsigned int))v7[2])(&v7, v3 + v2, 0)) )
        {
          v4 = v12++; /*0x5fde81*/
          *((unsigned int *)Block + v4) = v1; /*0x5fde8c*/
        }
        *(unsigned int *)(v1 + 68) = -1; /*0x5fde8f*/
        *(unsigned char *)(v1 + 286) = 0; /*0x5fde92*/
      }
      v1 = ((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CellIteratorNext(); /*0x5fdea2*/
      if ( !v1 ) /*0x5fdea6*/
        break; /*0x5fdea6*/
      v2 = v9; /*0x5fde3f*/
      v3 = v13; /*0x5fde43*/
    }
  }
  for ( i = v12 - 1; i >= 0; --i ) /*0x5fdeb1*/
  {
    v6 = (BuildingClass *)*((unsigned int *)Block + i); /*0x5fdeb7*/
    if ( (uint8_t)((BuildingClass *)((int)v6))->CheckAdjacentCells() ) /*0x5fdebc*/
      ((BuildingClass *)(v6))->VisualizePlacement(); /*0x5fdec7*/
  }
  v7 = (void*)&VectorClass_CellClass___vftable; /*0x5fded3*/
  if ( Block ) /*0x5fdedd*/
  {
    if ( v11 ) /*0x5fdee3*/
      RA2_OPDEL(Block); /*0x5fdee6*/
  }
}
}
// 0x5FE620
namespace gamemd {
int BuildingTypeClass_LoadSHPs(int a1)
{
  int result; // eax
  int v2; // ebp
  int v4; // esi
  char v5; // al
  int v6; // eax
  int v7; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  result = dword_A83D90; /*0x5fe620*/
  v2 = 0; /*0x5fe62f*/
  if ( dword_A83D90 > 0 ) /*0x5fe636*/
  {
    while ( 1 ) /*0x5fe642*/
    {
      v4 = *((unsigned int *)dword_A83D84 + v2); /*0x5fe642*/
      v5 = *(unsigned char *)(v4 + 556); /*0x5fe64d*/
      if ( *(unsigned char *)(v4 + 687) ) /*0x5fe645*/
      {
        if ( (v5 || *(unsigned char *)(v4 + 567)) && *(unsigned int *)(v4 + 164) && *(unsigned char *)(v4 + 168) ) /*0x5fe737*/
        {
          RA2_OPDEL(*(void **)(v4 + 164)); /*0x5fe740*/
          *(unsigned int *)(v4 + 164) = 0; /*0x5fe748*/
          *(unsigned char *)(v4 + 168) = 0; /*0x5fe74e*/
        }
        goto LABEL_14; /*0x5fe74e*/
      }
      if ( !v5 ) /*0x5fe65b*/
        break; /*0x5fe65b*/
      _makepath(Buffer, 0, 0, (const char *)(v4 + 504), (const char *)&off_7E1BC6 + 112 * a1); /*0x5fe67e*/
      v6 = (int)(SearchMIXFile( (char *)(Buffer), 1)); /*0x5fe68c*/
      *(unsigned int *)(v4 + 164) = v6; /*0x5fe693*/
      if ( !v6 ) /*0x5fe699*/
        goto LABEL_5; /*0x5fe699*/
  LABEL_14:
      result = dword_A83D90; /*0x5fe754*/
      if ( ++v2 >= dword_A83D90 ) /*0x5fe75c*/
        return result; /*0x5fe75c*/
    }
    if ( !*(unsigned char *)(v4 + 567) ) /*0x5fe6be*/
      goto LABEL_14; /*0x5fe6be*/
    _makepath(Buffer, 0, 0, (const char *)(v4 + 504),(const char *)(Ext)); /*0x5fe6dd*/
    TheaterObjectTypeClassSpecificID( (char *)(Buffer), a1); /*0x5fe6eb*/
    v7 = (int)(SearchMIXFile( (char *)(Buffer), 1)); /*0x5fe6f6*/
    *(unsigned int *)(v4 + 164) = v7; /*0x5fe6fd*/
    if ( v7 ) /*0x5fe703*/
      goto LABEL_14; /*0x5fe703*/
  LABEL_5:
    ((ObjectTypeClass *)(Buffer))->SetRTTI71(); /*0x5fe69f*/
    *(unsigned int *)(v4 + 164) = (unsigned int)(SearchMIXFile( (char *)(Buffer), 1)); /*0x5fe6b3*/
    goto LABEL_14; /*0x5fe6b9*/
  }
  return result; /*0x5fe763*/
}
}
// 0x5FF390
namespace gamemd {
void sub_5FF390()
{
  int i; // edi
  unsigned int *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  for ( i = dword_AC1688 - 1; i >= 0; --i ) /*0x5ff39c*/
  {
    v2 = (unsigned int *)*((unsigned int *)dword_AC167C + i); /*0x5ff3a5*/
    v3 = v2[3] + 8; /*0x5ff3ae*/
    v2[3] = v3; /*0x5ff3b0*/
    if ( v3 >= 80 && v2 ) /*0x5ff3ba*/
    {
      v5 = v2; /*0x5ff3cb*/
      v4 = (*(int (**)(int *, unsigned int **))(dword_AC1678 + 16))( (int *)(&dword_AC1678), (unsigned int **)(&v5)); /*0x5ff3cf*/
      if ( v4 != -1 && v4 < dword_AC1688 && v4 < --dword_AC1688 ) /*0x5ff3ea*/
      {
        do /*0x5ff402*/
        {
          ++v4; /*0x5ff3f2*/
          *((unsigned int *)dword_AC167C + v4 - 1) = *((unsigned int *)dword_AC167C + v4); /*0x5ff3f6*/
        }
        while ( v4 < dword_AC1688 ); /*0x5ff402*/
      }
      RA2_OPDEL(v2); /*0x5ff405*/
    }
  }
}
}
// 0x5FF420
namespace gamemd {
AbstractClass * * GenerateRangeRingTextures()
{
  int v1; // ebx
  int *v2; // ebp
  Surface *v3; // eax
  Surface *v4; // esi
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int j; // esi
  int v9; // ecx
  Surface **v10; // edi
  int v11; // ebp
  Surface *v12; // eax
  Surface *v13; // esi
  int v14; // eax
  int k; // esi
  Surface *v16; // ecx
  char *result; // eax
  uint16_t v18; // cx
  int v19; // [esp+2Eh] [ebp-54h] BYREF
  int i; // [esp+32h] [ebp-50h]
  int v21; // [esp+36h] [ebp-4Ch]
  int v22; // [esp+3Eh] [ebp-44h] BYREF
  int v23; // [esp+42h] [ebp-40h] BYREF
  int v24; // [esp+46h] [ebp-3Ch]
  int v25; // [esp+4Ah] [ebp-38h]
  int v26; // [esp+4Eh] [ebp-34h]
  int v27; // [esp+52h] [ebp-30h] BYREF
  int v28; // [esp+56h] [ebp-2Ch]
  int v29; // [esp+5Ah] [ebp-28h]
  int v30; // [esp+5Eh] [ebp-24h]
  XSurface v31; // [esp+62h] [ebp-20h] BYREF
  int v32; // [esp+72h] [ebp-10h]
  int v33[3]; // [esp+76h] [ebp-Ch] BYREF

  v1 = 0; /*0x5ff429*/
  if ( !byte_AC1834 ) /*0x5ff430*/
  {
    v2 = (int *)(dword_AC1698); /*0x5ff43b*/
    for ( i = 1; i < 129; i += 2 ) /*0x5ff440*/
    {
      if ( !*v2 ) /*0x5ff444*/
      {
        v3 = (Surface *)RA2_OPNEW(0x20u); /*0x5ff44b*/
        v4 = v3; /*0x5ff450*/
        if ( v3 ) /*0x5ff457*/
        {
          Surface::Construct(v3, 256, 128); /*0x5ff465*/
          *(unsigned int *)v4[1].__pad_0 = 0; /*0x5ff46d*/
          *(unsigned int *)v4->__pad_0 = (unsigned int)&XSurface_Vtable; /*0x5ff476*/
          v4[1].Width = 1; /*0x5ff47c*/
          ((Buffer*)((Buffer *)&v4[1].Height))->Init(0, 0x8000); /*0x5ff47f*/
          *(unsigned int *)v4->__pad_0 = (unsigned int)&BSurface_Vtable; /*0x5ff484*/
        }
        else
        {
          v4 = (Surface *)(0); /*0x5ff48c*/
        }
        *v2 = (int)v4; /*0x5ff48e*/
      }
      (*(void (**)(int, unsigned int))(*(unsigned int *)*v2 + 24))(*v2, 0); /*0x5ff497*/
      Surface::Construct((Surface *)&v31, 256, 256); /*0x5ff4a8*/
      v31.LockCount = 0; /*0x5ff4b1*/
      *(unsigned int *)v31.Surface = (unsigned int)(&XSurface_Vtable); /*0x5ff4bb*/
      v32 = 1; /*0x5ff4c3*/
      ((Buffer*)((Buffer *)v33))->Init(0, 0x10000); /*0x5ff4c7*/
      *(unsigned int *)v31.Surface = (unsigned int)(&BSurface_Vtable); /*0x5ff4d0*/
      ((XSurface *)&v31)->Fill( 0); /*0x5ff4d9*/
      v5 = i; /*0x5ff4de*/
      if ( i > 0 ) /*0x5ff4e6*/
      {
        v6 = 12; /*0x5ff4e8*/
        do /*0x5ff52d*/
        {
          v7 = v6; /*0x5ff4f3*/
          if ( v6 > 255 ) /*0x5ff4f5*/
            v7 = 255; /*0x5ff4f7*/
          ((Draw *)((Draw *)&v31))->Ellipse(128, 128, v5, 0, 0, 255, 255, v7); /*0x5ff520*/
          v5 -= 2; /*0x5ff525*/
          v6 += 4; /*0x5ff528*/
        }
        while ( v5 > 0 ); /*0x5ff52d*/
      }
      for ( j = 0; j < 128; ++j ) /*0x5ff534*/
      {
        v9 = *v2; /*0x5ff536*/
        v24 = 2 * j; /*0x5ff53c*/
        v23 = 0; /*0x5ff551*/
        v25 = 255; /*0x5ff555*/
        v26 = 1; /*0x5ff559*/
        v27 = 0; /*0x5ff55d*/
        v28 = j; /*0x5ff561*/
        v29 = 255; /*0x5ff565*/
        v30 = 1; /*0x5ff569*/
(*(void (**)(int, int *, XSurface *, int *, unsigned int, int))(*(unsigned int *)v9 + 8))( /*0x5ff574*/ v9, (int *)(&v27), (XSurface *)(&v31), (int *)(&v23), 0, 1);






      }
      ((Vector *)((int)v33))->Clear((int)((Vector *)((int)v33))); /*0x5ff584*/
      ++v2; /*0x5ff58d*/
      *(unsigned int *)v31.Surface = (unsigned int)(&Surface_Vtable); /*0x5ff593*/
    }
    i = 0; /*0x5ff5aa*/
    v10 = (Surface **)&unk_AC1798; /*0x5ff5ae*/
    v11 = 128; /*0x5ff5b3*/
    do /*0x5ff721*/
    {
      if ( !*v10 ) /*0x5ff5b8*/
      {
        v12 = (Surface *)RA2_OPNEW(0x20u); /*0x5ff5be*/
        v13 = v12; /*0x5ff5c3*/
        if ( v12 ) /*0x5ff5ca*/
        {
          Surface::Construct(v12, 256, 128); /*0x5ff5d8*/
          *(unsigned int *)v13[1].__pad_0 = 0; /*0x5ff5e0*/
          *(unsigned int *)v13->__pad_0 = (unsigned int)&XSurface_Vtable; /*0x5ff5e9*/
          v13[1].Width = 1; /*0x5ff5ef*/
          ((Buffer*)((Buffer *)&v13[1].Height))->Init(0, 0x8000); /*0x5ff5f6*/
          *(unsigned int *)v13->__pad_0 = (unsigned int)&BSurface_Vtable; /*0x5ff5fb*/
        }
        else
        {
          v13 = (Surface *)(0); /*0x5ff603*/
        }
        *v10 = v13; /*0x5ff605*/
      }
      (*(void (**)(Surface *, unsigned int))(*(unsigned int *)(*v10)->__pad_0 + 24))(*v10, 0); /*0x5ff60c*/
      Surface::Construct((Surface *)&v31, 256, 256); /*0x5ff61d*/
      v31.LockCount = 0; /*0x5ff626*/
      *(unsigned int *)v31.Surface = (unsigned int)(&XSurface_Vtable); /*0x5ff630*/
      v32 = 1; /*0x5ff638*/
      ((Buffer*)((Buffer *)v33))->Init(0, 0x10000); /*0x5ff640*/
      *(unsigned int *)v31.Surface = (unsigned int)(&BSurface_Vtable); /*0x5ff649*/
      ((XSurface *)&v31)->Fill( 0); /*0x5ff652*/
      v21 = 60 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1960); /*0x5ff684*/
      IDA_LOWORD(v14) = Math::RoundToInt((double)v21 * -0.002790178571428571); /*0x5ff692*/
      ((Draw *)((Draw *)&v31))->Ellipse(128, 128, i - v14, 0, 0, 255, 255, v11); /*0x5ff6a9*/
      for ( k = 0; k < 128; ++k ) /*0x5ff6ae*/
      {
        v30 = 1; /*0x5ff6ba*/
        v26 = 1; /*0x5ff6be*/
        v29 = 255; /*0x5ff6c9*/
        v25 = 255; /*0x5ff6cd*/
        v16 = *v10; /*0x5ff6d1*/
        v27 = 0; /*0x5ff6db*/
        v28 = 2 * k; /*0x5ff6df*/
        v23 = 0; /*0x5ff6e3*/
        v24 = k; /*0x5ff6e7*/
(*(void (**)(Surface *, int *, XSurface *, int *, unsigned int, int))(*(unsigned int *)v16->__pad_0 + 8))( /*0x5ff6f2*/ v16, (int *)(&v23), (XSurface *)(&v31), (int *)(&v27), 0, 1);






      }
      ((Vector *)((int)v33))->Clear((int)((Vector *)((int)v33))); /*0x5ff702*/
      v11 -= 6; /*0x5ff70b*/
      ++v10; /*0x5ff70f*/
      *(unsigned int *)v31.Surface = (unsigned int)(&Surface_Vtable); /*0x5ff715*/
      ++i; /*0x5ff71d*/
    }
    while ( v11 > 68 ); /*0x5ff721*/
    byte_AC1834 = 1; /*0x5ff727*/
  }
  dword_833588 = DDraw_GetStatus(); /*0x5ff73d*/
  v22 = 5; /*0x5ff742*/
  IDA_HIBYTE(v19) = 0; /*0x5ff74a*/
  result = GetVersionString((unsigned int *)(&v22), (unsigned char *)&v19 + 3, 0, 0); /*0x5ff74e*/
  if ( IDA_HIBYTE(v19) && !dword_AC1838 ) /*0x5ff763*/
  {
    dword_AC1838 = (unsigned int)((void *)RA2_OPNEW(0x40000u)); /*0x5ff776*/
    do /*0x5ff7ed*/
    {
      (((v21) >> 8) & 0xFF) = (uint8_t)((uint16_t)v1 >> g_BitMask_Green) << g_BitMask_Blue; /*0x5ff7aa*/
      IDA_LOBYTE(v18) = 0; /*0x5ff7bb*/
      IDA_HIBYTE(v18) = (uint8_t)((uint16_t)v1 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x5ff7bd*/
      (((v21) >> 16) & 0xFF) = (uint8_t)((uint16_t)v1 >> g_BitShift_Blue) << g_BitMask_Red; /*0x5ff7bf*/
      result = (char *)(((v21) >> 16) & 0xFF); /*0x5ff7dc*/
      *((unsigned int *)dword_AC1838 + v1++) = (((v21) >> 16) & 0xFF) | (((((v21) >> 8) & 0xFF) | v18) << 8); /*0x5ff7e3*/
    }
    while ( v1 < 0x10000 ); /*0x5ff7ed*/
  }
  return (gamemd::AbstractClass **)(result); /*0x5ff7ef*/
}
}
// 0x5F1350
namespace gamemd {
int StringBuilder_AppendChar(char a1)
{
  int result; // eax

  result = dword_A8EA84; /*0x5f1358*/
  if ( dword_A8EA84 < dword_A8EA80 - 1 ) /*0x5f135f*/
  {
    *(unsigned char *)(dword_A8EA7C + dword_A8EA84) = a1; /*0x5f1367*/
    *(unsigned char *)(dword_A8EA7C + dword_A8EA84 + 1) = 0; /*0x5f1375*/
    return ++dword_A8EA84; /*0x5f137f*/
  }
  return result; /*0x5f1385*/
}
} // namespace gamemd

// 0x5F13B0
namespace gamemd {
int sub_5F13B0()
{
  dword_AC1278 = 0; /*0x5f13b2*/
  dword_AC127C = 0; /*0x5f13b7*/
  dword_AC1280 = 0; /*0x5f13bc*/
  dword_AC1284 = 0; /*0x5f13c1*/
  return 0; /*0x5f13c6*/
}
} // namespace gamemd

// 0x5F13D0
namespace gamemd {
void sub_5F13D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f13dc*/
  dbl_AC12E0 = Math::Sqrt(v0 + v0); /*0x5f13ee*/
}
} // namespace gamemd

// 0x5F1400
namespace gamemd {
void sub_5F1400()
{
  dbl_AC1338 = dbl_AC12E0 / 60.0; /*0x5f140c*/
}
} // namespace gamemd

// 0x5F1420
namespace gamemd {
void sub_5F1420()
{
  dbl_AC1320 = 1.0 / dbl_AC1338; /*0x5f142c*/
}
} // namespace gamemd

// 0x5F1440
namespace gamemd {
void sub_5F1440()
{
  dbl_AC1318 = 0.0174532925199433 * 45.0; /*0x5f144c*/
}
} // namespace gamemd

// 0x5F1460
namespace gamemd {
void sub_5F1460()
{
  dbl_AC12F0 = 0.0174532925199433 * 60.0; /*0x5f146c*/
}
} // namespace gamemd

// 0x5F1480
namespace gamemd {
void sub_5F1480()
{
  dbl_AC1270 = 0.0174532925199433 * 90.0; /*0x5f148c*/
}
} // namespace gamemd

// 0x5F14A0
namespace gamemd {
long long sub_5F14A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1270 - dbl_AC12F0); /*0x5f14b2*/
  result = Math::RoundToInt(v0 * dbl_AC12E0 * 0.5); /*0x5f14c6*/
  dword_AC1340 = result; /*0x5f14cb*/
  return result; /*0x5f14d0*/
}
} // namespace gamemd

// 0x5F14E0
namespace gamemd {
void sub_5F14E0()
{
  dbl_AC12F8 = Math::ArcTan((double)dword_AC1340 * 0.00390625); /*0x5f14f7*/
}
} // namespace gamemd

// 0x5F1510
namespace gamemd {
void sub_5F1510()
{
  dbl_AC1310 = Math::ArcTan((double)(2 * dword_AC1340) / dbl_AC12E0); /*0x5f1532*/
}
} // namespace gamemd

// 0x5F1540
namespace gamemd {
long long sub_5F1540()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1340) + 0.5); /*0x5f155b*/
  dword_AC1334 = result; /*0x5f1560*/
  return result; /*0x5f1566*/
}
} // namespace gamemd

// 0x5F1570
namespace gamemd {
int sub_5F1570()
{
  word_AC12D8 = 0; /*0x5f1572*/
  word_AC12DA = 0; /*0x5f1578*/
  return 0; /*0x5f157e*/
}
} // namespace gamemd

// 0x5F1580
namespace gamemd {
int sub_5F1580()
{
  dword_AC1300 = 0; /*0x5f1582*/
  dword_AC1304 = 0; /*0x5f1587*/
  dword_AC1308 = 0; /*0x5f158c*/
  return 0; /*0x5f1591*/
}
} // namespace gamemd

// 0x5F15A0
namespace gamemd {
int sub_5F15A0()
{
  dword_AC1330 = 0; /*0x5f15a5*/
  dword_AC1328 = 128; /*0x5f15af*/
  dword_AC132C = 128; /*0x5f15b4*/
  return 128; /*0x5f15b9*/
}
} // namespace gamemd

// 0x5F15C0
namespace gamemd {
unsigned int sub_5F15C0(ObjectClass *a1, int a2, int a3, int a4, short a5)
{

  a1->ambientSoundController[2] = a2; /*0x5f15cc*/
  a1->ambientSoundController[3] = a3; /*0x5f15d3*/
  ((unsigned int *)a1)[0] = (unsigned int)((void *)a4); /*0x5f15da*/
  LOWORD(a1->ambientSoundController[4]) = a5; /*0x5f15e2*/
  a1->fallRate = 60; /*0x5f15eb*/
  a1->customSound_controller[3] = 60; /*0x5f15ee*/
  a1->vtable1 = &vt_NullModemClass; /*0x5f15f1*/
  a1->ambientSoundController[1] = -1; /*0x5f15f7*/
  a1->attachedBomb = 0; /*0x5f15fa*/
  a1->customSound_controller[0] = 0; /*0x5f15fd*/
  ((unsigned int *)a1)[0] = 0; /*0x5f1600*/
  ((unsigned int *)a1)[0] = 500; /*0x5f1603*/
  ((unsigned int *)a1)[0] = 0; /*0x5f160a*/
  ((unsigned int *)a1)[0] = -1; /*0x5f160d*/
  ((unsigned int *)a1)[0] = 0; /*0x5f1610*/
  ((unsigned int *)a1)[0] = 0; /*0x5f1613*/
  a1->occupant = 3000; /*0x5f1616*/
  a1->owningHouseIndex = 1200; /*0x5f161d*/
  LOBYTE(a1->nextObject) = 43; /*0x5f1624*/
  *(unsigned int *)&a1->bombVisible = 0; /*0x5f1628*/
  a1->health = 0; /*0x5f162b*/
  a1->estimatedHealth = 0; /*0x5f162e*/
  a1->ambientSoundController[0] = 0; /*0x5f1631*/
  a1->customSound_controller[4] = -1; /*0x5f1634*/
  a1->customSound = 1200; /*0x5f1637*/
  a1->attachedTag = 0; /*0x5f163e*/
  return (unsigned int *)a1; /*0x5f1641*/

}
} // namespace gamemd

// 0x5F1F20
namespace gamemd {
int E4Recv_5F1F20::sub_5F1F20()
{

  int v2; // esi
  int *vtable1; // ecx
  int TileIndex; // eax

  v2 = 0; /*0x5f1f27*/
  vtable1 = (int *)((unsigned int *)this->attachedBomb)[0]; /*0x5f1f2c*/
  if ( vtable1[10] <= 0 ) /*0x5f1f34*/
    return 0; /*0x5f1f5b*/
  while ( 1 ) /*0x5f1f37*/
  {
    TileIndex = ((Terrain *)((Terrain *)vtable1))->GetTileIndex(v2); /*0x5f1f37*/
    if ( TileIndex ) /*0x5f1f3e*/
    {
      if ( !*(unsigned char *)(*(unsigned int *)(TileIndex + 20) + 2) && (*(unsigned char *)TileIndex & 2) == 0 ) /*0x5f1f4d*/
        break; /*0x5f1f4d*/
    }
    ++v2; /*0x5f1f52*/
    vtable1 = (int *)((unsigned int *)this->attachedBomb)[0]; /*0x5f1f53*/
    if ( v2 >= vtable1[10] ) /*0x5f1f59*/
      return 0; /*0x5f1f59*/
  }
  return *(unsigned int *)(TileIndex + 20); /*0x5f1f5b*/

}
} // namespace gamemd

// 0x5F3340
namespace gamemd {
int ObjectClass::nullsub_28()
{

  int result; // eax

  return result; /*0x5f3340*/

}
} // namespace gamemd

// 0x5F34D0
namespace gamemd {
int sub_5F34D0(char * String)
{
  int v1; // esi
  unsigned int v2; // kr04_4

  v1 = 0; /*0x5f34de*/
  v2 = strlen( (const char *)(String)) + 1; /*0x5f34e0*/
  if ( (int)(v2 - 1) <= 0 ) /*0x5f34e9*/
    return atoi(String); /*0x5f3501*/
  while ( isdigit(String[v1]) ) /*0x5f34fa*/
  {
    if ( ++v1 >= (int)(v2 - 1) ) /*0x5f34ff*/
      return atoi(String); /*0x5f34ff*/
  }
  return -1; /*0x5f350a*/
}
} // namespace gamemd

// 0x5F36F0
namespace gamemd {
void sub_5F36F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f36fc*/
  dbl_AC1368 = Math::Sqrt(v0 + v0); /*0x5f370e*/
}
} // namespace gamemd

// 0x5F3720
namespace gamemd {
void sub_5F3720()
{
  dbl_AC13C0 = dbl_AC1368 / 60.0; /*0x5f372c*/
}
} // namespace gamemd

// 0x5F3740
namespace gamemd {
void sub_5F3740()
{
  dbl_AC13A8 = 1.0 / dbl_AC13C0; /*0x5f374c*/
}
} // namespace gamemd

// 0x5F3760
namespace gamemd {
void sub_5F3760()
{
  dbl_AC13A0 = 0.0174532925199433 * 45.0; /*0x5f376c*/
}
} // namespace gamemd

// 0x5F3780
namespace gamemd {
void sub_5F3780()
{
  dbl_AC1370 = 0.0174532925199433 * 60.0; /*0x5f378c*/
}
} // namespace gamemd

// 0x5F37A0
namespace gamemd {
void sub_5F37A0()
{
  dbl_AC1348 = 0.0174532925199433 * 90.0; /*0x5f37ac*/
}
} // namespace gamemd

// 0x5F37C0
namespace gamemd {
long long sub_5F37C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1348 - dbl_AC1370); /*0x5f37d2*/
  result = Math::RoundToInt(v0 * dbl_AC1368 * 0.5); /*0x5f37e6*/
  dword_AC13C8 = result; /*0x5f37eb*/
  return result; /*0x5f37f0*/
}
} // namespace gamemd

// 0x5F3800
namespace gamemd {
void sub_5F3800()
{
  dbl_AC1378 = Math::ArcTan((double)dword_AC13C8 * 0.00390625); /*0x5f3817*/
}
} // namespace gamemd

// 0x5F3830
namespace gamemd {
void sub_5F3830()
{
  dbl_AC1390 = Math::ArcTan((double)(2 * dword_AC13C8) / dbl_AC1368); /*0x5f3852*/
}
} // namespace gamemd

// 0x5F3860
namespace gamemd {
long long sub_5F3860()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC13C8) + 0.5); /*0x5f387b*/
  dword_AC13BC = result; /*0x5f3880*/
  return result; /*0x5f3886*/
}
} // namespace gamemd

// 0x5F3890
namespace gamemd {
int sub_5F3890()
{
  dword_AC1360 = 0; /*0x5f3892*/
  return 0; /*0x5f389e*/
}
} // namespace gamemd

// 0x5F38A0
namespace gamemd {
int sub_5F38A0()
{
  dword_AC1380 = 0; /*0x5f38a2*/
  dword_AC1384 = 0; /*0x5f38a7*/
  dword_AC1388 = 0; /*0x5f38ac*/
  return 0; /*0x5f38b1*/
}
} // namespace gamemd

// 0x5F38C0
namespace gamemd {
int sub_5F38C0()
{
  dword_AC13B8 = 0; /*0x5f38c5*/
  dword_AC13B0 = 128; /*0x5f38cf*/
  dword_AC13B4 = 128; /*0x5f38d4*/
  return 128; /*0x5f38d9*/
}
} // namespace gamemd

// 0x5F38E0
namespace gamemd {
int sub_5F38E0()
{
  dword_AC1350 = 0; /*0x5f38e2*/
  dword_AC1354 = 0; /*0x5f38e7*/
  dword_AC1358 = 0; /*0x5f38ec*/
  dword_AC135C = 0; /*0x5f38f1*/
  return 0; /*0x5f38f6*/
}
} // namespace gamemd

// 0x5F5C10
namespace gamemd {
void nullsub_205()
{
  ; /*0x5f5c10*/
}
} // namespace gamemd

// 0x5F6DE0
namespace gamemd {
void sub_5F6DE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5f6dec*/
  dbl_AC13F0 = Math::Sqrt(v0 + v0); /*0x5f6dfe*/
}
} // namespace gamemd

// 0x5F6E10
namespace gamemd {
void sub_5F6E10()
{
  dbl_AC1468 = dbl_AC13F0 / 60.0; /*0x5f6e1c*/
}
} // namespace gamemd

// 0x5F6E30
namespace gamemd {
void sub_5F6E30()
{
  dbl_AC1448 = 1.0 / dbl_AC1468; /*0x5f6e3c*/
}
} // namespace gamemd

// 0x5F6E50
namespace gamemd {
void sub_5F6E50()
{
  dbl_AC1440 = 0.0174532925199433 * 45.0; /*0x5f6e5c*/
}
} // namespace gamemd

// 0x5F6E70
namespace gamemd {
void sub_5F6E70()
{
  dbl_AC13F8 = 0.0174532925199433 * 60.0; /*0x5f6e7c*/
}
} // namespace gamemd

// 0x5F6E90
namespace gamemd {
void sub_5F6E90()
{
  dbl_AC13D0 = 0.0174532925199433 * 90.0; /*0x5f6e9c*/
}
} // namespace gamemd

// 0x5F6EB0
namespace gamemd {
long long sub_5F6EB0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC13D0 - dbl_AC13F8); /*0x5f6ec2*/
  result = Math::RoundToInt(v0 * dbl_AC13F0 * 0.5); /*0x5f6ed6*/
  dword_AC1474 = result; /*0x5f6edb*/
  return result; /*0x5f6ee0*/
}
} // namespace gamemd

// 0x5F6EF0
namespace gamemd {
void sub_5F6EF0()
{
  dbl_AC1400 = Math::ArcTan((double)dword_AC1474 * 0.00390625); /*0x5f6f07*/
}
} // namespace gamemd

// 0x5F6F20
namespace gamemd {
void sub_5F6F20()
{
  dbl_AC1430 = Math::ArcTan((double)(2 * dword_AC1474) / dbl_AC13F0); /*0x5f6f42*/
}
} // namespace gamemd

// 0x5F6F50
namespace gamemd {
long long sub_5F6F50()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1474) + 0.5); /*0x5f6f6b*/
  dword_AC1460 = result; /*0x5f6f70*/
  return result; /*0x5f6f76*/
}
} // namespace gamemd

// 0x5F6F80
namespace gamemd {
int sub_5F6F80()
{
  word_AC13E8 = 0; /*0x5f6f82*/
  word_AC13EA = 0; /*0x5f6f88*/
  return 0; /*0x5f6f8e*/
}
} // namespace gamemd

// 0x5F6F90
namespace gamemd {
int sub_5F6F90()
{
  dword_AC1408 = 0; /*0x5f6f92*/
  dword_AC140C = 0; /*0x5f6f97*/
  dword_AC1410 = 0; /*0x5f6f9c*/
  return 0; /*0x5f6fa1*/
}
} // namespace gamemd

// 0x5F6FB0
namespace gamemd {
int sub_5F6FB0()
{
  dword_AC1458 = 0; /*0x5f6fb5*/
  dword_AC1450 = 128; /*0x5f6fbf*/
  dword_AC1454 = 128; /*0x5f6fc4*/
  return 128; /*0x5f6fc9*/
}
} // namespace gamemd

// 0x5F6FD0
namespace gamemd {
int sub_5F6FD0()
{
  dword_AC13D8 = 0; /*0x5f6fd2*/
  dword_AC13DC = 0; /*0x5f6fd7*/
  dword_AC13E0 = 0; /*0x5f6fdc*/
  dword_AC13E4 = 0; /*0x5f6fe1*/
  return 0; /*0x5f6fe6*/
}
} // namespace gamemd

// 0x5F6FF0
namespace gamemd {
int sub_5F6FF0()
{
  dword_AC141C = 0; /*0x5f6ff7*/
  dword_AC1420 = 0; /*0x5f6ffc*/
  byte_AC1424 = 1; /*0x5f7001*/
  byte_AC1425 = 0; /*0x5f7008*/
  dword_AC1418 = (int)&DynamicVectorClass_ObjectTypeClass___vftable; /*0x5f700d*/
  dword_AC142C = 10; /*0x5f7017*/
  dword_AC1428 = 0; /*0x5f7021*/
  return atexit((void (__cdecl *)(void))(sub_5F7030)); /*0x5f702c*/
}
} // namespace gamemd

// 0x5F7030
namespace gamemd {
void sub_5F7030()
{
  if ( (byte_AC1470 & 1) == 0 ) /*0x5f703a*/
  {
    dword_AC1418 = (int)&VectorClass_ObjectTypeClass___vftable; /*0x5f703e*/
    byte_AC1470 |= 1u; /*0x5f7051*/
    if ( dword_AC141C ) /*0x5f7057*/
    {
      if ( byte_AC1425 ) /*0x5f7061*/
      {
        RA2_OPDEL(dword_AC141C); /*0x5f7064*/
        dword_AC141C = 0; /*0x5f706c*/
      }
    }
    byte_AC1425 = 0; /*0x5f7076*/
    dword_AC1420 = 0; /*0x5f707d*/
  }
}
} // namespace gamemd

// 0x5F76A0
namespace gamemd {
void nullsub_207()
{
  ; /*0x5f76a0*/
}
} // namespace gamemd

// 0x5F96B0
namespace gamemd {
int TheaterObjectTypeClassSpecificID(char *a1, int a2)
{
  int result; // eax
  char v3; // bl

  if ( a2 != -1 ) /*0x5f96b4*/
  {
    IDA_LOBYTE(result) = *a1; /*0x5f96b6*/
    v3 = a1[1]; /*0x5f96b8*/
    if ( *a1 >= 65 && (char)result <= 90 ) /*0x5f96c1*/
      IDA_LOBYTE(result) = result + 32; /*0x5f96c3*/
    if ( v3 >= 65 && v3 <= 90 ) /*0x5f96cd*/
      v3 += 32; /*0x5f96cf*/
    if ( ((unsigned char)result == 103 || (unsigned char)result == 110 || (unsigned char)result == 99 || (unsigned char)result == 121) /*0x5f96ea*/
      && (v3 == 97 || v3 == 116) )
    {
      (&a1)[1] = (char *)((&byte_7E1BCE)[112 * a2]); /*0x5f96fe*/
      return 112 * a2; /*0x5f96f5*/
    }
  }
  return result; /*0x5f9701*/
}
} // namespace gamemd

// 0x5FA0D0
namespace gamemd {
void sub_5FA0D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fa0dc*/
  dbl_AC14B0 = Math::Sqrt(v0 + v0); /*0x5fa0ee*/
}
} // namespace gamemd

// 0x5FA100
namespace gamemd {
void sub_5FA100()
{
  dbl_AC1500 = dbl_AC14B0 / 60.0; /*0x5fa10c*/
}
} // namespace gamemd

// 0x5FA120
namespace gamemd {
void sub_5FA120()
{
  dbl_AC14E8 = 1.0 / dbl_AC1500; /*0x5fa12c*/
}
} // namespace gamemd

// 0x5FA140
namespace gamemd {
void sub_5FA140()
{
  dbl_AC14E0 = 0.0174532925199433 * 45.0; /*0x5fa14c*/
}
} // namespace gamemd

// 0x5FA160
namespace gamemd {
void sub_5FA160()
{
  dbl_AC14B8 = 0.0174532925199433 * 60.0; /*0x5fa16c*/
}
} // namespace gamemd

// 0x5FA180
namespace gamemd {
void sub_5FA180()
{
  dbl_AC1490 = 0.0174532925199433 * 90.0; /*0x5fa18c*/
}
} // namespace gamemd

// 0x5FA1A0
namespace gamemd {
long long sub_5FA1A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1490 - dbl_AC14B8); /*0x5fa1b2*/
  result = Math::RoundToInt(v0 * dbl_AC14B0 * 0.5); /*0x5fa1c6*/
  dword_AC1508 = result; /*0x5fa1cb*/
  return result; /*0x5fa1d0*/
}
} // namespace gamemd

// 0x5FA1E0
namespace gamemd {
void sub_5FA1E0()
{
  dbl_AC14C0 = Math::ArcTan((double)dword_AC1508 * 0.00390625); /*0x5fa1f7*/
}
} // namespace gamemd

// 0x5FA210
namespace gamemd {
void sub_5FA210()
{
  dbl_AC14D8 = Math::ArcTan((double)(2 * dword_AC1508) / dbl_AC14B0); /*0x5fa232*/
}
} // namespace gamemd

// 0x5FA240
namespace gamemd {
long long sub_5FA240()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1508) + 0.5); /*0x5fa25b*/
  dword_AC14FC = result; /*0x5fa260*/
  return result; /*0x5fa266*/
}
} // namespace gamemd

// 0x5FA270
namespace gamemd {
int sub_5FA270()
{
  word_AC14A8 = 0; /*0x5fa272*/
  word_AC14AA = 0; /*0x5fa278*/
  return 0; /*0x5fa27e*/
}
} // namespace gamemd

// 0x5FA280
namespace gamemd {
int sub_5FA280()
{
  dword_AC14C8 = 0; /*0x5fa282*/
  dword_AC14CC = 0; /*0x5fa287*/
  dword_AC14D0 = 0; /*0x5fa28c*/
  return 0; /*0x5fa291*/
}
} // namespace gamemd

// 0x5FA2A0
namespace gamemd {
int sub_5FA2A0()
{
  dword_AC14F8 = 0; /*0x5fa2a5*/
  dword_AC14F0 = 128; /*0x5fa2af*/
  dword_AC14F4 = 128; /*0x5fa2b4*/
  return 128; /*0x5fa2b9*/
}
} // namespace gamemd

// 0x5FA2C0
namespace gamemd {
int sub_5FA2C0()
{
  dword_AC1498 = 0; /*0x5fa2c2*/
  dword_AC149C = 0; /*0x5fa2c7*/
  dword_AC14A0 = 0; /*0x5fa2cc*/
  dword_AC14A4 = 0; /*0x5fa2d1*/
  return 0; /*0x5fa2d6*/
}
} // namespace gamemd

// 0x5FA430
namespace gamemd {
void ObjectClass::nullsub_29()
{

  ; /*0x5fa430*/

}
} // namespace gamemd

// 0x5FC170
namespace gamemd {
void sub_5FC170()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fc17c*/
  dbl_AC1530 = Math::Sqrt(v0 + v0); /*0x5fc18e*/
}
} // namespace gamemd

// 0x5FC1A0
namespace gamemd {
void sub_5FC1A0()
{
  dbl_AC15D8 = dbl_AC1530 / 60.0; /*0x5fc1ac*/
}
} // namespace gamemd

// 0x5FC1C0
namespace gamemd {
void sub_5FC1C0()
{
  dbl_AC15C0 = 1.0 / dbl_AC15D8; /*0x5fc1cc*/
}
} // namespace gamemd

// 0x5FC1E0
namespace gamemd {
void sub_5FC1E0()
{
  dbl_AC15B8 = 0.0174532925199433 * 45.0; /*0x5fc1ec*/
}
} // namespace gamemd

// 0x5FC200
namespace gamemd {
void sub_5FC200()
{
  dbl_AC1538 = 0.0174532925199433 * 60.0; /*0x5fc20c*/
}
} // namespace gamemd

// 0x5FC220
namespace gamemd {
void sub_5FC220()
{
  dbl_AC1510 = 0.0174532925199433 * 90.0; /*0x5fc22c*/
}
} // namespace gamemd

// 0x5FC240
namespace gamemd {
long long sub_5FC240()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1510 - dbl_AC1538); /*0x5fc252*/
  result = Math::RoundToInt(v0 * dbl_AC1530 * 0.5); /*0x5fc266*/
  dword_AC15E0 = result; /*0x5fc26b*/
  return result; /*0x5fc270*/
}
} // namespace gamemd

// 0x5FC280
namespace gamemd {
void sub_5FC280()
{
  dbl_AC1540 = Math::ArcTan((double)dword_AC15E0 * 0.00390625); /*0x5fc297*/
}
} // namespace gamemd

// 0x5FC2B0
namespace gamemd {
void sub_5FC2B0()
{
  dbl_AC1580 = Math::ArcTan((double)(2 * dword_AC15E0) / dbl_AC1530); /*0x5fc2d2*/
}
} // namespace gamemd

// 0x5FC2E0
namespace gamemd {
long long sub_5FC2E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC15E0) + 0.5); /*0x5fc2fb*/
  dword_AC15D4 = result; /*0x5fc300*/
  return result; /*0x5fc306*/
}
} // namespace gamemd

// 0x5FC310
namespace gamemd {
int sub_5FC310()
{
  word_AC1528 = 0; /*0x5fc312*/
  word_AC152A = 0; /*0x5fc318*/
  return 0; /*0x5fc31e*/
}
} // namespace gamemd

// 0x5FC320
namespace gamemd {
int sub_5FC320()
{
  dword_AC1570 = 0; /*0x5fc322*/
  dword_AC1574 = 0; /*0x5fc327*/
  dword_AC1578 = 0; /*0x5fc32c*/
  return 0; /*0x5fc331*/
}
} // namespace gamemd

// 0x5FC340
namespace gamemd {
int sub_5FC340()
{
  dword_AC15D0 = 0; /*0x5fc345*/
  dword_AC15C8 = 128; /*0x5fc34f*/
  dword_AC15CC = 128; /*0x5fc354*/
  return 128; /*0x5fc359*/
}
} // namespace gamemd

// 0x5FC360
namespace gamemd {
int sub_5FC360()
{
  dword_AC1518 = 0; /*0x5fc362*/
  dword_AC151C = 0; /*0x5fc367*/
  dword_AC1520 = 0; /*0x5fc36c*/
  dword_AC1524 = 0; /*0x5fc371*/
  return 0; /*0x5fc376*/
}
} // namespace gamemd

// 0x5FD230
namespace gamemd {
void nullsub_208()
{
  ; /*0x5fd230*/
}
} // namespace gamemd

// 0x5FD240
namespace gamemd {
void nullsub_209()
{
  ; /*0x5fd240*/
}
} // namespace gamemd

// 0x5FD250
namespace gamemd {
void nullsub_210()
{
  ; /*0x5fd250*/
}
} // namespace gamemd

// 0x5FD260
namespace gamemd {
void nullsub_211()
{
  ; /*0x5fd260*/
}
} // namespace gamemd

// 0x5FDCC0
namespace gamemd {
unsigned int * globalHelper_0FDCC0(IUnknown * aP0, int a2)
{
  unsigned int *result; // eax
  int v3; // esi
  int v4; // ecx

  result = (unsigned int *)(aP0); /*0x5fdcc0*/
  v3 = *((unsigned int *)dword_A83D84 + a2); /*0x5fdccd*/
  v4 = 0; /*0x5fdcd0*/
  if ( *(unsigned char *)(v3 + 681) || *(unsigned char *)(v3 + 680) || *(unsigned int *)(v3 + 660) == 126 || *(unsigned char *)(v3 + 682) ) /*0x5fdcef*/
    v4 = -12; /*0x5fdcf9*/
  if ( *(unsigned int *)(v3 + 664) == 9 ) /*0x5fdd05*/
    --v4; /*0x5fdd07*/
  if ( a2 == 126 ) /*0x5fdd0b*/
    --v4; /*0x5fdd0d*/
  *result = 0; /*0x5fdd0e*/
  result[1] = v4; /*0x5fdd12*/
  return result; /*0x5fdd10*/
}
} // namespace gamemd

// 0x5FDF60
namespace gamemd {
void nullsub_212(int a1, int a2)
{
  ; /*0x5fdf60*/
}
} // namespace gamemd

// 0x5FE040
namespace gamemd {
int sub_5FE040()
{
  dword_AC15F8 = 0; /*0x5fe042*/
  dword_AC15FC = 0; /*0x5fe047*/
  dword_AC1600 = 0; /*0x5fe04c*/
  dword_AC1604 = 0; /*0x5fe051*/
  return 0; /*0x5fe056*/
}
} // namespace gamemd

// 0x5FE060
namespace gamemd {
void sub_5FE060()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fe06c*/
  dbl_AC1610 = Math::Sqrt(v0 + v0); /*0x5fe07e*/
}
} // namespace gamemd

// 0x5FE090
namespace gamemd {
void sub_5FE090()
{
  dbl_AC1668 = dbl_AC1610 / 60.0; /*0x5fe09c*/
}
} // namespace gamemd

// 0x5FE0B0
namespace gamemd {
void sub_5FE0B0()
{
  dbl_AC1650 = 1.0 / dbl_AC1668; /*0x5fe0bc*/
}
} // namespace gamemd

// 0x5FE0D0
namespace gamemd {
void sub_5FE0D0()
{
  dbl_AC1648 = 0.0174532925199433 * 45.0; /*0x5fe0dc*/
}
} // namespace gamemd

// 0x5FE0F0
namespace gamemd {
void sub_5FE0F0()
{
  dbl_AC1618 = 0.0174532925199433 * 60.0; /*0x5fe0fc*/
}
} // namespace gamemd

// 0x5FE110
namespace gamemd {
void sub_5FE110()
{
  dbl_AC15F0 = 0.0174532925199433 * 90.0; /*0x5fe11c*/
}
} // namespace gamemd

// 0x5FE130
namespace gamemd {
long long sub_5FE130()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC15F0 - dbl_AC1618); /*0x5fe142*/
  result = Math::RoundToInt(v0 * dbl_AC1610 * 0.5); /*0x5fe156*/
  dword_AC1670 = result; /*0x5fe15b*/
  return result; /*0x5fe160*/
}
} // namespace gamemd

// 0x5FE170
namespace gamemd {
void sub_5FE170()
{
  dbl_AC1620 = Math::ArcTan((double)dword_AC1670 * 0.00390625); /*0x5fe187*/
}
} // namespace gamemd

// 0x5FE1A0
namespace gamemd {
void sub_5FE1A0()
{
  dbl_AC1638 = Math::ArcTan((double)(2 * dword_AC1670) / dbl_AC1610); /*0x5fe1c2*/
}
} // namespace gamemd

// 0x5FE1D0
namespace gamemd {
long long sub_5FE1D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1670) + 0.5); /*0x5fe1eb*/
  dword_AC1664 = result; /*0x5fe1f0*/
  return result; /*0x5fe1f6*/
}
} // namespace gamemd

// 0x5FE200
namespace gamemd {
int sub_5FE200()
{
  word_AC1608 = 0; /*0x5fe202*/
  word_AC160A = 0; /*0x5fe208*/
  return 0; /*0x5fe20e*/
}
} // namespace gamemd

// 0x5FE210
namespace gamemd {
int sub_5FE210()
{
  dword_AC1628 = 0; /*0x5fe212*/
  dword_AC162C = 0; /*0x5fe217*/
  dword_AC1630 = 0; /*0x5fe21c*/
  return 0; /*0x5fe221*/
}
} // namespace gamemd

// 0x5FE230
namespace gamemd {
int sub_5FE230()
{
  dword_AC1660 = 0; /*0x5fe235*/
  dword_AC1658 = 128; /*0x5fe23f*/
  dword_AC165C = 128; /*0x5fe244*/
  return 128; /*0x5fe249*/
}
} // namespace gamemd

// 0x5FE520
namespace gamemd {
void nullsub_213()
{
  ; /*0x5fe520*/
}
} // namespace gamemd

// 0x5FEFC0
namespace gamemd {
void sub_5FEFC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5fefcc*/
  dbl_AC17D8 = Math::Sqrt(v0 + v0); /*0x5fefde*/
}
} // namespace gamemd

// 0x5FEFF0
namespace gamemd {
void sub_5FEFF0()
{
  dbl_AC1828 = dbl_AC17D8 / 60.0; /*0x5feffc*/
}
} // namespace gamemd

// 0x5FF010
namespace gamemd {
void sub_5FF010()
{
  dbl_AC1810 = 1.0 / dbl_AC1828; /*0x5ff01c*/
}
} // namespace gamemd

// 0x5FF030
namespace gamemd {
void sub_5FF030()
{
  dbl_AC1808 = 0.0174532925199433 * 45.0; /*0x5ff03c*/
}
} // namespace gamemd

// 0x5FF050
namespace gamemd {
void sub_5FF050()
{
  dbl_AC17E0 = 0.0174532925199433 * 60.0; /*0x5ff05c*/
}
} // namespace gamemd

// 0x5FF070
namespace gamemd {
void sub_5FF070()
{
  dbl_AC1690 = 0.0174532925199433 * 90.0; /*0x5ff07c*/
}
} // namespace gamemd

// 0x5FF090
namespace gamemd {
long long sub_5FF090()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC1690 - dbl_AC17E0); /*0x5ff0a2*/
  result = Math::RoundToInt(v0 * dbl_AC17D8 * 0.5); /*0x5ff0b6*/
  dword_AC1830 = result; /*0x5ff0bb*/
  return result; /*0x5ff0c0*/
}
} // namespace gamemd

// 0x5FF0D0
namespace gamemd {
void sub_5FF0D0()
{
  dbl_AC17E8 = Math::ArcTan((double)dword_AC1830 * 0.00390625); /*0x5ff0e7*/
}
} // namespace gamemd

// 0x5FF100
namespace gamemd {
void sub_5FF100()
{
  dbl_AC1800 = Math::ArcTan((double)(2 * dword_AC1830) / dbl_AC17D8); /*0x5ff122*/
}
} // namespace gamemd

// 0x5FF130
namespace gamemd {
long long sub_5FF130()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC1830) + 0.5); /*0x5ff14b*/
  dword_AC1824 = result; /*0x5ff150*/
  return result; /*0x5ff156*/
}
} // namespace gamemd

// 0x5FF160
namespace gamemd {
int sub_5FF160()
{
  word_AC17D0 = 0; /*0x5ff162*/
  word_AC17D2 = 0; /*0x5ff168*/
  return 0; /*0x5ff16e*/
}
} // namespace gamemd

// 0x5FF170
namespace gamemd {
int sub_5FF170()
{
  dword_AC17F0 = 0; /*0x5ff172*/
  dword_AC17F4 = 0; /*0x5ff177*/
  dword_AC17F8 = 0; /*0x5ff17c*/
  return 0; /*0x5ff181*/
}
} // namespace gamemd

// 0x5FF190
namespace gamemd {
int sub_5FF190()
{
  dword_AC1820 = 0; /*0x5ff195*/
  dword_AC1818 = 128; /*0x5ff19f*/
  dword_AC181C = 128; /*0x5ff1a4*/
  return 128; /*0x5ff1a9*/
}
} // namespace gamemd

// 0x5FF1B0
namespace gamemd {
int sub_5FF1B0()
{
  dword_AC17C0 = 0; /*0x5ff1b2*/
  dword_AC17C4 = 0; /*0x5ff1b7*/
  dword_AC17C8 = 0; /*0x5ff1bc*/
  dword_AC17CC = 0; /*0x5ff1c1*/
  return 0; /*0x5ff1c6*/
}
} // namespace gamemd

// 0x5FF1D0
namespace gamemd {
int sub_5FF1D0()
{
  dword_AC167C = 0; /*0x5ff1d7*/
  dword_AC1680 = 0; /*0x5ff1dc*/
  byte_AC1684 = 1; /*0x5ff1e1*/
  byte_AC1685 = 0; /*0x5ff1e8*/
  dword_AC1678 = (int)&DynamicVectorClass_SpotLightClass___vftable; /*0x5ff1ed*/
  dword_AC168C = 10; /*0x5ff1f7*/
  dword_AC1688 = 0; /*0x5ff201*/
  return atexit((void (__cdecl *)(void))(sub_5FF210)); /*0x5ff20c*/
}
} // namespace gamemd

// 0x5FF210
namespace gamemd {
void sub_5FF210()
{
  dword_AC1678 = (int)&VectorClass_SpotLightClass___vftable; /*0x5ff218*/
  if ( dword_AC167C && byte_AC1685 ) /*0x5ff22c*/
  {
    RA2_OPDEL(dword_AC167C); /*0x5ff22f*/
    dword_AC167C = 0; /*0x5ff237*/
  }
  byte_AC1685 = 0; /*0x5ff23d*/
  dword_AC1680 = 0; /*0x5ff243*/
}
} // namespace gamemd
