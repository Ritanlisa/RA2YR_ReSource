// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006B0300  BuildingClass::FindPlacementCells2  this=SlaveManagerClass  sig=csp ====
_DWORD *__thiscall BuildingClass_FindPlacementCells2(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int FoundationWidth; // eax
  int v8; // ebx
  int v9; // edi
  int FoundationHeight; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int16 *v14; // eax
  int TileIndex; // eax
  int v16; // eax
  __int16 v17; // dx
  int v19; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v20[2]; // [esp+10h] [ebp-8h] BYREF

  v4 = this->master; /*0x6b0308*/
  if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 )
  {
    v5 = this->master; /*0x6b0319*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(this->master) == 6 ? v5 : 0;
    else
      v6 = 0; /*0x6b0320*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v6 + 1312)); /*0x6b033c*/
    v8 = this->master; /*0x6b0341*/
    v9 = FoundationWidth; /*0x6b0344*/
    if ( v8 )
    {
      v11 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 44))(this->master); /*0x6b0360*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v11 == 6 ? v8 + 0x520 : 1312), 0);
    }
    else
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(MEMORY[0x520], 0); /*0x6b0358*/
    }
  }
  else if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->master + 132))(this->master) + 1028) ) /*0x6b038a*/
  {
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->master + 132))(this->master); /*0x6b0399*/
    v9 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v12 + 1028)); /*0x6b03af*/
    v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->master + 132))(this->master); /*0x6b03b3*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v13 + 1028), 0); /*0x6b03c4*/
  }
  else
  {
    v9 = 1; /*0x6b03c8*/
    FoundationHeight = 1; /*0x6b03cd*/
  }
  v14 = (__int16 *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->master + 440))(this->master, &v19); /*0x6b03f4*/
  TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], v14, 0, 0); /*0x6b0400*/
  v16 = *LayerClass::Pathfinding_Find( /*0x6b041c*/
           &MEMORY[0x87F7E8],
           (int)v20,
           v20,
           (__int16 *)&a3,
           1,
           TileIndex,
           0,
           0,
           v9,
           FoundationHeight,
           1,
           0,
           0,
           0,
           (__int16 *)&a3,
           0,
           1);
  v20[0] = v16; /*0x6b0424*/
  v17 = HIWORD(v16); /*0x6b0428*/
  if ( v16 == MEMORY[0xB0B5B8] ) /*0x6b042f*/
  {
    *a2 = MEMORY[0xB0B5B8]; /*0x6b0441*/
    return a2; /*0x6b043a*/
  }
  else
  {
    if ( v9 > 2 ) /*0x6b044c*/
    {
      HIWORD(a3) = HIWORD(v20[0]); /*0x6b044f*/
      LOWORD(a3) = v16 + 1; /*0x6b0454*/
      v16 = a3; /*0x6b0459*/
      v20[0] = a3; /*0x6b045d*/
      v17 = HIWORD(a3); /*0x6b0461*/
    }
    if ( FoundationHeight > 2 ) /*0x6b0468*/
    {
      LOWORD(a3) = v16; /*0x6b046b*/
      HIWORD(a3) = v17 + 1; /*0x6b0470*/
      v16 = a3; /*0x6b0475*/
    }
    *a2 = v16; /*0x6b0480*/
    return a2; /*0x6b0482*/
  }
}


// ==== 0x006B0490  ObjectClass::Event_Process_6B0490  this=SlaveManagerClass  sig=csp ====
int *__thiscall sub_6B0490(_DWORD *this)
{
  int i; // esi
  int *result; // eax
  int v4; // ecx

  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b0498*/
  {
    result = *(int **)(this->slaveVectorCount + 4 * i); /*0x6b049d*/
    v4 = *result; /*0x6b04a3*/
    if ( result[1] != 6 ) /*0x6b04a8*/
    {
      if ( v4 ) /*0x6b04ac*/
        result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b04b0*/
    }
  }
  return result; /*0x6b04b9*/
}


// ==== 0x006B04C0  FactoryClass::PlaceExitUnits  this=SlaveManagerClass  sig=csp ====
int __thiscall sub_6B04C0(_DWORD *this)
{
  int result; // eax
  int **v3; // ebp
  int *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // esi
  int v8; // edi
  int v9; // esi
  _WORD *v10; // eax
  unsigned __int16 v11; // dx
  int v12; // eax
  void *v13; // eax
  int *v14; // eax
  int *v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // [esp+18h] [ebp-4Ch]
  unsigned __int16 v22; // [esp+1Eh] [ebp-46h]
  int i; // [esp+20h] [ebp-44h]
  int *v24; // [esp+24h] [ebp-40h]
  int v25; // [esp+28h] [ebp-3Ch] BYREF
  int v26; // [esp+2Ch] [ebp-38h] BYREF
  int v27; // [esp+30h] [ebp-34h] BYREF
  int v28; // [esp+34h] [ebp-30h] BYREF
  int v29; // [esp+38h] [ebp-2Ch]
  int v30; // [esp+3Ch] [ebp-28h]
  char v31[12]; // [esp+40h] [ebp-24h] BYREF
  int v32[3]; // [esp+4Ch] [ebp-18h] BYREF
  char v33[12]; // [esp+58h] [ebp-Ch] BYREF

  result = this->q048 - 1; /*0x6b04c9*/
  for ( i = result; i >= 0; --i )
  {
    v3 = *(int ***)(this->slaveVectorCount + 4 * result); /*0x6b04da*/
    v4 = *v3; /*0x6b04e0*/
    v24 = *v3; /*0x6b04e5*/
    if ( !v3[1] )
    {
      v5 = this->master; /*0x6b04ef*/
      if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 )
      {
        v6 = this->master; /*0x6b0504*/
        if ( v6 )
          v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 44))(this->master) == 6 ? v6 : 0;
        else
          v7 = 0; /*0x6b050b*/
        v8 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v7 + 1312)) - 1; /*0x6b0536*/
        v9 = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v7 + 1312), 0) / 2; /*0x6b054d*/
        v10 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->master + 440))(this->master, &v26); /*0x6b054f*/
        v11 = v9 + v10[1]; /*0x6b055f*/
        v4 = v24; /*0x6b0562*/
        LOWORD(v21) = v8 + *v10; /*0x6b0566*/
        HIWORD(v21) = v11; /*0x6b056b*/
        v12 = v21; /*0x6b0570*/
        v22 = v11; /*0x6b0574*/
      }
      else
      {
        v12 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->master + 440))(this->master, &v27); /*0x6b058a*/
        v22 = HIWORD(v12); /*0x6b058c*/
      }
      v25 = v12; /*0x6b0597*/
      if ( __PAIR32__(v22, v12) != MEMORY[0xB0B5B8] ) /*0x6b059b*/
      {
        v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x6b05b9*/
        v14 = (int *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)v13 + 72))(v13, v31); /*0x6b05c7*/
        v28 = *v14; /*0x6b05ce*/
        v29 = v14[1]; /*0x6b05d5*/
        v30 = v14[2]; /*0x6b05eb*/
        v15 = ObjectPlacement::CalcPosition_Wrapper(v32, &v28, 0); /*0x6b05f4*/
        v16 = *v15; /*0x6b05fc*/
        v28 = v16; /*0x6b05fe*/
        v17 = v15[1]; /*0x6b0604*/
        v29 = v17; /*0x6b0607*/
        v18 = v15[2]; /*0x6b060b*/
        v30 = v18; /*0x6b060e*/
        if ( (v16 != MEMORY[0xB0B5D8] || v17 != MEMORY[0xB0B5DC] || v18 != MEMORY[0xB0B5E0]) /*0x6b063a*/
          && (v16 != MEMORY[0xB0B618] || v17 != MEMORY[0xB0B61C] || v18 != MEMORY[0xB0B620]) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(*v4 + 216))(v4, &v28, 0) ) /*0x6b0647*/
          {
            v19 = *v4; /*0x6b0654*/
            v20 = (*(int (__thiscall **)(_DWORD, char *, int, int))(*(_DWORD *)this->master + 72))( /*0x6b0661*/
                    this->master,
                    v33,
                    1,
                    1);
            (*(void (__thiscall **)(int *, int))(v19 + 372))(v4, v20); /*0x6b0667*/
            v3[1] = (int *)1; /*0x6b066d*/
          }
        }
      }
    }
    result = i - 1; /*0x6b0678*/
  }
  return result; /*0x6b0686*/
}


// ==== 0x006B0690  BuildingClass::GetRallyPointCoord  this=BuildingClass  sig=csp ====
_DWORD *__thiscall sub_6B0690(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edi
  int v7; // esi
  _WORD *v8; // eax
  int v10; // [esp+4h] [ebp-8h]
  _BYTE v11[4]; // [esp+8h] [ebp-4h] BYREF

  v3 = this->objectTypeFlags; /*0x6b0696*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6 )
  {
    v4 = this->objectTypeFlags; /*0x6b06ad*/
    if ( v4 )
      v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 44))(this->objectTypeFlags) == 6 ? v4 : 0;
    else
      v5 = 0; /*0x6b06b4*/
    v6 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v5 + 1312)) - 1; /*0x6b06df*/
    v7 = BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(v5 + 1312), 0) / 2; /*0x6b06f6*/
    v8 = (_WORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->objectTypeFlags + 440))(this->objectTypeFlags, v11); /*0x6b06f8*/
    HIWORD(v10) = v7 + v8[1]; /*0x6b0708*/
    LOWORD(v10) = *v8 + v6; /*0x6b0711*/
    *a2 = v10; /*0x6b071c*/
    return a2; /*0x6b070d*/
  }
  else
  {
    *a2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->objectTypeFlags + 440))(this->objectTypeFlags, v11); /*0x6b073c*/
    return a2; /*0x6b0737*/
  }
}


// ==== 0x006B0750  FactoryClass::GetBridgeCell  this=FactoryClass  sig=csp ====
_DWORD *__thiscall sub_6B0750(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  __int16 FoundationWidth; // ax
  int v8; // ecx
  int FoundationHeight; // eax
  int v10; // ecx
  _WORD *v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  bool v14; // zf
  _DWORD *result; // eax
  int v16; // [esp+4h] [ebp-18h] BYREF
  int v17; // [esp+8h] [ebp-14h] BYREF
  int v18; // [esp+Ch] [ebp-10h] BYREF
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h] BYREF

  v3 = this->production; /*0x6b0756*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6 )
  {
    v4 = this->production; /*0x6b076f*/
    if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 )
    {
      v5 = this->production; /*0x6b0781*/
      if ( v5 )
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 ? v5 : 0;
      else
        v6 = 0; /*0x6b0789*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v6 + 1312)); /*0x6b07a7*/
      v8 = *(_DWORD *)(v6 + 1312); /*0x6b07ac*/
      LOWORD(v16) = FoundationWidth - 1; /*0x6b07b5*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x6b07ba*/
      v10 = this->production; /*0x6b07c0*/
      HIWORD(v16) = FoundationHeight / 2; /*0x6b07c7*/
      v11 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 440))(v10, &v19); /*0x6b07dd*/
      v12 = *CellStruct::Add(v11, &v18, &v16); /*0x6b07ea*/
      v20 = v12; /*0x6b07ed*/
    }
    else
    {
      v12 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->production + 440))(this->production, &v20); /*0x6b0804*/
      v20 = v12; /*0x6b0806*/
    }
    LOWORD(v16) = v12; /*0x6b080e*/
    HIWORD(v16) = HIWORD(v20) - 1; /*0x6b0818*/
    v17 = v16; /*0x6b0827*/
    v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17); /*0x6b082b*/
    v14 = Cell::IsBridge(v13) == (_DWORD *)this->production; /*0x6b083a*/
    result = a2; /*0x6b083c*/
    if ( v14 ) /*0x6b0840*/
      *a2 = v17; /*0x6b0847*/
    else
      *a2 = MEMORY[0xB0B5B8]; /*0x6b0856*/
  }
  else
  {
    *a2 = MEMORY[0xB0B5B8]; /*0x6b0869*/
    return a2; /*0x6b085e*/
  }
  return result; /*0x6b0846*/
}


// ==== 0x006B0880  BuildingClass::CheckBridge  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::CheckBridge(_DWORD *this, ObjectClass *aP1, IUnknown *aP2)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  __int16 FoundationWidth; // ax
  int v8; // ecx
  int FoundationHeight; // eax
  int v10; // ecx
  _WORD *v11; // eax
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  bool v15; // zf
  IUnknown *v16; // eax
  int v18; // eax
  ObjectClass ***i; // ecx
  IUnknown *v20; // [esp+8h] [ebp-18h] BYREF
  IUnknown *v21; // [esp+Ch] [ebp-14h] BYREF
  int v22; // [esp+10h] [ebp-10h] BYREF
  int v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+18h] [ebp-8h] BYREF
  int v25; // [esp+1Ch] [ebp-4h] BYREF

  v4 = this->objectTypeFlags; /*0x6b0887*/
  if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 )
  {
    v5 = this->objectTypeFlags; /*0x6b0899*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(this->objectTypeFlags) == 6 ? v5 : 0;
    else
      v6 = 0; /*0x6b08a0*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v6 + 1312)); /*0x6b08be*/
    v8 = *(_DWORD *)(v6 + 1312); /*0x6b08c3*/
    LOWORD(v20) = FoundationWidth - 1; /*0x6b08cc*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x6b08d1*/
    v10 = this->objectTypeFlags; /*0x6b08d7*/
    HIWORD(v20) = FoundationHeight / 2; /*0x6b08de*/
    v11 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 440))(v10, &v24); /*0x6b08f4*/
    v12 = CellStruct::Add(v11, (IUnknown *)&v22, (IUnknown *)&v20)->field_0; /*0x6b0901*/
  }
  else
  {
    v12 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->objectTypeFlags + 440))(this->objectTypeFlags, &v25); /*0x6b0916*/
  }
  v13 = this->objectTypeFlags; /*0x6b0918*/
  v23 = v12; /*0x6b091b*/
  if ( !v13 /*0x6b0985*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 6
    || (v20 = (IUnknown *)*BuildingClass::GetRallyPointCoord(this, &v25),
        v22 = -65536,
        v20 = (IUnknown *)CellStruct::Add(&v20, (IUnknown *)&v24, (IUnknown *)&v22)->field_0,
        v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20),
        v15 = Cell::IsBridge(v14) == (_DWORD *)this->objectTypeFlags,
        v16 = v20,
        !v15) )
  {
    v16 = *(IUnknown **)&MEMORY[0xB077F8].__pad_14B0[10512]; /*0x6b0987*/
  }
  v21 = v16; /*0x6b098c*/
  if ( aP2 != CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v23) /*0x6b09d4*/
    && (v21 == *(IUnknown **)&MEMORY[0xB077F8].__pad_14B0[10512]
     || aP2 != CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21)) )
  {
    return 0; /*0x6b09d7*/
  }
  v18 = this->q048 - 1; /*0x6b09e3*/
  if ( v18 < 0 ) /*0x6b09e4*/
    return 0; /*0x6b09e4*/
  for ( i = (ObjectClass ***)(this->ambientSoundController + 4 * v18); **i != aP1; --i ) /*0x6b09ed*/
  {
    if ( --v18 < 0 ) /*0x6b09fc*/
      return 0; /*0x6b0a05*/
  }
  return *i != 0; /*0x6b0a17*/
}


// ==== 0x006B0A20  SlaveManagerClass::LostSlave  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::LostSlave(_DWORD *this, ObjectClass *aP1)
{
  int result; // eax
  int v3; // esi
  ObjectClass ***i; // edx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // [esp+10h] [ebp-8h]

  result = this->q048 - 1; /*0x6b0a26*/
  if ( result >= 0 ) /*0x6b0a2a*/
  {
    v3 = this->slaveVectorCount; /*0x6b0a2c*/
    for ( i = (ObjectClass ***)(v3 + 4 * result); **i != aP1; --i ) /*0x6b0a33*/
    {
      if ( --result < 0 ) /*0x6b0a42*/
        return result; /*0x6b0a42*/
    }
    v5 = *(_DWORD **)(v3 + 4 * result); /*0x6b0a4d*/
    if ( *v5 ) /*0x6b0a50*/
      *(_DWORD *)(*v5 + 732) = 0; /*0x6b0a56*/
    *v5 = 0; /*0x6b0a60*/
    v5[1] = 6; /*0x6b0a66*/
    v6 = this->slaveType; /*0x6b0a73*/
    result = (int)(v5 + 2); /*0x6b0a76*/
    *(_DWORD *)result = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0a79*/
    *(_DWORD *)(result + 4) = v7; /*0x6b0a7f*/
    *(_DWORD *)(result + 8) = v6; /*0x6b0a82*/
  }
  return result; /*0x6b0a44*/
}


// ==== 0x006B0A90  ObjectClass::method_6B0A90  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6B0A90(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *result; // eax
  int v5; // [esp+4h] [ebp-8h]

  v2 = *(_DWORD **)(this->ambientSoundController + 4 * a2); /*0x6b0a9a*/
  if ( *v2 ) /*0x6b0a9d*/
    *(_DWORD *)(*v2 + 732) = 0; /*0x6b0aa3*/
  *v2 = 0; /*0x6b0aad*/
  v2[1] = 6; /*0x6b0ab3*/
  v3 = this->nextObject; /*0x6b0ac0*/
  result = v2 + 2; /*0x6b0ac3*/
  *result = MEMORY[0xA8ED84]; /*0x6b0ac6*/
  result[1] = v5; /*0x6b0acc*/
  result[2] = v3; /*0x6b0acf*/
  return result; /*0x6b0ad2*/
}


// ==== 0x006B0AE0  TechnoClass::MutateAll  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::MutateAll(_DWORD *this, TechnoClass *aP1, CoordStruct *aP2)
{
  _DWORD *v3; // ebx
  int v4; // eax
  IUnknown *v5; // esi
  int v6; // eax
  int v7; // ecx
  HouseClass *v8; // edx
  int *v9; // edi
  int v10; // ebp
  TechnoClass *v11; // ebx
  int *v12; // esi
  char v13; // al
  CoordStruct *focus; // eax
  int v15; // edx
  _DWORD *v16; // edi
  CoordStruct *v18; // [esp+18h] [ebp-14h]
  _DWORD v20[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = this; /*0x6b0ae4*/
  v4 = this->objectTypeFlags; /*0x6b0aea*/
  if ( v4 ) /*0x6b0aef*/
  {
    v5 = HouseClass_Count; /*0x6b0af7*/
    v18 = 0; /*0x6b0b03*/
    v6 = HouseTypeClass::Find(&g_INI_Key_Easy.unknown30); /*0x6b0b0b*/
    v7 = 0; /*0x6b0b10*/
    if ( (int)v5 > 0 ) /*0x6b0b14*/
    {
      v8 = HouseClass_Array; /*0x6b0b1c*/
      while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8->__pad_0 + 52) + 188) != v6 ) /*0x6b0b29*/
      {
        ++v7; /*0x6b0b2b*/
        v8 = (HouseClass *)((char *)v8 + 4); /*0x6b0b2c*/
        if ( v7 >= (int)v5 ) /*0x6b0b31*/
          goto LABEL_8; /*0x6b0b31*/
      }
      v18 = *(CoordStruct **)&HouseClass_Array->__pad_0[4 * v7]; /*0x6b0b38*/
    }
LABEL_8:
    v9 = 0; /*0x6b0b3c*/
    v10 = v3[18] - 1; /*0x6b0b41*/
    if ( v10 >= 0 ) /*0x6b0b42*/
    {
      v11 = aP1; /*0x6b0b48*/
      while ( 1 ) /*0x6b0b56*/
      {
        v12 = **(int ***)(this->ambientSoundController + 4 * v10); /*0x6b0b56*/
        if ( v12 && MEMORY[0xA8D63C].__pad_1258[268] ) /*0x6b0b67*/
        {
          v13 = *((_BYTE *)v12 + 129); /*0x6b0b6d*/
          v12[183] = 0; /*0x6b0b73*/
          if ( v13 ) /*0x6b0b7f*/
          {
            (*(void (__thiscall **)(int *, TechnoClass *))(*v12 + 224))(v12, v11); /*0x6b0b86*/
            (*(void (__thiscall **)(int *))(*v12 + 248))(v12); /*0x6b0b90*/
          }
          else
          {
            if ( v11 ) /*0x6b0b9a*/
            {
              focus = (CoordStruct *)v11->focus; /*0x6b0b9c*/
LABEL_18:
              (*(void (__thiscall **)(int *, CoordStruct *, int))(*v12 + 980))(v12, focus, 1); /*0x6b0bb4*/
              (*(void (__thiscall **)(int *))(*v12 + 976))(v12); /*0x6b0bc5*/
              (*(void (__thiscall **)(int *, int))(*v12 + 904))(v12, 1); /*0x6b0bd1*/
              if ( !v9 ) /*0x6b0bd9*/
                v9 = v12; /*0x6b0bdb*/
              goto LABEL_21; /*0x6b0bdd*/
            }
            focus = aP2; /*0x6b0ba4*/
            if ( aP2 ) /*0x6b0baa*/
              goto LABEL_18; /*0x6b0baa*/
            focus = v18; /*0x6b0bac*/
            if ( v18 ) /*0x6b0bb2*/
              goto LABEL_18; /*0x6b0bb2*/
            v15 = *v12; /*0x6b0be2*/
            aP1 = (TechnoClass *)v12[27]; /*0x6b0be4*/
            (*(void (__thiscall **)(int *, TechnoClass **, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v15 + 364))( /*0x6b0c05*/
              v12,
              &aP1,
              0,
              *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
              0,
              0,
              0,
              0);
          }
        }
LABEL_21:
        if ( --v10 < 0 ) /*0x6b0c0c*/
        {
          v3 = this; /*0x6b0c12*/
          break; /*0x6b0c12*/
        }
      }
    }
    LOBYTE(v4) = MEMORY[0xA8D63C].__pad_1258[268]; /*0x6b0c16*/
    if ( MEMORY[0xA8D63C].__pad_1258[268] ) /*0x6b0c1d*/
    {
      if ( v9 ) /*0x6b0c21*/
      {
        LOBYTE(v4) = MEMORY[0xA8D63C].__pad_1140[48]; /*0x6b0c23*/
        if ( !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] ) /*0x6b0c2a*/
        {
          LOBYTE(v4) = MEMORY[0x87F8E4].__pad_5568[9108]; /*0x6b0c2c*/
          if ( *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 564) != -1 ) /*0x6b0c38*/
          {
            v16 = v9 + 39; /*0x6b0c3a*/
            v20[0] = *v16; /*0x6b0c44*/
            v20[1] = v16[1]; /*0x6b0c4b*/
            v20[2] = v16[2]; /*0x6b0c56*/
            LOBYTE(v4) = StartAudioControllerAt( /*0x6b0c60*/
                           *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 564),
                           (int)v20,
                           0);
          }
        }
      }
    }
    v3[9] = 0; /*0x6b0c67*/
  }
  return v4; /*0x6b0c6f*/
}


// ==== 0x006B0C80  FactoryClass::ResetProductionTimers  this=FactoryClass  sig=csp ====
wchar_t *__thiscall FactoryClass::ResetProductionTimers(_DWORD *this)
{
  wchar_t *result; // eax
  int i; // esi
  int v4; // ecx

  this->q05C = 0; /*0x6b0c84*/
  result = MEMORY[0xA8ED84]; /*0x6b0c8b*/
  this->balance = MEMORY[0xA8ED84]; /*0x6b0c90*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b0c97*/
  {
    result = *(wchar_t **)(this->object + 4 * i); /*0x6b0c9c*/
    v4 = *(_DWORD *)result; /*0x6b0ca2*/
    if ( *((_DWORD *)result + 1) != 6 ) /*0x6b0ca7*/
    {
      if ( v4 ) /*0x6b0cab*/
        result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b0caf*/
    }
  }
  return result; /*0x6b0cb8*/
}


// ==== 0x006B0CC0  BuildingClass::InitBuildLimit  this=TechnoClass  sig=csp ====
int *__thiscall BuildingClass_InitBuildLimit(int **this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = this->q017; /*0x6b0cc4*/
  if ( !result ) /*0x6b0cc9*/
  {
    this->q017 = (int *)1; /*0x6b0ccb*/
    this->nextArrayIndex = (int *)0x7FFFFFFF; /*0x6b0cd2*/
    for ( i = (int)this->q012 - 1; i >= 0; --i ) /*0x6b0cdd*/
    {
      result = (int *)(this->ambientSoundController)[i]; /*0x6b0ce2*/
      v4 = *result; /*0x6b0ce8*/
      if ( result[1] != 6 ) /*0x6b0ced*/
      {
        if ( v4 ) /*0x6b0cf1*/
          result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b0cf5*/
      }
    }
  }
  return result; /*0x6b0cfe*/
}


// ==== 0x006B0D10  TechnoClass::RefreshDeployOccupierState  this=TechnoClass  sig=csp ====
int *__thiscall sub_6B0D10(int **this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = this->q017; /*0x6b0d14*/
  if ( !result ) /*0x6b0d19*/
  {
    this->q017 = (int *)4; /*0x6b0d1b*/
    this->nextArrayIndex = (int *)0x7FFFFFFF; /*0x6b0d22*/
    for ( i = (int)this->q012 - 1; i >= 0; --i ) /*0x6b0d2d*/
    {
      result = (int *)(this->ambientSoundController)[i]; /*0x6b0d32*/
      v4 = *result; /*0x6b0d38*/
      if ( result[1] != 6 ) /*0x6b0d3d*/
      {
        if ( v4 ) /*0x6b0d41*/
          result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b0d45*/
      }
    }
  }
  return result; /*0x6b0d4e*/
}


// ==== 0x006B0D60  BuildingClass::RefreshOccupierCache  this=TechnoClass  sig=csp ====
int *__thiscall sub_6B0D60(int **this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = this->q017; /*0x6b0d64*/
  if ( !result ) /*0x6b0d69*/
  {
    this->q017 = (int *)4; /*0x6b0d6b*/
    this->nextArrayIndex = (int *)0x7FFFFFFF; /*0x6b0d72*/
    for ( i = (int)this->q012 - 1; i >= 0; --i ) /*0x6b0d7d*/
    {
      result = (int *)(this->ambientSoundController)[i]; /*0x6b0d82*/
      v4 = *result; /*0x6b0d88*/
      if ( result[1] != 6 ) /*0x6b0d8d*/
      {
        if ( v4 ) /*0x6b0d91*/
          result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b0d95*/
      }
    }
  }
  return result; /*0x6b0d9e*/
}


// ==== 0x006B0DB0  BuildingClass::ProcessEnterUnit  this=SlaveManagerClass  sig=csp ====
_DWORD *__thiscall BuildingClass::ProcessEnterUnit(_DWORD *this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  SlaveManagerClass **v8; // eax
  _DWORD *result; // eax
  int v10; // edi
  void *v11; // eax
  int i; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // eax
  SlaveManagerClass **v17; // eax
  void *v18; // eax
  int j; // edi
  int v20; // ecx
  _DWORD *v21; // [esp+Ch] [ebp-14h] BYREF
  rc_ptr_base v22; // [esp+10h] [ebp-10h] BYREF
  _BYTE v23[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = this->master; /*0x6b0db8*/
  if ( v2
    && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 1
    && ((v3 = this->master) != 0
      ? (v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 44))(this->master) == 1 ? v3 : 0)
      : (v4 = 0),
        *(_DWORD *)(v4 + 1444)) )
  {
    v5 = this->master; /*0x6b0dfa*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 44))(this->master) == 1 ? v5 : 0;
    else
      v6 = 0; /*0x6b0e01*/
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v6 + 1444) + 72))(*(_DWORD *)(v6 + 1444), v23); /*0x6b0e24*/
    v8 = (SlaveManagerClass **)CellStruct::Set(&v22, *v7 / 256, v7[1] / 256); /*0x6b0e4c*/
    v21 = (_DWORD *)*BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v22, *v8); /*0x6b0e69*/
    if ( v21 == *(_DWORD **)&MEMORY[0xB077F8].__pad_14B0[10512] ) /*0x6b0e6d*/
    {
      this->SlaveManagerClass_field_5C = 0; /*0x6b0e7d*/
      this->SlaveManagerClass_field_60 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b0e8a*/
      return (*(_DWORD *(__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)this->master + 488))(this->master, 5, 0); /*0x6b0e96*/
    }
    else
    {
      v10 = *(_DWORD *)this->master; /*0x6b0ead*/
      v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21); /*0x6b0eb4*/
      (*(void (__thiscall **)(_DWORD, void *, int))(v10 + 1152))(this->master, v11, 1); /*0x6b0ebd*/
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)this->master + 488))(this->master, 2, 0); /*0x6b0ecc*/
      this->SlaveManagerClass_field_5C = 2; /*0x6b0ed2*/
      this->SlaveManagerClass_field_60 = 0x7FFFFFFF; /*0x6b0ed9*/
      for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b0ee4*/
      {
        result = *(_DWORD **)(this->slaveVectorCount + 4 * i); /*0x6b0ef2*/
        v13 = *result; /*0x6b0ef8*/
        if ( result[1] != 6 ) /*0x6b0efc*/
        {
          if ( v13 ) /*0x6b0f00*/
            result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 976))(v13); /*0x6b0f04*/
        }
      }
    }
  }
  else
  {
    v14 = this->master; /*0x6b0f14*/
    if ( v14 /*0x6b0f3c*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 6
      && (v15 = *(_DWORD *)(this->master + 536)) != 0 )
    {
      v16 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v23); /*0x6b0f49*/
      v17 = (SlaveManagerClass **)CellStruct::Set(&v22, *v16 / 256, v16[1] / 256); /*0x6b0f71*/
      result = (_DWORD *)*BuildingClass::FindPlacementCells2(this, (SlaveManagerClass *)&v22, *v17); /*0x6b0f85*/
      v21 = result; /*0x6b0f8e*/
      if ( result != *(_DWORD **)&MEMORY[0xB077F8].__pad_14B0[10512] ) /*0x6b0f92*/
      {
        v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21); /*0x6b0fac*/
        result = (_DWORD *)TechnoClass::SetFocus((_DWORD *)this->master, (int)v18); /*0x6b0fb5*/
        this->SlaveManagerClass_field_5C = 6; /*0x6b0fba*/
        this->SlaveManagerClass_field_60 = 0x7FFFFFFF; /*0x6b0fbd*/
        for ( j = this->q048 - 1; j >= 0; --j ) /*0x6b0fc8*/
        {
          result = *(_DWORD **)(this->slaveVectorCount + 4 * j); /*0x6b0fcd*/
          v20 = *result; /*0x6b0fd3*/
          if ( result[1] != 6 && v20 ) /*0x6b0fdb*/
            result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 976))(v20); /*0x6b0fdf*/
        }
      }
    }
    else
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)this->master + 488))(this->master, 5, 0); /*0x6b0ff8*/
      this->SlaveManagerClass_field_5C = 0; /*0x6b0ffe*/
      this->SlaveManagerClass_field_60 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x6b100b*/
    }
  }
  return result; /*0x6b0e9c*/
}


// ==== 0x006B1020  SlaveManagerClass::ShouldWakeUpNow  this=SlaveManagerClass  sig=csp ====
bool __thiscall SlaveManagerClass::ShouldWakeUpNow(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)this->master; /*0x6b1024*/
  if ( !v2 || this->SlaveManagerClass_field_5C ) /*0x6b102f*/
    return 0; /*0x6b102f*/
  if ( !*(_BYTE *)(v2[135] + 492) ) /*0x6b1040*/
    return 1; /*0x6b104e*/
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v2 + 444))(v2) + 236) == 5 ) /*0x6b105e*/
    return 1; /*0x6b1064*/
  if ( this->SlaveManagerClass_field_60 + *(_DWORD *)MEMORY[0x8871E0][1].? >= (int)MEMORY[0xA8ED84] ) /*0x6b107d*/
    return 0; /*0x6b107d*/
  v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(*(_DWORD *)this->master + 824))( /*0x6b10ad*/
                    this->master,
                    &v4,
                    MEMORY[0x8871E0][1].? / 256,
                    0);
  return v4 != MEMORY[0xB0B5B8]; /*0x6b10c6*/
}


// ==== 0x006B10F0  SlaveManagerClass::AssignTask  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::AssignTask(int this, AbstractClass *aP1)
{
  int result; // eax
  int i; // esi

  AbstractClass::ProcessPower((#378 *)this); /*0x6b10fa*/
  result = Power::TimerProcess(aP1); /*0x6b1105*/
  for ( i = *(_DWORD *)(this + 72) - 1; i >= 0; --i ) /*0x6b110e*/
    result = Power::TimerProcess(aP1); /*0x6b111c*/
  return result; /*0x6b1124*/
}


// ==== 0x006B1130  SlaveManagerClass::ddtor  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *a2 = 861581284; /*0x6b1146*/
  a2[1] = 299183526; /*0x6b114e*/
  a2[2] = 268444350; /*0x6b1157*/
  a2[3] = 1822515787; /*0x6b1160*/
  return 0; /*0x6b113d*/
}


// ==== 0x006B1170  SlaveManagerClass::LoadManager  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::_vt05(_DWORD *a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int Prefix_0; // ebx
  _DWORD *v5; // ebp
  _DWORD *v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  wchar_t *v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = a2; /*0x6b1174*/
  v3 = a1; /*0x6b1179*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6b1184*/
  v5 = 0; /*0x6b1186*/
  if ( Prefix_0 >= 0 ) /*0x6b118a*/
  {
    if ( v3 ) /*0x6b1192*/
    {
      AbstractClass::InitVtables(v3, (int)&a1); /*0x6b119b*/
      SlaveControlVector::Constructor(v3 + 14, 0, 0); /*0x6b11a7*/
      v3[14] = &vt_DynamicVectorClass_SlaveManagerClass_SlaveControl; /*0x6b11b0*/
      v3[19] = 10; /*0x6b11b6*/
      v3[18] = 0; /*0x6b11bd*/
      Timer::Start(v3 + 20, 0); /*0x6b11c0*/
      *v3 = &SlaveManagerClass::`vftable'; /*0x6b11c5*/
      v3[1] = &SlaveManagerClass::`vftable'; /*0x6b11cb*/
      v2 = a2; /*0x6b11d2*/
      v3[2] = &SlaveManagerClass::`vftable'; /*0x6b11d6*/
      v3[3] = &vt_SlaveManagerClass; /*0x6b11dd*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v16, 4, 0); /*0x6b11f2*/
    if ( Prefix_0 >= 0 ) /*0x6b11f6*/
    {
      v6 = v3 + 14; /*0x6b11fc*/
      if ( v3 != (_DWORD *)-56 ) /*0x6b1201*/
      {
        SlaveControlVector::Constructor(v3 + 14, 0, 0); /*0x6b1207*/
        *v6 = &vt_DynamicVectorClass_SlaveManagerClass_SlaveControl; /*0x6b120c*/
        v3[19] = 10; /*0x6b1212*/
        v3[18] = 0; /*0x6b1219*/
      }
      v7 = v16; /*0x6b121c*/
      a1 = 0; /*0x6b1220*/
      if ( v16 <= 0 ) /*0x6b1226*/
      {
LABEL_20:
        v14 = 0; /*0x6b12b7*/
        if ( v7 > 0 ) /*0x6b12bb*/
        {
          do /*0x6b12d3*/
            ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], *(int **)(v3[15] + 4 * v14++)); /*0x6b12c9*/
          while ( v14 < v16 ); /*0x6b12d3*/
        }
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v3 + 9); /*0x6b12de*/
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v3 + 10); /*0x6b12ec*/
      }
      else
      {
        while ( 1 ) /*0x6b1232*/
        {
          v8 = __2_YAPAXI_Z(0x14u); /*0x6b1232*/
          if ( v8 ) /*0x6b123c*/
          {
            v9 = MEMORY[0xA8ED84]; /*0x6b123e*/
            v8[4] = 0; /*0x6b1244*/
            v8[2] = v9; /*0x6b1247*/
            v5 = v8; /*0x6b124a*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v5, 20, 0); /*0x6b125b*/
          if ( Prefix_0 < 0 ) /*0x6b125f*/
            break; /*0x6b125f*/
          v10 = v3[16]; /*0x6b1265*/
          if ( v3[18] < v10 /*0x6b128a*/
            || (*((_BYTE *)v3 + 69) || !v10)
            && (v11 = v3[19], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v3 + 14, v10 + v11, 0) )
          {
            v12 = v3[18]; /*0x6b1291*/
            v13 = v3[15]; /*0x6b1294*/
            v3[18] = v12 + 1; /*0x6b129a*/
            *(_DWORD *)(v13 + 4 * v12) = v5; /*0x6b129d*/
          }
          v7 = v16; /*0x6b12a4*/
          a1 = (_DWORD *)((char *)a1 + 1); /*0x6b12ab*/
          if ( (int)a1 >= v16 ) /*0x6b12af*/
            goto LABEL_20; /*0x6b12af*/
          v5 = 0; /*0x6b122e*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b12f1*/
}


// ==== 0x006B1300  SlaveManagerClass::SaveManager  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::SaveManager(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6b1312*/
  if ( result >= 0 ) /*0x6b1319*/
  {
    v4 = *a1; /*0x6b131e*/
    aP2 = *(_DWORD *)&aP0->UINameLabel[11]; /*0x6b132a*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b132e*/
    if ( result >= 0 ) /*0x6b1333*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b133d*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a1 + 16))( /*0x6b134d*/
                   a1,
                   *(_DWORD *)(*(_DWORD *)&aP0->zero_3C + 4 * i),
                   20,
                   0);
        if ( result < 0 ) /*0x6b1352*/
          break; /*0x6b1352*/
      }
    }
  }
  return result; /*0x6b135d*/
}


// ==== 0x006B1370  SlaveManagerClass::StubReturn100  this=SlaveManagerClass  sig=csp ====
int SlaveManagerClass::_vt12()
{
  return 100; /*0x6b1375*/
}


// ==== 0x006B1380  SlaveManagerClass::StubReturn72  this=SlaveManagerClass  sig=csp ====
int SlaveManagerClass::_vt11()
{
  return 72; /*0x6b1385*/
}


// ==== 0x006B1390  SlaveManagerClass::ProcessOrders  this=SlaveManagerClass  sig=csp ====
SlaveManagerClass *__thiscall SlaveManagerClass::ProcessOrders(void *Block, char a2)
{
  SlaveManagerClass::Constructor_SlaveManagerClass((int)Block); /*0x6b1393*/
  if ( (a2 & 1) != 0 ) /*0x6b139d*/
    __3_YAXPAX_Z(Block); /*0x6b13a0*/
  return (SlaveManagerClass *)Block; /*0x6b13aa*/
}


// ==== 0x006B13B0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall SlaveManagerClass_25_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6b13b6*/
  *(_DWORD *)(this + 16) = 0; /*0x6b13b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6b13c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b13c6*/
    *(_DWORD *)(this + 4) = 0; /*0x6b13ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b13d1*/
  *(_DWORD *)(this + 8) = 0; /*0x6b13d4*/
}


// ==== 0x006B13E0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall SlaveManagerClass_25_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b13e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b13f5*/
  else
    return 0; /*0x6b13e7*/
}


// ==== 0x006B1400  _VectorClass_PAUSlaveControl_SlaveManagerClass::Seek  this=VectorClass  sig=csp ====
int __thiscall SlaveManagerClass_25_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6b140a*/
}


// ==== 0x006B1410  _DynamicVectorClass_PAVSlaveManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SlaveManagerClass::sub_6B1410(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6b1416*/
  *(_DWORD *)(this + 16) = 0; /*0x6b1419*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6b1420*/
  {
    __3_YAXPAX_Z(v2); /*0x6b1426*/
    *(_DWORD *)(this + 4) = 0; /*0x6b142e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b1431*/
  *(_DWORD *)(this + 8) = 0; /*0x6b1434*/
}


// ==== 0x006B1440  _DynamicVectorClass_PAVSlaveManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SlaveManagerClass::sub_6B1440(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b1440*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b1455*/
  else
    return 0; /*0x6b1447*/
}


// ==== 0x006B1460  _VectorClass_PAVSlaveManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6b146a*/
}


// ==== 0x006B1470  _VectorClass_PAUSlaveControl_SlaveManagerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SlaveManagerClass_25_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6b1472*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6b147d*/
  {
    v3 = 0; /*0x6b147f*/
    if ( v2 <= 0 ) /*0x6b1483*/
      return 1; /*0x6b14a3*/
    v4 = (_DWORD *)this->Items; /*0x6b1485*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b148b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b1494*/
    {
      ++v3; /*0x6b1496*/
      ++v4; /*0x6b1497*/
      if ( v3 >= v2 ) /*0x6b149c*/
        return 1; /*0x6b149c*/
    }
  }
  return 0; /*0x6b149e*/
}


// ==== 0x006B14B0  ?$VectorClass@PAUSlaveControl@SlaveManagerClass@@::getAIPriority  this=VectorClass  sig=csp ====
char __thiscall AbstractClass::sub_6B14B0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6b14bc*/
  {
    this->IsInitialized = 0; /*0x6b14c6*/
    if ( a3 ) /*0x6b14cc*/
      v4 = a3; /*0x6b14e2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b14de*/
    this->IsInitialized = 1; /*0x6b14e6*/
    if ( v4 ) /*0x6b14ea*/
    {
      if ( this->Items ) /*0x6b14f5*/
      {
        v6 = this->Capacity; /*0x6b14fc*/
        if ( a2 < v6 ) /*0x6b1501*/
          v6 = a2; /*0x6b1503*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b1509*/
          ++i; /*0x6b150e*/
        if ( this->IsAllocated ) /*0x6b151b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b1526*/
          this->Items = 0; /*0x6b152e*/
        }
      }
      this->Items = v4; /*0x6b1537*/
      this->Capacity = a2; /*0x6b153f*/
      this->IsAllocated = a3 == 0; /*0x6b1542*/
      return 1; /*0x6b1548*/
    }
    else
    {
      return 0; /*0x6b14ef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b1552*/
    return 1; /*0x6b1558*/
  }
}


// ==== 0x006B1560  ?$VectorClass@PAUSlaveControl@SlaveManagerClass@@::setAIPriority  this=VectorClass  sig=csp ====
void __thiscall AbstractClass::sub_6B1560(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6b156d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6b1573*/
    *(_DWORD *)(this + 4) = 0; /*0x6b157b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b157e*/
  *(_DWORD *)(this + 8) = 0; /*0x6b1581*/
}


// ==== 0x006B1590  ?$VectorClass@PAUSlaveControl@SlaveManagerClass@@::evaluateAIOption  this=VectorClass  sig=csp ====
int __thiscall AbstractClass::sub_6B1590(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6b1590*/
    return 0; /*0x6b1598*/
  v3 = *(_DWORD *)(this + 8); /*0x6b159e*/
  result = 0; /*0x6b15a1*/
  if ( v3 <= 0 ) /*0x6b15a5*/
    return -1; /*0x6b15bc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6b15ab*/
  {
    if ( ++result >= v3 ) /*0x6b15ba*/
      return -1; /*0x6b15ba*/
  }
  return result; /*0x6b159a*/
}


// ==== 0x006B15D0  ?$VectorClass@PAUSlaveControl@SlaveManagerClass@@::selectAIAction  this=VectorClass  sig=csp ====
unsigned int __thiscall AbstractClass::sub_6B15D0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b15d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b15e5*/
  else
    return 0; /*0x6b15d7*/
}


// ==== 0x006B15F0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::Release  this=DynamicVector  sig=csp ====
char __thiscall SlaveManagerClass_25_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b15fc*/
  {
    this->IsInitialized = 0; /*0x6b1602*/
    if ( a3 ) /*0x6b1608*/
      v4 = a3; /*0x6b161e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b161a*/
    this->IsInitialized = 1; /*0x6b1622*/
    if ( !v4 ) /*0x6b1626*/
      return 0; /*0x6b169a*/
    if ( this->Items ) /*0x6b1628*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6b162f*/
      if ( a2 < v5 ) /*0x6b1634*/
        v5 = a2; /*0x6b1636*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b163c*/
        ++i; /*0x6b1641*/
      if ( this->IsAllocated ) /*0x6b164e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b1659*/
        this->Items = 0; /*0x6b1661*/
      }
    }
    this->Items = v4; /*0x6b166a*/
    this->DynamicVector_field_0x8 = a2; /*0x6b1672*/
    this->IsAllocated = a3 == 0; /*0x6b1675*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b167e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x6b1681*/
  if ( v7 < this->Items ) /*0x6b1689*/
    this->Items = v7; /*0x6b168b*/
  return 1; /*0x6b168e*/
}


// ==== 0x006B16A0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::Read  this=DynamicVector  sig=csp ====
int __thiscall SlaveManagerClass_25_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6b16a0*/
  result = 0; /*0x6b16a3*/
  if ( v2 <= 0 ) /*0x6b16a8*/
    return -1; /*0x6b16bf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6b16ae*/
  {
    if ( ++result >= v2 ) /*0x6b16bd*/
      return -1; /*0x6b16bd*/
  }
  return result; /*0x6b16c2*/
}


// ==== 0x006B16D0  _VectorClass_PAVSlaveManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6b16d2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6b16dd*/
  {
    v3 = 0; /*0x6b16df*/
    if ( v2 <= 0 ) /*0x6b16e3*/
      return 1; /*0x6b1703*/
    v4 = (_DWORD *)this->Items; /*0x6b16e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b16eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b16f4*/
    {
      ++v3; /*0x6b16f6*/
      ++v4; /*0x6b16f7*/
      if ( v3 >= v2 ) /*0x6b16fc*/
        return 1; /*0x6b16fc*/
    }
  }
  return 0; /*0x6b16fe*/
}


// ==== 0x006B1710  _VectorClass_PAVSlaveManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6b171c*/
  {
    this->IsInitialized = 0; /*0x6b1726*/
    if ( a3 ) /*0x6b172c*/
      v4 = a3; /*0x6b1742*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b173e*/
    this->IsInitialized = 1; /*0x6b1746*/
    if ( v4 ) /*0x6b174a*/
    {
      if ( this->Items ) /*0x6b1755*/
      {
        v6 = this->Capacity; /*0x6b175c*/
        if ( a2 < v6 ) /*0x6b1761*/
          v6 = a2; /*0x6b1763*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b1769*/
          ++i; /*0x6b176e*/
        if ( this->IsAllocated ) /*0x6b177b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b1786*/
          this->Items = 0; /*0x6b178e*/
        }
      }
      this->Items = v4; /*0x6b1797*/
      this->Capacity = a2; /*0x6b179f*/
      this->IsAllocated = a3 == 0; /*0x6b17a2*/
      return 1; /*0x6b17a8*/
    }
    else
    {
      return 0; /*0x6b174f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b17b2*/
    return 1; /*0x6b17b8*/
  }
}


// ==== 0x006B17C0  _VectorClass_PAVSlaveManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SlaveManagerClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6b17cd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6b17d3*/
    *(_DWORD *)(this + 4) = 0; /*0x6b17db*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b17de*/
  *(_DWORD *)(this + 8) = 0; /*0x6b17e1*/
}


// ==== 0x006B17F0  _VectorClass_PAVSlaveManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6b17f0*/
    return 0; /*0x6b17f8*/
  v3 = *(_DWORD *)(this + 8); /*0x6b17fe*/
  result = 0; /*0x6b1801*/
  if ( v3 <= 0 ) /*0x6b1805*/
    return -1; /*0x6b181c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6b180b*/
  {
    if ( ++result >= v3 ) /*0x6b181a*/
      return -1; /*0x6b181a*/
  }
  return result; /*0x6b17fa*/
}


// ==== 0x006B1830  _VectorClass_PAVSlaveManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SlaveManagerClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b1830*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b1845*/
  else
    return 0; /*0x6b1837*/
}


// ==== 0x006B1850  _DynamicVectorClass_PAVSlaveManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::sub_6B1850(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b185c*/
  {
    this->IsInitialized = 0; /*0x6b1862*/
    if ( a3 ) /*0x6b1868*/
      v4 = a3; /*0x6b187e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b187a*/
    this->IsInitialized = 1; /*0x6b1882*/
    if ( !v4 ) /*0x6b1886*/
      return 0; /*0x6b18fa*/
    if ( this->Items ) /*0x6b1888*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6b188f*/
      if ( a2 < v5 ) /*0x6b1894*/
        v5 = a2; /*0x6b1896*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b189c*/
        ++i; /*0x6b18a1*/
      if ( this->IsAllocated ) /*0x6b18ae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b18b9*/
        this->Items = 0; /*0x6b18c1*/
      }
    }
    this->Items = v4; /*0x6b18ca*/
    this->DynamicVector_field_0x8 = a2; /*0x6b18d2*/
    this->IsAllocated = a3 == 0; /*0x6b18d5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b18de*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x6b18e1*/
  if ( v7 < this->Items ) /*0x6b18e9*/
    this->Items = v7; /*0x6b18eb*/
  return 1; /*0x6b18ee*/
}


// ==== 0x006B1900  _DynamicVectorClass_PAVSlaveManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::sub_6B1900(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6b1900*/
  result = 0; /*0x6b1903*/
  if ( v2 <= 0 ) /*0x6b1908*/
    return -1; /*0x6b191f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6b190e*/
  {
    if ( ++result >= v2 ) /*0x6b191d*/
      return -1; /*0x6b191d*/
  }
  return result; /*0x6b1922*/
}


// ==== 0x006B1930  ?$VectorClass@PAUSlaveControl@SlaveManagerClass@@::checkAIResources  this=VectorClass  sig=csp ====
VectorClass *__thiscall AbstractClass::checkAIResources(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b1933*/
  *Block = &vt_VectorClass_SlaveManagerClass_SlaveControl; /*0x6b1936*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b1940*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1948*/
    *(Block + 1) = 0; /*0x6b1950*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b195b*/
  *(Block + 2) = 0; /*0x6b1961*/
  if ( (a2 & 1) != 0 ) /*0x6b1968*/
    __3_YAXPAX_Z(Block); /*0x6b196b*/
  return (VectorClass *)Block; /*0x6b1975*/
}


// ==== 0x006B1980  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall SlaveManagerClass_25_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b1983*/
  *Block = &vt_VectorClass_SlaveManagerClass_SlaveControl; /*0x6b1986*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b1990*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1998*/
    *(Block + 1) = 0; /*0x6b19a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b19ab*/
  *(Block + 2) = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    __3_YAXPAX_Z(Block); /*0x6b19bb*/
  return (DynamicVector *)Block; /*0x6b19c5*/
}


// ==== 0x006B19D0  _VectorClass_PAVSlaveManagerClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_SlaveManagerClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b19d3*/
  *Block = &vt_VectorClass_SlaveManagerClass; /*0x6b19d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b19e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b19e8*/
    *(Block + 1) = 0; /*0x6b19f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b19fb*/
  *(Block + 2) = 0; /*0x6b1a01*/
  if ( (a2 & 1) != 0 ) /*0x6b1a08*/
    __3_YAXPAX_Z(Block); /*0x6b1a0b*/
  return (VectorClass *)Block; /*0x6b1a15*/
}


// ==== 0x006B1A20  _DynamicVectorClass_PAVSlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_SlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b1a23*/
  *Block = &vt_VectorClass_SlaveManagerClass; /*0x6b1a26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b1a30*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1a38*/
    *(Block + 1) = 0; /*0x6b1a40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b1a4b*/
  *(Block + 2) = 0; /*0x6b1a51*/
  if ( (a2 & 1) != 0 ) /*0x6b1a58*/
    __3_YAXPAX_Z(Block); /*0x6b1a5b*/
  return (DynamicVector *)Block; /*0x6b1a65*/
}


// ==== 0x006B1A70  SlaveManagerClass::Calc2DDistance  this=SlaveManagerClass  sig=csp ====
__int64 __thiscall sub_6B1A70(__int16 *this)
{
  double v1; // st7

  v1 = Math::Sqrt((double)*this * (double)*this + (double)this->vtable2 * (double)this->vtable2); /*0x6b1a9c*/
  return Math::RoundToInt(v1); /*0x6b1aa9*/
}


// ==== 0x006B1AB0  SlaveControlVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall SlaveControlVector::Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x6b1abb*/
  this->Capacity = a2; /*0x6b1abe*/
  this->q030 = 1; /*0x6b1ac1*/
  this->__pad_034 = 0; /*0x6b1ac5*/
  *this = &vt_VectorClass_SlaveManagerClass_SlaveControl; /*0x6b1ac8*/
  if ( a2 ) /*0x6b1ace*/
  {
    if ( a3 ) /*0x6b1ad6*/
    {
      this->Items = a3; /*0x6b1ad8*/
      return this; /*0x6b1ade*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x6b1aed*/
    this->__pad_034 = 1; /*0x6b1af0*/
  }
  return this; /*0x6b1add*/
}


// ==== 0x006B1B00  sub_6B1B00  this=-  sig=ida-proto ====
int sub_6B1B00()
{
  MEMORY[0xB0B638] = 0; /*0x6b1b02*/
  MEMORY[0xB0B63C] = 0; /*0x6b1b07*/
  MEMORY[0xB0B640] = 0; /*0x6b1b0c*/
  MEMORY[0xB0B644] = 0; /*0x6b1b11*/
  return 0; /*0x6b1b16*/
}


// ==== 0x006B1B20  SliderClass::Constructor  this=SliderClass  sig=csp ====
int *__thiscall SliderClass::Constructor(
        int *this,
        int a2,
        int a3,
        ControlClass *aP3,
        int aP4,
        ControlClass *aP5,
        int a7)
{
  ShapeButtonClass *v8; // edi
  int v9; // eax
  ShapeButtonClass *v10; // eax
  ShapeButtonClass *v11; // edi
  int v12; // eax
  ShapeButtonClass *v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  char v18; // bl
  int v19; // ebp
  double v20; // st7
  int v21; // edi
  double v22; // st7
  int v23; // eax
  int v24; // ebp
  int v25; // edi
  int v26; // eax
  ControlClass *v28; // [esp-14h] [ebp-34h]
  ControlClass *v29; // [esp-14h] [ebp-34h]
  ControlClass *v30; // [esp-10h] [ebp-30h]
  ControlClass *v31; // [esp-10h] [ebp-30h]

  ListClass::Constructor((int)this, a2, a3, aP3, (SliderClass *)aP4, (int)aP5); /*0x6b1b44*/
  *this = (int)&vt_SliderClass; /*0x6b1b51*/
  this->q044 = a7 != 0; /*0x6b1b5c*/
  this->q03C = 0; /*0x6b1b5f*/
  this->SliderClass_field_0x10 = 0; /*0x6b1b62*/
  if ( !a7 ) /*0x6b1b65*/
  {
    v8 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1b72*/
    if ( v8 ) /*0x6b1b79*/
    {
      v30 = (ControlClass *)this->SliderClass_field_0x04; /*0x6b1b87*/
      v28 = (ControlClass *)(this->q005 + this->SliderClass_field_0x0C + 2); /*0x6b1b8c*/
      v9 = SearchMIXFile(&stru_830620.__pad_579C[40972], 0); /*0x6b1b94*/
      v10 = ShapeButtonClass::Constructor(v8, (ControlClass *)a2, v9, v28, v30, 0, 0, 0); /*0x6b1b9d*/
    }
    else
    {
      v10 = 0; /*0x6b1ba4*/
    }
    this->q03C = (int)v10; /*0x6b1ba8*/
    v11 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1bb0*/
    if ( v11 ) /*0x6b1bb7*/
    {
      v31 = (ControlClass *)this->SliderClass_field_0x04; /*0x6b1bc5*/
      v29 = (ControlClass *)(this->SliderClass_field_0x0C - 6); /*0x6b1bc6*/
      v12 = SearchMIXFile(&stru_830620.__pad_579C[40956], 0); /*0x6b1bce*/
      v13 = ShapeButtonClass::Constructor(v11, (ControlClass *)a2, v12, v29, v31, 0, 0, 0); /*0x6b1bd7*/
    }
    else
    {
      v13 = 0; /*0x6b1bde*/
    }
    v14 = this->q03C; /*0x6b1be0*/
    this->SliderClass_field_0x10 = (int)v13; /*0x6b1be3*/
    if ( v14 ) /*0x6b1be8*/
    {
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 132))(v14, this); /*0x6b1bed*/
      (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->q03C + 12))(this->q03C, this); /*0x6b1bf9*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->q03C + 72))(this->q03C); /*0x6b1c01*/
    }
    v15 = this->SliderClass_field_0x10; /*0x6b1c04*/
    if ( v15 ) /*0x6b1c09*/
    {
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v15 + 132))(v15, this); /*0x6b1c0e*/
      (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->SliderClass_field_0x10 + 12))(this->SliderClass_field_0x10, this); /*0x6b1c1a*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->SliderClass_field_0x10 + 72))(this->SliderClass_field_0x10); /*0x6b1c22*/
    }
  }
  v16 = this->SliderClass_field_0x0C; /*0x6b1c25*/
  if ( v16 > 1 ) /*0x6b1c2b*/
    v16 = 1; /*0x6b1c2d*/
  this->q048 = v16; /*0x6b1c35*/
  v17 = *this; /*0x6b1c3f*/
  this->q048 = 1; /*0x6b1c43*/
  (*(void (__thiscall **)(int *))(v17 + 72))(this); /*0x6b1c46*/
  v18 = this->q02E; /*0x6b1c49*/
  if ( v18 ) /*0x6b1c4e*/
    v19 = this->q005; /*0x6b1c50*/
  else
    v19 = this->q006; /*0x6b1c55*/
  v20 = (double)this->SliderClass_field_0x0C; /*0x6b1c58*/
  v21 = Math::RoundToInt(v20); /*0x6b1c7c*/
  if ( v21 <= 4 ) /*0x6b1c7e*/
    v21 = 4; /*0x6b1c80*/
  v22 = (double)this->q034 / v20; /*0x6b1c85*/
  this->q04C = v21; /*0x6b1c88*/
  v23 = Math::RoundToInt(v22); /*0x6b1c91*/
  if ( v23 >= v19 - v21 ) /*0x6b1c9c*/
    v23 = v19 - v21; /*0x6b1c9e*/
  this->SliderClass_field_0x14 = v23; /*0x6b1ca2*/
  if ( v18 ) /*0x6b1ca5*/
    v24 = this->q005; /*0x6b1ca7*/
  else
    v24 = this->q006; /*0x6b1cac*/
  v25 = Math::RoundToInt(v22); /*0x6b1cc5*/
  if ( v25 <= 4 ) /*0x6b1cc7*/
    v25 = 4; /*0x6b1cc9*/
  this->q04C = v25; /*0x6b1cd0*/
  v26 = Math::RoundToInt(v22); /*0x6b1cd3*/
  if ( v26 >= v24 - v25 ) /*0x6b1ce0*/
    v26 = v24 - v25; /*0x6b1ce2*/
  this->SliderClass_field_0x14 = v26; /*0x6b1ce4*/
  this->SliderClass_field_0x2C = 0; /*0x6b1ce7*/
  return this; /*0x6b1ced*/
}


// ==== 0x006B1D00  SliderClass::Destructor  this=SliderClass  sig=csp ====
int __thiscall SliderClass::Destructor(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))this->q03C; /*0x6b1d03*/
  *this = &vt_SliderClass; /*0x6b1d06*/
  if ( v2 ) /*0x6b1d0e*/
  {
    (**v2)(v2, 1); /*0x6b1d14*/
    this->q03C = 0; /*0x6b1d16*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->q040; /*0x6b1d1d*/
  if ( v3 ) /*0x6b1d22*/
  {
    (**v3)(v3, 1); /*0x6b1d28*/
    this->q040 = 0; /*0x6b1d2a*/
  }
  return GadgetClass::Dtor(this); /*0x6b1d38*/
}


// ==== 0x006B1D40  SliderClass::GetValue  this=SliderClass  sig=csp ====
int __thiscall SliderClass::_vt34(int this, int a2)
{
  int v3; // ebx
  double v4; // st7
  int v5; // edi
  int v6; // eax

  if ( !GaugeClass::SetValue((_DWORD *)this, a2) ) /*0x6b1d48*/
    return 0; /*0x6b1db0*/
  if ( *(_BYTE *)(this + 46) ) /*0x6b1d51*/
    v3 = *(_DWORD *)(this + 20); /*0x6b1d5a*/
  else
    v3 = *(_DWORD *)(this + 24); /*0x6b1d5f*/
  v4 = (double)*(int *)(this + 48); /*0x6b1d62*/
  v5 = Math::RoundToInt(v4); /*0x6b1d7c*/
  if ( v5 <= 4 ) /*0x6b1d7e*/
    v5 = 4; /*0x6b1d80*/
  *(_DWORD *)(this + 76) = v5; /*0x6b1d88*/
  v6 = Math::RoundToInt(v4); /*0x6b1d8f*/
  if ( v6 >= v3 - v5 ) /*0x6b1da0*/
    v6 = v3 - v5; /*0x6b1da2*/
  *(_DWORD *)(this + 80) = v6; /*0x6b1da4*/
  return 1; /*0x6b1dac*/
}


// ==== 0x006B1DC0  SliderClass::OnClick  this=SliderClass  sig=csp ====
__int64 __thiscall SliderClass::_vt42(int *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  double v5; // st7
  int v6; // edi
  __int64 result; // rax

  v3 = this->SliderClass_field_0x0C; /*0x6b1dc7*/
  if ( a2 < v3 ) /*0x6b1dcc*/
    v3 = a2; /*0x6b1dce*/
  this->q048 = v3; /*0x6b1dd3*/
  if ( v3 <= 1 ) /*0x6b1dd6*/
    v3 = 1; /*0x6b1dd8*/
  this->q048 = v3; /*0x6b1ddd*/
  (*(void (__thiscall **)(int *))(*this + 72))(this); /*0x6b1de6*/
  if ( this->q02E ) /*0x6b1de9*/
    v4 = this->q005; /*0x6b1df0*/
  else
    v4 = this->q006; /*0x6b1df5*/
  v5 = (double)this->SliderClass_field_0x0C; /*0x6b1df8*/
  v6 = Math::RoundToInt(v5); /*0x6b1e12*/
  if ( v6 <= 4 ) /*0x6b1e14*/
    v6 = 4; /*0x6b1e16*/
  this->q04C = v6; /*0x6b1e1e*/
  result = Math::RoundToInt(v5); /*0x6b1e25*/
  if ( (int)result >= v4 - v6 ) /*0x6b1e36*/
    this->SliderClass_field_0x14 = v4 - v6; /*0x6b1e3f*/
  else
    this->SliderClass_field_0x14 = result; /*0x6b1e38*/
  return result; /*0x6b1e3b*/
}


// ==== 0x006B1E50  SliderClass::Draw  this=SliderClass  sig=csp ====
int __thiscall SliderClass::Draw(int this, SliderClass *aP1)
{
  SliderClass *v3; // ecx
  int v4; // edi
  int v5; // ebx
  double v6; // st7
  int v7; // edi
  int v8; // eax

  v3 = aP1; /*0x6b1e53*/
  v4 = *(_DWORD *)(this + 72); /*0x6b1e5b*/
  if ( (int)aP1 >= *(_DWORD *)(this + 48) - v4 ) /*0x6b1e62*/
    v3 = (SliderClass *)(*(_DWORD *)(this + 48) - v4); /*0x6b1e64*/
  if ( !GaugeClass::GetValue((int *)this, v3) ) /*0x6b1e69*/
    return 0; /*0x6b1ed1*/
  if ( *(_BYTE *)(this + 46) ) /*0x6b1e72*/
    v5 = *(_DWORD *)(this + 20); /*0x6b1e7a*/
  else
    v5 = *(_DWORD *)(this + 24); /*0x6b1e7f*/
  v6 = (double)*(int *)(this + 48); /*0x6b1e82*/
  v7 = Math::RoundToInt(v6); /*0x6b1e9c*/
  if ( v7 <= 4 ) /*0x6b1e9e*/
    v7 = 4; /*0x6b1ea0*/
  *(_DWORD *)(this + 76) = v7; /*0x6b1ea8*/
  v8 = Math::RoundToInt(v6); /*0x6b1eaf*/
  if ( v8 >= v5 - v7 ) /*0x6b1ebf*/
    v8 = v5 - v7; /*0x6b1ec1*/
  *(_DWORD *)(this + 80) = v8; /*0x6b1ec3*/
  return 1; /*0x6b1ec6*/
}


// ==== 0x006B1EE0  ObjectClass::method_6B1EE0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_6B1EE0(int this)
{
  int v2; // ebx
  double v3; // st7
  int v4; // edi
  __int64 result; // rax

  if ( *(_BYTE *)(this + 46) ) /*0x6b1ee6*/
    v2 = *(_DWORD *)(this + 20); /*0x6b1eed*/
  else
    v2 = *(_DWORD *)(this + 24); /*0x6b1ef2*/
  v3 = (double)*(int *)(this + 48); /*0x6b1ef5*/
  v4 = Math::RoundToInt(v3); /*0x6b1f0f*/
  if ( v4 <= 4 ) /*0x6b1f11*/
    v4 = 4; /*0x6b1f13*/
  *(_DWORD *)(this + 76) = v4; /*0x6b1f1b*/
  result = Math::RoundToInt(v3); /*0x6b1f22*/
  if ( (int)result >= v2 - v4 ) /*0x6b1f31*/
    *(_DWORD *)(this + 80) = v2 - v4; /*0x6b1f3b*/
  else
    *(_DWORD *)(this + 80) = result; /*0x6b1f33*/
  return result; /*0x6b1f36*/
}


// ==== 0x006B1F50  SliderClass::SetValue  this=SliderClass  sig=csp ====
int __thiscall SliderClass::_vt31(int this, unsigned int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // edi

  if ( (a2 & 1) == 0 ) /*0x6b1f5c*/
    return CellClass::DrawDispatch((int *)this, a2, a3, 0); /*0x6b1fef*/
  if ( *(_BYTE *)(this + 46) ) /*0x6b1f62*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640]); /*0x6b1f71*/
    v6 = *(_DWORD *)(this + 12); /*0x6b1f74*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]); /*0x6b1f7b*/
    v6 = *(_DWORD *)(this + 16); /*0x6b1f7e*/
  }
  v7 = *(_DWORD *)(this + 80); /*0x6b1f81*/
  v8 = v6 + 1; /*0x6b1f84*/
  if ( v5 >= v7 + v8 ) /*0x6b1f8a*/
  {
    if ( v5 <= v8 + v7 + *(_DWORD *)(this + 76) ) /*0x6b1fac*/
    {
      v9 = a3; /*0x6b1fc5*/
      CellClass::DrawDispatch((int *)this, a2, a3, 0); /*0x6b1fcf*/
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 172))(this, 0); /*0x6b1fb4*/
      v9 = a3; /*0x6b1fba*/
      CellClass::DrawDispatch((int *)this, 0, a3, 0); /*0x6b1fc3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 172))(this, 1); /*0x6b1f92*/
    v9 = a3; /*0x6b1f98*/
    CellClass::DrawDispatch((int *)this, 0, a3, 0); /*0x6b1fa1*/
  }
  *v9 = 0; /*0x6b1fd4*/
  return 1; /*0x6b1fda*/
}


// ==== 0x006B2000  SliderClass::OnTrack  this=SliderClass  sig=csp ====
int __thiscall SliderClass::_vt43(int *this, int a2)
{
  int v2; // eax

  v2 = *this; /*0x6b2007*/
  if ( a2 ) /*0x6b2009*/
    return (*(int (__stdcall **)(int))(v2 + 140))(this->q034 - this->q048); /*0x6b2014*/
  else
    return (*(int (__stdcall **)(int))(v2 + 140))(this->q034 + this->q048); /*0x6b2027*/
}


// ==== 0x006B2040  SliderClass::OnRelease  this=SliderClass  sig=csp ====
int __thiscall SliderClass::_vt44(int *this, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = this->q034; /*0x6b2044*/
  v3 = *this; /*0x6b2049*/
  if ( a2 ) /*0x6b204b*/
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 - 1); /*0x6b204f*/
  else
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 + 1); /*0x6b205a*/
}


// ==== 0x006B2070  SliderClass::HitTest  this=SliderClass  sig=csp ====
int __thiscall SliderClass::_vt39(int this)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 46) ) /*0x6b2070*/
  {
    v1 = *(_DWORD *)(this + 16); /*0x6b2082*/
    v8 = *(_DWORD *)(this + 12) + *(_DWORD *)(this + 80); /*0x6b2085*/
    v2 = *(_DWORD *)(this + 76); /*0x6b2089*/
    v3 = *(_DWORD *)(this + 24); /*0x6b208c*/
    v9 = v1; /*0x6b208f*/
    v11 = v3; /*0x6b2093*/
    v10 = v2; /*0x6b20a2*/
  }
  else
  {
    v5 = *(_DWORD *)(this + 80); /*0x6b20b2*/
    v8 = *(_DWORD *)(this + 12); /*0x6b20b5*/
    v6 = *(_DWORD *)(this + 20); /*0x6b20be*/
    v9 = *(_DWORD *)(this + 16) + v5; /*0x6b20c1*/
    v7 = *(_DWORD *)(this + 76); /*0x6b20c5*/
    v10 = v6; /*0x6b20c8*/
    v11 = v7; /*0x6b20d7*/
  }
  return DrawBuildingTilesSHP(&v8, 1, 1); /*0x6b20ab*/
}


// ==== 0x006B20F0  SliderClass::GetRange  this=SliderClass  sig=csp ====
int __thiscall SliderClass::_vt27(int this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v7[4]; // [esp+8h] [ebp-10h] BYREF

  if ( !*(_BYTE *)(this + 68) || !Control::DispatchClick((_DWORD *)this, a2) ) /*0x6b2103*/
    return BuildingPlacement::HandleClick(this, a2); /*0x6b214f*/
  v3 = *(_DWORD *)(this + 16); /*0x6b210f*/
  v4 = *(_DWORD *)(this + 20); /*0x6b2112*/
  v7[0] = *(_DWORD *)(this + 12); /*0x6b2115*/
  v5 = *(_DWORD *)(this + 24); /*0x6b2119*/
  v7[1] = v3; /*0x6b211c*/
  v7[2] = v4; /*0x6b2120*/
  v7[3] = v5; /*0x6b212c*/
  DrawBuildingTilesSHP(v7, 0, 1); /*0x6b2130*/
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 156))(this); /*0x6b2139*/
  return 1; /*0x6b213f*/
}


// ==== 0x006B2160  SliderClass::SetRange  this=SliderClass  sig=csp ====
char __thiscall SliderClass::_vt19(_DWORD *this, char a2, int a3, int a4)
{
  int v4; // eax

  LOBYTE(v4) = a2; /*0x6b2160*/
  if ( (a2 & 4) != 0 ) /*0x6b2169*/
  {
    if ( a4 == this->q03C ) /*0x6b2175*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 176))(this, 0); /*0x6b217b*/
    v4 = this->q040; /*0x6b2181*/
    if ( a4 == v4 ) /*0x6b2187*/
      LOBYTE(v4) = (*(int (__thiscall **)(_DWORD *, int))(*this + 176))(this, 1); /*0x6b218f*/
  }
  return v4; /*0x6b2195*/
}


// ==== 0x006B21A0  sub_6B21A0  this=-  sig=ida-proto ====
void sub_6B21A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b21ac*/
  MEMORY[0xB0B680] = Math::Sqrt(v0 + v0); /*0x6b21be*/
}


// ==== 0x006B21D0  sub_6B21D0  this=-  sig=ida-proto ====
void sub_6B21D0()
{
  MEMORY[0xB0B6D0] = MEMORY[0xB0B680] / 60.0; /*0x6b21dc*/
}


// ==== 0x006B21F0  sub_6B21F0  this=-  sig=ida-proto ====
void sub_6B21F0()
{
  MEMORY[0xB0B6B8] = 1.0 / MEMORY[0xB0B6D0]; /*0x6b21fc*/
}


// ==== 0x006B2210  sub_6B2210  this=-  sig=ida-proto ====
void sub_6B2210()
{
  MEMORY[0xB0B6B0] = 0.0174532925199433 * 45.0; /*0x6b221c*/
}


// ==== 0x006B2230  sub_6B2230  this=-  sig=ida-proto ====
void sub_6B2230()
{
  MEMORY[0xB0B688] = 0.0174532925199433 * 60.0; /*0x6b223c*/
}


// ==== 0x006B2250  sub_6B2250  this=-  sig=ida-proto ====
void sub_6B2250()
{
  MEMORY[0xB0B648] = 0.0174532925199433 * 90.0; /*0x6b225c*/
}


// ==== 0x006B2270  sub_6B2270  this=-  sig=ida-proto ====
__int64 sub_6B2270()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0B648] - MEMORY[0xB0B688]); /*0x6b2282*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0B680] * 0.5); /*0x6b2296*/
  MEMORY[0xB0B6D8] = result; /*0x6b229b*/
  return result; /*0x6b22a0*/
}


// ==== 0x006B22B0  sub_6B22B0  this=-  sig=ida-proto ====
void sub_6B22B0()
{
  MEMORY[0xB0B690] = Math::ArcTan((double)MEMORY[0xB0B6D8] * 0.00390625); /*0x6b22c7*/
}


// ==== 0x006B22E0  sub_6B22E0  this=-  sig=ida-proto ====
void sub_6B22E0()
{
  MEMORY[0xB0B6A8] = Math::ArcTan((double)(2 * MEMORY[0xB0B6D8]) / MEMORY[0xB0B680]); /*0x6b2302*/
}


// ==== 0x006B2310  sub_6B2310  this=-  sig=ida-proto ====
__int64 sub_6B2310()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B6D8]) + 0.5); /*0x6b232b*/
  MEMORY[0xB0B6CC] = result; /*0x6b2330*/
  return result; /*0x6b2336*/
}


// ==== 0x006B2340  sub_6B2340  this=-  sig=ida-proto ====
int sub_6B2340()
{
  MEMORY[0xB0B678] = 0; /*0x6b2342*/
  MEMORY[0xB0B67A] = 0; /*0x6b2348*/
  return 0; /*0x6b234e*/
}


// ==== 0x006B2350  sub_6B2350  this=-  sig=ida-proto ====
int sub_6B2350()
{
  MEMORY[0xB0B698] = 0; /*0x6b2352*/
  MEMORY[0xB0B69C] = 0; /*0x6b2357*/
  MEMORY[0xB0B6A0] = 0; /*0x6b235c*/
  return 0; /*0x6b2361*/
}


// ==== 0x006B2370  sub_6B2370  this=-  sig=ida-proto ====
int sub_6B2370()
{
  MEMORY[0xB0B6C8] = 0; /*0x6b2375*/
  MEMORY[0xB0B6C0] = 128; /*0x6b237f*/
  MEMORY[0xB0B6C4] = 128; /*0x6b2384*/
  return 128; /*0x6b2389*/
}


// ==== 0x006B2390  sub_6B2390  this=-  sig=ida-proto ====
int sub_6B2390()
{
  MEMORY[0xB0B668] = 0; /*0x6b2392*/
  MEMORY[0xB0B66C] = 0; /*0x6b2397*/
  MEMORY[0xB0B670] = 0; /*0x6b239c*/
  MEMORY[0xB0B674] = 0; /*0x6b23a1*/
  return 0; /*0x6b23a6*/
}


// ==== 0x006B23B0  sub_6B23B0  this=-  sig=ida-proto ====
int sub_6B23B0()
{
  MEMORY[0xB0B654] = 0; /*0x6b23b7*/
  MEMORY[0xB0B658] = 0; /*0x6b23bc*/
  MEMORY[0xB0B65C] = 1; /*0x6b23c1*/
  MEMORY[0xB0B65D] = 0; /*0x6b23c8*/
  MEMORY[0xB0B650] = (int)&vt_DynamicVectorClass_UndoInfoStruct; /*0x6b23cd*/
  MEMORY[0xB0B664] = 10; /*0x6b23d7*/
  MEMORY[0xB0B660] = 0; /*0x6b23e1*/
  return atexit(sub_6B23F0); /*0x6b23ec*/
}


// ==== 0x006B23F0  sub_6B23F0  this=-  sig=ida-proto ====
void __cdecl sub_6B23F0()
{
  MEMORY[0xB0B650] = (int)&vt_VectorClass_UndoInfoStruct; /*0x6b23f8*/
  if ( MEMORY[0xB0B654] && MEMORY[0xB0B65D] ) /*0x6b240c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B654]); /*0x6b240f*/
    MEMORY[0xB0B654] = 0; /*0x6b2417*/
  }
  MEMORY[0xB0B65D] = 0; /*0x6b241d*/
  MEMORY[0xB0B658] = 0; /*0x6b2423*/
}


// ==== 0x006B2430  sub_6B2430  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_6B2430(int *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // ebx
  int v4; // edi
  int v6; // eax

  result = (_DWORD *)MEMORY[0xB0B658]; /*0x6b2430*/
  v3 = a1[1]; /*0x6b2436*/
  v4 = *a1; /*0x6b243b*/
  if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b2475*/
    || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
    && MEMORY[0xB0B664] > 0
    && (result = (_DWORD *)(*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
                             &MEMORY[0xB0B650],
                             MEMORY[0xB0B658] + MEMORY[0xB0B664],
                             0),
        (_BYTE)result) )
  {
    v6 = MEMORY[0xB0B660]++; /*0x6b2483*/
    result = (char *)MEMORY[0xB0B654] + 12 * v6; /*0x6b248f*/
    *result = v4; /*0x6b2492*/
    result[1] = v3; /*0x6b2495*/
    result[2] = a2; /*0x6b2498*/
  }
  return result; /*0x6b249b*/
}


// ==== 0x006B2520  ObjectClass::System_Init_6B2520  this=AbstractClass  sig=csp ====
char __thiscall sub_6B2520(int *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->q024; /*0x6b252c*/
  v6 = v2; /*0x6b2531*/
  v3 = SHIWORD(v2) + (__int16)v2; /*0x6b253d*/
  if ( v3 <= g_MapCellHeight_Value ) /*0x6b2542*/
    return 0; /*0x6b2542*/
  if ( (__int16)v6 - SHIWORD(v6) >= g_MapCellHeight_Value ) /*0x6b254c*/
    return 0; /*0x6b254c*/
  if ( SHIWORD(v6) - (__int16)v6 >= g_MapCellHeight_Value ) /*0x6b2552*/
    return 0; /*0x6b2552*/
  if ( v3 > g_MapCellCount ) /*0x6b255a*/
    return 0; /*0x6b255a*/
  if ( this->q011 != -1 ) /*0x6b2560*/
    return 0; /*0x6b2560*/
  if ( this->q0E4 ) /*0x6b2562*/
    return 0; /*0x6b2562*/
  v6 = v2; /*0x6b2570*/
  if ( Tactical::GetCellData((__int16 *)&v6)[69] ) /*0x6b2579*/
    return 0; /*0x6b25b0*/
  v4 = this->q038; /*0x6b2580*/
  if ( v4 >= MEMORY[0xA8ED38] || v4 == 0xFFFF ) /*0x6b2592*/
    return 1; /*0x6b25a9*/
  else
    return *(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v4) + 736); /*0x6b259f*/
}


// ==== 0x006B25C0  CellClass::IsBuildable  this=CellClass  sig=csp ====
char __thiscall CellClass_IsBuildable(int this)
{
  int v2; // esi
  __int16 v3; // cx
  int v4; // eax
  __int16 v5; // dx
  int v6; // eax
  int v7; // edi
  __int16 v9; // [esp+8h] [ebp-4h] BYREF
  __int16 v10; // [esp+Ah] [ebp-2h]

  v2 = *(_DWORD *)(this + 228); /*0x6b25c5*/
  if ( v2 ) /*0x6b25cd*/
  {
    while ( !*(_BYTE *)(v2 + 144) /*0x6b25ef*/
         || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 15
         || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 1 )
    {
      v2 = *(_DWORD *)(v2 + 48); /*0x6b25f5*/
      if ( !v2 ) /*0x6b25fa*/
        goto LABEL_6; /*0x6b25fa*/
    }
    return 0; /*0x6b25ef*/
  }
LABEL_6:
  if ( *(_DWORD *)(this + 232) ) /*0x6b25fc*/
    return 0; /*0x6b25fc*/
  if ( (*(_DWORD *)(this + 320) & 0x500) != 0 ) /*0x6b2613*/
    return 0; /*0x6b2613*/
  v3 = *(_WORD *)(this + 38); /*0x6b261d*/
  v9 = LOWORD(MEMORY[0x89F688][0]) + *(_WORD *)(this + 36); /*0x6b2632*/
  v10 = HIWORD(MEMORY[0x89F688][0]) + v3; /*0x6b2637*/
  v4 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v9) + 80); /*0x6b2653*/
  if ( (v4 & 0x500) != 0 && (v4 & 0x800) != 0 ) /*0x6b2661*/
    return 0; /*0x6b2661*/
  v5 = HIWORD(MEMORY[0x89F6A0]) + *(_WORD *)(this + 38); /*0x6b2675*/
  v9 = MEMORY[0x89F6A0] + *(_WORD *)(this + 36); /*0x6b267c*/
  v10 = v5; /*0x6b2685*/
  v6 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v9) + 80); /*0x6b269d*/
  if ( (v6 & 0x500) != 0 && (v6 & 0x800) == 0 ) /*0x6b26ab*/
    return 0; /*0x6b26ab*/
  if ( *(_DWORD *)(this + 68) != -1 || !LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)(this + 36)) ) /*0x6b26b9*/
    return 0; /*0x6b26f0*/
  v7 = *(_DWORD *)(this + 56); /*0x6b26c2*/
  if ( v7 >= MEMORY[0xA8ED38] || v7 == 0xFFFF ) /*0x6b26d4*/
    return 1; /*0x6b26ea*/
  else
    return *(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v7) + 736); /*0x6b26e1*/
}


// ==== 0x006B2700  InitializeBuildabilityGrid  this=-  sig=csp ====
int __stdcall InitializeBuildabilityGrid(int a1)
{
  int v1; // esi
  char *v2; // eax
  _BYTE *v3; // ecx
  int v4; // edx
  int result; // eax
  __int16 v6; // cx
  __int16 v7; // di
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  char *v12; // esi
  int v13; // eax
  __int16 v14; // dx
  int v15; // edi
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *v19; // eax
  int v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+2Ch] [ebp-10h] BYREF
  int v25; // [esp+30h] [ebp-Ch]
  unsigned __int16 v26[4]; // [esp+34h] [ebp-8h] BYREF

  if ( MEMORY[0xB0B6EC] ) /*0x6b2714*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b2717*/
    MEMORY[0xB0B6EC] = 0; /*0x6b271f*/
  }
  v1 = (MEMORY[0x87F914] + 1) * (MEMORY[0x87F918] + 1); /*0x6b2734*/
  v2 = (char *)__2_YAPAXI_Z(8 * v1); /*0x6b273f*/
  if ( v2 ) /*0x6b2749*/
  {
    if ( v1 - 1 >= 0 ) /*0x6b2750*/
    {
      v3 = v2 + 5; /*0x6b2752*/
      v4 = v1; /*0x6b2755*/
      do /*0x6b2764*/
      {
        *(_DWORD *)(v3 - 5) = 0; /*0x6b2756*/
        *(v3 - 1) = 0; /*0x6b2759*/
        *v3 = 0; /*0x6b275d*/
        v3 += 8; /*0x6b2760*/
        --v4; /*0x6b2763*/
      }
      while ( v4 ); /*0x6b2764*/
    }
    MEMORY[0xB0B6EC] = v2; /*0x6b2766*/
  }
  else
  {
    MEMORY[0xB0B6EC] = 0; /*0x6b276d*/
  }
  dword_8759A0 = MEMORY[0x87F918] + 1; /*0x6b2784*/
  dword_8759AC = MEMORY[0x87F910]; /*0x6b2790*/
  result = MEMORY[0x87F914] + 1; /*0x6b27e4*/
  dword_8759A4 = MEMORY[0x87F914] + 1; /*0x6b27ec*/
  v6 = MEMORY[0x87F914] - MEMORY[0x87F90C]; /*0x6b27f8*/
  dword_8759A8 = MEMORY[0x87F90C]; /*0x6b27fe*/
  v7 = (HIWORD(a1) - 14) & (((__int16)(HIWORD(a1) - 14) < 0) - 1); /*0x6b2804*/
  if ( MEMORY[0x87F914] - MEMORY[0x87F90C] >= (__int16)(a1 + 14) ) /*0x6b2807*/
    v6 = a1 + 14; /*0x6b2809*/
  LOWORD(v8) = MEMORY[0x87F918] - MEMORY[0x87F910]; /*0x6b2818*/
  if ( MEMORY[0x87F918] - MEMORY[0x87F910] >= (__int16)(HIWORD(a1) + 14) ) /*0x6b2821*/
    LOWORD(v8) = HIWORD(a1) + 14; /*0x6b2823*/
  v9 = v7; /*0x6b2826*/
  v8 = (__int16)v8; /*0x6b2829*/
  v20 = v7; /*0x6b282e*/
  v25 = (__int16)v8; /*0x6b2832*/
  if ( v7 <= (__int16)v8 ) /*0x6b2836*/
  {
    v23 = v6; /*0x6b2846*/
    do /*0x6b2a52*/
    {
      v10 = (__int16)((a1 - 14) & (((__int16)(a1 - 14) < 0) - 1)); /*0x6b284a*/
      if ( v10 <= v23 ) /*0x6b2854*/
      {
        do /*0x6b2a41*/
        {
          v11 = -1; /*0x6b2865*/
          v12 = (char *)MEMORY[0xB0B6EC] + 8 * v10 + 8 * v9 * result; /*0x6b2868*/
          v12[4] = 0; /*0x6b286b*/
          v12[5] = 0; /*0x6b286f*/
          v12[6] = 0; /*0x6b2873*/
          v26[0] = v10 + dword_8759A8; /*0x6b2884*/
          v13 = (__int16)(v10 + dword_8759A8); /*0x6b2889*/
          v14 = v9 + dword_8759AC; /*0x6b288c*/
          v26[1] = v9 + dword_8759AC; /*0x6b2897*/
          if ( v13 >= MEMORY[0x87F90C] ) /*0x6b289c*/
          {
            if ( v13 <= MEMORY[0x87F914] + MEMORY[0x87F90C] /*0x6b28cd*/
              && v14 >= MEMORY[0x87F910]
              && v14 <= MEMORY[0x87F918] + MEMORY[0x87F910] )
            {
              v15 = *((unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v26) + 284); /*0x6b28ef*/
              v11 = 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v26) + 283) /*0x6b291b*/
                  + *(_DWORD *)*(&MEMORY[0x83FF18] + v15);
              v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v26); /*0x6b291d*/
              if ( !CellClass::IsBuildable((int)v16) ) /*0x6b292a*/
                goto LABEL_24; /*0x6b292a*/
              v24 = *(_DWORD *)v26 - 0x10000; /*0x6b2959*/
              v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6b295d*/
              if ( !CellClass::IsBuildable((int)v17) ) /*0x6b2966*/
                goto LABEL_24; /*0x6b2966*/
              LOWORD(v21) = v26[0] - 1; /*0x6b2979*/
              HIWORD(v21) = v26[1] - 1; /*0x6b2982*/
              v24 = v21; /*0x6b2991*/
              v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24); /*0x6b2995*/
              if ( !CellClass::IsBuildable((int)v18) /*0x6b29d6*/
                || (HIWORD(v22) = v26[1],
                    LOWORD(v22) = v26[0] - 1,
                    v24 = v22,
                    v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v24),
                    !CellClass::IsBuildable((int)v19)) )
              {
LABEL_24:
                v12[4] = 1; /*0x6b29df*/
              }
              if ( *(_DWORD *)v26 == a1 /*0x6b2a22*/
                || __PAIR32__(v26[1] - 1, v26[0]) == a1
                || v26[0] - 1 == (_WORD)a1 && (v26[1] - 1 == HIWORD(a1) || __PAIR32__(v26[1], v26[0] - 1) == a1) )
              {
                v12[6] = 1; /*0x6b2a2b*/
              }
            }
            v9 = v20; /*0x6b2a2f*/
          }
          ++v10; /*0x6b2a37*/
          *(_DWORD *)v12 = v11; /*0x6b2a38*/
          result = dword_8759A4; /*0x6b2a3c*/
        }
        while ( v10 <= v23 ); /*0x6b2a41*/
        v8 = v25; /*0x6b2a47*/
      }
      v20 = ++v9; /*0x6b2a4e*/
    }
    while ( v9 <= v8 ); /*0x6b2a52*/
  }
  return result; /*0x6b2a58*/
}


// ==== 0x006B2A70  ObjectClass::InitSlaveManagerGrid  this=ObjectClass  sig=csp ====
int SlaveManager_InitGrid()
{
  int v0; // esi
  char *v1; // eax
  _BYTE *v2; // ecx
  int v3; // edx
  int result; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // edx
  __int16 v8; // dx
  _WORD *j; // esi
  int v10; // ebp
  __int16 v11; // ax
  int v12; // ecx
  int v13; // edx
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edi
  _DWORD *v19; // esi
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  _DWORD *v23; // esi
  int v24; // esi
  int v25; // edx
  int v26; // esi
  void *v27; // eax
  int v28; // edx
  void *v29; // eax
  int v30; // edx
  char *v31; // [esp+8h] [ebp-4Ch]
  int v32; // [esp+Ch] [ebp-48h] BYREF
  int v33; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  int v35; // [esp+18h] [ebp-3Ch]
  int v36; // [esp+1Ch] [ebp-38h]
  int v37; // [esp+20h] [ebp-34h]
  _WORD v38[2]; // [esp+24h] [ebp-30h] BYREF
  int v39; // [esp+28h] [ebp-2Ch]
  int v40; // [esp+2Ch] [ebp-28h]
  int v41; // [esp+30h] [ebp-24h] BYREF
  int v42; // [esp+34h] [ebp-20h] BYREF
  int v43; // [esp+38h] [ebp-1Ch] BYREF
  int v44; // [esp+3Ch] [ebp-18h] BYREF
  __int16 v45[4]; // [esp+40h] [ebp-14h] BYREF
  _DWORD v46[3]; // [esp+48h] [ebp-Ch] BYREF

  if ( MEMORY[0xB0B6EC] ) /*0x6b2a7e*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b2a81*/
    MEMORY[0xB0B6EC] = 0; /*0x6b2a89*/
  }
  v0 = (MEMORY[0x87F914] + 1) * (MEMORY[0x87F918] + 1); /*0x6b2a9e*/
  v1 = (char *)__2_YAPAXI_Z(8 * v0); /*0x6b2aa9*/
  if ( v1 ) /*0x6b2ab3*/
  {
    if ( v0 - 1 >= 0 ) /*0x6b2aba*/
    {
      v2 = v1 + 5; /*0x6b2abc*/
      v3 = v0; /*0x6b2abf*/
      do /*0x6b2ace*/
      {
        *(_DWORD *)(v2 - 5) = 0; /*0x6b2ac0*/
        *(v2 - 1) = 0; /*0x6b2ac3*/
        *v2 = 0; /*0x6b2ac7*/
        v2 += 8; /*0x6b2aca*/
        --v3; /*0x6b2acd*/
      }
      while ( v3 ); /*0x6b2ace*/
    }
    MEMORY[0xB0B6EC] = v1; /*0x6b2ad0*/
  }
  else
  {
    MEMORY[0xB0B6EC] = 0; /*0x6b2ad7*/
  }
  dword_8759A8 = MEMORY[0x87F90C]; /*0x6b2ae8*/
  dword_8759AC = MEMORY[0x87F910]; /*0x6b2afa*/
  v46[0] = -65536; /*0x6b2b11*/
  result = MEMORY[0x87F914] + 1; /*0x6b2b23*/
  v5 = MEMORY[0x87F918] + 1; /*0x6b2b24*/
  v46[1] = -1; /*0x6b2b25*/
  v6 = 0; /*0x6b2b37*/
  dword_8759A4 = MEMORY[0x87F914] + 1; /*0x6b2b3b*/
  dword_8759A0 = MEMORY[0x87F918] + 1; /*0x6b2b40*/
  v46[2] = 0xFFFF; /*0x6b2b46*/
  for ( i = 0; v6 < v5; i = v6 ) /*0x6b2b4e*/
  {
    v7 = 0; /*0x6b2b56*/
    v40 = 0; /*0x6b2b5a*/
    if ( result > 0 ) /*0x6b2b5e*/
    {
      while ( 1 ) /*0x6b2b77*/
      {
        v39 = 0; /*0x6b2b77*/
        v33 = 0; /*0x6b2b7b*/
        v31 = (char *)MEMORY[0xB0B6EC] + 8 * v7 + 8 * v6 * result; /*0x6b2b82*/
        v31[4] = 0; /*0x6b2b86*/
        v31[5] = 0; /*0x6b2b8a*/
        v45[1] = dword_8759AC + v6; /*0x6b2ba8*/
        v8 = dword_8759A8 + v7; /*0x6b2bad*/
        v45[0] = v8; /*0x6b2ba3*/
        v32 = *(_DWORD *)v45; /*0x6b2bb1*/
        for ( j = v46; ; j += 2 ) /*0x6b2bb5*/
        {
          v10 = SHIWORD(v32) + v8; /*0x6b2bc1*/
          if ( v10 > g_MapCellHeight_Value /*0x6b2bdc*/
            && v8 - SHIWORD(v32) < g_MapCellHeight_Value
            && SHIWORD(v32) - v8 < g_MapCellHeight_Value
            && v10 <= g_MapCellCount )
          {
            break; /*0x6b2bdc*/
          }
          if ( v33 >= 3 ) /*0x6b2be3*/
            break; /*0x6b2be3*/
          v11 = v45[1] + j[1]; /*0x6b2bf1*/
          LOWORD(v35) = v45[0] + *j; /*0x6b2bfa*/
          HIWORD(v35) = v11; /*0x6b2bff*/
          v8 = v35; /*0x6b2c04*/
          v32 = v35; /*0x6b2c09*/
          ++v33; /*0x6b2c0d*/
        }
        v12 = v8; /*0x6b2c1b*/
        v13 = SHIWORD(v32) + v8; /*0x6b2c1e*/
        if ( v13 <= g_MapCellHeight_Value /*0x6b2c45*/
          || v12 - SHIWORD(v32) >= g_MapCellHeight_Value
          || SHIWORD(v32) - v12 >= g_MapCellHeight_Value
          || v13 > g_MapCellCount )
        {
          v31[4] = 1; /*0x6b2ee4*/
        }
        else
        {
          v14 = *((unsigned __int8 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32) + 284); /*0x6b2c6c*/
          v15 = 15 * *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32) + 283) /*0x6b2c95*/
              + *(_DWORD *)*(&MEMORY[0x83FF18] + v14);
          v16 = g_MapCellHeight_Value; /*0x6b2c97*/
          v39 = v15; /*0x6b2c9c*/
          v17 = (__int16)(v45[1] - 1); /*0x6b2ca3*/
          v18 = v17 + v45[0]; /*0x6b2ca6*/
          if ( v18 > g_MapCellHeight_Value /*0x6b2ccd*/
            && v45[0] - v17 < g_MapCellHeight_Value
            && v17 - v45[0] < g_MapCellHeight_Value
            && v18 <= g_MapCellCount )
          {
            v36 = *(_DWORD *)v45 - 0x10000; /*0x6b2cdc*/
            v33 = *(_DWORD *)v45 - 0x10000; /*0x6b2ceb*/
            v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v33); /*0x6b2cf4*/
            v41 = v19[9]; /*0x6b2cfd*/
            if ( !MapSeed::IsCellInBounds((__int16 *)&v41) /*0x6b2d4e*/
              || v19[17] != -1
              || v19[57]
              || (v42 = v19[9], Tactical::GetCellData((__int16 *)&v42)[69])
              || (v20 = v19[14], v20 < MEMORY[0xA8ED38])
              && v20 != 0xFFFF
              && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v20) + 736) )
            {
              v31[4] = 1; /*0x6b2d5c*/
            }
            v16 = g_MapCellHeight_Value; /*0x6b2d60*/
          }
          v21 = (__int16)(v45[0] - 1); /*0x6b2d73*/
          v22 = (__int16)(v45[1] - 1); /*0x6b2d76*/
          if ( v22 + v21 > v16 && v21 - v22 < v16 && v22 - v21 < v16 && v22 + v21 <= g_MapCellCount ) /*0x6b2da0*/
          {
            LOWORD(v37) = v45[0] - 1; /*0x6b2daa*/
            HIWORD(v37) = v45[1] - 1; /*0x6b2daf*/
            v42 = v37; /*0x6b2dbe*/
            v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v42); /*0x6b2dc7*/
            v41 = v23[9]; /*0x6b2dd0*/
            if ( !MapSeed::IsCellInBounds((__int16 *)&v41) /*0x6b2e21*/
              || v23[17] != -1
              || v23[57]
              || (v33 = v23[9], Tactical::GetCellData((__int16 *)&v33)[69])
              || (v24 = v23[14], v24 < MEMORY[0xA8ED38])
              && v24 != 0xFFFF
              && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v24) + 736) )
            {
              v31[4] = 1; /*0x6b2e2f*/
            }
            v16 = g_MapCellHeight_Value; /*0x6b2e33*/
          }
          v25 = (__int16)(v45[0] - 1); /*0x6b2e3d*/
          v26 = v45[1] + v25; /*0x6b2e45*/
          if ( v26 > v16 && v25 - v45[1] < v16 && v45[1] - v25 < v16 && v26 <= g_MapCellCount ) /*0x6b2e60*/
          {
            v38[0] = -1; /*0x6b2e70*/
            v38[1] = 0; /*0x6b2e77*/
            v43 = *CellStruct::Add(v45, &v44, v38); /*0x6b2e89*/
            v27 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v43); /*0x6b2e93*/
            LOBYTE(v28) = 1; /*0x6b2e9a*/
            if ( !(unsigned __int8)System_Init_6B2520(v27, v28) ) /*0x6b2e9c*/
              v31[4] = 1; /*0x6b2ea9*/
          }
          if ( MapSeed::IsCellInBounds(v45) ) /*0x6b2eb1*/
          {
            v29 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v45); /*0x6b2ec4*/
            LOBYTE(v30) = 1; /*0x6b2ecb*/
            if ( !(unsigned __int8)System_Init_6B2520(v29, v30) ) /*0x6b2ecd*/
              v31[4] = 1; /*0x6b2eda*/
          }
        }
        *(_DWORD *)v31 = v39; /*0x6b2ef0*/
        result = dword_8759A4; /*0x6b2ef6*/
        v7 = ++v40; /*0x6b2efb*/
        if ( v40 >= dword_8759A4 ) /*0x6b2f02*/
          break; /*0x6b2f02*/
        v6 = i; /*0x6b2b66*/
      }
      v5 = dword_8759A0; /*0x6b2f08*/
      v6 = i; /*0x6b2f0e*/
    }
    ++v6; /*0x6b2f14*/
  }
  return result; /*0x6b2f23*/
}


// ==== 0x006B2F30  ProcessBuildingClassConstruction  this=-  sig=csp ====
char __fastcall sub_6B2F30(char a1, int a2, int a3)
{
  int v3; // esi
  __int16 v4; // bp
  __int16 v5; // bx
  __int16 v6; // di
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  void *v10; // eax
  __int16 v11; // di
  _DWORD *v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // edx
  int *v20; // esi
  int v21; // ebp
  int v22; // eax
  int i; // esi
  int v24; // eax
  int j; // esi
  int *ScreenRect; // eax
  int v27; // esi
  char v28; // dl
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  __int16 v32; // ax
  __int16 v33; // bp
  int v34; // esi
  int v35; // edx
  int v36; // edx
  int *v37; // eax
  int v38; // ecx
  int v39; // ebp
  int v40; // edx
  _DWORD *v41; // ecx
  _DWORD *v42; // eax
  int v43; // edi
  int v44; // ebx
  int v45; // ebp
  int v46; // esi
  int v47; // ecx
  int *v48; // eax
  int v49; // esi
  int v50; // edi
  int v51; // ecx
  int v52; // edx
  int v53; // ebp
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // edx
  int v60; // esi
  int v61; // eax
  int v62; // ecx
  void *v63; // edi
  int *v64; // eax
  int v65; // ebp
  int v66; // esi
  int v67; // ebx
  int *v68; // eax
  int v69; // edi
  int v70; // edx
  int v71; // ecx
  int v72; // eax
  int v73; // eax
  int v74; // ecx
  int v75; // edx
  int v77; // [esp+10h] [ebp-ACh] BYREF
  __int16 v78; // [esp+14h] [ebp-A8h]
  __int16 v79; // [esp+16h] [ebp-A6h]
  __int16 v80; // [esp+18h] [ebp-A4h]
  __int16 v81; // [esp+1Ah] [ebp-A2h]
  int v82; // [esp+1Ch] [ebp-A0h]
  int v83; // [esp+20h] [ebp-9Ch]
  char v84; // [esp+27h] [ebp-95h]
  int v85; // [esp+28h] [ebp-94h]
  int v86; // [esp+2Ch] [ebp-90h]
  int v87; // [esp+30h] [ebp-8Ch]
  int v88; // [esp+34h] [ebp-88h]
  int v89; // [esp+38h] [ebp-84h]
  int v90; // [esp+40h] [ebp-7Ch]
  int v91; // [esp+44h] [ebp-78h]
  int k; // [esp+48h] [ebp-74h]
  int v93; // [esp+4Ch] [ebp-70h]
  int v94; // [esp+50h] [ebp-6Ch]
  int v95; // [esp+54h] [ebp-68h] BYREF
  int v96; // [esp+58h] [ebp-64h] BYREF
  int v97; // [esp+5Ch] [ebp-60h] BYREF
  int v98; // [esp+60h] [ebp-5Ch] BYREF
  int v99; // [esp+64h] [ebp-58h]
  int v100; // [esp+68h] [ebp-54h]
  void **v101; // [esp+6Ch] [ebp-50h] BYREF
  void *Block; // [esp+70h] [ebp-4Ch]
  int v103; // [esp+74h] [ebp-48h]
  char v104; // [esp+79h] [ebp-43h]
  int v105; // [esp+7Ch] [ebp-40h]
  int v106; // [esp+80h] [ebp-3Ch]
  int v107; // [esp+84h] [ebp-38h]
  int v108; // [esp+88h] [ebp-34h]
  int v109; // [esp+8Ch] [ebp-30h] BYREF
  int v110; // [esp+90h] [ebp-2Ch]
  int v111; // [esp+94h] [ebp-28h]
  int v112; // [esp+98h] [ebp-24h]
  int v113[4]; // [esp+9Ch] [ebp-20h] BYREF
  int v114[4]; // [esp+ACh] [ebp-10h] BYREF

  v84 = a1; /*0x6b2f46*/
  LOWORD(v77) = a3 - 14; /*0x6b2f51*/
  HIWORD(v77) = HIWORD(a3) - 14; /*0x6b2f56*/
  v3 = v77; /*0x6b2f5b*/
  HIWORD(v77) = HIWORD(a3) + 14; /*0x6b2f62*/
  v89 = v3; /*0x6b2f73*/
  LOWORD(v77) = a3 + 14; /*0x6b2f87*/
  HIWORD(v83) = HIWORD(a3) + 14; /*0x6b2f93*/
  v4 = (__int16)(a3 - 14) < 0 ? 0 : v3;
  v5 = v3 < 0 ? 0 : HIWORD(v3);
  LOWORD(v83) = MEMORY[0x87F914] - MEMORY[0x87F90C]; /*0x6b2fad*/
  if ( MEMORY[0x87F914] - MEMORY[0x87F90C] >= (__int16)(a3 + 14) ) /*0x6b2fb2*/
    LOWORD(v83) = a3 + 14; /*0x6b2fb4*/
  v6 = HIWORD(v83); /*0x6b2fc4*/
  if ( MEMORY[0x87F918] - MEMORY[0x87F910] < SHIWORD(v83) ) /*0x6b2fcd*/
    v6 = MEMORY[0x87F918] - MEMORY[0x87F910]; /*0x6b2fcf*/
  v7 = 0; /*0x6b2fd2*/
  v90 = 0; /*0x6b2fdf*/
  v91 = 0; /*0x6b2fe3*/
  k = 0; /*0x6b2fe7*/
  v93 = 0; /*0x6b2feb*/
  v78 = 0x7FFF; /*0x6b2fef*/
  v79 = 0x7FFF; /*0x6b2ff4*/
  v80 = 0; /*0x6b2ff9*/
  v81 = 0; /*0x6b2ffe*/
  ObjectVector::Construct(&v101, 0, 0); /*0x6b3003*/
  v8 = v5; /*0x6b3008*/
  v9 = v6; /*0x6b300b*/
  v101 = &vt_DynamicVectorClass_ObjectClass; /*0x6b3010*/
  v106 = 10; /*0x6b3018*/
  v105 = 0; /*0x6b3023*/
  v100 = v5; /*0x6b3027*/
  v108 = v6; /*0x6b302b*/
  if ( v5 <= v6 ) /*0x6b3032*/
  {
    v107 = v4; /*0x6b303b*/
    v98 = (__int16)v83; /*0x6b3047*/
    v10 = MEMORY[0xB0B6EC]; /*0x6b304b*/
    while ( 1 ) /*0x6b3050*/
    {
      v11 = v107; /*0x6b3050*/
      v83 = v107; /*0x6b305d*/
      if ( v107 <= v98 ) /*0x6b3061*/
        break; /*0x6b3061*/
LABEL_107:
      v100 = ++v8; /*0x6b361a*/
      if ( v8 > v9 ) /*0x6b361e*/
        goto LABEL_110; /*0x6b361e*/
    }
    while ( 1 ) /*0x6b3080*/
    {
      HIWORD(v96) = dword_8759AC + v8; /*0x6b3080*/
      LOWORD(v96) = dword_8759A8 + v11; /*0x6b308f*/
      v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v96); /*0x6b3099*/
      if ( !CellClass::IsBuildable((int)v12) ) /*0x6b30a8*/
        goto LABEL_104; /*0x6b30a8*/
      v13 = v100 * dword_8759A4 + v83; /*0x6b30c5*/
      v10 = MEMORY[0xB0B6EC]; /*0x6b30c8*/
      v14 = dword_8759A4 * (v100 + 1) + v83; /*0x6b30cd*/
      if ( *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v13 + 5) /*0x6b30e5*/
        || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v13 + 13)
        || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v14 + 13)
        || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v14 + 5) )
      {
        v15 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v13); /*0x6b30f0*/
        v110 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v13 + 2); /*0x6b30f7*/
        v16 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v14 + 2); /*0x6b30fe*/
        v17 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v14); /*0x6b3102*/
        v18 = 1000; /*0x6b3105*/
        v109 = v15; /*0x6b310a*/
        v112 = v17; /*0x6b3111*/
        v111 = v16; /*0x6b3118*/
        v82 = 1000; /*0x6b311f*/
        v19 = 0; /*0x6b3123*/
        v20 = &v109; /*0x6b3125*/
        v21 = 4; /*0x6b312c*/
        do /*0x6b3143*/
        {
          if ( *v20 < v18 ) /*0x6b3135*/
            v18 = *v20; /*0x6b3137*/
          if ( *v20 > v19 ) /*0x6b313b*/
            v19 = *v20; /*0x6b313d*/
          ++v20; /*0x6b313f*/
          --v21; /*0x6b3142*/
        }
        while ( v21 ); /*0x6b3143*/
        v82 = v18; /*0x6b3147*/
        if ( v19 - v18 <= 15 ) /*0x6b314e*/
          break; /*0x6b314e*/
      }
LABEL_105:
      if ( ++v83 > v98 ) /*0x6b3602*/
      {
        v8 = v100; /*0x6b3608*/
        v7 = v91; /*0x6b360c*/
        v9 = v108; /*0x6b3610*/
        goto LABEL_107; /*0x6b3610*/
      }
      v11 = v83; /*0x6b3069*/
      LOWORD(v8) = v100; /*0x6b306d*/
    }
    v105 = 0; /*0x6b315c*/
    if ( Block && v104 ) /*0x6b3168*/
    {
      __3_YAXPAX_Z(Block); /*0x6b316b*/
      Block = 0; /*0x6b3173*/
    }
    v22 = 0; /*0x6b3177*/
    v104 = 0; /*0x6b3179*/
    v103 = 0; /*0x6b317e*/
    for ( i = v12[57]; i; i = *(_DWORD *)(i + 48) ) /*0x6b318a*/
    {
      if ( v105 < v22 ) /*0x6b3190*/
        goto LABEL_31; /*0x6b3190*/
      if ( !v104 && v22 || v106 <= 0 ) /*0x6b31a7*/
        continue; /*0x6b31a7*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v101[2])(&v101, v106 + v22, 0) ) /*0x6b31b5*/
      {
LABEL_31:
        v24 = v105++; /*0x6b31c0*/
        *((_DWORD *)Block + v24) = i; /*0x6b31cb*/
      }
      v22 = v103; /*0x6b31ce*/
    }
    for ( j = 0; j < v105; ++j ) /*0x6b31e1*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)Block + j) + 292))(*((_DWORD *)Block + j), 0); /*0x6b31ee*/
    ScreenRect = CellClass::GetScreenRect((int)v12, v114); /*0x6b3205*/
    v85 = *ScreenRect; /*0x6b320c*/
    v86 = ScreenRect[1]; /*0x6b3213*/
    v87 = ScreenRect[2]; /*0x6b321e*/
    v88 = ScreenRect[3]; /*0x6b3225*/
    v27 = *((char *)v12 + 283); /*0x6b3232*/
    v28 = ((int)((unsigned __int64)(2290649225LL * v82) >> 32) >> 3 < 0) /*0x6b3241*/
        + ((int)((unsigned __int64)(2290649225LL * v82) >> 32) >> 3);
    *((_BYTE *)v12 + 283) = v28; /*0x6b3248*/
    Object_Create(v28); /*0x6b3252*/
    if ( v27 != *((char *)v12 + 283) ) /*0x6b3260*/
      CellClass::ClearCellContents(v12); /*0x6b3264*/
    House::AnnounceUpgrade((int)v12, -1); /*0x6b326d*/
    v29 = v12[18]; /*0x6b3272*/
    if ( v29 != -1 ) /*0x6b3278*/
    {
      v89 = v12[9]; /*0x6b3287*/
      v99 = 0; /*0x6b328b*/
      v30 = *((_DWORD *)MEMORY[0xA8EC1C] + v29); /*0x6b3293*/
      v31 = *(_DWORD *)(v30 + 664); /*0x6b329e*/
      v32 = *((unsigned __int8 *)v12 + 287) / v31; /*0x6b32af*/
      LOWORD(v89) = v89 - *((unsigned __int8 *)v12 + 287) % v31; /*0x6b32b1*/
      HIWORD(v89) -= v32; /*0x6b32b6*/
      if ( *(int *)(v30 + 668) > 0 ) /*0x6b32c3*/
      {
        v33 = v89; /*0x6b32c5*/
        do /*0x6b3320*/
        {
          v34 = 0; /*0x6b32c9*/
          if ( v31 > 0 ) /*0x6b32cd*/
          {
            HIWORD(v94) = v99 + HIWORD(v89); /*0x6b32d9*/
            do /*0x6b330d*/
            {
              LOWORD(v94) = v34 + v33; /*0x6b32e5*/
              v95 = v94; /*0x6b32ee*/
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v95) + 18) = -1; /*0x6b32fd*/
              v31 = *(_DWORD *)(v30 + 664); /*0x6b3304*/
              ++v34; /*0x6b330a*/
            }
            while ( v34 < v31 ); /*0x6b330d*/
          }
          v35 = *(_DWORD *)(v30 + 668); /*0x6b3313*/
          ++v99; /*0x6b331c*/
        }
        while ( v99 < v35 ); /*0x6b3320*/
      }
    }
    v97 = v12[9]; /*0x6b332a*/
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)&v97); /*0x6b3333*/
    if ( (__int16)v97 < v78 ) /*0x6b3341*/
      v78 = v97; /*0x6b3343*/
    if ( (__int16)v97 > v80 ) /*0x6b334d*/
      v80 = v97; /*0x6b334f*/
    if ( SHIWORD(v97) < v79 ) /*0x6b335e*/
      v79 = HIWORD(v97); /*0x6b3360*/
    if ( SHIWORD(v97) > v81 ) /*0x6b336a*/
      v81 = HIWORD(v97); /*0x6b336c*/
    v36 = v82; /*0x6b3371*/
    v37 = &v109; /*0x6b3375*/
    v38 = 4; /*0x6b337c*/
    do /*0x6b338c*/
    {
      v39 = *v37++; /*0x6b3381*/
      --v38; /*0x6b3388*/
      *(v37 - 1) = v39 - v36; /*0x6b3389*/
    }
    while ( v38 ); /*0x6b338c*/
    v40 = 0; /*0x6b339c*/
    v41 = &MEMORY[0x83FF18]; /*0x6b339e*/
    while ( 1 ) /*0x6b33a3*/
    {
      v42 = (_DWORD *)*v41; /*0x6b33a3*/
      if ( *(_DWORD *)*v41 == v109 && v42[1] == v110 && v42[2] == v111 && v42[3] == v112 ) /*0x6b33c4*/
        break; /*0x6b33c4*/
      ++v41; /*0x6b33c6*/
      ++v40; /*0x6b33c9*/
      if ( (int)v41 >= (int)&MEMORY[0x83FF64] ) /*0x6b33d0*/
      {
        v43 = v85; /*0x6b33d2*/
        v44 = k; /*0x6b33d6*/
        v45 = v86; /*0x6b33da*/
        v46 = v88; /*0x6b33de*/
        goto LABEL_88; /*0x6b33e2*/
      }
    }
    *((_BYTE *)v12 + 284) = v40; /*0x6b33e9*/
    if ( v40 ) /*0x6b33ef*/
      v47 = v40 + g_CellTileLookup - 1; /*0x6b33fe*/
    else
      v47 = unk_AA10B0; /*0x6b33f1*/
    v12[14] = v47; /*0x6b3402*/
    House::AnnounceUpgrade((int)v12, -1); /*0x6b3409*/
    v77 = v12[9]; /*0x6b341b*/
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)&v77); /*0x6b341f*/
    v48 = CellClass::GetScreenRect((int)v12, v113); /*0x6b342e*/
    v49 = v87; /*0x6b3433*/
    if ( v87 <= 0 || v88 <= 0 ) /*0x6b3445*/
    {
      v55 = *v48; /*0x6b34c5*/
      v52 = v48[1]; /*0x6b34c7*/
      v49 = v48[2]; /*0x6b34ca*/
      v56 = v48[3]; /*0x6b34cd*/
    }
    else
    {
      v82 = v48[2]; /*0x6b344c*/
      if ( v82 <= 0 || (v99 = v48[3], v99 <= 0) ) /*0x6b345b*/
      {
        v55 = v85; /*0x6b34b9*/
        v52 = v86; /*0x6b34bd*/
        v56 = v88; /*0x6b34c1*/
      }
      else
      {
        v50 = v85; /*0x6b345d*/
        v51 = *v48; /*0x6b3461*/
        v52 = v86; /*0x6b3463*/
        v53 = v88; /*0x6b3467*/
        if ( v85 > *v48 ) /*0x6b346d*/
        {
          v49 = v85 + v87 - v51; /*0x6b3471*/
          v50 = *v48; /*0x6b3473*/
        }
        v54 = v48[1]; /*0x6b3475*/
        v95 = v54; /*0x6b347a*/
        if ( v86 > v54 ) /*0x6b347e*/
        {
          v53 = v86 - v54 + v88; /*0x6b3482*/
          v52 = v54; /*0x6b3484*/
        }
        if ( v49 + v50 < v51 + v82 ) /*0x6b3491*/
          v49 = v51 - v50 + v82 + 1; /*0x6b3499*/
        if ( v52 + v53 < v95 + v99 ) /*0x6b34ac*/
          v53 = v95 + v99 - v52 + 1; /*0x6b34b1*/
        v55 = v50; /*0x6b34b3*/
        v56 = v53; /*0x6b34b5*/
      }
    }
    v44 = k; /*0x6b34d0*/
    v87 = v49; /*0x6b34d4*/
    v46 = v56; /*0x6b34d8*/
    v43 = v55; /*0x6b34e3*/
    v45 = v52; /*0x6b34e5*/
    v85 = v55; /*0x6b34e7*/
    v86 = v52; /*0x6b34eb*/
    v88 = v56; /*0x6b34ef*/
    if ( (__int16)v77 < v78 ) /*0x6b34f3*/
      v78 = v77; /*0x6b34f5*/
    if ( (__int16)v77 > v80 ) /*0x6b34ff*/
      v80 = v77; /*0x6b3501*/
    if ( SHIWORD(v77) < v79 ) /*0x6b3510*/
      v79 = HIWORD(v77); /*0x6b3512*/
    if ( SHIWORD(v77) > v81 ) /*0x6b351c*/
      v81 = HIWORD(v77); /*0x6b351e*/
LABEL_88:
    if ( v44 <= 0 || v93 <= 0 ) /*0x6b352d*/
    {
      v59 = v87; /*0x6b35a3*/
      v57 = v43; /*0x6b35a7*/
      v58 = v45; /*0x6b35a9*/
    }
    else if ( v87 <= 0 || v46 <= 0 ) /*0x6b3539*/
    {
      v57 = v90; /*0x6b3593*/
      v58 = v91; /*0x6b3597*/
      v46 = v93; /*0x6b359b*/
      v59 = v44; /*0x6b359f*/
    }
    else
    {
      v57 = v90; /*0x6b353b*/
      v58 = v91; /*0x6b353f*/
      v46 = v93; /*0x6b3543*/
      v59 = v44; /*0x6b3549*/
      if ( v90 > v43 ) /*0x6b354b*/
      {
        v57 = v43; /*0x6b3551*/
        v59 = v90 + v44 - v43; /*0x6b3553*/
      }
      if ( v91 > v45 ) /*0x6b3557*/
      {
        v46 = v91 - v45 + v93; /*0x6b355b*/
        v58 = v45; /*0x6b355d*/
      }
      if ( v59 + v57 < v43 + v87 ) /*0x6b356a*/
        v59 = v87 - v57 + v43 + 1; /*0x6b3572*/
      if ( v46 + v58 < v86 + v88 ) /*0x6b3585*/
        v46 = v86 - v58 + v88 + 1; /*0x6b358d*/
    }
    v90 = v57; /*0x6b35ab*/
    v93 = v46; /*0x6b35b3*/
    v60 = 0; /*0x6b35b7*/
    v91 = v58; /*0x6b35bb*/
    for ( k = v59; v60 < v105; ++v60 ) /*0x6b35c3*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)Block + v60) + 292))(*((_DWORD *)Block + v60), 1); /*0x6b35d0*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)Block + v60) + 460))(*((_DWORD *)Block + v60), 0); /*0x6b35e1*/
    }
LABEL_104:
    v10 = MEMORY[0xB0B6EC]; /*0x6b35ee*/
    goto LABEL_105; /*0x6b35ee*/
  }
  v10 = MEMORY[0xB0B6EC]; /*0x6b3626*/
LABEL_110:
  __3_YAXPAX_Z(v10); /*0x6b362b*/
  MEMORY[0xB0B6EC] = 0; /*0x6b3649*/
  Cell::CreateCrater(v90, v7 - MEMORY[0x886FA4], k, v93, 0); /*0x6b366a*/
  v61 = v79 - 1; /*0x6b3679*/
  v62 = v81 + 1; /*0x6b367a*/
  v82 = v61; /*0x6b367d*/
  v97 = v62; /*0x6b3681*/
  if ( v61 <= v62 ) /*0x6b3685*/
  {
    v108 = v78 - 1; /*0x6b3691*/
    v96 = v80 + 1; /*0x6b369e*/
    do /*0x6b3811*/
    {
      v77 = v108; /*0x6b36af*/
      if ( v108 <= v96 ) /*0x6b36b3*/
      {
        do /*0x6b37fc*/
        {
          LOWORD(v98) = v77; /*0x6b36c7*/
          HIWORD(v98) = v82; /*0x6b36d2*/
          v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v98); /*0x6b36dc*/
          v64 = CellClass::GetScreenRect((int)v63, v113); /*0x6b36e8*/
          v65 = *v64; /*0x6b36ed*/
          v110 = v64[1]; /*0x6b36f2*/
          v66 = v64[2]; /*0x6b36fb*/
          v67 = v64[3]; /*0x6b36fe*/
          if ( CellClass::DetermineTileType((int)v63) ) /*0x6b3701*/
          {
            v68 = CellClass::GetScreenRect((int)v63, v114); /*0x6b3718*/
            if ( v66 <= 0 || v67 <= 0 ) /*0x6b3727*/
            {
              v71 = *v68; /*0x6b37ad*/
              v70 = v68[1]; /*0x6b37af*/
              v66 = v68[2]; /*0x6b37b2*/
              v73 = v68[3]; /*0x6b37b5*/
            }
            else
            {
              v94 = v68[2]; /*0x6b3732*/
              if ( v94 <= 0 || (v95 = v68[3], v95 <= 0) ) /*0x6b3741*/
              {
                v70 = v110; /*0x6b37a0*/
                v71 = v65; /*0x6b37a7*/
                v73 = v67; /*0x6b37a9*/
              }
              else
              {
                v69 = *v68; /*0x6b3743*/
                v70 = v110; /*0x6b3745*/
                v71 = v65; /*0x6b374e*/
                if ( v65 > *v68 ) /*0x6b3750*/
                {
                  v71 = *v68; /*0x6b3754*/
                  v66 = v65 + v66 - v69; /*0x6b3756*/
                }
                v72 = v68[1]; /*0x6b3758*/
                v107 = v72; /*0x6b375d*/
                if ( v110 > v72 ) /*0x6b3764*/
                {
                  v67 += v110 - v72; /*0x6b3768*/
                  v70 = v72; /*0x6b376a*/
                }
                if ( v66 + v71 < v69 + v94 ) /*0x6b3777*/
                  v66 = v69 - v71 + v94 + 1; /*0x6b377f*/
                if ( v67 + v70 < v107 + v95 ) /*0x6b3795*/
                  v67 = v107 + v95 - v70 + 1; /*0x6b379a*/
                v73 = v67; /*0x6b379c*/
              }
            }
            v74 = v71 - MEMORY[0x886FA0]; /*0x6b37c4*/
            v75 = v70 - MEMORY[0x886FA4]; /*0x6b37c6*/
            if ( v66 > 0 && v73 > 0 ) /*0x6b37ce*/
              Cell::CreateCrater(v74, v75, v66, v73, 0); /*0x6b37e8*/
          }
          ++v77; /*0x6b37f8*/
        }
        while ( v77 <= v96 ); /*0x6b37fc*/
        v62 = v97; /*0x6b3802*/
        v61 = v82; /*0x6b3806*/
      }
      v82 = ++v61; /*0x6b380d*/
    }
    while ( v61 <= v62 ); /*0x6b3811*/
  }
  v101 = &vt_VectorClass_ObjectClass; /*0x6b381b*/
  if ( Block && v104 ) /*0x6b382d*/
    __3_YAXPAX_Z(Block); /*0x6b3830*/
  return 1; /*0x6b3838*/
}


// ==== 0x006B3850  ObjectClass::ProcessSlaveManagerTerrain  this=ObjectClass  sig=csp ====
char ProcessSlaveManagerTerrain()
{
  int BitLCW; // eax
  int v1; // ebx
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int *v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int *v14; // eax
  int v15; // ebp
  int v16; // edx
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  int v19; // ecx
  int i; // [esp+0h] [ebp-18h]
  int v22; // [esp+4h] [ebp-14h] BYREF
  int v23; // [esp+8h] [ebp-10h] BYREF
  int v24; // [esp+Ch] [ebp-Ch]
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x6b3858*/
  BitLCW = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6b3862*/
  for ( i = BitLCW; BitLCW; i = BitLCW ) /*0x6b386d*/
  {
    v1 = *(_DWORD *)(BitLCW + 36); /*0x6b3877*/
    v22 = v1; /*0x6b3886*/
    v2 = (__int16)v1 - dword_8759A8; /*0x6b3892*/
    v3 = SHIWORD(v1) - dword_8759AC; /*0x6b389a*/
    v4 = v3 * dword_8759A4 + v2; /*0x6b38a5*/
    v5 = dword_8759A4 * (v3 + 1) + v2; /*0x6b38ad*/
    if ( *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 5) /*0x6b38c7*/
      || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 13)
      || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v5 + 13)
      || *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v5 + 5) )
    {
      v6 = 4; /*0x6b38d6*/
      v23 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4); /*0x6b38db*/
      v24 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4 + 2); /*0x6b38e3*/
      v7 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v5); /*0x6b38eb*/
      v25 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v5 + 2); /*0x6b38ee*/
      v26 = v7; /*0x6b38f2*/
      v8 = 1000; /*0x6b38f6*/
      v9 = 0; /*0x6b38fb*/
      v10 = &v23; /*0x6b38fd*/
      do /*0x6b3913*/
      {
        if ( *v10 < v8 ) /*0x6b3905*/
          v8 = *v10; /*0x6b3907*/
        if ( *v10 > v9 ) /*0x6b390b*/
          v9 = *v10; /*0x6b390d*/
        ++v10; /*0x6b390f*/
        --v6; /*0x6b3912*/
      }
      while ( v6 ); /*0x6b3913*/
      if ( v9 - v8 <= 15 ) /*0x6b391a*/
      {
        v22 = v1; /*0x6b3928*/
        v11 = SHIWORD(v1) + (__int16)v1; /*0x6b3934*/
        if ( v11 > g_MapCellHeight_Value /*0x6b396f*/
          && (__int16)v1 - SHIWORD(v1) < g_MapCellHeight_Value
          && SHIWORD(v1) - (__int16)v1 < g_MapCellHeight_Value
          && v11 <= g_MapCellCount
          && *(_DWORD *)(i + 68) == -1
          && !*(_DWORD *)(i + 228) )
        {
          v22 = v1; /*0x6b3981*/
          if ( !Tactical::GetCellData((__int16 *)&v22)[69] ) /*0x6b398a*/
          {
            v12 = *(_DWORD *)(i + 56); /*0x6b3995*/
            if ( v12 >= MEMORY[0xA8ED38] || v12 == 0xFFFF || *(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v12) + 736) ) /*0x6b39b2*/
            {
              v13 = 4; /*0x6b39c5*/
              v14 = &v23; /*0x6b39d8*/
              *(_BYTE *)(i + 283) = v8 / 15; /*0x6b39dc*/
              do /*0x6b39ed*/
              {
                v15 = *v14++; /*0x6b39e2*/
                --v13; /*0x6b39e9*/
                *(v14 - 1) = v15 - v8; /*0x6b39ea*/
              }
              while ( v13 ); /*0x6b39ed*/
              v16 = 0; /*0x6b39f7*/
              v17 = &MEMORY[0x83FF18]; /*0x6b39f9*/
              while ( 1 ) /*0x6b39fe*/
              {
                v18 = (_DWORD *)*v17; /*0x6b39fe*/
                if ( *(_DWORD *)*v17 == v23 && v18[1] == v24 && v18[2] == v25 && v18[3] == v26 ) /*0x6b3a19*/
                  break; /*0x6b3a19*/
                ++v17; /*0x6b3a1b*/
                ++v16; /*0x6b3a1e*/
                if ( (int)v17 >= (int)&MEMORY[0x83FF64] ) /*0x6b3a25*/
                  goto LABEL_36; /*0x6b3a25*/
              }
              *(_BYTE *)(i + 284) = v16; /*0x6b3a2b*/
              if ( v16 ) /*0x6b3a31*/
                v19 = g_CellTileLookup + v16 - 1; /*0x6b3a40*/
              else
                v19 = unk_AA10B0; /*0x6b3a33*/
              *(_DWORD *)(i + 56) = v19; /*0x6b3a44*/
            }
          }
        }
      }
    }
LABEL_36:
    BitLCW = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x6b3a47*/
  }
  __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b3a68*/
  MEMORY[0xB0B6EC] = 0; /*0x6b3a6d*/
  return 1; /*0x6b3a7c*/
}


// ==== 0x006B3A80  FlowTerrainCompute  this=-  sig=csp ====
char __fastcall Terrain_FlowCompute(int a1, char a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // ecx
  int v8; // edi
  int v9; // ebp
  char *v10; // esi
  int v11; // ebx
  int v12; // eax
  int *v13; // edx
  int v14; // eax
  int v15; // eax
  int *v16; // edx
  char v18; // [esp+13h] [ebp-19h]
  int v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+18h] [ebp-14h]
  int v22; // [esp+20h] [ebp-Ch]

  v4 = dword_8759A4; /*0x6b3a83*/
  v5 = -1; /*0x6b3aa3*/
  v6 = -1; /*0x6b3aa6*/
  v7 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * a3 + 2 * a4 * dword_8759A4); /*0x6b3aa9*/
  v18 = a2; /*0x6b3aac*/
  v19 = v7; /*0x6b3ab0*/
  v20 = -1; /*0x6b3ab4*/
  v22 = -1; /*0x6b3ab8*/
  while ( 1 ) /*0x6b3ae5*/
  {
    if ( !v6 && !v5 ) /*0x6b3aeb*/
      goto LABEL_39; /*0x6b3aeb*/
    v8 = a3 + v6; /*0x6b3af5*/
    v9 = a4 + v5; /*0x6b3afb*/
    if ( v8 >= 0 && v9 >= 0 && v8 < v4 && v9 < dword_8759A0 ) /*0x6b3b23*/
      break; /*0x6b3b23*/
    if ( !a2 ) /*0x6b3c8d*/
      return 0; /*0x6b3c8d*/
LABEL_39:
    v6 = ++v22; /*0x6b3c8f*/
    if ( v22 < 2 ) /*0x6b3c9b*/
    {
      a2 = v18; /*0x6b3ad4*/
      v7 = v19; /*0x6b3ad8*/
      v5 = v20; /*0x6b3adc*/
      v4 = dword_8759A4; /*0x6b3ae0*/
    }
    else
    {
      v5 = ++v20; /*0x6b3ca5*/
      if ( v20 >= 2 ) /*0x6b3cad*/
        return 1; /*0x6b3cbc*/
      a2 = v18; /*0x6b3abe*/
      v7 = v19; /*0x6b3ac2*/
      v4 = dword_8759A4; /*0x6b3ac6*/
      v6 = -1; /*0x6b3acb*/
      v22 = -1; /*0x6b3ace*/
    }
  }
  v10 = (char *)MEMORY[0xB0B6EC] + 8 * v8 + 8 * v9 * v4; /*0x6b3b34*/
  if ( v10[4] && (!a2 || !v10[6]) ) /*0x6b3b42*/
  {
    if ( (int)abs32(*(_DWORD *)v10 - v7) > 15 ) /*0x6b3b55*/
      return 0; /*0x6b3b55*/
    goto LABEL_39; /*0x6b3b55*/
  }
  v11 = *(_DWORD *)v10; /*0x6b3b60*/
  if ( (int)abs32(*(_DWORD *)v10 - v7) <= 15 ) /*0x6b3b6e*/
    goto LABEL_39; /*0x6b3b6e*/
  if ( a1 == 1 ) /*0x6b3b79*/
  {
    if ( v11 < v7 ) /*0x6b3b7d*/
    {
      if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b3bba*/
        || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
        && MEMORY[0xB0B664] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
             &MEMORY[0xB0B650],
             MEMORY[0xB0B658] + MEMORY[0xB0B664],
             0) )
      {
        v12 = MEMORY[0xB0B660]++; /*0x6b3bc7*/
        v13 = (int *)((char *)MEMORY[0xB0B654] + 12 * v12); /*0x6b3bd9*/
        *v13 = v8; /*0x6b3bdc*/
        v13[1] = v9; /*0x6b3bdf*/
        v13[2] = v11; /*0x6b3be2*/
      }
      v14 = v19 - 15; /*0x6b3be9*/
      goto LABEL_33; /*0x6b3bec*/
    }
  }
  else if ( v11 > v7 ) /*0x6b3bf0*/
  {
    if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b3c29*/
      || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
      && MEMORY[0xB0B664] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
           &MEMORY[0xB0B650],
           MEMORY[0xB0B664] + MEMORY[0xB0B658],
           0) )
    {
      v15 = MEMORY[0xB0B660]++; /*0x6b3c36*/
      v16 = (int *)((char *)MEMORY[0xB0B654] + 12 * v15); /*0x6b3c48*/
      *v16 = v8; /*0x6b3c4b*/
      v16[1] = v9; /*0x6b3c4e*/
      v16[2] = v11; /*0x6b3c51*/
    }
    v14 = v19 + 15; /*0x6b3c58*/
LABEL_33:
    *(_DWORD *)v10 = v14; /*0x6b3c5b*/
    v10[5] = 1; /*0x6b3c5d*/
  }
  if ( v10[4] || (unsigned __int8)FlowTerrainCompute(v8, v9) || v18 ) /*0x6b3c87*/
    goto LABEL_39; /*0x6b3c87*/
  return 0; /*0x6b3cb3*/
}


// ==== 0x006B3CD0  sub_6B3CD0  this=-  sig=ida-proto ====
char __fastcall sub_6B3CD0(int a1, char a2, int a3, unsigned int a4)
{
  int v5; // esi
  int v7; // ebp
  int v8; // ecx
  int v9; // edi
  int v10; // edx
  int v11; // eax
  int v12; // esi
  char *v13; // eax
  bool v14; // sf
  int v15; // ecx
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  int v20; // [esp+24h] [ebp+8h]

  MEMORY[0xB0B660] = 0; /*0x6b3ce6*/
  if ( MEMORY[0xB0B654] && MEMORY[0xB0B65D] ) /*0x6b3cf6*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B654]); /*0x6b3cf9*/
    MEMORY[0xB0B654] = 0; /*0x6b3d01*/
  }
  MEMORY[0xB0B658] = 0; /*0x6b3d0b*/
  v5 = a3; /*0x6b3d11*/
  MEMORY[0xB0B65D] = 0; /*0x6b3d15*/
  InitializeBuildabilityGrid(a3); /*0x6b3d1d*/
  v20 = 1; /*0x6b3d32*/
  v7 = a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4; /*0x6b3d4d*/
  v8 = (__int16)a3 - dword_8759A8; /*0x6b3d59*/
  v18 = v8; /*0x6b3d5b*/
  v9 = SHIWORD(a3) - dword_8759AC; /*0x6b3d5f*/
  v10 = v9 + 2; /*0x6b3d61*/
  v19 = v9 + 2; /*0x6b3d66*/
  if ( !__OFSUB__(v9, v9 + 2) ) /*0x6b3d6a*/
  {
    v11 = v8 + 2; /*0x6b3d70*/
    do /*0x6b3df7*/
    {
      v12 = v8; /*0x6b3d75*/
      if ( v8 < v11 ) /*0x6b3d77*/
      {
        while ( 1 ) /*0x6b3d79*/
        {
          if ( (v7 & v20) != 0 ) /*0x6b3d7d*/
          {
            v13 = (char *)MEMORY[0xB0B6EC] + 8 * v12 + 8 * v9 * dword_8759A4; /*0x6b3d90*/
            if ( v13[4] && !a2 ) /*0x6b3da1*/
              goto LABEL_20; /*0x6b3da1*/
            v14 = 15 * a1 + *(_DWORD *)v13 < 0; /*0x6b3dab*/
            v15 = 15 * a1 + *(_DWORD *)v13; /*0x6b3dab*/
            *(_DWORD *)v13 = v15; /*0x6b3dad*/
            if ( v14 || v15 > 180 ) /*0x6b3db7*/
              *(_DWORD *)v13 = v15 - 15 * a1; /*0x6b3dbb*/
            v13[5] = 1; /*0x6b3dc5*/
            if ( !FlowTerrainCompute(a1, a2, v12, v9) && !a2 ) /*0x6b3dd8*/
            {
LABEL_20:
              __3_YAXPAX_Z(MEMORY[0xB0B6EC]); /*0x6b3dff*/
              MEMORY[0xB0B6EC] = 0; /*0x6b3e07*/
              return 0; /*0x6b3e1a*/
            }
            v8 = v18; /*0x6b3dda*/
          }
          v11 = v8 + 2; /*0x6b3de2*/
          ++v12; /*0x6b3de7*/
          v20 *= 2; /*0x6b3de8*/
          if ( v12 >= v8 + 2 ) /*0x6b3dee*/
          {
            v10 = v19; /*0x6b3df0*/
            break; /*0x6b3df0*/
          }
        }
      }
      ++v9; /*0x6b3df4*/
    }
    while ( v9 < v10 ); /*0x6b3df7*/
    v5 = a3; /*0x6b3e41*/
  }
  return ProcessBuildingClassConstruction(a2, v10, v5); /*0x6b3e13*/
}


// ==== 0x006B3E60  ComputeTerrainFlowField  this=-  sig=csp ====
char __fastcall ComputeTerrainFlowField(int a1, char a2, int a3, unsigned int a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // esi
  int v9; // eax
  int v10; // edi
  char *v11; // esi
  int v12; // ecx
  bool v13; // sf
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int *v17; // edx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v24; // [esp+14h] [ebp-14h]
  int v25; // [esp+18h] [ebp-10h]
  int v26; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+24h] [ebp-4h]
  int v29; // [esp+2Ch] [ebp+4h]
  int v30; // [esp+30h] [ebp+8h]

  v4 = a1; /*0x6b3e6d*/
  MEMORY[0xB0B660] = 0; /*0x6b3e7a*/
  if ( MEMORY[0xB0B654] && MEMORY[0xB0B65D] ) /*0x6b3e8a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B654]); /*0x6b3e8d*/
    MEMORY[0xB0B654] = 0; /*0x6b3e95*/
  }
  v5 = a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4; /*0x6b3ebd*/
  v6 = (__int16)a3 - dword_8759A8; /*0x6b3ec4*/
  MEMORY[0xB0B658] = 0; /*0x6b3ec6*/
  MEMORY[0xB0B65D] = 0; /*0x6b3ed3*/
  v7 = SHIWORD(a3) - dword_8759AC; /*0x6b3eda*/
  v26 = v5; /*0x6b3edc*/
  v8 = v7 + 2; /*0x6b3ee0*/
  v25 = v6; /*0x6b3ee3*/
  v24 = 1; /*0x6b3ee9*/
  v30 = v7; /*0x6b3ef1*/
  v28 = v7 + 2; /*0x6b3ef5*/
  if ( __OFSUB__(v7, v7 + 2) ) /*0x6b3ef9*/
    return 1; /*0x6b4036*/
  v9 = v6 + 2; /*0x6b3eff*/
  while ( 1 ) /*0x6b3f02*/
  {
    v10 = v6; /*0x6b3f02*/
    v29 = v6; /*0x6b3f06*/
    if ( v6 < v9 ) /*0x6b3f0a*/
      break; /*0x6b3f0a*/
LABEL_27:
    v30 = ++v7; /*0x6b4023*/
    if ( v7 >= v8 ) /*0x6b4027*/
      return 1; /*0x6b4027*/
  }
  while ( 1 ) /*0x6b3f10*/
  {
    if ( (v5 & v24) == 0 ) /*0x6b3f14*/
      goto LABEL_25; /*0x6b3f14*/
    v11 = (char *)MEMORY[0xB0B6EC] + 8 * v10 + 8 * v7 * dword_8759A4; /*0x6b3f2a*/
    if ( v11[4] ) /*0x6b3f2d*/
      break; /*0x6b3f2d*/
    v12 = 15 * v4; /*0x6b3f3b*/
    v13 = 15 * v4 + *(_DWORD *)v11 < 0; /*0x6b3f40*/
    v14 = 15 * v4 + *(_DWORD *)v11; /*0x6b3f40*/
    *(_DWORD *)v11 = v14; /*0x6b3f42*/
    if ( v13 || v14 > 180 ) /*0x6b3f4f*/
    {
      *(_DWORD *)v11 = v14 - v12; /*0x6b3fe8*/
    }
    else
    {
      v15 = v14 - v12; /*0x6b3f5d*/
      if ( MEMORY[0xB0B660] < MEMORY[0xB0B658] /*0x6b3f90*/
        || (MEMORY[0xB0B65D] || !MEMORY[0xB0B658])
        && MEMORY[0xB0B664] > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B650] + 8))(
             &MEMORY[0xB0B650],
             MEMORY[0xB0B658] + MEMORY[0xB0B664],
             0) )
      {
        v16 = MEMORY[0xB0B660]++; /*0x6b3f9d*/
        v17 = (int *)((char *)MEMORY[0xB0B654] + 12 * v16); /*0x6b3faf*/
        *v17 = v10; /*0x6b3fb2*/
        v17[1] = v7; /*0x6b3fb5*/
        v17[2] = v15; /*0x6b3fb8*/
      }
      v7 = v30; /*0x6b3fbb*/
      v10 = v29; /*0x6b3fbf*/
    }
    v4 = a1; /*0x6b3fc3*/
    v11[5] = 1; /*0x6b3fcf*/
    if ( !FlowTerrainCompute(a1, a2, v10, v7) && !a2 ) /*0x6b3fe2*/
    {
      if ( MEMORY[0xB0B660] - 1 >= 0 ) /*0x6b4045*/
      {
        v19 = MEMORY[0xB0B660]; /*0x6b404a*/
        v20 = 12 * (MEMORY[0xB0B660] - 1); /*0x6b404d*/
        do /*0x6b4078*/
        {
          v20 -= 12; /*0x6b4056*/
          --v19; /*0x6b4074*/
          *((_DWORD *)MEMORY[0xB0B6EC] /*0x6b4075*/
          + 2 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v20 + 12)
          + 2 * dword_8759A4 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v20 + 16)) = *(_DWORD *)((char *)MEMORY[0xB0B654]
                                                                                             + v20
                                                                                             + 20);
        }
        while ( v19 ); /*0x6b4078*/
      }
      goto LABEL_36; /*0x6b4078*/
    }
    v6 = v25; /*0x6b3ffa*/
    v5 = v26; /*0x6b3ffe*/
LABEL_25:
    v9 = v6 + 2; /*0x6b4002*/
    ++v10; /*0x6b400b*/
    v24 *= 2; /*0x6b400c*/
    v29 = v10; /*0x6b4012*/
    if ( v10 >= v6 + 2 ) /*0x6b4016*/
    {
      v8 = v28; /*0x6b401c*/
      goto LABEL_27; /*0x6b401c*/
    }
  }
  if ( a2 ) /*0x6b3ff2*/
    goto LABEL_25; /*0x6b3ff2*/
  if ( MEMORY[0xB0B660] - 1 >= 0 ) /*0x6b4089*/
  {
    v21 = 12 * (MEMORY[0xB0B660] - 1); /*0x6b408e*/
    v22 = MEMORY[0xB0B660]; /*0x6b4091*/
    do /*0x6b40ba*/
    {
      v21 -= 12; /*0x6b4098*/
      --v22; /*0x6b40b6*/
      *((_DWORD *)MEMORY[0xB0B6EC] /*0x6b40b7*/
      + 2 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v21 + 12)
      + 2 * dword_8759A4 * *(_DWORD *)((char *)MEMORY[0xB0B654] + v21 + 16)) = *(_DWORD *)((char *)MEMORY[0xB0B654]
                                                                                         + v21
                                                                                         + 20);
    }
    while ( v22 ); /*0x6b40ba*/
  }
LABEL_36:
  MEMORY[0xB0B660] = 0; /*0x6b40bc*/
  if ( MEMORY[0xB0B654] ) /*0x6b40c9*/
  {
    if ( MEMORY[0xB0B65D] ) /*0x6b40d3*/
    {
      __3_YAXPAX_Z(MEMORY[0xB0B654]); /*0x6b40d6*/
      MEMORY[0xB0B654] = 0; /*0x6b40de*/
    }
  }
  MEMORY[0xB0B658] = 0; /*0x6b40e4*/
  MEMORY[0xB0B65D] = 0; /*0x6b40ed*/
  return 0; /*0x6b402d*/
}


// ==== 0x006B4100  ObjectClass::Map_Get_6B4100  this=IUnknown  sig=csp ====
int __thiscall sub_6B4100(int *this)
{
  int v1; // edi
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // edx
  int v9; // esi
  int *v10; // eax
  int v11; // edx
  int v12; // ebx
  int *v13; // ebx
  int v14; // eax
  int v17; // [esp+14h] [ebp-14h] BYREF
  _DWORD v18[4]; // [esp+18h] [ebp-10h] BYREF

  v1 = this->q024; /*0x6b4113*/
  v17 = v1; /*0x6b4120*/
  v2 = SHIWORD(v1) - dword_8759AC; /*0x6b412c*/
  v3 = (__int16)v1 - dword_8759A8; /*0x6b4130*/
  v4 = v2 * dword_8759A4 + v3; /*0x6b4136*/
  v5 = dword_8759A4 * (v2 + 1) + v3; /*0x6b4142*/
  v6 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4); /*0x6b4144*/
  v7 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v5 + 2); /*0x6b414b*/
  v8 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v5); /*0x6b414f*/
  v18[1] = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4 + 2); /*0x6b4152*/
  v18[3] = v8; /*0x6b4156*/
  v18[0] = v6; /*0x6b415a*/
  v18[2] = v7; /*0x6b415e*/
  v9 = 1000; /*0x6b4162*/
  v10 = v18; /*0x6b4167*/
  v11 = 4; /*0x6b416b*/
  do /*0x6b417c*/
  {
    if ( *v10 < v9 ) /*0x6b4174*/
      v9 = *v10; /*0x6b4176*/
    ++v10; /*0x6b4178*/
    --v11; /*0x6b417b*/
  }
  while ( v11 ); /*0x6b417c*/
  v17 = v1; /*0x6b4186*/
  v12 = SHIWORD(v1) + (__int16)v1; /*0x6b4192*/
  if ( v12 <= g_MapCellHeight_Value /*0x6b41b1*/
    || (__int16)v1 - SHIWORD(v1) >= g_MapCellHeight_Value
    || SHIWORD(v1) - (__int16)v1 >= g_MapCellHeight_Value
    || v12 > g_MapCellCount )
  {
    v13 = this; /*0x6b421f*/
  }
  else
  {
    v13 = this; /*0x6b41b3*/
    if ( this->q044 == -1 && !this->q0E4 ) /*0x6b41bd*/
    {
      v17 = v1; /*0x6b41cb*/
      if ( !Tactical::GetCellData((__int16 *)&v17)[69] ) /*0x6b41d4*/
      {
        v14 = this->q038; /*0x6b41db*/
        if ( v14 >= MEMORY[0xA8ED38] || v14 == 0xFFFF || *(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v14) + 736) ) /*0x6b41f8*/
          return v9 / 15; /*0x6b421e*/
      }
    }
  }
  return *((char *)v13 + 283); /*0x6b4207*/
}


// ==== 0x006B4240  Map_Helper_6B4240  this=IUnknown  sig=ida-proto ====
int __fastcall sub_6B4240(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  char v6; // dl
  int v7; // ecx
  int v8; // esi
  int v9; // edi
  char v10; // dl
  char v11; // dl
  char v12; // al
  int v13; // esi
  int v14; // edi
  int *v15; // eax
  int v16; // edx
  int result; // eax
  int v18; // ecx
  _BYTE *v19; // edx
  int v20; // ecx
  _BYTE *v21; // esi
  int *v22; // edx
  int v23; // ecx
  _BYTE *v24; // edi
  int *v25; // edx
  int v26; // [esp+10h] [ebp-38h]
  _DWORD v28[5]; // [esp+18h] [ebp-30h] BYREF
  _BYTE v29[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  int v30; // [esp+30h] [ebp-18h]
  char v31; // [esp+34h] [ebp-14h]
  char v32; // [esp+35h] [ebp-13h]
  int v33; // [esp+38h] [ebp-10h]
  char v34; // [esp+3Ch] [ebp-Ch]
  char v35; // [esp+3Dh] [ebp-Bh]
  int v36; // [esp+40h] [ebp-8h]
  char v37; // [esp+44h] [ebp-4h]
  char v38; // [esp+45h] [ebp-3h]

  v26 = *(_DWORD *)(a1 + 36); /*0x6b4250*/
  v2 = (__int16)v26 - dword_8759A8; /*0x6b4267*/
  v3 = SHIWORD(v26) - dword_8759AC; /*0x6b4269*/
  v4 = v3 * dword_8759A4 + v2; /*0x6b4275*/
  v5 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4); /*0x6b4284*/
  v29[0] = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 4); /*0x6b4287*/
  v29[1] = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 5); /*0x6b428f*/
  v30 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v4 + 2); /*0x6b4297*/
  v6 = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 12); /*0x6b429b*/
  LOBYTE(v4) = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v4 + 13); /*0x6b429f*/
  v31 = v6; /*0x6b42a3*/
  v32 = v4; /*0x6b42a7*/
  v7 = dword_8759A4 * (v3 + 1) + v2; /*0x6b42ab*/
  v28[4] = v5; /*0x6b42ae*/
  v28[0] = v5; /*0x6b42b2*/
  v8 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v7 + 2); /*0x6b42ba*/
  v9 = *((_DWORD *)MEMORY[0xB0B6EC] + 2 * v7); /*0x6b42be*/
  v34 = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v7 + 12); /*0x6b42c1*/
  v10 = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v7 + 13); /*0x6b42c5*/
  v33 = v8; /*0x6b42c9*/
  v35 = v10; /*0x6b42cd*/
  v11 = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v7 + 4); /*0x6b42d1*/
  v12 = *((_BYTE *)MEMORY[0xB0B6EC] + 8 * v7 + 5); /*0x6b42d5*/
  v36 = v9; /*0x6b42dd*/
  v37 = v11; /*0x6b42e1*/
  v38 = v12; /*0x6b42e5*/
  v28[2] = v8; /*0x6b42e9*/
  v28[3] = v9; /*0x6b42ed*/
  v28[1] = v30; /*0x6b42f1*/
  v13 = 1000; /*0x6b42f5*/
  v14 = -1; /*0x6b42fa*/
  v15 = v28; /*0x6b42fd*/
  v16 = 4; /*0x6b4301*/
  do /*0x6b4318*/
  {
    if ( *v15 < v13 ) /*0x6b430a*/
      v13 = *v15; /*0x6b430c*/
    if ( *v15 > v14 ) /*0x6b4310*/
      v14 = *v15; /*0x6b4312*/
    ++v15; /*0x6b4314*/
    --v16; /*0x6b4317*/
  }
  while ( v16 ); /*0x6b4318*/
  result = 0; /*0x6b431a*/
  if ( v14 == v13 ) /*0x6b431e*/
  {
    v18 = 0; /*0x6b4320*/
    v19 = v29; /*0x6b4322*/
    do /*0x6b433b*/
    {
      if ( !*v19 ) /*0x6b4326*/
        result += 1 << v18; /*0x6b4332*/
      ++v18; /*0x6b4334*/
      v19 += 8; /*0x6b4335*/
    }
    while ( v18 < 4 ); /*0x6b433b*/
  }
  else if ( a2 <= 0 ) /*0x6b434b*/
  {
    v23 = 0; /*0x6b437d*/
    v24 = v29; /*0x6b437f*/
    v25 = v28; /*0x6b4383*/
    do /*0x6b43a3*/
    {
      if ( *v25 > v13 && !*v24 ) /*0x6b438b*/
        result += 1 << v23; /*0x6b4397*/
      ++v23; /*0x6b4399*/
      ++v25; /*0x6b439a*/
      v24 += 8; /*0x6b439d*/
    }
    while ( v23 < 4 ); /*0x6b43a3*/
  }
  else
  {
    v20 = 0; /*0x6b434d*/
    v21 = v29; /*0x6b434f*/
    v22 = v28; /*0x6b4353*/
    do /*0x6b4373*/
    {
      if ( *v22 < v14 && !*v21 ) /*0x6b435b*/
        result += 1 << v20; /*0x6b4367*/
      ++v20; /*0x6b4369*/
      ++v22; /*0x6b436a*/
      v21 += 8; /*0x6b436d*/
    }
    while ( v20 < 4 ); /*0x6b4373*/
  }
  return result; /*0x6b433d*/
}


// ==== 0x006B43B0  _DynamicVectorClass_UUndoInfoStruct::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_UUndoInfoStruct::sub_6B43B0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6b43b6*/
  *(_DWORD *)(this + 16) = 0; /*0x6b43b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6b43c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b43c6*/
    *(_DWORD *)(this + 4) = 0; /*0x6b43ce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b43d1*/
  *(_DWORD *)(this + 8) = 0; /*0x6b43d4*/
}


// ==== 0x006B43E0  _DynamicVectorClass_UUndoInfoStruct::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UUndoInfoStruct::sub_6B43E0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b43e0*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x6b43fe*/
  else
    return 0; /*0x6b43e7*/
}


// ==== 0x006B4410  _VectorClass_UUndoInfoStruct::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UUndoInfoStruct::_vt06(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(this->Items + 12 * a3); /*0x6b441b*/
  *a2 = *v3; /*0x6b4426*/
  a2[1] = v3[1]; /*0x6b442b*/
  a2[2] = v3[2]; /*0x6b4432*/
  return a2; /*0x6b442e*/
}


// ==== 0x006B4440  _VectorClass_UUndoInfoStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::_vt01(int *this, int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  v2 = this->Capacity; /*0x6b444b*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6b4450*/
  {
    v3 = 0; /*0x6b4452*/
    if ( v2 <= 0 ) /*0x6b4456*/
      return 1; /*0x6b4490*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6b4458*/
    v5 = (_DWORD *)this->Items; /*0x6b445b*/
    v6 = (_DWORD *)(v4 + 8); /*0x6b445e*/
    v7 = v4 - (_DWORD)v5; /*0x6b4461*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x6b447d*/
    {
      ++v3; /*0x6b447f*/
      v6 += 3; /*0x6b4480*/
      v5 += 3; /*0x6b4483*/
      if ( v3 >= v2 ) /*0x6b4488*/
        return 1; /*0x6b4488*/
    }
  }
  return 0; /*0x6b448a*/
}


// ==== 0x006B44A0  _VectorClass_UUndoInfoStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::_vt02(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // edx

  v3 = a2; /*0x6b44a2*/
  if ( !a2 ) /*0x6b44ae*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b4591*/
    return 1; /*0x6b4597*/
  }
  v5 = a3; /*0x6b44b4*/
  this->IsInitialized = 0; /*0x6b44b8*/
  if ( a3 ) /*0x6b44bd*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b44f8*/
    {
      v9 = a2; /*0x6b44fe*/
      do /*0x6b450b*/
      {
        *v5 = 0; /*0x6b44ff*/
        v5[1] = 0; /*0x6b4501*/
        v5[2] = 0; /*0x6b4504*/
        v5 += 3; /*0x6b4507*/
        --v9; /*0x6b450a*/
      }
      while ( v9 ); /*0x6b450b*/
      v5 = a3; /*0x6b450d*/
    }
  }
  else
  {
    v5 = __2_YAPAXI_Z(12 * a2); /*0x6b44c7*/
    if ( !v5 ) /*0x6b44d1*/
    {
      v8 = 0; /*0x6b44ef*/
      goto LABEL_14; /*0x6b44f1*/
    }
    v6 = v5; /*0x6b44d6*/
    if ( a2 - 1 >= 0 ) /*0x6b44da*/
    {
      v7 = a2; /*0x6b44de*/
      do /*0x6b44eb*/
      {
        *v6 = 0; /*0x6b44df*/
        v6[1] = 0; /*0x6b44e1*/
        v6[2] = 0; /*0x6b44e4*/
        v6 += 3; /*0x6b44e7*/
        --v7; /*0x6b44ea*/
      }
      while ( v7 ); /*0x6b44eb*/
    }
  }
  v8 = v5; /*0x6b4511*/
LABEL_14:
  this->IsInitialized = 1; /*0x6b4513*/
  if ( !v8 ) /*0x6b4519*/
    return 0; /*0x6b451e*/
  if ( this->Items ) /*0x6b4524*/
  {
    v11 = this->Capacity; /*0x6b4529*/
    if ( a2 < v11 ) /*0x6b452e*/
      v11 = a2; /*0x6b4530*/
    if ( v11 > 0 ) /*0x6b4534*/
    {
      v12 = 0; /*0x6b4536*/
      do /*0x6b4554*/
      {
        v13 = &v8[v12]; /*0x6b453b*/
        v14 = (_DWORD *)(v12 * 4 + this->Items); /*0x6b453e*/
        v12 += 3; /*0x6b4540*/
        --v11; /*0x6b4543*/
        *v13 = *v14; /*0x6b4546*/
        v13[1] = v14[1]; /*0x6b454b*/
        v13[2] = v14[2]; /*0x6b4551*/
      }
      while ( v11 ); /*0x6b4554*/
      v3 = a2; /*0x6b4556*/
    }
    if ( this->IsAllocated ) /*0x6b455c*/
    {
      __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b4565*/
      this->Items = 0; /*0x6b456d*/
    }
  }
  this->Items = v8; /*0x6b4578*/
  this->Capacity = v3; /*0x6b457e*/
  this->IsAllocated = a3 == 0; /*0x6b4581*/
  return 1; /*0x6b451b*/
}


// ==== 0x006B45A0  _VectorClass_UUndoInfoStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UUndoInfoStruct::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6b45ad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6b45b3*/
    *(_DWORD *)(this + 4) = 0; /*0x6b45bb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b45be*/
  *(_DWORD *)(this + 8) = 0; /*0x6b45c1*/
}


// ==== 0x006B45D0  _VectorClass_UUndoInfoStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UUndoInfoStruct::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6b45d0*/
    return 0; /*0x6b45de*/
  v3 = *(_DWORD *)(this + 8); /*0x6b45e4*/
  result = 0; /*0x6b45e7*/
  if ( v3 <= 0 ) /*0x6b45eb*/
    return -1; /*0x6b4616*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x6b45f1*/
  {
    if ( ++result >= v3 ) /*0x6b4614*/
      return -1; /*0x6b4614*/
  }
  return result; /*0x6b45db*/
}


// ==== 0x006B4620  _VectorClass_UUndoInfoStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UUndoInfoStruct::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b4620*/
    return (a2 - *(_DWORD *)(this + 4)) / 0xCu; /*0x6b463e*/
  else
    return 0; /*0x6b4627*/
}


// ==== 0x006B4650  _DynamicVectorClass_UUndoInfoStruct::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::sub_6B4650(void *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // edx
  int v14; // eax

  v3 = a2; /*0x6b4652*/
  if ( !a2 ) /*0x6b465e*/
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b4731*/
    goto LABEL_26; /*0x6b4731*/
  }
  v5 = a3; /*0x6b4664*/
  this->IsInitialized = 0; /*0x6b4668*/
  if ( a3 ) /*0x6b466d*/
  {
    if ( a2 - 1 >= 0 ) /*0x6b46a8*/
    {
      v9 = a2; /*0x6b46ae*/
      do /*0x6b46bb*/
      {
        *v5 = 0; /*0x6b46af*/
        v5[1] = 0; /*0x6b46b1*/
        v5[2] = 0; /*0x6b46b4*/
        v5 += 3; /*0x6b46b7*/
        --v9; /*0x6b46ba*/
      }
      while ( v9 ); /*0x6b46bb*/
      v5 = a3; /*0x6b46bd*/
    }
    goto LABEL_13; /*0x6b46bd*/
  }
  v5 = __2_YAPAXI_Z(12 * a2); /*0x6b4677*/
  if ( v5 ) /*0x6b4681*/
  {
    v6 = v5; /*0x6b4686*/
    if ( a2 - 1 >= 0 ) /*0x6b468a*/
    {
      v7 = a2; /*0x6b468e*/
      do /*0x6b469b*/
      {
        *v6 = 0; /*0x6b468f*/
        v6[1] = 0; /*0x6b4691*/
        v6[2] = 0; /*0x6b4694*/
        v6 += 3; /*0x6b4697*/
        --v7; /*0x6b469a*/
      }
      while ( v7 ); /*0x6b469b*/
    }
LABEL_13:
    v8 = v5; /*0x6b46c1*/
    goto LABEL_14; /*0x6b46c1*/
  }
  v8 = 0; /*0x6b469f*/
LABEL_14:
  this->IsInitialized = 1; /*0x6b46c3*/
  if ( !v8 ) /*0x6b46c9*/
    return 0; /*0x6b474d*/
  if ( this->Items ) /*0x6b46cb*/
  {
    v10 = this->DynamicVector_field_0x8; /*0x6b46d0*/
    if ( a2 < v10 ) /*0x6b46d5*/
      v10 = a2; /*0x6b46d7*/
    if ( v10 > 0 ) /*0x6b46db*/
    {
      v11 = 0; /*0x6b46dd*/
      do /*0x6b46fb*/
      {
        v12 = &v8[v11]; /*0x6b46e2*/
        v13 = (_DWORD *)(v11 * 4 + this->Items); /*0x6b46e5*/
        v11 += 3; /*0x6b46e7*/
        --v10; /*0x6b46ea*/
        *v12 = *v13; /*0x6b46ed*/
        v12[1] = v13[1]; /*0x6b46f2*/
        v12[2] = v13[2]; /*0x6b46f8*/
      }
      while ( v10 ); /*0x6b46fb*/
      v3 = a2; /*0x6b46fd*/
    }
    if ( this->IsAllocated ) /*0x6b4703*/
    {
      __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b470c*/
      this->Items = 0; /*0x6b4714*/
    }
  }
  this->Items = v8; /*0x6b471f*/
  this->DynamicVector_field_0x8 = v3; /*0x6b4725*/
  this->IsAllocated = a3 == 0; /*0x6b4728*/
LABEL_26:
  v14 = this->DynamicVector_field_0x8; /*0x6b4734*/
  if ( v14 < this->Items ) /*0x6b473c*/
    this->Items = v14; /*0x6b473e*/
  return 1; /*0x6b4741*/
}


// ==== 0x006B4760  _DynamicVectorClass_UUndoInfoStruct::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UUndoInfoStruct::sub_6B4760(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6b4760*/
  result = 0; /*0x6b4765*/
  if ( v2 <= 0 ) /*0x6b476b*/
    return -1; /*0x6b4796*/
  for ( i = (_DWORD *)this->Items; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x6b4771*/
  {
    if ( ++result >= v2 ) /*0x6b4794*/
      return -1; /*0x6b4794*/
  }
  return result; /*0x6b4799*/
}


// ==== 0x006B47A0  _VectorClass_UUndoInfoStruct::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_UUndoInfoStruct::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b47a3*/
  *Block = &vt_VectorClass_UndoInfoStruct; /*0x6b47a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b47b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b47b8*/
    *(Block + 1) = 0; /*0x6b47c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b47cb*/
  *(Block + 2) = 0; /*0x6b47d1*/
  if ( (a2 & 1) != 0 ) /*0x6b47d8*/
    __3_YAXPAX_Z(Block); /*0x6b47db*/
  return (VectorClass *)Block; /*0x6b47e5*/
}


// ==== 0x006B47F0  _DynamicVectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b47f3*/
  *Block = &vt_VectorClass_UndoInfoStruct; /*0x6b47f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b4800*/
  {
    __3_YAXPAX_Z(v3); /*0x6b4808*/
    *(Block + 1) = 0; /*0x6b4810*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b481b*/
  *(Block + 2) = 0; /*0x6b4821*/
  if ( (a2 & 1) != 0 ) /*0x6b4828*/
    __3_YAXPAX_Z(Block); /*0x6b482b*/
  return (DynamicVector *)Block; /*0x6b4835*/
}


// ==== 0x006B4840  sub_6B4840  this=-  sig=ida-proto ====
void sub_6B4840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b484c*/
  MEMORY[0xB0B710] = Math::Sqrt(v0 + v0); /*0x6b485e*/
}


// ==== 0x006B4870  sub_6B4870  this=-  sig=ida-proto ====
void sub_6B4870()
{
  MEMORY[0xB0B760] = MEMORY[0xB0B710] / 60.0; /*0x6b487c*/
}


// ==== 0x006B4890  sub_6B4890  this=-  sig=ida-proto ====
void sub_6B4890()
{
  MEMORY[0xB0B748] = 1.0 / MEMORY[0xB0B760]; /*0x6b489c*/
}


// ==== 0x006B48B0  sub_6B48B0  this=-  sig=ida-proto ====
void sub_6B48B0()
{
  MEMORY[0xB0B740] = 0.0174532925199433 * 45.0; /*0x6b48bc*/
}


// ==== 0x006B48D0  sub_6B48D0  this=-  sig=ida-proto ====
void sub_6B48D0()
{
  MEMORY[0xB0B718] = 0.0174532925199433 * 60.0; /*0x6b48dc*/
}


// ==== 0x006B48F0  sub_6B48F0  this=-  sig=ida-proto ====
void sub_6B48F0()
{
  MEMORY[0xB0B6F0] = 0.0174532925199433 * 90.0; /*0x6b48fc*/
}


// ==== 0x006B4910  sub_6B4910  this=-  sig=ida-proto ====
__int64 sub_6B4910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0B6F0] - MEMORY[0xB0B718]); /*0x6b4922*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0B710] * 0.5); /*0x6b4936*/
  MEMORY[0xB0B768] = result; /*0x6b493b*/
  return result; /*0x6b4940*/
}


// ==== 0x006B4950  sub_6B4950  this=-  sig=ida-proto ====
void sub_6B4950()
{
  MEMORY[0xB0B720] = Math::ArcTan((double)MEMORY[0xB0B768] * 0.00390625); /*0x6b4967*/
}


// ==== 0x006B4980  sub_6B4980  this=-  sig=ida-proto ====
void sub_6B4980()
{
  MEMORY[0xB0B738] = Math::ArcTan((double)(2 * MEMORY[0xB0B768]) / MEMORY[0xB0B710]); /*0x6b49a2*/
}


// ==== 0x006B49B0  sub_6B49B0  this=-  sig=ida-proto ====
__int64 sub_6B49B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B768]) + 0.5); /*0x6b49cb*/
  MEMORY[0xB0B75C] = result; /*0x6b49d0*/
  return result; /*0x6b49d6*/
}


// ==== 0x006B49E0  sub_6B49E0  this=-  sig=ida-proto ====
int sub_6B49E0()
{
  MEMORY[0xB0B708] = 0; /*0x6b49e2*/
  MEMORY[0xB0B70A] = 0; /*0x6b49e8*/
  return 0; /*0x6b49ee*/
}


// ==== 0x006B49F0  sub_6B49F0  this=-  sig=ida-proto ====
int sub_6B49F0()
{
  MEMORY[0xB0B728] = 0; /*0x6b49f2*/
  MEMORY[0xB0B72C] = 0; /*0x6b49f7*/
  MEMORY[0xB0B730] = 0; /*0x6b49fc*/
  return 0; /*0x6b4a01*/
}


// ==== 0x006B4A10  sub_6B4A10  this=-  sig=ida-proto ====
int sub_6B4A10()
{
  MEMORY[0xB0B758] = 0; /*0x6b4a15*/
  MEMORY[0xB0B750] = 128; /*0x6b4a1f*/
  MEMORY[0xB0B754] = 128; /*0x6b4a24*/
  return 128; /*0x6b4a29*/
}


// ==== 0x006B4A30  sub_6B4A30  this=-  sig=ida-proto ====
int sub_6B4A30()
{
  MEMORY[0xB0B6F8] = 0; /*0x6b4a32*/
  MEMORY[0xB0B6FC] = 0; /*0x6b4a37*/
  MEMORY[0xB0B700] = 0; /*0x6b4a3c*/
  MEMORY[0xB0B704] = 0; /*0x6b4a41*/
  return 0; /*0x6b4a46*/
}


// ==== 0x006B4A50  UnitClass::Create  this=SmudgeClass  sig=csp ====
SmudgeClass *__thiscall UnitClass::Create(void **this, AbstractClass *aP1, AbstractClass *aP2, int a4)
{
  int v5; // eax

  ObjectClass::ctor(this); /*0x6b4a53*/
  *this = &SmudgeClass::`vftable'; /*0x6b4a5c*/
  this->q02B = aP1; /*0x6b4a62*/
  this->vtable3 = &SmudgeClass::`vftable'; /*0x6b4a6c*/
  this->vtable2 = &SmudgeClass::`vftable'; /*0x6b4a73*/
  this->vtable4 = &SmudgeClass::`vftable'; /*0x6b4a79*/
  AbstractClass::GenerateUniqueID((int)(this + 1)); /*0x6b4a80*/
  if ( *(int *)&HouseClass_Player.__pad_5568[7996] < *(int *)&HouseClass_Player.__pad_5568[7988] /*0x6b4abc*/
    || (HouseClass_Player.__pad_5568[7993] || !*(_DWORD *)&HouseClass_Player.__pad_5568[7988])
    && *(int *)&HouseClass_Player.__pad_5568[8000] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&HouseClass_Player.__pad_5568[7980] + 8))(
         &HouseClass_Player.__pad_5568[7980],
         *(_DWORD *)&HouseClass_Player.__pad_5568[7988] + *(_DWORD *)&HouseClass_Player.__pad_5568[8000],
         0) )
  {
    v5 = (*(_DWORD *)&HouseClass_Player.__pad_5568[7996])++; /*0x6b4ac9*/
    *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[7984] + 4 * v5) = this; /*0x6b4ad8*/
  }
  if ( *(_DWORD *)aP2->__pad_0 != *(_DWORD *)&stru_B05488.__pad_579C[2820] /*0x6b4b03*/
    || *(_DWORD *)&aP2->__pad_0[4] != *(_DWORD *)&stru_B05488.__pad_579C[2824]
    || *(_DWORD *)&aP2->__pad_0[8] != *(_DWORD *)&stru_B05488.__pad_579C[2828] )
  {
    *(_DWORD *)&stru_830620.__pad_579C[41500] = a4; /*0x6b4b0b*/
    if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)this) ) /*0x6b4b14*/
    {
      ObjectClass::Destroy((#374 *)this); /*0x6b4b1f*/
      return (SmudgeClass *)this; /*0x6b4b27*/
    }
    *(_DWORD *)&stru_830620.__pad_579C[41500] = -1; /*0x6b4b2a*/
  }
  return (SmudgeClass *)this; /*0x6b4b26*/
}


// ==== 0x006B4BE0  SmudgeClass::UnloadPassengers  this=SmudgeClass  sig=csp ====
char __thiscall UnitClass::UnloadPassengers(int *this, int a2)
{
  int v2; // edi
  int v4; // edx
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6b4be3*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)this) || v2 != 1 && v2 != 3 ) /*0x6b4bfb*/
    return 0; /*0x6b4c61*/
  a2 = *(_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 440))(this, v6); /*0x6b4c0e*/
  if ( MEMORY[0xA8E7AC] > 0 || MEMORY[0xA8ED6B] || Cell::IsWalkable((int *)this->q02B, &a2, 1) ) /*0x6b4c31*/
    UnitClass::CreateUnloadPlacementCraters(&a2); /*0x6b4c45*/
  v4 = *this; /*0x6b4c4a*/
  this->isOnMap = 0; /*0x6b4c4e*/
  (*(void (__thiscall **)(int *))(v4 + 248))(this); /*0x6b4c52*/
  return 1; /*0x6b4c58*/
}


// ==== 0x006B4C70  nullsub_232  this=-  sig=csp ====
void __stdcall nullsub_232(int a1)
{
  ; /*0x6b4c70*/
}


// ==== 0x006B4C80  UnitClass::ReadINI  this=IUnknown  sig=csp ====
int __thiscall UnitClass::ReadINI(char *this)
{
  int result; // eax
  int v3; // ecx
  unsigned __int8 *StringByIndex; // eax
  char *v5; // eax
  int _6B5440; // esi
  char *v7; // eax
  __int16 v8; // di
  char *v9; // eax
  __int16 v10; // bx
  char *v11; // eax
  void **v12; // eax
  int i; // [esp+4h] [ebp-94h]
  int v14; // [esp+8h] [ebp-90h]
  int v15[3]; // [esp+Ch] [ebp-8Ch] BYREF
  char String[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x6b4c89*/
  result = INIClass::GetKeyCount(this, (unsigned __int8 *)aSmudge); /*0x6b4c96*/
  v3 = 0; /*0x6b4c9b*/
  v14 = result; /*0x6b4c9f*/
  for ( i = 0; i < v14; ++i ) /*0x6b4ca7*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex(this, (unsigned __int8 *)aSmudge, v3); /*0x6b4cba*/
    INIClass::GetString((unsigned __int8 ***)this, (unsigned __int8 **)aSmudge, StringByIndex, 0, String, 128); /*0x6b4cd4*/
    v5 = strtok(String, Delimiter); /*0x6b4ce3*/
    _6B5440 = Object_Read_6B5440(v5); /*0x6b4cf2*/
    if ( _6B5440 != -1 ) /*0x6b4cf7*/
    {
      v7 = strtok(0, Delimiter); /*0x6b4d04*/
      if ( v7 ) /*0x6b4d0e*/
      {
        v8 = atoi(v7); /*0x6b4d21*/
        v9 = strtok(0, Delimiter); /*0x6b4d23*/
        v10 = atoi(v9); /*0x6b4d35*/
        v11 = strtok(0, Delimiter); /*0x6b4d38*/
        if ( !v11 || !atoi(v11) ) /*0x6b4d45*/
        {
          v12 = (void **)__2_YAPAXI_Z(176); /*0x6b4d56*/
          if ( v12 ) /*0x6b4d60*/
          {
            v15[0] = (v8 << 8) + 128; /*0x6b4d7a*/
            v15[1] = (v10 << 8) + 128; /*0x6b4d7e*/
            v15[2] = 0; /*0x6b4d8e*/
            UnitClass::Create(v12, *(void **)(MEMORY[0x87F7E8][539917] + 4 * _6B5440), v15, -1); /*0x6b4d9d*/
          }
        }
      }
    }
    result = v14; /*0x6b4da6*/
    v3 = i + 1; /*0x6b4daa*/
  }
  return result; /*0x6b4dba*/
}


// ==== 0x006B4DD0  UnitTypeClass::ReadINIEntry  this=UnitTypeClass  sig=csp ====
char __thiscall sub_6B4DD0(char *this)
{
  int v1; // ebp
  int i; // edi
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // ebx
  int v7; // [esp+10h] [ebp-98h]
  __int16 v8[2]; // [esp+14h] [ebp-94h] BYREF
  char *v9; // [esp+18h] [ebp-90h]
  char Buffer[12]; // [esp+1Ch] [ebp-8Ch] BYREF
  char Source[128]; // [esp+28h] [ebp-80h] BYREF

  v1 = 0; /*0x6b4dde*/
  v9 = this; /*0x6b4de3*/
  INIClass::ClearSection((int)this, (int)MEMORY[0x81732C], 0); /*0x6b4de7*/
  v7 = 0; /*0x6b4dec*/
  do /*0x6b4e8e*/
  {
    for ( i = 0; i < 512; ++i ) /*0x6b4df0*/
    {
      v8[0] = i; /*0x6b4df6*/
      v8[1] = v1; /*0x6b4e01*/
      v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v8); /*0x6b4e0b*/
      v4 = v3[18]; /*0x6b4e0d*/
      if ( v4 != -1 && !*((_BYTE *)v3 + 287) ) /*0x6b4e15*/
      {
        v5 = *((_DWORD *)MEMORY[0xA8EC1C] + v4); /*0x6b4e29*/
        sprintf(Buffer, MEMORY[0x817F6C], v7); /*0x6b4e37*/
        sprintf(Source, MEMORY[0x83FFFC], (const char *)(v5 + 36), i, v1, *((unsigned __int8 *)v3 + 287)); /*0x6b4e55*/
        LOBYTE(v4) = INIClass::SetString(v9, (unsigned __int8 *)MEMORY[0x81732C], Buffer, Source); /*0x6b4e71*/
        ++v7; /*0x6b4e76*/
      }
    }
    ++v1; /*0x6b4e87*/
  }
  while ( v1 < 512 ); /*0x6b4e8e*/
  return v4; /*0x6b4e94*/
}


// ==== 0x006B4EA0  SmudgeClass::SaveLoadData  this=SmudgeClass  sig=csp ====
int __thiscall UnitClass::SaveLoadData(void *this, ObjectClass *aP1, int aP1a)
{
  ObjectClass *Register; // edi

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this); /*0x6b4eb1*/
  if ( (int)Register >= 0 ) /*0x6b4eb5*/
  {
    if ( aP1 ) /*0x6b4eb9*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x6b4ec2*/
      *(_DWORD *)aP1->__pad_0 = &SmudgeClass::`vftable'; /*0x6b4ec7*/
      *(_DWORD *)&aP1->__pad_0[4] = &SmudgeClass::`vftable'; /*0x6b4ecd*/
      *(_DWORD *)&aP1->__pad_0[8] = &SmudgeClass::`vftable'; /*0x6b4ed4*/
      *(_DWORD *)&aP1->__pad_0[12] = &SmudgeClass::`vftable'; /*0x6b4edb*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]); /*0x6b4eee*/
  }
  return (int)Register->__pad_0; /*0x6b4ef5*/
}


// ==== 0x006B4F00  SmudgeClass::SaveState  this=SmudgeClass  sig=csp ====
int __stdcall UnitClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6b4f14*/
}


// ==== 0x006B4F20  SmudgeClass::CheckStatus  this=SmudgeClass  sig=csp ====
int __thiscall UnitClass::_vt34(_DWORD *this)
{
  return this->Type; /*0x6b4f26*/
}


// ==== 0x006B4F30  SmudgeClass::StubReturn176  this=SmudgeClass  sig=csp ====
int UnitClass::_vt12()
{
  return 176; /*0x6b4f35*/
}


// ==== 0x006B4F40  SmudgeClass::StubReturn29  this=SmudgeClass  sig=csp ====
int UnitClass::_vt11()
{
  return 29; /*0x6b4f45*/
}


// ==== 0x006B4F50  SmudgeClass::GetClassID  this=SmudgeClass  sig=csp ====
int __stdcall UnitClass::GetClassID(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6b4f56*/
    return -2147467261; /*0x6b4f58*/
  *a2 = 237448645; /*0x6b4f66*/
  a2[1] = 298949647; /*0x6b4f6e*/
  a2[2] = -1610610249; /*0x6b4f77*/
  a2[3] = -777003740; /*0x6b4f80*/
  return 0; /*0x6b4f5d*/
}


// ==== 0x006B4F90  SmudgeClass::nullsub_233  this=SmudgeClass  sig=csp ====
void __stdcall nullsub_233(int a1, int a2)
{
  ; /*0x6b4f90*/
}


// ==== 0x006B4FA0  SmudgeClass::DestroySmudge  this=SmudgeClass  sig=csp ====
SmudgeClass *__thiscall UnitClass::DestroySmudge(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &SmudgeClass::`vftable'; /*0x6b4fa6*/
  *(Block + 1) = &SmudgeClass::`vftable'; /*0x6b4fac*/
  *(Block + 2) = &SmudgeClass::`vftable'; /*0x6b4fb3*/
  *(Block + 3) = &SmudgeClass::`vftable'; /*0x6b4fba*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x6b4fc1*/
  v5 = Block; /*0x6b4fd6*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xA8B1E0] + 16))(&MEMORY[0xA8B1E0], &v5); /*0x6b4fda*/
  if ( v3 != -1 && v3 < MEMORY[0xA8B1F0] && v3 < --MEMORY[0xA8B1F0] ) /*0x6b4ff5*/
  {
    do /*0x6b500d*/
    {
      ++v3; /*0x6b4ffd*/
      *((_DWORD *)MEMORY[0xA8B1E4] + v3 - 1) = *((_DWORD *)MEMORY[0xA8B1E4] + v3); /*0x6b5001*/
    }
    while ( v3 < MEMORY[0xA8B1F0] ); /*0x6b500d*/
  }
  if ( MEMORY[0xA8E9A0] ) /*0x6b5016*/
    ObjectClass::Undeploy((#374 *)Block); /*0x6b501a*/
  *(Block + 43) = 0; /*0x6b5021*/
  ObjectClass::Dtor(Block); /*0x6b502b*/
  if ( (a2 & 1) != 0 ) /*0x6b5035*/
    __3_YAXPAX_Z(Block); /*0x6b5038*/
  return (SmudgeClass *)Block; /*0x6b5042*/
}


// ==== 0x006B5050  sub_6B5050  this=-  sig=ida-proto ====
int sub_6B5050()
{
  MEMORY[0xB0B778] = 0; /*0x6b5052*/
  MEMORY[0xB0B77C] = 0; /*0x6b5057*/
  MEMORY[0xB0B780] = 0; /*0x6b505c*/
  MEMORY[0xB0B784] = 0; /*0x6b5061*/
  return 0; /*0x6b5066*/
}


// ==== 0x006B5070  sub_6B5070  this=-  sig=ida-proto ====
void sub_6B5070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b507c*/
  MEMORY[0xB0B790] = Math::Sqrt(v0 + v0); /*0x6b508e*/
}


// ==== 0x006B50A0  sub_6B50A0  this=-  sig=ida-proto ====
void sub_6B50A0()
{
  MEMORY[0xB0B7E0] = MEMORY[0xB0B790] / 60.0; /*0x6b50ac*/
}


// ==== 0x006B50C0  sub_6B50C0  this=-  sig=ida-proto ====
void sub_6B50C0()
{
  MEMORY[0xB0B7C8] = 1.0 / MEMORY[0xB0B7E0]; /*0x6b50cc*/
}


// ==== 0x006B50E0  sub_6B50E0  this=-  sig=ida-proto ====
void sub_6B50E0()
{
  MEMORY[0xB0B7C0] = 0.0174532925199433 * 45.0; /*0x6b50ec*/
}


// ==== 0x006B5100  sub_6B5100  this=-  sig=ida-proto ====
void sub_6B5100()
{
  MEMORY[0xB0B798] = 0.0174532925199433 * 60.0; /*0x6b510c*/
}


// ==== 0x006B5120  sub_6B5120  this=-  sig=ida-proto ====
void sub_6B5120()
{
  MEMORY[0xB0B770] = 0.0174532925199433 * 90.0; /*0x6b512c*/
}


// ==== 0x006B5140  sub_6B5140  this=-  sig=ida-proto ====
__int64 sub_6B5140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0B770] - MEMORY[0xB0B798]); /*0x6b5152*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0B790] * 0.5); /*0x6b5166*/
  MEMORY[0xB0B7E8] = result; /*0x6b516b*/
  return result; /*0x6b5170*/
}


// ==== 0x006B5180  sub_6B5180  this=-  sig=ida-proto ====
void sub_6B5180()
{
  MEMORY[0xB0B7A0] = Math::ArcTan((double)MEMORY[0xB0B7E8] * 0.00390625); /*0x6b5197*/
}


// ==== 0x006B51B0  sub_6B51B0  this=-  sig=ida-proto ====
void sub_6B51B0()
{
  MEMORY[0xB0B7B8] = Math::ArcTan((double)(2 * MEMORY[0xB0B7E8]) / MEMORY[0xB0B790]); /*0x6b51d2*/
}


// ==== 0x006B51E0  sub_6B51E0  this=-  sig=ida-proto ====
__int64 sub_6B51E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B7E8]) + 0.5); /*0x6b51fb*/
  MEMORY[0xB0B7DC] = result; /*0x6b5200*/
  return result; /*0x6b5206*/
}


// ==== 0x006B5210  sub_6B5210  this=-  sig=ida-proto ====
int sub_6B5210()
{
  MEMORY[0xB0B788] = 0; /*0x6b5212*/
  return 0; /*0x6b521e*/
}


// ==== 0x006B5220  sub_6B5220  this=-  sig=ida-proto ====
int sub_6B5220()
{
  MEMORY[0xB0B7A8] = 0; /*0x6b5222*/
  MEMORY[0xB0B7AC] = 0; /*0x6b5227*/
  MEMORY[0xB0B7B0] = 0; /*0x6b522c*/
  return 0; /*0x6b5231*/
}


// ==== 0x006B5240  MapCoords::Init  this=MapCoords  sig=ida-proto ====
int MapCoords_Init()
{
  MEMORY[0xB0B7D8] = 0; /*0x6b5245*/
  MEMORY[0xB0B7D0] = 128; /*0x6b524f*/
  MEMORY[0xB0B7D4] = 128; /*0x6b5254*/
  return 128; /*0x6b5259*/
}


// ==== 0x006B5260  SmudgeTypeClass::SmudgeTypeClass  this=SmudgeTypeClass  sig=csp ====
char *__thiscall SmudgeTypeClass::SmudgeTypeClass(char *this, char *Source)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  void **v6; // edx

  ObjectTypeClass::ConstructFull((int)this, Source); /*0x6b5269*/
  this->Width = -1; /*0x6b5277*/
  this->Height = 1; /*0x6b5281*/
  this->Crater = 1; /*0x6b5287*/
  this->q2A0 = 0; /*0x6b528d*/
  this->q2A1 = 0; /*0x6b5294*/
  *(_DWORD *)this = &SmudgeTypeClass::`vftable'; /*0x6b529b*/
  this->vtable2 = &SmudgeTypeClass::`vftable'; /*0x6b52a1*/
  this->vtable3 = &SmudgeTypeClass::`vftable'; /*0x6b52a7*/
  this->vtable4 = &SmudgeTypeClass::`vftable'; /*0x6b52ae*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x6b52b5*/
  *(_WORD *)(this + 559) = 1; /*0x6b52ba*/
  this->LegalTarget = 0; /*0x6b52c7*/
  this->Insignificant = 1; /*0x6b52ce*/
  this->q233 = 1; /*0x6b52d4*/
  this->q235 = 0; /*0x6b52da*/
  v3 = MEMORY[0xA8EC28]; /*0x6b52e1*/
  if ( MEMORY[0xA8EC28] < MEMORY[0xA8EC20] /*0x6b5322*/
    || (MEMORY[0xA8EC25] || !MEMORY[0xA8EC20])
    && MEMORY[0xA8EC2C] > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8EC18] + 8))(
               &MEMORY[0xA8EC18],
               MEMORY[0xA8EC20] + MEMORY[0xA8EC2C],
               0) == 0,
        v3 = MEMORY[0xA8EC28],
        !v4) )
  {
    MEMORY[0xA8EC28] = v3 + 1; /*0x6b5327*/
    *((_DWORD *)MEMORY[0xA8EC1C] + v3) = this; /*0x6b5331*/
    v3 = MEMORY[0xA8EC28]; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( v3 <= 0 ) /*0x6b533d*/
  {
LABEL_11:
    this->Width = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = (void **)MEMORY[0xA8EC1C]; /*0x6b533f*/
    while ( *v6 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      ++v6; /*0x6b534a*/
      if ( v5 >= v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    this->Width = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }
}


// ==== 0x006B5440  ObjectClass::Object_Read_6B5440  this=INIClass  sig=csp ====
int __thiscall Object_Read_6B5440(void *this)
{
  int v2; // esi

  if ( !this ) /*0x6b5446*/
    return -1; /*0x6b5446*/
  v2 = 0; /*0x6b544d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22900] <= 0 ) /*0x6b5451*/
    return -1; /*0x6b5476*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v2) + 36), this) ) /*0x6b546a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[22900] ) /*0x6b5474*/
      return -1; /*0x6b5474*/
  }
  return v2; /*0x6b5476*/
}


// ==== 0x006B5490  LoadFactoryClassTheaterSHP  this=-  sig=ida-proto ====
int __fastcall FactoryClass_LoadTheaterSHP(int a1)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  _DWORD v5[22]; // [esp+8h] [ebp-26Ch] BYREF
  _BYTE v6[12]; // [esp+60h] [ebp-214h] BYREF
  int v7; // [esp+6Ch] [ebp-208h]
  char Buffer[512]; // [esp+74h] [ebp-200h] BYREF

  result = MEMORY[0xA8EC28]; /*0x6b5490*/
  for ( i = 0; i < MEMORY[0xA8EC28]; ++i ) /*0x6b54a3*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC1C] + i); /*0x6b54af*/
    if ( *(_BYTE *)(v4 + 556) ) /*0x6b54b2*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x6b54dc*/
      CCFileClass::Construct(v5, Buffer); /*0x6b54ed*/
      *(_DWORD *)(v4 + 164) = CCFileClass::ReadEntireFile(v5); /*0x6b54ff*/
      v5[0] = &vt_CCFileClass; /*0x6b5505*/
      v7 = 0; /*0x6b550d*/
      Vector::Clear((int)v6); /*0x6b5515*/
      v5[0] = &off_7E1668; /*0x6b551e*/
      BufferIOFileClass::Dtor(v5); /*0x6b5526*/
    }
    result = MEMORY[0xA8EC28]; /*0x6b552b*/
  }
  return result; /*0x6b553a*/
}


// ==== 0x006B5550  SmudgeTypeClass::GetType  this=SmudgeTypeClass  sig=csp ====
bool __thiscall SmudgeTypeClass::GetType(AbstractClass *this, __int16 *a2, int a3)
{
  void **v4; // eax
  int v5; // edx
  bool result; // al
  int v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( UnitClass::Create(v4, this, (AbstractClass *)v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/
}


// ==== 0x006B55C0  SmudgeTypeClass::GetFlag  this=SmudgeTypeClass  sig=csp ====
SmudgeClass *__thiscall SmudgeTypeClass::GetFlag(AbstractClass *this, int a2)
{
  void **v3; // eax

  v3 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
    return UnitClass::Create(v3, this, (AbstractClass *)&stru_B05488.__pad_579C[2948], -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/
}


// ==== 0x006B55F0  SmudgeTypeClass::vt_entry_A0  this=SmudgeTypeClass  sig=csp ====
void __thiscall SmudgeTypeClass::vt_entry_A0(_DWORD *this, int *a2, int *a3, int a4, int a5, __int16 *a6)
{
  int v7; // ebx
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 156))(this); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v14 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      v9 = this->Height; /*0x6b5623*/
      v14 += -15 * (a4 / v9 + a4 % v9); /*0x6b5659*/
      v13 += 60 * (a4 / v9 - a4 % v9) / 2; /*0x6b5661*/
    }
    v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], a6); /*0x6b5674*/
    v12 = *((__int16 *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP(MEMORY[0x887314], v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0); /*0x6b56b4*/
  }
}


// ==== 0x006B56D0  SmudgeTypeClass::GetSize  this=SmudgeTypeClass  sig=csp ====
char __thiscall SmudgeTypeClass::GetSize(int this, unsigned __int8 ***aP1)
{
  char Bool_Overwrite; // al
  char v4; // cl
  char v5; // al
  INIClass *v7; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6b56e3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)this, (CCINIClass *)aP1) ) /*0x6b56eb*/
    return 0; /*0x6b57db*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b570b*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     &unk_8185F4,
                     *(_BYTE *)(this + 672));
  v4 = *(_BYTE *)(this + 673); /*0x6b5710*/
  *(_BYTE *)(this + 672) = Bool_Overwrite; /*0x6b5716*/
  v5 = INIClass::ReadBool_Overwrite( /*0x6b5725*/
         (int)aP1,
         (unsigned __int8 *)(this + 36),
         (CCINIClass *)&stru_830620.__pad_579C[41580],
         v4);
  v7 = *(INIClass **)(this + 664); /*0x6b5732*/
  *(_BYTE *)(this + 673) = v5; /*0x6b5739*/
  *(_DWORD *)(this + 664) = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_82BBD0.sectionHead[1],
                              v7);
  *(_DWORD *)(this + 668) = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              &g_INI_Key_Height,
                              *(INIClass **)(this + 668));
  if ( *(_BYTE *)(this + 556) ) /*0x6b5764*/
    _makepath(Buffer, 0, 0, (const char *)(this + 504), (const char *)&off_7E1BC6 + 112 * MEMORY[0xA8B230]->theater); /*0x6b57b4*/
  else
    _makepath(Buffer, 0, 0, (const char *)(this + 504), Ext); /*0x6b5784*/
  *(_DWORD *)(this + 164) = SearchMIXFile(Buffer, 0); /*0x6b57c7*/
  return 1; /*0x6b57cd*/
}


// ==== 0x006B57F0  SmudgeTypeClass::PowerDrainUpdate  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::_vt13(int this, int *a2)
{
  int v3; // ecx
  int v4; // edx

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6b57f9*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x6b5807*/
  LOBYTE(v3) = *(_BYTE *)(this + 672); /*0x6b580c*/
  Power::FlagProcess(a2, v3); /*0x6b5815*/
  LOBYTE(v4) = *(_BYTE *)(this + 673); /*0x6b581a*/
  Power::FlagProcess(a2, v4); /*0x6b5823*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x6b5831*/
  return Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x6b5844*/
}


// ==== 0x006B5850  SmudgeTypeClass::LoadTypeData  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::LoadTypeData(ObjectTypeClass *aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((IUnknown *)aP0, (ObjectTypeClass *)aP1); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( aP0 ) /*0x6b5866*/
    {
      ObjectTypeClass::Construct(aP0, (ObjectTypeClass *)&aP1); /*0x6b586f*/
      *(_DWORD *)aP0->__pad_0 = &SmudgeTypeClass::`vftable'; /*0x6b5874*/
      *(_DWORD *)&aP0->__pad_0[4] = &SmudgeTypeClass::`vftable'; /*0x6b587a*/
      *(_DWORD *)&aP0->__pad_0[8] = &SmudgeTypeClass::`vftable'; /*0x6b5881*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_SmudgeTypeClass; /*0x6b5888*/
    }
    VoxelAnimType::LoadAnim(aP0->__pad_0); /*0x6b5891*/
    ObjectTypeClass::Load2DArt(aP0->__pad_0); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/
}


// ==== 0x006B58B0  SmudgeTypeClass::SaveToINI  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::SaveToINI(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/
}


// ==== 0x006B58D0  SmudgeTypeClass::GetClassIdentifier  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = -1252326136; /*0x6b5900*/
  return 0; /*0x6b58dd*/
}


// ==== 0x006B5910  FactoryClass::FindOrCreate  this=ObjectTypeClass  sig=csp ====
SmudgeTypeClass *__thiscall FactoryClass::FindOrCreate(ObjectClass *Source)
{
  int v2; // esi
  char *v3; // eax

  if ( !_strcmpi(&stru_817460.sectionHead[1], Source) || !_strcmpi(g_Str_none, Source) ) /*0x6b592c*/
    return 0; /*0x6b598f*/
  v2 = 0; /*0x6b593d*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22900] <= 0 ) /*0x6b5941*/
  {
LABEL_6:
    v3 = (char *)__2_YAPAXI_Z(0x2A4u); /*0x6b5966*/
    if ( v3 ) /*0x6b5975*/
      return (SmudgeTypeClass *)SmudgeTypeClass::SmudgeTypeClass(v3, Source); /*0x6b5981*/
    return 0; /*0x6b5975*/
  }
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v2) + 36), Source) ) /*0x6b595a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[22900] ) /*0x6b5964*/
      goto LABEL_6; /*0x6b5964*/
  }
  return *(SmudgeTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v2); /*0x6b597f*/
}


// ==== 0x006B59A0  StandardCreateUnitAtCoords  this=-  sig=csp ====
char __fastcall StandardCreateUnitAtCoords(_DWORD *a0, IUnknown *aP1, int a3, char a4)
{
  IUnknown *v4; // ebp
  int v6; // edi
  SmudgeTypeClass *v7; // esi
  IUnknown *v8; // eax
  int v9; // ecx
  int v10; // edi
  IUnknown *v11; // edx
  IUnknown *v12; // eax
  int v13; // esi
  int v14; // edx
  CCINIClass *v15; // eax
  IUnknown *v16; // esi
  int v17; // eax
  void **v18; // esi
  int v19; // eax
  SmudgeClass *v20; // [esp+4h] [ebp-40h]
  SmudgeClass *v21; // [esp+8h] [ebp-3Ch] BYREF
  IUnknown *v22; // [esp+Ch] [ebp-38h]
  IUnknown *v23; // [esp+10h] [ebp-34h]
  void **v24; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  IUnknown *v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  CCINIClass *v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  void **v30; // [esp+2Ch] [ebp-18h] BYREF
  IUnknown *v31; // [esp+30h] [ebp-14h]
  int v32; // [esp+34h] [ebp-10h]
  char v33; // [esp+39h] [ebp-Bh]
  IUnknown *i; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  v4 = (IUnknown *)a0; /*0x6b59a4*/
  v22 = aP1; /*0x6b59a6*/
  v23 = (IUnknown *)a0; /*0x6b59aa*/
  if ( __PAIR32__(a0[1] / 256, *a0 / 256) == *(_DWORD *)&stru_B05488.__pad_579C[2916] ) /*0x6b59d5*/
    return 0; /*0x6b59e6*/
  Game::LockMutex(&v30, 0, 0); /*0x6b59f4*/
  v6 = 0; /*0x6b59fe*/
  v30 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5a02*/
  v35 = 10; /*0x6b5a0a*/
  for ( i = 0; v6 < *(int *)&HouseClass_Player.__pad_5568[22900]; ++v6 ) /*0x6b5a16*/
  {
    v7 = *(SmudgeTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v6); /*0x6b5a21*/
    if ( v7[1].__pad_0[1] ) /*0x6b5a24*/
    {
      LOWORD(v20) = v4->field_0 / 256; /*0x6b5a3f*/
      HIWORD(v20) = v4->field_4 / 256; /*0x6b5a57*/
      v21 = v20; /*0x6b5a64*/
      if ( Cell::IsWalkable((int *)v7->__pad_0, &v21, a4) ) /*0x6b5a6c*/
      {
        if ( (int)i < v32 /*0x6b5a9f*/
          || (v33 || !v32)
          && v35 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
        {
          v8 = i; /*0x6b5aaa*/
          i = (IUnknown *)((char *)i + 1); /*0x6b5aad*/
          *(&v31->field_0 + (_DWORD)v8) = (int)v7; /*0x6b5ab5*/
        }
      }
    }
  }
  Game::LockMutex(&v24, 0, 0); /*0x6b5acc*/
  v9 = 10; /*0x6b5ad1*/
  v10 = 0; /*0x6b5ad6*/
  v11 = i; /*0x6b5ad8*/
  v24 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5adc*/
  v29 = 10; /*0x6b5ae6*/
  v28 = 0; /*0x6b5aea*/
  if ( (int)i > 0 ) /*0x6b5aee*/
  {
    v12 = v26; /*0x6b5af4*/
    while ( 1 ) /*0x6b5b01*/
    {
      v13 = *(&v31->field_0 + v10); /*0x6b5b01*/
      v14 = *(_DWORD *)(v13 + 664); /*0x6b5b0a*/
      if ( !a4 ) /*0x6b5b10*/
        break; /*0x6b5b10*/
      if ( v14 <= 1 || *(int *)(v13 + 668) <= 1 ) /*0x6b5b5f*/
        goto LABEL_35; /*0x6b5b5f*/
      if ( (int)v28 < (int)v12 ) /*0x6b5b65*/
        goto LABEL_33; /*0x6b5b65*/
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b73*/
        goto LABEL_35; /*0x6b5b73*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5b81*/
        goto LABEL_33; /*0x6b5b86*/
LABEL_34:
      v12 = v26; /*0x6b5b9a*/
      v9 = v29; /*0x6b5b9e*/
LABEL_35:
      v11 = i; /*0x6b5ba2*/
      if ( ++v10 >= (int)i ) /*0x6b5ba9*/
      {
        v4 = v23; /*0x6b5baf*/
        goto LABEL_37; /*0x6b5baf*/
      }
    }
    if ( (v14 != 1 || *(_DWORD *)(v13 + 668) != 1) && ((int)v22 <= 60 || a3 <= 50) ) /*0x6b5b2a*/
      goto LABEL_35; /*0x6b5b2a*/
    if ( (int)v28 >= (int)v12 ) /*0x6b5b30*/
    {
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b3e*/
        goto LABEL_35; /*0x6b5b3e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5b51*/
        goto LABEL_34; /*0x6b5b51*/
    }
LABEL_33:
    v15 = v28; /*0x6b5b88*/
    v28 = (CCINIClass *)((char *)v28 + 1); /*0x6b5b8f*/
    *((_DWORD *)Block + (_DWORD)v15) = v13; /*0x6b5b97*/
    goto LABEL_34; /*0x6b5b97*/
  }
LABEL_37:
  if ( (int)v28 <= 0 ) /*0x6b5bb7*/
  {
    if ( (int)v11 > 0 ) /*0x6b5bf2*/
    {
      v18 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b5bfe*/
      if ( v18 ) /*0x6b5c05*/
      {
        v19 = Random::Range( /*0x6b5c1a*/
                (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                0,
                (IUnknown *)((char *)i - 1));
        UnitClass::Create(v18, *((AbstractClass **)&v31->field_0 + v19), (AbstractClass *)v4, -1); /*0x6b5c2c*/
      }
    }
  }
  else
  {
    v16 = (IUnknown *)__2_YAPAXI_Z(0xB0u); /*0x6b5bc3*/
    if ( v16 ) /*0x6b5bca*/
    {
      v17 = Random::Range( /*0x6b5bde*/
              (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
              0,
              (IUnknown *)((char *)&v28[-1].unknown54 + 3));
      UnitClass::Create((void **)v16, *((AbstractClass **)Block + v17), (AbstractClass *)v4, -1); /*0x6b5bee*/
    }
  }
  v24 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5c3c*/
  if ( Block && BYTE1(v27) ) /*0x6b5c46*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5c49*/
    Block = 0; /*0x6b5c51*/
  }
  BYTE1(v27) = 0; /*0x6b5c59*/
  v26 = 0; /*0x6b5c5f*/
  v30 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5c63*/
  if ( v31 ) /*0x6b5c67*/
  {
    if ( v33 ) /*0x6b5c6d*/
      __3_YAXPAX_Z(v31); /*0x6b5c70*/
  }
  return 0; /*0x6b59e2*/
}


// ==== 0x006B5C90  TimedCreateUnitAtCoords  this=-  sig=csp ====
char __fastcall TimedCreateUnitAtCoords(_DWORD *a0, IUnknown *aP1, int a3, char a4)
{
  IUnknown *v4; // ebp
  int v6; // edi
  SmudgeTypeClass *v7; // esi
  IUnknown *v8; // eax
  int v9; // ecx
  int v10; // edi
  IUnknown *v11; // edx
  IUnknown *v12; // eax
  int v13; // esi
  int v14; // edx
  CCINIClass *v15; // eax
  IUnknown *v16; // esi
  int v17; // eax
  void **v18; // esi
  int v19; // eax
  SmudgeClass *v20; // [esp+4h] [ebp-40h]
  SmudgeClass *v21; // [esp+8h] [ebp-3Ch] BYREF
  IUnknown *v22; // [esp+Ch] [ebp-38h]
  IUnknown *v23; // [esp+10h] [ebp-34h]
  void **v24; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  IUnknown *v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  CCINIClass *v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  void **v30; // [esp+2Ch] [ebp-18h] BYREF
  IUnknown *v31; // [esp+30h] [ebp-14h]
  int v32; // [esp+34h] [ebp-10h]
  char v33; // [esp+39h] [ebp-Bh]
  IUnknown *i; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  v4 = (IUnknown *)a0; /*0x6b5c94*/
  v22 = aP1; /*0x6b5c96*/
  v23 = (IUnknown *)a0; /*0x6b5c9a*/
  if ( __PAIR32__(a0[1] / 256, *a0 / 256) == *(_DWORD *)&stru_B05488.__pad_579C[2916] ) /*0x6b5cc5*/
    return 0; /*0x6b5cd6*/
  Game::LockMutex(&v30, 0, 0); /*0x6b5ce4*/
  v6 = 0; /*0x6b5cee*/
  v30 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5cf2*/
  v35 = 10; /*0x6b5cfa*/
  for ( i = 0; v6 < *(int *)&HouseClass_Player.__pad_5568[22900]; ++v6 ) /*0x6b5d06*/
  {
    v7 = *(SmudgeTypeClass **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v6); /*0x6b5d11*/
    if ( v7[1].__pad_0[0] ) /*0x6b5d14*/
    {
      LOWORD(v20) = v4->field_0 / 256; /*0x6b5d2f*/
      HIWORD(v20) = v4->field_4 / 256; /*0x6b5d47*/
      v21 = v20; /*0x6b5d54*/
      if ( Cell::IsWalkable((int *)v7->__pad_0, &v21, a4) ) /*0x6b5d5c*/
      {
        if ( (int)i < v32 /*0x6b5d8f*/
          || (v33 || !v32)
          && v35 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
        {
          v8 = i; /*0x6b5d9a*/
          i = (IUnknown *)((char *)i + 1); /*0x6b5d9d*/
          *(&v31->field_0 + (_DWORD)v8) = (int)v7; /*0x6b5da5*/
        }
      }
    }
  }
  Game::LockMutex(&v24, 0, 0); /*0x6b5dbc*/
  v9 = 10; /*0x6b5dc1*/
  v10 = 0; /*0x6b5dc6*/
  v11 = i; /*0x6b5dc8*/
  v24 = &vt_DynamicVectorClass_SmudgeTypeClass_const; /*0x6b5dcc*/
  v29 = 10; /*0x6b5dd6*/
  v28 = 0; /*0x6b5dda*/
  if ( (int)i > 0 ) /*0x6b5dde*/
  {
    v12 = v26; /*0x6b5de4*/
    while ( 1 ) /*0x6b5df1*/
    {
      v13 = *(&v31->field_0 + v10); /*0x6b5df1*/
      v14 = *(_DWORD *)(v13 + 664); /*0x6b5dfa*/
      if ( !a4 ) /*0x6b5e00*/
        break; /*0x6b5e00*/
      if ( v14 <= 1 || *(int *)(v13 + 668) <= 1 ) /*0x6b5e4f*/
        goto LABEL_35; /*0x6b5e4f*/
      if ( (int)v28 < (int)v12 ) /*0x6b5e55*/
        goto LABEL_33; /*0x6b5e55*/
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5e63*/
        goto LABEL_35; /*0x6b5e63*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5e71*/
        goto LABEL_33; /*0x6b5e76*/
LABEL_34:
      v12 = v26; /*0x6b5e8a*/
      v9 = v29; /*0x6b5e8e*/
LABEL_35:
      v11 = i; /*0x6b5e92*/
      if ( ++v10 >= (int)i ) /*0x6b5e99*/
      {
        v4 = v23; /*0x6b5e9f*/
        goto LABEL_37; /*0x6b5e9f*/
      }
    }
    if ( (v14 != 1 || *(_DWORD *)(v13 + 668) != 1) && ((int)v22 <= 60 || a3 <= 50) ) /*0x6b5e1a*/
      goto LABEL_35; /*0x6b5e1a*/
    if ( (int)v28 >= (int)v12 ) /*0x6b5e20*/
    {
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5e2e*/
        goto LABEL_35; /*0x6b5e2e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v24[2])(&v24, (char *)v12 + v9, 0) ) /*0x6b5e41*/
        goto LABEL_34; /*0x6b5e41*/
    }
LABEL_33:
    v15 = v28; /*0x6b5e78*/
    v28 = (CCINIClass *)((char *)v28 + 1); /*0x6b5e7f*/
    *((_DWORD *)Block + (_DWORD)v15) = v13; /*0x6b5e87*/
    goto LABEL_34; /*0x6b5e87*/
  }
LABEL_37:
  if ( (int)v28 <= 0 ) /*0x6b5ea7*/
  {
    if ( (int)v11 > 0 ) /*0x6b5ee2*/
    {
      v18 = (void **)__2_YAPAXI_Z(0xB0u); /*0x6b5eee*/
      if ( v18 ) /*0x6b5ef5*/
      {
        v19 = Random::Range( /*0x6b5f0a*/
                (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                0,
                (IUnknown *)((char *)i - 1));
        UnitClass::Create(v18, *((AbstractClass **)&v31->field_0 + v19), (AbstractClass *)v4, -1); /*0x6b5f1c*/
      }
    }
  }
  else
  {
    v16 = (IUnknown *)__2_YAPAXI_Z(0xB0u); /*0x6b5eb3*/
    if ( v16 ) /*0x6b5eba*/
    {
      v17 = Random::Range( /*0x6b5ece*/
              (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
              0,
              (IUnknown *)((char *)&v28[-1].unknown54 + 3));
      UnitClass::Create((void **)v16, *((AbstractClass **)Block + v17), (AbstractClass *)v4, -1); /*0x6b5ede*/
    }
  }
  v24 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5f2c*/
  if ( Block && BYTE1(v27) ) /*0x6b5f36*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5f39*/
    Block = 0; /*0x6b5f41*/
  }
  BYTE1(v27) = 0; /*0x6b5f49*/
  v26 = 0; /*0x6b5f4f*/
  v30 = &vt_VectorClass_SmudgeTypeClass_const; /*0x6b5f53*/
  if ( v31 ) /*0x6b5f57*/
  {
    if ( v33 ) /*0x6b5f5d*/
      __3_YAXPAX_Z(v31); /*0x6b5f60*/
  }
  return 0; /*0x6b5cd2*/
}


// ==== 0x006B5F80  Cell::IsWalkable  this=SmudgeTypeClass  sig=csp ====
char __thiscall Cell_IsWalkable(int *this, _WORD *a2, char a3)
{
  int v3; // ebx
  int v5; // ebp
  _DWORD *v6; // esi
  int v7; // esi
  int *v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h] BYREF
  int v11; // [esp+1Ch] [ebp+4h]

  v3 = 0; /*0x6b5f8b*/
  v9 = this; /*0x6b5f91*/
  if ( this->Crater <= 0 ) /*0x6b5f95*/
    return 1; /*0x6b6060*/
  while ( 1 ) /*0x6b5fa5*/
  {
    v5 = 0; /*0x6b5fa5*/
    if ( this->Height > 0 ) /*0x6b5fa9*/
      break; /*0x6b5fa9*/
LABEL_15:
    if ( ++v3 >= this->Crater ) /*0x6b605a*/
      return 1; /*0x6b605a*/
  }
  while ( 1 ) /*0x6b5fbc*/
  {
    LOWORD(v11) = v5 + *a2; /*0x6b5fbc*/
    HIWORD(v11) = v3 + a2[1]; /*0x6b5fc1*/
    v10 = v11; /*0x6b5fd4*/
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x6b5fe3*/
    if ( !(unsigned __int8)LayerClass::CoordinatesLegal(a2) /*0x6b6011*/
      || *((_BYTE *)v6 + 284)
      || v6[18] != -1
      || v6[17] != -1
      || !a3 && Cell::IsBridge(v6) )
    {
      return 0; /*0x6b6060*/
    }
    v7 = v6[14]; /*0x6b601a*/
    if ( v7 < 0 || v7 >= MEMORY[0xA8ED38] ) /*0x6b6027*/
      v7 = 0; /*0x6b6029*/
    if ( !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v7) + 736) ) /*0x6b6034*/
      return 0; /*0x6b6060*/
    if ( ++v5 >= v9[166] ) /*0x6b6049*/
    {
      this = v9; /*0x6b604f*/
      goto LABEL_15; /*0x6b604f*/
    }
  }
}


// ==== 0x006B6080  UnitClass::CreateUnloadPlacementCraters  this=SmudgeTypeClass  sig=csp ====
int __thiscall sub_6B6080(int this, _WORD *a2)
{
  int result; // eax
  int i; // ebx
  _DWORD *v6; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h] BYREF
  int v9; // [esp+10h] [ebp+4h]

  v7 = 0; /*0x6b6086*/
  result = *(_DWORD *)(this + 668); /*0x6b608e*/
  if ( result > 0 ) /*0x6b6096*/
  {
    do /*0x6b611c*/
    {
      for ( i = 0; i < *(_DWORD *)(this + 664); ++i ) /*0x6b60ac*/
      {
        LOWORD(v9) = i + *a2; /*0x6b60bd*/
        HIWORD(v9) = v7 + a2[1]; /*0x6b60c6*/
        v8 = v9; /*0x6b60d5*/
        v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v8); /*0x6b60d9*/
        v6[18] = *(_DWORD *)(this + 660); /*0x6b60ea*/
        *((_BYTE *)v6 + 287) = i + *(_BYTE *)(this + 664) * v7; /*0x6b60f5*/
        BuildingClass::CreatePlacementCrater(v6); /*0x6b60fb*/
      }
      result = ++v7; /*0x6b6115*/
    }
    while ( v7 < *(_DWORD *)(this + 668) ); /*0x6b611c*/
  }
  return result; /*0x6b6120*/
}


// ==== 0x006B6130  SmudgeTypeClass::GetTypeIdentifier  this=SmudgeTypeClass  sig=csp ====
int SmudgeTypeClass::_vt11()
{
  return 30; /*0x6b6135*/
}


// ==== 0x006B6140  SmudgeTypeClass::GetObjectSize  this=SmudgeTypeClass  sig=csp ====
int SmudgeTypeClass::_vt12()
{
  return 676; /*0x6b6145*/
}


// ==== 0x006B6150  SmudgeTypeClass::GetAuxField  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::_vt16(_DWORD *this)
{
  return this->Width; /*0x6b6156*/
}


// ==== 0x006B6160  SmudgeTypeClass::ddtor  this=SmudgeTypeClass  sig=csp ====
SmudgeTypeClass *__fastcall SmudgeTypeClass::ddtor(void **this, AbstractClass *a2, char a3)
{
  CCINIClass *v3; // eax
  int v5; // eax
  void **v7; // [esp+4h] [ebp-4h] BYREF

  v3 = (CCINIClass *)this->Image; /*0x6b6164*/
  *this = &SmudgeTypeClass::`vftable'; /*0x6b616a*/
  this->vtable2 = &SmudgeTypeClass::`vftable'; /*0x6b6172*/
  this->vtable3 = &SmudgeTypeClass::`vftable'; /*0x6b6179*/
  this->vtable4 = &vt_SmudgeTypeClass; /*0x6b6180*/
  if ( v3 ) /*0x6b6187*/
  {
    OperatorDelete(v3); /*0x6b618a*/
    this->Image = 0; /*0x6b6192*/
  }
  LOBYTE(a2) = 1; /*0x6b619c*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, a2); /*0x6b61a0*/
  v7 = this; /*0x6b61b5*/
  v5 = (*(int (__thiscall **)(char *, void ***))(*(_DWORD *)&HouseClass_Player.__pad_5568[22884] + 16))( /*0x6b61b9*/
         &HouseClass_Player.__pad_5568[22884],
         &v7);
  if ( v5 != -1 && v5 < *(int *)&HouseClass_Player.__pad_5568[22900] ) /*0x6b61c9*/
  {
    --*(_DWORD *)&HouseClass_Player.__pad_5568[22900]; /*0x6b61ce*/
    for ( ; /*0x6b61d4*/
          v5 < *(int *)&HouseClass_Player.__pad_5568[22900];
          *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888] + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[22888]
                                                                                                + 4 * v5) )
    {
      ++v5; /*0x6b61dc*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x6b61f0*/
  if ( (a3 & 1) != 0 ) /*0x6b61fa*/
    OperatorDelete(this); /*0x6b61fd*/
  return (SmudgeTypeClass *)this; /*0x6b6207*/
}


// ==== 0x006B6210  sub_6B6210  this=-  sig=ida-proto ====
int sub_6B6210()
{
  MEMORY[0xB0B7F0] = 0; /*0x6b6212*/
  MEMORY[0xB0B7F4] = 0; /*0x6b6217*/
  MEMORY[0xB0B7F8] = 0; /*0x6b621c*/
  MEMORY[0xB0B7FC] = 0; /*0x6b6221*/
  return 0; /*0x6b6226*/
}


// ==== 0x006B6230  ShowAudioSettingsDialog  this=-  sig=ida-proto ====
void sub_6B6230()
{
  unsigned __int16 v0; // cx
  HWND Dialog; // esi
  int v2; // ecx
  LONG dwNewLong; // [esp+0h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x6b624f*/
  Debug::Log(); /*0x6b6253*/
  MEMORY[0xB0B800] = 0; /*0x6b6262*/
  v0 = 214; /*0x6b6270*/
  if ( MEMORY[0xA8E9A0] ) /*0x6b6275*/
    v0 = 184; /*0x6b6277*/
  Dialog = (HWND)CreateDialog(v0, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))AudioSettings::DlgProc, 0); /*0x6b6281*/
  if ( Dialog ) /*0x6b6285*/
  {
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x6b628f*/
    Dialog::Show(Dialog); /*0x6b6297*/
    while ( dwNewLong == -1 ) /*0x6b62a0*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x6b62a9*/
        dwNewLong = 2; /*0x6b62ab*/
      if ( !MEMORY[0xA8E9A0] ) /*0x6b62ba*/
      {
        LOBYTE(v2) = 0; /*0x6b62bc*/
        ScreenSaver::Process(v2); /*0x6b62be*/
      }
    }
    Dialog::Destroy(Dialog); /*0x6b62cb*/
  }
  Debug::Log(); /*0x6b62e9*/
}


// ==== 0x006B6300  AudioSettings::DlgProc  this=AudioSettings  sig=csp ====
int __stdcall sub_6B6300(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
  int result; // eax
  BOOL IsSoundEnabled; // ebx
  HWND DlgItem; // eax
  HWND v7; // edi
  LPARAM v8; // eax
  void (__stdcall *v9)(HWND, BOOL); // ebp
  HWND v10; // eax
  HWND v11; // edi
  LPARAM v12; // eax
  HWND v13; // eax
  HWND v14; // edi
  LPARAM v15; // eax
  HWND v16; // edi
  HWND v17; // edi
  HWND v18; // eax
  HWND v19; // ebx
  WPARAM v20; // edi
  int v21; // ebp
  int v22; // edi
  LRESULT v23; // eax
  LRESULT v24; // edi
  int v25; // eax
  LRESULT v26; // eax
  HWND v27; // eax
  HWND v28; // esi
  LRESULT v29; // eax
  LRESULT v30; // esi
  int v31; // eax
  LRESULT v32; // eax
  HWND v33; // eax
  int v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  float v37; // [esp+0h] [ebp-F0h]
  float v38; // [esp+0h] [ebp-F0h]
  float v39; // [esp+0h] [ebp-F0h]
  float v40; // [esp+0h] [ebp-F0h]
  float v41; // [esp+0h] [ebp-F0h]
  float v42; // [esp+0h] [ebp-F0h]
  BOOL bEnable; // [esp+18h] [ebp-D8h]
  WPARAM v44; // [esp+1Ch] [ebp-D4h]
  int Format; // [esp+20h] [ebp-D0h]
  int v46; // [esp+24h] [ebp-CCh]
  wchar_t lParam[100]; // [esp+28h] [ebp-C8h] BYREF

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)hWnd); /*0x6b632c*/
  if ( result ) /*0x6b6333*/
    return result; /*0x6b6333*/
  if ( a2 != 273 ) /*0x6b633f*/
  {
    if ( a2 == 276 ) /*0x6b6348*/
    {
      if ( MEMORY[0xB0B800] ) /*0x6b6636*/
      {
        if ( hWnd == GetDlgItem(hDlg, 1327) ) /*0x6b664c*/
        {
          v37 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b6674*/
          Options::SetScoreVolume((float *)MEMORY[0xA8EB60], v37, 1); /*0x6b6677*/
          return 0; /*0x6b6688*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1330) ) /*0x6b6695*/
        {
          v38 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b66bd*/
          Options::SetSoundVolume((float *)MEMORY[0xA8EB60], v38, 1); /*0x6b66c0*/
          return 0; /*0x6b66d1*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1334) ) /*0x6b66de*/
        {
          v39 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b670a*/
          Options::SetVoiceVolume((float *)MEMORY[0xA8EB60], v39, 1); /*0x6b670d*/
          return 0; /*0x6b671e*/
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6b6354*/
    {
      MEMORY[0xB0B800] = 0; /*0x6b635a*/
      IsSoundEnabled = Audio::IsSoundEnabled(); /*0x6b6364*/
      bEnable = IsSoundEnabled; /*0x6b636c*/
      DlgItem = GetDlgItem(hDlg, 1327); /*0x6b6370*/
      v7 = DlgItem; /*0x6b637c*/
      if ( DlgItem ) /*0x6b6380*/
      {
        SendMessageA(DlgItem, 0x4AEu, 0, 0); /*0x6b638c*/
        SendMessageA(v7, 0x406u, 1u, 655360); /*0x6b639b*/
        v8 = Math::RoundToInt(MEMORY[0xA8EBA0] * 10.0 + 0.5); /*0x6b63af*/
        SendMessageA(v7, 0x405u, 1u, v8); /*0x6b63bd*/
        v9 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x6b63bf*/
        EnableWindow(v7, IsSoundEnabled); /*0x6b63c7*/
      }
      else
      {
        v9 = (void (__stdcall *)(HWND, BOOL))EnableWindow; /*0x6b63cb*/
      }
      v10 = GetDlgItem(hDlg, 1330); /*0x6b63de*/
      v11 = v10; /*0x6b63e4*/
      if ( v10 ) /*0x6b63e8*/
      {
        SendMessageA(v10, 0x4AEu, 0, 0); /*0x6b63f4*/
        SendMessageA(v11, 0x406u, 1u, 655360); /*0x6b6403*/
        v12 = Math::RoundToInt(MEMORY[0xA8EB98] * 10.0 + 0.5); /*0x6b6417*/
        SendMessageA(v11, 0x405u, 1u, v12); /*0x6b6425*/
        v9(v11, IsSoundEnabled); /*0x6b6429*/
      }
      v13 = GetDlgItem(hDlg, 1334); /*0x6b6438*/
      v14 = v13; /*0x6b643e*/
      if ( v13 ) /*0x6b6442*/
      {
        SendMessageA(v13, 0x4AEu, 0, 0); /*0x6b644e*/
        SendMessageA(v14, 0x406u, 1u, 655360); /*0x6b645d*/
        v15 = Math::RoundToInt(*(float *)&MEMORY[0xA8EB9C] * 10.0 + 0.5); /*0x6b6471*/
        SendMessageA(v14, 0x405u, 1u, v15); /*0x6b647f*/
        v9(v14, IsSoundEnabled); /*0x6b6483*/
      }
      if ( MEMORY[0xA8E9A0] ) /*0x6b648c*/
      {
        v16 = GetDlgItem(hDlg, 1331); /*0x6b64a5*/
        if ( v16 ) /*0x6b64a9*/
        {
          SendMessageA(v16, 0xF1u, MEMORY[0xA8EBA6] != 0, 0); /*0x6b64c1*/
          v9(v16, IsSoundEnabled); /*0x6b64c5*/
        }
        v17 = GetDlgItem(hDlg, 1332); /*0x6b64da*/
        if ( v17 ) /*0x6b64de*/
        {
          SendMessageA(v17, 0xF1u, MEMORY[0xA8EBA4] != 0, 0); /*0x6b64f5*/
          v9(v17, IsSoundEnabled); /*0x6b64f9*/
        }
        v18 = GetDlgItem(hDlg, 1328); /*0x6b6508*/
        v19 = v18; /*0x6b650e*/
        if ( v18 ) /*0x6b6512*/
        {
          v20 = 0; /*0x6b6518*/
          Format = 1; /*0x6b651a*/
          v44 = 0; /*0x6b652a*/
          SendMessageA(v18, 0x184u, 0, 0); /*0x6b652e*/
          v21 = 0; /*0x6b6535*/
          if ( dword_A83D34 > 0 ) /*0x6b6539*/
          {
            do /*0x6b65ed*/
            {
              if ( RulesClass::IsTypeBuildable(&g_BuildingTypeClass_Count, v21) ) /*0x6b6545*/
              {
                v22 = AudioSettings::ComputeTransform(v21); /*0x6b6563*/
                v46 = AudioSettings::Check(v21); /*0x6b656f*/
                swprintf( /*0x6b65a1*/
                  lParam,
                  (const size_t)MEMORY[0x840070],
                  (const wchar_t *const)Format++,
                  v46,
                  v22 / 60,
                  v22 % 60);
                v23 = SendMessageA(v19, 0x4CDu, 0, (LPARAM)lParam); /*0x6b65bb*/
                v24 = v23; /*0x6b65bd*/
                if ( v23 != -1 ) /*0x6b65c2*/
                {
                  SendMessageA(v19, 0x19Au, v23, v21); /*0x6b65cc*/
                  v25 = dword_A83D14; /*0x6b65ce*/
                  if ( dword_A83D14 == -1 ) /*0x6b65d6*/
                    v25 = dword_A83D18; /*0x6b65d8*/
                  if ( v25 == v21 ) /*0x6b65df*/
                    v44 = v24; /*0x6b65e1*/
                }
              }
              ++v21; /*0x6b65ea*/
            }
            while ( v21 < dword_A83D34 ); /*0x6b65ed*/
            v20 = v44; /*0x6b65f3*/
          }
          SendMessageA(v19, 0x186u, v20, 0); /*0x6b6600*/
          SendMessageA(v19, 0x197u, v20, 0); /*0x6b660b*/
          EnableWindow(v19, bEnable); /*0x6b6613*/
        }
      }
      MEMORY[0xB0B800] = 1; /*0x6b661c*/
      return 0; /*0x6b662c*/
    }
    return 0; /*0x6b6354*/
  }
  if ( (unsigned __int16)a3 <= 0x534u ) /*0x6b672d*/
  {
    switch ( (unsigned __int16)a3 ) /*0x6b6733*/
    {
      case 0x534u: /*0x6b6733*/
        v32 = SendMessageA(hWnd, 0xF0u, 0, 0); /*0x6b684c*/
        AudioSettings::SetFlag68(v32 == 1); /*0x6b685a*/
        if ( SendMessageA(hWnd, 0xF0u, 0, 0) == 1 ) /*0x6b686e*/
        {
          SendDlgItemMessageA(hDlg, 1331, 0xF1u, 0, 0); /*0x6b6883*/
          AudioSettings::SetFlag70(0); /*0x6b6890*/
          return 0; /*0x6b68a1*/
        }
        break;
      case 0x531u: /*0x6b6733*/
        if ( !HIWORD(a3) ) /*0x6b67b1*/
        {
          v27 = GetDlgItem(hDlg, 1328); /*0x6b67c0*/
          v28 = v27; /*0x6b67c6*/
          if ( v27 ) /*0x6b67ca*/
          {
            v29 = SendMessageA(v27, 0x188u, 0, 0); /*0x6b67e0*/
            if ( v29 != -1 ) /*0x6b67e5*/
            {
              v30 = SendMessageA(v28, 0x199u, v29, 0); /*0x6b67f6*/
              v31 = dword_A83D14; /*0x6b67f8*/
              MEMORY[0xA8EBA5] = 1; /*0x6b6800*/
              if ( dword_A83D14 == -1 ) /*0x6b6807*/
                v31 = dword_A83D18; /*0x6b6809*/
              if ( v31 != v30 ) /*0x6b6810*/
              {
                Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6b681d*/
                Theme::QueueSong((int)&g_BuildingTypeClass_Count, v30); /*0x6b6828*/
                return 0; /*0x6b6839*/
              }
            }
          }
        }
        break;
      case 0x533u: /*0x6b6733*/
        v26 = SendMessageA(hWnd, 0xF0u, 0, 0); /*0x6b6759*/
        AudioSettings::SetFlag70(v26 == 1); /*0x6b6767*/
        if ( SendMessageA(hWnd, 0xF0u, 0, 0) == 1 ) /*0x6b677b*/
        {
          SendDlgItemMessageA(hDlg, 1332, 0xF1u, 0, 0); /*0x6b6790*/
          AudioSettings::SetFlag68(0); /*0x6b679d*/
          return 0; /*0x6b67ae*/
        }
        break;
    }
    return 0; /*0x6b677b*/
  }
  if ( (unsigned __int16)a3 == 1333 ) /*0x6b68a9*/
  {
    if ( !HIWORD(a3) ) /*0x6b69c8*/
    {
      Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x6b69d4*/
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, -3); /*0x6b69e0*/
      MEMORY[0xA8EBA5] = 0; /*0x6b69e5*/
    }
    return 0; /*0x6b69e5*/
  }
  if ( (unsigned __int16)a3 != 1670 || HIWORD(a3) ) /*0x6b68ba*/
    return 0; /*0x6b69ec*/
  v33 = GetDlgItem(hDlg, 1327); /*0x6b68cf*/
  if ( v33 ) /*0x6b68d9*/
  {
    v40 = (double)SendMessageA(v33, 0x400u, 0, 0) * 0.1; /*0x6b68fd*/
    Options::SetScoreVolume((float *)MEMORY[0xA8EB60], v40, 0); /*0x6b6900*/
    if ( MEMORY[0xA8EBA0] == 0.0 ) /*0x6b6916*/
    {
      v34 = dword_A83D14; /*0x6b6918*/
      if ( dword_A83D14 == -1 ) /*0x6b6920*/
        v34 = dword_A83D18; /*0x6b6922*/
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, v34); /*0x6b692d*/
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x6b6939*/
    }
  }
  v35 = GetDlgItem(hDlg, 1330); /*0x6b6944*/
  if ( v35 ) /*0x6b6948*/
  {
    v41 = (double)SendMessageA(v35, 0x400u, 0, 0) * 0.1; /*0x6b696c*/
    Options::SetSoundVolume((float *)MEMORY[0xA8EB60], v41, 0); /*0x6b696f*/
  }
  v36 = GetDlgItem(hDlg, 1334); /*0x6b697a*/
  if ( v36 ) /*0x6b697e*/
  {
    v42 = (double)SendMessageA(v36, 0x400u, 0, 0) * 0.1; /*0x6b69a2*/
    Options::SetVoiceVolume((float *)MEMORY[0xA8EB60], v42, 0); /*0x6b69a5*/
  }
  *(_DWORD *)GetWindowLongA(hDlg, 8) = 1; /*0x6b69b5*/
  return 0; /*0x6b6619*/
}


// ==== 0x006B6A00  sub_6B6A00  this=-  sig=ida-proto ====
void sub_6B6A00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b6a0c*/
  MEMORY[0xB0B828] = Math::Sqrt(v0 + v0); /*0x6b6a1e*/
}


// ==== 0x006B6A30  sub_6B6A30  this=-  sig=ida-proto ====
void sub_6B6A30()
{
  MEMORY[0xB0B878] = MEMORY[0xB0B828] / 60.0; /*0x6b6a3c*/
}


// ==== 0x006B6A50  sub_6B6A50  this=-  sig=ida-proto ====
void sub_6B6A50()
{
  MEMORY[0xB0B860] = 1.0 / MEMORY[0xB0B878]; /*0x6b6a5c*/
}


// ==== 0x006B6A70  sub_6B6A70  this=-  sig=ida-proto ====
void sub_6B6A70()
{
  MEMORY[0xB0B858] = 0.0174532925199433 * 45.0; /*0x6b6a7c*/
}


// ==== 0x006B6A90  sub_6B6A90  this=-  sig=ida-proto ====
void sub_6B6A90()
{
  MEMORY[0xB0B830] = 0.0174532925199433 * 60.0; /*0x6b6a9c*/
}


// ==== 0x006B6AB0  sub_6B6AB0  this=-  sig=ida-proto ====
void sub_6B6AB0()
{
  MEMORY[0xB0B808] = 0.0174532925199433 * 90.0; /*0x6b6abc*/
}


// ==== 0x006B6AD0  sub_6B6AD0  this=-  sig=ida-proto ====
__int64 sub_6B6AD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0B808] - MEMORY[0xB0B830]); /*0x6b6ae2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0B828] * 0.5); /*0x6b6af6*/
  MEMORY[0xB0B898] = result; /*0x6b6afb*/
  return result; /*0x6b6b00*/
}


// ==== 0x006B6B10  sub_6B6B10  this=-  sig=ida-proto ====
void sub_6B6B10()
{
  MEMORY[0xB0B838] = Math::ArcTan((double)MEMORY[0xB0B898] * 0.00390625); /*0x6b6b27*/
}


// ==== 0x006B6B40  sub_6B6B40  this=-  sig=ida-proto ====
void sub_6B6B40()
{
  MEMORY[0xB0B850] = Math::ArcTan((double)(2 * MEMORY[0xB0B898]) / MEMORY[0xB0B828]); /*0x6b6b62*/
}


// ==== 0x006B6B70  sub_6B6B70  this=-  sig=ida-proto ====
__int64 sub_6B6B70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B898]) + 0.5); /*0x6b6b8b*/
  MEMORY[0xB0B874] = result; /*0x6b6b90*/
  return result; /*0x6b6b96*/
}


// ==== 0x006B6BA0  sub_6B6BA0  this=-  sig=ida-proto ====
int sub_6B6BA0()
{
  MEMORY[0xB0B820] = 0; /*0x6b6ba2*/
  MEMORY[0xB0B822] = 0; /*0x6b6ba8*/
  return 0; /*0x6b6bae*/
}


// ==== 0x006B6BB0  sub_6B6BB0  this=-  sig=ida-proto ====
int sub_6B6BB0()
{
  MEMORY[0xB0B840] = 0; /*0x6b6bb2*/
  MEMORY[0xB0B844] = 0; /*0x6b6bb7*/
  MEMORY[0xB0B848] = 0; /*0x6b6bbc*/
  return 0; /*0x6b6bc1*/
}


// ==== 0x006B6BD0  sub_6B6BD0  this=-  sig=ida-proto ====
int sub_6B6BD0()
{
  MEMORY[0xB0B870] = 0; /*0x6b6bd5*/
  MEMORY[0xB0B868] = 128; /*0x6b6bdf*/
  MEMORY[0xB0B86C] = 128; /*0x6b6be4*/
  return 128; /*0x6b6be9*/
}


// ==== 0x006B6BF0  sub_6B6BF0  this=-  sig=ida-proto ====
int sub_6B6BF0()
{
  MEMORY[0xB0B810] = 0; /*0x6b6bf2*/
  MEMORY[0xB0B814] = 0; /*0x6b6bf7*/
  MEMORY[0xB0B818] = 0; /*0x6b6bfc*/
  MEMORY[0xB0B81C] = 0; /*0x6b6c01*/
  return 0; /*0x6b6c06*/
}


// ==== 0x006B6C10  sub_6B6C10  this=-  sig=ida-proto ====
int sub_6B6C10()
{
  MEMORY[0xB0B884] = 0; /*0x6b6c17*/
  MEMORY[0xB0B888] = 0; /*0x6b6c1c*/
  MEMORY[0xB0B88C] = 1; /*0x6b6c21*/
  MEMORY[0xB0B88D] = 0; /*0x6b6c28*/
  MEMORY[0xB0B880] = (int)&vt_DynamicVectorClass_SpawnManagerClass; /*0x6b6c2d*/
  MEMORY[0xB0B894] = 10; /*0x6b6c37*/
  MEMORY[0xB0B890] = 0; /*0x6b6c41*/
  return atexit(sub_6B6C50); /*0x6b6c4c*/
}


// ==== 0x006B6C50  sub_6B6C50  this=-  sig=ida-proto ====
void __cdecl sub_6B6C50()
{
  MEMORY[0xB0B880] = (int)&vt_VectorClass_SpawnManagerClass; /*0x6b6c58*/
  if ( MEMORY[0xB0B884] && MEMORY[0xB0B88D] ) /*0x6b6c6c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0B884]); /*0x6b6c6f*/
    MEMORY[0xB0B884] = 0; /*0x6b6c77*/
  }
  MEMORY[0xB0B88D] = 0; /*0x6b6c7d*/
  MEMORY[0xB0B888] = 0; /*0x6b6c83*/
}


// ==== 0x006B6C90  SpawnManagerClass::SpawnManagerClass  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::Construct(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int *v8; // ebp
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v20; // [esp+14h] [ebp-8h]
  int i; // [esp+20h] [ebp+4h]

  AbstractClass::Constructor((#373 *)this); /*0x6b6c99*/
  SpawnControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6b6ca7*/
  *(_DWORD *)(this + 56) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
  *(_DWORD *)(this + 76) = 10; /*0x6b6cb6*/
  *(_DWORD *)(this + 72) = 0; /*0x6b6cbd*/
  v7 = dword_A8ED54[12]; /*0x6b6cc0*/
  *(_DWORD *)(this + 88) = 0; /*0x6b6cc5*/
  *(_DWORD *)(this + 80) = v7; /*0x6b6cc8*/
  *(_DWORD *)(this + 92) = dword_A8ED54[12]; /*0x6b6cd5*/
  *(_DWORD *)(this + 100) = 0; /*0x6b6cdc*/
  *(_DWORD *)(this + 40) = a3; /*0x6b6cdf*/
  *(_DWORD *)(this + 36) = a2; /*0x6b6ce6*/
  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b6cef*/
  *(_DWORD *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6cf5*/
  *(_DWORD *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6cfc*/
  *(_DWORD *)(this + 12) = &SpawnManagerClass::`vftable'; /*0x6b6d03*/
  *(_DWORD *)(this + 44) = a4; /*0x6b6d0a*/
  *(_DWORD *)(this + 48) = a5; /*0x6b6d0d*/
  *(_DWORD *)(this + 52) = a6; /*0x6b6d10*/
  for ( i = 0; i < *(_DWORD *)(this + 44); ++i ) /*0x6b6d17*/
  {
    v8 = (int *)__2_YAPAXI_Z(24); /*0x6b6d24*/
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    v9 = dword_A8ED54[12]; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = v9; /*0x6b6d39*/
    v10 = **(_DWORD **)(this + 40); /*0x6b6d44*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 60))(*(_DWORD *)(this + 36)); /*0x6b6d46*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(*(_DWORD *)(this + 40), v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = *(_DWORD *)(this + 40); /*0x6b6d66*/
      v8[5] = v13 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1248) /*0x6b6d86*/
           || v13 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1300)
           || v13 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1352);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6b6d91*/
      *(_DWORD *)(*v8 + 724) = *(_DWORD *)(this + 36); /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = dword_A8ED54[12]; /*0x6b6db1*/
      v8[3] = v20; /*0x6b6db4*/
      v8[4] = 0; /*0x6b6db7*/
      v14 = *(_DWORD *)(this + 64); /*0x6b6dba*/
      if ( *(_DWORD *)(this + 72) < v14 /*0x6b6dda*/
        || (*(_BYTE *)(this + 69) || !v14)
        && (v15 = *(_DWORD *)(this + 76), v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v14 + v15, 0) )
      {
        v16 = *(_DWORD *)(this + 72); /*0x6b6de1*/
        v17 = *(_DWORD *)(this + 60); /*0x6b6de4*/
        *(_DWORD *)(this + 72) = v16 + 1; /*0x6b6dea*/
        *(_DWORD *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
      }
    }
  }
  *(_DWORD *)(this + 80) = dword_A8ED54[12]; /*0x6b6e0d*/
  *(_DWORD *)(this + 84) = v20; /*0x6b6e19*/
  *(_DWORD *)(this + 88) = 20; /*0x6b6e1c*/
  *(_DWORD *)(this + 104) = 0; /*0x6b6e1f*/
  *(_DWORD *)(this + 108) = 0; /*0x6b6e22*/
  *(_DWORD *)(this + 112) = 0; /*0x6b6e25*/
  *(_DWORD *)(this + 92) = dword_A8ED54[12]; /*0x6b6e2f*/
  *(_DWORD *)(this + 96) = v20; /*0x6b6e32*/
  *(_DWORD *)(this + 100) = 0; /*0x6b6e35*/
  if ( dword_A8ED54[127695] < dword_A8ED54[127693] /*0x6b6e69*/
    || (BYTE1(dword_A8ED54[127694]) || !dword_A8ED54[127693])
    && dword_A8ED54[127696] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8ED54[127691] + 8))(
         &dword_A8ED54[127691],
         dword_A8ED54[127693] + dword_A8ED54[127696],
         0) )
  {
    v18 = dword_A8ED54[127695]++; /*0x6b6e76*/
    *(_DWORD *)(dword_A8ED54[127692] + 4 * v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/
}


// ==== 0x006B6EA0  SpawnManagerClass::Constructor  this=SpawnManagerClass  sig=csp ====
int __thiscall sub_6B6EA0(int this)
{
  int v2; // eax
  int v4; // [esp+10h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6ea8*/
  SpawnControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6b6eb6*/
  *(_DWORD *)(this + 56) = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b6ebb*/
  *(_DWORD *)(this + 76) = 10; /*0x6b6ec1*/
  *(_DWORD *)(this + 72) = 0; /*0x6b6ec8*/
  *(_DWORD *)(this + 80) = MEMORY[0xA8ED84]; /*0x6b6ed4*/
  *(_DWORD *)(this + 88) = 0; /*0x6b6ed7*/
  *(_DWORD *)(this + 92) = MEMORY[0xA8ED84]; /*0x6b6ee0*/
  *(_DWORD *)(this + 100) = 0; /*0x6b6ee3*/
  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b6ee6*/
  *(_DWORD *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b6eec*/
  *(_DWORD *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b6ef3*/
  *(_DWORD *)(this + 12) = &vt_SpawnManagerClass; /*0x6b6efa*/
  *(_DWORD *)(this + 36) = 0; /*0x6b6f01*/
  *(_DWORD *)(this + 40) = 0; /*0x6b6f04*/
  *(_DWORD *)(this + 44) = 0; /*0x6b6f07*/
  *(_DWORD *)(this + 80) = MEMORY[0xA8ED84]; /*0x6b6f11*/
  *(_DWORD *)(this + 84) = v4; /*0x6b6f14*/
  *(_DWORD *)(this + 88) = 0; /*0x6b6f17*/
  *(_DWORD *)(this + 104) = 0; /*0x6b6f1a*/
  *(_DWORD *)(this + 108) = 0; /*0x6b6f1d*/
  *(_DWORD *)(this + 112) = 0; /*0x6b6f20*/
  *(_DWORD *)(this + 92) = MEMORY[0xA8ED84]; /*0x6b6f28*/
  *(_DWORD *)(this + 96) = v4; /*0x6b6f2f*/
  *(_DWORD *)(this + 100) = 0; /*0x6b6f32*/
  if ( MEMORY[0xB0B890] < MEMORY[0xB0B888] /*0x6b6f69*/
    || (MEMORY[0xB0B88D] || !MEMORY[0xB0B888])
    && MEMORY[0xB0B894] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xB0B880] + 8))(
         &MEMORY[0xB0B880],
         MEMORY[0xB0B888] + MEMORY[0xB0B894],
         0) )
  {
    v2 = MEMORY[0xB0B890]++; /*0x6b6f76*/
    *((_DWORD *)MEMORY[0xB0B884] + v2) = this; /*0x6b6f85*/
  }
  return this; /*0x6b6f8a*/
}


// ==== 0x006B7010  SpawnManagerClass::Constructor_SpawnManagerClass  this=SpawnManagerClass  sig=csp ====
void __thiscall sub_6B7010(int this)
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b7015*/
  *(_DWORD *)(this + 4) = &SpawnManagerClass::`vftable'; /*0x6b701b*/
  *(_DWORD *)(this + 8) = &SpawnManagerClass::`vftable'; /*0x6b7022*/
  *(_DWORD *)(this + 12) = &vt_SpawnManagerClass; /*0x6b7029*/
  if ( MEMORY[0xA8E9A0] ) /*0x6b7037*/
    TaskManager::Update((_DWORD *)this); /*0x6b7039*/
  for ( i = *(_DWORD *)(this + 72) - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * i) ) /*0x6b7047*/
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 60) + 4 * i)); /*0x6b704f*/
  }
  v3 = *(_DWORD *)(this + 64); /*0x6b7063*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 56) + 12))(this + 56); /*0x6b7066*/
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v3, 0); /*0x6b7070*/
  v6 = this; /*0x6b7083*/
  v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0B880] + 16))(&MEMORY[0xB0B880], &v6); /*0x6b7087*/
  if ( v4 != -1 && v4 < MEMORY[0xB0B890] && v4 < --MEMORY[0xB0B890] ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((_DWORD *)MEMORY[0xB0B884] + v4 - 1) = *((_DWORD *)MEMORY[0xB0B884] + v4); /*0x6b70af*/
    }
    while ( v4 < MEMORY[0xB0B890] ); /*0x6b70bb*/
  }
  v5 = *(void **)(this + 60); /*0x6b70bd*/
  *(_DWORD *)(this + 56) = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b70c0*/
  if ( v5 && *(_BYTE *)(this + 69) ) /*0x6b70ca*/
  {
    __3_YAXPAX_Z(v5); /*0x6b70d2*/
    *(_DWORD *)(this + 60) = 0; /*0x6b70da*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x6b70e3*/
  *(_DWORD *)(this + 64) = 0; /*0x6b70e7*/
  AbstractClass::DTOR((_DWORD *)this); /*0x6b70ee*/
}


// ==== 0x006B7100  TaskManager::Update  this=SpawnManagerClass  sig=csp ====
int __thiscall TaskManager_Update(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int i; // edi
  int v5; // ecx
  _DWORD *v6; // edx
  _DWORD *v7; // edx
  _DWORD *v8; // edx
  int v9; // [esp+10h] [ebp-8h]

  result = this->owner; /*0x6b7108*/
  if ( *(int *)(result + 108) > 0 && *(_BYTE *)(result + 144) ) /*0x6b7112*/
    v3 = 0; /*0x6b711c*/
  else
    v3 = this->spawnCount; /*0x6b7120*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b7127*/
  {
    result = *(_DWORD *)(this->spawnVectorCount + 4 * i); /*0x6b7136*/
    v5 = *(_DWORD *)(result + 4); /*0x6b7139*/
    if ( v5 != 7 ) /*0x6b713e*/
    {
      if ( !v5 || v5 == 6 ) /*0x6b714f*/
      {
        *(_DWORD *)(result + 4) = 7; /*0x6b71de*/
        v8 = *(_DWORD **)(this->spawnVectorCount + 4 * i); /*0x6b71e4*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 248))(*v8); /*0x6b71eb*/
        **(_DWORD **)(this->spawnVectorCount + 4 * i) = 0; /*0x6b71f7*/
        v7 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * i) + 8); /*0x6b7208*/
        *v7 = MEMORY[0xA8ED84]; /*0x6b720b*/
        result = v9; /*0x6b720d*/
      }
      else
      {
        if ( v5 == 1 ) /*0x6b7158*/
        {
          AbstractClass::processStateTransition(*(_DWORD *)result); /*0x6b7162*/
          *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * i) + 4) = 7; /*0x6b716d*/
          v6 = *(_DWORD **)(this->spawnVectorCount + 4 * i); /*0x6b7173*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 248))(*v6); /*0x6b717a*/
        }
        else
        {
          *(_DWORD *)(result + 4) = 7; /*0x6b71a2*/
          UnitClass::GetExitCell(**(_DWORD **)(this->spawnVectorCount + 4 * i), this->SpawnManagerClass_field_68); /*0x6b71b7*/
        }
        **(_DWORD **)(this->spawnVectorCount + 4 * i) = 0; /*0x6b7186*/
        v7 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * i) + 8); /*0x6b7197*/
        *v7 = MEMORY[0xA8ED84]; /*0x6b719a*/
        result = v9; /*0x6b719c*/
      }
      v7[1] = result; /*0x6b7211*/
      v7[2] = v3; /*0x6b7214*/
    }
  }
  return result; /*0x6b721f*/
}


// ==== 0x006B7230  SpawnManagerClass::ProcessExitQueue  this=SpawnManagerClass  sig=csp ====
void __thiscall UnitClass::ProcessExitQueue(int *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // eax
  _DWORD **v8; // ebp
  _DWORD *v9; // edi
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // ebp
  _DWORD *v13; // ebp
  _BYTE *v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  BOOL v19; // ebp
  _DWORD *v20; // ecx
  int v21; // ebx
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *Value; // eax
  void **v27; // ebp
  int Index; // eax
  int v29; // eax
  __int16 *v30; // eax
  _DWORD *v31; // eax
  int v32; // ebp
  void *NeighbourContent; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int16 *v37; // eax
  _DWORD *v38; // eax
  int v39; // ebp
  void *v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  _WORD *v44; // ebp
  _WORD *v45; // eax
  int *v46; // ecx
  int v47; // eax
  int v48; // ecx
  _DWORD *v49; // edx
  int v50; // ebp
  int v51; // edx
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int v56; // edi
  int v57; // eax
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  int v61; // ecx
  char v62; // bl
  int v63; // eax
  char v64; // bl
  int v65; // ecx
  int v66; // edx
  int v67; // eax
  int v68; // ebp
  int v69; // edx
  int v70; // eax
  int v71; // edi
  int v72; // ebp
  _DWORD *v73; // eax
  int *v74; // eax
  int v75; // ecx
  _DWORD *v76; // eax
  int v77; // ecx
  int v78; // eax
  char v79; // [esp+2Dh] [ebp-55h]
  int v80; // [esp+2Eh] [ebp-54h]
  int v81; // [esp+32h] [ebp-50h] BYREF
  int v82; // [esp+36h] [ebp-4Ch] BYREF
  int v83; // [esp+3Ah] [ebp-48h] BYREF
  int v84; // [esp+3Eh] [ebp-44h] BYREF
  char v85[4]; // [esp+42h] [ebp-40h] BYREF
  int v86; // [esp+46h] [ebp-3Ch] BYREF
  int v87; // [esp+4Ah] [ebp-38h]
  int v88; // [esp+4Eh] [ebp-34h]
  int v89[3]; // [esp+52h] [ebp-30h] BYREF
  int v90; // [esp+5Eh] [ebp-24h]
  int v91; // [esp+62h] [ebp-20h]
  char v92[12]; // [esp+6Ah] [ebp-18h] BYREF
  int v93; // [esp+76h] [ebp-Ch] BYREF
  int v94; // [esp+7Ah] [ebp-8h]

  v2 = this->abstractFlags; /*0x6b723f*/
  v3 = this->SpawnManagerClass_field_58; /*0x6b7242*/
  if ( v2 != -1 ) /*0x6b7248*/
  {
    if ( dword_A8ED54[12] - v2 >= v3 ) /*0x6b7250*/
      goto LABEL_5; /*0x6b7250*/
    v3 -= dword_A8ED54[12] - v2; /*0x6b7252*/
  }
  if ( v3 ) /*0x6b7256*/
    return; /*0x6b7256*/
LABEL_5:
  v4 = v91; /*0x6b725c*/
  this->abstractFlags = dword_A8ED54[12]; /*0x6b7265*/
  this->SpawnManagerClass_field_54 = v4; /*0x6b7268*/
  this->SpawnManagerClass_field_58 = 10; /*0x6b726b*/
  v5 = 0; /*0x6b7271*/
  v80 = 0; /*0x6b7275*/
  if ( this->q012 > 0 )
  {
    while ( 1 )
    {
      v6 = this->spawnVectorCount; /*0x6b727f*/
      v79 = 0; /*0x6b7282*/
      v7 = *(_DWORD *)(v6 + 4 * v5); /*0x6b7287*/
      v8 = (_DWORD **)(v6 + 4 * v5); /*0x6b728a*/
      v9 = *(_DWORD **)v7; /*0x6b7290*/
      switch ( *(_DWORD *)(v7 + 4) )
      {
        case 0:
          if ( !this->q01A ) /*0x6b72a7*/
            goto LABEL_87; /*0x6b72a7*/
          v10 = this->q017; /*0x6b72ad*/
          v11 = this->SpawnManagerClass_field_64; /*0x6b72b0*/
          if ( v10 == -1 ) /*0x6b72b6*/
            goto LABEL_11; /*0x6b72b6*/
          if ( dword_A8ED54[12] - v10 >= v11 ) /*0x6b72c2*/
            goto LABEL_128; /*0x6b72c2*/
          v11 -= dword_A8ED54[12] - v10; /*0x6b72c4*/
LABEL_11:
          if ( !v11 )
          {
LABEL_128:
            if ( this->referenceCount != 2 && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) != 1 ) /*0x6b72fc*/
                goto LABEL_21; /*0x6b72fc*/
              v12 = (_DWORD *)(this->owner + 1652); /*0x6b7301*/
              if ( !*v12 ) /*0x6b7307*/
                WinAPI::Wrapper(-2147467261); /*0x6b7312*/
              if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v12 + 16))(*v12) )
              {
                v13 = (_DWORD *)(this->owner + 1652); /*0x6b732c*/
                if ( !*v13 ) /*0x6b7332*/
                  WinAPI::Wrapper(-2147467261); /*0x6b733d*/
                if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*v13 + 128))(*v13) )
                {
LABEL_21:
                  v14 = (_BYTE *)this->owner; /*0x6b735c*/
                  if ( !v14 || (v14[20] & 4) == 0 || !*((v14[20] & 4) != 0 ? v14 + 1709 : (_BYTE *)1709) )
                  {
                    if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v14 + 132))(v14) + 3432) ) /*0x6b7392*/
                    {
                      v15 = v91; /*0x6b73a1*/
                      this->q017 = dword_A8ED54[12]; /*0x6b73a5*/
                      v16 = 9; /*0x6b73a8*/
                      this->nextArrayIndex = v15; /*0x6b73ad*/
                    }
                    else
                    {
                      this->q017 = dword_A8ED54[12]; /*0x6b73b2*/
                      v16 = 20; /*0x6b73b9*/
                      this->nextArrayIndex = v91; /*0x6b73be*/
                    }
                    this->SpawnManagerClass_field_64 = v16; /*0x6b73c1*/
                    if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) == 1 ) /*0x6b73cd*/
                    {
                      v17 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->owner + 1016))( /*0x6b73dc*/
                                         this->owner,
                                         0);
                      if ( v17 ) /*0x6b73e0*/
                      {
                        if ( *(int *)(v17 + 156) > 1 ) /*0x6b73e8*/
                        {
                          v79 = 1; /*0x6b73f1*/
                          *(_DWORD *)(this->owner + 952) = v5 & 1; /*0x6b73f6*/
                        }
                      }
                    }
                    *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 2; /*0x6b7404*/
                    v18 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->owner + 1016))(this->owner, 0); /*0x6b7410*/
                    v86 = 0; /*0x6b741c*/
                    v87 = 0; /*0x6b7420*/
                    v88 = 0; /*0x6b7424*/
                    v19 = *(_BYTE *)(*(_DWORD *)v18 + 305) == 0; /*0x6b7436*/
                    v20 = (_DWORD *)this->owner; /*0x6b743b*/
                    if ( v20[238] ) /*0x6b743e*/
                    {
                      v21 = *v20; /*0x6b7448*/
                      v22 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v20 + 132))(v20); /*0x6b744a*/
                      v23 = (int *)(*(int (__thiscall **)(_DWORD, char *, BOOL, _DWORD, _DWORD, _DWORD))(v21 + 176))( /*0x6b7473*/
                                     this->owner,
                                     v92,
                                     v19,
                                     v22[876],
                                     v22[877],
                                     v22[878]);
                    }
                    else
                    {
                      v23 = (int *)(*(int (__thiscall **)(_DWORD *, int *, BOOL, _DWORD, _DWORD, _DWORD))(*v20 + 176))( /*0x6b7492*/
                                     v20,
                                     &v93,
                                     v19,
                                     0,
                                     0,
                                     0);
                    }
                    v24 = *v23; /*0x6b7498*/
                    v86 = *v23; /*0x6b74a0*/
                    v5 = v80; /*0x6b74a4*/
                    v25 = v23[1]; /*0x6b74a8*/
                    v87 = v25; /*0x6b74ab*/
                    v88 = v23[2] + 10; /*0x6b74b5*/
                    if ( this->spawnOwner == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1352) ) /*0x6b74c2*/
                    {
                      v86 = v24 - dword_84009C; /*0x6b74d3*/
                      v87 = v25 - dword_8400A0; /*0x6b74d7*/
                    }
                    Value = ProgressTimer::GetValue((_WORD *)(this->owner + 904), &v81); /*0x6b74e9*/
                    (*(void (__thiscall **)(_DWORD *, int *, _DWORD))(*v9 + 216))( /*0x6b7505*/
                      v9,
                      &v86,
                      (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
                    if ( this->spawnOwner == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1352) ) /*0x6b7519*/
                    {
                      v27 = (void **)__2_YAPAXI_Z(456); /*0x6b7525*/
                      if ( v27 ) /*0x6b752c*/
                      {
                        v89[0] = v9[39]; /*0x6b753a*/
                        v89[1] = v9[40]; /*0x6b7541*/
                        v89[2] = v9[41]; /*0x6b7548*/
                        Index = AnimTypeClass::FindIndex(off_840098); /*0x6b7552*/
                        AnimClass::ctor( /*0x6b7575*/
                          v27,
                          *(void **)(MEMORY[0x87F7E8][53851] + 4 * Index),
                          v89,
                          (void *)2,
                          1,
                          (void *)0x600,
                          (void *)0xFFFFFFF6,
                          0);
                      }
                    }
                    if ( v79 ) /*0x6b7580*/
                      *(_DWORD *)(this->owner + 952) = 0; /*0x6b7585*/
                    if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v80) + 20) == 1 ) /*0x6b7599*/
                    {
                      v29 = this->SpawnManagerClass_field_6C; /*0x6b759b*/
                      if ( v29 ) /*0x6b75a0*/
                      {
                        this->q01A = v29; /*0x6b75a2*/
                        this->SpawnManagerClass_field_6C = 0; /*0x6b75a5*/
                      }
                      (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, this->q01A, 1); /*0x6b75b6*/
                      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b75c4*/
                    }
                    else
                    {
                      v30 = (__int16 *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->owner + 440))( /*0x6b75d9*/
                                         this->owner,
                                         &v82);
                      v31 = CellCoord::To_CellObj(MEMORY[0x87F7E8], v30); /*0x6b75e5*/
                      v32 = *v9; /*0x6b75ea*/
                      NeighbourContent = Cell::GetNeighbourContent(v31, 0); /*0x6b75f2*/
                      (*(void (__thiscall **)(_DWORD *, void *, int))(v32 + 1152))(v9, NeighbourContent, 1); /*0x6b75fa*/
                      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b7608*/
                    }
                  }
                }
              }
            }
          }
LABEL_87:
          v80 = ++v5; /*0x6b7960*/
          if ( v5 >= this->q012 ) /*0x6b7964*/
            goto LABEL_88; /*0x6b7964*/
          break; /*0x6b7964*/
        case 1:
          v34 = *(_DWORD *)(v7 + 16); /*0x6b7613*/
          v35 = *(_DWORD *)(v7 + 8); /*0x6b7616*/
          if ( v35 == -1 ) /*0x6b761c*/
            goto LABEL_49; /*0x6b761c*/
          if ( dword_A8ED54[12] - v35 >= v34 ) /*0x6b7628*/
            goto LABEL_50; /*0x6b7628*/
          v34 -= dword_A8ED54[12] - v35; /*0x6b762a*/
LABEL_49:
          if ( !v34 ) /*0x6b762e*/
LABEL_50:
            UnitClass::ClearTargetRef(this, (int)v9); /*0x6b7637*/
          goto LABEL_87; /*0x6b763c*/
        case 2:
          if ( *(_DWORD *)(v7 + 20) != 1 ) /*0x6b7645*/
          {
            v36 = this->SpawnManagerClass_field_6C; /*0x6b764b*/
            if ( v36 ) /*0x6b7650*/
            {
              this->q01A = v36; /*0x6b7652*/
              this->SpawnManagerClass_field_6C = 0; /*0x6b7655*/
            }
            if ( !this->q01A ) /*0x6b765c*/
              goto LABEL_55; /*0x6b7661*/
            v37 = (__int16 *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->owner + 440))(this->owner, &v83); /*0x6b76a9*/
            v38 = CellCoord::To_CellObj(MEMORY[0x87F7E8], v37); /*0x6b76b5*/
            v39 = *v9; /*0x6b76ba*/
            v40 = Cell::GetNeighbourContent(v38, 4u); /*0x6b76c2*/
            (*(void (__thiscall **)(_DWORD *, void *, int))(v39 + 1152))(v9, v40, 1); /*0x6b76ca*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b76d8*/
          }
          goto LABEL_87; /*0x6b76de*/
        case 3:
          v41 = this->SpawnManagerClass_field_6C; /*0x6b76e3*/
          if ( v41 ) /*0x6b76e8*/
          {
            this->q01A = v41; /*0x6b76ea*/
            this->SpawnManagerClass_field_6C = 0; /*0x6b76ed*/
          }
          if ( v9[191] && this->q01A ) /*0x6b7702*/
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 968))( /*0x6b7718*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              this->q01A);
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b772c*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              1,
              0);
          }
          else
          {
LABEL_55:
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7663*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 968))(v9, 0); /*0x6b7679*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b7687*/
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 4; /*0x6b7693*/
          }
          goto LABEL_87; /*0x6b7732*/
        case 4:
          v42 = this->SpawnManagerClass_field_6C; /*0x6b7737*/
          if ( v42 ) /*0x6b773c*/
          {
            this->q01A = v42; /*0x6b773e*/
            this->SpawnManagerClass_field_6C = 0; /*0x6b7741*/
          }
          if ( (int)v9[191] > 0 && this->q01A ) /*0x6b7752*/
          {
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 3; /*0x6b775f*/
            v43 = **(_DWORD **)(this->spawnVectorCount + 4 * v5); /*0x6b776c*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v43 + 968))(v43, this->q01A); /*0x6b7774*/
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b7788*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              1,
              0);
          }
          else
          {
            v44 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)this->owner + 440))(this->owner, &v84); /*0x6b77a5*/
            v45 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 440))(v9, v85); /*0x6b77ae*/
            if ( *v45 == *v44 /*0x6b77fd*/
              && v45[1] == v44[1]
              && (v90 = v9[39],
                  v46 = (int *)(this->owner + 156),
                  v91 = v9[40],
                  v47 = v9[41],
                  v90 = *v46,
                  v91 = v46[1],
                  v47 - v46[2] < 20) )
            {
              (*(void (__thiscall **)(_DWORD *))(*v9 + 212))(v9); /*0x6b7803*/
              *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 6; /*0x6b780f*/
              v48 = this->SpawnManagerClass_field_34; /*0x6b781e*/
              v49 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 8); /*0x6b7824*/
              *v49 = dword_A8ED54[12]; /*0x6b7827*/
              v49[1] = v94; /*0x6b782d*/
              v49[2] = v48; /*0x6b7830*/
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7842*/
              (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 968))(v9, 0); /*0x6b784e*/
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b785c*/
            }
          }
          goto LABEL_87; /*0x6b778e*/
        case 6:
          v50 = *(_DWORD *)(v7 + 8); /*0x6b7867*/
          v51 = *(_DWORD *)(v7 + 16); /*0x6b786a*/
          if ( v50 == -1 ) /*0x6b7870*/
            goto LABEL_75; /*0x6b7870*/
          if ( dword_A8ED54[12] - v50 >= v51 ) /*0x6b787c*/
            goto LABEL_76; /*0x6b787c*/
          v51 -= dword_A8ED54[12] - v50; /*0x6b787e*/
LABEL_75:
          if ( !v51 ) /*0x6b7882*/
          {
LABEL_76:
            *(_DWORD *)(v7 + 4) = 0; /*0x6b7888*/
            v52 = v9[433]; /*0x6b788f*/
            v9[191] = *(_DWORD *)(v52 + 1668); /*0x6b789b*/
            v53 = *(_DWORD *)(v52 + 160); /*0x6b78a1*/
            v9[27] = v53; /*0x6b78a7*/
            v9[28] = v53; /*0x6b78aa*/
          }
          goto LABEL_87; /*0x6b78ad*/
        case 7:
          v54 = *(_DWORD *)(v7 + 16); /*0x6b78b2*/
          v55 = *(_DWORD *)(v7 + 8); /*0x6b78b5*/
          if ( v55 == -1 ) /*0x6b78bb*/
            goto LABEL_80; /*0x6b78bb*/
          if ( dword_A8ED54[12] - v55 >= v54 ) /*0x6b78c7*/
            goto LABEL_81; /*0x6b78c7*/
          v54 -= dword_A8ED54[12] - v55; /*0x6b78c9*/
LABEL_80:
          if ( !v54 ) /*0x6b78cd*/
          {
LABEL_81:
            v56 = *(_DWORD *)this->spawnOwner; /*0x6b78db*/
            v57 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->owner + 60))(this->owner); /*0x6b78dd*/
            **v8 = (*(int (__thiscall **)(_DWORD, int))(v56 + 140))(this->spawnOwner, v57); /*0x6b78ed*/
            v58 = this->spawnOwner; /*0x6b78f5*/
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) = v58 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1248) /*0x6b7925*/
                                                                || v58 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1300)
                                                                || v58 == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1352);
            v59 = **(_DWORD **)(this->spawnVectorCount + 4 * v5); /*0x6b7932*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v59 + 212))(v59); /*0x6b7936*/
            *(_DWORD *)(**(_DWORD **)(this->spawnVectorCount + 4 * v5) + 724) = this->owner; /*0x6b7947*/
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 0; /*0x6b7953*/
          }
          goto LABEL_87; /*0x6b7953*/
        default:
          goto LABEL_87;
      }
    }
  }
LABEL_88:
  v60 = this->referenceCount; /*0x6b796a*/
  v61 = 0; /*0x6b796d*/
  v62 = 0; /*0x6b796f*/
  if ( v60 ) /*0x6b7973*/
  {
    v63 = v60 - 1; /*0x6b7979*/
    if ( v63 ) /*0x6b797a*/
    {
      if ( v63 == 1 ) /*0x6b797d*/
      {
        v64 = 1; /*0x6b7986*/
        if ( this->q012 <= 0 ) /*0x6b798a*/
          goto LABEL_98; /*0x6b798a*/
        v65 = this->spawnVectorCount; /*0x6b798c*/
        v66 = this->q012; /*0x6b798f*/
        do /*0x6b79a6*/
        {
          v67 = *(_DWORD *)(*(_DWORD *)v65 + 4); /*0x6b7993*/
          if ( v67 == 3 || v67 == 4 ) /*0x6b799e*/
            v64 = 0; /*0x6b79a0*/
          v65 += 4; /*0x6b79a2*/
          --v66; /*0x6b79a5*/
        }
        while ( v66 ); /*0x6b79a6*/
        if ( v64 ) /*0x6b79aa*/
LABEL_98:
          this->referenceCount = 0; /*0x6b79b0*/
      }
      return; /*0x6b79be*/
    }
    if ( !this->q01A ) /*0x6b79bf*/
    {
LABEL_100:
      UnitClass::ProcessIdleOrders(this); /*0x6b79c4*/
      return; /*0x6b79d2*/
    }
    v68 = this->q012; /*0x6b79d3*/
    if ( v68 <= 0 ) /*0x6b79d8*/
    {
LABEL_106:
      v71 = 0; /*0x6b79f8*/
      if ( v68 > 0 ) /*0x6b79fc*/
      {
        v72 = v94; /*0x6b7a02*/
        do /*0x6b7b09*/
        {
          v73 = *(_DWORD **)(this->spawnVectorCount + 4 * v71); /*0x6b7a09*/
          if ( v73[1] == 2 ) /*0x6b7a10*/
          {
            if ( *(_BYTE *)(*(_DWORD *)(*v73 + 1732) + 3432) ) /*0x6b7a1e*/
            {
              v62 = 1; /*0x6b7a2e*/
              UnitClass::GetExitCell((int)&dword_A8ED54[46633], (_DWORD *)*v73, (_DWORD *)this->q01A); /*0x6b7a37*/
              dword_A8ED54[46633] = dword_A8ED54[12]; /*0x6b7a46*/
              dword_A8ED54[46634] = v72; /*0x6b7a4b*/
              dword_A8ED54[46635] = 2; /*0x6b7a51*/
              v74 = *(int **)(this->spawnVectorCount + 4 * v71); /*0x6b7a5a*/
              if ( v74[5] == 1 ) /*0x6b7a65*/
              {
                v74[1] = 1; /*0x6b7a67*/
                if ( this->spawnOwner == *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1248) ) /*0x6b7a80*/
                  v75 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1200) + *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1204); /*0x6b7a88*/
                else
                  v75 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1252) + *(_DWORD *)(MEMORY[0x87F7E8][7806] + 1256); /*0x6b7aab*/
                v76 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v71) + 8); /*0x6b7a94*/
                *v76 = dword_A8ED54[12]; /*0x6b7a97*/
                v76[1] = v94; /*0x6b7a9d*/
                v76[2] = v75; /*0x6b7aa0*/
              }
              else
              {
                UnitClass::ClearTargetRef(this, *v74); /*0x6b7acd*/
              }
            }
            else
            {
              v73[1] = 3; /*0x6b7ad4*/
              v77 = **(_DWORD **)(this->spawnVectorCount + 4 * v71); /*0x6b7ae1*/
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v77 + 968))(v77, this->q01A); /*0x6b7ae9*/
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v71) + 488))( /*0x6b7afd*/
                **(_DWORD **)(this->spawnVectorCount + 4 * v71),
                1,
                0);
            }
          }
          ++v71; /*0x6b7b06*/
        }
        while ( v71 < this->q012 ); /*0x6b7b09*/
        if ( v62 ) /*0x6b7b11*/
          UnitClass::ProcessIdleOrders(this); /*0x6b7b15*/
      }
      this->referenceCount = 2; /*0x6b7b1a*/
    }
    else
    {
      v69 = this->spawnVectorCount; /*0x6b79da*/
      while ( 1 ) /*0x6b79df*/
      {
        v70 = *(_DWORD *)(*(_DWORD *)v69 + 4); /*0x6b79df*/
        if ( v70 != 2 && v70 != 7 ) /*0x6b79ea*/
          break; /*0x6b79ea*/
        ++v61; /*0x6b79f0*/
        v69 += 4; /*0x6b79f1*/
        if ( v61 >= v68 ) /*0x6b79f6*/
          goto LABEL_106; /*0x6b79f6*/
      }
    }
  }
  else
  {
    v78 = this->SpawnManagerClass_field_6C; /*0x6b7b29*/
    if ( v78 ) /*0x6b7b2e*/
    {
      this->q01A = v78; /*0x6b7b30*/
      this->SpawnManagerClass_field_6C = 0; /*0x6b7b33*/
    }
    if ( this->q01A ) /*0x6b7b36*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->owner + 940))(this->owner, this->q01A) ) /*0x6b7b43*/
      {
        this->referenceCount = 1; /*0x6b7b5c*/
        return; /*0x6b7b5c*/
      }
      goto LABEL_100; /*0x6b7b4b*/
    }
  }
}


// ==== 0x006B7B90  SpawnManagerClass::SetTarget  this=CaptureManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::SetTarget(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x6b7b90*/
  if ( a2 != this->q01A ) /*0x6b7b99*/
    this->q1B0 = a2; /*0x6b7b9b*/
  return result; /*0x6b7b9e*/
}


// ==== 0x006B7BB0  UnitClass::ProcessIdleOrders  this=SpawnManagerClass  sig=csp ====
void __thiscall UnitClass_ProcessIdleOrders(_DWORD *this)
{
  int i; // edi
  int *v3; // eax
  int v4; // eax
  int v5; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < this->q048; ++i ) /*0x6b7bbc*/
  {
    v3 = *(int **)(this->spawnVectorCount + 4 * i); /*0x6b7bc6*/
    if ( v3[1] == 2 ) /*0x6b7bcd*/
    {
      v4 = *v3; /*0x6b7bcf*/
      if ( *(_BYTE *)(*(_DWORD *)(v4 + 1732) + 3432) ) /*0x6b7bd7*/
      {
        UnitClass::GetExitCell(v4, this->SpawnManagerClass_field_68); /*0x6b7beb*/
        g_MissionQueueFrame = (int)MEMORY[0xA8ED84]; /*0x6b7bfa*/
        g_MissionQueueParam = v5; /*0x6b7bff*/
        g_MissionQueueType = 2; /*0x6b7c05*/
        UnitClass::ClearTargetRef(**(_DWORD **)(this->spawnVectorCount + 4 * i)); /*0x6b7c16*/
      }
    }
  }
  this->SpawnManagerClass_field_70 = 0; /*0x6b7c26*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b7c29*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b7c2c*/
}


// ==== 0x006B7C60  UnitClass::ClearTargetRef  this=SpawnManagerClass  sig=csp ====
void __thiscall sub_6B7C60(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  _DWORD **v6; // ecx
  _DWORD *v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // [esp+10h] [ebp-8h]

  if ( a2 == this->SpawnManagerClass_field_68 ) /*0x6b7c6f*/
  {
    v3 = this->SpawnManagerClass_field_6C; /*0x6b7c71*/
    this->SpawnManagerClass_field_68 = 0; /*0x6b7c74*/
    if ( !v3 ) /*0x6b7c7d*/
      UnitClass::ProcessIdleOrders(this); /*0x6b7c7f*/
  }
  else if ( a2 == this->SpawnManagerClass_field_6C ) /*0x6b7c90*/
  {
    this->SpawnManagerClass_field_6C = 0; /*0x6b7c92*/
  }
  else
  {
    v4 = this->q048 - 1; /*0x6b7ca5*/
    if ( v4 < 0 ) /*0x6b7ca6*/
    {
LABEL_10:
      if ( a2 == this->owner ) /*0x6b7cbf*/
      {
        TaskManager::Update(this); /*0x6b7cc3*/
        UnitClass::ProcessIdleOrders(this); /*0x6b7cca*/
      }
    }
    else
    {
      v5 = this->spawnVectorCount; /*0x6b7ca8*/
      v6 = (_DWORD **)(v5 + 4 * v4); /*0x6b7cab*/
      while ( a2 != **v6 ) /*0x6b7cb2*/
      {
        --v4; /*0x6b7cb4*/
        --v6; /*0x6b7cb5*/
        if ( v4 < 0 ) /*0x6b7cba*/
          goto LABEL_10; /*0x6b7cba*/
      }
      v7 = *(_DWORD **)(v5 + 4 * v4); /*0x6b7cd8*/
      if ( *(int *)(*v7 + 108) <= 0 || *(_BYTE *)(*v7 + 1738) || v7[5] == 1 ) /*0x6b7cf2*/
      {
        *v7 = 0; /*0x6b7cf4*/
        *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v4) + 4) = 7; /*0x6b7d01*/
        v8 = this->spawnCount; /*0x6b7d08*/
        v9 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v4) + 8); /*0x6b7d18*/
        *v9 = MEMORY[0xA8ED84]; /*0x6b7d1c*/
        v9[1] = v10; /*0x6b7d22*/
        v9[2] = v8; /*0x6b7d25*/
      }
    }
  }
}


// ==== 0x006B7D30  SpawnManagerClass::CountAliveSpawns  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::CountAliveSpawns(int *this)
{
  int v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = this->q012; /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    v3 = this->spawnVectorCount; /*0x6b7d39*/
    do /*0x6b7d4a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v3 + 4) != 7 ) /*0x6b7d43*/
        ++result; /*0x6b7d45*/
      v3 += 4; /*0x6b7d46*/
      --v1; /*0x6b7d49*/
    }
    while ( v1 ); /*0x6b7d4a*/
  }
  return result; /*0x6b7d4d*/
}


// ==== 0x006B7D50  SpawnManagerClass::CountDockedSpawns  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::CountDockedSpawns(int *this)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  int v4; // ecx

  v1 = this->q012; /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    v3 = this->spawnVectorCount; /*0x6b7d5a*/
    do /*0x6b7d70*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)v3 + 4); /*0x6b7d5f*/
      if ( v4 == 6 || !v4 ) /*0x6b7d69*/
        ++result; /*0x6b7d6b*/
      v3 += 4; /*0x6b7d6c*/
      --v1; /*0x6b7d6f*/
    }
    while ( v1 ); /*0x6b7d70*/
  }
  return result; /*0x6b7d72*/
}


// ==== 0x006B7D80  TechnoClass::CountPassengers  this=CaptureManagerClass  sig=csp ====
int __thiscall TechnoClass_CountPassengers(_DWORD *this)
{
  int v2; // ebx
  int i; // esi
  int v4; // eax
  int v5; // ecx
  _BYTE *v6; // ecx

  v2 = 0; /*0x6b7d85*/
  for ( i = 0; i < this->overloadCount; ++i ) /*0x6b7d8e*/
  {
    v4 = *(_DWORD *)(this->q03C + 4 * i); /*0x6b7d93*/
    v5 = *(_DWORD *)(v4 + 4); /*0x6b7d96*/
    if ( v5 == 1 ) /*0x6b7d9c*/
      ++v2; /*0x6b7d9e*/
    if ( v5 == 2 ) /*0x6b7da2*/
    {
      v6 = *(_BYTE **)v4; /*0x6b7da4*/
      if ( *(_DWORD *)v4 ) /*0x6b7da4*/
      {
        if ( !v6[129] && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v6 + 132))(v6) + 3432) ) /*0x6b7dbc*/
          ++v2; /*0x6b7dc6*/
      }
    }
  }
  return v2; /*0x6b7dcf*/
}


// ==== 0x006B7DE0  SpawnManagerClass::PowerDrainUpdate  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::_vt13(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int result; // eax
  int v12; // eax
  int v13; // esi
  int v14; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6b7de9*/
  Power::TimerProcess(*(_DWORD *)(this + 112)); /*0x6b7df4*/
  v3 = *(_DWORD *)(this + 108); /*0x6b7df9*/
  if ( v3 ) /*0x6b7dfe*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  v5 = *(_DWORD *)(this + 104); /*0x6b7e12*/
  if ( v5 ) /*0x6b7e17*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  v7 = *(_DWORD *)(this + 92); /*0x6b7e2b*/
  v8 = *(_DWORD *)(this + 100); /*0x6b7e2e*/
  if ( v7 != -1 ) /*0x6b7e34*/
  {
    if ( (int)MEMORY[0xA8ED84] - v7 >= v8 ) /*0x6b7e40*/
      v8 = 0; /*0x6b7e46*/
    else
      v8 -= (int)MEMORY[0xA8ED84] - v7; /*0x6b7e42*/
  }
  Power::TimerProcess(v8); /*0x6b7e4b*/
  v9 = *(_DWORD *)(this + 80); /*0x6b7e50*/
  v10 = *(_DWORD *)(this + 88); /*0x6b7e53*/
  if ( v9 != -1 ) /*0x6b7e59*/
  {
    if ( (int)MEMORY[0xA8ED84] - v9 >= v10 ) /*0x6b7e65*/
      v10 = 0; /*0x6b7e6b*/
    else
      v10 -= (int)MEMORY[0xA8ED84] - v9; /*0x6b7e67*/
  }
  Power::TimerProcess(v10); /*0x6b7e70*/
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x6b7e7b*/
  Power::TimerProcess(*(_DWORD *)(this + 44)); /*0x6b7e86*/
  result = *(_DWORD *)(this + 40); /*0x6b7e8b*/
  if ( result ) /*0x6b7e90*/
  {
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6b7e99*/
    result = Power::TimerProcess(v12); /*0x6b7e9f*/
  }
  v13 = *(_DWORD *)(this + 36); /*0x6b7ea4*/
  if ( v13 ) /*0x6b7ea9*/
  {
    v14 = (*(int (__stdcall **)(int))(*(_DWORD *)(v13 + 4) + 16))(v13 + 4); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return result; /*0x6b7ebd*/
}


// ==== 0x006B7ED0  SpawnManagerClass::ddtor  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x6b7ed6*/
    return -2147467261; /*0x6b7ed8*/
  *a2 = 108652929; /*0x6b7ee6*/
  a2[1] = 299085213; /*0x6b7eee*/
  a2[2] = 268441278; /*0x6b7ef7*/
  a2[3] = 1822515787; /*0x6b7f00*/
  return 0; /*0x6b7edd*/
}


// ==== 0x006B7F10  SpawnManagerClass::LoadFromStream  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::LoadFromStream(int aP1, AbstractClass *aP1_4)
{
  AbstractClass *v2; // ebx
  AbstractClass *v3; // esi
  int Prefix_0; // ebp
  DynamicVector *v5; // edi
  VectorClass *v6; // esi
  int v7; // eax
  DynamicVector *v8; // eax
  IUnknown *v9; // ecx
  int referenceCount; // ecx
  int v11; // eax
  int v12; // eax
  int nextArrayIndex; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = (AbstractClass *)aP1; /*0x6b7f12*/
  v3 = aP1_4; /*0x6b7f18*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP1, aP1_4); /*0x6b7f24*/
  v5 = 0; /*0x6b7f26*/
  if ( Prefix_0 >= 0 ) /*0x6b7f2a*/
  {
    if ( v2 ) /*0x6b7f32*/
    {
      AbstractClass::InitVtables(v2, (IUnknown *)&aP1); /*0x6b7f3b*/
      SpawnManagerClass::Constructor_6B83A0(&v2[1].abstractFlags, 0, 0); /*0x6b7f45*/
      *(_DWORD *)&v2[2].__pad_0[8] = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6b7f51*/
      v2[2].uniqueId = 0; /*0x6b7f57*/
      Timer::Start(&v2[2].abstractFlags, 0); /*0x6b7f5a*/
      *(_DWORD *)v2->__pad_0 = &SpawnManagerClass::`vftable'; /*0x6b7f5f*/
      *(_DWORD *)&v2->__pad_0[4] = &SpawnManagerClass::`vftable'; /*0x6b7f65*/
      *(_DWORD *)&v2->__pad_0[8] = &SpawnManagerClass::`vftable'; /*0x6b7f6c*/
      *(_DWORD *)&v2->__pad_0[12] = &vt_SpawnManagerClass; /*0x6b7f73*/
    }
    Prefix_0 = (*(int (__stdcall **)(AbstractClass *, int *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      v6 = (VectorClass *)&v2[1].abstractFlags; /*0x6b7f92*/
      if ( v2 != (AbstractClass *)-56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor(&v2[1].abstractFlags, 0, 0); /*0x6b7f9d*/
        *(_DWORD *)v6->vtable0 = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b7fa2*/
        *(_DWORD *)&v2[2].__pad_0[4] = 10; /*0x6b7fa8*/
        *(_DWORD *)v2[2].__pad_0 = 0; /*0x6b7faf*/
      }
      v7 = v16; /*0x6b7fb2*/
      aP1 = 0; /*0x6b7fb6*/
      if ( v16 <= 0 ) /*0x6b7fbc*/
      {
LABEL_20:
        v14 = 0; /*0x6b804d*/
        if ( v7 > 0 ) /*0x6b8051*/
        {
          do /*0x6b8069*/
            ObjectPtr::RegisterForTracking( /*0x6b805f*/
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              *(MouseClass **)(v2[1].nextArrayIndex + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&v2[1]); /*0x6b8074*/
        ObjectPtr::RegisterForTracking( /*0x6b8082*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&v2[1].__pad_0[4]);
        ObjectPtr::RegisterForTracking( /*0x6b8090*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&v2[2].NeedsSaveOrLink);
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&v2[3]); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = (DynamicVector *)__2_YAPAXI_Z(0x18u); /*0x6b7fc8*/
          if ( v8 ) /*0x6b7fd2*/
          {
            v9 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6b7fd4*/
            v8->field_10 = 0; /*0x6b7fda*/
            v8->field_8 = (int)v9; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (__stdcall **)(AbstractClass *, DynamicVector *, int, _DWORD))(*(_DWORD *)aP1_4->__pad_0 + 12))( /*0x6b7ff1*/
                       aP1_4,
                       v5,
                       24,
                       0);
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          referenceCount = v2[1].referenceCount; /*0x6b7ffb*/
          if ( *(_DWORD *)v2[2].__pad_0 < referenceCount /*0x6b8020*/
            || (BYTE1(v2[1].NeedsSaveOrLink) || !referenceCount)
            && (v11 = *(_DWORD *)&v2[2].__pad_0[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v6->vtable0 + 8))(
                 &v2[1].abstractFlags,
                 referenceCount + v11,
                 0) )
          {
            v12 = *(_DWORD *)v2[2].__pad_0; /*0x6b8027*/
            nextArrayIndex = v2[1].nextArrayIndex; /*0x6b802a*/
            *(_DWORD *)v2[2].__pad_0 = v12 + 1; /*0x6b8030*/
            *(_DWORD *)(nextArrayIndex + 4 * v12) = v5; /*0x6b8033*/
          }
          v7 = v16; /*0x6b803a*/
          if ( ++aP1 >= v16 ) /*0x6b8045*/
            goto LABEL_20; /*0x6b8045*/
          v5 = 0; /*0x6b7fc4*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b80a3*/
}


// ==== 0x006B80B0  SpawnManagerClass::SaveState  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::SaveState(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6b80c2*/
  if ( result >= 0 ) /*0x6b80c9*/
  {
    v4 = *a1; /*0x6b80ce*/
    aP2 = *(_DWORD *)&aP0->UINameLabel[11]; /*0x6b80da*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b80de*/
    if ( result >= 0 ) /*0x6b80e3*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b80ed*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a1 + 16))( /*0x6b80fd*/
                   a1,
                   *(_DWORD *)(*(_DWORD *)&aP0->zero_3C + 4 * i),
                   24,
                   0);
        if ( result < 0 ) /*0x6b8102*/
          break; /*0x6b8102*/
      }
    }
  }
  return result; /*0x6b810d*/
}


// ==== 0x006B8120  SpawnManagerClass::StubReturn116  this=SpawnManagerClass  sig=csp ====
int SpawnManagerClass::_vt12()
{
  return 116; /*0x6b8125*/
}


// ==== 0x006B8130  SpawnManagerClass::StubReturn65  this=SpawnManagerClass  sig=csp ====
int SpawnManagerClass::_vt11()
{
  return 65; /*0x6b8135*/
}


// ==== 0x006B8140  SpawnManagerClass::ProcessEvent  this=SpawnManagerClass  sig=csp ====
SpawnManagerClass *__thiscall SpawnManagerClass::ProcessEvent(void *Block, char a2)
{
  SpawnManagerClass::Constructor_SpawnManagerClass((int)Block); /*0x6b8143*/
  if ( (a2 & 1) != 0 ) /*0x6b814d*/
    __3_YAXPAX_Z(Block); /*0x6b8150*/
  return (SpawnManagerClass *)Block; /*0x6b815a*/
}


// ==== 0x006B8160  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall SpawnManagerClass_25_::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6b8166*/
  *(_DWORD *)(this + 16) = 0; /*0x6b8169*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6b8170*/
  {
    __3_YAXPAX_Z(v2); /*0x6b8176*/
    *(_DWORD *)(this + 4) = 0; /*0x6b817e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b8181*/
  *(_DWORD *)(this + 8) = 0; /*0x6b8184*/
}


// ==== 0x006B8190  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::LoadState  this=DynamicVector  sig=csp ====
unsigned int __thiscall SpawnManagerClass_25_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b8190*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b81a5*/
  else
    return 0; /*0x6b8197*/
}


// ==== 0x006B81B0  _VectorClass_PAUSpawnControl_SpawnManagerClass::SaveState  this=VectorClass  sig=csp ====
int __thiscall SpawnManagerClass_25_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6b81ba*/
}


// ==== 0x006B81C0  _DynamicVectorClass_PAVSpawnManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SpawnManagerClass::sub_6B81C0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6b81c6*/
  *(_DWORD *)(this + 16) = 0; /*0x6b81c9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6b81d0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b81d6*/
    *(_DWORD *)(this + 4) = 0; /*0x6b81de*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b81e1*/
  *(_DWORD *)(this + 8) = 0; /*0x6b81e4*/
}


// ==== 0x006B81F0  _DynamicVectorClass_PAVSpawnManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpawnManagerClass::sub_6B81F0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b81f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b8205*/
  else
    return 0; /*0x6b81f7*/
}


// ==== 0x006B8210  _VectorClass_PAVSpawnManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6b821a*/
}


// ==== 0x006B8220  _VectorClass_PAUSpawnControl_SpawnManagerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SpawnManagerClass_25_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6b8222*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6b822d*/
  {
    v3 = 0; /*0x6b822f*/
    if ( v2 <= 0 ) /*0x6b8233*/
      return 1; /*0x6b8253*/
    v4 = (_DWORD *)this->Items; /*0x6b8235*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b823b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b8244*/
    {
      ++v3; /*0x6b8246*/
      ++v4; /*0x6b8247*/
      if ( v3 >= v2 ) /*0x6b824c*/
        return 1; /*0x6b824c*/
    }
  }
  return 0; /*0x6b824e*/
}


// ==== 0x006B8260  ?$VectorClass@PAUSpawnControl@SpawnManagerClass@@::allocatePathMemory  this=VectorClass  sig=csp ====
char __thiscall AbstractClass::sub_6B8260(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6b826c*/
  {
    this->IsInitialized = 0; /*0x6b8276*/
    if ( a3 ) /*0x6b827c*/
      v4 = a3; /*0x6b8292*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b828e*/
    this->IsInitialized = 1; /*0x6b8296*/
    if ( v4 ) /*0x6b829a*/
    {
      if ( this->Items ) /*0x6b82a5*/
      {
        v6 = this->Capacity; /*0x6b82ac*/
        if ( a2 < v6 ) /*0x6b82b1*/
          v6 = a2; /*0x6b82b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b82b9*/
          ++i; /*0x6b82be*/
        if ( this->IsAllocated ) /*0x6b82cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b82d6*/
          this->Items = 0; /*0x6b82de*/
        }
      }
      this->Items = v4; /*0x6b82e7*/
      this->Capacity = a2; /*0x6b82ef*/
      this->IsAllocated = a3 == 0; /*0x6b82f2*/
      return 1; /*0x6b82f8*/
    }
    else
    {
      return 0; /*0x6b829f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b8302*/
    return 1; /*0x6b8308*/
  }
}


// ==== 0x006B8310  ?$VectorClass@PAUSpawnControl@SpawnManagerClass@@::freePathMemory  this=VectorClass  sig=csp ====
void __thiscall AbstractClass::sub_6B8310(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6b831d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6b8323*/
    *(_DWORD *)(this + 4) = 0; /*0x6b832b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b832e*/
  *(_DWORD *)(this + 8) = 0; /*0x6b8331*/
}


// ==== 0x006B8340  ?$VectorClass@PAUSpawnControl@SpawnManagerClass@@::initPathState  this=VectorClass  sig=csp ====
int __thiscall AbstractClass::sub_6B8340(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6b8340*/
    return 0; /*0x6b8348*/
  v3 = *(_DWORD *)(this + 8); /*0x6b834e*/
  result = 0; /*0x6b8351*/
  if ( v3 <= 0 ) /*0x6b8355*/
    return -1; /*0x6b836c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6b835b*/
  {
    if ( ++result >= v3 ) /*0x6b836a*/
      return -1; /*0x6b836a*/
  }
  return result; /*0x6b834a*/
}


// ==== 0x006B8380  ?$VectorClass@PAUSpawnControl@SpawnManagerClass@@::resetPathMemory  this=VectorClass  sig=csp ====
unsigned int __thiscall AbstractClass::sub_6B8380(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b8380*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b8395*/
  else
    return 0; /*0x6b8387*/
}


// ==== 0x006B83A0  SpawnManagerClass::Constructor_6B83A0  this=VectorClass  sig=csp ====
_DWORD *__thiscall SpawnManagerClass::Constructor_6B83A0(_DWORD *this, DynamicVector *aP1, DynamicVector *aP2)
{
  this->Items = 0; /*0x6b83a9*/
  this->Capacity = aP1; /*0x6b83b0*/
  this->q030 = 1; /*0x6b83b3*/
  this->__pad_034 = 0; /*0x6b83b7*/
  *this = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b83bb*/
  if ( aP1 ) /*0x6b83c1*/
  {
    if ( aP2 ) /*0x6b83c9*/
    {
      this->Items = aP2; /*0x6b83cb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x6b83dc*/
      this->__pad_034 = 1; /*0x6b83df*/
    }
  }
  *this = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b83e3*/
  *(this + 5) = 10; /*0x6b83e9*/
  this->q010 = 0; /*0x6b83f0*/
  return this; /*0x6b83f9*/
}


// ==== 0x006B8400  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::Release  this=DynamicVector  sig=csp ====
char __thiscall SpawnManagerClass_25_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b840c*/
  {
    this->IsInitialized = 0; /*0x6b8412*/
    if ( a3 ) /*0x6b8418*/
      v4 = a3; /*0x6b842e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b842a*/
    this->IsInitialized = 1; /*0x6b8432*/
    if ( !v4 ) /*0x6b8436*/
      return 0; /*0x6b84aa*/
    if ( this->Items ) /*0x6b8438*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6b843f*/
      if ( a2 < v5 ) /*0x6b8444*/
        v5 = a2; /*0x6b8446*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b844c*/
        ++i; /*0x6b8451*/
      if ( this->IsAllocated ) /*0x6b845e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b8469*/
        this->Items = 0; /*0x6b8471*/
      }
    }
    this->Items = v4; /*0x6b847a*/
    this->DynamicVector_field_0x8 = a2; /*0x6b8482*/
    this->IsAllocated = a3 == 0; /*0x6b8485*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b848e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x6b8491*/
  if ( v7 < this->Items ) /*0x6b8499*/
    this->Items = v7; /*0x6b849b*/
  return 1; /*0x6b849e*/
}


// ==== 0x006B84B0  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::Spawn  this=DynamicVector  sig=csp ====
int __thiscall SpawnManagerClass_25_::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6b84b0*/
  result = 0; /*0x6b84b3*/
  if ( v2 <= 0 ) /*0x6b84b8*/
    return -1; /*0x6b84cf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6b84be*/
  {
    if ( ++result >= v2 ) /*0x6b84cd*/
      return -1; /*0x6b84cd*/
  }
  return result; /*0x6b84d2*/
}


// ==== 0x006B84E0  _VectorClass_PAVSpawnManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6b84e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6b84ed*/
  {
    v3 = 0; /*0x6b84ef*/
    if ( v2 <= 0 ) /*0x6b84f3*/
      return 1; /*0x6b8513*/
    v4 = (_DWORD *)this->Items; /*0x6b84f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b84fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b8504*/
    {
      ++v3; /*0x6b8506*/
      ++v4; /*0x6b8507*/
      if ( v3 >= v2 ) /*0x6b850c*/
        return 1; /*0x6b850c*/
    }
  }
  return 0; /*0x6b850e*/
}


// ==== 0x006B8520  _VectorClass_PAVSpawnManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x6b852c*/
  {
    this->IsInitialized = 0; /*0x6b8536*/
    if ( a3 ) /*0x6b853c*/
      v4 = a3; /*0x6b8552*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b854e*/
    this->IsInitialized = 1; /*0x6b8556*/
    if ( v4 ) /*0x6b855a*/
    {
      if ( this->Items ) /*0x6b8565*/
      {
        v6 = this->Capacity; /*0x6b856c*/
        if ( a2 < v6 ) /*0x6b8571*/
          v6 = a2; /*0x6b8573*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b8579*/
          ++i; /*0x6b857e*/
        if ( this->IsAllocated ) /*0x6b858b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b8596*/
          this->Items = 0; /*0x6b859e*/
        }
      }
      this->Items = v4; /*0x6b85a7*/
      this->Capacity = a2; /*0x6b85af*/
      this->IsAllocated = a3 == 0; /*0x6b85b2*/
      return 1; /*0x6b85b8*/
    }
    else
    {
      return 0; /*0x6b855f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b85c2*/
    return 1; /*0x6b85c8*/
  }
}


// ==== 0x006B85D0  _VectorClass_PAVSpawnManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SpawnManagerClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x6b85dd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x6b85e3*/
    *(_DWORD *)(this + 4) = 0; /*0x6b85eb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6b85ee*/
  *(_DWORD *)(this + 8) = 0; /*0x6b85f1*/
}


// ==== 0x006B8600  _VectorClass_PAVSpawnManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x6b8600*/
    return 0; /*0x6b8608*/
  v3 = *(_DWORD *)(this + 8); /*0x6b860e*/
  result = 0; /*0x6b8611*/
  if ( v3 <= 0 ) /*0x6b8615*/
    return -1; /*0x6b862c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x6b861b*/
  {
    if ( ++result >= v3 ) /*0x6b862a*/
      return -1; /*0x6b862a*/
  }
  return result; /*0x6b860a*/
}


// ==== 0x006B8640  _VectorClass_PAVSpawnManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpawnManagerClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6b8640*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6b8655*/
  else
    return 0; /*0x6b8647*/
}


// ==== 0x006B8660  _DynamicVectorClass_PAVSpawnManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::sub_6B8660(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b866c*/
  {
    this->IsInitialized = 0; /*0x6b8672*/
    if ( a3 ) /*0x6b8678*/
      v4 = a3; /*0x6b868e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x6b868a*/
    this->IsInitialized = 1; /*0x6b8692*/
    if ( !v4 ) /*0x6b8696*/
      return 0; /*0x6b870a*/
    if ( this->Items ) /*0x6b8698*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x6b869f*/
      if ( a2 < v5 ) /*0x6b86a4*/
        v5 = a2; /*0x6b86a6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b86ac*/
        ++i; /*0x6b86b1*/
      if ( this->IsAllocated ) /*0x6b86be*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x6b86c9*/
        this->Items = 0; /*0x6b86d1*/
      }
    }
    this->Items = v4; /*0x6b86da*/
    this->DynamicVector_field_0x8 = a2; /*0x6b86e2*/
    this->IsAllocated = a3 == 0; /*0x6b86e5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x6b86ee*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x6b86f1*/
  if ( v7 < this->Items ) /*0x6b86f9*/
    this->Items = v7; /*0x6b86fb*/
  return 1; /*0x6b86fe*/
}


// ==== 0x006B8710  _DynamicVectorClass_PAVSpawnManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::sub_6B8710(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x6b8710*/
  result = 0; /*0x6b8713*/
  if ( v2 <= 0 ) /*0x6b8718*/
    return -1; /*0x6b872f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6b871e*/
  {
    if ( ++result >= v2 ) /*0x6b872d*/
      return -1; /*0x6b872d*/
  }
  return result; /*0x6b8732*/
}


// ==== 0x006B8740  ?$VectorClass@PAUSpawnControl@SpawnManagerClass@@::validatePathMemory  this=VectorClass  sig=csp ====
VectorClass *__thiscall AbstractClass::validatePathMemory(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b8743*/
  *Block = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b8746*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b8750*/
  {
    __3_YAXPAX_Z(v3); /*0x6b8758*/
    *(Block + 1) = 0; /*0x6b8760*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b876b*/
  *(Block + 2) = 0; /*0x6b8771*/
  if ( (a2 & 1) != 0 ) /*0x6b8778*/
    __3_YAXPAX_Z(Block); /*0x6b877b*/
  return (VectorClass *)Block; /*0x6b8785*/
}


// ==== 0x006B8790  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall SpawnManagerClass_25_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b8793*/
  *Block = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b8796*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b87a0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87a8*/
    *(Block + 1) = 0; /*0x6b87b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b87bb*/
  *(Block + 2) = 0; /*0x6b87c1*/
  if ( (a2 & 1) != 0 ) /*0x6b87c8*/
    __3_YAXPAX_Z(Block); /*0x6b87cb*/
  return (DynamicVector *)Block; /*0x6b87d5*/
}


// ==== 0x006B87E0  _VectorClass_PAVSpawnManagerClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_SpawnManagerClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b87e3*/
  *Block = &vt_VectorClass_SpawnManagerClass; /*0x6b87e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b87f0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87f8*/
    *(Block + 1) = 0; /*0x6b8800*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b880b*/
  *(Block + 2) = 0; /*0x6b8811*/
  if ( (a2 & 1) != 0 ) /*0x6b8818*/
    __3_YAXPAX_Z(Block); /*0x6b881b*/
  return (VectorClass *)Block; /*0x6b8825*/
}


// ==== 0x006B8830  _DynamicVectorClass_PAVSpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_SpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b8833*/
  *Block = &vt_VectorClass_SpawnManagerClass; /*0x6b8836*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b8840*/
  {
    __3_YAXPAX_Z(v3); /*0x6b8848*/
    *(Block + 1) = 0; /*0x6b8850*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b885b*/
  *(Block + 2) = 0; /*0x6b8861*/
  if ( (a2 & 1) != 0 ) /*0x6b8868*/
    __3_YAXPAX_Z(Block); /*0x6b886b*/
  return (DynamicVector *)Block; /*0x6b8875*/
}


// ==== 0x006B8880  SpawnControlVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall SpawnControlVector::Constructor(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x6b888b*/
  this->Capacity = a2; /*0x6b888e*/
  this->q030 = 1; /*0x6b8891*/
  this->__pad_034 = 0; /*0x6b8895*/
  *this = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b8898*/
  if ( a2 ) /*0x6b889e*/
  {
    if ( a3 ) /*0x6b88a6*/
    {
      this->Items = a3; /*0x6b88a8*/
      return this; /*0x6b88ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x6b88bd*/
    this->__pad_034 = 1; /*0x6b88c0*/
  }
  return this; /*0x6b88ad*/
}


// ==== 0x006B88D0  sub_6B88D0  this=-  sig=ida-proto ====
int sub_6B88D0()
{
  MEMORY[0xB0B8A8] = 0; /*0x6b88d2*/
  MEMORY[0xB0B8AC] = 0; /*0x6b88d7*/
  MEMORY[0xB0B8B0] = 0; /*0x6b88dc*/
  MEMORY[0xB0B8B4] = 0; /*0x6b88e1*/
  return 0; /*0x6b88e6*/
}


// ==== 0x006B88F0  sub_6B88F0  this=-  sig=ida-proto ====
void sub_6B88F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b88fc*/
  MEMORY[0xB0B8C0] = Math::Sqrt(v0 + v0); /*0x6b890e*/
}


// ==== 0x006B8920  sub_6B8920  this=-  sig=ida-proto ====
void sub_6B8920()
{
  MEMORY[0xB0B910] = MEMORY[0xB0B8C0] / 60.0; /*0x6b892c*/
}


// ==== 0x006B8940  sub_6B8940  this=-  sig=ida-proto ====
void sub_6B8940()
{
  MEMORY[0xB0B8F8] = 1.0 / MEMORY[0xB0B910]; /*0x6b894c*/
}


// ==== 0x006B8960  sub_6B8960  this=-  sig=ida-proto ====
void sub_6B8960()
{
  MEMORY[0xB0B8F0] = 0.0174532925199433 * 45.0; /*0x6b896c*/
}


// ==== 0x006B8980  sub_6B8980  this=-  sig=ida-proto ====
void sub_6B8980()
{
  MEMORY[0xB0B8C8] = 0.0174532925199433 * 60.0; /*0x6b898c*/
}


// ==== 0x006B89A0  sub_6B89A0  this=-  sig=ida-proto ====
void sub_6B89A0()
{
  MEMORY[0xB0B8A0] = 0.0174532925199433 * 90.0; /*0x6b89ac*/
}


// ==== 0x006B89C0  sub_6B89C0  this=-  sig=ida-proto ====
__int64 sub_6B89C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0B8A0] - MEMORY[0xB0B8C8]); /*0x6b89d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0B8C0] * 0.5); /*0x6b89e6*/
  MEMORY[0xB0B918] = result; /*0x6b89eb*/
  return result; /*0x6b89f0*/
}


// ==== 0x006B8A00  sub_6B8A00  this=-  sig=ida-proto ====
void sub_6B8A00()
{
  MEMORY[0xB0B8D0] = Math::ArcTan((double)MEMORY[0xB0B918] * 0.00390625); /*0x6b8a17*/
}


// ==== 0x006B8A30  sub_6B8A30  this=-  sig=ida-proto ====
void sub_6B8A30()
{
  MEMORY[0xB0B8E8] = Math::ArcTan((double)(2 * MEMORY[0xB0B918]) / MEMORY[0xB0B8C0]); /*0x6b8a52*/
}


// ==== 0x006B8A60  sub_6B8A60  this=-  sig=ida-proto ====
__int64 sub_6B8A60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0B918]) + 0.5); /*0x6b8a7b*/
  MEMORY[0xB0B90C] = result; /*0x6b8a80*/
  return result; /*0x6b8a86*/
}


// ==== 0x006B8A90  sub_6B8A90  this=-  sig=ida-proto ====
int sub_6B8A90()
{
  MEMORY[0xB0B8B8] = 0; /*0x6b8a92*/
  MEMORY[0xB0B8BA] = 0; /*0x6b8a98*/
  return 0; /*0x6b8a9e*/
}


// ==== 0x006B8AA0  sub_6B8AA0  this=-  sig=ida-proto ====
int sub_6B8AA0()
{
  MEMORY[0xB0B8D8] = 0; /*0x6b8aa2*/
  MEMORY[0xB0B8DC] = 0; /*0x6b8aa7*/
  MEMORY[0xB0B8E0] = 0; /*0x6b8aac*/
  return 0; /*0x6b8ab1*/
}


// ==== 0x006B8AC0  sub_6B8AC0  this=-  sig=ida-proto ====
int sub_6B8AC0()
{
  MEMORY[0xB0B908] = 0; /*0x6b8ac5*/
  MEMORY[0xB0B900] = 128; /*0x6b8acf*/
  MEMORY[0xB0B904] = 128; /*0x6b8ad4*/
  return 128; /*0x6b8ad9*/
}


// ==== 0x006B8AE0  ScenarioClass::ResetIntroFlags  this=ScenarioClass  sig=csp ====
unsigned int __thiscall sub_6B8AE0(unsigned int *this)
{
  unsigned int result; // eax

  result = *this & 0xFFF80000 | 0x8088; /*0x6b8ae7*/
  *this = result; /*0x6b8aec*/
  return result; /*0x6b8aee*/
}


// ==== 0x006B8AF0  ObjectClass::ApplyGameOptions_Helper  this=ObjectClass  sig=csp ====
bool __thiscall sub_6B8AF0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = *this ^ *a2; /*0x6b8af8*/
  return !(_BYTE)v2 && (v2 & 0x7FF00) == 0; /*0x6b8b07*/
}


// ==== 0x006B8B10  ObjectClass::nullsub_37  this=ObjectClass  sig=csp ====
void nullsub_37()
{
  ; /*0x6b8b10*/
}


// ==== 0x006B8B20  ObjectClass::nullsub_38  this=ObjectClass  sig=csp ====
void nullsub_38()
{
  ; /*0x6b8b20*/
}


// ==== 0x006B8B30  ScenarioClass::RevealMapForHouse  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::RevealMapForHouse(_DWORD *this, CCINIClass *aP1)
{
  INIClass *v3; // eax
  INIClass *v4; // edx
  INIClass *v5; // ecx
  INIClass *v6; // eax
  INIClass *v7; // edx
  INIClass *v8; // ecx
  INIClass *v9; // eax
  INIClass *v10; // edx
  INIClass *v11; // ecx
  INIClass *v12; // eax
  INIClass *v13; // edx
  INIClass *v14; // ecx
  INIClass *v15; // eax

  v3 = (INIClass *)(*this >> 6); /*0x6b8b40*/
  LOBYTE(v3) = (*this & 0x40) != 0; /*0x6b8b43*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[29252], v3); /*0x6b8b4e*/
  v4 = (INIClass *)(*this >> 7); /*0x6b8b5a*/
  LOBYTE(v4) = (*this & 0x80) != 0; /*0x6b8b5d*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42144], v4); /*0x6b8b69*/
  v5 = (INIClass *)(*this >> 14); /*0x6b8b76*/
  LOBYTE(v5) = (*this & 0x4000) != 0; /*0x6b8b79*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[20336], v5); /*0x6b8b85*/
  v6 = (INIClass *)(*this >> 15); /*0x6b8b92*/
  LOBYTE(v6) = (*this & 0x8000) != 0; /*0x6b8b95*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42124], v6); /*0x6b8ba0*/
  v7 = (INIClass *)(*this >> 8); /*0x6b8bac*/
  LOBYTE(v7) = (unsigned __int8)v7 & 1; /*0x6b8baf*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42112], v7); /*0x6b8bbb*/
  v8 = (INIClass *)(*this >> 9); /*0x6b8bc8*/
  LOBYTE(v8) = (*this & 0x200) != 0; /*0x6b8bcb*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42096], v8); /*0x6b8bd7*/
  v9 = (INIClass *)(*this >> 10); /*0x6b8be4*/
  LOBYTE(v9) = (*this & 0x400) != 0; /*0x6b8be7*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42080], v9); /*0x6b8bf2*/
  v10 = (INIClass *)(*this >> 11); /*0x6b8bfe*/
  LOBYTE(v10) = (*this & 0x800) != 0; /*0x6b8c01*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42064], v10); /*0x6b8c0d*/
  v11 = (INIClass *)(*this >> 12); /*0x6b8c14*/
  LOBYTE(v11) = (*this & 0x1000) != 0; /*0x6b8c17*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[29116], v11); /*0x6b8c29*/
  v12 = (INIClass *)(*this >> 5); /*0x6b8c36*/
  LOBYTE(v12) = (*this & 0x20) != 0; /*0x6b8c39*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42056], v12); /*0x6b8c44*/
  v13 = (INIClass *)(*this >> 17); /*0x6b8c50*/
  LOBYTE(v13) = (*this & 0x20000) != 0; /*0x6b8c53*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42044], v13); /*0x6b8c5f*/
  v14 = (INIClass *)HIWORD(*this); /*0x6b8c6c*/
  LOBYTE(v14) = (unsigned __int8)v14 & 1; /*0x6b8c6f*/
  INIClass::SetBool(aP1->__pad_0, *(INIClass **)&stru_830620.__pad_579C[41996], &stru_830620.__pad_579C[42032], v14); /*0x6b8c7b*/
  v15 = (INIClass *)(*this >> 18); /*0x6b8c88*/
  LOBYTE(v15) = (*this & 0x40000) != 0; /*0x6b8c8b*/
  return INIClass::SetBool( /*0x6b8c9b*/
           aP1->__pad_0,
           *(INIClass **)&stru_830620.__pad_579C[41996],
           &stru_830620.__pad_579C[42020],
           v15);
}


// ==== 0x006B8CA0  GameMode::ReadFlagsFromINI  this=AbstractTypeClass  sig=csp ====
unsigned int __thiscall GameMode::ReadFlagsFromINI(int *this, CCINIClass *aP1)
{
  char Bool_Overwrite; // al
  int v4; // edx
  int v5; // eax
  char v6; // al
  int v7; // ecx
  int v8; // eax
  char v9; // al
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int result; // eax
  unsigned int v15; // eax
  char v16; // al
  int v17; // ecx
  int v18; // eax
  char v19; // al
  int v20; // ecx
  int v21; // eax
  char v22; // al
  int v23; // ecx
  int v24; // eax
  char v25; // al
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  char v29; // al
  int v30; // ecx

  INIClass::ResetSection(aP1); /*0x6b8caa*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b8cc5*/
                     (int)aP1,
                     *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
                     (CCINIClass *)&stru_830620.__pad_579C[20336],
                     (*this & 0x4000) != 0);
  v4 = *this; /*0x6b8cca*/
  BYTE1(v4) = BYTE1(*this) & 0xBF; /*0x6b8cd2*/
  v5 = v4 | ((Bool_Overwrite & 1) << 14); /*0x6b8cd7*/
  *this = v5; /*0x6b8cd9*/
  v6 = INIClass::ReadBool_Overwrite( /*0x6b8cec*/
         (int)aP1,
         *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
         (CCINIClass *)&stru_830620.__pad_579C[42112],
         BYTE1(v5) & 1);
  v7 = *this; /*0x6b8cf1*/
  BYTE1(v7) = BYTE1(*this) & 0xFE; /*0x6b8cf9*/
  v8 = v7 | ((v6 & 1) << 8); /*0x6b8cfc*/
  *this = v8; /*0x6b8d00*/
  v9 = INIClass::ReadBool_Overwrite( /*0x6b8d14*/
         (int)aP1,
         *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
         (CCINIClass *)&stru_830620.__pad_579C[42096],
         (v8 & 0x200) != 0);
  v10 = *this; /*0x6b8d19*/
  BYTE1(v10) = BYTE1(*this) & 0xFD; /*0x6b8d21*/
  v11 = v10 | ((v9 & 1) << 9); /*0x6b8d24*/
  *this = v11; /*0x6b8d28*/
  v12 = *this & 0xFFFDFFFF /*0x6b8d4f*/
      | ((INIClass::ReadBool_Overwrite(
            (int)aP1,
            *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
            (CCINIClass *)&stru_830620.__pad_579C[42044],
            (v11 & 0x20000) != 0)
        & 1) << 17);
  *this = v12; /*0x6b8d53*/
  v13 = *this & 0xFFFEFFFF /*0x6b8d7a*/
      | ((INIClass::ReadBool_Overwrite(
            (int)aP1,
            *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
            (CCINIClass *)&stru_830620.__pad_579C[42032],
            BYTE2(v12) & 1)
        & 1) << 16);
  *this = v13; /*0x6b8d7c*/
  result = *this & 0xFFFBFFFF /*0x6b8da5*/
         | ((INIClass::ReadBool_Overwrite(
               (int)aP1,
               *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
               (CCINIClass *)&stru_830620.__pad_579C[42020],
               (v13 & 0x40000) != 0)
           & 1) << 18);
  *this = result; /*0x6b8da7*/
  if ( !MEMORY[0xA8B238] || MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x6b8dbb*/
  {
    v15 = *this & 0xFFFFFFBF /*0x6b8de5*/
        | ((INIClass::ReadBool_Overwrite(
              (int)aP1,
              *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
              (CCINIClass *)&stru_830620.__pad_579C[29252],
              (result & 0x40) != 0)
          & 1) << 6);
    *this = v15; /*0x6b8de9*/
    v16 = INIClass::ReadBool_Overwrite( /*0x6b8dfd*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
            (CCINIClass *)&stru_830620.__pad_579C[42144],
            (v15 & 0x80) != 0);
    v17 = *this; /*0x6b8e02*/
    LOBYTE(v17) = *this & 0x7F; /*0x6b8e0a*/
    v18 = v17 | ((v16 & 1) << 7); /*0x6b8e0d*/
    *this = v18; /*0x6b8e11*/
    v19 = INIClass::ReadBool_Overwrite( /*0x6b8e25*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
            (CCINIClass *)&stru_830620.__pad_579C[42124],
            (v18 & 0x8000) != 0);
    v20 = *this; /*0x6b8e2a*/
    BYTE1(v20) = BYTE1(*this) & 0x7F; /*0x6b8e32*/
    v21 = v20 | ((v19 & 1) << 15); /*0x6b8e35*/
    *this = v21; /*0x6b8e39*/
    v22 = INIClass::ReadBool_Overwrite( /*0x6b8e4d*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
            (CCINIClass *)&stru_830620.__pad_579C[42080],
            (v21 & 0x400) != 0);
    v23 = *this; /*0x6b8e52*/
    BYTE1(v23) = BYTE1(*this) & 0xFB; /*0x6b8e5a*/
    v24 = v23 | ((v22 & 1) << 10); /*0x6b8e5d*/
    *this = v24; /*0x6b8e61*/
    v25 = INIClass::ReadBool_Overwrite( /*0x6b8e75*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
            (CCINIClass *)&stru_830620.__pad_579C[29116],
            (v24 & 0x1000) != 0);
    v26 = *this; /*0x6b8e7a*/
    BYTE1(v26) = BYTE1(*this) & 0xEF; /*0x6b8e82*/
    v27 = v26 | ((v25 & 1) << 12); /*0x6b8e85*/
    *this = v27; /*0x6b8e89*/
    v28 = *this & 0xFFFFFFDF /*0x6b8ead*/
        | (32
         * (INIClass::ReadBool_Overwrite(
              (int)aP1,
              *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
              (CCINIClass *)&stru_830620.__pad_579C[42056],
              (v27 & 0x20) != 0)
          & 1));
    *this = v28; /*0x6b8eb1*/
    v29 = INIClass::ReadBool_Overwrite( /*0x6b8ec5*/
            (int)aP1,
            *(unsigned __int8 **)&stru_830620.__pad_579C[42000],
            (CCINIClass *)&stru_830620.__pad_579C[42064],
            (v28 & 0x800) != 0);
    v30 = *this; /*0x6b8eca*/
    BYTE1(v30) = BYTE1(*this) & 0xF7; /*0x6b8ed2*/
    result = v30 | ((v29 & 1) << 11); /*0x6b8ed5*/
    *this = result; /*0x6b8ed7*/
  }
  return result; /*0x6b8ed9*/
}


// ==== 0x006B8EE0  sub_6B8EE0  this=-  sig=ida-proto ====
int sub_6B8EE0()
{
  MEMORY[0xB0B920] = 0; /*0x6b8ee2*/
  MEMORY[0xB0B924] = 0; /*0x6b8ee7*/
  MEMORY[0xB0B928] = 0; /*0x6b8eec*/
  MEMORY[0xB0B92C] = 0; /*0x6b8ef1*/
  return 0; /*0x6b8ef6*/
}


// ==== 0x006B8F00  DrawAffineTexture  this=-  sig=ida-proto ====
int __fastcall Texture_DrawAffine(int a1, _DWORD *a2, int *a3, int a4, unsigned __int8 a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  int v14; // edi
  int v15; // esi
  int v16; // edi
  int v17; // ebx
  int v18; // esi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  _BYTE *v22; // edx
  _DWORD *v23; // ebp
  int v24; // edi
  char v25; // al
  int v26; // ecx
  int v27; // edi
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
  bool v31; // cc
  _BYTE *v33; // edx
  int v34; // edi
  char v35; // al
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  int v41; // [esp+10h] [ebp-44h]
  int v42; // [esp+14h] [ebp-40h]
  int v43; // [esp+18h] [ebp-3Ch]
  int v44; // [esp+1Ch] [ebp-38h]
  int v46; // [esp+24h] [ebp-30h]
  int v47; // [esp+28h] [ebp-2Ch]
  int v48; // [esp+28h] [ebp-2Ch]
  int v50; // [esp+30h] [ebp-24h]
  int v51; // [esp+34h] [ebp-20h]
  int v52; // [esp+38h] [ebp-1Ch]
  int v53; // [esp+3Ch] [ebp-18h]
  int v54; // [esp+40h] [ebp-14h]
  int v55; // [esp+44h] [ebp-10h]
  int v56; // [esp+48h] [ebp-Ch]
  int v57; // [esp+48h] [ebp-Ch]
  int v58; // [esp+48h] [ebp-Ch]
  int v59; // [esp+50h] [ebp-4h]
  int v60; // [esp+58h] [ebp+4h]
  int v61; // [esp+58h] [ebp+4h]
  int v62; // [esp+5Ch] [ebp+8h]
  int v63; // [esp+5Ch] [ebp+8h]
  int v64; // [esp+60h] [ebp+Ch]
  int v65; // [esp+60h] [ebp+Ch]

  v59 = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)a1 + 92))(0, 0); /*0x6b8f27*/
  v42 = 0; /*0x6b8f3a*/
  v6 = a5; /*0x6b8f3e*/
  v44 = 0; /*0x6b8f41*/
  v41 = 0; /*0x6b8f45*/
  v7 = MEMORY[0x84066C][v6]; /*0x6b8f49*/
  v8 = (a4 * *a2) >> 1; /*0x6b8f55*/
  v56 = MEMORY[0x84026C][v6]; /*0x6b8f59*/
  v9 = (a4 * a2[1]) >> 1; /*0x6b8f62*/
  v10 = v56 * v9; /*0x6b8f64*/
  v11 = v7 * v9; /*0x6b8f69*/
  v12 = (v56 * v8) >> 8; /*0x6b8f7e*/
  v64 = *a3; /*0x6b8f8a*/
  v13 = *a3 + (((v11 >> 8) - v12) >> 8); /*0x6b8f91*/
  v60 = a3[1]; /*0x6b8f9a*/
  v62 = (v7 * v8) >> 8; /*0x6b8fa5*/
  v14 = (v11 >> 8) + v12; /*0x6b8fbc*/
  v15 = v64 + (((-v11 >> 8) - v12) >> 8); /*0x6b8fe3*/
  v55 = v60 + (((v10 >> 8) - v62) >> 8); /*0x6b8ff7*/
  v43 = v64 + (v14 >> 8) - v13; /*0x6b8fff*/
  v16 = v60 + (((-v10 >> 8) - v62) >> 8); /*0x6b9003*/
  v17 = ((v62 + (-v10 >> 8)) >> 8) - (((-v10 >> 8) - v62) >> 8); /*0x6b9009*/
  v61 = 0; /*0x6b900b*/
  v51 = 1; /*0x6b9013*/
  v50 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b9022*/
  v18 = v15 - v13; /*0x6b902a*/
  v57 = v18; /*0x6b9030*/
  v46 = v55 - v16; /*0x6b9034*/
  v63 = 0; /*0x6b9038*/
  v52 = 1; /*0x6b9040*/
  v53 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b904d*/
  if ( v17 < 0 ) /*0x6b9051*/
  {
    v17 = -v17; /*0x6b9057*/
    v50 = -(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b9060*/
  }
  if ( v43 < 0 ) /*0x6b906a*/
  {
    v43 = -v43; /*0x6b906e*/
    v51 = -1; /*0x6b9072*/
  }
  if ( v46 < 0 ) /*0x6b9080*/
  {
    v46 = v16 - v55; /*0x6b908a*/
    v53 = -(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b9093*/
  }
  if ( v18 < 0 ) /*0x6b9099*/
  {
    v18 = -v18; /*0x6b909b*/
    v57 = v18; /*0x6b909d*/
    v52 = -1; /*0x6b90a1*/
  }
  v19 = v13 + v16 * (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x6b90b7*/
  v65 = v19; /*0x6b90b9*/
  if ( v19 >= 0 ) /*0x6b90bd*/
  {
    v20 = v43; /*0x6b90c3*/
    if ( v43 <= v17 ) /*0x6b90c9*/
    {
      v48 = 0; /*0x6b921e*/
      if ( v18 > 0 ) /*0x6b9222*/
      {
        while ( v19 >= 0 ) /*0x6b9230*/
        {
          if ( v17 <= 0 ) /*0x6b9238*/
          {
            v34 = v41; /*0x6b9343*/
          }
          else
          {
            v58 = v17; /*0x6b9242*/
            v33 = (_BYTE *)(v59 + v19); /*0x6b9246*/
            do /*0x6b92b1*/
            {
              v34 = v41; /*0x6b924c*/
              v35 = *(_BYTE *)(v41 + a2[2]); /*0x6b9253*/
              if ( v35 ) /*0x6b9258*/
                *v33 = v35; /*0x6b925a*/
              v42 += *a2; /*0x6b9265*/
              v36 = v42; /*0x6b9260*/
              if ( v42 > v17 ) /*0x6b9269*/
              {
                do /*0x6b9270*/
                {
                  v36 -= v17; /*0x6b926b*/
                  ++v34; /*0x6b926d*/
                }
                while ( v36 > v17 ); /*0x6b9270*/
                v42 = v36; /*0x6b9272*/
                v41 = v34; /*0x6b9276*/
              }
              v33 += v50; /*0x6b9282*/
              v61 += v43; /*0x6b928c*/
              if ( v61 > v17 ) /*0x6b9290*/
              {
                if ( v35 ) /*0x6b9294*/
                  *v33 = v35; /*0x6b9296*/
                v33 += v51; /*0x6b92a2*/
                v61 -= v17; /*0x6b92a4*/
              }
              --v58; /*0x6b92ad*/
            }
            while ( v58 ); /*0x6b92b1*/
          }
          v42 = 0; /*0x6b92be*/
          v37 = 1 - *a2 + v34; /*0x6b92c6*/
          v41 = v37; /*0x6b92cf*/
          v44 += a2[1]; /*0x6b92d5*/
          v38 = v44; /*0x6b92cc*/
          if ( v44 > v18 ) /*0x6b92d9*/
          {
            do /*0x6b92e1*/
            {
              v38 -= v18; /*0x6b92db*/
              v37 += *a2; /*0x6b92dd*/
            }
            while ( v38 > v18 ); /*0x6b92e1*/
            v44 = v38; /*0x6b92e3*/
            v41 = v37; /*0x6b92e7*/
          }
          v39 = v52 + v65; /*0x6b92f7*/
          v65 += v52; /*0x6b92fd*/
          v40 = v46 + v63; /*0x6b9301*/
          v61 = 0; /*0x6b9303*/
          v63 += v46; /*0x6b9309*/
          if ( v63 > v18 ) /*0x6b930d*/
          {
            v63 = v40 - v18; /*0x6b9311*/
            v65 = v53 + v39; /*0x6b931b*/
          }
          if ( ++v48 >= v18 ) /*0x6b932a*/
            break; /*0x6b932a*/
          v19 = v65; /*0x6b922a*/
        }
      }
    }
    else
    {
      v21 = v46; /*0x6b90cf*/
      v47 = 0; /*0x6b90d3*/
      if ( v46 > 0 ) /*0x6b90dd*/
      {
        while ( v19 >= 0 ) /*0x6b90ef*/
        {
          if ( v20 <= 0 ) /*0x6b90f7*/
          {
            v23 = a2; /*0x6b920d*/
            v24 = v41; /*0x6b9211*/
          }
          else
          {
            v54 = v20; /*0x6b9101*/
            v22 = (_BYTE *)(v59 + v19); /*0x6b9105*/
            do /*0x6b9172*/
            {
              v23 = a2; /*0x6b9107*/
              v24 = v41; /*0x6b910b*/
              v25 = *(_BYTE *)(v41 + a2[2]); /*0x6b9112*/
              if ( v25 ) /*0x6b9117*/
                *v22 = v25; /*0x6b9119*/
              v42 += *a2; /*0x6b912a*/
              v26 = v42; /*0x6b9122*/
              if ( v42 > v43 ) /*0x6b912e*/
              {
                do /*0x6b9135*/
                {
                  v26 -= v43; /*0x6b9130*/
                  ++v24; /*0x6b9132*/
                }
                while ( v26 > v43 ); /*0x6b9135*/
                v42 = v26; /*0x6b9137*/
                v41 = v24; /*0x6b913b*/
              }
              v22 += v51; /*0x6b9143*/
              v61 += v17; /*0x6b914d*/
              if ( v61 > v43 ) /*0x6b9151*/
              {
                if ( v25 ) /*0x6b9155*/
                  *v22 = v25; /*0x6b9157*/
                v22 += v50; /*0x6b9163*/
                v61 -= v43; /*0x6b9165*/
              }
              --v54; /*0x6b916e*/
            }
            while ( v54 ); /*0x6b9172*/
            v18 = v57; /*0x6b9174*/
            v21 = v46; /*0x6b9178*/
          }
          v42 = 0; /*0x6b9186*/
          v27 = 1 - *v23 + v24; /*0x6b918e*/
          v41 = v27; /*0x6b9197*/
          v44 += v23[1]; /*0x6b919d*/
          v28 = v44; /*0x6b9194*/
          if ( v44 > v21 ) /*0x6b91a1*/
          {
            do /*0x6b91a9*/
            {
              v28 -= v21; /*0x6b91a3*/
              v27 += *v23; /*0x6b91a5*/
            }
            while ( v28 > v21 ); /*0x6b91a9*/
            v44 = v28; /*0x6b91ab*/
            v41 = v27; /*0x6b91af*/
          }
          v29 = v53 + v65; /*0x6b91bb*/
          v30 = v18 + v63; /*0x6b91c1*/
          v61 = 0; /*0x6b91c3*/
          v31 = v18 + v63 <= v21; /*0x6b91cb*/
          v65 += v53; /*0x6b91cd*/
          v63 += v18; /*0x6b91d1*/
          if ( !v31 ) /*0x6b91d5*/
          {
            v63 = v30 - v21; /*0x6b91e1*/
            v65 = v52 + v29; /*0x6b91e5*/
          }
          if ( ++v47 >= v21 ) /*0x6b91f4*/
            break; /*0x6b91f4*/
          v19 = v65; /*0x6b90e5*/
          v20 = v43; /*0x6b90e9*/
        }
      }
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x6b9203*/
}


// ==== 0x006B9350  sub_6B9350  this=-  sig=ida-proto ====
int sub_6B9350()
{
  MEMORY[0xB0B938] = 0; /*0x6b9352*/
  MEMORY[0xB0B93C] = 0; /*0x6b9357*/
  MEMORY[0xB0B940] = 0; /*0x6b935c*/
  MEMORY[0xB0B944] = 0; /*0x6b9361*/
  return 0; /*0x6b9366*/
}


// ==== 0x006B93E0  ObjectClass::method_6B93E0  this=ObjectClass  sig=csp ====
int __thiscall sub_6B93E0(unsigned __int8 *this)
{
  unsigned __int8 *v1; // ecx
  int v2; // ebp
  int v3; // edi
  unsigned __int8 v4; // bl
  int v5; // eax
  int result; // eax

  v1 = this + 2; /*0x6b93e4*/
  v2 = 256; /*0x6b93e7*/
  do /*0x6b943e*/
  {
    v3 = *v1; /*0x6b93f7*/
    v4 = *(v1 - 2); /*0x6b93fe*/
    LOBYTE(v5) = -1; /*0x6b9415*/
    if ( 15 * *(v1 - 1) / 10 <= 255 ) /*0x6b9422*/
      v5 = 15 * *(v1 - 1) / 10; /*0x6b9424*/
    *(v1 - 2) = v5; /*0x6b9426*/
    *(v1 - 1) = v4; /*0x6b942f*/
    v1 += 3; /*0x6b9434*/
    result = v3 / 4; /*0x6b9437*/
    *(v1 - 3) = v3 / 4; /*0x6b943a*/
    --v2; /*0x6b943d*/
  }
  while ( v2 ); /*0x6b943e*/
  return result; /*0x6b9440*/
}


// ==== 0x006B9450  ObjectClass::method_6B9450  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6B9450(_DWORD *this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  void *v5; // edi
  unsigned int v6; // edx

  this->NeedsSaveOrLink = -1717986918; /*0x6b945a*/
  this->owningHouseIndex = -1717986918; /*0x6b945d*/
  this->objectTypeFlags = 1070176665; /*0x6b9466*/
  this->fallRate = 1072273817; /*0x6b946d*/
  this->nextObject = 128; /*0x6b9474*/
  this->uniqueId = 128; /*0x6b9477*/
  this->vtable3 = 128; /*0x6b947a*/
  this->vtable4 = 0; /*0x6b947d*/
  v2 = 0; /*0x6b9480*/
  v3 = 128; /*0x6b9482*/
  do /*0x6b9489*/
  {
    ++v2; /*0x6b9484*/
    v3 >>= 1; /*0x6b9485*/
  }
  while ( v3 ); /*0x6b9489*/
  this->vtable4 = v2; /*0x6b948b*/
  this->uniqueId = 0; /*0x6b9496*/
  v4 = 1 << (v2 - 1); /*0x6b9499*/
  this->vtable4 = v2 - 1; /*0x6b949b*/
  this->vtable2 = 0; /*0x6b949e*/
  this->customSound_controller = 0; /*0x6b94a1*/
  this->vtable3 = v4; /*0x6b94a4*/
  v5 = __2_YAPAXI_Z(4 * v4); /*0x6b94b3*/
  v6 = 4 * this->vtable3; /*0x6b94b8*/
  *this = v5; /*0x6b94bf*/
  memset(v5, 0, v6); /*0x6b94c4*/
  this->nextArrayIndex = sub_6B94E0; /*0x6b94cd*/
  return this; /*0x6b94d6*/
}


// ==== 0x006B94E0  ObjectClass::method_6B94E0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6B94E0(const char **this)
{
  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = String::Length(this); /*0x6b94ec*/
  for ( i = 0; i < String::Length(this); ++i ) /*0x6b94f0*/
  {
    v4 = String::GetOrEmpty((char **)this); /*0x6b94fb*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x6b9510*/
  }
  return v2; /*0x6b9520*/
}


// ==== 0x006B9530  HashTable::Clear  this=HashTable  sig=csp ====
void __thiscall HashTable::Clear(int this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  int v5; // ebx
  int *v6; // ecx
  const char **v7; // esi
  int *v8; // eax
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  int v14; // ecx
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // esi
  void **v25; // ebx
  unsigned int v26; // edx
  unsigned int v27; // eax
  float v28; // [esp+10h] [ebp-31Ch]
  int *v29; // [esp+10h] [ebp-31Ch]
  void *v30; // [esp+14h] [ebp-318h] BYREF
  __int64 v31; // [esp+18h] [ebp-314h]
  int v32; // [esp+20h] [ebp-30Ch]
  int v33; // [esp+24h] [ebp-308h]
  _DWORD v34[193]; // [esp+28h] [ebp-304h] BYREF

  unknown_libname_73(&v30); /*0x6b9540*/
  while ( 1 ) /*0x6b9545*/
  {
    v2 = *(_DWORD *)(this + 4); /*0x6b9545*/
    v3 = 0; /*0x6b9548*/
    if ( !v2 ) /*0x6b954c*/
      break; /*0x6b954c*/
    v4 = *(_DWORD *)(this + 8); /*0x6b9552*/
    v31 = (unsigned int)(v2 - 1); /*0x6b9556*/
    v32 = v4; /*0x6b9562*/
    v33 = 0; /*0x6b9566*/
    v5 = 0; /*0x6b956e*/
    v28 = (double)v31 / (double)v4; /*0x6b9572*/
    if ( v4 <= 0 ) /*0x6b9576*/
      break; /*0x6b9576*/
    v6 = *(int **)this; /*0x6b957f*/
    while ( !*v6 ) /*0x6b9583*/
    {
      ++v5; /*0x6b9585*/
      ++v6; /*0x6b9586*/
      if ( v5 >= v4 ) /*0x6b958b*/
        goto LABEL_23; /*0x6b958b*/
    }
    if ( v5 == -1 ) /*0x6b9596*/
      break; /*0x6b9596*/
    v7 = *(const char ***)(*(_DWORD *)this + 4 * v5); /*0x6b959c*/
    String::Reassign((char **)&v30, v7); /*0x6b95a4*/
    v8 = *(int **)this; /*0x6b95a9*/
    qmemcpy(v34, v7 + 1, sizeof(v34)); /*0x6b95b8*/
    v9 = (_DWORD *)v8[v5]; /*0x6b95ba*/
    v10 = v9[194]; /*0x6b95bf*/
    if ( v9 ) /*0x6b95c5*/
    {
      DeleteAndZero((void **)v8[v5]); /*0x6b95c9*/
      __3_YAXPAX_Z(v9); /*0x6b95cf*/
    }
    *(_DWORD *)(*(_DWORD *)this + 4 * v5) = v10; /*0x6b95de*/
    v11 = v28 < *(double *)(this + 32); /*0x6b95e4*/
    v12 = v28 == *(double *)(this + 32); /*0x6b95e4*/
    --*(_DWORD *)(this + 4); /*0x6b95e8*/
    if ( v11 || v12 ) /*0x6b95ed*/
    {
      v13 = *(_DWORD *)(this + 8); /*0x6b95f6*/
      if ( v13 > *(_DWORD *)(this + 48) && *(_BYTE *)(this + 20) != 1 ) /*0x6b9608*/
      {
        v14 = *(_DWORD *)(this + 12); /*0x6b960e*/
        v15 = *(int **)this; /*0x6b9611*/
        v29 = *(int **)this; /*0x6b9616*/
        *(_DWORD *)(this + 8) = v13 >> 1; /*0x6b961d*/
        *(_DWORD *)(this + 12) = v14 - 1; /*0x6b9627*/
        v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6b9633*/
        v17 = 4 * *(_DWORD *)(this + 8); /*0x6b9638*/
        *(_DWORD *)this = v16; /*0x6b963f*/
        memset(v16, 0, v17); /*0x6b9645*/
        if ( (int)v13 > 0 ) /*0x6b9650*/
        {
          v18 = v15; /*0x6b9652*/
          v19 = v13; /*0x6b9654*/
          do /*0x6b968f*/
          {
            v20 = *v18; /*0x6b9656*/
            if ( *v18 ) /*0x6b9656*/
            {
              do /*0x6b9689*/
              {
                v21 = (*(int (__thiscall **)(int))(this + 24))(v20) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6b966c*/
                v22 = *(_DWORD *)(*(_DWORD *)this + 4 * v21); /*0x6b9671*/
                *(_DWORD *)(*(_DWORD *)this + 4 * v21) = v20; /*0x6b9677*/
                v23 = *(_DWORD *)(v20 + 776); /*0x6b9679*/
                *(_DWORD *)(v20 + 776) = v22; /*0x6b967f*/
                v20 = v23; /*0x6b9685*/
              }
              while ( v23 ); /*0x6b9689*/
            }
            ++v18; /*0x6b968b*/
            --v19; /*0x6b968e*/
          }
          while ( v19 ); /*0x6b968f*/
          v15 = v29; /*0x6b9691*/
        }
        __3_YAXPAX_Z(v15); /*0x6b9696*/
      }
    }
    if ( v34[0] ) /*0x6b96a4*/
      (**(void (__thiscall ***)(_DWORD, int))v34[0])(v34[0], 1); /*0x6b96ae*/
  }
LABEL_23:
  DeleteAndZero(&v30); /*0x6b96b5*/
  if ( *(_DWORD *)(this + 8) ) /*0x6b96be*/
  {
    do /*0x6b96fe*/
    {
      v24 = *(_DWORD *)(*(_DWORD *)this + 4 * v3); /*0x6b96c6*/
      while ( v24 ) /*0x6b96cb*/
      {
        v25 = (void **)v24; /*0x6b96cd*/
        v24 = *(_DWORD *)(v24 + 776); /*0x6b96cf*/
        DeleteAndZero(v25); /*0x6b96db*/
        __3_YAXPAX_Z(v25); /*0x6b96e1*/
      }
      ++v3; /*0x6b96f0*/
      *(_DWORD *)(*(_DWORD *)this + 4 * v3 - 4) = 0; /*0x6b96f1*/
    }
    while ( v3 < *(_DWORD *)(this + 8) ); /*0x6b96fe*/
  }
  v26 = *(_DWORD *)(this + 8); /*0x6b9702*/
  v27 = *(_DWORD *)(this + 48); /*0x6b9705*/
  *(_DWORD *)(this + 4) = 0; /*0x6b970a*/
  if ( v26 > v27 ) /*0x6b970d*/
  {
    do /*0x6b9725*/
    {
      if ( *(_BYTE *)(this + 20) ) /*0x6b970f*/
        break; /*0x6b9714*/
      HashTable::RebuildEx((_DWORD *)this); /*0x6b9718*/
    }
    while ( *(_DWORD *)(this + 8) > *(_DWORD *)(this + 48) ); /*0x6b9725*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x6b972b*/
}


// ==== 0x006B9740  ChatEvent::ProcessStrings  this=HashTable  sig=csp ====
char __thiscall ChatEvent_ProcessStrings(int this, const char *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // edx
  unsigned __int8 *v16; // esi
  _DWORD *v17; // edi
  int v18; // eax
  unsigned __int8 *v19; // esi
  int v20; // edx
  int v21; // edx
  _DWORD *v22; // eax
  _DWORD *v23; // esi
  _DWORD *v24; // edi
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  int v34; // eax
  char **v35; // ebx
  int v36; // esi
  const void *v37; // esi
  int v38; // eax
  int v39; // edx
  int v40; // esi
  int v41; // edi
  _DWORD *v42; // edi
  int v43; // ebx
  double v44; // st7
  bool v45; // c0
  bool v46; // c3
  int v47; // esi
  char **v48; // eax
  char **v49; // esi
  char ***v50; // edx
  char *v51; // eax
  int v52; // esi
  int v53; // eax
  double v54; // st7
  int *v55; // ebx
  int v56; // edi
  void *v57; // edi
  unsigned int v58; // edx
  int *v59; // edi
  int v60; // ebx
  int v61; // esi
  int v62; // edx
  int v63; // ecx
  int v64; // eax
  char *v66; // [esp+10h] [ebp-65Ch]
  void *v67; // [esp+14h] [ebp-658h] BYREF
  void *Block; // [esp+18h] [ebp-654h]
  __int64 v69; // [esp+1Ch] [ebp-650h]
  _BYTE v70[6]; // [esp+24h] [ebp-648h]
  float v71; // [esp+2Ch] [ebp-640h]
  _DWORD *v72; // [esp+30h] [ebp-63Ch]
  int v73; // [esp+34h] [ebp-638h]
  _DWORD v74[10]; // [esp+38h] [ebp-634h] BYREF
  int v75; // [esp+60h] [ebp-60Ch]
  _DWORD v76[193]; // [esp+64h] [ebp-608h] BYREF
  _DWORD v77[193]; // [esp+368h] [ebp-304h] BYREF

  v69 = *(_QWORD *)a3; /*0x6b975c*/
  *(_DWORD *)v70 = *(_DWORD *)(a3 + 8); /*0x6b9775*/
  *(_WORD *)&v70[4] = *(_WORD *)(a3 + 12); /*0x6b9782*/
  qmemcpy(v74, (const void *)(a3 + 14), sizeof(v74)); /*0x6b978c*/
  v6 = __2_YAPAXI_Z(4 * (1 << SBYTE2(v74[3])) + 40); /*0x6b979c*/
  v7 = v74[0]; /*0x6b97a1*/
  v8 = v6; /*0x6b97a5*/
  v9 = v74[1]; /*0x6b97ab*/
  v6[2] = v74[2]; /*0x6b97af*/
  v10 = v74[4]; /*0x6b97b2*/
  *v8 = v7; /*0x6b97b6*/
  LOWORD(v7) = v74[3]; /*0x6b97b8*/
  v8[4] = v10; /*0x6b97bd*/
  v11 = v74[7]; /*0x6b97c0*/
  *((_WORD *)v8 + 6) = v7; /*0x6b97c4*/
  v12 = v74[5]; /*0x6b97c8*/
  v8[7] = v11; /*0x6b97cc*/
  v13 = v74[8]; /*0x6b97cf*/
  v8[1] = v9; /*0x6b97d3*/
  LOWORD(v9) = HIWORD(v74[3]); /*0x6b97d6*/
  v8[5] = v12; /*0x6b97db*/
  v14 = v74[9]; /*0x6b97de*/
  v8[8] = v13; /*0x6b97e6*/
  *((_WORD *)v8 + 7) = v9; /*0x6b97e9*/
  v15 = v74[6]; /*0x6b97ed*/
  v13 *= 4; /*0x6b97f1*/
  v8[9] = v14; /*0x6b97f4*/
  v8[6] = v15; /*0x6b97f9*/
  qmemcpy(v8 + 10, (const void *)(a3 + 54), v13); /*0x6b9807*/
  Block = (void *)256; /*0x6b980b*/
  v16 = (unsigned __int8 *)(v8 + 10); /*0x6b981c*/
  v17 = v76; /*0x6b9821*/
  v66 = (char *)(v13 + a3 + 54); /*0x6b9825*/
  do /*0x6b9881*/
  {
    v18 = *v16; /*0x6b9831*/
    v19 = v16 + 1; /*0x6b9833*/
    v20 = *v19; /*0x6b983e*/
    v16 = v19 + 3; /*0x6b9841*/
    v17 = (_DWORD *)((char *)v17 + 2); /*0x6b9844*/
    v21 = v20 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]; /*0x6b9857*/
    LOWORD(v18) = v21 | (v18 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]); /*0x6b985f*/
    LOWORD(v21) = (unsigned __int8)(*(v16 - 2) >> MEMORY[0x8A0DD4]); /*0x6b986c*/
    *((_WORD *)v17 - 1) = (v21 << MEMORY[0x8A0DD0]) | v18; /*0x6b9874*/
    Block = (char *)Block - 1; /*0x6b987d*/
  }
  while ( Block ); /*0x6b9881*/
  Block = __2_YAPAXI_Z(*(_DWORD *)((char *)&v69 + 2) - *(_DWORD *)&v70[2]); /*0x6b9899*/
  qmemcpy(Block, v66, *(_DWORD *)((char *)&v69 + 2) - *(_DWORD *)&v70[2]); /*0x6b98a6*/
  v22 = __2_YAPAXI_Z(0x20u); /*0x6b98af*/
  v23 = v22; /*0x6b98b4*/
  v24 = 0; /*0x6b98b6*/
  if ( v22 ) /*0x6b98bd*/
  {
    v25 = v74[2]; /*0x6b98bf*/
    v26 = v74[1]; /*0x6b98c3*/
    v22[2] = v74[2]; /*0x6b98c7*/
    v22[1] = v26; /*0x6b98d4*/
    v22[3] = 0; /*0x6b98df*/
    *v22 = &XSurface_Vtable; /*0x6b98e2*/
    v22[4] = a5; /*0x6b98e8*/
    Buffer::Init(v22 + 5, 0, a5 * v26 * v25); /*0x6b98eb*/
    v24 = v23; /*0x6b98f0*/
    *v23 = &BSurface_Vtable; /*0x6b98f2*/
    v72 = v23; /*0x6b98f8*/
  }
  else
  {
    v72 = 0; /*0x6b98fe*/
  }
  v73 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v24 + 92))(v24, 0, 0); /*0x6b990f*/
  v27 = (*(int (__thiscall **)(_DWORD *))(*v24 + 116))(v24) / 2; /*0x6b992c*/
  v28 = v74[1] - (v74[1] & 3) + 4; /*0x6b992e*/
  LODWORD(v69) = v27; /*0x6b9931*/
  if ( v74[2] > 0 ) /*0x6b9937*/
  {
    v66 = 0; /*0x6b993f*/
    v29 = -v28; /*0x6b9947*/
    v75 = -v28; /*0x6b994a*/
    v30 = v28 * (v74[2] - 1); /*0x6b994e*/
    v71 = *(float *)&v74[2]; /*0x6b9955*/
    do /*0x6b99cf*/
    {
      v31 = 0; /*0x6b9959*/
      if ( v74[1] > 0 ) /*0x6b995f*/
      {
        do /*0x6b99ac*/
        {
          v32 = v30 + v31; /*0x6b9968*/
          if ( a5 == 2 ) /*0x6b996e*/
            *(_WORD *)(v73 + 2 * (_DWORD)&v66[v31]) = *((_WORD *)v76 + *((unsigned __int8 *)Block + v32)); /*0x6b9988*/
          else
            *(_WORD *)(v73 + 2 * (_DWORD)&v66[v31]) = *((unsigned __int8 *)Block + v32); /*0x6b99a1*/
          ++v31; /*0x6b99a9*/
        }
        while ( v31 < v74[1] ); /*0x6b99ac*/
        v29 = v75; /*0x6b99ae*/
        v24 = v72; /*0x6b99b2*/
        v27 = v69; /*0x6b99b6*/
      }
      v30 += v29; /*0x6b99be*/
      v66 += v27; /*0x6b99c2*/
      --LODWORD(v71); /*0x6b99cb*/
    }
    while ( v71 != 0.0 ); /*0x6b99cf*/
  }
  if ( a5 == 1 ) /*0x6b99d9*/
  {
    qmemcpy(&v77[1], v8 + 10, 0x300u); /*0x6b99ea*/
    v24 = v72; /*0x6b99ec*/
  }
  v33 = *v24; /*0x6b99f0*/
  v77[0] = v24; /*0x6b99f4*/
  (*(void (__thiscall **)(_DWORD *))(v33 + 96))(v24); /*0x6b99fb*/
  __3_YAXPAX_Z(v8); /*0x6b99ff*/
  __3_YAXPAX_Z(Block); /*0x6b9a09*/
  String::Assign((char **)&v67, a2); /*0x6b9a1d*/
  String::ToLower((const char **)&v67); /*0x6b9a26*/
  v34 = *(_DWORD *)(this + 4); /*0x6b9a2b*/
  v35 = 0; /*0x6b9a2e*/
  v76[0] = 0; /*0x6b9a32*/
  if ( v34 ) /*0x6b9a36*/
  {
    v36 = *(_DWORD *)(*(_DWORD *)this /*0x6b9a53*/
                    + 4 * ((*(int (__thiscall **)(void **))(this + 24))(&v67) & ((1 << *(_DWORD *)(this + 12)) - 1)));
    if ( v36 ) /*0x6b9a58*/
    {
      while ( !String::Compare((const char **)v36, (const char **)&v67) ) /*0x6b9a6c*/
      {
        v36 = *(_DWORD *)(v36 + 776); /*0x6b9a6e*/
        if ( !v36 ) /*0x6b9a76*/
          goto LABEL_40; /*0x6b9a76*/
      }
      v37 = (const void *)(v36 + 4); /*0x6b9a85*/
      if ( v37 ) /*0x6b9a8a*/
        qmemcpy(v76, v37, sizeof(v76)); /*0x6b9a95*/
      v38 = *(_DWORD *)(this + 4); /*0x6b9a97*/
      if ( !v38 ) /*0x6b9a9e*/
        goto LABEL_38; /*0x6b9a9e*/
      v39 = *(_DWORD *)(this + 8); /*0x6b9aa4*/
      v69 = (unsigned int)v39; /*0x6b9ab4*/
      v71 = (double)(unsigned int)(v38 - 1) / (double)v39; /*0x6b9ac4*/
      v40 = (*(int (__thiscall **)(void **))(this + 24))(&v67) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6b9ad6*/
      v41 = *(_DWORD *)(*(_DWORD *)this + 4 * v40); /*0x6b9adb*/
      if ( !v41 ) /*0x6b9ae0*/
        goto LABEL_38; /*0x6b9ae0*/
      if ( String::Compare((const char **)v41, (const char **)&v67) ) /*0x6b9aed*/
      {
        v42 = *(_DWORD **)(*(_DWORD *)this + 4 * v40); /*0x6b9af9*/
        v43 = v42[194]; /*0x6b9afe*/
        if ( v42 ) /*0x6b9b04*/
        {
          DeleteAndZero(*(void ***)(*(_DWORD *)this + 4 * v40)); /*0x6b9b08*/
          __3_YAXPAX_Z(v42); /*0x6b9b0e*/
        }
        v44 = v71; /*0x6b9b19*/
        *(_DWORD *)(*(_DWORD *)this + 4 * v40) = v43; /*0x6b9b1d*/
        v45 = v44 < *(double *)(this + 32); /*0x6b9b23*/
        v46 = v44 == *(double *)(this + 32); /*0x6b9b23*/
        --*(_DWORD *)(this + 4); /*0x6b9b27*/
        if ( !v45 && !v46 ) /*0x6b9b2c*/
          goto LABEL_38; /*0x6b9b2f*/
      }
      else
      {
        v47 = *(_DWORD *)(v41 + 776); /*0x6b9b33*/
        if ( v47 ) /*0x6b9b3b*/
        {
          while ( !String::Compare((const char **)v47, (const char **)&v67) ) /*0x6b9b4b*/
          {
            v41 = v47; /*0x6b9b4d*/
            v47 = *(_DWORD *)(v47 + 776); /*0x6b9b4f*/
            if ( !v47 ) /*0x6b9b57*/
              goto LABEL_36; /*0x6b9b57*/
          }
          *(_DWORD *)(v41 + 776) = *(_DWORD *)(v47 + 776); /*0x6b9b61*/
          --*(_DWORD *)(this + 4); /*0x6b9b6d*/
          DeleteAndZero((void **)v47); /*0x6b9b74*/
          __3_YAXPAX_Z((void *)v47); /*0x6b9b7a*/
        }
LABEL_36:
        if ( v71 > *(double *)(this + 32) ) /*0x6b9b8e*/
          goto LABEL_38; /*0x6b9b8e*/
      }
      HashTable::RebuildEx((_DWORD *)this); /*0x6b9b92*/
LABEL_38:
      v35 = 0; /*0x6b9b97*/
      if ( v76[0] ) /*0x6b9b9f*/
        (**(void (__thiscall ***)(_DWORD, int))v76[0])(v76[0], 1); /*0x6b9ba5*/
    }
  }
LABEL_40:
  v48 = (char **)__2_YAPAXI_Z(0x30Cu); /*0x6b9ba7*/
  v49 = v48; /*0x6b9bb1*/
  if ( v48 ) /*0x6b9bb8*/
  {
    unknown_libname_73(v48); /*0x6b9bbc*/
    v49[1] = 0; /*0x6b9bc1*/
    v35 = v49; /*0x6b9bc4*/
  }
  String::Reassign(v35, (const char **)&v67); /*0x6b9bcd*/
  qmemcpy(v35 + 1, v77, 0x304u); /*0x6b9be1*/
  v35[194] = 0; /*0x6b9be9*/
  v50 = (char ***)(*(_DWORD *)this /*0x6b9c02*/
                 + 4 * ((*(int (__thiscall **)(void **))(this + 24))(&v67) & ((1 << *(_DWORD *)(this + 12)) - 1)));
  v51 = (char *)*v50; /*0x6b9c05*/
  *v50 = v35; /*0x6b9c07*/
  if ( v51 ) /*0x6b9c0b*/
    v35[194] = v51; /*0x6b9c0d*/
  v52 = *(_DWORD *)(this + 8); /*0x6b9c16*/
  v53 = *(_DWORD *)(this + 4) + 1; /*0x6b9c19*/
  v69 = (unsigned int)v53; /*0x6b9c1e*/
  *(_DWORD *)(this + 4) = v53; /*0x6b9c22*/
  v54 = (double)v69; /*0x6b9c25*/
  v69 = (unsigned int)v52; /*0x6b9c29*/
  if ( v54 / (double)v52 >= *(double *)(this + 40) && *(_BYTE *)(this + 20) != 1 ) /*0x6b9c47*/
  {
    v55 = *(int **)this; /*0x6b9c50*/
    v56 = *(_DWORD *)(this + 12) + 1; /*0x6b9c56*/
    LODWORD(v69) = *(_DWORD *)this; /*0x6b9c57*/
    *(_DWORD *)(this + 8) = 2 * v52; /*0x6b9c5b*/
    *(_DWORD *)(this + 12) = v56; /*0x6b9c65*/
    v57 = __2_YAPAXI_Z(8 * v52); /*0x6b9c71*/
    v58 = 4 * *(_DWORD *)(this + 8); /*0x6b9c76*/
    *(_DWORD *)this = v57; /*0x6b9c7d*/
    memset(v57, 0, v58); /*0x6b9c83*/
    if ( v52 > 0 ) /*0x6b9c8e*/
    {
      v59 = v55; /*0x6b9c90*/
      v60 = v52; /*0x6b9c92*/
      do /*0x6b9ccd*/
      {
        v61 = *v59; /*0x6b9c94*/
        if ( *v59 ) /*0x6b9c94*/
        {
          do /*0x6b9cc7*/
          {
            v62 = (*(int (__thiscall **)(int))(this + 24))(v61) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6b9caa*/
            v63 = *(_DWORD *)(*(_DWORD *)this + 4 * v62); /*0x6b9caf*/
            *(_DWORD *)(*(_DWORD *)this + 4 * v62) = v61; /*0x6b9cb5*/
            v64 = *(_DWORD *)(v61 + 776); /*0x6b9cb7*/
            *(_DWORD *)(v61 + 776) = v63; /*0x6b9cbd*/
            v61 = v64; /*0x6b9cc3*/
          }
          while ( v64 ); /*0x6b9cc7*/
        }
        ++v59; /*0x6b9cc9*/
        --v60; /*0x6b9ccc*/
      }
      while ( v60 ); /*0x6b9ccd*/
      v55 = (int *)v69; /*0x6b9ccf*/
    }
    __3_YAXPAX_Z(v55); /*0x6b9cd4*/
  }
  DeleteAndZero(&v67); /*0x6b9ce0*/
  return 1; /*0x6b9ce5*/
}


// ==== 0x006B9D00  LoadPaletteFromFile  this=-  sig=csp ====
char __fastcall Palette_LoadFromFile(int a1, int a2, char *Source, int a4, int a5)
{
  int v5; // ebx
  _BYTE *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  _DWORD *v10; // ebp
  int v12; // eax
  _DWORD *v13; // esi
  _BYTE *v14; // eax
  int v15; // ebp
  int v16; // ebx
  int v17; // edx
  int *v18; // eax
  int v19; // esi
  int v20; // ebx
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // ebx
  int v29; // eax
  int v30; // edx
  int v31; // edi
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int i; // esi
  int v36; // eax
  int v37; // eax
  void (__thiscall ***v38)(_DWORD, int); // edi
  int v39; // esi
  const void *v40; // esi
  _DWORD *v41; // eax
  _DWORD *v42; // ebp
  int v43; // edx
  int v44; // eax
  int v45; // edx
  int v46; // eax
  double v47; // st7
  void *v48; // [esp+14h] [ebp-9ACh] BYREF
  __int64 v49; // [esp+18h] [ebp-9A8h]
  int v50; // [esp+24h] [ebp-99Ch]
  int v51; // [esp+28h] [ebp-998h]
  _BYTE v52[16]; // [esp+2Ch] [ebp-994h] BYREF
  int v53; // [esp+3Ch] [ebp-984h]
  int v54; // [esp+40h] [ebp-980h]
  _DWORD v55[22]; // [esp+4Ch] [ebp-974h] BYREF
  _WORD v56[6]; // [esp+A4h] [ebp-91Ch] BYREF
  int v57; // [esp+B0h] [ebp-910h]
  _DWORD v58[193]; // [esp+B8h] [ebp-908h] BYREF
  _BYTE v59[768]; // [esp+3BCh] [ebp-604h] BYREF
  _DWORD v60[193]; // [esp+6BCh] [ebp-304h] BYREF

  v5 = a1; /*0x6b9d08*/
  LODWORD(v49) = a1; /*0x6b9d0c*/
  v6 = &v59[2]; /*0x6b9d10*/
  v7 = 256; /*0x6b9d17*/
  do /*0x6b9d2b*/
  {
    *(v6 - 2) = 0; /*0x6b9d1c*/
    *(v6 - 1) = 0; /*0x6b9d20*/
    *v6 = 0; /*0x6b9d24*/
    v6 += 3; /*0x6b9d27*/
    --v7; /*0x6b9d2a*/
  }
  while ( v7 ); /*0x6b9d2b*/
  v60[0] = 0; /*0x6b9d3b*/
  CCFileClass::Construct(v55, Source); /*0x6b9d42*/
  v9 = DecodeFrameSHP(0, 0); /*0x6b9d59*/
  v10 = (_DWORD *)v9; /*0x6b9d5d*/
  if ( v9 ) /*0x6b9d5f*/
  {
    v12 = a4; /*0x6b9d9c*/
    if ( a4 == 2 ) /*0x6b9da6*/
    {
      v13 = v58; /*0x6b9dac*/
      v14 = &v59[1]; /*0x6b9db3*/
      v15 = 256; /*0x6b9dba*/
      do /*0x6b9e13*/
      {
        LOBYTE(v8) = v14[1] >> MEMORY[0x8A0DDC]; /*0x6b9dc8*/
        LOBYTE(v5) = *(v14 - 1); /*0x6b9dd0*/
        v14 += 3; /*0x6b9dd3*/
        v13 = (_DWORD *)((char *)v13 + 2); /*0x6b9dd6*/
        LOWORD(v8) = (unsigned __int8)v8; /*0x6b9dd9*/
        LOWORD(v5) = (unsigned __int8)((unsigned __int8)v5 >> MEMORY[0x8A0DD4]); /*0x6b9ded*/
        v16 = v5 << MEMORY[0x8A0DD0]; /*0x6b9df1*/
        v17 = v16 | (v8 << MEMORY[0x8A0DD8]); /*0x6b9df9*/
        LOWORD(v16) = (unsigned __int8)(*(v14 - 3) >> MEMORY[0x8A0DE4]); /*0x6b9e06*/
        v5 = v16 << MEMORY[0x8A0DE0]; /*0x6b9e0a*/
        v8 = v5 | v17; /*0x6b9e0c*/
        --v15; /*0x6b9e0e*/
        *((_WORD *)v13 - 1) = v8; /*0x6b9e0f*/
      }
      while ( v15 ); /*0x6b9e13*/
      v18 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 120))(v9, v52); /*0x6b9e1e*/
      v53 = *v18; /*0x6b9e25*/
      v54 = v18[1]; /*0x6b9e2c*/
      v19 = v18[2]; /*0x6b9e30*/
      v20 = v18[3]; /*0x6b9e33*/
      v21 = __2_YAPAXI_Z(0x20u); /*0x6b9e36*/
      v10 = v21; /*0x6b9e3b*/
      if ( v21 ) /*0x6b9e42*/
      {
        v21[1] = v19; /*0x6b9e51*/
        v21[2] = v20; /*0x6b9e54*/
        v21[3] = 0; /*0x6b9e57*/
        *v21 = &XSurface_Vtable; /*0x6b9e5e*/
        v21[4] = 2; /*0x6b9e65*/
        Buffer::Init(0, 2 * v20 * v19); /*0x6b9e6c*/
        *v10 = &BSurface_Vtable; /*0x6b9e71*/
      }
      else
      {
        v10 = 0; /*0x6b9e7a*/
      }
      v22 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v10 + 92))(v10, 0, 0); /*0x6b9e87*/
      v23 = *(_DWORD *)v9; /*0x6b9e8a*/
      v51 = v22; /*0x6b9e8c*/
      v24 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(v23 + 92))(v9, 0, 0); /*0x6b9e98*/
      v25 = 0; /*0x6b9e9d*/
      v26 = v20 * v19; /*0x6b9e9f*/
      if ( v20 * v19 > 0 ) /*0x6b9ea4*/
      {
        v27 = v51; /*0x6b9ea6*/
        do /*0x6b9ec1*/
        {
          v27 += 2; /*0x6b9eac*/
          v28 = *(unsigned __int8 *)(v24 + v25++); /*0x6b9eaf*/
          *(_WORD *)(v27 - 2) = *((_WORD *)v58 + v28); /*0x6b9ebd*/
        }
        while ( v25 < v26 ); /*0x6b9ec1*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9); /*0x6b9ec7*/
      (*(void (__thiscall **)(_DWORD *))(*v10 + 96))(v10); /*0x6b9ecf*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x6b9ed8*/
      v5 = v49; /*0x6b9eda*/
      v12 = 2; /*0x6b9ede*/
    }
    else if ( a4 == 1 ) /*0x6b9eea*/
    {
      qmemcpy(&v60[1], v59, 0x300u); /*0x6b9eff*/
    }
    if ( a5 && v12 == 1 ) /*0x6b9f0f*/
    {
      v29 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v10 + 120))(v10, v52); /*0x6b9f1b*/
      v49 = *(_QWORD *)v29; /*0x6b9f20*/
      v30 = *v10; /*0x6b9f2e*/
      v31 = *(_DWORD *)(v29 + 8); /*0x6b9f31*/
      v50 = *(_DWORD *)(v29 + 12); /*0x6b9f39*/
      v32 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v30 + 92))(v10, 0, 0); /*0x6b9f40*/
      v33 = 0; /*0x6b9f47*/
      v34 = v31 * v50; /*0x6b9f49*/
      for ( i = v32; v33 < v34; *(_BYTE *)(i + v33 - 1) = v59[2 * v36 + v36] ) /*0x6b9f50*/
        v36 = *(unsigned __int8 *)(i + v33++); /*0x6b9f54*/
      (*(void (__thiscall **)(_DWORD *))(*v10 + 96))(v10); /*0x6b9f71*/
    }
    v60[0] = v10; /*0x6b9f80*/
    String::Assign((char **)&v48, Source); /*0x6b9f87*/
    String::ToLower(&v48); /*0x6b9f90*/
    v37 = *(_DWORD *)(v5 + 4); /*0x6b9f95*/
    v38 = 0; /*0x6b9f98*/
    v58[0] = 0; /*0x6b9f9c*/
    if ( v37 ) /*0x6b9fa3*/
    {
      v39 = *(_DWORD *)(*(_DWORD *)v5 /*0x6b9fbf*/
                      + 4 * ((*(int (__thiscall **)(void **))(v5 + 24))(&v48) & ((1 << *(_DWORD *)(v5 + 12)) - 1)));
      if ( v39 ) /*0x6b9fc4*/
      {
        while ( !(unsigned __int8)String::Compare(&v48) ) /*0x6b9fd4*/
        {
          v39 = *(_DWORD *)(v39 + 776); /*0x6b9fd6*/
          if ( !v39 ) /*0x6b9fde*/
            goto LABEL_31; /*0x6b9fde*/
        }
        v40 = (const void *)(v39 + 4); /*0x6b9fe6*/
        if ( v40 ) /*0x6b9feb*/
        {
          qmemcpy(v58, v40, sizeof(v58)); /*0x6b9ff9*/
          v38 = (void (__thiscall ***)(_DWORD, int))v58[0]; /*0x6b9ffb*/
        }
        v58[0] = 0; /*0x6ba011*/
        HashTable::RemoveHashTableEntry(&v48, v58); /*0x6ba01c*/
        if ( v38 ) /*0x6ba023*/
          (**v38)(v38, 1); /*0x6ba02b*/
      }
    }
LABEL_31:
    v41 = __2_YAPAXI_Z(0x30Cu); /*0x6ba02d*/
    v42 = v41; /*0x6ba037*/
    if ( v41 ) /*0x6ba03e*/
    {
      unknown_libname_73(v41); /*0x6ba042*/
      v42[1] = 0; /*0x6ba047*/
    }
    else
    {
      v42 = 0; /*0x6ba050*/
    }
    String::Reassign(&v48); /*0x6ba059*/
    qmemcpy(v42 + 1, v60, 0x304u); /*0x6ba06d*/
    v42[194] = 0; /*0x6ba075*/
    v43 = (*(int (__thiscall **)(void **))(v5 + 24))(&v48) & ((1 << *(_DWORD *)(v5 + 12)) - 1); /*0x6ba08b*/
    v44 = *(_DWORD *)(*(_DWORD *)v5 + 4 * v43); /*0x6ba08d*/
    *(_DWORD *)(*(_DWORD *)v5 + 4 * v43) = v42; /*0x6ba095*/
    if ( v44 ) /*0x6ba097*/
      v42[194] = v44; /*0x6ba099*/
    v45 = *(_DWORD *)(v5 + 8); /*0x6ba0a2*/
    v46 = *(_DWORD *)(v5 + 4) + 1; /*0x6ba0a5*/
    v49 = (unsigned int)v46; /*0x6ba0aa*/
    *(_DWORD *)(v5 + 4) = v46; /*0x6ba0ae*/
    v47 = (double)v49; /*0x6ba0b1*/
    v49 = (unsigned int)v45; /*0x6ba0b5*/
    if ( v47 / (double)v45 >= *(double *)(v5 + 40) ) /*0x6ba0c9*/
      Render_Load_6BAFA0(v5); /*0x6ba0cd*/
    DeleteAndZero(&v48); /*0x6ba0d6*/
    v55[0] = &vt_CCFileClass; /*0x6ba0e2*/
    v57 = 0; /*0x6ba0ea*/
    Vector::Clear((int)v56); /*0x6ba0f1*/
    v55[0] = &off_7E1668; /*0x6ba0fa*/
    BufferIOFileClass::Dtor(v55); /*0x6ba102*/
    return 1; /*0x6ba10a*/
  }
  else
  {
    v55[0] = &vt_CCFileClass; /*0x6b9d68*/
    v57 = 0; /*0x6b9d70*/
    Vector::Clear((int)v56); /*0x6b9d77*/
    v55[0] = &off_7E1668; /*0x6b9d80*/
    BufferIOFileClass::Dtor(v55); /*0x6b9d88*/
    return 0; /*0x6b9d90*/
  }
}


// ==== 0x006BA120  UI_Init_6BA120  this=-  sig=csp ====
char __fastcall sub_6BA120(int a1, int a2, char *Source)
{
  return LoadPaletteFromFile(a1, a2, Source, 1, 1); /*0x6ba12e*/
}


// ==== 0x006BA140  HashTable::Find  this=HashTable  sig=csp ====
int __thiscall HashTable::Find(_DWORD *this, const char *a1, ConvertClass *aP2)
{
  ObjectClass *v4; // esi
  char *v6; // esi
  int v7; // esi

  String::Assign((char **)&a1, a1); /*0x6ba14c*/
  if ( (MEMORY[0xB077F8].__pad_14B0[11400] & 1) == 0 ) /*0x6ba158*/
  {
    *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11424] = 0; /*0x6ba164*/
    MEMORY[0xB077F8].__pad_14B0[11400] |= 1u; /*0x6ba16e*/
    atexit(nullsub_39); /*0x6ba174*/
  }
  *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11424] = 0; /*0x6ba17c*/
  if ( this->HashTable_field_0x04 /*0x6ba1a8*/
    && (v4 = *(ObjectClass **)(*this
                             + 4 * (((int (__thiscall *)(const char **))this->HashTable_field_0x18)(&a1) & ((1 << this->HashTable_field_0x0C) - 1)))) != 0 )
  {
    while ( !String::Compare((const char **)v4, &a1) ) /*0x6ba1b8*/
    {
      v4 = (ObjectClass *)v4[4].customSound_controller[2]; /*0x6ba1ba*/
      if ( !v4 ) /*0x6ba1c2*/
        goto LABEL_7; /*0x6ba1c2*/
    }
    v6 = &v4->__pad_0[4]; /*0x6ba1d7*/
    if ( v6 ) /*0x6ba1dd*/
      qmemcpy(&MEMORY[0xB077F8].__pad_14B0[11424], v6, 0x304u); /*0x6ba1e9*/
    if ( aP2 ) /*0x6ba1f1*/
      qmemcpy(aP2, &MEMORY[0xB077F8].__pad_14B0[11428], 0x300u); /*0x6ba1fd*/
    v7 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11424]; /*0x6ba1ff*/
    DeleteAndZero((void **)&a1); /*0x6ba209*/
    return v7; /*0x6ba20e*/
  }
  else
  {
LABEL_7:
    DeleteAndZero((void **)&a1); /*0x6ba1c4*/
    return 0; /*0x6ba1cd*/
  }
}


// ==== 0x006BA220  nullsub_39  this=-  sig=ida-proto ====
void __cdecl nullsub_39()
{
  ; /*0x6ba220*/
}


// ==== 0x006BA230  HashTable::RemoveEntry  this=HashTable  sig=csp ====
void __thiscall HashTable::RemoveEntry(int this, const char *a2)
{
  int v3; // eax
  int v4; // esi
  const void *v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // ebp
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  int v15; // esi
  void *v16; // [esp+Ch] [ebp-310h] BYREF
  __int64 v17; // [esp+10h] [ebp-30Ch]
  _DWORD v18[193]; // [esp+18h] [ebp-304h] BYREF

  String::Assign((char **)&v16, a2); /*0x6ba247*/
  v3 = *(_DWORD *)(this + 4); /*0x6ba24c*/
  v18[0] = 0; /*0x6ba253*/
  if ( !v3 ) /*0x6ba257*/
    goto LABEL_24; /*0x6ba257*/
  v4 = *(_DWORD *)(*(_DWORD *)this /*0x6ba273*/
                 + 4 * ((*(int (__thiscall **)(void **))(this + 24))(&v16) & ((1 << *(_DWORD *)(this + 12)) - 1)));
  if ( !v4 ) /*0x6ba278*/
    goto LABEL_24; /*0x6ba278*/
  while ( !String::Compare((const char **)v4, (const char **)&v16) ) /*0x6ba28c*/
  {
    v4 = *(_DWORD *)(v4 + 776); /*0x6ba28e*/
    if ( !v4 ) /*0x6ba296*/
      goto LABEL_24; /*0x6ba296*/
  }
  v5 = (const void *)(v4 + 4); /*0x6ba2a5*/
  if ( v5 ) /*0x6ba2ab*/
    qmemcpy(v18, v5, sizeof(v18)); /*0x6ba2b6*/
  v6 = *(_DWORD *)(this + 4); /*0x6ba2b8*/
  if ( v6 ) /*0x6ba2bd*/
  {
    v7 = *(_DWORD *)(this + 8); /*0x6ba2c3*/
    v17 = (unsigned int)(v6 - 1); /*0x6ba2c7*/
    *(float *)&v17 = (double)v17 / (double)v7; /*0x6ba2e3*/
    v8 = (*(int (__thiscall **)(void **))(this + 24))(&v16) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6ba2f5*/
    v9 = *(_DWORD *)(*(_DWORD *)this + 4 * v8); /*0x6ba2f9*/
    if ( v9 ) /*0x6ba2fe*/
    {
      if ( String::Compare((const char **)v9, (const char **)&v16) ) /*0x6ba30b*/
      {
        v10 = *(_DWORD **)(*(_DWORD *)this + 4 * v8); /*0x6ba316*/
        v11 = v10[194]; /*0x6ba31b*/
        if ( v10 ) /*0x6ba321*/
        {
          DeleteAndZero(*(void ***)(*(_DWORD *)this + 4 * v8)); /*0x6ba325*/
          __3_YAXPAX_Z(v10); /*0x6ba32b*/
        }
        v12 = *(float *)&v17; /*0x6ba335*/
        *(_DWORD *)(*(_DWORD *)this + 4 * v8) = v11; /*0x6ba339*/
        v13 = v12 < *(double *)(this + 32); /*0x6ba33f*/
        v14 = v12 == *(double *)(this + 32); /*0x6ba33f*/
        --*(_DWORD *)(this + 4); /*0x6ba343*/
        if ( !v13 && !v14 ) /*0x6ba348*/
          goto LABEL_22; /*0x6ba34b*/
      }
      else
      {
        v15 = *(_DWORD *)(v9 + 776); /*0x6ba34f*/
        if ( v15 ) /*0x6ba357*/
        {
          while ( !String::Compare((const char **)v15, (const char **)&v16) ) /*0x6ba367*/
          {
            v9 = v15; /*0x6ba369*/
            v15 = *(_DWORD *)(v15 + 776); /*0x6ba36b*/
            if ( !v15 ) /*0x6ba373*/
              goto LABEL_20; /*0x6ba373*/
          }
          *(_DWORD *)(v9 + 776) = *(_DWORD *)(v15 + 776); /*0x6ba37d*/
          --*(_DWORD *)(this + 4); /*0x6ba389*/
          DeleteAndZero((void **)v15); /*0x6ba390*/
          __3_YAXPAX_Z((void *)v15); /*0x6ba396*/
        }
LABEL_20:
        if ( *(float *)&v17 > *(double *)(this + 32) ) /*0x6ba3aa*/
          goto LABEL_22; /*0x6ba3aa*/
      }
      HashTable::RebuildEx((_DWORD *)this); /*0x6ba3ae*/
    }
  }
LABEL_22:
  if ( v18[0] ) /*0x6ba3ba*/
    (**(void (__thiscall ***)(_DWORD, int))v18[0])(v18[0], 1); /*0x6ba3c0*/
LABEL_24:
  DeleteAndZero(&v16); /*0x6ba3c2*/
}


// ==== 0x006BA3E0  Surface::TileBlit  this=Surface  sig=csp ====
char __stdcall Surface::TileBlit(INIClass *aP0, ObjectClass *aP1, int a3, int a4, int a5)
{
  ObjectClass *v5; // ebx
  int v7; // edi
  int v8; // eax
  ObjectClass *v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ecx
  int v16; // [esp+18h] [ebp-48h]
  int v17; // [esp+1Ch] [ebp-44h]
  int v18; // [esp+20h] [ebp-40h]
  int v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+28h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+38h] [ebp-28h]
  int v23; // [esp+3Ch] [ebp-24h]
  _BYTE v24[16]; // [esp+40h] [ebp-20h] BYREF
  _DWORD v25[4]; // [esp+50h] [ebp-10h] BYREF
  INIClass *aP0a; // [esp+64h] [ebp+4h]
  int v27; // [esp+74h] [ebp+14h]

  v5 = aP1; /*0x6ba3e4*/
  v20 = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x6ba3f8*/
  if ( !v20 ) /*0x6ba3fc*/
    return 0; /*0x6ba3ff*/
  v7 = a3; /*0x6ba408*/
  v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba41b*/
  if ( v21 )
  {
    v17 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 116))(aP1) / 2; /*0x6ba442*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3) / 2; /*0x6ba452*/
    v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 120))(a3, v24); /*0x6ba45d*/
    v22 = *(_DWORD *)(v8 + 8); /*0x6ba470*/
    v23 = *(_DWORD *)(v8 + 12); /*0x6ba480*/
    (*(void (__thiscall **)(ObjectClass *, _DWORD *))(*(_DWORD *)aP1->__pad_0 + 120))(aP1, v25); /*0x6ba484*/
    v10 = (ObjectClass *)aP0->headNode[1]; /*0x6ba48f*/
    v11 = aP0->headNode[2]; /*0x6ba492*/
    v19 = (v22 - (int)v10) / 2 <= 0 ? 0 : (v22 - (int)v10) / 2;
    v12 = 0; /*0x6ba4bf*/
    v16 = 0; /*0x6ba4c3*/
    if ( v11 > 0 )
    {
      v13 = a5 + ((v23 - v11) / 2 <= 0 ? 0 : (v23 - v11) / 2);
      v27 = v13; /*0x6ba4d3*/
      do /*0x6ba558*/
      {
        aP0a = 0; /*0x6ba4d9*/
        if ( (int)v10 > 0 ) /*0x6ba4ee*/
        {
          v14 = v19 + a4; /*0x6ba506*/
          v15 = v20 + 2 * (*(_DWORD *)aP0->__pad_0 + v17 * (aP0->headNode[0] + v12)); /*0x6ba50d*/
          do /*0x6ba537*/
          {
            v15 += 2; /*0x6ba512*/
            *(_WORD *)(v15 - 2) = *(_WORD *)(v21 + 2 * (v18 * (v13 % v23) + v14 % v22)); /*0x6ba528*/
            v10 = (ObjectClass *)aP0->headNode[1]; /*0x6ba52c*/
            ++v14; /*0x6ba530*/
            aP0a = (INIClass *)((char *)aP0a + 1); /*0x6ba533*/
          }
          while ( (int)aP0a < (int)v10 ); /*0x6ba537*/
          v7 = a3; /*0x6ba539*/
          v12 = v16; /*0x6ba53d*/
          v5 = aP1; /*0x6ba541*/
        }
        ++v12; /*0x6ba54c*/
        v13 = v27 + 1; /*0x6ba54d*/
        v16 = v12; /*0x6ba550*/
        ++v27; /*0x6ba554*/
      }
      while ( v12 < aP0->headNode[2] ); /*0x6ba558*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7); /*0x6ba562*/
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 96))(v5); /*0x6ba569*/
    return 1; /*0x6ba56f*/
  }
  else
  {
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 96))(aP1); /*0x6ba425*/
    return 0; /*0x6ba429*/
  }
}


// ==== 0x006BA580  Surface::BlitTransparent  this=Surface  sig=csp ====
char __stdcall Surface::BlitTransparent(int *a0, ObjectClass *aP1, int a3, ObjectClass *aP3)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edx
  _WORD *v11; // ebx
  int v12; // esi
  _WORD *v13; // eax
  _WORD *v14; // ecx
  int v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+1Ch] [ebp-8h]
  int *a0a; // [esp+28h] [ebp+4h]

  v15 = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x6ba599*/
  if ( !v15 ) /*0x6ba59d*/
    return 0; /*0x6ba5a1*/
  v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba5bb*/
  if ( v5 ) /*0x6ba5bf*/
  {
    v6 = *a0; /*0x6ba5d8*/
    v7 = a0[1]; /*0x6ba5da*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 124))(a3); /*0x6ba5f2*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 128))(a3); /*0x6ba604*/
    v9 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 116))(aP1) / 2; /*0x6ba60e*/
    if ( v8 > 0 ) /*0x6ba612*/
    {
      v10 = v16; /*0x6ba617*/
      a0a = (int *)(2 * v9); /*0x6ba624*/
      v11 = (_WORD *)(v15 + 2 * (v6 + v9 * v7)); /*0x6ba628*/
      do /*0x6ba65a*/
      {
        if ( v10 > 0 ) /*0x6ba62d*/
        {
          v12 = v10; /*0x6ba62f*/
          v13 = (_WORD *)v5; /*0x6ba633*/
          v14 = v11; /*0x6ba635*/
          v5 += 2 * v10; /*0x6ba637*/
          do /*0x6ba64d*/
          {
            if ( *v13 != (_WORD)aP3 ) /*0x6ba641*/
              *v14 = *v13; /*0x6ba643*/
            ++v13; /*0x6ba646*/
            ++v14; /*0x6ba649*/
            --v12; /*0x6ba64c*/
          }
          while ( v12 ); /*0x6ba64d*/
          v10 = v16; /*0x6ba64f*/
        }
        v11 = (_WORD *)((char *)v11 + (_DWORD)a0a); /*0x6ba657*/
        --v8; /*0x6ba659*/
      }
      while ( v8 ); /*0x6ba65a*/
    }
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 96))(aP1); /*0x6ba662*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 96))(a3); /*0x6ba66b*/
    return 1; /*0x6ba671*/
  }
  else
  {
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 96))(aP1); /*0x6ba5c5*/
    return 0; /*0x6ba5ca*/
  }
}


// ==== 0x006BA680  sub_6BA680  this=-  sig=csp ====
char __stdcall sub_6BA680(int a1, int a2, int a3)
{
  return 0; /*0x6ba682*/
}


// ==== 0x006BA690  Surface::AlphaBlend  this=Surface  sig=csp ====
char __stdcall Surface_AlphaBlend(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v19; // edi
  char v20; // dl
  _WORD *v21; // esi
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // ebp
  unsigned int v26; // eax
  int v27; // edx
  int v28; // eax
  _BYTE *v29; // esi
  _WORD *v30; // edi
  int v31; // ecx
  _WORD *v32; // ecx
  __int16 v33; // cx
  __int16 v34; // ax
  unsigned int v35; // ebp
  unsigned int v36; // esi
  unsigned int v37; // edx
  bool v38; // zf
  _BYTE *v39; // eax
  int v40; // esi
  _WORD *v41; // edx
  __int16 v42; // dx
  __int16 v43; // cx
  int v44; // esi
  __int16 v45; // bp
  unsigned int v46; // ebx
  int v47; // edx
  unsigned int v48; // ecx
  __int16 v49; // bp
  bool v50; // cc
  int v51; // [esp+1Ch] [ebp-278h]
  __int16 *v52; // [esp+1Ch] [ebp-278h]
  int v53; // [esp+20h] [ebp-274h]
  _BYTE *v54; // [esp+20h] [ebp-274h]
  int v55; // [esp+24h] [ebp-270h]
  int v56; // [esp+28h] [ebp-26Ch]
  int v57; // [esp+2Ch] [ebp-268h]
  _WORD *v58; // [esp+30h] [ebp-264h]
  int v59; // [esp+30h] [ebp-264h]
  int v60; // [esp+34h] [ebp-260h]
  _WORD *v61; // [esp+34h] [ebp-260h]
  _BYTE *v62; // [esp+38h] [ebp-25Ch]
  _BYTE *v63; // [esp+38h] [ebp-25Ch]
  int v64; // [esp+40h] [ebp-254h]
  int v65; // [esp+44h] [ebp-250h]
  int v66; // [esp+48h] [ebp-24Ch]
  int v67; // [esp+4Ch] [ebp-248h]
  int v68; // [esp+50h] [ebp-244h]
  unsigned int v69; // [esp+54h] [ebp-240h]
  int v70; // [esp+58h] [ebp-23Ch]
  _WORD *v71; // [esp+5Ch] [ebp-238h]
  int v72; // [esp+60h] [ebp-234h]
  int v73; // [esp+64h] [ebp-230h]
  int v74; // [esp+7Ch] [ebp-218h]
  int v75; // [esp+80h] [ebp-214h]
  char v76[16]; // [esp+84h] [ebp-210h] BYREF
  _WORD v77[256]; // [esp+94h] [ebp-200h] BYREF

  v8 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)a3 + 120))(a3, v76); /*0x6ba6a8*/
  v9 = 0; /*0x6ba6b8*/
  v10 = 0; /*0x6ba6bd*/
  v56 = 0; /*0x6ba6c3*/
  v11 = *(_DWORD *)(v8 + 8); /*0x6ba6c7*/
  v57 = 0; /*0x6ba6ca*/
  v74 = v11; /*0x6ba6ce*/
  v55 = 0; /*0x6ba6d2*/
  v12 = *(_DWORD *)(v8 + 12); /*0x6ba6d6*/
  v75 = v12; /*0x6ba6e0*/
  v51 = 0; /*0x6ba6e4*/
  v13 = a1[2]; /*0x6ba6e8*/
  v66 = 0; /*0x6ba6eb*/
  v68 = 0; /*0x6ba6f1*/
  if ( v11 <= v13 ) /*0x6ba6f5*/
  {
    if ( a6 ) /*0x6ba722*/
      v66 = (v13 - v11) / 2; /*0x6ba72b*/
  }
  else if ( a6 ) /*0x6ba6f9*/
  {
    v14 = v11 - v13; /*0x6ba6fb*/
    v10 = (v14 + 1) / 2; /*0x6ba70a*/
    v56 = v10; /*0x6ba70e*/
    v55 = v14 / 2; /*0x6ba712*/
  }
  else
  {
    v55 = v11 - v13; /*0x6ba71a*/
  }
  v15 = a1[3]; /*0x6ba736*/
  if ( v12 <= v15 ) /*0x6ba73b*/
  {
    if ( a6 ) /*0x6ba76c*/
      v68 = (v15 - v12) / 2; /*0x6ba775*/
  }
  else if ( a6 ) /*0x6ba73f*/
  {
    v57 = (v12 - v15 + 1) / 2; /*0x6ba74d*/
    v9 = (v12 - v15) / 2; /*0x6ba758*/
    v51 = v9; /*0x6ba75a*/
  }
  else
  {
    v9 = v12 - v15; /*0x6ba762*/
    v51 = v12 - v15; /*0x6ba764*/
  }
  if ( a7 > v10 ) /*0x6ba782*/
  {
    v16 = v10 - a7 + v55; /*0x6ba78a*/
    v10 = a7; /*0x6ba78c*/
    v55 = v16; /*0x6ba78e*/
    v56 = a7; /*0x6ba792*/
  }
  if ( a8 > v57 ) /*0x6ba7a3*/
  {
    v17 = v57 - a8; /*0x6ba7a5*/
    v57 = a8; /*0x6ba7a7*/
    v9 += v17; /*0x6ba7ab*/
    v51 = v9; /*0x6ba7ad*/
  }
  v70 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba7c7*/
  if ( !v70 ) /*0x6ba7cd*/
    return 0; /*0x6ba7db*/
  v19 = 0; /*0x6ba7e5*/
  v53 = 0; /*0x6ba7e9*/
  v64 = 0; /*0x6ba7ed*/
  if ( a5 ) /*0x6ba7f1*/
  {
    v64 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba843*/
    if ( !v64 ) /*0x6ba847*/
      goto LABEL_21; /*0x6ba847*/
  }
  else
  {
    v19 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba805*/
    v53 = v19; /*0x6ba809*/
    if ( !v19 ) /*0x6ba80d*/
    {
LABEL_21:
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba80f*/
      return 0; /*0x6ba827*/
    }
  }
  v65 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, 0, 0); /*0x6ba87d*/
  if ( a5 ) /*0x6ba88a*/
  {
    v20 = MEMORY[0x8A0DD4]; /*0x6ba88c*/
    v21 = v77; /*0x6ba892*/
    v22 = a5 + 1; /*0x6ba899*/
    v23 = 256; /*0x6ba89a*/
    do /*0x6ba8ef*/
    {
      LOBYTE(v10) = *(_BYTE *)(v22 + 1) >> MEMORY[0x8A0DDC]; /*0x6ba8a8*/
      v22 += 3; /*0x6ba8b0*/
      ++v21; /*0x6ba8b3*/
      LOWORD(v12) = (unsigned __int8)v10; /*0x6ba8b6*/
      LOWORD(v10) = (unsigned __int8)(*(_BYTE *)(v22 - 4) >> v20); /*0x6ba8c9*/
      v24 = v10 << MEMORY[0x8A0DD0]; /*0x6ba8cd*/
      v25 = v24 | (v12 << MEMORY[0x8A0DD8]); /*0x6ba8d5*/
      LOWORD(v24) = (unsigned __int8)(*(_BYTE *)(v22 - 3) >> MEMORY[0x8A0DE4]); /*0x6ba8e2*/
      v10 = v24 << MEMORY[0x8A0DE0]; /*0x6ba8e6*/
      v12 = v10 | v25; /*0x6ba8e8*/
      --v23; /*0x6ba8ea*/
      *(v21 - 1) = v12; /*0x6ba8eb*/
    }
    while ( v23 ); /*0x6ba8ef*/
    v9 = v51; /*0x6ba8f1*/
    v10 = v56; /*0x6ba8f5*/
    v19 = v53; /*0x6ba8f9*/
    v12 = v75; /*0x6ba8fd*/
  }
  v72 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2) / 2; /*0x6ba91b*/
  v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3); /*0x6ba91f*/
  v69 = v26; /*0x6ba929*/
  if ( !a5 ) /*0x6ba92f*/
  {
    v26 >>= 1; /*0x6ba931*/
    v69 = v26; /*0x6ba933*/
  }
  v27 = v57; /*0x6ba937*/
  v67 = v57; /*0x6ba93f*/
  v73 = v12 - v9; /*0x6ba943*/
  if ( v57 < v12 - v9 ) /*0x6ba947*/
  {
    v28 = v57 * v26; /*0x6ba94d*/
    v29 = (_BYTE *)(v10 + v28 + v65); /*0x6ba957*/
    v54 = v29; /*0x6ba95b*/
    v30 = (_WORD *)(v19 + 2 * (v10 + v28)); /*0x6ba95f*/
    v71 = v30; /*0x6ba962*/
    do /*0x6ba992*/
    {
      v31 = v66 + *a1 + v72 * (v68 + v27 + a1[1] - v57); /*0x6ba992*/
      if ( a5 ) /*0x6ba996*/
      {
        if ( v10 < v74 - v55 ) /*0x6baabe*/
        {
          v39 = v29; /*0x6baacc*/
          v40 = v64 - v65; /*0x6baad2*/
          v41 = (_WORD *)(v70 + 2 * v31); /*0x6baad4*/
          v63 = v39; /*0x6baad9*/
          v61 = v41; /*0x6baadd*/
          v59 = v74 - v55 - v10; /*0x6baae5*/
          do /*0x6babc8*/
          {
            if ( *v39 ) /*0x6baae9*/
            {
              v42 = *v41; /*0x6bab21*/
              v43 = v77[(unsigned __int8)v39[v40]]; /*0x6bab27*/
              v44 = 255 - (unsigned __int8)*v39; /*0x6bab48*/
              v45 = MEMORY[0xAC48B8] /*0x6bab5d*/
                  & ((v44 * (unsigned __int16)(MEMORY[0xAC48B8] & v42)
                    + (unsigned __int8)*v39 * (unsigned int)(unsigned __int16)(MEMORY[0xAC48B8] & v43)) >> 8);
              g_GameScreenFlags = (unsigned __int8)*v39; /*0x6bab64*/
              g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6bab6e*/
              v46 = v44 * (unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v42) /*0x6bab79*/
                  + g_GameScreenFlags * (unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v43);
              v47 = v44 * (unsigned __int16)(MEMORY[0xAC48BC] & v42); /*0x6bab8a*/
              v39 = v63; /*0x6bab97*/
              v40 = v64 - v65; /*0x6bab9b*/
              v48 = v47 + g_GameScreenFlags * (unsigned __int16)(MEMORY[0xAC48BC] & v43); /*0x6bab9f*/
              v41 = v61; /*0x6baba1*/
              v49 = HIWORD(MEMORY[0xAC48B8]) & (v46 >> 8) | v45; /*0x6baba5*/
              v10 = v56; /*0x6baba7*/
              *v61 = (v48 >> 8) | v49; /*0x6babb0*/
            }
            ++v41; /*0x6babb7*/
            ++v39; /*0x6babba*/
            v38 = v59 == 1; /*0x6babbb*/
            v61 = v41; /*0x6babbc*/
            v63 = v39; /*0x6babc0*/
            --v59; /*0x6babc4*/
          }
          while ( !v38 ); /*0x6babc8*/
          goto LABEL_43; /*0x6babc8*/
        }
      }
      else if ( v10 < v74 - v55 ) /*0x6ba9a8*/
      {
        v62 = v29; /*0x6ba9b4*/
        v52 = v30; /*0x6ba9b8*/
        v32 = (_WORD *)(v70 + 2 * v31); /*0x6ba9bc*/
        v60 = v74 - v55 - v10; /*0x6ba9bf*/
        v58 = v32; /*0x6ba9c3*/
        do /*0x6baaa7*/
        {
          if ( *v29 ) /*0x6ba9c7*/
          {
            v33 = *v32; /*0x6ba9d1*/
            v34 = *v52; /*0x6ba9f4*/
            g_GameScreenFlags = (unsigned __int8)*v29; /*0x6baa06*/
            g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6baa45*/
            v35 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & MEMORY[0xAC48B8]) /*0x6baa4b*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(v34 & MEMORY[0xAC48B8])) >> 8;
            v36 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & HIWORD(MEMORY[0xAC48B8])) /*0x6baa57*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(HIWORD(MEMORY[0xAC48B8]) & v34)) >> 8;
            v10 = v56; /*0x6baa6e*/
            v37 = (255 - g_GameScreenFlags) * (unsigned __int16)(v33 & MEMORY[0xAC48BC]) /*0x6baa75*/
                + g_GameScreenFlags * (unsigned __int16)(v34 & MEMORY[0xAC48BC]);
            v32 = v58; /*0x6baa77*/
            *v58 = (v37 >> 8) | HIWORD(MEMORY[0xAC48B8]) & v36 | MEMORY[0xAC48B8] & v35; /*0x6baa80*/
          }
          ++v32; /*0x6baa8f*/
          v29 = v62 + 1; /*0x6baa92*/
          v38 = v60 == 1; /*0x6baa96*/
          v58 = v32; /*0x6baa97*/
          ++v62; /*0x6baa9b*/
          ++v52; /*0x6baa9f*/
          --v60; /*0x6baaa3*/
        }
        while ( !v38 ); /*0x6baaa7*/
LABEL_43:
        v29 = v54; /*0x6babce*/
      }
      v29 += v69; /*0x6babd2*/
      v27 = v67 + 1; /*0x6babe3*/
      v30 = &v71[v69]; /*0x6babe4*/
      v50 = ++v67 < v73; /*0x6babea*/
      v71 = v30; /*0x6babf0*/
      v54 = v29; /*0x6babf4*/
    }
    while ( v50 ); /*0x6ba992*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6babfe*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 96))(a3); /*0x6bac13*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 96))(a4); /*0x6bac1f*/
  return 1; /*0x6ba7cf*/
}


// ==== 0x006BAC40  HashTable::RemoveHashTableEntry  this=HashTable  sig=csp ====
char __thiscall HashTable::RemoveHashTableEntry(_DWORD *this, ObjectClass *aP1, void *a2)
{
  int v4; // eax
  int v7; // ebx
  int v8; // esi
  SessionClass *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  AbstractClass *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  AbstractClass *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // ebx
  unsigned int v25; // esi
  int v26; // edi
  AbstractClass *v27; // ebx
  AbstractClass *v28; // edi
  unsigned int v29; // edx
  AbstractClass *v30; // edi
  unsigned int v31; // ebx
  ObjectClass *v32; // esi
  int v33; // edx
  int v34; // ecx
  ObjectClass *v35; // eax
  ObjectClass *v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char aP1a; // [esp+20h] [ebp+4h]
  AbstractClass *a2a; // [esp+24h] [ebp+8h]
  AbstractClass *a2b; // [esp+24h] [ebp+8h]

  v4 = this->HashTable_field_0x04; /*0x6bac4b*/
  if ( !v4 ) /*0x6bac50*/
    return 0; /*0x6bac55*/
  v37 = (double)(unsigned int)(v4 - 1) / (double)(int)this->HashTable_field_0x08; /*0x6bac80*/
  v7 = ((int (__thiscall *)(ObjectClass *))this->HashTable_field_0x18)(aP1) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6bac95*/
  v8 = *(_DWORD *)(*this + 4 * v7); /*0x6bac97*/
  v36 = (ObjectClass *)v8; /*0x6bac9c*/
  if ( !v8 ) /*0x6baca0*/
    return 0; /*0x6baca5*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x6bacb1*/
  {
    qmemcpy(a2, (const void *)(v8 + 4), 0x304u); /*0x6bacca*/
    v9 = *(SessionClass **)(*this + 4 * v7); /*0x6baccf*/
    v10 = *(_DWORD *)&v9->WOLLimitResolution; /*0x6bacd4*/
    if ( v9 ) /*0x6bacda*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x6bacde*/
      __3_YAXPAX_Z(v9); /*0x6bace4*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x6bacf3*/
    v11 = v37 < *((double *)this + 4); /*0x6bacf9*/
    v12 = v37 == *((double *)this + 4); /*0x6bacf9*/
    --this->HashTable_field_0x04; /*0x6bacfd*/
    if ( v11 || v12 ) /*0x6bad02*/
    {
      v13 = this->HashTable_field_0x08; /*0x6bad0b*/
      if ( v13 > this->HashTable_field_0x30 && this->HashTable_field_0x50 != 1 ) /*0x6bad1d*/
      {
        v14 = (AbstractClass *)*this; /*0x6bad26*/
        a2a = (AbstractClass *)*this; /*0x6bad2b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x6bad31*/
        this->HashTable_field_0x08 = v13 >> 1; /*0x6bad32*/
        this->HashTable_field_0x0C = v15; /*0x6bad3c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6bad48*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6bad4d*/
        *this = v16; /*0x6bad54*/
        memset(v16, 0, v17); /*0x6bad5a*/
        if ( (int)v13 > 0 ) /*0x6bad65*/
        {
          v18 = v14; /*0x6bad67*/
          v19 = v13; /*0x6bad69*/
          do /*0x6bada4*/
          {
            v20 = *(_DWORD *)v18->__pad_0; /*0x6bad6b*/
            if ( *(_DWORD *)v18->__pad_0 ) /*0x6bad6b*/
            {
              do /*0x6bad9e*/
              {
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6bad81*/
                v22 = *(_DWORD *)(*this + 4 * v21); /*0x6bad86*/
                *(_DWORD *)(*this + 4 * v21) = v20; /*0x6bad8c*/
                v23 = *(_DWORD *)(v20 + 776); /*0x6bad8e*/
                *(_DWORD *)(v20 + 776) = v22; /*0x6bad94*/
                v20 = v23; /*0x6bad9a*/
              }
              while ( v23 ); /*0x6bad9e*/
            }
            v18 = (AbstractClass *)((char *)v18 + 4); /*0x6bada0*/
            --v19; /*0x6bada3*/
          }
          while ( v19 ); /*0x6bada4*/
          v14 = a2a; /*0x6bada6*/
        }
        __3_YAXPAX_Z(v14); /*0x6badab*/
      }
    }
    return 1; /*0x6badb6*/
  }
  else
  {
    v24 = *(ObjectClass **)(v8 + 776); /*0x6badbf*/
    aP1a = 0; /*0x6badc5*/
    if ( v24 ) /*0x6badcc*/
    {
      while ( !String::Compare((const char **)v24, (const char **)aP1) ) /*0x6badd8*/
      {
        v36 = v24; /*0x6badda*/
        v24 = (ObjectClass *)v24[4].customSound_controller[2]; /*0x6badde*/
        if ( !v24 ) /*0x6bade6*/
          goto LABEL_24; /*0x6bade6*/
      }
      qmemcpy(a2, &v24->__pad_0[4], 0x304u); /*0x6badfa*/
      v36[4].customSound_controller[2] = v24[4].customSound_controller[2]; /*0x6bae02*/
      --this->HashTable_field_0x04; /*0x6bae0e*/
      DeleteAndZero((void **)v24); /*0x6bae15*/
      __3_YAXPAX_Z(v24); /*0x6bae1b*/
      aP1a = 1; /*0x6bae23*/
    }
LABEL_24:
    if ( v37 <= *((double *)this + 4) ) /*0x6bae34*/
    {
      v25 = this->HashTable_field_0x08; /*0x6bae3a*/
      if ( v25 > this->HashTable_field_0x30 && this->HashTable_field_0x50 != 1 ) /*0x6bae4c*/
      {
        v26 = this->HashTable_field_0x0C; /*0x6bae52*/
        v27 = (AbstractClass *)*this; /*0x6bae55*/
        a2b = (AbstractClass *)*this; /*0x6bae5a*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x6bae60*/
        this->HashTable_field_0x0C = v26 - 1; /*0x6bae68*/
        v28 = (AbstractClass *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x6bae73*/
        v29 = 4 * this->HashTable_field_0x08; /*0x6bae78*/
        *this = v28; /*0x6bae7f*/
        memset(v28, 0, v29); /*0x6bae85*/
        if ( (int)v25 > 0 ) /*0x6bae90*/
        {
          v30 = v27; /*0x6bae92*/
          v31 = v25; /*0x6bae94*/
          do /*0x6baecf*/
          {
            v32 = *(ObjectClass **)v30->__pad_0; /*0x6bae96*/
            if ( *(_DWORD *)v30->__pad_0 ) /*0x6bae96*/
            {
              do /*0x6baec9*/
              {
                v33 = ((int (__thiscall *)(ObjectClass *))this->HashTable_field_0x18)(v32) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6baeac*/
                v34 = *(_DWORD *)(*this + 4 * v33); /*0x6baeb1*/
                *(_DWORD *)(*this + 4 * v33) = v32; /*0x6baeb7*/
                v35 = (ObjectClass *)v32[4].customSound_controller[2]; /*0x6baeb9*/
                v32[4].customSound_controller[2] = v34; /*0x6baebf*/
                v32 = v35; /*0x6baec5*/
              }
              while ( v35 ); /*0x6baec9*/
            }
            v30 = (AbstractClass *)((char *)v30 + 4); /*0x6baecb*/
            --v31; /*0x6baece*/
          }
          while ( v31 ); /*0x6baecf*/
          v27 = a2b; /*0x6baed1*/
        }
        __3_YAXPAX_Z(v27); /*0x6baed6*/
      }
    }
    return aP1a; /*0x6baede*/
  }
}


// ==== 0x006BAEF0  HashTable::RebuildEx  this=HashTable  sig=csp ====
void __thiscall HashTable_RebuildEx(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = this->HashTable_field_0x08; /*0x6baef5*/
  if ( v2 > this->HashTable_field_0x30 && this->HashTable_field_0x50 != 1 ) /*0x6baf07*/
  {
    v3 = (int *)*this; /*0x6baf10*/
    v4 = this->HashTable_field_0x0C; /*0x6baf13*/
    v13 = (int *)*this; /*0x6baf16*/
    this->HashTable_field_0x08 = v2 >> 1; /*0x6baf1c*/
    this->HashTable_field_0x0C = v4 - 1; /*0x6baf24*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x6baf2f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6baf34*/
    *this = v5; /*0x6baf3b*/
    memset(v5, 0, v6); /*0x6baf40*/
    if ( (int)v2 > 0 ) /*0x6baf4b*/
    {
      v7 = v3; /*0x6baf4d*/
      v8 = v2; /*0x6baf4f*/
      do /*0x6baf89*/
      {
        v9 = *v7; /*0x6baf51*/
        if ( *v7 ) /*0x6baf51*/
        {
          do /*0x6baf83*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6baf67*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x6baf6b*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x6baf71*/
            v12 = *(_DWORD *)(v9 + 776); /*0x6baf73*/
            *(_DWORD *)(v9 + 776) = v11; /*0x6baf79*/
            v9 = v12; /*0x6baf7f*/
          }
          while ( v12 ); /*0x6baf83*/
        }
        ++v7; /*0x6baf85*/
        --v8; /*0x6baf88*/
      }
      while ( v8 ); /*0x6baf89*/
      v3 = v13; /*0x6baf8b*/
    }
    __3_YAXPAX_Z(v3); /*0x6baf90*/
  }
}


// ==== 0x006BAFA0  ObjectClass::Render_Load_6BAFA0  this=ObjectClass  sig=csp ====
void __thiscall sub_6BAFA0(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( this->customSound_controller != 1 ) /*0x6bafa8*/
  {
    v2 = this->vtable3; /*0x6bafb0*/
    v3 = (_DWORD *)*this; /*0x6bafb3*/
    v4 = this->vtable4 + 1; /*0x6bafbc*/
    this->vtable3 = 2 * v2; /*0x6bafbd*/
    v13 = v3; /*0x6bafc0*/
    this->vtable4 = v4; /*0x6bafc8*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x6bafd3*/
    v6 = 4 * this->vtable3; /*0x6bafd8*/
    *this = v5; /*0x6bafdf*/
    memset(v5, 0, v6); /*0x6bafe4*/
    if ( v2 > 0 ) /*0x6bafef*/
    {
      v7 = v3; /*0x6baff1*/
      v8 = v2; /*0x6baff3*/
      do /*0x6bb02d*/
      {
        v9 = *v7; /*0x6baff5*/
        if ( *v7 ) /*0x6baff5*/
        {
          do /*0x6bb027*/
          {
            v10 = ((int (__thiscall *)(int))this->nextArrayIndex)(v9) & ((1 << this->vtable4) - 1); /*0x6bb00b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x6bb00f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x6bb015*/
            v12 = *(_DWORD *)(v9 + 776); /*0x6bb017*/
            *(_DWORD *)(v9 + 776) = v11; /*0x6bb01d*/
            v9 = v12; /*0x6bb023*/
          }
          while ( v12 ); /*0x6bb027*/
        }
        ++v7; /*0x6bb029*/
        --v8; /*0x6bb02c*/
      }
      while ( v8 ); /*0x6bb02d*/
      v3 = v13; /*0x6bb02f*/
    }
    __3_YAXPAX_Z(v3); /*0x6bb034*/
  }
}


// ==== 0x006BB050  sub_6BB050  this=-  sig=ida-proto ====
int sub_6BB050()
{
  MEMORY[0xB0BC58] = 0; /*0x6bb052*/
  MEMORY[0xB0BC5C] = 0; /*0x6bb057*/
  MEMORY[0xB0BC60] = 0; /*0x6bb05c*/
  MEMORY[0xB0BC64] = 0; /*0x6bb061*/
  return 0; /*0x6bb066*/
}


// ==== 0x006BB070  sub_6BB070  this=-  sig=ida-proto ====
void sub_6BB070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6bb07c*/
  MEMORY[0xB0BC70] = Math::Sqrt(v0 + v0); /*0x6bb08e*/
}


// ==== 0x006BB0A0  sub_6BB0A0  this=-  sig=ida-proto ====
void sub_6BB0A0()
{
  MEMORY[0xB0BCD8] = MEMORY[0xB0BC70] / 60.0; /*0x6bb0ac*/
}


// ==== 0x006BB0C0  sub_6BB0C0  this=-  sig=ida-proto ====
void sub_6BB0C0()
{
  MEMORY[0xB0BCC0] = 1.0 / MEMORY[0xB0BCD8]; /*0x6bb0cc*/
}


// ==== 0x006BB0E0  sub_6BB0E0  this=-  sig=ida-proto ====
void sub_6BB0E0()
{
  MEMORY[0xB0BCB8] = 0.0174532925199433 * 45.0; /*0x6bb0ec*/
}


// ==== 0x006BB100  sub_6BB100  this=-  sig=ida-proto ====
void sub_6BB100()
{
  MEMORY[0xB0BC78] = 0.0174532925199433 * 60.0; /*0x6bb10c*/
}


// ==== 0x006BB120  sub_6BB120  this=-  sig=ida-proto ====
void sub_6BB120()
{
  MEMORY[0xB0BC50] = 0.0174532925199433 * 90.0; /*0x6bb12c*/
}


// ==== 0x006BB140  sub_6BB140  this=-  sig=ida-proto ====
__int64 sub_6BB140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0BC50] - MEMORY[0xB0BC78]); /*0x6bb152*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0BC70] * 0.5); /*0x6bb166*/
  MEMORY[0xB0BCE0] = result; /*0x6bb16b*/
  return result; /*0x6bb170*/
}


// ==== 0x006BB180  sub_6BB180  this=-  sig=ida-proto ====
void sub_6BB180()
{
  MEMORY[0xB0BC80] = Math::ArcTan((double)MEMORY[0xB0BCE0] * 0.00390625); /*0x6bb197*/
}


// ==== 0x006BB1B0  sub_6BB1B0  this=-  sig=ida-proto ====
void sub_6BB1B0()
{
  MEMORY[0xB0BCB0] = Math::ArcTan((double)(2 * MEMORY[0xB0BCE0]) / MEMORY[0xB0BC70]); /*0x6bb1d2*/
}


// ==== 0x006BB1E0  sub_6BB1E0  this=-  sig=ida-proto ====
__int64 sub_6BB1E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0BCE0]) + 0.5); /*0x6bb1fb*/
  MEMORY[0xB0BCD4] = result; /*0x6bb200*/
  return result; /*0x6bb206*/
}


// ==== 0x006BB210  sub_6BB210  this=-  sig=ida-proto ====
int sub_6BB210()
{
  MEMORY[0xB0BC68] = 0; /*0x6bb212*/
  MEMORY[0xB0BC6A] = 0; /*0x6bb218*/
  return 0; /*0x6bb21e*/
}


// ==== 0x006BB220  sub_6BB220  this=-  sig=ida-proto ====
int sub_6BB220()
{
  MEMORY[0xB0BCA0] = 0; /*0x6bb222*/
  MEMORY[0xB0BCA4] = 0; /*0x6bb227*/
  MEMORY[0xB0BCA8] = 0; /*0x6bb22c*/
  return 0; /*0x6bb231*/
}


// ==== 0x006BB240  sub_6BB240  this=-  sig=ida-proto ====
int sub_6BB240()
{
  MEMORY[0xB0BCD0] = 0; /*0x6bb245*/
  MEMORY[0xB0BCC8] = 128; /*0x6bb24f*/
  MEMORY[0xB0BCCC] = 128; /*0x6bb254*/
  return 128; /*0x6bb259*/
}


// ==== 0x006BB260  sub_6BB260  this=-  sig=ida-proto ====
int sub_6BB260()
{
  MEMORY[0xB0BC8C] = 0; /*0x6bb267*/
  MEMORY[0xB0BC90] = 0; /*0x6bb26c*/
  MEMORY[0xB0BC94] = 1; /*0x6bb271*/
  MEMORY[0xB0BC95] = 0; /*0x6bb278*/
  MEMORY[0xB0BC88] = (int)&vt_DynamicVectorClass_unsigned_long; /*0x6bb27d*/
  MEMORY[0xB0BC9C] = 10; /*0x6bb287*/
  MEMORY[0xB0BC98] = 0; /*0x6bb291*/
  return atexit(sub_6BB2A0); /*0x6bb29c*/
}


// ==== 0x006BB2A0  sub_6BB2A0  this=-  sig=ida-proto ====
void __cdecl sub_6BB2A0()
{
  MEMORY[0xB0BC88] = (int)&vt_VectorClass_unsigned_long; /*0x6bb2a8*/
  if ( MEMORY[0xB0BC8C] && MEMORY[0xB0BC95] ) /*0x6bb2bc*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0BC8C]); /*0x6bb2bf*/
    MEMORY[0xB0BC8C] = 0; /*0x6bb2c7*/
  }
  MEMORY[0xB0BC95] = 0; /*0x6bb2cd*/
  MEMORY[0xB0BC90] = 0; /*0x6bb2d3*/
}


// ==== 0x006BB2E0  WriteRegistryKeyCOM  this=-  sig=csp ====
char __fastcall WriteRegistryKeyCOM(LPCSTR lpString2, LPCSTR a2, LPCSTR lpString)
{
  char v4; // bl
  int v5; // eax
  HKEY phkResult; // [esp+8h] [ebp-108h] BYREF
  CHAR String1[260]; // [esp+Ch] [ebp-104h] BYREF

  v4 = 0; /*0x6bb2f0*/
  lstrcpyA(String1, lpString2); /*0x6bb2f2*/
  if ( a2 ) /*0x6bb2fa*/
  {
    lstrcatA(String1, asc_815E74); /*0x6bb30d*/
    lstrcatA(String1, a2); /*0x6bb315*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, String1, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb336*/
  {
    if ( !lpString || (v5 = lstrlenA(lpString), !RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)lpString, v5 + 1)) ) /*0x6bb360*/
      v4 = 1; /*0x6bb36a*/
    RegCloseKey(phkResult); /*0x6bb371*/
  }
  return v4; /*0x6bb379*/
}


// ==== 0x006BB390  ObjectClass::RegisterClassesCOM  this=ObjectClass  sig=csp ====
int RegisterClassesCOM()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _BYTE v6[16]; // [esp+0h] [ebp-2F0h] BYREF
  int phkResult; // [esp+10h] [ebp-2E0h] BYREF
  #211 *pptlib; // [esp+14h] [ebp-2DCh] BYREF
  _BYTE MultiByteStr[40]; // [esp+18h] [ebp-2D8h] BYREF
  _BYTE String1[48]; // [esp+40h] [ebp-2B0h] BYREF
  _BYTE SubKey[260]; // [esp+70h] [ebp-280h] BYREF
  _BYTE String[40]; // [esp+174h] [ebp-17Ch] BYREF
  _BYTE sz[80]; // [esp+19Ch] [ebp-154h] BYREF
  _BYTE Filename[260]; // [esp+1ECh] [ebp-104h] BYREF

  ((void (__stdcall *)(int, _BYTE *, int))GetModuleFileNameA)(dword_A8ED54[233831], Filename, 260); /*0x6bb3ae*/
  ((void (__stdcall *)(void *, _BYTE *, int))StringFromGUID2)(&rguid, sz, 39); /*0x6bb3c9*/
  ((void (__stdcall *)(_DWORD, _DWORD, _BYTE *, int, _BYTE *, int, _DWORD, _DWORD))WideCharToMultiByte)( /*0x6bb3ea*/
    0,
    0,
    sz,
    -1,
    MultiByteStr,
    39,
    0,
    0);
  ((void (__stdcall *)(void *, _BYTE *, int))StringFromGUID2)(&stru_7E9510, sz, 39); /*0x6bb3fb*/
  ((void (__stdcall *)(_DWORD, _DWORD, _BYTE *, int, _BYTE *, int, _DWORD, _DWORD))WideCharToMultiByte)( /*0x6bb419*/
    0,
    0,
    sz,
    -1,
    String,
    39,
    0,
    0);
  ((void (__stdcall *)(_BYTE *, char *))lstrcpyA)(String1, aClsid); /*0x6bb42b*/
  ((void (__stdcall *)(_BYTE *, _BYTE *))lstrcatA)(String1, MultiByteStr); /*0x6bb43d*/
  ((void (__stdcall *)(_BYTE *, char *))lstrcpyA)(SubKey, g_Str_WW_TiberianSun_1); /*0x6bb449*/
  if ( !((int (__stdcall *)(unsigned int, _BYTE *, _DWORD, _DWORD, _DWORD, int, _DWORD, int *, _DWORD))RegCreateKeyExA)( /*0x6bb472*/
          0x80000000,
          SubKey,
          0,
          0,
          0,
          983103,
          0,
          &phkResult,
          0) )
  {
    if ( Data ) /*0x6bb486*/
    {
      v0 = ((int (__stdcall *)(char *))lstrlenA)(Data); /*0x6bb48d*/
      ((void (__stdcall *)(int, _DWORD, _DWORD, int, char *, int))RegSetValueExA)(phkResult, 0, 0, 1, Data, v0 + 1); /*0x6bb4a5*/
    }
    ((void (__stdcall *)(int))RegCloseKey)(phkResult); /*0x6bb4ac*/
  }
  ((void (__stdcall *)(_BYTE *, char *))lstrcpyA)(SubKey, g_Str_WW_TiberianSun_1); /*0x6bb4bc*/
  if ( g_INI_Key_CLSID ) /*0x6bb4c5*/
  {
    ((void (__stdcall *)(_BYTE *, char *))lstrcatA)(SubKey, asc_815E74); /*0x6bb4d1*/
    ((void (__stdcall *)(_BYTE *, char *))lstrcatA)(SubKey, g_INI_Key_CLSID); /*0x6bb4dd*/
  }
  if ( !((int (__stdcall *)(unsigned int, _BYTE *, _DWORD, _DWORD, _DWORD, int, _DWORD, int *, _DWORD))RegCreateKeyExA)( /*0x6bb500*/
          0x80000000,
          SubKey,
          0,
          0,
          0,
          983103,
          0,
          &phkResult,
          0) )
  {
    if ( v6 != (_BYTE *)-24 ) /*0x6bb50c*/
    {
      v1 = ((int (__stdcall *)(_BYTE *))lstrlenA)(MultiByteStr); /*0x6bb513*/
      ((void (__stdcall *)(int, _DWORD, _DWORD, int, _BYTE *, int))RegSetValueExA)( /*0x6bb52b*/
        phkResult,
        0,
        0,
        1,
        MultiByteStr,
        v1 + 1);
    }
    ((void (__stdcall *)(int))RegCloseKey)(phkResult); /*0x6bb532*/
  }
  ((void (__stdcall *)(_BYTE *, char *))lstrcpyA)(SubKey, g_Str_WW_TiberianSun); /*0x6bb542*/
  if ( !((int (__stdcall *)(unsigned int, _BYTE *, _DWORD, _DWORD, _DWORD, int, _DWORD, int *, _DWORD))RegCreateKeyExA)( /*0x6bb562*/
          0x80000000,
          SubKey,
          0,
          0,
          0,
          983103,
          0,
          &phkResult,
          0) )
  {
    if ( Data ) /*0x6bb570*/
    {
      v2 = ((int (__stdcall *)(char *))lstrlenA)(Data); /*0x6bb577*/
      ((void (__stdcall *)(int, _DWORD, _DWORD, int, char *, int))RegSetValueExA)(phkResult, 0, 0, 1, Data, v2 + 1); /*0x6bb58f*/
    }
    ((void (__stdcall *)(int))RegCloseKey)(phkResult); /*0x6bb596*/
  }
  ((void (__stdcall *)(_BYTE *, char *))lstrcpyA)(SubKey, g_Str_WW_TiberianSun); /*0x6bb5a6*/
  if ( aCurver ) /*0x6bb5b0*/
  {
    ((void (__stdcall *)(_BYTE *, char *))lstrcatA)(SubKey, asc_815E74); /*0x6bb5bc*/
    ((void (__stdcall *)(_BYTE *, char *))lstrcatA)(SubKey, aCurver); /*0x6bb5c8*/
  }
  if ( !((int (__stdcall *)(unsigned int, _BYTE *, _DWORD, _DWORD, _DWORD, int, _DWORD, int *, _DWORD))RegCreateKeyExA)( /*0x6bb5eb*/
          0x80000000,
          SubKey,
          0,
          0,
          0,
          983103,
          0,
          &phkResult,
          0) )
  {
    if ( g_Str_WW_TiberianSun_1 ) /*0x6bb5f9*/
    {
      v3 = ((int (__stdcall *)(char *))lstrlenA)(g_Str_WW_TiberianSun_1); /*0x6bb600*/
      ((void (__stdcall *)(int, _DWORD, _DWORD, int, char *, int))RegSetValueExA)( /*0x6bb618*/
        phkResult,
        0,
        0,
        1,
        g_Str_WW_TiberianSun_1,
        v3 + 1);
    }
    ((void (__stdcall *)(int))RegCloseKey)(phkResult); /*0x6bb61f*/
  }
  ((void (__stdcall *)(_BYTE *, char *))lstrcpyA)(SubKey, g_Str_WW_TiberianSun); /*0x6bb62f*/
  if ( g_INI_Key_CLSID ) /*0x6bb639*/
  {
    ((void (__stdcall *)(_BYTE *, char *))lstrcatA)(SubKey, asc_815E74); /*0x6bb645*/
    ((void (__stdcall *)(_BYTE *, char *))lstrcatA)(SubKey, g_INI_Key_CLSID); /*0x6bb651*/
  }
  if ( !((int (__stdcall *)(unsigned int, _BYTE *, _DWORD, _DWORD, _DWORD, int, _DWORD, int *, _DWORD))RegCreateKeyExA)( /*0x6bb674*/
          0x80000000,
          SubKey,
          0,
          0,
          0,
          983103,
          0,
          &phkResult,
          0) )
  {
    if ( v6 != (_BYTE *)-24 ) /*0x6bb680*/
    {
      v4 = ((int (__stdcall *)(_BYTE *))lstrlenA)(MultiByteStr); /*0x6bb687*/
      ((void (__stdcall *)(int, _DWORD, _DWORD, int, _BYTE *, int))RegSetValueExA)( /*0x6bb69f*/
        phkResult,
        0,
        0,
        1,
        MultiByteStr,
        v4 + 1);
    }
    ((void (__stdcall *)(int))RegCloseKey)(phkResult); /*0x6bb6a6*/
  }
  WriteRegistryKeyCOM((int)String1, 0, (int)Data); /*0x6bb6b7*/
  WriteRegistryKeyCOM((int)String1, (int)aProgid, (int)g_Str_WW_TiberianSun_1); /*0x6bb6ca*/
  WriteRegistryKeyCOM((int)String1, (int)aVersionindepen, (int)g_Str_WW_TiberianSun); /*0x6bb6dd*/
  WriteRegistryKeyCOM((int)String1, (int)aNotinsertable, 0); /*0x6bb6ed*/
  WriteRegistryKeyCOM((int)String1, (int)aInprocserver32, (int)Filename); /*0x6bb703*/
  WriteRegistryKeyCOM((int)String1, (int)aTypelib, (int)String); /*0x6bb719*/
  pptlib = 0; /*0x6bb722*/
  ((void (__stdcall *)(_UNKNOWN **, #211 **))LoadTypeLib)(&szFile, &pptlib); /*0x6bb730*/
  if ( pptlib ) /*0x6bb740*/
    (*(void (__stdcall **)(#211 *))(*(_DWORD *)pptlib + 8))(pptlib); /*0x6bb745*/
  return 0; /*0x6bb73a*/
}


// ==== 0x006BB760  sub_6BB760  this=-  sig=ida-proto ====
int sub_6BB760()
{
  CHAR String1[72]; // [esp+8h] [ebp-1ECh] BYREF
  CHAR MultiByteStr[40]; // [esp+50h] [ebp-1A4h] BYREF
  CHAR SubKey[300]; // [esp+78h] [ebp-17Ch] BYREF
  OLECHAR sz[40]; // [esp+1A4h] [ebp-50h] BYREF

  StringFromGUID2(&rguid, sz, 39); /*0x6bb777*/
  WideCharToMultiByte(0, 0x20u, sz, -1, MultiByteStr, 39, 0, 0); /*0x6bb796*/
  lstrcpyA(String1, MEMORY[0x840B70]); /*0x6bb7a6*/
  lstrcatA(String1, MultiByteStr); /*0x6bb7b6*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, MEMORY[0x840BB0]); /*0x6bb7cc*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, MEMORY[0x840B98]); /*0x6bb7d8*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, MEMORY[0x840B34]); /*0x6bb7e4*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, MEMORY[0x840B80]); /*0x6bb7f0*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, (LPCSTR)MEMORY[0x840B5C]); /*0x6bb7fc*/
  wsprintfA(SubKey, MEMORY[0x840B78], String1, MEMORY[0x840B24]); /*0x6bb81b*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb82a*/
  wsprintfA(SubKey, MEMORY[0x840B78], String1, MEMORY[0x840B08]); /*0x6bb840*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb84f*/
  wsprintfA(SubKey, MEMORY[0x840B78], String1, MEMORY[0x840AF8]); /*0x6bb865*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb874*/
  wsprintfA(SubKey, MEMORY[0x840B78], String1, MEMORY[0x840AE8]); /*0x6bb88d*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb89c*/
  wsprintfA(SubKey, MEMORY[0x840B78], String1, MEMORY[0x840AE0]); /*0x6bb8b2*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb8c1*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, String1); /*0x6bb8cd*/
  return 0; /*0x6bb8d1*/
}


// ==== 0x006BB8E0  ObjectClass::WinMainSetup_Setup_6BB8E0  this=ObjectClass  sig=csp ====
unsigned __int8 __usercall sub_6BB8E0@<al>(int a1@<esi>)
{
  unsigned __int8 result; // al

  result = MEMORY[0x8A0DEF]; /*0x6bb8e0*/
  if ( MEMORY[0x8A0DEF] ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(); /*0x6bb8ec*/
  if ( !MEMORY[0xB0BCF5] ) /*0x6bb8f7*/
  {
    if ( MEMORY[0x88730C] ) /*0x6bb905*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x88730C])(MEMORY[0x88730C], 1); /*0x6bb90b*/
      MEMORY[0x88730C] = 0; /*0x6bb90d*/
    }
    if ( MEMORY[0x887310] ) /*0x6bb91b*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x887310])(MEMORY[0x887310], 1); /*0x6bb921*/
      MEMORY[0x887310] = 0; /*0x6bb923*/
    }
    if ( MEMORY[0x8872FC] ) /*0x6bb931*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x8872FC])(MEMORY[0x8872FC], 1); /*0x6bb937*/
      MEMORY[0x8872FC] = 0; /*0x6bb939*/
    }
    if ( MEMORY[0x887300] ) /*0x6bb947*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x887300])(MEMORY[0x887300], 1); /*0x6bb94d*/
      MEMORY[0x887300] = 0; /*0x6bb94f*/
    }
    if ( MEMORY[0x88731C] ) /*0x6bb95d*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x88731C])(MEMORY[0x88731C], 1); /*0x6bb963*/
      MEMORY[0x88731C] = 0; /*0x6bb965*/
    }
    if ( MEMORY[0x887308] ) /*0x6bb973*/
    {
      (**(void (__thiscall ***)(int, int))MEMORY[0x887308])(MEMORY[0x887308], 1); /*0x6bb979*/
      MEMORY[0x887308] = 0; /*0x6bb97b*/
    }
    result = (unsigned __int8)sub_4A44F0(a1); /*0x6bb981*/
    MEMORY[0xB0BCF5] = 1; /*0x6bb986*/
  }
  return result; /*0x6bb98d*/
}


// ==== 0x006BB990  ObjectClass::TopLevelExceptionFilter  this=ObjectClass  sig=csp ====
LONG __thiscall TopLevelExceptionFilter(
        DWORD **this,
        struct _EXCEPTION_POINTERS *ExceptionInfo,
        int a3,
        int a4,
        int a5)
{
  HANDLE FileA; // esi
  DWORD v7; // eax
  DWORD v9; // [esp-E40h] [ebp-E40h] BYREF

  v9 = **this; /*0x4c8fe0*/
  Debug::Log(); /*0x4c8fe9*/
  WinMain_Write_53E6B0(); /*0x4c8ff1*/
  if ( !++dword_820E5C ) /*0x4c9001*/
  {
    ExceptionHandler::GenerateReport(this); /*0x4c9005*/
    FileA = CreateFileA(FileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x4c9027*/
    if ( FileA != (HANDLE)-1 ) /*0x4c902c*/
    {
      v7 = lstrlenA(MEMORY[0x8A3A08]); /*0x4c903a*/
      WriteFile(FileA, MEMORY[0x8A3A08], v7, &v9, 0); /*0x4c9047*/
      CloseHandle(FileA); /*0x4c904e*/
    }
  }
  if ( (MEMORY[0x887308] /*0x4c90dc*/
     && (*(unsigned __int8 (__thiscall **)(int, DWORD))(*(_DWORD *)MEMORY[0x887308] + 108))(MEMORY[0x887308], v9)
     || MEMORY[0x88730C]
     && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88730C] + 108))(MEMORY[0x88730C])
     || MEMORY[0x88731C]
     && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x88731C] + 108))(MEMORY[0x88731C])
     || MEMORY[0x8872FC]
     && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x8872FC] + 108))(MEMORY[0x8872FC])
     || MEMORY[0x887300]
     && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887300] + 108))(MEMORY[0x887300])
     || MEMORY[0x887310]
     && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 108))(MEMORY[0x887310]))
    && MEMORY[0x887624]
    || GetCurrentThreadId() != dword_B730E8 )
  {
    Debug::Log(); /*0x4c90e3*/
    return 0; /*0x4c90ee*/
  }
  Debug::Log(); /*0x4c90f4*/
  if ( sub_4C84E0() != 1153 ) /*0x4c9106*/
    return 0; /*0x4c910b*/
  byte_820E60 = 0; /*0x4c9111*/
  if ( dword_820E5C ) /*0x4c911a*/
  {
    if ( dword_820E5C == 2 ) /*0x4c913f*/
      return 0; /*0x4c9141*/
  }
  else
  {
    dword_820E5C = -1; /*0x4c911c*/
  }
  if ( dword_B72F44 ) /*0x4c912e*/
    Dialog::Destroy(dword_B72F44); /*0x4c9130*/
  return 1; /*0x4c90ee*/
}


// ==== 0x006BB9A0  WinMain  this=-  sig=csp ====
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HWND WindowA; // eax
  HWND v6; // esi
  int v7; // edi
  char *v8; // eax
  char *v9; // esi
  int v10; // esi
  _DWORD *v11; // eax
  CCINIClass *v12; // eax
  int Int_Overwrite; // eax
  int v14; // eax
  int v15; // esi
  char *i; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v21; // eax
  IID **v22; // esi
  int v23; // eax
  HMODULE LibraryA; // eax
  HMODULE v25; // edi
  void (*ProcAddress)(void); // eax
  TClassFactory_VCStreamClass__ *v27; // eax
  IUnknown *v28; // eax
  TClassFactory_VWaveClass__ *v29; // eax
  IUnknown *v30; // eax
  TClassFactory_VTerrainTypeClass__ *v31; // eax
  IUnknown *v32; // eax
  TClassFactory_VTerrainClass__ *v33; // eax
  IUnknown *v34; // eax
  TClassFactory_VSuperWeaponTypeClass__ *v35; // eax
  IUnknown *v36; // eax
  TClassFactory_VSuperClass__ *v37; // eax
  IUnknown *v38; // eax
  TClassFactory_VTactical__ *v39; // eax
  IUnknown *v40; // eax
  TClassFactory_VCellClass__ *v41; // eax
  IUnknown *v42; // eax
  TClassFactory_VEMPulseClass__ *v43; // eax
  IUnknown *v44; // eax
  TClassFactory_VLightSourceClass__ *v45; // eax
  IUnknown *v46; // eax
  TClassFactory_VSideClass__ *v47; // eax
  IUnknown *v48; // eax
  TClassFactory_VTiberiumClass__ *v49; // eax
  IUnknown *v50; // eax
  TClassFactory_VTubeClass__ *v51; // eax
  IUnknown *v52; // eax
  TClassFactory_VCampaignClass__ *v53; // eax
  IUnknown *v54; // eax
  TClassFactory_VBuildingLightClass__ *v55; // eax
  IUnknown *v56; // eax
  TClassFactory_VWaypointPathClass__ *v57; // eax
  IUnknown *v58; // eax
  TClassFactory_VTemporalClass__ *v59; // eax
  IUnknown *v60; // eax
  TClassFactory_VAirstrikeClass__ *v61; // eax
  IUnknown *v62; // eax
  TClassFactory_VSpawnManagerClass__ *v63; // eax
  IUnknown *v64; // eax
  TClassFactory_VSlaveManagerClass__ *v65; // eax
  IUnknown *Instance; // eax
  TClassFactory_VCaptureManagerClass__ *v67; // eax
  IUnknown *v68; // eax
  TClassFactory_VDiskLaserClass__ *v69; // eax
  IUnknown *v70; // eax
  TClassFactory_VParasiteClass__ *v71; // eax
  IUnknown *v72; // eax
  TClassFactory_VBombClass__ *v73; // eax
  IUnknown *v74; // eax
  TClassFactory_VRadSiteClass__ *v75; // eax
  IUnknown *v76; // eax
  TClassFactory_VTEventClass__ *v77; // eax
  IUnknown *v78; // eax
  TClassFactory_VVoxelAnimTypeClass__ *v79; // eax
  IUnknown *v80; // eax
  TClassFactory_VVoxelAnimClass__ *v81; // eax
  IUnknown *v82; // eax
  TClassFactory_VTActionClass__ *v83; // eax
  IUnknown *v84; // eax
  TClassFactory_VTriggerClass__ *v85; // eax
  IUnknown *v86; // eax
  TClassFactory_VTriggerTypeClass__ *v87; // eax
  IUnknown *v88; // eax
  TClassFactory_VScriptClass__ *v89; // eax
  IUnknown *v90; // eax
  TClassFactory_VScriptTypeClass__ *v91; // eax
  IUnknown *v92; // eax
  TClassFactory_VTagClass__ *v93; // eax
  IUnknown *v94; // eax
  TClassFactory_VTagTypeClass__ *v95; // eax
  IUnknown *v96; // eax
  TClassFactory_VTeamClass__ *v97; // eax
  IUnknown *v98; // eax
  TClassFactory_VTeamTypeClass__ *v99; // eax
  IUnknown *v100; // eax
  TClassFactory_VTaskForceClass__ *v101; // eax
  IUnknown *v102; // eax
  TClassFactory_VUnitTypeClass__ *v103; // eax
  IUnknown *v104; // eax
  TClassFactory_VBuildingTypeClass__ *v105; // eax
  IUnknown *v106; // eax
  TClassFactory_VAircraftTypeClass__ *v107; // eax
  IUnknown *v108; // eax
  TClassFactory_VInfantryTypeClass__ *v109; // eax
  IUnknown *v110; // eax
  TClassFactory_VBulletTypeClass__ *v111; // eax
  IUnknown *v112; // eax
  TClassFactory_VIsometricTileTypeClass__ *v113; // eax
  IUnknown *v114; // eax
  TClassFactory_VOverlayTypeClass__ *v115; // eax
  IUnknown *v116; // eax
  TClassFactory_VSmudgeTypeClass__ *v117; // eax
  IUnknown *v118; // eax
  TClassFactory_VUnitClass__ *v119; // eax
  IUnknown *v120; // eax
  TClassFactory_VBuildingClass__ *v121; // eax
  IUnknown *v122; // eax
  TClassFactory_VAircraftClass__ *v123; // eax
  IUnknown *v124; // eax
  TClassFactory_VInfantryClass__ *v125; // eax
  IUnknown *v126; // eax
  TClassFactory_VAnimClass__ *v127; // eax
  IUnknown *v128; // eax
  TClassFactory_VAnimTypeClass__ *v129; // eax
  IUnknown *v130; // eax
  TClassFactory_VHouseTypeClass__ *v131; // eax
  IUnknown *v132; // eax
  TClassFactory_VHouseClass__ *v133; // eax
  IUnknown *v134; // eax
  TClassFactory_VDriveLocomotionClass__ *v135; // eax
  IUnknown *v136; // eax
  TClassFactory_VJumpjetLocomotionClass__ *v137; // eax
  IUnknown *v138; // eax
  TClassFactory_VHoverLocomotionClass__ *v139; // eax
  IUnknown *v140; // eax
  TClassFactory_VRocketLocomotionClass__ *v141; // eax
  IUnknown *v142; // eax
  TClassFactory_VTunnelLocomotionClass__ *v143; // eax
  IUnknown *v144; // eax
  TClassFactory_VWalkLocomotionClass__ *v145; // eax
  IUnknown *v146; // eax
  TClassFactory_VDropPodLocomotionClass__ *v147; // eax
  IUnknown *v148; // eax
  TClassFactory_VFlyLocomotionClass__ *v149; // eax
  IUnknown *v150; // eax
  TClassFactory_VTeleportLocomotionClass__ *v151; // eax
  IUnknown *v152; // eax
  TClassFactory_VMechLocomotionClass__ *v153; // eax
  IUnknown *v154; // eax
  TClassFactory_VShipLocomotionClass__ *v155; // eax
  IUnknown *v156; // eax
  TClassFactory_VBulletClass__ *v157; // eax
  IUnknown *v158; // eax
  TClassFactory_VFactoryClass__ *v159; // eax
  IUnknown *v160; // eax
  TClassFactory_VWarheadTypeClass__ *v161; // eax
  IUnknown *v162; // eax
  TClassFactory_VWeaponTypeClass__ *v163; // eax
  IUnknown *v164; // eax
  TClassFactory_VParticleClass__ *v165; // eax
  IUnknown *v166; // eax
  TClassFactory_VParticleTypeClass__ *v167; // eax
  IUnknown *v168; // eax
  TClassFactory_VParticleSystemClass__ *v169; // eax
  IUnknown *v170; // eax
  TClassFactory_VParticleSystemTypeClass__ *v171; // eax
  IUnknown *v172; // eax
  TClassFactory_VAITriggerTypeClass__ *v173; // eax
  IUnknown *v174; // eax
  TClassFactory_VNeuronClass__ *v175; // eax
  IUnknown *v176; // eax
  TClassFactory_VFoggedObjectClass__ *v177; // eax
  IUnknown *v178; // eax
  TClassFactory_VAlphaShapeClass__ *v179; // eax
  IUnknown *v180; // eax
  wchar_t *v181; // eax
  int v182; // esi
  _DWORD *v183; // eax
  _DWORD *v184; // eax
  std::codecvt_base *v185; // ecx
  wchar_t *v186; // eax
  wchar_t *v187; // eax
  bool v188; // al
  wchar_t *v189; // eax
  int edi325; // edi
  wchar_t *v191; // eax
  int eax333; // eax
  wchar_t *v193; // eax
  Frame *v194; // ecx
  _DWORD *v195; // eax
  _DWORD *v196; // eax
  CCINIClass *v197; // esi
  _DWORD *v198; // eax
  _DWORD *v199; // eax
  MouseClass *v190; // eax
  int v201; // ecx
  ObjectClass *v192; // eax
  Frame *v203; // ecx
  wchar_t *v204; // eax
  wchar_t *v205; // [esp-4h] [ebp-E40h]
  wchar_t *v206; // [esp-4h] [ebp-E40h]
  wchar_t *v207; // [esp-4h] [ebp-E40h]
  wchar_t *v208; // [esp-4h] [ebp-E40h]
  wchar_t *v209; // [esp-4h] [ebp-E40h]
  CampaignScore *v210; // [esp+4h] [ebp-E38h]
  _BYTE v211[516]; // [esp+60h] [ebp-DDCh] BYREF
  RAMFileClass v212; // [esp+264h] [ebp-BD8h] BYREF
  void *v213[95]; // [esp+284h] [ebp-BB8h] BYREF
  LPVOID ppv[2]; // [esp+400h] [ebp-A3Ch] BYREF
  DynamicVector dwRegister; // [esp+408h] [ebp-A34h] BYREF
  __int16 v216; // [esp+434h] [ebp-A08h]
  INIClass String[8]; // [esp+444h] [ebp-9F8h] BYREF
  ObjectClass aP2; // [esp+680h] [ebp-7BCh] BYREF
  CCINIClass *aP1; // [esp+730h] [ebp-70Ch]
  char Drive[4]; // [esp+73Ch] [ebp-700h] BYREF
  char Dir[260]; // [esp+740h] [ebp-6FCh] BYREF
  CHAR Filename[132]; // [esp+844h] [ebp-5F8h] BYREF
  wchar_t Buffer[512]; // [esp+8C8h] [ebp-574h] BYREF
  char *FullPath; // [esp+CC8h] [ebp-174h] BYREF
  char v225; // [esp+CCCh] [ebp-170h] BYREF
  CHAR PathName[260]; // [esp+D1Ch] [ebp-120h] BYREF
  int v227; // [esp+E20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+E24h] [ebp-18h]

  g_hInstance = (ObjectClass *)hInstance;
  dword_B730E8 = GetCurrentThreadId();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  Debug::Log();
  if ( !CopyProtection::CheckLauncher() )
  {
LABEL_2:
    Debug::Log();
    return 0;
  }
  *(_DWORD *)&stru_B05488.__pad_579C[4288] = CreateMutexA(0, 0, &stru_830620.__pad_579C[45400]);
  if ( GetLastError() == 183 )
  {
    WindowA = FindWindowA(&stru_830620.__pad_579C[45400], 0);
    v6 = WindowA;
    if ( WindowA )
    {
      SetForegroundWindow(WindowA);
      ShowWindow(v6, 9);
    }
    if ( *(_DWORD *)&stru_B05488.__pad_579C[4288] )
    {
      CloseHandle(*(HANDLE *)&stru_B05488.__pad_579C[4288]);
      *(_DWORD *)&stru_B05488.__pad_579C[4288] = 0;
    }
    goto LABEL_2;
  }
  Debug::Log();
  do
  {
    *(_DWORD *)&stru_B05488.__pad_579C[4292] = OpenMutexA(0x1F0001u, 0, &stru_830620.__pad_579C[45300]);
    if ( *(_DWORD *)&stru_B05488.__pad_579C[4292] )
    {
      Debug::Log();
      if ( WaitForSingleObject(*(HANDLE *)&stru_B05488.__pad_579C[4292], 0x7530u) == -1 )
      {
        Debug::Log();
        CloseHandle(*(HANDLE *)&stru_B05488.__pad_579C[4292]);
        *(_DWORD *)&stru_B05488.__pad_579C[4292] = 0;
      }
    }
    if ( *(_DWORD *)&stru_B05488.__pad_579C[4292] )
      break;
    *(_DWORD *)&stru_B05488.__pad_579C[4292] = CreateMutexA(0, 0, &stru_830620.__pad_579C[45300]);
    if ( GetLastError() == 183 )
    {
      CloseHandle(*(HANDLE *)&stru_B05488.__pad_579C[4292]);
      *(_DWORD *)&stru_B05488.__pad_579C[4292] = 0;
      Sleep(0x9C4u);
    }
    else
    {
      Debug::Log();
    }
  }
  while ( !*(_DWORD *)&stru_B05488.__pad_579C[4292] );
  Debug::Log();
  _controlfp(0x300u, 0x300u);
  CRT_FPU_InitControlWord();
  GetModuleFileNameA(hInstance, Filename, 0x84u);
  v7 = 1;
  v227 = 1;
  FullPath = Filename;
  v8 = strtok(lpCmdLine, (ObjectClass *)&stru_830620.__pad_3BC[56]);
  v9 = &v225;
  do
  {
    if ( !v8 )
      break;
    *(_DWORD *)v9 = String::Trim(v8);
    ++v7;
    v9 += 4;
    v8 = strtok(0, (ObjectClass *)&stru_830620.__pad_3BC[56]);
  }
  while ( v7 < 20 );
  v227 = v7;
  _splitpath(FullPath, Drive, Dir, 0, 0);
  _makepath(PathName, Drive, Dir, 0, 0);
  SetCurrentDirectoryA(PathName);
  v10 = 1;
  if ( !ParseCommandLine(v7, (int)&FullPath) )
    goto LABEL_374;
  v11 = (_DWORD *)__2_YAPAXI_Z(0x24u);
  if ( v11 )
    v12 = (CCINIClass *)RawFileClass::Construct(v11, (RawFileClass *)&stru_826420.__pad_20[4]);
  else
    v12 = 0;
  aP1 = v12;
  CCINIClass::Load(&stru_87C374.__pad_579C[21936], (MultiplayerGameMode *)v12, 0, 0);
  stru_830620.__pad_579C[44208] = INIClass::ReadBool_Overwrite(
                                    (int)&stru_87C374.__pad_579C[21936],
                                    (unsigned __int8 *)&stru_830620.__pad_14B0[5776],
                                    (CCINIClass *)&stru_830620.__pad_579C[45164],
                                    1);
  HouseClass_Player.__pad_5568[23215] = INIClass::ReadBool_Overwrite(
                                          (int)&stru_87C374.__pad_579C[21936],
                                          (unsigned __int8 *)&stru_830620.__pad_14B0[5776],
                                          (CCINIClass *)&stru_830620.__pad_14B0[5644],
                                          0);
  *(_DWORD *)&HouseClass_Player.__pad_5568[22736] = INIClass::ReadInt_Overwrite(
                                                      (int)&stru_87C374.__pad_579C[21936],
                                                      (unsigned __int8 *)&stru_830620.__pad_14B0[5776],
                                                      (CCINIClass *)&stru_830620.__pad_14B0[5784],
                                                      *(INIClass **)&HouseClass_Player.__pad_5568[22736]);
  *(_DWORD *)&HouseClass_Player.__pad_5568[22740] = INIClass::ReadInt_Overwrite(
                                                      (int)&stru_87C374.__pad_579C[21936],
                                                      (unsigned __int8 *)&stru_830620.__pad_14B0[5776],
                                                      (CCINIClass *)&stru_830620.__pad_14B0[5760],
                                                      *(INIClass **)&HouseClass_Player.__pad_5568[22740]);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)&stru_87C374.__pad_579C[21936],
                    (unsigned __int8 *)&stru_830620.__pad_14B0[5520],
                    (CCINIClass *)&stru_830620.__pad_14B0[5452],
                    0);
  if ( Int_Overwrite > 0 )
  {
    v14 = Int_Overwrite + 0x4000;
    if ( v14 >= 0x4000 && v14 < 0x8000 )
      Network::GetField(&HouseClass_Player.__pad_5568[22284], v14);
  }
  memset(String, 0, sizeof(String));
  if ( INIClass::GetString(
         (unsigned __int8 ***)&stru_87C374.__pad_579C[21936],
         (INIClass *)&stru_830620.__pad_14B0[5520],
         (unsigned __int8 *)&stru_830620.__pad_14B0[5436],
         0,
         String,
         512)
    && String
    && strlen(String[0].__pad_0) )
  {
    v15 = 0;
    for ( i = strtok(String[0].__pad_0, &stru_826598); i; i = strtok(0, &stru_826598) )
    {
      sscanf(i, (const char *const)&stru_825BAC.owningHouseIndex, dwRegister.__pad_20);
      dwRegister.__pad_20[v15++ + 4] = dwRegister.__pad_20[0];
    }
    if ( v15 >= 4 )
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[17224] = 1;
      dwRegister.field_28 = -1;
      v216 = -1;
      v17 = NetworkAddress::Assign(&dwRegister.field_10, &dwRegister.__pad_20[4], (IUnknown *)&dwRegister.field_28, 0);
      *(_DWORD *)&HouseClass_Player.__pad_5568[17228] = *v17;
      *(_DWORD *)&HouseClass_Player.__pad_5568[17232] = v17[1];
      *(_DWORD *)&HouseClass_Player.__pad_5568[17236] = v17[2];
    }
  }
  v18 = (_DWORD *)__2_YAPAXI_Z(0x320u);
  v19 = v18;
  if ( v18 )
  {
    NetworkSession::ResetState(v18);
    v19[199] = 1;
    *(_DWORD *)&stru_87C374.__pad_14B0[8012] = v19;
  }
  else
  {
    *(_DWORD *)&stru_87C374.__pad_14B0[8012] = 0;
  }
  if ( DiskSpace::CheckAvailable() < 0x2000 )
  {
    StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[45116], 0, &stru_830620.__pad_579C[45136], 1931);
    swprintf(Buffer, (const size_t)StringCSF, 0, v210);
    v21 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, &stru_830620.__pad_579C[45136], 1932);
    if ( WideMessageBox(0, Buffer, v21, 0x24u) == 7 )
    {
      OleUninitialize();
      return 1;
    }
  }
  OleInitialize(0);
  v22 = &off_7F3710;
  while ( 1 )
  {
    ppv[0] = 0;
    v23 = COMClassFactory::Register(ppv, *v22, 0, 7u);
    LOBYTE(dwRegister.field_8) = v23 < 0;
    if ( v23 < 0 )
    {
      LOBYTE(dwRegister.field_8) = 0;
      LibraryA = LoadLibraryA(v22[1]->Data2);
      v25 = LibraryA;
      if ( LibraryA )
      {
        ProcAddress = (void (*)(void))GetProcAddress(LibraryA, &stru_830620.__pad_579C[45096]);
        if ( !ProcAddress || (ProcAddress(), COMClassFactory::Register(ppv, *v22, 0, 7u) < 0) )
          LOBYTE(dwRegister.field_8) = 1;
        FreeLibrary(v25);
      }
      else
      {
        LOBYTE(dwRegister.field_8) = 1;
      }
    }
    if ( LOBYTE(dwRegister.field_8) )
      break;
    if ( !ppv[0] )
      WinAPI::Wrapper(-2147467261);
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv[0] + 8))(ppv[0]);
    ppv[0] = 0;
    COM_SafeRelease((int *)ppv);
    v22 += 2;
    if ( (int)v22 >= (int)&stru_7F3718 )
      goto LABEL_56;
  }
  COM_SafeRelease((int *)ppv);
LABEL_56:
  RegisterClassesCOM();
  CoRegisterClassObject(&rguid, (LPUNKNOWN)&HouseClass_Player.__pad_5568[22036], 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v27 = (TClassFactory_VCStreamClass__ *)__2_YAPAXI_Z(8u);
  if ( v27 )
    v28 = (IUnknown *)ClassFactory_CStream::Construct(v27);
  else
    v28 = 0;
  CoRegisterClassObject(&stru_7E9540, v28, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v29 = (TClassFactory_VWaveClass__ *)__2_YAPAXI_Z(8u);
  if ( v29 )
    v30 = (IUnknown *)ClassFactory_Wave::Construct(v29);
  else
    v30 = 0;
  CoRegisterClassObject(&stru_7E9720, v30, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v31 = (TClassFactory_VTerrainTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v31 )
    v32 = (IUnknown *)COMClassFactory_3::Construct(v31);
  else
    v32 = 0;
  CoRegisterClassObject(&stru_7E95E0, v32, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v33 = (TClassFactory_VTerrainClass__ *)__2_YAPAXI_Z(8u);
  if ( v33 )
    v34 = (IUnknown *)COMClassFactory_4::Construct(v33);
  else
    v34 = 0;
  CoRegisterClassObject(&stru_7E9740, v34, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v35 = (TClassFactory_VSuperWeaponTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v35 )
    v36 = (IUnknown *)COMClassFactory_5::Construct(v35);
  else
    v36 = 0;
  CoRegisterClassObject(&stru_7E9570, v36, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v37 = (TClassFactory_VSuperClass__ *)__2_YAPAXI_Z(8u);
  if ( v37 )
    v38 = (IUnknown *)COMClassFactory_6::Construct(v37);
  else
    v38 = 0;
  CoRegisterClassObject(&stru_7E9580, v38, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v39 = (TClassFactory_VTactical__ *)__2_YAPAXI_Z(8u);
  if ( v39 )
    v40 = (IUnknown *)COMClassFactory_7::Construct(v39);
  else
    v40 = 0;
  CoRegisterClassObject(&stru_7E9950, v40, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v41 = (TClassFactory_VCellClass__ *)__2_YAPAXI_Z(8u);
  if ( v41 )
    v42 = (IUnknown *)COMClassFactory_8::Construct(v41);
  else
    v42 = 0;
  CoRegisterClassObject(&stru_7E9930, v42, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v43 = (TClassFactory_VEMPulseClass__ *)__2_YAPAXI_Z(8u);
  if ( v43 )
    v44 = (IUnknown *)COMClassFactory_9::Construct(v43);
  else
    v44 = 0;
  CoRegisterClassObject(&stru_7E9940, v44, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v45 = (TClassFactory_VLightSourceClass__ *)__2_YAPAXI_Z(8u);
  if ( v45 )
    v46 = (IUnknown *)COMClassFactory_10::Construct(v45);
  else
    v46 = 0;
  CoRegisterClassObject(&stru_7E98F0, v46, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v47 = (TClassFactory_VSideClass__ *)__2_YAPAXI_Z(8u);
  if ( v47 )
    v48 = (IUnknown *)WinMain_Helper_6BFD40(v47);
  else
    v48 = 0;
  CoRegisterClassObject(&stru_7E9910, v48, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v49 = (TClassFactory_VTiberiumClass__ *)__2_YAPAXI_Z(8u);
  if ( v49 )
    v50 = (IUnknown *)WinMain_Helper_6BFEC0(v49);
  else
    v50 = 0;
  CoRegisterClassObject(&stru_7E9920, v50, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v51 = (TClassFactory_VTubeClass__ *)__2_YAPAXI_Z(8u);
  if ( v51 )
    v52 = (IUnknown *)WinMain_Helper_6C0040(v51);
  else
    v52 = 0;
  CoRegisterClassObject(&stru_7E9750, v52, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v53 = (TClassFactory_VCampaignClass__ *)__2_YAPAXI_Z(8u);
  if ( v53 )
    v54 = (IUnknown *)WinMain_Helper_6C01C0(v53);
  else
    v54 = 0;
  CoRegisterClassObject(&stru_7E9900, v54, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v55 = (TClassFactory_VBuildingLightClass__ *)__2_YAPAXI_Z(8u);
  if ( v55 )
    v56 = (IUnknown *)WinMain_Helper_6C0340(v55);
  else
    v56 = 0;
  CoRegisterClassObject(&stru_7E9730, v56, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v57 = (TClassFactory_VWaypointPathClass__ *)__2_YAPAXI_Z(8u);
  if ( v57 )
    v58 = (IUnknown *)WinMain_Helper_6C04C0(v57);
  else
    v58 = 0;
  CoRegisterClassObject(&stru_7E9850, v58, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v59 = (TClassFactory_VTemporalClass__ *)__2_YAPAXI_Z(8u);
  if ( v59 )
    v60 = (IUnknown *)WinMain_Helper_6C0640(v59);
  else
    v60 = 0;
  CoRegisterClassObject(&stru_7E98D0, v60, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v61 = (TClassFactory_VAirstrikeClass__ *)__2_YAPAXI_Z(8u);
  if ( v61 )
    v62 = (IUnknown *)WinMain_Helper_6C07C0(v61);
  else
    v62 = 0;
  CoRegisterClassObject(&stru_7E98E0, v62, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v63 = (TClassFactory_VSpawnManagerClass__ *)__2_YAPAXI_Z(8u);
  if ( v63 )
    v64 = (IUnknown *)WinMain_Helper_6C0940(v63);
  else
    v64 = 0;
  CoRegisterClassObject(&stru_7E9860, v64, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v65 = (TClassFactory_VSlaveManagerClass__ *)__2_YAPAXI_Z(8u);
  if ( v65 )
    Instance = (IUnknown *)COMClassFactory::CreateInstance(v65);
  else
    Instance = 0;
  CoRegisterClassObject(&stru_7E9870, Instance, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v67 = (TClassFactory_VCaptureManagerClass__ *)__2_YAPAXI_Z(8u);
  if ( v67 )
    v68 = (IUnknown *)WinMain_Helper_6C0C40(v67);
  else
    v68 = 0;
  CoRegisterClassObject(&stru_7E9880, v68, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v69 = (TClassFactory_VDiskLaserClass__ *)__2_YAPAXI_Z(8u);
  if ( v69 )
    v70 = (IUnknown *)WinMain_Helper_6C0DC0(v69);
  else
    v70 = 0;
  CoRegisterClassObject(&stru_7E9890, v70, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v71 = (TClassFactory_VParasiteClass__ *)__2_YAPAXI_Z(8u);
  if ( v71 )
    v72 = (IUnknown *)WinMain_Helper_6C0F40(v71);
  else
    v72 = 0;
  CoRegisterClassObject(&stru_7E98A0, v72, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v73 = (TClassFactory_VBombClass__ *)__2_YAPAXI_Z(8u);
  if ( v73 )
    v74 = (IUnknown *)WinMain_Helper_6C10C0(v73);
  else
    v74 = 0;
  CoRegisterClassObject(&stru_7E98B0, v74, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v75 = (TClassFactory_VRadSiteClass__ *)__2_YAPAXI_Z(8u);
  if ( v75 )
    v76 = (IUnknown *)WinMain_Helper_6C1240(v75);
  else
    v76 = 0;
  CoRegisterClassObject(&stru_7E98C0, v76, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v77 = (TClassFactory_VTEventClass__ *)__2_YAPAXI_Z(8u);
  if ( v77 )
    v78 = (IUnknown *)WinMain_Helper_6C13C0(v77);
  else
    v78 = 0;
  CoRegisterClassObject(&stru_7E9810, v78, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v79 = (TClassFactory_VVoxelAnimTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v79 )
    v80 = (IUnknown *)WinMain_Helper_6C1540(v79);
  else
    v80 = 0;
  CoRegisterClassObject(&stru_7E9790, v80, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v81 = (TClassFactory_VVoxelAnimClass__ *)__2_YAPAXI_Z(8u);
  if ( v81 )
    v82 = (IUnknown *)WinMain_Helper_6C16C0(v81);
  else
    v82 = 0;
  CoRegisterClassObject(&stru_7E9650, v82, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v83 = (TClassFactory_VTActionClass__ *)__2_YAPAXI_Z(8u);
  if ( v83 )
    v84 = (IUnknown *)WinMain_Helper_6C1840(v83);
  else
    v84 = 0;
  CoRegisterClassObject(&stru_7E9800, v84, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v85 = (TClassFactory_VTriggerClass__ *)__2_YAPAXI_Z(8u);
  if ( v85 )
    v86 = (IUnknown *)WinMain_Helper_6C19C0(v85);
  else
    v86 = 0;
  CoRegisterClassObject(&stru_7E97E0, v86, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v87 = (TClassFactory_VTriggerTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v87 )
    v88 = (IUnknown *)WinMain_Helper_6C1B40(v87);
  else
    v88 = 0;
  CoRegisterClassObject(&stru_7E97F0, v88, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v89 = (TClassFactory_VScriptClass__ *)__2_YAPAXI_Z(8u);
  if ( v89 )
    v90 = (IUnknown *)WinMain_Helper_6C1CC0(v89);
  else
    v90 = 0;
  CoRegisterClassObject(&stru_7E97A0, v90, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v91 = (TClassFactory_VScriptTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v91 )
    v92 = (IUnknown *)WinMain_Helper_6C1E40(v91);
  else
    v92 = 0;
  CoRegisterClassObject(&stru_7E97B0, v92, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v93 = (TClassFactory_VTagClass__ *)__2_YAPAXI_Z(8u);
  if ( v93 )
    v94 = (IUnknown *)WinMain_Helper_6C1FC0(v93);
  else
    v94 = 0;
  CoRegisterClassObject(&stru_7E97C0, v94, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v95 = (TClassFactory_VTagTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v95 )
    v96 = (IUnknown *)WinMain_Helper_6C2140(v95);
  else
    v96 = 0;
  CoRegisterClassObject(&stru_7E97D0, v96, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v97 = (TClassFactory_VTeamClass__ *)__2_YAPAXI_Z(8u);
  if ( v97 )
    v98 = (IUnknown *)WinMain_Helper_6C22C0(v97);
  else
    v98 = 0;
  CoRegisterClassObject(&stru_7E9760, v98, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v99 = (TClassFactory_VTeamTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v99 )
    v100 = (IUnknown *)WinMain_Helper_6C2440(v99);
  else
    v100 = 0;
  CoRegisterClassObject(&stru_7E9780, v100, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v101 = (TClassFactory_VTaskForceClass__ *)__2_YAPAXI_Z(8u);
  if ( v101 )
    v102 = (IUnknown *)WinMain_Helper_6C25C0(v101);
  else
    v102 = 0;
  CoRegisterClassObject(&stru_7E9770, v102, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v103 = (TClassFactory_VUnitTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v103 )
    v104 = (IUnknown *)WinMain_Helper_6C2740(v103);
  else
    v104 = 0;
  CoRegisterClassObject(&stru_7E9590, v104, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v105 = (TClassFactory_VBuildingTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v105 )
    v106 = (IUnknown *)WinMain_Helper_6C28C0(v105);
  else
    v106 = 0;
  CoRegisterClassObject(&stru_7E95C0, v106, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v107 = (TClassFactory_VAircraftTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v107 )
    v108 = (IUnknown *)WinMain_Helper_6C2A40(v107);
  else
    v108 = 0;
  CoRegisterClassObject(&stru_7E95B0, v108, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v109 = (TClassFactory_VInfantryTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v109 )
    v110 = (IUnknown *)WinMain_Helper_6C2BC0(v109);
  else
    v110 = 0;
  CoRegisterClassObject(&stru_7E95A0, v110, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v111 = (TClassFactory_VBulletTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v111 )
    v112 = (IUnknown *)WinMain_Helper_6C2D40(v111);
  else
    v112 = 0;
  CoRegisterClassObject(&stru_7E95D0, v112, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v113 = (TClassFactory_VIsometricTileTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v113 )
    v114 = (IUnknown *)WinMain_Helper_6C2EC0(v113);
  else
    v114 = 0;
  CoRegisterClassObject(&stru_7E95F0, v114, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v115 = (TClassFactory_VOverlayTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v115 )
    v116 = (IUnknown *)WinMain_Helper_6C3040(v115);
  else
    v116 = 0;
  CoRegisterClassObject(&stru_7E9600, v116, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v117 = (TClassFactory_VSmudgeTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v117 )
    v118 = (IUnknown *)WinMain_Helper_6C31C0(v117);
  else
    v118 = 0;
  CoRegisterClassObject(&stru_7E9610, v118, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v119 = (TClassFactory_VUnitClass__ *)__2_YAPAXI_Z(8u);
  if ( v119 )
    v120 = (IUnknown *)WinMain_Helper_6C3340(v119);
  else
    v120 = 0;
  CoRegisterClassObject(&stru_7E96F0, v120, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v121 = (TClassFactory_VBuildingClass__ *)__2_YAPAXI_Z(8u);
  if ( v121 )
    v122 = (IUnknown *)WinMain_Helper_6C34C0(v121);
  else
    v122 = 0;
  CoRegisterClassObject(&stru_7E96A0, v122, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v123 = (TClassFactory_VAircraftClass__ *)__2_YAPAXI_Z(8u);
  if ( v123 )
    v124 = (IUnknown *)WinMain_Helper_6C3640(v123);
  else
    v124 = 0;
  CoRegisterClassObject(&stru_7E9660, v124, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v125 = (TClassFactory_VInfantryClass__ *)__2_YAPAXI_Z(8u);
  if ( v125 )
    v126 = (IUnknown *)WinMain_Helper_6C37C0(v125);
  else
    v126 = 0;
  CoRegisterClassObject(&stru_7E9680, v126, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v127 = (TClassFactory_VAnimClass__ *)__2_YAPAXI_Z(8u);
  if ( v127 )
    v128 = (IUnknown *)WinMain_Helper_6C3940(v127);
  else
    v128 = 0;
  CoRegisterClassObject(&stru_7E9670, v128, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v129 = (TClassFactory_VAnimTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v129 )
    v130 = (IUnknown *)WinMain_Helper_6C3AC0(v129);
  else
    v130 = 0;
  CoRegisterClassObject(&stru_7E9620, v130, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v131 = (TClassFactory_VHouseTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v131 )
    v132 = (IUnknown *)WinMain_Helper_6C3C40(v131);
  else
    v132 = 0;
  CoRegisterClassObject(&stru_7E9630, v132, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v133 = (TClassFactory_VHouseClass__ *)__2_YAPAXI_Z(8u);
  if ( v133 )
    v134 = (IUnknown *)WinMain_Helper_6C3DC0(v133);
  else
    v134 = 0;
  CoRegisterClassObject(&stru_7E9560, v134, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v135 = (TClassFactory_VDriveLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v135 )
    v136 = (IUnknown *)WinMain_Helper_6C3F40(v135);
  else
    v136 = 0;
  CoRegisterClassObject(&stru_7E9A30, v136, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v137 = (TClassFactory_VJumpjetLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v137 )
    v138 = (IUnknown *)WinMain_Helper_6C40C0(v137);
  else
    v138 = 0;
  CoRegisterClassObject(&g_CLSID_JumpjetLocomotion, v138, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v139 = (TClassFactory_VHoverLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v139 )
    v140 = (IUnknown *)WinMain_Helper_6C4240(v139);
  else
    v140 = 0;
  CoRegisterClassObject(&stru_7E9A40, v140, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v141 = (TClassFactory_VRocketLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v141 )
    v142 = (IUnknown *)WinMain_Helper_6C43C0(v141);
  else
    v142 = 0;
  CoRegisterClassObject(&g_CLSID_ShipLocomotion, v142, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v143 = (TClassFactory_VTunnelLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v143 )
    v144 = (IUnknown *)WinMain_Helper_6C4540(v143);
  else
    v144 = 0;
  CoRegisterClassObject(&stru_7E9A50, v144, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v145 = (TClassFactory_VWalkLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v145 )
    v146 = (IUnknown *)WinMain_Helper_6C46C0(v145);
  else
    v146 = 0;
  CoRegisterClassObject(&g_CLSID_WalkLocomotion, v146, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v147 = (TClassFactory_VDropPodLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v147 )
    v148 = (IUnknown *)WinMain_Helper_6C4840(v147);
  else
    v148 = 0;
  CoRegisterClassObject(&g_CLSID_DriveLocomotion, v148, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v149 = (TClassFactory_VFlyLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v149 )
    v150 = (IUnknown *)WinMain_Helper_6C49C0(v149);
  else
    v150 = 0;
  CoRegisterClassObject(&g_CLSID_FlyLocomotion, v150, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v151 = (TClassFactory_VTeleportLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v151 )
    v152 = (IUnknown *)WinMain_Helper_6C4B40(v151);
  else
    v152 = 0;
  CoRegisterClassObject(&g_CLSID_HoverLocomotion, v152, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v153 = (TClassFactory_VMechLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v153 )
    v154 = (IUnknown *)WinMain_Helper_6C4CC0(v153);
  else
    v154 = 0;
  CoRegisterClassObject(&g_CLSID_TunnelLocomotion, v154, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v155 = (TClassFactory_VShipLocomotionClass__ *)__2_YAPAXI_Z(8u);
  if ( v155 )
    v156 = (IUnknown *)WinMain_Helper_6C4E40(v155);
  else
    v156 = 0;
  CoRegisterClassObject(&g_CLSID_DriveLocomotion2, v156, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v157 = (TClassFactory_VBulletClass__ *)__2_YAPAXI_Z(8u);
  if ( v157 )
    v158 = (IUnknown *)WinMain_Helper_6C4FC0(v157);
  else
    v158 = 0;
  CoRegisterClassObject(&rclsid, v158, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v159 = (TClassFactory_VFactoryClass__ *)__2_YAPAXI_Z(8u);
  if ( v159 )
    v160 = (IUnknown *)WinMain_Helper_6C5140(v159);
  else
    v160 = 0;
  CoRegisterClassObject(&stru_7E9820, v160, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v161 = (TClassFactory_VWarheadTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v161 )
    v162 = (IUnknown *)WinMain_Helper_6C52C0(v161);
  else
    v162 = 0;
  CoRegisterClassObject(&stru_7E9840, v162, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v163 = (TClassFactory_VWeaponTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v163 )
    v164 = (IUnknown *)WinMain_Helper_6C5440(v163);
  else
    v164 = 0;
  CoRegisterClassObject(&stru_7E9830, v164, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v165 = (TClassFactory_VParticleClass__ *)__2_YAPAXI_Z(8u);
  if ( v165 )
    v166 = (IUnknown *)WinMain_Helper_6C55C0(v165);
  else
    v166 = 0;
  CoRegisterClassObject(&stru_7E9700, v166, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v167 = (TClassFactory_VParticleTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v167 )
    v168 = (IUnknown *)WinMain_Helper_6C5740(v167);
  else
    v168 = 0;
  CoRegisterClassObject(&stru_7E9710, v168, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v169 = (TClassFactory_VParticleSystemClass__ *)__2_YAPAXI_Z(8u);
  if ( v169 )
    v170 = (IUnknown *)WinMain_Helper_6C58C0(v169);
  else
    v170 = 0;
  CoRegisterClassObject(&stru_7E96C0, v170, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v171 = (TClassFactory_VParticleSystemTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v171 )
    v172 = (IUnknown *)WinMain_Helper_6C5A40(v171);
  else
    v172 = 0;
  CoRegisterClassObject(&stru_7E96D0, v172, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v173 = (TClassFactory_VAITriggerTypeClass__ *)__2_YAPAXI_Z(8u);
  if ( v173 )
    v174 = (IUnknown *)WinMain_Helper_6C5BC0(v173);
  else
    v174 = 0;
  CoRegisterClassObject(&stru_7E9960, v174, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v175 = (TClassFactory_VNeuronClass__ *)__2_YAPAXI_Z(8u);
  if ( v175 )
    v176 = (IUnknown *)WinMain_Helper_6C5D40(v175);
  else
    v176 = 0;
  CoRegisterClassObject(&stru_7E9980, v176, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v177 = (TClassFactory_VFoggedObjectClass__ *)__2_YAPAXI_Z(8u);
  if ( v177 )
    v178 = (IUnknown *)WinMain_Helper_6C5EC0(v177);
  else
    v178 = 0;
  CoRegisterClassObject(&stru_7E9990, v178, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  v179 = (TClassFactory_VAlphaShapeClass__ *)__2_YAPAXI_Z(8u);
  if ( v179 )
    v180 = (IUnknown *)WinMain_Helper_6C6040(v179);
  else
    v180 = 0;
  CoRegisterClassObject(&stru_7E99A0, v180, 1u, 1u, (LPDWORD)&dwRegister);
  DynamicVector::Add(&stru_B05488.__pad_579C[4196], &dwRegister);
  RegisterActiveObject(&unk_89A29C, &rguid, 1u, (DWORD *)&stru_B05488.__pad_579C[4296]);
  if ( LOBYTE(dwRegister.field_8) )
  {
    v205 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, &stru_830620.__pad_579C[45136], 1618);
    v181 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[45072], 0, &stru_830620.__pad_579C[45136], 1618);
    WideMessageBox(0, v181, v205, 0x30u);
    if ( LOBYTE(dwRegister.field_8) )
      exit(1);
  }
  Debug::Log();
  Debug::Log();
  WinMain_Helper_65C250(
    &v212,
    (int)"[PublicKey]\n1=AihRvNoIbTn85FZRYNZRcT+i6KpU+maCsEqr3Q5q+LDB5tH7Tz2qQ38V\n\n",
    (MixFileClass *)strlen("[PublicKey]\n1=AihRvNoIbTn85FZRYNZRcT+i6KpU+maCsEqr3Q5q+LDB5tH7Tz2qQ38V\n\n"));
  INIClass::INIClass(v213);
  Debug::Log();
  FileStraw::Open(v213, (int)&v212, 0);
  Debug::Log();
  qmemcpy(&stru_87C374.__pad_579C[20080], WinMain_Init(v213, v211, 1), 0x204u);
  HashTable::DestroyHashTableINIClass(v213);
  WinMain_Helper_65C2A0(&v212);
  v182 = dword_81C1D0;
  SetSoundWarning(-2);
  v183 = (_DWORD *)__2_YAPAXI_Z(0x28u);
  if ( v183 )
    *(_DWORD *)&stru_87C374.__pad_579C[13044] = MixFileClass::FromFile(
                                                  v183,
                                                  (MixFileClass *)&stru_830620.__pad_579C[44960],
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(_DWORD *)&stru_87C374.__pad_579C[13044] = 0;
  v184 = (_DWORD *)__2_YAPAXI_Z(0x28u);
  if ( v184 )
    *(_DWORD *)&stru_87C374.__pad_579C[13040] = MixFileClass::FromFile(
                                                  v184,
                                                  (MixFileClass *)&stru_830620.__pad_579C[44944],
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(_DWORD *)&stru_87C374.__pad_579C[13040] = 0;
  SetSoundWarning(v182);
  atexit(WinMainSetup);
  WinMain_Helper_7B84F0();
  if ( !CSFClass::LoadFile(&stru_830620.__pad_579C[44932]) )
  {
    MessageBoxA(0, &stru_830620.__pad_579C[44700], &stru_830620.__pad_579C[44920], 0x10u);
    return 0;
  }
  LOBYTE(v185) = 1;
  if ( !_do_always_noconv_codecvt_base_std__MBE_NXZ_3(v185) )
    return 0;
  if ( !GetSystemMetrics(19) || !GetSystemMetrics(43) )
  {
    v209 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, &stru_830620.__pad_579C[45136], 1999);
    v204 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[44556], 0, &stru_830620.__pad_579C[45136], 1999);
    WideMessageBox(0, v204, v209, 0x10u);
    exit(1);
  }
  if ( (unsigned int)sub_4AECD0(&stru_830620.__pad_579C[44684]) < 0x40046 )
  {
    v186 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[44668], 0, &stru_830620.__pad_579C[45136], 2009);
    swprintf(Buffer, (const size_t)v186, (const wchar_t *const)&stru_830620.__pad_579C[44684], (CampaignScore *)4);
    v187 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, &stru_830620.__pad_579C[45136], 2010);
    WideMessageBox(0, Buffer, v187, 0x10u);
    exit(1);
  }
  RegisterActiveObject((IUnknown *)&stru_87C374.__pad_14B0[8132], &rguid, 1u, (DWORD *)&stru_830620.__pad_579C[44216]);
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22736] == -1 || *(_DWORD *)&HouseClass_Player.__pad_5568[22740] == -1 )
  {
    v188 = stru_87C374.__pad_579C[23317] && *(int *)&stru_87C374.__pad_579C[23176] < 5;
    if ( v188 || sub_4A4130() > 0x200000 )
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[22736] = 800;
      *(_DWORD *)&HouseClass_Player.__pad_5568[22740] = 600;
    }
    else
    {
      *(_DWORD *)&HouseClass_Player.__pad_5568[22736] = 640;
      *(_DWORD *)&HouseClass_Player.__pad_5568[22740] = 480;
    }
  }
  if ( HouseClass_Player.__pad_5568[23215] )
  {
    InitWindowCreation((ObjectClass *)hInstance, nShowCmd, 640, 480);
    sub_4A3FD0();
    if ( stru_89E138.__pad_14B0[912] )
    {
      *(_DWORD *)&stru_87C374.__pad_579C[21664] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21668] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21672] = 640;
      *(_DWORD *)&stru_87C374.__pad_579C[21676] = 480;
      *(_DWORD *)&stru_89E138.__pad_14B0[2748] = 640;
      *(_DWORD *)&stru_89E138.__pad_14B0[2752] = 480;
      *(_DWORD *)&stru_89E138.__pad_14B0[2756] = g_Is16BitMode != 0 ? 16 : 8;
    }
    else
    {
      aP2.location[0] = (unsigned __int8)InitializeDDraw(
                                           (int)g_hWnd,
                                           (ObjectClass *)0x280,
                                           0x1E0u,
                                           g_Is16BitMode != 0 ? 16 : 8);
      *(_DWORD *)&stru_87C374.__pad_579C[21664] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21668] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21672] = 640;
      *(_DWORD *)&stru_87C374.__pad_579C[21676] = 480;
      if ( !aP2.location[0] )
      {
        sub_4A40C0();
        v206 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, &stru_830620.__pad_579C[45136], 2160);
        v189 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[44640], 0, &stru_830620.__pad_579C[45136], 2159);
        WideMessageBox((CampaignScore *)g_hWnd, v189, v206, 0x30u);
        exit(1);
      }
    }
  }
  else
  {
    InitWindowCreation(
      (ObjectClass *)hInstance,
      nShowCmd,
      *(int *)&HouseClass_Player.__pad_5568[22744],
      *(int *)&HouseClass_Player.__pad_5568[22748]);
    sub_4A3FD0();
    if ( stru_89E138.__pad_14B0[912] )
    {
      *(_DWORD *)&stru_87C374.__pad_579C[21664] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21668] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21672] = *(_DWORD *)&HouseClass_Player.__pad_5568[22744];
      *(_DWORD *)&stru_87C374.__pad_579C[21676] = *(_DWORD *)&HouseClass_Player.__pad_5568[22748];
      *(_DWORD *)&stru_89E138.__pad_14B0[2748] = *(_DWORD *)&HouseClass_Player.__pad_5568[22744];
      *(_DWORD *)&stru_89E138.__pad_14B0[2752] = *(_DWORD *)&HouseClass_Player.__pad_5568[22748];
      *(_DWORD *)&stru_89E138.__pad_14B0[2756] = g_Is16BitMode != 0 ? 16 : 8;
    }
    else
    {
      edi325 = (unsigned __int8)InitializeDDraw(
                                  (int)g_hWnd,
                                  *(ObjectClass **)&HouseClass_Player.__pad_5568[22744],
                                  *(DWORD *)&HouseClass_Player.__pad_5568[22748],
                                  g_Is16BitMode != 0 ? 16 : 8);
      *(_DWORD *)&stru_87C374.__pad_579C[21664] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21668] = 0;
      *(_DWORD *)&stru_87C374.__pad_579C[21672] = *(_DWORD *)&HouseClass_Player.__pad_5568[22744];
      *(_DWORD *)&stru_87C374.__pad_579C[21676] = *(_DWORD *)&HouseClass_Player.__pad_5568[22748];
      if ( !edi325 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22736] != 640
          || *(_DWORD *)&HouseClass_Player.__pad_5568[22740] != 480 )
        {
          *(_DWORD *)&HouseClass_Player.__pad_5568[22736] = 640;
          *(_DWORD *)&HouseClass_Player.__pad_5568[22740] = 480;
          edi325 = (unsigned __int8)InitializeDDraw(
                                      (int)g_hWnd,
                                      (ObjectClass *)0x280,
                                      0x1E0u,
                                      g_Is16BitMode != 0 ? 16 : 8);
          *(_DWORD *)&stru_87C374.__pad_579C[21664] = 0;
          *(_DWORD *)&stru_87C374.__pad_579C[21668] = 0;
          *(_DWORD *)&stru_87C374.__pad_579C[21672] = *(_DWORD *)&HouseClass_Player.__pad_5568[22736];
          *(_DWORD *)&stru_87C374.__pad_579C[21676] = *(_DWORD *)&HouseClass_Player.__pad_5568[22740];
        }
        if ( !edi325 )
        {
          sub_4A40C0();
          v207 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, &stru_830620.__pad_579C[45136], 2216);
          v191 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[44640], 0, &stru_830620.__pad_579C[45136], 2215);
          WideMessageBox((CampaignScore *)g_hWnd, v191, v207, 0x30u);
          exit(1);
        }
      }
    }
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[25808] && InitializeAudioStreaming(1000, 102400) )
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[25808] == 1 )
    {
      WinMain_Helper_53E4F0(&stru_830620.__pad_579C[44656]);
    }
    else if ( *(_DWORD *)&HouseClass_Player.__pad_5568[25808] == 2 )
    {
      WinMain_Write(&stru_830620.__pad_579C[44656]);
    }
  }
  *(_DWORD *)&stru_87C374.__pad_579C[22520] = DSurface::CreatePrimary(0);
  eax333 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22520] + 112))(*(_DWORD *)&stru_87C374.__pad_579C[22520]);
  g_Is16BitMode = eax333 == 2;
  if ( eax333 != 2 )
  {
    v208 = GetStringCSF(g_Str_TXT_SHORT_TITLE, 0, &stru_830620.__pad_579C[45136], 2245);
    v193 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[44624], 0, &stru_830620.__pad_579C[45136], 2245);
    WideMessageBox((CampaignScore *)g_hWnd, v193, v208, 0x30u);
    GameClass::Shutdown();
  }
  do
    MessageLoop();
  while ( !HouseClass_Player.__pad_5568[23244] );
  if ( !CopyProtection::NotifyLauncher() )
  {
    Debug::Log();
    exit(1);
  }
  do
    MessageLoop();
  while ( !HouseClass_Player.__pad_5568[23244] );
  stru_89E138.__pad_14B0[2744] = 0;
  if ( !stru_89E138.__pad_14B0[912] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22520] + 24))(
      *(_DWORD *)&stru_87C374.__pad_579C[22520],
      0);
  WinMain_Create(g_hInstance, g_hWnd, stru_89E138.__pad_14B0[912]);
  WinMain_Helper_637070();
  nullsub_18();
  if ( stru_89E138.__pad_14B0[6151] )
  {
    if ( !sub_4C1600() )
      goto LABEL_345;
    DDraw::CleanupSurfaces();
    stru_89E138.__pad_14B0[6151] = 0;
  }
  stru_89E138.__pad_14B0[6152] = 0;
LABEL_345:
  aP2.NeedsSaveOrLink = 0;
  aP2.objectTypeFlags = 0;
  aP2.owningHouseIndex = 168;
  aP2.fallRate = *(_DWORD *)&stru_87C374.__pad_579C[21676];
  aP2.uniqueId = 0;
  aP2.abstractFlags = 0;
  aP2.nextArrayIndex = *(_DWORD *)&stru_87C374.__pad_579C[21672] - 168;
  aP2.referenceCount = *(_DWORD *)&stru_87C374.__pad_579C[21676];
  *(_DWORD *)aP2.__pad_0 = 0;
  *(_DWORD *)&aP2.__pad_0[4] = 0;
  *(_DWORD *)&aP2.__pad_0[8] = *(_DWORD *)&stru_87C374.__pad_579C[21672] - 168;
  *(_DWORD *)&aP2.__pad_0[12] = *(_DWORD *)&stru_87C374.__pad_579C[21676];
  AllocateSurfaceScreenSurfaces(
    (int)&stru_87C374.__pad_579C[21664],
    &aP2,
    (ObjectClass *)&aP2.uniqueId,
    (int)&aP2.NeedsSaveOrLink,
    0);
  if ( stru_89E138.__pad_14B0[6151] && InitializeRadialGradientTexture() )
  {
    DDraw::CleanupSurfaces();
    stru_89E138.__pad_14B0[6151] = 0;
    stru_89E138.__pad_14B0[6152] = 0;
  }
  *(_DWORD *)&stru_87C374.__pad_579C[22532] = *(_DWORD *)&stru_87C374.__pad_579C[22524];
  LOBYTE(v194) = 1;
  Frame::Present(v194, 0);
  v195 = (_DWORD *)__2_YAPAXI_Z(0x30u);
  if ( v195 )
    v196 = BSurface::ConstructEx(
             v195,
             *(int *)&stru_87C374.__pad_579C[21648],
             *(int *)&stru_87C374.__pad_579C[21652],
             480,
             480 - *(_DWORD *)&stru_87C374.__pad_579C[21652]);
  else
    v196 = 0;
  *(_DWORD *)&stru_87C374.__pad_579C[23348] = v196;
  v197 = aP1;
  v196[9] = 0x8000;
  v198 = (_DWORD *)__2_YAPAXI_Z(0x30u);
  if ( v198 )
  {
    *(_DWORD *)&stru_87C374.__pad_14B0[4224] = BSurface::Construct(
                                                 v198,
                                                 *(int *)&stru_87C374.__pad_579C[21648],
                                                 *(int *)&stru_87C374.__pad_579C[21652],
                                                 480,
                                                 480 - *(_DWORD *)&stru_87C374.__pad_579C[21652]);
    v197 = aP1;
  }
  else
  {
    *(_DWORD *)&stru_87C374.__pad_14B0[4224] = 0;
  }
  v199 = (_DWORD *)__2_YAPAXI_Z(0x98u);
  if ( v199 )
    v190 = (MouseClass *)MouseClass::Construct(
                           v199,
                           *(ObjectClass **)&stru_87C374.__pad_579C[22520],
                           (IUnknown *)g_hWnd);
  else
    v190 = 0;
  *(_DWORD *)&stru_87C374.__pad_579C[23344] = v190;
  (*(void (__thiscall **)(MouseClass *))(v190->field_0 + 12))(v190);
  *(_DWORD *)&HouseClass_Player.__pad_5568[22176] = 0;
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22172] )
  {
    v201 = *(_DWORD *)&HouseClass_Player.__pad_5568[22068];
    *(_DWORD *)&HouseClass_Player.__pad_5568[22176] = 1;
  }
  else
  {
    v201 = -1;
  }
  CD::SetCurrentInstance((void *)v201);
  Performance::Profile();
  *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = *(_DWORD *)&HouseClass_Player.__pad_5568[22188] & 0xFFFFFFFB
                                                  | (4
                                                   * (INIClass::ReadBool_Overwrite(
                                                        (int)&stru_87C374.__pad_579C[21936],
                                                        (unsigned __int8 *)&g_INI_Key_Intro,
                                                        (CCINIClass *)&stru_830620.__pad_579C[44588],
                                                        1)
                                                    & 1));
  aP2.location[1] = 0;
  LOBYTE(aP2.location[2]) = 0;
  ReadRegistryOptionsWOL(&aP2.location[1]);
  if ( !InfantryClass::SetField6(&aP2.location[1])
    && !WinMain_Helper(&aP2.location[1])
    && !Flag::IsNot2(&aP2.location[1]) )
  {
    v192 = *(ObjectClass **)&HouseClass_Player.__pad_5568[22188];
    LOBYTE(v192) = HouseClass_Player.__pad_5568[22188] | 8;
    *(_DWORD *)&HouseClass_Player.__pad_5568[22188] = v192;
  }
  if ( (HouseClass_Player.__pad_5568[22188] & 4) == 4 )
  {
    INIClass::SetBool(&stru_87C374.__pad_579C[21936], &g_INI_Key_Intro, &stru_830620.__pad_579C[44588], 0);
    (*(void (__thiscall **)(CCINIClass *))(*(_DWORD *)v197->__pad_0 + 52))(v197);
    (*(void (__thiscall **)(CCINIClass *, int))(*(_DWORD *)v197->__pad_0 + 28))(v197, 1);
    INIClass::WriteDigest(&stru_87C374.__pad_579C[21936], v197, 0);
  }
  (*(void (__thiscall **)(CCINIClass *))(*(_DWORD *)v197->__pad_0 + 52))(v197);
  if ( v197 )
    (**(void (__thiscall ***)(CCINIClass *, int))v197->__pad_0)(v197, 1);
  if ( HouseClass_Player.__pad_5568[25848] )
  {
    MainGame();
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    Debug::Log();
    MainGame();
    ms_exc.registration.TryLevel = -1;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)TopLevelExceptionFilter);
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22524] + 24))(
    *(_DWORD *)&stru_87C374.__pad_579C[22524],
    0);
  LOBYTE(v203) = 1;
  Frame::Present(v203, 0);
  *(_DWORD *)&HouseClass_Player.__pad_5568[23332] = 1;
  ThemeManager::Cleanup((int)&g_BuildingTypeClass_Count);
  Audio::Shutdown();
  PostMessageA(g_hWnd, 2u, 0, 0);
  do
    MessageLoop();
  while ( *(_DWORD *)&HouseClass_Player.__pad_5568[23332] == 1 );
  v10 = 0;
LABEL_374:
  WinMain_Helper_5D7E50();
  WinMainSetup_Setup_65FD50();
  TacticalClass::CleanupResources();
  WinMainSetup_Setup_626FF0();
  _ioterm();
  ObjectTypeClass::UnloadPipsSHP();
  nullsub_31();
  j_PlanningNodeClass_CleanupAll();
  WinMainSetup_Setup_72AC40();
  WinMainSetup_Setup_730970();
  LoadProgressMgr::Destroy();
  WinMainSetup_Setup_5BE940();
  WinMainSetup_Setup_5DB6F0();
  if ( *(_DWORD *)&stru_830620.__pad_579C[44216] != -1 )
  {
    RevokeActiveObject(*(DWORD *)&stru_830620.__pad_579C[44216], 0);
    *(_DWORD *)&stru_830620.__pad_579C[44216] = -1;
  }
  CoDisconnectObject(&unk_89A29C, 0);
  OleUninitialize();
  return v10;
}



// ==== 0x006BE1C0  WinMainSetup  this=-  sig=ida-proto ====
void __cdecl WinMain_Setup()
{
  void *v0; // esi
  void *v1; // esi
  bool v2; // zf
  int v3; // eax
  int v4; // esi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *v6; // esi
  void *v7; // esi
  int i; // esi
  void (__thiscall ***v9)(_DWORD, int); // ecx
  int v10; // edx
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // eax
  void *v16; // esi
  void *v17; // esi
  _DWORD *v18; // esi
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  int j; // esi

  v0 = MEMORY[0xA8F794]; /*0x6be1c2*/
  MEMORY[0xA8E9A0] = 0; /*0x6be1cc*/
  if ( MEMORY[0xA8F794] ) /*0x6be1d2*/
  {
    FileTreeNode::Destroy(MEMORY[0xA8F794]); /*0x6be1d6*/
    __3_YAXPAX_Z(v0); /*0x6be1dc*/
    MEMORY[0xA8F794] = 0; /*0x6be1e4*/
  }
  if ( MEMORY[0xA8F798] ) /*0x6be1f2*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xA8F798])(MEMORY[0xA8F798], 1); /*0x6be1f8*/
    MEMORY[0xA8F798] = 0; /*0x6be1fa*/
  }
  if ( MEMORY[0xA8F790] ) /*0x6be207*/
  {
    __3_YAXPAX_Z(MEMORY[0xA8F790]); /*0x6be20a*/
    MEMORY[0xA8F790] = 0; /*0x6be212*/
  }
  WinMain::Constructor_VectorClass_Wstring_(&MEMORY[0xA8B238]); /*0x6be21d*/
  while ( MEMORY[0xB054E0] ) /*0x6be228*/
  {
    v1 = *(void **)MEMORY[0xB054D4]; /*0x6be230*/
    if ( *(_DWORD *)MEMORY[0xB054D4] ) /*0x6be230*/
    {
      ColorScheme::Destructor(*(_DWORD *)MEMORY[0xB054D4]); /*0x6be238*/
      __3_YAXPAX_Z(v1); /*0x6be23e*/
    }
  }
  MEMORY[0xB054E0] = 0; /*0x6be253*/
  if ( MEMORY[0xB054D4] && MEMORY[0xB054DD] ) /*0x6be263*/
  {
    __3_YAXPAX_Z(MEMORY[0xB054D4]); /*0x6be266*/
    MEMORY[0xB054D4] = 0; /*0x6be26e*/
  }
  MEMORY[0xB054DD] = 0; /*0x6be274*/
  MEMORY[0xB054D8] = 0; /*0x6be27a*/
  Game::DestroyAllObjects(); /*0x6be280*/
  MixFileClass::DestroyCache(); /*0x6be285*/
  MixFileClass::CleanupCache(); /*0x6be28a*/
  WinMainSetup_Setup_5B4310(); /*0x6be28f*/
  if ( MEMORY[0xABF3A0] ) /*0x6be29a*/
  {
    do /*0x6be2de*/
    {
      free(*(void **)MEMORY[0xABF394]); /*0x6be2a5*/
      v2 = MEMORY[0xABF3A0] == 0; /*0x6be2b3*/
      if ( MEMORY[0xABF3A0] > 0 ) /*0x6be2b5*/
      {
        v3 = 0; /*0x6be2b8*/
        v2 = MEMORY[0xABF3A0]-- == 1; /*0x6be2ba*/
        if ( MEMORY[0xABF3A0] > 0 ) /*0x6be2c2*/
        {
          do /*0x6be2da*/
          {
            ++v3; /*0x6be2ca*/
            *((_DWORD *)MEMORY[0xABF394] + v3 - 1) = *((_DWORD *)MEMORY[0xABF394] + v3); /*0x6be2ce*/
          }
          while ( v3 < MEMORY[0xABF3A0] ); /*0x6be2da*/
          v2 = MEMORY[0xABF3A0] == 0; /*0x6be2dc*/
        }
      }
    }
    while ( !v2 ); /*0x6be2de*/
  }
  MEMORY[0xABF3A0] = 0; /*0x6be2e5*/
  if ( MEMORY[0xABF394] && MEMORY[0xABF39D] ) /*0x6be2f5*/
  {
    __3_YAXPAX_Z(MEMORY[0xABF394]); /*0x6be2f8*/
    MEMORY[0xABF394] = 0; /*0x6be300*/
  }
  v4 = 0; /*0x6be30b*/
  MEMORY[0xABF39D] = 0; /*0x6be30f*/
  for ( MEMORY[0xABF398] = 0; v4 < MEMORY[0x87F668]; ++v4 ) /*0x6be31b*/
  {
    v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0x87F65C] + v4); /*0x6be322*/
    if ( v5 ) /*0x6be327*/
      (**v5)(v5, 1); /*0x6be32d*/
  }
  MEMORY[0x87F668] = 0; /*0x6be33e*/
  if ( MEMORY[0x87F65C] && MEMORY[0x87F665] ) /*0x6be34e*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F65C]); /*0x6be351*/
    MEMORY[0x87F65C] = 0; /*0x6be359*/
  }
  MEMORY[0x87F665] = 0; /*0x6be365*/
  MEMORY[0x87F660] = 0; /*0x6be36d*/
  if ( MEMORY[0x887048] ) /*0x6be373*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887048])(MEMORY[0x887048], 1); /*0x6be379*/
    MEMORY[0x887048] = 0; /*0x6be37b*/
  }
  INIClass::ClearSection(0, 0); /*0x6be388*/
  INIClass::ClearSection(0, 0); /*0x6be394*/
  INIClass::ClearSection(0, 0); /*0x6be3a0*/
  INIClass::ClearSection(0, 0); /*0x6be3ac*/
  INIClass::ClearSection(0, 0); /*0x6be3b8*/
  INIClass::ClearSection(0, 0); /*0x6be3c4*/
  WinMainSetup_Setup_5FF800(); /*0x6be3c9*/
  WinMainSetup_Setup(); /*0x6be3ce*/
  if ( MEMORY[0x887640] ) /*0x6be3db*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887640])(MEMORY[0x887640], 1); /*0x6be3e1*/
    MEMORY[0x887640] = 0; /*0x6be3e3*/
  }
  MapClass::FreeAllCells(&MEMORY[0x87F7E8]); /*0x6be3ee*/
  TacticalClass::FreeResources(&MEMORY[0x87F7E8]); /*0x6be3f8*/
  WinMainSetup_Setup_6BB8E0(); /*0x6be3fd*/
  v6 = MEMORY[0x887644]; /*0x6be402*/
  if ( MEMORY[0x887644] ) /*0x6be40a*/
  {
    Stream::GetField(MEMORY[0x887644]); /*0x6be40e*/
    __3_YAXPAX_Z(v6); /*0x6be414*/
    MEMORY[0x887644] = 0; /*0x6be41c*/
  }
  v7 = MEMORY[0x87E8A4]; /*0x6be422*/
  if ( MEMORY[0x87E8A4] ) /*0x6be42a*/
  {
    StreamObj::Release(MEMORY[0x87E8A4]); /*0x6be42e*/
    __3_YAXPAX_Z(v7); /*0x6be434*/
    MEMORY[0x87E8A4] = 0; /*0x6be43c*/
  }
  if ( unk_89C4B8 ) /*0x6be44a*/
  {
    (**(void (__thiscall ***)(int, int))unk_89C4B8)(unk_89C4B8, 1); /*0x6be450*/
    unk_89C4B8 = 0; /*0x6be452*/
  }
  if ( MEMORY[0x87F6B8] ) /*0x6be460*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6B8])(MEMORY[0x87F6B8], 1); /*0x6be466*/
    MEMORY[0x87F6B8] = 0; /*0x6be468*/
  }
  if ( MEMORY[0x87F6C0] ) /*0x6be476*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6C0])(MEMORY[0x87F6C0], 1); /*0x6be47c*/
    MEMORY[0x87F6C0] = 0; /*0x6be47e*/
  }
  if ( MEMORY[0x87F6C4] ) /*0x6be48c*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6C4])(MEMORY[0x87F6C4], 1); /*0x6be492*/
    MEMORY[0x87F6C4] = 0; /*0x6be494*/
  }
  if ( MEMORY[0x87F6B4] ) /*0x6be4a2*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6B4])(MEMORY[0x87F6B4], 1); /*0x6be4a8*/
    MEMORY[0x87F6B4] = 0; /*0x6be4aa*/
  }
  if ( MEMORY[0x87F6C8] ) /*0x6be4b8*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6C8])(MEMORY[0x87F6C8], 1); /*0x6be4be*/
    MEMORY[0x87F6C8] = 0; /*0x6be4c0*/
  }
  if ( MEMORY[0x87F6CC] ) /*0x6be4ce*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6CC])(MEMORY[0x87F6CC], 1); /*0x6be4d4*/
    MEMORY[0x87F6CC] = 0; /*0x6be4d6*/
  }
  if ( MEMORY[0x87F6D0] ) /*0x6be4e4*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6D0])(MEMORY[0x87F6D0], 1); /*0x6be4ea*/
    MEMORY[0x87F6D0] = 0; /*0x6be4ec*/
  }
  if ( MEMORY[0x87F6B0] ) /*0x6be4fa*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87F6B0])(MEMORY[0x87F6B0], 1); /*0x6be500*/
    MEMORY[0x87F6B0] = 0; /*0x6be502*/
  }
  if ( unk_B1D140 ) /*0x6be510*/
  {
    (**(void (__thiscall ***)(int, int))unk_B1D140)(unk_B1D140, 1); /*0x6be516*/
    unk_B1D140 = 0; /*0x6be518*/
  }
  if ( dword_B1D13C ) /*0x6be526*/
  {
    (**(void (__thiscall ***)(int, int))dword_B1D13C)(dword_B1D13C, 1); /*0x6be52c*/
    dword_B1D13C = 0; /*0x6be52e*/
  }
  if ( dword_89DDC0 ) /*0x6be53c*/
  {
    (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x6be542*/
    dword_89DDC0 = 0; /*0x6be544*/
  }
  if ( unk_89DDBC ) /*0x6be551*/
  {
    __3_YAXPAX_Z(unk_89DDBC); /*0x6be554*/
    unk_89DDBC = 0; /*0x6be55c*/
  }
  CleanupMapSystems(&MEMORY[0x87F7E8]); /*0x6be567*/
  for ( i = 0; i < MEMORY[0x87F6A8]; ++i ) /*0x6be575*/
  {
    v9 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0x87F69C] + i); /*0x6be57c*/
    if ( v9 ) /*0x6be581*/
      (**v9)(v9, 1); /*0x6be587*/
  }
  MEMORY[0x87F6A8] = 0; /*0x6be598*/
  if ( MEMORY[0x87F69C] && MEMORY[0x87F6A5] ) /*0x6be5a8*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F69C]); /*0x6be5ab*/
    MEMORY[0x87F69C] = 0; /*0x6be5b3*/
  }
  MEMORY[0x87F6A5] = 0; /*0x6be5bf*/
  MEMORY[0x87F6A0] = 0; /*0x6be5c7*/
  if ( MEMORY[0x884E08] ) /*0x6be5cd*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E08])(MEMORY[0x884E08], 1); /*0x6be5d3*/
    MEMORY[0x884E08] = 0; /*0x6be5d5*/
  }
  if ( MEMORY[0x884E0C] ) /*0x6be5e3*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E0C])(MEMORY[0x884E0C], 1); /*0x6be5e9*/
    MEMORY[0x884E0C] = 0; /*0x6be5eb*/
  }
  if ( MEMORY[0x884E10] ) /*0x6be5f9*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E10])(MEMORY[0x884E10], 1); /*0x6be5ff*/
    MEMORY[0x884E10] = 0; /*0x6be601*/
  }
  if ( MEMORY[0x884E14] ) /*0x6be60f*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E14])(MEMORY[0x884E14], 1); /*0x6be615*/
    MEMORY[0x884E14] = 0; /*0x6be617*/
  }
  if ( MEMORY[0x884E18] ) /*0x6be625*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E18])(MEMORY[0x884E18], 1); /*0x6be62b*/
    MEMORY[0x884E18] = 0; /*0x6be62d*/
  }
  if ( MEMORY[0x884E1C] ) /*0x6be63b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E1C])(MEMORY[0x884E1C], 1); /*0x6be641*/
    MEMORY[0x884E1C] = 0; /*0x6be643*/
  }
  if ( MEMORY[0x884E20] ) /*0x6be651*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E20])(MEMORY[0x884E20], 1); /*0x6be657*/
    MEMORY[0x884E20] = 0; /*0x6be659*/
  }
  if ( MEMORY[0x884E24] ) /*0x6be667*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E24])(MEMORY[0x884E24], 1); /*0x6be66d*/
    MEMORY[0x884E24] = 0; /*0x6be66f*/
  }
  if ( MEMORY[0x884E28] ) /*0x6be67d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E28])(MEMORY[0x884E28], 1); /*0x6be683*/
    MEMORY[0x884E28] = 0; /*0x6be685*/
  }
  if ( lpBuffer ) /*0x6be692*/
  {
    __3_YAXPAX_Z(lpBuffer); /*0x6be695*/
    lpBuffer = 0; /*0x6be69d*/
  }
  if ( unk_AA1060 ) /*0x6be6aa*/
  {
    __3_YAXPAX_Z(unk_AA1060); /*0x6be6ad*/
    unk_AA1060 = 0; /*0x6be6b5*/
  }
  if ( unk_AA1064 ) /*0x6be6c2*/
  {
    __3_YAXPAX_Z(unk_AA1064); /*0x6be6c5*/
    unk_AA1064 = 0; /*0x6be6cd*/
  }
  if ( unk_AA1068 ) /*0x6be6da*/
  {
    __3_YAXPAX_Z(unk_AA1068); /*0x6be6dd*/
    unk_AA1068 = 0; /*0x6be6e5*/
  }
  if ( unk_AA106C ) /*0x6be6f2*/
  {
    __3_YAXPAX_Z(unk_AA106C); /*0x6be6f5*/
    unk_AA106C = 0; /*0x6be6fd*/
  }
  if ( MEMORY[0x887320] ) /*0x6be70b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887320])(MEMORY[0x887320], 1); /*0x6be711*/
    MEMORY[0x887320] = 0; /*0x6be713*/
  }
  if ( MEMORY[0x884E2C] ) /*0x6be721*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E2C])(MEMORY[0x884E2C], 1); /*0x6be727*/
    MEMORY[0x884E2C] = 0; /*0x6be729*/
  }
  if ( MEMORY[0x884E30] ) /*0x6be737*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E30])(MEMORY[0x884E30], 1); /*0x6be73d*/
    MEMORY[0x884E30] = 0; /*0x6be73f*/
  }
  if ( MEMORY[0x884E34] ) /*0x6be74d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E34])(MEMORY[0x884E34], 1); /*0x6be753*/
    MEMORY[0x884E34] = 0; /*0x6be755*/
  }
  if ( MEMORY[0x884E3C] ) /*0x6be763*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E3C])(MEMORY[0x884E3C], 1); /*0x6be769*/
    MEMORY[0x884E3C] = 0; /*0x6be76b*/
  }
  if ( MEMORY[0x884E38] ) /*0x6be779*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E38])(MEMORY[0x884E38], 1); /*0x6be77f*/
    MEMORY[0x884E38] = 0; /*0x6be781*/
  }
  if ( MEMORY[0x884E44] ) /*0x6be78f*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E44])(MEMORY[0x884E44], 1); /*0x6be795*/
    MEMORY[0x884E44] = 0; /*0x6be797*/
  }
  if ( MEMORY[0x884E40] ) /*0x6be7a5*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E40])(MEMORY[0x884E40], 1); /*0x6be7ab*/
    MEMORY[0x884E40] = 0; /*0x6be7ad*/
  }
  v10 = MEMORY[0x884DA0]; /*0x6be7b3*/
  if ( MEMORY[0x884DA0] > 0 ) /*0x6be7bb*/
  {
    v11 = MEMORY[0x884D94]; /*0x6be7bd*/
    do /*0x6be806*/
    {
      if ( *v11 ) /*0x6be7c3*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v11)(*v11, 1); /*0x6be7cd*/
        v11 = MEMORY[0x884D94]; /*0x6be7cf*/
        v10 = MEMORY[0x884DA0]; /*0x6be7d5*/
      }
      if ( v10 <= 0 ) /*0x6be7dd*/
        break; /*0x6be7dd*/
      v12 = 0; /*0x6be7e0*/
      MEMORY[0x884DA0] = v10 - 1; /*0x6be7e4*/
      if ( v10 - 1 <= 0 ) /*0x6be7ea*/
        break; /*0x6be7ea*/
      do /*0x6be802*/
      {
        v11[v12] = v11[v12 + 1]; /*0x6be7f0*/
        v10 = MEMORY[0x884DA0]; /*0x6be7f3*/
        v11 = MEMORY[0x884D94]; /*0x6be7f9*/
        ++v12; /*0x6be7ff*/
      }
      while ( v12 < MEMORY[0x884DA0] ); /*0x6be802*/
    }
    while ( MEMORY[0x884DA0] > 0 ); /*0x6be806*/
  }
  if ( MEMORY[0x884E4C] ) /*0x6be810*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E4C])(MEMORY[0x884E4C], 1); /*0x6be816*/
    MEMORY[0x884E4C] = 0; /*0x6be818*/
  }
  if ( MEMORY[0x884E48] ) /*0x6be826*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E48])(MEMORY[0x884E48], 1); /*0x6be82c*/
    MEMORY[0x884E48] = 0; /*0x6be82e*/
  }
  if ( MEMORY[0x884E54] ) /*0x6be83c*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E54])(MEMORY[0x884E54], 1); /*0x6be842*/
    MEMORY[0x884E54] = 0; /*0x6be844*/
  }
  if ( MEMORY[0x884E50] ) /*0x6be852*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E50])(MEMORY[0x884E50], 1); /*0x6be858*/
    MEMORY[0x884E50] = 0; /*0x6be85a*/
  }
  if ( MEMORY[0x884E5C] ) /*0x6be868*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E5C])(MEMORY[0x884E5C], 1); /*0x6be86e*/
    MEMORY[0x884E5C] = 0; /*0x6be870*/
  }
  if ( MEMORY[0x884E58] ) /*0x6be87e*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E58])(MEMORY[0x884E58], 1); /*0x6be884*/
    MEMORY[0x884E58] = 0; /*0x6be886*/
  }
  if ( MEMORY[0x884E68] ) /*0x6be894*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E68])(MEMORY[0x884E68], 1); /*0x6be89a*/
    MEMORY[0x884E68] = 0; /*0x6be89c*/
  }
  if ( MEMORY[0x884E6C] ) /*0x6be8aa*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E6C])(MEMORY[0x884E6C], 1); /*0x6be8b0*/
    MEMORY[0x884E6C] = 0; /*0x6be8b2*/
  }
  v13 = MEMORY[0x884DD0]; /*0x6be8b8*/
  if ( MEMORY[0x884DD0] > 0 ) /*0x6be8c0*/
  {
    v14 = MEMORY[0x884DC4]; /*0x6be8c2*/
    do /*0x6be90b*/
    {
      if ( *v14 ) /*0x6be8c8*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v14)(*v14, 1); /*0x6be8d2*/
        v14 = MEMORY[0x884DC4]; /*0x6be8d4*/
        v13 = MEMORY[0x884DD0]; /*0x6be8da*/
      }
      if ( v13 <= 0 ) /*0x6be8e2*/
        break; /*0x6be8e2*/
      v15 = 0; /*0x6be8e5*/
      MEMORY[0x884DD0] = v13 - 1; /*0x6be8e9*/
      if ( v13 - 1 <= 0 ) /*0x6be8ef*/
        break; /*0x6be8ef*/
      do /*0x6be907*/
      {
        v14[v15] = v14[v15 + 1]; /*0x6be8f5*/
        v13 = MEMORY[0x884DD0]; /*0x6be8f8*/
        v14 = MEMORY[0x884DC4]; /*0x6be8fe*/
        ++v15; /*0x6be904*/
      }
      while ( v15 < MEMORY[0x884DD0] ); /*0x6be907*/
    }
    while ( MEMORY[0x884DD0] > 0 ); /*0x6be90b*/
  }
  if ( MEMORY[0x884E64] ) /*0x6be915*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E64])(MEMORY[0x884E64], 1); /*0x6be91b*/
    MEMORY[0x884E64] = 0; /*0x6be91d*/
  }
  if ( MEMORY[0x884E60] ) /*0x6be92b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E60])(MEMORY[0x884E60], 1); /*0x6be931*/
    MEMORY[0x884E60] = 0; /*0x6be933*/
  }
  if ( MEMORY[0x884DDC] ) /*0x6be941*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DDC])(MEMORY[0x884DDC], 1); /*0x6be947*/
    MEMORY[0x884DDC] = 0; /*0x6be949*/
  }
  if ( MEMORY[0x884DD8] ) /*0x6be957*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DD8])(MEMORY[0x884DD8], 1); /*0x6be95d*/
    MEMORY[0x884DD8] = 0; /*0x6be95f*/
  }
  if ( MEMORY[0x884E74] ) /*0x6be96d*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E74])(MEMORY[0x884E74], 1); /*0x6be973*/
    MEMORY[0x884E74] = 0; /*0x6be975*/
  }
  if ( MEMORY[0x884E70] ) /*0x6be983*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E70])(MEMORY[0x884E70], 1); /*0x6be989*/
    MEMORY[0x884E70] = 0; /*0x6be98b*/
  }
  if ( MEMORY[0x884E78] ) /*0x6be999*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E78])(MEMORY[0x884E78], 1); /*0x6be99f*/
    MEMORY[0x884E78] = 0; /*0x6be9a1*/
  }
  if ( MEMORY[0x884DFC] ) /*0x6be9af*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DFC])(MEMORY[0x884DFC], 1); /*0x6be9b5*/
    MEMORY[0x884DFC] = 0; /*0x6be9b7*/
  }
  if ( MEMORY[0x884DF8] ) /*0x6be9c5*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884DF8])(MEMORY[0x884DF8], 1); /*0x6be9cb*/
    MEMORY[0x884DF8] = 0; /*0x6be9cd*/
  }
  if ( MEMORY[0x884E00] ) /*0x6be9db*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E00])(MEMORY[0x884E00], 1); /*0x6be9e1*/
    MEMORY[0x884E00] = 0; /*0x6be9e3*/
  }
  if ( MEMORY[0x884E04] ) /*0x6be9f1*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x884E04])(MEMORY[0x884E04], 1); /*0x6be9f7*/
    MEMORY[0x884E04] = 0; /*0x6be9f9*/
  }
  if ( MEMORY[0x887324] ) /*0x6bea07*/
  {
    ((void (__thiscall *)(LPPERSISTSTREAM, int))MEMORY[0x887324]->__tail_0[1].QueryInterface)(MEMORY[0x887324], 1); /*0x6bea0d*/
    MEMORY[0x887324] = 0; /*0x6bea10*/
  }
  WinMainSetup_Setup_65FD50(); /*0x6bea16*/
  TacticalClass::CleanupResources(&MEMORY[0x87F7E8]); /*0x6bea20*/
  WinMainSetup_Setup_626FF0(); /*0x6bea25*/
  _ioterm(); /*0x6bea2a*/
  ObjectTypeClass::UnloadPipsSHP(); /*0x6bea2f*/
  nullsub_31(); /*0x6bea34*/
  j_PlanningNodeClass_CleanupAll(); /*0x6bea39*/
  WinMainSetup_Setup_72AC40(); /*0x6bea3e*/
  WinMainSetup_Setup_730970(); /*0x6bea43*/
  LoadProgressMgr::Destroy(); /*0x6bea48*/
  WinMainSetup_Setup_5BE940(); /*0x6bea4d*/
  WinMainSetup_Setup_5DB6F0(); /*0x6bea52*/
  Audio::LoadSoundINI(); /*0x6bea57*/
  LoadINIEVA(); /*0x6bea5c*/
  sub_47ADC0(); /*0x6bea61*/
  if ( MEMORY[0x87F770] ) /*0x6bea6d*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F770]); /*0x6bea70*/
    MEMORY[0x87F770] = 0; /*0x6bea78*/
  }
  Network::ShutdownInterface(); /*0x6bea7e*/
  v16 = MEMORY[0xA83DB8]; /*0x6bea83*/
  if ( MEMORY[0xA83DB8] ) /*0x6bea8b*/
  {
    Vector::Clear(MEMORY[0xA83DB8]); /*0x6bea8f*/
    __3_YAXPAX_Z(v16); /*0x6bea95*/
    MEMORY[0xA83DB8] = 0; /*0x6bea9d*/
  }
  v17 = MEMORY[0x8871E0]; /*0x6beaa3*/
  if ( MEMORY[0x8871E0] ) /*0x6beaab*/
  {
    RulesClass::DTOR(MEMORY[0x8871E0]); /*0x6beaaf*/
    __3_YAXPAX_Z(v17); /*0x6beab5*/
    MEMORY[0x8871E0] = 0; /*0x6beabd*/
  }
  v18 = MEMORY[0xA8B230]; /*0x6beac3*/
  if ( MEMORY[0xA8B230] ) /*0x6beacc*/
  {
    v19 = (void *)*((_DWORD *)MEMORY[0xA8B230] + 3396); /*0x6bead2*/
    *((_DWORD *)MEMORY[0xA8B230] + 3395) = &vt_VectorClass_int; /*0x6beadf*/
    if ( v19 && *((_BYTE *)v18 + 13593) ) /*0x6beae7*/
    {
      __3_YAXPAX_Z(v19); /*0x6beaf0*/
      v18[3396] = 0; /*0x6beaf8*/
    }
    *((_BYTE *)v18 + 13593) = 0; /*0x6beafe*/
    v18[3397] = 0; /*0x6beb04*/
    v20 = (void *)v18[3389]; /*0x6beb0a*/
    v18[3388] = &vt_VectorClass_int; /*0x6beb10*/
    if ( v20 && *((_BYTE *)v18 + 13565) ) /*0x6beb1a*/
    {
      __3_YAXPAX_Z(v20); /*0x6beb23*/
      v18[3389] = 0; /*0x6beb2b*/
    }
    *((_BYTE *)v18 + 13565) = 0; /*0x6beb31*/
    v18[3390] = 0; /*0x6beb37*/
    v21 = (void *)v18[3382]; /*0x6beb3d*/
    v18[3381] = &vt_VectorClass_TechnoTypeClass; /*0x6beb43*/
    if ( v21 && *((_BYTE *)v18 + 13537) ) /*0x6beb51*/
    {
      __3_YAXPAX_Z(v21); /*0x6beb5a*/
      v18[3382] = 0; /*0x6beb62*/
    }
    *((_BYTE *)v18 + 13537) = 0; /*0x6beb69*/
    v18[3383] = 0; /*0x6beb6f*/
    __3_YAXPAX_Z(v18); /*0x6beb75*/
    MEMORY[0xA8B230] = 0; /*0x6beb7d*/
  }
  for ( j = 0; j < MEMORY[0xB0BC98]; ++j ) /*0x6beb8c*/
    CoRevokeClassObject(*((_DWORD *)MEMORY[0xB0BC8C] + j)); /*0x6beb9e*/
  MEMORY[0xB0BC98] = 0; /*0x6bebaf*/
  if ( MEMORY[0xB0BC8C] && MEMORY[0xB0BC95] ) /*0x6bebc0*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0BC8C]); /*0x6bebc3*/
    MEMORY[0xB0BC8C] = 0; /*0x6bebcb*/
  }
  MEMORY[0xB0BC95] = 0; /*0x6bebd8*/
  MEMORY[0xB0BC90] = 0; /*0x6bebde*/
  RevokeActiveObject(MEMORY[0xB0BCEC], 0); /*0x6bebe4*/
  if ( MEMORY[0x89F974] ) /*0x6bebf1*/
    FreeLibrary(MEMORY[0x89F974]); /*0x6bebf4*/
  if ( MEMORY[0xB0BCE8] ) /*0x6bec07*/
  {
    CloseHandle(MEMORY[0xB0BCE8]); /*0x6bec0a*/
    MEMORY[0xB0BCE8] = 0; /*0x6bec0c*/
  }
  if ( MEMORY[0xB0BCE4] ) /*0x6bec19*/
  {
    CloseHandle(MEMORY[0xB0BCE4]); /*0x6bec1c*/
    MEMORY[0xB0BCE4] = 0; /*0x6bec1e*/
  }
  Audio_Init(); /*0x6bec24*/
  ThemeManager::Cleanup(&g_BuildingTypeClass_Count); /*0x6bec2e*/
  Audio::Shutdown(); /*0x6bec33*/
  WinMain::ShutdownCleanup(); /*0x6bec38*/
  WinMain::CleanupResource(); /*0x6bec3d*/
  if ( dword_B7816C ) /*0x7b86be*/
  {
    dword_B78138 = 1; /*0x7b86c0*/
    while ( !dword_B78140 ) /*0x7b86d1*/
      Sleep(0); /*0x7b86dc*/
    WaitForSingleObject(dword_B78154, 0x1388u); /*0x7b86f3*/
    CloseHandle(dword_B78154); /*0x7b8700*/
    dword_B7816C = 0; /*0x7b8702*/
  }
  if ( hMutex ) /*0x7b8713*/
  {
    CloseHandle(hMutex); /*0x7b8716*/
    hMutex = 0; /*0x7b8718*/
  }
}


// ==== 0x006BEC50  ObjectClass::ExitProgram  this=ObjectClass  sig=csp ====
void __thiscall __noreturn ExitProgram(void *Code)
{
  exit((int)Code); /*0x6bec51*/
}


// ==== 0x006BEC60  GameClass::Shutdown  this=GameClass  sig=csp ====
void GameClass_Shutdown()
{
  int v0; // eax
  void *v1; // ebp
  int v2; // edx
  int v3; // eax
  char *v4; // esi
  int v5; // edi

  MEMORY[0xA8EDD8] = 1; /*0x6bec72*/
  PostMessageA(g_hWnd, 2u, 0, 0); /*0x6bec78*/
  if ( g_hWnd ) /*0x6bec85*/
  {
    do /*0x6bec9b*/
      MessageLoop(); /*0x6bec87*/
    while ( MEMORY[0xA8EDD8] == 1 && g_hWnd ); /*0x6bec9b*/
  }
  if ( MEMORY[0x840A74] != -1 ) /*0x6beca5*/
  {
    RevokeActiveObject(MEMORY[0x840A74], 0); /*0x6becaa*/
    MEMORY[0x840A74] = -1; /*0x6becb0*/
  }
  CoDisconnectObject(&unk_89A29C, 0); /*0x6becc1*/
  OleUninitialize(); /*0x6becc7*/
  if ( MEMORY[0x887640] ) /*0x6becd5*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 20))(MEMORY[0x887640]); /*0x6becd9*/
    if ( MEMORY[0x887640] ) /*0x6bece4*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x887640])(MEMORY[0x887640], 1); /*0x6bece9*/
  }
  MEMORY[0x887640] = 0; /*0x6becf0*/
  if ( MEMORY[0xB0BCF4] ) /*0x6becfc*/
  {
    if ( MEMORY[0xB0BCF0] ) /*0x6bed06*/
    {
      v0 = *(_DWORD *)(MEMORY[0xB0BCF0] - 4); /*0x6bed08*/
      v1 = (void *)(MEMORY[0xB0BCF0] - 4); /*0x6bed0c*/
      v2 = 9 * v0; /*0x6bed0f*/
      v3 = v0 - 1; /*0x6bed12*/
      v4 = (char *)(MEMORY[0xB0BCF0] + 4 * v2); /*0x6bed13*/
      if ( v3 >= 0 ) /*0x6bed16*/
      {
        v5 = v3 + 1; /*0x6bed19*/
        do /*0x6bed27*/
        {
          v4 -= 36; /*0x6bed1c*/
          FileTreeNode::Destroy(v4); /*0x6bed21*/
          --v5; /*0x6bed26*/
        }
        while ( v5 ); /*0x6bed27*/
      }
      __3_YAXPAX_Z(v1); /*0x6bed2b*/
    }
    MEMORY[0xB0BCF4] = 0; /*0x6bed34*/
  }
  PostQuitMessage(0); /*0x6bed3d*/
  Network::ShutdownInterface(); /*0x6bed43*/
  WinMainSetup(); /*0x6bed48*/
}


// ==== 0x006BED50  _DynamicVectorClass_K::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_K::sub_6BED50(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x6bed56*/
  *(_DWORD *)(this + 16) = 0; /*0x6bed59*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6bed60*/
  {
    __3_YAXPAX_Z(v2); /*0x6bed66*/
    *(_DWORD *)(this + 4) = 0; /*0x6bed6e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x6bed71*/
  *(_DWORD *)(this + 8) = 0; /*0x6bed74*/
}


// ==== 0x006BED80  _DynamicVectorClass_K::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_K::sub_6BED80(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x6bed80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x6bed95*/
  else
    return 0; /*0x6bed87*/
}


// ==== 0x006BEDA0  _VectorClass_K::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_K::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6bedaa*/
}


// ==== 0x006BEDB0  COMClassFactory::Register  this=COMClassFactory  sig=csp ====
int __thiscall COMClassFactory::Register(LPVOID *ppv, IID *rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext)
{
  int result; // eax
  HRESULT v6; // esi

  if ( *ppv ) /*0x6bedb4*/
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*ppv + 8))(*ppv); /*0x6bedbd*/
  if ( (dwClsContext & 0x14) == 0 ) /*0x6bedc6*/
    return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, ppv); /*0x6bee2b*/
  result = CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)&pUnkOuter); /*0x6beddd*/
  if ( result >= 0 ) /*0x6bede5*/
  {
    v6 = OleRun(pUnkOuter); /*0x6bedf2*/
    if ( v6 >= 0 ) /*0x6bedf6*/
      v6 = (*(int (__stdcall **)(LPUNKNOWN, IID *, LPVOID *))pUnkOuter->field_0)(pUnkOuter, &riid, ppv); /*0x6bee07*/
    (*(void (__stdcall **)(LPUNKNOWN))(pUnkOuter->field_0 + 8))(pUnkOuter); /*0x6bee10*/
    return v6; /*0x6bee13*/
  }
  return result; /*0x6bee15*/
}


// ==== 0x006BEE40  ClassFactory_CStream::Construct  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
_DWORD *__thiscall ClassFactory_CStream::Construct(TClassFactory_VCStreamClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bee42*/
  this->vfptr = &TClassFactory<CStreamClass>::`vftable'; /*0x6bee49*/
  return &this->vfptr; /*0x6bee4f*/
}


// ==== 0x006BEE50  _TClassFactory_VCStreamClass::QueryInterface  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __stdcall VectorClass_K_8_::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6bee57*/
    return -2147467261; /*0x6bee59*/
  *a3 = 0; /*0x6bee76*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6bee92*/
    *a3 = a1; /*0x6bee96*/
  if ( !*a3 ) /*0x6bee98*/
    return -2147467262; /*0x6beea0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6beeac*/
  return 0; /*0x6bee5e*/
}


// ==== 0x006BEEC0  _TClassFactory_VCStreamClass::AddRef  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
LONG __stdcall VectorClass_K_8_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x6beece*/
}


// ==== 0x006BEEE0  _TClassFactory_VCStreamClass::Release  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
LONG __stdcall VectorClass_K_8_::_vt02(volatile LONG *Block)
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6beef0*/
  if ( !v1 ) /*0x6beef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6beef7*/
  return v1; /*0x6bef01*/
}


// ==== 0x006BEF10  _TClassFactory_VCStreamClass::ddtor  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __stdcall VectorClass_K_8_::_vt03(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi

  if ( !a4 ) /*0x6bef18*/
    return -2147024809; /*0x6bef1b*/
  *a4 = 0; /*0x6bef28*/
  if ( a2 ) /*0x6bef30*/
    return -2147221232; /*0x6bef33*/
  v5 = __2_YAPAXI_Z(0x2Cu); /*0x6bef3e*/
  if ( !v5 ) /*0x6bef48*/
    return -2147024882; /*0x6bef48*/
  v6 = VectorClass_K_8::Constructor(v5); /*0x6bef4c*/
  v7 = v6; /*0x6bef51*/
  if ( !v6 ) /*0x6bef55*/
    return -2147024882; /*0x6bef58*/
  v8 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *))*v6)(v6, a3, a4); /*0x6bef6c*/
  if ( v8 < 0 ) /*0x6bef70*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 56))(v7, 1); /*0x6bef78*/
  return v8; /*0x6bef1a*/
}


// ==== 0x006BEF90  _TClassFactory_VCStreamClass::GetSize  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __stdcall VectorClass_K_8_::_vt04(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6bef9a*/
  if ( a2 ) /*0x6bef9d*/
    v3 = v2 + 1; /*0x6bef9f*/
  else
    v3 = v2 - 1; /*0x6befa8*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6befa0*/
  return 0; /*0x6befa5*/
}


// ==== 0x006BEFC0  ClassFactory_Wave::Construct  this=?$TClassFactory@VWaveClass@@  sig=csp ====
_DWORD *__thiscall ClassFactory_Wave::Construct(TClassFactory_VWaveClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6befc2*/
  this->vfptr = &TClassFactory<WaveClass>::`vftable'; /*0x6befc9*/
  return &this->vfptr; /*0x6befcf*/
}


// ==== 0x006BEFD0  _TClassFactory_VWaveClass::QueryInterface  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __stdcall VectorClass_K_14_::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6befd7*/
    return -2147467261; /*0x6befd9*/
  *a3 = 0; /*0x6beff6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6bf012*/
    *a3 = a1; /*0x6bf016*/
  if ( !*a3 ) /*0x6bf018*/
    return -2147467262; /*0x6bf020*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6bf02c*/
  return 0; /*0x6befde*/
}


// ==== 0x006BF040  _TClassFactory_VWaveClass::AddRef  this=?$TClassFactory@VWaveClass@@  sig=csp ====
LONG __stdcall VectorClass_K_14_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x6bf04e*/
}


// ==== 0x006BF060  _TClassFactory_VWaveClass::Release  this=?$TClassFactory@VWaveClass@@  sig=csp ====
LONG __stdcall VectorClass_K_14_::_vt02(volatile LONG *Block)
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6bf070*/
  if ( !v1 ) /*0x6bf074*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf077*/
  return v1; /*0x6bf081*/
}


// ==== 0x006BF090  _TClassFactory_VWaveClass::ddtor  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __stdcall VectorClass_K_14_::_vt03(int a1, int a2, int a3, _DWORD *a4)
{
  void *v5; // eax
  int (__stdcall ***v6)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD, _DWORD *); // esi
  int v8; // edi

  if ( !a4 ) /*0x6bf098*/
    return -2147024809; /*0x6bf09b*/
  *a4 = 0; /*0x6bf0a8*/
  if ( a2 ) /*0x6bf0b0*/
    return -2147221232; /*0x6bf0b3*/
  v5 = __2_YAPAXI_Z(0x240u); /*0x6bf0c1*/
  if ( !v5 ) /*0x6bf0cb*/
    return -2147024882; /*0x6bf0cb*/
  v6 = (int (__stdcall ***)(_DWORD, int, _DWORD *))VoxelAnimClass::Constructor((int)v5); /*0x6bf0cf*/
  v7 = v6; /*0x6bf0d4*/
  if ( !v6 ) /*0x6bf0d8*/
    return -2147024882; /*0x6bf0db*/
  v8 = (**v6)(v6, a3, a4); /*0x6bf0ef*/
  if ( v8 < 0 ) /*0x6bf0f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf0fb*/
  return v8; /*0x6bf09a*/
}


// ==== 0x006BF110  _TClassFactory_VWaveClass::GetSize  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __stdcall VectorClass_K_14_::_vt04(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6bf11a*/
  if ( a2 ) /*0x6bf11d*/
    v3 = v2 + 1; /*0x6bf11f*/
  else
    v3 = v2 - 1; /*0x6bf128*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6bf120*/
  return 0; /*0x6bf125*/
}


// ==== 0x006BF140  COMClassFactory::Construct  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_3::Construct(TClassFactory_VTerrainTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bf142*/
  this->vfptr = &TClassFactory<TerrainTypeClass>::`vftable'; /*0x6bf149*/
  return &this->vfptr; /*0x6bf14f*/
}


// ==== 0x006BF150  _TClassFactory_VTerrainTypeClass::QueryInterface  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __stdcall VectorClass_K_20_::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6bf157*/
    return -2147467261; /*0x6bf159*/
  *a3 = 0; /*0x6bf176*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6bf192*/
    *a3 = a1; /*0x6bf196*/
  if ( !*a3 ) /*0x6bf198*/
    return -2147467262; /*0x6bf1a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6bf1ac*/
  return 0; /*0x6bf15e*/
}


// ==== 0x006BF1C0  _TClassFactory_VTerrainTypeClass::AddRef  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
LONG __stdcall VectorClass_K_20_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x6bf1ce*/
}


// ==== 0x006BF1E0  _TClassFactory_VTerrainTypeClass::Release  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
LONG __stdcall VectorClass_K_20_::_vt02(volatile LONG *Block)
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6bf1f0*/
  if ( !v1 ) /*0x6bf1f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf1f7*/
  return v1; /*0x6bf201*/
}


// ==== 0x006BF210  _TClassFactory_VTerrainTypeClass::ddtor  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __stdcall VectorClass_K_20_::_vt03(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi

  if ( !a4 ) /*0x6bf218*/
    return -2147024809; /*0x6bf21b*/
  *a4 = 0; /*0x6bf228*/
  if ( a2 ) /*0x6bf230*/
    return -2147221232; /*0x6bf233*/
  v5 = __2_YAPAXI_Z(0x2BCu); /*0x6bf241*/
  if ( !v5 ) /*0x6bf24b*/
    return -2147024882; /*0x6bf24b*/
  v6 = TerrainTypeClass::TerrainTypeClass(v5, 0); /*0x6bf251*/
  v7 = v6; /*0x6bf256*/
  if ( !v6 ) /*0x6bf25a*/
    return -2147024882; /*0x6bf25d*/
  v8 = (*(int (__stdcall **)(_DWORD *, int, _DWORD *))*v6)(v6, a3, a4); /*0x6bf271*/
  if ( v8 < 0 ) /*0x6bf275*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bf27d*/
  return v8; /*0x6bf21a*/
}


// ==== 0x006BF290  _TClassFactory_VTerrainTypeClass::GetSize  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __stdcall VectorClass_K_20_::_vt04(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6bf29a*/
  if ( a2 ) /*0x6bf29d*/
    v3 = v2 + 1; /*0x6bf29f*/
  else
    v3 = v2 - 1; /*0x6bf2a8*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6bf2a0*/
  return 0; /*0x6bf2a5*/
}


// ==== 0x006BF2C0  COMClassFactory::Construct  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_4::Construct(TClassFactory_VTerrainClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bf2c2*/
  this->vfptr = &TClassFactory<TerrainClass>::`vftable'; /*0x6bf2c9*/
  return &this->vfptr; /*0x6bf2cf*/
}


// ==== 0x006BF2D0  _TClassFactory_VTerrainClass::QueryInterface  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __stdcall VectorClass_K_26_::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6bf2d7*/
    return -2147467261; /*0x6bf2d9*/
  *a3 = 0; /*0x6bf2f6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6bf312*/
    *a3 = a1; /*0x6bf316*/
  if ( !*a3 ) /*0x6bf318*/
    return -2147467262; /*0x6bf320*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6bf32c*/
  return 0; /*0x6bf2de*/
}


// ==== 0x006BF340  _TClassFactory_VTerrainClass::AddRef  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
LONG __stdcall VectorClass_K_26_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x6bf34e*/
}


// ==== 0x006BF360  _TClassFactory_VTerrainClass::Release  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
LONG __stdcall VectorClass_K_26_::_vt02(volatile LONG *Block)
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6bf370*/
  if ( !v1 ) /*0x6bf374*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf377*/
  return v1; /*0x6bf381*/
}


// ==== 0x006BF390  _TClassFactory_VTerrainClass::ddtor  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __stdcall VectorClass_K_26_::_vt03(int a1, int a2, int a3, _DWORD *a4)
{
  void *v5; // eax
  int (__stdcall ***v6)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD, _DWORD *); // esi
  int v8; // edi

  if ( !a4 ) /*0x6bf398*/
    return -2147024809; /*0x6bf39b*/
  *a4 = 0; /*0x6bf3a8*/
  if ( a2 ) /*0x6bf3b0*/
    return -2147221232; /*0x6bf3b3*/
  v5 = __2_YAPAXI_Z(0xE0u); /*0x6bf3c1*/
  if ( !v5 ) /*0x6bf3cb*/
    return -2147024882; /*0x6bf3cb*/
  v6 = (int (__stdcall ***)(_DWORD, int, _DWORD *))ObjectClass::ProcessFoggedState((int)v5); /*0x6bf3cf*/
  v7 = v6; /*0x6bf3d4*/
  if ( !v6 ) /*0x6bf3d8*/
    return -2147024882; /*0x6bf3db*/
  v8 = (**v6)(v6, a3, a4); /*0x6bf3ef*/
  if ( v8 < 0 ) /*0x6bf3f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf3fb*/
  return v8; /*0x6bf39a*/
}


// ==== 0x006BF410  _TClassFactory_VTerrainClass::GetSize  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __stdcall VectorClass_K_26_::_vt04(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6bf41a*/
  if ( a2 ) /*0x6bf41d*/
    v3 = v2 + 1; /*0x6bf41f*/
  else
    v3 = v2 - 1; /*0x6bf428*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6bf420*/
  return 0; /*0x6bf425*/
}


// ==== 0x006BF440  COMClassFactory::Construct  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_5::Construct(TClassFactory_VSuperWeaponTypeClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bf442*/
  this->vfptr = &TClassFactory<SuperWeaponTypeClass>::`vftable'; /*0x6bf449*/
  return &this->vfptr; /*0x6bf44f*/
}


// ==== 0x006BF450  _TClassFactory_VSuperWeaponTypeClass::QueryInterface  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __stdcall VectorClass_K_32_::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6bf457*/
    return -2147467261; /*0x6bf459*/
  *a3 = 0; /*0x6bf476*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6bf492*/
    *a3 = a1; /*0x6bf496*/
  if ( !*a3 ) /*0x6bf498*/
    return -2147467262; /*0x6bf4a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6bf4ac*/
  return 0; /*0x6bf45e*/
}


// ==== 0x006BF4C0  _TClassFactory_VSuperWeaponTypeClass::AddRef  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
LONG __stdcall VectorClass_K_32_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x6bf4ce*/
}


// ==== 0x006BF4E0  _TClassFactory_VSuperWeaponTypeClass::Release  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
LONG __stdcall VectorClass_K_32_::_vt02(volatile LONG *Block)
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6bf4f0*/
  if ( !v1 ) /*0x6bf4f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf4f7*/
  return v1; /*0x6bf501*/
}


// ==== 0x006BF510  _TClassFactory_VSuperWeaponTypeClass::ddtor  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __stdcall VectorClass_K_32_::_vt03(int a1, int a2, int a3, _DWORD *a4)
{
  void *v5; // eax
  int (__stdcall ***v6)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD, _DWORD *); // esi
  int v8; // edi

  if ( !a4 ) /*0x6bf518*/
    return -2147024809; /*0x6bf51b*/
  *a4 = 0; /*0x6bf528*/
  if ( a2 ) /*0x6bf530*/
    return -2147221232; /*0x6bf533*/
  v5 = __2_YAPAXI_Z(0x100u); /*0x6bf541*/
  if ( !v5 ) /*0x6bf54b*/
    return -2147024882; /*0x6bf54b*/
  v6 = (int (__stdcall ***)(_DWORD, int, _DWORD *))SuperWeaponTypeClass::SuperWeaponTypeClass((int)v5, 0); /*0x6bf551*/
  v7 = v6; /*0x6bf556*/
  if ( !v6 ) /*0x6bf55a*/
    return -2147024882; /*0x6bf55d*/
  v8 = (**v6)(v6, a3, a4); /*0x6bf571*/
  if ( v8 < 0 ) /*0x6bf575*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf57d*/
  return v8; /*0x6bf51a*/
}


// ==== 0x006BF590  _TClassFactory_VSuperWeaponTypeClass::GetSize  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __stdcall VectorClass_K_32_::_vt04(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6bf59a*/
  if ( a2 ) /*0x6bf59d*/
    v3 = v2 + 1; /*0x6bf59f*/
  else
    v3 = v2 - 1; /*0x6bf5a8*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6bf5a0*/
  return 0; /*0x6bf5a5*/
}


// ==== 0x006BF5C0  COMClassFactory::Construct  this=?$TClassFactory@VSuperClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_6::Construct(TClassFactory_VSuperClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bf5c2*/
  this->vfptr = &TClassFactory<SuperClass>::`vftable'; /*0x6bf5c9*/
  return &this->vfptr; /*0x6bf5cf*/
}


// ==== 0x006BF5D0  _TClassFactory_VSuperClass::QueryInterface  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __stdcall VectorClass_K_38_::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6bf5d7*/
    return -2147467261; /*0x6bf5d9*/
  *a3 = 0; /*0x6bf5f6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6bf612*/
    *a3 = a1; /*0x6bf616*/
  if ( !*a3 ) /*0x6bf618*/
    return -2147467262; /*0x6bf620*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6bf62c*/
  return 0; /*0x6bf5de*/
}


// ==== 0x006BF640  _TClassFactory_VSuperClass::AddRef  this=?$TClassFactory@VSuperClass@@  sig=csp ====
LONG __stdcall VectorClass_K_38_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x6bf64e*/
}


// ==== 0x006BF660  _TClassFactory_VSuperClass::Release  this=?$TClassFactory@VSuperClass@@  sig=csp ====
LONG __stdcall VectorClass_K_38_::_vt02(volatile LONG *Block)
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6bf670*/
  if ( !v1 ) /*0x6bf674*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf677*/
  return v1; /*0x6bf681*/
}


// ==== 0x006BF690  _TClassFactory_VSuperClass::ddtor  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __stdcall VectorClass_K_38_::_vt03(int a1, int a2, int a3, _DWORD *a4)
{
  void *v5; // eax
  int (__stdcall ***v6)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD, _DWORD *); // esi
  int v8; // edi

  if ( !a4 ) /*0x6bf698*/
    return -2147024809; /*0x6bf69b*/
  *a4 = 0; /*0x6bf6a8*/
  if ( a2 ) /*0x6bf6b0*/
    return -2147221232; /*0x6bf6b3*/
  v5 = __2_YAPAXI_Z(0x80u); /*0x6bf6c1*/
  if ( !v5 ) /*0x6bf6cb*/
    return -2147024882; /*0x6bf6cb*/
  v6 = (int (__stdcall ***)(_DWORD, int, _DWORD *))SuperClass::Constructor((int)v5); /*0x6bf6cf*/
  v7 = v6; /*0x6bf6d4*/
  if ( !v6 ) /*0x6bf6d8*/
    return -2147024882; /*0x6bf6db*/
  v8 = (**v6)(v6, a3, a4); /*0x6bf6ef*/
  if ( v8 < 0 ) /*0x6bf6f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf6fb*/
  return v8; /*0x6bf69a*/
}


// ==== 0x006BF710  _TClassFactory_VSuperClass::GetSize  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __stdcall VectorClass_K_38_::_vt04(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6bf71a*/
  if ( a2 ) /*0x6bf71d*/
    v3 = v2 + 1; /*0x6bf71f*/
  else
    v3 = v2 - 1; /*0x6bf728*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6bf720*/
  return 0; /*0x6bf725*/
}


// ==== 0x006BF740  COMClassFactory::Construct  this=?$TClassFactory@VTactical@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_7::Construct(TClassFactory_VTactical__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bf742*/
  this->vfptr = &TClassFactory<Tactical>::`vftable'; /*0x6bf749*/
  return &this->vfptr; /*0x6bf74f*/
}


// ==== 0x006BF750  _TClassFactory_VTactical::QueryInterface  this=?$TClassFactory@VTactical@@  sig=csp ====
int __stdcall VectorClass_K_44_::_vt00(int a1, const void *a2, _DWORD *a3)
{
  if ( !a3 ) /*0x6bf757*/
    return -2147467261; /*0x6bf759*/
  *a3 = 0; /*0x6bf776*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) || !memcmp(a2, &unk_7F7CA0, 0x10u) ) /*0x6bf792*/
    *a3 = a1; /*0x6bf796*/
  if ( !*a3 ) /*0x6bf798*/
    return -2147467262; /*0x6bf7a0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6bf7ac*/
  return 0; /*0x6bf75e*/
}


// ==== 0x006BF7C0  _TClassFactory_VTactical::AddRef  this=?$TClassFactory@VTactical@@  sig=csp ====
LONG __stdcall VectorClass_K_44_::_vt01(int a1)
{
  return InterlockedIncrement((volatile LONG *)(a1 + 4)); /*0x6bf7ce*/
}


// ==== 0x006BF7E0  _TClassFactory_VTactical::Release  this=?$TClassFactory@VTactical@@  sig=csp ====
LONG __stdcall VectorClass_K_44_::_vt02(volatile LONG *Block)
{
  LONG v1; // esi

  v1 = InterlockedDecrement(Block + 1); /*0x6bf7f0*/
  if ( !v1 ) /*0x6bf7f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf7f7*/
  return v1; /*0x6bf801*/
}


// ==== 0x006BF810  _TClassFactory_VTactical::ddtor  this=?$TClassFactory@VTactical@@  sig=csp ====
int __stdcall VectorClass_K_44_::_vt03(int a1, int a2, int a3, _DWORD *a4)
{
  void *v5; // eax
  int (__stdcall ***v6)(_DWORD, int, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD, _DWORD *); // esi
  int v8; // edi

  if ( !a4 ) /*0x6bf818*/
    return -2147024809; /*0x6bf81b*/
  *a4 = 0; /*0x6bf828*/
  if ( a2 ) /*0x6bf830*/
    return -2147221232; /*0x6bf833*/
  v5 = __2_YAPAXI_Z(0xE18u); /*0x6bf841*/
  if ( !v5 ) /*0x6bf84b*/
    return -2147024882; /*0x6bf84b*/
  v6 = (int (__stdcall ***)(_DWORD, int, _DWORD *))TacticalMap::Construct((int)v5); /*0x6bf84f*/
  v7 = v6; /*0x6bf854*/
  if ( !v6 ) /*0x6bf858*/
    return -2147024882; /*0x6bf85b*/
  v8 = (**v6)(v6, a3, a4); /*0x6bf86f*/
  if ( v8 < 0 ) /*0x6bf873*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf87b*/
  return v8; /*0x6bf81a*/
}


// ==== 0x006BF890  _TClassFactory_VTactical::GetSize  this=?$TClassFactory@VTactical@@  sig=csp ====
int __stdcall VectorClass_K_44_::_vt04(int a1, int a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 4); /*0x6bf89a*/
  if ( a2 ) /*0x6bf89d*/
    v3 = v2 + 1; /*0x6bf89f*/
  else
    v3 = v2 - 1; /*0x6bf8a8*/
  *(_DWORD *)(a1 + 4) = v3; /*0x6bf8a0*/
  return 0; /*0x6bf8a5*/
}


// ==== 0x006BF8C0  COMClassFactory::Construct  this=?$TClassFactory@VCellClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_8::Construct(TClassFactory_VCellClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bf8c2*/
  this->vfptr = &TClassFactory<CellClass>::`vftable'; /*0x6bf8c9*/
  return &this->vfptr; /*0x6bf8cf*/
}


// ==== 0x006BF8D0  _TClassFactory_VCellClass::CreateTClassFactory_CellClass  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CellClass(TClassFactory_VCellClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf8d7*/
    return -2147467261; /*0x6bf8d9*/
  *v4 = 0; /*0x6bf8f6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6bf912*/
    *v4 = v2; /*0x6bf916*/
  if ( !*v4 ) /*0x6bf918*/
    return -2147467262; /*0x6bf920*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6bf92c*/
  return 0; /*0x6bf8de*/
}


// ==== 0x006BF940  _TClassFactory_VCellClass::AddRef  this=?$TClassFactory@VCellClass@@  sig=csp ====
LONG __thiscall TClassFactory_CellClass::AddRef(TClassFactory_VCellClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf94e*/
}


// ==== 0x006BF960  _TClassFactory_VCellClass::GetClassName  this=?$TClassFactory@VCellClass@@  sig=csp ====
LONG __thiscall TClassFactory_CellClass::GetClassName(TClassFactory_VCellClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf970*/
  if ( !v1 ) /*0x6bf974*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf977*/
  return v1; /*0x6bf981*/
}


// ==== 0x006BF990  _TClassFactory_VCellClass::ddtor  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall TClassFactory_CellClass::ddtor(TClassFactory_VCellClass__ *this)
{
  _DWORD *v2; // eax
  CellClass *v6; // eax
  CellClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6bf998*/
    return -2147024809; /*0x6bf99b*/
  *v8 = 0; /*0x6bf9a8*/
  if ( arg4 ) /*0x6bf9b0*/
    return -2147221232; /*0x6bf9b3*/
  v2 = (_DWORD *)OperatorNew(0x148u); /*0x6bf9c1*/
  if ( !v2 ) /*0x6bf9cb*/
    return -2147024882; /*0x6bf9cb*/
  v6 = (CellClass *)CellClass::Construct(v2); /*0x6bf9cf*/
  v7 = v6; /*0x6bf9d4*/
  if ( !v6 ) /*0x6bf9d8*/
    return -2147024882; /*0x6bf9db*/
  v5 = (*(int (__stdcall **)(CellClass *, int, _DWORD *))v6->mapCoords[0])(v6, arg8, v8); /*0x6bf9ef*/
  if ( v5 < 0 ) /*0x6bf9f3*/
    (*(void (__thiscall **)(CellClass *, int))(v7->mapCoords[0] + 32))(v7, 1); /*0x6bf9fb*/
  return v5; /*0x6bf99a*/
}


// ==== 0x006BFA10  _TClassFactory_VCellClass::GetSize  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall TClassFactory_CellClass::GetSize(TClassFactory_VCellClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6bfa1a*/
  if ( v5 ) /*0x6bfa1d*/
    v2 = v1 + 1; /*0x6bfa1f*/
  else
    v2 = v1 - 1; /*0x6bfa28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6bfa20*/
  return 0; /*0x6bfa25*/
}


// ==== 0x006BFA40  COMClassFactory::Construct  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_9::Construct(TClassFactory_VEMPulseClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bfa42*/
  this->vfptr = &TClassFactory<EMPulseClass>::`vftable'; /*0x6bfa49*/
  return &this->vfptr; /*0x6bfa4f*/
}


// ==== 0x006BFA50  _TClassFactory_VEMPulseClass::CreateTClassFactory_EMPulseClass  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall CreateTClassFactory_EMPulseClass(TClassFactory_VEMPulseClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfa57*/
    return -2147467261; /*0x6bfa59*/
  *v4 = 0; /*0x6bfa76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6bfa92*/
    *v4 = v2; /*0x6bfa96*/
  if ( !*v4 ) /*0x6bfa98*/
    return -2147467262; /*0x6bfaa0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6bfaac*/
  return 0; /*0x6bfa5e*/
}


// ==== 0x006BFAC0  _TClassFactory_VEMPulseClass::AddRef  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
LONG __thiscall TClassFactory_EMPulseClass::AddRef(TClassFactory_VEMPulseClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bface*/
}


// ==== 0x006BFAE0  _TClassFactory_VEMPulseClass::GetClassName  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
LONG __thiscall TClassFactory_EMPulseClass::GetClassName(TClassFactory_VEMPulseClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfaf0*/
  if ( !v1 ) /*0x6bfaf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfaf7*/
  return v1; /*0x6bfb01*/
}


// ==== 0x006BFB10  _TClassFactory_VEMPulseClass::ddtor  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall TClassFactory_EMPulseClass::ddtor(TClassFactory_VEMPulseClass__ *this)
{
  int v2; // eax
  EMPulseClass *v6; // eax
  EMPulseClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6bfb18*/
    return -2147024809; /*0x6bfb1b*/
  *v8 = 0; /*0x6bfb28*/
  if ( arg4 ) /*0x6bfb30*/
    return -2147221232; /*0x6bfb33*/
  v2 = OperatorNew(0x34u); /*0x6bfb3e*/
  if ( !v2 ) /*0x6bfb48*/
    return -2147024882; /*0x6bfb48*/
  v6 = (EMPulseClass *)Helper_4C5370(v2); /*0x6bfb4c*/
  v7 = v6; /*0x6bfb51*/
  if ( !v6 ) /*0x6bfb55*/
    return -2147024882; /*0x6bfb58*/
  v5 = (**(int (__stdcall ***)(EMPulseClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6bfb6c*/
  if ( v5 < 0 ) /*0x6bfb70*/
    (*(void (__thiscall **)(EMPulseClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6bfb78*/
  return v5; /*0x6bfb1a*/
}


// ==== 0x006BFB90  _TClassFactory_VEMPulseClass::GetSize  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall TClassFactory_EMPulseClass::GetSize(TClassFactory_VEMPulseClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6bfb9a*/
  if ( v5 ) /*0x6bfb9d*/
    v2 = v1 + 1; /*0x6bfb9f*/
  else
    v2 = v1 - 1; /*0x6bfba8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6bfba0*/
  return 0; /*0x6bfba5*/
}


// ==== 0x006BFBC0  COMClassFactory::Construct  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_10::Construct(TClassFactory_VLightSourceClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bfbc2*/
  this->vfptr = &TClassFactory<LightSourceClass>::`vftable'; /*0x6bfbc9*/
  return &this->vfptr; /*0x6bfbcf*/
}


// ==== 0x006BFBD0  _TClassFactory_VLightSourceClass::CreateTClassFactory_LightSourceClass  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall CreateTClassFactory_LightSourceClass(TClassFactory_VLightSourceClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfbd7*/
    return -2147467261; /*0x6bfbd9*/
  *v4 = 0; /*0x6bfbf6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6bfc12*/
    *v4 = v2; /*0x6bfc16*/
  if ( !*v4 ) /*0x6bfc18*/
    return -2147467262; /*0x6bfc20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6bfc2c*/
  return 0; /*0x6bfbde*/
}


// ==== 0x006BFC40  _TClassFactory_VLightSourceClass::AddRef  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
LONG __thiscall TClassFactory_LightSourceClass::AddRef(TClassFactory_VLightSourceClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfc4e*/
}


// ==== 0x006BFC60  _TClassFactory_VLightSourceClass::GetClassName  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
LONG __thiscall TClassFactory_LightSourceClass::GetClassName(TClassFactory_VLightSourceClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfc70*/
  if ( !v1 ) /*0x6bfc74*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfc77*/
  return v1; /*0x6bfc81*/
}


// ==== 0x006BFC90  _TClassFactory_VLightSourceClass::ddtor  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall TClassFactory_LightSourceClass::ddtor(TClassFactory_VLightSourceClass__ *this)
{
  int v2; // eax
  LightSourceClass *v6; // eax
  LightSourceClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6bfc98*/
    return -2147024809; /*0x6bfc9b*/
  *v8 = 0; /*0x6bfca8*/
  if ( arg4 ) /*0x6bfcb0*/
    return -2147221232; /*0x6bfcb3*/
  v2 = OperatorNew(0x4Cu); /*0x6bfcbe*/
  if ( !v2 ) /*0x6bfcc8*/
    return -2147024882; /*0x6bfcc8*/
  v6 = (LightSourceClass *)LightSourceClass::Constructor(v2); /*0x6bfccc*/
  v7 = v6; /*0x6bfcd1*/
  if ( !v6 ) /*0x6bfcd5*/
    return -2147024882; /*0x6bfcd8*/
  v5 = (**(int (__stdcall ***)(LightSourceClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6bfcec*/
  if ( v5 < 0 ) /*0x6bfcf0*/
    (*(void (__thiscall **)(LightSourceClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6bfcf8*/
  return v5; /*0x6bfc9a*/
}


// ==== 0x006BFD10  _TClassFactory_VLightSourceClass::GetSize  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall TClassFactory_LightSourceClass::GetSize(TClassFactory_VLightSourceClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6bfd1a*/
  if ( v5 ) /*0x6bfd1d*/
    v2 = v1 + 1; /*0x6bfd1f*/
  else
    v2 = v1 - 1; /*0x6bfd28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6bfd20*/
  return 0; /*0x6bfd25*/
}


// ==== 0x006BFD40  ObjectClass::WinMain_Helper_6BFD40  this=?$TClassFactory@VSideClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6BFD40(TClassFactory_VSideClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bfd42*/
  this->vfptr = &TClassFactory<SideClass>::`vftable'; /*0x6bfd49*/
  return &this->vfptr; /*0x6bfd4f*/
}


// ==== 0x006BFD50  _TClassFactory_VSideClass::CreateTClassFactory_SideClass  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SideClass(TClassFactory_VSideClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfd57*/
    return -2147467261; /*0x6bfd59*/
  *v4 = 0; /*0x6bfd76*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6bfd92*/
    *v4 = v2; /*0x6bfd96*/
  if ( !*v4 ) /*0x6bfd98*/
    return -2147467262; /*0x6bfda0*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6bfdac*/
  return 0; /*0x6bfd5e*/
}


// ==== 0x006BFDC0  _TClassFactory_VSideClass::AddRef  this=?$TClassFactory@VSideClass@@  sig=csp ====
LONG __thiscall TClassFactory_SideClass::AddRef(TClassFactory_VSideClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfdce*/
}


// ==== 0x006BFDE0  _TClassFactory_VSideClass::GetClassName  this=?$TClassFactory@VSideClass@@  sig=csp ====
LONG __thiscall TClassFactory_SideClass::GetClassName(TClassFactory_VSideClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfdf0*/
  if ( !v1 ) /*0x6bfdf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfdf7*/
  return v1; /*0x6bfe01*/
}


// ==== 0x006BFE10  _TClassFactory_VSideClass::ddtor  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall TClassFactory_SideClass::ddtor(TClassFactory_VSideClass__ *this)
{
  _DWORD *v2; // eax
  SideClass *v6; // eax
  SideClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6bfe18*/
    return -2147024809; /*0x6bfe1b*/
  *v8 = 0; /*0x6bfe28*/
  if ( arg4 ) /*0x6bfe30*/
    return -2147221232; /*0x6bfe33*/
  v2 = (_DWORD *)OperatorNew(0xB4u); /*0x6bfe41*/
  if ( !v2 ) /*0x6bfe4b*/
    return -2147024882; /*0x6bfe4b*/
  v6 = (SideClass *)SideClass::Construct(v2, 0); /*0x6bfe51*/
  v7 = v6; /*0x6bfe56*/
  if ( !v6 ) /*0x6bfe5a*/
    return -2147024882; /*0x6bfe5d*/
  v5 = (**(int (__stdcall ***)(SideClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6bfe71*/
  if ( v5 < 0 ) /*0x6bfe75*/
    (*(void (__thiscall **)(SideClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6bfe7d*/
  return v5; /*0x6bfe1a*/
}


// ==== 0x006BFE90  _TClassFactory_VSideClass::GetSize  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall TClassFactory_SideClass::GetSize(TClassFactory_VSideClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6bfe9a*/
  if ( v5 ) /*0x6bfe9d*/
    v2 = v1 + 1; /*0x6bfe9f*/
  else
    v2 = v1 - 1; /*0x6bfea8*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6bfea0*/
  return 0; /*0x6bfea5*/
}


// ==== 0x006BFEC0  ObjectClass::WinMain_Helper_6BFEC0  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6BFEC0(TClassFactory_VTiberiumClass__ *this)
{
  *((_DWORD *)this + 1) = 0; /*0x6bfec2*/
  this->vfptr = &TClassFactory<TiberiumClass>::`vftable'; /*0x6bfec9*/
  return &this->vfptr; /*0x6bfecf*/
}


// ==== 0x006BFED0  _TClassFactory_VTiberiumClass::CreateTClassFactory_TiberiumClass  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TiberiumClass(TClassFactory_VTiberiumClass__ *this)
{
  int v2; // [esp+8h] [ebp+4h]
  const void *v3; // [esp+Ch] [ebp+8h]
  _DWORD *v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfed7*/
    return -2147467261; /*0x6bfed9*/
  *v4 = 0; /*0x6bfef6*/
  if ( !memcmp(v3, &IID_IUnknown, 0x10u) || !memcmp(v3, &unk_7F7CA0, 0x10u) ) /*0x6bff12*/
    *v4 = v2; /*0x6bff16*/
  if ( !*v4 ) /*0x6bff18*/
    return -2147467262; /*0x6bff20*/
  (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 4))(v2); /*0x6bff2c*/
  return 0; /*0x6bfede*/
}


// ==== 0x006BFF40  _TClassFactory_VTiberiumClass::AddRef  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
LONG __thiscall TClassFactory_TiberiumClass::AddRef(TClassFactory_VTiberiumClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bff4e*/
}


// ==== 0x006BFF60  _TClassFactory_VTiberiumClass::GetClassName  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
LONG __thiscall TClassFactory_TiberiumClass::GetClassName(TClassFactory_VTiberiumClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bff70*/
  if ( !v1 ) /*0x6bff74*/
    __3_YAXPAX_Z((void *)Block); /*0x6bff77*/
  return v1; /*0x6bff81*/
}


// ==== 0x006BFF90  _TClassFactory_VTiberiumClass::ddtor  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall TClassFactory_TiberiumClass::ddtor(TClassFactory_VTiberiumClass__ *this)
{
  _DWORD *v2; // eax
  TiberiumClass *v6; // eax
  TiberiumClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6bff98*/
    return -2147024809; /*0x6bff9b*/
  *v8 = 0; /*0x6bffa8*/
  if ( arg4 ) /*0x6bffb0*/
    return -2147221232; /*0x6bffb3*/
  v2 = (_DWORD *)OperatorNew(0x128u); /*0x6bffc1*/
  if ( !v2 ) /*0x6bffcb*/
    return -2147024882; /*0x6bffcb*/
  v6 = (TiberiumClass *)TiberiumClass::TiberiumClass(v2, 0); /*0x6bffd1*/
  v7 = v6; /*0x6bffd6*/
  if ( !v6 ) /*0x6bffda*/
    return -2147024882; /*0x6bffdd*/
  v5 = (**(int (__stdcall ***)(TiberiumClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6bfff1*/
  if ( v5 < 0 ) /*0x6bfff5*/
    (*(void (__thiscall **)(TiberiumClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6bfffd*/
  return v5; /*0x6bff9a*/
}

