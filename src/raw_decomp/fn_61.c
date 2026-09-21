// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00610360  Dialog::DestroyDialogSystem  this=Dialog  sig=csp ====
int __thiscall Dialog::DestroyDialogSystem(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *i; // eax
  void *v5; // esi
  int v6; // esi
  void **v7; // ecx
  void *v8; // edi
  double v9; // st7
  void **v10; // eax
  void *v11; // eax
  void *hWnd; // [esp+Ch] [ebp-20Ch] BYREF
  __int64 v14; // [esp+10h] [ebp-208h] BYREF
  void *v15[128]; // [esp+18h] [ebp-200h] BYREF

  ((void (__stdcall *)(void *, int (__stdcall *)(int, int), _DWORD))EnumChildWindows)(this, DestroyDialogChildWindow, 0); /*0x610374*/
  hWnd = this; /*0x610389*/
  DynamicArray::Resize(&dword_A8ED54[52093], (int *)&hWnd, &v14); /*0x61038d*/
  memset(v15, 0, sizeof(v15)); /*0x6103a3*/
  v15[26] = (void *)11; /*0x6103a7*/
  v15[25] = (void *)MEMORY[0x87F7E8][29498]; /*0x6103b2*/
  v2 = (_DWORD *)__2_YAPAXI_Z(4); /*0x6103b9*/
  if ( v2 ) /*0x6103c3*/
    v3 = unknown_libname_74(v2); /*0x6103c7*/
  else
    v3 = 0; /*0x6103ce*/
  v15[15] = v3; /*0x6103d0*/
  v15[16] = 0; /*0x6103e3*/
  v15[23] = 0; /*0x6103e7*/
  v15[36] = (void *)-1; /*0x6103eb*/
  Dialog::BindGadgetData(&dword_A8ED54[52075], (int *)&hWnd, (char *)v15); /*0x6103f6*/
  if ( v15[10] ) /*0x610401*/
  {
    __3_YAXPAX_Z(v15[10]); /*0x610404*/
    v15[10] = 0; /*0x61040c*/
  }
  for ( i = v15[13]; v15[13]; i = v15[13] ) /*0x610416*/
    LinkedList::Remove(v15, i); /*0x61041d*/
  v5 = v15[15]; /*0x61042a*/
  if ( v15[15] ) /*0x610430*/
  {
    DeleteAndZero::Alt((void **)v15[15]); /*0x610434*/
    __3_YAXPAX_Z(v5); /*0x61043a*/
  }
  if ( dword_A8ED54[51932] ) /*0x610449*/
  {
    v14 = (unsigned int)(dword_A8ED54[51932] - 1); /*0x610456*/
    *(float *)&v14 = (double)v14 / (double)dword_A8ED54[51933]; /*0x610472*/
    v6 = ((int (__thiscall *)(void **))dword_A8ED54[51937])(&hWnd) & ((1 << SLOBYTE(dword_A8ED54[51934])) - 1); /*0x61048a*/
    v7 = *(void ***)(dword_A8ED54[51931] + 4 * v6); /*0x610491*/
    if ( v7 ) /*0x610496*/
    {
      if ( *v7 == hWnd ) /*0x6104a4*/
      {
        v8 = v7[2]; /*0x6104a6*/
        __3_YAXPAX_Z(*(void **)(dword_A8ED54[51931] + 4 * v6)); /*0x6104aa*/
        v9 = *(float *)&v14; /*0x6104b8*/
        *(_DWORD *)(dword_A8ED54[51931] + 4 * v6) = v8; /*0x6104bc*/
        --dword_A8ED54[51932]; /*0x6104cb*/
        if ( v9 > *(double *)&dword_A8ED54[51939] ) /*0x6104d5*/
          goto LABEL_22; /*0x6104d5*/
        goto LABEL_21; /*0x6104d5*/
      }
      v10 = (void **)v7[2]; /*0x6104d9*/
      if ( v10 ) /*0x6104de*/
      {
        while ( *v10 != hWnd ) /*0x6104e2*/
        {
          v7 = v10; /*0x6104e4*/
          v10 = (void **)v10[2]; /*0x6104e6*/
          if ( !v10 ) /*0x6104eb*/
            goto LABEL_20; /*0x6104eb*/
        }
        v7[2] = v10[2]; /*0x6104f3*/
        --dword_A8ED54[51932]; /*0x6104fd*/
        __3_YAXPAX_Z(v10); /*0x610503*/
      }
LABEL_20:
      if ( *(float *)&v14 <= *(double *)&dword_A8ED54[51939] ) /*0x61051a*/
LABEL_21:
        HashTable::Shrink2(&dword_A8ED54[51931]); /*0x61051c*/
    }
  }
LABEL_22:
  v11 = (void *)((int (__stdcall *)(void *, int))GetWindowLongA)(hWnd, -21); /*0x610526*/
  if ( v11 ) /*0x610535*/
    __3_YAXPAX_Z(v11); /*0x610538*/
  ((void (__stdcall *)(void *, int, _DWORD))SetWindowLongA)(hWnd, -21, 0); /*0x610548*/
  Object::RemoveObjectArray(hWnd); /*0x610552*/
  return 1; /*0x61055c*/
}


// ==== 0x00610570  DestroyDialogChildWindow  this=-  sig=csp ====
BOOL __stdcall DestroyDialogChildWindow(HWND hWnd, LPARAM a2)
{
  void *v2; // eax
  void *v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  int v7; // esi
  HWND *v8; // ecx
  HWND v9; // edi
  double v10; // st7
  HWND *v11; // eax
  void *WindowLongA; // eax
  __int64 v14; // [esp+8h] [ebp-208h] BYREF
  void *v15[128]; // [esp+10h] [ebp-200h] BYREF

  DynamicArray::Resize(&MEMORY[0xAC1B48], (int *)&hWnd, &v14); /*0x61058a*/
  memset(v15, 0, sizeof(v15)); /*0x6105a0*/
  v15[26] = (void *)11; /*0x6105a4*/
  v15[25] = (void *)aP0; /*0x6105ac*/
  v2 = __2_YAPAXI_Z(4u); /*0x6105b0*/
  if ( v2 ) /*0x6105bc*/
    v3 = (void *)unknown_libname_74(v2); /*0x6105c0*/
  else
    v3 = 0; /*0x6105c7*/
  v15[15] = v3; /*0x6105c9*/
  v15[16] = 0; /*0x6105df*/
  v15[23] = 0; /*0x6105e3*/
  v15[36] = (void *)-1; /*0x6105e7*/
  Dialog::BindGadgetData(&MEMORY[0xAC1B00], (int *)&hWnd, (char *)v15); /*0x6105f2*/
  if ( v15[10] ) /*0x6105fd*/
  {
    __3_YAXPAX_Z(v15[10]); /*0x610600*/
    v15[10] = 0; /*0x610608*/
  }
  v4 = v15[13]; /*0x61060c*/
  if ( v15[13] ) /*0x610612*/
  {
    do /*0x61064d*/
    {
      v5 = 0; /*0x610614*/
      v6 = v4; /*0x610618*/
      if ( !v4 ) /*0x61061a*/
        break; /*0x61061a*/
      while ( v4 != v6 ) /*0x61061e*/
      {
        v5 = v6; /*0x610620*/
        v6 = (_DWORD *)*v6; /*0x610622*/
        if ( !v6 ) /*0x610626*/
          goto LABEL_16; /*0x610626*/
      }
      if ( v6 ) /*0x61062c*/
      {
        if ( v5 ) /*0x610630*/
          *v5 = *v6; /*0x610634*/
        else
          v15[13] = *(void **)v6; /*0x61063a*/
        __3_YAXPAX_Z(v6); /*0x61063f*/
        v4 = v15[13]; /*0x610644*/
      }
LABEL_16:
      ;
    }
    while ( v4 ); /*0x61064d*/
  }
  if ( v15[15] ) /*0x610655*/
    DeleteAndZero::OrFree((void **)v15[15], 1); /*0x610659*/
  if ( MEMORY[0xAC18C4] ) /*0x610666*/
  {
    v14 = (unsigned int)(MEMORY[0xAC18C4] - 1); /*0x610671*/
    *(float *)&v14 = (double)v14 / (double)MEMORY[0xAC18C8]; /*0x610691*/
    v7 = MEMORY[0xAC18D8](&hWnd) & ((1 << MEMORY[0xAC18CC]) - 1); /*0x6106af*/
    v8 = (HWND *)*((_DWORD *)MEMORY[0xAC18C0] + v7); /*0x6106b1*/
    if ( v8 ) /*0x6106b6*/
    {
      if ( *v8 == hWnd ) /*0x6106c7*/
      {
        v9 = v8[2]; /*0x6106c9*/
        __3_YAXPAX_Z(*((void **)MEMORY[0xAC18C0] + v7)); /*0x6106cd*/
        v10 = *(float *)&v14; /*0x6106db*/
        *((_DWORD *)MEMORY[0xAC18C0] + v7) = v9; /*0x6106df*/
        --MEMORY[0xAC18C4]; /*0x6106ee*/
        if ( v10 > MEMORY[0xAC18E0] ) /*0x6106f8*/
          goto LABEL_31; /*0x6106f8*/
        goto LABEL_30; /*0x6106f8*/
      }
      v11 = (HWND *)v8[2]; /*0x6106fc*/
      if ( v11 ) /*0x610701*/
      {
        while ( *v11 != hWnd ) /*0x610705*/
        {
          v8 = v11; /*0x610707*/
          v11 = (HWND *)v11[2]; /*0x610709*/
          if ( !v11 ) /*0x61070e*/
            goto LABEL_29; /*0x61070e*/
        }
        v8[2] = v11[2]; /*0x610716*/
        --MEMORY[0xAC18C4]; /*0x610720*/
        __3_YAXPAX_Z(v11); /*0x610726*/
      }
LABEL_29:
      if ( *(float *)&v14 <= MEMORY[0xAC18E0] ) /*0x61073d*/
LABEL_30:
        HashTable::Shrink2(&MEMORY[0xAC18C0]); /*0x61073f*/
    }
  }
LABEL_31:
  WindowLongA = (void *)GetWindowLongA(hWnd, -21); /*0x610749*/
  if ( WindowLongA ) /*0x61075c*/
    __3_YAXPAX_Z(WindowLongA); /*0x61075f*/
  SetWindowLongA(hWnd, -21, 0); /*0x610772*/
  Object::RemoveObjectArray(hWnd); /*0x61077f*/
  return 1; /*0x610784*/
}


// ==== 0x006107A0  sub_6107A0  this=-  sig=ida-proto ====
int sub_6107A0()
{
  MEMORY[0xAC1CB8] = 0u; /*0x6107a2*/
  MEMORY[0xAC1CC8] = 0; /*0x6107b6*/
  MEMORY[0xAC1CCC] = 0; /*0x6107bb*/
  MEMORY[0xAC1DCC] = 0; /*0x6107c1*/
  MEMORY[0xAC1DD0] = 0; /*0x6107c6*/
  MEMORY[0xAC1DD4] = 0; /*0x6107cb*/
  return 0; /*0x6107d0*/
}


// ==== 0x006107E0  ObjectClass::method_6107E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6107E0(_DWORD *this)
{
  *this = 0; /*0x6107e4*/
  this->vtable2 = 0; /*0x6107e6*/
  this->vtable3 = 0; /*0x6107e9*/
  this->vtable4 = 0; /*0x6107ec*/
  this->uniqueId = 0; /*0x6107ef*/
  this->owningHouseIndex = 0; /*0x6107f2*/
  this->q114 = 0; /*0x6107f6*/
  this->q118 = 0; /*0x6107fc*/
  this->q11C = 0; /*0x610802*/
  return this; /*0x610808*/
}


// ==== 0x00610810  sub_610810  this=-  sig=ida-proto ====
char __fastcall sub_610810(int a1, const wchar_t *a2, CoordStruct *a3)
{
  wchar_t *StringCSF; // eax
  CoordStruct *v6; // ecx
  const wchar_t *v8; // [esp+0h] [ebp-30h]
  CampaignScore *v9; // [esp+4h] [ebp-2Ch]
  _DWORD v10[2]; // [esp+10h] [ebp-20h] BYREF
  __int64 v11; // [esp+18h] [ebp-18h]
  _QWORD v12[2]; // [esp+20h] [ebp-10h] BYREF

  if ( *(&g_MatrixTransformState + 3055) ) /*0x610829*/
  {
    if ( *(&g_MatrixTransformState + 3056) != (CoordStruct *)1 ) /*0x610835*/
    {
      if ( !*(&g_MatrixTransformState + 2990) ) /*0x61083f*/
      {
LABEL_7:
        *(&g_MatrixTransformState + 2990) = 0; /*0x6108a9*/
        *(_QWORD *)(&g_MatrixTransformState + 3055) = 0; /*0x6108af*/
        goto LABEL_8; /*0x6108af*/
      }
      v12[0] = *((_QWORD *)&g_MatrixTransformState + 1493); /*0x61085b*/
      v12[1] = *(_QWORD *)&(&g_MatrixTransformState)[249]; /*0x610875*/
      v10[0] = 0; /*0x610879*/
      v10[1] = 0; /*0x61087d*/
      v11 = *(_QWORD *)&(&g_MatrixTransformState)[249]; /*0x610881*/
      (*(void (__thiscall **)(_DWORD, _QWORD *, _DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)&stru_87C374.__pad_579C[22520] /*0x61088c*/
                                                                              + 8))(
        *(_DWORD *)&stru_87C374.__pad_579C[22520],
        v12,
        *(&g_MatrixTransformState + 2990),
        v10,
        0,
        1);
      *(&g_MatrixTransformState + 3056) = (CoordStruct *)1; /*0x610894*/
    }
    if ( *(&g_MatrixTransformState + 2990) ) /*0x6108a2*/
      (*(void (__thiscall **)(_DWORD, int))(*(&g_MatrixTransformState + 2990))->X)(*(&g_MatrixTransformState + 2990), 1); /*0x6108a7*/
    goto LABEL_7; /*0x6108a7*/
  }
LABEL_8:
  *(&g_MatrixTransformState + 5810) = (CoordStruct *)time(0); /*0x6108bb*/
  StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_14B0[15768], 0, &stru_830620.__pad_14B0[7264], 7457); /*0x6108da*/
  swprintf((wchar_t *const)&g_MatrixTransformState + 5982, (const size_t)StringCSF, v8, v9); /*0x6108e5*/
  if ( a2 ) /*0x6108ef*/
    wcscpy((wchar_t *)&g_MatrixTransformState + 5982, a2); /*0x6108f7*/
  *((_QWORD *)&g_MatrixTransformState + 1493) = *(_QWORD *)a1; /*0x610901*/
  *(&g_MatrixTransformState + 2988) = *(CoordStruct **)(a1 + 8); /*0x610917*/
  v6 = *(CoordStruct **)(a1 + 12); /*0x61091c*/
  *(&g_MatrixTransformState + 3055) = (CoordStruct *)1; /*0x61091f*/
  *(&g_MatrixTransformState + 2989) = v6; /*0x610925*/
  *(&g_MatrixTransformState + 3057) = a3; /*0x61092d*/
  return TriggerClass::FindByEventType(1); /*0x610938*/
}


// ==== 0x00610950  TriggerClass::FindByEventType  this=TriggerClass  sig=ida-proto ====
char __fastcall sub_610950(char a1)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // esi
  size_t v7; // eax
  __int128 v8; // [esp+28h] [ebp-20h] BYREF
  _DWORD v9[2]; // [esp+38h] [ebp-10h] BYREF
  __int64 v10; // [esp+40h] [ebp-8h]

  if ( !MEMORY[0xAC1DCC] ) /*0x61095d*/
    return 0; /*0x61095f*/
  if ( a1 ) /*0x61096a*/
  {
    if ( MEMORY[0xAC1CC8] ) /*0x610978*/
      (**(void (__thiscall ***)(int, int))MEMORY[0xAC1CC8])(MEMORY[0xAC1CC8], 1); /*0x61097e*/
    MEMORY[0xAC1CC8] = 0; /*0x610982*/
    v2 = __2_YAPAXI_Z(0x20u); /*0x61098d*/
    if ( v2 ) /*0x610994*/
    {
      v4 = HIDWORD(MEMORY[0xAC1CB8]); /*0x61099b*/
      v3 = DWORD2(MEMORY[0xAC1CB8]); /*0x61099b*/
      v2[1] = DWORD2(MEMORY[0xAC1CB8]); /*0x6109a1*/
      v2[2] = v4; /*0x6109a9*/
      v2[3] = 0; /*0x6109b1*/
      *v2 = &XSurface_Vtable; /*0x6109b4*/
      v2[4] = 2; /*0x6109ba*/
      Buffer::Init(v2 + 5, 0, 2 * v4 * v3); /*0x6109c1*/
      *v2 = &BSurface_Vtable; /*0x6109c6*/
      v5 = (int)v2; /*0x6109cc*/
    }
    else
    {
      v5 = 0; /*0x6109d0*/
    }
    MEMORY[0xAC1CC8] = v5; /*0x6109ef*/
    v9[0] = 0; /*0x6109f5*/
    v9[1] = 0; /*0x6109f9*/
    v10 = *((_QWORD *)&MEMORY[0xAC1CB8] + 1); /*0x6109fd*/
    (*(void (__thiscall **)(int, _DWORD *, int, __int128 *, _DWORD, int))(*(_DWORD *)v5 + 8))( /*0x610a08*/
      v5,
      v9,
      MEMORY[0x887308],
      &MEMORY[0xAC1CB8],
      0,
      1);
  }
  v8 = MEMORY[0xAC1CB8]; /*0x610a25*/
  MEMORY[0xAC1DD0] = 0; /*0x610a32*/
  if ( MEMORY[0xAC48B0] == -1 ) /*0x610a40*/
    v6 = -1; /*0x610a42*/
  else
    v6 = ((int)(unsigned __int8)MEMORY[0xAC48B0] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x610a8d*/
       | (BYTE1(MEMORY[0xAC48B0]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
       | (BYTE2(MEMORY[0xAC48B0]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 92))(MEMORY[0x887308], 0, 0); /*0x610a9d*/
  (*(void (__thiscall **)(int, __int128 *, int))(*(_DWORD *)MEMORY[0x887308] + 20))(MEMORY[0x887308], &v8, v6); /*0x610aae*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887308] + 96))(MEMORY[0x887308]); /*0x610ab9*/
  Team_Find((int *)&v8, MEMORY[0x887308], 8, 4); /*0x610aca*/
  v7 = wcslen(MEMORY[0xAC1CCC]); /*0x610ae0*/
  DrawTextRendererTextAligned(MEMORY[0xAC18A4], 0, (int *)&v8, MEMORY[0xAC1CCC], v7, 1, 1, MEMORY[0x887308], 0); /*0x610afb*/
  HIDWORD(v8) -= 2; /*0x610b1e*/
  LODWORD(v8) = v8 + 1; /*0x610b2a*/
  ++DWORD1(v8); /*0x610b2e*/
  DWORD2(v8) -= 2; /*0x610b32*/
  DrawDialogGradient((int *)MEMORY[0x887308], (int *)&v8, 1, -1); /*0x610b36*/
  return 1; /*0x610961*/
}


// ==== 0x00610B50  ObjectClass::method_610B50  this=ObjectClass  sig=csp ====
char sub_610B50()
{
  _DWORD v1[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v2; // [esp+Ch] [ebp-18h]
  __int128 v3; // [esp+14h] [ebp-10h] BYREF

  if ( !MEMORY[0xAC1DCC] ) /*0x610b5d*/
    return 0; /*0x610b5f*/
  if ( MEMORY[0xAC1DD0] == 1 ) /*0x610b6d*/
    return 0; /*0x610b6f*/
  if ( !MEMORY[0xAC1CC8] ) /*0x610b7e*/
    return 0; /*0x610b80*/
  v1[0] = 0; /*0x610b9e*/
  v1[1] = 0; /*0x610ba2*/
  v3 = MEMORY[0xAC1CB8]; /*0x610bab*/
  v2 = *((_QWORD *)&MEMORY[0xAC1CB8] + 1); /*0x610bc8*/
  (*(void (__thiscall **)(int, __int128 *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x610bd3*/
    MEMORY[0x887308],
    &v3,
    MEMORY[0xAC1CC8],
    v1,
    0,
    1);
  MEMORY[0xAC1DD0] = 1; /*0x610bd6*/
  return 1; /*0x610b61*/
}


// ==== 0x00610BF0  ObjectClass::method_610BF0  this=ObjectClass  sig=csp ====
char sub_610BF0()
{
  _DWORD v1[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v2; // [esp+Ch] [ebp-18h]
  __int128 v3; // [esp+14h] [ebp-10h] BYREF

  if ( !MEMORY[0xAC1DCC] ) /*0x610bfd*/
    return 0; /*0x610c05*/
  if ( MEMORY[0xAC1DD0] == 1 ) /*0x610c0d*/
    goto LABEL_6; /*0x610c0d*/
  if ( MEMORY[0xAC1CC8] ) /*0x610c17*/
  {
    v3 = MEMORY[0xAC1CB8]; /*0x610c35*/
    v1[0] = 0; /*0x610c53*/
    v1[1] = 0; /*0x610c57*/
    v2 = *((_QWORD *)&MEMORY[0xAC1CB8] + 1); /*0x610c5b*/
    (*(void (__thiscall **)(int, __int128 *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))( /*0x610c66*/
      MEMORY[0x887308],
      &v3,
      MEMORY[0xAC1CC8],
      v1,
      0,
      1);
    MEMORY[0xAC1DD0] = 1; /*0x610c69*/
LABEL_6:
    if ( MEMORY[0xAC1CC8] ) /*0x610c7c*/
      (**(void (__thiscall ***)(int, int))MEMORY[0xAC1CC8])(MEMORY[0xAC1CC8], 1); /*0x610c82*/
  }
  MEMORY[0xAC1CC8] = 0; /*0x610c84*/
  MEMORY[0xAC1DCC] = 0; /*0x610c8a*/
  MEMORY[0xAC1DD0] = 0; /*0x610c90*/
  return 1; /*0x610c01*/
}


// ==== 0x00610CA0  ComboBoxOwnerDraw::DlgProc  this=ComboBoxOwnerDraw  sig=csp ====
LRESULT __stdcall ComboBoxOwnerDraw_DlgProc(HWND hWnd, UINT Msg, HWND wParam, unsigned int lParam)
{
  UINT v4; // ebp
  LPARAM v6; // edi
  HWND v7; // ebx
  HWND v8; // esi
  int v9; // eax
  HWND *v10; // eax
  int i; // eax
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // edi
  BOOL v16; // ebx
  HWND Parent; // eax
  _DWORD *v18; // eax
  UINT v19; // edi
  UINT *v20; // esi
  int v21; // edx
  UINT v22; // eax
  int v23; // ecx
  char v24; // al
  int v25; // esi
  _DWORD *v26; // ebx
  int v27; // eax
  HWND *v28; // eax
  HGDIOBJ StockObject; // eax
  HDC v30; // edi
  HGDIOBJ v31; // eax
  HDC v32; // esi
  unsigned int v33; // edi
  LRESULT v34; // edx
  int v35; // eax
  int *v36; // ebx
  int v37; // eax
  _DWORD *v38; // eax
  int v39; // ebx
  _DWORD *v40; // eax
  _DWORD *v41; // ebx
  HWND v42; // edx
  int v43; // eax
  int v44; // edi
  int v45; // edx
  int v46; // ebp
  _DWORD *v47; // eax
  void *v48; // esi
  int v49; // esi
  HWND *v50; // esi
  HWND v51; // esi
  int v52; // eax
  HWND *v53; // edx
  HWND v54; // edi
  _DWORD *v55; // esi
  int v56; // edx
  int v57; // ebp
  _DWORD *v58; // eax
  void *v59; // esi
  _DWORD *v60; // ebx
  UINT v61; // esi
  wchar_t *v62; // ebp
  char *v63; // edx
  HWND v64; // esi
  const wchar_t *v65; // eax
  int v66; // esi
  wchar_t *v67; // eax
  const wchar_t *v68; // esi
  bool v69; // dl
  bool v70; // cl
  bool v71; // al
  size_t v72; // eax
  wchar_t *v73; // eax
  bool v74; // al
  HWND v75; // esi
  HWND v76; // edi
  LRESULT v77; // ebp
  wchar_t *v78; // eax
  HWND v79; // edi
  wchar_t *v80; // eax
  char *v81; // eax
  wchar_t *v82; // eax
  LRESULT v83; // eax
  HWND v84; // eax
  bool v85; // zf
  int v86; // esi
  int v87; // ebx
  int v88; // ecx
  int v89; // edi
  int v90; // edi
  HWND v91; // ecx
  HWND v92; // ebx
  int v93; // eax
  HWND (__userpurge *v94)@<eax>(int@<ebx>, int@<ebp>, int@<edi>, int@<esi>, HWND, UINT, WPARAM, unsigned int); // esi
  int v95; // eax
  int v96; // eax
  HWND (__userpurge **v97)@<eax>(int@<ebx>, int@<ebp>, int@<edi>, int@<esi>, HWND, UINT, WPARAM, unsigned int); // eax
  HWND v98; // esi
  HWND Window; // eax
  _DWORD *v100; // eax
  _DWORD *v101; // esi
  void (__thiscall ***v102)(_DWORD, int); // ecx
  void *v103; // eax
  int v104; // eax
  void *WindowLongA; // eax
  int v106; // esi
  _DWORD *v107; // edi
  int v108; // edi
  double v109; // st7
  _DWORD *v110; // esi
  _DWORD *v111; // edi
  HWND v112; // edi
  int v113; // esi
  int k; // eax
  HWND v115; // [esp+Ch] [ebp-388h]
  HWND v116; // [esp+Ch] [ebp-388h]
  wchar_t *String; // [esp+14h] [ebp-380h]
  _DWORD *v118; // [esp+14h] [ebp-380h]
  LRESULT v119; // [esp+28h] [ebp-36Ch]
  HWND j; // [esp+2Ch] [ebp-368h] BYREF
  HWND v121; // [esp+30h] [ebp-364h] BYREF
  bool v122; // [esp+36h] [ebp-35Eh] BYREF
  char v123; // [esp+37h] [ebp-35Dh]
  HWND v124; // [esp+38h] [ebp-35Ch] BYREF
  float v125; // [esp+3Ch] [ebp-358h] BYREF
  HWND v126; // [esp+40h] [ebp-354h] BYREF
  struct tagRECT v127; // [esp+44h] [ebp-350h] BYREF
  __int64 v128; // [esp+54h] [ebp-340h] BYREF
  void *Block; // [esp+5Ch] [ebp-338h]
  int v130; // [esp+60h] [ebp-334h]
  int v131; // [esp+64h] [ebp-330h]
  UINT v132; // [esp+68h] [ebp-32Ch] BYREF
  HWND v133; // [esp+6Ch] [ebp-328h]
  RECT rcSrc2; // [esp+70h] [ebp-324h] BYREF
  _DWORD *v135; // [esp+80h] [ebp-314h]
  int v136; // [esp+84h] [ebp-310h]
  HWND v137; // [esp+88h] [ebp-30Ch] BYREF
  int v138; // [esp+8Ch] [ebp-308h]
  int v139; // [esp+90h] [ebp-304h]
  RECT rcSrc1; // [esp+94h] [ebp-300h] BYREF
  RECT v141; // [esp+A4h] [ebp-2F0h] BYREF
  struct tagRECT v142; // [esp+B4h] [ebp-2E0h] BYREF
  struct tagRECT Rect; // [esp+C4h] [ebp-2D0h] BYREF
  struct tagRECT v144; // [esp+D4h] [ebp-2C0h] BYREF
  struct tagRECT rcDst; // [esp+E4h] [ebp-2B0h] BYREF
  RECT v146; // [esp+F4h] [ebp-2A0h] BYREF
  struct tagRECT v147; // [esp+104h] [ebp-290h] BYREF
  _DWORD v148[128]; // [esp+114h] [ebp-280h] BYREF
  CHAR ClassName[128]; // [esp+314h] [ebp-80h] BYREF

  v4 = Msg;
  if ( Msg == 32 )
    return 1;
  v6 = lParam;
  v7 = wParam;
  if ( Render_Draw_778030(hWnd, Msg, (WPARAM)wParam, lParam) )
    return Render_Draw_778120();
  v8 = 0;
  v124 = 0;
  if ( MEMORY[0xAC18C4] )
  {
    v9 = *((_DWORD *)MEMORY[0xAC18C0] + HashMap::ComputeIndex((int)&MEMORY[0xAC18C0], (int)&hWnd));
    if ( v9 )
    {
      while ( *(HWND *)v9 != hWnd )
      {
        v9 = *(_DWORD *)(v9 + 8);
        if ( !v9 )
          goto LABEL_12;
      }
      v10 = (HWND *)(v9 + 4);
      if ( v10 )
        v124 = *v10;
    }
  }
LABEL_12:
  if ( MEMORY[0xAC1B4C] )
  {
    for ( i = *((_DWORD *)MEMORY[0xAC1B48] + HashMap::ComputeIndex((int)&MEMORY[0xAC1B48], (int)&hWnd));
          i;
          i = *(_DWORD *)(i + 8) )
    {
      if ( *(HWND *)i == hWnd )
        break;
    }
  }
  if ( v4 == 261 && v7 == (HWND)9 )
    SendMessageA(g_hWnd, 0x105u, 9u, v6);
  v119 = 0;
  v136 = 0;
  j = (HWND)1;
  v131 = 0;
  v12 = 128;
  if ( (MEMORY[0xAC461C] & 1) == 0 )
  {
    MEMORY[0xAC1878] = 0.2;
    MEMORY[0xAC461C] |= 1u;
    MEMORY[0xAC1880] = 0.8;
    MEMORY[0xAC1888] = 128;
    v13 = 0;
    do
    {
      ++v13;
      v12 >>= 1;
    }
    while ( v12 );
    MEMORY[0xAC1868] = 0;
    MEMORY[0xAC1864] = v13 - 1;
    MEMORY[0xAC185C] = 0;
    MEMORY[0xAC186C] = 0;
    MEMORY[0xAC1860] = 1 << (v13 - 1);
    MEMORY[0xAC1858] = __2_YAPAXI_Z(4 * (1 << (v13 - 1)));
    memset(MEMORY[0xAC1858], 0, 4 * MEMORY[0xAC1860]);
    MEMORY[0xAC1870] = (int (__thiscall *)(_DWORD))ComboBoxOwnerDraw::GetWidthHeight;
    atexit(sub_612930);
  }
  v133 = hWnd;
  v132 = v4;
  ScreenDialogToClient(hWnd, &v144);
  GetWindowRect(hWnd, &Rect);
  v138 = Rect.left - v144.left;
  v139 = Rect.top - v144.top;
  if ( (MEMORY[0xAC461C] & 2) == 0 )
  {
    MEMORY[0xAC1DE0] = 0;
    MEMORY[0xAC461C] |= 2u;
    MEMORY[0xAC1DE4] = 0;
    MEMORY[0xAC1DE8] = 0;
    atexit(sub_612910);
  }
  if ( MEMORY[0xAC1DE0] )
  {
    v14 = MEMORY[0xAC1DE0] - 1;
    if ( MEMORY[0xAC1DE0] - 1 >= 0 && v14 < MEMORY[0xAC1DE0] )
      v8 = (HWND)*((_DWORD *)MEMORY[0xAC1DE8] + v14);
    v15 = 0;
    v16 = GetParent(hWnd) == 0;
    if ( GetWindowLongA(hWnd, -12) <= 0 )
      v16 = 1;
    Parent = hWnd;
    if ( hWnd )
    {
      while ( Parent != v8 )
      {
        Parent = GetParent(Parent);
        if ( !Parent )
          goto LABEL_36;
      }
      v16 = 1;
    }
LABEL_36:
    if ( Msg < 0x200 || Msg > 0x209 )
      v15 = 1;
    if ( Msg >= 0xA0 && Msg <= 0xA9 )
      v15 = 0;
    if ( Msg >= 0x100 && Msg <= 0x108 )
      v15 = 0;
    if ( Msg == 261 || Msg == 260 || Msg == 274 || Msg == 262 )
      v15 = 1;
    if ( Msg == 1179 || Msg == 275 || Msg == 1197 )
      v15 = 0;
    if ( !v16 && !v15 )
      return 0;
  }
  v18 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1858] + (MEMORY[0xAC1870](&v132) & ((1 << MEMORY[0xAC1864]) - 1)));
  if ( v18 )
  {
    while ( v133 != (HWND)v18[1] || v132 != *v18 )
    {
      v18 = (_DWORD *)v18[3];
      if ( !v18 )
        goto LABEL_68;
    }
    v19 = Msg;
    if ( Msg != 273 && Msg != 260 && Msg != 261 && Msg != 274 && Msg != 262 )
      return 0;
  }
  else
  {
LABEL_68:
    v19 = Msg;
  }
  HashTable::RemoveAndResize(&v132, &v122);
  v20 = (UINT *)__2_YAPAXI_Z(0x10u);
  *v20 = v132;
  v20[1] = (UINT)v133;
  *((_BYTE *)v20 + 8) = 1;
  v20[3] = 0;
  v21 = MEMORY[0xAC1870](&v132) & ((1 << MEMORY[0xAC1864]) - 1);
  v22 = *((_DWORD *)MEMORY[0xAC1858] + v21);
  *((_DWORD *)MEMORY[0xAC1858] + v21) = v20;
  if ( v22 )
    v20[3] = v22;
  v128 = (unsigned int)++MEMORY[0xAC185C];
  LODWORD(v128) = MEMORY[0xAC1860];
  if ( (double)(unsigned int)MEMORY[0xAC185C] / (double)MEMORY[0xAC1860] >= MEMORY[0xAC1880] )
    ComboBoxOwnerDraw::SortItems(&MEMORY[0xAC1858]);
  GetClientRect(hWnd, &v147);
  ScreenDialogToClient(hWnd, &rcSrc1);
  v24 = MEMORY[0xA8ED80];
  v123 = 0;
  if ( v19 == 15 )
  {
    v123 = 1;
    if ( !MEMORY[0xA8ED80] )
    {
      ValidateRect(hWnd, 0);
      HashTable::RemoveAndResize(&v132, &v122);
      return 0;
    }
  }
  if ( MEMORY[0xA8ED80] == 1 && !MEMORY[0x833678] )
  {
    InvalidateRect(g_hWnd, 0, 0);
    v24 = MEMORY[0xA8ED80];
  }
  MEMORY[0x833678] = v24;
  if ( v123 )
  {
    ++MEMORY[0xAC48DC];
    GetUpdateRect(hWnd, &v142, 0);
    v23 = rcSrc1.top + v142.bottom;
    v142.left += rcSrc1.left;
    v142.right += rcSrc1.left;
    v142.top += rcSrc1.top;
    v142.bottom += rcSrc1.top;
  }
  v25 = 0;
  v26 = 0;
  v137 = hWnd;
  v135 = 0;
  if ( MEMORY[0xAC1B04] )
  {
    v27 = MEMORY[0xAC1B18](&v137);
    v23 = MEMORY[0xAC1B0C];
    v28 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (v27 & ((1 << MEMORY[0xAC1B0C]) - 1)));
    if ( v28 )
    {
      v23 = (int)v137;
      while ( *v28 != v137 )
      {
        v28 = (HWND *)v28[129];
        if ( !v28 )
          goto LABEL_88;
      }
      v26 = v28 + 1;
      v135 = v28 + 1;
    }
  }
LABEL_88:
  switch ( Msg )
  {
    case 0x4A0u:
      v119 = v26 && v26[3];
      goto LABEL_391;
    case 0x49Fu:
      if ( v26 )
      {
        StockObject = GetStockObject(13);
        v30 = (HDC)lParam;
        v31 = SelectObject((HDC)lParam, StockObject);
        v26[122] = v31;
        SelectObject(v30, v31);
        v26[123] = GetBkMode(v30);
        v26[124] = GetBkColor(v30);
        v26[125] = GetTextColor(v30);
        v119 = 1;
        goto LABEL_391;
      }
      break;
    case 0x49Eu:
      if ( v26 )
      {
        v32 = (HDC)lParam;
        SelectObject((HDC)lParam, (HGDIOBJ)v26[122]);
        SetBkMode(v32, v26[123]);
        SetBkColor(v32, v26[124]);
        SetTextColor(v32, v26[125]);
        v119 = 1;
        goto LABEL_391;
      }
      break;
    case 0x49Du:
      if ( v26 )
      {
        v33 = lParam;
        v34 = v26[8];
        v35 = v26[3];
        v26[8] = lParam;
        v36 = v26 + 3;
        v119 = v34;
        if ( v35 )
        {
          if ( MEMORY[0xAC1B04] )
          {
            v37 = MEMORY[0xAC1B18](v36);
            v23 = MEMORY[0xAC1B0C];
            v38 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (v37 & ((1 << MEMORY[0xAC1B0C]) - 1)));
            if ( v38 )
            {
              v39 = *v36;
              while ( *v38 != v39 )
              {
                v38 = (_DWORD *)v38[129];
                if ( !v38 )
                  goto LABEL_373;
              }
              v40 = v38 + 1;
              if ( v40 )
                v40[8] = v33;
            }
          }
        }
        goto LABEL_373;
      }
      break;
    case 0x4A9u:
      v23 = MEMORY[0xAC1DE0];
      v41 = MEMORY[0xAC1DE8];
      v42 = 0;
      v43 = MEMORY[0xAC1DE0] - 1;
      v121 = 0;
      if ( MEMORY[0xAC1DE0] - 1 >= 0 && v43 < MEMORY[0xAC1DE0] )
      {
        v42 = (HWND)*((_DWORD *)MEMORY[0xAC1DE8] + v43);
        v121 = v42;
      }
      v119 = (LRESULT)v42;
      v124 = hWnd;
      if ( wParam )
        v124 = wParam;
      v44 = MEMORY[0xAC1DE4];
      j = 0;
      v126 = 0;
      if ( MEMORY[0xAC1DE0] > 0 )
      {
        do
        {
          if ( v25 >= 0 && v25 < v23 )
            v121 = (HWND)v41[v25];
          if ( v121 == v124 )
          {
            v45 = v25;
            if ( v23 )
            {
              if ( v25 < 0 )
                v45 = 0;
              if ( v45 >= v23 )
                v45 = v23 - 1;
              memcpy(&v41[v45], &v41[v45 + 1], 4 * (v23 + 0x3FFFFFFF * (v45 + 1)));
              v44 = MEMORY[0xAC1DE4];
              v23 = MEMORY[0xAC1DE0] - 1;
              MEMORY[0xAC1DE0] = v23;
              if ( 3 * v23 > MEMORY[0xAC1DE4] )
                goto LABEL_134;
              v46 = MEMORY[0xAC1DE4] / 2;
              if ( MEMORY[0xAC1DE4] / 2 < 10 )
                v46 = 10;
              if ( v46 >= MEMORY[0xAC1DE4] )
              {
LABEL_134:
                v41 = MEMORY[0xAC1DE8];
              }
              else
              {
                v47 = __2_YAPAXI_Z(4 * v46);
                v48 = MEMORY[0xAC1DE8];
                v41 = v47;
                if ( MEMORY[0xAC1DE8] )
                {
                  qmemcpy(v47, MEMORY[0xAC1DE8], 4 * MEMORY[0xAC1DE0]);
                  v48 = MEMORY[0xAC1DE8];
                }
                __3_YAXPAX_Z(v48);
                v23 = MEMORY[0xAC1DE0];
                v25 = (int)v126;
                v44 = v46;
                MEMORY[0xAC1DE8] = v41;
                MEMORY[0xAC1DE4] = v46;
              }
            }
          }
          else
          {
            v126 = (HWND)++v25;
          }
          j = (HWND)((char *)j + 1);
        }
        while ( (int)j < v23 );
      }
      if ( lParam )
      {
        v49 = v23;
        if ( v23 >= v44 )
        {
          ComboBoxOwnerDraw::GrowBuffer(&MEMORY[0xAC1DE0]);
          v23 = MEMORY[0xAC1DE0];
          if ( MEMORY[0xAC1DE0] >= MEMORY[0xAC1DE4] )
          {
            ComboBoxOwnerDraw::GrowBuffer(&MEMORY[0xAC1DE0]);
            v23 = MEMORY[0xAC1DE0];
          }
          if ( v49 >= v23 )
          {
            v41 = MEMORY[0xAC1DE8];
          }
          else
          {
            memcpy(
              (char *)MEMORY[0xAC1DE8] + 4 * v49 + 4,
              (char *)MEMORY[0xAC1DE8] + 4 * v49,
              4 * (v23 + 0x3FFFFFFF * v49));
            v41 = MEMORY[0xAC1DE8];
            v23 = MEMORY[0xAC1DE0];
          }
        }
        v50 = (HWND *)&v41[v49];
        if ( v50 )
        {
          *v50 = v124;
          v23 = MEMORY[0xAC1DE0];
        }
        MEMORY[0xAC1DE0] = v23 + 1;
        MEMORY[0xAC48E8] = 1;
        SetWindowPos(v124, 0, 0, 0, 0, 0, 3u);
        MEMORY[0xAC48E8] = 0;
      }
      goto LABEL_391;
  }
  v23 = MEMORY[0xAC1DE0];
  if ( !MEMORY[0xAC1DE0] )
  {
LABEL_184:
    v61 = Msg;
    if ( hWnd != (HWND)MEMORY[0xAC1DD4] || Msg != 130 && Msg != 24 && Msg != 8 || !MEMORY[0xAC1DCC] )
    {
LABEL_195:
      switch ( v61 )
      {
        case 0x14u:
          v119 = 1;
          goto LABEL_391;
        case 7u:
          if ( v124 == (HWND)TabControl::WndProc || v124 == (HWND)Options::DialogProc )
            SetFocus(wParam);
          if ( !v26 )
            goto LABEL_301;
          if ( !v26[14] )
          {
            Render_Draw_777E00();
            v26[14] = 1;
          }
          break;
        case 8u:
          v26[14] = 0;
          break;
        default:
          if ( v61 == 24 && !wParam )
          {
            if ( !v26 )
            {
LABEL_301:
              v62 = (wchar_t *)lParam;
              goto LABEL_302;
            }
            v26[127] = 0;
          }
          break;
      }
      if ( v26 )
      {
        switch ( v61 )
        {
          case 0x49Cu:
            v119 = v26[5];
            v26[5] = lParam;
            goto LABEL_391;
          case 0x4AAu:
            v23 = v26[6];
            v119 = v23;
            v26[6] = lParam;
            goto LABEL_391;
          case 0x49Au:
            v23 = lParam;
            v119 = v26[9];
            v26[9] = lParam;
            goto LABEL_391;
        }
        if ( v26[9] && (v61 == 275 || v61 >= 0x200 && v61 <= 0x209) )
        {
          GetWindowRect(hWnd, &v141);
          WindowFromPoint(*(POINT *)&v141.left);
        }
      }
      switch ( v61 )
      {
        case 0xCu:
          j = 0;
          break;
        case 0xDu:
          j = 0;
          v119 = 0;
          break;
        case 0x189u:
          j = 0;
          v119 = 0;
          break;
        case 0x143u:
        case 0x14Cu:
        case 0x158u:
        case 0x14Du:
        case 0x14Au:
        case 0x148u:
        case 0x180u:
        case 0x18Fu:
        case 0x1A2u:
        case 0x18Cu:
        case 0x181u:
          j = 0;
          v119 = -1;
          break;
      }
      if ( v26 )
      {
        switch ( v61 )
        {
          case 0x4CEu:
            v23 = v26[11];
            j = 0;
            v119 = v23 == 0;
            goto LABEL_301;
          case 0x4B5u:
            v62 = (wchar_t *)lParam;
            if ( lParam )
            {
              *(_BYTE *)lParam = 0;
              v63 = (char *)v26[10];
              if ( v63 )
              {
                v64 = wParam;
                CopyWideToChar(v62, v63, (int)wParam);
                if ( v64 )
                  *((_BYTE *)v62 + (_DWORD)v64 - 1) = 0;
              }
            }
            goto LABEL_302;
          case 0x4B3u:
            v62 = (wchar_t *)lParam;
            if ( lParam )
            {
              *(_WORD *)lParam = 0;
              v65 = (const wchar_t *)v26[10];
              if ( v65 )
              {
                v66 = (int)wParam;
                wcsncpy(v62, v65, (size_t)wParam);
                if ( v66 > 0 )
                {
                  v23 = v66;
                  v62[v66 - 1] = 0;
                }
              }
            }
            goto LABEL_302;
          case 0x4EBu:
            v62 = (wchar_t *)lParam;
            v26[20] = lParam;
            goto LABEL_302;
          case 0x4B4u:
            if ( v26[10] )
            {
              __3_YAXPAX_Z((void *)v26[10]);
              v26[10] = 0;
            }
            v62 = (wchar_t *)lParam;
            if ( lParam && *(_BYTE *)lParam )
            {
              v67 = (wchar_t *)__2_YAPAXI_Z(2 * strlen((const char *)lParam) + 2);
              v26[10] = v67;
              swprintf(v67, (const size_t)MEMORY[0x835874], v62);
            }
            v26[11] = 1;
            goto LABEL_302;
          case 0x4D1u:
            v23 = (int)wParam;
            v119 = v26[12];
            v26[12] = wParam;
            j = 0;
            goto LABEL_301;
          case 0x4B2u:
            v68 = (const wchar_t *)v26[10];
            v62 = (wchar_t *)lParam;
            v69 = v68 || lParam;
            v70 = !v68 && lParam;
            v71 = v68 && !lParam;
            v122 = v70 || v71 || v69 && wcscmp(v68, (const wchar_t *)lParam);
            if ( v26[10] )
            {
              __3_YAXPAX_Z((void *)v26[10]);
              v26[10] = 0;
            }
            if ( v62 && *v62 )
            {
              v72 = wcslen(v62);
              v73 = (wchar_t *)__2_YAPAXI_Z(2 * v72 + 2);
              v26[10] = v73;
              wcscpy(v73, v62);
            }
            v74 = v122;
            v26[11] = 0;
            if ( v74 && v26[28] == 1 && *((_BYTE *)v26 + 168) )
            {
              KillTimer(hWnd, 0);
              *((_BYTE *)v26 + 168) = 0;
              SendMessageA(hWnd, 0x4EEu, 0, 0);
            }
LABEL_302:
            if ( !v123 || !v26 )
            {
              if ( !j )
                goto LABEL_376;
              goto LABEL_373;
            }
            if ( v26[8] )
            {
              ValidateRect(hWnd, 0);
              v83 = CallWindowProcA((WNDPROC)v124, hWnd, 0x4A5u, (WPARAM)wParam, (LPARAM)v62);
              goto LABEL_375;
            }
            *(_QWORD *)&rcSrc2.left = MEMORY[0xAC1CB8];
            rcSrc2.right = DWORD2(MEMORY[0xAC1CB8]) + MEMORY[0xAC1CB8] + 1;
            rcSrc2.bottom = HIDWORD(MEMORY[0xAC1CB8]) + DWORD1(MEMORY[0xAC1CB8]) + 1;
            if ( MEMORY[0xAC48DC] == 1
              && IntersectRect(&rcDst, &rcSrc1, &rcSrc2)
              && MEMORY[0xAC1DCC]
              && MEMORY[0xAC1DD0] != 1
              && MEMORY[0xAC1CC8] )
            {
              v128 = MEMORY[0xAC1CB8];
              v130 = HIDWORD(MEMORY[0xAC1CB8]);
              v127.bottom = HIDWORD(MEMORY[0xAC1CB8]);
              Block = (void *)DWORD2(MEMORY[0xAC1CB8]);
              v127.left = 0;
              v127.top = 0;
              v127.right = DWORD2(MEMORY[0xAC1CB8]);
              (*(void (__thiscall **)(int, __int64 *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308]
                                                                                         + 8))(
                MEMORY[0x887308],
                &v128,
                MEMORY[0xAC1CC8],
                &v127,
                0,
                1);
              MEMORY[0xAC1DD0] = 1;
              v136 = 1;
            }
            if ( MEMORY[0x83367C] >= rcSrc1.left )
              MEMORY[0x83367C] = rcSrc1.left;
            if ( MEMORY[0x833680] >= rcSrc1.top )
              MEMORY[0x833680] = rcSrc1.top;
            if ( MEMORY[0xAC48E0] <= rcSrc1.right )
              MEMORY[0xAC48E0] = rcSrc1.right;
            if ( MEMORY[0xAC48E4] <= rcSrc1.bottom )
              MEMORY[0xAC48E4] = rcSrc1.bottom;
            v84 = hWnd;
            for ( j = hWnd; v84; j = v84 )
            {
              v85 = GetWindowLongA(v84, 4) == 0;
              v84 = j;
              if ( !v85 )
                break;
              v84 = GetParent(j);
            }
            v86 = 0;
            if ( v84 )
            {
              if ( MEMORY[0xAC1B04] )
              {
                v87 = MEMORY[0xAC1B18](&j) & ((1 << MEMORY[0xAC1B0C]) - 1);
                v84 = j;
                v88 = *((_DWORD *)MEMORY[0xAC1B00] + v87);
                if ( v88 )
                {
                  while ( *(HWND *)v88 != j )
                  {
                    v88 = *(_DWORD *)(v88 + 516);
                    if ( !v88 )
                      goto LABEL_330;
                  }
                  v86 = v88 + 4;
                }
              }
            }
LABEL_330:
            if ( v84 == hWnd )
            {
              if ( *(int *)(v86 + 508) < 1 )
              {
                v89 = 1;
                v131 = 1;
                goto LABEL_335;
              }
              v89 = *(_DWORD *)(v86 + 508);
            }
            else
            {
              if ( !v86 )
              {
                v89 = v131;
LABEL_350:
                ValidateRect(hWnd, 0);
                v119 = 1;
LABEL_364:
                v98 = j;
                if ( v89 > 0 )
                {
                  while ( 1 )
                  {
                    v23 = (int)hWnd;
                    if ( hWnd != j && MEMORY[0xAC48DC] != 1 )
                      break;
                    if ( !v98 )
                      break;
                    Window = GetWindow(v98, 3u);
                    v98 = Window;
                    if ( !Window )
                      break;
                    if ( GetWindowLongA(Window, 4) )
                    {
                      ScreenDialogToClient(v98, &v146);
                      if ( IntersectRect(&rcDst, &rcSrc1, &v146) )
                      {
                        InvalidateRect(v98, 0, 0);
                        UpdateWindow(v98);
                        goto LABEL_376;
                      }
                    }
                  }
                }
                goto LABEL_376;
              }
              v89 = *(_DWORD *)(v86 + 508);
            }
            v131 = v89;
            if ( v89 < 1 )
              goto LABEL_350;
LABEL_335:
            v119 = CallWindowProcA((WNDPROC)v124, hWnd, Msg, (WPARAM)wParam, lParam);
            if ( v86 )
              *(_DWORD *)(v86 + 508) = v89;
            v90 = 0;
            v128 = 0;
            Block = 0;
            EnumChildWindows(hWnd, (WNDENUMPROC)AddDynamicVector, (LPARAM)&v128);
            v91 = 0;
            v92 = 0;
            v93 = v128;
            v121 = 0;
            if ( (int)v128 <= 0 )
              goto LABEL_433;
            do
            {
              if ( v90 >= 0 && v90 < v93 )
              {
                v91 = (HWND)*((_DWORD *)Block + v90);
                v121 = v91;
              }
              v94 = 0;
              if ( MEMORY[0xAC1B4C] )
              {
                v95 = MEMORY[0xAC1B60](&v121);
                v91 = v121;
                v96 = *((_DWORD *)MEMORY[0xAC1B48] + (v95 & ((1 << MEMORY[0xAC1B54]) - 1)));
                if ( v96 )
                {
                  while ( *(HWND *)v96 != v121 )
                  {
                    v96 = *(_DWORD *)(v96 + 8);
                    if ( !v96 )
                      goto LABEL_353;
                  }
                  v97 = (HWND (__userpurge **)@<eax>(int@<ebx>, int@<ebp>, int@<edi>, int@<esi>, HWND, UINT, WPARAM, unsigned int))(v96 + 4);
                  if ( v97 )
                    v94 = *v97;
                }
              }
LABEL_353:
              if ( v94 == GameScreen::DlgProc )
              {
                v92 = v91;
              }
              else
              {
                InvalidateRect(v91, 0, 0);
                UpdateWindow(v121);
                v91 = v121;
              }
              v93 = v128;
              ++v90;
            }
            while ( v90 < (int)v128 );
            if ( v92 )
            {
              InvalidateRect(v92, 0, 0);
              UpdateWindow(v92);
            }
            else
            {
LABEL_433:
              if ( MEMORY[0xAC48C0] )
              {
                if ( (HWND)MEMORY[0xAC48C4] == j )
                {
                  ScreenDialogToClient(MEMORY[0xAC48C0], &v141);
                  if ( IntersectRect(&v127, &rcSrc1, &v141) )
                  {
                    InvalidateRect(MEMORY[0xAC48C0], 0, 0);
                    UpdateWindow(MEMORY[0xAC48C0]);
                  }
                }
              }
            }
            LODWORD(v128) = 0;
            __3_YAXPAX_Z(Block);
            v89 = v131;
            goto LABEL_364;
        }
      }
      if ( v61 == 512 )
      {
        v75 = GetParent(hWnd);
        LODWORD(v128) = GetDlgItem(v75, 1685);
        if ( (_DWORD)v128 )
        {
          unknown_libname_74(&v121);
          v76 = hWnd;
          v77 = SendMessageA(hWnd, 0x4E8u, 0, (unsigned __int16)lParam | (HIWORD(lParam) << 16));
          unknown_libname_74(&v127.right);
          v127.left = (LONG)v76;
          v127.top = v77;
          SendMessageA(v75, 0x4E9u, 0, (LPARAM)&v127);
          WideString::AssignFromPtr((wchar_t **)&v125, (const wchar_t **)&v127.right);
          DeleteAndZero::Alt((void **)&v127.right);
          WideString::AssignFromPtr((wchar_t **)&v126, (const wchar_t **)&v125);
          DeleteAndZero::Alt((void **)&v125);
          WideString::Reassign_Alt((void **)&v121, (const wchar_t **)&v126);
          DeleteAndZero::Alt((void **)&v126);
          v78 = WideString::GetOrEmpty((wchar_t **)&v121);
          if ( !wcscmp(v78, &MEMORY[0x887734]) )
          {
            v79 = hWnd;
            unknown_libname_74(&v127.right);
            v127.left = (LONG)v79;
            v127.top = -1;
            SendMessageA(v75, 0x4E9u, 0, (LPARAM)&v127);
            WideString::AssignFromPtr((wchar_t **)&v125, (const wchar_t **)&v127.right);
            DeleteAndZero::Alt((void **)&v127.right);
            WideString::Reassign_Alt((void **)&v121, (const wchar_t **)&v125);
            DeleteAndZero::Alt((void **)&v125);
            v80 = WideString::GetOrEmpty((wchar_t **)&v121);
            if ( !wcscmp(v80, &MEMORY[0x887734]) )
            {
              v81 = DlgSkirmishMenuProc(v75, hWnd);
              if ( v81 )
              {
                String = GetStringCSF((wchar_t *)v81, 0, MEMORY[0x833730], 1957);
                WideString::Assign((wchar_t **)&v126, String);
              }
              else
              {
                WideString::Assign((wchar_t **)&v126, &MEMORY[0x887734]);
              }
              WideString::Reassign_Alt((void **)&v121, (const wchar_t **)&v126);
              DeleteAndZero::Alt((void **)&v126);
            }
          }
          v82 = WideString::GetOrEmpty_Alt((wchar_t **)&v121);
          SendMessageA((HWND)v128, 0x4B2u, 0, (LPARAM)v82);
          DeleteAndZero::Alt((void **)&v121);
        }
      }
      goto LABEL_301;
    }
    if ( MEMORY[0xAC1DD0] != 1 )
    {
      if ( !MEMORY[0xAC1CC8] )
      {
LABEL_194:
        MEMORY[0xAC1CC8] = 0;
        MEMORY[0xAC1DCC] = 0;
        MEMORY[0xAC1DD0] = 0;
        goto LABEL_195;
      }
      v127 = (struct tagRECT)MEMORY[0xAC1CB8];
      rcSrc2.left = 0;
      rcSrc2.top = 0;
      *(_QWORD *)&rcSrc2.right = *((_QWORD *)&MEMORY[0xAC1CB8] + 1);
      (*(void (__thiscall **)(int, struct tagRECT *, int, RECT *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))(
        MEMORY[0x887308],
        &v127,
        MEMORY[0xAC1CC8],
        &rcSrc2,
        0,
        1);
      MEMORY[0xAC1DD0] = 1;
    }
    v23 = MEMORY[0xAC1CC8];
    if ( MEMORY[0xAC1CC8] )
      (**(void (__thiscall ***)(int, int))MEMORY[0xAC1CC8])(MEMORY[0xAC1CC8], 1);
    goto LABEL_194;
  }
  if ( Msg != 70 )
  {
    if ( Msg == 2 )
    {
      v54 = 0;
      v126 = 0;
      v125 = 0.0;
      v121 = 0;
      if ( MEMORY[0xAC1DE0] > 0 )
      {
        v55 = MEMORY[0xAC1DE8];
        do
        {
          if ( (int)v54 >= 0 && (int)v54 < v23 )
            v126 = (HWND)v55[(_DWORD)v54];
          if ( v126 == hWnd )
          {
            v56 = (int)v54;
            if ( v23 )
            {
              if ( (int)v54 < 0 )
                v56 = 0;
              if ( v56 >= v23 )
                v56 = v23 - 1;
              memcpy(&v55[v56], &v55[v56 + 1], 4 * (v23 + 0x3FFFFFFF * (v56 + 1)));
              v23 = MEMORY[0xAC1DE0] - 1;
              MEMORY[0xAC1DE0] = v23;
              if ( 3 * v23 > MEMORY[0xAC1DE4] )
                goto LABEL_182;
              v57 = MEMORY[0xAC1DE4] / 2;
              if ( MEMORY[0xAC1DE4] / 2 < 10 )
                v57 = 10;
              if ( v57 >= MEMORY[0xAC1DE4] )
              {
LABEL_182:
                v55 = MEMORY[0xAC1DE8];
              }
              else
              {
                v58 = __2_YAPAXI_Z(4 * v57);
                v59 = MEMORY[0xAC1DE8];
                v60 = v58;
                if ( MEMORY[0xAC1DE8] )
                {
                  qmemcpy(v58, MEMORY[0xAC1DE8], 4 * MEMORY[0xAC1DE0]);
                  v59 = MEMORY[0xAC1DE8];
                }
                __3_YAXPAX_Z(v59);
                v23 = MEMORY[0xAC1DE0];
                v54 = v121;
                v55 = v60;
                v26 = v135;
                MEMORY[0xAC1DE8] = v55;
                MEMORY[0xAC1DE4] = v57;
              }
            }
          }
          else
          {
            v54 = (HWND)((char *)v54 + 1);
            v121 = v54;
          }
          ++LODWORD(v125);
        }
        while ( SLODWORD(v125) < v23 );
      }
    }
    goto LABEL_184;
  }
  if ( MEMORY[0xAC48E8] == 1 || (v51 = 0, v52 = 0, MEMORY[0xAC1DE0] <= 0) )
  {
LABEL_373:
    if ( !v124 )
      goto LABEL_376;
    v83 = CallWindowProcA((WNDPROC)v124, hWnd, Msg, (WPARAM)wParam, lParam);
LABEL_375:
    v119 = v83;
LABEL_376:
    if ( Msg == 130 )
    {
      v125 = *(float *)&hWnd;
      if ( MEMORY[0xAC1B04] )
      {
        v100 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v125) & ((1 << MEMORY[0xAC1B0C]) - 1)));
        if ( v100 )
        {
          while ( *v100 != LODWORD(v125) )
          {
            v100 = (_DWORD *)v100[129];
            if ( !v100 )
              goto LABEL_385;
          }
          v101 = v100 + 1;
          if ( v100 != (_DWORD *)-4 )
          {
            v102 = (void (__thiscall ***)(_DWORD, int))v100[5];
            if ( v102 )
            {
              (**v102)(v102, 1);
              v101[4] = 0;
              --MEMORY[0xAC48B4];
            }
          }
        }
      }
LABEL_385:
      v124 = hWnd;
      DynamicArray::Resize(&MEMORY[0xAC1B48], (int *)&v124, &v128);
      memset(v148, 0, sizeof(v148));
      v148[26] = 11;
      v148[25] = aP0;
      v103 = __2_YAPAXI_Z(4u);
      if ( v103 )
        v104 = unknown_libname_74(v103);
      else
        v104 = 0;
      v148[15] = v104;
      v148[16] = 0;
      v148[23] = 0;
      v148[36] = -1;
      Dialog::BindGadgetData(&MEMORY[0xAC1B00], (int *)&v124, (char *)v148);
      Dialog::CleanupTree((int)v148);
      DynamicArray::Resize(&MEMORY[0xAC18C0], (int *)&v124, &v128);
      WindowLongA = (void *)GetWindowLongA(v124, -21);
      if ( WindowLongA )
        __3_YAXPAX_Z(WindowLongA);
      SetWindowLongA(v124, -21, 0);
      Object::RemoveObjectArray(v124);
    }
    goto LABEL_391;
  }
  v53 = (HWND *)MEMORY[0xAC1DE8];
  while ( 1 )
  {
    if ( v52 >= 0 && v52 < MEMORY[0xAC1DE0] )
      v51 = *v53;
    if ( v51 == hWnd )
      break;
    ++v52;
    ++v53;
    if ( v52 >= MEMORY[0xAC1DE0] )
      goto LABEL_373;
  }
  if ( v52 == MEMORY[0xAC1DE0] - 1 && *(_DWORD *)(lParam + 4) && (*(_BYTE *)(lParam + 24) & 4) == 0 )
  {
    v115 = hWnd;
    *(_DWORD *)(lParam + 4) = 0;
    InvalidateRect(v115, 0, 0);
    v119 = 0;
  }
  else
  {
    v116 = hWnd;
    *(_DWORD *)(lParam + 24) |= 0x204u;
    InvalidateRect(v116, 0, 0);
    v119 = 0;
  }
LABEL_391:
  if ( !MEMORY[0xAC185C] )
    goto LABEL_403;
  v128 = (unsigned int)(MEMORY[0xAC185C] - 1);
  LODWORD(v128) = MEMORY[0xAC1860];
  v125 = (double)(unsigned int)(MEMORY[0xAC185C] - 1) / (double)MEMORY[0xAC1860];
  v106 = ComboBoxOwnerDraw::ComputeMask(&v132);
  v107 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1858] + v106);
  if ( !v107 )
    goto LABEL_403;
  if ( (unsigned __int8)ComboBoxOwnerDraw::MatchDimensions(&v132) )
  {
    v118 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1858] + v106);
    v108 = v118[3];
    __3_YAXPAX_Z(v118);
    v109 = v125;
    *((_DWORD *)MEMORY[0xAC1858] + v106) = v108;
    --MEMORY[0xAC185C];
    if ( v109 > MEMORY[0xAC1878] )
      goto LABEL_403;
  }
  else
  {
    v110 = (_DWORD *)v107[3];
    if ( v110 )
    {
      while ( !(unsigned __int8)ComboBoxOwnerDraw::MatchDimensions(&v132) )
      {
        v107 = v110;
        v110 = (_DWORD *)v110[3];
        if ( !v110 )
          goto LABEL_401;
      }
      v107[3] = v110[3];
      --MEMORY[0xAC185C];
      __3_YAXPAX_Z(v110);
    }
LABEL_401:
    if ( v125 > MEMORY[0xAC1878] )
      goto LABEL_403;
  }
  ComboBoxOwnerDraw::SetCapacity(&MEMORY[0xAC1858]);
LABEL_403:
  v111 = v135;
  if ( v135 && v123 )
  {
    if ( GetWindowLongA(hWnd, 4) && MEMORY[0xAC48DC] > 1 )
      v111[127] = 2;
    if ( !--MEMORY[0xAC48DC] )
    {
      if ( !v111[8] && v131 >= 1 && !(unsigned __int8)Render_Draw_774070() )
      {
        v85 = v111[127] == 1;
        rcSrc2.left = MEMORY[0x83367C];
        rcSrc2.top = MEMORY[0x833680];
        rcSrc2.right = MEMORY[0xAC48E0] - MEMORY[0x83367C];
        rcSrc2.bottom = MEMORY[0xAC48E4] - MEMORY[0x833680];
        v127.left = MEMORY[0x83367C];
        v127.top = MEMORY[0x833680];
        v127.right = MEMORY[0xAC48E0] - MEMORY[0x83367C];
        v127.bottom = MEMORY[0xAC48E4] - MEMORY[0x833680];
        if ( v85 )
        {
          v111[127] = 2;
          if ( GetWindowLongA(hWnd, 4) && (unsigned __int8)SkirmishSetup::PlayButtonClickAnim(hWnd) )
            v111[127] = 3;
          v141.right = MEMORY[0xAC48E0] - MEMORY[0x83367C];
          v127.right = MEMORY[0xAC48E0] - MEMORY[0x83367C];
          v141.left = MEMORY[0x83367C];
          v141.top = MEMORY[0x833680];
          v141.bottom = MEMORY[0xAC48E4] - MEMORY[0x833680];
          v127.bottom = MEMORY[0xAC48E4] - MEMORY[0x833680];
          v127.left = v138 + MEMORY[0x83367C];
          v127.top = v139 + MEMORY[0x833680];
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 92))(MEMORY[0x887308], 0, 0);
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0);
          (*(void (__thiscall **)(int, struct tagRECT *, int, RECT *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))(
            MEMORY[0x887308],
            &v127,
            MEMORY[0x887310],
            &v141,
            0,
            1);
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]);
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887308] + 96))(MEMORY[0x887308]);
          v128 = 0;
          Block = 0;
          EnumChildWindows(hWnd, (WNDENUMPROC)AddDynamicVector, (LPARAM)&v128);
          v112 = 0;
          v113 = 0;
          for ( k = v128; v113 < (int)v128; k = v128 )
          {
            if ( v113 >= 0 && v113 < k )
              v112 = (HWND)*((_DWORD *)Block + v113);
            SendMessageA(v112, 0x4AFu, 0, 0);
            ++v113;
          }
          LODWORD(v128) = 0;
          __3_YAXPAX_Z(Block);
        }
        else
        {
          v127.right = MEMORY[0xAC48E0] - MEMORY[0x83367C];
          v127.bottom = MEMORY[0xAC48E4] - MEMORY[0x833680];
          v127.left = v138 + MEMORY[0x83367C];
          v127.top = v139 + MEMORY[0x833680];
          GetClassNameA(hWnd, ClassName, 128);
          if ( !strcmp(ClassName, MEMORY[0x83370C]) )
          {
            CubicBezierAdvance(-1);
            CubicBezierAdvance(-1);
          }
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887308] + 92))(MEMORY[0x887308], 0, 0);
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)MEMORY[0x887310] + 92))(MEMORY[0x887310], 0, 0);
          (*(void (__thiscall **)(int, struct tagRECT *, int, RECT *, _DWORD, int))(*(_DWORD *)MEMORY[0x887308] + 8))(
            MEMORY[0x887308],
            &v127,
            MEMORY[0x887310],
            &rcSrc2,
            0,
            1);
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887310] + 96))(MEMORY[0x887310]);
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887308] + 96))(MEMORY[0x887308]);
        }
      }
      MEMORY[0xAC48E0] = 0;
      MEMORY[0x83367C] = 0xFFFFFF;
      MEMORY[0x833680] = 0xFFFFFF;
      MEMORY[0xAC48E4] = 0;
    }
  }
  if ( v136 )
  {
    LOBYTE(v23) = 1;
    TriggerClass::FindByEventType(v23);
  }
  if ( Msg == 272 )
    return 0;
  else
    return v119;
}



// ==== 0x00612910  sub_612910  this=-  sig=ida-proto ====
void __cdecl sub_612910()
{
  MEMORY[0xAC1DE0] = 0; /*0x612915*/
  __3_YAXPAX_Z(MEMORY[0xAC1DE8]); /*0x612920*/
}


// ==== 0x00612930  sub_612930  this=-  sig=ida-proto ====
void __cdecl sub_612930()
{
  unsigned int v0; // eax
  unsigned int i; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  unsigned int v4; // ecx
  int *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax

  v0 = MEMORY[0xAC1860]; /*0x612930*/
  for ( i = 0; i < MEMORY[0xAC1860]; v0 = MEMORY[0xAC1860] ) /*0x61293d*/
  {
    v2 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1858] + i); /*0x612944*/
    while ( v2 ) /*0x612949*/
    {
      v3 = v2; /*0x61294b*/
      v2 = (_DWORD *)v2[3]; /*0x61294d*/
      __3_YAXPAX_Z(v3); /*0x612951*/
    }
    *((_DWORD *)MEMORY[0xAC1858] + i++) = 0; /*0x612964*/
  }
  v4 = MEMORY[0xAC1888]; /*0x612975*/
  MEMORY[0xAC185C] = 0; /*0x61297b*/
  if ( v0 > MEMORY[0xAC1888] ) /*0x612987*/
  {
    do /*0x612a3a*/
    {
      if ( MEMORY[0xAC186C] || v0 <= v4 ) /*0x61299d*/
        break; /*0x61299d*/
      v5 = (int *)MEMORY[0xAC1858]; /*0x6129a9*/
      v6 = v0; /*0x6129af*/
      MEMORY[0xAC1860] = v0 >> 1; /*0x6129b4*/
      --MEMORY[0xAC1864]; /*0x6129c0*/
      MEMORY[0xAC1858] = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6129d9*/
      memset(MEMORY[0xAC1858], 0, 4 * MEMORY[0xAC1860]); /*0x6129e1*/
      if ( v6 > 0 ) /*0x6129e3*/
      {
        v7 = v5; /*0x6129e5*/
        v8 = v6; /*0x6129e7*/
        do /*0x612a22*/
        {
          v9 = *v7; /*0x6129e9*/
          if ( *v7 ) /*0x6129e9*/
          {
            do /*0x612a1c*/
            {
              v10 = MEMORY[0xAC1870](v9) & ((1 << MEMORY[0xAC1864]) - 1); /*0x612a05*/
              v11 = *((_DWORD *)MEMORY[0xAC1858] + v10); /*0x612a0c*/
              *((_DWORD *)MEMORY[0xAC1858] + v10) = v9; /*0x612a0f*/
              v12 = *(_DWORD *)(v9 + 12); /*0x612a12*/
              *(_DWORD *)(v9 + 12) = v11; /*0x612a15*/
              v9 = v12; /*0x612a1a*/
            }
            while ( v12 ); /*0x612a1c*/
          }
          ++v7; /*0x612a1e*/
          --v8; /*0x612a21*/
        }
        while ( v8 ); /*0x612a22*/
      }
      __3_YAXPAX_Z(v5); /*0x612a25*/
      v4 = MEMORY[0xAC1888]; /*0x612a2a*/
      v0 = MEMORY[0xAC1860]; /*0x612a30*/
    }
    while ( MEMORY[0xAC1860] > (unsigned int)MEMORY[0xAC1888] ); /*0x612a3a*/
  }
  __3_YAXPAX_Z(MEMORY[0xAC1858]); /*0x612a46*/
}


// ==== 0x00612A60  sub_612A60  this=-  sig=csp ====
HGDIOBJ __stdcall sub_612A60(HWND hWnd, UINT Msg, HDC hdc, LPARAM lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // esi
  int v5; // eax
  HWND v6; // ecx
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  int v8; // eax
  HWND v9; // ecx
  HDC v10; // esi
  struct tagRECT v12; // [esp+4h] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  v4 = 0; /*0x612a69*/
  if ( MEMORY[0xAC1B4C] /*0x612a93*/
    && (v5 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
  {
    v6 = hWnd; /*0x612a95*/
    while ( *(HWND *)v5 != hWnd ) /*0x612a9b*/
    {
      v5 = *(_DWORD *)(v5 + 8); /*0x612a9d*/
      if ( !v5 ) /*0x612aa2*/
        goto LABEL_10; /*0x612aa2*/
    }
    v7 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v5 + 4); /*0x612aaa*/
    if ( v7 ) /*0x612aaf*/
      v4 = *v7; /*0x612ab1*/
  }
  else
  {
    v6 = hWnd; /*0x612ab5*/
  }
LABEL_10:
  ScreenDialogToClient(v6, &v12); /*0x612ab9*/
  GetClientRect(hWnd, &Rect); /*0x612acc*/
  if ( MEMORY[0xAC1B04] /*0x612aff*/
    && (v8 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
  {
    v9 = hWnd; /*0x612b01*/
    do /*0x612b11*/
    {
      if ( *(HWND *)v8 == hWnd ) /*0x612b07*/
        break; /*0x612b07*/
      v8 = *(_DWORD *)(v8 + 516); /*0x612b09*/
    }
    while ( v8 ); /*0x612b11*/
  }
  else
  {
    v9 = hWnd; /*0x612b15*/
  }
  if ( Msg != 307 ) /*0x612b22*/
    return (HGDIOBJ)CallWindowProcA(v4, v9, Msg, (WPARAM)hdc, lParam); /*0x612b5b*/
  v10 = hdc; /*0x612b2a*/
  SetTextColor(hdc, MEMORY[0xAC18A4]); /*0x612b30*/
  SetBkMode(v10, 1); /*0x612b39*/
  return GetStockObject(5); /*0x612b47*/
}


// ==== 0x006137D0  Dialog::TabControlPaint  this=Dialog  sig=csp ====
int __stdcall Dialog::TabControlPaint(int hWnd, int Msg, int wParam, int lParam)
{
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  int *v9; // eax
  int v10; // esi
  int v12; // eax
  int v13; // eax
  LRESULT (__stdcall *v14)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int v23; // edi
  int v24; // eax
  int v25; // esi
  int v26; // edi
  int v27; // eax
  int v28; // esi
  int v29; // edi
  int v30; // eax
  int v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // esi
  int v38; // edi
  int v39; // eax
  int v40; // ebp
  int v41; // ebp
  int i; // eax
  int v43; // edx
  char v44; // bl
  int v45; // eax
  int v46; // eax
  int v47; // ebp
  int v48; // edi
  int v49; // eax
  int v50; // esi
  int v51; // eax
  int v52; // edx
  int v53; // ebx
  int v54; // eax
  int v55; // esi
  int v56; // edi
  int v57; // eax
  int v58; // eax
  int v59; // esi
  int v60; // edi
  int v61; // edi
  int v62; // ebx
  int v63; // esi
  unsigned __int64 v64; // [esp+50h] [ebp-104h] BYREF
  int v65; // [esp+58h] [ebp-FCh]
  int v66; // [esp+5Ch] [ebp-F8h]
  unsigned __int64 Rect; // [esp+60h] [ebp-F4h] BYREF
  int Rect_8; // [esp+68h] [ebp-ECh]
  int Rect_12; // [esp+6Ch] [ebp-E8h]
  unsigned __int64 v70; // [esp+70h] [ebp-E4h] BYREF
  int v71; // [esp+78h] [ebp-DCh]
  int v72; // [esp+7Ch] [ebp-D8h]
  unsigned __int64 v73; // [esp+80h] [ebp-D4h] BYREF
  int v74; // [esp+88h] [ebp-CCh]
  int v75; // [esp+8Ch] [ebp-C8h]
  int v76; // [esp+90h] [ebp-C4h]
  _DWORD *v77; // [esp+94h] [ebp-C0h]
  int v78; // [esp+98h] [ebp-BCh]
  int v79; // [esp+9Ch] [ebp-B8h]
  int v80; // [esp+A0h] [ebp-B4h]
  int v81; // [esp+A4h] [ebp-B0h]
  int v82; // [esp+A8h] [ebp-ACh] BYREF
  int v83; // [esp+ACh] [ebp-A8h]
  int v84; // [esp+B0h] [ebp-A4h]
  int v85; // [esp+B4h] [ebp-A0h]
  int v86[4]; // [esp+B8h] [ebp-9Ch] BYREF
  _DWORD v87[4]; // [esp+C8h] [ebp-8Ch] BYREF
  int v88[2]; // [esp+D8h] [ebp-7Ch] BYREF
  int v89; // [esp+E0h] [ebp-74h]
  int v90; // [esp+E4h] [ebp-70h]
  _DWORD v91[7]; // [esp+E8h] [ebp-6Ch] BYREF
  char Buffer[80]; // [esp+104h] [ebp-50h] BYREF

  v4 = 0; /*0x6137e0*/
  v79 = 0; /*0x6137e4*/
  v77 = 0; /*0x6137e8*/
  if ( dword_A8ED54[52076] /*0x613815*/
    && (v5 = *(_DWORD **)(dword_A8ED54[52075]
                        + 4
                        * (((int (__thiscall *)(int *))dword_A8ED54[52081])(&hWnd)
                         & ((1 << SLOBYTE(dword_A8ED54[52078])) - 1)))) != 0 )
  {
    v6 = hWnd; /*0x613817*/
    while ( *v5 != hWnd ) /*0x613820*/
    {
      v5 = (_DWORD *)v5[129]; /*0x613822*/
      if ( !v5 ) /*0x61382a*/
        goto LABEL_9; /*0x61382a*/
    }
    v77 = v5 + 1; /*0x613835*/
  }
  else
  {
    v6 = hWnd; /*0x61383b*/
  }
LABEL_9:
  if ( dword_A8ED54[52094] ) /*0x613848*/
  {
    v7 = HashMap::ComputeIndex((int)&dword_A8ED54[52093], (int)&hWnd); /*0x613857*/
    v6 = hWnd; /*0x613862*/
    v8 = *(_DWORD **)(dword_A8ED54[52093] + 4 * v7); /*0x613869*/
    if ( v8 ) /*0x61386e*/
    {
      while ( *v8 != hWnd ) /*0x613872*/
      {
        v8 = (_DWORD *)v8[2]; /*0x613874*/
        if ( !v8 ) /*0x613879*/
          goto LABEL_16; /*0x613879*/
      }
      v9 = v8 + 1; /*0x613881*/
      if ( v9 ) /*0x613886*/
        v4 = *v9; /*0x613888*/
    }
  }
LABEL_16:
  v10 = Msg; /*0x61388a*/
  switch ( Msg ) /*0x613894*/
  {
    case 20: /*0x613894*/
      return 1; /*0x6138a4*/
    case 133: /*0x613894*/
      return 0; /*0x6138ba*/
    case 1175: /*0x613894*/
      ScreenDialogToClient(v6, v87); /*0x6138cc*/
      v12 = HashTable::Find(&dword_A8ED54[54973], g_Str_File_tab_tlu_pcx, 0); /*0x6138dc*/
      v13 = (unsigned __int16)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 128))(v12) - 1) << 16; /*0x6138f1*/
      LOBYTE(v13) = v13 | 0x59; /*0x6138f4*/
      ((void (__stdcall *)(int, int, _DWORD, int))SendMessageA)(hWnd, 4905, 0, v13); /*0x613905*/
      v6 = hWnd; /*0x61390b*/
LABEL_22:
      if ( v4 ) /*0x613914*/
        return ((int (__stdcall *)(int, int, int, int, int))CallWindowProcA)(v4, v6, v10, wParam, lParam); /*0x61392f*/
      return v79; /*0x613940*/
  }
  if ( Msg != 15 ) /*0x613946*/
    goto LABEL_22; /*0x613946*/
  ScreenDialogToClient(v6, &Rect); /*0x61394d*/
  v14 = SendMessageA; /*0x613959*/
  ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 4868, 0, 0); /*0x613967*/
  ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(hWnd, 4874, 0, v87); /*0x61397f*/
  ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(hWnd, 4874, 0, v87); /*0x613997*/
  v15 = HIDWORD(Rect) + v87[3] - v87[1] + 3; /*0x6139b2*/
  v70 = __PAIR64__(v15, Rect); /*0x6139ba*/
  v71 = Rect_8 - Rect; /*0x6139c4*/
  v72 = Rect_12 - v15; /*0x6139d1*/
  HIDWORD(Rect) = v15; /*0x6139d9*/
  SetupDialogRenderBuffer(&v70, hWnd, 0); /*0x6139e1*/
  ((void (__stdcall *)(int, _DWORD))ValidateRect)(hWnd, 0); /*0x6139ef*/
  v70 = Rect; /*0x613a07*/
  v71 = Rect_8 - Rect; /*0x613a1c*/
  v72 = Rect_12 - HIDWORD(Rect); /*0x613a20*/
  v16 = HashTable::Find(&dword_A8ED54[54973], aTabFmlPcx, 0); /*0x613a24*/
  v17 = v16; /*0x613a29*/
  if ( v16 ) /*0x613a2d*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 128))(v16); /*0x613a33*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 124))(v17); /*0x613a3d*/
    v64 = Rect; /*0x613a48*/
    v65 = v18; /*0x613a50*/
    v66 = Rect_12 - HIDWORD(Rect); /*0x613a6d*/
    Surface::TileBlit(&v64, MEMORY[0x87F7E8][7882], v17, 0, 0); /*0x613a71*/
  }
  v19 = HashTable::Find(&dword_A8ED54[54973], aTabFmrPcx, 0); /*0x613a81*/
  v20 = v19; /*0x613a86*/
  if ( v19 ) /*0x613a8a*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 128))(v19); /*0x613a90*/
    v65 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 124))(v20); /*0x613aa7*/
    LODWORD(v64) = Rect_8 - v65; /*0x613ab0*/
    HIDWORD(v64) = HIDWORD(Rect); /*0x613ab9*/
    v66 = Rect_12 - HIDWORD(Rect); /*0x613acc*/
    Surface::TileBlit(&v64, MEMORY[0x87F7E8][7882], v20, 0, 0); /*0x613ad0*/
  }
  v21 = HashTable::Find(&dword_A8ED54[54973], aTabFtmPcx, 0); /*0x613ae0*/
  v22 = v21; /*0x613ae5*/
  if ( v21 ) /*0x613ae9*/
  {
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 128))(v21); /*0x613af5*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 124))(v22); /*0x613afb*/
    v64 = Rect; /*0x613b0a*/
    v65 = Rect_8 - Rect; /*0x613b27*/
    v66 = v23; /*0x613b2b*/
    Surface::TileBlit(&v64, MEMORY[0x87F7E8][7882], v22, 0, 0); /*0x613b2f*/
  }
  v24 = HashTable::Find(&dword_A8ED54[54973], aTabFbmPcx, 0); /*0x613b3f*/
  v25 = v24; /*0x613b44*/
  if ( v24 ) /*0x613b48*/
  {
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 128))(v24); /*0x613b54*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x613b5a*/
    LODWORD(v64) = Rect; /*0x613b6b*/
    HIDWORD(v64) = Rect_12 - v26; /*0x613b77*/
    v65 = Rect_8 - Rect; /*0x613b88*/
    v66 = v26; /*0x613b8c*/
    Surface::TileBlit(&v64, MEMORY[0x87F7E8][7882], v25, 0, 0); /*0x613b90*/
  }
  v27 = HashTable::Find(&dword_A8ED54[54973], aTabFtlPcx, 0); /*0x613ba0*/
  v28 = v27; /*0x613ba5*/
  if ( v27 ) /*0x613ba9*/
  {
    v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 128))(v27); /*0x613bb5*/
    v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 124))(v28); /*0x613bbb*/
    v73 = Rect; /*0x613bca*/
    v64 = 0; /*0x613bdc*/
    v65 = v30; /*0x613be4*/
    v66 = v29; /*0x613be8*/
    v74 = v30; /*0x613bec*/
    v75 = v29; /*0x613bf0*/
    (*(void (__thiscall **)(_DWORD, unsigned __int64 *, int, unsigned __int64 *, _DWORD, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] /*0x613bfc*/
                                                                                             + 8))(
      MEMORY[0x87F7E8][7882],
      &v73,
      v28,
      &v64,
      0,
      1);
  }
  v31 = HashTable::Find(&dword_A8ED54[54973], aTabFtrPcx, 0); /*0x613c0f*/
  if ( v31 ) /*0x613c13*/
  {
    v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 128))(v31); /*0x613c23*/
    v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 124))(v31); /*0x613c25*/
    HIDWORD(v64) = HIDWORD(Rect); /*0x613c32*/
    LODWORD(v64) = Rect_8 - v33; /*0x613c36*/
    v73 = 0; /*0x613c48*/
    v74 = v33; /*0x613c50*/
    v75 = v32; /*0x613c54*/
    v65 = v33; /*0x613c58*/
    v66 = v32; /*0x613c5c*/
    (*(void (__thiscall **)(_DWORD, unsigned __int64 *, int, unsigned __int64 *, _DWORD, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] /*0x613c68*/
                                                                                             + 8))(
      MEMORY[0x87F7E8][7882],
      &v64,
      v31,
      &v73,
      0,
      1);
  }
  v34 = HashTable::Find(&dword_A8ED54[54973], aTabFblPcx, 0); /*0x613c7b*/
  if ( v34 ) /*0x613c7f*/
  {
    v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 128))(v34); /*0x613c8f*/
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 124))(v34); /*0x613c91*/
    LODWORD(v64) = Rect; /*0x613c9e*/
    HIDWORD(v64) = Rect_12 - v35; /*0x613ca8*/
    v73 = 0; /*0x613cb4*/
    v74 = v36; /*0x613cbc*/
    v75 = v35; /*0x613cc0*/
    v65 = v36; /*0x613cc4*/
    v66 = v35; /*0x613cc8*/
    (*(void (__thiscall **)(_DWORD, unsigned __int64 *, int, unsigned __int64 *, _DWORD, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] /*0x613cd4*/
                                                                                             + 8))(
      MEMORY[0x87F7E8][7882],
      &v64,
      v34,
      &v73,
      0,
      1);
  }
  v37 = HashTable::Find(&dword_A8ED54[54973], aTabFbrPcx, 0); /*0x613ce7*/
  if ( v37 ) /*0x613ceb*/
  {
    v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 128))(v37); /*0x613cfb*/
    v39 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 124))(v37); /*0x613cfd*/
    HIDWORD(v64) = Rect_12 - v38; /*0x613d0c*/
    LODWORD(v64) = Rect_8 - v39; /*0x613d10*/
    v73 = 0; /*0x613d22*/
    v74 = v39; /*0x613d2a*/
    v75 = v38; /*0x613d2e*/
    v65 = v39; /*0x613d32*/
    v66 = v38; /*0x613d36*/
    (*(void (__thiscall **)(_DWORD, unsigned __int64 *, int, unsigned __int64 *, _DWORD, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] /*0x613d42*/
                                                                                             + 8))(
      MEMORY[0x87F7E8][7882],
      &v64,
      v37,
      &v73,
      0,
      1);
  }
  v40 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 4875, 0, 0); /*0x613d56*/
  v78 = v40; /*0x613d63*/
  ScreenDialogToClient(hWnd, &Rect); /*0x613d67*/
  v41 = v40 + 1; /*0x613d6c*/
  v76 = v41; /*0x613d6d*/
LABEL_43:
  for ( i = ((int (__stdcall *)(int, int, int, int *))v14)(hWnd, 4874, v41, &v82); /*0x613d84*/
        ;
        i = ((int (__stdcall *)(int, int, int, int *))SendMessageA)(hWnd, 4874, v61 + 1, &v82) )
  {
    if ( !i ) /*0x613d88*/
    {
      v76 = 0; /*0x614161*/
      v41 = 0; /*0x614169*/
      goto LABEL_43; /*0x61416d*/
    }
    v43 = hWnd; /*0x613d9c*/
    memset(v91, 0, sizeof(v91)); /*0x613da3*/
    v91[3] = &dword_A8ED54[52115]; /*0x613db3*/
    v91[4] = 64; /*0x613dc7*/
    strcpy((char *)&dword_A8ED54[52115], aTitle); /*0x613dd5*/
    v91[0] = 1; /*0x613dd9*/
    ((void (__stdcall *)(int, int, int, _DWORD *))v14)(v43, 4869, v41, v91); /*0x613df8*/
    v44 = 100; /*0x613dfa*/
    if ( v41 == v78 ) /*0x613e00*/
      v44 = 117; /*0x613e02*/
    v45 = v82; /*0x613e0b*/
    if ( v82 >= 6 ) /*0x613e0d*/
      v45 = 6; /*0x613e0f*/
    LODWORD(v70) = Rect + v82 - v45; /*0x613e22*/
    HIDWORD(v70) = v83 + HIDWORD(Rect); /*0x613e2f*/
    v46 = v82; /*0x613e33*/
    if ( v82 >= 6 ) /*0x613e35*/
      v46 = 6; /*0x613e37*/
    v72 = v85 - v83; /*0x613e4c*/
    v71 = v84 + v46 - v82; /*0x613e5a*/
    v47 = v44; /*0x613e63*/
    v48 = HashTable::Find(&dword_A8ED54[54973], g_Str_File_tab_tlu_pcx, 0); /*0x613e74*/
    sprintf(Buffer, "tab_tm%c.pcx", v44); /*0x613e76*/
    v49 = HashTable::Find(&dword_A8ED54[54973], Buffer, 0); /*0x613e8d*/
    v50 = v49; /*0x613e92*/
    if ( v49 ) /*0x613e96*/
    {
      v80 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 128))(v49); /*0x613ea2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 124))(v50); /*0x613eaa*/
      v51 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 124))(v48); /*0x613eb1*/
      v52 = *(_DWORD *)v48; /*0x613eb8*/
      v53 = v71 - 2 * v51; /*0x613ebc*/
      v81 = HIDWORD(v70); /*0x613ec4*/
      v54 = (*(int (__thiscall **)(int))(v52 + 124))(v48); /*0x613ec8*/
      LODWORD(v73) = v70 + v54; /*0x613edb*/
      HIDWORD(v73) = v81; /*0x613ee5*/
      v75 = v80; /*0x613ef0*/
      v74 = v53; /*0x613efb*/
      Surface::TileBlit(&v73, MEMORY[0x87F7E8][7882], v50, 0, 0); /*0x613eff*/
    }
    sprintf(Buffer, "tab_tl%c.pcx", v47); /*0x613f12*/
    v55 = HashTable::Find(&dword_A8ED54[54973], Buffer, 0); /*0x613f2e*/
    if ( v55 ) /*0x613f32*/
    {
      v56 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 128))(v55); /*0x613f46*/
      v57 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 124))(v55); /*0x613f48*/
      v64 = v70; /*0x613f53*/
      v65 = v57; /*0x613f5d*/
      v66 = v56; /*0x613f74*/
      Surface::BlitTransparent( /*0x613fb5*/
        (int *)&v64,
        MEMORY[0x87F7E8][7882],
        v55,
        (255 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
      | (0xFFu >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172])));
    }
    sprintf(Buffer, "tab_tr%c.pcx", v47); /*0x613fc8*/
    v58 = HashTable::Find(&dword_A8ED54[54973], Buffer, 0); /*0x613fdf*/
    v59 = v58; /*0x613fe4*/
    if ( v58 ) /*0x613fe8*/
    {
      v60 = (*(int (__thiscall **)(int))(*(_DWORD *)v58 + 128))(v58); /*0x613ff8*/
      v89 = (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 124))(v59); /*0x61400b*/
      v88[0] = v70 + v71 - v89; /*0x614018*/
      v88[1] = HIDWORD(v70); /*0x61402a*/
      v90 = v60; /*0x61403b*/
      Surface::BlitTransparent( /*0x614082*/
        v88,
        MEMORY[0x87F7E8][7882],
        v59,
        (255 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
      | (0xFFu >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172])));
    }
    if ( v91[3] ) /*0x614090*/
      strcpy((char *)&dword_A8ED54[52115], (const char *)v91[3]); /*0x6140a9*/
    v61 = v76; /*0x6140ba*/
    v62 = v78; /*0x6140be*/
    v63 = dword_A8ED54[54829]; /*0x6140c2*/
    v86[0] = v70; /*0x6140ce*/
    v86[2] = v70 + v71; /*0x6140d2*/
    v86[1] = HIDWORD(v70) + 6; /*0x6140e4*/
    v86[3] = HIDWORD(v70) + v72; /*0x6140e8*/
    if ( v76 == v78 ) /*0x6140ef*/
      v63 = dword_A8ED54[51924]; /*0x6140f1*/
    swprintf((#72 *const)&dword_A8ED54[54838], g_Str_Trace__hs); /*0x614106*/
    PrintFontLayout( /*0x614131*/
      MEMORY[0x87F7E8][7882],
      (unsigned __int16 *)&dword_A8ED54[54838],
      v86,
      (_DWORD *)v77[25],
      v63,
      5,
      12,
      0,
      0,
      0);
    ((void (__stdcall *)(int, int *))ValidateRect)(hWnd, &v82); /*0x614149*/
    if ( v61 == v62 ) /*0x61414d*/
      break; /*0x61414d*/
    v14 = SendMessageA; /*0x61414f*/
    v76 = v61 + 1; /*0x614156*/
    v41 = v61 + 1; /*0x61415a*/
  }
  ((void (__stdcall *)(int, _DWORD))ValidateRect)(hWnd, 0); /*0x61417c*/
  return v79; /*0x613896*/
}


// ==== 0x00614190  ListBox::EditSubclassProc  this=ListBox  sig=csp ====
unsigned int __stdcall ListBox_EditSubclassProc(HWND hWnd, UINT Msg, WPARAM wParam, wchar_t *lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // esi
  int v5; // eax
  LRESULT (__stdcall **v6)(HWND, UINT, WPARAM, LPARAM); // eax
  HWND *v7; // eax
  _DWORD *v8; // edi
  LONG WindowLongA; // eax
  LONG v11; // ebx
  UINT v12; // ebp
  WPARAM v13; // esi
  HWND Parent; // eax
  LONG v15; // ebx
  size_t v16; // esi
  char *v17; // ebp
  unsigned __int16 v18; // ax
  HWND v19; // eax
  HWND v20; // esi
  HWND v21; // eax
  HWND NextDlgTabItem; // eax
  int v23; // eax
  HWND v24; // eax
  bool v25; // bl
  LONG left; // ecx
  LONG top; // eax
  unsigned int v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  const WCHAR *v31; // edi
  WPARAM v32; // edi
  const wchar_t *v33; // esi
  const char *v34; // edi
  WPARAM v35; // [esp-8h] [ebp-1884h]
  HWND v36; // [esp-4h] [ebp-1880h]
  int v37; // [esp-4h] [ebp-1880h]
  LRESULT (__stdcall *lpPrevWndFunc)(HWND, UINT, WPARAM, LPARAM); // [esp+10h] [ebp-186Ch]
  struct tagRECT v39; // [esp+14h] [ebp-1868h] BYREF
  HWND v40; // [esp+24h] [ebp-1858h] BYREF
  int v41; // [esp+28h] [ebp-1854h] BYREF
  struct tagRECT v42; // [esp+2Ch] [ebp-1850h] BYREF
  struct tagRECT Rect; // [esp+3Ch] [ebp-1840h] BYREF
  struct tagRECT v44; // [esp+4Ch] [ebp-1830h] BYREF
  CHAR ClassName[32]; // [esp+5Ch] [ebp-1820h] BYREF
  CHAR MultiByteStr[2048]; // [esp+7Ch] [ebp-1800h] BYREF
  wchar_t String[2048]; // [esp+87Ch] [ebp-1000h] BYREF

  v4 = 0; /*0x6141a2*/
  lpPrevWndFunc = 0; /*0x6141a7*/
  if ( MEMORY[0xAC1B4C] ) /*0x6141ab*/
  {
    v5 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1))); /*0x6141cf*/
    if ( v5 ) /*0x6141d4*/
    {
      while ( *(HWND *)v5 != hWnd ) /*0x6141df*/
      {
        v5 = *(_DWORD *)(v5 + 8); /*0x6141e1*/
        if ( !v5 ) /*0x6141e6*/
          goto LABEL_8; /*0x6141e6*/
      }
      v6 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v5 + 4); /*0x6141ee*/
      if ( v6 ) /*0x6141f3*/
      {
        v4 = *v6; /*0x6141f5*/
        lpPrevWndFunc = *v6; /*0x6141f7*/
      }
    }
  }
LABEL_8:
  v40 = hWnd; /*0x6141fb*/
  if ( !MEMORY[0xAC1B04] ) /*0x61420d*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x61420d*/
  v7 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v40) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x61422e*/
  if ( !v7 ) /*0x614233*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x614233*/
  while ( *v7 != v40 ) /*0x61423b*/
  {
    v7 = (HWND *)v7[129]; /*0x61423d*/
    if ( !v7 ) /*0x614245*/
      return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x614245*/
  }
  v8 = v7 + 1; /*0x61424d*/
  if ( v7 == (HWND *)-4 ) /*0x614252*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x614285*/
  if ( GetFocus() == hWnd && !v8[61] ) /*0x614297*/
  {
    v8[60] = 1; /*0x6142a1*/
    SetFocus(g_hWnd); /*0x6142b2*/
  }
  WindowLongA = GetWindowLongA(hWnd, -16); /*0x6142c2*/
  v11 = WindowLongA; /*0x6142c8*/
  v12 = Msg; /*0x6142ca*/
  v13 = wParam; /*0x6142d1*/
  if ( (Msg == 257 || Msg == 256) && wParam == 9 ) /*0x6142eb*/
    return 0; /*0x6142eb*/
  if ( Msg == 1175 ) /*0x6142f7*/
  {
    GetWindowRect(hWnd, &Rect); /*0x614310*/
    GetClientRect(hWnd, &v44); /*0x61431f*/
    Parent = GetParent(hWnd); /*0x614332*/
    GetWindowRect(Parent, &v39); /*0x614339*/
    MoveWindow(hWnd, Rect.left - v39.left + 1, Rect.top - v39.top + 1, v44.right - 2, v44.bottom - 2, 0); /*0x61436d*/
    if ( GetFocus() == hWnd ) /*0x614380*/
    {
      v8[60] = 1; /*0x614382*/
      SetFocus(g_hWnd); /*0x614392*/
    }
    if ( (v11 & 0x10000) == 0 ) /*0x61439e*/
      return 0; /*0x61439e*/
    v8[62] = 1; /*0x6143a4*/
    v15 = v11 & 0xFFFEFFFF; /*0x6143ae*/
LABEL_47:
    SetWindowLongA(hWnd, -16, v15); /*0x61459c*/
    return 0; /*0x6145b9*/
  }
  if ( Msg == 7 ) /*0x6143bc*/
  {
    SendMessageA(hWnd, 0xB1u, 0xFFFFFFFF, -1); /*0x6143cf*/
    if ( !v8[61] ) /*0x6143d5*/
      PostMessageA(hWnd, 0x4B0u, 0, 0); /*0x6143f4*/
LABEL_70:
    v29 = GetParent(hWnd); /*0x6147ee*/
    GetClassNameA(v29, ClassName, 32); /*0x614806*/
    if ( !strcmp(ClassName, MEMORY[0x83370C]) ) /*0x61481d*/
    {
      v30 = GetParent(hWnd); /*0x614858*/
      InvalidateRect(v30, 0, 0); /*0x61485b*/
    }
    InvalidateRect(hWnd, 0, 0); /*0x614869*/
    v13 = wParam; /*0x61486b*/
    return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x61486b*/
  }
  if ( Msg == 1205 || Msg == 1203 || Msg == 14 ) /*0x61441a*/
  {
    String[0] = 0; /*0x614904*/
    Memory_Helper_6149B0(hWnd, 2048, 0); /*0x61490e*/
    if ( v12 == 14 ) /*0x614916*/
    {
      return wcslen(String); /*0x614920*/
    }
    else if ( v12 == 1203 ) /*0x61493b*/
    {
      v32 = wParam; /*0x61493d*/
      v33 = lParam; /*0x614944*/
      wcsncpy(lParam, String, wParam); /*0x614955*/
      v33[v32 - 1] = 0; /*0x61495b*/
      return wcslen(v33); /*0x614962*/
    }
    else
    {
      v34 = (const char *)lParam; /*0x614977*/
      CopyWideToChar(lParam, (char *)String, v13); /*0x614988*/
      v34[v13 - 1] = 0; /*0x614992*/
      return strlen(v34); /*0x61499f*/
    }
  }
  else if ( Msg == 1204 || Msg == 1202 ) /*0x614432*/
  {
    MultiByteStr[0] = 0; /*0x61489c*/
    v31 = (const WCHAR *)v8[10]; /*0x6148a1*/
    if ( v31 ) /*0x6148a6*/
      WideCharToMultiByte(0, 0, v31, -1, MultiByteStr, 2048, 0, 0); /*0x6148c0*/
    return CallWindowProcA(lpPrevWndFunc, hWnd, 0xCu, 0, (LPARAM)MultiByteStr); /*0x6148dc*/
  }
  else
  {
    if ( Msg != 258 ) /*0x61443e*/
    {
      if ( Msg == 1199 ) /*0x61455e*/
      {
        v23 = v8[60]; /*0x614560*/
        v8[61] = 1; /*0x614566*/
        if ( v23 ) /*0x614572*/
        {
          SetFocus(hWnd); /*0x61457c*/
          v8[60] = 0; /*0x614582*/
        }
        if ( !v8[62] ) /*0x614594*/
          return 0; /*0x614594*/
        v15 = v11 | 0x10000; /*0x614596*/
        goto LABEL_47; /*0x614596*/
      }
      if ( Msg == 15 || Msg == 20 ) /*0x6145c4*/
      {
        ScreenDialogToClient(hWnd, &v42); /*0x6145d5*/
        v24 = GetParent(hWnd); /*0x6145e9*/
        GetClassNameA(v24, ClassName, 16); /*0x6145f0*/
        v25 = strcmp(ClassName, MEMORY[0x83370C]) == 0; /*0x61462e*/
        if ( v12 == 15 && GetUpdateRect(hWnd, &v39, 0) ) /*0x614645*/
        {
          left = v42.left; /*0x61464f*/
          v39.right += v42.left; /*0x614663*/
          top = v42.top; /*0x614667*/
          v39.left += v42.left; /*0x61466b*/
          v39.top += v42.top; /*0x614677*/
          v39.bottom += v42.top; /*0x61467b*/
        }
        else
        {
          top = v42.top; /*0x614681*/
          left = v42.left; /*0x614685*/
        }
        Rect.left = left; /*0x61468d*/
        Rect.right = v42.right - left + 1; /*0x61469a*/
        v37 = v8[50]; /*0x6146a5*/
        Rect.bottom = v42.bottom - top + 1; /*0x6146ad*/
        Rect.top = top; /*0x6146b5*/
        SetupDialogRenderBuffer(&Rect.left, hWnd, v37); /*0x6146b9*/
        if ( !v25 ) /*0x6146c0*/
          DrawDialogGradient((int *)MEMORY[0x887310], &Rect.left, 2, -1); /*0x6146d0*/
        v41 = 0; /*0x6146eb*/
        Memory_Helper_6149B0(hWnd, 5120, (int)&v41); /*0x6146f3*/
        v44.left = v42.left; /*0x614706*/
        v44.top = v42.top; /*0x614710*/
        v44.right = v42.right - v42.left + 1; /*0x614720*/
        v44.bottom = v42.bottom - v42.top + 1; /*0x614724*/
        v28 = GetWindowLongA(hWnd, -16); /*0x614728*/
        DrawTextRendererMultiline( /*0x614760*/
          (_DWORD *)MEMORY[0x887310],
          &v44.left,
          &MEMORY[0xAC1E04],
          v41,
          (_DWORD *)v8[25],
          MEMORY[0xAC18A4],
          v8 + 17,
          v8[14],
          (v28 >> 5) & 1,
          0,
          0);
        ValidateRect(hWnd, 0); /*0x61476f*/
        v13 = wParam; /*0x614775*/
      }
      if ( v12 == 123 ) /*0x61477f*/
        return 1; /*0x614790*/
      if ( v12 == 512 ) /*0x614799*/
        return 1; /*0x6147aa*/
      if ( v12 != 256 && v12 != 257 && v12 != 260 && v12 != 261 && v12 != 262 && v12 != 263 && v12 != 8 && v12 != 513 ) /*0x6147e8*/
        return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x6147e8*/
      goto LABEL_70; /*0x6147e8*/
    }
    if ( wParam == 13 ) /*0x614447*/
    {
      if ( (WindowLongA & 4) != 0 ) /*0x614450*/
      {
        v16 = CallWindowProcA(lpPrevWndFunc, hWnd, 0xEu, 0, 0) + 3; /*0x614473*/
        v17 = (char *)__2_YAPAXI_Z(v16); /*0x614486*/
        CallWindowProcA(lpPrevWndFunc, hWnd, 0xDu, v16, (LPARAM)v17); /*0x61448e*/
        strcat(v17, String2); /*0x6144b3*/
        CallWindowProcA(lpPrevWndFunc, hWnd, 0xCu, 0, (LPARAM)v17); /*0x6144cb*/
        __3_YAXPAX_Z(v17); /*0x6144ce*/
        v18 = GetWindowLongA(hWnd, -12); /*0x6144e0*/
        v36 = hWnd; /*0x6144f7*/
        v35 = v18 | 0x5010000; /*0x6144f8*/
        v19 = GetParent(hWnd); /*0x6144ff*/
        SendMessageA(v19, 0x111u, v35, (LPARAM)v36); /*0x614506*/
        return 0; /*0x614518*/
      }
      return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x614450*/
    }
    if ( wParam != 9 ) /*0x61451e*/
      return CallWindowProcA(lpPrevWndFunc, hWnd, v12, v13, (LPARAM)lParam); /*0x614899*/
    v20 = hWnd; /*0x614524*/
    v21 = GetParent(hWnd); /*0x61452c*/
    NextDlgTabItem = GetNextDlgTabItem(v21, v20, 0); /*0x614536*/
    if ( NextDlgTabItem ) /*0x61453e*/
      v20 = NextDlgTabItem; /*0x614540*/
    SetFocus(v20); /*0x614543*/
    return 0; /*0x61454c*/
  }
}


// ==== 0x006149B0  Memory_Helper_6149B0  this=-  sig=csp ====
size_t __fastcall Memory_Helper_6149B0(HWND hWnd, WCHAR *a2, int cchWideChar, size_t *a4)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v5; // eax
  int v6; // eax
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  size_t v8; // esi
  const wchar_t *v9; // ebx
  signed int v10; // ebp
  void *v11; // ebx
  int v12; // esi
  LPWSTR v13; // edx
  WCHAR *v14; // ecx
  signed int v15; // edi
  WCHAR v16; // ax
  const wchar_t *v17; // esi
  WCHAR *v19; // [esp-8h] [ebp-428h]
  HWND hWnda; // [esp+10h] [ebp-410h] BYREF
  LPWSTR lpWideCharStr; // [esp+14h] [ebp-40Ch]
  LPARAM v22; // [esp+18h] [ebp-408h] BYREF
  WPARAM wParam; // [esp+1Ch] [ebp-404h] BYREF
  CHAR lParam[1024]; // [esp+20h] [ebp-400h] BYREF

  v4 = 0; /*0x6149bd*/
  lpWideCharStr = a2; /*0x6149c3*/
  hWnda = hWnd; /*0x6149c7*/
  if ( MEMORY[0xAC1B4C] ) /*0x6149cb*/
  {
    v5 = MEMORY[0xAC1B60](&hWnda); /*0x6149d1*/
    hWnd = hWnda; /*0x6149e4*/
    v6 = *((_DWORD *)MEMORY[0xAC1B48] + (v5 & ((1 << MEMORY[0xAC1B54]) - 1))); /*0x6149f0*/
    if ( v6 ) /*0x6149f5*/
    {
      while ( *(HWND *)v6 != hWnda ) /*0x6149f9*/
      {
        v6 = *(_DWORD *)(v6 + 8); /*0x6149fb*/
        if ( !v6 ) /*0x614a00*/
          goto LABEL_8; /*0x614a00*/
      }
      v7 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v6 + 4); /*0x614a08*/
      if ( v7 ) /*0x614a0d*/
        v4 = *v7; /*0x614a0f*/
    }
  }
LABEL_8:
  v8 = 0; /*0x614a11*/
  lParam[0] = 0; /*0x614a27*/
  CallWindowProcA(v4, hWnd, 0xDu, 0x400u, (LPARAM)lParam); /*0x614a2c*/
  if ( a4 ) /*0x614a37*/
    v8 = (unsigned int)CallWindowProcA(v4, hWnda, 0xB0u, (WPARAM)&wParam, (LPARAM)&v22) >> 16; /*0x614a52*/
  v9 = lpWideCharStr; /*0x614a5c*/
  v19 = lpWideCharStr; /*0x614a61*/
  *lpWideCharStr = 0; /*0x614a6d*/
  MultiByteToWideChar(0, 0, lParam, -1, v19, cchWideChar); /*0x614a72*/
  if ( a4 ) /*0x614a7a*/
    *a4 = _mbsnccnt((const unsigned __int8 *)lParam, v8); /*0x614a8a*/
  if ( cchWideChar > 0 ) /*0x614a8e*/
    v9[cchWideChar - 1] = 0; /*0x614a90*/
  v10 = wcslen(v9); /*0x614a9d*/
  v11 = __2_YAPAXI_Z(2 * v10 + 6); /*0x614aab*/
  memset(v11, 0, 2 * v10 + 6); /*0x614ab9*/
  v12 = 0; /*0x614abd*/
  if ( v10 > 0 ) /*0x614ac6*/
  {
    v13 = lpWideCharStr; /*0x614ac8*/
    v14 = (WCHAR *)v11; /*0x614acc*/
    v15 = v10; /*0x614ace*/
    do /*0x614aea*/
    {
      v16 = *v13; /*0x614ad0*/
      if ( *v13 != 13 && v16 != 10 ) /*0x614add*/
      {
        *v14 = v16; /*0x614adf*/
        ++v12; /*0x614ae2*/
        ++v14; /*0x614ae3*/
      }
      ++v13; /*0x614ae6*/
      --v15; /*0x614ae9*/
    }
    while ( v15 ); /*0x614aea*/
    if ( v10 != v12 ) /*0x614aee*/
      wcscat((wchar_t *)v11, MEMORY[0x835950]); /*0x614af6*/
  }
  v17 = lpWideCharStr; /*0x614afe*/
  wcscpy(lpWideCharStr, (const wchar_t *)v11); /*0x614b04*/
  __3_YAXPAX_Z(v11); /*0x614b0a*/
  return wcslen(v17); /*0x614b18*/
}


// ==== 0x00614B30  EditControl::WndProc  this=EditControl  sig=csp ====
size_t __stdcall EditControl_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, wchar_t *lParam)
{
  UINT v4; // ebp
  int v5; // esi
  int v7; // eax
  HWND v8; // ecx
  LRESULT (__stdcall **v9)(HWND, UINT, WPARAM, LPARAM); // eax
  int v10; // eax
  int v11; // eax
  HWND Parent; // edi
  size_t v13; // ebx
  SHORT AsyncKeyState; // ax
  wchar_t *v15; // eax
  unsigned __int16 v16; // ax
  bool v17; // bl
  LONG left; // ecx
  LONG top; // eax
  int v20; // ecx
  int v21; // edx
  wchar_t *v22; // eax
  unsigned __int16 v23; // di
  int v24; // edi
  int v25; // eax
  const wchar_t **v26; // ecx
  int v27; // eax
  int v28; // edi
  const wchar_t *v29; // eax
  int WindowLongA; // esi
  wchar_t *v31; // eax
  const wchar_t *v32; // esi
  const char *v33; // edi
  int v34; // [esp-20h] [ebp-E0h]
  _DWORD *v35; // [esp-1Ch] [ebp-DCh]
  int v36; // [esp-18h] [ebp-D8h]
  int v37; // [esp-10h] [ebp-D0h]
  int v38; // [esp-Ch] [ebp-CCh]
  int v39; // [esp-4h] [ebp-C4h]
  int v40; // [esp-4h] [ebp-C4h]
  WPARAM v41; // [esp-4h] [ebp-C4h]
  HWND v42; // [esp+10h] [ebp-B0h]
  int v43; // [esp+14h] [ebp-ACh]
  LRESULT (__stdcall *lpPrevWndFunc)(HWND, UINT, WPARAM, LPARAM); // [esp+18h] [ebp-A8h]
  int v45; // [esp+1Ch] [ebp-A4h]
  struct tagRECT v46; // [esp+20h] [ebp-A0h] BYREF
  struct tagRECT v47; // [esp+30h] [ebp-90h] BYREF
  struct tagRECT Rect; // [esp+40h] [ebp-80h] BYREF
  struct tagRECT v49; // [esp+50h] [ebp-70h] BYREF
  CHAR ClassName[80]; // [esp+70h] [ebp-50h] BYREF

  v4 = Msg; /*0x614b38*/
  v5 = 0; /*0x614b40*/
  lpPrevWndFunc = 0; /*0x614b49*/
  v43 = 0; /*0x614b4d*/
  v45 = 0; /*0x614b51*/
  if ( Msg == 135 ) /*0x614b55*/
    return 4; /*0x614b66*/
  if ( MEMORY[0xAC1B4C] /*0x614b98*/
    && (v7 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
  {
    v8 = hWnd; /*0x614b9a*/
    while ( *(HWND *)v7 != hWnd ) /*0x614ba3*/
    {
      v7 = *(_DWORD *)(v7 + 8); /*0x614ba5*/
      if ( !v7 ) /*0x614baa*/
        goto LABEL_12; /*0x614baa*/
    }
    v9 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v7 + 4); /*0x614bb2*/
    if ( v9 ) /*0x614bb7*/
      lpPrevWndFunc = *v9; /*0x614bbb*/
  }
  else
  {
    v8 = hWnd; /*0x614bc1*/
  }
LABEL_12:
  if ( MEMORY[0xAC1B04] ) /*0x614bce*/
  {
    v10 = MEMORY[0xAC1B18](&hWnd); /*0x614bd7*/
    v8 = hWnd; /*0x614bea*/
    v11 = *((_DWORD *)MEMORY[0xAC1B00] + (v10 & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x614bf9*/
    if ( v11 ) /*0x614bfe*/
    {
      while ( *(HWND *)v11 != hWnd ) /*0x614c02*/
      {
        v11 = *(_DWORD *)(v11 + 516); /*0x614c04*/
        if ( !v11 ) /*0x614c0c*/
          goto LABEL_18; /*0x614c0c*/
      }
      v5 = v11 + 4; /*0x614c14*/
    }
  }
LABEL_18:
  Parent = GetParent(v8); /*0x614c17*/
  v13 = wParam; /*0x614c26*/
  v42 = Parent; /*0x614c2d*/
  if ( (v4 == 257 || v4 == 256) && wParam == 9 ) /*0x614c3e*/
  {
    if ( v4 == 256 ) /*0x614c46*/
    {
      AsyncKeyState = GetAsyncKeyState(16); /*0x614c4a*/
      SendMessageA(Parent, 0x4DBu, AsyncKeyState < 0, (LPARAM)hWnd); /*0x614c72*/
    }
    return 0; /*0x614c84*/
  }
  switch ( v4 ) /*0x614c8d*/
  {
    case 0x497u: /*0x614c8d*/
      GetWindowRect(hWnd, &Rect); /*0x614ca2*/
      GetClientRect(hWnd, &v49); /*0x614cb1*/
      GetWindowRect(Parent, &v47); /*0x614cbd*/
      SetWindowPos(hWnd, 0, Rect.left - v47.left + 1, Rect.top - v47.top + 1, v49.right - 2, v49.bottom - 2, 0x40u); /*0x614cf3*/
      return 0; /*0x614d05*/
    case 0xC5u: /*0x614c8d*/
      *(_DWORD *)(v5 + 72) = wParam; /*0x614d12*/
      if ( v13 ) /*0x614d15*/
        String::TruncateTo(*(void ***)(v5 + 60), v13); /*0x614d1b*/
      return CallWindowProcA(lpPrevWndFunc, hWnd, v4, v13, (LPARAM)lParam); /*0x614d1b*/
    case 0x4B5u: /*0x614c8d*/
    case 0x4B3u: /*0x614c8d*/
      v41 = wParam; /*0x61532e*/
      v31 = WideString::GetOrEmpty(*(wchar_t ***)(v5 + 60)); /*0x615331*/
      if ( v4 == 1203 ) /*0x61532f*/
      {
        v32 = lParam; /*0x615336*/
        wcsncpy(lParam, v31, v41); /*0x61533f*/
        v32[v13 - 1] = 0; /*0x615345*/
        return wcslen(v32); /*0x61534c*/
      }
      else
      {
        v33 = (const char *)lParam; /*0x615366*/
        CopyWideToChar(lParam, (char *)v31, v41); /*0x615371*/
        v33[v13 - 1] = 0; /*0x61537b*/
        return strlen(v33); /*0x615388*/
      }
    case 0xEu: /*0x614c8d*/
      return (size_t)WideString::Length(*(const wchar_t ***)(v5 + 60)); /*0x615322*/
    case 0x4B4u: /*0x614c8d*/
    case 0x4B2u: /*0x614c8d*/
      SafeDelete::Ptr(*(void ***)(v5 + 60)); /*0x614d7e*/
      v15 = *(wchar_t **)(v5 + 40); /*0x614d83*/
      *(_DWORD *)(v5 + 64) = 0; /*0x614d8a*/
      *(_DWORD *)(v5 + 68) = 0; /*0x614d8d*/
      if ( v15 ) /*0x614d90*/
        WideString::Reassign(*(void ***)(v5 + 60), v15); /*0x614d98*/
      if ( *(_DWORD *)(v5 + 72) ) /*0x614d9d*/
        String::TruncateTo(*(void ***)(v5 + 60), *(_DWORD *)(v5 + 72)); /*0x614da8*/
      *(_DWORD *)(v5 + 64) = WideString::Length(*(const wchar_t ***)(v5 + 60)); /*0x614db5*/
      break;
  }
  if ( v4 != 256 ) /*0x614dbe*/
  {
    if ( v4 == 7 ) /*0x614e35*/
    {
      *(_DWORD *)(v5 + 76) = 0; /*0x614e37*/
      SetTimer(hWnd, 0, 0x3E8u, 0); /*0x614e4f*/
    }
    else if ( v4 == 8 ) /*0x614e5d*/
    {
      KillTimer(hWnd, 0); /*0x614e69*/
    }
    else
    {
      if ( v4 == 275 ) /*0x614e7a*/
      {
        *(_DWORD *)(v5 + 76) ^= 1u; /*0x614e86*/
        InvalidateRect(hWnd, 0, 0); /*0x614e91*/
        return CallWindowProcA(lpPrevWndFunc, hWnd, v4, v13, (LPARAM)lParam); /*0x614e97*/
      }
      if ( v4 == 15 || v4 == 20 ) /*0x614ea4*/
      {
        ScreenDialogToClient(hWnd, &v46); /*0x614eb5*/
        GetClassNameA(Parent, ClassName, 80); /*0x614ec6*/
        v17 = strcmp(ClassName, MEMORY[0x83370C]) == 0; /*0x614f04*/
        if ( v4 == 15 && GetUpdateRect(hWnd, &v47, 0) ) /*0x614f1b*/
        {
          left = v46.left; /*0x614f25*/
          v47.right += v46.left; /*0x614f39*/
          top = v46.top; /*0x614f3d*/
          v47.left += v46.left; /*0x614f41*/
          v47.top += v46.top; /*0x614f4d*/
          v47.bottom += v46.top; /*0x614f51*/
        }
        else
        {
          top = v46.top; /*0x614f57*/
          left = v46.left; /*0x614f5b*/
        }
        Rect.left = left; /*0x614f63*/
        Rect.right = v46.right - left + 1; /*0x614f70*/
        v39 = *(_DWORD *)(v5 + 200); /*0x614f7b*/
        Rect.bottom = v46.bottom - top + 1; /*0x614f83*/
        Rect.top = top; /*0x614f8b*/
        SetupDialogRenderBuffer(&Rect.left, hWnd, v39); /*0x614f8f*/
        if ( !v17 ) /*0x614f96*/
          DrawDialogGradient((int *)MEMORY[0x887310], &Rect.left, 2, -1); /*0x614fa6*/
        v46.left += 2; /*0x614fba*/
        v49.left = v46.left; /*0x614fbe*/
        v49.top = v46.top; /*0x614fc8*/
        v20 = *(_DWORD *)(v5 + 76); /*0x614fce*/
        v49.right = v46.right - v46.left + 1; /*0x614fd2*/
        MEMORY[0xAC48C8] = v20; /*0x614fd6*/
        v21 = *(_DWORD *)(v5 + 84) >> 5; /*0x614fe0*/
        v49.bottom = v46.bottom - v46.top + 1; /*0x614fe3*/
        v38 = v21 & 1; /*0x614ff1*/
        v37 = *(_DWORD *)(v5 + 56); /*0x614ffb*/
        v36 = MEMORY[0xAC18A4]; /*0x615003*/
        v35 = *(_DWORD **)(v5 + 100); /*0x615004*/
        v34 = *(_DWORD *)(v5 + 64); /*0x615005*/
        v22 = WideString::GetOrEmpty(*(wchar_t ***)(v5 + 60)); /*0x615009*/
        DrawTextRendererMultiline( /*0x615019*/
          (_DWORD *)MEMORY[0x887310],
          &v49.left,
          v22,
          v34,
          v35,
          v36,
          (signed int *)(v5 + 68),
          v37,
          v38,
          0,
          0);
        ValidateRect(hWnd, 0); /*0x615028*/
        v13 = wParam; /*0x61502e*/
      }
      if ( v4 == 123 ) /*0x615038*/
        return 1; /*0x615049*/
      if ( v4 == 512 ) /*0x615052*/
        return 1; /*0x615063*/
      if ( v4 != 257 && v4 != 260 && v4 != 261 && v4 != 262 && v4 != 263 && v4 != 513 ) /*0x615094*/
      {
LABEL_73:
        if ( v4 == 258 ) /*0x615103*/
        {
          if ( v13 <= 0x1F ) /*0x615108*/
            return CallWindowProcA(lpPrevWndFunc, hWnd, v4, v13, (LPARAM)lParam); /*0x615108*/
          v23 = v13; /*0x61510e*/
        }
        else
        {
          switch ( v4 ) /*0x61511b*/
          {
            case 0x100u: /*0x61511b*/
              switch ( v13 ) /*0x615135*/
              {
                case 8u: /*0x615135*/
                  v25 = *(_DWORD *)(v5 + 64); /*0x61515f*/
                  if ( v25 <= 0 ) /*0x615164*/
                    goto LABEL_103; /*0x615164*/
                  v26 = *(const wchar_t ***)(v5 + 60); /*0x61516a*/
                  *(_DWORD *)(v5 + 64) = v25 - 1; /*0x615174*/
                  WideString::Erase(v26, v25 - 1, 1); /*0x615178*/
                  goto LABEL_102; /*0x61517d*/
                case 0x23u: /*0x615135*/
                  *(_DWORD *)(v5 + 64) = WideString::Length(*(const wchar_t ***)(v5 + 60)); /*0x6151ce*/
                  return 0; /*0x6151dd*/
                case 0x24u: /*0x615135*/
                  *(_DWORD *)(v5 + 64) = 0; /*0x6151e0*/
                  return 0; /*0x6151f3*/
                case 0x25u: /*0x615135*/
                  v27 = *(_DWORD *)(v5 + 64); /*0x615182*/
                  if ( v27 <= 0 ) /*0x615187*/
                    return 0; /*0x615187*/
                  *(_DWORD *)(v5 + 64) = v27 - 1; /*0x61518f*/
                  return 0; /*0x61519d*/
                case 0x27u: /*0x615135*/
                  v28 = *(_DWORD *)(v5 + 64); /*0x6151a3*/
                  if ( v28 >= (int)WideString::Length(*(const wchar_t ***)(v5 + 60)) ) /*0x6151ad*/
                    return 0; /*0x6151ad*/
                  *(_DWORD *)(v5 + 64) = v28 + 1; /*0x6151b6*/
                  return 0; /*0x6151c3*/
                case 0x2Eu: /*0x615135*/
                  v24 = *(_DWORD *)(v5 + 64); /*0x61513f*/
                  if ( v24 >= (int)WideString::Length(*(const wchar_t ***)(v5 + 60)) ) /*0x615149*/
                    goto LABEL_103; /*0x615149*/
                  WideString::Erase(*(const wchar_t ***)(v5 + 60), v24, 1); /*0x615155*/
                  goto LABEL_102; /*0x61515a*/
                default:
                  return CallWindowProcA(lpPrevWndFunc, hWnd, v4, v13, (LPARAM)lParam);
              }
            case 0x286u: /*0x61511b*/
              v23 = EditControl_Helper(v13, lParam); /*0x61520c*/
              break;
            case 0x4D9u: /*0x61511b*/
              v23 = v13; /*0x61521c*/
              break;
            default:
              return CallWindowProcA(lpPrevWndFunc, hWnd, v4, v13, (LPARAM)lParam); /*0x615216*/
          }
          v45 = 1; /*0x61521e*/
        }
        if ( v23 ) /*0x615229*/
        {
          v29 = *(const wchar_t **)(v5 + 80); /*0x61522f*/
          if ( (!v29 || !wcschr(v29, v23)) /*0x61526a*/
            && (!*(_DWORD *)(v5 + 72) || (int)WideString::Length(*(const wchar_t ***)(v5 + 60)) < *(_DWORD *)(v5 + 72))
            && v23 > 0x1Fu
            && (!*(_DWORD *)(v5 + 48) || v23 < 0x100u) )
          {
            v40 = *(_DWORD *)(v5 + 64); /*0x61526f*/
            *(_DWORD *)(v5 + 64) = v40 + 1; /*0x615274*/
            EditControl::GrowBuffer(v23, v40); /*0x61527a*/
LABEL_102:
            v43 = 1; /*0x61527f*/
          }
LABEL_103:
          if ( v43 ) /*0x61528d*/
          {
            WindowLongA = (unsigned __int16)GetWindowLongA(hWnd, -12); /*0x6152b2*/
            SendMessageA(v42, 0x111u, WindowLongA | 0x3000000, (LPARAM)hWnd); /*0x6152c8*/
            SendMessageA(v42, 0x111u, WindowLongA | 0x4000000, (LPARAM)hWnd); /*0x6152df*/
            return 0; /*0x6152ed*/
          }
          return 0; /*0x61528d*/
        }
        if ( v45 ) /*0x6152f6*/
          return 0; /*0x615308*/
        return CallWindowProcA(lpPrevWndFunc, hWnd, v4, v13, (LPARAM)lParam); /*0x614d47*/
      }
    }
LABEL_70:
    GetClassNameA(v42, (LPSTR)&v49, 32); /*0x615096*/
    if ( !strcmp((const char *)&v49, MEMORY[0x83370C]) ) /*0x6150b7*/
      InvalidateRect(v42, 0, 0); /*0x6150ed*/
    InvalidateRect(hWnd, 0, 0); /*0x6150fb*/
    goto LABEL_73; /*0x6150fb*/
  }
  if ( v13 != 13 ) /*0x614dc3*/
    goto LABEL_70; /*0x614dc3*/
  SendMessageA(Parent, 0x4DAu, 0, (LPARAM)hWnd); /*0x614de3*/
  if ( (*(_BYTE *)(v5 + 84) & 4) != 0 ) /*0x614de9*/
  {
    WideString::Append2(*(wchar_t ***)(v5 + 60), MEMORY[0x835950]); /*0x614df3*/
    v16 = GetWindowLongA(hWnd, -12); /*0x614e02*/
    SendMessageA(Parent, 0x111u, v16 | 0x5010000, (LPARAM)hWnd); /*0x614e21*/
  }
  return 0; /*0x614b57*/
}


// ==== 0x006153E0  BinkMovie::WndProc  this=BinkMovie  sig=csp ====
int __stdcall BinkMovie_WndProc(HWND hWnd, UINT Msg, int wParam, LPARAM lParam)
{
  HWND v4; // ecx
  _DWORD *v5; // esi
  HWND *v6; // eax
  int result; // eax
  UINT v8; // ebp
  void (__thiscall ***v9)(_DWORD, int); // eax
  int v10; // eax
  HWND v11; // edi
  void (__thiscall ***v12)(_DWORD, int); // ecx
  void (__thiscall ***v13)(_DWORD, int); // ecx
  LRESULT (__stdcall *v14)(HWND, UINT, WPARAM, LPARAM); // esi
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // ecx
  LONG right; // edx
  int v22; // eax
  unsigned int v23; // eax
  bool v24; // bl
  bool v25; // bl
  bool v26; // cl
  bool v27; // al
  int v28; // esi
  LONG v29; // edi
  LONG v30; // ecx
  int v31; // ebp
  int v32; // ecx
  LONG v33; // eax
  int v34; // edi
  int v35; // edx
  struct tagRECT *v36; // eax
  unsigned int v37; // edi
  signed int v38; // edi
  HWND v39; // esi
  LONG WindowLongA; // eax
  char v41; // dl
  int v42; // ecx
  int v43; // ecx
  signed int v44; // ecx
  signed int v45; // eax
  signed int v46; // eax
  int v47; // ecx
  void (__thiscall ***v48)(_DWORD, int); // ecx
  HWND v49; // edi
  void (__thiscall ***v50)(_DWORD, int); // ecx
  int v51; // eax
  char v52; // bl
  int v53; // eax
  UINT v54; // eax
  void (__thiscall ***v55)(_DWORD, int); // ecx
  int v56; // eax
  int i; // eax
  HWND v58; // eax
  HWND v59; // edi
  _DWORD *j; // eax
  HWND Parent; // eax
  UINT v62; // eax
  LPARAM v63; // edi
  LPARAM v64; // eax
  int v65; // esi
  HWND v66; // edi
  void (__thiscall ***v67)(_DWORD, int); // ecx
  int v68; // ebp
  void (__thiscall ***v69)(_DWORD, int); // ecx
  _DWORD *v70; // eax
  void (__thiscall ***v71)(_DWORD, int); // ecx
  void (__thiscall ***v72)(_DWORD, int); // ecx
  int v73; // esi
  int v74; // esi
  int v75; // esi
  LRESULT (__stdcall **v76)(HWND, UINT, WPARAM, LPARAM); // eax
  bool v77; // [esp+34h] [ebp-7Ah]
  bool v78; // [esp+35h] [ebp-79h]
  bool v79; // [esp+35h] [ebp-79h]
  HWND v80; // [esp+36h] [ebp-78h] BYREF
  struct tagRECT v81; // [esp+3Ah] [ebp-74h] BYREF
  int v82; // [esp+4Ah] [ebp-64h]
  struct tagRECT Rect; // [esp+4Eh] [ebp-60h] BYREF
  struct tagRECT v84; // [esp+5Eh] [ebp-50h] BYREF
  struct tagRECT v85; // [esp+6Eh] [ebp-40h] BYREF
  LONG left; // [esp+7Eh] [ebp-30h] BYREF
  LONG top; // [esp+82h] [ebp-2Ch]
  int v88; // [esp+86h] [ebp-28h]
  int v89; // [esp+8Ah] [ebp-24h]
  struct tagRECT X; // [esp+8Eh] [ebp-20h] BYREF
  _DWORD v91[4]; // [esp+9Eh] [ebp-10h] BYREF

  v4 = hWnd;
  v5 = 0;
  v80 = hWnd;
  if ( MEMORY[0xAC1B04] )
  {
    v6 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v80) & ((1 << MEMORY[0xAC1B0C]) - 1)));
    if ( v6 )
    {
      while ( *v6 != v80 )
      {
        v6 = (HWND *)v6[129];
        if ( !v6 )
          goto LABEL_7;
      }
      v5 = v6 + 1;
    }
LABEL_7:
    v4 = hWnd;
  }
  if ( !v5 )
    return 0;
  v8 = Msg;
  if ( Msg > 0x4D4 )
  {
    switch ( Msg )
    {
      case 0x4D5u:
        if ( v5[28] != 4 )
          return 0;
        v5[38] = lParam;
        InvalidateRect(hWnd, 0, 1);
        return 0;
      case 0x4D6u:
        result = -1;
        if ( v5[28] == 4 )
          return v5[38];
        return result;
      case 0x4D7u:
        if ( v5[28] != 4 )
          return 0;
        v5[41] = lParam;
        return 0;
      case 0x4DFu:
        if ( wParam < 0 || wParam >= MEMORY[0xABF3A0] )
          return 0;
        v66 = v4;
        v67 = (void (__thiscall ***)(_DWORD, int))v5[22];
        v68 = *((_DWORD *)MEMORY[0xABF394] + wParam);
        if ( v67 )
        {
          (**v67)(v67, 1);
          v5[22] = 0;
        }
        KillTimer(v66, 0x65u);
        v69 = (void (__thiscall ***)(_DWORD, int))v5[24];
        if ( v69 )
        {
          (**v69)(v69, 1);
          v5[24] = 0;
        }
        ScreenDialogToClient(v66, &X);
        v70 = CreateMovie(v68, MEMORY[0x887310], 0);
        v5[22] = v70;
        if ( v70 )
          goto LABEL_165;
        KillTimer(v66, 0x65u);
        v50 = (void (__thiscall ***)(_DWORD, int))v5[24];
        if ( v50 )
          goto LABEL_174;
        return 0;
      case 0x4E0u:
        v74 = v5[22];
        if ( !v74 )
          return 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v74 + 12))(v74, 1);
        return 0;
      case 0x4E1u:
        v75 = v5[22];
        if ( !v75 )
          return 0;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v75 + 12))(v75, 0);
        return 0;
      case 0x4E2u:
        v49 = v4;
        v48 = (void (__thiscall ***)(_DWORD, int))v5[22];
        if ( v48 )
          goto LABEL_100;
        goto LABEL_101;
      case 0x4E3u:
        v5[23] = wParam;
        return 0;
      case 0x4E4u:
        v66 = v4;
        v71 = (void (__thiscall ***)(_DWORD, int))v5[22];
        if ( v71 )
        {
          (**v71)(v71, 1);
          v5[22] = 0;
        }
        KillTimer(v66, 0x65u);
        v72 = (void (__thiscall ***)(_DWORD, int))v5[24];
        if ( v72 )
        {
          (**v72)(v72, 1);
          v5[24] = 0;
        }
        ScreenDialogToClient(v66, &X);
        v70 = CreateMovie(lParam, MEMORY[0x887310], 0);
        v5[22] = v70;
        if ( v70 )
        {
LABEL_165:
          (*(void (__thiscall **)(_DWORD *, LONG, LONG))(*v70 + 24))(v70, X.left, X.top);
          MoveWindow(v66, X.left, X.top, *(_DWORD *)(v5[22] + 8), *(_DWORD *)(v5[22] + 12), 0);
          SetTimer(v66, 0x65u, 0x22u, 0);
          return 0;
        }
        KillTimer(v66, 0x65u);
        v50 = (void (__thiscall ***)(_DWORD, int))v5[24];
        if ( v50 )
          goto LABEL_174;
        return 0;
      case 0x4EEu:
        if ( v5[28] != 1 || *((_BYTE *)v5 + 168) )
          return 0;
        *((_BYTE *)v5 + 168) = 1;
        v5[32] = 1;
        SetTimer(hWnd, 0, v5[33], 0);
        InvalidateRect(hWnd, 0, 0);
        return 0;
      case 0x4F0u:
        v73 = v5[22];
        if ( !v73 )
          return 0;
        (*(void (__thiscall **)(int))(*(_DWORD *)v73 + 40))(v73);
        return 0;
      default:
        goto LABEL_34;
    }
  }
  if ( Msg == 1236 )
  {
    if ( v5[28] == 4 && *((_BYTE *)v5 + 168) )
    {
      KillTimer(v4, 0);
      *((_BYTE *)v5 + 168) = 0;
      return 0;
    }
    return 0;
  }
  if ( Msg > 0x497 )
  {
    switch ( Msg )
    {
      case 0x498u:
        v63 = lParam;
        if ( lParam != v5[59] )
          InvalidateRect(v4, 0, 0);
        if ( v63 == -1 )
          v5[59] = MEMORY[0xAC18A4];
        else
          v5[59] = v63;
        result = 0;
        break;
      case 0x4B1u:
        v64 = lParam;
        *((_BYTE *)v5 + 180) = 1;
        v5[46] = v64;
        result = 0;
        break;
      case 0x4B2u:
      case 0x4B4u:
        v65 = v5[4];
        if ( v65 )
        {
          ScreenDialogToClient(v4, &v84);
          GetClientRect(hWnd, &v85);
          left = v84.left;
          top = v84.top;
          X.bottom = v85.bottom + 1;
          v89 = v85.bottom + 1;
          X.left = 0;
          X.top = 0;
          X.right = v85.right + 1;
          v88 = v85.right + 1;
          (*(void (__thiscall **)(int, LONG *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))(
            MEMORY[0x887310],
            &left,
            v65,
            &X,
            0,
            1);
          InvalidateRect(hWnd, 0, 0);
        }
        result = 1;
        break;
      case 0x4D3u:
        if ( !v5[30] || v5[28] != 4 || *((_BYTE *)v5 + 168) )
          return 0;
        *((_BYTE *)v5 + 168) = 1;
        Parent = GetParent(hWnd);
        v62 = BinkMovie::HandleKeyboard(Parent, hWnd);
        SetTimer(hWnd, 0, v62, 0);
        result = 0;
        break;
      default:
        goto LABEL_34;
    }
    return result;
  }
  if ( Msg == 1175 )
  {
    if ( MEMORY[0xAC1B4C] )
    {
      v56 = MEMORY[0xAC1B60](&hWnd);
      v4 = hWnd;
      for ( i = *((_DWORD *)MEMORY[0xAC1B48] + (v56 & ((1 << MEMORY[0xAC1B54]) - 1))); i; i = *(_DWORD *)(i + 8) )
      {
        if ( *(HWND *)i == hWnd )
          break;
      }
    }
    v58 = GetParent(v4);
    v5[28] = 0;
    v59 = hWnd;
    v81.left = (LONG)v58;
    if ( MEMORY[0xAC1B04] )
    {
      for ( j = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v81) & ((1 << MEMORY[0xAC1B0C]) - 1)));
            j;
            j = (_DWORD *)j[129] )
      {
        if ( *j == v81.left )
          break;
      }
    }
    GetDlgCtrlID(v59);
    v5[43] = 12;
    v5[59] = MEMORY[0xAC18A4];
    return 0;
  }
  if ( Msg <= 0xF )
  {
    if ( Msg == 15 )
    {
      if ( *((_BYTE *)v5 + 188) || v5[22] )
      {
        ValidateRect(v4, 0);
        return 0;
      }
      if ( !v5[4] )
      {
        ScreenDialogToClient(v4, &X);
        GetClientRect(hWnd, &Rect);
        v17 = __2_YAPAXI_Z(0x20u);
        if ( v17 )
        {
          v18 = Rect.bottom + 1;
          v19 = Rect.right + 1;
          v17[2] = Rect.bottom + 1;
          v17[1] = v19;
          v17[3] = 0;
          *v17 = &XSurface_Vtable;
          v17[4] = 2;
          Buffer::Init(v17 + 5, 0, 2 * v19 * v18);
          *v17 = &BSurface_Vtable;
          v20 = v17;
        }
        else
        {
          v20 = 0;
        }
        right = Rect.right;
        v5[4] = v20;
        ++MEMORY[0xAC48B4];
        v81.left = X.left;
        v85.bottom = Rect.bottom + 1;
        v81.bottom = Rect.bottom + 1;
        v85.left = 0;
        v85.top = 0;
        v85.right = right + 1;
        v81.top = X.top;
        v81.right = right + 1;
        (*(void (__thiscall **)(_DWORD *, struct tagRECT *, int, struct tagRECT *, _DWORD, int))(*v20 + 8))(
          v20,
          &v85,
          MEMORY[0x887310],
          &v81,
          0,
          1);
        v4 = hWnd;
      }
      ScreenDialogToClient(v4, &v84);
      if ( *((_BYTE *)v5 + 180) )
      {
        v85.left = v84.left;
        v85.top = v84.top;
        v85.bottom = v84.bottom - v84.top;
        v22 = v5[46];
        v85.right = v84.right - v84.left;
        (*(void (__thiscall **)(int, struct tagRECT *, int))(*(_DWORD *)MEMORY[0x887310] + 20))(
          MEMORY[0x887310],
          &v85,
          (*((unsigned __int8 *)v5 + 184) >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
        | (BYTE1(v22) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
        | (BYTE2(v22) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
      }
      v23 = v5[28];
      v24 = v23 == 1;
      if ( v23 < 2 )
      {
        if ( v5[10] && (!v23 || *((_BYTE *)v5 + 168)) )
        {
          WindowLongA = GetWindowLongA(hWnd, -16);
          v41 = 16;
          if ( (WindowLongA & 1) != 0 )
          {
            v41 = 17;
          }
          else if ( (WindowLongA & 2) != 0 )
          {
            v41 = 18;
          }
          v42 = v5[59];
          if ( (WindowLongA & 0x8000000) != 0 )
            v42 = MEMORY[0xAC1CB4];
          PrintFontLayout(
            MEMORY[0x887310],
            (unsigned __int16 *)v5[10],
            &v84,
            (_DWORD *)v5[25],
            v42,
            v41,
            v5[43],
            0,
            v5[32],
            v5[35]);
          v43 = v5[36];
          if ( v43 != -1 )
            PlayVocClass(v43, 0x2000, 1.0, 0);
          if ( v24 )
          {
            v44 = wcslen((const wchar_t *)v5[10]) + v5[35] + 1;
            v45 = v5[32];
            if ( v45 < v44 )
            {
              v46 = v5[34] + v45;
              v5[32] = v46;
              if ( v46 >= v44 )
                KillTimer(hWnd, 0);
            }
          }
        }
      }
      else
      {
        v25 = v23 == 2;
        v26 = v23 == 3;
        v78 = v23 == 3;
        v27 = v23 == 4;
        v77 = v27;
        if ( (v25 || v26 || v27) && (signed int)(GetTickCount() - v5[39]) > v5[40] )
        {
          Rect.left = v84.left;
          Rect.top = v84.top;
          Rect.right = v84.right - v84.left;
          Rect.bottom = v84.bottom - v84.top;
          GetClientRect(hWnd, &v85);
          left = v85.left;
          top = v85.top;
          v89 = v85.bottom - v85.top;
          v88 = v85.right - v85.left;
          (*(void (__thiscall **)(int, struct tagRECT *, _DWORD, LONG *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))(
            MEMORY[0x887310],
            &Rect,
            v5[4],
            &left,
            0,
            1);
          if ( v25 )
          {
            v28 = v5[5];
            if ( v28 )
            {
              v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 124))(v28);
              v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 128))(v28);
              v81 = Rect;
              if ( Rect.right > v29 )
              {
                v81.right = v29;
                v81.left = Rect.left + (Rect.right - v29) / 2;
              }
              if ( Rect.bottom > v30 )
              {
                v81.bottom = v30;
                v81.top += (Rect.bottom - v30) / 2;
              }
              Surface::BlitTransparent(
                &v81.left,
                MEMORY[0x887310],
                v28,
                (255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) | (255 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]));
              ValidateRect(hWnd, 0);
              return 0;
            }
          }
          else if ( v78 || v77 )
          {
            v31 = v5[30];
            if ( v31 )
            {
              v32 = Rect.left;
              v33 = *(__int16 *)(v31 + 4);
              v34 = Rect.top;
              v82 = v5[29];
              v81.left = v33;
              v35 = *(__int16 *)(v31 + 2);
              X.right = Rect.right;
              if ( Rect.right > v35 )
                v32 = Rect.left + (Rect.right - v35) / 2;
              if ( Rect.bottom > v81.left )
                v34 = (Rect.bottom - v81.left) / 2 + Rect.top;
              v81.left = v32;
              v81.top = v34;
              v36 = (struct tagRECT *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)MEMORY[0x887310] + 120))(
                                        MEMORY[0x887310],
                                        v91);
              v37 = v5[38];
              X = *v36;
              DrawToSurfaceSHP(MEMORY[0x887310], v82, v31, v37, &v81.left, &X.left, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0);
              if ( v77 )
              {
                if ( *((_BYTE *)v5 + 168) )
                {
                  v38 = v37 + 1;
                  if ( v38 >= v5[37] )
                    v38 = 0;
                  v5[38] = v38;
                  v39 = (HWND)v5[41];
                  if ( v39 )
                  {
                    SendMessageA(v39, 0x4D8u, v38, (LPARAM)hWnd);
                    ValidateRect(hWnd, 0);
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
      ValidateRect(hWnd, 0);
      return 0;
    }
    if ( Msg != 2 )
    {
      if ( Msg != 3 && Msg != 5 )
        goto LABEL_34;
LABEL_118:
      v55 = (void (__thiscall ***)(_DWORD, int))v5[4];
      if ( v55 )
        (**v55)(v55, 1);
      v5[4] = 0;
      InvalidateRect(hWnd, 0, 0);
      return 0;
    }
    v9 = (void (__thiscall ***)(_DWORD, int))v5[4];
    if ( v9 )
    {
      (**v9)(v9, 1);
      v5[4] = 0;
      v4 = hWnd;
    }
    if ( *((_BYTE *)v5 + 124) )
    {
      __3_YAXPAX_Z((void *)v5[30]);
      v5[30] = 0;
      v4 = hWnd;
    }
    v10 = v5[28];
    if ( v10 == 1 )
    {
      if ( *((_BYTE *)v5 + 168) )
        goto LABEL_28;
    }
    else if ( v10 == 4 )
    {
LABEL_28:
      KillTimer(v4, 0);
      v4 = hWnd;
    }
    v11 = v4;
    v12 = (void (__thiscall ***)(_DWORD, int))v5[22];
    if ( v12 )
    {
      (**v12)(v12, 1);
      v5[22] = 0;
    }
    KillTimer(v11, 0x65u);
    v13 = (void (__thiscall ***)(_DWORD, int))v5[24];
    if ( v13 )
    {
      (**v13)(v13, 1);
      v5[24] = 0;
    }
    v4 = hWnd;
    goto LABEL_34;
  }
  if ( Msg == 71 )
    goto LABEL_118;
  if ( Msg == 275 )
  {
    if ( wParam == 101 )
    {
      v47 = v5[22];
      if ( v47 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v47 + 4))(v47) )
          InvalidateRect(hWnd, 0, 0);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5[22] + 20))(v5[22]) )
        {
          if ( v5[23] )
          {
            (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v5[22] + 28))(v5[22], 1);
            Debug::Log();
            return 0;
          }
          v48 = (void (__thiscall ***)(_DWORD, int))v5[22];
          v49 = hWnd;
          if ( v48 )
          {
LABEL_100:
            (**v48)(v48, 1);
            v5[22] = 0;
          }
LABEL_101:
          KillTimer(v49, 0x65u);
          v50 = (void (__thiscall ***)(_DWORD, int))v5[24];
          if ( v50 )
          {
LABEL_174:
            (**v50)(v50, 1);
            v5[24] = 0;
            return 0;
          }
        }
      }
      return 0;
    }
    v51 = v5[28];
    if ( v51 == 1 )
    {
      InvalidateRect(v4, 0, 1);
      return 0;
    }
    v79 = v51 == 4;
    if ( v51 == 2 || v51 == 3 )
    {
      v52 = 1;
    }
    else
    {
      v52 = 0;
      if ( v51 != 4 )
        return 0;
    }
    if ( (signed int)(GetTickCount() - v5[39]) > v5[40] )
    {
      if ( v52 || v79 && *((_BYTE *)v5 + 168) )
      {
        InvalidateRect(hWnd, 0, 1);
        if ( v52 )
        {
          KillTimer(hWnd, 0);
          return 0;
        }
      }
      if ( !v5[37] )
      {
        KillTimer(hWnd, 0);
        v53 = v5[30];
        if ( v53 )
        {
          v54 = *(__int16 *)(v53 + 6);
          v5[37] = v54;
          SetTimer(hWnd, 0, v54, 0);
          return 0;
        }
      }
    }
    return 0;
  }
LABEL_34:
  v14 = 0;
  if ( MEMORY[0xAC1B4C] )
  {
    v15 = MEMORY[0xAC1B60](&hWnd);
    v4 = hWnd;
    v16 = *((_DWORD *)MEMORY[0xAC1B48] + (v15 & ((1 << MEMORY[0xAC1B54]) - 1)));
    if ( v16 )
    {
      while ( *(HWND *)v16 != hWnd )
      {
        v16 = *(_DWORD *)(v16 + 8);
        if ( !v16 )
          return CallWindowProcA(v14, v4, v8, wParam, lParam);
      }
      v76 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v16 + 4);
      if ( v76 )
        v14 = *v76;
    }
  }
  return CallWindowProcA(v14, v4, v8, wParam, lParam);
}


// ==== 0x006163A0  Checkbox::WndProc  this=Checkbox  sig=csp ====
LRESULT __stdcall Checkbox_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam)
{
  _DWORD *v4; // ebp
  HWND *v5; // eax
  UINT v6; // edi
  LPARAM v7; // ebx
  LONG WindowLongA; // eax
  int v9; // esi
  char v10; // cl
  LONG v11; // ebx
  char v12; // cl
  int v13; // esi
  int v14; // edi
  int v15; // eax
  unsigned __int16 *v16; // edx
  int v17; // eax
  BOOL v19; // esi
  HWND Parent; // edi
  unsigned __int16 v21; // ax
  LRESULT (__stdcall *v22)(HWND, UINT, WPARAM, LPARAM); // esi
  int v23; // eax
  LRESULT (__stdcall **v24)(HWND, UINT, WPARAM, LPARAM); // eax
  char v25; // cl
  LRESULT (__stdcall *v26)(HWND, UINT, WPARAM, LPARAM); // esi
  int v27; // eax
  char v28; // cl
  LRESULT (__stdcall **v29)(HWND, UINT, WPARAM, LPARAM); // eax
  HWND v30; // [esp-4h] [ebp-A8h]
  HWND v31; // [esp+10h] [ebp-94h] BYREF
  _DWORD v32[4]; // [esp+14h] [ebp-90h] BYREF
  _DWORD v33[4]; // [esp+24h] [ebp-80h] BYREF
  struct tagRECT v34; // [esp+34h] [ebp-70h] BYREF
  struct tagRECT v35; // [esp+44h] [ebp-60h] BYREF
  char Buffer[64]; // [esp+54h] [ebp-50h] BYREF
  struct tagRECT Rect; // [esp+94h] [ebp-10h] BYREF

  v31 = hWnd; /*0x6163ae*/
  v4 = 0; /*0x6163b8*/
  if ( MEMORY[0xAC1B04] ) /*0x6163be*/
  {
    v5 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v31) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6163df*/
    if ( v5 ) /*0x6163e4*/
    {
      while ( *v5 != v31 ) /*0x6163ec*/
      {
        v5 = (HWND *)v5[129]; /*0x6163ee*/
        if ( !v5 ) /*0x6163f6*/
          goto LABEL_7; /*0x6163f6*/
      }
      v4 = v5 + 1; /*0x6163fe*/
    }
  }
LABEL_7:
  if ( !v4 ) /*0x616403*/
    return 0; /*0x616403*/
  v6 = Msg; /*0x616409*/
  v7 = lParam; /*0x616410*/
  if ( Msg > 0x203 ) /*0x61641d*/
  {
    switch ( Msg ) /*0x6167b7*/
    {
      case 0x497u: /*0x6167b7*/
        v22 = 0; /*0x6167c3*/
        if ( !MEMORY[0xAC1B4C] ) /*0x6167c7*/
          goto LABEL_51; /*0x6167c7*/
        v23 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1))); /*0x6167eb*/
        if ( !v23 ) /*0x6167f0*/
          goto LABEL_51; /*0x6167f0*/
        break; /*0x6167f0*/
      case 0x4E5u: /*0x6167b7*/
        v25 = *((_BYTE *)v4 + 218); /*0x616833*/
        *((_BYTE *)v4 + 217) = lParam != 0; /*0x616840*/
        if ( v25 != (v7 != 0) ) /*0x616846*/
          goto LABEL_53; /*0x616846*/
        goto LABEL_54; /*0x616846*/
      case 0x4E6u: /*0x6167b7*/
        v28 = *((_BYTE *)v4 + 218); /*0x6168a6*/
        *((_BYTE *)v4 + 218) = lParam != 0; /*0x6168b3*/
        if ( v28 != (v7 != 0) ) /*0x6168b9*/
          goto LABEL_53; /*0x6168b9*/
        goto LABEL_54; /*0x6168b9*/
      case 0x4E7u: /*0x6167b7*/
        return *((unsigned __int8 *)v4 + 218); /*0x6168db*/
      default:
        goto LABEL_54;
    }
    while ( *(HWND *)v23 != hWnd ) /*0x6167fb*/
    {
      v23 = *(_DWORD *)(v23 + 8); /*0x6167fd*/
      if ( !v23 ) /*0x616802*/
        goto LABEL_51; /*0x616802*/
    }
    v24 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v23 + 4); /*0x61680a*/
    if ( v24 ) /*0x61680f*/
      v22 = *v24; /*0x616811*/
LABEL_51:
    v4[58] = CallWindowProcA(v22, hWnd, 0xF0u, 0, 0); /*0x616813*/
LABEL_54:
    v26 = 0; /*0x61685a*/
    if ( MEMORY[0xAC1B4C] ) /*0x616863*/
    {
      v27 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1))); /*0x61688b*/
      if ( v27 ) /*0x616890*/
      {
        while ( *(HWND *)v27 != hWnd ) /*0x61689b*/
        {
          v27 = *(_DWORD *)(v27 + 8); /*0x61689d*/
          if ( !v27 ) /*0x6168a2*/
            return CallWindowProcA(v26, hWnd, v6, wParam, v7); /*0x6168a2*/
        }
        v29 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v27 + 4); /*0x6168e2*/
        if ( v29 ) /*0x6168e7*/
          v26 = *v29; /*0x6168e9*/
      }
    }
    return CallWindowProcA(v26, hWnd, v6, wParam, v7); /*0x6168fe*/
  }
  if ( Msg != 515 ) /*0x616429*/
  {
    if ( Msg <= 0xF0 ) /*0x616435*/
    {
      if ( Msg == 240 ) /*0x61643b*/
        return v4[58]; /*0x6166a8*/
      if ( Msg >= 7 ) /*0x616444*/
      {
        if ( Msg <= 8 ) /*0x61644d*/
        {
LABEL_53:
          InvalidateRect(hWnd, 0, 0); /*0x616848*/
        }
        else if ( Msg == 15 && !v4[8] ) /*0x61645c*/
        {
          GetClientRect(hWnd, &Rect); /*0x616477*/
          ScreenDialogToClient(hWnd, &v35); /*0x616488*/
          ScreenDialogToClient(hWnd, &v34); /*0x616498*/
          v32[0] = v34.left; /*0x6164c3*/
          v32[1] = v34.top; /*0x6164c7*/
          v32[2] = 18; /*0x6164cb*/
          v32[3] = 18; /*0x6164d3*/
          WindowLongA = GetWindowLongA(hWnd, -16); /*0x6164db*/
          v9 = v4[58]; /*0x6164e1*/
          v10 = *((_BYTE *)v4 + 218); /*0x6164ed*/
          v11 = WindowLongA; /*0x6164f6*/
          if ( *((_BYTE *)v4 + 217) ) /*0x6164e7*/
          {
            if ( v9 == 1 ) /*0x616505*/
            {
              if ( v10 ) /*0x61650d*/
                strcpy(Buffer, MEMORY[0x835998]); /*0x616528*/
              else
                strcpy(Buffer, MEMORY[0x83598C]); /*0x61654f*/
            }
            else if ( v10 ) /*0x616560*/
            {
              strcpy(Buffer, MEMORY[0x835980]); /*0x61657b*/
            }
            else
            {
              strcpy(Buffer, MEMORY[0x835974]); /*0x61659f*/
            }
          }
          else
          {
            v12 = 117; /*0x6165ac*/
            if ( v9 == 1 ) /*0x6165ae*/
              v12 = 99; /*0x6165b0*/
            sprintf(Buffer, MEMORY[0x835968], v12); /*0x6165c0*/
          }
          v13 = HashTable::Find(MEMORY[0xAC4848], Buffer, 0); /*0x6165d9*/
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 128))(v13); /*0x6165e5*/
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 124))(v13); /*0x6165eb*/
          v33[0] = 0; /*0x6165f8*/
          v33[1] = 0; /*0x6165fc*/
          v33[2] = v15; /*0x616605*/
          v33[3] = v14; /*0x61660a*/
          (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x616616*/
            MEMORY[0x887310],
            v32,
            v13,
            v33,
            0,
            1);
          if ( (v11 & 0x8000000) != 0 ) /*0x616621*/
            DSurface::FillRectWithColor(0, MEMORY[0xAC4898]); /*0x616635*/
          v16 = (unsigned __int16 *)v4[10]; /*0x61663e*/
          v35.left += 26; /*0x616646*/
          if ( v16 ) /*0x61664a*/
          {
            v17 = MEMORY[0xAC18A4]; /*0x61664c*/
            if ( (v11 & 0x8000000) != 0 ) /*0x616653*/
              v17 = MEMORY[0xAC1CB4]; /*0x616655*/
            PrintFontLayout(MEMORY[0x887310], v16, &v35, (_DWORD *)v4[25], v17, 4, 12, 0, 0, 0); /*0x616674*/
          }
          ValidateRect(hWnd, 0); /*0x616683*/
          return 0; /*0x616683*/
        }
      }
      goto LABEL_54; /*0x616461*/
    }
    if ( Msg == 241 ) /*0x6166b1*/
    {
      v4[58] = wParam; /*0x6166c9*/
      InvalidateRect(hWnd, 0, 0); /*0x6166d9*/
      return 0; /*0x6166eb*/
    }
    if ( Msg != 513 ) /*0x6166b9*/
      goto LABEL_54; /*0x6166b9*/
  }
  if ( (unsigned __int16)lParam >= 0x12u || HIWORD(lParam) >= 0x12u ) /*0x616708*/
    return 0; /*0x616695*/
  v19 = v4[58] != 1; /*0x61671e*/
  v4[58] = v19; /*0x616722*/
  InvalidateRect(hWnd, 0, 0); /*0x616730*/
  PlayVocClass(MEMORY[0x8871E0]->SlaveMinerUndeploySound, 0x2000, 1.0, 0); /*0x61674e*/
  Parent = GetParent(hWnd); /*0x616761*/
  v30 = hWnd; /*0x61676a*/
  v21 = GetWindowLongA(hWnd, -12); /*0x61676e*/
  SendMessageA(Parent, 0x111u, (v19 << 16) | v21, (LPARAM)v30); /*0x61678b*/
  return 0; /*0x616689*/
}


// ==== 0x00616980  ButtonOwnerDraw::DlgProc  this=ButtonOwnerDraw  sig=csp ====
LRESULT __stdcall sub_616980(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  HWND *v4; // eax
  LONG left; // ebp
  LONG top; // edi
  LONG v7; // esi
  int v8; // ebx
  _DWORD *v10; // edx
  LONG v11; // eax
  int v12; // ecx
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // ecx
  LONG v16; // edx
  int v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // ecx
  LONG *v20; // edi
  int v21; // ecx
  int v22; // edi
  int v23; // edx
  int v24; // edx
  LONG v25; // ecx
  int *v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edi
  LRESULT (__stdcall *v30)(HWND, UINT, WPARAM, LPARAM); // esi
  int v31; // eax
  HWND v32; // ecx
  LRESULT (__stdcall **v33)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT (__stdcall *v34)(HWND, UINT, WPARAM, LPARAM); // esi
  int v35; // eax
  HWND v36; // ecx
  LRESULT (__stdcall **v37)(HWND, UINT, WPARAM, LPARAM); // eax
  HWND Parent; // eax
  LRESULT (__stdcall *v39)(HWND, UINT, WPARAM, LPARAM); // esi
  int v40; // eax
  HWND v41; // ecx
  LRESULT (__stdcall **v42)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v43; // esi
  char v44; // [esp+4Fh] [ebp-D9h]
  _DWORD *v45; // [esp+50h] [ebp-D8h]
  int v46; // [esp+54h] [ebp-D4h]
  int v47; // [esp+54h] [ebp-D4h]
  int v48; // [esp+58h] [ebp-D0h] BYREF
  LONG v49; // [esp+5Ch] [ebp-CCh]
  int v50; // [esp+60h] [ebp-C8h]
  int v51; // [esp+64h] [ebp-C4h]
  LONG v52; // [esp+68h] [ebp-C0h] BYREF
  LONG v53; // [esp+6Ch] [ebp-BCh]
  int v54; // [esp+70h] [ebp-B8h]
  int v55; // [esp+74h] [ebp-B4h]
  LONG v56; // [esp+78h] [ebp-B0h] BYREF
  LONG v57; // [esp+7Ch] [ebp-ACh]
  int v58; // [esp+80h] [ebp-A8h]
  int v59; // [esp+84h] [ebp-A4h]
  int v60; // [esp+88h] [ebp-A0h] BYREF
  int v61; // [esp+8Ch] [ebp-9Ch]
  int v62; // [esp+90h] [ebp-98h]
  int v63; // [esp+94h] [ebp-94h]
  _DWORD v64[2]; // [esp+98h] [ebp-90h] BYREF
  struct tagRECT v65; // [esp+A0h] [ebp-88h] BYREF
  struct tagRECT v66; // [esp+B0h] [ebp-78h] BYREF
  LONG WindowLongA; // [esp+C0h] [ebp-68h]
  int v68; // [esp+C4h] [ebp-64h]
  HWND v69; // [esp+C8h] [ebp-60h] BYREF
  struct tagRECT Rect; // [esp+CCh] [ebp-5Ch] BYREF
  int v71; // [esp+DCh] [ebp-4Ch] BYREF
  int v72; // [esp+E0h] [ebp-48h]
  int v73; // [esp+E4h] [ebp-44h]
  int v74; // [esp+E8h] [ebp-40h]
  _DWORD v75[2]; // [esp+ECh] [ebp-3Ch] BYREF
  int v76; // [esp+F4h] [ebp-34h]
  LONG v77; // [esp+F8h] [ebp-30h]
  int yTop; // [esp+FCh] [ebp-2Ch]
  char Buffer[40]; // [esp+100h] [ebp-28h] BYREF

  v45 = 0; /*0x61698d*/
  v69 = hWnd; /*0x616995*/
  if ( MEMORY[0xAC1B04] ) /*0x6169a0*/
  {
    v4 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v69) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x6169c1*/
    if ( v4 ) /*0x6169c6*/
    {
      while ( *v4 != v69 ) /*0x6169ce*/
      {
        v4 = (HWND *)v4[129]; /*0x6169d0*/
        if ( !v4 ) /*0x6169d8*/
          goto LABEL_7; /*0x6169d8*/
      }
      v45 = v4 + 1; /*0x6169e3*/
    }
  }
LABEL_7:
  memset(&v66, 0, sizeof(v66)); /*0x6169e7*/
  ScreenDialogToClient(hWnd, &v66); /*0x616a0b*/
  left = v66.left; /*0x616a22*/
  memset(&Rect, 0, sizeof(Rect)); /*0x616a2c*/
  top = v66.top; /*0x616a33*/
  v7 = v66.bottom - v66.top; /*0x616a35*/
  v49 = v66.top; /*0x616a4e*/
  v8 = v66.right - v66.left; /*0x616a52*/
  GetClientRect(hWnd, &Rect); /*0x616a5b*/
  v46 = v45[58]; /*0x616a75*/
  WindowLongA = GetWindowLongA(hWnd, -16); /*0x616a7f*/
  if ( Msg <= 0x201 ) /*0x616a92*/
  {
    if ( Msg != 513 ) /*0x616a98*/
    {
      if ( Msg != 15 ) /*0x616aa1*/
      {
        if ( Msg == 240 ) /*0x616aa8*/
          return v45[58]; /*0x616aed*/
        if ( Msg == 241 ) /*0x616aab*/
        {
          v45[58] = wParam; /*0x616ac0*/
          InvalidateRect(hWnd, 0, 1); /*0x616ace*/
        }
        goto LABEL_61; /*0x616ad4*/
      }
      v10 = v45; /*0x616af6*/
      yTop = MEMORY[0xAC18A4]; /*0x616afa*/
      v11 = v7; /*0x616b01*/
      v12 = v45[4]; /*0x616b03*/
      v75[0] = left; /*0x616b06*/
      v75[1] = top; /*0x616b0f*/
      v76 = v8; /*0x616b16*/
      v77 = v7; /*0x616b1d*/
      if ( !v12 ) /*0x616b24*/
      {
        v13 = __2_YAPAXI_Z(0x20u); /*0x616b31*/
        if ( v13 ) /*0x616b3a*/
        {
          v14 = Rect.bottom + 1; /*0x616b4a*/
          v15 = Rect.right + 1; /*0x616b4b*/
          v13[2] = Rect.bottom + 1; /*0x616b4c*/
          v13[1] = v15; /*0x616b54*/
          v13[3] = 0; /*0x616b5c*/
          *v13 = &XSurface_Vtable; /*0x616b5f*/
          v13[4] = 2; /*0x616b65*/
          Buffer::Init(v13 + 5, 0, 2 * v15 * v14); /*0x616b6c*/
          *v13 = &BSurface_Vtable; /*0x616b71*/
        }
        else
        {
          v13 = 0; /*0x616b7b*/
        }
        v60 = 0; /*0x616b81*/
        v61 = 0; /*0x616b85*/
        v45[4] = v13; /*0x616b8b*/
        ++MEMORY[0xAC48B4]; /*0x616ba4*/
        v65.left = v66.left; /*0x616bb3*/
        v63 = Rect.bottom + 1; /*0x616bbe*/
        v65.bottom = Rect.bottom + 1; /*0x616bc2*/
        v65.top = v66.top; /*0x616bca*/
        v62 = Rect.right + 1; /*0x616bd9*/
        v65.right = Rect.right + 1; /*0x616bdd*/
        (*(void (__thiscall **)(_DWORD *, int *, int, struct tagRECT *, _DWORD, int))(*v13 + 8))( /*0x616be7*/
          v13,
          &v60,
          MEMORY[0x887310],
          &v65,
          0,
          1);
        v11 = v77; /*0x616bea*/
        top = v49; /*0x616bf1*/
        v10 = v45; /*0x616bf5*/
      }
      if ( v10[5] ) /*0x616bf9*/
      {
        v56 = v10[5]; /*0x616c00*/
        v47 = v46 & 1; /*0x616c0b*/
        if ( v47 ) /*0x616c0f*/
        {
          v16 = v10[6]; /*0x616c11*/
          if ( v16 ) /*0x616c16*/
            v56 = v16; /*0x616c18*/
        }
        v50 = v76; /*0x616c35*/
        v51 = v11; /*0x616c50*/
        v48 = 0; /*0x616c57*/
        v49 = 0; /*0x616c5b*/
        (*(void (__thiscall **)(int, _DWORD *, LONG, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x616c69*/
          MEMORY[0x887310],
          v75,
          v56,
          &v48,
          0,
          1);
      }
      else
      {
        v17 = v46 & 1; /*0x616c77*/
        v44 = 117; /*0x616c7a*/
        v47 = v17; /*0x616c7e*/
        if ( v17 ) /*0x616c82*/
          v44 = 100; /*0x616c84*/
        if ( (WindowLongA & 0x8000000) != 0 ) /*0x616c94*/
          v44 = 117; /*0x616c96*/
        v18 = 0; /*0x616c9f*/
        v71 = 7; /*0x616ca1*/
        v72 = 7; /*0x616ca8*/
        v64[0] = 24; /*0x616cb4*/
        v56 = 10; /*0x616cbc*/
        v57 = 10; /*0x616cc0*/
        v64[1] = 30; /*0x616cc4*/
        v19 = 0; /*0x616ccc*/
        v20 = v64; /*0x616cce*/
        do /*0x616ce3*/
        {
          if ( *v20 > v11 && v19 ) /*0x616cd8*/
            break; /*0x616cd8*/
          v18 = v19++; /*0x616cda*/
          ++v20; /*0x616cdd*/
        }
        while ( v19 < 2 ); /*0x616ce3*/
        v21 = *(&v71 + v18); /*0x616ce5*/
        v22 = v64[v18]; /*0x616cec*/
        v23 = *(&v56 + v18); /*0x616cf0*/
        v68 = v21; /*0x616cf4*/
        v64[0] = v23; /*0x616cff*/
        v24 = v45[4]; /*0x616d03*/
        if ( v24 ) /*0x616d0a*/
        {
          v71 = 0; /*0x616d17*/
          v72 = 0; /*0x616d1e*/
          v56 = v66.left; /*0x616d2c*/
          v57 = v66.top; /*0x616d36*/
          v74 = Rect.bottom + 1; /*0x616d43*/
          v59 = Rect.bottom + 1; /*0x616d4a*/
          v73 = Rect.right + 1; /*0x616d58*/
          v58 = Rect.right + 1; /*0x616d5f*/
          (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x616d6a*/
            MEMORY[0x887310],
            &v56,
            v24,
            &v71,
            0,
            1);
          InvalidateRect(hWnd, 0, 0); /*0x616d79*/
          v11 = v77; /*0x616d7f*/
        }
        v25 = (v11 - v22) / 2 + v49; /*0x616d95*/
        v49 = v25; /*0x616d99*/
        if ( v17 ) /*0x616d9d*/
          v49 = v25 + 2; /*0x616da4*/
        v71 = v44; /*0x616dbe*/
        sprintf(Buffer, MEMORY[0x83589C], v44, 101, v22); /*0x616dc5*/
        v26 = (int *)HashTable::Find(MEMORY[0xAC4848], Buffer, 0); /*0x616ddc*/
        v27 = *v26; /*0x616de1*/
        v56 = (LONG)v26; /*0x616de5*/
        v7 = (*(int (__thiscall **)(int *))(v27 + 128))(v26); /*0x616def*/
        v53 = v49; /*0x616df5*/
        v54 = v68; /*0x616e04*/
        v62 = v68; /*0x616e08*/
        v61 = 0; /*0x616e16*/
        v60 = 0; /*0x616e1a*/
        v52 = left; /*0x616e2d*/
        v55 = v22; /*0x616e31*/
        v63 = v22; /*0x616e35*/
        (*(void (__thiscall **)(int, LONG *, LONG, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x616e40*/
          MEMORY[0x887310],
          &v52,
          v56,
          &v60,
          0,
          1);
        sprintf(Buffer, MEMORY[0x83588C], v71, 101, v22); /*0x616e5b*/
        v28 = HashTable::Find(MEMORY[0xAC4848], Buffer, 0); /*0x616e72*/
        v65.bottom = v7; /*0x616e7b*/
        v65.top = v49; /*0x616e8c*/
        v65.left = left + v68; /*0x616e90*/
        v56 = v28; /*0x616e9a*/
        v65.right = v8 - v64[0]; /*0x616ea0*/
        v65.bottom = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 128))(v28); /*0x616eb4*/
        Surface::TileBlit(&v65, MEMORY[0x887310], v56, 0, 0); /*0x616ecc*/
        sprintf(Buffer, MEMORY[0x83587C], v71, 101, v22); /*0x616ee9*/
        v29 = HashTable::Find(MEMORY[0xAC4848], Buffer, 0); /*0x616f05*/
        v53 = v49; /*0x616f11*/
        v55 = v7; /*0x616f21*/
        v52 = left + v8 - v64[0]; /*0x616f25*/
        v54 = v64[0]; /*0x616f29*/
        v55 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 128))(v29); /*0x616f3b*/
        v63 = v55; /*0x616f3f*/
        v61 = 0; /*0x616f47*/
        v60 = 0; /*0x616f4b*/
        v62 = v54; /*0x616f50*/
        (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x616f67*/
          MEMORY[0x887310],
          &v52,
          v29,
          &v60,
          0,
          1);
        top = v49; /*0x616f6a*/
      }
      if ( !v45[5] && v45[10] ) /*0x616f79*/
      {
        GetClientRect(hWnd, &v65); /*0x616f8d*/
        v49 = top + 1; /*0x616f9a*/
        v48 = left; /*0x616fa6*/
        v50 = v8 + left - 2; /*0x616fac*/
        v51 = v7 + top - 2; /*0x616fb0*/
        if ( v47 ) /*0x616fb4*/
        {
          v48 = left + 2; /*0x616fc0*/
          v49 += 4; /*0x616fc4*/
        }
        PrintFontLayout(MEMORY[0x887310], (unsigned __int16 *)v45[10], &v48, (_DWORD *)v45[25], yTop, 5, 12, 0, 0, 0); /*0x616ff0*/
      }
      if ( (WindowLongA & 0x8000000) != 0 ) /*0x617000*/
        DSurface::FillRectWithColor(0, 128); /*0x617016*/
      ValidateRect(hWnd, 0); /*0x617025*/
      return 0; /*0x617037*/
    }
    goto LABEL_59; /*0x616a98*/
  }
  if ( Msg != 514 ) /*0x61703f*/
  {
    if ( Msg != 515 ) /*0x617046*/
    {
      if ( Msg == 1175 ) /*0x617051*/
      {
        v30 = 0; /*0x61705c*/
        if ( MEMORY[0xAC1B4C] /*0x617089*/
          && (v31 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
        {
          v32 = hWnd; /*0x61708b*/
          while ( *(HWND *)v31 != hWnd ) /*0x617094*/
          {
            v31 = *(_DWORD *)(v31 + 8); /*0x617096*/
            if ( !v31 ) /*0x61709b*/
              goto LABEL_58; /*0x61709b*/
          }
          v33 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v31 + 4); /*0x6170a3*/
          if ( v33 ) /*0x6170a8*/
            v30 = *v33; /*0x6170aa*/
        }
        else
        {
          v32 = hWnd; /*0x6170ae*/
        }
LABEL_58:
        v45[58] = CallWindowProcA(v30, v32, 0xF0u, 0, 0); /*0x6170b5*/
      }
      goto LABEL_61; /*0x6170d0*/
    }
LABEL_59:
    if ( v45[58] ) /*0x6170d6*/
      return 0; /*0x6170de*/
    v45[58] = 1; /*0x6170e4*/
    InvalidateRect(hWnd, 0, 1); /*0x6170fa*/
    PlayVocClass(*((_DWORD *)MEMORY[0x8871E0] + 451), 0x2000, 1.0, 0); /*0x617117*/
LABEL_61:
    v34 = 0; /*0x61711c*/
    if ( MEMORY[0xAC1B4C] /*0x61714e*/
      && (v35 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
    {
      v36 = hWnd; /*0x617150*/
      while ( *(HWND *)v35 != hWnd ) /*0x617159*/
      {
        v35 = *(_DWORD *)(v35 + 8); /*0x61715b*/
        if ( !v35 ) /*0x617160*/
          return CallWindowProcA(v34, v36, Msg, wParam, lParam); /*0x617160*/
      }
      v37 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v35 + 4); /*0x617168*/
      if ( v37 ) /*0x61716d*/
        v34 = *v37; /*0x61716f*/
    }
    else
    {
      v36 = hWnd; /*0x617173*/
    }
    return CallWindowProcA(v34, v36, Msg, wParam, lParam); /*0x6171a4*/
  }
  Parent = GetParent(hWnd); /*0x6171af*/
  LockWindowUpdate(Parent); /*0x6171bc*/
  v39 = 0; /*0x6171c3*/
  if ( MEMORY[0xAC1B4C] /*0x6171f0*/
    && (v40 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
  {
    v41 = hWnd; /*0x6171f2*/
    while ( *(HWND *)v40 != hWnd ) /*0x6171fb*/
    {
      v40 = *(_DWORD *)(v40 + 8); /*0x6171fd*/
      if ( !v40 ) /*0x617202*/
        goto LABEL_80; /*0x617202*/
    }
    v42 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v40 + 4); /*0x61720a*/
    if ( v42 ) /*0x61720f*/
      v39 = *v42; /*0x617211*/
  }
  else
  {
    v41 = hWnd; /*0x617215*/
  }
LABEL_80:
  v43 = CallWindowProcA(v39, v41, 0x202u, wParam, lParam); /*0x61721c*/
  LockWindowUpdate(0); /*0x61723d*/
  return v43; /*0x616ae7*/
}


// ==== 0x00617250  ComboBoxDropDown::WndProc  this=ComboBoxDropDown  sig=csp ====
WPARAM __stdcall ComboBoxDropDown::WndProc(HWND hWnd, UINT Msg, signed int wParam, _WORD *lParam)
{
  signed int v4; // edi
  WNDPROC v5; // esi
  int v6; // eax
  HWND v7; // ecx
  WNDPROC *v8; // eax
  _DWORD *v9; // ebx
  HWND v10; // ecx
  HWND *v11; // eax
  WPARAM result; // eax
  UINT v13; // esi
  WPARAM v14; // eax
  _DWORD *v15; // edi
  int v16; // ebp
  int v17; // esi
  HWND Parent; // eax
  _DWORD *v19; // ecx
  _DWORD *v20; // eax
  HWND v21; // edi
  unsigned int v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  __int16 *v26; // edi
  __int16 v27; // dx
  _DWORD *v28; // esi
  char v29; // si
  char v30; // di
  char v31; // bp
  int v32; // eax
  unsigned int v33; // edx
  _DWORD *v34; // esi
  char v35; // bl
  unsigned int v36; // edi
  HWND v37; // ecx
  LRESULT (__stdcall *v38)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v39; // eax
  int v40; // eax
  LRESULT (__stdcall **v41)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v42; // eax
  _DWORD *v43; // esi
  int v44; // ebx
  int v45; // eax
  _DWORD *v46; // ebp
  size_t v47; // esi
  int v48; // eax
  _WORD *v49; // edi
  HWND v50; // eax
  _WORD *v51; // esi
  _DWORD *v52; // eax
  _DWORD *v53; // edx
  LRESULT v54; // eax
  char v55; // bl
  LRESULT (__stdcall *v56)(HWND, UINT, WPARAM, LPARAM); // esi
  int v57; // eax
  int v58; // eax
  int v59; // eax
  HWND v60; // eax
  HWND *v61; // eax
  _DWORD *v62; // esi
  void (__thiscall ***v63)(_DWORD, int); // ecx
  _DWORD *v64; // eax
  _DWORD *v65; // eax
  _DWORD *i; // eax
  int v67; // edi
  HWND v68; // eax
  LRESULT v69; // eax
  int v70; // esi
  LRESULT v71; // ebx
  int v72; // ebp
  LRESULT v73; // eax
  int v74; // ecx
  HWND v75; // eax
  int v76; // edi
  int v77; // ebp
  HWND v78; // eax
  int v79; // eax
  _DWORD *v80; // eax
  _DWORD *v81; // eax
  void **v82; // eax
  void **v83; // ebx
  _DWORD *v84; // esi
  void *v85; // eax
  void *v86; // edx
  wchar_t *v87; // eax
  int v88; // edx
  void *v89; // eax
  _DWORD *v90; // ecx
  _DWORD *v91; // eax
  void *v92; // esi
  HWND v93; // eax
  int v94; // edi
  LRESULT v95; // eax
  HWND v96; // eax
  LRESULT v97; // eax
  BOOL v98; // esi
  WPARAM v99; // ebx
  size_t v100; // eax
  int v101; // eax
  HWND v103; // eax
  wchar_t *v104; // ebp
  LRESULT v105; // eax
  size_t v106; // eax
  _DWORD *v107; // eax
  LPARAM v108; // esi
  HWND v109; // eax
  LRESULT v110; // eax
  _DWORD *v111; // eax
  _DWORD *v112; // ecx
  HWND Window; // esi
  _WORD *v114; // ebx
  WPARAM v115; // ebp
  LRESULT v116; // eax
  wchar_t *v117; // ebp
  UINT v118; // esi
  LRESULT v119; // eax
  const wchar_t **v120; // ebx
  HWND v121; // esi
  int v122; // edi
  LRESULT (__stdcall **v123)(HWND, UINT, WPARAM, LPARAM); // eax
  WPARAM v124; // [esp+4h] [ebp-2B98h]
  WPARAM v125; // [esp+4h] [ebp-2B98h]
  HINSTANCE v126; // [esp+4h] [ebp-2B98h]
  WNDPROC v127; // [esp+4h] [ebp-2B98h]
  HWND v128; // [esp+8h] [ebp-2B94h]
  HWND v129; // [esp+8h] [ebp-2B94h]
  char *v130; // [esp+8h] [ebp-2B94h]
  char *v131; // [esp+8h] [ebp-2B94h]
  struct tagRECT *v132; // [esp+Ch] [ebp-2B90h]
  int v133; // [esp+10h] [ebp-2B8Ch]
  int v134; // [esp+14h] [ebp-2B88h]
  WNDPROC lpPrevWndFunc; // [esp+1Ch] [ebp-2B80h] BYREF
  HWND WindowLongA; // [esp+20h] [ebp-2B7Ch] BYREF
  int v137; // [esp+24h] [ebp-2B78h]
  WPARAM v138; // [esp+28h] [ebp-2B74h] BYREF
  unsigned int v139; // [esp+2Ch] [ebp-2B70h]
  HWND v140; // [esp+30h] [ebp-2B6Ch] BYREF
  _DWORD *v141; // [esp+34h] [ebp-2B68h]
  char v142; // [esp+3Bh] [ebp-2B61h]
  LRESULT v143; // [esp+3Ch] [ebp-2B60h]
  int v144[2]; // [esp+40h] [ebp-2B5Ch]
  struct tagRECT v145; // [esp+48h] [ebp-2B54h] BYREF
  struct tagRECT v146; // [esp+58h] [ebp-2B44h] BYREF
  LONG left; // [esp+68h] [ebp-2B34h] BYREF
  LONG top; // [esp+6Ch] [ebp-2B30h]
  LONG v149; // [esp+70h] [ebp-2B2Ch]
  LONG v150; // [esp+74h] [ebp-2B28h]
  struct tagRECT ClassName; // [esp+78h] [ebp-2B24h] BYREF
  int v152; // [esp+88h] [ebp-2B14h] BYREF
  int v153; // [esp+8Ch] [ebp-2B10h]
  int v154; // [esp+90h] [ebp-2B0Ch]
  int v155; // [esp+94h] [ebp-2B08h]
  struct tagRECT v156; // [esp+98h] [ebp-2B04h] BYREF
  struct tagRECT v157; // [esp+A8h] [ebp-2AF4h] BYREF
  struct tagRECT v158; // [esp+B8h] [ebp-2AE4h]
  int v159; // [esp+C8h] [ebp-2AD4h] BYREF
  int v160; // [esp+CCh] [ebp-2AD0h]
  int v161; // [esp+D0h] [ebp-2ACCh]
  int v162; // [esp+D4h] [ebp-2AC8h]
  int v163; // [esp+D8h] [ebp-2AC4h]
  _DWORD v164[4]; // [esp+DCh] [ebp-2AC0h] BYREF
  struct tagRECT Rect; // [esp+ECh] [ebp-2AB0h] BYREF
  struct tagRECT v166; // [esp+FCh] [ebp-2AA0h] BYREF
  struct tagRECT v167; // [esp+10Ch] [ebp-2A90h] BYREF
  void *v168[128]; // [esp+11Ch] [ebp-2A80h] BYREF
  _BYTE v169[128]; // [esp+31Ch] [ebp-2880h] BYREF
  _WORD v170[5120]; // [esp+39Ch] [ebp-2800h] BYREF

  v4 = 0;
  v5 = 0;
  v137 = 0;
  WindowLongA = (HWND)1;
  v142 = 1;
  lpPrevWndFunc = 0;
  if ( MEMORY[0xAC1B4C]
    && (v6 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
  {
    v7 = hWnd;
    while ( *(HWND *)v6 != hWnd )
    {
      v6 = *(_DWORD *)(v6 + 8);
      if ( !v6 )
        goto LABEL_10;
    }
    v8 = (WNDPROC *)(v6 + 4);
    if ( v8 )
    {
      v5 = *v8;
      lpPrevWndFunc = *v8;
    }
  }
  else
  {
    v7 = hWnd;
  }
LABEL_10:
  ScreenDialogToClient(v7, &v145);
  GetClientRect(hWnd, &Rect);
  GetWindowRect(hWnd, &v167);
  v9 = 0;
  v10 = hWnd;
  v141 = 0;
  v140 = hWnd;
  if ( MEMORY[0xAC1B04] )
  {
    v11 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v140) & ((1 << MEMORY[0xAC1B0C]) - 1)));
    if ( v11 )
    {
      while ( *v11 != v140 )
      {
        v11 = (HWND *)v11[129];
        if ( !v11 )
          goto LABEL_16;
      }
      v9 = v11 + 1;
      v141 = v11 + 1;
    }
LABEL_16:
    v10 = hWnd;
  }
  if ( !v9 )
    return CallWindowProcA(v5, v10, Msg, wParam, (LPARAM)lParam);
  v13 = Msg;
  v14 = wParam;
  if ( Msg <= 0x203 )
  {
    if ( Msg == 515 )
    {
LABEL_207:
      PlayVocClass(MEMORY[0x8871E0]->SlavesFreeSound, 0x2000, 1.0, 0);
      if ( (unsigned __int16)lParam > Rect.right - 20 )
      {
        v95 = SendMessageA(hWnd, 0x157u, 0, 0);
        PostMessageA(hWnd, 0x14Fu, v95 != 1, 0);
      }
      return 0;
    }
    if ( Msg <= 0x141 )
    {
      if ( Msg == 321 )
      {
LABEL_260:
        if ( (GetWindowLongA(v10, -16) & 3) != 3 )
        {
          Window = GetWindow(hWnd, 5u);
          if ( Window )
          {
            v114 = lParam;
            v115 = wParam;
            do
            {
              GetClassNameA(Window, (LPSTR)&ClassName, 16);
              if ( !_strcmpi(&ClassName, MEMORY[0x8359A4]) )
              {
                if ( Msg == 7 )
                {
                  SetFocus(Window);
                  v4 = 0;
                }
                else
                {
                  if ( Msg == 321 )
                    v116 = SendMessageA(Window, 0xC5u, v115, (LPARAM)v114);
                  else
                    v116 = SendMessageA(Window, Msg, v115, (LPARAM)v114);
                  v4 = v116;
                }
              }
              Window = GetWindow(Window, 2u);
            }
            while ( Window );
            return v4;
          }
          return v4;
        }
        goto LABEL_136;
      }
      if ( Msg <= 0xF )
      {
        if ( Msg != 15 )
        {
          switch ( Msg )
          {
            case 2u:
              SendMessageA(v10, 0x14Fu, 0, 0);
              goto LABEL_136;
            case 7u:
            case 0xCu:
            case 0xDu:
            case 0xEu:
              goto LABEL_260;
            default:
              goto LABEL_137;
          }
        }
        v15 = 0;
        v144[0] = v9[25];
        v143 = SendMessageA(v10, 0x157u, 0, 0);
        GetWindowRect(hWnd, &v166);
        SendMessageA(hWnd, 0x152u, 0, (LPARAM)&v146);
        v150 = 24;
        v152 = 0;
        top = v145.top;
        v153 = 0;
        v146.top += v145.bottom - v145.top + 1;
        v16 = v145.bottom - v145.top;
        v146.bottom = v146.bottom + v145.top - v145.bottom - 1;
        v17 = v145.right - v145.left;
        left = v145.left;
        v149 = v145.right - v145.left;
        v154 = v145.right - v145.left;
        v155 = v145.bottom - v145.top;
        Parent = GetParent(hWnd);
        v138 = (WPARAM)Parent;
        v139 = 0;
        if ( Parent )
        {
          if ( MEMORY[0xAC1B04] )
          {
            v19 = (_DWORD *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v138) & ((1 << MEMORY[0xAC1B0C]) - 1)));
            Parent = (HWND)v138;
            if ( v19 )
            {
              while ( *v19 != v138 )
              {
                v19 = (_DWORD *)v19[129];
                if ( !v19 )
                  goto LABEL_34;
              }
              v15 = v19 + 1;
              v139 = (unsigned int)(v19 + 1);
            }
          }
        }
LABEL_34:
        ScreenDialogToClient(Parent, &ClassName);
        v160 = v153;
        v159 = v152;
        v161 = v154;
        v162 = v155;
        if ( v15 && v15[4] )
        {
          v159 = v145.left + v152 - ClassName.left;
          v160 += v145.top - ClassName.top;
        }
        if ( !v9[4] )
        {
          v20 = __2_YAPAXI_Z(0x20u);
          v21 = (HWND)v20;
          if ( v20 )
          {
            v20[1] = v17;
            v20[2] = v16;
            v20[3] = 0;
            *v20 = &XSurface_Vtable;
            v20[4] = 2;
            Buffer::Init(v20 + 5, 0, 2 * v17 * v16);
            *(_DWORD *)v21 = &BSurface_Vtable;
          }
          else
          {
            v21 = 0;
          }
          v22 = v139;
          WindowLongA = v21;
          v141[4] = v21;
          ++MEMORY[0xAC48B4];
          if ( v22 )
          {
            v23 = *(_DWORD *)(v22 + 16);
            if ( v23 )
              (*(void (__thiscall **)(HWND, int *, int, int *, _DWORD, int))(*(_DWORD *)v21 + 8))(
                v21,
                &v152,
                v23,
                &v159,
                0,
                1);
          }
          v24 = v17 * v16;
          v25 = (*(int (__thiscall **)(HWND, _DWORD, _DWORD))(*(_DWORD *)v21 + 92))(v21, 0, 0);
          v163 = v25;
          if ( v24 > 0 )
          {
            v26 = (__int16 *)v25;
            do
            {
              v27 = *v26++;
              LOBYTE(v139) = *((_BYTE *)v141 + 200);
              g_GameScreenFlags = (unsigned __int8)v139;
              g_GameScreenConfig = 255 - (unsigned __int8)v139;
              --v24;
              *(v26 - 1) = ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v27 & MEMORY[0xAC48BC])) >> 8)
                         | MEMORY[0xAC48B8]
                         & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v27 & MEMORY[0xAC48B8])) >> 8)
                         | HIWORD(MEMORY[0xAC48B8])
                         & ((g_GameScreenConfig * (unsigned int)(unsigned __int16)(v27 & HIWORD(MEMORY[0xAC48B8]))) >> 8);
            }
            while ( v24 );
            v25 = v163;
            v21 = WindowLongA;
          }
          if ( v25 )
            (*(void (__thiscall **)(HWND))(*(_DWORD *)v21 + 96))(v21);
        }
        v28 = v141;
        SetupDialogRenderBuffer(&left, hWnd, v141[50]);
        DSurface::FillRectWithColor(&left, MEMORY[0x887310], 0, v28[50]);
        WindowLongA = (HWND)GetWindowLongA(hWnd, -16);
        if ( *((_BYTE *)v28 + 205) )
        {
          v29 = MEMORY[0x8A0DD4];
          v30 = MEMORY[0x8A0DD0];
          v31 = MEMORY[0x8A0DE4];
          if ( MEMORY[0xAC1DD8] == -1 )
            v32 = -1;
          else
            v32 = (BYTE1(MEMORY[0xAC1DD8]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | (BYTE2(MEMORY[0xAC1DD8]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
                | ((int)(unsigned __int8)MEMORY[0xAC1DD8] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
          v139 = (unsigned int)WindowLongA & 0x8000000;
          if ( ((unsigned int)WindowLongA & 0x8000000) != 0 )
          {
            v32 = MEMORY[0xAC4620];
            if ( MEMORY[0xAC4620] != -1 )
            {
              v33 = BYTE2(MEMORY[0xAC4620]);
LABEL_63:
              v32 = (BYTE1(v32) >> v31 << MEMORY[0x8A0DE0])
                  | (v33 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
                  | ((int)(unsigned __int8)v32 >> v29 << v30);
            }
          }
        }
        else
        {
          v29 = MEMORY[0x8A0DD4];
          v30 = MEMORY[0x8A0DD0];
          v31 = MEMORY[0x8A0DE4];
          if ( MEMORY[0xAC4624] == -1 )
            v32 = -1;
          else
            v32 = (BYTE1(MEMORY[0xAC4624]) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                | (BYTE2(MEMORY[0xAC4624]) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8])
                | ((int)(unsigned __int8)MEMORY[0xAC4624] >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]);
          v139 = (unsigned int)WindowLongA & 0x8000000;
          if ( ((unsigned int)WindowLongA & 0x8000000) != 0 )
          {
            v32 = MEMORY[0xAC1CA8];
            if ( MEMORY[0xAC1CA8] != -1 )
            {
              v33 = BYTE2(MEMORY[0xAC1CA8]);
              goto LABEL_63;
            }
          }
        }
        DrawDialogGradient((int *)MEMORY[0x887310], &left, 2, v32);
        v158.bottom = v150;
        v164[3] = v150;
        v34 = v141;
        v158.right = v149;
        v35 = *((_BYTE *)v141 + 205);
        v164[2] = v149;
        v158.top = top;
        v158.left = left;
        v164[0] = v145.right - 19;
        v164[1] = top + 1;
        v158.right = v149 - 20;
        DrawScrollArrowUI((int *)MEMORY[0x887310], v164, v143, v143, v35 == 1);
        if ( v139 )
          DSurface::FillRectWithColor(&left, MEMORY[0x887310], 0, v34[50]);
        if ( ((unsigned __int8)WindowLongA & 3) == 3 )
        {
          v36 = CallWindowProcA(lpPrevWndFunc, hWnd, 0x147u, 0, 0);
          v37 = hWnd;
          v38 = 0;
          WindowLongA = hWnd;
          if ( MEMORY[0xAC1B4C] )
          {
            v39 = MEMORY[0xAC1B60](&WindowLongA);
            v37 = WindowLongA;
            v40 = *((_DWORD *)MEMORY[0xAC1B48] + (v39 & ((1 << MEMORY[0xAC1B54]) - 1)));
            if ( v40 )
            {
              while ( *(HWND *)v40 != WindowLongA )
              {
                v40 = *(_DWORD *)(v40 + 8);
                if ( !v40 )
                  goto LABEL_74;
              }
              v41 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v40 + 4);
              if ( v41 )
                v38 = *v41;
            }
          }
LABEL_74:
          MEMORY[0xAC18F8][0] = 0;
          v42 = CallWindowProcA(v38, v37, 0x199u, v36, 0);
          if ( v42 == -1 || !v42 )
            v42 = CallWindowProcA(v38, WindowLongA, 0x150u, v36, 0);
          if ( v42 != -1 && v42 )
          {
            wcsncpy(MEMORY[0xAC18F8], *(const wchar_t **)(v42 + 8), 0x100u);
            MEMORY[0xAC1AF6] = 0;
            wcslen(MEMORY[0xAC18F8]);
          }
          v43 = v141;
          v44 = MEMORY[0xAC18A4];
          if ( *((_BYTE *)v141 + 205) )
          {
            if ( v139 )
              v44 = MEMORY[0xAC1AF8];
            else
              v44 = MEMORY[0xAC1CB0];
          }
          else if ( v139 )
          {
            v44 = MEMORY[0xAC1CB4];
          }
          if ( *((_BYTE *)v141 + 204) && v36 <= 0x31 && (int)v141[v36 + 68] >= 0 )
          {
            v156 = v158;
            Rect::Inflate(v132, v133, v134);
            v143 = v43[v36 + 68];
            v44 = v143;
            if ( v143 == -1 )
              v45 = -1;
            else
              v45 = ((int)(unsigned __int8)v143 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0])
                  | (BYTE1(v143) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                  | (BYTE2(v143) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
            (*(void (__thiscall **)(int, struct tagRECT *, int))(*(_DWORD *)MEMORY[0x887310] + 20))(
              MEMORY[0x887310],
              &v156,
              v45);
          }
          v143 = Rect.right - 20;
          v46 = (_DWORD *)v144[0];
          v47 = wcslen(MEMORY[0xAC18F8]);
          v48 = Text::MeasureWidth((int)MEMORY[0xAC18F8], 0);
          if ( v47 )
          {
            v49 = (_WORD *)(2 * v47 + 11278584);
            do
            {
              if ( v48 <= v143 )
                break;
              --v49;
              --v47;
              *v49 = 0;
              wcscat(MEMORY[0xAC18F8], MEMORY[0x8357D8]);
              v48 = Text::MeasureWidth((int)MEMORY[0xAC18F8], 0);
            }
            while ( v47 );
          }
          v157.top = v145.top;
          v157.left = v145.left + 2;
          v157.right = v145.right;
          v157.bottom = v145.bottom;
          PrintFontLayout(MEMORY[0x887310], MEMORY[0xAC18F8], &v157, v46, v44, 4, 12, 0, 0, 0);
          ValidateRect(hWnd, 0);
          v137 = 0;
          return 0;
        }
        else
        {
          ValidateRect(hWnd, 0);
          return v137;
        }
      }
      if ( Msg == 20 )
        return 0;
      if ( Msg == 45 )
      {
        v51 = lParam;
        v52 = (_DWORD *)v9[13];
        v53 = 0;
        if ( v52 )
        {
          while ( *((_DWORD **)lParam + 4) != v52 )
          {
            v53 = v52;
            v52 = (_DWORD *)*v52;
            if ( !v52 )
              goto LABEL_113;
          }
          if ( v53 )
            *v53 = *v52;
          else
            v9[13] = *v52;
          __3_YAXPAX_Z(v52);
          v10 = hWnd;
        }
LABEL_113:
        if ( v9[62] == *((_DWORD *)v51 + 2) )
        {
          v9[62] = -1;
LABEL_136:
          v10 = hWnd;
        }
      }
      else if ( Msg == 273 && HIWORD(wParam) == 768 )
      {
        if ( (GetWindowLongA(v10, -16) & 3) != 3 )
        {
          v128 = hWnd;
          v124 = (unsigned __int16)GetDlgCtrlID(hWnd) | 0x50000;
          v50 = GetParent(hWnd);
          SendMessageA(v50, 0x111u, v124, (LPARAM)v128);
          return 0;
        }
        goto LABEL_136;
      }
LABEL_137:
      v56 = 0;
      if ( MEMORY[0xAC1B4C] )
      {
        v57 = MEMORY[0xAC1B60](&hWnd);
        v10 = hWnd;
        v58 = *((_DWORD *)MEMORY[0xAC1B48] + (v57 & ((1 << MEMORY[0xAC1B54]) - 1)));
        if ( v58 )
        {
          while ( *(HWND *)v58 != hWnd )
          {
            v58 = *(_DWORD *)(v58 + 8);
            if ( !v58 )
              return CallWindowProcA(v56, v10, Msg, wParam, (LPARAM)lParam);
          }
          v123 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v58 + 4);
          if ( v123 )
            v56 = *v123;
        }
      }
      return CallWindowProcA(v56, v10, Msg, wParam, (LPARAM)lParam);
    }
    if ( Msg - 327 > 0xBA )
      goto LABEL_137;
    switch ( Msg )
    {
      case 0x147u:
        return v9[62];
      case 0x148u:
      case 0x14Au:
      case 0x14Bu:
      case 0x14Cu:
      case 0x14Du:
      case 0x152u:
      case 0x153u:
      case 0x154u:
      case 0x155u:
      case 0x156u:
      case 0x157u:
      case 0x158u:
      case 0x159u:
      case 0x15Au:
      case 0x15Bu:
      case 0x15Cu:
      case 0x15Du:
      case 0x15Eu:
      case 0x15Fu:
      case 0x160u:
      case 0x161u:
      case 0x162u:
      case 0x163u:
      case 0x164u:
      case 0x165u:
      case 0x166u:
      case 0x167u:
      case 0x168u:
      case 0x169u:
      case 0x16Au:
      case 0x16Bu:
      case 0x16Cu:
      case 0x16Du:
      case 0x16Eu:
      case 0x16Fu:
      case 0x170u:
      case 0x171u:
      case 0x172u:
      case 0x173u:
      case 0x174u:
      case 0x175u:
      case 0x176u:
      case 0x177u:
      case 0x178u:
      case 0x179u:
      case 0x17Au:
      case 0x17Bu:
      case 0x17Cu:
      case 0x17Du:
      case 0x17Eu:
      case 0x17Fu:
      case 0x180u:
      case 0x181u:
      case 0x182u:
      case 0x183u:
      case 0x184u:
      case 0x185u:
      case 0x186u:
      case 0x187u:
      case 0x188u:
      case 0x189u:
      case 0x18Au:
      case 0x18Bu:
      case 0x18Cu:
      case 0x18Du:
      case 0x18Eu:
      case 0x18Fu:
      case 0x190u:
      case 0x191u:
      case 0x192u:
      case 0x193u:
      case 0x194u:
      case 0x195u:
      case 0x196u:
      case 0x197u:
      case 0x198u:
      case 0x19Bu:
      case 0x19Cu:
      case 0x19Du:
      case 0x19Eu:
      case 0x19Fu:
      case 0x1A0u:
      case 0x1A1u:
      case 0x1A2u:
      case 0x1A3u:
      case 0x1A4u:
      case 0x1A5u:
      case 0x1A6u:
      case 0x1A7u:
      case 0x1A8u:
      case 0x1A9u:
      case 0x1AAu:
      case 0x1ABu:
      case 0x1ACu:
      case 0x1ADu:
      case 0x1AEu:
      case 0x1AFu:
      case 0x1B0u:
      case 0x1B1u:
      case 0x1B2u:
      case 0x1B3u:
      case 0x1B4u:
      case 0x1B5u:
      case 0x1B6u:
      case 0x1B7u:
      case 0x1B8u:
      case 0x1B9u:
      case 0x1BAu:
      case 0x1BBu:
      case 0x1BCu:
      case 0x1BDu:
      case 0x1BEu:
      case 0x1BFu:
      case 0x1C0u:
      case 0x1C1u:
      case 0x1C2u:
      case 0x1C3u:
      case 0x1C4u:
      case 0x1C5u:
      case 0x1C6u:
      case 0x1C7u:
      case 0x1C8u:
      case 0x1C9u:
      case 0x1CAu:
      case 0x1CBu:
      case 0x1CCu:
      case 0x1CDu:
      case 0x1CEu:
      case 0x1CFu:
      case 0x1D0u:
      case 0x1D1u:
      case 0x1D2u:
      case 0x1D3u:
      case 0x1D4u:
      case 0x1D5u:
      case 0x1D6u:
      case 0x1D7u:
      case 0x1D8u:
      case 0x1D9u:
      case 0x1DAu:
      case 0x1DBu:
      case 0x1DCu:
      case 0x1DDu:
      case 0x1DEu:
      case 0x1DFu:
      case 0x1E0u:
      case 0x1E1u:
      case 0x1E2u:
      case 0x1E3u:
      case 0x1E4u:
      case 0x1E5u:
      case 0x1E6u:
      case 0x1E7u:
      case 0x1E8u:
      case 0x1E9u:
      case 0x1EAu:
      case 0x1EBu:
      case 0x1ECu:
      case 0x1EDu:
      case 0x1EEu:
      case 0x1EFu:
      case 0x1F0u:
      case 0x1F1u:
      case 0x1F2u:
      case 0x1F3u:
      case 0x1F4u:
      case 0x1F5u:
      case 0x1F6u:
      case 0x1F7u:
      case 0x1F8u:
      case 0x1F9u:
      case 0x1FAu:
      case 0x1FBu:
      case 0x1FCu:
      case 0x1FDu:
      case 0x1FEu:
      case 0x1FFu:
      case 0x200u:
        goto LABEL_137;
      case 0x149u:
        goto LABEL_273;
      case 0x14Eu:
        v9[62] = wParam;
        if ( v14 == -1 )
        {
          SendMessageA(hWnd, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]);
        }
        else
        {
          v54 = CallWindowProcA(lpPrevWndFunc, hWnd, 0x150u, v14, 0);
          if ( v54 != -1 && v54 )
          {
            if ( *(_DWORD *)(v54 + 12) )
            {
              SendMessageA(hWnd, 0x4B2u, 0, *(_DWORD *)(v54 + 8));
            }
            else
            {
              CopyWideToChar(v169, *(char **)(v54 + 8), -1);
              SendMessageA(hWnd, 0x4B4u, 0, (LPARAM)v169);
            }
          }
        }
        if ( (GetWindowLongA(hWnd, -16) & 3) == 2 )
          v55 = 0;
        else
          v55 = v142;
        InvalidateRect(hWnd, 0, 0);
        if ( v55 )
          goto LABEL_136;
        return v4;
      case 0x14Fu:
        v4 = 1;
        v59 = v9[61];
        v137 = 1;
        if ( !wParam )
        {
          if ( !v59 )
            return v4;
          ReleaseCapture();
          v125 = v9[61];
          v60 = GetParent(hWnd);
          SendMessageA(v60, 0x4A9u, v125, 0);
          v138 = v9[61];
          DestroyWindow((HWND)v138);
          v140 = (HWND)v138;
          if ( MEMORY[0xAC1B04] )
          {
            v61 = (HWND *)*((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v140) & ((1 << MEMORY[0xAC1B0C]) - 1)));
            if ( v61 )
            {
              while ( *v61 != v140 )
              {
                v61 = (HWND *)v61[129];
                if ( !v61 )
                  goto LABEL_152;
              }
              v62 = v61 + 1;
              if ( v61 != (HWND *)-4 )
              {
                v63 = (void (__thiscall ***)(_DWORD, int))v61[5];
                if ( v63 )
                {
                  (**v63)(v63, 1);
                  v62[4] = 0;
                  --MEMORY[0xAC48B4];
                }
              }
            }
          }
LABEL_152:
          memset(v168, 0, sizeof(v168));
          v168[26] = (void *)11;
          v168[25] = (void *)aP0;
          v64 = __2_YAPAXI_Z(4u);
          if ( v64 )
            v65 = unknown_libname_74(v64);
          else
            v65 = 0;
          v168[15] = v65;
          v168[16] = 0;
          v168[23] = 0;
          v168[36] = (void *)-1;
          Dialog::BindGadgetData(&MEMORY[0xAC1B00], (int *)&v138, (char *)v168);
          if ( v168[10] )
          {
            __3_YAXPAX_Z(v168[10]);
            v168[10] = 0;
          }
          for ( i = v168[13]; v168[13]; i = v168[13] )
            LinkedList::Remove(v168, i);
          if ( v168[15] )
            DeleteAndZero::OrFree((void **)v168[15], 1);
          v67 = v137;
          v9[61] = 0;
          return v67;
        }
        if ( v59 )
          return v4;
        v68 = GetParent(v10);
        ScreenDialogToClient(v68, &ClassName);
        SendMessageA(hWnd, 0x152u, 0, (LPARAM)&v146);
        if ( v146.bottom > ClassName.bottom )
          v146.bottom = ClassName.bottom;
        v69 = SendMessageA(hWnd, 0x154u, 0, 0);
        v70 = v146.bottom - v146.top;
        v71 = v69;
        v72 = (v146.bottom - v146.top - 1) / v69;
        v73 = SendMessageA(hWnd, 0x146u, 0, 0);
        if ( v73 < 1 )
          v73 = 1;
        v74 = v141[52];
        if ( v74 <= 0 )
        {
          if ( v72 <= v73 )
            goto LABEL_172;
        }
        else if ( v73 >= v74 )
        {
          v73 = v141[52];
        }
        v70 = v71 * v73 + 1;
LABEL_172:
        if ( v145.bottom + v70 > ClassName.bottom )
          v70 = ClassName.bottom - v145.bottom;
        v75 = GetParent(hWnd);
        ScreenDialogToClient(v75, &v156);
        ScreenDialogToClient(hWnd, &v157);
        v129 = hWnd;
        v76 = v157.left - v156.left;
        v126 = g_hInstance;
        v77 = v157.top - v156.top;
        v78 = GetParent(hWnd);
        lpPrevWndFunc = (WNDPROC)CreateWindowExA(
                                   0,
                                   MEMORY[0x8357A0],
                                   0,
                                   0x40000000u,
                                   v76,
                                   Rect.bottom + v77 + 1,
                                   Rect.right,
                                   v70 - v70 % v71,
                                   v78,
                                   0,
                                   v126,
                                   v129);
        if ( MEMORY[0xAC1B04]
          && (v79 = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&lpPrevWndFunc) & ((1 << MEMORY[0xAC1B0C]) - 1)))) != 0 )
        {
          while ( *(WNDPROC *)v79 != lpPrevWndFunc )
          {
            v79 = *(_DWORD *)(v79 + 516);
            if ( !v79 )
              goto LABEL_180;
          }
        }
        else
        {
LABEL_180:
          memset(v168, 0, sizeof(v168));
          v168[26] = (void *)11;
          v168[25] = (void *)aP0;
          v80 = __2_YAPAXI_Z(4u);
          if ( v80 )
            v81 = unknown_libname_74(v80);
          else
            v81 = 0;
          v168[15] = v81;
          v168[16] = 0;
          v168[23] = 0;
          v168[36] = (void *)-1;
          v82 = (void **)__2_YAPAXI_Z(0x208u);
          v83 = v82;
          if ( v82 )
            DialogControl::Constructor(v82 + 1);
          else
            v83 = 0;
          v84 = v168[13];
          *v83 = lpPrevWndFunc;
          v85 = v83[14];
          v86 = v83[11];
          v144[0] = (int)v83[16];
          if ( v83 + 1 != v168 )
          {
            qmemcpy(v83 + 1, v168, 0x200u);
            v83[14] = v85;
            v87 = (wchar_t *)v168[10];
            v83[11] = v86;
            v83[16] = (void *)v144[0];
            GadgetClass::SetTooltip(v83 + 1, v87);
            SymbolTable::Rebuild(v83 + 1, (int **)v168[13]);
            v84 = v168[13];
          }
          v83[129] = 0;
          v88 = MEMORY[0xAC1B18](&lpPrevWndFunc) & ((1 << MEMORY[0xAC1B0C]) - 1);
          v89 = (void *)*((_DWORD *)MEMORY[0xAC1B00] + v88);
          *((_DWORD *)MEMORY[0xAC1B00] + v88) = v83;
          if ( v89 )
            v83[129] = v89;
          *(_QWORD *)v144 = (unsigned int)++MEMORY[0xAC1B04];
          v144[0] = MEMORY[0xAC1B08];
          if ( (double)(unsigned int)MEMORY[0xAC1B04] / (double)MEMORY[0xAC1B08] >= MEMORY[0xAC1B28] )
            HashTable::Grow2(&MEMORY[0xAC1B00]);
          if ( v168[10] )
            __3_YAXPAX_Z(v168[10]);
          while ( v84 )
          {
            v90 = 0;
            v91 = v84;
            while ( v84 != v91 )
            {
              v90 = v91;
              v91 = (_DWORD *)*v91;
              if ( !v91 )
                goto LABEL_203;
            }
            if ( v90 )
              *v90 = *v91;
            else
              v84 = (_DWORD *)*v91;
            __3_YAXPAX_Z(v91);
LABEL_203:
            ;
          }
          v92 = v168[15];
          if ( v168[15] )
          {
            DeleteAndZero::Alt((void **)v168[15]);
            __3_YAXPAX_Z(v92);
          }
        }
        TimerPool::AllocSlot(lpPrevWndFunc);
        TimerPool::AllocSlot(lpPrevWndFunc);
        SendMessageA((HWND)lpPrevWndFunc, 0x7E8u, 0, 0);
        v127 = lpPrevWndFunc;
        v93 = GetParent(hWnd);
        SendMessageA(v93, 0x4A9u, (WPARAM)v127, 1);
        SetCapture((HWND)lpPrevWndFunc);
        ShowWindow((HWND)lpPrevWndFunc, 1);
        v94 = v137;
        v141[61] = lpPrevWndFunc;
        return v94;
      case 0x150u:
      case 0x151u:
      case 0x199u:
      case 0x19Au:
        result = CallWindowProcA(lpPrevWndFunc, v10, 0x150u, wParam, 0);
        v4 = result;
        if ( result == -1 )
          return v4;
        if ( !result )
          return -1;
        if ( v13 == 336 || v13 == 409 )
          return *(_DWORD *)(result + 4);
        *(_DWORD *)(result + 4) = lParam;
        return result;
      case 0x201u:
        goto LABEL_207;
    }
  }
  switch ( Msg )
  {
    case 0x497u:
      if ( !v9[7] )
        goto LABEL_301;
      v122 = *(_DWORD *)(v9[25] + 28);
      if ( SendMessageA(v10, 0x154u, 0, 0) != v122 + 6 )
      {
        v10 = hWnd;
LABEL_301:
        SendMessageA(v10, 0x153u, 0xFFFFFFFF, *(_DWORD *)(v9[25] + 28) + 2);
        SendMessageA(hWnd, 0x153u, 0, *(_DWORD *)(v9[25] + 28) + 6);
        v9[7] = 1;
      }
      v9[62] = -1;
      memset(v9 + 68, 0xFFu, 0xC8u);
      return v137;
    case 0x498u:
      if ( (unsigned int)wParam > 0x32 )
        goto LABEL_137;
      v9[wParam + 68] = lParam;
      goto LABEL_136;
    case 0x4B2u:
    case 0x4B3u:
    case 0x4B4u:
    case 0x4B5u:
      goto LABEL_260;
    case 0x4B8u:
    case 0x4B9u:
    case 0x4BAu:
      BulkCharToWide(v170, (unsigned __int8 *)lParam, 5120);
      v10 = hWnd;
      lParam = v170;
      goto LABEL_213;
    case 0x4BBu:
    case 0x4BCu:
      v103 = 0;
      WindowLongA = 0;
      goto LABEL_230;
    case 0x4BDu:
      WindowLongA = 0;
      goto LABEL_273;
    case 0x4BEu:
    case 0x4BFu:
    case 0x4C0u:
LABEL_213:
      v97 = CallWindowProcA(lpPrevWndFunc, v10, 0x146u, 0, 0);
      v98 = 0;
      v140 = (HWND)v97;
      if ( v97 == -1 )
        return v4;
      v99 = wParam;
      if ( wParam >= v97 )
        return -1;
      while ( !v98 )
      {
        v4 = CallWindowProcA(lpPrevWndFunc, hWnd, 0x150u, v99, 0);
        if ( v4 != -1 )
        {
          if ( Msg == 1209 || Msg == 1215 )
          {
            v101 = _wcsicmp(lParam, *(const wchar_t **)(v4 + 8));
          }
          else
          {
            v100 = wcslen(lParam);
            v101 = _wcsnicmp(lParam, *(const wchar_t **)(v4 + 8), v100);
          }
          v4 = v99;
          v98 = v101 == 0;
        }
        if ( (int)++v99 >= (int)v140 )
        {
          if ( !v98 )
            return -1;
          break;
        }
      }
      if ( Msg != 1210 && Msg != 1216 )
        return v4;
      return CallWindowProcA((WNDPROC)ComboBoxDropDown::WndProc, hWnd, 0x14Eu, v4, 0);
    case 0x4C1u:
    case 0x4C2u:
      v103 = WindowLongA;
LABEL_230:
      if ( Msg == 1212 || Msg == 1218 )
      {
        v104 = lParam;
        if ( v103 )
        {
          v131 = ToWideStringChar((char *)lParam);
          v105 = CallWindowProcA(lpPrevWndFunc, hWnd, 0x143u, 0, (LPARAM)v131);
        }
        else
        {
          v105 = CallWindowProcA(lpPrevWndFunc, v10, 0x143u, 0, (LPARAM)lParam);
        }
      }
      else
      {
        v104 = lParam;
        if ( v103 )
        {
          v130 = ToWideStringChar((char *)lParam);
          v105 = CallWindowProcA(lpPrevWndFunc, hWnd, 0x14Au, wParam, (LPARAM)v130);
        }
        else
        {
          v105 = CallWindowProcA(lpPrevWndFunc, v10, 0x14Au, wParam, (LPARAM)lParam);
        }
      }
      v4 = v105;
      v137 = v105;
      if ( v105 == -1 || v105 == -2 )
        return v4;
      v138 = v105;
      if ( WindowLongA )
      {
        v106 = wcslen(v104);
      }
      else
      {
        v4 = v137;
        v106 = strlen((const char *)v104);
      }
      v107 = __2_YAPAXI_Z(2 * v106 + 18);
      v108 = (LPARAM)v107;
      if ( v107 )
      {
        v107[2] = v107 + 4;
        *v107 = v9[13];
        v109 = WindowLongA;
        *(_DWORD *)(v108 + 4) = 0;
        v9[13] = v108;
        *(_DWORD *)(v108 + 12) = v109;
        if ( v109 )
          wcscpy(*(wchar_t **)(v108 + 8), v104);
        else
          BulkCharToWide(*(_WORD **)(v108 + 8), (unsigned __int8 *)v104, -1);
        v110 = CallWindowProcA(lpPrevWndFunc, hWnd, 0x151u, v4, v108);
        v4 = v110;
        if ( v110 != -1 && v110 != -2 )
          return v138;
      }
      else
      {
        v4 = -2;
      }
      CallWindowProcA(lpPrevWndFunc, hWnd, 0x144u, v138, 0);
      if ( !v108 )
        return v4;
      v111 = (_DWORD *)v9[13];
      v112 = 0;
      if ( !v111 )
        return v4;
      break;
    case 0x4C3u:
    case 0x4D0u:
LABEL_273:
      v117 = lParam;
      v118 = Msg;
      if ( lParam && Msg != 329 && Msg != 1232 )
      {
        if ( WindowLongA )
          *lParam = 0;
        else
          *(_BYTE *)lParam = 0;
      }
      v4 = wParam;
      if ( wParam == -1 )
        goto LABEL_289;
      v119 = CallWindowProcA(lpPrevWndFunc, v10, 0x150u, wParam, 0);
      v4 = v119;
      if ( v119 == -1 )
        goto LABEL_289;
      if ( v119 )
      {
        if ( v118 == 1232 )
        {
          v4 = *(_DWORD *)(v119 + 12);
        }
        else
        {
          v120 = (const wchar_t **)(v119 + 8);
          v4 = wcslen(*(const wchar_t **)(v119 + 8));
          if ( v118 == 1219 || v118 == 1213 )
          {
            if ( WindowLongA )
              wcscpy(v117, *v120);
            else
              CopyWideToChar(v117, (char *)*v120, -1);
          }
        }
LABEL_289:
        if ( v4 < 0 )
          return 0;
      }
      return v4;
    case 0x4DAu:
    case 0x4DBu:
      v96 = GetParent(v10);
      SendMessageA(v96, Msg, wParam, (LPARAM)lParam);
      goto LABEL_136;
    case 0x4DDu:
      *((_BYTE *)v9 + 204) = lParam == (_WORD *)1;
      goto LABEL_136;
    case 0x4DEu:
      v9[52] = lParam;
      goto LABEL_136;
    case 0x4E8u:
      v121 = (HWND)v9[61];
      result = -1;
      if ( v121 )
      {
        GetWindowRect(v10, &ClassName);
        GetWindowRect(v121, &v146);
        return SendMessageA(
                 v121,
                 0x4E8u,
                 0,
                 (unsigned __int16)((_WORD)lParam + LOWORD(ClassName.left) - LOWORD(v146.left))
               | ((unsigned __int16)(LOWORD(ClassName.top) + HIWORD(lParam) - LOWORD(v146.top)) << 16));
      }
      return result;
    case 0x4F1u:
      *((_BYTE *)v9 + 205) = lParam == (_WORD *)1;
      goto LABEL_136;
    default:
      goto LABEL_137;
  }
  while ( (_DWORD *)v108 != v111 )
  {
    v112 = v111;
    v111 = (_DWORD *)*v111;
    if ( !v111 )
      return v4;
  }
  if ( v112 )
    *v112 = *v111;
  else
    v9[13] = *v111;
  __3_YAXPAX_Z(v111);
  return v4;
}



// ==== 0x00618D40  Options::DialogProc  this=Options  sig=csp ====
int __stdcall Options::DialogProc(CCINIClass hWnd)
{
  _DWORD *v1; // eax
  HWND v2; // ecx
  WNDPROC *v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // edi
  unsigned int v7; // ebx
  LRESULT v8; // esi
  LRESULT v9; // ecx
  LONG v10; // esi
  HWND v11; // eax
  LONG v12; // ecx
  int v13; // edx
  LONG (__stdcall *v14)(HWND, int); // ebp
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  HWND v17; // eax
  int v18; // esi
  int v19; // eax
  ObjectClass *v23; // ebx
  int v21; // eax
  int v22; // esi
  void (__thiscall ***ecx51)(_DWORD, int); // ecx
  HDC DC; // esi
  int result; // eax
  int v26; // edx
  LRESULT v27; // eax
  int v28; // ebp
  HWND v29; // ecx
  LRESULT (__stdcall *v30)(HWND, UINT, WPARAM, LPARAM); // esi
  int v31; // eax
  int v32; // eax
  LRESULT (__stdcall **v33)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v34; // eax
  int *v35; // edi
  _DWORD *v36; // ebx
  int v37; // eax
  int v38; // ecx
  WPARAM v39; // ebp
  CCINIClass *v43; // ecx
  CCINIClass *v44; // ecx
  int v42; // esi
  int eax93; // eax
  int edi93; // edi
  int v45; // eax
  int v46; // edx
  int v47; // esi
  int v48; // esi
  int v49; // edx
  int v50; // edx
  CampaignScore *v54; // eax
  HWND v52; // ecx
  LRESULT (__stdcall *v53)(HWND, UINT, WPARAM, LPARAM); // esi
  int eax108a; // eax
  int v55; // eax
  LRESULT (__stdcall **v56)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v57; // eax
  LONG right; // eax
  CCINIClass *v62; // ebx
  int v60; // ebp
  size_t v61; // esi
  wchar_t *edi131; // edi
  size_t v63; // eax
  CCINIClass *v67; // eax
  int v65; // esi
  size_t v66; // eax
  CCINIClass *v70; // eax
  HWND v68; // eax
  LRESULT v69; // esi
  int unknown38; // ebp
  CCINIClass *v74; // esi
  int v72; // ecx
  int v73; // eax
  int ecx161; // ecx
  int v75; // ebx
  HWND v76; // eax
  CCINIClass *v80; // esi
  int v78; // ebp
  CCINIClass *v82; // esi
  int ecx169; // ecx
  int v81; // eax
  int ecx175; // ecx
  int v83; // ebx
  AbstractClass *v84; // eax
  CCINIClass *v88; // esi
  CCINIClass *v89; // eax
  CCINIClass **v87; // ebp
  CCINIClass *v91; // eax
  int esi188; // esi
  int v90; // ebx
  int esi193; // esi
  CCINIClass *v95; // ecx
  int v93; // ebx
  HWND v94; // eax
  CCINIClass *v98; // esi
  CCINIClass *v99; // esi
  CCINIClass *v100; // esi
  AbstractClass *v101; // ecx
  AbstractClass *edx206; // edx
  HWND ebx206; // ebx
  CCINIClass *v104; // eax
  int v102; // edi
  int v103; // ecx
  int ebp212; // ebp
  int v105; // ebx
  int v106; // esi
  CCINIClass *v110; // eax
  int v108; // edi
  char *v109; // esi
  int ebp223; // ebp
  HWND v111; // esi
  unsigned __int16 v112; // ax
  ObjectClass *v116; // esi
  int v114; // ebp
  _DWORD *v115; // eax
  void (__stdcall *edi236)(HWND, UINT, WPARAM, LPARAM); // edi
  ObjectClass *v117; // eax
  CCINIClass *v121; // edx
  HWND v119; // ecx
  int v120; // eax
  CCINIClass *v124; // edx
  CCINIClass *v122; // ebx
  CCINIClass *v126; // esi
  AbstractClass *v127; // edx
  CCINIClass *k; // ecx
  _DWORD *eax253; // eax
  CCINIClass *v130; // eax
  int v128; // edx
  int v129; // esi
  int ecx261; // ecx
  int *v131; // ecx
  CCINIClass *v135; // ecx
  ObjectClass *v133; // eax
  _DWORD *v134; // eax
  HWND esi277; // esi
  unsigned __int16 v136; // ax
  LRESULT v137; // eax
  int v138; // esi
  LRESULT v139; // ebx
  LRESULT v140; // eax
  int v141; // eax
  int v142; // edi
  CCINIClass *v146; // edx
  int v144; // esi
  int i; // ecx
  int ebx306; // ebx
  CCINIClass *v150; // esi
  CCINIClass *v151; // edx
  int v149; // ecx
  ObjectClass *v153; // edi
  int ebp308; // ebp
  _DWORD *INIClass_field_3C; // ecx
  LRESULT esi322; // esi
  void (__stdcall *v154)(HWND, UINT, WPARAM, LPARAM); // edi
  HWND v155; // esi
  unsigned __int16 WindowLongA; // ax
  LRESULT v157; // ebx
  LRESULT v158; // esi
  int v159; // ecx
  int uniqueId; // edx
  int v161; // eax
  AbstractClass **v162; // ecx
  int v163; // esi
  AbstractClass *left; // eax
  int v165; // ebx
  CCINIClass *v166; // esi
  LRESULT v167; // eax
  int v168; // ebp
  _DWORD *v169; // eax
  int v170; // ecx
  CCINIClass *v174; // edx
  int v172; // eax
  CCINIClass *v176; // ecx
  CCINIClass *ebx353; // ebx
  CCINIClass *v178; // esi
  AbstractClass *v179; // edx
  CCINIClass *m; // ecx
  _DWORD *eax359; // eax
  CCINIClass *v182; // edx
  int v180; // esi
  CCINIClass *v184; // ecx
  CCINIClass *v185; // eax
  int *v183; // eax
  HWND esi374; // esi
  unsigned __int16 ax374; // ax
  unsigned __int16 v186; // ax
  LRESULT (__stdcall *v187)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v188; // ebx
  LRESULT v189; // eax
  LRESULT v190; // esi
  __int16 v191; // bx
  WPARAM v192; // edi
  HWND v193; // esi
  unsigned __int16 v194; // ax
  int v195; // ebp
  _DWORD *v196; // eax
  int v197; // ecx
  CCINIClass *v201; // esi
  int v199; // eax
  CCINIClass *v203; // ecx
  CCINIClass *ebx409; // ebx
  CCINIClass *v205; // esi
  AbstractClass *v206; // edx
  AbstractClass *jj; // ecx
  _DWORD *eax415; // eax
  CCINIClass *v209; // ecx
  int v207; // eax
  _DWORD *v208; // eax
  _DWORD *esi429; // esi
  _DWORD *v210; // eax
  CCINIClass *v214; // edi
  int v212; // ebp
  _DWORD *v213; // eax
  int ecx434; // ecx
  int v215; // edx
  CCINIClass *v219; // edi
  int *v217; // ecx
  LONG v218; // esi
  int edi450; // edi
  LRESULT v220; // ecx
  char *v221; // esi
  LPARAM v222; // ebp
  int v223; // eax
  int v224; // ebx
  LPARAM v225; // ecx
  int v226; // eax
  CCINIClass *v229; // ebx
  int v228; // eax
  ObjectClass *v231; // edi
  CCINIClass *v232; // esi
  CampaignScore *v233; // eax
  CampaignScore *v234; // eax
  int esi478; // esi
  CCINIClass *v236; // eax
  _DWORD *v235; // ecx
  int edi480; // edi
  int ii; // edx
  int v238; // ebp
  int v239; // edx
  int v240; // edx
  int v241; // ebp
  int v242; // esi
  CCINIClass *v243; // ebx
  CCINIClass *v246; // eax
  _DWORD *v245; // edi
  int ecx499; // ecx
  CCINIClass *v249; // eax
  int v248; // ebp
  char *ecx512; // ecx
  CCINIClass *v252; // esi
  int v251; // eax
  CCINIClass *v254; // ecx
  int v253; // ebx
  CCINIClass *v256; // esi
  CCINIClass *v257; // edi
  int esi522; // esi
  wchar_t **ecx523; // ecx
  CCINIClass *v259; // ecx
  CCINIClass *v260; // eax
  int esi532; // esi
  int v261; // edi
  wchar_t **v262; // ebp
  ObjectClass *v263; // edi
  LRESULT v264; // eax
  LRESULT v265; // ebx
  BOOL v266; // esi
  AbstractClass *v267; // ebp
  size_t v268; // eax
  int v269; // eax
  AbstractClass *v270; // eax
  ObjectClass *v271; // ebx
  CCINIClass *v272; // edi
  size_t v273; // eax
  AbstractClass *v274; // esi
  CCINIClass *v275; // eax
  AbstractClass *v276; // eax
  int v277; // ebp
  CCINIClass *v278; // eax
  bool v279; // cc
  CCINIClass *v280; // esi
  int v281; // ecx
  CCINIClass *v282; // ebx
  CCINIClass *v283; // esi
  AbstractClass *v284; // edx
  _DWORD *v285; // esi
  int v286; // ebp
  CCINIClass *v287; // eax
  bool v288; // cc
  int v289; // esi
  int v290; // ecx
  CCINIClass *v291; // ebx
  CCINIClass *v292; // esi
  AbstractClass *v293; // edx
  _DWORD *v294; // esi
  CCINIClass **v295; // esi
  CCINIClass *v296; // eax
  int v297; // ecx
  AbstractClass *v298; // ecx
  AbstractClass *v299; // eax
  CCINIClass *v300; // ebx
  int *v301; // ebp
  int v302; // eax
  CCINIClass *v303; // eax
  int v304; // ecx
  CCINIClass *v305; // esi
  AbstractClass *v306; // eax
  wchar_t **v307; // ecx
  CCINIClass **v308; // eax
  _DWORD *ecx638; // ecx
  ObjectClass *v309; // ebx
  LRESULT v311; // eax
  AbstractClass *edi651; // edi
  CCINIClass *v312; // esi
  signed int v314; // ebx
  LRESULT v315; // esi
  LRESULT v316; // ecx
  HWND *v317; // esi
  HWND v318; // ebx
  LONG v319; // edi
  LONG v320; // ebp
  HWND *v321; // eax
  int eax676; // eax
  CCINIClass *v322; // edx
  LONG ecx676; // ecx
  CCINIClass *v324; // eax
  int esi681; // esi
  CCINIClass *v326; // ecx
  CCINIClass *v327; // edi
  double v329; // st7
  CCINIClass *v330; // ebp
  int esi686; // esi
  unsigned int v332; // eax
  CCINIClass *v331; // edi
  int v334; // ebx
  CCINIClass *v333; // esi
  int eax689; // eax
  int edx689; // edx
  CCINIClass *v336; // eax
  CCINIClass *v337; // eax
  _DWORD *v340; // eax
  _DWORD *v341; // eax
  int esi703; // esi
  char *v343; // edi
  CCINIClass *v342; // edi
  int CCINIClass_field_4C; // ebp
  double v346; // st7
  char *esi709; // esi
  _DWORD *n; // eax
  CCINIClass *v347; // esi
  int esi721; // esi
  CCINIClass *v349; // ecx
  CCINIClass *v350; // edi
  double v353; // st7
  CCINIClass *ebp726; // ebp
  int v355; // esi
  unsigned int eax726; // eax
  CCINIClass *v354; // edi
  int v358; // ebp
  CCINIClass *v356; // esi
  int eax729; // eax
  int v361; // edx
  CCINIClass *v359; // eax
  CCINIClass *v360; // eax
  void *v364; // eax
  int edi742; // edi
  HWND esi742; // esi
  AbstractClass *v367; // ebx
  CCINIClass *v365; // esi
  CCINIClass *v366; // esi
  LPARAM v370; // [esp-4h] [ebp-2D40h]
  LPARAM v371; // [esp-4h] [ebp-2D40h]
  LPARAM v372; // [esp-4h] [ebp-2D40h]
  LPARAM v373; // [esp-4h] [ebp-2D40h]
  LPARAM v374; // [esp-4h] [ebp-2D40h]
  LPARAM _FFFFFFFCe; // [esp-4h] [ebp-2D40h]
  char *v376; // [esp-4h] [ebp-2D40h]
  char *_FFFFFFFCg; // [esp-4h] [ebp-2D40h]
  CCINIClass *v375; // [esp+10h] [ebp-2D2Ch]
  AbstractClass *var2D28; // [esp+14h] [ebp-2D28h] BYREF
  AbstractClass *v377; // [esp+18h] [ebp-2D24h]
  char v381; // [esp+1Fh] [ebp-2D1Dh]
  AbstractClass *v379; // [esp+20h] [ebp-2D1Ch]
  WPARAM wParam; // [esp+24h] [ebp-2D18h] BYREF
  HWND Parent; // [esp+28h] [ebp-2D14h]
  float v385; // [esp+2Ch] [ebp-2D10h]
  HWND v386; // [esp+30h] [ebp-2D0Ch] BYREF
  _DWORD *v387; // [esp+34h] [ebp-2D08h]
  int j; // [esp+38h] [ebp-2D04h]
  LPARAM v389; // [esp+3Ch] [ebp-2D00h]
  WNDPROC lpPrevWndFunc; // [esp+40h] [ebp-2CFCh]
  AbstractClass aP2; // [esp+44h] [ebp-2CF8h] BYREF
  int v392; // [esp+68h] [ebp-2CD4h]
  int v393; // [esp+6Ch] [ebp-2CD0h]
  LPARAM v394; // [esp+70h] [ebp-2CCCh] BYREF
  int v395; // [esp+74h] [ebp-2CC8h]
  int v396; // [esp+78h] [ebp-2CC4h]
  int v397; // [esp+7Ch] [ebp-2CC0h]
  int *v398; // [esp+80h] [ebp-2CBCh]
  int nWidth; // [esp+84h] [ebp-2CB8h]
  RECT v400; // [esp+88h] [ebp-2CB4h] BYREF
  struct tagRECT v401; // [esp+98h] [ebp-2CA4h] BYREF
  _DWORD *v402; // [esp+A8h] [ebp-2C94h]
  int v403; // [esp+ACh] [ebp-2C90h]
  struct tagRECT v404; // [esp+B0h] [ebp-2C8Ch] BYREF
  struct tagTEXTMETRICA lParam; // [esp+C0h] [ebp-2C7Ch] BYREF
  int v406; // [esp+F8h] [ebp-2C44h] BYREF
  int v407[4]; // [esp+FCh] [ebp-2C40h] BYREF
  _DWORD v408[4]; // [esp+10Ch] [ebp-2C30h] BYREF
  _DWORD v409[4]; // [esp+11Ch] [ebp-2C20h] BYREF
  int v410[4]; // [esp+12Ch] [ebp-2C10h] BYREF
  wchar_t Destination[511]; // [esp+13Ch] [ebp-2C00h] BYREF
  __int16 v412; // [esp+53Ah] [ebp-2802h]
  _WORD v413[5120]; // [esp+53Ch] [ebp-2800h] BYREF

  wParam = 1;
  lpPrevWndFunc = 0;
  if ( *(&g_MatrixTransformState + 2895)
    && (v1 = (_DWORD *)*(&(*(&g_MatrixTransformState + 2894))->X
                       + HashMap::ComputeIndex((int)(&(&g_MatrixTransformState)[241] + 2), &hWnd))) != 0 )
  {
    v2 = *(HWND *)hWnd.__pad_0;
    while ( *v1 != *(_DWORD *)hWnd.__pad_0 )
    {
      v1 = (_DWORD *)v1[2];
      if ( !v1 )
        goto LABEL_10;
    }
    v3 = (WNDPROC *)(v1 + 1);
    if ( v3 )
      lpPrevWndFunc = *v3;
  }
  else
  {
    v2 = *(HWND *)hWnd.__pad_0;
  }
LABEL_10:
  v4 = 0;
  Parent = GetParent(v2);
  v406 = *(_DWORD *)hWnd.__pad_0;
  v393 = -1;
  v385 = 0.0;
  v381 = 1;
  v379 = 0;
  v375 = 0;
  if ( *(&g_MatrixTransformState + 2877) )
  {
    v5 = *(&(*(&g_MatrixTransformState + 2876))->X
         + HashTable::ComputeHash((int)(&g_MatrixTransformState + 2876), (int)&v406));
    if ( v5 )
    {
      while ( *(_DWORD *)v5 != v406 )
      {
        v5 = *(_DWORD *)(v5 + 516);
        if ( !v5 )
          goto LABEL_16;
      }
      v4 = v5 + 4;
      v375 = (CCINIClass *)(v5 + 4);
    }
  }
LABEL_16:
  if ( !v4 )
    return 0;
  v6 = 2 * (_DWORD)*(&g_MatrixTransformState + 3064) + 18;
  nWidth = v6;
  GetClientRect(*(HWND *)hWnd.__pad_0, (LPRECT)&aP2.__pad_0[8]);
  ScreenDialogToClient(*(HWND *)hWnd.__pad_0, (LPRECT)&aP2.nextArrayIndex);
  aP2.NeedsSaveOrLink = (char *)aP2.NeedsSaveOrLink - (unsigned int)*(&g_MatrixTransformState + 3064);
  aP2.referenceCount += (int)*(&g_MatrixTransformState + 3064);
  v407[1] = aP2.referenceCount;
  aP2.uniqueId -= 2 * (_DWORD)*(&g_MatrixTransformState + 3064);
  aP2.nextArrayIndex += (int)*(&g_MatrixTransformState + 3064);
  v407[0] = aP2.nextArrayIndex;
  v407[2] = aP2.uniqueId - *(_DWORD *)&aP2.__pad_0[8];
  v7 = hWnd.headNode[0];
  aP2.abstractFlags -= 2 * (_DWORD)*(&g_MatrixTransformState + 3064);
  v392 -= (int)*(&g_MatrixTransformState + 3064);
  v407[3] = aP2.abstractFlags - *(_DWORD *)&aP2.__pad_0[12];
  if ( hWnd.headNode[0] != 395 && hWnd.headNode[0] != 417 && hWnd.headNode[0] != 277 )
  {
    v8 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
    v9 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
    if ( v9 <= 1 )
      v9 = 1;
    v393 = v8 * v9 > aP2.abstractFlags - *(_DWORD *)&aP2.__pad_0[12];
    v10 = v8 - (aP2.abstractFlags - *(_DWORD *)&aP2.__pad_0[12]) / v9;
    v11 = (HWND)v375->headNode[2];
    v385 = *(float *)&v10;
    if ( (unsigned int)v11 > 1 )
    {
      v12 = *(_DWORD *)&v375[2].ownsFile;
      lParam.tmAscent = 5;
      lParam.tmDescent = 0;
      lParam.tmInternalLeading = v10;
      lParam.tmAveCharWidth = v12;
      lParam.tmHeight = 28;
      SendMessageA(v11, 0xE9u, 0, (LPARAM)&lParam);
    }
  }
  v13 = hWnd.headNode[1];
  v14 = GetWindowLongA;
  if ( v7 <= 0x19B )
  {
    if ( v7 != 411 )
    {
      if ( v7 > 0x185 )
      {
        switch ( v7 )
        {
          case 0x186u:
            esi322 = hWnd.headNode[1];
            if ( hWnd.headNode[1] < -1 )
            {
              v154 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
            }
            else
            {
              v154 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
              if ( esi322 < SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
              {
                if ( *(_DWORD *)&v375[2].__pad_41[3] != -1 )
                  SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, 0, *(_DWORD *)&v375[2].__pad_41[3]);
                *(_DWORD *)&v375[2].__pad_41[3] = esi322;
                if ( esi322 != -1 )
                  SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, 1u, esi322);
              }
            }
            v155 = GetParent(*(HWND *)hWnd.__pad_0);
            v372 = *(_DWORD *)hWnd.__pad_0;
            WindowLongA = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
            v154(v155, 0x111u, WindowLongA | 0x10000, v372);
            InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
            return 0;
          case 0x187u:
            result = 0;
            INIClass_field_3C = (_DWORD *)v375[2].INIClass_field_3C;
            if ( INIClass_field_3C )
            {
              if ( hWnd.headNode[1] < *INIClass_field_3C )
              {
                if ( hWnd.headNode[1] >= 0 )
                  return *(_DWORD *)(INIClass_field_3C[2] + 4 * hWnd.headNode[1]);
              }
              else
              {
                return 0;
              }
            }
            return result;
          case 0x188u:
            return *(_DWORD *)&v375[2].__pad_41[3];
          case 0x18Au:
            goto LABEL_645;
          case 0x18Eu:
            return *(_DWORD *)&v375[2].ownsFile;
          case 0x190u:
            v142 = v375[2].INIClass_field_3C;
            if ( !v142 )
              return 0;
            v146 = *(CCINIClass **)v142;
            v144 = 0;
            result = 0;
            for ( i = 0; i < (int)v146; ++i )
            {
              if ( i >= 0 && i < (int)v146 )
                v144 = *(_DWORD *)(*(_DWORD *)(v142 + 8) + 4 * i);
              if ( v144 )
                ++result;
            }
            return result;
          case 0x191u:
            ebx306 = 0;
            result = 0;
            v150 = (CCINIClass *)v375[2].INIClass_field_3C;
            if ( v150 )
            {
              v151 = *(CCINIClass **)v150->__pad_0;
              v149 = 0;
              if ( *(int *)v150->__pad_0 > 0 )
              {
                v153 = (ObjectClass *)hWnd.headNode[2];
                ebp308 = hWnd.headNode[1];
                do
                {
                  if ( v149 >= 0 && v149 < (int)v151 )
                    ebx306 = *(_DWORD *)(v150->headNode[1] + 4 * v149);
                  if ( ebx306 )
                  {
                    *(_DWORD *)v153->__pad_0 = v149;
                    ++result;
                    v153 = (ObjectClass *)((char *)v153 + 4);
                  }
                  if ( result >= ebp308 )
                    break;
                  v151 = *(CCINIClass **)v150->__pad_0;
                  ++v149;
                }
                while ( v149 < *(_DWORD *)v150->__pad_0 );
              }
            }
            return result;
          case 0x197u:
            v138 = hWnd.headNode[1];
            v139 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
            v140 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
            if ( !v139 || !v140 )
              goto LABEL_668;
            v141 = (aP2.abstractFlags - *(_DWORD *)&aP2.__pad_0[12]) / v140;
            if ( v138 < 0 )
              v138 = 0;
            if ( v139 - v141 <= 0 )
            {
              v138 = 0;
            }
            else if ( v138 > v139 - v141 )
            {
              v138 = v139 - v141;
            }
            if ( v138 == *(_DWORD *)&v375[2].ownsFile )
              return 0;
            *(_DWORD *)&v375[2].ownsFile = v138;
            InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
            return 0;
          case 0x198u:
            v157 = hWnd.headNode[1];
            if ( hWnd.headNode[1] < *(_DWORD *)&v375[2].ownsFile )
              return -1;
            if ( v157 >= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
              return -1;
            v158 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
            v159 = v157 - *(_DWORD *)&v375[2].ownsFile;
            if ( v159 > (aP2.abstractFlags - *(_DWORD *)&aP2.__pad_0[12]) / v158 )
              return -1;
            uniqueId = aP2.uniqueId;
            v161 = v159 * v158;
            v162 = (AbstractClass **)hWnd.headNode[2];
            v163 = v161 + v158;
            *(_DWORD *)(hWnd.headNode[2] + 4) = v161;
            left = *(AbstractClass **)&aP2.__pad_0[8];
            v162[3] = (AbstractClass *)v163;
            *v162 = left;
            v162[2] = (AbstractClass *)(uniqueId - (_DWORD)left);
            return 0;
          case 0x199u:
          case 0x19Au:
LABEL_279:
            v381 = 0;
            v137 = CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x199u, hWnd.headNode[1], 0);
            v379 = (AbstractClass *)v137;
            if ( v137 == -1 )
              goto LABEL_668;
            if ( !v137 )
              goto LABEL_667;
            if ( v7 == 409 || v7 == 336 )
              v379 = *(AbstractClass **)(v137 + 4);
            else
              *(_DWORD *)(v137 + 4) = hWnd.headNode[2];
            goto LABEL_668;
          default:
            goto LABEL_668;
        }
      }
      if ( v7 != 389 )
      {
        if ( v7 > 0x82 )
        {
          switch ( v7 )
          {
            case 0x115u:
              v68 = (HWND)v375->headNode[2];
              v381 = 0;
              v69 = SendMessageA(v68, 0xE1u, 0, 0);
              if ( v69 != SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Eu, 0, 0) )
                SendMessageA(*(HWND *)hWnd.__pad_0, 0x197u, v69, 0);
              break;
            case 0x150u:
            case 0x151u:
              goto LABEL_279;
            case 0x182u:
              unknown38 = v375[2].unknown38;
              if ( unknown38 )
              {
                v74 = *(CCINIClass **)unknown38;
                if ( *(_DWORD *)unknown38 > hWnd.headNode[1] )
                {
                  v72 = hWnd.headNode[1];
                  if ( v74 )
                  {
                    if ( hWnd.headNode[1] < 0 )
                      v72 = 0;
                    if ( v72 >= (int)v74 )
                      v72 = (int)&v74[-1].unknown54 + 3;
                    memcpy(
                      (void *)(*(_DWORD *)(unknown38 + 8) + 4 * v72),
                      (const void *)(*(_DWORD *)(unknown38 + 8) + 4 * (v72 + 1)),
                      4 * ((_DWORD)v74 + 0x3FFFFFFF * v72 + 0x3FFFFFFF));
                    v73 = *(_DWORD *)unknown38 - 1;
                    *(_DWORD *)unknown38 = v73;
                    ecx161 = *(_DWORD *)(unknown38 + 4);
                    if ( 3 * v73 <= ecx161 )
                    {
                      v75 = ecx161 / 2;
                      if ( ecx161 / 2 < 10 )
                        v75 = 10;
                      if ( v75 < ecx161 )
                      {
                        v76 = (HWND)__2_YAPAXI_Z(4 * v75);
                        v80 = *(CCINIClass **)(unknown38 + 8);
                        Parent = v76;
                        if ( v80 )
                          qmemcpy(v76, v80, 4 * *(_DWORD *)unknown38);
                        __3_YAXPAX_Z(*(void **)(unknown38 + 8));
                        *(_DWORD *)(unknown38 + 8) = Parent;
                        *(_DWORD *)(unknown38 + 4) = v75;
                      }
                    }
                  }
                }
              }
              v78 = v375[2].INIClass_field_3C;
              if ( v78 )
              {
                v82 = *(CCINIClass **)v78;
                ecx169 = hWnd.headNode[1];
                if ( *(_DWORD *)v78 > hWnd.headNode[1] )
                {
                  if ( v82 )
                  {
                    if ( hWnd.headNode[1] < 0 )
                      ecx169 = 0;
                    if ( ecx169 >= (int)v82 )
                      ecx169 = (int)&v82[-1].unknown54 + 3;
                    memcpy(
                      (void *)(*(_DWORD *)(v78 + 8) + 4 * ecx169),
                      (const void *)(*(_DWORD *)(v78 + 8) + 4 * (ecx169 + 1)),
                      4 * ((_DWORD)v82 + 0x3FFFFFFF * ecx169 + 0x3FFFFFFF));
                    v81 = *(_DWORD *)v78 - 1;
                    *(_DWORD *)v78 = v81;
                    ecx175 = *(_DWORD *)(v78 + 4);
                    if ( 3 * v81 <= ecx175 )
                    {
                      v83 = ecx175 / 2;
                      if ( ecx175 / 2 < 10 )
                        v83 = 10;
                      if ( v83 < ecx175 )
                      {
                        v84 = (AbstractClass *)__2_YAPAXI_Z(4 * v83);
                        v88 = *(CCINIClass **)(v78 + 8);
                        v377 = v84;
                        if ( v88 )
                          qmemcpy(v84, v88, 4 * *(_DWORD *)v78);
                        __3_YAXPAX_Z(*(void **)(v78 + 8));
                        *(_DWORD *)(v78 + 8) = v377;
                        *(_DWORD *)(v78 + 4) = v83;
                      }
                    }
                  }
                }
              }
              v377 = *(AbstractClass **)v375[2].__pad_48;
              if ( v377 )
              {
                v89 = *(CCINIClass **)v377->__pad_0;
                v87 = 0;
                var2D28 = 0;
                if ( (int)v89 > 0 )
                {
                  j = 0;
                  do
                  {
                    if ( j >= 0 && (int)var2D28 < (int)v89 )
                      v87 = (CCINIClass **)(j + *(_DWORD *)&v377->__pad_0[8]);
                    v91 = v87[2];
                    esi188 = hWnd.headNode[1];
                    if ( v91 )
                    {
                      if ( hWnd.headNode[1] < 0 )
                        esi188 = 0;
                      if ( esi188 >= (int)v91 )
                        esi188 = (int)&v91[-1].unknown54 + 3;
                      v90 = (int)&v87[4]->__pad_0[24 * esi188];
                      DeleteAndZero::Alt((void **)(v90 + 8));
                      DeleteAndZero::Alt((void **)(v90 + 4));
                      memcpy(
                        (char *)v87[4] + 24 * esi188,
                        &v87[4]->sectionHead[6 * esi188 + 2],
                        24 * (_DWORD)v87[2] - 8 * (3 * esi188 + 3));
                      esi193 = (int)&v87[2][-1].unknown54 + 3;
                      v87[2] = (CCINIClass *)esi193;
                      v95 = v87[3];
                      if ( 3 * esi193 <= (int)v95 )
                      {
                        v93 = (int)v95 / 2;
                        if ( (int)v95 / 2 < 10 )
                          v93 = 10;
                        if ( v93 < (int)v95 )
                        {
                          v94 = (HWND)__2_YAPAXI_Z(24 * v93);
                          v98 = v87[4];
                          Parent = v94;
                          if ( v98 )
                            qmemcpy(v94, v98, 24 * (_DWORD)v87[2]);
                          __3_YAXPAX_Z(v87[4]);
                          v87[4] = (CCINIClass *)Parent;
                          v87[3] = (CCINIClass *)v93;
                        }
                      }
                    }
                    v89 = *(CCINIClass **)v377->__pad_0;
                    v279 = (int)&var2D28->__pad_0[1] < *(_DWORD *)v377->__pad_0;
                    var2D28 = (AbstractClass *)((char *)var2D28 + 1);
                    j += 20;
                  }
                  while ( v279 );
                }
              }
              break;
            case 0x184u:
              goto LABEL_202;
            default:
              goto LABEL_668;
          }
        }
        else if ( v7 == 130 )
        {
LABEL_202:
          v99 = (CCINIClass *)v375[2].unknown38;
          if ( v99 )
          {
            *(_DWORD *)v99->__pad_0 = 0;
            __3_YAXPAX_Z((void *)v99->headNode[1]);
            __3_YAXPAX_Z(v99);
          }
          v100 = (CCINIClass *)v375[2].INIClass_field_3C;
          if ( v100 )
          {
            *(_DWORD *)v100->__pad_0 = 0;
            __3_YAXPAX_Z((void *)v100->headNode[1]);
            __3_YAXPAX_Z(v100);
          }
          v101 = (AbstractClass *)v375;
          edx206 = 0;
          v375[2].unknown38 = 0;
          v375[2].INIClass_field_3C = 0;
          *(_DWORD *)&v375[2].ownsFile = 0;
          *(_DWORD *)&v375[2].__pad_41[3] = -1;
          ebx206 = *(HWND *)v375[2].__pad_48;
          Parent = ebx206;
          if ( ebx206 )
          {
            v104 = *(CCINIClass **)ebx206;
            v102 = 0;
            v279 = *(_DWORD *)ebx206 <= 0;
            v377 = 0;
            if ( !v279 )
            {
              v103 = 0;
              v389 = 0;
              do
              {
                if ( v103 >= 0 && (int)edx206 < (int)v104 )
                  v102 = v103 + *((_DWORD *)ebx206 + 2);
                ebp212 = 0;
                if ( *(int *)(v102 + 8) > 0 )
                {
                  v105 = 0;
                  do
                  {
                    v106 = *(_DWORD *)(v102 + 16) + v105;
                    DeleteAndZero::Alt((void **)(v106 + 8));
                    DeleteAndZero::Alt((void **)(v106 + 4));
                    ++ebp212;
                    v105 += 24;
                  }
                  while ( ebp212 < *(_DWORD *)(v102 + 8) );
                  v103 = v389;
                  edx206 = v377;
                  ebx206 = Parent;
                }
                *(_DWORD *)(v102 + 8) = 0;
                v104 = *(CCINIClass **)ebx206;
                edx206 = (AbstractClass *)((char *)edx206 + 1);
                v103 += 20;
                v279 = (int)edx206 < *(_DWORD *)ebx206;
                v377 = edx206;
                v389 = v103;
              }
              while ( v279 );
              v101 = (AbstractClass *)v375;
            }
          }
          if ( hWnd.headNode[0] == 130 )
          {
            if ( ebx206 )
            {
              v110 = *(CCINIClass **)ebx206;
              v377 = 0;
              if ( (int)v110 > 0 )
              {
                var2D28 = 0;
                do
                {
                  v108 = 0;
                  v109 = &var2D28->__pad_0[*((_DWORD *)ebx206 + 2) + 8];
                  if ( *(int *)v109 > 0 )
                  {
                    ebp223 = 0;
                    do
                    {
                      Options::ClearComboBoxes((void **)(*((_DWORD *)v109 + 2) + ebp223));
                      ++v108;
                      ebp223 += 24;
                    }
                    while ( v108 < *(_DWORD *)v109 );
                  }
                  *(_DWORD *)v109 = 0;
                  __3_YAXPAX_Z(*((void **)v109 + 2));
                  v279 = (int)&v377->__pad_0[1] < *(_DWORD *)ebx206;
                  v377 = (AbstractClass *)((char *)v377 + 1);
                  var2D28 = (AbstractClass *)((char *)var2D28 + 20);
                }
                while ( v279 );
              }
              *(_DWORD *)ebx206 = 0;
              __3_YAXPAX_Z(*((void **)ebx206 + 2));
              __3_YAXPAX_Z(ebx206);
              v101 = (AbstractClass *)v375;
            }
            v101[6].NeedsSaveOrLink = 0;
          }
          else
          {
            v111 = GetParent(*(HWND *)hWnd.__pad_0);
            v370 = *(_DWORD *)hWnd.__pad_0;
            v112 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
            SendMessageA(v111, 0x111u, v112 | 0x10000, v370);
          }
        }
        else
        {
          switch ( v7 )
          {
            case 5u:
              if ( v375->headNode[2] > 1 )
              {
                v17 = GetParent(*(HWND *)hWnd.__pad_0);
                ScreenDialogToClient(v17, &v404);
                ScreenDialogToClient(*(HWND *)hWnd.__pad_0, &v400);
                MoveWindow(
                  (HWND)v375->headNode[2],
                  v400.right - v404.left,
                  v400.top - v404.top,
                  v6,
                  v400.bottom - v400.top,
                  1);
              }
              v18 = v375->sectionHead[0];
              if ( !v18 )
                goto LABEL_668;
              v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 124))(v375->sectionHead[0]);
              v23 = (ObjectClass *)hWnd.headNode[2];
              if ( LOWORD(hWnd.headNode[2]) == v19
                && (unsigned int)v23 >> 16 == (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 128))(v18) )
              {
                goto LABEL_668;
              }
              var2D28 = *(AbstractClass **)hWnd.__pad_0;
              if ( !*(&g_MatrixTransformState + 2877) )
                goto LABEL_668;
              v21 = *(&(*(&g_MatrixTransformState + 2876))->X
                    + (((int (__thiscall *)(AbstractClass **))*(&g_MatrixTransformState + 2882))(&var2D28)
                     & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)));
              if ( !v21 )
                goto LABEL_668;
              while ( *(AbstractClass **)v21 != var2D28 )
              {
                v21 = *(_DWORD *)(v21 + 516);
                if ( !v21 )
                  goto LABEL_668;
              }
              v22 = v21 + 4;
              if ( v21 != -4 )
              {
                ecx51 = *(void (__thiscall ****)(_DWORD, int))(v21 + 20);
                if ( ecx51 )
                {
                  (**ecx51)(ecx51, 1);
                  *(_DWORD *)(v22 + 16) = 0;
                  *(&g_MatrixTransformState + 5801) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 5801) - 1);
                }
              }
              goto LABEL_668;
            case 0xFu:
              v381 = 0;
              v26 = v375[2].sectionHead[2];
              v387 = (_DWORD *)v375[1].headNode[2];
              SetupDialogRenderBuffer(v407, *(HWND *)hWnd.__pad_0, v26);
              DrawDialogGradient(*(int **)&MEMORY[0x87F8E4].__pad_5568[9412], v407, 2, -1);
              if ( *(&g_MatrixTransformState + 5629) == (CoordStruct *)-1 )
              {
                var2D28 = (AbstractClass *)-1;
              }
              else
              {
                v14 = GetWindowLongA;
                var2D28 = (AbstractClass *)(((int)*((unsigned __int8 *)&(&g_MatrixTransformState)[469] + 4) >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
                                          | (*((unsigned __int8 *)&(&g_MatrixTransformState)[469] + 5) >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
                                          | (*((unsigned __int8 *)&(&g_MatrixTransformState)[469] + 6) >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]));
              }
              if ( !GetUpdateRect(*(HWND *)hWnd.__pad_0, (LPRECT)&lParam, 0) )
                goto LABEL_668;
              Parent = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
              v377 = (AbstractClass *)v14(*(HWND *)hWnd.__pad_0, -16);
              v27 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Eu, 0, 0);
              wParam = v27;
              if ( v27 >= (int)Parent )
                goto LABEL_149;
              v28 = v27;
              break;
            case 0x14u:
              return 0;
            case 0x2Du:
              v15 = 0;
              v16 = *(_DWORD **)&v375->needsSave_flag;
              if ( !v16 )
                goto LABEL_39;
              while ( *(_DWORD **)(hWnd.headNode[2] + 16) != v16 )
              {
                v15 = v16;
                v16 = (_DWORD *)*v16;
                if ( !v16 )
                {
                  v379 = (AbstractClass *)1;
                  goto LABEL_668;
                }
              }
              if ( v15 )
                *v15 = *v16;
              else
                *(_DWORD *)&v375->needsSave_flag = *v16;
              __3_YAXPAX_Z(v16);
LABEL_39:
              v379 = (AbstractClass *)1;
              goto LABEL_668;
            case 0x30u:
              DC = GetDC(*(HWND *)hWnd.__pad_0);
              GetTextMetricsA(DC, &lParam);
              ReleaseDC(*(HWND *)hWnd.__pad_0, DC);
              SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A0u, 0xFFFFFFFF, (unsigned __int16)(LOWORD(lParam.tmHeight) + 2));
              v375[5].unknown30 = hWnd.headNode[1];
              return 0;
            default:
              goto LABEL_668;
          }
          do
          {
            if ( SendMessageA(*(HWND *)hWnd.__pad_0, 0x198u, v28, (LPARAM)&v394) != -1 )
            {
              if ( *(_DWORD *)&aP2.__pad_0[12] + v397 > aP2.abstractFlags )
                break;
              v29 = *(HWND *)hWnd.__pad_0;
              v30 = 0;
              v386 = *(HWND *)hWnd.__pad_0;
              if ( *(&g_MatrixTransformState + 2895) )
              {
                v31 = ((int (__thiscall *)(HWND *))*(&g_MatrixTransformState + 2900))(&v386);
                v29 = v386;
                v32 = *(&(*(&g_MatrixTransformState + 2894))->X
                      + (v31 & ((1 << *((char *)&g_MatrixTransformState + 11588)) - 1)));
                if ( v32 )
                {
                  while ( *(HWND *)v32 != v386 )
                  {
                    v32 = *(_DWORD *)(v32 + 8);
                    if ( !v32 )
                      goto LABEL_70;
                  }
                  v33 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v32 + 4);
                  if ( v33 )
                    v30 = *v33;
                }
              }
LABEL_70:
              Destination[0] = 0;
              v34 = CallWindowProcA(v30, v29, 0x199u, v28, 0);
              if ( v34 == -1 || !v34 )
                v34 = CallWindowProcA(v30, v386, 0x150u, v28, 0);
              if ( v34 != -1 && v34 )
              {
                wcsncpy(Destination, *(const wchar_t **)(v34 + 8), 0x200u);
                v412 = 0;
                wcslen(Destination);
              }
              v398 = *(int **)v375[2].__pad_48;
              v35 = v398;
              if ( v398 )
              {
                if ( SendMessageA(*(HWND *)hWnd.__pad_0, 0x187u, v28, 0) > 0 )
                {
                  v409[0] = v394 + aP2.nextArrayIndex;
                  v409[1] = v395 + aP2.referenceCount;
                  v409[3] = v397 - v395;
                  v409[2] = v396 - v394;
                  (*(void (__thiscall **)(_DWORD, _DWORD *, AbstractClass *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412]
                                                                            + 20))(
                    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                    v409,
                    var2D28);
                }
                v36 = 0;
                v402 = 0;
                v389 = (LPARAM)GetDC(*(HWND *)hWnd.__pad_0);
                v37 = *v35;
                v279 = *v35 <= 0;
                v403 = 0;
                if ( !v279 )
                {
                  v38 = 0;
                  for ( j = 0; ; v38 = j )
                  {
                    if ( v38 >= 0 && v403 < v37 )
                    {
                      v36 = (_DWORD *)(v38 + v35[2]);
                      v402 = v36;
                    }
                    if ( v28 >= 0 && (signed int)wParam < v36[2] )
                    {
                      v39 = v36[4] + 24 * wParam;
                      if ( v39 )
                      {
                        v43 = *(CCINIClass **)v39;
                        if ( *(_DWORD *)v39 )
                        {
                          if ( v43 == (CCINIClass *)1 || v43 == (CCINIClass *)4 )
                          {
                            v401.left = *v36 + v394 + aP2.nextArrayIndex;
                            v401.top = v395 + aP2.referenceCount;
                            v401.right = v396 - v394;
                            v401.bottom = v397 - v395;
                            if ( v43 == (CCINIClass *)1 )
                            {
                              v54 = WideString::GetOrEmpty((wchar_t **)(v39 + 4));
                              wcscpy(Destination, (const wchar_t *)v54);
                            }
                            else
                            {
                              v52 = *(HWND *)hWnd.__pad_0;
                              v53 = 0;
                              v386 = *(HWND *)hWnd.__pad_0;
                              if ( *(&g_MatrixTransformState + 2895) )
                              {
                                eax108a = ((int (__thiscall *)(HWND *))*(&g_MatrixTransformState + 2900))(&v386);
                                v52 = v386;
                                v55 = *(&(*(&g_MatrixTransformState + 2894))->X
                                      + (eax108a & ((1 << *((char *)&g_MatrixTransformState + 11588)) - 1)));
                                if ( v55 )
                                {
                                  while ( *(HWND *)v55 != v386 )
                                  {
                                    v55 = *(_DWORD *)(v55 + 8);
                                    if ( !v55 )
                                      goto LABEL_114;
                                  }
                                  v56 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v55 + 4);
                                  if ( v56 )
                                    v53 = *v56;
                                }
                              }
LABEL_114:
                              Destination[0] = 0;
                              v57 = CallWindowProcA(v53, v52, 0x199u, wParam, 0);
                              if ( v57 == -1 || !v57 )
                                v57 = CallWindowProcA(v53, v386, 0x150u, wParam, 0);
                              if ( v57 != -1 && v57 )
                              {
                                wcsncpy(Destination, *(const wchar_t **)(v57 + 8), 0x200u);
                                v412 = 0;
                                wcslen(Destination);
                              }
                            }
                            right = v401.right;
                            v62 = *(CCINIClass **)(v39 + 12);
                            if ( v62 == (CCINIClass *)-1 )
                              v62 = (CCINIClass *)*(&g_MatrixTransformState + 2725);
                            if ( ((unsigned int)v377 & 0x8000000) != 0 )
                              v62 = (CCINIClass *)*(&g_MatrixTransformState + 2985);
                            if ( v402[1] )
                            {
                              right = v402[1];
                              v401.right = right;
                            }
                            v60 = right;
                            if ( !right )
                              v60 = 0xFFFF;
                            if ( (int)aP2.NeedsSaveOrLink + -v394 - v60 - aP2.nextArrayIndex - *v402 < 0 )
                              v60 = (int)aP2.NeedsSaveOrLink + -aP2.nextArrayIndex - v394 - *v402;
                            SendMessageA(*(HWND *)hWnd.__pad_0, 0x49Eu, 0, v389);
                            v61 = wcslen(Destination);
                            Text::Layout(v387, Destination, &aP2, (AbstractClass *)&aP2.__pad_0[4], 0);
                            if ( v61 )
                            {
                              edi131 = &Destination[v61];
                              do
                              {
                                if ( *(int *)aP2.__pad_0 <= v60 )
                                  break;
                                --edi131;
                                --v61;
                                *edi131 = 0;
                                wcscat(Destination, (const wchar_t *)&stru_830620.__pad_14B0[15624]);
                                Text::Layout(v387, Destination, &aP2, (AbstractClass *)&aP2.__pad_0[4], 0);
                              }
                              while ( v61 );
                            }
                            v63 = wcslen(Destination);
                            DrawTextRendererTextAligned((int)v62, v387, &v401.left, Destination, v63, 0, 0, 0, 0);
                            v36 = v402;
LABEL_135:
                            v35 = v398;
                            goto LABEL_136;
                          }
                          if ( v43 == (CCINIClass *)2 )
                          {
                            v44 = *(CCINIClass **)(v39 + 16);
                            if ( !v44 )
                              goto LABEL_136;
                            v42 = (*(int (__thiscall **)(CCINIClass *))(*(_DWORD *)v44->__pad_0 + 128))(v44);
                            eax93 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v39 + 16) + 124))(*(_DWORD *)(v39 + 16));
                            edi93 = *v36;
                            v410[2] = eax93;
                            v410[0] = edi93 + aP2.nextArrayIndex + v394;
                            v410[3] = v42;
                            v410[1] = aP2.referenceCount + v395 + (v397 - v395 - v42) / 2;
                            Surface::BlitTransparent(
                              v410,
                              *(int *)&MEMORY[0x87F8E4].__pad_5568[9412],
                              *(_DWORD *)(v39 + 16),
                              (255 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656])
                            | (255 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664]));
                            goto LABEL_135;
                          }
                          if ( v43 == (CCINIClass *)3 )
                          {
                            v45 = *(_DWORD *)(v39 + 20);
                            v46 = *v36 + aP2.nextArrayIndex + v394;
                            v408[1] = aP2.referenceCount + v395;
                            v408[0] = v46;
                            v408[2] = 32;
                            v408[3] = 12;
                            if ( v45 >= 0 )
                            {
                              if ( v45 >= 300 )
                              {
                                if ( v45 >= 500 )
                                  v50 = 0;
                                else
                                  v50 = 192;
                                v48 = v50 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672];
                                v49 = 192;
                              }
                              else
                              {
                                v48 = 192 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672];
                                v49 = 0;
                              }
                              v47 = (v49 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]) | v48;
                            }
                            else
                            {
                              v47 = 192 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664];
                              v45 = 1000;
                            }
                            UI_Helper_6217E0(v408, *(int *)&MEMORY[0x87F8E4].__pad_5568[9412], v47, (v45 << 16) / 1000);
                          }
                        }
                      }
                    }
LABEL_136:
                    v37 = *v35;
                    v28 = wParam;
                    v279 = ++v403 < *v35;
                    j += 20;
                    if ( !v279 )
                      break;
                  }
                }
                ReleaseDC(*(HWND *)hWnd.__pad_0, (HDC)v389);
              }
              else
              {
                v67 = (CCINIClass *)v375[2].unknown38;
                if ( !v67
                  || v28 < 0
                  || v28 >= *(_DWORD *)v67->__pad_0
                  || (v65 = *(_DWORD *)(v67->headNode[1] + 4 * v28), v65 == -1) )
                {
                  v65 = (int)*(&g_MatrixTransformState + 2725);
                }
                if ( ((unsigned int)v377 & 0x8000000) != 0 )
                  v65 = (int)*(&g_MatrixTransformState + 2985);
                if ( SendMessageA(*(HWND *)hWnd.__pad_0, 0x187u, v28, 0) > 0 )
                {
                  v404.left = v394 + aP2.nextArrayIndex;
                  v404.top = v395 + aP2.referenceCount;
                  v404.bottom = v397 - v395;
                  v404.right = v396 - v394;
                  (*(void (__thiscall **)(_DWORD, struct tagRECT *, AbstractClass *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9412]
                                                                                    + 20))(
                    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9412],
                    &v404,
                    var2D28);
                }
                v400.left = v394 + aP2.nextArrayIndex + 2;
                v400.top = v395 + aP2.referenceCount;
                v400.right = v396 - v394;
                v400.bottom = v397 - v395;
                v66 = wcslen(Destination);
                DrawTextRendererTextAligned(v65, v387, &v400.left, Destination, v66, 0, 0, 0, 0);
              }
            }
            wParam = ++v28;
          }
          while ( v28 < (int)Parent );
LABEL_149:
          ValidateRect(*(HWND *)hWnd.__pad_0, (const RECT *)&lParam);
          v70 = (CCINIClass *)v375->headNode[2];
          if ( v70 )
            InvalidateRect((HWND)v70, 0, 0);
        }
        goto LABEL_668;
      }
      v116 = (ObjectClass *)hWnd.headNode[2];
      v377 = (AbstractClass *)hWnd.headNode[2];
      if ( hWnd.headNode[2] < -1 )
        return -1;
      v114 = v375[2].INIClass_field_3C;
      if ( !v114 )
      {
        v115 = (_DWORD *)__2_YAPAXI_Z(0xCu);
        if ( v115 )
        {
          *v115 = 0;
          v115[1] = 0;
          v115[2] = 0;
          v114 = (int)v115;
        }
        else
        {
          v114 = 0;
        }
        v375[2].INIClass_field_3C = v114;
      }
      edi236 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
      if ( (int)v116 >= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1 )
      {
        v116 = (ObjectClass *)(SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1);
        v377 = (AbstractClass *)v116;
      }
      if ( (int)v116 <= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1 )
        v117 = (ObjectClass *)(SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) - 1);
      else
        v117 = v116;
      v121 = *(CCINIClass **)v114;
      if ( (int)v117 >= *(_DWORD *)v114 )
      {
        v119 = (HWND)&v117->__pad_0[1];
        v385 = *(float *)v114;
        Parent = (HWND)&v117->__pad_0[1];
        if ( (int)&v117->__pad_0[1] >= 0 )
        {
          *(_DWORD *)v114 = v119;
          v120 = *(_DWORD *)(v114 + 4);
          if ( (int)v119 > v120 )
          {
            do
            {
              v124 = *(CCINIClass **)v114;
              if ( *(_DWORD *)v114 >= v120 )
              {
                var2D28 = (AbstractClass *)(2 * (_DWORD)v124);
                if ( 2 * (int)v124 < 10 )
                  var2D28 = (AbstractClass *)10;
                v122 = (CCINIClass *)__2_YAPAXI_Z(4 * (_DWORD)var2D28);
                memset(v122, 0, 4 * ((unsigned int)(4 * (_DWORD)var2D28) >> 2));
                v126 = *(CCINIClass **)(v114 + 8);
                if ( v126 )
                  qmemcpy(v122, v126, 4 * *(_DWORD *)v114);
                __3_YAXPAX_Z(*(void **)(v114 + 8));
                v127 = var2D28;
                v119 = Parent;
                v116 = (ObjectClass *)v377;
                edi236 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
                *(_DWORD *)(v114 + 8) = v122;
                *(_DWORD *)(v114 + 4) = v127;
              }
              v120 = *(_DWORD *)(v114 + 4);
            }
            while ( (int)v119 > v120 );
            v121 = (CCINIClass *)LODWORD(v385);
          }
          for ( k = v121; (int)k < *(_DWORD *)v114; k = (CCINIClass *)((char *)k + 1) )
          {
            eax253 = (_DWORD *)(*(_DWORD *)(v114 + 8) + 4 * (_DWORD)k);
            if ( eax253 )
              *eax253 = 0;
          }
          if ( 3 * *(_DWORD *)v114 <= *(_DWORD *)(v114 + 4) )
            DynamicArray::ShrinkCapacity((int *)v114);
        }
      }
      if ( v116 == (ObjectClass *)-1 )
      {
        v130 = *(CCINIClass **)v114;
        v128 = 0;
        if ( *(int *)v114 > 0 )
        {
          v129 = hWnd.headNode[1];
          do
          {
            ecx261 = v128;
            if ( v130 )
            {
              if ( v128 < 0 )
                ecx261 = 0;
              if ( ecx261 >= (int)v130 )
                ecx261 = (int)&v130[-1].unknown54 + 3;
              v131 = (int *)(*(_DWORD *)(v114 + 8) + 4 * ecx261);
              if ( v131 )
                *v131 = v129;
            }
            v130 = *(CCINIClass **)v114;
            ++v128;
          }
          while ( v128 < *(_DWORD *)v114 );
        }
      }
      else
      {
        v135 = *(CCINIClass **)v114;
        v133 = v116;
        if ( *(_DWORD *)v114 )
        {
          if ( (int)v116 < 0 )
            v133 = 0;
          if ( (int)v133 >= (int)v135 )
            v133 = (ObjectClass *)((char *)&v135[-1].unknown54 + 3);
          v134 = (_DWORD *)(*(_DWORD *)(v114 + 8) + 4 * (_DWORD)v133);
          if ( v134 )
            *v134 = hWnd.headNode[1];
        }
      }
      esi277 = GetParent(*(HWND *)hWnd.__pad_0);
      v371 = *(_DWORD *)hWnd.__pad_0;
      v136 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
      goto LABEL_394;
    }
    v165 = HIWORD(hWnd.headNode[2]);
    v166 = (CCINIClass *)LOWORD(hWnd.headNode[2]);
    Parent = (HWND)LOWORD(hWnd.headNode[2]);
    v377 = (AbstractClass *)HIWORD(hWnd.headNode[2]);
    v167 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
    if ( v165 >= 0 && v165 >= (int)v166 )
    {
      if ( v165 >= v167 )
      {
        v165 = v167 - 1;
        v377 = (AbstractClass *)(v167 - 1);
      }
      v168 = v375[2].INIClass_field_3C;
      if ( !v168 )
      {
        v169 = (_DWORD *)__2_YAPAXI_Z(0xCu);
        if ( v169 )
        {
          v168 = (int)v169;
          *v169 = 0;
          v169[1] = 0;
          v169[2] = 0;
        }
        else
        {
          v168 = 0;
        }
        v375[2].INIClass_field_3C = v168;
      }
      if ( v165 >= *(_DWORD *)v168 )
      {
        v170 = v165 + 1;
        v174 = *(CCINIClass **)v168;
        v385 = *(float *)v168;
        if ( v165 + 1 >= 0 )
        {
          *(_DWORD *)v168 = v170;
          v172 = *(_DWORD *)(v168 + 4);
          if ( v170 > v172 )
          {
            do
            {
              v176 = *(CCINIClass **)v168;
              if ( *(_DWORD *)v168 >= v172 )
              {
                var2D28 = (AbstractClass *)(2 * (_DWORD)v176);
                if ( 2 * (int)v176 < 10 )
                  var2D28 = (AbstractClass *)10;
                ebx353 = (CCINIClass *)__2_YAPAXI_Z(4 * (_DWORD)var2D28);
                memset(ebx353, 0, 4 * ((unsigned int)(4 * (_DWORD)var2D28) >> 2));
                v178 = *(CCINIClass **)(v168 + 8);
                if ( v178 )
                  qmemcpy(ebx353, v178, 4 * *(_DWORD *)v168);
                __3_YAXPAX_Z(*(void **)(v168 + 8));
                v179 = var2D28;
                v166 = (CCINIClass *)Parent;
                *(_DWORD *)(v168 + 8) = ebx353;
                v165 = (int)v377;
                *(_DWORD *)(v168 + 4) = v179;
              }
              v172 = *(_DWORD *)(v168 + 4);
            }
            while ( v165 + 1 > v172 );
            v174 = (CCINIClass *)LODWORD(v385);
          }
          for ( m = v174; (int)m < *(_DWORD *)v168; m = (CCINIClass *)((char *)m + 1) )
          {
            eax359 = (_DWORD *)(*(_DWORD *)(v168 + 8) + 4 * (_DWORD)m);
            if ( eax359 )
              *eax359 = 0;
          }
          if ( 3 * *(_DWORD *)v168 <= *(_DWORD *)(v168 + 4) )
            DynamicArray::ShrinkCapacity((int *)v168);
        }
      }
      v182 = v166;
      if ( (int)v166 <= v165 )
      {
        v180 = hWnd.headNode[1];
        do
        {
          v184 = *(CCINIClass **)v168;
          v185 = v182;
          if ( *(_DWORD *)v168 )
          {
            if ( (int)v182 < 0 )
              v185 = 0;
            if ( (int)v185 >= (int)v184 )
              v185 = (CCINIClass *)((char *)v184 - 1);
            v183 = (int *)(*(_DWORD *)(v168 + 8) + 4 * (_DWORD)v185);
            if ( v183 )
              *v183 = v180;
          }
          v182 = (CCINIClass *)((char *)v182 + 1);
        }
        while ( (int)v182 <= v165 );
      }
      esi374 = GetParent(*(HWND *)hWnd.__pad_0);
      v373 = *(_DWORD *)hWnd.__pad_0;
      ax374 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
      SendMessageA(esi374, 0x111u, ax374 | 0x10000, v373);
      return 0;
    }
    return -1;
  }
  if ( v7 > 0x4B5 )
  {
    switch ( v7 )
    {
      case 0x4B6u:
      case 0x4CFu:
        goto LABEL_645;
      case 0x4B7u:
        goto LABEL_644;
      case 0x4C4u:
      case 0x4C5u:
      case 0x4C6u:
        BulkCharToWide(v413, (unsigned __int8 *)hWnd.headNode[2], 5120);
        hWnd.headNode[2] = (int)v413;
        goto LABEL_538;
      case 0x4C7u:
      case 0x4C8u:
        wParam = 0;
        goto LABEL_552;
      case 0x4C9u:
      case 0x4CAu:
      case 0x4CBu:
LABEL_538:
        v263 = (ObjectClass *)hWnd.headNode[2];
        v381 = 0;
        v264 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
        v265 = v264;
        v266 = 0;
        if ( v264 == -1 )
          goto LABEL_668;
        v267 = (AbstractClass *)hWnd.headNode[1];
        if ( hWnd.headNode[1] >= v264 )
          goto LABEL_667;
        break;
      case 0x4CCu:
      case 0x4CDu:
LABEL_552:
        v381 = 0;
        if ( v7 == 1224 || v7 == 1229 )
        {
          if ( wParam )
          {
            _FFFFFFFCg = ToWideStringChar((char *)hWnd.headNode[2]);
            v270 = (AbstractClass *)CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x180u, 0, (LPARAM)_FFFFFFFCg);
          }
          else
          {
            v270 = (AbstractClass *)CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x180u, 0, hWnd.headNode[2]);
          }
        }
        else if ( wParam )
        {
          v376 = ToWideStringChar((char *)hWnd.headNode[2]);
          v270 = (AbstractClass *)CallWindowProcA(
                                    lpPrevWndFunc,
                                    *(HWND *)hWnd.__pad_0,
                                    0x181u,
                                    hWnd.headNode[1],
                                    (LPARAM)v376);
        }
        else
        {
          v270 = (AbstractClass *)CallWindowProcA(
                                    lpPrevWndFunc,
                                    *(HWND *)hWnd.__pad_0,
                                    0x181u,
                                    hWnd.headNode[1],
                                    hWnd.headNode[2]);
        }
        v379 = v270;
        if ( v270 == (AbstractClass *)-1 || v270 == (AbstractClass *)-2 )
          goto LABEL_668;
        v271 = (ObjectClass *)hWnd.headNode[2];
        v272 = (CCINIClass *)v270;
        v386 = (HWND)v270;
        if ( wParam )
        {
          v273 = wcslen((const wchar_t *)hWnd.headNode[2]);
        }
        else
        {
          v272 = (CCINIClass *)v386;
          v273 = strlen((const char *)hWnd.headNode[2]);
        }
        v274 = (AbstractClass *)__2_YAPAXI_Z(2 * v273 + 18);
        if ( v274 )
        {
          *(_DWORD *)&v274->__pad_0[8] = &v274->uniqueId;
          *(_DWORD *)v274->__pad_0 = *(_DWORD *)&v375->needsSave_flag;
          *(_DWORD *)&v375->needsSave_flag = v274;
          v275 = (CCINIClass *)wParam;
          *(_DWORD *)&v274->__pad_0[4] = 0;
          *(_DWORD *)&v274->__pad_0[12] = v275;
          if ( v275 )
            wcscpy(*(wchar_t **)&v274->__pad_0[8], (const wchar_t *)v271);
          else
            BulkCharToWide(*(_WORD **)&v274->__pad_0[8], (unsigned __int8 *)v271, -1);
          v276 = (AbstractClass *)CallWindowProcA(
                                    lpPrevWndFunc,
                                    *(HWND *)hWnd.__pad_0,
                                    0x19Au,
                                    (WPARAM)v379,
                                    (LPARAM)v274);
          v379 = v276;
          if ( v276 != (AbstractClass *)-1 && v276 != (AbstractClass *)-2 )
          {
            v379 = (AbstractClass *)v272;
            if ( hWnd.headNode[0] == 1224 )
              goto LABEL_609;
            v277 = v375[2].unknown38;
            if ( v277 )
            {
              v278 = *(CCINIClass **)v277;
              v279 = (int)v272 <= *(_DWORD *)v277;
              if ( (int)v272 < *(_DWORD *)v277 )
              {
                v280 = v272;
                v377 = (AbstractClass *)v272;
                if ( !v279 )
                {
                  v280 = v278;
                  v377 = (AbstractClass *)v278;
                }
                v281 = *(_DWORD *)(v277 + 4);
                if ( (int)v280 >= v281 && (int)v278 >= v281 )
                {
                  var2D28 = (AbstractClass *)(2 * (_DWORD)v278);
                  if ( 2 * (int)v278 < 10 )
                    var2D28 = (AbstractClass *)10;
                  v282 = (CCINIClass *)__2_YAPAXI_Z(4 * (_DWORD)var2D28);
                  memset(v282, 0, 4 * ((unsigned int)(4 * (_DWORD)var2D28) >> 2));
                  v283 = *(CCINIClass **)(v277 + 8);
                  if ( v283 )
                    qmemcpy(v282, v283, 4 * *(_DWORD *)v277);
                  __3_YAXPAX_Z(*(void **)(v277 + 8));
                  v284 = var2D28;
                  v272 = (CCINIClass *)v386;
                  v280 = (CCINIClass *)v377;
                  *(_DWORD *)(v277 + 8) = v282;
                  *(_DWORD *)(v277 + 4) = v284;
                }
                if ( *(_DWORD *)v277 >= *(_DWORD *)(v277 + 4) )
                  Options::GrowBuffer((int *)v277);
                if ( (int)v280 < *(_DWORD *)v277 )
                  memcpy(
                    (void *)(*(_DWORD *)(v277 + 8) + 4 * (_DWORD)v280 + 4),
                    (const void *)(*(_DWORD *)(v277 + 8) + 4 * (_DWORD)v280),
                    4 * (*(_DWORD *)v277 + 0x3FFFFFFF * (_DWORD)v280));
                v285 = (_DWORD *)(*(_DWORD *)(v277 + 8) + 4 * (_DWORD)v280);
                if ( v285 )
                  *v285 = -1;
                ++*(_DWORD *)v277;
              }
            }
            v286 = v375[2].INIClass_field_3C;
            if ( v286 )
            {
              v287 = *(CCINIClass **)v286;
              v288 = (int)v272 <= *(_DWORD *)v286;
              if ( (int)v272 < *(_DWORD *)v286 )
              {
                v289 = (int)v272;
                v377 = (AbstractClass *)v272;
                if ( !v288 )
                {
                  v289 = (int)v287;
                  v377 = (AbstractClass *)v287;
                }
                v290 = *(_DWORD *)(v286 + 4);
                if ( v289 >= v290 && (int)v287 >= v290 )
                {
                  var2D28 = (AbstractClass *)(2 * (_DWORD)v287);
                  if ( 2 * (int)v287 < 10 )
                    var2D28 = (AbstractClass *)10;
                  v291 = (CCINIClass *)__2_YAPAXI_Z(4 * (_DWORD)var2D28);
                  memset(v291, 0, 4 * ((unsigned int)(4 * (_DWORD)var2D28) >> 2));
                  v292 = *(CCINIClass **)(v286 + 8);
                  if ( v292 )
                    qmemcpy(v291, v292, 4 * *(_DWORD *)v286);
                  __3_YAXPAX_Z(*(void **)(v286 + 8));
                  v293 = var2D28;
                  v289 = (int)v377;
                  v272 = (CCINIClass *)v386;
                  *(_DWORD *)(v286 + 8) = v291;
                  *(_DWORD *)(v286 + 4) = v293;
                }
                if ( *(_DWORD *)v286 >= *(_DWORD *)(v286 + 4) )
                  Options::GrowBuffer((int *)v286);
                if ( v289 < *(_DWORD *)v286 )
                  memcpy(
                    (void *)(*(_DWORD *)(v286 + 8) + 4 * v289 + 4),
                    (const void *)(*(_DWORD *)(v286 + 8) + 4 * v289),
                    4 * (*(_DWORD *)v286 + 0x3FFFFFFF * v289));
                v294 = (_DWORD *)(*(_DWORD *)(v286 + 8) + 4 * v289);
                if ( v294 )
                  *v294 = 0;
                ++*(_DWORD *)v286;
              }
            }
            if ( (int)v272 < 0 )
LABEL_609:
              v386 = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
            v398 = *(int **)v375[2].__pad_48;
            v295 = (CCINIClass **)v398;
            unknown_libname_74(&lParam.tmAscent);
            unknown_libname_74(&lParam.tmDescent);
            lParam.tmHeight = 0;
            lParam.tmInternalLeading = -1;
            lParam.tmExternalLeading = 0;
            lParam.tmAveCharWidth = -1;
            if ( v295 )
            {
              v296 = *v295;
              v297 = 0;
              v279 = (int)*v295 <= 0;
              v377 = 0;
              v387 = 0;
              if ( !v279 )
              {
                while ( 1 )
                {
                  if ( v297 >= 0 && v297 < (int)v296 )
                    v377 = (AbstractClass *)((char *)v295[2] + 20 * v297);
                  v300 = (CCINIClass *)v386;
                  v301 = (int *)&v377->__pad_0[8];
                  v302 = -(v387 != 0);
                  LOBYTE(v302) = v302 & 0xFC;
                  lParam.tmHeight = v302 + 4;
                  v303 = *(CCINIClass **)&v377->__pad_0[8];
                  if ( (int)v386 > (int)v303 )
                    v300 = *(CCINIClass **)&v377->__pad_0[8];
                  v304 = *(_DWORD *)&v377->__pad_0[12];
                  if ( (int)v300 >= v304 && (int)v303 >= v304 )
                  {
                    var2D28 = (AbstractClass *)(2 * (_DWORD)v303);
                    if ( 2 * (int)v303 < 10 )
                      var2D28 = (AbstractClass *)10;
                    v389 = __2_YAPAXI_Z(24 * (_DWORD)var2D28);
                    memset((void *)v389, 0, 4 * ((unsigned int)(24 * (_DWORD)var2D28) >> 2));
                    v305 = (CCINIClass *)v377->uniqueId;
                    if ( v305 )
                      qmemcpy((void *)v389, v305, 24 * *v301);
                    __3_YAXPAX_Z((void *)v377->uniqueId);
                    v306 = var2D28;
                    v377->uniqueId = v389;
                    v301[1] = (int)v306;
                  }
                  if ( *v301 >= v301[1] )
                    DynamicVector::GrowCapacity(v301);
                  if ( (int)v300 < *v301 )
                    memcpy(
                      (void *)(v301[2] + 8 * (3 * (_DWORD)v300 + 3)),
                      (const void *)(v301[2] + 24 * (_DWORD)v300),
                      24 * *v301 - 24 * (_DWORD)v300);
                  v307 = (wchar_t **)(v301[2] + 24 * (_DWORD)v300);
                  if ( v307 )
                    Struct::WideStringCopy(v307, (ObjectClass *)&lParam);
                  v308 = (CCINIClass **)v398;
                  ecx638 = v387;
                  ++*v301;
                  v296 = *v308;
                  v387 = (_DWORD *)((char *)ecx638 + 1);
                  if ( (int)((char *)ecx638 + 1) >= (int)v296 )
                    break;
                  v297 = (int)v387;
                  v295 = (CCINIClass **)v398;
                }
              }
            }
            DeleteAndZero::Alt((void **)&lParam.tmDescent);
            DeleteAndZero::Alt((void **)&lParam.tmAscent);
            goto LABEL_668;
          }
        }
        else
        {
          v379 = (AbstractClass *)-2;
        }
        CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x182u, (WPARAM)v272, 0);
        if ( v274 )
        {
          v298 = 0;
          v299 = *(AbstractClass **)&v375->needsSave_flag;
          if ( v299 )
          {
            while ( v274 != v299 )
            {
              v298 = v299;
              v299 = *(AbstractClass **)v299->__pad_0;
              if ( !v299 )
                goto LABEL_668;
            }
            if ( v298 )
              *(_DWORD *)v298->__pad_0 = *(_DWORD *)v299->__pad_0;
            else
              *(_DWORD *)&v375->needsSave_flag = *(_DWORD *)v299->__pad_0;
            __3_YAXPAX_Z(v299);
          }
        }
        goto LABEL_668;
      case 0x4E8u:
        v314 = HIWORD(hWnd.headNode[2]);
        result = -1;
        if ( LOWORD(hWnd.headNode[2]) < aP2.uniqueId && v314 < aP2.abstractFlags )
        {
          v315 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
          v316 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
          result = *(_DWORD *)&v375[2].ownsFile + v314 / v315;
          if ( result < 0 || result > v316 - 1 )
            return -1;
        }
        return result;
      case 0x4EFu:
        return v375->headNode[2];
      default:
        goto LABEL_668;
    }
    while ( !v266 )
    {
      v379 = (AbstractClass *)CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x199u, (WPARAM)v267, 0);
      if ( v379 != (AbstractClass *)-1 )
      {
        if ( hWnd.headNode[0] == 1221 || hWnd.headNode[0] == 1226 )
        {
          v269 = _wcsicmp((const wchar_t *)v263, *(const wchar_t **)&v379->__pad_0[8]);
        }
        else
        {
          v268 = wcslen((const wchar_t *)v263);
          v269 = _wcsnicmp((const wchar_t *)v263, *(const wchar_t **)&v379->__pad_0[8], v268);
        }
        v379 = v267;
        v266 = v269 == 0;
      }
      v267 = (AbstractClass *)((char *)v267 + 1);
      if ( (int)v267 >= v265 )
      {
        if ( !v266 )
        {
LABEL_667:
          v379 = (AbstractClass *)-1;
          goto LABEL_668;
        }
        break;
      }
    }
    if ( hWnd.headNode[0] == 1222 )
      v379 = (AbstractClass *)SendMessageA(*(HWND *)hWnd.__pad_0, 0x186u, (WPARAM)v379, 0);
    goto LABEL_668;
  }
  if ( v7 == 1205 )
  {
LABEL_644:
    wParam = 0;
LABEL_645:
    v309 = (ObjectClass *)hWnd.headNode[2];
    v381 = 0;
    if ( hWnd.headNode[2] && hWnd.headNode[0] != 394 && hWnd.headNode[0] != 1231 )
    {
      if ( wParam )
        *(_WORD *)hWnd.headNode[2] = 0;
      else
        *(_BYTE *)hWnd.headNode[2] = 0;
    }
    v311 = CallWindowProcA(lpPrevWndFunc, *(HWND *)hWnd.__pad_0, 0x199u, hWnd.headNode[1], 0);
    edi651 = (AbstractClass *)v311;
    v379 = (AbstractClass *)v311;
    if ( v311 != -1 )
    {
      if ( !v311 )
        goto LABEL_668;
      if ( hWnd.headNode[0] == 1231 )
      {
        edi651 = *(AbstractClass **)(v311 + 12);
        v379 = edi651;
      }
      else
      {
        v312 = (CCINIClass *)(v311 + 8);
        edi651 = (AbstractClass *)wcslen(*(const wchar_t **)(v311 + 8));
        v379 = edi651;
        if ( hWnd.headNode[0] != 394 )
        {
          if ( wParam )
            wcscpy((wchar_t *)v309, *(const wchar_t **)v312->__pad_0);
          else
            CopyWideToChar(v309, *(char **)v312->__pad_0, -1);
        }
      }
    }
    if ( (int)edi651 < 0 )
      v379 = 0;
LABEL_668:
    if ( v393 == 1 )
    {
      v317 = (HWND *)&v375->headNode[2];
      if ( !v375->headNode[2] )
      {
        *v317 = (HWND)1;
        GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
        v318 = GetParent(*(HWND *)hWnd.__pad_0);
        ScreenDialogToClient(v318, &v404);
        ScreenDialogToClient(*(HWND *)hWnd.__pad_0, &v401);
        v319 = v401.left - v404.left;
        v320 = v401.top - v404.top;
        *v317 = CreateWindowExA(
                  0,
                  &stru_830620.__pad_14B0[15584],
                  0,
                  0x50010001u,
                  v401.left - v404.left - nWidth + aP2.uniqueId + 1,
                  *(_DWORD *)&aP2.__pad_0[12] + v401.top - v404.top,
                  nWidth,
                  v401.bottom - v401.top,
                  v318,
                  0,
                  (HINSTANCE)g_hInstance,
                  0);
        v375->headNode[0] = nWidth;
        Dialog::InitializeControls(*v317, 0);
        v393 = 0;
        if ( *(&g_MatrixTransformState + 2877) )
        {
          v321 = (HWND *)*(&(*(&g_MatrixTransformState + 2876))->X
                         + (((int (__thiscall *)(HWND *))*(&g_MatrixTransformState + 2882))(v317)
                          & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1)));
          if ( v321 )
          {
            while ( *v321 != *v317 )
            {
              v321 = (HWND *)v321[129];
              if ( !v321 )
                goto LABEL_676;
            }
            v393 = (int)(v321 + 1);
          }
        }
LABEL_676:
        eax676 = v393;
        v322 = (CCINIClass *)LODWORD(v385);
        *(_DWORD *)(v393 + 8) = *(_DWORD *)hWnd.__pad_0;
        *(_BYTE *)(eax676 + 205) = 0;
        lParam.tmInternalLeading = (LONG)v322;
        lParam.tmAscent = 5;
        ecx676 = *(_DWORD *)&v375[2].ownsFile;
        v324 = (CCINIClass *)*v317;
        lParam.tmDescent = 0;
        lParam.tmAveCharWidth = ecx676;
        lParam.tmHeight = 28;
        SendMessageA((HWND)v324, 0xE9u, 0, (LPARAM)&lParam);
        SetWindowPos(*(HWND *)hWnd.__pad_0, 0, 0, 0, v401.right - v401.left - nWidth, v401.bottom - v401.top, 2u);
        ShowWindow(*v317, 5);
        BringWindowToTop(*v317);
        InvalidateRect(*v317, 0, 0);
        UpdateWindow(*v317);
        v400.left = v319;
        v400.top = v320;
        v400.right = v319 + aP2.uniqueId + 1;
        v400.bottom = aP2.abstractFlags + v320 + 1;
        ValidateRect(v318, &v400);
      }
      goto LABEL_743;
    }
    if ( v393 || !v375->headNode[2] || *(_DWORD *)v375->__pad_20 )
    {
LABEL_743:
      if ( v381 )
        v367 = (AbstractClass *)CallWindowProcA(
                                  lpPrevWndFunc,
                                  *(HWND *)hWnd.__pad_0,
                                  hWnd.headNode[0],
                                  hWnd.headNode[1],
                                  hWnd.headNode[2]);
      else
        v367 = v379;
      if ( hWnd.headNode[0] == 130 )
      {
        v365 = (CCINIClass *)v375[2].unknown38;
        if ( v365 )
        {
          *(_DWORD *)v365->__pad_0 = 0;
          __3_YAXPAX_Z((void *)v365->headNode[1]);
          __3_YAXPAX_Z(v365);
        }
        v366 = (CCINIClass *)v375[2].INIClass_field_3C;
        if ( v366 )
        {
          *(_DWORD *)v366->__pad_0 = 0;
          __3_YAXPAX_Z((void *)v366->headNode[1]);
          __3_YAXPAX_Z(v366);
        }
      }
      return (int)v367;
    }
    DestroyWindow((HWND)v375->headNode[2]);
    wParam = v375->headNode[2];
    if ( *(&g_MatrixTransformState + 2895) )
    {
      *(_QWORD *)aP2.__pad_0 = (unsigned int)&(*(&g_MatrixTransformState + 2895))[-1].Z + 3;
      *(_DWORD *)aP2.__pad_0 = *(&g_MatrixTransformState + 2896);
      v385 = (double)((unsigned int)&(*(&g_MatrixTransformState + 2895))[-1].Z + 3)
           / (double)(int)*(&g_MatrixTransformState + 2896);
      esi681 = ((int (__thiscall *)(WPARAM *))*(&g_MatrixTransformState + 2900))(&wParam)
             & ((1 << *((char *)&g_MatrixTransformState + 11588)) - 1);
      v326 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 2894))->X + esi681);
      if ( v326 )
      {
        if ( *(_DWORD *)v326->__pad_0 == wParam )
        {
          v327 = (CCINIClass *)v326->headNode[1];
          __3_YAXPAX_Z(*((void **)&(*(&g_MatrixTransformState + 2894))->X + esi681));
          v329 = v385;
          *(&(*(&g_MatrixTransformState + 2894))->X + esi681) = (int)v327;
          *(&g_MatrixTransformState + 2895) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2895) - 1);
          if ( v329 <= *((double *)&g_MatrixTransformState + 1451)
            && *(&g_MatrixTransformState + 2896) > *(&g_MatrixTransformState + 2906)
            && *((_BYTE *)&g_MatrixTransformState + 11596) != 1 )
          {
            v330 = (CCINIClass *)*(&g_MatrixTransformState + 2894);
            esi686 = (int)*(&g_MatrixTransformState + 2896);
            v332 = (unsigned int)*(&g_MatrixTransformState + 2896) >> 1;
            *((_QWORD *)&g_MatrixTransformState + 1448) = __PAIR64__(
                                                            *(&g_MatrixTransformState + 2897),
                                                            (unsigned int)*(&g_MatrixTransformState + 2896) >> 1)
                                                        - 0x100000000LL;
            *(&g_MatrixTransformState + 2894) = (CoordStruct *)__2_YAPAXI_Z(4 * v332);
            memset(*(&g_MatrixTransformState + 2894), 0, 4 * (_DWORD)*(&g_MatrixTransformState + 2896));
            if ( esi686 > 0 )
            {
              v331 = v330;
              v334 = esi686;
              do
              {
                v333 = *(CCINIClass **)v331->__pad_0;
                if ( *(_DWORD *)v331->__pad_0 )
                {
                  do
                  {
                    eax689 = HashMap::ComputeIndex((int)(&(&g_MatrixTransformState)[241] + 2), v333);
                    edx689 = *(&(*(&g_MatrixTransformState + 2894))->X + eax689);
                    *(&(*(&g_MatrixTransformState + 2894))->X + eax689) = (int)v333;
                    v336 = (CCINIClass *)v333->headNode[1];
                    v333->headNode[1] = edx689;
                    v333 = v336;
                  }
                  while ( v336 );
                }
                v331 = (CCINIClass *)((char *)v331 + 4);
                --v334;
              }
              while ( v334 );
            }
            __3_YAXPAX_Z(v330);
          }
        }
        else
        {
          v337 = (CCINIClass *)v326->headNode[1];
          if ( v337 )
          {
            while ( *(_DWORD *)v337->__pad_0 != wParam )
            {
              v326 = v337;
              v337 = (CCINIClass *)v337->headNode[1];
              if ( !v337 )
                goto LABEL_697;
            }
            v326->headNode[1] = v337->headNode[1];
            *(&g_MatrixTransformState + 2895) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2895) - 1);
            __3_YAXPAX_Z(v337);
          }
LABEL_697:
          if ( v385 <= *((double *)&g_MatrixTransformState + 1451) )
            HashTable::Shrink2(&g_MatrixTransformState + 2894);
        }
      }
    }
    memset(Destination, 0, 0x200u);
    wcscpy(&Destination[52], L"\v");
    *(_DWORD *)&Destination[50] = aP0;
    v340 = (_DWORD *)__2_YAPAXI_Z(4u);
    if ( v340 )
      v341 = unknown_libname_74(v340);
    else
      v341 = 0;
    *(_DWORD *)&Destination[30] = v341;
    *(_DWORD *)&Destination[32] = 0;
    *(_DWORD *)&Destination[46] = 0;
    *(_DWORD *)&Destination[72] = -1;
    if ( *(&g_MatrixTransformState + 2877) )
    {
      *(_QWORD *)aP2.__pad_0 = (unsigned int)&(*(&g_MatrixTransformState + 2877))[-1].Z + 3;
      *(_DWORD *)aP2.__pad_0 = *(&g_MatrixTransformState + 2878);
      v385 = (double)((unsigned int)&(*(&g_MatrixTransformState + 2877))[-1].Z + 3)
           / (double)(int)*(&g_MatrixTransformState + 2878);
      esi703 = ((int (__thiscall *)(WPARAM *))*(&g_MatrixTransformState + 2882))(&wParam)
             & ((1 << *((char *)&g_MatrixTransformState + 11516)) - 1);
      v343 = (char *)*(&(*(&g_MatrixTransformState + 2876))->X + esi703);
      if ( v343 )
      {
        if ( *(_DWORD *)v343 == wParam )
        {
          DialogClass::CopyTemplateStruct(Destination, (AbstractClass *)(v343 + 4));
          v342 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 2876))->X + esi703);
          CCINIClass_field_4C = v342[5].CCINIClass_field_4C;
          if ( v342 )
          {
            Dialog::CleanupTree((int)v342->headNode);
            __3_YAXPAX_Z(v342);
          }
          v346 = v385;
          *(&(*(&g_MatrixTransformState + 2876))->X + esi703) = CCINIClass_field_4C;
          *(&g_MatrixTransformState + 2877) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2877) - 1);
          if ( v346 > *((double *)&g_MatrixTransformState + 1442) )
            goto LABEL_716;
        }
        else
        {
          esi709 = (char *)*((_DWORD *)v343 + 129);
          if ( esi709 )
          {
            while ( *(_DWORD *)esi709 != wParam )
            {
              v343 = esi709;
              esi709 = (char *)*((_DWORD *)esi709 + 129);
              if ( !esi709 )
                goto LABEL_714;
            }
            DialogClass::CopyTemplateStruct(Destination, (AbstractClass *)(esi709 + 4));
            *((_DWORD *)v343 + 129) = *((_DWORD *)esi709 + 129);
            *(&g_MatrixTransformState + 2877) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2877) - 1);
            Options::DestroyComposite(esi709, 1);
          }
LABEL_714:
          if ( v385 > *((double *)&g_MatrixTransformState + 1442) )
            goto LABEL_716;
        }
        HashTable::Rebuild2(&g_MatrixTransformState + 2876);
      }
    }
LABEL_716:
    GadgetClass::SetTooltip((void **)Destination, 0);
    for ( n = *(_DWORD **)&Destination[26]; *(_DWORD *)&Destination[26]; n = *(_DWORD **)&Destination[26] )
      LinkedList::Remove(Destination, n);
    v347 = *(CCINIClass **)&Destination[30];
    if ( *(_DWORD *)&Destination[30] )
    {
      DeleteAndZero::Alt(*(void ***)&Destination[30]);
      __3_YAXPAX_Z(v347);
    }
    if ( *(&g_MatrixTransformState + 2733) )
    {
      *(_QWORD *)aP2.__pad_0 = (unsigned int)&(*(&g_MatrixTransformState + 2733))[-1].Z + 3;
      *(_DWORD *)aP2.__pad_0 = *(&g_MatrixTransformState + 2734);
      v385 = (double)((unsigned int)&(*(&g_MatrixTransformState + 2733))[-1].Z + 3)
           / (double)(int)*(&g_MatrixTransformState + 2734);
      esi721 = ((int (__thiscall *)(WPARAM *))*(&g_MatrixTransformState + 2738))(&wParam)
             & ((1 << *((char *)&g_MatrixTransformState + 10940)) - 1);
      v349 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 2732))->X + esi721);
      if ( v349 )
      {
        if ( *(_DWORD *)v349->__pad_0 == wParam )
        {
          v350 = (CCINIClass *)v349->headNode[1];
          __3_YAXPAX_Z(*((void **)&(*(&g_MatrixTransformState + 2732))->X + esi721));
          v353 = v385;
          *(&(*(&g_MatrixTransformState + 2732))->X + esi721) = (int)v350;
          *(&g_MatrixTransformState + 2733) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2733) - 1);
          if ( v353 <= *((double *)&g_MatrixTransformState + 1370)
            && *(&g_MatrixTransformState + 2734) > *(&g_MatrixTransformState + 2744)
            && *((_BYTE *)&(&g_MatrixTransformState)[228] + 4) != 1 )
          {
            ebp726 = (CCINIClass *)*(&g_MatrixTransformState + 2732);
            v355 = (int)*(&g_MatrixTransformState + 2734);
            Parent = (HWND)*(&g_MatrixTransformState + 2732);
            eax726 = (unsigned int)*(&g_MatrixTransformState + 2734) >> 1;
            *((_QWORD *)&g_MatrixTransformState + 1367) = __PAIR64__(
                                                            *(&g_MatrixTransformState + 2735),
                                                            (unsigned int)*(&g_MatrixTransformState + 2734) >> 1)
                                                        - 0x100000000LL;
            *(&g_MatrixTransformState + 2732) = (CoordStruct *)__2_YAPAXI_Z(4 * eax726);
            memset(*(&g_MatrixTransformState + 2732), 0, 4 * (_DWORD)*(&g_MatrixTransformState + 2734));
            if ( v355 > 0 )
            {
              v354 = ebp726;
              v358 = v355;
              do
              {
                v356 = *(CCINIClass **)v354->__pad_0;
                if ( *(_DWORD *)v354->__pad_0 )
                {
                  do
                  {
                    eax729 = HashMap::ComputeIndex((int)(&g_MatrixTransformState + 2732), v356);
                    v361 = *(&(*(&g_MatrixTransformState + 2732))->X + eax729);
                    *(&(*(&g_MatrixTransformState + 2732))->X + eax729) = (int)v356;
                    v359 = (CCINIClass *)v356->headNode[1];
                    v356->headNode[1] = v361;
                    v356 = v359;
                  }
                  while ( v359 );
                }
                v354 = (CCINIClass *)((char *)v354 + 4);
                --v358;
              }
              while ( v358 );
              ebp726 = (CCINIClass *)Parent;
            }
            __3_YAXPAX_Z(ebp726);
          }
        }
        else
        {
          v360 = (CCINIClass *)v349->headNode[1];
          if ( v360 )
          {
            while ( *(_DWORD *)v360->__pad_0 != wParam )
            {
              v349 = v360;
              v360 = (CCINIClass *)v360->headNode[1];
              if ( !v360 )
                goto LABEL_738;
            }
            v349->headNode[1] = v360->headNode[1];
            *(&g_MatrixTransformState + 2733) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 2733) - 1);
            __3_YAXPAX_Z(v360);
          }
LABEL_738:
          if ( v385 <= *((double *)&g_MatrixTransformState + 1370) )
            HashTable::Shrink2(&g_MatrixTransformState + 2732);
        }
      }
    }
    v364 = (void *)GetWindowLongA((HWND)wParam, -21);
    if ( v364 )
      __3_YAXPAX_Z(v364);
    SetWindowLongA((HWND)wParam, -21, 0);
    Object::RemoveObjectArray((void *)wParam);
    edi742 = nWidth;
    v375->headNode[2] = 0;
    v375->headNode[0] = 0;
    SetWindowPos(
      *(HWND *)hWnd.__pad_0,
      0,
      0,
      0,
      (int)&(*(&g_MatrixTransformState + 3064))->X + aP2.uniqueId - *(_DWORD *)&aP2.__pad_0[8] + edi742 + 1,
      aP2.abstractFlags + 2 * (_DWORD)*(&g_MatrixTransformState + 3064) - *(_DWORD *)&aP2.__pad_0[12],
      2u);
    esi742 = GetParent(*(HWND *)hWnd.__pad_0);
    ScreenDialogToClient(esi742, &v404);
    v400.left = aP2.nextArrayIndex - v404.left - 1;
    v400.top = aP2.referenceCount - v404.top - 1;
    v400.right = edi742 + aP2.uniqueId + aP2.nextArrayIndex - v404.left;
    v400.bottom = aP2.referenceCount - v404.top + aP2.abstractFlags + 1;
    ValidateRect(esi742, &v400);
    goto LABEL_743;
  }
  if ( v7 > 0x4A6 )
  {
    switch ( v7 )
    {
      case 0x4A7u:
        esi478 = *(_DWORD *)v375[2].__pad_48;
        if ( !esi478 )
          return -1;
        v236 = *(CCINIClass **)esi478;
        v235 = 0;
        edi480 = 0;
        if ( *(int *)esi478 <= 0 )
          return -1;
        for ( ii = 0; ; ii += 20 )
        {
          if ( ii >= 0 && edi480 < (int)v236 )
            v235 = (_DWORD *)(ii + *(_DWORD *)(esi478 + 8));
          if ( *v235 == hWnd.headNode[2] )
            break;
          if ( ++edi480 >= (int)v236 )
            return -1;
        }
        if ( v236 )
        {
          if ( edi480 < 0 )
            edi480 = 0;
          if ( edi480 >= (int)v236 )
            edi480 = (int)&v236[-1].unknown54 + 3;
          v238 = 20 * edi480 + *(_DWORD *)(esi478 + 8) + 8;
          Options::DeleteAndZero((int *)v238);
          __3_YAXPAX_Z(*(void **)(v238 + 8));
          memcpy(
            (void *)(*(_DWORD *)(esi478 + 8) + 20 * edi480),
            (const void *)(*(_DWORD *)(esi478 + 8) + 4 * (5 * edi480 + 5)),
            20 * *(_DWORD *)esi478 - 4 * (5 * edi480 + 5));
          v239 = *(_DWORD *)esi478 - 1;
          *(_DWORD *)esi478 = v239;
          if ( 3 * v239 <= *(_DWORD *)(esi478 + 4) )
            Options::ReadOptionValue((int *)esi478);
        }
        return hWnd.headNode[2];
      case 0x4A8u:
        v240 = *(_DWORD *)v375[2].__pad_48;
        if ( !v240 )
          return -1;
        v241 = 0;
        v242 = 0;
        v243 = (CCINIClass *)HIWORD(hWnd.headNode[1]);
        v246 = *(CCINIClass **)v240;
        v245 = (_DWORD *)LOWORD(hWnd.headNode[1]);
        LODWORD(v385) = HIWORD(hWnd.headNode[1]);
        v387 = (_DWORD *)LOWORD(hWnd.headNode[1]);
        if ( (int)v246 <= 0 )
          return -1;
        ecx499 = 0;
        break;
      case 0x4ADu:
        Parent = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0);
        v220 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
        j = *(_DWORD *)v375[2].__pad_48;
        if ( !j )
          return 0;
        v221 = 0;
        v222 = -1;
        v223 = (signed int)HIWORD(hWnd.headNode[1]) / v220;
        v377 = 0;
        v224 = *(_DWORD *)&v375[2].ownsFile;
        v225 = 0;
        v389 = -1;
        v226 = v224 + v223;
        v229 = *(CCINIClass **)j;
        if ( *(int *)j <= 0 )
          return 0;
        var2D28 = 0;
        do
        {
          if ( (int)var2D28 >= 0 && v225 < (int)v229 )
            v221 = &var2D28->__pad_0[*(_DWORD *)(j + 8)];
          if ( *(_DWORD *)v221 <= (int)LOWORD(hWnd.headNode[1]) )
          {
            if ( *(_DWORD *)v221 <= (int)v377 )
            {
              v222 = v389;
            }
            else
            {
              v222 = v225;
              v377 = *(AbstractClass **)v221;
              v389 = v225;
            }
          }
          ++v225;
          var2D28 = (AbstractClass *)((char *)var2D28 + 20);
        }
        while ( v225 < (int)v229 );
        if ( v222 == -1 )
          return 0;
        if ( v226 < 0 || v226 >= (int)Parent )
          return 0;
        if ( v222 >= 0 && v222 < (int)v229 )
          v221 = (char *)(*(_DWORD *)(j + 8) + 20 * v222);
        if ( !v221 )
          return 0;
        if ( v226 < *((_DWORD *)v221 + 2)
          && (v228 = *((_DWORD *)v221 + 4) + 24 * v226) != 0
          && (v231 = (ObjectClass *)hWnd.headNode[2]) != 0
          && (v232 = (CCINIClass *)(v228 + 8),
              v233 = WideString::GetOrEmpty((wchar_t **)(v228 + 8)),
              wcscpy((wchar_t *)v231, (const wchar_t *)v233),
              v234 = WideString::GetOrEmpty((wchar_t **)v232),
              !wcslen((const wchar_t *)v234)) )
        {
          return 1;
        }
        else
        {
          return 0;
        }
      case 0x4B3u:
        goto LABEL_645;
      default:
        goto LABEL_668;
    }
    while ( 1 )
    {
      if ( ecx499 >= 0 && v242 < (int)v246 )
        v241 = ecx499 + *(_DWORD *)(v240 + 8);
      if ( *(_DWORD *)v241 == LOWORD(hWnd.headNode[1]) )
        break;
      ++v242;
      ecx499 += 20;
      if ( v242 >= (int)v246 )
        return -1;
    }
    if ( v242 == -1 )
      return -1;
    if ( (int)v243 >= SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
      return -1;
    unknown_libname_74(&lParam.tmAscent);
    unknown_libname_74(&lParam.tmDescent);
    lParam.tmHeight = 0;
    lParam.tmInternalLeading = -1;
    lParam.tmExternalLeading = 0;
    lParam.tmAveCharWidth = -1;
    if ( !v242 )
      lParam.tmHeight = 4;
    v249 = *(CCINIClass **)(v241 + 8);
    v248 = v241 + 8;
    if ( (int)v243 >= (int)v249 )
    {
      ecx512 = &v243->__pad_0[1];
      v252 = v249;
      Parent = (HWND)v249;
      if ( (int)&v243->__pad_0[1] >= 0 )
      {
        *(_DWORD *)v248 = ecx512;
        v251 = *(_DWORD *)(v248 + 4);
        if ( (int)ecx512 > v251 )
        {
          do
          {
            v254 = *(CCINIClass **)v248;
            if ( *(_DWORD *)v248 >= v251 )
            {
              v253 = 2 * (_DWORD)v254;
              if ( 2 * (int)v254 < 10 )
                v253 = 10;
              v377 = (AbstractClass *)__2_YAPAXI_Z(24 * v253);
              memset(v377, 0, 4 * ((unsigned int)(24 * v253) >> 2));
              v256 = *(CCINIClass **)(v248 + 8);
              if ( v256 )
                qmemcpy(v377, v256, 24 * *(_DWORD *)v248);
              __3_YAXPAX_Z(*(void **)(v248 + 8));
              v252 = (CCINIClass *)Parent;
              *(_DWORD *)(v248 + 8) = v377;
              *(_DWORD *)(v248 + 4) = v253;
              v243 = (CCINIClass *)LODWORD(v385);
            }
            v251 = *(_DWORD *)(v248 + 4);
          }
          while ( (int)&v243->__pad_0[1] > v251 );
        }
        v257 = v252;
        if ( (int)v252 < *(_DWORD *)v248 )
        {
          esi522 = 24 * (_DWORD)v252;
          do
          {
            ecx523 = (wchar_t **)(*(_DWORD *)(v248 + 8) + esi522);
            if ( ecx523 )
              Struct::WideStringCopy(ecx523, (ObjectClass *)&lParam);
            v257 = (CCINIClass *)((char *)v257 + 1);
            esi522 += 24;
          }
          while ( (int)v257 < *(_DWORD *)v248 );
        }
        if ( 3 * *(_DWORD *)v248 <= *(_DWORD *)(v248 + 4) )
          Options::EnsureCapacity((int *)v248);
        v245 = v387;
      }
    }
    v259 = *(CCINIClass **)v248;
    v260 = v243;
    if ( *(_DWORD *)v248 )
    {
      if ( (int)v243 >= (int)v259 )
        v260 = (CCINIClass *)((char *)v259 - 1);
      esi532 = 24 * (_DWORD)v260;
      v261 = 24 * (_DWORD)v260 + *(_DWORD *)(v248 + 8);
      DeleteAndZero::Alt((void **)(v261 + 8));
      DeleteAndZero::Alt((void **)(v261 + 4));
      v262 = (wchar_t **)(esi532 + *(_DWORD *)(v248 + 8));
      if ( v262 )
        Struct::WideStringCopy(v262, (ObjectClass *)hWnd.headNode[2]);
      v245 = v387;
    }
    DeleteAndZero::Alt((void **)&lParam.tmDescent);
    DeleteAndZero::Alt((void **)&lParam.tmAscent);
    return (int)v245;
  }
  else if ( v7 == 1190 )
  {
    esi429 = *(_DWORD **)v375[2].__pad_48;
    if ( !esi429 )
    {
      v210 = (_DWORD *)__2_YAPAXI_Z(0xCu);
      if ( v210 )
      {
        *v210 = 0;
        v210[1] = 0;
        v210[2] = 0;
        esi429 = v210;
      }
      else
      {
        esi429 = 0;
      }
      *(_DWORD *)v375[2].__pad_48 = esi429;
    }
    v214 = (CCINIClass *)*esi429;
    v212 = hWnd.headNode[2];
    v213 = 0;
    ecx434 = 0;
    if ( (int)*esi429 <= 0 )
    {
LABEL_441:
      memset(&lParam.tmDescent, 0, 12);
      lParam.tmHeight = hWnd.headNode[2];
      lParam.tmAscent = hWnd.headNode[1];
      v219 = (CCINIClass *)*esi429;
      if ( *esi429 >= esi429[1] )
        Options::SaveOptionValue(esi429);
      if ( *esi429 >= esi429[1] )
        Options::SaveOptionValue(esi429);
      if ( (int)v219 < *esi429 )
        memcpy(
          (void *)(esi429[2] + 4 * (5 * (_DWORD)v219 + 5)),
          (const void *)(esi429[2] + 20 * (_DWORD)v219),
          20 * *esi429 - 20 * (_DWORD)v219);
      v217 = (int *)(esi429[2] + 20 * (_DWORD)v219);
      if ( v217 )
        Options::RebuildDropdownList(v217, (ObjectClass *)&lParam);
      ++*esi429;
      v218 = 0;
      if ( lParam.tmDescent > 0 )
      {
        edi450 = 0;
        do
        {
          Options::ClearComboBoxes((void **)(lParam.tmExternalLeading + edi450));
          ++v218;
          edi450 += 24;
        }
        while ( v218 < lParam.tmDescent );
      }
      lParam.tmDescent = 0;
      __3_YAXPAX_Z((void *)lParam.tmExternalLeading);
    }
    else
    {
      v215 = 0;
      while ( 1 )
      {
        if ( v215 >= 0 && ecx434 < (int)v214 )
          v213 = (_DWORD *)(v215 + esi429[2]);
        if ( *v213 == hWnd.headNode[2] )
          break;
        ++ecx434;
        v215 += 20;
        if ( ecx434 >= (int)v214 )
          goto LABEL_441;
      }
    }
    return v212;
  }
  else
  {
    if ( v7 > 0x204 )
    {
      if ( v7 == 1175 )
      {
        *(_DWORD *)&v375[2].__pad_41[3] = -1;
        SendMessageA(
          *(HWND *)hWnd.__pad_0,
          0x1A0u,
          0xFFFFFFFF,
          (unsigned __int16)(*(_DWORD *)(v375[1].headNode[2] + 28) + 2));
      }
      else if ( v7 == 1176 )
      {
        v195 = v375[2].unknown38;
        if ( !v195 )
        {
          v196 = (_DWORD *)__2_YAPAXI_Z(0xCu);
          if ( v196 )
          {
            *v196 = 0;
            v196[1] = 0;
            v196[2] = 0;
            v195 = (int)v196;
          }
          else
          {
            v195 = 0;
          }
          v13 = hWnd.headNode[1];
          v375[2].unknown38 = v195;
        }
        if ( v13 >= *(_DWORD *)v195 )
        {
          v197 = v13 + 1;
          v201 = *(CCINIClass **)v195;
          Parent = *(HWND *)v195;
          if ( v13 + 1 >= 0 )
          {
            *(_DWORD *)v195 = v197;
            v199 = *(_DWORD *)(v195 + 4);
            if ( v197 > v199 )
            {
              do
              {
                v203 = *(CCINIClass **)v195;
                if ( *(_DWORD *)v195 >= v199 )
                {
                  var2D28 = (AbstractClass *)(2 * (_DWORD)v203);
                  if ( 2 * (int)v203 < 10 )
                    var2D28 = (AbstractClass *)10;
                  ebx409 = (CCINIClass *)__2_YAPAXI_Z(4 * (_DWORD)var2D28);
                  memset(ebx409, 0, 4 * ((unsigned int)(4 * (_DWORD)var2D28) >> 2));
                  v205 = *(CCINIClass **)(v195 + 8);
                  if ( v205 )
                    qmemcpy(ebx409, v205, 4 * *(_DWORD *)v195);
                  __3_YAXPAX_Z(*(void **)(v195 + 8));
                  v206 = var2D28;
                  *(_DWORD *)(v195 + 8) = ebx409;
                  *(_DWORD *)(v195 + 4) = v206;
                  v13 = hWnd.headNode[1];
                }
                v199 = *(_DWORD *)(v195 + 4);
              }
              while ( v13 + 1 > v199 );
              v201 = (CCINIClass *)Parent;
            }
            jj = (AbstractClass *)v201;
            if ( (int)v201 < *(_DWORD *)v195 )
            {
              do
              {
                eax415 = (_DWORD *)(*(_DWORD *)(v195 + 8) + 4 * (_DWORD)jj);
                if ( eax415 )
                  *eax415 = -1;
                jj = (AbstractClass *)((char *)jj + 1);
              }
              while ( (int)jj < *(_DWORD *)v195 );
            }
            if ( 3 * *(_DWORD *)v195 <= *(_DWORD *)(v195 + 4) )
            {
              DynamicArray::ShrinkCapacity((int *)v195);
              v13 = hWnd.headNode[1];
            }
          }
        }
        v209 = *(CCINIClass **)v195;
        v207 = v13;
        if ( *(_DWORD *)v195 )
        {
          if ( v13 < 0 )
            v207 = 0;
          if ( v207 >= (int)v209 )
            v207 = (int)&v209[-1].unknown54 + 3;
          v208 = (_DWORD *)(*(_DWORD *)(v195 + 8) + 4 * v207);
          if ( v208 )
            *v208 = hWnd.headNode[2];
        }
        InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
      }
      goto LABEL_668;
    }
    if ( v7 == 516 )
    {
      if ( (GetWindowLongA(*(HWND *)hWnd.__pad_0, -16) & 8) == 0 )
        goto LABEL_668;
      edi236 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA;
      SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, 0, -1);
      SendMessageA(*(HWND *)hWnd.__pad_0, 0x186u, 0xFFFFFFFF, 0);
      esi277 = GetParent(*(HWND *)hWnd.__pad_0);
      v371 = *(_DWORD *)hWnd.__pad_0;
      v136 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
LABEL_394:
      edi236(esi277, 0x111u, v136 | 0x10000, v371);
      InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
      return 0;
    }
    if ( v7 != 513 )
    {
      if ( v7 == 515 )
      {
        v374 = *(_DWORD *)hWnd.__pad_0;
        v186 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
        PostMessageA(Parent, 0x111u, v186 | 0x20000, v374);
        return 0;
      }
      goto LABEL_668;
    }
    v187 = SendMessageA;
    v188 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Eu, 0, 0);
    v189 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x1A1u, 0, 0);
    v190 = v188 + (signed int)HIWORD(hWnd.headNode[2]) / v189;
    if ( v190 < SendMessageA(*(HWND *)hWnd.__pad_0, 0x18Bu, 0, 0) )
    {
      v191 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -16);
      SetFocus(*(HWND *)hWnd.__pad_0);
      Parent = (HWND)SendMessageA(*(HWND *)hWnd.__pad_0, 0x49Du, 0, 1);
      if ( (v191 & 8) != 0 )
      {
        v192 = SendMessageA(*(HWND *)hWnd.__pad_0, 0x187u, v190, 0) == 0;
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1804), 0x2000, 1.0, 0);
        SendMessageA(*(HWND *)hWnd.__pad_0, 0x185u, v192, v190);
        v187 = SendMessageA;
        SendMessageA(*(HWND *)hWnd.__pad_0, 1181, 0, (LPARAM)Parent);
      }
      else
      {
        if ( (v191 & 0x4000) == 0 )
        {
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 1804), 0x2000, 1.0, 0);
          SendMessageA(*(HWND *)hWnd.__pad_0, 0x186u, v190, 0);
        }
        SendMessageA(*(HWND *)hWnd.__pad_0, 1181, 0, (LPARAM)Parent);
      }
      InvalidateRect(*(HWND *)hWnd.__pad_0, 0, 0);
      v193 = GetParent(*(HWND *)hWnd.__pad_0);
      _FFFFFFFCe = *(_DWORD *)hWnd.__pad_0;
      v194 = GetWindowLongA(*(HWND *)hWnd.__pad_0, -12);
      v187(v193, 273, v194 | 0x10000, _FFFFFFFCe);
      return 0;
    }
    else
    {
      return 0;
    }
  }
}



// ==== 0x0061D6D0  NetworkLobbyPaintProc  this=-  sig=csp ====
int __stdcall NetworkLobbyPaintProc(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  HWND v4; // ebp
  int result; // eax
  _DWORD *v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  struct tagRECT Rect; // [esp+18h] [ebp-30h] BYREF
  _DWORD v15[4]; // [esp+28h] [ebp-20h] BYREF
  _DWORD v16[2]; // [esp+38h] [ebp-10h] BYREF
  int v17; // [esp+40h] [ebp-8h]
  int v18; // [esp+44h] [ebp-4h]

  v4 = hWnd; /*0x61d6d4*/
  ScreenDialogToClient(hWnd, &Rect); /*0x61d6df*/
  hWnd = v4; /*0x61d6e9*/
  if ( !MEMORY[0xAC1B04] ) /*0x61d6ef*/
    return 0; /*0x61d6ef*/
  result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&hWnd) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x61d714*/
  if ( !result ) /*0x61d719*/
    return 0; /*0x61d719*/
  while ( *(HWND *)result != hWnd ) /*0x61d725*/
  {
    result = *(_DWORD *)(result + 516); /*0x61d727*/
    if ( !result ) /*0x61d72f*/
      return result; /*0x61d72f*/
  }
  v6 = (_DWORD *)(result + 4); /*0x61d741*/
  if ( result == -4 ) /*0x61d746*/
    return 0; /*0x61d746*/
  if ( a2 > 0x402 ) /*0x61d755*/
  {
    if ( a2 == 1175 ) /*0x61d938*/
      *(_DWORD *)(result + 240) = 100; /*0x61d93a*/
    return 0; /*0x61d945*/
  }
  switch ( a2 ) /*0x61d75b*/
  {
    case 0x402u: /*0x61d75b*/
      v13 = a3; /*0x61d8fc*/
      if ( a3 < v6[58] ) /*0x61d908*/
        v13 = v6[58]; /*0x61d90a*/
      if ( v13 > v6[59] ) /*0x61d914*/
        v13 = v6[59]; /*0x61d916*/
      v6[60] = v13; /*0x61d91d*/
      InvalidateRect(v4, 0, 0); /*0x61d923*/
      return 0; /*0x61d92a*/
    case 0xFu: /*0x61d75b*/
      v17 = Rect.right - Rect.left + 1; /*0x61d7ac*/
      v15[2] = v17; /*0x61d7b0*/
      v8 = *(_DWORD *)(result + 20); /*0x61d7b4*/
      v16[0] = 0; /*0x61d7ba*/
      v16[1] = 0; /*0x61d7c2*/
      v18 = Rect.bottom - Rect.top + 1; /*0x61d7ca*/
      v15[0] = Rect.left; /*0x61d7ce*/
      v15[1] = Rect.top; /*0x61d7d2*/
      v15[3] = v18; /*0x61d7d6*/
      if ( !v8 ) /*0x61d7da*/
      {
        v9 = __2_YAPAXI_Z(0x20u); /*0x61d7e7*/
        if ( v9 ) /*0x61d7ee*/
        {
          v10 = Rect.bottom - Rect.top + 1; /*0x61d802*/
          v11 = Rect.right - Rect.left; /*0x61d803*/
          v9[2] = v10; /*0x61d805*/
          ++v11; /*0x61d808*/
          v9[3] = 0; /*0x61d809*/
          v9[1] = v11; /*0x61d810*/
          *v9 = &XSurface_Vtable; /*0x61d81e*/
          v9[4] = 2; /*0x61d824*/
          Buffer::Init(v9 + 5, 0, 2 * v10 * v11); /*0x61d82b*/
          *v9 = &BSurface_Vtable; /*0x61d830*/
          v12 = v9; /*0x61d836*/
        }
        else
        {
          v12 = 0; /*0x61d83a*/
        }
        v6[4] = v12; /*0x61d83c*/
        ++MEMORY[0xAC48B4]; /*0x61d847*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD *, _DWORD, int))(*v12 + 8))( /*0x61d860*/
          v12,
          v16,
          MEMORY[0x887310],
          v15,
          0,
          1);
      }
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x61d87d*/
        MEMORY[0x887310],
        v15,
        v6[4],
        v16,
        0,
        1);
      UI_Helper_6217E0(255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0], (v6[60] << 16) / (v6[59] - v6[58])); /*0x61d8e3*/
      ValidateRect(v4, 0); /*0x61d8eb*/
      return 0; /*0x61d8f3*/
    case 0x401u: /*0x61d75b*/
      v7 = HIWORD(a4); /*0x61d77d*/
      v6[58] = (unsigned __int16)a4; /*0x61d780*/
      v6[59] = v7; /*0x61d786*/
      return 0; /*0x61d793*/
    default:
      return 0; /*0x61d76b*/
  }
}


// ==== 0x0061E700  GroupLabel::WndProc  this=GroupLabel  sig=csp ====
int __userpurge GroupLabel::WndProc@<eax>(int a1@<ebx>, int hWnd, int Msg, int wParam, int lParam)
{
  int v5; // edi
  int v6; // esi
  _DWORD *v7; // eax
  int v8; // ecx
  int *v9; // eax
  int *v11; // edi
  unsigned __int16 *v12; // ebx
  _DWORD *v13; // ecx
  int v14; // esi
  int v15; // edi
  int v16; // eax
  unsigned __int8 v17; // al
  int v18; // esi
  int v19; // ebp
  int v20; // edi
  int v21; // ebp
  int v22; // ebp
  int *v24; // [esp+4Ch] [ebp-BCh] BYREF
  int v25; // [esp+50h] [ebp-B8h]
  int v26; // [esp+54h] [ebp-B4h] BYREF
  int Rect; // [esp+58h] [ebp-B0h] BYREF
  int Rect_4; // [esp+5Ch] [ebp-ACh]
  int Rect_8; // [esp+60h] [ebp-A8h]
  int Rect_12; // [esp+64h] [ebp-A4h]
  int *v31; // [esp+68h] [ebp-A0h]
  int v32; // [esp+6Ch] [ebp-9Ch]
  #72 *String; // [esp+70h] [ebp-98h]
  int v34; // [esp+74h] [ebp-94h]
  int v35; // [esp+78h] [ebp-90h] BYREF
  int v36; // [esp+7Ch] [ebp-8Ch] BYREF
  int v37; // [esp+80h] [ebp-88h] BYREF
  _DWORD v38[3]; // [esp+84h] [ebp-84h] BYREF
  int v39; // [esp+90h] [ebp-78h] BYREF
  _DWORD v40[3]; // [esp+94h] [ebp-74h] BYREF
  _DWORD v41[2]; // [esp+A0h] [ebp-68h] BYREF
  _DWORD v42[2]; // [esp+A8h] [ebp-60h] BYREF
  int v43; // [esp+B0h] [ebp-58h] BYREF
  _DWORD v44[3]; // [esp+B4h] [ebp-54h] BYREF
  _DWORD v45[2]; // [esp+C0h] [ebp-48h] BYREF
  _DWORD v46[2]; // [esp+C8h] [ebp-40h] BYREF
  _DWORD v47[2]; // [esp+D0h] [ebp-38h] BYREF
  _DWORD v48[2]; // [esp+D8h] [ebp-30h] BYREF
  int v49; // [esp+E0h] [ebp-28h] BYREF
  _DWORD v50[2]; // [esp+E4h] [ebp-24h] BYREF
  _DWORD v51[2]; // [esp+ECh] [ebp-1Ch] BYREF
  int v52[4]; // [esp+F4h] [ebp-14h] BYREF
  int v53; // [esp+104h] [ebp-4h] BYREF

  v5 = Msg; /*0x61e709*/
  switch ( Msg )
  {
    case 15:
      v26 = hWnd; /*0x61e7d2*/
      v34 = 0; /*0x61e7dd*/
      v24 = 0; /*0x61e7e1*/
      HashTable::Get(&dword_A8ED54[52075], &v26, &v24); /*0x61e7e5*/
      v11 = v24; /*0x61e7ea*/
      if ( v24 )
      {
        v12 = (unsigned __int16 *)v24[10]; /*0x61e7f7*/
        if ( v12 ) /*0x61e7fc*/
        {
          String = (#72 *)v24[10]; /*0x61e7fe*/
        }
        else
        {
          String = (#72 *)&MEMORY[0x87F7E8][8147]; /*0x61e804*/
          v12 = (unsigned __int16 *)&MEMORY[0x87F7E8][8147]; /*0x61e80c*/
        }
        ScreenDialogToClient(hWnd, &Rect); /*0x61e81b*/
        v13 = (_DWORD *)v11[25]; /*0x61e828*/
        v14 = Rect_8 - Rect; /*0x61e82b*/
        v15 = Rect_4 + v13[7] / 2; /*0x61e843*/
        v32 = v15; /*0x61e84c*/
        Text::Layout(v13, v12, &v37, &v53, Rect_8 - Rect); /*0x61e850*/
        v52[2] = v14; /*0x61e856*/
        v52[1] = Rect_4; /*0x61e869*/
        v52[0] = Rect + 10; /*0x61e87e*/
        v52[3] = Rect_12 - Rect_4; /*0x61e885*/
        v16 = wcslen((const #72 *)v12); /*0x61e88c*/
        DrawTextRendererTextAligned(dword_A8ED54[51924], 0, v52, v12, v16, 0, 0, MEMORY[0x87F7E8][7882], 0); /*0x61e8a6*/
        v17 = dword_A8ED54[52112]; /*0x61e8ab*/
        v24 = (int *)dword_A8ED54[52113]; /*0x61e8c5*/
        v25 = dword_A8ED54[52112]; /*0x61e8c9*/
        if ( dword_A8ED54[52112] == -1 ) /*0x61e8cd*/
        {
          v36 = -1; /*0x61e8cf*/
        }
        else
        {
          v15 = v32; /*0x61e8e5*/
          v26 = BYTE2(v25) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]); /*0x61e8f9*/
          v36 = ((int)(unsigned __int8)v25 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x61e925*/
              | (BYTE1(dword_A8ED54[52112]) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
              | v26;
          v17 = v25; /*0x61e929*/
        }
        if ( dword_A8ED54[52113] == -1 ) /*0x61e930*/
        {
          v35 = -1; /*0x61e932*/
        }
        else
        {
          v15 = v32; /*0x61e950*/
          v35 = ((int)LOBYTE(dword_A8ED54[52113]) >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x61e97a*/
              | (BYTE1(dword_A8ED54[52113]) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
              | (BYTE2(v24) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
          v17 = v25; /*0x61e97e*/
        }
        v18 = 0; /*0x61e995*/
        v26 = ((((dword_A8ED54[52113] & 0xFF00) + (v25 & 0xFF00)) / 2) & 0xFF00) /*0x61e9e5*/
            + ((((dword_A8ED54[52113] & 0xFF0000) + (v25 & 0xFF0000)) / 2) & 0xFF0000)
            + (unsigned __int8)((LOBYTE(dword_A8ED54[52113]) + v17) / 2);
        v31 = &v35; /*0x61e9ed*/
        v24 = &v36; /*0x61e9f1*/
        while ( 1 )
        {
          v19 = *v31; /*0x61ea04*/
          if ( wcslen(String) ) /*0x61ea06*/
          {
            v20 = v18 + v15; /*0x61ea54*/
            v50[1] = v20; /*0x61ea57*/
            v38[0] = v18 + Rect; /*0x61ea64*/
            v50[0] = Rect + 8; /*0x61ea68*/
            v38[1] = v20; /*0x61ea7d*/
            (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 48))( /*0x61ea88*/
              MEMORY[0x87F7E8][7882],
              v38,
              v50,
              v19,
              a1);
            if ( v38[0] ) /*0x61ea91*/
              v35 = 12; /*0x61ea93*/
            v42[0] = Rect_12 - v18 - 1; /*0x61eaac*/
            v42[1] = v20; /*0x61eabe*/
            v43 = v35 + Rect_4 + v38[0]; /*0x61eac2*/
            v44[0] = v20; /*0x61eac6*/
            (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 48))( /*0x61ead1*/
              MEMORY[0x87F7E8][7882],
              &v43,
              v42,
              v19);
          }
          else
          {
            v20 = v18 + v15; /*0x61ea1c*/
            v40[0] = v18 + Rect; /*0x61ea22*/
            v44[0] = Rect_8 - v18 - 1; /*0x61ea26*/
            v44[1] = v20; /*0x61ea36*/
            v40[1] = v20; /*0x61ea3d*/
            (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 48))( /*0x61ea48*/
              MEMORY[0x87F7E8][7882],
              v40,
              v44,
              v19,
              a1);
          }
          v46[1] = v20 + 1; /*0x61eae4*/
          v48[1] = (char *)v31 - v18 - 1; /*0x61eaeb*/
          v48[0] = v18 + Rect_4; /*0x61eb01*/
          v46[0] = v18 + Rect_4; /*0x61eb08*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 48))( /*0x61eb19*/
            MEMORY[0x87F7E8][7882],
            v46,
            v48,
            v19);
          v21 = *(_DWORD *)v25; /*0x61eb2d*/
          v39 = Rect_12 - v18 - 1; /*0x61eb2f*/
          v40[0] = (char *)v31 - v18 - 1; /*0x61eb3b*/
          v41[0] = v18 + Rect_4; /*0x61eb48*/
          v41[1] = v40[0]; /*0x61eb51*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 48))( /*0x61eb5c*/
            MEMORY[0x87F7E8][7882],
            v41,
            &v39,
            v21);
          v47[1] = v20; /*0x61eb60*/
          v45[0] = Rect_12 - v18 - 1; /*0x61eb77*/
          v47[0] = v45[0]; /*0x61eb7e*/
          v45[1] = (char *)v31 - v18 - 2; /*0x61eb85*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 48))( /*0x61eba4*/
            MEMORY[0x87F7E8][7882],
            v47,
            v45,
            v21);
          v22 = Rect == -1
              ? -1
              : ((int)(unsigned __int8)Rect >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
              | (BYTE1(Rect) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
              | (BYTE2(Rect) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
          v50[0] = v20; /*0x61ec0a*/
          a1 = v22; /*0x61ec12*/
          v49 = Rect_12 - v18 - 1; /*0x61ec13*/
          (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 36))(MEMORY[0x87F7E8][7882], &v49); /*0x61ec24*/
          v51[0] = v18 + Rect; /*0x61ec3c*/
          v51[1] = Rect_12 - v18 - 1; /*0x61ec43*/
          (*(void (__thiscall **)(_DWORD, _DWORD *, int))(*(_DWORD *)MEMORY[0x87F7E8][7882] + 36))( /*0x61ec54*/
            MEMORY[0x87F7E8][7882],
            v51,
            v22);
          ++v18; /*0x61ec57*/
          ++v31; /*0x61ec67*/
          --v24; /*0x61ec6b*/
          if ( v18 >= 2 ) /*0x61ec6f*/
            break; /*0x61ec6f*/
          v15 = v32; /*0x61e9f7*/
        }
        ((void (__stdcall *)(int, _DWORD))ValidateRect)(hWnd, 0); /*0x61ec7f*/
      }
      return 0; /*0x61ec88*/
    case 20:
      return 1; /*0x61e7be*/
    case 133:
      return 0; /*0x61e727*/
  }
  v6 = 0; /*0x61e732*/
  if ( dword_A8ED54[52094] /*0x61e75f*/
    && (v7 = *(_DWORD **)(dword_A8ED54[52093]
                        + 4
                        * (((int (__thiscall *)(int *))dword_A8ED54[52099])(&hWnd)
                         & ((1 << SLOBYTE(dword_A8ED54[52096])) - 1)))) != 0 )
  {
    v8 = hWnd; /*0x61e761*/
    while ( *v7 != hWnd ) /*0x61e76a*/
    {
      v7 = (_DWORD *)v7[2]; /*0x61e76c*/
      if ( !v7 ) /*0x61e771*/
        return ((int (__stdcall *)(int, int, int, int, int))CallWindowProcA)(v6, v8, v5, wParam, lParam); /*0x61e771*/
    }
    v9 = v7 + 1; /*0x61e779*/
    if ( v9 ) /*0x61e77e*/
      v6 = *v9; /*0x61e780*/
  }
  else
  {
    v8 = hWnd; /*0x61e784*/
  }
  return ((int (__stdcall *)(int, int, int, int, int))CallWindowProcA)(v6, v8, v5, wParam, lParam); /*0x61e7a4*/
}


// ==== 0x0061ECA0  RenderDialogSurface  this=-  sig=csp ====
int __stdcall RenderDialogSurface(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  UINT v4; // edi
  LRESULT (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // esi
  int v6; // eax
  HWND v7; // ecx
  LRESULT (__stdcall **v8)(HWND, UINT, WPARAM, LPARAM); // eax
  int result; // eax
  int v10; // edi
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // ecx
  LRESULT v15; // eax
  int v16; // eax
  struct tagRECT Rect; // [esp+28h] [ebp-B4h] BYREF
  HWND v18; // [esp+38h] [ebp-A4h] BYREF
  int v19[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v20; // [esp+44h] [ebp-98h]
  int v21; // [esp+48h] [ebp-94h]
  _DWORD v22[4]; // [esp+4Ch] [ebp-90h] BYREF
  wchar_t String[64]; // [esp+5Ch] [ebp-80h] BYREF

  v4 = Msg; /*0x61eca8*/
  switch ( Msg ) /*0x61ecb4*/
  {
    case 0xFu: /*0x61ecb4*/
      ScreenDialogToClient(hWnd, &Rect); /*0x61ed69*/
      v19[0] = Rect.left; /*0x61ed7a*/
      v20 = Rect.right - Rect.left + 1; /*0x61ed88*/
      v22[2] = v20; /*0x61ed8c*/
      v21 = Rect.bottom - Rect.top + 1; /*0x61ed95*/
      v22[3] = v21; /*0x61ed99*/
      v19[1] = Rect.top; /*0x61eda4*/
      v22[0] = 0; /*0x61edaa*/
      v22[1] = 0; /*0x61edb2*/
      v18 = hWnd; /*0x61edba*/
      if ( MEMORY[0xAC1B04] ) /*0x61edbe*/
      {
        result = *((_DWORD *)MEMORY[0xAC1B00] + (MEMORY[0xAC1B18](&v18) & ((1 << MEMORY[0xAC1B0C]) - 1))); /*0x61ede3*/
        if ( result ) /*0x61ede8*/
        {
          while ( *(HWND *)result != v18 ) /*0x61edf4*/
          {
            result = *(_DWORD *)(result + 516); /*0x61edf6*/
            if ( !result ) /*0x61edfe*/
              return result; /*0x61edfe*/
          }
          v10 = result + 4; /*0x61ee13*/
          if ( result != -4 ) /*0x61ee18*/
          {
            if ( !*(_DWORD *)(result + 20) ) /*0x61ee1e*/
            {
              v11 = __2_YAPAXI_Z(0x20u); /*0x61ee2c*/
              if ( v11 ) /*0x61ee33*/
              {
                v12 = v21; /*0x61ee35*/
                v13 = v20; /*0x61ee39*/
                v11[2] = v21; /*0x61ee3d*/
                v11[1] = v13; /*0x61ee45*/
                v11[3] = 0; /*0x61ee4e*/
                *v11 = &XSurface_Vtable; /*0x61ee55*/
                v11[4] = 2; /*0x61ee5b*/
                Buffer::Init(v11 + 5, 0, 2 * v13 * v12); /*0x61ee62*/
                *v11 = &BSurface_Vtable; /*0x61ee67*/
                v14 = v11; /*0x61ee6d*/
              }
              else
              {
                v14 = 0; /*0x61ee71*/
              }
              *(_DWORD *)(v10 + 16) = v14; /*0x61ee73*/
              ++MEMORY[0xAC48B4]; /*0x61ee7e*/
              (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int *, _DWORD, int))(*v14 + 8))( /*0x61ee97*/
                v14,
                v22,
                MEMORY[0x887310],
                v19,
                0,
                1);
            }
            v15 = SendMessageA(hWnd, 0x402u, 0, 0); /*0x61eeab*/
            FormatHotkeyDisplayString(v15, String); /*0x61eeb7*/
            v16 = *(_DWORD *)(v10 + 16); /*0x61eebc*/
            if ( v16 ) /*0x61eec1*/
              (*(void (__thiscall **)(int, int *, int, _DWORD *, _DWORD, int))(*(_DWORD *)MEMORY[0x887310] + 8))( /*0x61eeda*/
                MEMORY[0x887310],
                v19,
                v16,
                v22,
                0,
                1);
            DrawDialogGradient((int *)MEMORY[0x887310], v19, 2, -1); /*0x61eeeb*/
            if ( wcslen(String) ) /*0x61eef5*/
            {
              Rect.left += 4; /*0x61ef16*/
              Rect.right -= 4; /*0x61ef22*/
              Rect.top += 4; /*0x61ef2c*/
              Rect.bottom -= 4; /*0x61ef30*/
              Surface_Render((int)&Rect, *(_DWORD *)(v10 + 100), MEMORY[0xAC18A4], 36); /*0x61ef4a*/
            }
            ValidateRect(hWnd, 0); /*0x61ef59*/
          }
        }
      }
      return 0; /*0x61ef60*/
    case 0x14u: /*0x61ecb4*/
      return 1; /*0x61ed5b*/
    case 0x85u: /*0x61ecb4*/
      return 0; /*0x61ecc6*/
  }
  v5 = 0; /*0x61ecd1*/
  if ( MEMORY[0xAC1B4C] /*0x61ecfe*/
    && (v6 = *((_DWORD *)MEMORY[0xAC1B48] + (MEMORY[0xAC1B60](&hWnd) & ((1 << MEMORY[0xAC1B54]) - 1)))) != 0 )
  {
    v7 = hWnd; /*0x61ed00*/
    while ( *(HWND *)v6 != hWnd ) /*0x61ed09*/
    {
      v6 = *(_DWORD *)(v6 + 8); /*0x61ed0b*/
      if ( !v6 ) /*0x61ed10*/
        return CallWindowProcA(v5, v7, v4, wParam, lParam); /*0x61ed10*/
    }
    v8 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v6 + 4); /*0x61ed18*/
    if ( v8 ) /*0x61ed1d*/
      v5 = *v8; /*0x61ed1f*/
  }
  else
  {
    v7 = hWnd; /*0x61ed23*/
  }
  return CallWindowProcA(v5, v7, v4, wParam, lParam); /*0x61ed43*/
}


// ==== 0x0061EF70  FormatHotkeyDisplayString  this=-  sig=csp ====
int __fastcall FormatHotkeyDisplayString(__int16 a1, #72 *a2)
{
  int result; // eax
  __int16 v3; // kr1C_2
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char String[32]; // [esp+Ch] [ebp-214h] BYREF
  char Format[500]; // [esp+2Ch] [ebp-1F4h] BYREF

  result = HIBYTE(a1); /*0x61ef7c*/
  v3 = a1; /*0x61ef84*/
  Format[0] = 0; /*0x61ef88*/
  *(_WORD *)a2 = 0; /*0x61ef8d*/
  if ( (a1 & 0x800) == 0 ) /*0x61ef92*/
  {
    if ( (a1 & 0x400) != 0 ) /*0x61efaa*/
    {
      v4 = ((int (__stdcall *)(int, _DWORD))MapVirtualKeyA)(18, 0); /*0x61efb0*/
      ((void (__stdcall *)(int, char *, int))GetKeyNameTextA)((v4 << 16) | 0x2000001, String, 32); /*0x61efc2*/
      strcat(Format, String); /*0x61efe8*/
      strcat(Format, asc_835A34); /*0x61f014*/
      LOBYTE(result) = HIBYTE(v3); /*0x61f016*/
      LOBYTE(a1) = v3; /*0x61f021*/
    }
    if ( (result & 2) != 0 ) /*0x61f027*/
    {
      v5 = ((int (__stdcall *)(int, _DWORD))MapVirtualKeyA)(17, 0); /*0x61f02d*/
      ((void (__stdcall *)(int, char *, int))GetKeyNameTextA)((v5 << 16) | 0x2000001, String, 32); /*0x61f03f*/
      strcat(Format, String); /*0x61f065*/
      strcat(Format, asc_835A34); /*0x61f091*/
      LOBYTE(result) = HIBYTE(v3); /*0x61f093*/
      LOBYTE(a1) = v3; /*0x61f09e*/
    }
    if ( (result & 1) != 0 ) /*0x61f0a4*/
    {
      v6 = ((int (__stdcall *)(int, _DWORD))MapVirtualKeyA)(16, 0); /*0x61f0aa*/
      ((void (__stdcall *)(int, char *, int))GetKeyNameTextA)((v6 << 16) | 0x2000001, String, 32); /*0x61f0bc*/
      strcat(Format, String); /*0x61f0e2*/
      strcat(Format, asc_835A34); /*0x61f10e*/
      LOBYTE(a1) = v3; /*0x61f117*/
    }
    v7 = ((int (__stdcall *)(_DWORD, _DWORD))MapVirtualKeyA)((unsigned __int8)a1, 0); /*0x61f124*/
    ((void (__stdcall *)(int, char *, int))GetKeyNameTextA)((v7 << 16) | 0x2000001, String, 32); /*0x61f136*/
    strcat(Format, String); /*0x61f15c*/
    return swprintf(a2, g_Str_Trace__hs); /*0x61f174*/
  }
  return result; /*0x61f180*/
}


// ==== 0x0061F210  InitDialogCountryIcons  this=-  sig=ida-proto ====
char __fastcall Dialog_InitCountryIcons(int a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // edx
  int v47; // edx
  int v48; // edx
  int v49; // edx
  int v50; // edx
  int v51; // edx
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // edx
  int v60; // edx
  int v61; // edx
  int v62; // edx
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  int v67; // edx
  int v68; // edx
  int v69; // edx
  int v70; // edx
  int v71; // edx
  int v72; // edx
  int v73; // edx
  int v74; // edx
  int v75; // edx
  int v76; // edx
  int v77; // edx
  int v78; // edx
  int v79; // edx
  int v80; // edx
  int v81; // edx
  int v82; // edx
  int v83; // edx
  int v84; // edx
  int v85; // edx
  int v86; // edx
  int v87; // edx
  int v88; // edx
  int v89; // edx
  int v90; // edx
  int v91; // edx
  int v92; // edx
  int v93; // edx
  int v94; // edx
  int v95; // edx
  int v96; // edx
  int v97; // edx
  int v98; // edx
  int v99; // edx
  int v100; // edx
  int v101; // edx
  int v102; // edx
  int v103; // edx
  int v104; // edx
  int v105; // edx
  int v106; // edx
  int v107; // edx
  int v108; // edx
  int v109; // edx
  int v110; // edx
  int v111; // edx
  int v112; // edx
  int v113; // edx
  int v114; // edx
  int v115; // edx
  int v116; // edx
  int v117; // edx
  int v118; // edx
  int v119; // edx
  int v120; // edx
  int v121; // edx
  int v122; // edx
  int v123; // edx
  int v124; // edx
  int v125; // edx
  int v126; // edx
  int v127; // edx
  int v128; // edx
  int v129; // edx
  int v130; // edx
  int v131; // edx
  int v132; // edx
  int v133; // edx
  int v134; // edx
  int v135; // edx
  int v136; // edx
  int v137; // edx
  int v138; // edx
  int v139; // edx
  int v140; // edx
  int v141; // edx
  int v142; // edx
  int v143; // edx
  int v144; // edx
  int v145; // edx
  int v146; // edx
  int v147; // edx
  int v148; // edx
  int v149; // edx
  int v150; // edx
  int v151; // edx
  int v152; // edx
  int v153; // edx
  int v154; // edx
  int v155; // edx
  int v156; // edx
  int v157; // edx
  int v158; // edx
  int v159; // edx
  int v160; // edx
  int v161; // edx
  int v162; // edx
  int v163; // edx
  int v164; // edx
  int v165; // edx
  int v166; // edx
  int v167; // edx
  int v168; // edx
  int v169; // edx
  int v170; // edx
  int v171; // edx
  int v172; // edx
  int v173; // edx
  int v174; // edx
  int v175; // edx
  int v176; // edx
  int v177; // edx
  int v178; // edx
  int v179; // edx
  int v180; // edx
  int v181; // edx
  int v182; // edx
  int v183; // edx
  int v184; // edx
  int v185; // edx
  int v186; // edx
  int v187; // edx
  int v188; // edx
  int v189; // edx
  int v190; // edx
  int v191; // edx

  LoadPaletteFromFile((int)MEMORY[0xAC4848], a2, MEMORY[0x833654], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v2, MEMORY[0x8363C4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v3, MEMORY[0x8363B8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v4, MEMORY[0x8363AC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v5, MEMORY[0x8363A0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v6, MEMORY[0x836394], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v7, MEMORY[0x836388], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v8, MEMORY[0x83637C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v9, MEMORY[0x836370], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v10, MEMORY[0x836364], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v11, MEMORY[0x836358], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v12, MEMORY[0x83634C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v13, MEMORY[0x836340], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v14, MEMORY[0x836334], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v15, MEMORY[0x836328], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v16, MEMORY[0x836318], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v17, MEMORY[0x836308], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v18, MEMORY[0x8362F8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v19, MEMORY[0x8362E8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v20, MEMORY[0x8362DC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v21, MEMORY[0x8362CC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v22, MEMORY[0x835A00], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v23, MEMORY[0x8359C8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v24, MEMORY[0x8359E4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v25, MEMORY[0x8359AC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v26, MEMORY[0x8359D4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v27, MEMORY[0x8359F0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v28, MEMORY[0x8359B8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v29, MEMORY[0x8362C0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v30, MEMORY[0x8362B4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v31, MEMORY[0x8362A8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v32, MEMORY[0x83629C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v33, MEMORY[0x836290], 1, 0);
  UI_Init_6BA120(MEMORY[0x836284]);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v34, MEMORY[0x836278], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v35, MEMORY[0x83626C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v36, MEMORY[0x83625C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v37, MEMORY[0x83624C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v38, MEMORY[0x83623C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v39, MEMORY[0x83622C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v40, MEMORY[0x836220], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v41, MEMORY[0x836214], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v42, MEMORY[0x836208], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v43, MEMORY[0x8361FC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v44, MEMORY[0x8361F0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v45, MEMORY[0x8361E4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v46, MEMORY[0x8361D8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v47, MEMORY[0x8361CC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v48, MEMORY[0x8361C0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v49, MEMORY[0x8361B4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v50, MEMORY[0x8361A8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v51, MEMORY[0x83619C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v52, MEMORY[0x836190], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v53, MEMORY[0x836184], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v54, MEMORY[0x836174], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v55, MEMORY[0x836164], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v56, MEMORY[0x836158], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v57, MEMORY[0x83614C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v58, MEMORY[0x836140], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v59, MEMORY[0x836134], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v60, MEMORY[0x835944], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v61, MEMORY[0x836128], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v62, MEMORY[0x83611C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v63, MEMORY[0x836110], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v64, MEMORY[0x836104], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v65, MEMORY[0x8360F8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v66, MEMORY[0x835908], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v67, MEMORY[0x8358FC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v68, MEMORY[0x835920], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v69, MEMORY[0x8358E4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v70, MEMORY[0x8358F0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v71, MEMORY[0x835914], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v72, MEMORY[0x83592C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v73, MEMORY[0x835938], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v74, MEMORY[0x8360EC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v75, MEMORY[0x8360DC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v76, MEMORY[0x8360D0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v77, MEMORY[0x8360C4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v78, MEMORY[0x8360B4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v79, MEMORY[0x8360A8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v80, g_Str_File_wolacpt_pcx, 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v81, g_Str_File_wolhost_pcx, 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v82, MEMORY[0x83609C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v83, MEMORY[0x831DDC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v84, MEMORY[0x831DD0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v85, MEMORY[0x83608C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v86, MEMORY[0x83607C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v87, MEMORY[0x836070], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v88, MEMORY[0x836064], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v89, MEMORY[0x836054], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v90, MEMORY[0x836044], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v91, MEMORY[0x836034], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v92, MEMORY[0x836028], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v93, MEMORY[0x83601C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v94, MEMORY[0x836010], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v95, MEMORY[0x836000], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v96, MEMORY[0x835FF4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v97, MEMORY[0x835FE4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v98, MEMORY[0x835FD4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v99, MEMORY[0x835FC8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v100, MEMORY[0x835FBC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v101, MEMORY[0x835FB0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v102, MEMORY[0x835FA4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v103, MEMORY[0x835F98], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v104, MEMORY[0x835F8C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v105, MEMORY[0x835F80], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v106, MEMORY[0x835F74], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v107, MEMORY[0x835F68], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v108, MEMORY[0x835F5C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v109, MEMORY[0x835F4C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v110, MEMORY[0x835F3C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v111, MEMORY[0x835F2C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v112, MEMORY[0x835F1C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v113, MEMORY[0x835F0C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v114, MEMORY[0x835EFC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v115, MEMORY[0x835EEC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v116, MEMORY[0x835EDC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v117, MEMORY[0x835A1C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v118, MEMORY[0x835A28], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v119, MEMORY[0x835A10], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v120, MEMORY[0x835ECC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v121, MEMORY[0x835EBC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v122, MEMORY[0x835EAC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v123, MEMORY[0x835E9C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v124, MEMORY[0x835E8C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v125, MEMORY[0x835E7C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v126, MEMORY[0x835E6C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v127, MEMORY[0x835E5C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v128, MEMORY[0x835E50], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v129, MEMORY[0x835998], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v130, MEMORY[0x835E44], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v131, MEMORY[0x835974], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v132, MEMORY[0x835980], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v133, MEMORY[0x83598C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v134, MEMORY[0x835E34], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v135, MEMORY[0x835E24], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v136, MEMORY[0x835E14], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v137, MEMORY[0x835E04], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v138, MEMORY[0x835DF4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v139, MEMORY[0x835DE4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v140, MEMORY[0x835DD4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v141, MEMORY[0x835DC4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v142, MEMORY[0x835DB4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v143, MEMORY[0x835DA4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v144, MEMORY[0x835D94], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v145, MEMORY[0x835D84], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v146, MEMORY[0x835D74], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v147, MEMORY[0x835D64], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v148, MEMORY[0x835D54], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v149, MEMORY[0x835D44], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v150, MEMORY[0x835D34], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v151, MEMORY[0x835D24], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v152, MEMORY[0x835D14], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v153, MEMORY[0x835D04], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v154, MEMORY[0x835CF4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v155, MEMORY[0x835CE4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v156, MEMORY[0x835CD4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v157, MEMORY[0x835CC4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v158, MEMORY[0x835CB4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v159, MEMORY[0x835CA8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v160, MEMORY[0x835C9C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v161, MEMORY[0x835C90], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v162, MEMORY[0x835C7C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v163, MEMORY[0x835C68], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v164, MEMORY[0x835C54], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v165, MEMORY[0x835C40], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v166, MEMORY[0x835C2C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v167, MEMORY[0x835C18], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v168, MEMORY[0x835C04], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v169, MEMORY[0x835BF0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v170, MEMORY[0x835BDC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v171, MEMORY[0x835BC8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v172, MEMORY[0x835BB4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v173, MEMORY[0x835BA0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v174, MEMORY[0x835B8C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v175, MEMORY[0x835B78], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v176, MEMORY[0x835B64], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v177, MEMORY[0x835B50], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v178, MEMORY[0x835B3C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v179, MEMORY[0x835B28], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v180, MEMORY[0x835B14], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v181, MEMORY[0x835B00], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v182, MEMORY[0x835AEC], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v183, MEMORY[0x835AD8], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v184, MEMORY[0x835AC4], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v185, MEMORY[0x835AB0], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v186, MEMORY[0x835A9C], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v187, MEMORY[0x835A88], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v188, MEMORY[0x835A74], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v189, MEMORY[0x835A60], 2, 0);
  LoadPaletteFromFile((int)MEMORY[0xAC4848], v190, MEMORY[0x835A4C], 2, 0);
  return LoadPaletteFromFile((int)MEMORY[0xAC4848], v191, MEMORY[0x835A38], 2, 0);
}

