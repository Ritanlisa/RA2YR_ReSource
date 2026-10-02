// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
}
#endif
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/hash_table.hpp"
#include "e4/classes/ConnectionClass_e4.hpp"
#include "core/stream_ext.hpp"
#include "core/utility_ext.hpp"
#include "house/house.hpp"
#include "misc/misc_ext.hpp"
#include "network/connection.hpp"
#include "network/network_ext.hpp"
#include "network/winsock.hpp"
#include "object/object.hpp"
#include "render/display.hpp"
#include "render/render_ext.hpp"
#include "render/surface.hpp"
#include "structure/building.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cc_file.hpp"
#include "system/cell.hpp"
#include "system/file_class.hpp"
#include "system/game_systems.hpp"
#include "system/ini_class.hpp"
#include "type/object_type.hpp"
#include "ui/command_ext.hpp"
#include "e4/classes/Network_e4.hpp"

// 0x48C650
namespace gamemd {
unsigned int * ConnectionClass::QueryInterface(char a2) {
    void *v3; // eax
    void (__thiscall ***PlayerIndex)(unsigned int, int); // ecx

    v3 = (void *)*((unsigned int *)this + 8); /*0x48c653*/
    *(unsigned int *)this->__pad_0 = 0; /*0x48c656*/
    RA2_OPDEL(v3); /*0x48c65d*/
    PlayerIndex = (void (__thiscall ***)(unsigned int, int))this->PlayerIndex; /*0x48c662*/
    if ( PlayerIndex ) /*0x48c66a*/
      (**PlayerIndex)((unsigned int)PlayerIndex, 1); /*0x48c670*/
    if ( (a2 & 1) != 0 ) /*0x48c677*/
      RA2_OPDEL(this); /*0x48c67a*/
    return this->__pad_0; /*0x48c684*/
}
} // namespace gamemd

// 0x53ED20
namespace gamemd {
int16_t NetworkID::Assign(unsigned int *a2, int a3, int16_t a4) {
    this->NetworkID_field_0x04 = *(unsigned int *)a3; /*0x53ed2a*/
    *((unsigned short *)this + 4) = *(unsigned short *)(a3 + 4); /*0x53ed31*/
    if ( dword_828140 == 1 ) /*0x53ed3d*/
    {
      *(unsigned int *)this->__pad_0 = *a2; /*0x53ed45*/
      return (int16_t)a2; /*0x53ed3f*/
    }
    else
    {
      *(unsigned int *)this->__pad_0 = 0; /*0x53ed4f*/
      *(unsigned short *)this->__pad_0 = a4; /*0x53ed55*/
      return a4; /*0x53ed4a*/
    }
}
} // namespace gamemd

// 0x53EF30
namespace gamemd {
int NetworkID::Compare(int a2) {
    return memcmp(this + 4, (const void *)(a2 + 4), dword_828140 != 2 ? 6 : 4) == 0;
}
} // namespace gamemd

// 0x53F850
namespace gamemd {
unsigned int * IPXConnClass::QueryInterface(char a2) {
    *(unsigned int *)this->ConnectionClass = 0; /*0x53f853*/
    ConnectionClass::dtor((ConnectionClass *)this); /*0x53f859*/
    if ( (a2 & 1) != 0 ) /*0x53f863*/
      RA2_OPDEL(this); /*0x53f866*/
    return this->ConnectionClass; /*0x53f870*/
}
} // namespace gamemd

// 0x53FCB0
namespace gamemd {
int IPXGlobalConnClass::GetQueueSize(unsigned short *a2, signed int a3, int *a4, int a5) {
    int IPXGlobalConnClass_field_0x04; // ecx
    int v8; // edi
    unsigned int *TileIndex; // eax
    int v10; // ecx
    int v11; // ebx
    unsigned int v12; // edi
    int v13; // ebx
    unsigned int *v14; // eax
    int v15; // ecx
    int v16; // eax
    int v17; // eax
    int16_t v18; // cx
    int v19; // eax
    char v20[4]; // [esp+8h] [ebp-1Ch] BYREF
    int v21; // [esp+Ch] [ebp-18h]
    int v22; // [esp+10h] [ebp-14h]
    int16_t IPXGlobalConnClass_field_0x24; // [esp+14h] [ebp-10h] BYREF
    char v24; // [esp+16h] [ebp-Eh]
    char v25; // [esp+17h] [ebp-Dh]
    int v26; // [esp+18h] [ebp-Ch]
    int16_t v27; // [esp+22h] [ebp-2h]

    if ( *a2 != IDA_LOWORD(this->IPXGlobalConnClass_field_0x24) ) /*0x53fcc3*/
      return 0; /*0x53fccc*/
    if ( !*((unsigned char *)a2 + 2) ) /*0x53fcd9*/
    {
      v11 = a5; /*0x53fd92*/
      *(unsigned int *)v20 = *a4; /*0x53fd9b*/
      v21 = a4[1]; /*0x53fda2*/
      v22 = a4[2]; /*0x53fda9*/
      if ( (unsigned short)a5 ) /*0x53fdad*/
        ((Network*)(gamemd::IPXManagerClass *)((Network *)v20))->SetPort((void *)(a5)); /*0x53fdb4*/
      v12 = 0; /*0x53fdbf*/
      if ( *((int *)this + 53) <= 0 ) /*0x53fdc3*/
      {
  LABEL_24:
        if ( !ConnectionClass::allocPacketSlot((ConnectionClass *)this->IPXGlobalConnClass_field_0x04, a2, a3, v20, 12) ) /*0x53fe20*/
          goto LABEL_30; /*0x53fe20*/
        v14 = (unsigned int *)(*((unsigned int *)this + 51) + 12 * *((unsigned int *)this + 54)); /*0x53fe31*/
        *v14 = *(unsigned int *)v20; /*0x53fe38*/
        v14[1] = v21; /*0x53fe3e*/
        v14[2] = v22; /*0x53fe45*/
        *(unsigned int *)(*((unsigned int *)this + 52) + 4 * *((unsigned int *)this + 54)) = *((unsigned int *)a2 + 1); /*0x53fe57*/
        v15 = *((unsigned int *)this + 53); /*0x53fe60*/
        v16 = *((unsigned int *)this + 54) + 1; /*0x53fe67*/
        *((unsigned int *)this + 54) = v16; /*0x53fe69*/
        if ( v16 >= v15 ) /*0x53fe71*/
          *((unsigned int *)this + 54) = 0; /*0x53fe73*/
      }
      else
      {
        v13 = 0; /*0x53fdc5*/
        while ( 1 ) /*0x53fdc7*/
        {
          if ( v12 >= *(unsigned int *)(this->IPXGlobalConnClass_field_0x04 + 60) ) /*0x53fdcd*/
          {
  LABEL_23:
            v11 = a5; /*0x53fe05*/
            goto LABEL_24; /*0x53fe05*/
          }
          if ( (uint8_t)GUID::Compare(v20, v13 + *((unsigned int *)this + 51)) /*0x53fdf1*/
            && *((unsigned int *)a2 + 1) == *(unsigned int *)(*((unsigned int *)this + 52) + 4 * v12) )
          {
            break; /*0x53fdf1*/
          }
          ++v12; /*0x53fdfd*/
          v13 += 12; /*0x53fdfe*/
          if ( (signed int)v12 >= *((unsigned int *)this + 53) ) /*0x53fe03*/
            goto LABEL_23; /*0x53fe03*/
        }
        v11 = a5; /*0x53fe86*/
      }
      v17 = *((unsigned int *)a2 + 1); /*0x53fe8e*/
      v18 = *((unsigned short *)this + 92); /*0x53fe91*/
      IPXGlobalConnClass_field_0x24 = this->IPXGlobalConnClass_field_0x24; /*0x53fe98*/
      v24 = 2; /*0x53fe9f*/
      v26 = v17; /*0x53feaa*/
      v27 = v18; /*0x53feb4*/
      v25 = 0; /*0x53feb9*/
      Debug::Log(); /*0x53febe*/
      v19 = dword_A8EA0C; /*0x53fec3*/
      IDA_LOBYTE(v19) = this == (IPXGlobalConnClass *)dword_A8EA0C; /*0x53fed3*/
      if ( (*(int (__thiscall **)(IPXGlobalConnClass *, int16_t *, int, int *, int, int, int))(*(unsigned int *)this->__pad_0 /*0x53fee4*/
                                                                                             + 36))(
             this,
             &IPXGlobalConnClass_field_0x24,
             16,
             a4,
             12,
             v19,
             v11) )
      {
        return 1; /*0x53fee9*/
      }
  LABEL_30:
      Debug::Log(); /*0x53fef0*/
      return 1; /*0x53fef0*/
    }
    if ( *((unsigned char *)a2 + 2) == 1 ) /*0x53fce0*/
    {
      *(unsigned int *)v20 = *a4; /*0x53fd45*/
      v21 = a4[1]; /*0x53fd4c*/
      v22 = a4[2]; /*0x53fd53*/
      if ( (unsigned short)a5 ) /*0x53fd5e*/
        ((Network*)(Network *)v20)->SetPort(a5); /*0x53fd65*/
      ConnectionClass::allocPacketSlot((ConnectionClass *)this->IPXGlobalConnClass_field_0x04, a2, a3, v20, 12); /*0x53fd7a*/
      return 1; /*0x53fd8b*/
    }
    if ( *((unsigned char *)a2 + 2) != 2 ) /*0x53fce3*/
      return 1; /*0x53fce3*/
    IPXGlobalConnClass_field_0x04 =(int)this->IPXGlobalConnClass_field_0x04; /*0x53fce9*/
    v8 = 0; /*0x53fcec*/
    if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) <= 0 ) /*0x53fcf3*/
      return 1; /*0x53fefb*/
    while ( 1 ) /*0x53fcfa*/
    {
      TileIndex = (unsigned int *)Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v8); /*0x53fcfa*/
      v10 = TileIndex[5]; /*0x53fcff*/
      if ( *((unsigned int *)a2 + 1) == *(unsigned int *)(v10 + 4) && !*(unsigned char *)(v10 + 2) ) /*0x53fd0a*/
        break; /*0x53fd0a*/
      IPXGlobalConnClass_field_0x04 =(int)this->IPXGlobalConnClass_field_0x04; /*0x53fd11*/
      if ( ++v8 >= *(unsigned int *)(IPXGlobalConnClass_field_0x04 + 40) ) /*0x53fd18*/
        return 1; /*0x53fd26*/
    }
    *TileIndex |= 2u; /*0x53fd30*/
    return 1; /*0x53fcc5*/
}
} // namespace gamemd

// 0x540030
namespace gamemd {
unsigned int * IPXGlobalConnClass::Disconnect(int a2) {
    Terrain *IPXGlobalConnClass_field_0x04; // ecx
    unsigned int *result; // eax

    IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x540030*/
    result = (unsigned int *)a2; /*0x540033*/
    if ( a2 < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ) /*0x54003a*/
    {
      result = (unsigned int *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, a2); /*0x54003d*/
      *result |= 2u; /*0x540042*/
    }
    return result; /*0x540045*/
}
} // namespace gamemd

// 0x542350
namespace gamemd {
int IPXManagerClass::GetAddress(int a2) {
    int v3; // ecx
    int v4; // eax
    int result; // eax
    IPXManagerClass *v6; // edx
    int v7; // esi

    if ( !this->Initialized ) /*0x542353*/
      return 0; /*0x542353*/
    if ( !this->Active ) /*0x54235a*/
      return 0; /*0x54235a*/
    v3 = *((unsigned int *)this + 17); /*0x542361*/
    if ( !v3 ) /*0x542366*/
      return 0; /*0x5423af*/
    if ( a2 != -1 ) /*0x54236f*/
    {
      v4 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a2); /*0x542376*/
      if ( v4 != -1 ) /*0x54237c*/
        return *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + v4 + 10) + 4) + 40); /*0x542389*/
      return 0; /*0x54237c*/
    }
    result = 0; /*0x54238c*/
    if ( v3 > 0 ) /*0x542390*/
    {
      v6 = this + 5; /*0x542392*/
      v7 = *((unsigned int *)this + 17); /*0x542395*/
      do /*0x5423a9*/
      {
        if ( *(unsigned int *)(*(unsigned int *)(v6->Socket + 4) + 40) > result ) /*0x5423a1*/
          result = *(unsigned int *)(*(unsigned int *)(v6->Socket + 4) + 40); /*0x5423a3*/
        v6 = (IPXManagerClass *)((char *)v6 + 4); /*0x5423a5*/
        --v7; /*0x5423a8*/
      }
      while ( v7 ); /*0x5423a9*/
    }
    return result; /*0x542382*/
}
} // namespace gamemd

// 0x5423C0
namespace gamemd {
int IPXManagerClass::SetAddress(int a2) {
    int v3; // ecx
    int v4; // eax
    int result; // eax
    IPXManagerClass *v6; // edx
    int v7; // esi

    if ( !this->Initialized ) /*0x5423c3*/
      return 0; /*0x5423c3*/
    if ( !this->Active ) /*0x5423ca*/
      return 0; /*0x5423ca*/
    v3 = *((unsigned int *)this + 17); /*0x5423d1*/
    if ( !v3 ) /*0x5423d6*/
      return 0; /*0x54241f*/
    if ( a2 != -1 ) /*0x5423df*/
    {
      v4 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a2); /*0x5423e6*/
      if ( v4 != -1 ) /*0x5423ec*/
        return *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + v4 + 10) + 4) + 56); /*0x5423f9*/
      return 0; /*0x5423ec*/
    }
    result = 0; /*0x5423fc*/
    if ( v3 > 0 ) /*0x542400*/
    {
      v6 = this + 5; /*0x542402*/
      v7 = *((unsigned int *)this + 17); /*0x542405*/
      do /*0x542419*/
      {
        if ( *(unsigned int *)(*(unsigned int *)(v6->Socket + 4) + 56) > result ) /*0x542411*/
          result = *(unsigned int *)(*(unsigned int *)(v6->Socket + 4) + 56); /*0x542413*/
        v6 = (IPXManagerClass *)((char *)v6 + 4); /*0x542415*/
        --v7; /*0x542418*/
      }
      while ( v7 ); /*0x542419*/
    }
    return result; /*0x5423f2*/
}
} // namespace gamemd

// 0x542450
namespace gamemd {
unsigned int IPXManagerClass::GetQueueSize() {
    unsigned int v2; // ebp
    int v3; // edi
    IPXManagerClass *v4; // ebx
    unsigned int BridgeIndex; // eax
    int v6; // esi
    unsigned int result; // eax

    v2 = 0; /*0x542455*/
    v3 = 0; /*0x542457*/
    if ( *((int *)this + 17) > 0 ) /*0x54245e*/
    {
      v4 = this + 5; /*0x542461*/
      do /*0x54247d*/
      {
        BridgeIndex = CellClass::GetBridgeIndex(*(CellClass **)(v4->Socket + 4)); /*0x542469*/
        if ( BridgeIndex > v2 ) /*0x542470*/
          v2 = BridgeIndex; /*0x542472*/
        ++v3; /*0x542477*/
        v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542478*/
      }
      while ( v3 < *((unsigned int *)this + 17) ); /*0x54247d*/
    }
    v6 = *((unsigned int *)this + 20); /*0x542480*/
    if ( !v6 ) /*0x542485*/
      return v2; /*0x542485*/
    result = CellClass::GetBridgeIndex(*(CellClass **)(v6 + 4)); /*0x54248a*/
    if ( result <= v2 ) /*0x542491*/
      return v2; /*0x542493*/
    return result; /*0x542495*/
}
} // namespace gamemd

// 0x5424A0
namespace gamemd {
int IPXManagerClass::CheckStatus(int a2) {
    return CellClass::GetBridgeIndex(*(CellClass **)(*((unsigned int *)this + a2 + 10) + 4)); /*0x5424b0*/
}
} // namespace gamemd

// 0x542520
namespace gamemd {
int IPXManagerClass::ProcessQueue() {
    int v2; // ebx
    int result; // eax
    IPXManagerClass *v4; // edi
    int *v5; // esi
    Object *v6; // ecx
    int *v7; // eax
    int v8; // ecx
    int v9; // eax
    unsigned int v10; // kr00_4
    signed int v11; // eax

    v2 = 0; /*0x542524*/
    result = *((unsigned int *)this + 17); /*0x542526*/
    if ( result > 0 ) /*0x54252b*/
    {
      v4 = this + 5; /*0x542533*/
      v5 = (int *)&unk_A8B5B4; /*0x542536*/
      do /*0x54260c*/
      {
        v6 = (Object *)*((unsigned int *)stru_A80220.? + *(unsigned int *)(v4->Socket + 100)); /*0x542546*/
        if ( v6 && v6 != dword_A83D4C ) /*0x542557*/
        {
          if ( !*((unsigned char *)v5 - 64) ) /*0x54255d*/
          {
            CopyWideToChar((unsigned char *)v5 - 64, (char *)(v4->Socket + 104), -1); /*0x54256c*/
            v7 = (int *)(v4->Socket + 76); /*0x542576*/
            v5[7] = *v7; /*0x54257b*/
            v5[8] = v7[1]; /*0x542580*/
            v5[9] = v7[2]; /*0x542586*/
          }
          v8 = 1000 * IPXManagerClass::init(*(IPXManagerClass **)(v4->Socket + 4)); /*0x5425a1*/
          v9 = *v5; /*0x5425b2*/
          if ( *v5 <= v8 / 60 ) /*0x5425b6*/
            v9 = v8 / 60; /*0x5425b8*/
          *v5 = v9; /*0x5425ba*/
          v10 = 1000 * CellClass::GetBridgeIndex(*(CellClass **)(v4->Socket + 4)); /*0x5425c6*/
          v11 = v5[4]; /*0x5425d9*/
          if ( (int)(v10 / 0x3C) > v11 ) /*0x5425e1*/
            v11 = v10 / 0x3C; /*0x5425e3*/
          v5[4] = v11; /*0x5425e5*/
          v5[1] = *(unsigned int *)(v4->Socket + 8); /*0x5425ed*/
          v5[2] = *(unsigned int *)(v4->Socket + 12); /*0x5425f5*/
          v5[3] = *(unsigned int *)(v4->Socket + 16); /*0x5425fd*/
        }
        result = *((unsigned int *)this + 17); /*0x542600*/
        ++v2; /*0x542603*/
        v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542604*/
        v5 += 26; /*0x542607*/
      }
      while ( v2 < result ); /*0x54260c*/
    }
    return result; /*0x542614*/
}
} // namespace gamemd

// 0x542EC0
namespace gamemd {
int IPXManagerClass::Flush(char a2) {
    int v3; // edi
    IPXManagerClass *v4; // ebx
    int v5; // eax
    int result; // eax
    int v7; // esi

    v3 = 0; /*0x542ec4*/
    if ( *((int *)this + 17) > 0 ) /*0x542ecb*/
    {
      v4 = this + 5; /*0x542ed3*/
      do /*0x542eea*/
      {
        Rect::SetRedraw(*(Rect **)(v4->Socket + 4), a2); /*0x542edc*/
        ++v3; /*0x542ee4*/
        v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542ee5*/
      }
      while ( v3 < *((unsigned int *)this + 17) ); /*0x542eea*/
    }
    v5 = *((unsigned int *)this + 18); /*0x542eee*/
    if ( v5 ) /*0x542ef3*/
      Rect::SetRedraw(*(Rect **)(v5 + 4), 1); /*0x542efa*/
    result = *((unsigned int *)this + 19); /*0x542eff*/
    if ( result ) /*0x542f04*/
      result = Rect::SetRedraw(*(Rect **)(result + 4), 1); /*0x542f0b*/
    v7 = *((unsigned int *)this + 20); /*0x542f10*/
    if ( v7 ) /*0x542f15*/
      return Rect::SetRedraw(*(Rect **)(v7 + 4), 1); /*0x542f1c*/
    return result; /*0x542f21*/
}
} // namespace gamemd

// 0x543100
namespace gamemd {
unsigned int * IPXManagerClass::getPlayerName(char a2) {
    this->m_0 = (int)0; /*0x543109*/
    if ( (a2 & 1) != 0 ) /*0x54310f*/
      RA2_OPDEL(this); /*0x543112*/
    return &this->m_0; /*0x54311c*/
}
} // namespace gamemd

// 0x54EE60
namespace gamemd {
unsigned int * NetworkSession::ResetState() {
    *(unsigned int *)this->__pad_0 = 0; /*0x54ee6a*/
    this->NetworkSession_field_0x04 = 0; /*0x54ee6c*/
    *((unsigned int *)this + 3) = 0; /*0x54ee6f*/
    *((unsigned int *)this + 4) = 0; /*0x54ee72*/
    *((unsigned int *)this + 197) = 0; /*0x54ee78*/
    *((unsigned int *)this + 198) = 0; /*0x54ee7e*/
    memset((char *)this + 20, 0, 0x100u); /*0x54ee84*/
    return this->__pad_0; /*0x54ee88*/
}
} // namespace gamemd

// 0x560480
namespace gamemd {
int NetworkOptions::DlgProc(HWND hWnd, unsigned int a2, int a3, HWND hCtl) {
    int result; // eax
    HWND v5; // edi
    unsigned int *v6; // eax
    unsigned int *v7; // eax
    int i; // ebx
    wchar_t *v9; // eax
    LRESULT v10; // ebx
    HWND v11; // edi
    HWND v12; // ebx
    HWND v13; // edi
    HWND v14; // eax
    HWND DlgItem; // eax
    LRESULT (__stdcall *v16)(HWND, UINT, WPARAM, LPARAM); // esi
    int16_t v17; // dx
    int *v18; // eax
    HWND v19; // eax
    char *v20; // eax
    int v21; // ecx
    int v22; // edx
    int v23; // edi
    int *v24; // esi
    int *v25; // eax
    HWND v26; // eax
    HWND v27; // edx
    int v28; // esi
    int *v29; // eax
    int *v30; // eax
    int *v31; // eax
    wchar_t *StringCSF; // [esp-10h] [ebp-120h]
    wchar_t *v33; // [esp-10h] [ebp-120h]
    wchar_t *v34; // [esp-10h] [ebp-120h]
    wchar_t *v35; // [esp-10h] [ebp-120h]
    wchar_t *v36; // [esp-10h] [ebp-120h]
    int v37; // [esp+0h] [ebp-110h]
    char v38; // [esp+13h] [ebp-FDh]
    unsigned int *v39; // [esp+14h] [ebp-FCh]
    int16_t v40; // [esp+14h] [ebp-FCh]
    int v41; // [esp+18h] [ebp-F8h] BYREF
    int v42; // [esp+1Ch] [ebp-F4h]
    int v43; // [esp+20h] [ebp-F0h]
    int v44; // [esp+24h] [ebp-ECh]
    unsigned int *WindowLongA; // [esp+28h] [ebp-E8h]
    LPARAM v46[9]; // [esp+2Ch] [ebp-E4h] BYREF
    char v47[32]; // [esp+50h] [ebp-C0h] BYREF
    LPARAM lParam[16]; // [esp+70h] [ebp-A0h] BYREF
    char v49[32]; // [esp+B0h] [ebp-60h] BYREF
    char Destination[32]; // [esp+D0h] [ebp-40h] BYREF
    char String[32]; // [esp+F0h] [ebp-20h] BYREF

    result = BaseDialogProc(hWnd, a2, a3, (unsigned int)hCtl); /*0x5604ac*/
    if ( !result )
    {
      WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x5604c2*/
      if ( a2 == 273 ) /*0x5604cd*/
      {
        switch ( (uint16_t)a3 ) /*0x560760*/
        {
          case 1u: /*0x560760*/
            DlgItem = GetDlgItem(hWnd, 1489); /*0x5607b1*/
            v16 = SendMessageA; /*0x5607b3*/
            SendMessageA(DlgItem, 0x4B5u, 0x10u, (LPARAM)v46); /*0x5607c6*/
            if ( strlen((const char *)v46) ) /*0x5607cc*/
            {
              v17 = atoi((const char *)v46); /*0x5607e6*/
              v40 = v17; /*0x5607f4*/
              if ( strlen((const char *)v46) > 5 || (uint16_t)v17 > 0x3FFFu ) /*0x560807*/
              {
                v46[5] = (LPARAM)asc_82083C; /*0x560820*/
                StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 983); /*0x56082d*/
                v18 = (int *)GetStringCSF(aTxtInvalidSock, 0, g_Str_File_MainOpt_cpp, 983); /*0x56083f*/
                Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v37); /*0x560849*/
                return 0; /*0x56085a*/
              }
            }
            else
            {
              v40 = -1; /*0x56085d*/
            }
            v19 = GetDlgItem(hWnd, 1491); /*0x56086b*/
            SendMessageA(v19, 0x4B5u, 0x20u, (LPARAM)v47); /*0x56087a*/
            strncpy(Destination, v47, 0x20u); /*0x56088b*/
            if ( strlen(v47) ) /*0x560894*/
            {
              v20 = strtok(v47, asc_826598); /*0x5608b1*/
              v21 = -1; /*0x5608b9*/
              v22 = -1; /*0x5608bc*/
              v23 = -1; /*0x5608bf*/
              v41 = -1; /*0x5608c4*/
              v42 = -1; /*0x5608c8*/
              v43 = -1; /*0x5608cc*/
              v44 = -1; /*0x5608d4*/
              if ( v20 ) /*0x5608d8*/
              {
                v24 = &v41; /*0x5608da*/
                do /*0x5608fe*/
                {
                  sscanf(v20, "%x", v24++); /*0x5608e5*/
                  v20 = strtok(0, asc_826598); /*0x5608f4*/
                }
                while ( v20 ); /*0x5608fe*/
                v23 = v44; /*0x560900*/
                v22 = v42; /*0x560904*/
                v21 = v41; /*0x560908*/
                v16 = SendMessageA; /*0x56090c*/
              }
              if ( (uint8_t)v21 != v21 /*0x560942*/
                || (uint8_t)v22 != v22
                || (uint8_t)v43 != v43
                || (uint8_t)v23 != v23 )
              {
                v46[6] = (LPARAM)asc_82083C; /*0x56095b*/
                v33 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1017); /*0x560968*/
                v25 = (int *)GetStringCSF(aTxtDestnetAddr, 0, g_Str_File_MainOpt_cpp, 1017); /*0x56097a*/
                Dialog::ShowMessageBox(v25, v33, 0, 0, 0, v37); /*0x560984*/
                return 0; /*0x560995*/
              }
            }
            v26 = GetDlgItem(hWnd, 1492); /*0x56099e*/
            dword_A8EBB4 = v16(v26, 0x147u, 0, 0); /*0x5609ac*/
            IDA_HIWORD(unk_A8EBA8) = v40; /*0x5609bf*/
            strcpy(unk_A8EBB8, Destination); /*0x5609e1*/
            v27 = GetDlgItem(hWnd, 1495); /*0x5609ec*/
            memset(v49, 0, sizeof(v49)); /*0x5609fc*/
            SendMessageA(v27, 0x4B5u, 8u, (LPARAM)v49); /*0x560a0e*/
            strncpy(String, v49, 0x20u); /*0x560a26*/
            v28 = atoi(String); /*0x560a38*/
            if ( v28 > 0xFFFF ) /*0x560a43*/
            {
              v46[4] = (LPARAM)asc_82083C; /*0x560a5c*/
              v34 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a69*/
              v29 = (int *)GetStringCSF(aTxtPortNumberE, 0, g_Str_File_MainOpt_cpp, 1058); /*0x560a7b*/
              Dialog::ShowMessageBox(v29, v34, 0, 0, 0, v37); /*0x560a85*/
              return 0; /*0x560a96*/
            }
            if ( SendDlgItemMessageA(hWnd, 1890, 0xF0u, 0, 0) == 1 ) /*0x560ab6*/
            {
              if ( !byte_A8E180 ) /*0x560abf*/
              {
                v46[8] = (LPARAM)asc_82083C; /*0x560ad8*/
                v35 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560ae1*/
                v30 = (int *)GetStringCSF(aTxtFirewallSet, 0, g_Str_File_MainOpt_cpp, 1067); /*0x560af3*/
                Dialog::ShowMessageBox(v30, v35, 0, 0, 0, v37); /*0x560afd*/
              }
              byte_A8E180 = 1; /*0x560b02*/
            }
            else
            {
              byte_A8E180 = 0; /*0x560b0b*/
            }
            if ( v28 > 0 && !dword_A8E254 ) /*0x560b1d*/
            {
              v46[7] = (LPARAM)asc_82083C; /*0x560b36*/
              v36 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b3f*/
              v31 = (int *)GetStringCSF(aTxtFirewallSet_0, 0, g_Str_File_MainOpt_cpp, 1078); /*0x560b51*/
              Dialog::ShowMessageBox(v31, v36, 0, 0, 0, v37); /*0x560b5b*/
            }
            dword_A8E254 = v28; /*0x560b65*/
            __Release__NonReentrantLock_details_Concurrency__QAEXXZ((Concurrency::details::_NonReentrantLock *)&dword_ABFEC8); /*0x560b6b*/
            RawFileClass::Construct(lParam, (int)aRa2mdIni); /*0x560b79*/
            INIClass::SetBool((char *)&dword_8870C0, aMultiplayer, aSenddelay, byte_A8E180); /*0x560b94*/
            INIClass::SetInt((char *)&dword_8870C0, aMultiplayer, aPortnumberover, dword_A8E254, 0); /*0x560bb1*/
            INIClass::WriteDigest(&dword_8870C0, (int)lParam, 0); /*0x560bc2*/
            RawFileClass::Dtor(lParam); /*0x560bcb*/
            break;
          case 2u: /*0x560760*/
            break;
          case 0x5D4u: /*0x560760*/
            v14 = GetDlgItem(hWnd, 1492); /*0x56077b*/
            dword_82A280 = SendMessageA(v14, 0x147u, 0, 0); /*0x560793*/
            return 0; /*0x5607a2*/
          default:
            return 0; /*0x56076f*/
        }
        *WindowLongA = 2; /*0x560bd4*/
        return 0; /*0x560bda*/
      }
      if ( a2 != 1175 ) /*0x5604d8*/
      {
        if ( a2 == 1243 ) /*0x5604dd*/
        {
          NavigateDialogTab(hCtl, a3 != 0); /*0x5604ea*/
          return 0; /*0x5604fb*/
        }
        return 0; /*0x5604dd*/
      }
      v5 = GetDlgItem(hWnd, 1492); /*0x560510*/
      v38 = 0; /*0x560517*/
      if ( dword_887628
        || ((v6 = (unsigned int *)RA2_OPNEW(0x3F310u)) == 0 ? (v7 = 0) : (v7 = IPXInterfaceClass::Construct(v6)),
            dword_887628 = v7,
            WinsockInterface::Init(v7),
            v38 = 1,
            dword_887628) )
      {
        Debug::Log(); /*0x560560*/
        v39 = dword_887628; /*0x56056d*/
        for ( i = 0; i < 20; ++i ) /*0x560571*/
        {
          if ( NetworkOptions::ApplySettings((int)v39, i, (char *)lParam, 64) ) /*0x56057f*/
          {
            Debug::Log(); /*0x56058e*/
            Debug::Log(); /*0x56059d*/
            if ( SendMessageA(v5, 0x4B8u, 0, (LPARAM)lParam) == -1 ) /*0x5605b7*/
              SendMessageA(v5, 0x4BCu, 0, (LPARAM)lParam); /*0x5605c6*/
          }
        }
        if ( !v38 ) /*0x5605d4*/
        {
  LABEL_20:
          if ( !SendMessageA(v5, 0x146u, 0, 0) ) /*0x5605fa*/
          {
            v9 = GetStringCSF(aTxtNoBoundNetC, 0, g_Str_File_MainOpt_cpp, 894); /*0x560611*/
            SendMessageA(v5, 0x4C2u, 0, (LPARAM)v9); /*0x56061f*/
          }
          v10 = dword_A8EBB4; /*0x560621*/
          if ( (dword_A8EBB4 & 0x80000000) != 0 || v10 >= SendMessageA(v5, 0x146u, 0, 0) ) /*0x560639*/
            v10 = 0; /*0x56063b*/
          SendMessageA(v5, 0x14Eu, v10, 0); /*0x560646*/
          SendMessageA(hWnd, 0x464u, 0, 0); /*0x560652*/
          dword_82A280 = -1; /*0x560660*/
          v11 = GetDlgItem(hWnd, 1489); /*0x56066c*/
          if ( IDA_HIWORD(unk_A8EBA8) != 0xFFFF ) /*0x560678*/
          {
            sprintf((char *const)v46, "%d", IDA_HIWORD(unk_A8EBA8)); /*0x56068a*/
            SendMessageA(v11, 0x4B4u, 0, (LPARAM)v46); /*0x56069f*/
          }
          SendMessageA(v11, 0xC5u, 5u, 0); /*0x5606ab*/
          v12 = GetDlgItem(hWnd, 1491); /*0x5606b5*/
          if ( strlen(unk_A8EBB8) ) /*0x5606bc*/
            SendMessageA(v12, 0x4B4u, 0, (LPARAM)unk_A8EBB8); /*0x5606d4*/
          SendMessageA(v12, 0xC5u, 0xBu, 0); /*0x5606e0*/
          SendDlgItemMessageA(hWnd, 1890, 0xF1u, byte_A8E180 != 0, 0); /*0x5606fe*/
          v13 = GetDlgItem(hWnd, 1495); /*0x560710*/
          if ( v13 != HWND_MESSAGE|0x2 && dword_A8E254 ) /*0x560722*/
          {
            sprintf((char *const)v46, "%d", dword_A8E254); /*0x560733*/
            SendMessageA(v13, 0x4B4u, 0, (LPARAM)v46); /*0x560748*/
            return 0; /*0x560756*/
          }
          return 0; /*0x560722*/
        }
        if ( dword_887628 ) /*0x5605de*/
          (*(void (__thiscall **)(unsigned int *, int))*dword_887628)(dword_887628, 1); /*0x5605e4*/
      }
      dword_887628 = 0; /*0x5605e6*/
      goto LABEL_20; /*0x5605e6*/
    }
    return result; /*0x5604ef*/
}
} // namespace gamemd

// 0x5B49B0
namespace gamemd {
char ModemGuest::Dialog() {
    HWND Dialog_v; // eax
    int v3; // edi
    int v4; // edi
    TechnoTypeClass *v5; // ecx
    int ModemGuest_field_0x04; // eax
    char v7; // bl
    int v9; // [esp+0h] [ebp-10h]

    Debug::Log(); /*0x5b49c1*/
    this->ModemGuest_field_0x04 = -1; /*0x5b49d7*/
    Dialog_v = (HWND)CreateDialog(0xF2u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GameSetupDialogProc, 0); /*0x5b49da*/
    *(unsigned int *)this->__pad_0 = Dialog_v; /*0x5b49e1*/
    if ( !Dialog_v ) /*0x5b49e3*/
    {
  LABEL_16:
      v7 = 0; /*0x5b4af1*/
      goto LABEL_17; /*0x5b4af1*/
    }
    SetWindowLongA(Dialog_v, 8, (LONG)this); /*0x5b49ee*/
    ModemGuest::InitDialog(this); /*0x5b49f6*/
    Dialog::Show(*(Dialog **)this->__pad_0); /*0x5b49fd*/
    IDA_LOBYTE(this->ModemGuest_field_0x08) = 0; /*0x5b4a02*/
    IDA_BYTE1(this->ModemGuest_field_0x08) = 1; /*0x5b4a05*/
    v3 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b4a0e*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b4a16*/
      v3 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b4a28*/
    this->ModemGuest_field_0x0C = v3; /*0x5b4a2a*/
    *((unsigned int *)this + 4) = 10000; /*0x5b4a2d*/
    v4 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b4a39*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b4a41*/
      v4 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b4a53*/
    *((unsigned int *)this + 5) = v4; /*0x5b4a55*/
    *((unsigned int *)this + 6) = 1200; /*0x5b4a58*/
    *((unsigned int *)this + 7) = 0; /*0x5b4a5f*/
    *((unsigned short *)this + 16) = 0; /*0x5b4a62*/
    *((unsigned int *)this + 18) = -1; /*0x5b4a66*/
    *((unsigned int *)this + 19) = -1; /*0x5b4a69*/
    *((unsigned int *)this + 20) = GameConfig::ComputeHash(); /*0x5b4a71*/
    LoadArtINI(); /*0x5b4a74*/
    *((unsigned int *)this + 21) = unknown_libname_29(); /*0x5b4a7e*/
    *((unsigned int *)this + 22) = unknown_libname_30(); /*0x5b4a86*/
    while ( this->ModemGuest_field_0x04 < 0 ) /*0x5b4a8f*/
    {
      if ( (uint8_t)Dialog::PumpMessages() == 1 ) /*0x5b4a98*/
        break; /*0x5b4a98*/
      CellClass::LockSurface((int)this, 0); /*0x5b4a9d*/
      if ( ModemGame::ProcessPacket((ModemGame *)this) == 1 ) /*0x5b4aab*/
        break; /*0x5b4aab*/
      IDA_LOBYTE(v5) = 0; /*0x5b4aad*/
      ScreenSaver::Process(v5, v9); /*0x5b4aaf*/
    }
    Dialog::Destroy(*(Dialog **)this->__pad_0); /*0x5b4abb*/
    if ( IDA_LOBYTE(this->ModemGuest_field_0x08) == 1 ) /*0x5b4ac4*/
      SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5b4acb*/
    ModemGuest_field_0x04 = this->ModemGuest_field_0x04; /*0x5b4ad0*/
    if ( ModemGuest_field_0x04 != 1 ) /*0x5b4ad6*/
    {
      if ( ModemGuest_field_0x04 == 2 ) /*0x5b4ae4*/
        ReadEventINI(); /*0x5b4aec*/
      goto LABEL_16; /*0x5b4aec*/
    }
    v7 = 1; /*0x5b4ad8*/
  LABEL_17:
    Debug::Log(); /*0x5b4afa*/
    return v7; /*0x5b4b0a*/
}
} // namespace gamemd

// 0x5B4EE0
namespace gamemd {
void ModemGuest::InitDialog() {
    HWND *v1; // ebp
    HWND (__stdcall *v2)(HWND, int); // ebx
    HWND DlgItem; // eax
    HWND v4; // edi
    char *v5; // eax
    HWND v6; // eax
    HWND v7; // edi
    wchar_t *StringCSF; // eax
    wchar_t *v9; // eax
    wchar_t *v10; // eax
    wchar_t *v11; // eax
    wchar_t *v12; // eax
    wchar_t *v13; // eax
    wchar_t *v14; // eax
    wchar_t *v15; // eax
    WPARAM v16; // ebx
    LPARAM *v17; // ebp
    HWND v18; // eax
    HWND v19; // edi
    LPARAM i; // ebx
    int v21; // eax
    LRESULT v22; // eax
    WPARAM ListBoxItem; // eax
    HWND v24; // edi
    HWND v25; // eax
    HWND v26; // edi
    HWND v27; // edi
    HWND v28; // eax
    HWND v29; // edi
    HWND v30; // eax
    HWND v31; // edi
    HWND v32; // eax
    HWND v33; // edi
    HWND v34; // eax
    HWND v35; // eax
    HWND v36; // eax
    HWND v37; // eax
    HWND v38; // eax
    HWND v39; // eax
    HWND v40; // eax
    HWND v41; // eax
    HWND v42; // eax
    HWND v43; // eax
    Skirmish *v44; // esi
    HWND v45; // esi
    wchar_t Buffer[256]; // [esp+14h] [ebp-A00h] BYREF
    wchar_t Format[1024]; // [esp+214h] [ebp-800h] BYREF

    v1 = (HWND *)this; /*0x5b4eea*/
    Debug::Log(); /*0x5b4ef5*/
    v2 = GetDlgItem; /*0x5b4efd*/
    DlgItem = GetDlgItem(*v1, 1473); /*0x5b4f0c*/
    v4 = DlgItem; /*0x5b4f14*/
    if ( DlgItem ) /*0x5b4f18*/
    {
      SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b4f24*/
      v5 = CharToWideString(unk_A8B380); /*0x5b4f2b*/
      SendMessageA(v4, 0x4B2u, 0, (LPARAM)v5); /*0x5b4f39*/
    }
    Debug::Log(); /*0x5b4f45*/
    v6 = GetDlgItem(*v1, 1029); /*0x5b4f56*/
    v7 = v6; /*0x5b4f58*/
    if ( v6 ) /*0x5b4f5c*/
    {
      SendMessageA(v6, 0x14Bu, 0, 0); /*0x5b4f6c*/
      StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[37], 0, (const char *)&stru_82BA00.?[40], 280); /*0x5b4f7f*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x5b4f8d*/
      v9 = GetStringCSF((wchar_t *)&stru_82BA00.?[35], 0, (const char *)&stru_82BA00.?[40], 281); /*0x5b4fa0*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v9); /*0x5b4fae*/
      v10 = GetStringCSF((wchar_t *)&stru_82BA00.?[32], 0, (const char *)&stru_82BA00.?[40], 282); /*0x5b4fc1*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v10); /*0x5b4fcf*/
      v11 = GetStringCSF((wchar_t *)&stru_82BA00.?[29], 0, (const char *)&stru_82BA00.?[40], 283); /*0x5b4fe2*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v11); /*0x5b4ff0*/
      v12 = GetStringCSF((wchar_t *)&stru_82BA00.?[26], 0, (const char *)&stru_82BA00.?[40], 284); /*0x5b5003*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b5011*/
      v13 = GetStringCSF((wchar_t *)&stru_82BA00.?[22], 0, (const char *)&stru_82BA00.?[40], 285); /*0x5b5024*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b5032*/
      v14 = GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, (const char *)&stru_82BA00.?[40], 286); /*0x5b5045*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b5053*/
      v15 = GetStringCSF((wchar_t *)&stru_82BA00.?[16], 0, (const char *)&stru_82BA00.?[40], 287); /*0x5b5066*/
      SendMessageA(v7, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b5074*/
      v16 = 0; /*0x5b5076*/
      v17 = dword_8316A8; /*0x5b5078*/
      do /*0x5b5094*/
        SendMessageA(v7, 0x498u, v16++, *v17++); /*0x5b5088*/
      while ( (int)v17 < (int)&off_8316C8 ); /*0x5b5094*/
      dword_A8B394 = dword_A8B3B4; /*0x5b50a4*/
      SendMessageA(v7, 0x14Eu, dword_A8B3B4, 0); /*0x5b50a9*/
      v1 = (HWND *)this; /*0x5b50ab*/
      v2 = GetDlgItem; /*0x5b50af*/
    }
    Debug::Log(); /*0x5b50c0*/
    v18 = v2(*v1, 1639); /*0x5b50d1*/
    v19 = v18; /*0x5b50d3*/
    if ( v18 ) /*0x5b50d7*/
    {
      SendMessageA(v18, 0x14Bu, 0, 0); /*0x5b50e3*/
      for ( i = 0; i < dword_A83CA8; ++i ) /*0x5b50ee*/
      {
        v21 = *((unsigned int *)dword_A83C9C + i); /*0x5b50f6*/
        if ( *(unsigned char *)(v21 + 421) ) /*0x5b50f9*/
        {
          v22 = SendMessageA(v19, 0x4C2u, 0, *(unsigned int *)(v21 + 96)); /*0x5b510f*/
          SendMessageA(v19, 0x151u, v22, i); /*0x5b5119*/
        }
      }
      ListBoxItem = FindListBoxItem(v19, -1, dword_A8B3AC); /*0x5b5130*/
      SendMessageA(v19, 0x14Eu, ListBoxItem, 0); /*0x5b513e*/
      v2 = GetDlgItem; /*0x5b5140*/
    }
    v24 = v2(*v1, 1641); /*0x5b5151*/
    if ( v24 ) /*0x5b5155*/
    {
      SendMessageA( /*0x5b517c*/
        v24,
        0x406u,
        1u,
        *(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
      | (*(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
      SendMessageA(v24, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[32]); /*0x5b518d*/
    }
    Debug::Log(); /*0x5b519a*/
    v25 = v2(*v1, 1360); /*0x5b51ab*/
    v26 = v25; /*0x5b51ad*/
    if ( v25 ) /*0x5b51b1*/
    {
      SendMessageA(v25, 0x406u, 1u, 655361); /*0x5b51c0*/
      SendMessageA(v26, 0x405u, 1u, g_RulesInitConfig); /*0x5b51d1*/
    }
    Debug::Log(); /*0x5b51de*/
    v27 = v2(*v1, 1026); /*0x5b51f1*/
    if ( v27 ) /*0x5b51f5*/
    {
      SendMessageA( /*0x5b521c*/
        v27,
        0x406u,
        1u,
        *(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
      | (*(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
      SendMessageA(v27, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[12]); /*0x5b522d*/
    }
    Debug::Log(); /*0x5b523a*/
    v28 = v2(*v1, 1362); /*0x5b524b*/
    v29 = v28; /*0x5b524d*/
    if ( v28 ) /*0x5b5251*/
    {
      SendMessageA(v28, 0x406u, 1u, 393216); /*0x5b5260*/
      SendMessageA(v29, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[36]); /*0x5b5271*/
    }
    Debug::Log(); /*0x5b527e*/
    v30 = v2(*v1, 1321); /*0x5b528f*/
    v31 = v30; /*0x5b5291*/
    if ( v30 ) /*0x5b5295*/
    {
      SendMessageA(v30, 0x406u, 1u, 393216); /*0x5b52a4*/
      SendMessageA(v31, 0x405u, 1u, 6 - *(unsigned int *)&stru_A8B250.__pad_0[24]); /*0x5b52bc*/
    }
    Debug::Log(); /*0x5b52c9*/
    v32 = v2(*v1, 1363); /*0x5b52da*/
    v33 = v32; /*0x5b52dc*/
    if ( v32 ) /*0x5b52e0*/
    {
      SendMessageA(v32, 0x406u, 1u, 0x20000); /*0x5b52ef*/
      SendMessageA(v33, 0x405u, 1u, *(LPARAM *)&stru_A8B250.__pad_0[40]); /*0x5b5300*/
    }
    Debug::Log(); /*0x5b530d*/
    v34 = v2(*v1, 1643); /*0x5b531e*/
    if ( v34 ) /*0x5b5322*/
      SendMessageA(v34, 0xF1u, dword_A8B320 == 1, 0); /*0x5b533b*/
    Debug::Log(); /*0x5b5356*/
    v35 = v2(*v1, 1642); /*0x5b5367*/
    if ( v35 ) /*0x5b536b*/
      SendMessageA(v35, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b5384*/
    Debug::Log(); /*0x5b539f*/
    v36 = v2(*v1, 1358); /*0x5b53b0*/
    if ( v36 ) /*0x5b53b4*/
      SendMessageA(v36, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b53cd*/
    Debug::Log(); /*0x5b53e8*/
    v37 = v2(*v1, 1690); /*0x5b53f9*/
    if ( v37 ) /*0x5b53fd*/
      SendMessageA(v37, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b5416*/
    Debug::Log(); /*0x5b5431*/
    v38 = v2(*v1, 1693); /*0x5b5442*/
    if ( v38 ) /*0x5b5446*/
      SendMessageA(v38, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b545f*/
    Debug::Log(); /*0x5b547a*/
    v39 = v2(*v1, 1361); /*0x5b548b*/
    if ( v39 ) /*0x5b548f*/
      SendMessageA(v39, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b54a8*/
    Debug::Log(); /*0x5b54c3*/
    v40 = v2(*v1, 1356); /*0x5b54d4*/
    if ( v40 ) /*0x5b54d8*/
      SendMessageA(v40, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b54f1*/
    Debug::Log(); /*0x5b550c*/
    v41 = v2(*v1, 1357); /*0x5b551d*/
    if ( v41 ) /*0x5b5521*/
      SendMessageA(v41, 0xF1u, byte_A8B31F == 1, 0); /*0x5b553a*/
    Debug::Log(); /*0x5b5555*/
    v42 = v2(*v1, 1572); /*0x5b5566*/
    if ( v42 ) /*0x5b556a*/
      SendMessageA(v42, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b5583*/
    Debug::Log(); /*0x5b559e*/
    v43 = v2(*v1, 1430); /*0x5b55af*/
    if ( v43 ) /*0x5b55b3*/
      SendMessageA(v43, 0xF1u, byte_A8B31D == 1, 0); /*0x5b55cc*/
    Debug::Log(); /*0x5b55e7*/
    NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5b55f4*/
    v44 = g_UIControlState; /*0x5b55f9*/
    if ( g_UIControlState ) /*0x5b5601*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b5605*/
      RA2_OPDEL(v44); /*0x5b560b*/
      g_UIControlState = 0; /*0x5b5613*/
    }
    if ( strlen(byte_AC1288) > 0x4E ) /*0x5b562f*/
      byte_AC12D7 = 0; /*0x5b5631*/
    if ( strlen(byte_AC1288) ) /*0x5b563b*/
    {
      BulkCharToWide(Format, (uint8_t *)byte_AC1288, -1); /*0x5b5655*/
      if ( &g_TypeClass_DefaultString ) /*0x5b5661*/
      {
        v45 = v2(*v1, 1343); /*0x5b566e*/
        if ( v45 ) /*0x5b5672*/
        {
          swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &g_TypeClass_DefaultString); /*0x5b5691*/
          DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v45); /*0x5b56a0*/
        }
      }
    }
    byte_AC1288[0] = 0; /*0x5b56ac*/
    NullModemClass::Flush((NullModemClass *)&unk_A8EA70, 1); /*0x5b56b3*/
    IDA_BYTE2(stru_A8D600.Network_field_0xC) = 1; /*0x5b56bd*/
    PtrVector::Destroy(&stru_A8DA74); /*0x5b56c4*/
    MEMORY[0xA8B322] = 0; /*0x5b56ce*/
    Debug::Log(); /*0x5b56d7*/
}
} // namespace gamemd

// 0x5B59B0
namespace gamemd {
int ModemGame::AdvanceTauntCommand() {
    int result; // eax
    HWND v3; // ebx
    WPARAM v4; // esi
    int v5; // eax

    result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1029); /*0x5b59be*/
    v3 = (HWND)result; /*0x5b59c4*/
    if ( result ) /*0x5b59c8*/
    {
      result = SendMessageA((HWND)result, 0x147u, 0, 0); /*0x5b59da*/
      v4 = result; /*0x5b59dc*/
      if ( result != -1 ) /*0x5b59e1*/
      {
        v5 = *((unsigned int *)this + 18); /*0x5b59e3*/
        if ( v4 == v5 ) /*0x5b59e8*/
        {
          v4 = v5 + 1; /*0x5b59ea*/
          if ( v5 + 1 > 7 ) /*0x5b59f0*/
            v4 = 0; /*0x5b59f2*/
          SendMessageA(v3, 0x14Eu, v4, 0); /*0x5b59fd*/
        }
        dword_A8B394 = v4; /*0x5b5a01*/
        IDA_BYTE1(this->ModemGame_field_0x08) = 1; /*0x5b5a09*/
        IDA_LOBYTE(this->ModemGame_field_0x08) = 1; /*0x5b5a0c*/
        if ( v4 >= 8 ) /*0x5b5a0f*/
          return SendMessageA(v3, 0x498u, 0, (LPARAM)Math::InitDegToRad); /*0x5b5a3c*/
        else
          return SendMessageA(v3, 0x498u, 0, dword_8316A8[v4]); /*0x5b5a26*/
      }
    }
    return result; /*0x5b5a28*/
}
} // namespace gamemd

// 0x5B5AD0
namespace gamemd {
int ModemGame::UpdatePlayerNameAndColor(wchar_t *Source, unsigned int a3, int a4) {
    HWND v5; // edx
    HWND DlgItem; // eax
    LRESULT v7; // eax
    int result; // eax
    HWND v9; // esi
    int (__usercall *v10)(char, char); // ebx
    HWND v11; // [esp-8h] [ebp-B8h]
    wchar_t lParam[80]; // [esp+10h] [ebp-A0h] BYREF

    wcscpy((wchar_t *)this + 16, Source); /*0x5b5ae8*/
    v5 = *(HWND *)this->__pad_0; /*0x5b5aed*/
    *((unsigned int *)this + 18) = a3; /*0x5b5aff*/
    DlgItem = GetDlgItem(v5, 1029); /*0x5b5b08*/
    if ( DlgItem ) /*0x5b5b0c*/
    {
      v7 = SendMessageA(DlgItem, 0x147u, 0, 0); /*0x5b5b18*/
      if ( v7 != -1 && v7 == *((unsigned int *)this + 18) ) /*0x5b5b26*/
        ModemGame::AdvanceTauntCommand(this); /*0x5b5b2a*/
    }
    v11 = *(HWND *)this->__pad_0; /*0x5b5b3d*/
    *((unsigned int *)this + 19) = a4; /*0x5b5b3e*/
    result = (int)GetDlgItem(v11, 1640); /*0x5b5b41*/
    v9 = (HWND)result; /*0x5b5b43*/
    if ( result ) /*0x5b5b47*/
    {
      swprintf(lParam, (const size_t)&stru_82BA00.?[77], Source, *(unsigned int *)(*((unsigned int *)dword_A83C9C + a4) + 96)); /*0x5b5b68*/
      SendMessageA(v9, 0x4B2u, 0, (LPARAM)lParam); /*0x5b5b83*/
      if ( a3 >= 8 ) /*0x5b5b87*/
        v10 = Math::InitDegToRad; /*0x5b5b97*/
      else
        v10 = (int (__usercall *)(char, char))dword_8316A8[a3]; /*0x5b5b8e*/
      return SendMessageA(v9, 0x498u, 0, (LPARAM)v10); /*0x5b5ba6*/
    }
    return result; /*0x5b5ba8*/
}
} // namespace gamemd

// 0x5B6020
namespace gamemd {
char ModemGame::ProcessPacket() {
    int v2; // esi
    int v3; // eax
    int *v4; // eax
    char result; // al
    int v6; // edi
    int v7; // esi
    int *v8; // eax
    int v9; // esi
    unsigned int updated; // eax
    bool v11; // cl
    char *v12; // eax
    int v13; // ecx
    int v14; // esi
    int v15; // esi
    unsigned int v16; // ecx
    int v17; // esi
    int *v18; // eax
    char *v19; // ebp
    int v20; // esi
    HWND DlgItem; // edi
    int (__usercall *v22)(char, char); // esi
    int v23; // esi
    int v24; // esi
    int *v25; // [esp-14h] [ebp-434h]
    int *v26; // [esp-14h] [ebp-434h]
    int *v27; // [esp-14h] [ebp-434h]
    int *v28; // [esp-14h] [ebp-434h]
    wchar_t *v29; // [esp-10h] [ebp-430h]
    wchar_t *v30; // [esp-10h] [ebp-430h]
    wchar_t *v31; // [esp-10h] [ebp-430h]
    wchar_t *v32; // [esp-10h] [ebp-430h]
    wchar_t *v33; // [esp-10h] [ebp-430h]
    wchar_t *v34; // [esp-10h] [ebp-430h]
    wchar_t *StringCSF; // [esp-10h] [ebp-430h]
    int v36; // [esp+0h] [ebp-420h] BYREF
    const wchar_t *v37; // [esp+10h] [ebp-410h]
    const wchar_t *v38; // [esp+14h] [ebp-40Ch]
    const wchar_t *v39; // [esp+18h] [ebp-408h]
    const wchar_t *v40; // [esp+1Ch] [ebp-404h]
    const wchar_t *v41; // [esp+20h] [ebp-400h]
    int v42; // [esp+24h] [ebp-3FCh] BYREF
    int v43; // [esp+28h] [ebp-3F8h] BYREF
    unsigned char v44[20]; // [esp+2Ch] [ebp-3F4h] BYREF
    unsigned char v45[6]; // [esp+40h] [ebp-3E0h] BYREF
    unsigned int v46; // [esp+46h] [ebp-3DAh]
    unsigned int v47; // [esp+4Ah] [ebp-3D6h]
    int v48; // [esp+AEh] [ebp-372h]
    unsigned int v49; // [esp+C2h] [ebp-35Eh]
    int v50; // [esp+F8h] [ebp-328h]
    int v51; // [esp+FCh] [ebp-324h]
    int v52[62]; // [esp+124h] [ebp-2FCh] BYREF
    int16_t v53; // [esp+21Ch] [ebp-204h]
    wchar_t Buffer[256]; // [esp+220h] [ebp-200h] BYREF

    Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6031*/
    if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)&v43, (int)&v42) <= 0 ) /*0x5b604c*/
    {
  LABEL_51:
      v17 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b65d6*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b65e3*/
        v17 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b65f5*/
      if ( (unsigned int)(v17 - *((unsigned int *)this + 5)) <= *((unsigned int *)this + 6) ) /*0x5b6601*/
      {
        return 0; /*0x5b67af*/
      }
      else
      {
        Debug::Log(); /*0x5b660d*/
        v37 = asc_82083C; /*0x5b661c*/
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1391); /*0x5b6639*/
        v18 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1391); /*0x5b664b*/
        Dialog::ShowMessageBox(v18, StringCSF, 0, 0, 0, v36); /*0x5b6655*/
        return 1; /*0x5b665d*/
      }
    }
    else
    {
      v2 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b6057*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b6062*/
        v2 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b6074*/
      v3 = v43; /*0x5b6076*/
      *((unsigned int *)this + 5) = v2; /*0x5b607a*/
      *((unsigned int *)this + 6) = 1200; /*0x5b6080*/
      if ( v3 >= 100 && v3 < 109 && v3 != 104 && v45[0] == dword_A8DB30 ) /*0x5b60a5*/
      {
        Debug::Log(); /*0x5b60ac*/
        v38 = asc_82083C; /*0x5b60bb*/
        v29 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1177); /*0x5b60d8*/
        v4 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1177); /*0x5b60ea*/
        Dialog::ShowMessageBox(v4, v29, 0, 0, 0, v36); /*0x5b60f4*/
        return 1; /*0x5b6105*/
      }
      switch ( v3 ) /*0x5b611a*/
      {
        case 'e': /*0x5b611a*/
          Debug::Log(); /*0x5b6208*/
          updated = NetworkBuffer::UpdateWindow((NetworkBuffer *)&stru_A8EB00.?[252], v46, v47); /*0x5b621f*/
          if ( !updated ) /*0x5b6226*/
          {
            v41 = asc_82083C; /*0x5b623c*/
            v31 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1209); /*0x5b6249*/
            v25 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1209); /*0x5b6260*/
            Dialog::ShowMessageBox(v25, v31, 0, 0, 0, v36); /*0x5b6265*/
            goto LABEL_35; /*0x5b6265*/
          }
          if ( updated == -1 ) /*0x5b626c*/
          {
            v40 = asc_82083C; /*0x5b6285*/
            v32 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1215); /*0x5b6292*/
            v26 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1215); /*0x5b62a9*/
            Dialog::ShowMessageBox(v26, v32, 0, 0, 0, v36); /*0x5b62ae*/
            goto LABEL_35; /*0x5b62ae*/
          }
          v11 = v48 == *((unsigned int *)this + 20); /*0x5b62c3*/
          if ( v50 != *((unsigned int *)this + 22) ) /*0x5b62d1*/
            v11 = 0; /*0x5b62d3*/
          if ( v51 != *((unsigned int *)this + 21) || !v11 ) /*0x5b62e5*/
          {
            v39 = asc_82083C; /*0x5b62fe*/
            v33 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1262); /*0x5b630b*/
            v27 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1262); /*0x5b6322*/
            Dialog::ShowMessageBox(v27, v33, 0, 0, 0, v36); /*0x5b6327*/
            goto LABEL_35; /*0x5b6327*/
          }
          dword_A8B24C = Network::GetMaxPacketSize(updated); /*0x5b633b*/
          v12 = CharToWideString(v44); /*0x5b6340*/
          ModemGame::UpdatePlayerNameAndColor(this, (wchar_t *)v12, v45[5], *(int *)&v45[1]); /*0x5b6353*/
          if ( ApplyGameOptions((int)&v43) == 1 ) /*0x5b6366*/
            Dialog::InitializeGameSettings((Dialog *)this); /*0x5b636e*/
          goto LABEL_51; /*0x5b6373*/
        case 'f': /*0x5b611a*/
          Debug::Log(); /*0x5b6126*/
          v6 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b6130*/
          if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b613b*/
            v6 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b614d*/
          while ( 1 ) /*0x5b6154*/
          {
            v7 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b6154*/
            if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b615c*/
              v7 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b616e*/
            if ( (unsigned int)(v7 - v6) >= 0x3C ) /*0x5b6175*/
              break; /*0x5b6175*/
            Event::Dispatch(); /*0x5b6177*/
            Stream::ReadPacket((int)&unk_A8EA70); /*0x5b6181*/
          }
          v38 = asc_82083C; /*0x5b619f*/
          v30 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1193); /*0x5b61ac*/
          v8 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, (const char *)&stru_82BA00.?[40], 1193); /*0x5b61be*/
          Dialog::ShowMessageBox(v8, v30, 0, 0, 0, v36); /*0x5b61c8*/
          v9 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b61d2*/
          if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b61da*/
            v9 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b61ec*/
          *((unsigned int *)this + 5) = v9; /*0x5b61ee*/
          Network::CleanupOnDisconnect(); /*0x5b61f1*/
          return 1; /*0x5b6202*/
        case 'g': /*0x5b611a*/
        case 'k': /*0x5b611a*/
          Debug::Log(); /*0x5b637d*/
          IDA_LOBYTE(v13) = dword_A8BB08; /*0x5b6382*/
          if ( FindAndValidateMap(byte_A8B8E0, dword_A8BB04, &byte_A8BAE2, v13, 1) == 1 ) /*0x5b63a5*/
          {
            memset(v52, 0, sizeof(v52)); /*0x5b63b7*/
            v53 = 0; /*0x5b63c5*/
            v52[0] = 114; /*0x5b63cd*/
            Stream::WriteBlock((int *)&unk_A8EA70, (int)v52, 250, 1); /*0x5b63d8*/
  LABEL_43:
            strcpy((char *)&dword_A8B230[130].abstractFlags, byte_A8B8E0); /*0x5b650e*/
            dword_A8B554 = 5; /*0x5b654d*/
            dword_A8DB9C = 0; /*0x5b6553*/
            dword_A8B56C = 0; /*0x5b6559*/
            dword_A8B570 = 0; /*0x5b655f*/
            if ( dword_A8B24C == 2 ) /*0x5b6565*/
            {
              v16 = (v49 >> 3) + 4; /*0x5b6576*/
              if ( 5 * (v16 / 5) <= 0xA ) /*0x5b6584*/
                dword_A8B550 = (wchar_t *)10; /*0x5b658d*/
              else
                dword_A8B550 = (wchar_t *)(5 * (v16 / 5)); /*0x5b6586*/
            }
            else
            {
              dword_A8B550 = (wchar_t *)(v49 >> 3); /*0x5b65a5*/
              if ( v49 >> 3 <= 5 ) /*0x5b65aa*/
                dword_A8B550 = (wchar_t *)5; /*0x5b65ac*/
            }
            if ( Game::StartModemMultiplayer((int)this, v43 == 107) == 1 ) /*0x5b65c6*/
              this->ModemGame_field_0x04 = 1; /*0x5b65cc*/
            else
              this->ModemGame_field_0x04 = 2; /*0x5b6667*/
            goto LABEL_51; /*0x5b65cc*/
          }
          if ( !dword_A8BB08 || !_strcmpi(byte_A8B8E0, &stru_82BA00.?) ) /*0x5b63fb*/
          {
            if ( !RequestNetworkFile(byte_A8B8E0, 1, 0) ) /*0x5b64d3*/
              return 1; /*0x5b64e8*/
            v15 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b64ee*/
            if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b64f7*/
              v15 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b6509*/
            *((unsigned int *)this + 5) = v15; /*0x5b650b*/
            goto LABEL_43; /*0x5b650b*/
          }
          memset(v52, 0, sizeof(v52)); /*0x5b641b*/
          v53 = 0; /*0x5b641d*/
          v52[0] = 115; /*0x5b6431*/
          Stream::WriteBlock((int *)&unk_A8EA70, (int)v52, 250, 1); /*0x5b643c*/
          Event::Dispatch(); /*0x5b6441*/
          Stream::ReadPacket((int)&unk_A8EA70); /*0x5b644b*/
          v37 = asc_82083C; /*0x5b6467*/
          v34 = GetStringCSF(g_Str_TXT_OK, 0, (const char *)&stru_82BA00.?[40], 1308); /*0x5b6474*/
          v28 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?[2], 0, (const char *)&stru_82BA00.?[40], 1308); /*0x5b648b*/
          Dialog::ShowMessageBox(v28, v34, 0, 0, 0, v36); /*0x5b6490*/
  LABEL_35:
          v14 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b6495*/
          if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b64a2*/
            v14 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b64b4*/
          *((unsigned int *)this + 5) = v14; /*0x5b64b6*/
          result = 1; /*0x5b64bc*/
          break; /*0x5b64c5*/
        case 'h': /*0x5b611a*/
          Debug::Log(); /*0x5b6674*/
          v19 = CharToWideString(v44); /*0x5b6689*/
          v20 = v45[0]; /*0x5b668f*/
          if ( &v36 != (int *)-65 ) /*0x5b6697*/
          {
            DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1343); /*0x5b66a7*/
            if ( DlgItem ) /*0x5b66ab*/
            {
              if ( v20 >= 8 ) /*0x5b66b4*/
                v22 = Math::InitDegToRad; /*0x5b66bf*/
              else
                v22 = (int (__usercall *)(char, char))dword_8316A8[v20]; /*0x5b66b6*/
              swprintf(Buffer, (const size_t)g_Str_Trace___s_, (const wchar_t *const)v19, &v45[1]); /*0x5b66d8*/
              DrawDialogText((LPARAM)v22, Buffer, DlgItem); /*0x5b66ea*/
            }
          }
          PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5b6707*/
          goto LABEL_51; /*0x5b670c*/
        case 'j': /*0x5b611a*/
          Debug::Log(); /*0x5b6728*/
          IDA_BYTE1(this->ModemGame_field_0x08) = 1; /*0x5b672d*/
          v23 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b6736*/
          if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b6741*/
            v23 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b6753*/
          this->ModemGame_field_0x0C = v23; /*0x5b6755*/
          goto LABEL_51; /*0x5b6758*/
        case 'u': /*0x5b611a*/
          Debug::Log(); /*0x5b6762*/
          ModemGame::ReceiveMapPreview(this); /*0x5b676c*/
          v24 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b6776*/
          if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b677e*/
            v24 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b6790*/
          *((unsigned int *)this + 5) = v24; /*0x5b6792*/
          goto LABEL_51; /*0x5b6795*/
        default:
          Debug::Log(); /*0x5b6716*/
          goto LABEL_51; /*0x5b671e*/
      }
    }
    return result; /*0x5b60f9*/
}
} // namespace gamemd

// 0x5B7360
namespace gamemd {
void ModemGame::ReceiveMapPreview() {
    int v1; // esi
    int v2; // eax
    int FileSize; // esi
    char *v4; // edi
    signed int v5; // ebx
    char *v6; // esi
    Skirmish *v7; // ebx
    ObjectClass *v8; // eax
    Skirmish *v9; // eax
    int Ticks; // [esp+Ch] [ebp-280h]
    Straw v12; // [esp+1Ch] [ebp-270h] BYREF
    int v13; // [esp+24h] [ebp-268h]
    Buffer v14; // [esp+28h] [ebp-264h] BYREF
    Straw v15[5]; // [esp+68h] [ebp-224h] BYREF
    int v16[62]; // [esp+90h] [ebp-1FCh] BYREF
    int16_t v17; // [esp+188h] [ebp-104h]
    char v18[256]; // [esp+18Ch] [ebp-100h] BYREF

    TimerGetTicks(); /*0x5b7371*/
    Debug::Log(); /*0x5b7385*/
    memset(v16, 0, sizeof(v16)); /*0x5b739d*/
    v17 = 0; /*0x5b739f*/
    v16[0] = 118; /*0x5b73a1*/
    Debug::Log(); /*0x5b73ac*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v16, 250, 1); /*0x5b73c8*/
    Ticks = TimerGetTicks(); /*0x5b73e8*/
    while ( Count::GetCountQueue((Count *)&unk_A8EA70) > 0 ) /*0x5b73f7*/
    {
      v1 = 600; /*0x5b7400*/
      if ( Ticks != -1 ) /*0x5b7406*/
      {
        v2 = TimerGetTicks() - Ticks; /*0x5b7411*/
        if ( v2 >= 600 ) /*0x5b7417*/
          break; /*0x5b7417*/
        v1 = 600 - v2; /*0x5b7419*/
      }
      if ( !v1 ) /*0x5b741d*/
        break; /*0x5b741d*/
      Event::Dispatch(); /*0x5b741f*/
    }
    Debug::Log(); /*0x5b7432*/
    Debug::Log(); /*0x5b7441*/
    if ( RequestNetworkFile(v18, 1, 0) ) /*0x5b7456*/
    {
      Debug::Log(); /*0x5b747c*/
      RawFileClass::Construct((RawFileClass *)&v14.Buffer_field_1C, (int)v18); /*0x5b7490*/
      FileSize = CCFileClass::GetFileSize((RawFileClass *)&v14.Buffer_field_1C); /*0x5b749e*/
      v4 = (char *)RA2_OPNEW(FileSize); /*0x5b74a9*/
      FileClass::Read((RawFileClass *)&v14.Buffer_field_1C, v4, FileSize); /*0x5b74b1*/
      v5 = *(unsigned int *)v4; /*0x5b74b6*/
      Debug::Log(); /*0x5b74bd*/
      v12.Straw_field_0x04 = 0; /*0x5b74c8*/
      v13 = 0; /*0x5b74cc*/
      Buffer::Init(&v14, (int)(v4 + 4), FileSize); /*0x5b74de*/
      v14.Buffer_field_0C = 0; /*0x5b74ee*/
      *(unsigned int *)v12.__pad_0 = 0; /*0x5b74f2*/
      LZOStraw::Constructor((LZOStraw *)v15, 1, 0x2000); /*0x5b74fa*/
      Delegate::Set(v15, (int)&v12); /*0x5b7508*/
      v6 = (char *)RA2_OPNEW(2 * v5); /*0x5b7519*/
      LCW::Decompress((LZOStraw *)v15, v6, v5); /*0x5b7521*/
      Debug::Log(); /*0x5b752b*/
      if ( g_UIControlState ) /*0x5b753a*/
      {
        v7 = g_UIControlState; /*0x5b753c*/
        ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b7544*/
        RA2_OPDEL(v7); /*0x5b754a*/
      }
      v8 = (ObjectClass *)RA2_OPNEW(4u); /*0x5b7554*/
      if ( v8 ) /*0x5b755f*/
        v9 = (Skirmish *)unknown_libname_27(v8); /*0x5b7563*/
      else
        v9 = 0; /*0x5b756a*/
      g_UIControlState = v9; /*0x5b756f*/
      ModemGame::RenderPaletteImage((ModemGame *)v9, (int *)v6); /*0x5b7574*/
      InvalidateRect(*(HWND *)this->__pad_0, 0, 0); /*0x5b7582*/
      Debug::Log(); /*0x5b758d*/
      RA2_OPDEL(v6); /*0x5b7593*/
      RA2_OPDEL(v4); /*0x5b7599*/
      LZOStraw::Destructor((LZOStraw *)v15); /*0x5b75a5*/
      Vector::Clear((int)&v14); /*0x5b75ae*/
      Straw::Dtor(&v12); /*0x5b75b7*/
      RawFileClass::Dtor((RawFileClass *)&v14.Buffer_field_1C); /*0x5b75c0*/
    }
    else
    {
      Debug::Log(); /*0x5b7464*/
    }
}
} // namespace gamemd

// 0x5B77E0
namespace gamemd {
char ModemHost::Dialog() {
    int v1; // edi
    HWND Dialog_v; // eax
    int v4; // edi
    int v5; // edi
    TechnoTypeClass *v6; // ecx
    int v8; // [esp-4h] [ebp-14h]
    char v9; // [esp+Fh] [ebp-1h]

    v9 = 0; /*0x5b77ed*/
    Debug::Log(); /*0x5b77f1*/
    this->ModemHost_field_0x04 = -1; /*0x5b7807*/
    Dialog_v = (HWND)CreateDialog(0xF1u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))NetworkGameSetup::DlgProc, 0); /*0x5b780a*/
    *(unsigned int *)this->__pad_0 = Dialog_v; /*0x5b7811*/
    if ( Dialog_v ) /*0x5b7813*/
    {
      v8 = v1; /*0x5b7819*/
      SetWindowLongA(Dialog_v, 8, (LONG)this); /*0x5b781e*/
      ModemHost::InitDialog(this); /*0x5b7826*/
      Dialog::Show(*(Dialog **)this->__pad_0); /*0x5b782d*/
      IDA_LOBYTE(this->ModemHost_field_0x08) = 0; /*0x5b7832*/
      IDA_BYTE1(this->ModemHost_field_0x08) = 1; /*0x5b7835*/
      v4 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b783e*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7846*/
        v4 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b7858*/
      *((unsigned int *)this + 3) = v4; /*0x5b785a*/
      *((unsigned int *)this + 4) = 10000; /*0x5b785d*/
      v5 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5b7869*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5b7871*/
        v5 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5b7883*/
      *((unsigned int *)this + 5) = v5; /*0x5b7885*/
      *((unsigned int *)this + 6) = 1200; /*0x5b7888*/
      *((unsigned int *)this + 7) = 0; /*0x5b788f*/
      *((unsigned char *)this + 32) = 0; /*0x5b7892*/
      *((unsigned short *)this + 17) = 0; /*0x5b7895*/
      *((unsigned int *)this + 19) = -1; /*0x5b7899*/
      *((unsigned int *)this + 20) = -1; /*0x5b789c*/
      g_MissionQueueFrame.localVariables[418] = (int)this; /*0x5b789f*/
      *((unsigned int *)this + 21) = GameConfig::ComputeHash(); /*0x5b78aa*/
      LoadArtINI(); /*0x5b78ad*/
      *((unsigned int *)this + 22) = unknown_libname_29(); /*0x5b78b7*/
      *((unsigned int *)this + 23) = unknown_libname_30(); /*0x5b78c5*/
      while ( 1 ) /*0x5b78c8*/
      {
        this->ModemHost_field_0x04 = -1; /*0x5b78c8*/
        do /*0x5b78f2*/
        {
          if ( (uint8_t)Dialog::PumpMessages() == 1 ) /*0x5b78d2*/
            break; /*0x5b78d2*/
          CellClass::SetOccupancy((int)this, 0); /*0x5b78d7*/
          if ( ModemGuest::ProcessPacket((int)this, 0) == 1 ) /*0x5b78e6*/
            break; /*0x5b78e6*/
          IDA_LOBYTE(v6) = 0; /*0x5b78e8*/
          ScreenSaver::Process(v6, v8); /*0x5b78ea*/
        }
        while ( this->ModemHost_field_0x04 < 0 ); /*0x5b78f2*/
        if ( this->ModemHost_field_0x04 != 1 ) /*0x5b78f8*/
          break; /*0x5b78f8*/
        ShowWindow(*(HWND *)this->__pad_0, 0); /*0x5b78fe*/
        if ( ModemHost::StartGame((int)this, 0) == 1 ) /*0x5b790a*/
        {
          v9 = 1; /*0x5b7915*/
          break; /*0x5b7915*/
        }
        ShowWindow(*(HWND *)this->__pad_0, 5); /*0x5b7911*/
      }
      Dialog::Destroy(*(Dialog **)this->__pad_0); /*0x5b791a*/
      g_MissionQueueFrame.localVariables[418] = 0; /*0x5b7921*/
      if ( IDA_LOBYTE(this->ModemHost_field_0x08) == 1 ) /*0x5b792d*/
        SaveConfigWOL((ObjectClass *)&dword_A8B238); /*0x5b7934*/
    }
    if ( this->ModemHost_field_0x04 == 2 ) /*0x5b793d*/
      SendSignOffEvent(); /*0x5b7941*/
    Debug::Log(); /*0x5b795f*/
    return v9; /*0x5b7969*/
}
} // namespace gamemd

// 0x5B82F0
namespace gamemd {
void ModemHost::InitDialog() {
    ObjectClass *v1; // edi
    HWND *v2; // ebp
    int v3; // ecx
    char v4; // al
    HWND (__stdcall *v5)(HWND, int); // ebx
    HWND DlgItem; // eax
    HWND v7; // edi
    char *v8; // eax
    HWND v9; // eax
    HWND v10; // edi
    wchar_t *StringCSF; // eax
    wchar_t *v12; // eax
    wchar_t *v13; // eax
    wchar_t *v14; // eax
    wchar_t *v15; // eax
    wchar_t *v16; // eax
    wchar_t *v17; // eax
    wchar_t *v18; // eax
    WPARAM v19; // ebx
    LPARAM *v20; // ebp
    HWND v21; // eax
    HWND v22; // edi
    LPARAM i; // ebp
    int v24; // eax
    LRESULT v25; // eax
    WPARAM ListBoxItem; // eax
    HWND v27; // edi
    HWND v28; // eax
    HWND v29; // edi
    HWND v30; // edi
    LPARAM v31; // ebp
    HWND v32; // eax
    HWND v33; // edi
    HWND v34; // eax
    HWND v35; // edi
    HWND v36; // edi
    HWND v37; // eax
    HWND v38; // eax
    HWND v39; // eax
    HWND v40; // eax
    HWND v41; // eax
    HWND v42; // eax
    HWND v43; // eax
    HWND v44; // eax
    HWND v45; // eax
    HWND v46; // eax
    unsigned int v47; // eax
    int v48; // eax
    Skirmish *v49; // edi
    HWND v50; // eax
    unsigned int *v51; // eax
    char v52; // bl
    ObjectClass *v53; // eax
    Skirmish *v54; // eax
    HWND *v55; // ebx
    HWND v56; // esi
    HWND v57; // eax
    HWND *lParam; // [esp+4h] [ebp-A74h]
    BufferIOFileClass v59; // [esp+8h] [ebp-A70h] BYREF
    int v60[3]; // [esp+60h] [ebp-A18h] BYREF
    int v61; // [esp+6Ch] [ebp-A0Ch]
    wchar_t Buffer[256]; // [esp+74h] [ebp-A04h] BYREF
    wchar_t Format[1026]; // [esp+274h] [ebp-804h] BYREF

    v2 = (HWND *)this; /*0x5b82fa*/
    *(unsigned int *)v59.RawFileClass = this; /*0x5b8301*/
    Debug::Log(); /*0x5b8305*/
    if ( IDA_LOBYTE(stru_82BA00.BuildingAnim[7]) == 1 ) /*0x5b8314*/
    {
      IDA_LOBYTE(stru_82BA00.BuildingAnim[7]) = 0; /*0x5b831f*/
      nullsub_38(v1); /*0x5b8326*/
      *(unsigned int *)&stru_A8B250.__pad_0[12] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5252); /*0x5b8336*/
      stru_A8B250.__pad_0[8] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5295); /*0x5b8342*/
      stru_A8B250.__pad_0[16] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5292); /*0x5b834e*/
      stru_A8B250.__pad_0[17] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5297); /*0x5b835a*/
      *(unsigned int *)&stru_A8B250.__pad_0[36] = 0; /*0x5b8360*/
      v3 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5268); /*0x5b836a*/
      stru_A8B250.__pad_0[18] = 0; /*0x5b8370*/
      *(unsigned int *)&stru_A8B250.__pad_0[32] = v3; /*0x5b8377*/
      stru_A8B250.__pad_0[19] = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5305); /*0x5b8389*/
      v4 = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5306); /*0x5b838f*/
      *(unsigned int *)&stru_A8B250.__pad_0[24] = stru_A8EB00.ObjectTypeClass[24]; /*0x5b8395*/
      stru_A8B250.__pad_0[20] = v4; /*0x5b839b*/
      stru_A8B250.__pad_0[28] = 0; /*0x5b83a0*/
    }
    v5 = GetDlgItem; /*0x5b83aa*/
    DlgItem = GetDlgItem(*v2, 1473); /*0x5b83b6*/
    v7 = DlgItem; /*0x5b83be*/
    if ( DlgItem ) /*0x5b83c2*/
    {
      SendMessageA(DlgItem, 0xC5u, 0x13u, 0); /*0x5b83ce*/
      v8 = CharToWideString(unk_A8B380); /*0x5b83d5*/
      SendMessageA(v7, 0x4B2u, 0, (LPARAM)v8); /*0x5b83e3*/
    }
    Debug::Log(); /*0x5b83ef*/
    v9 = GetDlgItem(*v2, 1029); /*0x5b8400*/
    v10 = v9; /*0x5b8402*/
    if ( v9 ) /*0x5b8406*/
    {
      SendMessageA(v9, 0x14Bu, 0, 0); /*0x5b8416*/
      StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.?[37], 0, &stru_82BA00.__pad_F70[52], 407); /*0x5b8429*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x5b8437*/
      v12 = GetStringCSF((wchar_t *)&stru_82BA00.?[35], 0, &stru_82BA00.__pad_F70[52], 408); /*0x5b844a*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v12); /*0x5b8458*/
      v13 = GetStringCSF((wchar_t *)&stru_82BA00.?[32], 0, &stru_82BA00.__pad_F70[52], 409); /*0x5b846b*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v13); /*0x5b8479*/
      v14 = GetStringCSF((wchar_t *)&stru_82BA00.?[29], 0, &stru_82BA00.__pad_F70[52], 410); /*0x5b848c*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v14); /*0x5b849a*/
      v15 = GetStringCSF((wchar_t *)&stru_82BA00.?[26], 0, &stru_82BA00.__pad_F70[52], 411); /*0x5b84ad*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v15); /*0x5b84bb*/
      v16 = GetStringCSF((wchar_t *)&stru_82BA00.?[22], 0, &stru_82BA00.__pad_F70[52], 412); /*0x5b84ce*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v16); /*0x5b84dc*/
      v17 = GetStringCSF((wchar_t *)&stru_82BA00.?[19], 0, &stru_82BA00.__pad_F70[52], 413); /*0x5b84ef*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v17); /*0x5b84fd*/
      v18 = GetStringCSF((wchar_t *)&stru_82BA00.?[16], 0, &stru_82BA00.__pad_F70[52], 414); /*0x5b8510*/
      SendMessageA(v10, 0x4C1u, 0xFFFFFFFF, (LPARAM)v18); /*0x5b851e*/
      v19 = 0; /*0x5b8520*/
      v20 = dword_8316A8; /*0x5b8522*/
      do /*0x5b853e*/
        SendMessageA(v10, 0x498u, v19++, *v20++); /*0x5b8532*/
      while ( (int)v20 < (int)&off_8316C8 ); /*0x5b853e*/
      dword_A8B394 = dword_A8B3B4; /*0x5b854e*/
      SendMessageA(v10, 0x14Eu, dword_A8B3B4, 0); /*0x5b8553*/
      v5 = GetDlgItem; /*0x5b8555*/
      v2 = *(HWND **)v59.RawFileClass; /*0x5b855b*/
    }
    Debug::Log(); /*0x5b856b*/
    v21 = v5(*v2, 1639); /*0x5b857c*/
    v22 = v21; /*0x5b857e*/
    if ( v21 ) /*0x5b8582*/
    {
      SendMessageA(v21, 0x14Bu, 0, 0); /*0x5b858e*/
      for ( i = 0; i < dword_A83CA8; ++i ) /*0x5b8599*/
      {
        v24 = *((unsigned int *)dword_A83C9C + i); /*0x5b85a1*/
        if ( *(unsigned char *)(v24 + 421) ) /*0x5b85a4*/
        {
          v25 = SendMessageA(v22, 0x4C2u, 0, *(unsigned int *)(v24 + 96)); /*0x5b85ba*/
          SendMessageA(v22, 0x151u, v25, i); /*0x5b85c4*/
        }
      }
      ListBoxItem = FindListBoxItem(v22, -1, dword_A8B3AC); /*0x5b85dc*/
      SendMessageA(v22, 0x14Eu, ListBoxItem, 0); /*0x5b85ea*/
      v2 = *(HWND **)v59.RawFileClass; /*0x5b85ec*/
    }
    v27 = v5(*v2, 1641); /*0x5b85fb*/
    if ( v27 ) /*0x5b85ff*/
    {
      lParam = *(HWND **)&stru_A8B250.__pad_0[32]; /*0x5b860e*/
      SendMessageA( /*0x5b8630*/
        v27,
        0x406u,
        1u,
        *(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5264)
      | (*(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5272) << 16));
      SendMessageA(v27, 0x405u, 1u, (LPARAM)lParam); /*0x5b863f*/
    }
    Debug::Log(); /*0x5b864c*/
    v28 = v5(*v2, 1360); /*0x5b865d*/
    v29 = v28; /*0x5b865f*/
    if ( v28 ) /*0x5b8663*/
    {
      lParam = (HWND *)g_RulesInitConfig; /*0x5b8678*/
      SendMessageA(v28, 0x406u, 1u, 655361); /*0x5b867c*/
      SendMessageA(v29, 0x405u, 1u, (LPARAM)lParam); /*0x5b868b*/
    }
    Debug::Log(); /*0x5b8699*/
    v30 = v5(*v2, 1026); /*0x5b86ac*/
    if ( v30 ) /*0x5b86b0*/
    {
      v31 = *(unsigned int *)&stru_A8B250.__pad_0[12]; /*0x5b86bb*/
      SendMessageA( /*0x5b86dd*/
        v30,
        0x406u,
        1u,
        *(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5248)
      | (*(uint16_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5256) << 16));
      SendMessageA(v30, 0x405u, 1u, v31); /*0x5b86e8*/
      SendMessageA(v30, 0x4ABu, 0, 250); /*0x5b86f7*/
      v2 = *(HWND **)v59.RawFileClass; /*0x5b86f9*/
    }
    Debug::Log(); /*0x5b8708*/
    v32 = v5(*v2, 1362); /*0x5b8719*/
    v33 = v32; /*0x5b871b*/
    if ( v32 ) /*0x5b871f*/
    {
      lParam = *(HWND **)&stru_A8B250.__pad_0[36]; /*0x5b8734*/
      SendMessageA(v32, 0x406u, 1u, 393216); /*0x5b8738*/
      SendMessageA(v33, 0x405u, 1u, (LPARAM)lParam); /*0x5b8747*/
    }
    Debug::Log(); /*0x5b8755*/
    v34 = v5(*v2, 1321); /*0x5b8766*/
    v35 = v34; /*0x5b8768*/
    if ( v34 ) /*0x5b876c*/
    {
      SendMessageA(v34, 0x406u, 1u, 393216); /*0x5b877b*/
      SendMessageA(v35, 0x405u, 1u, 6 - stru_A8EB00.ObjectTypeClass[24]); /*0x5b8793*/
    }
    Debug::Log(); /*0x5b87a1*/
    v36 = v5(*v2, 1363); /*0x5b87b4*/
    if ( v36 ) /*0x5b87b8*/
    {
      lParam = *(HWND **)&stru_A8B250.__pad_0[40]; /*0x5b87cc*/
      SendMessageA(v36, 0x406u, 1u, 0x20000); /*0x5b87d0*/
      SendMessageA(v36, 0x405u, 1u, (LPARAM)lParam); /*0x5b87df*/
    }
    Debug::Log(); /*0x5b87ed*/
    v37 = v5(*v2, 1643); /*0x5b87fe*/
    if ( v37 ) /*0x5b8802*/
      SendMessageA(v37, 0xF1u, dword_A8B320 == 1, 0); /*0x5b881b*/
    Debug::Log(); /*0x5b8836*/
    v38 = v5(*v2, 1642); /*0x5b8847*/
    if ( v38 ) /*0x5b884b*/
      SendMessageA(v38, 0xF1u, stru_A8B250.__pad_0[8] == 1, 0); /*0x5b8864*/
    Debug::Log(); /*0x5b887f*/
    v39 = v5(*v2, 1356); /*0x5b8890*/
    if ( v39 ) /*0x5b8894*/
      SendMessageA(v39, 0xF1u, stru_A8B250.__pad_0[17] == 1, 0); /*0x5b88ad*/
    Debug::Log(); /*0x5b88c8*/
    v40 = v5(*v2, 1357); /*0x5b88d9*/
    if ( v40 ) /*0x5b88dd*/
      SendMessageA(v40, 0xF1u, byte_A8B31F == 1, 0); /*0x5b88f6*/
    Debug::Log(); /*0x5b8911*/
    v41 = v5(*v2, 1572); /*0x5b8922*/
    if ( v41 ) /*0x5b8926*/
      SendMessageA(v41, 0xF1u, stru_A8B250.__pad_0[16] == 1, 0); /*0x5b893f*/
    Debug::Log(); /*0x5b895a*/
    v42 = v5(*v2, 1430); /*0x5b896b*/
    if ( v42 ) /*0x5b896f*/
      SendMessageA(v42, 0xF1u, byte_A8B31D == 1, 0); /*0x5b8988*/
    Debug::Log(); /*0x5b89a3*/
    v43 = v5(*v2, 1358); /*0x5b89b4*/
    if ( v43 ) /*0x5b89b8*/
      SendMessageA(v43, 0xF1u, stru_A8B250.__pad_0[18] == 1, 0); /*0x5b89d1*/
    Debug::Log(); /*0x5b89ec*/
    v44 = v5(*v2, 1690); /*0x5b89fd*/
    if ( v44 ) /*0x5b8a01*/
      SendMessageA(v44, 0xF1u, stru_A8B250.__pad_0[19] == 1, 0); /*0x5b8a1a*/
    Debug::Log(); /*0x5b8a35*/
    v45 = v5(*v2, 1693); /*0x5b8a46*/
    if ( v45 ) /*0x5b8a4a*/
      SendMessageA(v45, 0xF1u, stru_A8B250.__pad_0[20] == 1, 0); /*0x5b8a63*/
    Debug::Log(); /*0x5b8a7e*/
    v46 = v5(*v2, 1361); /*0x5b8a8f*/
    if ( v46 ) /*0x5b8a93*/
      SendMessageA(v46, 0xF1u, stru_A8B250.__pad_0[28] == 1, 0); /*0x5b8aac*/
    Debug::Log(); /*0x5b8ac7*/
    NetworkBuffer::GetField((NetworkBuffer *)&stru_A8EB00.?[252]); /*0x5b8ad4*/
    v47 = Random::Range(&Randomizer_Global, 1, 0x7FFF); /*0x5b8ae5*/
    srand(v47); /*0x5b8aeb*/
    v48 = rand(); /*0x5b8af3*/
    v49 = g_UIControlState; /*0x5b8b04*/
    *(unsigned int *)&stru_A8EB00.?[432] = v48; /*0x5b8b0a*/
    dword_A8E960[0] = dword_A8E960[0] & 0xFFFFFFEF /*0x5b8b22*/
                    | (16 * (*(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5298) & 1));
    if ( g_UIControlState ) /*0x5b8b27*/
    {
      ComPtr::Dtor((ComPtr *)g_UIControlState); /*0x5b8b2b*/
      RA2_OPDEL(v49); /*0x5b8b31*/
      g_UIControlState = 0; /*0x5b8b39*/
    }
    PtrVector::Destroy(&stru_A8DA74); /*0x5b8b48*/
    LoadScenarioClassByIndex(0); /*0x5b8b4f*/
    *(unsigned int *)&stru_A8B250.__pad_0[4] = 0; /*0x5b8b54*/
    v50 = v5(*v2, 1448); /*0x5b8b67*/
    SendMessageA(v50, 0x4B2u, 0, (LPARAM)MEMORY[0xA8B322]); /*0x5b8b76*/
    IDA_BYTE2(stru_A8D600.Network_field_0xC) = 1; /*0x5b8b81*/
    v51 = CCFileClass::Construct((CCFileClass *)&v59.?, byte_A8B8E0); /*0x5b8b88*/
    v52 = (*(int (__thiscall **)(unsigned int *, unsigned int))(*v51 + 20))(v51, 0); /*0x5b8b9a*/
    v61 = 0; /*0x5b8ba4*/
    Vector::Clear((int)v60); /*0x5b8bac*/
    *(unsigned int *)v59.RawFileClass = &off_7E1668; /*0x5b8bb5*/
    BufferIOFileClass::Dtor(&v59); /*0x5b8bbd*/
    if ( v52 ) /*0x5b8bc4*/
    {
      v53 = (ObjectClass *)RA2_OPNEW(4u); /*0x5b8bc8*/
      if ( v53 ) /*0x5b8bd2*/
        v54 = (Skirmish *)unknown_libname_27(v53); /*0x5b8bd6*/
      else
        v54 = 0; /*0x5b8bdd*/
      g_UIControlState = v54; /*0x5b8be6*/
      PreviewClass::ReadPreview((PreviewClass *)v54, byte_A8B8E0); /*0x5b8beb*/
      v55 = lParam; /*0x5b8bf0*/
      PostMessageA(*lParam, 0xFu, 0, 0); /*0x5b8bfd*/
    }
    else
    {
      v55 = lParam; /*0x5b8c05*/
    }
    if ( strlen(byte_AC1288) > 0x4E ) /*0x5b8c1b*/
      byte_AC12D7 = 0; /*0x5b8c1d*/
    if ( strlen(byte_AC1288) ) /*0x5b8c27*/
    {
      BulkCharToWide(Format, (uint8_t *)byte_AC1288, -1); /*0x5b8c41*/
      if ( &g_TypeClass_DefaultString ) /*0x5b8c4d*/
      {
        v56 = GetDlgItem(*v55, 1343); /*0x5b8c5d*/
        if ( v56 ) /*0x5b8c61*/
        {
          swprintf(Buffer, (const size_t)g_Str_Trace___s_, Format, &g_TypeClass_DefaultString); /*0x5b8c83*/
          DrawDialogText((LPARAM)Math::InitDegToRad, Buffer, v56); /*0x5b8c95*/
        }
      }
    }
    byte_AC1288[0] = 0; /*0x5b8c9a*/
    v57 = GetDlgItem(*v55, 1); /*0x5b8ca6*/
    if ( v57 ) /*0x5b8cb2*/
      EnableWindow(v57, 0); /*0x5b8cb7*/
    NullModemClass::Flush((NullModemClass *)&unk_A8EA70, 1); /*0x5b8cc4*/
    Debug::Log(); /*0x5b8cce*/
}
} // namespace gamemd

// 0x5B9680
namespace gamemd {
int NetworkGameSetup::ReadRulesInitConfig() {
    int result; // eax

    result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1360); /*0x5b968b*/
    if ( result ) /*0x5b9693*/
    {
      result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b969f*/
      g_RulesInitConfig = result; /*0x5b96a5*/
      IDA_BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b96aa*/
    }
    return result; /*0x5b96ae*/
}
} // namespace gamemd

// 0x5B96B0
namespace gamemd {
int NetworkGameSetup::ReadRulesBases() {
    int result; // eax

    result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1026); /*0x5b96bb*/
    if ( result ) /*0x5b96c3*/
    {
      result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b96cf*/
      *(unsigned int *)&stru_A8B250.__pad_0[12] = result; /*0x5b96d5*/
      IDA_BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b96da*/
    }
    return result; /*0x5b96de*/
}
} // namespace gamemd

// 0x5B96E0
namespace gamemd {
int NetworkGameSetup::ReadRulesAlliesAllowed() {
    int result; // eax

    result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1362); /*0x5b96eb*/
    if ( result ) /*0x5b96f3*/
    {
      result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b96ff*/
      *(unsigned int *)&stru_A8B250.__pad_0[36] = result; /*0x5b9705*/
      IDA_BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b970a*/
    }
    return result; /*0x5b970e*/
}
} // namespace gamemd

// 0x5B9710
namespace gamemd {
int NetworkGameSetup::ReadRulesEngineerCount() {
    int result; // eax

    result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1321); /*0x5b971b*/
    if ( result ) /*0x5b9723*/
    {
      result = SendMessageA((HWND)result, 0x400u, 0, 0); /*0x5b972f*/
      *(unsigned int *)&stru_A8B250.__pad_0[24] = 6 - result; /*0x5b973c*/
      IDA_BYTE1(this->NetworkGameSetup_field_0x08) = 1; /*0x5b9742*/
    }
    return result; /*0x5b9746*/
}
} // namespace gamemd

// 0x5BA060
namespace gamemd {
char ModemGuest::ProcessPacket(char a2) {
    int v3; // esi
    int v4; // eax
    int *v5; // eax
    int v7; // edi
    int v8; // esi
    int *v9; // eax
    int v10; // esi
    unsigned int updated; // eax
    bool v12; // cl
    int v13; // esi
    char *v14; // eax
    HWND v15; // eax
    char *v16; // eax
    int v17; // esi
    const wchar_t *v18; // ebx
    HWND DlgItem; // edi
    int (__usercall *v20)(char, char); // esi
    int v21; // esi
    int *v22; // eax
    char v23; // al
    int v24; // esi
    int *v25; // [esp-14h] [ebp-334h]
    int *v26; // [esp-14h] [ebp-334h]
    int *v27; // [esp-14h] [ebp-334h]
    wchar_t *v28; // [esp-10h] [ebp-330h]
    wchar_t *v29; // [esp-10h] [ebp-330h]
    wchar_t *v30; // [esp-10h] [ebp-330h]
    wchar_t *v31; // [esp-10h] [ebp-330h]
    wchar_t *v32; // [esp-10h] [ebp-330h]
    wchar_t *StringCSF; // [esp-10h] [ebp-330h]
    ObjectClass *v34; // [esp+0h] [ebp-320h] BYREF
    const wchar_t *v35; // [esp+10h] [ebp-310h]
    const wchar_t *v36; // [esp+14h] [ebp-30Ch]
    const wchar_t *v37; // [esp+18h] [ebp-308h]
    const wchar_t *v38; // [esp+1Ch] [ebp-304h]
    int v39; // [esp+20h] [ebp-300h] BYREF
    int v40; // [esp+24h] [ebp-2FCh] BYREF
    unsigned char v41[20]; // [esp+28h] [ebp-2F8h] BYREF
    unsigned char v42[6]; // [esp+3Ch] [ebp-2E4h] BYREF
    unsigned int v43; // [esp+42h] [ebp-2DEh]
    unsigned int v44; // [esp+46h] [ebp-2DAh]
    int v45; // [esp+AAh] [ebp-276h]
    int v46; // [esp+BEh] [ebp-262h]
    int v47; // [esp+F4h] [ebp-22Ch]
    int v48; // [esp+F8h] [ebp-228h]
    wchar_t Buffer[256]; // [esp+120h] [ebp-200h] BYREF

    if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)&v40, (int)&v39) <= 0 ) /*0x5ba082*/
    {
  LABEL_48:
      v21 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ba4f6*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba503*/
        v21 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ba515*/
      if ( (unsigned int)(v21 - *(unsigned int *)(this + 20)) <= *(unsigned int *)(this + 24) ) /*0x5ba521*/
      {
        return 0; /*0x5ba616*/
      }
      else
      {
        Debug::Log(); /*0x5ba52d*/
        if ( !a2 ) /*0x5ba53e*/
        {
          v35 = asc_82083C; /*0x5ba557*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2197); /*0x5ba564*/
          v22 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2197); /*0x5ba576*/
          Dialog::ShowMessageBox(v22, StringCSF, 0, 0, 0, (int)v34); /*0x5ba580*/
        }
        return 1; /*0x5ba588*/
      }
    }
    else
    {
      v3 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ba08d*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba098*/
        v3 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ba0aa*/
      v4 = v40; /*0x5ba0ac*/
      *(unsigned int *)(this + 20) = v3; /*0x5ba0b0*/
      *(unsigned int *)(this + 24) = 1200; /*0x5ba0b6*/
      if ( v4 < 100 || v4 >= 109 || v4 == 104 || v42[0] != dword_A8DB30 ) /*0x5ba0e7*/
      {
        switch ( v4 ) /*0x5ba16d*/
        {
          case 'e': /*0x5ba16d*/
            Debug::Log(); /*0x5ba268*/
            updated = NetworkBuffer::UpdateWindow((NetworkBuffer *)&stru_A8EB00.?[252], v43, v44); /*0x5ba27f*/
            if ( updated ) /*0x5ba286*/
            {
              if ( updated == -1 ) /*0x5ba2de*/
              {
                if ( !a2 ) /*0x5ba2e9*/
                {
                  v37 = asc_82083C; /*0x5ba306*/
                  v31 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2068); /*0x5ba313*/
                  v26 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2068); /*0x5ba32a*/
                  Dialog::ShowMessageBox(v26, v31, 0, 0, 0, (int)v34); /*0x5ba32f*/
                }
              }
              else
              {
                v12 = v45 == *(unsigned int *)(this + 84); /*0x5ba344*/
                if ( v47 != *(unsigned int *)(this + 92) ) /*0x5ba352*/
                  v12 = 0; /*0x5ba354*/
                if ( v48 == *(unsigned int *)(this + 88) && v12 ) /*0x5ba366*/
                {
                  dword_A8B24C = Network::GetMaxPacketSize(updated); /*0x5ba3fe*/
                  v14 = CharToWideString(v41); /*0x5ba403*/
                  ModemGuest::UpdateGuestPlayerInfo((char *)this, (wchar_t *)v14, v42[5], *(int *)&v42[1]); /*0x5ba416*/
                  *(unsigned char *)(this + 32) = 1; /*0x5ba41b*/
                  goto LABEL_48; /*0x5ba41f*/
                }
                if ( !a2 ) /*0x5ba375*/
                {
                  v35 = asc_82083C; /*0x5ba38e*/
                  v32 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2129); /*0x5ba39b*/
                  v27 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2129); /*0x5ba3b2*/
                  Dialog::ShowMessageBox(v27, v32, 0, 0, 0, (int)v34); /*0x5ba3b7*/
                }
              }
            }
            else if ( !a2 ) /*0x5ba291*/
            {
              v38 = asc_82083C; /*0x5ba2ae*/
              v30 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2059); /*0x5ba2bb*/
              v25 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2059); /*0x5ba2d2*/
              Dialog::ShowMessageBox(v25, v30, 0, 0, 0, (int)v34); /*0x5ba2d7*/
            }
            v13 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ba3c1*/
            if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba3c9*/
              v13 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ba3db*/
            *(unsigned int *)(this + 20) = v13; /*0x5ba3dd*/
            break; /*0x5ba3dd*/
          case 'f': /*0x5ba16d*/
            Debug::Log(); /*0x5ba179*/
            v7 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ba183*/
            if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba18e*/
              v7 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ba1a0*/
            while ( 1 ) /*0x5ba1a7*/
            {
              v8 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ba1a7*/
              if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba1af*/
                v8 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ba1c1*/
              if ( (unsigned int)(v8 - v7) >= 0x3C ) /*0x5ba1c8*/
                break; /*0x5ba1c8*/
              Event::Dispatch(); /*0x5ba1ca*/
              Stream::ReadPacket((int)&unk_A8EA70); /*0x5ba1d4*/
            }
            if ( !a2 ) /*0x5ba1e4*/
            {
              v36 = asc_82083C; /*0x5ba1fd*/
              v29 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2038); /*0x5ba20a*/
              v9 = (int *)GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2038); /*0x5ba21c*/
              Dialog::ShowMessageBox(v9, v29, 0, 0, 0, (int)v34); /*0x5ba226*/
            }
            v10 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ba230*/
            if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba238*/
              v10 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ba24a*/
            *(unsigned int *)(this + 20) = v10; /*0x5ba24c*/
            Network::CleanupOnDisconnect(); /*0x5ba24f*/
            return 1; /*0x5ba260*/
          case 'h': /*0x5ba16d*/
            Debug::Log(); /*0x5ba450*/
            v16 = CharToWideString(v41); /*0x5ba45c*/
            v17 = v42[0]; /*0x5ba469*/
            v18 = (const wchar_t *)v16; /*0x5ba46f*/
            if ( &v34 != (ObjectClass **)-61 ) /*0x5ba473*/
            {
              DlgItem = GetDlgItem(*(HWND *)this, 1343); /*0x5ba484*/
              if ( DlgItem ) /*0x5ba488*/
              {
                if ( v17 >= 8 ) /*0x5ba491*/
                  v20 = Math::InitDegToRad; /*0x5ba49c*/
                else
                  v20 = (int (__usercall *)(char, char))dword_8316A8[v17]; /*0x5ba493*/
                swprintf(Buffer, (const size_t)g_Str_Trace___s_, v18, &v42[1]); /*0x5ba4b5*/
                DrawDialogText((LPARAM)v20, Buffer, DlgItem); /*0x5ba4c7*/
              }
            }
            if ( !a2 ) /*0x5ba4d5*/
              PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1708), 0x2000, 1.0, 0); /*0x5ba4ee*/
            goto LABEL_48; /*0x5ba4ee*/
          case 'i': /*0x5ba16d*/
            Debug::Log(); /*0x5ba599*/
            v23 = *(unsigned char *)(this + 32); /*0x5ba59e*/
            *(unsigned int *)(this + 16) = v46; /*0x5ba5ab*/
            if ( !v23 ) /*0x5ba5b0*/
              *(unsigned char *)(this + 9) = 1; /*0x5ba5b6*/
            goto LABEL_48; /*0x5ba5ba*/
          case 't': /*0x5ba16d*/
            Debug::Log(); /*0x5ba429*/
            v15 = GetDlgItem(*(HWND *)this, 1); /*0x5ba439*/
            EnableWindow(v15, 1); /*0x5ba440*/
            goto LABEL_48; /*0x5ba446*/
          case 'w': /*0x5ba16d*/
            GenerateRandomMapPreview(v34); /*0x5ba5d3*/
            v24 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5ba5dd*/
            if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5ba5e5*/
              v24 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5ba5f7*/
            *(unsigned int *)(this + 20) = v24; /*0x5ba5f9*/
            goto LABEL_48; /*0x5ba5fc*/
          default:
            Debug::Log(); /*0x5ba5c4*/
            goto LABEL_48; /*0x5ba5cc*/
        }
      }
      else
      {
        Debug::Log(); /*0x5ba0ee*/
        if ( !a2 ) /*0x5ba0ff*/
        {
          v36 = asc_82083C; /*0x5ba11c*/
          v28 = GetStringCSF(g_Str_TXT_OK, 0, &stru_82BA00.__pad_F70[52], 2018); /*0x5ba129*/
          v5 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.?, 0, &stru_82BA00.__pad_F70[52], 2018); /*0x5ba13b*/
          Dialog::ShowMessageBox(v5, v28, 0, 0, 0, (int)v34); /*0x5ba145*/
          return 1; /*0x5ba156*/
        }
      }
      return 1; /*0x5ba3e3*/
    }
}
} // namespace gamemd

// 0x5BAC60
namespace gamemd {
char ModemHost::StartGame(char a2) {
    int v3; // eax
    int v4; // esi
    char *v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // esi
    int v9; // ebx
    int v10; // eax
    unsigned int BridgeIndexThunk; // ecx
    unsigned int v12; // eax
    unsigned int v13; // eax
    wchar_t *StringCSF; // eax
    Dialog *MessageBox; // eax
    Dialog *v16; // ebx
    int v17; // edi
    int v18; // esi
    int v19; // esi
    wchar_t *v20; // eax
    int v21; // edi
    int v22; // esi
    int *v23; // eax
    int v24; // esi
    int v25; // eax
    int v26; // ecx
    void *vtable0; // edx
    wchar_t *v28; // [esp-10h] [ebp-224h]
    ObjectClass *v29; // [esp+0h] [ebp-214h]
    char v31[4]; // [esp+18h] [ebp-1FCh] BYREF
    int v32[62]; // [esp+1Ch] [ebp-1F8h] BYREF
    int16_t v33; // [esp+114h] [ebp-100h]
    int v34[63]; // [esp+118h] [ebp-FCh] BYREF

    Debug::Log(); /*0x5bac73*/
    Debug::Log(); /*0x5bac97*/
    if ( a2 == 1 ) /*0x5baca2*/
      return 0; /*0x5bacb0*/
    dword_A8B230[130].vtable3 = *(void **)&stru_A8B250.__pad_0[4]; /*0x5bacc5*/
    strcpy( /*0x5bacfc*/
      (char *)&dword_A8B230[130].abstractFlags,
      (const char *)(*(unsigned int *)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]) + 88));
    dword_A8B230[43].vtable1 = (void *)1; /*0x5bad10*/
    dword_A8B230[43].vtable0 = (void *)1; /*0x5bad1c*/
    dword_A8B54C = 0; /*0x5bad22*/
    v3 = RA2_OPNEW(0x85u); /*0x5bad28*/
    v4 = v3; /*0x5bad2d*/
    if ( v3 ) /*0x5bad34*/
    {
      Waypoint::InitInvalid((Waypoint *)(v3 + 40)); /*0x5bad3d*/
      v5 = CharToWideString(unk_A8B380); /*0x5bad47*/
      wcscpy((wchar_t *)v4, (const wchar_t *)v5); /*0x5bad4e*/
      *(unsigned int *)(v4 + 75) = dword_A8B3AC; /*0x5bad5b*/
      *(unsigned int *)(v4 + 83) = dword_A8B394; /*0x5bad64*/
      *(unsigned int *)(v4 + 115) = -1; /*0x5bad67*/
      if ( dword_A8DA84 < dword_A8DA7C /*0x5bada4*/
        || (byte_A8DA81 || !dword_A8DA7C)
        && dword_A8DA88 > 0
        && (*(uint8_t (__thiscall **)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))(
             &stru_A8DA74,
             dword_A8DA7C + dword_A8DA88,
             0) )
      {
        v6 = dword_A8DA84++; /*0x5badb1*/
        dword_A8DA78[v6] = v4; /*0x5badc0*/
      }
    }
    v7 = RA2_OPNEW(0x85u); /*0x5badc8*/
    v8 = v7; /*0x5badcd*/
    if ( v7 ) /*0x5badd4*/
    {
      Waypoint::InitInvalid((Waypoint *)(v7 + 40)); /*0x5baddd*/
      v9 = this; /*0x5bade2*/
      wcscpy((wchar_t *)v8, (const wchar_t *)(this + 34)); /*0x5badeb*/
      *(unsigned int *)(v8 + 75) = *(unsigned int *)(this + 80); /*0x5badf6*/
      *(unsigned int *)(v8 + 83) = *(unsigned int *)(this + 76); /*0x5badfc*/
      *(unsigned int *)(v8 + 115) = -1; /*0x5badff*/
      if ( dword_A8DA84 < dword_A8DA7C /*0x5bae3c*/
        || (byte_A8DA81 || !dword_A8DA7C)
        && dword_A8DA88 > 0
        && (*(uint8_t (__thiscall **)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA74 + 8))(
             &stru_A8DA74,
             dword_A8DA7C + dword_A8DA88,
             0) )
      {
        v10 = dword_A8DA84++; /*0x5bae49*/
        dword_A8DA78[v10] = v8; /*0x5bae58*/
      }
    }
    else
    {
      v9 = this; /*0x5bae5d*/
    }
    if ( dword_A8DA84 != 2 ) /*0x5bae6d*/
      return 0; /*0x5bae7b*/
    memset(v32, 0, sizeof(v32)); /*0x5bae89*/
    v33 = 0; /*0x5bae8b*/
    v32[0] = 103; /*0x5bae92*/
    BridgeIndexThunk = CellClass::GetBridgeIndexThunk((NullModemClass *)&unk_A8EA70); /*0x5bae9f*/
    v12 = *(unsigned int *)(v9 + 16); /*0x5baea1*/
    *(int *)((char *)&v32[38] + 2) = BridgeIndexThunk; /*0x5baea9*/
    if ( v12 != 10000 && BridgeIndexThunk < v12 ) /*0x5baeb4*/
    {
      BridgeIndexThunk = v12; /*0x5baeb6*/
      *(int *)((char *)&v32[38] + 2) = v12; /*0x5baeb8*/
    }
    v13 = 5; /*0x5baec5*/
    stru_A8EB00.ObjectTypeClass[24] = *(unsigned int *)&stru_A8B250.__pad_0[24]; /*0x5baeca*/
    dword_A8B554 = 5; /*0x5baed8*/
    dword_A8DB9C = 0; /*0x5baedd*/
    dword_A8B56C = 0; /*0x5baee3*/
    dword_A8B570 = 0; /*0x5baee9*/
    if ( dword_A8B24C != 2 ) /*0x5baeef*/
    {
      dword_A8B550 = (wchar_t *)(BridgeIndexThunk >> 3); /*0x5baf1a*/
      if ( BridgeIndexThunk >> 3 > 5 ) /*0x5baf20*/
        goto LABEL_28; /*0x5baf20*/
  LABEL_27:
      dword_A8B550 = (wchar_t *)v13; /*0x5baf22*/
      goto LABEL_28; /*0x5baf22*/
    }
    v13 = 5 * (((BridgeIndexThunk >> 3) + 4) / 5); /*0x5baf01*/
    if ( v13 > 0xA ) /*0x5baf07*/
      goto LABEL_27; /*0x5baf07*/
    dword_A8B550 = (wchar_t *)10; /*0x5baf09*/
  LABEL_28:
    IDA_LOBYTE(v32[6]) = dword_A8DB30; /*0x5baf27*/
    Stream::WriteBlock((int *)&unk_A8EA70, (int)v32, 250, 1); /*0x5baf41*/
    StringCSF = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[628], 0, &stru_82BA00.__pad_F70[52], 2540); /*0x5baf58*/
    MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5baf61*/
    v16 = MessageBox; /*0x5baf66*/
    if ( MessageBox ) /*0x5baf6a*/
      Dialog::Show(MessageBox); /*0x5baf6e*/
    v17 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5baf78*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5baf81*/
      v17 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5baf93*/
    while ( 1 ) /*0x5baf9a*/
    {
      if ( !Count::GetCountQueue((Count *)&unk_A8EA70) ) /*0x5baf9a*/
        goto LABEL_38; /*0x5baf9a*/
      v18 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5bafa8*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bafb1*/
        v18 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5bafc3*/
      if ( (unsigned int)(v18 - v17) >= 0x708 ) /*0x5bafcd*/
      {
  LABEL_38:
        v19 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5bafd4*/
        if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bafdd*/
          v19 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5bafef*/
        if ( (unsigned int)(v19 - v17) >= 0x3C ) /*0x5baff6*/
          break; /*0x5baff6*/
      }
      Event::Dispatch(); /*0x5baff8*/
      MessageLoop(); /*0x5baffd*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5bb007*/
    }
    if ( v16 ) /*0x5bb010*/
    {
      v20 = GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[612], 0, &stru_82BA00.__pad_F70[52], 2557); /*0x5bb023*/
      Network_Start((HWND)v16, (LPARAM)v20); /*0x5bb02c*/
    }
    Debug::Log(); /*0x5bb036*/
    v21 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5bb040*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb04c*/
      v21 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5bb05e*/
    while ( 1 ) /*0x5bb060*/
    {
      Event::Dispatch(); /*0x5bb060*/
      MessageLoop(); /*0x5bb065*/
      Stream::ReadPacket((int)&unk_A8EA70); /*0x5bb06f*/
      if ( ObjectTypeClass::CreateInstance(&unk_A8EA70, (int)v34, (int)v31) <= 0 ) /*0x5bb08d*/
        goto LABEL_48; /*0x5bb08d*/
      Debug::Log(); /*0x5bb094*/
      if ( v34[0] == 114 ) /*0x5bb0a6*/
      {
        Debug::Log(); /*0x5bb0f0*/
  LABEL_57:
        if ( v16 ) /*0x5bb1aa*/
          Dialog::Destroy(v16); /*0x5bb1ae*/
        EventClass::CheckFlag((EventClass *)&unk_A8EA70); /*0x5bb1b8*/
        IDA_BYTE2(stru_A8D600.Network_field_0xC) = 0; /*0x5bb1c9*/
        dword_A8B230[130].vtable3 = *(void **)&stru_A8B250.__pad_0[4]; /*0x5bb1d0*/
        dword_A8B54C = dword_A8DA84; /*0x5bb1f0*/
        v25 = dword_A8E960[0]; /*0x5bb1f5*/
        IDA_BYTE1(v25) = IDA_BYTE1(dword_A8E960[0]) & 0x77; /*0x5bb1fc*/
        v26 = v25 | ((byte_A8B31D & 1 | (16 * (stru_A8B250.__pad_0[16] & 1))) << 11); /*0x5bb202*/
        IDA_LOBYTE(v26) = IDA_LOBYTE(dword_A8E960[0]) | 0xC0; /*0x5bb209*/
        *(unsigned int *)&stru_A8EB00.?[416] = 0; /*0x5bb20c*/
        dword_A8B24C = 2; /*0x5bb212*/
        dword_A8E960[0] = v26; /*0x5bb21c*/
        vtable0 = dword_A8B230->vtable0; /*0x5bb222*/
        IDA_BYTE1(vtable0) = ((uint16_t)dword_A8B230->vtable0 >> 8) & 0xFB; /*0x5bb229*/
        dword_A8B230->vtable0 = vtable0; /*0x5bb22c*/
        byte_A8B31C = 1; /*0x5bb22e*/
        nullsub_37(v29); /*0x5bb235*/
        Debug::Log(); /*0x5bb23f*/
        return 1; /*0x5bb247*/
      }
      if ( v34[0] == 115 ) /*0x5bb0ab*/
        break; /*0x5bb0ab*/
      if ( v34[0] == 110 ) /*0x5bb0b0*/
      {
        Debug::Log(); /*0x5bb189*/
        SendNetworkFile((char *)&dword_A8B230[130].abstractFlags, 1, 0, 0); /*0x5bb1a3*/
        goto LABEL_57; /*0x5bb1a3*/
      }
  LABEL_48:
      v22 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5bb0b6*/
      if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb0c4*/
        v22 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5bb0d6*/
      if ( (unsigned int)(v22 - v21) >= 0x4B0 ) /*0x5bb0e0*/
        goto LABEL_57; /*0x5bb0e0*/
    }
    v28 = GetStringCSF(g_Str_TXT_CANCEL, 0, &stru_82BA00.__pad_F70[52], 2582); /*0x5bb11e*/
    v23 = (int *)GetStringCSF((wchar_t *)&stru_82BA00.__pad_F70[512], 0, &stru_82BA00.__pad_F70[52], 2582); /*0x5bb130*/
    Dialog::ShowMessageBox(v23, v28, 0, 0, 0, (int)v29); /*0x5bb13a*/
    v24 = *(unsigned int *)&stru_88732C.__pad_6[14]; /*0x5bb144*/
    if ( *(unsigned int *)&stru_88732C.__pad_6[6] != -1 ) /*0x5bb14d*/
      v24 += TimerGetTicks() - *(unsigned int *)&stru_88732C.__pad_6[6]; /*0x5bb15f*/
    *(unsigned int *)(this + 20) = v24; /*0x5bb16a*/
    Debug::Log(); /*0x5bb16d*/
    return 0; /*0x5baca4*/
}
} // namespace gamemd

// 0x5C1090
namespace gamemd {
bool MultiplayerBattleTeam::AddRef() {
    return PlayerClass::IsValidIndex((int)this); /*0x5c109f*/
}
} // namespace gamemd

// 0x5C10B0
namespace gamemd {
bool MultiplayerBattleTeam::Release(int a2) {
    return PlayerClass::SetHouse((MultiplayerTeam *)this, a2) != 0; /*0x5c10bf*/
}
} // namespace gamemd

// 0x5C10D0
namespace gamemd {
void ** MultiplayerBattleTeam::QueryInterface(char a2) {
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5c10d3*/
    if ( (a2 & 1) != 0 ) /*0x5c10dd*/
      RA2_OPDEL(this); /*0x5c10e0*/
    return (void **)this; /*0x5c10ea*/
}
} // namespace gamemd

// 0x5C94C0
namespace gamemd {
bool MultiplayerObserverTeam::AddRef() {
    return PlayerClass::IsValidIndex((int)this); /*0x5c94ca*/
}
} // namespace gamemd

// 0x5C94D0
namespace gamemd {
void ** MultiplayerObserverTeam::QueryInterface(char a2) {
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5c94d3*/
    if ( (a2 & 1) != 0 ) /*0x5c94dd*/
      RA2_OPDEL(this); /*0x5c94e0*/
    return (void **)this; /*0x5c94ea*/
}
} // namespace gamemd

// 0x5CAE70
namespace gamemd {
char MultiplayerSiegeDefenderTeam::AddRef() {
    MultiplayerSiegeDefenderTeam *v1; // ecx
    char result; // al
    unsigned int *i; // esi

    v1 = 0; /*0x5cae77*/
    result = 1; /*0x5cae7d*/
    if ( dword_A8DA84 > 0 ) /*0x5cae82*/
    {
      for ( i = dword_A8DA78; this == v1 || *(unsigned int *)(*i + 107) != 1; ++i ) /*0x5cae84*/
      {
        v1 = (MultiplayerSiegeDefenderTeam *)((char *)v1 + 1); /*0x5cae99*/
        if ( (int)v1 >= dword_A8DA84 ) /*0x5cae9f*/
          return result; /*0x5cae9f*/
      }
      return 0; /*0x5caea7*/
    }
    return result; /*0x5caea1*/
}
} // namespace gamemd

// 0x5CAF10
namespace gamemd {
void ** MultiplayerSiegeDefenderTeam::QueryInterface(char a2) {
    *(unsigned int *)this->__pad_0 = 0; /*0x5caf13*/
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5caf19*/
    if ( (a2 & 1) != 0 ) /*0x5caf23*/
      RA2_OPDEL(this); /*0x5caf26*/
    return (void **)this; /*0x5caf30*/
}
} // namespace gamemd

// 0x5CAF40
namespace gamemd {
void ** MultiplayerSiegeAttackerTeam::QueryInterface(char a2) {
    *this = (MultiplayerSiegeAttackerTeam)0; /*0x5caf43*/
    MultiplayerTeam::Destructor((MultiplayerTeam *)this); /*0x5caf49*/
    if ( (a2 & 1) != 0 ) /*0x5caf53*/
      RA2_OPDEL(this); /*0x5caf56*/
    return (void **)this; /*0x5caf60*/
}
} // namespace gamemd

// 0x5D8860
namespace gamemd {
unsigned int * MultiplayerTeamVector::Destruct(char a2) {
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x5d8863*/
    *(unsigned int *)this->__pad_0 = 0; /*0x5d8866*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x5d8870*/
    {
      RA2_OPDEL(v3); /*0x5d8878*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x5d8880*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x5d888b*/
    *(unsigned int *)&this->__pad_5[3] = 0; /*0x5d8891*/
    if ( (a2 & 1) != 0 ) /*0x5d8898*/
      RA2_OPDEL(this); /*0x5d889b*/
    return this->__pad_0; /*0x5d88a5*/
}
} // namespace gamemd

// 0x5D88B0
namespace gamemd {
unsigned int * MultiplayerModeVector::Destruct(char a2) {
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x5d88b3*/
    *(unsigned int *)this->__pad_0 = 0; /*0x5d88b6*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x5d88c0*/
    {
      RA2_OPDEL(v3); /*0x5d88c8*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x5d88d0*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x5d88db*/
    *(unsigned int *)&this->__pad_5[3] = 0; /*0x5d88e1*/
    if ( (a2 & 1) != 0 ) /*0x5d88e8*/
      RA2_OPDEL(this); /*0x5d88eb*/
    return this->__pad_0; /*0x5d88f5*/
}
} // namespace gamemd

// 0x5D8900
namespace gamemd {
unsigned int * MultiplayerModeVector2::Destruct(char a2) {
    void *v3; // eax

    v3 = *(void **)&this->m_1[3]; /*0x5d8903*/
    *(unsigned int *)this->__pad_0 = 0; /*0x5d8906*/
    if ( v3 && IDA_BYTE1(this->m_C) ) /*0x5d8910*/
    {
      RA2_OPDEL(v3); /*0x5d8918*/
      *(unsigned int *)&this->m_1[3] = 0; /*0x5d8920*/
    }
    IDA_BYTE1(this->m_C) = 0; /*0x5d892b*/
    *(unsigned int *)&this->__pad_5[3] = 0; /*0x5d8931*/
    if ( (a2 & 1) != 0 ) /*0x5d8938*/
      RA2_OPDEL(this); /*0x5d893b*/
    return this->__pad_0; /*0x5d8945*/
}
} // namespace gamemd

// 0x5D8C50
namespace gamemd {
wchar_t ** MultiplayerTeam::Constructor(const wchar_t **a2, wchar_t *a3) {
    WideString::AssignFromPtr((wchar_t **)&this->MultiplayerTeam_field_0x04, a2); /*0x5d8c5b*/
    *(unsigned int *)this->__pad_0 = 0; /*0x5d8c64*/
    *((unsigned int *)this + 2) = a3; /*0x5d8c6a*/
    return (wchar_t **)this; /*0x5d8c6f*/
}
} // namespace gamemd

// 0x5D8C80
namespace gamemd {
void MultiplayerTeam::Destructor() {
    *(unsigned int *)this->__pad_0 = 0; /*0x5d8c80*/
    DeleteAndZero::Alt((DeleteAndZero *)&this->MultiplayerTeam_field_0x04); /*0x5d8c89*/
}
} // namespace gamemd

// 0x5D8D50
namespace gamemd {
void ** MultiplayerTeam_Destru::QueryInterface(char a2) {
    *(unsigned int *)this->__pad_0 = 0; /*0x5d8d56*/
    DeleteAndZero::Alt((DeleteAndZero *)&this->MultiplayerTeam_field_0x04); /*0x5d8d5c*/
    if ( (a2 & 1) != 0 ) /*0x5d8d66*/
      RA2_OPDEL(this); /*0x5d8d69*/
    return (void **)this; /*0x5d8d73*/
}
} // namespace gamemd

// 0x5DDBD0
namespace gamemd {
int NetworkSettings::DlgProc(HWND hWnd, UINT, DeleteAndZero) {
    int result; // eax
    unsigned int v4; // ebx
    int v5; // esi
    WPARAM v6; // edi
    LRESULT v7; // eax
    HWND v8; // eax
    HWND v9; // eax
    char *v10; // eax
    int16_t v11; // cx
    HWND v12; // eax
    HWND v13; // eax
    int v14; // esi
    HWND v15; // eax
    unsigned int DeleteAndZero_field_0x04_high; // edi
    int DeleteAndZero_field_0x04_low; // esi
    wchar_t *StringCSF; // ebx
    HWND v20; // eax
    char *v21; // eax
    char *v22; // edi
    HWND DlgItem; // eax
    int v24; // eax
    int v25; // edi
    char *v26; // eax
    int v27; // eax
    int v28; // eax
    int v29; // edi
    int v30; // eax
    HWND v31; // eax
    POINT v32; // [esp-Ch] [ebp-54h]
    GameSetup *v33; // [esp+0h] [ebp-48h]
    struct tagRECT Rect; // [esp+10h] [ebp-38h] BYREF
    char lParam[40]; // [esp+20h] [ebp-28h] BYREF
    HWND hWnda; // [esp+4Ch] [ebp+4h]

    if ( a2 > 0x200 ) /*0x5ddbe0*/
    {
      switch ( a2 ) /*0x5de05c*/
      {
        case 0x497u: /*0x5de05c*/
          g_NetworkSetupConfig = 0; /*0x5de0a7*/
          byte_831274 = 1; /*0x5de0ad*/
          Dialog::RefreshDialogsGame((Dialog *)hWnd); /*0x5de0b4*/
          SendDlgItemMessageA(hWnd, 1345, 0xC5u, 0x10u, 0); /*0x5de0cd*/
          SendDlgItemMessageA(hWnd, 1345, 0x4EBu, 0, (LPARAM)asc_8304FC); /*0x5de0e0*/
          SendDlgItemMessageA(hWnd, 1345, 0x4D1u, 1u, 0); /*0x5de0f0*/
          v22 = CharToWideString(unk_A8B380); /*0x5de108*/
          DlgItem = GetDlgItem(hWnd, 1345); /*0x5de10a*/
          SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)v22); /*0x5de114*/
          MEMORY[0xA8B322][0] = 0; /*0x5de12a*/
          dword_A8B394 = dword_A8B3B4; /*0x5de131*/
          dword_A8B398 = dword_A8B3B8; /*0x5de137*/
          PtrVector::Destroy(&stru_A8DA5C); /*0x5de13c*/
          PtrVector::Destroy(&stru_A8DA74); /*0x5de146*/
          PtrVector::Destroy((PtrVector *)&dword_A8DA44); /*0x5de150*/
          v24 = RA2_OPNEW(0x85u); /*0x5de15a*/
          v25 = v24; /*0x5de15f*/
          if ( v24 ) /*0x5de166*/
            Waypoint::InitInvalid((Waypoint *)(v24 + 40)); /*0x5de16b*/
          else
            v25 = 0; /*0x5de172*/
          v26 = CharToWideString(unk_A8B380); /*0x5de179*/
          wcscpy((wchar_t *)v25, (const wchar_t *)v26); /*0x5de180*/
          *(unsigned int *)(v25 + 52) = 0; /*0x5de185*/
          *(unsigned char *)(v25 + 56) = 0; /*0x5de188*/
          *(unsigned int *)(v25 + 57) = *(unsigned int *)&stru_A8D600.__pad_64[7]; /*0x5de195*/
          if ( dword_A8DA54 < dword_A8DA4C /*0x5de1cc*/
            || (byte_A8DA51 || !dword_A8DA4C)
            && dword_A8DA58 > 0
            && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8DA44 + 8))(
                 &dword_A8DA44,
                 dword_A8DA4C + dword_A8DA58,
                 0) )
          {
            v27 = dword_A8DA54++; /*0x5de1d9*/
            *(unsigned int *)(dword_A8DA48 + 4 * v27) = v25; /*0x5de1e8*/
          }
          v28 = RA2_OPNEW(0x85u); /*0x5de1f0*/
          v29 = v28; /*0x5de1f5*/
          if ( v28 ) /*0x5de1fc*/
            Waypoint::InitInvalid((Waypoint *)(v28 + 40)); /*0x5de201*/
          else
            v29 = 0; /*0x5de208*/
          wcscpy((wchar_t *)v29, &g_TypeClass_DefaultString); /*0x5de210*/
          *(unsigned char *)(v29 + 52) = 0; /*0x5de215*/
          *(unsigned int *)(v29 + 53) = 0; /*0x5de219*/
          if ( dword_A8DA6C < dword_A8DA64 /*0x5de255*/
            || (byte_A8DA69 || !dword_A8DA64)
            && dword_A8DA70 > 0
            && (*(uint8_t (__thiscall **)(PtrVector *, int, unsigned int))(*(unsigned int *)&stru_A8DA5C + 8))(
                 &stru_A8DA5C,
                 dword_A8DA64 + dword_A8DA70,
                 0) )
          {
            v30 = dword_A8DA6C++; /*0x5de262*/
            *(unsigned int *)(dword_A8DA60 + 4 * v30) = v29; /*0x5de271*/
          }
          SendNetworkHeartbeat(1, 0, 1, 1); /*0x5de27f*/
          NetworkLobby::UpdatePlayerList(); /*0x5de284*/
          GameSetup::DisplayPlayers(v33); /*0x5de28b*/
          Dialog::DrawBackground((Dialog *)hWnd); /*0x5de292*/
          v31 = GetDlgItem(hWnd, 1344); /*0x5de29d*/
          SetFocus(v31); /*0x5de2a0*/
          break;
        case 0x4DBu: /*0x5de05c*/
          NavigateDialogTab((HWND)a3.DeleteAndZero_field_0x04, *(unsigned int *)a3.__pad_0 != 0); /*0x5de08e*/
          return 0; /*0x5de09c*/
        case 0x4ECu: /*0x5de05c*/
          Dialog::EnumAndCleanup((Dialog *)hWnd); /*0x5de070*/
          return 0; /*0x5de07e*/
      }
      return 0; /*0x5de066*/
    }
    if ( a2 == 512 ) /*0x5ddbe6*/
    {
      hWnda = GetDlgItem(hWnd, 1685); /*0x5ddfcf*/
      if ( !hWnda ) /*0x5ddfd3*/
        return 0; /*0x5ddfd3*/
      DeleteAndZero_field_0x04_high = IDA_HIWORD(a3.DeleteAndZero_field_0x04); /*0x5ddfe2*/
      DeleteAndZero_field_0x04_low = IDA_LOWORD(a3.DeleteAndZero_field_0x04); /*0x5ddfea*/
      GetWindowRect(hWnd, &Rect); /*0x5ddff0*/
      StringCSF = &g_TypeClass_DefaultString; /*0x5de004*/
      v32.y = DeleteAndZero_field_0x04_high - Rect.top; /*0x5de009*/
      v32.x = DeleteAndZero_field_0x04_low - Rect.left; /*0x5de00a*/
      v20 = ChildWindowFromPointEx(hWnd, v32, 1u); /*0x5de00c*/
      if ( v20 ) /*0x5de014*/
      {
        v21 = DlgSkirmishMenuProc(hWnd, v20); /*0x5de01a*/
        if ( v21 ) /*0x5de021*/
          StringCSF = GetStringCSF((wchar_t *)v21, 0, g_Str_File_netdlg2_cpp, 2439); /*0x5de036*/
      }
      SendMessageA(hWnda, 0x4B2u, 0, (LPARAM)StringCSF); /*0x5de045*/
      return 0; /*0x5de04e*/
    }
    else
    {
      if ( a2 <= 0x2B ) /*0x5ddbef*/
      {
        switch ( a2 ) /*0x5ddbf1*/
        {
          case 0x2Bu: /*0x5ddbf1*/
            Dialog::Resize((char *)a3.DeleteAndZero_field_0x04); /*0x5ddc3b*/
            return 1; /*0x5ddc4c*/
          case 0xFu: /*0x5ddbf1*/
            Dialog::DrawBackground((Dialog *)hWnd); /*0x5ddc16*/
            Dialog::StopBink((Dialog *)hWnd); /*0x5ddc1d*/
            ValidateRect(hWnd, 0); /*0x5ddc25*/
            return 0; /*0x5ddc34*/
          case 0x14u: /*0x5ddbf1*/
            return 1; /*0x5ddc0d*/
        }
        return 0; /*0x5ddbfb*/
      }
      if ( a2 != 273 ) /*0x5ddc54*/
        return 0; /*0x5ddc54*/
      v4 = *(unsigned int *)a3.__pad_0; /*0x5ddc5a*/
      v5 = *(uint16_t *)a3.__pad_0; /*0x5ddc60*/
      if ( *(uint16_t *)a3.__pad_0 <= 0x5C0u ) /*0x5ddc6c*/
      {
        switch ( *(uint16_t *)a3.__pad_0 ) /*0x5ddc72*/
        {
          case 0x5C0u: /*0x5ddc72*/
            g_NetworkOptionsState = 1472; /*0x5ddedb*/
            Config::SaveObserverMode(); /*0x5ddee5*/
            return 0; /*0x5ddef3*/
          case 0x540u: /*0x5ddc72*/
            ReadChatMessage((wchar_t **)&a3, (HWND)a3.DeleteAndZero_field_0x04); /*0x5dde9c*/
            DeleteAndZero::Alt(&a3); /*0x5ddea5*/
            if ( IDA_HIWORD(v4) == 1281 ) /*0x5ddeb3*/
            {
              SendNetworkLobbyChatMessage(hWnd, (int)Math::InitDegToRad, 61680); /*0x5ddeca*/
              return 0; /*0x5dded8*/
            }
            return 0; /*0x5ddeb3*/
          case 0x541u: /*0x5ddc72*/
            if ( IsWindowEnabled(hWnd) && !g_NetworkOptionsState ) /*0x5ddd90*/
            {
              *(unsigned short *)lParam = 0; /*0x5ddda2*/
              v9 = GetDlgItem(hWnd, 1345); /*0x5ddda7*/
              SendMessageA(v9, 0x4B3u, 0x14u, (LPARAM)lParam); /*0x5dddbc*/
              v10 = lParam; /*0x5dddbe*/
              if ( *(unsigned short *)lParam ) /*0x5dddca*/
              {
                v11 = *(unsigned short *)lParam; /*0x5dddcc*/
                do /*0x5ddde0*/
                {
                  if ( v11 != 32 ) /*0x5dddd4*/
                    break; /*0x5dddd4*/
                  v11 = *((unsigned short *)v10 + 1); /*0x5dddd6*/
                  v10 += 2; /*0x5dddda*/
                }
                while ( v11 ); /*0x5ddde0*/
              }
              if ( !*(unsigned short *)v10 && *(unsigned short *)lParam ) /*0x5dddea*/
              {
                *(unsigned short *)lParam = 0; /*0x5dddf2*/
                v12 = GetDlgItem(hWnd, 1345); /*0x5dddf7*/
                SendMessageA(v12, 0x4B2u, 0, (LPARAM)lParam); /*0x5dde05*/
              }
              if ( strcmp(ToWideStringChar(lParam), unk_A8B380) ) /*0x5dde1d*/
              {
                strcpy(unk_A8B380, ToWideStringChar(lParam)); /*0x5dde71*/
                SendNetworkHeartbeat(0, 0, 1, 0); /*0x5dde7c*/
                GameSetup::DisplayPlayers(v33); /*0x5dde83*/
                return 0; /*0x5dde91*/
              }
            }
            return 0; /*0x5dde44*/
        }
        if ( *(uint16_t *)a3.__pad_0 == 1353 && g_NetworkSettingsState <= 0 ) /*0x5ddc9b*/
        {
          v6 = g_NetworkSetupConfig; /*0x5ddca5*/
          v7 = SendDlgItemMessageA(hWnd, 1353, 0x188u, 0, 0); /*0x5ddcba*/
          if ( v7 >= 0 && byte_831274 ) /*0x5ddccc*/
          {
            g_NetworkSetupConfig = v7; /*0x5ddcd4*/
            wcscpy((wchar_t *)&stru_A8D600.Network_field_0x10, *(const wchar_t **)(dword_A8DA60 + 4 * v7)); /*0x5ddce2*/
          }
          if ( IDA_HIWORD(v4) == 1 ) /*0x5ddcf3*/
          {
            PtrVector::Destroy(&stru_A8DA74); /*0x5ddcfa*/
            if ( v6 != g_NetworkSetupConfig ) /*0x5ddd05*/
              SendNetworkHeartbeat(1, 1, 1, 0); /*0x5ddd12*/
            GameSetup::DisplayPlayers(v33); /*0x5ddd19*/
            return 0; /*0x5ddd27*/
          }
          if ( IDA_HIWORD(v4) == 2 ) /*0x5ddd2e*/
          {
            EnableWindow(hWnd, 0); /*0x5ddd3d*/
            v8 = GetDlgItem(hWnd, 1345); /*0x5ddd45*/
            if ( v8 ) /*0x5ddd4d*/
              EnableWindow(v8, 0); /*0x5ddd52*/
            g_NetworkOptionsState = 1742 - (g_MenuStateFlags != 1); /*0x5ddd67*/
            return 0; /*0x5ddd71*/
          }
        }
        return 0; /*0x5de2a9*/
      }
      switch ( *(unsigned short *)a3.__pad_0 ) /*0x5ddf0f*/
      {
        case 0x6CC: /*0x5ddf0f*/
          g_NetworkOptionsState = *(uint16_t *)a3.__pad_0; /*0x5ddf1b*/
          byte_AC0269 = g_MenuStateFlags == 1; /*0x5ddf29*/
          result = 0; /*0x5ddf2f*/
          break; /*0x5ddf35*/
        case 0x6CD: /*0x5ddf0f*/
        case 0x6CE: /*0x5ddf0f*/
          EnableWindow(hWnd, 0); /*0x5ddf45*/
          v13 = GetDlgItem(hWnd, 1345); /*0x5ddf4d*/
          if ( v13 ) /*0x5ddf55*/
            EnableWindow(v13, 0); /*0x5ddf5a*/
          g_NetworkOptionsState = v5; /*0x5ddf5c*/
          result = 0; /*0x5ddf65*/
          break; /*0x5ddf6b*/
        case 0x75F: /*0x5ddf0f*/
        case 0x760: /*0x5ddf0f*/
          v14 = 0; /*0x5ddf78*/
          v15 = GetDlgItem(hWnd, 1888); /*0x5ddf7a*/
          if ( v15 ) /*0x5ddf82*/
            v14 = SendMessageA(v15, 0xF0u, 0, 0); /*0x5ddf92*/
          if ( (unsigned short)v4 == 1887 ) /*0x5ddf99*/
            v14 = v14 == 0; /*0x5ddfa2*/
          g_MenuStateFlags = v14; /*0x5ddfa6*/
          Dialog::RefreshDialogsGame(0); /*0x5ddfac*/
          result = 0; /*0x5ddfb4*/
          break; /*0x5ddfba*/
        default:
          return 0;
      }
    }
    return result; /*0x5ddc01*/
}
} // namespace gamemd

// 0x5E8D00
namespace gamemd {
int WOLobby::FindPlayerIndex() {
    int v2; // edi
    const wchar_t **v3; // esi

    v2 = 0; /*0x5e8d05*/
    v3 = (const wchar_t **)dword_A8DA90; /*0x5e8d07*/
    while ( !*v3 || _wcsicmp((const wchar_t *)this, *v3) ) /*0x5e8d1e*/
    {
      ++v3; /*0x5e8d20*/
      ++v2; /*0x5e8d23*/
      if ( (int)v3 >= (int)&dword_A8DAB0 ) /*0x5e8d2a*/
        return -1; /*0x5e8d32*/
    }
    return v2; /*0x5e8d2c*/
}
} // namespace gamemd

// 0x5E8DA0
namespace gamemd {
int NetworkShare::GetField(int a1) {
    int result; // eax

    result = dword_A8DA78; /*0x5e8da0*/
    dword_A8DA8C = a1; /*0x5e8da5*/
    *(&dword_A8DA90 + a1) = *(unsigned int *)dword_A8DA78; /*0x5e8dad*/
    return result; /*0x5e8db4*/
}
} // namespace gamemd

// 0x5EC030
namespace gamemd {
char MultiplayerLobby::FillSlots() {
    ObjectClass *v1; // eax
    char v2; // bl
    int v4; // edi
    int v5; // esi
    int v6; // edx
    LPARAM v7; // eax
    LPARAM v8; // edi
    int PlayerCountMap; // esi
    int v10; // eax
    int v11; // eax
    CountryCombo *ResourceID2CSF; // eax

    v1 = g_MPCooperativeState; /*0x5ec030*/
    v2 = 0; /*0x5ec037*/
    if ( (int)g_MPCooperativeState < 1 )
    {
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ec04d*/
      {
        if ( !Network::IsMultiplayerActive() || Network::IsLobbyFeature() ) /*0x5ec058*/
          v4 = 6; /*0x5ec068*/
        else
          v4 = 2; /*0x5ec061*/
      }
      else
      {
        v4 = 8; /*0x5ec06f*/
      }
      v5 = 1; /*0x5ec074*/
      while ( 1 )
      {
        if ( v5 )
        {
          switch ( v5 )
          {
            case 1:
              v6 = 1042; /*0x5ec089*/
              break;
            case 2:
              v6 = 1043; /*0x5ec095*/
              break;
            case 3:
              v6 = 1044; /*0x5ec0a1*/
              break;
            case 4:
              v6 = 1045; /*0x5ec0ad*/
              break;
            case 5:
              v6 = 1046; /*0x5ec0b9*/
              break;
            case 6:
              v6 = 1047; /*0x5ec0c5*/
              break;
            default:
              v6 = v5 != 7 ? -1 : 1048;
              break;
          }
        }
        else
        {
          v6 = 1041; /*0x5ec07d*/
        }
        v7 = dword_A8DA90[v5]; /*0x5ec0e1*/
        if ( v5 >= v4 ) /*0x5ec0f0*/
        {
          if ( v7 != g_Lobby_MaxPlayers && *(unsigned int *)(v7 + 107) != -1 ) /*0x5ec10e*/
            goto LABEL_32; /*0x5ec10e*/
          PlayerSkirmishSlotHandler((HWND)this, v6, g_Lobby_PlayerCount, 1); /*0x5ec11b*/
        }
        else
        {
          if ( v7 != g_Lobby_MaxPlayers && *(unsigned int *)(v7 + 107) != -1 ) /*0x5ec0fa*/
            goto LABEL_32; /*0x5ec0fa*/
          PlayerSkirmishSlotHandler((HWND)this, v6, g_HouseClass_ObserverFlags, 1); /*0x5ec104*/
        }
        v2 = 1; /*0x5ec120*/
  LABEL_32:
        if ( ++v5 >= 8 ) /*0x5ec126*/
          goto LABEL_74; /*0x5ec126*/
      }
    }
    v8 = dword_A8DA90[(unsigned int)g_MPCooperativeState]; /*0x5ec137*/
    if ( *(unsigned int *)&stru_A8B250.__pad_0[4] == -1 ) /*0x5ec141*/
    {
      PlayerCountMap = 8; /*0x5ec143*/
    }
    else
    {
      PlayerCountMap = ReadPlayerCountMap(*(int *)&stru_A8B250.__pad_0[4]); /*0x5ec155*/
      if ( dword_A8B23C ) /*0x5ec159*/
      {
        v10 = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->vtable1 + 38))(dword_A8B23C); /*0x5ec15d*/
        if ( v10 != -1 && v10 < PlayerCountMap ) /*0x5ec16a*/
          PlayerCountMap = v10; /*0x5ec16c*/
      }
      if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x5ec175*/
      {
        if ( Network::IsLobbyFeature() ) /*0x5ec177*/
        {
          PlayerCountMap &= ~1u; /*0x5ec180*/
        }
        else if ( Network::IsMultiplayerActive() ) /*0x5ec185*/
        {
          PlayerCountMap = 2; /*0x5ec18e*/
        }
      }
      v1 = g_MPCooperativeState; /*0x5ec193*/
    }
    if ( (int)v1 > PlayerCountMap /*0x5ec1e3*/
      && (v8
       && (v8 != g_HouseClass_ObserverFlags
        && v8 != g_Lobby_PlayerCount
        && v8 != g_Lobby_MaxPlayers
        && (wchar_t *)v8 != g_Lobby_PlayerReady
        && *(unsigned int *)(v8 + 107) != -1
        || v8 == g_Lobby_PlayerTeam
        || v8 == g_Lobby_PlayerSide
        || v8 == g_Lobby_PlayerColor)
       || v8 == g_HouseClass_ObserverFlags) )
    {
      v8 = g_Lobby_PlayerCount; /*0x5ec1e5*/
      v2 = 1; /*0x5ec1e7*/
    }
    Lobby::SetupPlayerWidgets((Lobby *)this); /*0x5ec1eb*/
    if ( g_MPCooperativeState )
    {
      if ( g_MPCooperativeState == (ObjectClass *)1 )
      {
        v11 = 1042; /*0x5ec205*/
      }
      else if ( g_MPCooperativeState == (ObjectClass *)2 )
      {
        v11 = 1043; /*0x5ec211*/
      }
      else if ( g_MPCooperativeState == (ObjectClass *)3 )
      {
        v11 = 1044; /*0x5ec21d*/
      }
      else if ( g_MPCooperativeState == (ObjectClass *)4 )
      {
        v11 = 1045; /*0x5ec229*/
      }
      else if ( g_MPCooperativeState == (ObjectClass *)5 )
      {
        v11 = 1046; /*0x5ec235*/
      }
      else if ( g_MPCooperativeState == (ObjectClass *)6 )
      {
        v11 = 1047; /*0x5ec241*/
      }
      else
      {
        v11 = g_MPCooperativeState != (ObjectClass *)7 ? -1 : 1048;
      }
    }
    else
    {
      v11 = 1041; /*0x5ec1f9*/
    }
    PlayerSkirmishSlotHandler((HWND)this, v11, v8, 1); /*0x5ec260*/
  LABEL_74:
    if ( v2 ) /*0x5ec267*/
    {
      ResourceID2CSF = (CountryCombo *)GetResourceID2CSF(g_MPCooperativeState); /*0x5ec26f*/
      SelectLobbyCountry((HWND)this, ResourceID2CSF); /*0x5ec278*/
    }
    RetVtableStubZero_eax_27(); /*0x5ec27d*/
    return CheckGameSettingsChanged(1, 0); /*0x5ec286*/
}
} // namespace gamemd

// 0x5EF100
namespace gamemd {
unsigned int * NullModemClass::initConnection(int a2, int a3, int a4, int16_t a5) {
    int v6; // ecx

    IPXConnClass::initConnection((ModemConnectionClass *)this, a2, a3, a4, a5, 60, -1, 1200, 0); /*0x5ef124*/
    v6 = *((unsigned int *)this + 7); /*0x5ef129*/
    *(unsigned int *)this->__pad_0 = 0; /*0x5ef12c*/
    *((unsigned int *)this + 19) = -1; /*0x5ef135*/
    *((unsigned int *)this + 20) = RA2_OPNEW(v6 + 11); /*0x5ef145*/
    return this->__pad_0; /*0x5ef14a*/
}
} // namespace gamemd

// 0x5EF170
namespace gamemd {
int NullModemClass::closeConnection(int a2) {
    Struct::ZeroInitAndSetup((ConnectionClass *)this); /*0x5ef173*/
    *((unsigned int *)this + 19) = a2; /*0x5ef17c*/
    return a2; /*0x5ef17f*/
}
} // namespace gamemd

// 0x5F0690
namespace gamemd {
char Modem::CheckStatus(int a2) {
    char v3; // bl
    int v4; // eax
    int v6; // eax
    int Modem_field_0x08; // eax
    int v8; // eax
    int v9; // esi
    int v10; // eax
    int *v11; // [esp-14h] [ebp-3Ch]
    int *v12; // [esp-14h] [ebp-3Ch]
    int *v13; // [esp-14h] [ebp-3Ch]
    int *v14; // [esp-14h] [ebp-3Ch]
    int *v15; // [esp-14h] [ebp-3Ch]
    int *v16; // [esp-14h] [ebp-3Ch]
    int *v17; // [esp-14h] [ebp-3Ch]
    int *v18; // [esp-14h] [ebp-3Ch]
    int *v19; // [esp-14h] [ebp-3Ch]
    wchar_t *v20; // [esp-10h] [ebp-38h]
    wchar_t *v21; // [esp-10h] [ebp-38h]
    wchar_t *StringCSF; // [esp-10h] [ebp-38h]
    wchar_t *v23; // [esp-10h] [ebp-38h]
    wchar_t *v24; // [esp-10h] [ebp-38h]
    wchar_t *v25; // [esp-10h] [ebp-38h]
    wchar_t *v26; // [esp-10h] [ebp-38h]
    wchar_t *v27; // [esp-10h] [ebp-38h]
    wchar_t *v28; // [esp-10h] [ebp-38h]
    Dialog *v29; // [esp+0h] [ebp-28h]
    ObjectClass *v30; // [esp+0h] [ebp-28h]
    int v31; // [esp+0h] [ebp-28h]
    int v32; // [esp+0h] [ebp-28h]
    char v33; // [esp+Fh] [ebp-19h]

    v33 = 0; /*0x5f06a1*/
    Debug::Log(); /*0x5f06a6*/
    dword_A8DAB8 &= ~1u; /*0x5f06bc*/
    dword_AC1234 = this; /*0x5f06c2*/
    v3 = Dialog::CheckButtonState(v29); /*0x5f06cd*/
    Debug::Log(); /*0x5f06d4*/
    Debug::Log(); /*0x5f06f1*/
    Debug::Log(); /*0x5f070e*/
    Debug::Log(); /*0x5f072b*/
    Debug::Log(); /*0x5f074d*/
    if ( (unsigned char)a2 ) /*0x5f075b*/
    {
      if ( v3 < 0 ) /*0x5f075f*/
      {
        v4 = dword_A8DAB8; /*0x5f0761*/
        IDA_LOBYTE(v4) = dword_A8DAB8 | 1; /*0x5f0767*/
        dword_A8DAB8 = v4; /*0x5f076a*/
        return 1; /*0x5f0775*/
      }
    }
    else if ( v3 < 0 ) /*0x5f0778*/
    {
      Debug::Log(); /*0x5f077f*/
      NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f078c*/
      v6 = dword_A8DAB8; /*0x5f0791*/
      IDA_LOBYTE(v6) = dword_A8DAB8 & 0xFE; /*0x5f0796*/
      dword_A8DAB8 = v6; /*0x5f0798*/
    }
    AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f07a7*/
    if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f07b3*/
    {
      Debug::Log(); /*0x5f07c8*/
      nullsub_28(v30); /*0x5f07d5*/
      String::NormalizeNewlines(); /*0x5f07df*/
      StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f07e9*/
      Modem_field_0x08 = this->Modem_field_0x08; /*0x5f07ee*/
      if ( Modem_field_0x08 == 14400 ) /*0x5f07f6*/
      {
        Debug::Log(); /*0x5f0939*/
        this->Modem_field_0x08 = 19200; /*0x5f093e*/
        if ( (dword_A8D5F8 & 2) == 0 && *(unsigned int *)&dword_A8B238 == 1 ) /*0x5f0958*/
          NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f095f*/
        ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f0969*/
        NullModemClass::Init( /*0x5f0988*/
          (int *)&unk_A8EA70,
          *(unsigned int *)this->__pad_0,
          this->Modem_field_0x04,
          (const char *)this + 48,
          this->Modem_field_0x08,
          0,
          8,
          1);
        AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0997*/
        if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f09a3*/
        {
          Debug::Log(); /*0x5f09b5*/
          nullsub_28(v30); /*0x5f09c2*/
          String::NormalizeNewlines(); /*0x5f09cc*/
          StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f09d6*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6664); /*0x5f0a06*/
          v13 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6664); /*0x5f0a1a*/
          Dialog::ShowMessageBox(v13, StringCSF, 0, 0, 0, v32); /*0x5f0a1b*/
          goto LABEL_21; /*0x5f0a1b*/
        }
      }
      else
      {
        if ( Modem_field_0x08 != 28800 ) /*0x5f0801*/
        {
          v20 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6692); /*0x5f082e*/
          v11 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6692); /*0x5f0842*/
          Dialog::ShowMessageBox(v11, v20, 0, 0, 0, (int)v30); /*0x5f0843*/
  LABEL_21:
          v8 = dword_A8DAB8; /*0x5f0a85*/
          IDA_LOBYTE(v8) = dword_A8DAB8 | 1; /*0x5f0a8a*/
          dword_A8DAB8 = v8; /*0x5f0a8d*/
          return 0; /*0x5f0a99*/
        }
        Debug::Log(); /*0x5f084d*/
        this->Modem_field_0x08 = 38400; /*0x5f0852*/
        if ( (dword_A8D5F8 & 2) == 0 && *(unsigned int *)&dword_A8B238 == 1 ) /*0x5f086c*/
          NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0873*/
        ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f087d*/
        NullModemClass::Init( /*0x5f089c*/
          (int *)&unk_A8EA70,
          *(unsigned int *)this->__pad_0,
          this->Modem_field_0x04,
          (const char *)this + 48,
          this->Modem_field_0x08,
          0,
          8,
          1);
        AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f08ab*/
        if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f08b7*/
        {
          Debug::Log(); /*0x5f08c9*/
          nullsub_28(v30); /*0x5f08d6*/
          String::NormalizeNewlines(); /*0x5f08e0*/
          StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f08ea*/
          v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6685); /*0x5f091a*/
          v12 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6685); /*0x5f092e*/
          Dialog::ShowMessageBox(v12, v21, 0, 0, 0, v31); /*0x5f092f*/
          goto LABEL_21; /*0x5f092f*/
        }
      }
    }
    Debug::Log(); /*0x5f0a9f*/
    v9 = Dialog::RunModemDialing((Dialog *)&unk_A8EA70, (int)byte_AC11E8, this->Modem_field_0x0C, a2); /*0x5f0abd*/
    if ( (unsigned char)a2 ) /*0x5f0abf*/
    {
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x5f0ac8*/
      TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x5f0ad2*/
    }
    switch ( v9 ) /*0x5f0ae0*/
    {
      case 0: /*0x5f0ae0*/
        Debug::Log(); /*0x5f0aec*/
        v33 = 1; /*0x5f0af4*/
        break; /*0x5f0af9*/
      case 1: /*0x5f0ae0*/
        Debug::Log(); /*0x5f0b03*/
        v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6758); /*0x5f0b36*/
        v14 = (int *)GetStringCSF(aTxtNoCarrier, 0, g_Str_File_NullDlg_CPP, 6758); /*0x5f0b4a*/
        Dialog::ShowMessageBox(v14, v23, 0, 0, 0, (int)v30); /*0x5f0b4b*/
        goto LABEL_32; /*0x5f0b4b*/
      case 2: /*0x5f0ae0*/
        Debug::Log(); /*0x5f0b55*/
        v24 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6764); /*0x5f0b88*/
        v15 = (int *)GetStringCSF(aTxtLineBusy, 0, g_Str_File_NullDlg_CPP, 6764); /*0x5f0b9c*/
        Dialog::ShowMessageBox(v15, v24, 0, 0, 0, (int)v30); /*0x5f0b9d*/
        goto LABEL_32; /*0x5f0b9d*/
      case 3: /*0x5f0ae0*/
        Debug::Log(); /*0x5f0ba7*/
        v25 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6770); /*0x5f0bda*/
        v16 = (int *)GetStringCSF(aTxtNumberInval, 0, g_Str_File_NullDlg_CPP, 6770); /*0x5f0bee*/
        Dialog::ShowMessageBox(v16, v25, 0, 0, 0, (int)v30); /*0x5f0bef*/
        goto LABEL_32; /*0x5f0bef*/
      case 4: /*0x5f0ae0*/
        Debug::Log(); /*0x5f0c4b*/
        v27 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6782); /*0x5f0c7e*/
        v18 = (int *)GetStringCSF(aTxtNoDialTone, 0, g_Str_File_NullDlg_CPP, 6782); /*0x5f0c92*/
        Dialog::ShowMessageBox(v18, v27, 0, 0, 0, (int)v30); /*0x5f0c93*/
        goto LABEL_32; /*0x5f0c93*/
      case 5: /*0x5f0ae0*/
        Debug::Log(); /*0x5f0bf9*/
        v26 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6776); /*0x5f0c2c*/
        v17 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullDlg_CPP, 6776); /*0x5f0c40*/
        Dialog::ShowMessageBox(v17, v26, 0, 0, 0, (int)v30); /*0x5f0c41*/
        goto LABEL_32; /*0x5f0c41*/
      case 6: /*0x5f0ae0*/
        Debug::Log(); /*0x5f0c9a*/
        NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0ca7*/
        dword_A8DAB8 &= ~1u; /*0x5f0ccc*/
        v28 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6790); /*0x5f0ce6*/
        v19 = (int *)GetStringCSF(aTxtDialingCanc, 0, g_Str_File_NullDlg_CPP, 6790); /*0x5f0cfa*/
        Dialog::ShowMessageBox(v19, v28, 0, 0, 0, (int)v30); /*0x5f0cfb*/
  LABEL_32:
        v33 = 0; /*0x5f0d00*/
        break; /*0x5f0d00*/
      default:
        break;
    }
    nullsub_28(v30); /*0x5f0d05*/
    String::NormalizeNewlines(); /*0x5f0d14*/
    StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0d1e*/
    v10 = dword_A8DAB8; /*0x5f0d23*/
    IDA_LOBYTE(v10) = dword_A8DAB8 | 1; /*0x5f0d28*/
    dword_A8DAB8 = v10; /*0x5f0d2b*/
    return v33; /*0x5f0766*/
}
} // namespace gamemd

// 0x5F0D60
namespace gamemd {
char Modem::DetectAndConnect(int a2) {
    char v3; // bl
    int v4; // eax
    int v6; // eax
    int Modem_field_0x08; // eax
    int v8; // eax
    int v9; // eax
    int *v10; // [esp-14h] [ebp-34h]
    int *v11; // [esp-14h] [ebp-34h]
    int *v12; // [esp-14h] [ebp-34h]
    int *v13; // [esp-14h] [ebp-34h]
    int *v14; // [esp-14h] [ebp-34h]
    int *v15; // [esp-14h] [ebp-34h]
    int *v16; // [esp-14h] [ebp-34h]
    wchar_t *v17; // [esp-10h] [ebp-30h]
    wchar_t *v18; // [esp-10h] [ebp-30h]
    wchar_t *StringCSF; // [esp-10h] [ebp-30h]
    wchar_t *v20; // [esp-10h] [ebp-30h]
    wchar_t *v21; // [esp-10h] [ebp-30h]
    wchar_t *v22; // [esp-10h] [ebp-30h]
    wchar_t *v23; // [esp-10h] [ebp-30h]
    Dialog *v24; // [esp+0h] [ebp-20h]
    ObjectClass *v25; // [esp+0h] [ebp-20h]
    int v26; // [esp+0h] [ebp-20h]
    int v27; // [esp+0h] [ebp-20h]
    char v28; // [esp+Fh] [ebp-11h]

    v28 = 0; /*0x5f0d71*/
    Debug::Log(); /*0x5f0d76*/
    dword_A8DAB8 &= ~1u; /*0x5f0d8c*/
    dword_AC1234 = this; /*0x5f0d92*/
    v3 = Dialog::CheckButtonState(v24); /*0x5f0d9d*/
    Debug::Log(); /*0x5f0da4*/
    Debug::Log(); /*0x5f0dc1*/
    Debug::Log(); /*0x5f0dde*/
    Debug::Log(); /*0x5f0dfb*/
    Debug::Log(); /*0x5f0e1d*/
    if ( (unsigned char)a2 ) /*0x5f0e2b*/
    {
      if ( v3 < 0 ) /*0x5f0e2f*/
      {
        v4 = dword_A8DAB8; /*0x5f0e31*/
        IDA_LOBYTE(v4) = dword_A8DAB8 | 1; /*0x5f0e37*/
        dword_A8DAB8 = v4; /*0x5f0e3a*/
        return 1; /*0x5f0e45*/
      }
    }
    else if ( v3 < 0 ) /*0x5f0e48*/
    {
      Debug::Log(); /*0x5f0e4f*/
      NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0e5c*/
      v6 = dword_A8DAB8; /*0x5f0e61*/
      IDA_LOBYTE(v6) = dword_A8DAB8 & 0xFE; /*0x5f0e66*/
      dword_A8DAB8 = v6; /*0x5f0e68*/
    }
    AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0e77*/
    if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f0e83*/
    {
      Debug::Log(); /*0x5f0e98*/
      nullsub_28(v25); /*0x5f0ea5*/
      String::NormalizeNewlines(); /*0x5f0eaf*/
      StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0eb9*/
      Modem_field_0x08 = this->Modem_field_0x08; /*0x5f0ebe*/
      if ( Modem_field_0x08 == 14400 ) /*0x5f0ec6*/
      {
        Debug::Log(); /*0x5f1009*/
        this->Modem_field_0x08 = 19200; /*0x5f100e*/
        if ( (dword_A8D5F8 & 2) == 0 && *(unsigned int *)&dword_A8B238 == 1 ) /*0x5f1028*/
          NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f102f*/
        ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f1039*/
        NullModemClass::Init( /*0x5f1058*/
          (int *)&unk_A8EA70,
          *(unsigned int *)this->__pad_0,
          this->Modem_field_0x04,
          (const char *)this + 48,
          this->Modem_field_0x08,
          0,
          8,
          1);
        AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f1067*/
        if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f1073*/
        {
          Debug::Log(); /*0x5f1085*/
          nullsub_28(v25); /*0x5f1092*/
          String::NormalizeNewlines(); /*0x5f109c*/
          StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f10a6*/
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6887); /*0x5f10d6*/
          v12 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6887); /*0x5f10ea*/
          Dialog::ShowMessageBox(v12, StringCSF, 0, 0, 0, v27); /*0x5f10eb*/
          goto LABEL_21; /*0x5f10eb*/
        }
      }
      else
      {
        if ( Modem_field_0x08 != 28800 ) /*0x5f0ed1*/
        {
          v17 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6915); /*0x5f0efe*/
          v10 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6915); /*0x5f0f12*/
          Dialog::ShowMessageBox(v10, v17, 0, 0, 0, (int)v25); /*0x5f0f13*/
  LABEL_21:
          v8 = dword_A8DAB8; /*0x5f1155*/
          IDA_LOBYTE(v8) = dword_A8DAB8 | 1; /*0x5f115a*/
          dword_A8DAB8 = v8; /*0x5f115d*/
          return 0; /*0x5f1169*/
        }
        Debug::Log(); /*0x5f0f1d*/
        this->Modem_field_0x08 = 38400; /*0x5f0f22*/
        if ( (dword_A8D5F8 & 2) == 0 && *(unsigned int *)&dword_A8B238 == 1 ) /*0x5f0f3c*/
          NullModemClass::Negotiate((NullModemClass *)&unk_A8EA70); /*0x5f0f43*/
        ObjectClass::DetachAndFree((ObjectClass *)&unk_A8EA70); /*0x5f0f4d*/
        NullModemClass::Init( /*0x5f0f6c*/
          (int *)&unk_A8EA70,
          *(unsigned int *)this->__pad_0,
          this->Modem_field_0x04,
          (const char *)this + 48,
          this->Modem_field_0x08,
          0,
          8,
          1);
        AppState::CallMethod((int)AppendStringBuilderChar); /*0x5f0f7b*/
        if ( !NullModemClass::DetectModem((NullModemClass *)&unk_A8EA70, this, a2) ) /*0x5f0f87*/
        {
          Debug::Log(); /*0x5f0f99*/
          nullsub_28(v25); /*0x5f0fa6*/
          String::NormalizeNewlines(); /*0x5f0fb0*/
          StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f0fba*/
          v18 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6908); /*0x5f0fea*/
          v11 = (int *)GetStringCSF(g_Str_TXT_UNABLE_FIND_MODEM, 0, g_Str_File_NullDlg_CPP, 6908); /*0x5f0ffe*/
          Dialog::ShowMessageBox(v11, v18, 0, 0, 0, v26); /*0x5f0fff*/
          goto LABEL_21; /*0x5f0fff*/
        }
      }
    }
    Debug::Log(); /*0x5f116f*/
    switch ( WaitModemConnection((int)&unk_A8EA70, v3 & 0x80, a2) ) /*0x5f118b*/
    {
      case 0: /*0x5f118b*/
        Debug::Log(); /*0x5f1197*/
        v28 = 1; /*0x5f119f*/
        break; /*0x5f11a4*/
      case 1: /*0x5f118b*/
        Debug::Log(); /*0x5f11ae*/
        v20 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6941); /*0x5f11e1*/
        v13 = (int *)GetStringCSF(aTxtNoCarrier, 0, g_Str_File_NullDlg_CPP, 6941); /*0x5f11f5*/
        Dialog::ShowMessageBox(v13, v20, 0, 0, 0, (int)v25); /*0x5f11f6*/
        goto LABEL_28; /*0x5f11f6*/
      case 3: /*0x5f118b*/
        Debug::Log(); /*0x5f1200*/
        v21 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6947); /*0x5f1233*/
        v14 = (int *)GetStringCSF(aTxtNumberInval, 0, g_Str_File_NullDlg_CPP, 6947); /*0x5f1247*/
        Dialog::ShowMessageBox(v14, v21, 0, 0, 0, (int)v25); /*0x5f1248*/
        goto LABEL_28; /*0x5f1248*/
      case 5: /*0x5f118b*/
        Debug::Log(); /*0x5f1252*/
        v22 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6953); /*0x5f1285*/
        v15 = (int *)GetStringCSF(g_Str_TXT_ERROR_TIMEOUT, 0, g_Str_File_NullDlg_CPP, 6953); /*0x5f1299*/
        Dialog::ShowMessageBox(v15, v22, 0, 0, 0, (int)v25); /*0x5f129a*/
        goto LABEL_28; /*0x5f129a*/
      case 6: /*0x5f118b*/
        Debug::Log(); /*0x5f12a1*/
        v23 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullDlg_CPP, 6959); /*0x5f12d4*/
        v16 = (int *)GetStringCSF(aTxtAnsweringCa, 0, g_Str_File_NullDlg_CPP, 6959); /*0x5f12e8*/
        Dialog::ShowMessageBox(v16, v23, 0, 0, 0, (int)v25); /*0x5f12e9*/
  LABEL_28:
        v28 = 0; /*0x5f12ee*/
        break; /*0x5f12ee*/
      default:
        break;
    }
    nullsub_28(v25); /*0x5f12f3*/
    String::NormalizeNewlines(); /*0x5f1302*/
    StringBuffer::Reset((StringBuffer *)&unk_A8EA70); /*0x5f130c*/
    v9 = dword_A8DAB8; /*0x5f1311*/
    IDA_LOBYTE(v9) = dword_A8DAB8 | 1; /*0x5f1316*/
    dword_A8DAB8 = v9; /*0x5f1319*/
    return v28; /*0x5f0e36*/
}
} // namespace gamemd

// 0x5F16E0
namespace gamemd {
int NullModemClass::Init(int a2, int a3, const char *a4, int a5, char a6, int a7, int a8) {
    int v9; // ebp
    unsigned int *v10; // eax
    unsigned int *inited; // eax
    int v12; // ecx
    int v13; // eax
    size_t v14; // ecx
    int v15; // eax
    size_t v16; // edx
    unsigned int *v17; // eax
    void **v18; // esi
    int v19; // ebx
    int v20; // eax
    int v21; // eax
    size_t v23; // [esp-4h] [ebp-14h]
    const char *v24; // [esp+14h] [ebp+4h]

    Debug::Log(); /*0x5f16eb*/
    v9 = 0; /*0x5f16f6*/
    if ( g_ClipboardBuffer ) /*0x5f16fd*/
      *(this + 16) = NullModemClass::GetMember23(g_ClipboardBuffer); /*0x5f1704*/
    else
      *(this + 16) = -1; /*0x5f1709*/
    if ( *(this + 14) ) /*0x5f1710*/
    {
      Debug::Log(); /*0x5f17a3*/
    }
    else
    {
      Debug::Log(); /*0x5f171e*/
      v10 = (unsigned int *)RA2_OPNEW(0x54u); /*0x5f1725*/
      if ( v10 ) /*0x5f172f*/
        inited = NullModemClass::initConnection(v10, *(this + 17), *(this + 18), *(this + 2), *((unsigned short *)this + 38)); /*0x5f1744*/
      else
        inited = 0; /*0x5f174b*/
      v12 = *(this + 23); /*0x5f174d*/
      *(this + 14) = (int)inited; /*0x5f1750*/
      inited[10] = v12; /*0x5f1753*/
      *(unsigned int *)(*(this + 14) + 44) = *(this + 24); /*0x5f175c*/
      *(unsigned int *)(*(this + 14) + 48) = *(this + 25); /*0x5f1765*/
      v23 = *(this + 18) * (*(unsigned int *)(*(this + 14) + 28) + 11); /*0x5f1775*/
      *(this + 21) = v23; /*0x5f1776*/
      v13 = RA2_OPNEW(v23); /*0x5f1779*/
      v14 = *(this + 2); /*0x5f177e*/
      *(this + 20) = v13; /*0x5f1781*/
      v15 = RA2_OPNEW(v14); /*0x5f1785*/
      v16 = *(this + 4); /*0x5f178a*/
      *(this + 1) = v15; /*0x5f178d*/
      *(this + 3) = RA2_OPNEW(v16); /*0x5f1799*/
    }
    *(this + 22) = 0; /*0x5f17ab*/
    *(this + 5) = 0; /*0x5f17ae*/
    if ( !g_ClipboardBuffer ) /*0x5f17b7*/
    {
      v17 = (unsigned int *)RA2_OPNEW(0x2088u); /*0x5f17be*/
      if ( v17 ) /*0x5f17c8*/
        g_ClipboardBuffer = (HWND)WinModemClass::Construct(v17); /*0x5f17d1*/
      else
        g_ClipboardBuffer = 0; /*0x5f17d8*/
    }
    if ( a2 > 760 ) /*0x5f17e7*/
    {
      if ( a2 == 1000 ) /*0x5f18c4*/
      {
        v24 = aCom3; /*0x5f18db*/
      }
      else
      {
        if ( a2 != 1016 ) /*0x5f18c9*/
        {
  LABEL_35:
          v24 = 0; /*0x5f18cb*/
          goto LABEL_38; /*0x5f18cf*/
        }
        v24 = aCom1; /*0x5f18d1*/
      }
    }
    else
    {
      if ( a2 == 760 ) /*0x5f17ed*/
      {
        v24 = aCom2; /*0x5f18b5*/
        goto LABEL_38; /*0x5f18bd*/
      }
      if ( a2 != 1 ) /*0x5f17f4*/
      {
        if ( a2 == 744 ) /*0x5f17fb*/
        {
          v24 = aCom4; /*0x5f1801*/
          goto LABEL_38; /*0x5f1809*/
        }
        goto LABEL_35; /*0x5f17fb*/
      }
      v18 = (void **)*(this + 13); /*0x5f180e*/
      v24 = a4; /*0x5f1817*/
      if ( v18 ) /*0x5f181b*/
      {
        FileFind::Close(v18); /*0x5f181f*/
        RA2_OPDEL(v18); /*0x5f1825*/
        *(this + 13) = 0; /*0x5f182d*/
      }
      v19 = 0; /*0x5f1830*/
      while ( 1 ) /*0x5f1838*/
      {
        v20 = RA2_OPNEW(0x1Cu); /*0x5f1838*/
        if ( v20 ) /*0x5f1842*/
          v9 = Modem::EnumerateDevices(v20, v19); /*0x5f184c*/
        *(this + 13) = v9; /*0x5f184e*/
        if ( *(unsigned int *)v9 ) /*0x5f1851*/
        {
          if ( !strcmp(a4, *(const char **)v9) ) /*0x5f1862*/
            break; /*0x5f1862*/
        }
        if ( v9 ) /*0x5f188b*/
        {
          FileFind::Close((void **)v9); /*0x5f188f*/
          RA2_OPDEL((void *)v9); /*0x5f1895*/
        }
        ++v19; /*0x5f189d*/
        *(this + 13) = 0; /*0x5f189e*/
        if ( v19 >= 10 ) /*0x5f18a8*/
          goto LABEL_38; /*0x5f18a8*/
        v9 = 0; /*0x5f1834*/
      }
      v24 = *(const char **)(v9 + 4); /*0x5f18af*/
    }
  LABEL_38:
    v21 = (*(int (__thiscall **)(HWND, const char *, int, unsigned int, int, int))(*(unsigned int *)g_ClipboardBuffer + 4))( /*0x5f18e3*/
            g_ClipboardBuffer,
            v24,
            a5,
            a6,
            a7,
            a8);
    *(this + 16) = v21; /*0x5f190b*/
    if ( v21 == -1 ) /*0x5f190e*/
      return 0; /*0x5f1913*/
    Debug::Log(); /*0x5f191e*/
    NullModemClass::closeConnection((unsigned int *)*(this + 14), *(this + 16)); /*0x5f192d*/
    *(this + 15) = 1; /*0x5f1937*/
    return 1; /*0x5f1910*/
}
} // namespace gamemd

// 0x5F19E0
namespace gamemd {
int Modem::OpenPort(unsigned int *a2) {
    int v3; // ebp
    WinModemClass *v4; // eax
    int v6; // eax
    int v7; // eax
    const char *v8; // ebx
    void *v9; // esi
    int v10; // eax
    int v11; // edi
    int v12; // eax
    unsigned int *v15; // [esp+18h] [ebp+4h]

    v3 = 0; /*0x5f19e7*/
    if ( g_ClipboardBuffer ) /*0x5f19f5*/
    {
      SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1a1e*/
    }
    else
    {
      v4 = (WinModemClass *)RA2_OPNEW(0x2088u); /*0x5f19fc*/
      if ( v4 ) /*0x5f1a06*/
        g_ClipboardBuffer = (HWND)WinModemClass::Construct(v4); /*0x5f1a0f*/
      else
        g_ClipboardBuffer = 0; /*0x5f1a16*/
    }
    v15 = (unsigned int *)a2[2]; /*0x5f1a2a*/
    v6 = *a2; /*0x5f1a2e*/
    if ( (int)*a2 > 760 )
    {
      v12 = v6 - 1000; /*0x5f1b01*/
      if ( v12 ) /*0x5f1b06*/
      {
        if ( v12 != 16 ) /*0x5f1b0b*/
          return 1; /*0x5f1b0b*/
        v8 = aCom1_0; /*0x5f1b1a*/
      }
      else
      {
        v8 = aCom3_0; /*0x5f1b21*/
      }
    }
    else
    {
      if ( *a2 != 760 )
      {
        v7 = v6 - 1; /*0x5f1a41*/
        if ( !v7 )
        {
          v9 = (void *)*((unsigned int *)this + 13); /*0x5f1a59*/
          v8 = (const char *)(a2 + 12); /*0x5f1a5c*/
          if ( v9 ) /*0x5f1a61*/
          {
            FileFind::Close(*((void ***)this + 13)); /*0x5f1a65*/
            RA2_OPDEL(v9); /*0x5f1a6b*/
            *((unsigned int *)this + 13) = 0; /*0x5f1a73*/
          }
          while ( 1 )
          {
            v10 = RA2_OPNEW(0x1Cu); /*0x5f1a78*/
            v11 = v10 ? Modem::EnumerateDevices(v10, v3) : 0;
            *((unsigned int *)this + 13) = v11; /*0x5f1a96*/
            if ( *(unsigned int *)v11 ) /*0x5f1a99*/
            {
              if ( !strcmp(v8, *(const char **)v11) ) /*0x5f1aa7*/
                break; /*0x5f1aa7*/
            }
            if ( v11 ) /*0x5f1ad0*/
            {
              FileFind::Close((void **)v11); /*0x5f1ad4*/
              RA2_OPDEL((void *)v11); /*0x5f1ada*/
            }
            ++v3; /*0x5f1ae6*/
            *((unsigned int *)this + 13) = 0; /*0x5f1aea*/
            if ( v3 >= 10 ) /*0x5f1af1*/
              goto LABEL_29; /*0x5f1af1*/
          }
          v8 = *(const char **)(v11 + 4); /*0x5f1af5*/
          goto LABEL_29; /*0x5f1af8*/
        }
        if ( v7 == 743 ) /*0x5f1a49*/
        {
          v8 = aCom4_0; /*0x5f1a4f*/
          goto LABEL_29; /*0x5f1a54*/
        }
        return 1; /*0x5f1b17*/
      }
      v8 = aCom2_0; /*0x5f1afa*/
    }
  LABEL_29:
    if ( (*(int (__thiscall **)(HWND, const char *, unsigned int *, unsigned int, int, int))(*(unsigned int *)g_ClipboardBuffer + 4))( /*0x5f1b40*/
           g_ClipboardBuffer,
           v8,
           v15,
           0,
           8,
           1) == -1 )
      return 1; /*0x5f1b45*/
    SerialPort::Close((SerialPort *)g_ClipboardBuffer); /*0x5f1b55*/
    return 0; /*0x5f1b0d*/
}
} // namespace gamemd

// 0x5F1BC0
namespace gamemd {
int NullModemClass::Connect(int a2, int a3, int a4, int a5) {
    int v5; // edx
    int result; // eax

    *((unsigned int *)this + 24) = a3; /*0x5f1bc8*/
    *((unsigned int *)this + 25) = a4; /*0x5f1bcf*/
    v5 = *((unsigned int *)this + 14); /*0x5f1bd2*/
    *((unsigned int *)this + 23) = a2; /*0x5f1bd5*/
    *(unsigned int *)(v5 + 40) = a2; /*0x5f1bd8*/
    *(unsigned int *)(*((unsigned int *)this + 14) + 44) = *((unsigned int *)this + 24); /*0x5f1be1*/
    result = *((unsigned int *)this + 14); /*0x5f1be4*/
    *(unsigned int *)(result + 48) = *((unsigned int *)this + 25); /*0x5f1bea*/
    return result; /*0x5f1bed*/
}
} // namespace gamemd

// 0x5F1F70
namespace gamemd {
int NullModemClass::SendPacket(int a2, int a3, int a4, int a5, int a6, int a7) {
    int result; // eax

    result = *((unsigned int *)this + 14); /*0x5f1f70*/
    if ( result ) /*0x5f1f75*/
      return EventClass::SetData(*(EventClass **)(result + 4), a3, a4, a5, a6, a7); /*0x5f1f93*/
    return result; /*0x5f1f98*/
}
} // namespace gamemd

// 0x5F1FA0
namespace gamemd {
char NullModemClass::DetectModem(unsigned int *a2, int a3) {
    wchar_t *StringCSF; // eax
    Dialog *MessageBox; // eax
    Dialog *v6; // edi
    int v7; // ebp
    Dialog *v8; // ecx
    unsigned int *v10; // esi
    char *v11; // esi
    int *v12; // eax
    int v13; // edx
    int *v14; // eax
    int v15; // eax
    int *v16; // eax
    int *v17; // eax
    int v18; // eax
    int v19; // eax
    int v20; // esi
    int *v21; // eax
    int *v22; // eax
    int *v23; // [esp+BCh] [ebp-220h]
    int *v24; // [esp+BCh] [ebp-220h]
    wchar_t *v25; // [esp+C0h] [ebp-21Ch]
    wchar_t *v26; // [esp+C0h] [ebp-21Ch]
    wchar_t *v27; // [esp+C0h] [ebp-21Ch]
    wchar_t *v28; // [esp+C0h] [ebp-21Ch]
    wchar_t *v29; // [esp+C0h] [ebp-21Ch]
    wchar_t *v30; // [esp+C0h] [ebp-21Ch]
    wchar_t *v31; // [esp+C0h] [ebp-21Ch]
    wchar_t *v32; // [esp+C0h] [ebp-21Ch]
    wchar_t *v33; // [esp+C4h] [ebp-218h]
    wchar_t *v34; // [esp+C4h] [ebp-218h]
    wchar_t *v35; // [esp+C4h] [ebp-218h]
    wchar_t *v36; // [esp+C4h] [ebp-218h]
    wchar_t *v37; // [esp+C4h] [ebp-218h]
    wchar_t *v38; // [esp+C4h] [ebp-218h]
    wchar_t *v39; // [esp+C4h] [ebp-218h]
    int v40; // [esp+D0h] [ebp-20Ch]
    char *Block; // [esp+E0h] [ebp-1FCh]
    Dialog *v42; // [esp+E4h] [ebp-1F8h]
    int v43; // [esp+E8h] [ebp-1F4h]
    unsigned char v44[240]; // [esp+ECh] [ebp-1F0h] BYREF
    char v45[256]; // [esp+1DCh] [ebp-100h] BYREF

    v43 = 0; /*0x5f1fb1*/
    Debug::Log(); /*0x5f1fb9*/
    if ( !NullModemClass::sendData((NullModemClass *)g_ClipboardBuffer) ) /*0x5f1fce*/
      return 0; /*0x5f1fce*/
    StringCSF = GetStringCSF(aTxtInitializin, 0, g_Str_File_NullMgr_CPP, 1134); /*0x5f1fe7*/
    MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x5f1ff0*/
    v6 = MessageBox; /*0x5f1ff5*/
    v42 = MessageBox; /*0x5f1ff9*/
    if ( !MessageBox ) /*0x5f1ffd*/
    {
  LABEL_7:
      NullModemClass::receiveData((NullModemClass *)g_ClipboardBuffer); /*0x5f2118*/
      return 0; /*0x5f212f*/
    }
    Dialog::Show(MessageBox); /*0x5f2005*/
    Debug::Log(); /*0x5f200f*/
    (*(void (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f2033*/
      g_ClipboardBuffer,
      aAte1,
      13,
      v44,
      81,
      90,
      2,
      -1);
    Debug::Log(); /*0x5f2046*/
    Debug::Log(); /*0x5f2050*/
    (*(void (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f2074*/
      g_ClipboardBuffer,
      aAtq0,
      13,
      v44,
      81,
      90,
      2,
      -1);
    Debug::Log(); /*0x5f2087*/
    Debug::Log(); /*0x5f2091*/
    (*(void (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f20b5*/
      g_ClipboardBuffer,
      aAtv1,
      13,
      v44,
      81,
      90,
      2,
      -1);
    Debug::Log(); /*0x5f20c8*/
    *((unsigned int *)this + 7) = 1; /*0x5f20d5*/
    *((unsigned int *)this + 8) = 1; /*0x5f20d8*/
    v7 = (*(int (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f20fd*/
           g_ClipboardBuffer,
           word_832678,
           13,
           v44,
           81,
           180,
           2,
           -1);
    if ( v7 < 2 ) /*0x5f2102*/
    {
      Debug::Log(); /*0x5f2109*/
  LABEL_5:
      v8 = v6; /*0x5f2111*/
  LABEL_6:
      Dialog::Destroy(v8); /*0x5f2113*/
      goto LABEL_7; /*0x5f2113*/
    }
    v10 = a2; /*0x5f2132*/
    if ( a2[4] == -1 ) /*0x5f213d*/
    {
      v7 = (*(int (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f2161*/
             g_ClipboardBuffer,
             &g_INI_DefaultBuffer,
             13,
             v44,
             81,
             300,
             1,
             -1);
    }
    else
    {
      Debug::Log(); /*0x5f216d*/
      Block = (char *)RA2_OPNEW(strlen(*(const char **)(dword_A8DB50 + 4 * a2[4])) + 2); /*0x5f219f*/
      strcpy(Block, *(const char **)(dword_A8DB50 + 4 * a2[4])); /*0x5f21ba*/
      v11 = strtok(Block, asc_832630); /*0x5f21c8*/
      if ( v11 ) /*0x5f21cf*/
      {
        while ( 1 ) /*0x5f21db*/
        {
          Debug::Log(); /*0x5f21db*/
          v7 = (*(int (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f21fe*/
                 g_ClipboardBuffer,
                 v11,
                 13,
                 v44,
                 81,
                 90,
                 1,
                 -1);
          Debug::Log(); /*0x5f2211*/
          if ( v7 < 2 ) /*0x5f221c*/
            break; /*0x5f221c*/
          v11 = strtok(0, asc_832630); /*0x5f222a*/
          if ( !v11 ) /*0x5f2231*/
            goto LABEL_18; /*0x5f2231*/
        }
        v33 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f2257*/
        v25 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f226e*/
        v12 = (int *)GetStringCSF(aTxtErrorNoInit, 0, g_Str_File_NullMgr_CPP, 1215); /*0x5f2280*/
        if ( Dialog::ShowMessageBox(v12, v25, v33, 0, 0, v40) ) /*0x5f228a*/
        {
          RA2_OPDEL(Block); /*0x5f2298*/
          v8 = v42; /*0x5f229d*/
          goto LABEL_6; /*0x5f22a4*/
        }
        v43 = 1; /*0x5f22a9*/
      }
  LABEL_18:
      RA2_OPDEL(Block); /*0x5f22b1*/
      v10 = a2; /*0x5f22bb*/
      v6 = v42; /*0x5f22c2*/
    }
    if ( *v10 == 1 ) /*0x5f22cc*/
    {
      v13 = *((unsigned int *)this + 13); /*0x5f22d2*/
      if ( v13 ) /*0x5f22d7*/
      {
        strcpy(v45, "AT"); /*0x5f22e9*/
        memset(&v45[3], 0, 253); /*0x5f2306*/
        if ( *(unsigned int *)(v13 + 24) ) /*0x5f2309*/
        {
          Debug::Log(); /*0x5f2319*/
          strcpy(&v45[2], *(const char **)(*((unsigned int *)this + 13) + 24)); /*0x5f2346*/
          v7 = (*(int (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f236d*/
                 g_ClipboardBuffer,
                 v45,
                 13,
                 v44,
                 81,
                 60,
                 1,
                 -1);
          Debug::Log(); /*0x5f2380*/
          if ( v7 != 2 && v7 != 3 ) /*0x5f2390*/
          {
            v34 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23b4*/
            v26 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23cb*/
            v14 = (int *)GetStringCSF(aTxtNoFlowContr, 0, g_Str_File_NullMgr_CPP, 1247); /*0x5f23dd*/
            if ( Dialog::ShowMessageBox(v14, v26, v34, 0, 0, v40) ) /*0x5f23e7*/
              goto LABEL_47; /*0x5f23ee*/
          }
          v10 = a2; /*0x5f23f4*/
        }
        v15 = *((unsigned int *)this + 13); /*0x5f2400*/
        if ( v10[6] ) /*0x5f23fb*/
        {
          if ( !*(unsigned int *)(v15 + 16) ) /*0x5f240e*/
            goto LABEL_37; /*0x5f240e*/
          Debug::Log(); /*0x5f2419*/
          strcpy(&v45[2], *(const char **)(*((unsigned int *)this + 13) + 16)); /*0x5f2446*/
          (*(void (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f246a*/
            g_ClipboardBuffer,
            v45,
            13,
            v44,
            81,
            60,
            1,
            -1);
          Debug::Log(); /*0x5f247e*/
          if ( v7 != 2 && v7 != 3 ) /*0x5f2492*/
          {
            v35 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24ba*/
            v27 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24d1*/
            v16 = (int *)GetStringCSF(aTxtNoCompEnabl, 0, g_Str_File_NullMgr_CPP, 1266); /*0x5f24e3*/
            if ( Dialog::ShowMessageBox(v16, v27, v35, 0, 0, v40) ) /*0x5f24ed*/
            {
              v8 = v42; /*0x5f24fa*/
              goto LABEL_6; /*0x5f24fe*/
            }
          }
        }
        else
        {
          if ( !*(unsigned int *)(v15 + 20) ) /*0x5f2508*/
            goto LABEL_37; /*0x5f2508*/
          Debug::Log(); /*0x5f2513*/
          strcpy(&v45[2], *(const char **)(*((unsigned int *)this + 13) + 20)); /*0x5f2540*/
          (*(void (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f2564*/
            g_ClipboardBuffer,
            v45,
            13,
            v44,
            81,
            60,
            1,
            -1);
          Debug::Log(); /*0x5f2578*/
          if ( v7 != 2 && v7 != 3 ) /*0x5f2588*/
          {
            v36 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25ac*/
            v28 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25c3*/
            v17 = (int *)GetStringCSF(aTxtNoCompDisab, 0, g_Str_File_NullMgr_CPP, 1281); /*0x5f25d5*/
            if ( Dialog::ShowMessageBox(v17, v28, v36, 0, 0, v40) ) /*0x5f25df*/
              goto LABEL_47; /*0x5f25e6*/
          }
        }
        v10 = a2; /*0x5f25ec*/
  LABEL_37:
        v18 = *((unsigned int *)this + 13); /*0x5f25f3*/
        if ( v10[7] ) /*0x5f25f3*/
        {
          if ( *(unsigned int *)(v18 + 8) ) /*0x5f2601*/
          {
            Debug::Log(); /*0x5f2611*/
            strcpy(&v45[2], *(const char **)(*((unsigned int *)this + 13) + 8)); /*0x5f263e*/
            (*(void (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f2662*/
              g_ClipboardBuffer,
              v45,
              13,
              v44,
              81,
              60,
              1,
              -1);
            Debug::Log(); /*0x5f2676*/
            if ( v7 != 2 && v7 != 3 ) /*0x5f268a*/
            {
              v37 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26b2*/
              v29 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26c9*/
              v23 = (int *)GetStringCSF(aTxtNoEcEnableR, 0, g_Str_File_NullMgr_CPP, 1301); /*0x5f26e0*/
              v19 = Dialog::ShowMessageBox(v23, v29, v37, 0, 0, v40); /*0x5f26e5*/
              goto LABEL_46; /*0x5f26e5*/
            }
          }
        }
        else if ( *(unsigned int *)(v18 + 12) ) /*0x5f26ea*/
        {
          Debug::Log(); /*0x5f26fa*/
          strcpy(&v45[2], *(const char **)(*((unsigned int *)this + 13) + 12)); /*0x5f2727*/
          (*(void (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f274b*/
            g_ClipboardBuffer,
            v45,
            13,
            v44,
            81,
            60,
            1,
            -1);
          Debug::Log(); /*0x5f275f*/
          if ( v7 != 2 && v7 != 3 ) /*0x5f276f*/
          {
            v38 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f2793*/
            v30 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f27aa*/
            v24 = (int *)GetStringCSF(aTxtNoEcDisable, 0, g_Str_File_NullMgr_CPP, 1316); /*0x5f27c1*/
            v19 = Dialog::ShowMessageBox(v24, v30, v38, 0, 0, v40); /*0x5f27c6*/
  LABEL_46:
            if ( v19 ) /*0x5f27cd*/
            {
  LABEL_47:
              v8 = v42; /*0x5f27cf*/
              goto LABEL_6; /*0x5f27d3*/
            }
          }
        }
        v6 = v42; /*0x5f27d8*/
      }
    }
    Debug::Log(); /*0x5f27dc*/
    v20 = (*(int (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f2808*/
            g_ClipboardBuffer,
            aAts00,
            13,
            v44,
            81,
            90,
            2,
            -1);
    Debug::Log(); /*0x5f281a*/
    if ( v20 != 2 ) /*0x5f2825*/
    {
      v39 = GetStringCSF(g_Str_TXT_CANCEL, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2849*/
      v31 = GetStringCSF(g_Str_TXT_IGNORE, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2860*/
      v21 = (int *)GetStringCSF(aTxtErrorNoDisa, 0, g_Str_File_NullMgr_CPP, 1334); /*0x5f2872*/
      if ( Dialog::ShowMessageBox(v21, v31, v39, 0, 0, v40) ) /*0x5f287c*/
        goto LABEL_5; /*0x5f2883*/
      ++v43; /*0x5f2889*/
    }
    if ( v43 >= 3 ) /*0x5f2892*/
    {
      v32 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_NullMgr_CPP, 1347); /*0x5f28b8*/
      v22 = (int *)GetStringCSF(aTxtErrorTooMan, 0, g_Str_File_NullMgr_CPP, 1347); /*0x5f28ca*/
      Dialog::ShowMessageBox(v22, v32, 0, 0, 0, v40); /*0x5f28d4*/
      goto LABEL_5; /*0x5f28d9*/
    }
    Dialog::Destroy(v6); /*0x5f28e0*/
    Debug::Log(); /*0x5f28ea*/
    NullModemClass::receiveData((NullModemClass *)g_ClipboardBuffer); /*0x5f28f8*/
    if ( (*(int (__thiscall **)(HWND, char *, int, unsigned char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f291f*/
           g_ClipboardBuffer,
           word_832678,
           13,
           v44,
           81,
           90,
           2,
           -1) >= 2 )
      return 1; /*0x5f2940*/
    Debug::Log(); /*0x5f2926*/
    return 0; /*0x5f2123*/
}
} // namespace gamemd

// 0x5F3170
namespace gamemd {
char NullModemClass::Negotiate() {
    int v3; // eax
    int i; // eax
    int v5; // esi
    bool v6; // zf
    unsigned char Buffer[4]; // [esp+78h] [ebp-58h] BYREF
    char Str1[84]; // [esp+7Ch] [ebp-54h] BYREF

    if ( *((unsigned int *)this + 16) == -1 || !g_ClipboardBuffer ) /*0x5f3189*/
      return 0; /*0x5f3189*/
    dword_A8DAB8 &= ~1u; /*0x5f319e*/
    if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f31be*/
           g_ClipboardBuffer,
           word_832678,
           13,
           Str1,
           81,
           90,
           1,
           -1) == 2 )
    {
      dword_A8DAB8 |= 1u; /*0x5f31c8*/
      return 1; /*0x5f31d3*/
    }
    (*(void (__thiscall **)(HWND, unsigned int))(*(unsigned int *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 0); /*0x5f31de*/
    sub_4A50A0(53); /*0x5f31e6*/
    (*(void (__thiscall **)(HWND, int))(*(unsigned int *)g_ClipboardBuffer + 16))(g_ClipboardBuffer, 1); /*0x5f31f4*/
    if ( (*(int (__thiscall **)(HWND, char *, int, char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f3218*/
           g_ClipboardBuffer,
           word_832678,
           13,
           Str1,
           81,
           90,
           1,
           -1) == 2 )
    {
      v3 = dword_A8DAB8; /*0x5f321a*/
  LABEL_7:
      dword_A8DAB8 = v3 | 1; /*0x5f321f*/
      return 1; /*0x5f322d*/
    }
    for ( i = *((unsigned int *)this + 11); /*0x5f3234*/
          i > 0;
          i = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(unsigned int *)g_ClipboardBuffer + 20))(
                g_ClipboardBuffer,
                i,
                Str1,
                81,
                -1) )
    {
      ; /*0x5f3248*/
    }
    Buffer[0] = *((unsigned char *)this + 48); /*0x5f3258*/
    Buffer[1] = Buffer[0]; /*0x5f325c*/
    Buffer[2] = Buffer[0]; /*0x5f3260*/
    Buffer[3] = 0; /*0x5f326b*/
    WinModemClass::WriteSerial((int *)g_ClipboardBuffer, Buffer, 3u); /*0x5f3270*/
    v5 = *((unsigned int *)this + 11); /*0x5f3275*/
    if ( v5 > 0 ) /*0x5f327a*/
    {
      do /*0x5f32ad*/
        v5 = (*(int (__thiscall **)(HWND, int, char *, int, int))(*(unsigned int *)g_ClipboardBuffer + 20))( /*0x5f329d*/
               g_ClipboardBuffer,
               v5,
               Str1,
               81,
               -1);
      while ( strncmp(Str1, g_INI_Key_OK, 2u) && v5 > 0 ); /*0x5f32ad*/
    }
    if ( (*(int (__thiscall **)(HWND, void **, int, char *, int, unsigned int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f32d3*/
           g_ClipboardBuffer,
           &off_832A0C,
           13,
           Str1,
           81,
           *((unsigned int *)this + 10),
           1,
           -1) != 2 )
    {
      dword_A8DAB8 |= 1u; /*0x5f3310*/
      return 0; /*0x5f3317*/
    }
    v6 = (*(int (__thiscall **)(HWND, void **, int, char *, int, int, int, int))(*(unsigned int *)g_ClipboardBuffer + 28))( /*0x5f32f3*/
           g_ClipboardBuffer,
           &off_832A08,
           13,
           Str1,
           81,
           60,
           1,
           -1) == 2;
    v3 = dword_A8DAB8; /*0x5f32f6*/
    if ( v6 ) /*0x5f32fb*/
      goto LABEL_7; /*0x5f32fb*/
    dword_A8DAB8 |= 1u; /*0x5f3304*/
    return 0; /*0x5f31c5*/
}
} // namespace gamemd

// 0x6425F0
namespace gamemd {
int ModemGame::RenderPaletteImage(int *a2) {
    int v4; // ebx
    int *v5; // esi
    void (__thiscall ***v6)(unsigned int, int); // ecx
    char *v7; // eax
    char *v8; // eax
    int result; // eax
    int v10; // edi
    int v11; // edx
    unsigned int v12; // eax
    int *v13; // ecx
    unsigned int v14; // esi
    int v15; // ebx
    int v16; // eax
    int v17; // [esp+18h] [ebp-28h]
    int v18; // [esp+1Ch] [ebp-24h]
    uint8_t *i; // [esp+1Ch] [ebp-24h]
    int *v20; // [esp+20h] [ebp-20h]
    int v21; // [esp+24h] [ebp-1Ch]
    unsigned int v22[2]; // [esp+28h] [ebp-18h] BYREF
    char v23[16]; // [esp+30h] [ebp-10h] BYREF
    int *v24; // [esp+44h] [ebp+4h]

    v4 = a2[1]; /*0x6425fd*/
    v5 = a2 + 2; /*0x642605*/
    v24 = (int *)*a2; /*0x642608*/
    v21 = v4; /*0x64260c*/
    v20 = v5; /*0x642612*/
    v18 = *v5; /*0x642616*/
    v6 = *(void (__thiscall ****)(unsigned int, int))this->__pad_0; /*0x64261a*/
    if ( v6 ) /*0x64261f*/
      (**v6)(v6, 1); /*0x642625*/
    v7 = (char *)RA2_OPNEW(0x24u); /*0x642629*/
    if ( v7 ) /*0x642633*/
      v8 = DSurface::Construct(v7, (int)v24, v4, 1, 0); /*0x642641*/
    else
      v8 = 0; /*0x642648*/
    *(unsigned int *)this->__pad_0 = v8; /*0x64264a*/
    (*(void (__thiscall **)(char *, unsigned int))(*(unsigned int *)v8 + 24))(v8, 0); /*0x642653*/
    result = v18; /*0x642656*/
    v17 = 0; /*0x64265a*/
    for ( i = (uint8_t *)a2 + 2 * v18 + 12; v17 < v4; ++v17 ) /*0x64266c*/
    {
      v10 = 0; /*0x642676*/
      if ( (int)v24 > 0 ) /*0x64267a*/
      {
        do /*0x642718*/
        {
          v22[0] = v10; /*0x642686*/
          v11 = *i++; /*0x64268a*/
          v12 = *((uint16_t *)v5 + v11 + 2); /*0x64269c*/
          v13 = *(int **)this->__pad_0; /*0x6426eb*/
          v14 = ((int)(16 * (v12 & 0xF)) >> g_BitMask_Red << g_BitShift_Blue) /*0x6426ee*/
              | ((uint8_t)(v12 & 0xF0) >> g_BitMask_Blue << g_BitMask_Green)
              | (((v12 >> 4) & 0xF0) >> g_BitShift_Green_0 << g_BitShift_Red);
          v22[1] = v17; /*0x6426f4*/
          v15 = *v13; /*0x6426f8*/
          v16 = (*(int (__thiscall **)(int *, char *))(*v13 + 120))(v13, v23); /*0x6426fa*/
          (*(void (__thiscall **)(unsigned int, unsigned int *, unsigned int, int))(v15 + 136))( /*0x642707*/
            *(unsigned int *)this->__pad_0,
            v22,
            v14,
            v16);
          v5 = v20; /*0x642711*/
          ++v10; /*0x642715*/
        }
        while ( v10 < (int)v24 ); /*0x642718*/
        v4 = v21; /*0x64271e*/
      }
      result = v17 + 1; /*0x642726*/
    }
    return result; /*0x642733*/
}
} // namespace gamemd

// 0x645820
namespace gamemd {
unsigned int * NetworkEventClass::Process(char *Source) {
    int v2; // esi
    BuildingTypeClass *v3; // eax

    if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x64583c*/
      return 0; /*0x64589f*/
    v2 = 0; /*0x64584d*/
    if ( *(int *)&stru_A83D50.__pad_3C[28] <= 0 ) /*0x645851*/
    {
  LABEL_6:
      v3 = (BuildingTypeClass *)RA2_OPNEW(0x318u); /*0x645876*/
      if ( v3 ) /*0x645885*/
        return BuildingTypeClass::Construct(v3, Source); /*0x645891*/
      return 0; /*0x645885*/
    }
    while ( _strcmpi((char *)(*(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v2) + 36), Source) ) /*0x64586a*/
    {
      if ( ++v2 >= *(int *)&stru_A83D50.__pad_3C[28] ) /*0x645874*/
        goto LABEL_6; /*0x645874*/
    }
    return *(unsigned int **)(*(unsigned int *)&stru_A83D50.__pad_3C[16] + 4 * v2); /*0x64588f*/
}
} // namespace gamemd

// 0x664240
namespace gamemd {
int NetworkManager::SetPlayerAddress(int a2, unsigned int *a3) {
    int v4; // edx
    int result; // eax
    int NetworkManager_field_0x04; // esi
    char **i; // ecx
    int v8; // edx
    int v9; // [esp+Ch] [ebp-8h] BYREF

    Network::CopyAddress((Network *)a3, &a3, (int)&v9); /*0x664256*/
    v4 = *((unsigned int *)this + 4); /*0x66425b*/
    result = 0; /*0x66425e*/
    if ( v4 > 0 ) /*0x664262*/
    {
      NetworkManager_field_0x04 = this->NetworkManager_field_0x04; /*0x664264*/
      for ( i = (char **)NetworkManager_field_0x04; **i != a2; ++i ) /*0x66426b*/
      {
        if ( ++result >= v4 ) /*0x66427c*/
          return result; /*0x66427c*/
      }
      v8 = *(unsigned int *)(NetworkManager_field_0x04 + 4 * result); /*0x664287*/
      result = v9; /*0x66428a*/
      *(unsigned int *)(v8 + 33) = v9; /*0x66428e*/
    }
    return result; /*0x66427e*/
}
} // namespace gamemd

// 0x664530
namespace gamemd {
int NetworkEventQueueClass::WaitForResponse() {
    int result; // eax
    int v3; // esi
    int Ticks; // [esp+8h] [ebp-16Ch]
    unsigned char v5[340]; // [esp+20h] [ebp-154h] BYREF

    memset(v5, 0, 338); /*0x664545*/
    result = TimerGetTicks(); /*0x664551*/
    IDA_LOBYTE(result) = *((unsigned char *)this + 24); /*0x66455a*/
    if ( (unsigned char)result ) /*0x664567*/
    {
      result = *((unsigned int *)this + 7); /*0x66456d*/
      if ( result ) /*0x664572*/
      {
        v5[0] = 3; /*0x664589*/
        Network::SendPacket(&unk_A8E9C0.Socket, (int)v5, 338, 1u); /*0x66458e*/
        Ticks = TimerGetTicks(); /*0x6645ae*/
        for ( result = HouseClass::GetUpgradeValue(&unk_A8E9C0); result > 0; result = HouseClass::GetUpgradeValue(&unk_A8E9C0) ) /*0x6645bd*/
        {
          result = Ticks; /*0x6645c2*/
          v3 = 900; /*0x6645c6*/
          if ( Ticks != -1 ) /*0x6645cc*/
          {
            result = TimerGetTicks() - Ticks; /*0x6645d7*/
            if ( result >= 900 ) /*0x6645dd*/
              return result; /*0x6645dd*/
            v3 = 900 - result; /*0x6645df*/
          }
          if ( !v3 ) /*0x6645e3*/
            break; /*0x6645e3*/
          Event::Dispatch(); /*0x6645e5*/
        }
      }
    }
    return result; /*0x6645f8*/
}
} // namespace gamemd

// 0x6646C0
namespace gamemd {
char NetworkManager::RemovePlayer(int a2) {
    int i; // esi
    char *v3; // eax
    char result; // al
    unsigned char v5[340]; // [esp+Ch] [ebp-154h] BYREF

    memset(v5, 0, 338); /*0x6646d8*/
    for ( i = 0; i < *(unsigned int *)(this + 16); ++i ) /*0x6646eb*/
    {
      v3 = *(char **)(*(unsigned int *)(this + 4) + 4 * i); /*0x6646f0*/
      if ( *v3 == a2 ) /*0x6646f8*/
      {
        v3[41] = 0; /*0x6646fa*/
        v3[39] = 0; /*0x6646fd*/
      }
    }
    result = *(unsigned char *)(this + 24); /*0x664708*/
    if ( result ) /*0x664710*/
    {
      v5[0] = 2; /*0x664717*/
      v5[1] = a2; /*0x66471c*/
      Debug::Log(); /*0x664720*/
      return Network::SendPacket((int)unk_A8E9C0, (int)v5, 338, 1u); /*0x664739*/
    }
    return result; /*0x66470b*/
}
} // namespace gamemd

// 0x695FD0
namespace gamemd {
int NetworkDialog::InitModemSettings(unsigned int *a2) {
    HWND (__stdcall *v3)(HWND, int); // esi
    HWND DlgItem; // eax
    HWND v5; // edi
    LPARAM i; // esi
    LRESULT v7; // eax
    WPARAM ListBoxItem; // eax
    HWND v9; // eax
    HWND v10; // eax
    char *v11; // edx
    int v12; // eax
    HWND v13; // eax
    int result; // eax
    bool v15; // [esp+13h] [ebp-5h]
    char *v16; // [esp+14h] [ebp-4h]

    qmemcpy((char *)this + 136, a2, 0x70u); /*0x695fea*/
    if ( !*((unsigned int *)this + 34) ) /*0x695fec*/
      *((unsigned int *)this + 34) = 760; /*0x695ff1*/
    if ( *((unsigned int *)this + 35) == -1 ) /*0x696002*/
      *((unsigned int *)this + 35) = 3; /*0x696004*/
    if ( *((unsigned int *)this + 36) == -1 ) /*0x696014*/
      *((unsigned int *)this + 36) = 57600; /*0x696016*/
    InitializeModemPortSelect((ObjectClass *)this); /*0x696022*/
    NetworkDialog::Dispatch(this); /*0x696029*/
    v3 = GetDlgItem; /*0x696030*/
    DlgItem = GetDlgItem(*(HWND *)this->__pad_0, 1625); /*0x69603c*/
    v5 = DlgItem; /*0x696044*/
    if ( DlgItem ) /*0x696048*/
    {
      SendMessageA(DlgItem, 0x14Bu, 0, 0); /*0x696054*/
      for ( i = 0; i < 4; ++i ) /*0x696056*/
      {
        v7 = SendMessageA(v5, 0x4C2u, 0, *(unsigned int *)(dword_A8DB68 + 4 * i)); /*0x69606a*/
        SendMessageA(v5, 0x151u, v7, i); /*0x696074*/
      }
      ListBoxItem = FindListBoxItem(v5, -1, *((unsigned int *)this + 39)); /*0x696088*/
      SendMessageA(v5, 0x14Eu, ListBoxItem, 0); /*0x696096*/
      v3 = GetDlgItem; /*0x696098*/
    }
    v15 = *((unsigned int *)this + 37) == 0; /*0x6960ae*/
    v9 = v3(*(HWND *)this->__pad_0, 1628); /*0x6960b3*/
    if ( v9 ) /*0x6960b7*/
      SendMessageA(v9, 0xF1u, v15, 0); /*0x6960ce*/
    v10 = v3(*(HWND *)this->__pad_0, 1627); /*0x6960d8*/
    if ( v10 ) /*0x6960dc*/
      SendMessageA(v10, 0xF1u, !v15, 0); /*0x6960f2*/
    if ( !dword_A8DB5C ) /*0x6960fb*/
    {
      v11 = (char *)RA2_OPNEW(8u); /*0x696108*/
      v16 = v11; /*0x696117*/
      strcpy(v11, (const char *)&off_832A08); /*0x69612a*/
      if ( dword_A8DB5C >= dword_A8DB54 ) /*0x696140*/
      {
        if ( !byte_A8DB59 && dword_A8DB54 /*0x69616a*/
          || dword_A8DB60 <= 0
          || !(*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8DB4C + 8))(
                &dword_A8DB4C,
                dword_A8DB54 + dword_A8DB60,
                0) )
        {
          goto LABEL_23; /*0x69616f*/
        }
        v11 = v16; /*0x696171*/
      }
      v12 = dword_A8DB5C++; /*0x69617b*/
      *(unsigned int *)(dword_A8DB50 + 4 * v12) = v11; /*0x69618a*/
  LABEL_23:
      v3 = GetDlgItem; /*0x69618d*/
      *((unsigned int *)this + 38) = 0; /*0x696193*/
    }
    NetworkDialog::UpdateListBox(this); /*0x69619d*/
    v13 = v3(*(HWND *)this->__pad_0, 1003); /*0x6961ac*/
    if ( v13 ) /*0x6961b0*/
      SendMessageA(v13, 0xF1u, a2[6] != 0, 0); /*0x6961c9*/
    result = (int)v3(*(HWND *)this->__pad_0, 1002); /*0x6961d3*/
    if ( result ) /*0x6961d7*/
      return SendMessageA((HWND)result, 0xF1u, a2[7] != 0, 0); /*0x6961f0*/
    return result; /*0x6961f2*/
}
} // namespace gamemd

// 0x6964C0
namespace gamemd {
int NetworkDialog::Dispatch() {
    int result; // eax
    HWND v2; // edi
    LPARAM v3; // ebx
    LPARAM *v4; // esi
    LRESULT v5; // eax
    int v6; // eax
    int v7; // eax
    WPARAM ListBoxItem; // eax

    result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1624); /*0x6964ce*/
    v2 = (HWND)result; /*0x6964d4*/
    if ( result ) /*0x6964d8*/
    {
      SendMessageA((HWND)result, 0x14Bu, 0, 0); /*0x6964f1*/
      v3 = 0; /*0x6964f3*/
      v4 = (LPARAM *)&off_83EB58; /*0x6964f5*/
      do /*0x69651b*/
      {
        v5 = SendMessageA(v2, 0x4C2u, 0, *v4); /*0x696505*/
        SendMessageA(v2, 0x151u, v5, v3); /*0x69650f*/
        ++v4; /*0x696511*/
        ++v3; /*0x696514*/
      }
      while ( (int)v4 < (int)a115200 ); /*0x69651b*/
      v6 = *((unsigned int *)this + 36); /*0x696521*/
      if ( v6 > 28800 ) /*0x69652c*/
      {
        if ( v6 == 57600 ) /*0x696555*/
        {
          v7 = 4; /*0x69656c*/
          goto LABEL_16; /*0x69656c*/
        }
        if ( v6 == 115200 ) /*0x69655c*/
        {
          v7 = 5; /*0x696565*/
          goto LABEL_16; /*0x69656a*/
        }
      }
      else
      {
        switch ( v6 ) /*0x69652e*/
        {
          case 28800: /*0x69652e*/
            v7 = 2; /*0x696549*/
            goto LABEL_16; /*0x69654e*/
          case 14400: /*0x69652e*/
            v7 = 0; /*0x696545*/
            goto LABEL_16; /*0x696547*/
          case 19200: /*0x69652e*/
            v7 = 1; /*0x69653e*/
  LABEL_16:
            ListBoxItem = FindListBoxItem(v2, -1, v7); /*0x696571*/
            return SendMessageA(v2, 0x14Eu, ListBoxItem, 0); /*0x696585*/
        }
      }
      v7 = 3; /*0x69655e*/
      goto LABEL_16; /*0x696563*/
    }
    return result; /*0x69658a*/
}
} // namespace gamemd

// 0x696610
namespace gamemd {
int NetworkDialog::UpdateListBox() {
    int result; // eax
    HWND v3; // edi
    int i; // esi

    result = (int)GetDlgItem(*(HWND *)this->__pad_0, 1630); /*0x69661e*/
    v3 = (HWND)result; /*0x696624*/
    if ( result ) /*0x696628*/
    {
      SendMessageA((HWND)result, 0x184u, 0, 0); /*0x69663f*/
      for ( i = 0; i < dword_A8DB5C; ++i ) /*0x69664a*/
        SendMessageA(v3, 0x4C8u, 0, *(unsigned int *)(dword_A8DB50 + 4 * i)); /*0x69665e*/
      if ( SendMessageA(v3, 0x18Bu, 0, 0) && *((int *)this + 38) >= -1 ) /*0x696683*/
      {
        if ( *((unsigned int *)this + 38) >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696697*/
          *((unsigned int *)this + 38) = 0; /*0x696699*/
      }
      else
      {
        *((unsigned int *)this + 38) = -1; /*0x6966a5*/
      }
      result = *((unsigned int *)this + 38); /*0x6966ab*/
      if ( result != -1 ) /*0x6966b4*/
        return SendMessageA(v3, 0x186u, result, 0); /*0x6966bf*/
    }
    return result; /*0x6966c1*/
}
} // namespace gamemd

// 0x69B600
namespace gamemd {
char NetworkSession::IsPlayerInGame(int a2) {
    int v2; // edi
    int v3; // edx
    int *v4; // esi
    int v5; // eax
    int v6; // eax
    int v7; // eax
    unsigned int *i; // ecx

    if ( a2 == -2 ) /*0x69b60a*/
      return 0; /*0x69b657*/
    v2 = *((unsigned int *)this + 2579); /*0x69b60c*/
    v3 = 0; /*0x69b612*/
    if ( v2 <= 0 ) /*0x69b616*/
    {
  LABEL_10:
      v7 = 0; /*0x69b642*/
      for ( i = (unsigned int *)this + 33; *i != a2; ++i ) /*0x69b644*/
      {
        if ( ++v7 >= 8 ) /*0x69b655*/
          return 0; /*0x69b655*/
      }
    }
    else
    {
      v4 = (int *)*((unsigned int *)this + 2576); /*0x69b618*/
      while ( 1 ) /*0x69b61e*/
      {
        v5 = *v4; /*0x69b61e*/
        if ( *(unsigned int *)(*v4 + 87) == -2 && *(unsigned int *)(v5 + 83) == -1 ) /*0x69b62a*/
          v6 = -2; /*0x69b62c*/
        else
          v6 = *(unsigned int *)(v5 + 83); /*0x69b633*/
        if ( v6 == a2 ) /*0x69b638*/
          break; /*0x69b638*/
        ++v3; /*0x69b63a*/
        ++v4; /*0x69b63b*/
        if ( v3 >= v2 ) /*0x69b640*/
          goto LABEL_10; /*0x69b640*/
      }
    }
    return 1; /*0x69b657*/
}
} // namespace gamemd

// 0x74FD50
namespace gamemd {
int NetworkBuffer::GetField() {
    *((unsigned int *)this + 15) = 0x20000; /*0x74fd55*/
    *((unsigned int *)this + 16) = 0x20000; /*0x74fd58*/
    return 0x20000; /*0x74fd5b*/
}
} // namespace gamemd

// 0x74FD60
namespace gamemd {
int NetworkBuffer::UpdateWindow(unsigned int a2, unsigned int a3) {
    unsigned int v3; // edi
    unsigned int v5; // eax

    v3 = *((unsigned int *)this + 16); /*0x74fd66*/
    if ( a2 > v3 ) /*0x74fd6b*/
      return -1; /*0x74fd6e*/
    v5 = *((unsigned int *)this + 15); /*0x74fd75*/
    if ( a3 < v5 ) /*0x74fd7e*/
      return 0; /*0x74fd81*/
    if ( a2 > v5 ) /*0x74fd89*/
      *((unsigned int *)this + 15) = a2; /*0x74fd8b*/
    if ( a3 < v3 ) /*0x74fd90*/
      *((unsigned int *)this + 16) = a3; /*0x74fd92*/
    return *((unsigned int *)this + 16); /*0x74fd6d*/
}
} // namespace gamemd

// 0x74FDA0
namespace gamemd {
int NetworkBuffer::GetField2() {
    return 0x20000; /*0x74fda5*/
}
} // namespace gamemd

// 0x74FDB0
namespace gamemd {
int NetworkBuffer::GetField3() {
    return 0x20000; /*0x74fdb5*/
}
} // namespace gamemd

// 0x77A4A0
namespace gamemd {
uint8_t WOLOption::SetValue(const char **a2) {
    uint8_t result; // al

    result = String::Compare(a2, (const char **)(this + 12)); /*0x77a4af*/
    if ( !result ) /*0x77a4b6*/
    {
      result = (uint8_t)String::Reassign((char **)(this + 12), a2); /*0x77a4bb*/
      *(unsigned char *)(this + 8) = 1; /*0x77a4c0*/
    }
    return result; /*0x77a4c4*/
}
} // namespace gamemd

// 0x77A4D0
namespace gamemd {
int16_t WOLPersona::FormatDateTime() {
    struct tm *v2; // ebx
    int v3; // edi
    wchar_t *StringCSF; // eax
    char *v5; // eax
    char *v6; // eax
    char *v7; // eax
    int16_t result; // ax
    int v9; // [esp-4h] [ebp-68h]
    __time32_t Time; // [esp+10h] [ebp-54h] BYREF
    char String_v[16]; // [esp+14h] [ebp-50h] BYREF
    unsigned char v12[64]; // [esp+24h] [ebp-40h] BYREF

    Time = time(0); /*0x77a4e0*/
    v2 = localtime(&Time); /*0x77a4f6*/
    SafeDelete::Ptr((SafeDelete *)this + 8); /*0x77a4f8*/
    String::Wrapper5to4((int)String_v, 16, (int)aM, (int)v2); /*0x77a50a*/
    v3 = atoi(String_v); /*0x77a519*/
    String::Wrapper5to4((int)String_v, 16, (int)g_Str_Trace, (int)v2); /*0x77a528*/
    switch ( v3 ) /*0x77a533*/
    {
      case 1: /*0x77a533*/
        v9 = 609; /*0x77a535*/
  LABEL_26:
        StringCSF = GetStringCSF(g_Str_TXT_JANUARY, 0, g_Str_File_WOLPersonaInformation_cpp, v9); /*0x77a65e*/
        break; /*0x77a66a*/
      case 2: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_FEBRUARY, 0, g_Str_File_WOLPersonaInformation_cpp, 611); /*0x77a555*/
        break;
      case 3: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_MARCH, 0, g_Str_File_WOLPersonaInformation_cpp, 613); /*0x77a570*/
        break;
      case 4: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_APRIL, 0, g_Str_File_WOLPersonaInformation_cpp, 615); /*0x77a58b*/
        break;
      case 5: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_MAY, 0, g_Str_File_WOLPersonaInformation_cpp, 617); /*0x77a5a6*/
        break;
      case 6: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_JUNE, 0, g_Str_File_WOLPersonaInformation_cpp, 619); /*0x77a5c1*/
        break;
      case 7: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_JULY, 0, g_Str_File_WOLPersonaInformation_cpp, 621); /*0x77a5dc*/
        break;
      case 8: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_AUGUST, 0, g_Str_File_WOLPersonaInformation_cpp, 623); /*0x77a5f7*/
        break;
      case 9: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_SEPTEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 625); /*0x77a60f*/
        break;
      case 10: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_OCTOBER, 0, g_Str_File_WOLPersonaInformation_cpp, 627); /*0x77a627*/
        break;
      case 11: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_NOVEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 629); /*0x77a63f*/
        break;
      case 12: /*0x77a533*/
        StringCSF = GetStringCSF(g_Str_TXT_DECEMBER, 0, g_Str_File_WOLPersonaInformation_cpp, 631); /*0x77a657*/
        break;
      default:
        v9 = 633; /*0x77a659*/
        goto LABEL_26; /*0x77a659*/
    }
    WideString::Reassign((void **)this + 16, StringCSF); /*0x77a66f*/
    WString::Append((WString *)this + 8, (wchar_t *)asc_82083C); /*0x77a67e*/
    v5 = CharToWideString(String_v); /*0x77a687*/
    WString::Append((WString *)this + 8, (wchar_t *)v5); /*0x77a68f*/
    WString::Append((WString *)this + 8, (wchar_t *)asc_82083C); /*0x77a69b*/
    String::Wrapper5to4((int)String_v, 16, (int)aY_0, (int)v2); /*0x77a6ad*/
    v6 = CharToWideString(String_v); /*0x77a6b9*/
    WString::Append((WString *)this + 8, (wchar_t *)v6); /*0x77a6c1*/
    v12[0] = 0; /*0x77a6d3*/
    String::Wrapper5to4((int)v12, 64, (int)aHMS, (int)v2); /*0x77a6d8*/
    v7 = CharToWideString(v12); /*0x77a6e4*/
    result = WideString::Reassign((void **)this + 15, (wchar_t *)v7); /*0x77a6ed*/
    *((unsigned char *)this + 8) = 1; /*0x77a6f3*/
    return result; /*0x77a6f2*/
}
} // namespace gamemd

// 0x77A840
namespace gamemd {
bool WOLGameList::Check(int a2) {
    return *(unsigned int *)(a2 + 28) != *((unsigned int *)this + 9) || *(unsigned int *)(a2 + 16) != *((unsigned int *)this + 10); /*0x77a84d*/
}
} // namespace gamemd

// 0x781D20
namespace gamemd {
void WOLobby::BuildStateList(char a1) {
    signed int v1; // esi
    signed int v2; // ebx
    int *v3; // ebp
    int v4; // eax
    int *v5; // ebp
    char *v6; // edx
    int v7; // edx
    int v8; // eax
    int v9; // esi
    char *v10; // edi
    bool v11; // zf
    void **v12; // edi
    int v14; // [esp+14h] [ebp-84h]
    signed int v15; // [esp+14h] [ebp-84h]
    int v16[2]; // [esp+18h] [ebp-80h] BYREF
    void *Block; // [esp+20h] [ebp-78h]
    signed int v18; // [esp+24h] [ebp-74h]
    int *v19; // [esp+28h] [ebp-70h]
    unsigned int v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF

    v1 = dword_B77900; /*0x781d29*/
    v2 = 0; /*0x781d30*/
    v16[0] = 0; /*0x781d3d*/
    v16[1] = 0; /*0x781d41*/
    Block = 0; /*0x781d45*/
    v18 = dword_B77900; /*0x781d49*/
    v3 = (int *)RA2_OPNEW(12 * dword_B77900); /*0x781d52*/
    v19 = v3; /*0x781d59*/
    if ( v3 ) /*0x781d5d*/
    {
      v4 = 0; /*0x781d80*/
      memset(v20, 0, sizeof(v20)); /*0x781d88*/
      if ( v1 <= 0 ) /*0x781d8a*/
      {
  LABEL_12:
        dword_B77900 = 0; /*0x781e34*/
        if ( a1 ) /*0x781e40*/
          qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_781CC0); /*0x781e47*/
        else
          qsort(v3, v1, 0xCu, sub_781CF0); /*0x781e72*/
        if ( v1 > 0 ) /*0x781e7c*/
        {
          v7 = dword_B77900; /*0x781e82*/
          v15 = v1; /*0x781e88*/
          do /*0x781f5d*/
          {
            v8 = *v3; /*0x781e90*/
            if ( *v3 >= 0 && v8 < v16[0] ) /*0x781e9b*/
              qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x781eb3*/
            v9 = v7; /*0x781eb5*/
            if ( v7 >= dword_B77904 ) /*0x781ec1*/
            {
              DynamicArray::Grow(&dword_B77900); /*0x781ec8*/
              v7 = dword_B77900; /*0x781ecd*/
            }
            if ( v7 >= dword_B77904 ) /*0x781ed9*/
            {
              DynamicArray::Grow(&dword_B77900); /*0x781ee0*/
              v7 = dword_B77900; /*0x781ee5*/
            }
            if ( v9 < v7 ) /*0x781eed*/
            {
              memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v7 - 108 * v9); /*0x781f18*/
              v7 = dword_B77900; /*0x781f1d*/
            }
            v10 = (char *)dword_B77908 + 108 * v9; /*0x781f32*/
            if ( v10 ) /*0x781f37*/
            {
              qmemcpy(v10, v20, 0x6Cu); /*0x781f42*/
              v7 = dword_B77900; /*0x781f44*/
            }
            ++v7; /*0x781f4e*/
            v3 += 3; /*0x781f4f*/
            v11 = v15 == 1; /*0x781f52*/
            dword_B77900 = v7; /*0x781f53*/
            --v15; /*0x781f59*/
          }
          while ( !v11 ); /*0x781f5d*/
          v3 = v19; /*0x781f63*/
          v1 = v18; /*0x781f67*/
        }
        v16[0] = 0; /*0x781f6f*/
        if ( v1 > 0 ) /*0x781f73*/
        {
          v12 = (void **)(v3 + 1); /*0x781f75*/
          do /*0x781f8b*/
          {
            if ( *v12 ) /*0x781f78*/
              RA2_OPDEL(*v12); /*0x781f7f*/
            v12 += 3; /*0x781f87*/
            --v1; /*0x781f8a*/
          }
          while ( v1 ); /*0x781f8b*/
        }
        RA2_OPDEL(v3); /*0x781f8e*/
        v16[0] = 0; /*0x781f97*/
        RA2_OPDEL(Block); /*0x781f9c*/
      }
      else
      {
        v14 = 0; /*0x781d90*/
        v5 = v3 + 2; /*0x781d94*/
        while ( 1 ) /*0x781d9d*/
        {
          if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x781da7*/
            qmemcpy(v20, (char *)dword_B77908 + v4, sizeof(v20)); /*0x781dbb*/
          *(v5 - 2) = v2; /*0x781dbf*/
          v6 = (char *)RA2_OPNEW(0xAu); /*0x781dc7*/
          *(v5 - 1) = (int)v6; /*0x781dce*/
          if ( !v6 ) /*0x781dd1*/
            break; /*0x781dd1*/
          strcpy(v6, (const char *)&v20[9]); /*0x781deb*/
          *v5 = v20[0] & 1; /*0x781dff*/
          DynamicClass::Insert(v16, v20, v16[0]); /*0x781e0c*/
          ++v2; /*0x781e11*/
          v5 += 3; /*0x781e12*/
          v14 += 108; /*0x781e22*/
          if ( v2 >= v18 ) /*0x781e26*/
          {
            v3 = v19; /*0x781e2c*/
            v1 = v18; /*0x781e30*/
            goto LABEL_12; /*0x781e30*/
          }
          v4 = v14; /*0x781d99*/
        }
        v16[0] = 0; /*0x781e4d*/
        RA2_OPDEL(Block); /*0x781e56*/
      }
    }
    else
    {
      v16[0] = 0; /*0x781d63*/
      RA2_OPDEL(Block); /*0x781d68*/
    }
}
} // namespace gamemd

// 0x783800
namespace gamemd {
void WOLobby::BuildPlayerList(char a1) {
    signed int v1; // esi
    signed int v2; // ebx
    int *v3; // ebp
    int v4; // eax
    int *v5; // ebp
    char *v6; // edx
    int v7; // edx
    int v8; // eax
    int v9; // esi
    char *v10; // edi
    bool v11; // zf
    void **v12; // edi
    int v14; // [esp+14h] [ebp-84h]
    signed int v15; // [esp+14h] [ebp-84h]
    int v16[2]; // [esp+18h] [ebp-80h] BYREF
    void *Block; // [esp+20h] [ebp-78h]
    signed int v18; // [esp+24h] [ebp-74h]
    int *v19; // [esp+28h] [ebp-70h]
    unsigned int v20[27]; // [esp+2Ch] [ebp-6Ch] BYREF

    v1 = dword_B77900; /*0x783809*/
    v2 = 0; /*0x783810*/
    v16[0] = 0; /*0x78381d*/
    v16[1] = 0; /*0x783821*/
    Block = 0; /*0x783825*/
    v18 = dword_B77900; /*0x783829*/
    v3 = (int *)RA2_OPNEW(12 * dword_B77900); /*0x783832*/
    v19 = v3; /*0x783839*/
    if ( v3 ) /*0x78383d*/
    {
      v4 = 0; /*0x783860*/
      memset(v20, 0, sizeof(v20)); /*0x783868*/
      if ( v1 <= 0 ) /*0x78386a*/
      {
  LABEL_12:
        if ( a1 ) /*0x78391d*/
          qsort(v3, v1, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_7835C0); /*0x783924*/
        else
          qsort(v3, v1, 0xCu, sub_7836E0); /*0x78394f*/
        v7 = 0; /*0x783957*/
        dword_B77900 = 0; /*0x78395b*/
        if ( v1 > 0 ) /*0x783961*/
        {
          v15 = v1; /*0x783967*/
          do /*0x783a3c*/
          {
            v8 = *v3; /*0x78396f*/
            if ( *v3 >= 0 && v8 < v16[0] ) /*0x78397a*/
              qmemcpy(v20, (char *)Block + 108 * v8, sizeof(v20)); /*0x783992*/
            v9 = v7; /*0x783994*/
            if ( v7 >= dword_B77904 ) /*0x7839a0*/
            {
              DynamicArray::Grow(&dword_B77900); /*0x7839a7*/
              v7 = dword_B77900; /*0x7839ac*/
            }
            if ( v7 >= dword_B77904 ) /*0x7839b8*/
            {
              DynamicArray::Grow(&dword_B77900); /*0x7839bf*/
              v7 = dword_B77900; /*0x7839c4*/
            }
            if ( v9 < v7 ) /*0x7839cc*/
            {
              memcpy((char *)dword_B77908 + 108 * v9 + 108, (char *)dword_B77908 + 108 * v9, 108 * v7 - 108 * v9); /*0x7839f7*/
              v7 = dword_B77900; /*0x7839fc*/
            }
            v10 = (char *)dword_B77908 + 108 * v9; /*0x783a11*/
            if ( v10 ) /*0x783a16*/
            {
              qmemcpy(v10, v20, 0x6Cu); /*0x783a21*/
              v7 = dword_B77900; /*0x783a23*/
            }
            ++v7; /*0x783a2d*/
            v3 += 3; /*0x783a2e*/
            v11 = v15 == 1; /*0x783a31*/
            dword_B77900 = v7; /*0x783a32*/
            --v15; /*0x783a38*/
          }
          while ( !v11 ); /*0x783a3c*/
          v3 = v19; /*0x783a42*/
          v1 = v18; /*0x783a46*/
        }
        v16[0] = 0; /*0x783a4e*/
        if ( v1 > 0 ) /*0x783a52*/
        {
          v12 = (void **)(v3 + 1); /*0x783a54*/
          do /*0x783a6a*/
          {
            if ( *v12 ) /*0x783a57*/
              RA2_OPDEL(*v12); /*0x783a5e*/
            v12 += 3; /*0x783a66*/
            --v1; /*0x783a69*/
          }
          while ( v1 ); /*0x783a6a*/
        }
        RA2_OPDEL(v3); /*0x783a6d*/
        v16[0] = 0; /*0x783a76*/
        RA2_OPDEL(Block); /*0x783a7b*/
      }
      else
      {
        v14 = 0; /*0x783870*/
        v5 = v3 + 2; /*0x783874*/
        while ( 1 ) /*0x78387d*/
        {
          if ( v4 >= 0 && v2 < (int)dword_B77900 ) /*0x783887*/
            qmemcpy(v20, (char *)dword_B77908 + v4, sizeof(v20)); /*0x78389b*/
          *(v5 - 2) = v2; /*0x78389f*/
          v6 = (char *)RA2_OPNEW(0xAu); /*0x7838a7*/
          *(v5 - 1) = (int)v6; /*0x7838ae*/
          if ( !v6 ) /*0x7838b1*/
            break; /*0x7838b1*/
          strcpy(v6, (const char *)&v20[21] + 3); /*0x7838ce*/
          *v5 = v20[0] & 1; /*0x7838e2*/
          DynamicClass::Insert(v16, v20, v16[0]); /*0x7838ef*/
          ++v2; /*0x7838f4*/
          v5 += 3; /*0x7838f5*/
          v14 += 108; /*0x783905*/
          if ( v2 >= v18 ) /*0x783909*/
          {
            v3 = v19; /*0x78390f*/
            v1 = v18; /*0x783913*/
            goto LABEL_12; /*0x783913*/
          }
          v4 = v14; /*0x783879*/
        }
        v16[0] = 0; /*0x78392a*/
        RA2_OPDEL(Block); /*0x783933*/
      }
    }
    else
    {
      v16[0] = 0; /*0x783843*/
      RA2_OPDEL(Block); /*0x783848*/
    }
}
} // namespace gamemd

// 0x78F5C0
namespace gamemd {
wchar_t * WOLobby::FormatLatencyText() {
    int v2; // eax
    wchar_t *v3; // eax
    int v5; // [esp-10h] [ebp-14h]
    WOLobby *v6; // [esp-Ch] [ebp-10h]
    wchar_t *StringCSF; // [esp-8h] [ebp-Ch]
    wchar_t *v8; // [esp-4h] [ebp-8h]

    v2 = dword_B76440[WOLobby::FindPlayerIndex(this)]; /*0x78f5c8*/
    if ( v2 >= 0 ) /*0x78f5d1*/
    {
      if ( v2 >= 300 ) /*0x78f61a*/
      {
        v8 = (wchar_t *)v2; /*0x78f641*/
        if ( v2 >= 500 ) /*0x78f642*/
        {
          StringCSF = GetStringCSF(aTxtPoor, 0, g_Str_File_wonline_cpp, 15747); /*0x78f679*/
          v6 = this; /*0x78f67a*/
          v5 = 15747; /*0x78f67b*/
        }
        else
        {
          StringCSF = GetStringCSF(aTxtFair, 0, g_Str_File_wonline_cpp, 15745); /*0x78f65a*/
          v6 = this; /*0x78f65b*/
          v5 = 15745; /*0x78f65c*/
        }
      }
      else
      {
        v8 = (wchar_t *)v2; /*0x78f61c*/
        StringCSF = GetStringCSF(aTxtGood, 0, g_Str_File_wonline_cpp, 15743); /*0x78f633*/
        v6 = this; /*0x78f634*/
        v5 = 15743; /*0x78f635*/
      }
      v3 = GetStringCSF(aTxtLatencyIcon_0, 0, g_Str_File_wonline_cpp, v5); /*0x78f68c*/
    }
    else
    {
      v8 = GetStringCSF(g_Str_TXT_UNKNOWN_PING, 0, g_Str_File_wonline_cpp, 15741); /*0x78f5f0*/
      StringCSF = GetStringCSF(aTxtUnknown, 0, g_Str_File_wonline_cpp, 15741); /*0x78f607*/
      v6 = this; /*0x78f608*/
      v3 = GetStringCSF((wchar_t *)aTxtLatencyIcon, 0, g_Str_File_wonline_cpp, 15741); /*0x78f613*/
    }
    swprintf(&word_B75F6C, (const size_t)v3, (const wchar_t *const)v6, StringCSF, v8); /*0x78f697*/
    return &word_B75F6C; /*0x78f6a4*/
}
} // namespace gamemd

// 0x7A3100
namespace gamemd {
int WOLGameList::PopulateLobbyLists(int a2, int ***a3, int a4, int a5, int a6) {
    int v6; // ebx
    HWND v8; // eax
    HWND DlgItem; // eax
    void (__stdcall *v10)(HWND, UINT, WPARAM, LPARAM); // edi
    HWND v11; // ebp
    int v12; // eax
    unsigned int v13; // ecx
    unsigned int v14; // eax
    ObjectClass *v15; // esi
    ObjectClass *v16; // edi
    int v17; // eax
    wchar_t *StringCSF; // eax
    unsigned int v19; // ecx
    unsigned int v20; // eax
    ObjectClass *v21; // esi
    ObjectClass *v22; // edi
    int v23; // eax
    unsigned int v24; // ecx
    unsigned int v25; // eax
    ObjectClass *v26; // esi
    ObjectClass *v27; // edi
    int v28; // eax
    int v29; // esi
    String *v30; // eax
    String *v31; // ebp
    int v32; // edx
    int v33; // eax
    WOLGameList *v34; // ecx
    String *v35; // eax
    String *v36; // ebp
    int v37; // edx
    int v38; // eax
    String *v39; // eax
    String *v40; // ebp
    int v41; // edx
    int v42; // eax
    int v43; // ebp
    int v44; // ebx
    signed int v45; // eax
    char v46; // dl
    unsigned int *v47; // esi
    HWND v48; // eax
    ObjectClass *v49; // eax
    ObjectClass *v50; // [esp+0h] [ebp-2B2Ch]
    WideString v51[216]; // [esp+10h] [ebp-2B1Ch] BYREF
    wchar_t Buffer[128]; // [esp+E8h] [ebp-2A44h] BYREF
    char v53[108]; // [esp+1E8h] [ebp-2944h] BYREF
    char v54[108]; // [esp+254h] [ebp-28D8h] BYREF
    char v55[108]; // [esp+2C0h] [ebp-286Ch] BYREF
    wchar_t String_v[5120]; // [esp+32Ch] [ebp-2800h] BYREF
    int v57; // [esp+2B44h] [ebp+18h]

    if ( a3 ) /*0x7a3117*/
    {
      v6 = 0; /*0x7a3119*/
      a4 = 0; /*0x7a311b*/
    }
    else
    {
      v6 = a4; /*0x7a3124*/
    }
    if ( byte_B77DC1 ) /*0x7a3132*/
    {
      byte_884CF4 = 1; /*0x7a3137*/
      return 0; /*0x7a3147*/
    }
    v8 = (HWND)Dialog::FindByHandle((Dialog *)0xC1); /*0x7a3154*/
    DlgItem = GetDlgItem(v8, 1407); /*0x7a315a*/
    v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3160*/
    v11 = DlgItem; /*0x7a3166*/
    *(unsigned int *)&v51[20] = DlgItem; /*0x7a316a*/
    if ( DlgItem ) /*0x7a316e*/
    {
      if ( v57 != -1 || a3 ) /*0x7a3180*/
      {
        SendMessageA(DlgItem, 0x184u, 0, 0); /*0x7a3271*/
        if ( !v6 ) /*0x7a3275*/
        {
          StringCSF = GetStringCSF(aTxtNotInLadder, 0, g_Str_File_wonline_cpp, 4785); /*0x7a328c*/
          SendMessageA(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)StringCSF); /*0x7a329a*/
          InvalidateRect(v11, 0, 0); /*0x7a329f*/
          return 0; /*0x7a32b1*/
        }
        goto LABEL_11; /*0x7a3275*/
      }
      v11 = 0; /*0x7a3186*/
      *(unsigned int *)&v51[20] = 0; /*0x7a3188*/
    }
    if ( v6 ) /*0x7a318e*/
    {
  LABEL_11:
      v12 = *(unsigned int *)(v6 + 28); /*0x7a3194*/
      *(unsigned int *)&v51[8] = v6; /*0x7a319b*/
      *(unsigned int *)&v51[56] = v12; /*0x7a319f*/
      Gadget::InitProperties((Gadget *)&v51[32]); /*0x7a31a3*/
      if ( *(int ***)v6 == &off_802100 ) /*0x7a31af*/
      {
        if ( (unsigned int)dword_B768C4 > 0x7D0 ) /*0x7a31bf*/
        {
          v13 = dword_B768C8; /*0x7a31c5*/
          v14 = 0; /*0x7a31cb*/
          *(unsigned int *)&v51[4] = 0; /*0x7a31cf*/
          if ( dword_B768C8 ) /*0x7a31d3*/
          {
            do /*0x7a321d*/
            {
              v15 = *(ObjectClass **)(*(unsigned int *)g_WOL_ListParser.__pad_0 + 4 * v14); /*0x7a31db*/
              while ( v15 ) /*0x7a31e0*/
              {
                v16 = v15; /*0x7a31e2*/
                v15 = (ObjectClass *)v15->estimatedHealth; /*0x7a31e4*/
                DeleteAndZero(v16); /*0x7a31ed*/
                RA2_OPDEL(v16); /*0x7a31f3*/
              }
              v17 = *(unsigned int *)&v51[4]; /*0x7a31ff*/
              *(unsigned int *)(*(unsigned int *)g_WOL_ListParser.__pad_0 + 4 * *(unsigned int *)&v51[4]) = 0; /*0x7a3209*/
              v13 = dword_B768C8; /*0x7a3210*/
              v14 = v17 + 1; /*0x7a3216*/
              *(unsigned int *)&v51[4] = v14; /*0x7a3219*/
            }
            while ( v14 < dword_B768C8 ); /*0x7a321d*/
            v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a321f*/
          }
          dword_B768C4 = 0; /*0x7a322a*/
          if ( v13 > dword_B768F0 ) /*0x7a3236*/
          {
            do /*0x7a3260*/
            {
              if ( byte_B768D4 ) /*0x7a3243*/
                break; /*0x7a3243*/
              HashMap::Shrink2(&g_WOL_ListParser); /*0x7a324e*/
            }
            while ( dword_B768C8 > (unsigned int)dword_B768F0 ); /*0x7a3260*/
          }
        }
      }
      else if ( *(unsigned int *)v6 == 8960 ) /*0x7a32b9*/
      {
        if ( (unsigned int)dword_B73AFC > 0x7D0 ) /*0x7a32c9*/
        {
          v19 = dword_B73B00; /*0x7a32cf*/
          v20 = 0; /*0x7a32d5*/
          *(unsigned int *)&v51[4] = 0; /*0x7a32d9*/
          if ( dword_B73B00 ) /*0x7a32dd*/
          {
            do /*0x7a3327*/
            {
              v21 = (ObjectClass *)*((unsigned int *)dword_B73AF8 + v20); /*0x7a32e5*/
              while ( v21 ) /*0x7a32ea*/
              {
                v22 = v21; /*0x7a32ec*/
                v21 = (ObjectClass *)v21->estimatedHealth; /*0x7a32ee*/
                DeleteAndZero(v22); /*0x7a32f7*/
                RA2_OPDEL(v22); /*0x7a32fd*/
              }
              v23 = *(unsigned int *)&v51[4]; /*0x7a3309*/
              *((unsigned int *)dword_B73AF8 + *(unsigned int *)&v51[4]) = 0; /*0x7a3313*/
              v19 = dword_B73B00; /*0x7a331a*/
              v20 = v23 + 1; /*0x7a3320*/
              *(unsigned int *)&v51[4] = v20; /*0x7a3323*/
            }
            while ( v20 < dword_B73B00 ); /*0x7a3327*/
            v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3329*/
          }
          dword_B73AFC = 0; /*0x7a3334*/
          if ( v19 > dword_B73B28 ) /*0x7a3340*/
          {
            do /*0x7a336a*/
            {
              if ( byte_B73B0C ) /*0x7a334d*/
                break; /*0x7a334d*/
              HashMap::Shrink2((HashMap *)&dword_B73AF8); /*0x7a3358*/
            }
            while ( dword_B73B00 > (unsigned int)dword_B73B28 ); /*0x7a336a*/
          }
        }
      }
      else if ( (unsigned int)dword_B77D84 > 0x7D0 ) /*0x7a337b*/
      {
        v24 = dword_B77D88; /*0x7a3381*/
        v25 = 0; /*0x7a3387*/
        *(unsigned int *)&v51[4] = 0; /*0x7a338b*/
        if ( dword_B77D88 ) /*0x7a338f*/
        {
          do /*0x7a33d9*/
          {
            v26 = *(ObjectClass **)(*(unsigned int *)stru_B77D80.__pad_0 + 4 * v25); /*0x7a3397*/
            while ( v26 ) /*0x7a339c*/
            {
              v27 = v26; /*0x7a339e*/
              v26 = (ObjectClass *)v26->estimatedHealth; /*0x7a33a0*/
              DeleteAndZero(v27); /*0x7a33a9*/
              RA2_OPDEL(v27); /*0x7a33af*/
            }
            v28 = *(unsigned int *)&v51[4]; /*0x7a33bb*/
            *(unsigned int *)(*(unsigned int *)stru_B77D80.__pad_0 + 4 * *(unsigned int *)&v51[4]) = 0; /*0x7a33c5*/
            v24 = dword_B77D88; /*0x7a33cc*/
            v25 = v28 + 1; /*0x7a33d2*/
            *(unsigned int *)&v51[4] = v25; /*0x7a33d5*/
          }
          while ( v25 < dword_B77D88 ); /*0x7a33d9*/
          v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a33db*/
        }
        dword_B77D84 = 0; /*0x7a33e6*/
        if ( v24 > dword_B77DB0 ) /*0x7a33f2*/
        {
          do /*0x7a3414*/
          {
            if ( byte_B77D94 ) /*0x7a33fb*/
              break; /*0x7a33fb*/
            HashMap::Shrink2((HashMap *)&stru_B77D80); /*0x7a3402*/
          }
          while ( dword_B77D88 > (unsigned int)dword_B77DB0 ); /*0x7a3414*/
        }
      }
      if ( a4 && v11 ) /*0x7a3423*/
        dword_B76E38 = *(unsigned int *)(a4 + 28); /*0x7a3428*/
      String::ToLowerCopy((String *)&dword_B73E40, (char **)&v51[24]); /*0x7a3438*/
      *(unsigned int *)&v51[4] = 0; /*0x7a3444*/
      if ( a4 ) /*0x7a344e*/
      {
        while ( *(unsigned int *)(v6 + 16) == -1 ) /*0x7a3458*/
        {
          v6 = *(unsigned int *)(v6 + 60); /*0x7a345a*/
          *(unsigned int *)&v51[8] = v6; /*0x7a345d*/
  LABEL_121:
          if ( !v6 ) /*0x7a3aac*/
            goto LABEL_122; /*0x7a3aac*/
        }
        if ( v11 ) /*0x7a3468*/
        {
          *(unsigned int *)&v51[32] = 4; /*0x7a346e*/
          swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 28)); /*0x7a3487*/
          v10(v11, 0x4CCu, 0xFFFFFFFF, (LPARAM)Buffer); /*0x7a349f*/
          v29 = *(uint16_t *)&v51[4] << 16; /*0x7a34bc*/
          v10(v11, 0x4A8u, v29 | (uint16_t)dword_B779D8, (LPARAM)&v51[32]); /*0x7a34c8*/
          *(unsigned int *)&v51[32] = 1; /*0x7a34d6*/
          BulkCharToWide(String_v, (uint8_t *)(v6 + 64), -1); /*0x7a34de*/
          WideString::Reassign(&v51[36], String_v); /*0x7a34ef*/
          v10(v11, 0x4A8u, v29 | (uint16_t)dword_B73E08, (LPARAM)&v51[32]); /*0x7a350e*/
          swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 16)); /*0x7a3521*/
          WideString::Reassign(&v51[36], Buffer); /*0x7a3535*/
          v10(v11, 0x4A8u, v29 | (uint16_t)dword_B76904, (LPARAM)&v51[32]); /*0x7a3552*/
          swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 8)); /*0x7a3565*/
          WideString::Reassign(&v51[36], Buffer); /*0x7a3579*/
          v10(v11, 0x4A8u, v29 | (uint16_t)dword_B77CE4, (LPARAM)&v51[32]); /*0x7a3598*/
          swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 12)); /*0x7a35ab*/
          WideString::Reassign(&v51[36], Buffer); /*0x7a35bf*/
          v10(v11, 0x4A8u, v29 | (uint16_t)dword_B73AB4, (LPARAM)&v51[32]); /*0x7a35de*/
          swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, *(const wchar_t *const *)(v6 + 32)); /*0x7a35f1*/
          WideString::Reassign(&v51[36], Buffer); /*0x7a3605*/
          v10(v11, 0x4A8u, v29 | (uint16_t)dword_B76AEC, (LPARAM)&v51[32]); /*0x7a3622*/
          ++*(unsigned int *)&v51[4]; /*0x7a3624*/
        }
        String::Assign((String *)v51, (const char *)(v6 + 64)); /*0x7a3630*/
        String::ToLower((String *)v51); /*0x7a3639*/
        if ( *(int ***)a4 == &off_802100 ) /*0x7a364c*/
        {
          HashTable::Insert((HashTable *)&g_WOL_ListParser, (const char **)v51, v55); /*0x7a3664*/
          v30 = (String *)RA2_OPNEW(0x74u); /*0x7a366b*/
          v31 = v30; /*0x7a3670*/
          if ( v30 ) /*0x7a3677*/
            unknown_libname_73(v30); /*0x7a367b*/
          else
            v31 = 0; /*0x7a3682*/
          String::Reassign(v31, (const char **)v51); /*0x7a368b*/
          qmemcpy(&v31->m_3[1], (const void *)v6, 0x6Cu); /*0x7a369a*/
          *(unsigned int *)v31[14].__pad_0 = 0; /*0x7a36a0*/
          v32 = dword_B768D8(v51) & ((1 << dword_B768CC) - 1); /*0x7a36c1*/
          v33 = *(unsigned int *)(*(unsigned int *)g_WOL_ListParser.__pad_0 + 4 * v32); /*0x7a36c3*/
          *(unsigned int *)(*(unsigned int *)g_WOL_ListParser.__pad_0 + 4 * v32) = v31; /*0x7a36c6*/
          if ( v33 ) /*0x7a36cb*/
            *(unsigned int *)v31[14].__pad_0 = v33; /*0x7a36cd*/
          *(unsigned int *)&v51[100] = dword_B768C8; /*0x7a36dc*/
          *(unsigned long long *)&v51[76] = (unsigned int)++dword_B768C4; /*0x7a36e5*/
          *(unsigned int *)&v51[104] = 0; /*0x7a36ef*/
          if ( (double)(unsigned int)dword_B768C4 / (double)dword_B768C8 < dbl_B768E8 ) /*0x7a3706*/
            goto LABEL_82; /*0x7a3706*/
          v34 = (WOLGameList *)&g_WOL_ListParser; /*0x7a370c*/
        }
        else if ( *(unsigned int *)a4 == 8960 ) /*0x7a371b*/
        {
          HashTable::Insert((HashTable *)&dword_B73AF8, (const char **)v51, v54); /*0x7a3733*/
          v35 = (String *)RA2_OPNEW(0x74u); /*0x7a373a*/
          v36 = v35; /*0x7a373f*/
          if ( v35 ) /*0x7a3746*/
            unknown_libname_73(v35); /*0x7a374a*/
          else
            v36 = 0; /*0x7a3751*/
          String::Reassign(v36, (const char **)v51); /*0x7a375a*/
          qmemcpy(&v36->m_3[1], (const void *)v6, 0x6Cu); /*0x7a3769*/
          *(unsigned int *)v36[14].__pad_0 = 0; /*0x7a376f*/
          v37 = dword_B73B10(v51) & ((1 << dword_B73B04) - 1); /*0x7a3790*/
          v38 = *((unsigned int *)dword_B73AF8 + v37); /*0x7a3792*/
          *((unsigned int *)dword_B73AF8 + v37) = v36; /*0x7a3795*/
          if ( v38 ) /*0x7a379a*/
            *(unsigned int *)v36[14].__pad_0 = v38; /*0x7a379c*/
          *(unsigned int *)&v51[92] = dword_B73B00; /*0x7a37ab*/
          *(unsigned long long *)&v51[60] = (unsigned int)++dword_B73AFC; /*0x7a37b4*/
          *(unsigned int *)&v51[96] = 0; /*0x7a37be*/
          if ( (double)(unsigned int)dword_B73AFC / (double)dword_B73B00 < dbl_B73B20 ) /*0x7a37d5*/
            goto LABEL_82; /*0x7a37d5*/
          v34 = (WOLGameList *)&dword_B73AF8; /*0x7a37db*/
        }
        else
        {
          HashTable::Insert(&stru_B77D80, (const char **)v51, v53); /*0x7a37f7*/
          v39 = (String *)RA2_OPNEW(0x74u); /*0x7a37fe*/
          v40 = v39; /*0x7a3803*/
          if ( v39 ) /*0x7a380a*/
            unknown_libname_73(v39); /*0x7a380e*/
          else
            v40 = 0; /*0x7a3815*/
          String::Reassign(v40, (const char **)v51); /*0x7a381e*/
          qmemcpy(&v40->m_3[1], (const void *)v6, 0x6Cu); /*0x7a382d*/
          *(unsigned int *)v40[14].__pad_0 = 0; /*0x7a3833*/
          v41 = dword_B77D98(v51) & ((1 << dword_B77D8C) - 1); /*0x7a3854*/
          v42 = *(unsigned int *)(*(unsigned int *)stru_B77D80.__pad_0 + 4 * v41); /*0x7a3856*/
          *(unsigned int *)(*(unsigned int *)stru_B77D80.__pad_0 + 4 * v41) = v40; /*0x7a3859*/
          if ( v42 ) /*0x7a385e*/
            *(unsigned int *)v40[14].__pad_0 = v42; /*0x7a3860*/
          *(unsigned int *)&v51[84] = dword_B77D88; /*0x7a386f*/
          *(unsigned long long *)&v51[68] = (unsigned int)++dword_B77D84; /*0x7a3878*/
          *(unsigned int *)&v51[88] = 0; /*0x7a3882*/
          if ( (double)(unsigned int)dword_B77D84 / (double)dword_B77D88 < dbl_B77DA8 ) /*0x7a3899*/
            goto LABEL_82; /*0x7a3899*/
          v34 = (WOLGameList *)&stru_B77D80; /*0x7a389b*/
        }
        WOLGameList::GrowBuffer(v34); /*0x7a38a0*/
  LABEL_82:
        if ( dword_B76B10 || dword_B77E48 != 2 && dword_B77E48 != 3 ) /*0x7a38bf*/
          goto LABEL_113; /*0x7a38bf*/
        v43 = 0; /*0x7a38ca*/
        *(unsigned int *)&v51[28] = dword_B77900; /*0x7a38ce*/
        if ( (int)dword_B77900 <= 0 ) /*0x7a38d2*/
          goto LABEL_113; /*0x7a38d2*/
        v44 = 0; /*0x7a38d8*/
        while ( 1 ) /*0x7a38da*/
        {
          if ( v44 >= 0 && v43 < (int)dword_B77900 ) /*0x7a38e4*/
            qmemcpy(&v51[108], (char *)dword_B77908 + v44, 0x6Cu); /*0x7a38f7*/
          if ( !_strcmpi((char *)(*(unsigned int *)&v51[8] + 64), (char *)&v51[144]) ) /*0x7a3909*/
            break; /*0x7a3909*/
          ++v43; /*0x7a3919*/
          v44 += 108; /*0x7a391a*/
          if ( v43 >= *(int *)&v51[28] ) /*0x7a391f*/
            goto LABEL_113; /*0x7a391f*/
        }
        if ( v43 >= *(int *)&v51[28] ) /*0x7a392a*/
          goto LABEL_113; /*0x7a392a*/
        v45 = v43; /*0x7a3936*/
        if ( dword_B77900 ) /*0x7a393a*/
        {
          if ( v43 < 0 ) /*0x7a393e*/
            v45 = 0; /*0x7a3940*/
          if ( v45 >= (int)dword_B77900 ) /*0x7a3944*/
            v45 = dword_B77900 - 1; /*0x7a3946*/
          memcpy( /*0x7a3972*/
            (char *)dword_B77908 + 108 * v45,
            (char *)dword_B77908 + 108 * v45 + 108,
            108 * dword_B77900 - 36 * (3 * v45 + 3));
          --dword_B77900; /*0x7a3980*/
          if ( (int)(3 * dword_B77900) <= dword_B77904 ) /*0x7a398f*/
            WOLGameList::EnsureCapacity((WOLGameList *)&dword_B77900); /*0x7a3996*/
        }
        switch ( dword_B77E48 ) /*0x7a39a3*/
        {
          case 1: /*0x7a39a3*/
            v46 = 0; /*0x7a39a5*/
  LABEL_112:
            InsertGameSettings((char *)&v51[108], v46); /*0x7a39f3*/
            break; /*0x7a39f7*/
          case 2: /*0x7a39a3*/
            InsertBuddyList((const char *)&v51[108], 1); /*0x7a39b4*/
            break;
          case 3: /*0x7a39a3*/
            InsertBuddyList((const char *)&v51[108], 0); /*0x7a39c6*/
            break;
          case 4: /*0x7a39a3*/
            FindBuddyList(&v51[108], 1); /*0x7a39d8*/
            break;
          case 5: /*0x7a39a3*/
            FindBuddyList(&v51[108], 0); /*0x7a39ea*/
            break;
          default:
            v46 = 1; /*0x7a39f1*/
            goto LABEL_112; /*0x7a39f1*/
        }
  LABEL_113:
        if ( (uint8_t)String::Compare((String *)&v51[24], (const char **)v51) ) /*0x7a3a05*/
        {
          LoadPlayerProfile((ObjectClass *)&v51[12], (const char **)&dword_B73E40); /*0x7a3a17*/
          if ( *(unsigned int *)&v51[16] ) /*0x7a3a22*/
          {
            v47 = *(unsigned int **)&v51[8]; /*0x7a3a24*/
            if ( WOLGameList::Check(*(WOLGameList **)&v51[16], *(int *)&v51[8]) ) /*0x7a3a29*/
            {
              WOLGameList::UpdatePlayerStats(*(int *)&v51[16], v47); /*0x7a3a37*/
              SaveProfileWOL(*(int *)&v51[16], (const char **)v51); /*0x7a3a45*/
              v48 = (HWND)Dialog::FindByHandle((Dialog *)0x10E); /*0x7a3a4f*/
              if ( v48 || (v48 = (HWND)Dialog::FindByHandle((Dialog *)0x114)) != 0 ) /*0x7a3a64*/
                FillPersonaInfoWOL(*(int *)&v51[16], v48, (char **)&dword_B73E40, 0); /*0x7a3a72*/
            }
          }
          *(unsigned int *)&v51[12] = 0; /*0x7a3a7b*/
          ComPtr::Release((ComPtr *)&v51[12]); /*0x7a3a83*/
        }
        *(unsigned int *)&v51[8] = *(unsigned int *)(*(unsigned int *)&v51[8] + 60); /*0x7a3a93*/
        DeleteAndZero((ObjectClass *)v51); /*0x7a3a97*/
        v6 = *(unsigned int *)&v51[8]; /*0x7a3a9c*/
        v11 = *(HWND *)&v51[20]; /*0x7a3aa0*/
        v10 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x7a3aa4*/
        goto LABEL_121; /*0x7a3aa4*/
      }
  LABEL_122:
      if ( v11 ) /*0x7a3ab4*/
      {
        v10(v11, 0x186u, v57 - *(unsigned int *)&v51[56], 0); /*0x7a3acc*/
        InvalidateRect(v11, 0, 0); /*0x7a3ad3*/
      }
      else
      {
        DisplayRankingsWOL(0); /*0x7a3adf*/
      }
      SendGameListWOL(v50); /*0x7a3ae4*/
      v49 = (ObjectClass *)Dialog::FindByHandle((Dialog *)0x116); /*0x7a3aee*/
      if ( v49 ) /*0x7a3af5*/
        ShowUserProfileWOL(v49); /*0x7a3af9*/
      DeleteAndZero((ObjectClass *)&v51[24]); /*0x7a3b02*/
      DeleteAndZero::Alt((DeleteAndZero *)&v51[40]); /*0x7a3b0b*/
      DeleteAndZero::Alt((DeleteAndZero *)&v51[36]); /*0x7a3b14*/
    }
    return 0; /*0x7a3134*/
}
} // namespace gamemd

// 0x7ADA70
namespace gamemd {
char WOLGameList::EnsureCapacity() {
    int v2; // eax
    int WOLGameList_field_0x04; // ecx
    int v5; // ebx
    void *v6; // eax
    const void *WOLGameList_field_0x08; // esi
    int v8; // [esp+8h] [ebp-4h]

    v2 = *(unsigned int *)this->__pad_0; /*0x7ada75*/
    WOLGameList_field_0x04 = this->WOLGameList_field_0x04; /*0x7ada78*/
    if ( 3 * v2 > WOLGameList_field_0x04 ) /*0x7ada80*/
      return 0; /*0x7ada83*/
    v5 = WOLGameList_field_0x04 / 2; /*0x7ada8f*/
    if ( WOLGameList_field_0x04 / 2 < 10 ) /*0x7ada94*/
      v5 = 10; /*0x7ada96*/
    if ( v5 >= WOLGameList_field_0x04 ) /*0x7ada9d*/
      return 0; /*0x7adaa0*/
    v6 = (void *)RA2_OPNEW(108 * v5); /*0x7adab0*/
    WOLGameList_field_0x08 = (const void *)this->WOLGameList_field_0x08; /*0x7adab5*/
    v8 = (int)v6; /*0x7adabd*/
    if ( WOLGameList_field_0x08 ) /*0x7adac1*/
      qmemcpy(v6, WOLGameList_field_0x08, 108 * *(unsigned int *)this->__pad_0); /*0x7adad7*/
    RA2_OPDEL((void *)this->WOLGameList_field_0x08); /*0x7adae5*/
    this->WOLGameList_field_0x08 = v8; /*0x7adaf1*/
    this->WOLGameList_field_0x04 = v5; /*0x7adaf4*/
    return 1; /*0x7ada82*/
}
} // namespace gamemd

// 0x7AE020
namespace gamemd {
void WOLGameList::GrowBuffer() {
    int WOLGameList_field_0x08; // esi
    unsigned int *v3; // ebp
    int v4; // edi
    void *v5; // edi
    unsigned int v6; // edx
    int *v7; // edi
    int v8; // ebp
    int v9; // esi
    int v10; // edx
    int v11; // ecx
    int v12; // eax
    unsigned int *v13; // [esp+4h] [ebp-4h]

    if ( *((unsigned char *)this + 20) != 1 ) /*0x7ae028*/
    {
      WOLGameList_field_0x08 = this->WOLGameList_field_0x08; /*0x7ae030*/
      v3 = *(unsigned int **)this->__pad_0; /*0x7ae033*/
      v4 = this->WOLGameList_field_0x0C + 1; /*0x7ae03c*/
      this->WOLGameList_field_0x08 = 2 * WOLGameList_field_0x08; /*0x7ae03d*/
      v13 = v3; /*0x7ae040*/
      this->WOLGameList_field_0x0C = v4; /*0x7ae048*/
      v5 = (void *)RA2_OPNEW(8 * WOLGameList_field_0x08); /*0x7ae053*/
      v6 = 4 * this->WOLGameList_field_0x08; /*0x7ae058*/
      *(unsigned int *)this->__pad_0 = v5; /*0x7ae05f*/
      memset(v5, 0, v6); /*0x7ae064*/
      if ( WOLGameList_field_0x08 > 0 ) /*0x7ae06f*/
      {
        v7 = v3; /*0x7ae071*/
        v8 = WOLGameList_field_0x08; /*0x7ae073*/
        do /*0x7ae0a7*/
        {
          v9 = *v7; /*0x7ae075*/
          if ( *v7 ) /*0x7ae075*/
          {
            do /*0x7ae0a1*/
            {
              v10 = (*((int (__thiscall **)(int))this + 6))(v9) & ((1 << this->WOLGameList_field_0x0C) - 1); /*0x7ae08b*/
              v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x7ae08f*/
              *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x7ae095*/
              v12 = *(unsigned int *)(v9 + 112); /*0x7ae097*/
              *(unsigned int *)(v9 + 112) = v11; /*0x7ae09a*/
              v9 = v12; /*0x7ae09d*/
            }
            while ( v12 ); /*0x7ae0a1*/
          }
          ++v7; /*0x7ae0a3*/
          --v8; /*0x7ae0a6*/
        }
        while ( v8 ); /*0x7ae0a7*/
        v3 = v13; /*0x7ae0a9*/
      }
      RA2_OPDEL(v3); /*0x7ae0ae*/
    }
}
} // namespace gamemd

// 0x7B2F90
namespace gamemd {
int UDPInterfaceClass_Destru::GetQueueSize() {
    int result; // eax
    int v3; // eax
    int v4; // ecx
    int v5; // eax

    for ( result = *((unsigned int *)this + 64722); result; result = *((unsigned int *)this + 64722) ) /*0x7b2f9b*/
    {
      RA2_OPDEL(**((void ***)this + 64719)); /*0x7b2fa6*/
      v3 = *((unsigned int *)this + 64722); /*0x7b2fab*/
      if ( v3 > 0 ) /*0x7b2fb6*/
      {
        v4 = v3 - 1; /*0x7b2fb8*/
        v5 = 0; /*0x7b2fbb*/
        for ( *((unsigned int *)this + 64722) = v4; /*0x7b2fc5*/
              v5 < *((unsigned int *)this + 64722);
              *(unsigned int *)(*((unsigned int *)this + 64719) + 4 * v5 - 4) = *(unsigned int *)(*((unsigned int *)this + 64719) + 4 * v5) )
        {
          ++v5; /*0x7b2fcd*/
        }
      }
    }
    return result; /*0x7b2fe9*/
}
} // namespace gamemd

// 0x7B2FF0
namespace gamemd {
int UDPInterfaceClass_Destru::Flush(char *Buffer, u_short a3) {
    unsigned char *v4; // edi
    u_short v5; // ax
    int v6; // ecx
    UDPInterfaceClass *v7; // esi
    int result; // eax
    int v9; // ecx
    int v10; // edx
    char v11; // [esp+8h] [ebp-10h] BYREF
    char v12; // [esp+Ch] [ebp-Ch] BYREF
    char v13; // [esp+10h] [ebp-8h] BYREF
    char v14; // [esp+14h] [ebp-4h] BYREF

    v4 = (unsigned char *)RA2_OPNEW(4u); /*0x7b2ffe*/
    sscanf(Buffer, "%d.%d.%d.%d", &v11, &v12, &v13, &v14); /*0x7b301e*/
    *v4 = v11; /*0x7b302a*/
    v4[1] = v12; /*0x7b3030*/
    v5 = a3; /*0x7b3037*/
    v4[2] = v13; /*0x7b303b*/
    v4[3] = v14; /*0x7b3045*/
    if ( !a3 ) /*0x7b3048*/
      v5 = hostshort; /*0x7b304a*/
    v6 = *((unsigned int *)this + 64722); /*0x7b304f*/
    v7 = this + 32359; /*0x7b3055*/
    *((unsigned short *)&v7[3].Socket + v6) = v5; /*0x7b305b*/
    result = v7[1].Socket; /*0x7b3060*/
    if ( v7[2].Socket < result /*0x7b3088*/
      || (v7[1].__pad_5[0] || !result)
      && (v9 = *(unsigned int *)&v7[2].Initialized, v9 > 0)
      && (result = (*(int (__thiscall **)(UDPInterfaceClass *, int, unsigned int))(v7->Socket + 8))(v7, result + v9, 0),
          (unsigned char)result) )
    {
      result = v7[2].Socket; /*0x7b308a*/
      v10 = *(unsigned int *)&v7->Initialized; /*0x7b308d*/
      v7[2].Socket = result + 1; /*0x7b3093*/
      *(unsigned int *)(v10 + 4 * result) = v4; /*0x7b3096*/
    }
    return result; /*0x7b3099*/
}
} // namespace gamemd

// 0x7B30B0
namespace gamemd {
char UDPInterfaceClass_Destru::Send(u_short a2) {
    int v3; // eax
    int16_t v5; // ax
    SOCKET v6; // edx
    char optval[2]; // [esp+4h] [ebp-14h] BYREF
    int16_t v8; // [esp+6h] [ebp-12h]
    struct sockaddr name; // [esp+8h] [ebp-10h] BYREF

    if ( *((unsigned int *)this + 64539) != -1 ) /*0x7b30bf*/
    {
      closesocket(*((unsigned int *)this + 64539)); /*0x7b30c2*/
      *((unsigned int *)this + 64539) = -1; /*0x7b30c7*/
    }
    Debug::Log(); /*0x7b30d6*/
    v3 = socket(2, 2, 0); /*0x7b30e4*/
    *((unsigned int *)this + 64539) = v3; /*0x7b30ec*/
    if ( v3 == -1 ) /*0x7b30f2*/
      return 0; /*0x7b30f4*/
    name.sa_family = 2; /*0x7b3105*/
    if ( a2 ) /*0x7b310c*/
    {
      *((unsigned short *)this + 129406) = a2; /*0x7b310e*/
      v5 = htons(a2); /*0x7b3116*/
    }
    else
    {
      *((unsigned short *)this + 129406) = 0; /*0x7b3118*/
      v5 = htons(hostshort); /*0x7b3128*/
    }
    *(unsigned short *)name.sa_data = v5; /*0x7b312f*/
    *(unsigned int *)&name.sa_data[2] = htonl(0); /*0x7b313f*/
    Debug::Log(); /*0x7b3149*/
    if ( bind(*((unsigned int *)this + 64539), &name, 16) == -1 ) /*0x7b3168*/
    {
      WSAGetLastError(); /*0x7b316a*/
      Debug::Log(); /*0x7b3175*/
      (*(void (__thiscall **)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b3181*/
      return 0; /*0x7b3184*/
    }
    else
    {
      v6 = *((unsigned int *)this + 64539); /*0x7b318d*/
      *(unsigned short *)optval = 0; /*0x7b31a5*/
      v8 = 0; /*0x7b31ac*/
      setsockopt(v6, 0xFFFF, 128, optval, 4); /*0x7b31b3*/
      Socket::ConfigureBuffers((WinsockInterfaceClass *)this, 0xFFFFFFFF); /*0x7b31bc*/
      Debug::Log(); /*0x7b31c6*/
      return 1; /*0x7b31ce*/
    }
}
} // namespace gamemd

// 0x7B31E0
namespace gamemd {
char UDPInterfaceClass_Destru::SetAddress(u_short hostshort) {
    int v4; // ecx
    int v5; // eax
    UDPInterfaceClass *v6; // edx
    SOCKET v7; // esi
    struct sockaddr name; // [esp+10h] [ebp-10h] BYREF

    if ( !hostshort ) /*0x7b31f0*/
      return 0; /*0x7b31fb*/
    v4 = *((unsigned int *)this + 64716); /*0x7b31fe*/
    v5 = 0; /*0x7b3204*/
    if ( v4 > 0 ) /*0x7b3208*/
    {
      v6 = this + 32356; /*0x7b320a*/
      while ( IDA_LOWORD(v6->Socket) != hostshort ) /*0x7b3213*/
      {
        ++v5; /*0x7b3219*/
        v6 = (UDPInterfaceClass *)((char *)v6 + 2); /*0x7b321a*/
        if ( v5 >= v4 ) /*0x7b321f*/
          goto LABEL_7; /*0x7b321f*/
      }
      return 0; /*0x7b3213*/
    }
  LABEL_7:
    Debug::Log(); /*0x7b3221*/
    v7 = socket(2, 2, 0); /*0x7b3239*/
    if ( v7 == -1 ) /*0x7b323e*/
      return 0; /*0x7b3249*/
    Debug::Log(); /*0x7b3252*/
    name.sa_family = 2; /*0x7b325a*/
    *(unsigned short *)name.sa_data = htons(hostshort); /*0x7b3269*/
    *(unsigned int *)&name.sa_data[2] = htonl(0); /*0x7b3275*/
    Debug::Log(); /*0x7b3285*/
    if ( bind(v7, &name, 16) == -1 ) /*0x7b329d*/
    {
      closesocket(v7); /*0x7b32a0*/
      Debug::Log(); /*0x7b32ab*/
      return 0; /*0x7b32bc*/
    }
    *((unsigned short *)this + *((unsigned int *)this + 64716) + 129424) = hostshort; /*0x7b32c6*/
    *((unsigned int *)this + (*((unsigned int *)this + 64716))++ + 64704) = v7; /*0x7b32d6*/
    Socket::ConfigureBuffers((WinsockInterfaceClass *)this, v7); /*0x7b32ea*/
    Debug::Log(); /*0x7b32f4*/
    return 1; /*0x7b31f2*/
}
} // namespace gamemd

// 0x7B3430
namespace gamemd {
char UDPInterfaceClass_Destru::GetAddress() {
    if ( !(uint8_t)WinsockInterface::Init((WinsockInterface *)this) ) /*0x7b3433*/
      return 0; /*0x7b344a*/
    *((unsigned int *)this + 64716) = 0; /*0x7b343c*/
    return 1; /*0x7b3448*/
}
} // namespace gamemd

