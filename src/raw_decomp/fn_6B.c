// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x006B0300  BuildingClass::FindPlacementCells2  this=TOP  sig=csp ====
_DWORD *__thiscall BuildingClass::FindPlacementCells2(BuildingClass *this, _DWORD *a2, int a3)
{
  int occupant; // ecx
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

  occupant = this->?; /*0x6b0308*/
  if ( occupant && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 6 )
  {
    v5 = this->?; /*0x6b0319*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(this->?) == 6 ? v5 : 0;
    else
      v6 = 0; /*0x6b0320*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b033c*/
    v8 = this->?; /*0x6b0341*/
    v9 = FoundationWidth; /*0x6b0344*/
    if ( v8 )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(this->?); /*0x6b0360*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v11 == 6 ? v8 + 0x520 : 1312), 0);
    }
    else
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(MEMORY[0x520], 0); /*0x6b0358*/
    }
  }
  else if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->? + 132))(this->?) + 1028) ) /*0x6b038a*/
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this->? + 132))(this->?); /*0x6b0399*/
    v9 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v12 + 1028)); /*0x6b03af*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this->? + 132))(this->?); /*0x6b03b3*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v13 + 1028), 0); /*0x6b03c4*/
  }
  else
  {
    v9 = 1; /*0x6b03c8*/
    FoundationHeight = 1; /*0x6b03cd*/
  }
  v14 = (__int16 *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->? + 440))(this->?, &v19); /*0x6b03f4*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v14, 0, 0); /*0x6b0400*/
  v16 = *LayerClass::Pathfinding_Find( /*0x6b041c*/
           (Type *)&stru_87F5F0.__pad_58[416],
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
  if ( v16 == dword_B0B5B8 ) /*0x6b042f*/
  {
    *a2 = dword_B0B5B8; /*0x6b0441*/
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



// ==== 0x006B0490  ObjectClass::Event_Process_6B0490  this=TOP  sig=csp ====
int *__thiscall Event_Process_6B0490(ObjectClass *this)
{
  int i; // esi
  int *result; // eax
  int v4; // ecx

  for ( i = this->ambientSoundController[3] - 1; i >= 0; --i ) /*0x6b0498*/
  {
    result = *(int **)(this->ambientSoundController[0] + 4 * i); /*0x6b049d*/
    v4 = *result; /*0x6b04a3*/
    if ( result[1] != 6 ) /*0x6b04a8*/
    {
      if ( v4 ) /*0x6b04ac*/
        result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b04b0*/
    }
  }
  return result; /*0x6b04b9*/
}



// ==== 0x006B04C0  FactoryClass::PlaceExitUnits  this=TOP  sig=csp ====
int __thiscall FactoryClass::PlaceExitUnits(FactoryClass *this)
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
  __int16 v25[2]; // [esp+28h] [ebp-3Ch] BYREF
  int v26; // [esp+2Ch] [ebp-38h] BYREF
  int v27; // [esp+30h] [ebp-34h] BYREF
  int v28; // [esp+34h] [ebp-30h] BYREF
  int v29; // [esp+38h] [ebp-2Ch]
  int v30; // [esp+3Ch] [ebp-28h]
  char v31[12]; // [esp+40h] [ebp-24h] BYREF
  int v32[3]; // [esp+4Ch] [ebp-18h] BYREF
  char v33[12]; // [esp+58h] [ebp-Ch] BYREF

  result = *(_DWORD *)&this->__pad_42[6] - 1; /*0x6b04c9*/
  for ( i = result; i >= 0; --i )
  {
    v3 = (int **)*((_DWORD *)&this->object->RadioClass + result); /*0x6b04da*/
    v4 = *v3; /*0x6b04e0*/
    v24 = *v3; /*0x6b04e5*/
    if ( !v3[1] )
    {
      v5 = this->production[0]; /*0x6b04ef*/
      if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 )
      {
        v6 = this->production[0]; /*0x6b0504*/
        if ( v6 )
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(this->production[0]) == 6 ? v6 : 0;
        else
          v7 = 0; /*0x6b050b*/
        v8 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v7 + 1312)) - 1; /*0x6b0536*/
        v9 = BuildingTypeClass::GetFoundationHeight(*(int **)(v7 + 1312), 0) / 2; /*0x6b054d*/
        v10 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->production[0] + 440))( /*0x6b054f*/
                         this->production[0],
                         &v26);
        v11 = v9 + v10[1]; /*0x6b055f*/
        v4 = v24; /*0x6b0562*/
        LOWORD(v21) = v8 + *v10; /*0x6b0566*/
        HIWORD(v21) = v11; /*0x6b056b*/
        v12 = v21; /*0x6b0570*/
        v22 = v11; /*0x6b0574*/
      }
      else
      {
        v12 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->production[0] + 440))( /*0x6b058a*/
                           this->production[0],
                           &v27);
        v22 = HIWORD(v12); /*0x6b058c*/
      }
      *(_DWORD *)v25 = v12; /*0x6b0597*/
      if ( __PAIR32__(v22, v12) != dword_B0B5B8 ) /*0x6b059b*/
      {
        v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6b05b9*/
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
        if ( (v16 != dword_B0B5D8 || v17 != dword_B0B5DC || v18 != dword_B0B5E0) /*0x6b063a*/
          && (v16 != dword_B0B618 || v17 != dword_B0B61C || v18 != dword_B0B620) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(*v4 + 216))(v4, &v28, 0) ) /*0x6b0647*/
          {
            v19 = *v4; /*0x6b0654*/
            v20 = (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)this->production[0] + 72))( /*0x6b0661*/
                    this->production[0],
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
_DWORD *__thiscall BuildingClass::GetRallyPointCoord(BuildingClass *this, _DWORD *a2)
{
  int occupant; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edi
  int v7; // esi
  _WORD *v8; // eax
  int v10; // [esp+4h] [ebp-8h]
  _BYTE v11[4]; // [esp+8h] [ebp-4h] BYREF

  occupant = this->?; /*0x6b0696*/
  if ( occupant && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 6 )
  {
    v4 = this->?; /*0x6b06ad*/
    if ( v4 )
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(this->?) == 6 ? v4 : 0;
    else
      v5 = 0; /*0x6b06b4*/
    v6 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v5 + 1312)) - 1; /*0x6b06df*/
    v7 = BuildingTypeClass::GetFoundationHeight(*(int **)(v5 + 1312), 0) / 2; /*0x6b06f6*/
    v8 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v11); /*0x6b06f8*/
    HIWORD(v10) = v7 + v8[1]; /*0x6b0708*/
    LOWORD(v10) = *v8 + v6; /*0x6b0711*/
    *a2 = v10; /*0x6b071c*/
    return a2; /*0x6b070d*/
  }
  else
  {
    *a2 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v11); /*0x6b073c*/
    return a2; /*0x6b0737*/
  }
}



// ==== 0x006B0750  FactoryClass::GetBridgeCell  this=FactoryClass  sig=csp ====
_DWORD *__thiscall FactoryClass::GetBridgeCell(FactoryClass *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  __int16 FoundationWidth; // ax
  int *v8; // ecx
  int FoundationHeight; // eax
  int v10; // ecx
  CellStruct *v11; // eax
  int v12; // eax
  Cell *v13; // eax
  bool v14; // zf
  _DWORD *result; // eax
  int v16; // [esp+4h] [ebp-18h] BYREF
  __int16 v17[2]; // [esp+8h] [ebp-14h] BYREF
  int v18; // [esp+Ch] [ebp-10h] BYREF
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h] BYREF

  v3 = this->production[0]; /*0x6b0756*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6 )
  {
    v4 = this->production[0]; /*0x6b076f*/
    if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 )
    {
      v5 = this->production[0]; /*0x6b0781*/
      if ( v5 )
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 ? v5 : 0;
      else
        v6 = 0; /*0x6b0789*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b07a7*/
      v8 = *(int **)(v6 + 1312); /*0x6b07ac*/
      LOWORD(v16) = FoundationWidth - 1; /*0x6b07b5*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x6b07ba*/
      v10 = this->production[0]; /*0x6b07c0*/
      HIWORD(v16) = FoundationHeight / 2; /*0x6b07c7*/
      v11 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 440))(v10, &v19); /*0x6b07dd*/
      v12 = *CellStruct::Add(v11, &v18, &v16); /*0x6b07ea*/
      v20 = v12; /*0x6b07ed*/
    }
    else
    {
      v12 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->production[0] + 440))( /*0x6b0804*/
                         this->production[0],
                         &v20);
      v20 = v12; /*0x6b0806*/
    }
    LOWORD(v16) = v12; /*0x6b080e*/
    HIWORD(v16) = HIWORD(v20) - 1; /*0x6b0818*/
    *(_DWORD *)v17 = v16; /*0x6b0827*/
    v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x6b082b*/
    v14 = Cell::IsBridge(v13) == (_DWORD *)this->production[0]; /*0x6b083a*/
    result = a2; /*0x6b083c*/
    if ( v14 ) /*0x6b0840*/
      *a2 = *(_DWORD *)v17; /*0x6b0847*/
    else
      *a2 = dword_B0B5B8; /*0x6b0856*/
  }
  else
  {
    *a2 = dword_B0B5B8; /*0x6b0869*/
    return a2; /*0x6b085e*/
  }
  return result; /*0x6b0846*/
}



// ==== 0x006B0880  BuildingClass::CheckBridge  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::CheckBridge(BuildingClass *this, int a2, void *a3)
{
  int occupant; // ecx
  int v5; // ebx
  int v6; // esi
  __int16 FoundationWidth; // ax
  int *v8; // ecx
  int FoundationHeight; // eax
  int v10; // ecx
  CellStruct *v11; // eax
  int v12; // eax
  int v13; // ecx
  Cell *v14; // eax
  bool v15; // zf
  int v16; // eax
  int v18; // eax
  _DWORD **i; // ecx
  __int16 v20[2]; // [esp+8h] [ebp-18h] BYREF
  __int16 v21[2]; // [esp+Ch] [ebp-14h] BYREF
  int v22; // [esp+10h] [ebp-10h] BYREF
  __int16 v23[2]; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+18h] [ebp-8h] BYREF
  int v25; // [esp+1Ch] [ebp-4h] BYREF

  occupant = this->?; /*0x6b0887*/
  if ( occupant && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 6 )
  {
    v5 = this->?; /*0x6b0899*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(this->?) == 6 ? v5 : 0;
    else
      v6 = 0; /*0x6b08a0*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b08be*/
    v8 = *(int **)(v6 + 1312); /*0x6b08c3*/
    v20[0] = FoundationWidth - 1; /*0x6b08cc*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x6b08d1*/
    v10 = this->?; /*0x6b08d7*/
    v20[1] = FoundationHeight / 2; /*0x6b08de*/
    v11 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 440))(v10, &v24); /*0x6b08f4*/
    v12 = *CellStruct::Add(v11, &v22, v20); /*0x6b0901*/
  }
  else
  {
    v12 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->? + 440))(this->?, &v25); /*0x6b0916*/
  }
  v13 = this->?; /*0x6b0918*/
  *(_DWORD *)v23 = v12; /*0x6b091b*/
  if ( !v13 /*0x6b0985*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 6
    || (*(_DWORD *)v20 = *BuildingClass::GetRallyPointCoord(this, &v25),
        v22 = -65536,
        *(_DWORD *)v20 = *CellStruct::Add((CellStruct *)v20, &v24, &v22),
        v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20),
        v15 = Cell::IsBridge(v14) == (_DWORD *)this->?,
        v16 = *(_DWORD *)v20,
        !v15) )
  {
    v16 = dword_B0B5B8; /*0x6b0987*/
  }
  *(_DWORD *)v21 = v16; /*0x6b098c*/
  if ( a3 != CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) /*0x6b09d4*/
    && (*(_DWORD *)v21 == dword_B0B5B8 || a3 != CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21)) )
  {
    return 0; /*0x6b09d7*/
  }
  v18 = this->?[3] - 1; /*0x6b09e3*/
  if ( v18 < 0 ) /*0x6b09e4*/
    return 0; /*0x6b09e4*/
  for ( i = (_DWORD **)(this->?[0] + 4 * v18); **i != a2; --i ) /*0x6b09ed*/
  {
    if ( --v18 < 0 ) /*0x6b09fc*/
      return 0; /*0x6b0a05*/
  }
  return *i != 0; /*0x6b0a17*/
}



// ==== 0x006B0A20  SlaveManagerClass::LostSlave  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::LostSlave(SlaveManagerClass *this, int a2)
{
  int result; // eax
  int slaveVectorCount; // esi
  _DWORD **i; // edx
  _DWORD *v5; // eax
  int slaveType; // ecx
  int v7; // [esp+10h] [ebp-8h]

  result = *(_DWORD *)this->__pad_48 - 1; /*0x6b0a26*/
  if ( result >= 0 ) /*0x6b0a2a*/
  {
    slaveVectorCount = this->slaveVectorCount; /*0x6b0a2c*/
    for ( i = (_DWORD **)(slaveVectorCount + 4 * result); **i != a2; --i ) /*0x6b0a33*/
    {
      if ( --result < 0 ) /*0x6b0a42*/
        return result; /*0x6b0a42*/
    }
    v5 = *(_DWORD **)(slaveVectorCount + 4 * result); /*0x6b0a4d*/
    if ( *v5 ) /*0x6b0a50*/
      *(_DWORD *)(*v5 + 732) = 0; /*0x6b0a56*/
    *v5 = 0; /*0x6b0a60*/
    v5[1] = 6; /*0x6b0a66*/
    slaveType = this->slaveType; /*0x6b0a73*/
    result = (int)(v5 + 2); /*0x6b0a76*/
    *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0a79*/
    *(_DWORD *)(result + 4) = v7; /*0x6b0a7f*/
    *(_DWORD *)(result + 8) = slaveType; /*0x6b0a82*/
  }
  return result; /*0x6b0a44*/
}



// ==== 0x006B0A90  ObjectClass::method_6B0A90  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6B0A90(ObjectClass *this, int a2)
{
  _DWORD *v2; // eax
  ObjectClass *nextObject; // ecx
  _DWORD *result; // eax
  int v5; // [esp+4h] [ebp-8h]

  v2 = *(_DWORD **)(this->ambientSoundController[0] + 4 * a2); /*0x6b0a9a*/
  if ( *v2 ) /*0x6b0a9d*/
    *(_DWORD *)(*v2 + 732) = 0; /*0x6b0aa3*/
  *v2 = 0; /*0x6b0aad*/
  v2[1] = 6; /*0x6b0ab3*/
  nextObject = this->nextObject; /*0x6b0ac0*/
  result = v2 + 2; /*0x6b0ac3*/
  *result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0ac6*/
  result[1] = v5; /*0x6b0acc*/
  result[2] = nextObject; /*0x6b0acf*/
  return result; /*0x6b0ad2*/
}



// ==== 0x006B0AE0  TechnoClass::MutateAll  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::MutateAll(TechnoClass *this, int a2, int a3)
{
  TechnoClass *v3; // ebx
  int result; // eax
  int nextArrayIndex; // esi
  int v6; // ecx
  char *vtable3; // edx
  int *v8; // edi
  int v9; // ebp
  int v10; // ebx
  int *v11; // esi
  char v12; // al
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // edi
  int v16; // [esp+18h] [ebp-14h]
  _DWORD v18[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = this; /*0x6b0ae4*/
  result = this->?; /*0x6b0aea*/
  if ( result ) /*0x6b0aef*/
  {
    nextArrayIndex = stru_A80220.?; /*0x6b0af7*/
    v16 = 0; /*0x6b0b03*/
    result = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x6b0b0b*/
    v6 = 0; /*0x6b0b10*/
    if ( nextArrayIndex > 0 ) /*0x6b0b14*/
    {
      vtable3 = (char *)stru_A80220.?; /*0x6b0b1c*/
      while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)vtable3 + 52) + 188) != result ) /*0x6b0b29*/
      {
        ++v6; /*0x6b0b2b*/
        vtable3 += 4; /*0x6b0b2c*/
        if ( v6 >= nextArrayIndex ) /*0x6b0b31*/
          goto LABEL_8; /*0x6b0b31*/
      }
      result = *((_DWORD *)stru_A80220.? + v6); /*0x6b0b35*/
      v16 = result; /*0x6b0b38*/
    }
LABEL_8:
    v8 = 0; /*0x6b0b3c*/
    v9 = v3->?[3] - 1; /*0x6b0b41*/
    if ( v9 >= 0 ) /*0x6b0b42*/
    {
      v10 = a2; /*0x6b0b48*/
      while ( 1 ) /*0x6b0b53*/
      {
        result = *(_DWORD *)(this->?[0] + 4 * v9); /*0x6b0b53*/
        v11 = *(int **)result; /*0x6b0b56*/
        if ( *(_DWORD *)result && byte_A8E9A0 ) /*0x6b0b67*/
        {
          v12 = *((_BYTE *)v11 + 129); /*0x6b0b6d*/
          v11[183] = 0; /*0x6b0b73*/
          if ( v12 ) /*0x6b0b7f*/
          {
            (*(void (__thiscall **)(int *, int))(*v11 + 224))(v11, v10); /*0x6b0b86*/
            result = (*(int (__thiscall **)(int *))(*v11 + 248))(v11); /*0x6b0b90*/
          }
          else
          {
            if ( v10 ) /*0x6b0b9a*/
            {
              v13 = *(_DWORD *)(v10 + 540); /*0x6b0b9c*/
LABEL_18:
              (*(void (__thiscall **)(int *, int, int))(*v11 + 980))(v11, v13, 1); /*0x6b0bb4*/
              (*(void (__thiscall **)(int *))(*v11 + 976))(v11); /*0x6b0bc5*/
              result = (*(int (__thiscall **)(int *, int))(*v11 + 904))(v11, 1); /*0x6b0bd1*/
              if ( !v8 ) /*0x6b0bd9*/
                v8 = v11; /*0x6b0bdb*/
              goto LABEL_21; /*0x6b0bdd*/
            }
            v13 = a3; /*0x6b0ba4*/
            if ( a3 ) /*0x6b0baa*/
              goto LABEL_18; /*0x6b0baa*/
            v13 = v16; /*0x6b0bac*/
            if ( v16 ) /*0x6b0bb2*/
              goto LABEL_18; /*0x6b0bb2*/
            v14 = *v11; /*0x6b0be2*/
            a2 = v11[27]; /*0x6b0be4*/
            result = (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v14 + 364))( /*0x6b0c05*/
                       v11,
                       &a2,
                       0,
                       *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                       0,
                       0,
                       0,
                       0);
          }
        }
LABEL_21:
        if ( --v9 < 0 ) /*0x6b0c0c*/
        {
          v3 = this; /*0x6b0c12*/
          break; /*0x6b0c12*/
        }
      }
    }
    LOBYTE(result) = byte_A8E9A0; /*0x6b0c16*/
    if ( byte_A8E9A0 ) /*0x6b0c1d*/
    {
      if ( v8 ) /*0x6b0c21*/
      {
        result = dword_A8E7AC; /*0x6b0c23*/
        if ( !dword_A8E7AC ) /*0x6b0c2a*/
        {
          result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6b0c2c*/
          if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 564) != -1 ) /*0x6b0c38*/
          {
            v15 = v8 + 39; /*0x6b0c3a*/
            v18[0] = *v15; /*0x6b0c44*/
            v18[1] = v15[1]; /*0x6b0c4b*/
            v18[2] = v15[2]; /*0x6b0c56*/
            result = (int)StartAudioControllerAt( /*0x6b0c60*/
                            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 564),
                            v18,
                            0);
          }
        }
      }
    }
    v3->? = 0; /*0x6b0c67*/
  }
  return result; /*0x6b0c6f*/
}



// ==== 0x006B0C80  FactoryClass::ResetProductionTimers  this=FactoryClass  sig=csp ====
wchar_t *__thiscall FactoryClass::ResetProductionTimers(FactoryClass *this)
{
  wchar_t *result; // eax
  int i; // esi
  int v4; // ecx

  *(_DWORD *)&this->__pad_42[26] = 0; /*0x6b0c84*/
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6b0c8b*/
  this->balance = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0c90*/
  for ( i = *(_DWORD *)&this->__pad_42[6] - 1; i >= 0; --i ) /*0x6b0c97*/
  {
    result = (wchar_t *)*((_DWORD *)&this->object->RadioClass + i); /*0x6b0c9c*/
    v4 = *(_DWORD *)result; /*0x6b0ca2*/
    if ( *((_DWORD *)result + 1) != 6 ) /*0x6b0ca7*/
    {
      if ( v4 ) /*0x6b0cab*/
        result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b0caf*/
    }
  }
  return result; /*0x6b0cb8*/
}



// ==== 0x006B0CC0  BuildingClass::InitBuildLimit  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::InitBuildLimit(BuildingClass *this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = (int *)this->?[3]; /*0x6b0cc4*/
  if ( !result ) /*0x6b0cc9*/
  {
    this->?[3] = 1; /*0x6b0ccb*/
    this->?[4] = 0x7FFFFFFF; /*0x6b0cd2*/
    for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0cdd*/
    {
      result = *(int **)(this->?[0] + 4 * i); /*0x6b0ce2*/
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
int *__thiscall TechnoClass::RefreshDeployOccupierState(TechnoClass *this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = (int *)this->?[3]; /*0x6b0d14*/
  if ( !result ) /*0x6b0d19*/
  {
    this->?[3] = 4; /*0x6b0d1b*/
    this->?[4] = 0x7FFFFFFF; /*0x6b0d22*/
    for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0d2d*/
    {
      result = *(int **)(this->?[0] + 4 * i); /*0x6b0d32*/
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



// ==== 0x006B0D60  BuildingClass::RefreshOccupierCache  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::RefreshOccupierCache(BuildingClass *this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = (int *)this->?[3]; /*0x6b0d64*/
  if ( !result ) /*0x6b0d69*/
  {
    this->?[3] = 4; /*0x6b0d6b*/
    this->?[4] = 0x7FFFFFFF; /*0x6b0d72*/
    for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0d7d*/
    {
      result = *(int **)(this->?[0] + 4 * i); /*0x6b0d82*/
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



// ==== 0x006B0DB0  BuildingClass::ProcessEnterUnit  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::ProcessEnterUnit(BuildingClass *this)
{
  int occupant; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  _DWORD *result; // eax
  int v10; // edi
  void *v11; // eax
  int i; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // eax
  int *v17; // eax
  void *v18; // eax
  int j; // edi
  int v20; // ecx
  __int16 v21[2]; // [esp+Ch] [ebp-14h] BYREF
  int v22; // [esp+10h] [ebp-10h] BYREF
  _BYTE v23[12]; // [esp+14h] [ebp-Ch] BYREF

  occupant = this->?; /*0x6b0db8*/
  if ( occupant
    && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 1
    && ((v3 = this->?) != 0 ? (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(this->?) == 1 ? v3 : 0) : (v4 = 0),
        *(_DWORD *)(v4 + 1444)) )
  {
    v5 = this->?; /*0x6b0dfa*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(this->?) == 1 ? v5 : 0;
    else
      v6 = 0; /*0x6b0e01*/
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v6 + 1444) + 72))(*(_DWORD *)(v6 + 1444), v23); /*0x6b0e24*/
    v8 = (int *)CellStruct::Set((CellStruct *)&v22, *v7 / 256, v7[1] / 256); /*0x6b0e4c*/
    *(_DWORD *)v21 = *BuildingClass::FindPlacementCells2(this, &v22, *v8); /*0x6b0e69*/
    if ( *(_DWORD *)v21 == dword_B0B5B8 ) /*0x6b0e6d*/
    {
      this->?[3] = 0; /*0x6b0e7d*/
      this->?[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0e8a*/
      return (*(_DWORD *(__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->? + 488))(this->?, 5, 0); /*0x6b0e96*/
    }
    else
    {
      v10 = *(_DWORD *)this->?; /*0x6b0ead*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6b0eb4*/
      (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(this->?, v11, 1); /*0x6b0ebd*/
      result = (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->? + 488))(this->?, 2, 0); /*0x6b0ecc*/
      this->?[3] = 2; /*0x6b0ed2*/
      this->?[4] = 0x7FFFFFFF; /*0x6b0ed9*/
      for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0ee4*/
      {
        result = *(_DWORD **)(this->?[0] + 4 * i); /*0x6b0ef2*/
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
    v14 = this->?; /*0x6b0f14*/
    if ( v14 && (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 6 && (v15 = *(_DWORD *)(this->? + 536)) != 0 ) /*0x6b0f3c*/
    {
      v16 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v23); /*0x6b0f49*/
      v17 = (int *)CellStruct::Set((CellStruct *)&v22, *v16 / 256, v16[1] / 256); /*0x6b0f71*/
      result = (_DWORD *)*BuildingClass::FindPlacementCells2(this, &v22, *v17); /*0x6b0f85*/
      *(_DWORD *)v21 = result; /*0x6b0f8e*/
      if ( result != (_DWORD *)dword_B0B5B8 ) /*0x6b0f92*/
      {
        v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6b0fac*/
        result = (_DWORD *)TechnoClass::SetFocus((TechnoClass *)this->?, (int)v18); /*0x6b0fb5*/
        this->?[3] = 6; /*0x6b0fba*/
        this->?[4] = 0x7FFFFFFF; /*0x6b0fbd*/
        for ( j = this->?[3] - 1; j >= 0; --j ) /*0x6b0fc8*/
        {
          result = *(_DWORD **)(this->?[0] + 4 * j); /*0x6b0fcd*/
          v20 = *result; /*0x6b0fd3*/
          if ( result[1] != 6 && v20 ) /*0x6b0fdb*/
            result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 976))(v20); /*0x6b0fdf*/
        }
      }
    }
    else
    {
      result = (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->? + 488))(this->?, 5, 0); /*0x6b0ff8*/
      this->?[3] = 0; /*0x6b0ffe*/
      this->?[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b100b*/
    }
  }
  return result; /*0x6b0e9c*/
}



// ==== 0x006B1020  SlaveManagerClass::ShouldWakeUpNow  this=SlaveManagerClass  sig=csp ====
bool __thiscall SlaveManagerClass::ShouldWakeUpNow(SlaveManagerClass *this)
{
  TechnoClass *master; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  master = this->master; /*0x6b1024*/
  if ( !master || this->SlaveManagerClass_field_5C ) /*0x6b102f*/
    return 0; /*0x6b102f*/
  if ( !master->owner->currentPlayer ) /*0x6b1040*/
    return 1; /*0x6b104e*/
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))master->RadioClass + 111))(master) + 236) == 5 ) /*0x6b105e*/
    return 1; /*0x6b1064*/
  if ( this->SlaveManagerClass_field_60 + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6032) >= *(int *)&stru_A8EB00.?[416] ) /*0x6b107d*/
    return 0; /*0x6b107d*/
  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *, int, _DWORD))this->master->RadioClass + 206))( /*0x6b10ad*/
                    this->master,
                    &v4,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6016) / 256,
                    0);
  return v4 != dword_B0B5B8; /*0x6b10c6*/
}



// ==== 0x006B10F0  SlaveManagerClass::AssignTask  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::AssignTask(SlaveManagerClass *this, int a2)
{
  int result; // eax
  int i; // esi

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6b10fa*/
  result = Power::TimerProcess(this->SlaveManagerClass_field_5C); /*0x6b1105*/
  for ( i = *(_DWORD *)this->__pad_48 - 1; i >= 0; --i ) /*0x6b110e*/
    result = Power::TimerProcess(*(_DWORD *)(*(_DWORD *)(this->slaveVectorCount + 4 * i) + 4)); /*0x6b111c*/
  return result; /*0x6b1124*/
}



// ==== 0x006B1130  SlaveManagerClass::ddtor  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::ddtor(SlaveManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *a2 = 861581284; /*0x6b1146*/
  a2[1] = 299183526; /*0x6b114e*/
  a2[2] = 268444350; /*0x6b1157*/
  a2[3] = unk_7E987C; /*0x6b1160*/
  return 0; /*0x6b113d*/
}



// ==== 0x006B1170  SlaveManagerClass::LoadManager  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::LoadManager(SlaveManagerClass *this, int a2)
{
  int v2; // esi
  SlaveManagerClass *v3; // edi
  int Prefix_0; // ebx
  int v5; // ebp
  int *slaves; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int slaveVectorCapacity; // ecx
  int v11; // eax
  int v12; // eax
  int slaveVectorCount; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = a2; /*0x6b1174*/
  v3 = this; /*0x6b1179*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6b1184*/
  v5 = 0; /*0x6b1186*/
  if ( Prefix_0 >= 0 ) /*0x6b118a*/
  {
    if ( v3 ) /*0x6b1192*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&this); /*0x6b119b*/
      SlaveControlVector::Constructor((SlaveControlVector *)v3->slaves, 0, 0); /*0x6b11a7*/
      v3->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b11b0*/
      *(_DWORD *)&v3->__pad_48[4] = 10; /*0x6b11b6*/
      *(_DWORD *)v3->__pad_48 = 0; /*0x6b11bd*/
      Timer::Start((Timer *)&v3->__pad_48[8], 0); /*0x6b11c0*/
      v3->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6b11c5*/
      v3->? = &SlaveManagerClass::`vftable'; /*0x6b11cb*/
      v2 = a2; /*0x6b11d2*/
      v3->? = &SlaveManagerClass::`vftable'; /*0x6b11d6*/
      v3->? = &SlaveManagerClass::`vftable'; /*0x6b11dd*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v16, 4, 0); /*0x6b11f2*/
    if ( Prefix_0 >= 0 ) /*0x6b11f6*/
    {
      slaves = v3->slaves; /*0x6b11fc*/
      if ( v3 != (SlaveManagerClass *)-56 ) /*0x6b1201*/
      {
        SlaveControlVector::Constructor((SlaveControlVector *)v3->slaves, 0, 0); /*0x6b1207*/
        *slaves = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b120c*/
        *(_DWORD *)&v3->__pad_48[4] = 10; /*0x6b1212*/
        *(_DWORD *)v3->__pad_48 = 0; /*0x6b1219*/
      }
      v7 = v16; /*0x6b121c*/
      this = 0; /*0x6b1220*/
      if ( v16 <= 0 ) /*0x6b1226*/
      {
LABEL_20:
        v14 = 0; /*0x6b12b7*/
        if ( v7 > 0 ) /*0x6b12bb*/
        {
          do /*0x6b12d3*/
            ObjectPtr::RegisterForTracking( /*0x6b12c9*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v3->slaveVectorCount + 4 * v14++));
          while ( v14 < v16 ); /*0x6b12d3*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->master); /*0x6b12de*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->house); /*0x6b12ec*/
      }
      else
      {
        while ( 1 ) /*0x6b1232*/
        {
          v8 = __2_YAPAXI_Z(0x14u); /*0x6b1232*/
          if ( v8 ) /*0x6b123c*/
          {
            v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b123e*/
            *(_DWORD *)(v8 + 16) = 0; /*0x6b1244*/
            *(_DWORD *)(v8 + 8) = v9; /*0x6b1247*/
            v5 = v8; /*0x6b124a*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v5, 20, 0); /*0x6b125b*/
          if ( Prefix_0 < 0 ) /*0x6b125f*/
            break; /*0x6b125f*/
          slaveVectorCapacity = v3->slaveVectorCapacity; /*0x6b1265*/
          if ( *(_DWORD *)v3->__pad_48 < slaveVectorCapacity /*0x6b128a*/
            || (BYTE1(v3->creationFrame) || !slaveVectorCapacity)
            && (v11 = *(_DWORD *)&v3->__pad_48[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*slaves + 8))(
                 v3->slaves,
                 slaveVectorCapacity + v11,
                 0) )
          {
            v12 = *(_DWORD *)v3->__pad_48; /*0x6b1291*/
            slaveVectorCount = v3->slaveVectorCount; /*0x6b1294*/
            *(_DWORD *)v3->__pad_48 = v12 + 1; /*0x6b129a*/
            *(_DWORD *)(slaveVectorCount + 4 * v12) = v5; /*0x6b129d*/
          }
          v7 = v16; /*0x6b12a4*/
          this = (SlaveManagerClass *)((char *)this + 1); /*0x6b12ab*/
          if ( (int)this >= v16 ) /*0x6b12af*/
            goto LABEL_20; /*0x6b12af*/
          v5 = 0; /*0x6b122e*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b12f1*/
}



// ==== 0x006B1300  SlaveManagerClass::SaveManager  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::SaveManager(SlaveManagerClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6b1312*/
  if ( result >= 0 ) /*0x6b1319*/
  {
    v4 = *a2; /*0x6b131e*/
    a3 = *(_DWORD *)this->__pad_48; /*0x6b132a*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x6b132e*/
    if ( result >= 0 ) /*0x6b1333*/
    {
      for ( i = 0; i < a3; ++i ) /*0x6b133d*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))( /*0x6b134d*/
                   a2,
                   *(_DWORD *)(this->slaveVectorCount + 4 * i),
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
int SlaveManagerClass::StubReturn100(SlaveManagerClass *this)
{
  return 100; /*0x6b1375*/
}



// ==== 0x006B1380  SlaveManagerClass::StubReturn72  this=SlaveManagerClass  sig=csp ====
int SlaveManagerClass::StubReturn72(SlaveManagerClass *this)
{
  return 72; /*0x6b1385*/
}



// ==== 0x006B1390  SlaveManagerClass::ProcessOrders  this=SlaveManagerClass  sig=csp ====
void *__thiscall SlaveManagerClass::ProcessOrders(SlaveManagerClass *this, char a2)
{
  SlaveManagerClass::Constructor_SlaveManagerClass((int)this); /*0x6b1393*/
  if ( (a2 & 1) != 0 ) /*0x6b139d*/
    __3_YAXPAX_Z(this); /*0x6b13a0*/
  return this; /*0x6b13aa*/
}



// ==== 0x006B13B0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall SlaveManagerClass_25::ddtor(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b13b6*/
  this->m_10 = 0; /*0x6b13b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b13c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b13c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b13ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6b13d1*/
  this->m_8 = 0; /*0x6b13d4*/
}



// ==== 0x006B13E0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall SlaveManagerClass_25::Write(
        _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b13e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b13f5*/
  else
    return 0; /*0x6b13e7*/
}



// ==== 0x006B1400  _VectorClass_PAUSlaveControl_SlaveManagerClass::Seek  this=VectorClass  sig=csp ====
int __thiscall SlaveManagerClass_25::Seek(_VectorClass_PAUSlaveControl_SlaveManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b140a*/
}



// ==== 0x006B1410  _DynamicVectorClass_PAVSlaveManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SlaveManagerClass::Destroy(_DynamicVectorClass_PAVSlaveManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b1416*/
  this->m_10 = 0; /*0x6b1419*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b1420*/
  {
    __3_YAXPAX_Z(v2); /*0x6b1426*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b142e*/
  }
  BYTE1(this->m_C) = 0; /*0x6b1431*/
  this->m_8 = 0; /*0x6b1434*/
}



// ==== 0x006B1440  _DynamicVectorClass_PAVSlaveManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SlaveManagerClass::GetItemIndex(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b1440*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b1455*/
  else
    return 0; /*0x6b1447*/
}



// ==== 0x006B1460  _VectorClass_PAVSlaveManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::Get(_VectorClass_PAVSlaveManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b146a*/
}



// ==== 0x006B1470  _VectorClass_PAUSlaveControl_SlaveManagerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SlaveManagerClass_25::AddRef(_VectorClass_PAUSlaveControl_SlaveManagerClass *this, int a2)
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
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b1485*/
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
char __thiscall SlaveManagerClass_25::Release(
        _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b15fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b1602*/
    if ( a3 ) /*0x6b1608*/
      v4 = a3; /*0x6b161e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b161a*/
    LOBYTE(this->m_C) = 1; /*0x6b1622*/
    if ( !v4 ) /*0x6b1626*/
      return 0; /*0x6b169a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b1628*/
    {
      m_8 = this->m_8; /*0x6b162f*/
      if ( a2 < m_8 ) /*0x6b1634*/
        m_8 = a2; /*0x6b1636*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b163c*/
        ++i; /*0x6b1641*/
      if ( BYTE1(this->m_C) ) /*0x6b164e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b1659*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b1661*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b166a*/
    this->m_8 = a2; /*0x6b1672*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b1675*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b167e*/
  }
  v7 = this->m_8; /*0x6b1681*/
  if ( v7 < this->m_10 ) /*0x6b1689*/
    this->m_10 = v7; /*0x6b168b*/
  return 1; /*0x6b168e*/
}



// ==== 0x006B16A0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::Read  this=DynamicVector  sig=csp ====
int __thiscall SlaveManagerClass_25::Read(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b16a0*/
  result = 0; /*0x6b16a3*/
  if ( m_10 <= 0 ) /*0x6b16a8*/
    return -1; /*0x6b16bf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b16ae*/
  {
    if ( ++result >= m_10 ) /*0x6b16bd*/
      return -1; /*0x6b16bd*/
  }
  return result; /*0x6b16c2*/
}



// ==== 0x006B16D0  _VectorClass_PAVSlaveManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::Add(_VectorClass_PAVSlaveManagerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6b16d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6b16dd*/
  {
    v3 = 0; /*0x6b16df*/
    if ( m_8 <= 0 ) /*0x6b16e3*/
      return 1; /*0x6b1703*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b16e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b16eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b16f4*/
    {
      ++v3; /*0x6b16f6*/
      ++v4; /*0x6b16f7*/
      if ( v3 >= m_8 ) /*0x6b16fc*/
        return 1; /*0x6b16fc*/
    }
  }
  return 0; /*0x6b16fe*/
}



// ==== 0x006B1710  _VectorClass_PAVSlaveManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::Release(_VectorClass_PAVSlaveManagerClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6b171c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b1726*/
    if ( a3 ) /*0x6b172c*/
      v4 = a3; /*0x6b1742*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b173e*/
    LOBYTE(this->m_C) = 1; /*0x6b1746*/
    if ( v4 ) /*0x6b174a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6b1755*/
      {
        m_8 = this->m_8; /*0x6b175c*/
        if ( a2 < m_8 ) /*0x6b1761*/
          m_8 = a2; /*0x6b1763*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b1769*/
          ++i; /*0x6b176e*/
        if ( BYTE1(this->m_C) ) /*0x6b177b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b1786*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6b178e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6b1797*/
      this->m_8 = a2; /*0x6b179f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6b17a2*/
      return 1; /*0x6b17a8*/
    }
    else
    {
      return 0; /*0x6b174f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSlaveManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b17b2*/
    return 1; /*0x6b17b8*/
  }
}



// ==== 0x006B17C0  _VectorClass_PAVSlaveManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SlaveManagerClass::Remove(_VectorClass_PAVSlaveManagerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6b17cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b17d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b17db*/
  }
  BYTE1(this->m_C) = 0; /*0x6b17de*/
  this->m_8 = 0; /*0x6b17e1*/
}



// ==== 0x006B17F0  _VectorClass_PAVSlaveManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::GetSize(_VectorClass_PAVSlaveManagerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6b17f0*/
    return 0; /*0x6b17f8*/
  m_8 = this->m_8; /*0x6b17fe*/
  result = 0; /*0x6b1801*/
  if ( m_8 <= 0 ) /*0x6b1805*/
    return -1; /*0x6b181c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b180b*/
  {
    if ( ++result >= m_8 ) /*0x6b181a*/
      return -1; /*0x6b181a*/
  }
  return result; /*0x6b17fa*/
}



// ==== 0x006B1830  _VectorClass_PAVSlaveManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SlaveManagerClass::GetCapacity(_VectorClass_PAVSlaveManagerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b1830*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b1845*/
  else
    return 0; /*0x6b1837*/
}



// ==== 0x006B1850  _DynamicVectorClass_PAVSlaveManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::SetCapacity(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b185c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b1862*/
    if ( a3 ) /*0x6b1868*/
      v4 = a3; /*0x6b187e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b187a*/
    LOBYTE(this->m_C) = 1; /*0x6b1882*/
    if ( !v4 ) /*0x6b1886*/
      return 0; /*0x6b18fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b1888*/
    {
      m_8 = this->m_8; /*0x6b188f*/
      if ( a2 < m_8 ) /*0x6b1894*/
        m_8 = a2; /*0x6b1896*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b189c*/
        ++i; /*0x6b18a1*/
      if ( BYTE1(this->m_C) ) /*0x6b18ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b18b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b18c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b18ca*/
    this->m_8 = a2; /*0x6b18d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b18d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSlaveManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b18de*/
  }
  v7 = this->m_8; /*0x6b18e1*/
  if ( v7 < this->m_10 ) /*0x6b18e9*/
    this->m_10 = v7; /*0x6b18eb*/
  return 1; /*0x6b18ee*/
}



// ==== 0x006B1900  _DynamicVectorClass_PAVSlaveManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::FindItemIndex(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b1900*/
  result = 0; /*0x6b1903*/
  if ( m_10 <= 0 ) /*0x6b1908*/
    return -1; /*0x6b191f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b190e*/
  {
    if ( ++result >= m_10 ) /*0x6b191d*/
      return -1; /*0x6b191d*/
  }
  return result; /*0x6b1922*/
}



// ==== 0x006B1930  ?$VectorClass@PAUSlaveControl@SlaveManagerClass@@::checkAIResources  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_6B1930(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b1933*/
  *Block = &VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b1936*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b1940*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1948*/
    *(Block + 1) = 0; /*0x6b1950*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b195b*/
  *(Block + 2) = 0; /*0x6b1961*/
  if ( (a2 & 1) != 0 ) /*0x6b1968*/
    __3_YAXPAX_Z(Block); /*0x6b196b*/
  return Block; /*0x6b1975*/
}



// ==== 0x006B1980  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SlaveManagerClass_25::QueryInterface(
        _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b1983*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b1986*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b1990*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1998*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b19a0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b19ab*/
  this->m_8 = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    __3_YAXPAX_Z(this); /*0x6b19bb*/
  return this->__pad_0; /*0x6b19c5*/
}



// ==== 0x006B19D0  _VectorClass_PAVSlaveManagerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SlaveManagerClass::QueryInterface(_VectorClass_PAVSlaveManagerClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b19d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SlaveManagerClass *>::`vftable'; /*0x6b19d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b19e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b19e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b19f0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b19fb*/
  this->m_8 = 0; /*0x6b1a01*/
  if ( (a2 & 1) != 0 ) /*0x6b1a08*/
    __3_YAXPAX_Z(this); /*0x6b1a0b*/
  return this->__pad_0; /*0x6b1a15*/
}



// ==== 0x006B1A20  _DynamicVectorClass_PAVSlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b1a23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SlaveManagerClass *>::`vftable'; /*0x6b1a26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b1a30*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1a38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b1a40*/
  }
  BYTE1(this->m_C) = 0; /*0x6b1a4b*/
  this->m_8 = 0; /*0x6b1a51*/
  if ( (a2 & 1) != 0 ) /*0x6b1a58*/
    __3_YAXPAX_Z(this); /*0x6b1a5b*/
  return this->__pad_0; /*0x6b1a65*/
}



// ==== 0x006B1A70  SlaveManagerClass::Calc2DDistance  this=SlaveManagerClass  sig=csp ====
__int64 __thiscall SlaveManagerClass::Calc2DDistance(SlaveManagerClass *this)
{
  double v1; // st7
  __int64 result; // rax
  int v3; // kr00_4
  double v4; // [esp+0h] [ebp-Ch]
  int vtable0_high; // [esp+8h] [ebp-4h]
  int vtable0_low; // [esp+8h] [ebp-4h]

  vtable0_high = SHIWORD(this->AbstractClass); /*0x6b1a78*/
  __asm { fild [esp+0Ch+var_4] } /*0x6b1a7f*/
  vtable0_low = SLOWORD(this->AbstractClass); /*0x6b1a83*/
  __asm /*0x6b1a87*/
  {
    fild [esp+0Ch+var_4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+0Ch+var_C]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v4); /*0x6b1a9c*/
  v3 = Math::RoundToInt(v1); /*0x6b1aa1*/
  WORD2(result) = HIWORD(v3); /*0x6b1aa1*/
  LOWORD(result) = v3; /*0x6b1aa1*/
  return result; /*0x6b1aa9*/
}



// ==== 0x006B1AB0  SlaveControlVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall SlaveControlVector::Constructor(SlaveControlVector *this, int a2, int a3)
{
  this->Items = 0; /*0x6b1abb*/
  this->Capacity = a2; /*0x6b1abe*/
  this->IsInitialized = 1; /*0x6b1ac1*/
  this->IsAllocated = 0; /*0x6b1ac5*/
  *this = (SlaveControlVector)&VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b1ac8*/
  if ( a2 ) /*0x6b1ace*/
  {
    if ( a3 ) /*0x6b1ad6*/
    {
      this->Items = a3; /*0x6b1ad8*/
      return this; /*0x6b1ade*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x6b1aed*/
    this->IsAllocated = 1; /*0x6b1af0*/
  }
  return this; /*0x6b1add*/
}



// ==== 0x006B1B00  sub_6B1B00  this=-  sig=ida-proto ====
int sub_6B1B00()
{
  dword_B0B638 = 0; /*0x6b1b02*/
  dword_B0B63C = 0; /*0x6b1b07*/
  dword_B0B640 = 0; /*0x6b1b0c*/
  dword_B0B644 = 0; /*0x6b1b11*/
  return 0; /*0x6b1b16*/
}



// ==== 0x006B1B20  SliderClass::Constructor  this=SliderClass  sig=csp ====
int *__thiscall SliderClass::Constructor(SliderClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ShapeButtonClass *v8; // edi
  void *v9; // eax
  _BYTE *v10; // eax
  ShapeButtonClass *v11; // edi
  void *v12; // eax
  _BYTE *v13; // eax
  int v14; // ecx
  int v15; // ecx
  int SliderClass_field_0x30; // eax
  int v17; // edx
  char v18; // bl
  int SliderClass_field_0x14; // ebp
  double v20; // st7
  int v21; // eax
  int v22; // edi
  double v23; // st7
  int v24; // eax
  int SliderClass_field_0x18; // ebp
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v30; // [esp-14h] [ebp-34h]
  int v31; // [esp-14h] [ebp-34h]
  int SliderClass_field_0x10; // [esp-10h] [ebp-30h]
  int v33; // [esp-10h] [ebp-30h]

  ListClass::Constructor((int)this, a2, a3, a4, a5, a6); /*0x6b1b44*/
  *(_DWORD *)this->__pad_0 = &SliderClass::`vftable'; /*0x6b1b51*/
  *((_BYTE *)this + 68) = a7 != 0; /*0x6b1b5c*/
  *((_DWORD *)this + 15) = 0; /*0x6b1b5f*/
  this->q010 = 0; /*0x6b1b62*/
  if ( !a7 ) /*0x6b1b65*/
  {
    v8 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1b72*/
    if ( v8 ) /*0x6b1b79*/
    {
      SliderClass_field_0x10 = this->SliderClass_field_0x10; /*0x6b1b87*/
      v30 = this->SliderClass_field_0x14 + this->SliderClass_field_0x0C + 2; /*0x6b1b8c*/
      v9 = SearchMIXFile(aBtnPlusShp, 0); /*0x6b1b94*/
      v10 = ShapeButtonClass::Constructor(v8, a2, (int)v9, v30, SliderClass_field_0x10, 0, 0, 0); /*0x6b1b9d*/
    }
    else
    {
      v10 = 0; /*0x6b1ba4*/
    }
    *((_DWORD *)this + 15) = v10; /*0x6b1ba8*/
    v11 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1bb0*/
    if ( v11 ) /*0x6b1bb7*/
    {
      v33 = this->SliderClass_field_0x10; /*0x6b1bc5*/
      v31 = this->SliderClass_field_0x0C - 6; /*0x6b1bc6*/
      v12 = SearchMIXFile(aBtnMinsShp, 0); /*0x6b1bce*/
      v13 = ShapeButtonClass::Constructor(v11, a2, (int)v12, v31, v33, 0, 0, 0); /*0x6b1bd7*/
    }
    else
    {
      v13 = 0; /*0x6b1bde*/
    }
    v14 = *((_DWORD *)this + 15); /*0x6b1be0*/
    this->q010 = v13; /*0x6b1be3*/
    if ( v14 ) /*0x6b1be8*/
    {
      (*(void (__thiscall **)(int, SliderClass *))(*(_DWORD *)v14 + 132))(v14, this); /*0x6b1bed*/
      (*(void (__thiscall **)(_DWORD, SliderClass *))(**((_DWORD **)this + 15) + 12))(*((_DWORD *)this + 15), this); /*0x6b1bf9*/
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 15) + 72))(*((_DWORD *)this + 15)); /*0x6b1c01*/
    }
    v15 = this->q010; /*0x6b1c04*/
    if ( v15 ) /*0x6b1c09*/
    {
      (*(void (__thiscall **)(int, SliderClass *))(*(_DWORD *)v15 + 132))(v15, this); /*0x6b1c0e*/
      (*(void (__thiscall **)(_DWORD, SliderClass *))(**((_DWORD **)this + 16) + 12))(this->q010, this); /*0x6b1c1a*/
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 16) + 72))(this->q010); /*0x6b1c22*/
    }
  }
  SliderClass_field_0x30 = this->SliderClass_field_0x30; /*0x6b1c25*/
  if ( SliderClass_field_0x30 > 1 ) /*0x6b1c2b*/
    SliderClass_field_0x30 = 1; /*0x6b1c2d*/
  *((_DWORD *)this + 18) = SliderClass_field_0x30; /*0x6b1c35*/
  v17 = *(_DWORD *)this->__pad_0; /*0x6b1c3f*/
  *((_DWORD *)this + 18) = 1; /*0x6b1c43*/
  (*(void (__thiscall **)(SliderClass *))(v17 + 72))(this); /*0x6b1c46*/
  v18 = BYTE2(this->SliderClass_field_0x2C); /*0x6b1c49*/
  if ( v18 ) /*0x6b1c4e*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1c50*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1c55*/
  v20 = (double)this->SliderClass_field_0x30; /*0x6b1c58*/
  LOWORD(v21) = Math::RoundToInt(v20); /*0x6b1c74*/
  v22 = v21; /*0x6b1c7c*/
  if ( v21 <= 4 ) /*0x6b1c7e*/
    v22 = 4; /*0x6b1c80*/
  v23 = (double)*((int *)this + 13) / v20; /*0x6b1c85*/
  *((_DWORD *)this + 19) = v22; /*0x6b1c88*/
  LOWORD(v24) = Math::RoundToInt(v23); /*0x6b1c91*/
  if ( v24 >= SliderClass_field_0x14 - v22 ) /*0x6b1c9c*/
    v24 = SliderClass_field_0x14 - v22; /*0x6b1c9e*/
  this->q014 = v24; /*0x6b1ca2*/
  if ( v18 ) /*0x6b1ca5*/
    SliderClass_field_0x18 = this->SliderClass_field_0x14; /*0x6b1ca7*/
  else
    SliderClass_field_0x18 = this->SliderClass_field_0x18; /*0x6b1cac*/
  LOWORD(v26) = Math::RoundToInt(v23); /*0x6b1cbd*/
  v27 = v26; /*0x6b1cc5*/
  if ( v26 <= 4 ) /*0x6b1cc7*/
    v27 = 4; /*0x6b1cc9*/
  *((_DWORD *)this + 19) = v27; /*0x6b1cd0*/
  LOWORD(v28) = Math::RoundToInt(v23); /*0x6b1cd3*/
  if ( v28 >= SliderClass_field_0x18 - v27 ) /*0x6b1ce0*/
    v28 = SliderClass_field_0x18 - v27; /*0x6b1ce2*/
  this->q014 = v28; /*0x6b1ce4*/
  LOBYTE(this->SliderClass_field_0x2C) = 0; /*0x6b1ce7*/
  return (int *)this->__pad_0; /*0x6b1ced*/
}



// ==== 0x006B1D00  SliderClass::Destructor  this=SliderClass  sig=csp ====
int __thiscall SliderClass::Destructor(SliderClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 15); /*0x6b1d03*/
  *(_DWORD *)this->__pad_0 = &SliderClass::`vftable'; /*0x6b1d06*/
  if ( v2 ) /*0x6b1d0e*/
  {
    (**v2)(v2, 1); /*0x6b1d14*/
    *((_DWORD *)this + 15) = 0; /*0x6b1d16*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->q010; /*0x6b1d1d*/
  if ( v3 ) /*0x6b1d22*/
  {
    (**v3)(v3, 1); /*0x6b1d28*/
    this->q010 = 0; /*0x6b1d2a*/
  }
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x6b1d38*/
}



// ==== 0x006B1D40  SliderClass::GetValue  this=SliderClass  sig=csp ====
int __thiscall SliderClass::GetValue(SliderClass *this, int a2)
{
  int SliderClass_field_0x14; // ebx
  double SliderClass_field_0x30; // st7
  int v5; // eax
  int v6; // edi
  int v7; // eax

  if ( !GaugeClass::SetValue((GaugeClass *)this, a2) ) /*0x6b1d48*/
    return 0; /*0x6b1db0*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1d51*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1d5a*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1d5f*/
  SliderClass_field_0x30 = (double)this->SliderClass_field_0x30; /*0x6b1d62*/
  LOWORD(v5) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d74*/
  v6 = v5; /*0x6b1d7c*/
  if ( v5 <= 4 ) /*0x6b1d7e*/
    v6 = 4; /*0x6b1d80*/
  *((_DWORD *)this + 19) = v6; /*0x6b1d88*/
  LOWORD(v7) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d8f*/
  if ( v7 >= SliderClass_field_0x14 - v6 ) /*0x6b1da0*/
    v7 = SliderClass_field_0x14 - v6; /*0x6b1da2*/
  this->q014 = v7; /*0x6b1da4*/
  return 1; /*0x6b1dac*/
}



// ==== 0x006B1DC0  SliderClass::OnClick  this=SliderClass  sig=csp ====
__int64 __thiscall SliderClass::OnClick(SliderClass *this, int a2)
{
  int SliderClass_field_0x30; // eax
  int SliderClass_field_0x14; // ebx
  double v5; // st7
  int v6; // eax
  int v7; // edi
  __int64 result; // rax
  int v9; // kr00_4

  SliderClass_field_0x30 = this->SliderClass_field_0x30; /*0x6b1dc7*/
  if ( a2 < SliderClass_field_0x30 ) /*0x6b1dcc*/
    SliderClass_field_0x30 = a2; /*0x6b1dce*/
  *((_DWORD *)this + 18) = SliderClass_field_0x30; /*0x6b1dd3*/
  if ( SliderClass_field_0x30 <= 1 ) /*0x6b1dd6*/
    SliderClass_field_0x30 = 1; /*0x6b1dd8*/
  *((_DWORD *)this + 18) = SliderClass_field_0x30; /*0x6b1ddd*/
  (*(void (__thiscall **)(SliderClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x6b1de6*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1de9*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1df0*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1df5*/
  v5 = (double)this->SliderClass_field_0x30; /*0x6b1df8*/
  LOWORD(v6) = Math::RoundToInt(v5); /*0x6b1e0a*/
  v7 = v6; /*0x6b1e12*/
  if ( v6 <= 4 ) /*0x6b1e14*/
    v7 = 4; /*0x6b1e16*/
  *((_DWORD *)this + 19) = v7; /*0x6b1e1e*/
  v9 = Math::RoundToInt(v5); /*0x6b1e25*/
  WORD2(result) = HIWORD(v9); /*0x6b1e25*/
  LOWORD(result) = v9; /*0x6b1e25*/
  if ( (int)result >= SliderClass_field_0x14 - v7 ) /*0x6b1e36*/
    this->q014 = SliderClass_field_0x14 - v7; /*0x6b1e3f*/
  else
    this->q014 = result; /*0x6b1e38*/
  return result; /*0x6b1e3b*/
}



// ==== 0x006B1E50  SliderClass::Draw  this=SliderClass  sig=csp ====
int __thiscall SliderClass::Draw(SliderClass *this, int a2)
{
  int v3; // ecx
  int v4; // edi
  int SliderClass_field_0x14; // ebx
  double SliderClass_field_0x30; // st7
  int v7; // eax
  int v8; // edi
  int v9; // eax

  v3 = a2; /*0x6b1e53*/
  v4 = *((_DWORD *)this + 18); /*0x6b1e5b*/
  if ( a2 >= this->SliderClass_field_0x30 - v4 ) /*0x6b1e62*/
    v3 = this->SliderClass_field_0x30 - v4; /*0x6b1e64*/
  if ( !GaugeClass::GetValue((GaugeClass *)this, v3) ) /*0x6b1e69*/
    return 0; /*0x6b1ed1*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1e72*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1e7a*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1e7f*/
  SliderClass_field_0x30 = (double)this->SliderClass_field_0x30; /*0x6b1e82*/
  LOWORD(v7) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1e94*/
  v8 = v7; /*0x6b1e9c*/
  if ( v7 <= 4 ) /*0x6b1e9e*/
    v8 = 4; /*0x6b1ea0*/
  *((_DWORD *)this + 19) = v8; /*0x6b1ea8*/
  LOWORD(v9) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1eaf*/
  if ( v9 >= SliderClass_field_0x14 - v8 ) /*0x6b1ebf*/
    v9 = SliderClass_field_0x14 - v8; /*0x6b1ec1*/
  this->q014 = v9; /*0x6b1ec3*/
  return 1; /*0x6b1ec6*/
}



// ==== 0x006B1EE0  ObjectClass::method_6B1EE0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_6B1EE0(ObjectClass *this)
{
  int abstractFlags; // ebx
  double nextObject; // st7
  int v4; // eax
  int v5; // edi
  __int64 result; // rax
  int v7; // kr00_4

  if ( BYTE2(this->fallRate) ) /*0x6b1ee6*/
    abstractFlags = this->?; /*0x6b1eed*/
  else
    abstractFlags = this->?; /*0x6b1ef2*/
  nextObject = (double)(int)this->nextObject; /*0x6b1ef5*/
  LOWORD(v4) = Math::RoundToInt(nextObject); /*0x6b1f07*/
  v5 = v4; /*0x6b1f0f*/
  if ( v4 <= 4 ) /*0x6b1f11*/
    v5 = 4; /*0x6b1f13*/
  this->ambientSoundController[4] = v5; /*0x6b1f1b*/
  v7 = Math::RoundToInt(nextObject); /*0x6b1f22*/
  WORD2(result) = HIWORD(v7); /*0x6b1f22*/
  LOWORD(result) = v7; /*0x6b1f22*/
  if ( (int)result >= abstractFlags - v5 ) /*0x6b1f31*/
    this->customSound_controller[0] = abstractFlags - v5; /*0x6b1f3b*/
  else
    this->customSound_controller[0] = result; /*0x6b1f33*/
  return result; /*0x6b1f36*/
}



// ==== 0x006B1F50  SliderClass::SetValue  this=SliderClass  sig=csp ====
int __thiscall SliderClass::SetValue(SliderClass *this, unsigned int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int SliderClass_field_0x0C; // ecx
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // edi

  if ( (a2 & 1) == 0 ) /*0x6b1f5c*/
    return CellClass::DrawDispatch((GaugeClass *)this, a2, a3, 0); /*0x6b1fef*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1f62*/
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer); /*0x6b1f71*/
    SliderClass_field_0x0C = this->SliderClass_field_0x0C; /*0x6b1f74*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer); /*0x6b1f7b*/
    SliderClass_field_0x0C = this->SliderClass_field_0x10; /*0x6b1f7e*/
  }
  v7 = this->q014; /*0x6b1f81*/
  v8 = SliderClass_field_0x0C + 1; /*0x6b1f84*/
  if ( v5 >= v7 + v8 ) /*0x6b1f8a*/
  {
    if ( v5 <= v8 + v7 + *((_DWORD *)this + 19) ) /*0x6b1fac*/
    {
      v9 = a3; /*0x6b1fc5*/
      CellClass::DrawDispatch((GaugeClass *)this, a2, a3, 0); /*0x6b1fcf*/
    }
    else
    {
      (*(void (__thiscall **)(SliderClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 172))(this, 0); /*0x6b1fb4*/
      v9 = a3; /*0x6b1fba*/
      CellClass::DrawDispatch((GaugeClass *)this, 0, a3, 0); /*0x6b1fc3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(SliderClass *, int))(*(_DWORD *)this->__pad_0 + 172))(this, 1); /*0x6b1f92*/
    v9 = a3; /*0x6b1f98*/
    CellClass::DrawDispatch((GaugeClass *)this, 0, a3, 0); /*0x6b1fa1*/
  }
  *v9 = 0; /*0x6b1fd4*/
  return 1; /*0x6b1fda*/
}



// ==== 0x006B2000  SliderClass::OnTrack  this=SliderClass  sig=csp ====
int __thiscall SliderClass::OnTrack(SliderClass *this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)this->__pad_0; /*0x6b2007*/
  if ( a2 ) /*0x6b2009*/
    return (*(int (__stdcall **)(int))(v2 + 140))(*((_DWORD *)this + 13) - *((_DWORD *)this + 18)); /*0x6b2014*/
  else
    return (*(int (__stdcall **)(int))(v2 + 140))(*((_DWORD *)this + 13) + *((_DWORD *)this + 18)); /*0x6b2027*/
}



// ==== 0x006B2040  SliderClass::OnRelease  this=SliderClass  sig=csp ====
int __thiscall SliderClass::OnRelease(SliderClass *this, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *((_DWORD *)this + 13); /*0x6b2044*/
  v3 = *(_DWORD *)this->__pad_0; /*0x6b2049*/
  if ( a2 ) /*0x6b204b*/
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 - 1); /*0x6b204f*/
  else
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 + 1); /*0x6b205a*/
}



// ==== 0x006B2070  SliderClass::HitTest  this=SliderClass  sig=csp ====
int __thiscall SliderClass::HitTest(SliderClass *this)
{
  int SliderClass_field_0x10; // edx
  int v2; // eax
  int SliderClass_field_0x18; // ecx
  int v5; // eax
  int SliderClass_field_0x14; // edx
  int v7; // eax
  int SliderClass_field_0x0C; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b2070*/
  {
    SliderClass_field_0x10 = this->SliderClass_field_0x10; /*0x6b2082*/
    SliderClass_field_0x0C = this->SliderClass_field_0x0C + this->q014; /*0x6b2085*/
    v2 = *((_DWORD *)this + 19); /*0x6b2089*/
    SliderClass_field_0x18 = this->SliderClass_field_0x18; /*0x6b208c*/
    v9 = SliderClass_field_0x10; /*0x6b208f*/
    v11 = SliderClass_field_0x18; /*0x6b2093*/
    v10 = v2; /*0x6b20a2*/
  }
  else
  {
    v5 = this->q014; /*0x6b20b2*/
    SliderClass_field_0x0C = this->SliderClass_field_0x0C; /*0x6b20b5*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b20be*/
    v9 = this->SliderClass_field_0x10 + v5; /*0x6b20c1*/
    v7 = *((_DWORD *)this + 19); /*0x6b20c5*/
    v10 = SliderClass_field_0x14; /*0x6b20c8*/
    v11 = v7; /*0x6b20d7*/
  }
  return DrawBuildingTilesSHP(&SliderClass_field_0x0C, 1, 1); /*0x6b20ab*/
}



// ==== 0x006B20F0  SliderClass::GetRange  this=SliderClass  sig=csp ====
int __thiscall SliderClass::GetRange(SliderClass *this, int a2)
{
  int SliderClass_field_0x10; // ecx
  int SliderClass_field_0x14; // edx
  int SliderClass_field_0x18; // eax
  int v7[4]; // [esp+8h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 68) || !Control::DispatchClick((ControlClass *)this, a2) ) /*0x6b2103*/
    return BuildingPlacement::HandleClick((GaugeClass *)this, a2); /*0x6b214f*/
  SliderClass_field_0x10 = this->SliderClass_field_0x10; /*0x6b210f*/
  SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b2112*/
  v7[0] = this->SliderClass_field_0x0C; /*0x6b2115*/
  SliderClass_field_0x18 = this->SliderClass_field_0x18; /*0x6b2119*/
  v7[1] = SliderClass_field_0x10; /*0x6b211c*/
  v7[2] = SliderClass_field_0x14; /*0x6b2120*/
  v7[3] = SliderClass_field_0x18; /*0x6b212c*/
  DrawBuildingTilesSHP(v7, 0, 1); /*0x6b2130*/
  (*(void (__thiscall **)(SliderClass *))(*(_DWORD *)this->__pad_0 + 156))(this); /*0x6b2139*/
  return 1; /*0x6b213f*/
}



// ==== 0x006B2160  SliderClass::SetRange  this=SliderClass  sig=csp ====
char __thiscall SliderClass::SetRange(SliderClass *this, char a2, int a3, int a4)
{
  int v4; // eax

  LOBYTE(v4) = a2; /*0x6b2160*/
  if ( (a2 & 4) != 0 ) /*0x6b2169*/
  {
    if ( a4 == *((_DWORD *)this + 15) ) /*0x6b2175*/
      (*(void (__thiscall **)(SliderClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 176))(this, 0); /*0x6b217b*/
    v4 = this->q010; /*0x6b2181*/
    if ( a4 == v4 ) /*0x6b2187*/
      LOBYTE(v4) = (*(char (__thiscall **)(SliderClass *, int))(*(_DWORD *)this->__pad_0 + 176))(this, 1); /*0x6b218f*/
  }
  return v4; /*0x6b2195*/
}



// ==== 0x006B21A0  sub_6B21A0  this=-  sig=ida-proto ====
void sub_6B21A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b21ac*/
  dbl_B0B680 = Math::Sqrt(v0 + v0); /*0x6b21be*/
}



// ==== 0x006B21D0  sub_6B21D0  this=-  sig=ida-proto ====
void sub_6B21D0()
{
  dbl_B0B6D0 = dbl_B0B680 / 60.0; /*0x6b21dc*/
}



// ==== 0x006B21F0  sub_6B21F0  this=-  sig=ida-proto ====
void sub_6B21F0()
{
  dbl_B0B6B8 = 1.0 / dbl_B0B6D0; /*0x6b21fc*/
}



// ==== 0x006B2210  sub_6B2210  this=-  sig=ida-proto ====
void sub_6B2210()
{
  dbl_B0B6B0 = 0.0174532925199433 * 45.0; /*0x6b221c*/
}



// ==== 0x006B2230  sub_6B2230  this=-  sig=ida-proto ====
void sub_6B2230()
{
  dbl_B0B688 = 0.0174532925199433 * 60.0; /*0x6b223c*/
}



// ==== 0x006B2250  sub_6B2250  this=-  sig=ida-proto ====
void sub_6B2250()
{
  dbl_B0B648 = 0.0174532925199433 * 90.0; /*0x6b225c*/
}



// ==== 0x006B2270  sub_6B2270  this=-  sig=ida-proto ====
__int64 sub_6B2270()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B648 - dbl_B0B688); /*0x6b2282*/
  result = Math::RoundToInt(v0 * dbl_B0B680 * 0.5); /*0x6b2296*/
  dword_B0B6D8 = result; /*0x6b229b*/
  return result; /*0x6b22a0*/
}



// ==== 0x006B22B0  sub_6B22B0  this=-  sig=ida-proto ====
void sub_6B22B0()
{
  dbl_B0B690 = Math::ArcTan((double)dword_B0B6D8 * 0.00390625); /*0x6b22c7*/
}



// ==== 0x006B22E0  sub_6B22E0  this=-  sig=ida-proto ====
void sub_6B22E0()
{
  dbl_B0B6A8 = Math::ArcTan((double)(2 * dword_B0B6D8) / dbl_B0B680); /*0x6b2302*/
}



// ==== 0x006B2310  sub_6B2310  this=-  sig=ida-proto ====
__int64 sub_6B2310()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B6D8) + 0.5); /*0x6b232b*/
  dword_B0B6CC = result; /*0x6b2330*/
  return result; /*0x6b2336*/
}



// ==== 0x006B2340  sub_6B2340  this=-  sig=ida-proto ====
int sub_6B2340()
{
  word_B0B678 = 0; /*0x6b2342*/
  word_B0B67A = 0; /*0x6b2348*/
  return 0; /*0x6b234e*/
}



// ==== 0x006B2350  sub_6B2350  this=-  sig=ida-proto ====
int sub_6B2350()
{
  dword_B0B698 = 0; /*0x6b2352*/
  dword_B0B69C = 0; /*0x6b2357*/
  dword_B0B6A0 = 0; /*0x6b235c*/
  return 0; /*0x6b2361*/
}



// ==== 0x006B2370  sub_6B2370  this=-  sig=ida-proto ====
int sub_6B2370()
{
  dword_B0B6C8 = 0; /*0x6b2375*/
  dword_B0B6C0 = 128; /*0x6b237f*/
  dword_B0B6C4 = 128; /*0x6b2384*/
  return 128; /*0x6b2389*/
}



// ==== 0x006B2390  sub_6B2390  this=-  sig=ida-proto ====
int sub_6B2390()
{
  dword_B0B668 = 0; /*0x6b2392*/
  dword_B0B66C = 0; /*0x6b2397*/
  dword_B0B670 = 0; /*0x6b239c*/
  dword_B0B674 = 0; /*0x6b23a1*/
  return 0; /*0x6b23a6*/
}



// ==== 0x006B23B0  sub_6B23B0  this=-  sig=ida-proto ====
int sub_6B23B0()
{
  dword_B0B654 = 0; /*0x6b23b7*/
  dword_B0B658 = 0; /*0x6b23bc*/
  byte_B0B65C = 1; /*0x6b23c1*/
  byte_B0B65D = 0; /*0x6b23c8*/
  dword_B0B650 = (int)&DynamicVectorClass<UndoInfoStruct>::`vftable'; /*0x6b23cd*/
  dword_B0B664 = 10; /*0x6b23d7*/
  g_SlaveMgrPool = 0; /*0x6b23e1*/
  return atexit(sub_6B23F0); /*0x6b23ec*/
}



// ==== 0x006B23F0  sub_6B23F0  this=-  sig=ida-proto ====
void __cdecl sub_6B23F0()
{
  dword_B0B650 = (int)&VectorClass<UndoInfoStruct>::`vftable'; /*0x6b23f8*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b240c*/
  {
    __3_YAXPAX_Z(dword_B0B654); /*0x6b240f*/
    dword_B0B654 = 0; /*0x6b2417*/
  }
  byte_B0B65D = 0; /*0x6b241d*/
  dword_B0B658 = 0; /*0x6b2423*/
}



// ==== 0x006B2430  sub_6B2430  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_6B2430(int *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // ebx
  int v4; // edi
  int v6; // eax

  result = (_DWORD *)dword_B0B658; /*0x6b2430*/
  v3 = a1[1]; /*0x6b2436*/
  v4 = *a1; /*0x6b243b*/
  if ( g_SlaveMgrPool < dword_B0B658 /*0x6b2475*/
    || (byte_B0B65D || !dword_B0B658)
    && dword_B0B664 > 0
    && (result = (_DWORD *)(*(int (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
                             &dword_B0B650,
                             dword_B0B658 + dword_B0B664,
                             0),
        (_BYTE)result) )
  {
    v6 = g_SlaveMgrPool++; /*0x6b2483*/
    result = (char *)dword_B0B654 + 12 * v6; /*0x6b248f*/
    *result = v4; /*0x6b2492*/
    result[1] = v3; /*0x6b2495*/
    result[2] = a2; /*0x6b2498*/
  }
  return result; /*0x6b249b*/
}



// ==== 0x006B2520  ObjectClass::System_Init_6B2520  this=ObjectClass  sig=csp ====
char __thiscall System_Init_6B2520(TechnoClass *this)
{
  int occupant; // ebx
  int v3; // edi
  int attachedBomb; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  occupant = this->occupant; /*0x6b252c*/
  v6 = occupant; /*0x6b2531*/
  v3 = SHIWORD(occupant) + (__int16)occupant; /*0x6b253d*/
  if ( v3 <= dword_ABED04 ) /*0x6b2542*/
    return 0; /*0x6b2542*/
  if ( (__int16)v6 - SHIWORD(v6) >= dword_ABED04 ) /*0x6b254c*/
    return 0; /*0x6b254c*/
  if ( SHIWORD(v6) - (__int16)v6 >= dword_ABED04 ) /*0x6b2552*/
    return 0; /*0x6b2552*/
  if ( v3 > dword_ABED08 ) /*0x6b255a*/
    return 0; /*0x6b255a*/
  if ( this->ambientSoundController[2] != -1 ) /*0x6b2560*/
    return 0; /*0x6b2560*/
  if ( this->radioLinks[1] ) /*0x6b2562*/
    return 0; /*0x6b2562*/
  v6 = occupant; /*0x6b2570*/
  if ( Tactical::GetCellData((Tactical *)&v6)[69] ) /*0x6b2579*/
    return 0; /*0x6b25b0*/
  attachedBomb = this->attachedBomb; /*0x6b2580*/
  if ( attachedBomb >= dword_A8ED38 || attachedBomb == 0xFFFF ) /*0x6b2592*/
    return 1; /*0x6b25a9*/
  else
    return *(_BYTE *)(*((_DWORD *)dword_A8ED2C + attachedBomb) + 736); /*0x6b259f*/
}



// ==== 0x006B25C0  CellClass::IsBuildable  this=CellClass  sig=csp ====
int __thiscall CellClass::IsBuildable(CellClass *this)
{
  ObjectClass *i; // esi
  int result; // eax
  __int16 smudgeTypeIndex_high; // cx
  __int16 v5; // dx
  int v6; // edi
  __int16 v7[2]; // [esp+8h] [ebp-4h] BYREF

  for ( i = this->firstObject; i; i = i->nextObject ) /*0x6b25cd*/
  {
    if ( i->isAliveFlag ) /*0x6b25cf*/
    {
      if ( (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 11))(i) != 15 ) /*0x6b25e3*/
      {
        result = (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 11))(i); /*0x6b25e9*/
        if ( result != 1 ) /*0x6b25ef*/
          goto LABEL_18; /*0x6b25ef*/
      }
    }
  }
  result = (int)this->altObject; /*0x6b25fc*/
  if ( result ) /*0x6b2604*/
    goto LABEL_18; /*0x6b2604*/
  result = this->flags[0]; /*0x6b260a*/
  if ( (result & 0x500) != 0 ) /*0x6b2613*/
    goto LABEL_18; /*0x6b2613*/
  smudgeTypeIndex_high = HIWORD(this->smudgeTypeIndex); /*0x6b261d*/
  v7[0] = LOWORD(g_DDrawSurfaceManager.scenario[82]) + LOWORD(this->smudgeTypeIndex); /*0x6b2632*/
  v7[1] = HIWORD(g_DDrawSurfaceManager.scenario[82]) + smudgeTypeIndex_high; /*0x6b2637*/
  result = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80); /*0x6b2653*/
  if ( (result & 0x500) != 0 && (result & 0x800) != 0 ) /*0x6b2661*/
    goto LABEL_18; /*0x6b2661*/
  if ( (v5 = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(this->smudgeTypeIndex), /*0x6b26c0*/
        v7[0] = LOWORD(g_DDrawSurfaceManager.scenario[88]) + LOWORD(this->smudgeTypeIndex),
        v7[1] = v5,
        result = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80),
        (result & 0x500) != 0)
    && (result & 0x800) == 0
    || *(_DWORD *)&this->__pad_28[28] != -1
    || (result = LayerClass::CoordinatesLegal(
                   (LayerClass *)&stru_87F5F0.__pad_58[416],
                   (__int16 *)&this->smudgeTypeIndex),
        !(_BYTE)result) )
  {
LABEL_18:
    LOBYTE(result) = 0; /*0x6b26ef*/
    return result; /*0x6b26f0*/
  }
  v6 = *(_DWORD *)&this->__pad_28[16]; /*0x6b26c2*/
  result = *(_DWORD *)&stru_A8EB00.?[340]; /*0x6b26c5*/
  if ( v6 >= *(int *)&stru_A8EB00.?[340] || v6 == 0xFFFF ) /*0x6b26d4*/
  {
    LOBYTE(result) = 1; /*0x6b26ea*/
  }
  else
  {
    result = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v6); /*0x6b26dc*/
    LOBYTE(result) = *(_BYTE *)(result + 736); /*0x6b26e1*/
  }
  return result; /*0x6b26df*/
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

  if ( g_SlaveManagerPool ) /*0x6b2714*/
  {
    __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b2717*/
    g_SlaveManagerPool = 0; /*0x6b271f*/
  }
  v1 = (dword_87F914 + 1) * (dword_87F918 + 1); /*0x6b2734*/
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
    g_SlaveManagerPool = v2; /*0x6b2766*/
  }
  else
  {
    g_SlaveManagerPool = 0; /*0x6b276d*/
  }
  dword_8759A0 = dword_87F918 + 1; /*0x6b2784*/
  dword_8759AC = dword_87F910; /*0x6b2790*/
  result = dword_87F914 + 1; /*0x6b27e4*/
  dword_8759A4 = dword_87F914 + 1; /*0x6b27ec*/
  v6 = dword_87F914 - dword_87F90C; /*0x6b27f8*/
  dword_8759A8 = dword_87F90C; /*0x6b27fe*/
  v7 = (HIWORD(a1) - 14) & (((__int16)(HIWORD(a1) - 14) < 0) - 1); /*0x6b2804*/
  if ( dword_87F914 - dword_87F90C >= (__int16)(a1 + 14) ) /*0x6b2807*/
    v6 = a1 + 14; /*0x6b2809*/
  LOWORD(v8) = dword_87F918 - dword_87F910; /*0x6b2818*/
  if ( dword_87F918 - dword_87F910 >= (__int16)(HIWORD(a1) + 14) ) /*0x6b2821*/
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
          v12 = (char *)g_SlaveManagerPool + 8 * v10 + 8 * v9 * result; /*0x6b2868*/
          v12[4] = 0; /*0x6b286b*/
          v12[5] = 0; /*0x6b286f*/
          v12[6] = 0; /*0x6b2873*/
          v26[0] = v10 + dword_8759A8; /*0x6b2884*/
          v13 = (__int16)(v10 + dword_8759A8); /*0x6b2889*/
          v14 = v9 + dword_8759AC; /*0x6b288c*/
          v26[1] = v9 + dword_8759AC; /*0x6b2897*/
          if ( v13 >= dword_87F90C ) /*0x6b289c*/
          {
            if ( v13 <= dword_87F914 + dword_87F90C && v14 >= dword_87F910 && v14 <= dword_87F918 + dword_87F910 ) /*0x6b28cd*/
            {
              v15 = *((unsigned __int8 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v26) + 284); /*0x6b28ef*/
              v11 = 15 * *((char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v26) + 283) /*0x6b291b*/
                  + *(_DWORD *)*(&off_83FF18 + v15);
              v16 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v26); /*0x6b291d*/
              if ( !CellClass::IsBuildable((int)v16) ) /*0x6b292a*/
                goto LABEL_24; /*0x6b292a*/
              v24 = *(_DWORD *)v26 - 0x10000; /*0x6b2959*/
              v17 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24); /*0x6b295d*/
              if ( !CellClass::IsBuildable((int)v17) ) /*0x6b2966*/
                goto LABEL_24; /*0x6b2966*/
              LOWORD(v21) = v26[0] - 1; /*0x6b2979*/
              HIWORD(v21) = v26[1] - 1; /*0x6b2982*/
              v24 = v21; /*0x6b2991*/
              v18 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24); /*0x6b2995*/
              if ( !CellClass::IsBuildable((int)v18) /*0x6b29d6*/
                || (HIWORD(v22) = v26[1],
                    LOWORD(v22) = v26[0] - 1,
                    v24 = v22,
                    v19 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24),
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
int InitSlaveManagerGrid(ObjectClass *this)
{
  int v1; // esi
  char *v2; // eax
  _BYTE *v3; // ecx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // edx
  __int16 v9; // dx
  int *j; // esi
  int v11; // ebp
  __int16 v12; // ax
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int *v20; // esi
  int v21; // esi
  int v22; // edx
  int v23; // ecx
  _DWORD *v24; // esi
  int v25; // esi
  int v26; // edx
  int v27; // esi
  ObjectClass *v28; // eax
  ObjectClass *v29; // eax
  char *v30; // [esp+8h] [ebp-4Ch]
  __int16 v31[2]; // [esp+Ch] [ebp-48h] BYREF
  __int16 v32[2]; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  int v34; // [esp+18h] [ebp-3Ch]
  int v35; // [esp+1Ch] [ebp-38h]
  int v36; // [esp+20h] [ebp-34h]
  _WORD v37[2]; // [esp+24h] [ebp-30h] BYREF
  int v38; // [esp+28h] [ebp-2Ch]
  int v39; // [esp+2Ch] [ebp-28h]
  MapSeed v40; // [esp+30h] [ebp-24h] BYREF

  if ( g_SlaveManagerPool ) /*0x6b2a7e*/
  {
    __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b2a81*/
    g_SlaveManagerPool = 0; /*0x6b2a89*/
  }
  v1 = (*(_DWORD *)&stru_87F5F0.__pad_58[716] + 1) * (*(_DWORD *)&stru_87F5F0.__pad_58[720] + 1); /*0x6b2a9e*/
  v2 = (char *)__2_YAPAXI_Z(8 * v1); /*0x6b2aa9*/
  if ( v2 ) /*0x6b2ab3*/
  {
    if ( v1 - 1 >= 0 ) /*0x6b2aba*/
    {
      v3 = v2 + 5; /*0x6b2abc*/
      v4 = v1; /*0x6b2abf*/
      do /*0x6b2ace*/
      {
        *(_DWORD *)(v3 - 5) = 0; /*0x6b2ac0*/
        *(v3 - 1) = 0; /*0x6b2ac3*/
        *v3 = 0; /*0x6b2ac7*/
        v3 += 8; /*0x6b2aca*/
        --v4; /*0x6b2acd*/
      }
      while ( v4 ); /*0x6b2ace*/
    }
    g_SlaveManagerPool = v2; /*0x6b2ad0*/
  }
  else
  {
    g_SlaveManagerPool = 0; /*0x6b2ad7*/
  }
  dword_8759A8 = *(_DWORD *)&stru_87F5F0.__pad_58[708]; /*0x6b2ae8*/
  dword_8759AC = *(_DWORD *)&stru_87F5F0.__pad_58[712]; /*0x6b2afa*/
  v40.MapSeed_field_0x18 = -65536; /*0x6b2b11*/
  result = *(_DWORD *)&stru_87F5F0.__pad_58[716] + 1; /*0x6b2b23*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_58[720] + 1; /*0x6b2b24*/
  v40.MapSeed_field_0x1C = -1; /*0x6b2b25*/
  v7 = 0; /*0x6b2b37*/
  dword_8759A4 = *(_DWORD *)&stru_87F5F0.__pad_58[716] + 1; /*0x6b2b3b*/
  dword_8759A0 = *(_DWORD *)&stru_87F5F0.__pad_58[720] + 1; /*0x6b2b40*/
  v40.MapSeed_field_0x20 = 0xFFFF; /*0x6b2b46*/
  for ( i = 0; v7 < v6; i = v7 ) /*0x6b2b4e*/
  {
    v8 = 0; /*0x6b2b56*/
    v39 = 0; /*0x6b2b5a*/
    if ( result > 0 ) /*0x6b2b5e*/
    {
      while ( 1 ) /*0x6b2b77*/
      {
        v38 = 0; /*0x6b2b77*/
        *(_DWORD *)v32 = 0; /*0x6b2b7b*/
        v30 = (char *)g_SlaveManagerPool + 8 * v8 + 8 * v7 * result; /*0x6b2b82*/
        v30[4] = 0; /*0x6b2b86*/
        v30[5] = 0; /*0x6b2b8a*/
        HIWORD(v40.MapSeed_field_0x10) = dword_8759AC + v7; /*0x6b2ba8*/
        v9 = dword_8759A8 + v8; /*0x6b2bad*/
        LOWORD(v40.MapSeed_field_0x10) = v9; /*0x6b2ba3*/
        *(_DWORD *)v31 = v40.MapSeed_field_0x10; /*0x6b2bb1*/
        for ( j = &v40.MapSeed_field_0x18; ; ++j ) /*0x6b2bb5*/
        {
          v11 = v31[1] + v9; /*0x6b2bc1*/
          if ( v11 > g_MissionQueueFrame.localVariables[160] /*0x6b2bdc*/
            && v9 - v31[1] < g_MissionQueueFrame.localVariables[160]
            && v31[1] - v9 < g_MissionQueueFrame.localVariables[160]
            && v11 <= g_MissionQueueFrame.localVariables[161] )
          {
            break; /*0x6b2bdc*/
          }
          if ( *(int *)v32 >= 3 ) /*0x6b2be3*/
            break; /*0x6b2be3*/
          v12 = HIWORD(v40.MapSeed_field_0x10) + *((_WORD *)j + 1); /*0x6b2bf1*/
          LOWORD(v34) = LOWORD(v40.MapSeed_field_0x10) + *(_WORD *)j; /*0x6b2bfa*/
          HIWORD(v34) = v12; /*0x6b2bff*/
          v9 = v34; /*0x6b2c04*/
          *(_DWORD *)v31 = v34; /*0x6b2c09*/
          ++*(_DWORD *)v32; /*0x6b2c0d*/
        }
        v13 = v9; /*0x6b2c1b*/
        v14 = v31[1] + v9; /*0x6b2c1e*/
        if ( v14 <= g_MissionQueueFrame.localVariables[160] /*0x6b2c45*/
          || v13 - v31[1] >= g_MissionQueueFrame.localVariables[160]
          || v31[1] - v13 >= g_MissionQueueFrame.localVariables[160]
          || v14 > g_MissionQueueFrame.localVariables[161] )
        {
          v30[4] = 1; /*0x6b2ee4*/
        }
        else
        {
          v15 = *((unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31) + 284); /*0x6b2c6c*/
          v16 = 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31) + 283) /*0x6b2c95*/
              + *(_DWORD *)*(&off_83FF18 + v15);
          v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2c97*/
          v38 = v16; /*0x6b2c9c*/
          v18 = (__int16)(HIWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2ca3*/
          v19 = v18 + SLOWORD(v40.MapSeed_field_0x10); /*0x6b2ca6*/
          if ( v19 > g_MissionQueueFrame.localVariables[160] /*0x6b2ccd*/
            && SLOWORD(v40.MapSeed_field_0x10) - v18 < g_MissionQueueFrame.localVariables[160]
            && v18 - SLOWORD(v40.MapSeed_field_0x10) < g_MissionQueueFrame.localVariables[160]
            && v19 <= g_MissionQueueFrame.localVariables[161] )
          {
            v35 = v40.MapSeed_field_0x10 - 0x10000; /*0x6b2cdc*/
            *(_DWORD *)v32 = v40.MapSeed_field_0x10 - 0x10000; /*0x6b2ceb*/
            v20 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6b2cf4*/
            *(_DWORD *)v40.__pad_0 = v20[9]; /*0x6b2cfd*/
            if ( !(unsigned __int8)MapSeed::IsCellInBounds(&v40) /*0x6b2d4e*/
              || v20[17] != -1
              || v20[57]
              || (v40.MapSeed_field_0x04 = v20[9], Tactical::GetCellData((Tactical *)&v40.MapSeed_field_0x04)[69])
              || (v21 = v20[14], v21 < *(int *)&stru_A8EB00.?[340])
              && v21 != 0xFFFF
              && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v21) + 736) )
            {
              v30[4] = 1; /*0x6b2d5c*/
            }
            v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2d60*/
          }
          v22 = (__int16)(LOWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2d73*/
          v23 = (__int16)(HIWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2d76*/
          if ( v23 + v22 > v17 /*0x6b2da0*/
            && v22 - v23 < v17
            && v23 - v22 < v17
            && v23 + v22 <= g_MissionQueueFrame.localVariables[161] )
          {
            LOWORD(v36) = LOWORD(v40.MapSeed_field_0x10) - 1; /*0x6b2daa*/
            HIWORD(v36) = HIWORD(v40.MapSeed_field_0x10) - 1; /*0x6b2daf*/
            v40.MapSeed_field_0x04 = v36; /*0x6b2dbe*/
            v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v40.MapSeed_field_0x04); /*0x6b2dc7*/
            *(_DWORD *)v40.__pad_0 = v24[9]; /*0x6b2dd0*/
            if ( !(unsigned __int8)MapSeed::IsCellInBounds(&v40) /*0x6b2e21*/
              || v24[17] != -1
              || v24[57]
              || (*(_DWORD *)v32 = v24[9], Tactical::GetCellData((Tactical *)v32)[69])
              || (v25 = v24[14], v25 < *(int *)&stru_A8EB00.?[340])
              && v25 != 0xFFFF
              && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v25) + 736) )
            {
              v30[4] = 1; /*0x6b2e2f*/
            }
            v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2e33*/
          }
          v26 = (__int16)(LOWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2e3d*/
          v27 = SHIWORD(v40.MapSeed_field_0x10) + v26; /*0x6b2e45*/
          if ( v27 > v17 /*0x6b2e60*/
            && v26 - SHIWORD(v40.MapSeed_field_0x10) < v17
            && SHIWORD(v40.MapSeed_field_0x10) - v26 < v17
            && v27 <= g_MissionQueueFrame.localVariables[161] )
          {
            v37[0] = -1; /*0x6b2e70*/
            v37[1] = 0; /*0x6b2e77*/
            v40.MapSeed_field_0x08 = *CellStruct::Add( /*0x6b2e89*/
                                        (CellStruct *)&v40.MapSeed_field_0x10,
                                        &v40.MapSeed_field_0x0C,
                                        v37);
            v28 = (ObjectClass *)CellCoord::To_CellObj( /*0x6b2e93*/
                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                   (__int16 *)&v40.MapSeed_field_0x08);
            if ( !System_Init_6B2520(v28) ) /*0x6b2e9c*/
              v30[4] = 1; /*0x6b2ea9*/
          }
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&v40.MapSeed_field_0x10) ) /*0x6b2eb1*/
          {
            v29 = (ObjectClass *)CellCoord::To_CellObj( /*0x6b2ec4*/
                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                   (__int16 *)&v40.MapSeed_field_0x10);
            if ( !System_Init_6B2520(v29) ) /*0x6b2ecd*/
              v30[4] = 1; /*0x6b2eda*/
          }
        }
        *(_DWORD *)v30 = v38; /*0x6b2ef0*/
        result = dword_8759A4; /*0x6b2ef6*/
        v8 = ++v39; /*0x6b2efb*/
        if ( v39 >= dword_8759A4 ) /*0x6b2f02*/
          break; /*0x6b2f02*/
        v7 = i; /*0x6b2b66*/
      }
      v6 = dword_8759A0; /*0x6b2f08*/
      v7 = i; /*0x6b2f0e*/
    }
    ++v7; /*0x6b2f14*/
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
  LOWORD(v83) = dword_87F914 - dword_87F90C; /*0x6b2fad*/
  if ( dword_87F914 - dword_87F90C >= (__int16)(a3 + 14) ) /*0x6b2fb2*/
    LOWORD(v83) = a3 + 14; /*0x6b2fb4*/
  v6 = HIWORD(v83); /*0x6b2fc4*/
  if ( dword_87F918 - dword_87F910 < SHIWORD(v83) ) /*0x6b2fcd*/
    v6 = dword_87F918 - dword_87F910; /*0x6b2fcf*/
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
  v101 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x6b3010*/
  v106 = 10; /*0x6b3018*/
  v105 = 0; /*0x6b3023*/
  v100 = v5; /*0x6b3027*/
  v108 = v6; /*0x6b302b*/
  if ( v5 <= v6 ) /*0x6b3032*/
  {
    v107 = v4; /*0x6b303b*/
    v98 = (__int16)v83; /*0x6b3047*/
    v10 = g_SlaveManagerPool; /*0x6b304b*/
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
      v12 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v96); /*0x6b3099*/
      if ( !CellClass::IsBuildable((int)v12) ) /*0x6b30a8*/
        goto LABEL_104; /*0x6b30a8*/
      v13 = v100 * dword_8759A4 + v83; /*0x6b30c5*/
      v10 = g_SlaveManagerPool; /*0x6b30c8*/
      v14 = dword_8759A4 * (v100 + 1) + v83; /*0x6b30cd*/
      if ( *((_BYTE *)g_SlaveManagerPool + 8 * v13 + 5) /*0x6b30e5*/
        || *((_BYTE *)g_SlaveManagerPool + 8 * v13 + 13)
        || *((_BYTE *)g_SlaveManagerPool + 8 * v14 + 13)
        || *((_BYTE *)g_SlaveManagerPool + 8 * v14 + 5) )
      {
        v15 = *((_DWORD *)g_SlaveManagerPool + 2 * v13); /*0x6b30f0*/
        v110 = *((_DWORD *)g_SlaveManagerPool + 2 * v13 + 2); /*0x6b30f7*/
        v16 = *((_DWORD *)g_SlaveManagerPool + 2 * v14 + 2); /*0x6b30fe*/
        v17 = *((_DWORD *)g_SlaveManagerPool + 2 * v14); /*0x6b3102*/
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
      v30 = *((_DWORD *)dword_A8EC1C + v29); /*0x6b3293*/
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
              *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v95) + 18) = -1; /*0x6b32fd*/
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
    BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)&v97); /*0x6b3333*/
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
    v41 = &off_83FF18; /*0x6b339e*/
    while ( 1 ) /*0x6b33a3*/
    {
      v42 = (_DWORD *)*v41; /*0x6b33a3*/
      if ( *(_DWORD *)*v41 == v109 && v42[1] == v110 && v42[2] == v111 && v42[3] == v112 ) /*0x6b33c4*/
        break; /*0x6b33c4*/
      ++v41; /*0x6b33c6*/
      ++v40; /*0x6b33c9*/
      if ( (int)v41 >= (int)&off_83FF64 ) /*0x6b33d0*/
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
      v47 = dword_AA10B0; /*0x6b33f1*/
    v12[14] = v47; /*0x6b3402*/
    House::AnnounceUpgrade((int)v12, -1); /*0x6b3409*/
    v77 = v12[9]; /*0x6b341b*/
    BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)&v77); /*0x6b341f*/
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
    v10 = g_SlaveManagerPool; /*0x6b35ee*/
    goto LABEL_105; /*0x6b35ee*/
  }
  v10 = g_SlaveManagerPool; /*0x6b3626*/
LABEL_110:
  __3_YAXPAX_Z(v10); /*0x6b362b*/
  g_SlaveManagerPool = 0; /*0x6b3649*/
  Cell::CreateCrater(v90, v7 - dword_886FA4, k, v93, 0); /*0x6b366a*/
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
          v63 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v98); /*0x6b36dc*/
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
            v74 = v71 - DSurface_ViewBounds; /*0x6b37c4*/
            v75 = v70 - dword_886FA4; /*0x6b37c6*/
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
  v101 = &VectorClass<ObjectClass *>::`vftable'; /*0x6b381b*/
  if ( Block && v104 ) /*0x6b382d*/
    __3_YAXPAX_Z(Block); /*0x6b3830*/
  return 1; /*0x6b3838*/
}



// ==== 0x006B3850  ObjectClass::ProcessSlaveManagerTerrain  this=ObjectClass  sig=csp ====
char ProcessSlaveManagerTerrain(ObjectClass *this)
{
  int v1; // eax
  int v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int *v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int *v15; // eax
  int v16; // ebp
  int v17; // edx
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  int v20; // ecx
  int i; // [esp+0h] [ebp-18h]
  int v23; // [esp+4h] [ebp-14h] BYREF
  int v24; // [esp+8h] [ebp-10h] BYREF
  int v25; // [esp+Ch] [ebp-Ch]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h]

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6b3858*/
  v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6b3862*/
  for ( i = v1; v1; i = v1 ) /*0x6b386d*/
  {
    v2 = *(_DWORD *)(v1 + 36); /*0x6b3877*/
    v23 = v2; /*0x6b3886*/
    v3 = (__int16)v2 - dword_8759A8; /*0x6b3892*/
    v4 = SHIWORD(v2) - dword_8759AC; /*0x6b389a*/
    v5 = v4 * dword_8759A4 + v3; /*0x6b38a5*/
    v6 = dword_8759A4 * (v4 + 1) + v3; /*0x6b38ad*/
    if ( *((_BYTE *)g_SlaveManagerPool + 8 * v5 + 5) /*0x6b38c7*/
      || *((_BYTE *)g_SlaveManagerPool + 8 * v5 + 13)
      || *((_BYTE *)g_SlaveManagerPool + 8 * v6 + 13)
      || *((_BYTE *)g_SlaveManagerPool + 8 * v6 + 5) )
    {
      v7 = 4; /*0x6b38d6*/
      v24 = *((_DWORD *)g_SlaveManagerPool + 2 * v5); /*0x6b38db*/
      v25 = *((_DWORD *)g_SlaveManagerPool + 2 * v5 + 2); /*0x6b38e3*/
      v8 = *((_DWORD *)g_SlaveManagerPool + 2 * v6); /*0x6b38eb*/
      v26 = *((_DWORD *)g_SlaveManagerPool + 2 * v6 + 2); /*0x6b38ee*/
      v27 = v8; /*0x6b38f2*/
      v9 = 1000; /*0x6b38f6*/
      v10 = 0; /*0x6b38fb*/
      v11 = &v24; /*0x6b38fd*/
      do /*0x6b3913*/
      {
        if ( *v11 < v9 ) /*0x6b3905*/
          v9 = *v11; /*0x6b3907*/
        if ( *v11 > v10 ) /*0x6b390b*/
          v10 = *v11; /*0x6b390d*/
        ++v11; /*0x6b390f*/
        --v7; /*0x6b3912*/
      }
      while ( v7 ); /*0x6b3913*/
      if ( v10 - v9 <= 15 ) /*0x6b391a*/
      {
        v23 = v2; /*0x6b3928*/
        v12 = SHIWORD(v2) + (__int16)v2; /*0x6b3934*/
        if ( v12 > g_MissionQueueFrame.localVariables[160] /*0x6b396f*/
          && (__int16)v2 - SHIWORD(v2) < g_MissionQueueFrame.localVariables[160]
          && SHIWORD(v2) - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
          && v12 <= g_MissionQueueFrame.localVariables[161]
          && *(_DWORD *)(i + 68) == -1
          && !*(_DWORD *)(i + 228) )
        {
          v23 = v2; /*0x6b3981*/
          if ( !Tactical::GetCellData((Tactical *)&v23)[69] ) /*0x6b398a*/
          {
            v13 = *(_DWORD *)(i + 56); /*0x6b3995*/
            if ( v13 >= *(int *)&stru_A8EB00.?[340] /*0x6b39b2*/
              || v13 == 0xFFFF
              || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v13) + 736) )
            {
              v14 = 4; /*0x6b39c5*/
              v15 = &v24; /*0x6b39d8*/
              *(_BYTE *)(i + 283) = v9 / 15; /*0x6b39dc*/
              do /*0x6b39ed*/
              {
                v16 = *v15++; /*0x6b39e2*/
                --v14; /*0x6b39e9*/
                *(v15 - 1) = v16 - v9; /*0x6b39ea*/
              }
              while ( v14 ); /*0x6b39ed*/
              v17 = 0; /*0x6b39f7*/
              v18 = &off_83FF18; /*0x6b39f9*/
              while ( 1 ) /*0x6b39fe*/
              {
                v19 = (_DWORD *)*v18; /*0x6b39fe*/
                if ( *(_DWORD *)*v18 == v24 && v19[1] == v25 && v19[2] == v26 && v19[3] == v27 ) /*0x6b3a19*/
                  break; /*0x6b3a19*/
                ++v18; /*0x6b3a1b*/
                ++v17; /*0x6b3a1e*/
                if ( (int)v18 >= (int)&off_83FF64 ) /*0x6b3a25*/
                  goto LABEL_36; /*0x6b3a25*/
              }
              *(_BYTE *)(i + 284) = v17; /*0x6b3a2b*/
              if ( v17 ) /*0x6b3a31*/
                v20 = g_CellTileLookup + v17 - 1; /*0x6b3a40*/
              else
                v20 = dword_AA10B0; /*0x6b3a33*/
              *(_DWORD *)(i + 56) = v20; /*0x6b3a44*/
            }
          }
        }
      }
    }
LABEL_36:
    v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6b3a47*/
  }
  __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b3a68*/
  g_SlaveManagerPool = 0; /*0x6b3a6d*/
  return 1; /*0x6b3a7c*/
}



// ==== 0x006B3A80  FlowTerrainCompute  this=-  sig=csp ====
int __fastcall FlowTerrainCompute(int a1, char a2, int a3, int a4)
{
  int result; // eax
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
  int *v15; // edx
  char v16; // [esp+13h] [ebp-19h]
  int v17; // [esp+14h] [ebp-18h]
  int v18; // [esp+18h] [ebp-14h]
  int v20; // [esp+20h] [ebp-Ch]

  result = dword_8759A4; /*0x6b3a83*/
  v5 = -1; /*0x6b3aa3*/
  v6 = -1; /*0x6b3aa6*/
  v7 = *((_DWORD *)g_SlaveManagerPool + 2 * a3 + 2 * a4 * dword_8759A4); /*0x6b3aa9*/
  v16 = a2; /*0x6b3aac*/
  v17 = v7; /*0x6b3ab0*/
  v18 = -1; /*0x6b3ab4*/
  v20 = -1; /*0x6b3ab8*/
  while ( 1 ) /*0x6b3ae5*/
  {
    if ( !v6 && !v5 ) /*0x6b3aeb*/
      goto LABEL_39; /*0x6b3aeb*/
    v8 = a3 + v6; /*0x6b3af5*/
    v9 = a4 + v5; /*0x6b3afb*/
    if ( v8 >= 0 && v9 >= 0 && v8 < result && v9 < dword_8759A0 ) /*0x6b3b23*/
      break; /*0x6b3b23*/
    if ( !a2 ) /*0x6b3c8d*/
      goto LABEL_42; /*0x6b3c8d*/
LABEL_39:
    v6 = ++v20; /*0x6b3c8f*/
    if ( v20 < 2 ) /*0x6b3c9b*/
    {
      a2 = v16; /*0x6b3ad4*/
      v7 = v17; /*0x6b3ad8*/
      v5 = v18; /*0x6b3adc*/
      result = dword_8759A4; /*0x6b3ae0*/
    }
    else
    {
      v5 = ++v18; /*0x6b3ca5*/
      if ( v18 >= 2 ) /*0x6b3cad*/
      {
        LOBYTE(result) = 1; /*0x6b3cb6*/
        return result; /*0x6b3cbc*/
      }
      a2 = v16; /*0x6b3abe*/
      v7 = v17; /*0x6b3ac2*/
      result = dword_8759A4; /*0x6b3ac6*/
      v6 = -1; /*0x6b3acb*/
      v20 = -1; /*0x6b3ace*/
    }
  }
  v10 = (char *)g_SlaveManagerPool + 8 * v8 + 8 * v9 * result; /*0x6b3b34*/
  if ( v10[4] && (!a2 || !v10[6]) ) /*0x6b3b42*/
  {
    result = abs32(*(_DWORD *)v10 - v7); /*0x6b3b50*/
    if ( result > 15 ) /*0x6b3b55*/
      goto LABEL_42; /*0x6b3b55*/
    goto LABEL_39; /*0x6b3b55*/
  }
  v11 = *(_DWORD *)v10; /*0x6b3b60*/
  result = abs32(*(_DWORD *)v10 - v7); /*0x6b3b69*/
  if ( result <= 15 ) /*0x6b3b6e*/
    goto LABEL_39; /*0x6b3b6e*/
  if ( a1 == 1 ) /*0x6b3b79*/
  {
    if ( v11 < v7 ) /*0x6b3b7d*/
    {
      if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3bba*/
        || (byte_B0B65D || !dword_B0B658)
        && dword_B0B664 > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
             &dword_B0B650,
             dword_B0B658 + dword_B0B664,
             0) )
      {
        v12 = g_SlaveMgrPool++; /*0x6b3bc7*/
        v13 = (int *)((char *)dword_B0B654 + 12 * v12); /*0x6b3bd9*/
        *v13 = v8; /*0x6b3bdc*/
        v13[1] = v9; /*0x6b3bdf*/
        v13[2] = v11; /*0x6b3be2*/
      }
      result = v17 - 15; /*0x6b3be9*/
      goto LABEL_33; /*0x6b3bec*/
    }
  }
  else if ( v11 > v7 ) /*0x6b3bf0*/
  {
    if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3c29*/
      || (byte_B0B65D || !dword_B0B658)
      && dword_B0B664 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
           &dword_B0B650,
           dword_B0B664 + dword_B0B658,
           0) )
    {
      v14 = g_SlaveMgrPool++; /*0x6b3c36*/
      v15 = (int *)((char *)dword_B0B654 + 12 * v14); /*0x6b3c48*/
      *v15 = v8; /*0x6b3c4b*/
      v15[1] = v9; /*0x6b3c4e*/
      v15[2] = v11; /*0x6b3c51*/
    }
    result = v17 + 15; /*0x6b3c58*/
LABEL_33:
    *(_DWORD *)v10 = result; /*0x6b3c5b*/
    v10[5] = 1; /*0x6b3c5d*/
  }
  if ( v10[4] ) /*0x6b3c61*/
    goto LABEL_39; /*0x6b3c61*/
  result = FlowTerrainCompute(a1, v16, v8, v9); /*0x6b3c7c*/
  if ( (_BYTE)result || v16 ) /*0x6b3c87*/
    goto LABEL_39; /*0x6b3c87*/
LABEL_42:
  LOBYTE(result) = 0; /*0x6b3cbf*/
  return result; /*0x6b3cb3*/
}



// ==== 0x006B3CD0  sub_6B3CD0  this=-  sig=ida-proto ====
char __fastcall sub_6B3CD0(int a1, char a2, int a3, unsigned int a4)
{
  int v5; // esi
  unsigned int v7; // ebp
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

  g_SlaveMgrPool = 0; /*0x6b3ce6*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b3cf6*/
  {
    __3_YAXPAX_Z(dword_B0B654); /*0x6b3cf9*/
    dword_B0B654 = 0; /*0x6b3d01*/
  }
  dword_B0B658 = 0; /*0x6b3d0b*/
  v5 = a3; /*0x6b3d11*/
  byte_B0B65D = 0; /*0x6b3d15*/
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
            v13 = (char *)g_SlaveManagerPool + 8 * v12 + 8 * v9 * dword_8759A4; /*0x6b3d90*/
            if ( v13[4] && !a2 ) /*0x6b3da1*/
              goto LABEL_20; /*0x6b3da1*/
            v14 = 15 * a1 + *(_DWORD *)v13 < 0; /*0x6b3dab*/
            v15 = 15 * a1 + *(_DWORD *)v13; /*0x6b3dab*/
            *(_DWORD *)v13 = v15; /*0x6b3dad*/
            if ( v14 || v15 > 180 ) /*0x6b3db7*/
              *(_DWORD *)v13 = v15 - 15 * a1; /*0x6b3dbb*/
            v13[5] = 1; /*0x6b3dc5*/
            if ( !(unsigned __int8)FlowTerrainCompute(a1, a2, v12, v9) && !a2 ) /*0x6b3dd8*/
            {
LABEL_20:
              __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b3dff*/
              g_SlaveManagerPool = 0; /*0x6b3e07*/
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
  g_SlaveMgrPool = 0; /*0x6b3e7a*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b3e8a*/
  {
    __3_YAXPAX_Z(dword_B0B654); /*0x6b3e8d*/
    dword_B0B654 = 0; /*0x6b3e95*/
  }
  v5 = a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4; /*0x6b3ebd*/
  v6 = (__int16)a3 - dword_8759A8; /*0x6b3ec4*/
  dword_B0B658 = 0; /*0x6b3ec6*/
  byte_B0B65D = 0; /*0x6b3ed3*/
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
    v11 = (char *)g_SlaveManagerPool + 8 * v10 + 8 * v7 * dword_8759A4; /*0x6b3f2a*/
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
      if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3f90*/
        || (byte_B0B65D || !dword_B0B658)
        && dword_B0B664 > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
             &dword_B0B650,
             dword_B0B658 + dword_B0B664,
             0) )
      {
        v16 = g_SlaveMgrPool++; /*0x6b3f9d*/
        v17 = (int *)((char *)dword_B0B654 + 12 * v16); /*0x6b3faf*/
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
      if ( g_SlaveMgrPool - 1 >= 0 ) /*0x6b4045*/
      {
        v19 = g_SlaveMgrPool; /*0x6b404a*/
        v20 = 12 * (g_SlaveMgrPool - 1); /*0x6b404d*/
        do /*0x6b4078*/
        {
          v20 -= 12; /*0x6b4056*/
          --v19; /*0x6b4074*/
          *((_DWORD *)g_SlaveManagerPool /*0x6b4075*/
          + 2 * *(_DWORD *)((char *)dword_B0B654 + v20 + 12)
          + 2 * dword_8759A4 * *(_DWORD *)((char *)dword_B0B654 + v20 + 16)) = *(_DWORD *)((char *)dword_B0B654
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
  if ( g_SlaveMgrPool - 1 >= 0 ) /*0x6b4089*/
  {
    v21 = 12 * (g_SlaveMgrPool - 1); /*0x6b408e*/
    v22 = g_SlaveMgrPool; /*0x6b4091*/
    do /*0x6b40ba*/
    {
      v21 -= 12; /*0x6b4098*/
      --v22; /*0x6b40b6*/
      *((_DWORD *)g_SlaveManagerPool /*0x6b40b7*/
      + 2 * *(_DWORD *)((char *)dword_B0B654 + v21 + 12)
      + 2 * dword_8759A4 * *(_DWORD *)((char *)dword_B0B654 + v21 + 16)) = *(_DWORD *)((char *)dword_B0B654 + v21 + 20);
    }
    while ( v22 ); /*0x6b40ba*/
  }
LABEL_36:
  g_SlaveMgrPool = 0; /*0x6b40bc*/
  if ( dword_B0B654 ) /*0x6b40c9*/
  {
    if ( byte_B0B65D ) /*0x6b40d3*/
    {
      __3_YAXPAX_Z(dword_B0B654); /*0x6b40d6*/
      dword_B0B654 = 0; /*0x6b40de*/
    }
  }
  dword_B0B658 = 0; /*0x6b40e4*/
  byte_B0B65D = 0; /*0x6b40ed*/
  return 0; /*0x6b402d*/
}



// ==== 0x006B4100  ObjectClass::Map_Get_6B4100  this=ObjectClass  sig=csp ====
int __thiscall Map_Get_6B4100(ObjectClass *this)
{
  int occupant; // edi
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
  ObjectClass *v13; // ebx
  BombClass *attachedBomb; // eax
  int v17; // [esp+14h] [ebp-14h] BYREF
  _DWORD v18[4]; // [esp+18h] [ebp-10h] BYREF

  occupant = this->occupant; /*0x6b4113*/
  v17 = occupant; /*0x6b4120*/
  v2 = SHIWORD(occupant) - dword_8759AC; /*0x6b412c*/
  v3 = (__int16)occupant - dword_8759A8; /*0x6b4130*/
  v4 = v2 * dword_8759A4 + v3; /*0x6b4136*/
  v5 = dword_8759A4 * (v2 + 1) + v3; /*0x6b4142*/
  v6 = *((_DWORD *)g_SlaveManagerPool + 2 * v4); /*0x6b4144*/
  v7 = *((_DWORD *)g_SlaveManagerPool + 2 * v5 + 2); /*0x6b414b*/
  v8 = *((_DWORD *)g_SlaveManagerPool + 2 * v5); /*0x6b414f*/
  v18[1] = *((_DWORD *)g_SlaveManagerPool + 2 * v4 + 2); /*0x6b4152*/
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
  v17 = occupant; /*0x6b4186*/
  v12 = SHIWORD(occupant) + (__int16)occupant; /*0x6b4192*/
  if ( v12 <= g_MissionQueueFrame.localVariables[160] /*0x6b41b1*/
    || (__int16)occupant - SHIWORD(occupant) >= g_MissionQueueFrame.localVariables[160]
    || SHIWORD(occupant) - (__int16)occupant >= g_MissionQueueFrame.localVariables[160]
    || v12 > g_MissionQueueFrame.localVariables[161] )
  {
    v13 = this; /*0x6b421f*/
  }
  else
  {
    v13 = this; /*0x6b41b3*/
    if ( this->ambientSoundController[2] == -1 && !this->u32_39 ) /*0x6b41bd*/
    {
      v17 = occupant; /*0x6b41cb*/
      if ( !Tactical::GetCellData((Tactical *)&v17)[69] ) /*0x6b41d4*/
      {
        attachedBomb = this->attachedBomb; /*0x6b41db*/
        if ( (int)attachedBomb >= *(int *)&stru_A8EB00.?[340] /*0x6b41f8*/
          || attachedBomb == (BombClass *)0xFFFF
          || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * (_DWORD)attachedBomb) + 736) )
        {
          return v9 / 15; /*0x6b421e*/
        }
      }
    }
  }
  return SHIBYTE(v13[1].health); /*0x6b4207*/
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
  v5 = *((_DWORD *)g_SlaveManagerPool + 2 * v4); /*0x6b4284*/
  v29[0] = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 4); /*0x6b4287*/
  v29[1] = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 5); /*0x6b428f*/
  v30 = *((_DWORD *)g_SlaveManagerPool + 2 * v4 + 2); /*0x6b4297*/
  v6 = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 12); /*0x6b429b*/
  LOBYTE(v4) = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 13); /*0x6b429f*/
  v31 = v6; /*0x6b42a3*/
  v32 = v4; /*0x6b42a7*/
  v7 = dword_8759A4 * (v3 + 1) + v2; /*0x6b42ab*/
  v28[4] = v5; /*0x6b42ae*/
  v28[0] = v5; /*0x6b42b2*/
  v8 = *((_DWORD *)g_SlaveManagerPool + 2 * v7 + 2); /*0x6b42ba*/
  v9 = *((_DWORD *)g_SlaveManagerPool + 2 * v7); /*0x6b42be*/
  v34 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 12); /*0x6b42c1*/
  v10 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 13); /*0x6b42c5*/
  v33 = v8; /*0x6b42c9*/
  v35 = v10; /*0x6b42cd*/
  v11 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 4); /*0x6b42d1*/
  v12 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 5); /*0x6b42d5*/
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
void __thiscall VectorClass_UUndoInfoStruct::Destroy(_DynamicVectorClass_UUndoInfoStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b43b6*/
  this->m_10 = 0; /*0x6b43b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b43c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b43c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b43ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6b43d1*/
  this->m_8 = 0; /*0x6b43d4*/
}



// ==== 0x006B43E0  _DynamicVectorClass_UUndoInfoStruct::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UUndoInfoStruct::GetItemIndex(_DynamicVectorClass_UUndoInfoStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b43e0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x6b43fe*/
  else
    return 0; /*0x6b43e7*/
}



// ==== 0x006B4410  _VectorClass_UUndoInfoStruct::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UUndoInfoStruct::Clear(_VectorClass_UUndoInfoStruct *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x6b441b*/
  *a2 = *v3; /*0x6b4426*/
  a2[1] = v3[1]; /*0x6b442b*/
  a2[2] = v3[2]; /*0x6b4432*/
  return a2; /*0x6b442e*/
}



// ==== 0x006B4440  _VectorClass_UUndoInfoStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::AddRef(_VectorClass_UUndoInfoStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x6b444b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6b4450*/
  {
    v3 = 0; /*0x6b4452*/
    if ( m_8 <= 0 ) /*0x6b4456*/
      return 1; /*0x6b4490*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6b4458*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x6b445b*/
    v6 = (_DWORD *)(v4 + 8); /*0x6b445e*/
    v7 = v4 - (_DWORD)v5; /*0x6b4461*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x6b447d*/
    {
      ++v3; /*0x6b447f*/
      v6 += 3; /*0x6b4480*/
      v5 += 3; /*0x6b4483*/
      if ( v3 >= m_8 ) /*0x6b4488*/
        return 1; /*0x6b4488*/
    }
  }
  return 0; /*0x6b448a*/
}



// ==== 0x006B44A0  _VectorClass_UUndoInfoStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::Release(_VectorClass_UUndoInfoStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // edx

  v3 = a2; /*0x6b44a2*/
  if ( !a2 ) /*0x6b44ae*/
  {
    (*(void (__thiscall **)(_VectorClass_UUndoInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b4591*/
    return 1; /*0x6b4597*/
  }
  v5 = a3; /*0x6b44b4*/
  LOBYTE(this->m_C) = 0; /*0x6b44b8*/
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
    v5 = (_DWORD *)__2_YAPAXI_Z(12 * a2); /*0x6b44c7*/
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
  LOBYTE(this->m_C) = 1; /*0x6b4513*/
  if ( !v8 ) /*0x6b4519*/
    return 0; /*0x6b451e*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x6b4524*/
  {
    m_8 = this->m_8; /*0x6b4529*/
    if ( a2 < m_8 ) /*0x6b452e*/
      m_8 = a2; /*0x6b4530*/
    if ( m_8 > 0 ) /*0x6b4534*/
    {
      v12 = 0; /*0x6b4536*/
      do /*0x6b4554*/
      {
        v13 = &v8[v12]; /*0x6b453b*/
        v14 = (_DWORD *)(v12 * 4 + *(_DWORD *)&this->m_1[3]); /*0x6b453e*/
        v12 += 3; /*0x6b4540*/
        --m_8; /*0x6b4543*/
        *v13 = *v14; /*0x6b4546*/
        v13[1] = v14[1]; /*0x6b454b*/
        v13[2] = v14[2]; /*0x6b4551*/
      }
      while ( m_8 ); /*0x6b4554*/
      v3 = a2; /*0x6b4556*/
    }
    if ( BYTE1(this->m_C) ) /*0x6b455c*/
    {
      __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b4565*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x6b456d*/
    }
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x6b4578*/
  this->m_8 = v3; /*0x6b457e*/
  BYTE1(this->m_C) = a3 == 0; /*0x6b4581*/
  return 1; /*0x6b451b*/
}



// ==== 0x006B45A0  _VectorClass_UUndoInfoStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UUndoInfoStruct::ddtor(_VectorClass_UUndoInfoStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6b45ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b45b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b45bb*/
  }
  BYTE1(this->m_C) = 0; /*0x6b45be*/
  this->m_8 = 0; /*0x6b45c1*/
}



// ==== 0x006B45D0  _VectorClass_UUndoInfoStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UUndoInfoStruct::GetSize(_VectorClass_UUndoInfoStruct *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6b45d0*/
    return 0; /*0x6b45de*/
  m_8 = this->m_8; /*0x6b45e4*/
  result = 0; /*0x6b45e7*/
  if ( m_8 <= 0 ) /*0x6b45eb*/
    return -1; /*0x6b4616*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x6b45f1*/
  {
    if ( ++result >= m_8 ) /*0x6b4614*/
      return -1; /*0x6b4614*/
  }
  return result; /*0x6b45db*/
}



// ==== 0x006B4620  _VectorClass_UUndoInfoStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UUndoInfoStruct::GetCapacity(_VectorClass_UUndoInfoStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b4620*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x6b463e*/
  else
    return 0; /*0x6b4627*/
}



// ==== 0x006B4650  _DynamicVectorClass_UUndoInfoStruct::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::SetCapacity(_DynamicVectorClass_UUndoInfoStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // edx
  int v14; // eax

  v3 = a2; /*0x6b4652*/
  if ( !a2 ) /*0x6b465e*/
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UUndoInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b4731*/
    goto LABEL_26; /*0x6b4731*/
  }
  v5 = a3; /*0x6b4664*/
  LOBYTE(this->m_C) = 0; /*0x6b4668*/
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
  v5 = (_DWORD *)__2_YAPAXI_Z(12 * a2); /*0x6b4677*/
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
  LOBYTE(this->m_C) = 1; /*0x6b46c3*/
  if ( !v8 ) /*0x6b46c9*/
    return 0; /*0x6b474d*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x6b46cb*/
  {
    m_8 = this->m_8; /*0x6b46d0*/
    if ( a2 < m_8 ) /*0x6b46d5*/
      m_8 = a2; /*0x6b46d7*/
    if ( m_8 > 0 ) /*0x6b46db*/
    {
      v11 = 0; /*0x6b46dd*/
      do /*0x6b46fb*/
      {
        v12 = &v8[v11]; /*0x6b46e2*/
        v13 = (_DWORD *)(v11 * 4 + *(_DWORD *)&this->m_1[3]); /*0x6b46e5*/
        v11 += 3; /*0x6b46e7*/
        --m_8; /*0x6b46ea*/
        *v12 = *v13; /*0x6b46ed*/
        v12[1] = v13[1]; /*0x6b46f2*/
        v12[2] = v13[2]; /*0x6b46f8*/
      }
      while ( m_8 ); /*0x6b46fb*/
      v3 = a2; /*0x6b46fd*/
    }
    if ( BYTE1(this->m_C) ) /*0x6b4703*/
    {
      __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b470c*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x6b4714*/
    }
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x6b471f*/
  this->m_8 = v3; /*0x6b4725*/
  BYTE1(this->m_C) = a3 == 0; /*0x6b4728*/
LABEL_26:
  v14 = this->m_8; /*0x6b4734*/
  if ( v14 < this->m_10 ) /*0x6b473c*/
    this->m_10 = v14; /*0x6b473e*/
  return 1; /*0x6b4741*/
}



// ==== 0x006B4760  _DynamicVectorClass_UUndoInfoStruct::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UUndoInfoStruct::FindItemIndex(_DynamicVectorClass_UUndoInfoStruct *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b4760*/
  result = 0; /*0x6b4765*/
  if ( m_10 <= 0 ) /*0x6b476b*/
    return -1; /*0x6b4796*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x6b4771*/
  {
    if ( ++result >= m_10 ) /*0x6b4794*/
      return -1; /*0x6b4794*/
  }
  return result; /*0x6b4799*/
}



// ==== 0x006B47A0  _VectorClass_UUndoInfoStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UUndoInfoStruct::QueryInterface(_VectorClass_UUndoInfoStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b47a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UndoInfoStruct>::`vftable'; /*0x6b47a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b47b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b47b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b47c0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b47cb*/
  this->m_8 = 0; /*0x6b47d1*/
  if ( (a2 & 1) != 0 ) /*0x6b47d8*/
    __3_YAXPAX_Z(this); /*0x6b47db*/
  return this->__pad_0; /*0x6b47e5*/
}



// ==== 0x006B47F0  _DynamicVectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_(
        _DynamicVectorClass_UUndoInfoStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b47f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UndoInfoStruct>::`vftable'; /*0x6b47f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b4800*/
  {
    __3_YAXPAX_Z(v3); /*0x6b4808*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b4810*/
  }
  BYTE1(this->m_C) = 0; /*0x6b481b*/
  this->m_8 = 0; /*0x6b4821*/
  if ( (a2 & 1) != 0 ) /*0x6b4828*/
    __3_YAXPAX_Z(this); /*0x6b482b*/
  return this->__pad_0; /*0x6b4835*/
}



// ==== 0x006B4840  sub_6B4840  this=-  sig=ida-proto ====
void sub_6B4840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b484c*/
  dbl_B0B710 = Math::Sqrt(v0 + v0); /*0x6b485e*/
}



// ==== 0x006B4870  sub_6B4870  this=-  sig=ida-proto ====
void sub_6B4870()
{
  dbl_B0B760 = dbl_B0B710 / 60.0; /*0x6b487c*/
}



// ==== 0x006B4890  sub_6B4890  this=-  sig=ida-proto ====
void sub_6B4890()
{
  dbl_B0B748 = 1.0 / dbl_B0B760; /*0x6b489c*/
}



// ==== 0x006B48B0  sub_6B48B0  this=-  sig=ida-proto ====
void sub_6B48B0()
{
  dbl_B0B740 = 0.0174532925199433 * 45.0; /*0x6b48bc*/
}



// ==== 0x006B48D0  sub_6B48D0  this=-  sig=ida-proto ====
void sub_6B48D0()
{
  dbl_B0B718 = 0.0174532925199433 * 60.0; /*0x6b48dc*/
}



// ==== 0x006B48F0  sub_6B48F0  this=-  sig=ida-proto ====
void sub_6B48F0()
{
  dbl_B0B6F0 = 0.0174532925199433 * 90.0; /*0x6b48fc*/
}



// ==== 0x006B4910  sub_6B4910  this=-  sig=ida-proto ====
__int64 sub_6B4910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B6F0 - dbl_B0B718); /*0x6b4922*/
  result = Math::RoundToInt(v0 * dbl_B0B710 * 0.5); /*0x6b4936*/
  dword_B0B768 = result; /*0x6b493b*/
  return result; /*0x6b4940*/
}



// ==== 0x006B4950  sub_6B4950  this=-  sig=ida-proto ====
void sub_6B4950()
{
  dbl_B0B720 = Math::ArcTan((double)dword_B0B768 * 0.00390625); /*0x6b4967*/
}



// ==== 0x006B4980  sub_6B4980  this=-  sig=ida-proto ====
void sub_6B4980()
{
  dbl_B0B738 = Math::ArcTan((double)(2 * dword_B0B768) / dbl_B0B710); /*0x6b49a2*/
}



// ==== 0x006B49B0  sub_6B49B0  this=-  sig=ida-proto ====
__int64 sub_6B49B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B768) + 0.5); /*0x6b49cb*/
  dword_B0B75C = result; /*0x6b49d0*/
  return result; /*0x6b49d6*/
}



// ==== 0x006B49E0  sub_6B49E0  this=-  sig=ida-proto ====
int sub_6B49E0()
{
  word_B0B708 = 0; /*0x6b49e2*/
  word_B0B70A = 0; /*0x6b49e8*/
  return 0; /*0x6b49ee*/
}



// ==== 0x006B49F0  sub_6B49F0  this=-  sig=ida-proto ====
int sub_6B49F0()
{
  dword_B0B728 = 0; /*0x6b49f2*/
  dword_B0B72C = 0; /*0x6b49f7*/
  dword_B0B730 = 0; /*0x6b49fc*/
  return 0; /*0x6b4a01*/
}



// ==== 0x006B4A10  sub_6B4A10  this=-  sig=ida-proto ====
int sub_6B4A10()
{
  dword_B0B758 = 0; /*0x6b4a15*/
  dword_B0B750 = 128; /*0x6b4a1f*/
  dword_B0B754 = 128; /*0x6b4a24*/
  return 128; /*0x6b4a29*/
}



// ==== 0x006B4A30  sub_6B4A30  this=-  sig=ida-proto ====
int sub_6B4A30()
{
  dword_B0B6F8 = 0; /*0x6b4a32*/
  dword_B0B6FC = 0; /*0x6b4a37*/
  dword_B0B700 = 0; /*0x6b4a3c*/
  dword_B0B704 = 0; /*0x6b4a41*/
  return 0; /*0x6b4a46*/
}



// ==== 0x006B4A50  UnitClass::Create  this=SmudgeClass  sig=csp ====
void **__thiscall UnitClass::Create(UnitClass *this, void *a2, _DWORD *a3, int a4)
{
  int v5; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x6b4a53*/
  this->FootClass = &SmudgeClass::`vftable'; /*0x6b4a5c*/
  this->? = (int)a2; /*0x6b4a62*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4a6c*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4a73*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4a79*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x6b4a80*/
  if ( dword_A8B1F0 < dword_A8B1E8 /*0x6b4abc*/
    || (byte_A8B1ED || !dword_A8B1E8)
    && dword_A8B1F4 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B1E0 + 8))(
         &dword_A8B1E0,
         dword_A8B1E8 + dword_A8B1F4,
         0) )
  {
    v5 = dword_A8B1F0++; /*0x6b4ac9*/
    *((_DWORD *)dword_A8B1E4 + v5) = this; /*0x6b4ad8*/
  }
  if ( *a3 != dword_B0B728 || a3[1] != dword_B0B72C || a3[2] != dword_B0B730 ) /*0x6b4b03*/
  {
    dword_83FFD8 = a4; /*0x6b4b0b*/
    if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x6b4b14*/
    {
      ObjectClass::Destroy((ObjectClass *)this); /*0x6b4b1f*/
      return &this->FootClass; /*0x6b4b27*/
    }
    dword_83FFD8 = -1; /*0x6b4b2a*/
  }
  return &this->FootClass; /*0x6b4b26*/
}



// ==== 0x006B4BE0  SmudgeClass::UnloadPassengers  this=SmudgeClass  sig=csp ====
char __thiscall UnitClass::UnloadPassengers(SmudgeClass *this, int a2)
{
  int v2; // edi
  void (__thiscall **vtable0)(SmudgeClass *); // edx
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6b4be3*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) || v2 != 1 && v2 != 3 ) /*0x6b4bfb*/
    return 0; /*0x6b4c61*/
  a2 = *(_DWORD *)(*((int (__thiscall **)(SmudgeClass *, _BYTE *))this->ObjectClass + 110))(this, v6); /*0x6b4c0e*/
  if ( (int)dword_A8E7AC > 0 || stru_A8EB00.?[391] || (unsigned __int8)Cell::IsWalkable((Cell *)this->Type, &a2, 1) ) /*0x6b4c31*/
    UnitClass::CreateUnloadPlacementCraters((int *)this->Type, &a2); /*0x6b4c45*/
  vtable0 = (void (__thiscall **)(SmudgeClass *))this->ObjectClass; /*0x6b4c4a*/
  this->? = 0; /*0x6b4c4e*/
  vtable0[62](this); /*0x6b4c52*/
  return 1; /*0x6b4c58*/
}



// ==== 0x006B4C70  nullsub_232  this=-  sig=csp ====
void __stdcall nullsub_232(int a1)
{
  ; /*0x6b4c70*/
}



// ==== 0x006B4C80  UnitClass::ReadINI  this=UnitClass  sig=csp ====
int __thiscall UnitClass::ReadINI(INIClass *this)
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
  UnitClass *v12; // eax
  int i; // [esp+4h] [ebp-94h]
  int v14; // [esp+8h] [ebp-90h]
  _DWORD v15[3]; // [esp+Ch] [ebp-8Ch] BYREF
  char String[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x6b4c89*/
  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&g_INI_Key_Special.?); /*0x6b4c96*/
  v3 = 0; /*0x6b4c9b*/
  v14 = result; /*0x6b4c9f*/
  for ( i = 0; i < v14; ++i ) /*0x6b4ca7*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6b4cba*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&g_INI_Key_Special.?,
                                         v3);
    INIClass::GetString(this, (unsigned __int8 *)&g_INI_Key_Special.?, StringByIndex, 0, String, 128); /*0x6b4cd4*/
    v5 = strtok(String, Str); /*0x6b4ce3*/
    _6B5440 = Object_Read_6B5440((ObjectClass *)v5); /*0x6b4cf2*/
    if ( _6B5440 != -1 ) /*0x6b4cf7*/
    {
      v7 = strtok(0, Str); /*0x6b4d04*/
      if ( v7 ) /*0x6b4d0e*/
      {
        v8 = atoi(v7); /*0x6b4d21*/
        v9 = strtok(0, Str); /*0x6b4d23*/
        v10 = atoi(v9); /*0x6b4d35*/
        v11 = strtok(0, Str); /*0x6b4d38*/
        if ( !v11 || !atoi(v11) ) /*0x6b4d45*/
        {
          v12 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b4d56*/
          if ( v12 ) /*0x6b4d60*/
          {
            v15[0] = (v8 << 8) + 128; /*0x6b4d7a*/
            v15[1] = (v10 << 8) + 128; /*0x6b4d7e*/
            v15[2] = 0; /*0x6b4d8e*/
            UnitClass::Create(v12, *(void **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * _6B5440), v15, -1); /*0x6b4d9d*/
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
  INIClass::ClearSection((int)this, (int)unk_81732C, 0); /*0x6b4de7*/
  v7 = 0; /*0x6b4dec*/
  do /*0x6b4e8e*/
  {
    for ( i = 0; i < 512; ++i ) /*0x6b4df0*/
    {
      v8[0] = i; /*0x6b4df6*/
      v8[1] = v1; /*0x6b4e01*/
      v3 = CellCoord::To_CellObj(&dword_87F7E8, v8); /*0x6b4e0b*/
      v4 = v3[18]; /*0x6b4e0d*/
      if ( v4 != -1 && !*((_BYTE *)v3 + 287) ) /*0x6b4e15*/
      {
        v5 = *((_DWORD *)dword_A8EC1C + v4); /*0x6b4e29*/
        sprintf(Buffer, "%d", v7); /*0x6b4e37*/
        sprintf(Source, "%s,%d,%d,%d", (const char *)(v5 + 36), i, v1, *((unsigned __int8 *)v3 + 287)); /*0x6b4e55*/
        LOBYTE(v4) = INIClass::SetString(v9, (unsigned __int8 *)unk_81732C, Buffer, Source); /*0x6b4e71*/
        ++v7; /*0x6b4e76*/
      }
    }
    ++v1; /*0x6b4e87*/
  }
  while ( v1 < 512 ); /*0x6b4e8e*/
  return v4; /*0x6b4e94*/
}



// ==== 0x006B4EA0  SmudgeClass::SaveLoadData  this=SmudgeClass  sig=csp ====
int __thiscall UnitClass::SaveLoadData(SmudgeClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x6b4eb1*/
  if ( Register >= 0 ) /*0x6b4eb5*/
  {
    if ( a2 ) /*0x6b4eb9*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x6b4ec2*/
      *a2 = &SmudgeClass::`vftable'; /*0x6b4ec7*/
      a2[1] = &SmudgeClass::`vftable'; /*0x6b4ecd*/
      a2[2] = &SmudgeClass::`vftable'; /*0x6b4ed4*/
      a2[3] = &SmudgeClass::`vftable'; /*0x6b4edb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x6b4eee*/
  }
  return Register; /*0x6b4ef5*/
}



// ==== 0x006B4F00  SmudgeClass::SaveState  this=SmudgeClass  sig=csp ====
int __stdcall UnitClass::SaveState(SmudgeClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6b4f14*/
}



// ==== 0x006B4F20  SmudgeClass::CheckStatus  this=SmudgeClass  sig=csp ====
int __thiscall UnitClass::CheckStatus(SmudgeClass *this)
{
  return (int)this->Type; /*0x6b4f26*/
}



// ==== 0x006B4F30  SmudgeClass::StubReturn176  this=SmudgeClass  sig=csp ====
int UnitClass::StubReturn176(SmudgeClass *this)
{
  return 176; /*0x6b4f35*/
}



// ==== 0x006B4F40  SmudgeClass::StubReturn29  this=SmudgeClass  sig=csp ====
int UnitClass::StubReturn29(SmudgeClass *this)
{
  return 29; /*0x6b4f45*/
}



// ==== 0x006B4F50  SmudgeClass::GetClassID  this=SmudgeClass  sig=csp ====
int __stdcall UnitClass::GetClassID(SmudgeClass *this, _DWORD *a2)
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
void __stdcall nullsub_233(SmudgeClass *this, int a2)
{
  ; /*0x6b4f90*/
}



// ==== 0x006B4FA0  SmudgeClass::DestroySmudge  this=SmudgeClass  sig=csp ====
void **__thiscall UnitClass::DestroySmudge(SmudgeClass *this, char a2)
{
  int v3; // eax
  SmudgeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &SmudgeClass::`vftable'; /*0x6b4fa6*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4fac*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4fb3*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4fba*/
  AbstractClass::AnnounceExpiredPointer(&this->ObjectClass, 1); /*0x6b4fc1*/
  v5 = this; /*0x6b4fd6*/
  v3 = (*(int (__thiscall **)(_DWORD *, SmudgeClass **))(dword_A8B1E0 + 16))(&dword_A8B1E0, &v5); /*0x6b4fda*/
  if ( v3 != -1 && v3 < dword_A8B1F0 && v3 < --dword_A8B1F0 ) /*0x6b4ff5*/
  {
    do /*0x6b500d*/
    {
      ++v3; /*0x6b4ffd*/
      *((_DWORD *)dword_A8B1E4 + v3 - 1) = *((_DWORD *)dword_A8B1E4 + v3); /*0x6b5001*/
    }
    while ( v3 < dword_A8B1F0 ); /*0x6b500d*/
  }
  if ( byte_A8E9A0 ) /*0x6b5016*/
    ObjectClass::Undeploy((ObjectClass *)this); /*0x6b501a*/
  this->Type = 0; /*0x6b5021*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x6b502b*/
  if ( (a2 & 1) != 0 ) /*0x6b5035*/
    __3_YAXPAX_Z(this); /*0x6b5038*/
  return &this->ObjectClass; /*0x6b5042*/
}



// ==== 0x006B5050  sub_6B5050  this=-  sig=ida-proto ====
int sub_6B5050()
{
  dword_B0B778 = 0; /*0x6b5052*/
  dword_B0B77C = 0; /*0x6b5057*/
  dword_B0B780 = 0; /*0x6b505c*/
  dword_B0B784 = 0; /*0x6b5061*/
  return 0; /*0x6b5066*/
}



// ==== 0x006B5070  sub_6B5070  this=-  sig=ida-proto ====
void sub_6B5070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b507c*/
  dbl_B0B790 = Math::Sqrt(v0 + v0); /*0x6b508e*/
}



// ==== 0x006B50A0  sub_6B50A0  this=-  sig=ida-proto ====
void sub_6B50A0()
{
  dbl_B0B7E0 = dbl_B0B790 / 60.0; /*0x6b50ac*/
}



// ==== 0x006B50C0  sub_6B50C0  this=-  sig=ida-proto ====
void sub_6B50C0()
{
  dbl_B0B7C8 = 1.0 / dbl_B0B7E0; /*0x6b50cc*/
}



// ==== 0x006B50E0  sub_6B50E0  this=-  sig=ida-proto ====
void sub_6B50E0()
{
  dbl_B0B7C0 = 0.0174532925199433 * 45.0; /*0x6b50ec*/
}



// ==== 0x006B5100  sub_6B5100  this=-  sig=ida-proto ====
void sub_6B5100()
{
  dbl_B0B798 = 0.0174532925199433 * 60.0; /*0x6b510c*/
}



// ==== 0x006B5120  sub_6B5120  this=-  sig=ida-proto ====
void sub_6B5120()
{
  dbl_B0B770 = 0.0174532925199433 * 90.0; /*0x6b512c*/
}



// ==== 0x006B5140  sub_6B5140  this=-  sig=ida-proto ====
__int64 sub_6B5140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B770 - dbl_B0B798); /*0x6b5152*/
  result = Math::RoundToInt(v0 * dbl_B0B790 * 0.5); /*0x6b5166*/
  dword_B0B7E8 = result; /*0x6b516b*/
  return result; /*0x6b5170*/
}



// ==== 0x006B5180  sub_6B5180  this=-  sig=ida-proto ====
void sub_6B5180()
{
  dbl_B0B7A0 = Math::ArcTan((double)dword_B0B7E8 * 0.00390625); /*0x6b5197*/
}



// ==== 0x006B51B0  sub_6B51B0  this=-  sig=ida-proto ====
void sub_6B51B0()
{
  dbl_B0B7B8 = Math::ArcTan((double)(2 * dword_B0B7E8) / dbl_B0B790); /*0x6b51d2*/
}



// ==== 0x006B51E0  sub_6B51E0  this=-  sig=ida-proto ====
__int64 sub_6B51E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B7E8) + 0.5); /*0x6b51fb*/
  dword_B0B7DC = result; /*0x6b5200*/
  return result; /*0x6b5206*/
}



// ==== 0x006B5210  sub_6B5210  this=-  sig=ida-proto ====
int sub_6B5210()
{
  Map_BottomRightCell = 0; /*0x6b5212*/
  return 0; /*0x6b521e*/
}



// ==== 0x006B5220  sub_6B5220  this=-  sig=ida-proto ====
int sub_6B5220()
{
  dword_B0B7A8 = 0; /*0x6b5222*/
  dword_B0B7AC = 0; /*0x6b5227*/
  dword_B0B7B0 = 0; /*0x6b522c*/
  return 0; /*0x6b5231*/
}



// ==== 0x006B5240  MapCoords::Init  this=MapCoords  sig=ida-proto ====
int MapCoords_Init()
{
  dword_B0B7D8 = 0; /*0x6b5245*/
  dword_B0B7D0 = 128; /*0x6b524f*/
  dword_B0B7D4 = 128; /*0x6b5254*/
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
  this->ArrayIndex = -1; /*0x6b5277*/
  this->Width = 1; /*0x6b5281*/
  this->Height = 1; /*0x6b5287*/
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
  v3 = dword_A8EC28; /*0x6b52e1*/
  if ( dword_A8EC28 < dword_A8EC20 /*0x6b5322*/
    || (byte_A8EC25 || !dword_A8EC20)
    && dword_A8EC2C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EC18 + 8))(
               &dword_A8EC18,
               dword_A8EC20 + dword_A8EC2C,
               0) == 0,
        v3 = dword_A8EC28,
        !v4) )
  {
    dword_A8EC28 = v3 + 1; /*0x6b5327*/
    *((_DWORD *)dword_A8EC1C + v3) = this; /*0x6b5331*/
    v3 = dword_A8EC28; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( v3 <= 0 ) /*0x6b533d*/
  {
LABEL_11:
    this->ArrayIndex = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = (void **)dword_A8EC1C; /*0x6b533f*/
    while ( *v6 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      ++v6; /*0x6b534a*/
      if ( v5 >= v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    this->ArrayIndex = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }
}



// ==== 0x006B5440  ObjectClass::Object_Read_6B5440  this=ObjectClass  sig=csp ====
int __thiscall Object_Read_6B5440(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x6b5446*/
    return -1; /*0x6b5446*/
  v2 = 0; /*0x6b544d*/
  if ( *(int *)&stru_A8EB00.?[68] <= 0 ) /*0x6b5451*/
    return -1; /*0x6b5476*/
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v2) + 36), (char *)this) ) /*0x6b546a*/
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[68] ) /*0x6b5474*/
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

  result = dword_A8EC28; /*0x6b5490*/
  for ( i = 0; i < dword_A8EC28; ++i ) /*0x6b54a3*/
  {
    v4 = *((_DWORD *)dword_A8EC1C + i); /*0x6b54af*/
    if ( *(_BYTE *)(v4 + 556) ) /*0x6b54b2*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x6b54dc*/
      CCFileClass::Construct(v5, Buffer); /*0x6b54ed*/
      *(_DWORD *)(v4 + 164) = CCFileClass::ReadEntireFile(v5); /*0x6b54ff*/
      v5[0] = &CCFileClass::`vftable'; /*0x6b5505*/
      v7 = 0; /*0x6b550d*/
      Vector::Clear((int)v6); /*0x6b5515*/
      v5[0] = &off_7E1668; /*0x6b551e*/
      BufferIOFileClass::Dtor(v5); /*0x6b5526*/
    }
    result = dword_A8EC28; /*0x6b552b*/
  }
  return result; /*0x6b553a*/
}



// ==== 0x006B5550  SmudgeTypeClass::GetType  this=SmudgeTypeClass  sig=csp ====
bool __thiscall SmudgeTypeClass::GetType(SmudgeTypeClass *this, __int16 *a2, int a3)
{
  UnitClass *v4; // eax
  int v5; // edx
  bool result; // al
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( UnitClass::Create(v4, this, v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/
}



// ==== 0x006B55C0  SmudgeTypeClass::GetFlag  this=SmudgeTypeClass  sig=csp ====
void **__thiscall SmudgeTypeClass::GetFlag(SmudgeTypeClass *this, int a2)
{
  UnitClass *v3; // eax

  v3 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
    return UnitClass::Create(v3, this, &dword_B0B7A8, -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/
}



// ==== 0x006B55F0  SmudgeTypeClass::vt_entry_A0  this=SmudgeTypeClass  sig=csp ====
void __thiscall SmudgeTypeClass::vt_entry_A0(SmudgeTypeClass *this, int *a2, int *a3, int a4, int a5, __int16 *a6)
{
  int v7; // ebx
  int v8; // edx
  int Width; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v7 = (*((int (__thiscall **)(SmudgeTypeClass *))this->ObjectTypeClass + 39))(this); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v14 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      Width = this->Width; /*0x6b5623*/
      v14 += -15 * (a4 / Width + a4 % Width); /*0x6b5659*/
      v13 += 60 * (a4 / Width - a4 % Width) / 2; /*0x6b5661*/
    }
    v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a6); /*0x6b5674*/
    v12 = *((__int16 *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0); /*0x6b56b4*/
  }
}



// ==== 0x006B56D0  SmudgeTypeClass::GetSize  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::GetSize(SmudgeTypeClass *this, unsigned __int8 ***a2)
{
  int result; // eax
  char Bool_Overwrite; // al
  char Burn; // cl
  char v6; // al
  int Width; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6b56e3*/
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x6b56eb*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCrater, this->Crater); /*0x6b570b*/
    Burn = this->Burn; /*0x6b5710*/
    this->Crater = Bool_Overwrite; /*0x6b5716*/
    v6 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aBurn, Burn); /*0x6b5725*/
    Width = this->Width; /*0x6b5732*/
    this->Burn = v6; /*0x6b5739*/
    this->Width = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                    (bool *)a2,
                    (unsigned __int8 *)this->?,
                    (unsigned __int8 *)&stru_82BA00.?[151],
                    Width);
    this->Height = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                     (bool *)a2,
                     (unsigned __int8 *)this->?,
                     (unsigned __int8 *)g_INI_Key_Height,
                     this->Height);
    if ( this->? ) /*0x6b5764*/
      _makepath(Buffer, 0, 0, this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x6b57b4*/
    else
      _makepath(Buffer, 0, 0, this->?, Ext); /*0x6b5784*/
    result = (int)SearchMIXFile(Buffer, 0); /*0x6b57c2*/
    this->? = (SHPStruct *)result; /*0x6b57c7*/
    LOBYTE(result) = 1; /*0x6b57ce*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6b57db*/
  }
  return result; /*0x6b57cd*/
}



// ==== 0x006B57F0  SmudgeTypeClass::PowerDrainUpdate  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::PowerDrainUpdate(SmudgeTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6b57f9*/
  Power::TimerProcess(this->ArrayIndex); /*0x6b5807*/
  LOBYTE(v3) = this->Crater; /*0x6b580c*/
  Power::FlagProcess((Power *)a2, v3); /*0x6b5815*/
  LOBYTE(v4) = this->Burn; /*0x6b581a*/
  Power::FlagProcess((Power *)a2, v4); /*0x6b5823*/
  Power::TimerProcess(this->Width); /*0x6b5831*/
  return Power::TimerProcess(this->Height); /*0x6b5844*/
}



// ==== 0x006B5850  SmudgeTypeClass::LoadTypeData  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::LoadTypeData(SmudgeTypeClass *this, int a2)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( this ) /*0x6b5866*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x6b586f*/
      this->ObjectTypeClass = &SmudgeTypeClass::`vftable'; /*0x6b5874*/
      this->? = &SmudgeTypeClass::`vftable'; /*0x6b587a*/
      this->? = &SmudgeTypeClass::`vftable'; /*0x6b5881*/
      this->? = &SmudgeTypeClass::`vftable'; /*0x6b5888*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x6b5891*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/
}



// ==== 0x006B58B0  SmudgeTypeClass::SaveToINI  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::SaveToINI(SmudgeTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/
}



// ==== 0x006B58D0  SmudgeTypeClass::GetClassIdentifier  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::GetClassIdentifier(SmudgeTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = unk_7E961C; /*0x6b5900*/
  return 0; /*0x6b58dd*/
}



// ==== 0x006B5910  FactoryClass::FindOrCreate  this=AbstractTypeClass  sig=csp ====
int __thiscall FactoryClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6b592c*/
    return 0; /*0x6b598f*/
  v2 = 0; /*0x6b593d*/
  if ( dword_A8EC28 <= 0 ) /*0x6b5941*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0x2A4u) ) /*0x6b596b*/
      return SmudgeTypeClass::SmudgeTypeClass(Source); /*0x6b5981*/
    return 0; /*0x6b5975*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8EC1C + v2) + 36), Source) ) /*0x6b595a*/
  {
    if ( ++v2 >= dword_A8EC28 ) /*0x6b5964*/
      goto LABEL_6; /*0x6b5964*/
  }
  return *((_DWORD *)dword_A8EC1C + v2); /*0x6b597f*/
}



// ==== 0x006B59A0  StandardCreateUnitAtCoords  this=ObjectClass  sig=csp ====
char __fastcall StandardCreateUnitAtCoords(_DWORD *a1, int a2, int a3, char a4)
{
  _DWORD *v4; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // eax
  UnitClass *v16; // esi
  int v17; // eax
  UnitClass *v18; // esi
  int v19; // eax
  int v20; // [esp+4h] [ebp-40h]
  int v21; // [esp+8h] [ebp-3Ch] BYREF
  int v22; // [esp+Ch] [ebp-38h]
  _DWORD *v23; // [esp+10h] [ebp-34h]
  void **v24; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  int v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  int v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  void **v30; // [esp+2Ch] [ebp-18h] BYREF
  void *v31; // [esp+30h] [ebp-14h]
  int v32; // [esp+34h] [ebp-10h]
  char v33; // [esp+39h] [ebp-Bh]
  int i; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  v4 = a1; /*0x6b59a4*/
  v22 = a2; /*0x6b59a6*/
  v23 = a1; /*0x6b59aa*/
  if ( __PAIR32__(a1[1] / 256, *a1 / 256) == Map_BottomRightCell ) /*0x6b59d5*/
    return 0; /*0x6b59e6*/
  Game::LockMutex((Game *)&v30, 0, 0); /*0x6b59f4*/
  v6 = 0; /*0x6b59fe*/
  v30 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5a02*/
  v35 = 10; /*0x6b5a0a*/
  for ( i = 0; v6 < *(int *)&stru_A8EB00.?[68]; ++v6 ) /*0x6b5a16*/
  {
    v7 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v6); /*0x6b5a21*/
    if ( *(_BYTE *)(v7 + 673) ) /*0x6b5a24*/
    {
      LOWORD(v20) = *v4 / 256; /*0x6b5a3f*/
      HIWORD(v20) = v4[1] / 256; /*0x6b5a57*/
      v21 = v20; /*0x6b5a64*/
      if ( (unsigned __int8)Cell::IsWalkable((Cell *)v7, &v21, a4) ) /*0x6b5a6c*/
      {
        if ( i < v32 /*0x6b5a9f*/
          || (v33 || !v32)
          && v35 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
        {
          v8 = i++; /*0x6b5aaa*/
          *((_DWORD *)v31 + v8) = v7; /*0x6b5ab5*/
        }
      }
    }
  }
  Game::LockMutex((Game *)&v24, 0, 0); /*0x6b5acc*/
  v9 = 10; /*0x6b5ad1*/
  v10 = 0; /*0x6b5ad6*/
  v11 = i; /*0x6b5ad8*/
  v24 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5adc*/
  v29 = 10; /*0x6b5ae6*/
  v28 = 0; /*0x6b5aea*/
  if ( i > 0 ) /*0x6b5aee*/
  {
    v12 = v26; /*0x6b5af4*/
    while ( 1 ) /*0x6b5b01*/
    {
      v13 = *((_DWORD *)v31 + v10); /*0x6b5b01*/
      v14 = *(_DWORD *)(v13 + 664); /*0x6b5b0a*/
      if ( !a4 ) /*0x6b5b10*/
        break; /*0x6b5b10*/
      if ( v14 <= 1 || *(int *)(v13 + 668) <= 1 ) /*0x6b5b5f*/
        goto LABEL_35; /*0x6b5b5f*/
      if ( v28 < v12 ) /*0x6b5b65*/
        goto LABEL_33; /*0x6b5b65*/
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b73*/
        goto LABEL_35; /*0x6b5b73*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v24[2])(&v24, v9 + v12, 0) ) /*0x6b5b81*/
        goto LABEL_33; /*0x6b5b86*/
LABEL_34:
      v12 = v26; /*0x6b5b9a*/
      v9 = v29; /*0x6b5b9e*/
LABEL_35:
      v11 = i; /*0x6b5ba2*/
      if ( ++v10 >= i ) /*0x6b5ba9*/
      {
        v4 = v23; /*0x6b5baf*/
        goto LABEL_37; /*0x6b5baf*/
      }
    }
    if ( (v14 != 1 || *(_DWORD *)(v13 + 668) != 1) && (v22 <= 60 || a3 <= 50) ) /*0x6b5b2a*/
      goto LABEL_35; /*0x6b5b2a*/
    if ( v28 >= v12 ) /*0x6b5b30*/
    {
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b3e*/
        goto LABEL_35; /*0x6b5b3e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v24[2])(&v24, v9 + v12, 0) ) /*0x6b5b51*/
        goto LABEL_34; /*0x6b5b51*/
    }
LABEL_33:
    v15 = v28++; /*0x6b5b88*/
    *((_DWORD *)Block + v15) = v13; /*0x6b5b97*/
    goto LABEL_34; /*0x6b5b97*/
  }
LABEL_37:
  if ( v28 <= 0 ) /*0x6b5bb7*/
  {
    if ( v11 > 0 ) /*0x6b5bf2*/
    {
      v18 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5bfe*/
      if ( v18 ) /*0x6b5c05*/
      {
        v19 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i - 1); /*0x6b5c1a*/
        UnitClass::Create(v18, *((void **)v31 + v19), v4, -1); /*0x6b5c2c*/
      }
    }
  }
  else
  {
    v16 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5bc3*/
    if ( v16 ) /*0x6b5bca*/
    {
      v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v28 - 1); /*0x6b5bde*/
      UnitClass::Create(v16, *((void **)Block + v17), v4, -1); /*0x6b5bee*/
    }
  }
  v24 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5c3c*/
  if ( Block && BYTE1(v27) ) /*0x6b5c46*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5c49*/
    Block = 0; /*0x6b5c51*/
  }
  BYTE1(v27) = 0; /*0x6b5c59*/
  v26 = 0; /*0x6b5c5f*/
  v30 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5c63*/
  if ( v31 ) /*0x6b5c67*/
  {
    if ( v33 ) /*0x6b5c6d*/
      __3_YAXPAX_Z(v31); /*0x6b5c70*/
  }
  return 0; /*0x6b59e2*/
}



// ==== 0x006B5C90  TimedCreateUnitAtCoords  this=ObjectClass  sig=csp ====
int __fastcall TimedCreateUnitAtCoords(_DWORD *a1, int a2, int a3, char a4)
{
  _DWORD *v4; // ebp
  int v5; // kr00_4
  int result; // eax
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  UnitClass *v17; // esi
  int v18; // eax
  UnitClass *v19; // esi
  int v20; // eax
  int v21; // [esp+4h] [ebp-40h]
  int v22; // [esp+8h] [ebp-3Ch] BYREF
  int v23; // [esp+Ch] [ebp-38h]
  _DWORD *v24; // [esp+10h] [ebp-34h]
  void **v25; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+1Ch] [ebp-28h]
  int v28; // [esp+20h] [ebp-24h]
  int v29; // [esp+24h] [ebp-20h]
  int v30; // [esp+28h] [ebp-1Ch]
  void **v31; // [esp+2Ch] [ebp-18h] BYREF
  void *v32; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  char v34; // [esp+39h] [ebp-Bh]
  int i; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]

  v4 = a1; /*0x6b5c94*/
  v23 = a2; /*0x6b5c96*/
  v24 = a1; /*0x6b5c9a*/
  v5 = a1[1]; /*0x6b5cb6*/
  result = v5 / 256; /*0x6b5cbb*/
  if ( __PAIR32__(v5 / 256, *a1 / 256) == Map_BottomRightCell ) /*0x6b5cc5*/
  {
    LOBYTE(result) = 0; /*0x6b5cd0*/
    return result; /*0x6b5cd6*/
  }
  Game::LockMutex((Game *)&v31, 0, 0); /*0x6b5ce4*/
  v7 = 0; /*0x6b5cee*/
  v31 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5cf2*/
  v36 = 10; /*0x6b5cfa*/
  for ( i = 0; v7 < *(int *)&stru_A8EB00.?[68]; ++v7 ) /*0x6b5d06*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v7); /*0x6b5d11*/
    if ( *(_BYTE *)(v8 + 672) ) /*0x6b5d14*/
    {
      LOWORD(v21) = *v4 / 256; /*0x6b5d2f*/
      HIWORD(v21) = v4[1] / 256; /*0x6b5d47*/
      v22 = v21; /*0x6b5d54*/
      if ( (unsigned __int8)Cell::IsWalkable((Cell *)v8, &v22, a4) ) /*0x6b5d5c*/
      {
        if ( i < v33 /*0x6b5d8f*/
          || (v34 || !v33)
          && v36 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v31[2])(&v31, v36 + v33, 0) )
        {
          v9 = i++; /*0x6b5d9a*/
          *((_DWORD *)v32 + v9) = v8; /*0x6b5da5*/
        }
      }
    }
  }
  Game::LockMutex((Game *)&v25, 0, 0); /*0x6b5dbc*/
  v10 = 10; /*0x6b5dc1*/
  v11 = 0; /*0x6b5dc6*/
  v12 = i; /*0x6b5dc8*/
  v25 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5dcc*/
  v30 = 10; /*0x6b5dd6*/
  v29 = 0; /*0x6b5dda*/
  if ( i > 0 ) /*0x6b5dde*/
  {
    v13 = v27; /*0x6b5de4*/
    while ( 1 ) /*0x6b5df1*/
    {
      v14 = *((_DWORD *)v32 + v11); /*0x6b5df1*/
      v15 = *(_DWORD *)(v14 + 664); /*0x6b5dfa*/
      if ( !a4 ) /*0x6b5e00*/
        break; /*0x6b5e00*/
      if ( v15 <= 1 || *(int *)(v14 + 668) <= 1 ) /*0x6b5e4f*/
        goto LABEL_35; /*0x6b5e4f*/
      if ( v29 < v13 ) /*0x6b5e55*/
        goto LABEL_33; /*0x6b5e55*/
      if ( !BYTE1(v28) && v13 || v10 <= 0 ) /*0x6b5e63*/
        goto LABEL_35; /*0x6b5e63*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v10 + v13, 0) ) /*0x6b5e71*/
        goto LABEL_33; /*0x6b5e76*/
LABEL_34:
      v13 = v27; /*0x6b5e8a*/
      v10 = v30; /*0x6b5e8e*/
LABEL_35:
      v12 = i; /*0x6b5e92*/
      if ( ++v11 >= i ) /*0x6b5e99*/
      {
        v4 = v24; /*0x6b5e9f*/
        goto LABEL_37; /*0x6b5e9f*/
      }
    }
    if ( (v15 != 1 || *(_DWORD *)(v14 + 668) != 1) && (v23 <= 60 || a3 <= 50) ) /*0x6b5e1a*/
      goto LABEL_35; /*0x6b5e1a*/
    if ( v29 >= v13 ) /*0x6b5e20*/
    {
      if ( !BYTE1(v28) && v13 || v10 <= 0 ) /*0x6b5e2e*/
        goto LABEL_35; /*0x6b5e2e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v10 + v13, 0) ) /*0x6b5e41*/
        goto LABEL_34; /*0x6b5e41*/
    }
LABEL_33:
    v16 = v29++; /*0x6b5e78*/
    *((_DWORD *)Block + v16) = v14; /*0x6b5e87*/
    goto LABEL_34; /*0x6b5e87*/
  }
LABEL_37:
  if ( v29 <= 0 ) /*0x6b5ea7*/
  {
    if ( v12 > 0 ) /*0x6b5ee2*/
    {
      v19 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5eee*/
      if ( v19 ) /*0x6b5ef5*/
      {
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i - 1); /*0x6b5f0a*/
        UnitClass::Create(v19, *((void **)v32 + v20), v4, -1); /*0x6b5f1c*/
      }
    }
  }
  else
  {
    v17 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5eb3*/
    if ( v17 ) /*0x6b5eba*/
    {
      v18 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v29 - 1); /*0x6b5ece*/
      UnitClass::Create(v17, *((void **)Block + v18), v4, -1); /*0x6b5ede*/
    }
  }
  v25 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5f2c*/
  if ( Block && BYTE1(v28) ) /*0x6b5f36*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5f39*/
    Block = 0; /*0x6b5f41*/
  }
  result = (int)v32; /*0x6b5f45*/
  BYTE1(v28) = 0; /*0x6b5f49*/
  v27 = 0; /*0x6b5f4f*/
  v31 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5f53*/
  if ( v32 ) /*0x6b5f57*/
  {
    if ( v34 ) /*0x6b5f5d*/
      __3_YAXPAX_Z(v32); /*0x6b5f60*/
  }
  LOBYTE(result) = 0; /*0x6b5f6b*/
  return result; /*0x6b5cd2*/
}



// ==== 0x006B5F80  Cell::IsWalkable  this=SmudgeTypeClass  sig=csp ====
int __thiscall Cell::IsWalkable(Cell *this, _WORD *a2, char a3)
{
  int result; // eax
  int v4; // ebx
  int v6; // ebp
  void *v7; // esi
  int v8; // esi
  Cell *v9; // [esp+10h] [ebp-8h]
  __int16 v10[2]; // [esp+14h] [ebp-4h] BYREF
  __int16 *v11; // [esp+1Ch] [ebp+4h]

  result = (int)this->Cell_field_0x29C; /*0x6b5f83*/
  v4 = 0; /*0x6b5f8b*/
  v9 = this; /*0x6b5f91*/
  if ( result <= 0 ) /*0x6b5f95*/
  {
LABEL_16:
    LOBYTE(result) = 1; /*0x6b6060*/
  }
  else
  {
    while ( 1 ) /*0x6b5fa5*/
    {
      v6 = 0; /*0x6b5fa5*/
      if ( (int)this->Cell_field_0x298 > 0 ) /*0x6b5fa9*/
        break; /*0x6b5fa9*/
LABEL_15:
      result = (int)this->Cell_field_0x29C; /*0x6b6051*/
      if ( ++v4 >= result ) /*0x6b605a*/
        goto LABEL_16; /*0x6b605a*/
    }
    while ( 1 ) /*0x6b5fbc*/
    {
      LOWORD(v11) = v6 + *a2; /*0x6b5fbc*/
      HIWORD(v11) = v4 + a2[1]; /*0x6b5fc1*/
      *(_DWORD *)v10 = v11; /*0x6b5fd4*/
      v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x6b5fe3*/
      result = LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], a2); /*0x6b5fe5*/
      if ( !(_BYTE)result ) /*0x6b5fec*/
        break; /*0x6b5fec*/
      if ( *((_BYTE *)v7 + 284) ) /*0x6b5fee*/
        break; /*0x6b5fee*/
      result = -1; /*0x6b5ffb*/
      if ( *((_DWORD *)v7 + 18) != -1 ) /*0x6b6000*/
        break; /*0x6b6000*/
      if ( *((_DWORD *)v7 + 17) != -1 ) /*0x6b6005*/
        break; /*0x6b6005*/
      if ( !a3 ) /*0x6b600d*/
      {
        result = (int)Cell::IsBridge((Cell *)v7); /*0x6b6011*/
        if ( result ) /*0x6b6018*/
          break; /*0x6b6018*/
      }
      v8 = *((_DWORD *)v7 + 14); /*0x6b601a*/
      if ( v8 < 0 || v8 >= *(int *)&stru_A8EB00.?[340] ) /*0x6b6027*/
        v8 = 0; /*0x6b6029*/
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v8) + 736) ) /*0x6b6034*/
        break; /*0x6b6034*/
      if ( ++v6 >= (int)v9->Cell_field_0x298 ) /*0x6b6049*/
      {
        this = v9; /*0x6b604f*/
        goto LABEL_15; /*0x6b604f*/
      }
    }
    LOBYTE(result) = 0; /*0x6b606f*/
  }
  return result; /*0x6b6060*/
}



// ==== 0x006B6080  UnitClass::CreateUnloadPlacementCraters  this=SmudgeTypeClass  sig=csp ====
int __thiscall UnitClass::CreateUnloadPlacementCraters(int *this, _WORD *a2)
{
  int result; // eax
  int i; // ebx
  _DWORD *v6; // eax
  int v7; // [esp+4h] [ebp-8h]
  _WORD *v8; // [esp+8h] [ebp-4h] BYREF
  _WORD *v9; // [esp+10h] [ebp+4h]

  v7 = 0; /*0x6b6086*/
  result = this->Height; /*0x6b608e*/
  if ( result > 0 ) /*0x6b6096*/
  {
    do /*0x6b611c*/
    {
      for ( i = 0; i < this->Width; ++i ) /*0x6b60ac*/
      {
        LOWORD(v9) = i + *a2; /*0x6b60bd*/
        HIWORD(v9) = v7 + a2[1]; /*0x6b60c6*/
        v8 = v9; /*0x6b60d5*/
        v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v8); /*0x6b60d9*/
        v6[18] = this->ArrayIndex; /*0x6b60ea*/
        *((_BYTE *)v6 + 287) = i + this->Width * v7; /*0x6b60f5*/
        BuildingClass::CreatePlacementCrater(v6); /*0x6b60fb*/
      }
      result = ++v7; /*0x6b6115*/
    }
    while ( v7 < this->Height ); /*0x6b611c*/
  }
  return result; /*0x6b6120*/
}



// ==== 0x006B6130  SmudgeTypeClass::GetTypeIdentifier  this=SmudgeTypeClass  sig=csp ====
int SmudgeTypeClass::GetTypeIdentifier(SmudgeTypeClass *this)
{
  return 30; /*0x6b6135*/
}



// ==== 0x006B6140  SmudgeTypeClass::GetObjectSize  this=SmudgeTypeClass  sig=csp ====
int SmudgeTypeClass::GetObjectSize(SmudgeTypeClass *this)
{
  return 676; /*0x6b6145*/
}



// ==== 0x006B6150  SmudgeTypeClass::GetAuxField  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::GetAuxField(SmudgeTypeClass *this)
{
  return this->ArrayIndex; /*0x6b6156*/
}



// ==== 0x006B6160  SmudgeTypeClass::ddtor  this=SmudgeTypeClass  sig=csp ====
void **__thiscall SmudgeTypeClass::ddtor(SmudgeTypeClass *this, char a2)
{
  SHPStruct *Image; // eax
  int v4; // eax
  SmudgeTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = this->?; /*0x6b6164*/
  this->ObjectTypeClass = &SmudgeTypeClass::`vftable'; /*0x6b616a*/
  this->? = &SmudgeTypeClass::`vftable'; /*0x6b6172*/
  this->? = &SmudgeTypeClass::`vftable'; /*0x6b6179*/
  this->? = &SmudgeTypeClass::`vftable'; /*0x6b6180*/
  if ( Image ) /*0x6b6187*/
  {
    __3_YAXPAX_Z(Image); /*0x6b618a*/
    this->? = 0; /*0x6b6192*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->ObjectTypeClass, 1); /*0x6b61a0*/
  v6 = this; /*0x6b61b5*/
  v4 = (*(int (__thiscall **)(_BYTE *, SmudgeTypeClass **))(*(_DWORD *)&stru_A8EB00.?[52] + 16))( /*0x6b61b9*/
         &stru_A8EB00.?[52],
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_A8EB00.?[68] ) /*0x6b61c9*/
  {
    --*(_DWORD *)&stru_A8EB00.?[68]; /*0x6b61ce*/
    for ( ; /*0x6b61d4*/
          v4 < *(int *)&stru_A8EB00.?[68];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v4) )
    {
      ++v4; /*0x6b61dc*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x6b61f0*/
  if ( (a2 & 1) != 0 ) /*0x6b61fa*/
    __3_YAXPAX_Z(this); /*0x6b61fd*/
  return &this->ObjectTypeClass; /*0x6b6207*/
}



// ==== 0x006B6210  sub_6B6210  this=-  sig=ida-proto ====
int sub_6B6210()
{
  dword_B0B7F0 = 0; /*0x6b6212*/
  dword_B0B7F4 = 0; /*0x6b6217*/
  dword_B0B7F8 = 0; /*0x6b621c*/
  dword_B0B7FC = 0; /*0x6b6221*/
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
  byte_B0B800 = 0; /*0x6b6262*/
  v0 = 214; /*0x6b6270*/
  if ( byte_A8E9A0 ) /*0x6b6275*/
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
      if ( !byte_A8E9A0 ) /*0x6b62ba*/
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
      if ( byte_B0B800 ) /*0x6b6636*/
      {
        if ( hWnd == GetDlgItem(hDlg, 1327) ) /*0x6b664c*/
        {
          v37 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b6674*/
          Audio::SetScoreVolume((float *)dword_A8EB60, v37, 1); /*0x6b6677*/
          return 0; /*0x6b6688*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1330) ) /*0x6b6695*/
        {
          v38 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b66bd*/
          Audio::SetSoundVolume((float *)dword_A8EB60, v38, 1); /*0x6b66c0*/
          return 0; /*0x6b66d1*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1334) ) /*0x6b66de*/
        {
          v39 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b670a*/
          Audio::SetVoiceVolume((float *)dword_A8EB60, v39, 1); /*0x6b670d*/
          return 0; /*0x6b671e*/
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6b6354*/
    {
      byte_B0B800 = 0; /*0x6b635a*/
      IsSoundEnabled = Audio::IsSoundEnabled(); /*0x6b6364*/
      bEnable = IsSoundEnabled; /*0x6b636c*/
      DlgItem = GetDlgItem(hDlg, 1327); /*0x6b6370*/
      v7 = DlgItem; /*0x6b637c*/
      if ( DlgItem ) /*0x6b6380*/
      {
        SendMessageA(DlgItem, 0x4AEu, 0, 0); /*0x6b638c*/
        SendMessageA(v7, 0x406u, 1u, 655360); /*0x6b639b*/
        v8 = Math::RoundToInt(flt_A8EBA0 * 10.0 + 0.5); /*0x6b63af*/
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
        v12 = Math::RoundToInt(flt_A8EB98 * 10.0 + 0.5); /*0x6b6417*/
        SendMessageA(v11, 0x405u, 1u, v12); /*0x6b6425*/
        v9(v11, IsSoundEnabled); /*0x6b6429*/
      }
      v13 = GetDlgItem(hDlg, 1334); /*0x6b6438*/
      v14 = v13; /*0x6b643e*/
      if ( v13 ) /*0x6b6442*/
      {
        SendMessageA(v13, 0x4AEu, 0, 0); /*0x6b644e*/
        SendMessageA(v14, 0x406u, 1u, 655360); /*0x6b645d*/
        v15 = Math::RoundToInt(*(float *)&flt_A8EB9C * 10.0 + 0.5); /*0x6b6471*/
        SendMessageA(v14, 0x405u, 1u, v15); /*0x6b647f*/
        v9(v14, IsSoundEnabled); /*0x6b6483*/
      }
      if ( byte_A8E9A0 ) /*0x6b648c*/
      {
        v16 = GetDlgItem(hDlg, 1331); /*0x6b64a5*/
        if ( v16 ) /*0x6b64a9*/
        {
          SendMessageA(v16, 0xF1u, byte_A8EBA6 != 0, 0); /*0x6b64c1*/
          v9(v16, IsSoundEnabled); /*0x6b64c5*/
        }
        v17 = GetDlgItem(hDlg, 1332); /*0x6b64da*/
        if ( v17 ) /*0x6b64de*/
        {
          SendMessageA(v17, 0xF1u, byte_A8EBA4 != 0, 0); /*0x6b64f5*/
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
              if ( RulesClass::IsTypeBuildable(&unk_A83D10, v21) ) /*0x6b6545*/
              {
                v22 = AudioSettings::ComputeTransform(v21); /*0x6b6563*/
                v46 = AudioSettings::Check(v21); /*0x6b656f*/
                swprintf(lParam, (const size_t)a02dSD02d, (const wchar_t *const)Format++, v46, v22 / 60, v22 % 60); /*0x6b65a1*/
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
      byte_B0B800 = 1; /*0x6b661c*/
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
              byte_A8EBA5 = 1; /*0x6b6800*/
              if ( dword_A83D14 == -1 ) /*0x6b6807*/
                v31 = dword_A83D18; /*0x6b6809*/
              if ( v31 != v30 ) /*0x6b6810*/
              {
                Theme::Stop(&unk_A83D10, 1); /*0x6b681d*/
                Theme::QueueSong((int)&unk_A83D10, v30); /*0x6b6828*/
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
      Theme::Stop(&unk_A83D10, 1); /*0x6b69d4*/
      Theme::QueueSong((int)&unk_A83D10, -3); /*0x6b69e0*/
      byte_A8EBA5 = 0; /*0x6b69e5*/
    }
    return 0; /*0x6b69e5*/
  }
  if ( (unsigned __int16)a3 != 1670 || HIWORD(a3) ) /*0x6b68ba*/
    return 0; /*0x6b69ec*/
  v33 = GetDlgItem(hDlg, 1327); /*0x6b68cf*/
  if ( v33 ) /*0x6b68d9*/
  {
    v40 = (double)SendMessageA(v33, 0x400u, 0, 0) * 0.1; /*0x6b68fd*/
    Audio::SetScoreVolume((float *)dword_A8EB60, v40, 0); /*0x6b6900*/
    if ( flt_A8EBA0 == 0.0 ) /*0x6b6916*/
    {
      v34 = dword_A83D14; /*0x6b6918*/
      if ( dword_A83D14 == -1 ) /*0x6b6920*/
        v34 = dword_A83D18; /*0x6b6922*/
      Theme::QueueSong((int)&unk_A83D10, v34); /*0x6b692d*/
      Theme::Stop(&unk_A83D10, 0); /*0x6b6939*/
    }
  }
  v35 = GetDlgItem(hDlg, 1330); /*0x6b6944*/
  if ( v35 ) /*0x6b6948*/
  {
    v41 = (double)SendMessageA(v35, 0x400u, 0, 0) * 0.1; /*0x6b696c*/
    Audio::SetSoundVolume((float *)dword_A8EB60, v41, 0); /*0x6b696f*/
  }
  v36 = GetDlgItem(hDlg, 1334); /*0x6b697a*/
  if ( v36 ) /*0x6b697e*/
  {
    v42 = (double)SendMessageA(v36, 0x400u, 0, 0) * 0.1; /*0x6b69a2*/
    Audio::SetVoiceVolume((float *)dword_A8EB60, v42, 0); /*0x6b69a5*/
  }
  *(_DWORD *)GetWindowLongA(hDlg, 8) = 1; /*0x6b69b5*/
  return 0; /*0x6b6619*/
}



// ==== 0x006B6A00  sub_6B6A00  this=-  sig=ida-proto ====
void sub_6B6A00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b6a0c*/
  dbl_B0B828 = Math::Sqrt(v0 + v0); /*0x6b6a1e*/
}



// ==== 0x006B6A30  sub_6B6A30  this=-  sig=ida-proto ====
void sub_6B6A30()
{
  dbl_B0B878 = dbl_B0B828 / 60.0; /*0x6b6a3c*/
}



// ==== 0x006B6A50  sub_6B6A50  this=-  sig=ida-proto ====
void sub_6B6A50()
{
  dbl_B0B860 = 1.0 / dbl_B0B878; /*0x6b6a5c*/
}



// ==== 0x006B6A70  sub_6B6A70  this=-  sig=ida-proto ====
void sub_6B6A70()
{
  dbl_B0B858 = 0.0174532925199433 * 45.0; /*0x6b6a7c*/
}



// ==== 0x006B6A90  sub_6B6A90  this=-  sig=ida-proto ====
void sub_6B6A90()
{
  dbl_B0B830 = 0.0174532925199433 * 60.0; /*0x6b6a9c*/
}



// ==== 0x006B6AB0  sub_6B6AB0  this=-  sig=ida-proto ====
void sub_6B6AB0()
{
  dbl_B0B808 = 0.0174532925199433 * 90.0; /*0x6b6abc*/
}



// ==== 0x006B6AD0  sub_6B6AD0  this=-  sig=ida-proto ====
__int64 sub_6B6AD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B808 - dbl_B0B830); /*0x6b6ae2*/
  result = Math::RoundToInt(v0 * dbl_B0B828 * 0.5); /*0x6b6af6*/
  dword_B0B898 = result; /*0x6b6afb*/
  return result; /*0x6b6b00*/
}



// ==== 0x006B6B10  sub_6B6B10  this=-  sig=ida-proto ====
void sub_6B6B10()
{
  dbl_B0B838 = Math::ArcTan((double)dword_B0B898 * 0.00390625); /*0x6b6b27*/
}



// ==== 0x006B6B40  sub_6B6B40  this=-  sig=ida-proto ====
void sub_6B6B40()
{
  dbl_B0B850 = Math::ArcTan((double)(2 * dword_B0B898) / dbl_B0B828); /*0x6b6b62*/
}



// ==== 0x006B6B70  sub_6B6B70  this=-  sig=ida-proto ====
__int64 sub_6B6B70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B898) + 0.5); /*0x6b6b8b*/
  dword_B0B874 = result; /*0x6b6b90*/
  return result; /*0x6b6b96*/
}



// ==== 0x006B6BA0  sub_6B6BA0  this=-  sig=ida-proto ====
int sub_6B6BA0()
{
  word_B0B820 = 0; /*0x6b6ba2*/
  word_B0B822 = 0; /*0x6b6ba8*/
  return 0; /*0x6b6bae*/
}



// ==== 0x006B6BB0  sub_6B6BB0  this=-  sig=ida-proto ====
int sub_6B6BB0()
{
  dword_B0B840 = 0; /*0x6b6bb2*/
  dword_B0B844 = 0; /*0x6b6bb7*/
  dword_B0B848 = 0; /*0x6b6bbc*/
  return 0; /*0x6b6bc1*/
}



// ==== 0x006B6BD0  sub_6B6BD0  this=-  sig=ida-proto ====
int sub_6B6BD0()
{
  dword_B0B870 = 0; /*0x6b6bd5*/
  dword_B0B868 = 128; /*0x6b6bdf*/
  dword_B0B86C = 128; /*0x6b6be4*/
  return 128; /*0x6b6be9*/
}



// ==== 0x006B6BF0  sub_6B6BF0  this=-  sig=ida-proto ====
int sub_6B6BF0()
{
  dword_B0B810 = 0; /*0x6b6bf2*/
  dword_B0B814 = 0; /*0x6b6bf7*/
  dword_B0B818 = 0; /*0x6b6bfc*/
  dword_B0B81C = 0; /*0x6b6c01*/
  return 0; /*0x6b6c06*/
}



// ==== 0x006B6C10  sub_6B6C10  this=-  sig=ida-proto ====
int sub_6B6C10()
{
  dword_B0B884 = 0; /*0x6b6c17*/
  dword_B0B888 = 0; /*0x6b6c1c*/
  byte_B0B88C = 1; /*0x6b6c21*/
  byte_B0B88D = 0; /*0x6b6c28*/
  SpawnManagerClass_Array = (int)&DynamicVectorClass<SpawnManagerClass *>::`vftable'; /*0x6b6c2d*/
  dword_B0B894 = 10; /*0x6b6c37*/
  dword_B0B890 = 0; /*0x6b6c41*/
  return atexit(sub_6B6C50); /*0x6b6c4c*/
}



// ==== 0x006B6C50  sub_6B6C50  this=-  sig=ida-proto ====
void __cdecl sub_6B6C50()
{
  SpawnManagerClass_Array = (int)&VectorClass<SpawnManagerClass *>::`vftable'; /*0x6b6c58*/
  if ( dword_B0B884 && byte_B0B88D ) /*0x6b6c6c*/
  {
    __3_YAXPAX_Z(dword_B0B884); /*0x6b6c6f*/
    dword_B0B884 = 0; /*0x6b6c77*/
  }
  byte_B0B88D = 0; /*0x6b6c7d*/
  dword_B0B888 = 0; /*0x6b6c83*/
}



// ==== 0x006B6C90  SpawnManagerClass::SpawnManagerClass  this=SpawnManagerClass  sig=csp ====
int __thiscall sub_6B6C90(int this, int a2, int a3, int a4, int a5, int a6)
{
  wchar_t *v7; // eax
  int *v8; // ebp
  wchar_t *v9; // eax
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

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
  SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
  *(_DWORD *)(this + 56) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
  *(_DWORD *)(this + 76) = 10; /*0x6b6cb6*/
  *(_DWORD *)(this + 72) = 0; /*0x6b6cbd*/
  v7 = dword_A8ED84; /*0x6b6cc0*/
  *(_DWORD *)(this + 88) = 0; /*0x6b6cc5*/
  *(_DWORD *)(this + 80) = v7; /*0x6b6cc8*/
  *(_DWORD *)(this + 92) = dword_A8ED84; /*0x6b6cd5*/
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
    v8 = (int *)__2_YAPAXI_Z(0x18u); /*0x6b6d24*/
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    v9 = dword_A8ED84; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = (int)v9; /*0x6b6d39*/
    v10 = **(_DWORD **)(this + 40); /*0x6b6d44*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 60))(*(_DWORD *)(this + 36)); /*0x6b6d46*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(*(_DWORD *)(this + 40), v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = *(_DWORD *)(this + 40); /*0x6b6d66*/
      v8[5] = v13 == *((_DWORD *)dword_8871E0 + 312) /*0x6b6d86*/
           || v13 == *((_DWORD *)dword_8871E0 + 325)
           || v13 == *((_DWORD *)dword_8871E0 + 338);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6b6d91*/
      *(_DWORD *)(*v8 + 724) = *(_DWORD *)(this + 36); /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = (int)dword_A8ED84; /*0x6b6db1*/
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
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6b6e0d*/
  *(_DWORD *)(this + 84) = v20; /*0x6b6e19*/
  *(_DWORD *)(this + 88) = 20; /*0x6b6e1c*/
  *(_DWORD *)(this + 104) = 0; /*0x6b6e1f*/
  *(_DWORD *)(this + 108) = 0; /*0x6b6e22*/
  *(_DWORD *)(this + 112) = 0; /*0x6b6e25*/
  *(_DWORD *)(this + 92) = dword_A8ED84; /*0x6b6e2f*/
  *(_DWORD *)(this + 96) = v20; /*0x6b6e32*/
  *(_DWORD *)(this + 100) = 0; /*0x6b6e35*/
  if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
    || (byte_B0B88D || !dword_B0B888)
    && dword_B0B894 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SpawnManagerClass_Array + 8))(
         &SpawnManagerClass_Array,
         dword_B0B888 + dword_B0B894,
         0) )
  {
    v18 = dword_B0B890++; /*0x6b6e76*/
    *((_DWORD *)dword_B0B884 + v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/
}



// ==== 0x006B6EA0  SpawnManagerClass::Constructor  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::Constructor(SpawnManagerClass *this)
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



// ==== 0x006B7010  SpawnManagerClass::Constructor_SpawnManagerClass  this=SpawnManagerClass  sig=csp ====
void __thiscall SpawnManagerClass::Constructor_SpawnManagerClass(TaskManager *this)
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  TaskManager *v6; // [esp+8h] [ebp-4h] BYREF

  *this = (TaskManager)&SpawnManagerClass::`vftable'; /*0x6b7015*/
  this->vtable2 = &SpawnManagerClass::`vftable'; /*0x6b701b*/
  this->vtable3 = &SpawnManagerClass::`vftable'; /*0x6b7022*/
  this->vtable4 = &SpawnManagerClass::`vftable'; /*0x6b7029*/
  if ( byte_A8E9A0 ) /*0x6b7037*/
    TaskManager::Update(this); /*0x6b7039*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(_DWORD *)(this->spawnVectorCount + 4 * i) ) /*0x6b7047*/
      __3_YAXPAX_Z(*(void **)(this->spawnVectorCount + 4 * i)); /*0x6b704f*/
  }
  v3 = this->uniqueId; /*0x6b7063*/
  (*(void (__thiscall **)(TaskManager *))(this->spawns + 12))(this + 14); /*0x6b7066*/
  (*(void (__thiscall **)(TaskManager *, int, _DWORD))(this->spawns + 8))(this + 14, v3, 0); /*0x6b7070*/
  v6 = this; /*0x6b7083*/
  v4 = (*(int (__thiscall **)(int *, TaskManager **))(SpawnManagerClass_Array + 16))(&SpawnManagerClass_Array, &v6); /*0x6b7087*/
  if ( v4 != -1 && v4 < dword_B0B890 && v4 < --dword_B0B890 ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((_DWORD *)dword_B0B884 + v4 - 1) = *((_DWORD *)dword_B0B884 + v4); /*0x6b70af*/
    }
    while ( v4 < dword_B0B890 ); /*0x6b70bb*/
  }
  v5 = (void *)this->spawnVectorCount; /*0x6b70bd*/
  this->spawns = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b70c0*/
  if ( v5 && this->u8_45 ) /*0x6b70ca*/
  {
    __3_YAXPAX_Z(v5); /*0x6b70d2*/
    this->spawnVectorCount = 0; /*0x6b70da*/
  }
  this->u8_45 = 0; /*0x6b70e3*/
  this->uniqueId = 0; /*0x6b70e7*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6b70ee*/
}



// ==== 0x006B7100  TaskManager::Update  this=TaskManager  sig=csp ====
int __thiscall TaskManager::Update(TaskManager *this)
{
  int result; // eax
  int v3; // ebx
  int i; // edi
  int v5; // ecx
  _DWORD *v6; // edx
  _DWORD *v7; // edx
  _DWORD *v8; // edx
  int v9; // [esp+10h] [ebp-8h]

  result = *((_DWORD *)this + 9); /*0x6b7108*/
  if ( *(int *)(result + 108) > 0 && *(_BYTE *)(result + 144) ) /*0x6b7112*/
    v3 = 0; /*0x6b711c*/
  else
    v3 = *((_DWORD *)this + 12); /*0x6b7120*/
  for ( i = *((_DWORD *)this + 18) - 1; i >= 0; --i ) /*0x6b7127*/
  {
    result = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * i); /*0x6b7136*/
    v5 = *(_DWORD *)(result + 4); /*0x6b7139*/
    if ( v5 != 7 ) /*0x6b713e*/
    {
      if ( !v5 || v5 == 6 ) /*0x6b714f*/
      {
        *(_DWORD *)(result + 4) = 7; /*0x6b71de*/
        v8 = *(_DWORD **)(*((_DWORD *)this + 15) + 4 * i); /*0x6b71e4*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 248))(*v8); /*0x6b71eb*/
        **(_DWORD **)(*((_DWORD *)this + 15) + 4 * i) = 0; /*0x6b71f7*/
        v7 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 15) + 4 * i) + 8); /*0x6b7208*/
        *v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b720b*/
        result = v9; /*0x6b720d*/
      }
      else
      {
        if ( v5 == 1 ) /*0x6b7158*/
        {
          AbstractClass::processStateTransition((AbstractClass *)&g_MissionQueueFrame, *(_DWORD *)result); /*0x6b7162*/
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 15) + 4 * i) + 4) = 7; /*0x6b716d*/
          v6 = *(_DWORD **)(*((_DWORD *)this + 15) + 4 * i); /*0x6b7173*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 248))(*v6); /*0x6b717a*/
        }
        else
        {
          *(_DWORD *)(result + 4) = 7; /*0x6b71a2*/
          UnitClass::GetExitCell( /*0x6b71b7*/
            (int)&g_MissionQueueFrame,
            **(_DWORD ***)(*((_DWORD *)this + 15) + 4 * i),
            *((_DWORD **)this + 26));
        }
        **(_DWORD **)(*((_DWORD *)this + 15) + 4 * i) = 0; /*0x6b7186*/
        v7 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 15) + 4 * i) + 8); /*0x6b7197*/
        *v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b719a*/
        result = v9; /*0x6b719c*/
      }
      v7[1] = result; /*0x6b7211*/
      v7[2] = v3; /*0x6b7214*/
    }
  }
  return result; /*0x6b721f*/
}



// ==== 0x006B7230  SpawnManagerClass::ProcessExitQueue  this=SpawnManagerClass  sig=csp ====
void __thiscall UnitClass::ProcessExitQueue(SpawnManagerClass *this)
{
  int v2; // edx
  int SpawnManagerClass_field_58; // eax
  int v4; // ecx
  int v5; // ebx
  int spawnVectorCount; // edx
  int v7; // eax
  _DWORD **v8; // ebp
  _DWORD *v9; // edi
  int SpawnManagerClass_field_5C; // edx
  int SpawnManagerClass_field_64; // eax
  int *alignmentPadding154; // ebp
  int *v13; // ebp
  TechnoClass *owner; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  BOOL v19; // ebp
  TechnoClass *v20; // ecx
  void *vtable0; // ebx
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *Value; // eax
  AnimClass *v27; // ebp
  int Index; // eax
  int SpawnManagerClass_field_6C; // eax
  __int16 *v30; // eax
  Cell *v31; // eax
  int v32; // ebp
  void *NeighbourContent; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int16 *v37; // eax
  Cell *v38; // eax
  int v39; // ebp
  void *v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  _WORD *v44; // ebp
  _WORD *v45; // eax
  int *location; // ecx
  int v47; // eax
  int SpawnManagerClass_field_34; // ecx
  _DWORD *v49; // edx
  int v50; // ebp
  int v51; // edx
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int (__thiscall **v56)(HouseClass *, int); // edi
  int v57; // eax
  HouseClass *spawnOwner; // eax
  int v59; // ecx
  int SpawnManagerClass_field_70; // eax
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

  v2 = *(_DWORD *)&this->__pad_48[8]; /*0x6b723f*/
  SpawnManagerClass_field_58 = this->SpawnManagerClass_field_58; /*0x6b7242*/
  if ( v2 != -1 ) /*0x6b7248*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= SpawnManagerClass_field_58 ) /*0x6b7250*/
      goto LABEL_5; /*0x6b7250*/
    SpawnManagerClass_field_58 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x6b7252*/
  }
  if ( SpawnManagerClass_field_58 ) /*0x6b7256*/
    return; /*0x6b7256*/
LABEL_5:
  v4 = v91; /*0x6b725c*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7265*/
  this->SpawnManagerClass_field_54 = v4; /*0x6b7268*/
  this->SpawnManagerClass_field_58 = 10; /*0x6b726b*/
  v5 = 0; /*0x6b7271*/
  v80 = 0; /*0x6b7275*/
  if ( *(int *)this->__pad_48 > 0 )
  {
    while ( 1 )
    {
      spawnVectorCount = this->spawnVectorCount; /*0x6b727f*/
      v79 = 0; /*0x6b7282*/
      v7 = *(_DWORD *)(spawnVectorCount + 4 * v5); /*0x6b7287*/
      v8 = (_DWORD **)(spawnVectorCount + 4 * v5); /*0x6b728a*/
      v9 = *(_DWORD **)v7; /*0x6b7290*/
      switch ( *(_DWORD *)(v7 + 4) )
      {
        case 0:
          if ( !this->SpawnManagerClass_field_68 ) /*0x6b72a7*/
            goto LABEL_87; /*0x6b72a7*/
          SpawnManagerClass_field_5C = this->SpawnManagerClass_field_5C; /*0x6b72ad*/
          SpawnManagerClass_field_64 = this->SpawnManagerClass_field_64; /*0x6b72b0*/
          if ( SpawnManagerClass_field_5C == -1 ) /*0x6b72b6*/
            goto LABEL_11; /*0x6b72b6*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C >= SpawnManagerClass_field_64 ) /*0x6b72c2*/
            goto LABEL_128; /*0x6b72c2*/
          SpawnManagerClass_field_64 -= *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C; /*0x6b72c4*/
LABEL_11:
          if ( !SpawnManagerClass_field_64 )
          {
LABEL_128:
            if ( this->SpawnManagerClass_field_70 != 2 && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) != 1 ) /*0x6b72fc*/
                goto LABEL_21; /*0x6b72fc*/
              alignmentPadding154 = this->owner[1].alignmentPadding154; /*0x6b7301*/
              if ( !*alignmentPadding154 ) /*0x6b7307*/
                WinAPI::Wrapper(-2147467261); /*0x6b7312*/
              if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)*alignmentPadding154 + 16))(*alignmentPadding154) )
              {
                v13 = this->owner[1].alignmentPadding154; /*0x6b732c*/
                if ( !*v13 ) /*0x6b7332*/
                  WinAPI::Wrapper(-2147467261); /*0x6b733d*/
                if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)*v13 + 128))(*v13) )
                {
LABEL_21:
                  owner = this->owner; /*0x6b735c*/
                  if ( !owner || (owner->? & 4) == 0 || !*((owner->? & 4) != 0 ? &owner[1].__pad_18C[1] : (char *)1709) )
                  {
                    if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))owner->RadioClass + 33))(owner) + 3432) ) /*0x6b7392*/
                    {
                      v15 = v91; /*0x6b73a1*/
                      this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b73a5*/
                      v16 = 9; /*0x6b73a8*/
                      this->SpawnManagerClass_field_60 = v15; /*0x6b73ad*/
                    }
                    else
                    {
                      this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b73b2*/
                      v16 = 20; /*0x6b73b9*/
                      this->SpawnManagerClass_field_60 = v91; /*0x6b73be*/
                    }
                    this->SpawnManagerClass_field_64 = v16; /*0x6b73c1*/
                    if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) == 1 ) /*0x6b73cd*/
                    {
                      v17 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->owner->RadioClass + 254))( /*0x6b73dc*/
                                         this->owner,
                                         0);
                      if ( v17 ) /*0x6b73e0*/
                      {
                        if ( *(int *)(v17 + 156) > 1 ) /*0x6b73e8*/
                        {
                          v79 = 1; /*0x6b73f1*/
                          this->owner->currentBurstIndex = v5 & 1; /*0x6b73f6*/
                        }
                      }
                    }
                    *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 2; /*0x6b7404*/
                    v18 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->owner->RadioClass + 254))(this->owner, 0); /*0x6b7410*/
                    v86 = 0; /*0x6b741c*/
                    v87 = 0; /*0x6b7420*/
                    v88 = 0; /*0x6b7424*/
                    v19 = *(_BYTE *)(*(_DWORD *)v18 + 305) == 0; /*0x6b7436*/
                    v20 = this->owner; /*0x6b743b*/
                    if ( v20->currentBurstIndex ) /*0x6b743e*/
                    {
                      vtable0 = v20->RadioClass; /*0x6b7448*/
                      v22 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))v20->RadioClass + 33))(v20); /*0x6b744a*/
                      v23 = (int *)(*((int (__thiscall **)(TechnoClass *, char *, BOOL, _DWORD, _DWORD, _DWORD))vtable0 /*0x6b7473*/
                                    + 44))(
                                     this->owner,
                                     v92,
                                     v19,
                                     v22[876],
                                     v22[877],
                                     v22[878]);
                    }
                    else
                    {
                      v23 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, BOOL, _DWORD, _DWORD, _DWORD))v20->RadioClass /*0x6b7492*/
                                    + 44))(
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
                    if ( this->spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x6b74c2*/
                    {
                      v86 = v24 - dword_84009C; /*0x6b74d3*/
                      v87 = v25 - dword_8400A0; /*0x6b74d7*/
                    }
                    Value = ProgressTimer::GetValue((ProgressTimer *)this->owner->primaryFacing, &v81); /*0x6b74e9*/
                    (*(void (__thiscall **)(_DWORD *, int *, _DWORD))(*v9 + 216))( /*0x6b7505*/
                      v9,
                      &v86,
                      (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
                    if ( this->spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x6b7519*/
                    {
                      v27 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6b7525*/
                      if ( v27 ) /*0x6b752c*/
                      {
                        v89[0] = v9[39]; /*0x6b753a*/
                        v89[1] = v9[40]; /*0x6b7541*/
                        v89[2] = v9[41]; /*0x6b7548*/
                        Index = AnimTypeClass::FindIndex(off_840098); /*0x6b7552*/
                        AnimClass::ctor( /*0x6b7575*/
                          v27,
                          *(void **)(FootClass_Array.?[3] + 4 * Index),
                          v89,
                          (void *)2,
                          1,
                          (void *)0x600,
                          (void *)0xFFFFFFF6,
                          0);
                      }
                    }
                    if ( v79 ) /*0x6b7580*/
                      this->owner->currentBurstIndex = 0; /*0x6b7585*/
                    if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v80) + 20) == 1 ) /*0x6b7599*/
                    {
                      SpawnManagerClass_field_6C = this->SpawnManagerClass_field_6C; /*0x6b759b*/
                      if ( SpawnManagerClass_field_6C ) /*0x6b75a0*/
                      {
                        this->SpawnManagerClass_field_68 = SpawnManagerClass_field_6C; /*0x6b75a2*/
                        this->SpawnManagerClass_field_6C = 0; /*0x6b75a5*/
                      }
                      (*(void (__thiscall **)(_DWORD *, int, int))(*v9 + 1152))(v9, this->SpawnManagerClass_field_68, 1); /*0x6b75b6*/
                      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b75c4*/
                    }
                    else
                    {
                      v30 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->RadioClass + 110))( /*0x6b75d9*/
                                         this->owner,
                                         &v82);
                      v31 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x6b75e5*/
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
          if ( v5 >= *(_DWORD *)this->__pad_48 ) /*0x6b7964*/
            goto LABEL_88; /*0x6b7964*/
          break; /*0x6b7964*/
        case 1:
          v34 = *(_DWORD *)(v7 + 16); /*0x6b7613*/
          v35 = *(_DWORD *)(v7 + 8); /*0x6b7616*/
          if ( v35 == -1 ) /*0x6b761c*/
            goto LABEL_49; /*0x6b761c*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v35 >= v34 ) /*0x6b7628*/
            goto LABEL_50; /*0x6b7628*/
          v34 -= *(_DWORD *)&stru_A8EB00.?[416] - v35; /*0x6b762a*/
LABEL_49:
          if ( !v34 ) /*0x6b762e*/
LABEL_50:
            UnitClass::ClearTargetRef((UnitClass *)this, (int)v9); /*0x6b7637*/
          goto LABEL_87; /*0x6b763c*/
        case 2:
          if ( *(_DWORD *)(v7 + 20) != 1 ) /*0x6b7645*/
          {
            v36 = this->SpawnManagerClass_field_6C; /*0x6b764b*/
            if ( v36 ) /*0x6b7650*/
            {
              this->SpawnManagerClass_field_68 = v36; /*0x6b7652*/
              this->SpawnManagerClass_field_6C = 0; /*0x6b7655*/
            }
            if ( !this->SpawnManagerClass_field_68 ) /*0x6b765c*/
              goto LABEL_55; /*0x6b7661*/
            v37 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->RadioClass + 110))( /*0x6b76a9*/
                               this->owner,
                               &v83);
            v38 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6b76b5*/
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
            this->SpawnManagerClass_field_68 = v41; /*0x6b76ea*/
            this->SpawnManagerClass_field_6C = 0; /*0x6b76ed*/
          }
          if ( v9[191] && this->SpawnManagerClass_field_68 ) /*0x6b7702*/
          {
            (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 968))( /*0x6b7718*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              this->SpawnManagerClass_field_68);
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b772c*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              1,
              0);
          }
          else
          {
LABEL_55:
            (*(void (__thiscall **)(_DWORD *, TechnoClass *, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7663*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 968))(v9, 0); /*0x6b7679*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b7687*/
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 4; /*0x6b7693*/
          }
          goto LABEL_87; /*0x6b7732*/
        case 4:
          v42 = this->SpawnManagerClass_field_6C; /*0x6b7737*/
          if ( v42 ) /*0x6b773c*/
          {
            this->SpawnManagerClass_field_68 = v42; /*0x6b773e*/
            this->SpawnManagerClass_field_6C = 0; /*0x6b7741*/
          }
          if ( (int)v9[191] > 0 && this->SpawnManagerClass_field_68 ) /*0x6b7752*/
          {
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 3; /*0x6b775f*/
            v43 = **(_DWORD **)(this->spawnVectorCount + 4 * v5); /*0x6b776c*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v43 + 968))(v43, this->SpawnManagerClass_field_68); /*0x6b7774*/
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b7788*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              1,
              0);
          }
          else
          {
            v44 = (_WORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->RadioClass + 110))( /*0x6b77a5*/
                             this->owner,
                             &v84);
            v45 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 440))(v9, v85); /*0x6b77ae*/
            if ( *v45 == *v44 /*0x6b77fd*/
              && v45[1] == v44[1]
              && (v90 = v9[39],
                  location = this->owner->?,
                  v91 = v9[40],
                  v47 = v9[41],
                  v90 = *location,
                  v91 = location[1],
                  v47 - location[2] < 20) )
            {
              (*(void (__thiscall **)(_DWORD *))(*v9 + 212))(v9); /*0x6b7803*/
              *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 6; /*0x6b780f*/
              SpawnManagerClass_field_34 = this->SpawnManagerClass_field_34; /*0x6b781e*/
              v49 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 8); /*0x6b7824*/
              *v49 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7827*/
              v49[1] = v94; /*0x6b782d*/
              v49[2] = SpawnManagerClass_field_34; /*0x6b7830*/
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, TechnoClass *, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7842*/
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
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v50 >= v51 ) /*0x6b787c*/
            goto LABEL_76; /*0x6b787c*/
          v51 -= *(_DWORD *)&stru_A8EB00.?[416] - v50; /*0x6b787e*/
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
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v55 >= v54 ) /*0x6b78c7*/
            goto LABEL_81; /*0x6b78c7*/
          v54 -= *(_DWORD *)&stru_A8EB00.?[416] - v55; /*0x6b78c9*/
LABEL_80:
          if ( !v54 ) /*0x6b78cd*/
          {
LABEL_81:
            v56 = (int (__thiscall **)(HouseClass *, int))this->spawnOwner->AbstractClass; /*0x6b78db*/
            v57 = (*((int (__thiscall **)(TechnoClass *))this->owner->RadioClass + 15))(this->owner); /*0x6b78dd*/
            **v8 = v56[35](this->spawnOwner, v57); /*0x6b78ed*/
            spawnOwner = this->spawnOwner; /*0x6b78f5*/
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) = spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x6b7925*/
                                                                          || spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1300)
                                                                          || spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352);
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
  SpawnManagerClass_field_70 = this->SpawnManagerClass_field_70; /*0x6b796a*/
  v61 = 0; /*0x6b796d*/
  v62 = 0; /*0x6b796f*/
  if ( SpawnManagerClass_field_70 ) /*0x6b7973*/
  {
    v63 = SpawnManagerClass_field_70 - 1; /*0x6b7979*/
    if ( v63 ) /*0x6b797a*/
    {
      if ( v63 == 1 ) /*0x6b797d*/
      {
        v64 = 1; /*0x6b7986*/
        if ( *(int *)this->__pad_48 <= 0 ) /*0x6b798a*/
          goto LABEL_98; /*0x6b798a*/
        v65 = this->spawnVectorCount; /*0x6b798c*/
        v66 = *(_DWORD *)this->__pad_48; /*0x6b798f*/
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
          this->SpawnManagerClass_field_70 = 0; /*0x6b79b0*/
      }
      return; /*0x6b79be*/
    }
    if ( !this->SpawnManagerClass_field_68 ) /*0x6b79bf*/
    {
LABEL_100:
      UnitClass::ProcessIdleOrders((UnitClass *)this); /*0x6b79c4*/
      return; /*0x6b79d2*/
    }
    v68 = *(_DWORD *)this->__pad_48; /*0x6b79d3*/
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
              UnitClass::GetExitCell( /*0x6b7a37*/
                (int)&g_MissionQueueFrame,
                (_DWORD *)*v73,
                (_DWORD *)this->SpawnManagerClass_field_68);
              g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7a46*/
              g_MissionQueueFrame.nextScenario[1] = v72; /*0x6b7a4b*/
              g_MissionQueueFrame.nextScenario[2] = 2; /*0x6b7a51*/
              v74 = *(int **)(this->spawnVectorCount + 4 * v71); /*0x6b7a5a*/
              if ( v74[5] == 1 ) /*0x6b7a65*/
              {
                v74[1] = 1; /*0x6b7a67*/
                if ( this->spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6b7a80*/
                  v75 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200) /*0x6b7a88*/
                      + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1204);
                else
                  v75 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252) /*0x6b7aab*/
                      + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1256);
                v76 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v71) + 8); /*0x6b7a94*/
                *v76 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7a97*/
                v76[1] = v94; /*0x6b7a9d*/
                v76[2] = v75; /*0x6b7aa0*/
              }
              else
              {
                UnitClass::ClearTargetRef((UnitClass *)this, *v74); /*0x6b7acd*/
              }
            }
            else
            {
              v73[1] = 3; /*0x6b7ad4*/
              v77 = **(_DWORD **)(this->spawnVectorCount + 4 * v71); /*0x6b7ae1*/
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v77 + 968))(v77, this->SpawnManagerClass_field_68); /*0x6b7ae9*/
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v71) + 488))( /*0x6b7afd*/
                **(_DWORD **)(this->spawnVectorCount + 4 * v71),
                1,
                0);
            }
          }
          ++v71; /*0x6b7b06*/
        }
        while ( v71 < *(_DWORD *)this->__pad_48 ); /*0x6b7b09*/
        if ( v62 ) /*0x6b7b11*/
          UnitClass::ProcessIdleOrders((UnitClass *)this); /*0x6b7b15*/
      }
      this->SpawnManagerClass_field_70 = 2; /*0x6b7b1a*/
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
      this->SpawnManagerClass_field_68 = v78; /*0x6b7b30*/
      this->SpawnManagerClass_field_6C = 0; /*0x6b7b33*/
    }
    if ( this->SpawnManagerClass_field_68 ) /*0x6b7b36*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, int))this->owner->RadioClass + 235))( /*0x6b7b43*/
             this->owner,
             this->SpawnManagerClass_field_68) )
      {
        this->SpawnManagerClass_field_70 = 1; /*0x6b7b5c*/
        return; /*0x6b7b5c*/
      }
      goto LABEL_100; /*0x6b7b4b*/
    }
  }
}



// ==== 0x006B7B90  SpawnManagerClass::SetTarget  this=TOP  sig=csp ====
int __thiscall SpawnManagerClass::SetTarget(SpawnManagerClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x6b7b90*/
  if ( a2 != this->SpawnManagerClass_field_68 ) /*0x6b7b99*/
    this->SpawnManagerClass_field_6C = a2; /*0x6b7b9b*/
  return result; /*0x6b7b9e*/
}



// ==== 0x006B7BB0  UnitClass::ProcessIdleOrders  this=UnitClass  sig=csp ====
int __thiscall UnitClass::ProcessIdleOrders(UnitClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // [esp+Ch] [ebp-8h]

  v3 = 0; /*0x6b7bb7*/
  if ( this->?[3] > 0 ) /*0x6b7bbc*/
  {
    do /*0x6b7c21*/
    {
      v4 = *(_DWORD *)(this->?[0] + 4 * v3); /*0x6b7bc6*/
      if ( *(_DWORD *)(v4 + 4) == 2 ) /*0x6b7bcd*/
      {
        v5 = *(_DWORD **)v4; /*0x6b7bcf*/
        if ( *(_BYTE *)(v5[433] + 3432) ) /*0x6b7bd7*/
        {
          UnitClass::GetExitCell((int)&g_MissionQueueFrame, v5, *(_DWORD **)&this->?); /*0x6b7beb*/
          g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7bfa*/
          g_MissionQueueFrame.nextScenario[1] = v6; /*0x6b7bff*/
          g_MissionQueueFrame.nextScenario[2] = 2; /*0x6b7c05*/
          UnitClass::ClearTargetRef(this, **(_DWORD **)(this->?[0] + 4 * v3)); /*0x6b7c16*/
        }
      }
      result = this->?[3]; /*0x6b7c1b*/
      ++v3; /*0x6b7c1e*/
    }
    while ( v3 < result ); /*0x6b7c21*/
  }
  this->? = 0; /*0x6b7c26*/
  this->? = 0; /*0x6b7c29*/
  *(_DWORD *)&this->? = 0; /*0x6b7c2c*/
  return result; /*0x6b7c2f*/
}



// ==== 0x006B7C60  UnitClass::ClearTargetRef  this=UnitClass  sig=csp ====
int __thiscall UnitClass::ClearTargetRef(UnitClass *this, int a2)
{
  int result; // eax
  int v4; // edx
  _DWORD **v5; // ecx
  _DWORD *v6; // ecx
  ObjectClass *nextObject; // edx
  int v8; // [esp+10h] [ebp-8h]

  if ( a2 == *(_DWORD *)&this->? ) /*0x6b7c6f*/
  {
    result = this->?; /*0x6b7c71*/
    *(_DWORD *)&this->? = 0; /*0x6b7c74*/
    if ( !result ) /*0x6b7c7d*/
      return UnitClass::ProcessIdleOrders(this); /*0x6b7c7f*/
  }
  else if ( a2 == this->? ) /*0x6b7c90*/
  {
    this->? = 0; /*0x6b7c92*/
  }
  else
  {
    result = this->?[3] - 1; /*0x6b7ca5*/
    if ( result < 0 ) /*0x6b7ca6*/
    {
LABEL_10:
      if ( a2 == this->? ) /*0x6b7cbf*/
      {
        TaskManager::Update((TaskManager *)this); /*0x6b7cc3*/
        return UnitClass::ProcessIdleOrders(this); /*0x6b7cca*/
      }
    }
    else
    {
      v4 = this->?[0]; /*0x6b7ca8*/
      v5 = (_DWORD **)(v4 + 4 * result); /*0x6b7cab*/
      while ( a2 != **v5 ) /*0x6b7cb2*/
      {
        --result; /*0x6b7cb4*/
        --v5; /*0x6b7cb5*/
        if ( result < 0 ) /*0x6b7cba*/
          goto LABEL_10; /*0x6b7cba*/
      }
      v6 = *(_DWORD **)(v4 + 4 * result); /*0x6b7cd8*/
      if ( *(int *)(*v6 + 108) <= 0 || *(_BYTE *)(*v6 + 1738) || v6[5] == 1 ) /*0x6b7cf2*/
      {
        *v6 = 0; /*0x6b7cf4*/
        *(_DWORD *)(*(_DWORD *)(this->?[0] + 4 * result) + 4) = 7; /*0x6b7d01*/
        nextObject = this->?; /*0x6b7d08*/
        result = *(_DWORD *)(this->?[0] + 4 * result) + 8; /*0x6b7d18*/
        *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7d1c*/
        *(_DWORD *)(result + 4) = v8; /*0x6b7d22*/
        *(_DWORD *)(result + 8) = nextObject; /*0x6b7d25*/
      }
    }
  }
  return result; /*0x6b7c84*/
}



// ==== 0x006B7D30  SpawnManagerClass::CountAliveSpawns  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::CountAliveSpawns(SpawnManagerClass *this)
{
  int v1; // edx
  int result; // eax
  int spawnVectorCount; // ecx

  v1 = *(_DWORD *)this->__pad_48; /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    spawnVectorCount = this->spawnVectorCount; /*0x6b7d39*/
    do /*0x6b7d4a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)spawnVectorCount + 4) != 7 ) /*0x6b7d43*/
        ++result; /*0x6b7d45*/
      spawnVectorCount += 4; /*0x6b7d46*/
      --v1; /*0x6b7d49*/
    }
    while ( v1 ); /*0x6b7d4a*/
  }
  return result; /*0x6b7d4d*/
}



// ==== 0x006B7D50  SpawnManagerClass::CountDockedSpawns  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::CountDockedSpawns(SpawnManagerClass *this)
{
  int v1; // esi
  int result; // eax
  int spawnVectorCount; // edx
  int v4; // ecx

  v1 = *(_DWORD *)this->__pad_48; /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    spawnVectorCount = this->spawnVectorCount; /*0x6b7d5a*/
    do /*0x6b7d70*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)spawnVectorCount + 4); /*0x6b7d5f*/
      if ( v4 == 6 || !v4 ) /*0x6b7d69*/
        ++result; /*0x6b7d6b*/
      spawnVectorCount += 4; /*0x6b7d6c*/
      --v1; /*0x6b7d6f*/
    }
    while ( v1 ); /*0x6b7d70*/
  }
  return result; /*0x6b7d72*/
}



// ==== 0x006B7D80  TechnoClass::CountPassengers  this=TOP  sig=csp ====
int __thiscall TechnoClass::CountPassengers(TechnoClass *this)
{
  int v2; // ebx
  int i; // esi
  int v4; // eax
  int v5; // ecx
  _BYTE *v6; // ecx

  v2 = 0; /*0x6b7d85*/
  for ( i = 0; i < this->?[3]; ++i ) /*0x6b7d8e*/
  {
    v4 = *(_DWORD *)(this->?[0] + 4 * i); /*0x6b7d93*/
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
int __thiscall SpawnManagerClass::PowerDrainUpdate(SpawnManagerClass *this, int a2)
{
  int SpawnManagerClass_field_6C; // eax
  int v4; // eax
  int SpawnManagerClass_field_68; // eax
  int v6; // eax
  int SpawnManagerClass_field_5C; // edx
  int SpawnManagerClass_field_64; // eax
  int v9; // edx
  int SpawnManagerClass_field_58; // eax
  int result; // eax
  int v12; // eax
  TechnoClass *owner; // esi
  int v14; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6b7de9*/
  Power::TimerProcess(this->SpawnManagerClass_field_70); /*0x6b7df4*/
  SpawnManagerClass_field_6C = this->SpawnManagerClass_field_6C; /*0x6b7df9*/
  if ( SpawnManagerClass_field_6C ) /*0x6b7dfe*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(SpawnManagerClass_field_6C + 4) + 16))(SpawnManagerClass_field_6C + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  SpawnManagerClass_field_68 = this->SpawnManagerClass_field_68; /*0x6b7e12*/
  if ( SpawnManagerClass_field_68 ) /*0x6b7e17*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(SpawnManagerClass_field_68 + 4) + 16))(SpawnManagerClass_field_68 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  SpawnManagerClass_field_5C = this->SpawnManagerClass_field_5C; /*0x6b7e2b*/
  SpawnManagerClass_field_64 = this->SpawnManagerClass_field_64; /*0x6b7e2e*/
  if ( SpawnManagerClass_field_5C != -1 ) /*0x6b7e34*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C >= SpawnManagerClass_field_64 ) /*0x6b7e40*/
      SpawnManagerClass_field_64 = 0; /*0x6b7e46*/
    else
      SpawnManagerClass_field_64 -= *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C; /*0x6b7e42*/
  }
  Power::TimerProcess(SpawnManagerClass_field_64); /*0x6b7e4b*/
  v9 = *(_DWORD *)&this->__pad_48[8]; /*0x6b7e50*/
  SpawnManagerClass_field_58 = this->SpawnManagerClass_field_58; /*0x6b7e53*/
  if ( v9 != -1 ) /*0x6b7e59*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= SpawnManagerClass_field_58 ) /*0x6b7e65*/
      SpawnManagerClass_field_58 = 0; /*0x6b7e6b*/
    else
      SpawnManagerClass_field_58 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6b7e67*/
  }
  Power::TimerProcess(SpawnManagerClass_field_58); /*0x6b7e70*/
  Power::TimerProcess(*(_DWORD *)this->__pad_48); /*0x6b7e7b*/
  Power::TimerProcess((int)this->spawnType); /*0x6b7e86*/
  result = (int)this->spawnOwner; /*0x6b7e8b*/
  if ( result ) /*0x6b7e90*/
  {
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6b7e99*/
    result = Power::TimerProcess(v12); /*0x6b7e9f*/
  }
  owner = this->owner; /*0x6b7ea4*/
  if ( owner ) /*0x6b7ea9*/
  {
    v14 = (*((int (__stdcall **)(void **))owner->? + 4))(&owner->?); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return result; /*0x6b7ebd*/
}



// ==== 0x006B7ED0  SpawnManagerClass::ddtor  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::ddtor(SpawnManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6b7ed6*/
    return -2147467261; /*0x6b7ed8*/
  *a2 = 108652929; /*0x6b7ee6*/
  a2[1] = 299085213; /*0x6b7eee*/
  a2[2] = 268441278; /*0x6b7ef7*/
  a2[3] = unk_7E986C; /*0x6b7f00*/
  return 0; /*0x6b7edd*/
}



// ==== 0x006B7F10  SpawnManagerClass::LoadFromStream  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::LoadFromStream(SpawnManagerClass *this, int a2)
{
  SpawnManagerClass *v2; // ebx
  int v3; // esi
  int Prefix_0; // ebp
  int v5; // edi
  int *spawns; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int spawnVectorCapacity; // ecx
  int v11; // eax
  int v12; // eax
  int spawnVectorCount; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = this; /*0x6b7f12*/
  v3 = a2; /*0x6b7f18*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6b7f24*/
  v5 = 0; /*0x6b7f26*/
  if ( Prefix_0 >= 0 ) /*0x6b7f2a*/
  {
    if ( v2 ) /*0x6b7f32*/
    {
      AbstractClass::InitVtables((AbstractClass *)v2, (int)&this); /*0x6b7f3b*/
      SpawnManagerClass::Constructor_6B83A0((SpawnManagerClass *)v2->spawns, 0, 0); /*0x6b7f45*/
      *(_DWORD *)&v2->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7f51*/
      v2->SpawnManagerClass_field_58 = 0; /*0x6b7f57*/
      Timer::Start((Timer *)&v2->SpawnManagerClass_field_5C, 0); /*0x6b7f5a*/
      v2->AbstractClass = &SpawnManagerClass::`vftable'; /*0x6b7f5f*/
      v2->? = &SpawnManagerClass::`vftable'; /*0x6b7f65*/
      v2->? = &SpawnManagerClass::`vftable'; /*0x6b7f6c*/
      v2->? = &SpawnManagerClass::`vftable'; /*0x6b7f73*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      spawns = v2->spawns; /*0x6b7f92*/
      if ( v2 != (SpawnManagerClass *)-56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor((SpawnControlVector *)v2->spawns, 0, 0); /*0x6b7f9d*/
        *spawns = (int)&DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b7fa2*/
        *(_DWORD *)&v2->__pad_48[4] = 10; /*0x6b7fa8*/
        *(_DWORD *)v2->__pad_48 = 0; /*0x6b7faf*/
      }
      v7 = v16; /*0x6b7fb2*/
      this = 0; /*0x6b7fb6*/
      if ( v16 <= 0 ) /*0x6b7fbc*/
      {
LABEL_20:
        v14 = 0; /*0x6b804d*/
        if ( v7 > 0 ) /*0x6b8051*/
        {
          do /*0x6b8069*/
            ObjectPtr::RegisterForTracking( /*0x6b805f*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v2->spawnVectorCount + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->owner); /*0x6b8074*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->spawnOwner); /*0x6b8082*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->SpawnManagerClass_field_68); /*0x6b8090*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->SpawnManagerClass_field_6C); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = __2_YAPAXI_Z(0x18u); /*0x6b7fc8*/
          if ( v8 ) /*0x6b7fd2*/
          {
            v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7fd4*/
            *(_DWORD *)(v8 + 16) = 0; /*0x6b7fda*/
            *(_DWORD *)(v8 + 8) = v9; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v5, 24, 0); /*0x6b7ff1*/
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          spawnVectorCapacity = v2->spawnVectorCapacity; /*0x6b7ffb*/
          if ( *(_DWORD *)v2->__pad_48 < spawnVectorCapacity /*0x6b8020*/
            || (BYTE1(v2->creationFrame) || !spawnVectorCapacity)
            && (v11 = *(_DWORD *)&v2->__pad_48[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*spawns + 8))(
                 v2->spawns,
                 spawnVectorCapacity + v11,
                 0) )
          {
            v12 = *(_DWORD *)v2->__pad_48; /*0x6b8027*/
            spawnVectorCount = v2->spawnVectorCount; /*0x6b802a*/
            *(_DWORD *)v2->__pad_48 = v12 + 1; /*0x6b8030*/
            *(_DWORD *)(spawnVectorCount + 4 * v12) = v5; /*0x6b8033*/
          }
          v7 = v16; /*0x6b803a*/
          this = (SpawnManagerClass *)((char *)this + 1); /*0x6b8041*/
          if ( (int)this >= v16 ) /*0x6b8045*/
            goto LABEL_20; /*0x6b8045*/
          v5 = 0; /*0x6b7fc4*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b80a3*/
}



// ==== 0x006B80B0  SpawnManagerClass::SaveState  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::SaveState(SpawnManagerClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6b80c2*/
  if ( result >= 0 ) /*0x6b80c9*/
  {
    v4 = *a2; /*0x6b80ce*/
    a3 = *(_DWORD *)this->__pad_48; /*0x6b80da*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x6b80de*/
    if ( result >= 0 ) /*0x6b80e3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x6b80ed*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))( /*0x6b80fd*/
                   a2,
                   *(_DWORD *)(this->spawnVectorCount + 4 * i),
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
int SpawnManagerClass::StubReturn116(SpawnManagerClass *this)
{
  return 116; /*0x6b8125*/
}



// ==== 0x006B8130  SpawnManagerClass::StubReturn65  this=SpawnManagerClass  sig=csp ====
int SpawnManagerClass::StubReturn65(SpawnManagerClass *this)
{
  return 65; /*0x6b8135*/
}



// ==== 0x006B8140  SpawnManagerClass::ProcessEvent  this=SpawnManagerClass  sig=csp ====
void *__thiscall SpawnManagerClass::ProcessEvent(SpawnManagerClass *this, char a2)
{
  SpawnManagerClass::Constructor_SpawnManagerClass((TaskManager *)this); /*0x6b8143*/
  if ( (a2 & 1) != 0 ) /*0x6b814d*/
    __3_YAXPAX_Z(this); /*0x6b8150*/
  return this; /*0x6b815a*/
}



// ==== 0x006B8160  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall SpawnManagerClass_25::ddtor(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b8166*/
  this->m_10 = 0; /*0x6b8169*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b8170*/
  {
    __3_YAXPAX_Z(v2); /*0x6b8176*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b817e*/
  }
  BYTE1(this->m_C) = 0; /*0x6b8181*/
  this->m_8 = 0; /*0x6b8184*/
}



// ==== 0x006B8190  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::LoadState  this=DynamicVector  sig=csp ====
unsigned int __thiscall SpawnManagerClass_25::LoadState(
        _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b8190*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b81a5*/
  else
    return 0; /*0x6b8197*/
}



// ==== 0x006B81B0  _VectorClass_PAUSpawnControl_SpawnManagerClass::SaveState  this=VectorClass  sig=csp ====
int __thiscall SpawnManagerClass_25::SaveState(_VectorClass_PAUSpawnControl_SpawnManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b81ba*/
}



// ==== 0x006B81C0  _DynamicVectorClass_PAVSpawnManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SpawnManagerClass::Destroy(_DynamicVectorClass_PAVSpawnManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b81c6*/
  this->m_10 = 0; /*0x6b81c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b81d0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b81d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b81de*/
  }
  BYTE1(this->m_C) = 0; /*0x6b81e1*/
  this->m_8 = 0; /*0x6b81e4*/
}



// ==== 0x006B81F0  _DynamicVectorClass_PAVSpawnManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpawnManagerClass::GetItemIndex(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b81f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b8205*/
  else
    return 0; /*0x6b81f7*/
}



// ==== 0x006B8210  _VectorClass_PAVSpawnManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::Get(_VectorClass_PAVSpawnManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b821a*/
}



// ==== 0x006B8220  _VectorClass_PAUSpawnControl_SpawnManagerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SpawnManagerClass_25::AddRef(_VectorClass_PAUSpawnControl_SpawnManagerClass *this, int a2)
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
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b8235*/
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
_DWORD *__thiscall SpawnManagerClass::Constructor_6B83A0(SpawnManagerClass *this, int a2, int a3)
{
  this->? = 0; /*0x6b83a9*/
  this->? = (void *)a2; /*0x6b83b0*/
  LOBYTE(this->?) = 1; /*0x6b83b3*/
  BYTE1(this->?) = 0; /*0x6b83b7*/
  this->AbstractClass = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b83bb*/
  if ( a2 ) /*0x6b83c1*/
  {
    if ( a3 ) /*0x6b83c9*/
    {
      this->? = (void *)a3; /*0x6b83cb*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x6b83dc*/
      BYTE1(this->?) = 1; /*0x6b83df*/
    }
  }
  this->AbstractClass = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b83e3*/
  this->? = 10; /*0x6b83e9*/
  this->? = 0; /*0x6b83f0*/
  return &this->AbstractClass; /*0x6b83f9*/
}



// ==== 0x006B8400  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::Release  this=DynamicVector  sig=csp ====
char __thiscall SpawnManagerClass_25::Release(
        _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b840c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b8412*/
    if ( a3 ) /*0x6b8418*/
      v4 = a3; /*0x6b842e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b842a*/
    LOBYTE(this->m_C) = 1; /*0x6b8432*/
    if ( !v4 ) /*0x6b8436*/
      return 0; /*0x6b84aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b8438*/
    {
      m_8 = this->m_8; /*0x6b843f*/
      if ( a2 < m_8 ) /*0x6b8444*/
        m_8 = a2; /*0x6b8446*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b844c*/
        ++i; /*0x6b8451*/
      if ( BYTE1(this->m_C) ) /*0x6b845e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b8469*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b8471*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b847a*/
    this->m_8 = a2; /*0x6b8482*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b8485*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b848e*/
  }
  v7 = this->m_8; /*0x6b8491*/
  if ( v7 < this->m_10 ) /*0x6b8499*/
    this->m_10 = v7; /*0x6b849b*/
  return 1; /*0x6b849e*/
}



// ==== 0x006B84B0  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::Spawn  this=DynamicVector  sig=csp ====
int __thiscall SpawnManagerClass_25::Spawn(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b84b0*/
  result = 0; /*0x6b84b3*/
  if ( m_10 <= 0 ) /*0x6b84b8*/
    return -1; /*0x6b84cf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b84be*/
  {
    if ( ++result >= m_10 ) /*0x6b84cd*/
      return -1; /*0x6b84cd*/
  }
  return result; /*0x6b84d2*/
}



// ==== 0x006B84E0  _VectorClass_PAVSpawnManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::Add(_VectorClass_PAVSpawnManagerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6b84e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6b84ed*/
  {
    v3 = 0; /*0x6b84ef*/
    if ( m_8 <= 0 ) /*0x6b84f3*/
      return 1; /*0x6b8513*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b84f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b84fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b8504*/
    {
      ++v3; /*0x6b8506*/
      ++v4; /*0x6b8507*/
      if ( v3 >= m_8 ) /*0x6b850c*/
        return 1; /*0x6b850c*/
    }
  }
  return 0; /*0x6b850e*/
}



// ==== 0x006B8520  _VectorClass_PAVSpawnManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::Release(_VectorClass_PAVSpawnManagerClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6b852c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b8536*/
    if ( a3 ) /*0x6b853c*/
      v4 = a3; /*0x6b8552*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b854e*/
    LOBYTE(this->m_C) = 1; /*0x6b8556*/
    if ( v4 ) /*0x6b855a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6b8565*/
      {
        m_8 = this->m_8; /*0x6b856c*/
        if ( a2 < m_8 ) /*0x6b8571*/
          m_8 = a2; /*0x6b8573*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b8579*/
          ++i; /*0x6b857e*/
        if ( BYTE1(this->m_C) ) /*0x6b858b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b8596*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6b859e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6b85a7*/
      this->m_8 = a2; /*0x6b85af*/
      BYTE1(this->m_C) = a3 == 0; /*0x6b85b2*/
      return 1; /*0x6b85b8*/
    }
    else
    {
      return 0; /*0x6b855f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSpawnManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b85c2*/
    return 1; /*0x6b85c8*/
  }
}



// ==== 0x006B85D0  _VectorClass_PAVSpawnManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SpawnManagerClass::Remove(_VectorClass_PAVSpawnManagerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6b85dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b85e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b85eb*/
  }
  BYTE1(this->m_C) = 0; /*0x6b85ee*/
  this->m_8 = 0; /*0x6b85f1*/
}



// ==== 0x006B8600  _VectorClass_PAVSpawnManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::GetSize(_VectorClass_PAVSpawnManagerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6b8600*/
    return 0; /*0x6b8608*/
  m_8 = this->m_8; /*0x6b860e*/
  result = 0; /*0x6b8611*/
  if ( m_8 <= 0 ) /*0x6b8615*/
    return -1; /*0x6b862c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b861b*/
  {
    if ( ++result >= m_8 ) /*0x6b862a*/
      return -1; /*0x6b862a*/
  }
  return result; /*0x6b860a*/
}



// ==== 0x006B8640  _VectorClass_PAVSpawnManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpawnManagerClass::GetCapacity(_VectorClass_PAVSpawnManagerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b8640*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b8655*/
  else
    return 0; /*0x6b8647*/
}



// ==== 0x006B8660  _DynamicVectorClass_PAVSpawnManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::SetCapacity(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b866c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b8672*/
    if ( a3 ) /*0x6b8678*/
      v4 = a3; /*0x6b868e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b868a*/
    LOBYTE(this->m_C) = 1; /*0x6b8692*/
    if ( !v4 ) /*0x6b8696*/
      return 0; /*0x6b870a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b8698*/
    {
      m_8 = this->m_8; /*0x6b869f*/
      if ( a2 < m_8 ) /*0x6b86a4*/
        m_8 = a2; /*0x6b86a6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b86ac*/
        ++i; /*0x6b86b1*/
      if ( BYTE1(this->m_C) ) /*0x6b86be*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b86c9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b86d1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b86da*/
    this->m_8 = a2; /*0x6b86e2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b86e5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSpawnManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b86ee*/
  }
  v7 = this->m_8; /*0x6b86f1*/
  if ( v7 < this->m_10 ) /*0x6b86f9*/
    this->m_10 = v7; /*0x6b86fb*/
  return 1; /*0x6b86fe*/
}



// ==== 0x006B8710  _DynamicVectorClass_PAVSpawnManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::FindItemIndex(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b8710*/
  result = 0; /*0x6b8713*/
  if ( m_10 <= 0 ) /*0x6b8718*/
    return -1; /*0x6b872f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b871e*/
  {
    if ( ++result >= m_10 ) /*0x6b872d*/
      return -1; /*0x6b872d*/
  }
  return result; /*0x6b8732*/
}



// ==== 0x006B8740  ?$VectorClass@PAUSpawnControl@SpawnManagerClass@@::validatePathMemory  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_6B8740(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b8743*/
  *Block = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b8746*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b8750*/
  {
    __3_YAXPAX_Z(v3); /*0x6b8758*/
    *(Block + 1) = 0; /*0x6b8760*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b876b*/
  *(Block + 2) = 0; /*0x6b8771*/
  if ( (a2 & 1) != 0 ) /*0x6b8778*/
    __3_YAXPAX_Z(Block); /*0x6b877b*/
  return Block; /*0x6b8785*/
}



// ==== 0x006B8790  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SpawnManagerClass_25::QueryInterface(
        _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b8793*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b8796*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b87a0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b87b0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b87bb*/
  this->m_8 = 0; /*0x6b87c1*/
  if ( (a2 & 1) != 0 ) /*0x6b87c8*/
    __3_YAXPAX_Z(this); /*0x6b87cb*/
  return this->__pad_0; /*0x6b87d5*/
}



// ==== 0x006B87E0  _VectorClass_PAVSpawnManagerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpawnManagerClass::QueryInterface(_VectorClass_PAVSpawnManagerClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b87e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpawnManagerClass *>::`vftable'; /*0x6b87e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b87f0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b8800*/
  }
  BYTE1(this->m_C) = 0; /*0x6b880b*/
  this->m_8 = 0; /*0x6b8811*/
  if ( (a2 & 1) != 0 ) /*0x6b8818*/
    __3_YAXPAX_Z(this); /*0x6b881b*/
  return this->__pad_0; /*0x6b8825*/
}



// ==== 0x006B8830  _DynamicVectorClass_PAVSpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b8833*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpawnManagerClass *>::`vftable'; /*0x6b8836*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b8840*/
  {
    __3_YAXPAX_Z(v3); /*0x6b8848*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b8850*/
  }
  BYTE1(this->m_C) = 0; /*0x6b885b*/
  this->m_8 = 0; /*0x6b8861*/
  if ( (a2 & 1) != 0 ) /*0x6b8868*/
    __3_YAXPAX_Z(this); /*0x6b886b*/
  return this->__pad_0; /*0x6b8875*/
}



// ==== 0x006B8880  SpawnControlVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall SpawnControlVector::Constructor(SpawnControlVector *this, int a2, int a3)
{
  this->Items = 0; /*0x6b888b*/
  this->Capacity = a2; /*0x6b888e*/
  this->IsInitialized = 1; /*0x6b8891*/
  this->IsAllocated = 0; /*0x6b8895*/
  *this = (SpawnControlVector)&VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b8898*/
  if ( a2 ) /*0x6b889e*/
  {
    if ( a3 ) /*0x6b88a6*/
    {
      this->Items = a3; /*0x6b88a8*/
      return this; /*0x6b88ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x6b88bd*/
    this->IsAllocated = 1; /*0x6b88c0*/
  }
  return this; /*0x6b88ad*/
}



// ==== 0x006B88D0  sub_6B88D0  this=-  sig=ida-proto ====
int sub_6B88D0()
{
  dword_B0B8A8 = 0; /*0x6b88d2*/
  dword_B0B8AC = 0; /*0x6b88d7*/
  dword_B0B8B0 = 0; /*0x6b88dc*/
  dword_B0B8B4 = 0; /*0x6b88e1*/
  return 0; /*0x6b88e6*/
}



// ==== 0x006B88F0  sub_6B88F0  this=-  sig=ida-proto ====
void sub_6B88F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b88fc*/
  dbl_B0B8C0 = Math::Sqrt(v0 + v0); /*0x6b890e*/
}



// ==== 0x006B8920  sub_6B8920  this=-  sig=ida-proto ====
void sub_6B8920()
{
  dbl_B0B910 = dbl_B0B8C0 / 60.0; /*0x6b892c*/
}



// ==== 0x006B8940  sub_6B8940  this=-  sig=ida-proto ====
void sub_6B8940()
{
  dbl_B0B8F8 = 1.0 / dbl_B0B910; /*0x6b894c*/
}



// ==== 0x006B8960  sub_6B8960  this=-  sig=ida-proto ====
void sub_6B8960()
{
  dbl_B0B8F0 = 0.0174532925199433 * 45.0; /*0x6b896c*/
}



// ==== 0x006B8980  sub_6B8980  this=-  sig=ida-proto ====
void sub_6B8980()
{
  dbl_B0B8C8 = 0.0174532925199433 * 60.0; /*0x6b898c*/
}



// ==== 0x006B89A0  sub_6B89A0  this=-  sig=ida-proto ====
void sub_6B89A0()
{
  dbl_B0B8A0 = 0.0174532925199433 * 90.0; /*0x6b89ac*/
}



// ==== 0x006B89C0  sub_6B89C0  this=-  sig=ida-proto ====
__int64 sub_6B89C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B8A0 - dbl_B0B8C8); /*0x6b89d2*/
  result = Math::RoundToInt(v0 * dbl_B0B8C0 * 0.5); /*0x6b89e6*/
  dword_B0B918 = result; /*0x6b89eb*/
  return result; /*0x6b89f0*/
}



// ==== 0x006B8A00  sub_6B8A00  this=-  sig=ida-proto ====
void sub_6B8A00()
{
  dbl_B0B8D0 = Math::ArcTan((double)dword_B0B918 * 0.00390625); /*0x6b8a17*/
}



// ==== 0x006B8A30  sub_6B8A30  this=-  sig=ida-proto ====
void sub_6B8A30()
{
  dbl_B0B8E8 = Math::ArcTan((double)(2 * dword_B0B918) / dbl_B0B8C0); /*0x6b8a52*/
}



// ==== 0x006B8A60  sub_6B8A60  this=-  sig=ida-proto ====
__int64 sub_6B8A60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B918) + 0.5); /*0x6b8a7b*/
  dword_B0B90C = result; /*0x6b8a80*/
  return result; /*0x6b8a86*/
}



// ==== 0x006B8A90  sub_6B8A90  this=-  sig=ida-proto ====
int sub_6B8A90()
{
  word_B0B8B8 = 0; /*0x6b8a92*/
  word_B0B8BA = 0; /*0x6b8a98*/
  return 0; /*0x6b8a9e*/
}



// ==== 0x006B8AA0  sub_6B8AA0  this=-  sig=ida-proto ====
int sub_6B8AA0()
{
  dword_B0B8D8 = 0; /*0x6b8aa2*/
  dword_B0B8DC = 0; /*0x6b8aa7*/
  dword_B0B8E0 = 0; /*0x6b8aac*/
  return 0; /*0x6b8ab1*/
}



// ==== 0x006B8AC0  sub_6B8AC0  this=-  sig=ida-proto ====
int sub_6B8AC0()
{
  dword_B0B908 = 0; /*0x6b8ac5*/
  dword_B0B900 = 128; /*0x6b8acf*/
  dword_B0B904 = 128; /*0x6b8ad4*/
  return 128; /*0x6b8ad9*/
}



// ==== 0x006B8AE0  ScenarioClass::ResetIntroFlags  this=ScenarioClass  sig=csp ====
unsigned int __thiscall ScenarioClass::ResetIntroFlags(ScenarioClass *this)
{
  unsigned int result; // eax

  result = this->nextScenario[0] & 0xFFF80000 | 0x8088; /*0x6b8ae7*/
  this->nextScenario[0] = result; /*0x6b8aec*/
  return result; /*0x6b8aee*/
}



// ==== 0x006B8AF0  ObjectClass::ApplyGameOptions_Helper  this=ObjectClass  sig=csp ====
bool __thiscall ApplyGameOptions_Helper(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax

  v2 = (int)this->AbstractClass ^ *a2; /*0x6b8af8*/
  return !(_BYTE)v2 && (v2 & 0x7FF00) == 0; /*0x6b8b07*/
}



// ==== 0x006B8B10  ObjectClass::nullsub_37  this=ObjectClass  sig=csp ====
void nullsub_37(ObjectClass *this)
{
  ; /*0x6b8b10*/
}



// ==== 0x006B8B20  ObjectClass::nullsub_38  this=ObjectClass  sig=csp ====
void nullsub_38(ObjectClass *this)
{
  ; /*0x6b8b20*/
}



// ==== 0x006B8B30  ScenarioClass::RevealMapForHouse  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::RevealMapForHouse(ScenarioClass *this, char *a2)
{
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, g_INI_Key_TiberiumGrows, (this->nextScenario[0] & 0x40) != 0); /*0x6b8b4e*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aTiberiumspread, (this->nextScenario[0] & 0x80) != 0); /*0x6b8b69*/
  INIClass::SetBool( /*0x6b8b85*/
    a2,
    (unsigned __int8 *)off_8401C8,
    g_INI_Key_TiberiumExplosive,
    (this->nextScenario[0] & 0x4000) != 0);
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aDestroyablebri, (this->nextScenario[0] & 0x8000) != 0); /*0x6b8ba0*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aMcvdeploy, BYTE1(this->nextScenario[0]) & 1); /*0x6b8bbb*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aInitialveteran, (this->nextScenario[0] & 0x200) != 0); /*0x6b8bd7*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aFixedalliance, (this->nextScenario[0] & 0x400) != 0); /*0x6b8bf2*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aHarvesterimmun, (this->nextScenario[0] & 0x800) != 0); /*0x6b8c0d*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, g_INI_Key_FogOfWar, (this->nextScenario[0] & 0x1000) != 0); /*0x6b8c29*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aInert, (this->nextScenario[0] & 0x20) != 0); /*0x6b8c44*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aIonstorms, (this->nextScenario[0] & 0x20000) != 0); /*0x6b8c5f*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aMeteorites, HIWORD(this->nextScenario[0]) & 1); /*0x6b8c7b*/
  return INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aVisceroids, (this->nextScenario[0] & 0x40000) != 0); /*0x6b8c9b*/
}



// ==== 0x006B8CA0  GameMode::ReadFlagsFromINI  this=GameMode  sig=csp ====
unsigned int __thiscall GameMode::ReadFlagsFromINI(GameMode *this, _DWORD *a2)
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

  INIClass::ResetSection((INIClass *)a2); /*0x6b8caa*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b8cc5*/
                     a2,
                     off_8401CC,
                     (unsigned __int8 *)g_INI_Key_TiberiumExplosive,
                     (*(_DWORD *)this & 0x4000) != 0);
  v4 = *(_DWORD *)this; /*0x6b8cca*/
  BYTE1(v4) = BYTE1(*(_DWORD *)this) & 0xBF; /*0x6b8cd2*/
  v5 = v4 | ((Bool_Overwrite & 1) << 14); /*0x6b8cd7*/
  *(_DWORD *)this = v5; /*0x6b8cd9*/
  v6 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aMcvdeploy, BYTE1(v5) & 1); /*0x6b8cec*/
  v7 = *(_DWORD *)this; /*0x6b8cf1*/
  BYTE1(v7) = BYTE1(*(_DWORD *)this) & 0xFE; /*0x6b8cf9*/
  v8 = v7 | ((v6 & 1) << 8); /*0x6b8cfc*/
  *(_DWORD *)this = v8; /*0x6b8d00*/
  v9 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aInitialveteran, (v8 & 0x200) != 0); /*0x6b8d14*/
  v10 = *(_DWORD *)this; /*0x6b8d19*/
  BYTE1(v10) = BYTE1(*(_DWORD *)this) & 0xFD; /*0x6b8d21*/
  v11 = v10 | ((v9 & 1) << 9); /*0x6b8d24*/
  *(_DWORD *)this = v11; /*0x6b8d28*/
  v12 = *(_DWORD *)this & 0xFFFDFFFF /*0x6b8d4f*/
      | ((INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aIonstorms, (v11 & 0x20000) != 0) & 1) << 17);
  *(_DWORD *)this = v12; /*0x6b8d53*/
  v13 = *(_DWORD *)this & 0xFFFEFFFF /*0x6b8d7a*/
      | ((INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aMeteorites, BYTE2(v12) & 1) & 1) << 16);
  *(_DWORD *)this = v13; /*0x6b8d7c*/
  result = *(_DWORD *)this & 0xFFFBFFFF /*0x6b8da5*/
         | ((INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aVisceroids, (v13 & 0x40000) != 0) & 1) << 18);
  *(_DWORD *)this = result; /*0x6b8da7*/
  if ( !*(_DWORD *)&dword_A8B238 || stru_A8EB00.?[391] ) /*0x6b8dbb*/
  {
    v15 = *(_DWORD *)this & 0xFFFFFFBF /*0x6b8de5*/
        | ((INIClass::ReadBool_Overwrite(
              a2,
              off_8401CC,
              (unsigned __int8 *)g_INI_Key_TiberiumGrows,
              (result & 0x40) != 0)
          & 1) << 6);
    *(_DWORD *)this = v15; /*0x6b8de9*/
    v16 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aTiberiumspread, (v15 & 0x80) != 0); /*0x6b8dfd*/
    v17 = *(_DWORD *)this; /*0x6b8e02*/
    LOBYTE(v17) = *(_DWORD *)this & 0x7F; /*0x6b8e0a*/
    v18 = v17 | ((v16 & 1) << 7); /*0x6b8e0d*/
    *(_DWORD *)this = v18; /*0x6b8e11*/
    v19 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aDestroyablebri, (v18 & 0x8000) != 0); /*0x6b8e25*/
    v20 = *(_DWORD *)this; /*0x6b8e2a*/
    BYTE1(v20) = BYTE1(*(_DWORD *)this) & 0x7F; /*0x6b8e32*/
    v21 = v20 | ((v19 & 1) << 15); /*0x6b8e35*/
    *(_DWORD *)this = v21; /*0x6b8e39*/
    v22 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aFixedalliance, (v21 & 0x400) != 0); /*0x6b8e4d*/
    v23 = *(_DWORD *)this; /*0x6b8e52*/
    BYTE1(v23) = BYTE1(*(_DWORD *)this) & 0xFB; /*0x6b8e5a*/
    v24 = v23 | ((v22 & 1) << 10); /*0x6b8e5d*/
    *(_DWORD *)this = v24; /*0x6b8e61*/
    v25 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)g_INI_Key_FogOfWar, (v24 & 0x1000) != 0); /*0x6b8e75*/
    v26 = *(_DWORD *)this; /*0x6b8e7a*/
    BYTE1(v26) = BYTE1(*(_DWORD *)this) & 0xEF; /*0x6b8e82*/
    v27 = v26 | ((v25 & 1) << 12); /*0x6b8e85*/
    *(_DWORD *)this = v27; /*0x6b8e89*/
    v28 = *(_DWORD *)this & 0xFFFFFFDF /*0x6b8ead*/
        | (32 * (INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aInert, (v27 & 0x20) != 0) & 1));
    *(_DWORD *)this = v28; /*0x6b8eb1*/
    v29 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aHarvesterimmun, (v28 & 0x800) != 0); /*0x6b8ec5*/
    v30 = *(_DWORD *)this; /*0x6b8eca*/
    BYTE1(v30) = BYTE1(*(_DWORD *)this) & 0xF7; /*0x6b8ed2*/
    result = v30 | ((v29 & 1) << 11); /*0x6b8ed5*/
    *(_DWORD *)this = result; /*0x6b8ed7*/
  }
  return result; /*0x6b8ed9*/
}



// ==== 0x006B8EE0  sub_6B8EE0  this=-  sig=ida-proto ====
int sub_6B8EE0()
{
  dword_B0B920 = 0; /*0x6b8ee2*/
  dword_B0B924 = 0; /*0x6b8ee7*/
  dword_B0B928 = 0; /*0x6b8eec*/
  dword_B0B92C = 0; /*0x6b8ef1*/
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
  v7 = dword_84066C[v6]; /*0x6b8f49*/
  v8 = (a4 * *a2) >> 1; /*0x6b8f55*/
  v56 = dword_84026C[v6]; /*0x6b8f59*/
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
  dword_B0B938 = 0; /*0x6b9352*/
  dword_B0B93C = 0; /*0x6b9357*/
  dword_B0B940 = 0; /*0x6b935c*/
  dword_B0B944 = 0; /*0x6b9361*/
  return 0; /*0x6b9366*/
}



// ==== 0x006B93E0  ObjectClass::method_6B93E0  this=ObjectClass  sig=csp ====
int __thiscall sub_6B93E0(ObjectClass *this)
{
  unsigned __int8 *v1; // ecx
  int v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax

  v1 = (unsigned __int8 *)&this->AbstractClass + 2; /*0x6b93e4*/
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
_DWORD *__thiscall sub_6B9450(ObjectClass *this)
{
  char *v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  void *v5; // edi
  unsigned int v6; // edx

  this->? = (void *)-1717986918; /*0x6b945a*/
  this->owningHouseIndex = -1717986918; /*0x6b945d*/
  this->occupant = 1070176665; /*0x6b9466*/
  this->fallRate = 1072273817; /*0x6b946d*/
  this->nextObject = (ObjectClass *)128; /*0x6b9474*/
  this->? = 128; /*0x6b9477*/
  this->? = (void *)128; /*0x6b947a*/
  this->? = 0; /*0x6b947d*/
  v2 = 0; /*0x6b9480*/
  v3 = 128; /*0x6b9482*/
  do /*0x6b9489*/
  {
    ++v2; /*0x6b9484*/
    v3 >>= 1; /*0x6b9485*/
  }
  while ( v3 ); /*0x6b9489*/
  this->? = v2; /*0x6b948b*/
  this->? = 0; /*0x6b9496*/
  v4 = 1 << ((_BYTE)v2 - 1); /*0x6b9499*/
  this->? = v2 - 1; /*0x6b949b*/
  this->? = 0; /*0x6b949e*/
  LOBYTE(this->?) = 0; /*0x6b94a1*/
  this->? = (void *)v4; /*0x6b94a4*/
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6b94b3*/
  v6 = 4 * (int)this->?; /*0x6b94b8*/
  this->AbstractClass = v5; /*0x6b94bf*/
  memset(v5, 0, v6); /*0x6b94c4*/
  this->? = (int)sub_6B94E0; /*0x6b94cd*/
  return &this->AbstractClass; /*0x6b94d6*/
}



// ==== 0x006B94E0  ObjectClass::method_6B94E0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6B94E0(ObjectClass *this)
{
  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = String::Length((String *)this); /*0x6b94ec*/
  for ( i = 0; i < String::Length((String *)this); ++i ) /*0x6b94f0*/
  {
    v4 = String::GetOrEmpty((String *)this); /*0x6b94fb*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x6b9510*/
  }
  return v2; /*0x6b9520*/
}



// ==== 0x006B9530  HashTable::Clear  this=HashTable  sig=csp ====
void __thiscall HashTable::Clear(HashTable *this)
{
  int HashTable_field_0x04; // ecx
  unsigned int v3; // edi
  int HashTable_field_0x08; // eax
  int v5; // ebx
  _DWORD *v6; // ecx
  const char **v7; // esi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  int HashTable_field_0x0C; // ecx
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // esi
  ObjectClass *v25; // ebx
  unsigned int v26; // edx
  unsigned int HashTable_field_0x30; // eax
  float v28; // [esp+10h] [ebp-31Ch]
  int *v29; // [esp+10h] [ebp-31Ch]
  _BYTE v30[792]; // [esp+14h] [ebp-318h] BYREF

  unknown_libname_73(v30); /*0x6b9540*/
  while ( 1 ) /*0x6b9545*/
  {
    HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6b9545*/
    v3 = 0; /*0x6b9548*/
    if ( !HashTable_field_0x04 ) /*0x6b954c*/
      break; /*0x6b954c*/
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6b9552*/
    *(_QWORD *)&v30[4] = (unsigned int)(HashTable_field_0x04 - 1); /*0x6b9556*/
    *(_DWORD *)&v30[12] = HashTable_field_0x08; /*0x6b9562*/
    *(_DWORD *)&v30[16] = 0; /*0x6b9566*/
    v5 = 0; /*0x6b956e*/
    v28 = (double)*(__int64 *)&v30[4] / (double)HashTable_field_0x08; /*0x6b9572*/
    if ( HashTable_field_0x08 <= 0 ) /*0x6b9576*/
      break; /*0x6b9576*/
    v6 = *(_DWORD **)this->__pad_0; /*0x6b957f*/
    while ( !*v6 ) /*0x6b9583*/
    {
      ++v5; /*0x6b9585*/
      ++v6; /*0x6b9586*/
      if ( v5 >= HashTable_field_0x08 ) /*0x6b958b*/
        goto LABEL_23; /*0x6b958b*/
    }
    if ( v5 == -1 ) /*0x6b9596*/
      break; /*0x6b9596*/
    v7 = *(const char ***)(*(_DWORD *)this->__pad_0 + 4 * v5); /*0x6b959c*/
    String::Reassign((String *)v30, v7); /*0x6b95a4*/
    v8 = *(_DWORD *)this->__pad_0; /*0x6b95a9*/
    qmemcpy(&v30[20], v7 + 1, 0x304u); /*0x6b95b8*/
    v9 = *(_DWORD **)(v8 + 4 * v5); /*0x6b95ba*/
    v10 = v9[194]; /*0x6b95bf*/
    if ( v9 ) /*0x6b95c5*/
    {
      DeleteAndZero(*(ObjectClass **)(v8 + 4 * v5)); /*0x6b95c9*/
      __3_YAXPAX_Z(v9); /*0x6b95cf*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v5) = v10; /*0x6b95de*/
    v11 = v28 < *(double *)&this->HashTable_field_0x20; /*0x6b95e4*/
    v12 = v28 == *(double *)&this->HashTable_field_0x20; /*0x6b95e4*/
    --this->HashTable_field_0x04; /*0x6b95e8*/
    if ( v11 || v12 ) /*0x6b95ed*/
    {
      v13 = this->HashTable_field_0x08; /*0x6b95f6*/
      if ( v13 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6b9608*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6b960e*/
        v15 = *(int **)this->__pad_0; /*0x6b9611*/
        v29 = *(int **)this->__pad_0; /*0x6b9616*/
        this->HashTable_field_0x08 = v13 >> 1; /*0x6b961d*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6b9627*/
        v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6b9633*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6b9638*/
        *(_DWORD *)this->__pad_0 = v16; /*0x6b963f*/
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
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x6b966c*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x6b9671*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x6b9677*/
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
    if ( *(_DWORD *)&v30[20] ) /*0x6b96a4*/
      (***(void (__thiscall ****)(_DWORD, int))&v30[20])(*(_DWORD *)&v30[20], 1); /*0x6b96ae*/
  }
LABEL_23:
  DeleteAndZero((ObjectClass *)v30); /*0x6b96b5*/
  if ( this->HashTable_field_0x08 ) /*0x6b96be*/
  {
    do /*0x6b96fe*/
    {
      v24 = *(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v3); /*0x6b96c6*/
      while ( v24 ) /*0x6b96cb*/
      {
        v25 = v24; /*0x6b96cd*/
        v24 = (ObjectClass *)v24[4].customSound_controller[2]; /*0x6b96cf*/
        DeleteAndZero(v25); /*0x6b96db*/
        __3_YAXPAX_Z(v25); /*0x6b96e1*/
      }
      ++v3; /*0x6b96f0*/
      *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v3 - 4) = 0; /*0x6b96f1*/
    }
    while ( v3 < this->HashTable_field_0x08 ); /*0x6b96fe*/
  }
  v26 = this->HashTable_field_0x08; /*0x6b9702*/
  HashTable_field_0x30 = this->HashTable_field_0x30; /*0x6b9705*/
  this->HashTable_field_0x04 = 0; /*0x6b970a*/
  if ( v26 > HashTable_field_0x30 ) /*0x6b970d*/
  {
    do /*0x6b9725*/
    {
      if ( LOBYTE(this->HashTable_field_0x14) ) /*0x6b970f*/
        break; /*0x6b9714*/
      HashTable::RebuildEx(this); /*0x6b9718*/
    }
    while ( this->HashTable_field_0x08 > (unsigned int)this->HashTable_field_0x30 ); /*0x6b9725*/
  }
  __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x6b972b*/
}



// ==== 0x006B9740  ChatEvent::ProcessStrings  this=HashTable  sig=csp ====
char __thiscall ChatEvent::ProcessStrings(int this, char *a2, int a3, int a4, int a5)
{
  int v6; // eax
  const void *v7; // ecx
  _DWORD *v8; // ebx
  const void *v9; // edx
  const void *v10; // eax
  const void *v11; // eax
  const void *v12; // ecx
  unsigned int v13; // eax
  const void *v14; // ecx
  const void *v15; // edx
  unsigned __int8 *v16; // esi
  const void **v17; // edi
  int v18; // eax
  unsigned __int8 *v19; // esi
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int *v23; // esi
  int *v24; // edi
  const void *v25; // edx
  const void *v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  int v34; // eax
  String *v35; // ebx
  int v36; // esi
  const void *v37; // esi
  int v38; // eax
  const void *v39; // edx
  unsigned int v40; // eax
  int v41; // esi
  int v42; // edi
  _DWORD *v43; // edi
  int v44; // ebx
  double v45; // st7
  bool v46; // c0
  bool v47; // c3
  int v48; // esi
  String *v49; // eax
  String *v50; // esi
  String **v51; // edx
  String *v52; // eax
  int v53; // esi
  int v54; // eax
  double v55; // st7
  int *v56; // ebx
  int v57; // edi
  void *v58; // edi
  unsigned int v59; // edx
  int *v60; // edi
  int v61; // ebx
  int v62; // esi
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  const void *v67[214]; // [esp+10h] [ebp-65Ch] BYREF
  _DWORD v68[193]; // [esp+368h] [ebp-304h] BYREF

  v67[3] = *(const void **)a3; /*0x6b975c*/
  v67[4] = *(const void **)(a3 + 4); /*0x6b976a*/
  v67[5] = *(const void **)(a3 + 8); /*0x6b9775*/
  LOWORD(v67[6]) = *(_WORD *)(a3 + 12); /*0x6b9782*/
  qmemcpy(&v67[10], (const void *)(a3 + 14), 0x28u); /*0x6b978c*/
  v6 = __2_YAPAXI_Z(4 * (1 << SBYTE2(v67[13])) + 40); /*0x6b979c*/
  v7 = v67[10]; /*0x6b97a1*/
  v8 = (_DWORD *)v6; /*0x6b97a5*/
  v9 = v67[11]; /*0x6b97ab*/
  *(const void **)(v6 + 8) = v67[12]; /*0x6b97af*/
  v10 = v67[14]; /*0x6b97b2*/
  *v8 = v7; /*0x6b97b6*/
  LOWORD(v7) = v67[13]; /*0x6b97b8*/
  v8[4] = v10; /*0x6b97bd*/
  v11 = v67[17]; /*0x6b97c0*/
  *((_WORD *)v8 + 6) = (_WORD)v7; /*0x6b97c4*/
  v12 = v67[15]; /*0x6b97c8*/
  v8[7] = v11; /*0x6b97cc*/
  v13 = (unsigned int)v67[18]; /*0x6b97cf*/
  v8[1] = v9; /*0x6b97d3*/
  LOWORD(v9) = HIWORD(v67[13]); /*0x6b97d6*/
  v8[5] = v12; /*0x6b97db*/
  v14 = v67[19]; /*0x6b97de*/
  v8[8] = v13; /*0x6b97e6*/
  *((_WORD *)v8 + 7) = (_WORD)v9; /*0x6b97e9*/
  v15 = v67[16]; /*0x6b97ed*/
  v13 *= 4; /*0x6b97f1*/
  v8[9] = v14; /*0x6b97f4*/
  v8[6] = v15; /*0x6b97f9*/
  qmemcpy(v8 + 10, (const void *)(a3 + 54), v13); /*0x6b9807*/
  v67[2] = (const void *)256; /*0x6b980b*/
  v16 = (unsigned __int8 *)(v8 + 10); /*0x6b981c*/
  v17 = &v67[21]; /*0x6b9821*/
  v67[0] = (const void *)(v13 + a3 + 54); /*0x6b9825*/
  do /*0x6b9881*/
  {
    v18 = *v16; /*0x6b9831*/
    v19 = v16 + 1; /*0x6b9833*/
    v20 = *v19; /*0x6b983e*/
    v16 = v19 + 3; /*0x6b9841*/
    v17 = (const void **)((char *)v17 + 2); /*0x6b9844*/
    v21 = v20 >> g_BitMask_Blue << g_BitMask_Green; /*0x6b9857*/
    LOWORD(v18) = v21 | (v18 >> g_BitMask_Red << g_BitShift_Blue); /*0x6b985f*/
    LOWORD(v21) = (unsigned __int8)(*(v16 - 2) >> g_BitShift_Green_0); /*0x6b986c*/
    *((_WORD *)v17 - 1) = (v21 << g_BitShift_Red) | v18; /*0x6b9874*/
    --v67[2]; /*0x6b987d*/
  }
  while ( v67[2] ); /*0x6b9881*/
  v67[2] = (const void *)__2_YAPAXI_Z((char *)*(const void **)((char *)&v67[3] + 2) - (char *)*(const void **)((char *)&v67[5] + 2)); /*0x6b9899*/
  qmemcpy( /*0x6b98a6*/
    (void *)v67[2],
    v67[0],
    (char *)*(const void **)((char *)&v67[3] + 2) - (char *)*(const void **)((char *)&v67[5] + 2));
  v22 = __2_YAPAXI_Z(0x20u); /*0x6b98af*/
  v23 = (int *)v22; /*0x6b98b4*/
  v24 = 0; /*0x6b98b6*/
  if ( v22 ) /*0x6b98bd*/
  {
    v25 = v67[12]; /*0x6b98bf*/
    v26 = v67[11]; /*0x6b98c3*/
    *(const void **)(v22 + 8) = v67[12]; /*0x6b98c7*/
    *(_DWORD *)(v22 + 4) = v26; /*0x6b98d4*/
    *(_DWORD *)(v22 + 12) = 0; /*0x6b98df*/
    *(_DWORD *)v22 = &XSurface_Vtable; /*0x6b98e2*/
    *(_DWORD *)(v22 + 16) = a5; /*0x6b98e8*/
    Buffer::Init((Buffer *)(v22 + 20), 0, a5 * (_DWORD)v26 * (_DWORD)v25); /*0x6b98eb*/
    v24 = v23; /*0x6b98f0*/
    *v23 = (int)&BSurface_Vtable; /*0x6b98f2*/
    v67[8] = v23; /*0x6b98f8*/
  }
  else
  {
    v67[8] = 0; /*0x6b98fe*/
  }
  v67[9] = (const void *)(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*v24 + 92))(v24, 0, 0); /*0x6b990f*/
  v27 = (*(int (__thiscall **)(int *))(*v24 + 116))(v24) / 2; /*0x6b992c*/
  v28 = (int)v67[11] - ((int)v67[11] & 3) + 4; /*0x6b992e*/
  v67[3] = (const void *)v27; /*0x6b9931*/
  if ( (int)v67[12] > 0 ) /*0x6b9937*/
  {
    v67[0] = 0; /*0x6b993f*/
    v29 = -v28; /*0x6b9947*/
    v67[20] = (const void *)-v28; /*0x6b994a*/
    v30 = v28 * ((int)v67[12] - 1); /*0x6b994e*/
    v67[7] = v67[12]; /*0x6b9955*/
    do /*0x6b99cf*/
    {
      v31 = 0; /*0x6b9959*/
      if ( (int)v67[11] > 0 ) /*0x6b995f*/
      {
        do /*0x6b99ac*/
        {
          v32 = v30 + v31; /*0x6b9968*/
          if ( a5 == 2 ) /*0x6b996e*/
            *((_WORD *)v67[9] + (int)v67[0] + v31) = *((_WORD *)&v67[21] + *((unsigned __int8 *)v67[2] + v32)); /*0x6b9988*/
          else
            *((_WORD *)v67[9] + (int)v67[0] + v31) = *((unsigned __int8 *)v67[2] + v32); /*0x6b99a1*/
          ++v31; /*0x6b99a9*/
        }
        while ( v31 < (int)v67[11] ); /*0x6b99ac*/
        v29 = (int)v67[20]; /*0x6b99ae*/
        v24 = (int *)v67[8]; /*0x6b99b2*/
        v27 = (int)v67[3]; /*0x6b99b6*/
      }
      v30 += v29; /*0x6b99be*/
      v67[0] = (char *)v67[0] + v27; /*0x6b99c2*/
      --v67[7]; /*0x6b99cb*/
    }
    while ( v67[7] ); /*0x6b99cf*/
  }
  if ( a5 == 1 ) /*0x6b99d9*/
  {
    qmemcpy(&v68[1], v8 + 10, 0x300u); /*0x6b99ea*/
    v24 = (int *)v67[8]; /*0x6b99ec*/
  }
  v33 = *v24; /*0x6b99f0*/
  v68[0] = v24; /*0x6b99f4*/
  (*(void (__thiscall **)(int *))(v33 + 96))(v24); /*0x6b99fb*/
  __3_YAXPAX_Z(v8); /*0x6b99ff*/
  __3_YAXPAX_Z((void *)v67[2]); /*0x6b9a09*/
  String::Assign((String *)&v67[1], a2); /*0x6b9a1d*/
  String::ToLower((String *)&v67[1]); /*0x6b9a26*/
  v34 = *(_DWORD *)(this + 4); /*0x6b9a2b*/
  v35 = 0; /*0x6b9a2e*/
  v67[21] = 0; /*0x6b9a32*/
  if ( v34 ) /*0x6b9a36*/
  {
    v36 = *(_DWORD *)(*(_DWORD *)this /*0x6b9a53*/
                    + 4
                    * ((*(int (__thiscall **)(const void **))(this + 24))(&v67[1]) & ((1 << *(_DWORD *)(this + 12)) - 1)));
    if ( v36 ) /*0x6b9a58*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v36, (const char **)&v67[1]) ) /*0x6b9a6c*/
      {
        v36 = *(_DWORD *)(v36 + 776); /*0x6b9a6e*/
        if ( !v36 ) /*0x6b9a76*/
          goto LABEL_40; /*0x6b9a76*/
      }
      v37 = (const void *)(v36 + 4); /*0x6b9a85*/
      if ( v37 ) /*0x6b9a8a*/
        qmemcpy(&v67[21], v37, 0x304u); /*0x6b9a95*/
      v38 = *(_DWORD *)(this + 4); /*0x6b9a97*/
      if ( !v38 ) /*0x6b9a9e*/
        goto LABEL_38; /*0x6b9a9e*/
      v39 = *(const void **)(this + 8); /*0x6b9aa4*/
      v40 = v38 - 1; /*0x6b9aa7*/
      *(_QWORD *)&v67[3] = v40; /*0x6b9aa8*/
      v67[3] = v39; /*0x6b9ab4*/
      *(float *)&v67[7] = (double)v40 / (double)(int)v39; /*0x6b9ac4*/
      v41 = (*(int (__thiscall **)(const void **))(this + 24))(&v67[1]) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6b9ad6*/
      v42 = *(_DWORD *)(*(_DWORD *)this + 4 * v41); /*0x6b9adb*/
      if ( !v42 ) /*0x6b9ae0*/
        goto LABEL_38; /*0x6b9ae0*/
      if ( (unsigned __int8)String::Compare((String *)v42, (const char **)&v67[1]) ) /*0x6b9aed*/
      {
        v43 = *(_DWORD **)(*(_DWORD *)this + 4 * v41); /*0x6b9af9*/
        v44 = v43[194]; /*0x6b9afe*/
        if ( v43 ) /*0x6b9b04*/
        {
          DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this + 4 * v41)); /*0x6b9b08*/
          __3_YAXPAX_Z(v43); /*0x6b9b0e*/
        }
        v45 = *(float *)&v67[7]; /*0x6b9b19*/
        *(_DWORD *)(*(_DWORD *)this + 4 * v41) = v44; /*0x6b9b1d*/
        v46 = v45 < *(double *)(this + 32); /*0x6b9b23*/
        v47 = v45 == *(double *)(this + 32); /*0x6b9b23*/
        --*(_DWORD *)(this + 4); /*0x6b9b27*/
        if ( !v46 && !v47 ) /*0x6b9b2c*/
          goto LABEL_38; /*0x6b9b2f*/
      }
      else
      {
        v48 = *(_DWORD *)(v42 + 776); /*0x6b9b33*/
        if ( v48 ) /*0x6b9b3b*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v48, (const char **)&v67[1]) ) /*0x6b9b4b*/
          {
            v42 = v48; /*0x6b9b4d*/
            v48 = *(_DWORD *)(v48 + 776); /*0x6b9b4f*/
            if ( !v48 ) /*0x6b9b57*/
              goto LABEL_36; /*0x6b9b57*/
          }
          *(_DWORD *)(v42 + 776) = *(_DWORD *)(v48 + 776); /*0x6b9b61*/
          --*(_DWORD *)(this + 4); /*0x6b9b6d*/
          DeleteAndZero((ObjectClass *)v48); /*0x6b9b74*/
          __3_YAXPAX_Z((void *)v48); /*0x6b9b7a*/
        }
LABEL_36:
        if ( *(float *)&v67[7] > *(double *)(this + 32) ) /*0x6b9b8e*/
          goto LABEL_38; /*0x6b9b8e*/
      }
      HashTable::RebuildEx((HashTable *)this); /*0x6b9b92*/
LABEL_38:
      v35 = 0; /*0x6b9b97*/
      if ( v67[21] ) /*0x6b9b9f*/
        (**(void (__thiscall ***)(const void *, int))v67[21])(v67[21], 1); /*0x6b9ba5*/
    }
  }
LABEL_40:
  v49 = (String *)__2_YAPAXI_Z(0x30Cu); /*0x6b9ba7*/
  v50 = v49; /*0x6b9bb1*/
  if ( v49 ) /*0x6b9bb8*/
  {
    unknown_libname_73(v49); /*0x6b9bbc*/
    *(_DWORD *)&v50->m_3[1] = 0; /*0x6b9bc1*/
    v35 = v50; /*0x6b9bc4*/
  }
  String::Reassign(v35, (const char **)&v67[1]); /*0x6b9bcd*/
  qmemcpy(&v35->m_3[1], v68, 0x304u); /*0x6b9be1*/
  *(_DWORD *)v35[97].__pad_0 = 0; /*0x6b9be9*/
  v51 = (String **)(*(_DWORD *)this /*0x6b9c02*/
                  + 4
                  * ((*(int (__thiscall **)(const void **))(this + 24))(&v67[1]) & ((1 << *(_DWORD *)(this + 12)) - 1)));
  v52 = *v51; /*0x6b9c05*/
  *v51 = v35; /*0x6b9c07*/
  if ( v52 ) /*0x6b9c0b*/
    *(_DWORD *)v35[97].__pad_0 = v52; /*0x6b9c0d*/
  v53 = *(_DWORD *)(this + 8); /*0x6b9c16*/
  v54 = *(_DWORD *)(this + 4) + 1; /*0x6b9c19*/
  *(_QWORD *)&v67[3] = (unsigned int)v54; /*0x6b9c1e*/
  *(_DWORD *)(this + 4) = v54; /*0x6b9c22*/
  v55 = (double)*(__int64 *)&v67[3]; /*0x6b9c25*/
  v67[3] = (const void *)v53; /*0x6b9c29*/
  v67[4] = 0; /*0x6b9c2d*/
  if ( v55 / (double)v53 >= *(double *)(this + 40) && *(_BYTE *)(this + 20) != 1 ) /*0x6b9c47*/
  {
    v56 = *(int **)this; /*0x6b9c50*/
    v57 = *(_DWORD *)(this + 12) + 1; /*0x6b9c56*/
    v67[3] = *(const void **)this; /*0x6b9c57*/
    *(_DWORD *)(this + 8) = 2 * v53; /*0x6b9c5b*/
    *(_DWORD *)(this + 12) = v57; /*0x6b9c65*/
    v58 = (void *)__2_YAPAXI_Z(8 * v53); /*0x6b9c71*/
    v59 = 4 * *(_DWORD *)(this + 8); /*0x6b9c76*/
    *(_DWORD *)this = v58; /*0x6b9c7d*/
    memset(v58, 0, v59); /*0x6b9c83*/
    if ( v53 > 0 ) /*0x6b9c8e*/
    {
      v60 = v56; /*0x6b9c90*/
      v61 = v53; /*0x6b9c92*/
      do /*0x6b9ccd*/
      {
        v62 = *v60; /*0x6b9c94*/
        if ( *v60 ) /*0x6b9c94*/
        {
          do /*0x6b9cc7*/
          {
            v63 = (*(int (__thiscall **)(int))(this + 24))(v62) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6b9caa*/
            v64 = *(_DWORD *)(*(_DWORD *)this + 4 * v63); /*0x6b9caf*/
            *(_DWORD *)(*(_DWORD *)this + 4 * v63) = v62; /*0x6b9cb5*/
            v65 = *(_DWORD *)(v62 + 776); /*0x6b9cb7*/
            *(_DWORD *)(v62 + 776) = v64; /*0x6b9cbd*/
            v62 = v65; /*0x6b9cc3*/
          }
          while ( v65 ); /*0x6b9cc7*/
        }
        ++v60; /*0x6b9cc9*/
        --v61; /*0x6b9ccc*/
      }
      while ( v61 ); /*0x6b9ccd*/
      v56 = (int *)v67[3]; /*0x6b9ccf*/
    }
    __3_YAXPAX_Z(v56); /*0x6b9cd4*/
  }
  DeleteAndZero((ObjectClass *)&v67[1]); /*0x6b9ce0*/
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
        LOBYTE(v8) = v14[1] >> g_BitMask_Red; /*0x6b9dc8*/
        LOBYTE(v5) = *(v14 - 1); /*0x6b9dd0*/
        v14 += 3; /*0x6b9dd3*/
        v13 = (_DWORD *)((char *)v13 + 2); /*0x6b9dd6*/
        LOWORD(v8) = (unsigned __int8)v8; /*0x6b9dd9*/
        LOWORD(v5) = (unsigned __int8)((unsigned __int8)v5 >> g_BitShift_Green_0); /*0x6b9ded*/
        v16 = v5 << g_BitShift_Red; /*0x6b9df1*/
        v17 = v16 | (v8 << g_BitShift_Blue); /*0x6b9df9*/
        LOWORD(v16) = (unsigned __int8)(*(v14 - 3) >> g_BitMask_Blue); /*0x6b9e06*/
        v5 = v16 << g_BitMask_Green; /*0x6b9e0a*/
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
    v55[0] = &CCFileClass::`vftable'; /*0x6ba0e2*/
    v57 = 0; /*0x6ba0ea*/
    Vector::Clear((int)v56); /*0x6ba0f1*/
    v55[0] = &off_7E1668; /*0x6ba0fa*/
    BufferIOFileClass::Dtor(v55); /*0x6ba102*/
    return 1; /*0x6ba10a*/
  }
  else
  {
    v55[0] = &CCFileClass::`vftable'; /*0x6b9d68*/
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
int __thiscall HashTable::Find(HashTable *this, const char *a2, void *a3)
{
  int v4; // esi
  const void *v6; // esi
  int v7; // esi

  String::Assign((String *)&a2, a2); /*0x6ba14c*/
  if ( (byte_B0B930 & 1) == 0 ) /*0x6ba158*/
  {
    dword_B0B948 = 0; /*0x6ba164*/
    byte_B0B930 |= 1u; /*0x6ba16e*/
    atexit(nullsub_39); /*0x6ba174*/
  }
  dword_B0B948 = 0; /*0x6ba17c*/
  if ( this->HashTable_field_0x04 /*0x6ba1a8*/
    && (v4 = *(_DWORD *)(*(_DWORD *)this->__pad_0
                       + 4
                       * (((int (__thiscall *)(const char **))this->HashTable_field_0x18)(&a2)
                        & ((1 << this->HashTable_field_0x0C) - 1)))) != 0 )
  {
    while ( !(unsigned __int8)String::Compare((String *)v4, &a2) ) /*0x6ba1b8*/
    {
      v4 = *(_DWORD *)(v4 + 776); /*0x6ba1ba*/
      if ( !v4 ) /*0x6ba1c2*/
        goto LABEL_7; /*0x6ba1c2*/
    }
    v6 = (const void *)(v4 + 4); /*0x6ba1d7*/
    if ( v6 ) /*0x6ba1dd*/
      qmemcpy(&dword_B0B948, v6, 0x304u); /*0x6ba1e9*/
    if ( a3 ) /*0x6ba1f1*/
      qmemcpy(a3, &unk_B0B94C, 0x300u); /*0x6ba1fd*/
    v7 = dword_B0B948; /*0x6ba1ff*/
    DeleteAndZero((ObjectClass *)&a2); /*0x6ba209*/
    return v7; /*0x6ba20e*/
  }
  else
  {
LABEL_7:
    DeleteAndZero((ObjectClass *)&a2); /*0x6ba1c4*/
    return 0; /*0x6ba1cd*/
  }
}



// ==== 0x006BA220  nullsub_39  this=-  sig=ida-proto ====
void __cdecl nullsub_39()
{
  ; /*0x6ba220*/
}



// ==== 0x006BA230  HashTable::RemoveEntry  this=HashTable  sig=csp ====
void __thiscall HashTable::RemoveEntry(HashTable *this, const char *a2)
{
  int HashTable_field_0x04; // eax
  int v4; // esi
  const void *v5; // esi
  int v6; // eax
  int HashTable_field_0x08; // edx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // ebp
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  int v15; // esi
  _BYTE v16[784]; // [esp+Ch] [ebp-310h] BYREF

  String::Assign((String *)v16, a2); /*0x6ba247*/
  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6ba24c*/
  *(_DWORD *)&v16[12] = 0; /*0x6ba253*/
  if ( !HashTable_field_0x04 ) /*0x6ba257*/
    goto LABEL_24; /*0x6ba257*/
  v4 = *(_DWORD *)(*(_DWORD *)this->__pad_0 /*0x6ba273*/
                 + 4
                 * (((int (__thiscall *)(_BYTE *))this->HashTable_field_0x18)(v16)
                  & ((1 << this->HashTable_field_0x0C) - 1)));
  if ( !v4 ) /*0x6ba278*/
    goto LABEL_24; /*0x6ba278*/
  while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)v16) ) /*0x6ba28c*/
  {
    v4 = *(_DWORD *)(v4 + 776); /*0x6ba28e*/
    if ( !v4 ) /*0x6ba296*/
      goto LABEL_24; /*0x6ba296*/
  }
  v5 = (const void *)(v4 + 4); /*0x6ba2a5*/
  if ( v5 ) /*0x6ba2ab*/
    qmemcpy(&v16[12], v5, 0x304u); /*0x6ba2b6*/
  v6 = this->HashTable_field_0x04; /*0x6ba2b8*/
  if ( v6 ) /*0x6ba2bd*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6ba2c3*/
    *(_QWORD *)&v16[4] = (unsigned int)(v6 - 1); /*0x6ba2c7*/
    *(float *)&v16[4] = (double)*(__int64 *)&v16[4] / (double)HashTable_field_0x08; /*0x6ba2e3*/
    v8 = ((int (__thiscall *)(_BYTE *))this->HashTable_field_0x18)(v16) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6ba2f5*/
    v9 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v8); /*0x6ba2f9*/
    if ( v9 ) /*0x6ba2fe*/
    {
      if ( (unsigned __int8)String::Compare((String *)v9, (const char **)v16) ) /*0x6ba30b*/
      {
        v10 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v8); /*0x6ba316*/
        v11 = v10[194]; /*0x6ba31b*/
        if ( v10 ) /*0x6ba321*/
        {
          DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v8)); /*0x6ba325*/
          __3_YAXPAX_Z(v10); /*0x6ba32b*/
        }
        v12 = *(float *)&v16[4]; /*0x6ba335*/
        *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v8) = v11; /*0x6ba339*/
        v13 = v12 < *(double *)&this->HashTable_field_0x20; /*0x6ba33f*/
        v14 = v12 == *(double *)&this->HashTable_field_0x20; /*0x6ba33f*/
        --this->HashTable_field_0x04; /*0x6ba343*/
        if ( !v13 && !v14 ) /*0x6ba348*/
          goto LABEL_22; /*0x6ba34b*/
      }
      else
      {
        v15 = *(_DWORD *)(v9 + 776); /*0x6ba34f*/
        if ( v15 ) /*0x6ba357*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v15, (const char **)v16) ) /*0x6ba367*/
          {
            v9 = v15; /*0x6ba369*/
            v15 = *(_DWORD *)(v15 + 776); /*0x6ba36b*/
            if ( !v15 ) /*0x6ba373*/
              goto LABEL_20; /*0x6ba373*/
          }
          *(_DWORD *)(v9 + 776) = *(_DWORD *)(v15 + 776); /*0x6ba37d*/
          --this->HashTable_field_0x04; /*0x6ba389*/
          DeleteAndZero((ObjectClass *)v15); /*0x6ba390*/
          __3_YAXPAX_Z((void *)v15); /*0x6ba396*/
        }
LABEL_20:
        if ( *(float *)&v16[4] > *(double *)&this->HashTable_field_0x20 ) /*0x6ba3aa*/
          goto LABEL_22; /*0x6ba3aa*/
      }
      HashTable::RebuildEx(this); /*0x6ba3ae*/
    }
  }
LABEL_22:
  if ( *(_DWORD *)&v16[12] ) /*0x6ba3ba*/
    (***(void (__thiscall ****)(_DWORD, int))&v16[12])(*(_DWORD *)&v16[12], 1); /*0x6ba3c0*/
LABEL_24:
  DeleteAndZero((ObjectClass *)v16); /*0x6ba3c2*/
}



// ==== 0x006BA3E0  Surface::TileBlit  this=Surface  sig=csp ====
int __stdcall Surface::TileBlit(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edi
  int v8; // eax
  int v10; // esi
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
  _DWORD *v26; // [esp+64h] [ebp+4h]
  int v27; // [esp+74h] [ebp+14h]

  v5 = a2; /*0x6ba3e4*/
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba3f3*/
  v20 = result; /*0x6ba3f8*/
  if ( result )
  {
    v7 = a3; /*0x6ba408*/
    v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba41b*/
    if ( v21 )
    {
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2) / 2; /*0x6ba442*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3) / 2; /*0x6ba452*/
      v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 120))(a3, v24); /*0x6ba45d*/
      v22 = *(_DWORD *)(v8 + 8); /*0x6ba470*/
      v23 = *(_DWORD *)(v8 + 12); /*0x6ba480*/
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 120))(a2, v25); /*0x6ba484*/
      v10 = a1[2]; /*0x6ba48f*/
      v11 = a1[3]; /*0x6ba492*/
      v19 = (v22 - v10) / 2 <= 0 ? 0 : (v22 - v10) / 2;
      v12 = 0; /*0x6ba4bf*/
      v16 = 0; /*0x6ba4c3*/
      if ( v11 > 0 )
      {
        v13 = a5 + ((v23 - v11) / 2 <= 0 ? 0 : (v23 - v11) / 2);
        v27 = v13; /*0x6ba4d3*/
        do /*0x6ba558*/
        {
          v26 = 0; /*0x6ba4d9*/
          if ( v10 > 0 ) /*0x6ba4ee*/
          {
            v14 = v19 + a4; /*0x6ba506*/
            v15 = v20 + 2 * (*a1 + v17 * (a1[1] + v12)); /*0x6ba50d*/
            do /*0x6ba537*/
            {
              v15 += 2; /*0x6ba512*/
              *(_WORD *)(v15 - 2) = *(_WORD *)(v21 + 2 * (v18 * (v13 % v23) + v14 % v22)); /*0x6ba528*/
              v10 = a1[2]; /*0x6ba52c*/
              ++v14; /*0x6ba530*/
              v26 = (_DWORD *)((char *)v26 + 1); /*0x6ba533*/
            }
            while ( (int)v26 < v10 ); /*0x6ba537*/
            v7 = a3; /*0x6ba539*/
            v12 = v16; /*0x6ba53d*/
            v5 = a2; /*0x6ba541*/
          }
          ++v12; /*0x6ba54c*/
          v13 = v27 + 1; /*0x6ba54d*/
          v16 = v12; /*0x6ba550*/
          ++v27; /*0x6ba554*/
        }
        while ( v12 < a1[3] ); /*0x6ba558*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7); /*0x6ba562*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x6ba569*/
      LOBYTE(result) = 1; /*0x6ba56f*/
    }
    else
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba425*/
      LOBYTE(result) = 0; /*0x6ba429*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x6ba3ff*/
  }
  return result; /*0x6ba3fe*/
}



// ==== 0x006BA580  Surface::BlitTransparent  this=Surface  sig=csp ====
int __stdcall Surface::BlitTransparent(int *a1, int a2, int a3, __int16 a4)
{
  int result; // eax
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
  int *v17; // [esp+28h] [ebp+4h]

  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba594*/
  v15 = result; /*0x6ba599*/
  if ( result ) /*0x6ba59d*/
  {
    v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba5bb*/
    if ( v5 ) /*0x6ba5bf*/
    {
      v6 = *a1; /*0x6ba5d8*/
      v7 = a1[1]; /*0x6ba5da*/
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 124))(a3); /*0x6ba5f2*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 128))(a3); /*0x6ba604*/
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2) / 2; /*0x6ba60e*/
      if ( v8 > 0 ) /*0x6ba612*/
      {
        v10 = v16; /*0x6ba617*/
        v17 = (int *)(2 * v9); /*0x6ba624*/
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
              if ( *v13 != a4 ) /*0x6ba641*/
                *v14 = *v13; /*0x6ba643*/
              ++v13; /*0x6ba646*/
              ++v14; /*0x6ba649*/
              --v12; /*0x6ba64c*/
            }
            while ( v12 ); /*0x6ba64d*/
            v10 = v16; /*0x6ba64f*/
          }
          v11 = (_WORD *)((char *)v11 + (_DWORD)v17); /*0x6ba657*/
          --v8; /*0x6ba659*/
        }
        while ( v8 ); /*0x6ba65a*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba662*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 96))(a3); /*0x6ba66b*/
      LOBYTE(result) = 1; /*0x6ba671*/
    }
    else
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba5c5*/
      LOBYTE(result) = 0; /*0x6ba5ca*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x6ba5a1*/
  }
  return result; /*0x6ba59f*/
}



// ==== 0x006BA680  sub_6BA680  this=-  sig=csp ====
char __stdcall sub_6BA680(int a1, int a2, int a3)
{
  return 0; /*0x6ba682*/
}



// ==== 0x006BA690  Surface::AlphaBlend  this=Surface  sig=csp ====
int __stdcall Surface::AlphaBlend(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  int result; // eax
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
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba7c2*/
  v70 = result; /*0x6ba7c7*/
  if ( !result ) /*0x6ba7cd*/
  {
    LOBYTE(result) = 0; /*0x6ba7d2*/
    return result; /*0x6ba7db*/
  }
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
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba80f*/
      LOBYTE(result) = 0; /*0x6ba81e*/
      return result; /*0x6ba827*/
    }
  }
  v65 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, 0, 0); /*0x6ba87d*/
  if ( a5 ) /*0x6ba88a*/
  {
    v20 = g_BitShift_Green_0; /*0x6ba88c*/
    v21 = v77; /*0x6ba892*/
    v22 = a5 + 1; /*0x6ba899*/
    v23 = 256; /*0x6ba89a*/
    do /*0x6ba8ef*/
    {
      LOBYTE(v10) = *(_BYTE *)(v22 + 1) >> g_BitMask_Red; /*0x6ba8a8*/
      v22 += 3; /*0x6ba8b0*/
      ++v21; /*0x6ba8b3*/
      LOWORD(v12) = (unsigned __int8)v10; /*0x6ba8b6*/
      LOWORD(v10) = (unsigned __int8)(*(_BYTE *)(v22 - 4) >> v20); /*0x6ba8c9*/
      v24 = v10 << g_BitShift_Red; /*0x6ba8cd*/
      v25 = v24 | (v12 << g_BitShift_Blue); /*0x6ba8d5*/
      LOWORD(v24) = (unsigned __int8)(*(_BYTE *)(v22 - 3) >> g_BitMask_Blue); /*0x6ba8e2*/
      v10 = v24 << g_BitMask_Green; /*0x6ba8e6*/
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
              v45 = g_ScreenSaverState /*0x6bab5d*/
                  & ((v44 * (unsigned __int16)(g_ScreenSaverState & v42)
                    + (unsigned __int8)*v39 * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v43)) >> 8);
              g_GameScreenFlags = (unsigned __int8)*v39; /*0x6bab64*/
              g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6bab6e*/
              v46 = v44 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v42) /*0x6bab79*/
                  + g_GameScreenFlags * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v43);
              v47 = v44 * (unsigned __int16)(g_CreditsScreenState & v42); /*0x6bab8a*/
              v39 = v63; /*0x6bab97*/
              v40 = v64 - v65; /*0x6bab9b*/
              v48 = v47 + g_GameScreenFlags * (unsigned __int16)(g_CreditsScreenState & v43); /*0x6bab9f*/
              v41 = v61; /*0x6baba1*/
              v49 = HIWORD(g_ScreenSaverState) & (v46 >> 8) | v45; /*0x6baba5*/
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
            v35 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_ScreenSaverState) /*0x6baa4b*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(v34 & g_ScreenSaverState)) >> 8;
            v36 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & HIWORD(g_ScreenSaverState)) /*0x6baa57*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v34)) >> 8;
            v10 = v56; /*0x6baa6e*/
            v37 = (255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_CreditsScreenState) /*0x6baa75*/
                + g_GameScreenFlags * (unsigned __int16)(v34 & g_CreditsScreenState);
            v32 = v58; /*0x6baa77*/
            *v58 = (v37 >> 8) | HIWORD(g_ScreenSaverState) & v36 | g_ScreenSaverState & v35; /*0x6baa80*/
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
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 96))(a4); /*0x6bac1f*/
  LOBYTE(result) = 1; /*0x6bac25*/
  return result; /*0x6ba7cf*/
}



// ==== 0x006BAC40  HashTable::RemoveHashTableEntry  this=HashTable  sig=csp ====
char __thiscall HashTable::RemoveHashTableEntry(HashTable *this, const char **a2, void *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
  int *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // esi
  int HashTable_field_0x0C; // edi
  int *v27; // ebx
  void *v28; // edi
  unsigned int v29; // edx
  int *v30; // edi
  unsigned int v31; // ebx
  int v32; // esi
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char v38; // [esp+20h] [ebp+4h]
  int *v39; // [esp+24h] [ebp+8h]
  int *v40; // [esp+24h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6bac4b*/
  if ( !HashTable_field_0x04 ) /*0x6bac50*/
    return 0; /*0x6bac55*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x6bac80*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6bac95*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x6bac97*/
  v36 = v8; /*0x6bac9c*/
  if ( !v8 ) /*0x6baca0*/
    return 0; /*0x6baca5*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x6bacb1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x304u); /*0x6bacca*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x6baccf*/
    v10 = v9[194]; /*0x6bacd4*/
    if ( v9 ) /*0x6bacda*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x6bacde*/
      __3_YAXPAX_Z(v9); /*0x6bace4*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x6bacf3*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x6bacf9*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x6bacf9*/
    --this->HashTable_field_0x04; /*0x6bacfd*/
    if ( v11 || v12 ) /*0x6bad02*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6bad0b*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6bad1d*/
      {
        v14 = *(int **)this->__pad_0; /*0x6bad26*/
        v39 = *(int **)this->__pad_0; /*0x6bad2b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x6bad31*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x6bad32*/
        this->HashTable_field_0x0C = v15; /*0x6bad3c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6bad48*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6bad4d*/
        *(_DWORD *)this->__pad_0 = v16; /*0x6bad54*/
        memset(v16, 0, v17); /*0x6bad5a*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x6bad65*/
        {
          v18 = v14; /*0x6bad67*/
          v19 = HashTable_field_0x08; /*0x6bad69*/
          do /*0x6bada4*/
          {
            v20 = *v18; /*0x6bad6b*/
            if ( *v18 ) /*0x6bad6b*/
            {
              do /*0x6bad9e*/
              {
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x6bad81*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x6bad86*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x6bad8c*/
                v23 = *(_DWORD *)(v20 + 776); /*0x6bad8e*/
                *(_DWORD *)(v20 + 776) = v22; /*0x6bad94*/
                v20 = v23; /*0x6bad9a*/
              }
              while ( v23 ); /*0x6bad9e*/
            }
            ++v18; /*0x6bada0*/
            --v19; /*0x6bada3*/
          }
          while ( v19 ); /*0x6bada4*/
          v14 = v39; /*0x6bada6*/
        }
        __3_YAXPAX_Z(v14); /*0x6badab*/
      }
    }
    return 1; /*0x6badb6*/
  }
  else
  {
    v24 = *(_DWORD *)(v8 + 776); /*0x6badbf*/
    v38 = 0; /*0x6badc5*/
    if ( v24 ) /*0x6badcc*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v24, a2) ) /*0x6badd8*/
      {
        v36 = v24; /*0x6badda*/
        v24 = *(_DWORD *)(v24 + 776); /*0x6badde*/
        if ( !v24 ) /*0x6bade6*/
          goto LABEL_24; /*0x6bade6*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x304u); /*0x6badfa*/
      *(_DWORD *)(v36 + 776) = *(_DWORD *)(v24 + 776); /*0x6bae02*/
      --this->HashTable_field_0x04; /*0x6bae0e*/
      DeleteAndZero((ObjectClass *)v24); /*0x6bae15*/
      __3_YAXPAX_Z((void *)v24); /*0x6bae1b*/
      v38 = 1; /*0x6bae23*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x6bae34*/
    {
      v25 = this->HashTable_field_0x08; /*0x6bae3a*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6bae4c*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6bae52*/
        v27 = *(int **)this->__pad_0; /*0x6bae55*/
        v40 = *(int **)this->__pad_0; /*0x6bae5a*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x6bae60*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6bae68*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x6bae73*/
        v29 = 4 * this->HashTable_field_0x08; /*0x6bae78*/
        *(_DWORD *)this->__pad_0 = v28; /*0x6bae7f*/
        memset(v28, 0, v29); /*0x6bae85*/
        if ( (int)v25 > 0 ) /*0x6bae90*/
        {
          v30 = v27; /*0x6bae92*/
          v31 = v25; /*0x6bae94*/
          do /*0x6baecf*/
          {
            v32 = *v30; /*0x6bae96*/
            if ( *v30 ) /*0x6bae96*/
            {
              do /*0x6baec9*/
              {
                v33 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v32) /*0x6baeac*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33); /*0x6baeb1*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33) = v32; /*0x6baeb7*/
                v35 = *(_DWORD *)(v32 + 776); /*0x6baeb9*/
                *(_DWORD *)(v32 + 776) = v34; /*0x6baebf*/
                v32 = v35; /*0x6baec5*/
              }
              while ( v35 ); /*0x6baec9*/
            }
            ++v30; /*0x6baecb*/
            --v31; /*0x6baece*/
          }
          while ( v31 ); /*0x6baecf*/
          v27 = v40; /*0x6baed1*/
        }
        __3_YAXPAX_Z(v27); /*0x6baed6*/
      }
    }
    return v38; /*0x6baede*/
  }
}



// ==== 0x006BAEF0  HashTable::RebuildEx  this=HashTable  sig=csp ====
void __thiscall HashTable::RebuildEx(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6baef5*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6baf07*/
  {
    v3 = *(int **)this->__pad_0; /*0x6baf10*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6baf13*/
    v13 = *(int **)this->__pad_0; /*0x6baf16*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x6baf1c*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6baf24*/
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6baf2f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6baf34*/
    *(_DWORD *)this->__pad_0 = v5; /*0x6baf3b*/
    memset(v5, 0, v6); /*0x6baf40*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x6baf4b*/
    {
      v7 = v3; /*0x6baf4d*/
      v8 = HashTable_field_0x08; /*0x6baf4f*/
      do /*0x6baf89*/
      {
        v9 = *v7; /*0x6baf51*/
        if ( *v7 ) /*0x6baf51*/
        {
          do /*0x6baf83*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6baf67*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x6baf6b*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x6baf71*/
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
void __thiscall Render_Load_6BAFA0(ObjectClass *this)
{
  int vtable2; // esi
  _DWORD *vtable0; // ebp
  char *v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( LOBYTE(this->?) != 1 ) /*0x6bafa8*/
  {
    vtable2 = (int)this->?; /*0x6bafb0*/
    vtable0 = this->AbstractClass; /*0x6bafb3*/
    v4 = (char *)this->? + 1; /*0x6bafbc*/
    this->? = (void *)(2 * vtable2); /*0x6bafbd*/
    v13 = vtable0; /*0x6bafc0*/
    this->? = v4; /*0x6bafc8*/
    v5 = (void *)__2_YAPAXI_Z(8 * vtable2); /*0x6bafd3*/
    v6 = 4 * (int)this->?; /*0x6bafd8*/
    this->AbstractClass = v5; /*0x6bafdf*/
    memset(v5, 0, v6); /*0x6bafe4*/
    if ( vtable2 > 0 ) /*0x6bafef*/
    {
      v7 = vtable0; /*0x6baff1*/
      v8 = vtable2; /*0x6baff3*/
      do /*0x6bb02d*/
      {
        v9 = *v7; /*0x6baff5*/
        if ( *v7 ) /*0x6baff5*/
        {
          do /*0x6bb027*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x6bb00b*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x6bb00f*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x6bb015*/
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
      vtable0 = v13; /*0x6bb02f*/
    }
    __3_YAXPAX_Z(vtable0); /*0x6bb034*/
  }
}



// ==== 0x006BB050  sub_6BB050  this=-  sig=ida-proto ====
int sub_6BB050()
{
  dword_B0BC58 = 0; /*0x6bb052*/
  dword_B0BC5C = 0; /*0x6bb057*/
  dword_B0BC60 = 0; /*0x6bb05c*/
  dword_B0BC64 = 0; /*0x6bb061*/
  return 0; /*0x6bb066*/
}



// ==== 0x006BB070  sub_6BB070  this=-  sig=ida-proto ====
void sub_6BB070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6bb07c*/
  dbl_B0BC70 = Math::Sqrt(v0 + v0); /*0x6bb08e*/
}



// ==== 0x006BB0A0  sub_6BB0A0  this=-  sig=ida-proto ====
void sub_6BB0A0()
{
  dbl_B0BCD8 = dbl_B0BC70 / 60.0; /*0x6bb0ac*/
}



// ==== 0x006BB0C0  sub_6BB0C0  this=-  sig=ida-proto ====
void sub_6BB0C0()
{
  dbl_B0BCC0 = 1.0 / dbl_B0BCD8; /*0x6bb0cc*/
}



// ==== 0x006BB0E0  sub_6BB0E0  this=-  sig=ida-proto ====
void sub_6BB0E0()
{
  dbl_B0BCB8 = 0.0174532925199433 * 45.0; /*0x6bb0ec*/
}



// ==== 0x006BB100  sub_6BB100  this=-  sig=ida-proto ====
void sub_6BB100()
{
  dbl_B0BC78 = 0.0174532925199433 * 60.0; /*0x6bb10c*/
}



// ==== 0x006BB120  sub_6BB120  this=-  sig=ida-proto ====
void sub_6BB120()
{
  dbl_B0BC50 = 0.0174532925199433 * 90.0; /*0x6bb12c*/
}



// ==== 0x006BB140  sub_6BB140  this=-  sig=ida-proto ====
__int64 sub_6BB140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BC50 - dbl_B0BC78); /*0x6bb152*/
  result = Math::RoundToInt(v0 * dbl_B0BC70 * 0.5); /*0x6bb166*/
  dword_B0BCE0 = result; /*0x6bb16b*/
  return result; /*0x6bb170*/
}



// ==== 0x006BB180  sub_6BB180  this=-  sig=ida-proto ====
void sub_6BB180()
{
  dbl_B0BC80 = Math::ArcTan((double)dword_B0BCE0 * 0.00390625); /*0x6bb197*/
}



// ==== 0x006BB1B0  sub_6BB1B0  this=-  sig=ida-proto ====
void sub_6BB1B0()
{
  dbl_B0BCB0 = Math::ArcTan((double)(2 * dword_B0BCE0) / dbl_B0BC70); /*0x6bb1d2*/
}



// ==== 0x006BB1E0  sub_6BB1E0  this=-  sig=ida-proto ====
__int64 sub_6BB1E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BCE0) + 0.5); /*0x6bb1fb*/
  dword_B0BCD4 = result; /*0x6bb200*/
  return result; /*0x6bb206*/
}



// ==== 0x006BB210  sub_6BB210  this=-  sig=ida-proto ====
int sub_6BB210()
{
  word_B0BC68 = 0; /*0x6bb212*/
  word_B0BC6A = 0; /*0x6bb218*/
  return 0; /*0x6bb21e*/
}



// ==== 0x006BB220  sub_6BB220  this=-  sig=ida-proto ====
int sub_6BB220()
{
  dword_B0BCA0 = 0; /*0x6bb222*/
  dword_B0BCA4 = 0; /*0x6bb227*/
  dword_B0BCA8 = 0; /*0x6bb22c*/
  return 0; /*0x6bb231*/
}



// ==== 0x006BB240  sub_6BB240  this=-  sig=ida-proto ====
int sub_6BB240()
{
  dword_B0BCD0 = 0; /*0x6bb245*/
  dword_B0BCC8 = 128; /*0x6bb24f*/
  dword_B0BCCC = 128; /*0x6bb254*/
  return 128; /*0x6bb259*/
}



// ==== 0x006BB260  sub_6BB260  this=-  sig=ida-proto ====
int sub_6BB260()
{
  dword_B0BC8C = 0; /*0x6bb267*/
  dword_B0BC90 = 0; /*0x6bb26c*/
  byte_B0BC94 = 1; /*0x6bb271*/
  byte_B0BC95 = 0; /*0x6bb278*/
  g_AnimationManager = (int)&DynamicVectorClass<unsigned long>::`vftable'; /*0x6bb27d*/
  dword_B0BC9C = 10; /*0x6bb287*/
  dword_B0BC98 = 0; /*0x6bb291*/
  return atexit(sub_6BB2A0); /*0x6bb29c*/
}



// ==== 0x006BB2A0  sub_6BB2A0  this=-  sig=ida-proto ====
void __cdecl sub_6BB2A0()
{
  g_AnimationManager = (int)&VectorClass<unsigned long>::`vftable'; /*0x6bb2a8*/
  if ( dword_B0BC8C && byte_B0BC95 ) /*0x6bb2bc*/
  {
    __3_YAXPAX_Z(dword_B0BC8C); /*0x6bb2bf*/
    dword_B0BC8C = 0; /*0x6bb2c7*/
  }
  byte_B0BC95 = 0; /*0x6bb2cd*/
  dword_B0BC90 = 0; /*0x6bb2d3*/
}



// ==== 0x006BB2E0  WriteRegistryKeyCOM  this=-  sig=csp ====
int __fastcall WriteRegistryKeyCOM(LPCSTR lpString2, LPCSTR a2, LPCSTR lpString)
{
  char v4; // bl
  int result; // eax
  int v6; // eax
  HKEY phkResult; // [esp+8h] [ebp-108h] BYREF
  CHAR String1[260]; // [esp+Ch] [ebp-104h] BYREF

  v4 = 0; /*0x6bb2f0*/
  lstrcpyA(String1, lpString2); /*0x6bb2f2*/
  if ( a2 ) /*0x6bb2fa*/
  {
    lstrcatA(String1, asc_815E74); /*0x6bb30d*/
    lstrcatA(String1, a2); /*0x6bb315*/
  }
  result = RegCreateKeyExA(HKEY_CLASSES_ROOT, String1, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0); /*0x6bb336*/
  if ( !result ) /*0x6bb33e*/
  {
    if ( !lpString || (v6 = lstrlenA(lpString), !RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)lpString, v6 + 1)) ) /*0x6bb360*/
      v4 = 1; /*0x6bb36a*/
    result = RegCloseKey(phkResult); /*0x6bb371*/
  }
  LOBYTE(result) = v4; /*0x6bb377*/
  return result; /*0x6bb379*/
}



// ==== 0x006BB390  ObjectClass::RegisterClassesCOM  this=ObjectClass  sig=csp ====
int RegisterClassesCOM(ObjectClass *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _BYTE v7[16]; // [esp+0h] [ebp-2F0h] BYREF
  HKEY phkResult; // [esp+10h] [ebp-2E0h] BYREF
  ITypeLib *pptlib; // [esp+14h] [ebp-2DCh] BYREF
  CHAR MultiByteStr[40]; // [esp+18h] [ebp-2D8h] BYREF
  CHAR String1[48]; // [esp+40h] [ebp-2B0h] BYREF
  CHAR SubKey[260]; // [esp+70h] [ebp-280h] BYREF
  CHAR String[40]; // [esp+174h] [ebp-17Ch] BYREF
  OLECHAR sz[40]; // [esp+19Ch] [ebp-154h] BYREF
  CHAR Filename[260]; // [esp+1ECh] [ebp-104h] BYREF

  GetModuleFileNameA(g_hInstance, Filename, 0x104u); /*0x6bb3ae*/
  StringFromGUID2(&rguid, sz, 39); /*0x6bb3c9*/
  WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 39, 0, 0); /*0x6bb3ea*/
  StringFromGUID2(&stru_7E9510, sz, 39); /*0x6bb3fb*/
  WideCharToMultiByte(0, 0, sz, -1, String, 39, 0, 0); /*0x6bb419*/
  lstrcpyA(String1, aClsid); /*0x6bb42b*/
  lstrcatA(String1, MultiByteStr); /*0x6bb43d*/
  lstrcpyA(SubKey, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb449*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb472*/
  {
    if ( Data ) /*0x6bb486*/
    {
      v1 = lstrlenA((LPCSTR)Data); /*0x6bb48d*/
      RegSetValueExA(phkResult, 0, 0, 1u, Data, v1 + 1); /*0x6bb4a5*/
    }
    RegCloseKey(phkResult); /*0x6bb4ac*/
  }
  lstrcpyA(SubKey, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb4bc*/
  if ( g_INI_Key_CLSID ) /*0x6bb4c5*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb4d1*/
    lstrcatA(SubKey, g_INI_Key_CLSID); /*0x6bb4dd*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb500*/
  {
    if ( v7 != (_BYTE *)-24 ) /*0x6bb50c*/
    {
      v2 = lstrlenA(MultiByteStr); /*0x6bb513*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v2 + 1); /*0x6bb52b*/
    }
    RegCloseKey(phkResult); /*0x6bb532*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb542*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb562*/
  {
    if ( Data ) /*0x6bb570*/
    {
      v3 = lstrlenA((LPCSTR)Data); /*0x6bb577*/
      RegSetValueExA(phkResult, 0, 0, 1u, Data, v3 + 1); /*0x6bb58f*/
    }
    RegCloseKey(phkResult); /*0x6bb596*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb5a6*/
  if ( aCurver ) /*0x6bb5b0*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb5bc*/
    lstrcatA(SubKey, aCurver); /*0x6bb5c8*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb5eb*/
  {
    if ( g_Str_WW_TiberianSun_1 ) /*0x6bb5f9*/
    {
      v4 = lstrlenA((LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb600*/
      RegSetValueExA(phkResult, 0, 0, 1u, g_Str_WW_TiberianSun_1, v4 + 1); /*0x6bb618*/
    }
    RegCloseKey(phkResult); /*0x6bb61f*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb62f*/
  if ( g_INI_Key_CLSID ) /*0x6bb639*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb645*/
    lstrcatA(SubKey, g_INI_Key_CLSID); /*0x6bb651*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb674*/
  {
    if ( v7 != (_BYTE *)-24 ) /*0x6bb680*/
    {
      v5 = lstrlenA(MultiByteStr); /*0x6bb687*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v5 + 1); /*0x6bb69f*/
    }
    RegCloseKey(phkResult); /*0x6bb6a6*/
  }
  WriteRegistryKeyCOM(String1, 0, (LPCSTR)Data); /*0x6bb6b7*/
  WriteRegistryKeyCOM(String1, aProgid, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb6ca*/
  WriteRegistryKeyCOM(String1, aVersionindepen, g_Str_WW_TiberianSun); /*0x6bb6dd*/
  WriteRegistryKeyCOM(String1, aNotinsertable, 0); /*0x6bb6ed*/
  WriteRegistryKeyCOM(String1, aInprocserver32, Filename); /*0x6bb703*/
  WriteRegistryKeyCOM(String1, aTypelib, String); /*0x6bb719*/
  pptlib = 0; /*0x6bb722*/
  LoadTypeLib(&szFile, &pptlib); /*0x6bb730*/
  if ( pptlib ) /*0x6bb740*/
    pptlib->lpVtbl->Release(pptlib); /*0x6bb745*/
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
  lstrcpyA(String1, aClsid); /*0x6bb7a6*/
  lstrcatA(String1, MultiByteStr); /*0x6bb7b6*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansunC); /*0x6bb7cc*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansunC_0); /*0x6bb7d8*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, g_Str_WW_TiberianSun); /*0x6bb7e4*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansun1_0); /*0x6bb7f0*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb7fc*/
  wsprintfA(SubKey, "%s\\%s", String1, aProgid); /*0x6bb81b*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb82a*/
  wsprintfA(SubKey, "%s\\%s", String1, aVersionindepen); /*0x6bb840*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb84f*/
  wsprintfA(SubKey, "%s\\%s", String1, aNotinsertable); /*0x6bb865*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb874*/
  wsprintfA(SubKey, "%s\\%s", String1, aInprocserver32); /*0x6bb88d*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb89c*/
  wsprintfA(SubKey, "%s\\%s", String1, aTypelib); /*0x6bb8b2*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb8c1*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, String1); /*0x6bb8cd*/
  return 0; /*0x6bb8d1*/
}



// ==== 0x006BB8E0  ObjectClass::WinMainSetup_Setup_6BB8E0  this=ObjectClass  sig=csp ====
unsigned __int8 __usercall WinMainSetup_Setup_6BB8E0@<al>(ObjectClass *this)
{
  unsigned __int8 result; // al
  DDraw *v2; // [esp+0h] [ebp-4h]

  result = g_DDraw_Force3D; /*0x6bb8e0*/
  if ( g_DDraw_Force3D ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(v2); /*0x6bb8ec*/
  if ( !byte_B0BCF5 ) /*0x6bb8f7*/
  {
    if ( g_DSurface_Hidden ) /*0x6bb905*/
    {
      (*(void (__thiscall **)(ObjectClass *, int))g_DSurface_Hidden->AbstractClass)(g_DSurface_Hidden, 1); /*0x6bb90b*/
      g_DSurface_Hidden = 0; /*0x6bb90d*/
    }
    if ( DSurface_Alternate ) /*0x6bb91b*/
    {
      (*(void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0)(DSurface_Alternate, 1); /*0x6bb921*/
      DSurface_Alternate = 0; /*0x6bb923*/
    }
    if ( DSurface_Tile ) /*0x6bb931*/
    {
      (*(void (__thiscall **)(DSurface *, int))DSurface_Tile->DSurface_field_0x0)(DSurface_Tile, 1); /*0x6bb937*/
      DSurface_Tile = 0; /*0x6bb939*/
    }
    if ( DSurface_Sidebar ) /*0x6bb947*/
    {
      (*(void (__thiscall **)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0)(DSurface_Sidebar, 1); /*0x6bb94d*/
      DSurface_Sidebar = 0; /*0x6bb94f*/
    }
    if ( DSurface_Composite ) /*0x6bb95d*/
    {
      (**(void (__thiscall ***)(AudioStream *, int))DSurface_Composite->__pad_0)(DSurface_Composite, 1); /*0x6bb963*/
      DSurface_Composite = 0; /*0x6bb965*/
    }
    if ( g_DSurface_Primary ) /*0x6bb973*/
    {
      (*(void (__thiscall **)(DSurface *, int))g_DSurface_Primary->DSurface_field_0x0)(g_DSurface_Primary, 1); /*0x6bb979*/
      g_DSurface_Primary = 0; /*0x6bb97b*/
    }
    result = (unsigned __int8)sub_4A44F0((ObjectClass *)v2); /*0x6bb981*/
    byte_B0BCF5 = 1; /*0x6bb986*/
  }
  return result; /*0x6bb98d*/
}



// ==== 0x006BB990  ObjectClass::TopLevelExceptionFilter  this=ObjectClass  sig=csp ====
LONG __thiscall TopLevelExceptionFilter(
        ObjectClass *this,
        struct _EXCEPTION_POINTERS *ExceptionInfo,
        int a3,
        int a4,
        int a5)
{
  HANDLE FileA; // esi
  DWORD v7; // eax
  DWORD v9; // [esp-E40h] [ebp-E40h] BYREF

  v9 = *(_DWORD *)this->AbstractClass; /*0x4c8fe0*/
  Debug::Log(); /*0x4c8fe9*/
  WinMain_Write_53E6B0(); /*0x4c8ff1*/
  if ( !++dword_820E5C ) /*0x4c9001*/
  {
    ExceptionHandler::GenerateReport((ExceptionHandler *)this); /*0x4c9005*/
    FileA = CreateFileA(FileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x4c9027*/
    if ( FileA != (HANDLE)-1 ) /*0x4c902c*/
    {
      v7 = lstrlenA(Buffer); /*0x4c903a*/
      WriteFile(FileA, Buffer, v7, &v9, 0); /*0x4c9047*/
      CloseHandle(FileA); /*0x4c904e*/
    }
  }
  if ( (g_DSurface_Primary /*0x4c90dc*/
     && (*((unsigned __int8 (__thiscall **)(DSurface *, DWORD))g_DSurface_Primary->DSurface_field_0x0 + 27))(
          g_DSurface_Primary,
          v9)
     || g_DSurface_Hidden
     && (*((unsigned __int8 (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 27))(g_DSurface_Hidden)
     || DSurface_Composite
     && (*(unsigned __int8 (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 108))(DSurface_Composite)
     || DSurface_Tile
     && (*((unsigned __int8 (__thiscall **)(DSurface *))DSurface_Tile->DSurface_field_0x0 + 27))(DSurface_Tile)
     || DSurface_Sidebar
     && (*((unsigned __int8 (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 27))(DSurface_Sidebar)
     || DSurface_Alternate
     && (*((unsigned __int8 (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 27))(DSurface_Alternate))
    && stru_887598.onBridge
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
  if ( hWnd ) /*0x4c912e*/
    Dialog::Destroy((Dialog *)hWnd); /*0x4c9130*/
  return 1; /*0x4c90ee*/
}



// ==== 0x006BB9A0  WinMain  this=-  sig=csp ====
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HWND WindowA; // eax
  HWND v6; // esi
  int v7; // edi
  char *v8; // eax
  int *FootClass_field_abstract_array_5AC; // esi
  int v10; // esi
  RawFileClass *v11; // eax
  _DWORD *v12; // eax
  int Int_Overwrite; // eax
  int v14; // eax
  int v15; // esi
  char *i; // eax
  int *v17; // eax
  NetworkSession *v18; // eax
  NetworkSession *v19; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v21; // eax
  _SCOPETABLE_ENTRY *v22; // esi
  int v23; // eax
  HMODULE LibraryA; // eax
  HMODULE v25; // edi
  void (*ProcAddress)(void); // eax
  ClassFactory_CStream *v27; // eax
  IUnknown *v28; // eax
  ClassFactory_Wave *v29; // eax
  IUnknown *v30; // eax
  COMClassFactory *v31; // eax
  IUnknown *v32; // eax
  COMClassFactory *v33; // eax
  IUnknown *v34; // eax
  COMClassFactory *v35; // eax
  IUnknown *v36; // eax
  COMClassFactory *v37; // eax
  IUnknown *v38; // eax
  COMClassFactory ... [57318 chars total]



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

  v0 = dword_A8F794; /*0x6be1c2*/
  byte_A8E9A0 = 0; /*0x6be1cc*/
  if ( dword_A8F794 ) /*0x6be1d2*/
  {
    FileTreeNode::Destroy(dword_A8F794); /*0x6be1d6*/
    __3_YAXPAX_Z(v0); /*0x6be1dc*/
    dword_A8F794 = 0; /*0x6be1e4*/
  }
  if ( dword_A8F798 ) /*0x6be1f2*/
  {
    (**(void (__thiscall ***)(int, int))dword_A8F798)(dword_A8F798, 1); /*0x6be1f8*/
    dword_A8F798 = 0; /*0x6be1fa*/
  }
  if ( dword_A8F790 ) /*0x6be207*/
  {
    __3_YAXPAX_Z(dword_A8F790); /*0x6be20a*/
    dword_A8F790 = 0; /*0x6be212*/
  }
  WinMain::Constructor_VectorClass_Wstring_(&dword_A8B238); /*0x6be21d*/
  while ( dword_B054E0 ) /*0x6be228*/
  {
    v1 = *(void **)dword_B054D4; /*0x6be230*/
    if ( *(_DWORD *)dword_B054D4 ) /*0x6be230*/
    {
      ColorScheme::Destructor(*(_DWORD *)dword_B054D4); /*0x6be238*/
      __3_YAXPAX_Z(v1); /*0x6be23e*/
    }
  }
  dword_B054E0 = 0; /*0x6be253*/
  if ( dword_B054D4 && byte_B054DD ) /*0x6be263*/
  {
    __3_YAXPAX_Z(dword_B054D4); /*0x6be266*/
    dword_B054D4 = 0; /*0x6be26e*/
  }
  byte_B054DD = 0; /*0x6be274*/
  dword_B054D8 = 0; /*0x6be27a*/
  Game::DestroyAllObjects(); /*0x6be280*/
  MixFileClass::DestroyCache(); /*0x6be285*/
  MixFileClass::CleanupCache(); /*0x6be28a*/
  WinMainSetup_Setup_5B4310(); /*0x6be28f*/
  if ( dword_ABF3A0 ) /*0x6be29a*/
  {
    do /*0x6be2de*/
    {
      free(*(void **)dword_ABF394); /*0x6be2a5*/
      v2 = dword_ABF3A0 == 0; /*0x6be2b3*/
      if ( dword_ABF3A0 > 0 ) /*0x6be2b5*/
      {
        v3 = 0; /*0x6be2b8*/
        v2 = dword_ABF3A0-- == 1; /*0x6be2ba*/
        if ( dword_ABF3A0 > 0 ) /*0x6be2c2*/
        {
          do /*0x6be2da*/
          {
            ++v3; /*0x6be2ca*/
            *((_DWORD *)dword_ABF394 + v3 - 1) = *((_DWORD *)dword_ABF394 + v3); /*0x6be2ce*/
          }
          while ( v3 < dword_ABF3A0 ); /*0x6be2da*/
          v2 = dword_ABF3A0 == 0; /*0x6be2dc*/
        }
      }
    }
    while ( !v2 ); /*0x6be2de*/
  }
  dword_ABF3A0 = 0; /*0x6be2e5*/
  if ( dword_ABF394 && byte_ABF39D ) /*0x6be2f5*/
  {
    __3_YAXPAX_Z(dword_ABF394); /*0x6be2f8*/
    dword_ABF394 = 0; /*0x6be300*/
  }
  v4 = 0; /*0x6be30b*/
  byte_ABF39D = 0; /*0x6be30f*/
  for ( dword_ABF398 = 0; v4 < dword_87F668; ++v4 ) /*0x6be31b*/
  {
    v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)dword_87F65C + v4); /*0x6be322*/
    if ( v5 ) /*0x6be327*/
      (**v5)(v5, 1); /*0x6be32d*/
  }
  dword_87F668 = 0; /*0x6be33e*/
  if ( dword_87F65C && byte_87F665 ) /*0x6be34e*/
  {
    __3_YAXPAX_Z(dword_87F65C); /*0x6be351*/
    dword_87F65C = 0; /*0x6be359*/
  }
  byte_87F665 = 0; /*0x6be365*/
  dword_87F660 = 0; /*0x6be36d*/
  if ( dword_887048 ) /*0x6be373*/
  {
    (**(void (__thiscall ***)(int, int))dword_887048)(dword_887048, 1); /*0x6be379*/
    dword_887048 = 0; /*0x6be37b*/
  }
  INIClass::ClearSection(0, 0); /*0x6be388*/
  INIClass::ClearSection(0, 0); /*0x6be394*/
  INIClass::ClearSection(0, 0); /*0x6be3a0*/
  INIClass::ClearSection(0, 0); /*0x6be3ac*/
  INIClass::ClearSection(0, 0); /*0x6be3b8*/
  INIClass::ClearSection(0, 0); /*0x6be3c4*/
  WinMainSetup_Setup_5FF800(); /*0x6be3c9*/
  WinMainSetup_Setup(); /*0x6be3ce*/
  if ( dword_887640 ) /*0x6be3db*/
  {
    (**(void (__thiscall ***)(int, int))dword_887640)(dword_887640, 1); /*0x6be3e1*/
    dword_887640 = 0; /*0x6be3e3*/
  }
  MapClass::FreeAllCells(&dword_87F7E8); /*0x6be3ee*/
  TacticalClass::FreeResources(&dword_87F7E8); /*0x6be3f8*/
  WinMainSetup_Setup_6BB8E0(); /*0x6be3fd*/
  v6 = g_ZBufferDescriptor; /*0x6be402*/
  if ( g_ZBufferDescriptor ) /*0x6be40a*/
  {
    Stream::GetField(g_ZBufferDescriptor); /*0x6be40e*/
    __3_YAXPAX_Z(v6); /*0x6be414*/
    g_ZBufferDescriptor = 0; /*0x6be41c*/
  }
  v7 = dword_87E8A4; /*0x6be422*/
  if ( dword_87E8A4 ) /*0x6be42a*/
  {
    StreamObj::Release(dword_87E8A4); /*0x6be42e*/
    __3_YAXPAX_Z(v7); /*0x6be434*/
    dword_87E8A4 = 0; /*0x6be43c*/
  }
  if ( g_GameFontObject ) /*0x6be44a*/
  {
    (**(void (__thiscall ***)(int, int))g_GameFontObject)(g_GameFontObject, 1); /*0x6be450*/
    g_GameFontObject = 0; /*0x6be452*/
  }
  if ( dword_87F6B8 ) /*0x6be460*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6B8)(dword_87F6B8, 1); /*0x6be466*/
    dword_87F6B8 = 0; /*0x6be468*/
  }
  if ( dword_87F6C0 ) /*0x6be476*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6C0)(dword_87F6C0, 1); /*0x6be47c*/
    dword_87F6C0 = 0; /*0x6be47e*/
  }
  if ( dword_87F6C4 ) /*0x6be48c*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6C4)(dword_87F6C4, 1); /*0x6be492*/
    dword_87F6C4 = 0; /*0x6be494*/
  }
  if ( dword_87F6B4 ) /*0x6be4a2*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6B4)(dword_87F6B4, 1); /*0x6be4a8*/
    dword_87F6B4 = 0; /*0x6be4aa*/
  }
  if ( dword_87F6C8 ) /*0x6be4b8*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6C8)(dword_87F6C8, 1); /*0x6be4be*/
    dword_87F6C8 = 0; /*0x6be4c0*/
  }
  if ( dword_87F6CC ) /*0x6be4ce*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6CC)(dword_87F6CC, 1); /*0x6be4d4*/
    dword_87F6CC = 0; /*0x6be4d6*/
  }
  if ( dword_87F6D0 ) /*0x6be4e4*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6D0)(dword_87F6D0, 1); /*0x6be4ea*/
    dword_87F6D0 = 0; /*0x6be4ec*/
  }
  if ( dword_87F6B0 ) /*0x6be4fa*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6B0)(dword_87F6B0, 1); /*0x6be500*/
    dword_87F6B0 = 0; /*0x6be502*/
  }
  if ( dword_B1D140 ) /*0x6be510*/
  {
    (**(void (__thiscall ***)(int, int))dword_B1D140)(dword_B1D140, 1); /*0x6be516*/
    dword_B1D140 = 0; /*0x6be518*/
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
  if ( dword_89DDBC ) /*0x6be551*/
  {
    __3_YAXPAX_Z(dword_89DDBC); /*0x6be554*/
    dword_89DDBC = 0; /*0x6be55c*/
  }
  CleanupMapSystems(&dword_87F7E8); /*0x6be567*/
  for ( i = 0; i < dword_87F6A8; ++i ) /*0x6be575*/
  {
    v9 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)dword_87F69C + i); /*0x6be57c*/
    if ( v9 ) /*0x6be581*/
      (**v9)(v9, 1); /*0x6be587*/
  }
  dword_87F6A8 = 0; /*0x6be598*/
  if ( dword_87F69C && byte_87F6A5 ) /*0x6be5a8*/
  {
    __3_YAXPAX_Z(dword_87F69C); /*0x6be5ab*/
    dword_87F69C = 0; /*0x6be5b3*/
  }
  byte_87F6A5 = 0; /*0x6be5bf*/
  dword_87F6A0 = 0; /*0x6be5c7*/
  if ( dword_884E08 ) /*0x6be5cd*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E08)(dword_884E08, 1); /*0x6be5d3*/
    dword_884E08 = 0; /*0x6be5d5*/
  }
  if ( dword_884E0C ) /*0x6be5e3*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E0C)(dword_884E0C, 1); /*0x6be5e9*/
    dword_884E0C = 0; /*0x6be5eb*/
  }
  if ( dword_884E10 ) /*0x6be5f9*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E10)(dword_884E10, 1); /*0x6be5ff*/
    dword_884E10 = 0; /*0x6be601*/
  }
  if ( g_MixFile_GENERIC ) /*0x6be60f*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_GENERIC)(g_MixFile_GENERIC, 1); /*0x6be615*/
    g_MixFile_GENERIC = 0; /*0x6be617*/
  }
  if ( g_MixFile_GENERMD ) /*0x6be625*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_GENERMD)(g_MixFile_GENERMD, 1); /*0x6be62b*/
    g_MixFile_GENERMD = 0; /*0x6be62d*/
  }
  if ( dword_884E1C ) /*0x6be63b*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E1C)(dword_884E1C, 1); /*0x6be641*/
    dword_884E1C = 0; /*0x6be643*/
  }
  if ( dword_884E20 ) /*0x6be651*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E20)(dword_884E20, 1); /*0x6be657*/
    dword_884E20 = 0; /*0x6be659*/
  }
  if ( g_MixFile_ISOGEN ) /*0x6be667*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_ISOGEN)(g_MixFile_ISOGEN, 1); /*0x6be66d*/
    g_MixFile_ISOGEN = 0; /*0x6be66f*/
  }
  if ( g_MixFile_ISOGENMD ) /*0x6be67d*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_ISOGENMD)(g_MixFile_ISOGENMD, 1); /*0x6be683*/
    g_MixFile_ISOGENMD = 0; /*0x6be685*/
  }
  if ( lpBuffer ) /*0x6be692*/
  {
    __3_YAXPAX_Z(lpBuffer); /*0x6be695*/
    lpBuffer = 0; /*0x6be69d*/
  }
  if ( dword_AA1060 ) /*0x6be6aa*/
  {
    __3_YAXPAX_Z(dword_AA1060); /*0x6be6ad*/
    dword_AA1060 = 0; /*0x6be6b5*/
  }
  if ( dword_AA1064 ) /*0x6be6c2*/
  {
    __3_YAXPAX_Z(dword_AA1064); /*0x6be6c5*/
    dword_AA1064 = 0; /*0x6be6cd*/
  }
  if ( dword_AA1068 ) /*0x6be6da*/
  {
    __3_YAXPAX_Z(dword_AA1068); /*0x6be6dd*/
    dword_AA1068 = 0; /*0x6be6e5*/
  }
  if ( dword_AA106C ) /*0x6be6f2*/
  {
    __3_YAXPAX_Z(dword_AA106C); /*0x6be6f5*/
    dword_AA106C = 0; /*0x6be6fd*/
  }
  if ( dword_887320 ) /*0x6be70b*/
  {
    (**(void (__thiscall ***)(int, int))dword_887320)(dword_887320, 1); /*0x6be711*/
    dword_887320 = 0; /*0x6be713*/
  }
  if ( g_MixFile_MOVIES ) /*0x6be721*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MOVIES)(g_MixFile_MOVIES, 1); /*0x6be727*/
    g_MixFile_MOVIES = 0; /*0x6be729*/
  }
  if ( dword_884E30 ) /*0x6be737*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E30)(dword_884E30, 1); /*0x6be73d*/
    dword_884E30 = 0; /*0x6be73f*/
  }
  if ( dword_884E34 ) /*0x6be74d*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E34)(dword_884E34, 1); /*0x6be753*/
    dword_884E34 = 0; /*0x6be755*/
  }
  if ( g_MixFile_CONQUER ) /*0x6be763*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CONQUER)(g_MixFile_CONQUER, 1); /*0x6be769*/
    g_MixFile_CONQUER = 0; /*0x6be76b*/
  }
  if ( g_MixFile_CONQMD ) /*0x6be779*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CONQMD)(g_MixFile_CONQMD, 1); /*0x6be77f*/
    g_MixFile_CONQMD = 0; /*0x6be781*/
  }
  if ( g_MixFile_CAMEO ) /*0x6be78f*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CAMEO)(g_MixFile_CAMEO, 1); /*0x6be795*/
    g_MixFile_CAMEO = 0; /*0x6be797*/
  }
  if ( g_MixFile_CAMEOMD ) /*0x6be7a5*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CAMEOMD)(g_MixFile_CAMEOMD, 1); /*0x6be7ab*/
    g_MixFile_CAMEOMD = 0; /*0x6be7ad*/
  }
  v10 = g_MixFilePool_Count; /*0x6be7b3*/
  if ( g_MixFilePool_Count > 0 ) /*0x6be7bb*/
  {
    v11 = g_MixFilePool; /*0x6be7bd*/
    do /*0x6be806*/
    {
      if ( *v11 ) /*0x6be7c3*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v11)(*v11, 1); /*0x6be7cd*/
        v11 = g_MixFilePool; /*0x6be7cf*/
        v10 = g_MixFilePool_Count; /*0x6be7d5*/
      }
      if ( v10 <= 0 ) /*0x6be7dd*/
        break; /*0x6be7dd*/
      v12 = 0; /*0x6be7e0*/
      g_MixFilePool_Count = v10 - 1; /*0x6be7e4*/
      if ( v10 - 1 <= 0 ) /*0x6be7ea*/
        break; /*0x6be7ea*/
      do /*0x6be802*/
      {
        v11[v12] = v11[v12 + 1]; /*0x6be7f0*/
        v10 = g_MixFilePool_Count; /*0x6be7f3*/
        v11 = g_MixFilePool; /*0x6be7f9*/
        ++v12; /*0x6be7ff*/
      }
      while ( v12 < g_MixFilePool_Count ); /*0x6be802*/
    }
    while ( g_MixFilePool_Count > 0 ); /*0x6be806*/
  }
  if ( g_MixFile_CACHE ) /*0x6be810*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CACHE)(g_MixFile_CACHE, 1); /*0x6be816*/
    g_MixFile_CACHE = 0; /*0x6be818*/
  }
  if ( g_MixFile_CACHEMD ) /*0x6be826*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CACHEMD)(g_MixFile_CACHEMD, 1); /*0x6be82c*/
    g_MixFile_CACHEMD = 0; /*0x6be82e*/
  }
  if ( g_MixFile_LOCAL ) /*0x6be83c*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_LOCAL)(g_MixFile_LOCAL, 1); /*0x6be842*/
    g_MixFile_LOCAL = 0; /*0x6be844*/
  }
  if ( g_MixFile_LOCALMD ) /*0x6be852*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_LOCALMD)(g_MixFile_LOCALMD, 1); /*0x6be858*/
    g_MixFile_LOCALMD = 0; /*0x6be85a*/
  }
  if ( dword_884E5C ) /*0x6be868*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x6be86e*/
    dword_884E5C = 0; /*0x6be870*/
  }
  if ( dword_884E58 ) /*0x6be87e*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E58)(dword_884E58, 1); /*0x6be884*/
    dword_884E58 = 0; /*0x6be886*/
  }
  if ( dword_884E68 ) /*0x6be894*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E68)(dword_884E68, 1); /*0x6be89a*/
    dword_884E68 = 0; /*0x6be89c*/
  }
  if ( dword_884E6C ) /*0x6be8aa*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E6C)(dword_884E6C, 1); /*0x6be8b0*/
    dword_884E6C = 0; /*0x6be8b2*/
  }
  v13 = dword_884DD0; /*0x6be8b8*/
  if ( dword_884DD0 > 0 ) /*0x6be8c0*/
  {
    v14 = dword_884DC4; /*0x6be8c2*/
    do /*0x6be90b*/
    {
      if ( *v14 ) /*0x6be8c8*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v14)(*v14, 1); /*0x6be8d2*/
        v14 = dword_884DC4; /*0x6be8d4*/
        v13 = dword_884DD0; /*0x6be8da*/
      }
      if ( v13 <= 0 ) /*0x6be8e2*/
        break; /*0x6be8e2*/
      v15 = 0; /*0x6be8e5*/
      dword_884DD0 = v13 - 1; /*0x6be8e9*/
      if ( v13 - 1 <= 0 ) /*0x6be8ef*/
        break; /*0x6be8ef*/
      do /*0x6be907*/
      {
        v14[v15] = v14[v15 + 1]; /*0x6be8f5*/
        v13 = dword_884DD0; /*0x6be8f8*/
        v14 = dword_884DC4; /*0x6be8fe*/
        ++v15; /*0x6be904*/
      }
      while ( v15 < dword_884DD0 ); /*0x6be907*/
    }
    while ( dword_884DD0 > 0 ); /*0x6be90b*/
  }
  if ( g_MixFile_MAPSFirst ) /*0x6be915*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MAPSFirst)(g_MixFile_MAPSFirst, 1); /*0x6be91b*/
    g_MixFile_MAPSFirst = 0; /*0x6be91d*/
  }
  if ( g_MixFile_MAPSMDFirst ) /*0x6be92b*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MAPSMDFirst)(g_MixFile_MAPSMDFirst, 1); /*0x6be931*/
    g_MixFile_MAPSMDFirst = 0; /*0x6be933*/
  }
  if ( MixFileClass_MULTI ) /*0x6be941*/
  {
    (**(void (__thiscall ***)(int, int))MixFileClass_MULTI)(MixFileClass_MULTI, 1); /*0x6be947*/
    MixFileClass_MULTI = 0; /*0x6be949*/
  }
  if ( g_MixFile_MULTIMD ) /*0x6be957*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MULTIMD)(g_MixFile_MULTIMD, 1); /*0x6be95d*/
    g_MixFile_MULTIMD = 0; /*0x6be95f*/
  }
  if ( dword_884E74 ) /*0x6be96d*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E74)(dword_884E74, 1); /*0x6be973*/
    dword_884E74 = 0; /*0x6be975*/
  }
  if ( dword_884E70 ) /*0x6be983*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E70)(dword_884E70, 1); /*0x6be989*/
    dword_884E70 = 0; /*0x6be98b*/
  }
  if ( dword_884E78 ) /*0x6be999*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E78)(dword_884E78, 1); /*0x6be99f*/
    dword_884E78 = 0; /*0x6be9a1*/
  }
  if ( g_MixFile_RA2 ) /*0x6be9af*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_RA2)(g_MixFile_RA2, 1); /*0x6be9b5*/
    g_MixFile_RA2 = 0; /*0x6be9b7*/
  }
  if ( g_MixFile_RA2MD ) /*0x6be9c5*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_RA2MD)(g_MixFile_RA2MD, 1); /*0x6be9cb*/
    g_MixFile_RA2MD = 0; /*0x6be9cd*/
  }
  if ( dword_884E00 ) /*0x6be9db*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E00)(dword_884E00, 1); /*0x6be9e1*/
    dword_884E00 = 0; /*0x6be9e3*/
  }
  if ( dword_884E04 ) /*0x6be9f1*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E04)(dword_884E04, 1); /*0x6be9f7*/
    dword_884E04 = 0; /*0x6be9f9*/
  }
  if ( g_TacticalClass_Instance ) /*0x6bea07*/
  {
    ((void (__thiscall *)(LPPERSISTSTREAM, int))g_TacticalClass_Instance->__tail_0[1].QueryInterface)( /*0x6bea0d*/
      g_TacticalClass_Instance,
      1);
    g_TacticalClass_Instance = 0; /*0x6bea10*/
  }
  WinMainSetup_Setup_65FD50(); /*0x6bea16*/
  TacticalClass::CleanupResources(&dword_87F7E8); /*0x6bea20*/
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
  if ( dword_87F770 ) /*0x6bea6d*/
  {
    __3_YAXPAX_Z(dword_87F770); /*0x6bea70*/
    dword_87F770 = 0; /*0x6bea78*/
  }
  Network::ShutdownInterface(); /*0x6bea7e*/
  v16 = dword_A83DB8; /*0x6bea83*/
  if ( dword_A83DB8 ) /*0x6bea8b*/
  {
    Vector::Clear(dword_A83DB8); /*0x6bea8f*/
    __3_YAXPAX_Z(v16); /*0x6bea95*/
    dword_A83DB8 = 0; /*0x6bea9d*/
  }
  v17 = dword_8871E0; /*0x6beaa3*/
  if ( dword_8871E0 ) /*0x6beaab*/
  {
    RulesClass::DTOR(dword_8871E0); /*0x6beaaf*/
    __3_YAXPAX_Z(v17); /*0x6beab5*/
    dword_8871E0 = 0; /*0x6beabd*/
  }
  v18 = dword_A8B230; /*0x6beac3*/
  if ( dword_A8B230 ) /*0x6beacc*/
  {
    v19 = (void *)*((_DWORD *)dword_A8B230 + 3396); /*0x6bead2*/
    *((_DWORD *)dword_A8B230 + 3395) = &VectorClass<int>::`vftable'; /*0x6beadf*/
    if ( v19 && *((_BYTE *)v18 + 13593) ) /*0x6beae7*/
    {
      __3_YAXPAX_Z(v19); /*0x6beaf0*/
      v18[3396] = 0; /*0x6beaf8*/
    }
    *((_BYTE *)v18 + 13593) = 0; /*0x6beafe*/
    v18[3397] = 0; /*0x6beb04*/
    v20 = (void *)v18[3389]; /*0x6beb0a*/
    v18[3388] = &VectorClass<int>::`vftable'; /*0x6beb10*/
    if ( v20 && *((_BYTE *)v18 + 13565) ) /*0x6beb1a*/
    {
      __3_YAXPAX_Z(v20); /*0x6beb23*/
      v18[3389] = 0; /*0x6beb2b*/
    }
    *((_BYTE *)v18 + 13565) = 0; /*0x6beb31*/
    v18[3390] = 0; /*0x6beb37*/
    v21 = (void *)v18[3382]; /*0x6beb3d*/
    v18[3381] = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x6beb43*/
    if ( v21 && *((_BYTE *)v18 + 13537) ) /*0x6beb51*/
    {
      __3_YAXPAX_Z(v21); /*0x6beb5a*/
      v18[3382] = 0; /*0x6beb62*/
    }
    *((_BYTE *)v18 + 13537) = 0; /*0x6beb69*/
    v18[3383] = 0; /*0x6beb6f*/
    __3_YAXPAX_Z(v18); /*0x6beb75*/
    dword_A8B230 = 0; /*0x6beb7d*/
  }
  for ( j = 0; j < dword_B0BC98; ++j ) /*0x6beb8c*/
    CoRevokeClassObject(*((_DWORD *)dword_B0BC8C + j)); /*0x6beb9e*/
  dword_B0BC98 = 0; /*0x6bebaf*/
  if ( dword_B0BC8C && byte_B0BC95 ) /*0x6bebc0*/
  {
    __3_YAXPAX_Z(dword_B0BC8C); /*0x6bebc3*/
    dword_B0BC8C = 0; /*0x6bebcb*/
  }
  byte_B0BC95 = 0; /*0x6bebd8*/
  dword_B0BC90 = 0; /*0x6bebde*/
  RevokeActiveObject(pdwRegister, 0); /*0x6bebe4*/
  if ( hLibModule ) /*0x6bebf1*/
    FreeLibrary(hLibModule); /*0x6bebf4*/
  if ( dword_B0BCE8 ) /*0x6bec07*/
  {
    CloseHandle(dword_B0BCE8); /*0x6bec0a*/
    dword_B0BCE8 = 0; /*0x6bec0c*/
  }
  if ( dword_B0BCE4 ) /*0x6bec19*/
  {
    CloseHandle(dword_B0BCE4); /*0x6bec1c*/
    dword_B0BCE4 = 0; /*0x6bec1e*/
  }
  Audio_Init(); /*0x6bec24*/
  ThemeManager::Cleanup(&unk_A83D10); /*0x6bec2e*/
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
void __thiscall __noreturn ExitProgram(ObjectClass *this)
{
  exit((int)this); /*0x6bec51*/
}



// ==== 0x006BEC60  GameClass::Shutdown  this=GameClass  sig=csp ====
void GameClass::Shutdown(GameClass *this)
{
  int v1; // eax
  void *v2; // ebp
  int v3; // edx
  int v4; // eax
  FileTreeNode *v5; // esi
  int v6; // edi
  Network *v7; // [esp+0h] [ebp-4h]

  *(_DWORD *)&stru_A8EB00.?[500] = 1; /*0x6bec72*/
  PostMessageA(g_hWnd, 2u, 0, 0); /*0x6bec78*/
  if ( g_hWnd ) /*0x6bec85*/
  {
    do /*0x6bec9b*/
      MessageLoop(); /*0x6bec87*/
    while ( *(_DWORD *)&stru_A8EB00.?[500] == 1 && g_hWnd ); /*0x6bec9b*/
  }
  if ( dwRegister != -1 ) /*0x6beca5*/
  {
    RevokeActiveObject(dwRegister, 0); /*0x6becaa*/
    dwRegister = -1; /*0x6becb0*/
  }
  CoDisconnectObject(&punk, 0); /*0x6becc1*/
  OleUninitialize(); /*0x6becc7*/
  if ( stru_887598.lineTrailer ) /*0x6becd5*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6becd9*/
    if ( stru_887598.lineTrailer ) /*0x6bece4*/
      (**(void (__thiscall ***)(void *, int))stru_887598.lineTrailer)(stru_887598.lineTrailer, 1); /*0x6bece9*/
  }
  stru_887598.lineTrailer = 0; /*0x6becf0*/
  if ( byte_B0BCF4 ) /*0x6becfc*/
  {
    if ( dword_B0BCF0 ) /*0x6bed06*/
    {
      v1 = *(_DWORD *)(dword_B0BCF0 - 4); /*0x6bed08*/
      v2 = (void *)(dword_B0BCF0 - 4); /*0x6bed0c*/
      v3 = 9 * v1; /*0x6bed0f*/
      v4 = v1 - 1; /*0x6bed12*/
      v5 = (FileTreeNode *)(dword_B0BCF0 + 4 * v3); /*0x6bed13*/
      if ( v4 >= 0 ) /*0x6bed16*/
      {
        v6 = v4 + 1; /*0x6bed19*/
        do /*0x6bed27*/
        {
          v5 -= 9; /*0x6bed1c*/
          FileTreeNode::Destroy(v5); /*0x6bed21*/
          --v6; /*0x6bed26*/
        }
        while ( v6 ); /*0x6bed27*/
      }
      __3_YAXPAX_Z(v2); /*0x6bed2b*/
    }
    byte_B0BCF4 = 0; /*0x6bed34*/
  }
  PostQuitMessage(0); /*0x6bed3d*/
  Network::ShutdownInterface(v7); /*0x6bed43*/
  WinMainSetup(); /*0x6bed48*/
}



// ==== 0x006BED50  _DynamicVectorClass_K::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_K::Destroy(_DynamicVectorClass_K *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6bed56*/
  this->m_10 = 0; /*0x6bed59*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6bed60*/
  {
    __3_YAXPAX_Z(v2); /*0x6bed66*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6bed6e*/
  }
  BYTE1(this->m_C) = 0; /*0x6bed71*/
  this->m_8 = 0; /*0x6bed74*/
}



// ==== 0x006BED80  _DynamicVectorClass_K::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_K::GetItemIndex(_DynamicVectorClass_K *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6bed80*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6bed95*/
  else
    return 0; /*0x6bed87*/
}



// ==== 0x006BEDA0  _VectorClass_K::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_K::Clear(_VectorClass_K *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6bedaa*/
}



// ==== 0x006BEDB0  COMClassFactory::Register  this=COMClassFactory  sig=csp ====
int __thiscall COMClassFactory::Register(COMClassFactory *this, IID *rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext)
{
  int result; // eax
  HRESULT v6; // esi

  if ( *(_DWORD *)this->__pad_0 ) /*0x6bedb4*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x6bedbd*/
  if ( (dwClsContext & 0x14) == 0 ) /*0x6bedc6*/
    return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)this); /*0x6bee2b*/
  result = CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)&pUnkOuter); /*0x6beddd*/
  if ( result >= 0 ) /*0x6bede5*/
  {
    v6 = OleRun(pUnkOuter); /*0x6bedf2*/
    if ( v6 >= 0 ) /*0x6bedf6*/
      v6 = (*(int (__stdcall **)(LPUNKNOWN, IID *, COMClassFactory *))pUnkOuter->field_0)(pUnkOuter, &riid, this); /*0x6bee07*/
    (*(void (__stdcall **)(LPUNKNOWN))(pUnkOuter->field_0 + 8))(pUnkOuter); /*0x6bee10*/
    return v6; /*0x6bee13*/
  }
  return result; /*0x6bee15*/
}



// ==== 0x006BEE40  ClassFactory_CStream::Construct  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
_DWORD *__thiscall ClassFactory_CStream::Construct(ClassFactory_CStream *this)
{
  this->q010 = 0; /*0x6bee42*/
  *this = (ClassFactory_CStream)&TClassFactory<CStreamClass>::`vftable'; /*0x6bee49*/
  return this; /*0x6bee4f*/
}



// ==== 0x006BEE50  _TClassFactory_VCStreamClass::QueryInterface  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __thiscall VectorClass_K_8::QueryInterface(_TClassFactory_VCStreamClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bee57*/
    return -2147467261; /*0x6bee59*/
  *v4 = 0; /*0x6bee76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bee92*/
    *v4 = a2; /*0x6bee96*/
  if ( !*v4 ) /*0x6bee98*/
    return -2147467262; /*0x6beea0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6beeac*/
  return 0; /*0x6bee5e*/
}



// ==== 0x006BEEC0  _TClassFactory_VCStreamClass::AddRef  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
LONG __thiscall VectorClass_K_8::AddRef(_TClassFactory_VCStreamClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6beece*/
}



// ==== 0x006BEEE0  _TClassFactory_VCStreamClass::Release  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
LONG __thiscall VectorClass_K_8::Release(_TClassFactory_VCStreamClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6beef0*/
  if ( !v1 ) /*0x6beef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6beef7*/
  return v1; /*0x6bef01*/
}



// ==== 0x006BEF10  _TClassFactory_VCStreamClass::ddtor  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __thiscall VectorClass_K_8::ddtor(_TClassFactory_VCStreamClass *this, int a2, int a3, _DWORD *a4)
{
  CStreamClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bef18*/
    return -2147024809; /*0x6bef1b*/
  *v9 = 0; /*0x6bef28*/
  if ( a3 ) /*0x6bef30*/
    return -2147221232; /*0x6bef33*/
  v5 = (CStreamClass *)__2_YAPAXI_Z(0x2Cu); /*0x6bef3e*/
  if ( !v5 ) /*0x6bef48*/
    return -2147024882; /*0x6bef48*/
  v6 = VectorClass_K_8::Constructor(v5); /*0x6bef4c*/
  v7 = v6; /*0x6bef51*/
  if ( !v6 ) /*0x6bef55*/
    return -2147024882; /*0x6bef58*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bef6c*/
  if ( v8 < 0 ) /*0x6bef70*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 56))(v7, 1); /*0x6bef78*/
  return v8; /*0x6bef1a*/
}



// ==== 0x006BEF90  _TClassFactory_VCStreamClass::GetSize  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __thiscall VectorClass_K_8::GetSize(_TClassFactory_VCStreamClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bef9a*/
  if ( v5 ) /*0x6bef9d*/
    v3 = v2 + 1; /*0x6bef9f*/
  else
    v3 = v2 - 1; /*0x6befa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6befa0*/
  return 0; /*0x6befa5*/
}



// ==== 0x006BEFC0  ClassFactory_Wave::Construct  this=?$TClassFactory@VWaveClass@@  sig=csp ====
_DWORD *__thiscall ClassFactory_Wave::Construct(ClassFactory_Wave *this)
{
  this->q010 = 0; /*0x6befc2*/
  *this = (ClassFactory_Wave)&TClassFactory<WaveClass>::`vftable'; /*0x6befc9*/
  return this; /*0x6befcf*/
}



// ==== 0x006BEFD0  _TClassFactory_VWaveClass::QueryInterface  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __thiscall VectorClass_K_14::QueryInterface(_TClassFactory_VWaveClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6befd7*/
    return -2147467261; /*0x6befd9*/
  *v4 = 0; /*0x6beff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf012*/
    *v4 = a2; /*0x6bf016*/
  if ( !*v4 ) /*0x6bf018*/
    return -2147467262; /*0x6bf020*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf02c*/
  return 0; /*0x6befde*/
}



// ==== 0x006BF040  _TClassFactory_VWaveClass::AddRef  this=?$TClassFactory@VWaveClass@@  sig=csp ====
LONG __thiscall VectorClass_K_14::AddRef(_TClassFactory_VWaveClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf04e*/
}



// ==== 0x006BF060  _TClassFactory_VWaveClass::Release  this=?$TClassFactory@VWaveClass@@  sig=csp ====
LONG __thiscall VectorClass_K_14::Release(_TClassFactory_VWaveClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf070*/
  if ( !v1 ) /*0x6bf074*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf077*/
  return v1; /*0x6bf081*/
}



// ==== 0x006BF090  _TClassFactory_VWaveClass::ddtor  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __thiscall VectorClass_K_14::ddtor(_TClassFactory_VWaveClass *this, int a2, int a3, _DWORD *a4)
{
  VoxelAnimClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf098*/
    return -2147024809; /*0x6bf09b*/
  *v9 = 0; /*0x6bf0a8*/
  if ( a3 ) /*0x6bf0b0*/
    return -2147221232; /*0x6bf0b3*/
  v5 = (VoxelAnimClass *)__2_YAPAXI_Z(0x240u); /*0x6bf0c1*/
  if ( !v5 ) /*0x6bf0cb*/
    return -2147024882; /*0x6bf0cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))VoxelAnimClass::Constructor(v5); /*0x6bf0cf*/
  v7 = v6; /*0x6bf0d4*/
  if ( !v6 ) /*0x6bf0d8*/
    return -2147024882; /*0x6bf0db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf0ef*/
  if ( v8 < 0 ) /*0x6bf0f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf0fb*/
  return v8; /*0x6bf09a*/
}



// ==== 0x006BF110  _TClassFactory_VWaveClass::GetSize  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __thiscall VectorClass_K_14::GetSize(_TClassFactory_VWaveClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf11a*/
  if ( v5 ) /*0x6bf11d*/
    v3 = v2 + 1; /*0x6bf11f*/
  else
    v3 = v2 - 1; /*0x6bf128*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf120*/
  return 0; /*0x6bf125*/
}



// ==== 0x006BF140  COMClassFactory::Construct  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_3::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf142*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<TerrainTypeClass>::`vftable'; /*0x6bf149*/
  return this->__pad_0; /*0x6bf14f*/
}



// ==== 0x006BF150  _TClassFactory_VTerrainTypeClass::QueryInterface  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_20::QueryInterface(_TClassFactory_VTerrainTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf157*/
    return -2147467261; /*0x6bf159*/
  *v4 = 0; /*0x6bf176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf192*/
    *v4 = a2; /*0x6bf196*/
  if ( !*v4 ) /*0x6bf198*/
    return -2147467262; /*0x6bf1a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf1ac*/
  return 0; /*0x6bf15e*/
}



// ==== 0x006BF1C0  _TClassFactory_VTerrainTypeClass::AddRef  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_20::AddRef(_TClassFactory_VTerrainTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf1ce*/
}



// ==== 0x006BF1E0  _TClassFactory_VTerrainTypeClass::Release  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_20::Release(_TClassFactory_VTerrainTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf1f0*/
  if ( !v1 ) /*0x6bf1f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf1f7*/
  return v1; /*0x6bf201*/
}



// ==== 0x006BF210  _TClassFactory_VTerrainTypeClass::ddtor  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_20::ddtor(_TClassFactory_VTerrainTypeClass *this, int a2, int a3, _DWORD *a4)
{
  TerrainTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf218*/
    return -2147024809; /*0x6bf21b*/
  *v9 = 0; /*0x6bf228*/
  if ( a3 ) /*0x6bf230*/
    return -2147221232; /*0x6bf233*/
  v5 = (TerrainTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x6bf241*/
  if ( !v5 ) /*0x6bf24b*/
    return -2147024882; /*0x6bf24b*/
  v6 = TerrainTypeClass::TerrainTypeClass(v5, 0); /*0x6bf251*/
  v7 = v6; /*0x6bf256*/
  if ( !v6 ) /*0x6bf25a*/
    return -2147024882; /*0x6bf25d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bf271*/
  if ( v8 < 0 ) /*0x6bf275*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bf27d*/
  return v8; /*0x6bf21a*/
}



// ==== 0x006BF290  _TClassFactory_VTerrainTypeClass::GetSize  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_20::GetSize(_TClassFactory_VTerrainTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf29a*/
  if ( v5 ) /*0x6bf29d*/
    v3 = v2 + 1; /*0x6bf29f*/
  else
    v3 = v2 - 1; /*0x6bf2a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf2a0*/
  return 0; /*0x6bf2a5*/
}



// ==== 0x006BF2C0  COMClassFactory::Construct  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_4::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf2c2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<TerrainClass>::`vftable'; /*0x6bf2c9*/
  return this->__pad_0; /*0x6bf2cf*/
}



// ==== 0x006BF2D0  _TClassFactory_VTerrainClass::QueryInterface  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __thiscall VectorClass_K_26::QueryInterface(_TClassFactory_VTerrainClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf2d7*/
    return -2147467261; /*0x6bf2d9*/
  *v4 = 0; /*0x6bf2f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf312*/
    *v4 = a2; /*0x6bf316*/
  if ( !*v4 ) /*0x6bf318*/
    return -2147467262; /*0x6bf320*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf32c*/
  return 0; /*0x6bf2de*/
}



// ==== 0x006BF340  _TClassFactory_VTerrainClass::AddRef  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
LONG __thiscall VectorClass_K_26::AddRef(_TClassFactory_VTerrainClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf34e*/
}



// ==== 0x006BF360  _TClassFactory_VTerrainClass::Release  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
LONG __thiscall VectorClass_K_26::Release(_TClassFactory_VTerrainClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf370*/
  if ( !v1 ) /*0x6bf374*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf377*/
  return v1; /*0x6bf381*/
}



// ==== 0x006BF390  _TClassFactory_VTerrainClass::ddtor  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __thiscall VectorClass_K_26::ddtor(_TClassFactory_VTerrainClass *this, int a2, int a3, _DWORD *a4)
{
  ObjectClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf398*/
    return -2147024809; /*0x6bf39b*/
  *v9 = 0; /*0x6bf3a8*/
  if ( a3 ) /*0x6bf3b0*/
    return -2147221232; /*0x6bf3b3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0xE0u); /*0x6bf3c1*/
  if ( !v5 ) /*0x6bf3cb*/
    return -2147024882; /*0x6bf3cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ObjectClass::ProcessFoggedState(v5); /*0x6bf3cf*/
  v7 = v6; /*0x6bf3d4*/
  if ( !v6 ) /*0x6bf3d8*/
    return -2147024882; /*0x6bf3db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf3ef*/
  if ( v8 < 0 ) /*0x6bf3f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf3fb*/
  return v8; /*0x6bf39a*/
}



// ==== 0x006BF410  _TClassFactory_VTerrainClass::GetSize  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __thiscall VectorClass_K_26::GetSize(_TClassFactory_VTerrainClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf41a*/
  if ( v5 ) /*0x6bf41d*/
    v3 = v2 + 1; /*0x6bf41f*/
  else
    v3 = v2 - 1; /*0x6bf428*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf420*/
  return 0; /*0x6bf425*/
}



// ==== 0x006BF440  COMClassFactory::Construct  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_5::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf442*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<SuperWeaponTypeClass>::`vftable'; /*0x6bf449*/
  return this->__pad_0; /*0x6bf44f*/
}



// ==== 0x006BF450  _TClassFactory_VSuperWeaponTypeClass::QueryInterface  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_32::QueryInterface(_TClassFactory_VSuperWeaponTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf457*/
    return -2147467261; /*0x6bf459*/
  *v4 = 0; /*0x6bf476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf492*/
    *v4 = a2; /*0x6bf496*/
  if ( !*v4 ) /*0x6bf498*/
    return -2147467262; /*0x6bf4a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf4ac*/
  return 0; /*0x6bf45e*/
}



// ==== 0x006BF4C0  _TClassFactory_VSuperWeaponTypeClass::AddRef  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_32::AddRef(_TClassFactory_VSuperWeaponTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf4ce*/
}



// ==== 0x006BF4E0  _TClassFactory_VSuperWeaponTypeClass::Release  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_32::Release(_TClassFactory_VSuperWeaponTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf4f0*/
  if ( !v1 ) /*0x6bf4f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf4f7*/
  return v1; /*0x6bf501*/
}



// ==== 0x006BF510  _TClassFactory_VSuperWeaponTypeClass::ddtor  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_32::ddtor(_TClassFactory_VSuperWeaponTypeClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf518*/
    return -2147024809; /*0x6bf51b*/
  *v9 = 0; /*0x6bf528*/
  if ( a3 ) /*0x6bf530*/
    return -2147221232; /*0x6bf533*/
  v5 = __2_YAPAXI_Z(0x100u); /*0x6bf541*/
  if ( !v5 ) /*0x6bf54b*/
    return -2147024882; /*0x6bf54b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SuperWeaponTypeClass::SuperWeaponTypeClass(v5, 0); /*0x6bf551*/
  v7 = v6; /*0x6bf556*/
  if ( !v6 ) /*0x6bf55a*/
    return -2147024882; /*0x6bf55d*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf571*/
  if ( v8 < 0 ) /*0x6bf575*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf57d*/
  return v8; /*0x6bf51a*/
}



// ==== 0x006BF590  _TClassFactory_VSuperWeaponTypeClass::GetSize  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_32::GetSize(_TClassFactory_VSuperWeaponTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf59a*/
  if ( v5 ) /*0x6bf59d*/
    v3 = v2 + 1; /*0x6bf59f*/
  else
    v3 = v2 - 1; /*0x6bf5a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf5a0*/
  return 0; /*0x6bf5a5*/
}



// ==== 0x006BF5C0  COMClassFactory::Construct  this=?$TClassFactory@VSuperClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_6::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf5c2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<SuperClass>::`vftable'; /*0x6bf5c9*/
  return this->__pad_0; /*0x6bf5cf*/
}



// ==== 0x006BF5D0  _TClassFactory_VSuperClass::QueryInterface  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __thiscall VectorClass_K_38::QueryInterface(_TClassFactory_VSuperClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf5d7*/
    return -2147467261; /*0x6bf5d9*/
  *v4 = 0; /*0x6bf5f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf612*/
    *v4 = a2; /*0x6bf616*/
  if ( !*v4 ) /*0x6bf618*/
    return -2147467262; /*0x6bf620*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf62c*/
  return 0; /*0x6bf5de*/
}



// ==== 0x006BF640  _TClassFactory_VSuperClass::AddRef  this=?$TClassFactory@VSuperClass@@  sig=csp ====
LONG __thiscall VectorClass_K_38::AddRef(_TClassFactory_VSuperClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf64e*/
}



// ==== 0x006BF660  _TClassFactory_VSuperClass::Release  this=?$TClassFactory@VSuperClass@@  sig=csp ====
LONG __thiscall VectorClass_K_38::Release(_TClassFactory_VSuperClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf670*/
  if ( !v1 ) /*0x6bf674*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf677*/
  return v1; /*0x6bf681*/
}



// ==== 0x006BF690  _TClassFactory_VSuperClass::ddtor  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __thiscall VectorClass_K_38::ddtor(_TClassFactory_VSuperClass *this, int a2, int a3, _DWORD *a4)
{
  SuperClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf698*/
    return -2147024809; /*0x6bf69b*/
  *v9 = 0; /*0x6bf6a8*/
  if ( a3 ) /*0x6bf6b0*/
    return -2147221232; /*0x6bf6b3*/
  v5 = (SuperClass *)__2_YAPAXI_Z(0x80u); /*0x6bf6c1*/
  if ( !v5 ) /*0x6bf6cb*/
    return -2147024882; /*0x6bf6cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SuperClass::Constructor(v5); /*0x6bf6cf*/
  v7 = v6; /*0x6bf6d4*/
  if ( !v6 ) /*0x6bf6d8*/
    return -2147024882; /*0x6bf6db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf6ef*/
  if ( v8 < 0 ) /*0x6bf6f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf6fb*/
  return v8; /*0x6bf69a*/
}



// ==== 0x006BF710  _TClassFactory_VSuperClass::GetSize  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __thiscall VectorClass_K_38::GetSize(_TClassFactory_VSuperClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf71a*/
  if ( v5 ) /*0x6bf71d*/
    v3 = v2 + 1; /*0x6bf71f*/
  else
    v3 = v2 - 1; /*0x6bf728*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf720*/
  return 0; /*0x6bf725*/
}



// ==== 0x006BF740  COMClassFactory::Construct  this=?$TClassFactory@VTactical@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_7::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf742*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<Tactical>::`vftable'; /*0x6bf749*/
  return this->__pad_0; /*0x6bf74f*/
}



// ==== 0x006BF750  _TClassFactory_VTactical::QueryInterface  this=?$TClassFactory@VTactical@@  sig=csp ====
int __thiscall VectorClass_K_44::QueryInterface(_TClassFactory_VTactical *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf757*/
    return -2147467261; /*0x6bf759*/
  *v4 = 0; /*0x6bf776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf792*/
    *v4 = a2; /*0x6bf796*/
  if ( !*v4 ) /*0x6bf798*/
    return -2147467262; /*0x6bf7a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf7ac*/
  return 0; /*0x6bf75e*/
}



// ==== 0x006BF7C0  _TClassFactory_VTactical::AddRef  this=?$TClassFactory@VTactical@@  sig=csp ====
LONG __thiscall VectorClass_K_44::AddRef(_TClassFactory_VTactical *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf7ce*/
}



// ==== 0x006BF7E0  _TClassFactory_VTactical::Release  this=?$TClassFactory@VTactical@@  sig=csp ====
LONG __thiscall VectorClass_K_44::Release(_TClassFactory_VTactical *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf7f0*/
  if ( !v1 ) /*0x6bf7f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf7f7*/
  return v1; /*0x6bf801*/
}



// ==== 0x006BF810  _TClassFactory_VTactical::ddtor  this=?$TClassFactory@VTactical@@  sig=csp ====
int __thiscall VectorClass_K_44::ddtor(_TClassFactory_VTactical *this, int a2, int a3, _DWORD *a4)
{
  Tactical *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf818*/
    return -2147024809; /*0x6bf81b*/
  *v9 = 0; /*0x6bf828*/
  if ( a3 ) /*0x6bf830*/
    return -2147221232; /*0x6bf833*/
  v5 = (Tactical *)__2_YAPAXI_Z(0xE18u); /*0x6bf841*/
  if ( !v5 ) /*0x6bf84b*/
    return -2147024882; /*0x6bf84b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TacticalMap::Construct(v5); /*0x6bf84f*/
  v7 = v6; /*0x6bf854*/
  if ( !v6 ) /*0x6bf858*/
    return -2147024882; /*0x6bf85b*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf86f*/
  if ( v8 < 0 ) /*0x6bf873*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf87b*/
  return v8; /*0x6bf81a*/
}



// ==== 0x006BF890  _TClassFactory_VTactical::GetSize  this=?$TClassFactory@VTactical@@  sig=csp ====
int __thiscall VectorClass_K_44::GetSize(_TClassFactory_VTactical *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf89a*/
  if ( v5 ) /*0x6bf89d*/
    v3 = v2 + 1; /*0x6bf89f*/
  else
    v3 = v2 - 1; /*0x6bf8a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf8a0*/
  return 0; /*0x6bf8a5*/
}



// ==== 0x006BF8C0  COMClassFactory::Construct  this=?$TClassFactory@VCellClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_8::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf8c2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<CellClass>::`vftable'; /*0x6bf8c9*/
  return this->__pad_0; /*0x6bf8cf*/
}



// ==== 0x006BF8D0  _TClassFactory_VCellClass::CreateTClassFactory_CellClass  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CellClass(_TClassFactory_VCellClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf8d7*/
    return -2147467261; /*0x6bf8d9*/
  *v4 = 0; /*0x6bf8f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf912*/
    *v4 = a2; /*0x6bf916*/
  if ( !*v4 ) /*0x6bf918*/
    return -2147467262; /*0x6bf920*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf92c*/
  return 0; /*0x6bf8de*/
}



// ==== 0x006BF940  _TClassFactory_VCellClass::AddRef  this=?$TClassFactory@VCellClass@@  sig=csp ====
LONG __thiscall TClassFactory_CellClass::AddRef(_TClassFactory_VCellClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf94e*/
}



// ==== 0x006BF960  _TClassFactory_VCellClass::GetClassName  this=?$TClassFactory@VCellClass@@  sig=csp ====
LONG __thiscall TClassFactory_CellClass::GetClassName(_TClassFactory_VCellClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf970*/
  if ( !v1 ) /*0x6bf974*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf977*/
  return v1; /*0x6bf981*/
}



// ==== 0x006BF990  _TClassFactory_VCellClass::ddtor  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall TClassFactory_CellClass::ddtor(_TClassFactory_VCellClass *this, int a2, int a3, _DWORD *a4)
{
  CellClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf998*/
    return -2147024809; /*0x6bf99b*/
  *v9 = 0; /*0x6bf9a8*/
  if ( a3 ) /*0x6bf9b0*/
    return -2147221232; /*0x6bf9b3*/
  v5 = (CellClass *)__2_YAPAXI_Z(0x148u); /*0x6bf9c1*/
  if ( !v5 ) /*0x6bf9cb*/
    return -2147024882; /*0x6bf9cb*/
  v6 = CellClass::Construct(v5); /*0x6bf9cf*/
  v7 = v6; /*0x6bf9d4*/
  if ( !v6 ) /*0x6bf9d8*/
    return -2147024882; /*0x6bf9db*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bf9ef*/
  if ( v8 < 0 ) /*0x6bf9f3*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bf9fb*/
  return v8; /*0x6bf99a*/
}



// ==== 0x006BFA10  _TClassFactory_VCellClass::GetSize  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall TClassFactory_CellClass::GetSize(_TClassFactory_VCellClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfa1a*/
  if ( v5 ) /*0x6bfa1d*/
    v3 = v2 + 1; /*0x6bfa1f*/
  else
    v3 = v2 - 1; /*0x6bfa28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfa20*/
  return 0; /*0x6bfa25*/
}



// ==== 0x006BFA40  COMClassFactory::Construct  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_9::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bfa42*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<EMPulseClass>::`vftable'; /*0x6bfa49*/
  return this->__pad_0; /*0x6bfa4f*/
}



// ==== 0x006BFA50  _TClassFactory_VEMPulseClass::CreateTClassFactory_EMPulseClass  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall CreateTClassFactory_EMPulseClass(_TClassFactory_VEMPulseClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfa57*/
    return -2147467261; /*0x6bfa59*/
  *v4 = 0; /*0x6bfa76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfa92*/
    *v4 = a2; /*0x6bfa96*/
  if ( !*v4 ) /*0x6bfa98*/
    return -2147467262; /*0x6bfaa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bfaac*/
  return 0; /*0x6bfa5e*/
}



// ==== 0x006BFAC0  _TClassFactory_VEMPulseClass::AddRef  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
LONG __thiscall TClassFactory_EMPulseClass::AddRef(_TClassFactory_VEMPulseClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bface*/
}



// ==== 0x006BFAE0  _TClassFactory_VEMPulseClass::GetClassName  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
LONG __thiscall TClassFactory_EMPulseClass::GetClassName(_TClassFactory_VEMPulseClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfaf0*/
  if ( !v1 ) /*0x6bfaf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfaf7*/
  return v1; /*0x6bfb01*/
}



// ==== 0x006BFB10  _TClassFactory_VEMPulseClass::ddtor  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall TClassFactory_EMPulseClass::ddtor(_TClassFactory_VEMPulseClass *this, int a2, int a3, _DWORD *a4)
{
  EMPulseClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bfb18*/
    return -2147024809; /*0x6bfb1b*/
  *v9 = 0; /*0x6bfb28*/
  if ( a3 ) /*0x6bfb30*/
    return -2147221232; /*0x6bfb33*/
  v5 = (EMPulseClass *)__2_YAPAXI_Z(0x34u); /*0x6bfb3e*/
  if ( !v5 ) /*0x6bfb48*/
    return -2147024882; /*0x6bfb48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))Helper_4C5370(v5); /*0x6bfb4c*/
  v7 = v6; /*0x6bfb51*/
  if ( !v6 ) /*0x6bfb55*/
    return -2147024882; /*0x6bfb58*/
  v8 = (**v6)(v6, a4, v9); /*0x6bfb6c*/
  if ( v8 < 0 ) /*0x6bfb70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bfb78*/
  return v8; /*0x6bfb1a*/
}



// ==== 0x006BFB90  _TClassFactory_VEMPulseClass::GetSize  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall TClassFactory_EMPulseClass::GetSize(_TClassFactory_VEMPulseClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfb9a*/
  if ( v5 ) /*0x6bfb9d*/
    v3 = v2 + 1; /*0x6bfb9f*/
  else
    v3 = v2 - 1; /*0x6bfba8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfba0*/
  return 0; /*0x6bfba5*/
}



// ==== 0x006BFBC0  COMClassFactory::Construct  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_10::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bfbc2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<LightSourceClass>::`vftable'; /*0x6bfbc9*/
  return this->__pad_0; /*0x6bfbcf*/
}



// ==== 0x006BFBD0  _TClassFactory_VLightSourceClass::CreateTClassFactory_LightSourceClass  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall CreateTClassFactory_LightSourceClass(_TClassFactory_VLightSourceClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfbd7*/
    return -2147467261; /*0x6bfbd9*/
  *v4 = 0; /*0x6bfbf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfc12*/
    *v4 = a2; /*0x6bfc16*/
  if ( !*v4 ) /*0x6bfc18*/
    return -2147467262; /*0x6bfc20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bfc2c*/
  return 0; /*0x6bfbde*/
}



// ==== 0x006BFC40  _TClassFactory_VLightSourceClass::AddRef  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
LONG __thiscall TClassFactory_LightSourceClass::AddRef(_TClassFactory_VLightSourceClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfc4e*/
}



// ==== 0x006BFC60  _TClassFactory_VLightSourceClass::GetClassName  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
LONG __thiscall TClassFactory_LightSourceClass::GetClassName(_TClassFactory_VLightSourceClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfc70*/
  if ( !v1 ) /*0x6bfc74*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfc77*/
  return v1; /*0x6bfc81*/
}



// ==== 0x006BFC90  _TClassFactory_VLightSourceClass::ddtor  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall TClassFactory_LightSourceClass::ddtor(
        _TClassFactory_VLightSourceClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LightSourceClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bfc98*/
    return -2147024809; /*0x6bfc9b*/
  *v9 = 0; /*0x6bfca8*/
  if ( a3 ) /*0x6bfcb0*/
    return -2147221232; /*0x6bfcb3*/
  v5 = (LightSourceClass *)__2_YAPAXI_Z(0x4Cu); /*0x6bfcbe*/
  if ( !v5 ) /*0x6bfcc8*/
    return -2147024882; /*0x6bfcc8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LightSourceClass::Constructor(v5); /*0x6bfccc*/
  v7 = v6; /*0x6bfcd1*/
  if ( !v6 ) /*0x6bfcd5*/
    return -2147024882; /*0x6bfcd8*/
  v8 = (**v6)(v6, a4, v9); /*0x6bfcec*/
  if ( v8 < 0 ) /*0x6bfcf0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bfcf8*/
  return v8; /*0x6bfc9a*/
}



// ==== 0x006BFD10  _TClassFactory_VLightSourceClass::GetSize  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall TClassFactory_LightSourceClass::GetSize(_TClassFactory_VLightSourceClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfd1a*/
  if ( v5 ) /*0x6bfd1d*/
    v3 = v2 + 1; /*0x6bfd1f*/
  else
    v3 = v2 - 1; /*0x6bfd28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfd20*/
  return 0; /*0x6bfd25*/
}



// ==== 0x006BFD40  ObjectClass::WinMain_Helper_6BFD40  this=?$TClassFactory@VSideClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6BFD40(ObjectClass *this)
{
  this->? = 0; /*0x6bfd42*/
  this->AbstractClass = &TClassFactory<SideClass>::`vftable'; /*0x6bfd49*/
  return &this->AbstractClass; /*0x6bfd4f*/
}



// ==== 0x006BFD50  _TClassFactory_VSideClass::CreateTClassFactory_SideClass  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SideClass(_TClassFactory_VSideClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfd57*/
    return -2147467261; /*0x6bfd59*/
  *v4 = 0; /*0x6bfd76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfd92*/
    *v4 = a2; /*0x6bfd96*/
  if ( !*v4 ) /*0x6bfd98*/
    return -2147467262; /*0x6bfda0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bfdac*/
  return 0; /*0x6bfd5e*/
}



// ==== 0x006BFDC0  _TClassFactory_VSideClass::AddRef  this=?$TClassFactory@VSideClass@@  sig=csp ====
LONG __thiscall TClassFactory_SideClass::AddRef(_TClassFactory_VSideClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfdce*/
}



// ==== 0x006BFDE0  _TClassFactory_VSideClass::GetClassName  this=?$TClassFactory@VSideClass@@  sig=csp ====
LONG __thiscall TClassFactory_SideClass::GetClassName(_TClassFactory_VSideClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfdf0*/
  if ( !v1 ) /*0x6bfdf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfdf7*/
  return v1; /*0x6bfe01*/
}



// ==== 0x006BFE10  _TClassFactory_VSideClass::ddtor  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall TClassFactory_SideClass::ddtor(_TClassFactory_VSideClass *this, int a2, int a3, _DWORD *a4)
{
  SideClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bfe18*/
    return -2147024809; /*0x6bfe1b*/
  *v9 = 0; /*0x6bfe28*/
  if ( a3 ) /*0x6bfe30*/
    return -2147221232; /*0x6bfe33*/
  v5 = (SideClass *)__2_YAPAXI_Z(0xB4u); /*0x6bfe41*/
  if ( !v5 ) /*0x6bfe4b*/
    return -2147024882; /*0x6bfe4b*/
  v6 = SideClass::Construct(v5, 0); /*0x6bfe51*/
  v7 = v6; /*0x6bfe56*/
  if ( !v6 ) /*0x6bfe5a*/
    return -2147024882; /*0x6bfe5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bfe71*/
  if ( v8 < 0 ) /*0x6bfe75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bfe7d*/
  return v8; /*0x6bfe1a*/
}



// ==== 0x006BFE90  _TClassFactory_VSideClass::GetSize  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall TClassFactory_SideClass::GetSize(_TClassFactory_VSideClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfe9a*/
  if ( v5 ) /*0x6bfe9d*/
    v3 = v2 + 1; /*0x6bfe9f*/
  else
    v3 = v2 - 1; /*0x6bfea8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfea0*/
  return 0; /*0x6bfea5*/
}



// ==== 0x006BFEC0  ObjectClass::WinMain_Helper_6BFEC0  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6BFEC0(ObjectClass *this)
{
  this->? = 0; /*0x6bfec2*/
  this->AbstractClass = &TClassFactory<TiberiumClass>::`vftable'; /*0x6bfec9*/
  return &this->AbstractClass; /*0x6bfecf*/
}



// ==== 0x006BFED0  _TClassFactory_VTiberiumClass::CreateTClassFactory_TiberiumClass  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TiberiumClass(_TClassFactory_VTiberiumClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfed7*/
    return -2147467261; /*0x6bfed9*/
  *v4 = 0; /*0x6bfef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bff12*/
    *v4 = a2; /*0x6bff16*/
  if ( !*v4 ) /*0x6bff18*/
    return -2147467262; /*0x6bff20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bff2c*/
  return 0; /*0x6bfede*/
}



// ==== 0x006BFF40  _TClassFactory_VTiberiumClass::AddRef  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
LONG __thiscall TClassFactory_TiberiumClass::AddRef(_TClassFactory_VTiberiumClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bff4e*/
}



// ==== 0x006BFF60  _TClassFactory_VTiberiumClass::GetClassName  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
LONG __thiscall TClassFactory_TiberiumClass::GetClassName(_TClassFactory_VTiberiumClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bff70*/
  if ( !v1 ) /*0x6bff74*/
    __3_YAXPAX_Z((void *)Block); /*0x6bff77*/
  return v1; /*0x6bff81*/
}



// ==== 0x006BFF90  _TClassFactory_VTiberiumClass::ddtor  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall TClassFactory_TiberiumClass::ddtor(_TClassFactory_VTiberiumClass *this, int a2, int a3, _DWORD *a4)
{
  TiberiumClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bff98*/
    return -2147024809; /*0x6bff9b*/
  *v9 = 0; /*0x6bffa8*/
  if ( a3 ) /*0x6bffb0*/
    return -2147221232; /*0x6bffb3*/
  v5 = (TiberiumClass *)__2_YAPAXI_Z(0x128u); /*0x6bffc1*/
  if ( !v5 ) /*0x6bffcb*/
    return -2147024882; /*0x6bffcb*/
  v6 = TiberiumClass::TiberiumClass(v5, 0); /*0x6bffd1*/
  v7 = v6; /*0x6bffd6*/
  if ( !v6 ) /*0x6bffda*/
    return -2147024882; /*0x6bffdd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bfff1*/
  if ( v8 < 0 ) /*0x6bfff5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bfffd*/
  return v8; /*0x6bff9a*/
}



// ==== 0x006B0300  BuildingClass::FindPlacementCells2  this=TOP  sig=csp ====
_DWORD *__thiscall BuildingClass::FindPlacementCells2(BuildingClass *this, _DWORD *a2, int a3)
{
  int occupant; // ecx
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

  occupant = this->?; /*0x6b0308*/
  if ( occupant && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 6 )
  {
    v5 = this->?; /*0x6b0319*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(this->?) == 6 ? v5 : 0;
    else
      v6 = 0; /*0x6b0320*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b033c*/
    v8 = this->?; /*0x6b0341*/
    v9 = FoundationWidth; /*0x6b0344*/
    if ( v8 )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 44))(this->?); /*0x6b0360*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v11 == 6 ? v8 + 0x520 : 1312), 0);
    }
    else
    {
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(MEMORY[0x520], 0); /*0x6b0358*/
    }
  }
  else if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)this->? + 132))(this->?) + 1028) ) /*0x6b038a*/
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this->? + 132))(this->?); /*0x6b0399*/
    v9 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v12 + 1028)); /*0x6b03af*/
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this->? + 132))(this->?); /*0x6b03b3*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v13 + 1028), 0); /*0x6b03c4*/
  }
  else
  {
    v9 = 1; /*0x6b03c8*/
    FoundationHeight = 1; /*0x6b03cd*/
  }
  v14 = (__int16 *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->? + 440))(this->?, &v19); /*0x6b03f4*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v14, 0, 0); /*0x6b0400*/
  v16 = *LayerClass::Pathfinding_Find( /*0x6b041c*/
           (Type *)&stru_87F5F0.__pad_58[416],
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
  if ( v16 == dword_B0B5B8 ) /*0x6b042f*/
  {
    *a2 = dword_B0B5B8; /*0x6b0441*/
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



// ==== 0x006B0490  ObjectClass::Event_Process_6B0490  this=TOP  sig=csp ====
int *__thiscall Event_Process_6B0490(ObjectClass *this)
{
  int i; // esi
  int *result; // eax
  int v4; // ecx

  for ( i = this->ambientSoundController[3] - 1; i >= 0; --i ) /*0x6b0498*/
  {
    result = *(int **)(this->ambientSoundController[0] + 4 * i); /*0x6b049d*/
    v4 = *result; /*0x6b04a3*/
    if ( result[1] != 6 ) /*0x6b04a8*/
    {
      if ( v4 ) /*0x6b04ac*/
        result = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b04b0*/
    }
  }
  return result; /*0x6b04b9*/
}



// ==== 0x006B04C0  FactoryClass::PlaceExitUnits  this=TOP  sig=csp ====
int __thiscall FactoryClass::PlaceExitUnits(FactoryClass *this)
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
  __int16 v25[2]; // [esp+28h] [ebp-3Ch] BYREF
  int v26; // [esp+2Ch] [ebp-38h] BYREF
  int v27; // [esp+30h] [ebp-34h] BYREF
  int v28; // [esp+34h] [ebp-30h] BYREF
  int v29; // [esp+38h] [ebp-2Ch]
  int v30; // [esp+3Ch] [ebp-28h]
  char v31[12]; // [esp+40h] [ebp-24h] BYREF
  int v32[3]; // [esp+4Ch] [ebp-18h] BYREF
  char v33[12]; // [esp+58h] [ebp-Ch] BYREF

  result = *(_DWORD *)&this->__pad_42[6] - 1; /*0x6b04c9*/
  for ( i = result; i >= 0; --i )
  {
    v3 = (int **)*((_DWORD *)&this->object->RadioClass + result); /*0x6b04da*/
    v4 = *v3; /*0x6b04e0*/
    v24 = *v3; /*0x6b04e5*/
    if ( !v3[1] )
    {
      v5 = this->production[0]; /*0x6b04ef*/
      if ( v5 && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 )
      {
        v6 = this->production[0]; /*0x6b0504*/
        if ( v6 )
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(this->production[0]) == 6 ? v6 : 0;
        else
          v7 = 0; /*0x6b050b*/
        v8 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v7 + 1312)) - 1; /*0x6b0536*/
        v9 = BuildingTypeClass::GetFoundationHeight(*(int **)(v7 + 1312), 0) / 2; /*0x6b054d*/
        v10 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->production[0] + 440))( /*0x6b054f*/
                         this->production[0],
                         &v26);
        v11 = v9 + v10[1]; /*0x6b055f*/
        v4 = v24; /*0x6b0562*/
        LOWORD(v21) = v8 + *v10; /*0x6b0566*/
        HIWORD(v21) = v11; /*0x6b056b*/
        v12 = v21; /*0x6b0570*/
        v22 = v11; /*0x6b0574*/
      }
      else
      {
        v12 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->production[0] + 440))( /*0x6b058a*/
                           this->production[0],
                           &v27);
        v22 = HIWORD(v12); /*0x6b058c*/
      }
      *(_DWORD *)v25 = v12; /*0x6b0597*/
      if ( __PAIR32__(v22, v12) != dword_B0B5B8 ) /*0x6b059b*/
      {
        v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6b05b9*/
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
        if ( (v16 != dword_B0B5D8 || v17 != dword_B0B5DC || v18 != dword_B0B5E0) /*0x6b063a*/
          && (v16 != dword_B0B618 || v17 != dword_B0B61C || v18 != dword_B0B620) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(*v4 + 216))(v4, &v28, 0) ) /*0x6b0647*/
          {
            v19 = *v4; /*0x6b0654*/
            v20 = (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)this->production[0] + 72))( /*0x6b0661*/
                    this->production[0],
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
_DWORD *__thiscall BuildingClass::GetRallyPointCoord(BuildingClass *this, _DWORD *a2)
{
  int occupant; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // edi
  int v7; // esi
  _WORD *v8; // eax
  int v10; // [esp+4h] [ebp-8h]
  _BYTE v11[4]; // [esp+8h] [ebp-4h] BYREF

  occupant = this->?; /*0x6b0696*/
  if ( occupant && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 6 )
  {
    v4 = this->?; /*0x6b06ad*/
    if ( v4 )
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(this->?) == 6 ? v4 : 0;
    else
      v5 = 0; /*0x6b06b4*/
    v6 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v5 + 1312)) - 1; /*0x6b06df*/
    v7 = BuildingTypeClass::GetFoundationHeight(*(int **)(v5 + 1312), 0) / 2; /*0x6b06f6*/
    v8 = (_WORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v11); /*0x6b06f8*/
    HIWORD(v10) = v7 + v8[1]; /*0x6b0708*/
    LOWORD(v10) = *v8 + v6; /*0x6b0711*/
    *a2 = v10; /*0x6b071c*/
    return a2; /*0x6b070d*/
  }
  else
  {
    *a2 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->? + 440))(this->?, v11); /*0x6b073c*/
    return a2; /*0x6b0737*/
  }
}



// ==== 0x006B0750  FactoryClass::GetBridgeCell  this=FactoryClass  sig=csp ====
_DWORD *__thiscall FactoryClass::GetBridgeCell(FactoryClass *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ebx
  int v6; // esi
  __int16 FoundationWidth; // ax
  int *v8; // ecx
  int FoundationHeight; // eax
  int v10; // ecx
  CellStruct *v11; // eax
  int v12; // eax
  Cell *v13; // eax
  bool v14; // zf
  _DWORD *result; // eax
  int v16; // [esp+4h] [ebp-18h] BYREF
  __int16 v17[2]; // [esp+8h] [ebp-14h] BYREF
  int v18; // [esp+Ch] [ebp-10h] BYREF
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h] BYREF

  v3 = this->production[0]; /*0x6b0756*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6 )
  {
    v4 = this->production[0]; /*0x6b076f*/
    if ( v4 && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) == 6 )
    {
      v5 = this->production[0]; /*0x6b0781*/
      if ( v5 )
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 6 ? v5 : 0;
      else
        v6 = 0; /*0x6b0789*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b07a7*/
      v8 = *(int **)(v6 + 1312); /*0x6b07ac*/
      LOWORD(v16) = FoundationWidth - 1; /*0x6b07b5*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x6b07ba*/
      v10 = this->production[0]; /*0x6b07c0*/
      HIWORD(v16) = FoundationHeight / 2; /*0x6b07c7*/
      v11 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 440))(v10, &v19); /*0x6b07dd*/
      v12 = *CellStruct::Add(v11, &v18, &v16); /*0x6b07ea*/
      v20 = v12; /*0x6b07ed*/
    }
    else
    {
      v12 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->production[0] + 440))( /*0x6b0804*/
                         this->production[0],
                         &v20);
      v20 = v12; /*0x6b0806*/
    }
    LOWORD(v16) = v12; /*0x6b080e*/
    HIWORD(v16) = HIWORD(v20) - 1; /*0x6b0818*/
    *(_DWORD *)v17 = v16; /*0x6b0827*/
    v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x6b082b*/
    v14 = Cell::IsBridge(v13) == (_DWORD *)this->production[0]; /*0x6b083a*/
    result = a2; /*0x6b083c*/
    if ( v14 ) /*0x6b0840*/
      *a2 = *(_DWORD *)v17; /*0x6b0847*/
    else
      *a2 = dword_B0B5B8; /*0x6b0856*/
  }
  else
  {
    *a2 = dword_B0B5B8; /*0x6b0869*/
    return a2; /*0x6b085e*/
  }
  return result; /*0x6b0846*/
}



// ==== 0x006B0880  BuildingClass::CheckBridge  this=BuildingClass  sig=csp ====
bool __thiscall BuildingClass::CheckBridge(BuildingClass *this, int a2, void *a3)
{
  int occupant; // ecx
  int v5; // ebx
  int v6; // esi
  __int16 FoundationWidth; // ax
  int *v8; // ecx
  int FoundationHeight; // eax
  int v10; // ecx
  CellStruct *v11; // eax
  int v12; // eax
  int v13; // ecx
  Cell *v14; // eax
  bool v15; // zf
  int v16; // eax
  int v18; // eax
  _DWORD **i; // ecx
  __int16 v20[2]; // [esp+8h] [ebp-18h] BYREF
  __int16 v21[2]; // [esp+Ch] [ebp-14h] BYREF
  int v22; // [esp+10h] [ebp-10h] BYREF
  __int16 v23[2]; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+18h] [ebp-8h] BYREF
  int v25; // [esp+1Ch] [ebp-4h] BYREF

  occupant = this->?; /*0x6b0887*/
  if ( occupant && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 6 )
  {
    v5 = this->?; /*0x6b0899*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(this->?) == 6 ? v5 : 0;
    else
      v6 = 0; /*0x6b08a0*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b08be*/
    v8 = *(int **)(v6 + 1312); /*0x6b08c3*/
    v20[0] = FoundationWidth - 1; /*0x6b08cc*/
    FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x6b08d1*/
    v10 = this->?; /*0x6b08d7*/
    v20[1] = FoundationHeight / 2; /*0x6b08de*/
    v11 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v10 + 440))(v10, &v24); /*0x6b08f4*/
    v12 = *CellStruct::Add(v11, &v22, v20); /*0x6b0901*/
  }
  else
  {
    v12 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this->? + 440))(this->?, &v25); /*0x6b0916*/
  }
  v13 = this->?; /*0x6b0918*/
  *(_DWORD *)v23 = v12; /*0x6b091b*/
  if ( !v13 /*0x6b0985*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 44))(v13) != 6
    || (*(_DWORD *)v20 = *BuildingClass::GetRallyPointCoord(this, &v25),
        v22 = -65536,
        *(_DWORD *)v20 = *CellStruct::Add((CellStruct *)v20, &v24, &v22),
        v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20),
        v15 = Cell::IsBridge(v14) == (_DWORD *)this->?,
        v16 = *(_DWORD *)v20,
        !v15) )
  {
    v16 = dword_B0B5B8; /*0x6b0987*/
  }
  *(_DWORD *)v21 = v16; /*0x6b098c*/
  if ( a3 != CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v23) /*0x6b09d4*/
    && (*(_DWORD *)v21 == dword_B0B5B8 || a3 != CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21)) )
  {
    return 0; /*0x6b09d7*/
  }
  v18 = this->?[3] - 1; /*0x6b09e3*/
  if ( v18 < 0 ) /*0x6b09e4*/
    return 0; /*0x6b09e4*/
  for ( i = (_DWORD **)(this->?[0] + 4 * v18); **i != a2; --i ) /*0x6b09ed*/
  {
    if ( --v18 < 0 ) /*0x6b09fc*/
      return 0; /*0x6b0a05*/
  }
  return *i != 0; /*0x6b0a17*/
}



// ==== 0x006B0A20  SlaveManagerClass::LostSlave  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::LostSlave(SlaveManagerClass *this, int a2)
{
  int result; // eax
  int slaveVectorCount; // esi
  _DWORD **i; // edx
  _DWORD *v5; // eax
  int slaveType; // ecx
  int v7; // [esp+10h] [ebp-8h]

  result = *(_DWORD *)this->__pad_48 - 1; /*0x6b0a26*/
  if ( result >= 0 ) /*0x6b0a2a*/
  {
    slaveVectorCount = this->slaveVectorCount; /*0x6b0a2c*/
    for ( i = (_DWORD **)(slaveVectorCount + 4 * result); **i != a2; --i ) /*0x6b0a33*/
    {
      if ( --result < 0 ) /*0x6b0a42*/
        return result; /*0x6b0a42*/
    }
    v5 = *(_DWORD **)(slaveVectorCount + 4 * result); /*0x6b0a4d*/
    if ( *v5 ) /*0x6b0a50*/
      *(_DWORD *)(*v5 + 732) = 0; /*0x6b0a56*/
    *v5 = 0; /*0x6b0a60*/
    v5[1] = 6; /*0x6b0a66*/
    slaveType = this->slaveType; /*0x6b0a73*/
    result = (int)(v5 + 2); /*0x6b0a76*/
    *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0a79*/
    *(_DWORD *)(result + 4) = v7; /*0x6b0a7f*/
    *(_DWORD *)(result + 8) = slaveType; /*0x6b0a82*/
  }
  return result; /*0x6b0a44*/
}



// ==== 0x006B0A90  ObjectClass::method_6B0A90  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6B0A90(ObjectClass *this, int a2)
{
  _DWORD *v2; // eax
  ObjectClass *nextObject; // ecx
  _DWORD *result; // eax
  int v5; // [esp+4h] [ebp-8h]

  v2 = *(_DWORD **)(this->ambientSoundController[0] + 4 * a2); /*0x6b0a9a*/
  if ( *v2 ) /*0x6b0a9d*/
    *(_DWORD *)(*v2 + 732) = 0; /*0x6b0aa3*/
  *v2 = 0; /*0x6b0aad*/
  v2[1] = 6; /*0x6b0ab3*/
  nextObject = this->nextObject; /*0x6b0ac0*/
  result = v2 + 2; /*0x6b0ac3*/
  *result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0ac6*/
  result[1] = v5; /*0x6b0acc*/
  result[2] = nextObject; /*0x6b0acf*/
  return result; /*0x6b0ad2*/
}



// ==== 0x006B0AE0  TechnoClass::MutateAll  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::MutateAll(TechnoClass *this, int a2, int a3)
{
  TechnoClass *v3; // ebx
  int result; // eax
  int nextArrayIndex; // esi
  int v6; // ecx
  char *vtable3; // edx
  int *v8; // edi
  int v9; // ebp
  int v10; // ebx
  int *v11; // esi
  char v12; // al
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // edi
  int v16; // [esp+18h] [ebp-14h]
  _DWORD v18[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = this; /*0x6b0ae4*/
  result = this->?; /*0x6b0aea*/
  if ( result ) /*0x6b0aef*/
  {
    nextArrayIndex = stru_A80220.?; /*0x6b0af7*/
    v16 = 0; /*0x6b0b03*/
    result = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x6b0b0b*/
    v6 = 0; /*0x6b0b10*/
    if ( nextArrayIndex > 0 ) /*0x6b0b14*/
    {
      vtable3 = (char *)stru_A80220.?; /*0x6b0b1c*/
      while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)vtable3 + 52) + 188) != result ) /*0x6b0b29*/
      {
        ++v6; /*0x6b0b2b*/
        vtable3 += 4; /*0x6b0b2c*/
        if ( v6 >= nextArrayIndex ) /*0x6b0b31*/
          goto LABEL_8; /*0x6b0b31*/
      }
      result = *((_DWORD *)stru_A80220.? + v6); /*0x6b0b35*/
      v16 = result; /*0x6b0b38*/
    }
LABEL_8:
    v8 = 0; /*0x6b0b3c*/
    v9 = v3->?[3] - 1; /*0x6b0b41*/
    if ( v9 >= 0 ) /*0x6b0b42*/
    {
      v10 = a2; /*0x6b0b48*/
      while ( 1 ) /*0x6b0b53*/
      {
        result = *(_DWORD *)(this->?[0] + 4 * v9); /*0x6b0b53*/
        v11 = *(int **)result; /*0x6b0b56*/
        if ( *(_DWORD *)result && byte_A8E9A0 ) /*0x6b0b67*/
        {
          v12 = *((_BYTE *)v11 + 129); /*0x6b0b6d*/
          v11[183] = 0; /*0x6b0b73*/
          if ( v12 ) /*0x6b0b7f*/
          {
            (*(void (__thiscall **)(int *, int))(*v11 + 224))(v11, v10); /*0x6b0b86*/
            result = (*(int (__thiscall **)(int *))(*v11 + 248))(v11); /*0x6b0b90*/
          }
          else
          {
            if ( v10 ) /*0x6b0b9a*/
            {
              v13 = *(_DWORD *)(v10 + 540); /*0x6b0b9c*/
LABEL_18:
              (*(void (__thiscall **)(int *, int, int))(*v11 + 980))(v11, v13, 1); /*0x6b0bb4*/
              (*(void (__thiscall **)(int *))(*v11 + 976))(v11); /*0x6b0bc5*/
              result = (*(int (__thiscall **)(int *, int))(*v11 + 904))(v11, 1); /*0x6b0bd1*/
              if ( !v8 ) /*0x6b0bd9*/
                v8 = v11; /*0x6b0bdb*/
              goto LABEL_21; /*0x6b0bdd*/
            }
            v13 = a3; /*0x6b0ba4*/
            if ( a3 ) /*0x6b0baa*/
              goto LABEL_18; /*0x6b0baa*/
            v13 = v16; /*0x6b0bac*/
            if ( v16 ) /*0x6b0bb2*/
              goto LABEL_18; /*0x6b0bb2*/
            v14 = *v11; /*0x6b0be2*/
            a2 = v11[27]; /*0x6b0be4*/
            result = (*(int (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v14 + 364))( /*0x6b0c05*/
                       v11,
                       &a2,
                       0,
                       *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                       0,
                       0,
                       0,
                       0);
          }
        }
LABEL_21:
        if ( --v9 < 0 ) /*0x6b0c0c*/
        {
          v3 = this; /*0x6b0c12*/
          break; /*0x6b0c12*/
        }
      }
    }
    LOBYTE(result) = byte_A8E9A0; /*0x6b0c16*/
    if ( byte_A8E9A0 ) /*0x6b0c1d*/
    {
      if ( v8 ) /*0x6b0c21*/
      {
        result = dword_A8E7AC; /*0x6b0c23*/
        if ( !dword_A8E7AC ) /*0x6b0c2a*/
        {
          result = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x6b0c2c*/
          if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 564) != -1 ) /*0x6b0c38*/
          {
            v15 = v8 + 39; /*0x6b0c3a*/
            v18[0] = *v15; /*0x6b0c44*/
            v18[1] = v15[1]; /*0x6b0c4b*/
            v18[2] = v15[2]; /*0x6b0c56*/
            result = (int)StartAudioControllerAt( /*0x6b0c60*/
                            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 564),
                            v18,
                            0);
          }
        }
      }
    }
    v3->? = 0; /*0x6b0c67*/
  }
  return result; /*0x6b0c6f*/
}



// ==== 0x006B0C80  FactoryClass::ResetProductionTimers  this=FactoryClass  sig=csp ====
wchar_t *__thiscall FactoryClass::ResetProductionTimers(FactoryClass *this)
{
  wchar_t *result; // eax
  int i; // esi
  int v4; // ecx

  *(_DWORD *)&this->__pad_42[26] = 0; /*0x6b0c84*/
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6b0c8b*/
  this->balance = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0c90*/
  for ( i = *(_DWORD *)&this->__pad_42[6] - 1; i >= 0; --i ) /*0x6b0c97*/
  {
    result = (wchar_t *)*((_DWORD *)&this->object->RadioClass + i); /*0x6b0c9c*/
    v4 = *(_DWORD *)result; /*0x6b0ca2*/
    if ( *((_DWORD *)result + 1) != 6 ) /*0x6b0ca7*/
    {
      if ( v4 ) /*0x6b0cab*/
        result = (wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 976))(v4); /*0x6b0caf*/
    }
  }
  return result; /*0x6b0cb8*/
}



// ==== 0x006B0CC0  BuildingClass::InitBuildLimit  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::InitBuildLimit(BuildingClass *this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = (int *)this->?[3]; /*0x6b0cc4*/
  if ( !result ) /*0x6b0cc9*/
  {
    this->?[3] = 1; /*0x6b0ccb*/
    this->?[4] = 0x7FFFFFFF; /*0x6b0cd2*/
    for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0cdd*/
    {
      result = *(int **)(this->?[0] + 4 * i); /*0x6b0ce2*/
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
int *__thiscall TechnoClass::RefreshDeployOccupierState(TechnoClass *this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = (int *)this->?[3]; /*0x6b0d14*/
  if ( !result ) /*0x6b0d19*/
  {
    this->?[3] = 4; /*0x6b0d1b*/
    this->?[4] = 0x7FFFFFFF; /*0x6b0d22*/
    for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0d2d*/
    {
      result = *(int **)(this->?[0] + 4 * i); /*0x6b0d32*/
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



// ==== 0x006B0D60  BuildingClass::RefreshOccupierCache  this=BuildingClass  sig=csp ====
int *__thiscall BuildingClass::RefreshOccupierCache(BuildingClass *this)
{
  int *result; // eax
  int i; // edi
  int v4; // ecx

  result = (int *)this->?[3]; /*0x6b0d64*/
  if ( !result ) /*0x6b0d69*/
  {
    this->?[3] = 4; /*0x6b0d6b*/
    this->?[4] = 0x7FFFFFFF; /*0x6b0d72*/
    for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0d7d*/
    {
      result = *(int **)(this->?[0] + 4 * i); /*0x6b0d82*/
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



// ==== 0x006B0DB0  BuildingClass::ProcessEnterUnit  this=BuildingClass  sig=csp ====
_DWORD *__thiscall BuildingClass::ProcessEnterUnit(BuildingClass *this)
{
  int occupant; // ecx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  _DWORD *result; // eax
  int v10; // edi
  void *v11; // eax
  int i; // edi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // eax
  int *v17; // eax
  void *v18; // eax
  int j; // edi
  int v20; // ecx
  __int16 v21[2]; // [esp+Ch] [ebp-14h] BYREF
  int v22; // [esp+10h] [ebp-10h] BYREF
  _BYTE v23[12]; // [esp+14h] [ebp-Ch] BYREF

  occupant = this->?; /*0x6b0db8*/
  if ( occupant
    && (*(int (__thiscall **)(int))(*(_DWORD *)occupant + 44))(occupant) == 1
    && ((v3 = this->?) != 0 ? (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(this->?) == 1 ? v3 : 0) : (v4 = 0),
        *(_DWORD *)(v4 + 1444)) )
  {
    v5 = this->?; /*0x6b0dfa*/
    if ( v5 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(this->?) == 1 ? v5 : 0;
    else
      v6 = 0; /*0x6b0e01*/
    v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v6 + 1444) + 72))(*(_DWORD *)(v6 + 1444), v23); /*0x6b0e24*/
    v8 = (int *)CellStruct::Set((CellStruct *)&v22, *v7 / 256, v7[1] / 256); /*0x6b0e4c*/
    *(_DWORD *)v21 = *BuildingClass::FindPlacementCells2(this, &v22, *v8); /*0x6b0e69*/
    if ( *(_DWORD *)v21 == dword_B0B5B8 ) /*0x6b0e6d*/
    {
      this->?[3] = 0; /*0x6b0e7d*/
      this->?[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0e8a*/
      return (*(_DWORD *(__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->? + 488))(this->?, 5, 0); /*0x6b0e96*/
    }
    else
    {
      v10 = *(_DWORD *)this->?; /*0x6b0ead*/
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6b0eb4*/
      (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(this->?, v11, 1); /*0x6b0ebd*/
      result = (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->? + 488))(this->?, 2, 0); /*0x6b0ecc*/
      this->?[3] = 2; /*0x6b0ed2*/
      this->?[4] = 0x7FFFFFFF; /*0x6b0ed9*/
      for ( i = this->?[3] - 1; i >= 0; --i ) /*0x6b0ee4*/
      {
        result = *(_DWORD **)(this->?[0] + 4 * i); /*0x6b0ef2*/
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
    v14 = this->?; /*0x6b0f14*/
    if ( v14 && (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 44))(v14) == 6 && (v15 = *(_DWORD *)(this->? + 536)) != 0 ) /*0x6b0f3c*/
    {
      v16 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v23); /*0x6b0f49*/
      v17 = (int *)CellStruct::Set((CellStruct *)&v22, *v16 / 256, v16[1] / 256); /*0x6b0f71*/
      result = (_DWORD *)*BuildingClass::FindPlacementCells2(this, &v22, *v17); /*0x6b0f85*/
      *(_DWORD *)v21 = result; /*0x6b0f8e*/
      if ( result != (_DWORD *)dword_B0B5B8 ) /*0x6b0f92*/
      {
        v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6b0fac*/
        result = (_DWORD *)TechnoClass::SetFocus((TechnoClass *)this->?, (int)v18); /*0x6b0fb5*/
        this->?[3] = 6; /*0x6b0fba*/
        this->?[4] = 0x7FFFFFFF; /*0x6b0fbd*/
        for ( j = this->?[3] - 1; j >= 0; --j ) /*0x6b0fc8*/
        {
          result = *(_DWORD **)(this->?[0] + 4 * j); /*0x6b0fcd*/
          v20 = *result; /*0x6b0fd3*/
          if ( result[1] != 6 && v20 ) /*0x6b0fdb*/
            result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v20 + 976))(v20); /*0x6b0fdf*/
        }
      }
    }
    else
    {
      result = (_DWORD *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this->? + 488))(this->?, 5, 0); /*0x6b0ff8*/
      this->?[3] = 0; /*0x6b0ffe*/
      this->?[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b100b*/
    }
  }
  return result; /*0x6b0e9c*/
}



// ==== 0x006B1020  SlaveManagerClass::ShouldWakeUpNow  this=SlaveManagerClass  sig=csp ====
bool __thiscall SlaveManagerClass::ShouldWakeUpNow(SlaveManagerClass *this)
{
  TechnoClass *master; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  master = this->master; /*0x6b1024*/
  if ( !master || this->SlaveManagerClass_field_5C ) /*0x6b102f*/
    return 0; /*0x6b102f*/
  if ( !master->owner->currentPlayer ) /*0x6b1040*/
    return 1; /*0x6b104e*/
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))master->RadioClass + 111))(master) + 236) == 5 ) /*0x6b105e*/
    return 1; /*0x6b1064*/
  if ( this->SlaveManagerClass_field_60 + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6032) >= *(int *)&stru_A8EB00.?[416] ) /*0x6b107d*/
    return 0; /*0x6b107d*/
  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *, int, _DWORD))this->master->RadioClass + 206))( /*0x6b10ad*/
                    this->master,
                    &v4,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6016) / 256,
                    0);
  return v4 != dword_B0B5B8; /*0x6b10c6*/
}



// ==== 0x006B10F0  SlaveManagerClass::AssignTask  this=SlaveManagerClass  sig=csp ====
int __thiscall SlaveManagerClass::AssignTask(SlaveManagerClass *this, int a2)
{
  int result; // eax
  int i; // esi

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6b10fa*/
  result = Power::TimerProcess(this->SlaveManagerClass_field_5C); /*0x6b1105*/
  for ( i = *(_DWORD *)this->__pad_48 - 1; i >= 0; --i ) /*0x6b110e*/
    result = Power::TimerProcess(*(_DWORD *)(*(_DWORD *)(this->slaveVectorCount + 4 * i) + 4)); /*0x6b111c*/
  return result; /*0x6b1124*/
}



// ==== 0x006B1130  SlaveManagerClass::ddtor  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::ddtor(SlaveManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *a2 = 861581284; /*0x6b1146*/
  a2[1] = 299183526; /*0x6b114e*/
  a2[2] = 268444350; /*0x6b1157*/
  a2[3] = unk_7E987C; /*0x6b1160*/
  return 0; /*0x6b113d*/
}



// ==== 0x006B1170  SlaveManagerClass::LoadManager  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::LoadManager(SlaveManagerClass *this, int a2)
{
  int v2; // esi
  SlaveManagerClass *v3; // edi
  int Prefix_0; // ebx
  int v5; // ebp
  int *slaves; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int slaveVectorCapacity; // ecx
  int v11; // eax
  int v12; // eax
  int slaveVectorCount; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = a2; /*0x6b1174*/
  v3 = this; /*0x6b1179*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6b1184*/
  v5 = 0; /*0x6b1186*/
  if ( Prefix_0 >= 0 ) /*0x6b118a*/
  {
    if ( v3 ) /*0x6b1192*/
    {
      AbstractClass::InitVtables((AbstractClass *)v3, (int)&this); /*0x6b119b*/
      SlaveControlVector::Constructor((SlaveControlVector *)v3->slaves, 0, 0); /*0x6b11a7*/
      v3->slaves[0] = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b11b0*/
      *(_DWORD *)&v3->__pad_48[4] = 10; /*0x6b11b6*/
      *(_DWORD *)v3->__pad_48 = 0; /*0x6b11bd*/
      Timer::Start((Timer *)&v3->__pad_48[8], 0); /*0x6b11c0*/
      v3->AbstractClass = &SlaveManagerClass::`vftable'; /*0x6b11c5*/
      v3->? = &SlaveManagerClass::`vftable'; /*0x6b11cb*/
      v2 = a2; /*0x6b11d2*/
      v3->? = &SlaveManagerClass::`vftable'; /*0x6b11d6*/
      v3->? = &SlaveManagerClass::`vftable'; /*0x6b11dd*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, &v16, 4, 0); /*0x6b11f2*/
    if ( Prefix_0 >= 0 ) /*0x6b11f6*/
    {
      slaves = v3->slaves; /*0x6b11fc*/
      if ( v3 != (SlaveManagerClass *)-56 ) /*0x6b1201*/
      {
        SlaveControlVector::Constructor((SlaveControlVector *)v3->slaves, 0, 0); /*0x6b1207*/
        *slaves = (int)&DynamicVectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b120c*/
        *(_DWORD *)&v3->__pad_48[4] = 10; /*0x6b1212*/
        *(_DWORD *)v3->__pad_48 = 0; /*0x6b1219*/
      }
      v7 = v16; /*0x6b121c*/
      this = 0; /*0x6b1220*/
      if ( v16 <= 0 ) /*0x6b1226*/
      {
LABEL_20:
        v14 = 0; /*0x6b12b7*/
        if ( v7 > 0 ) /*0x6b12bb*/
        {
          do /*0x6b12d3*/
            ObjectPtr::RegisterForTracking( /*0x6b12c9*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v3->slaveVectorCount + 4 * v14++));
          while ( v14 < v16 ); /*0x6b12d3*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->master); /*0x6b12de*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->house); /*0x6b12ec*/
      }
      else
      {
        while ( 1 ) /*0x6b1232*/
        {
          v8 = __2_YAPAXI_Z(0x14u); /*0x6b1232*/
          if ( v8 ) /*0x6b123c*/
          {
            v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b123e*/
            *(_DWORD *)(v8 + 16) = 0; /*0x6b1244*/
            *(_DWORD *)(v8 + 8) = v9; /*0x6b1247*/
            v5 = v8; /*0x6b124a*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v5, 20, 0); /*0x6b125b*/
          if ( Prefix_0 < 0 ) /*0x6b125f*/
            break; /*0x6b125f*/
          slaveVectorCapacity = v3->slaveVectorCapacity; /*0x6b1265*/
          if ( *(_DWORD *)v3->__pad_48 < slaveVectorCapacity /*0x6b128a*/
            || (BYTE1(v3->creationFrame) || !slaveVectorCapacity)
            && (v11 = *(_DWORD *)&v3->__pad_48[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*slaves + 8))(
                 v3->slaves,
                 slaveVectorCapacity + v11,
                 0) )
          {
            v12 = *(_DWORD *)v3->__pad_48; /*0x6b1291*/
            slaveVectorCount = v3->slaveVectorCount; /*0x6b1294*/
            *(_DWORD *)v3->__pad_48 = v12 + 1; /*0x6b129a*/
            *(_DWORD *)(slaveVectorCount + 4 * v12) = v5; /*0x6b129d*/
          }
          v7 = v16; /*0x6b12a4*/
          this = (SlaveManagerClass *)((char *)this + 1); /*0x6b12ab*/
          if ( (int)this >= v16 ) /*0x6b12af*/
            goto LABEL_20; /*0x6b12af*/
          v5 = 0; /*0x6b122e*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b12f1*/
}



// ==== 0x006B1300  SlaveManagerClass::SaveManager  this=SlaveManagerClass  sig=csp ====
int __stdcall SlaveManagerClass::SaveManager(SlaveManagerClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6b1312*/
  if ( result >= 0 ) /*0x6b1319*/
  {
    v4 = *a2; /*0x6b131e*/
    a3 = *(_DWORD *)this->__pad_48; /*0x6b132a*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x6b132e*/
    if ( result >= 0 ) /*0x6b1333*/
    {
      for ( i = 0; i < a3; ++i ) /*0x6b133d*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))( /*0x6b134d*/
                   a2,
                   *(_DWORD *)(this->slaveVectorCount + 4 * i),
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
int SlaveManagerClass::StubReturn100(SlaveManagerClass *this)
{
  return 100; /*0x6b1375*/
}



// ==== 0x006B1380  SlaveManagerClass::StubReturn72  this=SlaveManagerClass  sig=csp ====
int SlaveManagerClass::StubReturn72(SlaveManagerClass *this)
{
  return 72; /*0x6b1385*/
}



// ==== 0x006B1390  SlaveManagerClass::ProcessOrders  this=SlaveManagerClass  sig=csp ====
void *__thiscall SlaveManagerClass::ProcessOrders(SlaveManagerClass *this, char a2)
{
  SlaveManagerClass::Constructor_SlaveManagerClass((int)this); /*0x6b1393*/
  if ( (a2 & 1) != 0 ) /*0x6b139d*/
    __3_YAXPAX_Z(this); /*0x6b13a0*/
  return this; /*0x6b13aa*/
}



// ==== 0x006B13B0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall SlaveManagerClass_25::ddtor(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b13b6*/
  this->m_10 = 0; /*0x6b13b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b13c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b13c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b13ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6b13d1*/
  this->m_8 = 0; /*0x6b13d4*/
}



// ==== 0x006B13E0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::Write  this=DynamicVector  sig=csp ====
unsigned int __thiscall SlaveManagerClass_25::Write(
        _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b13e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b13f5*/
  else
    return 0; /*0x6b13e7*/
}



// ==== 0x006B1400  _VectorClass_PAUSlaveControl_SlaveManagerClass::Seek  this=VectorClass  sig=csp ====
int __thiscall SlaveManagerClass_25::Seek(_VectorClass_PAUSlaveControl_SlaveManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b140a*/
}



// ==== 0x006B1410  _DynamicVectorClass_PAVSlaveManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SlaveManagerClass::Destroy(_DynamicVectorClass_PAVSlaveManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b1416*/
  this->m_10 = 0; /*0x6b1419*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b1420*/
  {
    __3_YAXPAX_Z(v2); /*0x6b1426*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b142e*/
  }
  BYTE1(this->m_C) = 0; /*0x6b1431*/
  this->m_8 = 0; /*0x6b1434*/
}



// ==== 0x006B1440  _DynamicVectorClass_PAVSlaveManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SlaveManagerClass::GetItemIndex(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b1440*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b1455*/
  else
    return 0; /*0x6b1447*/
}



// ==== 0x006B1460  _VectorClass_PAVSlaveManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::Get(_VectorClass_PAVSlaveManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b146a*/
}



// ==== 0x006B1470  _VectorClass_PAUSlaveControl_SlaveManagerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SlaveManagerClass_25::AddRef(_VectorClass_PAUSlaveControl_SlaveManagerClass *this, int a2)
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
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b1485*/
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
char __thiscall SlaveManagerClass_25::Release(
        _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b15fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b1602*/
    if ( a3 ) /*0x6b1608*/
      v4 = a3; /*0x6b161e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b161a*/
    LOBYTE(this->m_C) = 1; /*0x6b1622*/
    if ( !v4 ) /*0x6b1626*/
      return 0; /*0x6b169a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b1628*/
    {
      m_8 = this->m_8; /*0x6b162f*/
      if ( a2 < m_8 ) /*0x6b1634*/
        m_8 = a2; /*0x6b1636*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b163c*/
        ++i; /*0x6b1641*/
      if ( BYTE1(this->m_C) ) /*0x6b164e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b1659*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b1661*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b166a*/
    this->m_8 = a2; /*0x6b1672*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b1675*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b167e*/
  }
  v7 = this->m_8; /*0x6b1681*/
  if ( v7 < this->m_10 ) /*0x6b1689*/
    this->m_10 = v7; /*0x6b168b*/
  return 1; /*0x6b168e*/
}



// ==== 0x006B16A0  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::Read  this=DynamicVector  sig=csp ====
int __thiscall SlaveManagerClass_25::Read(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b16a0*/
  result = 0; /*0x6b16a3*/
  if ( m_10 <= 0 ) /*0x6b16a8*/
    return -1; /*0x6b16bf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b16ae*/
  {
    if ( ++result >= m_10 ) /*0x6b16bd*/
      return -1; /*0x6b16bd*/
  }
  return result; /*0x6b16c2*/
}



// ==== 0x006B16D0  _VectorClass_PAVSlaveManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::Add(_VectorClass_PAVSlaveManagerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6b16d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6b16dd*/
  {
    v3 = 0; /*0x6b16df*/
    if ( m_8 <= 0 ) /*0x6b16e3*/
      return 1; /*0x6b1703*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b16e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b16eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b16f4*/
    {
      ++v3; /*0x6b16f6*/
      ++v4; /*0x6b16f7*/
      if ( v3 >= m_8 ) /*0x6b16fc*/
        return 1; /*0x6b16fc*/
    }
  }
  return 0; /*0x6b16fe*/
}



// ==== 0x006B1710  _VectorClass_PAVSlaveManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::Release(_VectorClass_PAVSlaveManagerClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6b171c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b1726*/
    if ( a3 ) /*0x6b172c*/
      v4 = a3; /*0x6b1742*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b173e*/
    LOBYTE(this->m_C) = 1; /*0x6b1746*/
    if ( v4 ) /*0x6b174a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6b1755*/
      {
        m_8 = this->m_8; /*0x6b175c*/
        if ( a2 < m_8 ) /*0x6b1761*/
          m_8 = a2; /*0x6b1763*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b1769*/
          ++i; /*0x6b176e*/
        if ( BYTE1(this->m_C) ) /*0x6b177b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b1786*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6b178e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6b1797*/
      this->m_8 = a2; /*0x6b179f*/
      BYTE1(this->m_C) = a3 == 0; /*0x6b17a2*/
      return 1; /*0x6b17a8*/
    }
    else
    {
      return 0; /*0x6b174f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSlaveManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b17b2*/
    return 1; /*0x6b17b8*/
  }
}



// ==== 0x006B17C0  _VectorClass_PAVSlaveManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SlaveManagerClass::Remove(_VectorClass_PAVSlaveManagerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6b17cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b17d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b17db*/
  }
  BYTE1(this->m_C) = 0; /*0x6b17de*/
  this->m_8 = 0; /*0x6b17e1*/
}



// ==== 0x006B17F0  _VectorClass_PAVSlaveManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::GetSize(_VectorClass_PAVSlaveManagerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6b17f0*/
    return 0; /*0x6b17f8*/
  m_8 = this->m_8; /*0x6b17fe*/
  result = 0; /*0x6b1801*/
  if ( m_8 <= 0 ) /*0x6b1805*/
    return -1; /*0x6b181c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b180b*/
  {
    if ( ++result >= m_8 ) /*0x6b181a*/
      return -1; /*0x6b181a*/
  }
  return result; /*0x6b17fa*/
}



// ==== 0x006B1830  _VectorClass_PAVSlaveManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SlaveManagerClass::GetCapacity(_VectorClass_PAVSlaveManagerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b1830*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b1845*/
  else
    return 0; /*0x6b1837*/
}



// ==== 0x006B1850  _DynamicVectorClass_PAVSlaveManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SlaveManagerClass::SetCapacity(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b185c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b1862*/
    if ( a3 ) /*0x6b1868*/
      v4 = a3; /*0x6b187e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b187a*/
    LOBYTE(this->m_C) = 1; /*0x6b1882*/
    if ( !v4 ) /*0x6b1886*/
      return 0; /*0x6b18fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b1888*/
    {
      m_8 = this->m_8; /*0x6b188f*/
      if ( a2 < m_8 ) /*0x6b1894*/
        m_8 = a2; /*0x6b1896*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b189c*/
        ++i; /*0x6b18a1*/
      if ( BYTE1(this->m_C) ) /*0x6b18ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b18b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b18c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b18ca*/
    this->m_8 = a2; /*0x6b18d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b18d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSlaveManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b18de*/
  }
  v7 = this->m_8; /*0x6b18e1*/
  if ( v7 < this->m_10 ) /*0x6b18e9*/
    this->m_10 = v7; /*0x6b18eb*/
  return 1; /*0x6b18ee*/
}



// ==== 0x006B1900  _DynamicVectorClass_PAVSlaveManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SlaveManagerClass::FindItemIndex(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b1900*/
  result = 0; /*0x6b1903*/
  if ( m_10 <= 0 ) /*0x6b1908*/
    return -1; /*0x6b191f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b190e*/
  {
    if ( ++result >= m_10 ) /*0x6b191d*/
      return -1; /*0x6b191d*/
  }
  return result; /*0x6b1922*/
}



// ==== 0x006B1930  ?$VectorClass@PAUSlaveControl@SlaveManagerClass@@::checkAIResources  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_6B1930(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b1933*/
  *Block = &VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b1936*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b1940*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1948*/
    *(Block + 1) = 0; /*0x6b1950*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b195b*/
  *(Block + 2) = 0; /*0x6b1961*/
  if ( (a2 & 1) != 0 ) /*0x6b1968*/
    __3_YAXPAX_Z(Block); /*0x6b196b*/
  return Block; /*0x6b1975*/
}



// ==== 0x006B1980  _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SlaveManagerClass_25::QueryInterface(
        _DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b1983*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b1986*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b1990*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1998*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b19a0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b19ab*/
  this->m_8 = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    __3_YAXPAX_Z(this); /*0x6b19bb*/
  return this->__pad_0; /*0x6b19c5*/
}



// ==== 0x006B19D0  _VectorClass_PAVSlaveManagerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SlaveManagerClass::QueryInterface(_VectorClass_PAVSlaveManagerClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b19d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SlaveManagerClass *>::`vftable'; /*0x6b19d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b19e0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b19e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b19f0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b19fb*/
  this->m_8 = 0; /*0x6b1a01*/
  if ( (a2 & 1) != 0 ) /*0x6b1a08*/
    __3_YAXPAX_Z(this); /*0x6b1a0b*/
  return this->__pad_0; /*0x6b1a15*/
}



// ==== 0x006B1A20  _DynamicVectorClass_PAVSlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SlaveManagerClass::Constructor_VectorClass_SlaveManagerClass___(
        _DynamicVectorClass_PAVSlaveManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b1a23*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SlaveManagerClass *>::`vftable'; /*0x6b1a26*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b1a30*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1a38*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b1a40*/
  }
  BYTE1(this->m_C) = 0; /*0x6b1a4b*/
  this->m_8 = 0; /*0x6b1a51*/
  if ( (a2 & 1) != 0 ) /*0x6b1a58*/
    __3_YAXPAX_Z(this); /*0x6b1a5b*/
  return this->__pad_0; /*0x6b1a65*/
}



// ==== 0x006B1A70  SlaveManagerClass::Calc2DDistance  this=SlaveManagerClass  sig=csp ====
__int64 __thiscall SlaveManagerClass::Calc2DDistance(SlaveManagerClass *this)
{
  double v1; // st7
  __int64 result; // rax
  int v3; // kr00_4
  double v4; // [esp+0h] [ebp-Ch]
  int vtable0_high; // [esp+8h] [ebp-4h]
  int vtable0_low; // [esp+8h] [ebp-4h]

  vtable0_high = SHIWORD(this->AbstractClass); /*0x6b1a78*/
  __asm { fild [esp+0Ch+var_4] } /*0x6b1a7f*/
  vtable0_low = SLOWORD(this->AbstractClass); /*0x6b1a83*/
  __asm /*0x6b1a87*/
  {
    fild [esp+0Ch+var_4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+0Ch+var_C]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v4); /*0x6b1a9c*/
  v3 = Math::RoundToInt(v1); /*0x6b1aa1*/
  WORD2(result) = HIWORD(v3); /*0x6b1aa1*/
  LOWORD(result) = v3; /*0x6b1aa1*/
  return result; /*0x6b1aa9*/
}



// ==== 0x006B1AB0  SlaveControlVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall SlaveControlVector::Constructor(SlaveControlVector *this, int a2, int a3)
{
  this->Items = 0; /*0x6b1abb*/
  this->Capacity = a2; /*0x6b1abe*/
  this->IsInitialized = 1; /*0x6b1ac1*/
  this->IsAllocated = 0; /*0x6b1ac5*/
  *this = (SlaveControlVector)&VectorClass<SlaveManagerClass::SlaveControl *>::`vftable'; /*0x6b1ac8*/
  if ( a2 ) /*0x6b1ace*/
  {
    if ( a3 ) /*0x6b1ad6*/
    {
      this->Items = a3; /*0x6b1ad8*/
      return this; /*0x6b1ade*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x6b1aed*/
    this->IsAllocated = 1; /*0x6b1af0*/
  }
  return this; /*0x6b1add*/
}



// ==== 0x006B1B00  sub_6B1B00  this=-  sig=ida-proto ====
int sub_6B1B00()
{
  dword_B0B638 = 0; /*0x6b1b02*/
  dword_B0B63C = 0; /*0x6b1b07*/
  dword_B0B640 = 0; /*0x6b1b0c*/
  dword_B0B644 = 0; /*0x6b1b11*/
  return 0; /*0x6b1b16*/
}



// ==== 0x006B1B20  SliderClass::Constructor  this=SliderClass  sig=csp ====
int *__thiscall SliderClass::Constructor(SliderClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ShapeButtonClass *v8; // edi
  void *v9; // eax
  _BYTE *v10; // eax
  ShapeButtonClass *v11; // edi
  void *v12; // eax
  _BYTE *v13; // eax
  int v14; // ecx
  int v15; // ecx
  int SliderClass_field_0x30; // eax
  int v17; // edx
  char v18; // bl
  int SliderClass_field_0x14; // ebp
  double v20; // st7
  int v21; // eax
  int v22; // edi
  double v23; // st7
  int v24; // eax
  int SliderClass_field_0x18; // ebp
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v30; // [esp-14h] [ebp-34h]
  int v31; // [esp-14h] [ebp-34h]
  int SliderClass_field_0x10; // [esp-10h] [ebp-30h]
  int v33; // [esp-10h] [ebp-30h]

  ListClass::Constructor((int)this, a2, a3, a4, a5, a6); /*0x6b1b44*/
  *(_DWORD *)this->__pad_0 = &SliderClass::`vftable'; /*0x6b1b51*/
  *((_BYTE *)this + 68) = a7 != 0; /*0x6b1b5c*/
  *((_DWORD *)this + 15) = 0; /*0x6b1b5f*/
  this->q010 = 0; /*0x6b1b62*/
  if ( !a7 ) /*0x6b1b65*/
  {
    v8 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1b72*/
    if ( v8 ) /*0x6b1b79*/
    {
      SliderClass_field_0x10 = this->SliderClass_field_0x10; /*0x6b1b87*/
      v30 = this->SliderClass_field_0x14 + this->SliderClass_field_0x0C + 2; /*0x6b1b8c*/
      v9 = SearchMIXFile(aBtnPlusShp, 0); /*0x6b1b94*/
      v10 = ShapeButtonClass::Constructor(v8, a2, (int)v9, v30, SliderClass_field_0x10, 0, 0, 0); /*0x6b1b9d*/
    }
    else
    {
      v10 = 0; /*0x6b1ba4*/
    }
    *((_DWORD *)this + 15) = v10; /*0x6b1ba8*/
    v11 = (ShapeButtonClass *)__2_YAPAXI_Z(0x60u); /*0x6b1bb0*/
    if ( v11 ) /*0x6b1bb7*/
    {
      v33 = this->SliderClass_field_0x10; /*0x6b1bc5*/
      v31 = this->SliderClass_field_0x0C - 6; /*0x6b1bc6*/
      v12 = SearchMIXFile(aBtnMinsShp, 0); /*0x6b1bce*/
      v13 = ShapeButtonClass::Constructor(v11, a2, (int)v12, v31, v33, 0, 0, 0); /*0x6b1bd7*/
    }
    else
    {
      v13 = 0; /*0x6b1bde*/
    }
    v14 = *((_DWORD *)this + 15); /*0x6b1be0*/
    this->q010 = v13; /*0x6b1be3*/
    if ( v14 ) /*0x6b1be8*/
    {
      (*(void (__thiscall **)(int, SliderClass *))(*(_DWORD *)v14 + 132))(v14, this); /*0x6b1bed*/
      (*(void (__thiscall **)(_DWORD, SliderClass *))(**((_DWORD **)this + 15) + 12))(*((_DWORD *)this + 15), this); /*0x6b1bf9*/
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 15) + 72))(*((_DWORD *)this + 15)); /*0x6b1c01*/
    }
    v15 = this->q010; /*0x6b1c04*/
    if ( v15 ) /*0x6b1c09*/
    {
      (*(void (__thiscall **)(int, SliderClass *))(*(_DWORD *)v15 + 132))(v15, this); /*0x6b1c0e*/
      (*(void (__thiscall **)(_DWORD, SliderClass *))(**((_DWORD **)this + 16) + 12))(this->q010, this); /*0x6b1c1a*/
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 16) + 72))(this->q010); /*0x6b1c22*/
    }
  }
  SliderClass_field_0x30 = this->SliderClass_field_0x30; /*0x6b1c25*/
  if ( SliderClass_field_0x30 > 1 ) /*0x6b1c2b*/
    SliderClass_field_0x30 = 1; /*0x6b1c2d*/
  *((_DWORD *)this + 18) = SliderClass_field_0x30; /*0x6b1c35*/
  v17 = *(_DWORD *)this->__pad_0; /*0x6b1c3f*/
  *((_DWORD *)this + 18) = 1; /*0x6b1c43*/
  (*(void (__thiscall **)(SliderClass *))(v17 + 72))(this); /*0x6b1c46*/
  v18 = BYTE2(this->SliderClass_field_0x2C); /*0x6b1c49*/
  if ( v18 ) /*0x6b1c4e*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1c50*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1c55*/
  v20 = (double)this->SliderClass_field_0x30; /*0x6b1c58*/
  LOWORD(v21) = Math::RoundToInt(v20); /*0x6b1c74*/
  v22 = v21; /*0x6b1c7c*/
  if ( v21 <= 4 ) /*0x6b1c7e*/
    v22 = 4; /*0x6b1c80*/
  v23 = (double)*((int *)this + 13) / v20; /*0x6b1c85*/
  *((_DWORD *)this + 19) = v22; /*0x6b1c88*/
  LOWORD(v24) = Math::RoundToInt(v23); /*0x6b1c91*/
  if ( v24 >= SliderClass_field_0x14 - v22 ) /*0x6b1c9c*/
    v24 = SliderClass_field_0x14 - v22; /*0x6b1c9e*/
  this->q014 = v24; /*0x6b1ca2*/
  if ( v18 ) /*0x6b1ca5*/
    SliderClass_field_0x18 = this->SliderClass_field_0x14; /*0x6b1ca7*/
  else
    SliderClass_field_0x18 = this->SliderClass_field_0x18; /*0x6b1cac*/
  LOWORD(v26) = Math::RoundToInt(v23); /*0x6b1cbd*/
  v27 = v26; /*0x6b1cc5*/
  if ( v26 <= 4 ) /*0x6b1cc7*/
    v27 = 4; /*0x6b1cc9*/
  *((_DWORD *)this + 19) = v27; /*0x6b1cd0*/
  LOWORD(v28) = Math::RoundToInt(v23); /*0x6b1cd3*/
  if ( v28 >= SliderClass_field_0x18 - v27 ) /*0x6b1ce0*/
    v28 = SliderClass_field_0x18 - v27; /*0x6b1ce2*/
  this->q014 = v28; /*0x6b1ce4*/
  LOBYTE(this->SliderClass_field_0x2C) = 0; /*0x6b1ce7*/
  return (int *)this->__pad_0; /*0x6b1ced*/
}



// ==== 0x006B1D00  SliderClass::Destructor  this=SliderClass  sig=csp ====
int __thiscall SliderClass::Destructor(SliderClass *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 15); /*0x6b1d03*/
  *(_DWORD *)this->__pad_0 = &SliderClass::`vftable'; /*0x6b1d06*/
  if ( v2 ) /*0x6b1d0e*/
  {
    (**v2)(v2, 1); /*0x6b1d14*/
    *((_DWORD *)this + 15) = 0; /*0x6b1d16*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->q010; /*0x6b1d1d*/
  if ( v3 ) /*0x6b1d22*/
  {
    (**v3)(v3, 1); /*0x6b1d28*/
    this->q010 = 0; /*0x6b1d2a*/
  }
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x6b1d38*/
}



// ==== 0x006B1D40  SliderClass::GetValue  this=SliderClass  sig=csp ====
int __thiscall SliderClass::GetValue(SliderClass *this, int a2)
{
  int SliderClass_field_0x14; // ebx
  double SliderClass_field_0x30; // st7
  int v5; // eax
  int v6; // edi
  int v7; // eax

  if ( !GaugeClass::SetValue((GaugeClass *)this, a2) ) /*0x6b1d48*/
    return 0; /*0x6b1db0*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1d51*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1d5a*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1d5f*/
  SliderClass_field_0x30 = (double)this->SliderClass_field_0x30; /*0x6b1d62*/
  LOWORD(v5) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d74*/
  v6 = v5; /*0x6b1d7c*/
  if ( v5 <= 4 ) /*0x6b1d7e*/
    v6 = 4; /*0x6b1d80*/
  *((_DWORD *)this + 19) = v6; /*0x6b1d88*/
  LOWORD(v7) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1d8f*/
  if ( v7 >= SliderClass_field_0x14 - v6 ) /*0x6b1da0*/
    v7 = SliderClass_field_0x14 - v6; /*0x6b1da2*/
  this->q014 = v7; /*0x6b1da4*/
  return 1; /*0x6b1dac*/
}



// ==== 0x006B1DC0  SliderClass::OnClick  this=SliderClass  sig=csp ====
__int64 __thiscall SliderClass::OnClick(SliderClass *this, int a2)
{
  int SliderClass_field_0x30; // eax
  int SliderClass_field_0x14; // ebx
  double v5; // st7
  int v6; // eax
  int v7; // edi
  __int64 result; // rax
  int v9; // kr00_4

  SliderClass_field_0x30 = this->SliderClass_field_0x30; /*0x6b1dc7*/
  if ( a2 < SliderClass_field_0x30 ) /*0x6b1dcc*/
    SliderClass_field_0x30 = a2; /*0x6b1dce*/
  *((_DWORD *)this + 18) = SliderClass_field_0x30; /*0x6b1dd3*/
  if ( SliderClass_field_0x30 <= 1 ) /*0x6b1dd6*/
    SliderClass_field_0x30 = 1; /*0x6b1dd8*/
  *((_DWORD *)this + 18) = SliderClass_field_0x30; /*0x6b1ddd*/
  (*(void (__thiscall **)(SliderClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x6b1de6*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1de9*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1df0*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1df5*/
  v5 = (double)this->SliderClass_field_0x30; /*0x6b1df8*/
  LOWORD(v6) = Math::RoundToInt(v5); /*0x6b1e0a*/
  v7 = v6; /*0x6b1e12*/
  if ( v6 <= 4 ) /*0x6b1e14*/
    v7 = 4; /*0x6b1e16*/
  *((_DWORD *)this + 19) = v7; /*0x6b1e1e*/
  v9 = Math::RoundToInt(v5); /*0x6b1e25*/
  WORD2(result) = HIWORD(v9); /*0x6b1e25*/
  LOWORD(result) = v9; /*0x6b1e25*/
  if ( (int)result >= SliderClass_field_0x14 - v7 ) /*0x6b1e36*/
    this->q014 = SliderClass_field_0x14 - v7; /*0x6b1e3f*/
  else
    this->q014 = result; /*0x6b1e38*/
  return result; /*0x6b1e3b*/
}



// ==== 0x006B1E50  SliderClass::Draw  this=SliderClass  sig=csp ====
int __thiscall SliderClass::Draw(SliderClass *this, int a2)
{
  int v3; // ecx
  int v4; // edi
  int SliderClass_field_0x14; // ebx
  double SliderClass_field_0x30; // st7
  int v7; // eax
  int v8; // edi
  int v9; // eax

  v3 = a2; /*0x6b1e53*/
  v4 = *((_DWORD *)this + 18); /*0x6b1e5b*/
  if ( a2 >= this->SliderClass_field_0x30 - v4 ) /*0x6b1e62*/
    v3 = this->SliderClass_field_0x30 - v4; /*0x6b1e64*/
  if ( !GaugeClass::GetValue((GaugeClass *)this, v3) ) /*0x6b1e69*/
    return 0; /*0x6b1ed1*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1e72*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b1e7a*/
  else
    SliderClass_field_0x14 = this->SliderClass_field_0x18; /*0x6b1e7f*/
  SliderClass_field_0x30 = (double)this->SliderClass_field_0x30; /*0x6b1e82*/
  LOWORD(v7) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1e94*/
  v8 = v7; /*0x6b1e9c*/
  if ( v7 <= 4 ) /*0x6b1e9e*/
    v8 = 4; /*0x6b1ea0*/
  *((_DWORD *)this + 19) = v8; /*0x6b1ea8*/
  LOWORD(v9) = Math::RoundToInt(SliderClass_field_0x30); /*0x6b1eaf*/
  if ( v9 >= SliderClass_field_0x14 - v8 ) /*0x6b1ebf*/
    v9 = SliderClass_field_0x14 - v8; /*0x6b1ec1*/
  this->q014 = v9; /*0x6b1ec3*/
  return 1; /*0x6b1ec6*/
}



// ==== 0x006B1EE0  ObjectClass::method_6B1EE0  this=ObjectClass  sig=csp ====
__int64 __thiscall sub_6B1EE0(ObjectClass *this)
{
  int abstractFlags; // ebx
  double nextObject; // st7
  int v4; // eax
  int v5; // edi
  __int64 result; // rax
  int v7; // kr00_4

  if ( BYTE2(this->fallRate) ) /*0x6b1ee6*/
    abstractFlags = this->?; /*0x6b1eed*/
  else
    abstractFlags = this->?; /*0x6b1ef2*/
  nextObject = (double)(int)this->nextObject; /*0x6b1ef5*/
  LOWORD(v4) = Math::RoundToInt(nextObject); /*0x6b1f07*/
  v5 = v4; /*0x6b1f0f*/
  if ( v4 <= 4 ) /*0x6b1f11*/
    v5 = 4; /*0x6b1f13*/
  this->ambientSoundController[4] = v5; /*0x6b1f1b*/
  v7 = Math::RoundToInt(nextObject); /*0x6b1f22*/
  WORD2(result) = HIWORD(v7); /*0x6b1f22*/
  LOWORD(result) = v7; /*0x6b1f22*/
  if ( (int)result >= abstractFlags - v5 ) /*0x6b1f31*/
    this->customSound_controller[0] = abstractFlags - v5; /*0x6b1f3b*/
  else
    this->customSound_controller[0] = result; /*0x6b1f33*/
  return result; /*0x6b1f36*/
}



// ==== 0x006B1F50  SliderClass::SetValue  this=SliderClass  sig=csp ====
int __thiscall SliderClass::SetValue(SliderClass *this, unsigned int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int SliderClass_field_0x0C; // ecx
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // edi

  if ( (a2 & 1) == 0 ) /*0x6b1f5c*/
    return CellClass::DrawDispatch((GaugeClass *)this, a2, a3, 0); /*0x6b1fef*/
  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b1f62*/
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer); /*0x6b1f71*/
    SliderClass_field_0x0C = this->SliderClass_field_0x0C; /*0x6b1f74*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer); /*0x6b1f7b*/
    SliderClass_field_0x0C = this->SliderClass_field_0x10; /*0x6b1f7e*/
  }
  v7 = this->q014; /*0x6b1f81*/
  v8 = SliderClass_field_0x0C + 1; /*0x6b1f84*/
  if ( v5 >= v7 + v8 ) /*0x6b1f8a*/
  {
    if ( v5 <= v8 + v7 + *((_DWORD *)this + 19) ) /*0x6b1fac*/
    {
      v9 = a3; /*0x6b1fc5*/
      CellClass::DrawDispatch((GaugeClass *)this, a2, a3, 0); /*0x6b1fcf*/
    }
    else
    {
      (*(void (__thiscall **)(SliderClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 172))(this, 0); /*0x6b1fb4*/
      v9 = a3; /*0x6b1fba*/
      CellClass::DrawDispatch((GaugeClass *)this, 0, a3, 0); /*0x6b1fc3*/
    }
  }
  else
  {
    (*(void (__thiscall **)(SliderClass *, int))(*(_DWORD *)this->__pad_0 + 172))(this, 1); /*0x6b1f92*/
    v9 = a3; /*0x6b1f98*/
    CellClass::DrawDispatch((GaugeClass *)this, 0, a3, 0); /*0x6b1fa1*/
  }
  *v9 = 0; /*0x6b1fd4*/
  return 1; /*0x6b1fda*/
}



// ==== 0x006B2000  SliderClass::OnTrack  this=SliderClass  sig=csp ====
int __thiscall SliderClass::OnTrack(SliderClass *this, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)this->__pad_0; /*0x6b2007*/
  if ( a2 ) /*0x6b2009*/
    return (*(int (__stdcall **)(int))(v2 + 140))(*((_DWORD *)this + 13) - *((_DWORD *)this + 18)); /*0x6b2014*/
  else
    return (*(int (__stdcall **)(int))(v2 + 140))(*((_DWORD *)this + 13) + *((_DWORD *)this + 18)); /*0x6b2027*/
}



// ==== 0x006B2040  SliderClass::OnRelease  this=SliderClass  sig=csp ====
int __thiscall SliderClass::OnRelease(SliderClass *this, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *((_DWORD *)this + 13); /*0x6b2044*/
  v3 = *(_DWORD *)this->__pad_0; /*0x6b2049*/
  if ( a2 ) /*0x6b204b*/
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 - 1); /*0x6b204f*/
  else
    return (*(int (__stdcall **)(int))(v3 + 140))(v2 + 1); /*0x6b205a*/
}



// ==== 0x006B2070  SliderClass::HitTest  this=SliderClass  sig=csp ====
int __thiscall SliderClass::HitTest(SliderClass *this)
{
  int SliderClass_field_0x10; // edx
  int v2; // eax
  int SliderClass_field_0x18; // ecx
  int v5; // eax
  int SliderClass_field_0x14; // edx
  int v7; // eax
  int SliderClass_field_0x0C; // [esp+0h] [ebp-10h] BYREF
  int v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+8h] [ebp-8h]
  int v11; // [esp+Ch] [ebp-4h]

  if ( BYTE2(this->SliderClass_field_0x2C) ) /*0x6b2070*/
  {
    SliderClass_field_0x10 = this->SliderClass_field_0x10; /*0x6b2082*/
    SliderClass_field_0x0C = this->SliderClass_field_0x0C + this->q014; /*0x6b2085*/
    v2 = *((_DWORD *)this + 19); /*0x6b2089*/
    SliderClass_field_0x18 = this->SliderClass_field_0x18; /*0x6b208c*/
    v9 = SliderClass_field_0x10; /*0x6b208f*/
    v11 = SliderClass_field_0x18; /*0x6b2093*/
    v10 = v2; /*0x6b20a2*/
  }
  else
  {
    v5 = this->q014; /*0x6b20b2*/
    SliderClass_field_0x0C = this->SliderClass_field_0x0C; /*0x6b20b5*/
    SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b20be*/
    v9 = this->SliderClass_field_0x10 + v5; /*0x6b20c1*/
    v7 = *((_DWORD *)this + 19); /*0x6b20c5*/
    v10 = SliderClass_field_0x14; /*0x6b20c8*/
    v11 = v7; /*0x6b20d7*/
  }
  return DrawBuildingTilesSHP(&SliderClass_field_0x0C, 1, 1); /*0x6b20ab*/
}



// ==== 0x006B20F0  SliderClass::GetRange  this=SliderClass  sig=csp ====
int __thiscall SliderClass::GetRange(SliderClass *this, int a2)
{
  int SliderClass_field_0x10; // ecx
  int SliderClass_field_0x14; // edx
  int SliderClass_field_0x18; // eax
  int v7[4]; // [esp+8h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 68) || !Control::DispatchClick((ControlClass *)this, a2) ) /*0x6b2103*/
    return BuildingPlacement::HandleClick((GaugeClass *)this, a2); /*0x6b214f*/
  SliderClass_field_0x10 = this->SliderClass_field_0x10; /*0x6b210f*/
  SliderClass_field_0x14 = this->SliderClass_field_0x14; /*0x6b2112*/
  v7[0] = this->SliderClass_field_0x0C; /*0x6b2115*/
  SliderClass_field_0x18 = this->SliderClass_field_0x18; /*0x6b2119*/
  v7[1] = SliderClass_field_0x10; /*0x6b211c*/
  v7[2] = SliderClass_field_0x14; /*0x6b2120*/
  v7[3] = SliderClass_field_0x18; /*0x6b212c*/
  DrawBuildingTilesSHP(v7, 0, 1); /*0x6b2130*/
  (*(void (__thiscall **)(SliderClass *))(*(_DWORD *)this->__pad_0 + 156))(this); /*0x6b2139*/
  return 1; /*0x6b213f*/
}



// ==== 0x006B2160  SliderClass::SetRange  this=SliderClass  sig=csp ====
char __thiscall SliderClass::SetRange(SliderClass *this, char a2, int a3, int a4)
{
  int v4; // eax

  LOBYTE(v4) = a2; /*0x6b2160*/
  if ( (a2 & 4) != 0 ) /*0x6b2169*/
  {
    if ( a4 == *((_DWORD *)this + 15) ) /*0x6b2175*/
      (*(void (__thiscall **)(SliderClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 176))(this, 0); /*0x6b217b*/
    v4 = this->q010; /*0x6b2181*/
    if ( a4 == v4 ) /*0x6b2187*/
      LOBYTE(v4) = (*(char (__thiscall **)(SliderClass *, int))(*(_DWORD *)this->__pad_0 + 176))(this, 1); /*0x6b218f*/
  }
  return v4; /*0x6b2195*/
}



// ==== 0x006B21A0  sub_6B21A0  this=-  sig=ida-proto ====
void sub_6B21A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b21ac*/
  dbl_B0B680 = Math::Sqrt(v0 + v0); /*0x6b21be*/
}



// ==== 0x006B21D0  sub_6B21D0  this=-  sig=ida-proto ====
void sub_6B21D0()
{
  dbl_B0B6D0 = dbl_B0B680 / 60.0; /*0x6b21dc*/
}



// ==== 0x006B21F0  sub_6B21F0  this=-  sig=ida-proto ====
void sub_6B21F0()
{
  dbl_B0B6B8 = 1.0 / dbl_B0B6D0; /*0x6b21fc*/
}



// ==== 0x006B2210  sub_6B2210  this=-  sig=ida-proto ====
void sub_6B2210()
{
  dbl_B0B6B0 = 0.0174532925199433 * 45.0; /*0x6b221c*/
}



// ==== 0x006B2230  sub_6B2230  this=-  sig=ida-proto ====
void sub_6B2230()
{
  dbl_B0B688 = 0.0174532925199433 * 60.0; /*0x6b223c*/
}



// ==== 0x006B2250  sub_6B2250  this=-  sig=ida-proto ====
void sub_6B2250()
{
  dbl_B0B648 = 0.0174532925199433 * 90.0; /*0x6b225c*/
}



// ==== 0x006B2270  sub_6B2270  this=-  sig=ida-proto ====
__int64 sub_6B2270()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B648 - dbl_B0B688); /*0x6b2282*/
  result = Math::RoundToInt(v0 * dbl_B0B680 * 0.5); /*0x6b2296*/
  dword_B0B6D8 = result; /*0x6b229b*/
  return result; /*0x6b22a0*/
}



// ==== 0x006B22B0  sub_6B22B0  this=-  sig=ida-proto ====
void sub_6B22B0()
{
  dbl_B0B690 = Math::ArcTan((double)dword_B0B6D8 * 0.00390625); /*0x6b22c7*/
}



// ==== 0x006B22E0  sub_6B22E0  this=-  sig=ida-proto ====
void sub_6B22E0()
{
  dbl_B0B6A8 = Math::ArcTan((double)(2 * dword_B0B6D8) / dbl_B0B680); /*0x6b2302*/
}



// ==== 0x006B2310  sub_6B2310  this=-  sig=ida-proto ====
__int64 sub_6B2310()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B6D8) + 0.5); /*0x6b232b*/
  dword_B0B6CC = result; /*0x6b2330*/
  return result; /*0x6b2336*/
}



// ==== 0x006B2340  sub_6B2340  this=-  sig=ida-proto ====
int sub_6B2340()
{
  word_B0B678 = 0; /*0x6b2342*/
  word_B0B67A = 0; /*0x6b2348*/
  return 0; /*0x6b234e*/
}



// ==== 0x006B2350  sub_6B2350  this=-  sig=ida-proto ====
int sub_6B2350()
{
  dword_B0B698 = 0; /*0x6b2352*/
  dword_B0B69C = 0; /*0x6b2357*/
  dword_B0B6A0 = 0; /*0x6b235c*/
  return 0; /*0x6b2361*/
}



// ==== 0x006B2370  sub_6B2370  this=-  sig=ida-proto ====
int sub_6B2370()
{
  dword_B0B6C8 = 0; /*0x6b2375*/
  dword_B0B6C0 = 128; /*0x6b237f*/
  dword_B0B6C4 = 128; /*0x6b2384*/
  return 128; /*0x6b2389*/
}



// ==== 0x006B2390  sub_6B2390  this=-  sig=ida-proto ====
int sub_6B2390()
{
  dword_B0B668 = 0; /*0x6b2392*/
  dword_B0B66C = 0; /*0x6b2397*/
  dword_B0B670 = 0; /*0x6b239c*/
  dword_B0B674 = 0; /*0x6b23a1*/
  return 0; /*0x6b23a6*/
}



// ==== 0x006B23B0  sub_6B23B0  this=-  sig=ida-proto ====
int sub_6B23B0()
{
  dword_B0B654 = 0; /*0x6b23b7*/
  dword_B0B658 = 0; /*0x6b23bc*/
  byte_B0B65C = 1; /*0x6b23c1*/
  byte_B0B65D = 0; /*0x6b23c8*/
  dword_B0B650 = (int)&DynamicVectorClass<UndoInfoStruct>::`vftable'; /*0x6b23cd*/
  dword_B0B664 = 10; /*0x6b23d7*/
  g_SlaveMgrPool = 0; /*0x6b23e1*/
  return atexit(sub_6B23F0); /*0x6b23ec*/
}



// ==== 0x006B23F0  sub_6B23F0  this=-  sig=ida-proto ====
void __cdecl sub_6B23F0()
{
  dword_B0B650 = (int)&VectorClass<UndoInfoStruct>::`vftable'; /*0x6b23f8*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b240c*/
  {
    __3_YAXPAX_Z(dword_B0B654); /*0x6b240f*/
    dword_B0B654 = 0; /*0x6b2417*/
  }
  byte_B0B65D = 0; /*0x6b241d*/
  dword_B0B658 = 0; /*0x6b2423*/
}



// ==== 0x006B2430  sub_6B2430  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_6B2430(int *a1, int a2)
{
  _DWORD *result; // eax
  int v3; // ebx
  int v4; // edi
  int v6; // eax

  result = (_DWORD *)dword_B0B658; /*0x6b2430*/
  v3 = a1[1]; /*0x6b2436*/
  v4 = *a1; /*0x6b243b*/
  if ( g_SlaveMgrPool < dword_B0B658 /*0x6b2475*/
    || (byte_B0B65D || !dword_B0B658)
    && dword_B0B664 > 0
    && (result = (_DWORD *)(*(int (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
                             &dword_B0B650,
                             dword_B0B658 + dword_B0B664,
                             0),
        (_BYTE)result) )
  {
    v6 = g_SlaveMgrPool++; /*0x6b2483*/
    result = (char *)dword_B0B654 + 12 * v6; /*0x6b248f*/
    *result = v4; /*0x6b2492*/
    result[1] = v3; /*0x6b2495*/
    result[2] = a2; /*0x6b2498*/
  }
  return result; /*0x6b249b*/
}



// ==== 0x006B2520  ObjectClass::System_Init_6B2520  this=ObjectClass  sig=csp ====
char __thiscall System_Init_6B2520(TechnoClass *this)
{
  int occupant; // ebx
  int v3; // edi
  int attachedBomb; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  occupant = this->occupant; /*0x6b252c*/
  v6 = occupant; /*0x6b2531*/
  v3 = SHIWORD(occupant) + (__int16)occupant; /*0x6b253d*/
  if ( v3 <= dword_ABED04 ) /*0x6b2542*/
    return 0; /*0x6b2542*/
  if ( (__int16)v6 - SHIWORD(v6) >= dword_ABED04 ) /*0x6b254c*/
    return 0; /*0x6b254c*/
  if ( SHIWORD(v6) - (__int16)v6 >= dword_ABED04 ) /*0x6b2552*/
    return 0; /*0x6b2552*/
  if ( v3 > dword_ABED08 ) /*0x6b255a*/
    return 0; /*0x6b255a*/
  if ( this->ambientSoundController[2] != -1 ) /*0x6b2560*/
    return 0; /*0x6b2560*/
  if ( this->radioLinks[1] ) /*0x6b2562*/
    return 0; /*0x6b2562*/
  v6 = occupant; /*0x6b2570*/
  if ( Tactical::GetCellData((Tactical *)&v6)[69] ) /*0x6b2579*/
    return 0; /*0x6b25b0*/
  attachedBomb = this->attachedBomb; /*0x6b2580*/
  if ( attachedBomb >= dword_A8ED38 || attachedBomb == 0xFFFF ) /*0x6b2592*/
    return 1; /*0x6b25a9*/
  else
    return *(_BYTE *)(*((_DWORD *)dword_A8ED2C + attachedBomb) + 736); /*0x6b259f*/
}



// ==== 0x006B25C0  CellClass::IsBuildable  this=CellClass  sig=csp ====
int __thiscall CellClass::IsBuildable(CellClass *this)
{
  ObjectClass *i; // esi
  int result; // eax
  __int16 smudgeTypeIndex_high; // cx
  __int16 v5; // dx
  int v6; // edi
  __int16 v7[2]; // [esp+8h] [ebp-4h] BYREF

  for ( i = this->firstObject; i; i = i->nextObject ) /*0x6b25cd*/
  {
    if ( i->isAliveFlag ) /*0x6b25cf*/
    {
      if ( (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 11))(i) != 15 ) /*0x6b25e3*/
      {
        result = (*((int (__thiscall **)(ObjectClass *))i->AbstractClass + 11))(i); /*0x6b25e9*/
        if ( result != 1 ) /*0x6b25ef*/
          goto LABEL_18; /*0x6b25ef*/
      }
    }
  }
  result = (int)this->altObject; /*0x6b25fc*/
  if ( result ) /*0x6b2604*/
    goto LABEL_18; /*0x6b2604*/
  result = this->flags[0]; /*0x6b260a*/
  if ( (result & 0x500) != 0 ) /*0x6b2613*/
    goto LABEL_18; /*0x6b2613*/
  smudgeTypeIndex_high = HIWORD(this->smudgeTypeIndex); /*0x6b261d*/
  v7[0] = LOWORD(g_DDrawSurfaceManager.scenario[82]) + LOWORD(this->smudgeTypeIndex); /*0x6b2632*/
  v7[1] = HIWORD(g_DDrawSurfaceManager.scenario[82]) + smudgeTypeIndex_high; /*0x6b2637*/
  result = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80); /*0x6b2653*/
  if ( (result & 0x500) != 0 && (result & 0x800) != 0 ) /*0x6b2661*/
    goto LABEL_18; /*0x6b2661*/
  if ( (v5 = HIWORD(g_DDrawSurfaceManager.scenario[88]) + HIWORD(this->smudgeTypeIndex), /*0x6b26c0*/
        v7[0] = LOWORD(g_DDrawSurfaceManager.scenario[88]) + LOWORD(this->smudgeTypeIndex),
        v7[1] = v5,
        result = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7) + 80),
        (result & 0x500) != 0)
    && (result & 0x800) == 0
    || *(_DWORD *)&this->__pad_28[28] != -1
    || (result = LayerClass::CoordinatesLegal(
                   (LayerClass *)&stru_87F5F0.__pad_58[416],
                   (__int16 *)&this->smudgeTypeIndex),
        !(_BYTE)result) )
  {
LABEL_18:
    LOBYTE(result) = 0; /*0x6b26ef*/
    return result; /*0x6b26f0*/
  }
  v6 = *(_DWORD *)&this->__pad_28[16]; /*0x6b26c2*/
  result = *(_DWORD *)&stru_A8EB00.?[340]; /*0x6b26c5*/
  if ( v6 >= *(int *)&stru_A8EB00.?[340] || v6 == 0xFFFF ) /*0x6b26d4*/
  {
    LOBYTE(result) = 1; /*0x6b26ea*/
  }
  else
  {
    result = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v6); /*0x6b26dc*/
    LOBYTE(result) = *(_BYTE *)(result + 736); /*0x6b26e1*/
  }
  return result; /*0x6b26df*/
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

  if ( g_SlaveManagerPool ) /*0x6b2714*/
  {
    __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b2717*/
    g_SlaveManagerPool = 0; /*0x6b271f*/
  }
  v1 = (dword_87F914 + 1) * (dword_87F918 + 1); /*0x6b2734*/
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
    g_SlaveManagerPool = v2; /*0x6b2766*/
  }
  else
  {
    g_SlaveManagerPool = 0; /*0x6b276d*/
  }
  dword_8759A0 = dword_87F918 + 1; /*0x6b2784*/
  dword_8759AC = dword_87F910; /*0x6b2790*/
  result = dword_87F914 + 1; /*0x6b27e4*/
  dword_8759A4 = dword_87F914 + 1; /*0x6b27ec*/
  v6 = dword_87F914 - dword_87F90C; /*0x6b27f8*/
  dword_8759A8 = dword_87F90C; /*0x6b27fe*/
  v7 = (HIWORD(a1) - 14) & (((__int16)(HIWORD(a1) - 14) < 0) - 1); /*0x6b2804*/
  if ( dword_87F914 - dword_87F90C >= (__int16)(a1 + 14) ) /*0x6b2807*/
    v6 = a1 + 14; /*0x6b2809*/
  LOWORD(v8) = dword_87F918 - dword_87F910; /*0x6b2818*/
  if ( dword_87F918 - dword_87F910 >= (__int16)(HIWORD(a1) + 14) ) /*0x6b2821*/
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
          v12 = (char *)g_SlaveManagerPool + 8 * v10 + 8 * v9 * result; /*0x6b2868*/
          v12[4] = 0; /*0x6b286b*/
          v12[5] = 0; /*0x6b286f*/
          v12[6] = 0; /*0x6b2873*/
          v26[0] = v10 + dword_8759A8; /*0x6b2884*/
          v13 = (__int16)(v10 + dword_8759A8); /*0x6b2889*/
          v14 = v9 + dword_8759AC; /*0x6b288c*/
          v26[1] = v9 + dword_8759AC; /*0x6b2897*/
          if ( v13 >= dword_87F90C ) /*0x6b289c*/
          {
            if ( v13 <= dword_87F914 + dword_87F90C && v14 >= dword_87F910 && v14 <= dword_87F918 + dword_87F910 ) /*0x6b28cd*/
            {
              v15 = *((unsigned __int8 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v26) + 284); /*0x6b28ef*/
              v11 = 15 * *((char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v26) + 283) /*0x6b291b*/
                  + *(_DWORD *)*(&off_83FF18 + v15);
              v16 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v26); /*0x6b291d*/
              if ( !CellClass::IsBuildable((int)v16) ) /*0x6b292a*/
                goto LABEL_24; /*0x6b292a*/
              v24 = *(_DWORD *)v26 - 0x10000; /*0x6b2959*/
              v17 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24); /*0x6b295d*/
              if ( !CellClass::IsBuildable((int)v17) ) /*0x6b2966*/
                goto LABEL_24; /*0x6b2966*/
              LOWORD(v21) = v26[0] - 1; /*0x6b2979*/
              HIWORD(v21) = v26[1] - 1; /*0x6b2982*/
              v24 = v21; /*0x6b2991*/
              v18 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24); /*0x6b2995*/
              if ( !CellClass::IsBuildable((int)v18) /*0x6b29d6*/
                || (HIWORD(v22) = v26[1],
                    LOWORD(v22) = v26[0] - 1,
                    v24 = v22,
                    v19 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v24),
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
int InitSlaveManagerGrid(ObjectClass *this)
{
  int v1; // esi
  char *v2; // eax
  _BYTE *v3; // ecx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // edx
  __int16 v9; // dx
  int *j; // esi
  int v11; // ebp
  __int16 v12; // ax
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int *v20; // esi
  int v21; // esi
  int v22; // edx
  int v23; // ecx
  _DWORD *v24; // esi
  int v25; // esi
  int v26; // edx
  int v27; // esi
  ObjectClass *v28; // eax
  ObjectClass *v29; // eax
  char *v30; // [esp+8h] [ebp-4Ch]
  __int16 v31[2]; // [esp+Ch] [ebp-48h] BYREF
  __int16 v32[2]; // [esp+10h] [ebp-44h] BYREF
  int i; // [esp+14h] [ebp-40h]
  int v34; // [esp+18h] [ebp-3Ch]
  int v35; // [esp+1Ch] [ebp-38h]
  int v36; // [esp+20h] [ebp-34h]
  _WORD v37[2]; // [esp+24h] [ebp-30h] BYREF
  int v38; // [esp+28h] [ebp-2Ch]
  int v39; // [esp+2Ch] [ebp-28h]
  MapSeed v40; // [esp+30h] [ebp-24h] BYREF

  if ( g_SlaveManagerPool ) /*0x6b2a7e*/
  {
    __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b2a81*/
    g_SlaveManagerPool = 0; /*0x6b2a89*/
  }
  v1 = (*(_DWORD *)&stru_87F5F0.__pad_58[716] + 1) * (*(_DWORD *)&stru_87F5F0.__pad_58[720] + 1); /*0x6b2a9e*/
  v2 = (char *)__2_YAPAXI_Z(8 * v1); /*0x6b2aa9*/
  if ( v2 ) /*0x6b2ab3*/
  {
    if ( v1 - 1 >= 0 ) /*0x6b2aba*/
    {
      v3 = v2 + 5; /*0x6b2abc*/
      v4 = v1; /*0x6b2abf*/
      do /*0x6b2ace*/
      {
        *(_DWORD *)(v3 - 5) = 0; /*0x6b2ac0*/
        *(v3 - 1) = 0; /*0x6b2ac3*/
        *v3 = 0; /*0x6b2ac7*/
        v3 += 8; /*0x6b2aca*/
        --v4; /*0x6b2acd*/
      }
      while ( v4 ); /*0x6b2ace*/
    }
    g_SlaveManagerPool = v2; /*0x6b2ad0*/
  }
  else
  {
    g_SlaveManagerPool = 0; /*0x6b2ad7*/
  }
  dword_8759A8 = *(_DWORD *)&stru_87F5F0.__pad_58[708]; /*0x6b2ae8*/
  dword_8759AC = *(_DWORD *)&stru_87F5F0.__pad_58[712]; /*0x6b2afa*/
  v40.MapSeed_field_0x18 = -65536; /*0x6b2b11*/
  result = *(_DWORD *)&stru_87F5F0.__pad_58[716] + 1; /*0x6b2b23*/
  v6 = *(_DWORD *)&stru_87F5F0.__pad_58[720] + 1; /*0x6b2b24*/
  v40.MapSeed_field_0x1C = -1; /*0x6b2b25*/
  v7 = 0; /*0x6b2b37*/
  dword_8759A4 = *(_DWORD *)&stru_87F5F0.__pad_58[716] + 1; /*0x6b2b3b*/
  dword_8759A0 = *(_DWORD *)&stru_87F5F0.__pad_58[720] + 1; /*0x6b2b40*/
  v40.MapSeed_field_0x20 = 0xFFFF; /*0x6b2b46*/
  for ( i = 0; v7 < v6; i = v7 ) /*0x6b2b4e*/
  {
    v8 = 0; /*0x6b2b56*/
    v39 = 0; /*0x6b2b5a*/
    if ( result > 0 ) /*0x6b2b5e*/
    {
      while ( 1 ) /*0x6b2b77*/
      {
        v38 = 0; /*0x6b2b77*/
        *(_DWORD *)v32 = 0; /*0x6b2b7b*/
        v30 = (char *)g_SlaveManagerPool + 8 * v8 + 8 * v7 * result; /*0x6b2b82*/
        v30[4] = 0; /*0x6b2b86*/
        v30[5] = 0; /*0x6b2b8a*/
        HIWORD(v40.MapSeed_field_0x10) = dword_8759AC + v7; /*0x6b2ba8*/
        v9 = dword_8759A8 + v8; /*0x6b2bad*/
        LOWORD(v40.MapSeed_field_0x10) = v9; /*0x6b2ba3*/
        *(_DWORD *)v31 = v40.MapSeed_field_0x10; /*0x6b2bb1*/
        for ( j = &v40.MapSeed_field_0x18; ; ++j ) /*0x6b2bb5*/
        {
          v11 = v31[1] + v9; /*0x6b2bc1*/
          if ( v11 > g_MissionQueueFrame.localVariables[160] /*0x6b2bdc*/
            && v9 - v31[1] < g_MissionQueueFrame.localVariables[160]
            && v31[1] - v9 < g_MissionQueueFrame.localVariables[160]
            && v11 <= g_MissionQueueFrame.localVariables[161] )
          {
            break; /*0x6b2bdc*/
          }
          if ( *(int *)v32 >= 3 ) /*0x6b2be3*/
            break; /*0x6b2be3*/
          v12 = HIWORD(v40.MapSeed_field_0x10) + *((_WORD *)j + 1); /*0x6b2bf1*/
          LOWORD(v34) = LOWORD(v40.MapSeed_field_0x10) + *(_WORD *)j; /*0x6b2bfa*/
          HIWORD(v34) = v12; /*0x6b2bff*/
          v9 = v34; /*0x6b2c04*/
          *(_DWORD *)v31 = v34; /*0x6b2c09*/
          ++*(_DWORD *)v32; /*0x6b2c0d*/
        }
        v13 = v9; /*0x6b2c1b*/
        v14 = v31[1] + v9; /*0x6b2c1e*/
        if ( v14 <= g_MissionQueueFrame.localVariables[160] /*0x6b2c45*/
          || v13 - v31[1] >= g_MissionQueueFrame.localVariables[160]
          || v31[1] - v13 >= g_MissionQueueFrame.localVariables[160]
          || v14 > g_MissionQueueFrame.localVariables[161] )
        {
          v30[4] = 1; /*0x6b2ee4*/
        }
        else
        {
          v15 = *((unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31) + 284); /*0x6b2c6c*/
          v16 = 15 * *((char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31) + 283) /*0x6b2c95*/
              + *(_DWORD *)*(&off_83FF18 + v15);
          v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2c97*/
          v38 = v16; /*0x6b2c9c*/
          v18 = (__int16)(HIWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2ca3*/
          v19 = v18 + SLOWORD(v40.MapSeed_field_0x10); /*0x6b2ca6*/
          if ( v19 > g_MissionQueueFrame.localVariables[160] /*0x6b2ccd*/
            && SLOWORD(v40.MapSeed_field_0x10) - v18 < g_MissionQueueFrame.localVariables[160]
            && v18 - SLOWORD(v40.MapSeed_field_0x10) < g_MissionQueueFrame.localVariables[160]
            && v19 <= g_MissionQueueFrame.localVariables[161] )
          {
            v35 = v40.MapSeed_field_0x10 - 0x10000; /*0x6b2cdc*/
            *(_DWORD *)v32 = v40.MapSeed_field_0x10 - 0x10000; /*0x6b2ceb*/
            v20 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x6b2cf4*/
            *(_DWORD *)v40.__pad_0 = v20[9]; /*0x6b2cfd*/
            if ( !(unsigned __int8)MapSeed::IsCellInBounds(&v40) /*0x6b2d4e*/
              || v20[17] != -1
              || v20[57]
              || (v40.MapSeed_field_0x04 = v20[9], Tactical::GetCellData((Tactical *)&v40.MapSeed_field_0x04)[69])
              || (v21 = v20[14], v21 < *(int *)&stru_A8EB00.?[340])
              && v21 != 0xFFFF
              && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v21) + 736) )
            {
              v30[4] = 1; /*0x6b2d5c*/
            }
            v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2d60*/
          }
          v22 = (__int16)(LOWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2d73*/
          v23 = (__int16)(HIWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2d76*/
          if ( v23 + v22 > v17 /*0x6b2da0*/
            && v22 - v23 < v17
            && v23 - v22 < v17
            && v23 + v22 <= g_MissionQueueFrame.localVariables[161] )
          {
            LOWORD(v36) = LOWORD(v40.MapSeed_field_0x10) - 1; /*0x6b2daa*/
            HIWORD(v36) = HIWORD(v40.MapSeed_field_0x10) - 1; /*0x6b2daf*/
            v40.MapSeed_field_0x04 = v36; /*0x6b2dbe*/
            v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v40.MapSeed_field_0x04); /*0x6b2dc7*/
            *(_DWORD *)v40.__pad_0 = v24[9]; /*0x6b2dd0*/
            if ( !(unsigned __int8)MapSeed::IsCellInBounds(&v40) /*0x6b2e21*/
              || v24[17] != -1
              || v24[57]
              || (*(_DWORD *)v32 = v24[9], Tactical::GetCellData((Tactical *)v32)[69])
              || (v25 = v24[14], v25 < *(int *)&stru_A8EB00.?[340])
              && v25 != 0xFFFF
              && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v25) + 736) )
            {
              v30[4] = 1; /*0x6b2e2f*/
            }
            v17 = g_MissionQueueFrame.localVariables[160]; /*0x6b2e33*/
          }
          v26 = (__int16)(LOWORD(v40.MapSeed_field_0x10) - 1); /*0x6b2e3d*/
          v27 = SHIWORD(v40.MapSeed_field_0x10) + v26; /*0x6b2e45*/
          if ( v27 > v17 /*0x6b2e60*/
            && v26 - SHIWORD(v40.MapSeed_field_0x10) < v17
            && SHIWORD(v40.MapSeed_field_0x10) - v26 < v17
            && v27 <= g_MissionQueueFrame.localVariables[161] )
          {
            v37[0] = -1; /*0x6b2e70*/
            v37[1] = 0; /*0x6b2e77*/
            v40.MapSeed_field_0x08 = *CellStruct::Add( /*0x6b2e89*/
                                        (CellStruct *)&v40.MapSeed_field_0x10,
                                        &v40.MapSeed_field_0x0C,
                                        v37);
            v28 = (ObjectClass *)CellCoord::To_CellObj( /*0x6b2e93*/
                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                   (__int16 *)&v40.MapSeed_field_0x08);
            if ( !System_Init_6B2520(v28) ) /*0x6b2e9c*/
              v30[4] = 1; /*0x6b2ea9*/
          }
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&v40.MapSeed_field_0x10) ) /*0x6b2eb1*/
          {
            v29 = (ObjectClass *)CellCoord::To_CellObj( /*0x6b2ec4*/
                                   (CellCoord *)&stru_87F5F0.__pad_58[416],
                                   (__int16 *)&v40.MapSeed_field_0x10);
            if ( !System_Init_6B2520(v29) ) /*0x6b2ecd*/
              v30[4] = 1; /*0x6b2eda*/
          }
        }
        *(_DWORD *)v30 = v38; /*0x6b2ef0*/
        result = dword_8759A4; /*0x6b2ef6*/
        v8 = ++v39; /*0x6b2efb*/
        if ( v39 >= dword_8759A4 ) /*0x6b2f02*/
          break; /*0x6b2f02*/
        v7 = i; /*0x6b2b66*/
      }
      v6 = dword_8759A0; /*0x6b2f08*/
      v7 = i; /*0x6b2f0e*/
    }
    ++v7; /*0x6b2f14*/
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
  LOWORD(v83) = dword_87F914 - dword_87F90C; /*0x6b2fad*/
  if ( dword_87F914 - dword_87F90C >= (__int16)(a3 + 14) ) /*0x6b2fb2*/
    LOWORD(v83) = a3 + 14; /*0x6b2fb4*/
  v6 = HIWORD(v83); /*0x6b2fc4*/
  if ( dword_87F918 - dword_87F910 < SHIWORD(v83) ) /*0x6b2fcd*/
    v6 = dword_87F918 - dword_87F910; /*0x6b2fcf*/
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
  v101 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x6b3010*/
  v106 = 10; /*0x6b3018*/
  v105 = 0; /*0x6b3023*/
  v100 = v5; /*0x6b3027*/
  v108 = v6; /*0x6b302b*/
  if ( v5 <= v6 ) /*0x6b3032*/
  {
    v107 = v4; /*0x6b303b*/
    v98 = (__int16)v83; /*0x6b3047*/
    v10 = g_SlaveManagerPool; /*0x6b304b*/
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
      v12 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v96); /*0x6b3099*/
      if ( !CellClass::IsBuildable((int)v12) ) /*0x6b30a8*/
        goto LABEL_104; /*0x6b30a8*/
      v13 = v100 * dword_8759A4 + v83; /*0x6b30c5*/
      v10 = g_SlaveManagerPool; /*0x6b30c8*/
      v14 = dword_8759A4 * (v100 + 1) + v83; /*0x6b30cd*/
      if ( *((_BYTE *)g_SlaveManagerPool + 8 * v13 + 5) /*0x6b30e5*/
        || *((_BYTE *)g_SlaveManagerPool + 8 * v13 + 13)
        || *((_BYTE *)g_SlaveManagerPool + 8 * v14 + 13)
        || *((_BYTE *)g_SlaveManagerPool + 8 * v14 + 5) )
      {
        v15 = *((_DWORD *)g_SlaveManagerPool + 2 * v13); /*0x6b30f0*/
        v110 = *((_DWORD *)g_SlaveManagerPool + 2 * v13 + 2); /*0x6b30f7*/
        v16 = *((_DWORD *)g_SlaveManagerPool + 2 * v14 + 2); /*0x6b30fe*/
        v17 = *((_DWORD *)g_SlaveManagerPool + 2 * v14); /*0x6b3102*/
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
      v30 = *((_DWORD *)dword_A8EC1C + v29); /*0x6b3293*/
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
              *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v95) + 18) = -1; /*0x6b32fd*/
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
    BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)&v97); /*0x6b3333*/
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
    v41 = &off_83FF18; /*0x6b339e*/
    while ( 1 ) /*0x6b33a3*/
    {
      v42 = (_DWORD *)*v41; /*0x6b33a3*/
      if ( *(_DWORD *)*v41 == v109 && v42[1] == v110 && v42[2] == v111 && v42[3] == v112 ) /*0x6b33c4*/
        break; /*0x6b33c4*/
      ++v41; /*0x6b33c6*/
      ++v40; /*0x6b33c9*/
      if ( (int)v41 >= (int)&off_83FF64 ) /*0x6b33d0*/
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
      v47 = dword_AA10B0; /*0x6b33f1*/
    v12[14] = v47; /*0x6b3402*/
    House::AnnounceUpgrade((int)v12, -1); /*0x6b3409*/
    v77 = v12[9]; /*0x6b341b*/
    BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)&v77); /*0x6b341f*/
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
    v10 = g_SlaveManagerPool; /*0x6b35ee*/
    goto LABEL_105; /*0x6b35ee*/
  }
  v10 = g_SlaveManagerPool; /*0x6b3626*/
LABEL_110:
  __3_YAXPAX_Z(v10); /*0x6b362b*/
  g_SlaveManagerPool = 0; /*0x6b3649*/
  Cell::CreateCrater(v90, v7 - dword_886FA4, k, v93, 0); /*0x6b366a*/
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
          v63 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v98); /*0x6b36dc*/
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
            v74 = v71 - DSurface_ViewBounds; /*0x6b37c4*/
            v75 = v70 - dword_886FA4; /*0x6b37c6*/
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
  v101 = &VectorClass<ObjectClass *>::`vftable'; /*0x6b381b*/
  if ( Block && v104 ) /*0x6b382d*/
    __3_YAXPAX_Z(Block); /*0x6b3830*/
  return 1; /*0x6b3838*/
}



// ==== 0x006B3850  ObjectClass::ProcessSlaveManagerTerrain  this=ObjectClass  sig=csp ====
char ProcessSlaveManagerTerrain(ObjectClass *this)
{
  int v1; // eax
  int v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int *v11; // edx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int *v15; // eax
  int v16; // ebp
  int v17; // edx
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  int v20; // ecx
  int i; // [esp+0h] [ebp-18h]
  int v23; // [esp+4h] [ebp-14h] BYREF
  int v24; // [esp+8h] [ebp-10h] BYREF
  int v25; // [esp+Ch] [ebp-Ch]
  int v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h]

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6b3858*/
  v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6b3862*/
  for ( i = v1; v1; i = v1 ) /*0x6b386d*/
  {
    v2 = *(_DWORD *)(v1 + 36); /*0x6b3877*/
    v23 = v2; /*0x6b3886*/
    v3 = (__int16)v2 - dword_8759A8; /*0x6b3892*/
    v4 = SHIWORD(v2) - dword_8759AC; /*0x6b389a*/
    v5 = v4 * dword_8759A4 + v3; /*0x6b38a5*/
    v6 = dword_8759A4 * (v4 + 1) + v3; /*0x6b38ad*/
    if ( *((_BYTE *)g_SlaveManagerPool + 8 * v5 + 5) /*0x6b38c7*/
      || *((_BYTE *)g_SlaveManagerPool + 8 * v5 + 13)
      || *((_BYTE *)g_SlaveManagerPool + 8 * v6 + 13)
      || *((_BYTE *)g_SlaveManagerPool + 8 * v6 + 5) )
    {
      v7 = 4; /*0x6b38d6*/
      v24 = *((_DWORD *)g_SlaveManagerPool + 2 * v5); /*0x6b38db*/
      v25 = *((_DWORD *)g_SlaveManagerPool + 2 * v5 + 2); /*0x6b38e3*/
      v8 = *((_DWORD *)g_SlaveManagerPool + 2 * v6); /*0x6b38eb*/
      v26 = *((_DWORD *)g_SlaveManagerPool + 2 * v6 + 2); /*0x6b38ee*/
      v27 = v8; /*0x6b38f2*/
      v9 = 1000; /*0x6b38f6*/
      v10 = 0; /*0x6b38fb*/
      v11 = &v24; /*0x6b38fd*/
      do /*0x6b3913*/
      {
        if ( *v11 < v9 ) /*0x6b3905*/
          v9 = *v11; /*0x6b3907*/
        if ( *v11 > v10 ) /*0x6b390b*/
          v10 = *v11; /*0x6b390d*/
        ++v11; /*0x6b390f*/
        --v7; /*0x6b3912*/
      }
      while ( v7 ); /*0x6b3913*/
      if ( v10 - v9 <= 15 ) /*0x6b391a*/
      {
        v23 = v2; /*0x6b3928*/
        v12 = SHIWORD(v2) + (__int16)v2; /*0x6b3934*/
        if ( v12 > g_MissionQueueFrame.localVariables[160] /*0x6b396f*/
          && (__int16)v2 - SHIWORD(v2) < g_MissionQueueFrame.localVariables[160]
          && SHIWORD(v2) - (__int16)v2 < g_MissionQueueFrame.localVariables[160]
          && v12 <= g_MissionQueueFrame.localVariables[161]
          && *(_DWORD *)(i + 68) == -1
          && !*(_DWORD *)(i + 228) )
        {
          v23 = v2; /*0x6b3981*/
          if ( !Tactical::GetCellData((Tactical *)&v23)[69] ) /*0x6b398a*/
          {
            v13 = *(_DWORD *)(i + 56); /*0x6b3995*/
            if ( v13 >= *(int *)&stru_A8EB00.?[340] /*0x6b39b2*/
              || v13 == 0xFFFF
              || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v13) + 736) )
            {
              v14 = 4; /*0x6b39c5*/
              v15 = &v24; /*0x6b39d8*/
              *(_BYTE *)(i + 283) = v9 / 15; /*0x6b39dc*/
              do /*0x6b39ed*/
              {
                v16 = *v15++; /*0x6b39e2*/
                --v14; /*0x6b39e9*/
                *(v15 - 1) = v16 - v9; /*0x6b39ea*/
              }
              while ( v14 ); /*0x6b39ed*/
              v17 = 0; /*0x6b39f7*/
              v18 = &off_83FF18; /*0x6b39f9*/
              while ( 1 ) /*0x6b39fe*/
              {
                v19 = (_DWORD *)*v18; /*0x6b39fe*/
                if ( *(_DWORD *)*v18 == v24 && v19[1] == v25 && v19[2] == v26 && v19[3] == v27 ) /*0x6b3a19*/
                  break; /*0x6b3a19*/
                ++v18; /*0x6b3a1b*/
                ++v17; /*0x6b3a1e*/
                if ( (int)v18 >= (int)&off_83FF64 ) /*0x6b3a25*/
                  goto LABEL_36; /*0x6b3a25*/
              }
              *(_BYTE *)(i + 284) = v17; /*0x6b3a2b*/
              if ( v17 ) /*0x6b3a31*/
                v20 = g_CellTileLookup + v17 - 1; /*0x6b3a40*/
              else
                v20 = dword_AA10B0; /*0x6b3a33*/
              *(_DWORD *)(i + 56) = v20; /*0x6b3a44*/
            }
          }
        }
      }
    }
LABEL_36:
    v1 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x6b3a47*/
  }
  __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b3a68*/
  g_SlaveManagerPool = 0; /*0x6b3a6d*/
  return 1; /*0x6b3a7c*/
}



// ==== 0x006B3A80  FlowTerrainCompute  this=-  sig=csp ====
int __fastcall FlowTerrainCompute(int a1, char a2, int a3, int a4)
{
  int result; // eax
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
  int *v15; // edx
  char v16; // [esp+13h] [ebp-19h]
  int v17; // [esp+14h] [ebp-18h]
  int v18; // [esp+18h] [ebp-14h]
  int v20; // [esp+20h] [ebp-Ch]

  result = dword_8759A4; /*0x6b3a83*/
  v5 = -1; /*0x6b3aa3*/
  v6 = -1; /*0x6b3aa6*/
  v7 = *((_DWORD *)g_SlaveManagerPool + 2 * a3 + 2 * a4 * dword_8759A4); /*0x6b3aa9*/
  v16 = a2; /*0x6b3aac*/
  v17 = v7; /*0x6b3ab0*/
  v18 = -1; /*0x6b3ab4*/
  v20 = -1; /*0x6b3ab8*/
  while ( 1 ) /*0x6b3ae5*/
  {
    if ( !v6 && !v5 ) /*0x6b3aeb*/
      goto LABEL_39; /*0x6b3aeb*/
    v8 = a3 + v6; /*0x6b3af5*/
    v9 = a4 + v5; /*0x6b3afb*/
    if ( v8 >= 0 && v9 >= 0 && v8 < result && v9 < dword_8759A0 ) /*0x6b3b23*/
      break; /*0x6b3b23*/
    if ( !a2 ) /*0x6b3c8d*/
      goto LABEL_42; /*0x6b3c8d*/
LABEL_39:
    v6 = ++v20; /*0x6b3c8f*/
    if ( v20 < 2 ) /*0x6b3c9b*/
    {
      a2 = v16; /*0x6b3ad4*/
      v7 = v17; /*0x6b3ad8*/
      v5 = v18; /*0x6b3adc*/
      result = dword_8759A4; /*0x6b3ae0*/
    }
    else
    {
      v5 = ++v18; /*0x6b3ca5*/
      if ( v18 >= 2 ) /*0x6b3cad*/
      {
        LOBYTE(result) = 1; /*0x6b3cb6*/
        return result; /*0x6b3cbc*/
      }
      a2 = v16; /*0x6b3abe*/
      v7 = v17; /*0x6b3ac2*/
      result = dword_8759A4; /*0x6b3ac6*/
      v6 = -1; /*0x6b3acb*/
      v20 = -1; /*0x6b3ace*/
    }
  }
  v10 = (char *)g_SlaveManagerPool + 8 * v8 + 8 * v9 * result; /*0x6b3b34*/
  if ( v10[4] && (!a2 || !v10[6]) ) /*0x6b3b42*/
  {
    result = abs32(*(_DWORD *)v10 - v7); /*0x6b3b50*/
    if ( result > 15 ) /*0x6b3b55*/
      goto LABEL_42; /*0x6b3b55*/
    goto LABEL_39; /*0x6b3b55*/
  }
  v11 = *(_DWORD *)v10; /*0x6b3b60*/
  result = abs32(*(_DWORD *)v10 - v7); /*0x6b3b69*/
  if ( result <= 15 ) /*0x6b3b6e*/
    goto LABEL_39; /*0x6b3b6e*/
  if ( a1 == 1 ) /*0x6b3b79*/
  {
    if ( v11 < v7 ) /*0x6b3b7d*/
    {
      if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3bba*/
        || (byte_B0B65D || !dword_B0B658)
        && dword_B0B664 > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
             &dword_B0B650,
             dword_B0B658 + dword_B0B664,
             0) )
      {
        v12 = g_SlaveMgrPool++; /*0x6b3bc7*/
        v13 = (int *)((char *)dword_B0B654 + 12 * v12); /*0x6b3bd9*/
        *v13 = v8; /*0x6b3bdc*/
        v13[1] = v9; /*0x6b3bdf*/
        v13[2] = v11; /*0x6b3be2*/
      }
      result = v17 - 15; /*0x6b3be9*/
      goto LABEL_33; /*0x6b3bec*/
    }
  }
  else if ( v11 > v7 ) /*0x6b3bf0*/
  {
    if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3c29*/
      || (byte_B0B65D || !dword_B0B658)
      && dword_B0B664 > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
           &dword_B0B650,
           dword_B0B664 + dword_B0B658,
           0) )
    {
      v14 = g_SlaveMgrPool++; /*0x6b3c36*/
      v15 = (int *)((char *)dword_B0B654 + 12 * v14); /*0x6b3c48*/
      *v15 = v8; /*0x6b3c4b*/
      v15[1] = v9; /*0x6b3c4e*/
      v15[2] = v11; /*0x6b3c51*/
    }
    result = v17 + 15; /*0x6b3c58*/
LABEL_33:
    *(_DWORD *)v10 = result; /*0x6b3c5b*/
    v10[5] = 1; /*0x6b3c5d*/
  }
  if ( v10[4] ) /*0x6b3c61*/
    goto LABEL_39; /*0x6b3c61*/
  result = FlowTerrainCompute(a1, v16, v8, v9); /*0x6b3c7c*/
  if ( (_BYTE)result || v16 ) /*0x6b3c87*/
    goto LABEL_39; /*0x6b3c87*/
LABEL_42:
  LOBYTE(result) = 0; /*0x6b3cbf*/
  return result; /*0x6b3cb3*/
}



// ==== 0x006B3CD0  sub_6B3CD0  this=-  sig=ida-proto ====
char __fastcall sub_6B3CD0(int a1, char a2, int a3, unsigned int a4)
{
  int v5; // esi
  unsigned int v7; // ebp
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

  g_SlaveMgrPool = 0; /*0x6b3ce6*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b3cf6*/
  {
    __3_YAXPAX_Z(dword_B0B654); /*0x6b3cf9*/
    dword_B0B654 = 0; /*0x6b3d01*/
  }
  dword_B0B658 = 0; /*0x6b3d0b*/
  v5 = a3; /*0x6b3d11*/
  byte_B0B65D = 0; /*0x6b3d15*/
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
            v13 = (char *)g_SlaveManagerPool + 8 * v12 + 8 * v9 * dword_8759A4; /*0x6b3d90*/
            if ( v13[4] && !a2 ) /*0x6b3da1*/
              goto LABEL_20; /*0x6b3da1*/
            v14 = 15 * a1 + *(_DWORD *)v13 < 0; /*0x6b3dab*/
            v15 = 15 * a1 + *(_DWORD *)v13; /*0x6b3dab*/
            *(_DWORD *)v13 = v15; /*0x6b3dad*/
            if ( v14 || v15 > 180 ) /*0x6b3db7*/
              *(_DWORD *)v13 = v15 - 15 * a1; /*0x6b3dbb*/
            v13[5] = 1; /*0x6b3dc5*/
            if ( !(unsigned __int8)FlowTerrainCompute(a1, a2, v12, v9) && !a2 ) /*0x6b3dd8*/
            {
LABEL_20:
              __3_YAXPAX_Z(g_SlaveManagerPool); /*0x6b3dff*/
              g_SlaveManagerPool = 0; /*0x6b3e07*/
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
  g_SlaveMgrPool = 0; /*0x6b3e7a*/
  if ( dword_B0B654 && byte_B0B65D ) /*0x6b3e8a*/
  {
    __3_YAXPAX_Z(dword_B0B654); /*0x6b3e8d*/
    dword_B0B654 = 0; /*0x6b3e95*/
  }
  v5 = a4 & 3 | (2 * (a4 & 4)) | (a4 >> 1) & 4; /*0x6b3ebd*/
  v6 = (__int16)a3 - dword_8759A8; /*0x6b3ec4*/
  dword_B0B658 = 0; /*0x6b3ec6*/
  byte_B0B65D = 0; /*0x6b3ed3*/
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
    v11 = (char *)g_SlaveManagerPool + 8 * v10 + 8 * v7 * dword_8759A4; /*0x6b3f2a*/
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
      if ( g_SlaveMgrPool < dword_B0B658 /*0x6b3f90*/
        || (byte_B0B65D || !dword_B0B658)
        && dword_B0B664 > 0
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0B650 + 8))(
             &dword_B0B650,
             dword_B0B658 + dword_B0B664,
             0) )
      {
        v16 = g_SlaveMgrPool++; /*0x6b3f9d*/
        v17 = (int *)((char *)dword_B0B654 + 12 * v16); /*0x6b3faf*/
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
      if ( g_SlaveMgrPool - 1 >= 0 ) /*0x6b4045*/
      {
        v19 = g_SlaveMgrPool; /*0x6b404a*/
        v20 = 12 * (g_SlaveMgrPool - 1); /*0x6b404d*/
        do /*0x6b4078*/
        {
          v20 -= 12; /*0x6b4056*/
          --v19; /*0x6b4074*/
          *((_DWORD *)g_SlaveManagerPool /*0x6b4075*/
          + 2 * *(_DWORD *)((char *)dword_B0B654 + v20 + 12)
          + 2 * dword_8759A4 * *(_DWORD *)((char *)dword_B0B654 + v20 + 16)) = *(_DWORD *)((char *)dword_B0B654
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
  if ( g_SlaveMgrPool - 1 >= 0 ) /*0x6b4089*/
  {
    v21 = 12 * (g_SlaveMgrPool - 1); /*0x6b408e*/
    v22 = g_SlaveMgrPool; /*0x6b4091*/
    do /*0x6b40ba*/
    {
      v21 -= 12; /*0x6b4098*/
      --v22; /*0x6b40b6*/
      *((_DWORD *)g_SlaveManagerPool /*0x6b40b7*/
      + 2 * *(_DWORD *)((char *)dword_B0B654 + v21 + 12)
      + 2 * dword_8759A4 * *(_DWORD *)((char *)dword_B0B654 + v21 + 16)) = *(_DWORD *)((char *)dword_B0B654 + v21 + 20);
    }
    while ( v22 ); /*0x6b40ba*/
  }
LABEL_36:
  g_SlaveMgrPool = 0; /*0x6b40bc*/
  if ( dword_B0B654 ) /*0x6b40c9*/
  {
    if ( byte_B0B65D ) /*0x6b40d3*/
    {
      __3_YAXPAX_Z(dword_B0B654); /*0x6b40d6*/
      dword_B0B654 = 0; /*0x6b40de*/
    }
  }
  dword_B0B658 = 0; /*0x6b40e4*/
  byte_B0B65D = 0; /*0x6b40ed*/
  return 0; /*0x6b402d*/
}



// ==== 0x006B4100  ObjectClass::Map_Get_6B4100  this=ObjectClass  sig=csp ====
int __thiscall Map_Get_6B4100(ObjectClass *this)
{
  int occupant; // edi
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
  ObjectClass *v13; // ebx
  BombClass *attachedBomb; // eax
  int v17; // [esp+14h] [ebp-14h] BYREF
  _DWORD v18[4]; // [esp+18h] [ebp-10h] BYREF

  occupant = this->occupant; /*0x6b4113*/
  v17 = occupant; /*0x6b4120*/
  v2 = SHIWORD(occupant) - dword_8759AC; /*0x6b412c*/
  v3 = (__int16)occupant - dword_8759A8; /*0x6b4130*/
  v4 = v2 * dword_8759A4 + v3; /*0x6b4136*/
  v5 = dword_8759A4 * (v2 + 1) + v3; /*0x6b4142*/
  v6 = *((_DWORD *)g_SlaveManagerPool + 2 * v4); /*0x6b4144*/
  v7 = *((_DWORD *)g_SlaveManagerPool + 2 * v5 + 2); /*0x6b414b*/
  v8 = *((_DWORD *)g_SlaveManagerPool + 2 * v5); /*0x6b414f*/
  v18[1] = *((_DWORD *)g_SlaveManagerPool + 2 * v4 + 2); /*0x6b4152*/
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
  v17 = occupant; /*0x6b4186*/
  v12 = SHIWORD(occupant) + (__int16)occupant; /*0x6b4192*/
  if ( v12 <= g_MissionQueueFrame.localVariables[160] /*0x6b41b1*/
    || (__int16)occupant - SHIWORD(occupant) >= g_MissionQueueFrame.localVariables[160]
    || SHIWORD(occupant) - (__int16)occupant >= g_MissionQueueFrame.localVariables[160]
    || v12 > g_MissionQueueFrame.localVariables[161] )
  {
    v13 = this; /*0x6b421f*/
  }
  else
  {
    v13 = this; /*0x6b41b3*/
    if ( this->ambientSoundController[2] == -1 && !this->u32_39 ) /*0x6b41bd*/
    {
      v17 = occupant; /*0x6b41cb*/
      if ( !Tactical::GetCellData((Tactical *)&v17)[69] ) /*0x6b41d4*/
      {
        attachedBomb = this->attachedBomb; /*0x6b41db*/
        if ( (int)attachedBomb >= *(int *)&stru_A8EB00.?[340] /*0x6b41f8*/
          || attachedBomb == (BombClass *)0xFFFF
          || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * (_DWORD)attachedBomb) + 736) )
        {
          return v9 / 15; /*0x6b421e*/
        }
      }
    }
  }
  return SHIBYTE(v13[1].health); /*0x6b4207*/
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
  v5 = *((_DWORD *)g_SlaveManagerPool + 2 * v4); /*0x6b4284*/
  v29[0] = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 4); /*0x6b4287*/
  v29[1] = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 5); /*0x6b428f*/
  v30 = *((_DWORD *)g_SlaveManagerPool + 2 * v4 + 2); /*0x6b4297*/
  v6 = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 12); /*0x6b429b*/
  LOBYTE(v4) = *((_BYTE *)g_SlaveManagerPool + 8 * v4 + 13); /*0x6b429f*/
  v31 = v6; /*0x6b42a3*/
  v32 = v4; /*0x6b42a7*/
  v7 = dword_8759A4 * (v3 + 1) + v2; /*0x6b42ab*/
  v28[4] = v5; /*0x6b42ae*/
  v28[0] = v5; /*0x6b42b2*/
  v8 = *((_DWORD *)g_SlaveManagerPool + 2 * v7 + 2); /*0x6b42ba*/
  v9 = *((_DWORD *)g_SlaveManagerPool + 2 * v7); /*0x6b42be*/
  v34 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 12); /*0x6b42c1*/
  v10 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 13); /*0x6b42c5*/
  v33 = v8; /*0x6b42c9*/
  v35 = v10; /*0x6b42cd*/
  v11 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 4); /*0x6b42d1*/
  v12 = *((_BYTE *)g_SlaveManagerPool + 8 * v7 + 5); /*0x6b42d5*/
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
void __thiscall VectorClass_UUndoInfoStruct::Destroy(_DynamicVectorClass_UUndoInfoStruct *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b43b6*/
  this->m_10 = 0; /*0x6b43b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b43c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b43c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b43ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6b43d1*/
  this->m_8 = 0; /*0x6b43d4*/
}



// ==== 0x006B43E0  _DynamicVectorClass_UUndoInfoStruct::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_UUndoInfoStruct::GetItemIndex(_DynamicVectorClass_UUndoInfoStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b43e0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x6b43fe*/
  else
    return 0; /*0x6b43e7*/
}



// ==== 0x006B4410  _VectorClass_UUndoInfoStruct::Clear  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UUndoInfoStruct::Clear(_VectorClass_UUndoInfoStruct *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx

  v3 = (_DWORD *)(*(_DWORD *)&this->m_1[3] + 12 * a3); /*0x6b441b*/
  *a2 = *v3; /*0x6b4426*/
  a2[1] = v3[1]; /*0x6b442b*/
  a2[2] = v3[2]; /*0x6b4432*/
  return a2; /*0x6b442e*/
}



// ==== 0x006B4440  _VectorClass_UUndoInfoStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::AddRef(_VectorClass_UUndoInfoStruct *this, int a2)
{
  int m_8; // edi
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx

  m_8 = this->m_8; /*0x6b444b*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6b4450*/
  {
    v3 = 0; /*0x6b4452*/
    if ( m_8 <= 0 ) /*0x6b4456*/
      return 1; /*0x6b4490*/
    v4 = *(_DWORD *)(a2 + 4); /*0x6b4458*/
    v5 = *(_DWORD **)&this->m_1[3]; /*0x6b445b*/
    v6 = (_DWORD *)(v4 + 8); /*0x6b445e*/
    v7 = v4 - (_DWORD)v5; /*0x6b4461*/
    while ( *v5 == *(_DWORD *)((char *)v5 + v7) && v5[1] == *(v6 - 1) && v5[2] == *v6 ) /*0x6b447d*/
    {
      ++v3; /*0x6b447f*/
      v6 += 3; /*0x6b4480*/
      v5 += 3; /*0x6b4483*/
      if ( v3 >= m_8 ) /*0x6b4488*/
        return 1; /*0x6b4488*/
    }
  }
  return 0; /*0x6b448a*/
}



// ==== 0x006B44A0  _VectorClass_UUndoInfoStruct::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::Release(_VectorClass_UUndoInfoStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v12; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // edx

  v3 = a2; /*0x6b44a2*/
  if ( !a2 ) /*0x6b44ae*/
  {
    (*(void (__thiscall **)(_VectorClass_UUndoInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b4591*/
    return 1; /*0x6b4597*/
  }
  v5 = a3; /*0x6b44b4*/
  LOBYTE(this->m_C) = 0; /*0x6b44b8*/
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
    v5 = (_DWORD *)__2_YAPAXI_Z(12 * a2); /*0x6b44c7*/
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
  LOBYTE(this->m_C) = 1; /*0x6b4513*/
  if ( !v8 ) /*0x6b4519*/
    return 0; /*0x6b451e*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x6b4524*/
  {
    m_8 = this->m_8; /*0x6b4529*/
    if ( a2 < m_8 ) /*0x6b452e*/
      m_8 = a2; /*0x6b4530*/
    if ( m_8 > 0 ) /*0x6b4534*/
    {
      v12 = 0; /*0x6b4536*/
      do /*0x6b4554*/
      {
        v13 = &v8[v12]; /*0x6b453b*/
        v14 = (_DWORD *)(v12 * 4 + *(_DWORD *)&this->m_1[3]); /*0x6b453e*/
        v12 += 3; /*0x6b4540*/
        --m_8; /*0x6b4543*/
        *v13 = *v14; /*0x6b4546*/
        v13[1] = v14[1]; /*0x6b454b*/
        v13[2] = v14[2]; /*0x6b4551*/
      }
      while ( m_8 ); /*0x6b4554*/
      v3 = a2; /*0x6b4556*/
    }
    if ( BYTE1(this->m_C) ) /*0x6b455c*/
    {
      __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b4565*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x6b456d*/
    }
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x6b4578*/
  this->m_8 = v3; /*0x6b457e*/
  BYTE1(this->m_C) = a3 == 0; /*0x6b4581*/
  return 1; /*0x6b451b*/
}



// ==== 0x006B45A0  _VectorClass_UUndoInfoStruct::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_UUndoInfoStruct::ddtor(_VectorClass_UUndoInfoStruct *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6b45ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b45b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b45bb*/
  }
  BYTE1(this->m_C) = 0; /*0x6b45be*/
  this->m_8 = 0; /*0x6b45c1*/
}



// ==== 0x006B45D0  _VectorClass_UUndoInfoStruct::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_UUndoInfoStruct::GetSize(_VectorClass_UUndoInfoStruct *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6b45d0*/
    return 0; /*0x6b45de*/
  m_8 = this->m_8; /*0x6b45e4*/
  result = 0; /*0x6b45e7*/
  if ( m_8 <= 0 ) /*0x6b45eb*/
    return -1; /*0x6b4616*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x6b45f1*/
  {
    if ( ++result >= m_8 ) /*0x6b4614*/
      return -1; /*0x6b4614*/
  }
  return result; /*0x6b45db*/
}



// ==== 0x006B4620  _VectorClass_UUndoInfoStruct::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_UUndoInfoStruct::GetCapacity(_VectorClass_UUndoInfoStruct *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b4620*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0xCu; /*0x6b463e*/
  else
    return 0; /*0x6b4627*/
}



// ==== 0x006B4650  _DynamicVectorClass_UUndoInfoStruct::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_UUndoInfoStruct::SetCapacity(_DynamicVectorClass_UUndoInfoStruct *this, int a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // ecx
  int m_8; // ecx
  int v11; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // edx
  int v14; // eax

  v3 = a2; /*0x6b4652*/
  if ( !a2 ) /*0x6b465e*/
  {
    (*(void (__thiscall **)(_DynamicVectorClass_UUndoInfoStruct *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b4731*/
    goto LABEL_26; /*0x6b4731*/
  }
  v5 = a3; /*0x6b4664*/
  LOBYTE(this->m_C) = 0; /*0x6b4668*/
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
  v5 = (_DWORD *)__2_YAPAXI_Z(12 * a2); /*0x6b4677*/
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
  LOBYTE(this->m_C) = 1; /*0x6b46c3*/
  if ( !v8 ) /*0x6b46c9*/
    return 0; /*0x6b474d*/
  if ( *(_DWORD *)&this->m_1[3] ) /*0x6b46cb*/
  {
    m_8 = this->m_8; /*0x6b46d0*/
    if ( a2 < m_8 ) /*0x6b46d5*/
      m_8 = a2; /*0x6b46d7*/
    if ( m_8 > 0 ) /*0x6b46db*/
    {
      v11 = 0; /*0x6b46dd*/
      do /*0x6b46fb*/
      {
        v12 = &v8[v11]; /*0x6b46e2*/
        v13 = (_DWORD *)(v11 * 4 + *(_DWORD *)&this->m_1[3]); /*0x6b46e5*/
        v11 += 3; /*0x6b46e7*/
        --m_8; /*0x6b46ea*/
        *v12 = *v13; /*0x6b46ed*/
        v12[1] = v13[1]; /*0x6b46f2*/
        v12[2] = v13[2]; /*0x6b46f8*/
      }
      while ( m_8 ); /*0x6b46fb*/
      v3 = a2; /*0x6b46fd*/
    }
    if ( BYTE1(this->m_C) ) /*0x6b4703*/
    {
      __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b470c*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x6b4714*/
    }
  }
  *(_DWORD *)&this->m_1[3] = v8; /*0x6b471f*/
  this->m_8 = v3; /*0x6b4725*/
  BYTE1(this->m_C) = a3 == 0; /*0x6b4728*/
LABEL_26:
  v14 = this->m_8; /*0x6b4734*/
  if ( v14 < this->m_10 ) /*0x6b473c*/
    this->m_10 = v14; /*0x6b473e*/
  return 1; /*0x6b4741*/
}



// ==== 0x006B4760  _DynamicVectorClass_UUndoInfoStruct::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_UUndoInfoStruct::FindItemIndex(_DynamicVectorClass_UUndoInfoStruct *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b4760*/
  result = 0; /*0x6b4765*/
  if ( m_10 <= 0 ) /*0x6b476b*/
    return -1; /*0x6b4796*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2 || i[1] != a2[1] || i[2] != a2[2]; i += 3 ) /*0x6b4771*/
  {
    if ( ++result >= m_10 ) /*0x6b4794*/
      return -1; /*0x6b4794*/
  }
  return result; /*0x6b4799*/
}



// ==== 0x006B47A0  _VectorClass_UUndoInfoStruct::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_UUndoInfoStruct::QueryInterface(_VectorClass_UUndoInfoStruct *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b47a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UndoInfoStruct>::`vftable'; /*0x6b47a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b47b0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b47b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b47c0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b47cb*/
  this->m_8 = 0; /*0x6b47d1*/
  if ( (a2 & 1) != 0 ) /*0x6b47d8*/
    __3_YAXPAX_Z(this); /*0x6b47db*/
  return this->__pad_0; /*0x6b47e5*/
}



// ==== 0x006B47F0  _DynamicVectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_UUndoInfoStruct::Constructor_VectorClass_UndoInfoStruct_(
        _DynamicVectorClass_UUndoInfoStruct *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b47f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<UndoInfoStruct>::`vftable'; /*0x6b47f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b4800*/
  {
    __3_YAXPAX_Z(v3); /*0x6b4808*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b4810*/
  }
  BYTE1(this->m_C) = 0; /*0x6b481b*/
  this->m_8 = 0; /*0x6b4821*/
  if ( (a2 & 1) != 0 ) /*0x6b4828*/
    __3_YAXPAX_Z(this); /*0x6b482b*/
  return this->__pad_0; /*0x6b4835*/
}



// ==== 0x006B4840  sub_6B4840  this=-  sig=ida-proto ====
void sub_6B4840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b484c*/
  dbl_B0B710 = Math::Sqrt(v0 + v0); /*0x6b485e*/
}



// ==== 0x006B4870  sub_6B4870  this=-  sig=ida-proto ====
void sub_6B4870()
{
  dbl_B0B760 = dbl_B0B710 / 60.0; /*0x6b487c*/
}



// ==== 0x006B4890  sub_6B4890  this=-  sig=ida-proto ====
void sub_6B4890()
{
  dbl_B0B748 = 1.0 / dbl_B0B760; /*0x6b489c*/
}



// ==== 0x006B48B0  sub_6B48B0  this=-  sig=ida-proto ====
void sub_6B48B0()
{
  dbl_B0B740 = 0.0174532925199433 * 45.0; /*0x6b48bc*/
}



// ==== 0x006B48D0  sub_6B48D0  this=-  sig=ida-proto ====
void sub_6B48D0()
{
  dbl_B0B718 = 0.0174532925199433 * 60.0; /*0x6b48dc*/
}



// ==== 0x006B48F0  sub_6B48F0  this=-  sig=ida-proto ====
void sub_6B48F0()
{
  dbl_B0B6F0 = 0.0174532925199433 * 90.0; /*0x6b48fc*/
}



// ==== 0x006B4910  sub_6B4910  this=-  sig=ida-proto ====
__int64 sub_6B4910()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B6F0 - dbl_B0B718); /*0x6b4922*/
  result = Math::RoundToInt(v0 * dbl_B0B710 * 0.5); /*0x6b4936*/
  dword_B0B768 = result; /*0x6b493b*/
  return result; /*0x6b4940*/
}



// ==== 0x006B4950  sub_6B4950  this=-  sig=ida-proto ====
void sub_6B4950()
{
  dbl_B0B720 = Math::ArcTan((double)dword_B0B768 * 0.00390625); /*0x6b4967*/
}



// ==== 0x006B4980  sub_6B4980  this=-  sig=ida-proto ====
void sub_6B4980()
{
  dbl_B0B738 = Math::ArcTan((double)(2 * dword_B0B768) / dbl_B0B710); /*0x6b49a2*/
}



// ==== 0x006B49B0  sub_6B49B0  this=-  sig=ida-proto ====
__int64 sub_6B49B0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B768) + 0.5); /*0x6b49cb*/
  dword_B0B75C = result; /*0x6b49d0*/
  return result; /*0x6b49d6*/
}



// ==== 0x006B49E0  sub_6B49E0  this=-  sig=ida-proto ====
int sub_6B49E0()
{
  word_B0B708 = 0; /*0x6b49e2*/
  word_B0B70A = 0; /*0x6b49e8*/
  return 0; /*0x6b49ee*/
}



// ==== 0x006B49F0  sub_6B49F0  this=-  sig=ida-proto ====
int sub_6B49F0()
{
  dword_B0B728 = 0; /*0x6b49f2*/
  dword_B0B72C = 0; /*0x6b49f7*/
  dword_B0B730 = 0; /*0x6b49fc*/
  return 0; /*0x6b4a01*/
}



// ==== 0x006B4A10  sub_6B4A10  this=-  sig=ida-proto ====
int sub_6B4A10()
{
  dword_B0B758 = 0; /*0x6b4a15*/
  dword_B0B750 = 128; /*0x6b4a1f*/
  dword_B0B754 = 128; /*0x6b4a24*/
  return 128; /*0x6b4a29*/
}



// ==== 0x006B4A30  sub_6B4A30  this=-  sig=ida-proto ====
int sub_6B4A30()
{
  dword_B0B6F8 = 0; /*0x6b4a32*/
  dword_B0B6FC = 0; /*0x6b4a37*/
  dword_B0B700 = 0; /*0x6b4a3c*/
  dword_B0B704 = 0; /*0x6b4a41*/
  return 0; /*0x6b4a46*/
}



// ==== 0x006B4A50  UnitClass::Create  this=SmudgeClass  sig=csp ====
void **__thiscall UnitClass::Create(UnitClass *this, void *a2, _DWORD *a3, int a4)
{
  int v5; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x6b4a53*/
  this->FootClass = &SmudgeClass::`vftable'; /*0x6b4a5c*/
  this->? = (int)a2; /*0x6b4a62*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4a6c*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4a73*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4a79*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->?); /*0x6b4a80*/
  if ( dword_A8B1F0 < dword_A8B1E8 /*0x6b4abc*/
    || (byte_A8B1ED || !dword_A8B1E8)
    && dword_A8B1F4 > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A8B1E0 + 8))(
         &dword_A8B1E0,
         dword_A8B1E8 + dword_A8B1F4,
         0) )
  {
    v5 = dword_A8B1F0++; /*0x6b4ac9*/
    *((_DWORD *)dword_A8B1E4 + v5) = this; /*0x6b4ad8*/
  }
  if ( *a3 != dword_B0B728 || a3[1] != dword_B0B72C || a3[2] != dword_B0B730 ) /*0x6b4b03*/
  {
    dword_83FFD8 = a4; /*0x6b4b0b*/
    if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x6b4b14*/
    {
      ObjectClass::Destroy((ObjectClass *)this); /*0x6b4b1f*/
      return &this->FootClass; /*0x6b4b27*/
    }
    dword_83FFD8 = -1; /*0x6b4b2a*/
  }
  return &this->FootClass; /*0x6b4b26*/
}



// ==== 0x006B4BE0  SmudgeClass::UnloadPassengers  this=SmudgeClass  sig=csp ====
char __thiscall UnitClass::UnloadPassengers(SmudgeClass *this, int a2)
{
  int v2; // edi
  void (__thiscall **vtable0)(SmudgeClass *); // edx
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6b4be3*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) || v2 != 1 && v2 != 3 ) /*0x6b4bfb*/
    return 0; /*0x6b4c61*/
  a2 = *(_DWORD *)(*((int (__thiscall **)(SmudgeClass *, _BYTE *))this->ObjectClass + 110))(this, v6); /*0x6b4c0e*/
  if ( (int)dword_A8E7AC > 0 || stru_A8EB00.?[391] || (unsigned __int8)Cell::IsWalkable((Cell *)this->Type, &a2, 1) ) /*0x6b4c31*/
    UnitClass::CreateUnloadPlacementCraters((int *)this->Type, &a2); /*0x6b4c45*/
  vtable0 = (void (__thiscall **)(SmudgeClass *))this->ObjectClass; /*0x6b4c4a*/
  this->? = 0; /*0x6b4c4e*/
  vtable0[62](this); /*0x6b4c52*/
  return 1; /*0x6b4c58*/
}



// ==== 0x006B4C70  nullsub_232  this=-  sig=csp ====
void __stdcall nullsub_232(int a1)
{
  ; /*0x6b4c70*/
}



// ==== 0x006B4C80  UnitClass::ReadINI  this=UnitClass  sig=csp ====
int __thiscall UnitClass::ReadINI(INIClass *this)
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
  UnitClass *v12; // eax
  int i; // [esp+4h] [ebp-94h]
  int v14; // [esp+8h] [ebp-90h]
  _DWORD v15[3]; // [esp+Ch] [ebp-8Ch] BYREF
  char String[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x6b4c89*/
  result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&g_INI_Key_Special.?); /*0x6b4c96*/
  v3 = 0; /*0x6b4c9b*/
  v14 = result; /*0x6b4c9f*/
  for ( i = 0; i < v14; ++i ) /*0x6b4ca7*/
  {
    StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6b4cba*/
                                         this->__pad_0,
                                         (unsigned __int8 *)&g_INI_Key_Special.?,
                                         v3);
    INIClass::GetString(this, (unsigned __int8 *)&g_INI_Key_Special.?, StringByIndex, 0, String, 128); /*0x6b4cd4*/
    v5 = strtok(String, Str); /*0x6b4ce3*/
    _6B5440 = Object_Read_6B5440((ObjectClass *)v5); /*0x6b4cf2*/
    if ( _6B5440 != -1 ) /*0x6b4cf7*/
    {
      v7 = strtok(0, Str); /*0x6b4d04*/
      if ( v7 ) /*0x6b4d0e*/
      {
        v8 = atoi(v7); /*0x6b4d21*/
        v9 = strtok(0, Str); /*0x6b4d23*/
        v10 = atoi(v9); /*0x6b4d35*/
        v11 = strtok(0, Str); /*0x6b4d38*/
        if ( !v11 || !atoi(v11) ) /*0x6b4d45*/
        {
          v12 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b4d56*/
          if ( v12 ) /*0x6b4d60*/
          {
            v15[0] = (v8 << 8) + 128; /*0x6b4d7a*/
            v15[1] = (v10 << 8) + 128; /*0x6b4d7e*/
            v15[2] = 0; /*0x6b4d8e*/
            UnitClass::Create(v12, *(void **)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * _6B5440), v15, -1); /*0x6b4d9d*/
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
  INIClass::ClearSection((int)this, (int)unk_81732C, 0); /*0x6b4de7*/
  v7 = 0; /*0x6b4dec*/
  do /*0x6b4e8e*/
  {
    for ( i = 0; i < 512; ++i ) /*0x6b4df0*/
    {
      v8[0] = i; /*0x6b4df6*/
      v8[1] = v1; /*0x6b4e01*/
      v3 = CellCoord::To_CellObj(&dword_87F7E8, v8); /*0x6b4e0b*/
      v4 = v3[18]; /*0x6b4e0d*/
      if ( v4 != -1 && !*((_BYTE *)v3 + 287) ) /*0x6b4e15*/
      {
        v5 = *((_DWORD *)dword_A8EC1C + v4); /*0x6b4e29*/
        sprintf(Buffer, "%d", v7); /*0x6b4e37*/
        sprintf(Source, "%s,%d,%d,%d", (const char *)(v5 + 36), i, v1, *((unsigned __int8 *)v3 + 287)); /*0x6b4e55*/
        LOBYTE(v4) = INIClass::SetString(v9, (unsigned __int8 *)unk_81732C, Buffer, Source); /*0x6b4e71*/
        ++v7; /*0x6b4e76*/
      }
    }
    ++v1; /*0x6b4e87*/
  }
  while ( v1 < 512 ); /*0x6b4e8e*/
  return v4; /*0x6b4e94*/
}



// ==== 0x006B4EA0  SmudgeClass::SaveLoadData  this=SmudgeClass  sig=csp ====
int __thiscall UnitClass::SaveLoadData(SmudgeClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x6b4eb1*/
  if ( Register >= 0 ) /*0x6b4eb5*/
  {
    if ( a2 ) /*0x6b4eb9*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x6b4ec2*/
      *a2 = &SmudgeClass::`vftable'; /*0x6b4ec7*/
      a2[1] = &SmudgeClass::`vftable'; /*0x6b4ecd*/
      a2[2] = &SmudgeClass::`vftable'; /*0x6b4ed4*/
      a2[3] = &SmudgeClass::`vftable'; /*0x6b4edb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x6b4eee*/
  }
  return Register; /*0x6b4ef5*/
}



// ==== 0x006B4F00  SmudgeClass::SaveState  this=SmudgeClass  sig=csp ====
int __stdcall UnitClass::SaveState(SmudgeClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6b4f14*/
}



// ==== 0x006B4F20  SmudgeClass::CheckStatus  this=SmudgeClass  sig=csp ====
int __thiscall UnitClass::CheckStatus(SmudgeClass *this)
{
  return (int)this->Type; /*0x6b4f26*/
}



// ==== 0x006B4F30  SmudgeClass::StubReturn176  this=SmudgeClass  sig=csp ====
int UnitClass::StubReturn176(SmudgeClass *this)
{
  return 176; /*0x6b4f35*/
}



// ==== 0x006B4F40  SmudgeClass::StubReturn29  this=SmudgeClass  sig=csp ====
int UnitClass::StubReturn29(SmudgeClass *this)
{
  return 29; /*0x6b4f45*/
}



// ==== 0x006B4F50  SmudgeClass::GetClassID  this=SmudgeClass  sig=csp ====
int __stdcall UnitClass::GetClassID(SmudgeClass *this, _DWORD *a2)
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
void __stdcall nullsub_233(SmudgeClass *this, int a2)
{
  ; /*0x6b4f90*/
}



// ==== 0x006B4FA0  SmudgeClass::DestroySmudge  this=SmudgeClass  sig=csp ====
void **__thiscall UnitClass::DestroySmudge(SmudgeClass *this, char a2)
{
  int v3; // eax
  SmudgeClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->ObjectClass = &SmudgeClass::`vftable'; /*0x6b4fa6*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4fac*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4fb3*/
  this->? = &SmudgeClass::`vftable'; /*0x6b4fba*/
  AbstractClass::AnnounceExpiredPointer(&this->ObjectClass, 1); /*0x6b4fc1*/
  v5 = this; /*0x6b4fd6*/
  v3 = (*(int (__thiscall **)(_DWORD *, SmudgeClass **))(dword_A8B1E0 + 16))(&dword_A8B1E0, &v5); /*0x6b4fda*/
  if ( v3 != -1 && v3 < dword_A8B1F0 && v3 < --dword_A8B1F0 ) /*0x6b4ff5*/
  {
    do /*0x6b500d*/
    {
      ++v3; /*0x6b4ffd*/
      *((_DWORD *)dword_A8B1E4 + v3 - 1) = *((_DWORD *)dword_A8B1E4 + v3); /*0x6b5001*/
    }
    while ( v3 < dword_A8B1F0 ); /*0x6b500d*/
  }
  if ( byte_A8E9A0 ) /*0x6b5016*/
    ObjectClass::Undeploy((ObjectClass *)this); /*0x6b501a*/
  this->Type = 0; /*0x6b5021*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x6b502b*/
  if ( (a2 & 1) != 0 ) /*0x6b5035*/
    __3_YAXPAX_Z(this); /*0x6b5038*/
  return &this->ObjectClass; /*0x6b5042*/
}



// ==== 0x006B5050  sub_6B5050  this=-  sig=ida-proto ====
int sub_6B5050()
{
  dword_B0B778 = 0; /*0x6b5052*/
  dword_B0B77C = 0; /*0x6b5057*/
  dword_B0B780 = 0; /*0x6b505c*/
  dword_B0B784 = 0; /*0x6b5061*/
  return 0; /*0x6b5066*/
}



// ==== 0x006B5070  sub_6B5070  this=-  sig=ida-proto ====
void sub_6B5070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b507c*/
  dbl_B0B790 = Math::Sqrt(v0 + v0); /*0x6b508e*/
}



// ==== 0x006B50A0  sub_6B50A0  this=-  sig=ida-proto ====
void sub_6B50A0()
{
  dbl_B0B7E0 = dbl_B0B790 / 60.0; /*0x6b50ac*/
}



// ==== 0x006B50C0  sub_6B50C0  this=-  sig=ida-proto ====
void sub_6B50C0()
{
  dbl_B0B7C8 = 1.0 / dbl_B0B7E0; /*0x6b50cc*/
}



// ==== 0x006B50E0  sub_6B50E0  this=-  sig=ida-proto ====
void sub_6B50E0()
{
  dbl_B0B7C0 = 0.0174532925199433 * 45.0; /*0x6b50ec*/
}



// ==== 0x006B5100  sub_6B5100  this=-  sig=ida-proto ====
void sub_6B5100()
{
  dbl_B0B798 = 0.0174532925199433 * 60.0; /*0x6b510c*/
}



// ==== 0x006B5120  sub_6B5120  this=-  sig=ida-proto ====
void sub_6B5120()
{
  dbl_B0B770 = 0.0174532925199433 * 90.0; /*0x6b512c*/
}



// ==== 0x006B5140  sub_6B5140  this=-  sig=ida-proto ====
__int64 sub_6B5140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B770 - dbl_B0B798); /*0x6b5152*/
  result = Math::RoundToInt(v0 * dbl_B0B790 * 0.5); /*0x6b5166*/
  dword_B0B7E8 = result; /*0x6b516b*/
  return result; /*0x6b5170*/
}



// ==== 0x006B5180  sub_6B5180  this=-  sig=ida-proto ====
void sub_6B5180()
{
  dbl_B0B7A0 = Math::ArcTan((double)dword_B0B7E8 * 0.00390625); /*0x6b5197*/
}



// ==== 0x006B51B0  sub_6B51B0  this=-  sig=ida-proto ====
void sub_6B51B0()
{
  dbl_B0B7B8 = Math::ArcTan((double)(2 * dword_B0B7E8) / dbl_B0B790); /*0x6b51d2*/
}



// ==== 0x006B51E0  sub_6B51E0  this=-  sig=ida-proto ====
__int64 sub_6B51E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B7E8) + 0.5); /*0x6b51fb*/
  dword_B0B7DC = result; /*0x6b5200*/
  return result; /*0x6b5206*/
}



// ==== 0x006B5210  sub_6B5210  this=-  sig=ida-proto ====
int sub_6B5210()
{
  Map_BottomRightCell = 0; /*0x6b5212*/
  return 0; /*0x6b521e*/
}



// ==== 0x006B5220  sub_6B5220  this=-  sig=ida-proto ====
int sub_6B5220()
{
  dword_B0B7A8 = 0; /*0x6b5222*/
  dword_B0B7AC = 0; /*0x6b5227*/
  dword_B0B7B0 = 0; /*0x6b522c*/
  return 0; /*0x6b5231*/
}



// ==== 0x006B5240  MapCoords::Init  this=MapCoords  sig=ida-proto ====
int MapCoords_Init()
{
  dword_B0B7D8 = 0; /*0x6b5245*/
  dword_B0B7D0 = 128; /*0x6b524f*/
  dword_B0B7D4 = 128; /*0x6b5254*/
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
  this->ArrayIndex = -1; /*0x6b5277*/
  this->Width = 1; /*0x6b5281*/
  this->Height = 1; /*0x6b5287*/
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
  v3 = dword_A8EC28; /*0x6b52e1*/
  if ( dword_A8EC28 < dword_A8EC20 /*0x6b5322*/
    || (byte_A8EC25 || !dword_A8EC20)
    && dword_A8EC2C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A8EC18 + 8))(
               &dword_A8EC18,
               dword_A8EC20 + dword_A8EC2C,
               0) == 0,
        v3 = dword_A8EC28,
        !v4) )
  {
    dword_A8EC28 = v3 + 1; /*0x6b5327*/
    *((_DWORD *)dword_A8EC1C + v3) = this; /*0x6b5331*/
    v3 = dword_A8EC28; /*0x6b5334*/
  }
  v5 = 0; /*0x6b5339*/
  if ( v3 <= 0 ) /*0x6b533d*/
  {
LABEL_11:
    this->ArrayIndex = -1; /*0x6b5351*/
    return this; /*0x6b535a*/
  }
  else
  {
    v6 = (void **)dword_A8EC1C; /*0x6b533f*/
    while ( *v6 != this ) /*0x6b5347*/
    {
      ++v5; /*0x6b5349*/
      ++v6; /*0x6b534a*/
      if ( v5 >= v3 ) /*0x6b534f*/
        goto LABEL_11; /*0x6b534f*/
    }
    this->ArrayIndex = v5; /*0x6b5361*/
    return this; /*0x6b5367*/
  }
}



// ==== 0x006B5440  ObjectClass::Object_Read_6B5440  this=ObjectClass  sig=csp ====
int __thiscall Object_Read_6B5440(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x6b5446*/
    return -1; /*0x6b5446*/
  v2 = 0; /*0x6b544d*/
  if ( *(int *)&stru_A8EB00.?[68] <= 0 ) /*0x6b5451*/
    return -1; /*0x6b5476*/
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v2) + 36), (char *)this) ) /*0x6b546a*/
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[68] ) /*0x6b5474*/
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

  result = dword_A8EC28; /*0x6b5490*/
  for ( i = 0; i < dword_A8EC28; ++i ) /*0x6b54a3*/
  {
    v4 = *((_DWORD *)dword_A8EC1C + i); /*0x6b54af*/
    if ( *(_BYTE *)(v4 + 556) ) /*0x6b54b2*/
    {
      _makepath(Buffer, 0, 0, (const char *)(v4 + 36), (const char *)&off_7E1BC6 + 112 * a1); /*0x6b54dc*/
      CCFileClass::Construct(v5, Buffer); /*0x6b54ed*/
      *(_DWORD *)(v4 + 164) = CCFileClass::ReadEntireFile(v5); /*0x6b54ff*/
      v5[0] = &CCFileClass::`vftable'; /*0x6b5505*/
      v7 = 0; /*0x6b550d*/
      Vector::Clear((int)v6); /*0x6b5515*/
      v5[0] = &off_7E1668; /*0x6b551e*/
      BufferIOFileClass::Dtor(v5); /*0x6b5526*/
    }
    result = dword_A8EC28; /*0x6b552b*/
  }
  return result; /*0x6b553a*/
}



// ==== 0x006B5550  SmudgeTypeClass::GetType  this=SmudgeTypeClass  sig=csp ====
bool __thiscall SmudgeTypeClass::GetType(SmudgeTypeClass *this, __int16 *a2, int a3)
{
  UnitClass *v4; // eax
  int v5; // edx
  bool result; // al
  _DWORD v7[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b555b*/
  result = 0; /*0x6b55a7*/
  if ( v4 ) /*0x6b5565*/
  {
    v7[2] = 0; /*0x6b556d*/
    v5 = a2[1]; /*0x6b5578*/
    v7[0] = (*a2 << 8) + 128; /*0x6b5585*/
    v7[1] = (v5 << 8) + 128; /*0x6b559a*/
    if ( UnitClass::Create(v4, this, v7, -1) ) /*0x6b559e*/
      return 1; /*0x6b5565*/
  }
  return result; /*0x6b55a9*/
}



// ==== 0x006B55C0  SmudgeTypeClass::GetFlag  this=SmudgeTypeClass  sig=csp ====
void **__thiscall SmudgeTypeClass::GetFlag(SmudgeTypeClass *this, int a2)
{
  UnitClass *v3; // eax

  v3 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b55c8*/
  if ( v3 ) /*0x6b55d2*/
    return UnitClass::Create(v3, this, &dword_B0B7A8, -1); /*0x6b55de*/
  else
    return 0; /*0x6b55e7*/
}



// ==== 0x006B55F0  SmudgeTypeClass::vt_entry_A0  this=SmudgeTypeClass  sig=csp ====
void __thiscall SmudgeTypeClass::vt_entry_A0(SmudgeTypeClass *this, int *a2, int *a3, int a4, int a5, __int16 *a6)
{
  int v7; // ebx
  int v8; // edx
  int Width; // ecx
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp-1Ch] [ebp-2Ch]
  int v13; // [esp+8h] [ebp-8h] BYREF
  int v14; // [esp+Ch] [ebp-4h]

  v7 = (*((int (__thiscall **)(SmudgeTypeClass *))this->ObjectTypeClass + 39))(this); /*0x6b55ff*/
  if ( v7 ) /*0x6b5603*/
  {
    v8 = a2[1]; /*0x6b5614*/
    v13 = *a2; /*0x6b5619*/
    v14 = v8; /*0x6b561d*/
    if ( a4 ) /*0x6b5621*/
    {
      Width = this->Width; /*0x6b5623*/
      v14 += -15 * (a4 / Width + a4 % Width); /*0x6b5659*/
      v13 += 60 * (a4 / Width - a4 % Width) / 2; /*0x6b5661*/
    }
    v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a6); /*0x6b5674*/
    v12 = *((__int16 *)v10 + 134); /*0x6b568a*/
    v11 = ZCoordToScreenY(a5); /*0x6b568c*/
    DrawToSurfaceSHP((int)g_DSurface_Hidden_2, v10[13], v7, 0, &v13, a3, 3584, 0, -1 - v11, 0, v12, 0, 0, 0, 0, 0); /*0x6b56b4*/
  }
}



// ==== 0x006B56D0  SmudgeTypeClass::GetSize  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::GetSize(SmudgeTypeClass *this, unsigned __int8 ***a2)
{
  int result; // eax
  char Bool_Overwrite; // al
  char Burn; // cl
  char v6; // al
  int Width; // [esp-8h] [ebp-210h]
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  INIClass::ResetSection((INIClass *)a2); /*0x6b56e3*/
  if ( ObjectTypeClass::LoadFromINI((ObjectTypeClass *)this, a2) ) /*0x6b56eb*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aCrater, this->Crater); /*0x6b570b*/
    Burn = this->Burn; /*0x6b5710*/
    this->Crater = Bool_Overwrite; /*0x6b5716*/
    v6 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)this->?, aBurn, Burn); /*0x6b5725*/
    Width = this->Width; /*0x6b5732*/
    this->Burn = v6; /*0x6b5739*/
    this->Width = INIClass::ReadInt_Overwrite( /*0x6b5744*/
                    (bool *)a2,
                    (unsigned __int8 *)this->?,
                    (unsigned __int8 *)&stru_82BA00.?[151],
                    Width);
    this->Height = INIClass::ReadInt_Overwrite( /*0x6b575e*/
                     (bool *)a2,
                     (unsigned __int8 *)this->?,
                     (unsigned __int8 *)g_INI_Key_Height,
                     this->Height);
    if ( this->? ) /*0x6b5764*/
      _makepath(Buffer, 0, 0, this->?, (const char *)&off_7E1BC6 + 112 * dword_A8B230[130].uniqueId); /*0x6b57b4*/
    else
      _makepath(Buffer, 0, 0, this->?, Ext); /*0x6b5784*/
    result = (int)SearchMIXFile(Buffer, 0); /*0x6b57c2*/
    this->? = (SHPStruct *)result; /*0x6b57c7*/
    LOBYTE(result) = 1; /*0x6b57ce*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6b57db*/
  }
  return result; /*0x6b57cd*/
}



// ==== 0x006B57F0  SmudgeTypeClass::PowerDrainUpdate  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::PowerDrainUpdate(SmudgeTypeClass *this, int *a2)
{
  int v3; // ecx
  int v4; // edx

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x6b57f9*/
  Power::TimerProcess(this->ArrayIndex); /*0x6b5807*/
  LOBYTE(v3) = this->Crater; /*0x6b580c*/
  Power::FlagProcess((Power *)a2, v3); /*0x6b5815*/
  LOBYTE(v4) = this->Burn; /*0x6b581a*/
  Power::FlagProcess((Power *)a2, v4); /*0x6b5823*/
  Power::TimerProcess(this->Width); /*0x6b5831*/
  return Power::TimerProcess(this->Height); /*0x6b5844*/
}



// ==== 0x006B5850  SmudgeTypeClass::LoadTypeData  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::LoadTypeData(SmudgeTypeClass *this, int a2)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x6b585b*/
  if ( result >= 0 ) /*0x6b5862*/
  {
    if ( this ) /*0x6b5866*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x6b586f*/
      this->ObjectTypeClass = &SmudgeTypeClass::`vftable'; /*0x6b5874*/
      this->? = &SmudgeTypeClass::`vftable'; /*0x6b587a*/
      this->? = &SmudgeTypeClass::`vftable'; /*0x6b5881*/
      this->? = &SmudgeTypeClass::`vftable'; /*0x6b5888*/
    }
    VoxelAnimType::LoadAnim((char *)this); /*0x6b5891*/
    ObjectTypeClass::Load2DArt((char *)this); /*0x6b5898*/
    return 0; /*0x6b589d*/
  }
  return result; /*0x6b589f*/
}



// ==== 0x006B58B0  SmudgeTypeClass::SaveToINI  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::SaveToINI(SmudgeTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x6b58bf*/
  if ( result >= 0 ) /*0x6b58c6*/
    return 0; /*0x6b58c8*/
  return result; /*0x6b58ca*/
}



// ==== 0x006B58D0  SmudgeTypeClass::GetClassIdentifier  this=SmudgeTypeClass  sig=csp ====
int __stdcall SmudgeTypeClass::GetClassIdentifier(SmudgeTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6b58d6*/
    return -2147467261; /*0x6b58d8*/
  *a2 = 1525862008; /*0x6b58e6*/
  a2[1] = 298976820; /*0x6b58ee*/
  a2[2] = 1610654892; /*0x6b58f7*/
  a2[3] = unk_7E961C; /*0x6b5900*/
  return 0; /*0x6b58dd*/
}



// ==== 0x006B5910  FactoryClass::FindOrCreate  this=AbstractTypeClass  sig=csp ====
int __thiscall FactoryClass_FindOrCreate(char *Source)
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x6b592c*/
    return 0; /*0x6b598f*/
  v2 = 0; /*0x6b593d*/
  if ( dword_A8EC28 <= 0 ) /*0x6b5941*/
  {
LABEL_6:
    if ( __2_YAPAXI_Z(0x2A4u) ) /*0x6b596b*/
      return SmudgeTypeClass::SmudgeTypeClass(Source); /*0x6b5981*/
    return 0; /*0x6b5975*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)dword_A8EC1C + v2) + 36), Source) ) /*0x6b595a*/
  {
    if ( ++v2 >= dword_A8EC28 ) /*0x6b5964*/
      goto LABEL_6; /*0x6b5964*/
  }
  return *((_DWORD *)dword_A8EC1C + v2); /*0x6b597f*/
}



// ==== 0x006B59A0  StandardCreateUnitAtCoords  this=ObjectClass  sig=csp ====
char __fastcall StandardCreateUnitAtCoords(_DWORD *a1, int a2, int a3, char a4)
{
  _DWORD *v4; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // eax
  UnitClass *v16; // esi
  int v17; // eax
  UnitClass *v18; // esi
  int v19; // eax
  int v20; // [esp+4h] [ebp-40h]
  int v21; // [esp+8h] [ebp-3Ch] BYREF
  int v22; // [esp+Ch] [ebp-38h]
  _DWORD *v23; // [esp+10h] [ebp-34h]
  void **v24; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  int v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  int v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  void **v30; // [esp+2Ch] [ebp-18h] BYREF
  void *v31; // [esp+30h] [ebp-14h]
  int v32; // [esp+34h] [ebp-10h]
  char v33; // [esp+39h] [ebp-Bh]
  int i; // [esp+3Ch] [ebp-8h]
  int v35; // [esp+40h] [ebp-4h]

  v4 = a1; /*0x6b59a4*/
  v22 = a2; /*0x6b59a6*/
  v23 = a1; /*0x6b59aa*/
  if ( __PAIR32__(a1[1] / 256, *a1 / 256) == Map_BottomRightCell ) /*0x6b59d5*/
    return 0; /*0x6b59e6*/
  Game::LockMutex((Game *)&v30, 0, 0); /*0x6b59f4*/
  v6 = 0; /*0x6b59fe*/
  v30 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5a02*/
  v35 = 10; /*0x6b5a0a*/
  for ( i = 0; v6 < *(int *)&stru_A8EB00.?[68]; ++v6 ) /*0x6b5a16*/
  {
    v7 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v6); /*0x6b5a21*/
    if ( *(_BYTE *)(v7 + 673) ) /*0x6b5a24*/
    {
      LOWORD(v20) = *v4 / 256; /*0x6b5a3f*/
      HIWORD(v20) = v4[1] / 256; /*0x6b5a57*/
      v21 = v20; /*0x6b5a64*/
      if ( (unsigned __int8)Cell::IsWalkable((Cell *)v7, &v21, a4) ) /*0x6b5a6c*/
      {
        if ( i < v32 /*0x6b5a9f*/
          || (v33 || !v32)
          && v35 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v30[2])(&v30, v35 + v32, 0) )
        {
          v8 = i++; /*0x6b5aaa*/
          *((_DWORD *)v31 + v8) = v7; /*0x6b5ab5*/
        }
      }
    }
  }
  Game::LockMutex((Game *)&v24, 0, 0); /*0x6b5acc*/
  v9 = 10; /*0x6b5ad1*/
  v10 = 0; /*0x6b5ad6*/
  v11 = i; /*0x6b5ad8*/
  v24 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5adc*/
  v29 = 10; /*0x6b5ae6*/
  v28 = 0; /*0x6b5aea*/
  if ( i > 0 ) /*0x6b5aee*/
  {
    v12 = v26; /*0x6b5af4*/
    while ( 1 ) /*0x6b5b01*/
    {
      v13 = *((_DWORD *)v31 + v10); /*0x6b5b01*/
      v14 = *(_DWORD *)(v13 + 664); /*0x6b5b0a*/
      if ( !a4 ) /*0x6b5b10*/
        break; /*0x6b5b10*/
      if ( v14 <= 1 || *(int *)(v13 + 668) <= 1 ) /*0x6b5b5f*/
        goto LABEL_35; /*0x6b5b5f*/
      if ( v28 < v12 ) /*0x6b5b65*/
        goto LABEL_33; /*0x6b5b65*/
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b73*/
        goto LABEL_35; /*0x6b5b73*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v24[2])(&v24, v9 + v12, 0) ) /*0x6b5b81*/
        goto LABEL_33; /*0x6b5b86*/
LABEL_34:
      v12 = v26; /*0x6b5b9a*/
      v9 = v29; /*0x6b5b9e*/
LABEL_35:
      v11 = i; /*0x6b5ba2*/
      if ( ++v10 >= i ) /*0x6b5ba9*/
      {
        v4 = v23; /*0x6b5baf*/
        goto LABEL_37; /*0x6b5baf*/
      }
    }
    if ( (v14 != 1 || *(_DWORD *)(v13 + 668) != 1) && (v22 <= 60 || a3 <= 50) ) /*0x6b5b2a*/
      goto LABEL_35; /*0x6b5b2a*/
    if ( v28 >= v12 ) /*0x6b5b30*/
    {
      if ( !BYTE1(v27) && v12 || v9 <= 0 ) /*0x6b5b3e*/
        goto LABEL_35; /*0x6b5b3e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v24[2])(&v24, v9 + v12, 0) ) /*0x6b5b51*/
        goto LABEL_34; /*0x6b5b51*/
    }
LABEL_33:
    v15 = v28++; /*0x6b5b88*/
    *((_DWORD *)Block + v15) = v13; /*0x6b5b97*/
    goto LABEL_34; /*0x6b5b97*/
  }
LABEL_37:
  if ( v28 <= 0 ) /*0x6b5bb7*/
  {
    if ( v11 > 0 ) /*0x6b5bf2*/
    {
      v18 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5bfe*/
      if ( v18 ) /*0x6b5c05*/
      {
        v19 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i - 1); /*0x6b5c1a*/
        UnitClass::Create(v18, *((void **)v31 + v19), v4, -1); /*0x6b5c2c*/
      }
    }
  }
  else
  {
    v16 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5bc3*/
    if ( v16 ) /*0x6b5bca*/
    {
      v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v28 - 1); /*0x6b5bde*/
      UnitClass::Create(v16, *((void **)Block + v17), v4, -1); /*0x6b5bee*/
    }
  }
  v24 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5c3c*/
  if ( Block && BYTE1(v27) ) /*0x6b5c46*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5c49*/
    Block = 0; /*0x6b5c51*/
  }
  BYTE1(v27) = 0; /*0x6b5c59*/
  v26 = 0; /*0x6b5c5f*/
  v30 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5c63*/
  if ( v31 ) /*0x6b5c67*/
  {
    if ( v33 ) /*0x6b5c6d*/
      __3_YAXPAX_Z(v31); /*0x6b5c70*/
  }
  return 0; /*0x6b59e2*/
}



// ==== 0x006B5C90  TimedCreateUnitAtCoords  this=ObjectClass  sig=csp ====
int __fastcall TimedCreateUnitAtCoords(_DWORD *a1, int a2, int a3, char a4)
{
  _DWORD *v4; // ebp
  int v5; // kr00_4
  int result; // eax
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // edx
  int v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  UnitClass *v17; // esi
  int v18; // eax
  UnitClass *v19; // esi
  int v20; // eax
  int v21; // [esp+4h] [ebp-40h]
  int v22; // [esp+8h] [ebp-3Ch] BYREF
  int v23; // [esp+Ch] [ebp-38h]
  _DWORD *v24; // [esp+10h] [ebp-34h]
  void **v25; // [esp+14h] [ebp-30h] BYREF
  void *Block; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+1Ch] [ebp-28h]
  int v28; // [esp+20h] [ebp-24h]
  int v29; // [esp+24h] [ebp-20h]
  int v30; // [esp+28h] [ebp-1Ch]
  void **v31; // [esp+2Ch] [ebp-18h] BYREF
  void *v32; // [esp+30h] [ebp-14h]
  int v33; // [esp+34h] [ebp-10h]
  char v34; // [esp+39h] [ebp-Bh]
  int i; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]

  v4 = a1; /*0x6b5c94*/
  v23 = a2; /*0x6b5c96*/
  v24 = a1; /*0x6b5c9a*/
  v5 = a1[1]; /*0x6b5cb6*/
  result = v5 / 256; /*0x6b5cbb*/
  if ( __PAIR32__(v5 / 256, *a1 / 256) == Map_BottomRightCell ) /*0x6b5cc5*/
  {
    LOBYTE(result) = 0; /*0x6b5cd0*/
    return result; /*0x6b5cd6*/
  }
  Game::LockMutex((Game *)&v31, 0, 0); /*0x6b5ce4*/
  v7 = 0; /*0x6b5cee*/
  v31 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5cf2*/
  v36 = 10; /*0x6b5cfa*/
  for ( i = 0; v7 < *(int *)&stru_A8EB00.?[68]; ++v7 ) /*0x6b5d06*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v7); /*0x6b5d11*/
    if ( *(_BYTE *)(v8 + 672) ) /*0x6b5d14*/
    {
      LOWORD(v21) = *v4 / 256; /*0x6b5d2f*/
      HIWORD(v21) = v4[1] / 256; /*0x6b5d47*/
      v22 = v21; /*0x6b5d54*/
      if ( (unsigned __int8)Cell::IsWalkable((Cell *)v8, &v22, a4) ) /*0x6b5d5c*/
      {
        if ( i < v33 /*0x6b5d8f*/
          || (v34 || !v33)
          && v36 > 0
          && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v31[2])(&v31, v36 + v33, 0) )
        {
          v9 = i++; /*0x6b5d9a*/
          *((_DWORD *)v32 + v9) = v8; /*0x6b5da5*/
        }
      }
    }
  }
  Game::LockMutex((Game *)&v25, 0, 0); /*0x6b5dbc*/
  v10 = 10; /*0x6b5dc1*/
  v11 = 0; /*0x6b5dc6*/
  v12 = i; /*0x6b5dc8*/
  v25 = &DynamicVectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5dcc*/
  v30 = 10; /*0x6b5dd6*/
  v29 = 0; /*0x6b5dda*/
  if ( i > 0 ) /*0x6b5dde*/
  {
    v13 = v27; /*0x6b5de4*/
    while ( 1 ) /*0x6b5df1*/
    {
      v14 = *((_DWORD *)v32 + v11); /*0x6b5df1*/
      v15 = *(_DWORD *)(v14 + 664); /*0x6b5dfa*/
      if ( !a4 ) /*0x6b5e00*/
        break; /*0x6b5e00*/
      if ( v15 <= 1 || *(int *)(v14 + 668) <= 1 ) /*0x6b5e4f*/
        goto LABEL_35; /*0x6b5e4f*/
      if ( v29 < v13 ) /*0x6b5e55*/
        goto LABEL_33; /*0x6b5e55*/
      if ( !BYTE1(v28) && v13 || v10 <= 0 ) /*0x6b5e63*/
        goto LABEL_35; /*0x6b5e63*/
      if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v10 + v13, 0) ) /*0x6b5e71*/
        goto LABEL_33; /*0x6b5e76*/
LABEL_34:
      v13 = v27; /*0x6b5e8a*/
      v10 = v30; /*0x6b5e8e*/
LABEL_35:
      v12 = i; /*0x6b5e92*/
      if ( ++v11 >= i ) /*0x6b5e99*/
      {
        v4 = v24; /*0x6b5e9f*/
        goto LABEL_37; /*0x6b5e9f*/
      }
    }
    if ( (v15 != 1 || *(_DWORD *)(v14 + 668) != 1) && (v23 <= 60 || a3 <= 50) ) /*0x6b5e1a*/
      goto LABEL_35; /*0x6b5e1a*/
    if ( v29 >= v13 ) /*0x6b5e20*/
    {
      if ( !BYTE1(v28) && v13 || v10 <= 0 ) /*0x6b5e2e*/
        goto LABEL_35; /*0x6b5e2e*/
      if ( !((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v25[2])(&v25, v10 + v13, 0) ) /*0x6b5e41*/
        goto LABEL_34; /*0x6b5e41*/
    }
LABEL_33:
    v16 = v29++; /*0x6b5e78*/
    *((_DWORD *)Block + v16) = v14; /*0x6b5e87*/
    goto LABEL_34; /*0x6b5e87*/
  }
LABEL_37:
  if ( v29 <= 0 ) /*0x6b5ea7*/
  {
    if ( v12 > 0 ) /*0x6b5ee2*/
    {
      v19 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5eee*/
      if ( v19 ) /*0x6b5ef5*/
      {
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, i - 1); /*0x6b5f0a*/
        UnitClass::Create(v19, *((void **)v32 + v20), v4, -1); /*0x6b5f1c*/
      }
    }
  }
  else
  {
    v17 = (UnitClass *)__2_YAPAXI_Z(0xB0u); /*0x6b5eb3*/
    if ( v17 ) /*0x6b5eba*/
    {
      v18 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v29 - 1); /*0x6b5ece*/
      UnitClass::Create(v17, *((void **)Block + v18), v4, -1); /*0x6b5ede*/
    }
  }
  v25 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5f2c*/
  if ( Block && BYTE1(v28) ) /*0x6b5f36*/
  {
    __3_YAXPAX_Z(Block); /*0x6b5f39*/
    Block = 0; /*0x6b5f41*/
  }
  result = (int)v32; /*0x6b5f45*/
  BYTE1(v28) = 0; /*0x6b5f49*/
  v27 = 0; /*0x6b5f4f*/
  v31 = &VectorClass<SmudgeTypeClass const *>::`vftable'; /*0x6b5f53*/
  if ( v32 ) /*0x6b5f57*/
  {
    if ( v34 ) /*0x6b5f5d*/
      __3_YAXPAX_Z(v32); /*0x6b5f60*/
  }
  LOBYTE(result) = 0; /*0x6b5f6b*/
  return result; /*0x6b5cd2*/
}



// ==== 0x006B5F80  Cell::IsWalkable  this=SmudgeTypeClass  sig=csp ====
int __thiscall Cell::IsWalkable(Cell *this, _WORD *a2, char a3)
{
  int result; // eax
  int v4; // ebx
  int v6; // ebp
  void *v7; // esi
  int v8; // esi
  Cell *v9; // [esp+10h] [ebp-8h]
  __int16 v10[2]; // [esp+14h] [ebp-4h] BYREF
  __int16 *v11; // [esp+1Ch] [ebp+4h]

  result = (int)this->Cell_field_0x29C; /*0x6b5f83*/
  v4 = 0; /*0x6b5f8b*/
  v9 = this; /*0x6b5f91*/
  if ( result <= 0 ) /*0x6b5f95*/
  {
LABEL_16:
    LOBYTE(result) = 1; /*0x6b6060*/
  }
  else
  {
    while ( 1 ) /*0x6b5fa5*/
    {
      v6 = 0; /*0x6b5fa5*/
      if ( (int)this->Cell_field_0x298 > 0 ) /*0x6b5fa9*/
        break; /*0x6b5fa9*/
LABEL_15:
      result = (int)this->Cell_field_0x29C; /*0x6b6051*/
      if ( ++v4 >= result ) /*0x6b605a*/
        goto LABEL_16; /*0x6b605a*/
    }
    while ( 1 ) /*0x6b5fbc*/
    {
      LOWORD(v11) = v6 + *a2; /*0x6b5fbc*/
      HIWORD(v11) = v4 + a2[1]; /*0x6b5fc1*/
      *(_DWORD *)v10 = v11; /*0x6b5fd4*/
      v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x6b5fe3*/
      result = LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], a2); /*0x6b5fe5*/
      if ( !(_BYTE)result ) /*0x6b5fec*/
        break; /*0x6b5fec*/
      if ( *((_BYTE *)v7 + 284) ) /*0x6b5fee*/
        break; /*0x6b5fee*/
      result = -1; /*0x6b5ffb*/
      if ( *((_DWORD *)v7 + 18) != -1 ) /*0x6b6000*/
        break; /*0x6b6000*/
      if ( *((_DWORD *)v7 + 17) != -1 ) /*0x6b6005*/
        break; /*0x6b6005*/
      if ( !a3 ) /*0x6b600d*/
      {
        result = (int)Cell::IsBridge((Cell *)v7); /*0x6b6011*/
        if ( result ) /*0x6b6018*/
          break; /*0x6b6018*/
      }
      v8 = *((_DWORD *)v7 + 14); /*0x6b601a*/
      if ( v8 < 0 || v8 >= *(int *)&stru_A8EB00.?[340] ) /*0x6b6027*/
        v8 = 0; /*0x6b6029*/
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v8) + 736) ) /*0x6b6034*/
        break; /*0x6b6034*/
      if ( ++v6 >= (int)v9->Cell_field_0x298 ) /*0x6b6049*/
      {
        this = v9; /*0x6b604f*/
        goto LABEL_15; /*0x6b604f*/
      }
    }
    LOBYTE(result) = 0; /*0x6b606f*/
  }
  return result; /*0x6b6060*/
}



// ==== 0x006B6080  UnitClass::CreateUnloadPlacementCraters  this=SmudgeTypeClass  sig=csp ====
int __thiscall UnitClass::CreateUnloadPlacementCraters(int *this, _WORD *a2)
{
  int result; // eax
  int i; // ebx
  _DWORD *v6; // eax
  int v7; // [esp+4h] [ebp-8h]
  _WORD *v8; // [esp+8h] [ebp-4h] BYREF
  _WORD *v9; // [esp+10h] [ebp+4h]

  v7 = 0; /*0x6b6086*/
  result = this->Height; /*0x6b608e*/
  if ( result > 0 ) /*0x6b6096*/
  {
    do /*0x6b611c*/
    {
      for ( i = 0; i < this->Width; ++i ) /*0x6b60ac*/
      {
        LOWORD(v9) = i + *a2; /*0x6b60bd*/
        HIWORD(v9) = v7 + a2[1]; /*0x6b60c6*/
        v8 = v9; /*0x6b60d5*/
        v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v8); /*0x6b60d9*/
        v6[18] = this->ArrayIndex; /*0x6b60ea*/
        *((_BYTE *)v6 + 287) = i + this->Width * v7; /*0x6b60f5*/
        BuildingClass::CreatePlacementCrater(v6); /*0x6b60fb*/
      }
      result = ++v7; /*0x6b6115*/
    }
    while ( v7 < this->Height ); /*0x6b611c*/
  }
  return result; /*0x6b6120*/
}



// ==== 0x006B6130  SmudgeTypeClass::GetTypeIdentifier  this=SmudgeTypeClass  sig=csp ====
int SmudgeTypeClass::GetTypeIdentifier(SmudgeTypeClass *this)
{
  return 30; /*0x6b6135*/
}



// ==== 0x006B6140  SmudgeTypeClass::GetObjectSize  this=SmudgeTypeClass  sig=csp ====
int SmudgeTypeClass::GetObjectSize(SmudgeTypeClass *this)
{
  return 676; /*0x6b6145*/
}



// ==== 0x006B6150  SmudgeTypeClass::GetAuxField  this=SmudgeTypeClass  sig=csp ====
int __thiscall SmudgeTypeClass::GetAuxField(SmudgeTypeClass *this)
{
  return this->ArrayIndex; /*0x6b6156*/
}



// ==== 0x006B6160  SmudgeTypeClass::ddtor  this=SmudgeTypeClass  sig=csp ====
void **__thiscall SmudgeTypeClass::ddtor(SmudgeTypeClass *this, char a2)
{
  SHPStruct *Image; // eax
  int v4; // eax
  SmudgeTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  Image = this->?; /*0x6b6164*/
  this->ObjectTypeClass = &SmudgeTypeClass::`vftable'; /*0x6b616a*/
  this->? = &SmudgeTypeClass::`vftable'; /*0x6b6172*/
  this->? = &SmudgeTypeClass::`vftable'; /*0x6b6179*/
  this->? = &SmudgeTypeClass::`vftable'; /*0x6b6180*/
  if ( Image ) /*0x6b6187*/
  {
    __3_YAXPAX_Z(Image); /*0x6b618a*/
    this->? = 0; /*0x6b6192*/
  }
  AbstractClass::AnnounceExpiredPointer(&this->ObjectTypeClass, 1); /*0x6b61a0*/
  v6 = this; /*0x6b61b5*/
  v4 = (*(int (__thiscall **)(_BYTE *, SmudgeTypeClass **))(*(_DWORD *)&stru_A8EB00.?[52] + 16))( /*0x6b61b9*/
         &stru_A8EB00.?[52],
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_A8EB00.?[68] ) /*0x6b61c9*/
  {
    --*(_DWORD *)&stru_A8EB00.?[68]; /*0x6b61ce*/
    for ( ; /*0x6b61d4*/
          v4 < *(int *)&stru_A8EB00.?[68];
          *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v4 - 4) = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[56] + 4 * v4) )
    {
      ++v4; /*0x6b61dc*/
    }
  }
  ObjectTypeClass::Destruct((int)this); /*0x6b61f0*/
  if ( (a2 & 1) != 0 ) /*0x6b61fa*/
    __3_YAXPAX_Z(this); /*0x6b61fd*/
  return &this->ObjectTypeClass; /*0x6b6207*/
}



// ==== 0x006B6210  sub_6B6210  this=-  sig=ida-proto ====
int sub_6B6210()
{
  dword_B0B7F0 = 0; /*0x6b6212*/
  dword_B0B7F4 = 0; /*0x6b6217*/
  dword_B0B7F8 = 0; /*0x6b621c*/
  dword_B0B7FC = 0; /*0x6b6221*/
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
  byte_B0B800 = 0; /*0x6b6262*/
  v0 = 214; /*0x6b6270*/
  if ( byte_A8E9A0 ) /*0x6b6275*/
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
      if ( !byte_A8E9A0 ) /*0x6b62ba*/
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
      if ( byte_B0B800 ) /*0x6b6636*/
      {
        if ( hWnd == GetDlgItem(hDlg, 1327) ) /*0x6b664c*/
        {
          v37 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b6674*/
          Audio::SetScoreVolume((float *)dword_A8EB60, v37, 1); /*0x6b6677*/
          return 0; /*0x6b6688*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1330) ) /*0x6b6695*/
        {
          v38 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b66bd*/
          Audio::SetSoundVolume((float *)dword_A8EB60, v38, 1); /*0x6b66c0*/
          return 0; /*0x6b66d1*/
        }
        if ( hWnd == GetDlgItem(hDlg, 1334) ) /*0x6b66de*/
        {
          v39 = (double)SendMessageA(hWnd, 0x400u, 0, 0) * 0.1; /*0x6b670a*/
          Audio::SetVoiceVolume((float *)dword_A8EB60, v39, 1); /*0x6b670d*/
          return 0; /*0x6b671e*/
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6b6354*/
    {
      byte_B0B800 = 0; /*0x6b635a*/
      IsSoundEnabled = Audio::IsSoundEnabled(); /*0x6b6364*/
      bEnable = IsSoundEnabled; /*0x6b636c*/
      DlgItem = GetDlgItem(hDlg, 1327); /*0x6b6370*/
      v7 = DlgItem; /*0x6b637c*/
      if ( DlgItem ) /*0x6b6380*/
      {
        SendMessageA(DlgItem, 0x4AEu, 0, 0); /*0x6b638c*/
        SendMessageA(v7, 0x406u, 1u, 655360); /*0x6b639b*/
        v8 = Math::RoundToInt(flt_A8EBA0 * 10.0 + 0.5); /*0x6b63af*/
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
        v12 = Math::RoundToInt(flt_A8EB98 * 10.0 + 0.5); /*0x6b6417*/
        SendMessageA(v11, 0x405u, 1u, v12); /*0x6b6425*/
        v9(v11, IsSoundEnabled); /*0x6b6429*/
      }
      v13 = GetDlgItem(hDlg, 1334); /*0x6b6438*/
      v14 = v13; /*0x6b643e*/
      if ( v13 ) /*0x6b6442*/
      {
        SendMessageA(v13, 0x4AEu, 0, 0); /*0x6b644e*/
        SendMessageA(v14, 0x406u, 1u, 655360); /*0x6b645d*/
        v15 = Math::RoundToInt(*(float *)&flt_A8EB9C * 10.0 + 0.5); /*0x6b6471*/
        SendMessageA(v14, 0x405u, 1u, v15); /*0x6b647f*/
        v9(v14, IsSoundEnabled); /*0x6b6483*/
      }
      if ( byte_A8E9A0 ) /*0x6b648c*/
      {
        v16 = GetDlgItem(hDlg, 1331); /*0x6b64a5*/
        if ( v16 ) /*0x6b64a9*/
        {
          SendMessageA(v16, 0xF1u, byte_A8EBA6 != 0, 0); /*0x6b64c1*/
          v9(v16, IsSoundEnabled); /*0x6b64c5*/
        }
        v17 = GetDlgItem(hDlg, 1332); /*0x6b64da*/
        if ( v17 ) /*0x6b64de*/
        {
          SendMessageA(v17, 0xF1u, byte_A8EBA4 != 0, 0); /*0x6b64f5*/
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
              if ( RulesClass::IsTypeBuildable(&unk_A83D10, v21) ) /*0x6b6545*/
              {
                v22 = AudioSettings::ComputeTransform(v21); /*0x6b6563*/
                v46 = AudioSettings::Check(v21); /*0x6b656f*/
                swprintf(lParam, (const size_t)a02dSD02d, (const wchar_t *const)Format++, v46, v22 / 60, v22 % 60); /*0x6b65a1*/
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
      byte_B0B800 = 1; /*0x6b661c*/
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
              byte_A8EBA5 = 1; /*0x6b6800*/
              if ( dword_A83D14 == -1 ) /*0x6b6807*/
                v31 = dword_A83D18; /*0x6b6809*/
              if ( v31 != v30 ) /*0x6b6810*/
              {
                Theme::Stop(&unk_A83D10, 1); /*0x6b681d*/
                Theme::QueueSong((int)&unk_A83D10, v30); /*0x6b6828*/
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
      Theme::Stop(&unk_A83D10, 1); /*0x6b69d4*/
      Theme::QueueSong((int)&unk_A83D10, -3); /*0x6b69e0*/
      byte_A8EBA5 = 0; /*0x6b69e5*/
    }
    return 0; /*0x6b69e5*/
  }
  if ( (unsigned __int16)a3 != 1670 || HIWORD(a3) ) /*0x6b68ba*/
    return 0; /*0x6b69ec*/
  v33 = GetDlgItem(hDlg, 1327); /*0x6b68cf*/
  if ( v33 ) /*0x6b68d9*/
  {
    v40 = (double)SendMessageA(v33, 0x400u, 0, 0) * 0.1; /*0x6b68fd*/
    Audio::SetScoreVolume((float *)dword_A8EB60, v40, 0); /*0x6b6900*/
    if ( flt_A8EBA0 == 0.0 ) /*0x6b6916*/
    {
      v34 = dword_A83D14; /*0x6b6918*/
      if ( dword_A83D14 == -1 ) /*0x6b6920*/
        v34 = dword_A83D18; /*0x6b6922*/
      Theme::QueueSong((int)&unk_A83D10, v34); /*0x6b692d*/
      Theme::Stop(&unk_A83D10, 0); /*0x6b6939*/
    }
  }
  v35 = GetDlgItem(hDlg, 1330); /*0x6b6944*/
  if ( v35 ) /*0x6b6948*/
  {
    v41 = (double)SendMessageA(v35, 0x400u, 0, 0) * 0.1; /*0x6b696c*/
    Audio::SetSoundVolume((float *)dword_A8EB60, v41, 0); /*0x6b696f*/
  }
  v36 = GetDlgItem(hDlg, 1334); /*0x6b697a*/
  if ( v36 ) /*0x6b697e*/
  {
    v42 = (double)SendMessageA(v36, 0x400u, 0, 0) * 0.1; /*0x6b69a2*/
    Audio::SetVoiceVolume((float *)dword_A8EB60, v42, 0); /*0x6b69a5*/
  }
  *(_DWORD *)GetWindowLongA(hDlg, 8) = 1; /*0x6b69b5*/
  return 0; /*0x6b6619*/
}



// ==== 0x006B6A00  sub_6B6A00  this=-  sig=ida-proto ====
void sub_6B6A00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b6a0c*/
  dbl_B0B828 = Math::Sqrt(v0 + v0); /*0x6b6a1e*/
}



// ==== 0x006B6A30  sub_6B6A30  this=-  sig=ida-proto ====
void sub_6B6A30()
{
  dbl_B0B878 = dbl_B0B828 / 60.0; /*0x6b6a3c*/
}



// ==== 0x006B6A50  sub_6B6A50  this=-  sig=ida-proto ====
void sub_6B6A50()
{
  dbl_B0B860 = 1.0 / dbl_B0B878; /*0x6b6a5c*/
}



// ==== 0x006B6A70  sub_6B6A70  this=-  sig=ida-proto ====
void sub_6B6A70()
{
  dbl_B0B858 = 0.0174532925199433 * 45.0; /*0x6b6a7c*/
}



// ==== 0x006B6A90  sub_6B6A90  this=-  sig=ida-proto ====
void sub_6B6A90()
{
  dbl_B0B830 = 0.0174532925199433 * 60.0; /*0x6b6a9c*/
}



// ==== 0x006B6AB0  sub_6B6AB0  this=-  sig=ida-proto ====
void sub_6B6AB0()
{
  dbl_B0B808 = 0.0174532925199433 * 90.0; /*0x6b6abc*/
}



// ==== 0x006B6AD0  sub_6B6AD0  this=-  sig=ida-proto ====
__int64 sub_6B6AD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B808 - dbl_B0B830); /*0x6b6ae2*/
  result = Math::RoundToInt(v0 * dbl_B0B828 * 0.5); /*0x6b6af6*/
  dword_B0B898 = result; /*0x6b6afb*/
  return result; /*0x6b6b00*/
}



// ==== 0x006B6B10  sub_6B6B10  this=-  sig=ida-proto ====
void sub_6B6B10()
{
  dbl_B0B838 = Math::ArcTan((double)dword_B0B898 * 0.00390625); /*0x6b6b27*/
}



// ==== 0x006B6B40  sub_6B6B40  this=-  sig=ida-proto ====
void sub_6B6B40()
{
  dbl_B0B850 = Math::ArcTan((double)(2 * dword_B0B898) / dbl_B0B828); /*0x6b6b62*/
}



// ==== 0x006B6B70  sub_6B6B70  this=-  sig=ida-proto ====
__int64 sub_6B6B70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B898) + 0.5); /*0x6b6b8b*/
  dword_B0B874 = result; /*0x6b6b90*/
  return result; /*0x6b6b96*/
}



// ==== 0x006B6BA0  sub_6B6BA0  this=-  sig=ida-proto ====
int sub_6B6BA0()
{
  word_B0B820 = 0; /*0x6b6ba2*/
  word_B0B822 = 0; /*0x6b6ba8*/
  return 0; /*0x6b6bae*/
}



// ==== 0x006B6BB0  sub_6B6BB0  this=-  sig=ida-proto ====
int sub_6B6BB0()
{
  dword_B0B840 = 0; /*0x6b6bb2*/
  dword_B0B844 = 0; /*0x6b6bb7*/
  dword_B0B848 = 0; /*0x6b6bbc*/
  return 0; /*0x6b6bc1*/
}



// ==== 0x006B6BD0  sub_6B6BD0  this=-  sig=ida-proto ====
int sub_6B6BD0()
{
  dword_B0B870 = 0; /*0x6b6bd5*/
  dword_B0B868 = 128; /*0x6b6bdf*/
  dword_B0B86C = 128; /*0x6b6be4*/
  return 128; /*0x6b6be9*/
}



// ==== 0x006B6BF0  sub_6B6BF0  this=-  sig=ida-proto ====
int sub_6B6BF0()
{
  dword_B0B810 = 0; /*0x6b6bf2*/
  dword_B0B814 = 0; /*0x6b6bf7*/
  dword_B0B818 = 0; /*0x6b6bfc*/
  dword_B0B81C = 0; /*0x6b6c01*/
  return 0; /*0x6b6c06*/
}



// ==== 0x006B6C10  sub_6B6C10  this=-  sig=ida-proto ====
int sub_6B6C10()
{
  dword_B0B884 = 0; /*0x6b6c17*/
  dword_B0B888 = 0; /*0x6b6c1c*/
  byte_B0B88C = 1; /*0x6b6c21*/
  byte_B0B88D = 0; /*0x6b6c28*/
  SpawnManagerClass_Array = (int)&DynamicVectorClass<SpawnManagerClass *>::`vftable'; /*0x6b6c2d*/
  dword_B0B894 = 10; /*0x6b6c37*/
  dword_B0B890 = 0; /*0x6b6c41*/
  return atexit(sub_6B6C50); /*0x6b6c4c*/
}



// ==== 0x006B6C50  sub_6B6C50  this=-  sig=ida-proto ====
void __cdecl sub_6B6C50()
{
  SpawnManagerClass_Array = (int)&VectorClass<SpawnManagerClass *>::`vftable'; /*0x6b6c58*/
  if ( dword_B0B884 && byte_B0B88D ) /*0x6b6c6c*/
  {
    __3_YAXPAX_Z(dword_B0B884); /*0x6b6c6f*/
    dword_B0B884 = 0; /*0x6b6c77*/
  }
  byte_B0B88D = 0; /*0x6b6c7d*/
  dword_B0B888 = 0; /*0x6b6c83*/
}



// ==== 0x006B6C90  SpawnManagerClass::SpawnManagerClass  this=SpawnManagerClass  sig=csp ====
int __thiscall sub_6B6C90(int this, int a2, int a3, int a4, int a5, int a6)
{
  wchar_t *v7; // eax
  int *v8; // ebp
  wchar_t *v9; // eax
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

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
  SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
  *(_DWORD *)(this + 56) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
  *(_DWORD *)(this + 76) = 10; /*0x6b6cb6*/
  *(_DWORD *)(this + 72) = 0; /*0x6b6cbd*/
  v7 = dword_A8ED84; /*0x6b6cc0*/
  *(_DWORD *)(this + 88) = 0; /*0x6b6cc5*/
  *(_DWORD *)(this + 80) = v7; /*0x6b6cc8*/
  *(_DWORD *)(this + 92) = dword_A8ED84; /*0x6b6cd5*/
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
    v8 = (int *)__2_YAPAXI_Z(0x18u); /*0x6b6d24*/
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    v9 = dword_A8ED84; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = (int)v9; /*0x6b6d39*/
    v10 = **(_DWORD **)(this + 40); /*0x6b6d44*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 60))(*(_DWORD *)(this + 36)); /*0x6b6d46*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(*(_DWORD *)(this + 40), v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = *(_DWORD *)(this + 40); /*0x6b6d66*/
      v8[5] = v13 == *((_DWORD *)dword_8871E0 + 312) /*0x6b6d86*/
           || v13 == *((_DWORD *)dword_8871E0 + 325)
           || v13 == *((_DWORD *)dword_8871E0 + 338);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6b6d91*/
      *(_DWORD *)(*v8 + 724) = *(_DWORD *)(this + 36); /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = (int)dword_A8ED84; /*0x6b6db1*/
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
  *(_DWORD *)(this + 80) = dword_A8ED84; /*0x6b6e0d*/
  *(_DWORD *)(this + 84) = v20; /*0x6b6e19*/
  *(_DWORD *)(this + 88) = 20; /*0x6b6e1c*/
  *(_DWORD *)(this + 104) = 0; /*0x6b6e1f*/
  *(_DWORD *)(this + 108) = 0; /*0x6b6e22*/
  *(_DWORD *)(this + 112) = 0; /*0x6b6e25*/
  *(_DWORD *)(this + 92) = dword_A8ED84; /*0x6b6e2f*/
  *(_DWORD *)(this + 96) = v20; /*0x6b6e32*/
  *(_DWORD *)(this + 100) = 0; /*0x6b6e35*/
  if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
    || (byte_B0B88D || !dword_B0B888)
    && dword_B0B894 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SpawnManagerClass_Array + 8))(
         &SpawnManagerClass_Array,
         dword_B0B888 + dword_B0B894,
         0) )
  {
    v18 = dword_B0B890++; /*0x6b6e76*/
    *((_DWORD *)dword_B0B884 + v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/
}



// ==== 0x006B6EA0  SpawnManagerClass::Constructor  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::Constructor(SpawnManagerClass *this)
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



// ==== 0x006B7010  SpawnManagerClass::Constructor_SpawnManagerClass  this=SpawnManagerClass  sig=csp ====
void __thiscall SpawnManagerClass::Constructor_SpawnManagerClass(TaskManager *this)
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  TaskManager *v6; // [esp+8h] [ebp-4h] BYREF

  *this = (TaskManager)&SpawnManagerClass::`vftable'; /*0x6b7015*/
  this->vtable2 = &SpawnManagerClass::`vftable'; /*0x6b701b*/
  this->vtable3 = &SpawnManagerClass::`vftable'; /*0x6b7022*/
  this->vtable4 = &SpawnManagerClass::`vftable'; /*0x6b7029*/
  if ( byte_A8E9A0 ) /*0x6b7037*/
    TaskManager::Update(this); /*0x6b7039*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(_DWORD *)(this->spawnVectorCount + 4 * i) ) /*0x6b7047*/
      __3_YAXPAX_Z(*(void **)(this->spawnVectorCount + 4 * i)); /*0x6b704f*/
  }
  v3 = this->uniqueId; /*0x6b7063*/
  (*(void (__thiscall **)(TaskManager *))(this->spawns + 12))(this + 14); /*0x6b7066*/
  (*(void (__thiscall **)(TaskManager *, int, _DWORD))(this->spawns + 8))(this + 14, v3, 0); /*0x6b7070*/
  v6 = this; /*0x6b7083*/
  v4 = (*(int (__thiscall **)(int *, TaskManager **))(SpawnManagerClass_Array + 16))(&SpawnManagerClass_Array, &v6); /*0x6b7087*/
  if ( v4 != -1 && v4 < dword_B0B890 && v4 < --dword_B0B890 ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((_DWORD *)dword_B0B884 + v4 - 1) = *((_DWORD *)dword_B0B884 + v4); /*0x6b70af*/
    }
    while ( v4 < dword_B0B890 ); /*0x6b70bb*/
  }
  v5 = (void *)this->spawnVectorCount; /*0x6b70bd*/
  this->spawns = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b70c0*/
  if ( v5 && this->u8_45 ) /*0x6b70ca*/
  {
    __3_YAXPAX_Z(v5); /*0x6b70d2*/
    this->spawnVectorCount = 0; /*0x6b70da*/
  }
  this->u8_45 = 0; /*0x6b70e3*/
  this->uniqueId = 0; /*0x6b70e7*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6b70ee*/
}



// ==== 0x006B7100  TaskManager::Update  this=TaskManager  sig=csp ====
int __thiscall TaskManager::Update(TaskManager *this)
{
  int result; // eax
  int v3; // ebx
  int i; // edi
  int v5; // ecx
  _DWORD *v6; // edx
  _DWORD *v7; // edx
  _DWORD *v8; // edx
  int v9; // [esp+10h] [ebp-8h]

  result = *((_DWORD *)this + 9); /*0x6b7108*/
  if ( *(int *)(result + 108) > 0 && *(_BYTE *)(result + 144) ) /*0x6b7112*/
    v3 = 0; /*0x6b711c*/
  else
    v3 = *((_DWORD *)this + 12); /*0x6b7120*/
  for ( i = *((_DWORD *)this + 18) - 1; i >= 0; --i ) /*0x6b7127*/
  {
    result = *(_DWORD *)(*((_DWORD *)this + 15) + 4 * i); /*0x6b7136*/
    v5 = *(_DWORD *)(result + 4); /*0x6b7139*/
    if ( v5 != 7 ) /*0x6b713e*/
    {
      if ( !v5 || v5 == 6 ) /*0x6b714f*/
      {
        *(_DWORD *)(result + 4) = 7; /*0x6b71de*/
        v8 = *(_DWORD **)(*((_DWORD *)this + 15) + 4 * i); /*0x6b71e4*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v8 + 248))(*v8); /*0x6b71eb*/
        **(_DWORD **)(*((_DWORD *)this + 15) + 4 * i) = 0; /*0x6b71f7*/
        v7 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 15) + 4 * i) + 8); /*0x6b7208*/
        *v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b720b*/
        result = v9; /*0x6b720d*/
      }
      else
      {
        if ( v5 == 1 ) /*0x6b7158*/
        {
          AbstractClass::processStateTransition((AbstractClass *)&g_MissionQueueFrame, *(_DWORD *)result); /*0x6b7162*/
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 15) + 4 * i) + 4) = 7; /*0x6b716d*/
          v6 = *(_DWORD **)(*((_DWORD *)this + 15) + 4 * i); /*0x6b7173*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v6 + 248))(*v6); /*0x6b717a*/
        }
        else
        {
          *(_DWORD *)(result + 4) = 7; /*0x6b71a2*/
          UnitClass::GetExitCell( /*0x6b71b7*/
            (int)&g_MissionQueueFrame,
            **(_DWORD ***)(*((_DWORD *)this + 15) + 4 * i),
            *((_DWORD **)this + 26));
        }
        **(_DWORD **)(*((_DWORD *)this + 15) + 4 * i) = 0; /*0x6b7186*/
        v7 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 15) + 4 * i) + 8); /*0x6b7197*/
        *v7 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b719a*/
        result = v9; /*0x6b719c*/
      }
      v7[1] = result; /*0x6b7211*/
      v7[2] = v3; /*0x6b7214*/
    }
  }
  return result; /*0x6b721f*/
}



// ==== 0x006B7230  SpawnManagerClass::ProcessExitQueue  this=SpawnManagerClass  sig=csp ====
void __thiscall UnitClass::ProcessExitQueue(SpawnManagerClass *this)
{
  int v2; // edx
  int SpawnManagerClass_field_58; // eax
  int v4; // ecx
  int v5; // ebx
  int spawnVectorCount; // edx
  int v7; // eax
  _DWORD **v8; // ebp
  _DWORD *v9; // edi
  int SpawnManagerClass_field_5C; // edx
  int SpawnManagerClass_field_64; // eax
  int *alignmentPadding154; // ebp
  int *v13; // ebp
  TechnoClass *owner; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  BOOL v19; // ebp
  TechnoClass *v20; // ecx
  void *vtable0; // ebx
  _DWORD *v22; // eax
  int *v23; // eax
  int v24; // ecx
  int v25; // edx
  _DWORD *Value; // eax
  AnimClass *v27; // ebp
  int Index; // eax
  int SpawnManagerClass_field_6C; // eax
  __int16 *v30; // eax
  Cell *v31; // eax
  int v32; // ebp
  void *NeighbourContent; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  __int16 *v37; // eax
  Cell *v38; // eax
  int v39; // ebp
  void *v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  _WORD *v44; // ebp
  _WORD *v45; // eax
  int *location; // ecx
  int v47; // eax
  int SpawnManagerClass_field_34; // ecx
  _DWORD *v49; // edx
  int v50; // ebp
  int v51; // edx
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int (__thiscall **v56)(HouseClass *, int); // edi
  int v57; // eax
  HouseClass *spawnOwner; // eax
  int v59; // ecx
  int SpawnManagerClass_field_70; // eax
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

  v2 = *(_DWORD *)&this->__pad_48[8]; /*0x6b723f*/
  SpawnManagerClass_field_58 = this->SpawnManagerClass_field_58; /*0x6b7242*/
  if ( v2 != -1 ) /*0x6b7248*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 >= SpawnManagerClass_field_58 ) /*0x6b7250*/
      goto LABEL_5; /*0x6b7250*/
    SpawnManagerClass_field_58 -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x6b7252*/
  }
  if ( SpawnManagerClass_field_58 ) /*0x6b7256*/
    return; /*0x6b7256*/
LABEL_5:
  v4 = v91; /*0x6b725c*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7265*/
  this->SpawnManagerClass_field_54 = v4; /*0x6b7268*/
  this->SpawnManagerClass_field_58 = 10; /*0x6b726b*/
  v5 = 0; /*0x6b7271*/
  v80 = 0; /*0x6b7275*/
  if ( *(int *)this->__pad_48 > 0 )
  {
    while ( 1 )
    {
      spawnVectorCount = this->spawnVectorCount; /*0x6b727f*/
      v79 = 0; /*0x6b7282*/
      v7 = *(_DWORD *)(spawnVectorCount + 4 * v5); /*0x6b7287*/
      v8 = (_DWORD **)(spawnVectorCount + 4 * v5); /*0x6b728a*/
      v9 = *(_DWORD **)v7; /*0x6b7290*/
      switch ( *(_DWORD *)(v7 + 4) )
      {
        case 0:
          if ( !this->SpawnManagerClass_field_68 ) /*0x6b72a7*/
            goto LABEL_87; /*0x6b72a7*/
          SpawnManagerClass_field_5C = this->SpawnManagerClass_field_5C; /*0x6b72ad*/
          SpawnManagerClass_field_64 = this->SpawnManagerClass_field_64; /*0x6b72b0*/
          if ( SpawnManagerClass_field_5C == -1 ) /*0x6b72b6*/
            goto LABEL_11; /*0x6b72b6*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C >= SpawnManagerClass_field_64 ) /*0x6b72c2*/
            goto LABEL_128; /*0x6b72c2*/
          SpawnManagerClass_field_64 -= *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C; /*0x6b72c4*/
LABEL_11:
          if ( !SpawnManagerClass_field_64 )
          {
LABEL_128:
            if ( this->SpawnManagerClass_field_70 != 2 && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) != 1 ) /*0x6b72fc*/
                goto LABEL_21; /*0x6b72fc*/
              alignmentPadding154 = this->owner[1].alignmentPadding154; /*0x6b7301*/
              if ( !*alignmentPadding154 ) /*0x6b7307*/
                WinAPI::Wrapper(-2147467261); /*0x6b7312*/
              if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)*alignmentPadding154 + 16))(*alignmentPadding154) )
              {
                v13 = this->owner[1].alignmentPadding154; /*0x6b732c*/
                if ( !*v13 ) /*0x6b7332*/
                  WinAPI::Wrapper(-2147467261); /*0x6b733d*/
                if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)*v13 + 128))(*v13) )
                {
LABEL_21:
                  owner = this->owner; /*0x6b735c*/
                  if ( !owner || (owner->? & 4) == 0 || !*((owner->? & 4) != 0 ? &owner[1].__pad_18C[1] : (char *)1709) )
                  {
                    if ( *(_BYTE *)((*((int (__thiscall **)(TechnoClass *))owner->RadioClass + 33))(owner) + 3432) ) /*0x6b7392*/
                    {
                      v15 = v91; /*0x6b73a1*/
                      this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b73a5*/
                      v16 = 9; /*0x6b73a8*/
                      this->SpawnManagerClass_field_60 = v15; /*0x6b73ad*/
                    }
                    else
                    {
                      this->SpawnManagerClass_field_5C = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b73b2*/
                      v16 = 20; /*0x6b73b9*/
                      this->SpawnManagerClass_field_60 = v91; /*0x6b73be*/
                    }
                    this->SpawnManagerClass_field_64 = v16; /*0x6b73c1*/
                    if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) == 1 ) /*0x6b73cd*/
                    {
                      v17 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, _DWORD))this->owner->RadioClass + 254))( /*0x6b73dc*/
                                         this->owner,
                                         0);
                      if ( v17 ) /*0x6b73e0*/
                      {
                        if ( *(int *)(v17 + 156) > 1 ) /*0x6b73e8*/
                        {
                          v79 = 1; /*0x6b73f1*/
                          this->owner->currentBurstIndex = v5 & 1; /*0x6b73f6*/
                        }
                      }
                    }
                    *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 2; /*0x6b7404*/
                    v18 = (*((int (__thiscall **)(TechnoClass *, _DWORD))this->owner->RadioClass + 254))(this->owner, 0); /*0x6b7410*/
                    v86 = 0; /*0x6b741c*/
                    v87 = 0; /*0x6b7420*/
                    v88 = 0; /*0x6b7424*/
                    v19 = *(_BYTE *)(*(_DWORD *)v18 + 305) == 0; /*0x6b7436*/
                    v20 = this->owner; /*0x6b743b*/
                    if ( v20->currentBurstIndex ) /*0x6b743e*/
                    {
                      vtable0 = v20->RadioClass; /*0x6b7448*/
                      v22 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))v20->RadioClass + 33))(v20); /*0x6b744a*/
                      v23 = (int *)(*((int (__thiscall **)(TechnoClass *, char *, BOOL, _DWORD, _DWORD, _DWORD))vtable0 /*0x6b7473*/
                                    + 44))(
                                     this->owner,
                                     v92,
                                     v19,
                                     v22[876],
                                     v22[877],
                                     v22[878]);
                    }
                    else
                    {
                      v23 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, BOOL, _DWORD, _DWORD, _DWORD))v20->RadioClass /*0x6b7492*/
                                    + 44))(
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
                    if ( this->spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x6b74c2*/
                    {
                      v86 = v24 - dword_84009C; /*0x6b74d3*/
                      v87 = v25 - dword_8400A0; /*0x6b74d7*/
                    }
                    Value = ProgressTimer::GetValue((ProgressTimer *)this->owner->primaryFacing, &v81); /*0x6b74e9*/
                    (*(void (__thiscall **)(_DWORD *, int *, _DWORD))(*v9 + 216))( /*0x6b7505*/
                      v9,
                      &v86,
                      (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
                    if ( this->spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x6b7519*/
                    {
                      v27 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6b7525*/
                      if ( v27 ) /*0x6b752c*/
                      {
                        v89[0] = v9[39]; /*0x6b753a*/
                        v89[1] = v9[40]; /*0x6b7541*/
                        v89[2] = v9[41]; /*0x6b7548*/
                        Index = AnimTypeClass::FindIndex(off_840098); /*0x6b7552*/
                        AnimClass::ctor( /*0x6b7575*/
                          v27,
                          *(void **)(FootClass_Array.?[3] + 4 * Index),
                          v89,
                          (void *)2,
                          1,
                          (void *)0x600,
                          (void *)0xFFFFFFF6,
                          0);
                      }
                    }
                    if ( v79 ) /*0x6b7580*/
                      this->owner->currentBurstIndex = 0; /*0x6b7585*/
                    if ( *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v80) + 20) == 1 ) /*0x6b7599*/
                    {
                      SpawnManagerClass_field_6C = this->SpawnManagerClass_field_6C; /*0x6b759b*/
                      if ( SpawnManagerClass_field_6C ) /*0x6b75a0*/
                      {
                        this->SpawnManagerClass_field_68 = SpawnManagerClass_field_6C; /*0x6b75a2*/
                        this->SpawnManagerClass_field_6C = 0; /*0x6b75a5*/
                      }
                      (*(void (__thiscall **)(_DWORD *, int, int))(*v9 + 1152))(v9, this->SpawnManagerClass_field_68, 1); /*0x6b75b6*/
                      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b75c4*/
                    }
                    else
                    {
                      v30 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->RadioClass + 110))( /*0x6b75d9*/
                                         this->owner,
                                         &v82);
                      v31 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x6b75e5*/
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
          if ( v5 >= *(_DWORD *)this->__pad_48 ) /*0x6b7964*/
            goto LABEL_88; /*0x6b7964*/
          break; /*0x6b7964*/
        case 1:
          v34 = *(_DWORD *)(v7 + 16); /*0x6b7613*/
          v35 = *(_DWORD *)(v7 + 8); /*0x6b7616*/
          if ( v35 == -1 ) /*0x6b761c*/
            goto LABEL_49; /*0x6b761c*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v35 >= v34 ) /*0x6b7628*/
            goto LABEL_50; /*0x6b7628*/
          v34 -= *(_DWORD *)&stru_A8EB00.?[416] - v35; /*0x6b762a*/
LABEL_49:
          if ( !v34 ) /*0x6b762e*/
LABEL_50:
            UnitClass::ClearTargetRef((UnitClass *)this, (int)v9); /*0x6b7637*/
          goto LABEL_87; /*0x6b763c*/
        case 2:
          if ( *(_DWORD *)(v7 + 20) != 1 ) /*0x6b7645*/
          {
            v36 = this->SpawnManagerClass_field_6C; /*0x6b764b*/
            if ( v36 ) /*0x6b7650*/
            {
              this->SpawnManagerClass_field_68 = v36; /*0x6b7652*/
              this->SpawnManagerClass_field_6C = 0; /*0x6b7655*/
            }
            if ( !this->SpawnManagerClass_field_68 ) /*0x6b765c*/
              goto LABEL_55; /*0x6b7661*/
            v37 = (__int16 *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->RadioClass + 110))( /*0x6b76a9*/
                               this->owner,
                               &v83);
            v38 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6b76b5*/
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
            this->SpawnManagerClass_field_68 = v41; /*0x6b76ea*/
            this->SpawnManagerClass_field_6C = 0; /*0x6b76ed*/
          }
          if ( v9[191] && this->SpawnManagerClass_field_68 ) /*0x6b7702*/
          {
            (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 968))( /*0x6b7718*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              this->SpawnManagerClass_field_68);
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b772c*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              1,
              0);
          }
          else
          {
LABEL_55:
            (*(void (__thiscall **)(_DWORD *, TechnoClass *, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7663*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 968))(v9, 0); /*0x6b7679*/
            (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v9 + 488))(v9, 2, 0); /*0x6b7687*/
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 4; /*0x6b7693*/
          }
          goto LABEL_87; /*0x6b7732*/
        case 4:
          v42 = this->SpawnManagerClass_field_6C; /*0x6b7737*/
          if ( v42 ) /*0x6b773c*/
          {
            this->SpawnManagerClass_field_68 = v42; /*0x6b773e*/
            this->SpawnManagerClass_field_6C = 0; /*0x6b7741*/
          }
          if ( (int)v9[191] > 0 && this->SpawnManagerClass_field_68 ) /*0x6b7752*/
          {
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 3; /*0x6b775f*/
            v43 = **(_DWORD **)(this->spawnVectorCount + 4 * v5); /*0x6b776c*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v43 + 968))(v43, this->SpawnManagerClass_field_68); /*0x6b7774*/
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b7788*/
              **(_DWORD **)(this->spawnVectorCount + 4 * v5),
              1,
              0);
          }
          else
          {
            v44 = (_WORD *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->RadioClass + 110))( /*0x6b77a5*/
                             this->owner,
                             &v84);
            v45 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v9 + 440))(v9, v85); /*0x6b77ae*/
            if ( *v45 == *v44 /*0x6b77fd*/
              && v45[1] == v44[1]
              && (v90 = v9[39],
                  location = this->owner->?,
                  v91 = v9[40],
                  v47 = v9[41],
                  v90 = *location,
                  v91 = location[1],
                  v47 - location[2] < 20) )
            {
              (*(void (__thiscall **)(_DWORD *))(*v9 + 212))(v9); /*0x6b7803*/
              *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 4) = 6; /*0x6b780f*/
              SpawnManagerClass_field_34 = this->SpawnManagerClass_field_34; /*0x6b781e*/
              v49 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 8); /*0x6b7824*/
              *v49 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7827*/
              v49[1] = v94; /*0x6b782d*/
              v49[2] = SpawnManagerClass_field_34; /*0x6b7830*/
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, TechnoClass *, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7842*/
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
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v50 >= v51 ) /*0x6b787c*/
            goto LABEL_76; /*0x6b787c*/
          v51 -= *(_DWORD *)&stru_A8EB00.?[416] - v50; /*0x6b787e*/
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
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v55 >= v54 ) /*0x6b78c7*/
            goto LABEL_81; /*0x6b78c7*/
          v54 -= *(_DWORD *)&stru_A8EB00.?[416] - v55; /*0x6b78c9*/
LABEL_80:
          if ( !v54 ) /*0x6b78cd*/
          {
LABEL_81:
            v56 = (int (__thiscall **)(HouseClass *, int))this->spawnOwner->AbstractClass; /*0x6b78db*/
            v57 = (*((int (__thiscall **)(TechnoClass *))this->owner->RadioClass + 15))(this->owner); /*0x6b78dd*/
            **v8 = v56[35](this->spawnOwner, v57); /*0x6b78ed*/
            spawnOwner = this->spawnOwner; /*0x6b78f5*/
            *(_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v5) + 20) = spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x6b7925*/
                                                                          || spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1300)
                                                                          || spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1352);
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
  SpawnManagerClass_field_70 = this->SpawnManagerClass_field_70; /*0x6b796a*/
  v61 = 0; /*0x6b796d*/
  v62 = 0; /*0x6b796f*/
  if ( SpawnManagerClass_field_70 ) /*0x6b7973*/
  {
    v63 = SpawnManagerClass_field_70 - 1; /*0x6b7979*/
    if ( v63 ) /*0x6b797a*/
    {
      if ( v63 == 1 ) /*0x6b797d*/
      {
        v64 = 1; /*0x6b7986*/
        if ( *(int *)this->__pad_48 <= 0 ) /*0x6b798a*/
          goto LABEL_98; /*0x6b798a*/
        v65 = this->spawnVectorCount; /*0x6b798c*/
        v66 = *(_DWORD *)this->__pad_48; /*0x6b798f*/
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
          this->SpawnManagerClass_field_70 = 0; /*0x6b79b0*/
      }
      return; /*0x6b79be*/
    }
    if ( !this->SpawnManagerClass_field_68 ) /*0x6b79bf*/
    {
LABEL_100:
      UnitClass::ProcessIdleOrders((UnitClass *)this); /*0x6b79c4*/
      return; /*0x6b79d2*/
    }
    v68 = *(_DWORD *)this->__pad_48; /*0x6b79d3*/
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
              UnitClass::GetExitCell( /*0x6b7a37*/
                (int)&g_MissionQueueFrame,
                (_DWORD *)*v73,
                (_DWORD *)this->SpawnManagerClass_field_68);
              g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7a46*/
              g_MissionQueueFrame.nextScenario[1] = v72; /*0x6b7a4b*/
              g_MissionQueueFrame.nextScenario[2] = 2; /*0x6b7a51*/
              v74 = *(int **)(this->spawnVectorCount + 4 * v71); /*0x6b7a5a*/
              if ( v74[5] == 1 ) /*0x6b7a65*/
              {
                v74[1] = 1; /*0x6b7a67*/
                if ( this->spawnOwner == *(HouseClass **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6b7a80*/
                  v75 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1200) /*0x6b7a88*/
                      + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1204);
                else
                  v75 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1252) /*0x6b7aab*/
                      + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1256);
                v76 = (_DWORD *)(*(_DWORD *)(this->spawnVectorCount + 4 * v71) + 8); /*0x6b7a94*/
                *v76 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7a97*/
                v76[1] = v94; /*0x6b7a9d*/
                v76[2] = v75; /*0x6b7aa0*/
              }
              else
              {
                UnitClass::ClearTargetRef((UnitClass *)this, *v74); /*0x6b7acd*/
              }
            }
            else
            {
              v73[1] = 3; /*0x6b7ad4*/
              v77 = **(_DWORD **)(this->spawnVectorCount + 4 * v71); /*0x6b7ae1*/
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v77 + 968))(v77, this->SpawnManagerClass_field_68); /*0x6b7ae9*/
              (*(void (__thiscall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(this->spawnVectorCount + 4 * v71) + 488))( /*0x6b7afd*/
                **(_DWORD **)(this->spawnVectorCount + 4 * v71),
                1,
                0);
            }
          }
          ++v71; /*0x6b7b06*/
        }
        while ( v71 < *(_DWORD *)this->__pad_48 ); /*0x6b7b09*/
        if ( v62 ) /*0x6b7b11*/
          UnitClass::ProcessIdleOrders((UnitClass *)this); /*0x6b7b15*/
      }
      this->SpawnManagerClass_field_70 = 2; /*0x6b7b1a*/
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
      this->SpawnManagerClass_field_68 = v78; /*0x6b7b30*/
      this->SpawnManagerClass_field_6C = 0; /*0x6b7b33*/
    }
    if ( this->SpawnManagerClass_field_68 ) /*0x6b7b36*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, int))this->owner->RadioClass + 235))( /*0x6b7b43*/
             this->owner,
             this->SpawnManagerClass_field_68) )
      {
        this->SpawnManagerClass_field_70 = 1; /*0x6b7b5c*/
        return; /*0x6b7b5c*/
      }
      goto LABEL_100; /*0x6b7b4b*/
    }
  }
}



// ==== 0x006B7B90  SpawnManagerClass::SetTarget  this=TOP  sig=csp ====
int __thiscall SpawnManagerClass::SetTarget(SpawnManagerClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x6b7b90*/
  if ( a2 != this->SpawnManagerClass_field_68 ) /*0x6b7b99*/
    this->SpawnManagerClass_field_6C = a2; /*0x6b7b9b*/
  return result; /*0x6b7b9e*/
}



// ==== 0x006B7BB0  UnitClass::ProcessIdleOrders  this=UnitClass  sig=csp ====
int __thiscall UnitClass::ProcessIdleOrders(UnitClass *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // [esp+Ch] [ebp-8h]

  v3 = 0; /*0x6b7bb7*/
  if ( this->?[3] > 0 ) /*0x6b7bbc*/
  {
    do /*0x6b7c21*/
    {
      v4 = *(_DWORD *)(this->?[0] + 4 * v3); /*0x6b7bc6*/
      if ( *(_DWORD *)(v4 + 4) == 2 ) /*0x6b7bcd*/
      {
        v5 = *(_DWORD **)v4; /*0x6b7bcf*/
        if ( *(_BYTE *)(v5[433] + 3432) ) /*0x6b7bd7*/
        {
          UnitClass::GetExitCell((int)&g_MissionQueueFrame, v5, *(_DWORD **)&this->?); /*0x6b7beb*/
          g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7bfa*/
          g_MissionQueueFrame.nextScenario[1] = v6; /*0x6b7bff*/
          g_MissionQueueFrame.nextScenario[2] = 2; /*0x6b7c05*/
          UnitClass::ClearTargetRef(this, **(_DWORD **)(this->?[0] + 4 * v3)); /*0x6b7c16*/
        }
      }
      result = this->?[3]; /*0x6b7c1b*/
      ++v3; /*0x6b7c1e*/
    }
    while ( v3 < result ); /*0x6b7c21*/
  }
  this->? = 0; /*0x6b7c26*/
  this->? = 0; /*0x6b7c29*/
  *(_DWORD *)&this->? = 0; /*0x6b7c2c*/
  return result; /*0x6b7c2f*/
}



// ==== 0x006B7C60  UnitClass::ClearTargetRef  this=UnitClass  sig=csp ====
int __thiscall UnitClass::ClearTargetRef(UnitClass *this, int a2)
{
  int result; // eax
  int v4; // edx
  _DWORD **v5; // ecx
  _DWORD *v6; // ecx
  ObjectClass *nextObject; // edx
  int v8; // [esp+10h] [ebp-8h]

  if ( a2 == *(_DWORD *)&this->? ) /*0x6b7c6f*/
  {
    result = this->?; /*0x6b7c71*/
    *(_DWORD *)&this->? = 0; /*0x6b7c74*/
    if ( !result ) /*0x6b7c7d*/
      return UnitClass::ProcessIdleOrders(this); /*0x6b7c7f*/
  }
  else if ( a2 == this->? ) /*0x6b7c90*/
  {
    this->? = 0; /*0x6b7c92*/
  }
  else
  {
    result = this->?[3] - 1; /*0x6b7ca5*/
    if ( result < 0 ) /*0x6b7ca6*/
    {
LABEL_10:
      if ( a2 == this->? ) /*0x6b7cbf*/
      {
        TaskManager::Update((TaskManager *)this); /*0x6b7cc3*/
        return UnitClass::ProcessIdleOrders(this); /*0x6b7cca*/
      }
    }
    else
    {
      v4 = this->?[0]; /*0x6b7ca8*/
      v5 = (_DWORD **)(v4 + 4 * result); /*0x6b7cab*/
      while ( a2 != **v5 ) /*0x6b7cb2*/
      {
        --result; /*0x6b7cb4*/
        --v5; /*0x6b7cb5*/
        if ( result < 0 ) /*0x6b7cba*/
          goto LABEL_10; /*0x6b7cba*/
      }
      v6 = *(_DWORD **)(v4 + 4 * result); /*0x6b7cd8*/
      if ( *(int *)(*v6 + 108) <= 0 || *(_BYTE *)(*v6 + 1738) || v6[5] == 1 ) /*0x6b7cf2*/
      {
        *v6 = 0; /*0x6b7cf4*/
        *(_DWORD *)(*(_DWORD *)(this->?[0] + 4 * result) + 4) = 7; /*0x6b7d01*/
        nextObject = this->?; /*0x6b7d08*/
        result = *(_DWORD *)(this->?[0] + 4 * result) + 8; /*0x6b7d18*/
        *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7d1c*/
        *(_DWORD *)(result + 4) = v8; /*0x6b7d22*/
        *(_DWORD *)(result + 8) = nextObject; /*0x6b7d25*/
      }
    }
  }
  return result; /*0x6b7c84*/
}



// ==== 0x006B7D30  SpawnManagerClass::CountAliveSpawns  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::CountAliveSpawns(SpawnManagerClass *this)
{
  int v1; // edx
  int result; // eax
  int spawnVectorCount; // ecx

  v1 = *(_DWORD *)this->__pad_48; /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    spawnVectorCount = this->spawnVectorCount; /*0x6b7d39*/
    do /*0x6b7d4a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)spawnVectorCount + 4) != 7 ) /*0x6b7d43*/
        ++result; /*0x6b7d45*/
      spawnVectorCount += 4; /*0x6b7d46*/
      --v1; /*0x6b7d49*/
    }
    while ( v1 ); /*0x6b7d4a*/
  }
  return result; /*0x6b7d4d*/
}



// ==== 0x006B7D50  SpawnManagerClass::CountDockedSpawns  this=SpawnManagerClass  sig=csp ====
int __thiscall SpawnManagerClass::CountDockedSpawns(SpawnManagerClass *this)
{
  int v1; // esi
  int result; // eax
  int spawnVectorCount; // edx
  int v4; // ecx

  v1 = *(_DWORD *)this->__pad_48; /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    spawnVectorCount = this->spawnVectorCount; /*0x6b7d5a*/
    do /*0x6b7d70*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)spawnVectorCount + 4); /*0x6b7d5f*/
      if ( v4 == 6 || !v4 ) /*0x6b7d69*/
        ++result; /*0x6b7d6b*/
      spawnVectorCount += 4; /*0x6b7d6c*/
      --v1; /*0x6b7d6f*/
    }
    while ( v1 ); /*0x6b7d70*/
  }
  return result; /*0x6b7d72*/
}



// ==== 0x006B7D80  TechnoClass::CountPassengers  this=TOP  sig=csp ====
int __thiscall TechnoClass::CountPassengers(TechnoClass *this)
{
  int v2; // ebx
  int i; // esi
  int v4; // eax
  int v5; // ecx
  _BYTE *v6; // ecx

  v2 = 0; /*0x6b7d85*/
  for ( i = 0; i < this->?[3]; ++i ) /*0x6b7d8e*/
  {
    v4 = *(_DWORD *)(this->?[0] + 4 * i); /*0x6b7d93*/
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
int __thiscall SpawnManagerClass::PowerDrainUpdate(SpawnManagerClass *this, int a2)
{
  int SpawnManagerClass_field_6C; // eax
  int v4; // eax
  int SpawnManagerClass_field_68; // eax
  int v6; // eax
  int SpawnManagerClass_field_5C; // edx
  int SpawnManagerClass_field_64; // eax
  int v9; // edx
  int SpawnManagerClass_field_58; // eax
  int result; // eax
  int v12; // eax
  TechnoClass *owner; // esi
  int v14; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6b7de9*/
  Power::TimerProcess(this->SpawnManagerClass_field_70); /*0x6b7df4*/
  SpawnManagerClass_field_6C = this->SpawnManagerClass_field_6C; /*0x6b7df9*/
  if ( SpawnManagerClass_field_6C ) /*0x6b7dfe*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(SpawnManagerClass_field_6C + 4) + 16))(SpawnManagerClass_field_6C + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  SpawnManagerClass_field_68 = this->SpawnManagerClass_field_68; /*0x6b7e12*/
  if ( SpawnManagerClass_field_68 ) /*0x6b7e17*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(SpawnManagerClass_field_68 + 4) + 16))(SpawnManagerClass_field_68 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  SpawnManagerClass_field_5C = this->SpawnManagerClass_field_5C; /*0x6b7e2b*/
  SpawnManagerClass_field_64 = this->SpawnManagerClass_field_64; /*0x6b7e2e*/
  if ( SpawnManagerClass_field_5C != -1 ) /*0x6b7e34*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C >= SpawnManagerClass_field_64 ) /*0x6b7e40*/
      SpawnManagerClass_field_64 = 0; /*0x6b7e46*/
    else
      SpawnManagerClass_field_64 -= *(_DWORD *)&stru_A8EB00.?[416] - SpawnManagerClass_field_5C; /*0x6b7e42*/
  }
  Power::TimerProcess(SpawnManagerClass_field_64); /*0x6b7e4b*/
  v9 = *(_DWORD *)&this->__pad_48[8]; /*0x6b7e50*/
  SpawnManagerClass_field_58 = this->SpawnManagerClass_field_58; /*0x6b7e53*/
  if ( v9 != -1 ) /*0x6b7e59*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= SpawnManagerClass_field_58 ) /*0x6b7e65*/
      SpawnManagerClass_field_58 = 0; /*0x6b7e6b*/
    else
      SpawnManagerClass_field_58 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6b7e67*/
  }
  Power::TimerProcess(SpawnManagerClass_field_58); /*0x6b7e70*/
  Power::TimerProcess(*(_DWORD *)this->__pad_48); /*0x6b7e7b*/
  Power::TimerProcess((int)this->spawnType); /*0x6b7e86*/
  result = (int)this->spawnOwner; /*0x6b7e8b*/
  if ( result ) /*0x6b7e90*/
  {
    v12 = (*(int (__stdcall **)(int))(*(_DWORD *)(result + 4) + 16))(result + 4); /*0x6b7e99*/
    result = Power::TimerProcess(v12); /*0x6b7e9f*/
  }
  owner = this->owner; /*0x6b7ea4*/
  if ( owner ) /*0x6b7ea9*/
  {
    v14 = (*((int (__stdcall **)(void **))owner->? + 4))(&owner->?); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return result; /*0x6b7ebd*/
}



// ==== 0x006B7ED0  SpawnManagerClass::ddtor  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::ddtor(SpawnManagerClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6b7ed6*/
    return -2147467261; /*0x6b7ed8*/
  *a2 = 108652929; /*0x6b7ee6*/
  a2[1] = 299085213; /*0x6b7eee*/
  a2[2] = 268441278; /*0x6b7ef7*/
  a2[3] = unk_7E986C; /*0x6b7f00*/
  return 0; /*0x6b7edd*/
}



// ==== 0x006B7F10  SpawnManagerClass::LoadFromStream  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::LoadFromStream(SpawnManagerClass *this, int a2)
{
  SpawnManagerClass *v2; // ebx
  int v3; // esi
  int Prefix_0; // ebp
  int v5; // edi
  int *spawns; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int spawnVectorCapacity; // ecx
  int v11; // eax
  int v12; // eax
  int spawnVectorCount; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = this; /*0x6b7f12*/
  v3 = a2; /*0x6b7f18*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6b7f24*/
  v5 = 0; /*0x6b7f26*/
  if ( Prefix_0 >= 0 ) /*0x6b7f2a*/
  {
    if ( v2 ) /*0x6b7f32*/
    {
      AbstractClass::InitVtables((AbstractClass *)v2, (int)&this); /*0x6b7f3b*/
      SpawnManagerClass::Constructor_6B83A0((SpawnManagerClass *)v2->spawns, 0, 0); /*0x6b7f45*/
      *(_DWORD *)&v2->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7f51*/
      v2->SpawnManagerClass_field_58 = 0; /*0x6b7f57*/
      Timer::Start((Timer *)&v2->SpawnManagerClass_field_5C, 0); /*0x6b7f5a*/
      v2->AbstractClass = &SpawnManagerClass::`vftable'; /*0x6b7f5f*/
      v2->? = &SpawnManagerClass::`vftable'; /*0x6b7f65*/
      v2->? = &SpawnManagerClass::`vftable'; /*0x6b7f6c*/
      v2->? = &SpawnManagerClass::`vftable'; /*0x6b7f73*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 12))(v3, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      spawns = v2->spawns; /*0x6b7f92*/
      if ( v2 != (SpawnManagerClass *)-56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor((SpawnControlVector *)v2->spawns, 0, 0); /*0x6b7f9d*/
        *spawns = (int)&DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b7fa2*/
        *(_DWORD *)&v2->__pad_48[4] = 10; /*0x6b7fa8*/
        *(_DWORD *)v2->__pad_48 = 0; /*0x6b7faf*/
      }
      v7 = v16; /*0x6b7fb2*/
      this = 0; /*0x6b7fb6*/
      if ( v16 <= 0 ) /*0x6b7fbc*/
      {
LABEL_20:
        v14 = 0; /*0x6b804d*/
        if ( v7 > 0 ) /*0x6b8051*/
        {
          do /*0x6b8069*/
            ObjectPtr::RegisterForTracking( /*0x6b805f*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v2->spawnVectorCount + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->owner); /*0x6b8074*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->spawnOwner); /*0x6b8082*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->SpawnManagerClass_field_68); /*0x6b8090*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->SpawnManagerClass_field_6C); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = __2_YAPAXI_Z(0x18u); /*0x6b7fc8*/
          if ( v8 ) /*0x6b7fd2*/
          {
            v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b7fd4*/
            *(_DWORD *)(v8 + 16) = 0; /*0x6b7fda*/
            *(_DWORD *)(v8 + 8) = v9; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v5, 24, 0); /*0x6b7ff1*/
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          spawnVectorCapacity = v2->spawnVectorCapacity; /*0x6b7ffb*/
          if ( *(_DWORD *)v2->__pad_48 < spawnVectorCapacity /*0x6b8020*/
            || (BYTE1(v2->creationFrame) || !spawnVectorCapacity)
            && (v11 = *(_DWORD *)&v2->__pad_48[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*spawns + 8))(
                 v2->spawns,
                 spawnVectorCapacity + v11,
                 0) )
          {
            v12 = *(_DWORD *)v2->__pad_48; /*0x6b8027*/
            spawnVectorCount = v2->spawnVectorCount; /*0x6b802a*/
            *(_DWORD *)v2->__pad_48 = v12 + 1; /*0x6b8030*/
            *(_DWORD *)(spawnVectorCount + 4 * v12) = v5; /*0x6b8033*/
          }
          v7 = v16; /*0x6b803a*/
          this = (SpawnManagerClass *)((char *)this + 1); /*0x6b8041*/
          if ( (int)this >= v16 ) /*0x6b8045*/
            goto LABEL_20; /*0x6b8045*/
          v5 = 0; /*0x6b7fc4*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b80a3*/
}



// ==== 0x006B80B0  SpawnManagerClass::SaveState  this=SpawnManagerClass  sig=csp ====
int __stdcall SpawnManagerClass::SaveState(SpawnManagerClass *this, int *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6b80c2*/
  if ( result >= 0 ) /*0x6b80c9*/
  {
    v4 = *a2; /*0x6b80ce*/
    a3 = *(_DWORD *)this->__pad_48; /*0x6b80da*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a2, &a3, 4, 0); /*0x6b80de*/
    if ( result >= 0 ) /*0x6b80e3*/
    {
      for ( i = 0; i < a3; ++i ) /*0x6b80ed*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))( /*0x6b80fd*/
                   a2,
                   *(_DWORD *)(this->spawnVectorCount + 4 * i),
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
int SpawnManagerClass::StubReturn116(SpawnManagerClass *this)
{
  return 116; /*0x6b8125*/
}



// ==== 0x006B8130  SpawnManagerClass::StubReturn65  this=SpawnManagerClass  sig=csp ====
int SpawnManagerClass::StubReturn65(SpawnManagerClass *this)
{
  return 65; /*0x6b8135*/
}



// ==== 0x006B8140  SpawnManagerClass::ProcessEvent  this=SpawnManagerClass  sig=csp ====
void *__thiscall SpawnManagerClass::ProcessEvent(SpawnManagerClass *this, char a2)
{
  SpawnManagerClass::Constructor_SpawnManagerClass((TaskManager *)this); /*0x6b8143*/
  if ( (a2 & 1) != 0 ) /*0x6b814d*/
    __3_YAXPAX_Z(this); /*0x6b8150*/
  return this; /*0x6b815a*/
}



// ==== 0x006B8160  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::ddtor  this=DynamicVector  sig=csp ====
void __thiscall SpawnManagerClass_25::ddtor(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b8166*/
  this->m_10 = 0; /*0x6b8169*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b8170*/
  {
    __3_YAXPAX_Z(v2); /*0x6b8176*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b817e*/
  }
  BYTE1(this->m_C) = 0; /*0x6b8181*/
  this->m_8 = 0; /*0x6b8184*/
}



// ==== 0x006B8190  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::LoadState  this=DynamicVector  sig=csp ====
unsigned int __thiscall SpawnManagerClass_25::LoadState(
        _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b8190*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b81a5*/
  else
    return 0; /*0x6b8197*/
}



// ==== 0x006B81B0  _VectorClass_PAUSpawnControl_SpawnManagerClass::SaveState  this=VectorClass  sig=csp ====
int __thiscall SpawnManagerClass_25::SaveState(_VectorClass_PAUSpawnControl_SpawnManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b81ba*/
}



// ==== 0x006B81C0  _DynamicVectorClass_PAVSpawnManagerClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_SpawnManagerClass::Destroy(_DynamicVectorClass_PAVSpawnManagerClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b81c6*/
  this->m_10 = 0; /*0x6b81c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b81d0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b81d6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b81de*/
  }
  BYTE1(this->m_C) = 0; /*0x6b81e1*/
  this->m_8 = 0; /*0x6b81e4*/
}



// ==== 0x006B81F0  _DynamicVectorClass_PAVSpawnManagerClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpawnManagerClass::GetItemIndex(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b81f0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b8205*/
  else
    return 0; /*0x6b81f7*/
}



// ==== 0x006B8210  _VectorClass_PAVSpawnManagerClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::Get(_VectorClass_PAVSpawnManagerClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b821a*/
}



// ==== 0x006B8220  _VectorClass_PAUSpawnControl_SpawnManagerClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall SpawnManagerClass_25::AddRef(_VectorClass_PAUSpawnControl_SpawnManagerClass *this, int a2)
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
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b8235*/
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
_DWORD *__thiscall SpawnManagerClass::Constructor_6B83A0(SpawnManagerClass *this, int a2, int a3)
{
  this->? = 0; /*0x6b83a9*/
  this->? = (void *)a2; /*0x6b83b0*/
  LOBYTE(this->?) = 1; /*0x6b83b3*/
  BYTE1(this->?) = 0; /*0x6b83b7*/
  this->AbstractClass = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b83bb*/
  if ( a2 ) /*0x6b83c1*/
  {
    if ( a3 ) /*0x6b83c9*/
    {
      this->? = (void *)a3; /*0x6b83cb*/
    }
    else
    {
      this->? = (void *)__2_YAPAXI_Z(4 * a2); /*0x6b83dc*/
      BYTE1(this->?) = 1; /*0x6b83df*/
    }
  }
  this->AbstractClass = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b83e3*/
  this->? = 10; /*0x6b83e9*/
  this->? = 0; /*0x6b83f0*/
  return &this->AbstractClass; /*0x6b83f9*/
}



// ==== 0x006B8400  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::Release  this=DynamicVector  sig=csp ====
char __thiscall SpawnManagerClass_25::Release(
        _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b840c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b8412*/
    if ( a3 ) /*0x6b8418*/
      v4 = a3; /*0x6b842e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b842a*/
    LOBYTE(this->m_C) = 1; /*0x6b8432*/
    if ( !v4 ) /*0x6b8436*/
      return 0; /*0x6b84aa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b8438*/
    {
      m_8 = this->m_8; /*0x6b843f*/
      if ( a2 < m_8 ) /*0x6b8444*/
        m_8 = a2; /*0x6b8446*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b844c*/
        ++i; /*0x6b8451*/
      if ( BYTE1(this->m_C) ) /*0x6b845e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b8469*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b8471*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b847a*/
    this->m_8 = a2; /*0x6b8482*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b8485*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b848e*/
  }
  v7 = this->m_8; /*0x6b8491*/
  if ( v7 < this->m_10 ) /*0x6b8499*/
    this->m_10 = v7; /*0x6b849b*/
  return 1; /*0x6b849e*/
}



// ==== 0x006B84B0  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::Spawn  this=DynamicVector  sig=csp ====
int __thiscall SpawnManagerClass_25::Spawn(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b84b0*/
  result = 0; /*0x6b84b3*/
  if ( m_10 <= 0 ) /*0x6b84b8*/
    return -1; /*0x6b84cf*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b84be*/
  {
    if ( ++result >= m_10 ) /*0x6b84cd*/
      return -1; /*0x6b84cd*/
  }
  return result; /*0x6b84d2*/
}



// ==== 0x006B84E0  _VectorClass_PAVSpawnManagerClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::Add(_VectorClass_PAVSpawnManagerClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x6b84e2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x6b84ed*/
  {
    v3 = 0; /*0x6b84ef*/
    if ( m_8 <= 0 ) /*0x6b84f3*/
      return 1; /*0x6b8513*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b84f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b84fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b8504*/
    {
      ++v3; /*0x6b8506*/
      ++v4; /*0x6b8507*/
      if ( v3 >= m_8 ) /*0x6b850c*/
        return 1; /*0x6b850c*/
    }
  }
  return 0; /*0x6b850e*/
}



// ==== 0x006B8520  _VectorClass_PAVSpawnManagerClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::Release(_VectorClass_PAVSpawnManagerClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x6b852c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b8536*/
    if ( a3 ) /*0x6b853c*/
      v4 = a3; /*0x6b8552*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b854e*/
    LOBYTE(this->m_C) = 1; /*0x6b8556*/
    if ( v4 ) /*0x6b855a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x6b8565*/
      {
        m_8 = this->m_8; /*0x6b856c*/
        if ( a2 < m_8 ) /*0x6b8571*/
          m_8 = a2; /*0x6b8573*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b8579*/
          ++i; /*0x6b857e*/
        if ( BYTE1(this->m_C) ) /*0x6b858b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b8596*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6b859e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x6b85a7*/
      this->m_8 = a2; /*0x6b85af*/
      BYTE1(this->m_C) = a3 == 0; /*0x6b85b2*/
      return 1; /*0x6b85b8*/
    }
    else
    {
      return 0; /*0x6b855f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVSpawnManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b85c2*/
    return 1; /*0x6b85c8*/
  }
}



// ==== 0x006B85D0  _VectorClass_PAVSpawnManagerClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_SpawnManagerClass::Remove(_VectorClass_PAVSpawnManagerClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6b85dd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b85e3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b85eb*/
  }
  BYTE1(this->m_C) = 0; /*0x6b85ee*/
  this->m_8 = 0; /*0x6b85f1*/
}



// ==== 0x006B8600  _VectorClass_PAVSpawnManagerClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::GetSize(_VectorClass_PAVSpawnManagerClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x6b8600*/
    return 0; /*0x6b8608*/
  m_8 = this->m_8; /*0x6b860e*/
  result = 0; /*0x6b8611*/
  if ( m_8 <= 0 ) /*0x6b8615*/
    return -1; /*0x6b862c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b861b*/
  {
    if ( ++result >= m_8 ) /*0x6b862a*/
      return -1; /*0x6b862a*/
  }
  return result; /*0x6b860a*/
}



// ==== 0x006B8640  _VectorClass_PAVSpawnManagerClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_SpawnManagerClass::GetCapacity(_VectorClass_PAVSpawnManagerClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6b8640*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b8655*/
  else
    return 0; /*0x6b8647*/
}



// ==== 0x006B8660  _DynamicVectorClass_PAVSpawnManagerClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_SpawnManagerClass::SetCapacity(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b866c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b8672*/
    if ( a3 ) /*0x6b8678*/
      v4 = a3; /*0x6b868e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x6b868a*/
    LOBYTE(this->m_C) = 1; /*0x6b8692*/
    if ( !v4 ) /*0x6b8696*/
      return 0; /*0x6b870a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b8698*/
    {
      m_8 = this->m_8; /*0x6b869f*/
      if ( a2 < m_8 ) /*0x6b86a4*/
        m_8 = a2; /*0x6b86a6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b86ac*/
        ++i; /*0x6b86b1*/
      if ( BYTE1(this->m_C) ) /*0x6b86be*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b86c9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b86d1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b86da*/
    this->m_8 = a2; /*0x6b86e2*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b86e5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVSpawnManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b86ee*/
  }
  v7 = this->m_8; /*0x6b86f1*/
  if ( v7 < this->m_10 ) /*0x6b86f9*/
    this->m_10 = v7; /*0x6b86fb*/
  return 1; /*0x6b86fe*/
}



// ==== 0x006B8710  _DynamicVectorClass_PAVSpawnManagerClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_SpawnManagerClass::FindItemIndex(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x6b8710*/
  result = 0; /*0x6b8713*/
  if ( m_10 <= 0 ) /*0x6b8718*/
    return -1; /*0x6b872f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b871e*/
  {
    if ( ++result >= m_10 ) /*0x6b872d*/
      return -1; /*0x6b872d*/
  }
  return result; /*0x6b8732*/
}



// ==== 0x006B8740  ?$VectorClass@PAUSpawnControl@SpawnManagerClass@@::validatePathMemory  this=VectorClass  sig=csp ====
_DWORD *__thiscall AbstractClass::sub_6B8740(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x6b8743*/
  *Block = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b8746*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x6b8750*/
  {
    __3_YAXPAX_Z(v3); /*0x6b8758*/
    *(Block + 1) = 0; /*0x6b8760*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x6b876b*/
  *(Block + 2) = 0; /*0x6b8771*/
  if ( (a2 & 1) != 0 ) /*0x6b8778*/
    __3_YAXPAX_Z(Block); /*0x6b877b*/
  return Block; /*0x6b8785*/
}



// ==== 0x006B8790  _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass::QueryInterface  this=DynamicVector  sig=csp ====
_DWORD *__thiscall SpawnManagerClass_25::QueryInterface(
        _DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b8793*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b8796*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b87a0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b87b0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b87bb*/
  this->m_8 = 0; /*0x6b87c1*/
  if ( (a2 & 1) != 0 ) /*0x6b87c8*/
    __3_YAXPAX_Z(this); /*0x6b87cb*/
  return this->__pad_0; /*0x6b87d5*/
}



// ==== 0x006B87E0  _VectorClass_PAVSpawnManagerClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpawnManagerClass::QueryInterface(_VectorClass_PAVSpawnManagerClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b87e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpawnManagerClass *>::`vftable'; /*0x6b87e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b87f0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b8800*/
  }
  BYTE1(this->m_C) = 0; /*0x6b880b*/
  this->m_8 = 0; /*0x6b8811*/
  if ( (a2 & 1) != 0 ) /*0x6b8818*/
    __3_YAXPAX_Z(this); /*0x6b881b*/
  return this->__pad_0; /*0x6b8825*/
}



// ==== 0x006B8830  _DynamicVectorClass_PAVSpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_SpawnManagerClass::Constructor_VectorClass_SpawnManagerClass___(
        _DynamicVectorClass_PAVSpawnManagerClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6b8833*/
  *(_DWORD *)this->__pad_0 = &VectorClass<SpawnManagerClass *>::`vftable'; /*0x6b8836*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6b8840*/
  {
    __3_YAXPAX_Z(v3); /*0x6b8848*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b8850*/
  }
  BYTE1(this->m_C) = 0; /*0x6b885b*/
  this->m_8 = 0; /*0x6b8861*/
  if ( (a2 & 1) != 0 ) /*0x6b8868*/
    __3_YAXPAX_Z(this); /*0x6b886b*/
  return this->__pad_0; /*0x6b8875*/
}



// ==== 0x006B8880  SpawnControlVector::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall SpawnControlVector::Constructor(SpawnControlVector *this, int a2, int a3)
{
  this->Items = 0; /*0x6b888b*/
  this->Capacity = a2; /*0x6b888e*/
  this->IsInitialized = 1; /*0x6b8891*/
  this->IsAllocated = 0; /*0x6b8895*/
  *this = (SpawnControlVector)&VectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b8898*/
  if ( a2 ) /*0x6b889e*/
  {
    if ( a3 ) /*0x6b88a6*/
    {
      this->Items = a3; /*0x6b88a8*/
      return this; /*0x6b88ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x6b88bd*/
    this->IsAllocated = 1; /*0x6b88c0*/
  }
  return this; /*0x6b88ad*/
}



// ==== 0x006B88D0  sub_6B88D0  this=-  sig=ida-proto ====
int sub_6B88D0()
{
  dword_B0B8A8 = 0; /*0x6b88d2*/
  dword_B0B8AC = 0; /*0x6b88d7*/
  dword_B0B8B0 = 0; /*0x6b88dc*/
  dword_B0B8B4 = 0; /*0x6b88e1*/
  return 0; /*0x6b88e6*/
}



// ==== 0x006B88F0  sub_6B88F0  this=-  sig=ida-proto ====
void sub_6B88F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6b88fc*/
  dbl_B0B8C0 = Math::Sqrt(v0 + v0); /*0x6b890e*/
}



// ==== 0x006B8920  sub_6B8920  this=-  sig=ida-proto ====
void sub_6B8920()
{
  dbl_B0B910 = dbl_B0B8C0 / 60.0; /*0x6b892c*/
}



// ==== 0x006B8940  sub_6B8940  this=-  sig=ida-proto ====
void sub_6B8940()
{
  dbl_B0B8F8 = 1.0 / dbl_B0B910; /*0x6b894c*/
}



// ==== 0x006B8960  sub_6B8960  this=-  sig=ida-proto ====
void sub_6B8960()
{
  dbl_B0B8F0 = 0.0174532925199433 * 45.0; /*0x6b896c*/
}



// ==== 0x006B8980  sub_6B8980  this=-  sig=ida-proto ====
void sub_6B8980()
{
  dbl_B0B8C8 = 0.0174532925199433 * 60.0; /*0x6b898c*/
}



// ==== 0x006B89A0  sub_6B89A0  this=-  sig=ida-proto ====
void sub_6B89A0()
{
  dbl_B0B8A0 = 0.0174532925199433 * 90.0; /*0x6b89ac*/
}



// ==== 0x006B89C0  sub_6B89C0  this=-  sig=ida-proto ====
__int64 sub_6B89C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0B8A0 - dbl_B0B8C8); /*0x6b89d2*/
  result = Math::RoundToInt(v0 * dbl_B0B8C0 * 0.5); /*0x6b89e6*/
  dword_B0B918 = result; /*0x6b89eb*/
  return result; /*0x6b89f0*/
}



// ==== 0x006B8A00  sub_6B8A00  this=-  sig=ida-proto ====
void sub_6B8A00()
{
  dbl_B0B8D0 = Math::ArcTan((double)dword_B0B918 * 0.00390625); /*0x6b8a17*/
}



// ==== 0x006B8A30  sub_6B8A30  this=-  sig=ida-proto ====
void sub_6B8A30()
{
  dbl_B0B8E8 = Math::ArcTan((double)(2 * dword_B0B918) / dbl_B0B8C0); /*0x6b8a52*/
}



// ==== 0x006B8A60  sub_6B8A60  this=-  sig=ida-proto ====
__int64 sub_6B8A60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0B918) + 0.5); /*0x6b8a7b*/
  dword_B0B90C = result; /*0x6b8a80*/
  return result; /*0x6b8a86*/
}



// ==== 0x006B8A90  sub_6B8A90  this=-  sig=ida-proto ====
int sub_6B8A90()
{
  word_B0B8B8 = 0; /*0x6b8a92*/
  word_B0B8BA = 0; /*0x6b8a98*/
  return 0; /*0x6b8a9e*/
}



// ==== 0x006B8AA0  sub_6B8AA0  this=-  sig=ida-proto ====
int sub_6B8AA0()
{
  dword_B0B8D8 = 0; /*0x6b8aa2*/
  dword_B0B8DC = 0; /*0x6b8aa7*/
  dword_B0B8E0 = 0; /*0x6b8aac*/
  return 0; /*0x6b8ab1*/
}



// ==== 0x006B8AC0  sub_6B8AC0  this=-  sig=ida-proto ====
int sub_6B8AC0()
{
  dword_B0B908 = 0; /*0x6b8ac5*/
  dword_B0B900 = 128; /*0x6b8acf*/
  dword_B0B904 = 128; /*0x6b8ad4*/
  return 128; /*0x6b8ad9*/
}



// ==== 0x006B8AE0  ScenarioClass::ResetIntroFlags  this=ScenarioClass  sig=csp ====
unsigned int __thiscall ScenarioClass::ResetIntroFlags(ScenarioClass *this)
{
  unsigned int result; // eax

  result = this->nextScenario[0] & 0xFFF80000 | 0x8088; /*0x6b8ae7*/
  this->nextScenario[0] = result; /*0x6b8aec*/
  return result; /*0x6b8aee*/
}



// ==== 0x006B8AF0  ObjectClass::ApplyGameOptions_Helper  this=ObjectClass  sig=csp ====
bool __thiscall ApplyGameOptions_Helper(ObjectClass *this, _DWORD *a2)
{
  int v2; // eax

  v2 = (int)this->AbstractClass ^ *a2; /*0x6b8af8*/
  return !(_BYTE)v2 && (v2 & 0x7FF00) == 0; /*0x6b8b07*/
}



// ==== 0x006B8B10  ObjectClass::nullsub_37  this=ObjectClass  sig=csp ====
void nullsub_37(ObjectClass *this)
{
  ; /*0x6b8b10*/
}



// ==== 0x006B8B20  ObjectClass::nullsub_38  this=ObjectClass  sig=csp ====
void nullsub_38(ObjectClass *this)
{
  ; /*0x6b8b20*/
}



// ==== 0x006B8B30  ScenarioClass::RevealMapForHouse  this=ScenarioClass  sig=csp ====
char __thiscall ScenarioClass::RevealMapForHouse(ScenarioClass *this, char *a2)
{
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, g_INI_Key_TiberiumGrows, (this->nextScenario[0] & 0x40) != 0); /*0x6b8b4e*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aTiberiumspread, (this->nextScenario[0] & 0x80) != 0); /*0x6b8b69*/
  INIClass::SetBool( /*0x6b8b85*/
    a2,
    (unsigned __int8 *)off_8401C8,
    g_INI_Key_TiberiumExplosive,
    (this->nextScenario[0] & 0x4000) != 0);
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aDestroyablebri, (this->nextScenario[0] & 0x8000) != 0); /*0x6b8ba0*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aMcvdeploy, BYTE1(this->nextScenario[0]) & 1); /*0x6b8bbb*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aInitialveteran, (this->nextScenario[0] & 0x200) != 0); /*0x6b8bd7*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aFixedalliance, (this->nextScenario[0] & 0x400) != 0); /*0x6b8bf2*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aHarvesterimmun, (this->nextScenario[0] & 0x800) != 0); /*0x6b8c0d*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, g_INI_Key_FogOfWar, (this->nextScenario[0] & 0x1000) != 0); /*0x6b8c29*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aInert, (this->nextScenario[0] & 0x20) != 0); /*0x6b8c44*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aIonstorms, (this->nextScenario[0] & 0x20000) != 0); /*0x6b8c5f*/
  INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aMeteorites, HIWORD(this->nextScenario[0]) & 1); /*0x6b8c7b*/
  return INIClass::SetBool(a2, (unsigned __int8 *)off_8401C8, aVisceroids, (this->nextScenario[0] & 0x40000) != 0); /*0x6b8c9b*/
}



// ==== 0x006B8CA0  GameMode::ReadFlagsFromINI  this=GameMode  sig=csp ====
unsigned int __thiscall GameMode::ReadFlagsFromINI(GameMode *this, _DWORD *a2)
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

  INIClass::ResetSection((INIClass *)a2); /*0x6b8caa*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6b8cc5*/
                     a2,
                     off_8401CC,
                     (unsigned __int8 *)g_INI_Key_TiberiumExplosive,
                     (*(_DWORD *)this & 0x4000) != 0);
  v4 = *(_DWORD *)this; /*0x6b8cca*/
  BYTE1(v4) = BYTE1(*(_DWORD *)this) & 0xBF; /*0x6b8cd2*/
  v5 = v4 | ((Bool_Overwrite & 1) << 14); /*0x6b8cd7*/
  *(_DWORD *)this = v5; /*0x6b8cd9*/
  v6 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aMcvdeploy, BYTE1(v5) & 1); /*0x6b8cec*/
  v7 = *(_DWORD *)this; /*0x6b8cf1*/
  BYTE1(v7) = BYTE1(*(_DWORD *)this) & 0xFE; /*0x6b8cf9*/
  v8 = v7 | ((v6 & 1) << 8); /*0x6b8cfc*/
  *(_DWORD *)this = v8; /*0x6b8d00*/
  v9 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aInitialveteran, (v8 & 0x200) != 0); /*0x6b8d14*/
  v10 = *(_DWORD *)this; /*0x6b8d19*/
  BYTE1(v10) = BYTE1(*(_DWORD *)this) & 0xFD; /*0x6b8d21*/
  v11 = v10 | ((v9 & 1) << 9); /*0x6b8d24*/
  *(_DWORD *)this = v11; /*0x6b8d28*/
  v12 = *(_DWORD *)this & 0xFFFDFFFF /*0x6b8d4f*/
      | ((INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aIonstorms, (v11 & 0x20000) != 0) & 1) << 17);
  *(_DWORD *)this = v12; /*0x6b8d53*/
  v13 = *(_DWORD *)this & 0xFFFEFFFF /*0x6b8d7a*/
      | ((INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aMeteorites, BYTE2(v12) & 1) & 1) << 16);
  *(_DWORD *)this = v13; /*0x6b8d7c*/
  result = *(_DWORD *)this & 0xFFFBFFFF /*0x6b8da5*/
         | ((INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aVisceroids, (v13 & 0x40000) != 0) & 1) << 18);
  *(_DWORD *)this = result; /*0x6b8da7*/
  if ( !*(_DWORD *)&dword_A8B238 || stru_A8EB00.?[391] ) /*0x6b8dbb*/
  {
    v15 = *(_DWORD *)this & 0xFFFFFFBF /*0x6b8de5*/
        | ((INIClass::ReadBool_Overwrite(
              a2,
              off_8401CC,
              (unsigned __int8 *)g_INI_Key_TiberiumGrows,
              (result & 0x40) != 0)
          & 1) << 6);
    *(_DWORD *)this = v15; /*0x6b8de9*/
    v16 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aTiberiumspread, (v15 & 0x80) != 0); /*0x6b8dfd*/
    v17 = *(_DWORD *)this; /*0x6b8e02*/
    LOBYTE(v17) = *(_DWORD *)this & 0x7F; /*0x6b8e0a*/
    v18 = v17 | ((v16 & 1) << 7); /*0x6b8e0d*/
    *(_DWORD *)this = v18; /*0x6b8e11*/
    v19 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aDestroyablebri, (v18 & 0x8000) != 0); /*0x6b8e25*/
    v20 = *(_DWORD *)this; /*0x6b8e2a*/
    BYTE1(v20) = BYTE1(*(_DWORD *)this) & 0x7F; /*0x6b8e32*/
    v21 = v20 | ((v19 & 1) << 15); /*0x6b8e35*/
    *(_DWORD *)this = v21; /*0x6b8e39*/
    v22 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aFixedalliance, (v21 & 0x400) != 0); /*0x6b8e4d*/
    v23 = *(_DWORD *)this; /*0x6b8e52*/
    BYTE1(v23) = BYTE1(*(_DWORD *)this) & 0xFB; /*0x6b8e5a*/
    v24 = v23 | ((v22 & 1) << 10); /*0x6b8e5d*/
    *(_DWORD *)this = v24; /*0x6b8e61*/
    v25 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)g_INI_Key_FogOfWar, (v24 & 0x1000) != 0); /*0x6b8e75*/
    v26 = *(_DWORD *)this; /*0x6b8e7a*/
    BYTE1(v26) = BYTE1(*(_DWORD *)this) & 0xEF; /*0x6b8e82*/
    v27 = v26 | ((v25 & 1) << 12); /*0x6b8e85*/
    *(_DWORD *)this = v27; /*0x6b8e89*/
    v28 = *(_DWORD *)this & 0xFFFFFFDF /*0x6b8ead*/
        | (32 * (INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aInert, (v27 & 0x20) != 0) & 1));
    *(_DWORD *)this = v28; /*0x6b8eb1*/
    v29 = INIClass::ReadBool_Overwrite(a2, off_8401CC, (unsigned __int8 *)aHarvesterimmun, (v28 & 0x800) != 0); /*0x6b8ec5*/
    v30 = *(_DWORD *)this; /*0x6b8eca*/
    BYTE1(v30) = BYTE1(*(_DWORD *)this) & 0xF7; /*0x6b8ed2*/
    result = v30 | ((v29 & 1) << 11); /*0x6b8ed5*/
    *(_DWORD *)this = result; /*0x6b8ed7*/
  }
  return result; /*0x6b8ed9*/
}



// ==== 0x006B8EE0  sub_6B8EE0  this=-  sig=ida-proto ====
int sub_6B8EE0()
{
  dword_B0B920 = 0; /*0x6b8ee2*/
  dword_B0B924 = 0; /*0x6b8ee7*/
  dword_B0B928 = 0; /*0x6b8eec*/
  dword_B0B92C = 0; /*0x6b8ef1*/
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
  v7 = dword_84066C[v6]; /*0x6b8f49*/
  v8 = (a4 * *a2) >> 1; /*0x6b8f55*/
  v56 = dword_84026C[v6]; /*0x6b8f59*/
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
  dword_B0B938 = 0; /*0x6b9352*/
  dword_B0B93C = 0; /*0x6b9357*/
  dword_B0B940 = 0; /*0x6b935c*/
  dword_B0B944 = 0; /*0x6b9361*/
  return 0; /*0x6b9366*/
}



// ==== 0x006B93E0  ObjectClass::method_6B93E0  this=ObjectClass  sig=csp ====
int __thiscall sub_6B93E0(ObjectClass *this)
{
  unsigned __int8 *v1; // ecx
  int v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax

  v1 = (unsigned __int8 *)&this->AbstractClass + 2; /*0x6b93e4*/
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
_DWORD *__thiscall sub_6B9450(ObjectClass *this)
{
  char *v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  void *v5; // edi
  unsigned int v6; // edx

  this->? = (void *)-1717986918; /*0x6b945a*/
  this->owningHouseIndex = -1717986918; /*0x6b945d*/
  this->occupant = 1070176665; /*0x6b9466*/
  this->fallRate = 1072273817; /*0x6b946d*/
  this->nextObject = (ObjectClass *)128; /*0x6b9474*/
  this->? = 128; /*0x6b9477*/
  this->? = (void *)128; /*0x6b947a*/
  this->? = 0; /*0x6b947d*/
  v2 = 0; /*0x6b9480*/
  v3 = 128; /*0x6b9482*/
  do /*0x6b9489*/
  {
    ++v2; /*0x6b9484*/
    v3 >>= 1; /*0x6b9485*/
  }
  while ( v3 ); /*0x6b9489*/
  this->? = v2; /*0x6b948b*/
  this->? = 0; /*0x6b9496*/
  v4 = 1 << ((_BYTE)v2 - 1); /*0x6b9499*/
  this->? = v2 - 1; /*0x6b949b*/
  this->? = 0; /*0x6b949e*/
  LOBYTE(this->?) = 0; /*0x6b94a1*/
  this->? = (void *)v4; /*0x6b94a4*/
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6b94b3*/
  v6 = 4 * (int)this->?; /*0x6b94b8*/
  this->AbstractClass = v5; /*0x6b94bf*/
  memset(v5, 0, v6); /*0x6b94c4*/
  this->? = (int)sub_6B94E0; /*0x6b94cd*/
  return &this->AbstractClass; /*0x6b94d6*/
}



// ==== 0x006B94E0  ObjectClass::method_6B94E0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6B94E0(ObjectClass *this)
{
  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = String::Length((String *)this); /*0x6b94ec*/
  for ( i = 0; i < String::Length((String *)this); ++i ) /*0x6b94f0*/
  {
    v4 = String::GetOrEmpty((String *)this); /*0x6b94fb*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x6b9510*/
  }
  return v2; /*0x6b9520*/
}



// ==== 0x006B9530  HashTable::Clear  this=HashTable  sig=csp ====
void __thiscall HashTable::Clear(HashTable *this)
{
  int HashTable_field_0x04; // ecx
  unsigned int v3; // edi
  int HashTable_field_0x08; // eax
  int v5; // ebx
  _DWORD *v6; // ecx
  const char **v7; // esi
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  int HashTable_field_0x0C; // ecx
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // esi
  ObjectClass *v25; // ebx
  unsigned int v26; // edx
  unsigned int HashTable_field_0x30; // eax
  float v28; // [esp+10h] [ebp-31Ch]
  int *v29; // [esp+10h] [ebp-31Ch]
  _BYTE v30[792]; // [esp+14h] [ebp-318h] BYREF

  unknown_libname_73(v30); /*0x6b9540*/
  while ( 1 ) /*0x6b9545*/
  {
    HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6b9545*/
    v3 = 0; /*0x6b9548*/
    if ( !HashTable_field_0x04 ) /*0x6b954c*/
      break; /*0x6b954c*/
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6b9552*/
    *(_QWORD *)&v30[4] = (unsigned int)(HashTable_field_0x04 - 1); /*0x6b9556*/
    *(_DWORD *)&v30[12] = HashTable_field_0x08; /*0x6b9562*/
    *(_DWORD *)&v30[16] = 0; /*0x6b9566*/
    v5 = 0; /*0x6b956e*/
    v28 = (double)*(__int64 *)&v30[4] / (double)HashTable_field_0x08; /*0x6b9572*/
    if ( HashTable_field_0x08 <= 0 ) /*0x6b9576*/
      break; /*0x6b9576*/
    v6 = *(_DWORD **)this->__pad_0; /*0x6b957f*/
    while ( !*v6 ) /*0x6b9583*/
    {
      ++v5; /*0x6b9585*/
      ++v6; /*0x6b9586*/
      if ( v5 >= HashTable_field_0x08 ) /*0x6b958b*/
        goto LABEL_23; /*0x6b958b*/
    }
    if ( v5 == -1 ) /*0x6b9596*/
      break; /*0x6b9596*/
    v7 = *(const char ***)(*(_DWORD *)this->__pad_0 + 4 * v5); /*0x6b959c*/
    String::Reassign((String *)v30, v7); /*0x6b95a4*/
    v8 = *(_DWORD *)this->__pad_0; /*0x6b95a9*/
    qmemcpy(&v30[20], v7 + 1, 0x304u); /*0x6b95b8*/
    v9 = *(_DWORD **)(v8 + 4 * v5); /*0x6b95ba*/
    v10 = v9[194]; /*0x6b95bf*/
    if ( v9 ) /*0x6b95c5*/
    {
      DeleteAndZero(*(ObjectClass **)(v8 + 4 * v5)); /*0x6b95c9*/
      __3_YAXPAX_Z(v9); /*0x6b95cf*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v5) = v10; /*0x6b95de*/
    v11 = v28 < *(double *)&this->HashTable_field_0x20; /*0x6b95e4*/
    v12 = v28 == *(double *)&this->HashTable_field_0x20; /*0x6b95e4*/
    --this->HashTable_field_0x04; /*0x6b95e8*/
    if ( v11 || v12 ) /*0x6b95ed*/
    {
      v13 = this->HashTable_field_0x08; /*0x6b95f6*/
      if ( v13 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6b9608*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6b960e*/
        v15 = *(int **)this->__pad_0; /*0x6b9611*/
        v29 = *(int **)this->__pad_0; /*0x6b9616*/
        this->HashTable_field_0x08 = v13 >> 1; /*0x6b961d*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6b9627*/
        v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6b9633*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6b9638*/
        *(_DWORD *)this->__pad_0 = v16; /*0x6b963f*/
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
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x6b966c*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x6b9671*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x6b9677*/
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
    if ( *(_DWORD *)&v30[20] ) /*0x6b96a4*/
      (***(void (__thiscall ****)(_DWORD, int))&v30[20])(*(_DWORD *)&v30[20], 1); /*0x6b96ae*/
  }
LABEL_23:
  DeleteAndZero((ObjectClass *)v30); /*0x6b96b5*/
  if ( this->HashTable_field_0x08 ) /*0x6b96be*/
  {
    do /*0x6b96fe*/
    {
      v24 = *(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v3); /*0x6b96c6*/
      while ( v24 ) /*0x6b96cb*/
      {
        v25 = v24; /*0x6b96cd*/
        v24 = (ObjectClass *)v24[4].customSound_controller[2]; /*0x6b96cf*/
        DeleteAndZero(v25); /*0x6b96db*/
        __3_YAXPAX_Z(v25); /*0x6b96e1*/
      }
      ++v3; /*0x6b96f0*/
      *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v3 - 4) = 0; /*0x6b96f1*/
    }
    while ( v3 < this->HashTable_field_0x08 ); /*0x6b96fe*/
  }
  v26 = this->HashTable_field_0x08; /*0x6b9702*/
  HashTable_field_0x30 = this->HashTable_field_0x30; /*0x6b9705*/
  this->HashTable_field_0x04 = 0; /*0x6b970a*/
  if ( v26 > HashTable_field_0x30 ) /*0x6b970d*/
  {
    do /*0x6b9725*/
    {
      if ( LOBYTE(this->HashTable_field_0x14) ) /*0x6b970f*/
        break; /*0x6b9714*/
      HashTable::RebuildEx(this); /*0x6b9718*/
    }
    while ( this->HashTable_field_0x08 > (unsigned int)this->HashTable_field_0x30 ); /*0x6b9725*/
  }
  __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x6b972b*/
}



// ==== 0x006B9740  ChatEvent::ProcessStrings  this=HashTable  sig=csp ====
char __thiscall ChatEvent::ProcessStrings(int this, char *a2, int a3, int a4, int a5)
{
  int v6; // eax
  const void *v7; // ecx
  _DWORD *v8; // ebx
  const void *v9; // edx
  const void *v10; // eax
  const void *v11; // eax
  const void *v12; // ecx
  unsigned int v13; // eax
  const void *v14; // ecx
  const void *v15; // edx
  unsigned __int8 *v16; // esi
  const void **v17; // edi
  int v18; // eax
  unsigned __int8 *v19; // esi
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int *v23; // esi
  int *v24; // edi
  const void *v25; // edx
  const void *v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  int v34; // eax
  String *v35; // ebx
  int v36; // esi
  const void *v37; // esi
  int v38; // eax
  const void *v39; // edx
  unsigned int v40; // eax
  int v41; // esi
  int v42; // edi
  _DWORD *v43; // edi
  int v44; // ebx
  double v45; // st7
  bool v46; // c0
  bool v47; // c3
  int v48; // esi
  String *v49; // eax
  String *v50; // esi
  String **v51; // edx
  String *v52; // eax
  int v53; // esi
  int v54; // eax
  double v55; // st7
  int *v56; // ebx
  int v57; // edi
  void *v58; // edi
  unsigned int v59; // edx
  int *v60; // edi
  int v61; // ebx
  int v62; // esi
  int v63; // edx
  int v64; // ecx
  int v65; // eax
  const void *v67[214]; // [esp+10h] [ebp-65Ch] BYREF
  _DWORD v68[193]; // [esp+368h] [ebp-304h] BYREF

  v67[3] = *(const void **)a3; /*0x6b975c*/
  v67[4] = *(const void **)(a3 + 4); /*0x6b976a*/
  v67[5] = *(const void **)(a3 + 8); /*0x6b9775*/
  LOWORD(v67[6]) = *(_WORD *)(a3 + 12); /*0x6b9782*/
  qmemcpy(&v67[10], (const void *)(a3 + 14), 0x28u); /*0x6b978c*/
  v6 = __2_YAPAXI_Z(4 * (1 << SBYTE2(v67[13])) + 40); /*0x6b979c*/
  v7 = v67[10]; /*0x6b97a1*/
  v8 = (_DWORD *)v6; /*0x6b97a5*/
  v9 = v67[11]; /*0x6b97ab*/
  *(const void **)(v6 + 8) = v67[12]; /*0x6b97af*/
  v10 = v67[14]; /*0x6b97b2*/
  *v8 = v7; /*0x6b97b6*/
  LOWORD(v7) = v67[13]; /*0x6b97b8*/
  v8[4] = v10; /*0x6b97bd*/
  v11 = v67[17]; /*0x6b97c0*/
  *((_WORD *)v8 + 6) = (_WORD)v7; /*0x6b97c4*/
  v12 = v67[15]; /*0x6b97c8*/
  v8[7] = v11; /*0x6b97cc*/
  v13 = (unsigned int)v67[18]; /*0x6b97cf*/
  v8[1] = v9; /*0x6b97d3*/
  LOWORD(v9) = HIWORD(v67[13]); /*0x6b97d6*/
  v8[5] = v12; /*0x6b97db*/
  v14 = v67[19]; /*0x6b97de*/
  v8[8] = v13; /*0x6b97e6*/
  *((_WORD *)v8 + 7) = (_WORD)v9; /*0x6b97e9*/
  v15 = v67[16]; /*0x6b97ed*/
  v13 *= 4; /*0x6b97f1*/
  v8[9] = v14; /*0x6b97f4*/
  v8[6] = v15; /*0x6b97f9*/
  qmemcpy(v8 + 10, (const void *)(a3 + 54), v13); /*0x6b9807*/
  v67[2] = (const void *)256; /*0x6b980b*/
  v16 = (unsigned __int8 *)(v8 + 10); /*0x6b981c*/
  v17 = &v67[21]; /*0x6b9821*/
  v67[0] = (const void *)(v13 + a3 + 54); /*0x6b9825*/
  do /*0x6b9881*/
  {
    v18 = *v16; /*0x6b9831*/
    v19 = v16 + 1; /*0x6b9833*/
    v20 = *v19; /*0x6b983e*/
    v16 = v19 + 3; /*0x6b9841*/
    v17 = (const void **)((char *)v17 + 2); /*0x6b9844*/
    v21 = v20 >> g_BitMask_Blue << g_BitMask_Green; /*0x6b9857*/
    LOWORD(v18) = v21 | (v18 >> g_BitMask_Red << g_BitShift_Blue); /*0x6b985f*/
    LOWORD(v21) = (unsigned __int8)(*(v16 - 2) >> g_BitShift_Green_0); /*0x6b986c*/
    *((_WORD *)v17 - 1) = (v21 << g_BitShift_Red) | v18; /*0x6b9874*/
    --v67[2]; /*0x6b987d*/
  }
  while ( v67[2] ); /*0x6b9881*/
  v67[2] = (const void *)__2_YAPAXI_Z((char *)*(const void **)((char *)&v67[3] + 2) - (char *)*(const void **)((char *)&v67[5] + 2)); /*0x6b9899*/
  qmemcpy( /*0x6b98a6*/
    (void *)v67[2],
    v67[0],
    (char *)*(const void **)((char *)&v67[3] + 2) - (char *)*(const void **)((char *)&v67[5] + 2));
  v22 = __2_YAPAXI_Z(0x20u); /*0x6b98af*/
  v23 = (int *)v22; /*0x6b98b4*/
  v24 = 0; /*0x6b98b6*/
  if ( v22 ) /*0x6b98bd*/
  {
    v25 = v67[12]; /*0x6b98bf*/
    v26 = v67[11]; /*0x6b98c3*/
    *(const void **)(v22 + 8) = v67[12]; /*0x6b98c7*/
    *(_DWORD *)(v22 + 4) = v26; /*0x6b98d4*/
    *(_DWORD *)(v22 + 12) = 0; /*0x6b98df*/
    *(_DWORD *)v22 = &XSurface_Vtable; /*0x6b98e2*/
    *(_DWORD *)(v22 + 16) = a5; /*0x6b98e8*/
    Buffer::Init((Buffer *)(v22 + 20), 0, a5 * (_DWORD)v26 * (_DWORD)v25); /*0x6b98eb*/
    v24 = v23; /*0x6b98f0*/
    *v23 = (int)&BSurface_Vtable; /*0x6b98f2*/
    v67[8] = v23; /*0x6b98f8*/
  }
  else
  {
    v67[8] = 0; /*0x6b98fe*/
  }
  v67[9] = (const void *)(*(int (__thiscall **)(int *, _DWORD, _DWORD))(*v24 + 92))(v24, 0, 0); /*0x6b990f*/
  v27 = (*(int (__thiscall **)(int *))(*v24 + 116))(v24) / 2; /*0x6b992c*/
  v28 = (int)v67[11] - ((int)v67[11] & 3) + 4; /*0x6b992e*/
  v67[3] = (const void *)v27; /*0x6b9931*/
  if ( (int)v67[12] > 0 ) /*0x6b9937*/
  {
    v67[0] = 0; /*0x6b993f*/
    v29 = -v28; /*0x6b9947*/
    v67[20] = (const void *)-v28; /*0x6b994a*/
    v30 = v28 * ((int)v67[12] - 1); /*0x6b994e*/
    v67[7] = v67[12]; /*0x6b9955*/
    do /*0x6b99cf*/
    {
      v31 = 0; /*0x6b9959*/
      if ( (int)v67[11] > 0 ) /*0x6b995f*/
      {
        do /*0x6b99ac*/
        {
          v32 = v30 + v31; /*0x6b9968*/
          if ( a5 == 2 ) /*0x6b996e*/
            *((_WORD *)v67[9] + (int)v67[0] + v31) = *((_WORD *)&v67[21] + *((unsigned __int8 *)v67[2] + v32)); /*0x6b9988*/
          else
            *((_WORD *)v67[9] + (int)v67[0] + v31) = *((unsigned __int8 *)v67[2] + v32); /*0x6b99a1*/
          ++v31; /*0x6b99a9*/
        }
        while ( v31 < (int)v67[11] ); /*0x6b99ac*/
        v29 = (int)v67[20]; /*0x6b99ae*/
        v24 = (int *)v67[8]; /*0x6b99b2*/
        v27 = (int)v67[3]; /*0x6b99b6*/
      }
      v30 += v29; /*0x6b99be*/
      v67[0] = (char *)v67[0] + v27; /*0x6b99c2*/
      --v67[7]; /*0x6b99cb*/
    }
    while ( v67[7] ); /*0x6b99cf*/
  }
  if ( a5 == 1 ) /*0x6b99d9*/
  {
    qmemcpy(&v68[1], v8 + 10, 0x300u); /*0x6b99ea*/
    v24 = (int *)v67[8]; /*0x6b99ec*/
  }
  v33 = *v24; /*0x6b99f0*/
  v68[0] = v24; /*0x6b99f4*/
  (*(void (__thiscall **)(int *))(v33 + 96))(v24); /*0x6b99fb*/
  __3_YAXPAX_Z(v8); /*0x6b99ff*/
  __3_YAXPAX_Z((void *)v67[2]); /*0x6b9a09*/
  String::Assign((String *)&v67[1], a2); /*0x6b9a1d*/
  String::ToLower((String *)&v67[1]); /*0x6b9a26*/
  v34 = *(_DWORD *)(this + 4); /*0x6b9a2b*/
  v35 = 0; /*0x6b9a2e*/
  v67[21] = 0; /*0x6b9a32*/
  if ( v34 ) /*0x6b9a36*/
  {
    v36 = *(_DWORD *)(*(_DWORD *)this /*0x6b9a53*/
                    + 4
                    * ((*(int (__thiscall **)(const void **))(this + 24))(&v67[1]) & ((1 << *(_DWORD *)(this + 12)) - 1)));
    if ( v36 ) /*0x6b9a58*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v36, (const char **)&v67[1]) ) /*0x6b9a6c*/
      {
        v36 = *(_DWORD *)(v36 + 776); /*0x6b9a6e*/
        if ( !v36 ) /*0x6b9a76*/
          goto LABEL_40; /*0x6b9a76*/
      }
      v37 = (const void *)(v36 + 4); /*0x6b9a85*/
      if ( v37 ) /*0x6b9a8a*/
        qmemcpy(&v67[21], v37, 0x304u); /*0x6b9a95*/
      v38 = *(_DWORD *)(this + 4); /*0x6b9a97*/
      if ( !v38 ) /*0x6b9a9e*/
        goto LABEL_38; /*0x6b9a9e*/
      v39 = *(const void **)(this + 8); /*0x6b9aa4*/
      v40 = v38 - 1; /*0x6b9aa7*/
      *(_QWORD *)&v67[3] = v40; /*0x6b9aa8*/
      v67[3] = v39; /*0x6b9ab4*/
      *(float *)&v67[7] = (double)v40 / (double)(int)v39; /*0x6b9ac4*/
      v41 = (*(int (__thiscall **)(const void **))(this + 24))(&v67[1]) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6b9ad6*/
      v42 = *(_DWORD *)(*(_DWORD *)this + 4 * v41); /*0x6b9adb*/
      if ( !v42 ) /*0x6b9ae0*/
        goto LABEL_38; /*0x6b9ae0*/
      if ( (unsigned __int8)String::Compare((String *)v42, (const char **)&v67[1]) ) /*0x6b9aed*/
      {
        v43 = *(_DWORD **)(*(_DWORD *)this + 4 * v41); /*0x6b9af9*/
        v44 = v43[194]; /*0x6b9afe*/
        if ( v43 ) /*0x6b9b04*/
        {
          DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this + 4 * v41)); /*0x6b9b08*/
          __3_YAXPAX_Z(v43); /*0x6b9b0e*/
        }
        v45 = *(float *)&v67[7]; /*0x6b9b19*/
        *(_DWORD *)(*(_DWORD *)this + 4 * v41) = v44; /*0x6b9b1d*/
        v46 = v45 < *(double *)(this + 32); /*0x6b9b23*/
        v47 = v45 == *(double *)(this + 32); /*0x6b9b23*/
        --*(_DWORD *)(this + 4); /*0x6b9b27*/
        if ( !v46 && !v47 ) /*0x6b9b2c*/
          goto LABEL_38; /*0x6b9b2f*/
      }
      else
      {
        v48 = *(_DWORD *)(v42 + 776); /*0x6b9b33*/
        if ( v48 ) /*0x6b9b3b*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v48, (const char **)&v67[1]) ) /*0x6b9b4b*/
          {
            v42 = v48; /*0x6b9b4d*/
            v48 = *(_DWORD *)(v48 + 776); /*0x6b9b4f*/
            if ( !v48 ) /*0x6b9b57*/
              goto LABEL_36; /*0x6b9b57*/
          }
          *(_DWORD *)(v42 + 776) = *(_DWORD *)(v48 + 776); /*0x6b9b61*/
          --*(_DWORD *)(this + 4); /*0x6b9b6d*/
          DeleteAndZero((ObjectClass *)v48); /*0x6b9b74*/
          __3_YAXPAX_Z((void *)v48); /*0x6b9b7a*/
        }
LABEL_36:
        if ( *(float *)&v67[7] > *(double *)(this + 32) ) /*0x6b9b8e*/
          goto LABEL_38; /*0x6b9b8e*/
      }
      HashTable::RebuildEx((HashTable *)this); /*0x6b9b92*/
LABEL_38:
      v35 = 0; /*0x6b9b97*/
      if ( v67[21] ) /*0x6b9b9f*/
        (**(void (__thiscall ***)(const void *, int))v67[21])(v67[21], 1); /*0x6b9ba5*/
    }
  }
LABEL_40:
  v49 = (String *)__2_YAPAXI_Z(0x30Cu); /*0x6b9ba7*/
  v50 = v49; /*0x6b9bb1*/
  if ( v49 ) /*0x6b9bb8*/
  {
    unknown_libname_73(v49); /*0x6b9bbc*/
    *(_DWORD *)&v50->m_3[1] = 0; /*0x6b9bc1*/
    v35 = v50; /*0x6b9bc4*/
  }
  String::Reassign(v35, (const char **)&v67[1]); /*0x6b9bcd*/
  qmemcpy(&v35->m_3[1], v68, 0x304u); /*0x6b9be1*/
  *(_DWORD *)v35[97].__pad_0 = 0; /*0x6b9be9*/
  v51 = (String **)(*(_DWORD *)this /*0x6b9c02*/
                  + 4
                  * ((*(int (__thiscall **)(const void **))(this + 24))(&v67[1]) & ((1 << *(_DWORD *)(this + 12)) - 1)));
  v52 = *v51; /*0x6b9c05*/
  *v51 = v35; /*0x6b9c07*/
  if ( v52 ) /*0x6b9c0b*/
    *(_DWORD *)v35[97].__pad_0 = v52; /*0x6b9c0d*/
  v53 = *(_DWORD *)(this + 8); /*0x6b9c16*/
  v54 = *(_DWORD *)(this + 4) + 1; /*0x6b9c19*/
  *(_QWORD *)&v67[3] = (unsigned int)v54; /*0x6b9c1e*/
  *(_DWORD *)(this + 4) = v54; /*0x6b9c22*/
  v55 = (double)*(__int64 *)&v67[3]; /*0x6b9c25*/
  v67[3] = (const void *)v53; /*0x6b9c29*/
  v67[4] = 0; /*0x6b9c2d*/
  if ( v55 / (double)v53 >= *(double *)(this + 40) && *(_BYTE *)(this + 20) != 1 ) /*0x6b9c47*/
  {
    v56 = *(int **)this; /*0x6b9c50*/
    v57 = *(_DWORD *)(this + 12) + 1; /*0x6b9c56*/
    v67[3] = *(const void **)this; /*0x6b9c57*/
    *(_DWORD *)(this + 8) = 2 * v53; /*0x6b9c5b*/
    *(_DWORD *)(this + 12) = v57; /*0x6b9c65*/
    v58 = (void *)__2_YAPAXI_Z(8 * v53); /*0x6b9c71*/
    v59 = 4 * *(_DWORD *)(this + 8); /*0x6b9c76*/
    *(_DWORD *)this = v58; /*0x6b9c7d*/
    memset(v58, 0, v59); /*0x6b9c83*/
    if ( v53 > 0 ) /*0x6b9c8e*/
    {
      v60 = v56; /*0x6b9c90*/
      v61 = v53; /*0x6b9c92*/
      do /*0x6b9ccd*/
      {
        v62 = *v60; /*0x6b9c94*/
        if ( *v60 ) /*0x6b9c94*/
        {
          do /*0x6b9cc7*/
          {
            v63 = (*(int (__thiscall **)(int))(this + 24))(v62) & ((1 << *(_DWORD *)(this + 12)) - 1); /*0x6b9caa*/
            v64 = *(_DWORD *)(*(_DWORD *)this + 4 * v63); /*0x6b9caf*/
            *(_DWORD *)(*(_DWORD *)this + 4 * v63) = v62; /*0x6b9cb5*/
            v65 = *(_DWORD *)(v62 + 776); /*0x6b9cb7*/
            *(_DWORD *)(v62 + 776) = v64; /*0x6b9cbd*/
            v62 = v65; /*0x6b9cc3*/
          }
          while ( v65 ); /*0x6b9cc7*/
        }
        ++v60; /*0x6b9cc9*/
        --v61; /*0x6b9ccc*/
      }
      while ( v61 ); /*0x6b9ccd*/
      v56 = (int *)v67[3]; /*0x6b9ccf*/
    }
    __3_YAXPAX_Z(v56); /*0x6b9cd4*/
  }
  DeleteAndZero((ObjectClass *)&v67[1]); /*0x6b9ce0*/
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
        LOBYTE(v8) = v14[1] >> g_BitMask_Red; /*0x6b9dc8*/
        LOBYTE(v5) = *(v14 - 1); /*0x6b9dd0*/
        v14 += 3; /*0x6b9dd3*/
        v13 = (_DWORD *)((char *)v13 + 2); /*0x6b9dd6*/
        LOWORD(v8) = (unsigned __int8)v8; /*0x6b9dd9*/
        LOWORD(v5) = (unsigned __int8)((unsigned __int8)v5 >> g_BitShift_Green_0); /*0x6b9ded*/
        v16 = v5 << g_BitShift_Red; /*0x6b9df1*/
        v17 = v16 | (v8 << g_BitShift_Blue); /*0x6b9df9*/
        LOWORD(v16) = (unsigned __int8)(*(v14 - 3) >> g_BitMask_Blue); /*0x6b9e06*/
        v5 = v16 << g_BitMask_Green; /*0x6b9e0a*/
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
    v55[0] = &CCFileClass::`vftable'; /*0x6ba0e2*/
    v57 = 0; /*0x6ba0ea*/
    Vector::Clear((int)v56); /*0x6ba0f1*/
    v55[0] = &off_7E1668; /*0x6ba0fa*/
    BufferIOFileClass::Dtor(v55); /*0x6ba102*/
    return 1; /*0x6ba10a*/
  }
  else
  {
    v55[0] = &CCFileClass::`vftable'; /*0x6b9d68*/
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
int __thiscall HashTable::Find(HashTable *this, const char *a2, void *a3)
{
  int v4; // esi
  const void *v6; // esi
  int v7; // esi

  String::Assign((String *)&a2, a2); /*0x6ba14c*/
  if ( (byte_B0B930 & 1) == 0 ) /*0x6ba158*/
  {
    dword_B0B948 = 0; /*0x6ba164*/
    byte_B0B930 |= 1u; /*0x6ba16e*/
    atexit(nullsub_39); /*0x6ba174*/
  }
  dword_B0B948 = 0; /*0x6ba17c*/
  if ( this->HashTable_field_0x04 /*0x6ba1a8*/
    && (v4 = *(_DWORD *)(*(_DWORD *)this->__pad_0
                       + 4
                       * (((int (__thiscall *)(const char **))this->HashTable_field_0x18)(&a2)
                        & ((1 << this->HashTable_field_0x0C) - 1)))) != 0 )
  {
    while ( !(unsigned __int8)String::Compare((String *)v4, &a2) ) /*0x6ba1b8*/
    {
      v4 = *(_DWORD *)(v4 + 776); /*0x6ba1ba*/
      if ( !v4 ) /*0x6ba1c2*/
        goto LABEL_7; /*0x6ba1c2*/
    }
    v6 = (const void *)(v4 + 4); /*0x6ba1d7*/
    if ( v6 ) /*0x6ba1dd*/
      qmemcpy(&dword_B0B948, v6, 0x304u); /*0x6ba1e9*/
    if ( a3 ) /*0x6ba1f1*/
      qmemcpy(a3, &unk_B0B94C, 0x300u); /*0x6ba1fd*/
    v7 = dword_B0B948; /*0x6ba1ff*/
    DeleteAndZero((ObjectClass *)&a2); /*0x6ba209*/
    return v7; /*0x6ba20e*/
  }
  else
  {
LABEL_7:
    DeleteAndZero((ObjectClass *)&a2); /*0x6ba1c4*/
    return 0; /*0x6ba1cd*/
  }
}



// ==== 0x006BA220  nullsub_39  this=-  sig=ida-proto ====
void __cdecl nullsub_39()
{
  ; /*0x6ba220*/
}



// ==== 0x006BA230  HashTable::RemoveEntry  this=HashTable  sig=csp ====
void __thiscall HashTable::RemoveEntry(HashTable *this, const char *a2)
{
  int HashTable_field_0x04; // eax
  int v4; // esi
  const void *v5; // esi
  int v6; // eax
  int HashTable_field_0x08; // edx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // ebp
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  int v15; // esi
  _BYTE v16[784]; // [esp+Ch] [ebp-310h] BYREF

  String::Assign((String *)v16, a2); /*0x6ba247*/
  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6ba24c*/
  *(_DWORD *)&v16[12] = 0; /*0x6ba253*/
  if ( !HashTable_field_0x04 ) /*0x6ba257*/
    goto LABEL_24; /*0x6ba257*/
  v4 = *(_DWORD *)(*(_DWORD *)this->__pad_0 /*0x6ba273*/
                 + 4
                 * (((int (__thiscall *)(_BYTE *))this->HashTable_field_0x18)(v16)
                  & ((1 << this->HashTable_field_0x0C) - 1)));
  if ( !v4 ) /*0x6ba278*/
    goto LABEL_24; /*0x6ba278*/
  while ( !(unsigned __int8)String::Compare((String *)v4, (const char **)v16) ) /*0x6ba28c*/
  {
    v4 = *(_DWORD *)(v4 + 776); /*0x6ba28e*/
    if ( !v4 ) /*0x6ba296*/
      goto LABEL_24; /*0x6ba296*/
  }
  v5 = (const void *)(v4 + 4); /*0x6ba2a5*/
  if ( v5 ) /*0x6ba2ab*/
    qmemcpy(&v16[12], v5, 0x304u); /*0x6ba2b6*/
  v6 = this->HashTable_field_0x04; /*0x6ba2b8*/
  if ( v6 ) /*0x6ba2bd*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6ba2c3*/
    *(_QWORD *)&v16[4] = (unsigned int)(v6 - 1); /*0x6ba2c7*/
    *(float *)&v16[4] = (double)*(__int64 *)&v16[4] / (double)HashTable_field_0x08; /*0x6ba2e3*/
    v8 = ((int (__thiscall *)(_BYTE *))this->HashTable_field_0x18)(v16) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6ba2f5*/
    v9 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v8); /*0x6ba2f9*/
    if ( v9 ) /*0x6ba2fe*/
    {
      if ( (unsigned __int8)String::Compare((String *)v9, (const char **)v16) ) /*0x6ba30b*/
      {
        v10 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v8); /*0x6ba316*/
        v11 = v10[194]; /*0x6ba31b*/
        if ( v10 ) /*0x6ba321*/
        {
          DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v8)); /*0x6ba325*/
          __3_YAXPAX_Z(v10); /*0x6ba32b*/
        }
        v12 = *(float *)&v16[4]; /*0x6ba335*/
        *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v8) = v11; /*0x6ba339*/
        v13 = v12 < *(double *)&this->HashTable_field_0x20; /*0x6ba33f*/
        v14 = v12 == *(double *)&this->HashTable_field_0x20; /*0x6ba33f*/
        --this->HashTable_field_0x04; /*0x6ba343*/
        if ( !v13 && !v14 ) /*0x6ba348*/
          goto LABEL_22; /*0x6ba34b*/
      }
      else
      {
        v15 = *(_DWORD *)(v9 + 776); /*0x6ba34f*/
        if ( v15 ) /*0x6ba357*/
        {
          while ( !(unsigned __int8)String::Compare((String *)v15, (const char **)v16) ) /*0x6ba367*/
          {
            v9 = v15; /*0x6ba369*/
            v15 = *(_DWORD *)(v15 + 776); /*0x6ba36b*/
            if ( !v15 ) /*0x6ba373*/
              goto LABEL_20; /*0x6ba373*/
          }
          *(_DWORD *)(v9 + 776) = *(_DWORD *)(v15 + 776); /*0x6ba37d*/
          --this->HashTable_field_0x04; /*0x6ba389*/
          DeleteAndZero((ObjectClass *)v15); /*0x6ba390*/
          __3_YAXPAX_Z((void *)v15); /*0x6ba396*/
        }
LABEL_20:
        if ( *(float *)&v16[4] > *(double *)&this->HashTable_field_0x20 ) /*0x6ba3aa*/
          goto LABEL_22; /*0x6ba3aa*/
      }
      HashTable::RebuildEx(this); /*0x6ba3ae*/
    }
  }
LABEL_22:
  if ( *(_DWORD *)&v16[12] ) /*0x6ba3ba*/
    (***(void (__thiscall ****)(_DWORD, int))&v16[12])(*(_DWORD *)&v16[12], 1); /*0x6ba3c0*/
LABEL_24:
  DeleteAndZero((ObjectClass *)v16); /*0x6ba3c2*/
}



// ==== 0x006BA3E0  Surface::TileBlit  this=Surface  sig=csp ====
int __stdcall Surface::TileBlit(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int result; // eax
  int v7; // edi
  int v8; // eax
  int v10; // esi
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
  _DWORD *v26; // [esp+64h] [ebp+4h]
  int v27; // [esp+74h] [ebp+14h]

  v5 = a2; /*0x6ba3e4*/
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba3f3*/
  v20 = result; /*0x6ba3f8*/
  if ( result )
  {
    v7 = a3; /*0x6ba408*/
    v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba41b*/
    if ( v21 )
    {
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2) / 2; /*0x6ba442*/
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3) / 2; /*0x6ba452*/
      v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 120))(a3, v24); /*0x6ba45d*/
      v22 = *(_DWORD *)(v8 + 8); /*0x6ba470*/
      v23 = *(_DWORD *)(v8 + 12); /*0x6ba480*/
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 120))(a2, v25); /*0x6ba484*/
      v10 = a1[2]; /*0x6ba48f*/
      v11 = a1[3]; /*0x6ba492*/
      v19 = (v22 - v10) / 2 <= 0 ? 0 : (v22 - v10) / 2;
      v12 = 0; /*0x6ba4bf*/
      v16 = 0; /*0x6ba4c3*/
      if ( v11 > 0 )
      {
        v13 = a5 + ((v23 - v11) / 2 <= 0 ? 0 : (v23 - v11) / 2);
        v27 = v13; /*0x6ba4d3*/
        do /*0x6ba558*/
        {
          v26 = 0; /*0x6ba4d9*/
          if ( v10 > 0 ) /*0x6ba4ee*/
          {
            v14 = v19 + a4; /*0x6ba506*/
            v15 = v20 + 2 * (*a1 + v17 * (a1[1] + v12)); /*0x6ba50d*/
            do /*0x6ba537*/
            {
              v15 += 2; /*0x6ba512*/
              *(_WORD *)(v15 - 2) = *(_WORD *)(v21 + 2 * (v18 * (v13 % v23) + v14 % v22)); /*0x6ba528*/
              v10 = a1[2]; /*0x6ba52c*/
              ++v14; /*0x6ba530*/
              v26 = (_DWORD *)((char *)v26 + 1); /*0x6ba533*/
            }
            while ( (int)v26 < v10 ); /*0x6ba537*/
            v7 = a3; /*0x6ba539*/
            v12 = v16; /*0x6ba53d*/
            v5 = a2; /*0x6ba541*/
          }
          ++v12; /*0x6ba54c*/
          v13 = v27 + 1; /*0x6ba54d*/
          v16 = v12; /*0x6ba550*/
          ++v27; /*0x6ba554*/
        }
        while ( v12 < a1[3] ); /*0x6ba558*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7); /*0x6ba562*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x6ba569*/
      LOBYTE(result) = 1; /*0x6ba56f*/
    }
    else
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba425*/
      LOBYTE(result) = 0; /*0x6ba429*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x6ba3ff*/
  }
  return result; /*0x6ba3fe*/
}



// ==== 0x006BA580  Surface::BlitTransparent  this=Surface  sig=csp ====
int __stdcall Surface::BlitTransparent(int *a1, int a2, int a3, __int16 a4)
{
  int result; // eax
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
  int *v17; // [esp+28h] [ebp+4h]

  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba594*/
  v15 = result; /*0x6ba599*/
  if ( result ) /*0x6ba59d*/
  {
    v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba5bb*/
    if ( v5 ) /*0x6ba5bf*/
    {
      v6 = *a1; /*0x6ba5d8*/
      v7 = a1[1]; /*0x6ba5da*/
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 124))(a3); /*0x6ba5f2*/
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 128))(a3); /*0x6ba604*/
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2) / 2; /*0x6ba60e*/
      if ( v8 > 0 ) /*0x6ba612*/
      {
        v10 = v16; /*0x6ba617*/
        v17 = (int *)(2 * v9); /*0x6ba624*/
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
              if ( *v13 != a4 ) /*0x6ba641*/
                *v14 = *v13; /*0x6ba643*/
              ++v13; /*0x6ba646*/
              ++v14; /*0x6ba649*/
              --v12; /*0x6ba64c*/
            }
            while ( v12 ); /*0x6ba64d*/
            v10 = v16; /*0x6ba64f*/
          }
          v11 = (_WORD *)((char *)v11 + (_DWORD)v17); /*0x6ba657*/
          --v8; /*0x6ba659*/
        }
        while ( v8 ); /*0x6ba65a*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba662*/
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 96))(a3); /*0x6ba66b*/
      LOBYTE(result) = 1; /*0x6ba671*/
    }
    else
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba5c5*/
      LOBYTE(result) = 0; /*0x6ba5ca*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x6ba5a1*/
  }
  return result; /*0x6ba59f*/
}



// ==== 0x006BA680  sub_6BA680  this=-  sig=csp ====
char __stdcall sub_6BA680(int a1, int a2, int a3)
{
  return 0; /*0x6ba682*/
}



// ==== 0x006BA690  Surface::AlphaBlend  this=Surface  sig=csp ====
int __stdcall Surface::AlphaBlend(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
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
  int result; // eax
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
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba7c2*/
  v70 = result; /*0x6ba7c7*/
  if ( !result ) /*0x6ba7cd*/
  {
    LOBYTE(result) = 0; /*0x6ba7d2*/
    return result; /*0x6ba7db*/
  }
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
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba80f*/
      LOBYTE(result) = 0; /*0x6ba81e*/
      return result; /*0x6ba827*/
    }
  }
  v65 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, 0, 0); /*0x6ba87d*/
  if ( a5 ) /*0x6ba88a*/
  {
    v20 = g_BitShift_Green_0; /*0x6ba88c*/
    v21 = v77; /*0x6ba892*/
    v22 = a5 + 1; /*0x6ba899*/
    v23 = 256; /*0x6ba89a*/
    do /*0x6ba8ef*/
    {
      LOBYTE(v10) = *(_BYTE *)(v22 + 1) >> g_BitMask_Red; /*0x6ba8a8*/
      v22 += 3; /*0x6ba8b0*/
      ++v21; /*0x6ba8b3*/
      LOWORD(v12) = (unsigned __int8)v10; /*0x6ba8b6*/
      LOWORD(v10) = (unsigned __int8)(*(_BYTE *)(v22 - 4) >> v20); /*0x6ba8c9*/
      v24 = v10 << g_BitShift_Red; /*0x6ba8cd*/
      v25 = v24 | (v12 << g_BitShift_Blue); /*0x6ba8d5*/
      LOWORD(v24) = (unsigned __int8)(*(_BYTE *)(v22 - 3) >> g_BitMask_Blue); /*0x6ba8e2*/
      v10 = v24 << g_BitMask_Green; /*0x6ba8e6*/
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
              v45 = g_ScreenSaverState /*0x6bab5d*/
                  & ((v44 * (unsigned __int16)(g_ScreenSaverState & v42)
                    + (unsigned __int8)*v39 * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v43)) >> 8);
              g_GameScreenFlags = (unsigned __int8)*v39; /*0x6bab64*/
              g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6bab6e*/
              v46 = v44 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v42) /*0x6bab79*/
                  + g_GameScreenFlags * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v43);
              v47 = v44 * (unsigned __int16)(g_CreditsScreenState & v42); /*0x6bab8a*/
              v39 = v63; /*0x6bab97*/
              v40 = v64 - v65; /*0x6bab9b*/
              v48 = v47 + g_GameScreenFlags * (unsigned __int16)(g_CreditsScreenState & v43); /*0x6bab9f*/
              v41 = v61; /*0x6baba1*/
              v49 = HIWORD(g_ScreenSaverState) & (v46 >> 8) | v45; /*0x6baba5*/
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
            v35 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_ScreenSaverState) /*0x6baa4b*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(v34 & g_ScreenSaverState)) >> 8;
            v36 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & HIWORD(g_ScreenSaverState)) /*0x6baa57*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v34)) >> 8;
            v10 = v56; /*0x6baa6e*/
            v37 = (255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_CreditsScreenState) /*0x6baa75*/
                + g_GameScreenFlags * (unsigned __int16)(v34 & g_CreditsScreenState);
            v32 = v58; /*0x6baa77*/
            *v58 = (v37 >> 8) | HIWORD(g_ScreenSaverState) & v36 | g_ScreenSaverState & v35; /*0x6baa80*/
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
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 96))(a4); /*0x6bac1f*/
  LOBYTE(result) = 1; /*0x6bac25*/
  return result; /*0x6ba7cf*/
}



// ==== 0x006BAC40  HashTable::RemoveHashTableEntry  this=HashTable  sig=csp ====
char __thiscall HashTable::RemoveHashTableEntry(HashTable *this, const char **a2, void *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
  int *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // esi
  int HashTable_field_0x0C; // edi
  int *v27; // ebx
  void *v28; // edi
  unsigned int v29; // edx
  int *v30; // edi
  unsigned int v31; // ebx
  int v32; // esi
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char v38; // [esp+20h] [ebp+4h]
  int *v39; // [esp+24h] [ebp+8h]
  int *v40; // [esp+24h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6bac4b*/
  if ( !HashTable_field_0x04 ) /*0x6bac50*/
    return 0; /*0x6bac55*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x6bac80*/
  v7 = ((int (__thiscall *)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6bac95*/
  v8 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x6bac97*/
  v36 = v8; /*0x6bac9c*/
  if ( !v8 ) /*0x6baca0*/
    return 0; /*0x6baca5*/
  if ( (unsigned __int8)String::Compare((String *)v8, a2) ) /*0x6bacb1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x304u); /*0x6bacca*/
    v9 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x6baccf*/
    v10 = v9[194]; /*0x6bacd4*/
    if ( v9 ) /*0x6bacda*/
    {
      DeleteAndZero(*(ObjectClass **)(*(_DWORD *)this->__pad_0 + 4 * v7)); /*0x6bacde*/
      __3_YAXPAX_Z(v9); /*0x6bace4*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x6bacf3*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x6bacf9*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x6bacf9*/
    --this->HashTable_field_0x04; /*0x6bacfd*/
    if ( v11 || v12 ) /*0x6bad02*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6bad0b*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6bad1d*/
      {
        v14 = *(int **)this->__pad_0; /*0x6bad26*/
        v39 = *(int **)this->__pad_0; /*0x6bad2b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x6bad31*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x6bad32*/
        this->HashTable_field_0x0C = v15; /*0x6bad3c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6bad48*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6bad4d*/
        *(_DWORD *)this->__pad_0 = v16; /*0x6bad54*/
        memset(v16, 0, v17); /*0x6bad5a*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x6bad65*/
        {
          v18 = v14; /*0x6bad67*/
          v19 = HashTable_field_0x08; /*0x6bad69*/
          do /*0x6bada4*/
          {
            v20 = *v18; /*0x6bad6b*/
            if ( *v18 ) /*0x6bad6b*/
            {
              do /*0x6bad9e*/
              {
                v21 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v20) /*0x6bad81*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21); /*0x6bad86*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v21) = v20; /*0x6bad8c*/
                v23 = *(_DWORD *)(v20 + 776); /*0x6bad8e*/
                *(_DWORD *)(v20 + 776) = v22; /*0x6bad94*/
                v20 = v23; /*0x6bad9a*/
              }
              while ( v23 ); /*0x6bad9e*/
            }
            ++v18; /*0x6bada0*/
            --v19; /*0x6bada3*/
          }
          while ( v19 ); /*0x6bada4*/
          v14 = v39; /*0x6bada6*/
        }
        __3_YAXPAX_Z(v14); /*0x6badab*/
      }
    }
    return 1; /*0x6badb6*/
  }
  else
  {
    v24 = *(_DWORD *)(v8 + 776); /*0x6badbf*/
    v38 = 0; /*0x6badc5*/
    if ( v24 ) /*0x6badcc*/
    {
      while ( !(unsigned __int8)String::Compare((String *)v24, a2) ) /*0x6badd8*/
      {
        v36 = v24; /*0x6badda*/
        v24 = *(_DWORD *)(v24 + 776); /*0x6badde*/
        if ( !v24 ) /*0x6bade6*/
          goto LABEL_24; /*0x6bade6*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x304u); /*0x6badfa*/
      *(_DWORD *)(v36 + 776) = *(_DWORD *)(v24 + 776); /*0x6bae02*/
      --this->HashTable_field_0x04; /*0x6bae0e*/
      DeleteAndZero((ObjectClass *)v24); /*0x6bae15*/
      __3_YAXPAX_Z((void *)v24); /*0x6bae1b*/
      v38 = 1; /*0x6bae23*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x6bae34*/
    {
      v25 = this->HashTable_field_0x08; /*0x6bae3a*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6bae4c*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6bae52*/
        v27 = *(int **)this->__pad_0; /*0x6bae55*/
        v40 = *(int **)this->__pad_0; /*0x6bae5a*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x6bae60*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6bae68*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x6bae73*/
        v29 = 4 * this->HashTable_field_0x08; /*0x6bae78*/
        *(_DWORD *)this->__pad_0 = v28; /*0x6bae7f*/
        memset(v28, 0, v29); /*0x6bae85*/
        if ( (int)v25 > 0 ) /*0x6bae90*/
        {
          v30 = v27; /*0x6bae92*/
          v31 = v25; /*0x6bae94*/
          do /*0x6baecf*/
          {
            v32 = *v30; /*0x6bae96*/
            if ( *v30 ) /*0x6bae96*/
            {
              do /*0x6baec9*/
              {
                v33 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v32) /*0x6baeac*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33); /*0x6baeb1*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v33) = v32; /*0x6baeb7*/
                v35 = *(_DWORD *)(v32 + 776); /*0x6baeb9*/
                *(_DWORD *)(v32 + 776) = v34; /*0x6baebf*/
                v32 = v35; /*0x6baec5*/
              }
              while ( v35 ); /*0x6baec9*/
            }
            ++v30; /*0x6baecb*/
            --v31; /*0x6baece*/
          }
          while ( v31 ); /*0x6baecf*/
          v27 = v40; /*0x6baed1*/
        }
        __3_YAXPAX_Z(v27); /*0x6baed6*/
      }
    }
    return v38; /*0x6baede*/
  }
}



// ==== 0x006BAEF0  HashTable::RebuildEx  this=HashTable  sig=csp ====
void __thiscall HashTable::RebuildEx(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6baef5*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6baf07*/
  {
    v3 = *(int **)this->__pad_0; /*0x6baf10*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6baf13*/
    v13 = *(int **)this->__pad_0; /*0x6baf16*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x6baf1c*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6baf24*/
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6baf2f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6baf34*/
    *(_DWORD *)this->__pad_0 = v5; /*0x6baf3b*/
    memset(v5, 0, v6); /*0x6baf40*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x6baf4b*/
    {
      v7 = v3; /*0x6baf4d*/
      v8 = HashTable_field_0x08; /*0x6baf4f*/
      do /*0x6baf89*/
      {
        v9 = *v7; /*0x6baf51*/
        if ( *v7 ) /*0x6baf51*/
        {
          do /*0x6baf83*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6baf67*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x6baf6b*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x6baf71*/
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
void __thiscall Render_Load_6BAFA0(ObjectClass *this)
{
  int vtable2; // esi
  _DWORD *vtable0; // ebp
  char *v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( LOBYTE(this->?) != 1 ) /*0x6bafa8*/
  {
    vtable2 = (int)this->?; /*0x6bafb0*/
    vtable0 = this->AbstractClass; /*0x6bafb3*/
    v4 = (char *)this->? + 1; /*0x6bafbc*/
    this->? = (void *)(2 * vtable2); /*0x6bafbd*/
    v13 = vtable0; /*0x6bafc0*/
    this->? = v4; /*0x6bafc8*/
    v5 = (void *)__2_YAPAXI_Z(8 * vtable2); /*0x6bafd3*/
    v6 = 4 * (int)this->?; /*0x6bafd8*/
    this->AbstractClass = v5; /*0x6bafdf*/
    memset(v5, 0, v6); /*0x6bafe4*/
    if ( vtable2 > 0 ) /*0x6bafef*/
    {
      v7 = vtable0; /*0x6baff1*/
      v8 = vtable2; /*0x6baff3*/
      do /*0x6bb02d*/
      {
        v9 = *v7; /*0x6baff5*/
        if ( *v7 ) /*0x6baff5*/
        {
          do /*0x6bb027*/
          {
            v10 = ((int (__thiscall *)(int))this->?)(v9) & ((1 << (int)this->?) - 1); /*0x6bb00b*/
            v11 = *((_DWORD *)this->AbstractClass + v10); /*0x6bb00f*/
            *((_DWORD *)this->AbstractClass + v10) = v9; /*0x6bb015*/
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
      vtable0 = v13; /*0x6bb02f*/
    }
    __3_YAXPAX_Z(vtable0); /*0x6bb034*/
  }
}



// ==== 0x006BB050  sub_6BB050  this=-  sig=ida-proto ====
int sub_6BB050()
{
  dword_B0BC58 = 0; /*0x6bb052*/
  dword_B0BC5C = 0; /*0x6bb057*/
  dword_B0BC60 = 0; /*0x6bb05c*/
  dword_B0BC64 = 0; /*0x6bb061*/
  return 0; /*0x6bb066*/
}



// ==== 0x006BB070  sub_6BB070  this=-  sig=ida-proto ====
void sub_6BB070()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6bb07c*/
  dbl_B0BC70 = Math::Sqrt(v0 + v0); /*0x6bb08e*/
}



// ==== 0x006BB0A0  sub_6BB0A0  this=-  sig=ida-proto ====
void sub_6BB0A0()
{
  dbl_B0BCD8 = dbl_B0BC70 / 60.0; /*0x6bb0ac*/
}



// ==== 0x006BB0C0  sub_6BB0C0  this=-  sig=ida-proto ====
void sub_6BB0C0()
{
  dbl_B0BCC0 = 1.0 / dbl_B0BCD8; /*0x6bb0cc*/
}



// ==== 0x006BB0E0  sub_6BB0E0  this=-  sig=ida-proto ====
void sub_6BB0E0()
{
  dbl_B0BCB8 = 0.0174532925199433 * 45.0; /*0x6bb0ec*/
}



// ==== 0x006BB100  sub_6BB100  this=-  sig=ida-proto ====
void sub_6BB100()
{
  dbl_B0BC78 = 0.0174532925199433 * 60.0; /*0x6bb10c*/
}



// ==== 0x006BB120  sub_6BB120  this=-  sig=ida-proto ====
void sub_6BB120()
{
  dbl_B0BC50 = 0.0174532925199433 * 90.0; /*0x6bb12c*/
}



// ==== 0x006BB140  sub_6BB140  this=-  sig=ida-proto ====
__int64 sub_6BB140()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_B0BC50 - dbl_B0BC78); /*0x6bb152*/
  result = Math::RoundToInt(v0 * dbl_B0BC70 * 0.5); /*0x6bb166*/
  dword_B0BCE0 = result; /*0x6bb16b*/
  return result; /*0x6bb170*/
}



// ==== 0x006BB180  sub_6BB180  this=-  sig=ida-proto ====
void sub_6BB180()
{
  dbl_B0BC80 = Math::ArcTan((double)dword_B0BCE0 * 0.00390625); /*0x6bb197*/
}



// ==== 0x006BB1B0  sub_6BB1B0  this=-  sig=ida-proto ====
void sub_6BB1B0()
{
  dbl_B0BCB0 = Math::ArcTan((double)(2 * dword_B0BCE0) / dbl_B0BC70); /*0x6bb1d2*/
}



// ==== 0x006BB1E0  sub_6BB1E0  this=-  sig=ida-proto ====
__int64 sub_6BB1E0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0BCE0) + 0.5); /*0x6bb1fb*/
  dword_B0BCD4 = result; /*0x6bb200*/
  return result; /*0x6bb206*/
}



// ==== 0x006BB210  sub_6BB210  this=-  sig=ida-proto ====
int sub_6BB210()
{
  word_B0BC68 = 0; /*0x6bb212*/
  word_B0BC6A = 0; /*0x6bb218*/
  return 0; /*0x6bb21e*/
}



// ==== 0x006BB220  sub_6BB220  this=-  sig=ida-proto ====
int sub_6BB220()
{
  dword_B0BCA0 = 0; /*0x6bb222*/
  dword_B0BCA4 = 0; /*0x6bb227*/
  dword_B0BCA8 = 0; /*0x6bb22c*/
  return 0; /*0x6bb231*/
}



// ==== 0x006BB240  sub_6BB240  this=-  sig=ida-proto ====
int sub_6BB240()
{
  dword_B0BCD0 = 0; /*0x6bb245*/
  dword_B0BCC8 = 128; /*0x6bb24f*/
  dword_B0BCCC = 128; /*0x6bb254*/
  return 128; /*0x6bb259*/
}



// ==== 0x006BB260  sub_6BB260  this=-  sig=ida-proto ====
int sub_6BB260()
{
  dword_B0BC8C = 0; /*0x6bb267*/
  dword_B0BC90 = 0; /*0x6bb26c*/
  byte_B0BC94 = 1; /*0x6bb271*/
  byte_B0BC95 = 0; /*0x6bb278*/
  g_AnimationManager = (int)&DynamicVectorClass<unsigned long>::`vftable'; /*0x6bb27d*/
  dword_B0BC9C = 10; /*0x6bb287*/
  dword_B0BC98 = 0; /*0x6bb291*/
  return atexit(sub_6BB2A0); /*0x6bb29c*/
}



// ==== 0x006BB2A0  sub_6BB2A0  this=-  sig=ida-proto ====
void __cdecl sub_6BB2A0()
{
  g_AnimationManager = (int)&VectorClass<unsigned long>::`vftable'; /*0x6bb2a8*/
  if ( dword_B0BC8C && byte_B0BC95 ) /*0x6bb2bc*/
  {
    __3_YAXPAX_Z(dword_B0BC8C); /*0x6bb2bf*/
    dword_B0BC8C = 0; /*0x6bb2c7*/
  }
  byte_B0BC95 = 0; /*0x6bb2cd*/
  dword_B0BC90 = 0; /*0x6bb2d3*/
}



// ==== 0x006BB2E0  WriteRegistryKeyCOM  this=-  sig=csp ====
int __fastcall WriteRegistryKeyCOM(LPCSTR lpString2, LPCSTR a2, LPCSTR lpString)
{
  char v4; // bl
  int result; // eax
  int v6; // eax
  HKEY phkResult; // [esp+8h] [ebp-108h] BYREF
  CHAR String1[260]; // [esp+Ch] [ebp-104h] BYREF

  v4 = 0; /*0x6bb2f0*/
  lstrcpyA(String1, lpString2); /*0x6bb2f2*/
  if ( a2 ) /*0x6bb2fa*/
  {
    lstrcatA(String1, asc_815E74); /*0x6bb30d*/
    lstrcatA(String1, a2); /*0x6bb315*/
  }
  result = RegCreateKeyExA(HKEY_CLASSES_ROOT, String1, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0); /*0x6bb336*/
  if ( !result ) /*0x6bb33e*/
  {
    if ( !lpString || (v6 = lstrlenA(lpString), !RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)lpString, v6 + 1)) ) /*0x6bb360*/
      v4 = 1; /*0x6bb36a*/
    result = RegCloseKey(phkResult); /*0x6bb371*/
  }
  LOBYTE(result) = v4; /*0x6bb377*/
  return result; /*0x6bb379*/
}



// ==== 0x006BB390  ObjectClass::RegisterClassesCOM  this=ObjectClass  sig=csp ====
int RegisterClassesCOM(ObjectClass *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _BYTE v7[16]; // [esp+0h] [ebp-2F0h] BYREF
  HKEY phkResult; // [esp+10h] [ebp-2E0h] BYREF
  ITypeLib *pptlib; // [esp+14h] [ebp-2DCh] BYREF
  CHAR MultiByteStr[40]; // [esp+18h] [ebp-2D8h] BYREF
  CHAR String1[48]; // [esp+40h] [ebp-2B0h] BYREF
  CHAR SubKey[260]; // [esp+70h] [ebp-280h] BYREF
  CHAR String[40]; // [esp+174h] [ebp-17Ch] BYREF
  OLECHAR sz[40]; // [esp+19Ch] [ebp-154h] BYREF
  CHAR Filename[260]; // [esp+1ECh] [ebp-104h] BYREF

  GetModuleFileNameA(g_hInstance, Filename, 0x104u); /*0x6bb3ae*/
  StringFromGUID2(&rguid, sz, 39); /*0x6bb3c9*/
  WideCharToMultiByte(0, 0, sz, -1, MultiByteStr, 39, 0, 0); /*0x6bb3ea*/
  StringFromGUID2(&stru_7E9510, sz, 39); /*0x6bb3fb*/
  WideCharToMultiByte(0, 0, sz, -1, String, 39, 0, 0); /*0x6bb419*/
  lstrcpyA(String1, aClsid); /*0x6bb42b*/
  lstrcatA(String1, MultiByteStr); /*0x6bb43d*/
  lstrcpyA(SubKey, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb449*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb472*/
  {
    if ( Data ) /*0x6bb486*/
    {
      v1 = lstrlenA((LPCSTR)Data); /*0x6bb48d*/
      RegSetValueExA(phkResult, 0, 0, 1u, Data, v1 + 1); /*0x6bb4a5*/
    }
    RegCloseKey(phkResult); /*0x6bb4ac*/
  }
  lstrcpyA(SubKey, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb4bc*/
  if ( g_INI_Key_CLSID ) /*0x6bb4c5*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb4d1*/
    lstrcatA(SubKey, g_INI_Key_CLSID); /*0x6bb4dd*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb500*/
  {
    if ( v7 != (_BYTE *)-24 ) /*0x6bb50c*/
    {
      v2 = lstrlenA(MultiByteStr); /*0x6bb513*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v2 + 1); /*0x6bb52b*/
    }
    RegCloseKey(phkResult); /*0x6bb532*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb542*/
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb562*/
  {
    if ( Data ) /*0x6bb570*/
    {
      v3 = lstrlenA((LPCSTR)Data); /*0x6bb577*/
      RegSetValueExA(phkResult, 0, 0, 1u, Data, v3 + 1); /*0x6bb58f*/
    }
    RegCloseKey(phkResult); /*0x6bb596*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb5a6*/
  if ( aCurver ) /*0x6bb5b0*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb5bc*/
    lstrcatA(SubKey, aCurver); /*0x6bb5c8*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb5eb*/
  {
    if ( g_Str_WW_TiberianSun_1 ) /*0x6bb5f9*/
    {
      v4 = lstrlenA((LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb600*/
      RegSetValueExA(phkResult, 0, 0, 1u, g_Str_WW_TiberianSun_1, v4 + 1); /*0x6bb618*/
    }
    RegCloseKey(phkResult); /*0x6bb61f*/
  }
  lstrcpyA(SubKey, g_Str_WW_TiberianSun); /*0x6bb62f*/
  if ( g_INI_Key_CLSID ) /*0x6bb639*/
  {
    lstrcatA(SubKey, asc_815E74); /*0x6bb645*/
    lstrcatA(SubKey, g_INI_Key_CLSID); /*0x6bb651*/
  }
  if ( !RegCreateKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0, 0, 0xF003Fu, 0, &phkResult, 0) ) /*0x6bb674*/
  {
    if ( v7 != (_BYTE *)-24 ) /*0x6bb680*/
    {
      v5 = lstrlenA(MultiByteStr); /*0x6bb687*/
      RegSetValueExA(phkResult, 0, 0, 1u, (const BYTE *)MultiByteStr, v5 + 1); /*0x6bb69f*/
    }
    RegCloseKey(phkResult); /*0x6bb6a6*/
  }
  WriteRegistryKeyCOM(String1, 0, (LPCSTR)Data); /*0x6bb6b7*/
  WriteRegistryKeyCOM(String1, aProgid, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb6ca*/
  WriteRegistryKeyCOM(String1, aVersionindepen, g_Str_WW_TiberianSun); /*0x6bb6dd*/
  WriteRegistryKeyCOM(String1, aNotinsertable, 0); /*0x6bb6ed*/
  WriteRegistryKeyCOM(String1, aInprocserver32, Filename); /*0x6bb703*/
  WriteRegistryKeyCOM(String1, aTypelib, String); /*0x6bb719*/
  pptlib = 0; /*0x6bb722*/
  LoadTypeLib(&szFile, &pptlib); /*0x6bb730*/
  if ( pptlib ) /*0x6bb740*/
    pptlib->lpVtbl->Release(pptlib); /*0x6bb745*/
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
  lstrcpyA(String1, aClsid); /*0x6bb7a6*/
  lstrcatA(String1, MultiByteStr); /*0x6bb7b6*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansunC); /*0x6bb7cc*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansunC_0); /*0x6bb7d8*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, g_Str_WW_TiberianSun); /*0x6bb7e4*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, aWwTiberiansun1_0); /*0x6bb7f0*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, (LPCSTR)g_Str_WW_TiberianSun_1); /*0x6bb7fc*/
  wsprintfA(SubKey, "%s\\%s", String1, aProgid); /*0x6bb81b*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb82a*/
  wsprintfA(SubKey, "%s\\%s", String1, aVersionindepen); /*0x6bb840*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb84f*/
  wsprintfA(SubKey, "%s\\%s", String1, aNotinsertable); /*0x6bb865*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb874*/
  wsprintfA(SubKey, "%s\\%s", String1, aInprocserver32); /*0x6bb88d*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb89c*/
  wsprintfA(SubKey, "%s\\%s", String1, aTypelib); /*0x6bb8b2*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, SubKey); /*0x6bb8c1*/
  RegDeleteKeyA(HKEY_CLASSES_ROOT, String1); /*0x6bb8cd*/
  return 0; /*0x6bb8d1*/
}



// ==== 0x006BB8E0  ObjectClass::WinMainSetup_Setup_6BB8E0  this=ObjectClass  sig=csp ====
unsigned __int8 __usercall WinMainSetup_Setup_6BB8E0@<al>(ObjectClass *this)
{
  unsigned __int8 result; // al
  DDraw *v2; // [esp+0h] [ebp-4h]

  result = g_DDraw_Force3D; /*0x6bb8e0*/
  if ( g_DDraw_Force3D ) /*0x6bb8ea*/
    result = DDraw::CleanupSurfaces(v2); /*0x6bb8ec*/
  if ( !byte_B0BCF5 ) /*0x6bb8f7*/
  {
    if ( g_DSurface_Hidden ) /*0x6bb905*/
    {
      (*(void (__thiscall **)(ObjectClass *, int))g_DSurface_Hidden->AbstractClass)(g_DSurface_Hidden, 1); /*0x6bb90b*/
      g_DSurface_Hidden = 0; /*0x6bb90d*/
    }
    if ( DSurface_Alternate ) /*0x6bb91b*/
    {
      (*(void (__thiscall **)(DSurface *, int))DSurface_Alternate->DSurface_field_0x0)(DSurface_Alternate, 1); /*0x6bb921*/
      DSurface_Alternate = 0; /*0x6bb923*/
    }
    if ( DSurface_Tile ) /*0x6bb931*/
    {
      (*(void (__thiscall **)(DSurface *, int))DSurface_Tile->DSurface_field_0x0)(DSurface_Tile, 1); /*0x6bb937*/
      DSurface_Tile = 0; /*0x6bb939*/
    }
    if ( DSurface_Sidebar ) /*0x6bb947*/
    {
      (*(void (__thiscall **)(DSurface *, int))DSurface_Sidebar->DSurface_field_0x0)(DSurface_Sidebar, 1); /*0x6bb94d*/
      DSurface_Sidebar = 0; /*0x6bb94f*/
    }
    if ( DSurface_Composite ) /*0x6bb95d*/
    {
      (**(void (__thiscall ***)(AudioStream *, int))DSurface_Composite->__pad_0)(DSurface_Composite, 1); /*0x6bb963*/
      DSurface_Composite = 0; /*0x6bb965*/
    }
    if ( g_DSurface_Primary ) /*0x6bb973*/
    {
      (*(void (__thiscall **)(DSurface *, int))g_DSurface_Primary->DSurface_field_0x0)(g_DSurface_Primary, 1); /*0x6bb979*/
      g_DSurface_Primary = 0; /*0x6bb97b*/
    }
    result = (unsigned __int8)sub_4A44F0((ObjectClass *)v2); /*0x6bb981*/
    byte_B0BCF5 = 1; /*0x6bb986*/
  }
  return result; /*0x6bb98d*/
}



// ==== 0x006BB990  ObjectClass::TopLevelExceptionFilter  this=ObjectClass  sig=csp ====
LONG __thiscall TopLevelExceptionFilter(
        ObjectClass *this,
        struct _EXCEPTION_POINTERS *ExceptionInfo,
        int a3,
        int a4,
        int a5)
{
  HANDLE FileA; // esi
  DWORD v7; // eax
  DWORD v9; // [esp-E40h] [ebp-E40h] BYREF

  v9 = *(_DWORD *)this->AbstractClass; /*0x4c8fe0*/
  Debug::Log(); /*0x4c8fe9*/
  WinMain_Write_53E6B0(); /*0x4c8ff1*/
  if ( !++dword_820E5C ) /*0x4c9001*/
  {
    ExceptionHandler::GenerateReport((ExceptionHandler *)this); /*0x4c9005*/
    FileA = CreateFileA(FileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x4c9027*/
    if ( FileA != (HANDLE)-1 ) /*0x4c902c*/
    {
      v7 = lstrlenA(Buffer); /*0x4c903a*/
      WriteFile(FileA, Buffer, v7, &v9, 0); /*0x4c9047*/
      CloseHandle(FileA); /*0x4c904e*/
    }
  }
  if ( (g_DSurface_Primary /*0x4c90dc*/
     && (*((unsigned __int8 (__thiscall **)(DSurface *, DWORD))g_DSurface_Primary->DSurface_field_0x0 + 27))(
          g_DSurface_Primary,
          v9)
     || g_DSurface_Hidden
     && (*((unsigned __int8 (__thiscall **)(ObjectClass *))g_DSurface_Hidden->AbstractClass + 27))(g_DSurface_Hidden)
     || DSurface_Composite
     && (*(unsigned __int8 (__thiscall **)(AudioStream *))(*(_DWORD *)DSurface_Composite->__pad_0 + 108))(DSurface_Composite)
     || DSurface_Tile
     && (*((unsigned __int8 (__thiscall **)(DSurface *))DSurface_Tile->DSurface_field_0x0 + 27))(DSurface_Tile)
     || DSurface_Sidebar
     && (*((unsigned __int8 (__thiscall **)(DSurface *))DSurface_Sidebar->DSurface_field_0x0 + 27))(DSurface_Sidebar)
     || DSurface_Alternate
     && (*((unsigned __int8 (__thiscall **)(DSurface *))DSurface_Alternate->DSurface_field_0x0 + 27))(DSurface_Alternate))
    && stru_887598.onBridge
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
  if ( hWnd ) /*0x4c912e*/
    Dialog::Destroy((Dialog *)hWnd); /*0x4c9130*/
  return 1; /*0x4c90ee*/
}



// ==== 0x006BB9A0  WinMain  this=-  sig=csp ====
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HWND WindowA; // eax
  HWND v6; // esi
  int v7; // edi
  char *v8; // eax
  int *FootClass_field_abstract_array_5AC; // esi
  int v10; // esi
  RawFileClass *v11; // eax
  _DWORD *v12; // eax
  int Int_Overwrite; // eax
  int v14; // eax
  int v15; // esi
  char *i; // eax
  int *v17; // eax
  NetworkSession *v18; // eax
  NetworkSession *v19; // esi
  wchar_t *StringCSF; // eax
  wchar_t *v21; // eax
  _SCOPETABLE_ENTRY *v22; // esi
  int v23; // eax
  HMODULE LibraryA; // eax
  HMODULE v25; // edi
  void (*ProcAddress)(void); // eax
  ClassFactory_CStream *v27; // eax
  IUnknown *v28; // eax
  ClassFactory_Wave *v29; // eax
  IUnknown *v30; // eax
  COMClassFactory *v31; // eax
  IUnknown *v32; // eax
  COMClassFactory *v33; // eax
  IUnknown *v34; // eax
  COMClassFactory *v35; // eax
  IUnknown *v36; // eax
  COMClassFactory *v37; // eax
  IUnknown *v38; // eax
  COMClassFactory ... [57318 chars total]



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

  v0 = dword_A8F794; /*0x6be1c2*/
  byte_A8E9A0 = 0; /*0x6be1cc*/
  if ( dword_A8F794 ) /*0x6be1d2*/
  {
    FileTreeNode::Destroy(dword_A8F794); /*0x6be1d6*/
    __3_YAXPAX_Z(v0); /*0x6be1dc*/
    dword_A8F794 = 0; /*0x6be1e4*/
  }
  if ( dword_A8F798 ) /*0x6be1f2*/
  {
    (**(void (__thiscall ***)(int, int))dword_A8F798)(dword_A8F798, 1); /*0x6be1f8*/
    dword_A8F798 = 0; /*0x6be1fa*/
  }
  if ( dword_A8F790 ) /*0x6be207*/
  {
    __3_YAXPAX_Z(dword_A8F790); /*0x6be20a*/
    dword_A8F790 = 0; /*0x6be212*/
  }
  WinMain::Constructor_VectorClass_Wstring_(&dword_A8B238); /*0x6be21d*/
  while ( dword_B054E0 ) /*0x6be228*/
  {
    v1 = *(void **)dword_B054D4; /*0x6be230*/
    if ( *(_DWORD *)dword_B054D4 ) /*0x6be230*/
    {
      ColorScheme::Destructor(*(_DWORD *)dword_B054D4); /*0x6be238*/
      __3_YAXPAX_Z(v1); /*0x6be23e*/
    }
  }
  dword_B054E0 = 0; /*0x6be253*/
  if ( dword_B054D4 && byte_B054DD ) /*0x6be263*/
  {
    __3_YAXPAX_Z(dword_B054D4); /*0x6be266*/
    dword_B054D4 = 0; /*0x6be26e*/
  }
  byte_B054DD = 0; /*0x6be274*/
  dword_B054D8 = 0; /*0x6be27a*/
  Game::DestroyAllObjects(); /*0x6be280*/
  MixFileClass::DestroyCache(); /*0x6be285*/
  MixFileClass::CleanupCache(); /*0x6be28a*/
  WinMainSetup_Setup_5B4310(); /*0x6be28f*/
  if ( dword_ABF3A0 ) /*0x6be29a*/
  {
    do /*0x6be2de*/
    {
      free(*(void **)dword_ABF394); /*0x6be2a5*/
      v2 = dword_ABF3A0 == 0; /*0x6be2b3*/
      if ( dword_ABF3A0 > 0 ) /*0x6be2b5*/
      {
        v3 = 0; /*0x6be2b8*/
        v2 = dword_ABF3A0-- == 1; /*0x6be2ba*/
        if ( dword_ABF3A0 > 0 ) /*0x6be2c2*/
        {
          do /*0x6be2da*/
          {
            ++v3; /*0x6be2ca*/
            *((_DWORD *)dword_ABF394 + v3 - 1) = *((_DWORD *)dword_ABF394 + v3); /*0x6be2ce*/
          }
          while ( v3 < dword_ABF3A0 ); /*0x6be2da*/
          v2 = dword_ABF3A0 == 0; /*0x6be2dc*/
        }
      }
    }
    while ( !v2 ); /*0x6be2de*/
  }
  dword_ABF3A0 = 0; /*0x6be2e5*/
  if ( dword_ABF394 && byte_ABF39D ) /*0x6be2f5*/
  {
    __3_YAXPAX_Z(dword_ABF394); /*0x6be2f8*/
    dword_ABF394 = 0; /*0x6be300*/
  }
  v4 = 0; /*0x6be30b*/
  byte_ABF39D = 0; /*0x6be30f*/
  for ( dword_ABF398 = 0; v4 < dword_87F668; ++v4 ) /*0x6be31b*/
  {
    v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)dword_87F65C + v4); /*0x6be322*/
    if ( v5 ) /*0x6be327*/
      (**v5)(v5, 1); /*0x6be32d*/
  }
  dword_87F668 = 0; /*0x6be33e*/
  if ( dword_87F65C && byte_87F665 ) /*0x6be34e*/
  {
    __3_YAXPAX_Z(dword_87F65C); /*0x6be351*/
    dword_87F65C = 0; /*0x6be359*/
  }
  byte_87F665 = 0; /*0x6be365*/
  dword_87F660 = 0; /*0x6be36d*/
  if ( dword_887048 ) /*0x6be373*/
  {
    (**(void (__thiscall ***)(int, int))dword_887048)(dword_887048, 1); /*0x6be379*/
    dword_887048 = 0; /*0x6be37b*/
  }
  INIClass::ClearSection(0, 0); /*0x6be388*/
  INIClass::ClearSection(0, 0); /*0x6be394*/
  INIClass::ClearSection(0, 0); /*0x6be3a0*/
  INIClass::ClearSection(0, 0); /*0x6be3ac*/
  INIClass::ClearSection(0, 0); /*0x6be3b8*/
  INIClass::ClearSection(0, 0); /*0x6be3c4*/
  WinMainSetup_Setup_5FF800(); /*0x6be3c9*/
  WinMainSetup_Setup(); /*0x6be3ce*/
  if ( dword_887640 ) /*0x6be3db*/
  {
    (**(void (__thiscall ***)(int, int))dword_887640)(dword_887640, 1); /*0x6be3e1*/
    dword_887640 = 0; /*0x6be3e3*/
  }
  MapClass::FreeAllCells(&dword_87F7E8); /*0x6be3ee*/
  TacticalClass::FreeResources(&dword_87F7E8); /*0x6be3f8*/
  WinMainSetup_Setup_6BB8E0(); /*0x6be3fd*/
  v6 = g_ZBufferDescriptor; /*0x6be402*/
  if ( g_ZBufferDescriptor ) /*0x6be40a*/
  {
    Stream::GetField(g_ZBufferDescriptor); /*0x6be40e*/
    __3_YAXPAX_Z(v6); /*0x6be414*/
    g_ZBufferDescriptor = 0; /*0x6be41c*/
  }
  v7 = dword_87E8A4; /*0x6be422*/
  if ( dword_87E8A4 ) /*0x6be42a*/
  {
    StreamObj::Release(dword_87E8A4); /*0x6be42e*/
    __3_YAXPAX_Z(v7); /*0x6be434*/
    dword_87E8A4 = 0; /*0x6be43c*/
  }
  if ( g_GameFontObject ) /*0x6be44a*/
  {
    (**(void (__thiscall ***)(int, int))g_GameFontObject)(g_GameFontObject, 1); /*0x6be450*/
    g_GameFontObject = 0; /*0x6be452*/
  }
  if ( dword_87F6B8 ) /*0x6be460*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6B8)(dword_87F6B8, 1); /*0x6be466*/
    dword_87F6B8 = 0; /*0x6be468*/
  }
  if ( dword_87F6C0 ) /*0x6be476*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6C0)(dword_87F6C0, 1); /*0x6be47c*/
    dword_87F6C0 = 0; /*0x6be47e*/
  }
  if ( dword_87F6C4 ) /*0x6be48c*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6C4)(dword_87F6C4, 1); /*0x6be492*/
    dword_87F6C4 = 0; /*0x6be494*/
  }
  if ( dword_87F6B4 ) /*0x6be4a2*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6B4)(dword_87F6B4, 1); /*0x6be4a8*/
    dword_87F6B4 = 0; /*0x6be4aa*/
  }
  if ( dword_87F6C8 ) /*0x6be4b8*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6C8)(dword_87F6C8, 1); /*0x6be4be*/
    dword_87F6C8 = 0; /*0x6be4c0*/
  }
  if ( dword_87F6CC ) /*0x6be4ce*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6CC)(dword_87F6CC, 1); /*0x6be4d4*/
    dword_87F6CC = 0; /*0x6be4d6*/
  }
  if ( dword_87F6D0 ) /*0x6be4e4*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6D0)(dword_87F6D0, 1); /*0x6be4ea*/
    dword_87F6D0 = 0; /*0x6be4ec*/
  }
  if ( dword_87F6B0 ) /*0x6be4fa*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6B0)(dword_87F6B0, 1); /*0x6be500*/
    dword_87F6B0 = 0; /*0x6be502*/
  }
  if ( dword_B1D140 ) /*0x6be510*/
  {
    (**(void (__thiscall ***)(int, int))dword_B1D140)(dword_B1D140, 1); /*0x6be516*/
    dword_B1D140 = 0; /*0x6be518*/
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
  if ( dword_89DDBC ) /*0x6be551*/
  {
    __3_YAXPAX_Z(dword_89DDBC); /*0x6be554*/
    dword_89DDBC = 0; /*0x6be55c*/
  }
  CleanupMapSystems(&dword_87F7E8); /*0x6be567*/
  for ( i = 0; i < dword_87F6A8; ++i ) /*0x6be575*/
  {
    v9 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)dword_87F69C + i); /*0x6be57c*/
    if ( v9 ) /*0x6be581*/
      (**v9)(v9, 1); /*0x6be587*/
  }
  dword_87F6A8 = 0; /*0x6be598*/
  if ( dword_87F69C && byte_87F6A5 ) /*0x6be5a8*/
  {
    __3_YAXPAX_Z(dword_87F69C); /*0x6be5ab*/
    dword_87F69C = 0; /*0x6be5b3*/
  }
  byte_87F6A5 = 0; /*0x6be5bf*/
  dword_87F6A0 = 0; /*0x6be5c7*/
  if ( dword_884E08 ) /*0x6be5cd*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E08)(dword_884E08, 1); /*0x6be5d3*/
    dword_884E08 = 0; /*0x6be5d5*/
  }
  if ( dword_884E0C ) /*0x6be5e3*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E0C)(dword_884E0C, 1); /*0x6be5e9*/
    dword_884E0C = 0; /*0x6be5eb*/
  }
  if ( dword_884E10 ) /*0x6be5f9*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E10)(dword_884E10, 1); /*0x6be5ff*/
    dword_884E10 = 0; /*0x6be601*/
  }
  if ( g_MixFile_GENERIC ) /*0x6be60f*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_GENERIC)(g_MixFile_GENERIC, 1); /*0x6be615*/
    g_MixFile_GENERIC = 0; /*0x6be617*/
  }
  if ( g_MixFile_GENERMD ) /*0x6be625*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_GENERMD)(g_MixFile_GENERMD, 1); /*0x6be62b*/
    g_MixFile_GENERMD = 0; /*0x6be62d*/
  }
  if ( dword_884E1C ) /*0x6be63b*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E1C)(dword_884E1C, 1); /*0x6be641*/
    dword_884E1C = 0; /*0x6be643*/
  }
  if ( dword_884E20 ) /*0x6be651*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E20)(dword_884E20, 1); /*0x6be657*/
    dword_884E20 = 0; /*0x6be659*/
  }
  if ( g_MixFile_ISOGEN ) /*0x6be667*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_ISOGEN)(g_MixFile_ISOGEN, 1); /*0x6be66d*/
    g_MixFile_ISOGEN = 0; /*0x6be66f*/
  }
  if ( g_MixFile_ISOGENMD ) /*0x6be67d*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_ISOGENMD)(g_MixFile_ISOGENMD, 1); /*0x6be683*/
    g_MixFile_ISOGENMD = 0; /*0x6be685*/
  }
  if ( lpBuffer ) /*0x6be692*/
  {
    __3_YAXPAX_Z(lpBuffer); /*0x6be695*/
    lpBuffer = 0; /*0x6be69d*/
  }
  if ( dword_AA1060 ) /*0x6be6aa*/
  {
    __3_YAXPAX_Z(dword_AA1060); /*0x6be6ad*/
    dword_AA1060 = 0; /*0x6be6b5*/
  }
  if ( dword_AA1064 ) /*0x6be6c2*/
  {
    __3_YAXPAX_Z(dword_AA1064); /*0x6be6c5*/
    dword_AA1064 = 0; /*0x6be6cd*/
  }
  if ( dword_AA1068 ) /*0x6be6da*/
  {
    __3_YAXPAX_Z(dword_AA1068); /*0x6be6dd*/
    dword_AA1068 = 0; /*0x6be6e5*/
  }
  if ( dword_AA106C ) /*0x6be6f2*/
  {
    __3_YAXPAX_Z(dword_AA106C); /*0x6be6f5*/
    dword_AA106C = 0; /*0x6be6fd*/
  }
  if ( dword_887320 ) /*0x6be70b*/
  {
    (**(void (__thiscall ***)(int, int))dword_887320)(dword_887320, 1); /*0x6be711*/
    dword_887320 = 0; /*0x6be713*/
  }
  if ( g_MixFile_MOVIES ) /*0x6be721*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MOVIES)(g_MixFile_MOVIES, 1); /*0x6be727*/
    g_MixFile_MOVIES = 0; /*0x6be729*/
  }
  if ( dword_884E30 ) /*0x6be737*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E30)(dword_884E30, 1); /*0x6be73d*/
    dword_884E30 = 0; /*0x6be73f*/
  }
  if ( dword_884E34 ) /*0x6be74d*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E34)(dword_884E34, 1); /*0x6be753*/
    dword_884E34 = 0; /*0x6be755*/
  }
  if ( g_MixFile_CONQUER ) /*0x6be763*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CONQUER)(g_MixFile_CONQUER, 1); /*0x6be769*/
    g_MixFile_CONQUER = 0; /*0x6be76b*/
  }
  if ( g_MixFile_CONQMD ) /*0x6be779*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CONQMD)(g_MixFile_CONQMD, 1); /*0x6be77f*/
    g_MixFile_CONQMD = 0; /*0x6be781*/
  }
  if ( g_MixFile_CAMEO ) /*0x6be78f*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CAMEO)(g_MixFile_CAMEO, 1); /*0x6be795*/
    g_MixFile_CAMEO = 0; /*0x6be797*/
  }
  if ( g_MixFile_CAMEOMD ) /*0x6be7a5*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CAMEOMD)(g_MixFile_CAMEOMD, 1); /*0x6be7ab*/
    g_MixFile_CAMEOMD = 0; /*0x6be7ad*/
  }
  v10 = g_MixFilePool_Count; /*0x6be7b3*/
  if ( g_MixFilePool_Count > 0 ) /*0x6be7bb*/
  {
    v11 = g_MixFilePool; /*0x6be7bd*/
    do /*0x6be806*/
    {
      if ( *v11 ) /*0x6be7c3*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v11)(*v11, 1); /*0x6be7cd*/
        v11 = g_MixFilePool; /*0x6be7cf*/
        v10 = g_MixFilePool_Count; /*0x6be7d5*/
      }
      if ( v10 <= 0 ) /*0x6be7dd*/
        break; /*0x6be7dd*/
      v12 = 0; /*0x6be7e0*/
      g_MixFilePool_Count = v10 - 1; /*0x6be7e4*/
      if ( v10 - 1 <= 0 ) /*0x6be7ea*/
        break; /*0x6be7ea*/
      do /*0x6be802*/
      {
        v11[v12] = v11[v12 + 1]; /*0x6be7f0*/
        v10 = g_MixFilePool_Count; /*0x6be7f3*/
        v11 = g_MixFilePool; /*0x6be7f9*/
        ++v12; /*0x6be7ff*/
      }
      while ( v12 < g_MixFilePool_Count ); /*0x6be802*/
    }
    while ( g_MixFilePool_Count > 0 ); /*0x6be806*/
  }
  if ( g_MixFile_CACHE ) /*0x6be810*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CACHE)(g_MixFile_CACHE, 1); /*0x6be816*/
    g_MixFile_CACHE = 0; /*0x6be818*/
  }
  if ( g_MixFile_CACHEMD ) /*0x6be826*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_CACHEMD)(g_MixFile_CACHEMD, 1); /*0x6be82c*/
    g_MixFile_CACHEMD = 0; /*0x6be82e*/
  }
  if ( g_MixFile_LOCAL ) /*0x6be83c*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_LOCAL)(g_MixFile_LOCAL, 1); /*0x6be842*/
    g_MixFile_LOCAL = 0; /*0x6be844*/
  }
  if ( g_MixFile_LOCALMD ) /*0x6be852*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_LOCALMD)(g_MixFile_LOCALMD, 1); /*0x6be858*/
    g_MixFile_LOCALMD = 0; /*0x6be85a*/
  }
  if ( dword_884E5C ) /*0x6be868*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E5C)(dword_884E5C, 1); /*0x6be86e*/
    dword_884E5C = 0; /*0x6be870*/
  }
  if ( dword_884E58 ) /*0x6be87e*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E58)(dword_884E58, 1); /*0x6be884*/
    dword_884E58 = 0; /*0x6be886*/
  }
  if ( dword_884E68 ) /*0x6be894*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E68)(dword_884E68, 1); /*0x6be89a*/
    dword_884E68 = 0; /*0x6be89c*/
  }
  if ( dword_884E6C ) /*0x6be8aa*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E6C)(dword_884E6C, 1); /*0x6be8b0*/
    dword_884E6C = 0; /*0x6be8b2*/
  }
  v13 = dword_884DD0; /*0x6be8b8*/
  if ( dword_884DD0 > 0 ) /*0x6be8c0*/
  {
    v14 = dword_884DC4; /*0x6be8c2*/
    do /*0x6be90b*/
    {
      if ( *v14 ) /*0x6be8c8*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v14)(*v14, 1); /*0x6be8d2*/
        v14 = dword_884DC4; /*0x6be8d4*/
        v13 = dword_884DD0; /*0x6be8da*/
      }
      if ( v13 <= 0 ) /*0x6be8e2*/
        break; /*0x6be8e2*/
      v15 = 0; /*0x6be8e5*/
      dword_884DD0 = v13 - 1; /*0x6be8e9*/
      if ( v13 - 1 <= 0 ) /*0x6be8ef*/
        break; /*0x6be8ef*/
      do /*0x6be907*/
      {
        v14[v15] = v14[v15 + 1]; /*0x6be8f5*/
        v13 = dword_884DD0; /*0x6be8f8*/
        v14 = dword_884DC4; /*0x6be8fe*/
        ++v15; /*0x6be904*/
      }
      while ( v15 < dword_884DD0 ); /*0x6be907*/
    }
    while ( dword_884DD0 > 0 ); /*0x6be90b*/
  }
  if ( g_MixFile_MAPSFirst ) /*0x6be915*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MAPSFirst)(g_MixFile_MAPSFirst, 1); /*0x6be91b*/
    g_MixFile_MAPSFirst = 0; /*0x6be91d*/
  }
  if ( g_MixFile_MAPSMDFirst ) /*0x6be92b*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MAPSMDFirst)(g_MixFile_MAPSMDFirst, 1); /*0x6be931*/
    g_MixFile_MAPSMDFirst = 0; /*0x6be933*/
  }
  if ( MixFileClass_MULTI ) /*0x6be941*/
  {
    (**(void (__thiscall ***)(int, int))MixFileClass_MULTI)(MixFileClass_MULTI, 1); /*0x6be947*/
    MixFileClass_MULTI = 0; /*0x6be949*/
  }
  if ( g_MixFile_MULTIMD ) /*0x6be957*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_MULTIMD)(g_MixFile_MULTIMD, 1); /*0x6be95d*/
    g_MixFile_MULTIMD = 0; /*0x6be95f*/
  }
  if ( dword_884E74 ) /*0x6be96d*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E74)(dword_884E74, 1); /*0x6be973*/
    dword_884E74 = 0; /*0x6be975*/
  }
  if ( dword_884E70 ) /*0x6be983*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E70)(dword_884E70, 1); /*0x6be989*/
    dword_884E70 = 0; /*0x6be98b*/
  }
  if ( dword_884E78 ) /*0x6be999*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E78)(dword_884E78, 1); /*0x6be99f*/
    dword_884E78 = 0; /*0x6be9a1*/
  }
  if ( g_MixFile_RA2 ) /*0x6be9af*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_RA2)(g_MixFile_RA2, 1); /*0x6be9b5*/
    g_MixFile_RA2 = 0; /*0x6be9b7*/
  }
  if ( g_MixFile_RA2MD ) /*0x6be9c5*/
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_RA2MD)(g_MixFile_RA2MD, 1); /*0x6be9cb*/
    g_MixFile_RA2MD = 0; /*0x6be9cd*/
  }
  if ( dword_884E00 ) /*0x6be9db*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E00)(dword_884E00, 1); /*0x6be9e1*/
    dword_884E00 = 0; /*0x6be9e3*/
  }
  if ( dword_884E04 ) /*0x6be9f1*/
  {
    (**(void (__thiscall ***)(int, int))dword_884E04)(dword_884E04, 1); /*0x6be9f7*/
    dword_884E04 = 0; /*0x6be9f9*/
  }
  if ( g_TacticalClass_Instance ) /*0x6bea07*/
  {
    ((void (__thiscall *)(LPPERSISTSTREAM, int))g_TacticalClass_Instance->__tail_0[1].QueryInterface)( /*0x6bea0d*/
      g_TacticalClass_Instance,
      1);
    g_TacticalClass_Instance = 0; /*0x6bea10*/
  }
  WinMainSetup_Setup_65FD50(); /*0x6bea16*/
  TacticalClass::CleanupResources(&dword_87F7E8); /*0x6bea20*/
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
  if ( dword_87F770 ) /*0x6bea6d*/
  {
    __3_YAXPAX_Z(dword_87F770); /*0x6bea70*/
    dword_87F770 = 0; /*0x6bea78*/
  }
  Network::ShutdownInterface(); /*0x6bea7e*/
  v16 = dword_A83DB8; /*0x6bea83*/
  if ( dword_A83DB8 ) /*0x6bea8b*/
  {
    Vector::Clear(dword_A83DB8); /*0x6bea8f*/
    __3_YAXPAX_Z(v16); /*0x6bea95*/
    dword_A83DB8 = 0; /*0x6bea9d*/
  }
  v17 = dword_8871E0; /*0x6beaa3*/
  if ( dword_8871E0 ) /*0x6beaab*/
  {
    RulesClass::DTOR(dword_8871E0); /*0x6beaaf*/
    __3_YAXPAX_Z(v17); /*0x6beab5*/
    dword_8871E0 = 0; /*0x6beabd*/
  }
  v18 = dword_A8B230; /*0x6beac3*/
  if ( dword_A8B230 ) /*0x6beacc*/
  {
    v19 = (void *)*((_DWORD *)dword_A8B230 + 3396); /*0x6bead2*/
    *((_DWORD *)dword_A8B230 + 3395) = &VectorClass<int>::`vftable'; /*0x6beadf*/
    if ( v19 && *((_BYTE *)v18 + 13593) ) /*0x6beae7*/
    {
      __3_YAXPAX_Z(v19); /*0x6beaf0*/
      v18[3396] = 0; /*0x6beaf8*/
    }
    *((_BYTE *)v18 + 13593) = 0; /*0x6beafe*/
    v18[3397] = 0; /*0x6beb04*/
    v20 = (void *)v18[3389]; /*0x6beb0a*/
    v18[3388] = &VectorClass<int>::`vftable'; /*0x6beb10*/
    if ( v20 && *((_BYTE *)v18 + 13565) ) /*0x6beb1a*/
    {
      __3_YAXPAX_Z(v20); /*0x6beb23*/
      v18[3389] = 0; /*0x6beb2b*/
    }
    *((_BYTE *)v18 + 13565) = 0; /*0x6beb31*/
    v18[3390] = 0; /*0x6beb37*/
    v21 = (void *)v18[3382]; /*0x6beb3d*/
    v18[3381] = &VectorClass<TechnoTypeClass *>::`vftable'; /*0x6beb43*/
    if ( v21 && *((_BYTE *)v18 + 13537) ) /*0x6beb51*/
    {
      __3_YAXPAX_Z(v21); /*0x6beb5a*/
      v18[3382] = 0; /*0x6beb62*/
    }
    *((_BYTE *)v18 + 13537) = 0; /*0x6beb69*/
    v18[3383] = 0; /*0x6beb6f*/
    __3_YAXPAX_Z(v18); /*0x6beb75*/
    dword_A8B230 = 0; /*0x6beb7d*/
  }
  for ( j = 0; j < dword_B0BC98; ++j ) /*0x6beb8c*/
    CoRevokeClassObject(*((_DWORD *)dword_B0BC8C + j)); /*0x6beb9e*/
  dword_B0BC98 = 0; /*0x6bebaf*/
  if ( dword_B0BC8C && byte_B0BC95 ) /*0x6bebc0*/
  {
    __3_YAXPAX_Z(dword_B0BC8C); /*0x6bebc3*/
    dword_B0BC8C = 0; /*0x6bebcb*/
  }
  byte_B0BC95 = 0; /*0x6bebd8*/
  dword_B0BC90 = 0; /*0x6bebde*/
  RevokeActiveObject(pdwRegister, 0); /*0x6bebe4*/
  if ( hLibModule ) /*0x6bebf1*/
    FreeLibrary(hLibModule); /*0x6bebf4*/
  if ( dword_B0BCE8 ) /*0x6bec07*/
  {
    CloseHandle(dword_B0BCE8); /*0x6bec0a*/
    dword_B0BCE8 = 0; /*0x6bec0c*/
  }
  if ( dword_B0BCE4 ) /*0x6bec19*/
  {
    CloseHandle(dword_B0BCE4); /*0x6bec1c*/
    dword_B0BCE4 = 0; /*0x6bec1e*/
  }
  Audio_Init(); /*0x6bec24*/
  ThemeManager::Cleanup(&unk_A83D10); /*0x6bec2e*/
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
void __thiscall __noreturn ExitProgram(ObjectClass *this)
{
  exit((int)this); /*0x6bec51*/
}



// ==== 0x006BEC60  GameClass::Shutdown  this=GameClass  sig=csp ====
void GameClass::Shutdown(GameClass *this)
{
  int v1; // eax
  void *v2; // ebp
  int v3; // edx
  int v4; // eax
  FileTreeNode *v5; // esi
  int v6; // edi
  Network *v7; // [esp+0h] [ebp-4h]

  *(_DWORD *)&stru_A8EB00.?[500] = 1; /*0x6bec72*/
  PostMessageA(g_hWnd, 2u, 0, 0); /*0x6bec78*/
  if ( g_hWnd ) /*0x6bec85*/
  {
    do /*0x6bec9b*/
      MessageLoop(); /*0x6bec87*/
    while ( *(_DWORD *)&stru_A8EB00.?[500] == 1 && g_hWnd ); /*0x6bec9b*/
  }
  if ( dwRegister != -1 ) /*0x6beca5*/
  {
    RevokeActiveObject(dwRegister, 0); /*0x6becaa*/
    dwRegister = -1; /*0x6becb0*/
  }
  CoDisconnectObject(&punk, 0); /*0x6becc1*/
  OleUninitialize(); /*0x6becc7*/
  if ( stru_887598.lineTrailer ) /*0x6becd5*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 20))(stru_887598.lineTrailer); /*0x6becd9*/
    if ( stru_887598.lineTrailer ) /*0x6bece4*/
      (**(void (__thiscall ***)(void *, int))stru_887598.lineTrailer)(stru_887598.lineTrailer, 1); /*0x6bece9*/
  }
  stru_887598.lineTrailer = 0; /*0x6becf0*/
  if ( byte_B0BCF4 ) /*0x6becfc*/
  {
    if ( dword_B0BCF0 ) /*0x6bed06*/
    {
      v1 = *(_DWORD *)(dword_B0BCF0 - 4); /*0x6bed08*/
      v2 = (void *)(dword_B0BCF0 - 4); /*0x6bed0c*/
      v3 = 9 * v1; /*0x6bed0f*/
      v4 = v1 - 1; /*0x6bed12*/
      v5 = (FileTreeNode *)(dword_B0BCF0 + 4 * v3); /*0x6bed13*/
      if ( v4 >= 0 ) /*0x6bed16*/
      {
        v6 = v4 + 1; /*0x6bed19*/
        do /*0x6bed27*/
        {
          v5 -= 9; /*0x6bed1c*/
          FileTreeNode::Destroy(v5); /*0x6bed21*/
          --v6; /*0x6bed26*/
        }
        while ( v6 ); /*0x6bed27*/
      }
      __3_YAXPAX_Z(v2); /*0x6bed2b*/
    }
    byte_B0BCF4 = 0; /*0x6bed34*/
  }
  PostQuitMessage(0); /*0x6bed3d*/
  Network::ShutdownInterface(v7); /*0x6bed43*/
  WinMainSetup(); /*0x6bed48*/
}



// ==== 0x006BED50  _DynamicVectorClass_K::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_K::Destroy(_DynamicVectorClass_K *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6bed56*/
  this->m_10 = 0; /*0x6bed59*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6bed60*/
  {
    __3_YAXPAX_Z(v2); /*0x6bed66*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6bed6e*/
  }
  BYTE1(this->m_C) = 0; /*0x6bed71*/
  this->m_8 = 0; /*0x6bed74*/
}



// ==== 0x006BED80  _DynamicVectorClass_K::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_K::GetItemIndex(_DynamicVectorClass_K *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x6bed80*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6bed95*/
  else
    return 0; /*0x6bed87*/
}



// ==== 0x006BEDA0  _VectorClass_K::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_K::Clear(_VectorClass_K *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6bedaa*/
}



// ==== 0x006BEDB0  COMClassFactory::Register  this=COMClassFactory  sig=csp ====
int __thiscall COMClassFactory::Register(COMClassFactory *this, IID *rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext)
{
  int result; // eax
  HRESULT v6; // esi

  if ( *(_DWORD *)this->__pad_0 ) /*0x6bedb4*/
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)this->__pad_0 + 8))(*(_DWORD *)this->__pad_0); /*0x6bedbd*/
  if ( (dwClsContext & 0x14) == 0 ) /*0x6bedc6*/
    return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)this); /*0x6bee2b*/
  result = CoCreateInstance(rclsid, pUnkOuter, dwClsContext, &riid, (LPVOID *)&pUnkOuter); /*0x6beddd*/
  if ( result >= 0 ) /*0x6bede5*/
  {
    v6 = OleRun(pUnkOuter); /*0x6bedf2*/
    if ( v6 >= 0 ) /*0x6bedf6*/
      v6 = (*(int (__stdcall **)(LPUNKNOWN, IID *, COMClassFactory *))pUnkOuter->field_0)(pUnkOuter, &riid, this); /*0x6bee07*/
    (*(void (__stdcall **)(LPUNKNOWN))(pUnkOuter->field_0 + 8))(pUnkOuter); /*0x6bee10*/
    return v6; /*0x6bee13*/
  }
  return result; /*0x6bee15*/
}



// ==== 0x006BEE40  ClassFactory_CStream::Construct  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
_DWORD *__thiscall ClassFactory_CStream::Construct(ClassFactory_CStream *this)
{
  this->q010 = 0; /*0x6bee42*/
  *this = (ClassFactory_CStream)&TClassFactory<CStreamClass>::`vftable'; /*0x6bee49*/
  return this; /*0x6bee4f*/
}



// ==== 0x006BEE50  _TClassFactory_VCStreamClass::QueryInterface  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __thiscall VectorClass_K_8::QueryInterface(_TClassFactory_VCStreamClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bee57*/
    return -2147467261; /*0x6bee59*/
  *v4 = 0; /*0x6bee76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bee92*/
    *v4 = a2; /*0x6bee96*/
  if ( !*v4 ) /*0x6bee98*/
    return -2147467262; /*0x6beea0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6beeac*/
  return 0; /*0x6bee5e*/
}



// ==== 0x006BEEC0  _TClassFactory_VCStreamClass::AddRef  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
LONG __thiscall VectorClass_K_8::AddRef(_TClassFactory_VCStreamClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6beece*/
}



// ==== 0x006BEEE0  _TClassFactory_VCStreamClass::Release  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
LONG __thiscall VectorClass_K_8::Release(_TClassFactory_VCStreamClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6beef0*/
  if ( !v1 ) /*0x6beef4*/
    __3_YAXPAX_Z((void *)Block); /*0x6beef7*/
  return v1; /*0x6bef01*/
}



// ==== 0x006BEF10  _TClassFactory_VCStreamClass::ddtor  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __thiscall VectorClass_K_8::ddtor(_TClassFactory_VCStreamClass *this, int a2, int a3, _DWORD *a4)
{
  CStreamClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bef18*/
    return -2147024809; /*0x6bef1b*/
  *v9 = 0; /*0x6bef28*/
  if ( a3 ) /*0x6bef30*/
    return -2147221232; /*0x6bef33*/
  v5 = (CStreamClass *)__2_YAPAXI_Z(0x2Cu); /*0x6bef3e*/
  if ( !v5 ) /*0x6bef48*/
    return -2147024882; /*0x6bef48*/
  v6 = VectorClass_K_8::Constructor(v5); /*0x6bef4c*/
  v7 = v6; /*0x6bef51*/
  if ( !v6 ) /*0x6bef55*/
    return -2147024882; /*0x6bef58*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bef6c*/
  if ( v8 < 0 ) /*0x6bef70*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 56))(v7, 1); /*0x6bef78*/
  return v8; /*0x6bef1a*/
}



// ==== 0x006BEF90  _TClassFactory_VCStreamClass::GetSize  this=?$TClassFactory@VCStreamClass@@  sig=csp ====
int __thiscall VectorClass_K_8::GetSize(_TClassFactory_VCStreamClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bef9a*/
  if ( v5 ) /*0x6bef9d*/
    v3 = v2 + 1; /*0x6bef9f*/
  else
    v3 = v2 - 1; /*0x6befa8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6befa0*/
  return 0; /*0x6befa5*/
}



// ==== 0x006BEFC0  ClassFactory_Wave::Construct  this=?$TClassFactory@VWaveClass@@  sig=csp ====
_DWORD *__thiscall ClassFactory_Wave::Construct(ClassFactory_Wave *this)
{
  this->q010 = 0; /*0x6befc2*/
  *this = (ClassFactory_Wave)&TClassFactory<WaveClass>::`vftable'; /*0x6befc9*/
  return this; /*0x6befcf*/
}



// ==== 0x006BEFD0  _TClassFactory_VWaveClass::QueryInterface  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __thiscall VectorClass_K_14::QueryInterface(_TClassFactory_VWaveClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6befd7*/
    return -2147467261; /*0x6befd9*/
  *v4 = 0; /*0x6beff6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf012*/
    *v4 = a2; /*0x6bf016*/
  if ( !*v4 ) /*0x6bf018*/
    return -2147467262; /*0x6bf020*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf02c*/
  return 0; /*0x6befde*/
}



// ==== 0x006BF040  _TClassFactory_VWaveClass::AddRef  this=?$TClassFactory@VWaveClass@@  sig=csp ====
LONG __thiscall VectorClass_K_14::AddRef(_TClassFactory_VWaveClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf04e*/
}



// ==== 0x006BF060  _TClassFactory_VWaveClass::Release  this=?$TClassFactory@VWaveClass@@  sig=csp ====
LONG __thiscall VectorClass_K_14::Release(_TClassFactory_VWaveClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf070*/
  if ( !v1 ) /*0x6bf074*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf077*/
  return v1; /*0x6bf081*/
}



// ==== 0x006BF090  _TClassFactory_VWaveClass::ddtor  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __thiscall VectorClass_K_14::ddtor(_TClassFactory_VWaveClass *this, int a2, int a3, _DWORD *a4)
{
  VoxelAnimClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf098*/
    return -2147024809; /*0x6bf09b*/
  *v9 = 0; /*0x6bf0a8*/
  if ( a3 ) /*0x6bf0b0*/
    return -2147221232; /*0x6bf0b3*/
  v5 = (VoxelAnimClass *)__2_YAPAXI_Z(0x240u); /*0x6bf0c1*/
  if ( !v5 ) /*0x6bf0cb*/
    return -2147024882; /*0x6bf0cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))VoxelAnimClass::Constructor(v5); /*0x6bf0cf*/
  v7 = v6; /*0x6bf0d4*/
  if ( !v6 ) /*0x6bf0d8*/
    return -2147024882; /*0x6bf0db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf0ef*/
  if ( v8 < 0 ) /*0x6bf0f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf0fb*/
  return v8; /*0x6bf09a*/
}



// ==== 0x006BF110  _TClassFactory_VWaveClass::GetSize  this=?$TClassFactory@VWaveClass@@  sig=csp ====
int __thiscall VectorClass_K_14::GetSize(_TClassFactory_VWaveClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf11a*/
  if ( v5 ) /*0x6bf11d*/
    v3 = v2 + 1; /*0x6bf11f*/
  else
    v3 = v2 - 1; /*0x6bf128*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf120*/
  return 0; /*0x6bf125*/
}



// ==== 0x006BF140  COMClassFactory::Construct  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_3::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf142*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<TerrainTypeClass>::`vftable'; /*0x6bf149*/
  return this->__pad_0; /*0x6bf14f*/
}



// ==== 0x006BF150  _TClassFactory_VTerrainTypeClass::QueryInterface  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_20::QueryInterface(_TClassFactory_VTerrainTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf157*/
    return -2147467261; /*0x6bf159*/
  *v4 = 0; /*0x6bf176*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf192*/
    *v4 = a2; /*0x6bf196*/
  if ( !*v4 ) /*0x6bf198*/
    return -2147467262; /*0x6bf1a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf1ac*/
  return 0; /*0x6bf15e*/
}



// ==== 0x006BF1C0  _TClassFactory_VTerrainTypeClass::AddRef  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_20::AddRef(_TClassFactory_VTerrainTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf1ce*/
}



// ==== 0x006BF1E0  _TClassFactory_VTerrainTypeClass::Release  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_20::Release(_TClassFactory_VTerrainTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf1f0*/
  if ( !v1 ) /*0x6bf1f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf1f7*/
  return v1; /*0x6bf201*/
}



// ==== 0x006BF210  _TClassFactory_VTerrainTypeClass::ddtor  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_20::ddtor(_TClassFactory_VTerrainTypeClass *this, int a2, int a3, _DWORD *a4)
{
  TerrainTypeClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf218*/
    return -2147024809; /*0x6bf21b*/
  *v9 = 0; /*0x6bf228*/
  if ( a3 ) /*0x6bf230*/
    return -2147221232; /*0x6bf233*/
  v5 = (TerrainTypeClass *)__2_YAPAXI_Z(0x2BCu); /*0x6bf241*/
  if ( !v5 ) /*0x6bf24b*/
    return -2147024882; /*0x6bf24b*/
  v6 = TerrainTypeClass::TerrainTypeClass(v5, 0); /*0x6bf251*/
  v7 = v6; /*0x6bf256*/
  if ( !v6 ) /*0x6bf25a*/
    return -2147024882; /*0x6bf25d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bf271*/
  if ( v8 < 0 ) /*0x6bf275*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bf27d*/
  return v8; /*0x6bf21a*/
}



// ==== 0x006BF290  _TClassFactory_VTerrainTypeClass::GetSize  this=?$TClassFactory@VTerrainTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_20::GetSize(_TClassFactory_VTerrainTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf29a*/
  if ( v5 ) /*0x6bf29d*/
    v3 = v2 + 1; /*0x6bf29f*/
  else
    v3 = v2 - 1; /*0x6bf2a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf2a0*/
  return 0; /*0x6bf2a5*/
}



// ==== 0x006BF2C0  COMClassFactory::Construct  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_4::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf2c2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<TerrainClass>::`vftable'; /*0x6bf2c9*/
  return this->__pad_0; /*0x6bf2cf*/
}



// ==== 0x006BF2D0  _TClassFactory_VTerrainClass::QueryInterface  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __thiscall VectorClass_K_26::QueryInterface(_TClassFactory_VTerrainClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf2d7*/
    return -2147467261; /*0x6bf2d9*/
  *v4 = 0; /*0x6bf2f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf312*/
    *v4 = a2; /*0x6bf316*/
  if ( !*v4 ) /*0x6bf318*/
    return -2147467262; /*0x6bf320*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf32c*/
  return 0; /*0x6bf2de*/
}



// ==== 0x006BF340  _TClassFactory_VTerrainClass::AddRef  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
LONG __thiscall VectorClass_K_26::AddRef(_TClassFactory_VTerrainClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf34e*/
}



// ==== 0x006BF360  _TClassFactory_VTerrainClass::Release  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
LONG __thiscall VectorClass_K_26::Release(_TClassFactory_VTerrainClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf370*/
  if ( !v1 ) /*0x6bf374*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf377*/
  return v1; /*0x6bf381*/
}



// ==== 0x006BF390  _TClassFactory_VTerrainClass::ddtor  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __thiscall VectorClass_K_26::ddtor(_TClassFactory_VTerrainClass *this, int a2, int a3, _DWORD *a4)
{
  ObjectClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf398*/
    return -2147024809; /*0x6bf39b*/
  *v9 = 0; /*0x6bf3a8*/
  if ( a3 ) /*0x6bf3b0*/
    return -2147221232; /*0x6bf3b3*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0xE0u); /*0x6bf3c1*/
  if ( !v5 ) /*0x6bf3cb*/
    return -2147024882; /*0x6bf3cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))ObjectClass::ProcessFoggedState(v5); /*0x6bf3cf*/
  v7 = v6; /*0x6bf3d4*/
  if ( !v6 ) /*0x6bf3d8*/
    return -2147024882; /*0x6bf3db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf3ef*/
  if ( v8 < 0 ) /*0x6bf3f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf3fb*/
  return v8; /*0x6bf39a*/
}



// ==== 0x006BF410  _TClassFactory_VTerrainClass::GetSize  this=?$TClassFactory@VTerrainClass@@  sig=csp ====
int __thiscall VectorClass_K_26::GetSize(_TClassFactory_VTerrainClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf41a*/
  if ( v5 ) /*0x6bf41d*/
    v3 = v2 + 1; /*0x6bf41f*/
  else
    v3 = v2 - 1; /*0x6bf428*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf420*/
  return 0; /*0x6bf425*/
}



// ==== 0x006BF440  COMClassFactory::Construct  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_5::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf442*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<SuperWeaponTypeClass>::`vftable'; /*0x6bf449*/
  return this->__pad_0; /*0x6bf44f*/
}



// ==== 0x006BF450  _TClassFactory_VSuperWeaponTypeClass::QueryInterface  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_32::QueryInterface(_TClassFactory_VSuperWeaponTypeClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf457*/
    return -2147467261; /*0x6bf459*/
  *v4 = 0; /*0x6bf476*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf492*/
    *v4 = a2; /*0x6bf496*/
  if ( !*v4 ) /*0x6bf498*/
    return -2147467262; /*0x6bf4a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf4ac*/
  return 0; /*0x6bf45e*/
}



// ==== 0x006BF4C0  _TClassFactory_VSuperWeaponTypeClass::AddRef  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_32::AddRef(_TClassFactory_VSuperWeaponTypeClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf4ce*/
}



// ==== 0x006BF4E0  _TClassFactory_VSuperWeaponTypeClass::Release  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
LONG __thiscall VectorClass_K_32::Release(_TClassFactory_VSuperWeaponTypeClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf4f0*/
  if ( !v1 ) /*0x6bf4f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf4f7*/
  return v1; /*0x6bf501*/
}



// ==== 0x006BF510  _TClassFactory_VSuperWeaponTypeClass::ddtor  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_32::ddtor(_TClassFactory_VSuperWeaponTypeClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf518*/
    return -2147024809; /*0x6bf51b*/
  *v9 = 0; /*0x6bf528*/
  if ( a3 ) /*0x6bf530*/
    return -2147221232; /*0x6bf533*/
  v5 = __2_YAPAXI_Z(0x100u); /*0x6bf541*/
  if ( !v5 ) /*0x6bf54b*/
    return -2147024882; /*0x6bf54b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SuperWeaponTypeClass::SuperWeaponTypeClass(v5, 0); /*0x6bf551*/
  v7 = v6; /*0x6bf556*/
  if ( !v6 ) /*0x6bf55a*/
    return -2147024882; /*0x6bf55d*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf571*/
  if ( v8 < 0 ) /*0x6bf575*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf57d*/
  return v8; /*0x6bf51a*/
}



// ==== 0x006BF590  _TClassFactory_VSuperWeaponTypeClass::GetSize  this=?$TClassFactory@VSuperWeaponTypeClass@@  sig=csp ====
int __thiscall VectorClass_K_32::GetSize(_TClassFactory_VSuperWeaponTypeClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf59a*/
  if ( v5 ) /*0x6bf59d*/
    v3 = v2 + 1; /*0x6bf59f*/
  else
    v3 = v2 - 1; /*0x6bf5a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf5a0*/
  return 0; /*0x6bf5a5*/
}



// ==== 0x006BF5C0  COMClassFactory::Construct  this=?$TClassFactory@VSuperClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_6::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf5c2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<SuperClass>::`vftable'; /*0x6bf5c9*/
  return this->__pad_0; /*0x6bf5cf*/
}



// ==== 0x006BF5D0  _TClassFactory_VSuperClass::QueryInterface  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __thiscall VectorClass_K_38::QueryInterface(_TClassFactory_VSuperClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf5d7*/
    return -2147467261; /*0x6bf5d9*/
  *v4 = 0; /*0x6bf5f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf612*/
    *v4 = a2; /*0x6bf616*/
  if ( !*v4 ) /*0x6bf618*/
    return -2147467262; /*0x6bf620*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf62c*/
  return 0; /*0x6bf5de*/
}



// ==== 0x006BF640  _TClassFactory_VSuperClass::AddRef  this=?$TClassFactory@VSuperClass@@  sig=csp ====
LONG __thiscall VectorClass_K_38::AddRef(_TClassFactory_VSuperClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf64e*/
}



// ==== 0x006BF660  _TClassFactory_VSuperClass::Release  this=?$TClassFactory@VSuperClass@@  sig=csp ====
LONG __thiscall VectorClass_K_38::Release(_TClassFactory_VSuperClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf670*/
  if ( !v1 ) /*0x6bf674*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf677*/
  return v1; /*0x6bf681*/
}



// ==== 0x006BF690  _TClassFactory_VSuperClass::ddtor  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __thiscall VectorClass_K_38::ddtor(_TClassFactory_VSuperClass *this, int a2, int a3, _DWORD *a4)
{
  SuperClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf698*/
    return -2147024809; /*0x6bf69b*/
  *v9 = 0; /*0x6bf6a8*/
  if ( a3 ) /*0x6bf6b0*/
    return -2147221232; /*0x6bf6b3*/
  v5 = (SuperClass *)__2_YAPAXI_Z(0x80u); /*0x6bf6c1*/
  if ( !v5 ) /*0x6bf6cb*/
    return -2147024882; /*0x6bf6cb*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))SuperClass::Constructor(v5); /*0x6bf6cf*/
  v7 = v6; /*0x6bf6d4*/
  if ( !v6 ) /*0x6bf6d8*/
    return -2147024882; /*0x6bf6db*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf6ef*/
  if ( v8 < 0 ) /*0x6bf6f3*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf6fb*/
  return v8; /*0x6bf69a*/
}



// ==== 0x006BF710  _TClassFactory_VSuperClass::GetSize  this=?$TClassFactory@VSuperClass@@  sig=csp ====
int __thiscall VectorClass_K_38::GetSize(_TClassFactory_VSuperClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf71a*/
  if ( v5 ) /*0x6bf71d*/
    v3 = v2 + 1; /*0x6bf71f*/
  else
    v3 = v2 - 1; /*0x6bf728*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf720*/
  return 0; /*0x6bf725*/
}



// ==== 0x006BF740  COMClassFactory::Construct  this=?$TClassFactory@VTactical@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_7::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf742*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<Tactical>::`vftable'; /*0x6bf749*/
  return this->__pad_0; /*0x6bf74f*/
}



// ==== 0x006BF750  _TClassFactory_VTactical::QueryInterface  this=?$TClassFactory@VTactical@@  sig=csp ====
int __thiscall VectorClass_K_44::QueryInterface(_TClassFactory_VTactical *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf757*/
    return -2147467261; /*0x6bf759*/
  *v4 = 0; /*0x6bf776*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf792*/
    *v4 = a2; /*0x6bf796*/
  if ( !*v4 ) /*0x6bf798*/
    return -2147467262; /*0x6bf7a0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf7ac*/
  return 0; /*0x6bf75e*/
}



// ==== 0x006BF7C0  _TClassFactory_VTactical::AddRef  this=?$TClassFactory@VTactical@@  sig=csp ====
LONG __thiscall VectorClass_K_44::AddRef(_TClassFactory_VTactical *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf7ce*/
}



// ==== 0x006BF7E0  _TClassFactory_VTactical::Release  this=?$TClassFactory@VTactical@@  sig=csp ====
LONG __thiscall VectorClass_K_44::Release(_TClassFactory_VTactical *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf7f0*/
  if ( !v1 ) /*0x6bf7f4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf7f7*/
  return v1; /*0x6bf801*/
}



// ==== 0x006BF810  _TClassFactory_VTactical::ddtor  this=?$TClassFactory@VTactical@@  sig=csp ====
int __thiscall VectorClass_K_44::ddtor(_TClassFactory_VTactical *this, int a2, int a3, _DWORD *a4)
{
  Tactical *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf818*/
    return -2147024809; /*0x6bf81b*/
  *v9 = 0; /*0x6bf828*/
  if ( a3 ) /*0x6bf830*/
    return -2147221232; /*0x6bf833*/
  v5 = (Tactical *)__2_YAPAXI_Z(0xE18u); /*0x6bf841*/
  if ( !v5 ) /*0x6bf84b*/
    return -2147024882; /*0x6bf84b*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))TacticalMap::Construct(v5); /*0x6bf84f*/
  v7 = v6; /*0x6bf854*/
  if ( !v6 ) /*0x6bf858*/
    return -2147024882; /*0x6bf85b*/
  v8 = (**v6)(v6, a4, v9); /*0x6bf86f*/
  if ( v8 < 0 ) /*0x6bf873*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bf87b*/
  return v8; /*0x6bf81a*/
}



// ==== 0x006BF890  _TClassFactory_VTactical::GetSize  this=?$TClassFactory@VTactical@@  sig=csp ====
int __thiscall VectorClass_K_44::GetSize(_TClassFactory_VTactical *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bf89a*/
  if ( v5 ) /*0x6bf89d*/
    v3 = v2 + 1; /*0x6bf89f*/
  else
    v3 = v2 - 1; /*0x6bf8a8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bf8a0*/
  return 0; /*0x6bf8a5*/
}



// ==== 0x006BF8C0  COMClassFactory::Construct  this=?$TClassFactory@VCellClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_8::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bf8c2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<CellClass>::`vftable'; /*0x6bf8c9*/
  return this->__pad_0; /*0x6bf8cf*/
}



// ==== 0x006BF8D0  _TClassFactory_VCellClass::CreateTClassFactory_CellClass  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall CreateTClassFactory_CellClass(_TClassFactory_VCellClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bf8d7*/
    return -2147467261; /*0x6bf8d9*/
  *v4 = 0; /*0x6bf8f6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bf912*/
    *v4 = a2; /*0x6bf916*/
  if ( !*v4 ) /*0x6bf918*/
    return -2147467262; /*0x6bf920*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bf92c*/
  return 0; /*0x6bf8de*/
}



// ==== 0x006BF940  _TClassFactory_VCellClass::AddRef  this=?$TClassFactory@VCellClass@@  sig=csp ====
LONG __thiscall TClassFactory_CellClass::AddRef(_TClassFactory_VCellClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bf94e*/
}



// ==== 0x006BF960  _TClassFactory_VCellClass::GetClassName  this=?$TClassFactory@VCellClass@@  sig=csp ====
LONG __thiscall TClassFactory_CellClass::GetClassName(_TClassFactory_VCellClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bf970*/
  if ( !v1 ) /*0x6bf974*/
    __3_YAXPAX_Z((void *)Block); /*0x6bf977*/
  return v1; /*0x6bf981*/
}



// ==== 0x006BF990  _TClassFactory_VCellClass::ddtor  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall TClassFactory_CellClass::ddtor(_TClassFactory_VCellClass *this, int a2, int a3, _DWORD *a4)
{
  CellClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bf998*/
    return -2147024809; /*0x6bf99b*/
  *v9 = 0; /*0x6bf9a8*/
  if ( a3 ) /*0x6bf9b0*/
    return -2147221232; /*0x6bf9b3*/
  v5 = (CellClass *)__2_YAPAXI_Z(0x148u); /*0x6bf9c1*/
  if ( !v5 ) /*0x6bf9cb*/
    return -2147024882; /*0x6bf9cb*/
  v6 = CellClass::Construct(v5); /*0x6bf9cf*/
  v7 = v6; /*0x6bf9d4*/
  if ( !v6 ) /*0x6bf9d8*/
    return -2147024882; /*0x6bf9db*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bf9ef*/
  if ( v8 < 0 ) /*0x6bf9f3*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bf9fb*/
  return v8; /*0x6bf99a*/
}



// ==== 0x006BFA10  _TClassFactory_VCellClass::GetSize  this=?$TClassFactory@VCellClass@@  sig=csp ====
int __thiscall TClassFactory_CellClass::GetSize(_TClassFactory_VCellClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfa1a*/
  if ( v5 ) /*0x6bfa1d*/
    v3 = v2 + 1; /*0x6bfa1f*/
  else
    v3 = v2 - 1; /*0x6bfa28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfa20*/
  return 0; /*0x6bfa25*/
}



// ==== 0x006BFA40  COMClassFactory::Construct  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_9::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bfa42*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<EMPulseClass>::`vftable'; /*0x6bfa49*/
  return this->__pad_0; /*0x6bfa4f*/
}



// ==== 0x006BFA50  _TClassFactory_VEMPulseClass::CreateTClassFactory_EMPulseClass  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall CreateTClassFactory_EMPulseClass(_TClassFactory_VEMPulseClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfa57*/
    return -2147467261; /*0x6bfa59*/
  *v4 = 0; /*0x6bfa76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfa92*/
    *v4 = a2; /*0x6bfa96*/
  if ( !*v4 ) /*0x6bfa98*/
    return -2147467262; /*0x6bfaa0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bfaac*/
  return 0; /*0x6bfa5e*/
}



// ==== 0x006BFAC0  _TClassFactory_VEMPulseClass::AddRef  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
LONG __thiscall TClassFactory_EMPulseClass::AddRef(_TClassFactory_VEMPulseClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bface*/
}



// ==== 0x006BFAE0  _TClassFactory_VEMPulseClass::GetClassName  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
LONG __thiscall TClassFactory_EMPulseClass::GetClassName(_TClassFactory_VEMPulseClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfaf0*/
  if ( !v1 ) /*0x6bfaf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfaf7*/
  return v1; /*0x6bfb01*/
}



// ==== 0x006BFB10  _TClassFactory_VEMPulseClass::ddtor  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall TClassFactory_EMPulseClass::ddtor(_TClassFactory_VEMPulseClass *this, int a2, int a3, _DWORD *a4)
{
  EMPulseClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bfb18*/
    return -2147024809; /*0x6bfb1b*/
  *v9 = 0; /*0x6bfb28*/
  if ( a3 ) /*0x6bfb30*/
    return -2147221232; /*0x6bfb33*/
  v5 = (EMPulseClass *)__2_YAPAXI_Z(0x34u); /*0x6bfb3e*/
  if ( !v5 ) /*0x6bfb48*/
    return -2147024882; /*0x6bfb48*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))Helper_4C5370(v5); /*0x6bfb4c*/
  v7 = v6; /*0x6bfb51*/
  if ( !v6 ) /*0x6bfb55*/
    return -2147024882; /*0x6bfb58*/
  v8 = (**v6)(v6, a4, v9); /*0x6bfb6c*/
  if ( v8 < 0 ) /*0x6bfb70*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bfb78*/
  return v8; /*0x6bfb1a*/
}



// ==== 0x006BFB90  _TClassFactory_VEMPulseClass::GetSize  this=?$TClassFactory@VEMPulseClass@@  sig=csp ====
int __thiscall TClassFactory_EMPulseClass::GetSize(_TClassFactory_VEMPulseClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfb9a*/
  if ( v5 ) /*0x6bfb9d*/
    v3 = v2 + 1; /*0x6bfb9f*/
  else
    v3 = v2 - 1; /*0x6bfba8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfba0*/
  return 0; /*0x6bfba5*/
}



// ==== 0x006BFBC0  COMClassFactory::Construct  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
_DWORD *__thiscall COMClassFactory_10::Construct(COMClassFactory *this)
{
  this->COMClassFactory_field_0x04 = 0; /*0x6bfbc2*/
  *(_DWORD *)this->__pad_0 = &TClassFactory<LightSourceClass>::`vftable'; /*0x6bfbc9*/
  return this->__pad_0; /*0x6bfbcf*/
}



// ==== 0x006BFBD0  _TClassFactory_VLightSourceClass::CreateTClassFactory_LightSourceClass  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall CreateTClassFactory_LightSourceClass(_TClassFactory_VLightSourceClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfbd7*/
    return -2147467261; /*0x6bfbd9*/
  *v4 = 0; /*0x6bfbf6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfc12*/
    *v4 = a2; /*0x6bfc16*/
  if ( !*v4 ) /*0x6bfc18*/
    return -2147467262; /*0x6bfc20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bfc2c*/
  return 0; /*0x6bfbde*/
}



// ==== 0x006BFC40  _TClassFactory_VLightSourceClass::AddRef  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
LONG __thiscall TClassFactory_LightSourceClass::AddRef(_TClassFactory_VLightSourceClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfc4e*/
}



// ==== 0x006BFC60  _TClassFactory_VLightSourceClass::GetClassName  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
LONG __thiscall TClassFactory_LightSourceClass::GetClassName(_TClassFactory_VLightSourceClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfc70*/
  if ( !v1 ) /*0x6bfc74*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfc77*/
  return v1; /*0x6bfc81*/
}



// ==== 0x006BFC90  _TClassFactory_VLightSourceClass::ddtor  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall TClassFactory_LightSourceClass::ddtor(
        _TClassFactory_VLightSourceClass *this,
        int a2,
        int a3,
        _DWORD *a4)
{
  LightSourceClass *v5; // eax
  int (__stdcall ***v6)(_DWORD, _DWORD *, _DWORD *); // eax
  int (__stdcall ***v7)(_DWORD, _DWORD *, _DWORD *); // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bfc98*/
    return -2147024809; /*0x6bfc9b*/
  *v9 = 0; /*0x6bfca8*/
  if ( a3 ) /*0x6bfcb0*/
    return -2147221232; /*0x6bfcb3*/
  v5 = (LightSourceClass *)__2_YAPAXI_Z(0x4Cu); /*0x6bfcbe*/
  if ( !v5 ) /*0x6bfcc8*/
    return -2147024882; /*0x6bfcc8*/
  v6 = (int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *))LightSourceClass::Constructor(v5); /*0x6bfccc*/
  v7 = v6; /*0x6bfcd1*/
  if ( !v6 ) /*0x6bfcd5*/
    return -2147024882; /*0x6bfcd8*/
  v8 = (**v6)(v6, a4, v9); /*0x6bfcec*/
  if ( v8 < 0 ) /*0x6bfcf0*/
    ((void (__thiscall *)(int (__stdcall ***)(_DWORD, _DWORD *, _DWORD *), int))(*v7)[8])(v7, 1); /*0x6bfcf8*/
  return v8; /*0x6bfc9a*/
}



// ==== 0x006BFD10  _TClassFactory_VLightSourceClass::GetSize  this=?$TClassFactory@VLightSourceClass@@  sig=csp ====
int __thiscall TClassFactory_LightSourceClass::GetSize(_TClassFactory_VLightSourceClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfd1a*/
  if ( v5 ) /*0x6bfd1d*/
    v3 = v2 + 1; /*0x6bfd1f*/
  else
    v3 = v2 - 1; /*0x6bfd28*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfd20*/
  return 0; /*0x6bfd25*/
}



// ==== 0x006BFD40  ObjectClass::WinMain_Helper_6BFD40  this=?$TClassFactory@VSideClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6BFD40(ObjectClass *this)
{
  this->? = 0; /*0x6bfd42*/
  this->AbstractClass = &TClassFactory<SideClass>::`vftable'; /*0x6bfd49*/
  return &this->AbstractClass; /*0x6bfd4f*/
}



// ==== 0x006BFD50  _TClassFactory_VSideClass::CreateTClassFactory_SideClass  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall CreateTClassFactory_SideClass(_TClassFactory_VSideClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfd57*/
    return -2147467261; /*0x6bfd59*/
  *v4 = 0; /*0x6bfd76*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bfd92*/
    *v4 = a2; /*0x6bfd96*/
  if ( !*v4 ) /*0x6bfd98*/
    return -2147467262; /*0x6bfda0*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bfdac*/
  return 0; /*0x6bfd5e*/
}



// ==== 0x006BFDC0  _TClassFactory_VSideClass::AddRef  this=?$TClassFactory@VSideClass@@  sig=csp ====
LONG __thiscall TClassFactory_SideClass::AddRef(_TClassFactory_VSideClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bfdce*/
}



// ==== 0x006BFDE0  _TClassFactory_VSideClass::GetClassName  this=?$TClassFactory@VSideClass@@  sig=csp ====
LONG __thiscall TClassFactory_SideClass::GetClassName(_TClassFactory_VSideClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bfdf0*/
  if ( !v1 ) /*0x6bfdf4*/
    __3_YAXPAX_Z((void *)Block); /*0x6bfdf7*/
  return v1; /*0x6bfe01*/
}



// ==== 0x006BFE10  _TClassFactory_VSideClass::ddtor  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall TClassFactory_SideClass::ddtor(_TClassFactory_VSideClass *this, int a2, int a3, _DWORD *a4)
{
  SideClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bfe18*/
    return -2147024809; /*0x6bfe1b*/
  *v9 = 0; /*0x6bfe28*/
  if ( a3 ) /*0x6bfe30*/
    return -2147221232; /*0x6bfe33*/
  v5 = (SideClass *)__2_YAPAXI_Z(0xB4u); /*0x6bfe41*/
  if ( !v5 ) /*0x6bfe4b*/
    return -2147024882; /*0x6bfe4b*/
  v6 = SideClass::Construct(v5, 0); /*0x6bfe51*/
  v7 = v6; /*0x6bfe56*/
  if ( !v6 ) /*0x6bfe5a*/
    return -2147024882; /*0x6bfe5d*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bfe71*/
  if ( v8 < 0 ) /*0x6bfe75*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bfe7d*/
  return v8; /*0x6bfe1a*/
}



// ==== 0x006BFE90  _TClassFactory_VSideClass::GetSize  this=?$TClassFactory@VSideClass@@  sig=csp ====
int __thiscall TClassFactory_SideClass::GetSize(_TClassFactory_VSideClass *this, int a2)
{
  int v2; // ecx
  int v3; // ecx
  int v5; // [esp+8h] [ebp+8h]

  v2 = *(_DWORD *)(a2 + 4); /*0x6bfe9a*/
  if ( v5 ) /*0x6bfe9d*/
    v3 = v2 + 1; /*0x6bfe9f*/
  else
    v3 = v2 - 1; /*0x6bfea8*/
  *(_DWORD *)(a2 + 4) = v3; /*0x6bfea0*/
  return 0; /*0x6bfea5*/
}



// ==== 0x006BFEC0  ObjectClass::WinMain_Helper_6BFEC0  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
_DWORD *__thiscall WinMain_Helper_6BFEC0(ObjectClass *this)
{
  this->? = 0; /*0x6bfec2*/
  this->AbstractClass = &TClassFactory<TiberiumClass>::`vftable'; /*0x6bfec9*/
  return &this->AbstractClass; /*0x6bfecf*/
}



// ==== 0x006BFED0  _TClassFactory_VTiberiumClass::CreateTClassFactory_TiberiumClass  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall CreateTClassFactory_TiberiumClass(_TClassFactory_VTiberiumClass *this, const void *a2, _DWORD *a3)
{
  const void **v4; // [esp+10h] [ebp+Ch]

  if ( !v4 ) /*0x6bfed7*/
    return -2147467261; /*0x6bfed9*/
  *v4 = 0; /*0x6bfef6*/
  if ( !memcmp(a3, &IID_IUnknown, 0x10u) || !memcmp(a3, &unk_7F7CA0, 0x10u) ) /*0x6bff12*/
    *v4 = a2; /*0x6bff16*/
  if ( !*v4 ) /*0x6bff18*/
    return -2147467262; /*0x6bff20*/
  (*(void (__stdcall **)(const void *))(*(_DWORD *)a2 + 4))(a2); /*0x6bff2c*/
  return 0; /*0x6bfede*/
}



// ==== 0x006BFF40  _TClassFactory_VTiberiumClass::AddRef  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
LONG __thiscall TClassFactory_TiberiumClass::AddRef(_TClassFactory_VTiberiumClass *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6bff4e*/
}



// ==== 0x006BFF60  _TClassFactory_VTiberiumClass::GetClassName  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
LONG __thiscall TClassFactory_TiberiumClass::GetClassName(_TClassFactory_VTiberiumClass *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6bff70*/
  if ( !v1 ) /*0x6bff74*/
    __3_YAXPAX_Z((void *)Block); /*0x6bff77*/
  return v1; /*0x6bff81*/
}



// ==== 0x006BFF90  _TClassFactory_VTiberiumClass::ddtor  this=?$TClassFactory@VTiberiumClass@@  sig=csp ====
int __thiscall TClassFactory_TiberiumClass::ddtor(_TClassFactory_VTiberiumClass *this, int a2, int a3, _DWORD *a4)
{
  TiberiumClass *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // [esp+18h] [ebp+10h]

  if ( !v9 ) /*0x6bff98*/
    return -2147024809; /*0x6bff9b*/
  *v9 = 0; /*0x6bffa8*/
  if ( a3 ) /*0x6bffb0*/
    return -2147221232; /*0x6bffb3*/
  v5 = (TiberiumClass *)__2_YAPAXI_Z(0x128u); /*0x6bffc1*/
  if ( !v5 ) /*0x6bffcb*/
    return -2147024882; /*0x6bffcb*/
  v6 = TiberiumClass::TiberiumClass(v5, 0); /*0x6bffd1*/
  v7 = v6; /*0x6bffd6*/
  if ( !v6 ) /*0x6bffda*/
    return -2147024882; /*0x6bffdd*/
  v8 = (*(int (__stdcall **)(_DWORD *, _DWORD *, _DWORD *))*v6)(v6, a4, v9); /*0x6bfff1*/
  if ( v8 < 0 ) /*0x6bfff5*/
    (*(void (__thiscall **)(_DWORD *, int))(*v7 + 32))(v7, 1); /*0x6bfffd*/
  return v8; /*0x6bff9a*/
}


