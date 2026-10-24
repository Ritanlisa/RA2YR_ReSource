void __thiscall sub_629530(ObjectClass *this)
{
  int v2; // ecx
  int v3; // eax
  ObjectClass *v4; // [esp+8h] [ebp-4h] BYREF

  v2 = this->ambientSoundController[2];
  this->ambientSoundController[4] = 0;
  this->customSound_controller[0] = 0;
  this->ambientSoundController[3] = 0;
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2);
    this->ambientSoundController[2] = 0;
  }
  if ( LOBYTE(this->customSound_controller[1]) )
  {
    v4 = this;
    v3 = (*(int (__thiscall **)(DynamicVectorClass *, ObjectClass **))(stru_B0F5B8.vfptr + 16))(&stru_B0F5B8, &v4);
    if ( v3 != -1 && v3 < stru_B0F5B8.Count )
    {
      --stru_B0F5B8.Count;
      for ( ; v3 < stru_B0F5B8.Count; *(_DWORD *)(stru_B0F5B8.Items + 4 * v3 - 4) = *(_DWORD *)(stru_B0F5B8.Items
                                                                                              + 4 * v3) )
        ++v3;
    }
    LOBYTE(this->customSound_controller[1]) = 0;
  }
}
