int __thiscall Skirmish::RenderPreview(Skirmish *this, HWND hWnd)
{
  int result; // eax
  HWND DlgItem; // eax
  int v5; // ecx
  int *v6; // eax
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int DSurface_field_0x0; // esi
  int v13; // eax
  int BuildingAnimByName; // eax
  AbstractClass *v15; // ecx
  int v16; // ebp
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ebx
  int *v21; // eax
  _DWORD *v22; // eax
  int v23; // [esp+24h] [ebp-80h] BYREF
  int v24[2]; // [esp+28h] [ebp-7Ch] BYREF
  int v25; // [esp+30h] [ebp-74h]
  _DWORD v26[4]; // [esp+34h] [ebp-70h] BYREF
  int v27[4]; // [esp+44h] [ebp-60h] BYREF
  LONG left; // [esp+54h] [ebp-50h] BYREF
  LONG top; // [esp+58h] [ebp-4Ch]
  int v30; // [esp+5Ch] [ebp-48h]
  int v31; // [esp+60h] [ebp-44h]
  int v32; // [esp+64h] [ebp-40h]
  int v33; // [esp+68h] [ebp-3Ch]
  int v34; // [esp+6Ch] [ebp-38h] BYREF
  int v35; // [esp+70h] [ebp-34h]
  struct tagRECT Rect; // [esp+74h] [ebp-30h] BYREF
  char v37[16]; // [esp+84h] [ebp-20h] BYREF
  char v38[16]; // [esp+94h] [ebp-10h] BYREF

  result = ValidateRect(hWnd, 0);
  if ( *(_DWORD *)this )
  {
    DlgItem = GetDlgItem(hWnd, 1128);
    ScreenDialogToClient(DlgItem, &Rect);
    left = Rect.left;
    top = Rect.top;
    v5 = *(_DWORD *)this;
    v31 = Rect.bottom - Rect.top;
    v30 = Rect.right - Rect.left;
    v6 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 120))(v5, v26);
    v27[0] = *v6;
    v27[1] = v6[1];
    v7 = v6[2];
    v8 = v6[3];
    v24[0] = 1000 * v31 / v8;
    v9 = 1000 * v30 / v7;
    if ( v24[0] < v9 )
      v9 = 1000 * v31 / v8;
    v10 = v9 * v7;
    v24[0] = v9;
    v11 = v9 * v8;
    v25 = v10 / 2000;
    v32 = left + v30 / 2 - v10 / 2000;
    v33 = top + v31 / 2 - v11 / 2000;
    v34 = v10 / 1000;
    v35 = v11 / 1000;
    (*(void (__thiscall **)(DSurface *, LONG *, _DWORD))(DSurface_Alternate->DSurface_field_0x0 + 20))(
      DSurface_Alternate,
      &left,
      0);
    DSurface_field_0x0 = DSurface_Alternate->DSurface_field_0x0;
    v13 = (*(int (__thiscall **)(_DWORD, int *, _DWORD, _DWORD))(**(_DWORD **)this + 120))(*(_DWORD *)this, v27, 0, 0);
    (*(void (__thiscall **)(DSurface *, int *, _DWORD, int))(DSurface_field_0x0 + 8))(
      DSurface_Alternate,
      &v34,
      *(_DWORD *)this,
      v13);
    HIBYTE(v23) = 0;
    if ( (stru_AC4B48.__pad_2F4[84] & 1) == 0 )
    {
      stru_AC4B48.__pad_2F4[84] |= 1u;
      *(_DWORD *)&stru_AC4B48.__pad_2F4[68] = LoadFileSHP(aStartbutShp, (bool *)&v23 + 3);
    }
    v25 = VtableStub_72E280();
    BuildingAnimByName = FindBuildingAnimByName(aYellow, 1);
    v15 = dword_A8B230;
    v16 = BuildingAnimByName;
    result = dword_A8B230[122].abstractFlags;
    if ( result > 0 && result <= 8 )
    {
      v17 = 0;
      do
      {
        v18 = v32 + v34 * (1000 * (*(&v15[122].nextArrayIndex + 2 * v17) - v15[122].vfptr1) / v15[122].vfptr3) / 1000;
        v19 = v33 + v35 * (1000 * (*(&v15[122].referenceCount + 2 * v17) - v15[122].vfptr2) / v15[122].uniqueId) / 1000;
        v20 = v19;
        if ( *(_DWORD *)&stru_AC4B48.__pad_2F4[68] )
        {
          v24[0] = v18 - 9;
          v24[1] = v19 - 6;
          v21 = (int *)(*(int (__thiscall **)(DSurface *, char *))(DSurface_Alternate->DSurface_field_0x0 + 120))(
                         DSurface_Alternate,
                         v37);
          DrawToSurfaceSHP(
            (int)DSurface_Alternate,
            v25,
            *(int *)&stru_AC4B48.__pad_2F4[68],
            0,
            v24,
            v21,
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
        }
        ++v17;
        v26[0] = v18 - 2;
        v26[1] = v20 - 6;
        v22 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *))(DSurface_Alternate->DSurface_field_0x0 + 120))(
                          DSurface_Alternate,
                          v38);
        result = (int)TextRenderer::DrawText(
                        v27,
                        (size_t)g_Str_Fmt_PctD,
                        (int)DSurface_Alternate,
                        v22,
                        (int)v26,
                        v16,
                        8,
                        25);
        v15 = dword_A8B230;
      }
      while ( v17 < dword_A8B230[122].abstractFlags );
    }
  }
  return result;
}
