int __thiscall SaveGame::LoadMainGameState(SaveGame *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v10; // [esp+A0h] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
             this,
             &stru_A8E960.random[516],
             4,
             0);
  if ( result >= 0 )
  {
    result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
               this,
               (char *)&stru_A83CD9.estimatedHealth + 3,
               4,
               0);
    if ( result >= 0 )
    {
      result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                 this,
                 &stru_A8E960.random[528],
                 4,
                 0);
      if ( result >= 0 )
      {
        v3 = *(_DWORD *)this->__pad_0;
        v10 = *(_DWORD *)&stru_A8E960.random[340];
        result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v3 + 16))(this, &v10, 4, 0);
        if ( result >= 0 )
        {
          v4 = 0;
          if ( v10 <= 0 )
          {
LABEL_8:
            result = (*(int (__stdcall **)(SaveGame *, float *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeaponClass::LoadFromSaveStream((SuperWeaponClass *)this);
              v5 = *(_DWORD *)this->__pad_0;
              v10 = dword_8B40D8;
              result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v5 + 16))(this, &v10, 4, 0);
              if ( result >= 0 )
              {
                v6 = 0;
                if ( v10 <= 0 )
                {
LABEL_13:
                  v7 = *(_DWORD *)this->__pad_0;
                  v10 = dword_8B41B8;
                  result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(v7 + 16))(this, &v10, 4, 0);
                  if ( result >= 0 )
                  {
                    v8 = 0;
                    if ( v10 <= 0 )
                    {
LABEL_17:
                      result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                                 this,
                                 dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(SaveGame *, double *, int, _DWORD))(*(_DWORD *)this->__pad_0
                                                                                           + 16))(
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0
                                                                                           + 16))(
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(SaveGame *, MissionClass *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                                         this,
                                         &stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v9 = (*(int (__stdcall **)(SaveGame *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                                       this,
                                       &dword_B07784,
                                       4,
                                       0);
                                return v9 >= 0 ? 0 : v9;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      while ( 1 )
                      {
                        result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                                   this,
                                   (char *)dword_8B41AC + 4 * v8,
                                   4,
                                   0);
                        if ( result < 0 )
                          break;
                        if ( ++v8 >= v10 )
                          goto LABEL_17;
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    result = (*(int (__stdcall **)(SaveGame *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                               this,
                               (char *)dword_8B40CC + 4 * v6,
                               4,
                               0);
                    if ( result < 0 )
                      break;
                    if ( ++v6 >= v10 )
                      goto LABEL_13;
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              result = (*(int (__stdcall **)(SaveGame *, int, int, _DWORD))(*(_DWORD *)this->__pad_0 + 16))(
                         this,
                         *(_DWORD *)&stru_A8E960.random[328] + 4 * v4,
                         4,
                         0);
              if ( result < 0 )
                break;
              if ( ++v4 >= v10 )
                goto LABEL_8;
            }
          }
        }
      }
    }
  }
  return result;
}
