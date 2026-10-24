int __thiscall MapClass::RemoveTriggerRef(MapClass *this, int a2, int a3)
{
  int v3; // esi
  int i; // ebp
  int MapClass_field_0x1160; // ecx
  int v7; // eax
  int v8; // edx
  int *v9; // ecx
  unsigned int v10; // eax
  ObjectClass *v11; // eax
  ObjectClass *v12; // edi
  int v13; // eax
  int MapClass_field_0x116C; // ecx
  int v15; // ecx
  int result; // eax

  v3 = a2;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 44 )
  {
    for ( i = 0; i < this->MapClass_field_0x116C; ++i )
    {
      MapClass_field_0x1160 = this->MapClass_field_0x1160;
      v7 = *(__int16 *)(MapClass_field_0x1160 + 4 * i + 2);
      v8 = *(__int16 *)(MapClass_field_0x1160 + 4 * i);
      v9 = (int *)(MapClass_field_0x1160 + 4 * i);
      v10 = v8 + (v7 << 9);
      if ( v10 < 0x40000 && (v11 = *(ObjectClass **)(this->MapClass_field_0x13C + 4 * v10)) != 0 )
      {
        v12 = v11;
      }
      else
      {
        v12 = (ObjectClass *)&unk_ABDC50;
        dword_ABDC74 = *v9;
      }
      if ( v12 && v12->ambientSoundController[0] == v3 )
      {
        ObjectClass::SetTriggerTarget(v12, 0);
        v13 = (*(int (__thiscall **)(int *, int *))(this->MapClass_field_0x115C + 16))(
                &this->MapClass_field_0x115C,
                &v12->occupant);
        if ( v13 != -1 )
        {
          MapClass_field_0x116C = this->MapClass_field_0x116C;
          if ( v13 < MapClass_field_0x116C )
          {
            v15 = MapClass_field_0x116C - 1;
            for ( this->MapClass_field_0x116C = v15;
                  v13 < this->MapClass_field_0x116C;
                  *(_DWORD *)(this->MapClass_field_0x1160 + 4 * v13 - 4) = *(_DWORD *)(this->MapClass_field_0x1160
                                                                                     + 4 * v13) )
            {
              ++v13;
            }
          }
        }
        v3 = a2;
        --i;
      }
    }
    MapClass::RemoveCellReference((MapClass *)&unk_ABDC50, v3);
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3);
  if ( result == 44 )
  {
    a2 = v3;
    result = (*(int (__thiscall **)(int *, int *))(dword_8B41A8 + 16))(&dword_8B41A8, &a2);
    if ( result != -1 && result < dword_8B41B8 && result < --dword_8B41B8 )
    {
      do
      {
        ++result;
        *((_DWORD *)dword_8B41AC + result - 1) = *((_DWORD *)dword_8B41AC + result);
      }
      while ( result < dword_8B41B8 );
    }
  }
  return result;
}
