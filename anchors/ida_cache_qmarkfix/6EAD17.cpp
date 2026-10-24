int __thiscall TeamClass::RecruitMember(TeamClass *this, int a2)
{
  TeamClass *v2; // edi
  int v3; // ebx
  int spawnCell; // ecx
  int *v5; // eax
  TechnoClass *buildingType; // ecx
  _DWORD *WaypointCoords; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  Math *v14; // esi
  int v15; // eax
  int v16; // edi
  int v18; // ebp
  int v19; // eax
  Math *v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  Math *v24; // esi
  int v25; // eax
  int v26; // edi
  int DB; // esi
  int Group; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch] BYREF
  int v35; // [esp+24h] [ebp-18h] BYREF
  int v36; // [esp+28h] [ebp-14h]
  int v37; // [esp+2Ch] [ebp-10h]
  _BYTE v38[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = this;
  v3 = 0;
  spawnCell = this->spawnCell;
  if ( spawnCell )
    v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)spawnCell + 72))(spawnCell, v38);
  else
    v5 = &dword_B0E968;
  v35 = *v5;
  v36 = v5[1];
  buildingType = (TechnoClass *)v2->buildingType;
  v37 = v5[2];
  if ( *TechnoClass::GetWaypointCoords(buildingType, &v34) != dword_B0E948 )
  {
    WaypointCoords = TechnoClass::GetWaypointCoords((TechnoClass *)v2->buildingType, &v34);
    v8 = (*(__int16 *)WaypointCoords << 8) + 128;
    v9 = (*((__int16 *)WaypointCoords + 1) << 8) + 128;
    v35 = v8;
    v36 = v9;
    v37 = 0;
  }
  v10 = v2->buildingType;
  v30 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(v10 + 228) + 8 * a2 + 164) <= v2->countObjects[a2] )
    return v30;
  Group = TeamTypeClass::GetGroup((TeamTypeClass *)v10);
  v11 = *(_DWORD *)(*(_DWORD *)(v2->buildingType + 228) + 8 * a2 + 168);
  switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) )
  {
    case 1:
    case 40:
      v23 = 0;
      v33 = -1;
      v34 = 0;
      if ( dword_8B4118 > 0 )
      {
        do
        {
          v24 = (Math *)*((_DWORD *)dword_8B410C + v23);
          if ( Group == -2 || v24[33].field_4 == (void *)Group || *(_BYTE *)(v2->buildingType + 168) )
          {
            v25 = Math::DistSq2D(v24, &v35);
            v26 = v25;
            if ( v24[33].field_4 != (void *)Group )
              v26 = v25 + 12800;
            if ( v24[33].field_C == (void *)this->owner
              && v24[108].field_4 == *(void **)(*(_DWORD *)(this->buildingType + 228) + 8 * a2 + 168)
              && (v26 < v33 || v33 == -1)
              && (unsigned __int8)TeamClass::ValidateMember(this, (int)v24, &a2, 0) )
            {
              v3 = (int)v24;
              v33 = v26;
            }
            v2 = this;
          }
          v23 = ++v34;
        }
        while ( v34 < dword_8B4118 );
        if ( v3 )
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 968))(v3, 0);
          TeamClass::AddMember(&v2->vfptr, v3, 0);
          v30 = 1;
          DB = CCINIClass::GetDB((CCINIClass *)(v3 + 276));
          if ( DB )
          {
            do
            {
              TeamClass::AddMember(&v2->vfptr, DB, 0);
              DB = *(_DWORD *)(DB + 48);
            }
            while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 );
          }
        }
      }
      return v30;
    case 2:
    case 3:
      v18 = -1;
      v19 = 0;
      v32 = 0;
      if ( dword_A8E3A0 <= 0 )
        return v30;
      do
      {
        v20 = (Math *)*((_DWORD *)dword_A8E394 + v19);
        if ( Group == -2 || v20[33].field_4 == (void *)Group || *(_BYTE *)(v2->buildingType + 168) )
        {
          v21 = Math::DistSq2D(v20, &v35);
          v22 = v21;
          if ( v20[33].field_4 != (void *)Group )
            v22 = v21 + 12800;
          if ( (v22 < v18 || v18 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v20, &a2, 0) )
          {
            v3 = (int)v20;
            v18 = v22;
          }
          v2 = this;
        }
        v19 = ++v32;
      }
      while ( v32 < dword_A8E3A0 );
      if ( !v3 )
        return v30;
      break;
    case 15:
    case 16:
      v12 = -1;
      v13 = 0;
      v31 = 0;
      if ( dword_A83DF8 <= 0 )
        return v30;
      do
      {
        v14 = (Math *)*((_DWORD *)dword_A83DEC + v13);
        if ( Group == -2 || v14[33].field_4 == (void *)Group || *(_BYTE *)(v2->buildingType + 168) )
        {
          v15 = Math::DistSq2D(v14, &v35);
          v16 = v15;
          if ( v14[33].field_4 != (void *)Group )
            v16 = v15 + 12800;
          if ( (v16 < v12 || v12 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v14, &a2, 0) )
          {
            v3 = (int)v14;
            v12 = v16;
          }
          v2 = this;
        }
        v13 = ++v31;
      }
      while ( v31 < dword_A83DF8 );
      if ( !v3 )
        return v30;
      break;
    default:
      return v30;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 968))(v3, 0);
  TeamClass::AddMember(&v2->vfptr, v3, 0);
  return 1;
}
