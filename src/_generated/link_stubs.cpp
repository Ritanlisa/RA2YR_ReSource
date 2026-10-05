// AUTO-GENERATED link stubs - unresolved legacy declarations.
// Each body is an empty placeholder pending C-line translation.
// Regenerate via tools/gen_link_stubs.py after linking passes.
// Suppress legacy using-decl aliasing: this TU combines headers
// whose gamemd-local forward declarations collide with the
// ra2::game::X using-decls (C2874). Pointer-only usage makes the
// incomplete gamemd::X declarations sufficient here.
#define GAMEMD_USING_ObjectClass
#define GAMEMD_USING_FootClass
// G42.35a: with those using-decls suppressed, the gamemd-local fwd
// must be self-supplied at TU top. AbstractClass is EXCLUDED on
// purpose: headers use it as a base class via the unguarded
// using ::ra2::game::AbstractClass; alias -- a gamemd-local fwd of
// it would collide (C2874) and demote the base to incomplete.
namespace gamemd { class ObjectClass; class FootClass; }
#include <windows.h>
#include <cstdint>
#include "src/core/cellcoord.hpp"
#include "src/core/utility_ext.hpp"
#include "src/csp_canon/classes.hpp"
#include "src/misc/locomotion.hpp"

namespace gamemd {
// truth-filled 0x6D2790 (G42.52 truth-emitting generator)
char Cell::CreateCrater(int a0, int a1, int a2, int a3, char a4)
{
    int v5; // ecx
    int *v6; // eax
    int v7; // ebp
    int v8; // ecx
    int v9; // edx
    int v10; // esi
    int v11; // eax
    int v12; // eax
    int v13; // edx
    int v14; // eax
    char *v15; // esi
    char *v16; // edi
    int v17; // eax
    bool v18; // cc
    int v19; // eax
    bool v20; // bl
    int v21; // edx
    int v22; // ecx
    int v23; // edx
    const RECT *v25; // [esp+0h] [ebp-68h]
    const RECT *v26; // [esp+4h] [ebp-64h]
    int v27; // [esp+10h] [ebp-58h]
    int v28; // [esp+14h] [ebp-54h]
    int v29; // [esp+18h] [ebp-50h]
    int v30; // [esp+1Ch] [ebp-4Ch]
    int v31; // [esp+20h] [ebp-48h]
    int v32; // [esp+24h] [ebp-44h]
    int v33; // [esp+28h] [ebp-40h]
    int v34; // [esp+2Ch] [ebp-3Ch]
    int v35; // [esp+30h] [ebp-38h] BYREF
    int v36; // [esp+34h] [ebp-34h]
    int v37; // [esp+38h] [ebp-30h]
    int v38; // [esp+3Ch] [ebp-2Ch]
    _DWORD v39[5]; // [esp+40h] [ebp-28h] BYREF
    _DWORD v40[5]; // [esp+54h] [ebp-14h] BYREF

    v5 = g_CraterCreationState; /*0x6d2793*/
    v29 = -1; /*0x6d27a1*/
    v30 = 0x7FFFFFFF; /*0x6d27a9*/
    v28 = 0; /*0x6d27b1*/
    if ( g_CraterCreationState <= 0 ) /*0x6d27b5*/
      goto LABEL_43; /*0x6d27b5*/
    v27 = 0; /*0x6d27bb*/
    do /*0x6d2a15*/
    {
      v35 = *(_DWORD *)((char *)g_CraterPool + v27); /*0x6d27d0*/
      v36 = *(_DWORD *)((char *)g_CraterPool + v27 + 4); /*0x6d27d7*/
      v37 = *(_DWORD *)((char *)g_CraterPool + v27 + 8); /*0x6d27de*/
      v38 = *(_DWORD *)((char *)g_CraterPool + v27 + 12); /*0x6d27f2*/
      v6 = ClipRectIntersection(v40, &v35, &a1, 0, 0); /*0x6d27f6*/
      v7 = v38; /*0x6d2801*/
      v31 = *v6; /*0x6d2805*/
      v32 = v6[1]; /*0x6d280c*/
      v8 = v36; /*0x6d2810*/
      v33 = v6[2]; /*0x6d2817*/
      v9 = v35; /*0x6d281b*/
      v34 = v6[3]; /*0x6d2824*/
      if ( v37 <= 0 || v38 <= 0 ) /*0x6d2830*/
      {
        v10 = a4; /*0x6d28c8*/
        v39[1] = a2; /*0x6d28cc*/
        v11 = a3; /*0x6d28d0*/
        v39[0] = a1; /*0x6d28d4*/
      }
      else if ( a3 <= 0 || a4 <= 0 ) /*0x6d2844*/
      {
        v39[0] = v35; /*0x6d28b2*/
        v39[1] = v36; /*0x6d28b6*/
        v11 = v37; /*0x6d28ba*/
        v10 = v38; /*0x6d28bc*/
      }
      else
      {
        v10 = v38; /*0x6d2846*/
        v11 = v37; /*0x6d284e*/
        if ( v35 > a1 ) /*0x6d2850*/
        {
          v11 = v35 + v37 - a1; /*0x6d2854*/
          v9 = a1; /*0x6d2856*/
        }
        if ( v36 > a2 ) /*0x6d285e*/
        {
          v10 = v36 - a2 + v38; /*0x6d2862*/
          v8 = a2; /*0x6d2864*/
        }
        if ( v11 + v9 < a1 + a3 ) /*0x6d2871*/
          v11 = a3 - v9 + a1 + 1; /*0x6d287d*/
        if ( v10 + v8 < a4 + a2 ) /*0x6d2890*/
          v10 = a2 - v8 + a4 + 1; /*0x6d289c*/
        v7 = v38; /*0x6d28a0*/
        v39[0] = v9; /*0x6d28a4*/
        v9 = v35; /*0x6d28a8*/
        v39[1] = v8; /*0x6d28ac*/
      }
      if ( v33 > 0 && v34 > 0 ) /*0x6d28ea*/
      {
        if ( v31 == a1 && v32 == a2 && v33 == a3 && v34 == a4 ) /*0x6d291e*/
        {
          LOBYTE(v12) = a5; /*0x6d2920*/
          if ( !a5 ) /*0x6d2926*/
            return v12; /*0x6d2926*/
          LOBYTE(v12) = v27; /*0x6d2932*/
          if ( *((_BYTE *)g_CraterPool + v27 + 16) ) /*0x6d2936*/
            return v12; /*0x6d293c*/
        }
        else if ( v31 == v9 && v32 == v36 && v33 == v37 && v34 == v7 ) /*0x6d2967*/
        {
          if ( a5 || !*((_BYTE *)g_CraterPool + v27 + 16) ) /*0x6d297b*/
          {
            if ( v28 < g_CraterCreationState ) /*0x6d298e*/
            {
              v13 = v28; /*0x6d2991*/
              if ( v28 < --g_CraterCreationState ) /*0x6d299a*/
              {
                v14 = v27; /*0x6d299c*/
                do /*0x6d29be*/
                {
                  ++v13; /*0x6d29a6*/
                  v15 = (char *)g_CraterPool + v14 + 20; /*0x6d29a7*/
                  v16 = (char *)g_CraterPool + v14; /*0x6d29ab*/
                  v14 += 20; /*0x6d29b3*/
                  qmemcpy(v16, v15, 0x14u); /*0x6d29b6*/
                }
                while ( v13 < g_CraterCreationState ); /*0x6d29be*/
              }
            }
            --v28; /*0x6d29c8*/
            v27 -= 20; /*0x6d29cc*/
          }
        }
        else
        {
          v17 = v10 * v11; /*0x6d29de*/
          if ( v17 < v37 * v7 + a3 * a4 && v17 < v30 ) /*0x6d29eb*/
          {
            v30 = v17; /*0x6d29f1*/
            v29 = v28; /*0x6d29f5*/
          }
        }
      }
      v5 = g_CraterCreationState; /*0x6d2a01*/
      v18 = ++v28 < g_CraterCreationState; /*0x6d2a0b*/
      v27 += 20; /*0x6d2a11*/
    }
    while ( v18 ); /*0x6d2a15*/
    if ( v29 == -1 ) /*0x6d2a22*/
    {
  LABEL_43:
      v40[0] = a1; /*0x6d2a30*/
      v40[2] = a3; /*0x6d2a38*/
      LOBYTE(v40[4]) = a5; /*0x6d2a40*/
      LOBYTE(v12) = dword_B0CE80; /*0x6d2a44*/
      v40[1] = a2; /*0x6d2a49*/
      v40[3] = a4; /*0x6d2a53*/
      if ( v5 < dword_B0CE80 /*0x6d2a8e*/
        || (byte_B0CE85 || !dword_B0CE80)
        && dword_B0CE8C > 0
        && (LOBYTE(v12) = (*(int (__thiscall **)(int *, int, _DWORD))(dword_B0CE78 + 8))(
                            &dword_B0CE78,
                            dword_B0CE8C + dword_B0CE80,
                            0),
            (_BYTE)v12) )
      {
        v19 = g_CraterCreationState++; /*0x6d2a9e*/
        v12 = 5 * v19; /*0x6d2aad*/
        qmemcpy((char *)g_CraterPool + 4 * v12, v40, 0x14u); /*0x6d2ab8*/
      }
    }
    else
    {
      v20 = a5 || *((_BYTE *)g_CraterPool + 20 * v29 + 16); /*0x6d2ae0*/
      v12 = Rect::Union((LPRECT)((char *)g_CraterPool + 20 * v29), v25, v26); /*0x6d2b01*/
      v21 = *(_DWORD *)(v12 + 4); /*0x6d2b08*/
      v39[0] = *(_DWORD *)v12; /*0x6d2b0b*/
      v22 = *(_DWORD *)(v12 + 8); /*0x6d2b0f*/
      v39[1] = v21; /*0x6d2b12*/
      v23 = *(_DWORD *)(v12 + 12); /*0x6d2b16*/
      LOBYTE(v12) = (_BYTE)g_CraterPool; /*0x6d2b19*/
      v39[2] = v22; /*0x6d2b1e*/
      v39[3] = v23; /*0x6d2b27*/
      LOBYTE(v39[4]) = v20; /*0x6d2b32*/
      qmemcpy((char *)g_CraterPool + 20 * v29, v39, 0x14u); /*0x6d2b36*/
    }
    return v12; /*0x6d2aba*/
}
// truth-filled 0x4BA5A0 (G42.52 truth-emitting generator)
char gamemd::DSurface::BlitCore(int* a0, int* a1, int* a2, void* a3, int* a4, int* a5, int a6, char a7)
{
    _DWORD *v6; // ebp
    void *v7; // edi
    int v8; // eax

    v6 = this + 28; /*0x4ba5b0*/
    *((_DWORD *)this + 1) = a2; /*0x4ba5b5*/
    *((_DWORD *)this + 2) = a3; /*0x4ba5b8*/
    *((_DWORD *)this + 3) = 0; /*0x4ba5bb*/
    *((_DWORD *)this + 4) = 0; /*0x4ba5be*/
    *((_DWORD *)this + 5) = 0; /*0x4ba5c1*/
    *(this + 24) = 0; /*0x4ba5c4*/
    *(this + 25) = 0; /*0x4ba5c7*/
    *((_DWORD *)this + 7) = 0; /*0x4ba5ca*/
    *((_DWORD *)this + 8) = 0; /*0x4ba5cd*/
    *(_DWORD *)this = &DSurface_Vtable; /*0x4ba5d0*/
    v7 = __2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
    *((_DWORD *)this + 8) = v7; /*0x4ba5e2*/
    if ( v7 ) /*0x4ba5e5*/
    {
      memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
      **((_DWORD **)this + 8) = 108; /*0x4ba5f7*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 4) = 7; /*0x4ba604*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 12) = a2; /*0x4ba60e*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 8) = a3; /*0x4ba618*/
      if ( a4 == 1 ) /*0x4ba621*/
        *(_DWORD *)(*((_DWORD *)this + 8) + 104) = 2048; /*0x4ba626*/
      if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
        *(_DWORD *)(*((_DWORD *)this + 8) + 104) = 8256; /*0x4ba63e*/
      g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
        g_lpDirectDraw7,
        (LPDDSURFACEDESC)*((_DWORD *)this + 8),
        (LPDIRECTDRAWSURFACE *)(this + 28),
        0);
      if ( *v6 ) /*0x4ba656*/
      {
        memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
        **((_DWORD **)this + 8) = 108; /*0x4ba66a*/
        (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, *((_DWORD *)this + 8)); /*0x4ba67a*/
        v8 = *((_DWORD *)this + 8); /*0x4ba67d*/
        *((_DWORD *)this + 4) = (unsigned int)(*(_DWORD *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
        *(this + 25) = (*(_DWORD *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
      }
    }
    return this; /*0x4ba69a*/
}
// truth-filled 0x410800 (G42.52 truth-emitting generator)
void gamemd::AbstractTypeClass::AbstractTypeClass(gamemd::AbstractTypeClass::noinit_t a0)
{
    char *v3; // ebx
    int v4; // eax
    char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
    char Destination[48]; // [esp+20h] [ebp-34h] BYREF
    char v8; // [esp+50h] [ebp-4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
    v3 = (char *)(this + 9); /*0x410812*/
    *((_BYTE *)this + 36) = 0; /*0x410817*/
    *((_BYTE *)this + 61) = 0; /*0x41081a*/
    *((_BYTE *)this + 100) = 0; /*0x41081e*/
    *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
    *(this + 1) = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
    *(this + 2) = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
    *(this + 3) = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
    if ( Source ) /*0x41083e*/
    {
      strncpy(Destination, Source, 0x18u); /*0x410895*/
      Destination[24] = 0; /*0x4108a3*/
      if ( Destination == v3 ) /*0x4108a8*/
        goto LABEL_9; /*0x4108a8*/
      goto LABEL_8; /*0x4108a8*/
    }
    sprintf(Buffer, "%08X", this); /*0x41084b*/
    if ( Buffer ) /*0x410859*/
    {
      strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
      Destination[24] = 0; /*0x410875*/
    }
    else
    {
      Destination[0] = 0; /*0x41085b*/
    }
    if ( Destination != v3 ) /*0x410880*/
    {
  LABEL_8:
      qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
      *((_BYTE *)this + 60) = Destination[24]; /*0x4108b7*/
    }
  LABEL_9:
    if ( this == (int *)-36 ) /*0x4108ba*/
    {
      Destination[0] = 0; /*0x4108bc*/
    }
    else
    {
      strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
      v8 = 0; /*0x4108d2*/
    }
    if ( Destination != (char *)(this + 25) ) /*0x4108e0*/
    {
      qmemcpy(this + 25, Destination, 0x30u); /*0x4108eb*/
      *((_BYTE *)this + 148) = v8; /*0x4108ed*/
    }
    *(this + 24) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
    if ( dword_A8E978 < dword_A8E970 /*0x410929*/
      || (byte_A8E975 || !dword_A8E970)
      && dword_A8E97C > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))(
           &dword_A8E968,
           dword_A8E970 + dword_A8E97C,
           0) )
    {
      v4 = dword_A8E978++; /*0x410936*/
      *((_DWORD *)dword_A8E96C + v4) = this; /*0x410945*/
    }
    return (int)this; /*0x410948*/
}
// truth-filled 0x431B20 (G42.52 truth-emitting generator)
void gamemd::BufferIOFileClass::BufferIOFileClass(gamemd::noinit_t const& a0)
{
    LOBYTE(this->FilePointer) = 0; /*0x431b27*/
    this->FileSize = 1; /*0x431b2a*/
    this->Handle = 0; /*0x431b31*/
    this->FileName = -1; /*0x431b34*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x431b37*/
    *(_DWORD *)this->FileNameAllocated = 0; /*0x431b3a*/
    *(_WORD *)this->BufferDirty = 0; /*0x431b3d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x431b41*/
    this->CacheReadAhead[0] = 0; /*0x431b45*/
    this->BufferOffset = 0; /*0x431b48*/
    LOBYTE(this->BufferSize) = 0; /*0x431b54*/
    BYTE1(this->BufferSize) = 0; /*0x431b57*/
    this->BufferPosition = 0; /*0x431b5a*/
    this->FileBaseOffset = 0; /*0x431b5d*/
    this->BufferReadSize = 0; /*0x431b60*/
    this->StreamSize = 0; /*0x431b63*/
    this->BufferMaxSize = 0; /*0x431b66*/
    this->BufferCursor = -1; /*0x431b69*/
    this->TotalBytesRead = -1; /*0x431b6c*/
    this->TotalBytesWritten = 0; /*0x431b6f*/
    this->FileID = 0; /*0x431b72*/
    this->MixFileIndex = 0; /*0x431b75*/
    this->FileClass = (FileClass)&BufferIOFileClass::`vftable'; /*0x431b78*/
    return &this->FileClass; /*0x431b7e*/
}
// link stub (no binary body yet)
gamemd::CDFileClass::CDFileClass(gamemd::noinit_t const& a0) {}
// truth-filled 0x554760 (G42.52 truth-emitting generator)
void gamemd::LightSourceClass::LightSourceClass(gamemd::Vector3D<int> const& a0, int a1, int a2, gamemd::TintStruct const& a3, int a4)
{
    int v10; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x554763*/
    this->LightTint[0] = a7; /*0x554774*/
    this->LightIntensity = a6; /*0x554777*/
    this->LightTint[1] = a8; /*0x55477e*/
    this->LightTint[2] = a9; /*0x554788*/
    this->DetailLevel = 2; /*0x55478f*/
    this->Location[0] = a2; /*0x554796*/
    this->Activated = 0; /*0x55479c*/
    this->AbstractClass = &LightSourceClass::`vftable'; /*0x5547a0*/
    this->Location[1] = a3; /*0x5547a6*/
    this->LightVisibility = a5; /*0x5547ad*/
    this->? = &LightSourceClass::`vftable'; /*0x5547b0*/
    this->Location[2] = a4; /*0x5547b7*/
    this->? = &LightSourceClass::`vftable'; /*0x5547ba*/
    this->? = &LightSourceClass::`vftable'; /*0x5547c1*/
    if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5547fd*/
      || (BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
      && g_MissionQueueFrame.random[134] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.random[129] + 8))(
           &g_MissionQueueFrame.random[129],
           g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
           0) )
    {
      v10 = g_MissionQueueFrame.random[133]++; /*0x55480a*/
      *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v10) = this; /*0x554819*/
    }
    return &this->AbstractClass; /*0x55481e*/
}
// truth-filled 0x5F7320 (G42.52 truth-emitting generator)
void gamemd::ObjectTypeClass::ObjectTypeClass(gamemd::ObjectTypeClass::noinit_t a0)
{
    int *v3; // eax
    int v4; // edx
    char *v5; // eax
    int v6; // edx

    AbstractTypeClass::Init((int)this, a2); /*0x5f7328*/
    v3 = &this->ChargerTurrets[3]; /*0x5f732f*/
    this->Image = 0; /*0x5f7335*/
    v4 = 18; /*0x5f733b*/
    do /*0x5f7349*/
    {
      *v3 = 0; /*0x5f7340*/
      v3[1] = 0; /*0x5f7342*/
      v3 += 2; /*0x5f7345*/
      --v4; /*0x5f7348*/
    }
    while ( v4 ); /*0x5f7349*/
    v5 = &this->__pad_14D[11]; /*0x5f734b*/
    v6 = 18; /*0x5f7351*/
    do /*0x5f735f*/
    {
      *(_DWORD *)v5 = 0; /*0x5f7356*/
      *((_DWORD *)v5 + 1) = 0; /*0x5f7358*/
      v5 += 8; /*0x5f735b*/
      --v6; /*0x5f735e*/
    }
    while ( v6 ); /*0x5f735f*/
    this->VoxelCaches[0] = 0; /*0x5f7361*/
    this->VoxelCaches[1] = 0; /*0x5f7367*/
    this->VoxelCaches[2] = 0; /*0x5f736d*/
    LOBYTE(this->VoxelCaches[3]) = 0; /*0x5f7373*/
    this->VoxelCaches[4] = 0; /*0x5f7379*/
    this->VoxelCaches[5] = 0; /*0x5f737f*/
    this->VoxelCaches[6] = 0; /*0x5f7385*/
    this->VoxelCaches[7] = 0; /*0x5f738b*/
    LOBYTE(this->VoxelCaches[8]) = 0; /*0x5f7391*/
    this->VoxelCaches[9] = 0; /*0x5f7397*/
    this->VoxelCaches[10] = 0; /*0x5f739d*/
    this->VoxelCaches[11] = 0; /*0x5f73a3*/
    this->VoxelCaches[12] = 0; /*0x5f73a9*/
    LOBYTE(this->VoxelCaches[13]) = 0; /*0x5f73af*/
    this->VoxelCaches[14] = 0; /*0x5f73b5*/
    this->VoxelCaches[15] = 0; /*0x5f73bb*/
    this->VoxelCaches[16] = 0; /*0x5f73c1*/
    this->VoxelCaches[17] = 0; /*0x5f73c7*/
    LOBYTE(this->VoxelCaches[18]) = 0; /*0x5f73cd*/
    this->VoxelCaches[19] = 0; /*0x5f73d3*/
    this->AbstractTypeClass = &ObjectTypeClass::`vftable'; /*0x5f73d9*/
    this->? = &ObjectTypeClass::`vftable'; /*0x5f73df*/
    this->? = &ObjectTypeClass::`vftable'; /*0x5f73e6*/
    this->? = &ObjectTypeClass::`vftable'; /*0x5f73ed*/
    return &this->AbstractTypeClass; /*0x5f73f6*/
}
// link stub (no binary body yet)
gamemd::ParticleSystemTypeClass::ParticleSystemTypeClass(gamemd::ParticleSystemTypeClass::noinit_t a0) {}
// truth-filled 0x5113F0 (G42.52 truth-emitting generator)
void gamemd::SuperWeaponTypeClass::SuperWeaponTypeClass(gamemd::AbstractTypeClass::noinit_t a0)
{
    BuildingTypeClass *v3; // ebx
    int v4; // eax
    bool v5; // zf
    int v6; // ecx
    SuperWeaponTypeClass **v7; // edx
    SuperWeaponTypeClass **v8; // ecx

    AbstractTypeClass::Constructor((int *)this, Source); /*0x5113fa*/
    v3 = 0; /*0x5113ff*/
    LOBYTE(this->ArrayIndex) = 0; /*0x511404*/
    this->Type = (BuildingTypeClass *)-1; /*0x51140a*/
    this->SidebarImage = (SHPStruct *)-1; /*0x511410*/
    this->ActionValue[0] = -1; /*0x511416*/
    this->SpecialSound = 0; /*0x51141c*/
    this->AuxBuilding = 0; /*0x511427*/
    this->SidebarImageFile[0] = 1072693248; /*0x51142d*/
    this->SidebarImageFile[1] = 0; /*0x511433*/
    this->SidebarImageFile[2] = 1072693248; /*0x511439*/
    this->SidebarImageFile[3] = 0; /*0x51143f*/
    this->SidebarImageFile[4] = 1072693248; /*0x511445*/
    this->SidebarImageFile[5] = 0; /*0x51144b*/
    *(_DWORD *)&this->zero_E4 = 1072693248; /*0x511451*/
    this->FlashSidebarTabFrames = 0; /*0x511457*/
    this->PreDependent = 0; /*0x51145d*/
    this->Range = 0.0; /*0x511463*/
    *(_DWORD *)&this->AIDefendAgainst = 1072693248; /*0x511469*/
    *(_DWORD *)&this->ShowTimer = 1072693248; /*0x51146f*/
    this->LineMultiplier = 1072693248; /*0x511475*/
    *((_DWORD *)this + 64) = 1065353216; /*0x51148a*/
    *((_DWORD *)this + 65) = 1065353216; /*0x511490*/
    *((_DWORD *)this + 66) = 1065353216; /*0x511496*/
    *((_DWORD *)this + 67) = 1065353216; /*0x51149c*/
    *((_DWORD *)this + 68) = 1065353216; /*0x5114a2*/
    *((_DWORD *)this + 69) = 1065353216; /*0x5114a8*/
    *((_DWORD *)this + 70) = 1065353216; /*0x5114ae*/
    *((_DWORD *)this + 71) = 1065353216; /*0x5114b4*/
    *((_DWORD *)this + 72) = 1065353216; /*0x5114ba*/
    *((_DWORD *)this + 73) = 1065353216; /*0x5114c0*/
    *((_DWORD *)this + 74) = 1065353216; /*0x5114c6*/
    *((_DWORD *)this + 75) = 1065353216; /*0x5114cc*/
    *((_DWORD *)this + 76) = 1065353216; /*0x5114d2*/
    *((_DWORD *)this + 77) = 1065353216; /*0x5114d8*/
    *((_DWORD *)this + 78) = 1065353216; /*0x5114de*/
    *((_DWORD *)this + 79) = 1065353216; /*0x5114e4*/
    *((_DWORD *)this + 80) = 1065353216; /*0x5114ea*/
    *((_DWORD *)this + 81) = 1065353216; /*0x5114f0*/
    *((_DWORD *)this + 82) = 1065353216; /*0x5114f6*/
    InfantryTypeVector::Construct2((InfantryTypeVector *)((char *)this + 332), 0, 0); /*0x5114fc*/
    *((_DWORD *)this + 88) = 10; /*0x511501*/
    *((_DWORD *)this + 87) = 0; /*0x511508*/
    *((_DWORD *)this + 83) = &TypeList<InfantryTypeClass const *>::`vftable'; /*0x51150b*/
    UnitTypeVector::ConstructUnitTypeVectorClass((UnitTypeVector *)((char *)this + 360), 0, 0); /*0x51151b*/
    *((_DWORD *)this + 95) = 10; /*0x511520*/
    *((_DWORD *)this + 94) = 0; /*0x511527*/
    *((_DWORD *)this + 90) = &TypeList<UnitTypeClass const *>::`vftable'; /*0x51152a*/
    AircraftTypeVector::Constructor((AircraftTypeVector *)this + 97, 0, 0); /*0x51153a*/
    *((_DWORD *)this + 102) = 10; /*0x511542*/
    *((_DWORD *)this + 101) = 0; /*0x511549*/
    *((_DWORD *)this + 97) = &TypeList<AircraftTypeClass const *>::`vftable'; /*0x51154c*/
    *((_DWORD *)this + 105) = 16777281; /*0x511552*/
    *((_BYTE *)this + 424) = 0; /*0x51156c*/
    this->AbstractTypeClass = &HouseTypeClass::`vftable'; /*0x511572*/
    this->? = &HouseTypeClass::`vftable'; /*0x511578*/
    this->? = &HouseTypeClass::`vftable'; /*0x51157f*/
    this->? = &HouseTypeClass::`vftable'; /*0x511586*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x51158d*/
    *((_BYTE *)this + 416) = 0; /*0x511592*/
    v4 = dword_A83CA8; /*0x511598*/
    if ( dword_A83CA8 < dword_A83CA0 /*0x5115d6*/
      || (byte_A83CA5 || !dword_A83CA0)
      && dword_A83CAC[0] > 0
      && (v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83C98 + 8))(
                 &dword_A83C98,
                 dword_A83CA0 + dword_A83CAC[0],
                 0) == 0,
          v4 = dword_A83CA8,
          !v5) )
    {
      dword_A83CA8 = v4 + 1; /*0x5115db*/
      *((_DWORD *)dword_A83C9C + v4) = this; /*0x5115e5*/
      v4 = dword_A83CA8; /*0x5115e8*/
    }
    v6 = 0; /*0x5115ed*/
    if ( v4 <= 0 ) /*0x5115f1*/
    {
  LABEL_11:
      v6 = -1; /*0x511605*/
    }
    else
    {
      v7 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x5115f3*/
      while ( *v7 != this ) /*0x5115fb*/
      {
        ++v6; /*0x5115fd*/
        ++v7; /*0x5115fe*/
        if ( v6 >= v4 ) /*0x511603*/
          goto LABEL_11; /*0x511603*/
      }
    }
    this->SidebarImage = (SHPStruct *)v6; /*0x511608*/
    if ( dword_A83CA8 <= 0 ) /*0x511615*/
    {
  LABEL_16:
      this->Type = (BuildingTypeClass *)-1; /*0x511629*/
      return this; /*0x511633*/
    }
    else
    {
      v8 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x511617*/
      while ( *v8 != this ) /*0x51161f*/
      {
        v3 = (BuildingTypeClass *)((char *)v3 + 1); /*0x511621*/
        ++v8; /*0x511622*/
        if ( (int)v3 >= dword_A83CA8 ) /*0x511627*/
          goto LABEL_16; /*0x511627*/
      }
      this->Type = v3; /*0x51163a*/
      return this; /*0x511640*/
    }
}
// truth-filled 0x7353C0 (G42.52 truth-emitting generator)
void gamemd::UnitClass::UnitClass()
{
    int v4; // eax
    _DWORD *Value; // eax
    int v6; // eax
    int InstanceCOM; // eax
    LPVOID v8; // edi
    LPVOID v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // ecx
    int v13; // eax
    BuildingClass *v14; // ecx
    int v15; // edi
    int v16; // eax
    int v17; // ecx
    int v18; // eax
    int v19; // edx
    _DWORD *v20; // eax
    int v21; // eax
    int v22; // eax
    int vtable2; // ebp
    _DWORD *v24; // edi
    int i; // eax
    _DWORD *v26; // edx
    TechnoClass *v28; // [esp+8h] [ebp-1Ch]
    int v29; // [esp+1Ch] [ebp-8h]

    FootClass::Construct((FootClass *)this, (int)ppv); /*0x7353ce*/
    *(this + 432) = -1; /*0x7353e0*/
    *(this + 433) = a2; /*0x7353e6*/
    *(this + 434) = 0; /*0x7353ec*/
    *(this + 435) = -1; /*0x7353f2*/
    *((_BYTE *)this + 1744) = 0; /*0x7353f8*/
    *((_BYTE *)this + 1745) = 0; /*0x7353fe*/
    *((_BYTE *)this + 1746) = 0; /*0x735404*/
    *((_BYTE *)this + 1747) = 0; /*0x73540a*/
    *(this + 437) = -1; /*0x735410*/
    *(this + 438) = -1; /*0x735416*/
    *(this + 439) = 0; /*0x73541c*/
    *((_BYTE *)this + 1760) = 0; /*0x735422*/
    *((_BYTE *)this + 1761) = 0; /*0x735428*/
    *((_BYTE *)this + 1762) = 0; /*0x73542e*/
    *(this + 441) = 0; /*0x735434*/
    *this = (int)&UnitClass::`vftable'; /*0x73543a*/
    *(this + 1) = (int)&UnitClass::`vftable'; /*0x735440*/
    *(this + 2) = (int)&UnitClass::`vftable'; /*0x735446*/
    *(this + 3) = (int)&off_7F5C44; /*0x73544d*/
    AbstractClass::GenerateUniqueID((AbstractClass *)(this + 1)); /*0x735454*/
    if ( FootClass_Array.?[2] < FootClass_Array.?[0] /*0x73548f*/
      || (BYTE1(FootClass_Array.?[1]) || !FootClass_Array.?[0])
      && FootClass_Array.?[3] > 0
      && (*(unsigned __int8 (__thiscall **)(float *, int, _DWORD))(LODWORD(FootClass_Array.?) + 8))(
           &FootClass_Array.?,
           FootClass_Array.?[0] + FootClass_Array.?[3],
           0) )
    {
      v4 = FootClass_Array.?[2]++; /*0x73549c*/
      *(_DWORD *)(FootClass_Array.? + 4 * v4) = this; /*0x7354ab*/
    }
    Value = ProgressTimer::GetValue((ProgressTimer *)(this + 226), &ppv); /*0x7354c1*/
    FacingClass::Set_SyncLog((char *)this + 928, Value); /*0x7354c9*/
    v6 = *(this + 433); /*0x7354ce*/
    if ( v6 ) /*0x7354d6*/
    {
      ppv = 0; /*0x7354ea*/
      InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)(v6 + 844), 0, 7u); /*0x7354f2*/
      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x735500*/
        WinAPI::Wrapper(InstanceCOM); /*0x735503*/
      v8 = (LPVOID)*(this + 413); /*0x735508*/
      v9 = ppv; /*0x73550e*/
      if ( v8 != ppv ) /*0x735514*/
      {
        *(this + 413) = (int)ppv; /*0x735518*/
        if ( v9 ) /*0x73551e*/
        {
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 4))(v9); /*0x735523*/
          v9 = ppv; /*0x735526*/
        }
        if ( v8 ) /*0x73552c*/
        {
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v8 + 8))(v8); /*0x735531*/
          v9 = ppv; /*0x735534*/
        }
      }
      if ( v9 ) /*0x73553a*/
        (*(void (__stdcall **)(LPVOID))(*(_DWORD *)v9 + 8))(v9); /*0x73553f*/
      if ( !*(this + 413) ) /*0x735542*/
        WinAPI::Wrapper(-2147467261); /*0x735551*/
      (*(void (__stdcall **)(_DWORD, int *))(*(_DWORD *)*(this + 413) + 12))(*(this + 413), this); /*0x735560*/
    }
    v10 = *(this + 433); /*0x735566*/
    if ( v10 ) /*0x73556e*/
    {
      BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(this + 226), *(_DWORD *)(v10 + 1820)); /*0x735579*/
      BuildingTypeClass::GetPowerOutput((BuildingTypeClass *)(this + 232), *(_DWORD *)(*(this + 433) + 1820)); /*0x73558d*/
      v11 = *(this + 433); /*0x735592*/
      v12 = *(_DWORD *)(v11 + 1664); /*0x735598*/
      if ( v12 == -1 ) /*0x7355a0*/
        v12 = *(_DWORD *)(v11 + 1668); /*0x7355a2*/
      *(this + 191) = v12; /*0x7355a8*/
      *((_BYTE *)this + 978) = *(_BYTE *)(v11 + 3280); /*0x7355b4*/
      v13 = *(_DWORD *)(v11 + 160); /*0x7355ba*/
      *(this + 27) = v13; /*0x7355c0*/
      *(this + 28) = v13; /*0x7355c3*/
    }
    *(this + 127) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x7355d3*/
    *(this + 128) = v29; /*0x7355d9*/
    *(this + 129) = 0; /*0x7355dc*/
    v14 = (BuildingClass *)*(this + 135); /*0x7355df*/
    if ( v14 ) /*0x7355e7*/
      BuildingClass::PowerUpdate(v14, this); /*0x7355ea*/
    TechnoClass::Update(v28, -1); /*0x7355f1*/
    v15 = *(this + 433); /*0x7355f6*/
    if ( v15 ) /*0x7355fe*/
    {
      v16 = *(this + 135); /*0x735604*/
      if ( v16 ) /*0x73560c*/
      {
        v17 = 0; /*0x735611*/
        v18 = *(_DWORD *)(v16 + 52) + 360; /*0x735613*/
        v19 = *(_DWORD *)(v18 + 16); /*0x735618*/
        if ( v19 > 0 ) /*0x73561d*/
        {
          v20 = *(_DWORD **)(v18 + 4); /*0x73561f*/
          while ( *v20 != v15 ) /*0x735624*/
          {
            ++v17; /*0x735626*/
            ++v20; /*0x735627*/
            if ( v17 >= v19 ) /*0x73562c*/
              goto LABEL_35; /*0x73562c*/
          }
          Power::ChangedHouse((Power *)this + 21, 1); /*0x735638*/
        }
      }
  LABEL_35:
      v21 = *(this + 135); /*0x73563d*/
      if ( v21 ) /*0x735645*/
      {
        if ( *(_BYTE *)(v21 + 704) ) /*0x735647*/
        {
          v22 = *(this + 433); /*0x735651*/
          if ( !*(_BYTE *)(v22 + 3278) ) /*0x735657*/
          {
            if ( *(_BYTE *)(v22 + 3214) ) /*0x735661*/
              Power::ChangedHouse((Power *)this + 21, 1); /*0x735673*/
          }
        }
      }
      if ( *(_BYTE *)(*(this + 433) + 2053) ) /*0x73567e*/
        UnitClass::SetTurret((UnitClass *)this, 0); /*0x73568c*/
    }
    ppv = (LPVOID)AbstractClass::GetVtable3((AbstractClass *)(this + 1)); /*0x7356a0*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x7356ac*/
      goto LABEL_50; /*0x7356ac*/
    if ( g_BuildingLoadQueue_Array.? ) /*0x7356b4*/
    {
      vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x7356bd*/
      if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x7356c1*/
        return (int)this; /*0x7356c1*/
    }
    else
    {
      vtable2 = 10; /*0x7356b6*/
    }
    v24 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x7356d7*/
    if ( v24 ) /*0x7356de*/
    {
      for ( i = 0; i < (int)g_BuildingLoadQueue_Array.?; v24[2 * i - 1] = v26[1] ) /*0x7356f3*/
      {
        v26 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * i++; /*0x7356fb*/
        v24[2 * i - 2] = *v26; /*0x735701*/
      }
      __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x73571c*/
      g_BuildingLoadQueue_Array.TechnoTypeClass = v24; /*0x73572b*/
      g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x735731*/
      g_BuildingLoadQueue_Array.? = 0; /*0x735736*/
  LABEL_50:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = ppv; /*0x735740*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x73575e*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x735768*/
      ++g_BuildingLoadQueue_Array.?; /*0x73576f*/
    }
    return (int)this; /*0x735776*/
}
// truth-filled 0x4BA5A0 (G42.52 truth-emitting generator)
void gamemd::DSurface::DSurface(int a0, int a1, bool a2, bool a3)
{
    _DWORD *v6; // ebp
    void *v7; // edi
    int v8; // eax

    v6 = this + 28; /*0x4ba5b0*/
    *((_DWORD *)this + 1) = a2; /*0x4ba5b5*/
    *((_DWORD *)this + 2) = a3; /*0x4ba5b8*/
    *((_DWORD *)this + 3) = 0; /*0x4ba5bb*/
    *((_DWORD *)this + 4) = 0; /*0x4ba5be*/
    *((_DWORD *)this + 5) = 0; /*0x4ba5c1*/
    *(this + 24) = 0; /*0x4ba5c4*/
    *(this + 25) = 0; /*0x4ba5c7*/
    *((_DWORD *)this + 7) = 0; /*0x4ba5ca*/
    *((_DWORD *)this + 8) = 0; /*0x4ba5cd*/
    *(_DWORD *)this = &DSurface_Vtable; /*0x4ba5d0*/
    v7 = __2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
    *((_DWORD *)this + 8) = v7; /*0x4ba5e2*/
    if ( v7 ) /*0x4ba5e5*/
    {
      memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
      **((_DWORD **)this + 8) = 108; /*0x4ba5f7*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 4) = 7; /*0x4ba604*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 12) = a2; /*0x4ba60e*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 8) = a3; /*0x4ba618*/
      if ( a4 == 1 ) /*0x4ba621*/
        *(_DWORD *)(*((_DWORD *)this + 8) + 104) = 2048; /*0x4ba626*/
      if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
        *(_DWORD *)(*((_DWORD *)this + 8) + 104) = 8256; /*0x4ba63e*/
      g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
        g_lpDirectDraw7,
        (LPDDSURFACEDESC)*((_DWORD *)this + 8),
        (LPDIRECTDRAWSURFACE *)(this + 28),
        0);
      if ( *v6 ) /*0x4ba656*/
      {
        memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
        **((_DWORD **)this + 8) = 108; /*0x4ba66a*/
        (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, *((_DWORD *)this + 8)); /*0x4ba67a*/
        v8 = *((_DWORD *)this + 8); /*0x4ba67d*/
        *((_DWORD *)this + 4) = (unsigned int)(*(_DWORD *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
        *(this + 25) = (*(_DWORD *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
      }
    }
    return this; /*0x4ba69a*/
}
// link stub (no binary body yet)
gamemd::MixFileClass::MixFileClass(const char* a0) {}
// link stub (no binary body yet)
gamemd::TintStruct::TintStruct() {}
// truth-filled 0x75E950 (G42.52 truth-emitting generator)
void gamemd::WaveClass::WaveClass(ra2::game::TechnoClass* a0, gamemd::WaveType a1, gamemd::Vector2D<int> const& a2, unsigned int a3)
{
    double v6; // st7
    int v8; // edx
    int v10; // eax
    int v11; // eax
    int *WaveClass_field_14C; // edx
    int WaveClass_field_DC; // eax
    int v14; // edx
    int v15; // edx
    Voxel *v16; // [esp+8h] [ebp-10h]

    ObjectClass::ctor((ObjectClass *)this); /*0x75e956*/
    this->WaveClass_field_138 = 0; /*0x75e969*/
    this->WaveClass_field_140 = 0; /*0x75e96f*/
    this->Target = a6; /*0x75e975*/
    this->Type[0] = (int)a5; /*0x75e97b*/
    this->WaveClass_field_12C = 1; /*0x75e981*/
    this->WaveClass_field_12D = 0; /*0x75e988*/
    this->WaveIntensity = 100; /*0x75e98e*/
    this->WaveClass_field_134 = 0; /*0x75e998*/
    this->WaveClass_field_13C = 0; /*0x75e99e*/
    this->WaveClass_field_144 = 0; /*0x75e9a4*/
    this->WaveClass_field_148 = 0; /*0x75e9aa*/
    this->WaveClass_field_14C = 0; /*0x75e9b0*/
    this->WaveClass_field_1A0 = 0; /*0x75e9b6*/
    this->WaveClass_field_1A4 = 0; /*0x75e9bc*/
    this->WaveClass_field_1A8 = 0; /*0x75e9c2*/
    this->LaserIntensity = 0; /*0x75e9ce*/
    this->Owner = a4; /*0x75e9d4*/
    FrameSnapshot::Init((FrameSnapshot *)this->Facing); /*0x75e9da*/
    *((_DWORD *)this + 125) = 0; /*0x75e9e1*/
    *((_DWORD *)this + 126) = 5; /*0x75e9e7*/
    *((_BYTE *)this + 508) = 1; /*0x75e9f1*/
    *((_BYTE *)this + 509) = 0; /*0x75e9f8*/
    *((_DWORD *)this + 124) = &VectorClass<CellClass *>::`vftable'; /*0x75e9fe*/
    *((_DWORD *)this + 125) = __2_YAPAXI_Z(0x14u); /*0x75ea18*/
    *((_BYTE *)this + 509) = 1; /*0x75ea1e*/
    *((_DWORD *)this + 124) = &DynamicVectorClass<CellClass *>::`vftable'; /*0x75ea25*/
    *((_DWORD *)this + 129) = 10; /*0x75ea2f*/
    *((_DWORD *)this + 128) = 0; /*0x75ea39*/
    this->ObjectClass = &WaveClass::`vftable'; /*0x75ea3f*/
    this->? = &WaveClass::`vftable'; /*0x75ea45*/
    this->? = &WaveClass::`vftable'; /*0x75ea4b*/
    this->? = &off_7F6BC8; /*0x75ea52*/
    v8 = a2[1] - a3[1]; /*0x75ea66*/
    Math::Sqrt((double)((*a2 - *a3) * (*a2 - *a3) + v8 * v8)); /*0x75ea7e*/
    if ( v6 >= 240.0 ) /*0x75ea91*/
    {
      AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x75eaa4*/
      if ( *(int *)&stru_A8EB00.?[100] < *(int *)&stru_A8EB00.?[92] /*0x75eadd*/
        || (stru_A8EB00.?[97] || !*(_DWORD *)&stru_A8EB00.?[92])
        && *(int *)&stru_A8EB00.?[104] > 0
        && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[84] + 8))(
             &stru_A8EB00.?[84],
             *(_DWORD *)&stru_A8EB00.?[92] + *(_DWORD *)&stru_A8EB00.?[104],
             0) )
      {
        v10 = (*(_DWORD *)&stru_A8EB00.?[100])++; /*0x75eaea*/
        *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[88] + 4 * v10) = this; /*0x75eaf9*/
      }
      if ( !byte_B725CC ) /*0x75eb02*/
        Voxel::InitDistanceTable(v16); /*0x75eb04*/
      if ( this->Type[0] == 3 ) /*0x75eb10*/
        Voxel::LightRender((Voxel *)this, a2, (int)a3); /*0x75eb1a*/
      else
        Voxel::SectionProject((Voxel *)this, a2, (int)a3); /*0x75eb29*/
      this->WaveClass_field_1A8 = 0; /*0x75eb3c*/
      this->WaveClass_field_1CC = CalcMathFacing8(&this->WaveClass_field_CC, &this->WaveClass_field_E4); /*0x75eb51*/
      WaveClass::DrawWave(this, this->someCoords, 0); /*0x75eb57*/
      v11 = this->Type[0]; /*0x75eb5c*/
      if ( v11 > 0 && v11 <= 2 ) /*0x75eb69*/
      {
        WaveClass_field_14C = (int *)this->WaveClass_field_14C; /*0x75eb6b*/
        WaveClass_field_DC = this->WaveClass_field_DC; /*0x75eb71*/
        this->WaveClass_field_138 = 0; /*0x75eb77*/
        this->WaveClass_field_13C = 1072693248; /*0x75eb7d*/
        this->LaserIntensity = 160; /*0x75eb87*/
        *WaveClass_field_14C = WaveClass_field_DC; /*0x75eb91*/
        WaveClass_field_14C[1] = this->WaveClass_field_E0; /*0x75eb99*/
        v14 = this->WaveClass_field_14C; /*0x75eb9c*/
        *(_DWORD *)(v14 + 8) = this->WaveClass_field_D4; /*0x75eba8*/
        *(_DWORD *)(v14 + 12) = this->WaveClass_field_D8; /*0x75ebb1*/
        v15 = this->WaveClass_field_14C; /*0x75ebb4*/
        *(_DWORD *)(v15 + 16) = this->WaveClass_field_E4; /*0x75ebbc*/
        *(_DWORD *)(v15 + 20) = this->WaveClass_field_E8; /*0x75ebc2*/
      }
      Voxel::TransformMatrix((int)this); /*0x75ebc7*/
      return &this->ObjectClass; /*0x75ebcc*/
    }
    else
    {
      ObjectClass::Destroy((ObjectClass *)this); /*0x75ea95*/
      return &this->ObjectClass; /*0x75ea9a*/
    }
}
// link stub (no binary body yet)
gamemd::XSurface::XSurface(int a0, int a1) {}
// link stub (no binary body yet)
ra2::game::DirStruct::DirStruct() {}
// link stub (no binary body yet)
bool gamemd::TEventClass::Execute(int a0, int a1, ra2::game::ObjectClass* a2, int a3, int* a4, int a5) { return {}; }
// truth-filled 0x725FA0 (G42.52 truth-emitting generator)
bool gamemd::TriggerClass::FireActions(ra2::game::ObjectClass* a0, gamemd::Vector2D<short> a1)
{
    int v3; // ecx
    int v4; // eax
    int v5; // eax
    int v6; // eax
    _BYTE *v7; // eax
    void *vtable0; // ecx

    AbstractClass::Constructor((AbstractClass *)this); /*0x725fa4*/
    *(_DWORD *)(this + 36) = a2; /*0x725faf*/
    *(_DWORD *)(this + 40) = 0; /*0x725fb2*/
    *(_DWORD *)(this + 44) = 0; /*0x725fb5*/
    *(_BYTE *)(this + 48) = 0; /*0x725fb8*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x725fbb*/
    *(_DWORD *)(this + 60) = 0; /*0x725fc1*/
    *(_DWORD *)(this + 52) = v3; /*0x725fc4*/
    *(_DWORD *)(this + 64) = 0; /*0x725fc7*/
    *(_BYTE *)(this + 68) = 1; /*0x725fca*/
    *(_DWORD *)this = &TriggerClass::`vftable'; /*0x725fce*/
    *(_DWORD *)(this + 4) = &TriggerClass::`vftable'; /*0x725fd4*/
    *(_DWORD *)(this + 8) = &TriggerClass::`vftable'; /*0x725fdb*/
    *(_DWORD *)(this + 12) = &TriggerClass::`vftable'; /*0x725fe2*/
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x72601b*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726028*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726037*/
    }
    if ( g_BuildingLoadQueue_Array.unknown___2 < g_BuildingLoadQueue_Array.ExitCoord[2] /*0x72606e*/
      || (BYTE1(g_BuildingLoadQueue_Array.FoundationOutside[0]) || !g_BuildingLoadQueue_Array.ExitCoord[2])
      && g_BuildingLoadQueue_Array.DeployFacing > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ExitCoord[0] + 8))(
           g_BuildingLoadQueue_Array.ExitCoord,
           g_BuildingLoadQueue_Array.ExitCoord[2] + g_BuildingLoadQueue_Array.DeployFacing,
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.unknown___2++; /*0x72607b*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5) = this; /*0x72608a*/
    }
    if ( dword_A8EAF8 < dword_A8EAF0 /*0x7260c1*/
      || (byte_A8EAF5 || !dword_A8EAF0)
      && dword_A8EAFC > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8EAE8 + 8))(
           &dword_A8EAE8,
           dword_A8EAF0 + dword_A8EAFC,
           0) )
    {
      v6 = dword_A8EAF8++; /*0x7260ce*/
      *((_DWORD *)dword_A8EAEC + v6) = this; /*0x7260dd*/
    }
    if ( *(_DWORD *)(this + 36) ) /*0x7260e0*/
    {
      if ( (BuildingClass::ProcessUpgradeEffects((BuildingClass *)this), v7 = *(_BYTE **)(this + 36), !v7[159]) /*0x726121*/
        || (vtable0 = dword_A8B230[43].vtable0) == 0 && !v7[156]
        || vtable0 == (void *)1 && !v7[157]
        || vtable0 == (void *)2 && !v7[158] )
      {
        *(_BYTE *)(this + 68) = 0; /*0x726129*/
      }
    }
    return this; /*0x72612e*/
}
// truth-filled 0x725FA0 (G42.52 truth-emitting generator)
bool gamemd::TriggerClass::RegisterEvent(int a0, ra2::game::ObjectClass* a1, bool a2, bool a3, ra2::game::TechnoClass* a4)
{
    int v3; // ecx
    int v4; // eax
    int v5; // eax
    int v6; // eax
    _BYTE *v7; // eax
    void *vtable0; // ecx

    AbstractClass::Constructor((AbstractClass *)this); /*0x725fa4*/
    *(_DWORD *)(this + 36) = a2; /*0x725faf*/
    *(_DWORD *)(this + 40) = 0; /*0x725fb2*/
    *(_DWORD *)(this + 44) = 0; /*0x725fb5*/
    *(_BYTE *)(this + 48) = 0; /*0x725fb8*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x725fbb*/
    *(_DWORD *)(this + 60) = 0; /*0x725fc1*/
    *(_DWORD *)(this + 52) = v3; /*0x725fc4*/
    *(_DWORD *)(this + 64) = 0; /*0x725fc7*/
    *(_BYTE *)(this + 68) = 1; /*0x725fca*/
    *(_DWORD *)this = &TriggerClass::`vftable'; /*0x725fce*/
    *(_DWORD *)(this + 4) = &TriggerClass::`vftable'; /*0x725fd4*/
    *(_DWORD *)(this + 8) = &TriggerClass::`vftable'; /*0x725fdb*/
    *(_DWORD *)(this + 12) = &TriggerClass::`vftable'; /*0x725fe2*/
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x72601b*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726028*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726037*/
    }
    if ( g_BuildingLoadQueue_Array.unknown___2 < g_BuildingLoadQueue_Array.ExitCoord[2] /*0x72606e*/
      || (BYTE1(g_BuildingLoadQueue_Array.FoundationOutside[0]) || !g_BuildingLoadQueue_Array.ExitCoord[2])
      && g_BuildingLoadQueue_Array.DeployFacing > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ExitCoord[0] + 8))(
           g_BuildingLoadQueue_Array.ExitCoord,
           g_BuildingLoadQueue_Array.ExitCoord[2] + g_BuildingLoadQueue_Array.DeployFacing,
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.unknown___2++; /*0x72607b*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.ExitCoord[1] + 4 * v5) = this; /*0x72608a*/
    }
    if ( dword_A8EAF8 < dword_A8EAF0 /*0x7260c1*/
      || (byte_A8EAF5 || !dword_A8EAF0)
      && dword_A8EAFC > 0
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8EAE8 + 8))(
           &dword_A8EAE8,
           dword_A8EAF0 + dword_A8EAFC,
           0) )
    {
      v6 = dword_A8EAF8++; /*0x7260ce*/
      *((_DWORD *)dword_A8EAEC + v6) = this; /*0x7260dd*/
    }
    if ( *(_DWORD *)(this + 36) ) /*0x7260e0*/
    {
      if ( (BuildingClass::ProcessUpgradeEffects((BuildingClass *)this), v7 = *(_BYTE **)(this + 36), !v7[159]) /*0x726121*/
        || (vtable0 = dword_A8B230[43].vtable0) == 0 && !v7[156]
        || vtable0 == (void *)1 && !v7[157]
        || vtable0 == (void *)2 && !v7[158] )
      {
        *(_BYTE *)(this + 68) = 0; /*0x726129*/
      }
    }
    return this; /*0x72612e*/
}
// truth-filled 0x726C80 (G42.52 truth-emitting generator)
bool gamemd::TriggerTypeClass::RemoveAction(gamemd::TActionClass* a0)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax

    AbstractTypeClass::Constructor((int *)this, Source); /*0x726c89*/
    this->ArrayIndex = -1; /*0x726c92*/
    this->Difficulty[0] = 1; /*0x726c9c*/
    this->Difficulty[1] = 1; /*0x726ca2*/
    this->Difficulty[2] = 1; /*0x726ca8*/
    this->Enabled = 1; /*0x726cae*/
    this->MustTransfer = 0; /*0x726cb4*/
    this->House = 0; /*0x726cba*/
    this->NextTrigger = 0; /*0x726cc0*/
    this->FirstEvent = 0; /*0x726cc6*/
    this->FirstAction = 0; /*0x726ccc*/
    this->AbstractClass = &TriggerTypeClass::`vftable'; /*0x726cd2*/
    this->? = &TriggerTypeClass::`vftable'; /*0x726cd8*/
    this->? = &TriggerTypeClass::`vftable'; /*0x726cdf*/
    this->? = &TriggerTypeClass::`vftable'; /*0x726ce6*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x726d21*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v3 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x726d2e*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) = this; /*0x726d3d*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x726d74*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726d81*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726d90*/
    }
    this->ArrayIndex = *(_DWORD *)FootClass_Array.?; /*0x726d99*/
    if ( *(int *)FootClass_Array.? < FootClass_Array.?[1] /*0x726dd0*/
      || (BYTE1(FootClass_Array.?[2]) || !FootClass_Array.?[1])
      && *(int *)&FootClass_Array.? > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.? + 8))(
           &FootClass_Array.?,
           FootClass_Array.?[1] + *(_DWORD *)&FootClass_Array.?,
           0) )
    {
      v5 = (*(_DWORD *)FootClass_Array.?)++; /*0x726ddd*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * v5) = this; /*0x726dec*/
    }
    return &this->AbstractClass; /*0x726df1*/
}
// truth-filled 0x726C80 (G42.52 truth-emitting generator)
bool gamemd::TriggerTypeClass::RemoveEvent(gamemd::TEventClass* a0)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax

    AbstractTypeClass::Constructor((int *)this, Source); /*0x726c89*/
    this->ArrayIndex = -1; /*0x726c92*/
    this->Difficulty[0] = 1; /*0x726c9c*/
    this->Difficulty[1] = 1; /*0x726ca2*/
    this->Difficulty[2] = 1; /*0x726ca8*/
    this->Enabled = 1; /*0x726cae*/
    this->MustTransfer = 0; /*0x726cb4*/
    this->House = 0; /*0x726cba*/
    this->NextTrigger = 0; /*0x726cc0*/
    this->FirstEvent = 0; /*0x726cc6*/
    this->FirstAction = 0; /*0x726ccc*/
    this->AbstractClass = &TriggerTypeClass::`vftable'; /*0x726cd2*/
    this->? = &TriggerTypeClass::`vftable'; /*0x726cd8*/
    this->? = &TriggerTypeClass::`vftable'; /*0x726cdf*/
    this->? = &TriggerTypeClass::`vftable'; /*0x726ce6*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x726d21*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v3 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x726d2e*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v3) = this; /*0x726d3d*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x726d74*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x726d81*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x726d90*/
    }
    this->ArrayIndex = *(_DWORD *)FootClass_Array.?; /*0x726d99*/
    if ( *(int *)FootClass_Array.? < FootClass_Array.?[1] /*0x726dd0*/
      || (BYTE1(FootClass_Array.?[2]) || !FootClass_Array.?[1])
      && *(int *)&FootClass_Array.? > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(FootClass_Array.? + 8))(
           &FootClass_Array.?,
           FootClass_Array.?[1] + *(_DWORD *)&FootClass_Array.?,
           0) )
    {
      v5 = (*(_DWORD *)FootClass_Array.?)++; /*0x726ddd*/
      *(_DWORD *)(FootClass_Array.?[0] + 4 * v5) = this; /*0x726dec*/
    }
    return &this->AbstractClass; /*0x726df1*/
}
// link stub (no binary body yet)
int gamemd::MapClass::GetCellIndex(gamemd::Vector2D<short> const& a0) { return {}; }
// truth-filled 0x410800 (G42.52 truth-emitting generator)
bool gamemd::AbstractTypeClass::LoadFromINI(gamemd::CCINIClass* a0)
{
    char *v3; // ebx
    int v4; // eax
    char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
    char Destination[48]; // [esp+20h] [ebp-34h] BYREF
    char v8; // [esp+50h] [ebp-4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
    v3 = (char *)(this + 9); /*0x410812*/
    *((_BYTE *)this + 36) = 0; /*0x410817*/
    *((_BYTE *)this + 61) = 0; /*0x41081a*/
    *((_BYTE *)this + 100) = 0; /*0x41081e*/
    *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
    *(this + 1) = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
    *(this + 2) = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
    *(this + 3) = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
    if ( Source ) /*0x41083e*/
    {
      strncpy(Destination, Source, 0x18u); /*0x410895*/
      Destination[24] = 0; /*0x4108a3*/
      if ( Destination == v3 ) /*0x4108a8*/
        goto LABEL_9; /*0x4108a8*/
      goto LABEL_8; /*0x4108a8*/
    }
    sprintf(Buffer, "%08X", this); /*0x41084b*/
    if ( Buffer ) /*0x410859*/
    {
      strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
      Destination[24] = 0; /*0x410875*/
    }
    else
    {
      Destination[0] = 0; /*0x41085b*/
    }
    if ( Destination != v3 ) /*0x410880*/
    {
  LABEL_8:
      qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
      *((_BYTE *)this + 60) = Destination[24]; /*0x4108b7*/
    }
  LABEL_9:
    if ( this == (int *)-36 ) /*0x4108ba*/
    {
      Destination[0] = 0; /*0x4108bc*/
    }
    else
    {
      strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
      v8 = 0; /*0x4108d2*/
    }
    if ( Destination != (char *)(this + 25) ) /*0x4108e0*/
    {
      qmemcpy(this + 25, Destination, 0x30u); /*0x4108eb*/
      *((_BYTE *)this + 148) = v8; /*0x4108ed*/
    }
    *(this + 24) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
    if ( dword_A8E978 < dword_A8E970 /*0x410929*/
      || (byte_A8E975 || !dword_A8E970)
      && dword_A8E97C > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))(
           &dword_A8E968,
           dword_A8E970 + dword_A8E97C,
           0) )
    {
      v4 = dword_A8E978++; /*0x410936*/
      *((_DWORD *)dword_A8E96C + v4) = this; /*0x410945*/
    }
    return (int)this; /*0x410948*/
}
// truth-filled 0x410800 (G42.52 truth-emitting generator)
bool gamemd::AbstractTypeClass::SaveToINI(gamemd::CCINIClass* a0)
{
    char *v3; // ebx
    int v4; // eax
    char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
    char Destination[48]; // [esp+20h] [ebp-34h] BYREF
    char v8; // [esp+50h] [ebp-4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
    v3 = (char *)(this + 9); /*0x410812*/
    *((_BYTE *)this + 36) = 0; /*0x410817*/
    *((_BYTE *)this + 61) = 0; /*0x41081a*/
    *((_BYTE *)this + 100) = 0; /*0x41081e*/
    *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
    *(this + 1) = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
    *(this + 2) = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
    *(this + 3) = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
    if ( Source ) /*0x41083e*/
    {
      strncpy(Destination, Source, 0x18u); /*0x410895*/
      Destination[24] = 0; /*0x4108a3*/
      if ( Destination == v3 ) /*0x4108a8*/
        goto LABEL_9; /*0x4108a8*/
      goto LABEL_8; /*0x4108a8*/
    }
    sprintf(Buffer, "%08X", this); /*0x41084b*/
    if ( Buffer ) /*0x410859*/
    {
      strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
      Destination[24] = 0; /*0x410875*/
    }
    else
    {
      Destination[0] = 0; /*0x41085b*/
    }
    if ( Destination != v3 ) /*0x410880*/
    {
  LABEL_8:
      qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
      *((_BYTE *)this + 60) = Destination[24]; /*0x4108b7*/
    }
  LABEL_9:
    if ( this == (int *)-36 ) /*0x4108ba*/
    {
      Destination[0] = 0; /*0x4108bc*/
    }
    else
    {
      strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
      v8 = 0; /*0x4108d2*/
    }
    if ( Destination != (char *)(this + 25) ) /*0x4108e0*/
    {
      qmemcpy(this + 25, Destination, 0x30u); /*0x4108eb*/
      *((_BYTE *)this + 148) = v8; /*0x4108ed*/
    }
    *(this + 24) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
    if ( dword_A8E978 < dword_A8E970 /*0x410929*/
      || (byte_A8E975 || !dword_A8E970)
      && dword_A8E97C > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))(
           &dword_A8E968,
           dword_A8E970 + dword_A8E97C,
           0) )
    {
      v4 = dword_A8E978++; /*0x410936*/
      *((_DWORD *)dword_A8E96C + v4) = this; /*0x410945*/
    }
    return (int)this; /*0x410948*/
}
// truth-filled 0x4BA5A0 (G42.52 truth-emitting generator)
bool gamemd::DSurface::FillRectEx(gamemd::RectangleStruct const& a0, gamemd::RectangleStruct const& a1, unsigned int a2)
{
    _DWORD *v6; // ebp
    void *v7; // edi
    int v8; // eax

    v6 = this + 28; /*0x4ba5b0*/
    *((_DWORD *)this + 1) = a2; /*0x4ba5b5*/
    *((_DWORD *)this + 2) = a3; /*0x4ba5b8*/
    *((_DWORD *)this + 3) = 0; /*0x4ba5bb*/
    *((_DWORD *)this + 4) = 0; /*0x4ba5be*/
    *((_DWORD *)this + 5) = 0; /*0x4ba5c1*/
    *(this + 24) = 0; /*0x4ba5c4*/
    *(this + 25) = 0; /*0x4ba5c7*/
    *((_DWORD *)this + 7) = 0; /*0x4ba5ca*/
    *((_DWORD *)this + 8) = 0; /*0x4ba5cd*/
    *(_DWORD *)this = &DSurface_Vtable; /*0x4ba5d0*/
    v7 = __2_YAPAXI_Z(0x6Cu); /*0x4ba5db*/
    *((_DWORD *)this + 8) = v7; /*0x4ba5e2*/
    if ( v7 ) /*0x4ba5e5*/
    {
      memset(v7, 0, 0x6Cu); /*0x4ba5f2*/
      **((_DWORD **)this + 8) = 108; /*0x4ba5f7*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 4) = 7; /*0x4ba604*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 12) = a2; /*0x4ba60e*/
      *(_DWORD *)(*((_DWORD *)this + 8) + 8) = a3; /*0x4ba618*/
      if ( a4 == 1 ) /*0x4ba621*/
        *(_DWORD *)(*((_DWORD *)this + 8) + 104) = 2048; /*0x4ba626*/
      if ( g_DDraw_Force3D && a5 ) /*0x4ba639*/
        *(_DWORD *)(*((_DWORD *)this + 8) + 104) = 8256; /*0x4ba63e*/
      g_lpDirectDraw7->lpVtbl->CreateSurface( /*0x4ba653*/
        g_lpDirectDraw7,
        (LPDDSURFACEDESC)*((_DWORD *)this + 8),
        (LPDIRECTDRAWSURFACE *)(this + 28),
        0);
      if ( *v6 ) /*0x4ba656*/
      {
        memset(*((void **)this + 8), 0, 0x6Cu); /*0x4ba665*/
        **((_DWORD **)this + 8) = 108; /*0x4ba66a*/
        (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v6 + 88))(*v6, *((_DWORD *)this + 8)); /*0x4ba67a*/
        v8 = *((_DWORD *)this + 8); /*0x4ba67d*/
        *((_DWORD *)this + 4) = (unsigned int)(*(_DWORD *)(v8 + 84) + 7) >> 3; /*0x4ba689*/
        *(this + 25) = (*(_DWORD *)(v8 + 104) & 0x4000) != 0; /*0x4ba695*/
      }
    }
    return this; /*0x4ba69a*/
}
// link stub (no binary body yet)
bool gamemd::DisplayClass::ConvertAction(gamemd::Vector2D<short> const& a0, bool a1, ra2::game::ObjectClass* a2, gamemd::Action a3, unsigned int a4) { return {}; }
// truth-filled 0x7C8524 (G42.52 truth-emitting generator)
bool gamemd::FileClass::SetFileTime(unsigned int a0)
{
    return __imp_SetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
// link stub (no binary body yet)
bool gamemd::MapClass::DraggingInProgress() { return {}; }
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
bool gamemd::RawFileClass::CreateFile()
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
bool gamemd::RawFileClass::DeleteFile()
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
bool gamemd::RawFileClass::Exists(bool a0)
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
bool gamemd::RawFileClass::HasHandle()
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
bool gamemd::RawFileClass::Open(gamemd::FileAccessMode a0)
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
bool gamemd::RawFileClass::OpenEx(const char* a0, gamemd::FileAccessMode a1)
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x4BAEC0 (G42.52 truth-emitting generator)
bool gamemd::XSurface::CanLock(unsigned int a0, unsigned int a1)
{
    int result; // eax
    int v5; // eax
    _DWORD v6[27]; // [esp+4h] [ebp-6Ch] BYREF

    result = (int)this->DSurface_field_0xC; /*0x4baec6*/
    if ( !result ) /*0x4baecb*/
    {
      memset(v6, 0, sizeof(v6)); /*0x4baed9*/
      v5 = this->DSurface_field_0x1C[0]; /*0x4baedb*/
      v6[0] = 108; /*0x4baee6*/
      result = (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v5 + 100))(v5, 0, v6, 0, 0); /*0x4baef4*/
      if ( result ) /*0x4baefa*/
      {
        LOBYTE(result) = 0; /*0x4baefc*/
        return result; /*0x4baf02*/
      }
      result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)this->DSurface_field_0x1C[0] + 128))( /*0x4baf10*/
                 this->DSurface_field_0x1C[0],
                 v6[9]);
    }
    LOBYTE(result) = 1; /*0x4baf16*/
    return result; /*0x4baefe*/
}
// truth-filled 0x4BAF20 (G42.52 truth-emitting generator)
bool gamemd::XSurface::CheckBltStatus()
{
    return (*(int (__stdcall **)(int, int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 52))( /*0x4baf30*/
             this->DSurface_field_0x1C[0],
             1) == 0;
}
// truth-filled 0x4C0750 (G42.52 truth-emitting generator)
bool gamemd::XSurface::DrawDashedLineStipple(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned short a2, unsigned const char*const a3, int a4, bool a5)
{
    int v7; // ebp
    int v8; // edi
    int v9; // ebx
    int v10; // esi
    int v12; // ecx
    int v13; // eax
    int v14; // eax
    signed int v15; // ecx
    signed int v16; // eax
    int v17; // ebx
    _WORD *v18; // esi
    _DWORD *v19; // edx
    int v20; // ecx
    _WORD *v21; // eax
    int v22; // edi
    int v23; // ecx
    int v24; // ebx
    int v25; // eax
    _DWORD *v26; // edx
    int v27; // ecx
    _WORD *v28; // edi
    _WORD *v29; // eax
    int v30; // ecx
    int v31; // ebx
    int v32; // esi
    int v33; // eax
    int v34; // eax
    int v35; // edi
    int v36; // esi
    _DWORD *v37; // ecx
    int v38; // edx
    _WORD *v39; // eax
    int v40; // edx
    int v41; // esi
    _DWORD *v42; // edx
    int v43; // ebx
    _WORD *v44; // ecx
    int *v45; // eax
    int v46; // ebx
    int v47; // ebx
    _WORD *v48; // esi
    _DWORD *v49; // edx
    int v50; // ecx
    _WORD *v51; // eax
    int v52; // edi
    int v53; // ecx
    int v54; // ebx
    int v55; // eax
    _DWORD *v56; // edx
    int v57; // ecx
    _WORD *v58; // edi
    _WORD *v59; // eax
    int v60; // ecx
    int v61; // ebx
    int v62; // esi
    int v63; // eax
    int v64; // eax
    int v65; // edi
    int v66; // esi
    _DWORD *v67; // ecx
    int v68; // edx
    _WORD *v69; // eax
    int v70; // edx
    int v71; // esi
    _DWORD *v72; // edx
    _WORD *v73; // ecx
    int *v74; // eax
    int v75; // ebx
    int v76; // [esp+10h] [ebp-20h]
    int v77; // [esp+14h] [ebp-1Ch]
    int v79; // [esp+1Ch] [ebp-14h]
    int v80; // [esp+1Ch] [ebp-14h]
    int v81; // [esp+20h] [ebp-10h]
    int v82; // [esp+20h] [ebp-10h]
    int v83; // [esp+24h] [ebp-Ch]
    int v84; // [esp+24h] [ebp-Ch]
    int v85; // [esp+28h] [ebp-8h]
    int v86; // [esp+28h] [ebp-8h]
    int v87; // [esp+34h] [ebp+4h]
    int *v88; // [esp+38h] [ebp+8h]
    int v89; // [esp+48h] [ebp+18h]
    int v90; // [esp+48h] [ebp+18h]
    int v91; // [esp+48h] [ebp+18h]
    int v92; // [esp+48h] [ebp+18h]
    int v93; // [esp+48h] [ebp+18h]
    int v94; // [esp+48h] [ebp+18h]

    v7 = *a2; /*0x4c075a*/
    v8 = a2[1]; /*0x4c075d*/
    v76 = 1; /*0x4c0768*/
    v9 = *a3; /*0x4c0770*/
    v10 = a3[1]; /*0x4c0772*/
    if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c077d*/
      return 0; /*0x4c0788*/
    if ( v7 > v9 ) /*0x4c078d*/
    {
      v12 = v7; /*0x4c078f*/
      v13 = v8; /*0x4c0791*/
      v7 = v9; /*0x4c0793*/
      v8 = v10; /*0x4c0795*/
      v10 = v13; /*0x4c079b*/
      v14 = v9; /*0x4c079d*/
      v9 = v12; /*0x4c079f*/
      v15 = abs32(v14 - v12); /*0x4c07aa*/
      v16 = abs32(v8 - v10) + 1; /*0x4c07b5*/
      if ( v15 < v16 ) /*0x4c07b8*/
        v15 = v16; /*0x4c07ba*/
      a6 = (v15 + a6) % 16; /*0x4c07cf*/
      v76 = -1; /*0x4c07d3*/
    }
    v77 = StreamClass::ReadAndSeek( /*0x4c07f3*/
            *(int **)&stru_87E790.__pad_D8[60],
            v7,
            v8 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
    v87 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0801*/
    if ( v8 > v10 ) /*0x4c0805*/
      v87 = -*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c080b*/
    v88 = (int *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v7, v8); /*0x4c081c*/
    if ( v88 )
    {
      if ( a7 )
      {
        if ( v8 == v10 )
        {
          v17 = v9 - v7; /*0x4c083a*/
          if ( v17 >= 0 )
          {
            v18 = v88; /*0x4c0842*/
            v19 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0846*/
            v20 = a6; /*0x4c084c*/
            v21 = (_WORD *)v77; /*0x4c0850*/
            v22 = v17 + 1; /*0x4c0854*/
            do
            {
              v23 = v20 + (v20 < 0 ? 0x10 : 0);
              if ( v23 >= 16 ) /*0x4c0865*/
                v23 -= 16; /*0x4c0867*/
              if ( *(_BYTE *)(v23 + a5) && !*v21 ) /*0x4c0874*/
              {
                *v18 = a4; /*0x4c087f*/
                v19 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0882*/
              }
              if ( v87 <= 0 ) /*0x4c088e*/
              {
                if ( (unsigned int)++v21 < v19[6] ) /*0x4c08a7*/
                  v21 = (_WORD *)((char *)v21 + v19[8]); /*0x4c08a9*/
              }
              else if ( (unsigned int)++v21 >= v19[7] ) /*0x4c0898*/
              {
                v21 = (_WORD *)((char *)v21 - v19[8]); /*0x4c089a*/
              }
              ++v18; /*0x4c08ac*/
              v20 = v76 + v23; /*0x4c08af*/
              --v22; /*0x4c08b1*/
            }
            while ( v22 );
            a6 = v20; /*0x4c08b4*/
          }
          goto LABEL_155; /*0x4c08b8*/
        }
        if ( v7 == v9 )
        {
          if ( v8 <= v10 ) /*0x4c08cb*/
            v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08dd*/
          else
            v24 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c08d4*/
          v25 = abs32(v10 - v8); /*0x4c08e6*/
          if ( v25 >= 0 )
          {
            v26 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c08ee*/
            v27 = a6; /*0x4c08f4*/
            v28 = v88; /*0x4c08fc*/
            v89 = v25 + 1; /*0x4c0901*/
            v29 = (_WORD *)v77; /*0x4c0905*/
            do
            {
              v30 = v27 + (v27 < 0 ? 0x10 : 0);
              if ( v30 >= 16 ) /*0x4c0913*/
                v30 -= 16; /*0x4c0915*/
              if ( *(_BYTE *)(v30 + a5) && !*v29 ) /*0x4c0922*/
              {
                *v28 = a4; /*0x4c092d*/
                v26 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0930*/
              }
              v28 = (_WORD *)((char *)v28 + v24); /*0x4c0936*/
              v29 += v87; /*0x4c0938*/
              if ( v87 <= 0 ) /*0x4c093d*/
              {
                if ( (unsigned int)v29 < v26[6] ) /*0x4c094c*/
                  v29 = (_WORD *)((char *)v29 + v26[8]); /*0x4c094e*/
              }
              else if ( (unsigned int)v29 >= v26[7] ) /*0x4c0942*/
              {
                v29 = (_WORD *)((char *)v29 - v26[8]); /*0x4c0944*/
              }
              v27 = v76 + v30; /*0x4c0955*/
              --v89; /*0x4c095c*/
            }
            while ( v89 );
            a6 = v27; /*0x4c0962*/
          }
          goto LABEL_155; /*0x4c0966*/
        }
        v31 = v9 - v7; /*0x4c096f*/
        v32 = v10 - v8; /*0x4c0971*/
        v33 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0975*/
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
          v90 = 0; /*0x4c09a9*/
          if ( v31 > 0 )
          {
            v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c09b5*/
            v38 = a6; /*0x4c09bb*/
            v39 = (_WORD *)v77; /*0x4c09bf*/
            do
            {
              v40 = v38 + (v38 < 0 ? 0x10 : 0);
              if ( v40 >= 16 ) /*0x4c09cd*/
                v40 -= 16; /*0x4c09cf*/
              if ( *(_BYTE *)(v40 + a5) && !*v39 ) /*0x4c09dc*/
              {
                *((_WORD *)v88 + v35) = a4; /*0x4c09eb*/
                v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c09f0*/
              }
              if ( v36 > 0 ) /*0x4c09f8*/
              {
                v88 = (int *)((char *)v88 + v79); /*0x4c0a08*/
                v39 += v87; /*0x4c0a0c*/
                if ( (unsigned int)v39 >= v37[7] ) /*0x4c0a14*/
                  v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a16*/
                v36 -= 2 * v31; /*0x4c0a1c*/
                v35 = v90; /*0x4c0a1e*/
              }
              v36 += v81; /*0x4c0a26*/
              if ( v87 <= 0 ) /*0x4c0a2e*/
              {
                if ( (unsigned int)++v39 < v37[6] ) /*0x4c0a47*/
                  v39 = (_WORD *)((char *)v39 + v37[8]); /*0x4c0a49*/
              }
              else if ( (unsigned int)++v39 >= v37[7] ) /*0x4c0a38*/
              {
                v39 = (_WORD *)((char *)v39 - v37[8]); /*0x4c0a3a*/
              }
              ++v35; /*0x4c0a50*/
              v38 = v76 + v40; /*0x4c0a51*/
              v90 = v35; /*0x4c0a55*/
            }
            while ( v35 < v31 );
            a6 = v38; /*0x4c0a5f*/
          }
          goto LABEL_155; /*0x4c0a63*/
        }
        v41 = 2 * v31 - v34; /*0x4c0a68*/
        if ( v34 > 0 )
        {
          v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0a72*/
          v43 = a6; /*0x4c0a78*/
          v44 = (_WORD *)v77; /*0x4c0a7c*/
          v83 = v34; /*0x4c0a84*/
          v45 = v88; /*0x4c0a88*/
          v91 = 0; /*0x4c0a8c*/
          do
          {
            v46 = v43 + (v43 < 0 ? 0x10 : 0);
            if ( v46 >= 16 ) /*0x4c0a9e*/
              v46 -= 16; /*0x4c0aa0*/
            if ( *(_BYTE *)(v46 + a5) && !*v44 ) /*0x4c0aad*/
            {
              *(_WORD *)((char *)v45 + v91) = a4; /*0x4c0abc*/
              v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ac0*/
            }
            if ( v41 > 0 ) /*0x4c0ac8*/
            {
              ++v44; /*0x4c0ace*/
              v91 += 2; /*0x4c0ad4*/
              if ( (unsigned int)v44 >= v42[7] ) /*0x4c0add*/
                v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0adf*/
              v41 -= v81; /*0x4c0ae2*/
            }
            v44 += v87; /*0x4c0aea*/
            v41 += v85; /*0x4c0aed*/
            v45 = (int *)((char *)v45 + v79); /*0x4c0af3*/
            if ( v87 <= 0 ) /*0x4c0af7*/
            {
              if ( (unsigned int)v44 < v42[6] ) /*0x4c0b06*/
                v44 = (_WORD *)((char *)v44 + v42[8]); /*0x4c0b08*/
            }
            else if ( (unsigned int)v44 >= v42[7] ) /*0x4c0afc*/
            {
              v44 = (_WORD *)((char *)v44 - v42[8]); /*0x4c0afe*/
            }
            v43 = v76 + v46; /*0x4c0b0f*/
            --v83; /*0x4c0b16*/
          }
          while ( v83 );
  LABEL_154:
          a6 = v43; /*0x4c0e13*/
        }
      }
      else
      {
        if ( v8 == v10 )
        {
          v47 = v9 - v7; /*0x4c0b2d*/
          if ( v47 >= 0 )
          {
            v48 = v88; /*0x4c0b35*/
            v49 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0b39*/
            v50 = a6; /*0x4c0b3f*/
            v51 = (_WORD *)v77; /*0x4c0b43*/
            v52 = v47 + 1; /*0x4c0b47*/
            do
            {
              v53 = v50 + (v50 < 0 ? 0x10 : 0);
              if ( v53 >= 16 ) /*0x4c0b58*/
                v53 -= 16; /*0x4c0b5a*/
              if ( *(_BYTE *)(v53 + a5) && *v51 ) /*0x4c0b67*/
              {
                *v48 = a4; /*0x4c0b72*/
                v49 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0b75*/
              }
              if ( v87 <= 0 ) /*0x4c0b81*/
              {
                if ( (unsigned int)++v51 < v49[6] ) /*0x4c0b9a*/
                  v51 = (_WORD *)((char *)v51 + v49[8]); /*0x4c0b9c*/
              }
              else if ( (unsigned int)++v51 >= v49[7] ) /*0x4c0b8b*/
              {
                v51 = (_WORD *)((char *)v51 - v49[8]); /*0x4c0b8d*/
              }
              ++v48; /*0x4c0b9f*/
              v50 = v76 + v53; /*0x4c0ba2*/
              --v52; /*0x4c0ba4*/
            }
            while ( v52 );
            a6 = v50; /*0x4c0ba7*/
          }
          goto LABEL_155; /*0x4c0bab*/
        }
        if ( v7 == v9 )
        {
          if ( v8 <= v10 ) /*0x4c0bbe*/
            v54 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bd0*/
          else
            v54 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0bc7*/
          v55 = abs32(v10 - v8); /*0x4c0bd9*/
          if ( v55 >= 0 )
          {
            v56 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0be1*/
            v57 = a6; /*0x4c0be7*/
            v58 = v88; /*0x4c0bef*/
            v92 = v55 + 1; /*0x4c0bf4*/
            v59 = (_WORD *)v77; /*0x4c0bf8*/
            do
            {
              v60 = v57 + (v57 < 0 ? 0x10 : 0);
              if ( v60 >= 16 ) /*0x4c0c06*/
                v60 -= 16; /*0x4c0c08*/
              if ( *(_BYTE *)(v60 + a5) && *v59 ) /*0x4c0c15*/
              {
                *v58 = a4; /*0x4c0c20*/
                v56 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0c23*/
              }
              v58 = (_WORD *)((char *)v58 + v54); /*0x4c0c29*/
              v59 += v87; /*0x4c0c2b*/
              if ( v87 <= 0 ) /*0x4c0c30*/
              {
                if ( (unsigned int)v59 < v56[6] ) /*0x4c0c3f*/
                  v59 = (_WORD *)((char *)v59 + v56[8]); /*0x4c0c41*/
              }
              else if ( (unsigned int)v59 >= v56[7] ) /*0x4c0c35*/
              {
                v59 = (_WORD *)((char *)v59 - v56[8]); /*0x4c0c37*/
              }
              v57 = v76 + v60; /*0x4c0c48*/
              --v92; /*0x4c0c4f*/
            }
            while ( v92 );
            a6 = v57; /*0x4c0c55*/
          }
          goto LABEL_155; /*0x4c0c59*/
        }
        v61 = v9 - v7; /*0x4c0c62*/
        v62 = v10 - v8; /*0x4c0c64*/
        v63 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0c68*/
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
          v93 = 0; /*0x4c0c9c*/
          if ( v61 > 0 )
          {
            v67 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ca8*/
            v68 = a6; /*0x4c0cae*/
            v69 = (_WORD *)v77; /*0x4c0cb2*/
            do
            {
              v70 = v68 + (v68 < 0 ? 0x10 : 0);
              if ( v70 >= 16 ) /*0x4c0cc0*/
                v70 -= 16; /*0x4c0cc2*/
              if ( *(_BYTE *)(v70 + a5) && *v69 ) /*0x4c0ccf*/
              {
                *((_WORD *)v88 + v65) = a4; /*0x4c0cde*/
                v67 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0ce3*/
              }
              if ( v66 > 0 ) /*0x4c0ceb*/
              {
                v88 = (int *)((char *)v88 + v80); /*0x4c0cfb*/
                v69 += v87; /*0x4c0cff*/
                if ( (unsigned int)v69 >= v67[7] ) /*0x4c0d07*/
                  v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d09*/
                v66 -= 2 * v61; /*0x4c0d0f*/
                v65 = v93; /*0x4c0d11*/
              }
              v66 += v84; /*0x4c0d19*/
              if ( v87 <= 0 ) /*0x4c0d21*/
              {
                if ( (unsigned int)++v69 < v67[6] ) /*0x4c0d3a*/
                  v69 = (_WORD *)((char *)v69 + v67[8]); /*0x4c0d3c*/
              }
              else if ( (unsigned int)++v69 >= v67[7] ) /*0x4c0d2b*/
              {
                v69 = (_WORD *)((char *)v69 - v67[8]); /*0x4c0d2d*/
              }
              ++v65; /*0x4c0d43*/
              v68 = v76 + v70; /*0x4c0d44*/
              v93 = v65; /*0x4c0d48*/
            }
            while ( v65 < v61 );
            a6 = v68; /*0x4c0d52*/
          }
          goto LABEL_155; /*0x4c0d56*/
        }
        v71 = 2 * v61 - v64; /*0x4c0d5b*/
        if ( v64 > 0 )
        {
          v72 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0d65*/
          v43 = a6; /*0x4c0d6b*/
          v73 = (_WORD *)v77; /*0x4c0d6f*/
          v82 = v64; /*0x4c0d77*/
          v74 = v88; /*0x4c0d7b*/
          v94 = 0; /*0x4c0d7f*/
          do
          {
            v75 = v43 + (v43 < 0 ? 0x10 : 0);
            if ( v75 >= 16 ) /*0x4c0d91*/
              v75 -= 16; /*0x4c0d93*/
            if ( *(_BYTE *)(v75 + a5) && *v73 ) /*0x4c0da0*/
            {
              *(_WORD *)((char *)v74 + v94) = a4; /*0x4c0daf*/
              v72 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0db3*/
            }
            if ( v71 > 0 ) /*0x4c0dbb*/
            {
              ++v73; /*0x4c0dc1*/
              v94 += 2; /*0x4c0dc7*/
              if ( (unsigned int)v73 >= v72[7] ) /*0x4c0dd0*/
                v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0dd2*/
              v71 -= v84; /*0x4c0dd5*/
            }
            v73 += v87; /*0x4c0ddd*/
            v71 += v86; /*0x4c0de0*/
            v74 = (int *)((char *)v74 + v80); /*0x4c0de6*/
            if ( v87 <= 0 ) /*0x4c0dea*/
            {
              if ( (unsigned int)v73 < v72[6] ) /*0x4c0df9*/
                v73 = (_WORD *)((char *)v73 + v72[8]); /*0x4c0dfb*/
            }
            else if ( (unsigned int)v73 >= v72[7] ) /*0x4c0def*/
            {
              v73 = (_WORD *)((char *)v73 - v72[8]); /*0x4c0df1*/
            }
            v43 = v76 + v75; /*0x4c0e02*/
            --v82; /*0x4c0e09*/
          }
          while ( v82 );
          goto LABEL_154; /*0x4c0e0d*/
        }
      }
  LABEL_155:
      (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c0e17*/
    }
    return a6; /*0x4c077f*/
}
// truth-filled 0x4BF750 (G42.52 truth-emitting generator)
bool gamemd::XSurface::DrawGradientLine(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, int a2, int a3, float* a4, float* a5)
{
    DSurface *v8; // ebp
    int *v9; // eax
    int *v10; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // eax
    int v14; // ecx
    _WORD *v15; // ebx
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
    int v61; // [esp+1Ch] [ebp-3Ch]
    int v62; // [esp+20h] [ebp-38h] BYREF
    int v63; // [esp+24h] [ebp-34h]
    int v64; // [esp+28h] [ebp-30h] BYREF
    int v65; // [esp+2Ch] [ebp-2Ch]
    int v66; // [esp+30h] [ebp-28h]
    int v67; // [esp+34h] [ebp-24h]
    _BYTE v68[16]; // [esp+38h] [ebp-20h] BYREF
    int v69[4]; // [esp+48h] [ebp-10h] BYREF
    _WORD *v70; // [esp+5Ch] [ebp+4h]
    int v71; // [esp+5Ch] [ebp+4h]
    _DWORD *v72; // [esp+60h] [ebp+8h]
    int v73; // [esp+60h] [ebp+8h]
    _DWORD *v74; // [esp+64h] [ebp+Ch]
    int v75; // [esp+64h] [ebp+Ch]

    v8 = this; /*0x4bf755*/
    v9 = (int *)(*((int (__thiscall **)(DSurface *, _BYTE *))this->DSurface_field_0x0 + 30))(this, v68); /*0x4bf766*/
    v10 = ClipRectIntersection(v69, (int *)a2, v9, 0, 0); /*0x4bf776*/
    v64 = *v10; /*0x4bf77d*/
    v65 = v10[1]; /*0x4bf784*/
    v66 = v10[2]; /*0x4bf78b*/
    v67 = v10[3]; /*0x4bf796*/
    v11 = v65 + a3[1]; /*0x4bf7a1*/
    v60 = v64 + *a3; /*0x4bf7a3*/
    v61 = v11; /*0x4bf7a7*/
    v12 = v64 + *a4; /*0x4bf7b6*/
    v63 = v65 + a4[1]; /*0x4bf7b8*/
    v62 = v12; /*0x4bf7c9*/
    if ( (unsigned __int8)ClipLine(&v60, &v62, &v64) ) /*0x4bf7cd*/
    {
      v13 = v60; /*0x4bf7da*/
      if ( v60 > v62 ) /*0x4bf7e4*/
      {
        v14 = v61; /*0x4bf7e6*/
        v60 = v62; /*0x4bf7ea*/
        v62 = v13; /*0x4bf7f2*/
        v61 = v63; /*0x4bf7f6*/
        v63 = v14; /*0x4bf7fa*/
      }
      if ( (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 28))(v8) == 2 ) /*0x4bf809*/
      {
        v15 = (_WORD *)(*((int (__thiscall **)(DSurface *, int, int))v8->DSurface_field_0x0 + 23))(v8, v60, v61); /*0x4bf821*/
        v70 = v15; /*0x4bf825*/
        if ( v15 ) /*0x4bf829*/
        {
          if ( v61 == v63 ) /*0x4bf83a*/
          {
            v71 = 0; /*0x4bf84a*/
            if ( v62 - v60 >= 0 ) /*0x4bf852*/
            {
              v16 = a8; /*0x4bf858*/
              v17 = a7; /*0x4bf85c*/
              do /*0x4bf874*/
              {
                v18 = Color::Lerp2((Color *)&a7, a5, a6, *v16); /*0x4bf874*/
                LOWORD(a8) = *(_WORD *)v18; /*0x4bf87f*/
                v19 = v18[2] >> g_BitMask_Red; /*0x4bf895*/
                LOWORD(v18) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf8ab*/
                *v15 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bf8cd*/
                     | ((_DWORD)v18 << g_BitMask_Green)
                     | (v19 << g_BitShift_Blue);
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
                ++v15; /*0x4bf924*/
                ++v71; /*0x4bf938*/
              }
              while ( v71 <= v62 - v60 ); /*0x4bf874*/
            }
  LABEL_17:
            (*((void (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 24))(v8); /*0x4bf942*/
            return 1; /*0x4bf953*/
          }
          if ( v60 == v62 ) /*0x4bf960*/
          {
            if ( v61 <= v63 ) /*0x4bf968*/
              v24 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf97b*/
            else
              v24 = -(*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bf972*/
            v72 = (_DWORD *)v24; /*0x4bf982*/
            v25 = abs32(v63 - v61); /*0x4bf98f*/
            if ( v25 < 0 ) /*0x4bf991*/
              goto LABEL_17; /*0x4bf991*/
            v26 = a8; /*0x4bf997*/
            v27 = a7; /*0x4bf99b*/
            v74 = (_DWORD *)(v25 + 1); /*0x4bf9a4*/
            while ( 1 ) /*0x4bf9b8*/
            {
              v28 = Color::Lerp2((Color *)&a7, a5, a6, *v26); /*0x4bf9b8*/
              LOWORD(a8) = *(_WORD *)v28; /*0x4bf9c3*/
              v29 = v28[2] >> g_BitMask_Red; /*0x4bf9d9*/
              LOWORD(v28) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bf9ef*/
              *v70 = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfa15*/
                   | ((_DWORD)v28 << g_BitMask_Green)
                   | (v29 << g_BitShift_Blue);
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
              v33 = v74 == (_DWORD *)1; /*0x4bfa6c*/
              v70 = (_WORD *)((char *)v70 + (_DWORD)v72); /*0x4bfa7b*/
              v74 = (_DWORD *)((char *)v74 - 1); /*0x4bfa7f*/
              if ( v33 ) /*0x4bfa83*/
                goto LABEL_17; /*0x4bfa83*/
            }
          }
          v34 = v63 - v61; /*0x4bfaa1*/
          v35 = v62 - v60; /*0x4bfaa6*/
          v58 = v62 - v60; /*0x4bfaaa*/
          v36 = (*((int (__thiscall **)(DSurface *))v8->DSurface_field_0x0 + 29))(v8); /*0x4bfaae*/
          v73 = v36; /*0x4bfab3*/
          if ( v34 < 0 ) /*0x4bfab7*/
            v73 = -v36; /*0x4bfabb*/
          v57 = 2 * v35; /*0x4bfac7*/
          v37 = abs32(v34); /*0x4bfacb*/
          v75 = 2 * v37; /*0x4bfad2*/
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
            v40 = a8; /*0x4bfaea*/
            v41 = a7; /*0x4bfaee*/
            while ( 1 ) /*0x4bfb06*/
            {
              v42 = Color::Lerp2((Color *)&a7, a5, a6, *v40); /*0x4bfb06*/
              LOWORD(a8) = *(_WORD *)v42; /*0x4bfb11*/
              v43 = v42[2] >> g_BitMask_Red; /*0x4bfb27*/
              LOWORD(v42) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfb3d*/
              v70[v38] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfb63*/
                       | ((_DWORD)v42 << g_BitMask_Green)
                       | (v43 << g_BitShift_Blue);
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
                v70 = (_WORD *)((char *)v70 + v73); /*0x4bfbcb*/
              }
              v39 += v75; /*0x4bfbd7*/
              if ( ++v38 > v58 ) /*0x4bfbdc*/
              {
                (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bfbeb*/
                return 1; /*0x4bfbf7*/
              }
            }
          }
          v47 = 2 * v35 - v37; /*0x4bfbfa*/
          if ( v37 < 0 ) /*0x4bfbfe*/
            goto LABEL_17; /*0x4bfbfe*/
          v48 = a8; /*0x4bfc04*/
          v49 = a7; /*0x4bfc08*/
          v50 = 0; /*0x4bfc0c*/
          v59 = v37 + 1; /*0x4bfc0f*/
          while ( 1 ) /*0x4bfc27*/
          {
            v51 = Color::Lerp2((Color *)&a7, a5, a6, *v48); /*0x4bfc27*/
            LOWORD(a8) = *(_WORD *)v51; /*0x4bfc32*/
            v52 = v51[2] >> g_BitMask_Red; /*0x4bfc48*/
            LOWORD(v51) = (unsigned __int8)(BYTE1(a8) >> g_BitMask_Blue); /*0x4bfc5e*/
            v70[v50] = ((unsigned __int8)((unsigned __int8)a8 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x4bfc84*/
                     | ((_DWORD)v51 << g_BitMask_Green)
                     | (v52 << g_BitShift_Blue);
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
              ++v50; /*0x4bfce4*/
              v47 -= v75; /*0x4bfce7*/
            }
            v47 += v57; /*0x4bfcf1*/
            v33 = v59 == 1; /*0x4bfcf9*/
            v70 = (_WORD *)((char *)v70 + v73); /*0x4bfcfa*/
            --v59; /*0x4bfcfe*/
            if ( v33 ) /*0x4bfd02*/
              goto LABEL_61; /*0x4bfd02*/
          }
        }
      }
    }
    return 0; /*0x4bf94b*/
}
// link stub (no binary body yet)
bool gamemd::XSurface::DrawLineFaded(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned const char* a2, int a3, int a4, bool a5, float a6, float a7, bool a8) { return {}; }
// truth-filled 0x4BBCA0 (G42.52 truth-emitting generator)
bool gamemd::XSurface::DrawLineModulated(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, int a2, int a3, int a4, bool a5)
{
    double v9; // st7
    int (__stdcall **DSurface_field_0x0)(_DWORD *); // eax
    int *v11; // eax
    int *v12; // eax
    int v13; // esi
    int v14; // edi
    int v15; // ecx
    int v16; // eax
    int v17; // ecx
    int v18; // esi
    int v19; // edx
    int v20; // ebp
    int v21; // ebx
    int v22; // edi
    int v23; // ebx
    int v24; // ebp
    int v25; // eax
    int v26; // eax
    int v27; // eax
    unsigned int v28; // eax
    int v29; // eax
    int v30; // eax
    int v31; // eax
    unsigned int v32; // eax
    int v33; // ebx
    int v34; // esi
    int Stream_field_04; // ebp
    int v36; // ecx
    int v37; // ebp
    int v38; // esi
    int v39; // edi
    int v40; // ebp
    int v41; // eax
    int v42; // ecx
    int v43; // esi
    int v44; // eax
    int v45; // edx
    int v46; // ebp
    Stream *v47; // esi
    unsigned __int16 v48; // ax
    int v49; // edx
    int v50; // eax
    int v51; // esi
    int v52; // edi
    _WORD *v53; // eax
    int v54; // edx
    _WORD *v55; // ecx
    int v56; // ecx
    _WORD *v57; // eax
    bool v58; // zf
    Stream *v60; // edx
    unsigned __int16 v61; // ax
    int v62; // edx
    int v63; // eax
    int v64; // esi
    int v65; // esi
    _WORD *v66; // eax
    _WORD *v67; // ecx
    int v68; // ecx
    _WORD *v69; // eax
    Stream *v70; // esi
    unsigned __int16 v71; // ax
    int v72; // edx
    int v73; // eax
    int v74; // esi
    int v75; // edx
    _WORD *v76; // eax
    int v77; // ecx
    int v78; // edi
    _WORD *v79; // eax
    _WORD *v80; // ecx
    double v81; // [esp+4h] [ebp-80h]
    double v82; // [esp+4h] [ebp-80h]
    int v83; // [esp+1Ch] [ebp-68h]
    int v84; // [esp+20h] [ebp-64h]
    int v85; // [esp+24h] [ebp-60h]
    int v86; // [esp+28h] [ebp-5Ch]
    int v87; // [esp+2Ch] [ebp-58h]
    int v88; // [esp+30h] [ebp-54h]
    int v89; // [esp+34h] [ebp-50h]
    int v90; // [esp+34h] [ebp-50h]
    int v91; // [esp+34h] [ebp-50h]
    int v92[2]; // [esp+38h] [ebp-4Ch] BYREF
    int v93; // [esp+40h] [ebp-44h] BYREF
    int v94; // [esp+44h] [ebp-40h]
    _DWORD v95[5]; // [esp+50h] [ebp-34h] BYREF
    int v96; // [esp+64h] [ebp-20h] BYREF
    int v97; // [esp+68h] [ebp-1Ch]
    int v98[2]; // [esp+6Ch] [ebp-18h] BYREF
    int v99; // [esp+74h] [ebp-10h] BYREF
    int v100; // [esp+78h] [ebp-Ch]
    int v101; // [esp+7Ch] [ebp-8h]
    int v102; // [esp+80h] [ebp-4h]
    int v103; // [esp+88h] [ebp+4h]
    int v104; // [esp+88h] [ebp+4h]
    int pad_0; // [esp+8Ch] [ebp+8h]
    _DWORD *v106; // [esp+90h] [ebp+Ch]
    _DWORD *v107; // [esp+90h] [ebp+Ch]
    int v108; // [esp+90h] [ebp+Ch]
    _DWORD *v109; // [esp+90h] [ebp+Ch]
    int v110; // [esp+98h] [ebp+14h]
    int v111; // [esp+98h] [ebp+14h]
    int v112; // [esp+9Ch] [ebp+18h]
    int v113; // [esp+9Ch] [ebp+18h]
    int v114; // [esp+9Ch] [ebp+18h]
    int v115; // [esp+9Ch] [ebp+18h]
    int v116; // [esp+9Ch] [ebp+18h]
    _WORD *SamplePosition; // [esp+9Ch] [ebp+18h]

    DSurface_field_0x0 = (int (__stdcall **)(_DWORD *))this->DSurface_field_0x0; /*0x4bbca3*/
    v95[0] = this; /*0x4bbcae*/
    v11 = (int *)DSurface_field_0x0[30](&v95[1]); /*0x4bbcb2*/
    v12 = ClipRectIntersection(&v93, (int *)a3, v11, 0, 0); /*0x4bbcc2*/
    v13 = *v12; /*0x4bbcc9*/
    v99 = *v12; /*0x4bbccb*/
    v14 = v12[1]; /*0x4bbccf*/
    v100 = v14; /*0x4bbcd2*/
    v101 = v12[2]; /*0x4bbcd9*/
    v15 = v12[3]; /*0x4bbcdd*/
    v102 = v15; /*0x4bbce2*/
    if ( v101 || v15 ) /*0x4bbcea*/
    {
      v16 = v13 + *a4; /*0x4bbd08*/
      v17 = v13 + *a5; /*0x4bbd0a*/
      v18 = a8; /*0x4bbd0c*/
      v19 = v14 + a4[1]; /*0x4bbd13*/
      v20 = v16; /*0x4bbd15*/
      v21 = v14 + a5[1]; /*0x4bbd17*/
      v22 = a7; /*0x4bbd19*/
      v96 = v16; /*0x4bbd22*/
      v97 = v19; /*0x4bbd26*/
      v98[0] = v17; /*0x4bbd2a*/
      v98[1] = v21; /*0x4bbd2e*/
      if ( v16 > v17 ) /*0x4bbd32*/
      {
        v20 = v17; /*0x4bbd34*/
        v22 = a8; /*0x4bbd36*/
        v18 = a7; /*0x4bbd38*/
        v96 = v17; /*0x4bbd3f*/
        v97 = v21; /*0x4bbd43*/
        v98[0] = v16; /*0x4bbd47*/
        v98[1] = v19; /*0x4bbd4b*/
      }
      v95[1] = v98[0]; /*0x4bbd5b*/
      v23 = v20; /*0x4bbd60*/
      v24 = v97; /*0x4bbd62*/
      v95[2] = v98[1]; /*0x4bbd6e*/
      if ( (unsigned __int8)ClipLine(&v96, v98, &v99) ) /*0x4bbd72*/
      {
        v106 = (_DWORD *)v18; /*0x4bbd8d*/
        v110 = v22; /*0x4bbd94*/
        if ( v98[0] != v95[1] || v98[1] != v95[2] ) /*0x4bbda1*/
        {
          v92[0] = v23 - v98[0]; /*0x4bbdb3*/
          v92[1] = v24 - v98[1]; /*0x4bbdb7*/
          v93 = v23 - v95[1]; /*0x4bbdc7*/
          v94 = v24 - v95[2]; /*0x4bbdcb*/
          Vector::TwoDMagnitudeMath(&v93); /*0x4bbdd3*/
          v103 = v25; /*0x4bbddc*/
          v9 = Vector::TwoDMagnitudeMath(v92); /*0x4bbde0*/
          v112 = v26; /*0x4bbde5*/
          __asm { fild [esp+78h+arg_14] } /*0x4bbdee*/
          v113 = v22 - v18; /*0x4bbdf7*/
          __asm /*0x4bbdfe*/
          {
            fidiv [esp+78h+arg_0]
            fild [esp+78h+arg_14]
            fmulp st(1), st
          }
          LOWORD(v27) = Math::RoundToInt(v9); /*0x4bbe0b*/
          v28 = abs32(v27); /*0x4bbe13*/
          if ( v22 >= v18 ) /*0x4bbe17*/
            v106 = (_DWORD *)(v22 - v28); /*0x4bbe28*/
          else
            v106 = (_DWORD *)(v22 + v28); /*0x4bbe1b*/
        }
        if ( v96 != v23 || v97 != v24 ) /*0x4bbe3d*/
        {
          v93 = v96 - v95[1]; /*0x4bbe52*/
          v94 = v97 - v95[2]; /*0x4bbe56*/
          __asm /*0x4bbe5a*/
          {
            fild dword ptr [esp+80h+var_4C.__pad_C]
            fild [esp+80h+var_4C.Vector_field_0x8]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+80h+var_84+4]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v81); /*0x4bbe73*/
          LOWORD(v29) = Math::RoundToInt(v9); /*0x4bbe78*/
          v114 = v29; /*0x4bbe81*/
          v93 = v23 - v95[1]; /*0x4bbe90*/
          v94 = v24 - v95[2]; /*0x4bbe94*/
          __asm /*0x4bbe98*/
          {
            fild dword ptr [esp+80h+var_4C.__pad_C]
            fild [esp+80h+var_4C.Vector_field_0x8]
            fild [esp+80h+arg_14]
            fstp qword ptr [esp+50h]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fstp [esp+80h+var_84+4]; double
            fstp st
            fstp st
          }
          Math::Sqrt(v82); /*0x4bbebc*/
          LOWORD(v30) = Math::RoundToInt(v9); /*0x4bbec4*/
          v115 = v30; /*0x4bbec9*/
          __asm { fild [esp+78h+arg_14] } /*0x4bbed2*/
          v116 = v22 - v18; /*0x4bbedb*/
          __asm /*0x4bbee2*/
          {
            fdivr qword ptr [esp+48h]
            fild [esp+78h+arg_14]
            fmulp st(1), st
          }
          LOWORD(v31) = Math::RoundToInt(v9); /*0x4bbeef*/
          v32 = abs32(v31); /*0x4bbef7*/
          if ( v18 <= v22 ) /*0x4bbefb*/
            v110 = v18 + v32; /*0x4bbf0a*/
          else
            v110 = v18 - v32; /*0x4bbeff*/
        }
        v33 = v95[0]; /*0x4bbf11*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v95[0] + 112))(v95[0]); /*0x4bbf19*/
        v34 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v33 + 92))(v33, v96, v97); /*0x4bbf33*/
        v104 = v34; /*0x4bbf37*/
        if ( g_ZBufferDescriptor ) /*0x4bbf3b*/
        {
          Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4bbf45*/
          v95[2] = v97; /*0x4bbf4c*/
          SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v96, v97 - Stream_field_04); /*0x4bbf5d*/
          v88 = -1; /*0x4bbf6d*/
          LOWORD(v36) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4bbf79*/
          pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4bbf80*/
          v37 = v110; /*0x4bbf8b*/
          v111 = v110 + v36 - v97 - v100; /*0x4bbf96*/
          if ( v34 ) /*0x4bbf9d*/
          {
            v38 = v98[1] - v97; /*0x4bbfb6*/
            v39 = v98[0] - v96; /*0x4bbfba*/
            v89 = v98[0] - v96; /*0x4bbfc0*/
            v40 = (int)v106 - v37; /*0x4bbfc4*/
            v41 = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 116))(v33); /*0x4bbfc6*/
            v87 = v41; /*0x4bbfcb*/
            if ( v38 < 0 ) /*0x4bbfcf*/
            {
              v87 = -v41; /*0x4bbfd3*/
              pad_0 = -pad_0; /*0x4bbfe0*/
              v88 = 1; /*0x4bbfe7*/
            }
            v83 = 1; /*0x4bbff6*/
            v42 = abs32(v38); /*0x4bc000*/
            if ( v40 < 0 ) /*0x4bc004*/
              v83 = -1; /*0x4bc006*/
            v43 = 2 * v42; /*0x4bc010*/
            v84 = 2 * v42; /*0x4bc016*/
            v44 = abs32(v40); /*0x4bc01a*/
            v45 = 2 * v39; /*0x4bc01c*/
            v85 = 2 * v39; /*0x4bc021*/
            v46 = 2 * v44; /*0x4bc025*/
            v86 = 2 * v44; /*0x4bc028*/
            if ( v44 > v39 && v44 > v42 ) /*0x4bc034*/
            {
              v92[0] = v43 - v44; /*0x4bc03e*/
              v90 = v45 - v44; /*0x4bc048*/
              if ( v44 > 0 ) /*0x4bc04c*/
              {
                v47 = g_ZBufferDescriptor; /*0x4bc052*/
                v107 = 0; /*0x4bc058*/
                v93 = v44; /*0x4bc05f*/
                do /*0x4bc27e*/
                {
                  if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc075*/
                  {
                    v48 = *(_WORD *)((char *)v107 + v104); /*0x4bc092*/
                    LOBYTE(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc0ab*/
                    BYTE1(v95[1]) = (unsigned __int8)(v48 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc0cc*/
                    BYTE2(v95[1]) = (unsigned __int8)(v48 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc0d2*/
                    v49 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc0f7*/
                    v50 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc11e*/
                    if ( v50 > 255 ) /*0x4bc125*/
                      v50 = 255; /*0x4bc127*/
                    v51 = 255; /*0x4bc132*/
                    if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc137*/
                      v51 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc139*/
                    if ( v49 > 255 ) /*0x4bc141*/
                      v49 = 255; /*0x4bc143*/
                    *(_WORD *)((char *)v107 + v104) = (v50 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc17b*/
                                                    | (v51 >> g_BitMask_Blue << g_BitMask_Green)
                                                    | (v49 >> g_BitShift_Green_0 << g_BitShift_Red);
                    if ( a9 ) /*0x4bc188*/
                      *SamplePosition = v111; /*0x4bc199*/
                    v47 = g_ZBufferDescriptor; /*0x4bc19c*/
                  }
                  v52 = v92[0]; /*0x4bc1a2*/
                  if ( v92[0] <= 0 ) /*0x4bc1a8*/
                  {
                    v54 = v111; /*0x4bc213*/
                  }
                  else
                  {
                    v52 = v92[0] - v86; /*0x4bc1c6*/
                    v104 += v87; /*0x4bc1c8*/
                    v53 = &SamplePosition[pad_0]; /*0x4bc1ce*/
                    if ( pad_0 <= 0 ) /*0x4bc1d1*/
                    {
                      v55 = &SamplePosition[pad_0]; /*0x4bc1f2*/
                      if ( (unsigned int)v53 < v47[1].Stream_field_04 ) /*0x4bc1f6*/
                        v55 = (_WORD *)((char *)v53 + v47[1].Stream_field_0C); /*0x4bc1fb*/
                      SamplePosition = v55; /*0x4bc208*/
                      v54 = v88 + v111; /*0x4bc20f*/
                    }
                    else
                    {
                      if ( (unsigned int)v53 >= v47[1].Stream_field_08 ) /*0x4bc1d6*/
                        v53 = (_WORD *)((char *)v53 - v47[1].Stream_field_0C); /*0x4bc1d8*/
                      SamplePosition = v53; /*0x4bc1e2*/
                      v54 = v88 + v111; /*0x4bc1e9*/
                    }
                  }
                  v56 = v90; /*0x4bc21a*/
                  if ( v90 > 0 ) /*0x4bc220*/
                  {
                    v57 = SamplePosition + 1; /*0x4bc233*/
                    v107 = (_DWORD *)((char *)v107 + 2); /*0x4bc23b*/
                    if ( (unsigned int)(SamplePosition + 1) >= v47[1].Stream_field_08 ) /*0x4bc242*/
                      v57 = (_WORD *)((char *)v57 - v47[1].Stream_field_0C); /*0x4bc244*/
                    SamplePosition = v57; /*0x4bc247*/
                    v56 = v90 - v86; /*0x4bc252*/
                  }
                  v111 = v83 + v54; /*0x4bc25e*/
                  v90 = v85 + v56; /*0x4bc26b*/
                  v58 = v93 == 1; /*0x4bc275*/
                  v92[0] = v84 + v52; /*0x4bc276*/
                  --v93; /*0x4bc27a*/
                }
                while ( !v58 ); /*0x4bc27e*/
              }
              goto LABEL_50; /*0x4bc27e*/
            }
            if ( v39 <= v42 ) /*0x4bc29b*/
            {
              v93 = v45 - v42; /*0x4bc501*/
              v92[0] = v46 - v42; /*0x4bc50b*/
              if ( v42 > 0 ) /*0x4bc50f*/
              {
                v70 = g_ZBufferDescriptor; /*0x4bc515*/
                v109 = 0; /*0x4bc51b*/
                v91 = v42; /*0x4bc522*/
                do /*0x4bc728*/
                {
                  if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc538*/
                  {
                    v71 = *(_WORD *)((char *)v109 + v104); /*0x4bc555*/
                    LOBYTE(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc56e*/
                    BYTE1(v95[1]) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc58f*/
                    BYTE2(v95[1]) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc595*/
                    v72 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc5ba*/
                    v73 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc5e1*/
                    if ( v73 > 255 ) /*0x4bc5e8*/
                      v73 = 255; /*0x4bc5ea*/
                    v74 = 255; /*0x4bc5f5*/
                    if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc5fa*/
                      v74 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc5fc*/
                    if ( v72 > 255 ) /*0x4bc604*/
                      v72 = 255; /*0x4bc606*/
                    *(_WORD *)((char *)v109 + v104) = (v73 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc63e*/
                                                    | (v74 >> g_BitMask_Blue << g_BitMask_Green)
                                                    | (v72 >> g_BitShift_Green_0 << g_BitShift_Red);
                    if ( a9 ) /*0x4bc64b*/
                      *SamplePosition = v111; /*0x4bc65c*/
                    v70 = g_ZBufferDescriptor; /*0x4bc65f*/
                  }
                  v75 = v93; /*0x4bc665*/
                  if ( v93 <= 0 ) /*0x4bc66b*/
                  {
                    v76 = SamplePosition; /*0x4bc698*/
                  }
                  else
                  {
                    v76 = SamplePosition + 1; /*0x4bc67e*/
                    v109 = (_DWORD *)((char *)v109 + 2); /*0x4bc686*/
                    if ( (unsigned int)(SamplePosition + 1) >= v70[1].Stream_field_08 ) /*0x4bc68d*/
                      v76 = (_WORD *)((char *)v76 - v70[1].Stream_field_0C); /*0x4bc68f*/
                    v75 = v93 - v84; /*0x4bc692*/
                  }
                  v77 = v92[0]; /*0x4bc69f*/
                  v78 = v111; /*0x4bc6a3*/
                  if ( v92[0] > 0 ) /*0x4bc6ac*/
                  {
                    v78 = v83 + v111; /*0x4bc6b6*/
                    v77 = v92[0] - v84; /*0x4bc6b8*/
                  }
                  v93 = v85 + v75; /*0x4bc6c4*/
                  v92[0] = v86 + v77; /*0x4bc6d5*/
                  v79 = &v76[pad_0]; /*0x4bc6e2*/
                  v104 += v87; /*0x4bc6e4*/
                  if ( pad_0 <= 0 ) /*0x4bc6ea*/
                  {
                    v80 = v79; /*0x4bc700*/
                    if ( (unsigned int)v79 < v70[1].Stream_field_04 ) /*0x4bc704*/
                      v80 = (_WORD *)((char *)v79 + v70[1].Stream_field_0C); /*0x4bc709*/
                    SamplePosition = v80; /*0x4bc70b*/
                  }
                  else
                  {
                    if ( (unsigned int)v79 >= v70[1].Stream_field_08 ) /*0x4bc6ef*/
                      v79 = (_WORD *)((char *)v79 - v70[1].Stream_field_0C); /*0x4bc6f1*/
                    SamplePosition = v79; /*0x4bc6f4*/
                  }
                  v58 = v91 == 1; /*0x4bc71c*/
                  v111 = v88 + v78; /*0x4bc71d*/
                  --v91; /*0x4bc724*/
                }
                while ( !v58 ); /*0x4bc728*/
              }
              goto LABEL_50; /*0x4bc728*/
            }
            v108 = 0; /*0x4bc2a3*/
            v93 = v43 - v39; /*0x4bc2ac*/
            v92[0] = v46 - v39; /*0x4bc2b6*/
            if ( v39 <= 0 ) /*0x4bc2ba*/
            {
  LABEL_50:
              (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v95[0] + 96))(v95[0]); /*0x4bc284*/
              return 1; /*0x4bc296*/
            }
            v60 = g_ZBufferDescriptor; /*0x4bc2c0*/
            while ( 1 ) /*0x4bc2c6*/
            {
              if ( (unsigned __int16)v111 < *SamplePosition ) /*0x4bc2d8*/
              {
                v61 = *(_WORD *)(v104 + 2 * v108); /*0x4bc2f5*/
                LOBYTE(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4bc30e*/
                BYTE1(v95[1]) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4bc32f*/
                BYTE2(v95[1]) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4bc335*/
                v62 = ((a6 * LOBYTE(v95[1])) >> 8) + LOBYTE(v95[1]); /*0x4bc35a*/
                v63 = ((a6 * BYTE2(v95[1])) >> 8) + BYTE2(v95[1]); /*0x4bc381*/
                if ( v63 > 255 ) /*0x4bc388*/
                  v63 = 255; /*0x4bc38a*/
                v64 = 255; /*0x4bc395*/
                if ( ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]) <= 255 ) /*0x4bc39a*/
                  v64 = ((a6 * BYTE1(v95[1])) >> 8) + BYTE1(v95[1]); /*0x4bc39c*/
                if ( v62 > 255 ) /*0x4bc3a4*/
                  v62 = 255; /*0x4bc3a6*/
                *(_WORD *)(v104 + 2 * v108) = (v63 >> g_BitMask_Red << g_BitShift_Blue) /*0x4bc3de*/
                                            | (v64 >> g_BitMask_Blue << g_BitMask_Green)
                                            | (v62 >> g_BitShift_Green_0 << g_BitShift_Red);
                if ( a9 ) /*0x4bc3eb*/
                  *SamplePosition = v111; /*0x4bc3fc*/
                v60 = g_ZBufferDescriptor; /*0x4bc3ff*/
              }
              v65 = v93; /*0x4bc405*/
              if ( v93 <= 0 ) /*0x4bc40b*/
              {
                v66 = SamplePosition; /*0x4bc47c*/
                goto LABEL_73; /*0x4bc47c*/
              }
              v65 = v93 - v85; /*0x4bc429*/
              v104 += v87; /*0x4bc42b*/
              v66 = &SamplePosition[pad_0]; /*0x4bc431*/
              if ( pad_0 <= 0 ) /*0x4bc434*/
                break; /*0x4bc434*/
              if ( (unsigned int)v66 < v60[1].Stream_field_08 ) /*0x4bc439*/
                goto LABEL_71; /*0x4bc439*/
              v66 = (_WORD *)((char *)v66 - v60[1].Stream_field_0C); /*0x4bc445*/
              v111 += v88; /*0x4bc44d*/
  LABEL_73:
              v68 = v92[0]; /*0x4bc483*/
              if ( v92[0] > 0 ) /*0x4bc489*/
              {
                v111 += v83; /*0x4bc49c*/
                v68 = v92[0] - v85; /*0x4bc4a3*/
              }
              v69 = v66 + 1; /*0x4bc4a9*/
              v93 = v84 + v65; /*0x4bc4ae*/
              v92[0] = v86 + v68; /*0x4bc4b8*/
              if ( (unsigned int)v69 >= v60[1].Stream_field_08 ) /*0x4bc4c1*/
                v69 = (_WORD *)((char *)v69 - v60[1].Stream_field_0C); /*0x4bc4c3*/
              SamplePosition = v69; /*0x4bc4ca*/
              if ( ++v108 >= v89 ) /*0x4bc4e2*/
                goto LABEL_50; /*0x4bc4e2*/
            }
            v67 = &SamplePosition[pad_0]; /*0x4bc459*/
            if ( (unsigned int)v66 < v60[1].Stream_field_04 ) /*0x4bc45d*/
              v67 = (_WORD *)((char *)v66 + v60[1].Stream_field_0C); /*0x4bc462*/
            v66 = v67; /*0x4bc464*/
  LABEL_71:
            v111 += v88; /*0x4bc466*/
            goto LABEL_73; /*0x4bc47a*/
          }
        }
      }
    }
    return 0; /*0x4bc28d*/
}
// truth-filled 0x4BFD30 (G42.52 truth-emitting generator)
bool gamemd::XSurface::DrawLineZBuf(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned short a2, int a3, int a4, bool a5)
{
    double v9; // st7
    int (__stdcall **DSurface_field_0x0)(_DWORD *); // eax
    int *v11; // eax
    int *v12; // ecx
    int v13; // esi
    int v14; // edi
    int result; // eax
    int v16; // ecx
    int v17; // eax
    int v18; // ecx
    int v19; // ebx
    int v20; // edx
    int v21; // ebp
    int v22; // esi
    int v23; // edi
    int v24; // esi
    int v25; // ebp
    int v26; // eax
    int v27; // eax
    int v28; // eax
    unsigned int v29; // eax
    int v30; // eax
    int v31; // eax
    int v32; // eax
    unsigned int v33; // eax
    int v34; // ebp
    int v35; // esi
    int v36; // ebx
    int Stream_field_04; // edi
    _WORD *SamplePosition; // esi
    int v39; // edi
    _WORD *v40; // edi
    int v41; // ecx
    int v42; // ebx
    int v43; // ebp
    int v44; // eax
    int v45; // ecx
    int v46; // eax
    int v47; // ebp
    int v48; // ebx
    Stream *v49; // edx
    _DWORD *v50; // ebp
    int v51; // eax
    int v52; // edx
    int v53; // eax
    _WORD *v54; // eax
    _WORD *v55; // eax
    int v56; // ebx
    Stream *v57; // edx
    _DWORD *v58; // ebp
    int v59; // eax
    int v60; // edx
    _WORD *v61; // eax
    _WORD *v62; // eax
    int v63; // eax
    int v64; // ebp
    _DWORD *v65; // edx
    Stream *v66; // ecx
    int v67; // ebx
    int v68; // eax
    int v69; // eax
    _WORD *v70; // eax
    _WORD *v71; // eax
    double v72; // [esp+4h] [ebp-7Ch]
    double v73; // [esp+4h] [ebp-7Ch]
    double v74; // [esp+4h] [ebp-7Ch]
    double v75; // [esp+4h] [ebp-7Ch]
    int v76; // [esp+1Ch] [ebp-64h]
    int v77; // [esp+20h] [ebp-60h]
    int v78; // [esp+20h] [ebp-60h]
    int v79; // [esp+20h] [ebp-60h]
    int v80; // [esp+24h] [ebp-5Ch]
    int v81; // [esp+28h] [ebp-58h]
    int v82; // [esp+2Ch] [ebp-54h]
    int v83; // [esp+30h] [ebp-50h]
    int v84; // [esp+30h] [ebp-50h]
    int v85; // [esp+34h] [ebp-4Ch]
    int v86; // [esp+38h] [ebp-48h]
    double v87; // [esp+3Ch] [ebp-44h] BYREF
    _DWORD v88[5]; // [esp+4Ch] [ebp-34h] BYREF
    int v89; // [esp+60h] [ebp-20h] BYREF
    int v90; // [esp+64h] [ebp-1Ch]
    int v91[2]; // [esp+68h] [ebp-18h] BYREF
    int v92; // [esp+70h] [ebp-10h] BYREF
    int v93; // [esp+74h] [ebp-Ch]
    int v94; // [esp+78h] [ebp-8h]
    int v95; // [esp+7Ch] [ebp-4h]
    int v96; // [esp+84h] [ebp+4h]
    _DWORD *v97; // [esp+88h] [ebp+8h]
    int v98; // [esp+88h] [ebp+8h]
    int v99; // [esp+8Ch] [ebp+Ch]
    _DWORD *v100; // [esp+8Ch] [ebp+Ch]
    _DWORD *v101; // [esp+8Ch] [ebp+Ch]
    int v102; // [esp+94h] [ebp+14h]
    int v103; // [esp+94h] [ebp+14h]
    int v104; // [esp+94h] [ebp+14h]
    int v105; // [esp+94h] [ebp+14h]
    int v106; // [esp+98h] [ebp+18h]
    int v107; // [esp+98h] [ebp+18h]
    int v108; // [esp+98h] [ebp+18h]
    int v109; // [esp+98h] [ebp+18h]
    int v110; // [esp+98h] [ebp+18h]

    DSurface_field_0x0 = (int (__stdcall **)(_DWORD *))this->DSurface_field_0x0; /*0x4bfd33*/
    v88[0] = this; /*0x4bfd3e*/
    v11 = (int *)DSurface_field_0x0[30](&v88[1]); /*0x4bfd42*/
    v12 = ClipRectIntersection(&v87, (int *)a3, v11, 0, 0); /*0x4bfd57*/
    v13 = *v12; /*0x4bfd59*/
    v92 = *v12; /*0x4bfd5b*/
    v14 = v12[1]; /*0x4bfd5f*/
    v93 = v14; /*0x4bfd62*/
    result = v12[2]; /*0x4bfd66*/
    v94 = result; /*0x4bfd69*/
    v16 = v12[3]; /*0x4bfd6d*/
    v95 = v16; /*0x4bfd72*/
    if ( !result && !v16 ) /*0x4bfd7a*/
      goto LABEL_121; /*0x4bfd7a*/
    v17 = v13 + *a4; /*0x4bfd92*/
    v18 = v13 + *a5; /*0x4bfd94*/
    v19 = a7; /*0x4bfd99*/
    v20 = v14 + a4[1]; /*0x4bfda0*/
    v21 = v17; /*0x4bfda2*/
    v22 = v14 + a5[1]; /*0x4bfda4*/
    v23 = a8; /*0x4bfda6*/
    v89 = v17; /*0x4bfdaf*/
    v90 = v20; /*0x4bfdb3*/
    v91[0] = v18; /*0x4bfdb7*/
    v91[1] = v22; /*0x4bfdbb*/
    if ( v17 > v18 ) /*0x4bfdbf*/
    {
      v21 = v18; /*0x4bfdc1*/
      v19 = a8; /*0x4bfdc3*/
      v23 = a7; /*0x4bfdc5*/
      v89 = v18; /*0x4bfdcc*/
      v90 = v22; /*0x4bfdd0*/
      v91[0] = v17; /*0x4bfdd4*/
      v91[1] = v20; /*0x4bfdd8*/
    }
    v88[1] = v91[0]; /*0x4bfde8*/
    v24 = v21; /*0x4bfded*/
    v25 = v90; /*0x4bfdef*/
    v88[2] = v91[1]; /*0x4bfdfb*/
    result = ClipLine(&v89, v91, &v92); /*0x4bfdff*/
    if ( !(_BYTE)result ) /*0x4bfe06*/
      goto LABEL_121; /*0x4bfe06*/
    v97 = (_DWORD *)v23; /*0x4bfe1a*/
    v106 = v19; /*0x4bfe1e*/
    if ( v91[0] != v88[1] || v91[1] != v88[2] ) /*0x4bfe2b*/
    {
      LODWORD(v87) = v24 - v91[0]; /*0x4bfe3a*/
      __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe40*/
      HIDWORD(v87) = v25 - v91[1]; /*0x4bfe44*/
      __asm /*0x4bfe48*/
      {
        fild [esp+7Ch+var_40]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+7Ch+var_80+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v72); /*0x4bfe5d*/
      LOWORD(v26) = Math::RoundToInt(v9); /*0x4bfe62*/
      v102 = v26; /*0x4bfe6d*/
      LODWORD(v87) = v24 - v88[1]; /*0x4bfe7c*/
      __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bfe82*/
      HIDWORD(v87) = v25 - v88[2]; /*0x4bfe86*/
      __asm /*0x4bfe8a*/
      {
        fild [esp+7Ch+var_40]
        fild [esp+7Ch+arg_10]
        fstp [esp+7Ch+var_48+4]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+7Ch+var_80+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v73); /*0x4bfeaa*/
      LOWORD(v27) = Math::RoundToInt(v9); /*0x4bfeb2*/
      v103 = v27; /*0x4bfeb7*/
      __asm { fild [esp+74h+arg_10] } /*0x4bfec0*/
      v104 = v19 - v23; /*0x4bfec9*/
      __asm /*0x4bfed0*/
      {
        fdivr [esp+74h+var_48+4]
        fild [esp+74h+arg_10]
        fmulp st(1), st
      }
      LOWORD(v28) = Math::RoundToInt(v9); /*0x4bfedd*/
      v29 = abs32(v28); /*0x4bfee5*/
      if ( v19 >= v23 ) /*0x4bfee9*/
        v97 = (_DWORD *)(v19 - v29); /*0x4bfef7*/
      else
        v97 = (_DWORD *)(v19 + v29); /*0x4bfeed*/
    }
    if ( v89 == v24 && v90 == v25 ) /*0x4bff09*/
      goto LABEL_16; /*0x4bff09*/
    LODWORD(v87) = v89 - v88[1]; /*0x4bff18*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff20*/
    HIDWORD(v87) = v90 - v88[2]; /*0x4bff26*/
    __asm /*0x4bff2a*/
    {
      fild [esp+7Ch+var_40]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v74); /*0x4bff3f*/
    LOWORD(v30) = Math::RoundToInt(v9); /*0x4bff44*/
    v107 = v30; /*0x4bff49*/
    LODWORD(v87) = v24 - v88[1]; /*0x4bff56*/
    __asm { fild dword ptr [esp+7Ch+var_48+4] } /*0x4bff5e*/
    HIDWORD(v87) = v25 - v88[2]; /*0x4bff64*/
    __asm /*0x4bff68*/
    {
      fild [esp+7Ch+var_40]
      fild [esp+7Ch+arg_14]
      fstp qword ptr [esp+7Ch+var_34+4]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+7Ch+var_80+4]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v75); /*0x4bff88*/
    LOWORD(v31) = Math::RoundToInt(v9); /*0x4bff90*/
    v108 = v31; /*0x4bff95*/
    __asm { fild [esp+74h+arg_14] } /*0x4bff9e*/
    v109 = v19 - v23; /*0x4bffa7*/
    __asm /*0x4bffae*/
    {
      fdivr qword ptr [esp+74h+var_34+4]
      fild [esp+74h+arg_14]
      fmulp st(1), st
    }
    LOWORD(v32) = Math::RoundToInt(v9); /*0x4bffbb*/
    v33 = abs32(v32); /*0x4bffc3*/
    if ( v23 <= v19 ) /*0x4bffc7*/
    {
      v106 = v23 + v33; /*0x4bffd1*/
  LABEL_16:
      v34 = v106; /*0x4bffd8*/
      goto LABEL_17; /*0x4bffd8*/
    }
    v34 = v23 - v33; /*0x4bffcb*/
  LABEL_17:
    v35 = v88[0]; /*0x4bffdf*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 112))(v88[0]); /*0x4bffe7*/
    result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v35 + 92))(v35, v89, v90); /*0x4bfff8*/
    v36 = result; /*0x4c0001*/
    v105 = result; /*0x4c0005*/
    if ( !g_ZBufferDescriptor ) /*0x4c000c*/
      goto LABEL_121; /*0x4c000c*/
    Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4c0016*/
    v88[2] = v90; /*0x4c001d*/
    SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v89, v90 - Stream_field_04); /*0x4c0034*/
    v39 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4c003a*/
    v88[2] = v90; /*0x4c003d*/
    v40 = (_WORD *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v89, v90 - v39); /*0x4c004e*/
    v82 = -1; /*0x4c0055*/
    LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4c0061*/
    result = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4c0065*/
    v96 = result; /*0x4c0068*/
    v110 = v34 + v41 - v90 - v93; /*0x4c0076*/
    if ( !v36 ) /*0x4c007d*/
    {
  LABEL_121:
      LOBYTE(result) = 0; /*0x4c073b*/
      return result; /*0x4c073e*/
    }
    LOBYTE(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4c00a5*/
    BYTE1(v88[1]) = (unsigned __int8)(a6 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4c00c6*/
    v42 = v91[1] - v90; /*0x4c00ce*/
    BYTE2(v88[1]) = (unsigned __int8)(a6 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4c00d6*/
    v85 = LOBYTE(v88[1]); /*0x4c00e3*/
    v86 = BYTE1(v88[1]); /*0x4c00f0*/
    LODWORD(v87) = BYTE2(v88[1]); /*0x4c00fd*/
    v99 = v91[0] - v89; /*0x4c010b*/
    v43 = (int)v97 - v34; /*0x4c011a*/
    v44 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 116))(v88[0]); /*0x4c011c*/
    v81 = v44; /*0x4c0121*/
    if ( v42 < 0 ) /*0x4c0125*/
    {
      v81 = -v44; /*0x4c0129*/
      v96 = -v96; /*0x4c0133*/
      v82 = 1; /*0x4c0137*/
    }
    v80 = 1; /*0x4c0141*/
    v45 = abs32(v42); /*0x4c014e*/
    if ( v43 < 0 ) /*0x4c0152*/
      v80 = -1; /*0x4c0154*/
    v98 = 2 * v45; /*0x4c0164*/
    v46 = abs32(v43); /*0x4c0168*/
    v47 = 2 * v99; /*0x4c0173*/
    v83 = 2 * v99; /*0x4c0179*/
    v76 = 2 * v46; /*0x4c017d*/
    if ( v46 <= v99 || v46 <= v45 ) /*0x4c0189*/
    {
      if ( v99 <= v45 ) /*0x4c0375*/
      {
        v64 = v47 - v45; /*0x4c0559*/
        v88[1] = 2 * v46 - v45; /*0x4c055f*/
        if ( v45 > 0 ) /*0x4c0563*/
        {
          v65 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0569*/
          v79 = v45; /*0x4c056f*/
          v66 = g_ZBufferDescriptor; /*0x4c0573*/
          v101 = 0; /*0x4c0579*/
          do /*0x4c0720*/
          {
            v67 = v110; /*0x4c0584*/
            v68 = (unsigned __int16)*v40; /*0x4c0590*/
            if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c058b*/
            {
              if ( v68 == 127 ) /*0x4c05a4*/
              {
                *(_WORD *)((char *)v101 + v105) = a6; /*0x4c0627*/
              }
              else
              {
                v67 = v110; /*0x4c05f2*/
                *(_WORD *)((char *)v101 + v105) = ((LODWORD(v87) * v68) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c060b*/
                                                | ((v86 * v68) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                                                | ((v85 * v68) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
              }
              if ( a9 ) /*0x4c0634*/
                *SamplePosition = v67; /*0x4c0636*/
              v66 = g_ZBufferDescriptor; /*0x4c0639*/
              v65 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c063f*/
            }
            if ( v64 > 0 ) /*0x4c0647*/
            {
              ++SamplePosition; /*0x4c0650*/
              v101 = (_DWORD *)((char *)v101 + 2); /*0x4c0656*/
              if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c0662*/
                SamplePosition = (_WORD *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c0664*/
              if ( (unsigned int)++v40 >= v65[7] ) /*0x4c066f*/
                v40 = (_WORD *)((char *)v40 - v65[8]); /*0x4c0671*/
              v64 -= v98; /*0x4c0674*/
            }
            v69 = v88[1]; /*0x4c0678*/
            if ( v88[1] > 0 ) /*0x4c067e*/
            {
              v110 = v80 + v67; /*0x4c0684*/
              v69 = v88[1] - v98; /*0x4c068f*/
            }
            v64 += v83; /*0x4c0695*/
            v88[1] = v76 + v69; /*0x4c06a4*/
            v105 += v81; /*0x4c06ae*/
            SamplePosition += v96; /*0x4c06bc*/
            if ( v96 <= 0 ) /*0x4c06c0*/
            {
              v70 = SamplePosition; /*0x4c06cf*/
              if ( (unsigned int)SamplePosition < v66[1].Stream_field_04 ) /*0x4c06d3*/
                v70 = (_WORD *)((char *)SamplePosition + v66[1].Stream_field_0C); /*0x4c06d8*/
              SamplePosition = v70; /*0x4c06da*/
            }
            else if ( (unsigned int)SamplePosition >= v66[1].Stream_field_08 ) /*0x4c06c5*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v66[1].Stream_field_0C); /*0x4c06c7*/
            }
            v110 += v82; /*0x4c06e9*/
            v40 += v96; /*0x4c06f7*/
            if ( v96 <= 0 ) /*0x4c06fb*/
            {
              v71 = v40; /*0x4c070a*/
              if ( (unsigned int)v40 < v65[6] ) /*0x4c070e*/
                v71 = (_WORD *)((char *)v40 + v65[8]); /*0x4c0713*/
              v40 = v71; /*0x4c0715*/
            }
            else if ( (unsigned int)v40 >= v65[7] ) /*0x4c0700*/
            {
              v40 = (_WORD *)((char *)v40 - v65[8]); /*0x4c0702*/
            }
            --v79; /*0x4c071c*/
          }
          while ( v79 ); /*0x4c0720*/
        }
      }
      else
      {
        v56 = v98 - v99; /*0x4c038a*/
        v78 = 0; /*0x4c038e*/
        v84 = v76 - v99; /*0x4c0398*/
        if ( v99 > 0 ) /*0x4c039c*/
        {
          v57 = g_ZBufferDescriptor; /*0x4c03a2*/
          v58 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c03a8*/
          do /*0x4c053c*/
          {
            v59 = (unsigned __int16)*v40; /*0x4c03bb*/
            if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c03b6*/
            {
              if ( v59 == 127 ) /*0x4c03cf*/
                LOWORD(v60) = a6; /*0x4c0423*/
              else
                v60 = ((LODWORD(v87) * v59) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c041f*/
                    | ((v86 * v59) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                    | ((v85 * v59) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
              *(_WORD *)(v105 + 2 * v78) = v60; /*0x4c0436*/
              if ( a9 ) /*0x4c0443*/
                *SamplePosition = v110; /*0x4c044d*/
              v57 = g_ZBufferDescriptor; /*0x4c0450*/
              v58 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0456*/
            }
            if ( v56 > 0 ) /*0x4c045e*/
            {
              v105 += v81; /*0x4c046d*/
              v56 -= 2 * v99; /*0x4c047e*/
              SamplePosition += v96; /*0x4c0487*/
              if ( v96 <= 0 ) /*0x4c048b*/
              {
                v61 = SamplePosition; /*0x4c049a*/
                if ( (unsigned int)SamplePosition < v57[1].Stream_field_04 ) /*0x4c049c*/
                  v61 = (_WORD *)((char *)SamplePosition + v57[1].Stream_field_0C); /*0x4c04a1*/
                SamplePosition = v61; /*0x4c04a3*/
              }
              else if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0490*/
              {
                SamplePosition = (_WORD *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c0492*/
              }
              v40 += v96; /*0x4c04a9*/
              v110 += v82; /*0x4c04ab*/
              if ( v96 <= 0 ) /*0x4c04b8*/
              {
                v62 = v40; /*0x4c04c7*/
                if ( (unsigned int)v40 < v58[6] ) /*0x4c04cb*/
                  v62 = (_WORD *)((char *)v40 + v58[8]); /*0x4c04d0*/
                v40 = v62; /*0x4c04d2*/
              }
              else if ( (unsigned int)v40 >= v58[7] ) /*0x4c04bd*/
              {
                v40 = (_WORD *)((char *)v40 - v58[8]); /*0x4c04bf*/
              }
            }
            v63 = v84; /*0x4c04d4*/
            if ( v84 > 0 ) /*0x4c04da*/
            {
              v110 += v80; /*0x4c04e9*/
              v63 = v84 - 2 * v99; /*0x4c04fe*/
            }
            ++SamplePosition; /*0x4c0504*/
            v56 += v98; /*0x4c0507*/
            v84 = v76 + v63; /*0x4c050f*/
            if ( (unsigned int)SamplePosition >= v57[1].Stream_field_08 ) /*0x4c0518*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v57[1].Stream_field_0C); /*0x4c051a*/
            if ( (unsigned int)++v40 >= v58[7] ) /*0x4c0525*/
              v40 = (_WORD *)((char *)v40 - v58[8]); /*0x4c0527*/
            ++v78; /*0x4c0538*/
          }
          while ( v78 < v99 ); /*0x4c053c*/
        }
      }
    }
    else
    {
      v48 = v98 - v46; /*0x4c0195*/
      v77 = v47 - v46; /*0x4c019b*/
      if ( v46 > 0 ) /*0x4c019f*/
      {
        v49 = g_ZBufferDescriptor; /*0x4c01a5*/
        v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c01ab*/
        v100 = 0; /*0x4c01b1*/
        v88[1] = v46; /*0x4c01bc*/
        do /*0x4c0358*/
        {
          v51 = (unsigned __int16)*v40; /*0x4c01cd*/
          if ( (unsigned __int16)v110 < *SamplePosition && *v40 ) /*0x4c01c8*/
          {
            if ( v51 == 127 ) /*0x4c01e1*/
              LOWORD(v52) = a6; /*0x4c0235*/
            else
              v52 = ((LODWORD(v87) * v51) >> 7 >> g_BitMask_Red << g_BitShift_Blue) /*0x4c0231*/
                  | ((v86 * v51) >> 7 >> g_BitMask_Blue << g_BitMask_Green)
                  | ((v85 * v51) >> 7 >> g_BitShift_Green_0 << g_BitShift_Red);
            *(_WORD *)((char *)v100 + v105) = v52; /*0x4c024b*/
            if ( a9 ) /*0x4c0258*/
              *SamplePosition = v110; /*0x4c0262*/
            v49 = g_ZBufferDescriptor; /*0x4c0265*/
            v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c026b*/
          }
          if ( v48 > 0 ) /*0x4c0273*/
          {
            v48 -= v76; /*0x4c0286*/
            v53 = v96; /*0x4c0288*/
            v105 += v81; /*0x4c028c*/
            SamplePosition += v96; /*0x4c0296*/
            if ( v96 <= 0 ) /*0x4c029a*/
            {
              v54 = SamplePosition; /*0x4c02a9*/
              if ( (unsigned int)SamplePosition < v49[1].Stream_field_04 ) /*0x4c02ab*/
                v54 = (_WORD *)((char *)SamplePosition + v49[1].Stream_field_0C); /*0x4c02b0*/
              SamplePosition = v54; /*0x4c02b2*/
              v53 = v96; /*0x4c02b4*/
            }
            else if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c029f*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c02a1*/
            }
            v40 += v96; /*0x4c02b8*/
            if ( v53 <= 0 ) /*0x4c02bc*/
            {
              v55 = v40; /*0x4c02cb*/
              if ( (unsigned int)v40 < v50[6] ) /*0x4c02cf*/
                v55 = (_WORD *)((char *)v40 + v50[8]); /*0x4c02d4*/
              v40 = v55; /*0x4c02d6*/
            }
            else if ( (unsigned int)v40 >= v50[7] ) /*0x4c02c1*/
            {
              v40 = (_WORD *)((char *)v40 - v50[8]); /*0x4c02c3*/
            }
            v110 += v82; /*0x4c02e5*/
          }
          if ( v77 > 0 ) /*0x4c02f2*/
          {
            ++SamplePosition; /*0x4c02fb*/
            v100 = (_DWORD *)((char *)v100 + 2); /*0x4c0301*/
            if ( (unsigned int)SamplePosition >= v49[1].Stream_field_08 ) /*0x4c030d*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v49[1].Stream_field_0C); /*0x4c030f*/
            if ( (unsigned int)++v40 >= v50[7] ) /*0x4c031a*/
              v40 = (_WORD *)((char *)v40 - v50[8]); /*0x4c031c*/
            v77 -= v76; /*0x4c0323*/
          }
          v110 += v80; /*0x4c0338*/
          v77 += v83; /*0x4c0349*/
          v48 += v98; /*0x4c0351*/
          --v88[1]; /*0x4c0354*/
        }
        while ( v88[1] ); /*0x4c0358*/
      }
    }
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v88[0] + 96))(v88[0]); /*0x4c0364*/
    LOBYTE(result) = 1; /*0x4c036a*/
    return result; /*0x4c0367*/
}
// truth-filled 0x4BDF00 (G42.52 truth-emitting generator)
bool gamemd::XSurface::DrawLineZBufColored(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned const char*const a2, float a3, int a4, int a5)
{
    double v8; // st7
    int v11; // eax
    int v12; // ebx
    int v13; // eax
    int v14; // ebp
    int v15; // eax
    int *v16; // eax
    int *v17; // eax
    int v18; // esi
    int v19; // edi
    int v20; // ecx
    int v21; // eax
    int v22; // ecx
    int v23; // ebp
    int v24; // edx
    int v25; // ebx
    int v26; // esi
    int v27; // edi
    int v28; // esi
    int v29; // ebx
    int v30; // eax
    int v31; // eax
    int v32; // eax
    unsigned int v33; // eax
    int v34; // eax
    int v35; // eax
    int v36; // eax
    unsigned int v37; // eax
    int v38; // ebx
    int Stream_field_04; // edi
    _WORD *SamplePosition; // esi
    int v41; // edi
    unsigned __int16 *v42; // ebp
    int v43; // edi
    int v44; // ebx
    int v45; // eax
    int v46; // ecx
    int v47; // eax
    int v48; // edi
    int v49; // ecx
    Stream *v50; // ebx
    int v51; // edx
    unsigned __int16 v52; // di
    __int16 v53; // ax
    _WORD *v54; // eax
    unsigned __int16 *v55; // eax
    bool v56; // zf
    int v58; // edi
    Stream *v59; // ebx
    int v60; // edx
    unsigned __int16 v61; // di
    __int16 v62; // ax
    _WORD *v63; // eax
    unsigned __int16 *v64; // eax
    int v65; // eax
    unsigned int Stream_field_08; // eax
    int v67; // edi
    int v68; // ebx
    Stream *v69; // ecx
    int v70; // edx
    unsigned __int16 v71; // di
    __int16 v72; // ax
    _WORD *v73; // eax
    unsigned __int16 *v74; // eax
    double v75; // [esp+4h] [ebp-84h]
    double v76; // [esp+4h] [ebp-84h]
    double v77; // [esp+4h] [ebp-84h]
    double v78; // [esp+4h] [ebp-84h]
    int v79; // [esp+1Ch] [ebp-6Ch]
    int v80; // [esp+20h] [ebp-68h]
    int v81; // [esp+24h] [ebp-64h]
    int v82; // [esp+24h] [ebp-64h]
    int v83; // [esp+24h] [ebp-64h]
    int v84; // [esp+28h] [ebp-60h]
    int v85; // [esp+2Ch] [ebp-5Ch]
    int v86; // [esp+30h] [ebp-58h]
    int v87; // [esp+30h] [ebp-58h]
    int v88; // [esp+30h] [ebp-58h]
    int v89; // [esp+34h] [ebp-54h]
    int v90; // [esp+38h] [ebp-50h]
    int v91; // [esp+3Ch] [ebp-4Ch]
    _BYTE v93[12]; // [esp+44h] [ebp-44h] BYREF
    _DWORD v94[5]; // [esp+54h] [ebp-34h] BYREF
    int v95; // [esp+68h] [ebp-20h] BYREF
    int v96; // [esp+6Ch] [ebp-1Ch]
    int v97[2]; // [esp+70h] [ebp-18h] BYREF
    int v98; // [esp+78h] [ebp-10h] BYREF
    int v99; // [esp+7Ch] [ebp-Ch]
    int v100; // [esp+80h] [ebp-8h]
    int v101; // [esp+84h] [ebp-4h]
    int pad_0; // [esp+8Ch] [ebp+4h]
    int v103; // [esp+90h] [ebp+8h]
    int v104; // [esp+94h] [ebp+Ch]
    unsigned __int8 *v105; // [esp+98h] [ebp+10h]
    unsigned __int8 *v106; // [esp+98h] [ebp+10h]
    unsigned __int8 *v107; // [esp+98h] [ebp+10h]
    unsigned __int8 *v108; // [esp+98h] [ebp+10h]
    int v109; // [esp+9Ch] [ebp+14h]
    int v110; // [esp+9Ch] [ebp+14h]
    int v111; // [esp+9Ch] [ebp+14h]
    int v112; // [esp+9Ch] [ebp+14h]
    __int16 v113; // [esp+9Ch] [ebp+14h]
    __int16 v114; // [esp+9Ch] [ebp+14h]
    __int16 v115; // [esp+9Ch] [ebp+14h]

    v105 = (unsigned __int8 *)*a5; /*0x4bdf18*/
    __asm /*0x4bdf1f*/
    {
      fild [esp+7Ch+arg_C]
      fmul [esp+7Ch+arg_10]
    }
    LOWORD(v11) = Math::RoundToInt(v8); /*0x4bdf2d*/
    v12 = v11; /*0x4bdf34*/
    v91 = v11; /*0x4bdf39*/
    v106 = (unsigned __int8 *)a5[1]; /*0x4bdf3d*/
    __asm /*0x4bdf44*/
    {
      fild [esp+7Ch+arg_C]
      fmul [esp+7Ch+arg_10]
    }
    LOWORD(v13) = Math::RoundToInt(v8); /*0x4bdf52*/
    v14 = v13; /*0x4bdf59*/
    v90 = v13; /*0x4bdf5e*/
    v107 = (unsigned __int8 *)a5[2]; /*0x4bdf62*/
    __asm /*0x4bdf69*/
    {
      fild [esp+7Ch+arg_C]
      fmul [esp+7Ch+arg_10]
    }
    LOWORD(v15) = Math::RoundToInt(v8); /*0x4bdf77*/
    v89 = v15; /*0x4bdf7f*/
    if ( v12 < 8 && v14 < 8 && v15 < 8 ) /*0x4bdf8d*/
      return 0; /*0x4bdf8d*/
    v16 = (int *)(*((int (__thiscall **)(DSurface *, _DWORD *))this->DSurface_field_0x0 + 30))(this, &v94[1]); /*0x4bdf9c*/
    v17 = ClipRectIntersection(&v93[4], (int *)a2, v16, 0, 0); /*0x4bdfaf*/
    v18 = *v17; /*0x4bdfb6*/
    v98 = *v17; /*0x4bdfb8*/
    v19 = v17[1]; /*0x4bdfbc*/
    v99 = v19; /*0x4bdfbf*/
    v100 = v17[2]; /*0x4bdfc6*/
    v20 = v17[3]; /*0x4bdfca*/
    v101 = v20; /*0x4bdfcf*/
    if ( !v100 && !v20 ) /*0x4bdfd7*/
      return 0; /*0x4bdfd7*/
    v21 = v18 + *a3; /*0x4bdff3*/
    v22 = v18 + *a4; /*0x4bdff5*/
    v23 = a7; /*0x4bdffa*/
    v24 = v19 + a3[1]; /*0x4be001*/
    v25 = v21; /*0x4be003*/
    v26 = v19 + a4[1]; /*0x4be005*/
    v27 = a8; /*0x4be007*/
    v95 = v21; /*0x4be010*/
    v96 = v24; /*0x4be014*/
    v97[0] = v22; /*0x4be018*/
    v97[1] = v26; /*0x4be01c*/
    if ( v21 > v22 ) /*0x4be020*/
    {
      v25 = v22; /*0x4be022*/
      v23 = a8; /*0x4be024*/
      v27 = a7; /*0x4be026*/
      v95 = v22; /*0x4be02d*/
      v96 = v26; /*0x4be031*/
      v97[0] = v21; /*0x4be035*/
      v97[1] = v24; /*0x4be039*/
    }
    v94[2] = v97[1]; /*0x4be049*/
    v28 = v25; /*0x4be04e*/
    v29 = v96; /*0x4be050*/
    v94[1] = v97[0]; /*0x4be05c*/
    if ( !(unsigned __int8)ClipLine(&v95, v97, &v98) ) /*0x4be060*/
      return 0; /*0x4be060*/
    a7 = v27; /*0x4be07b*/
    v109 = v23; /*0x4be082*/
    if ( v97[0] != v94[1] || v97[1] != v94[2] ) /*0x4be08f*/
    {
      *(_DWORD *)&v93[4] = v28 - v97[0]; /*0x4be09e*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0a4*/
      *(_DWORD *)&v93[8] = v29 - v97[1]; /*0x4be0a8*/
      __asm /*0x4be0ac*/
      {
        fild [esp+84h+var_3C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v75); /*0x4be0c1*/
      LOWORD(v30) = Math::RoundToInt(v8); /*0x4be0c6*/
      a8 = v30; /*0x4be0d1*/
      *(_DWORD *)&v93[4] = v28 - v94[1]; /*0x4be0e0*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be0e6*/
      *(_DWORD *)&v93[8] = v29 - v94[2]; /*0x4be0ea*/
      __asm /*0x4be0ee*/
      {
        fild [esp+84h+var_3C]
        fild [esp+84h+arg_18]
        fstp [esp+84h+var_44+4]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v76); /*0x4be10e*/
      LOWORD(v31) = Math::RoundToInt(v8); /*0x4be116*/
      a8 = v31; /*0x4be11b*/
      __asm { fild [esp+7Ch+arg_18] } /*0x4be124*/
      a8 = v23 - v27; /*0x4be12d*/
      __asm /*0x4be134*/
      {
        fdivr [esp+7Ch+var_44+4]
        fild [esp+7Ch+arg_18]
        fmulp st(1), st
      }
      LOWORD(v32) = Math::RoundToInt(v8); /*0x4be141*/
      v33 = abs32(v32); /*0x4be149*/
      if ( v23 >= v27 ) /*0x4be14d*/
        a7 = v23 - v33; /*0x4be15e*/
      else
        a7 = v23 + v33; /*0x4be151*/
    }
    if ( v95 != v28 || v96 != v29 ) /*0x4be173*/
    {
      *(_DWORD *)&v93[4] = v95 - v94[1]; /*0x4be182*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be18a*/
      *(_DWORD *)&v93[8] = v96 - v94[2]; /*0x4be190*/
      __asm /*0x4be194*/
      {
        fild [esp+84h+var_3C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v77); /*0x4be1a9*/
      LOWORD(v34) = Math::RoundToInt(v8); /*0x4be1ae*/
      v110 = v34; /*0x4be1b3*/
      *(_DWORD *)&v93[4] = v28 - v94[1]; /*0x4be1c0*/
      __asm { fild dword ptr [esp+84h+var_44+4] } /*0x4be1c8*/
      *(_DWORD *)&v93[8] = v29 - v94[2]; /*0x4be1ce*/
      __asm /*0x4be1d2*/
      {
        fild [esp+84h+var_3C]
        fild [esp+84h+arg_10]
        fstp qword ptr [esp+84h+var_34+4]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fstp [esp+84h+var_88+4]; double
        fstp st
        fstp st
      }
      Math::Sqrt(v78); /*0x4be1f2*/
      LOWORD(v35) = Math::RoundToInt(v8); /*0x4be1fa*/
      v111 = v35; /*0x4be1ff*/
      __asm { fild [esp+7Ch+arg_10] } /*0x4be208*/
      v112 = v23 - v27; /*0x4be211*/
      __asm /*0x4be218*/
      {
        fdivr qword ptr [esp+7Ch+var_34+4]
        fild [esp+7Ch+arg_10]
        fmulp st(1), st
      }
      LOWORD(v36) = Math::RoundToInt(v8); /*0x4be225*/
      v37 = abs32(v36); /*0x4be22d*/
      if ( v27 <= v23 ) /*0x4be231*/
        v109 = v27 + v37; /*0x4be240*/
      else
        v109 = v27 - v37; /*0x4be235*/
    }
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this); /*0x4be24f*/
    v38 = (*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v95, v96); /*0x4be269*/
    v108 = (unsigned __int8 *)v38; /*0x4be26d*/
    if ( !g_ZBufferDescriptor ) /*0x4be274*/
      return 0; /*0x4be274*/
    Stream_field_04 = g_ZBufferDescriptor->Stream_field_04; /*0x4be27e*/
    v94[2] = v96; /*0x4be285*/
    SamplePosition = (_WORD *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v95, v96 - Stream_field_04); /*0x4be29c*/
    v41 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4); /*0x4be2a2*/
    v94[2] = v96; /*0x4be2a5*/
    v42 = (unsigned __int16 *)StreamClass::ReadAndSeek(*(int **)&stru_87E790.__pad_D8[60], v95, v96 - v41); /*0x4be2b6*/
    v85 = -1; /*0x4be2c1*/
    LOWORD(v41) = LOWORD(g_ZBufferDescriptor->Stream_field_04) + LOWORD(g_ZBufferDescriptor[1].Stream_field_10); /*0x4be2cd*/
    pad_0 = (int)g_ZBufferDescriptor[2].m_Stream->__pad_0; /*0x4be2d4*/
    a8 = v109 + v41 - v96 - v99; /*0x4be2ea*/
    if ( !v38 ) /*0x4be2f1*/
      return 0; /*0x4be9b9*/
    v86 = v97[0] - v95; /*0x4be305*/
    v43 = v97[1] - v96; /*0x4be310*/
    v44 = a7 - v109; /*0x4be31a*/
    v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4be31c*/
    v80 = v45; /*0x4be321*/
    if ( v43 < 0 ) /*0x4be325*/
    {
      v85 = 1; /*0x4be32e*/
      v80 = -v45; /*0x4be33a*/
      pad_0 = -pad_0; /*0x4be33e*/
    }
    v84 = 1; /*0x4be347*/
    v46 = abs32(v43); /*0x4be354*/
    if ( v44 < 0 ) /*0x4be358*/
      v84 = -1; /*0x4be35a*/
    LOWORD(a7) = 0; /*0x4be364*/
    v47 = abs32(v44); /*0x4be377*/
    BYTE2(a7) = 0; /*0x4be37f*/
    v104 = 2 * v86; /*0x4be38a*/
    v103 = 2 * v46; /*0x4be394*/
    v79 = 2 * v47; /*0x4be39e*/
    if ( v47 <= v86 || v47 <= v46 ) /*0x4be3aa*/
    {
      if ( v86 <= v46 ) /*0x4be5aa*/
      {
        v67 = v104 - v46; /*0x4be7b5*/
        v68 = v79 - v46; /*0x4be7b7*/
        *(_DWORD *)&v93[4] = v104 - v46; /*0x4be7bb*/
        *(_DWORD *)v93 = v79 - v46; /*0x4be7bf*/
        if ( v46 > 0 ) /*0x4be7c3*/
        {
          v94[1] = v46; /*0x4be7d0*/
          v69 = g_ZBufferDescriptor; /*0x4be7d4*/
          v83 = 0; /*0x4be7da*/
          v88 = 2 * pad_0; /*0x4be7e5*/
          do /*0x4be99b*/
          {
            v70 = *v42; /*0x4be7f6*/
            if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be7fa*/
            {
              v71 = *(_WORD *)&v108[v83]; /*0x4be80b*/
              LOBYTE(v115) = (unsigned __int8)(v71 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be82a*/
              HIBYTE(v115) = (unsigned __int8)(v71 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be845*/
              LOWORD(a7) = v115; /*0x4be861*/
              BYTE2(a7) = (unsigned __int8)(v71 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be870*/
              v72 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v70) >> 7, (v90 * v70) >> 7, (v89 * v70) >> 7); /*0x4be895*/
              v67 = *(_DWORD *)&v93[4]; /*0x4be89e*/
              *(_WORD *)&v108[v83] = v72; /*0x4be8a2*/
              v69 = g_ZBufferDescriptor; /*0x4be8a6*/
              v68 = *(_DWORD *)v93; /*0x4be8ac*/
            }
            if ( v67 > 0 ) /*0x4be8b2*/
            {
              ++SamplePosition; /*0x4be8bb*/
              v83 += 2; /*0x4be8c3*/
              if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be8c7*/
                SamplePosition = (_WORD *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be8c9*/
              v67 -= v103; /*0x4be8cc*/
            }
            if ( v68 > 0 ) /*0x4be8d5*/
            {
              a8 += v84; /*0x4be8eb*/
              v68 -= v103; /*0x4be8f2*/
            }
            v67 += v104; /*0x4be8ff*/
            v68 += v79; /*0x4be908*/
            v108 += v80; /*0x4be914*/
            SamplePosition = (_WORD *)((char *)SamplePosition + v88); /*0x4be922*/
            *(_DWORD *)&v93[4] = v67; /*0x4be924*/
            *(_DWORD *)v93 = v68; /*0x4be92a*/
            if ( pad_0 <= 0 ) /*0x4be92e*/
            {
              v73 = SamplePosition; /*0x4be93d*/
              if ( (unsigned int)SamplePosition < v69[1].Stream_field_04 ) /*0x4be941*/
                v73 = (_WORD *)((char *)SamplePosition + v69[1].Stream_field_0C); /*0x4be946*/
              SamplePosition = v73; /*0x4be948*/
            }
            else if ( (unsigned int)SamplePosition >= v69[1].Stream_field_08 ) /*0x4be933*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v69[1].Stream_field_0C); /*0x4be935*/
            }
            v42 = (unsigned __int16 *)((char *)v42 + v88); /*0x4be955*/
            if ( pad_0 <= 0 ) /*0x4be959*/
            {
              v74 = v42; /*0x4be970*/
              if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be975*/
                v74 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be97a*/
              v42 = v74; /*0x4be97c*/
            }
            else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be963*/
            {
              v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be965*/
            }
            v56 = v94[1] == 1; /*0x4be98f*/
            a8 += v85; /*0x4be990*/
            --v94[1]; /*0x4be997*/
          }
          while ( !v56 ); /*0x4be99b*/
        }
      }
      else
      {
        v58 = v103 - v86; /*0x4be5bf*/
        *(_DWORD *)&v93[4] = v103 - v86; /*0x4be5c3*/
        *(_DWORD *)v93 = v79 - v86; /*0x4be5c9*/
        v82 = 0; /*0x4be5cd*/
        if ( v86 > 0 ) /*0x4be5d5*/
        {
          v59 = g_ZBufferDescriptor; /*0x4be5db*/
          do /*0x4be78f*/
          {
            v60 = *v42; /*0x4be5ee*/
            if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be5f2*/
            {
              v61 = *(_WORD *)&v108[2 * v82]; /*0x4be603*/
              LOBYTE(v114) = (unsigned __int8)(v61 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be622*/
              HIBYTE(v114) = (unsigned __int8)(v61 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be63d*/
              LOWORD(a7) = v114; /*0x4be659*/
              BYTE2(a7) = (unsigned __int8)(v61 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be668*/
              v62 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v60) >> 7, (v90 * v60) >> 7, (v89 * v60) >> 7); /*0x4be68d*/
              v58 = *(_DWORD *)&v93[4]; /*0x4be696*/
              *(_WORD *)&v108[2 * v82] = v62; /*0x4be69a*/
              v59 = g_ZBufferDescriptor; /*0x4be69e*/
            }
            if ( v58 > 0 ) /*0x4be6a6*/
            {
              v58 -= v104; /*0x4be6c0*/
              v108 += v80; /*0x4be6c9*/
              SamplePosition += pad_0; /*0x4be6d3*/
              if ( pad_0 <= 0 ) /*0x4be6d7*/
              {
                v63 = SamplePosition; /*0x4be6e6*/
                if ( (unsigned int)SamplePosition < v59[1].Stream_field_04 ) /*0x4be6ea*/
                  v63 = (_WORD *)((char *)SamplePosition + v59[1].Stream_field_0C); /*0x4be6ef*/
                SamplePosition = v63; /*0x4be6f1*/
              }
              else if ( (unsigned int)SamplePosition >= v59[1].Stream_field_08 ) /*0x4be6dc*/
              {
                SamplePosition = (_WORD *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be6de*/
              }
              v42 += pad_0; /*0x4be6fa*/
              if ( pad_0 <= 0 ) /*0x4be6fe*/
              {
                v64 = v42; /*0x4be715*/
                if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be71a*/
                  v64 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be71f*/
                v42 = v64; /*0x4be721*/
              }
              else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be708*/
              {
                v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be70a*/
              }
              a8 += v85; /*0x4be730*/
            }
            v65 = *(_DWORD *)v93; /*0x4be737*/
            if ( *(int *)v93 > 0 ) /*0x4be73d*/
            {
              a8 += v84; /*0x4be74c*/
              v65 = *(_DWORD *)v93 - v104; /*0x4be75a*/
            }
            ++SamplePosition; /*0x4be769*/
            *(_DWORD *)v93 = v79 + v65; /*0x4be76c*/
            Stream_field_08 = v59[1].Stream_field_08; /*0x4be770*/
            v58 += v103; /*0x4be773*/
            *(_DWORD *)&v93[4] = v58; /*0x4be777*/
            if ( (unsigned int)SamplePosition >= Stream_field_08 ) /*0x4be77b*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v59[1].Stream_field_0C); /*0x4be77d*/
            ++v82; /*0x4be78b*/
          }
          while ( v82 < v86 ); /*0x4be78f*/
        }
      }
    }
    else
    {
      v48 = v103 - v47; /*0x4be3be*/
      v49 = v104 - v47; /*0x4be3c0*/
      *(_DWORD *)v93 = v103 - v47; /*0x4be3c4*/
      v87 = v104 - v47; /*0x4be3c8*/
      if ( v47 > 0 ) /*0x4be3cc*/
      {
        v50 = g_ZBufferDescriptor; /*0x4be3d2*/
        v81 = 0; /*0x4be3d8*/
        *(_DWORD *)&v93[4] = v47; /*0x4be3e0*/
        do /*0x4be58d*/
        {
          v51 = *v42; /*0x4be3f1*/
          if ( (unsigned __int16)a8 < *SamplePosition ) /*0x4be3f5*/
          {
            v52 = *(_WORD *)&v108[v81]; /*0x4be406*/
            LOBYTE(v113) = (unsigned __int8)(v52 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x4be425*/
            HIBYTE(v113) = (unsigned __int8)(v52 >> g_BitMask_Green) << g_BitMask_Blue; /*0x4be440*/
            LOWORD(a7) = v113; /*0x4be45c*/
            BYTE2(a7) = (unsigned __int8)(v52 >> g_BitShift_Blue) << g_BitMask_Red; /*0x4be46b*/
            v53 = BlendColorPack((unsigned __int8 *)&a7, (v91 * v51) >> 7, (v90 * v51) >> 7, (v89 * v51) >> 7); /*0x4be490*/
            v48 = *(_DWORD *)v93; /*0x4be499*/
            v49 = v87; /*0x4be49d*/
            *(_WORD *)&v108[v81] = v53; /*0x4be4a1*/
            v50 = g_ZBufferDescriptor; /*0x4be4a5*/
          }
          if ( v48 > 0 ) /*0x4be4ad*/
          {
            v108 += v80; /*0x4be4c4*/
            v48 -= v79; /*0x4be4d2*/
            SamplePosition += pad_0; /*0x4be4d7*/
            if ( pad_0 <= 0 ) /*0x4be4db*/
            {
              v54 = SamplePosition; /*0x4be4ea*/
              if ( (unsigned int)SamplePosition < v50[1].Stream_field_04 ) /*0x4be4ec*/
                v54 = (_WORD *)((char *)SamplePosition + v50[1].Stream_field_0C); /*0x4be4f1*/
              SamplePosition = v54; /*0x4be4f3*/
            }
            else if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be4e0*/
            {
              SamplePosition = (_WORD *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be4e2*/
            }
            v42 += pad_0; /*0x4be4f5*/
            if ( pad_0 <= 0 ) /*0x4be4f9*/
            {
              v55 = v42; /*0x4be510*/
              if ( (unsigned int)v42 < *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 24) ) /*0x4be515*/
                v55 = (unsigned __int16 *)((char *)v42 + *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be51a*/
              v42 = v55; /*0x4be51c*/
            }
            else if ( (unsigned int)v42 >= *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 28) ) /*0x4be503*/
            {
              v42 = (unsigned __int16 *)((char *)v42 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 32)); /*0x4be505*/
            }
            v49 = v87; /*0x4be52b*/
            a8 += v85; /*0x4be52f*/
          }
          if ( v49 > 0 ) /*0x4be538*/
          {
            ++SamplePosition; /*0x4be541*/
            v81 += 2; /*0x4be549*/
            if ( (unsigned int)SamplePosition >= v50[1].Stream_field_08 ) /*0x4be54d*/
              SamplePosition = (_WORD *)((char *)SamplePosition - v50[1].Stream_field_0C); /*0x4be54f*/
            v49 -= v79; /*0x4be552*/
          }
          a8 += v84; /*0x4be56a*/
          v49 += v104; /*0x4be578*/
          v48 += v103; /*0x4be57e*/
          v56 = *(_DWORD *)&v93[4] == 1; /*0x4be580*/
          v87 = v49; /*0x4be581*/
          *(_QWORD *)v93 = __PAIR64__(*(unsigned int *)&v93[4], v48) - 0x100000000LL; /*0x4be589*/
        }
        while ( !v56 ); /*0x4be58d*/
      }
    }
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4be599*/
    return 1; /*0x4be59c*/
}
// truth-filled 0x4C0E30 (G42.52 truth-emitting generator)
bool gamemd::XSurface::DrawStippledRect(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned short a2, bool a3)
{
    int *v6; // eax
    int v7; // ecx
    int v8; // eax
    int v9; // ecx
    int v10; // esi
    int v11; // edx
    int v12; // eax
    _WORD *v13; // esi
    int v14; // edx
    __int16 *v15; // ecx
    _DWORD *v16; // eax
    int v17; // ecx
    int v18; // eax
    __int16 *v19; // ebp
    int v20; // edx
    _DWORD *v21; // eax
    int v22; // ebx
    int v23; // edi
    int v24; // eax
    int v25; // eax
    int v26; // ebp
    int v27; // edx
    int v28; // ecx
    _DWORD *v29; // eax
    __int16 *v30; // edi
    int v31; // edx
    _DWORD *v32; // ecx
    __int16 *v33; // eax
    int v34; // edi
    int v35; // edx
    __int16 *v36; // ecx
    _DWORD *v37; // eax
    int v38; // ecx
    int v39; // eax
    __int16 *v40; // ebp
    int v41; // edx
    _DWORD *v42; // eax
    int v43; // ebx
    int v44; // edi
    int v45; // eax
    int v46; // ebp
    int v47; // eax
    int v48; // ecx
    int v49; // edx
    _DWORD *v50; // eax
    __int16 *v51; // edi
    int v53; // edx
    _DWORD *v54; // ecx
    int v55; // edi
    int v56; // [esp+Ch] [ebp-3Ch]
    int v57; // [esp+Ch] [ebp-3Ch]
    int v58; // [esp+10h] [ebp-38h]
    int v59; // [esp+10h] [ebp-38h]
    int v60; // [esp+10h] [ebp-38h]
    _DWORD v62[4]; // [esp+18h] [ebp-30h] BYREF
    int v63; // [esp+28h] [ebp-20h] BYREF
    int v64; // [esp+2Ch] [ebp-1Ch]
    int v65; // [esp+30h] [ebp-18h] BYREF
    int v66; // [esp+34h] [ebp-14h]
    int v67; // [esp+38h] [ebp-10h] BYREF
    int v68; // [esp+3Ch] [ebp-Ch]
    int v69; // [esp+40h] [ebp-8h]
    int v70; // [esp+44h] [ebp-4h]
    int v71; // [esp+4Ch] [ebp+4h]
    __int16 *v72; // [esp+50h] [ebp+8h]
    int v73; // [esp+58h] [ebp+10h]
    int v74; // [esp+58h] [ebp+10h]

    if ( (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this) != 2 ) /*0x4c0e45*/
      return 0; /*0x4c0e45*/
    v6 = (int *)(*((int (__thiscall **)(DSurface *, _DWORD *))this->DSurface_field_0x0 + 30))(this, v62); /*0x4c0e55*/
    v67 = *v6; /*0x4c0e5a*/
    v68 = v6[1]; /*0x4c0e61*/
    v69 = v6[2]; /*0x4c0e68*/
    v70 = v6[3]; /*0x4c0e73*/
    v7 = v68 + a2[1]; /*0x4c0e7e*/
    v63 = v67 + *a2; /*0x4c0e80*/
    v64 = v7; /*0x4c0e84*/
    v8 = v67 + *a3; /*0x4c0e93*/
    v66 = v68 + a3[1]; /*0x4c0e95*/
    v65 = v8; /*0x4c0ea6*/
    if ( !(unsigned __int8)ClipLine(&v63, &v65, &v67) ) /*0x4c0eaa*/
      return 0; /*0x4c0eaa*/
    v9 = v63; /*0x4c0eb7*/
    if ( v63 <= v65 ) /*0x4c0ec1*/
    {
      v12 = v64; /*0x4c0ee1*/
    }
    else
    {
      v10 = v64; /*0x4c0ec3*/
      v11 = v63; /*0x4c0ec7*/
      v9 = v65; /*0x4c0ec9*/
      v12 = v66; /*0x4c0ecb*/
      v63 = v65; /*0x4c0ecf*/
      v64 = v66; /*0x4c0ed3*/
      v65 = v11; /*0x4c0ed7*/
      v66 = v10; /*0x4c0edb*/
    }
    v62[1] = v12; /*0x4c0eeb*/
    v13 = (_WORD *)StreamClass::ReadAndSeek( /*0x4c0f01*/
                     *(int **)&stru_87E790.__pad_D8[60],
                     v9,
                     v12 - *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4));
    v71 = *(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f10*/
    if ( v64 > v66 ) /*0x4c0f14*/
      v71 = -*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 40); /*0x4c0f18*/
    v72 = (__int16 *)(*((int (__thiscall **)(DSurface *, int, int))this->DSurface_field_0x0 + 23))(this, v63, v64); /*0x4c0f2c*/
    if ( !v72 ) /*0x4c0f30*/
      return 0; /*0x4c1428*/
    if ( a5 ) /*0x4c0f45*/
    {
      if ( v64 == v66 ) /*0x4c0f4d*/
      {
        v14 = 0; /*0x4c0f57*/
        if ( v65 - v63 >= 0 ) /*0x4c0f5b*/
        {
          v15 = v72; /*0x4c0f61*/
          v16 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0f69*/
          do /*0x4c0fae*/
          {
            if ( !*v13 ) /*0x4c0f72*/
            {
              *v15 = a4; /*0x4c0f78*/
              v16 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c0f7b*/
            }
            if ( v71 <= 0 ) /*0x4c0f82*/
            {
              if ( (unsigned int)++v13 < v16[6] ) /*0x4c0f9b*/
                v13 = (_WORD *)((char *)v13 + v16[8]); /*0x4c0f9d*/
            }
            else if ( (unsigned int)++v13 >= v16[7] ) /*0x4c0f8c*/
            {
              v13 = (_WORD *)((char *)v13 - v16[8]); /*0x4c0f8e*/
            }
            ++v14; /*0x4c0fa4*/
            ++v15; /*0x4c0fa9*/
          }
          while ( v14 <= v65 - v63 ); /*0x4c0fae*/
        }
      }
      else if ( v63 == v65 ) /*0x4c0fcf*/
      {
        if ( v64 <= v66 ) /*0x4c0fd7*/
          v17 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fef*/
        else
          v17 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c0fe3*/
        v18 = abs32(v66 - v64); /*0x4c0ffe*/
        if ( v18 >= 0 ) /*0x4c1000*/
        {
          v19 = v72; /*0x4c100e*/
          v20 = v18 + 1; /*0x4c1012*/
          v21 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1015*/
          do /*0x4c1045*/
          {
            if ( !*v13 ) /*0x4c101a*/
            {
              *v19 = a4; /*0x4c1020*/
              v21 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1024*/
            }
            v13 += v71; /*0x4c102b*/
            if ( v71 <= 0 ) /*0x4c102e*/
            {
              if ( (unsigned int)v13 < v21[6] ) /*0x4c103d*/
                v13 = (_WORD *)((char *)v13 + v21[8]); /*0x4c103f*/
            }
            else if ( (unsigned int)v13 >= v21[7] ) /*0x4c1033*/
            {
              v13 = (_WORD *)((char *)v13 - v21[8]); /*0x4c1035*/
            }
            v19 = (__int16 *)((char *)v19 + v17); /*0x4c1042*/
            --v20; /*0x4c1044*/
          }
          while ( v20 ); /*0x4c1045*/
        }
      }
      else
      {
        v22 = v65 - v63; /*0x4c1063*/
        v23 = v66 - v64; /*0x4c1067*/
        v24 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1069*/
        v73 = v24; /*0x4c106e*/
        if ( v23 < 0 ) /*0x4c1072*/
          v73 = -v24; /*0x4c1076*/
        v25 = abs32(v23); /*0x4c107f*/
        v62[0] = 2 * v22; /*0x4c1086*/
        v26 = 2 * v25; /*0x4c108a*/
        v56 = 2 * v25; /*0x4c108d*/
        if ( v22 <= v25 ) /*0x4c1091*/
        {
          v31 = 2 * v22 - v25; /*0x4c1126*/
          if ( v25 > 0 ) /*0x4c112a*/
          {
            v32 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1130*/
            v58 = v25; /*0x4c113a*/
            v33 = v72; /*0x4c113e*/
            v34 = 0; /*0x4c1142*/
            while ( 1 ) /*0x4c114a*/
            {
              if ( !*v13 ) /*0x4c114a*/
              {
                v33[v34] = a4; /*0x4c1155*/
                v32 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1159*/
              }
              if ( v31 > 0 ) /*0x4c1161*/
              {
                v31 -= v26; /*0x4c1163*/
                ++v13; /*0x4c1168*/
                ++v34; /*0x4c116b*/
                if ( (unsigned int)v13 >= v32[7] ) /*0x4c1170*/
                  v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c1172*/
              }
              v13 += v71; /*0x4c1179*/
              v31 += v62[0]; /*0x4c117c*/
              v33 = (__int16 *)((char *)v33 + v73); /*0x4c1182*/
              if ( v71 <= 0 ) /*0x4c1186*/
              {
                if ( (unsigned int)v13 < v32[6] ) /*0x4c1195*/
                  v13 = (_WORD *)((char *)v13 + v32[8]); /*0x4c1197*/
              }
              else if ( (unsigned int)v13 >= v32[7] ) /*0x4c118b*/
              {
                v13 = (_WORD *)((char *)v13 - v32[8]); /*0x4c118d*/
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
            v29 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c10a5*/
            v30 = v72; /*0x4c10aa*/
            do /*0x4c110f*/
            {
              if ( !*v13 ) /*0x4c10ae*/
              {
                v30[v27] = a4; /*0x4c10b9*/
                v29 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c10bd*/
              }
              if ( v28 > 0 ) /*0x4c10c4*/
              {
                v30 = (__int16 *)((char *)v30 + v73); /*0x4c10ca*/
                v13 += v71; /*0x4c10d0*/
                if ( (unsigned int)v13 >= v29[7] ) /*0x4c10d8*/
                  v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10da*/
                v28 -= 2 * v22; /*0x4c10e0*/
              }
              if ( v71 <= 0 ) /*0x4c10e8*/
              {
                if ( (unsigned int)++v13 < v29[6] ) /*0x4c1101*/
                  v13 = (_WORD *)((char *)v13 + v29[8]); /*0x4c1103*/
              }
              else if ( (unsigned int)++v13 >= v29[7] ) /*0x4c10f2*/
              {
                v13 = (_WORD *)((char *)v13 - v29[8]); /*0x4c10f4*/
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
      if ( v65 - v63 >= 0 ) /*0x4c11ca*/
      {
        v36 = v72; /*0x4c11d0*/
        v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c11d8*/
        do /*0x4c121d*/
        {
          if ( *v13 ) /*0x4c11e1*/
          {
            *v36 = a4; /*0x4c11e7*/
            v37 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c11ea*/
          }
          if ( v71 <= 0 ) /*0x4c11f1*/
          {
            if ( (unsigned int)++v13 < v37[6] ) /*0x4c120a*/
              v13 = (_WORD *)((char *)v13 + v37[8]); /*0x4c120c*/
          }
          else if ( (unsigned int)++v13 >= v37[7] ) /*0x4c11fb*/
          {
            v13 = (_WORD *)((char *)v13 - v37[8]); /*0x4c11fd*/
          }
          ++v35; /*0x4c1213*/
          ++v36; /*0x4c1218*/
        }
        while ( v35 <= v65 - v63 ); /*0x4c121d*/
      }
    }
    else if ( v63 == v65 ) /*0x4c123e*/
    {
      if ( v64 <= v66 ) /*0x4c1246*/
        v38 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c125e*/
      else
        v38 = -(*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c1252*/
      v39 = abs32(v66 - v64); /*0x4c126d*/
      if ( v39 >= 0 ) /*0x4c126f*/
      {
        v40 = v72; /*0x4c127d*/
        v41 = v39 + 1; /*0x4c1281*/
        v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1284*/
        do /*0x4c12b4*/
        {
          if ( *v13 ) /*0x4c1289*/
          {
            *v40 = a4; /*0x4c128f*/
            v42 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1293*/
          }
          v13 += v71; /*0x4c129a*/
          if ( v71 <= 0 ) /*0x4c129d*/
          {
            if ( (unsigned int)v13 < v42[6] ) /*0x4c12ac*/
              v13 = (_WORD *)((char *)v13 + v42[8]); /*0x4c12ae*/
          }
          else if ( (unsigned int)v13 >= v42[7] ) /*0x4c12a2*/
          {
            v13 = (_WORD *)((char *)v13 - v42[8]); /*0x4c12a4*/
          }
          v40 = (__int16 *)((char *)v40 + v38); /*0x4c12b1*/
          --v41; /*0x4c12b3*/
        }
        while ( v41 ); /*0x4c12b4*/
      }
    }
    else
    {
      v43 = v65 - v63; /*0x4c12cf*/
      v44 = v66 - v64; /*0x4c12d5*/
      v45 = (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4c12d9*/
      v46 = v45; /*0x4c12dc*/
      v59 = v45; /*0x4c12e0*/
      if ( v44 < 0 ) /*0x4c12e4*/
      {
        v46 = -v45; /*0x4c12e6*/
        v59 = -v45; /*0x4c12e8*/
      }
      v47 = abs32(v44); /*0x4c12f1*/
      v57 = 2 * v43; /*0x4c12f8*/
      v74 = 2 * v47; /*0x4c12ff*/
      if ( v43 <= v47 ) /*0x4c1303*/
      {
        v53 = 2 * v43 - v47; /*0x4c1395*/
        if ( v47 > 0 ) /*0x4c1399*/
        {
          v54 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c139b*/
          v60 = v47; /*0x4c13a1*/
          v55 = 0; /*0x4c13a9*/
          do /*0x4c140f*/
          {
            if ( *v13 ) /*0x4c13ab*/
            {
              v72[v55] = a4; /*0x4c13b5*/
              v54 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c13b9*/
            }
            if ( v53 > 0 ) /*0x4c13c1*/
            {
              ++v13; /*0x4c13c7*/
              v53 -= v74; /*0x4c13ca*/
              ++v55; /*0x4c13cf*/
              if ( (unsigned int)v13 >= v54[7] ) /*0x4c13d4*/
                v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13d6*/
            }
            v53 += v57; /*0x4c13dd*/
            v72 = (__int16 *)((char *)v72 + v46); /*0x4c13e5*/
            v13 += v71; /*0x4c13ef*/
            if ( v71 <= 0 ) /*0x4c13f2*/
            {
              if ( (unsigned int)v13 < v54[6] ) /*0x4c1401*/
                v13 = (_WORD *)((char *)v13 + v54[8]); /*0x4c1403*/
            }
            else if ( (unsigned int)v13 >= v54[7] ) /*0x4c13f7*/
            {
              v13 = (_WORD *)((char *)v13 - v54[8]); /*0x4c13f9*/
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
          v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c1315*/
          v51 = v72; /*0x4c131a*/
          do /*0x4c137e*/
          {
            if ( *v13 ) /*0x4c131e*/
            {
              v51[v49] = a4; /*0x4c1329*/
              v50 = *(_DWORD **)&stru_87E790.__pad_D8[60]; /*0x4c132d*/
            }
            if ( v48 > 0 ) /*0x4c1334*/
            {
              v51 = (__int16 *)((char *)v51 + v59); /*0x4c133a*/
              v13 += v71; /*0x4c1340*/
              if ( (unsigned int)v13 >= v50[7] ) /*0x4c1348*/
                v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c134a*/
              v48 -= v57; /*0x4c134d*/
            }
            if ( v71 <= 0 ) /*0x4c1357*/
            {
              if ( (unsigned int)++v13 < v50[6] ) /*0x4c1370*/
                v13 = (_WORD *)((char *)v13 + v50[8]); /*0x4c1372*/
            }
            else if ( (unsigned int)++v13 >= v50[7] ) /*0x4c1361*/
            {
              v13 = (_WORD *)((char *)v13 - v50[8]); /*0x4c1363*/
            }
            v48 += v74; /*0x4c1379*/
            ++v49; /*0x4c137b*/
          }
          while ( v49 < v43 ); /*0x4c137e*/
        }
      }
    }
    (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4c1386*/
    return 1; /*0x4c0fba*/
}
// truth-filled 0x4BB830 (G42.52 truth-emitting generator)
bool gamemd::XSurface::FillRectWithFlags(gamemd::RectangleStruct const& a0, gamemd::ColorStruct const& a1, int a2)
{
    int v5; // ecx
    int v6; // edi
    int *v8; // eax
    _DWORD *v9; // eax
    int v10; // ecx
    unsigned int v11; // ebp
    unsigned int v12; // esi
    _DWORD *v13; // eax
    int v14; // eax
    int v15; // edx
    unsigned int v16; // edi
    int v17; // edx
    int v18; // ebx
    int v19; // ebx
    int v20; // eax
    unsigned int v21; // ecx
    int v22; // edx
    int v23; // esi
    int v24; // edi
    unsigned __int16 *v25; // eax
    int v26; // eax
    __int16 v27; // bp
    int v28; // ebx
    int v29; // [esp+10h] [ebp-5Ch]
    __int16 v30; // [esp+14h] [ebp-58h]
    __int16 v31; // [esp+18h] [ebp-54h]
    int v32; // [esp+1Ch] [ebp-50h]
    unsigned __int16 v33; // [esp+20h] [ebp-4Ch]
    unsigned int v34; // [esp+24h] [ebp-48h]
    int v35; // [esp+28h] [ebp-44h]
    unsigned int v36; // [esp+2Ch] [ebp-40h]
    __int16 i; // [esp+38h] [ebp-34h]
    _DWORD v38[4]; // [esp+3Ch] [ebp-30h] BYREF
    _DWORD v39[2]; // [esp+4Ch] [ebp-20h] BYREF
    int v40; // [esp+54h] [ebp-18h]
    int v41; // [esp+58h] [ebp-14h]
    _DWORD v42[4]; // [esp+5Ch] [ebp-10h] BYREF
    DSurface *thisa; // [esp+70h] [ebp+4h]
    _WORD *v44; // [esp+74h] [ebp+8h]
    unsigned int v45; // [esp+78h] [ebp+Ch]

    v6 = v5; /*0x4bb837*/
    v32 = v5; /*0x4bb839*/
    if ( (*(int (**)(void))(*(_DWORD *)v5 + 112))() < 2 ) /*0x4bb845*/
      return 0; /*0x4bb847*/
    if ( (int)this->DSurface_field_0x8 <= 0 || (int)this->DSurface_field_0xC <= 0 ) /*0x4bb863*/
      return 0; /*0x4bb865*/
    v8 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 120))(v6, v38); /*0x4bb87a*/
    v9 = ClipRectIntersection(v42, v8, (int *)this, 0, 0); /*0x4bb888*/
    v39[0] = *v9; /*0x4bb891*/
    v39[1] = v9[1]; /*0x4bb898*/
    v40 = v9[2]; /*0x4bb89f*/
    v10 = v9[3]; /*0x4bb8a3*/
    v41 = v10; /*0x4bb8a8*/
    if ( v40 <= 0 || v10 <= 0 ) /*0x4bb8b0*/
      return 0; /*0x4bb8b2*/
    v11 = 0xFFu >> g_BitShift_Green_0 << g_BitShift_Red; /*0x4bb8de*/
    v31 = v11; /*0x4bb8f1*/
    v12 = 0xFFu >> g_BitMask_Blue << g_BitMask_Green; /*0x4bb8f5*/
    v30 = v12; /*0x4bb908*/
    v34 = 0xFFu >> g_BitMask_Red << g_BitShift_Blue; /*0x4bb917*/
    v13 = CellStruct::Copy((CellStruct *)v39, v38); /*0x4bb91b*/
    v35 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 92))(v6, *v13, v13[1]); /*0x4bb938*/
    if ( !v35 ) /*0x4bb93c*/
      return 0; /*0x4bb93e*/
    v14 = (int)a4; /*0x4bb94a*/
    if ( (unsigned int)a4 > 0x64 ) /*0x4bb951*/
      v14 = 100; /*0x4bb953*/
    v15 = (1374389535 * (unsigned __int64)(unsigned int)(255 * v14)) >> 32; /*0x4bb967*/
    v16 = 255 * v14 / 0x64u; /*0x4bb970*/
    v33 = 255 - v16; /*0x4bb97b*/
    v45 = v16; /*0x4bb983*/
    thisa = 0; /*0x4bb987*/
    LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(a3 + 2) >> g_BitMask_Red); /*0x4bb99a*/
    LOWORD(v15) = (unsigned __int8)(*(_BYTE *)(a3 + 1) >> g_BitMask_Blue); /*0x4bb9b1*/
    v17 = v15 << g_BitMask_Green; /*0x4bb9b5*/
    v18 = v17 | (a2 << g_BitShift_Blue); /*0x4bb9c5*/
    LOWORD(v17) = (unsigned __int8)(*(_BYTE *)a3 >> g_BitShift_Green_0); /*0x4bb9ca*/
    v19 = (v17 << g_BitShift_Red) | v18; /*0x4bb9d2*/
    for ( i = v19; (int)thisa < v41; thisa = (DSurface *)((char *)thisa + 1) ) /*0x4bb9da*/
    {
      v29 = 0; /*0x4bb9ed*/
      v20 = (_DWORD)thisa * ((*(int (__thiscall **)(int))(*(_DWORD *)v32 + 116))(v32) / 2); /*0x4bb9fa*/
      if ( v40 > 0 ) /*0x4bba01*/
      {
        v11 = (unsigned __int16)v11; /*0x4bba0f*/
        v21 = (unsigned __int16)v12; /*0x4bba15*/
        v22 = v16 * (v12 & (unsigned __int16)v19); /*0x4bba23*/
        v23 = v16 * (unsigned __int16)(v19 & v11); /*0x4bba26*/
        v24 = v45 * (unsigned __int16)(v19 & v34); /*0x4bba4b*/
        v25 = (unsigned __int16 *)(v35 + 2 * v20); /*0x4bba50*/
        v36 = (unsigned __int16)v11; /*0x4bba53*/
        v44 = v25; /*0x4bba57*/
        while ( 1 ) /*0x4bba68*/
        {
          v26 = *v25; /*0x4bba68*/
          v27 = v30 & ((v22 + v33 * (v26 & v21)) >> 8) | v31 & ((v23 + v33 * (v26 & v11)) >> 8); /*0x4bba8b*/
          v28 = (unsigned __int16)(v26 & v34); /*0x4bba91*/
          v25 = v44 + 1; /*0x4bba9c*/
          *v44++ = ((v24 + (unsigned int)v33 * v28) >> 8) | v27; /*0x4bbaa8*/
          if ( ++v29 >= v40 ) /*0x4bbabb*/
            break; /*0x4bbabb*/
          v11 = v36; /*0x4bba5d*/
        }
        LOWORD(v12) = v30; /*0x4bbabd*/
        LOWORD(v19) = i; /*0x4bbac1*/
        LOWORD(v11) = v31; /*0x4bbac5*/
        v16 = v45; /*0x4bbac9*/
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 96))(v32); /*0x4bbae8*/
    return 1; /*0x4bb849*/
}
// truth-filled 0x4BAF40 (G42.52 truth-emitting generator)
bool gamemd::XSurface::Unlock()
{
    int v2; // eax
    void *DSurface_field_0xC; // edi
    void *DSurface_field_0x0; // edx
    int result; // eax

    if ( g_DDraw_Initialized || stru_A8EB00.?[412] ) /*0x4baf54*/
    {
      v2 = this->DSurface_field_0x1C[0]; /*0x4baf56*/
      if ( v2 ) /*0x4baf5b*/
      {
        if ( (*(int (__stdcall **)(int))(*(_DWORD *)v2 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 /*0x4baf7d*/
          && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0])
          && !(*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
        {
          DSurface_field_0xC = this->DSurface_field_0xC; /*0x4baf84*/
          if ( (int)DSurface_field_0xC > 0 ) /*0x4baf89*/
          {
            DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baf8b*/
            this->DSurface_field_0xC = 0; /*0x4baf93*/
            (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4baf96*/
            ++this->DSurface_field_0xC; /*0x4baf9f*/
            (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4bafa4*/
            this->DSurface_field_0xC = DSurface_field_0xC; /*0x4bafa7*/
          }
        }
      }
    }
    result = (int)this->DSurface_field_0xC; /*0x4bafaa*/
    if ( result <= 0 ) /*0x4bafaf*/
    {
      LOBYTE(result) = 0; /*0x4bafd6*/
    }
    else
    {
      this->DSurface_field_0xC = (void *)--result; /*0x4bafb4*/
      if ( !result ) /*0x4bafb7*/
      {
        result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)this->DSurface_field_0x1C[0] + 128))( /*0x4bafc3*/
                   this->DSurface_field_0x1C[0],
                   this->DSurface_field_0x14);
        this->DSurface_field_0x14 = 0; /*0x4bafc9*/
      }
      LOBYTE(result) = 1; /*0x4bafd1*/
    }
    return result; /*0x4bafd0*/
}
// link stub (no binary body yet)
int gamemd::MapClass::IsVisible(gamemd::Vector2D<short> a0) { return {}; }
// truth-filled 0x7C8512 (G42.52 truth-emitting generator)
int gamemd::RawFileClass::GetFileSize()
{
    return __imp_GetFileSize(hFile, lpFileSizeHigh);
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
int gamemd::RawFileClass::ReadBytes(void* a0, int a1)
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
int gamemd::RawFileClass::Seek(int a0, gamemd::FileSeekMode a1)
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
int gamemd::RawFileClass::WriteBytes(void* a0, int a1)
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x71E6A0 (G42.52 truth-emitting generator)
long gamemd::TActionClass::GetClassID(GUID* a0)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// truth-filled 0x71E6A0 (G42.52 truth-emitting generator)
long gamemd::TActionClass::Load(struct IStream* a0)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// truth-filled 0x71E6A0 (G42.52 truth-emitting generator)
long gamemd::TActionClass::Save(struct IStream* a0, int a1)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// link stub (no binary body yet)
long gamemd::TEventClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TEventClass::Load(struct IStream* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TEventClass::Save(struct IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long gamemd::TacticalClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TacticalClass::Load(struct IStream* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TacticalClass::Save(struct IStream* a0, int a1) { return {}; }
// truth-filled 0x4C98B0 (G42.52 truth-emitting generator)
long gamemd::TeamTypeClass::GetClassID(GUID* a0)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v7; // [esp+Ch] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x4c98b7*/
    this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
    this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c98c4*/
    this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
    this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
    this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
    this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
    this->taskForceCount = 0; /*0x4c98da*/
    this->taskForceCapacity = 0; /*0x4c98dd*/
    this->__pad_4C[0] = 1; /*0x4c98e0*/
    this->__pad_4C[1] = 0; /*0x4c98e3*/
    this->taskForce[0] = (int)&DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
    *(_DWORD *)&this->__pad_4C[8] = 10; /*0x4c98ed*/
    *(_DWORD *)&this->__pad_4C[4] = 0; /*0x4c98f4*/
    this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
    this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
    this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
    this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
    this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
    this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
    this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
    this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
    this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
    this->AbstractClass = &FactoryClass::`vftable'; /*0x4c991a*/
    this->? = &FactoryClass::`vftable'; /*0x4c9920*/
    this->? = &FactoryClass::`vftable'; /*0x4c9926*/
    this->? = &FactoryClass::`vftable'; /*0x4c992d*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x4c9934*/
    if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
      || (stru_A83D50.__pad_C8[37] || !*(_DWORD *)&stru_A83D50.__pad_C8[32])
      && *(int *)&stru_A83D50.__pad_C8[44] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 8))(
           &stru_A83D50.__pad_C8[24],
           *(_DWORD *)&stru_A83D50.__pad_C8[32] + *(_DWORD *)&stru_A83D50.__pad_C8[44],
           0) )
    {
      v3 = (*(_DWORD *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
    }
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c998c*/
    this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
    this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
    this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
    this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
    this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
    if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
      || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
      && g_BuildingLoadQueue_Array.Height > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
           &g_BuildingLoadQueue_Array.PowerBonus,
           g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
    }
    return (int)this; /*0x4c99fd*/
}
// truth-filled 0x4C98B0 (G42.52 truth-emitting generator)
long gamemd::TeamTypeClass::Load(struct IStream* a0)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v7; // [esp+Ch] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x4c98b7*/
    this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
    this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c98c4*/
    this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
    this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
    this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
    this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
    this->taskForceCount = 0; /*0x4c98da*/
    this->taskForceCapacity = 0; /*0x4c98dd*/
    this->__pad_4C[0] = 1; /*0x4c98e0*/
    this->__pad_4C[1] = 0; /*0x4c98e3*/
    this->taskForce[0] = (int)&DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
    *(_DWORD *)&this->__pad_4C[8] = 10; /*0x4c98ed*/
    *(_DWORD *)&this->__pad_4C[4] = 0; /*0x4c98f4*/
    this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
    this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
    this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
    this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
    this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
    this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
    this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
    this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
    this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
    this->AbstractClass = &FactoryClass::`vftable'; /*0x4c991a*/
    this->? = &FactoryClass::`vftable'; /*0x4c9920*/
    this->? = &FactoryClass::`vftable'; /*0x4c9926*/
    this->? = &FactoryClass::`vftable'; /*0x4c992d*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x4c9934*/
    if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
      || (stru_A83D50.__pad_C8[37] || !*(_DWORD *)&stru_A83D50.__pad_C8[32])
      && *(int *)&stru_A83D50.__pad_C8[44] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 8))(
           &stru_A83D50.__pad_C8[24],
           *(_DWORD *)&stru_A83D50.__pad_C8[32] + *(_DWORD *)&stru_A83D50.__pad_C8[44],
           0) )
    {
      v3 = (*(_DWORD *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
    }
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c998c*/
    this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
    this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
    this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
    this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
    this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
    if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
      || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
      && g_BuildingLoadQueue_Array.Height > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
           &g_BuildingLoadQueue_Array.PowerBonus,
           g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
    }
    return (int)this; /*0x4c99fd*/
}
// truth-filled 0x4C98B0 (G42.52 truth-emitting generator)
long gamemd::TeamTypeClass::Save(struct IStream* a0, int a1)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v7; // [esp+Ch] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x4c98b7*/
    this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
    this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c98c4*/
    this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
    this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
    this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
    this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
    this->taskForceCount = 0; /*0x4c98da*/
    this->taskForceCapacity = 0; /*0x4c98dd*/
    this->__pad_4C[0] = 1; /*0x4c98e0*/
    this->__pad_4C[1] = 0; /*0x4c98e3*/
    this->taskForce[0] = (int)&DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
    *(_DWORD *)&this->__pad_4C[8] = 10; /*0x4c98ed*/
    *(_DWORD *)&this->__pad_4C[4] = 0; /*0x4c98f4*/
    this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
    this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
    this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
    this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
    this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
    this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
    this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
    this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
    this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
    this->AbstractClass = &FactoryClass::`vftable'; /*0x4c991a*/
    this->? = &FactoryClass::`vftable'; /*0x4c9920*/
    this->? = &FactoryClass::`vftable'; /*0x4c9926*/
    this->? = &FactoryClass::`vftable'; /*0x4c992d*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x4c9934*/
    if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
      || (stru_A83D50.__pad_C8[37] || !*(_DWORD *)&stru_A83D50.__pad_C8[32])
      && *(int *)&stru_A83D50.__pad_C8[44] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 8))(
           &stru_A83D50.__pad_C8[24],
           *(_DWORD *)&stru_A83D50.__pad_C8[32] + *(_DWORD *)&stru_A83D50.__pad_C8[44],
           0) )
    {
      v3 = (*(_DWORD *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
    }
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c998c*/
    this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
    this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
    this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
    this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
    this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
    if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
      || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
      && g_BuildingLoadQueue_Array.Height > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
           &g_BuildingLoadQueue_Array.PowerBonus,
           g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
    }
    return (int)this; /*0x4c99fd*/
}
// truth-filled 0x763810 (G42.52 truth-emitting generator)
long gamemd::WaypointPathClass::GetClassID(GUID* a0)
{
    int v3; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
    *(_DWORD *)(this + 36) = -1; /*0x76381e*/
    *(_DWORD *)(this + 44) = 0; /*0x763825*/
    *(_DWORD *)(this + 48) = 0; /*0x763828*/
    *(_BYTE *)(this + 52) = 1; /*0x76382b*/
    *(_BYTE *)(this + 53) = 0; /*0x76382f*/
    *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763832*/
    *(_DWORD *)(this + 60) = 10; /*0x763839*/
    *(_DWORD *)(this + 56) = 0; /*0x763840*/
    *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
    *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
    *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
    *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763859*/
    if ( a2 < 0xC /*0x76389a*/
      && (dword_B72618 < dword_B72610
       || (byte_B72615 || !dword_B72610)
       && dword_B7261C > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
            &dword_B72608,
            dword_B72610 + dword_B7261C,
            0)) )
    {
      v3 = dword_B72618++; /*0x7638a7*/
      *((_DWORD *)dword_B7260C + v3) = this; /*0x7638b6*/
    }
    return this; /*0x7638bb*/
}
// truth-filled 0x763810 (G42.52 truth-emitting generator)
long gamemd::WaypointPathClass::Load(struct IStream* a0)
{
    int v3; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
    *(_DWORD *)(this + 36) = -1; /*0x76381e*/
    *(_DWORD *)(this + 44) = 0; /*0x763825*/
    *(_DWORD *)(this + 48) = 0; /*0x763828*/
    *(_BYTE *)(this + 52) = 1; /*0x76382b*/
    *(_BYTE *)(this + 53) = 0; /*0x76382f*/
    *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763832*/
    *(_DWORD *)(this + 60) = 10; /*0x763839*/
    *(_DWORD *)(this + 56) = 0; /*0x763840*/
    *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
    *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
    *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
    *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763859*/
    if ( a2 < 0xC /*0x76389a*/
      && (dword_B72618 < dword_B72610
       || (byte_B72615 || !dword_B72610)
       && dword_B7261C > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
            &dword_B72608,
            dword_B72610 + dword_B7261C,
            0)) )
    {
      v3 = dword_B72618++; /*0x7638a7*/
      *((_DWORD *)dword_B7260C + v3) = this; /*0x7638b6*/
    }
    return this; /*0x7638bb*/
}
// truth-filled 0x763810 (G42.52 truth-emitting generator)
long gamemd::WaypointPathClass::Save(struct IStream* a0, int a1)
{
    int v3; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
    *(_DWORD *)(this + 36) = -1; /*0x76381e*/
    *(_DWORD *)(this + 44) = 0; /*0x763825*/
    *(_DWORD *)(this + 48) = 0; /*0x763828*/
    *(_BYTE *)(this + 52) = 1; /*0x76382b*/
    *(_BYTE *)(this + 53) = 0; /*0x76382f*/
    *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763832*/
    *(_DWORD *)(this + 60) = 10; /*0x763839*/
    *(_DWORD *)(this + 56) = 0; /*0x763840*/
    *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
    *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
    *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
    *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763859*/
    if ( a2 < 0xC /*0x76389a*/
      && (dword_B72618 < dword_B72610
       || (byte_B72615 || !dword_B72610)
       && dword_B7261C > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
            &dword_B72608,
            dword_B72610 + dword_B7261C,
            0)) )
    {
      v3 = dword_B72618++; /*0x7638a7*/
      *((_DWORD *)dword_B7260C + v3) = this; /*0x7638b6*/
    }
    return this; /*0x7638bb*/
}
// truth-filled 0x4717D0 (G42.52 truth-emitting generator)
long ra2::game::CaptureManagerClass::GetClassID(GUID* a0)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
    *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
    *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
    *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
    *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
    *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
    *(_DWORD *)(this + 72) = a2; /*0x471800*/
    *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(_DWORD *)(this + 60) = a3; /*0x471822*/
    *(_BYTE *)(this + 64) = a4; /*0x471825*/
    *(_BYTE *)(this + 65) = 0; /*0x471828*/
    *(_DWORD *)(this + 76) = 30; /*0x47182b*/
    *(_DWORD *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// truth-filled 0x4717D0 (G42.52 truth-emitting generator)
long ra2::game::CaptureManagerClass::Load(struct IStream* a0)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
    *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
    *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
    *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
    *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
    *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
    *(_DWORD *)(this + 72) = a2; /*0x471800*/
    *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(_DWORD *)(this + 60) = a3; /*0x471822*/
    *(_BYTE *)(this + 64) = a4; /*0x471825*/
    *(_BYTE *)(this + 65) = 0; /*0x471828*/
    *(_DWORD *)(this + 76) = 30; /*0x47182b*/
    *(_DWORD *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// truth-filled 0x4717D0 (G42.52 truth-emitting generator)
long ra2::game::CaptureManagerClass::QueryInterface(const GUID& a0, void** a1)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
    *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
    *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
    *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
    *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
    *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
    *(_DWORD *)(this + 72) = a2; /*0x471800*/
    *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(_DWORD *)(this + 60) = a3; /*0x471822*/
    *(_BYTE *)(this + 64) = a4; /*0x471825*/
    *(_BYTE *)(this + 65) = 0; /*0x471828*/
    *(_DWORD *)(this + 76) = 30; /*0x47182b*/
    *(_DWORD *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// truth-filled 0x4717D0 (G42.52 truth-emitting generator)
long ra2::game::CaptureManagerClass::Save(struct IStream* a0, int a1)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
    *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
    *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
    *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
    *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
    *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
    *(_DWORD *)(this + 72) = a2; /*0x471800*/
    *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(_DWORD *)(this + 60) = a3; /*0x471822*/
    *(_BYTE *)(this + 64) = a4; /*0x471825*/
    *(_BYTE *)(this + 65) = 0; /*0x471828*/
    *(_DWORD *)(this + 76) = 30; /*0x47182b*/
    *(_DWORD *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// truth-filled 0x6AF360 (G42.52 truth-emitting generator)
long ra2::game::SlaveManagerClass::GetClassID(GUID* a0)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6af38c*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((_DWORD *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// truth-filled 0x6AF360 (G42.52 truth-emitting generator)
long ra2::game::SlaveManagerClass::Load(struct IStream* a0)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6af38c*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((_DWORD *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// truth-filled 0x6AF360 (G42.52 truth-emitting generator)
long ra2::game::SlaveManagerClass::Save(struct IStream* a0, int a1)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6af38c*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((_DWORD *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// truth-filled 0x6B6EA0 (G42.52 truth-emitting generator)
long ra2::game::SpawnManagerClass::GetClassID(GUID* a0)
{
    int v2; // eax
    int v4; // [esp+10h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6ea8*/
    SpawnControlVector::Constructor((SpawnControlVector *)this->spawns, 0, 0); /*0x6b6eb6*/
    this->spawns[0] = (int)&DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6ebb*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6b6ec1*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6b6ec8*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ed4*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ee0*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
    this->AbstractClass = &SpawnManagerClass::`vftable'; /*0x6b6ee6*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6eec*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6ef3*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6efa*/
    this->owner = 0; /*0x6b6f01*/
    this->spawnOwner = 0; /*0x6b6f04*/
    this->spawnType = 0; /*0x6b6f07*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f11*/
    this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
    this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
    this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
    this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f28*/
    this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6f69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v2 = dword_B0B890++; /*0x6b6f76*/
      *((_DWORD *)dword_B0B884 + v2) = this; /*0x6b6f85*/
    }
    return (int)this; /*0x6b6f8a*/
}
// truth-filled 0x6B6EA0 (G42.52 truth-emitting generator)
long ra2::game::SpawnManagerClass::Load(struct IStream* a0)
{
    int v2; // eax
    int v4; // [esp+10h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6ea8*/
    SpawnControlVector::Constructor((SpawnControlVector *)this->spawns, 0, 0); /*0x6b6eb6*/
    this->spawns[0] = (int)&DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6ebb*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6b6ec1*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6b6ec8*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ed4*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ee0*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
    this->AbstractClass = &SpawnManagerClass::`vftable'; /*0x6b6ee6*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6eec*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6ef3*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6efa*/
    this->owner = 0; /*0x6b6f01*/
    this->spawnOwner = 0; /*0x6b6f04*/
    this->spawnType = 0; /*0x6b6f07*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f11*/
    this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
    this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
    this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
    this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f28*/
    this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6f69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v2 = dword_B0B890++; /*0x6b6f76*/
      *((_DWORD *)dword_B0B884 + v2) = this; /*0x6b6f85*/
    }
    return (int)this; /*0x6b6f8a*/
}
// truth-filled 0x6B6EA0 (G42.52 truth-emitting generator)
long ra2::game::SpawnManagerClass::Save(struct IStream* a0, int a1)
{
    int v2; // eax
    int v4; // [esp+10h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6ea8*/
    SpawnControlVector::Constructor((SpawnControlVector *)this->spawns, 0, 0); /*0x6b6eb6*/
    this->spawns[0] = (int)&DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6ebb*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6b6ec1*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6b6ec8*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ed4*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ee0*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
    this->AbstractClass = &SpawnManagerClass::`vftable'; /*0x6b6ee6*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6eec*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6ef3*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6efa*/
    this->owner = 0; /*0x6b6f01*/
    this->spawnOwner = 0; /*0x6b6f04*/
    this->spawnType = 0; /*0x6b6f07*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f11*/
    this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
    this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
    this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
    this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f28*/
    this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6f69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v2 = dword_B0B890++; /*0x6b6f76*/
      *((_DWORD *)dword_B0B884 + v2) = this; /*0x6b6f85*/
    }
    return (int)this; /*0x6b6f8a*/
}
// truth-filled 0x5D8170 (G42.52 truth-emitting generator)
gamemd::Vector2D<short> * gamemd::MPBattleClass::AssignStartingPositionsToHouse(gamemd::Vector2D<short>* a0, int a1, gamemd::DynamicVectorClass<gamemd::Vector2D<short> >* a2, unsigned char* a3)
{
    _DWORD *v6; // eax

    v6 = __2_YAPAXI_Z(0x40u); /*0x5d8172*/
    if ( v6 ) /*0x5d817c*/
      return MPBattleClass::initGame(v6, a1, a2, a3, a4, a5, a6); /*0x5d819e*/
    else
      return 0; /*0x5d81a6*/
}
// link stub (no binary body yet)
gamemd::Vector2D<short> * gamemd::MPGameModeClass::AssignStartingPositionsToHouse(gamemd::Vector2D<short>* a0, int a1, gamemd::DynamicVectorClass<gamemd::Vector2D<short> >* a2, unsigned char* a3) { return {}; }
// truth-filled 0x7C855A (G42.52 truth-emitting generator)
unsigned int gamemd::FileClass::GetFileTime()
{
    return __imp_GetFileTime(hFile, lpCreationTime, lpLastAccessTime, lpLastWriteTime);
}
// truth-filled 0x4717D0 (G42.52 truth-emitting generator)
unsigned long ra2::game::CaptureManagerClass::AddRef()
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
    *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
    *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
    *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
    *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
    *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
    *(_DWORD *)(this + 72) = a2; /*0x471800*/
    *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(_DWORD *)(this + 60) = a3; /*0x471822*/
    *(_BYTE *)(this + 64) = a4; /*0x471825*/
    *(_BYTE *)(this + 65) = 0; /*0x471828*/
    *(_DWORD *)(this + 76) = 30; /*0x47182b*/
    *(_DWORD *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// truth-filled 0x4717D0 (G42.52 truth-emitting generator)
unsigned long ra2::game::CaptureManagerClass::Release()
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
    *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
    *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
    *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
    *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
    *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
    *(_DWORD *)(this + 72) = a2; /*0x471800*/
    *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(_DWORD *)(this + 60) = a3; /*0x471822*/
    *(_BYTE *)(this + 64) = a4; /*0x471825*/
    *(_BYTE *)(this + 65) = 0; /*0x471828*/
    *(_DWORD *)(this + 76) = 30; /*0x47182b*/
    *(_DWORD *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// truth-filled 0x4BAD80 (G42.52 truth-emitting generator)
void * gamemd::XSurface::Lock(int a0, int a1)
{
    int v4; // eax
    void *DSurface_field_0xC; // esi
    void *DSurface_field_0x0; // edx
    int v7; // eax
    void *DSurface_field_0x20; // eax
    int v9; // esi
    _DWORD v11[27]; // [esp+28h] [ebp-6Ch] BYREF

    if ( !g_DDraw_Initialized && !stru_A8EB00.?[412] ) /*0x4bad99*/
      return 0; /*0x4bad99*/
    v4 = this->DSurface_field_0x1C[0]; /*0x4bad9f*/
    if ( v4 && (*(int (__stdcall **)(int))(*(_DWORD *)v4 + 96))(this->DSurface_field_0x1C[0]) == -2005532222 ) /*0x4badb1*/
    {
      if ( (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 108))(this->DSurface_field_0x1C[0]) /*0x4badca*/
        || (*(int (__stdcall **)(int))(*(_DWORD *)this->DSurface_field_0x1C[0] + 96))(this->DSurface_field_0x1C[0]) )
      {
        return 0; /*0x4badcf*/
      }
      DSurface_field_0xC = this->DSurface_field_0xC; /*0x4badd5*/
      if ( (int)DSurface_field_0xC > 0 ) /*0x4badda*/
      {
        DSurface_field_0x0 = this->DSurface_field_0x0; /*0x4baddc*/
        this->DSurface_field_0xC = 0; /*0x4bade0*/
        (*((void (__thiscall **)(DSurface *, _DWORD, _DWORD))DSurface_field_0x0 + 23))(this, 0, 0); /*0x4bade7*/
        ++this->DSurface_field_0xC; /*0x4badf0*/
        (*((void (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 24))(this); /*0x4badf5*/
        this->DSurface_field_0xC = DSurface_field_0xC; /*0x4badf8*/
      }
    }
    if ( a2 >= 0 && a3 >= 0 ) /*0x4bae13*/
    {
      if ( this->DSurface_field_0xC ) /*0x4bae19*/
      {
  LABEL_14:
        ++this->DSurface_field_0xC; /*0x4bae7c*/
        v9 = a3 * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 29))(this); /*0x4bae90*/
        return (char *)this->DSurface_field_0x14 /*0x4baeac*/
             + a2 * (*((int (__thiscall **)(DSurface *))this->DSurface_field_0x0 + 28))(this)
             + v9;
      }
      memset(v11, 0, sizeof(v11)); /*0x4bae2d*/
      v7 = this->DSurface_field_0x1C[0]; /*0x4bae2f*/
      v11[0] = 108; /*0x4bae38*/
      if ( !(*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)v7 + 100))(v7, 0, v11, 1, 0) ) /*0x4bae46*/
      {
        qmemcpy(this->DSurface_field_0x20, v11, 0x6Cu); /*0x4bae59*/
        DSurface_field_0x20 = this->DSurface_field_0x20; /*0x4bae5b*/
        this->DSurface_field_0x10 = (void *)((unsigned int)(*((_DWORD *)DSurface_field_0x20 + 21) + 7) >> 3); /*0x4bae67*/
        BYTE1(this->DSurface_field_0x18) = (*((_DWORD *)DSurface_field_0x20 + 26) & 0x4000) != 0; /*0x4bae73*/
        this->DSurface_field_0x14 = (void *)*((_DWORD *)DSurface_field_0x20 + 9); /*0x4bae79*/
        goto LABEL_14; /*0x4bae79*/
      }
    }
    return 0; /*0x4baea5*/
}
// truth-filled 0x410800 (G42.52 truth-emitting generator)
void gamemd::AbstractTypeClass::LoadTheaterSpecificArt(gamemd::TheaterType a0)
{
    char *v3; // ebx
    int v4; // eax
    char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
    char Destination[48]; // [esp+20h] [ebp-34h] BYREF
    char v8; // [esp+50h] [ebp-4h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x410809*/
    v3 = (char *)(this + 9); /*0x410812*/
    *((_BYTE *)this + 36) = 0; /*0x410817*/
    *((_BYTE *)this + 61) = 0; /*0x41081a*/
    *((_BYTE *)this + 100) = 0; /*0x41081e*/
    *this = (int)&AbstractTypeClass::`vftable'; /*0x410822*/
    *(this + 1) = (int)&AbstractTypeClass::`vftable'; /*0x410829*/
    *(this + 2) = (int)&AbstractTypeClass::`vftable'; /*0x410830*/
    *(this + 3) = (int)&AbstractTypeClass::`vftable'; /*0x410837*/
    if ( Source ) /*0x41083e*/
    {
      strncpy(Destination, Source, 0x18u); /*0x410895*/
      Destination[24] = 0; /*0x4108a3*/
      if ( Destination == v3 ) /*0x4108a8*/
        goto LABEL_9; /*0x4108a8*/
      goto LABEL_8; /*0x4108a8*/
    }
    sprintf(Buffer, "%08X", this); /*0x41084b*/
    if ( Buffer ) /*0x410859*/
    {
      strncpy(Destination, Buffer, 0x18u); /*0x41086d*/
      Destination[24] = 0; /*0x410875*/
    }
    else
    {
      Destination[0] = 0; /*0x41085b*/
    }
    if ( Destination != v3 ) /*0x410880*/
    {
  LABEL_8:
      qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
      *((_BYTE *)this + 60) = Destination[24]; /*0x4108b7*/
    }
  LABEL_9:
    if ( this == (int *)-36 ) /*0x4108ba*/
    {
      Destination[0] = 0; /*0x4108bc*/
    }
    else
    {
      strncpy(Destination, (const char *)this + 36, 0x30u); /*0x4108ca*/
      v8 = 0; /*0x4108d2*/
    }
    if ( Destination != (char *)(this + 25) ) /*0x4108e0*/
    {
      qmemcpy(this + 25, Destination, 0x30u); /*0x4108eb*/
      *((_BYTE *)this + 148) = v8; /*0x4108ed*/
    }
    *(this + 24) = (int)&g_TypeClass_DefaultString; /*0x4108ee*/
    if ( dword_A8E978 < dword_A8E970 /*0x410929*/
      || (byte_A8E975 || !dword_A8E970)
      && dword_A8E97C > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8E968 + 8))(
           &dword_A8E968,
           dword_A8E970 + dword_A8E97C,
           0) )
    {
      v4 = dword_A8E978++; /*0x410936*/
      *((_DWORD *)dword_A8E96C + v4) = this; /*0x410945*/
    }
    return (int)this; /*0x410948*/
}
// link stub (no binary body yet)
gamemd::DisplayClass::LeftMouseButtonUp(gamemd::Vector3D<int> const& a0, gamemd::Vector2D<short> const& a1, ra2::game::ObjectClass* a2, gamemd::Action a3, unsigned int a4) {}
// link stub (no binary body yet)
gamemd::MapClass::AllocateCells() {}
// link stub (no binary body yet)
gamemd::MapClass::ConstructCells() {}
// link stub (no binary body yet)
gamemd::MapClass::CreateEmptyMap(gamemd::RectangleStruct const& a0, bool a1, signed char a2, bool a3) {}
// link stub (no binary body yet)
gamemd::MapClass::DestructCells() {}
// link stub (no binary body yet)
gamemd::MapClass::PointerGotInvalid(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
gamemd::MapClass::SetVisibleRect(gamemd::RectangleStruct const& a0) {}
// link stub (no binary body yet)
gamemd::MapClass::UpdateCrates() {}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
void gamemd::RawFileClass::CDCheck(unsigned int a0, bool a1, const char* a2)
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x65CA80 (G42.52 truth-emitting generator)
void gamemd::RawFileClass::Close()
{
    this->FileName = -1; /*0x65ca87*/
    *(_DWORD *)this->FileTimeDateLo = -1; /*0x65ca8a*/
    LOBYTE(this->FilePointer) = 0; /*0x65ca91*/
    this->FileSize = 0; /*0x65ca94*/
    this->Handle = 0; /*0x65ca97*/
    *(_DWORD *)this->FileNameAllocated = a2; /*0x65ca9a*/
    *(_WORD *)this->BufferDirty = 0; /*0x65ca9d*/
    *(_WORD *)this->BufferWritePending = 0; /*0x65caa1*/
    this->CacheReadAhead[0] = 0; /*0x65caa5*/
    this->FileClass = (FileClass)&RawFileClass::`vftable'; /*0x65caa8*/
    return &this->FileClass; /*0x65caae*/
}
// truth-filled 0x71E6A0 (G42.52 truth-emitting generator)
void gamemd::TActionClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// link stub (no binary body yet)
gamemd::TEventClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// truth-filled 0x4C98B0 (G42.52 truth-emitting generator)
void gamemd::TeamTypeClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1)
{
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v7; // [esp+Ch] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x4c98b7*/
    this->TeamTypeClass_field_24 = 0; /*0x4c98be*/
    this->TeamTypeClass_field_28 = 0; /*0x4c98c1*/
    v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c98c4*/
    this->TeamTypeClass_field_34 = 0; /*0x4c98c9*/
    this->TeamTypeClass_field_2C = v2; /*0x4c98cc*/
    this->TeamTypeClass_field_38 = 0; /*0x4c98d4*/
    this->TeamTypeClass_field_3C = 1; /*0x4c98d7*/
    this->taskForceCount = 0; /*0x4c98da*/
    this->taskForceCapacity = 0; /*0x4c98dd*/
    this->__pad_4C[0] = 1; /*0x4c98e0*/
    this->__pad_4C[1] = 0; /*0x4c98e3*/
    this->taskForce[0] = (int)&DynamicVectorClass<TechnoTypeClass const *>::`vftable'; /*0x4c98e6*/
    *(_DWORD *)&this->__pad_4C[8] = 10; /*0x4c98ed*/
    *(_DWORD *)&this->__pad_4C[4] = 0; /*0x4c98f4*/
    this->TeamTypeClass_field_71 = 1; /*0x4c98f7*/
    this->TeamTypeClass_field_58 = 0; /*0x4c98fd*/
    this->TeamTypeClass_field_5C = 0; /*0x4c9901*/
    this->TeamTypeClass_field_5D = 0; /*0x4c9904*/
    this->TeamTypeClass_field_60 = 0; /*0x4c9907*/
    this->TeamTypeClass_field_64 = 0; /*0x4c990a*/
    this->TeamTypeClass_field_68 = -1; /*0x4c990d*/
    this->TeamTypeClass_field_6C = 0; /*0x4c9914*/
    this->TeamTypeClass_field_70 = 0; /*0x4c9917*/
    this->AbstractClass = &FactoryClass::`vftable'; /*0x4c991a*/
    this->? = &FactoryClass::`vftable'; /*0x4c9920*/
    this->? = &FactoryClass::`vftable'; /*0x4c9926*/
    this->? = &FactoryClass::`vftable'; /*0x4c992d*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x4c9934*/
    if ( *(int *)&stru_A83D50.__pad_C8[40] < *(int *)&stru_A83D50.__pad_C8[32] /*0x4c996d*/
      || (stru_A83D50.__pad_C8[37] || !*(_DWORD *)&stru_A83D50.__pad_C8[32])
      && *(int *)&stru_A83D50.__pad_C8[44] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A83D50.__pad_C8[24] + 8))(
           &stru_A83D50.__pad_C8[24],
           *(_DWORD *)&stru_A83D50.__pad_C8[32] + *(_DWORD *)&stru_A83D50.__pad_C8[44],
           0) )
    {
      v3 = (*(_DWORD *)&stru_A83D50.__pad_C8[40])++; /*0x4c997a*/
      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * v3) = this; /*0x4c9989*/
    }
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4c998c*/
    this->TeamTypeClass_field_38 = 0; /*0x4c9996*/
    this->TeamTypeClass_field_2C = v4; /*0x4c9999*/
    this->TeamTypeClass_field_30 = v7; /*0x4c999f*/
    this->TeamTypeClass_field_34 = 0; /*0x4c99a2*/
    this->TeamTypeClass_field_24 = 0; /*0x4c99a5*/
    if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x4c99dc*/
      || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
      && g_BuildingLoadQueue_Array.Height > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
           &g_BuildingLoadQueue_Array.PowerBonus,
           g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x4c99e9*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x4c99f8*/
    }
    return (int)this; /*0x4c99fd*/
}
// truth-filled 0x763810 (G42.52 truth-emitting generator)
void gamemd::WaypointPathClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1)
{
    int v3; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x763813*/
    *(_DWORD *)(this + 36) = -1; /*0x76381e*/
    *(_DWORD *)(this + 44) = 0; /*0x763825*/
    *(_DWORD *)(this + 48) = 0; /*0x763828*/
    *(_BYTE *)(this + 52) = 1; /*0x76382b*/
    *(_BYTE *)(this + 53) = 0; /*0x76382f*/
    *(_DWORD *)(this + 40) = &DynamicVectorClass<WaypointClass>::`vftable'; /*0x763832*/
    *(_DWORD *)(this + 60) = 10; /*0x763839*/
    *(_DWORD *)(this + 56) = 0; /*0x763840*/
    *(_DWORD *)this = &WaypointPathClass::`vftable'; /*0x763845*/
    *(_DWORD *)(this + 4) = &WaypointPathClass::`vftable'; /*0x76384b*/
    *(_DWORD *)(this + 8) = &WaypointPathClass::`vftable'; /*0x763852*/
    *(_DWORD *)(this + 12) = &WaypointPathClass::`vftable'; /*0x763859*/
    if ( a2 < 0xC /*0x76389a*/
      && (dword_B72618 < dword_B72610
       || (byte_B72615 || !dword_B72610)
       && dword_B7261C > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B72608 + 8))(
            &dword_B72608,
            dword_B72610 + dword_B7261C,
            0)) )
    {
      v3 = dword_B72618++; /*0x7638a7*/
      *((_DWORD *)dword_B7260C + v3) = this; /*0x7638b6*/
    }
    return this; /*0x7638bb*/
}
// truth-filled 0x4717D0 (G42.52 truth-emitting generator)
void ra2::game::CaptureManagerClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1)
{
    int v5; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x4717d3*/
    *(_BYTE *)(this + 48) = 1; /*0x4717e2*/
    *(_DWORD *)(this + 40) = 0; /*0x4717e6*/
    *(_DWORD *)(this + 44) = 0; /*0x4717e9*/
    *(_BYTE *)(this + 49) = 0; /*0x4717ec*/
    *(_DWORD *)(this + 36) = &DynamicVectorClass<ControlNode *>::`vftable'; /*0x4717ef*/
    *(_DWORD *)(this + 56) = 10; /*0x4717f6*/
    *(_DWORD *)(this + 52) = 0; /*0x4717fd*/
    *(_DWORD *)(this + 72) = a2; /*0x471800*/
    *(_DWORD *)this = &CaptureManagerClass::`vftable'; /*0x471807*/
    *(_DWORD *)(this + 4) = &CaptureManagerClass::`vftable'; /*0x47180d*/
    *(_DWORD *)(this + 8) = &CaptureManagerClass::`vftable'; /*0x471814*/
    *(_DWORD *)(this + 12) = &CaptureManagerClass::`vftable'; /*0x47181b*/
    *(_DWORD *)(this + 60) = a3; /*0x471822*/
    *(_BYTE *)(this + 64) = a4; /*0x471825*/
    *(_BYTE *)(this + 65) = 0; /*0x471828*/
    *(_DWORD *)(this + 76) = 30; /*0x47182b*/
    *(_DWORD *)(this + 68) = 0; /*0x471832*/
    if ( dword_89E100 < dword_89E0F8 /*0x471868*/
      || (byte_89E0FD || !dword_89E0F8)
      && dword_89E104 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89E0F0 + 8))(
           &dword_89E0F0,
           dword_89E0F8 + dword_89E104,
           0) )
    {
      v5 = dword_89E100++; /*0x471875*/
      *((_DWORD *)dword_89E0F4 + v5) = this; /*0x471884*/
    }
    return this; /*0x471889*/
}
// truth-filled 0x4D31E0 (G42.52 truth-emitting generator)
void ra2::game::FootClass::Draw_A_SHP(struct ra2::game::SHPStruct* a0, int a1, gamemd::Vector2D<int>* a2, gamemd::RectangleStruct* a3, unsigned int a4, unsigned int a5, unsigned int a6, enum ra2::game::ZGradient a7, unsigned int a8, int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax

    TechnoClass::TechnoClass((TechnoClass *)this, a2); /*0x4d31ea*/
    this->planningPathIdx = -1; /*0x4d31f1*/
    *(_WORD *)this->unknownShort524 = 0; /*0x4d31fb*/
    *(_WORD *)this->unknownShort526 = 0; /*0x4d3202*/
    *(_WORD *)this->unknownShort528 = 0; /*0x4d3209*/
    *(_WORD *)this->FootClass_field_short_52A = 0; /*0x4d3210*/
    this->unknown530 = 0; /*0x4d3217*/
    this->unknown534 = 0; /*0x4d321d*/
    this->unknown538 = 0; /*0x4d3223*/
    this->FootClass_field_bool_53C = 0; /*0x4d3229*/
    this->unknown540 = 0; /*0x4d322f*/
    LOWORD(this->currentMapCoords[0]) = 0; /*0x4d3235*/
    HIWORD(this->currentMapCoords[0]) = 0; /*0x4d323c*/
    LOWORD(this->lastMapCoords[0]) = 0; /*0x4d3243*/
    HIWORD(this->lastMapCoords[0]) = 0; /*0x4d324a*/
    LOWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3251*/
    HIWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3258*/
    LOWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d325f*/
    HIWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d3266*/
    this->unknownCoords568[0] = 0; /*0x4d326d*/
    this->unknownCoords568[1] = 0; /*0x4d3273*/
    this->unknownCoords568[2] = 0; /*0x4d3279*/
    this->currentSpeed_percentage[0] = 0; /*0x4d327f*/
    this->currentSpeed_percentage[1] = 0; /*0x4d328b*/
    this->currentSpeed_multiplier[0] = 0; /*0x4d3292*/
    this->currentSpeed_multiplier[1] = 1072693248; /*0x4d329b*/
    AbstractClassVector::Construct((AbstractClassVector *)this->unknownAbstractArray588, 0, 0); /*0x4d32a5*/
    this->unknownAbstractArray588[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32aa*/
    *(_DWORD *)&this->__pad_58C[16] = 10; /*0x4d32b0*/
    *(_DWORD *)&this->__pad_58C[12] = 0; /*0x4d32b7*/
    this->FootClass_field_5A0 = 0; /*0x4d32c0*/
    this->movementDestination = 0; /*0x4d32c7*/
    this->lastDestination = 0; /*0x4d32d0*/
    AbstractClassVector::Construct((AbstractClassVector *)this->FootClass_field_abstract_array_5AC, 0, 0); /*0x4d32d6*/
    this->FootClass_field_abstract_array_5AC[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32e0*/
    *(_DWORD *)&this->__pad_5B0[16] = 10; /*0x4d32e6*/
    *(_DWORD *)&this->__pad_5B0[12] = 0; /*0x4d32e9*/
    this->FootClass_field_int_5C4 = -1; /*0x4d32ec*/
    this->FootClass_field_5C8 = 0; /*0x4d32f6*/
    this->FootClass_field_5CC = 0; /*0x4d32fc*/
    this->FootClass_field_bool_5D1 = 0; /*0x4d3302*/
    this->team = 0; /*0x4d3308*/
    this->nextTeamMember = 0; /*0x4d330e*/
    this->FootClass_field_5DC = 0; /*0x4d3314*/
    this->pathDelayTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3320*/
    this->pathDelayTimer[2] = 0; /*0x4d3326*/
    this->FootClass_field_int_64C = 10; /*0x4d332c*/
    this->FootClass_field_timer_650[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3338*/
    this->FootClass_field_timer_650[2] = 0; /*0x4d333e*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3344*/
    this->sightTimer[2] = 0; /*0x4d3349*/
    this->sightTimer[0] = v3; /*0x4d334f*/
    this->blockagePathTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d335b*/
    this->blockagePathTimer[2] = 0; /*0x4d3361*/
    this->locomotor[0] = 0; /*0x4d3367*/
    this->unknownPoint3d678[0] = dword_8B3DA8; /*0x4d3378*/
    this->unknownPoint3d678[1] = dword_8B3DAC; /*0x4d3384*/
    this->unknownPoint3d678[2] = dword_8B3DB0; /*0x4d338c*/
    this->tubeIndex = -1; /*0x4d338f*/
    this->unknownBool685 = 0; /*0x4d3396*/
    this->waypointIndex = 0; /*0x4d339c*/
    this->unknownBool687 = 0; /*0x4d33a2*/
    this->unknownBool688 = 0; /*0x4d33a8*/
    this->isTeamLeader = 0; /*0x4d33ae*/
    this->shouldScanForTarget = 0; /*0x4d33b4*/
    this->FootClass_field_bool_68B = 0; /*0x4d33ba*/
    this->FootClass_field_bool_68C = 0; /*0x4d33c0*/
    this->unknownBool68D = 0; /*0x4d33c6*/
    this->FootClass_field_bool_68E = 0; /*0x4d33cc*/
    this->shouldEnterAbsorber = 0; /*0x4d33d2*/
    this->shouldEnterOccupiable = 0; /*0x4d33d8*/
    this->shouldGarrisonStructure = 0; /*0x4d33de*/
    this->parasiteEatingMe = 0; /*0x4d33e4*/
    this->unknown698 = 0; /*0x4d33ea*/
    this->parasiteImUsing = 0; /*0x4d33f0*/
    this->paralysisTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d33fc*/
    this->paralysisTimer[2] = 0; /*0x4d3402*/
    this->FootClass_field_bool_6AC = 0; /*0x4d340e*/
    this->isAttackedByLocomotor = 0; /*0x4d3414*/
    this->isLetGoByLocomotor = 0; /*0x4d341a*/
    this->FootClass_field_bool_6AF = 0; /*0x4d3420*/
    this->FootClass_field_bool_6B0 = 0; /*0x4d3426*/
    this->FootClass_field_bool_6B1 = 0; /*0x4d342c*/
    this->FootClass_field_bool_6B2 = 0; /*0x4d3432*/
    this->FootClass_field_bool_6B3 = 0; /*0x4d3438*/
    this->FootClass_field_bool_6B4 = 0; /*0x4d343e*/
    this->FootClass_field_bool_6B5 = 0; /*0x4d3444*/
    this->frozenStill = 1; /*0x4d344a*/
    this->FootClass_field_bool_6B7 = 0; /*0x4d3451*/
    this->FootClass_field_bool_6B8 = 0; /*0x4d3457*/
    this->TechnoClass = &FootClass::`vftable'; /*0x4d345d*/
    this->? = &FootClass::`vftable'; /*0x4d3463*/
    this->? = &FootClass::`vftable'; /*0x4d346a*/
    this->? = &FootClass::`vftable'; /*0x4d3471*/
    this->pathDirections[0] = -1; /*0x4d3478*/
    AudioController::Init((AudioController *)this->audioController7); /*0x4d3482*/
    if ( FootClass_Array.? < (int)FootClass_Array.? /*0x4d34bb*/
      || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
      && FootClass_Array.? > 0
      && (*((unsigned __int8 (__thiscall **)(FootClass *, char *, _DWORD))FootClass_Array.TechnoClass + 2))(
           &FootClass_Array,
           (char *)FootClass_Array.? + FootClass_Array.?,
           0) )
    {
      v4 = FootClass_Array.?++; /*0x4d34c8*/
      *((_DWORD *)FootClass_Array.? + v4) = this; /*0x4d34d7*/
    }
    LOBYTE(this->?) |= 4u; /*0x4d34e0*/
    if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x4d3515*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
      && g_BuildingLoadQueue_Array.?[2] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
           &g_BuildingLoadQueue_Array.?[2],
           g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x4d3522*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = this; /*0x4d3531*/
    }
    return &this->TechnoClass; /*0x4d3536*/
}
// truth-filled 0x4D31E0 (G42.52 truth-emitting generator)
void ra2::game::FootClass::Draw_A_VXL(struct ra2::game::VoxelStruct* a0, int a1, int a2, struct ra2::game::SomeVoxelCache* a3, gamemd::RectangleStruct* a4, gamemd::Vector2D<int>* a5, struct ra2::game::Matrix3DStruct* a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
    int v3; // eax
    int v4; // eax
    int v5; // eax

    TechnoClass::TechnoClass((TechnoClass *)this, a2); /*0x4d31ea*/
    this->planningPathIdx = -1; /*0x4d31f1*/
    *(_WORD *)this->unknownShort524 = 0; /*0x4d31fb*/
    *(_WORD *)this->unknownShort526 = 0; /*0x4d3202*/
    *(_WORD *)this->unknownShort528 = 0; /*0x4d3209*/
    *(_WORD *)this->FootClass_field_short_52A = 0; /*0x4d3210*/
    this->unknown530 = 0; /*0x4d3217*/
    this->unknown534 = 0; /*0x4d321d*/
    this->unknown538 = 0; /*0x4d3223*/
    this->FootClass_field_bool_53C = 0; /*0x4d3229*/
    this->unknown540 = 0; /*0x4d322f*/
    LOWORD(this->currentMapCoords[0]) = 0; /*0x4d3235*/
    HIWORD(this->currentMapCoords[0]) = 0; /*0x4d323c*/
    LOWORD(this->lastMapCoords[0]) = 0; /*0x4d3243*/
    HIWORD(this->lastMapCoords[0]) = 0; /*0x4d324a*/
    LOWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3251*/
    HIWORD(this->lastJumpjetMapCoords[0]) = 0; /*0x4d3258*/
    LOWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d325f*/
    HIWORD(this->currentJumpjetMapCoords[0]) = 0; /*0x4d3266*/
    this->unknownCoords568[0] = 0; /*0x4d326d*/
    this->unknownCoords568[1] = 0; /*0x4d3273*/
    this->unknownCoords568[2] = 0; /*0x4d3279*/
    this->currentSpeed_percentage[0] = 0; /*0x4d327f*/
    this->currentSpeed_percentage[1] = 0; /*0x4d328b*/
    this->currentSpeed_multiplier[0] = 0; /*0x4d3292*/
    this->currentSpeed_multiplier[1] = 1072693248; /*0x4d329b*/
    AbstractClassVector::Construct((AbstractClassVector *)this->unknownAbstractArray588, 0, 0); /*0x4d32a5*/
    this->unknownAbstractArray588[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32aa*/
    *(_DWORD *)&this->__pad_58C[16] = 10; /*0x4d32b0*/
    *(_DWORD *)&this->__pad_58C[12] = 0; /*0x4d32b7*/
    this->FootClass_field_5A0 = 0; /*0x4d32c0*/
    this->movementDestination = 0; /*0x4d32c7*/
    this->lastDestination = 0; /*0x4d32d0*/
    AbstractClassVector::Construct((AbstractClassVector *)this->FootClass_field_abstract_array_5AC, 0, 0); /*0x4d32d6*/
    this->FootClass_field_abstract_array_5AC[0] = (int)&DynamicVectorClass<AbstractClass *>::`vftable'; /*0x4d32e0*/
    *(_DWORD *)&this->__pad_5B0[16] = 10; /*0x4d32e6*/
    *(_DWORD *)&this->__pad_5B0[12] = 0; /*0x4d32e9*/
    this->FootClass_field_int_5C4 = -1; /*0x4d32ec*/
    this->FootClass_field_5C8 = 0; /*0x4d32f6*/
    this->FootClass_field_5CC = 0; /*0x4d32fc*/
    this->FootClass_field_bool_5D1 = 0; /*0x4d3302*/
    this->team = 0; /*0x4d3308*/
    this->nextTeamMember = 0; /*0x4d330e*/
    this->FootClass_field_5DC = 0; /*0x4d3314*/
    this->pathDelayTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3320*/
    this->pathDelayTimer[2] = 0; /*0x4d3326*/
    this->FootClass_field_int_64C = 10; /*0x4d332c*/
    this->FootClass_field_timer_650[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3338*/
    this->FootClass_field_timer_650[2] = 0; /*0x4d333e*/
    v3 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d3344*/
    this->sightTimer[2] = 0; /*0x4d3349*/
    this->sightTimer[0] = v3; /*0x4d334f*/
    this->blockagePathTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d335b*/
    this->blockagePathTimer[2] = 0; /*0x4d3361*/
    this->locomotor[0] = 0; /*0x4d3367*/
    this->unknownPoint3d678[0] = dword_8B3DA8; /*0x4d3378*/
    this->unknownPoint3d678[1] = dword_8B3DAC; /*0x4d3384*/
    this->unknownPoint3d678[2] = dword_8B3DB0; /*0x4d338c*/
    this->tubeIndex = -1; /*0x4d338f*/
    this->unknownBool685 = 0; /*0x4d3396*/
    this->waypointIndex = 0; /*0x4d339c*/
    this->unknownBool687 = 0; /*0x4d33a2*/
    this->unknownBool688 = 0; /*0x4d33a8*/
    this->isTeamLeader = 0; /*0x4d33ae*/
    this->shouldScanForTarget = 0; /*0x4d33b4*/
    this->FootClass_field_bool_68B = 0; /*0x4d33ba*/
    this->FootClass_field_bool_68C = 0; /*0x4d33c0*/
    this->unknownBool68D = 0; /*0x4d33c6*/
    this->FootClass_field_bool_68E = 0; /*0x4d33cc*/
    this->shouldEnterAbsorber = 0; /*0x4d33d2*/
    this->shouldEnterOccupiable = 0; /*0x4d33d8*/
    this->shouldGarrisonStructure = 0; /*0x4d33de*/
    this->parasiteEatingMe = 0; /*0x4d33e4*/
    this->unknown698 = 0; /*0x4d33ea*/
    this->parasiteImUsing = 0; /*0x4d33f0*/
    this->paralysisTimer[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x4d33fc*/
    this->paralysisTimer[2] = 0; /*0x4d3402*/
    this->FootClass_field_bool_6AC = 0; /*0x4d340e*/
    this->isAttackedByLocomotor = 0; /*0x4d3414*/
    this->isLetGoByLocomotor = 0; /*0x4d341a*/
    this->FootClass_field_bool_6AF = 0; /*0x4d3420*/
    this->FootClass_field_bool_6B0 = 0; /*0x4d3426*/
    this->FootClass_field_bool_6B1 = 0; /*0x4d342c*/
    this->FootClass_field_bool_6B2 = 0; /*0x4d3432*/
    this->FootClass_field_bool_6B3 = 0; /*0x4d3438*/
    this->FootClass_field_bool_6B4 = 0; /*0x4d343e*/
    this->FootClass_field_bool_6B5 = 0; /*0x4d3444*/
    this->frozenStill = 1; /*0x4d344a*/
    this->FootClass_field_bool_6B7 = 0; /*0x4d3451*/
    this->FootClass_field_bool_6B8 = 0; /*0x4d3457*/
    this->TechnoClass = &FootClass::`vftable'; /*0x4d345d*/
    this->? = &FootClass::`vftable'; /*0x4d3463*/
    this->? = &FootClass::`vftable'; /*0x4d346a*/
    this->? = &FootClass::`vftable'; /*0x4d3471*/
    this->pathDirections[0] = -1; /*0x4d3478*/
    AudioController::Init((AudioController *)this->audioController7); /*0x4d3482*/
    if ( FootClass_Array.? < (int)FootClass_Array.? /*0x4d34bb*/
      || (BYTE1(FootClass_Array.?) || !FootClass_Array.?)
      && FootClass_Array.? > 0
      && (*((unsigned __int8 (__thiscall **)(FootClass *, char *, _DWORD))FootClass_Array.TechnoClass + 2))(
           &FootClass_Array,
           (char *)FootClass_Array.? + FootClass_Array.?,
           0) )
    {
      v4 = FootClass_Array.?++; /*0x4d34c8*/
      *((_DWORD *)FootClass_Array.? + v4) = this; /*0x4d34d7*/
    }
    LOBYTE(this->?) |= 4u; /*0x4d34e0*/
    if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x4d3515*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
      && g_BuildingLoadQueue_Array.?[2] > 0
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_BuildingLoadQueue_Array.?[2] + 8))(
           &g_BuildingLoadQueue_Array.?[2],
           g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
           0) )
    {
      v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x4d3522*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = this; /*0x4d3531*/
    }
    return &this->TechnoClass; /*0x4d3536*/
}
// truth-filled 0x6AF360 (G42.52 truth-emitting generator)
void ra2::game::SlaveManagerClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1)
{
    int v2; // eax
    int v4; // [esp+8h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6af366*/
    this->slaveVectorCount = 0; /*0x6af371*/
    this->slaveVectorCapacity = 0; /*0x6af374*/
    LOBYTE(this->creationFrame) = 1; /*0x6af377*/
    BYTE1(this->creationFrame) = 0; /*0x6af37b*/
    this->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6af37e*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6af385*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6af38c*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af395*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
    this->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6af39b*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a1*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3a8*/
    this->? = &SlaveManagerClass::`vftable'; /*0x6af3af*/
    this->master = 0; /*0x6af3b6*/
    this->house = 0; /*0x6af3b9*/
    this->slaveOwner = 0; /*0x6af3bc*/
    this->slaveType = 0; /*0x6af3bf*/
    this->slaveCount = 0; /*0x6af3c2*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af3cb*/
    this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
    this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
    this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
    this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
    if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
      || (byte_B0B5FD || !dword_B0B5F8)
      && dword_B0B604 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
           &SlaveManagerClass_Array,
           dword_B0B5F8 + dword_B0B604,
           0) )
    {
      v2 = dword_B0B600++; /*0x6af419*/
      *((_DWORD *)dword_B0B5F4 + v2) = this; /*0x6af428*/
    }
    return (int)this; /*0x6af42d*/
}
// truth-filled 0x6B6EA0 (G42.52 truth-emitting generator)
void ra2::game::SpawnManagerClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1)
{
    int v2; // eax
    int v4; // [esp+10h] [ebp-8h]

    AbstractClass::Constructor((AbstractClass *)this); /*0x6b6ea8*/
    SpawnControlVector::Constructor((SpawnControlVector *)this->spawns, 0, 0); /*0x6b6eb6*/
    this->spawns[0] = (int)&DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6ebb*/
    *(_DWORD *)&this->__pad_48[4] = 10; /*0x6b6ec1*/
    *(_DWORD *)this->__pad_48 = 0; /*0x6b6ec8*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ed4*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6ee0*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
    this->AbstractClass = &SpawnManagerClass::`vftable'; /*0x6b6ee6*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6eec*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6ef3*/
    this->? = &SpawnManagerClass::`vftable'; /*0x6b6efa*/
    this->owner = 0; /*0x6b6f01*/
    this->spawnOwner = 0; /*0x6b6f04*/
    this->spawnType = 0; /*0x6b6f07*/
    *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f11*/
    this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
    this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
    this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
    this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
    this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
    this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b6f28*/
    this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
    this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
    if ( dword_B0B890 < dword_B0B888 /*0x6b6f69*/
      || (byte_B0B88D || !dword_B0B888)
      && dword_B0B894 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SpawnManagerClass_Array + 8))(
           &SpawnManagerClass_Array,
           dword_B0B888 + dword_B0B894,
           0) )
    {
      v2 = dword_B0B890++; /*0x6b6f76*/
      *((_DWORD *)dword_B0B884 + v2) = this; /*0x6b6f85*/
    }
    return (int)this; /*0x6b6f8a*/
}
// truth-filled 0x43B740 (G42.52 truth-emitting generator)
void gamemd::BuildingClass::CreateDestructionCrater()
{
    int v4; // edx
    int v5; // edx
    __int16 v6; // cx
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int v10; // eax
    int vtable2; // ebp
    _DWORD *v12; // edi
    int v13; // eax
    _DWORD *v14; // ecx
    int v15; // eax
    int v16; // eax
    int Vtable3; // [esp+18h] [ebp+4h]

    TechnoClass::TechnoClass((TechnoClass *)this, a3); /*0x43b74b*/
    *(_DWORD *)(this + 1312) = a2; /*0x43b756*/
    *(_DWORD *)(this + 1316) = 0; /*0x43b75c*/
    *(_DWORD *)(this + 1320) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b76b*/
    *(_DWORD *)(this + 1328) = 0; /*0x43b771*/
    *(_DWORD *)(this + 1332) = -1; /*0x43b777*/
    *(_DWORD *)(this + 1336) = -1; /*0x43b77d*/
    *(_DWORD *)(this + 1340) = 0; /*0x43b783*/
    *(_DWORD *)(this + 1344) = 0; /*0x43b789*/
    *(_DWORD *)(this + 1348) = 0; /*0x43b78f*/
    *(_DWORD *)(this + 1352) = 0; /*0x43b795*/
    *(_DWORD *)(this + 1356) = 0; /*0x43b79b*/
    *(_DWORD *)(this + 1360) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b7a7*/
    *(_DWORD *)(this + 1368) = 0; /*0x43b7ad*/
    *(_BYTE *)(this + 1512) = 0; /*0x43b7b3*/
    *(_DWORD *)(this + 1528) = -1; /*0x43b7b9*/
    *(_DWORD *)(this + 1532) = -1; /*0x43b7bf*/
    *(_DWORD *)(this + 1536) = 0; /*0x43b7c5*/
    v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b7cb*/
    *(_DWORD *)(this + 1548) = 0; /*0x43b7d1*/
    *(_DWORD *)(this + 1540) = v4; /*0x43b7d7*/
    *(_DWORD *)(this + 1552) = 0; /*0x43b7dd*/
    *(_DWORD *)(this + 1556) = 0; /*0x43b7e3*/
    *(_DWORD *)(this + 1560) = 0; /*0x43b7e9*/
    *(_DWORD *)(this + 1564) = 0; /*0x43b7ef*/
    *(_DWORD *)(this + 1568) = 0; /*0x43b7f5*/
    *(_BYTE *)(this + 1572) = 0; /*0x43b7fb*/
    *(_DWORD *)(this + 1576) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b807*/
    *(_DWORD *)(this + 1584) = 0; /*0x43b80d*/
    *(_DWORD *)(this + 1588) = 0; /*0x43b813*/
    *(_DWORD *)(this + 1592) = 1; /*0x43b819*/
    *(_DWORD *)(this + 1596) = dword_89C808; /*0x43b82f*/
    *(_DWORD *)(this + 1600) = dword_89C80C; /*0x43b83b*/
    *(_DWORD *)(this + 1604) = dword_89C810; /*0x43b844*/
    *(_DWORD *)(this + 1608) = dword_89C814; /*0x43b84d*/
    *(_DWORD *)(this + 1612) = g_BuildingClassPool; /*0x43b85c*/
    *(_DWORD *)(this + 1616) = dword_89C84C; /*0x43b868*/
    *(_DWORD *)(this + 1620) = dword_89C850; /*0x43b871*/
    *(_DWORD *)(this + 1624) = 0; /*0x43b876*/
    *(_DWORD *)(this + 1628) = 0; /*0x43b87c*/
    *(_BYTE *)(this + 1632) = 1; /*0x43b882*/
    *(_BYTE *)(this + 1633) = 0; /*0x43b889*/
    *(_BYTE *)(this + 1634) = 0; /*0x43b88f*/
    *(_DWORD *)(this + 1636) = 0; /*0x43b895*/
    *(_BYTE *)(this + 1640) = 0; /*0x43b89b*/
    *(_BYTE *)(this + 1641) = 0; /*0x43b8ab*/
    *(_DWORD *)(this + 1648) = 0; /*0x43b8b1*/
    *(_DWORD *)(this + 1652) = 0; /*0x43b8b7*/
    *(_BYTE *)(this + 1656) = 1; /*0x43b8bd*/
    *(_BYTE *)(this + 1657) = 0; /*0x43b8c4*/
    *(_DWORD *)(this + 1644) = &DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b8ca*/
    *(_DWORD *)(this + 1664) = 10; /*0x43b8d0*/
    *(_DWORD *)(this + 1660) = 0; /*0x43b8d6*/
    *(_DWORD *)(this + 1672) = 0; /*0x43b8dc*/
    *(_DWORD *)(this + 1676) = 0; /*0x43b8e2*/
    *(_BYTE *)(this + 1680) = 1; /*0x43b8e8*/
    *(_BYTE *)(this + 1681) = 0; /*0x43b8ef*/
    *(_DWORD *)(this + 1668) = &DynamicVectorClass<InfantryClass *>::`vftable'; /*0x43b8f5*/
    *(_DWORD *)(this + 1688) = 10; /*0x43b8fb*/
    *(_DWORD *)(this + 1684) = 0; /*0x43b901*/
    *(_DWORD *)(this + 1692) = 0; /*0x43b907*/
    *(_BYTE *)(this + 1736) = 0; /*0x43b90d*/
    *(_BYTE *)(this + 1737) = 0; /*0x43b913*/
    *(_BYTE *)(this + 1738) = 0; /*0x43b919*/
    *(_BYTE *)(this + 1739) = 0; /*0x43b91f*/
    *(_BYTE *)(this + 1740) = 0; /*0x43b925*/
    v5 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x43b92b*/
    *(_DWORD *)(this + 1752) = 0; /*0x43b931*/
    *(_DWORD *)(this + 1744) = v5; /*0x43b937*/
    *(_BYTE *)(this + 1756) = 1; /*0x43b93d*/
    *(_BYTE *)(this + 1757) = 0; /*0x43b944*/
    *(_BYTE *)(this + 1758) = 0; /*0x43b94d*/
    *(_BYTE *)(this + 1759) = 0; /*0x43b953*/
    *(_BYTE *)(this + 1760) = 0; /*0x43b95a*/
    *(_BYTE *)(this + 1761) = 0; /*0x43b960*/
    *(_BYTE *)(this + 1762) = 0; /*0x43b966*/
    *(_BYTE *)(this + 1763) = 0; /*0x43b96c*/
    *(_BYTE *)(this + 1764) = 0; /*0x43b972*/
    *(_BYTE *)(this + 1765) = 0; /*0x43b978*/
    *(_BYTE *)(this + 1766) = 0; /*0x43b97e*/
    *(_BYTE *)(this + 1767) = 0; /*0x43b984*/
    *(_BYTE *)(this + 1768) = 0; /*0x43b98a*/
    *(_BYTE *)(this + 1769) = 0; /*0x43b990*/
    *(_BYTE *)(this + 1770) = 1; /*0x43b996*/
    *(_BYTE *)(this + 1771) = 0; /*0x43b99d*/
    *(_BYTE *)(this + 1772) = 0; /*0x43b9a3*/
    *(_BYTE *)(this + 1773) = 0; /*0x43b9a9*/
    *(_DWORD *)(this + 1776) = 0; /*0x43b9af*/
    *(_DWORD *)(this + 1780) = 0; /*0x43b9b5*/
    *(_BYTE *)(this + 1784) = 0; /*0x43b9bb*/
    *(_BYTE *)(this + 1785) = 0; /*0x43b9c1*/
    *(_BYTE *)(this + 1786) = 0; /*0x43b9c7*/
    *(_DWORD *)(this + 1788) = 0; /*0x43b9cd*/
    *(_WORD *)(this + 1792) = 1000; /*0x43b9d3*/
    *(_BYTE *)(this + 1794) = 0; /*0x43b9dc*/
    *(_BYTE *)(this + 1795) = -1; /*0x43b9e2*/
    *(_DWORD *)(this + 1796) = 0; /*0x43b9e8*/
    *(_DWORD *)(this + 1812) = 0; /*0x43b9ee*/
    *(_DWORD *)(this + 1816) = 0; /*0x43b9f4*/
    *(_DWORD *)this = &BuildingClass_Vtable; /*0x43b9fa*/
    *(_DWORD *)(this + 4) = &BuildingClass_Vtable2; /*0x43ba00*/
    *(_DWORD *)(this + 8) = &BuildingClass_Vtable3; /*0x43ba07*/
    *(_DWORD *)(this + 12) = &BuildingClass_Vtable4; /*0x43ba0e*/
    AbstractClass::GenerateUniqueID((AbstractClass *)(this + 4)); /*0x43ba15*/
    *(_DWORD *)(this + 1516) = 0; /*0x43ba22*/
    LOBYTE(v6) = 0; /*0x43ba28*/
    *(_DWORD *)(this + 1520) = 0; /*0x43ba2a*/
    *(_DWORD *)(this + 1524) = 0; /*0x43ba30*/
    *(_DWORD *)(this + 1800) = 0; /*0x43ba36*/
    v7 = *(_DWORD *)(this + 1312); /*0x43ba38*/
    *(_DWORD *)(this + 1804) = 0; /*0x43ba3e*/
    *(_DWORD *)(this + 1808) = 0; /*0x43ba43*/
    if ( v7 ) /*0x43ba46*/
    {
      HIBYTE(v6) = *(_BYTE *)(v7 + 5904); /*0x43ba48*/
      LOWORD(a3) = v6; /*0x43ba52*/
      FacingClass::Update((char *)(this + 880), &a3); /*0x43ba5e*/
    }
    memset((void *)(this + 1372), 0, 0x54u); /*0x43ba70*/
    memset((void *)(this + 1480), 0, 0x20u); /*0x43ba7d*/
    *(_DWORD *)(this + 1456) = 0; /*0x43ba7f*/
    *(_DWORD *)(this + 1460) = 0; /*0x43ba8b*/
    *(_DWORD *)(this + 1464) = 0; /*0x43ba91*/
    *(_DWORD *)(this + 1468) = 0; /*0x43ba97*/
    *(_DWORD *)(this + 1472) = 0; /*0x43ba9d*/
    *(_BYTE *)(this + 1476) = 0; /*0x43baa3*/
    AudioController::Init((AudioController *)(this + 1696)); /*0x43baa9*/
    AudioController::Init((AudioController *)(this + 1716)); /*0x43bab4*/
    LOWORD(a3) = 0x4000; /*0x43babd*/
    FacingClass::Update((char *)(this + 880), &a3); /*0x43bacb*/
    *(_DWORD *)(this + 1568) = 0; /*0x43bad0*/
    if ( stru_A8EB00.ObjectTypeClass[20] < stru_A8EB00.ObjectTypeClass[18] /*0x43bb08*/
      || (BYTE1(stru_A8EB00.ObjectTypeClass[19]) || !stru_A8EB00.ObjectTypeClass[18])
      && stru_A8EB00.ObjectTypeClass[21] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A8EB00.ObjectTypeClass[16] + 8))(
           &stru_A8EB00.ObjectTypeClass[16],
           stru_A8EB00.ObjectTypeClass[21] + stru_A8EB00.ObjectTypeClass[18],
           0) )
    {
      v8 = stru_A8EB00.ObjectTypeClass[20]++; /*0x43bb15*/
      *(_DWORD *)(stru_A8EB00.ObjectTypeClass[17] + 4 * v8) = this; /*0x43bb24*/
    }
    BuildingClass::Update((BuildingClass *)this); /*0x43bb29*/
    if ( g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1] < g_BuildingLoadQueue_Array.BuildCat[0] /*0x43bb62*/
      || (BYTE1(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[0]) || !g_BuildingLoadQueue_Array.BuildCat[0])
      && g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.Buildup[0] + 8))(
           g_BuildingLoadQueue_Array.Buildup,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[2] + g_BuildingLoadQueue_Array.BuildCat[0],
           0) )
    {
      v9 = g_BuildingLoadQueue_Array.HalfDamageSmokeLocation1[1]++; /*0x43bb6f*/
      *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.BuildupLoaded + 4 * v9) = this; /*0x43bb7e*/
    }
    if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x43bbb5*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
      && g_BuildingLoadQueue_Array.?[2] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
           g_BuildingLoadQueue_Array.?,
           g_BuildingLoadQueue_Array.?[2] + g_BuildingLoadQueue_Array.?,
           0) )
    {
      v10 = g_BuildingLoadQueue_Array.?[1]++; /*0x43bbc2*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v10) = this; /*0x43bbd1*/
    }
    Vtable3 = AbstractClass::GetVtable3((AbstractClass *)(this + 4)); /*0x43bbe0*/
    if ( (int)g_BuildingLoadQueue_Array.? + 1 <= (int)g_BuildingLoadQueue_Array.? ) /*0x43bbec*/
      goto LABEL_29; /*0x43bbec*/
    if ( g_BuildingLoadQueue_Array.? ) /*0x43bbf4*/
    {
      vtable2 = (int)g_BuildingLoadQueue_Array.?; /*0x43bbfd*/
      if ( (int)g_BuildingLoadQueue_Array.? < 0 ) /*0x43bc01*/
        goto LABEL_30; /*0x43bc01*/
    }
    else
    {
      vtable2 = 10; /*0x43bbf6*/
    }
    a3 = (int)g_BuildingLoadQueue_Array.? + vtable2; /*0x43bc09*/
    v12 = (_DWORD *)__2_YAPAXI_Z(8 * ((int)g_BuildingLoadQueue_Array.? + vtable2)); /*0x43bc16*/
    if ( v12 ) /*0x43bc1d*/
    {
      v13 = 0; /*0x43bc27*/
      --a3; /*0x43bc2a*/
      if ( (int)g_BuildingLoadQueue_Array.? > 0 ) /*0x43bc36*/
      {
        do /*0x43bc57*/
        {
          v14 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v13++; /*0x43bc3e*/
          v12[2 * v13 - 2] = *v14; /*0x43bc44*/
          v12[2 * v13 - 1] = v14[1]; /*0x43bc4b*/
        }
        while ( v13 < (int)g_BuildingLoadQueue_Array.? ); /*0x43bc57*/
      }
      __3_YAXPAX_Z(g_BuildingLoadQueue_Array.TechnoTypeClass); /*0x43bc60*/
      g_BuildingLoadQueue_Array.TechnoTypeClass = v12; /*0x43bc6f*/
      g_BuildingLoadQueue_Array.? = (char *)g_BuildingLoadQueue_Array.? + vtable2; /*0x43bc75*/
      g_BuildingLoadQueue_Array.? = 0; /*0x43bc7a*/
  LABEL_29:
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.?) = Vtable3; /*0x43bc80*/
      *((_DWORD *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)g_BuildingLoadQueue_Array.? + 1) = this; /*0x43bc9e*/
      LOBYTE(g_BuildingLoadQueue_Array.?) = 0; /*0x43bca8*/
      ++g_BuildingLoadQueue_Array.?; /*0x43bcae*/
    }
  LABEL_30:
    v15 = *(_DWORD *)(this + 1312); /*0x43bcb3*/
    if ( v15 ) /*0x43bcbb*/
    {
      v16 = *(_DWORD *)(v15 + 6016); /*0x43bcbd*/
      if ( v16 < 1 ) /*0x43bcc6*/
        v16 = 1; /*0x43bcc8*/
      RadioClass::SetLinkCount((RadioClass *)this, v16); /*0x43bcd0*/
      return this; /*0x43bcd5*/
    }
    else
    {
      RadioClass::SetLinkCount((RadioClass *)this, 1); /*0x43bce2*/
      return this; /*0x43bce7*/
    }
}
// truth-filled 0x71E6A0 (G42.52 truth-emitting generator)
void gamemd::TActionClass::ExecuteAction(int a0, ra2::game::ObjectClass* a1, ra2::game::TechnoClass* a2, gamemd::HouseClass* a3, int a4, int a5)
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// truth-filled 0x71E6A0 (G42.52 truth-emitting generator)
void gamemd::TActionClass::ddtor()
{
    int v2; // ecx
    char v3; // al
    int v4; // eax
    TActionClass **v5; // edx
    int v6; // eax
    int v7; // eax

    AbstractClass::Constructor((AbstractClass *)this); /*0x71e6a4*/
    this->idxArray = -1; /*0x71e6ab*/
    this->TActionClass_field_28 = 0; /*0x71e6b2*/
    this->TActionClass_field_2C = 0; /*0x71e6b5*/
    this->TActionClass_field_30 = 0; /*0x71e6b8*/
    LOBYTE(this->TActionClass_field_38) = 0; /*0x71e6bb*/
    *(_DWORD *)&this->TActionClass_field_54 = 0; /*0x71e6be*/
    this->AbstractClass = &TEventClass::`vftable'; /*0x71e6c1*/
    this->? = &TEventClass::`vftable'; /*0x71e6c7*/
    this->? = &TEventClass::`vftable'; /*0x71e6ce*/
    this->? = &TEventClass::`vftable'; /*0x71e6d5*/
    v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e6dc*/
    if ( g_BuildingLoadQueue_Array.?[54] < g_BuildingLoadQueue_Array.?[52] /*0x71e71a*/
      || (BYTE1(g_BuildingLoadQueue_Array.?[53]) || !g_BuildingLoadQueue_Array.?[52])
      && g_BuildingLoadQueue_Array.?[55] > 0
      && (v3 = (*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[50] + 8))(
                 &g_BuildingLoadQueue_Array.?[50],
                 g_BuildingLoadQueue_Array.?[52] + g_BuildingLoadQueue_Array.?[55],
                 0),
          v2 = g_BuildingLoadQueue_Array.?[54],
          v3) )
    {
      g_BuildingLoadQueue_Array.?[54] = v2 + 1; /*0x71e71f*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[51] + 4 * v2) = this; /*0x71e72b*/
      v2 = g_BuildingLoadQueue_Array.?[54]; /*0x71e72e*/
    }
    v4 = 0; /*0x71e734*/
    if ( v2 <= 0 ) /*0x71e738*/
    {
  LABEL_11:
      v4 = -1; /*0x71e74c*/
    }
    else
    {
      v5 = (TActionClass **)g_BuildingLoadQueue_Array.?[51]; /*0x71e73a*/
      while ( *v5 != this ) /*0x71e742*/
      {
        ++v4; /*0x71e744*/
        ++v5; /*0x71e745*/
        if ( v4 >= v2 ) /*0x71e74a*/
          goto LABEL_11; /*0x71e74a*/
      }
    }
    this->idxArray = v4; /*0x71e74f*/
    if ( g_BuildingLoadQueue_Array.GateCloseDelay[0] < g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] /*0x71e786*/
      || (BYTE1(g_BuildingLoadQueue_Array.align_E24[0]) || !g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2])
      && g_BuildingLoadQueue_Array.GateCloseDelay[1] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[0] + 8))(
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2,
           g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[2] + g_BuildingLoadQueue_Array.GateCloseDelay[1],
           0) )
    {
      v6 = g_BuildingLoadQueue_Array.GateCloseDelay[0]++; /*0x71e793*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.HalfDamageSmokeLocation2[1] + 4 * v6) = this; /*0x71e7a2*/
    }
    if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x71e7d9*/
      || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
      && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
           &g_BuildingLoadQueue_Array.LightVisibility,
           g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
           0) )
    {
      v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x71e7e6*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x71e7f5*/
    }
    this->TActionClass_field_34 = 0; /*0x71e7f8*/
    return (int)this; /*0x71e7fd*/
}
// link stub (no binary body yet)
gamemd::TEventClass::ddtor() {}
} // namespace gamemd
