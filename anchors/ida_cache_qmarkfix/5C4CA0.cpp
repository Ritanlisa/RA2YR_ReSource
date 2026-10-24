int __thiscall MPCooperative::InitializePlayers(MPCooperative *this)
{
  int v2; // ebx
  int result; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // [esp+8h] [ebp-14h]
  __int16 v9[2]; // [esp+Ch] [ebp-10h] BYREF
  int v10; // [esp+10h] [ebp-Ch] BYREF
  int v11[2]; // [esp+14h] [ebp-8h] BYREF

  PtrVector::Destroy((PtrVector *)&stru_A8D804.__pad_3D[563]);
  v2 = 0;
  dword_A8B54C = 0;
  result = this->MPCooperative_field_0x68;
  if ( result > 0 )
  {
    do
    {
      v4 = 0;
      if ( dword_A80238 > 0 )
      {
        while ( _wcsicmp(
                  (const wchar_t *)(*(&dword_A8022C->vfptr + v4) + 90154),
                  *(const wchar_t **)(this->MPCooperative_field_0x5C + 4 * v2)) )
        {
          if ( ++v4 >= dword_A80238 )
            goto LABEL_16;
        }
        *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 111) = v4;
        v5 = __2_YAPAXI_Z(0x85u);
        v6 = v5;
        if ( v5 )
        {
          Waypoint::InitInvalid((Waypoint *)(v5 + 40));
          v8 = v6;
        }
        else
        {
          v8 = 0;
          v6 = 0;
        }
        wcscpy((wchar_t *)v6, *(const wchar_t **)(this->MPCooperative_field_0x5C + 4 * v2));
        *(_DWORD *)(v6 + 123) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 123);
        *(_DWORD *)(v6 + 75) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 75);
        *(_DWORD *)(v6 + 83) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 83);
        strcpy((char *)(v6 + 52), (const char *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 52));
        *(_DWORD *)(v8 + 79) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 79);
        *(_DWORD *)(v8 + 87) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 87);
        *(_DWORD *)(v8 + 107) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 107);
        *(_DWORD *)(v8 + 115) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 115);
        *(_DWORD *)(v8 + 119) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 119);
        *(_DWORD *)(v8 + 123) = *(_DWORD *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 123);
        Network::GetAddress((Network *)(*(_DWORD *)(this->MPCooperative_field_0x5C + 4 * v2) + 40), &v10, (int)v11, v9);
        NetworkID::Assign((NetworkID *)(v8 + 40), &v10, (int)v11, v9[0]);
        if ( *(int *)&stru_A8D804.__pad_3D[579] < *(int *)&stru_A8D804.__pad_3D[571]
          || (stru_A8D804.__pad_3D[576] || !*(_DWORD *)&stru_A8D804.__pad_3D[571])
          && *(int *)&stru_A8D804.__pad_3D[583] > 0
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A8D804.__pad_3D[563] + 8))(
               &stru_A8D804.__pad_3D[563],
               *(_DWORD *)&stru_A8D804.__pad_3D[571] + *(_DWORD *)&stru_A8D804.__pad_3D[583],
               0) )
        {
          v7 = (*(_DWORD *)&stru_A8D804.__pad_3D[579])++;
          *(_DWORD *)(*(_DWORD *)&stru_A8D804.__pad_3D[567] + 4 * v7) = v8;
        }
        ++dword_A8B54C;
      }
LABEL_16:
      result = this->MPCooperative_field_0x68;
      ++v2;
    }
    while ( v2 < result );
  }
  return result;
}
