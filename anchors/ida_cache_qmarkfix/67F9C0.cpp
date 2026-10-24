int __thiscall Game::SerializeGameSaveState(Game *this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int i; // edi
  int v6; // edi
  int v7; // eax
  int j; // edi
  int v9; // edi
  int v10; // eax
  int k; // edi
  int v12; // eax
  int v13; // [esp+B8h] [ebp-8h] BYREF
  int v14; // [esp+BCh] [ebp-4h] BYREF

  result = (*(int (__stdcall **)(Game *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
             this,
             &stru_A8E960.random[516],
             4,
             0);
  if ( result >= 0 )
  {
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&stru_A8E960.random[516]);
    result = (*(int (__stdcall **)(Game *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
               this,
               (char *)&stru_A83CD9.estimatedHealth + 3,
               4,
               0);
    if ( result >= 0 )
    {
      ObjectPtr::RegisterForTracking(
        (int)&SwizzleManagerClass_Instance,
        (int *)((char *)&stru_A83CD9.estimatedHealth + 3));
      result = (*(int (__stdcall **)(Game *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                 this,
                 &stru_A8E960.random[528],
                 4,
                 0);
      if ( result >= 0 )
      {
        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v13, 4, 0);
        if ( result >= 0 )
        {
          v3 = 0;
          if ( v13 <= 0 )
          {
LABEL_14:
            for ( i = 0; i < *(int *)&stru_A8E960.random[340]; ++i )
              ObjectPtr::RegisterForTracking(
                (int)&SwizzleManagerClass_Instance,
                (int *)(*(_DWORD *)&stru_A8E960.random[328] + 4 * i));
            result = (*(int (__stdcall **)(Game *, float *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                       this,
                       flt_89EA40,
                       432,
                       0);
            if ( result >= 0 )
            {
              SuperWeapon::SerializeSuperWeaponState((SuperWeapon *)this);
              result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                         this,
                         &v13,
                         4,
                         0);
              if ( result >= 0 )
              {
                v6 = 0;
                if ( v13 <= 0 )
                {
LABEL_27:
                  for ( j = 0; j < dword_8B40D8; ++j )
                    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)dword_8B40CC + j);
                  result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                             this,
                             &v13,
                             4,
                             0);
                  if ( result >= 0 )
                  {
                    v9 = 0;
                    if ( v13 <= 0 )
                    {
LABEL_39:
                      for ( k = 0; k < dword_8B41B8; ++k )
                        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)dword_8B41AC + k);
                      result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                                 this,
                                 dword_81DA8C,
                                 76,
                                 0);
                      if ( result >= 0 )
                      {
                        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                                   this,
                                   dword_81DAD8,
                                   76,
                                   0);
                        if ( result >= 0 )
                        {
                          result = (*(int (__stdcall **)(Game *, double *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                                     this,
                                     dbl_89EC28,
                                     152,
                                     0);
                          if ( result >= 0 )
                          {
                            result = (*(int (__stdcall **)(Game *, char *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                                       this,
                                       byte_89ECC0,
                                       19,
                                       0);
                            if ( result >= 0 )
                            {
                              result = (*(int (__stdcall **)(Game *, MissionClass *, int, _DWORD))(*(_DWORD *)this->__pad_0
                                                                                                 + 12))(
                                         this,
                                         &stru_A8E3A8,
                                         1024,
                                         0);
                              if ( result >= 0 )
                              {
                                v12 = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                                        this,
                                        &dword_B07784,
                                        4,
                                        0);
                                return v12 >= 0 ? 0 : v12;
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
                        result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                                   this,
                                   &v14,
                                   4,
                                   0);
                        if ( result < 0 )
                          break;
                        if ( dword_8B41B8 < dword_8B41B0
                          || (byte_8B41B5 || !dword_8B41B0)
                          && dword_8B41BC > 0
                          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B41A8 + 8))(
                               &dword_8B41A8,
                               dword_8B41B0 + dword_8B41BC,
                               0) )
                        {
                          v10 = dword_8B41B8++;
                          *((_DWORD *)dword_8B41AC + v10) = v14;
                        }
                        if ( ++v9 >= v13 )
                          goto LABEL_39;
                      }
                    }
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                               this,
                               &v14,
                               4,
                               0);
                    if ( result < 0 )
                      break;
                    if ( dword_8B40D8 < dword_8B40D0
                      || (byte_8B40D5 || !dword_8B40D0)
                      && dword_8B40DC > 0
                      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B40C8 + 8))(
                           &dword_8B40C8,
                           dword_8B40D0 + dword_8B40DC,
                           0) )
                    {
                      v7 = dword_8B40D8++;
                      *((_DWORD *)dword_8B40CC + v7) = v14;
                    }
                    if ( ++v6 >= v13 )
                      goto LABEL_27;
                  }
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              result = (*(int (__stdcall **)(Game *, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                         this,
                         &v14,
                         4,
                         0);
              if ( result < 0 )
                break;
              if ( *(int *)&stru_A8E960.random[340] < *(int *)&stru_A8E960.random[332]
                || (stru_A8E960.random[337] || !*(_DWORD *)&stru_A8E960.random[332])
                && *(int *)&stru_A8E960.random[344] > 0
                && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_A8E960.random[324] + 8))(
                     &stru_A8E960.random[324],
                     *(_DWORD *)&stru_A8E960.random[332] + *(_DWORD *)&stru_A8E960.random[344],
                     0) )
              {
                v4 = (*(_DWORD *)&stru_A8E960.random[340])++;
                *(_DWORD *)(*(_DWORD *)&stru_A8E960.random[328] + 4 * v4) = v14;
              }
              if ( ++v3 >= v13 )
                goto LABEL_14;
            }
          }
        }
      }
    }
  }
  return result;
}
