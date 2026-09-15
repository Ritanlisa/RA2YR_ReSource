// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x480180
void DSurface::Process(IUnknown * aP1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall DSurface::Process(int this, IUnknown *aP1, int *a2)
{
  TerrainClass::GenerateTexture( /*0x4801de*/
    **(_DWORD ***)&MEMORY[0xA8D63C].__pad_14B0[576],
    *(_DWORD *)MEMORY[0x87F69C]->__pad_0,
    0,
    *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
    aP1->field_0,
    aP1->field_4,
    *a2,
    (CCINIClass *)a2[1],
    a2[2],
    (IUnknown *)a2[3],
    *(char *)(this + 283),
    *(__int16 *)(this + 268),
    1,
    0,
    0,
    1,
    0,
    0);
}
}

// 0x4BA5A0
char * DSurface::Construct(IUnknown * aP1, DSurface * aP2, ObjectClass * aP3, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall DSurface::Construct(char *this, IUnknown *aP1, DSurface *aP2, ObjectClass *aP3, char a5)
{
  char *v6; // ebp
  ObjectClass *v7; // edi
  IUnknown *v8; // eax

  v6 = this + 28; /*0x4ba5b0*/
  this->DSurface_field_0x4 = aP1; /*0x4ba5b5*/
  this->DSurface_field_0x8 = aP2; /*0x4ba5b8*/
  this->DSurface_field_0xC = 0; /*0x4ba5bb*/
  this->DSurface_field_0x10 = 0; /*0x4ba5be*/
  this->DSurface_field_0x14 = 0; /*0x4ba5c1*/
  *(this + 24) = 0; /*0x4ba5c4*/
  *(this + 25) = 0; /*0x4ba5c7*/
  this->DSurface_field_0x1C = 0; /*0x4ba5ca*/
  this->DSurface_field_0x20 = 0; /*0x4ba5cd*/
  *(_DWORD *)this = &DSurface_Vtable; /*0x4ba5d0*/
  v7 = (ObjectClass *)__2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
  this->DSurface_field_0x20 = v7; /*0x4ba5e2*/
  if ( v7 ) /*0x4ba5e5*/
  {
    memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
    **((_DWORD **)this + 8) = 108; /*0x4ba5f7*/
    *(_DWORD *)(this->DSurface_field_0x20 + 4) = 7; /*0x4ba604*/
    *(_DWORD *)(this->DSurface_field_0x20 + 12) = aP1; /*0x4ba60e*/
    *(_DWORD *)(this->DSurface_field_0x20 + 8) = aP2; /*0x4ba618*/
    if ( (_BYTE)aP3 == 1 ) /*0x4ba621*/
      *(_DWORD *)(this->DSurface_field_0x20 + 104) = 2048; /*0x4ba626*/
    if ( MEMORY[0x89F690].__pad_14B0[687] && a5 ) /*0x4ba639*/
      *(_DWORD *)(this->DSurface_field_0x20 + 104) = 8256; /*0x4ba63e*/
    (*(void (__stdcall **)(_DWORD, _DWORD, char *, _DWORD))(**(_DWORD **)&MEMORY[0x89F690].__pad_71C[744] + 24))( /*0x4ba653*/
      *(_DWORD *)&MEMORY[0x89F690].__pad_71C[744],
      this->DSurface_field_0x20,
      this + 28,
      0);
    if ( *(_DWORD *)v6 ) /*0x4ba656*/
    {
      memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
      **((_DWORD **)this + 8) = 108; /*0x4ba66a*/
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)v6 + 88))(*(_DWORD *)v6, this->DSurface_field_0x20); /*0x4ba67a*/
      v8 = (IUnknown *)this->DSurface_field_0x20; /*0x4ba67d*/
      this->DSurface_field_0x10 = (unsigned int)(v8->field_54 + 7) >> 3; /*0x4ba689*/
      *(this + 25) = (*(_DWORD *)v8->__pad_68 & 0x4000) != 0; /*0x4ba695*/
    }
  }
  return this; /*0x4ba69a*/
}
}

// 0x4BA6B0
int DSurface::Destroy()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DSurface_Destroy(void *this)
{
  char v2; // al
  int v3; // eax
  int result; // eax

  v2 = (unsigned char)this->DSurface_field_0x18; /*0x4ba6b6*/
  *(_DWORD *)this = &DSurface_Vtable; /*0x4ba6b9*/
  if ( v2 ) /*0x4ba6c1*/
  {
    v3 = this->DSurface_field_0x1C; /*0x4ba6c3*/
    if ( v3 ) /*0x4ba6c8*/
    {
      if ( MEMORY[0x8A0DCC] ) /*0x4ba6d0*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 112))(v3, 0); /*0x4ba6d6*/
        (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0DCC] + 8))(MEMORY[0x8A0DCC]); /*0x4ba6e1*/
        MEMORY[0x8A0DCC] = 0; /*0x4ba6e4*/
      }
    }
  }
  __3_YAXPAX_Z(*((void **)this + 8)); /*0x4ba6ee*/
  result = this->DSurface_field_0x1C; /*0x4ba6f3*/
  this->DSurface_field_0x20 = 0; /*0x4ba6fb*/
  if ( result ) /*0x4ba6fe*/
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result); /*0x4ba703*/
  this->DSurface_field_0x1C = 0; /*0x4ba706*/
  *(_DWORD *)this = &Surface_Vtable; /*0x4ba709*/
  return result; /*0x4ba70f*/
}
}

// 0x4BA770
unsigned int * DSurface::CreatePrimary()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall DSurface_CreatePrimary(_DWORD *this)
{
  char v1; // bl
  const char *v2; // eax
  const char *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  void *v6; // edi
  _DWORD *v7; // ebp
  int *v8; // esi
  UINT v9; // eax
  UINT v10; // edi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  bool v14; // dl
  int v15; // edx
  int v16; // eax
  int v17; // edi
  HWND ActiveWindow; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // esi
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  int v30; // [esp+20h] [ebp-8h] BYREF
  int v31; // [esp+24h] [ebp-4h] BYREF

  Debug::Log(aDsurfaceCreate); /*0x4ba780*/
  v1 = DDraw::CheckCapabilities(); /*0x4ba78d*/
  MEMORY[0x8A0DEE] = 0; /*0x4ba78f*/
  if ( (v1 & 0x40) != 0 ) /*0x4ba799*/
  {
    MEMORY[0x8A0DEE] = 1; /*0x4ba79b*/
    v2 = g_Str_true; /*0x4ba7a2*/
  }
  else
  {
    v2 = g_Str_false; /*0x4ba7a9*/
  }
  Debug::Log("DSurface::AllowStretchBlits = %s\n", v2); /*0x4ba7b4*/
  if ( (v1 & 0x10) != 0 ) /*0x4ba7bf*/
  {
    v3 = g_Str_true; /*0x4ba7d1*/
    if ( g_DDraw_UseHWBlit == 1 ) /*0x4ba7d6*/
      goto LABEL_8; /*0x4ba7d6*/
  }
  else
  {
    g_DDraw_UseHWBlit = 0; /*0x4ba7c1*/
  }
  v3 = g_Str_false; /*0x4ba7d8*/
LABEL_8:
  Debug::Log("DSurface::AllowHWFill = %s\n", v3); /*0x4ba7dd*/
  v4 = __2_YAPAXI_Z(0x24u); /*0x4ba7ea*/
  v5 = v4; /*0x4ba7ef*/
  if ( v4 ) /*0x4ba7f8*/
  {
    v4[1] = 0; /*0x4ba7fc*/
    v4[2] = 0; /*0x4ba7ff*/
    v4[3] = 0; /*0x4ba802*/
    v4[4] = 0; /*0x4ba805*/
    v4[5] = 0; /*0x4ba808*/
    *((_BYTE *)v4 + 24) = 0; /*0x4ba80b*/
    *((_BYTE *)v4 + 25) = 0; /*0x4ba80e*/
    v4[7] = 0; /*0x4ba811*/
    *v4 = &DSurface_Vtable; /*0x4ba814*/
    v6 = __2_YAPAXI_Z(0x6Cu); /*0x4ba822*/
    v5[8] = v6; /*0x4ba82b*/
    v7 = v5; /*0x4ba82e*/
    memset(v6, 0, 0x6Cu); /*0x4ba830*/
    *(_DWORD *)v5[8] = 108; /*0x4ba835*/
  }
  else
  {
    v7 = 0; /*0x4ba83d*/
  }
  *(_DWORD *)(v7[8] + 4) = 1; /*0x4ba84d*/
  *(_DWORD *)(v7[8] + 104) = 512; /*0x4ba85b*/
  if ( this ) /*0x4ba862*/
  {
    *(_DWORD *)(v7[8] + 104) |= 0x18u; /*0x4ba86d*/
    *(_DWORD *)(v7[8] + 4) |= 0x20u; /*0x4ba879*/
    *(_DWORD *)(v7[8] + 20) = this != 0; /*0x4ba87f*/
  }
  Debug::Log(aDsurfaceCreate_0); /*0x4ba887*/
  v8 = v7 + 7; /*0x4ba897*/
  v9 = MEMORY[0x8A0094]->lpVtbl->CreateSurface( /*0x4ba8a1*/
         MEMORY[0x8A0094],
         (LPDDSURFACEDESC)v7[8],
         (LPDIRECTDRAWSURFACE *)(v7 + 7),
         0);
  v10 = v9; /*0x4ba8a4*/
  if ( !v9 ) /*0x4ba8a8*/
  {
    Debug::Log(aCreatesurfaceO); /*0x4ba8b3*/
    if ( this ) /*0x4ba8bd*/
    {
      v11 = *v8; /*0x4ba8bf*/
      v30 = 4; /*0x4ba8ca*/
      if ( !(*(int (__stdcall **)(int, int *, int *))(*(_DWORD *)v11 + 48))(v11, &v30, &v31) ) /*0x4ba8d6*/
      {
        if ( __2_YAPAXI_Z(0x24u) ) /*0x4ba8df*/
          v12 = DSurface::CreateBackBuffer(v31); /*0x4ba8f2*/
        else
          v12 = 0; /*0x4ba8f9*/
        *this = v12; /*0x4ba8ff*/
      }
    }
    memset((void *)v7[8], 0, 0x6Cu); /*0x4ba90b*/
    *(_DWORD *)v7[8] = 108; /*0x4ba910*/
    if ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)*v8 + 88))(*v8, v7[8]) ) /*0x4ba91f*/
      Debug::Log(aFailedToGetDes); /*0x4ba92b*/
    v13 = (_DWORD *)v7[8]; /*0x4ba933*/
    v7[4] = (unsigned int)(v13[21] + 7) >> 3; /*0x4ba948*/
    v14 = (v13[26] & 0x4000) != 0; /*0x4ba951*/
    *((_BYTE *)v7 + 24) = 1; /*0x4ba954*/
    *((_BYTE *)v7 + 25) = v14; /*0x4ba958*/
    v7[1] = v13[3]; /*0x4ba95e*/
    v15 = v13[2]; /*0x4ba961*/
    v16 = *v8; /*0x4ba964*/
    v7[2] = v15; /*0x4ba966*/
    MEMORY[0x8A009C] = v16; /*0x4ba969*/
    if ( !MEMORY[0x8A0094]->lpVtbl->CreateClipper(MEMORY[0x8A0094], 0, (LPDIRECTDRAWCLIPPER *)&MEMORY[0x8A0DCC], 0) ) /*0x4ba976*/
    {
      v17 = *(_DWORD *)MEMORY[0x8A0DCC]; /*0x4ba983*/
      ActiveWindow = GetActiveWindow(); /*0x4ba985*/
      if ( !(*(int (__stdcall **)(int, _DWORD, HWND))(v17 + 32))(MEMORY[0x8A0DCC], 0, ActiveWindow) ) /*0x4ba994*/
        (*(void (__stdcall **)(int, int))(*(_DWORD *)*v8 + 112))(*v8, MEMORY[0x8A0DCC]); /*0x4ba9a7*/
    }
    qmemcpy(&MEMORY[0x8A0948], (const void *)(v7[8] + 72), 0x20u); /*0x4ba9ba*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 112))(v7) != 2 ) /*0x4ba9c7*/
      goto LABEL_65; /*0x4ba9c7*/
    v19 = MEMORY[0x8A0958]; /*0x4ba9cd*/
    v20 = 0; /*0x4ba9d2*/
    v21 = 0; /*0x4ba9d4*/
    MEMORY[0x8A0DD0] = 0; /*0x4ba9d6*/
    MEMORY[0x8A0DD4] = 0; /*0x4ba9dc*/
    do /*0x4ba9ec*/
    {
      if ( (v19 & 1) != 0 ) /*0x4ba9e4*/
        break; /*0x4ba9e4*/
      v19 >>= 1; /*0x4ba9e6*/
      ++v20; /*0x4ba9e8*/
    }
    while ( v20 < 16 ); /*0x4ba9ec*/
    MEMORY[0x8A0DD0] = v20; /*0x4ba9ee*/
    do /*0x4ba9fe*/
    {
      if ( (v19 & 0x80u) != 0 ) /*0x4ba9f6*/
        break; /*0x4ba9f6*/
      LOBYTE(v19) = 2 * v19; /*0x4ba9f8*/
      ++v21; /*0x4ba9fa*/
    }
    while ( v21 < 8 ); /*0x4ba9fe*/
    v22 = MEMORY[0x8A095C]; /*0x4baa00*/
    v23 = 0; /*0x4baa05*/
    v24 = 0; /*0x4baa07*/
    MEMORY[0x8A0DD4] = v21; /*0x4baa09*/
    MEMORY[0x8A0DE0] = 0; /*0x4baa0f*/
    MEMORY[0x8A0DE4] = 0; /*0x4baa15*/
    do /*0x4baa25*/
    {
      if ( (v22 & 1) != 0 ) /*0x4baa1d*/
        break; /*0x4baa1d*/
      ++v23; /*0x4baa1f*/
      v22 >>= 1; /*0x4baa20*/
    }
    while ( v23 < 16 ); /*0x4baa25*/
    MEMORY[0x8A0DE0] = v23; /*0x4baa27*/
    do /*0x4baa37*/
    {
      if ( (v22 & 0x80u) != 0 ) /*0x4baa2f*/
        break; /*0x4baa2f*/
      ++v24; /*0x4baa31*/
      LOBYTE(v22) = 2 * v22; /*0x4baa32*/
    }
    while ( v24 < 8 ); /*0x4baa37*/
    v25 = MEMORY[0x8A0960]; /*0x4baa39*/
    v26 = 0; /*0x4baa3f*/
    v27 = 0; /*0x4baa41*/
    MEMORY[0x8A0DE4] = v24; /*0x4baa43*/
    MEMORY[0x8A0DD8] = 0; /*0x4baa49*/
    MEMORY[0x8A0DDC] = 0; /*0x4baa4e*/
    do /*0x4baa5f*/
    {
      if ( (v25 & 1) != 0 ) /*0x4baa57*/
        break; /*0x4baa57*/
      ++v26; /*0x4baa59*/
      v25 >>= 1; /*0x4baa5a*/
    }
    while ( v26 < 16 ); /*0x4baa5f*/
    MEMORY[0x8A0DD8] = v26; /*0x4baa61*/
    do /*0x4baa71*/
    {
      if ( (v25 & 0x80u) != 0 ) /*0x4baa69*/
        break; /*0x4baa69*/
      ++v27; /*0x4baa6b*/
      LOBYTE(v25) = 2 * v25; /*0x4baa6c*/
    }
    while ( v27 < 8 ); /*0x4baa71*/
    MEMORY[0x8A0DDC] = v27; /*0x4baa83*/
    g_DDraw_PixelFormat = -1; /*0x4baa89*/
    LOWORD(MEMORY[0x8A0DE8]) = (127 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4baac1*/
                             | (127 >> v24 << MEMORY[0x8A0DE0])
                             | (127 >> v27 << v26);
    HIWORD(MEMORY[0x8A0DE8]) = (63 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4baaff*/
                             | (63 >> v24 << MEMORY[0x8A0DE0])
                             | (63 >> v27 << v26);
    MEMORY[0x8A0DEC] = (31 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4bab38*/
                     | (31 >> v24 << MEMORY[0x8A0DE0])
                     | (31 >> v27 << v26);
    if ( v26 ) /*0x4bab3f*/
      goto LABEL_65; /*0x4bab3f*/
    if ( v27 == 3 ) /*0x4bab4c*/
    {
      if ( MEMORY[0x8A0DE0] != 5 ) /*0x4bab55*/
        goto LABEL_65; /*0x4bab55*/
      if ( v24 != 3 ) /*0x4bab5d*/
      {
        if ( v24 == 2 && MEMORY[0x8A0DD0] == 11 && MEMORY[0x8A0DD4] == 3 ) /*0x4babd2*/
        {
          g_DDraw_PixelFormat = 2; /*0x4babd9*/
          Debug::Log(g_Str_DSurface__Create_Primary_done); /*0x4babdf*/
          return v7; /*0x4babf0*/
        }
        goto LABEL_65; /*0x4babd2*/
      }
      if ( MEMORY[0x8A0DD0] == 10 ) /*0x4bab66*/
      {
        if ( MEMORY[0x8A0DD4] == 3 ) /*0x4bab72*/
        {
          g_DDraw_PixelFormat = 0; /*0x4bab7d*/
          Debug::Log(g_Str_DSurface__Create_Primary_done); /*0x4bab87*/
          return v7; /*0x4bab98*/
        }
        goto LABEL_65; /*0x4bab72*/
      }
      if ( MEMORY[0x8A0DD0] != 11 || MEMORY[0x8A0DD4] != 2 ) /*0x4bac05*/
      {
LABEL_65:
        Debug::Log(g_Str_DSurface__Create_Primary_done); /*0x4bac11*/
        return v7; /*0x4bac27*/
      }
    }
    else if ( v27 != 2 || MEMORY[0x8A0DE0] != 6 || v24 != 3 || MEMORY[0x8A0DD0] != 11 || MEMORY[0x8A0DD4] != 3 ) /*0x4babba*/
    {
      goto LABEL_65; /*0x4babba*/
    }
    g_DDraw_PixelFormat = 1; /*0x4bac07*/
    goto LABEL_65; /*0x4bac07*/
  }
  DDraw::LogError(v9); /*0x4bac2f*/
  Debug::Log("CreateSurface failed with error code %08x\n", v10); /*0x4bac3a*/
  if ( v7 ) /*0x4bac44*/
    (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x4bac4d*/
  return 0; /*0x4bab91*/
}
}

// 0x4BAC60
unsigned int * DSurface::CreateBackBuffer(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_4BAC60(_DWORD *this, int a2)
{
  void *v3; // edi
  _DWORD *v4; // eax

  *(this + 1) = 0; /*0x4bac6b*/
  *(this + 2) = 0; /*0x4bac6e*/
  *(this + 3) = 0; /*0x4bac71*/
  *(this + 4) = 0; /*0x4bac74*/
  *(this + 5) = 0; /*0x4bac77*/
  *((_BYTE *)this + 24) = 0; /*0x4bac7a*/
  *((_BYTE *)this + 25) = 0; /*0x4bac7d*/
  *(this + 7) = a2; /*0x4bac80*/
  *(this + 8) = 0; /*0x4bac83*/
  *this = &DSurface_Vtable; /*0x4bac86*/
  if ( a2 ) /*0x4bac8c*/
  {
    v3 = __2_YAPAXI_Z(0x6Cu); /*0x4bac96*/
    *(this + 8) = v3; /*0x4bac9f*/
    memset(v3, 0, 0x6Cu); /*0x4baca2*/
    *(_DWORD *)*(this + 8) = 108; /*0x4bacaa*/
    if ( !(*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 7) + 88))(*(this + 7), *(this + 8)) ) /*0x4bacba*/
    {
      v4 = (_DWORD *)*(this + 8); /*0x4bacc2*/
      *(this + 4) = (unsigned int)(v4[21] + 7) >> 3; /*0x4bacce*/
      *((_BYTE *)this + 25) = (v4[26] & 0x4000) != 0; /*0x4bacda*/
      *(this + 1) = v4[3]; /*0x4bace0*/
      *(this + 2) = v4[2]; /*0x4bace6*/
    }
  }
  return this; /*0x4baceb*/
}
}

// 0x4BAD60
int DSurface::GetBytesPerPixel()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DSurface_GetBytesPerPixel(_DWORD *this)
{
  return *(this + 4); /*0x4bad63*/
}
}

// 0x4BB000
char DSurface::RestoreIfLost()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DSurface_RestoreIfLost(int *this)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx

  if ( !MEMORY[0x89F978] && !MEMORY[0xA8ED80] ) /*0x4bb014*/
    return 0; /*0x4bb014*/
  v3 = *(this + 7); /*0x4bb01b*/
  if ( v3 && (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 96))(*(this + 7)) == -2005532222 ) /*0x4bb02d*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 108))(*(this + 7)) /*0x4bb042*/
      || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 96))(*(this + 7)) )
    {
      return 0; /*0x4bb01a*/
    }
    v4 = *(this + 3); /*0x4bb049*/
    if ( v4 > 0 ) /*0x4bb04e*/
    {
      v5 = *this; /*0x4bb050*/
      *(this + 3) = 0; /*0x4bb058*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v5 + 92))(this, 0, 0); /*0x4bb05b*/
      ++*(this + 3); /*0x4bb064*/
      (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bb069*/
      *(this + 3) = v4; /*0x4bb06c*/
    }
  }
  return 1; /*0x4bb016*/
}
}

// 0x4BB080
int DSurface::BlitPart(int a2, int a3, int a4, int a5, int a6)
{
{
    int v7;
    int v8;
    int v9;
    char v11[28];
    char v12[4];
    v7 = *(void**)this;
    v8 = (*(int (__thiscall **)(int, char *, int, int, int))(*(int *)(a3) + 120))(a3, v11, a4, a5, a6);
    v9 = this->GetRect(v12, a5, a3, v8);
    return (*(int (__thiscall **)(int *, int))(v7 + 12))(this, v9);
}
}

// 0x4BB0D0
char DSurface::Blit(int * a1, int * a2, unsigned int * a3, int * a4, DSurface * aP5, int a7, char a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DSurface::Blit(int *this, int *a1, int *a2, _DWORD *a3, int *a4, DSurface *aP5, int a7, char a8)
{
  int v9; // ecx
  void **v10; // ebx
  int v11; // ebx
  bool v12; // zf
  char v13; // al
  int v14; // eax
  int v15; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  DSurface *v20; // ecx
  void *v21; // eax
  char *v22; // edx
  void *v23; // ecx
  DSurface *v24; // edx
  int v25; // eax
  DSurface *v26; // ecx
  int v27; // edx
  int v28; // esi
  DSurface *v29; // eax
  bool v30; // cc
  int v31; // ebx
  DSurface *v32; // eax
  int v33; // edx
  int v34; // edi
  DSurface *v35; // eax
  int v36; // ebx
  DSurface *v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // edi
  int v41; // edx
  char v42; // [esp+1Bh] [ebp-85h]
  DSurface *v43; // [esp+1Ch] [ebp-84h] BYREF
  DSurface *v44; // [esp+20h] [ebp-80h]
  int v45; // [esp+24h] [ebp-7Ch]
  int v46; // [esp+28h] [ebp-78h]
  DSurface *v47; // [esp+2Ch] [ebp-74h]
  int v48; // [esp+30h] [ebp-70h]
  int v49; // [esp+34h] [ebp-6Ch]
  int v50; // [esp+38h] [ebp-68h]
  int *v51; // [esp+3Ch] [ebp-64h]
  int v52; // [esp+40h] [ebp-60h] BYREF
  int v53; // [esp+44h] [ebp-5Ch]
  int v54; // [esp+48h] [ebp-58h]
  int v55; // [esp+4Ch] [ebp-54h]
  _DWORD v56[2]; // [esp+50h] [ebp-50h] BYREF
  int v57; // [esp+58h] [ebp-48h]
  char *v58; // [esp+5Ch] [ebp-44h]
  DSurface *v59; // [esp+60h] [ebp-40h] BYREF
  char *aP2_4; // [esp+64h] [ebp-3Ch]
  unsigned int aP2_8; // [esp+68h] [ebp-38h]
  unsigned int aP2_12; // [esp+6Ch] [ebp-34h]
  DSurface *v63; // [esp+70h] [ebp-30h] BYREF
  DSurface *v64; // [esp+74h] [ebp-2Ch]
  int v65; // [esp+78h] [ebp-28h]
  int v66; // [esp+7Ch] [ebp-24h]
  int v67; // [esp+80h] [ebp-20h] BYREF
  DSurface *v68; // [esp+84h] [ebp-1Ch]
  int v69; // [esp+88h] [ebp-18h]
  int v70; // [esp+8Ch] [ebp-14h]
  int v71[4]; // [esp+90h] [ebp-10h] BYREF

  v9 = a1[2]; /*0x4bb0e1*/
  v51 = this; /*0x4bb0e8*/
  if ( v9 <= 0 /*0x4bb14e*/
    || a1[3] <= 0
    || a4[2] <= 0
    || a4[3] <= 0
    || a2[2] <= 0
    || a2[3] <= 0
    || (int)aP5->field_8 <= 0
    || (int)aP5->field_C <= 0 )
  {
    return 0; /*0x4bb14e*/
  }
  v10 = (void **)a3; /*0x4bb154*/
  v42 = 0; /*0x4bb15b*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 132))(a3) /*0x4bb19d*/
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 108))(a3) == 1
    || (_BYTE)a7 == 1
    || (v11 = (*(int (__thiscall **)(_DWORD *))(*a3 + 112))(a3),
        v12 = (*(int (__thiscall **)(int *))(*this + 112))(this) == v11,
        v10 = (void **)a3,
        !v12) )
  {
    v42 = 1; /*0x4bb19f*/
  }
  if ( (unsigned char)this->DSurface_field_0x18 == 1 && stru_89E138.__pad_14B0[912] == 1 ) /*0x4bb1b1*/
    v13 = 0; /*0x4bb1b3*/
  else
    v13 = a8; /*0x4bb1b7*/
  if ( !v42 /*0x4bb1f8*/
    && v13 == 1
    && (!*((_BYTE *)this + 25)
     || (*((unsigned __int8 (__thiscall **)(void **))*v10 + 33))(v10) == 1 && !*((_BYTE *)v10 + 25))
    && aP5->field_8 == (void *)a2[2]
    && aP5->field_C == (void *)a2[3] )
  {
    v42 = 1; /*0x4bb1fa*/
  }
  if ( !stru_89E138.__pad_14B0[912] && !HouseClass_Player.__pad_5568[23244] ) /*0x4bb20f*/
    return 0; /*0x4bb20f*/
  v14 = *(this + 7); /*0x4bb215*/
  if ( v14 && (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v14 + 96))(*(this + 7)) == -2005532222 ) /*0x4bb227*/
  {
    if ( (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 108))(*(this + 7)) /*0x4bb240*/
      || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 96))(*(this + 7)) )
    {
      return 0; /*0x4bb245*/
    }
    v47 = (DSurface *)*(this + 3); /*0x4bb250*/
    if ( (int)v47 > 0 ) /*0x4bb254*/
    {
      v15 = *this; /*0x4bb256*/
      *(this + 3) = 0; /*0x4bb25d*/
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v15 + 92))(this, 0, 0); /*0x4bb264*/
      ++*(this + 3); /*0x4bb26d*/
      (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bb273*/
      *(this + 3) = (int)v47; /*0x4bb27a*/
    }
  }
  if ( v42 == 1 ) /*0x4bb282*/
    return XSurface::BlitPart(this, (void **)a2, v10, (void **)aP5, (void **)a7, 1); /*0x4bb2a2*/
  v17 = a2[1]; /*0x4bb2a7*/
  v18 = a2[2]; /*0x4bb2aa*/
  v52 = *a2; /*0x4bb2ad*/
  v19 = a2[3]; /*0x4bb2b1*/
  v53 = v17; /*0x4bb2b4*/
  v20 = (DSurface *)aP5->field_0; /*0x4bb2b8*/
  v55 = v19; /*0x4bb2ba*/
  v21 = aP5->field_8; /*0x4bb2be*/
  v54 = v18; /*0x4bb2c1*/
  v22 = (char *)aP5->field_4; /*0x4bb2c5*/
  v59 = v20; /*0x4bb2c8*/
  v23 = aP5->field_C; /*0x4bb2cc*/
  aP2_8 = (unsigned int)v21; /*0x4bb2cf*/
  aP2_4 = v22; /*0x4bb2d3*/
  v24 = (DSurface *)*v10; /*0x4bb2d7*/
  aP2_12 = (unsigned int)v23; /*0x4bb2dd*/
  v25 = (*(int (__thiscall **)(void **, _DWORD *))&v24->__pad_2C[76])(v10, v56); /*0x4bb2e4*/
  v26 = 0; /*0x4bb2eb*/
  v27 = 0; /*0x4bb2ed*/
  v28 = 0; /*0x4bb2f1*/
  v43 = *(DSurface **)v25; /*0x4bb2f3*/
  v44 = *(DSurface **)(v25 + 4); /*0x4bb2fa*/
  v45 = *(_DWORD *)(v25 + 8); /*0x4bb301*/
  v46 = *(_DWORD *)(v25 + 12); /*0x4bb30f*/
  v48 = a4[2]; /*0x4bb318*/
  if ( v48 <= 0 ) /*0x4bb31c*/
    goto LABEL_53; /*0x4bb31c*/
  v49 = a4[3]; /*0x4bb327*/
  if ( v49 <= 0 || *(int *)(v25 + 8) <= 0 || *(int *)(v25 + 12) <= 0 ) /*0x4bb341*/
    goto LABEL_53; /*0x4bb341*/
  v29 = (DSurface *)*a4; /*0x4bb352*/
  v30 = (int)v43 < *a4; /*0x4bb354*/
  v50 = *a4; /*0x4bb356*/
  if ( v30 ) /*0x4bb35a*/
  {
    v45 += (char *)v43 - (char *)v29; /*0x4bb364*/
    v43 = (DSurface *)v50; /*0x4bb36c*/
  }
  if ( v45 < 1 ) /*0x4bb375*/
    goto LABEL_53; /*0x4bb375*/
  v47 = (DSurface *)a4[1]; /*0x4bb38b*/
  if ( (int)v44 < (int)v47 ) /*0x4bb38f*/
  {
    v46 += (char *)v44 - (char *)v47; /*0x4bb399*/
    v44 = v47; /*0x4bb3a1*/
  }
  if ( v46 < 1 ) /*0x4bb3aa*/
    goto LABEL_53; /*0x4bb3aa*/
  if ( (int)v43 + v45 > v48 + v50 ) /*0x4bb3be*/
    v45 = v48 + v50 - (_DWORD)v43; /*0x4bb3cc*/
  if ( v45 < 1 ) /*0x4bb3d5*/
    goto LABEL_53; /*0x4bb3d5*/
  v31 = v46; /*0x4bb3e5*/
  if ( (int)v44 + v46 > (int)v47 + v49 ) /*0x4bb3ed*/
    v31 = (char *)v47 + v49 - (char *)v44; /*0x4bb3f3*/
  if ( v31 < 1 ) /*0x4bb3f8*/
  {
LABEL_53:
    v32 = 0; /*0x4bb40a*/
  }
  else
  {
    v32 = v43; /*0x4bb3fa*/
    v26 = v44; /*0x4bb3fe*/
    v27 = v45; /*0x4bb402*/
    v28 = v31; /*0x4bb406*/
  }
  v64 = v26; /*0x4bb40c*/
  v63 = v32; /*0x4bb414*/
  v65 = v27; /*0x4bb418*/
  v33 = *v51; /*0x4bb41c*/
  v66 = v28; /*0x4bb426*/
  v34 = (*(int (__thiscall **)(int *, int *))(v33 + 120))(v51, v71); /*0x4bb439*/
  Rect::Set(&v43, 0, 0, 0, 0); /*0x4bb43b*/
  v35 = *(DSurface **)v34; /*0x4bb449*/
  v36 = a1[2]; /*0x4bb44b*/
  v37 = *(DSurface **)(v34 + 4); /*0x4bb450*/
  v38 = *(_DWORD *)(v34 + 8); /*0x4bb453*/
  v57 = v38; /*0x4bb456*/
  v39 = *(_DWORD *)(v34 + 12); /*0x4bb45a*/
  if ( v36 <= 0 ) /*0x4bb45d*/
    goto LABEL_71; /*0x4bb45d*/
  v48 = a1[3]; /*0x4bb468*/
  if ( v48 <= 0 || *(int *)(v34 + 8) <= 0 || *(int *)(v34 + 12) <= 0 ) /*0x4bb47a*/
    goto LABEL_71; /*0x4bb47a*/
  v40 = *a1; /*0x4bb483*/
  if ( (int)v35 < *a1 ) /*0x4bb488*/
  {
    v38 += (int)v35 - v40; /*0x4bb48c*/
    v35 = (DSurface *)*a1; /*0x4bb48e*/
    v57 = v38; /*0x4bb490*/
  }
  if ( v38 < 1 ) /*0x4bb497*/
    goto LABEL_71; /*0x4bb497*/
  v49 = a1[1]; /*0x4bb49e*/
  if ( (int)v37 < v49 ) /*0x4bb4a2*/
  {
    v39 += (int)v37 - v49; /*0x4bb4a6*/
    v37 = (DSurface *)v49; /*0x4bb4a8*/
  }
  if ( v39 < 1 ) /*0x4bb4ad*/
    goto LABEL_71; /*0x4bb4ad*/
  v41 = (int)v35 + v38 <= v40 + v36 ? v57 : v36 + v40 - (_DWORD)v35;
  if ( v41 < 1 ) /*0x4bb4c7*/
    goto LABEL_71; /*0x4bb4c7*/
  if ( (int)v37 + v39 > v49 + v48 ) /*0x4bb4d8*/
    v39 = v49 + v48 - (_DWORD)v37; /*0x4bb4dc*/
  if ( v39 < 1 ) /*0x4bb4e1*/
  {
LABEL_71:
    v35 = v43; /*0x4bb4e3*/
    v37 = v44; /*0x4bb4e7*/
    v41 = v45; /*0x4bb4eb*/
    v39 = v46; /*0x4bb4ef*/
  }
  v68 = v37; /*0x4bb4f3*/
  v69 = v41; /*0x4bb4f7*/
  v67 = (int)v35; /*0x4bb513*/
  v70 = v39; /*0x4bb51a*/
  if ( IntersectSurfaceRects((IUnknown *)&v52, (int)&v67, (XSurface *)&v59, (int)&v63) ) /*0x4bb521*/
  {
    v56[0] = v67 + v52; /*0x4bb544*/
    v56[1] = (char *)v68 + v53; /*0x4bb552*/
    v58 = (char *)v68 + v55 + v53; /*0x4bb56e*/
    v57 = v52 + v67 + v54; /*0x4bb576*/
    v43 = (DSurface *)((char *)v59 + (_DWORD)v63); /*0x4bb57d*/
    v44 = (DSurface *)&aP2_4[(_DWORD)v64]; /*0x4bb588*/
    v46 = (int)v64 + aP2_12 + (_DWORD)aP2_4; /*0x4bb5a0*/
    v45 = (int)v63 + aP2_8 + (_DWORD)v59; /*0x4bb5a4*/
    return (*(int (__stdcall **)(int, _DWORD *, _DWORD, DSurface **, int, _DWORD))(*(_DWORD *)v51[7] + 20))( /*0x4bb5d5*/
             v51[7],
             v56,
             a3[7],
             &v43,
             0x1000000,
             0) == 0;
  }
  return 0; /*0x4bb298*/
}
}

// 0x4BB620
char DSurface::FillRectEx(XSurface * aP1, int * a2, XSurface * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DSurface::FillRectEx(int *this, XSurface *aP1, int *a2, XSurface *aP3)
{
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  int *v8; // eax
  int *v9; // eax
  int ecx15a; // ecx
  int v11; // edx
  int v12; // eax
  int Width; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // edi
  IUnknown *v10; // edi
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // esi
  int v25; // [esp+20h] [ebp-B4h] BYREF
  int v26; // [esp+24h] [ebp-B0h]
  int v27; // [esp+28h] [ebp-ACh]
  int v28; // [esp+2Ch] [ebp-A8h]
  _DWORD v29[4]; // [esp+30h] [ebp-A4h] BYREF
  int v30[4]; // [esp+40h] [ebp-94h] BYREF
  _DWORD v31[4]; // [esp+50h] [ebp-84h] BYREF
  char v32[16]; // [esp+60h] [ebp-74h] BYREF
  _DWORD v33[25]; // [esp+70h] [ebp-64h] BYREF

  if ( *(this + 7) && a2[2] > 0 && a2[3] > 0 ) /*0x4bb64d*/
  {
    if ( !g_DDraw_UseHWBlit /*0x4bb675*/
      || (*(unsigned __int8 (__thiscall **)(int *))(*this + 108))(this)
      || (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)*(this + 7) + 52))(*(this + 7), 1) )
    {
      return XSurface::FillRectEx(this, aP1, a2, aP3); /*0x4bb81d*/
    }
    if ( MEMORY[0x89F690].__pad_2B8[48] || MEMORY[0xA8D63C].__pad_14B0[660] ) /*0x4bb690*/
    {
      v5 = *(this + 7); /*0x4bb696*/
      if ( !v5 || (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 96))(*(this + 7)) != -2005532222 ) /*0x4bb6a8*/
        goto LABEL_15; /*0x4bb6a8*/
      if ( !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 108))(*(this + 7)) /*0x4bb6c1*/
        && !(*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 7) + 96))(*(this + 7)) )
      {
        v6 = *(this + 3); /*0x4bb6cc*/
        if ( v6 > 0 ) /*0x4bb6d1*/
        {
          v7 = *this; /*0x4bb6d3*/
          *(this + 3) = 0; /*0x4bb6db*/
          (*(void (__thiscall **)(int *, _DWORD, _DWORD))(v7 + 92))(this, 0, 0); /*0x4bb6de*/
          ++*(this + 3); /*0x4bb6e7*/
          (*(void (__thiscall **)(int *))(*this + 96))(this); /*0x4bb6ec*/
          *(this + 3) = v6; /*0x4bb6ef*/
        }
LABEL_15:
        v8 = (int *)(*(int (__thiscall **)(int *, char *))(*this + 120))(this, v32); /*0x4bb6f2*/
        v9 = ClipRectIntersection(v31, (int *)aP1->__pad_0, v8, 0, 0); /*0x4bb710*/
        v30[0] = *v9; /*0x4bb719*/
        v30[1] = v9[1]; /*0x4bb722*/
        v30[2] = v9[2]; /*0x4bb729*/
        ecx15a = *a2; /*0x4bb72d*/
        v11 = v9[3]; /*0x4bb72f*/
        v12 = *(_DWORD *)aP1->__pad_0; /*0x4bb732*/
        Width = aP1->Width; /*0x4bb734*/
        v30[3] = v11; /*0x4bb737*/
        v14 = a2[1]; /*0x4bb73b*/
        v25 = ecx15a + v12; /*0x4bb740*/
        v15 = Width + v14; /*0x4bb748*/
        v16 = a2[2]; /*0x4bb74b*/
        v17 = a2[3]; /*0x4bb74e*/
        v26 = v15; /*0x4bb751*/
        v27 = v16; /*0x4bb755*/
        v28 = v17; /*0x4bb762*/
        v10 = (IUnknown *)ClipRectIntersection(v31, &v25, v30, 0, 0); /*0x4bb76b*/
        v19 = v10->field_0; /*0x4bb76d*/
        v25 = v10->field_0; /*0x4bb76f*/
        v20 = v10->field_4; /*0x4bb773*/
        v26 = v20; /*0x4bb776*/
        v21 = v10->field_8; /*0x4bb77a*/
        v27 = v21; /*0x4bb77d*/
        v22 = v10->field_C; /*0x4bb781*/
        v28 = v22; /*0x4bb786*/
        if ( v21 > 0 && v22 > 0 ) /*0x4bb792*/
        {
          v23 = *(this + 7); /*0x4bb79c*/
          v29[0] = v19; /*0x4bb79f*/
          v29[2] = v19 + v21; /*0x4bb7a3*/
          v29[3] = v20 + v22; /*0x4bb7a7*/
          v29[1] = v20; /*0x4bb7b6*/
          memset(v33, 0, sizeof(v33)); /*0x4bb7ba*/
          v33[20] = aP3; /*0x4bb7c8*/
          v33[0] = 100; /*0x4bb7da*/
          return (*(int (__stdcall **)(int, _DWORD *, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v23 + 20))( /*0x4bb7f9*/
                   v23,
                   v29,
                   0,
                   0,
                   16778240,
                   v33) == 0;
        }
      }
    }
  }
  return 0; /*0x4bb7ef*/
}
}

// 0x4BB830
namespace gamemd {
int DSurface_FillRectWithFlags()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __userpurge DSurface_FillRectWithFlags@<al>(int a1@<ecx>, int a2@<ebx>, int a3, _BYTE *a4, unsigned int a5)
{
  int *v7; // eax
  int v8; // ecx
  unsigned int v9; // ebp
  unsigned int v10; // esi
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned int v14; // edi
  int v15; // edx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // esi
  int v22; // edi
  unsigned __int16 *v23; // eax
  int v24; // eax
  __int16 v25; // bp
  int v26; // ebx
  int v27; // [esp+10h] [ebp-5Ch]
  __int16 v28; // [esp+14h] [ebp-58h]
  __int16 v29; // [esp+18h] [ebp-54h]
  unsigned __int16 v31; // [esp+20h] [ebp-4Ch]
  unsigned int v32; // [esp+24h] [ebp-48h]
  int v33; // [esp+28h] [ebp-44h]
  unsigned int v34; // [esp+2Ch] [ebp-40h]
  __int16 i; // [esp+38h] [ebp-34h]
  _BYTE v36[16]; // [esp+3Ch] [ebp-30h] BYREF
  int v37; // [esp+4Ch] [ebp-20h]
  int v38; // [esp+50h] [ebp-1Ch]
  int v39; // [esp+54h] [ebp-18h]
  int v40; // [esp+58h] [ebp-14h]
  int v41; // [esp+70h] [ebp+4h]
  _WORD *v42; // [esp+74h] [ebp+8h]
  unsigned int v43; // [esp+78h] [ebp+Ch]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 112))(a1) < 2 ) /*0x4bb845*/
    return 0; /*0x4bb847*/
  if ( *(int *)(a3 + 8) <= 0 || *(int *)(a3 + 12) <= 0 ) /*0x4bb863*/
    return 0; /*0x4bb865*/
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 120))(a1, v36); /*0x4bb87a*/
  v7 = (int *)ClipRectIntersection(a3, 0, 0); /*0x4bb888*/
  v37 = *v7; /*0x4bb891*/
  v38 = v7[1]; /*0x4bb898*/
  v39 = v7[2]; /*0x4bb89f*/
  v8 = v7[3]; /*0x4bb8a3*/
  v40 = v8; /*0x4bb8a8*/
  if ( v39 <= 0 || v8 <= 0 ) /*0x4bb8b0*/
    return 0; /*0x4bb8b2*/
  v9 = 0xFFu >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]; /*0x4bb8de*/
  v29 = v9; /*0x4bb8f1*/
  v10 = 0xFFu >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]; /*0x4bb8f5*/
  v28 = v10; /*0x4bb908*/
  v32 = 0xFFu >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]; /*0x4bb917*/
  v11 = (_DWORD *)CellStruct::Copy(v36); /*0x4bb91b*/
  v33 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 92))(a1, *v11, v11[1]); /*0x4bb938*/
  if ( !v33 ) /*0x4bb93c*/
    return 0; /*0x4bb93e*/
  v12 = a5; /*0x4bb94a*/
  if ( a5 > 0x64 ) /*0x4bb951*/
    v12 = 100; /*0x4bb953*/
  v13 = (1374389535 * (unsigned __int64)(unsigned int)(255 * v12)) >> 32; /*0x4bb967*/
  v14 = 255 * v12 / 0x64u; /*0x4bb970*/
  v31 = 255 - v14; /*0x4bb97b*/
  v43 = v14; /*0x4bb983*/
  v41 = 0; /*0x4bb987*/
  LOWORD(a2) = (unsigned __int8)(a4[2] >> MEMORY[0x8A0DDC]); /*0x4bb99a*/
  LOWORD(v13) = (unsigned __int8)(a4[1] >> MEMORY[0x8A0DE4]); /*0x4bb9b1*/
  v15 = v13 << MEMORY[0x8A0DE0]; /*0x4bb9b5*/
  v16 = v15 | (a2 << MEMORY[0x8A0DD8]); /*0x4bb9c5*/
  LOWORD(v15) = (unsigned __int8)(*a4 >> MEMORY[0x8A0DD4]); /*0x4bb9ca*/
  v17 = (v15 << MEMORY[0x8A0DD0]) | v16; /*0x4bb9d2*/
  for ( i = v17; v41 < v40; ++v41 ) /*0x4bb9da*/
  {
    v27 = 0; /*0x4bb9ed*/
    v18 = v41 * ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1) / 2); /*0x4bb9fa*/
    if ( v39 > 0 ) /*0x4bba01*/
    {
      v9 = (unsigned __int16)v9; /*0x4bba0f*/
      v19 = (unsigned __int16)v10; /*0x4bba15*/
      v20 = v14 * (v10 & (unsigned __int16)v17); /*0x4bba23*/
      v21 = v14 * (unsigned __int16)(v17 & v9); /*0x4bba26*/
      v22 = v43 * (unsigned __int16)(v17 & v32); /*0x4bba4b*/
      v23 = (unsigned __int16 *)(v33 + 2 * v18); /*0x4bba50*/
      v34 = (unsigned __int16)v9; /*0x4bba53*/
      v42 = v23; /*0x4bba57*/
      while ( 1 ) /*0x4bba68*/
      {
        v24 = *v23; /*0x4bba68*/
        v25 = v28 & ((v20 + v31 * (v24 & v19)) >> 8) | v29 & ((v21 + v31 * (v24 & v9)) >> 8); /*0x4bba8b*/
        v26 = (unsigned __int16)(v24 & v32); /*0x4bba91*/
        v23 = v42 + 1; /*0x4bba9c*/
        *v42++ = ((v22 + (unsigned int)v31 * v26) >> 8) | v25; /*0x4bbaa8*/
        if ( ++v27 >= v39 ) /*0x4bbabb*/
          break; /*0x4bbabb*/
        v9 = v34; /*0x4bba5d*/
      }
      LOWORD(v10) = v28; /*0x4bbabd*/
      LOWORD(v17) = i; /*0x4bbac1*/
      LOWORD(v9) = v29; /*0x4bbac5*/
      v14 = v43; /*0x4bbac9*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x4bbae8*/
  return 1; /*0x4bb849*/
}
}
} // namespace gamemd

// 0x4BBB00
void DSurface::BlitStretch(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_4BBB00(int a1, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int i; // ebp
  unsigned __int8 *v7; // ecx
  int v8; // esi
  int v9; // edi
  int v10; // edx
  bool v11; // zf
  int v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]

  v3 = a2; /*0x4bbb05*/
  if ( a2 >= 1 && a2 - 1 >= 0 )
  {
    v12 = 0; /*0x4bbb24*/
    v13 = a2; /*0x4bbb2c*/
    while ( 1 )
    {
      v5 = v3 <= 1 ? 0x10000 : v12 / (v3 - 1);
      for ( i = 0; i < 256; ++i ) /*0x4bbb4c*/
      {
        v7 = (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256); /*0x4bbb67*/
        v8 = (v5 * *v7) >> 16; /*0x4bbb84*/
        v9 = (v5 * v7[1]) >> 16; /*0x4bbb87*/
        v10 = (v5 * v7[2]) >> 16; /*0x4bbb8a*/
        if ( v8 >= 255 ) /*0x4bbb93*/
          v8 = 255; /*0x4bbb95*/
        if ( v9 >= 255 ) /*0x4bbba0*/
          v9 = 255; /*0x4bbba2*/
        if ( v10 >= 255 ) /*0x4bbbad*/
          v10 = 255; /*0x4bbbaf*/
        a1 += 2; /*0x4bbbba*/
        *(_WORD *)(a1 - 2) = (v8 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x4bbbec*/
                           | (v9 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                           | (v10 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
      }
      v11 = v13 == 1; /*0x4bbc0a*/
      v12 += 0x20000; /*0x4bbc0b*/
      --v13; /*0x4bbc0f*/
      if ( v11 ) /*0x4bbc13*/
        break; /*0x4bbc13*/
      v3 = a2; /*0x4bbb32*/
    }
  }
}
}

// 0x4BBCA0
char DSurface::DrawLineModulated(int * a1, int a2, int a3, unsigned int * a4, unsigned int * a5, int a6, int a7, int a8, char a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall DSurface_DrawLineModulated(
        int *a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // eax
  int v10; // eax
  int *v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // ecx
  int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rcx
  int v19; // edi
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  int v22; // eax
  unsigned int v23; // eax
  double v24; // st7
  int v25; // eax
  double v26; // st6
  double v27; // st7
  int v28; // eax
  unsigned int v29; // eax
  int v30; // ebx
  int v31; // esi
  int v32; // ebp
  int v33; // ecx
  int v34; // ebp
  int v35; // esi
  int v36; // edi
  int v37; // ebp
  int v38; // eax
  int v39; // ecx
  int v40; // esi
  int v41; // eax
  int v42; // edx
  int v43; // ebp
  _DWORD *v44; // esi
  unsigned __int16 v45; // ax
  int v46; // edx
  int v47; // eax
  int v48; // esi
  int v49; // edi
  _WORD *v50; // eax
  int v51; // edx
  _WORD *v52; // ecx
  int v53; // ecx
  _WORD *v54; // eax
  bool v55; // zf
  _DWORD *v57; // edx
  unsigned __int16 v58; // ax
  int v59; // edx
  int v60; // eax
  int v61; // esi
  int v62; // esi
  _WORD *v63; // eax
  _WORD *v64; // ecx
  int v65; // ecx
  _WORD *v66; // eax
  _DWORD *v67; // esi
  unsigned __int16 v68; // ax
  int v69; // edx
  int v70; // eax
  int v71; // esi
  int v72; // edx
  _WORD *v73; // eax
  int v74; // ecx
  int v75; // edi
  _WORD *v76; // eax
  _WORD *v77; // ecx
  int v78; // [esp+1Ch] [ebp-68h]
  int v79; // [esp+20h] [ebp-64h]
  int v80; // [esp+24h] [ebp-60h]
  int v81; // [esp+28h] [ebp-5Ch]
  int v82; // [esp+2Ch] [ebp-58h]
  int v83; // [esp+30h] [ebp-54h]
  int v84; // [esp+34h] [ebp-50h]
  int v85; // [esp+34h] [ebp-50h]
  int v86; // [esp+34h] [ebp-50h]
  _DWORD v87[2]; // [esp+38h] [ebp-4Ch] BYREF
  int v88; // [esp+40h] [ebp-44h] BYREF
  int v89; // [esp+44h] [ebp-40h]
  _DWORD v90[5]; // [esp+50h] [ebp-34h] BYREF
  __int64 v91; // [esp+64h] [ebp-20h]
  __int64 v92; // [esp+6Ch] [ebp-18h]
  int v93; // [esp+74h] [ebp-10h] BYREF
  int v94; // [esp+78h] [ebp-Ch]
  int v95; // [esp+7Ch] [ebp-8h]
  int v96; // [esp+80h] [ebp-4h]
  int v97; // [esp+88h] [ebp+4h]
  int v98; // [esp+88h] [ebp+4h]
  int v99; // [esp+8Ch] [ebp+8h]
  int v100; // [esp+90h] [ebp+Ch]
  int v101; // [esp+90h] [ebp+Ch]
  int v102; // [esp+90h] [ebp+Ch]
  int v103; // [esp+90h] [ebp+Ch]
  int v104; // [esp+98h] [ebp+14h]
  int v105; // [esp+98h] [ebp+14h]
  _WORD *v106; // [esp+9Ch] [ebp+18h]

  v9 = *a1; /*0x4bbca3*/
  v90[0] = a1; /*0x4bbcae*/
  v10 = (*(int (__stdcall **)(_DWORD *))(v9 + 120))(&v90[1]); /*0x4bbcb2*/
  v11 = (int *)ClipRectIntersection(v10, 0, 0); /*0x4bbcc2*/
  v12 = *v11; /*0x4bbcc9*/
  v93 = *v11; /*0x4bbccb*/
  v13 = v11[1]; /*0x4bbccf*/
  v94 = v13; /*0x4bbcd2*/
  v95 = v11[2]; /*0x4bbcd9*/
  v14 = v11[3]; /*0x4bbcdd*/
  v96 = v14; /*0x4bbce2*/
  if ( v95 || v14 ) /*0x4bbcea*/
  {
    LODWORD(v16) = v12 + *a4; /*0x4bbd08*/
    LODWORD(v18) = v12 + *a5; /*0x4bbd0a*/
    v15 = a8; /*0x4bbd0c*/
    HIDWORD(v16) = v13 + a4[1]; /*0x4bbd13*/
    v17 = v16; /*0x4bbd15*/
    HIDWORD(v18) = v13 + a5[1]; /*0x4bbd17*/
    v19 = a7; /*0x4bbd19*/
    v91 = v16; /*0x4bbd22*/
    v92 = v18; /*0x4bbd2a*/
    if ( (int)v16 > (int)v18 ) /*0x4bbd32*/
    {
      v17 = v18; /*0x4bbd34*/
      v19 = a8; /*0x4bbd36*/
      v15 = a7; /*0x4bbd38*/
      v91 = v18; /*0x4bbd3f*/
      v92 = v16; /*0x4bbd47*/
    }
    *(_QWORD *)&v90[1] = v92; /*0x4bbd5b*/
    v20 = v17; /*0x4bbd60*/
    v21 = HIDWORD(v91); /*0x4bbd62*/
    if ( (unsigned __int8)ClipLine(&v93) ) /*0x4bbd72*/
    {
      v100 = v15; /*0x4bbd8d*/
      v104 = v19; /*0x4bbd94*/
      if ( v92 != *(_QWORD *)&v90[1] ) /*0x4bbd9b*/
      {
        v87[0] = v20 - v92; /*0x4bbdb3*/
        v87[1] = v21 - HIDWORD(v92); /*0x4bbdb7*/
        v88 = v20 - v90[1]; /*0x4bbdc7*/
        v89 = v21 - v90[2]; /*0x4bbdcb*/
        v97 = Vector::2DMagnitudeMath(&v88); /*0x4bbddc*/
        v22 = Vector::2DMagnitudeMath(v87); /*0x4bbde0*/
        v23 = abs32(Math::RoundToInt((double)v22 / (double)v97 * (double)(v19 - v15))); /*0x4bbe13*/
        if ( v19 >= v15 ) /*0x4bbe17*/
          v100 = v19 - v23; /*0x4bbe28*/
        else
          v100 = v19 + v23; /*0x4bbe1b*/
      }
      if ( v91 != __PAIR64__(v21, v20) ) /*0x4bbe39*/
      {
        v88 = v91 - v90[1]; /*0x4bbe52*/
        v89 = HIDWORD(v91) - v90[2]; /*0x4bbe56*/
        v24 = Math::Sqrt( /*0x4bbe73*/
                (double)((int)v91 - v90[1]) * (double)((int)v91 - v90[1])
              + (double)(HIDWORD(v91) - v90[2]) * (double)(HIDWORD(v91) - v90[2]));
        v25 = Math::RoundToInt(v24); /*0x4bbe78*/
        v88 = v20 - v90[1]; /*0x4bbe90*/
        v89 = v21 - v90[2]; /*0x4bbe94*/
        v26 = (double)(int)(v20 - v90[1]); /*0x4bbe9c*/
        *(double *)&v90[1] = (double)v25; /*0x4bbea7*/
        v27 = Math::Sqrt(v26 * v26 + (double)v89 * (double)v89); /*0x4bbebc*/
        v28 = Math::RoundToInt(v27); /*0x4bbec4*/
        v29 = abs32(Math::RoundToInt(*(double *)&v90[1] / (double)v28 * (double)(v19 - v15))); /*0x4bbef7*/
        if ( v15 <= v19 ) /*0x4bbefb*/
          v104 = v15 + v29; /*0x4bbf0a*/
        else
          v104 = v15 - v29; /*0x4bbeff*/
      }
      v30 = v90[0]; /*0x4bbf11*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v90[0] + 112))(v90[0]); /*0x4bbf19*/
      v31 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v30 + 92))(v30, v91, HIDWORD(v91)); /*0x4bbf33*/
      v98 = v31; /*0x4bbf37*/
      if ( MEMORY[0x887644] ) /*0x4bbf3b*/
      {
        v32 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4bbf45*/
        v90[2] = HIDWORD(v91); /*0x4bbf4c*/
        v106 = (_WORD *)Audio::GetSamplePosition(v91, HIDWORD(v91) - v32); /*0x4bbf5d*/
        v83 = -1; /*0x4bbf6d*/
        LOWORD(v33) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4bbf79*/
        v99 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4bbf80*/
        v34 = v104; /*0x4bbf8b*/
        v105 = v104 + v33 - HIDWORD(v91) - v94; /*0x4bbf96*/
        if ( v31 ) /*0x4bbf9d*/
        {
          v35 = HIDWORD(v92) - HIDWORD(v91); /*0x4bbfb6*/
          v36 = v92 - v91; /*0x4bbfba*/
          v84 = v92 - v91; /*0x4bbfc0*/
          v37 = v100 - v34; /*0x4bbfc4*/
          v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 116))(v30); /*0x4bbfc6*/
          v82 = v38; /*0x4bbfcb*/
          if ( v35 < 0 ) /*0x4bbfcf*/
          {
            v82 = -v38; /*0x4bbfd3*/
            v99 = -v99; /*0x4bbfe0*/
            v83 = 1; /*0x4bbfe7*/
          }
          v78 = 1; /*0x4bbff6*/
          v39 = abs32(v35); /*0x4bc000*/
          if ( v37 < 0 ) /*0x4bc004*/
            v78 = -1; /*0x4bc006*/
          v40 = 2 * v39; /*0x4bc010*/
          v79 = 2 * v39; /*0x4bc016*/
          v41 = abs32(v37); /*0x4bc01a*/
          v42 = 2 * v36; /*0x4bc01c*/
          v80 = 2 * v36; /*0x4bc021*/
          v43 = 2 * v41; /*0x4bc025*/
          v81 = 2 * v41; /*0x4bc028*/
          if ( v41 > v36 && v41 > v39 ) /*0x4bc034*/
          {
            v87[0] = v40 - v41; /*0x4bc03e*/
            v85 = v42 - v41; /*0x4bc048*/
            if ( v41 > 0 ) /*0x4bc04c*/
            {
              v44 = MEMORY[0x887644]; /*0x4bc052*/
              v101 = 0; /*0x4bc058*/
              v88 = v41; /*0x4bc05f*/
              do /*0x4bc27e*/
              {
                if ( (unsigned __int16)v105 < *v106 ) /*0x4bc075*/
                {
                  v45 = *(_WORD *)(v101 + v98); /*0x4bc092*/
                  LOBYTE(v90[1]) = (unsigned __int8)(v45 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bc0ab*/
                  BYTE1(v90[1]) = (unsigned __int8)(v45 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bc0cc*/
                  BYTE2(v90[1]) = (unsigned __int8)(v45 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bc0d2*/
                  v46 = ((a6 * LOBYTE(v90[1])) >> 8) + LOBYTE(v90[1]); /*0x4bc0f7*/
                  v47 = ((a6 * BYTE2(v90[1])) >> 8) + BYTE2(v90[1]); /*0x4bc11e*/
                  if ( v47 > 255 ) /*0x4bc125*/
                    v47 = 255; /*0x4bc127*/
                  v48 = 255; /*0x4bc132*/
                  if ( ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]) <= 255 ) /*0x4bc137*/
                    v48 = ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]); /*0x4bc139*/
                  if ( v46 > 255 ) /*0x4bc141*/
                    v46 = 255; /*0x4bc143*/
                  *(_WORD *)(v101 + v98) = (v47 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bc17b*/
                                         | (v48 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                         | (v46 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
                  if ( a9 ) /*0x4bc188*/
                    *v106 = v105; /*0x4bc199*/
                  v44 = MEMORY[0x887644]; /*0x4bc19c*/
                }
                v49 = v87[0]; /*0x4bc1a2*/
                if ( v87[0] <= 0 ) /*0x4bc1a8*/
                {
                  v51 = v105; /*0x4bc213*/
                }
                else
                {
                  v49 = v87[0] - v81; /*0x4bc1c6*/
                  v98 += v82; /*0x4bc1c8*/
                  v50 = &v106[v99]; /*0x4bc1ce*/
                  if ( v99 <= 0 ) /*0x4bc1d1*/
                  {
                    v52 = &v106[v99]; /*0x4bc1f2*/
                    if ( (unsigned int)v50 < v44[6] ) /*0x4bc1f6*/
                      v52 = (_WORD *)((char *)v50 + v44[8]); /*0x4bc1fb*/
                    v106 = v52; /*0x4bc208*/
                    v51 = v83 + v105; /*0x4bc20f*/
                  }
                  else
                  {
                    if ( (unsigned int)v50 >= v44[7] ) /*0x4bc1d6*/
                      v50 = (_WORD *)((char *)v50 - v44[8]); /*0x4bc1d8*/
                    v106 = v50; /*0x4bc1e2*/
                    v51 = v83 + v105; /*0x4bc1e9*/
                  }
                }
                v53 = v85; /*0x4bc21a*/
                if ( v85 > 0 ) /*0x4bc220*/
                {
                  v54 = v106 + 1; /*0x4bc233*/
                  v101 += 2; /*0x4bc23b*/
                  if ( (unsigned int)(v106 + 1) >= v44[7] ) /*0x4bc242*/
                    v54 = (_WORD *)((char *)v54 - v44[8]); /*0x4bc244*/
                  v106 = v54; /*0x4bc247*/
                  v53 = v85 - v81; /*0x4bc252*/
                }
                v105 = v78 + v51; /*0x4bc25e*/
                v85 = v80 + v53; /*0x4bc26b*/
                v55 = v88 == 1; /*0x4bc275*/
                v87[0] = v79 + v49; /*0x4bc276*/
                --v88; /*0x4bc27a*/
              }
              while ( !v55 ); /*0x4bc27e*/
            }
            goto LABEL_48; /*0x4bc27e*/
          }
          if ( v36 <= v39 ) /*0x4bc29b*/
          {
            v88 = v42 - v39; /*0x4bc501*/
            v87[0] = v43 - v39; /*0x4bc50b*/
            if ( v39 > 0 ) /*0x4bc50f*/
            {
              v67 = MEMORY[0x887644]; /*0x4bc515*/
              v103 = 0; /*0x4bc51b*/
              v86 = v39; /*0x4bc522*/
              do /*0x4bc728*/
              {
                if ( (unsigned __int16)v105 < *v106 ) /*0x4bc538*/
                {
                  v68 = *(_WORD *)(v103 + v98); /*0x4bc555*/
                  LOBYTE(v90[1]) = (unsigned __int8)(v68 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bc56e*/
                  BYTE1(v90[1]) = (unsigned __int8)(v68 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bc58f*/
                  BYTE2(v90[1]) = (unsigned __int8)(v68 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bc595*/
                  v69 = ((a6 * LOBYTE(v90[1])) >> 8) + LOBYTE(v90[1]); /*0x4bc5ba*/
                  v70 = ((a6 * BYTE2(v90[1])) >> 8) + BYTE2(v90[1]); /*0x4bc5e1*/
                  if ( v70 > 255 ) /*0x4bc5e8*/
                    v70 = 255; /*0x4bc5ea*/
                  v71 = 255; /*0x4bc5f5*/
                  if ( ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]) <= 255 ) /*0x4bc5fa*/
                    v71 = ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]); /*0x4bc5fc*/
                  if ( v69 > 255 ) /*0x4bc604*/
                    v69 = 255; /*0x4bc606*/
                  *(_WORD *)(v103 + v98) = (v70 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bc63e*/
                                         | (v71 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                         | (v69 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
                  if ( a9 ) /*0x4bc64b*/
                    *v106 = v105; /*0x4bc65c*/
                  v67 = MEMORY[0x887644]; /*0x4bc65f*/
                }
                v72 = v88; /*0x4bc665*/
                if ( v88 <= 0 ) /*0x4bc66b*/
                {
                  v73 = v106; /*0x4bc698*/
                }
                else
                {
                  v73 = v106 + 1; /*0x4bc67e*/
                  v103 += 2; /*0x4bc686*/
                  if ( (unsigned int)(v106 + 1) >= v67[7] ) /*0x4bc68d*/
                    v73 = (_WORD *)((char *)v73 - v67[8]); /*0x4bc68f*/
                  v72 = v88 - v79; /*0x4bc692*/
                }
                v74 = v87[0]; /*0x4bc69f*/
                v75 = v105; /*0x4bc6a3*/
                if ( v87[0] > 0 ) /*0x4bc6ac*/
                {
                  v75 = v78 + v105; /*0x4bc6b6*/
                  v74 = v87[0] - v79; /*0x4bc6b8*/
                }
                v88 = v80 + v72; /*0x4bc6c4*/
                v87[0] = v81 + v74; /*0x4bc6d5*/
                v76 = &v73[v99]; /*0x4bc6e2*/
                v98 += v82; /*0x4bc6e4*/
                if ( v99 <= 0 ) /*0x4bc6ea*/
                {
                  v77 = v76; /*0x4bc700*/
                  if ( (unsigned int)v76 < v67[6] ) /*0x4bc704*/
                    v77 = (_WORD *)((char *)v76 + v67[8]); /*0x4bc709*/
                  v106 = v77; /*0x4bc70b*/
                }
                else
                {
                  if ( (unsigned int)v76 >= v67[7] ) /*0x4bc6ef*/
                    v76 = (_WORD *)((char *)v76 - v67[8]); /*0x4bc6f1*/
                  v106 = v76; /*0x4bc6f4*/
                }
                v55 = v86 == 1; /*0x4bc71c*/
                v105 = v83 + v75; /*0x4bc71d*/
                --v86; /*0x4bc724*/
              }
              while ( !v55 ); /*0x4bc728*/
            }
            goto LABEL_48; /*0x4bc728*/
          }
          v102 = 0; /*0x4bc2a3*/
          v88 = v40 - v36; /*0x4bc2ac*/
          v87[0] = v43 - v36; /*0x4bc2b6*/
          if ( v36 <= 0 ) /*0x4bc2ba*/
          {
LABEL_48:
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v90[0] + 96))(v90[0]); /*0x4bc284*/
            return 1; /*0x4bc296*/
          }
          v57 = MEMORY[0x887644]; /*0x4bc2c0*/
          while ( 1 ) /*0x4bc2c6*/
          {
            if ( (unsigned __int16)v105 < *v106 ) /*0x4bc2d8*/
            {
              v58 = *(_WORD *)(v98 + 2 * v102); /*0x4bc2f5*/
              LOBYTE(v90[1]) = (unsigned __int8)(v58 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bc30e*/
              BYTE1(v90[1]) = (unsigned __int8)(v58 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bc32f*/
              BYTE2(v90[1]) = (unsigned __int8)(v58 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bc335*/
              v59 = ((a6 * LOBYTE(v90[1])) >> 8) + LOBYTE(v90[1]); /*0x4bc35a*/
              v60 = ((a6 * BYTE2(v90[1])) >> 8) + BYTE2(v90[1]); /*0x4bc381*/
              if ( v60 > 255 ) /*0x4bc388*/
                v60 = 255; /*0x4bc38a*/
              v61 = 255; /*0x4bc395*/
              if ( ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]) <= 255 ) /*0x4bc39a*/
                v61 = ((a6 * BYTE1(v90[1])) >> 8) + BYTE1(v90[1]); /*0x4bc39c*/
              if ( v59 > 255 ) /*0x4bc3a4*/
                v59 = 255; /*0x4bc3a6*/
              *(_WORD *)(v98 + 2 * v102) = (v60 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bc3de*/
                                         | (v61 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                         | (v59 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a9 ) /*0x4bc3eb*/
                *v106 = v105; /*0x4bc3fc*/
              v57 = MEMORY[0x887644]; /*0x4bc3ff*/
            }
            v62 = v88; /*0x4bc405*/
            if ( v88 <= 0 ) /*0x4bc40b*/
            {
              v63 = v106; /*0x4bc47c*/
              goto LABEL_71; /*0x4bc47c*/
            }
            v62 = v88 - v80; /*0x4bc429*/
            v98 += v82; /*0x4bc42b*/
            v63 = &v106[v99]; /*0x4bc431*/
            if ( v99 <= 0 ) /*0x4bc434*/
              break; /*0x4bc434*/
            if ( (unsigned int)v63 < v57[7] ) /*0x4bc439*/
              goto LABEL_69; /*0x4bc439*/
            v63 = (_WORD *)((char *)v63 - v57[8]); /*0x4bc445*/
            v105 += v83; /*0x4bc44d*/
LABEL_71:
            v65 = v87[0]; /*0x4bc483*/
            if ( v87[0] > 0 ) /*0x4bc489*/
            {
              v105 += v78; /*0x4bc49c*/
              v65 = v87[0] - v80; /*0x4bc4a3*/
            }
            v66 = v63 + 1; /*0x4bc4a9*/
            v88 = v79 + v62; /*0x4bc4ae*/
            v87[0] = v81 + v65; /*0x4bc4b8*/
            if ( (unsigned int)v66 >= v57[7] ) /*0x4bc4c1*/
              v66 = (_WORD *)((char *)v66 - v57[8]); /*0x4bc4c3*/
            v106 = v66; /*0x4bc4ca*/
            if ( ++v102 >= v84 ) /*0x4bc4e2*/
              goto LABEL_48; /*0x4bc4e2*/
          }
          v64 = &v106[v99]; /*0x4bc459*/
          if ( (unsigned int)v63 < v57[6] ) /*0x4bc45d*/
            v64 = (_WORD *)((char *)v63 + v57[8]); /*0x4bc462*/
          v63 = v64; /*0x4bc464*/
LABEL_69:
          v105 += v83; /*0x4bc466*/
          goto LABEL_71; /*0x4bc47a*/
        }
      }
    }
  }
  return 0; /*0x4bc28d*/
}
}

// 0x4BC750
char DSurface::DrawLineFaded(int a2, unsigned int * a3, int * a4, unsigned char * a5, int a6, int a7, char a8, float a9, char a10, char a11, float a12)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DSurface_DrawLineFaded(
        void *this,
        int a2,
        _DWORD *a3,
        int *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        char a8,
        float a9,
        char a10,
        char a11,
        float a12)
{
  int *v13; // esi
  int v14; // eax
  int v15; // edx
  int *v16; // eax
  int v17; // esi
  int *v18; // eax
  int v19; // edx
  int v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // ebx
  int v26; // ebx
  int v27; // edi
  int v28; // edx
  int v29; // esi
  int v30; // ebx
  int v31; // ebp
  int v32; // eax
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // eax
  void *v38; // esi
  int v39; // edi
  int v41; // ebx
  _WORD *v42; // eax
  int v43; // ebp
  int v44; // edi
  int v45; // esi
  int v46; // ebx
  int v47; // eax
  int v48; // ecx
  int v49; // esi
  int v50; // ebp
  signed int v51; // eax
  int v52; // ecx
  int v53; // eax
  _DWORD *v54; // ebx
  int v55; // ebp
  int v56; // esi
  int v57; // eax
  int v58; // edx
  int v59; // ebx
  int v60; // edi
  int v61; // esi
  int v62; // ecx
  int v63; // eax
  int v64; // edx
  int v65; // edx
  int v66; // esi
  int v67; // eax
  _WORD *v68; // eax
  _WORD *v69; // edx
  _WORD *v70; // ecx
  _DWORD *v71; // ebp
  _WORD *v72; // edi
  int v73; // esi
  _WORD *v74; // eax
  _WORD *v75; // eax
  _WORD *v76; // eax
  _DWORD *v77; // edi
  _DWORD *v78; // ebx
  int v79; // esi
  int v80; // eax
  int v81; // ebp
  int v82; // esi
  int v83; // edi
  int v84; // ebx
  int v85; // edx
  int v86; // ecx
  int v87; // eax
  int v88; // esi
  int v89; // esi
  int v90; // edx
  int v91; // esi
  int v92; // eax
  unsigned int v93; // ecx
  _WORD *v94; // eax
  _WORD *v95; // ecx
  _WORD *v96; // eax
  _WORD *v97; // ecx
  _WORD *v98; // edx
  _WORD *v99; // eax
  bool v100; // zf
  int v101; // eax
  _DWORD *v102; // edi
  _DWORD *v103; // ebx
  int v104; // esi
  int v105; // eax
  int v106; // ebp
  int v107; // esi
  int v108; // edi
  int v109; // ebx
  int v110; // edx
  int v111; // ecx
  int v112; // eax
  int v113; // esi
  int v114; // esi
  int v115; // edx
  int v116; // esi
  int v117; // eax
  _WORD *v118; // eax
  _WORD *v119; // edx
  _WORD *v120; // ecx
  _WORD *v121; // esi
  _WORD *v122; // eax
  int v123; // eax
  _WORD *v124; // eax
  _WORD *v125; // eax
  bool v126; // cc
  int v127; // eax
  _DWORD *v128; // ebx
  int v129; // esi
  int v130; // eax
  int v131; // ebp
  int v132; // esi
  int v133; // edi
  int v134; // ebx
  int v135; // edx
  int v136; // ecx
  int v137; // eax
  int v138; // esi
  int v139; // esi
  int v140; // edx
  int v141; // esi
  int v142; // eax
  _WORD *v143; // eax
  _WORD *v144; // edx
  int v145; // ecx
  int v146; // ebp
  _WORD *v147; // eax
  _WORD *v148; // ecx
  _WORD *v149; // edx
  _WORD *v150; // eax
  int v151; // [esp+10h] [ebp-C4h]
  int v152; // [esp+10h] [ebp-C4h]
  int v153; // [esp+10h] [ebp-C4h]
  int v154; // [esp+10h] [ebp-C4h]
  int v155; // [esp+10h] [ebp-C4h]
  int v156; // [esp+14h] [ebp-C0h]
  int v157; // [esp+14h] [ebp-C0h]
  int v158; // [esp+14h] [ebp-C0h]
  int v159; // [esp+14h] [ebp-C0h]
  _WORD *v160; // [esp+18h] [ebp-BCh]
  int v161; // [esp+1Ch] [ebp-B8h]
  int v162; // [esp+1Ch] [ebp-B8h]
  int v163; // [esp+20h] [ebp-B4h]
  int v164; // [esp+20h] [ebp-B4h]
  int v165; // [esp+20h] [ebp-B4h]
  int v166; // [esp+20h] [ebp-B4h]
  int v167; // [esp+20h] [ebp-B4h]
  int v168; // [esp+24h] [ebp-B0h]
  int v169; // [esp+24h] [ebp-B0h]
  int v170; // [esp+24h] [ebp-B0h]
  int v171; // [esp+28h] [ebp-ACh]
  _WORD *v172; // [esp+2Ch] [ebp-A8h]
  int v173; // [esp+30h] [ebp-A4h]
  int v174; // [esp+30h] [ebp-A4h]
  int v175; // [esp+30h] [ebp-A4h]
  int v176; // [esp+30h] [ebp-A4h]
  int v177; // [esp+30h] [ebp-A4h]
  int v178; // [esp+34h] [ebp-A0h]
  int v179; // [esp+38h] [ebp-9Ch]
  int v180; // [esp+3Ch] [ebp-98h]
  int v181; // [esp+3Ch] [ebp-98h]
  int v182; // [esp+3Ch] [ebp-98h]
  int v183; // [esp+3Ch] [ebp-98h]
  int v184; // [esp+40h] [ebp-94h]
  int v185; // [esp+40h] [ebp-94h]
  int v186; // [esp+40h] [ebp-94h]
  int v187; // [esp+40h] [ebp-94h]
  int v188; // [esp+44h] [ebp-90h]
  int v189; // [esp+44h] [ebp-90h]
  int v190; // [esp+48h] [ebp-8Ch]
  int v191; // [esp+48h] [ebp-8Ch]
  int v192; // [esp+48h] [ebp-8Ch]
  int v193; // [esp+4Ch] [ebp-88h]
  int v194; // [esp+4Ch] [ebp-88h]
  int v195; // [esp+4Ch] [ebp-88h]
  int v196; // [esp+4Ch] [ebp-88h]
  int v197; // [esp+50h] [ebp-84h]
  __int16 v198; // [esp+50h] [ebp-84h]
  int v199; // [esp+50h] [ebp-84h]
  int v200; // [esp+50h] [ebp-84h]
  int v201; // [esp+54h] [ebp-80h]
  _DWORD v202[2]; // [esp+58h] [ebp-7Ch] BYREF
  int v203; // [esp+60h] [ebp-74h]
  int v204; // [esp+64h] [ebp-70h]
  int v205; // [esp+6Ch] [ebp-68h]
  int v206; // [esp+70h] [ebp-64h]
  int v207; // [esp+74h] [ebp-60h]
  int v208; // [esp+78h] [ebp-5Ch]
  int v209; // [esp+7Ch] [ebp-58h] BYREF
  int v210; // [esp+80h] [ebp-54h]
  void *v211; // [esp+84h] [ebp-50h]
  int v212; // [esp+88h] [ebp-4Ch]
  int v213; // [esp+8Ch] [ebp-48h]
  int v214; // [esp+90h] [ebp-44h]
  int v215; // [esp+94h] [ebp-40h]
  int v216; // [esp+98h] [ebp-3Ch]
  int v217; // [esp+9Ch] [ebp-38h] BYREF
  int v218; // [esp+A0h] [ebp-34h]
  int v219; // [esp+ACh] [ebp-28h]
  int v220; // [esp+B0h] [ebp-24h]
  int v221; // [esp+B4h] [ebp-20h] BYREF
  int v222; // [esp+B8h] [ebp-1Ch]
  int v223; // [esp+BCh] [ebp-18h]
  int v224; // [esp+C0h] [ebp-14h]
  int v225; // [esp+C4h] [ebp-10h] BYREF
  int v226; // [esp+C8h] [ebp-Ch]
  int v227; // [esp+CCh] [ebp-8h]
  int v228; // [esp+D0h] [ebp-4h]

  v211 = this; /*0x4bc763*/
  if ( !MEMORY[0x8A0DF1] ) /*0x4bc76a*/
  {
    MEMORY[0x8A0DF1] = 1; /*0x4bc76c*/
    v207 = 0; /*0x4bc773*/
    v13 = MEMORY[0x8A0980]; /*0x4bc77b*/
    do /*0x4bc7c0*/
    {
      v14 = Math::RoundToInt((pow((double)v207 * 0.0078125 - 1.0, 3.0) + 1.0) * 128.0); /*0x4bc7a7*/
      v15 = v207; /*0x4bc7ac*/
      *v13++ = v14; /*0x4bc7b0*/
      v207 = v15 + 1; /*0x4bc7bc*/
    }
    while ( (int)v13 <= (int)&MEMORY[0x8A0D80] ); /*0x4bc7c0*/
  }
  v16 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 120))(this, &v217); /*0x4bc7ce*/
  v221 = *v16; /*0x4bc7d9*/
  v222 = v16[1]; /*0x4bc7e4*/
  v223 = v16[2]; /*0x4bc7ef*/
  v17 = v16[3]; /*0x4bc7f9*/
  v223 -= 2; /*0x4bc7fc*/
  ++v222; /*0x4bc80a*/
  ++v221; /*0x4bc823*/
  v224 = v17 - 2; /*0x4bc82a*/
  v18 = (int *)ClipRectIntersection(&v221, 0, 0); /*0x4bc831*/
  v19 = *v18; /*0x4bc838*/
  v225 = *v18; /*0x4bc83a*/
  v20 = v18[1]; /*0x4bc841*/
  v226 = v20; /*0x4bc844*/
  v227 = v18[2]; /*0x4bc84e*/
  v21 = v18[3]; /*0x4bc855*/
  v228 = v21; /*0x4bc85a*/
  if ( !v227 && !v21 ) /*0x4bc865*/
    return 0; /*0x4bc865*/
  v219 = *a5; /*0x4bc876*/
  v207 = a5[1]; /*0x4bc882*/
  v208 = a5[2]; /*0x4bc88d*/
  v22 = *a3 + v19; /*0x4bc89d*/
  v23 = v20 + a3[1]; /*0x4bc8a6*/
  v24 = v22; /*0x4bc8a8*/
  v25 = *a4; /*0x4bc8aa*/
  v205 = v22; /*0x4bc8ac*/
  v206 = v23; /*0x4bc8b2*/
  v26 = v25 + v19; /*0x4bc8b6*/
  v27 = a6; /*0x4bc8bb*/
  v28 = v20 + a4[1]; /*0x4bc8c2*/
  v29 = a7; /*0x4bc8c4*/
  v215 = v26; /*0x4bc8cd*/
  v216 = v28; /*0x4bc8d4*/
  if ( v22 > v26 ) /*0x4bc8db*/
  {
    v24 = v26; /*0x4bc8dd*/
    v27 = a7; /*0x4bc8df*/
    v29 = a6; /*0x4bc8e1*/
    v205 = v26; /*0x4bc8e8*/
    v206 = v28; /*0x4bc8ec*/
    v215 = v22; /*0x4bc8f0*/
    v216 = v23; /*0x4bc8f7*/
  }
  v217 = v215; /*0x4bc913*/
  v30 = v24; /*0x4bc91b*/
  v31 = v206; /*0x4bc91d*/
  v218 = v216; /*0x4bc92c*/
  if ( !(unsigned __int8)ClipLine(&v225) ) /*0x4bc933*/
    return 0; /*0x4bc93a*/
  v173 = v29; /*0x4bc957*/
  v151 = v27; /*0x4bc95b*/
  if ( v215 != v217 || v216 != v218 ) /*0x4bc968*/
  {
    v202[0] = v30 - v215; /*0x4bc979*/
    v202[1] = v206 - v216; /*0x4bc97d*/
    v209 = v30 - v217; /*0x4bc990*/
    v210 = v206 - v218; /*0x4bc994*/
    v193 = Vector::2DMagnitudeMath(&v209); /*0x4bc9a8*/
    v32 = Vector::2DMagnitudeMath(v202); /*0x4bc9ac*/
    v33 = abs32(Math::RoundToInt((double)v32 / (double)v193 * (double)(v27 - v29))); /*0x4bc9d3*/
    if ( v27 >= v29 ) /*0x4bc9d7*/
      v173 = v27 - v33; /*0x4bc9e5*/
    else
      v173 = v27 + v33; /*0x4bc9db*/
  }
  v34 = v205; /*0x4bc9e9*/
  v35 = v206; /*0x4bc9ed*/
  if ( v205 != v30 || v206 != v31 ) /*0x4bc9f7*/
  {
    v209 = v205 - v217; /*0x4bca16*/
    v210 = v206 - v218; /*0x4bca23*/
    v217 = v30 - v217; /*0x4bca2a*/
    v218 = v31 - v218; /*0x4bca31*/
    v194 = Vector::2DMagnitudeMath(&v217); /*0x4bca41*/
    v36 = Vector::2DMagnitudeMath(&v209); /*0x4bca45*/
    v37 = abs32(Math::RoundToInt((double)v36 / (double)v194 * (double)(v27 - v29))); /*0x4bca6c*/
    if ( v29 <= v27 ) /*0x4bca70*/
      v151 = v29 + v37; /*0x4bca7c*/
    else
      v151 = v29 - v37; /*0x4bca74*/
    v35 = v206; /*0x4bca80*/
    v34 = v205; /*0x4bca84*/
  }
  v38 = v211; /*0x4bca88*/
  v39 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)v211 + 92))(v211, v34, v35); /*0x4bca9e*/
  v178 = v39; /*0x4bcaa2*/
  if ( !MEMORY[0x887644] ) /*0x4bcaa6*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)v38 + 96))(v38); /*0x4bcaac*/
    return 0; /*0x4bcabb*/
  }
  v41 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4bcac2*/
  v218 = v206; /*0x4bcac9*/
  v160 = (_WORD *)Audio::GetSamplePosition(v205, v206 - v41); /*0x4bcadf*/
  v42 = (_WORD *)StreamClass::ReadAndSeek(v205 - *(_DWORD *)MEMORY[0x87E8A4], v206 - *((_DWORD *)MEMORY[0x87E8A4] + 1)); /*0x4bcaf6*/
  v172 = v42; /*0x4bcb0c*/
  v43 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4bcb14*/
  LOWORD(v42) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4bcb17*/
  v212 = v43; /*0x4bcb1b*/
  v203 = -1; /*0x4bcb22*/
  v171 = (int)v42 + v151 - v226 - v206; /*0x4bcb36*/
  if ( !v39 ) /*0x4bcb3a*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)v211 + 96))(v211); /*0x4bdeee*/
    return 0; /*0x4bdef4*/
  }
  v44 = v215 - v205; /*0x4bcb56*/
  v45 = v216 - v206; /*0x4bcb5f*/
  v168 = v215 - v205; /*0x4bcb65*/
  v46 = v173 - v151; /*0x4bcb69*/
  v47 = (*(int (__thiscall **)(void *))(*(_DWORD *)v211 + 116))(v211); /*0x4bcb6b*/
  v48 = v47; /*0x4bcb6e*/
  v213 = v47; /*0x4bcb72*/
  if ( v45 < 0 ) /*0x4bcb79*/
  {
    v48 = -v47; /*0x4bcb7b*/
    v213 = -v47; /*0x4bcb7f*/
    v212 = -v43; /*0x4bcb86*/
    v203 = 1; /*0x4bcb8d*/
  }
  v214 = 1; /*0x4bcb97*/
  v49 = abs32(v45); /*0x4bcba9*/
  v50 = v48 / 2; /*0x4bcbb4*/
  if ( v46 < 0 ) /*0x4bcbb8*/
    v214 = -1; /*0x4bcbba*/
  v202[0] = 2 * v49; /*0x4bcbcd*/
  v51 = abs32(v46); /*0x4bcbd1*/
  v52 = 2 * v51; /*0x4bcbd5*/
  v188 = 2 * v51; /*0x4bcbd8*/
  if ( v44 || v49 ) /*0x4bcbe0*/
  {
    if ( v51 <= v44 || v51 <= v49 ) /*0x4bcc07*/
    {
      v162 = 256; /*0x4bd558*/
      if ( v44 <= v49 ) /*0x4bd562*/
      {
        v201 = v52 - v49; /*0x4bda35*/
        v127 = Math::RoundToInt((double)v168 / (double)v49 * 256.0); /*0x4bda43*/
        v220 = v127; /*0x4bda4a*/
        if ( v49 > 0 ) /*0x4bda51*/
        {
          v128 = MEMORY[0x887644]; /*0x4bda57*/
          v170 = 0; /*0x4bda61*/
          v200 = -v127; /*0x4bda65*/
          v155 = 0; /*0x4bda69*/
          v177 = v49; /*0x4bda6d*/
          do /*0x4bdec4*/
          {
            v159 = (unsigned __int16)*v172; /*0x4bda7e*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bda7b*/
            {
              v129 = Math::RoundToInt((double)v162 * a12); /*0x4bdab0*/
              v130 = Math::RoundToInt((double)v155 * a12); /*0x4bdab9*/
              v131 = MEMORY[0x8A0980][v129]; /*0x4bdacc*/
              v132 = *((_DWORD *)&MEMORY[0x8A0D80] - v129); /*0x4bdad2*/
              v130 *= 4; /*0x4bdad9*/
              v133 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v130); /*0x4bdaec*/
              v192 = *(int *)((char *)MEMORY[0x8A0980] + v130); /*0x4bdaf2*/
              LOWORD(v130) = *(_WORD *)(v170 + v178); /*0x4bdafd*/
              LOBYTE(v209) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bdb15*/
              BYTE1(v209) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bdb26*/
              BYTE2(v209) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bdb42*/
              LOWORD(v130) = *(_WORD *)(v170 + v178 + 2); /*0x4bdb46*/
              LOBYTE(v217) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bdb66*/
              v134 = (unsigned __int8)v209; /*0x4bdb8a*/
              BYTE1(v217) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bdb90*/
              v135 = BYTE1(v209); /*0x4bdb9b*/
              v167 = (unsigned __int8)v209; /*0x4bdba1*/
              v136 = BYTE2(v209); /*0x4bdbaf*/
              BYTE2(v217) = (unsigned __int8)((unsigned __int16)v130 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bdbb5*/
              v187 = (unsigned __int8)v217; /*0x4bdbc8*/
              v183 = BYTE1(v217); /*0x4bdbd8*/
              v137 = BYTE2(v217); /*0x4bdbe3*/
              if ( LOBYTE(a9) ) /*0x4bdbf0*/
              {
                v167 = (v159 * (v219 * v131 + (unsigned __int8)v209 * v132)) >> 15; /*0x4bdc14*/
                v135 = BYTE1(v209); /*0x4bdc2a*/
                v187 = (v159 * (v219 * v192 + (unsigned __int8)v217 * v133)) >> 15; /*0x4bdc31*/
                v134 = v167; /*0x4bdc35*/
              }
              if ( a10 ) /*0x4bdc41*/
              {
                v135 = (v159 * (v207 * v131 + v135 * v132)) >> 15; /*0x4bdc76*/
                v183 = (v159 * (v207 * v192 + BYTE1(v217) * v133)) >> 15; /*0x4bdc7d*/
                v134 = v167; /*0x4bdc81*/
              }
              if ( a11 ) /*0x4bdc8d*/
              {
                v136 = (v159 * (v208 * v131 + BYTE2(v209) * v132)) >> 15; /*0x4bdcb7*/
                v137 = (v159 * (v208 * v192 + BYTE2(v217) * v133)) >> 15; /*0x4bdcb9*/
              }
              v138 = 255; /*0x4bdcc1*/
              if ( v136 <= 255 ) /*0x4bdcc6*/
                v138 = v136; /*0x4bdcc8*/
              if ( v135 > 255 ) /*0x4bdcd0*/
                v135 = 255; /*0x4bdcd2*/
              if ( v134 > 255 ) /*0x4bdcdd*/
                v134 = 255; /*0x4bdcdf*/
              *(_WORD *)(v178 + v170) = (v138 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bdd25*/
                                      | (v135 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v134 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v137 > 255 ) /*0x4bdd29*/
                v137 = 255; /*0x4bdd2b*/
              v139 = v183; /*0x4bdd30*/
              if ( v183 > 255 ) /*0x4bdd3a*/
                v139 = 255; /*0x4bdd3c*/
              v140 = v187; /*0x4bdd41*/
              if ( v187 > 255 ) /*0x4bdd4b*/
                v140 = 255; /*0x4bdd4d*/
              *(_WORD *)(v178 + v170 + 2) = (v137 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bdd8f*/
                                          | (v139 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v140 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bdd94*/
                *v160 = v171; /*0x4bdd9f*/
              v128 = MEMORY[0x887644]; /*0x4bdda2*/
            }
            v141 = v162 - v220; /*0x4bddb7*/
            v162 -= v220; /*0x4bddbd*/
            v142 = v155 - v200; /*0x4bddc1*/
            v155 -= v200; /*0x4bddc8*/
            if ( v155 <= 256 ) /*0x4bddcc*/
            {
              v144 = v172; /*0x4bde16*/
              v143 = v160; /*0x4bde1a*/
            }
            else
            {
              v155 = v142 - 256; /*0x4bdddc*/
              v143 = v160 + 1; /*0x4bdde4*/
              v162 = v141 + 256; /*0x4bddf2*/
              v170 += 2; /*0x4bddf6*/
              if ( (unsigned int)(v160 + 1) >= v128[7] ) /*0x4bddfa*/
                v143 = (_WORD *)((char *)v143 - v128[8]); /*0x4bddfc*/
              v144 = v172 + 1; /*0x4bde03*/
              if ( (unsigned int)(v172 + 1) >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4bde0f*/
                v144 = (_WORD *)((char *)v144 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bde11*/
            }
            v145 = v201; /*0x4bde1e*/
            v146 = v171; /*0x4bde22*/
            if ( v201 > 0 ) /*0x4bde28*/
            {
              v146 = v214 + v171; /*0x4bde35*/
              v145 = v201 - v202[0]; /*0x4bde37*/
            }
            v201 = v188 + v145; /*0x4bde4a*/
            v178 += v213; /*0x4bde57*/
            v147 = &v143[v212]; /*0x4bde5e*/
            if ( v212 <= 0 ) /*0x4bde62*/
            {
              v148 = v147; /*0x4bde75*/
              if ( (unsigned int)v147 < v128[6] ) /*0x4bde77*/
                v148 = (_WORD *)((char *)v147 + v128[8]); /*0x4bde7c*/
              v160 = v148; /*0x4bde7e*/
            }
            else
            {
              if ( (unsigned int)v147 >= v128[7] ) /*0x4bde67*/
                v147 = (_WORD *)((char *)v147 - v128[8]); /*0x4bde69*/
              v160 = v147; /*0x4bde6c*/
            }
            v149 = &v144[v212]; /*0x4bde82*/
            if ( v212 <= 0 ) /*0x4bde86*/
            {
              v150 = v149; /*0x4bdea1*/
              if ( (unsigned int)v149 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4bdea6*/
                v150 = (_WORD *)((char *)v149 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bdeab*/
              v172 = v150; /*0x4bdead*/
            }
            else
            {
              if ( (unsigned int)v149 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4bde90*/
                v149 = (_WORD *)((char *)v149 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bde92*/
              v172 = v149; /*0x4bde95*/
            }
            v100 = v177 == 1; /*0x4bdebb*/
            v171 = v203 + v146; /*0x4bdebc*/
            --v177; /*0x4bdec0*/
          }
          while ( !v100 ); /*0x4bdec4*/
        }
      }
      else
      {
        v196 = v52 - v44; /*0x4bd56e*/
        v101 = Math::RoundToInt((double)v49 / (double)v168 * 256.0); /*0x4bd57c*/
        v220 = v101; /*0x4bd583*/
        v176 = 0; /*0x4bd58a*/
        if ( v44 > 0 ) /*0x4bd592*/
        {
          v102 = MEMORY[0x887644]; /*0x4bd598*/
          v103 = MEMORY[0x87E8A4]; /*0x4bd59e*/
          v204 = -v101; /*0x4bd5aa*/
          v154 = 2 * v50; /*0x4bd5ae*/
          v199 = 0; /*0x4bd5b2*/
          do /*0x4bda0e*/
          {
            v158 = (unsigned __int16)*v172; /*0x4bd5c7*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bd5c4*/
            {
              v104 = Math::RoundToInt((double)v162 * a12); /*0x4bd5f9*/
              v105 = Math::RoundToInt((double)v199 * a12); /*0x4bd602*/
              v106 = MEMORY[0x8A0980][v104]; /*0x4bd615*/
              v107 = *((_DWORD *)&MEMORY[0x8A0D80] - v104); /*0x4bd61b*/
              v105 *= 4; /*0x4bd622*/
              v108 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v105); /*0x4bd635*/
              v191 = *(int *)((char *)MEMORY[0x8A0980] + v105); /*0x4bd63b*/
              LOWORD(v105) = *(_WORD *)(v178 + 2 * v176); /*0x4bd646*/
              LOBYTE(v209) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd65e*/
              BYTE1(v209) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd66f*/
              BYTE2(v209) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd68b*/
              LOWORD(v105) = *(_WORD *)(v154 + v178); /*0x4bd68f*/
              LOBYTE(v202[0]) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd6ae*/
              BYTE1(v202[0]) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd6cb*/
              BYTE2(v202[0]) = (unsigned __int8)((unsigned __int16)v105 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd6d1*/
              v186 = (unsigned __int8)v209; /*0x4bd6ea*/
              v109 = LOBYTE(v202[0]); /*0x4bd6f7*/
              v182 = BYTE1(v209); /*0x4bd6fd*/
              v110 = BYTE1(v202[0]); /*0x4bd705*/
              v111 = BYTE2(v202[0]); /*0x4bd70b*/
              v112 = BYTE2(v209); /*0x4bd711*/
              v166 = LOBYTE(v202[0]); /*0x4bd71e*/
              if ( LOBYTE(a9) ) /*0x4bd726*/
              {
                v166 = (v158 * (v219 * v106 + LOBYTE(v202[0]) * v107)) >> 15; /*0x4bd74a*/
                v186 = (v158 * (v219 * v191 + (unsigned __int8)v209 * v108)) >> 15; /*0x4bd767*/
                v109 = v166; /*0x4bd76b*/
              }
              if ( a10 ) /*0x4bd777*/
              {
                v110 = (v158 * (v207 * v106 + BYTE1(v202[0]) * v107)) >> 15; /*0x4bd7a3*/
                v182 = (v158 * (v207 * v191 + BYTE1(v209) * v108)) >> 15; /*0x4bd7b3*/
                v109 = v166; /*0x4bd7b7*/
              }
              if ( a11 ) /*0x4bd7c3*/
              {
                v111 = (v158 * (v208 * v106 + BYTE2(v202[0]) * v107)) >> 15; /*0x4bd7ed*/
                v112 = (v158 * (v208 * v191 + BYTE2(v209) * v108)) >> 15; /*0x4bd7ef*/
              }
              v113 = 255; /*0x4bd7f7*/
              if ( v111 <= 255 ) /*0x4bd7fc*/
                v113 = v111; /*0x4bd7fe*/
              if ( v110 > 255 ) /*0x4bd806*/
                v110 = 255; /*0x4bd808*/
              if ( v109 > 255 ) /*0x4bd813*/
                v109 = 255; /*0x4bd815*/
              *(_WORD *)(v178 + 2 * v176) = (v113 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd85b*/
                                          | (v110 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v109 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v112 > 255 ) /*0x4bd85f*/
                v112 = 255; /*0x4bd861*/
              v114 = v182; /*0x4bd866*/
              if ( v182 > 255 ) /*0x4bd870*/
                v114 = 255; /*0x4bd872*/
              v115 = v186; /*0x4bd877*/
              if ( v186 > 255 ) /*0x4bd881*/
                v115 = 255; /*0x4bd883*/
              *(_WORD *)(v154 + v178) = (v112 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd8c0*/
                                      | (v114 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v115 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bd8cd*/
                *v160 = v171; /*0x4bd8d8*/
              v102 = MEMORY[0x887644]; /*0x4bd8db*/
              v103 = MEMORY[0x87E8A4]; /*0x4bd8e1*/
            }
            v116 = v162 - v220; /*0x4bd8f6*/
            v162 -= v220; /*0x4bd8fc*/
            v117 = v199 - v204; /*0x4bd900*/
            v199 -= v204; /*0x4bd907*/
            if ( v199 <= 256 ) /*0x4bd90b*/
            {
              v121 = v172; /*0x4bd9a3*/
              v120 = v160; /*0x4bd9a7*/
            }
            else
            {
              v162 = v116 + 256; /*0x4bd921*/
              v178 += v213; /*0x4bd933*/
              v199 = v117 - 256; /*0x4bd93e*/
              v118 = &v160[v212]; /*0x4bd949*/
              v119 = &v172[v212]; /*0x4bd94b*/
              if ( v212 <= 0 ) /*0x4bd94f*/
              {
                v120 = &v160[v212]; /*0x4bd960*/
                if ( (unsigned int)v118 < v102[6] ) /*0x4bd964*/
                  v120 = (_WORD *)((char *)v118 + v102[8]); /*0x4bd969*/
              }
              else
              {
                if ( (unsigned int)v118 >= v102[7] ) /*0x4bd954*/
                  v118 = (_WORD *)((char *)v118 - v102[8]); /*0x4bd956*/
                v120 = v118; /*0x4bd959*/
              }
              if ( v212 <= 0 ) /*0x4bd96d*/
              {
                v122 = &v172[v212]; /*0x4bd98c*/
                if ( (unsigned int)v119 < v103[6] ) /*0x4bd990*/
                  v122 = (_WORD *)((char *)v119 + v103[8]); /*0x4bd995*/
                v121 = v122; /*0x4bd99b*/
                v171 += v203; /*0x4bd99d*/
              }
              else
              {
                if ( (unsigned int)v119 >= v103[7] ) /*0x4bd972*/
                  v119 = (_WORD *)((char *)v119 - v103[8]); /*0x4bd974*/
                v121 = v119; /*0x4bd97b*/
                v171 += v203; /*0x4bd983*/
              }
            }
            v123 = v196; /*0x4bd9ab*/
            if ( v196 > 0 ) /*0x4bd9b1*/
            {
              v171 += v214; /*0x4bd9c6*/
              v123 = v196 - 2 * v168; /*0x4bd9ca*/
            }
            v196 = v188 + v123; /*0x4bd9d0*/
            v124 = v120 + 1; /*0x4bd9d4*/
            if ( (unsigned int)(v120 + 1) >= v102[7] ) /*0x4bd9da*/
              v124 = (_WORD *)((char *)v124 - v102[8]); /*0x4bd9dc*/
            v160 = v124; /*0x4bd9e2*/
            v125 = v121 + 1; /*0x4bd9e6*/
            if ( (unsigned int)(v121 + 1) >= v103[7] ) /*0x4bd9eb*/
              v125 = (_WORD *)((char *)v125 - v103[8]); /*0x4bd9ed*/
            v172 = v125; /*0x4bd9f8*/
            v126 = ++v176 < v168; /*0x4bda04*/
            v154 += 2; /*0x4bda0a*/
          }
          while ( v126 ); /*0x4bda0e*/
        }
      }
    }
    else
    {
      v161 = 256; /*0x4bcc0f*/
      if ( v44 <= v49 ) /*0x4bcc17*/
      {
        v190 = Math::RoundToInt((double)v168 / (double)v49 * 256.0); /*0x4bd0de*/
        if ( v49 > 0 ) /*0x4bd0e2*/
        {
          v77 = MEMORY[0x887644]; /*0x4bd0f3*/
          v78 = MEMORY[0x87E8A4]; /*0x4bd0f9*/
          v198 = v203 + v214; /*0x4bd103*/
          v157 = 0; /*0x4bd10d*/
          v203 = 0; /*0x4bd115*/
          v175 = v49; /*0x4bd119*/
          do /*0x4bd535*/
          {
            v169 = (unsigned __int16)*v172; /*0x4bd12b*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bd128*/
            {
              v79 = Math::RoundToInt((double)v161 * a12); /*0x4bd15c*/
              v80 = Math::RoundToInt((double)v203 * a12); /*0x4bd165*/
              v81 = MEMORY[0x8A0980][v79]; /*0x4bd178*/
              v82 = *((_DWORD *)&MEMORY[0x8A0D80] - v79); /*0x4bd17e*/
              v80 *= 4; /*0x4bd185*/
              v83 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v80); /*0x4bd198*/
              v153 = *(int *)((char *)MEMORY[0x8A0980] + v80); /*0x4bd19e*/
              LOWORD(v80) = *(_WORD *)(v157 + v178); /*0x4bd1a9*/
              LOBYTE(v202[0]) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd1c1*/
              BYTE1(v202[0]) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd1d2*/
              BYTE2(v202[0]) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd1ee*/
              LOWORD(v80) = *(_WORD *)(v157 + v178 + 2); /*0x4bd1f2*/
              LOBYTE(v204) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bd212*/
              v84 = LOBYTE(v202[0]); /*0x4bd233*/
              BYTE1(v204) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bd239*/
              v85 = BYTE1(v202[0]); /*0x4bd241*/
              v165 = LOBYTE(v202[0]); /*0x4bd247*/
              v86 = BYTE2(v202[0]); /*0x4bd255*/
              BYTE2(v204) = (unsigned __int8)((unsigned __int16)v80 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bd25b*/
              v185 = (unsigned __int8)v204; /*0x4bd268*/
              v181 = BYTE1(v204); /*0x4bd275*/
              v87 = BYTE2(v204); /*0x4bd27d*/
              if ( LOBYTE(a9) ) /*0x4bd28a*/
              {
                v165 = (v169 * (v219 * v81 + LOBYTE(v202[0]) * v82)) >> 15; /*0x4bd2ae*/
                v85 = BYTE1(v202[0]); /*0x4bd2c4*/
                v185 = (v169 * (v219 * v153 + (unsigned __int8)v204 * v83)) >> 15; /*0x4bd2cb*/
                v84 = v165; /*0x4bd2cf*/
              }
              if ( a10 ) /*0x4bd2db*/
              {
                v85 = (v169 * (v207 * v81 + v85 * v82)) >> 15; /*0x4bd310*/
                v181 = (v169 * (v207 * v153 + BYTE1(v204) * v83)) >> 15; /*0x4bd317*/
                v84 = v165; /*0x4bd31b*/
              }
              if ( a11 ) /*0x4bd327*/
              {
                v86 = (v169 * (v208 * v81 + BYTE2(v202[0]) * v82)) >> 15; /*0x4bd351*/
                v87 = (v169 * (v208 * v153 + BYTE2(v204) * v83)) >> 15; /*0x4bd353*/
              }
              v88 = 255; /*0x4bd35b*/
              if ( v86 <= 255 ) /*0x4bd360*/
                v88 = v86; /*0x4bd362*/
              if ( v85 > 255 ) /*0x4bd36a*/
                v85 = 255; /*0x4bd36c*/
              if ( v84 > 255 ) /*0x4bd377*/
                v84 = 255; /*0x4bd379*/
              *(_WORD *)(v178 + v157) = (v88 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd3bf*/
                                      | (v85 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v84 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v87 > 255 ) /*0x4bd3c3*/
                v87 = 255; /*0x4bd3c5*/
              v89 = v181; /*0x4bd3ca*/
              if ( v181 > 255 ) /*0x4bd3d4*/
                v89 = 255; /*0x4bd3d6*/
              v90 = v185; /*0x4bd3db*/
              if ( v185 > 255 ) /*0x4bd3e5*/
                v90 = 255; /*0x4bd3e7*/
              *(_WORD *)(v178 + v157 + 2) = (v87 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bd429*/
                                          | (v89 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v90 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bd42e*/
                *v160 = v171; /*0x4bd439*/
              v77 = MEMORY[0x887644]; /*0x4bd43c*/
              v78 = MEMORY[0x87E8A4]; /*0x4bd442*/
            }
            v91 = v161 - v190; /*0x4bd454*/
            v161 -= v190; /*0x4bd45a*/
            v92 = v203 + v190; /*0x4bd45e*/
            v203 += v190; /*0x4bd465*/
            if ( v203 <= 256 ) /*0x4bd469*/
            {
              v95 = v172; /*0x4bd4af*/
              v94 = v160; /*0x4bd4b3*/
            }
            else
            {
              v93 = v77[7]; /*0x4bd46f*/
              v203 = v92 - 256; /*0x4bd479*/
              v94 = v160 + 1; /*0x4bd481*/
              v161 = v91 + 256; /*0x4bd48f*/
              v157 += 2; /*0x4bd493*/
              if ( (unsigned int)(v160 + 1) >= v93 ) /*0x4bd497*/
                v94 = (_WORD *)((char *)v94 - v77[8]); /*0x4bd499*/
              v95 = v172 + 1; /*0x4bd4a3*/
              if ( (unsigned int)(v172 + 1) >= v78[7] ) /*0x4bd4a8*/
                v95 = (_WORD *)((char *)v95 - v78[8]); /*0x4bd4aa*/
            }
            v178 += v213; /*0x4bd4c4*/
            v96 = &v94[v212]; /*0x4bd4d2*/
            v97 = &v95[v212]; /*0x4bd4d4*/
            if ( v212 <= 0 ) /*0x4bd4d8*/
            {
              v98 = v96; /*0x4bd4eb*/
              if ( (unsigned int)v96 < v77[6] ) /*0x4bd4ef*/
                v98 = (_WORD *)((char *)v96 + v77[8]); /*0x4bd4f4*/
              v160 = v98; /*0x4bd4f6*/
            }
            else
            {
              if ( (unsigned int)v96 >= v77[7] ) /*0x4bd4dd*/
                v96 = (_WORD *)((char *)v96 - v77[8]); /*0x4bd4df*/
              v160 = v96; /*0x4bd4e2*/
            }
            if ( v212 <= 0 ) /*0x4bd4fc*/
            {
              v99 = v97; /*0x4bd50f*/
              if ( (unsigned int)v97 < v78[6] ) /*0x4bd513*/
                v99 = (_WORD *)((char *)v97 + v78[8]); /*0x4bd518*/
              v172 = v99; /*0x4bd51a*/
            }
            else
            {
              if ( (unsigned int)v97 >= v78[7] ) /*0x4bd501*/
                v97 = (_WORD *)((char *)v97 - v78[8]); /*0x4bd503*/
              v172 = v97; /*0x4bd506*/
            }
            v100 = v175 == 1; /*0x4bd52c*/
            LOWORD(v171) = v198 + v171; /*0x4bd52d*/
            --v175; /*0x4bd531*/
          }
          while ( !v100 ); /*0x4bd535*/
        }
      }
      else
      {
        v53 = Math::RoundToInt((double)v49 / (double)v168 * 256.0); /*0x4bcc2b*/
        v189 = v53; /*0x4bcc32*/
        v179 = 0; /*0x4bcc36*/
        if ( v44 > 0 ) /*0x4bcc3e*/
        {
          v54 = MEMORY[0x887644]; /*0x4bcc44*/
          v156 = 0; /*0x4bcc4a*/
          v195 = -v53; /*0x4bcc54*/
          v163 = 2 * v50; /*0x4bcc5c*/
          do /*0x4bd0a8*/
          {
            v55 = (unsigned __int16)*v172; /*0x4bcc6f*/
            if ( (unsigned __int16)v171 < *v160 && *v172 ) /*0x4bcc6d*/
            {
              v56 = Math::RoundToInt((double)v161 * a12); /*0x4bcc9b*/
              v57 = Math::RoundToInt((double)v156 * a12); /*0x4bcca4*/
              v58 = MEMORY[0x8A0980][v56]; /*0x4bccb7*/
              v57 *= 4; /*0x4bccc3*/
              v152 = *((_DWORD *)&MEMORY[0x8A0D80] - v56); /*0x4bccc6*/
              v197 = *(int *)((char *)MEMORY[0x8A0980] + v57); /*0x4bccd0*/
              v174 = *(_DWORD *)((char *)&MEMORY[0x8A0D80] - v57); /*0x4bcce1*/
              LOWORD(v57) = *(_WORD *)(v178 + 2 * v179); /*0x4bcce9*/
              LOBYTE(v204) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bcd08*/
              BYTE1(v204) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bcd29*/
              BYTE2(v204) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bcd33*/
              LOWORD(v57) = *(_WORD *)(v163 + v178); /*0x4bcd3b*/
              LOBYTE(v202[0]) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4bcd5a*/
              BYTE1(v202[0]) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4bcd7b*/
              v59 = BYTE1(v204); /*0x4bcd83*/
              v180 = BYTE1(v204); /*0x4bcd8b*/
              BYTE2(v202[0]) = (unsigned __int8)((unsigned __int16)v57 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4bcd8f*/
              v184 = (unsigned __int8)v204; /*0x4bcda8*/
              v60 = LOBYTE(v202[0]); /*0x4bcdb0*/
              v61 = BYTE1(v202[0]); /*0x4bcdb6*/
              v62 = BYTE2(v202[0]); /*0x4bcdbc*/
              v63 = BYTE2(v204); /*0x4bcdc2*/
              if ( LOBYTE(a9) ) /*0x4bcdcf*/
              {
                v60 = (v55 * (v219 * v58 + v152 * LOBYTE(v202[0]))) >> 15; /*0x4bce04*/
                v184 = (v55 * (v219 * v197 + v174 * (unsigned __int8)v204)) >> 15; /*0x4bce0a*/
                v59 = BYTE1(v204); /*0x4bce0e*/
              }
              if ( a10 ) /*0x4bce1a*/
              {
                v61 = (v55 * (v207 * v58 + v152 * BYTE1(v202[0]))) >> 15; /*0x4bce4c*/
                v59 = (v55 * (v207 * v197 + v174 * BYTE1(v204))) >> 15; /*0x4bce4f*/
                v180 = v59; /*0x4bce52*/
              }
              if ( a11 ) /*0x4bce5e*/
              {
                v59 = v180; /*0x4bce81*/
                v62 = (v55 * (v208 * v58 + v152 * BYTE2(v202[0]))) >> 15; /*0x4bce88*/
                v63 = (v55 * (v208 * v197 + v174 * BYTE2(v204))) >> 15; /*0x4bce8e*/
              }
              v64 = 255; /*0x4bce96*/
              if ( v62 <= 255 ) /*0x4bce9b*/
                v64 = v62; /*0x4bce9d*/
              if ( v61 > 255 ) /*0x4bcea5*/
                v61 = 255; /*0x4bcea7*/
              if ( v60 > 255 ) /*0x4bceb2*/
                v60 = 255; /*0x4bceb4*/
              *(_WORD *)(v178 + 2 * v179) = (v64 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bcefa*/
                                          | (v61 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                          | (v60 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( v63 > 255 ) /*0x4bcefe*/
                v63 = 255; /*0x4bcf00*/
              if ( v59 > 255 ) /*0x4bcf0b*/
                v59 = 255; /*0x4bcf0d*/
              v65 = v184; /*0x4bcf12*/
              if ( v184 > 255 ) /*0x4bcf1c*/
                v65 = 255; /*0x4bcf1e*/
              *(_WORD *)(v163 + v178) = (v63 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4bcf5b*/
                                      | (v59 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                      | (v65 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
              if ( a8 ) /*0x4bcf68*/
                *v160 = v171; /*0x4bcf73*/
              v54 = MEMORY[0x887644]; /*0x4bcf76*/
            }
            v66 = v161 - v189; /*0x4bcf88*/
            v161 -= v189; /*0x4bcf8e*/
            v67 = v156 - v195; /*0x4bcf92*/
            v156 -= v195; /*0x4bcf99*/
            if ( v156 <= 256 ) /*0x4bcf9d*/
            {
              v73 = v171; /*0x4bd043*/
              v72 = v172; /*0x4bd047*/
              v70 = v160; /*0x4bd04b*/
              v71 = MEMORY[0x87E8A4]; /*0x4bd04f*/
            }
            else
            {
              v156 = v67 - 256; /*0x4bcfaf*/
              v161 = v66 + 256; /*0x4bcfc8*/
              v178 += v213; /*0x4bcfd0*/
              v68 = &v160[v212]; /*0x4bcfdb*/
              v69 = &v172[v212]; /*0x4bcfdd*/
              if ( v212 <= 0 ) /*0x4bcfe1*/
              {
                v70 = &v160[v212]; /*0x4bcff2*/
                if ( (unsigned int)v68 < v54[6] ) /*0x4bcff6*/
                  v70 = (_WORD *)((char *)v68 + v54[8]); /*0x4bcffb*/
              }
              else
              {
                if ( (unsigned int)v68 >= v54[7] ) /*0x4bcfe6*/
                  v68 = (_WORD *)((char *)v68 - v54[8]); /*0x4bcfe8*/
                v70 = v68; /*0x4bcfeb*/
              }
              if ( v212 <= 0 ) /*0x4bcfff*/
              {
                v74 = &v172[v212]; /*0x4bd023*/
                if ( (unsigned int)v69 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4bd028*/
                  v74 = (_WORD *)((char *)v69 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bd02d*/
                v71 = MEMORY[0x87E8A4]; /*0x4bd033*/
                v72 = v74; /*0x4bd039*/
                v73 = v203 + v171; /*0x4bd03f*/
              }
              else
              {
                v71 = MEMORY[0x87E8A4]; /*0x4bd001*/
                if ( (unsigned int)v69 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4bd00a*/
                  v69 = (_WORD *)((char *)v69 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4bd00c*/
                v72 = v69; /*0x4bd017*/
                v73 = v203 + v171; /*0x4bd019*/
              }
            }
            v164 = v163 + 2; /*0x4bd061*/
            v75 = v70 + 1; /*0x4bd065*/
            if ( (unsigned int)(v70 + 1) >= v54[7] ) /*0x4bd06b*/
              v75 = (_WORD *)((char *)v75 - v54[8]); /*0x4bd06d*/
            v160 = v75; /*0x4bd073*/
            v76 = v72 + 1; /*0x4bd077*/
            if ( (unsigned int)(v72 + 1) >= v71[7] ) /*0x4bd07c*/
              v76 = (_WORD *)((char *)v76 - v71[8]); /*0x4bd07e*/
            v172 = v76; /*0x4bd08c*/
            v171 = v214 + v73; /*0x4bd09c*/
            v179 += 2; /*0x4bd0a0*/
            v163 = v164 + 2; /*0x4bd0a4*/
          }
          while ( v179 < v168 ); /*0x4bd0a8*/
        }
      }
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)v211 + 96))(v211); /*0x4bda1d*/
    return 1; /*0x4bda23*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)v211 + 96))(v211); /*0x4bcbeb*/
    return 0; /*0x4bcbf1*/
  }
}
}

// 0x4BDF00
char DSurface::DrawLineZBufColored(int a2, unsigned int * a3, unsigned int * a4, unsigned char * a5, float a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DSurface_DrawLineZBufColored(
        void *this,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned __int8 *a5,
        float a6,
        int a7,
        int a8)
{
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // ebp
  unsigned __int64 v18; // rax
  int v19; // ebx
  unsigned int v20; // esi
  int v21; // edi
  int v22; // esi
  unsigned int v23; // ebx
  double v24; // st7
  double v25; // st7
  int v26; // eax
  unsigned int v27; // eax
  double v28; // st7
  int v29; // eax
  double v30; // st7
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ebx
  int v34; // edi
  _WORD *v35; // esi
  int v36; // edi
  _WORD *v37; // ebp
  int v38; // edi
  int v39; // ebx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // edi
  int v44; // ecx
  _DWORD *v45; // ebx
  int v46; // edx
  __int16 v47; // ax
  _WORD *v48; // eax
  _WORD *v49; // eax
  bool v50; // zf
  int v52; // edi
  _DWORD *v53; // ebx
  int v54; // edx
  _WORD *v55; // eax
  _WORD *v56; // eax
  int v57; // eax
  int v58; // edi
  int v59; // ebx
  _DWORD *v60; // ecx
  int v61; // edx
  _WORD *v62; // eax
  _WORD *v63; // eax
  int v64; // [esp+1Ch] [ebp-6Ch]
  int v65; // [esp+20h] [ebp-68h]
  int v66; // [esp+24h] [ebp-64h]
  int v67; // [esp+24h] [ebp-64h]
  int v68; // [esp+24h] [ebp-64h]
  int v69; // [esp+28h] [ebp-60h]
  int v70; // [esp+2Ch] [ebp-5Ch]
  int v71; // [esp+30h] [ebp-58h]
  int v72; // [esp+30h] [ebp-58h]
  int v73; // [esp+30h] [ebp-58h]
  int v74; // [esp+34h] [ebp-54h]
  int v75; // [esp+38h] [ebp-50h]
  int v76; // [esp+3Ch] [ebp-4Ch]
  unsigned __int64 v78; // [esp+44h] [ebp-44h]
  int v79; // [esp+44h] [ebp-44h]
  int v80; // [esp+44h] [ebp-44h]
  double v81; // [esp+48h] [ebp-40h]
  int v82; // [esp+48h] [ebp-40h]
  int v83; // [esp+48h] [ebp-40h]
  int v84; // [esp+48h] [ebp-40h]
  int v85; // [esp+4Ch] [ebp-3Ch]
  _DWORD v86[5]; // [esp+54h] [ebp-34h] BYREF
  unsigned __int64 v87; // [esp+68h] [ebp-20h]
  unsigned __int64 v88; // [esp+70h] [ebp-18h]
  int v89; // [esp+78h] [ebp-10h] BYREF
  int v90; // [esp+7Ch] [ebp-Ch]
  int v91; // [esp+80h] [ebp-8h]
  int v92; // [esp+84h] [ebp-4h]
  int v93; // [esp+8Ch] [ebp+4h]
  int v94; // [esp+90h] [ebp+8h]
  int v95; // [esp+94h] [ebp+Ch]
  int v96; // [esp+98h] [ebp+10h]
  int v97; // [esp+9Ch] [ebp+14h]
  int v98; // [esp+A0h] [ebp+18h]
  int v99; // [esp+A4h] [ebp+1Ch]

  v76 = Math::RoundToInt((double)*a5 * a6); /*0x4bdf39*/
  v9 = Math::RoundToInt((double)a5[1] * a6); /*0x4bdf59*/
  v75 = v9; /*0x4bdf5e*/
  v10 = Math::RoundToInt((double)a5[2] * a6); /*0x4bdf77*/
  v74 = v10; /*0x4bdf7f*/
  if ( v76 < 8 && v9 < 8 && v10 < 8 ) /*0x4bdf8d*/
    return 0; /*0x4bdf8d*/
  v11 = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 120))(this, &v86[1]); /*0x4bdf9c*/
  v12 = (int *)ClipRectIntersection(v11, 0, 0); /*0x4bdfaf*/
  v13 = *v12; /*0x4bdfb6*/
  v89 = *v12; /*0x4bdfb8*/
  v14 = v12[1]; /*0x4bdfbc*/
  v90 = v14; /*0x4bdfbf*/
  v91 = v12[2]; /*0x4bdfc6*/
  v15 = v12[3]; /*0x4bdfca*/
  v92 = v15; /*0x4bdfcf*/
  if ( !v91 && !v15 ) /*0x4bdfd7*/
    return 0; /*0x4bdfd7*/
  LODWORD(v18) = v13 + *a3; /*0x4bdff3*/
  v16 = v13 + *a4; /*0x4bdff5*/
  v17 = a7; /*0x4bdffa*/
  HIDWORD(v18) = v14 + a3[1]; /*0x4be001*/
  v19 = v18; /*0x4be003*/
  v20 = v14 + a4[1]; /*0x4be005*/
  v21 = a8; /*0x4be007*/
  v87 = v18; /*0x4be010*/
  v88 = __PAIR64__(v20, v16); /*0x4be018*/
  if ( (int)v18 > v16 ) /*0x4be020*/
  {
    v19 = v16; /*0x4be022*/
    v17 = a8; /*0x4be024*/
    v21 = a7; /*0x4be026*/
    v87 = __PAIR64__(v20, v16); /*0x4be02d*/
    v88 = v18; /*0x4be035*/
  }
  v22 = v19; /*0x4be04e*/
  v23 = HIDWORD(v87); /*0x4be050*/
  *(_QWORD *)&v86[1] = v88; /*0x4be05c*/
  if ( !(unsigned __int8)ClipLine(&v89) ) /*0x4be060*/
    return 0; /*0x4be060*/
  v98 = v21; /*0x4be07b*/
  v97 = v17; /*0x4be082*/
  if ( v88 != *(_QWORD *)&v86[1] ) /*0x4be089*/
  {
    v24 = Math::Sqrt( /*0x4be0c1*/
            (double)(int)(v23 - HIDWORD(v88)) * (double)(int)(v23 - HIDWORD(v88))
          + (double)(v22 - (int)v88) * (double)(v22 - (int)v88));
    v81 = (double)(int)Math::RoundToInt(v24); /*0x4be0f9*/
    v25 = Math::Sqrt((double)(int)(v23 - v86[2]) * (double)(int)(v23 - v86[2]) + (double)(v22 - v86[1]) /*0x4be10e*/
                                                                               * (double)(v22 - v86[1]));
    v26 = Math::RoundToInt(v25); /*0x4be116*/
    v27 = abs32(Math::RoundToInt(v81 / (double)v26 * (double)(v17 - v21))); /*0x4be149*/
    if ( v17 >= v21 ) /*0x4be14d*/
      v98 = v17 - v27; /*0x4be15e*/
    else
      v98 = v17 + v27; /*0x4be151*/
  }
  if ( v87 != __PAIR64__(v23, v22) ) /*0x4be16f*/
  {
    v28 = Math::Sqrt( /*0x4be1a9*/
            (double)(HIDWORD(v87) - v86[2]) * (double)(HIDWORD(v87) - v86[2])
          + (double)((int)v87 - v86[1]) * (double)((int)v87 - v86[1]));
    v29 = Math::RoundToInt(v28); /*0x4be1ae*/
    v82 = v22 - v86[1]; /*0x4be1c0*/
    v85 = v23 - v86[2]; /*0x4be1ce*/
    *(double *)&v86[1] = (double)v29; /*0x4be1dd*/
    v30 = Math::Sqrt((double)v85 * (double)v85 + (double)v82 * (double)v82); /*0x4be1f2*/
    v31 = Math::RoundToInt(v30); /*0x4be1fa*/
    v32 = abs32(Math::RoundToInt(*(double *)&v86[1] / (double)v31 * (double)(v17 - v21))); /*0x4be22d*/
    if ( v21 <= v17 ) /*0x4be231*/
      v97 = v21 + v32; /*0x4be240*/
    else
      v97 = v21 - v32; /*0x4be235*/
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 112))(this); /*0x4be24f*/
  v33 = (*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 92))(this, v87, HIDWORD(v87)); /*0x4be269*/
  v96 = v33; /*0x4be26d*/
  if ( !MEMORY[0x887644] ) /*0x4be274*/
    return 0; /*0x4be274*/
  v34 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4be27e*/
  v86[2] = HIDWORD(v87); /*0x4be285*/
  v35 = (_WORD *)Audio::GetSamplePosition(v87, HIDWORD(v87) - v34); /*0x4be29c*/
  v36 = *((_DWORD *)MEMORY[0x87E8A4] + 1); /*0x4be2a2*/
  v86[2] = HIDWORD(v87); /*0x4be2a5*/
  v37 = (_WORD *)StreamClass::ReadAndSeek(v87, HIDWORD(v87) - v36); /*0x4be2b6*/
  v70 = -1; /*0x4be2c1*/
  LOWORD(v36) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4be2cd*/
  v93 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4be2d4*/
  v99 = v97 + v36 - HIDWORD(v87) - v90; /*0x4be2ea*/
  if ( !v33 ) /*0x4be2f1*/
    return 0; /*0x4be9b9*/
  v71 = v88 - v87; /*0x4be305*/
  v38 = HIDWORD(v88) - HIDWORD(v87); /*0x4be310*/
  v39 = v98 - v97; /*0x4be31a*/
  v40 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4be31c*/
  v65 = v40; /*0x4be321*/
  if ( v38 < 0 ) /*0x4be325*/
  {
    v70 = 1; /*0x4be32e*/
    v65 = -v40; /*0x4be33a*/
    v93 = -v93; /*0x4be33e*/
  }
  v69 = 1; /*0x4be347*/
  v41 = abs32(v38); /*0x4be354*/
  if ( v39 < 0 ) /*0x4be358*/
    v69 = -1; /*0x4be35a*/
  v42 = abs32(v39); /*0x4be377*/
  v95 = 2 * v71; /*0x4be38a*/
  v94 = 2 * v41; /*0x4be394*/
  v64 = 2 * v42; /*0x4be39e*/
  if ( v42 <= v71 || v42 <= v41 ) /*0x4be3aa*/
  {
    if ( v71 <= v41 ) /*0x4be5aa*/
    {
      v58 = v95 - v41; /*0x4be7b5*/
      v59 = v64 - v41; /*0x4be7b7*/
      v84 = v95 - v41; /*0x4be7bb*/
      v80 = v64 - v41; /*0x4be7bf*/
      if ( v41 > 0 ) /*0x4be7c3*/
      {
        v86[1] = v41; /*0x4be7d0*/
        v60 = MEMORY[0x887644]; /*0x4be7d4*/
        v68 = 0; /*0x4be7da*/
        v73 = 2 * v93; /*0x4be7e5*/
        do /*0x4be99b*/
        {
          HIWORD(v61) = 0; /*0x4be7f1*/
          if ( (unsigned __int16)v99 < *v35 ) /*0x4be7fa*/
          {
            v58 = v84; /*0x4be89e*/
            LOWORD(v61) = *v37; /*0x4be7f6*/
            *(_WORD *)(v68 + v96) = BlendColorPack((v75 * v61) >> 7, (v74 * v61) >> 7); /*0x4be8a2*/
            v60 = MEMORY[0x887644]; /*0x4be8a6*/
            v59 = v80; /*0x4be8ac*/
          }
          if ( v58 > 0 ) /*0x4be8b2*/
          {
            ++v35; /*0x4be8bb*/
            v68 += 2; /*0x4be8c3*/
            if ( (unsigned int)v35 >= v60[7] ) /*0x4be8c7*/
              v35 = (_WORD *)((char *)v35 - v60[8]); /*0x4be8c9*/
            v58 -= v94; /*0x4be8cc*/
          }
          if ( v59 > 0 ) /*0x4be8d5*/
          {
            v99 += v69; /*0x4be8eb*/
            v59 -= v94; /*0x4be8f2*/
          }
          v58 += v95; /*0x4be8ff*/
          v59 += v64; /*0x4be908*/
          v96 += v65; /*0x4be914*/
          v35 = (_WORD *)((char *)v35 + v73); /*0x4be922*/
          v84 = v58; /*0x4be924*/
          v80 = v59; /*0x4be92a*/
          if ( v93 <= 0 ) /*0x4be92e*/
          {
            v62 = v35; /*0x4be93d*/
            if ( (unsigned int)v35 < v60[6] ) /*0x4be941*/
              v62 = (_WORD *)((char *)v35 + v60[8]); /*0x4be946*/
            v35 = v62; /*0x4be948*/
          }
          else if ( (unsigned int)v35 >= v60[7] ) /*0x4be933*/
          {
            v35 = (_WORD *)((char *)v35 - v60[8]); /*0x4be935*/
          }
          v37 = (_WORD *)((char *)v37 + v73); /*0x4be955*/
          if ( v93 <= 0 ) /*0x4be959*/
          {
            v63 = v37; /*0x4be970*/
            if ( (unsigned int)v37 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4be975*/
              v63 = (_WORD *)((char *)v37 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be97a*/
            v37 = v63; /*0x4be97c*/
          }
          else if ( (unsigned int)v37 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4be963*/
          {
            v37 = (_WORD *)((char *)v37 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be965*/
          }
          v50 = v86[1] == 1; /*0x4be98f*/
          v99 += v70; /*0x4be990*/
          --v86[1]; /*0x4be997*/
        }
        while ( !v50 ); /*0x4be99b*/
      }
    }
    else
    {
      v52 = v94 - v71; /*0x4be5bf*/
      v83 = v94 - v71; /*0x4be5c3*/
      v79 = v64 - v71; /*0x4be5c9*/
      v67 = 0; /*0x4be5cd*/
      if ( v71 > 0 ) /*0x4be5d5*/
      {
        v53 = MEMORY[0x887644]; /*0x4be5db*/
        do /*0x4be78f*/
        {
          HIWORD(v54) = 0; /*0x4be5e9*/
          if ( (unsigned __int16)v99 < *v35 ) /*0x4be5f2*/
          {
            v52 = v83; /*0x4be696*/
            LOWORD(v54) = *v37; /*0x4be5ee*/
            *(_WORD *)(v96 + 2 * v67) = BlendColorPack((v75 * v54) >> 7, (v74 * v54) >> 7); /*0x4be69a*/
            v53 = MEMORY[0x887644]; /*0x4be69e*/
          }
          if ( v52 > 0 ) /*0x4be6a6*/
          {
            v52 -= v95; /*0x4be6c0*/
            v96 += v65; /*0x4be6c9*/
            v35 += v93; /*0x4be6d3*/
            if ( v93 <= 0 ) /*0x4be6d7*/
            {
              v55 = v35; /*0x4be6e6*/
              if ( (unsigned int)v35 < v53[6] ) /*0x4be6ea*/
                v55 = (_WORD *)((char *)v35 + v53[8]); /*0x4be6ef*/
              v35 = v55; /*0x4be6f1*/
            }
            else if ( (unsigned int)v35 >= v53[7] ) /*0x4be6dc*/
            {
              v35 = (_WORD *)((char *)v35 - v53[8]); /*0x4be6de*/
            }
            v37 += v93; /*0x4be6fa*/
            if ( v93 <= 0 ) /*0x4be6fe*/
            {
              v56 = v37; /*0x4be715*/
              if ( (unsigned int)v37 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4be71a*/
                v56 = (_WORD *)((char *)v37 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be71f*/
              v37 = v56; /*0x4be721*/
            }
            else if ( (unsigned int)v37 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4be708*/
            {
              v37 = (_WORD *)((char *)v37 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be70a*/
            }
            v99 += v70; /*0x4be730*/
          }
          v57 = v79; /*0x4be737*/
          if ( v79 > 0 ) /*0x4be73d*/
          {
            v99 += v69; /*0x4be74c*/
            v57 = v79 - v95; /*0x4be75a*/
          }
          ++v35; /*0x4be769*/
          v79 = v64 + v57; /*0x4be76c*/
          v52 += v94; /*0x4be773*/
          v83 = v52; /*0x4be777*/
          if ( (unsigned int)v35 >= v53[7] ) /*0x4be77b*/
            v35 = (_WORD *)((char *)v35 - v53[8]); /*0x4be77d*/
          ++v67; /*0x4be78b*/
        }
        while ( v67 < v71 ); /*0x4be78f*/
      }
    }
  }
  else
  {
    v43 = v94 - v42; /*0x4be3be*/
    v44 = v95 - v42; /*0x4be3c0*/
    LODWORD(v78) = v94 - v42; /*0x4be3c4*/
    v72 = v95 - v42; /*0x4be3c8*/
    if ( v42 > 0 ) /*0x4be3cc*/
    {
      v45 = MEMORY[0x887644]; /*0x4be3d2*/
      v66 = 0; /*0x4be3d8*/
      HIDWORD(v78) = v42; /*0x4be3e0*/
      do /*0x4be58d*/
      {
        HIWORD(v46) = 0; /*0x4be3ec*/
        if ( (unsigned __int16)v99 < *v35 ) /*0x4be3f5*/
        {
          LOWORD(v46) = *v37; /*0x4be3f1*/
          v47 = BlendColorPack((v75 * v46) >> 7, (v74 * v46) >> 7); /*0x4be490*/
          v43 = v78; /*0x4be499*/
          v44 = v72; /*0x4be49d*/
          *(_WORD *)(v66 + v96) = v47; /*0x4be4a1*/
          v45 = MEMORY[0x887644]; /*0x4be4a5*/
        }
        if ( v43 > 0 ) /*0x4be4ad*/
        {
          v96 += v65; /*0x4be4c4*/
          v43 -= v64; /*0x4be4d2*/
          v35 += v93; /*0x4be4d7*/
          if ( v93 <= 0 ) /*0x4be4db*/
          {
            v48 = v35; /*0x4be4ea*/
            if ( (unsigned int)v35 < v45[6] ) /*0x4be4ec*/
              v48 = (_WORD *)((char *)v35 + v45[8]); /*0x4be4f1*/
            v35 = v48; /*0x4be4f3*/
          }
          else if ( (unsigned int)v35 >= v45[7] ) /*0x4be4e0*/
          {
            v35 = (_WORD *)((char *)v35 - v45[8]); /*0x4be4e2*/
          }
          v37 += v93; /*0x4be4f5*/
          if ( v93 <= 0 ) /*0x4be4f9*/
          {
            v49 = v37; /*0x4be510*/
            if ( (unsigned int)v37 < *((_DWORD *)MEMORY[0x87E8A4] + 6) ) /*0x4be515*/
              v49 = (_WORD *)((char *)v37 + *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be51a*/
            v37 = v49; /*0x4be51c*/
          }
          else if ( (unsigned int)v37 >= *((_DWORD *)MEMORY[0x87E8A4] + 7) ) /*0x4be503*/
          {
            v37 = (_WORD *)((char *)v37 - *((_DWORD *)MEMORY[0x87E8A4] + 8)); /*0x4be505*/
          }
          v44 = v72; /*0x4be52b*/
          v99 += v70; /*0x4be52f*/
        }
        if ( v44 > 0 ) /*0x4be538*/
        {
          ++v35; /*0x4be541*/
          v66 += 2; /*0x4be549*/
          if ( (unsigned int)v35 >= v45[7] ) /*0x4be54d*/
            v35 = (_WORD *)((char *)v35 - v45[8]); /*0x4be54f*/
          v44 -= v64; /*0x4be552*/
        }
        v99 += v69; /*0x4be56a*/
        v44 += v95; /*0x4be578*/
        v43 += v94; /*0x4be57e*/
        v50 = HIDWORD(v78) == 1; /*0x4be580*/
        v72 = v44; /*0x4be581*/
        v78 = __PAIR64__(HIDWORD(v78), v43) - 0x100000000LL; /*0x4be589*/
      }
      while ( !v50 ); /*0x4be58d*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this); /*0x4be599*/
  return 1; /*0x4be59c*/
}
}

// 0x4BF750
char DSurface::DrawGradientLine(int aP1, unsigned int * a2, DSurface * aP3, int a5, int arg10, float * a6, float * a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DSurface::DrawGradientLine(
        void *this,
        int aP1,
        _DWORD *a2,
        DSurface *aP3,
        int a5,
        int arg10,
        float *a6,
        float *a7)
{
  void *v8; // ebp
  IUnknown *v9; // eax
  int *v10; // eax
  char *v11; // ecx
  int v12; // eax
  int v13; // eax
  char *v14; // ecx
  IUnknown *v15; // ebx
  float *v16; // esi
  float *v17; // edi
  _BYTE *v18; // eax
  unsigned __int8 v19; // dl
  double v20; // st7
  char v22; // c0
  int v24; // eax
  int v25; // eax
  float *v26; // esi
  float *v27; // edi
  _BYTE *v28; // eax
  unsigned __int8 v29; // dl
  double v30; // st7
  char v32; // c0
  bool v33; // zf
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // ebx
  int v39; // ebp
  float *v40; // esi
  float *v41; // edi
  _BYTE *v42; // eax
  unsigned __int8 v43; // dl
  double v44; // st7
  char v46; // c0
  int v47; // ebx
  float *v48; // esi
  float *v49; // edi
  int v50; // ebp
  _BYTE *v51; // eax
  unsigned __int8 v52; // dl
  double v53; // st7
  char v55; // c0
  int v57; // [esp+10h] [ebp-48h]
  int v58; // [esp+14h] [ebp-44h]
  int v59; // [esp+14h] [ebp-44h]
  int v60; // [esp+18h] [ebp-40h] BYREF
  char *v61; // [esp+1Ch] [ebp-3Ch]
  int a1; // [esp+20h] [ebp-38h] BYREF
  char *v63; // [esp+24h] [ebp-34h]
  int v64; // [esp+28h] [ebp-30h] BYREF
  int v65; // [esp+2Ch] [ebp-2Ch]
  int v66; // [esp+30h] [ebp-28h]
  int v67; // [esp+34h] [ebp-24h]
  _BYTE v68[16]; // [esp+38h] [ebp-20h] BYREF
  char v69; // [esp+48h] [ebp-10h] BYREF
  IUnknown *aP1a; // [esp+5Ch] [ebp+4h]
  IUnknown *aP1b; // [esp+5Ch] [ebp+4h]
  _DWORD *a2a; // [esp+60h] [ebp+8h]
  int a2b; // [esp+60h] [ebp+8h]
  DSurface *aP3a; // [esp+64h] [ebp+Ch]
  DSurface *aP3b; // [esp+64h] [ebp+Ch]

  v8 = this; /*0x4bf755*/
  v9 = (IUnknown *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 120))(this, v68); /*0x4bf766*/
  v10 = ClipRectIntersection((IUnknown *)&v69, (IUnknown *)aP1, v9, 0, 0); /*0x4bf776*/
  v64 = *v10; /*0x4bf77d*/
  v65 = v10[1]; /*0x4bf784*/
  v66 = v10[2]; /*0x4bf78b*/
  v67 = v10[3]; /*0x4bf796*/
  v11 = (char *)(v65 + a2[1]); /*0x4bf7a1*/
  v60 = v64 + *a2; /*0x4bf7a3*/
  v61 = v11; /*0x4bf7a7*/
  v12 = v64 + aP3->field_0; /*0x4bf7b6*/
  v63 = (char *)aP3->field_4 + v65; /*0x4bf7b8*/
  a1 = v12; /*0x4bf7c9*/
  if ( ClipLine((IUnknown *)&v60, &a1, &v64) ) /*0x4bf7cd*/
  {
    v13 = v60; /*0x4bf7da*/
    if ( v60 > a1 ) /*0x4bf7e4*/
    {
      v14 = v61; /*0x4bf7e6*/
      v60 = a1; /*0x4bf7ea*/
      a1 = v13; /*0x4bf7f2*/
      v61 = v63; /*0x4bf7f6*/
      v63 = v14; /*0x4bf7fa*/
    }
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 112))(v8) == 2 ) /*0x4bf809*/
    {
      v15 = (IUnknown *)(*(int (__thiscall **)(void *, int, char *))(*(_DWORD *)v8 + 92))(v8, v60, v61); /*0x4bf821*/
      aP1a = v15; /*0x4bf825*/
      if ( v15 ) /*0x4bf829*/
      {
        if ( v61 == v63 ) /*0x4bf83a*/
        {
          aP1b = 0; /*0x4bf84a*/
          if ( a1 - v60 >= 0 ) /*0x4bf852*/
          {
            v16 = a7; /*0x4bf858*/
            v17 = a6; /*0x4bf85c*/
            do /*0x4bf874*/
            {
              v18 = Color::Lerp2(&a6, a5, arg10, *v16); /*0x4bf874*/
              LOWORD(a7) = *(_WORD *)v18; /*0x4bf87f*/
              v19 = v18[2] >> stru_89E138.__pad_14B0[6132]; /*0x4bf895*/
              LOWORD(v18) = (unsigned __int8)(BYTE1(a7) >> stru_89E138.__pad_14B0[6140]); /*0x4bf8ab*/
              LOWORD(v15->field_0) = ((unsigned __int8)((unsigned __int8)a7 >> stru_89E138.__pad_14B0[6124]) << stru_89E138.__pad_14B0[6120]) /*0x4bf8cd*/
                                   | ((_DWORD)v18 << stru_89E138.__pad_14B0[6136])
                                   | (v19 << stru_89E138.__pad_14B0[6128]);
              v20 = *v17 + *v16; /*0x4bf8d2*/
              *v16 = v20; /*0x4bf8da*/
              if ( v22 && *v17 < 0.0 ) /*0x4bf8f0*/
              {
                *v16 = 0.0; /*0x4bf8f4*/
              }
              else
              {
                if ( v20 <= 1.0 || *v17 <= 0.0 ) /*0x4bf916*/
                  goto LABEL_16; /*0x4bf916*/
                *v16 = 1.0; /*0x4bf918*/
              }
              *v17 = -*v17; /*0x4bf922*/
LABEL_16:
              v15 = (IUnknown *)((char *)v15 + 2); /*0x4bf924*/
              aP1b = (IUnknown *)((char *)aP1b + 1); /*0x4bf938*/
            }
            while ( (int)aP1b <= a1 - v60 ); /*0x4bf874*/
          }
LABEL_17:
          (*(void (__thiscall **)(void *))(*(_DWORD *)v8 + 96))(v8); /*0x4bf942*/
          return 1; /*0x4bf953*/
        }
        if ( v60 == a1 ) /*0x4bf960*/
        {
          if ( (int)v61 <= (int)v63 ) /*0x4bf968*/
            v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 116))(v8); /*0x4bf97b*/
          else
            v24 = -(*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 116))(v8); /*0x4bf972*/
          a2a = (_DWORD *)v24; /*0x4bf982*/
          v25 = abs32(v63 - v61); /*0x4bf98f*/
          if ( v25 < 0 ) /*0x4bf991*/
            goto LABEL_17; /*0x4bf991*/
          v26 = a7; /*0x4bf997*/
          v27 = a6; /*0x4bf99b*/
          aP3a = (DSurface *)(v25 + 1); /*0x4bf9a4*/
          while ( 1 ) /*0x4bf9b8*/
          {
            v28 = Color::Lerp2(&a6, a5, arg10, *v26); /*0x4bf9b8*/
            LOWORD(a7) = *(_WORD *)v28; /*0x4bf9c3*/
            v29 = v28[2] >> stru_89E138.__pad_14B0[6132]; /*0x4bf9d9*/
            LOWORD(v28) = (unsigned __int8)(BYTE1(a7) >> stru_89E138.__pad_14B0[6140]); /*0x4bf9ef*/
            LOWORD(aP1a->field_0) = ((unsigned __int8)((unsigned __int8)a7 >> stru_89E138.__pad_14B0[6124]) << stru_89E138.__pad_14B0[6120]) /*0x4bfa15*/
                                  | ((_DWORD)v28 << stru_89E138.__pad_14B0[6136])
                                  | (v29 << stru_89E138.__pad_14B0[6128]);
            v30 = *v27 + *v26; /*0x4bfa1a*/
            *v26 = v30; /*0x4bfa22*/
            if ( v32 && *v27 < 0.0 ) /*0x4bfa38*/
            {
              *v26 = 0.0; /*0x4bfa3c*/
            }
            else
            {
              if ( v30 <= 1.0 || *v27 <= 0.0 ) /*0x4bfa5e*/
                goto LABEL_31; /*0x4bfa5e*/
              *v26 = 1.0; /*0x4bfa60*/
            }
            *v27 = -*v27; /*0x4bfa6a*/
LABEL_31:
            v33 = aP3a == (DSurface *)1; /*0x4bfa6c*/
            aP1a = (IUnknown *)((char *)aP1a + (_DWORD)a2a); /*0x4bfa7b*/
            aP3a = (DSurface *)((char *)aP3a - 1); /*0x4bfa7f*/
            if ( v33 ) /*0x4bfa83*/
              goto LABEL_17; /*0x4bfa83*/
          }
        }
        v34 = v63 - v61; /*0x4bfaa1*/
        v35 = a1 - v60; /*0x4bfaa6*/
        v58 = a1 - v60; /*0x4bfaaa*/
        v36 = (*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 116))(v8); /*0x4bfaae*/
        a2b = v36; /*0x4bfab3*/
        if ( v34 < 0 ) /*0x4bfab7*/
          a2b = -v36; /*0x4bfabb*/
        v57 = 2 * v35; /*0x4bfac7*/
        v37 = abs32(v34); /*0x4bfacb*/
        aP3b = (DSurface *)(2 * v37); /*0x4bfad2*/
        if ( v35 > v37 ) /*0x4bfad6*/
        {
          v38 = 0; /*0x4bfade*/
          v39 = 2 * v37 - v35; /*0x4bfae0*/
          if ( v35 < 0 ) /*0x4bfae4*/
          {
LABEL_61:
            v8 = this; /*0x4bfd08*/
            goto LABEL_17; /*0x4bfd08*/
          }
          v40 = a7; /*0x4bfaea*/
          v41 = a6; /*0x4bfaee*/
          while ( 1 ) /*0x4bfb06*/
          {
            v42 = Color::Lerp2(&a6, a5, arg10, *v40); /*0x4bfb06*/
            LOWORD(a7) = *(_WORD *)v42; /*0x4bfb11*/
            v43 = v42[2] >> stru_89E138.__pad_14B0[6132]; /*0x4bfb27*/
            LOWORD(v42) = (unsigned __int8)(BYTE1(a7) >> stru_89E138.__pad_14B0[6140]); /*0x4bfb3d*/
            *((_WORD *)&aP1a->field_0 + v38) = ((unsigned __int8)((unsigned __int8)a7 >> stru_89E138.__pad_14B0[6124]) << stru_89E138.__pad_14B0[6120]) /*0x4bfb63*/
                                             | ((_DWORD)v42 << stru_89E138.__pad_14B0[6136])
                                             | (v43 << stru_89E138.__pad_14B0[6128]);
            v44 = *v41 + *v40; /*0x4bfb69*/
            *v40 = v44; /*0x4bfb71*/
            if ( v46 && *v41 < 0.0 ) /*0x4bfb87*/
            {
              *v40 = 0.0; /*0x4bfb8b*/
            }
            else
            {
              if ( v44 <= 1.0 || *v41 <= 0.0 ) /*0x4bfbad*/
                goto LABEL_45; /*0x4bfbad*/
              *v40 = 1.0; /*0x4bfbaf*/
            }
            *v41 = -*v41; /*0x4bfbb9*/
LABEL_45:
            if ( v39 > 0 ) /*0x4bfbbd*/
            {
              v39 -= v57; /*0x4bfbc9*/
              aP1a = (IUnknown *)((char *)aP1a + a2b); /*0x4bfbcb*/
            }
            v39 += (int)aP3b; /*0x4bfbd7*/
            if ( ++v38 > v58 ) /*0x4bfbdc*/
            {
              (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this); /*0x4bfbeb*/
              return 1; /*0x4bfbf7*/
            }
          }
        }
        v47 = 2 * v35 - v37; /*0x4bfbfa*/
        if ( v37 < 0 ) /*0x4bfbfe*/
          goto LABEL_17; /*0x4bfbfe*/
        v48 = a7; /*0x4bfc04*/
        v49 = a6; /*0x4bfc08*/
        v50 = 0; /*0x4bfc0c*/
        v59 = v37 + 1; /*0x4bfc0f*/
        while ( 1 ) /*0x4bfc27*/
        {
          v51 = Color::Lerp2(&a6, a5, arg10, *v48); /*0x4bfc27*/
          LOWORD(a7) = *(_WORD *)v51; /*0x4bfc32*/
          v52 = v51[2] >> stru_89E138.__pad_14B0[6132]; /*0x4bfc48*/
          LOWORD(v51) = (unsigned __int8)(BYTE1(a7) >> stru_89E138.__pad_14B0[6140]); /*0x4bfc5e*/
          *(_WORD *)((char *)&aP1a->field_0 + v50) = ((unsigned __int8)((unsigned __int8)a7 >> stru_89E138.__pad_14B0[6124]) << stru_89E138.__pad_14B0[6120]) /*0x4bfc84*/
                                                   | ((_DWORD)v51 << stru_89E138.__pad_14B0[6136])
                                                   | (v52 << stru_89E138.__pad_14B0[6128]);
          v53 = *v49 + *v48; /*0x4bfc8a*/
          *v48 = v53; /*0x4bfc92*/
          if ( v55 && *v49 < 0.0 ) /*0x4bfca8*/
          {
            *v48 = 0.0; /*0x4bfcac*/
          }
          else
          {
            if ( v53 <= 1.0 || *v49 <= 0.0 ) /*0x4bfcce*/
              goto LABEL_58; /*0x4bfcce*/
            *v48 = 1.0; /*0x4bfcd0*/
          }
          *v49 = -*v49; /*0x4bfcda*/
LABEL_58:
          if ( v47 > 0 ) /*0x4bfcde*/
          {
            v50 += 2; /*0x4bfce4*/
            v47 -= (int)aP3b; /*0x4bfce7*/
          }
          v47 += v57; /*0x4bfcf1*/
          v33 = v59 == 1; /*0x4bfcf9*/
          aP1a = (IUnknown *)((char *)aP1a + a2b); /*0x4bfcfa*/
          --v59; /*0x4bfcfe*/
          if ( v33 ) /*0x4bfd02*/
            goto LABEL_61; /*0x4bfd02*/
        }
      }
    }
  }
  return 0; /*0x4bf94b*/
}
}

// 0x4BFD30
char DSurface::DrawLineZBuf(int a1, int a2, int a3, unsigned int * a4, unsigned int * a5, unsigned short a6, int a7, int a8, char a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall DSurface_DrawLineZBuf(
        int a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int16 a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // eax
  int *v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  unsigned __int64 v16; // rax
  int v17; // ebp
  unsigned int v18; // esi
  int v19; // edi
  int v20; // esi
  unsigned int v21; // ebp
  double v22; // st7
  double v23; // st7
  int v24; // eax
  unsigned int v25; // eax
  double v26; // st7
  int v27; // eax
  double v28; // st6
  double v29; // st7
  int v30; // eax
  unsigned int v31; // eax
  int v32; // ebp
  int v33; // ebx
  int v34; // edi
  _WORD *v35; // esi
  int v36; // edi
  _WORD *v37; // edi
  int v38; // ecx
  int v39; // ebx
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ebp
  int v45; // ebx
  _DWORD *v46; // edx
  _DWORD *v47; // ebp
  int v48; // eax
  int v49; // edx
  int v50; // eax
  _WORD *v51; // eax
  _WORD *v52; // eax
  int v54; // ebx
  _DWORD *v55; // edx
  _DWORD *v56; // ebp
  int v57; // eax
  int v58; // edx
  _WORD *v59; // eax
  _WORD *v60; // eax
  int v61; // eax
  int v62; // ebp
  _DWORD *v63; // edx
  _DWORD *v64; // ecx
  int v65; // ebx
  int v66; // eax
  int v67; // eax
  _WORD *v68; // eax
  _WORD *v69; // eax
  int v70; // [esp+1Ch] [ebp-64h]
  int v71; // [esp+20h] [ebp-60h]
  int v72; // [esp+20h] [ebp-60h]
  int v73; // [esp+20h] [ebp-60h]
  int v74; // [esp+24h] [ebp-5Ch]
  int v75; // [esp+28h] [ebp-58h]
  int v76; // [esp+2Ch] [ebp-54h]
  int v77; // [esp+30h] [ebp-50h]
  int v78; // [esp+30h] [ebp-50h]
  int v79; // [esp+34h] [ebp-4Ch]
  int v80; // [esp+38h] [ebp-48h]
  double v81; // [esp+3Ch] [ebp-44h]
  int v82; // [esp+3Ch] [ebp-44h]
  int v83; // [esp+3Ch] [ebp-44h]
  _DWORD v84[5]; // [esp+4Ch] [ebp-34h] BYREF
  unsigned __int64 v85; // [esp+60h] [ebp-20h]
  unsigned __int64 v86; // [esp+68h] [ebp-18h]
  int v87; // [esp+70h] [ebp-10h] BYREF
  int v88; // [esp+74h] [ebp-Ch]
  int v89; // [esp+78h] [ebp-8h]
  int v90; // [esp+7Ch] [ebp-4h]
  int v91; // [esp+84h] [ebp+4h]
  int v92; // [esp+88h] [ebp+8h]
  int v93; // [esp+88h] [ebp+8h]
  int v94; // [esp+8Ch] [ebp+Ch]
  int v95; // [esp+8Ch] [ebp+Ch]
  int v96; // [esp+8Ch] [ebp+Ch]
  int v97; // [esp+94h] [ebp+14h]
  int v98; // [esp+98h] [ebp+18h]
  int v99; // [esp+98h] [ebp+18h]

  v84[0] = a1; /*0x4bfd3e*/
  v9 = (*(int (__stdcall **)(_DWORD *))(*(_DWORD *)a1 + 120))(&v84[1]); /*0x4bfd42*/
  v10 = (int *)ClipRectIntersection(v9, 0, 0); /*0x4bfd52*/
  v11 = *v10; /*0x4bfd59*/
  v87 = *v10; /*0x4bfd5b*/
  v12 = v10[1]; /*0x4bfd5f*/
  v88 = v12; /*0x4bfd62*/
  v89 = v10[2]; /*0x4bfd69*/
  v13 = v10[3]; /*0x4bfd6d*/
  v90 = v13; /*0x4bfd72*/
  if ( !v89 && !v13 ) /*0x4bfd7a*/
    return 0; /*0x4bfd7a*/
  LODWORD(v16) = v11 + *a4; /*0x4bfd92*/
  v14 = v11 + *a5; /*0x4bfd94*/
  v15 = a7; /*0x4bfd99*/
  HIDWORD(v16) = v12 + a4[1]; /*0x4bfda0*/
  v17 = v16; /*0x4bfda2*/
  v18 = v12 + a5[1]; /*0x4bfda4*/
  v19 = a8; /*0x4bfda6*/
  v85 = v16; /*0x4bfdaf*/
  v86 = __PAIR64__(v18, v14); /*0x4bfdb7*/
  if ( (int)v16 > v14 ) /*0x4bfdbf*/
  {
    v17 = v14; /*0x4bfdc1*/
    v15 = a8; /*0x4bfdc3*/
    v19 = a7; /*0x4bfdc5*/
    v85 = __PAIR64__(v18, v14); /*0x4bfdcc*/
    v86 = v16; /*0x4bfdd4*/
  }
  *(_QWORD *)&v84[1] = v86; /*0x4bfde8*/
  v20 = v17; /*0x4bfded*/
  v21 = HIDWORD(v85); /*0x4bfdef*/
  if ( !(unsigned __int8)ClipLine(&v87) ) /*0x4bfdff*/
    return 0; /*0x4bfe06*/
  v92 = v19; /*0x4bfe1a*/
  v98 = v15; /*0x4bfe1e*/
  if ( v86 != *(_QWORD *)&v84[1] ) /*0x4bfe25*/
  {
    v22 = Math::Sqrt( /*0x4bfe5d*/
            (double)(int)(v21 - HIDWORD(v86)) * (double)(int)(v21 - HIDWORD(v86))
          + (double)(v20 - (int)v86) * (double)(v20 - (int)v86));
    v81 = (double)(int)Math::RoundToInt(v22); /*0x4bfe95*/
    v23 = Math::Sqrt((double)(int)(v21 - v84[2]) * (double)(int)(v21 - v84[2]) + (double)(v20 - v84[1]) /*0x4bfeaa*/
                                                                               * (double)(v20 - v84[1]));
    v24 = Math::RoundToInt(v23); /*0x4bfeb2*/
    v25 = abs32(Math::RoundToInt(v81 / (double)v24 * (double)(v15 - v19))); /*0x4bfee5*/
    if ( v15 >= v19 ) /*0x4bfee9*/
      v92 = v15 - v25; /*0x4bfef7*/
    else
      v92 = v15 + v25; /*0x4bfeed*/
  }
  if ( v85 == __PAIR64__(v21, v20) ) /*0x4bff05*/
    goto LABEL_14; /*0x4bff05*/
  v26 = Math::Sqrt( /*0x4bff3f*/
          (double)(HIDWORD(v85) - v84[2]) * (double)(HIDWORD(v85) - v84[2])
        + (double)((int)v85 - v84[1]) * (double)((int)v85 - v84[1]));
  v27 = Math::RoundToInt(v26); /*0x4bff44*/
  v82 = v20 - v84[1]; /*0x4bff56*/
  v28 = (double)(int)(v21 - v84[2]); /*0x4bff68*/
  *(double *)&v84[1] = (double)v27; /*0x4bff73*/
  v29 = Math::Sqrt(v28 * v28 + (double)v82 * (double)v82); /*0x4bff88*/
  v30 = Math::RoundToInt(v29); /*0x4bff90*/
  v31 = abs32(Math::RoundToInt(*(double *)&v84[1] / (double)v30 * (double)(v15 - v19))); /*0x4bffc3*/
  if ( v19 <= v15 ) /*0x4bffc7*/
  {
    v98 = v19 + v31; /*0x4bffd1*/
LABEL_14:
    v32 = v98; /*0x4bffd8*/
    goto LABEL_15; /*0x4bffd8*/
  }
  v32 = v19 - v31; /*0x4bffcb*/
LABEL_15:
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 112))(v84[0]); /*0x4bffdf*/
  v33 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v84[0] + 92))(v84[0], v85, HIDWORD(v85)); /*0x4c0001*/
  v97 = v33; /*0x4c0005*/
  if ( !MEMORY[0x887644] ) /*0x4c000c*/
    return 0; /*0x4c000c*/
  v34 = *((_DWORD *)MEMORY[0x887644] + 1); /*0x4c0016*/
  v84[2] = HIDWORD(v85); /*0x4c001d*/
  v35 = (_WORD *)Audio::GetSamplePosition(v85, HIDWORD(v85) - v34); /*0x4c0034*/
  v36 = *((_DWORD *)MEMORY[0x87E8A4] + 1); /*0x4c003a*/
  v84[2] = HIDWORD(v85); /*0x4c003d*/
  v37 = (_WORD *)StreamClass::ReadAndSeek(v85, HIDWORD(v85) - v36); /*0x4c004e*/
  v76 = -1; /*0x4c0055*/
  LOWORD(v38) = *((_WORD *)MEMORY[0x887644] + 2) + *((_WORD *)MEMORY[0x887644] + 18); /*0x4c0061*/
  v91 = *((_DWORD *)MEMORY[0x887644] + 10); /*0x4c0068*/
  v99 = v32 + v38 - HIDWORD(v85) - v88; /*0x4c0076*/
  if ( !v33 ) /*0x4c007d*/
    return 0; /*0x4c073e*/
  LOBYTE(v84[1]) = (unsigned __int8)(a6 >> MEMORY[0x8A0DD0]) << MEMORY[0x8A0DD4]; /*0x4c00a5*/
  BYTE1(v84[1]) = (unsigned __int8)(a6 >> MEMORY[0x8A0DE0]) << MEMORY[0x8A0DE4]; /*0x4c00c6*/
  v39 = HIDWORD(v86) - HIDWORD(v85); /*0x4c00ce*/
  BYTE2(v84[1]) = (unsigned __int8)(a6 >> MEMORY[0x8A0DD8]) << MEMORY[0x8A0DDC]; /*0x4c00d6*/
  v79 = LOBYTE(v84[1]); /*0x4c00e3*/
  v80 = BYTE1(v84[1]); /*0x4c00f0*/
  v83 = BYTE2(v84[1]); /*0x4c00fd*/
  v94 = v86 - v85; /*0x4c010b*/
  v40 = v92 - v32; /*0x4c011a*/
  v41 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 116))(v84[0]); /*0x4c011c*/
  v75 = v41; /*0x4c0121*/
  if ( v39 < 0 ) /*0x4c0125*/
  {
    v75 = -v41; /*0x4c0129*/
    v91 = -v91; /*0x4c0133*/
    v76 = 1; /*0x4c0137*/
  }
  v74 = 1; /*0x4c0141*/
  v42 = abs32(v39); /*0x4c014e*/
  if ( v40 < 0 ) /*0x4c0152*/
    v74 = -1; /*0x4c0154*/
  v93 = 2 * v42; /*0x4c0164*/
  v43 = abs32(v40); /*0x4c0168*/
  v44 = 2 * v94; /*0x4c0173*/
  v77 = 2 * v94; /*0x4c0179*/
  v70 = 2 * v43; /*0x4c017d*/
  if ( v43 <= v94 || v43 <= v42 ) /*0x4c0189*/
  {
    if ( v94 <= v42 ) /*0x4c0375*/
    {
      v62 = v44 - v42; /*0x4c0559*/
      v84[1] = 2 * v43 - v42; /*0x4c055f*/
      if ( v42 > 0 ) /*0x4c0563*/
      {
        v63 = MEMORY[0x87E8A4]; /*0x4c0569*/
        v73 = v42; /*0x4c056f*/
        v64 = MEMORY[0x887644]; /*0x4c0573*/
        v96 = 0; /*0x4c0579*/
        do /*0x4c0720*/
        {
          v65 = v99; /*0x4c0584*/
          v66 = (unsigned __int16)*v37; /*0x4c0590*/
          if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c058b*/
          {
            if ( v66 == 127 ) /*0x4c05a4*/
            {
              *(_WORD *)(v96 + v97) = a6; /*0x4c0627*/
            }
            else
            {
              v65 = v99; /*0x4c05f2*/
              *(_WORD *)(v96 + v97) = ((v83 * v66) >> 7 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4c060b*/
                                    | ((v80 * v66) >> 7 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                    | ((v79 * v66) >> 7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
            }
            if ( a9 ) /*0x4c0634*/
              *v35 = v65; /*0x4c0636*/
            v64 = MEMORY[0x887644]; /*0x4c0639*/
            v63 = MEMORY[0x87E8A4]; /*0x4c063f*/
          }
          if ( v62 > 0 ) /*0x4c0647*/
          {
            ++v35; /*0x4c0650*/
            v96 += 2; /*0x4c0656*/
            if ( (unsigned int)v35 >= v64[7] ) /*0x4c0662*/
              v35 = (_WORD *)((char *)v35 - v64[8]); /*0x4c0664*/
            if ( (unsigned int)++v37 >= v63[7] ) /*0x4c066f*/
              v37 = (_WORD *)((char *)v37 - v63[8]); /*0x4c0671*/
            v62 -= v93; /*0x4c0674*/
          }
          v67 = v84[1]; /*0x4c0678*/
          if ( v84[1] > 0 ) /*0x4c067e*/
          {
            v99 = v74 + v65; /*0x4c0684*/
            v67 = v84[1] - v93; /*0x4c068f*/
          }
          v62 += v77; /*0x4c0695*/
          v84[1] = v70 + v67; /*0x4c06a4*/
          v97 += v75; /*0x4c06ae*/
          v35 += v91; /*0x4c06bc*/
          if ( v91 <= 0 ) /*0x4c06c0*/
          {
            v68 = v35; /*0x4c06cf*/
            if ( (unsigned int)v35 < v64[6] ) /*0x4c06d3*/
              v68 = (_WORD *)((char *)v35 + v64[8]); /*0x4c06d8*/
            v35 = v68; /*0x4c06da*/
          }
          else if ( (unsigned int)v35 >= v64[7] ) /*0x4c06c5*/
          {
            v35 = (_WORD *)((char *)v35 - v64[8]); /*0x4c06c7*/
          }
          v99 += v76; /*0x4c06e9*/
          v37 += v91; /*0x4c06f7*/
          if ( v91 <= 0 ) /*0x4c06fb*/
          {
            v69 = v37; /*0x4c070a*/
            if ( (unsigned int)v37 < v63[6] ) /*0x4c070e*/
              v69 = (_WORD *)((char *)v37 + v63[8]); /*0x4c0713*/
            v37 = v69; /*0x4c0715*/
          }
          else if ( (unsigned int)v37 >= v63[7] ) /*0x4c0700*/
          {
            v37 = (_WORD *)((char *)v37 - v63[8]); /*0x4c0702*/
          }
          --v73; /*0x4c071c*/
        }
        while ( v73 ); /*0x4c0720*/
      }
    }
    else
    {
      v54 = v93 - v94; /*0x4c038a*/
      v72 = 0; /*0x4c038e*/
      v78 = v70 - v94; /*0x4c0398*/
      if ( v94 > 0 ) /*0x4c039c*/
      {
        v55 = MEMORY[0x887644]; /*0x4c03a2*/
        v56 = MEMORY[0x87E8A4]; /*0x4c03a8*/
        do /*0x4c053c*/
        {
          v57 = (unsigned __int16)*v37; /*0x4c03bb*/
          if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c03b6*/
          {
            if ( v57 == 127 ) /*0x4c03cf*/
              LOWORD(v58) = a6; /*0x4c0423*/
            else
              v58 = ((v83 * v57) >> 7 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4c041f*/
                  | ((v80 * v57) >> 7 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                  | ((v79 * v57) >> 7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
            *(_WORD *)(v97 + 2 * v72) = v58; /*0x4c0436*/
            if ( a9 ) /*0x4c0443*/
              *v35 = v99; /*0x4c044d*/
            v55 = MEMORY[0x887644]; /*0x4c0450*/
            v56 = MEMORY[0x87E8A4]; /*0x4c0456*/
          }
          if ( v54 > 0 ) /*0x4c045e*/
          {
            v97 += v75; /*0x4c046d*/
            v54 -= 2 * v94; /*0x4c047e*/
            v35 += v91; /*0x4c0487*/
            if ( v91 <= 0 ) /*0x4c048b*/
            {
              v59 = v35; /*0x4c049a*/
              if ( (unsigned int)v35 < v55[6] ) /*0x4c049c*/
                v59 = (_WORD *)((char *)v35 + v55[8]); /*0x4c04a1*/
              v35 = v59; /*0x4c04a3*/
            }
            else if ( (unsigned int)v35 >= v55[7] ) /*0x4c0490*/
            {
              v35 = (_WORD *)((char *)v35 - v55[8]); /*0x4c0492*/
            }
            v37 += v91; /*0x4c04a9*/
            v99 += v76; /*0x4c04ab*/
            if ( v91 <= 0 ) /*0x4c04b8*/
            {
              v60 = v37; /*0x4c04c7*/
              if ( (unsigned int)v37 < v56[6] ) /*0x4c04cb*/
                v60 = (_WORD *)((char *)v37 + v56[8]); /*0x4c04d0*/
              v37 = v60; /*0x4c04d2*/
            }
            else if ( (unsigned int)v37 >= v56[7] ) /*0x4c04bd*/
            {
              v37 = (_WORD *)((char *)v37 - v56[8]); /*0x4c04bf*/
            }
          }
          v61 = v78; /*0x4c04d4*/
          if ( v78 > 0 ) /*0x4c04da*/
          {
            v99 += v74; /*0x4c04e9*/
            v61 = v78 - 2 * v94; /*0x4c04fe*/
          }
          ++v35; /*0x4c0504*/
          v54 += v93; /*0x4c0507*/
          v78 = v70 + v61; /*0x4c050f*/
          if ( (unsigned int)v35 >= v55[7] ) /*0x4c0518*/
            v35 = (_WORD *)((char *)v35 - v55[8]); /*0x4c051a*/
          if ( (unsigned int)++v37 >= v56[7] ) /*0x4c0525*/
            v37 = (_WORD *)((char *)v37 - v56[8]); /*0x4c0527*/
          ++v72; /*0x4c0538*/
        }
        while ( v72 < v94 ); /*0x4c053c*/
      }
    }
  }
  else
  {
    v45 = v93 - v43; /*0x4c0195*/
    v71 = v44 - v43; /*0x4c019b*/
    if ( v43 > 0 ) /*0x4c019f*/
    {
      v46 = MEMORY[0x887644]; /*0x4c01a5*/
      v47 = MEMORY[0x87E8A4]; /*0x4c01ab*/
      v95 = 0; /*0x4c01b1*/
      v84[1] = v43; /*0x4c01bc*/
      do /*0x4c0358*/
      {
        v48 = (unsigned __int16)*v37; /*0x4c01cd*/
        if ( (unsigned __int16)v99 < *v35 && *v37 ) /*0x4c01c8*/
        {
          if ( v48 == 127 ) /*0x4c01e1*/
            LOWORD(v49) = a6; /*0x4c0235*/
          else
            v49 = ((v83 * v48) >> 7 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]) /*0x4c0231*/
                | ((v80 * v48) >> 7 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | ((v79 * v48) >> 7 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
          *(_WORD *)(v95 + v97) = v49; /*0x4c024b*/
          if ( a9 ) /*0x4c0258*/
            *v35 = v99; /*0x4c0262*/
          v46 = MEMORY[0x887644]; /*0x4c0265*/
          v47 = MEMORY[0x87E8A4]; /*0x4c026b*/
        }
        if ( v45 > 0 ) /*0x4c0273*/
        {
          v45 -= v70; /*0x4c0286*/
          v50 = v91; /*0x4c0288*/
          v97 += v75; /*0x4c028c*/
          v35 += v91; /*0x4c0296*/
          if ( v91 <= 0 ) /*0x4c029a*/
          {
            v51 = v35; /*0x4c02a9*/
            if ( (unsigned int)v35 < v46[6] ) /*0x4c02ab*/
              v51 = (_WORD *)((char *)v35 + v46[8]); /*0x4c02b0*/
            v35 = v51; /*0x4c02b2*/
            v50 = v91; /*0x4c02b4*/
          }
          else if ( (unsigned int)v35 >= v46[7] ) /*0x4c029f*/
          {
            v35 = (_WORD *)((char *)v35 - v46[8]); /*0x4c02a1*/
          }
          v37 += v91; /*0x4c02b8*/
          if ( v50 <= 0 ) /*0x4c02bc*/
          {
            v52 = v37; /*0x4c02cb*/
            if ( (unsigned int)v37 < v47[6] ) /*0x4c02cf*/
              v52 = (_WORD *)((char *)v37 + v47[8]); /*0x4c02d4*/
            v37 = v52; /*0x4c02d6*/
          }
          else if ( (unsigned int)v37 >= v47[7] ) /*0x4c02c1*/
          {
            v37 = (_WORD *)((char *)v37 - v47[8]); /*0x4c02c3*/
          }
          v99 += v76; /*0x4c02e5*/
        }
        if ( v71 > 0 ) /*0x4c02f2*/
        {
          ++v35; /*0x4c02fb*/
          v95 += 2; /*0x4c0301*/
          if ( (unsigned int)v35 >= v46[7] ) /*0x4c030d*/
            v35 = (_WORD *)((char *)v35 - v46[8]); /*0x4c030f*/
          if ( (unsigned int)++v37 >= v47[7] ) /*0x4c031a*/
            v37 = (_WORD *)((char *)v37 - v47[8]); /*0x4c031c*/
          v71 -= v70; /*0x4c0323*/
        }
        v99 += v74; /*0x4c0338*/
        v71 += v77; /*0x4c0349*/
        v45 += v93; /*0x4c0351*/
        --v84[1]; /*0x4c0354*/
      }
      while ( v84[1] ); /*0x4c0358*/
    }
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v84[0] + 96))(v84[0]); /*0x4c0364*/
  return 1; /*0x4c0367*/
}
}

// 0x4C0750
int DSurface::DrawDashedLineStipple(int * a1, int * a2, short a4, int a5, int a6, DSurface * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DSurface::DrawDashedLineStipple(void *this, int *a1, int *a2, __int16 a4, int a5, int a6, DSurface *aP6)
{
  MouseClass *v7; // ebp
  int v8; // edi
  int v9; // ebx
  int v10; // esi
  MouseClass *v12; // ecx
  int v13; // eax
  int v14; // eax
  signed int v15; // ecx
  signed int v16; // eax
  int v17; // ebx
  _WORD *v18; // esi
  TacticalClass *v19; // edx
  char *v20; // ecx
  _WORD *v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  TacticalClass *v26; // edx
  char *v27; // ecx
  _WORD *v28; // edi
  _WORD *v29; // eax
  int v30; // ecx
  int v31; // ebx
  int v32; // esi
  int v33; // eax
  int v34; // eax
  DSurface *v35; // edi
  int v36; // esi
  TacticalClass *v37; // ecx
  char *v38; // edx
  _WORD *v39; // eax
  int v40; // edx
  int v41; // esi
  TacticalClass *v42; // edx
  char *v43; // ebx
  _WORD *v44; // ecx
  int *v45; // eax
  int v46; // ebx
  int v47; // ebx
  _WORD *v48; // esi
  TacticalClass *v49; // edx
  char *v50; // ecx
  _WORD *v51; // eax
  int v52; // edi
  int v53; // ecx
  int v54; // ebx
  int v55; // eax
  TacticalClass *v56; // edx
  char *v57; // ecx
  _WORD *v58; // edi
  _WORD *v59; // eax
  int v60; // ecx
  int v61; // ebx
  int v62; // esi
  int v63; // eax
  int v64; // eax
  DSurface *v65; // edi
  int v66; // esi
  TacticalClass *v67; // ecx
  char *v68; // edx
  _WORD *v69; // eax
  int v70; // edx
  int v71; // esi
  TacticalClass *v72; // edx
  _WORD *v73; // ecx
  int *v74; // eax
  int v75; // ebx
  DSurface *v76; // [esp+10h] [ebp-20h]
  unsigned int v77; // [esp+14h] [ebp-1Ch]
  int v79; // [esp+1Ch] [ebp-14h]
  int v80; // [esp+1Ch] [ebp-14h]
  int v81; // [esp+20h] [ebp-10h]
  int v82; // [esp+20h] [ebp-10h]
  int v83; // [esp+24h] [ebp-Ch]
  int v84; // [esp+24h] [ebp-Ch]
  int v85; // [esp+28h] [ebp-8h]
  int v86; // [esp+28h] [ebp-8h]
  int a1a; // [esp+34h] [ebp+4h]
  int *a2a; // [esp+38h] [ebp+8h]
  DSurface *aP6a; // [esp+48h] [ebp+18h]
  DSurface *aP6b; // [esp+48h] [ebp+18h]
  DSurface *aP6c; // [esp+48h] [ebp+18h]
  DSurface *aP6d; // [esp+48h] [ebp+18h]
  DSurface *aP6e; // [esp+48h] [ebp+18h]
  DSurface *aP6f; // [esp+48h] [ebp+18h]

  v7 = (MouseClass *)*a1; /*0x4c075a*/
  v8 = a1[1]; /*0x4c075d*/
  v76 = (DSurface *)1; /*0x4c0768*/
  v9 = *a2; /*0x4c0770*/
  v10 = a2[1]; /*0x4c0772*/
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this) != 2 ) /*0x4c077d*/
    return 0; /*0x4c0788*/
  if ( (int)v7 > v9 ) /*0x4c078d*/
  {
    v12 = v7; /*0x4c078f*/
    v13 = v8; /*0x4c0791*/
    v7 = (MouseClass *)v9; /*0x4c0793*/
    v8 = v10; /*0x4c0795*/
    v10 = v13; /*0x4c079b*/
    v14 = v9; /*0x4c079d*/
    v9 = (int)v12; /*0x4c079f*/
    v15 = abs32(v14 - (_DWORD)v12); /*0x4c07aa*/
    v16 = abs32(v8 - v10) + 1; /*0x4c07b5*/
    if ( v15 < v16 ) /*0x4c07b8*/
      v15 = v16; /*0x4c07ba*/
    a6 = (v15 + a6) % 16; /*0x4c07cf*/
    v76 = (DSurface *)-1; /*0x4c07d3*/
  }
  v77 = StreamClass::ReadAndSeek( /*0x4c07f3*/
          *(int *)&stru_87C374.__pad_14B0[4224],
          v7,
          (MouseClass *)(v8 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 4)));
  a1a = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x4c0801*/
  if ( v8 > v10 ) /*0x4c0805*/
    a1a = -*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x4c080b*/
  a2a = (int *)(*(int (__thiscall **)(void *, MouseClass *, int))(*(_DWORD *)this + 92))(this, v7, v8); /*0x4c081c*/
  if ( a2a )
  {
    if ( (_BYTE)aP6 )
    {
      if ( v8 == v10 )
      {
        v17 = v9 - (_DWORD)v7; /*0x4c083a*/
        if ( v17 >= 0 )
        {
          v18 = a2a; /*0x4c0842*/
          v19 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0846*/
          v20 = (char *)a6; /*0x4c084c*/
          v21 = (_WORD *)v77; /*0x4c0850*/
          v22 = v17 + 1; /*0x4c0854*/
          do
          {
            v23 = (int)&v20[(int)v20 < 0 ? 0x10 : 0];
            if ( v23 >= 16 ) /*0x4c0865*/
              v23 -= 16; /*0x4c0867*/
            if ( *(_BYTE *)(v23 + a5) && !*v21 ) /*0x4c0874*/
            {
              *v18 = a4; /*0x4c087f*/
              v19 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0882*/
            }
            if ( a1a <= 0 ) /*0x4c088e*/
            {
              if ( (unsigned int)++v21 < v19->nextArrayIndex ) /*0x4c08a7*/
                v21 = (_WORD *)((char *)v21 + (unsigned int)v19->NeedsSaveOrLink); /*0x4c08a9*/
            }
            else if ( (unsigned int)++v21 >= v19->referenceCount ) /*0x4c0898*/
            {
              v21 = (_WORD *)((char *)v21 - (unsigned int)v19->NeedsSaveOrLink); /*0x4c089a*/
            }
            ++v18; /*0x4c08ac*/
            v20 = (char *)v76 + v23; /*0x4c08af*/
            --v22; /*0x4c08b1*/
          }
          while ( v22 );
          a6 = (int)v20; /*0x4c08b4*/
        }
        goto LABEL_155; /*0x4c08b8*/
      }
      if ( v7 == (MouseClass *)v9 )
      {
        if ( v8 <= v10 ) /*0x4c08cb*/
          v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c08dd*/
        else
          v24 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c08d4*/
        v25 = abs32(v10 - v8); /*0x4c08e6*/
        if ( v25 >= 0 )
        {
          v26 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c08ee*/
          v27 = (char *)a6; /*0x4c08f4*/
          v28 = a2a; /*0x4c08fc*/
          aP6a = (DSurface *)(v25 + 1); /*0x4c0901*/
          v29 = (_WORD *)v77; /*0x4c0905*/
          do
          {
            v30 = (int)&v27[(int)v27 < 0 ? 0x10 : 0];
            if ( v30 >= 16 ) /*0x4c0913*/
              v30 -= 16; /*0x4c0915*/
            if ( *(_BYTE *)(v30 + a5) && !*v29 ) /*0x4c0922*/
            {
              *v28 = a4; /*0x4c092d*/
              v26 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0930*/
            }
            v28 = (_WORD *)((char *)v28 + v24); /*0x4c0936*/
            v29 += a1a; /*0x4c0938*/
            if ( a1a <= 0 ) /*0x4c093d*/
            {
              if ( (unsigned int)v29 < v26->nextArrayIndex ) /*0x4c094c*/
                v29 = (_WORD *)((char *)v29 + (unsigned int)v26->NeedsSaveOrLink); /*0x4c094e*/
            }
            else if ( (unsigned int)v29 >= v26->referenceCount ) /*0x4c0942*/
            {
              v29 = (_WORD *)((char *)v29 - (unsigned int)v26->NeedsSaveOrLink); /*0x4c0944*/
            }
            v27 = (char *)v76 + v30; /*0x4c0955*/
            aP6a = (DSurface *)((char *)aP6a - 1); /*0x4c095c*/
          }
          while ( aP6a );
          a6 = (int)v27; /*0x4c0962*/
        }
        goto LABEL_155; /*0x4c0966*/
      }
      v31 = v9 - (_DWORD)v7; /*0x4c096f*/
      v32 = v10 - v8; /*0x4c0971*/
      v33 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0975*/
      v79 = v33; /*0x4c097a*/
      if ( v32 < 0 ) /*0x4c097e*/
        v79 = -v33; /*0x4c0982*/
      v85 = 2 * v31; /*0x4c098e*/
      v34 = abs32(v32); /*0x4c0992*/
      v81 = 2 * v34; /*0x4c0999*/
      if ( v31 > v34 )
      {
        v35 = 0; /*0x4c09a5*/
        v36 = 2 * v34 - v31; /*0x4c09a7*/
        aP6b = 0; /*0x4c09a9*/
        if ( v31 > 0 )
        {
          v37 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c09b5*/
          v38 = (char *)a6; /*0x4c09bb*/
          v39 = (_WORD *)v77; /*0x4c09bf*/
          do
          {
            v40 = (int)&v38[(int)v38 < 0 ? 0x10 : 0];
            if ( v40 >= 16 ) /*0x4c09cd*/
              v40 -= 16; /*0x4c09cf*/
            if ( *(_BYTE *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
            {
              *((_WORD *)a2a + (_DWORD)v35) = a4; /*0x4c09eb*/
              v37 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c09f0*/
            }
            if ( v36 > 0 ) /*0x4c09f8*/
            {
              a2a = (int *)((char *)a2a + v79); /*0x4c0a08*/
              v39 += a1a; /*0x4c0a0c*/
              if ( (unsigned int)v39 >= v37->referenceCount ) /*0x4c0a14*/
                v39 = (_WORD *)((char *)v39 - (unsigned int)v37->NeedsSaveOrLink); /*0x4c0a16*/
              v36 -= 2 * v31; /*0x4c0a1c*/
              v35 = aP6b; /*0x4c0a1e*/
            }
            v36 += v81; /*0x4c0a26*/
            if ( a1a <= 0 ) /*0x4c0a2e*/
            {
              if ( (unsigned int)++v39 < v37->nextArrayIndex ) /*0x4c0a47*/
                v39 = (_WORD *)((char *)v39 + (unsigned int)v37->NeedsSaveOrLink); /*0x4c0a49*/
            }
            else if ( (unsigned int)++v39 >= v37->referenceCount ) /*0x4c0a38*/
            {
              v39 = (_WORD *)((char *)v39 - (unsigned int)v37->NeedsSaveOrLink); /*0x4c0a3a*/
            }
            v35 = (DSurface *)((char *)v35 + 1); /*0x4c0a50*/
            v38 = (char *)v76 + v40; /*0x4c0a51*/
            aP6b = v35; /*0x4c0a55*/
          }
          while ( (int)v35 < v31 );
          a6 = (int)v38; /*0x4c0a5f*/
        }
        goto LABEL_155; /*0x4c0a63*/
      }
      v41 = 2 * v31 - v34; /*0x4c0a68*/
      if ( v34 > 0 )
      {
        v42 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0a72*/
        v43 = (char *)a6; /*0x4c0a78*/
        v44 = (_WORD *)v77; /*0x4c0a7c*/
        v83 = v34; /*0x4c0a84*/
        v45 = a2a; /*0x4c0a88*/
        aP6c = 0; /*0x4c0a8c*/
        do
        {
          v46 = (int)&v43[(int)v43 < 0 ? 0x10 : 0];
          if ( v46 >= 16 ) /*0x4c0a9e*/
            v46 -= 16; /*0x4c0aa0*/
          if ( *(_BYTE *)(v46 + a5) && !*v44 ) /*0x4c0aad*/
          {
            *(_WORD *)((char *)&aP6c->field_0 + (_DWORD)v45) = a4; /*0x4c0abc*/
            v42 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0ac0*/
          }
          if ( v41 > 0 ) /*0x4c0ac8*/
          {
            ++v44; /*0x4c0ace*/
            aP6c = (DSurface *)((char *)aP6c + 2); /*0x4c0ad4*/
            if ( (unsigned int)v44 >= v42->referenceCount ) /*0x4c0add*/
              v44 = (_WORD *)((char *)v44 - (unsigned int)v42->NeedsSaveOrLink); /*0x4c0adf*/
            v41 -= v81; /*0x4c0ae2*/
          }
          v44 += a1a; /*0x4c0aea*/
          v41 += v85; /*0x4c0aed*/
          v45 = (int *)((char *)v45 + v79); /*0x4c0af3*/
          if ( a1a <= 0 ) /*0x4c0af7*/
          {
            if ( (unsigned int)v44 < v42->nextArrayIndex ) /*0x4c0b06*/
              v44 = (_WORD *)((char *)v44 + (unsigned int)v42->NeedsSaveOrLink); /*0x4c0b08*/
          }
          else if ( (unsigned int)v44 >= v42->referenceCount ) /*0x4c0afc*/
          {
            v44 = (_WORD *)((char *)v44 - (unsigned int)v42->NeedsSaveOrLink); /*0x4c0afe*/
          }
          v43 = (char *)v76 + v46; /*0x4c0b0f*/
          --v83; /*0x4c0b16*/
        }
        while ( v83 );
LABEL_154:
        a6 = (int)v43; /*0x4c0e13*/
      }
    }
    else
    {
      if ( v8 == v10 )
      {
        v47 = v9 - (_DWORD)v7; /*0x4c0b2d*/
        if ( v47 >= 0 )
        {
          v48 = a2a; /*0x4c0b35*/
          v49 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0b39*/
          v50 = (char *)a6; /*0x4c0b3f*/
          v51 = (_WORD *)v77; /*0x4c0b43*/
          v52 = v47 + 1; /*0x4c0b47*/
          do
          {
            v53 = (int)&v50[(int)v50 < 0 ? 0x10 : 0];
            if ( v53 >= 16 ) /*0x4c0b58*/
              v53 -= 16; /*0x4c0b5a*/
            if ( *(_BYTE *)(v53 + a5) && *v51 ) /*0x4c0b67*/
            {
              *v48 = a4; /*0x4c0b72*/
              v49 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0b75*/
            }
            if ( a1a <= 0 ) /*0x4c0b81*/
            {
              if ( (unsigned int)++v51 < v49->nextArrayIndex ) /*0x4c0b9a*/
                v51 = (_WORD *)((char *)v51 + (unsigned int)v49->NeedsSaveOrLink); /*0x4c0b9c*/
            }
            else if ( (unsigned int)++v51 >= v49->referenceCount ) /*0x4c0b8b*/
            {
              v51 = (_WORD *)((char *)v51 - (unsigned int)v49->NeedsSaveOrLink); /*0x4c0b8d*/
            }
            ++v48; /*0x4c0b9f*/
            v50 = (char *)v76 + v53; /*0x4c0ba2*/
            --v52; /*0x4c0ba4*/
          }
          while ( v52 );
          a6 = (int)v50; /*0x4c0ba7*/
        }
        goto LABEL_155; /*0x4c0bab*/
      }
      if ( v7 == (MouseClass *)v9 )
      {
        if ( v8 <= v10 ) /*0x4c0bbe*/
          v54 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0bd0*/
        else
          v54 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0bc7*/
        v55 = abs32(v10 - v8); /*0x4c0bd9*/
        if ( v55 >= 0 )
        {
          v56 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0be1*/
          v57 = (char *)a6; /*0x4c0be7*/
          v58 = a2a; /*0x4c0bef*/
          aP6d = (DSurface *)(v55 + 1); /*0x4c0bf4*/
          v59 = (_WORD *)v77; /*0x4c0bf8*/
          do
          {
            v60 = (int)&v57[(int)v57 < 0 ? 0x10 : 0];
            if ( v60 >= 16 ) /*0x4c0c06*/
              v60 -= 16; /*0x4c0c08*/
            if ( *(_BYTE *)(v60 + a5) && *v59 ) /*0x4c0c15*/
            {
              *v58 = a4; /*0x4c0c20*/
              v56 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0c23*/
            }
            v58 = (_WORD *)((char *)v58 + v54); /*0x4c0c29*/
            v59 += a1a; /*0x4c0c2b*/
            if ( a1a <= 0 ) /*0x4c0c30*/
            {
              if ( (unsigned int)v59 < v56->nextArrayIndex ) /*0x4c0c3f*/
                v59 = (_WORD *)((char *)v59 + (unsigned int)v56->NeedsSaveOrLink); /*0x4c0c41*/
            }
            else if ( (unsigned int)v59 >= v56->referenceCount ) /*0x4c0c35*/
            {
              v59 = (_WORD *)((char *)v59 - (unsigned int)v56->NeedsSaveOrLink); /*0x4c0c37*/
            }
            v57 = (char *)v76 + v60; /*0x4c0c48*/
            aP6d = (DSurface *)((char *)aP6d - 1); /*0x4c0c4f*/
          }
          while ( aP6d );
          a6 = (int)v57; /*0x4c0c55*/
        }
        goto LABEL_155; /*0x4c0c59*/
      }
      v61 = v9 - (_DWORD)v7; /*0x4c0c62*/
      v62 = v10 - v8; /*0x4c0c64*/
      v63 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0c68*/
      v80 = v63; /*0x4c0c6d*/
      if ( v62 < 0 ) /*0x4c0c71*/
        v80 = -v63; /*0x4c0c75*/
      v86 = 2 * v61; /*0x4c0c81*/
      v64 = abs32(v62); /*0x4c0c85*/
      v84 = 2 * v64; /*0x4c0c8c*/
      if ( v61 > v64 )
      {
        v65 = 0; /*0x4c0c98*/
        v66 = 2 * v64 - v61; /*0x4c0c9a*/
        aP6e = 0; /*0x4c0c9c*/
        if ( v61 > 0 )
        {
          v67 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0ca8*/
          v68 = (char *)a6; /*0x4c0cae*/
          v69 = (_WORD *)v77; /*0x4c0cb2*/
          do
          {
            v70 = (int)&v68[(int)v68 < 0 ? 0x10 : 0];
            if ( v70 >= 16 ) /*0x4c0cc0*/
              v70 -= 16; /*0x4c0cc2*/
            if ( *(_BYTE *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
            {
              *((_WORD *)a2a + (_DWORD)v65) = a4; /*0x4c0cde*/
              v67 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0ce3*/
            }
            if ( v66 > 0 ) /*0x4c0ceb*/
            {
              a2a = (int *)((char *)a2a + v80); /*0x4c0cfb*/
              v69 += a1a; /*0x4c0cff*/
              if ( (unsigned int)v69 >= v67->referenceCount ) /*0x4c0d07*/
                v69 = (_WORD *)((char *)v69 - (unsigned int)v67->NeedsSaveOrLink); /*0x4c0d09*/
              v66 -= 2 * v61; /*0x4c0d0f*/
              v65 = aP6e; /*0x4c0d11*/
            }
            v66 += v84; /*0x4c0d19*/
            if ( a1a <= 0 ) /*0x4c0d21*/
            {
              if ( (unsigned int)++v69 < v67->nextArrayIndex ) /*0x4c0d3a*/
                v69 = (_WORD *)((char *)v69 + (unsigned int)v67->NeedsSaveOrLink); /*0x4c0d3c*/
            }
            else if ( (unsigned int)++v69 >= v67->referenceCount ) /*0x4c0d2b*/
            {
              v69 = (_WORD *)((char *)v69 - (unsigned int)v67->NeedsSaveOrLink); /*0x4c0d2d*/
            }
            v65 = (DSurface *)((char *)v65 + 1); /*0x4c0d43*/
            v68 = (char *)v76 + v70; /*0x4c0d44*/
            aP6e = v65; /*0x4c0d48*/
          }
          while ( (int)v65 < v61 );
          a6 = (int)v68; /*0x4c0d52*/
        }
        goto LABEL_155; /*0x4c0d56*/
      }
      v71 = 2 * v61 - v64; /*0x4c0d5b*/
      if ( v64 > 0 )
      {
        v72 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0d65*/
        v43 = (char *)a6; /*0x4c0d6b*/
        v73 = (_WORD *)v77; /*0x4c0d6f*/
        v82 = v64; /*0x4c0d77*/
        v74 = a2a; /*0x4c0d7b*/
        aP6f = 0; /*0x4c0d7f*/
        do
        {
          v75 = (int)&v43[(int)v43 < 0 ? 0x10 : 0];
          if ( v75 >= 16 ) /*0x4c0d91*/
            v75 -= 16; /*0x4c0d93*/
          if ( *(_BYTE *)(v75 + a5) && *v73 ) /*0x4c0da0*/
          {
            *(_WORD *)((char *)&aP6f->field_0 + (_DWORD)v74) = a4; /*0x4c0daf*/
            v72 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0db3*/
          }
          if ( v71 > 0 ) /*0x4c0dbb*/
          {
            ++v73; /*0x4c0dc1*/
            aP6f = (DSurface *)((char *)aP6f + 2); /*0x4c0dc7*/
            if ( (unsigned int)v73 >= v72->referenceCount ) /*0x4c0dd0*/
              v73 = (_WORD *)((char *)v73 - (unsigned int)v72->NeedsSaveOrLink); /*0x4c0dd2*/
            v71 -= v84; /*0x4c0dd5*/
          }
          v73 += a1a; /*0x4c0ddd*/
          v71 += v86; /*0x4c0de0*/
          v74 = (int *)((char *)v74 + v80); /*0x4c0de6*/
          if ( a1a <= 0 ) /*0x4c0dea*/
          {
            if ( (unsigned int)v73 < v72->nextArrayIndex ) /*0x4c0df9*/
              v73 = (_WORD *)((char *)v73 + (unsigned int)v72->NeedsSaveOrLink); /*0x4c0dfb*/
          }
          else if ( (unsigned int)v73 >= v72->referenceCount ) /*0x4c0def*/
          {
            v73 = (_WORD *)((char *)v73 - (unsigned int)v72->NeedsSaveOrLink); /*0x4c0df1*/
          }
          v43 = (char *)v76 + v75; /*0x4c0e02*/
          --v82; /*0x4c0e09*/
        }
        while ( v82 );
        goto LABEL_154; /*0x4c0e0d*/
      }
    }
LABEL_155:
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this); /*0x4c0e17*/
  }
  return a6; /*0x4c077f*/
}
}

// 0x4C0E30
char DSurface::DrawStippledRect(unsigned int * a1, unsigned int * a2, short a4, DSurface * aP4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall DSurface::DrawStippledRect(void *this, _DWORD *a1, _DWORD *a2, __int16 a4, DSurface *aP4)
{
  int *v6; // eax
  int v7; // ecx
  MouseClass *v8; // eax
  MouseClass *v9; // ecx
  int v10; // esi
  MouseClass *v11; // edx
  int v12; // eax
  _WORD *v13; // esi
  int v14; // edx
  __int16 *v15; // ecx
  TacticalClass *v16; // eax
  int v17; // ecx
  int v18; // eax
  __int16 *v19; // ebp
  int v20; // edx
  TacticalClass *v21; // eax
  int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // ebp
  int v27; // edx
  int v28; // ecx
  TacticalClass *v29; // eax
  __int16 *v30; // edi
  int v31; // edx
  TacticalClass *v32; // ecx
  __int16 *v33; // eax
  int v34; // edi
  int v35; // edx
  __int16 *v36; // ecx
  TacticalClass *v37; // eax
  int v38; // ecx
  int v39; // eax
  __int16 *v40; // ebp
  int v41; // edx
  TacticalClass *v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // ebp
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  TacticalClass *v50; // eax
  __int16 *v51; // edi
  int v53; // edx
  TacticalClass *v54; // ecx
  int v55; // edi
  int v56; // [esp+Ch] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-3Ch]
  int v58; // [esp+10h] [ebp-38h]
  int v59; // [esp+10h] [ebp-38h]
  int v60; // [esp+10h] [ebp-38h]
  _DWORD v62[4]; // [esp+18h] [ebp-30h] BYREF
  MouseClass *v63; // [esp+28h] [ebp-20h] BYREF
  int v64; // [esp+2Ch] [ebp-1Ch]
  MouseClass *aP1; // [esp+30h] [ebp-18h] BYREF
  int v66; // [esp+34h] [ebp-14h]
  int v67; // [esp+38h] [ebp-10h] BYREF
  int v68; // [esp+3Ch] [ebp-Ch]
  int v69; // [esp+40h] [ebp-8h]
  int v70; // [esp+44h] [ebp-4h]
  int a1a; // [esp+4Ch] [ebp+4h]
  __int16 *a2a; // [esp+50h] [ebp+8h]
  int aP4a; // [esp+58h] [ebp+10h]
  DSurface *aP4b; // [esp+58h] [ebp+10h]

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this) != 2 ) /*0x4c0e45*/
    return 0; /*0x4c0e45*/
  v6 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 120))(this, v62); /*0x4c0e55*/
  v67 = *v6; /*0x4c0e5a*/
  v68 = v6[1]; /*0x4c0e61*/
  v69 = v6[2]; /*0x4c0e68*/
  v70 = v6[3]; /*0x4c0e73*/
  v7 = v68 + a1[1]; /*0x4c0e7e*/
  v63 = (MouseClass *)(v67 + *a1); /*0x4c0e80*/
  v64 = v7; /*0x4c0e84*/
  v8 = (MouseClass *)(v67 + *a2); /*0x4c0e93*/
  v66 = v68 + a2[1]; /*0x4c0e95*/
  aP1 = v8; /*0x4c0ea6*/
  if ( !ClipLine((IUnknown *)&v63, (int *)&aP1, &v67) ) /*0x4c0eaa*/
    return 0; /*0x4c0eaa*/
  v9 = v63; /*0x4c0eb7*/
  if ( (int)v63 <= (int)aP1 ) /*0x4c0ec1*/
  {
    v12 = v64; /*0x4c0ee1*/
  }
  else
  {
    v10 = v64; /*0x4c0ec3*/
    v11 = v63; /*0x4c0ec7*/
    v9 = aP1; /*0x4c0ec9*/
    v12 = v66; /*0x4c0ecb*/
    v63 = aP1; /*0x4c0ecf*/
    v64 = v66; /*0x4c0ed3*/
    aP1 = v11; /*0x4c0ed7*/
    v66 = v10; /*0x4c0edb*/
  }
  v62[1] = v12; /*0x4c0eeb*/
  v13 = (_WORD *)StreamClass::ReadAndSeek( /*0x4c0f01*/
                   *(int *)&stru_87C374.__pad_14B0[4224],
                   v9,
                   (MouseClass *)(v12 - *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 4)));
  a1a = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x4c0f10*/
  if ( v64 > v66 ) /*0x4c0f14*/
    a1a = -*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[4224] + 40); /*0x4c0f18*/
  a2a = (__int16 *)(*(int (__thiscall **)(void *, MouseClass *, int))(*(_DWORD *)this + 92))(this, v63, v64); /*0x4c0f2c*/
  if ( !a2a ) /*0x4c0f30*/
    return 0; /*0x4c1428*/
  if ( (_BYTE)aP4 ) /*0x4c0f45*/
  {
    if ( v64 == v66 ) /*0x4c0f4d*/
    {
      v14 = 0; /*0x4c0f57*/
      if ( (char *)aP1 - (char *)v63 >= 0 ) /*0x4c0f5b*/
      {
        v15 = a2a; /*0x4c0f61*/
        v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0f69*/
        do /*0x4c0fae*/
        {
          if ( !*v13 ) /*0x4c0f72*/
          {
            *v15 = a4; /*0x4c0f78*/
            v16 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c0f7b*/
          }
          if ( a1a <= 0 ) /*0x4c0f82*/
          {
            if ( (unsigned int)++v13 < v16->nextArrayIndex ) /*0x4c0f9b*/
              v13 = (_WORD *)((char *)v13 + (unsigned int)v16->NeedsSaveOrLink); /*0x4c0f9d*/
          }
          else if ( (unsigned int)++v13 >= v16->referenceCount ) /*0x4c0f8c*/
          {
            v13 = (_WORD *)((char *)v13 - (unsigned int)v16->NeedsSaveOrLink); /*0x4c0f8e*/
          }
          ++v14; /*0x4c0fa4*/
          ++v15; /*0x4c0fa9*/
        }
        while ( v14 <= (char *)aP1 - (char *)v63 ); /*0x4c0fae*/
      }
    }
    else if ( v63 == aP1 ) /*0x4c0fcf*/
    {
      if ( v64 <= v66 ) /*0x4c0fd7*/
        v17 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0fef*/
      else
        v17 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c0fe3*/
      v18 = abs32(v66 - v64); /*0x4c0ffe*/
      if ( v18 >= 0 ) /*0x4c1000*/
      {
        v19 = a2a; /*0x4c100e*/
        v20 = v18 + 1; /*0x4c1012*/
        v21 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c1015*/
        do /*0x4c1045*/
        {
          if ( !*v13 ) /*0x4c101a*/
          {
            *v19 = a4; /*0x4c1020*/
            v21 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c1024*/
          }
          v13 += a1a; /*0x4c102b*/
          if ( a1a <= 0 ) /*0x4c102e*/
          {
            if ( (unsigned int)v13 < v21->nextArrayIndex ) /*0x4c103d*/
              v13 = (_WORD *)((char *)v13 + (unsigned int)v21->NeedsSaveOrLink); /*0x4c103f*/
          }
          else if ( (unsigned int)v13 >= v21->referenceCount ) /*0x4c1033*/
          {
            v13 = (_WORD *)((char *)v13 - (unsigned int)v21->NeedsSaveOrLink); /*0x4c1035*/
          }
          v19 = (__int16 *)((char *)v19 + v17); /*0x4c1042*/
          --v20; /*0x4c1044*/
        }
        while ( v20 ); /*0x4c1045*/
      }
    }
    else
    {
      v22 = (char *)aP1 - (char *)v63; /*0x4c1063*/
      v23 = v66 - v64; /*0x4c1067*/
      v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c1069*/
      aP4a = v24; /*0x4c106e*/
      if ( v23 < 0 ) /*0x4c1072*/
        aP4a = -v24; /*0x4c1076*/
      v25 = abs32(v23); /*0x4c107f*/
      v62[0] = 2 * v22; /*0x4c1086*/
      v26 = 2 * v25; /*0x4c108a*/
      v56 = 2 * v25; /*0x4c108d*/
      if ( v22 <= v25 ) /*0x4c1091*/
      {
        v31 = 2 * v22 - v25; /*0x4c1126*/
        if ( v25 > 0 ) /*0x4c112a*/
        {
          v32 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c1130*/
          v58 = v25; /*0x4c113a*/
          v33 = a2a; /*0x4c113e*/
          v34 = 0; /*0x4c1142*/
          while ( 1 ) /*0x4c114a*/
          {
            if ( !*v13 ) /*0x4c114a*/
            {
              v33[v34] = a4; /*0x4c1155*/
              v32 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c1159*/
            }
            if ( v31 > 0 ) /*0x4c1161*/
            {
              v31 -= v26; /*0x4c1163*/
              ++v13; /*0x4c1168*/
              ++v34; /*0x4c116b*/
              if ( (unsigned int)v13 >= v32->referenceCount ) /*0x4c1170*/
                v13 = (_WORD *)((char *)v13 - (unsigned int)v32->NeedsSaveOrLink); /*0x4c1172*/
            }
            v13 += a1a; /*0x4c1179*/
            v31 += v62[0]; /*0x4c117c*/
            v33 = (__int16 *)((char *)v33 + aP4a); /*0x4c1182*/
            if ( a1a <= 0 ) /*0x4c1186*/
            {
              if ( (unsigned int)v13 < v32->nextArrayIndex ) /*0x4c1195*/
                v13 = (_WORD *)((char *)v13 + (unsigned int)v32->NeedsSaveOrLink); /*0x4c1197*/
            }
            else if ( (unsigned int)v13 >= v32->referenceCount ) /*0x4c118b*/
            {
              v13 = (_WORD *)((char *)v13 - (unsigned int)v32->NeedsSaveOrLink); /*0x4c118d*/
            }
            if ( !--v58 ) /*0x4c11a3*/
              break; /*0x4c11a3*/
            v26 = v56; /*0x4c1146*/
          }
        }
      }
      else
      {
        v27 = 0; /*0x4c1099*/
        v28 = v26 - v22; /*0x4c109b*/
        if ( v22 > 0 ) /*0x4c109f*/
        {
          v29 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c10a5*/
          v30 = a2a; /*0x4c10aa*/
          do /*0x4c110f*/
          {
            if ( !*v13 ) /*0x4c10ae*/
            {
              v30[v27] = a4; /*0x4c10b9*/
              v29 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c10bd*/
            }
            if ( v28 > 0 ) /*0x4c10c4*/
            {
              v30 = (__int16 *)((char *)v30 + aP4a); /*0x4c10ca*/
              v13 += a1a; /*0x4c10d0*/
              if ( (unsigned int)v13 >= v29->referenceCount ) /*0x4c10d8*/
                v13 = (_WORD *)((char *)v13 - (unsigned int)v29->NeedsSaveOrLink); /*0x4c10da*/
              v28 -= 2 * v22; /*0x4c10e0*/
            }
            if ( a1a <= 0 ) /*0x4c10e8*/
            {
              if ( (unsigned int)++v13 < v29->nextArrayIndex ) /*0x4c1101*/
                v13 = (_WORD *)((char *)v13 + (unsigned int)v29->NeedsSaveOrLink); /*0x4c1103*/
            }
            else if ( (unsigned int)++v13 >= v29->referenceCount ) /*0x4c10f2*/
            {
              v13 = (_WORD *)((char *)v13 - (unsigned int)v29->NeedsSaveOrLink); /*0x4c10f4*/
            }
            v28 += v56; /*0x4c110a*/
            ++v27; /*0x4c110c*/
          }
          while ( v27 < v22 ); /*0x4c110f*/
        }
      }
    }
  }
  else if ( v64 == v66 ) /*0x4c11bc*/
  {
    v35 = 0; /*0x4c11c6*/
    if ( (char *)aP1 - (char *)v63 >= 0 ) /*0x4c11ca*/
    {
      v36 = a2a; /*0x4c11d0*/
      v37 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c11d8*/
      do /*0x4c121d*/
      {
        if ( *v13 ) /*0x4c11e1*/
        {
          *v36 = a4; /*0x4c11e7*/
          v37 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c11ea*/
        }
        if ( a1a <= 0 ) /*0x4c11f1*/
        {
          if ( (unsigned int)++v13 < v37->nextArrayIndex ) /*0x4c120a*/
            v13 = (_WORD *)((char *)v13 + (unsigned int)v37->NeedsSaveOrLink); /*0x4c120c*/
        }
        else if ( (unsigned int)++v13 >= v37->referenceCount ) /*0x4c11fb*/
        {
          v13 = (_WORD *)((char *)v13 - (unsigned int)v37->NeedsSaveOrLink); /*0x4c11fd*/
        }
        ++v35; /*0x4c1213*/
        ++v36; /*0x4c1218*/
      }
      while ( v35 <= (char *)aP1 - (char *)v63 ); /*0x4c121d*/
    }
  }
  else if ( v63 == aP1 ) /*0x4c123e*/
  {
    if ( v64 <= v66 ) /*0x4c1246*/
      v38 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c125e*/
    else
      v38 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c1252*/
    v39 = abs32(v66 - v64); /*0x4c126d*/
    if ( v39 >= 0 ) /*0x4c126f*/
    {
      v40 = a2a; /*0x4c127d*/
      v41 = v39 + 1; /*0x4c1281*/
      v42 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c1284*/
      do /*0x4c12b4*/
      {
        if ( *v13 ) /*0x4c1289*/
        {
          *v40 = a4; /*0x4c128f*/
          v42 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c1293*/
        }
        v13 += a1a; /*0x4c129a*/
        if ( a1a <= 0 ) /*0x4c129d*/
        {
          if ( (unsigned int)v13 < v42->nextArrayIndex ) /*0x4c12ac*/
            v13 = (_WORD *)((char *)v13 + (unsigned int)v42->NeedsSaveOrLink); /*0x4c12ae*/
        }
        else if ( (unsigned int)v13 >= v42->referenceCount ) /*0x4c12a2*/
        {
          v13 = (_WORD *)((char *)v13 - (unsigned int)v42->NeedsSaveOrLink); /*0x4c12a4*/
        }
        v40 = (__int16 *)((char *)v40 + v38); /*0x4c12b1*/
        --v41; /*0x4c12b3*/
      }
      while ( v41 ); /*0x4c12b4*/
    }
  }
  else
  {
    v43 = (char *)aP1 - (char *)v63; /*0x4c12cf*/
    v44 = v66 - v64; /*0x4c12d5*/
    v45 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x4c12d9*/
    v46 = v45; /*0x4c12dc*/
    v59 = v45; /*0x4c12e0*/
    if ( v44 < 0 ) /*0x4c12e4*/
    {
      v46 = -v45; /*0x4c12e6*/
      v59 = -v45; /*0x4c12e8*/
    }
    v47 = abs32(v44); /*0x4c12f1*/
    v57 = 2 * v43; /*0x4c12f8*/
    aP4b = (DSurface *)(2 * v47); /*0x4c12ff*/
    if ( v43 <= v47 ) /*0x4c1303*/
    {
      v53 = 2 * v43 - v47; /*0x4c1395*/
      if ( v47 > 0 ) /*0x4c1399*/
      {
        v54 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c139b*/
        v60 = v47; /*0x4c13a1*/
        v55 = 0; /*0x4c13a9*/
        do /*0x4c140f*/
        {
          if ( *v13 ) /*0x4c13ab*/
          {
            a2a[v55] = a4; /*0x4c13b5*/
            v54 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c13b9*/
          }
          if ( v53 > 0 ) /*0x4c13c1*/
          {
            ++v13; /*0x4c13c7*/
            v53 -= (int)aP4b; /*0x4c13ca*/
            ++v55; /*0x4c13cf*/
            if ( (unsigned int)v13 >= v54->referenceCount ) /*0x4c13d4*/
              v13 = (_WORD *)((char *)v13 - (unsigned int)v54->NeedsSaveOrLink); /*0x4c13d6*/
          }
          v53 += v57; /*0x4c13dd*/
          a2a = (__int16 *)((char *)a2a + v46); /*0x4c13e5*/
          v13 += a1a; /*0x4c13ef*/
          if ( a1a <= 0 ) /*0x4c13f2*/
          {
            if ( (unsigned int)v13 < v54->nextArrayIndex ) /*0x4c1401*/
              v13 = (_WORD *)((char *)v13 + (unsigned int)v54->NeedsSaveOrLink); /*0x4c1403*/
          }
          else if ( (unsigned int)v13 >= v54->referenceCount ) /*0x4c13f7*/
          {
            v13 = (_WORD *)((char *)v13 - (unsigned int)v54->NeedsSaveOrLink); /*0x4c13f9*/
          }
          --v60; /*0x4c140b*/
        }
        while ( v60 ); /*0x4c140f*/
      }
    }
    else
    {
      v48 = 2 * v47 - v43; /*0x4c1309*/
      v49 = 0; /*0x4c130b*/
      if ( v43 > 0 ) /*0x4c130f*/
      {
        v50 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c1315*/
        v51 = a2a; /*0x4c131a*/
        do /*0x4c137e*/
        {
          if ( *v13 ) /*0x4c131e*/
          {
            v51[v49] = a4; /*0x4c1329*/
            v50 = *(TacticalClass **)&stru_87C374.__pad_14B0[4224]; /*0x4c132d*/
          }
          if ( v48 > 0 ) /*0x4c1334*/
          {
            v51 = (__int16 *)((char *)v51 + v59); /*0x4c133a*/
            v13 += a1a; /*0x4c1340*/
            if ( (unsigned int)v13 >= v50->referenceCount ) /*0x4c1348*/
              v13 = (_WORD *)((char *)v13 - (unsigned int)v50->NeedsSaveOrLink); /*0x4c134a*/
            v48 -= v57; /*0x4c134d*/
          }
          if ( a1a <= 0 ) /*0x4c1357*/
          {
            if ( (unsigned int)++v13 < v50->nextArrayIndex ) /*0x4c1370*/
              v13 = (_WORD *)((char *)v13 + (unsigned int)v50->NeedsSaveOrLink); /*0x4c1372*/
          }
          else if ( (unsigned int)++v13 >= v50->referenceCount ) /*0x4c1361*/
          {
            v13 = (_WORD *)((char *)v13 - (unsigned int)v50->NeedsSaveOrLink); /*0x4c1363*/
          }
          v48 += (int)aP4b; /*0x4c1379*/
          ++v49; /*0x4c137b*/
        }
        while ( v49 < v43 ); /*0x4c137e*/
      }
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this); /*0x4c1386*/
  return 1; /*0x4c0fba*/
}
}

// 0x4C1AC0
void * DSurface::loc_4C1AC0(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall DSurface::loc_4C1AC0(void *this, char a2)
{
  char v3; // al
  int v4; // eax
  int v5; // eax

  v3 = (unsigned char)this->DSurface_field_0x18; /*0x4c1ac3*/
  *(_DWORD *)this = &DSurface_Vtable; /*0x4c1ac6*/
  if ( v3 ) /*0x4c1ace*/
  {
    v4 = this->DSurface_field_0x1C; /*0x4c1ad0*/
    if ( v4 ) /*0x4c1ad5*/
    {
      if ( MEMORY[0x8A0DCC] ) /*0x4c1adf*/
      {
        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v4 + 112))(v4, 0); /*0x4c1ae6*/
        (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x8A0DCC] + 8))(MEMORY[0x8A0DCC]); /*0x4c1af1*/
        MEMORY[0x8A0DCC] = 0; /*0x4c1af4*/
      }
    }
  }
  __3_YAXPAX_Z(*((void **)this + 8)); /*0x4c1b02*/
  v5 = this->DSurface_field_0x1C; /*0x4c1b07*/
  this->DSurface_field_0x20 = 0; /*0x4c1b0f*/
  if ( v5 ) /*0x4c1b16*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5); /*0x4c1b1b*/
  this->DSurface_field_0x1C = 0; /*0x4c1b22*/
  *(_DWORD *)this = &Surface_Vtable; /*0x4c1b2b*/
  if ( (a2 & 1) != 0 ) /*0x4c1b31*/
    __3_YAXPAX_Z(this); /*0x4c1b34*/
  return this; /*0x4c1b3e*/
}
}

// 0x5D1E70
int DSurface::RenderToSurface(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DSurface::RenderToSurface(_DWORD *this, ObjectClass *aP1)
{
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int i; // ebp
  int v12; // ecx
  ObjectClass *v13; // eax
  int result; // eax
  int j; // ebp
  int v16; // ecx
  void (__thiscall ***v17)(_DWORD, int); // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // [esp+3Ch] [ebp-20h] BYREF
  int v22; // [esp+40h] [ebp-1Ch]
  int v23; // [esp+44h] [ebp-18h]
  int v24; // [esp+48h] [ebp-14h]
  _BYTE v25[16]; // [esp+4Ch] [ebp-10h] BYREF

  if ( MEMORY[0x89F690].__pad_71C[756] == 1 ) /*0x5d1e83*/
  {
    MEMORY[0x89F690].__pad_71C[756] = 0; /*0x5d1e89*/
    (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)aP1->__pad_0 + 24))(aP1, 0); /*0x5d1e96*/
    v3 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] + 120))( /*0x5d1ea6*/
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                  v25);
    v21 = *v3; /*0x5d1eab*/
    v22 = v3[1]; /*0x5d1eb2*/
    v23 = v3[2]; /*0x5d1eb9*/
    v4 = v3[3]; /*0x5d1ebf*/
    v5 = *(_DWORD *)aP1->__pad_0; /*0x5d1ec2*/
    v24 = v4; /*0x5d1ec4*/
    v6 = (*(int (__thiscall **)(ObjectClass *))(v5 + 124))(aP1); /*0x5d1ec8*/
    v7 = *(_DWORD *)aP1->__pad_0; /*0x5d1ed6*/
    v21 = (v6 - v23) / 2; /*0x5d1eda*/
    v8 = (*(int (__thiscall **)(ObjectClass *))(v7 + 128))(aP1); /*0x5d1ede*/
    v9 = *(_DWORD *)aP1->__pad_0; /*0x5d1ee8*/
    v22 = (v8 - v24) / 2; /*0x5d1ef9*/
    v10 = (*(int (__stdcall **)(_BYTE *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412] /*0x5d1f0c*/
                                                                    + 120))(
            v25,
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
            &v21,
            0,
            1);
    (*(void (__thiscall **)(ObjectClass *, int))(v9 + 8))(aP1, v10); /*0x5d1f12*/
    for ( i = 0; i < *(this + 10); ++i ) /*0x5d1f1c*/
    {
      v12 = *(_DWORD *)(*(this + 7) + 4 * i); /*0x5d1f24*/
      (*(void (__thiscall **)(int, ObjectClass *, _DWORD))(*(_DWORD *)v12 + 20))(v12, aP1, 0); /*0x5d1f29*/
    }
    *(this + 1) = 0; /*0x5d1f38*/
    v13 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *, _BYTE *))(*(_DWORD *)aP1->__pad_0 + 120))(aP1, v25); /*0x5d1f44*/
    Surface::CopyRect(this, v13); /*0x5d1f4a*/
    (*(void (__thiscall **)(_DWORD *, ObjectClass *))(*this + 4))(this, aP1); /*0x5d1f54*/
  }
  result = *(this + 10); /*0x5d1f57*/
  for ( j = 0; j < result; ++j ) /*0x5d1f5e*/
  {
    v16 = *(_DWORD *)(*(this + 7) + 4 * j); /*0x5d1f63*/
    if ( (*(unsigned __int8 (__thiscall **)(int, ObjectClass *, int *))(*(_DWORD *)v16 + 16))(v16, aP1, &v21) == 1 ) /*0x5d1f73*/
    {
      v17 = *(void (__thiscall ****)(_DWORD, int))(*(this + 7) + 4 * j); /*0x5d1f78*/
      if ( v17 ) /*0x5d1f7d*/
        (**v17)(v17, 1); /*0x5d1f83*/
      v18 = *(this + 10); /*0x5d1f85*/
      if ( j < v18 ) /*0x5d1f8a*/
      {
        v19 = v18 - 1; /*0x5d1f8c*/
        v20 = j; /*0x5d1f8f*/
        for ( *(this + 10) = v19; /*0x5d1f96*/
              v20 < *(this + 10);
              *(_DWORD *)(*(this + 7) + 4 * v20 - 4) = *(_DWORD *)(*(this + 7) + 4 * v20) )
        {
          ++v20; /*0x5d1f9b*/
        }
      }
    }
    Surface::CopyRect(this, (ObjectClass *)&v21); /*0x5d1fb1*/
    result = *(this + 10); /*0x5d1fb6*/
  }
  return result; /*0x5d1fbe*/
}
}

// 0x621B80
int DSurface::FillRectWithColor(int * a0, ObjectClass * aP1, short a3, unsigned char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DSurface::FillRectWithColor(int *a0, ObjectClass *aP1, __int16 a3, unsigned __int8 a4)
{
  int *v4; // esi
  ObjectClass *v5; // ebp
  int result; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // edx
  int v12; // edi
  _WORD *v13; // eax
  int v14; // ecx
  __int16 v15; // bx
  __int16 v16; // si
  __int16 v17; // bp
  unsigned int v18; // ecx
  int v19; // edx
  _WORD *v20; // [esp+Ch] [ebp-28h]
  int v21; // [esp+10h] [ebp-24h]
  int v23; // [esp+18h] [ebp-1Ch]
  int v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+20h] [ebp-14h]
  int v27; // [esp+30h] [ebp-4h]

  v4 = a0; /*0x621b85*/
  v5 = aP1; /*0x621b87*/
  result = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x621b9c*/
  v25 = result; /*0x621ba1*/
  if ( result ) /*0x621ba5*/
  {
    v7 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 116))(v5); /*0x621bb2*/
    v8 = v4[1]; /*0x621bb5*/
    v23 = v8; /*0x621bc2*/
    v9 = v7 / 2; /*0x621bc6*/
    v27 = v9; /*0x621bca*/
    if ( v8 < v4[3] + v8 ) /*0x621bce*/
    {
      v10 = v9 * v8; /*0x621bd6*/
      v24 = v9 * v8; /*0x621bd9*/
      do /*0x621d11*/
      {
        v21 = *v4; /*0x621be4*/
        v11 = v10 + *v4; /*0x621bea*/
        if ( *v4 >= *v4 + v4[2] ) /*0x621bed*/
        {
          v5 = aP1; /*0x621cf4*/
        }
        else
        {
          v12 = a4; /*0x621bff*/
          v13 = (_WORD *)(v25 + 2 * v11); /*0x621c0a*/
          v14 = 255 - a4; /*0x621c0d*/
          v15 = a3; /*0x621c0f*/
          v20 = v13; /*0x621c21*/
          while ( 1 ) /*0x621c2f*/
          {
            v16 = *v13; /*0x621c2f*/
            g_GameScreenConfig = v14; /*0x621c32*/
            v17 = *(_WORD *)(&g_MatrixTransformState + 5802) /*0x621c6d*/
                & ((v14 * (unsigned __int16)(v16 & *(_WORD *)(&g_MatrixTransformState + 5802))
                  + v12 * (unsigned int)(unsigned __int16)(v15 & *(_WORD *)(&g_MatrixTransformState + 5802))) >> 8);
            v18 = v14 * (unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & v16) /*0x621c8a*/
                + v12 * (unsigned __int16)(*((_WORD *)&g_MatrixTransformState + 11605) & a3);
            v15 = a3; /*0x621c8c*/
            g_GameScreenFlags = v12; /*0x621ca0*/
            v19 = g_GameScreenConfig * (unsigned __int16)(v16 & *(_WORD *)(&g_MatrixTransformState + 5803)); /*0x621cb1*/
            v4 = a0; /*0x621cb8*/
            v13 = v20 + 1; /*0x621cbe*/
            *v20++ = ((v19 + v12 * (unsigned int)(unsigned __int16)(a3 & *(_WORD *)(&g_MatrixTransformState + 5803))) >> 8) /*0x621cca*/
                   | *((_WORD *)&g_MatrixTransformState + 11605) & (v18 >> 8)
                   | v17;
            if ( ++v21 >= a0[2] + *a0 ) /*0x621ce0*/
              break; /*0x621ce0*/
            v12 = a4; /*0x621c27*/
            v14 = 255 - a4; /*0x621c2b*/
          }
          v5 = aP1; /*0x621ce6*/
          v8 = v23; /*0x621cea*/
          v10 = v24; /*0x621cee*/
        }
        v10 += v27; /*0x621cff*/
        v23 = ++v8; /*0x621d09*/
        v24 = v10; /*0x621d0d*/
      }
      while ( v8 < v4[3] + v4[1] ); /*0x621d11*/
    }
    return (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 96))(v5); /*0x621d1c*/
  }
  return result; /*0x621d21*/
}
}

// 0x7BD210
int DSurface::LockAndPrepareRect()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_7BD210(int this)
{
  int v2; // eax
  int result; // eax

  if ( (*(_BYTE *)(this + 1980) & 0x40) != 0 ) /*0x7bd21a*/
  {
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 88))(this, 7, 0, 0); /*0x7bd223*/
    v2 = *(_DWORD *)(this + 1980); /*0x7bd226*/
    LOBYTE(v2) = v2 & 0xBF; /*0x7bd22f*/
    *(_DWORD *)(this + 1980) = v2; /*0x7bd231*/
  }
  (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 88))(this, 3, 0, 0); /*0x7bd23e*/
  result = *(_DWORD *)(this + 1980); /*0x7bd241*/
  if ( (result & 0x80000000) == 1 ) /*0x7bd255*/
  {
    result &= ~0x80000000; /*0x7bd257*/
    *(_DWORD *)(this + 1980) = result; /*0x7bd25c*/
  }
  return result; /*0x7bd262*/
}
}

// 0x7BDF80
int DSurface::CommitBuffers()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DSurface_CommitBuffers(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int i; // edi
  int v11; // ebp
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int j; // ebx
  int v17; // ebp
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int *v24; // eax
  int *v25; // ebp
  int v26; // ebx
  int v27; // edi
  bool v28; // zf
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int v32; // eax
  int *v33; // eax
  int *v34; // ebp
  int v35; // ebx
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int result; // eax
  int v41; // [esp+4h] [ebp-10h]
  int v42; // [esp+4h] [ebp-10h]
  int v43; // [esp+8h] [ebp-Ch]
  int v44; // [esp+8h] [ebp-Ch]
  int v45; // [esp+Ch] [ebp-8h]
  int v46; // [esp+Ch] [ebp-8h]
  int v47; // [esp+10h] [ebp-4h]
  int v48; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD *)(this + 1780); /*0x7bdf86*/
  if ( v2 ) /*0x7bdf8e*/
  {
    (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 5, v2, *(_DWORD *)(this + 1784)); /*0x7bdf9b*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1780), 0); /*0x7bdfaa*/
  }
  v3 = *(_DWORD *)(this + 1892); /*0x7bdfb0*/
  if ( v3 ) /*0x7bdfb8*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v3, 4 * *(unsigned __int16 *)(this + 236)); /*0x7bdfcb*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1892), 0); /*0x7bdfda*/
  }
  if ( !*(_DWORD *)(this + 148) ) /*0x7bdfe0*/
  {
    v4 = *(_DWORD *)(this + 1932); /*0x7bdfea*/
    if ( v4 ) /*0x7bdff2*/
    {
      (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 5, v4, *(_DWORD *)(this + 152)); /*0x7bdfff*/
      (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1932), 0); /*0x7be00e*/
    }
  }
  v5 = *(_DWORD *)(this + 1940); /*0x7be014*/
  if ( v5 ) /*0x7be01c*/
  {
    (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 5, v5, *(_DWORD *)(this + 1948)); /*0x7be029*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1940), 0); /*0x7be038*/
  }
  v6 = *(_DWORD *)(this + 1944); /*0x7be03e*/
  if ( v6 ) /*0x7be046*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v6, 2 * *(_DWORD *)(this + 1948)); /*0x7be055*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1944), 0); /*0x7be064*/
  }
  v7 = *(_DWORD *)(this + 1960); /*0x7be06a*/
  if ( v7 ) /*0x7be072*/
  {
    (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 5, v7, *(_DWORD *)(this + 1972)); /*0x7be07f*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1960), 0); /*0x7be08e*/
  }
  v8 = *(_DWORD *)(this + 1976); /*0x7be094*/
  if ( v8 ) /*0x7be09c*/
  {
    (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 5, v8, *(_DWORD *)(this + 156)); /*0x7be0a9*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1976), 0); /*0x7be0b8*/
  }
  v9 = 0; /*0x7be0c6*/
  for ( i = *(_DWORD *)(this + 1764); v9 < *(_DWORD *)(this + 136); i = v11 ) /*0x7be0d1*/
  {
    if ( !i ) /*0x7be0d5*/
      break; /*0x7be0d5*/
    v11 = *(_DWORD *)(i + 12); /*0x7be0e3*/
    v12 = *(_DWORD *)(this + 1900) + 4; /*0x7be0eb*/
    v13 = *(_DWORD *)(this + 1904) + 4; /*0x7be0ed*/
    *(_DWORD *)(this + 1904) = v13; /*0x7be0f1*/
    *(_DWORD *)(this + 1900) = v12; /*0x7be0f7*/
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, i, v12 + v13 + 44); /*0x7be106*/
    (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 3, i, 0); /*0x7be10f*/
    ++v9; /*0x7be11b*/
  }
  if ( (*(_BYTE *)(this + 340) & 2) != 0 ) /*0x7be129*/
  {
    v14 = *(_DWORD *)(this + 1768); /*0x7be12b*/
    if ( v14 ) /*0x7be133*/
    {
      (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 5, v14, *(_DWORD *)(this + 1912)); /*0x7be140*/
      (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1768), 0); /*0x7be14f*/
      *(_DWORD *)(this + 1768) = 0; /*0x7be155*/
    }
  }
  v15 = *(_DWORD *)(this + 1772); /*0x7be165*/
  for ( j = 0; j < *(_DWORD *)(this + 140); v15 = v17 ) /*0x7be16f*/
  {
    if ( !v15 ) /*0x7be173*/
      break; /*0x7be173*/
    v17 = *(_DWORD *)(v15 + 4); /*0x7be17b*/
    v18 = *(_DWORD *)(this + 1896) + 4; /*0x7be17e*/
    *(_DWORD *)(this + 1896) = v18; /*0x7be183*/
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v15, v18 + 24); /*0x7be191*/
    (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 3, v15, 0); /*0x7be19a*/
    ++j; /*0x7be1a6*/
  }
  if ( (*(_BYTE *)(this + 340) & 1) != 0 ) /*0x7be1b4*/
  {
    v19 = *(_DWORD *)(this + 1776); /*0x7be1b6*/
    if ( v19 ) /*0x7be1be*/
    {
      (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 5, v19, *(_DWORD *)(this + 1908)); /*0x7be1cb*/
      (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1776), 0); /*0x7be1da*/
      *(_DWORD *)(this + 1776) = 0; /*0x7be1e0*/
    }
  }
  v20 = *(_DWORD *)(this + 1888); /*0x7be1ea*/
  if ( v20 ) /*0x7be1f2*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v20, 2 * *(unsigned __int16 *)(this + 1880)); /*0x7be204*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1888), 0); /*0x7be213*/
  }
  v21 = *(_DWORD *)(this + 1876); /*0x7be219*/
  if ( v21 ) /*0x7be221*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v21, 6 * *(unsigned __int16 *)(this + 1868)); /*0x7be236*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1876), 0); /*0x7be245*/
  }
  v22 = *(_DWORD *)(this + 1852); /*0x7be24b*/
  v47 = v22; /*0x7be253*/
  if ( v22 ) /*0x7be257*/
  {
    v23 = 0; /*0x7be25d*/
    v41 = 0; /*0x7be25f*/
    v43 = 0; /*0x7be267*/
    v45 = *(_DWORD *)(this + 1852); /*0x7be26b*/
    do /*0x7be2e9*/
    {
      v24 = (int *)(*(_DWORD *)(this + 1864) + v23); /*0x7be275*/
      v25 = (int *)v24[2]; /*0x7be277*/
      v26 = *v24; /*0x7be27a*/
      v27 = *v25; /*0x7be27c*/
      if ( *v25 ) /*0x7be27c*/
      {
        (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))( /*0x7be29d*/
          this,
          5,
          v27,
          v26 * ((*(_DWORD *)(*(_DWORD *)(this + 1860) + v41 + 4) + 1) & 0xFFFFFFFE));
        (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 3, v27, 0); /*0x7be2a6*/
      }
      if ( v25 ) /*0x7be2ae*/
      {
        (*(void (__cdecl **)(int, int, int *, int))(this + 68))(this, 5, v25, 12 * v26); /*0x7be2bb*/
        (*(void (__cdecl **)(int, int, int *, _DWORD))(this + 68))(this, 3, v25, 0); /*0x7be2c4*/
      }
      v23 = v43 + 12; /*0x7be2d6*/
      v28 = v45 == 1; /*0x7be2dc*/
      v43 += 12; /*0x7be2dd*/
      v41 += 16; /*0x7be2e1*/
      --v45; /*0x7be2e5*/
    }
    while ( !v28 ); /*0x7be2e9*/
    v22 = v47; /*0x7be2eb*/
  }
  v29 = *(_DWORD *)(this + 1864); /*0x7be2ef*/
  if ( v29 ) /*0x7be2f7*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v29, 12 * v22); /*0x7be304*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1864), 0); /*0x7be313*/
  }
  v30 = *(_DWORD *)(this + 1860); /*0x7be319*/
  if ( v30 ) /*0x7be321*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v30, 16 * v22); /*0x7be32b*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1860), 0); /*0x7be33a*/
  }
  v31 = *(_DWORD *)(this + 1828); /*0x7be340*/
  v48 = v31; /*0x7be348*/
  if ( v31 ) /*0x7be34c*/
  {
    v32 = 0; /*0x7be352*/
    v42 = 0; /*0x7be354*/
    v46 = 0; /*0x7be35c*/
    v44 = *(_DWORD *)(this + 1828); /*0x7be360*/
    do /*0x7be3de*/
    {
      v33 = (int *)(*(_DWORD *)(this + 1848) + v32); /*0x7be36a*/
      v34 = (int *)v33[2]; /*0x7be36c*/
      v35 = *v33; /*0x7be36f*/
      v36 = *v34; /*0x7be371*/
      if ( *v34 ) /*0x7be371*/
      {
        (*(void (__cdecl **)(int, int, int, unsigned int))(this + 68))( /*0x7be392*/
          this,
          5,
          v36,
          v35 * ((*(_DWORD *)(*(_DWORD *)(this + 1844) + v42 + 8) + 1) & 0xFFFFFFFE));
        (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 3, v36, 0); /*0x7be39b*/
      }
      if ( v34 ) /*0x7be3a3*/
      {
        (*(void (__cdecl **)(int, int, int *, int))(this + 68))(this, 5, v34, 12 * v35); /*0x7be3b0*/
        (*(void (__cdecl **)(int, int, int *, _DWORD))(this + 68))(this, 3, v34, 0); /*0x7be3b9*/
      }
      v32 = v46 + 12; /*0x7be3cb*/
      v28 = v44 == 1; /*0x7be3d1*/
      v46 += 12; /*0x7be3d2*/
      v42 += 16; /*0x7be3d6*/
      --v44; /*0x7be3da*/
    }
    while ( !v28 ); /*0x7be3de*/
    v31 = v48; /*0x7be3e0*/
  }
  v37 = *(_DWORD *)(this + 1848); /*0x7be3e4*/
  if ( v37 ) /*0x7be3ec*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v37, 12 * v31); /*0x7be3f9*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1848), 0); /*0x7be408*/
  }
  v38 = *(_DWORD *)(this + 1844); /*0x7be40e*/
  if ( v38 ) /*0x7be416*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v38, 16 * v31); /*0x7be420*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1844), 0); /*0x7be42f*/
  }
  v39 = *(_DWORD *)(this + 1840); /*0x7be435*/
  if ( v39 ) /*0x7be440*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, v39, 24 * *(_DWORD *)(this + 1824)); /*0x7be453*/
    (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1840), 0); /*0x7be462*/
  }
  result = *(_DWORD *)(this + 1820); /*0x7be468*/
  if ( result ) /*0x7be470*/
  {
    (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, result, 4 * *(unsigned __int16 *)(this + 1812)); /*0x7be483*/
    return (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 1820), 0); /*0x7be492*/
  }
  return result; /*0x7be498*/
}
}

// 0x7C2C60
int DSurface::Flip()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall DSurface_Flip(int this)
{
  int v2; // eax

  if ( (*(_BYTE *)(this + 132) & 1) != 0 && (*(_BYTE *)(this + 234) & 3) != 0 ) /*0x7c2c73*/
  {
    DSurface::LockAndPrepareRect(); /*0x7c2c75*/
    if ( (*(_DWORD *)(this + 1980) & 0x40000000) != 0 ) /*0x7c2c84*/
    {
      sub_412600(); /*0x7c2c86*/
      *(_DWORD *)(this + 1980) &= ~0x40000000u; /*0x7c2c8b*/
    }
  }
  if ( (*(_BYTE *)(this + 336) & 0x20) != 0 ) /*0x7c2c9c*/
  {
    v2 = *(_DWORD *)(this + 344); /*0x7c2c9e*/
    if ( v2 ) /*0x7c2ca6*/
    {
      (*(void (__cdecl **)(int, int, int, int))(this + 68))( /*0x7c2cba*/
        this,
        5,
        v2,
        *(_DWORD *)(this + 348) * *(_DWORD *)(this + 352));
      (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 3, *(_DWORD *)(this + 344), 0); /*0x7c2cc9*/
    }
  }
  DSurface::CommitBuffers(this); /*0x7c2cd1*/
  (*(void (__cdecl **)(int, int, _DWORD, _DWORD))(this + 64))(this, 4, 0, 0); /*0x7c2cdd*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 5, this, 2012); /*0x7c2ce9*/
  return (*(int (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 3, this, 0); /*0x7c2cf8*/
}
}

// 0x4BA480
long long DSurface::ConstructFromHandle()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_8A0928 - DataGlobal_8A0970);
    result = Math::RoundToInt(v0 * DataGlobal_8A0968 * 0.5);
    DataGlobal_8A0DC8 = result;
    return result;
}
}

// 0x4C1AB0
char DSurface::IsDSurface()
{
return 1;
}

// 0x5D1E50
int DSurface::Flip2()
{
{
    g_LoadScreenFlag = 1;
    return DSurface::RenderToSurface(g_DSurface_Hidden);
}
}

// 0x63D400
int DSurface::DrawMarker(AbstractClass * aP1, ObjectClass * aP2)
{
{
    int *Viewport;
    int v6[4];
    int v7[4];
    int v8[4];
    Viewport = Display::GetViewport(v6);
    v8[0] = *Viewport;
    v8[1] = Viewport[1];
    v8[2] = Viewport[2];
    v8[3] = Viewport[3];
    v6[0] = (int)aP1;
    v7[2] = 6;
    v7[0] = (char *)aP1 - 3;
    v7[1] = (char *)aP2 - 3;
    v7[3] = 6;
    return (*(int (__thiscall **)(int, int *, int *, void *))(**(int **)&DataGlobal_87F8E4.__pad_5568[9424] + 84))( *(int *)&DataGlobal_87F8E4.__pad_5568[9424], v8, v7, this);
}
}

// 0x759E60
char DSurface::FlipIfNeeded()
{
{
    char result;
    result = (unsigned char)this->DSurface_field_0x514;
    if ( result )
    return DSurface::Flip(this->DSurface_field_0x200);
    return result;
}
}
