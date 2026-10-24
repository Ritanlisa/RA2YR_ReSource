int *__thiscall sub_4A3270(ObjectClass *this, int a2, int a3, int a4)
{
  int *p_estimatedHealth; // ebx
  int v6; // ebx
  _DWORD v8[25]; // [esp+10h] [ebp-64h] BYREF

  p_estimatedHealth = &this->estimatedHealth;
  this->vfptr = a4;
  this->estimatedHealth = 0;
  *(_DWORD *)this->isOnMap = 0;
  memset(&this->vfptr1, 0, 0x6Cu);
  this->vfptr1 = 108;
  this->vfptr2 = 7;
  this->health = dword_81FC60[a4];
  this->uniqueId = a2;
  this->vfptr3 = a3;
  if ( a4 == 1 )
  {
    this->vfptr2 = 71;
    this->referenceCount = 16;
  }
  if ( !dword_8A0E00
    || !(*(int (__stdcall **)(int, int *, int *, _DWORD))(*(_DWORD *)dword_8A0E00 + 24))(
          dword_8A0E00,
          &this->vfptr1,
          &this->estimatedHealth,
          0) )
  {
    v6 = *p_estimatedHealth;
    if ( v6 )
    {
      if ( a4 )
      {
        if ( a4 == 1 )
        {
          memset(v8, 0, sizeof(v8));
          v8[0] = 100;
          v8[20] = -1;
          (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD *))(*(_DWORD *)v6 + 20))(
            v6,
            0,
            0,
            0,
            0x2000000,
            v8);
          return &this->vfptr;
        }
        if ( a4 != 2 )
          return &this->vfptr;
      }
      (**(void (__stdcall ***)(int, void *, char *))v6)(v6, &unk_7F8130, this->isOnMap);
    }
  }
  return &this->vfptr;
}
