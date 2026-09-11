// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x75F330
namespace gamemd {
char WaveClass::DamageArea(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall WaveClass::DamageArea(int *this, ObjectClass *aP1)
{
  int v3; // eax
  ObjectClass *v4; // ecx
  char *v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // edx
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h] BYREF

  v3 = *(this + 117); /*0x75f338*/
  if ( v3 ) /*0x75f340*/
  {
    v4 = aP1; /*0x75f346*/
    LOWORD(aP1) = *(_DWORD *)aP1->__pad_0 / 256; /*0x75f359*/
    HIWORD(aP1) = *(_DWORD *)&v4->__pad_0[4] / 256; /*0x75f372*/
    v5 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x75f391*/
    v6 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 117) + 1016))(*(this + 117), 0); /*0x75f395*/
    v7 = *(_DWORD *)v6; /*0x75f39b*/
    v15 = *(_DWORD *)(*(_DWORD *)v6 + 172); /*0x75f3a9*/
    v16 = *(_DWORD *)(*(_DWORD *)v6 + 152); /*0x75f3ad*/
    if ( (*((_DWORD *)v5 + 80) & 0x100) != 0 && *(this + 47) >= dword_B725C8 * (v5[283] + 4) ) /*0x75f3d5*/
      v8 = *((_DWORD *)v5 + 58); /*0x75f3d7*/
    else
      v8 = *((_DWORD *)v5 + 57); /*0x75f3df*/
    for ( ; v8; v8 = *(_DWORD *)(v8 + 48) ) /*0x75f3e7*/
    {
      v9 = *(this + 117); /*0x75f3e9*/
      if ( v8 != v9 && *(_BYTE *)(v8 + 144) && *(_BYTE *)(v8 + 116) && !*(_BYTE *)(v8 + 129) && *(int *)(v8 + 108) > 0 ) /*0x75f413*/
        (*(void (__thiscall **)(int, int *, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 364))( /*0x75f42c*/
          v8,
          &v16,
          0,
          v15,
          v9,
          0,
          0,
          0);
    }
    v10 = *((_DWORD *)v5 + 17); /*0x75f439*/
    if ( v10 != -1 ) /*0x75f43f*/
    {
      v11 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v10]; /*0x75f447*/
      if ( *(_BYTE *)(v11 + 689) ) /*0x75f44a*/
      {
        aP1 = (ObjectClass *)*((_DWORD *)v5 + 9); /*0x75f45b*/
        CellChainReact(); /*0x75f45f*/
      }
      if ( *(_BYTE *)(v11 + 680) ) /*0x75f464*/
        BuildingClass::SellEffects((int)v5, *(TechnoClass **)(v7 + 152)); /*0x75f477*/
    }
    LOBYTE(v3) = CellClass::IsActiveOrNext(v5); /*0x75f47e*/
    if ( (_BYTE)v3 ) /*0x75f486*/
    {
      v12 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6092); /*0x75f497*/
      v3 = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x63); /*0x75f4a3*/
      if ( v3 < v12 ) /*0x75f4aa*/
        LOBYTE(v3) = LayerClass::DestroyCliff((int *)&MEMORY[0x87F7E8], v13, (int)v5); /*0x75f4b2*/
    }
  }
  return v3; /*0x75f4b7*/
}
}
} // namespace gamemd

// 0x75F650
namespace gamemd {
int WaveClass::LoadWaveData(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall WaveClass::_vt05(#374 *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int Register; // ebp
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  int v13; // [esp+28h] [ebp-4h] BYREF

  v3 = a3; /*0x75f652*/
  v4 = a2; /*0x75f659*/
  Register = BuildingClass::SaveLoad_Register(this); /*0x75f664*/
  if ( Register >= 0 )
  {
    if ( v4 ) /*0x75f672*/
    {
      ObjectClass::Init((_DWORD *)v4, (int)&a3); /*0x75f67b*/
      *(_DWORD *)(v4 + 332) = 0; /*0x75f680*/
      *(_DWORD *)(v4 + 424) = 0; /*0x75f68c*/
      FrameSnapshot::Init((_WORD *)(v4 + 472)); /*0x75f692*/
      WaveClass::Constructor_7632D0((_DWORD *)(v4 + 496), 0, 0); /*0x75f69f*/
      *(_DWORD *)v4 = &WaveClass::`vftable'; /*0x75f6a4*/
      *(_DWORD *)(v4 + 4) = &WaveClass::`vftable'; /*0x75f6aa*/
      *(_DWORD *)(v4 + 8) = &WaveClass::`vftable'; /*0x75f6b1*/
      *(_DWORD *)(v4 + 12) = &off_7F6BC8; /*0x75f6b8*/
    }
    *(_DWORD *)(v4 + 332) = *(_DWORD *)(v4 + 176) == 3 ? v4 + 384 : v4 + 336;
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4 + 172)); /*0x75f6ee*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(v4 + 468)); /*0x75f6ff*/
    Register = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &a2, 4, 0); /*0x75f712*/
    if ( Register >= 0 ) /*0x75f716*/
    {
      v6 = a2; /*0x75f71c*/
      a3 = 0; /*0x75f720*/
      if ( a2 <= 0 ) /*0x75f726*/
      {
LABEL_17:
        v11 = 0; /*0x75f799*/
        if ( v6 > 0 ) /*0x75f79d*/
        {
          do /*0x75f7b8*/
            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v4 + 500) + 4 * v11++)); /*0x75f7ae*/
          while ( v11 < a2 ); /*0x75f7b8*/
        }
      }
      else
      {
        while ( 1 ) /*0x75f737*/
        {
          Register = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &v13, 4, 0); /*0x75f737*/
          if ( Register < 0 ) /*0x75f73b*/
            break; /*0x75f73b*/
          v7 = *(_DWORD *)(v4 + 504); /*0x75f73d*/
          if ( *(_DWORD *)(v4 + 512) < v7 /*0x75f76e*/
            || (*(_BYTE *)(v4 + 509) || !v7)
            && (v8 = *(_DWORD *)(v4 + 516), v8 > 0)
            && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(v4 + 496) + 8))(v4 + 496, v7 + v8, 0) )
          {
            v9 = *(_DWORD *)(v4 + 512); /*0x75f775*/
            v10 = *(_DWORD *)(v4 + 500); /*0x75f778*/
            *(_DWORD *)(v4 + 512) = v9 + 1; /*0x75f77e*/
            *(_DWORD *)(v10 + 4 * v9) = v13; /*0x75f785*/
          }
          v6 = a2; /*0x75f78c*/
          if ( ++a3 >= a2 ) /*0x75f797*/
            goto LABEL_17; /*0x75f797*/
        }
      }
    }
  }
  return Register; /*0x75f7ba*/
}
}
} // namespace gamemd

// 0x75F7D0
namespace gamemd {
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall WaveClass::_vt06(int *a1, int *a2, int a3)
{
  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix(a1, a2, a3); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = a1[128]; /*0x75f7f9*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (__stdcall **)(int *, int, int, _DWORD))(*a2 + 16))(a2, a1[125] + 4 * i, 4, 0); /*0x75f81f*/
      if ( result < 0 ) /*0x75f824*/
        break; /*0x75f824*/
    }
  }
  return result; /*0x75f82f*/
}
}
} // namespace gamemd

// 0x763200
namespace gamemd {
WaveClass * WaveClass::ddtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
WaveClass *__thiscall WaveClass::ddtor(void **this, char a2)
{
  int v3; // eax
  void *v4; // eax
  void **v6; // [esp+4h] [ebp-4h] BYREF

  *this = &WaveClass::`vftable'; /*0x763206*/
  *(this + 1) = &WaveClass::`vftable'; /*0x76320c*/
  *(this + 2) = &WaveClass::`vftable'; /*0x763213*/
  *(this + 3) = &off_7F6BC8; /*0x76321a*/
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x763221*/
  v6 = this; /*0x763236*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8EC38] + 16))(&MEMORY[0xA8EC38], &v6); /*0x76323a*/
  if ( v3 != -1 && v3 < MEMORY[0xA8EC48] && v3 < --MEMORY[0xA8EC48] ) /*0x763255*/
  {
    do /*0x76326d*/
    {
      ++v3; /*0x76325d*/
      *((_DWORD *)MEMORY[0xA8EC3C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8EC3C] + v3); /*0x763261*/
    }
    while ( v3 < MEMORY[0xA8EC48] ); /*0x76326d*/
  }
  (*((void (__thiscall **)(void **))*(this + 124) + 3))(this + 124); /*0x76327e*/
  v4 = *(this + 125); /*0x763281*/
  *(this + 124) = &VectorClass<CellClass *>::`vftable'; /*0x763284*/
  if ( v4 && *((_BYTE *)this + 509) ) /*0x76328e*/
  {
    __3_YAXPAX_Z(v4); /*0x763296*/
    *(this + 125) = 0; /*0x76329e*/
  }
  *((_BYTE *)this + 509) = 0; /*0x7632a7*/
  *(this + 126) = 0; /*0x7632ab*/
  ObjectClass::Dtor(this); /*0x7632b2*/
  if ( (a2 & 1) != 0 ) /*0x7632be*/
    __3_YAXPAX_Z(this); /*0x7632c1*/
  return (WaveClass *)this; /*0x7632cb*/
}
}
} // namespace gamemd

// 0x75F840
namespace gamemd {
int WaveClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448653;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd

// 0x75F880
namespace gamemd {
int WaveClass::GetObjectSize()
{
return 576;
}
} // namespace gamemd

// 0x75F890
namespace gamemd {
int WaveClass::CheckStateFlag()
{
return 3;
}
} // namespace gamemd

// 0x75F8A0
namespace gamemd {
int WaveClass::StubReturnFalse()
{
return 0;
}
} // namespace gamemd

// 0x7631F0
namespace gamemd {
int WaveClass::GetTypeIdentifier()
{
return 43;
}
} // namespace gamemd
