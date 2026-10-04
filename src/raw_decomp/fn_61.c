// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00610360  Dialog::DestroyDialogSystem  this=Dialog  sig=csp ====
int __thiscall Dialog::DestroyDialogSystem(Dialog *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *i; // eax
  void *v5; // esi
  int v6; // esi
  HWND *v7; // ecx
  HWND v8; // edi
  double v9; // st7
  HWND *v10; // eax
  void *WindowLongA; // eax
  HWND hWnd; // [esp+Ch] [ebp-20Ch] BYREF
  __int64 v14; // [esp+10h] [ebp-208h] BYREF
  _BYTE v15[512]; // [esp+18h] [ebp-200h] BYREF

  EnumChildWindows((HWND)this, DestroyDialogChildWindow, 0); /*0x610374*/
  hWnd = (HWND)this; /*0x610389*/
  DynamicArray::Resize((DynamicArray *)&g_DialogPool.__pad_208[128], (int *)&hWnd, &v14); /*0x61038d*/
  memset(v15, 0, sizeof(v15)); /*0x6103a3*/
  *(_DWORD *)&v15[104] = 11; /*0x6103a7*/
  *(_DWORD *)&v15[100] = g_FogOfWarState; /*0x6103b2*/
  v2 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x6103b9*/
  if ( v2 ) /*0x6103c3*/
    v3 = unknown_libname_74(v2); /*0x6103c7*/
  else
    v3 = 0; /*0x6103ce*/
  *(_DWORD *)&v15[60] = v3; /*0x6103d0*/
  *(_DWORD *)&v15[64] = 0; /*0x6103e3*/
  *(_DWORD *)&v15[92] = 0; /*0x6103e7*/
  *(_DWORD *)&v15[144] = -1; /*0x6103eb*/
  Dialog::BindGadgetData((Dialog *)&g_DialogPool.__pad_208[56], (int *)&hWnd, v15); /*0x6103f6*/
  if ( *(_DWORD *)&v15[40] ) /*0x610401*/
  {
    __3_YAXPAX_Z(*(void **)&v15[40]); /*0x610404*/
    *(_DWORD *)&v15[40] = 0; /*0x61040c*/
  }
  for ( i = *(_DWORD **)&v15[52]; *(_DWORD *)&v15[52]; i = *(_DWORD **)&v15[52] ) /*0x610416*/
    LinkedList::Remove((LinkedList *)v15, i); /*0x61041d*/
  v5 = *(void **)&v15[60]; /*0x61042a*/
  if ( *(_DWORD *)&v15[60] ) /*0x610430*/
  {
    DeleteAndZero::Alt(*(DeleteAndZero **)&v15[60]); /*0x610434*/
    __3_YAXPAX_Z(v5); /*0x61043a*/
  }
  if ( *(_DWORD *)&g_DialogPool.__pad_0[4] ) /*0x610449*/
  {
    v14 = (unsigned int)(*(_DWORD *)&g_DialogPool.__pad_0[4] - 1); /*0x610456*/
    *(float *)&v14 = (double)v14 / (double)g_DialogPool.Dialog_field_0x8[0]; /*0x610472*/
    v6 = (*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_10[8])(&hWnd) /*0x61048a*/
       & ((1 << SLOBYTE(g_DialogPool.Dialog_field_0xC)) - 1);
    v7 = *(HWND **)(*(_DWORD *)g_DialogPool.__pad_0 + 4 * v6); /*0x610491*/
    if ( v7 ) /*0x610496*/
    {
      if ( *v7 == hWnd ) /*0x6104a4*/
      {
        v8 = v7[2]; /*0x6104a6*/
        __3_YAXPAX_Z(*(void **)(*(_DWORD *)g_DialogPool.__pad_0 + 4 * v6)); /*0x6104aa*/
        v9 = *(float *)&v14; /*0x6104b8*/
        *(_DWORD *)(*(_DWORD *)g_DialogPool.__pad_0 + 4 * v6) = v8; /*0x6104bc*/
        --*(_DWORD *)&g_DialogPool.__pad_0[4]; /*0x6104cb*/
        if ( v9 > *(double *)&g_DialogPool.__pad_10[16] ) /*0x6104d5*/
          goto LABEL_22; /*0x6104d5*/
        goto LABEL_21; /*0x6104d5*/
      }
      v10 = (HWND *)v7[2]; /*0x6104d9*/
      if ( v10 ) /*0x6104de*/
      {
        while ( *v10 != hWnd ) /*0x6104e2*/
        {
          v7 = v10; /*0x6104e4*/
          v10 = (HWND *)v10[2]; /*0x6104e6*/
          if ( !v10 ) /*0x6104eb*/
            goto LABEL_20; /*0x6104eb*/
        }
        v7[2] = v10[2]; /*0x6104f3*/
        --*(_DWORD *)&g_DialogPool.__pad_0[4]; /*0x6104fd*/
        __3_YAXPAX_Z(v10); /*0x610503*/
      }
LABEL_20:
      if ( *(float *)&v14 <= *(double *)&g_DialogPool.__pad_10[16] ) /*0x61051a*/
LABEL_21:
        HashTable::Shrink2((HashTable *)&g_DialogPool); /*0x61051c*/
    }
  }
LABEL_22:
  WindowLongA = (void *)GetWindowLongA(hWnd, -21); /*0x610526*/
  if ( WindowLongA ) /*0x610535*/
    __3_YAXPAX_Z(WindowLongA); /*0x610538*/
  SetWindowLongA(hWnd, -21, 0); /*0x610548*/
  Object::RemoveObjectArray((Object *)hWnd); /*0x610552*/
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

  DynamicArray::Resize(&dword_AC1B48, (int *)&hWnd, &v14); /*0x61058a*/
  memset(v15, 0, sizeof(v15)); /*0x6105a0*/
  v15[26] = (void *)11; /*0x6105a4*/
  v15[25] = (void *)g_FogOfWarState; /*0x6105ac*/
  v2 = __2_YAPAXI_Z(4u); /*0x6105b0*/
  if ( v2 ) /*0x6105bc*/
    v3 = (void *)unknown_libname_74(v2); /*0x6105c0*/
  else
    v3 = 0; /*0x6105c7*/
  v15[15] = v3; /*0x6105c9*/
  v15[16] = 0; /*0x6105df*/
  v15[23] = 0; /*0x6105e3*/
  v15[36] = (void *)-1; /*0x6105e7*/
  Dialog::BindGadgetData(&dword_AC1B00, (int *)&hWnd, (char *)v15); /*0x6105f2*/
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
  if ( unk_AC18C4 ) /*0x610666*/
  {
    v14 = (unsigned int)(unk_AC18C4 - 1); /*0x610671*/
    *(float *)&v14 = (double)v14 / (double)dword_AC18C8; /*0x610691*/
    v7 = dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1); /*0x6106af*/
    v8 = (HWND *)*((_DWORD *)g_DialogPool + v7); /*0x6106b1*/
    if ( v8 ) /*0x6106b6*/
    {
      if ( *v8 == hWnd ) /*0x6106c7*/
      {
        v9 = v8[2]; /*0x6106c9*/
        __3_YAXPAX_Z(*((void **)g_DialogPool + v7)); /*0x6106cd*/
        v10 = *(float *)&v14; /*0x6106db*/
        *((_DWORD *)g_DialogPool + v7) = v9; /*0x6106df*/
        --unk_AC18C4; /*0x6106ee*/
        if ( v10 > dbl_AC18E0 ) /*0x6106f8*/
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
        --unk_AC18C4; /*0x610720*/
        __3_YAXPAX_Z(v11); /*0x610726*/
      }
LABEL_29:
      if ( *(float *)&v14 <= dbl_AC18E0 ) /*0x61073d*/
LABEL_30:
        HashTable::Shrink2(&g_DialogPool); /*0x61073f*/
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
  dword_AC1CB8 = 0u; /*0x6107a2*/
  dword_AC1CC8 = 0; /*0x6107b6*/
  word_AC1CCC = 0; /*0x6107bb*/
  dword_AC1DCC = 0; /*0x6107c1*/
  dword_AC1DD0 = 0; /*0x6107c6*/
  dword_AC1DD4 = 0; /*0x6107cb*/
  return 0; /*0x6107d0*/
}



// ==== 0x006107E0  ObjectClass::method_6107E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6107E0(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6107e4*/
  this->? = 0; /*0x6107e6*/
  this->? = 0; /*0x6107e9*/
  this->? = 0; /*0x6107ec*/
  this->? = 0; /*0x6107ef*/
  LOWORD(this->?) = 0; /*0x6107f2*/
  this->u8_45 = 0; /*0x6107f6*/
  this->u32_46 = 0; /*0x6107fc*/
  this->u32_47 = 0; /*0x610802*/
  return &this->AbstractClass; /*0x610808*/
}



// ==== 0x00610810  sub_610810  this=-  sig=ida-proto ====
char __fastcall sub_610810(int a1, const wchar_t *a2, int a3)
{
  wchar_t *StringCSF; // eax
  int v6; // ecx
  const wchar_t *v8; // [esp+0h] [ebp-30h]
  _DWORD v9[2]; // [esp+10h] [ebp-20h] BYREF
  __int64 v10; // [esp+18h] [ebp-18h]
  __int128 v11; // [esp+20h] [ebp-10h] BYREF

  if ( dword_AC1DCC ) /*0x610829*/
  {
    if ( dword_AC1DD0 != 1 ) /*0x610835*/
    {
      if ( !dword_AC1CC8 ) /*0x61083f*/
      {
LABEL_7:
        dword_AC1CC8 = 0; /*0x6108a9*/
        dword_AC1DCC = 0; /*0x6108af*/
        dword_AC1DD0 = 0; /*0x6108b5*/
        goto LABEL_8; /*0x6108b5*/
      }
      v11 = dword_AC1CB8; /*0x61085b*/
      v9[0] = 0; /*0x610879*/
      v9[1] = 0; /*0x61087d*/
      v10 = *((_QWORD *)&dword_AC1CB8 + 1); /*0x610881*/
      (*(void (__thiscall **)(int, __int128 *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x61088c*/
        g_DSurface_Primary,
        &v11,
        dword_AC1CC8,
        v9,
        0,
        1);
      dword_AC1DD0 = 1; /*0x610894*/
    }
    if ( dword_AC1CC8 ) /*0x6108a2*/
      (**(void (__thiscall ***)(int, int))dword_AC1CC8)(dword_AC1CC8, 1); /*0x6108a7*/
    goto LABEL_7; /*0x6108a7*/
  }
LABEL_8:
  dword_AC48D8 = time(0); /*0x6108bb*/
  StringCSF = GetStringCSF(aGuiTooltip, 0, g_Str_File_ownrdraw_cpp, 7457); /*0x6108da*/
  swprintf(word_AC1CCC, (const size_t)StringCSF, v8); /*0x6108e5*/
  if ( a2 ) /*0x6108ef*/
    wcscpy(word_AC1CCC, a2); /*0x6108f7*/
  *(_QWORD *)&dword_AC1CB8 = *(_QWORD *)a1; /*0x610901*/
  DWORD2(dword_AC1CB8) = *(_DWORD *)(a1 + 8); /*0x610917*/
  v6 = *(_DWORD *)(a1 + 12); /*0x61091c*/
  dword_AC1DCC = 1; /*0x61091f*/
  HIDWORD(dword_AC1CB8) = v6; /*0x610925*/
  dword_AC1DD4 = a3; /*0x61092d*/
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

  if ( !dword_AC1DCC ) /*0x61095d*/
    return 0; /*0x61095f*/
  if ( a1 ) /*0x61096a*/
  {
    if ( dword_AC1CC8 ) /*0x610978*/
      (**(void (__thiscall ***)(int, int))dword_AC1CC8)(dword_AC1CC8, 1); /*0x61097e*/
    dword_AC1CC8 = 0; /*0x610982*/
    v2 = __2_YAPAXI_Z(0x20u); /*0x61098d*/
    if ( v2 ) /*0x610994*/
    {
      v4 = HIDWORD(dword_AC1CB8); /*0x61099b*/
      v3 = DWORD2(dword_AC1CB8); /*0x61099b*/
      v2[1] = DWORD2(dword_AC1CB8); /*0x6109a1*/
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
    dword_AC1CC8 = v5; /*0x6109ef*/
    v9[0] = 0; /*0x6109f5*/
    v9[1] = 0; /*0x6109f9*/
    v10 = *((_QWORD *)&dword_AC1CB8 + 1); /*0x6109fd*/
    (*(void (__thiscall **)(int, _DWORD *, int, __int128 *, _DWORD, int))(*(_DWORD *)v5 + 8))( /*0x610a08*/
      v5,
      v9,
      g_DSurface_Primary,
      &dword_AC1CB8,
      0,
      1);
  }
  v8 = dword_AC1CB8; /*0x610a25*/
  dword_AC1DD0 = 0; /*0x610a32*/
  if ( dword_AC48B0 == -1 ) /*0x610a40*/
    v6 = -1; /*0x610a42*/
  else
    v6 = ((int)(unsigned __int8)dword_AC48B0 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x610a8d*/
       | (BYTE1(dword_AC48B0) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(dword_AC48B0) >> g_BitMask_Red << g_BitShift_Blue);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Primary + 92))(g_DSurface_Primary, 0, 0); /*0x610a9d*/
  (*(void (__thiscall **)(int, __int128 *, int))(*(_DWORD *)g_DSurface_Primary + 20))(g_DSurface_Primary, &v8, v6); /*0x610aae*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_DSurface_Primary + 96))(g_DSurface_Primary); /*0x610ab9*/
  Team_Find((int *)&v8, g_DSurface_Primary, 8, 4); /*0x610aca*/
  v7 = wcslen(word_AC1CCC); /*0x610ae0*/
  DrawTextRendererTextAligned(dword_AC18A4, 0, (int *)&v8, word_AC1CCC, v7, 1, 1, g_DSurface_Primary, 0); /*0x610afb*/
  HIDWORD(v8) -= 2; /*0x610b1e*/
  LODWORD(v8) = v8 + 1; /*0x610b2a*/
  ++DWORD1(v8); /*0x610b2e*/
  DWORD2(v8) -= 2; /*0x610b32*/
  DrawDialogGradient((int *)g_DSurface_Primary, (int *)&v8, 1, -1); /*0x610b36*/
  return 1; /*0x610961*/
}



// ==== 0x00610B50  ObjectClass::method_610B50  this=ObjectClass  sig=csp ====
char sub_610B50(ObjectClass *this)
{
  _DWORD v2[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v3; // [esp+Ch] [ebp-18h]
  _QWORD v4[2]; // [esp+14h] [ebp-10h] BYREF

  if ( !*(_DWORD *)&g_DialogPool.__pad_208[772] ) /*0x610b5d*/
    return 0; /*0x610b5f*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[776] == 1 ) /*0x610b6d*/
    return 0; /*0x610b6f*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[512] ) /*0x610b7e*/
    return 0; /*0x610b80*/
  v2[0] = 0; /*0x610b9e*/
  v2[1] = 0; /*0x610ba2*/
  v4[0] = *(_QWORD *)&g_DialogPool.__pad_208[496]; /*0x610bab*/
  v4[1] = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610bc4*/
  v3 = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610bc8*/
  (*((void (__thiscall **)(DSurface *, _QWORD *, _DWORD, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x610bd3*/
   + 2))(
    g_DSurface_Primary,
    v4,
    *(_DWORD *)&g_DialogPool.__pad_208[512],
    v2,
    0,
    1);
  *(_DWORD *)&g_DialogPool.__pad_208[776] = 1; /*0x610bd6*/
  return 1; /*0x610b61*/
}



// ==== 0x00610BF0  ObjectClass::method_610BF0  this=ObjectClass  sig=csp ====
char sub_610BF0(ObjectClass *this)
{
  _DWORD v2[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v3; // [esp+Ch] [ebp-18h]
  _QWORD v4[2]; // [esp+14h] [ebp-10h] BYREF

  if ( !*(_DWORD *)&g_DialogPool.__pad_208[772] ) /*0x610bfd*/
    return 0; /*0x610c05*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[776] == 1 ) /*0x610c0d*/
    goto LABEL_6; /*0x610c0d*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[512] ) /*0x610c17*/
  {
    v4[0] = *(_QWORD *)&g_DialogPool.__pad_208[496]; /*0x610c35*/
    v4[1] = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610c4f*/
    v2[0] = 0; /*0x610c53*/
    v2[1] = 0; /*0x610c57*/
    v3 = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610c5b*/
    (*((void (__thiscall **)(DSurface *, _QWORD *, _DWORD, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x610c66*/
     + 2))(
      g_DSurface_Primary,
      v4,
      *(_DWORD *)&g_DialogPool.__pad_208[512],
      v2,
      0,
      1);
    *(_DWORD *)&g_DialogPool.__pad_208[776] = 1; /*0x610c69*/
LABEL_6:
    if ( *(_DWORD *)&g_DialogPool.__pad_208[512] ) /*0x610c7c*/
      (***(void (__thiscall ****)(_DWORD, int))&g_DialogPool.__pad_208[512])(*(_DWORD *)&g_DialogPool.__pad_208[512], 1); /*0x610c82*/
  }
  *(_DWORD *)&g_DialogPool.__pad_208[512] = 0; /*0x610c84*/
  *(_DWORD *)&g_DialogPool.__pad_208[772] = 0; /*0x610c8a*/
  *(_DWORD *)&g_DialogPool.__pad_208[776] = 0; /*0x610c90*/
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
  HWND *v50... [47102 chars total]



// ==== 0x00612910  sub_612910  this=-  sig=ida-proto ====
void __cdecl sub_612910()
{
  dword_AC1DE0 = 0; /*0x612915*/
  __3_YAXPAX_Z(dword_AC1DE8); /*0x612920*/
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

  v0 = dword_AC1860; /*0x612930*/
  for ( i = 0; i < dword_AC1860; v0 = dword_AC1860 ) /*0x61293d*/
  {
    v2 = (_DWORD *)*((_DWORD *)stru_AC1858 + i); /*0x612944*/
    while ( v2 ) /*0x612949*/
    {
      v3 = v2; /*0x61294b*/
      v2 = (_DWORD *)v2[3]; /*0x61294d*/
      __3_YAXPAX_Z(v3); /*0x612951*/
    }
    *((_DWORD *)stru_AC1858 + i++) = 0; /*0x612964*/
  }
  v4 = dword_AC1888; /*0x612975*/
  dword_AC185C = 0; /*0x61297b*/
  if ( v0 > dword_AC1888 ) /*0x612987*/
  {
    do /*0x612a3a*/
    {
      if ( byte_AC186C || v0 <= v4 ) /*0x61299d*/
        break; /*0x61299d*/
      v5 = (int *)stru_AC1858; /*0x6129a9*/
      v6 = v0; /*0x6129af*/
      dword_AC1860 = v0 >> 1; /*0x6129b4*/
      --dword_AC1864; /*0x6129c0*/
      stru_AC1858 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6129d9*/
      memset(stru_AC1858, 0, 4 * dword_AC1860); /*0x6129e1*/
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
              v10 = dword_AC1870(v9) & ((1 << dword_AC1864) - 1); /*0x612a05*/
              v11 = *((_DWORD *)stru_AC1858 + v10); /*0x612a0c*/
              *((_DWORD *)stru_AC1858 + v10) = v9; /*0x612a0f*/
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
      v4 = dword_AC1888; /*0x612a2a*/
      v0 = dword_AC1860; /*0x612a30*/
    }
    while ( dword_AC1860 > (unsigned int)dword_AC1888 ); /*0x612a3a*/
  }
  __3_YAXPAX_Z(stru_AC1858); /*0x612a46*/
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
  if ( dword_AC1B4C && (v5 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x612a93*/
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
  if ( dword_AC1B04 && (v8 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x612aff*/
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
  SetTextColor(hdc, dword_AC18A4); /*0x612b30*/
  SetBkMode(v10, 1); /*0x612b39*/
  return GetStockObject(5); /*0x612b47*/
}



// ==== 0x00612B70  TabControl::WndProc  this=TabControl  sig=csp ====
LRESULT __stdcall TabControl_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v5; // eax
  HWND v6; // ecx
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  int v8; // edi
  int v9; // esi
  _DWORD *v10; // ebp
  HWND *v11; // eax
  LONG WindowLongA; // eax
  UINT v14; // ebx
  int v15; // ecx
  COLORREF v16; // edi
  LONG v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // esi
  LONG bottom; // edx
  int v21; // ecx
  int v22; // ecx
  void *v23; // ebx
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char v30; // bp
  char v31; // dl
  char v32; // si
  int v33; // eax
  char v34; // di
  int v35; // ebx
  char v36; // cl
  unsigned int v37; // ecx
  int v38; // ebx
  char v39; // cl
  unsigned __int16 v40; // ax
  char v41; // cl
  int *v42; // eax
  int v43; // edx
  int v44; // edi
  unsigned int v45; // edx
  unsigned int v46; // ecx
  LONG *v47; // esi
  int v48; // esi
  int v49; // ebx
  int v50; // edx
  int v51; // ecx
  int v52; // ebp
  int v53; // ebp
  int v54; // ebx
  int v55; // esi
  int v56; // eax
  char v57; // al
  char v58; // [esp+4Bh] [ebp-F1h]
  LRESULT (__stdcall *lpPrevWndFunc)(HWND, UINT, WPARAM, LPARAM); // [esp+4Ch] [ebp-F0h]
  WNDPROC lpPrevWndFunca; // [esp+4Ch] [ebp-F0h]
  int v61; // [esp+50h] [ebp-ECh] BYREF
  int v62; // [esp+54h] [ebp-E8h]
  int v63; // [esp+58h] [ebp-E4h]
  int v64; // [esp+5Ch] [ebp-E0h]
  void *v65; // [esp+60h] [ebp-DCh]
  int v66; // [esp+64h] [ebp-D8h]
  LONG left; // [esp+68h] [ebp-D4h]
  int top; // [esp+6Ch] [ebp-D0h]
  int v69; // [esp+70h] [ebp-CCh]
  LONG v70; // [esp+74h] [ebp-C8h]
  _DWORD v71[2]; // [esp+78h] [ebp-C4h]
  struct tagRECT v72; // [esp+80h] [ebp-BCh] BYREF
  LONG v73; // [esp+90h] [ebp-ACh]
  LONG v74; // [esp+94h] [ebp-A8h] BYREF
  int v75; // [esp+98h] [ebp-A4h]
  int v76; // [esp+9Ch] [ebp-A0h]
  int v77; // [esp+A0h] [ebp-9Ch]
  _DWORD *v78; // [esp+A4h] [ebp-98h]
  LONG v79; // [esp+A8h] [ebp-94h] BYREF
  LONG v80; // [esp+ACh] [ebp-90h]
  int v81; // [esp+B0h] [ebp-8Ch]
  int v82; // [esp+B4h] [ebp-88h]
  struct tagRECT v83; // [esp+B8h] [ebp-84h] BYREF
  int v84[2]; // [esp+C8h] [ebp-74h] BYREF
  int v85; // [esp+D0h] [ebp-6Ch]
  int v86; // [esp+D4h] [ebp-68h]
  HWND v87; // [esp+D8h] [ebp-64h] BYREF
  int v88; // [esp+DCh] [ebp-60h] BYREF
  int v89; // [esp+E0h] [ebp-5Ch]
  int v90; // [esp+E4h] [ebp-58h]
  int v91; // [esp+E8h] [ebp-54h]
  struct tagRECT Rect; // [esp+ECh] [ebp-50h] BYREF
  char Buffer[40]; // [esp+FCh] [ebp-40h] BYREF
  int v94; // [esp+124h] [ebp-18h] BYREF
  _BYTE v95[16]; // [esp+12Ch] [ebp-10h] BYREF

  v4 = 0; /*0x612b7d*/
  lpPrevWndFunc = 0; /*0x612b83*/
  if ( dword_AC1B4C && (v5 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x612bb0*/
  {
    v6 = hWnd; /*0x612bb2*/
    while ( *(HWND *)v5 != hWnd ) /*0x612bbb*/
    {
      v5 = *(_DWORD *)(v5 + 8); /*0x612bbd*/
      if ( !v5 ) /*0x612bc2*/
        goto LABEL_10; /*0x612bc2*/
    }
    v7 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v5 + 4); /*0x612bca*/
    if ( v7 ) /*0x612bcf*/
    {
      v4 = *v7; /*0x612bd1*/
      lpPrevWndFunc = *v7; /*0x612bd3*/
    }
  }
  else
  {
    v6 = hWnd; /*0x612bd9*/
  }
LABEL_10:
  memset(&v83, 0, sizeof(v83)); /*0x612be0*/
  ScreenDialogToClient(v6, &v83); /*0x612c05*/
  left = v83.left; /*0x612c2d*/
  v8 = v83.right - v83.left; /*0x612c31*/
  memset(&Rect, 0, sizeof(Rect)); /*0x612c35*/
  top = v83.top; /*0x612c3c*/
  v9 = v83.bottom - v83.top; /*0x612c40*/
  v69 = v83.right - v83.left; /*0x612c59*/
  v70 = v83.bottom - v83.top; /*0x612c5d*/
  GetClientRect(hWnd, &Rect); /*0x612c68*/
  v10 = 0; /*0x612c6e*/
  v78 = 0; /*0x612c77*/
  v87 = hWnd; /*0x612c7b*/
  if ( dword_AC1B04 ) /*0x612c89*/
  {
    v11 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v87) & ((1 << dword_AC1B0C) - 1))); /*0x612cad*/
    if ( v11 ) /*0x612cb2*/
    {
      while ( *v11 != v87 ) /*0x612cbd*/
      {
        v11 = (HWND *)v11[129]; /*0x612cbf*/
        if ( !v11 ) /*0x612cc7*/
          goto LABEL_16; /*0x612cc7*/
      }
      v10 = v11 + 1; /*0x612ccf*/
      v78 = v11 + 1; /*0x612cd2*/
    }
  }
LABEL_16:
  if ( !v10 ) /*0x612cd8*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, lParam); /*0x612d0b*/
  v66 = v10[58]; /*0x612d1e*/
  WindowLongA = GetWindowLongA(hWnd, -16); /*0x612d22*/
  v14 = Msg; /*0x612d28*/
  v73 = WindowLongA; /*0x612d2f*/
  if ( Msg > 0x113 ) /*0x612d39*/
  {
    if ( Msg == 513 || Msg == 515 ) /*0x613677*/
    {
      if ( *((_BYTE *)v10 + 188) ) /*0x61374b*/
        return 0; /*0x61363c*/
      PlayVocClass(dword_8871E0->ChronoInSound, 0x2000, 1.0, 0); /*0x613771*/
    }
    else if ( Msg == 1244 ) /*0x613682*/
    {
      if ( dword_AC1B04 ) /*0x61368f*/
      {
        v56 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x6136b3*/
        if ( v56 ) /*0x6136b8*/
        {
          while ( *(HWND *)v56 != hWnd ) /*0x6136c3*/
          {
            v56 = *(_DWORD *)(v56 + 516); /*0x6136c5*/
            if ( !v56 ) /*0x6136cd*/
              goto LABEL_99; /*0x6136cd*/
          }
          v10 = (_DWORD *)(v56 + 4); /*0x6136d5*/
        }
      }
LABEL_99:
      v57 = *((_BYTE *)v10 + 196); /*0x6136d8*/
      if ( lParam == 1 ) /*0x6136eb*/
      {
        if ( !v57 ) /*0x6136ef*/
        {
          *((_BYTE *)v10 + 196) = 1; /*0x6136f5*/
          SetTimer(hWnd, 0, 0x3E8u, 0); /*0x61370d*/
        }
      }
      else if ( v57 ) /*0x613717*/
      {
        *((_BYTE *)v10 + 196) = 0; /*0x613719*/
        *((_BYTE *)v10 + 197) = 0; /*0x613720*/
        KillTimer(hWnd, 0); /*0x613731*/
        InvalidateRect(hWnd, 0, 1); /*0x613743*/
      }
    }
  }
  else
  {
    if ( Msg != 275 ) /*0x612d3f*/
    {
      switch ( Msg ) /*0x612d59*/
      {
        case 6u: /*0x612d59*/
        case 8u: /*0x612d59*/
        case 0x21u: /*0x612d59*/
          return 0;
        case 0xFu: /*0x612d59*/
          if ( *((_BYTE *)v10 + 188) ) /*0x612d60*/
          {
            ValidateRect(hWnd, 0); /*0x612d74*/
            return 0; /*0x612d86*/
          }
          v84[1] = top; /*0x612d91*/
          v15 = v10[4]; /*0x612d98*/
          v84[0] = left; /*0x612d9b*/
          v85 = v8; /*0x612da2*/
          v16 = dword_AC18A4; /*0x612da9*/
          v17 = v9; /*0x612db1*/
          v86 = v9; /*0x612db5*/
          v65 = (void *)dword_AC18A4; /*0x612dbc*/
          if ( !v15 ) /*0x612dc0*/
          {
            v18 = __2_YAPAXI_Z(0x20u); /*0x612dc8*/
            v19 = v18; /*0x612dcd*/
            if ( v18 ) /*0x612dd4*/
            {
              bottom = Rect.bottom; /*0x612dd6*/
              v21 = Rect.right + 1; /*0x612de4*/
              v18[3] = 0; /*0x612de5*/
              v18[1] = v21; /*0x612deb*/
              v18[2] = bottom + 1; /*0x612dee*/
              *v18 = &XSurface_Vtable; /*0x612dfb*/
              v18[4] = 2; /*0x612e01*/
              Buffer::Init(v18 + 5, 0, 2 * v21 * (bottom + 1)); /*0x612e08*/
              *v19 = &BSurface_Vtable; /*0x612e0d*/
            }
            else
            {
              v19 = 0; /*0x612e15*/
            }
            v10[4] = v19; /*0x612e17*/
            ++g_GameScreenState; /*0x612e2f*/
            v64 = Rect.bottom + 1; /*0x612e3e*/
            v72.left = v83.left; /*0x612e42*/
            v72.bottom = Rect.bottom + 1; /*0x612e4d*/
            v72.top = v83.top; /*0x612e57*/
            v61 = 0; /*0x612e67*/
            v62 = 0; /*0x612e6b*/
            v63 = Rect.right + 1; /*0x612e6f*/
            v72.right = Rect.right + 1; /*0x612e73*/
            (*(void (__thiscall **)(_DWORD *, int *, int, struct tagRECT *, _DWORD, int))(*v19 + 8))( /*0x612e7d*/
              v19,
              &v61,
              DSurface_Alternate,
              &v72,
              0,
              1);
            v17 = v86; /*0x612e80*/
          }
          v22 = v10[44]; /*0x612e87*/
          if ( v22 ) /*0x612e8f*/
          {
            v23 = 0; /*0x612e95*/
            v24 = 0; /*0x612e97*/
            v71[0] = 0; /*0x612e9c*/
            v65 = 0; /*0x612ea0*/
            lpPrevWndFunca = 0; /*0x612ea4*/
            switch ( v22 ) /*0x612ea8*/
            {
              case 1: /*0x612ea8*/
                v25 = UI_Helper_72E2C0(); /*0x612eaa*/
                v23 = dword_B0FAC4; /*0x612eb3*/
                v24 = v25; /*0x612eb9*/
                v65 = dword_B0FAC4; /*0x612ebb*/
                v71[0] = v25; /*0x612ec2*/
                v26 = 2; /*0x612ec6*/
                if ( (v66 & 1) != 0 ) /*0x612ecb*/
                {
                  v26 = 4; /*0x612ecd*/
                }
                else if ( *((_BYTE *)v10 + 197) ) /*0x612ed7*/
                {
                  v26 = 3; /*0x612ee1*/
                }
                goto LABEL_44; /*0x612ed2*/
              case 2: /*0x612ea8*/
                v27 = UI_Helper_72F4B0(); /*0x612eed*/
                v23 = dword_B0F9EC; /*0x612ef6*/
                v24 = v27; /*0x612efc*/
                v26 = 0; /*0x612efe*/
                v71[0] = v24; /*0x612f03*/
                v65 = dword_B0F9EC; /*0x612f07*/
                if ( (v66 & 1) != 0 ) /*0x612f0b*/
                {
                  v26 = 1; /*0x612f0d*/
LABEL_44:
                  lpPrevWndFunca = (WNDPROC)v26; /*0x612f5b*/
LABEL_45:
                  if ( (v73 & 0x8000000) == 0 ) /*0x612f67*/
                  {
LABEL_55:
                    v42 = Copy8Bytes(&v94, v84); /*0x613138*/
                    v88 = *v42; /*0x61314d*/
                    v89 = v42[1]; /*0x61315d*/
                    v72 = *(struct tagRECT *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)DSurface_Alternate + 120))( /*0x613173*/
                                               DSurface_Alternate,
                                               v95);
                    if ( v24 && v23 ) /*0x613196*/
                      DrawToSurfaceSHP( /*0x6131cd*/
                        DSurface_Alternate,
                        v24,
                        (int)v23,
                        (unsigned int)lpPrevWndFunca,
                        &v88,
                        &v72.left,
                        1024,
                        0,
                        0,
                        0,
                        1000,
                        0,
                        0,
                        0,
                        0,
                        0);
                    goto LABEL_79; /*0x6131d2*/
                  }
                  if ( SessionClass::GetGameSpeed(dword_A8B238) ) /*0x612f72*/
                  {
                    v29 = *((_DWORD *)dword_A8B230 + 3374); /*0x612f85*/
                    if ( !v29 ) /*0x612f8d*/
                    {
                      v30 = g_BitShift_Red; /*0x612f9a*/
                      v31 = g_BitMask_Red; /*0x612fa9*/
                      v32 = g_BitShift_Blue; /*0x612fb1*/
                      v33 = (HIBYTE(word_B0F9FD) >> g_BitMask_Red << g_BitShift_Blue) /*0x612fd3*/
                          | ((unsigned __int8)byte_B0F9FC >> g_BitShift_Green_0 << g_BitShift_Red);
                      v34 = g_BitMask_Green; /*0x612fd5*/
                      v35 = (unsigned __int8)word_B0F9FD >> g_BitMask_Blue; /*0x612fdb*/
                      v36 = g_BitMask_Green; /*0x612fdd*/
LABEL_54:
                      v38 = v35 << v36; /*0x6130c5*/
                      v39 = v30; /*0x6130c7*/
                      v10 = v78; /*0x6130ca*/
                      v40 = v38 | v33; /*0x6130ce*/
                      LOBYTE(v79) = (unsigned __int8)(v40 >> v39) << g_BitShift_Green_0; /*0x6130e0*/
                      v41 = v32; /*0x6130f1*/
                      v24 = v71[0]; /*0x6130f4*/
                      BYTE1(v79) = (unsigned __int8)(v40 >> v34) << g_BitMask_Blue; /*0x6130fd*/
                      v23 = v65; /*0x613101*/
                      BYTE2(v79) = (unsigned __int8)(v40 >> v41) << v31; /*0x613107*/
                      v16 = (unsigned __int8)v79 | ((BYTE1(v79) | ((BYTE2(v79) | 0x200) << 8)) << 8); /*0x613136*/
                      goto LABEL_55; /*0x613136*/
                    }
                    v31 = g_BitMask_Red; /*0x612ff0*/
                    v32 = g_BitShift_Blue; /*0x612ff6*/
                    v34 = g_BitMask_Green; /*0x613006*/
                    if ( v29 == 1 ) /*0x612fe7*/
                    {
                      v33 = ((unsigned __int8)word_B0FB15 >> g_BitMask_Blue << g_BitMask_Green) /*0x613020*/
                          | (HIBYTE(word_B0FB15) >> g_BitMask_Red << g_BitShift_Blue);
                      v37 = (unsigned __int8)byte_B0FB14; /*0x613024*/
                    }
                    else
                    {
                      v33 = ((unsigned __int8)word_B0FB1A >> g_BitMask_Blue << g_BitMask_Green) /*0x613066*/
                          | (HIBYTE(word_B0FB1A) >> g_BitMask_Red << g_BitShift_Blue);
                      v37 = (unsigned __int8)byte_B0FB19; /*0x61306a*/
                    }
                  }
                  else
                  {
                    v31 = g_BitMask_Red; /*0x613079*/
                    v32 = g_BitShift_Blue; /*0x61307f*/
                    v34 = g_BitMask_Green; /*0x61308f*/
                    v33 = ((unsigned __int8)word_B0FA95 >> g_BitMask_Blue << g_BitMask_Green) /*0x6130a9*/
                        | (HIBYTE(word_B0FA95) >> g_BitMask_Red << g_BitShift_Blue);
                    v37 = (unsigned __int8)byte_B0FA94; /*0x6130ad*/
                  }
                  v30 = g_BitShift_Red; /*0x6130b3*/
                  v35 = v37 >> g_BitShift_Green_0; /*0x6130c1*/
                  v36 = g_BitShift_Red; /*0x6130c3*/
                  goto LABEL_54; /*0x6130c3*/
                }
                if ( !*((_BYTE *)v10 + 197) ) /*0x612f1c*/
                  goto LABEL_44; /*0x612f1c*/
                break;
              case 3: /*0x612ea8*/
                v28 = UI_Helper_72B050(); /*0x612f25*/
                v23 = dword_B0FACC; /*0x612f2e*/
                v24 = v28; /*0x612f34*/
                v26 = 0; /*0x612f36*/
                v71[0] = v24; /*0x612f3b*/
                v65 = dword_B0FACC; /*0x612f3f*/
                if ( (v66 & 1) != 0 ) /*0x612f43*/
                {
                  v26 = 1; /*0x612f45*/
                  goto LABEL_44; /*0x612f4a*/
                }
                if ( !*((_BYTE *)v10 + 197) ) /*0x612f54*/
                  goto LABEL_44; /*0x612f54*/
                break;
              default:
                goto LABEL_45; /*0x612f23*/
            }
            v26 = 2; /*0x612f56*/
            goto LABEL_44; /*0x612f56*/
          }
          v43 = v10[5]; /*0x6131d7*/
          if ( v43 ) /*0x6131dc*/
          {
            if ( (v66 & 1) != 0 && v10[6] ) /*0x6131e5*/
              v43 = v10[6]; /*0x6131ec*/
            v63 = v85; /*0x613211*/
            v64 = v17; /*0x61321e*/
            v61 = 0; /*0x613222*/
            v62 = 0; /*0x613226*/
            (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613234*/
              DSurface_Alternate,
              v84,
              v43,
              &v61,
              0,
              1);
          }
          else
          {
            v44 = v66 & 1; /*0x613242*/
            v58 = 117; /*0x613245*/
            if ( (v66 & 1) != 0 ) /*0x61324d*/
              v58 = 100; /*0x61324f*/
            if ( (v73 & 0x8000000) != 0 ) /*0x61325c*/
            {
              v58 = 117; /*0x61325e*/
            }
            else if ( v58 == 100 && byte_833684 == 117 ) /*0x613271*/
            {
              PlayVocClass(dword_8871E0->__pad_704[2], 0x2000, 1.0, 0); /*0x613289*/
              v17 = v86; /*0x61328e*/
            }
            v45 = 0; /*0x613299*/
            byte_833684 = v58; /*0x61329b*/
            v88 = 7; /*0x6132a6*/
            v89 = 7; /*0x6132ad*/
            v79 = 24; /*0x6132b9*/
            v71[0] = 10; /*0x6132c1*/
            v71[1] = 10; /*0x6132c5*/
            v80 = 30; /*0x6132c9*/
            v46 = 0; /*0x6132d1*/
            v47 = &v79; /*0x6132d3*/
            do /*0x6132e8*/
            {
              if ( *v47 > v17 && v46 ) /*0x6132dd*/
                break; /*0x6132dd*/
              v45 = v46++; /*0x6132df*/
              ++v47; /*0x6132e2*/
            }
            while ( v46 < 2 ); /*0x6132e8*/
            v48 = *(&v79 + v45); /*0x6132ea*/
            v49 = *(&v88 + v45); /*0x6132ee*/
            v71[0] = v71[v45]; /*0x6132f9*/
            v50 = v10[4]; /*0x6132fd*/
            if ( v50 ) /*0x613304*/
            {
              v79 = v83.left; /*0x61331f*/
              v80 = v83.top; /*0x61332c*/
              v91 = Rect.bottom + 1; /*0x613339*/
              v82 = Rect.bottom + 1; /*0x613340*/
              v88 = 0; /*0x613350*/
              v89 = 0; /*0x613357*/
              v90 = Rect.right + 1; /*0x61335e*/
              v81 = Rect.right + 1; /*0x613365*/
              (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613376*/
                DSurface_Alternate,
                &v79,
                v50,
                &v88,
                0,
                1);
              InvalidateRect(hWnd, 0, 0); /*0x613383*/
              v17 = v86; /*0x613389*/
            }
            v51 = (v17 - v48) / 2 + top; /*0x61339f*/
            top = v51; /*0x6133a3*/
            if ( v44 ) /*0x6133a7*/
              top = v51 + 2; /*0x6133ae*/
            sprintf(Buffer, "b%c%c_li%d.pcx", v58, 101, v48); /*0x6133c8*/
            v52 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x6133e4*/
            v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v52 + 128))(v52); /*0x6133f9*/
            v74 = left; /*0x613401*/
            v62 = 0; /*0x61340d*/
            v61 = 0; /*0x613411*/
            v75 = top; /*0x613425*/
            v76 = v49; /*0x613429*/
            v77 = v48; /*0x61342d*/
            v63 = v49; /*0x613431*/
            v64 = v48; /*0x613435*/
            (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613441*/
              DSurface_Alternate,
              &v74,
              v52,
              &v61,
              0,
              1);
            sprintf(Buffer, "b%c%c_mi%d.pcx", v58, 101, v48); /*0x613455*/
            v53 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613471*/
            v72.top = top; /*0x613485*/
            v72.left = left + v49; /*0x61348d*/
            v54 = v71[0]; /*0x613491*/
            v72.bottom = v70; /*0x613495*/
            v72.right = v69 - v71[0]; /*0x61349b*/
            v72.bottom = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 128))(v53); /*0x6134ba*/
            Surface::TileBlit(&v72, DSurface_Alternate, v53, 0, 0); /*0x6134c4*/
            sprintf(Buffer, "b%c%c_ri%d.pcx", v58, 101, v48); /*0x6134da*/
            v55 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x6134f7*/
            v75 = top; /*0x61350b*/
            v77 = v70; /*0x613519*/
            v74 = left + v69 - v54; /*0x61351d*/
            v76 = v54; /*0x613521*/
            v77 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 128))(v55); /*0x613533*/
            v64 = v77; /*0x613537*/
            v63 = v76; /*0x61353b*/
            v62 = 0; /*0x61354d*/
            v61 = 0; /*0x613551*/
            (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61355d*/
              DSurface_Alternate,
              &v74,
              v55,
              &v61,
              0,
              1);
            v16 = (COLORREF)v65; /*0x613560*/
            v10 = v78; /*0x613564*/
          }
LABEL_79:
          if ( !v10[5] && v10[10] ) /*0x613573*/
          {
            GetClientRect(hWnd, &v72); /*0x613587*/
            v61 = left; /*0x613595*/
            v62 = top + 1; /*0x61359c*/
            v63 = v69 + left - 2; /*0x6135a8*/
            v64 = top + v70; /*0x6135b9*/
            if ( (v66 & 1) != 0 ) /*0x6135bd*/
            {
              v61 = left + 2; /*0x6135c2*/
              v62 += 4; /*0x6135cd*/
            }
            PrintFontLayout( /*0x6135ee*/
              DSurface_Alternate,
              (unsigned __int16 *)v10[10],
              &v61,
              (_DWORD *)v10[25],
              v16,
              5,
              12,
              0,
              0,
              0);
          }
          if ( !v10[44] && (v73 & 0x8000000) != 0 ) /*0x613605*/
            DSurface::FillRectWithColor(0, 128); /*0x61361b*/
          ValidateRect(hWnd, 0); /*0x61362a*/
          break; /*0x61362a*/
        default:
          return CallWindowProcA(lpPrevWndFunc, hWnd, v14, wParam, lParam);
      }
      return 0; /*0x61362a*/
    }
    *((_BYTE *)v10 + 197) = *((_BYTE *)v10 + 197) == 0; /*0x61364c*/
    InvalidateRect(hWnd, 0, 1); /*0x61365c*/
  }
  return CallWindowProcA(lpPrevWndFunc, hWnd, v14, wParam, lParam); /*0x612d01*/
}


// ==== 0x006137D0  Dialog::TabControlPaint  this=Dialog  sig=csp ====
LRESULT __stdcall Dialog_TabControlPaint(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // edi
  int v5; // eax
  HWND v6; // ecx
  int v7; // eax
  int v8; // eax
  LRESULT (__stdcall **v9)(HWND, UINT, WPARAM, LPARAM); // eax
  UINT v10; // esi
  int v12; // eax
  LPARAM v13; // eax
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
  LRESULT v40; // ebp
  WPARAM v41; // ebp
  LRESULT i; // eax
  HWND v43; // edx
  char v44; // bl
  LONG v45; // eax
  LONG v46; // eax
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
  WPARAM v61; // edi
  LRESULT v62; // ebx
  int v63; // esi
  LONG v64; // [esp+50h] [ebp-104h] BYREF
  LONG v65; // [esp+54h] [ebp-100h]
  int v66; // [esp+58h] [ebp-FCh]
  int v67; // [esp+5Ch] [ebp-F8h]
  struct tagRECT Rect; // [esp+60h] [ebp-F4h] BYREF
  LONG left; // [esp+70h] [ebp-E4h] BYREF
  LONG top; // [esp+74h] [ebp-E0h]
  int v71; // [esp+78h] [ebp-DCh]
  int v72; // [esp+7Ch] [ebp-D8h]
  LONG v73; // [esp+80h] [ebp-D4h] BYREF
  LONG v74; // [esp+84h] [ebp-D0h]
  int v75; // [esp+88h] [ebp-CCh]
  int v76; // [esp+8Ch] [ebp-C8h]
  WPARAM v77; // [esp+90h] [ebp-C4h]
  int v78; // [esp+94h] [ebp-C0h]
  LRESULT v79; // [esp+98h] [ebp-BCh]
  int v80; // [esp+9Ch] [ebp-B8h]
  int v81; // [esp+A0h] [ebp-B4h]
  LONG v82; // [esp+A4h] [ebp-B0h]
  RECT v83; // [esp+A8h] [ebp-ACh] BYREF
  int v84[4]; // [esp+B8h] [ebp-9Ch] BYREF
  struct tagRECT v85; // [esp+C8h] [ebp-8Ch] BYREF
  int v86[2]; // [esp+D8h] [ebp-7Ch] BYREF
  int v87; // [esp+E0h] [ebp-74h]
  int v88; // [esp+E4h] [ebp-70h]
  LPARAM v89[7]; // [esp+E8h] [ebp-6Ch] BYREF
  char Buffer[80]; // [esp+104h] [ebp-50h] BYREF

  v4 = 0; /*0x6137e0*/
  v80 = 0; /*0x6137e4*/
  v78 = 0; /*0x6137e8*/
  if ( dword_AC1B04 && (v5 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x613815*/
  {
    v6 = hWnd; /*0x613817*/
    while ( *(HWND *)v5 != hWnd ) /*0x613820*/
    {
      v5 = *(_DWORD *)(v5 + 516); /*0x613822*/
      if ( !v5 ) /*0x61382a*/
        goto LABEL_9; /*0x61382a*/
    }
    v78 = v5 + 4; /*0x613835*/
  }
  else
  {
    v6 = hWnd; /*0x61383b*/
  }
LABEL_9:
  if ( dword_AC1B4C ) /*0x613848*/
  {
    v7 = HashMap::ComputeIndex((int)&dword_AC1B48, (int)&hWnd); /*0x613857*/
    v6 = hWnd; /*0x613862*/
    v8 = *((_DWORD *)dword_AC1B48 + v7); /*0x613869*/
    if ( v8 ) /*0x61386e*/
    {
      while ( *(HWND *)v8 != hWnd ) /*0x613872*/
      {
        v8 = *(_DWORD *)(v8 + 8); /*0x613874*/
        if ( !v8 ) /*0x613879*/
          goto LABEL_16; /*0x613879*/
      }
      v9 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v8 + 4); /*0x613881*/
      if ( v9 ) /*0x613886*/
        v4 = *v9; /*0x613888*/
    }
  }
LABEL_16:
  v10 = Msg; /*0x61388a*/
  switch ( Msg ) /*0x613894*/
  {
    case 0x14u: /*0x613894*/
      return 1; /*0x6138a4*/
    case 0x85u: /*0x613894*/
      return 0; /*0x6138ba*/
    case 0x497u: /*0x613894*/
      ScreenDialogToClient(v6, &v85); /*0x6138cc*/
      v12 = HashTable::Find(g_DialogHashTable, g_Str_File_tab_tlu_pcx, 0); /*0x6138dc*/
      v13 = (unsigned __int16)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 128))(v12) - 1) << 16; /*0x6138f1*/
      LOBYTE(v13) = v13 | 0x59; /*0x6138f4*/
      SendMessageA(hWnd, 0x1329u, 0, v13); /*0x613905*/
      v6 = hWnd; /*0x61390b*/
LABEL_22:
      if ( v4 ) /*0x613914*/
        return CallWindowProcA(v4, v6, v10, wParam, lParam); /*0x61392f*/
      return v80; /*0x613940*/
  }
  if ( Msg != 15 ) /*0x613946*/
    goto LABEL_22; /*0x613946*/
  ScreenDialogToClient(v6, &Rect); /*0x61394d*/
  v14 = SendMessageA; /*0x613959*/
  SendMessageA(hWnd, 0x1304u, 0, 0); /*0x613967*/
  SendMessageA(hWnd, 0x130Au, 0, (LPARAM)&v85); /*0x61397f*/
  SendMessageA(hWnd, 0x130Au, 0, (LPARAM)&v85); /*0x613997*/
  v15 = Rect.top + v85.bottom - v85.top + 3; /*0x6139b2*/
  left = Rect.left; /*0x6139ba*/
  v71 = Rect.right - Rect.left; /*0x6139c4*/
  v72 = Rect.bottom - v15; /*0x6139d1*/
  Rect.top = v15; /*0x6139d9*/
  top = v15; /*0x6139dd*/
  SetupDialogRenderBuffer(&left, hWnd, 0); /*0x6139e1*/
  ValidateRect(hWnd, 0); /*0x6139ef*/
  left = Rect.left; /*0x613a07*/
  top = Rect.top; /*0x613a11*/
  v71 = Rect.right - Rect.left; /*0x613a1c*/
  v72 = Rect.bottom - Rect.top; /*0x613a20*/
  v16 = HashTable::Find(g_DialogHashTable, aTabFmlPcx, 0); /*0x613a24*/
  v17 = v16; /*0x613a29*/
  if ( v16 ) /*0x613a2d*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 128))(v16); /*0x613a33*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 124))(v17); /*0x613a3d*/
    v64 = Rect.left; /*0x613a48*/
    v66 = v18; /*0x613a50*/
    v65 = Rect.top; /*0x613a5a*/
    v67 = Rect.bottom - Rect.top; /*0x613a6d*/
    Surface::TileBlit(&v64, DSurface_Alternate, v17, 0, 0); /*0x613a71*/
  }
  v19 = HashTable::Find(g_DialogHashTable, aTabFmrPcx, 0); /*0x613a81*/
  v20 = v19; /*0x613a86*/
  if ( v19 ) /*0x613a8a*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 128))(v19); /*0x613a90*/
    v66 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 124))(v20); /*0x613aa7*/
    v64 = Rect.right - v66; /*0x613ab0*/
    v65 = Rect.top; /*0x613ab9*/
    v67 = Rect.bottom - Rect.top; /*0x613acc*/
    Surface::TileBlit(&v64, DSurface_Alternate, v20, 0, 0); /*0x613ad0*/
  }
  v21 = HashTable::Find(g_DialogHashTable, aTabFtmPcx, 0); /*0x613ae0*/
  v22 = v21; /*0x613ae5*/
  if ( v21 ) /*0x613ae9*/
  {
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 128))(v21); /*0x613af5*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 124))(v22); /*0x613afb*/
    v64 = Rect.left; /*0x613b0a*/
    v65 = Rect.top; /*0x613b16*/
    v66 = Rect.right - Rect.left; /*0x613b27*/
    v67 = v23; /*0x613b2b*/
    Surface::TileBlit(&v64, DSurface_Alternate, v22, 0, 0); /*0x613b2f*/
  }
  v24 = HashTable::Find(g_DialogHashTable, aTabFbmPcx, 0); /*0x613b3f*/
  v25 = v24; /*0x613b44*/
  if ( v24 ) /*0x613b48*/
  {
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 128))(v24); /*0x613b54*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x613b5a*/
    v64 = Rect.left; /*0x613b6b*/
    v65 = Rect.bottom - v26; /*0x613b77*/
    v66 = Rect.right - Rect.left; /*0x613b88*/
    v67 = v26; /*0x613b8c*/
    Surface::TileBlit(&v64, DSurface_Alternate, v25, 0, 0); /*0x613b90*/
  }
  v27 = HashTable::Find(g_DialogHashTable, aTabFtlPcx, 0); /*0x613ba0*/
  v28 = v27; /*0x613ba5*/
  if ( v27 ) /*0x613ba9*/
  {
    v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 128))(v27); /*0x613bb5*/
    v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 124))(v28); /*0x613bbb*/
    v74 = Rect.top; /*0x613bc6*/
    v73 = Rect.left; /*0x613bca*/
    v64 = 0; /*0x613bdc*/
    v65 = 0; /*0x613be0*/
    v66 = v30; /*0x613be4*/
    v67 = v29; /*0x613be8*/
    v75 = v30; /*0x613bec*/
    v76 = v29; /*0x613bf0*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613bfc*/
      DSurface_Alternate,
      &v73,
      v28,
      &v64,
      0,
      1);
  }
  v31 = HashTable::Find(g_DialogHashTable, aTabFtrPcx, 0); /*0x613c0f*/
  if ( v31 ) /*0x613c13*/
  {
    v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 128))(v31); /*0x613c23*/
    v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 124))(v31); /*0x613c25*/
    v65 = Rect.top; /*0x613c32*/
    v64 = Rect.right - v33; /*0x613c36*/
    v73 = 0; /*0x613c48*/
    v74 = 0; /*0x613c4c*/
    v75 = v33; /*0x613c50*/
    v76 = v32; /*0x613c54*/
    v66 = v33; /*0x613c58*/
    v67 = v32; /*0x613c5c*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613c68*/
      DSurface_Alternate,
      &v64,
      v31,
      &v73,
      0,
      1);
  }
  v34 = HashTable::Find(g_DialogHashTable, aTabFblPcx, 0); /*0x613c7b*/
  if ( v34 ) /*0x613c7f*/
  {
    v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 128))(v34); /*0x613c8f*/
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 124))(v34); /*0x613c91*/
    v64 = Rect.left; /*0x613c9e*/
    v65 = Rect.bottom - v35; /*0x613ca8*/
    v73 = 0; /*0x613cb4*/
    v74 = 0; /*0x613cb8*/
    v75 = v36; /*0x613cbc*/
    v76 = v35; /*0x613cc0*/
    v66 = v36; /*0x613cc4*/
    v67 = v35; /*0x613cc8*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613cd4*/
      DSurface_Alternate,
      &v64,
      v34,
      &v73,
      0,
      1);
  }
  v37 = HashTable::Find(g_DialogHashTable, aTabFbrPcx, 0); /*0x613ce7*/
  if ( v37 ) /*0x613ceb*/
  {
    v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 128))(v37); /*0x613cfb*/
    v39 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 124))(v37); /*0x613cfd*/
    v65 = Rect.bottom - v38; /*0x613d0c*/
    v64 = Rect.right - v39; /*0x613d10*/
    v73 = 0; /*0x613d22*/
    v74 = 0; /*0x613d26*/
    v75 = v39; /*0x613d2a*/
    v76 = v38; /*0x613d2e*/
    v66 = v39; /*0x613d32*/
    v67 = v38; /*0x613d36*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613d42*/
      DSurface_Alternate,
      &v64,
      v37,
      &v73,
      0,
      1);
  }
  v40 = SendMessageA(hWnd, 0x130Bu, 0, 0); /*0x613d56*/
  v79 = v40; /*0x613d63*/
  ScreenDialogToClient(hWnd, &Rect); /*0x613d67*/
  v41 = v40 + 1; /*0x613d6c*/
  v77 = v41; /*0x613d6d*/
LABEL_43:
  for ( i = v14(hWnd, 0x130Au, v41, (LPARAM)&v83); ; i = SendMessageA(hWnd, 0x130Au, v61 + 1, (LPARAM)&v83) ) /*0x613d84*/
  {
    if ( !i ) /*0x613d88*/
    {
      v77 = 0; /*0x614161*/
      v41 = 0; /*0x614169*/
      goto LABEL_43; /*0x61416d*/
    }
    v43 = hWnd; /*0x613d9c*/
    memset(v89, 0, sizeof(v89)); /*0x613da3*/
    v89[3] = (LPARAM)unk_AC1BA0; /*0x613db3*/
    v89[4] = 64; /*0x613dc7*/
    strcpy((char *)unk_AC1BA0, aTitle); /*0x613dd5*/
    v89[0] = 1; /*0x613dd9*/
    v14(v43, 0x1305u, v41, (LPARAM)v89); /*0x613df8*/
    v44 = 100; /*0x613dfa*/
    if ( v41 == v79 ) /*0x613e00*/
      v44 = 117; /*0x613e02*/
    v45 = v83.left; /*0x613e0b*/
    if ( v83.left >= 6 ) /*0x613e0d*/
      v45 = 6; /*0x613e0f*/
    left = Rect.left + v83.left - v45; /*0x613e22*/
    top = v83.top + Rect.top; /*0x613e2f*/
    v46 = v83.left; /*0x613e33*/
    if ( v83.left >= 6 ) /*0x613e35*/
      v46 = 6; /*0x613e37*/
    v72 = v83.bottom - v83.top; /*0x613e4c*/
    v71 = v83.right + v46 - v83.left; /*0x613e5a*/
    v47 = v44; /*0x613e63*/
    v48 = HashTable::Find(g_DialogHashTable, g_Str_File_tab_tlu_pcx, 0); /*0x613e74*/
    sprintf(Buffer, "tab_tm%c.pcx", v44); /*0x613e76*/
    v49 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613e8d*/
    v50 = v49; /*0x613e92*/
    if ( v49 ) /*0x613e96*/
    {
      v81 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 128))(v49); /*0x613ea2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 124))(v50); /*0x613eaa*/
      v51 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 124))(v48); /*0x613eb1*/
      v52 = *(_DWORD *)v48; /*0x613eb8*/
      v53 = v71 - 2 * v51; /*0x613ebc*/
      v82 = top; /*0x613ec4*/
      v54 = (*(int (__thiscall **)(int))(v52 + 124))(v48); /*0x613ec8*/
      v73 = left + v54; /*0x613edb*/
      v74 = v82; /*0x613ee5*/
      v76 = v81; /*0x613ef0*/
      v75 = v53; /*0x613efb*/
      Surface::TileBlit(&v73, DSurface_Alternate, v50, 0, 0); /*0x613eff*/
    }
    sprintf(Buffer, "tab_tl%c.pcx", v47); /*0x613f12*/
    v55 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613f2e*/
    if ( v55 ) /*0x613f32*/
    {
      v56 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 128))(v55); /*0x613f46*/
      v57 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 124))(v55); /*0x613f48*/
      v64 = left; /*0x613f53*/
      v66 = v57; /*0x613f5d*/
      v65 = top; /*0x613f6e*/
      v67 = v56; /*0x613f74*/
      Surface::BlitTransparent( /*0x613fb5*/
        &v64,
        DSurface_Alternate,
        v55,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (0xFFu >> g_BitMask_Red << g_BitShift_Blue));
    }
    sprintf(Buffer, "tab_tr%c.pcx", v47); /*0x613fc8*/
    v58 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613fdf*/
    v59 = v58; /*0x613fe4*/
    if ( v58 ) /*0x613fe8*/
    {
      v60 = (*(int (__thiscall **)(int))(*(_DWORD *)v58 + 128))(v58); /*0x613ff8*/
      v87 = (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 124))(v59); /*0x61400b*/
      v86[0] = left + v71 - v87; /*0x614018*/
      v86[1] = top; /*0x61402a*/
      v88 = v60; /*0x61403b*/
      Surface::BlitTransparent( /*0x614082*/
        v86,
        DSurface_Alternate,
        v59,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (0xFFu >> g_BitMask_Red << g_BitShift_Blue));
    }
    if ( v89[3] ) /*0x614090*/
      strcpy((char *)unk_AC1BA0, (const char *)v89[3]); /*0x6140a9*/
    v61 = v77; /*0x6140ba*/
    v62 = v79; /*0x6140be*/
    v63 = dword_AC4608; /*0x6140c2*/
    v84[0] = left; /*0x6140ca*/
    v84[2] = left + v71; /*0x6140d2*/
    v84[1] = top + 6; /*0x6140e4*/
    v84[3] = top + v72; /*0x6140e8*/
    if ( v77 == v79 ) /*0x6140ef*/
      v63 = dword_AC18A4; /*0x6140f1*/
    swprintf(word_AC462C, (const size_t)g_Str_Trace__hs, unk_AC1BA0); /*0x614106*/
    PrintFontLayout(DSurface_Alternate, word_AC462C, v84, *(_DWORD **)(v78 + 100), v63, 5, 12, 0, 0, 0); /*0x614131*/
    ValidateRect(hWnd, &v83); /*0x614149*/
    if ( v61 == v62 ) /*0x61414d*/
      break; /*0x61414d*/
    v14 = SendMessageA; /*0x61414f*/
    v77 = v61 + 1; /*0x614156*/
    v41 = v61 + 1; /*0x61415a*/
  }
  ValidateRect(hWnd, 0); /*0x61417c*/
  return v80; /*0x613896*/
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
  if ( dword_AC1B4C ) /*0x6141ab*/
  {
    v5 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x6141cf*/
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
  if ( !dword_AC1B04 ) /*0x61420d*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x61420d*/
  v7 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v40) & ((1 << dword_AC1B0C) - 1))); /*0x61422e*/
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
    if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x61481d*/
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
        v25 = strcmp(ClassName, g_INI_Key_ComboBox) == 0; /*0x61462e*/
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
          DrawDialogGradient((int *)DSurface_Alternate, &Rect.left, 2, -1); /*0x6146d0*/
        v41 = 0; /*0x6146eb*/
        Memory_Helper_6149B0(hWnd, 5120, (int)&v41); /*0x6146f3*/
        v44.left = v42.left; /*0x614706*/
        v44.top = v42.top; /*0x614710*/
        v44.right = v42.right - v42.left + 1; /*0x614720*/
        v44.bottom = v42.bottom - v42.top + 1; /*0x614724*/
        v28 = GetWindowLongA(hWnd, -16); /*0x614728*/
        DrawTextRendererMultiline( /*0x614760*/
          (_DWORD *)DSurface_Alternate,
          &v44.left,
          &unk_AC1E04,
          v41,
          (_DWORD *)v8[25],
          dword_AC18A4,
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
size_t __fastcall sub_6149B0(HWND hWnd, WCHAR *a2, int cchWideChar, size_t *a4)
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
  if ( dword_AC1B4C ) /*0x6149cb*/
  {
    v5 = dword_AC1B60(&hWnda); /*0x6149d1*/
    hWnd = hWnda; /*0x6149e4*/
    v6 = *((_DWORD *)dword_AC1B48 + (v5 & ((1 << dword_AC1B54) - 1))); /*0x6149f0*/
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
      wcscat((wchar_t *)v11, L"\r\n"); /*0x614af6*/
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
  if ( dword_AC1B4C && (v7 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x614b98*/
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
  if ( dword_AC1B04 ) /*0x614bce*/
  {
    v10 = dword_AC1B18(&hWnd); /*0x614bd7*/
    v8 = hWnd; /*0x614bea*/
    v11 = *((_DWORD *)dword_AC1B00 + (v10 & ((1 << dword_AC1B0C) - 1))); /*0x614bf9*/
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
        v17 = strcmp(ClassName, g_INI_Key_ComboBox) == 0; /*0x614f04*/
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
          DrawDialogGradient((int *)DSurface_Alternate, &Rect.left, 2, -1); /*0x614fa6*/
        v46.left += 2; /*0x614fba*/
        v49.left = v46.left; /*0x614fbe*/
        v49.top = v46.top; /*0x614fc8*/
        v20 = *(_DWORD *)(v5 + 76); /*0x614fce*/
        v49.right = v46.right - v46.left + 1; /*0x614fd2*/
        dword_AC48C8 = v20; /*0x614fd6*/
        v21 = *(_DWORD *)(v5 + 84) >> 5; /*0x614fe0*/
        v49.bottom = v46.bottom - v46.top + 1; /*0x614fe3*/
        v38 = v21 & 1; /*0x614ff1*/
        v37 = *(_DWORD *)(v5 + 56); /*0x614ffb*/
        v36 = dword_AC18A4; /*0x615003*/
        v35 = *(_DWORD **)(v5 + 100); /*0x615004*/
        v34 = *(_DWORD *)(v5 + 64); /*0x615005*/
        v22 = WideString::GetOrEmpty(*(wchar_t ***)(v5 + 60)); /*0x615009*/
        DrawTextRendererMultiline( /*0x615019*/
          (_DWORD *)DSurface_Alternate,
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
    if ( !strcmp((const char *)&v49, g_INI_Key_ComboBox) ) /*0x6150b7*/
      InvalidateRect(v42, 0, 0); /*0x6150ed*/
    InvalidateRect(hWnd, 0, 0); /*0x6150fb*/
    goto LABEL_73; /*0x6150fb*/
  }
  if ( v13 != 13 ) /*0x614dc3*/
    goto LABEL_70; /*0x614dc3*/
  SendMessageA(Parent, 0x4DAu, 0, (LPARAM)hWnd); /*0x614de3*/
  if ( (*(_BYTE *)(v5 + 84) & 4) != 0 ) /*0x614de9*/
  {
    WideString::Append2(*(wchar_t ***)(v5 + 60), asc_835950); /*0x614df3*/
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
  int v43; //... [23858 chars total]



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
  if ( dword_AC1B04 ) /*0x6163be*/
  {
    v5 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v31) & ((1 << dword_AC1B0C) - 1))); /*0x6163df*/
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
        if ( !dword_AC1B4C ) /*0x6167c7*/
          goto LABEL_51; /*0x6167c7*/
        v23 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x6167eb*/
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
    if ( dword_AC1B4C ) /*0x616863*/
    {
      v27 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x61688b*/
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
                strcpy(Buffer, aCceIPcx); /*0x616528*/
              else
                strcpy(Buffer, aCceIlPcx); /*0x61654f*/
            }
            else if ( v10 ) /*0x616560*/
            {
              strcpy(Buffer, aCceIrPcx); /*0x61657b*/
            }
            else
            {
              strcpy(Buffer, aCueIPcx); /*0x61659f*/
            }
          }
          else
          {
            v12 = 117; /*0x6165ac*/
            if ( v9 == 1 ) /*0x6165ae*/
              v12 = 99; /*0x6165b0*/
            sprintf(Buffer, "c%ce_i.pcx", v12); /*0x6165c0*/
          }
          v13 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x6165d9*/
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 128))(v13); /*0x6165e5*/
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 124))(v13); /*0x6165eb*/
          v33[0] = 0; /*0x6165f8*/
          v33[1] = 0; /*0x6165fc*/
          v33[2] = v15; /*0x616605*/
          v33[3] = v14; /*0x61660a*/
          (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616616*/
            DSurface_Alternate,
            v32,
            v13,
            v33,
            0,
            1);
          if ( (v11 & 0x8000000) != 0 ) /*0x616621*/
            DSurface::FillRectWithColor(0, dword_AC4898); /*0x616635*/
          v16 = (unsigned __int16 *)v4[10]; /*0x61663e*/
          v35.left += 26; /*0x616646*/
          if ( v16 ) /*0x61664a*/
          {
            v17 = dword_AC18A4; /*0x61664c*/
            if ( (v11 & 0x8000000) != 0 ) /*0x616653*/
              v17 = dword_AC1CB4; /*0x616655*/
            PrintFontLayout(DSurface_Alternate, v16, &v35, (_DWORD *)v4[25], v17, 4, 12, 0, 0, 0); /*0x616674*/
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
  PlayVocClass(dword_8871E0->SlaveMinerUndeploySound, 0x2000, 1.0, 0); /*0x61674e*/
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
  if ( dword_AC1B04 ) /*0x6169a0*/
  {
    v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v69) & ((1 << dword_AC1B0C) - 1))); /*0x6169c1*/
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
      yTop = dword_AC18A4; /*0x616afa*/
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
        ++g_GameScreenState; /*0x616ba4*/
        v65.left = v66.left; /*0x616bb3*/
        v63 = Rect.bottom + 1; /*0x616bbe*/
        v65.bottom = Rect.bottom + 1; /*0x616bc2*/
        v65.top = v66.top; /*0x616bca*/
        v62 = Rect.right + 1; /*0x616bd9*/
        v65.right = Rect.right + 1; /*0x616bdd*/
        (*(void (__thiscall **)(_DWORD *, int *, int, struct tagRECT *, _DWORD, int))(*v13 + 8))( /*0x616be7*/
          v13,
          &v60,
          DSurface_Alternate,
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
        (*(void (__thiscall **)(int, _DWORD *, LONG, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616c69*/
          DSurface_Alternate,
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
          (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616d6a*/
            DSurface_Alternate,
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
        sprintf(Buffer, "b%c%c_li%d.pcx", v44, 101, v22); /*0x616dc5*/
        v26 = (int *)HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x616ddc*/
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
        (*(void (__thiscall **)(int, LONG *, LONG, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616e40*/
          DSurface_Alternate,
          &v52,
          v56,
          &v60,
          0,
          1);
        sprintf(Buffer, "b%c%c_mi%d.pcx", v71, 101, v22); /*0x616e5b*/
        v28 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x616e72*/
        v65.bottom = v7; /*0x616e7b*/
        v65.top = v49; /*0x616e8c*/
        v65.left = left + v68; /*0x616e90*/
        v56 = v28; /*0x616e9a*/
        v65.right = v8 - v64[0]; /*0x616ea0*/
        v65.bottom = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 128))(v28); /*0x616eb4*/
        Surface::TileBlit(&v65, DSurface_Alternate, v56, 0, 0); /*0x616ecc*/
        sprintf(Buffer, "b%c%c_ri%d.pcx", v71, 101, v22); /*0x616ee9*/
        v29 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x616f05*/
        v53 = v49; /*0x616f11*/
        v55 = v7; /*0x616f21*/
        v52 = left + v8 - v64[0]; /*0x616f25*/
        v54 = v64[0]; /*0x616f29*/
        v55 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 128))(v29); /*0x616f3b*/
        v63 = v55; /*0x616f3f*/
        v61 = 0; /*0x616f47*/
        v60 = 0; /*0x616f4b*/
        v62 = v54; /*0x616f50*/
        (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616f67*/
          DSurface_Alternate,
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
        PrintFontLayout(DSurface_Alternate, (unsigned __int16 *)v45[10], &v48, (_DWORD *)v45[25], yTop, 5, 12, 0, 0, 0); /*0x616ff0*/
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
        if ( dword_AC1B4C && (v31 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x617089*/
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
    PlayVocClass(*((_DWORD *)dword_8871E0 + 451), 0x2000, 1.0, 0); /*0x617117*/
LABEL_61:
    v34 = 0; /*0x61711c*/
    if ( dword_AC1B4C && (v35 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x61714e*/
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
  if ( dword_AC1B4C && (v40 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x6171f0*/
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
  LRESULT v4; // edi
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
  _DWORD *v43; //... [47233 chars total]



// ==== 0x00618D40  Options::DialogProc  this=Options  sig=csp ====
int __stdcall sub_618D40(HWND hWnd, UINT Msg, int a3, LONG String)
{
  int v4; // eax
  HWND v5; // ecx
  WNDPROC *v6; // eax
  _DWORD *v7; // esi
  HWND *v8; // eax
  int v9; // edi
  UINT v10; // ebx
  LRESULT v11; // esi
  LRESULT v12; // ecx
  LONG v13; // esi
  HWND v14; // eax
  LONG v15; // ecx
  int v16; // edx
  LONG (__stdcall *v17)(HWND, int); // ebp
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  HWND v20; // eax
  int v21; // esi
  int v22; // eax
  unsigned int v23; // ebx
  _DWORD *v24; // eax
  _DWORD *v25; // esi
  void (__thiscall ***v26)(_DWORD, int); // ecx
  HDC DC; // esi
  int result; // eax
  int v29; // edx
  LRESULT v30; // eax
  int v31; // ebp
  HWND v32; // ecx
  LRESULT (__stdcall *v33)(HWND, UINT, WPARAM, LPARAM); // esi
  int v34; // eax
  int v35; // eax
  LRESULT (__stdcall **v36)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v37; // eax
  int *v38; // edi
  _DWORD *v39; // ebx
  int v40; // eax
  int v41; // ecx
  WPARAM v42; // ebp
  int v43; // ecx
  ... [101654 chars total]



// ==== 0x0061C690  Scrollbar::DlgProc  this=Scrollbar  sig=csp ====
LRESULT __stdcall Scrollbar_DlgProc(HWND hWnd, UINT Msg, int wParam, unsigned int lParam)
{
  int right; // ebx
  _DWORD *v5; // esi
  HWND *v6; // eax
  int v7; // edx
  signed int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // eax
  UINT v14; // ecx
  LRESULT (__stdcall *v16)(HWND, UINT, WPARAM, LPARAM); // esi
  int v17; // eax
  LRESULT (__stdcall **v18)(HWND, UINT, WPARAM, LPARAM); // eax
  _DWORD *v19; // ebp
  HWND Parent; // eax
  _DWORD *v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  void (__thiscall ***v25)(_DWORD, int); // ecx
  _DWORD *v26; // ebx
  LONG v27; // eax
  LONG v28; // ecx
  int v29; // eax
  int v30; // ebp
  _WORD *v31; // eax
  __int16 v32; // bp
  int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // ebx
  bool v36; // zf
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  char v40; // al
  int v41; // eax
  int v42; // edi
  int v43; // ebx
  char v44; // al
  int v45; // eax
  int v46; // edi
  int v47; // eax
  int v48; // edi
  int v49; // eax
  int v50; // edx
  int v51; // edi
  int v52; // edi
  signed int v53; // edx
  int v54; // eax
  LONG x; // ecx
  int v56; // eax
  int v57; // ecx
  BOOL v58; // ecx
  BOOL v59; // edx
  bool v60; // [esp+6Bh] [ebp-F1h]
  signed int v61; // [esp+6Ch] [ebp-F0h]
  int v62; // [esp+70h] [ebp-ECh] BYREF
  int v63; // [esp+74h] [ebp-E8h]
  int v64; // [esp+78h] [ebp-E4h]
  BOOL v65; // [esp+7Ch] [ebp-E0h]
  int v66; // [esp+80h] [ebp-DCh]
  BOOL v67; // [esp+84h] [ebp-D8h]
  struct tagRECT Rect; // [esp+88h] [ebp-D4h] BYREF
  int v69; // [esp+98h] [ebp-C4h] BYREF
  int v70; // [esp+9Ch] [ebp-C0h]
  LONG v71; // [esp+A0h] [ebp-BCh]
  LONG bottom; // [esp+A4h] [ebp-B8h]
  signed int v73; // [esp+A8h] [ebp-B4h]
  _WORD *v74; // [esp+ACh] [ebp-B0h]
  int v75; // [esp+B0h] [ebp-ACh]
  int v76; // [esp+B4h] [ebp-A8h]
  LONG left; // [esp+B8h] [ebp-A4h] BYREF
  LONG top; // [esp+BCh] [ebp-A0h]
  LONG v79; // [esp+C0h] [ebp-9Ch]
  LONG v80; // [esp+C4h] [ebp-98h]
  int v81; // [esp+C8h] [ebp-94h]
  struct tagPOINT Point; // [esp+CCh] [ebp-90h] BYREF
  struct tagRECT v83; // [esp+D4h] [ebp-88h] BYREF
  _DWORD *v84; // [esp+E4h] [ebp-78h]
  _DWORD *v85; // [esp+E8h] [ebp-74h]
  LONG v86; // [esp+ECh] [ebp-70h]
  unsigned int v87; // [esp+F0h] [ebp-6Ch]
  _DWORD *v88; // [esp+F4h] [ebp-68h]
  HWND v89; // [esp+F8h] [ebp-64h] BYREF
  RECT v90; // [esp+FCh] [ebp-60h] BYREF
  int v91; // [esp+10Ch] [ebp-50h] BYREF
  int v92; // [esp+110h] [ebp-4Ch]
  LONG v93; // [esp+114h] [ebp-48h]
  LONG v94; // [esp+118h] [ebp-44h]
  _DWORD v95[4]; // [esp+11Ch] [ebp-40h] BYREF
  _DWORD v96[2]; // [esp+12Ch] [ebp-30h] BYREF
  LONG v97; // [esp+134h] [ebp-28h]
  int v98; // [esp+138h] [ebp-24h]
  _DWORD v99[4]; // [esp+13Ch] [ebp-20h] BYREF
  struct tagRECT v100; // [esp+14Ch] [ebp-10h] BYREF

  GetClientRect(hWnd, &Rect); /*0x61c6a7*/
  ScreenDialogToClient(hWnd, &v83); /*0x61c6b8*/
  right = Rect.right - 2 * dword_AC1DF0; /*0x61c6da*/
  Rect.bottom -= 2 * dword_AC1DF0; /*0x61c6e3*/
  v83.right -= dword_AC1DF0; /*0x61c6fb*/
  v83.top += dword_AC1DF0; /*0x61c702*/
  v5 = 0; /*0x61c710*/
  Rect.right = right; /*0x61c714*/
  v83.left += dword_AC1DF0; /*0x61c718*/
  v83.bottom -= dword_AC1DF0; /*0x61c71c*/
  v89 = hWnd; /*0x61c723*/
  v85 = 0; /*0x61c72a*/
  if ( dword_AC1B04 ) /*0x61c731*/
  {
    v6 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v89) & ((1 << dword_AC1B0C) - 1))); /*0x61c755*/
    if ( v6 ) /*0x61c75a*/
    {
      while ( *v6 != v89 ) /*0x61c765*/
      {
        v6 = (HWND *)v6[129]; /*0x61c767*/
        if ( !v6 ) /*0x61c76f*/
          goto LABEL_7; /*0x61c76f*/
      }
      v5 = v6 + 1; /*0x61c777*/
      v85 = v6 + 1; /*0x61c77a*/
    }
LABEL_7:
    right = Rect.right; /*0x61c781*/
  }
  if ( !v5 ) /*0x61c787*/
    return 0; /*0x61c787*/
  v60 = v5[64] != 0; /*0x61c79c*/
  v7 = v5[59]; /*0x61c7a7*/
  v8 = v5[60]; /*0x61c7ad*/
  v9 = v5[61]; /*0x61c7b3*/
  v75 = v5[58]; /*0x61c7b9*/
  v10 = v5[62]; /*0x61c7bd*/
  v66 = v7; /*0x61c7c3*/
  v11 = v5[63]; /*0x61c7c7*/
  v61 = v8; /*0x61c7cf*/
  v76 = v9; /*0x61c7d3*/
  v65 = v10; /*0x61c7d7*/
  v67 = v11; /*0x61c7db*/
  if ( !v8 ) /*0x61c7df*/
    v61 = 100; /*0x61c7e1*/
  v12 = 0; /*0x61c7f3*/
  v81 = 0; /*0x61c7f7*/
  v74 = (_WORD *)(right - Rect.left); /*0x61c7fb*/
  v73 = 0; /*0x61c805*/
  v64 = 0; /*0x61c80c*/
  v62 = Rect.bottom - Rect.top - 44; /*0x61c810*/
  v84 = (_DWORD *)(v61 + 1); /*0x61c81d*/
  v63 = Math::RoundToInt((double)v62); /*0x61c841*/
  if ( v63 <= 14 ) /*0x61c847*/
    v63 = 14; /*0x61c849*/
  v13 = v62 - v63; /*0x61c859*/
  v62 -= v63; /*0x61c85e*/
  if ( v62 <= 1 ) /*0x61c862*/
  {
    v13 = 1; /*0x61c864*/
    v62 = 1; /*0x61c869*/
  }
  v14 = Msg; /*0x61c86d*/
  if ( Msg < 0x400 || Msg == 1189 ) /*0x61c882*/
  {
    if ( v66 ) /*0x61c88e*/
    {
      GetCursorPos(&Point); /*0x61c8b8*/
      ScreenToClient(hWnd, &Point); /*0x61c8cb*/
      v12 = Point.y - v63 / 2; /*0x61c8e0*/
      v81 = v12; /*0x61c8e5*/
      if ( v12 < 22 ) /*0x61c8e9*/
      {
        v12 = 22; /*0x61c8eb*/
        v81 = 22; /*0x61c8f0*/
      }
      if ( Rect.bottom - v63 - 22 < v12 ) /*0x61c8ff*/
      {
        v12 = Rect.bottom - v63 - 22; /*0x61c901*/
        v81 = v12; /*0x61c903*/
      }
      right = Rect.right; /*0x61c90b*/
      v14 = Msg; /*0x61c911*/
      v73 = v12 + v63; /*0x61c918*/
      v64 = 5; /*0x61c929*/
      v9 = v61 * (v12 - 22) / v62; /*0x61c931*/
      v76 = v9; /*0x61c933*/
    }
    else
    {
      v12 = v9 * v13 / v61 + Rect.top + 22; /*0x61c89c*/
      v81 = v12; /*0x61c8a6*/
      v73 = v12 + v63; /*0x61c8aa*/
    }
  }
  if ( v14 > 0xE9 ) /*0x61c93d*/
  {
    if ( v14 <= 0x202 ) /*0x61d185*/
    {
      if ( v14 != 514 ) /*0x61d18b*/
      {
        if ( v14 == 275 ) /*0x61d198*/
        {
          GetCursorPos(&Point); /*0x61d21a*/
          ScreenToClient(hWnd, &Point); /*0x61d22d*/
          v65 = 0; /*0x61d239*/
          v67 = 0; /*0x61d23f*/
          if ( v75 && Point.x > Rect.right - (int)v74 ) /*0x61d255*/
          {
            if ( Point.y >= 22 ) /*0x61d25e*/
            {
              if ( Point.y > Rect.bottom - 22 ) /*0x61d297*/
              {
                v67 = v66 == 0; /*0x61d29f*/
                if ( v9 + 1 <= v61 ) /*0x61d2b0*/
                {
                  v64 = 1; /*0x61d2b2*/
                  ++v9; /*0x61d2ba*/
                }
              }
            }
            else
            {
              v65 = v66 == 0; /*0x61d266*/
              if ( v9 ) /*0x61d270*/
              {
                v64 = 0; /*0x61d27e*/
                --v9; /*0x61d282*/
                SetTimer(hWnd, 0, 0x19u, 0); /*0x61d283*/
                goto LABEL_154; /*0x61d289*/
              }
            }
          }
          SetTimer(hWnd, 0, 0x19u, 0); /*0x61d2c8*/
LABEL_154:
          v56 = 0; /*0x61d522*/
          if ( v9 != v5[61] || v61 != v5[60] ) /*0x61d53a*/
          {
            if ( v5[2] ) /*0x61d53c*/
              v56 = 1; /*0x61d543*/
          }
          v57 = v66; /*0x61d54c*/
          v5[58] = v75; /*0x61d550*/
          v5[59] = v57; /*0x61d55a*/
          v58 = v65; /*0x61d560*/
          v5[60] = v61; /*0x61d564*/
          v59 = v67; /*0x61d56a*/
          v5[61] = v9; /*0x61d570*/
          v5[62] = v58; /*0x61d576*/
          v5[63] = v59; /*0x61d57c*/
          if ( v56 ) /*0x61d582*/
          {
            SendMessageA((HWND)v5[2], 0x115u, (unsigned __int16)v64 | ((unsigned __int16)v9 << 16), (LPARAM)hWnd); /*0x61d5aa*/
            InvalidateRect(hWnd, 0, 0); /*0x61d5bc*/
          }
          return 0; /*0x61d5c5*/
        }
        if ( v14 != 512 ) /*0x61d19f*/
        {
          if ( v14 != 513 ) /*0x61d1a2*/
            goto LABEL_154; /*0x61d1a2*/
LABEL_129:
          if ( v14 == 513 ) /*0x61d389*/
          {
            v75 = 1; /*0x61d392*/
            SetCapture(hWnd); /*0x61d39b*/
            SetTimer(hWnd, 0, 0x1F4u, 0); /*0x61d3b2*/
          }
          else
          {
            v75 = 0; /*0x61d3c7*/
            v66 = 0; /*0x61d3cb*/
            KillTimer(hWnd, 0); /*0x61d3cf*/
            ReleaseCapture(); /*0x61d3d5*/
            if ( v60 ) /*0x61d3e1*/
              SetCapture((HWND)v5[2]); /*0x61d3e7*/
          }
          v86 = (unsigned __int16)lParam; /*0x61d3fc*/
          v53 = HIWORD(lParam); /*0x61d40d*/
          v87 = HIWORD(lParam); /*0x61d415*/
          v54 = 1; /*0x61d41c*/
          if ( Msg == 515 ) /*0x61d421*/
            v54 = 2; /*0x61d423*/
          v67 = 0; /*0x61d42a*/
          v65 = 0; /*0x61d42e*/
          x = Rect.right - (_DWORD)v74; /*0x61d440*/
          Point.x = Rect.right - (_DWORD)v74; /*0x61d446*/
          v76 = v54; /*0x61d44a*/
          while ( 1 ) /*0x61d454*/
          {
            if ( v86 > x ) /*0x61d45b*/
            {
              if ( v53 < 22 && v9 ) /*0x61d468*/
              {
                v65 = 1; /*0x61d46a*/
                v64 = 0; /*0x61d472*/
                --v9; /*0x61d47a*/
              }
              else if ( v53 <= Rect.bottom - 22 || v9 + 1 > v61 ) /*0x61d490*/
              {
                if ( v53 < v12 || v53 >= v73 ) /*0x61d4ab*/
                {
                  v12 = v87 - v63 / 2; /*0x61d4d6*/
                  if ( v12 < 22 ) /*0x61d4db*/
                    v12 = 22; /*0x61d4dd*/
                  if ( Rect.bottom - v63 - 22 < v12 ) /*0x61d4eb*/
                    v12 = Rect.bottom - v63 - 22; /*0x61d4ed*/
                  v53 = v87; /*0x61d4fe*/
                  v73 = v12 + v63; /*0x61d505*/
                  v64 = 5; /*0x61d509*/
                  v9 = v61 * (v12 - 22) / v62; /*0x61d511*/
                }
                else if ( Msg == 513 ) /*0x61d4b8*/
                {
                  v66 = 1; /*0x61d4ba*/
                }
              }
              else
              {
                ++v9; /*0x61d497*/
                v67 = 1; /*0x61d499*/
                v64 = 1; /*0x61d49d*/
              }
            }
            if ( !--v76 ) /*0x61d51c*/
              break; /*0x61d51c*/
            x = Point.x; /*0x61d450*/
          }
          goto LABEL_154; /*0x61d51c*/
        }
        if ( v66 ) /*0x61d1b3*/
        {
          v90.top = Rect.top; /*0x61d1c1*/
          v90.right = right; /*0x61d1d3*/
          v90.bottom = Rect.bottom; /*0x61d1ee*/
          v90.left = right - (_DWORD)v74; /*0x61d1f5*/
          InvalidateRect(hWnd, &v90, 0); /*0x61d1fc*/
        }
        if ( (wParam & 1) != 0 ) /*0x61d20a*/
          goto LABEL_154; /*0x61d20a*/
      }
      v75 = 0; /*0x61d2db*/
      v66 = 0; /*0x61d2df*/
      if ( v65 || v67 ) /*0x61d2e9*/
        InvalidateRect(hWnd, 0, 0); /*0x61d2f7*/
      v65 = 0; /*0x61d308*/
      v67 = 0; /*0x61d30c*/
      KillTimer(hWnd, 0); /*0x61d310*/
      ReleaseCapture(); /*0x61d316*/
      if ( v60 ) /*0x61d322*/
        SetCapture((HWND)v5[2]); /*0x61d328*/
      v64 = 8; /*0x61d32e*/
      goto LABEL_154; /*0x61d336*/
    }
    if ( v14 != 515 ) /*0x61d342*/
    {
      if ( v14 == 1234 ) /*0x61d349*/
      {
        v5[64] = lParam != 0; /*0x61d378*/
      }
      else if ( v14 == 1265 ) /*0x61d34e*/
      {
        *((_BYTE *)v5 + 205) = lParam == 1; /*0x61d35f*/
      }
      goto LABEL_154; /*0x61d365*/
    }
    goto LABEL_129; /*0x61d342*/
  }
  if ( v14 == 233 ) /*0x61c943*/
  {
    v9 = *(_DWORD *)(lParam + 20); /*0x61d173*/
    v61 = *(_DWORD *)(lParam + 12); /*0x61d176*/
    goto LABEL_154; /*0x61d17a*/
  }
  switch ( v14 ) /*0x61c960*/
  {
    case 0xFu: /*0x61c960*/
      if ( *((_BYTE *)v5 + 188) ) /*0x61ca3b*/
      {
        ValidateRect(hWnd, 0); /*0x61ca4f*/
        goto LABEL_154; /*0x61ca55*/
      }
      if ( v5[8] ) /*0x61ca5a*/
        return 0; /*0x61ca5f*/
      bottom = Rect.bottom; /*0x61ca74*/
      v80 = Rect.bottom; /*0x61ca78*/
      v19 = 0; /*0x61ca83*/
      v69 = 0; /*0x61ca86*/
      v70 = 0; /*0x61ca8a*/
      v71 = right; /*0x61ca8e*/
      left = v83.left; /*0x61ca92*/
      top = v83.top; /*0x61ca96*/
      v79 = right; /*0x61ca9a*/
      Parent = GetParent(hWnd); /*0x61ca9e*/
      v62 = (int)Parent; /*0x61caa6*/
      v84 = 0; /*0x61caaa*/
      if ( !Parent ) /*0x61cab1*/
        goto LABEL_51; /*0x61cab1*/
      if ( !dword_AC1B04 ) /*0x61cabb*/
        goto LABEL_51; /*0x61cabb*/
      v21 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v62) & ((1 << dword_AC1B0C) - 1))); /*0x61cadc*/
      Parent = (HWND)v62; /*0x61cadf*/
      if ( !v21 ) /*0x61cae5*/
        goto LABEL_51; /*0x61cae5*/
      while ( *v21 != v62 ) /*0x61cae9*/
      {
        v21 = (_DWORD *)v21[129]; /*0x61caeb*/
        if ( !v21 ) /*0x61caf3*/
          goto LABEL_51; /*0x61caf3*/
      }
      v19 = v21 + 1; /*0x61cafb*/
      v84 = v21 + 1; /*0x61cafe*/
LABEL_51:
      ScreenDialogToClient(Parent, &v100); /*0x61cb05*/
      v92 = v70; /*0x61cb1f*/
      v91 = v69; /*0x61cb2a*/
      v93 = v71; /*0x61cb33*/
      v94 = bottom; /*0x61cb3a*/
      if ( v19 && v19[4] ) /*0x61cb43*/
      {
        v91 = v83.left + v69 - v100.left; /*0x61cb67*/
        v92 += v83.top - v100.top; /*0x61cb79*/
      }
      v22 = v5[4]; /*0x61cb80*/
      if ( v22 ) /*0x61cb85*/
      {
        v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 124))(v22); /*0x61cb89*/
        if ( v23 != Rect.right /*0x61cba1*/
          || (v24 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[4] + 128))(v5[4]), v24 != Rect.bottom) )
        {
          v25 = (void (__thiscall ***)(_DWORD, int))v5[4]; /*0x61cba3*/
          if ( v25 ) /*0x61cba8*/
            (**v25)(v25, 1); /*0x61cbae*/
          v5[4] = 0; /*0x61cbb0*/
        }
      }
      if ( !v5[4] ) /*0x61cbb7*/
      {
        v26 = __2_YAPAXI_Z(0x20u); /*0x61cbc9*/
        if ( v26 ) /*0x61cbd0*/
        {
          v27 = Rect.bottom; /*0x61cbd2*/
          v28 = Rect.right; /*0x61cbd6*/
          v26[2] = Rect.bottom; /*0x61cbda*/
          v26[1] = v28; /*0x61cbe2*/
          v26[3] = 0; /*0x61cbeb*/
          *v26 = &XSurface_Vtable; /*0x61cbf2*/
          v26[4] = 2; /*0x61cbf8*/
          Buffer::Init(v26 + 5, 0, 2 * v28 * v27); /*0x61cbff*/
          *v26 = &BSurface_Vtable; /*0x61cc04*/
        }
        else
        {
          v26 = 0; /*0x61cc0c*/
        }
        v5[4] = v26; /*0x61cc0e*/
        v88 = v26; /*0x61cc18*/
        ++g_GameScreenState; /*0x61cc21*/
        if ( v19 ) /*0x61cc27*/
        {
          v29 = v19[4]; /*0x61cc29*/
          if ( v29 ) /*0x61cc2e*/
            (*(void (__thiscall **)(_DWORD *, int *, int, int *, _DWORD, int))(*v26 + 8))(v26, &v69, v29, &v91, 0, 1); /*0x61cc46*/
        }
        v30 = Rect.bottom * Rect.right; /*0x61cc4f*/
        v31 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v26 + 92))(v26, 0, 0); /*0x61cc5c*/
        Point.x = (LONG)v31; /*0x61cc61*/
        if ( v30 > 0 ) /*0x61cc65*/
        {
          v74 = v31; /*0x61cc6b*/
          v63 = v30; /*0x61cc6f*/
          while ( 1 ) /*0x61cc88*/
          {
            v32 = *v31; /*0x61cc88*/
            LOBYTE(v86) = *((_BYTE *)v5 + 200); /*0x61cc8b*/
            v33 = 255 - (unsigned __int8)v86; /*0x61ccb1*/
            v34 = ((unsigned __int8)v86 * HIWORD(g_ScreenSaverState) /*0x61ccf3*/
                 + v33 * (unsigned int)(unsigned __int16)(v32 & HIWORD(g_ScreenSaverState))) >> 8;
            LOWORD(v34) = HIWORD(g_ScreenSaverState) & v34; /*0x61ccf6*/
            g_GameScreenFlags = (unsigned __int8)v86; /*0x61ccff*/
            g_GameScreenConfig = v33; /*0x61cd0a*/
            v31 = v74 + 1; /*0x61cd14*/
            v35 = (((unsigned __int8)v86 * (unsigned __int16)g_CreditsScreenState /*0x61cd1a*/
                  + v33 * (unsigned int)(unsigned __int16)(v32 & g_CreditsScreenState)) >> 8)
                | v34
                | g_ScreenSaverState
                & (((unsigned __int8)v86 * (unsigned __int16)g_ScreenSaverState
                  + v33 * (unsigned int)(unsigned __int16)(v32 & g_ScreenSaverState)) >> 8);
            v37 = v63 - 1; /*0x61cd1c*/
            v36 = v63 == 1; /*0x61cd1c*/
            *v74 = v35; /*0x61cd1d*/
            v74 = v31; /*0x61cd21*/
            v63 = v37; /*0x61cd25*/
            if ( v36 ) /*0x61cd29*/
              break; /*0x61cd29*/
            v5 = v85; /*0x61cc75*/
          }
          v26 = v88; /*0x61cd2f*/
          v31 = (_WORD *)Point.x; /*0x61cd36*/
          v5 = v85; /*0x61cd3a*/
          v12 = v81; /*0x61cd41*/
        }
        if ( v31 ) /*0x61cd47*/
          (*(void (__thiscall **)(_DWORD *))(*v26 + 96))(v26); /*0x61cd4d*/
      }
      if ( v84 ) /*0x61cd5b*/
      {
        v38 = v84[4]; /*0x61cd5d*/
        if ( v38 ) /*0x61cd62*/
          (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61cd7d*/
            DSurface_Alternate,
            &left,
            v38,
            &v91,
            0,
            1);
      }
      v39 = dword_AC4624; /*0x61cd80*/
      if ( dword_AC4624 != -1 ) /*0x61cd88*/
        v39 = (BYTE1(dword_AC4624) >> g_BitMask_Blue << g_BitMask_Green) /*0x61cdd1*/
            | (BYTE2(dword_AC4624) >> g_BitMask_Red << g_BitShift_Blue)
            | ((int)(unsigned __int8)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red);
      if ( *((_BYTE *)v5 + 205) ) /*0x61cdd5*/
      {
        v39 = dword_AC1DD8; /*0x61cddf*/
        if ( dword_AC1DD8 != -1 ) /*0x61cde7*/
          v39 = (BYTE1(dword_AC1DD8) >> g_BitMask_Blue << g_BitMask_Green) /*0x61ce30*/
              | (BYTE2(dword_AC1DD8) >> g_BitMask_Red << g_BitShift_Blue)
              | ((int)(unsigned __int8)dword_AC1DD8 >> g_BitShift_Green_0 << g_BitShift_Red);
      }
      DrawDialogGradient((int *)DSurface_Alternate, &left, 2, v39); /*0x61ce3f*/
      v69 = v83.left; /*0x61ce57*/
      v96[0] = v83.left; /*0x61ce5b*/
      v70 = v12 + v83.top; /*0x61ce6b*/
      v98 = v73 - v12; /*0x61ce6f*/
      v80 = v73 - v12; /*0x61ce76*/
      bottom = v73 - v12; /*0x61ce7a*/
      v40 = *((_BYTE *)v5 + 205); /*0x61ce7e*/
      v96[1] = v12 + v83.top; /*0x61ce86*/
      v97 = Rect.right; /*0x61ce8d*/
      left = v83.left; /*0x61ce94*/
      top = v12 + v83.top; /*0x61ce98*/
      v79 = Rect.right; /*0x61ce9c*/
      v71 = Rect.right; /*0x61cea0*/
      v69 = 0; /*0x61cea4*/
      v70 = v12; /*0x61cea8*/
      if ( v40 ) /*0x61ceac*/
        v41 = HashTable::Find(g_DialogHashTable, aGsbgripmPcx, 0); /*0x61ceb3*/
      else
        v41 = HashTable::Find(g_DialogHashTable, aSbgripmPcx, 0); /*0x61cebf*/
      v42 = v41; /*0x61cec4*/
      if ( v41 ) /*0x61cec8*/
        v97 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 124))(v41); /*0x61ced1*/
      Surface::TileBlit(v96, DSurface_Alternate, v42, 0, 0); /*0x61ceee*/
      v43 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 124))(v42); /*0x61cefa*/
      v95[2] = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 128))(v42); /*0x61cf06*/
      v44 = *((_BYTE *)v5 + 205); /*0x61cf0d*/
      v95[0] = 0; /*0x61cf15*/
      v95[1] = 0; /*0x61cf1c*/
      v95[3] = v43; /*0x61cf23*/
      if ( v44 ) /*0x61cf2b*/
        v45 = HashTable::Find(g_DialogHashTable, aGsbgriptPcx, 0); /*0x61cf32*/
      else
        v45 = HashTable::Find(g_DialogHashTable, aSbgriptPcx, 0); /*0x61cf3e*/
      v46 = v45; /*0x61cf43*/
      if ( v45 ) /*0x61cf47*/
        v80 = (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 128))(v45); /*0x61cf53*/
      (*(void (__thiscall **)(int, LONG *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61cf70*/
        DSurface_Alternate,
        &left,
        v46,
        v95,
        0,
        1);
      if ( *((_BYTE *)v5 + 205) ) /*0x61cf73*/
        v47 = HashTable::Find(g_DialogHashTable, aGsbgripbPcx, 0); /*0x61cf83*/
      else
        v47 = HashTable::Find(g_DialogHashTable, aSbgripbPcx, 0); /*0x61cf8f*/
      v48 = v47; /*0x61cf94*/
      if ( v47 ) /*0x61cf98*/
      {
        v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 128))(v47); /*0x61cf9e*/
        top = v83.top + v73 - v49; /*0x61cfb3*/
      }
      (*(void (__thiscall **)(int, LONG *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61cfd0*/
        DSurface_Alternate,
        &left,
        v48,
        v95,
        0,
        1);
      v99[2] = Rect.right; /*0x61cfe8*/
      v79 = Rect.right; /*0x61cfef*/
      v71 = Rect.right; /*0x61cff3*/
      v99[1] = v83.top; /*0x61cffb*/
      v50 = v5[4]; /*0x61d003*/
      top = v83.top; /*0x61d006*/
      v99[0] = v83.left; /*0x61d01e*/
      v99[3] = 22; /*0x61d025*/
      left = v83.left; /*0x61d02c*/
      v80 = 22; /*0x61d030*/
      bottom = 22; /*0x61d034*/
      v69 = 0; /*0x61d038*/
      v70 = 0; /*0x61d03c*/
      (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61d047*/
        DSurface_Alternate,
        &left,
        v50,
        &v69,
        0,
        1);
      v51 = v65; /*0x61d055*/
      Scrollbar_Draw(!v65, 2, dword_AC1890, dword_AC1890, dword_AC1890, dword_AC1890); /*0x61d06e*/
      DrawScrollArrowUI((int *)DSurface_Alternate, v99, 1, v51, *((_BYTE *)v5 + 205)); /*0x61d08a*/
      v90.left = v83.left; /*0x61d09f*/
      left = v83.left; /*0x61d0a6*/
      v90.top = v83.bottom - 22; /*0x61d0c0*/
      v90.right = Rect.right; /*0x61d0c7*/
      v90.bottom = 22; /*0x61d0ce*/
      top = v83.bottom - 22; /*0x61d0d5*/
      v79 = Rect.right; /*0x61d0d9*/
      v80 = 22; /*0x61d0dd*/
      v71 = Rect.right; /*0x61d0e1*/
      bottom = 22; /*0x61d0e5*/
      v69 = 0; /*0x61d0e9*/
      v70 = Rect.bottom - 22; /*0x61d0ed*/
      (*(void (__thiscall **)(int, LONG *, _DWORD, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61d10a*/
        DSurface_Alternate,
        &left,
        v5[4],
        &v69,
        0,
        1);
      v52 = v67; /*0x61d114*/
      Scrollbar_Draw(!v67, 2, dword_AC1890, dword_AC1890, dword_AC1890, dword_AC1890); /*0x61d131*/
      DrawScrollArrowUI((int *)DSurface_Alternate, &v90, 0, v52, *((_BYTE *)v5 + 205)); /*0x61d14c*/
      ValidateRect(hWnd, 0); /*0x61d15a*/
      v9 = v76; /*0x61d160*/
      goto LABEL_154; /*0x61d164*/
    case 0x14u: /*0x61c960*/
      return 0;
    case 0x84u: /*0x61c960*/
    case 0x87u: /*0x61c960*/
      v16 = 0; /*0x61c9b7*/
      if ( !dword_AC1B4C ) /*0x61c9bb*/
        return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c9bb*/
      v17 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x61c9df*/
      if ( !v17 ) /*0x61c9e4*/
        return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c9e4*/
      break; /*0x61c9e4*/
    case 0xE0u: /*0x61c960*/
      if ( wParam <= v61 && wParam > 0 ) /*0x61c98b*/
        v9 = wParam; /*0x61c991*/
      goto LABEL_154; /*0x61c993*/
    case 0xE1u: /*0x61c960*/
      return v9; /*0x61c973*/
    case 0xE2u: /*0x61c960*/
      v61 = lParam; /*0x61c9a1*/
      if ( v9 > (int)lParam ) /*0x61c9a5*/
        v9 = lParam; /*0x61c9ab*/
      goto LABEL_154; /*0x61c9ad*/
    default:
      goto LABEL_154;
  }
  while ( *(HWND *)v17 != hWnd ) /*0x61c9ef*/
  {
    v17 = *(_DWORD *)(v17 + 8); /*0x61c9f1*/
    if ( !v17 ) /*0x61c9f6*/
      return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c9f6*/
  }
  v18 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v17 + 4); /*0x61c9fe*/
  if ( v18 ) /*0x61ca03*/
    v16 = *v18; /*0x61ca05*/
  return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c967*/
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
  if ( !dword_AC1B04 ) /*0x61d6ef*/
    return 0; /*0x61d6ef*/
  result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x61d714*/
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
        ++g_GameScreenState; /*0x61d847*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD *, _DWORD, int))(*v12 + 8))( /*0x61d860*/
          v12,
          v16,
          DSurface_Alternate,
          v15,
          0,
          1);
      }
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61d87d*/
        DSurface_Alternate,
        v15,
        v6[4],
        v16,
        0,
        1);
      UI_Helper_6217E0(255 >> g_BitShift_Green_0 << g_BitShift_Red, (v6[60] << 16) / (v6[59] - v6[58])); /*0x61d8e3*/
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



// ==== 0x0061D950  TabControl::DlgProc  this=TabControl  sig=csp ====
int __stdcall TabControl_DlgProc(HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam)
{
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // edx
  signed int v7; // ebp
  LRESULT v8; // esi
  signed int v9; // ebx
  unsigned int v10; // eax
  signed int v11; // ecx
  int v12; // eax
  LRESULT (__stdcall *v13)(HWND, UINT, WPARAM, LPARAM); // esi
  int v14; // eax
  LRESULT (__stdcall **v15)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v16; // ebp
  HWND v17; // ecx
  int v18; // eax
  int v19; // eax
  int v21; // ebp
  _DWORD *v22; // esi
  LONG bottom; // eax
  LONG right; // edx
  int v25; // edx
  int v26; // esi
  LONG v27; // ebp
  int v28; // esi
  int v29; // esi
  int v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // esi
  int v34; // eax
  _DWORD *v35; // eax
  LRESULT (__stdcall *v36)(HWND, UINT, WPARAM, LPARAM); // esi
  int v37; // eax
  int v38; // eax
  LRESULT (__stdcall **v39)(HWND, UINT, WPARAM, LPARAM); // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  HWND Parent; // eax
  int v44; // [esp+3Ch] [ebp-168h]
  int v45; // [esp+64h] [ebp-140h]
  LONG v46; // [esp+64h] [ebp-140h]
  LONG v47; // [esp+64h] [ebp-140h]
  int v48; // [esp+64h] [ebp-140h]
  char v49; // [esp+6Bh] [ebp-139h]
  int lpPrevWndFunc; // [esp+6Ch] [ebp-138h]
  LRESULT (__stdcall *lpPrevWndFunca)(HWND, UINT, WPARAM, LPARAM); // [esp+6Ch] [ebp-138h]
  signed int v52; // [esp+70h] [ebp-134h]
  int v53; // [esp+74h] [ebp-130h]
  unsigned int v54; // [esp+78h] [ebp-12Ch]
  int v55; // [esp+7Ch] [ebp-128h]
  int v56; // [esp+7Ch] [ebp-128h]
  int v57; // [esp+80h] [ebp-124h]
  struct tagRECT v58; // [esp+84h] [ebp-120h] BYREF
  struct tagRECT v59; // [esp+94h] [ebp-110h] BYREF
  int v60; // [esp+A4h] [ebp-100h]
  LONG v61; // [esp+A8h] [ebp-FCh] BYREF
  LONG v62; // [esp+ACh] [ebp-F8h]
  int v63; // [esp+B0h] [ebp-F4h]
  int v64; // [esp+B4h] [ebp-F0h]
  struct tagPOINT Point; // [esp+B8h] [ebp-ECh] BYREF
  LONG left; // [esp+C0h] [ebp-E4h]
  LONG top; // [esp+C4h] [ebp-E0h]
  int v68; // [esp+C8h] [ebp-DCh]
  int v69; // [esp+CCh] [ebp-D8h]
  LONG v70; // [esp+D0h] [ebp-D4h]
  LRESULT v71; // [esp+D4h] [ebp-D0h]
  int v72; // [esp+D8h] [ebp-CCh]
  signed int v73; // [esp+DCh] [ebp-C8h]
  HWND v74; // [esp+E0h] [ebp-C4h] BYREF
  struct tagRECT v75; // [esp+E4h] [ebp-C0h] BYREF
  struct tagRECT Rect; // [esp+F4h] [ebp-B0h] BYREF
  RECT v77; // [esp+104h] [ebp-A0h] BYREF
  int v78[4]; // [esp+114h] [ebp-90h] BYREF
  _DWORD v79[4]; // [esp+124h] [ebp-80h] BYREF
  struct tagRECT v80; // [esp+134h] [ebp-70h] BYREF
  int v81[4]; // [esp+144h] [ebp-60h] BYREF
  struct tagRECT v82; // [esp+154h] [ebp-50h] BYREF
  wchar_t Buffer[32]; // [esp+164h] [ebp-40h] BYREF

  v49 = 1; /*0x61d96a*/
  GetClientRect(hWnd, &Rect); /*0x61d96f*/
  ScreenDialogToClient(hWnd, &v82); /*0x61d983*/
  v4 = 0; /*0x61d994*/
  v53 = 50; /*0x61d996*/
  v74 = hWnd; /*0x61d9a0*/
  if ( dword_AC1B04 ) /*0x61d9a7*/
  {
    v5 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v74) & ((1 << dword_AC1B0C) - 1))); /*0x61d9cb*/
    if ( v5 ) /*0x61d9d0*/
    {
      while ( (HWND)*v5 != v74 ) /*0x61d9db*/
      {
        v5 = (_DWORD *)v5[129]; /*0x61d9dd*/
        if ( !v5 ) /*0x61d9e5*/
          goto LABEL_7; /*0x61d9e5*/
      }
      v4 = v5 + 1; /*0x61d9ed*/
    }
  }
LABEL_7:
  if ( !v4 ) /*0x61d9f2*/
    return 0; /*0x61d9f2*/
  v6 = v4[59]; /*0x61da04*/
  v7 = v4[60]; /*0x61da0a*/
  v8 = v4[62]; /*0x61da10*/
  v9 = v4[61]; /*0x61da16*/
  lpPrevWndFunc = v4[63]; /*0x61da1c*/
  v10 = v4[65]; /*0x61da20*/
  v60 = v4[58]; /*0x61da26*/
  v11 = v4[64]; /*0x61da2a*/
  v57 = v6; /*0x61da32*/
  v73 = v7; /*0x61da36*/
  v71 = v8; /*0x61da3d*/
  v52 = v11; /*0x61da44*/
  v54 = v10; /*0x61da48*/
  if ( !v10 ) /*0x61da4c*/
    v53 = 0; /*0x61da4e*/
  v12 = Rect.right - Rect.left - v53 - 13; /*0x61da68*/
  v45 = v12; /*0x61da6e*/
  if ( v12 <= 1 ) /*0x61da72*/
  {
    v12 = 1; /*0x61da74*/
    v45 = 1; /*0x61da79*/
  }
  if ( !v7 ) /*0x61da7f*/
  {
    v13 = 0; /*0x61da8a*/
    lpPrevWndFunca = 0; /*0x61da8e*/
    if ( dword_AC1B4C ) /*0x61da92*/
    {
      v14 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x61dab6*/
      if ( v14 ) /*0x61dabb*/
      {
        while ( *(HWND *)v14 != hWnd ) /*0x61dac6*/
        {
          v14 = *(_DWORD *)(v14 + 8); /*0x61dac8*/
          if ( !v14 ) /*0x61dacd*/
            goto LABEL_20; /*0x61dacd*/
        }
        v15 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v14 + 4); /*0x61dad5*/
        if ( v15 ) /*0x61dada*/
        {
          lpPrevWndFunca = *v15; /*0x61dade*/
          v13 = *v15; /*0x61dae2*/
        }
      }
    }
LABEL_20:
    v16 = CallWindowProcA(v13, hWnd, 0x402u, 0, 0); /*0x61dae4*/
    v8 = CallWindowProcA(v13, hWnd, 0x401u, 0, 0); /*0x61db16*/
    v7 = v16 - v8; /*0x61db2a*/
    v71 = v8; /*0x61db2e*/
    v73 = v7; /*0x61db35*/
    v9 = CallWindowProcA(lpPrevWndFunca, hWnd, 0x400u, 0, 0) - v8; /*0x61db44*/
    lpPrevWndFunc = v9 * v45 / v7; /*0x61db4e*/
    v4[63] = lpPrevWndFunc; /*0x61db6c*/
    v12 = v45; /*0x61db72*/
    v4[60] = v7; /*0x61db76*/
    v4[61] = v9; /*0x61db7c*/
    v4[62] = v8; /*0x61db82*/
    v4[64] = v52; /*0x61db88*/
    v4[65] = v54; /*0x61db8e*/
  }
  if ( !v52 ) /*0x61db9a*/
  {
    v53 = 50; /*0x61dba1*/
    v52 = 1; /*0x61dba9*/
    v54 = 1; /*0x61dbad*/
  }
  if ( v57 ) /*0x61dbb7*/
  {
    GetCursorPos(&Point); /*0x61dbe7*/
    ScreenToClient(hWnd, &Point); /*0x61dbfa*/
    v18 = Point.x - 6; /*0x61dc04*/
    if ( Point.x - 6 < 1 ) /*0x61dc0a*/
      v18 = 1; /*0x61dc0c*/
    if ( Rect.right - v53 - 12 < v18 ) /*0x61dc23*/
      v18 = Rect.right - v53 - 12; /*0x61dc25*/
    v19 = (v7 + 1) * (v18 - 1) / v45; /*0x61dc2f*/
    if ( v19 >= v7 ) /*0x61dc35*/
      v19 = v7; /*0x61dc37*/
    v9 = v52 * ((v8 + v19) / v52) - v8; /*0x61dc4b*/
    v17 = hWnd; /*0x61dc4d*/
    lpPrevWndFunc = v9 * v45 / v7; /*0x61dc5a*/
    v72 = lpPrevWndFunc + 1; /*0x61dc5f*/
    v55 = lpPrevWndFunc + 13; /*0x61dc69*/
    v12 = v45; /*0x61dc6d*/
  }
  else
  {
    v72 = Rect.left + lpPrevWndFunc + 1; /*0x61dbc8*/
    v55 = Rect.left + lpPrevWndFunc + 13; /*0x61dbd2*/
    v17 = hWnd; /*0x61dbd6*/
  }
  if ( Msg > 0x202 ) /*0x61dc7e*/
  {
    if ( Msg > 0x406 ) /*0x61e45f*/
    {
      switch ( Msg ) /*0x61e5d1*/
      {
        case 0x4ABu: /*0x61e5d1*/
          v52 = lParam; /*0x61e605*/
          break;
        case 0x4ACu: /*0x61e5d1*/
          v54 = lParam; /*0x61e5f8*/
          break;
        case 0x4AEu: /*0x61e5d1*/
          v4[66] = wParam == 0; /*0x61e5e9*/
          break;
      }
      goto LABEL_118; /*0x61e5ef*/
    }
    if ( Msg == 1030 ) /*0x61e465*/
    {
      v8 = (unsigned __int16)lParam; /*0x61e5a3*/
      v7 = HIWORD(lParam) - (unsigned __int16)lParam; /*0x61e5ac*/
      if ( v9 > v7 ) /*0x61e5b0*/
        v9 = HIWORD(lParam) - (unsigned __int16)lParam; /*0x61e5b2*/
      if ( v9 < (unsigned __int16)lParam ) /*0x61e5b6*/
        v9 = (unsigned __int16)lParam; /*0x61e5b8*/
      v49 = 0; /*0x61e5c0*/
      lpPrevWndFunc = v9 * v12 / v7; /*0x61e5c5*/
      goto LABEL_118; /*0x61e5c9*/
    }
    if ( Msg != 515 ) /*0x61e473*/
    {
      if ( Msg == 1024 ) /*0x61e47b*/
        return v52 * ((v8 + v9) / v52); /*0x61e4c4*/
      if ( Msg == 1029 ) /*0x61e480*/
      {
        if ( (int)(lParam - v8) <= v7 && (int)(lParam - v8) >= 0 ) /*0x61e495*/
          v9 = lParam - v8; /*0x61e497*/
        v49 = 0; /*0x61e49f*/
        lpPrevWndFunc = v9 * v12 / v7; /*0x61e4a4*/
      }
      goto LABEL_118; /*0x61e4a8*/
    }
    v17 = hWnd; /*0x61e4c7*/
    goto LABEL_92; /*0x61e4c7*/
  }
  if ( Msg == 514 ) /*0x61dc84*/
  {
LABEL_80:
    v60 = 0; /*0x61e444*/
    v57 = 0; /*0x61e44a*/
    ReleaseCapture(); /*0x61e44e*/
    goto LABEL_118; /*0x61e454*/
  }
  if ( Msg > 0x84 ) /*0x61dc90*/
  {
    if ( Msg == 135 ) /*0x61e349*/
      goto LABEL_72; /*0x61e349*/
    if ( Msg != 512 ) /*0x61e350*/
    {
      if ( Msg != 513 ) /*0x61e353*/
      {
LABEL_118:
        v42 = 0; /*0x61e609*/
        if ( v9 != v4[61] || v7 != v4[60] || v8 != v4[62] ) /*0x61e623*/
          v42 = 1; /*0x61e625*/
        v4[58] = v60; /*0x61e632*/
        v4[59] = v57; /*0x61e63c*/
        v4[63] = lpPrevWndFunc; /*0x61e646*/
        v4[60] = v7; /*0x61e652*/
        v4[61] = v9; /*0x61e658*/
        v4[62] = v8; /*0x61e65e*/
        v4[64] = v52; /*0x61e664*/
        v4[65] = v54; /*0x61e66a*/
        if ( v42 ) /*0x61e670*/
        {
          InvalidateRect(hWnd, 0, 0); /*0x61e67e*/
          Parent = GetParent(hWnd); /*0x61e68c*/
          SendMessageA(Parent, 0x114u, ((unsigned __int16)(v9 + v8) << 16) | 5, (LPARAM)hWnd); /*0x61e6af*/
          if ( v49 == 1 && !v4[66] ) /*0x61e6bc*/
            PlayVocClass(*((_DWORD *)dword_8871E0 + 451), 0x2000, 1.0, 0); /*0x61e6dd*/
        }
        return 0; /*0x61e6e5*/
      }
LABEL_92:
      if ( Msg == 513 ) /*0x61e4d4*/
      {
        v60 = 1; /*0x61e4d7*/
        SetCapture(v17); /*0x61e4df*/
      }
      else
      {
        v60 = 0; /*0x61e4e7*/
        ReleaseCapture(); /*0x61e4ef*/
      }
      if ( (int)HIWORD(lParam) > Rect.bottom - 18 ) /*0x61e512*/
      {
        if ( (unsigned __int16)lParam < v72 || (unsigned __int16)lParam >= v55 ) /*0x61e525*/
        {
          v40 = (unsigned __int16)lParam - 6; /*0x61e545*/
          if ( v40 < 1 ) /*0x61e54b*/
            v40 = 1; /*0x61e54d*/
          if ( Rect.right - v53 - 12 < v40 ) /*0x61e564*/
            v40 = Rect.right - v53 - 12; /*0x61e566*/
          v41 = (v7 + 1) * (v40 - 1) / v45; /*0x61e570*/
          if ( v41 >= v7 ) /*0x61e576*/
            v41 = v7; /*0x61e578*/
          v9 = v52 * ((v8 + v41) / v52) - v8; /*0x61e58c*/
          lpPrevWndFunc = v9 * v45 / v7; /*0x61e594*/
        }
        else if ( Msg == 513 ) /*0x61e532*/
        {
          v57 = 1; /*0x61e538*/
        }
      }
      goto LABEL_118; /*0x61e540*/
    }
    if ( v57 ) /*0x61e364*/
    {
      v77 = Rect; /*0x61e374*/
      InvalidateRect(v17, &v77, 0); /*0x61e3a9*/
    }
    if ( (wParam & 1) != 0 ) /*0x61e3b7*/
      goto LABEL_118; /*0x61e3b7*/
    goto LABEL_80; /*0x61e3b7*/
  }
  if ( Msg != 132 ) /*0x61dc96*/
  {
    switch ( Msg ) /*0x61dc9f*/
    {
      case 0xAu: /*0x61dc9f*/
        InvalidateRect(v17, 0, 0); /*0x61e337*/
        break;
      case 0xFu: /*0x61dc9f*/
        ScreenDialogToClient(v17, &v75); /*0x61dcc9*/
        left = v75.left; /*0x61dce3*/
        v21 = v75.right - v75.left; /*0x61dce7*/
        v69 = v75.bottom - v75.top; /*0x61dcf4*/
        top = v75.top; /*0x61dd00*/
        v68 = v75.right - v75.left; /*0x61dd04*/
        Point.x = GetWindowLongA(hWnd, -16); /*0x61dd0e*/
        if ( !v4[4] ) /*0x61dd12*/
        {
          ScreenDialogToClient(hWnd, &v80); /*0x61dd2b*/
          GetClientRect(hWnd, &v59); /*0x61dd3d*/
          v22 = __2_YAPAXI_Z(0x20u); /*0x61dd4a*/
          if ( v22 ) /*0x61dd51*/
          {
            bottom = v59.bottom; /*0x61dd53*/
            right = v59.right; /*0x61dd57*/
            v22[3] = 0; /*0x61dd5b*/
            *v22 = &XSurface_Vtable; /*0x61dd62*/
            v22[1] = right + 1; /*0x61dd6e*/
            v22[2] = bottom + 1; /*0x61dd76*/
            v22[4] = 2; /*0x61dd7f*/
            Buffer::Init(v22 + 5, 0, 2 * (bottom + 1) * (right + 1)); /*0x61dd86*/
            *v22 = &BSurface_Vtable; /*0x61dd8b*/
          }
          else
          {
            v22 = 0; /*0x61dd93*/
          }
          v4[4] = v22; /*0x61dd95*/
          ++g_GameScreenState; /*0x61dda9*/
          v61 = v80.left; /*0x61ddb0*/
          v58.left = 0; /*0x61ddbb*/
          v58.top = 0; /*0x61ddbf*/
          v58.bottom = v59.bottom + 1; /*0x61ddc9*/
          v64 = v59.bottom + 1; /*0x61ddcd*/
          v62 = v80.top; /*0x61ddd7*/
          v58.right = v59.right + 1; /*0x61dde8*/
          v63 = v59.right + 1; /*0x61ddec*/
          (*(void (__thiscall **)(_DWORD *, struct tagRECT *, int, LONG *, _DWORD, int))(*v22 + 8))( /*0x61ddf6*/
            v22,
            &v58,
            DSurface_Alternate,
            &v61,
            0,
            1);
          DSurface::FillRectWithColor(0, v4[50]); /*0x61de08*/
        }
        if ( v4[4] ) /*0x61de0d*/
        {
          ScreenDialogToClient(hWnd, &v58); /*0x61de21*/
          GetClientRect(hWnd, &v80); /*0x61de36*/
          v61 = 0; /*0x61de4e*/
          v59.left = v58.left; /*0x61de59*/
          v59.top = v58.top; /*0x61de61*/
          v25 = v4[4]; /*0x61de6a*/
          v64 = v80.bottom + 1; /*0x61de6d*/
          v59.bottom = v80.bottom + 1; /*0x61de71*/
          v62 = 0; /*0x61de7c*/
          v63 = v80.right + 1; /*0x61de80*/
          v59.right = v80.right + 1; /*0x61de84*/
          (*(void (__thiscall **)(int, struct tagRECT *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61de8f*/
            DSurface_Alternate,
            &v59,
            v25,
            &v61,
            0,
            1);
        }
        if ( v54 ) /*0x61de96*/
        {
          v26 = HashTable::Find(g_DialogHashTable, aTrofmPcx, 0); /*0x61dead*/
          v64 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 128))(v26); /*0x61dec7*/
          v46 = v68 - v53 + left + 1; /*0x61ded8*/
          v61 = v46; /*0x61dedc*/
          v27 = top - 1; /*0x61dee9*/
          v62 = top - 1; /*0x61def7*/
          v63 = v53; /*0x61defb*/
          Surface::TileBlit(&v61, DSurface_Alternate, v26, 0, 0); /*0x61deff*/
          v28 = HashTable::Find(g_DialogHashTable, aTroflPcx, 0); /*0x61df15*/
          v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 128))(v28); /*0x61df21*/
          v59.right = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 124))(v28); /*0x61df30*/
          v59.left = v46; /*0x61df38*/
          v59.bottom = v70; /*0x61df3c*/
          v58.bottom = v70; /*0x61df40*/
          v58.top = 0; /*0x61df54*/
          v58.left = 0; /*0x61df58*/
          v58.right = v59.right; /*0x61df5d*/
          v59.top = v27; /*0x61df6b*/
          (*(void (__thiscall **)(int, struct tagRECT *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)DSurface_Alternate /*0x61df78*/
                                                                                            + 8))(
            DSurface_Alternate,
            &v59,
            v28,
            &v58,
            0,
            1);
          v29 = HashTable::Find(g_DialogHashTable, aTrofrPcx, 0); /*0x61df8c*/
          v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 128))(v29); /*0x61df98*/
          v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 124))(v29); /*0x61dfa0*/
          v31 = *(_DWORD *)v29; /*0x61dfa3*/
          v70 = v30; /*0x61dfa5*/
          v32 = (*(int (__thiscall **)(int))(v31 + 124))(v29); /*0x61dfab*/
          v61 = v68 + left - v32 + 1; /*0x61dfcb*/
          v63 = v70; /*0x61dfd5*/
          v58.top = 0; /*0x61dfd9*/
          v58.left = 0; /*0x61dfdd*/
          v58.right = v70; /*0x61dfe2*/
          v62 = v27; /*0x61dff1*/
          v64 = v47; /*0x61dff5*/
          v58.bottom = v47; /*0x61dff9*/
          (*(void (__thiscall **)(int, LONG *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61e005*/
            DSurface_Alternate,
            &v61,
            v29,
            &v58,
            0,
            1);
          v21 = v68; /*0x61e008*/
        }
        v79[0] = v72 + v75.left; /*0x61e023*/
        v79[2] = v55 - v72; /*0x61e037*/
        v79[1] = v75.top; /*0x61e04c*/
        v79[3] = v75.bottom - v75.top; /*0x61e053*/
        v33 = HashTable::Find(g_DialogHashTable, aTrakgripPcx, 0); /*0x61e05f*/
        v77.left = 0; /*0x61e063*/
        v77.top = 0; /*0x61e06a*/
        v77.right = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 124))(v33); /*0x61e078*/
        v77.bottom = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 128))(v33); /*0x61e09b*/
        (*(void (__thiscall **)(int, _DWORD *, int, RECT *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61e0ad*/
          DSurface_Alternate,
          v79,
          v33,
          &v77,
          0,
          1);
        v56 = Point.x & 0x8000000; /*0x61e0b9*/
        if ( (Point.x & 0x8000000) != 0 ) /*0x61e0bd*/
          DSurface::FillRectWithColor(0, dword_AC4898); /*0x61e0d4*/
        if ( dword_AC4624 == -1 ) /*0x61e0e1*/
        {
          v48 = -1; /*0x61e0e3*/
        }
        else
        {
          v21 = v68; /*0x61e10b*/
          Point.x = BYTE2(dword_AC4624) >> g_BitMask_Red << g_BitShift_Blue; /*0x61e117*/
          v48 = ((int)(unsigned __int8)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e141*/
              | (BYTE1(dword_AC4624) >> g_BitMask_Blue << g_BitMask_Green)
              | Point.x;
        }
        if ( v56 ) /*0x61e14b*/
        {
          if ( dword_AC1CA8 == -1 ) /*0x61e155*/
          {
            v48 = -1; /*0x61e157*/
          }
          else
          {
            v21 = v68; /*0x61e17f*/
            Point.x = BYTE2(dword_AC1CA8) >> g_BitMask_Red << g_BitShift_Blue; /*0x61e18b*/
            v48 = ((int)(unsigned __int8)dword_AC1CA8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e1b5*/
                | (BYTE1(dword_AC1CA8) >> g_BitMask_Blue << g_BitMask_Green)
                | Point.x;
          }
        }
        v81[0] = left; /*0x61e1c9*/
        v81[1] = top; /*0x61e1d2*/
        v81[2] = v21 - v53; /*0x61e1e6*/
        v81[3] = v69; /*0x61e1fd*/
        DrawDialogGradient((int *)DSurface_Alternate, v81, 2, v48); /*0x61e204*/
        v78[3] = v69; /*0x61e218*/
        v78[1] = top; /*0x61e223*/
        v78[0] = left + v21 + (v54 != 0) + 1 - v53; /*0x61e251*/
        v78[2] = v53 - ((v54 != 0) + 1); /*0x61e262*/
        DrawDialogGradient((int *)DSurface_Alternate, v78, 2, v48); /*0x61e269*/
        if ( v54 ) /*0x61e274*/
        {
          swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)(v52 * ((v71 + v9) / v52))); /*0x61e29c*/
          v34 = dword_AC18A4; /*0x61e2a5*/
          if ( v56 ) /*0x61e2af*/
            v34 = dword_AC1CB4; /*0x61e2b1*/
          v59.left = v75.left; /*0x61e2c4*/
          v59.right = v75.right; /*0x61e2d5*/
          v44 = v34; /*0x61e2e0*/
          v35 = (_DWORD *)v4[25]; /*0x61e2e1*/
          v59.top = v75.top; /*0x61e2e4*/
          v59.left = v75.right - 49; /*0x61e2ef*/
          v59.bottom = v75.bottom; /*0x61e2f8*/
          PrintFontLayout(DSurface_Alternate, Buffer, &v59, v35, v44, 5, 12, 0, 0, 0); /*0x61e30a*/
        }
        ValidateRect(hWnd, 0); /*0x61e319*/
        v7 = v73; /*0x61e31f*/
        v8 = v71; /*0x61e326*/
        break;
      case 0x14u: /*0x61dc9f*/
        return 0; /*0x61dcbf*/
    }
    goto LABEL_118; /*0x61dcad*/
  }
LABEL_72:
  v36 = 0; /*0x61e3c2*/
  if ( dword_AC1B4C ) /*0x61e3cb*/
  {
    v37 = dword_AC1B60(&hWnd); /*0x61e3d4*/
    v17 = hWnd; /*0x61e3e7*/
    v38 = *((_DWORD *)dword_AC1B48 + (v37 & ((1 << dword_AC1B54) - 1))); /*0x61e3f6*/
    if ( v38 ) /*0x61e3fb*/
    {
      while ( *(HWND *)v38 != hWnd ) /*0x61e3ff*/
      {
        v38 = *(_DWORD *)(v38 + 8); /*0x61e401*/
        if ( !v38 ) /*0x61e406*/
          return CallWindowProcA(v36, v17, Msg, wParam, lParam); /*0x61e406*/
      }
      v39 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v38 + 4); /*0x61e40e*/
      if ( v39 ) /*0x61e413*/
        v36 = *v39; /*0x61e415*/
    }
  }
  return CallWindowProcA(v36, v17, Msg, wParam, lParam); /*0x61dcb3*/
}


// ==== 0x0061E700  GroupLabel::WndProc  this=GroupLabel  sig=csp ====
LRESULT __userpurge GroupLabel::WndProc@<eax>(GroupLabel *this, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int v5; // ebx
  HWND v6; // edi
  LRESULT (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // esi
  int v8; // eax
  GroupLabel *v9; // ecx
  LRESULT (__stdcall **v10)(HWND, UINT, WPARAM, LPARAM); // eax
  int *v12; // edi
  unsigned __int16 *v13; // ebx
  Text *v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // eax
  unsigned __int8 v18; // al
  int v19; // esi
  int v20; // ebp
  int v21; // edi
  int v22; // ebp
  int v23; // ebp
  int v24; // [esp+3Ch] [ebp-CCh]
  int *v25; // [esp+4Ch] [ebp-BCh] BYREF
  unsigned int v26; // [esp+50h] [ebp-B8h]
  int v27; // [esp+54h] [ebp-B4h] BYREF
  struct tagRECT Rect; // [esp+58h] [ebp-B0h] BYREF
  int *v29; // [esp+68h] [ebp-A0h]
  int v30; // [esp+6Ch] [ebp-9Ch]
  wchar_t *String; // [esp+70h] [ebp-98h]
  int v32; // [esp+74h] [ebp-94h]
  int v33; // [esp+78h] [ebp-90h] BYREF
  int v34; // [esp+7Ch] [ebp-8Ch] BYREF
  int v35; // [esp+80h] [ebp-88h] BYREF
  _DWORD v36[3]; // [esp+84h] [ebp-84h] BYREF
  int v37; // [esp+90h] [ebp-78h] BYREF
  _DWORD v38[3]; // [esp+94h] [ebp-74h] BYREF
  _DWORD v39[2]; // [esp+A0h] [ebp-68h] BYREF
  _DWORD v40[2]; // [esp+A8h] [ebp-60h] BYREF
  int v41; // [esp+B0h] [ebp-58h] BYREF
  _DWORD v42[3]; // [esp+B4h] [ebp-54h] BYREF
  _DWORD v43[2]; // [esp+C0h] [ebp-48h] BYREF
  _DWORD v44[2]; // [esp+C8h] [ebp-40h] BYREF
  _DWORD v45[2]; // [esp+D0h] [ebp-38h] BYREF
  _DWORD v46[2]; // [esp+D8h] [ebp-30h] BYREF
  int v47; // [esp+E0h] [ebp-28h] BYREF
  _DWORD v48[2]; // [esp+E4h] [ebp-24h] BYREF
  _DWORD v49[2]; // [esp+ECh] [ebp-1Ch] BYREF
  int v50[4]; // [esp+F4h] [ebp-14h] BYREF
  int v51; // [esp+104h] [ebp-4h] BYREF

  v6 = hWnd; /*0x61e709*/
  if ( hWnd == (HWND)15 )
  {
    v27 = (int)this; /*0x61e7d2*/
    v32 = 0; /*0x61e7dd*/
    v25 = 0; /*0x61e7e1*/
    HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], &v27, &v25); /*0x61e7e5*/
    v12 = v25; /*0x61e7ea*/
    if ( v25 )
    {
      v24 = v5; /*0x61e7f6*/
      v13 = (unsigned __int16 *)v25[10]; /*0x61e7f7*/
      if ( v13 ) /*0x61e7fc*/
      {
        String = (wchar_t *)v25[10]; /*0x61e7fe*/
      }
      else
      {
        String = &g_TypeClass_DefaultString; /*0x61e804*/
        v13 = &g_TypeClass_DefaultString; /*0x61e80c*/
      }
      ScreenDialogToClient((HWND)this, &Rect); /*0x61e81b*/
      v14 = (Text *)v12[25]; /*0x61e828*/
      v15 = Rect.right - Rect.left; /*0x61e82b*/
      v16 = Rect.top + v14[7].Text_field_00 / 2; /*0x61e843*/
      v30 = v16; /*0x61e84c*/
      Text::Layout(v14, v13, &v35, &v51, Rect.right - Rect.left); /*0x61e850*/
      v50[2] = v15; /*0x61e856*/
      v50[1] = Rect.top; /*0x61e869*/
      v50[0] = Rect.left + 10; /*0x61e87e*/
      v50[3] = Rect.bottom - Rect.top; /*0x61e885*/
      v17 = wcslen(v13); /*0x61e88c*/
      DrawTextRendererTextAligned( /*0x61e8a6*/
        stru_AC1858.HashTable_field_0x4C,
        0,
        v50,
        v13,
        v17,
        0,
        0,
        (int *)DSurface_Alternate,
        0);
      v18 = g_DialogPool.__pad_208[204]; /*0x61e8ab*/
      v25 = *(int **)&g_DialogPool.__pad_208[208]; /*0x61e8c5*/
      v26 = *(_DWORD *)&g_DialogPool.__pad_208[204]; /*0x61e8c9*/
      if ( *(_DWORD *)&g_DialogPool.__pad_208[204] == -1 ) /*0x61e8cd*/
      {
        v34 = -1; /*0x61e8cf*/
      }
      else
      {
        v16 = v30; /*0x61e8e5*/
        v27 = BYTE2(v26) >> g_BitMask_Red << g_BitShift_Blue; /*0x61e8f9*/
        v34 = ((int)(unsigned __int8)v26 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e925*/
            | ((unsigned __int8)g_DialogPool.__pad_208[205] >> g_BitMask_Blue << g_BitMask_Green)
            | v27;
        v18 = v26; /*0x61e929*/
      }
      if ( *(_DWORD *)&g_DialogPool.__pad_208[208] == -1 ) /*0x61e930*/
      {
        v33 = -1; /*0x61e932*/
      }
      else
      {
        v16 = v30; /*0x61e950*/
        v33 = ((int)(unsigned __int8)g_DialogPool.__pad_208[208] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e97a*/
            | ((unsigned __int8)g_DialogPool.__pad_208[209] >> g_BitMask_Blue << g_BitMask_Green)
            | (BYTE2(v25) >> g_BitMask_Red << g_BitShift_Blue);
        v18 = v26; /*0x61e97e*/
      }
      v19 = 0; /*0x61e995*/
      v27 = (((int)((*(_WORD *)&g_DialogPool.__pad_208[208] & 0xFF00) + (v26 & 0xFF00)) / 2) & 0xFF00) /*0x61e9e5*/
          + (((int)((*(_DWORD *)&g_DialogPool.__pad_208[208] & 0xFF0000) + (v26 & 0xFF0000)) / 2) & 0xFF0000)
          + (unsigned __int8)(((unsigned __int8)g_DialogPool.__pad_208[208] + v18) / 2);
      v29 = &v33; /*0x61e9ed*/
      v25 = &v34; /*0x61e9f1*/
      while ( 1 )
      {
        v20 = *v29; /*0x61ea04*/
        if ( wcslen(String) ) /*0x61ea06*/
        {
          v21 = v19 + v16; /*0x61ea54*/
          v48[1] = v21; /*0x61ea57*/
          v36[0] = v19 + Rect.left; /*0x61ea64*/
          v48[0] = Rect.left + 8; /*0x61ea68*/
          v36[1] = v21; /*0x61ea7d*/
          (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61ea88*/
            DSurface_Alternate,
            v36,
            v48,
            v20,
            v24);
          if ( v36[0] ) /*0x61ea91*/
            v33 = 12; /*0x61ea93*/
          v40[0] = Rect.bottom - v19 - 1; /*0x61eaac*/
          v40[1] = v21; /*0x61eabe*/
          v41 = v33 + Rect.top + v36[0]; /*0x61eac2*/
          v42[0] = v21; /*0x61eac6*/
          (*((void (__thiscall **)(DSurface *, int *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61ead1*/
            DSurface_Alternate,
            &v41,
            v40,
            v20);
        }
        else
        {
          v21 = v19 + v16; /*0x61ea1c*/
          v38[0] = v19 + Rect.left; /*0x61ea22*/
          v42[0] = Rect.right - v19 - 1; /*0x61ea26*/
          v42[1] = v21; /*0x61ea36*/
          v38[1] = v21; /*0x61ea3d*/
          (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61ea48*/
            DSurface_Alternate,
            v38,
            v42,
            v20,
            v24);
        }
        v44[1] = v21 + 1; /*0x61eae4*/
        v46[1] = (char *)v29 - v19 - 1; /*0x61eaeb*/
        v46[0] = v19 + Rect.top; /*0x61eb01*/
        v44[0] = v19 + Rect.top; /*0x61eb08*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61eb19*/
          DSurface_Alternate,
          v44,
          v46,
          v20);
        v22 = *(_DWORD *)v26; /*0x61eb2d*/
        v37 = Rect.bottom - v19 - 1; /*0x61eb2f*/
        v38[0] = (char *)v29 - v19 - 1; /*0x61eb3b*/
        v39[0] = v19 + Rect.top; /*0x61eb48*/
        v39[1] = v38[0]; /*0x61eb51*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, int *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61eb5c*/
          DSurface_Alternate,
          v39,
          &v37,
          v22);
        v45[1] = v21; /*0x61eb60*/
        v43[0] = Rect.bottom - v19 - 1; /*0x61eb77*/
        v45[0] = v43[0]; /*0x61eb7e*/
        v43[1] = (char *)v29 - v19 - 2; /*0x61eb85*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61eba4*/
          DSurface_Alternate,
          v45,
          v43,
          v22);
        v23 = Rect.left == -1
            ? -1
            : ((int)LOBYTE(Rect.left) >> g_BitShift_Green_0 << g_BitShift_Red)
            | (BYTE1(Rect.left) >> g_BitMask_Blue << g_BitMask_Green)
            | (BYTE2(Rect.left) >> g_BitMask_Red << g_BitShift_Blue);
        v48[0] = v21; /*0x61ec0a*/
        v24 = v23; /*0x61ec12*/
        v47 = Rect.bottom - v19 - 1; /*0x61ec13*/
        (*((void (__thiscall **)(DSurface *, int *))DSurface_Alternate->DSurface_field_0x0 + 9))( /*0x61ec24*/
          DSurface_Alternate,
          &v47);
        v49[0] = v19 + Rect.left; /*0x61ec3c*/
        v49[1] = Rect.bottom - v19 - 1; /*0x61ec43*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 9))( /*0x61ec54*/
          DSurface_Alternate,
          v49,
          v23);
        ++v19; /*0x61ec57*/
        ++v29; /*0x61ec67*/
        --v25; /*0x61ec6b*/
        if ( v19 >= 2 ) /*0x61ec6f*/
          break; /*0x61ec6f*/
        v16 = v30; /*0x61e9f7*/
      }
      ValidateRect((HWND)this, 0); /*0x61ec7f*/
    }
    return 0; /*0x61ec88*/
  }
  if ( hWnd == (HWND)20 ) /*0x61e71e*/
    return 1; /*0x61e7be*/
  if ( hWnd == (HWND)133 ) /*0x61e727*/
    return 0; /*0x61e727*/
  v7 = 0; /*0x61e732*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[132] /*0x61e75f*/
    && (v8 = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[128]
                       + 4
                       * ((*(int (__thiscall **)(GroupLabel **))&g_DialogPool.__pad_208[152])(&this)
                        & ((1 << g_DialogPool.__pad_208[140]) - 1)))) != 0 )
  {
    v9 = this; /*0x61e761*/
    while ( *(GroupLabel **)v8 != this ) /*0x61e76a*/
    {
      v8 = *(_DWORD *)(v8 + 8); /*0x61e76c*/
      if ( !v8 ) /*0x61e771*/
        return CallWindowProcA(v7, (HWND)v9, (UINT)v6, Msg, wParam); /*0x61e771*/
    }
    v10 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v8 + 4); /*0x61e779*/
    if ( v10 ) /*0x61e77e*/
      v7 = *v10; /*0x61e780*/
  }
  else
  {
    v9 = this; /*0x61e784*/
  }
  return CallWindowProcA(v7, (HWND)v9, (UINT)v6, Msg, wParam); /*0x61e7a4*/
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
      if ( dword_AC1B04 ) /*0x61edbe*/
      {
        result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v18) & ((1 << dword_AC1B0C) - 1))); /*0x61ede3*/
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
              ++g_GameScreenState; /*0x61ee7e*/
              (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int *, _DWORD, int))(*v14 + 8))( /*0x61ee97*/
                v14,
                v22,
                DSurface_Alternate,
                v19,
                0,
                1);
            }
            v15 = SendMessageA(hWnd, 0x402u, 0, 0); /*0x61eeab*/
            FormatHotkeyDisplayString(v15, String); /*0x61eeb7*/
            v16 = *(_DWORD *)(v10 + 16); /*0x61eebc*/
            if ( v16 ) /*0x61eec1*/
              (*(void (__thiscall **)(int, int *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61eeda*/
                DSurface_Alternate,
                v19,
                v16,
                v22,
                0,
                1);
            DrawDialogGradient((int *)DSurface_Alternate, v19, 2, -1); /*0x61eeeb*/
            if ( wcslen(String) ) /*0x61eef5*/
            {
              Rect.left += 4; /*0x61ef16*/
              Rect.right -= 4; /*0x61ef22*/
              Rect.top += 4; /*0x61ef2c*/
              Rect.bottom -= 4; /*0x61ef30*/
              Surface_Render((int)&Rect, *(_DWORD *)(v10 + 100), dword_AC18A4, 36); /*0x61ef4a*/
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
  if ( dword_AC1B4C && (v6 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x61ecfe*/
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
int __fastcall FormatHotkeyDisplayString(__int16 a1, wchar_t *a2)
{
  int result; // eax
  __int16 v3; // kr1C_2
  UINT v4; // eax
  UINT v5; // eax
  UINT v6; // eax
  UINT v7; // eax
  CHAR String[32]; // [esp+Ch] [ebp-214h] BYREF
  wchar_t Format[250]; // [esp+2Ch] [ebp-1F4h] BYREF

  result = HIBYTE(a1); /*0x61ef7c*/
  v3 = a1; /*0x61ef84*/
  LOBYTE(Format[0]) = 0; /*0x61ef88*/
  *a2 = 0; /*0x61ef8d*/
  if ( (a1 & 0x800) == 0 ) /*0x61ef92*/
  {
    if ( (a1 & 0x400) != 0 ) /*0x61efaa*/
    {
      v4 = MapVirtualKeyA(0x12u, 0); /*0x61efb0*/
      GetKeyNameTextA((v4 << 16) | 0x2000001, String, 32); /*0x61efc2*/
      strcat((char *)Format, String); /*0x61efe8*/
      strcat((char *)Format, asc_835A34); /*0x61f014*/
      LOBYTE(result) = HIBYTE(v3); /*0x61f016*/
      LOBYTE(a1) = v3; /*0x61f021*/
    }
    if ( (result & 2) != 0 ) /*0x61f027*/
    {
      v5 = MapVirtualKeyA(0x11u, 0); /*0x61f02d*/
      GetKeyNameTextA((v5 << 16) | 0x2000001, String, 32); /*0x61f03f*/
      strcat((char *)Format, String); /*0x61f065*/
      strcat((char *)Format, asc_835A34); /*0x61f091*/
      LOBYTE(result) = HIBYTE(v3); /*0x61f093*/
      LOBYTE(a1) = v3; /*0x61f09e*/
    }
    if ( (result & 1) != 0 ) /*0x61f0a4*/
    {
      v6 = MapVirtualKeyA(0x10u, 0); /*0x61f0aa*/
      GetKeyNameTextA((v6 << 16) | 0x2000001, String, 32); /*0x61f0bc*/
      strcat((char *)Format, String); /*0x61f0e2*/
      strcat((char *)Format, asc_835A34); /*0x61f10e*/
      LOBYTE(a1) = v3; /*0x61f117*/
    }
    v7 = MapVirtualKeyA((unsigned __int8)a1, 0); /*0x61f124*/
    GetKeyNameTextA((v7 << 16) | 0x2000001, String, 32); /*0x61f136*/
    strcat((char *)Format, String); /*0x61f15c*/
    return swprintf(a2, (const size_t)g_Str_Trace__hs, Format); /*0x61f174*/
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
  int v54; // ... [20105 chars total]



// ==== 0x00610360  Dialog::DestroyDialogSystem  this=Dialog  sig=csp ====
int __thiscall Dialog::DestroyDialogSystem(Dialog *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *i; // eax
  void *v5; // esi
  int v6; // esi
  HWND *v7; // ecx
  HWND v8; // edi
  double v9; // st7
  HWND *v10; // eax
  void *WindowLongA; // eax
  HWND hWnd; // [esp+Ch] [ebp-20Ch] BYREF
  __int64 v14; // [esp+10h] [ebp-208h] BYREF
  _BYTE v15[512]; // [esp+18h] [ebp-200h] BYREF

  EnumChildWindows((HWND)this, DestroyDialogChildWindow, 0); /*0x610374*/
  hWnd = (HWND)this; /*0x610389*/
  DynamicArray::Resize((DynamicArray *)&g_DialogPool.__pad_208[128], (int *)&hWnd, &v14); /*0x61038d*/
  memset(v15, 0, sizeof(v15)); /*0x6103a3*/
  *(_DWORD *)&v15[104] = 11; /*0x6103a7*/
  *(_DWORD *)&v15[100] = g_FogOfWarState; /*0x6103b2*/
  v2 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x6103b9*/
  if ( v2 ) /*0x6103c3*/
    v3 = unknown_libname_74(v2); /*0x6103c7*/
  else
    v3 = 0; /*0x6103ce*/
  *(_DWORD *)&v15[60] = v3; /*0x6103d0*/
  *(_DWORD *)&v15[64] = 0; /*0x6103e3*/
  *(_DWORD *)&v15[92] = 0; /*0x6103e7*/
  *(_DWORD *)&v15[144] = -1; /*0x6103eb*/
  Dialog::BindGadgetData((Dialog *)&g_DialogPool.__pad_208[56], (int *)&hWnd, v15); /*0x6103f6*/
  if ( *(_DWORD *)&v15[40] ) /*0x610401*/
  {
    __3_YAXPAX_Z(*(void **)&v15[40]); /*0x610404*/
    *(_DWORD *)&v15[40] = 0; /*0x61040c*/
  }
  for ( i = *(_DWORD **)&v15[52]; *(_DWORD *)&v15[52]; i = *(_DWORD **)&v15[52] ) /*0x610416*/
    LinkedList::Remove((LinkedList *)v15, i); /*0x61041d*/
  v5 = *(void **)&v15[60]; /*0x61042a*/
  if ( *(_DWORD *)&v15[60] ) /*0x610430*/
  {
    DeleteAndZero::Alt(*(DeleteAndZero **)&v15[60]); /*0x610434*/
    __3_YAXPAX_Z(v5); /*0x61043a*/
  }
  if ( *(_DWORD *)&g_DialogPool.__pad_0[4] ) /*0x610449*/
  {
    v14 = (unsigned int)(*(_DWORD *)&g_DialogPool.__pad_0[4] - 1); /*0x610456*/
    *(float *)&v14 = (double)v14 / (double)g_DialogPool.Dialog_field_0x8[0]; /*0x610472*/
    v6 = (*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_10[8])(&hWnd) /*0x61048a*/
       & ((1 << SLOBYTE(g_DialogPool.Dialog_field_0xC)) - 1);
    v7 = *(HWND **)(*(_DWORD *)g_DialogPool.__pad_0 + 4 * v6); /*0x610491*/
    if ( v7 ) /*0x610496*/
    {
      if ( *v7 == hWnd ) /*0x6104a4*/
      {
        v8 = v7[2]; /*0x6104a6*/
        __3_YAXPAX_Z(*(void **)(*(_DWORD *)g_DialogPool.__pad_0 + 4 * v6)); /*0x6104aa*/
        v9 = *(float *)&v14; /*0x6104b8*/
        *(_DWORD *)(*(_DWORD *)g_DialogPool.__pad_0 + 4 * v6) = v8; /*0x6104bc*/
        --*(_DWORD *)&g_DialogPool.__pad_0[4]; /*0x6104cb*/
        if ( v9 > *(double *)&g_DialogPool.__pad_10[16] ) /*0x6104d5*/
          goto LABEL_22; /*0x6104d5*/
        goto LABEL_21; /*0x6104d5*/
      }
      v10 = (HWND *)v7[2]; /*0x6104d9*/
      if ( v10 ) /*0x6104de*/
      {
        while ( *v10 != hWnd ) /*0x6104e2*/
        {
          v7 = v10; /*0x6104e4*/
          v10 = (HWND *)v10[2]; /*0x6104e6*/
          if ( !v10 ) /*0x6104eb*/
            goto LABEL_20; /*0x6104eb*/
        }
        v7[2] = v10[2]; /*0x6104f3*/
        --*(_DWORD *)&g_DialogPool.__pad_0[4]; /*0x6104fd*/
        __3_YAXPAX_Z(v10); /*0x610503*/
      }
LABEL_20:
      if ( *(float *)&v14 <= *(double *)&g_DialogPool.__pad_10[16] ) /*0x61051a*/
LABEL_21:
        HashTable::Shrink2((HashTable *)&g_DialogPool); /*0x61051c*/
    }
  }
LABEL_22:
  WindowLongA = (void *)GetWindowLongA(hWnd, -21); /*0x610526*/
  if ( WindowLongA ) /*0x610535*/
    __3_YAXPAX_Z(WindowLongA); /*0x610538*/
  SetWindowLongA(hWnd, -21, 0); /*0x610548*/
  Object::RemoveObjectArray((Object *)hWnd); /*0x610552*/
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

  DynamicArray::Resize(&dword_AC1B48, (int *)&hWnd, &v14); /*0x61058a*/
  memset(v15, 0, sizeof(v15)); /*0x6105a0*/
  v15[26] = (void *)11; /*0x6105a4*/
  v15[25] = (void *)g_FogOfWarState; /*0x6105ac*/
  v2 = __2_YAPAXI_Z(4u); /*0x6105b0*/
  if ( v2 ) /*0x6105bc*/
    v3 = (void *)unknown_libname_74(v2); /*0x6105c0*/
  else
    v3 = 0; /*0x6105c7*/
  v15[15] = v3; /*0x6105c9*/
  v15[16] = 0; /*0x6105df*/
  v15[23] = 0; /*0x6105e3*/
  v15[36] = (void *)-1; /*0x6105e7*/
  Dialog::BindGadgetData(&dword_AC1B00, (int *)&hWnd, (char *)v15); /*0x6105f2*/
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
  if ( unk_AC18C4 ) /*0x610666*/
  {
    v14 = (unsigned int)(unk_AC18C4 - 1); /*0x610671*/
    *(float *)&v14 = (double)v14 / (double)dword_AC18C8; /*0x610691*/
    v7 = dword_AC18D8(&hWnd) & ((1 << dword_AC18CC) - 1); /*0x6106af*/
    v8 = (HWND *)*((_DWORD *)g_DialogPool + v7); /*0x6106b1*/
    if ( v8 ) /*0x6106b6*/
    {
      if ( *v8 == hWnd ) /*0x6106c7*/
      {
        v9 = v8[2]; /*0x6106c9*/
        __3_YAXPAX_Z(*((void **)g_DialogPool + v7)); /*0x6106cd*/
        v10 = *(float *)&v14; /*0x6106db*/
        *((_DWORD *)g_DialogPool + v7) = v9; /*0x6106df*/
        --unk_AC18C4; /*0x6106ee*/
        if ( v10 > dbl_AC18E0 ) /*0x6106f8*/
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
        --unk_AC18C4; /*0x610720*/
        __3_YAXPAX_Z(v11); /*0x610726*/
      }
LABEL_29:
      if ( *(float *)&v14 <= dbl_AC18E0 ) /*0x61073d*/
LABEL_30:
        HashTable::Shrink2(&g_DialogPool); /*0x61073f*/
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
  dword_AC1CB8 = 0u; /*0x6107a2*/
  dword_AC1CC8 = 0; /*0x6107b6*/
  word_AC1CCC = 0; /*0x6107bb*/
  dword_AC1DCC = 0; /*0x6107c1*/
  dword_AC1DD0 = 0; /*0x6107c6*/
  dword_AC1DD4 = 0; /*0x6107cb*/
  return 0; /*0x6107d0*/
}



// ==== 0x006107E0  ObjectClass::method_6107E0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_6107E0(ObjectClass *this)
{
  this->AbstractClass = 0; /*0x6107e4*/
  this->? = 0; /*0x6107e6*/
  this->? = 0; /*0x6107e9*/
  this->? = 0; /*0x6107ec*/
  this->? = 0; /*0x6107ef*/
  LOWORD(this->?) = 0; /*0x6107f2*/
  this->u8_45 = 0; /*0x6107f6*/
  this->u32_46 = 0; /*0x6107fc*/
  this->u32_47 = 0; /*0x610802*/
  return &this->AbstractClass; /*0x610808*/
}



// ==== 0x00610810  sub_610810  this=-  sig=ida-proto ====
char __fastcall sub_610810(int a1, const wchar_t *a2, int a3)
{
  wchar_t *StringCSF; // eax
  int v6; // ecx
  const wchar_t *v8; // [esp+0h] [ebp-30h]
  _DWORD v9[2]; // [esp+10h] [ebp-20h] BYREF
  __int64 v10; // [esp+18h] [ebp-18h]
  __int128 v11; // [esp+20h] [ebp-10h] BYREF

  if ( dword_AC1DCC ) /*0x610829*/
  {
    if ( dword_AC1DD0 != 1 ) /*0x610835*/
    {
      if ( !dword_AC1CC8 ) /*0x61083f*/
      {
LABEL_7:
        dword_AC1CC8 = 0; /*0x6108a9*/
        dword_AC1DCC = 0; /*0x6108af*/
        dword_AC1DD0 = 0; /*0x6108b5*/
        goto LABEL_8; /*0x6108b5*/
      }
      v11 = dword_AC1CB8; /*0x61085b*/
      v9[0] = 0; /*0x610879*/
      v9[1] = 0; /*0x61087d*/
      v10 = *((_QWORD *)&dword_AC1CB8 + 1); /*0x610881*/
      (*(void (__thiscall **)(int, __int128 *, int, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x61088c*/
        g_DSurface_Primary,
        &v11,
        dword_AC1CC8,
        v9,
        0,
        1);
      dword_AC1DD0 = 1; /*0x610894*/
    }
    if ( dword_AC1CC8 ) /*0x6108a2*/
      (**(void (__thiscall ***)(int, int))dword_AC1CC8)(dword_AC1CC8, 1); /*0x6108a7*/
    goto LABEL_7; /*0x6108a7*/
  }
LABEL_8:
  dword_AC48D8 = time(0); /*0x6108bb*/
  StringCSF = GetStringCSF(aGuiTooltip, 0, g_Str_File_ownrdraw_cpp, 7457); /*0x6108da*/
  swprintf(word_AC1CCC, (const size_t)StringCSF, v8); /*0x6108e5*/
  if ( a2 ) /*0x6108ef*/
    wcscpy(word_AC1CCC, a2); /*0x6108f7*/
  *(_QWORD *)&dword_AC1CB8 = *(_QWORD *)a1; /*0x610901*/
  DWORD2(dword_AC1CB8) = *(_DWORD *)(a1 + 8); /*0x610917*/
  v6 = *(_DWORD *)(a1 + 12); /*0x61091c*/
  dword_AC1DCC = 1; /*0x61091f*/
  HIDWORD(dword_AC1CB8) = v6; /*0x610925*/
  dword_AC1DD4 = a3; /*0x61092d*/
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

  if ( !dword_AC1DCC ) /*0x61095d*/
    return 0; /*0x61095f*/
  if ( a1 ) /*0x61096a*/
  {
    if ( dword_AC1CC8 ) /*0x610978*/
      (**(void (__thiscall ***)(int, int))dword_AC1CC8)(dword_AC1CC8, 1); /*0x61097e*/
    dword_AC1CC8 = 0; /*0x610982*/
    v2 = __2_YAPAXI_Z(0x20u); /*0x61098d*/
    if ( v2 ) /*0x610994*/
    {
      v4 = HIDWORD(dword_AC1CB8); /*0x61099b*/
      v3 = DWORD2(dword_AC1CB8); /*0x61099b*/
      v2[1] = DWORD2(dword_AC1CB8); /*0x6109a1*/
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
    dword_AC1CC8 = v5; /*0x6109ef*/
    v9[0] = 0; /*0x6109f5*/
    v9[1] = 0; /*0x6109f9*/
    v10 = *((_QWORD *)&dword_AC1CB8 + 1); /*0x6109fd*/
    (*(void (__thiscall **)(int, _DWORD *, int, __int128 *, _DWORD, int))(*(_DWORD *)v5 + 8))( /*0x610a08*/
      v5,
      v9,
      g_DSurface_Primary,
      &dword_AC1CB8,
      0,
      1);
  }
  v8 = dword_AC1CB8; /*0x610a25*/
  dword_AC1DD0 = 0; /*0x610a32*/
  if ( dword_AC48B0 == -1 ) /*0x610a40*/
    v6 = -1; /*0x610a42*/
  else
    v6 = ((int)(unsigned __int8)dword_AC48B0 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x610a8d*/
       | (BYTE1(dword_AC48B0) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(dword_AC48B0) >> g_BitMask_Red << g_BitShift_Blue);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Primary + 92))(g_DSurface_Primary, 0, 0); /*0x610a9d*/
  (*(void (__thiscall **)(int, __int128 *, int))(*(_DWORD *)g_DSurface_Primary + 20))(g_DSurface_Primary, &v8, v6); /*0x610aae*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_DSurface_Primary + 96))(g_DSurface_Primary); /*0x610ab9*/
  Team_Find((int *)&v8, g_DSurface_Primary, 8, 4); /*0x610aca*/
  v7 = wcslen(word_AC1CCC); /*0x610ae0*/
  DrawTextRendererTextAligned(dword_AC18A4, 0, (int *)&v8, word_AC1CCC, v7, 1, 1, g_DSurface_Primary, 0); /*0x610afb*/
  HIDWORD(v8) -= 2; /*0x610b1e*/
  LODWORD(v8) = v8 + 1; /*0x610b2a*/
  ++DWORD1(v8); /*0x610b2e*/
  DWORD2(v8) -= 2; /*0x610b32*/
  DrawDialogGradient((int *)g_DSurface_Primary, (int *)&v8, 1, -1); /*0x610b36*/
  return 1; /*0x610961*/
}



// ==== 0x00610B50  ObjectClass::method_610B50  this=ObjectClass  sig=csp ====
char sub_610B50(ObjectClass *this)
{
  _DWORD v2[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v3; // [esp+Ch] [ebp-18h]
  _QWORD v4[2]; // [esp+14h] [ebp-10h] BYREF

  if ( !*(_DWORD *)&g_DialogPool.__pad_208[772] ) /*0x610b5d*/
    return 0; /*0x610b5f*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[776] == 1 ) /*0x610b6d*/
    return 0; /*0x610b6f*/
  if ( !*(_DWORD *)&g_DialogPool.__pad_208[512] ) /*0x610b7e*/
    return 0; /*0x610b80*/
  v2[0] = 0; /*0x610b9e*/
  v2[1] = 0; /*0x610ba2*/
  v4[0] = *(_QWORD *)&g_DialogPool.__pad_208[496]; /*0x610bab*/
  v4[1] = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610bc4*/
  v3 = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610bc8*/
  (*((void (__thiscall **)(DSurface *, _QWORD *, _DWORD, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x610bd3*/
   + 2))(
    g_DSurface_Primary,
    v4,
    *(_DWORD *)&g_DialogPool.__pad_208[512],
    v2,
    0,
    1);
  *(_DWORD *)&g_DialogPool.__pad_208[776] = 1; /*0x610bd6*/
  return 1; /*0x610b61*/
}



// ==== 0x00610BF0  ObjectClass::method_610BF0  this=ObjectClass  sig=csp ====
char sub_610BF0(ObjectClass *this)
{
  _DWORD v2[2]; // [esp+4h] [ebp-20h] BYREF
  __int64 v3; // [esp+Ch] [ebp-18h]
  _QWORD v4[2]; // [esp+14h] [ebp-10h] BYREF

  if ( !*(_DWORD *)&g_DialogPool.__pad_208[772] ) /*0x610bfd*/
    return 0; /*0x610c05*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[776] == 1 ) /*0x610c0d*/
    goto LABEL_6; /*0x610c0d*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[512] ) /*0x610c17*/
  {
    v4[0] = *(_QWORD *)&g_DialogPool.__pad_208[496]; /*0x610c35*/
    v4[1] = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610c4f*/
    v2[0] = 0; /*0x610c53*/
    v2[1] = 0; /*0x610c57*/
    v3 = *(_QWORD *)&g_DialogPool.__pad_208[504]; /*0x610c5b*/
    (*((void (__thiscall **)(DSurface *, _QWORD *, _DWORD, _DWORD *, _DWORD, int))g_DSurface_Primary->DSurface_field_0x0 /*0x610c66*/
     + 2))(
      g_DSurface_Primary,
      v4,
      *(_DWORD *)&g_DialogPool.__pad_208[512],
      v2,
      0,
      1);
    *(_DWORD *)&g_DialogPool.__pad_208[776] = 1; /*0x610c69*/
LABEL_6:
    if ( *(_DWORD *)&g_DialogPool.__pad_208[512] ) /*0x610c7c*/
      (***(void (__thiscall ****)(_DWORD, int))&g_DialogPool.__pad_208[512])(*(_DWORD *)&g_DialogPool.__pad_208[512], 1); /*0x610c82*/
  }
  *(_DWORD *)&g_DialogPool.__pad_208[512] = 0; /*0x610c84*/
  *(_DWORD *)&g_DialogPool.__pad_208[772] = 0; /*0x610c8a*/
  *(_DWORD *)&g_DialogPool.__pad_208[776] = 0; /*0x610c90*/
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
  HWND *v50... [47102 chars total]



// ==== 0x00612910  sub_612910  this=-  sig=ida-proto ====
void __cdecl sub_612910()
{
  dword_AC1DE0 = 0; /*0x612915*/
  __3_YAXPAX_Z(dword_AC1DE8); /*0x612920*/
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

  v0 = dword_AC1860; /*0x612930*/
  for ( i = 0; i < dword_AC1860; v0 = dword_AC1860 ) /*0x61293d*/
  {
    v2 = (_DWORD *)*((_DWORD *)stru_AC1858 + i); /*0x612944*/
    while ( v2 ) /*0x612949*/
    {
      v3 = v2; /*0x61294b*/
      v2 = (_DWORD *)v2[3]; /*0x61294d*/
      __3_YAXPAX_Z(v3); /*0x612951*/
    }
    *((_DWORD *)stru_AC1858 + i++) = 0; /*0x612964*/
  }
  v4 = dword_AC1888; /*0x612975*/
  dword_AC185C = 0; /*0x61297b*/
  if ( v0 > dword_AC1888 ) /*0x612987*/
  {
    do /*0x612a3a*/
    {
      if ( byte_AC186C || v0 <= v4 ) /*0x61299d*/
        break; /*0x61299d*/
      v5 = (int *)stru_AC1858; /*0x6129a9*/
      v6 = v0; /*0x6129af*/
      dword_AC1860 = v0 >> 1; /*0x6129b4*/
      --dword_AC1864; /*0x6129c0*/
      stru_AC1858 = __2_YAPAXI_Z(4 * (v0 >> 1)); /*0x6129d9*/
      memset(stru_AC1858, 0, 4 * dword_AC1860); /*0x6129e1*/
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
              v10 = dword_AC1870(v9) & ((1 << dword_AC1864) - 1); /*0x612a05*/
              v11 = *((_DWORD *)stru_AC1858 + v10); /*0x612a0c*/
              *((_DWORD *)stru_AC1858 + v10) = v9; /*0x612a0f*/
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
      v4 = dword_AC1888; /*0x612a2a*/
      v0 = dword_AC1860; /*0x612a30*/
    }
    while ( dword_AC1860 > (unsigned int)dword_AC1888 ); /*0x612a3a*/
  }
  __3_YAXPAX_Z(stru_AC1858); /*0x612a46*/
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
  if ( dword_AC1B4C && (v5 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x612a93*/
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
  if ( dword_AC1B04 && (v8 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x612aff*/
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
  SetTextColor(hdc, dword_AC18A4); /*0x612b30*/
  SetBkMode(v10, 1); /*0x612b39*/
  return GetStockObject(5); /*0x612b47*/
}



// ==== 0x00612B70  TabControl::WndProc  this=TabControl  sig=csp ====
LRESULT __stdcall TabControl_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // ebx
  int v5; // eax
  HWND v6; // ecx
  LRESULT (__stdcall **v7)(HWND, UINT, WPARAM, LPARAM); // eax
  int v8; // edi
  int v9; // esi
  _DWORD *v10; // ebp
  HWND *v11; // eax
  LONG WindowLongA; // eax
  UINT v14; // ebx
  int v15; // ecx
  COLORREF v16; // edi
  LONG v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // esi
  LONG bottom; // edx
  int v21; // ecx
  int v22; // ecx
  void *v23; // ebx
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char v30; // bp
  char v31; // dl
  char v32; // si
  int v33; // eax
  char v34; // di
  int v35; // ebx
  char v36; // cl
  unsigned int v37; // ecx
  int v38; // ebx
  char v39; // cl
  unsigned __int16 v40; // ax
  char v41; // cl
  int *v42; // eax
  int v43; // edx
  int v44; // edi
  unsigned int v45; // edx
  unsigned int v46; // ecx
  LONG *v47; // esi
  int v48; // esi
  int v49; // ebx
  int v50; // edx
  int v51; // ecx
  int v52; // ebp
  int v53; // ebp
  int v54; // ebx
  int v55; // esi
  int v56; // eax
  char v57; // al
  char v58; // [esp+4Bh] [ebp-F1h]
  LRESULT (__stdcall *lpPrevWndFunc)(HWND, UINT, WPARAM, LPARAM); // [esp+4Ch] [ebp-F0h]
  WNDPROC lpPrevWndFunca; // [esp+4Ch] [ebp-F0h]
  int v61; // [esp+50h] [ebp-ECh] BYREF
  int v62; // [esp+54h] [ebp-E8h]
  int v63; // [esp+58h] [ebp-E4h]
  int v64; // [esp+5Ch] [ebp-E0h]
  void *v65; // [esp+60h] [ebp-DCh]
  int v66; // [esp+64h] [ebp-D8h]
  LONG left; // [esp+68h] [ebp-D4h]
  int top; // [esp+6Ch] [ebp-D0h]
  int v69; // [esp+70h] [ebp-CCh]
  LONG v70; // [esp+74h] [ebp-C8h]
  _DWORD v71[2]; // [esp+78h] [ebp-C4h]
  struct tagRECT v72; // [esp+80h] [ebp-BCh] BYREF
  LONG v73; // [esp+90h] [ebp-ACh]
  LONG v74; // [esp+94h] [ebp-A8h] BYREF
  int v75; // [esp+98h] [ebp-A4h]
  int v76; // [esp+9Ch] [ebp-A0h]
  int v77; // [esp+A0h] [ebp-9Ch]
  _DWORD *v78; // [esp+A4h] [ebp-98h]
  LONG v79; // [esp+A8h] [ebp-94h] BYREF
  LONG v80; // [esp+ACh] [ebp-90h]
  int v81; // [esp+B0h] [ebp-8Ch]
  int v82; // [esp+B4h] [ebp-88h]
  struct tagRECT v83; // [esp+B8h] [ebp-84h] BYREF
  int v84[2]; // [esp+C8h] [ebp-74h] BYREF
  int v85; // [esp+D0h] [ebp-6Ch]
  int v86; // [esp+D4h] [ebp-68h]
  HWND v87; // [esp+D8h] [ebp-64h] BYREF
  int v88; // [esp+DCh] [ebp-60h] BYREF
  int v89; // [esp+E0h] [ebp-5Ch]
  int v90; // [esp+E4h] [ebp-58h]
  int v91; // [esp+E8h] [ebp-54h]
  struct tagRECT Rect; // [esp+ECh] [ebp-50h] BYREF
  char Buffer[40]; // [esp+FCh] [ebp-40h] BYREF
  int v94; // [esp+124h] [ebp-18h] BYREF
  _BYTE v95[16]; // [esp+12Ch] [ebp-10h] BYREF

  v4 = 0; /*0x612b7d*/
  lpPrevWndFunc = 0; /*0x612b83*/
  if ( dword_AC1B4C && (v5 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x612bb0*/
  {
    v6 = hWnd; /*0x612bb2*/
    while ( *(HWND *)v5 != hWnd ) /*0x612bbb*/
    {
      v5 = *(_DWORD *)(v5 + 8); /*0x612bbd*/
      if ( !v5 ) /*0x612bc2*/
        goto LABEL_10; /*0x612bc2*/
    }
    v7 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v5 + 4); /*0x612bca*/
    if ( v7 ) /*0x612bcf*/
    {
      v4 = *v7; /*0x612bd1*/
      lpPrevWndFunc = *v7; /*0x612bd3*/
    }
  }
  else
  {
    v6 = hWnd; /*0x612bd9*/
  }
LABEL_10:
  memset(&v83, 0, sizeof(v83)); /*0x612be0*/
  ScreenDialogToClient(v6, &v83); /*0x612c05*/
  left = v83.left; /*0x612c2d*/
  v8 = v83.right - v83.left; /*0x612c31*/
  memset(&Rect, 0, sizeof(Rect)); /*0x612c35*/
  top = v83.top; /*0x612c3c*/
  v9 = v83.bottom - v83.top; /*0x612c40*/
  v69 = v83.right - v83.left; /*0x612c59*/
  v70 = v83.bottom - v83.top; /*0x612c5d*/
  GetClientRect(hWnd, &Rect); /*0x612c68*/
  v10 = 0; /*0x612c6e*/
  v78 = 0; /*0x612c77*/
  v87 = hWnd; /*0x612c7b*/
  if ( dword_AC1B04 ) /*0x612c89*/
  {
    v11 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v87) & ((1 << dword_AC1B0C) - 1))); /*0x612cad*/
    if ( v11 ) /*0x612cb2*/
    {
      while ( *v11 != v87 ) /*0x612cbd*/
      {
        v11 = (HWND *)v11[129]; /*0x612cbf*/
        if ( !v11 ) /*0x612cc7*/
          goto LABEL_16; /*0x612cc7*/
      }
      v10 = v11 + 1; /*0x612ccf*/
      v78 = v11 + 1; /*0x612cd2*/
    }
  }
LABEL_16:
  if ( !v10 ) /*0x612cd8*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, lParam); /*0x612d0b*/
  v66 = v10[58]; /*0x612d1e*/
  WindowLongA = GetWindowLongA(hWnd, -16); /*0x612d22*/
  v14 = Msg; /*0x612d28*/
  v73 = WindowLongA; /*0x612d2f*/
  if ( Msg > 0x113 ) /*0x612d39*/
  {
    if ( Msg == 513 || Msg == 515 ) /*0x613677*/
    {
      if ( *((_BYTE *)v10 + 188) ) /*0x61374b*/
        return 0; /*0x61363c*/
      PlayVocClass(dword_8871E0->ChronoInSound, 0x2000, 1.0, 0); /*0x613771*/
    }
    else if ( Msg == 1244 ) /*0x613682*/
    {
      if ( dword_AC1B04 ) /*0x61368f*/
      {
        v56 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x6136b3*/
        if ( v56 ) /*0x6136b8*/
        {
          while ( *(HWND *)v56 != hWnd ) /*0x6136c3*/
          {
            v56 = *(_DWORD *)(v56 + 516); /*0x6136c5*/
            if ( !v56 ) /*0x6136cd*/
              goto LABEL_99; /*0x6136cd*/
          }
          v10 = (_DWORD *)(v56 + 4); /*0x6136d5*/
        }
      }
LABEL_99:
      v57 = *((_BYTE *)v10 + 196); /*0x6136d8*/
      if ( lParam == 1 ) /*0x6136eb*/
      {
        if ( !v57 ) /*0x6136ef*/
        {
          *((_BYTE *)v10 + 196) = 1; /*0x6136f5*/
          SetTimer(hWnd, 0, 0x3E8u, 0); /*0x61370d*/
        }
      }
      else if ( v57 ) /*0x613717*/
      {
        *((_BYTE *)v10 + 196) = 0; /*0x613719*/
        *((_BYTE *)v10 + 197) = 0; /*0x613720*/
        KillTimer(hWnd, 0); /*0x613731*/
        InvalidateRect(hWnd, 0, 1); /*0x613743*/
      }
    }
  }
  else
  {
    if ( Msg != 275 ) /*0x612d3f*/
    {
      switch ( Msg ) /*0x612d59*/
      {
        case 6u: /*0x612d59*/
        case 8u: /*0x612d59*/
        case 0x21u: /*0x612d59*/
          return 0;
        case 0xFu: /*0x612d59*/
          if ( *((_BYTE *)v10 + 188) ) /*0x612d60*/
          {
            ValidateRect(hWnd, 0); /*0x612d74*/
            return 0; /*0x612d86*/
          }
          v84[1] = top; /*0x612d91*/
          v15 = v10[4]; /*0x612d98*/
          v84[0] = left; /*0x612d9b*/
          v85 = v8; /*0x612da2*/
          v16 = dword_AC18A4; /*0x612da9*/
          v17 = v9; /*0x612db1*/
          v86 = v9; /*0x612db5*/
          v65 = (void *)dword_AC18A4; /*0x612dbc*/
          if ( !v15 ) /*0x612dc0*/
          {
            v18 = __2_YAPAXI_Z(0x20u); /*0x612dc8*/
            v19 = v18; /*0x612dcd*/
            if ( v18 ) /*0x612dd4*/
            {
              bottom = Rect.bottom; /*0x612dd6*/
              v21 = Rect.right + 1; /*0x612de4*/
              v18[3] = 0; /*0x612de5*/
              v18[1] = v21; /*0x612deb*/
              v18[2] = bottom + 1; /*0x612dee*/
              *v18 = &XSurface_Vtable; /*0x612dfb*/
              v18[4] = 2; /*0x612e01*/
              Buffer::Init(v18 + 5, 0, 2 * v21 * (bottom + 1)); /*0x612e08*/
              *v19 = &BSurface_Vtable; /*0x612e0d*/
            }
            else
            {
              v19 = 0; /*0x612e15*/
            }
            v10[4] = v19; /*0x612e17*/
            ++g_GameScreenState; /*0x612e2f*/
            v64 = Rect.bottom + 1; /*0x612e3e*/
            v72.left = v83.left; /*0x612e42*/
            v72.bottom = Rect.bottom + 1; /*0x612e4d*/
            v72.top = v83.top; /*0x612e57*/
            v61 = 0; /*0x612e67*/
            v62 = 0; /*0x612e6b*/
            v63 = Rect.right + 1; /*0x612e6f*/
            v72.right = Rect.right + 1; /*0x612e73*/
            (*(void (__thiscall **)(_DWORD *, int *, int, struct tagRECT *, _DWORD, int))(*v19 + 8))( /*0x612e7d*/
              v19,
              &v61,
              DSurface_Alternate,
              &v72,
              0,
              1);
            v17 = v86; /*0x612e80*/
          }
          v22 = v10[44]; /*0x612e87*/
          if ( v22 ) /*0x612e8f*/
          {
            v23 = 0; /*0x612e95*/
            v24 = 0; /*0x612e97*/
            v71[0] = 0; /*0x612e9c*/
            v65 = 0; /*0x612ea0*/
            lpPrevWndFunca = 0; /*0x612ea4*/
            switch ( v22 ) /*0x612ea8*/
            {
              case 1: /*0x612ea8*/
                v25 = UI_Helper_72E2C0(); /*0x612eaa*/
                v23 = dword_B0FAC4; /*0x612eb3*/
                v24 = v25; /*0x612eb9*/
                v65 = dword_B0FAC4; /*0x612ebb*/
                v71[0] = v25; /*0x612ec2*/
                v26 = 2; /*0x612ec6*/
                if ( (v66 & 1) != 0 ) /*0x612ecb*/
                {
                  v26 = 4; /*0x612ecd*/
                }
                else if ( *((_BYTE *)v10 + 197) ) /*0x612ed7*/
                {
                  v26 = 3; /*0x612ee1*/
                }
                goto LABEL_44; /*0x612ed2*/
              case 2: /*0x612ea8*/
                v27 = UI_Helper_72F4B0(); /*0x612eed*/
                v23 = dword_B0F9EC; /*0x612ef6*/
                v24 = v27; /*0x612efc*/
                v26 = 0; /*0x612efe*/
                v71[0] = v24; /*0x612f03*/
                v65 = dword_B0F9EC; /*0x612f07*/
                if ( (v66 & 1) != 0 ) /*0x612f0b*/
                {
                  v26 = 1; /*0x612f0d*/
LABEL_44:
                  lpPrevWndFunca = (WNDPROC)v26; /*0x612f5b*/
LABEL_45:
                  if ( (v73 & 0x8000000) == 0 ) /*0x612f67*/
                  {
LABEL_55:
                    v42 = Copy8Bytes(&v94, v84); /*0x613138*/
                    v88 = *v42; /*0x61314d*/
                    v89 = v42[1]; /*0x61315d*/
                    v72 = *(struct tagRECT *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)DSurface_Alternate + 120))( /*0x613173*/
                                               DSurface_Alternate,
                                               v95);
                    if ( v24 && v23 ) /*0x613196*/
                      DrawToSurfaceSHP( /*0x6131cd*/
                        DSurface_Alternate,
                        v24,
                        (int)v23,
                        (unsigned int)lpPrevWndFunca,
                        &v88,
                        &v72.left,
                        1024,
                        0,
                        0,
                        0,
                        1000,
                        0,
                        0,
                        0,
                        0,
                        0);
                    goto LABEL_79; /*0x6131d2*/
                  }
                  if ( SessionClass::GetGameSpeed(dword_A8B238) ) /*0x612f72*/
                  {
                    v29 = *((_DWORD *)dword_A8B230 + 3374); /*0x612f85*/
                    if ( !v29 ) /*0x612f8d*/
                    {
                      v30 = g_BitShift_Red; /*0x612f9a*/
                      v31 = g_BitMask_Red; /*0x612fa9*/
                      v32 = g_BitShift_Blue; /*0x612fb1*/
                      v33 = (HIBYTE(word_B0F9FD) >> g_BitMask_Red << g_BitShift_Blue) /*0x612fd3*/
                          | ((unsigned __int8)byte_B0F9FC >> g_BitShift_Green_0 << g_BitShift_Red);
                      v34 = g_BitMask_Green; /*0x612fd5*/
                      v35 = (unsigned __int8)word_B0F9FD >> g_BitMask_Blue; /*0x612fdb*/
                      v36 = g_BitMask_Green; /*0x612fdd*/
LABEL_54:
                      v38 = v35 << v36; /*0x6130c5*/
                      v39 = v30; /*0x6130c7*/
                      v10 = v78; /*0x6130ca*/
                      v40 = v38 | v33; /*0x6130ce*/
                      LOBYTE(v79) = (unsigned __int8)(v40 >> v39) << g_BitShift_Green_0; /*0x6130e0*/
                      v41 = v32; /*0x6130f1*/
                      v24 = v71[0]; /*0x6130f4*/
                      BYTE1(v79) = (unsigned __int8)(v40 >> v34) << g_BitMask_Blue; /*0x6130fd*/
                      v23 = v65; /*0x613101*/
                      BYTE2(v79) = (unsigned __int8)(v40 >> v41) << v31; /*0x613107*/
                      v16 = (unsigned __int8)v79 | ((BYTE1(v79) | ((BYTE2(v79) | 0x200) << 8)) << 8); /*0x613136*/
                      goto LABEL_55; /*0x613136*/
                    }
                    v31 = g_BitMask_Red; /*0x612ff0*/
                    v32 = g_BitShift_Blue; /*0x612ff6*/
                    v34 = g_BitMask_Green; /*0x613006*/
                    if ( v29 == 1 ) /*0x612fe7*/
                    {
                      v33 = ((unsigned __int8)word_B0FB15 >> g_BitMask_Blue << g_BitMask_Green) /*0x613020*/
                          | (HIBYTE(word_B0FB15) >> g_BitMask_Red << g_BitShift_Blue);
                      v37 = (unsigned __int8)byte_B0FB14; /*0x613024*/
                    }
                    else
                    {
                      v33 = ((unsigned __int8)word_B0FB1A >> g_BitMask_Blue << g_BitMask_Green) /*0x613066*/
                          | (HIBYTE(word_B0FB1A) >> g_BitMask_Red << g_BitShift_Blue);
                      v37 = (unsigned __int8)byte_B0FB19; /*0x61306a*/
                    }
                  }
                  else
                  {
                    v31 = g_BitMask_Red; /*0x613079*/
                    v32 = g_BitShift_Blue; /*0x61307f*/
                    v34 = g_BitMask_Green; /*0x61308f*/
                    v33 = ((unsigned __int8)word_B0FA95 >> g_BitMask_Blue << g_BitMask_Green) /*0x6130a9*/
                        | (HIBYTE(word_B0FA95) >> g_BitMask_Red << g_BitShift_Blue);
                    v37 = (unsigned __int8)byte_B0FA94; /*0x6130ad*/
                  }
                  v30 = g_BitShift_Red; /*0x6130b3*/
                  v35 = v37 >> g_BitShift_Green_0; /*0x6130c1*/
                  v36 = g_BitShift_Red; /*0x6130c3*/
                  goto LABEL_54; /*0x6130c3*/
                }
                if ( !*((_BYTE *)v10 + 197) ) /*0x612f1c*/
                  goto LABEL_44; /*0x612f1c*/
                break;
              case 3: /*0x612ea8*/
                v28 = UI_Helper_72B050(); /*0x612f25*/
                v23 = dword_B0FACC; /*0x612f2e*/
                v24 = v28; /*0x612f34*/
                v26 = 0; /*0x612f36*/
                v71[0] = v24; /*0x612f3b*/
                v65 = dword_B0FACC; /*0x612f3f*/
                if ( (v66 & 1) != 0 ) /*0x612f43*/
                {
                  v26 = 1; /*0x612f45*/
                  goto LABEL_44; /*0x612f4a*/
                }
                if ( !*((_BYTE *)v10 + 197) ) /*0x612f54*/
                  goto LABEL_44; /*0x612f54*/
                break;
              default:
                goto LABEL_45; /*0x612f23*/
            }
            v26 = 2; /*0x612f56*/
            goto LABEL_44; /*0x612f56*/
          }
          v43 = v10[5]; /*0x6131d7*/
          if ( v43 ) /*0x6131dc*/
          {
            if ( (v66 & 1) != 0 && v10[6] ) /*0x6131e5*/
              v43 = v10[6]; /*0x6131ec*/
            v63 = v85; /*0x613211*/
            v64 = v17; /*0x61321e*/
            v61 = 0; /*0x613222*/
            v62 = 0; /*0x613226*/
            (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613234*/
              DSurface_Alternate,
              v84,
              v43,
              &v61,
              0,
              1);
          }
          else
          {
            v44 = v66 & 1; /*0x613242*/
            v58 = 117; /*0x613245*/
            if ( (v66 & 1) != 0 ) /*0x61324d*/
              v58 = 100; /*0x61324f*/
            if ( (v73 & 0x8000000) != 0 ) /*0x61325c*/
            {
              v58 = 117; /*0x61325e*/
            }
            else if ( v58 == 100 && byte_833684 == 117 ) /*0x613271*/
            {
              PlayVocClass(dword_8871E0->__pad_704[2], 0x2000, 1.0, 0); /*0x613289*/
              v17 = v86; /*0x61328e*/
            }
            v45 = 0; /*0x613299*/
            byte_833684 = v58; /*0x61329b*/
            v88 = 7; /*0x6132a6*/
            v89 = 7; /*0x6132ad*/
            v79 = 24; /*0x6132b9*/
            v71[0] = 10; /*0x6132c1*/
            v71[1] = 10; /*0x6132c5*/
            v80 = 30; /*0x6132c9*/
            v46 = 0; /*0x6132d1*/
            v47 = &v79; /*0x6132d3*/
            do /*0x6132e8*/
            {
              if ( *v47 > v17 && v46 ) /*0x6132dd*/
                break; /*0x6132dd*/
              v45 = v46++; /*0x6132df*/
              ++v47; /*0x6132e2*/
            }
            while ( v46 < 2 ); /*0x6132e8*/
            v48 = *(&v79 + v45); /*0x6132ea*/
            v49 = *(&v88 + v45); /*0x6132ee*/
            v71[0] = v71[v45]; /*0x6132f9*/
            v50 = v10[4]; /*0x6132fd*/
            if ( v50 ) /*0x613304*/
            {
              v79 = v83.left; /*0x61331f*/
              v80 = v83.top; /*0x61332c*/
              v91 = Rect.bottom + 1; /*0x613339*/
              v82 = Rect.bottom + 1; /*0x613340*/
              v88 = 0; /*0x613350*/
              v89 = 0; /*0x613357*/
              v90 = Rect.right + 1; /*0x61335e*/
              v81 = Rect.right + 1; /*0x613365*/
              (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613376*/
                DSurface_Alternate,
                &v79,
                v50,
                &v88,
                0,
                1);
              InvalidateRect(hWnd, 0, 0); /*0x613383*/
              v17 = v86; /*0x613389*/
            }
            v51 = (v17 - v48) / 2 + top; /*0x61339f*/
            top = v51; /*0x6133a3*/
            if ( v44 ) /*0x6133a7*/
              top = v51 + 2; /*0x6133ae*/
            sprintf(Buffer, "b%c%c_li%d.pcx", v58, 101, v48); /*0x6133c8*/
            v52 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x6133e4*/
            v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v52 + 128))(v52); /*0x6133f9*/
            v74 = left; /*0x613401*/
            v62 = 0; /*0x61340d*/
            v61 = 0; /*0x613411*/
            v75 = top; /*0x613425*/
            v76 = v49; /*0x613429*/
            v77 = v48; /*0x61342d*/
            v63 = v49; /*0x613431*/
            v64 = v48; /*0x613435*/
            (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613441*/
              DSurface_Alternate,
              &v74,
              v52,
              &v61,
              0,
              1);
            sprintf(Buffer, "b%c%c_mi%d.pcx", v58, 101, v48); /*0x613455*/
            v53 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613471*/
            v72.top = top; /*0x613485*/
            v72.left = left + v49; /*0x61348d*/
            v54 = v71[0]; /*0x613491*/
            v72.bottom = v70; /*0x613495*/
            v72.right = v69 - v71[0]; /*0x61349b*/
            v72.bottom = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 128))(v53); /*0x6134ba*/
            Surface::TileBlit(&v72, DSurface_Alternate, v53, 0, 0); /*0x6134c4*/
            sprintf(Buffer, "b%c%c_ri%d.pcx", v58, 101, v48); /*0x6134da*/
            v55 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x6134f7*/
            v75 = top; /*0x61350b*/
            v77 = v70; /*0x613519*/
            v74 = left + v69 - v54; /*0x61351d*/
            v76 = v54; /*0x613521*/
            v77 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 128))(v55); /*0x613533*/
            v64 = v77; /*0x613537*/
            v63 = v76; /*0x61353b*/
            v62 = 0; /*0x61354d*/
            v61 = 0; /*0x613551*/
            (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61355d*/
              DSurface_Alternate,
              &v74,
              v55,
              &v61,
              0,
              1);
            v16 = (COLORREF)v65; /*0x613560*/
            v10 = v78; /*0x613564*/
          }
LABEL_79:
          if ( !v10[5] && v10[10] ) /*0x613573*/
          {
            GetClientRect(hWnd, &v72); /*0x613587*/
            v61 = left; /*0x613595*/
            v62 = top + 1; /*0x61359c*/
            v63 = v69 + left - 2; /*0x6135a8*/
            v64 = top + v70; /*0x6135b9*/
            if ( (v66 & 1) != 0 ) /*0x6135bd*/
            {
              v61 = left + 2; /*0x6135c2*/
              v62 += 4; /*0x6135cd*/
            }
            PrintFontLayout( /*0x6135ee*/
              DSurface_Alternate,
              (unsigned __int16 *)v10[10],
              &v61,
              (_DWORD *)v10[25],
              v16,
              5,
              12,
              0,
              0,
              0);
          }
          if ( !v10[44] && (v73 & 0x8000000) != 0 ) /*0x613605*/
            DSurface::FillRectWithColor(0, 128); /*0x61361b*/
          ValidateRect(hWnd, 0); /*0x61362a*/
          break; /*0x61362a*/
        default:
          return CallWindowProcA(lpPrevWndFunc, hWnd, v14, wParam, lParam);
      }
      return 0; /*0x61362a*/
    }
    *((_BYTE *)v10 + 197) = *((_BYTE *)v10 + 197) == 0; /*0x61364c*/
    InvalidateRect(hWnd, 0, 1); /*0x61365c*/
  }
  return CallWindowProcA(lpPrevWndFunc, hWnd, v14, wParam, lParam); /*0x612d01*/
}


// ==== 0x006137D0  Dialog::TabControlPaint  this=Dialog  sig=csp ====
LRESULT __stdcall Dialog_TabControlPaint(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *v4)(HWND, UINT, WPARAM, LPARAM); // edi
  int v5; // eax
  HWND v6; // ecx
  int v7; // eax
  int v8; // eax
  LRESULT (__stdcall **v9)(HWND, UINT, WPARAM, LPARAM); // eax
  UINT v10; // esi
  int v12; // eax
  LPARAM v13; // eax
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
  LRESULT v40; // ebp
  WPARAM v41; // ebp
  LRESULT i; // eax
  HWND v43; // edx
  char v44; // bl
  LONG v45; // eax
  LONG v46; // eax
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
  WPARAM v61; // edi
  LRESULT v62; // ebx
  int v63; // esi
  LONG v64; // [esp+50h] [ebp-104h] BYREF
  LONG v65; // [esp+54h] [ebp-100h]
  int v66; // [esp+58h] [ebp-FCh]
  int v67; // [esp+5Ch] [ebp-F8h]
  struct tagRECT Rect; // [esp+60h] [ebp-F4h] BYREF
  LONG left; // [esp+70h] [ebp-E4h] BYREF
  LONG top; // [esp+74h] [ebp-E0h]
  int v71; // [esp+78h] [ebp-DCh]
  int v72; // [esp+7Ch] [ebp-D8h]
  LONG v73; // [esp+80h] [ebp-D4h] BYREF
  LONG v74; // [esp+84h] [ebp-D0h]
  int v75; // [esp+88h] [ebp-CCh]
  int v76; // [esp+8Ch] [ebp-C8h]
  WPARAM v77; // [esp+90h] [ebp-C4h]
  int v78; // [esp+94h] [ebp-C0h]
  LRESULT v79; // [esp+98h] [ebp-BCh]
  int v80; // [esp+9Ch] [ebp-B8h]
  int v81; // [esp+A0h] [ebp-B4h]
  LONG v82; // [esp+A4h] [ebp-B0h]
  RECT v83; // [esp+A8h] [ebp-ACh] BYREF
  int v84[4]; // [esp+B8h] [ebp-9Ch] BYREF
  struct tagRECT v85; // [esp+C8h] [ebp-8Ch] BYREF
  int v86[2]; // [esp+D8h] [ebp-7Ch] BYREF
  int v87; // [esp+E0h] [ebp-74h]
  int v88; // [esp+E4h] [ebp-70h]
  LPARAM v89[7]; // [esp+E8h] [ebp-6Ch] BYREF
  char Buffer[80]; // [esp+104h] [ebp-50h] BYREF

  v4 = 0; /*0x6137e0*/
  v80 = 0; /*0x6137e4*/
  v78 = 0; /*0x6137e8*/
  if ( dword_AC1B04 && (v5 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1)))) != 0 ) /*0x613815*/
  {
    v6 = hWnd; /*0x613817*/
    while ( *(HWND *)v5 != hWnd ) /*0x613820*/
    {
      v5 = *(_DWORD *)(v5 + 516); /*0x613822*/
      if ( !v5 ) /*0x61382a*/
        goto LABEL_9; /*0x61382a*/
    }
    v78 = v5 + 4; /*0x613835*/
  }
  else
  {
    v6 = hWnd; /*0x61383b*/
  }
LABEL_9:
  if ( dword_AC1B4C ) /*0x613848*/
  {
    v7 = HashMap::ComputeIndex((int)&dword_AC1B48, (int)&hWnd); /*0x613857*/
    v6 = hWnd; /*0x613862*/
    v8 = *((_DWORD *)dword_AC1B48 + v7); /*0x613869*/
    if ( v8 ) /*0x61386e*/
    {
      while ( *(HWND *)v8 != hWnd ) /*0x613872*/
      {
        v8 = *(_DWORD *)(v8 + 8); /*0x613874*/
        if ( !v8 ) /*0x613879*/
          goto LABEL_16; /*0x613879*/
      }
      v9 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v8 + 4); /*0x613881*/
      if ( v9 ) /*0x613886*/
        v4 = *v9; /*0x613888*/
    }
  }
LABEL_16:
  v10 = Msg; /*0x61388a*/
  switch ( Msg ) /*0x613894*/
  {
    case 0x14u: /*0x613894*/
      return 1; /*0x6138a4*/
    case 0x85u: /*0x613894*/
      return 0; /*0x6138ba*/
    case 0x497u: /*0x613894*/
      ScreenDialogToClient(v6, &v85); /*0x6138cc*/
      v12 = HashTable::Find(g_DialogHashTable, g_Str_File_tab_tlu_pcx, 0); /*0x6138dc*/
      v13 = (unsigned __int16)((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 128))(v12) - 1) << 16; /*0x6138f1*/
      LOBYTE(v13) = v13 | 0x59; /*0x6138f4*/
      SendMessageA(hWnd, 0x1329u, 0, v13); /*0x613905*/
      v6 = hWnd; /*0x61390b*/
LABEL_22:
      if ( v4 ) /*0x613914*/
        return CallWindowProcA(v4, v6, v10, wParam, lParam); /*0x61392f*/
      return v80; /*0x613940*/
  }
  if ( Msg != 15 ) /*0x613946*/
    goto LABEL_22; /*0x613946*/
  ScreenDialogToClient(v6, &Rect); /*0x61394d*/
  v14 = SendMessageA; /*0x613959*/
  SendMessageA(hWnd, 0x1304u, 0, 0); /*0x613967*/
  SendMessageA(hWnd, 0x130Au, 0, (LPARAM)&v85); /*0x61397f*/
  SendMessageA(hWnd, 0x130Au, 0, (LPARAM)&v85); /*0x613997*/
  v15 = Rect.top + v85.bottom - v85.top + 3; /*0x6139b2*/
  left = Rect.left; /*0x6139ba*/
  v71 = Rect.right - Rect.left; /*0x6139c4*/
  v72 = Rect.bottom - v15; /*0x6139d1*/
  Rect.top = v15; /*0x6139d9*/
  top = v15; /*0x6139dd*/
  SetupDialogRenderBuffer(&left, hWnd, 0); /*0x6139e1*/
  ValidateRect(hWnd, 0); /*0x6139ef*/
  left = Rect.left; /*0x613a07*/
  top = Rect.top; /*0x613a11*/
  v71 = Rect.right - Rect.left; /*0x613a1c*/
  v72 = Rect.bottom - Rect.top; /*0x613a20*/
  v16 = HashTable::Find(g_DialogHashTable, aTabFmlPcx, 0); /*0x613a24*/
  v17 = v16; /*0x613a29*/
  if ( v16 ) /*0x613a2d*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 128))(v16); /*0x613a33*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 124))(v17); /*0x613a3d*/
    v64 = Rect.left; /*0x613a48*/
    v66 = v18; /*0x613a50*/
    v65 = Rect.top; /*0x613a5a*/
    v67 = Rect.bottom - Rect.top; /*0x613a6d*/
    Surface::TileBlit(&v64, DSurface_Alternate, v17, 0, 0); /*0x613a71*/
  }
  v19 = HashTable::Find(g_DialogHashTable, aTabFmrPcx, 0); /*0x613a81*/
  v20 = v19; /*0x613a86*/
  if ( v19 ) /*0x613a8a*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 128))(v19); /*0x613a90*/
    v66 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 124))(v20); /*0x613aa7*/
    v64 = Rect.right - v66; /*0x613ab0*/
    v65 = Rect.top; /*0x613ab9*/
    v67 = Rect.bottom - Rect.top; /*0x613acc*/
    Surface::TileBlit(&v64, DSurface_Alternate, v20, 0, 0); /*0x613ad0*/
  }
  v21 = HashTable::Find(g_DialogHashTable, aTabFtmPcx, 0); /*0x613ae0*/
  v22 = v21; /*0x613ae5*/
  if ( v21 ) /*0x613ae9*/
  {
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 128))(v21); /*0x613af5*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 124))(v22); /*0x613afb*/
    v64 = Rect.left; /*0x613b0a*/
    v65 = Rect.top; /*0x613b16*/
    v66 = Rect.right - Rect.left; /*0x613b27*/
    v67 = v23; /*0x613b2b*/
    Surface::TileBlit(&v64, DSurface_Alternate, v22, 0, 0); /*0x613b2f*/
  }
  v24 = HashTable::Find(g_DialogHashTable, aTabFbmPcx, 0); /*0x613b3f*/
  v25 = v24; /*0x613b44*/
  if ( v24 ) /*0x613b48*/
  {
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 128))(v24); /*0x613b54*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x613b5a*/
    v64 = Rect.left; /*0x613b6b*/
    v65 = Rect.bottom - v26; /*0x613b77*/
    v66 = Rect.right - Rect.left; /*0x613b88*/
    v67 = v26; /*0x613b8c*/
    Surface::TileBlit(&v64, DSurface_Alternate, v25, 0, 0); /*0x613b90*/
  }
  v27 = HashTable::Find(g_DialogHashTable, aTabFtlPcx, 0); /*0x613ba0*/
  v28 = v27; /*0x613ba5*/
  if ( v27 ) /*0x613ba9*/
  {
    v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 128))(v27); /*0x613bb5*/
    v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 124))(v28); /*0x613bbb*/
    v74 = Rect.top; /*0x613bc6*/
    v73 = Rect.left; /*0x613bca*/
    v64 = 0; /*0x613bdc*/
    v65 = 0; /*0x613be0*/
    v66 = v30; /*0x613be4*/
    v67 = v29; /*0x613be8*/
    v75 = v30; /*0x613bec*/
    v76 = v29; /*0x613bf0*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613bfc*/
      DSurface_Alternate,
      &v73,
      v28,
      &v64,
      0,
      1);
  }
  v31 = HashTable::Find(g_DialogHashTable, aTabFtrPcx, 0); /*0x613c0f*/
  if ( v31 ) /*0x613c13*/
  {
    v32 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 128))(v31); /*0x613c23*/
    v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 124))(v31); /*0x613c25*/
    v65 = Rect.top; /*0x613c32*/
    v64 = Rect.right - v33; /*0x613c36*/
    v73 = 0; /*0x613c48*/
    v74 = 0; /*0x613c4c*/
    v75 = v33; /*0x613c50*/
    v76 = v32; /*0x613c54*/
    v66 = v33; /*0x613c58*/
    v67 = v32; /*0x613c5c*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613c68*/
      DSurface_Alternate,
      &v64,
      v31,
      &v73,
      0,
      1);
  }
  v34 = HashTable::Find(g_DialogHashTable, aTabFblPcx, 0); /*0x613c7b*/
  if ( v34 ) /*0x613c7f*/
  {
    v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 128))(v34); /*0x613c8f*/
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 124))(v34); /*0x613c91*/
    v64 = Rect.left; /*0x613c9e*/
    v65 = Rect.bottom - v35; /*0x613ca8*/
    v73 = 0; /*0x613cb4*/
    v74 = 0; /*0x613cb8*/
    v75 = v36; /*0x613cbc*/
    v76 = v35; /*0x613cc0*/
    v66 = v36; /*0x613cc4*/
    v67 = v35; /*0x613cc8*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613cd4*/
      DSurface_Alternate,
      &v64,
      v34,
      &v73,
      0,
      1);
  }
  v37 = HashTable::Find(g_DialogHashTable, aTabFbrPcx, 0); /*0x613ce7*/
  if ( v37 ) /*0x613ceb*/
  {
    v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 128))(v37); /*0x613cfb*/
    v39 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 124))(v37); /*0x613cfd*/
    v65 = Rect.bottom - v38; /*0x613d0c*/
    v64 = Rect.right - v39; /*0x613d10*/
    v73 = 0; /*0x613d22*/
    v74 = 0; /*0x613d26*/
    v75 = v39; /*0x613d2a*/
    v76 = v38; /*0x613d2e*/
    v66 = v39; /*0x613d32*/
    v67 = v38; /*0x613d36*/
    (*(void (__thiscall **)(int, LONG *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x613d42*/
      DSurface_Alternate,
      &v64,
      v37,
      &v73,
      0,
      1);
  }
  v40 = SendMessageA(hWnd, 0x130Bu, 0, 0); /*0x613d56*/
  v79 = v40; /*0x613d63*/
  ScreenDialogToClient(hWnd, &Rect); /*0x613d67*/
  v41 = v40 + 1; /*0x613d6c*/
  v77 = v41; /*0x613d6d*/
LABEL_43:
  for ( i = v14(hWnd, 0x130Au, v41, (LPARAM)&v83); ; i = SendMessageA(hWnd, 0x130Au, v61 + 1, (LPARAM)&v83) ) /*0x613d84*/
  {
    if ( !i ) /*0x613d88*/
    {
      v77 = 0; /*0x614161*/
      v41 = 0; /*0x614169*/
      goto LABEL_43; /*0x61416d*/
    }
    v43 = hWnd; /*0x613d9c*/
    memset(v89, 0, sizeof(v89)); /*0x613da3*/
    v89[3] = (LPARAM)unk_AC1BA0; /*0x613db3*/
    v89[4] = 64; /*0x613dc7*/
    strcpy((char *)unk_AC1BA0, aTitle); /*0x613dd5*/
    v89[0] = 1; /*0x613dd9*/
    v14(v43, 0x1305u, v41, (LPARAM)v89); /*0x613df8*/
    v44 = 100; /*0x613dfa*/
    if ( v41 == v79 ) /*0x613e00*/
      v44 = 117; /*0x613e02*/
    v45 = v83.left; /*0x613e0b*/
    if ( v83.left >= 6 ) /*0x613e0d*/
      v45 = 6; /*0x613e0f*/
    left = Rect.left + v83.left - v45; /*0x613e22*/
    top = v83.top + Rect.top; /*0x613e2f*/
    v46 = v83.left; /*0x613e33*/
    if ( v83.left >= 6 ) /*0x613e35*/
      v46 = 6; /*0x613e37*/
    v72 = v83.bottom - v83.top; /*0x613e4c*/
    v71 = v83.right + v46 - v83.left; /*0x613e5a*/
    v47 = v44; /*0x613e63*/
    v48 = HashTable::Find(g_DialogHashTable, g_Str_File_tab_tlu_pcx, 0); /*0x613e74*/
    sprintf(Buffer, "tab_tm%c.pcx", v44); /*0x613e76*/
    v49 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613e8d*/
    v50 = v49; /*0x613e92*/
    if ( v49 ) /*0x613e96*/
    {
      v81 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 128))(v49); /*0x613ea2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 124))(v50); /*0x613eaa*/
      v51 = (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 124))(v48); /*0x613eb1*/
      v52 = *(_DWORD *)v48; /*0x613eb8*/
      v53 = v71 - 2 * v51; /*0x613ebc*/
      v82 = top; /*0x613ec4*/
      v54 = (*(int (__thiscall **)(int))(v52 + 124))(v48); /*0x613ec8*/
      v73 = left + v54; /*0x613edb*/
      v74 = v82; /*0x613ee5*/
      v76 = v81; /*0x613ef0*/
      v75 = v53; /*0x613efb*/
      Surface::TileBlit(&v73, DSurface_Alternate, v50, 0, 0); /*0x613eff*/
    }
    sprintf(Buffer, "tab_tl%c.pcx", v47); /*0x613f12*/
    v55 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613f2e*/
    if ( v55 ) /*0x613f32*/
    {
      v56 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 128))(v55); /*0x613f46*/
      v57 = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 124))(v55); /*0x613f48*/
      v64 = left; /*0x613f53*/
      v66 = v57; /*0x613f5d*/
      v65 = top; /*0x613f6e*/
      v67 = v56; /*0x613f74*/
      Surface::BlitTransparent( /*0x613fb5*/
        &v64,
        DSurface_Alternate,
        v55,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (0xFFu >> g_BitMask_Red << g_BitShift_Blue));
    }
    sprintf(Buffer, "tab_tr%c.pcx", v47); /*0x613fc8*/
    v58 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x613fdf*/
    v59 = v58; /*0x613fe4*/
    if ( v58 ) /*0x613fe8*/
    {
      v60 = (*(int (__thiscall **)(int))(*(_DWORD *)v58 + 128))(v58); /*0x613ff8*/
      v87 = (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 124))(v59); /*0x61400b*/
      v86[0] = left + v71 - v87; /*0x614018*/
      v86[1] = top; /*0x61402a*/
      v88 = v60; /*0x61403b*/
      Surface::BlitTransparent( /*0x614082*/
        v86,
        DSurface_Alternate,
        v59,
        (255 >> g_BitShift_Green_0 << g_BitShift_Red) | (0xFFu >> g_BitMask_Red << g_BitShift_Blue));
    }
    if ( v89[3] ) /*0x614090*/
      strcpy((char *)unk_AC1BA0, (const char *)v89[3]); /*0x6140a9*/
    v61 = v77; /*0x6140ba*/
    v62 = v79; /*0x6140be*/
    v63 = dword_AC4608; /*0x6140c2*/
    v84[0] = left; /*0x6140ca*/
    v84[2] = left + v71; /*0x6140d2*/
    v84[1] = top + 6; /*0x6140e4*/
    v84[3] = top + v72; /*0x6140e8*/
    if ( v77 == v79 ) /*0x6140ef*/
      v63 = dword_AC18A4; /*0x6140f1*/
    swprintf(word_AC462C, (const size_t)g_Str_Trace__hs, unk_AC1BA0); /*0x614106*/
    PrintFontLayout(DSurface_Alternate, word_AC462C, v84, *(_DWORD **)(v78 + 100), v63, 5, 12, 0, 0, 0); /*0x614131*/
    ValidateRect(hWnd, &v83); /*0x614149*/
    if ( v61 == v62 ) /*0x61414d*/
      break; /*0x61414d*/
    v14 = SendMessageA; /*0x61414f*/
    v77 = v61 + 1; /*0x614156*/
    v41 = v61 + 1; /*0x61415a*/
  }
  ValidateRect(hWnd, 0); /*0x61417c*/
  return v80; /*0x613896*/
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
  if ( dword_AC1B4C ) /*0x6141ab*/
  {
    v5 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x6141cf*/
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
  if ( !dword_AC1B04 ) /*0x61420d*/
    return CallWindowProcA(v4, hWnd, Msg, wParam, (LPARAM)lParam); /*0x61420d*/
  v7 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v40) & ((1 << dword_AC1B0C) - 1))); /*0x61422e*/
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
    if ( !strcmp(ClassName, g_INI_Key_ComboBox) ) /*0x61481d*/
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
        v25 = strcmp(ClassName, g_INI_Key_ComboBox) == 0; /*0x61462e*/
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
          DrawDialogGradient((int *)DSurface_Alternate, &Rect.left, 2, -1); /*0x6146d0*/
        v41 = 0; /*0x6146eb*/
        Memory_Helper_6149B0(hWnd, 5120, (int)&v41); /*0x6146f3*/
        v44.left = v42.left; /*0x614706*/
        v44.top = v42.top; /*0x614710*/
        v44.right = v42.right - v42.left + 1; /*0x614720*/
        v44.bottom = v42.bottom - v42.top + 1; /*0x614724*/
        v28 = GetWindowLongA(hWnd, -16); /*0x614728*/
        DrawTextRendererMultiline( /*0x614760*/
          (_DWORD *)DSurface_Alternate,
          &v44.left,
          &unk_AC1E04,
          v41,
          (_DWORD *)v8[25],
          dword_AC18A4,
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
size_t __fastcall sub_6149B0(HWND hWnd, WCHAR *a2, int cchWideChar, size_t *a4)
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
  if ( dword_AC1B4C ) /*0x6149cb*/
  {
    v5 = dword_AC1B60(&hWnda); /*0x6149d1*/
    hWnd = hWnda; /*0x6149e4*/
    v6 = *((_DWORD *)dword_AC1B48 + (v5 & ((1 << dword_AC1B54) - 1))); /*0x6149f0*/
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
      wcscat((wchar_t *)v11, L"\r\n"); /*0x614af6*/
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
  if ( dword_AC1B4C && (v7 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x614b98*/
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
  if ( dword_AC1B04 ) /*0x614bce*/
  {
    v10 = dword_AC1B18(&hWnd); /*0x614bd7*/
    v8 = hWnd; /*0x614bea*/
    v11 = *((_DWORD *)dword_AC1B00 + (v10 & ((1 << dword_AC1B0C) - 1))); /*0x614bf9*/
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
        v17 = strcmp(ClassName, g_INI_Key_ComboBox) == 0; /*0x614f04*/
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
          DrawDialogGradient((int *)DSurface_Alternate, &Rect.left, 2, -1); /*0x614fa6*/
        v46.left += 2; /*0x614fba*/
        v49.left = v46.left; /*0x614fbe*/
        v49.top = v46.top; /*0x614fc8*/
        v20 = *(_DWORD *)(v5 + 76); /*0x614fce*/
        v49.right = v46.right - v46.left + 1; /*0x614fd2*/
        dword_AC48C8 = v20; /*0x614fd6*/
        v21 = *(_DWORD *)(v5 + 84) >> 5; /*0x614fe0*/
        v49.bottom = v46.bottom - v46.top + 1; /*0x614fe3*/
        v38 = v21 & 1; /*0x614ff1*/
        v37 = *(_DWORD *)(v5 + 56); /*0x614ffb*/
        v36 = dword_AC18A4; /*0x615003*/
        v35 = *(_DWORD **)(v5 + 100); /*0x615004*/
        v34 = *(_DWORD *)(v5 + 64); /*0x615005*/
        v22 = WideString::GetOrEmpty(*(wchar_t ***)(v5 + 60)); /*0x615009*/
        DrawTextRendererMultiline( /*0x615019*/
          (_DWORD *)DSurface_Alternate,
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
    if ( !strcmp((const char *)&v49, g_INI_Key_ComboBox) ) /*0x6150b7*/
      InvalidateRect(v42, 0, 0); /*0x6150ed*/
    InvalidateRect(hWnd, 0, 0); /*0x6150fb*/
    goto LABEL_73; /*0x6150fb*/
  }
  if ( v13 != 13 ) /*0x614dc3*/
    goto LABEL_70; /*0x614dc3*/
  SendMessageA(Parent, 0x4DAu, 0, (LPARAM)hWnd); /*0x614de3*/
  if ( (*(_BYTE *)(v5 + 84) & 4) != 0 ) /*0x614de9*/
  {
    WideString::Append2(*(wchar_t ***)(v5 + 60), asc_835950); /*0x614df3*/
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
  int v43; //... [23858 chars total]



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
  if ( dword_AC1B04 ) /*0x6163be*/
  {
    v5 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v31) & ((1 << dword_AC1B0C) - 1))); /*0x6163df*/
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
        if ( !dword_AC1B4C ) /*0x6167c7*/
          goto LABEL_51; /*0x6167c7*/
        v23 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x6167eb*/
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
    if ( dword_AC1B4C ) /*0x616863*/
    {
      v27 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x61688b*/
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
                strcpy(Buffer, aCceIPcx); /*0x616528*/
              else
                strcpy(Buffer, aCceIlPcx); /*0x61654f*/
            }
            else if ( v10 ) /*0x616560*/
            {
              strcpy(Buffer, aCceIrPcx); /*0x61657b*/
            }
            else
            {
              strcpy(Buffer, aCueIPcx); /*0x61659f*/
            }
          }
          else
          {
            v12 = 117; /*0x6165ac*/
            if ( v9 == 1 ) /*0x6165ae*/
              v12 = 99; /*0x6165b0*/
            sprintf(Buffer, "c%ce_i.pcx", v12); /*0x6165c0*/
          }
          v13 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x6165d9*/
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 128))(v13); /*0x6165e5*/
          v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 124))(v13); /*0x6165eb*/
          v33[0] = 0; /*0x6165f8*/
          v33[1] = 0; /*0x6165fc*/
          v33[2] = v15; /*0x616605*/
          v33[3] = v14; /*0x61660a*/
          (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616616*/
            DSurface_Alternate,
            v32,
            v13,
            v33,
            0,
            1);
          if ( (v11 & 0x8000000) != 0 ) /*0x616621*/
            DSurface::FillRectWithColor(0, dword_AC4898); /*0x616635*/
          v16 = (unsigned __int16 *)v4[10]; /*0x61663e*/
          v35.left += 26; /*0x616646*/
          if ( v16 ) /*0x61664a*/
          {
            v17 = dword_AC18A4; /*0x61664c*/
            if ( (v11 & 0x8000000) != 0 ) /*0x616653*/
              v17 = dword_AC1CB4; /*0x616655*/
            PrintFontLayout(DSurface_Alternate, v16, &v35, (_DWORD *)v4[25], v17, 4, 12, 0, 0, 0); /*0x616674*/
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
  PlayVocClass(dword_8871E0->SlaveMinerUndeploySound, 0x2000, 1.0, 0); /*0x61674e*/
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
  if ( dword_AC1B04 ) /*0x6169a0*/
  {
    v4 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v69) & ((1 << dword_AC1B0C) - 1))); /*0x6169c1*/
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
      yTop = dword_AC18A4; /*0x616afa*/
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
        ++g_GameScreenState; /*0x616ba4*/
        v65.left = v66.left; /*0x616bb3*/
        v63 = Rect.bottom + 1; /*0x616bbe*/
        v65.bottom = Rect.bottom + 1; /*0x616bc2*/
        v65.top = v66.top; /*0x616bca*/
        v62 = Rect.right + 1; /*0x616bd9*/
        v65.right = Rect.right + 1; /*0x616bdd*/
        (*(void (__thiscall **)(_DWORD *, int *, int, struct tagRECT *, _DWORD, int))(*v13 + 8))( /*0x616be7*/
          v13,
          &v60,
          DSurface_Alternate,
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
        (*(void (__thiscall **)(int, _DWORD *, LONG, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616c69*/
          DSurface_Alternate,
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
          (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616d6a*/
            DSurface_Alternate,
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
        sprintf(Buffer, "b%c%c_li%d.pcx", v44, 101, v22); /*0x616dc5*/
        v26 = (int *)HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x616ddc*/
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
        (*(void (__thiscall **)(int, LONG *, LONG, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616e40*/
          DSurface_Alternate,
          &v52,
          v56,
          &v60,
          0,
          1);
        sprintf(Buffer, "b%c%c_mi%d.pcx", v71, 101, v22); /*0x616e5b*/
        v28 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x616e72*/
        v65.bottom = v7; /*0x616e7b*/
        v65.top = v49; /*0x616e8c*/
        v65.left = left + v68; /*0x616e90*/
        v56 = v28; /*0x616e9a*/
        v65.right = v8 - v64[0]; /*0x616ea0*/
        v65.bottom = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 128))(v28); /*0x616eb4*/
        Surface::TileBlit(&v65, DSurface_Alternate, v56, 0, 0); /*0x616ecc*/
        sprintf(Buffer, "b%c%c_ri%d.pcx", v71, 101, v22); /*0x616ee9*/
        v29 = HashTable::Find(g_DialogHashTable, Buffer, 0); /*0x616f05*/
        v53 = v49; /*0x616f11*/
        v55 = v7; /*0x616f21*/
        v52 = left + v8 - v64[0]; /*0x616f25*/
        v54 = v64[0]; /*0x616f29*/
        v55 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 128))(v29); /*0x616f3b*/
        v63 = v55; /*0x616f3f*/
        v61 = 0; /*0x616f47*/
        v60 = 0; /*0x616f4b*/
        v62 = v54; /*0x616f50*/
        (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x616f67*/
          DSurface_Alternate,
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
        PrintFontLayout(DSurface_Alternate, (unsigned __int16 *)v45[10], &v48, (_DWORD *)v45[25], yTop, 5, 12, 0, 0, 0); /*0x616ff0*/
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
        if ( dword_AC1B4C && (v31 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x617089*/
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
    PlayVocClass(*((_DWORD *)dword_8871E0 + 451), 0x2000, 1.0, 0); /*0x617117*/
LABEL_61:
    v34 = 0; /*0x61711c*/
    if ( dword_AC1B4C && (v35 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x61714e*/
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
  if ( dword_AC1B4C && (v40 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x6171f0*/
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
  LRESULT v4; // edi
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
  _DWORD *v43; //... [47233 chars total]



// ==== 0x00618D40  Options::DialogProc  this=Options  sig=csp ====
int __stdcall sub_618D40(HWND hWnd, UINT Msg, int a3, LONG String)
{
  int v4; // eax
  HWND v5; // ecx
  WNDPROC *v6; // eax
  _DWORD *v7; // esi
  HWND *v8; // eax
  int v9; // edi
  UINT v10; // ebx
  LRESULT v11; // esi
  LRESULT v12; // ecx
  LONG v13; // esi
  HWND v14; // eax
  LONG v15; // ecx
  int v16; // edx
  LONG (__stdcall *v17)(HWND, int); // ebp
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  HWND v20; // eax
  int v21; // esi
  int v22; // eax
  unsigned int v23; // ebx
  _DWORD *v24; // eax
  _DWORD *v25; // esi
  void (__thiscall ***v26)(_DWORD, int); // ecx
  HDC DC; // esi
  int result; // eax
  int v29; // edx
  LRESULT v30; // eax
  int v31; // ebp
  HWND v32; // ecx
  LRESULT (__stdcall *v33)(HWND, UINT, WPARAM, LPARAM); // esi
  int v34; // eax
  int v35; // eax
  LRESULT (__stdcall **v36)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v37; // eax
  int *v38; // edi
  _DWORD *v39; // ebx
  int v40; // eax
  int v41; // ecx
  WPARAM v42; // ebp
  int v43; // ecx
  ... [101654 chars total]



// ==== 0x0061C690  Scrollbar::DlgProc  this=Scrollbar  sig=csp ====
LRESULT __stdcall Scrollbar_DlgProc(HWND hWnd, UINT Msg, int wParam, unsigned int lParam)
{
  int right; // ebx
  _DWORD *v5; // esi
  HWND *v6; // eax
  int v7; // edx
  signed int v8; // eax
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // eax
  UINT v14; // ecx
  LRESULT (__stdcall *v16)(HWND, UINT, WPARAM, LPARAM); // esi
  int v17; // eax
  LRESULT (__stdcall **v18)(HWND, UINT, WPARAM, LPARAM); // eax
  _DWORD *v19; // ebp
  HWND Parent; // eax
  _DWORD *v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  void (__thiscall ***v25)(_DWORD, int); // ecx
  _DWORD *v26; // ebx
  LONG v27; // eax
  LONG v28; // ecx
  int v29; // eax
  int v30; // ebp
  _WORD *v31; // eax
  __int16 v32; // bp
  int v33; // ecx
  unsigned int v34; // esi
  unsigned int v35; // ebx
  bool v36; // zf
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  char v40; // al
  int v41; // eax
  int v42; // edi
  int v43; // ebx
  char v44; // al
  int v45; // eax
  int v46; // edi
  int v47; // eax
  int v48; // edi
  int v49; // eax
  int v50; // edx
  int v51; // edi
  int v52; // edi
  signed int v53; // edx
  int v54; // eax
  LONG x; // ecx
  int v56; // eax
  int v57; // ecx
  BOOL v58; // ecx
  BOOL v59; // edx
  bool v60; // [esp+6Bh] [ebp-F1h]
  signed int v61; // [esp+6Ch] [ebp-F0h]
  int v62; // [esp+70h] [ebp-ECh] BYREF
  int v63; // [esp+74h] [ebp-E8h]
  int v64; // [esp+78h] [ebp-E4h]
  BOOL v65; // [esp+7Ch] [ebp-E0h]
  int v66; // [esp+80h] [ebp-DCh]
  BOOL v67; // [esp+84h] [ebp-D8h]
  struct tagRECT Rect; // [esp+88h] [ebp-D4h] BYREF
  int v69; // [esp+98h] [ebp-C4h] BYREF
  int v70; // [esp+9Ch] [ebp-C0h]
  LONG v71; // [esp+A0h] [ebp-BCh]
  LONG bottom; // [esp+A4h] [ebp-B8h]
  signed int v73; // [esp+A8h] [ebp-B4h]
  _WORD *v74; // [esp+ACh] [ebp-B0h]
  int v75; // [esp+B0h] [ebp-ACh]
  int v76; // [esp+B4h] [ebp-A8h]
  LONG left; // [esp+B8h] [ebp-A4h] BYREF
  LONG top; // [esp+BCh] [ebp-A0h]
  LONG v79; // [esp+C0h] [ebp-9Ch]
  LONG v80; // [esp+C4h] [ebp-98h]
  int v81; // [esp+C8h] [ebp-94h]
  struct tagPOINT Point; // [esp+CCh] [ebp-90h] BYREF
  struct tagRECT v83; // [esp+D4h] [ebp-88h] BYREF
  _DWORD *v84; // [esp+E4h] [ebp-78h]
  _DWORD *v85; // [esp+E8h] [ebp-74h]
  LONG v86; // [esp+ECh] [ebp-70h]
  unsigned int v87; // [esp+F0h] [ebp-6Ch]
  _DWORD *v88; // [esp+F4h] [ebp-68h]
  HWND v89; // [esp+F8h] [ebp-64h] BYREF
  RECT v90; // [esp+FCh] [ebp-60h] BYREF
  int v91; // [esp+10Ch] [ebp-50h] BYREF
  int v92; // [esp+110h] [ebp-4Ch]
  LONG v93; // [esp+114h] [ebp-48h]
  LONG v94; // [esp+118h] [ebp-44h]
  _DWORD v95[4]; // [esp+11Ch] [ebp-40h] BYREF
  _DWORD v96[2]; // [esp+12Ch] [ebp-30h] BYREF
  LONG v97; // [esp+134h] [ebp-28h]
  int v98; // [esp+138h] [ebp-24h]
  _DWORD v99[4]; // [esp+13Ch] [ebp-20h] BYREF
  struct tagRECT v100; // [esp+14Ch] [ebp-10h] BYREF

  GetClientRect(hWnd, &Rect); /*0x61c6a7*/
  ScreenDialogToClient(hWnd, &v83); /*0x61c6b8*/
  right = Rect.right - 2 * dword_AC1DF0; /*0x61c6da*/
  Rect.bottom -= 2 * dword_AC1DF0; /*0x61c6e3*/
  v83.right -= dword_AC1DF0; /*0x61c6fb*/
  v83.top += dword_AC1DF0; /*0x61c702*/
  v5 = 0; /*0x61c710*/
  Rect.right = right; /*0x61c714*/
  v83.left += dword_AC1DF0; /*0x61c718*/
  v83.bottom -= dword_AC1DF0; /*0x61c71c*/
  v89 = hWnd; /*0x61c723*/
  v85 = 0; /*0x61c72a*/
  if ( dword_AC1B04 ) /*0x61c731*/
  {
    v6 = (HWND *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v89) & ((1 << dword_AC1B0C) - 1))); /*0x61c755*/
    if ( v6 ) /*0x61c75a*/
    {
      while ( *v6 != v89 ) /*0x61c765*/
      {
        v6 = (HWND *)v6[129]; /*0x61c767*/
        if ( !v6 ) /*0x61c76f*/
          goto LABEL_7; /*0x61c76f*/
      }
      v5 = v6 + 1; /*0x61c777*/
      v85 = v6 + 1; /*0x61c77a*/
    }
LABEL_7:
    right = Rect.right; /*0x61c781*/
  }
  if ( !v5 ) /*0x61c787*/
    return 0; /*0x61c787*/
  v60 = v5[64] != 0; /*0x61c79c*/
  v7 = v5[59]; /*0x61c7a7*/
  v8 = v5[60]; /*0x61c7ad*/
  v9 = v5[61]; /*0x61c7b3*/
  v75 = v5[58]; /*0x61c7b9*/
  v10 = v5[62]; /*0x61c7bd*/
  v66 = v7; /*0x61c7c3*/
  v11 = v5[63]; /*0x61c7c7*/
  v61 = v8; /*0x61c7cf*/
  v76 = v9; /*0x61c7d3*/
  v65 = v10; /*0x61c7d7*/
  v67 = v11; /*0x61c7db*/
  if ( !v8 ) /*0x61c7df*/
    v61 = 100; /*0x61c7e1*/
  v12 = 0; /*0x61c7f3*/
  v81 = 0; /*0x61c7f7*/
  v74 = (_WORD *)(right - Rect.left); /*0x61c7fb*/
  v73 = 0; /*0x61c805*/
  v64 = 0; /*0x61c80c*/
  v62 = Rect.bottom - Rect.top - 44; /*0x61c810*/
  v84 = (_DWORD *)(v61 + 1); /*0x61c81d*/
  v63 = Math::RoundToInt((double)v62); /*0x61c841*/
  if ( v63 <= 14 ) /*0x61c847*/
    v63 = 14; /*0x61c849*/
  v13 = v62 - v63; /*0x61c859*/
  v62 -= v63; /*0x61c85e*/
  if ( v62 <= 1 ) /*0x61c862*/
  {
    v13 = 1; /*0x61c864*/
    v62 = 1; /*0x61c869*/
  }
  v14 = Msg; /*0x61c86d*/
  if ( Msg < 0x400 || Msg == 1189 ) /*0x61c882*/
  {
    if ( v66 ) /*0x61c88e*/
    {
      GetCursorPos(&Point); /*0x61c8b8*/
      ScreenToClient(hWnd, &Point); /*0x61c8cb*/
      v12 = Point.y - v63 / 2; /*0x61c8e0*/
      v81 = v12; /*0x61c8e5*/
      if ( v12 < 22 ) /*0x61c8e9*/
      {
        v12 = 22; /*0x61c8eb*/
        v81 = 22; /*0x61c8f0*/
      }
      if ( Rect.bottom - v63 - 22 < v12 ) /*0x61c8ff*/
      {
        v12 = Rect.bottom - v63 - 22; /*0x61c901*/
        v81 = v12; /*0x61c903*/
      }
      right = Rect.right; /*0x61c90b*/
      v14 = Msg; /*0x61c911*/
      v73 = v12 + v63; /*0x61c918*/
      v64 = 5; /*0x61c929*/
      v9 = v61 * (v12 - 22) / v62; /*0x61c931*/
      v76 = v9; /*0x61c933*/
    }
    else
    {
      v12 = v9 * v13 / v61 + Rect.top + 22; /*0x61c89c*/
      v81 = v12; /*0x61c8a6*/
      v73 = v12 + v63; /*0x61c8aa*/
    }
  }
  if ( v14 > 0xE9 ) /*0x61c93d*/
  {
    if ( v14 <= 0x202 ) /*0x61d185*/
    {
      if ( v14 != 514 ) /*0x61d18b*/
      {
        if ( v14 == 275 ) /*0x61d198*/
        {
          GetCursorPos(&Point); /*0x61d21a*/
          ScreenToClient(hWnd, &Point); /*0x61d22d*/
          v65 = 0; /*0x61d239*/
          v67 = 0; /*0x61d23f*/
          if ( v75 && Point.x > Rect.right - (int)v74 ) /*0x61d255*/
          {
            if ( Point.y >= 22 ) /*0x61d25e*/
            {
              if ( Point.y > Rect.bottom - 22 ) /*0x61d297*/
              {
                v67 = v66 == 0; /*0x61d29f*/
                if ( v9 + 1 <= v61 ) /*0x61d2b0*/
                {
                  v64 = 1; /*0x61d2b2*/
                  ++v9; /*0x61d2ba*/
                }
              }
            }
            else
            {
              v65 = v66 == 0; /*0x61d266*/
              if ( v9 ) /*0x61d270*/
              {
                v64 = 0; /*0x61d27e*/
                --v9; /*0x61d282*/
                SetTimer(hWnd, 0, 0x19u, 0); /*0x61d283*/
                goto LABEL_154; /*0x61d289*/
              }
            }
          }
          SetTimer(hWnd, 0, 0x19u, 0); /*0x61d2c8*/
LABEL_154:
          v56 = 0; /*0x61d522*/
          if ( v9 != v5[61] || v61 != v5[60] ) /*0x61d53a*/
          {
            if ( v5[2] ) /*0x61d53c*/
              v56 = 1; /*0x61d543*/
          }
          v57 = v66; /*0x61d54c*/
          v5[58] = v75; /*0x61d550*/
          v5[59] = v57; /*0x61d55a*/
          v58 = v65; /*0x61d560*/
          v5[60] = v61; /*0x61d564*/
          v59 = v67; /*0x61d56a*/
          v5[61] = v9; /*0x61d570*/
          v5[62] = v58; /*0x61d576*/
          v5[63] = v59; /*0x61d57c*/
          if ( v56 ) /*0x61d582*/
          {
            SendMessageA((HWND)v5[2], 0x115u, (unsigned __int16)v64 | ((unsigned __int16)v9 << 16), (LPARAM)hWnd); /*0x61d5aa*/
            InvalidateRect(hWnd, 0, 0); /*0x61d5bc*/
          }
          return 0; /*0x61d5c5*/
        }
        if ( v14 != 512 ) /*0x61d19f*/
        {
          if ( v14 != 513 ) /*0x61d1a2*/
            goto LABEL_154; /*0x61d1a2*/
LABEL_129:
          if ( v14 == 513 ) /*0x61d389*/
          {
            v75 = 1; /*0x61d392*/
            SetCapture(hWnd); /*0x61d39b*/
            SetTimer(hWnd, 0, 0x1F4u, 0); /*0x61d3b2*/
          }
          else
          {
            v75 = 0; /*0x61d3c7*/
            v66 = 0; /*0x61d3cb*/
            KillTimer(hWnd, 0); /*0x61d3cf*/
            ReleaseCapture(); /*0x61d3d5*/
            if ( v60 ) /*0x61d3e1*/
              SetCapture((HWND)v5[2]); /*0x61d3e7*/
          }
          v86 = (unsigned __int16)lParam; /*0x61d3fc*/
          v53 = HIWORD(lParam); /*0x61d40d*/
          v87 = HIWORD(lParam); /*0x61d415*/
          v54 = 1; /*0x61d41c*/
          if ( Msg == 515 ) /*0x61d421*/
            v54 = 2; /*0x61d423*/
          v67 = 0; /*0x61d42a*/
          v65 = 0; /*0x61d42e*/
          x = Rect.right - (_DWORD)v74; /*0x61d440*/
          Point.x = Rect.right - (_DWORD)v74; /*0x61d446*/
          v76 = v54; /*0x61d44a*/
          while ( 1 ) /*0x61d454*/
          {
            if ( v86 > x ) /*0x61d45b*/
            {
              if ( v53 < 22 && v9 ) /*0x61d468*/
              {
                v65 = 1; /*0x61d46a*/
                v64 = 0; /*0x61d472*/
                --v9; /*0x61d47a*/
              }
              else if ( v53 <= Rect.bottom - 22 || v9 + 1 > v61 ) /*0x61d490*/
              {
                if ( v53 < v12 || v53 >= v73 ) /*0x61d4ab*/
                {
                  v12 = v87 - v63 / 2; /*0x61d4d6*/
                  if ( v12 < 22 ) /*0x61d4db*/
                    v12 = 22; /*0x61d4dd*/
                  if ( Rect.bottom - v63 - 22 < v12 ) /*0x61d4eb*/
                    v12 = Rect.bottom - v63 - 22; /*0x61d4ed*/
                  v53 = v87; /*0x61d4fe*/
                  v73 = v12 + v63; /*0x61d505*/
                  v64 = 5; /*0x61d509*/
                  v9 = v61 * (v12 - 22) / v62; /*0x61d511*/
                }
                else if ( Msg == 513 ) /*0x61d4b8*/
                {
                  v66 = 1; /*0x61d4ba*/
                }
              }
              else
              {
                ++v9; /*0x61d497*/
                v67 = 1; /*0x61d499*/
                v64 = 1; /*0x61d49d*/
              }
            }
            if ( !--v76 ) /*0x61d51c*/
              break; /*0x61d51c*/
            x = Point.x; /*0x61d450*/
          }
          goto LABEL_154; /*0x61d51c*/
        }
        if ( v66 ) /*0x61d1b3*/
        {
          v90.top = Rect.top; /*0x61d1c1*/
          v90.right = right; /*0x61d1d3*/
          v90.bottom = Rect.bottom; /*0x61d1ee*/
          v90.left = right - (_DWORD)v74; /*0x61d1f5*/
          InvalidateRect(hWnd, &v90, 0); /*0x61d1fc*/
        }
        if ( (wParam & 1) != 0 ) /*0x61d20a*/
          goto LABEL_154; /*0x61d20a*/
      }
      v75 = 0; /*0x61d2db*/
      v66 = 0; /*0x61d2df*/
      if ( v65 || v67 ) /*0x61d2e9*/
        InvalidateRect(hWnd, 0, 0); /*0x61d2f7*/
      v65 = 0; /*0x61d308*/
      v67 = 0; /*0x61d30c*/
      KillTimer(hWnd, 0); /*0x61d310*/
      ReleaseCapture(); /*0x61d316*/
      if ( v60 ) /*0x61d322*/
        SetCapture((HWND)v5[2]); /*0x61d328*/
      v64 = 8; /*0x61d32e*/
      goto LABEL_154; /*0x61d336*/
    }
    if ( v14 != 515 ) /*0x61d342*/
    {
      if ( v14 == 1234 ) /*0x61d349*/
      {
        v5[64] = lParam != 0; /*0x61d378*/
      }
      else if ( v14 == 1265 ) /*0x61d34e*/
      {
        *((_BYTE *)v5 + 205) = lParam == 1; /*0x61d35f*/
      }
      goto LABEL_154; /*0x61d365*/
    }
    goto LABEL_129; /*0x61d342*/
  }
  if ( v14 == 233 ) /*0x61c943*/
  {
    v9 = *(_DWORD *)(lParam + 20); /*0x61d173*/
    v61 = *(_DWORD *)(lParam + 12); /*0x61d176*/
    goto LABEL_154; /*0x61d17a*/
  }
  switch ( v14 ) /*0x61c960*/
  {
    case 0xFu: /*0x61c960*/
      if ( *((_BYTE *)v5 + 188) ) /*0x61ca3b*/
      {
        ValidateRect(hWnd, 0); /*0x61ca4f*/
        goto LABEL_154; /*0x61ca55*/
      }
      if ( v5[8] ) /*0x61ca5a*/
        return 0; /*0x61ca5f*/
      bottom = Rect.bottom; /*0x61ca74*/
      v80 = Rect.bottom; /*0x61ca78*/
      v19 = 0; /*0x61ca83*/
      v69 = 0; /*0x61ca86*/
      v70 = 0; /*0x61ca8a*/
      v71 = right; /*0x61ca8e*/
      left = v83.left; /*0x61ca92*/
      top = v83.top; /*0x61ca96*/
      v79 = right; /*0x61ca9a*/
      Parent = GetParent(hWnd); /*0x61ca9e*/
      v62 = (int)Parent; /*0x61caa6*/
      v84 = 0; /*0x61caaa*/
      if ( !Parent ) /*0x61cab1*/
        goto LABEL_51; /*0x61cab1*/
      if ( !dword_AC1B04 ) /*0x61cabb*/
        goto LABEL_51; /*0x61cabb*/
      v21 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v62) & ((1 << dword_AC1B0C) - 1))); /*0x61cadc*/
      Parent = (HWND)v62; /*0x61cadf*/
      if ( !v21 ) /*0x61cae5*/
        goto LABEL_51; /*0x61cae5*/
      while ( *v21 != v62 ) /*0x61cae9*/
      {
        v21 = (_DWORD *)v21[129]; /*0x61caeb*/
        if ( !v21 ) /*0x61caf3*/
          goto LABEL_51; /*0x61caf3*/
      }
      v19 = v21 + 1; /*0x61cafb*/
      v84 = v21 + 1; /*0x61cafe*/
LABEL_51:
      ScreenDialogToClient(Parent, &v100); /*0x61cb05*/
      v92 = v70; /*0x61cb1f*/
      v91 = v69; /*0x61cb2a*/
      v93 = v71; /*0x61cb33*/
      v94 = bottom; /*0x61cb3a*/
      if ( v19 && v19[4] ) /*0x61cb43*/
      {
        v91 = v83.left + v69 - v100.left; /*0x61cb67*/
        v92 += v83.top - v100.top; /*0x61cb79*/
      }
      v22 = v5[4]; /*0x61cb80*/
      if ( v22 ) /*0x61cb85*/
      {
        v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 124))(v22); /*0x61cb89*/
        if ( v23 != Rect.right /*0x61cba1*/
          || (v24 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[4] + 128))(v5[4]), v24 != Rect.bottom) )
        {
          v25 = (void (__thiscall ***)(_DWORD, int))v5[4]; /*0x61cba3*/
          if ( v25 ) /*0x61cba8*/
            (**v25)(v25, 1); /*0x61cbae*/
          v5[4] = 0; /*0x61cbb0*/
        }
      }
      if ( !v5[4] ) /*0x61cbb7*/
      {
        v26 = __2_YAPAXI_Z(0x20u); /*0x61cbc9*/
        if ( v26 ) /*0x61cbd0*/
        {
          v27 = Rect.bottom; /*0x61cbd2*/
          v28 = Rect.right; /*0x61cbd6*/
          v26[2] = Rect.bottom; /*0x61cbda*/
          v26[1] = v28; /*0x61cbe2*/
          v26[3] = 0; /*0x61cbeb*/
          *v26 = &XSurface_Vtable; /*0x61cbf2*/
          v26[4] = 2; /*0x61cbf8*/
          Buffer::Init(v26 + 5, 0, 2 * v28 * v27); /*0x61cbff*/
          *v26 = &BSurface_Vtable; /*0x61cc04*/
        }
        else
        {
          v26 = 0; /*0x61cc0c*/
        }
        v5[4] = v26; /*0x61cc0e*/
        v88 = v26; /*0x61cc18*/
        ++g_GameScreenState; /*0x61cc21*/
        if ( v19 ) /*0x61cc27*/
        {
          v29 = v19[4]; /*0x61cc29*/
          if ( v29 ) /*0x61cc2e*/
            (*(void (__thiscall **)(_DWORD *, int *, int, int *, _DWORD, int))(*v26 + 8))(v26, &v69, v29, &v91, 0, 1); /*0x61cc46*/
        }
        v30 = Rect.bottom * Rect.right; /*0x61cc4f*/
        v31 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v26 + 92))(v26, 0, 0); /*0x61cc5c*/
        Point.x = (LONG)v31; /*0x61cc61*/
        if ( v30 > 0 ) /*0x61cc65*/
        {
          v74 = v31; /*0x61cc6b*/
          v63 = v30; /*0x61cc6f*/
          while ( 1 ) /*0x61cc88*/
          {
            v32 = *v31; /*0x61cc88*/
            LOBYTE(v86) = *((_BYTE *)v5 + 200); /*0x61cc8b*/
            v33 = 255 - (unsigned __int8)v86; /*0x61ccb1*/
            v34 = ((unsigned __int8)v86 * HIWORD(g_ScreenSaverState) /*0x61ccf3*/
                 + v33 * (unsigned int)(unsigned __int16)(v32 & HIWORD(g_ScreenSaverState))) >> 8;
            LOWORD(v34) = HIWORD(g_ScreenSaverState) & v34; /*0x61ccf6*/
            g_GameScreenFlags = (unsigned __int8)v86; /*0x61ccff*/
            g_GameScreenConfig = v33; /*0x61cd0a*/
            v31 = v74 + 1; /*0x61cd14*/
            v35 = (((unsigned __int8)v86 * (unsigned __int16)g_CreditsScreenState /*0x61cd1a*/
                  + v33 * (unsigned int)(unsigned __int16)(v32 & g_CreditsScreenState)) >> 8)
                | v34
                | g_ScreenSaverState
                & (((unsigned __int8)v86 * (unsigned __int16)g_ScreenSaverState
                  + v33 * (unsigned int)(unsigned __int16)(v32 & g_ScreenSaverState)) >> 8);
            v37 = v63 - 1; /*0x61cd1c*/
            v36 = v63 == 1; /*0x61cd1c*/
            *v74 = v35; /*0x61cd1d*/
            v74 = v31; /*0x61cd21*/
            v63 = v37; /*0x61cd25*/
            if ( v36 ) /*0x61cd29*/
              break; /*0x61cd29*/
            v5 = v85; /*0x61cc75*/
          }
          v26 = v88; /*0x61cd2f*/
          v31 = (_WORD *)Point.x; /*0x61cd36*/
          v5 = v85; /*0x61cd3a*/
          v12 = v81; /*0x61cd41*/
        }
        if ( v31 ) /*0x61cd47*/
          (*(void (__thiscall **)(_DWORD *))(*v26 + 96))(v26); /*0x61cd4d*/
      }
      if ( v84 ) /*0x61cd5b*/
      {
        v38 = v84[4]; /*0x61cd5d*/
        if ( v38 ) /*0x61cd62*/
          (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61cd7d*/
            DSurface_Alternate,
            &left,
            v38,
            &v91,
            0,
            1);
      }
      v39 = dword_AC4624; /*0x61cd80*/
      if ( dword_AC4624 != -1 ) /*0x61cd88*/
        v39 = (BYTE1(dword_AC4624) >> g_BitMask_Blue << g_BitMask_Green) /*0x61cdd1*/
            | (BYTE2(dword_AC4624) >> g_BitMask_Red << g_BitShift_Blue)
            | ((int)(unsigned __int8)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red);
      if ( *((_BYTE *)v5 + 205) ) /*0x61cdd5*/
      {
        v39 = dword_AC1DD8; /*0x61cddf*/
        if ( dword_AC1DD8 != -1 ) /*0x61cde7*/
          v39 = (BYTE1(dword_AC1DD8) >> g_BitMask_Blue << g_BitMask_Green) /*0x61ce30*/
              | (BYTE2(dword_AC1DD8) >> g_BitMask_Red << g_BitShift_Blue)
              | ((int)(unsigned __int8)dword_AC1DD8 >> g_BitShift_Green_0 << g_BitShift_Red);
      }
      DrawDialogGradient((int *)DSurface_Alternate, &left, 2, v39); /*0x61ce3f*/
      v69 = v83.left; /*0x61ce57*/
      v96[0] = v83.left; /*0x61ce5b*/
      v70 = v12 + v83.top; /*0x61ce6b*/
      v98 = v73 - v12; /*0x61ce6f*/
      v80 = v73 - v12; /*0x61ce76*/
      bottom = v73 - v12; /*0x61ce7a*/
      v40 = *((_BYTE *)v5 + 205); /*0x61ce7e*/
      v96[1] = v12 + v83.top; /*0x61ce86*/
      v97 = Rect.right; /*0x61ce8d*/
      left = v83.left; /*0x61ce94*/
      top = v12 + v83.top; /*0x61ce98*/
      v79 = Rect.right; /*0x61ce9c*/
      v71 = Rect.right; /*0x61cea0*/
      v69 = 0; /*0x61cea4*/
      v70 = v12; /*0x61cea8*/
      if ( v40 ) /*0x61ceac*/
        v41 = HashTable::Find(g_DialogHashTable, aGsbgripmPcx, 0); /*0x61ceb3*/
      else
        v41 = HashTable::Find(g_DialogHashTable, aSbgripmPcx, 0); /*0x61cebf*/
      v42 = v41; /*0x61cec4*/
      if ( v41 ) /*0x61cec8*/
        v97 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 124))(v41); /*0x61ced1*/
      Surface::TileBlit(v96, DSurface_Alternate, v42, 0, 0); /*0x61ceee*/
      v43 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 124))(v42); /*0x61cefa*/
      v95[2] = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 128))(v42); /*0x61cf06*/
      v44 = *((_BYTE *)v5 + 205); /*0x61cf0d*/
      v95[0] = 0; /*0x61cf15*/
      v95[1] = 0; /*0x61cf1c*/
      v95[3] = v43; /*0x61cf23*/
      if ( v44 ) /*0x61cf2b*/
        v45 = HashTable::Find(g_DialogHashTable, aGsbgriptPcx, 0); /*0x61cf32*/
      else
        v45 = HashTable::Find(g_DialogHashTable, aSbgriptPcx, 0); /*0x61cf3e*/
      v46 = v45; /*0x61cf43*/
      if ( v45 ) /*0x61cf47*/
        v80 = (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 128))(v45); /*0x61cf53*/
      (*(void (__thiscall **)(int, LONG *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61cf70*/
        DSurface_Alternate,
        &left,
        v46,
        v95,
        0,
        1);
      if ( *((_BYTE *)v5 + 205) ) /*0x61cf73*/
        v47 = HashTable::Find(g_DialogHashTable, aGsbgripbPcx, 0); /*0x61cf83*/
      else
        v47 = HashTable::Find(g_DialogHashTable, aSbgripbPcx, 0); /*0x61cf8f*/
      v48 = v47; /*0x61cf94*/
      if ( v47 ) /*0x61cf98*/
      {
        v49 = (*(int (__thiscall **)(int))(*(_DWORD *)v47 + 128))(v47); /*0x61cf9e*/
        top = v83.top + v73 - v49; /*0x61cfb3*/
      }
      (*(void (__thiscall **)(int, LONG *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61cfd0*/
        DSurface_Alternate,
        &left,
        v48,
        v95,
        0,
        1);
      v99[2] = Rect.right; /*0x61cfe8*/
      v79 = Rect.right; /*0x61cfef*/
      v71 = Rect.right; /*0x61cff3*/
      v99[1] = v83.top; /*0x61cffb*/
      v50 = v5[4]; /*0x61d003*/
      top = v83.top; /*0x61d006*/
      v99[0] = v83.left; /*0x61d01e*/
      v99[3] = 22; /*0x61d025*/
      left = v83.left; /*0x61d02c*/
      v80 = 22; /*0x61d030*/
      bottom = 22; /*0x61d034*/
      v69 = 0; /*0x61d038*/
      v70 = 0; /*0x61d03c*/
      (*(void (__thiscall **)(int, LONG *, int, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61d047*/
        DSurface_Alternate,
        &left,
        v50,
        &v69,
        0,
        1);
      v51 = v65; /*0x61d055*/
      Scrollbar_Draw(!v65, 2, dword_AC1890, dword_AC1890, dword_AC1890, dword_AC1890); /*0x61d06e*/
      DrawScrollArrowUI((int *)DSurface_Alternate, v99, 1, v51, *((_BYTE *)v5 + 205)); /*0x61d08a*/
      v90.left = v83.left; /*0x61d09f*/
      left = v83.left; /*0x61d0a6*/
      v90.top = v83.bottom - 22; /*0x61d0c0*/
      v90.right = Rect.right; /*0x61d0c7*/
      v90.bottom = 22; /*0x61d0ce*/
      top = v83.bottom - 22; /*0x61d0d5*/
      v79 = Rect.right; /*0x61d0d9*/
      v80 = 22; /*0x61d0dd*/
      v71 = Rect.right; /*0x61d0e1*/
      bottom = 22; /*0x61d0e5*/
      v69 = 0; /*0x61d0e9*/
      v70 = Rect.bottom - 22; /*0x61d0ed*/
      (*(void (__thiscall **)(int, LONG *, _DWORD, int *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61d10a*/
        DSurface_Alternate,
        &left,
        v5[4],
        &v69,
        0,
        1);
      v52 = v67; /*0x61d114*/
      Scrollbar_Draw(!v67, 2, dword_AC1890, dword_AC1890, dword_AC1890, dword_AC1890); /*0x61d131*/
      DrawScrollArrowUI((int *)DSurface_Alternate, &v90, 0, v52, *((_BYTE *)v5 + 205)); /*0x61d14c*/
      ValidateRect(hWnd, 0); /*0x61d15a*/
      v9 = v76; /*0x61d160*/
      goto LABEL_154; /*0x61d164*/
    case 0x14u: /*0x61c960*/
      return 0;
    case 0x84u: /*0x61c960*/
    case 0x87u: /*0x61c960*/
      v16 = 0; /*0x61c9b7*/
      if ( !dword_AC1B4C ) /*0x61c9bb*/
        return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c9bb*/
      v17 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x61c9df*/
      if ( !v17 ) /*0x61c9e4*/
        return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c9e4*/
      break; /*0x61c9e4*/
    case 0xE0u: /*0x61c960*/
      if ( wParam <= v61 && wParam > 0 ) /*0x61c98b*/
        v9 = wParam; /*0x61c991*/
      goto LABEL_154; /*0x61c993*/
    case 0xE1u: /*0x61c960*/
      return v9; /*0x61c973*/
    case 0xE2u: /*0x61c960*/
      v61 = lParam; /*0x61c9a1*/
      if ( v9 > (int)lParam ) /*0x61c9a5*/
        v9 = lParam; /*0x61c9ab*/
      goto LABEL_154; /*0x61c9ad*/
    default:
      goto LABEL_154;
  }
  while ( *(HWND *)v17 != hWnd ) /*0x61c9ef*/
  {
    v17 = *(_DWORD *)(v17 + 8); /*0x61c9f1*/
    if ( !v17 ) /*0x61c9f6*/
      return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c9f6*/
  }
  v18 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v17 + 4); /*0x61c9fe*/
  if ( v18 ) /*0x61ca03*/
    v16 = *v18; /*0x61ca05*/
  return CallWindowProcA(v16, hWnd, Msg, wParam, lParam); /*0x61c967*/
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
  if ( !dword_AC1B04 ) /*0x61d6ef*/
    return 0; /*0x61d6ef*/
  result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x61d714*/
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
        ++g_GameScreenState; /*0x61d847*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, _DWORD *, _DWORD, int))(*v12 + 8))( /*0x61d860*/
          v12,
          v16,
          DSurface_Alternate,
          v15,
          0,
          1);
      }
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61d87d*/
        DSurface_Alternate,
        v15,
        v6[4],
        v16,
        0,
        1);
      UI_Helper_6217E0(255 >> g_BitShift_Green_0 << g_BitShift_Red, (v6[60] << 16) / (v6[59] - v6[58])); /*0x61d8e3*/
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



// ==== 0x0061D950  TabControl::DlgProc  this=TabControl  sig=csp ====
int __stdcall TabControl_DlgProc(HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam)
{
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // edx
  signed int v7; // ebp
  LRESULT v8; // esi
  signed int v9; // ebx
  unsigned int v10; // eax
  signed int v11; // ecx
  int v12; // eax
  LRESULT (__stdcall *v13)(HWND, UINT, WPARAM, LPARAM); // esi
  int v14; // eax
  LRESULT (__stdcall **v15)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v16; // ebp
  HWND v17; // ecx
  int v18; // eax
  int v19; // eax
  int v21; // ebp
  _DWORD *v22; // esi
  LONG bottom; // eax
  LONG right; // edx
  int v25; // edx
  int v26; // esi
  LONG v27; // ebp
  int v28; // esi
  int v29; // esi
  int v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // esi
  int v34; // eax
  _DWORD *v35; // eax
  LRESULT (__stdcall *v36)(HWND, UINT, WPARAM, LPARAM); // esi
  int v37; // eax
  int v38; // eax
  LRESULT (__stdcall **v39)(HWND, UINT, WPARAM, LPARAM); // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  HWND Parent; // eax
  int v44; // [esp+3Ch] [ebp-168h]
  int v45; // [esp+64h] [ebp-140h]
  LONG v46; // [esp+64h] [ebp-140h]
  LONG v47; // [esp+64h] [ebp-140h]
  int v48; // [esp+64h] [ebp-140h]
  char v49; // [esp+6Bh] [ebp-139h]
  int lpPrevWndFunc; // [esp+6Ch] [ebp-138h]
  LRESULT (__stdcall *lpPrevWndFunca)(HWND, UINT, WPARAM, LPARAM); // [esp+6Ch] [ebp-138h]
  signed int v52; // [esp+70h] [ebp-134h]
  int v53; // [esp+74h] [ebp-130h]
  unsigned int v54; // [esp+78h] [ebp-12Ch]
  int v55; // [esp+7Ch] [ebp-128h]
  int v56; // [esp+7Ch] [ebp-128h]
  int v57; // [esp+80h] [ebp-124h]
  struct tagRECT v58; // [esp+84h] [ebp-120h] BYREF
  struct tagRECT v59; // [esp+94h] [ebp-110h] BYREF
  int v60; // [esp+A4h] [ebp-100h]
  LONG v61; // [esp+A8h] [ebp-FCh] BYREF
  LONG v62; // [esp+ACh] [ebp-F8h]
  int v63; // [esp+B0h] [ebp-F4h]
  int v64; // [esp+B4h] [ebp-F0h]
  struct tagPOINT Point; // [esp+B8h] [ebp-ECh] BYREF
  LONG left; // [esp+C0h] [ebp-E4h]
  LONG top; // [esp+C4h] [ebp-E0h]
  int v68; // [esp+C8h] [ebp-DCh]
  int v69; // [esp+CCh] [ebp-D8h]
  LONG v70; // [esp+D0h] [ebp-D4h]
  LRESULT v71; // [esp+D4h] [ebp-D0h]
  int v72; // [esp+D8h] [ebp-CCh]
  signed int v73; // [esp+DCh] [ebp-C8h]
  HWND v74; // [esp+E0h] [ebp-C4h] BYREF
  struct tagRECT v75; // [esp+E4h] [ebp-C0h] BYREF
  struct tagRECT Rect; // [esp+F4h] [ebp-B0h] BYREF
  RECT v77; // [esp+104h] [ebp-A0h] BYREF
  int v78[4]; // [esp+114h] [ebp-90h] BYREF
  _DWORD v79[4]; // [esp+124h] [ebp-80h] BYREF
  struct tagRECT v80; // [esp+134h] [ebp-70h] BYREF
  int v81[4]; // [esp+144h] [ebp-60h] BYREF
  struct tagRECT v82; // [esp+154h] [ebp-50h] BYREF
  wchar_t Buffer[32]; // [esp+164h] [ebp-40h] BYREF

  v49 = 1; /*0x61d96a*/
  GetClientRect(hWnd, &Rect); /*0x61d96f*/
  ScreenDialogToClient(hWnd, &v82); /*0x61d983*/
  v4 = 0; /*0x61d994*/
  v53 = 50; /*0x61d996*/
  v74 = hWnd; /*0x61d9a0*/
  if ( dword_AC1B04 ) /*0x61d9a7*/
  {
    v5 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v74) & ((1 << dword_AC1B0C) - 1))); /*0x61d9cb*/
    if ( v5 ) /*0x61d9d0*/
    {
      while ( (HWND)*v5 != v74 ) /*0x61d9db*/
      {
        v5 = (_DWORD *)v5[129]; /*0x61d9dd*/
        if ( !v5 ) /*0x61d9e5*/
          goto LABEL_7; /*0x61d9e5*/
      }
      v4 = v5 + 1; /*0x61d9ed*/
    }
  }
LABEL_7:
  if ( !v4 ) /*0x61d9f2*/
    return 0; /*0x61d9f2*/
  v6 = v4[59]; /*0x61da04*/
  v7 = v4[60]; /*0x61da0a*/
  v8 = v4[62]; /*0x61da10*/
  v9 = v4[61]; /*0x61da16*/
  lpPrevWndFunc = v4[63]; /*0x61da1c*/
  v10 = v4[65]; /*0x61da20*/
  v60 = v4[58]; /*0x61da26*/
  v11 = v4[64]; /*0x61da2a*/
  v57 = v6; /*0x61da32*/
  v73 = v7; /*0x61da36*/
  v71 = v8; /*0x61da3d*/
  v52 = v11; /*0x61da44*/
  v54 = v10; /*0x61da48*/
  if ( !v10 ) /*0x61da4c*/
    v53 = 0; /*0x61da4e*/
  v12 = Rect.right - Rect.left - v53 - 13; /*0x61da68*/
  v45 = v12; /*0x61da6e*/
  if ( v12 <= 1 ) /*0x61da72*/
  {
    v12 = 1; /*0x61da74*/
    v45 = 1; /*0x61da79*/
  }
  if ( !v7 ) /*0x61da7f*/
  {
    v13 = 0; /*0x61da8a*/
    lpPrevWndFunca = 0; /*0x61da8e*/
    if ( dword_AC1B4C ) /*0x61da92*/
    {
      v14 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1))); /*0x61dab6*/
      if ( v14 ) /*0x61dabb*/
      {
        while ( *(HWND *)v14 != hWnd ) /*0x61dac6*/
        {
          v14 = *(_DWORD *)(v14 + 8); /*0x61dac8*/
          if ( !v14 ) /*0x61dacd*/
            goto LABEL_20; /*0x61dacd*/
        }
        v15 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v14 + 4); /*0x61dad5*/
        if ( v15 ) /*0x61dada*/
        {
          lpPrevWndFunca = *v15; /*0x61dade*/
          v13 = *v15; /*0x61dae2*/
        }
      }
    }
LABEL_20:
    v16 = CallWindowProcA(v13, hWnd, 0x402u, 0, 0); /*0x61dae4*/
    v8 = CallWindowProcA(v13, hWnd, 0x401u, 0, 0); /*0x61db16*/
    v7 = v16 - v8; /*0x61db2a*/
    v71 = v8; /*0x61db2e*/
    v73 = v7; /*0x61db35*/
    v9 = CallWindowProcA(lpPrevWndFunca, hWnd, 0x400u, 0, 0) - v8; /*0x61db44*/
    lpPrevWndFunc = v9 * v45 / v7; /*0x61db4e*/
    v4[63] = lpPrevWndFunc; /*0x61db6c*/
    v12 = v45; /*0x61db72*/
    v4[60] = v7; /*0x61db76*/
    v4[61] = v9; /*0x61db7c*/
    v4[62] = v8; /*0x61db82*/
    v4[64] = v52; /*0x61db88*/
    v4[65] = v54; /*0x61db8e*/
  }
  if ( !v52 ) /*0x61db9a*/
  {
    v53 = 50; /*0x61dba1*/
    v52 = 1; /*0x61dba9*/
    v54 = 1; /*0x61dbad*/
  }
  if ( v57 ) /*0x61dbb7*/
  {
    GetCursorPos(&Point); /*0x61dbe7*/
    ScreenToClient(hWnd, &Point); /*0x61dbfa*/
    v18 = Point.x - 6; /*0x61dc04*/
    if ( Point.x - 6 < 1 ) /*0x61dc0a*/
      v18 = 1; /*0x61dc0c*/
    if ( Rect.right - v53 - 12 < v18 ) /*0x61dc23*/
      v18 = Rect.right - v53 - 12; /*0x61dc25*/
    v19 = (v7 + 1) * (v18 - 1) / v45; /*0x61dc2f*/
    if ( v19 >= v7 ) /*0x61dc35*/
      v19 = v7; /*0x61dc37*/
    v9 = v52 * ((v8 + v19) / v52) - v8; /*0x61dc4b*/
    v17 = hWnd; /*0x61dc4d*/
    lpPrevWndFunc = v9 * v45 / v7; /*0x61dc5a*/
    v72 = lpPrevWndFunc + 1; /*0x61dc5f*/
    v55 = lpPrevWndFunc + 13; /*0x61dc69*/
    v12 = v45; /*0x61dc6d*/
  }
  else
  {
    v72 = Rect.left + lpPrevWndFunc + 1; /*0x61dbc8*/
    v55 = Rect.left + lpPrevWndFunc + 13; /*0x61dbd2*/
    v17 = hWnd; /*0x61dbd6*/
  }
  if ( Msg > 0x202 ) /*0x61dc7e*/
  {
    if ( Msg > 0x406 ) /*0x61e45f*/
    {
      switch ( Msg ) /*0x61e5d1*/
      {
        case 0x4ABu: /*0x61e5d1*/
          v52 = lParam; /*0x61e605*/
          break;
        case 0x4ACu: /*0x61e5d1*/
          v54 = lParam; /*0x61e5f8*/
          break;
        case 0x4AEu: /*0x61e5d1*/
          v4[66] = wParam == 0; /*0x61e5e9*/
          break;
      }
      goto LABEL_118; /*0x61e5ef*/
    }
    if ( Msg == 1030 ) /*0x61e465*/
    {
      v8 = (unsigned __int16)lParam; /*0x61e5a3*/
      v7 = HIWORD(lParam) - (unsigned __int16)lParam; /*0x61e5ac*/
      if ( v9 > v7 ) /*0x61e5b0*/
        v9 = HIWORD(lParam) - (unsigned __int16)lParam; /*0x61e5b2*/
      if ( v9 < (unsigned __int16)lParam ) /*0x61e5b6*/
        v9 = (unsigned __int16)lParam; /*0x61e5b8*/
      v49 = 0; /*0x61e5c0*/
      lpPrevWndFunc = v9 * v12 / v7; /*0x61e5c5*/
      goto LABEL_118; /*0x61e5c9*/
    }
    if ( Msg != 515 ) /*0x61e473*/
    {
      if ( Msg == 1024 ) /*0x61e47b*/
        return v52 * ((v8 + v9) / v52); /*0x61e4c4*/
      if ( Msg == 1029 ) /*0x61e480*/
      {
        if ( (int)(lParam - v8) <= v7 && (int)(lParam - v8) >= 0 ) /*0x61e495*/
          v9 = lParam - v8; /*0x61e497*/
        v49 = 0; /*0x61e49f*/
        lpPrevWndFunc = v9 * v12 / v7; /*0x61e4a4*/
      }
      goto LABEL_118; /*0x61e4a8*/
    }
    v17 = hWnd; /*0x61e4c7*/
    goto LABEL_92; /*0x61e4c7*/
  }
  if ( Msg == 514 ) /*0x61dc84*/
  {
LABEL_80:
    v60 = 0; /*0x61e444*/
    v57 = 0; /*0x61e44a*/
    ReleaseCapture(); /*0x61e44e*/
    goto LABEL_118; /*0x61e454*/
  }
  if ( Msg > 0x84 ) /*0x61dc90*/
  {
    if ( Msg == 135 ) /*0x61e349*/
      goto LABEL_72; /*0x61e349*/
    if ( Msg != 512 ) /*0x61e350*/
    {
      if ( Msg != 513 ) /*0x61e353*/
      {
LABEL_118:
        v42 = 0; /*0x61e609*/
        if ( v9 != v4[61] || v7 != v4[60] || v8 != v4[62] ) /*0x61e623*/
          v42 = 1; /*0x61e625*/
        v4[58] = v60; /*0x61e632*/
        v4[59] = v57; /*0x61e63c*/
        v4[63] = lpPrevWndFunc; /*0x61e646*/
        v4[60] = v7; /*0x61e652*/
        v4[61] = v9; /*0x61e658*/
        v4[62] = v8; /*0x61e65e*/
        v4[64] = v52; /*0x61e664*/
        v4[65] = v54; /*0x61e66a*/
        if ( v42 ) /*0x61e670*/
        {
          InvalidateRect(hWnd, 0, 0); /*0x61e67e*/
          Parent = GetParent(hWnd); /*0x61e68c*/
          SendMessageA(Parent, 0x114u, ((unsigned __int16)(v9 + v8) << 16) | 5, (LPARAM)hWnd); /*0x61e6af*/
          if ( v49 == 1 && !v4[66] ) /*0x61e6bc*/
            PlayVocClass(*((_DWORD *)dword_8871E0 + 451), 0x2000, 1.0, 0); /*0x61e6dd*/
        }
        return 0; /*0x61e6e5*/
      }
LABEL_92:
      if ( Msg == 513 ) /*0x61e4d4*/
      {
        v60 = 1; /*0x61e4d7*/
        SetCapture(v17); /*0x61e4df*/
      }
      else
      {
        v60 = 0; /*0x61e4e7*/
        ReleaseCapture(); /*0x61e4ef*/
      }
      if ( (int)HIWORD(lParam) > Rect.bottom - 18 ) /*0x61e512*/
      {
        if ( (unsigned __int16)lParam < v72 || (unsigned __int16)lParam >= v55 ) /*0x61e525*/
        {
          v40 = (unsigned __int16)lParam - 6; /*0x61e545*/
          if ( v40 < 1 ) /*0x61e54b*/
            v40 = 1; /*0x61e54d*/
          if ( Rect.right - v53 - 12 < v40 ) /*0x61e564*/
            v40 = Rect.right - v53 - 12; /*0x61e566*/
          v41 = (v7 + 1) * (v40 - 1) / v45; /*0x61e570*/
          if ( v41 >= v7 ) /*0x61e576*/
            v41 = v7; /*0x61e578*/
          v9 = v52 * ((v8 + v41) / v52) - v8; /*0x61e58c*/
          lpPrevWndFunc = v9 * v45 / v7; /*0x61e594*/
        }
        else if ( Msg == 513 ) /*0x61e532*/
        {
          v57 = 1; /*0x61e538*/
        }
      }
      goto LABEL_118; /*0x61e540*/
    }
    if ( v57 ) /*0x61e364*/
    {
      v77 = Rect; /*0x61e374*/
      InvalidateRect(v17, &v77, 0); /*0x61e3a9*/
    }
    if ( (wParam & 1) != 0 ) /*0x61e3b7*/
      goto LABEL_118; /*0x61e3b7*/
    goto LABEL_80; /*0x61e3b7*/
  }
  if ( Msg != 132 ) /*0x61dc96*/
  {
    switch ( Msg ) /*0x61dc9f*/
    {
      case 0xAu: /*0x61dc9f*/
        InvalidateRect(v17, 0, 0); /*0x61e337*/
        break;
      case 0xFu: /*0x61dc9f*/
        ScreenDialogToClient(v17, &v75); /*0x61dcc9*/
        left = v75.left; /*0x61dce3*/
        v21 = v75.right - v75.left; /*0x61dce7*/
        v69 = v75.bottom - v75.top; /*0x61dcf4*/
        top = v75.top; /*0x61dd00*/
        v68 = v75.right - v75.left; /*0x61dd04*/
        Point.x = GetWindowLongA(hWnd, -16); /*0x61dd0e*/
        if ( !v4[4] ) /*0x61dd12*/
        {
          ScreenDialogToClient(hWnd, &v80); /*0x61dd2b*/
          GetClientRect(hWnd, &v59); /*0x61dd3d*/
          v22 = __2_YAPAXI_Z(0x20u); /*0x61dd4a*/
          if ( v22 ) /*0x61dd51*/
          {
            bottom = v59.bottom; /*0x61dd53*/
            right = v59.right; /*0x61dd57*/
            v22[3] = 0; /*0x61dd5b*/
            *v22 = &XSurface_Vtable; /*0x61dd62*/
            v22[1] = right + 1; /*0x61dd6e*/
            v22[2] = bottom + 1; /*0x61dd76*/
            v22[4] = 2; /*0x61dd7f*/
            Buffer::Init(v22 + 5, 0, 2 * (bottom + 1) * (right + 1)); /*0x61dd86*/
            *v22 = &BSurface_Vtable; /*0x61dd8b*/
          }
          else
          {
            v22 = 0; /*0x61dd93*/
          }
          v4[4] = v22; /*0x61dd95*/
          ++g_GameScreenState; /*0x61dda9*/
          v61 = v80.left; /*0x61ddb0*/
          v58.left = 0; /*0x61ddbb*/
          v58.top = 0; /*0x61ddbf*/
          v58.bottom = v59.bottom + 1; /*0x61ddc9*/
          v64 = v59.bottom + 1; /*0x61ddcd*/
          v62 = v80.top; /*0x61ddd7*/
          v58.right = v59.right + 1; /*0x61dde8*/
          v63 = v59.right + 1; /*0x61ddec*/
          (*(void (__thiscall **)(_DWORD *, struct tagRECT *, int, LONG *, _DWORD, int))(*v22 + 8))( /*0x61ddf6*/
            v22,
            &v58,
            DSurface_Alternate,
            &v61,
            0,
            1);
          DSurface::FillRectWithColor(0, v4[50]); /*0x61de08*/
        }
        if ( v4[4] ) /*0x61de0d*/
        {
          ScreenDialogToClient(hWnd, &v58); /*0x61de21*/
          GetClientRect(hWnd, &v80); /*0x61de36*/
          v61 = 0; /*0x61de4e*/
          v59.left = v58.left; /*0x61de59*/
          v59.top = v58.top; /*0x61de61*/
          v25 = v4[4]; /*0x61de6a*/
          v64 = v80.bottom + 1; /*0x61de6d*/
          v59.bottom = v80.bottom + 1; /*0x61de71*/
          v62 = 0; /*0x61de7c*/
          v63 = v80.right + 1; /*0x61de80*/
          v59.right = v80.right + 1; /*0x61de84*/
          (*(void (__thiscall **)(int, struct tagRECT *, int, LONG *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61de8f*/
            DSurface_Alternate,
            &v59,
            v25,
            &v61,
            0,
            1);
        }
        if ( v54 ) /*0x61de96*/
        {
          v26 = HashTable::Find(g_DialogHashTable, aTrofmPcx, 0); /*0x61dead*/
          v64 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 128))(v26); /*0x61dec7*/
          v46 = v68 - v53 + left + 1; /*0x61ded8*/
          v61 = v46; /*0x61dedc*/
          v27 = top - 1; /*0x61dee9*/
          v62 = top - 1; /*0x61def7*/
          v63 = v53; /*0x61defb*/
          Surface::TileBlit(&v61, DSurface_Alternate, v26, 0, 0); /*0x61deff*/
          v28 = HashTable::Find(g_DialogHashTable, aTroflPcx, 0); /*0x61df15*/
          v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 128))(v28); /*0x61df21*/
          v59.right = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 124))(v28); /*0x61df30*/
          v59.left = v46; /*0x61df38*/
          v59.bottom = v70; /*0x61df3c*/
          v58.bottom = v70; /*0x61df40*/
          v58.top = 0; /*0x61df54*/
          v58.left = 0; /*0x61df58*/
          v58.right = v59.right; /*0x61df5d*/
          v59.top = v27; /*0x61df6b*/
          (*(void (__thiscall **)(int, struct tagRECT *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)DSurface_Alternate /*0x61df78*/
                                                                                            + 8))(
            DSurface_Alternate,
            &v59,
            v28,
            &v58,
            0,
            1);
          v29 = HashTable::Find(g_DialogHashTable, aTrofrPcx, 0); /*0x61df8c*/
          v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 128))(v29); /*0x61df98*/
          v30 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 124))(v29); /*0x61dfa0*/
          v31 = *(_DWORD *)v29; /*0x61dfa3*/
          v70 = v30; /*0x61dfa5*/
          v32 = (*(int (__thiscall **)(int))(v31 + 124))(v29); /*0x61dfab*/
          v61 = v68 + left - v32 + 1; /*0x61dfcb*/
          v63 = v70; /*0x61dfd5*/
          v58.top = 0; /*0x61dfd9*/
          v58.left = 0; /*0x61dfdd*/
          v58.right = v70; /*0x61dfe2*/
          v62 = v27; /*0x61dff1*/
          v64 = v47; /*0x61dff5*/
          v58.bottom = v47; /*0x61dff9*/
          (*(void (__thiscall **)(int, LONG *, int, struct tagRECT *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61e005*/
            DSurface_Alternate,
            &v61,
            v29,
            &v58,
            0,
            1);
          v21 = v68; /*0x61e008*/
        }
        v79[0] = v72 + v75.left; /*0x61e023*/
        v79[2] = v55 - v72; /*0x61e037*/
        v79[1] = v75.top; /*0x61e04c*/
        v79[3] = v75.bottom - v75.top; /*0x61e053*/
        v33 = HashTable::Find(g_DialogHashTable, aTrakgripPcx, 0); /*0x61e05f*/
        v77.left = 0; /*0x61e063*/
        v77.top = 0; /*0x61e06a*/
        v77.right = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 124))(v33); /*0x61e078*/
        v77.bottom = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 128))(v33); /*0x61e09b*/
        (*(void (__thiscall **)(int, _DWORD *, int, RECT *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61e0ad*/
          DSurface_Alternate,
          v79,
          v33,
          &v77,
          0,
          1);
        v56 = Point.x & 0x8000000; /*0x61e0b9*/
        if ( (Point.x & 0x8000000) != 0 ) /*0x61e0bd*/
          DSurface::FillRectWithColor(0, dword_AC4898); /*0x61e0d4*/
        if ( dword_AC4624 == -1 ) /*0x61e0e1*/
        {
          v48 = -1; /*0x61e0e3*/
        }
        else
        {
          v21 = v68; /*0x61e10b*/
          Point.x = BYTE2(dword_AC4624) >> g_BitMask_Red << g_BitShift_Blue; /*0x61e117*/
          v48 = ((int)(unsigned __int8)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e141*/
              | (BYTE1(dword_AC4624) >> g_BitMask_Blue << g_BitMask_Green)
              | Point.x;
        }
        if ( v56 ) /*0x61e14b*/
        {
          if ( dword_AC1CA8 == -1 ) /*0x61e155*/
          {
            v48 = -1; /*0x61e157*/
          }
          else
          {
            v21 = v68; /*0x61e17f*/
            Point.x = BYTE2(dword_AC1CA8) >> g_BitMask_Red << g_BitShift_Blue; /*0x61e18b*/
            v48 = ((int)(unsigned __int8)dword_AC1CA8 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e1b5*/
                | (BYTE1(dword_AC1CA8) >> g_BitMask_Blue << g_BitMask_Green)
                | Point.x;
          }
        }
        v81[0] = left; /*0x61e1c9*/
        v81[1] = top; /*0x61e1d2*/
        v81[2] = v21 - v53; /*0x61e1e6*/
        v81[3] = v69; /*0x61e1fd*/
        DrawDialogGradient((int *)DSurface_Alternate, v81, 2, v48); /*0x61e204*/
        v78[3] = v69; /*0x61e218*/
        v78[1] = top; /*0x61e223*/
        v78[0] = left + v21 + (v54 != 0) + 1 - v53; /*0x61e251*/
        v78[2] = v53 - ((v54 != 0) + 1); /*0x61e262*/
        DrawDialogGradient((int *)DSurface_Alternate, v78, 2, v48); /*0x61e269*/
        if ( v54 ) /*0x61e274*/
        {
          swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)(v52 * ((v71 + v9) / v52))); /*0x61e29c*/
          v34 = dword_AC18A4; /*0x61e2a5*/
          if ( v56 ) /*0x61e2af*/
            v34 = dword_AC1CB4; /*0x61e2b1*/
          v59.left = v75.left; /*0x61e2c4*/
          v59.right = v75.right; /*0x61e2d5*/
          v44 = v34; /*0x61e2e0*/
          v35 = (_DWORD *)v4[25]; /*0x61e2e1*/
          v59.top = v75.top; /*0x61e2e4*/
          v59.left = v75.right - 49; /*0x61e2ef*/
          v59.bottom = v75.bottom; /*0x61e2f8*/
          PrintFontLayout(DSurface_Alternate, Buffer, &v59, v35, v44, 5, 12, 0, 0, 0); /*0x61e30a*/
        }
        ValidateRect(hWnd, 0); /*0x61e319*/
        v7 = v73; /*0x61e31f*/
        v8 = v71; /*0x61e326*/
        break;
      case 0x14u: /*0x61dc9f*/
        return 0; /*0x61dcbf*/
    }
    goto LABEL_118; /*0x61dcad*/
  }
LABEL_72:
  v36 = 0; /*0x61e3c2*/
  if ( dword_AC1B4C ) /*0x61e3cb*/
  {
    v37 = dword_AC1B60(&hWnd); /*0x61e3d4*/
    v17 = hWnd; /*0x61e3e7*/
    v38 = *((_DWORD *)dword_AC1B48 + (v37 & ((1 << dword_AC1B54) - 1))); /*0x61e3f6*/
    if ( v38 ) /*0x61e3fb*/
    {
      while ( *(HWND *)v38 != hWnd ) /*0x61e3ff*/
      {
        v38 = *(_DWORD *)(v38 + 8); /*0x61e401*/
        if ( !v38 ) /*0x61e406*/
          return CallWindowProcA(v36, v17, Msg, wParam, lParam); /*0x61e406*/
      }
      v39 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v38 + 4); /*0x61e40e*/
      if ( v39 ) /*0x61e413*/
        v36 = *v39; /*0x61e415*/
    }
  }
  return CallWindowProcA(v36, v17, Msg, wParam, lParam); /*0x61dcb3*/
}


// ==== 0x0061E700  GroupLabel::WndProc  this=GroupLabel  sig=csp ====
LRESULT __userpurge GroupLabel::WndProc@<eax>(GroupLabel *this, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  int v5; // ebx
  HWND v6; // edi
  LRESULT (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // esi
  int v8; // eax
  GroupLabel *v9; // ecx
  LRESULT (__stdcall **v10)(HWND, UINT, WPARAM, LPARAM); // eax
  int *v12; // edi
  unsigned __int16 *v13; // ebx
  Text *v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // eax
  unsigned __int8 v18; // al
  int v19; // esi
  int v20; // ebp
  int v21; // edi
  int v22; // ebp
  int v23; // ebp
  int v24; // [esp+3Ch] [ebp-CCh]
  int *v25; // [esp+4Ch] [ebp-BCh] BYREF
  unsigned int v26; // [esp+50h] [ebp-B8h]
  int v27; // [esp+54h] [ebp-B4h] BYREF
  struct tagRECT Rect; // [esp+58h] [ebp-B0h] BYREF
  int *v29; // [esp+68h] [ebp-A0h]
  int v30; // [esp+6Ch] [ebp-9Ch]
  wchar_t *String; // [esp+70h] [ebp-98h]
  int v32; // [esp+74h] [ebp-94h]
  int v33; // [esp+78h] [ebp-90h] BYREF
  int v34; // [esp+7Ch] [ebp-8Ch] BYREF
  int v35; // [esp+80h] [ebp-88h] BYREF
  _DWORD v36[3]; // [esp+84h] [ebp-84h] BYREF
  int v37; // [esp+90h] [ebp-78h] BYREF
  _DWORD v38[3]; // [esp+94h] [ebp-74h] BYREF
  _DWORD v39[2]; // [esp+A0h] [ebp-68h] BYREF
  _DWORD v40[2]; // [esp+A8h] [ebp-60h] BYREF
  int v41; // [esp+B0h] [ebp-58h] BYREF
  _DWORD v42[3]; // [esp+B4h] [ebp-54h] BYREF
  _DWORD v43[2]; // [esp+C0h] [ebp-48h] BYREF
  _DWORD v44[2]; // [esp+C8h] [ebp-40h] BYREF
  _DWORD v45[2]; // [esp+D0h] [ebp-38h] BYREF
  _DWORD v46[2]; // [esp+D8h] [ebp-30h] BYREF
  int v47; // [esp+E0h] [ebp-28h] BYREF
  _DWORD v48[2]; // [esp+E4h] [ebp-24h] BYREF
  _DWORD v49[2]; // [esp+ECh] [ebp-1Ch] BYREF
  int v50[4]; // [esp+F4h] [ebp-14h] BYREF
  int v51; // [esp+104h] [ebp-4h] BYREF

  v6 = hWnd; /*0x61e709*/
  if ( hWnd == (HWND)15 )
  {
    v27 = (int)this; /*0x61e7d2*/
    v32 = 0; /*0x61e7dd*/
    v25 = 0; /*0x61e7e1*/
    HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], &v27, &v25); /*0x61e7e5*/
    v12 = v25; /*0x61e7ea*/
    if ( v25 )
    {
      v24 = v5; /*0x61e7f6*/
      v13 = (unsigned __int16 *)v25[10]; /*0x61e7f7*/
      if ( v13 ) /*0x61e7fc*/
      {
        String = (wchar_t *)v25[10]; /*0x61e7fe*/
      }
      else
      {
        String = &g_TypeClass_DefaultString; /*0x61e804*/
        v13 = &g_TypeClass_DefaultString; /*0x61e80c*/
      }
      ScreenDialogToClient((HWND)this, &Rect); /*0x61e81b*/
      v14 = (Text *)v12[25]; /*0x61e828*/
      v15 = Rect.right - Rect.left; /*0x61e82b*/
      v16 = Rect.top + v14[7].Text_field_00 / 2; /*0x61e843*/
      v30 = v16; /*0x61e84c*/
      Text::Layout(v14, v13, &v35, &v51, Rect.right - Rect.left); /*0x61e850*/
      v50[2] = v15; /*0x61e856*/
      v50[1] = Rect.top; /*0x61e869*/
      v50[0] = Rect.left + 10; /*0x61e87e*/
      v50[3] = Rect.bottom - Rect.top; /*0x61e885*/
      v17 = wcslen(v13); /*0x61e88c*/
      DrawTextRendererTextAligned( /*0x61e8a6*/
        stru_AC1858.HashTable_field_0x4C,
        0,
        v50,
        v13,
        v17,
        0,
        0,
        (int *)DSurface_Alternate,
        0);
      v18 = g_DialogPool.__pad_208[204]; /*0x61e8ab*/
      v25 = *(int **)&g_DialogPool.__pad_208[208]; /*0x61e8c5*/
      v26 = *(_DWORD *)&g_DialogPool.__pad_208[204]; /*0x61e8c9*/
      if ( *(_DWORD *)&g_DialogPool.__pad_208[204] == -1 ) /*0x61e8cd*/
      {
        v34 = -1; /*0x61e8cf*/
      }
      else
      {
        v16 = v30; /*0x61e8e5*/
        v27 = BYTE2(v26) >> g_BitMask_Red << g_BitShift_Blue; /*0x61e8f9*/
        v34 = ((int)(unsigned __int8)v26 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e925*/
            | ((unsigned __int8)g_DialogPool.__pad_208[205] >> g_BitMask_Blue << g_BitMask_Green)
            | v27;
        v18 = v26; /*0x61e929*/
      }
      if ( *(_DWORD *)&g_DialogPool.__pad_208[208] == -1 ) /*0x61e930*/
      {
        v33 = -1; /*0x61e932*/
      }
      else
      {
        v16 = v30; /*0x61e950*/
        v33 = ((int)(unsigned __int8)g_DialogPool.__pad_208[208] >> g_BitShift_Green_0 << g_BitShift_Red) /*0x61e97a*/
            | ((unsigned __int8)g_DialogPool.__pad_208[209] >> g_BitMask_Blue << g_BitMask_Green)
            | (BYTE2(v25) >> g_BitMask_Red << g_BitShift_Blue);
        v18 = v26; /*0x61e97e*/
      }
      v19 = 0; /*0x61e995*/
      v27 = (((int)((*(_WORD *)&g_DialogPool.__pad_208[208] & 0xFF00) + (v26 & 0xFF00)) / 2) & 0xFF00) /*0x61e9e5*/
          + (((int)((*(_DWORD *)&g_DialogPool.__pad_208[208] & 0xFF0000) + (v26 & 0xFF0000)) / 2) & 0xFF0000)
          + (unsigned __int8)(((unsigned __int8)g_DialogPool.__pad_208[208] + v18) / 2);
      v29 = &v33; /*0x61e9ed*/
      v25 = &v34; /*0x61e9f1*/
      while ( 1 )
      {
        v20 = *v29; /*0x61ea04*/
        if ( wcslen(String) ) /*0x61ea06*/
        {
          v21 = v19 + v16; /*0x61ea54*/
          v48[1] = v21; /*0x61ea57*/
          v36[0] = v19 + Rect.left; /*0x61ea64*/
          v48[0] = Rect.left + 8; /*0x61ea68*/
          v36[1] = v21; /*0x61ea7d*/
          (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61ea88*/
            DSurface_Alternate,
            v36,
            v48,
            v20,
            v24);
          if ( v36[0] ) /*0x61ea91*/
            v33 = 12; /*0x61ea93*/
          v40[0] = Rect.bottom - v19 - 1; /*0x61eaac*/
          v40[1] = v21; /*0x61eabe*/
          v41 = v33 + Rect.top + v36[0]; /*0x61eac2*/
          v42[0] = v21; /*0x61eac6*/
          (*((void (__thiscall **)(DSurface *, int *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61ead1*/
            DSurface_Alternate,
            &v41,
            v40,
            v20);
        }
        else
        {
          v21 = v19 + v16; /*0x61ea1c*/
          v38[0] = v19 + Rect.left; /*0x61ea22*/
          v42[0] = Rect.right - v19 - 1; /*0x61ea26*/
          v42[1] = v21; /*0x61ea36*/
          v38[1] = v21; /*0x61ea3d*/
          (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61ea48*/
            DSurface_Alternate,
            v38,
            v42,
            v20,
            v24);
        }
        v44[1] = v21 + 1; /*0x61eae4*/
        v46[1] = (char *)v29 - v19 - 1; /*0x61eaeb*/
        v46[0] = v19 + Rect.top; /*0x61eb01*/
        v44[0] = v19 + Rect.top; /*0x61eb08*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61eb19*/
          DSurface_Alternate,
          v44,
          v46,
          v20);
        v22 = *(_DWORD *)v26; /*0x61eb2d*/
        v37 = Rect.bottom - v19 - 1; /*0x61eb2f*/
        v38[0] = (char *)v29 - v19 - 1; /*0x61eb3b*/
        v39[0] = v19 + Rect.top; /*0x61eb48*/
        v39[1] = v38[0]; /*0x61eb51*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, int *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61eb5c*/
          DSurface_Alternate,
          v39,
          &v37,
          v22);
        v45[1] = v21; /*0x61eb60*/
        v43[0] = Rect.bottom - v19 - 1; /*0x61eb77*/
        v45[0] = v43[0]; /*0x61eb7e*/
        v43[1] = (char *)v29 - v19 - 2; /*0x61eb85*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 12))( /*0x61eba4*/
          DSurface_Alternate,
          v45,
          v43,
          v22);
        v23 = Rect.left == -1
            ? -1
            : ((int)LOBYTE(Rect.left) >> g_BitShift_Green_0 << g_BitShift_Red)
            | (BYTE1(Rect.left) >> g_BitMask_Blue << g_BitMask_Green)
            | (BYTE2(Rect.left) >> g_BitMask_Red << g_BitShift_Blue);
        v48[0] = v21; /*0x61ec0a*/
        v24 = v23; /*0x61ec12*/
        v47 = Rect.bottom - v19 - 1; /*0x61ec13*/
        (*((void (__thiscall **)(DSurface *, int *))DSurface_Alternate->DSurface_field_0x0 + 9))( /*0x61ec24*/
          DSurface_Alternate,
          &v47);
        v49[0] = v19 + Rect.left; /*0x61ec3c*/
        v49[1] = Rect.bottom - v19 - 1; /*0x61ec43*/
        (*((void (__thiscall **)(DSurface *, _DWORD *, int))DSurface_Alternate->DSurface_field_0x0 + 9))( /*0x61ec54*/
          DSurface_Alternate,
          v49,
          v23);
        ++v19; /*0x61ec57*/
        ++v29; /*0x61ec67*/
        --v25; /*0x61ec6b*/
        if ( v19 >= 2 ) /*0x61ec6f*/
          break; /*0x61ec6f*/
        v16 = v30; /*0x61e9f7*/
      }
      ValidateRect((HWND)this, 0); /*0x61ec7f*/
    }
    return 0; /*0x61ec88*/
  }
  if ( hWnd == (HWND)20 ) /*0x61e71e*/
    return 1; /*0x61e7be*/
  if ( hWnd == (HWND)133 ) /*0x61e727*/
    return 0; /*0x61e727*/
  v7 = 0; /*0x61e732*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[132] /*0x61e75f*/
    && (v8 = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[128]
                       + 4
                       * ((*(int (__thiscall **)(GroupLabel **))&g_DialogPool.__pad_208[152])(&this)
                        & ((1 << g_DialogPool.__pad_208[140]) - 1)))) != 0 )
  {
    v9 = this; /*0x61e761*/
    while ( *(GroupLabel **)v8 != this ) /*0x61e76a*/
    {
      v8 = *(_DWORD *)(v8 + 8); /*0x61e76c*/
      if ( !v8 ) /*0x61e771*/
        return CallWindowProcA(v7, (HWND)v9, (UINT)v6, Msg, wParam); /*0x61e771*/
    }
    v10 = (LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(v8 + 4); /*0x61e779*/
    if ( v10 ) /*0x61e77e*/
      v7 = *v10; /*0x61e780*/
  }
  else
  {
    v9 = this; /*0x61e784*/
  }
  return CallWindowProcA(v7, (HWND)v9, (UINT)v6, Msg, wParam); /*0x61e7a4*/
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
      if ( dword_AC1B04 ) /*0x61edbe*/
      {
        result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v18) & ((1 << dword_AC1B0C) - 1))); /*0x61ede3*/
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
              ++g_GameScreenState; /*0x61ee7e*/
              (*(void (__thiscall **)(_DWORD *, _DWORD *, int, int *, _DWORD, int))(*v14 + 8))( /*0x61ee97*/
                v14,
                v22,
                DSurface_Alternate,
                v19,
                0,
                1);
            }
            v15 = SendMessageA(hWnd, 0x402u, 0, 0); /*0x61eeab*/
            FormatHotkeyDisplayString(v15, String); /*0x61eeb7*/
            v16 = *(_DWORD *)(v10 + 16); /*0x61eebc*/
            if ( v16 ) /*0x61eec1*/
              (*(void (__thiscall **)(int, int *, int, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x61eeda*/
                DSurface_Alternate,
                v19,
                v16,
                v22,
                0,
                1);
            DrawDialogGradient((int *)DSurface_Alternate, v19, 2, -1); /*0x61eeeb*/
            if ( wcslen(String) ) /*0x61eef5*/
            {
              Rect.left += 4; /*0x61ef16*/
              Rect.right -= 4; /*0x61ef22*/
              Rect.top += 4; /*0x61ef2c*/
              Rect.bottom -= 4; /*0x61ef30*/
              Surface_Render((int)&Rect, *(_DWORD *)(v10 + 100), dword_AC18A4, 36); /*0x61ef4a*/
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
  if ( dword_AC1B4C && (v6 = *((_DWORD *)dword_AC1B48 + (dword_AC1B60(&hWnd) & ((1 << dword_AC1B54) - 1)))) != 0 ) /*0x61ecfe*/
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
int __fastcall FormatHotkeyDisplayString(__int16 a1, wchar_t *a2)
{
  int result; // eax
  __int16 v3; // kr1C_2
  UINT v4; // eax
  UINT v5; // eax
  UINT v6; // eax
  UINT v7; // eax
  CHAR String[32]; // [esp+Ch] [ebp-214h] BYREF
  wchar_t Format[250]; // [esp+2Ch] [ebp-1F4h] BYREF

  result = HIBYTE(a1); /*0x61ef7c*/
  v3 = a1; /*0x61ef84*/
  LOBYTE(Format[0]) = 0; /*0x61ef88*/
  *a2 = 0; /*0x61ef8d*/
  if ( (a1 & 0x800) == 0 ) /*0x61ef92*/
  {
    if ( (a1 & 0x400) != 0 ) /*0x61efaa*/
    {
      v4 = MapVirtualKeyA(0x12u, 0); /*0x61efb0*/
      GetKeyNameTextA((v4 << 16) | 0x2000001, String, 32); /*0x61efc2*/
      strcat((char *)Format, String); /*0x61efe8*/
      strcat((char *)Format, asc_835A34); /*0x61f014*/
      LOBYTE(result) = HIBYTE(v3); /*0x61f016*/
      LOBYTE(a1) = v3; /*0x61f021*/
    }
    if ( (result & 2) != 0 ) /*0x61f027*/
    {
      v5 = MapVirtualKeyA(0x11u, 0); /*0x61f02d*/
      GetKeyNameTextA((v5 << 16) | 0x2000001, String, 32); /*0x61f03f*/
      strcat((char *)Format, String); /*0x61f065*/
      strcat((char *)Format, asc_835A34); /*0x61f091*/
      LOBYTE(result) = HIBYTE(v3); /*0x61f093*/
      LOBYTE(a1) = v3; /*0x61f09e*/
    }
    if ( (result & 1) != 0 ) /*0x61f0a4*/
    {
      v6 = MapVirtualKeyA(0x10u, 0); /*0x61f0aa*/
      GetKeyNameTextA((v6 << 16) | 0x2000001, String, 32); /*0x61f0bc*/
      strcat((char *)Format, String); /*0x61f0e2*/
      strcat((char *)Format, asc_835A34); /*0x61f10e*/
      LOBYTE(a1) = v3; /*0x61f117*/
    }
    v7 = MapVirtualKeyA((unsigned __int8)a1, 0); /*0x61f124*/
    GetKeyNameTextA((v7 << 16) | 0x2000001, String, 32); /*0x61f136*/
    strcat((char *)Format, String); /*0x61f15c*/
    return swprintf(a2, (const size_t)g_Str_Trace__hs, Format); /*0x61f174*/
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
  int v54; // ... [20105 chars total]


