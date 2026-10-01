// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ModemGame_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B1D90_e4.hpp"
#include "e4/classes/E4Recv_5B3910_e4.hpp"
#include "e4/classes/E4Recv_5B3E90_e4.hpp"
#include "e4/classes/E4Recv_5B3F50_e4.hpp"
#include "e4/classes/E4Recv_5B4350_e4.hpp"
#include "e4/classes/E4Recv_5B4400_e4.hpp"
#include "e4/classes/E4Recv_5B57D0_e4.hpp"
#include "e4/classes/E4Recv_5B5960_e4.hpp"
#include "e4/classes/E4Recv_5B5A50_e4.hpp"
#include "e4/classes/E4Recv_5B6DA0_e4.hpp"
#include "e4/classes/E4Recv_5B9250_e4.hpp"
#include "e4/classes/E4Recv_5B93F0_e4.hpp"
#include "e4/classes/E4Recv_5B9450_e4.hpp"
#include "e4/classes/E4Recv_5B94C0_e4.hpp"
#include "e4/classes/E4Recv_5BAA80_e4.hpp"
#include "e4/classes/E4Recv_5BCB90_e4.hpp"
#include "e4/classes/E4Recv_5BCC30_e4.hpp"
#include "e4/classes/E4Recv_5BCC60_e4.hpp"
#include "e4/classes/E4Recv_5BCCE0_e4.hpp"
#include "e4/classes/E4Recv_5BCE10_e4.hpp"
#include "e4/classes/E4Recv_5BD2E0_e4.hpp"
#include "e4/classes/E4Recv_5BD560_e4.hpp"
#include "e4/classes/E4Recv_5BDA40_e4.hpp"
#include "e4/classes/E4Recv_5BECC0_e4.hpp"
#include "e4/classes/E4Recv_5BF360_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/E4Recv_5C60D0_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapRegionClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/E4Recv_645D60_e4.hpp"
#include "e4/classes/E4Recv_5A1C70_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/ModemGame_e4.hpp"
#include "e4/classes/Stream_e4.hpp"

// 0x5B3B10
namespace gamemd {
void sub_5B3B10()
{
    unsigned int v1 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v1 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v1 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v1 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v2 = 0;  /* G37 hoist */
    unsigned int v1 = 0;  /* G37 hoist */
  int v0; // edx
  int v1; // edi
  int v2; // ecx
  int v3; // esi
  unsigned int *v4; // eax

  if ( (byte_ABF008 & 1) == 0 ) /*0x5b3b1b*/
  {
    byte_ABF008 |= 1u; /*0x5b3b25*/
    dword_ABEFD8 = (int)&GenericList_vftable; /*0x5b3b2b*/
  LABEL_3:
    v0 = dword_ABEFE0; /*0x5b3b37*/
    while ( dword_ABEFE0 && *(unsigned int *)(dword_ABEFE0 + 4) && *(unsigned int *)(dword_ABEFE0 + 8) && dword_ABEFE0 ) /*0x5b3b4d*/
    {
      v1 = *(unsigned int *)(dword_ABEFE0 + 4); /*0x5b3b4f*/
      v2 = dword_ABEFE0 + 4; /*0x5b3b52*/
      if ( v1 ) /*0x5b3b57*/
      {
        v3 = *(unsigned int *)(dword_ABEFE0 + 8); /*0x5b3b59*/
        v4 = (unsigned int *)(dword_ABEFE0 + 8); /*0x5b3b5c*/
        if ( v3 ) /*0x5b3b61*/
        {
          *(unsigned int *)(v3 + 4) = v1; /*0x5b3b63*/
          *(unsigned int *)(*(unsigned int *)v2 + 8) = *v4; /*0x5b3b6a*/
          *v4 = 0; /*0x5b3b6d*/
          *(unsigned int *)v2 = 0; /*0x5b3b6f*/
          goto LABEL_3; /*0x5b3b71*/
        }
      }
    }
    dword_ABEFE8 = (int)&GenericNode_vftable; /*0x5b3b7f*/
    if ( &dword_ABEFE8 && dword_ABEFEC && dword_ABEFF0 ) /*0x5b3b98*/
    {
      *(unsigned int *)(dword_ABEFF0 + 4) = dword_ABEFEC; /*0x5b3b9a*/
      *(unsigned int *)(dword_ABEFEC + 8) = dword_ABEFF0; /*0x5b3ba9*/
      v0 = dword_ABEFE0; /*0x5b3bac*/
      dword_ABEFF0 = 0; /*0x5b3bb2*/
      dword_ABEFEC = 0; /*0x5b3bb8*/
    }
    dword_ABEFDC = (int)&GenericNode_vftable; /*0x5b3bc3*/
    if ( &dword_ABEFDC && v0 && dword_ABEFE4 ) /*0x5b3bda*/
    {
      *(unsigned int *)(dword_ABEFE4 + 4) = v0; /*0x5b3bdc*/
      *(unsigned int *)(dword_ABEFE0 + 8) = dword_ABEFE4; /*0x5b3beb*/
      dword_ABEFE4 = 0; /*0x5b3bee*/
      dword_ABEFE0 = 0; /*0x5b3bf4*/
    }
  }
}
}
// 0x5B3FF0
namespace gamemd {
unsigned int * sub_5B3FF0(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax

  for ( result = (unsigned int *)*a2; *a2; result = (unsigned int *)*a2 ) /*0x5b3ff0*/
  {
    a2 = result + 1; /*0x5b3fff*/
    if ( result[2] >= a1[2] ) /*0x5b4002*/
      a2 = result; /*0x5b4004*/
  }
  *a2 = (unsigned int)(a1);
  *a1 = 0; /*0x5b400f*/
  a1[1] = 0; /*0x5b4015*/
  return result; /*0x5b401c*/
}
}
// 0x5B40B0
namespace gamemd {
AbstractClass * * SearchMIXFile(char *Source, char aP1)
{
  int v3; // edi
  unsigned int v4;
  int v5; // ecx
  bool v6; // cc
  unsigned int *v8; // eax
  unsigned int *v9; // esi
  char * v10;
  AbstractClass ** SHPFile;
  ObjectClass *v12; // eax
  Checksummer v14; // [esp+14h] [ebp-17Ch] BYREF
  int v15[3]; // [esp+78h] [ebp-118h] BYREF
  int v16; // [esp+84h] [ebp-10Ch]
  char Str[260]; // [esp+8Ch] [ebp-104h] BYREF

  strcpy(Str, Source); /*0x5b40dd*/
  _strupr(Str); /*0x5b40ee*/
  memset(&v14, 0, 12); /*0x5b4110*/
  v3 = Checksummer::Add_Buffer(&v14, (uint8_t *)Str, strlen(Str)); /*0x5b4127*/
  v4 = dword_ABF00C; /*0x5b4129*/
  if ( !dword_ABF00C ) /*0x5b4130*/
    goto LABEL_9; /*0x5b4130*/
  while ( 1 ) /*0x5b4132*/
  {
    v5 = (unsigned int)(((unsigned int *)(v4))[2]);
    v6 = (unsigned int)(v5 < v3);
    if ( v5 == v3 ) /*0x5b4137*/
      break; /*0x5b4137*/
  LABEL_5:
    if ( v6 ) /*0x5b4140*/
      v4 = (unsigned int)((unsigned int *)((unsigned int *)(v4))[1]); /*(unsigned int *)(0x5b4142)*/
    else
      v4 = (unsigned int)((unsigned int *)*(unsigned int *)(v4)); /*0x5b4147*/
    if ( !v4 ) /*0x5b414b*/
      goto LABEL_9; /*0x5b414b*/
  }
  if ( !((unsigned int *)(v4))[3] ) /*0x5b4139*/
  {
    v6 = v5 < v3; /*0x5b413e*/
    goto LABEL_5; /*0x5b413e*/
  }
  if ( v4 ) /*0x5b419d*/
    return (void *)((unsigned int *)(v4))[3]; /*0x5b41ac*/
  LABEL_9:
  ((CCFileClass *)((CCFileClass *)&v14.buffer))->Construct(Source); /*0x5b414d*/
  if ( (uint8_t)CCFileClass::Open((CCFileClass *)&v14.buffer, 0) ) /*0x5b415c*/
  {
    v8 = (unsigned int *)((char *)((unsigned int *)RA2_OPNEW(0x10u)));
    v9 = (unsigned int *)((unsigned int)(v8));
    v8[2] = (unsigned int)((char *)(v3));
    v10 = (char *)(dword_ABF00C);
    if ( dword_ABF00C ) /*0x5b41c4*/
    {
      if ( *((unsigned int *)dword_ABF00C + 2) < v3 ) /*0x5b41d6*/
        v10 = (char *)dword_ABF00C + 4; /*0x5b41d8*/
      InsertIntoHashTree(v8,(unsigned int *)(v10)); /*0x5b41dd*/
    }
    else
    {
      dword_ABF00C = (unsigned int)(v8);
      *v8 = 0; /*0x5b41cc*/
      v8[1] = 0; /*0x5b41ce*/
    }
    if ( aP1 || strstr(Str, Ext) ) /*0x5b41f5*/
    {
      v12 = (gamemd::ObjectClass *)((void *)((ObjectClass *)RA2_OPNEW(0x24u)));
      if ( v12 ) /*0x5b421a*/
        SHPFile = (gamemd::AbstractClass **)(LoadSHPFile((int)(v12), Source)); /*0x5b4224*/
      else
        SHPFile = 0; /*0x5b4228*/
    }
    else
    {
      SHPFile = (unsigned int)((void *)(CCFileClass::ReadEntireFile((CCFileClass *)&v14.buffer)));
    }
    v9[3] = (unsigned int)((gamemd::AbstractClass **)(SHPFile));
    v14.buffer = (unsigned char)((gamemd::AbstractClass **)((int)&CCFileClass_vftable));
    v16 = 0; /*0x5b4239*/
    ((Vector *)((int)v15))->Clear(); /*0x5b4240*/
    v14.buffer = (int)&off_7E1668; /*0x5b4249*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14.buffer); /*0x5b4251*/
    return SHPFile; /*0x5b4256*/
  }
  else
  {
    v14.buffer = (int)&CCFileClass_vftable; /*0x5b4169*/
    v16 = 0; /*0x5b4171*/
    ((Vector *)((int)v15))->Clear(); /*0x5b4178*/
    v14.buffer = (int)&off_7E1668; /*0x5b4181*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v14.buffer); /*0x5b4189*/
    return 0; /*0x5b418e*/
  }
}
}
// 0x5B4430
namespace gamemd {
ObjectClass * * FileInfoCache_Lookup(const char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4, unsigned int * a5)
{
  int v5; // eax
  unsigned int *v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v14[3]; // [esp+18h] [ebp-110h] BYREF
  char String[260]; // [esp+24h] [ebp-104h] BYREF

  if ( !a1 ) /*0x5b4442*/
    return 0; /*0x5b4442*/
  strcpy(String, a1); /*0x5b4462*/
  _strupr(String); /*0x5b4470*/
  memset(v14, 0, sizeof(v14)); /*0x5b4490*/
  v5 = Checksummer::Add_Buffer(v14, (uint8_t *)String, strlen(String)); /*0x5b449c*/
  v6 = (unsigned int *)dword_ABEFE0; /*0x5b44a1*/
  LABEL_3:
  while ( 2 ) /*0x5b44c0*/
  {
    if ( !v6 || !v6[1] || !v6[2] ) /*0x5b44c0*/
      return 0; /*0x5b4580*/
    v7 = v6[5]; /*0x5b44cb*/
    v8 = v6[8]; /*0x5b44ce*/
    if ( v7 <= 0 ) /*0x5b44d3*/
      goto LABEL_14; /*0x5b44d3*/
    while ( 1 ) /*0x5b44df*/
    {
      v9 = *(unsigned int *)(v8 + 12 * (v7 / 2)); /*0x5b44df*/
      v10 = v8 + 12 * (v7 / 2); /*0x5b44e2*/
      if ( v9 <= v5 ) /*0x5b44e7*/
        break; /*0x5b44e7*/
      v7 /= 2; /*0x5b44e9*/
  LABEL_11:
      if ( v7 <= 0 ) /*0x5b44fb*/
      {
        v6 = (unsigned int *)v6[1]; /*0x5b44fd*/
        goto LABEL_3; /*0x5b4501*/
      }
    }
    if ( v9 != v5 ) /*0x5b44ed*/
    {
      v8 = v10 + 12; /*0x5b44ef*/
      v7 += -1 - v7 / 2; /*0x5b44f7*/
      goto LABEL_11; /*0x5b44f7*/
    }
    if ( !v10 ) /*0x5b4505*/
    {
  LABEL_14:
      v6 = (unsigned int *)v6[1]; /*0x5b4507*/
      continue; /*0x5b450b*/
    }
    break;
  }
  if ( a3 ) /*0x5b4516*/
    *a3 = (unsigned int)(v6); /*0x5b4518*/
  if ( a5 ) /*0x5b4523*/
    *a5 = *(unsigned int *)(v10 + 8); /*0x5b4528*/
  if ( a2 ) /*0x5b4530*/
    *a2 = 0; /*0x5b4532*/
  if ( a4 ) /*0x5b4541*/
    *a4 = *(unsigned int *)(v10 + 4); /*0x5b4546*/
  if ( a2 ) /*0x5b454a*/
  {
    v11 = v6[9]; /*0x5b454c*/
    if ( v11 ) /*0x5b4551*/
      *a2 = v11 + *(unsigned int *)(v10 + 4); /*0x5b4558*/
  }
  if ( !v6[9] ) /*0x5b455a*/
  {
    if ( a4 ) /*0x5b4563*/
      *a4 += v6[7]; /*0x5b456c*/
  }
  return (gamemd::ObjectClass **)(1);
}
}
// 0x5B4B10
namespace gamemd {
void GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebp
  HWND v6; // eax
  HWND DlgItem; // eax
  HWND v8; // esi
  char *v9; // eax
  HWND v10; // eax
  HWND v11; // esi
  LRESULT v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  unsigned int v15;
  int v16; // [esp-4h] [ebp-338h] BYREF
  wchar_t v17[22]; // [esp+Ch] [ebp-328h] BYREF
  unsigned int v18[62]; // [esp+38h] [ebp-2FCh] BYREF
  int16_t v19; // [esp+130h] [ebp-204h]
  wchar_t lParam[256]; // [esp+134h] [ebp-200h] BYREF

  result = (int)(BaseDialogProc((gamemd::SkirmishDialog *)(hWnd), a2, a3, a4));
  if ( result ) /*0x5b4b3f*/
    return result; /*0x5b4b3f*/
  WindowLongA = GetWindowLongA(hWnd, 8); /*0x5b4b4f*/
  switch ( a2 ) /*0x5b4b56*/
  {
    case 2u: /*0x5b4b56*/
      v15 = g_UIControlState; /*0x5b4ead*/
      if ( g_UIControlState ) /*0x5b4eb5*/
      {
        ComPtr::Dtor(g_UIControlState); /*0x5b4eb9*/
        RA2_OPDEL(v15); /*0x5b4ebf*/
        g_UIControlState = 0; /*0x5b4ec7*/
      }
      return 0; /*0x5b4ec7*/
    case 0xFu: /*0x5b4b56*/
      if ( g_UIControlState ) /*0x5b4e8d*/
        ((Skirmish *)(g_UIControlState))->RenderPreview(hWnd); /*0x5b4e90*/
      ValidateRect(hWnd, 0); /*0x5b4e98*/
      return 0; /*0x5b4ea1*/
    case 0x111u: /*0x5b4b56*/
      if ( (uint16_t)a3 <= 0x540u ) /*0x5b4b7c*/
      {
        if ( (uint16_t)a3 == 1344 ) /*0x5b4b82*/
        {
          if ( IDA_HIWORD(a3) == 1281 ) /*0x5b4c4b*/
          {
            DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1344); /*0x5b4c5a*/
            v8 = DlgItem; /*0x5b4c60*/
            if ( DlgItem ) /*0x5b4c64*/
            {
              SendMessageA(DlgItem, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b4c83*/
              SendMessageA(v8, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b4c92*/
              if ( wcslen(lParam) ) /*0x5b4c9c*/
              {
                if ( lParam[0] != 13 ) /*0x5b4cb5*/
                {
                  ((WideString *)(lParam))->Trim(); /*0x5b4cc2*/
                  if ( &v16 != (int *)-312 ) /*0x5b4cd0*/
                  {
                    memset(v18, 0, sizeof(v18)); /*0x5b4ce5*/
                    v19 = 0; /*0x5b4ce7*/
                    v18[0] = 104; /*0x5b4cf3*/
                    strcpy((char *)&v18[1],(const char *)(unk_A8B380)); /*0x5b4d11*/
                    IDA_LOBYTE(v18[6]) = dword_A8B394; /*0x5b4d26*/
                    wcscpy((wchar_t *)((char *)&v18[6] + 1), lParam); /*0x5b4d2a*/
                    ((Stream *)((int)&unk_A8EA70))->WriteBlock((int)v18, 250, 1); /*0x5b4d43*/
                    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b4d4d*/
                    v9 = (char *)(CharToWideString((unsigned char *)(unk_A8B380))); /*0x5b4d57*/
                    UI_Setup((wchar_t *)v9, dword_A8B394, (int)lParam); /*0x5b4d6e*/
                    return 0; /*0x5b4d7f*/
                  }
                }
              }
            }
          }
          return 0; /*0x5b4cd0*/
        }
        if ( (uint16_t)a3 != 1 ) /*0x5b4b89*/
        {
          if ( (uint16_t)a3 == 2 ) /*0x5b4b8c*/
          {
            if ( !IDA_HIWORD(a3) ) /*0x5b4bbb*/
            {
              ((Game *)(WindowLongA))->processStartup(); /*0x5b4bc6*/
              *(unsigned int *)(WindowLongA + 4) = 2; /*0x5b4bcb*/
              return 0; /*0x5b4bde*/
            }
          }
          else if ( (uint16_t)a3 == 1029 && IDA_HIWORD(a3) == 1 ) /*0x5b4b9f*/
          {
            ModemGame::AdvanceTauntCommand(WindowLongA); /*0x5b4ba7*/
            return 0; /*0x5b4bb8*/
          }
          return 0; /*0x5b4b9f*/
        }
        if ( !IDA_HIWORD(a3) ) /*0x5b4be1*/
        {
          v6 = GetDlgItem(*(HWND *)WindowLongA, 1); /*0x5b4bf4*/
          if ( v6 ) /*0x5b4bfc*/
            EnableWindow(v6, 0); /*0x5b4c01*/
          memset(v18, 0, sizeof(v18)); /*0x5b4c13*/
          v19 = 0; /*0x5b4c1e*/
          v18[0] = 116; /*0x5b4c26*/
          ((Stream *)((int)&unk_A8EA70))->WriteBlock((int)v18, 250, 1); /*0x5b4c2e*/
          return 0; /*0x5b4c3f*/
        }
        return 0; /*0x5b4ed1*/
      }
      if ( (uint16_t)a3 != 1473 ) /*0x5b4d87*/
      {
        if ( (uint16_t)a3 == 1639 && IDA_HIWORD(a3) == 1 ) /*0x5b4d9e*/
        {
          v10 = GetDlgItem(*(HWND *)WindowLongA, 1639); /*0x5b4da9*/
          v11 = v10; /*0x5b4daf*/
          if ( v10 ) /*0x5b4db3*/
          {
            v12 = SendMessageA(v10, 0x147u, 0, 0); /*0x5b4dc9*/
            if ( v12 != -1 ) /*0x5b4dce*/
            {
              dword_A8B3AC = SendMessageA(v11, 0x150u, v12, 0); /*0x5b4ddf*/
              *(unsigned char *)(WindowLongA + 9) = 1; /*0x5b4de4*/
              *(unsigned char *)(WindowLongA + 8) = 1; /*0x5b4de7*/
              return 0; /*0x5b4df6*/
            }
          }
        }
        return 0; /*0x5b4dce*/
      }
      if ( IDA_HIWORD(a3) != 1281 && IDA_HIWORD(a3) != 768 ) /*0x5b4e08*/
        return 0; /*0x5b4e08*/
      v13 = GetDlgItem(*(HWND *)WindowLongA, 1473); /*0x5b4e17*/
      v14 = v13; /*0x5b4e1d*/
      if ( !v13 ) /*0x5b4e21*/
        return 0; /*0x5b4e21*/
      SendMessageA(v13, 0x4B3u, 0x15u, (LPARAM)v17); /*0x5b4e3a*/
      ((WideString *)(v17))->Trim(); /*0x5b4e40*/
      if ( IDA_HIWORD(a3) != 768 ) /*0x5b4e4a*/
        SendMessageA(v14, 0x4B2u, 0, (LPARAM)v17); /*0x5b4e59*/
      CopyWideToChar(unk_A8B380, (char *)v17, -1); /*0x5b4e66*/
      *(unsigned char *)(WindowLongA + 9) = 1; /*0x5b4e72*/
      *(unsigned char *)(WindowLongA + 8) = 1; /*0x5b4e75*/
      return 0; /*0x5b4e70*/
    default:
      return 0; /*0x5b4b6a*/
  }
}
}
// 0x5B67F0
namespace gamemd {
AbstractClass * * ApplyGameOptions(CampaignScore * aP0)
{
  int (*)(...) v1;
  int (*)(...) v2;
  int (*)(...) v3;
  int v5; // edx
  int v6; // eax
  int v7; // edx
  void *vtable0; // ecx
  bool v9; // al
  int v10; // edi
  int v11; // esi
  ObjectClass *v13; // [esp+0h] [ebp-Ch]

  if ( stru_A8B250.__pad_0[8] == (aP0->inOpenToppedTransport & 1) ) /*0x5b6807*/
  {
    v1 = aP0->wasFallingDown; /*0x5b680d*/
    if ( dword_A8B320 == ((v1 & 4) != 0) && byte_A8B31D == ((v1 & 2) != 0) ) /*0x5b6836*/
    {
      v2 = aP0->inOpenToppedTransport; /*0x5b683c*/
      if ( stru_A8B250.__pad_0[16] == ((v2 & 2) != 0) /*0x5b6920*/
        && stru_A8B250.__pad_0[17] == ((v2 & 4) != 0)
        && byte_A8B31F == ((v1 & 8) != 0)
        && *(unsigned int *)&stru_A8B250.__pad_0[36] == aP0->onBridge
        && *(unsigned int *)&stru_A8B250.__pad_0[40] == aP0->isFallingDown
        && g_RulesInitConfig == aP0->q08A
        && *(unsigned int *)&stru_A8B250.__pad_0[12] == *(unsigned int *)(aP0 + 126)
        && *(unsigned int *)&stru_A8B250.__pad_0[32] == aP0->q08B
        && *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 432) == *(unsigned int *)(aP0 + 146)
        && ApplyGameOptions_Helper((ObjectClass *)dword_A8E960, (unsigned int *)(aP0 + 150))
        && *(unsigned int *)&stru_A8B250.__pad_0[24] == aP0->u32_A2 )
      {
        v3 = aP0->wasFallingDown; /*0x5b6926*/
        if ( stru_A8B250.__pad_0[18] == ((v3 & 0x10) != 0) /*0x5b69da*/
          && stru_A8B250.__pad_0[19] == ((v3 & 0x20) != 0)
          && stru_A8B250.__pad_0[20] == ((v3 & 0x40) != 0)
          && stru_A8B250.__pad_0[28] == ((v3 & 0x80) != 0)
          && !_strcmpi(byte_A8B8E0, (char *)(aP0 + 163))
          && !strcmp(&byte_A8BAE2, (const char *)(aP0 + 176))
          && dword_A8BB04 == *(unsigned int *)(aP0 + 158) )
        {
          return 0; /*0x5b69de*/
        }
      }
    }
  }
  Debug::Log(); /*0x5b69e9*/
  stru_A8B250.__pad_0[8] = aP0->inOpenToppedTransport & 1; /*0x5b69fa*/
  dword_A8B320 = (aP0->wasFallingDown & 4) != 0; /*0x5b6a0c*/
  v5 = dword_A8E960[0]; /*0x5b6a18*/
  IDA_BYTE1(v5) = IDA_BYTE1(dword_A8E960[0]) & 0x7F; /*0x5b6a22*/
  stru_A8B250.__pad_0[16] = (aP0->inOpenToppedTransport & 2) != 0; /*0x5b6a25*/
  dword_A8E960[0] = v5 | ((aP0->inOpenToppedTransport & 2) << 14); /*0x5b6a38*/
  stru_A8B250.__pad_0[17] = (aP0->inOpenToppedTransport & 4) != 0; /*0x5b6a49*/
  byte_A8B31F = (aP0->wasFallingDown & 8) != 0; /*0x5b6a5c*/
  byte_A8B31D = (aP0->wasFallingDown & 2) != 0; /*0x5b6a6f*/
  *(unsigned int *)&stru_A8B250.__pad_0[36] = aP0->onBridge; /*0x5b6a7b*/
  *(unsigned int *)&stru_A8B250.__pad_0[40] = aP0->isFallingDown; /*0x5b6a88*/
  g_RulesInitConfig = aP0->q08A; /*0x5b6a96*/
  *(unsigned int *)&stru_A8B250.__pad_0[12] = *(unsigned int *)(aP0 + 126); /*0x5b6a9f*/
  *(unsigned int *)&stru_A8B250.__pad_0[32] = aP0->q08B; /*0x5b6aaa*/
  *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 432) = *(unsigned int *)(aP0 + 146); /*0x5b6ab6*/
  v6 = *(unsigned int *)(aP0 + 150); /*0x5b6abc*/
  dword_A8E960[0] = v6; /*0x5b6ac4*/
  IDA_LOBYTE(v6) = v6 | 0xC0; /*0x5b6acf*/
  *(unsigned int *)&stru_A8B250.__pad_0[24] = aP0->u32_A2; /*0x5b6ad1*/
  stru_A8EB00.ObjectTypeClass[24] = *(unsigned int *)&stru_A8B250.__pad_0[24]; /*0x5b6ad7*/
  stru_A8B250.__pad_0[18] = (aP0->wasFallingDown & 0x10) != 0; /*0x5b6ae9*/
  stru_A8B250.__pad_0[19] = (aP0->wasFallingDown & 0x20) != 0; /*0x5b6afb*/
  stru_A8B250.__pad_0[20] = (aP0->wasFallingDown & 0x40) != 0; /*0x5b6b0d*/
  v7 = aP0->wasFallingDown >> 7; /*0x5b6b19*/
  dword_A8E960[0] = v6; /*0x5b6b1c*/
  stru_A8B250.__pad_0[28] = v7 & 1; /*0x5b6b29*/
  vtable0 = dword_A8B230->vtable0; /*0x5b6b2f*/
  IDA_BYTE1(vtable0) = ((uint16_t)dword_A8B230->vtable0 >> 8) & 0xFB; /*0x5b6b31*/
  dword_A8B230->vtable0 = vtable0; /*0x5b6b34*/
  byte_A8B31C = 1; /*0x5b6b3b*/
  nullsub_37(v13); /*0x5b6b42*/
  if ( _strcmpi(byte_A8B8E0, (char *)(aP0 + 163)) /*0x5b6ba4*/
    || _strcmpi(&byte_A8BAE2, (char *)(aP0 + 176))
    || v9 != ((aP0->inOpenToppedTransport & 0x10) != 0)
    || dword_A8BB04 != *(unsigned int *)(aP0 + 158)
    || !g_abs_A8B322[0] )
  {
    Debug::Log(); /*0x5b6baf*/
    strcpy(byte_A8B8E0, (const char *)(aP0 + 163)); /*0x5b6bce*/
    strcpy(&byte_A8BAE2, (const char *)(aP0 + 176)); /*0x5b6bf4*/
    v9 = (aP0->inOpenToppedTransport & 0x10) != 0; /*0x5b6c0b*/
    v9 = v9; /*0x5b6c12*/
    dword_A8BB04 = *(unsigned int *)(aP0 + 158); /*0x5b6c1d*/
    if ( !strcmp(byte_A8B8E0, &((char *)&stru_82BA00)) && v9 || (v10 = 0, dword_A8B8D8 <= 0) ) /*0x5b6c5d*/
    {
  LABEL_33:
      wcscpy(g_abs_A8B322, (const wchar_t *)(aP0 + 38)); /*0x5b6c86*/
    }
    else
    {
      while ( 1 ) /*0x5b6c64*/
      {
        v11 = *(unsigned int *)(dword_A8B8CC + 4 * v10); /*0x5b6c64*/
        if ( !_strcmpi(byte_A8B8E0, (char *)(v11 + 88)) ) /*0x5b6c70*/
          break; /*0x5b6c70*/
        if ( ++v10 >= dword_A8B8D8 ) /*0x5b6c84*/
          goto LABEL_33; /*0x5b6c84*/
      }
      wcscpy(g_abs_A8B322, (const wchar_t *)v11); /*0x5b6cc4*/
    }
    g_UIControlState = g_UIControlState; /*0x5b6c94*/
    if ( g_UIControlState ) /*0x5b6c9f*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b6ca3*/
      RA2_OPDEL(g_UIControlState); /*0x5b6ca9*/
      g_UIControlState = 0; /*0x5b6cb1*/
    }
  }
  return 1; /*0x5b69dc*/
}
}
// 0x5BB290
namespace gamemd {
LZOPipe * * __usercall GenerateRandomMapPreview(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  void *v6; // edi
  int v7; // esi
  DWORD v8; // esi
  size_t *v9; // [esp+0h] [ebp-290h]
  signed int Buffer; // [esp+10h] [ebp-280h] BYREF
  int Ticks; // [esp+14h] [ebp-27Ch]
  int v12; // [esp+18h] [ebp-278h]
  int v13; // [esp+1Ch] [ebp-274h]
  int v14; // [esp+24h] [ebp-26Ch]
  Pipe v15; // [esp+2Ch] [ebp-264h] BYREF
  int v16; // [esp+44h] [ebp-24Ch]
  int v17; // [esp+48h] [ebp-248h] BYREF
  LPCSTR v18[9]; // [esp+4Ch] [ebp-244h] BYREF
  Pipe v19; // [esp+70h] [ebp-220h] BYREF
  int v20[62]; // [esp+98h] [ebp-1F8h] BYREF
  int16_t v21; // [esp+190h] [ebp-100h]
  int v22[63]; // [esp+194h] [ebp-FCh] BYREF

  Ticks = Timer::GetTicks(); /*0x5bb2af*/
  v13 = 0; /*0x5bb2b3*/
  if ( !_strcmpi(byte_A8B8E0, aRandmapSed) ) /*0x5bb2b7*/
  {
    Debug::Log(); /*0x5bb2cc*/
    memset(v20, 0, sizeof(v20)); /*0x5bb2e2*/
    v21 = 0; /*0x5bb2e4*/
    v20[0] = 117; /*0x5bb2fa*/
    ((Stream *)(&unk_A8EA70.vtable0))->WriteBlock((int)v20, 250, 1); /*0x5bb305*/
    v13 = 600; /*0x5bb31c*/
    Ticks = Timer::GetTicks(); /*0x5bb325*/
    v12 = v14; /*0x5bb329*/
    while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x5bb337*/
    {
      v1 = v13; /*0x5bb33d*/
      if ( Ticks != -1 ) /*0x5bb343*/
      {
        v2 = Timer::GetTicks() - Ticks; /*0x5bb34e*/
        if ( v2 >= v13 ) /*0x5bb354*/
          break; /*0x5bb354*/
        v1 = v13 - v2; /*0x5bb356*/
      }
      if ( !v1 ) /*0x5bb35a*/
        break; /*0x5bb35a*/
      Event::Dispatch(); /*0x5bb35c*/
    }
    Ticks = Timer::GetTicks(); /*0x5bb36f*/
    v12 = v14; /*0x5bb385*/
    v13 = 1800; /*0x5bb389*/
    while ( 1 ) /*0x5bb392*/
    {
      Event::Dispatch(); /*0x5bb392*/
      if ( ((ObjectTypeClass *)(&unk_A8EA70))->CreateInstance((int)v22, (int)&v17) > 0 && v22[0] == 118 ) /*0x5bb3b9*/
        break; /*0x5bb3b9*/
      v3 = v13; /*0x5bb3bf*/
      if ( Ticks != -1 ) /*0x5bb3c5*/
      {
        v4 = Timer::GetTicks() - Ticks; /*0x5bb3d0*/
        if ( v4 >= v13 ) /*0x5bb3d6*/
          goto LABEL_15; /*0x5bb3d6*/
        v3 = v13 - v4; /*0x5bb3d8*/
      }
      if ( !v3 ) /*0x5bb3dc*/
      {
  LABEL_15:
        Debug::Log(); /*0x5bb3de*/
        return; /*0x5bb3f5*/
      }
    }
    Buffer = 0; /*0x5bb403*/
    v5 = Palette::Preview_Generate((Palette *)g_UIControlState, 64, (int)&Buffer, v9); /*0x5bb410*/
    Debug::Log(); /*0x5bb418*/
    v6 = (void *)RA2_OPNEW(4 * Buffer); /*0x5bb435*/
    v15.Pipe_field_0x04 = 0; /*0x5bb437*/
    v15.Pipe_field_0x08 = 0; /*0x5bb448*/
    *(unsigned int *)v15.__pad_0 = (void*)&Pipe_vftable; /*0x5bb44c*/
    Buffer::Init((Buffer *)&v15.Pipe_field_0x0C, (int)v6, 4 * Buffer); /*0x5bb454*/
    v16 = 0; /*0x5bb463*/
    *(unsigned int *)v15.__pad_0 = (void*)&BufferPipe_vftable; /*0x5bb467*/
    LZOPipe::Constructor((LZOPipe *)&v19, 0, 0x2000); /*0x5bb46f*/
    ((Pipe *)(&v19))->SetDelegate((int)&v15); /*0x5bb47d*/
    v7 = Compression::Read((int *)v19.__pad_0, v5, Buffer); /*0x5bb499*/
    v8 = (*(int (**)(Pipe *))(*(unsigned int *)v19.__pad_0 + 4))(&v19) + v7; /*0x5bb49e*/
    Debug::Log(); /*0x5bb4a6*/
    RawFileClass::Construct((RawFileClass *)v18, (int)aPreviewBin); /*0x5bb4b7*/
    if ( (uint8_t)FileClass::Open((RawFileClass *)v18, 0) ) /*0x5bb4c1*/
      FileClass::Delete((RawFileClass *)v18); /*0x5bb4ce*/
    ((FileClass *)((RawFileClass *)v18))->Open2((const CHAR *)2); /*0x5bb4d9*/
    ((FileClass *)((RawFileClass *)v18))->Write2(&Buffer, 4u); /*0x5bb4e9*/
    ((FileClass *)((RawFileClass *)v18))->Write2(v6, v8); /*0x5bb4f4*/
    FileClass::CloseHandle((RawFileClass *)v18); /*0x5bb4fd*/
    RA2_OPDEL(v6); /*0x5bb503*/
    Debug::Log(); /*0x5bb50d*/
    SendNetworkFile(aPreviewBin, 1, 0, 0); /*0x5bb521*/
    RawFileClass::Dtor((RawFileClass *)v18); /*0x5bb52a*/
    LZOPipe::Destructor((LZOPipe *)&v19); /*0x5bb533*/
    ((Vector *)((int)&v15.Pipe_field_0x0C))->Clear(); /*0x5bb53c*/
    Pipe::Dtor(&v15); /*0x5bb545*/
  }
}
}
// 0x5BC6E0
namespace gamemd {
void AudioDebug_DlgProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  char *v9; // ecx
  int Index; // eax
  void *Enabled; // eax
  char *v12; // eax
  unsigned int *v13; // ecx
  unsigned char *v14; // ecx
  int v15; // eax
  unsigned char *v16; // ecx
  int v17; // edi
  unsigned int *v18; // ebx
  unsigned char *v19; // edx
  unsigned int *v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // edi
  unsigned int *v24; // ebx
  unsigned char *v25; // edx
  unsigned int *v26; // eax
  int v27; // esi
  int v28; // [esp-4h] [ebp-50h]
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( a2 == 15 ) /*0x5bc6ed*/
  {
    InvalidateRect(hWnd, 0, 1); /*0x5bc6f8*/
    BeginPaint(hWnd, &Paint); /*0x5bc704*/
    if ( dword_ABF23C ) /*0x5bc712*/
    {
      if ( byte_ABF23A ) /*0x5bc71b*/
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc732*/
    }
    EndPaint(hWnd, &Paint); /*0x5bc73d*/
    return 1; /*0x5bc74e*/
  }
  if ( a2 == 258 ) /*0x5bc756*/
  {
    if ( !dword_ABF224 ) /*0x5bc763*/
    {
      dword_ABF224 = (int)unk_ABF198; /*0x5bc76a*/
      AudioController::Init(unk_ABF198); /*0x5bc770*/
    }
    switch ( a3 ) /*0x5bc78d*/
    {
      case ',': /*0x5bc78d*/
      case '<': /*0x5bc78d*/
        v15 = *(unsigned int *)(dword_ABF23C + 10008) + 1; /*0x5bc9d1*/
        if ( *(unsigned int *)(dword_ABF23C + 10008) == 7 ) /*0x5bc9d5*/
          v15 = 0; /*0x5bc9d7*/
        v16 = (unsigned char *)dword_ABF168[v15]; /*0x5bc9d9*/
        v17 = 0; /*0x5bc9e0*/
        dword_ABF23C = (int)v16; /*0x5bc9e2*/
        v18 = v16 + 2000; /*0x5bc9e8*/
        do /*0x5bca11*/
        {
          v19 = &v16[v17]; /*0x5bc9ee*/
          v20 = v18; /*0x5bc9f1*/
          v21 = 80; /*0x5bc9f3*/
          do /*0x5bca08*/
          {
            *v19 = 32; /*0x5bc9f8*/
            *v20 = 0; /*0x5bc9fb*/
            v20 += 25; /*0x5bca01*/
            v19 += 25; /*0x5bca04*/
            --v21; /*0x5bca07*/
          }
          while ( v21 ); /*0x5bca08*/
          ++v17; /*0x5bca0a*/
          ++v18; /*0x5bca0b*/
        }
        while ( v17 < 25 ); /*0x5bca11*/
        goto LABEL_54; /*0x5bca11*/
      case '.': /*0x5bc78d*/
      case '>': /*0x5bc78d*/
        v22 = *(unsigned int *)(dword_ABF23C + 10008) - 1; /*0x5bca38*/
        if ( v22 < 0 ) /*0x5bca39*/
          v22 = 7; /*0x5bca3b*/
        v16 = (unsigned char *)dword_ABF168[v22]; /*0x5bca40*/
        v23 = 0; /*0x5bca47*/
        dword_ABF23C = (int)v16; /*0x5bca49*/
        v24 = v16 + 2000; /*0x5bca4f*/
        do /*0x5bca78*/
        {
          v25 = &v16[v23]; /*0x5bca55*/
          v26 = v24; /*0x5bca58*/
          v27 = 80; /*0x5bca5a*/
          do /*0x5bca6f*/
          {
            *v25 = 32; /*0x5bca5f*/
            *v26 = 0; /*0x5bca62*/
            v26 += 25; /*0x5bca68*/
            v25 += 25; /*0x5bca6b*/
            --v27; /*0x5bca6e*/
          }
          while ( v27 ); /*0x5bca6f*/
          ++v23; /*0x5bca71*/
          ++v24; /*0x5bca72*/
        }
        while ( v23 < 25 ); /*0x5bca78*/
  LABEL_54:
        v16[10036] = 1; /*0x5bca13*/
        Text::DrawRepeated(v16, 0, 0, 80, 25); /*0x5bca22*/
        goto LABEL_45; /*0x5bca27*/
      case '1': /*0x5bc78d*/
      case '2': /*0x5bc78d*/
      case '3': /*0x5bc78d*/
      case '4': /*0x5bc78d*/
        dword_ABF22C = a3 - 49; /*0x5bc799*/
        return 0; /*0x5bc7a5*/
      case 'A': /*0x5bc78d*/
      case 'a': /*0x5bc78d*/
        v14 = (unsigned char *)dword_ABF17C; /*0x5bc987*/
        goto LABEL_44; /*0x5bc987*/
      case 'E': /*0x5bc78d*/
      case 'e': /*0x5bc78d*/
        v7 = dword_ABF220; /*0x5bc80f*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc820*/
        {
          v7 = 0; /*0x5bc822*/
          dword_ABF220 = 0; /*0x5bc824*/
        }
        UpdateThemeManager(v7, 2, dword_ABF22C); /*0x5bc835*/
        goto LABEL_15; /*0x5bc835*/
      case 'I': /*0x5bc78d*/
      case 'i': /*0x5bc78d*/
        v14 = (unsigned char *)dword_ABF184; /*0x5bc9b6*/
        goto LABEL_44; /*0x5bc9bc*/
      case 'L': /*0x5bc78d*/
      case 'l': /*0x5bc78d*/
        if ( AudioSource::Get((int **)dword_ABF224) ) /*0x5bc862*/
        {
          AudioFile::Stop((unsigned int *)dword_ABF224); /*0x5bc871*/
          return 0; /*0x5bc878*/
        }
        else
        {
          v28 = dword_ABF224; /*0x5bc881*/
          v9 = aTestenvelopefs; /*0x5bc887*/
  LABEL_31:
          Index = VocClass::FindIndex(v9); /*0x5bc88c*/
          PlayVocClass(Index, 0x2000, 1.0, v28); /*0x5bc898*/
          return 0; /*0x5bc89f*/
        }
      case 'M': /*0x5bc78d*/
      case 'm': /*0x5bc78d*/
        v14 = (unsigned char *)dword_ABF180; /*0x5bc9be*/
  LABEL_44:
        dword_ABF23C = (int)v14; /*0x5bc98d*/
        TextBuffer::Init(v14); /*0x5bc993*/
  LABEL_45:
        Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc998*/
        return 0; /*0x5bc9b3*/
      case 'N': /*0x5bc78d*/
      case 'n': /*0x5bc78d*/
        dword_ABF21C = dword_ABF21C == 0; /*0x5bc968*/
        return 0; /*0x5bc974*/
      case 'O': /*0x5bc78d*/
      case 'o': /*0x5bc78d*/
        v8 = dword_ABF220; /*0x5bc837*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc848*/
        {
          v8 = 0; /*0x5bc84a*/
          dword_ABF220 = 0; /*0x5bc84c*/
        }
        UpdateThemeManager(v8, -1, -1); /*0x5bc857*/
        goto LABEL_15; /*0x5bc857*/
      case 'Q': /*0x5bc78d*/
      case 'q': /*0x5bc78d*/
        v5 = dword_ABF220; /*0x5bc7a8*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7b9*/
        {
          v5 = 0; /*0x5bc7bb*/
          dword_ABF220 = 0; /*0x5bc7bd*/
        }
        UpdateThemeManager(v5, 1, dword_ABF22C); /*0x5bc7ce*/
        goto LABEL_15; /*0x5bc7ce*/
      case 'S': /*0x5bc78d*/
      case 's': /*0x5bc78d*/
        sub_406EE0(); /*0x5bc977*/
        return 0; /*0x5bc984*/
      case 'T': /*0x5bc78d*/
      case 't': /*0x5bc78d*/
        v28 = 0; /*0x5bc8a8*/
        v9 = aTesteffect; /*0x5bc8af*/
        goto LABEL_31; /*0x5bc8b4*/
      case 'W': /*0x5bc78d*/
      case 'w': /*0x5bc78d*/
        v6 = dword_ABF220; /*0x5bc7e9*/
        if ( dword_ABF220 > 16 || dword_ABF220 >= g_InfantrySelectState ) /*0x5bc7fa*/
        {
          v6 = 0; /*0x5bc7fc*/
          dword_ABF220 = 0; /*0x5bc7fe*/
        }
        UpdateThemeManager(v6, 0, dword_ABF22C); /*0x5bc80d*/
  LABEL_15:
        ++dword_ABF220; /*0x5bc7d3*/
        return 0; /*0x5bc7e6*/
      case '[': /*0x5bc78d*/
        if ( dword_ABF228 >= 5 ) /*0x5bc8bd*/
          return 0; /*0x5bc8bd*/
        Enabled = Audio::GetEnabled(); /*0x5bc8c6*/
        v12 = AudioStream::Constructor(Enabled, 0x1388u); /*0x5bc8cd*/
        *(&dword_ABF114 + dword_ABF228) = v12; /*0x5bc8da*/
        if ( !v12 ) /*0x5bc8e1*/
          return 0; /*0x5bc8e1*/
        if ( ThreadAudioMixerMain(v12, aIntroWav, 1) ) /*0x5bc8ec*/
        {
          ++dword_ABF228; /*0x5bc8fc*/
          return 0; /*0x5bc908*/
        }
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc912*/
        break; /*0x5bc912*/
      case ']': /*0x5bc78d*/
        if ( dword_ABF228 <= 0 ) /*0x5bc929*/
          return 0; /*0x5bc929*/
        v13 = (unsigned int *)*(&dword_ABF110 + dword_ABF228--); /*0x5bc92b*/
        ((Audio *)(v13))->Release(); /*0x5bc938*/
        AudioSample::Destructor(*(&dword_ABF114 + dword_ABF228)); /*0x5bc94a*/
        return 0; /*0x5bc957*/
      default:
        return 0;
    }
    return 0; /*0x5bc912*/
  }
  if ( a2 != 273 ) /*0x5bca98*/
    return 0; /*0x5bc91f*/
  byte_ABF239 = 0; /*0x5bcaa3*/
  if ( dword_ABF240 ) /*0x5bcaac*/
  {
    byte_ABF23A = 0; /*0x5bcab1*/
    ShowWindow(dword_ABF240, 0); /*0x5bcab8*/
  }
  return 1; /*0x5bc743*/
}
}
// 0x5BCE10
namespace gamemd {
int E4Recv_5BCE10::sub_5BCE10(int a2)
{

  char result; // al
  int v4; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // ebp
  char *v8; // edi
  int v9; // ecx
  char *v10; // ebx
  char *v11; // ecx
  int v12; // ebx
  int v13; // eax
  unsigned int *v14; // ebp
  int v15; // ebp
  char *v16; // edi
  int v17; // ebx
  ObjectClass *v18; // ecx
  int v19; // eax
  void **v20; // ebp
  char *v21; // [esp+4h] [ebp-Ch]
  unsigned char *v22; // [esp+8h] [ebp-8h]
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+14h] [ebp+4h]
  int v26; // [esp+14h] [ebp+4h]

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bce10*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bce1d*/
  {
    v4 = *((unsigned int *)this + 2505); /*0x5bce27*/
    v5 = *((unsigned int *)this + 2506); /*0x5bce2d*/
    v6 = *((unsigned int *)this + 2508); /*0x5bce34*/
    v7 = *((unsigned int *)this + 2507); /*0x5bce3b*/
    if ( a2 <= 0 ) /*0x5bce44*/
    {
      if ( a2 < 0 ) /*0x5bcef9*/
      {
        v15 = v4 + v7; /*0x5bcefb*/
        if ( v4 < v15 ) /*0x5bceff*/
        {
          v26 = v6 + v5 - 1; /*0x5bcf08*/
          v16 = (char *)this + 20 * v4 + 5 * v4; /*0x5bcf0f*/
          v17 = 500 - (unsigned int)this; /*0x5bcf1f*/
          v18 = (ObjectClass *)((char *)this + 80 * v4 + 20 * v4 + 4 * v5 + 2000); /*0x5bcf23*/
          v24 = v15 - v4; /*0x5bcf2a*/
          do /*0x5bcf6f*/
          {
            v19 = v26; /*0x5bcf2e*/
            if ( v26 > v5 ) /*0x5bcf34*/
            {
              v20 = &this->AbstractClass + (unsigned int)&v16[v17 + v26]; /*0x5bcf3a*/
              do /*0x5bcf50*/
              {
                --v20; /*0x5bcf41*/
                v16[v19] = v16[v19 - 1]; /*0x5bcf44*/
                v20[1] = *v20; /*0x5bcf4a*/
                --v19; /*0x5bcf4d*/
              }
              while ( v19 > v5 ); /*0x5bcf50*/
              v17 = 500 - (unsigned int)this; /*0x5bcf52*/
            }
            v16[v5] = 32; /*0x5bcf5a*/
            v18->AbstractClass = 0; /*0x5bcf5e*/
            v18 = (ObjectClass *)((char *)v18 + 100); /*0x5bcf64*/
            v16 += 25; /*0x5bcf67*/
            --v24; /*0x5bcf6b*/
          }
          while ( v24 ); /*0x5bcf6f*/
        }
      }
    }
    else if ( v4 < v4 + v7 ) /*0x5bce53*/
    {
      v25 = v6 + v5 - 1; /*0x5bce5d*/
      v8 = (char *)this + 25 * v4; /*0x5bce67*/
      v9 = v5 + v6 + 25 * v4; /*0x5bce6c*/
      v10 = (char *)this + v9 - 1; /*0x5bce72*/
      v11 = (char *)this + 4 * v9 + 1996; /*0x5bce76*/
      v22 = v10; /*0x5bce7d*/
      v23 = *((unsigned int *)this + 2507); /*0x5bce97*/
      v21 = (char *)this + 80 * v4 + 20 * v4 + 4 * v5 + 2000; /*0x5bce9b*/
      v12 = v25; /*0x5bce9f*/
      do /*0x5bcef5*/
      {
        v13 = v5; /*0x5bcea5*/
        if ( v5 < v12 ) /*0x5bcea7*/
        {
          v14 = v21; /*0x5bcea9*/
          do /*0x5bcec4*/
          {
            ++v14; /*0x5bceb1*/
            v8[v13] = v8[v13 + 1]; /*0x5bceb4*/
            *(v14 - 1) = *v14; /*0x5bceba*/
            v12 = v25; /*0x5bcebd*/
            ++v13; /*0x5bcec1*/
          }
          while ( v13 < v25 ); /*0x5bcec4*/
        }
        v11 += 100; /*0x5bced1*/
        *v22 = 32; /*0x5bced4*/
        v22 += 25; /*0x5bceda*/
        *((unsigned int *)v11 - 25) = 0; /*0x5bcee2*/
        v8 += 25; /*0x5bcee9*/
        v21 += 100; /*0x5bceed*/
        --v23; /*0x5bcef1*/
      }
      while ( v23 ); /*0x5bcef5*/
    }
    return Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bcf7b*/
  }
  return result; /*0x5bcf83*/

}
}
// 0x5BDC00
namespace gamemd {
void * sub_5BDC00(int * a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // esi

  v2 = 0; /*0x5bdc17*/
  v3 = 0; /*0x5bdc19*/
  v4 = dword_82D03C[7 * a2]; /*0x5bdc22*/
  if ( v4 == 12345 ) /*0x5bdc2f*/
    v2 = *((int16_t *)dword_ABF294 + 1) / 2; /*0x5bdc3a*/
  if ( v4 == 54321 ) /*0x5bdc42*/
    v2 = *((int16_t *)dword_ABF294 + 1); /*0x5bdc44*/
  v5 = unk_82D040[7 * a2]; /*0x5bdc48*/
  if ( v5 == 12345 ) /*0x5bdc51*/
    v3 = *((int16_t *)dword_ABF294 + 2) / 2; /*0x5bdc5c*/
  if ( v5 == 54321 ) /*0x5bdc64*/
    v3 = *((int16_t *)dword_ABF294 + 2); /*0x5bdc66*/
  *a1 = v2; /*0x5bdc6e*/
  a1[1] = v3; /*0x5bdc70*/
  return a1; /*0x5bdc73*/
}
}
// 0x5BF390
namespace gamemd {
void sub_5BF390(int a1, char a2)
{
  int v3; // ecx
  unsigned int *v4; // eax
  unsigned char *v5; // esi
  int v6; // eax

  if ( a1 >= 0 && a1 < dword_ABF3A0 ) /*0x5bf3a2*/
  {
    v3 = *((unsigned int *)dword_ABF394 + a1); /*0x5bf3ad*/
    if ( !dword_A8B238 ) /*0x5bf3b7*/
    {
      v4 = CreateMovie(v3, DSurface_Sidebar, 0); /*0x5bf3c5*/
      v5 = v4; /*0x5bf3ca*/
      if ( v4 ) /*0x5bf3ce*/
      {
        (*(void (**)(unsigned int *, int, int))(*v4 + 24))(v4, dword_8809D8 - 3, dword_8809DC - 1); /*0x5bf3e5*/
        (*(void (**)(unsigned char *, int (*)()))(*(unsigned int *)v5 + 32))(v5, sub_5BF360); /*0x5bf3f1*/
        v5[4] = a2; /*0x5bf3f4*/
        if ( g_AsyncIOState < dword_B45B60 /*0x5bf42b*/
          || (byte_B45B65 || !dword_B45B60)
          && dword_B45B6C > 0
          && (*(uint8_t (**)(int *, int, unsigned int))(dword_B45B58 + 8))(
               &dword_B45B58,
               dword_B45B60 + dword_B45B6C,
               0) )
        {
          v6 = g_AsyncIOState++; /*0x5bf438*/
          *((unsigned int *)AsyncIO_Instance + v6) = v5; /*0x5bf447*/
        }
      }
    }
  }
}
}
// 0x5BF8C0
namespace gamemd {
ObjectClass * * sub_5BF8C0()
{
  char result; // al
  int v2; // edx
  int v3; // ecx
  int v4; // edi
  unsigned int v5[4]; // [esp+0h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  result = TestBitArray(15); /*0x5bf8c8*/
  if ( !result ) /*0x5bf8cf*/
  {
    GetClientRect(g_hWnd, &Rect); /*0x5bf8e0*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bf8f1*/
    v2 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5bf90c*/
    v3 = Rect.top + *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5bf90f*/
    v4 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5bf911*/
    v5[2] = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5bf914*/
    v5[1] = v3; /*0x5bf91a*/
    v5[0] = Rect.left + v4; /*0x5bf924*/
    v5[3] = v2; /*0x5bf928*/
    return (*((int (**)(DSurface *, unsigned int *, unsigned int, int, unsigned int, int))g_DSurface_Primary->DSurface_field_0x0 /*0x5bf93d*/
            + 2))(
             g_DSurface_Primary,
             v5,
             *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 8),
             g_MissionQueueFrame.localVariables[604] + 36,
             0,
             1);
  }
  return result; /*0x5bf943*/
}
}
// 0x5BF950
namespace gamemd {
AbstractClass * * sub_5BF950()
{
  char result; // al
  unsigned int *v4; // eax
  int v5; // esi
  unsigned int *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // edi
  unsigned int v11[2]; // [esp+24h] [ebp-44h] BYREF
  int v12; // [esp+2Ch] [ebp-3Ch]
  int v13; // [esp+30h] [ebp-38h]
  unsigned int v14[4]; // [esp+34h] [ebp-34h] BYREF
  unsigned int v15[4]; // [esp+44h] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+54h] [ebp-14h] BYREF
  unsigned char v17[4]; // [esp+64h] [ebp-4h] BYREF

  result = TestBitArray(15); /*0x5bf958*/
  if ( !result ) /*0x5bf95f*/
  {
    (*((void (**)(ObjectClass *, int, unsigned int, int, unsigned int, int, int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x5bf983*/
      g_DSurface_Hidden,
      g_MissionQueueFrame.localVariables[604] + 36,
      *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 8),
      g_MissionQueueFrame.localVariables[604] + 36,
      0,
      1,
      a2,
      a3);
    v4 = *(unsigned int **)(g_MissionQueueFrame.localVariables[604] + 72); /*0x5bf98c*/
    if ( v4 ) /*0x5bf991*/
    {
      if ( *v4 ) /*0x5bf997*/
      {
        v5 = v4[4]; /*0x5bf9a0*/
        v6 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v5 + 120))(v5, v17); /*0x5bf9ac*/
        v11[0] = *v6; /*0x5bf9b1*/
        v11[1] = v6[1]; /*0x5bf9b8*/
        v12 = v6[2]; /*0x5bf9bf*/
        v13 = v6[3]; /*0x5bf9cc*/
        v14[0] = ((*((int (**)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 31))(g_DSurface_Hidden) - v12) /*0x5bf9e6*/
               / 2;
        v7 = (*((int (**)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 32))(g_DSurface_Hidden); /*0x5bf9ec*/
        v14[2] = v12; /*0x5bf9fc*/
        v14[1] = v7 - v13; /*0x5bfa04*/
        v14[3] = v13; /*0x5bfa15*/
        (*((void (**)(ObjectClass *, unsigned int *, int, unsigned int *, int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x5bfa21*/
          g_DSurface_Hidden,
          v14,
          v5,
          v11,
          1,
          1);
      }
    }
    GetClientRect(g_hWnd, &Rect); /*0x5bfa30*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x5bfa41*/
    v8 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 64); /*0x5bfa59*/
    v9 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 60); /*0x5bfa5c*/
    v10 = *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 52); /*0x5bfa61*/
    v15[1] = Rect.top + *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 56); /*0x5bfa6f*/
    v15[0] = Rect.left + v10; /*0x5bfa7c*/
    v15[2] = v9; /*0x5bfa80*/
    v15[3] = v8; /*0x5bfa84*/
    return (*((int (**)(DSurface *, unsigned int *, ObjectClass *))g_DSurface_Primary->DSurface_field_0x0 + 2))( /*0x5bfa8f*/
             g_DSurface_Primary,
             v15,
             g_DSurface_Hidden);
  }
  return result; /*0x5bfa95*/
}
}
// 0x5BFAA0
namespace gamemd {
void* * LoadVQMovie(char * Source, int * a2, int a3, int a4, IUnknown * a5, int a6, int a7, int a8, IUnknown * a9, int a10, int a11, char a12)
{
  int v14; // eax
  int v15; // esi
  unsigned int *v16; // eax
  char v17; // al
  char *v19; // eax
  char *v20; // eax
  int Height; // ebp
  int v23; // kr04_4
  int v24; // eax
  int v25; // edx
  int v26; // ebp
  unsigned int *v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // ebp
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // ebp
  int v35; // eax
  int Status; // eax
  int v37; // ebx
  int v38; // eax
  unsigned int *SurfaceTracker; // eax
  unsigned int v40; // [esp-Ch] [ebp-BCh]
  int v41; // [esp+10h] [ebp-A0h]
  int Width; // [esp+10h] [ebp-A0h]
  char (__usercall *v43)@<al>(ObjectClass *, int@<edi>, int@<esi>); // [esp+14h] [ebp-9Ch]
  int v44; // [esp+14h] [ebp-9Ch]
  bool v45; // [esp+1Bh] [ebp-95h]
  int v46; // [esp+1Ch] [ebp-94h] BYREF
  int v47; // [esp+20h] [ebp-90h]
  int v48; // [esp+24h] [ebp-8Ch]
  int v49; // [esp+28h] [ebp-88h]
  int _759EA0; // [esp+2Ch] [ebp-84h]
  char *FullPath; // [esp+30h] [ebp-80h]
  int v52[4]; // [esp+34h] [ebp-7Ch] BYREF
  CCFileClass v53; // [esp+44h] [ebp-6Ch] BYREF
  int v54[3]; // [esp+9Ch] [ebp-14h] BYREF
  int v55; // [esp+A8h] [ebp-8h]

  FullPath = Source; /*0x5bfab2*/
  v43 = 0; /*0x5bfab6*/
  v14 = RA2_OPNEW(0x4Cu); /*0x5bfaba*/
  v15 = v14; /*0x5bfabf*/
  if ( !v14 ) /*0x5bfac6*/
    return 0; /*0x5bfac6*/
  *(unsigned int *)v14 = 0; /*0x5bfacf*/
  *(unsigned int *)(v14 + 4) = -1; /*0x5bfad1*/
  *(unsigned int *)(v14 + 8) = 0; /*0x5bfad8*/
  *(unsigned int *)(v14 + 12) = 0; /*0x5bfadb*/
  *(unsigned int *)(v14 + 16) = 0; /*0x5bfade*/
  *(unsigned int *)(v14 + 20) = 0; /*0x5bfae1*/
  *(unsigned int *)(v14 + 24) = 0; /*0x5bfae4*/
  *(unsigned int *)(v14 + 28) = 1; /*0x5bfae7*/
  *(unsigned int *)(v14 + 32) = 0; /*0x5bfaee*/
  *(unsigned int *)(v14 + 36) = 0; /*0x5bfaf5*/
  *(unsigned int *)(v14 + 40) = 0; /*0x5bfaf8*/
  *(unsigned int *)(v14 + 44) = 0; /*0x5bfafb*/
  *(unsigned int *)(v14 + 48) = 0; /*0x5bfafe*/
  Rect::Set((Rect *)(v14 + 52), 0, 0, 0, 0); /*0x5bfb01*/
  v15->q044 = 0; /*0x5bfb0a*/
  v15->u8_45 = 0; /*0x5bfb0e*/
  v15->q048 = 0; /*0x5bfb11*/
  v16 = CCFileClass::Construct(&v53, Source); /*0x5bfb14*/
  v17 = (*(int (**)(unsigned int *, unsigned int))(*v16 + 20))(v16, 0); /*0x5bfb1e*/
  *(unsigned int *)v53.CDFileClass = (void*)&CCFileClass_vftable; /*0x5bfb2a*/
  v45 = v17 == 0; /*0x5bfb32*/
  v55 = 0; /*0x5bfb37*/
  ((Vector *)((int)v54))->Clear(); /*0x5bfb3e*/
  *(unsigned int *)v53.CDFileClass = &off_7E1668; /*0x5bfb47*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v53); /*0x5bfb4f*/
  if ( v45 ) /*0x5bfb58*/
    return 0; /*0x5bfb58*/
  v41 = 0; /*0x5bfb5e*/
  if ( !Audio::IsSoundEnabled() ) /*0x5bfb62*/
    ResetAnimSystem(3); /*0x5bfb70*/
  if ( (uint8_t)TestBitArray(0) ) /*0x5bfb77*/
    v41 = 1; /*0x5bfb80*/
  if ( g_MissionQueueFrame.localVariables[606] == 1 ) /*0x5bfb8f*/
  {
    v41 = v41; /*0x5bfb91*/
    IDA_LOBYTE(v41) = v41 | 2; /*0x5bfb95*/
    v41 = v41; /*0x5bfb97*/
  }
  if ( a12 == 1 ) /*0x5bfba3*/
    v43 = sub_5BF950; /*0x5bfba5*/
  v19 = (char *)RA2_OPNEW(0x554u); /*0x5bfbb2*/
  if ( v19 ) /*0x5bfbbc*/
    v20 = Stream::InitializeBinkAudio(v19, Source, v41, (int)sub_5BF850, (int)sub_5BF8B0, (int)v43, -1, -1); /*0x5bfbd9*/
  else
    v20 = 0; /*0x5bfbe0*/
  *(unsigned int *)v15 = v20; /*0x5bfbe4*/
  if ( !v20 || (Render_Load_759830((ObjectClass *)v20, a11), !Render_Load_7597A0(*(ObjectClass **)v15)) ) /*0x5bfbf9*/
  {
    BinkMovie::Cleanup((BinkMovie *)v15); /*0x5bfc04*/
    RA2_OPDEL((void *)v15); /*0x5bfc0a*/
    return 0; /*0x5bfc1e*/
  }
  Width = MovieClass::GetWidth(*(MovieClass **)v15); /*0x5bfc2a*/
  Height = MovieClass::GetHeight(*(MovieClass **)v15); /*0x5bfc35*/
  _759EA0 = Render_Load_759EA0(*(ObjectClass **)v15); /*0x5bfc43*/
  if ( _759EA0 == 4 ) /*0x5bfc47*/
    _759EA0 = 1; /*0x5bfc49*/
  if ( !a3 && !a4 && !a5 && !a6 ) /*0x5bfc73*/
  {
    a3 = 0; /*0x5bfc7b*/
    a4 = 0; /*0x5bfc82*/
    a5 = Width; /*0x5bfc89*/
    a6 = Height; /*0x5bfc90*/
  }
  if ( !a7 && !a8 && !a9 && !a10 ) /*0x5bfcb9*/
  {
    v23 = (*(int (**)(int *))(*a2 + 128))(a2) - Height; /*0x5bfcca*/
    v24 = (*(int (**)(int *))(*a2 + 124))(a2); /*0x5bfcd2*/
    a8 = v23 / 2; /*0x5bfcd9*/
    a9 = Width; /*0x5bfce2*/
    a7 = (v24 - Width) / 2; /*0x5bfcee*/
    a10 = Height; /*0x5bfcf9*/
  }
  v25 = *a2; /*0x5bfd06*/
  v52[2] = Width; /*0x5bfd08*/
  v52[0] = 0; /*0x5bfd0e*/
  v52[1] = 0; /*0x5bfd12*/
  v52[3] = Height; /*0x5bfd16*/
  v44 = (*(int (**)(int *))(v25 + 128))(a2); /*0x5bfd20*/
  v26 = (*(int (**)(int *))(*a2 + 124))(a2); /*0x5bfd3d*/
  v27 = ClipRectIntersection(&v46, &a3, v52, 0, 0); /*0x5bfd3f*/
  v15->objectTypeFlags = *v27; /*0x5bfd46*/
  v15->owningHouseIndex = v27[1]; /*0x5bfd4c*/
  v15->fallRate = v27[2]; /*0x5bfd54*/
  v28 = v27[3]; /*0x5bfd59*/
  v47 = 0; /*0x5bfd5c*/
  v15->nextObject = v28; /*0x5bfd64*/
  v48 = v26; /*0x5bfd69*/
  v46 = 0; /*0x5bfd6d*/
  v49 = v44; /*0x5bfd7a*/
  if ( a9 <= 0 || a10 <= 0 || v26 <= 0 || v44 <= 0 ) /*0x5bfd9d*/
    goto LABEL_47; /*0x5bfd9d*/
  v29 = a7; /*0x5bfda3*/
  if ( a7 > 0 ) /*0x5bfdac*/
  {
    v46 = a7; /*0x5bfdb0*/
    v48 = v26 - a7; /*0x5bfdb4*/
  }
  if ( v48 < 1 ) /*0x5bfdbd*/
    goto LABEL_47; /*0x5bfdbd*/
  if ( v47 < a8 ) /*0x5bfdd0*/
  {
    v30 = v47 - a8; /*0x5bfdd6*/
    v47 = a8; /*0x5bfdda*/
    v49 += v30; /*0x5bfdde*/
    v29 = a7; /*0x5bfde2*/
  }
  if ( v49 < 1 ) /*0x5bfdee*/
    goto LABEL_47; /*0x5bfdee*/
  if ( v48 + v46 > a9 + v29 ) /*0x5bfe05*/
    v48 = a7 + a9 - v46; /*0x5bfe16*/
  if ( v48 < 1 ) /*0x5bfe1f*/
    goto LABEL_47; /*0x5bfe1f*/
  v31 = v47; /*0x5bfe35*/
  if ( v47 + v49 > a10 + a8 ) /*0x5bfe3d*/
    v49 = a10 + a8 - v47; /*0x5bfe51*/
  if ( v49 < 1 ) /*0x5bfe5a*/
  {
  LABEL_47:
    v32 = 0; /*0x5bfe6a*/
    v33 = 0; /*0x5bfe6c*/
    v31 = 0; /*0x5bfe6e*/
    v34 = 0; /*0x5bfe70*/
  }
  else
  {
    v32 = v46; /*0x5bfe5c*/
    v33 = v48; /*0x5bfe60*/
    v34 = v49; /*0x5bfe64*/
  }
  v15->attachedTag = v32; /*0x5bfe72*/
  v35 = _759EA0; /*0x5bfe75*/
  v15->attachedBomb = v31; /*0x5bfe79*/
  v15->ambientSoundController = v33; /*0x5bfe7c*/
  v15->q040 = v34; /*0x5bfe82*/
  if ( v35 == 1 || v35 == 4 ) /*0x5bfe8a*/
  {
    Status = DDraw::GetStatus(); /*0x5bfe8c*/
    Render_Load_759F20(*(ObjectClass **)v15, Status); /*0x5bfe94*/
  }
  v15->vtable3 = a2; /*0x5bfe99*/
  v40 = (*(int (**)(int *))(*a2 + 128))(a2); /*0x5bfeac*/
  v37 = (*(int (**)(int *))(*a2 + 116))(a2); /*0x5bfeb6*/
  v38 = (*(int (**)(int *))(*a2 + 112))(a2); /*0x5bfeb8*/
  Render_Load_759EB0(*(ObjectClass **)v15, 0, v37 / v38, v40, 0, 0); /*0x5bfec7*/
  SurfaceTracker = BinkMovie::CreateSurfaceTracker(FullPath); /*0x5bfed0*/
  v15->q048 = SurfaceTracker; /*0x5bfed7*/
  if ( SurfaceTracker ) /*0x5bfeda*/
    **(unsigned int **)v15 = SurfaceTracker; /*0x5bfede*/
  v15->u8_45 = 1; /*0x5bfee0*/
  return (unsigned int *)v15; /*0x5bfc12*/
}
}
// 0x5BFF60
namespace gamemd {
void Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
  char result; // al
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  bool v9; // zf
  int v10; // [esp-10h] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-4h]

  result = dword_ABF3F4; /*0x5bff63*/
  if ( !dword_ABF3F4 ) /*0x5bff71*/
  {
    *(unsigned char *)(a1 + 69) = 1; /*0x5bff7a*/
    dword_ABF3F4 = a1; /*0x5bff83*/
    v12 = 0; /*0x5bff89*/
    v6 = -1; /*0x5bff91*/
    v7 = 0; /*0x5bff94*/
    if ( (uint8_t)TestBitArray(2) ) /*0x5bff96*/
    {
      v12 = *(unsigned int *)(a1 + 16); /*0x5bffa2*/
      if ( *(int *)(a1 + 20) >= 0 ) /*0x5bffab*/
        v6 = *(unsigned int *)(a1 + 20); /*0x5bffad*/
      v7 = *(unsigned int *)(a1 + 28); /*0x5bffb2*/
      if ( *(unsigned int *)(a1 + 12) == 1 ) /*0x5bffb8*/
      {
        v10 = *(unsigned int *)(a1 + 28); /*0x5bffbd*/
        if ( *(unsigned int *)(a1 + 24) ) /*0x5bffba*/
          Render_Render_759880(v12, v6, v10); /*0x5bffd7*/
        else
          Render_Render_759850(*(unsigned int *)(a1 + 32), v10); /*0x5bffc8*/
      }
    }
    if ( a2 ) /*0x5bffe2*/
      (*(void (**)(int))(*(unsigned int *)dword_887640 + 12))(dword_887640); /*0x5bffec*/
    if ( a3 != -1 ) /*0x5bfff6*/
      Theme::QueueSong(a3); /*0x5bfffe*/
    do /*0x5c0049*/
    {
      if ( *(unsigned int *)(a1 + 12) == 2 || v12 ) /*0x5c000f*/
        AbstractClass::updateBuildingState(v12); /*0x5c0018*/
      v8 = MovieClass::RenderLoop(v6, a4); /*0x5c002a*/
      if ( *(unsigned int *)(a1 + 12) == 1 ) /*0x5c0032*/
        v7 = 0; /*0x5c0034*/
      AbstractClass::finalizeConstruction(*(unsigned int *)a1); /*0x5c0038*/
      if ( v8 == 1 ) /*0x5c0040*/
        break; /*0x5c0040*/
      v9 = v7 == 0; /*0x5c0042*/
      if ( v7 > 0 ) /*0x5c0044*/
        v9 = --v7 == 0; /*0x5c0047*/
    }
    while ( !v9 ); /*0x5c0049*/
    result = a2; /*0x5c004b*/
    if ( a2 ) /*0x5c0054*/
      result = (*(int (**)(int))(*(unsigned int *)dword_887640 + 16))(dword_887640); /*0x5c005e*/
    dword_ABF3F4 = 0; /*0x5c0061*/
  }
  return result; /*0x5c006b*/
}
}
// 0x5B1B80
namespace gamemd {
int sub_5B1B80()
{
  dword_ABEE60 = 0; /*0x5b1b82*/
  dword_ABEE64 = 0; /*0x5b1b87*/
  dword_ABEE68 = 0; /*0x5b1b8c*/
  dword_ABEE6C = 0; /*0x5b1b91*/
  return 0; /*0x5b1b96*/
}
} // namespace gamemd

// 0x5B1BA0
namespace gamemd {
void sub_5B1BA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1bac*/
  dbl_ABEE78 = Math::Sqrt(v0 + v0); /*0x5b1bbe*/
}
} // namespace gamemd

// 0x5B1BD0
namespace gamemd {
void sub_5B1BD0()
{
  dbl_ABEEC8 = dbl_ABEE78 / 60.0; /*0x5b1bdc*/
}
} // namespace gamemd

// 0x5B1BF0
namespace gamemd {
void sub_5B1BF0()
{
  dbl_ABEEB0 = 1.0 / dbl_ABEEC8; /*0x5b1bfc*/
}
} // namespace gamemd

// 0x5B1C10
namespace gamemd {
void sub_5B1C10()
{
  dbl_ABEEA8 = 0.0174532925199433 * 45.0; /*0x5b1c1c*/
}
} // namespace gamemd

// 0x5B1C30
namespace gamemd {
void sub_5B1C30()
{
  dbl_ABEE80 = 0.0174532925199433 * 60.0; /*0x5b1c3c*/
}
} // namespace gamemd

// 0x5B1C50
namespace gamemd {
void sub_5B1C50()
{
  dbl_ABEE58 = 0.0174532925199433 * 90.0; /*0x5b1c5c*/
}
} // namespace gamemd

// 0x5B1C70
namespace gamemd {
long long sub_5B1C70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABEE58 - dbl_ABEE80); /*0x5b1c82*/
  result = Math::RoundToInt(v0 * dbl_ABEE78 * 0.5); /*0x5b1c96*/
  dword_ABEED0 = result; /*0x5b1c9b*/
  return result; /*0x5b1ca0*/
}
} // namespace gamemd

// 0x5B1CB0
namespace gamemd {
void sub_5B1CB0()
{
  dbl_ABEE88 = Math::ArcTan((double)dword_ABEED0 * 0.00390625); /*0x5b1cc7*/
}
} // namespace gamemd

// 0x5B1CE0
namespace gamemd {
void sub_5B1CE0()
{
  dbl_ABEEA0 = Math::ArcTan((double)(2 * dword_ABEED0) / dbl_ABEE78); /*0x5b1d02*/
}
} // namespace gamemd

// 0x5B1D10
namespace gamemd {
long long sub_5B1D10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEED0) + 0.5); /*0x5b1d2b*/
  dword_ABEEC4 = result; /*0x5b1d30*/
  return result; /*0x5b1d36*/
}
} // namespace gamemd

// 0x5B1D40
namespace gamemd {
int sub_5B1D40()
{
  word_ABEE70 = 0; /*0x5b1d42*/
  word_ABEE72 = 0; /*0x5b1d48*/
  return 0; /*0x5b1d4e*/
}
} // namespace gamemd

// 0x5B1D50
namespace gamemd {
int sub_5B1D50()
{
  dword_ABEE90 = 0; /*0x5b1d52*/
  dword_ABEE94 = 0; /*0x5b1d57*/
  dword_ABEE98 = 0; /*0x5b1d5c*/
  return 0; /*0x5b1d61*/
}
} // namespace gamemd

// 0x5B1D70
namespace gamemd {
int sub_5B1D70()
{
  dword_ABEEC0 = 0; /*0x5b1d75*/
  dword_ABEEB8 = 128; /*0x5b1d7f*/
  dword_ABEEBC = 128; /*0x5b1d84*/
  return 128; /*0x5b1d89*/
}
} // namespace gamemd

// 0x5B1D90
namespace gamemd {
double * E4Recv_5B1D90::sub_5B1D90()
{

  DWORD v2; // edi
  unsigned int v4; // [esp+8h] [ebp-Ch] BYREF
  double v5; // [esp+Ch] [ebp-8h]

  *(unsigned int *)this = 0; /*0x5b1d9b*/
  v4 = 0; /*0x5b1da1*/
  *((unsigned int *)this + 1) = 1072693248; /*0x5b1da9*/
  v2 = sub_5CAF70((LONG *)&v4); /*0x5b1db5*/
  if ( v2 || v4 ) /*0x5b1dc1*/
  {
    v5 = (double)v4; /*0x5b1de8*/
    Debug::Log(); /*0x5b1dec*/
    *this = (v5 * 4294967296.0 + (double)v2) * 0.001; /*0x5b1e19*/
    return this; /*0x5b1e0e*/
  }
  else
  {
    timeBeginPeriod(1u); /*0x5b1dc5*/
    return this; /*0x5b1dcb*/
  }

}
} // namespace gamemd

// 0x5B1EE0
namespace gamemd {
int sub_5B1EE0()
{
  dword_ABEEE0 = 0; /*0x5b1ee2*/
  dword_ABEEE4 = 0; /*0x5b1ee7*/
  dword_ABEEE8 = 0; /*0x5b1eec*/
  dword_ABEEEC = 0; /*0x5b1ef1*/
  return 0; /*0x5b1ef6*/
}
} // namespace gamemd

// 0x5B1F00
namespace gamemd {
void sub_5B1F00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b1f0c*/
  dbl_ABEEF8 = Math::Sqrt(v0 + v0); /*0x5b1f1e*/
}
} // namespace gamemd

// 0x5B1F30
namespace gamemd {
void sub_5B1F30()
{
  dbl_ABEF48 = dbl_ABEEF8 / 60.0; /*0x5b1f3c*/
}
} // namespace gamemd

// 0x5B1F50
namespace gamemd {
void sub_5B1F50()
{
  dbl_ABEF30 = 1.0 / dbl_ABEF48; /*0x5b1f5c*/
}
} // namespace gamemd

// 0x5B1F70
namespace gamemd {
void sub_5B1F70()
{
  dbl_ABEF28 = 0.0174532925199433 * 45.0; /*0x5b1f7c*/
}
} // namespace gamemd

// 0x5B1F90
namespace gamemd {
void sub_5B1F90()
{
  dbl_ABEF00 = 0.0174532925199433 * 60.0; /*0x5b1f9c*/
}
} // namespace gamemd

// 0x5B1FB0
namespace gamemd {
void sub_5B1FB0()
{
  dbl_ABEED8 = 0.0174532925199433 * 90.0; /*0x5b1fbc*/
}
} // namespace gamemd

// 0x5B1FD0
namespace gamemd {
long long sub_5B1FD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABEED8 - dbl_ABEF00); /*0x5b1fe2*/
  result = Math::RoundToInt(v0 * dbl_ABEEF8 * 0.5); /*0x5b1ff6*/
  dword_ABEF50 = result; /*0x5b1ffb*/
  return result; /*0x5b2000*/
}
} // namespace gamemd

// 0x5B2010
namespace gamemd {
void sub_5B2010()
{
  dbl_ABEF08 = Math::ArcTan((double)dword_ABEF50 * 0.00390625); /*0x5b2027*/
}
} // namespace gamemd

// 0x5B2040
namespace gamemd {
void sub_5B2040()
{
  dbl_ABEF20 = Math::ArcTan((double)(2 * dword_ABEF50) / dbl_ABEEF8); /*0x5b2062*/
}
} // namespace gamemd

// 0x5B2070
namespace gamemd {
long long sub_5B2070()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEF50) + 0.5); /*0x5b208b*/
  dword_ABEF44 = result; /*0x5b2090*/
  return result; /*0x5b2096*/
}
} // namespace gamemd

// 0x5B20A0
namespace gamemd {
int sub_5B20A0()
{
  word_ABEEF0 = 0; /*0x5b20a2*/
  word_ABEEF2 = 0; /*0x5b20a8*/
  return 0; /*0x5b20ae*/
}
} // namespace gamemd

// 0x5B20B0
namespace gamemd {
int sub_5B20B0()
{
  dword_ABEF10 = 0; /*0x5b20b2*/
  dword_ABEF14 = 0; /*0x5b20b7*/
  dword_ABEF18 = 0; /*0x5b20bc*/
  return 0; /*0x5b20c1*/
}
} // namespace gamemd

// 0x5B20D0
namespace gamemd {
int sub_5B20D0()
{
  dword_ABEF40 = 0; /*0x5b20d5*/
  dword_ABEF38 = 128; /*0x5b20df*/
  dword_ABEF3C = 128; /*0x5b20e4*/
  return 128; /*0x5b20e9*/
}
} // namespace gamemd

// 0x5B2B90
namespace gamemd {
void sub_5B2B90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b2b9c*/
  dbl_ABEF78 = Math::Sqrt(v0 + v0); /*0x5b2bae*/
}
} // namespace gamemd

// 0x5B2BC0
namespace gamemd {
void sub_5B2BC0()
{
  dbl_ABEFC8 = dbl_ABEF78 / 60.0; /*0x5b2bcc*/
}
} // namespace gamemd

// 0x5B2BE0
namespace gamemd {
void sub_5B2BE0()
{
  dbl_ABEFB0 = 1.0 / dbl_ABEFC8; /*0x5b2bec*/
}
} // namespace gamemd

// 0x5B2C00
namespace gamemd {
void sub_5B2C00()
{
  dbl_ABEFA8 = 0.0174532925199433 * 45.0; /*0x5b2c0c*/
}
} // namespace gamemd

// 0x5B2C20
namespace gamemd {
void sub_5B2C20()
{
  dbl_ABEF80 = 0.0174532925199433 * 60.0; /*0x5b2c2c*/
}
} // namespace gamemd

// 0x5B2C40
namespace gamemd {
void sub_5B2C40()
{
  dbl_ABEF58 = 0.0174532925199433 * 90.0; /*0x5b2c4c*/
}
} // namespace gamemd

// 0x5B2C60
namespace gamemd {
long long sub_5B2C60()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABEF58 - dbl_ABEF80); /*0x5b2c72*/
  result = Math::RoundToInt(v0 * dbl_ABEF78 * 0.5); /*0x5b2c86*/
  dword_ABEFD0 = result; /*0x5b2c8b*/
  return result; /*0x5b2c90*/
}
} // namespace gamemd

// 0x5B2CA0
namespace gamemd {
void sub_5B2CA0()
{
  dbl_ABEF88 = Math::ArcTan((double)dword_ABEFD0 * 0.00390625); /*0x5b2cb7*/
}
} // namespace gamemd

// 0x5B2CD0
namespace gamemd {
void sub_5B2CD0()
{
  dbl_ABEFA0 = Math::ArcTan((double)(2 * dword_ABEFD0) / dbl_ABEF78); /*0x5b2cf2*/
}
} // namespace gamemd

// 0x5B2D00
namespace gamemd {
long long sub_5B2D00()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEFD0) + 0.5); /*0x5b2d1b*/
  dword_ABEFC4 = result; /*0x5b2d20*/
  return result; /*0x5b2d26*/
}
} // namespace gamemd

// 0x5B2D30
namespace gamemd {
int sub_5B2D30()
{
  word_ABEF70 = 0; /*0x5b2d32*/
  word_ABEF72 = 0; /*0x5b2d38*/
  return 0; /*0x5b2d3e*/
}
} // namespace gamemd

// 0x5B2D40
namespace gamemd {
int sub_5B2D40()
{
  dword_ABEF90 = 0; /*0x5b2d42*/
  dword_ABEF94 = 0; /*0x5b2d47*/
  dword_ABEF98 = 0; /*0x5b2d4c*/
  return 0; /*0x5b2d51*/
}
} // namespace gamemd

// 0x5B2D60
namespace gamemd {
int sub_5B2D60()
{
  dword_ABEFC0 = 0; /*0x5b2d65*/
  dword_ABEFB8 = 128; /*0x5b2d6f*/
  dword_ABEFBC = 128; /*0x5b2d74*/
  return 128; /*0x5b2d79*/
}
} // namespace gamemd

// 0x5B2D80
namespace gamemd {
int sub_5B2D80()
{
  dword_ABEF60 = 0; /*0x5b2d82*/
  dword_ABEF64 = 0; /*0x5b2d87*/
  dword_ABEF68 = 0; /*0x5b2d8c*/
  dword_ABEF6C = 0; /*0x5b2d91*/
  return 0; /*0x5b2d96*/
}
} // namespace gamemd

// 0x5B3950
namespace gamemd {
char * Name_FromIndex(int a1)
{
  if ( a1 == -1 ) /*0x5b3953*/
    return g_Str__none_; /*0x5b395d*/
  else
    return off_816CAC[a1]; /*0x5b3955*/
}
} // namespace gamemd

// 0x5B3AA0
namespace gamemd {
int sub_5B3AA0()
{
  dword_ABEFF8 = 0; /*0x5b3aa2*/
  dword_ABEFFC = 0; /*0x5b3aa7*/
  dword_ABF000 = 0; /*0x5b3aac*/
  dword_ABF004 = 0; /*0x5b3ab1*/
  return 0; /*0x5b3ab6*/
}
} // namespace gamemd

// 0x5B3AC0
namespace gamemd {
int sub_5B3AC0()
{
  dword_ABEFE4 = 0; /*0x5b3acc*/
  dword_ABEFDC = (int)&GenericNode_vftable; /*0x5b3ad2*/
  dword_ABEFE8 = (int)&GenericNode_vftable; /*0x5b3ad7*/
  dword_ABEFEC = 0; /*0x5b3adc*/
  dword_ABEFF0 = (int)&dword_ABEFDC; /*0x5b3ae2*/
  dword_ABEFE0 = (int)&dword_ABEFE8; /*0x5b3aec*/
  dword_ABEFD8 = (int)&List_MixFileClass___vftable; /*0x5b3af6*/
  return atexit(sub_5B3B10); /*0x5b3b06*/
}
} // namespace gamemd

// 0x5B3E90
namespace gamemd {
char E4Recv_5B3E90::sub_5B3E90()
{

  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = g_MissionQueueFrame.localVariables[343]; ; i = *(unsigned int *)(i + 4) ) /*0x5b3e97*/
  {
    if ( !i || !*(unsigned int *)(i + 4) || !*(unsigned int *)(i + 8) ) /*0x5b3eb3*/
      return 0; /*0x5b3f42*/
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b3ed3*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b3ef1*/
    if ( !_strcmpi(Buffer, (char *)this) ) /*0x5b3eff*/
      break; /*0x5b3eff*/
  }
  if ( *(unsigned int *)(i + 36) ) /*0x5b3f14*/
  {
    if ( *(unsigned char *)(i + 18) ) /*0x5b3f1b*/
      __3_YAXPAX_Z(*(void **)(i + 36)); /*0x5b3f23*/
  }
  *(unsigned int *)(i + 36) = 0; /*0x5b3f2b*/
  *(unsigned char *)(i + 18) = 0; /*0x5b3f32*/
  return 1; /*0x5b3f36*/

}
} // namespace gamemd

// 0x5B3F50
namespace gamemd {
void E4Recv_5B3F50::sub_5B3F50()
{

  void *CountFiles; // eax
  void *v3; // eax
  GenericNode *Previous; // ecx
  int v5; // eax
  GenericNode *v6; // ecx
  int v7; // eax

  CountFiles = (void *)this->CountFiles; /*0x5b3f56*/
  *(unsigned int *)this->Node = &vt_MixFileClass; /*0x5b3f59*/
  if ( CountFiles ) /*0x5b3f61*/
    free(CountFiles); /*0x5b3f64*/
  if ( this->MixFileClass_field_24 && BYTE2(this->FileSize) ) /*0x5b3f73*/
  {
    __3_YAXPAX_Z((void *)this->MixFileClass_field_24); /*0x5b3f79*/
    BYTE2(this->FileSize) = 0; /*0x5b3f81*/
  }
  v3 = *(void **)&this->__pad_1C[4]; /*0x5b3f84*/
  this->MixFileClass_field_24 = 0; /*0x5b3f87*/
  if ( v3 ) /*0x5b3f8c*/
  {
    __3_YAXPAX_Z(v3); /*0x5b3f8f*/
    *(unsigned int *)&this->__pad_1C[4] = 0; /*0x5b3f97*/
  }
  if ( this ) /*0x5b3f9c*/
  {
    Previous = ((unsigned int *)this)[0]; /*0x5b3f9e*/
    if ( Previous ) /*0x5b3fa3*/
    {
      v5 = *(unsigned int *)&this->Blowfish; /*0x5b3fa5*/
      if ( v5 ) /*0x5b3faa*/
      {
        *(unsigned int *)(v5 + 4) = Previous; /*0x5b3fac*/
        *(unsigned int *)((unsigned int *)this)[1].__pad_0 = *(unsigned int *)&this->Blowfish; /*0x5b3fb5*/
        *(unsigned int *)&this->Blowfish = 0; /*0x5b3fb8*/
        ((unsigned int *)this)[0] = 0; /*0x5b3fbb*/
      }
    }
  }
  *(unsigned int *)this->Node = &vt_GenericNode; /*0x5b3fc0*/
  if ( this ) /*0x5b3fc6*/
  {
    v6 = ((unsigned int *)this)[0]; /*0x5b3fc8*/
    if ( v6 ) /*0x5b3fcd*/
    {
      v7 = *(unsigned int *)&this->Blowfish; /*0x5b3fcf*/
      if ( v7 ) /*0x5b3fd4*/
      {
        *(unsigned int *)(v7 + 4) = v6; /*0x5b3fd6*/
        *(unsigned int *)((unsigned int *)this)[1].__pad_0 = *(unsigned int *)&this->Blowfish; /*0x5b3fdf*/
        *(unsigned int *)&this->Blowfish = 0; /*0x5b3fe2*/
        ((unsigned int *)this)[0] = 0; /*0x5b3fe5*/
      }
    }
  }

}
} // namespace gamemd

// 0x5B4350
namespace gamemd {
int E4Recv_5B4350::sub_5B4350()
{

  int i; // esi
  char Filename[256]; // [esp+8h] [ebp-304h] BYREF
  char Ext[256]; // [esp+108h] [ebp-204h] BYREF
  char Buffer[260]; // [esp+208h] [ebp-104h] BYREF

  for ( i = g_MissionQueueFrame.localVariables[343]; i && *(unsigned int *)(i + 4) && *(unsigned int *)(i + 8); i = *(unsigned int *)(i + 4) ) /*0x5b4357*/
  {
    _splitpath(*(const char **)(i + 12), 0, 0, Filename, Ext); /*0x5b4387*/
    _makepath(Buffer, 0, 0, Filename, Ext); /*0x5b43a5*/
    if ( !_strcmpi(Buffer, (char *)this) ) /*0x5b43bd*/
      return i; /*0x5b43ce*/
  }
  return 0; /*0x5b43c6*/

}
} // namespace gamemd

// 0x5B43E0
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_7()
{

  return 1; /*0x5b43e2*/

}
} // namespace gamemd

// 0x5B43F0
namespace gamemd {
char ReturnTrue(AnimClass * aP0)
{
  int result; // eax

  IDA_LOBYTE(result) = 1; /*0x5b43f0*/
  return result; /*0x5b43f2*/
}
} // namespace gamemd

// 0x5B4400
namespace gamemd {
void E4Recv_5B4400::sub_5B4400()
{

  if ( this->occupant && BYTE2(((unsigned int *)this)[0]) ) /*0x5b440d*/
    __3_YAXPAX_Z((void *)this->occupant); /*0x5b4413*/
  this->occupant = 0; /*0x5b441b*/
  BYTE2(((unsigned int *)this)[0]) = 0; /*0x5b441e*/

}
} // namespace gamemd

// 0x5B47A0
namespace gamemd {
int sub_5B47A0()
{
  dword_ABF018 = 0; /*0x5b47a2*/
  dword_ABF01C = 0; /*0x5b47a7*/
  dword_ABF020 = 0; /*0x5b47ac*/
  dword_ABF024 = 0; /*0x5b47b1*/
  return 0; /*0x5b47b6*/
}
} // namespace gamemd

// 0x5B47C0
namespace gamemd {
void sub_5B47C0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b47cc*/
  dbl_ABF030 = Math::Sqrt(v0 + v0); /*0x5b47de*/
}
} // namespace gamemd

// 0x5B47F0
namespace gamemd {
void sub_5B47F0()
{
  dbl_ABF080 = dbl_ABF030 / 60.0; /*0x5b47fc*/
}
} // namespace gamemd

// 0x5B4810
namespace gamemd {
void sub_5B4810()
{
  dbl_ABF068 = 1.0 / dbl_ABF080; /*0x5b481c*/
}
} // namespace gamemd

// 0x5B4830
namespace gamemd {
void sub_5B4830()
{
  dbl_ABF060 = 0.0174532925199433 * 45.0; /*0x5b483c*/
}
} // namespace gamemd

// 0x5B4850
namespace gamemd {
void sub_5B4850()
{
  dbl_ABF038 = 0.0174532925199433 * 60.0; /*0x5b485c*/
}
} // namespace gamemd

// 0x5B4870
namespace gamemd {
void sub_5B4870()
{
  dbl_ABF010 = 0.0174532925199433 * 90.0; /*0x5b487c*/
}
} // namespace gamemd

// 0x5B4890
namespace gamemd {
long long sub_5B4890()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF010 - dbl_ABF038); /*0x5b48a2*/
  result = Math::RoundToInt(v0 * dbl_ABF030 * 0.5); /*0x5b48b6*/
  dword_ABF088 = result; /*0x5b48bb*/
  return result; /*0x5b48c0*/
}
} // namespace gamemd

// 0x5B48D0
namespace gamemd {
void sub_5B48D0()
{
  dbl_ABF040 = Math::ArcTan((double)dword_ABF088 * 0.00390625); /*0x5b48e7*/
}
} // namespace gamemd

// 0x5B4900
namespace gamemd {
void sub_5B4900()
{
  dbl_ABF058 = Math::ArcTan((double)(2 * dword_ABF088) / dbl_ABF030); /*0x5b4922*/
}
} // namespace gamemd

// 0x5B4930
namespace gamemd {
long long sub_5B4930()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF088) + 0.5); /*0x5b494b*/
  dword_ABF07C = result; /*0x5b4950*/
  return result; /*0x5b4956*/
}
} // namespace gamemd

// 0x5B4960
namespace gamemd {
int sub_5B4960()
{
  word_ABF028 = 0; /*0x5b4962*/
  word_ABF02A = 0; /*0x5b4968*/
  return 0; /*0x5b496e*/
}
} // namespace gamemd

// 0x5B4970
namespace gamemd {
int sub_5B4970()
{
  dword_ABF048 = 0; /*0x5b4972*/
  dword_ABF04C = 0; /*0x5b4977*/
  dword_ABF050 = 0; /*0x5b497c*/
  return 0; /*0x5b4981*/
}
} // namespace gamemd

// 0x5B4990
namespace gamemd {
int sub_5B4990()
{
  dword_ABF078 = 0; /*0x5b4995*/
  dword_ABF070 = 128; /*0x5b499f*/
  dword_ABF074 = 128; /*0x5b49a4*/
  return 128; /*0x5b49a9*/
}
} // namespace gamemd

// 0x5B57D0
namespace gamemd {
HWND E4Recv_5B57D0::sub_5B57D0()
{

  int result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND vtable0; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  int v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  int16_t v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  result = (int)GetDlgItem((HWND)this->AbstractClass, 1344); /*0x5b57ea*/
  v3 = (HWND)result; /*0x5b57ec*/
  if ( result ) /*0x5b57f0*/
  {
    SendMessageA((HWND)result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b580f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b581e*/
    result = wcslen(lParam); /*0x5b5828*/
    if ( result ) /*0x5b5832*/
    {
      if ( lParam[0] != 13 ) /*0x5b5841*/
      {
        WideString::Trim(lParam); /*0x5b584e*/
        result = (int)lParam; /*0x5b5853*/
        if ( &v9 != (int *)-272 ) /*0x5b585c*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b5871*/
          v12 = 0; /*0x5b5873*/
          v11[0] = 104; /*0x5b587f*/
          strcpy((char *)&v11[1], unk_A8B380); /*0x5b589d*/
          LOBYTE(v11[6]) = dword_A8B394; /*0x5b58b2*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b58b6*/
          ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)v11, 250, 1); /*0x5b58cf*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b58d9*/
          v4 = CharToWideString(unk_A8B380); /*0x5b58e3*/
          v5 = dword_A8B394; /*0x5b58ea*/
          vtable0 = (HWND)this->AbstractClass; /*0x5b58f5*/
          Format = (wchar_t *)v4; /*0x5b58f6*/
          result = (int)GetDlgItem(vtable0, 1343); /*0x5b58fa*/
          v6 = (HWND)result; /*0x5b58fc*/
          if ( result ) /*0x5b5900*/
          {
            if ( v5 >= 8 ) /*0x5b5904*/
              v7 = Math::InitDegToRad; /*0x5b5914*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b590b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b5934*/
            return DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b5946*/
          }
        }
      }
    }
  }
  return result; /*0x5b594b*/

}
} // namespace gamemd

// 0x5B5960
namespace gamemd {
char E4Recv_5B5960::sub_5B5960()
{

  HWND DlgItem; // eax
  HWND v3; // edi

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1639); /*0x5b596d*/
  v3 = DlgItem; /*0x5b5973*/
  if ( DlgItem ) /*0x5b5977*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5989*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b598e*/
    {
      dword_A8B3AC = SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b599b*/
      BYTE1(((unsigned int *)this)[0]) = 1; /*0x5b59a2*/
      LOBYTE(((unsigned int *)this)[0]) = 1; /*0x5b59a5*/
      LOBYTE(DlgItem) = 1; /*0x5b59a0*/
    }
  }
  return (char)DlgItem; /*0x5b59a8*/

}
} // namespace gamemd

// 0x5B5A50
namespace gamemd {
char E4Recv_5B5A50::sub_5B5A50(char a2)
{

  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[22]; // [esp+8h] [ebp-2Ch] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1473); /*0x5b5a5f*/
  v4 = DlgItem; /*0x5b5a65*/
  if ( DlgItem ) /*0x5b5a69*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x15u, (LPARAM)lParam); /*0x5b5a7f*/
    WideString::Trim(lParam); /*0x5b5a85*/
    if ( !a2 ) /*0x5b5a90*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5a9f*/
    CopyWideToChar(unk_A8B380, (char *)lParam, -1); /*0x5b5aac*/
    BYTE1(((unsigned int *)this)[0]) = 1; /*0x5b5ab4*/
    LOBYTE(((unsigned int *)this)[0]) = 1; /*0x5b5ab7*/
    LOBYTE(DlgItem) = 1; /*0x5b5ab1*/
  }
  return (char)DlgItem; /*0x5b5aba*/

}
} // namespace gamemd

// 0x5B6DA0
namespace gamemd {
void E4Recv_5B6DA0::sub_5B6DA0(wchar_t * Source)
{

  char *v3; // eax
  unsigned int v4; // edi
  HWND DlgItem; // esi
  int (__usercall *v6)@<eax>(char@<cf>, char@<zf>); // edi
  wchar_t *Format; // [esp+10h] [ebp-300h]
  int v8[62]; // [esp+14h] [ebp-2FCh] BYREF
  int16_t v9; // [esp+10Ch] [ebp-204h]
  wchar_t Buffer[256]; // [esp+110h] [ebp-200h] BYREF

  if ( Source ) /*0x5b6db5*/
  {
    memset(v8, 0, sizeof(v8)); /*0x5b6dca*/
    v9 = 0; /*0x5b6dcc*/
    v8[0] = 104; /*0x5b6dd8*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5b6df4*/
    LOBYTE(v8[6]) = dword_A8B394; /*0x5b6e04*/
    wcscpy((wchar_t *)((char *)&v8[6] + 1), Source); /*0x5b6e08*/
    ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)v8, 250, 1); /*0x5b6e21*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6e2b*/
    v3 = CharToWideString(unk_A8B380); /*0x5b6e35*/
    v4 = dword_A8B394; /*0x5b6e3d*/
    Format = (wchar_t *)v3; /*0x5b6e49*/
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5b6e53*/
    if ( DlgItem ) /*0x5b6e57*/
    {
      if ( v4 >= 8 ) /*0x5b6e5b*/
        v6 = Math::InitDegToRad; /*0x5b6e6b*/
      else
        v6 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v4]; /*0x5b6e62*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, Source); /*0x5b6e84*/
      DrawDialogText((LPARAM)v6, Buffer, DlgItem); /*0x5b6e96*/
    }
  }

}
} // namespace gamemd

// 0x5B6F30
namespace gamemd {
HWND sub_5B6F30()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  unsigned char v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  unsigned int v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  int16_t v8; // [esp+104h] [ebp-100h]
  unsigned int v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5b6f45*/
  v8 = 0; /*0x5b6f51*/
  IDA_LOBYTE(v7[6]) = dword_A8DB30; /*0x5b6f58*/
  v7[0] = 102; /*0x5b6f67*/
  IDA_BYTE1(v7[7]) = dword_A8B394; /*0x5b6f6f*/
  ((Stream *)((int)&unk_A8EA70))->WriteBlock((int)v7, 250, 1); /*0x5b6f73*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, aDRa2mdpostMode, 1683); /*0x5b6f8b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5b6f94*/
  v2 = MessageBox; /*0x5b6f99*/
  if ( MessageBox ) /*0x5b6f9d*/
    Dialog::Show(MessageBox); /*0x5b6fa1*/
  v3 = dword_887340; /*0x5b6fab*/
  if ( dword_887338 != -1 ) /*0x5b6fb4*/
    v3 += Timer::GetTicks() - dword_887338; /*0x5b6fc6*/
  while ( Count::GetCountQueue(&unk_A8EA70) ) /*0x5b6fcd*/
  {
    v4 = dword_887340; /*0x5b6fe0*/
    if ( dword_887338 != -1 ) /*0x5b6fe9*/
      v4 += Timer::GetTicks() - dword_887338; /*0x5b6ffb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5b7040*/
      || ((ObjectTypeClass *)((int)&unk_A8EA70))->CreateInstance((int)v9, (int)v6) > 0
      && v9[0] == 102
      && (uint8_t)v10 == dword_A8DB30 )
    {
      break; /*0x5b7040*/
    }
    Event::Dispatch(); /*0x5b7042*/
    MessageLoop(); /*0x5b7047*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b7051*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5b7069*/
  if ( v2 ) /*0x5b7070*/
// 0x622720
    return Dialog::Destroy(v2); /*0x5b7074*/
  return result; /*0x5b7079*/
}
} // namespace gamemd

// 0x5B75D0
namespace gamemd {
int sub_5B75D0()
{
  dword_ABF098 = 0; /*0x5b75d2*/
  dword_ABF09C = 0; /*0x5b75d7*/
  dword_ABF0A0 = 0; /*0x5b75dc*/
  dword_ABF0A4 = 0; /*0x5b75e1*/
  return 0; /*0x5b75e6*/
}
} // namespace gamemd

// 0x5B75F0
namespace gamemd {
void sub_5B75F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5b75fc*/
  dbl_ABF0B0 = Math::Sqrt(v0 + v0); /*0x5b760e*/
}
} // namespace gamemd

// 0x5B7620
namespace gamemd {
void sub_5B7620()
{
  dbl_ABF100 = dbl_ABF0B0 / 60.0; /*0x5b762c*/
}
} // namespace gamemd

// 0x5B7640
namespace gamemd {
void sub_5B7640()
{
  dbl_ABF0E8 = 1.0 / dbl_ABF100; /*0x5b764c*/
}
} // namespace gamemd

// 0x5B7660
namespace gamemd {
void sub_5B7660()
{
  dbl_ABF0E0 = 0.0174532925199433 * 45.0; /*0x5b766c*/
}
} // namespace gamemd

// 0x5B7680
namespace gamemd {
void sub_5B7680()
{
  dbl_ABF0B8 = 0.0174532925199433 * 60.0; /*0x5b768c*/
}
} // namespace gamemd

// 0x5B76A0
namespace gamemd {
void sub_5B76A0()
{
  dbl_ABF090 = 0.0174532925199433 * 90.0; /*0x5b76ac*/
}
} // namespace gamemd

// 0x5B76C0
namespace gamemd {
long long sub_5B76C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF090 - dbl_ABF0B8); /*0x5b76d2*/
  result = Math::RoundToInt(v0 * dbl_ABF0B0 * 0.5); /*0x5b76e6*/
  dword_ABF108 = result; /*0x5b76eb*/
  return result; /*0x5b76f0*/
}
} // namespace gamemd

// 0x5B7700
namespace gamemd {
void sub_5B7700()
{
  dbl_ABF0C0 = Math::ArcTan((double)dword_ABF108 * 0.00390625); /*0x5b7717*/
}
} // namespace gamemd

// 0x5B7730
namespace gamemd {
void sub_5B7730()
{
  dbl_ABF0D8 = Math::ArcTan((double)(2 * dword_ABF108) / dbl_ABF0B0); /*0x5b7752*/
}
} // namespace gamemd

// 0x5B7760
namespace gamemd {
long long sub_5B7760()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF108) + 0.5); /*0x5b777b*/
  dword_ABF0FC = result; /*0x5b7780*/
  return result; /*0x5b7786*/
}
} // namespace gamemd

// 0x5B7790
namespace gamemd {
int sub_5B7790()
{
  word_ABF0A8 = 0; /*0x5b7792*/
  word_ABF0AA = 0; /*0x5b7798*/
  return 0; /*0x5b779e*/
}
} // namespace gamemd

// 0x5B77A0
namespace gamemd {
int sub_5B77A0()
{
  dword_ABF0C8 = 0; /*0x5b77a2*/
  dword_ABF0CC = 0; /*0x5b77a7*/
  dword_ABF0D0 = 0; /*0x5b77ac*/
  return 0; /*0x5b77b1*/
}
} // namespace gamemd

// 0x5B77C0
namespace gamemd {
int sub_5B77C0()
{
  dword_ABF0F8 = 0; /*0x5b77c5*/
  dword_ABF0F0 = 128; /*0x5b77cf*/
  dword_ABF0F4 = 128; /*0x5b77d4*/
  return 128; /*0x5b77d9*/
}
} // namespace gamemd

// 0x5B9250
namespace gamemd {
HWND E4Recv_5B9250::sub_5B9250()
{

  int result; // eax
  HWND v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  HWND v6; // esi
  int (__usercall *v7)@<eax>(char@<cf>, char@<zf>); // edi
  HWND vtable0; // [esp-8h] [ebp-518h]
  int v9; // [esp+0h] [ebp-510h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-500h]
  int v11[62]; // [esp+14h] [ebp-4FCh] BYREF
  int16_t v12; // [esp+10Ch] [ebp-404h]
  wchar_t lParam[256]; // [esp+110h] [ebp-400h] BYREF
  wchar_t Buffer[256]; // [esp+310h] [ebp-200h] BYREF

  memset(lParam, 0, sizeof(lParam)); /*0x5b9270*/
  result = (int)GetDlgItem((HWND)this->AbstractClass, 1344); /*0x5b927a*/
  v3 = (HWND)result; /*0x5b927c*/
  if ( result ) /*0x5b9280*/
  {
    SendMessageA((HWND)result, 0x4B3u, 0x100u, (LPARAM)lParam); /*0x5b929f*/
    SendMessageA(v3, 0x4B2u, 0, (LPARAM)&g_TypeClass_DefaultString); /*0x5b92ae*/
    result = wcslen(lParam); /*0x5b92b8*/
    if ( result ) /*0x5b92c2*/
    {
      if ( lParam[0] != 13 ) /*0x5b92d1*/
      {
        WideString::Trim(lParam); /*0x5b92de*/
        result = (int)lParam; /*0x5b92e3*/
        if ( &v9 != (int *)-272 ) /*0x5b92ec*/
        {
          memset(v11, 0, sizeof(v11)); /*0x5b9301*/
          v12 = 0; /*0x5b9303*/
          v11[0] = 104; /*0x5b930f*/
          strcpy((char *)&v11[1], unk_A8B380); /*0x5b932d*/
          LOBYTE(v11[6]) = dword_A8B394; /*0x5b9342*/
          wcscpy((wchar_t *)((char *)&v11[6] + 1), lParam); /*0x5b9346*/
          ((Stream *)((int *)&unk_A8EA70))->WriteBlock((int)v11, 250, 1); /*0x5b935f*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b9369*/
          v4 = CharToWideString(unk_A8B380); /*0x5b9373*/
          v5 = dword_A8B394; /*0x5b937a*/
          vtable0 = (HWND)this->AbstractClass; /*0x5b9385*/
          Format = (wchar_t *)v4; /*0x5b9386*/
          result = (int)GetDlgItem(vtable0, 1343); /*0x5b938a*/
          v6 = (HWND)result; /*0x5b938c*/
          if ( result ) /*0x5b9390*/
          {
            if ( v5 >= 8 ) /*0x5b9394*/
              v7 = Math::InitDegToRad; /*0x5b93a4*/
            else
              v7 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[v5]; /*0x5b939b*/
            swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, lParam); /*0x5b93c4*/
            return DrawDialogText((LPARAM)v7, Buffer, v6); /*0x5b93d6*/
          }
        }
      }
    }
  }
  return result; /*0x5b93db*/

}
} // namespace gamemd

// 0x5B93F0
namespace gamemd {
char E4Recv_5B93F0::sub_5B93F0()
{

  HWND DlgItem; // eax
  HWND v3; // esi

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1639); /*0x5b93fd*/
  v3 = DlgItem; /*0x5b9403*/
  if ( DlgItem ) /*0x5b9407*/
  {
    DlgItem = (HWND)SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b9419*/
    if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b941e*/
    {
      DlgItem = (HWND)SendMessageA(v3, 0x150u, (WPARAM)DlgItem, 0); /*0x5b9429*/
      if ( DlgItem != HWND_MESSAGE|0x2 ) /*0x5b942e*/
      {
        dword_A8B3AC = (int)DlgItem; /*0x5b9430*/
        BYTE1(((unsigned int *)this)[0]) = 1; /*0x5b9437*/
        LOBYTE(((unsigned int *)this)[0]) = 1; /*0x5b943a*/
        LOBYTE(DlgItem) = 1; /*0x5b9435*/
      }
    }
  }
  return (char)DlgItem; /*0x5b943d*/

}
} // namespace gamemd

// 0x5B9450
namespace gamemd {
unsigned int E4Recv_5B9450::sub_5B9450()
{

  unsigned int result; // eax
  HWND v3; // edi

  result = (unsigned int)GetDlgItem((HWND)this->AbstractClass, 1029); /*0x5b945d*/
  v3 = (HWND)result; /*0x5b9463*/
  if ( result ) /*0x5b9467*/
  {
    result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b9479*/
    if ( result != -1 ) /*0x5b947e*/
    {
      dword_A8B394 = result; /*0x5b9482*/
      BYTE1(((unsigned int *)this)[0]) = 1; /*0x5b9489*/
      LOBYTE(((unsigned int *)this)[0]) = 1; /*0x5b948c*/
      if ( result >= 8 ) /*0x5b948f*/
        return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b94ba*/
      else
        return SendMessageA(v3, 0x498u, 0, dword_8316A8[result]); /*0x5b94a6*/
    }
  }
  return result; /*0x5b94a8*/

}
} // namespace gamemd

// 0x5B94C0
namespace gamemd {
char E4Recv_5B94C0::sub_5B94C0(char a2)
{

  HWND DlgItem; // eax
  HWND v4; // esi
  wchar_t lParam[20]; // [esp+8h] [ebp-28h] BYREF

  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1473); /*0x5b94cf*/
  v4 = DlgItem; /*0x5b94d5*/
  if ( DlgItem ) /*0x5b94d9*/
  {
    SendMessageA(DlgItem, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5b94ef*/
    WideString::Trim(lParam); /*0x5b94f5*/
    if ( !a2 ) /*0x5b9500*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)lParam); /*0x5b950f*/
    strcpy(unk_A8B380, ToWideStringChar((char *)lParam)); /*0x5b9533*/
    BYTE1(((unsigned int *)this)[0]) = 1; /*0x5b953e*/
    LOBYTE(((unsigned int *)this)[0]) = 1; /*0x5b9541*/
    LOBYTE(DlgItem) = 1; /*0x5b9537*/
  }
  return (char)DlgItem; /*0x5b9545*/

}
} // namespace gamemd

// 0x5BAA80
namespace gamemd {
void E4Recv_5BAA80::sub_5BAA80(wchar_t * Format, unsigned int a3, int a4)
{

  HWND DlgItem; // edi
  int (__usercall *v5)@<eax>(char@<cf>, char@<zf>); // esi
  wchar_t Buffer[256]; // [esp+8h] [ebp-200h] BYREF

  if ( a4 ) /*0x5baa91*/
  {
    DlgItem = GetDlgItem((HWND)this->AbstractClass, 1343); /*0x5baaa1*/
    if ( DlgItem ) /*0x5baaa5*/
    {
      if ( a3 >= 8 ) /*0x5baab1*/
        v5 = Math::InitDegToRad; /*0x5baac1*/
      else
        v5 = (int (__usercall *)@<eax>(char@<cf>, char@<zf>))dword_8316A8[a3]; /*0x5baab8*/
      swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, a4); /*0x5baada*/
      DrawDialogText((LPARAM)v5, Buffer, DlgItem); /*0x5baae9*/
    }
  }

}
} // namespace gamemd

// 0x5BAB00
namespace gamemd {
HWND sub_5BAB00()
{
  wchar_t *StringCSF; // eax
  HWND MessageBox; // eax
  HWND v2; // ebx
  int v3; // edi
  int v4; // esi
  HWND result; // eax
  unsigned char v6[4]; // [esp+8h] [ebp-1FCh] BYREF
  unsigned int v7[62]; // [esp+Ch] [ebp-1F8h] BYREF
  int16_t v8; // [esp+104h] [ebp-100h]
  unsigned int v9[6]; // [esp+108h] [ebp-FCh] BYREF
  int v10; // [esp+120h] [ebp-E4h]

  memset(v7, 0, sizeof(v7)); /*0x5bab15*/
  v8 = 0; /*0x5bab21*/
  IDA_LOBYTE(v7[6]) = dword_A8DB30; /*0x5bab28*/
  v7[0] = 102; /*0x5bab37*/
  IDA_BYTE1(v7[7]) = dword_A8B394; /*0x5bab3f*/
  ((Stream *)((int)&unk_A8EA70))->WriteBlock((int)v7, 250, 1); /*0x5bab43*/
  StringCSF = GetStringCSF(aTxtSigningOff, 0, aDRa2mdpostMode_0, 2398); /*0x5bab5b*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5bab64*/
  v2 = MessageBox; /*0x5bab69*/
  if ( MessageBox ) /*0x5bab6d*/
    Dialog::Show(MessageBox); /*0x5bab71*/
  v3 = dword_887340; /*0x5bab7b*/
  if ( dword_887338 != -1 ) /*0x5bab84*/
    v3 += Timer::GetTicks() - dword_887338; /*0x5bab96*/
  while ( Count::GetCountQueue(&unk_A8EA70) ) /*0x5bab9d*/
  {
    v4 = dword_887340; /*0x5babb0*/
    if ( dword_887338 != -1 ) /*0x5babb9*/
      v4 += Timer::GetTicks() - dword_887338; /*0x5babcb*/
    if ( (unsigned int)(v4 - v3) >= 0x12C /*0x5bac10*/
      || ((ObjectTypeClass *)((int)&unk_A8EA70))->CreateInstance((int)v9, (int)v6) > 0
      && v9[0] == 102
      && (uint8_t)v10 == dword_A8DB30 )
    {
      break; /*0x5bac10*/
    }
    Event::Dispatch(); /*0x5bac12*/
    MessageLoop(); /*0x5bac17*/
    Stream::ReadPacket((int)&unk_A8EA70); /*0x5bac21*/
  }
  result = (HWND)Network::CleanupOnDisconnect(); /*0x5bac39*/
  if ( v2 ) /*0x5bac40*/
// 0x622720
    return Dialog::Destroy(v2); /*0x5bac44*/
  return result; /*0x5bac49*/
}
} // namespace gamemd

// 0x5BBF70
namespace gamemd {
int sub_5BBF70()
{
  dword_ABF138 = 0; /*0x5bbf72*/
  dword_ABF13C = 0; /*0x5bbf77*/
  dword_ABF140 = 0; /*0x5bbf7c*/
  dword_ABF144 = 0; /*0x5bbf81*/
  return 0; /*0x5bbf86*/
}
} // namespace gamemd

// 0x5BBF90
namespace gamemd {
void sub_5BBF90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bbf9c*/
  dbl_ABF150 = Math::Sqrt(v0 + v0); /*0x5bbfae*/
}
} // namespace gamemd

// 0x5BBFC0
namespace gamemd {
void sub_5BBFC0()
{
  dbl_ABF210 = dbl_ABF150 / 60.0; /*0x5bbfcc*/
}
} // namespace gamemd

// 0x5BBFE0
namespace gamemd {
void sub_5BBFE0()
{
  dbl_ABF1C0 = 1.0 / dbl_ABF210; /*0x5bbfec*/
}
} // namespace gamemd

// 0x5BC000
namespace gamemd {
void sub_5BC000()
{
  dbl_ABF1B8 = 0.0174532925199433 * 45.0; /*0x5bc00c*/
}
} // namespace gamemd

// 0x5BC020
namespace gamemd {
void sub_5BC020()
{
  dbl_ABF158 = 0.0174532925199433 * 60.0; /*0x5bc02c*/
}
} // namespace gamemd

// 0x5BC040
namespace gamemd {
void sub_5BC040()
{
  dbl_ABF130 = 0.0174532925199433 * 90.0; /*0x5bc04c*/
}
} // namespace gamemd

// 0x5BC060
namespace gamemd {
long long sub_5BC060()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF130 - dbl_ABF158); /*0x5bc072*/
  result = Math::RoundToInt(v0 * dbl_ABF150 * 0.5); /*0x5bc086*/
  dword_ABF218 = result; /*0x5bc08b*/
  return result; /*0x5bc090*/
}
} // namespace gamemd

// 0x5BC0A0
namespace gamemd {
void sub_5BC0A0()
{
  dbl_ABF160 = Math::ArcTan((double)dword_ABF218 * 0.00390625); /*0x5bc0b7*/
}
} // namespace gamemd

// 0x5BC0D0
namespace gamemd {
void sub_5BC0D0()
{
  dbl_ABF1B0 = Math::ArcTan((double)(2 * dword_ABF218) / dbl_ABF150); /*0x5bc0f2*/
}
} // namespace gamemd

// 0x5BC100
namespace gamemd {
long long sub_5BC100()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF218) + 0.5); /*0x5bc11b*/
  dword_ABF20C = result; /*0x5bc120*/
  return result; /*0x5bc126*/
}
} // namespace gamemd

// 0x5BC130
namespace gamemd {
int sub_5BC130()
{
  word_ABF148 = 0; /*0x5bc132*/
  word_ABF14A = 0; /*0x5bc138*/
  return 0; /*0x5bc13e*/
}
} // namespace gamemd

// 0x5BC140
namespace gamemd {
int sub_5BC140()
{
  dword_ABF188 = 0; /*0x5bc142*/
  dword_ABF18C = 0; /*0x5bc147*/
  dword_ABF190 = 0; /*0x5bc14c*/
  return 0; /*0x5bc151*/
}
} // namespace gamemd

// 0x5BC160
namespace gamemd {
int sub_5BC160()
{
  dword_ABF208 = 0; /*0x5bc165*/
  dword_ABF200 = 128; /*0x5bc16f*/
  dword_ABF204 = 128; /*0x5bc174*/
  return 128; /*0x5bc179*/
}
} // namespace gamemd

// 0x5BC300
namespace gamemd {
int _ioterm()
{
  void **v0; // esi
  HWND result; // eax

  v0 = (void **)dword_ABF168; /*0x5bc301*/
  do /*0x5bc324*/
  {
    if ( *v0 ) /*0x5bc306*/
    {
      RA2_OPDEL(*v0); /*0x5bc30d*/
      *v0 = 0; /*0x5bc315*/
    }
    ++v0; /*0x5bc31b*/
  }
  while ( (int)v0 < (int)&dword_ABF188 ); /*0x5bc324*/
  result = dword_ABF240; /*0x5bc326*/
  if ( dword_ABF240 ) /*0x5bc32e*/
  {
    DeleteObject(dword_ABF244); /*0x5bc336*/
    Object::RemoveObjectArray(dword_ABF240); /*0x5bc342*/
    result = (HWND)DestroyWindow(dword_ABF240); /*0x5bc34e*/
    dword_ABF244 = 0; /*0x5bc354*/
    dword_ABF240 = 0; /*0x5bc35e*/
  }
  return result; /*0x5bc32b*/
}
} // namespace gamemd

// 0x5BC440
namespace gamemd {
ObjectClass * sub_5BC440()
{
  return dword_ABF23C; /*0x5bc445*/
}
} // namespace gamemd

// 0x5BC450
namespace gamemd {
int sub_5BC450(int a1)
{
  return dword_ABF168[a1]; /*0x5bc457*/
}
}
// 0x5BC460
namespace gamemd {
char sub_5BC460(int a1)
{
  unsigned char *v1; // ecx
  int v2; // edi
  unsigned int *v3; // ebx
  unsigned char *v4; // edx
  unsigned int *v5; // eax
  int v6; // esi

  v1 = (unsigned char *)dword_ABF168[a1]; /*0x5bc460*/
  dword_ABF23C = (int)v1; /*0x5bc46a*/
  v2 = 0; /*0x5bc470*/
  v3 = v1 + 2000; /*0x5bc472*/
  do /*0x5bc49b*/
  {
    v4 = &v1[v2]; /*0x5bc478*/
    v5 = v3; /*0x5bc47b*/
    v6 = 80; /*0x5bc47d*/
    do /*0x5bc492*/
    {
      *v4 = 32; /*0x5bc482*/
      *v5 = 0; /*0x5bc485*/
      v5 += 25; /*0x5bc48b*/
      v4 += 25; /*0x5bc48e*/
      --v6; /*0x5bc491*/
    }
    while ( v6 ); /*0x5bc492*/
    ++v2; /*0x5bc494*/
    ++v3; /*0x5bc495*/
  }
  while ( v2 < 25 ); /*0x5bc49b*/
  v1[10036] = 1; /*0x5bc4a5*/
  Text::DrawRepeated(v1, 0, 0, 80, 25); /*0x5bc4ac*/
// 0x5bd490
  return Text::DrawRepeated((void *)dword_ABF23C, 0, 0, 80, 25); /*0x5bc4c4*/
}
} // namespace gamemd

// 0x5BC4D0
namespace gamemd {
char sub_5BC4D0()
{
  int *v1; // ebx
  int v2; // ecx
  int v3; // edi
  int v4; // ebp
  unsigned char *v5; // edx
  unsigned int *v6; // eax
  int v7; // esi
  char result; // al

  v1 = &dword_ABF168; /*0x5bc4d4*/
  do /*0x5bc525*/
  {
    v2 = *v1; /*0x5bc4d9*/
    v3 = 0; /*0x5bc4db*/
    v4 = *v1 + 2000; /*0x5bc4dd*/
    do /*0x5bc506*/
    {
      v5 = (unsigned char *)(v3 + v2); /*0x5bc4e3*/
      v6 = (unsigned int *)v4; /*0x5bc4e6*/
      v7 = 80; /*0x5bc4e8*/
      do /*0x5bc4fd*/
      {
        *v5 = 32; /*0x5bc4ed*/
        *v6 = 0; /*0x5bc4f0*/
        v6 += 25; /*0x5bc4f6*/
        v5 += 25; /*0x5bc4f9*/
        --v7; /*0x5bc4fc*/
      }
      while ( v7 ); /*0x5bc4fd*/
      ++v3; /*0x5bc4ff*/
      v4 += 4; /*0x5bc500*/
    }
    while ( v3 < 25 ); /*0x5bc506*/
    *(unsigned char *)(v2 + 10036) = 1; /*0x5bc510*/
    result = Text::DrawRepeated((Text *)v2, 0, 0, 80, 25); /*0x5bc517*/
    ++v1; /*0x5bc51c*/
  }
  while ( (int)v1 < (int)&dword_ABF188 ); /*0x5bc525*/
  return result; /*0x5bc527*/
}
} // namespace gamemd

// 0x5BC530
namespace gamemd {
int sub_5BC530()
{
  HDC DC; // ebp
  int DeviceCaps; // eax
  HGDIOBJ v2; // edi
  struct tagRECT Rect; // [esp+10h] [ebp-5Ch] BYREF
  struct tagRECT v5; // [esp+20h] [ebp-4Ch] BYREF
  LOGFONTA lf; // [esp+30h] [ebp-3Ch] BYREF

  dword_ABF240 = CreateDialogParamA(dword_ABF230, (LPCSTR)0xF8, dword_ABF234, DlgProcAudioDebug, 0); /*0x5bc559*/
  TimerPool::AllocSlot(dword_ABF240); /*0x5bc55e*/
  DC = GetDC(dword_ABF240); /*0x5bc570*/
  DeviceCaps = GetDeviceCaps(DC, 90); /*0x5bc577*/
  lf.lfHeight = -MulDiv(8, DeviceCaps, 72); /*0x5bc588*/
  memset(&lf.lfWidth, 0, 24); /*0x5bc5a6*/
  strcpy(lf.lfFaceName, "Courier"); /*0x5bc5d9*/
  dword_ABF244 = CreateFontIndirectA(&lf); /*0x5bc5f3*/
  v2 = SelectObject(DC, dword_ABF244); /*0x5bc5fc*/
  GetTextMetricsA(DC, &dword_ABF1C8); /*0x5bc604*/
  SelectObject(DC, v2); /*0x5bc60c*/
  dword_ABF128 = GetSysColor(15); /*0x5bc618*/
  dword_ABF110 = GetSysColor(8); /*0x5bc621*/
  Rect.left = 0; /*0x5bc62b*/
  Rect.top = 0; /*0x5bc62f*/
  Rect.right = 79 * dword_ABF1C8.tmMaxCharWidth + 20; /*0x5bc64b*/
  Rect.bottom = 25 * (dword_ABF1C8.tmHeight + dword_ABF1C8.tmExternalLeading) + 20; /*0x5bc661*/
  AdjustWindowRect(&Rect, 0xC00000u, 0); /*0x5bc665*/
  GetWindowRect(dword_ABF234, &v5); /*0x5bc677*/
  MoveWindow(dword_ABF240, v5.right + 5, 0, Rect.right - Rect.left, Rect.bottom - Rect.top, 1); /*0x5bc6a4*/
  ShowWindow(dword_ABF240, 0); /*0x5bc6b2*/
  SetFocus(dword_ABF234); /*0x5bc6bf*/
  return ReleaseDC(dword_ABF240, DC); /*0x5bc6d2*/
}
} // namespace gamemd

// 0x5BCB90
namespace gamemd {
ObjectClass * E4Recv_5BCB90::sub_5BCB90(int a2)
{

  int v3; // edi
  char *v4; // ebx
  unsigned char *v5; // ecx
  char *v6; // eax
  int v7; // edx

  v3 = 0; /*0x5bcb9c*/
  *((unsigned int *)this + 2502) = a2; /*0x5bcb9e*/
  *((unsigned int *)this + 2503) = 0; /*0x5bcba4*/
  *((unsigned int *)this + 2504) = 0; /*0x5bcbaa*/
  *((unsigned int *)this + 2505) = 0; /*0x5bcbb0*/
  *((unsigned int *)this + 2506) = 0; /*0x5bcbb6*/
  *((unsigned int *)this + 2507) = 80; /*0x5bcbbc*/
  *((unsigned int *)this + 2508) = 25; /*0x5bcbc6*/
  v4 = &this->ToolTipText[232]; /*0x5bcbd0*/
  do /*0x5bcbf5*/
  {
    v5 = (char *)this + v3; /*0x5bcbd6*/
    v6 = v4; /*0x5bcbd9*/
    v7 = 80; /*0x5bcbdb*/
    do /*0x5bcbec*/
    {
      *v5 = 32; /*0x5bcbe0*/
      *(unsigned int *)v6 = 0; /*0x5bcbe3*/
      v6 += 100; /*0x5bcbe5*/
      v5 += 25; /*0x5bcbe8*/
      --v7; /*0x5bcbeb*/
    }
    while ( v7 ); /*0x5bcbec*/
    ++v3; /*0x5bcbee*/
    v4 += 4; /*0x5bcbef*/
  }
  while ( v3 < 25 ); /*0x5bcbf5*/
  *((unsigned char *)this + 10036) = 1; /*0x5bcbff*/
  Text::DrawRepeated((Text *)this, 0, 0, 80, 25); /*0x5bcc06*/
  return (int)this; /*0x5bcc0d*/

}
} // namespace gamemd

// 0x5BCC20
namespace gamemd {
void nullsub_174()
{
  ; /*0x5bcc20*/
}
} // namespace gamemd

// 0x5BCC30
namespace gamemd {
int E4Recv_5BCC30::sub_5BCC30()
{

  return *((unsigned int *)this + 2502); /*0x5bcc36*/

}
} // namespace gamemd

// 0x5BCC60
namespace gamemd {
int E4Recv_5BCC60::sub_5BCC60(int a2, int a3, int a4, int a5)
{

  *((unsigned int *)this + 2505) = a2; /*0x5bcc68*/
  *((unsigned int *)this + 2506) = a3; /*0x5bcc72*/
  *((unsigned int *)this + 2507) = a4; /*0x5bcc7c*/
  *((unsigned int *)this + 2508) = a5; /*0x5bcc82*/
  return a4; /*0x5bcc88*/

}
} // namespace gamemd

// 0x5BCCE0
namespace gamemd {
char E4Recv_5BCCE0::sub_5BCCE0()
{

  return *((unsigned char *)this + 10036); /*0x5bcce6*/

}
} // namespace gamemd

// 0x5BD240
namespace gamemd {
char sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
  char result; // al
  char v4[256]; // [esp+0h] [ebp-300h] BYREF
  wchar_t Buffer[256]; // [esp+100h] [ebp-200h] BYREF

  result = byte_ABF23A; /*0x5bd240*/
  if ( byte_ABF23A ) /*0x5bd24d*/
  {
    vswprintf(Buffer, BufferCount, &Format, *(va_list *)v4); /*0x5bd267*/
    sprintf(v4, "%S", Buffer); /*0x5bd27e*/
// 0x5bd0d0
    return Debug::ScrollText(a1, v4); /*0x5bd292*/
  }
  return result; /*0x5bd297*/
}
} // namespace gamemd

// 0x5BD2E0
namespace gamemd {
char E4Recv_5BD2E0::sub_5BD2E0(ObjectClass * aP1, int a3, int a4, int a5)
{

  char result; // al
  char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd2e0*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd2f0*/
  {
    *((unsigned int *)this + 2503) = a3; /*0x5bd300*/
    *((unsigned int *)this + 2504) = a4; /*0x5bd306*/
    if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd313*/
      *((unsigned int *)this + 2500) = a5; /*0x5bd31c*/
    sprintf(Buffer, (const char *const)&stru_82BA00.NumberImpassableRows, aP1); /*0x5bd334*/
    return Debug::ScrollText((int)this, Buffer); /*0x5bd343*/
  }
  return result; /*0x5bd348*/

}
} // namespace gamemd

// 0x5BD560
namespace gamemd {
unsigned int * E4Recv_5BD560::sub_5BD560()
{

  LOBYTE(this->AbstractClass) = 0; /*0x5bd564*/
  ((unsigned int *)this)[0] = 0; /*0x5bd566*/
  ((unsigned int *)this)[0] = 0; /*0x5bd569*/
  ((unsigned int *)this)[0] = 0; /*0x5bd56c*/
  return &this->AbstractClass; /*0x5bd56f*/

}
} // namespace gamemd

// 0x5BD7E0
namespace gamemd {
void sub_5BD7E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bd7ec*/
  dbl_ABF270 = Math::Sqrt(v0 + v0); /*0x5bd7fe*/
}
} // namespace gamemd

// 0x5BD810
namespace gamemd {
void sub_5BD810()
{
  dbl_ABF2D0 = dbl_ABF270 / 60.0; /*0x5bd81c*/
}
} // namespace gamemd

// 0x5BD830
namespace gamemd {
void sub_5BD830()
{
  dbl_ABF2B8 = 1.0 / dbl_ABF2D0; /*0x5bd83c*/
}
} // namespace gamemd

// 0x5BD850
namespace gamemd {
void sub_5BD850()
{
  dbl_ABF2B0 = 0.0174532925199433 * 45.0; /*0x5bd85c*/
}
} // namespace gamemd

// 0x5BD870
namespace gamemd {
void sub_5BD870()
{
  dbl_ABF278 = 0.0174532925199433 * 60.0; /*0x5bd87c*/
}
} // namespace gamemd

// 0x5BD890
namespace gamemd {
void sub_5BD890()
{
  dbl_ABF248 = 0.0174532925199433 * 90.0; /*0x5bd89c*/
}
} // namespace gamemd

// 0x5BD8B0
namespace gamemd {
long long sub_5BD8B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF248 - dbl_ABF278); /*0x5bd8c2*/
  result = Math::RoundToInt(v0 * dbl_ABF270 * 0.5); /*0x5bd8d6*/
  dword_ABF2D8 = result; /*0x5bd8db*/
  return result; /*0x5bd8e0*/
}
} // namespace gamemd

// 0x5BD8F0
namespace gamemd {
void sub_5BD8F0()
{
  dbl_ABF280 = Math::ArcTan((double)dword_ABF2D8 * 0.00390625); /*0x5bd907*/
}
} // namespace gamemd

// 0x5BD920
namespace gamemd {
void sub_5BD920()
{
  dbl_ABF298 = Math::ArcTan((double)(2 * dword_ABF2D8) / dbl_ABF270); /*0x5bd942*/
}
} // namespace gamemd

// 0x5BD950
namespace gamemd {
long long sub_5BD950()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF2D8) + 0.5); /*0x5bd96b*/
  dword_ABF2CC = result; /*0x5bd970*/
  return result; /*0x5bd976*/
}
} // namespace gamemd

// 0x5BD980
namespace gamemd {
int sub_5BD980()
{
  word_ABF268 = 0; /*0x5bd982*/
  word_ABF26A = 0; /*0x5bd988*/
  return 0; /*0x5bd98e*/
}
} // namespace gamemd

// 0x5BD990
namespace gamemd {
int sub_5BD990()
{
  dword_ABF288 = 0; /*0x5bd992*/
  dword_ABF28C = 0; /*0x5bd997*/
  dword_ABF290 = 0; /*0x5bd99c*/
  return 0; /*0x5bd9a1*/
}
} // namespace gamemd

// 0x5BD9B0
namespace gamemd {
int sub_5BD9B0()
{
  dword_ABF2C8 = 0; /*0x5bd9b5*/
  dword_ABF2C0 = 128; /*0x5bd9bf*/
  dword_ABF2C4 = 128; /*0x5bd9c4*/
  return 128; /*0x5bd9c9*/
}
} // namespace gamemd

// 0x5BD9D0
namespace gamemd {
int sub_5BD9D0()
{
  dword_ABF258 = 0; /*0x5bd9d2*/
  dword_ABF25C = 0; /*0x5bd9d7*/
  dword_ABF260 = 0; /*0x5bd9dc*/
  dword_ABF264 = 0; /*0x5bd9e1*/
  return 0; /*0x5bd9e6*/
}
} // namespace gamemd

// 0x5BD9F0
namespace gamemd {
int sub_5BD9F0()
{
  dword_ABF2A0 = Timer::GetTicks(); /*0x5bd9ff*/
  dword_ABF2A8 = 0; /*0x5bda04*/
  return atexit(sub_5BDA20); /*0x5bda14*/
}
} // namespace gamemd

// 0x5BDA20
namespace gamemd {
void sub_5BDA20()
{
  if ( (byte_ABF250 & 1) == 0 ) /*0x5bda2a*/
    byte_ABF250 |= 1u; /*0x5bda2e*/
}
} // namespace gamemd

// 0x5BDA40
namespace gamemd {
unsigned char * E4Recv_5BDA40::sub_5BDA40()
{

  SmallFunc_692290((int)this); /*0x5bda43*/
  this->MouseClass_field_0x0 = &vt_MouseClass; /*0x5bda4a*/
  *((unsigned char *)this + 21852) = 0; /*0x5bda50*/
  *((unsigned int *)this + 5464) = 0; /*0x5bda56*/
  *((unsigned int *)this + 5465) = 0; /*0x5bda5c*/
  *((unsigned int *)this + 5466) = 0; /*0x5bda62*/
  *((unsigned int *)this + 5446) = &vt_MouseClass; /*0x5bda68*/
  return this; /*0x5bda74*/

}
} // namespace gamemd

// 0x5BEAB0
namespace gamemd {
int sub_5BEAB0()
{
  dword_ABF2E8 = 0; /*0x5beab2*/
  dword_ABF2EC = 0; /*0x5beab7*/
  dword_ABF2F0 = 0; /*0x5beabc*/
  dword_ABF2F4 = 0; /*0x5beac1*/
  return 0; /*0x5beac6*/
}
} // namespace gamemd

// 0x5BEAD0
namespace gamemd {
void sub_5BEAD0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5beadc*/
  dbl_ABF300 = Math::Sqrt(v0 + v0); /*0x5beaee*/
}
} // namespace gamemd

// 0x5BEB00
namespace gamemd {
void sub_5BEB00()
{
  dbl_ABF350 = dbl_ABF300 / 60.0; /*0x5beb0c*/
}
} // namespace gamemd

// 0x5BEB20
namespace gamemd {
void sub_5BEB20()
{
  dbl_ABF338 = 1.0 / dbl_ABF350; /*0x5beb2c*/
}
} // namespace gamemd

// 0x5BEB40
namespace gamemd {
void sub_5BEB40()
{
  dbl_ABF330 = 0.0174532925199433 * 45.0; /*0x5beb4c*/
}
} // namespace gamemd

// 0x5BEB60
namespace gamemd {
void sub_5BEB60()
{
  dbl_ABF308 = 0.0174532925199433 * 60.0; /*0x5beb6c*/
}
} // namespace gamemd

// 0x5BEB80
namespace gamemd {
void sub_5BEB80()
{
  dbl_ABF2E0 = 0.0174532925199433 * 90.0; /*0x5beb8c*/
}
} // namespace gamemd

// 0x5BEBA0
namespace gamemd {
long long sub_5BEBA0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF2E0 - dbl_ABF308); /*0x5bebb2*/
  result = Math::RoundToInt(v0 * dbl_ABF300 * 0.5); /*0x5bebc6*/
  dword_ABF358 = result; /*0x5bebcb*/
  return result; /*0x5bebd0*/
}
} // namespace gamemd

// 0x5BEBE0
namespace gamemd {
void sub_5BEBE0()
{
  dbl_ABF310 = Math::ArcTan((double)dword_ABF358 * 0.00390625); /*0x5bebf7*/
}
} // namespace gamemd

// 0x5BEC10
namespace gamemd {
void sub_5BEC10()
{
  dbl_ABF328 = Math::ArcTan((double)(2 * dword_ABF358) / dbl_ABF300); /*0x5bec32*/
}
} // namespace gamemd

// 0x5BEC40
namespace gamemd {
long long sub_5BEC40()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF358) + 0.5); /*0x5bec5b*/
  dword_ABF34C = result; /*0x5bec60*/
  return result; /*0x5bec66*/
}
} // namespace gamemd

// 0x5BEC70
namespace gamemd {
int sub_5BEC70()
{
  word_ABF2F8 = 0; /*0x5bec72*/
  word_ABF2FA = 0; /*0x5bec78*/
  return 0; /*0x5bec7e*/
}
} // namespace gamemd

// 0x5BEC80
namespace gamemd {
int sub_5BEC80()
{
  dword_ABF318 = 0; /*0x5bec82*/
  dword_ABF31C = 0; /*0x5bec87*/
  dword_ABF320 = 0; /*0x5bec8c*/
  return 0; /*0x5bec91*/
}
} // namespace gamemd

// 0x5BECA0
namespace gamemd {
int sub_5BECA0()
{
  dword_ABF348 = 0; /*0x5beca5*/
  dword_ABF340 = 128; /*0x5becaf*/
  dword_ABF344 = 128; /*0x5becb4*/
  return 128; /*0x5becb9*/
}
} // namespace gamemd

// 0x5BECC0
namespace gamemd {
int E4Recv_5BECC0::sub_5BECC0()
{

  int v1; // esi
  int result; // eax
  ObjectClass *v3; // edi
  int v4; // ebp
  int v5; // edx
  char *v6; // eax
  char v7; // bl

  v1 = 0; /*0x5becc9*/
  result = 256 - (unsigned int)this; /*0x5beccb*/
  v3 = this; /*0x5becce*/
  do /*0x5bed0c*/
  {
    v4 = v1 + 1; /*0x5becd4*/
    v5 = v1 + 1; /*0x5becdd*/
    if ( v1 + 1 < 256 ) /*0x5becdf*/
    {
      v6 = (char *)v3 + result + v1 + (unsigned int)this; /*0x5bece5*/
      do /*0x5becf8*/
      {
        v7 = *v6; /*0x5bece7*/
        v6 += 256; /*0x5bece9*/
        *((unsigned char *)&v3->AbstractClass + v5++) = v7; /*0x5becee*/
      }
      while ( v5 < 256 ); /*0x5becf8*/
      result = 256 - (unsigned int)this; /*0x5becfa*/
    }
    ++v1; /*0x5becfe*/
    v3 = (ObjectClass *)((char *)v3 + 256); /*0x5bed00*/
  }
  while ( v4 < 255 ); /*0x5bed0c*/
  return result; /*0x5bed0e*/

}
} // namespace gamemd

// 0x5BF360
namespace gamemd {
int E4Recv_5BF360::sub_5BF360()
{

  int result; // eax

  if ( this ) /*0x5bf362*/
    return MessageListClass::AddMessage( /*0x5bf37e*/
             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
             0,
             0,
             (wchar_t *)((unsigned int *)this)[0],
             0,
             16454,
             (int)((unsigned int *)this)[0],
             0);
  return result; /*0x5bf383*/

}
} // namespace gamemd

// 0x5BF5C0
namespace gamemd {
int sub_5BF5C0()
{
  dword_ABF368 = 0; /*0x5bf5c2*/
  dword_ABF36C = 0; /*0x5bf5c7*/
  dword_ABF370 = 0; /*0x5bf5cc*/
  dword_ABF374 = 0; /*0x5bf5d1*/
  return 0; /*0x5bf5d6*/
}
} // namespace gamemd

// 0x5BF5E0
namespace gamemd {
void sub_5BF5E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5bf5ec*/
  dbl_ABF380 = Math::Sqrt(v0 + v0); /*0x5bf5fe*/
}
} // namespace gamemd

// 0x5BF610
namespace gamemd {
void sub_5BF610()
{
  dbl_ABF3E8 = dbl_ABF380 / 60.0; /*0x5bf61c*/
}
} // namespace gamemd

// 0x5BF630
namespace gamemd {
void sub_5BF630()
{
  dbl_ABF3D0 = 1.0 / dbl_ABF3E8; /*0x5bf63c*/
}
} // namespace gamemd

// 0x5BF650
namespace gamemd {
void sub_5BF650()
{
  dbl_ABF3C8 = 0.0174532925199433 * 45.0; /*0x5bf65c*/
}
} // namespace gamemd

// 0x5BF670
namespace gamemd {
void sub_5BF670()
{
  dbl_ABF388 = 0.0174532925199433 * 60.0; /*0x5bf67c*/
}
} // namespace gamemd

// 0x5BF690
namespace gamemd {
void sub_5BF690()
{
  dbl_ABF360 = 0.0174532925199433 * 90.0; /*0x5bf69c*/
}
} // namespace gamemd

// 0x5BF6B0
namespace gamemd {
long long sub_5BF6B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF360 - dbl_ABF388); /*0x5bf6c2*/
  result = Math::RoundToInt(v0 * dbl_ABF380 * 0.5); /*0x5bf6d6*/
  dword_ABF3F0 = result; /*0x5bf6db*/
  return result; /*0x5bf6e0*/
}
} // namespace gamemd

// 0x5BF6F0
namespace gamemd {
void sub_5BF6F0()
{
  dbl_ABF3A8 = Math::ArcTan((double)dword_ABF3F0 * 0.00390625); /*0x5bf707*/
}
} // namespace gamemd

// 0x5BF720
namespace gamemd {
void sub_5BF720()
{
  dbl_ABF3C0 = Math::ArcTan((double)(2 * dword_ABF3F0) / dbl_ABF380); /*0x5bf742*/
}
} // namespace gamemd

// 0x5BF750
namespace gamemd {
long long sub_5BF750()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF3F0) + 0.5); /*0x5bf76b*/
  dword_ABF3E4 = result; /*0x5bf770*/
  return result; /*0x5bf776*/
}
} // namespace gamemd

// 0x5BF780
namespace gamemd {
int sub_5BF780()
{
  word_ABF378 = 0; /*0x5bf782*/
  word_ABF37A = 0; /*0x5bf788*/
  return 0; /*0x5bf78e*/
}
} // namespace gamemd

// 0x5BF790
namespace gamemd {
int sub_5BF790()
{
  dword_ABF3B0 = 0; /*0x5bf792*/
  dword_ABF3B4 = 0; /*0x5bf797*/
  dword_ABF3B8 = 0; /*0x5bf79c*/
  return 0; /*0x5bf7a1*/
}
} // namespace gamemd

// 0x5BF7B0
namespace gamemd {
int sub_5BF7B0()
{
  dword_ABF3E0 = 0; /*0x5bf7b5*/
  dword_ABF3D8 = 128; /*0x5bf7bf*/
  dword_ABF3DC = 128; /*0x5bf7c4*/
  return 128; /*0x5bf7c9*/
}
} // namespace gamemd

// 0x5BF7D0
namespace gamemd {
int sub_5BF7D0()
{
  dword_ABF394 = 0; /*0x5bf7d7*/
  dword_ABF398 = 0; /*0x5bf7dc*/
  byte_ABF39C = 1; /*0x5bf7e1*/
  byte_ABF39D = 0; /*0x5bf7e8*/
  dword_ABF390 = (int)&DynamicVectorClass_char_const___vftable; /*0x5bf7ed*/
  dword_ABF3A4 = 10; /*0x5bf7f7*/
  dword_ABF3A0 = 0; /*0x5bf801*/
  return atexit(sub_5BF810); /*0x5bf80c*/
}
} // namespace gamemd

// 0x5BF810
namespace gamemd {
void sub_5BF810()
{
  dword_ABF390 = (int)&VectorClass_char_const___vftable; /*0x5bf818*/
  if ( dword_ABF394 && byte_ABF39D ) /*0x5bf82c*/
  {
    RA2_OPDEL(dword_ABF394); /*0x5bf82f*/
    dword_ABF394 = 0; /*0x5bf837*/
  }
  byte_ABF39D = 0; /*0x5bf83d*/
  dword_ABF398 = 0; /*0x5bf843*/
}
} // namespace gamemd

// 0x5BF850
namespace gamemd {
int sub_5BF850()
{
  int v0; // esi
  int v1; // edi
  int *v2; // ebx
  int v3; // eax
  int v4; // ebp
  int v5; // eax
  unsigned int v7; // [esp-Ch] [ebp-1Ch]
  int v8; // [esp-8h] [ebp-18h]

  v0 = *(unsigned int *)(dword_ABF3F4 + 8); /*0x5bf858*/
  v1 = (*(int (**)(int, unsigned int))(*(unsigned int *)v0 + 92))(v0, 0); /*0x5bf869*/
  v2 = *(int **)dword_ABF3F4; /*0x5bf873*/
  v8 = *(unsigned int *)(dword_ABF3F4 + 40); /*0x5bf87a*/
  v7 = *(unsigned int *)(dword_ABF3F4 + 36); /*0x5bf87b*/
  v3 = (*(int (**)(int))(*(unsigned int *)v0 + 128))(v0); /*0x5bf87e*/
  v4 = (*(int (**)(int, int))(*(unsigned int *)v0 + 116))(v0, v3); /*0x5bf88c*/
  v5 = (*(int (**)(int))(*(unsigned int *)v0 + 112))(v0); /*0x5bf892*/
  Render_Load_759EB0(v2, 0, v4 / v5, v7, v8, 0); /*0x5bf8a1*/
  return v1; /*0x5bf8a8*/
}
} // namespace gamemd

// 0x5BF8B0
namespace gamemd {
int sub_5BF8B0()
{
  return (*(int (**)(unsigned int, ObjectClass *))(**(unsigned int **)(g_MissionQueueFrame.localVariables[604] + 8) + 96))(
           *(unsigned int *)(g_MissionQueueFrame.localVariables[604] + 8),
           this);
}
} // namespace gamemd
