// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00730100  FileTree::CleanupAll  this=FileTree  sig=ida-proto ====
void FileTree_CleanupAll()
{
  void *v0; // esi
  void *v1; // esi
  void *v2; // esi
  void *v3; // esi
  void *v4; // esi
  void *v5; // esi
  void *v6; // esi
  void *v7; // esi
  void *v8; // esi
  void *v9; // esi
  void *v10; // esi
  void *v11; // esi
  void *v12; // esi
  void *v13; // esi
  void *v14; // esi
  void *v15; // esi

  if ( MEMORY[0xB0FC9F] ) /*0x73010b*/
  {
    v0 = MEMORY[0xB0F9EC]; /*0x73010d*/
    if ( MEMORY[0xB0F9EC] ) /*0x730115*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0F9EC]); /*0x730119*/
      __3_YAXPAX_Z(v0); /*0x73011f*/
    }
    MEMORY[0xB0FC9F] = 0; /*0x730127*/
  }
  MEMORY[0xB0F9EC] = 0; /*0x730132*/
  if ( MEMORY[0xB0FCA0] ) /*0x73013a*/
  {
    v1 = MEMORY[0xB0FAD4]; /*0x73013c*/
    if ( MEMORY[0xB0FAD4] ) /*0x730144*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAD4]); /*0x730148*/
      __3_YAXPAX_Z(v1); /*0x73014e*/
    }
    MEMORY[0xB0FCA0] = 0; /*0x730156*/
  }
  MEMORY[0xB0FAD4] = 0; /*0x730161*/
  if ( MEMORY[0xB0FCA1] ) /*0x730169*/
  {
    v2 = MEMORY[0xB0FAC8]; /*0x73016b*/
    if ( MEMORY[0xB0FAC8] ) /*0x730173*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAC8]); /*0x730177*/
      __3_YAXPAX_Z(v2); /*0x73017d*/
    }
    MEMORY[0xB0FCA1] = 0; /*0x730185*/
  }
  MEMORY[0xB0FAC8] = 0; /*0x730190*/
  if ( MEMORY[0xB0FCA2] ) /*0x730198*/
  {
    v3 = MEMORY[0xB0FA50]; /*0x73019a*/
    if ( MEMORY[0xB0FA50] ) /*0x7301a2*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA50]); /*0x7301a6*/
      __3_YAXPAX_Z(v3); /*0x7301ac*/
    }
    MEMORY[0xB0FCA2] = 0; /*0x7301b4*/
  }
  MEMORY[0xB0FA50] = 0; /*0x7301bf*/
  if ( MEMORY[0xB0FCA3] ) /*0x7301c7*/
  {
    v4 = MEMORY[0xB0FB08]; /*0x7301c9*/
    if ( MEMORY[0xB0FB08] ) /*0x7301d1*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FB08]); /*0x7301d5*/
      __3_YAXPAX_Z(v4); /*0x7301db*/
    }
    MEMORY[0xB0FCA3] = 0; /*0x7301e3*/
  }
  MEMORY[0xB0FB08] = 0; /*0x7301ee*/
  if ( MEMORY[0xB0FCA4] ) /*0x7301f6*/
  {
    v5 = MEMORY[0xB0F9E0]; /*0x7301f8*/
    if ( MEMORY[0xB0F9E0] ) /*0x730200*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0F9E0]); /*0x730204*/
      __3_YAXPAX_Z(v5); /*0x73020a*/
    }
    MEMORY[0xB0FCA4] = 0; /*0x730212*/
  }
  MEMORY[0xB0F9E0] = 0; /*0x73021d*/
  if ( MEMORY[0xB0FCA5] ) /*0x730225*/
  {
    v6 = MEMORY[0xB0FA68]; /*0x730227*/
    if ( MEMORY[0xB0FA68] ) /*0x73022f*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA68]); /*0x730233*/
      __3_YAXPAX_Z(v6); /*0x730239*/
    }
    MEMORY[0xB0FCA5] = 0; /*0x730241*/
  }
  MEMORY[0xB0FA68] = 0; /*0x73024c*/
  if ( MEMORY[0xB0FCA6] ) /*0x730254*/
  {
    v7 = MEMORY[0xB0FA70]; /*0x730256*/
    if ( MEMORY[0xB0FA70] ) /*0x73025e*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA70]); /*0x730262*/
      __3_YAXPAX_Z(v7); /*0x730268*/
    }
    MEMORY[0xB0FCA6] = 0; /*0x730270*/
  }
  MEMORY[0xB0FA70] = 0; /*0x73027b*/
  if ( MEMORY[0xB0FCA7] ) /*0x730283*/
  {
    v8 = MEMORY[0xB0FAFC]; /*0x730285*/
    if ( MEMORY[0xB0FAFC] ) /*0x73028d*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAFC]); /*0x730291*/
      __3_YAXPAX_Z(v8); /*0x730297*/
    }
    MEMORY[0xB0FCA7] = 0; /*0x73029f*/
  }
  MEMORY[0xB0FAFC] = 0; /*0x7302aa*/
  if ( MEMORY[0xB0FCA8] ) /*0x7302b2*/
  {
    v9 = MEMORY[0xB0FA00]; /*0x7302b4*/
    if ( MEMORY[0xB0FA00] ) /*0x7302bc*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA00]); /*0x7302c0*/
      __3_YAXPAX_Z(v9); /*0x7302c6*/
    }
    MEMORY[0xB0FCA8] = 0; /*0x7302ce*/
  }
  MEMORY[0xB0FA00] = 0; /*0x7302d9*/
  if ( MEMORY[0xB0FCA9] ) /*0x7302e1*/
  {
    v10 = MEMORY[0xB0FA8C]; /*0x7302e3*/
    if ( MEMORY[0xB0FA8C] ) /*0x7302eb*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA8C]); /*0x7302ef*/
      __3_YAXPAX_Z(v10); /*0x7302f5*/
    }
    MEMORY[0xB0FCA9] = 0; /*0x7302fd*/
  }
  MEMORY[0xB0FA8C] = 0; /*0x730308*/
  if ( MEMORY[0xB0FCAA] ) /*0x730310*/
  {
    v11 = MEMORY[0xB0FA48]; /*0x730312*/
    if ( MEMORY[0xB0FA48] ) /*0x73031a*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA48]); /*0x73031e*/
      __3_YAXPAX_Z(v11); /*0x730324*/
    }
    MEMORY[0xB0FCAA] = 0; /*0x73032c*/
  }
  MEMORY[0xB0FA48] = 0; /*0x730337*/
  if ( MEMORY[0xB0FCAB] ) /*0x73033f*/
  {
    v12 = MEMORY[0xB0FA3C]; /*0x730341*/
    if ( MEMORY[0xB0FA3C] ) /*0x730349*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA3C]); /*0x73034d*/
      __3_YAXPAX_Z(v12); /*0x730353*/
    }
    MEMORY[0xB0FCAB] = 0; /*0x73035b*/
  }
  MEMORY[0xB0FA3C] = 0; /*0x730366*/
  if ( MEMORY[0xB0FCAC] ) /*0x73036e*/
  {
    v13 = MEMORY[0xB0FA90]; /*0x730370*/
    if ( MEMORY[0xB0FA90] ) /*0x730378*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FA90]); /*0x73037c*/
      __3_YAXPAX_Z(v13); /*0x730382*/
    }
    MEMORY[0xB0FCAC] = 0; /*0x73038a*/
  }
  MEMORY[0xB0FA90] = 0; /*0x730395*/
  if ( MEMORY[0xB0FCAD] ) /*0x73039d*/
  {
    v14 = MEMORY[0xB0FAA8]; /*0x73039f*/
    if ( MEMORY[0xB0FAA8] ) /*0x7303a7*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FAA8]); /*0x7303ab*/
      __3_YAXPAX_Z(v14); /*0x7303b1*/
    }
    MEMORY[0xB0FCAD] = 0; /*0x7303b9*/
  }
  MEMORY[0xB0FAA8] = 0; /*0x7303c4*/
  if ( MEMORY[0xB0FCAE] ) /*0x7303cc*/
  {
    v15 = MEMORY[0xB0FABC]; /*0x7303ce*/
    if ( MEMORY[0xB0FABC] ) /*0x7303d6*/
    {
      FileTreeNode::Destroy(MEMORY[0xB0FABC]); /*0x7303da*/
      __3_YAXPAX_Z(v15); /*0x7303e0*/
    }
    MEMORY[0xB0FCAE] = 0; /*0x7303e8*/
  }
  MEMORY[0xB0FABC] = 0; /*0x7303ee*/
}


// ==== 0x00730400  LoadingScreen::FreeResources  this=LoadingScreen  sig=csp ====
int LoadingScreen_FreeResources()
{
  int result; // eax

  if ( MEMORY[0xB0FC04] ) /*0x73040a*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FC04]); /*0x73040d*/
    MEMORY[0xB0FC04] = 0; /*0x730415*/
  }
  HashTree::MarkEntry(MEMORY[0x844C08]); /*0x730421*/
  if ( MEMORY[0xB0FC08] ) /*0x73042e*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FC08])(MEMORY[0xB0FC08], 1); /*0x730434*/
    MEMORY[0xB0FC08] = 0; /*0x730436*/
  }
  if ( MEMORY[0xB0FBFC] ) /*0x730443*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBFC]); /*0x730446*/
    MEMORY[0xB0FBFC] = 0; /*0x73044e*/
  }
  HashTree::MarkEntry(MEMORY[0x844C04]); /*0x73045a*/
  if ( MEMORY[0xB0FC00] ) /*0x730467*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FC00])(MEMORY[0xB0FC00], 1); /*0x73046d*/
    MEMORY[0xB0FC00] = 0; /*0x73046f*/
  }
  if ( MEMORY[0xB0FBF4] ) /*0x73047c*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBF4]); /*0x73047f*/
    MEMORY[0xB0FBF4] = 0; /*0x730487*/
  }
  HashTree::MarkEntry(MEMORY[0x844C00]); /*0x730493*/
  if ( MEMORY[0xB0FBF8] ) /*0x7304a0*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBF8])(MEMORY[0xB0FBF8], 1); /*0x7304a6*/
    MEMORY[0xB0FBF8] = 0; /*0x7304a8*/
  }
  if ( MEMORY[0xB0FBE4] ) /*0x7304b5*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBE4]); /*0x7304b8*/
    MEMORY[0xB0FBE4] = 0; /*0x7304c0*/
  }
  HashTree::MarkEntry(MEMORY[0x844BF0]); /*0x7304cc*/
  if ( MEMORY[0xB0FBE8] ) /*0x7304d9*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBE8])(MEMORY[0xB0FBE8], 1); /*0x7304df*/
    MEMORY[0xB0FBE8] = 0; /*0x7304e1*/
  }
  if ( MEMORY[0xB0FBEC] ) /*0x7304ee*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FBEC]); /*0x7304f1*/
    MEMORY[0xB0FBEC] = 0; /*0x7304f9*/
  }
  result = HashTree::MarkEntry(MEMORY[0x844BF4]); /*0x730505*/
  if ( MEMORY[0xB0FBF0] ) /*0x730512*/
  {
    result = (**(int (__thiscall ***)(int, int))MEMORY[0xB0FBF0])(MEMORY[0xB0FBF0], 1); /*0x730518*/
    MEMORY[0xB0FBF0] = 0; /*0x73051a*/
  }
  return result; /*0x730520*/
}


// ==== 0x00730530  LoadingScreen::FreeResources2  this=LoadingScreen  sig=ida-proto ====
void LoadingScreen_FreeResources2()
{
  __3_YAXPAX_Z(MEMORY[0xB0FC30]); /*0x730537*/
  MEMORY[0xB0FC30] = 0; /*0x730545*/
  __3_YAXPAX_Z(MEMORY[0xB0FC34]); /*0x73054b*/
  MEMORY[0xB0FC34] = 0; /*0x730556*/
  __3_YAXPAX_Z(MEMORY[0xB0FC38]); /*0x73055d*/
  MEMORY[0xB0FC38] = 0; /*0x730567*/
  __3_YAXPAX_Z(MEMORY[0xB0FC3C]); /*0x73056e*/
  MEMORY[0xB0FC3C] = 0; /*0x730579*/
  __3_YAXPAX_Z(MEMORY[0xB0FC40]); /*0x730580*/
  MEMORY[0xB0FC40] = 0; /*0x73058b*/
  __3_YAXPAX_Z(MEMORY[0xB0FC44]); /*0x730592*/
  MEMORY[0xB0FC44] = 0; /*0x73059c*/
  __3_YAXPAX_Z(MEMORY[0xB0FC48]); /*0x7305a3*/
  MEMORY[0xB0FC48] = 0; /*0x7305ae*/
  __3_YAXPAX_Z(MEMORY[0xB0FC4C]); /*0x7305b5*/
  MEMORY[0xB0FC4C] = 0; /*0x7305c0*/
  __3_YAXPAX_Z(MEMORY[0xB0FC50]); /*0x7305c7*/
  MEMORY[0xB0FC50] = 0; /*0x7305d1*/
  __3_YAXPAX_Z(MEMORY[0xB0FC54]); /*0x7305d8*/
  MEMORY[0xB0FC54] = 0; /*0x7305e3*/
  __3_YAXPAX_Z(MEMORY[0xB0FC58]); /*0x7305ea*/
  MEMORY[0xB0FC58] = 0; /*0x7305f5*/
  __3_YAXPAX_Z(MEMORY[0xB0FC5C]); /*0x7305fc*/
  MEMORY[0xB0FC5C] = 0; /*0x730606*/
  __3_YAXPAX_Z(MEMORY[0xB0FC60]); /*0x73060d*/
  MEMORY[0xB0FC60] = 0; /*0x730618*/
  __3_YAXPAX_Z(MEMORY[0xB0FC64]); /*0x73061f*/
  MEMORY[0xB0FC64] = 0; /*0x73062a*/
  __3_YAXPAX_Z(MEMORY[0xB0FC68]); /*0x730631*/
  MEMORY[0xB0FC68] = 0; /*0x73063b*/
  __3_YAXPAX_Z(MEMORY[0xB0FC6C]); /*0x730642*/
  MEMORY[0xB0FC6C] = 0; /*0x73064a*/
}


// ==== 0x00730660  unknown_libname_34  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void *unknown_libname_34()
{
  FileTree::CleanupAll(); /*0x730660*/
  return LoadingScreen::LoadSHPs();
}


// ==== 0x00730740  sub_730740  this=-  sig=ida-proto ====
int sub_730740()
{
  return MEMORY[0xA8EB84]; /*0x730745*/
}


// ==== 0x00730750  sub_730750  this=-  sig=ida-proto ====
int sub_730750()
{
  return MEMORY[0xA8EB88]; /*0x730755*/
}


// ==== 0x00730760  sub_730760  this=-  sig=ida-proto ====
int sub_730760()
{
  MEMORY[0xB0FDE0] = 0; /*0x730762*/
  MEMORY[0xB0FDE4] = 0; /*0x730767*/
  MEMORY[0xB0FDE8] = 0; /*0x73076c*/
  MEMORY[0xB0FDEC] = 0; /*0x730771*/
  return 0; /*0x730776*/
}


// ==== 0x00730780  sub_730780  this=-  sig=ida-proto ====
void sub_730780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73078c*/
  MEMORY[0xB0FDF8] = Math::Sqrt(v0 + v0); /*0x73079e*/
}


// ==== 0x007307B0  sub_7307B0  this=-  sig=ida-proto ====
void sub_7307B0()
{
  MEMORY[0xB0FE48] = MEMORY[0xB0FDF8] / 60.0; /*0x7307bc*/
}


// ==== 0x007307D0  sub_7307D0  this=-  sig=ida-proto ====
void sub_7307D0()
{
  MEMORY[0xB0FE30] = 1.0 / MEMORY[0xB0FE48]; /*0x7307dc*/
}


// ==== 0x007307F0  sub_7307F0  this=-  sig=ida-proto ====
void sub_7307F0()
{
  MEMORY[0xB0FE28] = 0.0174532925199433 * 45.0; /*0x7307fc*/
}


// ==== 0x00730810  sub_730810  this=-  sig=ida-proto ====
void sub_730810()
{
  MEMORY[0xB0FE00] = 0.0174532925199433 * 60.0; /*0x73081c*/
}


// ==== 0x00730830  sub_730830  this=-  sig=ida-proto ====
void sub_730830()
{
  MEMORY[0xB0FDD8] = 0.0174532925199433 * 90.0; /*0x73083c*/
}


// ==== 0x00730850  sub_730850  this=-  sig=ida-proto ====
__int64 sub_730850()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0FDD8] - MEMORY[0xB0FE00]); /*0x730862*/
  result = Math::RoundToInt(v0 * MEMORY[0xB0FDF8] * 0.5); /*0x730876*/
  MEMORY[0xB0FE50] = result; /*0x73087b*/
  return result; /*0x730880*/
}


// ==== 0x00730890  sub_730890  this=-  sig=ida-proto ====
void sub_730890()
{
  MEMORY[0xB0FE08] = Math::ArcTan((double)MEMORY[0xB0FE50] * 0.00390625); /*0x7308a7*/
}


// ==== 0x007308C0  sub_7308C0  this=-  sig=ida-proto ====
void sub_7308C0()
{
  MEMORY[0xB0FE20] = Math::ArcTan((double)(2 * MEMORY[0xB0FE50]) / MEMORY[0xB0FDF8]); /*0x7308e2*/
}


// ==== 0x007308F0  sub_7308F0  this=-  sig=ida-proto ====
__int64 sub_7308F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xB0FE50]) + 0.5); /*0x73090b*/
  MEMORY[0xB0FE44] = result; /*0x730910*/
  return result; /*0x730916*/
}


// ==== 0x00730920  sub_730920  this=-  sig=ida-proto ====
int sub_730920()
{
  MEMORY[0xB0FDF0] = 0; /*0x730922*/
  MEMORY[0xB0FDF2] = 0; /*0x730928*/
  return 0; /*0x73092e*/
}


// ==== 0x00730930  sub_730930  this=-  sig=ida-proto ====
int sub_730930()
{
  MEMORY[0xB0FE10] = 0; /*0x730932*/
  MEMORY[0xB0FE14] = 0; /*0x730937*/
  MEMORY[0xB0FE18] = 0; /*0x73093c*/
  return 0; /*0x730941*/
}


// ==== 0x00730950  sub_730950  this=-  sig=ida-proto ====
int sub_730950()
{
  MEMORY[0xB0FE40] = 0; /*0x730955*/
  MEMORY[0xB0FE38] = 128; /*0x73095f*/
  MEMORY[0xB0FE3C] = 128; /*0x730964*/
  return 128; /*0x730969*/
}


// ==== 0x00730970  ObjectClass::WinMainSetup_Setup  this=ObjectClass  sig=csp ====
int sub_730970()
{
  int result; // eax

  if ( MEMORY[0xB0FE6C] ) /*0x730978*/
  {
    result = (**(int (__thiscall ***)(int, int))MEMORY[0xB0FE6C])(MEMORY[0xB0FE6C], 1); /*0x73097e*/
    MEMORY[0xB0FE6C] = 0; /*0x730980*/
  }
  return result; /*0x73098a*/
}


// ==== 0x00730990  ObjectClass::SidebarHasAvailableUnit  this=VOID_PTR  sig=csp ====
char __thiscall sub_730990(char *this)
{
  int v1; // ebx
  int v2; // edi
  int v4; // esi
  int v5; // ecx
  char v6; // al

  v1 = MEMORY[0xA8EC88]; /*0x730991*/
  v2 = 0; /*0x73099a*/
  if ( MEMORY[0xA8EC88] <= 0 ) /*0x7309a0*/
    return 1; /*0x7309f4*/
  while ( 1 )
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC7C] + v2); /*0x7309a7*/
    if ( v4 && !*(_BYTE *)(v4 + 129) )
    {
      v5 = *(_DWORD *)(v4 + 540); /*0x7309bd*/
      v6 = MEMORY[0xA8B238][0] ? House::IsHumanPlayer((#375 *)v5) : *(_BYTE *)(v5 + 493);
      if ( v6 && !*(_BYTE *)(v4 + 131) && *(char **)(v4 + 532) == this - 1 ) /*0x7309ed*/
        break; /*0x7309ed*/
    }
    if ( ++v2 >= v1 ) /*0x7309f2*/
      return 1; /*0x7309f2*/
  }
  return 0; /*0x7309f4*/
}


// ==== 0x00730A10  ObjectClass::SidebarCountAvailableUnits  this=int  sig=csp ====
int __thiscall sub_730A10(char *this)
{
  int v1; // ebx
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // ecx
  char IsHumanPlayer; // al

  v1 = MEMORY[0xA8EC88]; /*0x730a12*/
  v2 = 0; /*0x730a1a*/
  v3 = 0; /*0x730a1c*/
  if ( MEMORY[0xA8EC88] <= 0 ) /*0x730a24*/
    return 0; /*0x730a7a*/
  do /*0x730a70*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC7C] + v3); /*0x730a2c*/
    if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x730a33*/
    {
      v5 = *(_DWORD *)(v4 + 540); /*0x730a42*/
      if ( MEMORY[0xA8B238][0] ) /*0x730a4a*/
        IsHumanPlayer = House::IsHumanPlayer((#375 *)v5); /*0x730a54*/
      else
        IsHumanPlayer = *(_BYTE *)(v5 + 493); /*0x730a4c*/
      if ( IsHumanPlayer ) /*0x730a5b*/
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x730a6a*/
          ++v2; /*0x730a6c*/
      }
    }
    ++v3; /*0x730a6d*/
  }
  while ( v3 < v1 ); /*0x730a70*/
  return v2; /*0x730a75*/
}


// ==== 0x00730A90  AddMessageListPlayerMessage  this=IUnknown  sig=csp ====
int __fastcall AddMessageListPlayerMessage(CellStruct *a1, int a2)
{
  int v2; // eax

  if ( a2 == -1 ) /*0x730a93*/
    a2 = 240; /*0x730a95*/
  v2 = 3; /*0x730aa3*/
  if ( HouseClass_Player ) /*0x730aa8*/
    v2 = HouseClass_Player[1].field_24; /*0x730aaa*/
  return MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, a1, v2, (IUnknown *)0x4046, a2, 1); /*0x730ac9*/
}


// ==== 0x00730AD0  sub_730AD0  this=-  sig=ida-proto ====
int sub_730AD0()
{
  return 16454; /*0x730ad5*/
}


// ==== 0x00730AE0  sub_730AE0  this=-  sig=ida-proto ====
int sub_730AE0()
{
  return 240; /*0x730ae5*/
}


// ==== 0x00730AF0  ObjectClass::ProcessSelectionExperience  this=ObjectClass  sig=csp ====
char ProcessSelectionExperience()
{
  int v0; // eax
  #375 **v1; // esi
  _BYTE *v2; // ecx
  wchar_t *v3; // ebp
  int v4; // edi
  _DWORD *v5; // esi
  int v6; // ebx
  _BYTE *v7; // esi
  _DWORD *v8; // edi
  _BYTE *v9; // ebp
  char v11; // [esp+11h] [ebp-7h]
  char v12; // [esp+12h] [ebp-6h]
  char v13; // [esp+13h] [ebp-5h]
  wchar_t *v14; // [esp+14h] [ebp-4h]

  LOBYTE(v0) = (_BYTE)MEMORY[0xA8ECC8]; /*0x730af3*/
  v13 = 0; /*0x730afe*/
  if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x730b03*/
    return v0; /*0x730b03*/
  LOBYTE(v0) = (_BYTE)MEMORY[0xA8ECBC]; /*0x730b09*/
  if ( !*(_DWORD *)MEMORY[0xA8ECBC]
    || (v1 = *(#375 ***)MEMORY[0xA8ECBC],
        v0 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 44))(*(_DWORD *)MEMORY[0xA8ECBC]),
        v0 != 6)
    || (v0 = (*((int (__thiscall **)(#375 **))*v1 + 258))(v1), v0 <= 0)
    || (LOBYTE(v0) = House::IsHumanPlayer(v1[135]), !(_BYTE)v0) )
  {
    v3 = MEMORY[0xA8ECC8]; /*0x730b71*/
    v4 = 0; /*0x730b77*/
    v11 = 0; /*0x730b7b*/
    v12 = 0; /*0x730b80*/
    v14 = MEMORY[0xA8ECC8]; /*0x730b85*/
    if ( (int)MEMORY[0xA8ECC8] <= 0 )
    {
LABEL_24:
      v6 = 0; /*0x730c19*/
      if ( (int)v3 > 0 )
      {
        do
        {
          v7 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v6); /*0x730c29*/
          if ( v7
            && ((*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v7 + 160))(*((_DWORD *)MEMORY[0xA8ECBC] + v6))
             || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 156))(v7))
            && (v7[20] & 1) != 0
            && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 784))(v7)
            && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 788))(v7)
            && !v7[664] )
          {
            v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) == 15 ? (_DWORD *)v7 : 0;
            v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 44))(v7) == 1 ? v7 : 0;
            if ( (!v8 || !TechnoClass::GetTypeFlag(v8) || !v11 || !v12 || !TechnoClass::IsMission27to30(v8)) /*0x730d06*/
              && (!v9
               || !*(_BYTE *)(*((_DWORD *)v9 + 433) + 3603)
               || !v11
               || !v12
               || !(unsigned __int8)Event_Process_746D90(v9)) )
            {
              if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)v7 + 884))(v7, 9) ) /*0x730d15*/
                v13 = 1; /*0x730d1f*/
            }
            v3 = v14; /*0x730d24*/
          }
          ++v6; /*0x730d28*/
        }
        while ( v6 < (int)v3 );
        LOBYTE(v0) = v13; /*0x730d31*/
        if ( v13 ) /*0x730d37*/
          goto LABEL_47; /*0x730d37*/
      }
      return v0; /*0x730d37*/
    }
    while ( 1 ) /*0x730b95*/
    {
      v5 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ECBC] + v4); /*0x730b95*/
      if ( v5 ) /*0x730b9a*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(*v5 + 44))(*((_DWORD *)MEMORY[0xA8ECBC] + v4)) == 15 /*0x730baa*/
          && TechnoClass::GetTypeFlag(v5) )
        {
          if ( !TechnoClass::IsMission27to30(v5) ) /*0x730bbc*/
            goto LABEL_17; /*0x730bbc*/
          LOBYTE(v0) = v12; /*0x730bbe*/
          v11 = 1; /*0x730bc2*/
          if ( v12 ) /*0x730bc9*/
            goto LABEL_24; /*0x730bc9*/
        }
        else
        {
          v0 = (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5); /*0x730be0*/
          if ( v0 == 1 ) /*0x730be6*/
          {
            LOBYTE(v0) = *(_BYTE *)(v5[433] + 3603); /*0x730bee*/
            if ( (_BYTE)v0 ) /*0x730bf6*/
            {
              if ( (unsigned __int8)Event_Process_746D90(v5) ) /*0x730bfa*/
              {
                LOBYTE(v0) = v12; /*0x730c03*/
                v11 = 1; /*0x730c07*/
                if ( v12 ) /*0x730c0e*/
                  goto LABEL_24; /*0x730c0e*/
                goto LABEL_23; /*0x730c0e*/
              }
LABEL_17:
              LOBYTE(v0) = v11; /*0x730bcd*/
              v12 = 1; /*0x730bd1*/
              if ( v11 ) /*0x730bd8*/
                goto LABEL_24; /*0x730bd8*/
            }
          }
        }
      }
LABEL_23:
      if ( ++v4 >= (int)v3 ) /*0x730c13*/
        goto LABEL_24; /*0x730c13*/
    }
  }
  LOBYTE(v0) = (_BYTE)MEMORY[0xA8ECBC]; /*0x730b41*/
  v2 = *(_BYTE **)MEMORY[0xA8ECBC]; /*0x730b46*/
  if ( *(_DWORD *)MEMORY[0xA8ECBC] ) /*0x730b46*/
  {
    if ( (v2[20] & 1) != 0 ) /*0x730b54*/
    {
      LOBYTE(v0) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v2 + 884))(v2, 9); /*0x730b5e*/
      if ( (_BYTE)v0 ) /*0x730b66*/
LABEL_47:
        LOBYTE(v0) = PlayVocClass(MEMORY[0x8871E0]->?[2], 0x2000, 1.0, 0); /*0x730d39*/
    }
  }
  return v0; /*0x730d55*/
}


// ==== 0x00730D60  ObjectClass::GetFactoryData  this=ObjectClass  sig=csp ====
char sub_730D60()
{
  char result; // al
  int v1; // ebp
  char v2; // bl
  _BYTE *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  wchar_t *v8; // [esp+10h] [ebp-4h]

  if ( FactoryClass::GetFlag() ) /*0x730d65*/
    return System_Get(); /*0x730d6e*/
  result = (char)MEMORY[0xA8ECC8]; /*0x730d79*/
  if ( (int)MEMORY[0xA8ECC8] > 0 )
  {
    v1 = 0; /*0x730d86*/
    v2 = 1; /*0x730d88*/
    v8 = MEMORY[0xA8ECC8]; /*0x730d8c*/
    do
    {
      v3 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v1); /*0x730d9b*/
      if ( v3 && (v3[20] & 1) != 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 160))(*((_DWORD *)MEMORY[0xA8ECBC] + v1))
          && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 156))(v3)
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) != 6 )
        {
          v4 = *(_DWORD *)v3; /*0x730dd8*/
          v5 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v3 + 452))(v3, 0, 0); /*0x730de0*/
          result = (*(int (__thiscall **)(_BYTE *, int, int))(v4 + 888))(v3, 11, v5); /*0x730deb*/
          v2 = result; /*0x730df1*/
          if ( !result ) /*0x730df5*/
            return result; /*0x730df5*/
        }
        else if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) == 1
               && (*((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) == 1
                   ? (_DWORD *)(v3 + 728)
                   : (_DWORD *)728)
                || *(_BYTE *)(*((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v3 + 44))(v3) == 1
                              ? (_DWORD *)(v3 + 1732)
                              : (_DWORD *)1732)
                            + 3598)) )
        {
          v6 = *(_DWORD *)v3; /*0x730e43*/
          v7 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v3 + 452))(v3, 0, 0); /*0x730e4b*/
          result = (*(int (__thiscall **)(_BYTE *, int, int))(v6 + 888))(v3, 11, v7); /*0x730e56*/
          v2 = result; /*0x730e5c*/
          if ( !result ) /*0x730e60*/
            return result; /*0x730e60*/
        }
      }
      result = (char)v8; /*0x730e62*/
      ++v1; /*0x730e66*/
    }
    while ( v1 < (int)v8 );
    if ( v2 ) /*0x730e71*/
      return PlayVocClass(MEMORY[0x8871E0]->?[0], 0x2000, 1.0, 0); /*0x730e8a*/
  }
  return result; /*0x730d73*/
}


// ==== 0x00730EA0  UI_Create_730EA0  this=-  sig=ida-proto ====
wchar_t *sub_730EA0()
{
  wchar_t *result; // eax
  wchar_t *v1; // ebp
  int v2; // edi
  char v3; // bl
  _BYTE *v4; // esi

  result = MEMORY[0xA8ECC8]; /*0x730ea0*/
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x730eab*/
  {
    v1 = MEMORY[0xA8ECC8]; /*0x730ead*/
    v2 = 0; /*0x730eaf*/
    v3 = 1; /*0x730eb3*/
    while ( 1 ) /*0x730eb7*/
    {
      result = (wchar_t *)MEMORY[0xA8ECBC]; /*0x730eb7*/
      v4 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v2); /*0x730ebc*/
      if ( v4 ) /*0x730ec1*/
      {
        if ( (v4[20] & 1) != 0 ) /*0x730ec7*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 160))(*((_DWORD *)MEMORY[0xA8ECBC] + v2)) /*0x730ee3*/
            || (result = (wchar_t *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 156))(v4), (_BYTE)result) )
          {
            result = (wchar_t *)(*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v4 + 884))(v4, 6); /*0x730eeb*/
            v3 = (char)result; /*0x730ef1*/
            if ( !(_BYTE)result ) /*0x730ef5*/
              break; /*0x730ef5*/
          }
        }
      }
      if ( ++v2 >= (int)v1 ) /*0x730efa*/
      {
        if ( v3 ) /*0x730efe*/
          return (wchar_t *)PlayVocClass(MEMORY[0x8871E0]->?[3], 0x2000, 1.0, 0); /*0x730f17*/
        return result; /*0x730f17*/
      }
    }
  }
  return result; /*0x730f1c*/
}


// ==== 0x00730F30  ObjectClass::UI_Create_730F30  this=ObjectClass  sig=csp ====
wchar_t *sub_730F30()
{
  wchar_t *result; // eax
  char *v1; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  result = (wchar_t *)MEMORY[0xA8B538]; /*0x730f30*/
  if ( !MEMORY[0xA8B538] ) /*0x730f3a*/
  {
    result = MEMORY[0xA8ED84]; /*0x730f51*/
    if ( MEMORY[0x84555C] + LODWORD(MEMORY[0x8871E0]->?) < (int)MEMORY[0xA8ED84] ) /*0x730f5a*/
    {
      v1 = EventClass::AddEvent(v2, *((_DWORD *)HouseClass_Player + 12), 0x2Du); /*0x730f6c*/
      if ( Networking_LastEventIndex < 128 ) /*0x730f7b*/
      {
        qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v1, 0x6Fu); /*0x730f99*/
        g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x730fac*/
        Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x730fc3*/
        ++Networking_LastEventIndex; /*0x730fc9*/
      }
      MEMORY[0x84555C] = (int)MEMORY[0xA8ED84]; /*0x730fd3*/
      return MEMORY[0xA8ED84]; /*0x730fce*/
    }
  }
  return result; /*0x730fd8*/
}


// ==== 0x00730FE0  ObjectClass::UI_Create_730FE0  this=ObjectClass  sig=csp ====
wchar_t *sub_730FE0()
{
  wchar_t *result; // eax
  wchar_t *v1; // ebp
  int v2; // edi
  char v3; // bl
  _BYTE *v4; // esi

  result = MEMORY[0xA8ECC8]; /*0x730fe0*/
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x730feb*/
  {
    v1 = MEMORY[0xA8ECC8]; /*0x730fed*/
    v2 = 0; /*0x730fef*/
    v3 = 1; /*0x730ff3*/
    while ( 1 ) /*0x730ff7*/
    {
      result = (wchar_t *)MEMORY[0xA8ECBC]; /*0x730ff7*/
      v4 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v2); /*0x730ffc*/
      if ( v4 ) /*0x731001*/
      {
        if ( (v4[20] & 1) != 0 ) /*0x731007*/
        {
          result = (wchar_t *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v4 + 160))(*((_DWORD *)MEMORY[0xA8ECBC] + v2)); /*0x73100d*/
          if ( (_BYTE)result ) /*0x731015*/
          {
            result = (wchar_t *)(*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v4 + 884))(v4, 7); /*0x73101d*/
            v3 = (char)result; /*0x731023*/
            if ( !(_BYTE)result ) /*0x731027*/
              break; /*0x731027*/
          }
        }
      }
      if ( ++v2 >= (int)v1 ) /*0x73102c*/
      {
        if ( v3 ) /*0x731030*/
          return (wchar_t *)PlayVocClass(MEMORY[0x8871E0]->?[1], 0x2000, 1.0, 0); /*0x73104a*/
        return result; /*0x73104a*/
      }
    }
  }
  return result; /*0x73104f*/
}


// ==== 0x00731060  CreateTeamCommand::performAction_246  this=VOID_PTR  sig=csp ====
void __thiscall sub_731060(char *this)
{
  int v1; // ebx
  int i; // edi
  int v4; // esi
  int v5; // ecx

  v1 = MEMORY[0xA8EC88]; /*0x731061*/
  for ( i = 0; i < v1; ++i )
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x731077*/
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 540); /*0x731083*/
      if ( MEMORY[0xA8B238][0] ? House::IsHumanPlayer((#375 *)v5) : *(_BYTE *)(v5 + 493) )
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x7310a9*/
          *(_DWORD *)(v4 + 532) = -1; /*0x7310ab*/
        if ( *(_BYTE *)(v4 + 131) ) /*0x7310b5*/
          *(_DWORD *)(v4 + 532) = this - 1; /*0x7310bf*/
      }
    }
  }
}


// ==== 0x007310D0  ObjectClass::SidebarClearReferences  this=int  sig=csp ====
void __thiscall sub_7310D0(char *this)
{
  int v1; // ebx
  int i; // edi
  int v4; // esi
  int v5; // ecx
  char IsHumanPlayer; // al

  v1 = MEMORY[0xA8EC88]; /*0x7310d1*/
  for ( i = 0; i < v1; ++i ) /*0x7310df*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x7310e7*/
    if ( v4 ) /*0x7310ec*/
    {
      v5 = *(_DWORD *)(v4 + 540); /*0x7310f3*/
      if ( MEMORY[0xA8B238][0] ) /*0x7310fb*/
        IsHumanPlayer = House::IsHumanPlayer((#375 *)v5); /*0x731105*/
      else
        IsHumanPlayer = *(_BYTE *)(v5 + 493); /*0x7310fd*/
      if ( IsHumanPlayer ) /*0x73110c*/
      {
        if ( *(char **)(v4 + 532) == this - 1 ) /*0x731119*/
          *(_DWORD *)(v4 + 532) = -1; /*0x73111b*/
      }
    }
  }
}


// ==== 0x00731130  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_731130(char *this)
{
  int v1; // edi
  int v3; // esi
  char *v5; // ecx

  v1 = MEMORY[0xA8EC88] - 1; /*0x731138*/
  if ( MEMORY[0xA8EC88] - 1 < 0 ) /*0x73113f*/
    return 1; /*0x7311a6*/
  while ( 1 )
  {
    v3 = *((_DWORD *)MEMORY[0xA8EC7C] + v1); /*0x731147*/
    if ( v3 && !*(_BYTE *)(v3 + 129) )
    {
      if ( MEMORY[0xA8B238][0] ? House::IsHumanPlayer(*(#375 **)(v3 + 540)) : *(_BYTE *)(*(_DWORD *)(v3 + 540) + 493) )
      {
        v5 = *(char **)(v3 + 532); /*0x73117e*/
        if ( v5 != this - 1 ) /*0x731189*/
          goto LABEL_17; /*0x731189*/
        if ( !*(_BYTE *)(v3 + 131) ) /*0x731193*/
          return 0; /*0x731193*/
        if ( v5 != this - 1 ) /*0x731197*/
        {
LABEL_17:
          if ( *(_BYTE *)(v3 + 131) ) /*0x731199*/
            return 0; /*0x7311a6*/
        }
      }
    }
    if ( --v1 < 0 ) /*0x7311a4*/
      return 1; /*0x7311a4*/
  }
}


// ==== 0x007311C0  TacticalClass::SetObserverView  this=VOID_PTR  sig=csp ====
int __thiscall sub_7311C0(char *this)
{
  char *v1; // esi
  int v2; // edi
  int v3; // esi
  char *v5; // ecx
  int v7; // edi
  int v8; // esi
  char IsHumanPlayer; // al
  _DWORD *v10; // esi
  int NukeTakeOff; // ecx
  int v13; // [esp+14h] [ebp-8h]

  v1 = this; /*0x7311c5*/
  TacticalClass::SetObserverMode(&MEMORY[0x87F7E8], 0); /*0x7311d3*/
  TacticalClass::SetDisplayMode(&MEMORY[0x87F7E8], 0, 0); /*0x7311e1*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x7311ed*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x7311f9*/
  MapClass::ToggleZoom((int *)&MEMORY[0x87F7E8], 0); /*0x731205*/
  if ( timeGetTime() - MEMORY[0x845550] < 0x320 && v1 == (char *)MEMORY[0x845554] )
  {
    v2 = MEMORY[0xA8EC88] - 1; /*0x731234*/
    if ( MEMORY[0xA8EC88] - 1 < 0 ) /*0x731239*/
      return TacticalClass::ResetView(v1); /*0x7312b3*/
    while ( 1 )
    {
      v3 = *((_DWORD *)MEMORY[0xA8EC7C] + v2); /*0x731241*/
      if ( v3 && !*(_BYTE *)(v3 + 129) )
      {
        if ( MEMORY[0xA8B238][0] ? House::IsHumanPlayer(*(#375 **)(v3 + 540)) : *(_BYTE *)(*(_DWORD *)(v3 + 540) + 493) )
        {
          v5 = *(char **)(v3 + 532); /*0x73127c*/
          if ( v5 != this - 1 ) /*0x731285*/
            goto LABEL_32; /*0x731285*/
          if ( !*(_BYTE *)(v3 + 131) ) /*0x73128f*/
            break; /*0x73128f*/
          if ( v5 != this - 1 ) /*0x731293*/
          {
LABEL_32:
            if ( *(_BYTE *)(v3 + 131) ) /*0x731295*/
              break; /*0x731295*/
          }
        }
      }
      if ( --v2 < 0 ) /*0x7312a0*/
      {
        v1 = this; /*0x7312a2*/
        return TacticalClass::ResetView(v1); /*0x7312a2*/
      }
    }
    v1 = this; /*0x7312b4*/
  }
  MEMORY[0x845550] = timeGetTime(); /*0x7312c0*/
  MEMORY[0x845554] = (int)v1; /*0x7312c5*/
  SuperWeaponClass::UpdateAll(); /*0x7312cb*/
  v7 = 0; /*0x7312d5*/
  for ( g_MoveFeedback = 1; v7 < MEMORY[0xA8EC88]; ++v7 ) /*0x7312e0*/
  {
    v8 = *((_DWORD *)MEMORY[0xA8EC7C] + v7); /*0x7312f0*/
    if ( v8 && !*(_BYTE *)(v8 + 129) && *(char **)(v8 + 532) == this - 1 ) /*0x73130e*/
    {
      if ( MEMORY[0xA8B238][0] ) /*0x731317*/
        IsHumanPlayer = House::IsHumanPlayer(*(#375 **)(v8 + 540)); /*0x73132d*/
      else
        IsHumanPlayer = *(_BYTE *)(*(_DWORD *)(v8 + 540) + 493); /*0x73131f*/
      if ( IsHumanPlayer ) /*0x731334*/
      {
        if ( !*(_BYTE *)(v8 + 131) ) /*0x731336*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 332))(v8); /*0x731344*/
          v10 = (_DWORD *)(v8 + 372); /*0x731355*/
          NukeTakeOff = MEMORY[0x8871E0]->InfantryNuked; /*0x73135b*/
          *v10 = MEMORY[0xA8ED84]; /*0x731361*/
          v10[1] = v13; /*0x731363*/
          v10[2] = NukeTakeOff; /*0x731366*/
          g_MoveFeedback = 0; /*0x731369*/
        }
      }
    }
  }
  g_MoveFeedback = 1; /*0x73137e*/
  return FrameTimer::Init25(); /*0x7312ad*/
}


// ==== 0x007313A0  TacticalClass::ResetView  this=VOID_PTR  sig=csp ====
int __thiscall TacticalClass_ResetView(char *this)
{
  int i; // edi
  int v3; // esi
  char IsHumanPlayer; // al
  int result; // eax

  TacticalClass::SetObserverMode(&MEMORY[0x87F7E8], 0); /*0x7313ac*/
  TacticalClass::SetDisplayMode(&MEMORY[0x87F7E8], 0, 0); /*0x7313ba*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x7313c6*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x7313d2*/
  MapClass::ToggleZoom((int *)&MEMORY[0x87F7E8], 0); /*0x7313de*/
  if ( MEMORY[0xA8ECC8] /*0x731411*/
    && (!*(_DWORD *)MEMORY[0xA8ECBC]
     || (*(_BYTE *)(*(_DWORD *)MEMORY[0xA8ECBC] + 20) & 4) == 0
     || *(char **)(*(_DWORD *)MEMORY[0xA8ECBC] + 532) != this - 1) )
  {
    SuperWeaponClass::UpdateAll(); /*0x731419*/
  }
  for ( i = 0; i < MEMORY[0xA8EC88]; ++i ) /*0x731427*/
  {
    v3 = *((_DWORD *)MEMORY[0xA8EC7C] + i); /*0x73142f*/
    if ( v3 && !*(_BYTE *)(v3 + 129) && *(char **)(v3 + 532) == this - 1 ) /*0x73144b*/
    {
      if ( MEMORY[0xA8B238][0] ) /*0x731454*/
        IsHumanPlayer = House::IsHumanPlayer(*(#375 **)(v3 + 540)); /*0x73146a*/
      else
        IsHumanPlayer = *(_BYTE *)(*(_DWORD *)(v3 + 540) + 493); /*0x73145c*/
      if ( IsHumanPlayer && !*(_BYTE *)(v3 + 131) ) /*0x731473*/
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 332))(v3); /*0x731481*/
        g_MoveFeedback = 0; /*0x731487*/
      }
    }
  }
  TacticalClass::InterpolateView(); /*0x73149e*/
  result = MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x7314aa*/
  g_MoveFeedback = 1; /*0x7314af*/
  return result; /*0x7314b6*/
}


// ==== 0x007314C0  SquadClass::SelectAllMembers  this=VOID_PTR  sig=csp ====
int __thiscall sub_7314C0(char *this)
{
  int result; // eax
  int v3; // edi
  int v4; // esi
  char IsHumanPlayer; // al

  TacticalClass::SetObserverMode(&MEMORY[0x87F7E8], 0); /*0x7314cb*/
  TacticalClass::SetDisplayMode(&MEMORY[0x87F7E8], 0, 0); /*0x7314d9*/
  BuildingClass::TogglePower2(&MEMORY[0x87F7E8], 0); /*0x7314e5*/
  BuildingClass::TogglePower(&MEMORY[0x87F7E8], 0); /*0x7314f1*/
  MapClass::ToggleZoom((int *)&MEMORY[0x87F7E8], 0); /*0x7314fd*/
  result = MEMORY[0xA8EC88]; /*0x731502*/
  v3 = 0; /*0x731507*/
  g_MoveFeedback = 1; /*0x73150b*/
  if ( MEMORY[0xA8EC88] <= 0 ) /*0x731512*/
  {
    g_MoveFeedback = 1; /*0x73158f*/
  }
  else
  {
    do /*0x731581*/
    {
      v4 = *((_DWORD *)MEMORY[0xA8EC7C] + v3); /*0x73151a*/
      if ( v4 && !*(_BYTE *)(v4 + 129) && *(char **)(v4 + 532) == this - 1 ) /*0x731536*/
      {
        if ( MEMORY[0xA8B238][0] ) /*0x73153f*/
          IsHumanPlayer = House::IsHumanPlayer(*(#375 **)(v4 + 540)); /*0x731555*/
        else
          IsHumanPlayer = *(_BYTE *)(*(_DWORD *)(v4 + 540) + 493); /*0x731547*/
        if ( IsHumanPlayer ) /*0x73155c*/
        {
          if ( !*(_BYTE *)(v4 + 131) ) /*0x73155e*/
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 332))(v4); /*0x73156c*/
            g_MoveFeedback = 0; /*0x731572*/
          }
        }
      }
      result = MEMORY[0xA8EC88]; /*0x731579*/
      ++v3; /*0x73157e*/
    }
    while ( v3 < MEMORY[0xA8EC88] ); /*0x731581*/
    g_MoveFeedback = 1; /*0x731585*/
  }
  return result; /*0x731584*/
}


// ==== 0x007315A0  TAction::CenterOnStartCoords  this=TAction  sig=csp ====
int TAction_CenterOnStartCoords()
{
  int v0; // eax
  int v1; // ecx
  int v2; // edx
  int v3; // edi
  int v4; // esi
  int *v5; // eax
  int *v6; // eax
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // ecx
  int *v12; // eax
  int *StartCoords; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v18; // [esp+8h] [ebp-34h] BYREF
  int v19; // [esp+Ch] [ebp-30h] BYREF
  int v20; // [esp+10h] [ebp-2Ch]
  int v21; // [esp+14h] [ebp-28h]
  int v22; // [esp+18h] [ebp-24h] BYREF
  int v23; // [esp+1Ch] [ebp-20h]
  int v24; // [esp+20h] [ebp-1Ch]
  _BYTE v25[12]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v26[3]; // [esp+30h] [ebp-Ch] BYREF

  v0 = MEMORY[0xB0FE10]; /*0x7315a3*/
  v1 = MEMORY[0xB0FE14]; /*0x7315a8*/
  v2 = MEMORY[0xB0FE18]; /*0x7315ae*/
  v22 = MEMORY[0xB0FE10]; /*0x7315bd*/
  v23 = MEMORY[0xB0FE14]; /*0x7315c1*/
  v24 = MEMORY[0xB0FE18]; /*0x7315c5*/
  v19 = MEMORY[0xB0FE10]; /*0x7315c9*/
  v20 = MEMORY[0xB0FE14]; /*0x7315cd*/
  v21 = MEMORY[0xB0FE18]; /*0x7315d1*/
  v3 = *((_DWORD *)HouseClass_Player + 30) - 1; /*0x7315d8*/
  if ( v3 < 0 ) /*0x7315d9*/
    goto LABEL_52; /*0x7315d9*/
  while ( 1 ) /*0x7315fb*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)HouseClass_Player + 27) + 4 * v3); /*0x7315fb*/
    if ( v4 && !*(_BYTE *)(v4 + 129) ) /*0x731602*/
    {
      if ( *(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5817) ) /*0x731612*/
      {
        v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v25); /*0x731624*/
        v22 = *v5; /*0x731629*/
        v23 = v5[1]; /*0x731630*/
        v24 = v5[2]; /*0x731637*/
        if ( *(_BYTE *)(v4 + 979) ) /*0x73163b*/
          break; /*0x731643*/
      }
      else if ( v19 == v0 && v20 == v1 && v21 == v2 ) /*0x731657*/
      {
        v6 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 72))(v4, v26); /*0x731662*/
        v19 = *v6; /*0x731667*/
        v20 = v6[1]; /*0x73166e*/
        v21 = v6[2]; /*0x731675*/
      }
    }
    if ( --v3 < 0 ) /*0x73167a*/
      break; /*0x73167a*/
    v0 = MEMORY[0xB0FE10]; /*0x7315e1*/
    v1 = MEMORY[0xB0FE14]; /*0x7315e6*/
    v2 = MEMORY[0xB0FE18]; /*0x7315ec*/
  }
  if ( v19 == MEMORY[0xB0FE10] /*0x7316cd*/
    && v20 == MEMORY[0xB0FE14]
    && v21 == MEMORY[0xB0FE18]
    && v22 == MEMORY[0xB0FE10]
    && v23 == MEMORY[0xB0FE14]
    && v24 == MEMORY[0xB0FE18] )
  {
LABEL_52:
    if ( *((_DWORD *)HouseClass_Player + 186) ) /*0x7316d8*/
    {
      v7 = MEMORY[0x8B4118] - 1; /*0x7316ec*/
      if ( MEMORY[0x8B4118] - 1 >= 0 ) /*0x7316f1*/
      {
        while ( 1 ) /*0x7316f9*/
        {
          v8 = *((_DWORD *)MEMORY[0x8B410C] + v7); /*0x7316f9*/
          if ( v8 ) /*0x7316fe*/
          {
            if ( !*(_BYTE *)(v8 + 129) ) /*0x731700*/
            {
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v8 + 540)) ) /*0x731710*/
              {
                v9 = 0; /*0x73171f*/
                v10 = MEMORY[0x8871E0]->AutocreateTime[1]; /*0x731721*/
                if ( v10 > 0 ) /*0x731729*/
                  break; /*0x731729*/
              }
            }
          }
LABEL_29:
          if ( --v7 < 0 ) /*0x731744*/
            goto LABEL_32; /*0x731744*/
        }
        v11 = (_DWORD *)MEMORY[0x8871E0]->SovietSurvivorDivisor[2]; /*0x731731*/
        while ( *v11 != *(_DWORD *)(v8 + 1732) ) /*0x731739*/
        {
          ++v9; /*0x73173b*/
          ++v11; /*0x73173c*/
          if ( v9 >= v10 ) /*0x731741*/
            goto LABEL_29; /*0x731741*/
        }
        v12 = (int *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 72))(v8, v26); /*0x731751*/
        v22 = *v12; /*0x731756*/
        v23 = v12[1]; /*0x73175d*/
        v24 = v12[2]; /*0x731764*/
      }
    }
  }
LABEL_32:
  StartCoords = HouseClass::GetStartCoords(HouseClass_Player, v26); /*0x731768*/
  v14 = *StartCoords; /*0x73178c*/
  v15 = StartCoords[1]; /*0x731790*/
  v16 = StartCoords[2]; /*0x731793*/
  if ( (v14 != MEMORY[0xB0FE10] || v15 != MEMORY[0xB0FE14] || v16 != MEMORY[0xB0FE18]) /*0x7317b6*/
    && (v14 != MEMORY[0xB0FE38] || v15 != MEMORY[0xB0FE3C] || v16 != MEMORY[0xB0FE40]) )
  {
    v19 = v14; /*0x7317b8*/
    v20 = v15; /*0x7317bc*/
    v21 = v16; /*0x7317c0*/
  }
  if ( v22 == MEMORY[0xB0FE10] && v23 == MEMORY[0xB0FE14] && v24 == MEMORY[0xB0FE18] ) /*0x7317d4*/
  {
    if ( v19 != MEMORY[0xB0FE10] || v20 != MEMORY[0xB0FE14] || v21 != MEMORY[0xB0FE18] ) /*0x7317ed*/
      ((void (__stdcall *)(int *))Tactical::SetTacticalPosition)(&v19); /*0x7317fa*/
  }
  else
  {
    ((void (__stdcall *)(int *))Tactical::SetTacticalPosition)(&v22); /*0x7317db*/
  }
  if ( MEMORY[0x880990] ) /*0x731809*/
    Tactical::MouseMove((int)&MEMORY[0x87F7E8], &v18, &MEMORY[0xB0FDF0]); /*0x73181a*/
  MapClass::SetScrollMode((int)&MEMORY[0x87F7E8], 0); /*0x731826*/
  return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x731837*/
}


// ==== 0x00731840  SquadClass::ProcessMove  this=IUnknown  sig=csp ====
CellStruct *__thiscall SquadClass::ProcessMove(IUnknown *this)
{
  CellStruct *result; // eax
  char v2[112]; // [esp+0h] [ebp-70h] BYREF

  result = MEMORY[0xA8B238]; /*0x731840*/
  if ( MEMORY[0xA8B238] ) /*0x73184a*/
  {
    result = (CellStruct *)MEMORY[0xA8B230]; /*0x731850*/
    if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x400) == 0 ) /*0x73185a*/
    {
      result = *(CellStruct **)&MEMORY[0x87F8E4].__pad_5568[9108]; /*0x731860*/
      if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5301) ) /*0x731865*/
      {
        if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5307) ) /*0x73186f*/
        {
          result = (CellStruct *)EventClass::Add2(v2, *(AnimClass **)&HouseClass_Player->__pad_28[8], 3u, this); /*0x73188a*/
          if ( Networking_LastEventIndex < 128 ) /*0x731899*/
          {
            qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], result, 0x6Fu); /*0x7318b7*/
            g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x7318ca*/
            result = (CellStruct *)(Networking_LastEventIndex + 1); /*0x7318e0*/
            Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x7318e1*/
            ++Networking_LastEventIndex; /*0x7318e7*/
          }
        }
      }
    }
  }
  return result; /*0x7318ec*/
}


// ==== 0x007318F0  ObjectClass::UI_Create_7318F0  this=ObjectClass  sig=csp ====
char *sub_7318F0()
{
  char *result; // eax
  char v1[112]; // [esp+0h] [ebp-70h] BYREF

  result = (char *)MEMORY[0xA8ECC8]; /*0x7318f0*/
  if ( MEMORY[0xA8ECC8] ) /*0x7318fa*/
  {
    result = (char *)HouseClass_Player; /*0x731900*/
    if ( !*((_BYTE *)HouseClass_Player + 501) ) /*0x731905*/
    {
      result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 60))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x73191d*/
      if ( result != (char *)HouseClass_Player ) /*0x731926*/
      {
        result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 60))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x731935*/
        if ( result[492] ) /*0x731938*/
        {
          result = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 56))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x73194f*/
          if ( MEMORY[0xA8B238][0] ) /*0x73195a*/
          {
            if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x400) == 0 /*0x731981*/
              && BYTE1(MEMORY[0x8871E0][1].InfantryBrute)
              && HIBYTE(MEMORY[0x8871E0][1].InfantryMutate) )
            {
              result = EventClass::Add2(v1, *((_DWORD *)HouseClass_Player + 12), 3u, (int)result); /*0x73199c*/
              if ( Networking_LastEventIndex < 128 ) /*0x7319ab*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], result, 0x6Fu); /*0x7319c9*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x7319dc*/
                result = (char *)(Networking_LastEventIndex + 1); /*0x7319f2*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x7319f3*/
                ++Networking_LastEventIndex; /*0x7319f9*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x7319fe*/
}


// ==== 0x00731A10  UI_Delete  this=-  sig=ida-proto ====
char sub_731A10()
{
  _DWORD **v0; // eax

  v0 = (_DWORD **)UI_Delete_Delete_63AC60(); /*0x731a10*/
  if ( v0 ) /*0x731a17*/
    return UI_Delete_Delete(v0); /*0x731a1b*/
  else
    return Network::SendBeaconDelete(dword_89C3B0, -1, -1); /*0x731a29*/
}


// ==== 0x00731A30  UI_Create_731A30  this=-  sig=ida-proto ====
int sub_731A30()
{
  int result; // eax

  result = MEMORY[0xA8B538]; /*0x731a30*/
  if ( !MEMORY[0xA8B538] ) /*0x731a37*/
    return MapClass::ToggleZoom((int *)&MEMORY[0x87F7E8], -1); /*0x731a40*/
  return result; /*0x731a45*/
}


// ==== 0x00731A50  UI_Create_731A50  this=-  sig=ida-proto ====
int __fastcall sub_731A50(char a1)
{
  int result; // eax

  result = MEMORY[0xA8B538]; /*0x731a50*/
  if ( !MEMORY[0xA8B538] ) /*0x731a5a*/
  {
    UI_Create_731A50_Create(); /*0x731a5c*/
    return UI_Create_731A50_Create_63A120(a1, 1); /*0x731a65*/
  }
  return result; /*0x731a6a*/
}


// ==== 0x00731A70  UI_Create_731A70  this=-  sig=ida-proto ====
int __fastcall sub_731A70(char a1)
{
  int result; // eax

  House_Play(); /*0x731a73*/
  result = MEMORY[0xA8B538]; /*0x731a78*/
  if ( !MEMORY[0xA8B538] ) /*0x731a7f*/
    return UI_Create_731A50_Create_63A120(a1, 0); /*0x731a85*/
  return result; /*0x731a8a*/
}


// ==== 0x00731A90  j_FactoryClass_GetFlag  this=-  sig=ida-proto ====
// attributes: thunk
char j_FactoryClass_GetFlag(void)
{
  return FactoryClass::GetFlag();
}


// ==== 0x00731AA0  ObjectClass::method_731AA0  this=ObjectClass  sig=csp ====
char sub_731AA0()
{
  wchar_t *v0; // edi
  int v1; // esi
  _BYTE *v2; // ecx

  v0 = MEMORY[0xA8ECC8]; /*0x731aa3*/
  v1 = 0; /*0x731aa9*/
  if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x731aad*/
    return 1; /*0x731ad8*/
  while ( 1 ) /*0x731ab4*/
  {
    v2 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v1); /*0x731ab4*/
    if ( v2 ) /*0x731ab9*/
    {
      if ( (v2[20] & 1) != 0 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 1216))(v2) ) /*0x731ac9*/
        break; /*0x731ac9*/
    }
    if ( ++v1 >= (int)v0 ) /*0x731ad6*/
      return 1; /*0x731ad6*/
  }
  return 0; /*0x731ad8*/
}


// ==== 0x00731AF0  ObjectClass::BlowStraw_29_Get  this=ObjectClass  sig=csp ====
wchar_t *sub_731AF0()
{
  wchar_t *result; // eax
  wchar_t *StringCSF; // eax
  int v2; // ecx
  wchar_t *v3; // edi
  int v4; // esi
  _BYTE *v5; // ecx
  wchar_t *v6; // eax
  int v7; // ecx

  result = MEMORY[0xA8ECC8]; /*0x731af1*/
  if ( !MEMORY[0xA8ECC8] ) /*0x731afa*/
  {
    StringCSF = GetStringCSF(MEMORY[0x845584], 0, MEMORY[0x845598], 856); /*0x731b0d*/
    v2 = 3; /*0x731b18*/
    if ( HouseClass_Player ) /*0x731b1f*/
      v2 = *((_DWORD *)HouseClass_Player + 22549); /*0x731b21*/
    result = (wchar_t *)MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, StringCSF, v2, 16454, 240, 1); /*0x731b3e*/
    goto LABEL_5; /*0x731b3e*/
  }
  v3 = MEMORY[0xA8ECC8]; /*0x731b4e*/
  v4 = 0; /*0x731b50*/
  if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x731b54*/
  {
LABEL_5:
    MEMORY[0xB0FE58] = 1; /*0x731b43*/
    return result; /*0x731b4d*/
  }
  while ( 1 ) /*0x731b56*/
  {
    result = (wchar_t *)MEMORY[0xA8ECBC]; /*0x731b56*/
    v5 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v4); /*0x731b5b*/
    if ( v5 ) /*0x731b60*/
    {
      if ( (v5[20] & 1) != 0 ) /*0x731b6c*/
      {
        result = (wchar_t *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 1216))(v5); /*0x731b70*/
        if ( !(_BYTE)result ) /*0x731b78*/
          break; /*0x731b78*/
      }
    }
    if ( ++v4 >= (int)v3 ) /*0x731b7d*/
    {
      MEMORY[0xB0FE58] = 1; /*0x731b80*/
      return result; /*0x731b89*/
    }
  }
  v6 = GetStringCSF(MEMORY[0x845568], 0, MEMORY[0x845598], 862); /*0x731b9b*/
  v7 = 3; /*0x731ba6*/
  if ( HouseClass_Player ) /*0x731bad*/
    v7 = *((_DWORD *)HouseClass_Player + 22549); /*0x731baf*/
  return (wchar_t *)MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, v6, v7, 16454, 240, 1); /*0x731b43*/
}


// ==== 0x00731BE0  sub_731BE0  this=-  sig=ida-proto ====
void sub_731BE0()
{
  MEMORY[0xB0FE58] = 0; /*0x731be0*/
}


// ==== 0x00731BF0  ObjectClass::Render_Draw_731BF0  this=TechnoClass  sig=csp ====
char sub_731BF0()
{
  bool v1; // bl
  bool IsButtonDown; // al
  wchar_t *v3; // edi
  int v4; // esi
  _BYTE *v5; // ecx

  if ( MEMORY[0xB0FE58] ) /*0x731bfa*/
    return 1; /*0x731c01*/
  v1 = Mouse::IsButtonDown(MEMORY[0xA8EC00]) || Mouse::IsButtonDown(MEMORY[0xA8EC04]); /*0x731c31*/
  if ( Mouse::IsButtonDown(MEMORY[0xA8EC08]) || (IsButtonDown = Mouse::IsButtonDown(MEMORY[0xA8EC0C])) ) /*0x731c54*/
    IsButtonDown = 1; /*0x731c5d*/
  if ( v1 && IsButtonDown ) /*0x731c66*/
  {
    v3 = MEMORY[0xA8ECC8]; /*0x731c68*/
    v4 = 0; /*0x731c6e*/
    if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x731c72*/
      return 1; /*0x731ca2*/
    while ( 1 ) /*0x731c79*/
    {
      v5 = (_BYTE *)*((_DWORD *)MEMORY[0xA8ECBC] + v4); /*0x731c79*/
      if ( v5 ) /*0x731c7e*/
      {
        if ( (v5[20] & 1) != 0 && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 1216))(v5) ) /*0x731c8e*/
          break; /*0x731c8e*/
      }
      if ( ++v4 >= (int)v3 ) /*0x731c9b*/
        return 1; /*0x731c9b*/
    }
  }
  return 0; /*0x731bfc*/
}


// ==== 0x00731CB0  Map_Handle_731CB0  this=int  sig=csp ====
int sub_731CB0()
{
  return 71; /*0x731cb5*/
}


// ==== 0x00731CC0  Map_Handle_731CC0  this=int  sig=csp ====
int sub_731CC0()
{
  return 22; /*0x731cc5*/
}


// ==== 0x00731CD0  Factory::IdleHandler  this=Factory  sig=ida-proto ====
int Factory_IdleHandler()
{
  return System_Handle(77, 0); /*0x731cde*/
}


// ==== 0x00731CE0  Memory::Alloc76  this=Memory  sig=ida-proto ====
int Memory_Alloc76()
{
  return System_Handle(76, 0); /*0x731cee*/
}


// ==== 0x00731CF0  TechnoClass::GetField  this=int  sig=ida-proto ====
void TechnoClass::GetField()
{
  MEMORY[0xB0FE58] = 0; /*0x731cf0*/
}


// ==== 0x00731D00  Selection::SetCurrent  this=AbstractClass  sig=csp ====
void __thiscall Selection_SetCurrent(void *this)
{
  MEMORY[0xB0FE54] = (int)this; /*0x731d00*/
  MEMORY[0xB0FE58] = 0; /*0x731d06*/
}


// ==== 0x00731D90  FillUnitTooltipUI  this=VOID_PTR  sig=csp ====
wchar_t *__fastcall FillUnitTooltipUI(wchar_t *Destination, wchar_t *Source)
{
  wchar_t *v2; // esi
  const wchar_t *v3; // ebp
  wchar_t *v4; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  CampaignScore *v13; // [esp+0h] [ebp-D8h]
  CampaignScore Destinationa[5]; // [esp+10h] [ebp-C8h] BYREF

  v2 = Destination; /*0x731d9d*/
  if ( *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[21064] + 16) && Source ) /*0x731db0*/
  {
    wcscpy((wchar_t *)Destinationa, Source); /*0x731dbc*/
    _wcsupr(Destinationa); /*0x731dc6*/
    v3 = *(const wchar_t **)&HouseClass_Player.__pad_5568[23060]; /*0x731dcb*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23060] ) /*0x731dd6*/
    {
      v6 = 0; /*0x731e08*/
      v7 = 0; /*0x731e0a*/
      if ( *(int *)&HouseClass_Player.__pad_5568[23060] > 0 ) /*0x731e0e*/
      {
        do /*0x731e4b*/
        {
          v8 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23048] + 4 * v7); /*0x731e16*/
          if ( v8 ) /*0x731e1b*/
          {
            if ( (*(_BYTE *)(v8 + 20) & 1) != 0 ) /*0x731e27*/
            {
              v9 = *(_DWORD *)(v8 + 540); /*0x731e2b*/
              v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 136))(v8); /*0x731e31*/
              v6 += (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 132))(v10, v9); /*0x731e42*/
              v2 = Destination; /*0x731e44*/
            }
          }
          ++v7; /*0x731e48*/
        }
        while ( v7 < (int)v3 ); /*0x731e4b*/
      }
      StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[63536], 0, &stru_830620.__pad_579C[63452], 1052); /*0x731e65*/
      return (wchar_t *)swprintf(v2, (const size_t)StringCSF, v3, Destinationa); /*0x731e6c*/
    }
    else
    {
      v4 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[63552], 0, &stru_830620.__pad_579C[63452], 1032); /*0x731dee*/
      return (wchar_t *)swprintf(v2, (const size_t)v4, (const wchar_t *const)Destinationa, v13); /*0x731df5*/
    }
  }
  else
  {
    v12 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[63520], 0, &stru_830620.__pad_579C[63452], 1022); /*0x731e90*/
    return wcscpy(v2, v12); /*0x731e97*/
  }
}


// ==== 0x00731EB0  sub_731EB0  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_731EB0(unsigned __int8 (__fastcall *a1)(int, int), int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v13; // [esp+14h] [ebp-4h]

  v2 = __2_YAPAXI_Z(0x18u); /*0x731ec0*/
  if ( v2 ) /*0x731ecc*/
  {
    v2[1] = 0; /*0x731ece*/
    v2[2] = 0; /*0x731ed1*/
    *((_BYTE *)v2 + 12) = 1; /*0x731ed4*/
    *((_BYTE *)v2 + 13) = 0; /*0x731ed8*/
    *v2 = &vt_DynamicVectorClass_TechnoClass; /*0x731edb*/
    v2[5] = 10; /*0x731ee1*/
    v2[4] = 0; /*0x731ee8*/
    v3 = v2; /*0x731eeb*/
  }
  else
  {
    v3 = 0; /*0x731eef*/
  }
  v4 = 0; /*0x731ef6*/
  v13 = MEMORY[0xA8EC88]; /*0x731efa*/
  if ( MEMORY[0xA8EC88] <= 0 ) /*0x731efe*/
    return v3; /*0x731f62*/
  do /*0x731f56*/
  {
    v5 = *((_DWORD *)MEMORY[0xA8EC7C] + v4); /*0x731f0a*/
    if ( a1(v5, a2) ) /*0x731f0f*/
    {
      v6 = v3[2]; /*0x731f17*/
      if ( v3[4] < v6 /*0x731f39*/
        || (*((_BYTE *)v3 + 13) || !v6)
        && (v7 = v3[5], v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v6 + v7, 0) )
      {
        v8 = v3[4]; /*0x731f40*/
        v9 = v3[1]; /*0x731f43*/
        v3[4] = v8 + 1; /*0x731f49*/
        *(_DWORD *)(v9 + 4 * v8) = v5; /*0x731f4c*/
      }
    }
    ++v4; /*0x731f53*/
  }
  while ( v4 < v13 ); /*0x731f56*/
  return v3; /*0x731f5b*/
}


// ==== 0x00731F70  GatherTechnoClassFiltered  this=int  sig=csp ====
_DWORD *__fastcall TechnoClass_GatherFiltered(unsigned __int8 (__fastcall *a1)(int, int), int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ebp
  int CoordData; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int Height; // [esp+18h] [ebp-4h]

  v2 = __2_YAPAXI_Z(0x18u); /*0x731f80*/
  if ( v2 ) /*0x731f8c*/
  {
    v2[1] = 0; /*0x731f8e*/
    v2[2] = 0; /*0x731f91*/
    *((_BYTE *)v2 + 12) = 1; /*0x731f94*/
    *((_BYTE *)v2 + 13) = 0; /*0x731f98*/
    *v2 = &vt_DynamicVectorClass_TechnoClass; /*0x731f9b*/
    v2[5] = 10; /*0x731fa1*/
    v2[4] = 0; /*0x731fa8*/
    v3 = v2; /*0x731fab*/
  }
  else
  {
    v3 = 0; /*0x731faf*/
  }
  v4 = 0; /*0x731fbc*/
  Height = GetHeightMap(MEMORY[0x887324]); /*0x731fc0*/
  if ( Height <= 0 ) /*0x731fc4*/
    return v3; /*0x73203d*/
  do /*0x732031*/
  {
    CoordData = GetCoordDataMap(v4); /*0x731fd3*/
    if ( CoordData && (*(_BYTE *)(CoordData + 20) & 1) != 0 && a1(CoordData, a2) ) /*0x731fea*/
    {
      v6 = v3[2]; /*0x731ff2*/
      if ( v3[4] < v6 /*0x732014*/
        || (*((_BYTE *)v3 + 13) || !v6)
        && (v7 = v3[5], v7 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v6 + v7, 0) )
      {
        v8 = v3[4]; /*0x73201b*/
        v9 = v3[1]; /*0x73201e*/
        v3[4] = v8 + 1; /*0x732024*/
        *(_DWORD *)(v9 + 4 * v8) = CoordData; /*0x732027*/
      }
    }
    ++v4; /*0x73202e*/
  }
  while ( v4 < Height ); /*0x732031*/
  return v3; /*0x732036*/
}


// ==== 0x00732050  TechnoClass::GatherAllBuildings  this=TechnoClass  sig=ida-proto ====
_DWORD *TechnoClass_GatherAllBuildings()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  int v2; // ebp
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  wchar_t *v9; // [esp+10h] [ebp-4h]

  v0 = __2_YAPAXI_Z(0x18u); /*0x732058*/
  if ( v0 ) /*0x732064*/
  {
    v0[1] = 0; /*0x732066*/
    v0[2] = 0; /*0x732069*/
    *((_BYTE *)v0 + 12) = 1; /*0x73206c*/
    *((_BYTE *)v0 + 13) = 0; /*0x732070*/
    *v0 = &vt_DynamicVectorClass_TechnoClass; /*0x732073*/
    v0[5] = 10; /*0x732079*/
    v0[4] = 0; /*0x732080*/
    v1 = v0; /*0x732083*/
  }
  else
  {
    v1 = 0; /*0x732087*/
  }
  v2 = 0; /*0x73208e*/
  v9 = MEMORY[0xA8ECC8]; /*0x732092*/
  if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x732096*/
    return v1; /*0x7320fc*/
  do /*0x7320f0*/
  {
    v3 = *((_DWORD *)MEMORY[0xA8ECBC] + v2); /*0x73209e*/
    if ( v3 && (*(_BYTE *)(v3 + 20) & 1) != 0 ) /*0x7320af*/
    {
      v4 = v1[2]; /*0x7320b1*/
      if ( v1[4] < v4 /*0x7320d3*/
        || (*((_BYTE *)v1 + 13) || !v4)
        && (v5 = v1[5], v5 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v1 + 8))(v1, v4 + v5, 0) )
      {
        v6 = v1[4]; /*0x7320da*/
        v7 = v1[1]; /*0x7320dd*/
        v1[4] = v6 + 1; /*0x7320e3*/
        *(_DWORD *)(v7 + 4 * v6) = v3; /*0x7320e6*/
      }
    }
    ++v2; /*0x7320ed*/
  }
  while ( v2 < (int)v9 ); /*0x7320f0*/
  return v1; /*0x7320f5*/
}


// ==== 0x00732110  sub_732110  this=-  sig=ida-proto ====
int __fastcall sub_732110(int a1, int (__fastcall *a2)(_DWORD, int), int a3)
{
  int v4; // esi
  int v6; // ebx
  int result; // eax

  v4 = 0; /*0x732116*/
  v6 = *(_DWORD *)(a1 + 16); /*0x73211a*/
  if ( v6 > 0 ) /*0x73211f*/
  {
    do /*0x732130*/
      result = a2(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v4++), a3); /*0x73212b*/
    while ( v4 < v6 ); /*0x732130*/
  }
  return result; /*0x732132*/
}


// ==== 0x00732140  sub_732140  this=-  sig=ida-proto ====
int __fastcall sub_732140(
        int a1,
        unsigned __int8 (__fastcall *a2)(int, int),
        void (__fastcall *a3)(int, int),
        int a4,
        int a5)
{
  int result; // eax
  int v7; // edi
  int v9; // esi
  int i; // [esp+Ch] [ebp-4h]

  result = *(_DWORD *)(a1 + 16); /*0x732146*/
  v7 = 0; /*0x732149*/
  for ( i = result; v7 < i; ++v7 ) /*0x732153*/
  {
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v7); /*0x73215d*/
    if ( a2(v9, a4) ) /*0x732162*/
      a3(v9, a5); /*0x73216e*/
    result = i; /*0x732172*/
  }
  return result; /*0x73217c*/
}


// ==== 0x00732190  sub_732190  this=-  sig=ida-proto ====
char __fastcall sub_732190(int a1, unsigned __int8 (__fastcall *a2)(_DWORD, int), int a3)
{
  int v4; // esi
  int v6; // ebp

  v4 = 0; /*0x732196*/
  v6 = *(_DWORD *)(a1 + 16); /*0x73219a*/
  if ( v6 <= 0 ) /*0x73219f*/
    return 1; /*0x7321b6*/
  while ( a2(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v4), a3) ) /*0x7321af*/
  {
    if ( ++v4 >= v6 ) /*0x7321b4*/
      return 1; /*0x7321b4*/
  }
  return 0; /*0x7321b6*/
}


// ==== 0x007321D0  sub_7321D0  this=-  sig=ida-proto ====
char __fastcall sub_7321D0(int a1, unsigned __int8 (__fastcall *a2)(_DWORD, int), int a3)
{
  int v4; // esi
  int v6; // ebp

  v4 = 0; /*0x7321d6*/
  v6 = *(_DWORD *)(a1 + 16); /*0x7321da*/
  if ( v6 <= 0 ) /*0x7321df*/
    return 0; /*0x7321f6*/
  while ( !a2(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v4), a3) ) /*0x7321ef*/
  {
    if ( ++v4 >= v6 ) /*0x7321f4*/
      return 0; /*0x7321f4*/
  }
  return 1; /*0x7321f6*/
}


// ==== 0x00732210  SelectFactionThemeMusic_Helper  this=VectorClass  sig=csp ====
int __fastcall sub_732210(int a1, const char *a2)
{
  int v2; // eax
  int v3; // edi
  const char **i; // ebp

  v2 = *(_DWORD *)(a1 + 16); /*0x732211*/
  v3 = 0; /*0x732218*/
  if ( v2 <= 0 ) /*0x732220*/
    return -1; /*0x732261*/
  for ( i = *(const char ***)(a1 + 4); strcmp(a2, *i); ++i ) /*0x732222*/
  {
    if ( ++v3 >= v2 ) /*0x73225f*/
      return -1; /*0x73225f*/
  }
  return v3; /*0x732261*/
}


// ==== 0x00732580  TechnoClass::IsOwnedByHuman  this=TechnoClass  sig=csp ====
BOOL __thiscall TechnoClass_IsOwnedByHuman(int this)
{
  BOOL result; // eax

  result = 0; /*0x7325b4*/
  if ( this && *(_BYTE *)(this + 144) )
  {
    if ( MEMORY[0xA8B238] ? House::IsHumanPlayer(*(#375 **)(this + 540)) : *(_BYTE *)(*(_DWORD *)(this + 540) + 493) )
      return 1; /*0x73258c*/
  }
  return result; /*0x7325b9*/
}


// ==== 0x007325C0  ObjectClass::method_7325C0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_7325C0(void *this)
{
  return (*(int (__thiscall **)(void *))(this->fallRate)(this) != 6 /*0x7325f4*/
      && *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 132))(this) + 3516)
      && (*(unsigned __int8 (__thiscall **)(void *))(this->__pad_13C)(this);
}


// ==== 0x00732600  PlayerClass::UpdateAIUnits  this=int  sig=csp ====
char __thiscall sub_732600(void *this)
{
  int HeightMap; // eax
  _DWORD *v2; // esi
  int v3; // ebp
  int v4; // ebx
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  _DWORD *v8; // eax
  int v9; // ebp
  int i; // edi
  int v11; // ebp
  int j; // edi
  int v13; // ecx
  int v16; // [esp+14h] [ebp-4h] BYREF

  if ( MEMORY[0xB0FE64] ) /*0x732613*/
  {
    HeightMap = (int)__2_YAPAXI_Z(0x18u); /*0x732619*/
    v2 = (_DWORD *)HeightMap; /*0x73261e*/
    v3 = 0; /*0x732620*/
    if ( HeightMap ) /*0x732627*/
    {
      LOBYTE(HeightMap) = (unsigned __int8)EventClass::resetEvent((_DWORD *)HeightMap, 0, 0); /*0x73262d*/
      *v2 = &vt_DynamicVectorClass_TechnoClass; /*0x732632*/
      v2[5] = 10; /*0x732638*/
      v2[4] = 0; /*0x73263f*/
    }
    else
    {
      v2 = 0; /*0x732644*/
    }
    v4 = MEMORY[0xA8EC88]; /*0x732647*/
    if ( MEMORY[0xA8EC88] > 0 ) /*0x73264f*/
    {
      do /*0x7326a6*/
      {
        v5 = *((_DWORD *)MEMORY[0xA8EC7C] + v3); /*0x73265a*/
        LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(v5, this); /*0x73265f*/
        if ( (_BYTE)HeightMap ) /*0x732666*/
        {
          v6 = v2[2]; /*0x732668*/
          if ( v2[4] < v6 /*0x732692*/
            || ((LOBYTE(HeightMap) = *((_BYTE *)v2 + 13), (_BYTE)HeightMap) || !v6)
            && (HeightMap = v2[5], HeightMap > 0)
            && (LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v6 + HeightMap, 0),
                (_BYTE)HeightMap) )
          {
            HeightMap = v2[4]; /*0x732694*/
            v7 = v2[1]; /*0x732697*/
            v2[4] = HeightMap + 1; /*0x73269d*/
            *(_DWORD *)(v7 + 4 * HeightMap) = v5; /*0x7326a0*/
          }
        }
        ++v3; /*0x7326a3*/
      }
      while ( v3 < v4 ); /*0x7326a6*/
    }
  }
  else
  {
    v8 = __2_YAPAXI_Z(0x18u); /*0x7326ae*/
    v2 = v8; /*0x7326b3*/
    if ( v8 ) /*0x7326ba*/
    {
      EventClass::resetEvent(v8, 0, 0); /*0x7326c2*/
      *v2 = &vt_DynamicVectorClass_TechnoClass; /*0x7326c7*/
      v2[5] = 10; /*0x7326cd*/
      v2[4] = 0; /*0x7326d4*/
    }
    else
    {
      v2 = 0; /*0x7326dd*/
    }
    HeightMap = GetHeightMap(MEMORY[0x887324]); /*0x7326e5*/
    v9 = HeightMap; /*0x7326ea*/
    for ( i = 0; i < v9; ++i ) /*0x7326f0*/
    {
      HeightMap = GetCoordDataMap(i); /*0x7326f9*/
      if ( HeightMap ) /*0x732700*/
      {
        if ( (*(_BYTE *)(HeightMap + 20) & 1) != 0 ) /*0x73270c*/
        {
          v16 = HeightMap; /*0x732714*/
          LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(HeightMap, this); /*0x732718*/
          if ( (_BYTE)HeightMap ) /*0x73271f*/
            LOBYTE(HeightMap) = DynamicVector::AddItem(v2, &v16); /*0x732728*/
        }
      }
    }
  }
  v11 = v2[4]; /*0x732732*/
  for ( j = 0; j < v11; ++j ) /*0x732739*/
  {
    v13 = *(_DWORD *)(v2[1] + 4 * j); /*0x73273e*/
    LOBYTE(HeightMap) = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 336))(v13); /*0x732743*/
  }
  if ( v2 ) /*0x732750*/
    LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int))*v2)(v2, 1); /*0x732758*/
  return HeightMap; /*0x73275a*/
}


// ==== 0x00732770  StepTechnoClassCleanupIfHuman  this=int  sig=csp ====
BOOL __fastcall TechnoClass_StepCleanupIfHuman(int a1, void *a2)
{
  char v4; // al
  BOOL result; // eax

  result = 0; /*0x7327b7*/
  if ( a1 && *(_BYTE *)(a1 + 144) )
  {
    v4 = MEMORY[0xA8B238] ? House::IsHumanPlayer(*(#375 **)(a1 + 540)) : *(_BYTE *)(*(_DWORD *)(a1 + 540) + 493);
    if ( v4 && (unsigned __int8)ObjectClass::StepCleanup((void *)a1, a2) ) /*0x7327ad*/
      return 1; /*0x732782*/
  }
  return result; /*0x7327b6*/
}


// ==== 0x007327D0  MoveFeedback::ProcessCommand  this=int  sig=csp ====
char __thiscall MoveFeedback_Process(void *this)
{
  char v1; // bl
  int Height; // eax
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // ebp
  int i; // edi
  int v14; // ecx
  char v16; // [esp+13h] [ebp-9h]
  int v18; // [esp+18h] [ebp-4h] BYREF

  v1 = g_MoveFeedback; /*0x7327d9*/
  v16 = g_MoveFeedback; /*0x7327e8*/
  g_MoveFeedback = 0; /*0x7327ec*/
  if ( MEMORY[0xB0FE64] ) /*0x7327f5*/
  {
    Height = (int)__2_YAPAXI_Z(0x18u); /*0x7327fb*/
    v3 = (_DWORD *)Height; /*0x732800*/
    v4 = 0; /*0x732802*/
    if ( Height ) /*0x732809*/
    {
      LOBYTE(Height) = (unsigned __int8)EventClass::resetEvent((_DWORD *)Height, 0, 0); /*0x73280f*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x732814*/
      v3[5] = 10; /*0x73281a*/
      v3[4] = 0; /*0x732821*/
    }
    else
    {
      v3 = 0; /*0x732826*/
    }
    v5 = MEMORY[0xA8EC88]; /*0x732828*/
    if ( MEMORY[0xA8EC88] > 0 ) /*0x732830*/
    {
      do /*0x732887*/
      {
        v6 = *((_DWORD *)MEMORY[0xA8EC7C] + v4); /*0x73283b*/
        LOBYTE(Height) = StepTechnoClassCleanupIfHuman(v6, this); /*0x732840*/
        if ( (_BYTE)Height ) /*0x732847*/
        {
          v7 = v3[2]; /*0x732849*/
          if ( v3[4] < v7 /*0x732873*/
            || ((LOBYTE(Height) = *((_BYTE *)v3 + 13), (_BYTE)Height) || !v7)
            && (Height = v3[5], Height > 0)
            && (LOBYTE(Height) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v7 + Height, 0),
                (_BYTE)Height) )
          {
            Height = v3[4]; /*0x732875*/
            v8 = v3[1]; /*0x732878*/
            v3[4] = Height + 1; /*0x73287e*/
            *(_DWORD *)(v8 + 4 * Height) = v6; /*0x732881*/
          }
        }
        ++v4; /*0x732884*/
      }
      while ( v4 < v5 ); /*0x732887*/
    }
    v1 = v16; /*0x732889*/
  }
  else
  {
    v9 = __2_YAPAXI_Z(0x18u); /*0x73288f*/
    v3 = v9; /*0x732894*/
    v10 = 0; /*0x732896*/
    if ( v9 ) /*0x73289d*/
    {
      EventClass::resetEvent(v9, 0, 0); /*0x7328a3*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x7328a8*/
      v3[5] = 10; /*0x7328ae*/
      v3[4] = 0; /*0x7328b5*/
    }
    else
    {
      v3 = 0; /*0x7328ba*/
    }
    Height = GetHeightMap(MEMORY[0x887324]); /*0x7328c2*/
    v11 = Height; /*0x7328c7*/
    if ( Height > 0 ) /*0x7328cb*/
    {
      do /*0x73290b*/
      {
        Height = GetCoordDataMap(v10); /*0x7328d4*/
        if ( Height ) /*0x7328db*/
        {
          if ( (*(_BYTE *)(Height + 20) & 1) != 0 ) /*0x7328e7*/
          {
            v18 = Height; /*0x7328ef*/
            LOBYTE(Height) = StepTechnoClassCleanupIfHuman(Height, this); /*0x7328f3*/
            if ( (_BYTE)Height ) /*0x7328fa*/
              LOBYTE(Height) = DynamicVector::AddItem(v3, &v18); /*0x732903*/
          }
        }
        ++v10; /*0x732908*/
      }
      while ( v10 < v11 ); /*0x73290b*/
    }
  }
  v12 = v3[4]; /*0x73290d*/
  for ( i = 0; i < v12; ++i ) /*0x732914*/
  {
    v14 = *(_DWORD *)(v3[1] + 4 * i); /*0x732919*/
    LOBYTE(Height) = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 332))(v14); /*0x73291e*/
  }
  if ( v3 ) /*0x73292b*/
    LOBYTE(Height) = (*(int (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x732933*/
  g_MoveFeedback = v1; /*0x732937*/
  return Height; /*0x732935*/
}


// ==== 0x00732950  ObjectClass::SelectAllOfType  this=ObjectClass  sig=csp ====
int SelectAllOfType()
{
  int result; // eax
  int v1; // edi
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // ebp
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // ebp
  int HeightMap; // ebx
  int i; // esi
  int CoordDataMap; // edi
  int v11; // edi
  int v12; // esi
  _DWORD *v13; // eax
  int v14; // edi
  int j; // esi
  int v16; // ebp
  int k; // edi
  int v18; // esi
  int v19; // eax
  wchar_t *v20; // [esp-4h] [ebp-214h]
  wchar_t *StringCSF; // [esp-4h] [ebp-214h]
  int v22; // [esp+8h] [ebp-208h] BYREF
  int (__thiscall ***v23)(_DWORD, int); // [esp+Ch] [ebp-204h]
  wchar_t Destination[256]; // [esp+10h] [ebp-200h] BYREF

  result = MEMORY[0xA8B538]; /*0x732950*/
  v1 = 0; /*0x73295d*/
  if ( MEMORY[0xA8B538] ) /*0x732961*/
    return result; /*0x732961*/
  SelectAllOfType_Play(MEMORY[0x887324]); /*0x73296d*/
  if ( MEMORY[0xB0FE54] != 2 ) /*0x732979*/
    MEMORY[0xB0FE64] = 0; /*0x73297b*/
  v23 = (int (__thiscall ***)(_DWORD, int))TacticalClass::CollectSelectedIDs(); /*0x732989*/
  if ( MEMORY[0xB0FE64] ) /*0x732996*/
  {
    v2 = __2_YAPAXI_Z(0x18u); /*0x732998*/
    v3 = v2; /*0x73299d*/
    if ( v2 ) /*0x7329a4*/
    {
      EventClass::resetEvent(v2, 0, 0); /*0x7329aa*/
      *v3 = &vt_DynamicVectorClass_TechnoClass; /*0x7329af*/
      v3[5] = 10; /*0x7329b5*/
      v3[4] = 0; /*0x7329bc*/
    }
    else
    {
      v3 = 0; /*0x7329c1*/
    }
    v4 = MEMORY[0xA8EC88]; /*0x7329c3*/
    if ( MEMORY[0xA8EC88] > 0 ) /*0x7329cb*/
    {
      do /*0x7329f3*/
      {
        v22 = *((_DWORD *)MEMORY[0xA8EC7C] + v1); /*0x7329d7*/
        if ( TechnoClass::IsOwnedByHuman(v22) ) /*0x7329db*/
          DynamicVector::AddItem(v3, &v22); /*0x7329eb*/
        ++v1; /*0x7329f0*/
      }
      while ( v1 < v4 ); /*0x7329f3*/
    }
    v5 = v3; /*0x7329f5*/
  }
  else
  {
    v6 = __2_YAPAXI_Z(0x18u); /*0x7329fc*/
    v7 = v6; /*0x732a01*/
    if ( v6 ) /*0x732a08*/
    {
      EventClass::resetEvent(v6, 0, 0); /*0x732a0e*/
      *v7 = &vt_DynamicVectorClass_TechnoClass; /*0x732a13*/
      v7[5] = 10; /*0x732a1a*/
      v7[4] = 0; /*0x732a21*/
    }
    else
    {
      v7 = 0; /*0x732a26*/
    }
    HeightMap = GetHeightMap(MEMORY[0x887324]); /*0x732a33*/
    for ( i = 0; i < HeightMap; ++i ) /*0x732a39*/
    {
      CoordDataMap = GetCoordDataMap(i); /*0x732a47*/
      if ( (unsigned __int8)SelectAllOfType_Helper(CoordDataMap) ) /*0x732a4b*/
      {
        v22 = CoordDataMap; /*0x732a58*/
        if ( TechnoClass::IsOwnedByHuman(CoordDataMap) ) /*0x732a5c*/
          DynamicVector::AddItem(v7, &v22); /*0x732a6c*/
      }
    }
    v11 = 0; /*0x732a79*/
    v5 = v7; /*0x732a7d*/
    v22 = v7[4]; /*0x732a7f*/
    if ( v22 <= 0 ) /*0x732a83*/
    {
LABEL_25:
      MEMORY[0xB0FE64] = 1; /*0x732aad*/
    }
    else
    {
      while ( 1 ) /*0x732a8c*/
      {
        v12 = *(_DWORD *)(v7[1] + 4 * v11); /*0x732a8c*/
        if ( (unsigned __int8)IDTechnoClassMatches(v12, v23) ) /*0x732a91*/
        {
          if ( !*(_BYTE *)(v12 + 131) ) /*0x732a9a*/
            break; /*0x732a9a*/
        }
        if ( ++v11 >= v22 ) /*0x732aab*/
          goto LABEL_25; /*0x732aab*/
      }
      if ( !MEMORY[0xB0FE64] ) /*0x732abd*/
        goto LABEL_36; /*0x732abd*/
    }
    if ( v7 ) /*0x732ac1*/
      (*(void (__thiscall **)(_DWORD *, int))*v7)(v7, 1); /*0x732aca*/
    v13 = __2_YAPAXI_Z(0x18u); /*0x732ace*/
    if ( v13 ) /*0x732ad8*/
      v5 = DynamicVector::Constructor_Techno(v13, 0, 0); /*0x732ae5*/
    else
      v5 = 0; /*0x732ae9*/
    v14 = MEMORY[0xA8EC88]; /*0x732aeb*/
    for ( j = 0; j < v14; ++j ) /*0x732af5*/
    {
      v22 = *((_DWORD *)MEMORY[0xA8EC7C] + j); /*0x732b01*/
      if ( TechnoClass::IsOwnedByHuman(v22) ) /*0x732b05*/
        DynamicVector::AddItem(v5, &v22); /*0x732b15*/
    }
  }
LABEL_36:
  v16 = v5[4]; /*0x732b1f*/
  for ( k = 0; k < v16; ++k ) /*0x732b26*/
  {
    v18 = *(_DWORD *)(v5[1] + 4 * k); /*0x732b2b*/
    if ( (unsigned __int8)IDTechnoClassMatches(v18, v23) ) /*0x732b34*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 332))(v18); /*0x732b41*/
  }
  if ( MEMORY[0xA8ECC8] ) /*0x732b55*/
  {
    if ( MEMORY[0xB0FE64] ) /*0x732b7c*/
      StringCSF = GetStringCSF(MEMORY[0x8455C8], 0, MEMORY[0x845598], 1011); /*0x732b98*/
    else
      StringCSF = GetStringCSF(MEMORY[0x8455B4], 0, MEMORY[0x845598], 1013); /*0x732bb2*/
    wcscpy(Destination, StringCSF); /*0x732b9a*/
  }
  else
  {
    v20 = GetStringCSF(MEMORY[0x845584], 0, MEMORY[0x845598], 1009); /*0x732b71*/
    wcscpy(Destination, v20); /*0x732b73*/
  }
  v19 = 3; /*0x732bc8*/
  if ( HouseClass_Player ) /*0x732bcd*/
    v19 = *((_DWORD *)HouseClass_Player + 22549); /*0x732bcf*/
  result = MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, Destination, v19, 16454, 240, 1); /*0x732bf0*/
  MEMORY[0xB0FE54] = 2; /*0x732bf5*/
  MEMORY[0xB0FE58] = 0; /*0x732bff*/
  if ( v23 ) /*0x732c0c*/
    result = (**v23)(v23, 1); /*0x732c12*/
  if ( v5 ) /*0x732c16*/
    return (*(int (__thiscall **)(_DWORD *, int))*v5)(v5, 1); /*0x732c1e*/
  return result; /*0x732c20*/
}


// ==== 0x00732C30  IDTechnoClassMatches  this=int  sig=csp ====
char __fastcall IDTechnoClassMatches(void *a1, int a2)
{
  int v3; // ebp
  int v4; // edi

  v3 = *(_DWORD *)(a2 + 16); /*0x732c35*/
  v4 = 0; /*0x732c39*/
  if ( v3 <= 0 ) /*0x732c3f*/
    return 0; /*0x732c8a*/
  while ( !(unsigned __int8)ObjectClass::StepCleanup(a1, *(void **)(*(_DWORD *)(a2 + 4) + 4 * v4)) /*0x732c83*/
       || !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a1 + 316))(a1)
       && (!a1
        || (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 44))(a1) != 6
        || !*(_DWORD *)((*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 132))(a1) + 1032)) )
  {
    if ( ++v4 >= v3 ) /*0x732c88*/
      return 0; /*0x732c88*/
  }
  return 1; /*0x732c8a*/
}


// ==== 0x00732CA0  UI_Create_732CA0  this=-  sig=ida-proto ====
char sub_732CA0()
{
  DWORD Time; // eax

  LOBYTE(Time) = MEMORY[0xB0FE65]; /*0x732ca0*/
  if ( !MEMORY[0xB0FE65] ) /*0x732ca7*/
  {
    MEMORY[0xB0FE65] = 1; /*0x732ca9*/
    Time = timeGetTime(); /*0x732cb0*/
    MEMORY[0xB0FE68] = Time; /*0x732cb6*/
  }
  return Time; /*0x732cbb*/
}


// ==== 0x00732CC0  UI_Create_732CC0  this=-  sig=ida-proto ====
char sub_732CC0()
{
  int v0; // eax

  LOBYTE(v0) = MEMORY[0xB0FE65]; /*0x732cc0*/
  if ( MEMORY[0xB0FE65] ) /*0x732cc7*/
  {
    MEMORY[0xB0FE65] = 0; /*0x732cc9*/
    v0 = abs32(timeGetTime() - MEMORY[0xB0FE68]); /*0x732cdf*/
    if ( v0 <= 500 ) /*0x732ce6*/
    {
      SelectAllOfType(); /*0x732ce8*/
      LOBYTE(v0) = MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x732cf4*/
    }
  }
  return v0; /*0x732cf9*/
}


// ==== 0x00732D00  Selection::GetFlag  this=Selection  sig=ida-proto ====
char Selection_GetFlag()
{
  return MEMORY[0xB0FE65]; /*0x732d05*/
}


// ==== 0x00732D10  TacticalClass::CollectSelectedIDs  this=VOID_PTR  sig=csp ====
_DWORD *TacticalClass::CollectSelectedIDs()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _DWORD *v2; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // edx
  const char *v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  const char *v12; // ebp
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  const char *v18; // ebp
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v25; // [esp+Ch] [ebp-14h]
  _DWORD *v26; // [esp+10h] [ebp-10h]
  const char **v27; // [esp+14h] [ebp-Ch]
  const char **v28; // [esp+14h] [ebp-Ch]
  const char **v29; // [esp+14h] [ebp-Ch]
  int v30; // [esp+18h] [ebp-8h]
  wchar_t *v31; // [esp+1Ch] [ebp-4h]

  v0 = __2_YAPAXI_Z(0x18u); /*0x732d18*/
  v1 = v0; /*0x732d1d*/
  if ( v0 ) /*0x732d26*/
  {
    TacticalClass::updateScroll(v0, 0, 0); /*0x732d2c*/
    *v1 = &vt_DynamicVectorClass_char_const; /*0x732d31*/
    v1[5] = 10; /*0x732d37*/
    v1[4] = 0; /*0x732d3e*/
    v2 = v1; /*0x732d41*/
  }
  else
  {
    v2 = 0; /*0x732d45*/
  }
  v26 = v2; /*0x732d4c*/
  v31 = MEMORY[0xA8ECC8]; /*0x732d52*/
  v30 = 0; /*0x732d56*/
  if ( (int)MEMORY[0xA8ECC8] <= 0 ) /*0x732d5a*/
    return v2; /*0x732fda*/
  do /*0x732fc9*/
  {
    v3 = *((_DWORD *)MEMORY[0xA8ECBC] + v30); /*0x732d6a*/
    v25 = v3; /*0x732d6f*/
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 136))(v3); /*0x732d75*/
    v5 = v2[4]; /*0x732d7b*/
    v6 = (const char *)(v4 + 36); /*0x732d80*/
    v7 = 0; /*0x732d83*/
    if ( v5 <= 0 ) /*0x732d87*/
    {
LABEL_12:
      v8 = v2[2]; /*0x732de8*/
      if ( v5 < v8 /*0x732e0a*/
        || (*((_BYTE *)v2 + 13) || !v8)
        && (v9 = v2[5], v9 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v8 + v9, 0) )
      {
        v10 = v2[4]; /*0x732e11*/
        v11 = v2[1]; /*0x732e14*/
        v2[4] = v10 + 1; /*0x732e1a*/
        *(_DWORD *)(v11 + 4 * v10) = v6; /*0x732e1d*/
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1028) ) /*0x732e2a*/
      {
        v12 = (const char *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1028) + 36); /*0x732e4b*/
        v13 = 0; /*0x732e4e*/
        if ( (int)v2[4] <= 0 ) /*0x732e52*/
        {
LABEL_26:
          v14 = v2[2]; /*0x732eae*/
          if ( v2[4] < v14 /*0x732ed3*/
            || (*((_BYTE *)v2 + 13) || !v14)
            && (v15 = v2[5], v15 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v14 + v15, 0) )
          {
            v16 = v2[4]; /*0x732eda*/
            v17 = v2[1]; /*0x732edd*/
            v2[4] = v16 + 1; /*0x732ee3*/
            *(_DWORD *)(v17 + 4 * v16) = v12; /*0x732ee6*/
          }
        }
        else
        {
          v28 = (const char **)v2[1]; /*0x732e57*/
          while ( strcmp(v12, *v28) ) /*0x732e8e*/
          {
            ++v13; /*0x732e97*/
            ++v28; /*0x732e9d*/
            if ( v13 >= v2[4] ) /*0x732ea1*/
              goto LABEL_25; /*0x732ea1*/
          }
          if ( v13 == -1 ) /*0x732ea8*/
          {
LABEL_25:
            v3 = v25; /*0x732eaa*/
            goto LABEL_26; /*0x732eaa*/
          }
          v3 = v25; /*0x732eeb*/
        }
      }
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1032) ) /*0x732ef9*/
      {
        v18 = (const char *)(*(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1032) + 36); /*0x732f1a*/
        v19 = 0; /*0x732f1d*/
        if ( (int)v2[4] <= 0 ) /*0x732f21*/
          goto LABEL_40; /*0x732f21*/
        v29 = (const char **)v2[1]; /*0x732f26*/
        while ( strcmp(v18, *v29) ) /*0x732f5d*/
        {
          ++v19; /*0x732f66*/
          ++v29; /*0x732f6c*/
          if ( v19 >= v2[4] ) /*0x732f70*/
            goto LABEL_40; /*0x732f70*/
        }
        if ( v19 == -1 ) /*0x732f77*/
        {
LABEL_40:
          v20 = v2[2]; /*0x732f79*/
          if ( v2[4] < v20 /*0x732f9e*/
            || (*((_BYTE *)v2 + 13) || !v20)
            && (v21 = v2[5], v21 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v2 + 8))(v2, v20 + v21, 0) )
          {
            v22 = v2[4]; /*0x732fa5*/
            v23 = v2[1]; /*0x732fa8*/
            v2[4] = v22 + 1; /*0x732fae*/
            *(_DWORD *)(v23 + 4 * v22) = v18; /*0x732fb1*/
          }
        }
      }
    }
    else
    {
      v27 = (const char **)v2[1]; /*0x732d8c*/
      while ( strcmp(v6, *v27) ) /*0x732dc3*/
      {
        ++v7; /*0x732dc9*/
        ++v27; /*0x732dcf*/
        if ( v7 >= v5 ) /*0x732dd3*/
          goto LABEL_11; /*0x732dd3*/
      }
      if ( v7 == -1 ) /*0x732dda*/
      {
LABEL_11:
        v2 = v26; /*0x732de0*/
        v3 = v25; /*0x732de4*/
        goto LABEL_12; /*0x732de4*/
      }
      v2 = v26; /*0x732fb6*/
    }
    ++v30; /*0x732fc5*/
  }
  while ( v30 < (int)v31 ); /*0x732fc9*/
  return v2; /*0x732fd0*/
}


// ==== 0x00732FF0  sub_732FF0  this=-  sig=ida-proto ====
char __fastcall sub_732FF0(void *a1, int (__fastcall *a2)(_DWORD, int), int a3)
{
  int HeightMap; // eax
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // edx
  _DWORD *v10; // eax
  int v11; // ebx
  int i; // edi
  int v13; // ebp
  int j; // edi
  int v17; // [esp+18h] [ebp-8h] BYREF
  int (__fastcall *v18)(_DWORD, int); // [esp+1Ch] [ebp-4h]

  v18 = a2; /*0x732ffc*/
  if ( MEMORY[0xB0FE64] ) /*0x733008*/
  {
    HeightMap = (int)__2_YAPAXI_Z(0x18u); /*0x73300e*/
    v4 = (_DWORD *)HeightMap; /*0x733013*/
    v5 = 0; /*0x733015*/
    if ( HeightMap ) /*0x73301c*/
    {
      LOBYTE(HeightMap) = (unsigned __int8)EventClass::resetEvent((_DWORD *)HeightMap, 0, 0); /*0x733022*/
      *v4 = &vt_DynamicVectorClass_TechnoClass; /*0x733027*/
      v4[5] = 10; /*0x73302d*/
      v4[4] = 0; /*0x733034*/
    }
    else
    {
      v4 = 0; /*0x733039*/
    }
    v6 = MEMORY[0xA8EC88]; /*0x73303b*/
    if ( MEMORY[0xA8EC88] > 0 ) /*0x733043*/
    {
      do /*0x73309e*/
      {
        v7 = *((_DWORD *)MEMORY[0xA8EC7C] + v5); /*0x733052*/
        LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(v7, a1); /*0x733057*/
        if ( (_BYTE)HeightMap ) /*0x73305e*/
        {
          v8 = v4[2]; /*0x733060*/
          if ( v4[4] < v8 /*0x73308a*/
            || ((LOBYTE(HeightMap) = *((_BYTE *)v4 + 13), (_BYTE)HeightMap) || !v8)
            && (HeightMap = v4[5], HeightMap > 0)
            && (LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v8 + HeightMap, 0),
                (_BYTE)HeightMap) )
          {
            HeightMap = v4[4]; /*0x73308c*/
            v9 = v4[1]; /*0x73308f*/
            v4[4] = HeightMap + 1; /*0x733095*/
            *(_DWORD *)(v9 + 4 * HeightMap) = v7; /*0x733098*/
          }
        }
        ++v5; /*0x73309b*/
      }
      while ( v5 < v6 ); /*0x73309e*/
    }
  }
  else
  {
    v10 = __2_YAPAXI_Z(0x18u); /*0x7330a5*/
    v4 = v10; /*0x7330aa*/
    if ( v10 ) /*0x7330b1*/
    {
      EventClass::resetEvent(v10, 0, 0); /*0x7330b9*/
      *v4 = &vt_DynamicVectorClass_TechnoClass; /*0x7330be*/
      v4[5] = 10; /*0x7330c4*/
      v4[4] = 0; /*0x7330cb*/
    }
    else
    {
      v4 = 0; /*0x7330d4*/
    }
    HeightMap = GetHeightMap(MEMORY[0x887324]); /*0x7330dc*/
    v11 = HeightMap; /*0x7330e1*/
    for ( i = 0; i < v11; ++i ) /*0x7330e7*/
    {
      HeightMap = GetCoordDataMap(i); /*0x7330f0*/
      if ( HeightMap ) /*0x7330f7*/
      {
        if ( (*(_BYTE *)(HeightMap + 20) & 1) != 0 ) /*0x733103*/
        {
          v17 = HeightMap; /*0x73310b*/
          LOBYTE(HeightMap) = StepTechnoClassCleanupIfHuman(HeightMap, a1); /*0x73310f*/
          if ( (_BYTE)HeightMap ) /*0x733116*/
            LOBYTE(HeightMap) = DynamicVector::AddItem(v4, &v17); /*0x73311f*/
        }
      }
    }
  }
  v13 = v4[4]; /*0x733129*/
  for ( j = 0; j < v13; ++j ) /*0x733130*/
    LOBYTE(HeightMap) = v18(*(_DWORD *)(v4[1] + 4 * j), a3); /*0x73313e*/
  if ( v4 ) /*0x733149*/
    LOBYTE(HeightMap) = (*(int (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x733151*/
  return HeightMap; /*0x733153*/
}


// ==== 0x00733160  AbstractClass::processRadarEvent  this=AbstractClass  sig=csp ====
void __thiscall sub_733160(void *this)
{
  int v2; // ecx
  int v3; // eax
  void **i; // edx
  int v5; // edx
  int v6; // edx

  v2 = MEMORY[0xB0FE6C]; /*0x733163*/
  if ( MEMORY[0xB0FE6C] ) /*0x73316b*/
  {
    v3 = *(_DWORD *)(MEMORY[0xB0FE6C] + 16) - 1; /*0x733170*/
    if ( v3 >= 0 ) /*0x733171*/
    {
      for ( i = (void **)(*(_DWORD *)(MEMORY[0xB0FE6C] + 4) + 4 * v3); *i != this; --i ) /*0x733176*/
      {
        if ( --v3 < 0 ) /*0x733183*/
          return; /*0x733183*/
      }
      v5 = *(_DWORD *)(MEMORY[0xB0FE6C] + 16); /*0x733187*/
      if ( v3 < v5 ) /*0x73318c*/
      {
        v6 = v5 - 1; /*0x73318e*/
        *(_DWORD *)(MEMORY[0xB0FE6C] + 16) = v6; /*0x733191*/
        if ( v3 < v6 ) /*0x733194*/
        {
          do /*0x7331a6*/
          {
            ++v3; /*0x733199*/
            *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * v3); /*0x73319d*/
          }
          while ( v3 < *(_DWORD *)(v2 + 16) ); /*0x7331a6*/
        }
      }
    }
  }
}


// ==== 0x007331B0  ObjectClass::method_7331B0  this=ObjectClass  sig=csp ====
char sub_7331B0()
{
  int v0; // ebp
  _DWORD *v1; // eax
  int v2; // esi
  wchar_t *v3; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int HeightMap; // eax
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // ebx
  #375 **v13; // edi
  int v14; // ecx
  int v15; // edx

  v0 = 0; /*0x7331b9*/
  if ( MEMORY[0xB0FE6C] ) /*0x7331bf*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FE6C])(MEMORY[0xB0FE6C], 1); /*0x7331c5*/
    MEMORY[0xB0FE6C] = 0; /*0x7331c7*/
  }
  v1 = __2_YAPAXI_Z(0x18u); /*0x7331cf*/
  v2 = (int)v1; /*0x7331d4*/
  if ( v1 ) /*0x7331db*/
  {
    EventClass::resetEvent(v1, 0, 0); /*0x7331e1*/
    *(_DWORD *)v2 = &vt_DynamicVectorClass_TechnoClass; /*0x7331e6*/
    *(_DWORD *)(v2 + 20) = 10; /*0x7331ec*/
    *(_DWORD *)(v2 + 16) = 0; /*0x7331f3*/
  }
  else
  {
    v2 = 0; /*0x7331f8*/
  }
  v3 = MEMORY[0xA8ECC8]; /*0x7331fa*/
  if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x733202*/
  {
    do /*0x73325b*/
    {
      v4 = *((_DWORD *)MEMORY[0xA8ECBC] + v0); /*0x73320a*/
      if ( v4 && (*(_BYTE *)(v4 + 20) & 1) != 0 ) /*0x73321b*/
      {
        v5 = *(_DWORD *)(v2 + 8); /*0x73321d*/
        if ( *(_DWORD *)(v2 + 16) < v5 /*0x733242*/
          || (*(_BYTE *)(v2 + 13) || !v5)
          && (v6 = *(_DWORD *)(v2 + 20), v6 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 8))(v2, v5 + v6, 0) )
        {
          v7 = *(_DWORD *)(v2 + 16); /*0x733249*/
          v8 = *(_DWORD *)(v2 + 4); /*0x73324c*/
          *(_DWORD *)(v2 + 16) = v7 + 1; /*0x733252*/
          *(_DWORD *)(v8 + 4 * v7) = v4; /*0x733255*/
        }
      }
      ++v0; /*0x733258*/
    }
    while ( v0 < (int)v3 ); /*0x73325b*/
    v0 = 0; /*0x73325d*/
  }
  MEMORY[0xB0FE6C] = v2; /*0x73325f*/
  HeightMap = *(_DWORD *)(v2 + 16); /*0x733265*/
  if ( !HeightMap )
  {
    if ( v2 ) /*0x733272*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x73327a*/
    MEMORY[0xB0FE6C] = 0; /*0x73327e*/
    v10 = __2_YAPAXI_Z(0x18u); /*0x733284*/
    v11 = (int)v10; /*0x733289*/
    if ( v10 ) /*0x733290*/
    {
      EventClass::resetEvent(v10, 0, 0); /*0x733296*/
      *(_DWORD *)v11 = &vt_DynamicVectorClass_TechnoClass; /*0x73329b*/
      *(_DWORD *)(v11 + 20) = 10; /*0x7332a1*/
      *(_DWORD *)(v11 + 16) = 0; /*0x7332a8*/
    }
    else
    {
      v11 = 0; /*0x7332ad*/
    }
    HeightMap = GetHeightMap(MEMORY[0x887324]); /*0x7332b5*/
    v12 = HeightMap; /*0x7332ba*/
    if ( HeightMap > 0 )
    {
      do
      {
        HeightMap = GetCoordDataMap(v0); /*0x7332cb*/
        v13 = (#375 **)HeightMap; /*0x7332d0*/
        if ( HeightMap )
        {
          if ( (*(_BYTE *)(HeightMap + 20) & 1) != 0 )
          {
            LOBYTE(HeightMap) = *(_BYTE *)(HeightMap + 144); /*0x7332e6*/
            if ( (_BYTE)HeightMap )
            {
              LOBYTE(HeightMap) = MEMORY[0xA8B238][0] ? House::IsHumanPlayer(v13[135]) : *((_BYTE *)v13[135] + 493);
              if ( (_BYTE)HeightMap ) /*0x733314*/
              {
                HeightMap = (*((int (__thiscall **)(#375 **))*v13 + 11))(v13); /*0x73331a*/
                if ( HeightMap != 6 ) /*0x733320*/
                {
                  v14 = *(_DWORD *)(v11 + 8); /*0x733322*/
                  if ( *(_DWORD *)(v11 + 16) < v14 /*0x73334c*/
                    || ((LOBYTE(HeightMap) = *(_BYTE *)(v11 + 13), (_BYTE)HeightMap) || !v14)
                    && (HeightMap = *(_DWORD *)(v11 + 20), HeightMap > 0)
                    && (LOBYTE(HeightMap) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 8))(
                                              v11,
                                              v14 + HeightMap,
                                              0),
                        (_BYTE)HeightMap) )
                  {
                    HeightMap = *(_DWORD *)(v11 + 16); /*0x73334e*/
                    v15 = *(_DWORD *)(v11 + 4); /*0x733351*/
                    *(_DWORD *)(v11 + 16) = HeightMap + 1; /*0x733357*/
                    *(_DWORD *)(v15 + 4 * HeightMap) = v13; /*0x73335a*/
                  }
                }
              }
            }
          }
        }
        ++v0; /*0x73335d*/
      }
      while ( v0 < v12 );
    }
    MEMORY[0xB0FE6C] = v11; /*0x733366*/
  }
  return HeightMap; /*0x73336c*/
}


// ==== 0x00733380  UpdateUnitHealthTooltip  this=HealthNavCommandClass  sig=ida-proto ====
int __thiscall UpdateUnitHealthTooltip(HealthNavCommandClass *this)
{
  IUnknown *result; // eax
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  ObjectClass *v8; // esi
  VectorClass *StringCSF; // ebx
  _DWORD *v10; // eax
  VectorClass *v11; // edi
  int v12; // ebp
  int v13; // eax
  void *v14; // ebp
  int v15; // esi
  int v16; // eax
  int v17; // [esp+8h] [ebp-20Ch]
  int v18; // [esp+10h] [ebp-204h] BYREF
  wchar_t Destination[256]; // [esp+14h] [ebp-200h] BYREF

  result = *(IUnknown **)&HouseClass_Player.__pad_5568[8836]; /*0x733380*/
  v2 = 0; /*0x73338c*/
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] ) /*0x733390*/
  {
    if ( *(_DWORD *)&stru_B05488.__pad_579C[21040] == 3 ) /*0x73339d*/
    {
      if ( *(_DWORD *)&stru_830620.__pad_579C[63396] == -1 ) /*0x733402*/
      {
        v17 = 0; /*0x733404*/
      }
      else if ( *(_DWORD *)&stru_830620.__pad_579C[63396] ) /*0x73340c*/
      {
        v4 = -(*(_DWORD *)&stru_830620.__pad_579C[63396] != 1); /*0x73341b*/
        LOBYTE(v4) = v4 & 0xFE; /*0x73341d*/
        v17 = v4 + 2; /*0x733422*/
      }
      else
      {
        v17 = 1; /*0x73340e*/
      }
      if ( (_BYTE)this ) /*0x733428*/
        SuperWeaponClass::UpdateAll(); /*0x733430*/
    }
    else
    {
      if ( *(_DWORD *)&stru_B05488.__pad_579C[21064] ) /*0x7333a7*/
      {
        (***(void (__thiscall ****)(_DWORD, int))&stru_B05488.__pad_579C[21064])( /*0x7333ad*/
          *(_DWORD *)&stru_B05488.__pad_579C[21064],
          1);
        *(_DWORD *)&stru_B05488.__pad_579C[21064] = 0; /*0x7333af*/
      }
      v3 = TechnoClass::GatherAllBuildings(); /*0x7333b5*/
      *(_DWORD *)&stru_B05488.__pad_579C[21064] = v3; /*0x7333ba*/
      if ( !v3[4] ) /*0x7333bf*/
      {
        if ( v3 ) /*0x7333c8*/
          (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x7333d0*/
        *(_DWORD *)&stru_B05488.__pad_579C[21064] = 0; /*0x7333d9*/
        *(_DWORD *)&stru_B05488.__pad_579C[21064] = GatherTechnoClassFiltered( /*0x7333e4*/
                                                      (unsigned __int8 (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                                      0);
      }
      SuperWeaponClass::UpdateAll(); /*0x7333ef*/
      v17 = 0; /*0x7333f4*/
    }
    v5 = *(_DWORD *)&stru_B05488.__pad_579C[21064]; /*0x733437*/
    v6 = 0; /*0x73343e*/
    v7 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[21064] + 16); /*0x733440*/
    if ( v7 > 0 ) /*0x733445*/
    {
      do /*0x733467*/
      {
        v8 = *(ObjectClass **)(*(_DWORD *)(v5 + 4) + 4 * v6); /*0x73344a*/
        if ( BuildingClass::GetSellPriority((int *)v8->__pad_0) == v17 ) /*0x733458*/
          (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v8->__pad_0 + 332))(v8); /*0x73345e*/
        ++v6; /*0x733464*/
      }
      while ( v6 < v7 ); /*0x733467*/
      v2 = 0; /*0x733469*/
    }
    if ( v17 ) /*0x733471*/
    {
      if ( v17 == 1 ) /*0x733490*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x7334a8*/
                                     (wchar_t *)&stru_830620.__pad_579C[63592],
                                     0,
                                     (CampaignScore *)&stru_830620.__pad_579C[63452],
                                     1606);
      }
      else if ( v17 == 2 ) /*0x7334af*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x7334c7*/
                                     (wchar_t *)&stru_830620.__pad_579C[63580],
                                     0,
                                     (CampaignScore *)&stru_830620.__pad_579C[63452],
                                     1608);
      }
      else
      {
        StringCSF = (VectorClass *)&stru_87C374.__pad_579C[23588]; /*0x7334cb*/
      }
    }
    else
    {
      StringCSF = (VectorClass *)GetStringCSF( /*0x733489*/
                                   (wchar_t *)&stru_830620.__pad_579C[63612],
                                   0,
                                   (CampaignScore *)&stru_830620.__pad_579C[63452],
                                   1604);
    }
    v10 = (_DWORD *)__2_YAPAXI_Z(0x18u); /*0x7334d2*/
    if ( v10 ) /*0x7334dc*/
      v11 = (VectorClass *)DynamicVector::Constructor_Techno(v10, 0, 0); /*0x7334e7*/
    else
      v11 = 0; /*0x7334eb*/
    v12 = *(_DWORD *)&HouseClass_Player.__pad_5568[23060]; /*0x7334ed*/
    if ( *(int *)&HouseClass_Player.__pad_5568[23060] > 0 ) /*0x7334f5*/
    {
      do /*0x733522*/
      {
        v13 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23048] + 4 * v2); /*0x7334fc*/
        if ( v13 && (*(_BYTE *)(v13 + 20) & 1) != 0 ) /*0x73350d*/
        {
          v18 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23048] + 4 * v2); /*0x733516*/
          DynamicVector::AddItem(v11, (VectorClass *)&v18); /*0x73351a*/
        }
        ++v2; /*0x73351f*/
      }
      while ( v2 < v12 ); /*0x733522*/
    }
    v14 = v11[1].vtable0; /*0x733524*/
    v15 = 0; /*0x733527*/
    if ( (int)v14 > 0 ) /*0x73352b*/
    {
      while ( BuildingClass::GetSellPriority(*((int **)v11->Items + v15)) == v17 ) /*0x73353c*/
      {
        if ( ++v15 >= (int)v14 ) /*0x733541*/
          goto LABEL_42; /*0x733541*/
      }
      StringCSF = (VectorClass *)GetStringCSF( /*0x73355b*/
                                   (wchar_t *)&stru_830620.__pad_579C[63568],
                                   0,
                                   (CampaignScore *)&stru_830620.__pad_579C[63452],
                                   1583);
    }
LABEL_42:
    if ( v11 ) /*0x73355f*/
      (*(void (__thiscall **)(VectorClass *, int))v11->vtable0)(v11, 1); /*0x733567*/
    FillUnitTooltipUI(Destination, (wchar_t *)StringCSF); /*0x73356f*/
    v16 = 3; /*0x73357a*/
    if ( HouseClass_Player.field_0 ) /*0x733584*/
      v16 = *(_DWORD *)(HouseClass_Player.field_0 + 90196); /*0x733586*/
    MessageListClass::AddMessage( /*0x7335a7*/
      &HouseClass_Player.__pad_5568[10668],
      0,
      0,
      (CellStruct *)Destination,
      v16,
      (IUnknown *)0x4046,
      240,
      1);
    *(_DWORD *)&stru_830620.__pad_579C[63396] = v17; /*0x7335b6*/
    result = *(IUnknown **)(*(_DWORD *)&stru_B05488.__pad_579C[21064] + 16); /*0x7335bc*/
    *(_DWORD *)&stru_B05488.__pad_579C[21040] = 0; /*0x7335c1*/
    if ( result ) /*0x7335cb*/
      *(_DWORD *)&stru_B05488.__pad_579C[21040] = 3; /*0x7335cd*/
    stru_B05488.__pad_579C[21044] = 0; /*0x7335d7*/
  }
  return (int)result; /*0x7335de*/
}


// ==== 0x007335F0  TechnoClass::IsCapturableByPlayer  this=TechnoClass  sig=csp ====
BOOL __thiscall sub_7335F0(#375 **this)
{
  char v2; // al
  BOOL result; // eax

  result = 0; /*0x733633*/
  if ( this && *((_BYTE *)this + 144) )
  {
    v2 = MEMORY[0xA8B238][0] ? House::IsHumanPlayer(*(this + 135)) : *((_BYTE *)*(this + 135) + 493);
    if ( v2 && (*((int (__thiscall **)(#375 **))*this + 11))(this) != 6 ) /*0x733631*/
      return 1; /*0x7335ff*/
  }
  return result; /*0x733638*/
}


// ==== 0x007336C0  DrawUnitExperiencePopup  this=VeterancyNavCommandClass  sig=ida-proto ====
int __thiscall DrawUnitExperiencePopup(VeterancyNavCommandClass *this)
{
  IUnknown *result; // eax
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  float *v8; // esi
  VectorClass *StringCSF; // ebx
  _DWORD *v10; // eax
  VectorClass *v11; // edi
  int v12; // ebp
  int v13; // eax
  void *v14; // ebp
  int v15; // esi
  int v16; // eax
  int v17; // [esp+8h] [ebp-20Ch]
  int v18; // [esp+10h] [ebp-204h] BYREF
  wchar_t Destination[256]; // [esp+14h] [ebp-200h] BYREF

  result = *(IUnknown **)&HouseClass_Player.__pad_5568[8836]; /*0x7336c0*/
  v2 = 0; /*0x7336cc*/
  if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8836] ) /*0x7336d0*/
  {
    if ( *(_DWORD *)&stru_B05488.__pad_579C[21040] == 4 ) /*0x7336dd*/
    {
      if ( *(_DWORD *)&stru_830620.__pad_579C[63400] == -1 ) /*0x733742*/
      {
        v17 = 0; /*0x733744*/
      }
      else if ( *(_DWORD *)&stru_830620.__pad_579C[63400] ) /*0x73374c*/
      {
        v4 = -(*(_DWORD *)&stru_830620.__pad_579C[63400] != 1); /*0x73375b*/
        LOBYTE(v4) = v4 & 0xFE; /*0x73375d*/
        v17 = v4 + 2; /*0x733762*/
      }
      else
      {
        v17 = 1; /*0x73374e*/
      }
      if ( (_BYTE)this ) /*0x733768*/
        SuperWeaponClass::UpdateAll(); /*0x733770*/
    }
    else
    {
      if ( *(_DWORD *)&stru_B05488.__pad_579C[21064] ) /*0x7336e7*/
      {
        (***(void (__thiscall ****)(_DWORD, int))&stru_B05488.__pad_579C[21064])( /*0x7336ed*/
          *(_DWORD *)&stru_B05488.__pad_579C[21064],
          1);
        *(_DWORD *)&stru_B05488.__pad_579C[21064] = 0; /*0x7336ef*/
      }
      v3 = TechnoClass::GatherAllBuildings(); /*0x7336f5*/
      *(_DWORD *)&stru_B05488.__pad_579C[21064] = v3; /*0x7336fa*/
      if ( !v3[4] ) /*0x7336ff*/
      {
        if ( v3 ) /*0x733708*/
          (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x733710*/
        *(_DWORD *)&stru_B05488.__pad_579C[21064] = 0; /*0x733719*/
        *(_DWORD *)&stru_B05488.__pad_579C[21064] = GatherTechnoClassFiltered( /*0x733724*/
                                                      (unsigned __int8 (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                                      0);
      }
      SuperWeaponClass::UpdateAll(); /*0x73372f*/
      v17 = 0; /*0x733734*/
    }
    v5 = *(_DWORD *)&stru_B05488.__pad_579C[21064]; /*0x733777*/
    v6 = 0; /*0x73377e*/
    v7 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[21064] + 16); /*0x733780*/
    if ( v7 > 0 ) /*0x733785*/
    {
      do /*0x7337ab*/
      {
        v8 = *(float **)(*(_DWORD *)(v5 + 4) + 4 * v6); /*0x73378a*/
        if ( FootClass::CheckAccelLimit(v8 + 84) == v17 ) /*0x73379c*/
          (*(void (__thiscall **)(float *))(*(_DWORD *)v8 + 332))(v8); /*0x7337a2*/
        ++v6; /*0x7337a8*/
      }
      while ( v6 < v7 ); /*0x7337ab*/
      v2 = 0; /*0x7337ad*/
    }
    if ( v17 ) /*0x7337b5*/
    {
      if ( v17 == 1 ) /*0x7337d4*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x7337ec*/
                                     (wchar_t *)&stru_830620.__pad_579C[63652],
                                     0,
                                     (CampaignScore *)&stru_830620.__pad_579C[63452],
                                     1680);
      }
      else if ( v17 == 2 ) /*0x7337f3*/
      {
        StringCSF = (VectorClass *)GetStringCSF( /*0x73380b*/
                                     (wchar_t *)&stru_830620.__pad_579C[63628],
                                     0,
                                     (CampaignScore *)&stru_830620.__pad_579C[63452],
                                     1682);
      }
      else
      {
        StringCSF = (VectorClass *)&stru_87C374.__pad_579C[23588]; /*0x73380f*/
      }
    }
    else
    {
      StringCSF = (VectorClass *)GetStringCSF( /*0x7337cd*/
                                   (wchar_t *)&stru_830620.__pad_579C[63664],
                                   0,
                                   (CampaignScore *)&stru_830620.__pad_579C[63452],
                                   1678);
    }
    v10 = (_DWORD *)__2_YAPAXI_Z(0x18u); /*0x733816*/
    if ( v10 ) /*0x733820*/
      v11 = (VectorClass *)DynamicVector::Constructor_Techno(v10, 0, 0); /*0x73382b*/
    else
      v11 = 0; /*0x73382f*/
    v12 = *(_DWORD *)&HouseClass_Player.__pad_5568[23060]; /*0x733831*/
    if ( *(int *)&HouseClass_Player.__pad_5568[23060] > 0 ) /*0x733839*/
    {
      do /*0x733866*/
      {
        v13 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23048] + 4 * v2); /*0x733840*/
        if ( v13 && (*(_BYTE *)(v13 + 20) & 1) != 0 ) /*0x733851*/
        {
          v18 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23048] + 4 * v2); /*0x73385a*/
          DynamicVector::AddItem(v11, (VectorClass *)&v18); /*0x73385e*/
        }
        ++v2; /*0x733863*/
      }
      while ( v2 < v12 ); /*0x733866*/
    }
    v14 = v11[1].vtable0; /*0x733868*/
    v15 = 0; /*0x73386b*/
    if ( (int)v14 > 0 ) /*0x73386f*/
    {
      while ( FootClass::CheckAccelLimit((float *)(*((_DWORD *)v11->Items + v15) + 336)) == v17 ) /*0x733886*/
      {
        if ( ++v15 >= (int)v14 ) /*0x73388b*/
          goto LABEL_42; /*0x73388b*/
      }
      StringCSF = (VectorClass *)GetStringCSF( /*0x7338a5*/
                                   (wchar_t *)&stru_830620.__pad_579C[63568],
                                   0,
                                   (CampaignScore *)&stru_830620.__pad_579C[63452],
                                   1658);
    }
LABEL_42:
    if ( v11 ) /*0x7338a9*/
      (*(void (__thiscall **)(VectorClass *, int))v11->vtable0)(v11, 1); /*0x7338b1*/
    FillUnitTooltipUI(Destination, (wchar_t *)StringCSF); /*0x7338b9*/
    v16 = 3; /*0x7338c4*/
    if ( HouseClass_Player.field_0 ) /*0x7338ce*/
      v16 = *(_DWORD *)(HouseClass_Player.field_0 + 90196); /*0x7338d0*/
    MessageListClass::AddMessage( /*0x7338f1*/
      &HouseClass_Player.__pad_5568[10668],
      0,
      0,
      (CellStruct *)Destination,
      v16,
      (IUnknown *)0x4046,
      240,
      1);
    *(_DWORD *)&stru_830620.__pad_579C[63400] = v17; /*0x733900*/
    result = *(IUnknown **)(*(_DWORD *)&stru_B05488.__pad_579C[21064] + 16); /*0x733906*/
    *(_DWORD *)&stru_B05488.__pad_579C[21040] = 0; /*0x73390b*/
    if ( result ) /*0x733915*/
      *(_DWORD *)&stru_B05488.__pad_579C[21040] = 4; /*0x733917*/
    stru_B05488.__pad_579C[21044] = 0; /*0x733921*/
  }
  return (int)result; /*0x733928*/
}


// ==== 0x007339B0  SelectUnitsByTheme  this=VOID_PTR  sig=ida-proto ====
int __fastcall SelectUnitsByTheme(char a1)
{
  int result; // eax
  int v2; // ebp
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // edi
  const char *v7; // eax
  wchar_t *StringCSF; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  wchar_t *v11; // edi
  int i; // esi
  int v13; // eax
  int v14; // edi
  int v15; // esi
  int v16; // eax
  char *Block; // [esp+8h] [ebp-210h]
  int v18; // [esp+Ch] [ebp-20Ch] BYREF
  int v20; // [esp+14h] [ebp-204h] BYREF
  wchar_t Destination[256]; // [esp+18h] [ebp-200h] BYREF

  result = MEMORY[0xA8B538]; /*0x7339b0*/
  v2 = 0; /*0x7339bd*/
  if ( !MEMORY[0xA8B538] ) /*0x7339c3*/
  {
    if ( MEMORY[0xB0FE54] == 5 ) /*0x7339d0*/
    {
      Block = SelectFactionThemeMusic(MEMORY[0xB0FE6C], MEMORY[0xB0FD70], MEMORY[0xB0FE70], &v20); /*0x733a62*/
      if ( a1 ) /*0x733a66*/
        SuperWeaponClass::UpdateAll(); /*0x733a6e*/
    }
    else
    {
      if ( MEMORY[0xB0FE6C] ) /*0x7339da*/
      {
        (**(void (__thiscall ***)(int, int))MEMORY[0xB0FE6C])(MEMORY[0xB0FE6C], 1); /*0x7339e0*/
        MEMORY[0xB0FE6C] = 0; /*0x7339e2*/
      }
      v4 = TechnoClass::GatherAllBuildings(); /*0x7339e8*/
      MEMORY[0xB0FE6C] = (int)v4; /*0x7339ed*/
      if ( !v4[4] ) /*0x7339f2*/
      {
        if ( v4 ) /*0x7339fb*/
          (*(void (__thiscall **)(_DWORD *, int))*v4)(v4, 1); /*0x733a03*/
        MEMORY[0xB0FE6C] = 0; /*0x733a0c*/
        MEMORY[0xB0FE6C] = (int)GatherTechnoClassFiltered( /*0x733a17*/
                                  (unsigned __int8 (__fastcall *)(int, int))TechnoClass::IsCapturableByPlayer,
                                  0);
      }
      SuperWeaponClass::UpdateAll(); /*0x733a22*/
      Block = SelectFactionThemeMusic(MEMORY[0xB0FE6C], 0, 0x7FFFFFFF, &v20); /*0x733a3e*/
    }
    v5 = MEMORY[0xB0FE6C]; /*0x733a73*/
    v18 = *(_DWORD *)(MEMORY[0xB0FE6C] + 16); /*0x733a80*/
    if ( v18 > 0 ) /*0x733a84*/
    {
      do /*0x733aed*/
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v2); /*0x733a89*/
        v7 = (const char *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 136))(v6) + 36); /*0x733a9a*/
        if ( Block && !strcmp(v7, Block) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 316))(v6) ) /*0x733ad2*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6); /*0x733ae0*/
        ++v2; /*0x733aea*/
      }
      while ( v2 < v18 ); /*0x733aed*/
    }
    StringCSF = 0; /*0x733af1*/
    v9 = __2_YAPAXI_Z(0x18u); /*0x733af3*/
    if ( v9 ) /*0x733afd*/
      v10 = DynamicVector::Constructor_Techno(v9, 0, 0); /*0x733b08*/
    else
      v10 = 0; /*0x733b0c*/
    v11 = MEMORY[0xA8ECC8]; /*0x733b0e*/
    for ( i = 0; i < (int)v11; ++i ) /*0x733b18*/
    {
      v13 = *((_DWORD *)MEMORY[0xA8ECBC] + i); /*0x733b1f*/
      if ( v13 ) /*0x733b24*/
      {
        if ( *(_BYTE *)(v13 + 20) & 1 ) /*0x733b2c*/
        {
          v18 = v13; /*0x733b39*/
          DynamicVector::AddItem(v10, &v18); /*0x733b3d*/
        }
      }
    }
    v14 = v10[4]; /*0x733b47*/
    v15 = 0; /*0x733b4a*/
    if ( v14 <= 0 ) /*0x733b4e*/
      goto LABEL_31; /*0x733b4e*/
    while ( (unsigned __int8)Object_Helper_733C60(*(_DWORD *)(v10[1] + 4 * v15), Block) ) /*0x733b61*/
    {
      if ( ++v15 >= v14 ) /*0x733b66*/
        goto LABEL_31; /*0x733b66*/
    }
    StringCSF = GetStringCSF(MEMORY[0x84560C], 0, MEMORY[0x845598], 1731); /*0x733b80*/
    if ( !StringCSF ) /*0x733b84*/
    {
LABEL_31:
      if ( (int)MEMORY[0xA8ECC8] > 0 ) /*0x733b8d*/
        StringCSF = *(wchar_t **)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 136))(*(_DWORD *)MEMORY[0xA8ECBC]) /*0x733b9f*/
                                + 96);
    }
    FillUnitTooltipUI(Destination, StringCSF); /*0x733ba8*/
    v16 = 3; /*0x733bb3*/
    if ( HouseClass_Player ) /*0x733bba*/
      v16 = *((_DWORD *)HouseClass_Player + 22549); /*0x733bbc*/
    MessageListClass::AddMessage(MEMORY[0xA8BC60], 0, 0, Destination, v16, 16454, 240, 1); /*0x733bdd*/
    MEMORY[0xB0FE70] = v20; /*0x733bec*/
    strcpy(MEMORY[0xB0FD70], Block); /*0x733c09*/
    if ( Block ) /*0x733c16*/
      __3_YAXPAX_Z(Block); /*0x733c19*/
    result = v10[4]; /*0x733c21*/
    MEMORY[0xB0FE54] = 0; /*0x733c24*/
    if ( result ) /*0x733c30*/
      MEMORY[0xB0FE54] = 5; /*0x733c32*/
    MEMORY[0xB0FE58] = 0; /*0x733c3e*/
    if ( v10 ) /*0x733c45*/
      return (*(int (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x733c4e*/
  }
  return result; /*0x733c50*/
}


// ==== 0x00733C60  Object_Helper_733C60  this=VOID_PTR  sig=csp ====
BOOL __fastcall sub_733C60(int a1, const char *a2)
{
  const char *v4; // eax

  v4 = (const char *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 136))(a1) + 36); /*0x733c6e*/
  return a2 && !strcmp(v4, a2) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 316))(a1); /*0x733cb6*/
}


// ==== 0x00733CD0  ObjectClass::method_733CD0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_733CD0(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  const char *v8; // ebp
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  const char **v14; // [esp+Ch] [ebp-14h]
  int v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-4h]

  v1 = this; /*0x733cd6*/
  v2 = __2_YAPAXI_Z(0x18u); /*0x733cde*/
  if ( v2 ) /*0x733cea*/
  {
    v2[1] = 0; /*0x733cec*/
    v2[2] = 0; /*0x733cef*/
    *((_BYTE *)v2 + 12) = 1; /*0x733cf2*/
    *((_BYTE *)v2 + 13) = 0; /*0x733cf6*/
    *v2 = &vt_DynamicVectorClass_char_const; /*0x733cf9*/
    v2[5] = 10; /*0x733cff*/
    v2[4] = 0; /*0x733d06*/
    v3 = v2; /*0x733d09*/
  }
  else
  {
    v3 = 0; /*0x733d0d*/
  }
  v4 = 0; /*0x733d12*/
  v18 = v1[4]; /*0x733d16*/
  v16 = 0; /*0x733d1a*/
  if ( v18 <= 0 ) /*0x733d1e*/
    return v3; /*0x733dfa*/
  while ( 1 ) /*0x733d2e*/
  {
    v5 = *(_DWORD *)(v1[1] + 4 * v4); /*0x733d2e*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 136))(v5); /*0x733d33*/
    v7 = v3[4]; /*0x733d39*/
    v8 = (const char *)(v6 + 36); /*0x733d3e*/
    v15 = 0; /*0x733d43*/
    if ( v7 <= 0 ) /*0x733d47*/
      goto LABEL_13; /*0x733d47*/
    v14 = (const char **)v3[1]; /*0x733d4c*/
    while ( strcmp(v8, *v14) ) /*0x733d89*/
    {
      ++v15; /*0x733d95*/
      ++v14; /*0x733d99*/
      if ( v15 >= v7 ) /*0x733d9d*/
        goto LABEL_13; /*0x733d9d*/
    }
    if ( v15 == -1 ) /*0x733da4*/
    {
LABEL_13:
      v9 = v3[2]; /*0x733da6*/
      if ( v7 < v9 /*0x733dc5*/
        || (*((_BYTE *)v3 + 13) || !v9)
        && (v10 = v3[5], v10 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))(v3, v9 + v10, 0) )
      {
        v11 = v3[4]; /*0x733dcc*/
        v12 = v3[1]; /*0x733dcf*/
        v3[4] = v11 + 1; /*0x733dd5*/
        *(_DWORD *)(v12 + 4 * v11) = v8; /*0x733dd8*/
      }
    }
    v4 = ++v16; /*0x733de3*/
    if ( v16 >= v18 ) /*0x733dea*/
      return v3; /*0x733df3*/
    v1 = this; /*0x733d27*/
  }
}


// ==== 0x00733E10  SelectFactionThemeMusic  this=ObjectClass  sig=csp ====
char *__fastcall SelectFactionThemeMusic(int a1, const char *a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // ebx
  int v7; // ebp
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // ebx
  int v12; // esi
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // ebp
  const char *v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  int v26; // ebp
  int i; // edi
  int v28; // eax
  int v29; // edx
  int v30; // edi
  int v31; // eax
  int *v32; // esi
  const char *v33; // edi
  char *v34; // ebp
  _DWORD *v36; // [esp+10h] [ebp-24h]
  int v37; // [esp+14h] [ebp-20h]
  const char **v38; // [esp+18h] [ebp-1Ch]
  int v39; // [esp+1Ch] [ebp-18h]
  int v40; // [esp+20h] [ebp-14h] BYREF
  const char *v41; // [esp+24h] [ebp-10h]
  int v42; // [esp+28h] [ebp-Ch]
  int v43; // [esp+2Ch] [ebp-8h]
  int v44; // [esp+30h] [ebp-4h]

  v4 = a1; /*0x733e17*/
  v41 = a2; /*0x733e19*/
  v42 = a1; /*0x733e1f*/
  v5 = 0; /*0x733e28*/
  if ( __2_YAPAXI_Z(0x18u) ) /*0x733e23*/
  {
    v6 = SelectFactionThemeMusic_Helper_734330(0, 0); /*0x733e3a*/
    v37 = v6; /*0x733e3c*/
  }
  else
  {
    v37 = 0; /*0x733e42*/
    v6 = 0; /*0x733e46*/
  }
  v7 = *(_DWORD *)(v4 + 16); /*0x733e48*/
  if ( v7 > 0 ) /*0x733e4d*/
  {
    do /*0x733e81*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v5); /*0x733e52*/
      v40 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 136))(v8) + 36; /*0x733e64*/
      if ( SelectFactionThemeMusic_Helper(v6, v40) == -1 ) /*0x733e70*/
        SelectFactionThemeMusic_Helper_734390(&v40); /*0x733e79*/
      ++v5; /*0x733e7e*/
    }
    while ( v5 < v7 ); /*0x733e81*/
  }
  v9 = __2_YAPAXI_Z(0x18u); /*0x733e85*/
  v10 = v9; /*0x733e8a*/
  v11 = 0; /*0x733e8c*/
  if ( v9 ) /*0x733e93*/
  {
    VectorClass::Construct(v9, 0, 0); /*0x733e99*/
    v10[4] = 0; /*0x733e9e*/
    v11 = v10; /*0x733ea1*/
    *v10 = &vt_DynamicVectorClass_int; /*0x733ea3*/
    v10[5] = 10; /*0x733ea9*/
    v36 = v10; /*0x733eb0*/
  }
  else
  {
    v36 = 0; /*0x733eb6*/
  }
  v40 = *(_DWORD *)(v37 + 16); /*0x733ec3*/
  v12 = v40; /*0x733ebe*/
  if ( v40 > 0 ) /*0x733ec7*/
  {
    do /*0x733f09*/
    {
      v13 = v11[2]; /*0x733ec9*/
      if ( v11[4] < v13 /*0x733eee*/
        || (*((_BYTE *)v11 + 13) || !v13)
        && (v14 = v11[5], v14 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v11 + 8))(v11, v13 + v14, 0) )
      {
        v15 = v11[4]; /*0x733ef5*/
        v16 = v11[1]; /*0x733ef8*/
        v11[4] = v15 + 1; /*0x733efe*/
        *(_DWORD *)(v16 + 4 * v15) = 0; /*0x733f01*/
      }
      --v12; /*0x733f08*/
    }
    while ( v12 ); /*0x733f09*/
  }
  v39 = 0; /*0x733f0e*/
  v44 = *(_DWORD *)(v4 + 16); /*0x733f18*/
  if ( v44 > 0 ) /*0x733f1c*/
  {
    while ( 1 ) /*0x733f2f*/
    {
      v17 = *(_DWORD **)(*(_DWORD *)(v4 + 4) + 4 * v39); /*0x733f2f*/
      v18 = (const char *)((*(int (__thiscall **)(_DWORD *))(*v17 + 136))(v17) + 36); /*0x733f43*/
      v19 = 0; /*0x733f46*/
      v43 = *(_DWORD *)(v37 + 16); /*0x733f4d*/
      if ( v43 <= 0 ) /*0x733f51*/
      {
LABEL_27:
        v20 = -1; /*0x733fab*/
      }
      else
      {
        v38 = *(const char ***)(v37 + 4); /*0x733f56*/
        while ( strcmp(v18, *v38) ) /*0x733f8d*/
        {
          ++v19; /*0x733f9b*/
          ++v38; /*0x733fa1*/
          if ( v19 >= v43 ) /*0x733fa5*/
          {
            v11 = v36; /*0x733fa7*/
            goto LABEL_27; /*0x733fa7*/
          }
        }
        v11 = v36; /*0x734046*/
        v20 = v19; /*0x73404a*/
      }
      v21 = v17[135]; /*0x733fb4*/
      v22 = *(_DWORD *)(v11[1] + 4 * v20); /*0x733fbc*/
      v23 = (*(int (__thiscall **)(_DWORD *))(*v17 + 136))(v17); /*0x733fbf*/
      v24 = v22 + (*(int (__thiscall **)(int, int))(*(_DWORD *)v23 + 132))(v23, v21); /*0x733fd0*/
      v11 = v36; /*0x733fd2*/
      v25 = v44; /*0x733fdd*/
      *(_DWORD *)(v36[1] + 4 * v20) = v24; /*0x733fe1*/
      if ( ++v39 >= v25 ) /*0x733fef*/
        break; /*0x733fef*/
      v4 = v42; /*0x733f24*/
    }
  }
  v26 = -1; /*0x733ff9*/
  *a4 = 0; /*0x733ffc*/
  if ( !v41 ) /*0x734008*/
    goto LABEL_39; /*0x734008*/
  for ( i = 0; i < v40; ++i ) /*0x734012*/
  {
    if ( strcmp(v41, *(const char **)(*(_DWORD *)(v37 + 4) + 4 * i)) ) /*0x734028*/
    {
      v28 = *(_DWORD *)(v11[1] + 4 * i); /*0x734061*/
      if ( v28 < a3 && v28 > *a4 ) /*0x73406e*/
      {
        *a4 = v28; /*0x734070*/
        v26 = i; /*0x734072*/
      }
    }
  }
  if ( !*a4 ) /*0x734081*/
  {
LABEL_39:
    v29 = 0; /*0x73408a*/
    v30 = -1; /*0x73408c*/
    v31 = 0; /*0x73408f*/
    if ( v40 > 0 ) /*0x734093*/
    {
      v32 = (int *)v11[1]; /*0x734095*/
      do /*0x7340a8*/
      {
        if ( *v32 > v29 ) /*0x73409c*/
        {
          v29 = *v32; /*0x73409e*/
          v30 = v31; /*0x7340a0*/
        }
        ++v31; /*0x7340a2*/
        ++v32; /*0x7340a3*/
      }
      while ( v31 < v40 ); /*0x7340a8*/
    }
    v26 = v30; /*0x7340ae*/
    *a4 = v29; /*0x7340b0*/
  }
  v33 = v41; /*0x7340b2*/
  if ( v26 != -1 ) /*0x7340b9*/
    v33 = *(const char **)(*(_DWORD *)(v37 + 4) + 4 * v26); /*0x7340c2*/
  v34 = (char *)__2_YAPAXI_Z(0x64u); /*0x7340cf*/
  if ( v33 ) /*0x7340d3*/
    strcpy(v34, v33); /*0x7340e9*/
  if ( v37 ) /*0x7340f8*/
    (**(void (__thiscall ***)(int, int))v37)(v37, 1); /*0x7340fe*/
  if ( v11 ) /*0x734102*/
    (*(void (__thiscall **)(_DWORD *, int))*v11)(v11, 1); /*0x73410a*/
  return v34; /*0x73410c*/
}


// ==== 0x00734120  UI_Create_734120  this=-  sig=ida-proto ====
unsigned __int16 sub_734120()
{
  int *v0; // eax
  unsigned __int16 v1; // si
  unsigned __int16 result; // ax
  int v3; // eax
  int v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  if ( timeGetTime() - MEMORY[0x845558] >= 0x640 ) /*0x734138*/
    v0 = UI_Create_734120_Create(&v4); /*0x734149*/
  else
    v0 = UI_Create_734120_Create_660BE0(&v4); /*0x73413e*/
  v4 = *v0; /*0x734150*/
  v1 = v4; /*0x73414e*/
  MEMORY[0x845558] = timeGetTime(); /*0x73415d*/
  result = HIWORD(v4); /*0x734162*/
  if ( __PAIR32__(HIWORD(v4), v1) != MEMORY[0xB0FDF0] ) /*0x734167*/
  {
    v5 = ((__int16)v1 << 8) + 128; /*0x73418c*/
    v6 = (SHIWORD(v4) << 8) + 128; /*0x73419c*/
    v7 = 0; /*0x7341a0*/
    v3 = (*((char *)Coord::To_Cell(&MEMORY[0x87F7E8], &v5) + 283) << 8) / 2; /*0x7341c6*/
    v6 -= v3; /*0x7341cc*/
    v5 -= v3; /*0x7341df*/
    Tactical::SetTacticalPosition((int)MEMORY[0x887324], &v5); /*0x7341e3*/
    result = MEMORY[0x880990]; /*0x7341e8*/
    if ( MEMORY[0x880990] ) /*0x7341ef*/
      return (unsigned __int16)Tactical::MouseMove((int)&MEMORY[0x87F7E8], &v4, &MEMORY[0xB0FDF0]); /*0x734200*/
  }
  return result; /*0x734205*/
}


// ==== 0x00734210  Map_Reset_734210  this=ScenarioClass  sig=ida-proto ====
DWORD sub_734210()
{
  DWORD Time; // eax
  DWORD result; // eax

  Time = timeGetTime(); /*0x734217*/
  MEMORY[0x845554] = -1; /*0x73421e*/
  MEMORY[0x845550] = Time - 1601; /*0x734228*/
  result = timeGetTime() - 1601; /*0x73422f*/
  MEMORY[0x84555C] = -100; /*0x734234*/
  MEMORY[0x845558] = result; /*0x73423e*/
  return result; /*0x734243*/
}


// ==== 0x00734250  SidebarClass::registerBuildingType  this=int  sig=csp ====
int __thiscall sub_734250(_DWORD *this)
{
  int result; // eax

  result = *(this + 328); /*0x734250*/
  if ( *(_DWORD *)(result + 3592) == 5 ) /*0x73425d*/
    MEMORY[0xB0FE60] = (int)this; /*0x73425f*/
  else
    MEMORY[0xB0FE5C] = (int)this; /*0x734266*/
  return result; /*0x734265*/
}


// ==== 0x00734270  Selection::ClearGlobals  this=int  sig=csp ====
int __thiscall Selection_ClearGlobals(void *this)
{
  int result; // eax

  result = 0; /*0x734270*/
  if ( this ) /*0x734274*/
  {
    if ( this == (void *)MEMORY[0xB0FE5C] ) /*0x734287*/
    {
      MEMORY[0xB0FE5C] = 0; /*0x734289*/
    }
    else if ( this == (void *)MEMORY[0xB0FE60] ) /*0x734295*/
    {
      MEMORY[0xB0FE60] = 0; /*0x734297*/
    }
  }
  else
  {
    MEMORY[0xB0FE5C] = 0; /*0x734276*/
    MEMORY[0xB0FE60] = 0; /*0x73427b*/
  }
  return result; /*0x734280*/
}


// ==== 0x007342A0  UI_Create_7342A0  this=-  sig=ida-proto ====
int sub_7342A0()
{
  return MEMORY[0xB0FE5C]; /*0x7342a5*/
}


// ==== 0x007342B0  UI_Create_7342B0  this=-  sig=ida-proto ====
int sub_7342B0()
{
  return MEMORY[0xB0FE60]; /*0x7342b5*/
}


// ==== 0x007342C0  ObjectClass::SelectAllOfType_Helper  this=AbstractClass  sig=csp ====
char __thiscall sub_7342C0(_BYTE *this)
{
  if ( this ) /*0x7342c2*/
    return this->abstractFlags & 1; /*0x7342ca*/
  else
    return 0; /*0x7342c4*/
}


// ==== 0x007342D0  DynamicVector::Constructor_Techno  this=VectorClass  sig=csp ====
_DWORD *__thiscall DynamicVector_Constructor_Techno(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x7342d9*/
  this->Capacity = a2; /*0x7342e0*/
  *((_BYTE *)this + 12) = 1; /*0x7342e3*/
  *((_BYTE *)this + 13) = 0; /*0x7342e7*/
  *this = &vt_VectorClass_TechnoClass; /*0x7342eb*/
  if ( a2 ) /*0x7342f1*/
  {
    if ( a3 ) /*0x7342f9*/
    {
      this->Items = a3; /*0x7342fb*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * a2); /*0x73430c*/
      *((_BYTE *)this + 13) = 1; /*0x73430f*/
    }
  }
  *this = &vt_DynamicVectorClass_TechnoClass; /*0x734313*/
  *(this + 5) = 10; /*0x734319*/
  this->q010 = 0; /*0x734320*/
  return this; /*0x734329*/
}


// ==== 0x00734330  VectorClass::SelectFactionThemeMusic_Helper  this=VectorClass  sig=csp ====
_DWORD *__thiscall SelectFactionThemeMusic_Helper_734330(_DWORD *this, VectorClass *aP1, VectorClass *aP2)
{
  this->Items = 0; /*0x734339*/
  this->Capacity = aP1; /*0x734340*/
  *((_BYTE *)this + 12) = 1; /*0x734343*/
  *((_BYTE *)this + 13) = 0; /*0x734347*/
  *this = &vt_VectorClass_char_const; /*0x73434b*/
  if ( aP1 ) /*0x734351*/
  {
    if ( aP2 ) /*0x734359*/
    {
      this->Items = aP2; /*0x73435b*/
    }
    else
    {
      this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x73436c*/
      *((_BYTE *)this + 13) = 1; /*0x73436f*/
    }
  }
  *this = &vt_DynamicVectorClass_char_const; /*0x734373*/
  *(this + 5) = 10; /*0x734379*/
  this->q010 = 0; /*0x734380*/
  return this; /*0x734389*/
}


// ==== 0x00734390  ObjectClass::SelectFactionThemeMusic_Helper  this=VectorClass  sig=csp ====
char __thiscall sub_734390(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = this->Capacity; /*0x734393*/
  if ( this->q010 >= v3 ) /*0x73439b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x7343a6*/
      return 0; /*0x7343a6*/
    v4 = *(this + 5); /*0x7343a8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x7343b8*/
      return 0; /*0x7343bf*/
  }
  v6 = this->q010; /*0x7343c5*/
  v7 = this->Items; /*0x7343c8*/
  this->q010 = v6 + 1; /*0x7343ce*/
  *(_DWORD *)(v7 + 4 * v6) = *a2; /*0x7343d8*/
  return 1; /*0x7343c1*/
}


// ==== 0x007343E0  TacticalClass::updateScroll  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_7343E0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x7343eb*/
  this->Capacity = a2; /*0x7343ee*/
  *((_BYTE *)this + 12) = 1; /*0x7343f1*/
  *((_BYTE *)this + 13) = 0; /*0x7343f5*/
  *this = &vt_VectorClass_char_const; /*0x7343f8*/
  if ( a2 ) /*0x7343fe*/
  {
    if ( a3 ) /*0x734406*/
    {
      this->Items = a3; /*0x734408*/
      return this; /*0x73440e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x73441d*/
    *((_BYTE *)this + 13) = 1; /*0x734420*/
  }
  return this; /*0x73440d*/
}


// ==== 0x00734430  sub_734430  this=-  sig=ida-proto ====
void sub_734430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73443c*/
  MEMORY[0xB11E98] = Math::Sqrt(v0 + v0); /*0x73444e*/
}


// ==== 0x00734460  sub_734460  this=-  sig=ida-proto ====
void sub_734460()
{
  unk_B1CF50 = MEMORY[0xB11E98] / 60.0; /*0x73446c*/
}


// ==== 0x00734480  sub_734480  this=-  sig=ida-proto ====
void sub_734480()
{
  unk_B1CF38 = 1.0 / unk_B1CF50; /*0x73448c*/
}


// ==== 0x007344A0  sub_7344A0  this=-  sig=ida-proto ====
void sub_7344A0()
{
  unk_B1BF30 = 0.0174532925199433 * 45.0; /*0x7344ac*/
}


// ==== 0x007344C0  sub_7344C0  this=-  sig=ida-proto ====
void sub_7344C0()
{
  MEMORY[0xB12EA0] = 0.0174532925199433 * 60.0; /*0x7344cc*/
}


// ==== 0x007344E0  sub_7344E0  this=-  sig=ida-proto ====
void sub_7344E0()
{
  MEMORY[0xB0FE78] = 0.0174532925199433 * 90.0; /*0x7344ec*/
}


// ==== 0x00734500  sub_734500  this=-  sig=ida-proto ====
__int64 sub_734500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xB0FE78] - MEMORY[0xB12EA0]); /*0x734512*/
  result = Math::RoundToInt(v0 * MEMORY[0xB11E98] * 0.5); /*0x734526*/
  unk_B1CF5C = result; /*0x73452b*/
  return result; /*0x734530*/
}


// ==== 0x00734540  sub_734540  this=-  sig=ida-proto ====
void sub_734540()
{
  MEMORY[0xB13EA8] = Math::ArcTan((double)unk_B1CF5C * 0.00390625); /*0x734557*/
}


// ==== 0x00734570  sub_734570  this=-  sig=ida-proto ====
void sub_734570()
{
  unk_B1BF28 = Math::ArcTan((double)(2 * unk_B1CF5C) / MEMORY[0xB11E98]); /*0x734592*/
}


// ==== 0x007345A0  sub_7345A0  this=-  sig=ida-proto ====
__int64 sub_7345A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_B1CF5C) + 0.5); /*0x7345bb*/
  unk_B1CF4C = result; /*0x7345c0*/
  return result; /*0x7345c6*/
}


// ==== 0x007345D0  sub_7345D0  this=-  sig=ida-proto ====
int sub_7345D0()
{
  MEMORY[0xB0FE90] = 0; /*0x7345d2*/
  MEMORY[0xB0FE92] = 0; /*0x7345d8*/
  return 0; /*0x7345de*/
}


// ==== 0x007345E0  sub_7345E0  this=-  sig=ida-proto ====
int sub_7345E0()
{
  *(_DWORD *)&MEMORY[0xB13EB0][104] = 0; /*0x7345e2*/
  *(_DWORD *)&MEMORY[0xB13EB0][108] = 0; /*0x7345e7*/
  *(_DWORD *)&MEMORY[0xB13EB0][112] = 0; /*0x7345ec*/
  return 0; /*0x7345f1*/
}


// ==== 0x00734600  sub_734600  this=-  sig=ida-proto ====
int sub_734600()
{
  unk_B1CF48 = 0; /*0x734605*/
  unk_B1CF40 = 128; /*0x73460f*/
  unk_B1CF44 = 128; /*0x734614*/
  return 128; /*0x734619*/
}


// ==== 0x00734620  sub_734620  this=-  sig=ida-proto ====
int sub_734620()
{
  MEMORY[0xB0FE80] = 0; /*0x734622*/
  MEMORY[0xB0FE84] = 0; /*0x734627*/
  MEMORY[0xB0FE88] = 0; /*0x73462c*/
  MEMORY[0xB0FE8C] = 0; /*0x734631*/
  return 0; /*0x734636*/
}


// ==== 0x007346A0  CSFClass::LoadFile  this=int  sig=csp ====
int __thiscall CSFClass_LoadFile(const char *this)
{
  char *v2; // eax
  int v3; // esi
  void *v4; // edi
  void *v5; // edi
  void *v6; // edi
  int v7; // ecx
  int *i; // eax
  _DWORD Buffer[6]; // [esp+8h] [ebp-84h] BYREF
  int v10[22]; // [esp+20h] [ebp-6Ch] BYREF
  _BYTE v11[12]; // [esp+78h] [ebp-14h] BYREF
  int v12; // [esp+84h] [ebp-8h]

  if ( unk_B1CF80 ) /*0x7346af*/
    return 1; /*0x7346be*/
  if ( !this || !*this ) /*0x7346c7*/
    return 0; /*0x7346ca*/
  unk_B1CF68 = (int)this; /*0x7346d0*/
  unk_B1CF80 = 1; /*0x7346dd*/
  unk_B1CF58 = 0; /*0x7346e7*/
  strcpy(MEMORY[0xB13EB0], this); /*0x73470a*/
  v2 = strchr(MEMORY[0xB13EB0], 46); /*0x734713*/
  if ( v2 ) /*0x73471d*/
    *v2 = 0; /*0x73471f*/
  strcat(MEMORY[0xB13EB0], MEMORY[0x8457EC]); /*0x73474b*/
  CCFileClass::Construct(v10, MEMORY[0xB13EB0]); /*0x734758*/
  v3 = 0; /*0x73475d*/
  if ( !CCFileClass::Open(v10, 0) || !FileClass::Load(v10, 1) ) /*0x734777*/
  {
    v10[0] = (int)&vt_CCFileClass; /*0x73491e*/
    v12 = 0; /*0x734926*/
    Vector::Clear((int)v11); /*0x734931*/
    v10[0] = (int)&off_7E1668; /*0x73493a*/
    BufferIOFileClass::Dtor(v10); /*0x734942*/
    return 0; /*0x734951*/
  }
  if ( CCFileClass::Read(v10, Buffer, 24) == 24 && Buffer[0] == 1129530912 )
  {
    unk_B1CF6C = Buffer[2]; /*0x7347b4*/
    unk_B1CF70 = Buffer[3]; /*0x7347be*/
    v3 = 1; /*0x7347c8*/
    MEMORY[0x845728] = Buffer[1] < 2 ? 0 : Buffer[5];
  }
  v10[0] = (int)&vt_CCFileClass; /*0x7347d8*/
  v12 = 0; /*0x7347e0*/
  Vector::Clear((int)v11); /*0x7347eb*/
  v10[0] = (int)&off_7E1668; /*0x7347f4*/
  BufferIOFileClass::Dtor(v10); /*0x7347fc*/
  if ( !v3 ) /*0x734803*/
    return 0; /*0x734803*/
  if ( !unk_B1CF70 ) /*0x734810*/
    return 0; /*0x734810*/
  if ( !unk_B1CF6C ) /*0x73481d*/
    return 0; /*0x73481d*/
  v4 = __2_YAPAXI_Z(40 * unk_B1CF6C); /*0x73482f*/
  dword_B1CF74 = v4; /*0x734836*/
  if ( !v4 ) /*0x73483c*/
    return 0; /*0x73483c*/
  memset(v4, 0, 40 * unk_B1CF6C); /*0x734854*/
  v5 = __2_YAPAXI_Z(4 * unk_B1CF70); /*0x73486f*/
  unk_B1CF78 = v5; /*0x734876*/
  if ( !v5 ) /*0x73487c*/
    return 0; /*0x73487c*/
  memset(v5, 0, 4 * unk_B1CF70); /*0x73488a*/
  v6 = __2_YAPAXI_Z(4 * unk_B1CF70); /*0x73489f*/
  unk_B1CF7C = v6; /*0x7348a6*/
  if ( !v6 ) /*0x7348ac*/
    return 0; /*0x7348ac*/
  memset(v6, 0, 4 * unk_B1CF70); /*0x7348ba*/
  File::ParseCSFString(MEMORY[0xB13EB0]); /*0x7348c1*/
  qsort(dword_B1CF74, unk_B1CF6C, 0x28u, _strcmpi); /*0x7348db*/
  Debug::Log(); /*0x7348eb*/
  v7 = MEMORY[0x845678]; /*0x7348f0*/
  for ( i = &MEMORY[0x845678]; v7 != 10; i += 4 ) /*0x734901*/
  {
    if ( v7 == MEMORY[0x845728] ) /*0x73490b*/
      break; /*0x73490b*/
    v7 = i[4]; /*0x73490d*/
  }
  Debug::Log(); /*0x734966*/
  CSFClass::LoadMissingStrings(MEMORY[0xA8B238]); /*0x734973*/
  CSFClass::CopyString(&dword_ABDFD8); /*0x73497d*/
  return 1; /*0x7346b1*/
}


// ==== 0x00734990  File::ParseCSFString  this=char*  sig=csp ====
int __thiscall ParseCSFStringFile(char *Source)
{
  int v1; // ebp
  size_t v2; // eax
  char *v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ebp
  size_t v7; // eax
  int v8; // eax
  wchar_t *v9; // ecx
  __int16 v10; // dx
  int v11; // esi
  wchar_t *v12; // ecx
  _WORD *v13; // edi
  size_t v14; // eax
  size_t v15; // eax
  size_t Size; // [esp+10h] [ebp-9Ch] BYREF
  int v18; // [esp+14h] [ebp-98h] BYREF
  int v19; // [esp+18h] [ebp-94h]
  int v20; // [esp+1Ch] [ebp-90h] BYREF
  int v21; // [esp+20h] [ebp-8Ch]
  int v22; // [esp+24h] [ebp-88h]
  int v23[22]; // [esp+28h] [ebp-84h] BYREF
  _BYTE v24[12]; // [esp+80h] [ebp-2Ch] BYREF
  int v25; // [esp+8Ch] [ebp-20h]
  char Buffer[24]; // [esp+94h] [ebp-18h] BYREF

  CCFileClass::Construct(v23, Source); /*0x73499f*/
  v19 = 0; /*0x7349ab*/
  if ( CCFileClass::Open(v23, 0) && FileClass::Load(v23, 1) && CCFileClass::Read(v23, Buffer, 24) == 24 ) /*0x7349e5*/
  {
    if ( CCFileClass::Read(v23, &v18, 4) != 4 ) /*0x7349fe*/
    {
LABEL_42:
      v23[0] = (int)&vt_CCFileClass; /*0x734cad*/
      v25 = 0; /*0x734cbc*/
      Vector::Clear((int)v24); /*0x734cc3*/
      v23[0] = (int)&off_7E1668; /*0x734ccc*/
      BufferIOFileClass::Dtor(v23); /*0x734cd4*/
      return 1; /*0x734ce8*/
    }
    v1 = 0; /*0x734a04*/
    v21 = 0; /*0x734a06*/
    while ( v18 == 1279413280 ) /*0x734a12*/
    {
      CCFileClass::Read(v23, &v20, 4); /*0x734a23*/
      CCFileClass::Read(v23, &Size, 4); /*0x734a33*/
      v2 = Size; /*0x734a38*/
      if ( Size ) /*0x734a3e*/
      {
        CCFileClass::Read(v23, unk_B1BF38, Size); /*0x734a4a*/
        v2 = Size; /*0x734a4f*/
      }
      v3 = (char *)dword_B1CF74; /*0x734a53*/
      unk_B1BF38[v2] = 0; /*0x734a59*/
      strcpy(&v3[v1], unk_B1BF38); /*0x734a7b*/
      if ( (int)Size > unk_B1CF58 ) /*0x734a90*/
        unk_B1CF58 = Size; /*0x734a92*/
      v4 = v19; /*0x734a9d*/
      v22 = 0; /*0x734aa1*/
      *(_DWORD *)((char *)dword_B1CF74 + v1 + 36) = v19; /*0x734aa5*/
      *(_DWORD *)((char *)dword_B1CF74 + v1 + 32) = v20; /*0x734ab3*/
      v5 = v20; /*0x734ab7*/
      if ( v20 > 0 ) /*0x734abd*/
      {
        v6 = 4 * v4; /*0x734ac3*/
        do /*0x734c79*/
        {
          CCFileClass::Read(v23, &v18, 4); /*0x734ad5*/
          if ( v18 != 1398034976 && v18 != 1398035031 ) /*0x734aea*/
            goto LABEL_43; /*0x734aea*/
          CCFileClass::Read(v23, &Size, 4); /*0x734afb*/
          v7 = Size; /*0x734b00*/
          if ( Size ) /*0x734b06*/
          {
            CCFileClass::Read(v23, MEMORY[0xB17F24], 2 * Size); /*0x734b15*/
            v7 = Size; /*0x734b1a*/
          }
          MEMORY[0xB17F24][v7] = 0; /*0x734b1e*/
          v8 = *(_DWORD *)MEMORY[0xB17F24]; /*0x734b26*/
          v9 = MEMORY[0xB17F24]; /*0x734b2e*/
          if ( MEMORY[0xB17F24][0] ) /*0x734b33*/
          {
            do /*0x734b44*/
            {
              v8 = ~v8; /*0x734b35*/
              *v9 = v8; /*0x734b37*/
              LOWORD(v8) = v9[1]; /*0x734b3a*/
              ++v9; /*0x734b3e*/
            }
            while ( (_WORD)v8 ); /*0x734b44*/
            LOWORD(v8) = MEMORY[0xB17F24][0]; /*0x734b46*/
          }
          v10 = 0; /*0x734b4b*/
          v11 = 1; /*0x734b50*/
          v12 = MEMORY[0xB17F24]; /*0x734b55*/
          v13 = MEMORY[0xB17F24] + 2; /*0x734b5a*/
          if ( (_WORD)v8 ) /*0x734b5f*/
          {
            while ( 1 ) /*0x734b61*/
            {
              if ( (_WORD)v8 == 32 ) /*0x734b65*/
              {
                if ( v10 == 32 || v11 ) /*0x734b6e*/
                  goto LABEL_31; /*0x734b6e*/
              }
              else if ( (_WORD)v8 == 10 || (_WORD)v8 == 9 ) /*0x734b7c*/
              {
                if ( v10 == 32 ) /*0x734b8e*/
                  --v12; /*0x734b90*/
                *v12 = v8; /*0x734b93*/
                v11 = 1; /*0x734b96*/
                v10 = v8; /*0x734b9b*/
                ++v12; /*0x734b9d*/
                goto LABEL_31; /*0x734b9d*/
              }
              *v12++ = v8; /*0x734b7e*/
              v10 = v8; /*0x734b84*/
              v11 = 0; /*0x734b86*/
LABEL_31:
              LOWORD(v8) = *v13++; /*0x734ba0*/
              if ( !(_WORD)v8 ) /*0x734ba9*/
              {
                if ( v10 == 32 ) /*0x734baf*/
                  --v12; /*0x734bb1*/
                break; /*0x734bb1*/
              }
            }
          }
          *v12 = 0; /*0x734bb4*/
          v14 = wcslen(MEMORY[0xB17F24]); /*0x734bbc*/
          *(_DWORD *)((char *)unk_B1CF78 + v6) = __2_YAPAXI_Z(2 * v14 + 2); /*0x734bd6*/
          wcscpy(*(wchar_t **)((char *)unk_B1CF78 + v6), MEMORY[0xB17F24]); /*0x734be3*/
          if ( v18 == 1398035031 ) /*0x734bf4*/
          {
            CCFileClass::Read(v23, &Size, 4); /*0x734c01*/
            v15 = Size; /*0x734c06*/
            if ( Size ) /*0x734c0c*/
            {
              CCFileClass::Read(v23, unk_B1BF38, Size); /*0x734c18*/
              v15 = Size; /*0x734c1d*/
            }
            unk_B1BF38[v15] = 0; /*0x734c23*/
            if ( v15 ) /*0x734c29*/
            {
              *(_DWORD *)((char *)unk_B1CF7C + v6) = __2_YAPAXI_Z(v15 + 1); /*0x734c43*/
              strcpy(*(char **)((char *)unk_B1CF7C + v6), unk_B1BF38); /*0x734c5e*/
            }
          }
          v5 = v20; /*0x734c6b*/
          v6 += 4; /*0x734c70*/
          ++v22; /*0x734c75*/
        }
        while ( v22 < v20 ); /*0x734c79*/
        v1 = v21; /*0x734c7f*/
      }
      v1 += 40; /*0x734c87*/
      v21 = v1; /*0x734c97*/
      v19 += v5; /*0x734c9b*/
      if ( CCFileClass::Read(v23, &v18, 4) != 4 ) /*0x734ca7*/
        goto LABEL_42; /*0x734ca7*/
    }
  }
LABEL_43:
  v23[0] = (int)&vt_CCFileClass; /*0x734ce9*/
  v25 = 0; /*0x734cf8*/
  Vector::Clear((int)v24); /*0x734cff*/
  v23[0] = (int)&off_7E1668; /*0x734d08*/
  BufferIOFileClass::Dtor(v23); /*0x734d10*/
  return 0; /*0x734cde*/
}


// ==== 0x00734D30  WinMain::ShutdownCleanup  this=WinMain  sig=csp ====
_DWORD *WinMain_ShutdownCleanup()
{
  void **i; // eax
  void **v1; // ecx
  int j; // esi
  void **v3; // ecx
  int k; // esi
  _DWORD *result; // eax
  _DWORD *v6; // esi

  for ( i = (void **)unk_B1CF8C; unk_B1CF8C; i = (void **)unk_B1CF8C ) /*0x734d3b*/
  {
    unk_B1CF8C = *i; /*0x734d40*/
    __3_YAXPAX_Z(i); /*0x734d46*/
  }
  v1 = (void **)unk_B1CF78; /*0x734d57*/
  unk_B1CF8C = 0; /*0x734d5d*/
  if ( unk_B1CF78 ) /*0x734d65*/
  {
    for ( j = 0; j < unk_B1CF70; ++j ) /*0x734d70*/
    {
      if ( v1[j] ) /*0x734d72*/
      {
        __3_YAXPAX_Z(v1[j]); /*0x734d7a*/
        v1 = (void **)unk_B1CF78; /*0x734d7f*/
      }
    }
    __3_YAXPAX_Z(v1); /*0x734d93*/
    unk_B1CF78 = 0; /*0x734d9b*/
  }
  v3 = (void **)unk_B1CF7C; /*0x734da1*/
  if ( unk_B1CF7C ) /*0x734da9*/
  {
    for ( k = 0; k < unk_B1CF70; ++k ) /*0x734db4*/
    {
      if ( v3[k] ) /*0x734db6*/
      {
        __3_YAXPAX_Z(v3[k]); /*0x734dbe*/
        v3 = (void **)unk_B1CF7C; /*0x734dc3*/
      }
    }
    __3_YAXPAX_Z(v3); /*0x734dd7*/
    unk_B1CF7C = 0; /*0x734ddf*/
  }
  if ( dword_B1CF74 ) /*0x734dec*/
  {
    __3_YAXPAX_Z(dword_B1CF74); /*0x734def*/
    dword_B1CF74 = 0; /*0x734df7*/
  }
  result = unk_B1CF88; /*0x734dfd*/
  if ( unk_B1CF88 ) /*0x734e04*/
  {
    do /*0x734e15*/
    {
      v6 = (_DWORD *)*result; /*0x734e06*/
      __3_YAXPAX_Z(result); /*0x734e09*/
      result = v6; /*0x734e13*/
    }
    while ( v6 ); /*0x734e15*/
  }
  unk_B1CF88 = 0; /*0x734e17*/
  unk_B1CF80 = 0; /*0x734e1d*/
  return result; /*0x734e23*/
}


// ==== 0x00734E60  GetStringCSF  this=VOID_PTR  sig=csp ====
#72 *__fastcall GetStringCSF(#72 *Format, _DWORD *a2, const char *a3, int a4)
{
  int v6; // eax
  int v7; // esi

  if ( a2 ) /*0x734e68*/
    *a2 = 0; /*0x734e6a*/
  if ( !dword_A8ED54[145544] ) /*0x734e77*/
    return (#72 *)aFatalStringMan; /*0x734e7a*/
  v6 = bsearch(Format, (const void *)dword_A8ED54[145544], dword_A8ED54[145542], 40, _strcmpi); /*0x734e93*/
  if ( v6 ) /*0x734e9d*/
  {
    if ( a2 ) /*0x734ea1*/
      *a2 = *(_DWORD *)(dword_A8ED54[145546] + 4 * *(_DWORD *)(v6 + 36)); /*0x734eaf*/
    return *(#72 **)(dword_A8ED54[145545] + 4 * *(_DWORD *)(v6 + 36)); /*0x734ebc*/
  }
  else
  {
    v7 = __2_YAPAXI_Z(520); /*0x734ed6*/
    swprintf((#72 *const)(v7 + 4), aMissingHs); /*0x734ee4*/
    Debug::Log(); /*0x734ef5*/
    *(_DWORD *)v7 = dword_A8ED54[145549]; /*0x734f05*/
    dword_A8ED54[145549] = v7; /*0x734f08*/
    return (#72 *)(v7 + 4); /*0x734f03*/
  }
}


// ==== 0x00734F50  ObjectClass::RestartNetworkSession  this=VOID_PTR  sig=csp ====
int __thiscall sub_734F50(void *this)
{
  int result; // eax

  result = unk_B1CF84; /*0x734f50*/
  if ( (void *)unk_B1CF84 != this ) /*0x734f5a*/
  {
    WinMain::ShutdownCleanup(); /*0x734f5c*/
    unk_B1CF84 = (int)this; /*0x734f67*/
    return CSFClass::LoadFile((const char *)unk_B1CF68); /*0x734f6d*/
  }
  return result; /*0x734f72*/
}


// ==== 0x00734F80  ObjectClass::ToggleNetworkSession  this=VOID_PTR  sig=csp ====
int __thiscall sub_734F80(void *this)
{
  int result; // eax

  result = unk_B1CF60; /*0x734f80*/
  if ( (void *)unk_B1CF60 != this ) /*0x734f8a*/
  {
    WinMain::ShutdownCleanup(); /*0x734f8c*/
    unk_B1CF60 = (int)this; /*0x734f97*/
    return CSFClass::LoadFile((const char *)unk_B1CF68); /*0x734f9d*/
  }
  return result; /*0x734fa2*/
}


// ==== 0x00734FB0  sub_734FB0  this=-  sig=ida-proto ====
int sub_734FB0()
{
  return unk_B1CF84; /*0x734fb5*/
}


// ==== 0x00734FC0  sub_734FC0  this=-  sig=ida-proto ====
int sub_734FC0()
{
  return unk_B1CF60; /*0x734fc5*/
}


// ==== 0x00734FD0  Map_Create_734FD0  this=-  sig=ida-proto ====
TechnoTypeClass *Map_Create_734FD0()
{
  return (TechnoTypeClass *)unk_B1CF80; /*0x734fd5*/
}


// ==== 0x00734FE0  WideMessageBox  this=ObjectClass  sig=csp ====
int __fastcall WideMessageBox(CampaignScore *aP0, const WCHAR *a1, LPCWCH lpWideCharStr, UINT uType)
{
  CHAR Caption[2048]; // [esp+8h] [ebp-1C00h] BYREF
  CHAR MultiByteStr[5120]; // [esp+808h] [ebp-1400h] BYREF

  WideCharToMultiByte(0, 0, a1, -1, MultiByteStr, 5120, 0, 0); /*0x73500c*/
  WideCharToMultiByte(0, 0, lpWideCharStr, -1, Caption, 2048, 0, 0); /*0x73502a*/
  return MessageBoxA((HWND)aP0, MultiByteStr, Caption, uType); /*0x735048*/
}


// ==== 0x00735060  BulkCharToWide  this=VOID_PTR  sig=csp ====
unsigned __int8 __fastcall CharToWide_Bulk(_WORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 result; // al

  for ( result = *a2; *a2; result = *a2 ) /*0x735060*/
  {
    if ( !a3 ) /*0x73506d*/
      break; /*0x73506d*/
    *a1++ = result; /*0x735073*/
    ++a2; /*0x735079*/
    if ( a3 != -1 ) /*0x73507d*/
      --a3; /*0x73507f*/
  }
  *a1 = 0; /*0x735086*/
  return result; /*0x73508b*/
}


// ==== 0x00735090  CopyWideToChar  this=AbstractClass  sig=csp ====
void __fastcall WideToChar_Copy(_BYTE *a1, char *a2, int a3)
{
  char v4; // al

  while ( *(_WORD *)a2 ) /*0x735090*/
  {
    if ( !a3 ) /*0x73509d*/
      break; /*0x73509d*/
    v4 = *a2; /*0x73509f*/
    a2 += 2; /*0x7350a1*/
    *a1++ = v4; /*0x7350a4*/
    if ( a3 != -1 ) /*0x7350aa*/
      --a3; /*0x7350ac*/
  }
  *a1 = 0; /*0x7350b3*/
}


// ==== 0x007350C0  ToWideStringChar  this=VOID_PTR  sig=csp ====
char *__fastcall ToWideStringChar(IUnknown *aP0)
{
  char *result; // eax
  int v2; // edi
  char *v3; // esi
  char v4; // dl

  if ( !aP0 ) /*0x7350c2*/
    return 0; /*0x7350c4*/
  result = &stru_B05488.__pad_579C[1024 * dword_B1CF90 + 21104]; /*0x7350d0*/
  v2 = 1024; /*0x7350da*/
  v3 = result; /*0x7350df*/
  while ( LOWORD(aP0->field_0) ) /*0x7350d5*/
  {
    if ( !v2 ) /*0x7350e5*/
      break; /*0x7350e5*/
    v4 = aP0->field_0; /*0x7350e7*/
    aP0 = (IUnknown *)((char *)aP0 + 2); /*0x7350e9*/
    *v3++ = v4; /*0x7350ec*/
    if ( v2 != -1 ) /*0x7350f2*/
      --v2; /*0x7350f4*/
  }
  *v3 = 0; /*0x7350fb*/
  result[1023] = 0; /*0x7350fe*/
  dword_B1CF90 = ((_BYTE)dword_B1CF90 + 1) & 7; /*0x735111*/
  return result; /*0x7350c6*/
}


// ==== 0x00735120  CharToWideString  this=VOID_PTR  sig=csp ====
char *__fastcall CharToWideString(_BYTE *a1)
{
  char *result; // eax
  int v2; // esi
  _WORD *v3; // edx

  if ( !a1 ) /*0x735122*/
    return 0; /*0x735124*/
  result = (char *)&MEMORY[0xB13F24] + 2048 * MEMORY[0xB1CF94]; /*0x735133*/
  v2 = 1024; /*0x73513b*/
  v3 = result; /*0x735140*/
  while ( *a1 ) /*0x73512d*/
  {
    if ( !v2 ) /*0x735146*/
      break; /*0x735146*/
    *v3++ = (unsigned __int8)*a1++; /*0x73514c*/
    if ( v2 != -1 ) /*0x735156*/
      --v2; /*0x735158*/
  }
  *v3 = 0; /*0x73515e*/
  *((_WORD *)result + 1023) = 0; /*0x735163*/
  MEMORY[0xB1CF94] = ((_BYTE)MEMORY[0xB1CF94] + 1) & 7; /*0x735179*/
  return result; /*0x735126*/
}


// ==== 0x00735180  sub_735180  this=-  sig=ida-proto ====
void sub_735180()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x73518c*/
  unk_B1CFD0 = Math::Sqrt(v0 + v0); /*0x73519e*/
}


// ==== 0x007351B0  sub_7351B0  this=-  sig=ida-proto ====
void sub_7351B0()
{
  unk_B1D0B0 = unk_B1CFD0 / 60.0; /*0x7351bc*/
}


// ==== 0x007351D0  sub_7351D0  this=-  sig=ida-proto ====
void sub_7351D0()
{
  unk_B1D008 = 1.0 / unk_B1D0B0; /*0x7351dc*/
}


// ==== 0x007351F0  sub_7351F0  this=-  sig=ida-proto ====
void sub_7351F0()
{
  unk_B1D000 = 0.0174532925199433 * 45.0; /*0x7351fc*/
}


// ==== 0x00735210  sub_735210  this=-  sig=ida-proto ====
void sub_735210()
{
  unk_B1CFD8 = 0.0174532925199433 * 60.0; /*0x73521c*/
}


// ==== 0x00735230  sub_735230  this=-  sig=ida-proto ====
void sub_735230()
{
  unk_B1CFA0 = 0.0174532925199433 * 90.0; /*0x73523c*/
}


// ==== 0x00735250  sub_735250  this=-  sig=ida-proto ====
__int64 sub_735250()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_B1CFA0 - unk_B1CFD8); /*0x735262*/
  result = Math::RoundToInt(v0 * unk_B1CFD0 * 0.5); /*0x735276*/
  unk_B1D0B8 = result; /*0x73527b*/
  return result; /*0x735280*/
}


// ==== 0x00735290  sub_735290  this=-  sig=ida-proto ====
void sub_735290()
{
  unk_B1CFE0 = Math::ArcTan((double)unk_B1D0B8 * 0.00390625); /*0x7352a7*/
}


// ==== 0x007352C0  sub_7352C0  this=-  sig=ida-proto ====
void sub_7352C0()
{
  unk_B1CFF8 = Math::ArcTan((double)(2 * unk_B1D0B8) / unk_B1CFD0); /*0x7352e2*/
}


// ==== 0x007352F0  sub_7352F0  this=-  sig=ida-proto ====
__int64 sub_7352F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_B1D0B8) + 0.5); /*0x73530b*/
  unk_B1D0AC = result; /*0x735310*/
  return result; /*0x735316*/
}


// ==== 0x00735320  sub_735320  this=-  sig=ida-proto ====
int sub_735320()
{
  dword_B1CFB8 = 0; /*0x735322*/
  return 0; /*0x73532e*/
}


// ==== 0x00735330  sub_735330  this=-  sig=ida-proto ====
int sub_735330()
{
  unk_B1CFE8 = 0; /*0x735332*/
  unk_B1CFEC = 0; /*0x735337*/
  unk_B1CFF0 = 0; /*0x73533c*/
  return 0; /*0x735341*/
}


// ==== 0x00735350  sub_735350  this=-  sig=ida-proto ====
int sub_735350()
{
  unk_B1D0A8 = 0; /*0x735355*/
  unk_B1D0A0 = 128; /*0x73535f*/
  unk_B1D0A4 = 128; /*0x735364*/
  return 128; /*0x735369*/
}


// ==== 0x00735370  sub_735370  this=-  sig=ida-proto ====
int sub_735370()
{
  xmmword_B1CFA8 = 0; /*0x735372*/
  MEMORY[0xB1CFAC] = 0; /*0x735377*/
  MEMORY[0xB1CFB0] = 0; /*0x73537c*/
  MEMORY[0xB1CFB4] = 0; /*0x735381*/
  return 0; /*0x735386*/
}


// ==== 0x00735390  sub_735390  this=-  sig=ida-proto ====
int sub_735390()
{
  aP6 = xmmword_B1CFA8; /*0x7353a1*/
  MEMORY[0xB1CFC4] = MEMORY[0xB1CFAC]; /*0x7353ab*/
  MEMORY[0xB1CFC8] = MEMORY[0xB1CFB0]; /*0x7353b1*/
  MEMORY[0xB1CFCC] = MEMORY[0xB1CFB4]; /*0x7353b7*/
  return MEMORY[0xB1CFB4]; /*0x7353bc*/
}


// ==== 0x007353C0  UnitClass::Construct  this=UnitClass  sig=csp ====
int __thiscall UnitClass::Construct(int this, int a2, int ppv)
{
  int v4; // eax
  _DWORD *Value; // eax
  int v6; // eax
  int InstanceCOM; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ebp
  int v24; // edi
  int i; // eax
  _DWORD *v26; // edx
  int v28; // [esp+1Ch] [ebp-8h]

  FootClass::Construct((_DWORD *)this, ppv); /*0x7353ce*/
  *(_DWORD *)(this + 1728) = -1; /*0x7353e0*/
  *(_DWORD *)(this + 1732) = a2; /*0x7353e6*/
  *(_DWORD *)(this + 1736) = 0; /*0x7353ec*/
  *(_DWORD *)(this + 1740) = -1; /*0x7353f2*/
  *(_BYTE *)(this + 1744) = 0; /*0x7353f8*/
  *(_BYTE *)(this + 1745) = 0; /*0x7353fe*/
  *(_BYTE *)(this + 1746) = 0; /*0x735404*/
  *(_BYTE *)(this + 1747) = 0; /*0x73540a*/
  *(_DWORD *)(this + 1748) = -1; /*0x735410*/
  *(_DWORD *)(this + 1752) = -1; /*0x735416*/
  *(_DWORD *)(this + 1756) = 0; /*0x73541c*/
  *(_BYTE *)(this + 1760) = 0; /*0x735422*/
  *(_BYTE *)(this + 1761) = 0; /*0x735428*/
  *(_BYTE *)(this + 1762) = 0; /*0x73542e*/
  *(_DWORD *)(this + 1764) = 0; /*0x735434*/
  *(_DWORD *)this = &UnitClass::`vftable'; /*0x73543a*/
  *(_DWORD *)(this + 4) = &UnitClass::`vftable'; /*0x735440*/
  *(_DWORD *)(this + 8) = &UnitClass::`vftable'; /*0x735446*/
  *(_DWORD *)(this + 12) = &off_7F5C44; /*0x73544d*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x735454*/
  if ( MEMORY[0x87F7E8][53836] < MEMORY[0x87F7E8][53834] /*0x73548f*/
    || (BYTE1(MEMORY[0x87F7E8][53835]) || !MEMORY[0x87F7E8][53834])
    && MEMORY[0x87F7E8][53837] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][53832] + 8))(
         &MEMORY[0x87F7E8][53832],
         MEMORY[0x87F7E8][53834] + MEMORY[0x87F7E8][53837],
         0) )
  {
    v4 = MEMORY[0x87F7E8][53836]++; /*0x73549c*/
    *(_DWORD *)(MEMORY[0x87F7E8][53833] + 4 * v4) = this; /*0x7354ab*/
  }
  Value = ProgressTimer::GetValue((_WORD *)(this + 904), &ppv); /*0x7354c1*/
  FacingClass::Set_SyncLog((char *)(this + 928), Value); /*0x7354c9*/
  v6 = *(_DWORD *)(this + 1732); /*0x7354ce*/
  if ( v6 ) /*0x7354d6*/
  {
    ppv = 0; /*0x7354ea*/
    InstanceCOM = CreateInstanceCOM((#24 *)&ppv, (#33 *)(v6 + 844), 0, 7); /*0x7354f2*/
    if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x735500*/
      WinAPI::Wrapper(InstanceCOM); /*0x735503*/
    v8 = *(_DWORD *)(this + 1652); /*0x735508*/
    v9 = ppv; /*0x73550e*/
    if ( v8 != ppv ) /*0x735514*/
    {
      *(_DWORD *)(this + 1652) = ppv; /*0x735518*/
      if ( v9 ) /*0x73551e*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x735523*/
        v9 = ppv; /*0x735526*/
      }
      if ( v8 ) /*0x73552c*/
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x735531*/
        v9 = ppv; /*0x735534*/
      }
    }
    if ( v9 ) /*0x73553a*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v9 + 8))(v9); /*0x73553f*/
    if ( !*(_DWORD *)(this + 1652) ) /*0x735542*/
      WinAPI::Wrapper(-2147467261); /*0x735551*/
    (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)(this + 1652) + 12))(*(_DWORD *)(this + 1652), this); /*0x735560*/
  }
  v10 = *(_DWORD *)(this + 1732); /*0x735566*/
  if ( v10 ) /*0x73556e*/
  {
    BuildingTypeClass::GetPowerOutput((_WORD *)(this + 904), *(_DWORD *)(v10 + 1820)); /*0x735579*/
    BuildingTypeClass::GetPowerOutput((_WORD *)(this + 928), *(_DWORD *)(*(_DWORD *)(this + 1732) + 1820)); /*0x73558d*/
    v11 = *(_DWORD *)(this + 1732); /*0x735592*/
    v12 = *(_DWORD *)(v11 + 1664); /*0x735598*/
    if ( v12 == -1 ) /*0x7355a0*/
      v12 = *(_DWORD *)(v11 + 1668); /*0x7355a2*/
    *(_DWORD *)(this + 764) = v12; /*0x7355a8*/
    *(_BYTE *)(this + 978) = *(_BYTE *)(v11 + 3280); /*0x7355b4*/
    v13 = *(_DWORD *)(v11 + 160); /*0x7355ba*/
    *(_DWORD *)(this + 108) = v13; /*0x7355c0*/
    *(_DWORD *)(this + 112) = v13; /*0x7355c3*/
  }
  *(_DWORD *)(this + 508) = dword_A8ED54[12]; /*0x7355d3*/
  *(_DWORD *)(this + 512) = v28; /*0x7355d9*/
  *(_DWORD *)(this + 516) = 0; /*0x7355dc*/
  v14 = *(_DWORD **)(this + 540); /*0x7355df*/
  if ( v14 ) /*0x7355e7*/
    BuildingClass::PowerUpdate(v14, (_BYTE *)this); /*0x7355ea*/
  TechnoClass::Update((int *)this, -1); /*0x7355f1*/
  v15 = *(_DWORD *)(this + 1732); /*0x7355f6*/
  if ( v15 ) /*0x7355fe*/
  {
    v16 = *(_DWORD *)(this + 540); /*0x735604*/
    if ( v16 ) /*0x73560c*/
    {
      v17 = 0; /*0x735611*/
      v18 = *(_DWORD *)(v16 + 52) + 360; /*0x735613*/
      v19 = *(_DWORD *)(v18 + 16); /*0x735618*/
      if ( v19 > 0 ) /*0x73561d*/
      {
        v20 = *(_DWORD **)(v18 + 4); /*0x73561f*/
        while ( *v20 != v15 ) /*0x735624*/
        {
          ++v17; /*0x735626*/
          ++v20; /*0x735627*/
          if ( v17 >= v19 ) /*0x73562c*/
            goto LABEL_35; /*0x73562c*/
        }
        Power::ChangedHouse((_DWORD *)(this + 336), 1); /*0x735638*/
      }
    }
LABEL_35:
    v21 = *(_DWORD *)(this + 540); /*0x73563d*/
    if ( v21 ) /*0x735645*/
    {
      if ( *(_BYTE *)(v21 + 704) ) /*0x735647*/
      {
        v22 = *(_DWORD *)(this + 1732); /*0x735651*/
        if ( !*(_BYTE *)(v22 + 3278) ) /*0x735657*/
        {
          if ( *(_BYTE *)(v22 + 3214) ) /*0x735661*/
            Power::ChangedHouse((_DWORD *)(this + 336), 1); /*0x735673*/
        }
      }
    }
    if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 2053) ) /*0x73567e*/
      UnitClass::SetTurret((_DWORD *)this, 0); /*0x73568c*/
  }
  ppv = AbstractClass::GetVtable3(this + 4); /*0x7356a0*/
  if ( dword_A8ED54[130748] + 1 <= dword_A8ED54[130749] ) /*0x7356ac*/
    goto LABEL_50; /*0x7356ac*/
  if ( dword_A8ED54[130749] ) /*0x7356b4*/
  {
    v23 = dword_A8ED54[130749]; /*0x7356bd*/
    if ( dword_A8ED54[130749] < 0 ) /*0x7356c1*/
      return this; /*0x7356c1*/
  }
  else
  {
    v23 = 10; /*0x7356b6*/
  }
  v24 = __2_YAPAXI_Z(8 * (dword_A8ED54[130749] + v23)); /*0x7356d7*/
  if ( v24 ) /*0x7356de*/
  {
    for ( i = 0; i < dword_A8ED54[130748]; *(_DWORD *)(v24 + 8 * i - 4) = v26[1] ) /*0x7356f3*/
    {
      v26 = (_DWORD *)(dword_A8ED54[130747] + 8 * i++); /*0x7356fb*/
      *(_DWORD *)(v24 + 8 * i - 8) = *v26; /*0x735701*/
    }
    __3_YAXPAX_Z((void *)dword_A8ED54[130747]); /*0x73571c*/
    dword_A8ED54[130747] = v24; /*0x73572b*/
    dword_A8ED54[130749] += v23; /*0x735731*/
    dword_A8ED54[130751] = 0; /*0x735736*/
LABEL_50:
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = ppv; /*0x735740*/
    *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = this; /*0x73575e*/
    LOBYTE(dword_A8ED54[130750]) = 0; /*0x735768*/
    ++dword_A8ED54[130748]; /*0x73576f*/
  }
  return this; /*0x735776*/
}


// ==== 0x00735780  UnitClass::Destructor  this=UnitClass  sig=csp ====
int __thiscall UnitClass::Destructor(void **this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int **v7; // edi
  __int16 *v8; // eax
  int v9; // eax
  int Vtable3; // eax
  int v11; // ebx
  int v12; // ebp
  int v13; // edi
  void **v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  _DWORD *v18; // eax
  void **v20; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 439); /*0x735789*/
  *this = &UnitClass::`vftable'; /*0x735794*/
  *(this + 1) = &UnitClass::`vftable'; /*0x73579a*/
  *(this + 2) = &UnitClass::`vftable'; /*0x7357a0*/
  *(this + 3) = &off_7F5C44; /*0x7357a7*/
  if ( v2 ) /*0x7357ae*/
  {
    UnitClass::updateHarvesting(v2); /*0x7357b0*/
    *(this + 439) = 0; /*0x7357b5*/
  }
  if ( LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x7357c2*/
  {
    v3 = (int)*(this + 433); /*0x7357c8*/
    if ( v3 ) /*0x7357d0*/
    {
      if ( HouseClass::CanBuild(*(this + 135), v3, 0, 0) == -1 ) /*0x7357e7*/
        *((_BYTE *)*(this + 135) + 508) = 1; /*0x7357ef*/
      v4 = (int)*(this + 373); /*0x7357f6*/
      if ( v4 ) /*0x7357fe*/
      {
        TeamClass::LiberateMember_Start(v4, (int)this, 0xFFFFFFFF, 0); /*0x735804*/
        *(this + 373) = 0; /*0x735809*/
      }
      HouseClass::DecrementUnitCount(*(this + 135), this); /*0x735816*/
      if ( !MEMORY[0x87F7E8][539633] && *(this + 70) ) /*0x735823*/
      {
        do /*0x735845*/
        {
          v5 = LinkedList::Pop(this + 69); /*0x735833*/
          if ( v5 ) /*0x73583a*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x735842*/
        }
        while ( *(this + 70) ); /*0x735845*/
      }
      if ( (unsigned __int8)TechnoClass::CleanupDirection(this) ) /*0x73584f*/
      {
        v6 = (int)*(this + 435); /*0x735858*/
        if ( v6 != -1 ) /*0x735861*/
        {
          v7 = (int **)(MEMORY[0x87F7E8][524945] + 4 * v6); /*0x73586c*/
          v8 = (__int16 *)(*((int (__thiscall **)(void **, void ***))*this + 110))(this, &v20); /*0x735876*/
          HouseClass::DroppedFlag(*v7, v8, 0); /*0x73587f*/
          *(this + 435) = (void *)-1; /*0x735884*/
        }
      }
    }
  }
  AbstractClass::AnnounceExpiredPointer(this, 1); /*0x735892*/
  v20 = this; /*0x7358a7*/
  v9 = (*(int (__thiscall **)(_DWORD *, void ***))(MEMORY[0x87F7E8][53832] + 16))(&MEMORY[0x87F7E8][53832], &v20); /*0x7358ab*/
  if ( v9 != -1 && v9 < MEMORY[0x87F7E8][53836] ) /*0x7358bb*/
  {
    --MEMORY[0x87F7E8][53836]; /*0x7358c0*/
    for ( ; /*0x7358c6*/
          v9 < MEMORY[0x87F7E8][53836];
          *(_DWORD *)(MEMORY[0x87F7E8][53833] + 4 * v9 - 4) = *(_DWORD *)(MEMORY[0x87F7E8][53833] + 4 * v9) )
    {
      ++v9; /*0x7358ce*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3((int)(this + 1)); /*0x7358e1*/
  v11 = dword_A8ED54[130748]; /*0x7358e6*/
  v20 = (void **)Vtable3; /*0x7358ec*/
  if ( dword_A8ED54[130748] ) /*0x7358f2*/
  {
    if ( !LOBYTE(dword_A8ED54[130750]) ) /*0x7358ff*/
    {
      qsort((void *)dword_A8ED54[130747], dword_A8ED54[130748], 8, CompareFunction); /*0x73590f*/
      v11 = dword_A8ED54[130748]; /*0x735914*/
      dword_A8ED54[130751] = 0; /*0x73591d*/
      LOBYTE(dword_A8ED54[130750]) = 1; /*0x735923*/
    }
    v12 = dword_A8ED54[130747]; /*0x73592a*/
    v13 = v11; /*0x735930*/
    while ( v13 > 0 ) /*0x735934*/
    {
      v14 = *(void ***)(v12 + 8 * (v13 / 2)); /*0x735941*/
      v15 = v12 + 8 * (v13 / 2); /*0x735945*/
      if ( (int)v20 >= (int)v14 ) /*0x73594d*/
      {
        if ( v14 == v20 ) /*0x735957*/
        {
          if ( v15 ) /*0x73597d*/
          {
            v16 = (v15 - dword_A8ED54[130747]) >> 3; /*0x735985*/
            if ( v16 != -1 ) /*0x73598b*/
            {
              v17 = v16 + 1; /*0x73598d*/
              if ( v17 < v11 ) /*0x735990*/
              {
                do /*0x7359af*/
                {
                  v18 = (_DWORD *)(dword_A8ED54[130747] + 8 * v17++); /*0x735998*/
                  *(v18 - 2) = *v18; /*0x73599e*/
                  *(v18 - 1) = v18[1]; /*0x7359a4*/
                  v11 = dword_A8ED54[130748]; /*0x7359a7*/
                }
                while ( v17 < dword_A8ED54[130748] ); /*0x7359af*/
              }
              dword_A8ED54[130748] = v11 - 1; /*0x7359bc*/
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748]) = 0; /*0x7359c2*/
              *(_DWORD *)(dword_A8ED54[130747] + 8 * dword_A8ED54[130748] + 4) = 0; /*0x7359d0*/
              dword_A8ED54[130751] = 0; /*0x7359d4*/
            }
          }
          break; /*0x7359d4*/
        }
        v12 = v15 + 8; /*0x735959*/
        v13 += -1 - v13 / 2; /*0x735961*/
      }
      else
      {
        v13 /= 2; /*0x73594f*/
      }
    }
  }
  *((_BYTE *)this + 144) = 0; /*0x7359da*/
  return FootClass::Destruct(this); /*0x735975*/
}


// ==== 0x007359F0  UnitClass::CalcMoveTarget  this=UnitClass  sig=csp ====
void __thiscall UnitClass_CalcMoveTarget(int *this)
{
  _DWORD *v2; // eax
  int *v3; // edi
  int *v4; // eax
  _DWORD *v5; // ebp
  int *v6; // eax
  _WORD *Height; // eax
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  void *v12; // eax
  int GroundHeight; // ebx
  int v14; // eax
  char v15; // bl
  int v16; // ebx
  int *v17; // eax
  _DWORD *v18; // eax
  int *Coords; // ebp
  _DWORD *v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int *v25; // eax
  int v26; // eax
  int v27; // edi
  unsigned int v28; // ebp
  double v29; // st7
  double v30; // st7
  int v31; // eax
  bool v32; // zf
  signed int v33; // ebx
  double v34; // st7
  int v35; // eax
  int v36; // edx
  int v37; // ebp
  int v38; // edi
  unsigned int v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  bool v43; // zf
  signed int v44; // ebp
  double v45; // st7
  __int64 v46; // rax
  _DWORD *v47; // ebx
  int v48; // ebp
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int i; // ebp
  _DWORD *v53; // edi
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // eax
  int v58; // edx
  void *v59; // edx
  int v60; // eax
  __int16 *v61; // eax
  int Type; // eax
  int v63; // [esp+18h] [ebp-68h]
  double v64; // [esp+18h] [ebp-68h]
  int v65; // [esp+24h] [ebp-5Ch]
  int v66; // [esp+24h] [ebp-5Ch]
  int v67; // [esp+24h] [ebp-5Ch]
  int v68; // [esp+24h] [ebp-5Ch]
  int v69; // [esp+28h] [ebp-58h]
  double v70; // [esp+28h] [ebp-58h]
  double v71; // [esp+28h] [ebp-58h]
  double v72[2]; // [esp+30h] [ebp-50h] BYREF
  double v73; // [esp+40h] [ebp-40h] BYREF
  int v74; // [esp+50h] [ebp-30h] BYREF
  void *v75; // [esp+54h] [ebp-2Ch]
  int v76; // [esp+58h] [ebp-28h] BYREF
  void **v77; // [esp+5Ch] [ebp-24h] BYREF
  void *Block; // [esp+60h] [ebp-20h]
  int v79; // [esp+64h] [ebp-1Ch]
  int v80; // [esp+68h] [ebp-18h]
  int v81; // [esp+6Ch] [ebp-14h]
  int v82; // [esp+70h] [ebp-10h] BYREF
  int v83; // [esp+74h] [ebp-Ch] BYREF
  int v84; // [esp+78h] [ebp-8h]
  int v85; // [esp+7Ch] [ebp-4h]

  if ( *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + *((char *)this + 1668)) + 4 * *((char *)this + 1669) + 48) != -1 ) /*0x735a20*/
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 72))(this); /*0x735a2f*/
    v3 = this + 346; /*0x735a32*/
    v4 = Vector3::Subtract(v2, &v76, this + 346); /*0x735a40*/
    Coord::Length(v4); /*0x735a47*/
    v5 = (_DWORD *)*((_DWORD *)MEMORY[0x8B413C] + *((char *)this + 1668)); /*0x735a5f*/
    v6 = (int *)(*(int (__thiscall **)(int *, int *, int *))(*this + 72))(this, &v82, this + 346); /*0x735a69*/
    Height = Cell::GetHeight(v72, v6, &v83); /*0x735a71*/
    v8 = *(this + 433); /*0x735a76*/
    LODWORD(v72[0]) = *(_DWORD *)Height; /*0x735a7e*/
    v63 = Math::RoundToInt((double)*(int *)(v8 + 1656) * 1.5); /*0x735a93*/
    v65 = v5[10]; /*0x735a9a*/
    v74 = ((__int16)v65 << 8) + 128; /*0x735aae*/
    v9 = (__int16)v5[9]; /*0x735ab8*/
    v10 = (SHIWORD(v65) << 8) + 128; /*0x735abb*/
    v66 = v5[9]; /*0x735ac1*/
    v75 = (void *)v10; /*0x735aca*/
    v76 = 0; /*0x735ad9*/
    v79 = 0; /*0x735add*/
    v11 = v5[112]; /*0x735ae1*/
    v77 = (void **)((v9 << 8) + 128); /*0x735ae7*/
    v12 = (void *)((SHIWORD(v66) << 8) + 128); /*0x735af2*/
    v67 = v11; /*0x735af7*/
    Block = v12; /*0x735b01*/
    GroundHeight = Cell::GetGroundHeight(&v77); /*0x735b0a*/
    v68 = (Cell::GetGroundHeight(&v74) - GroundHeight) / v67; /*0x735b26*/
    if ( v69 > v63 ) /*0x735b30*/
    {
      v37 = v5[*((char *)this + 1669) + 12]; /*0x735d42*/
      v83 = *(this + 39); /*0x735d48*/
      v84 = this->owningHouseIndex; /*0x735d4f*/
      v38 = *(this + 41); /*0x735d53*/
      LODWORD(v72[0]) = SLOWORD(v72[0]) - 0x3FFF; /*0x735d61*/
      v73 = (double)SLODWORD(v72[0]) * -0.00009587672516830327; /*0x735d6f*/
      v39 = HIDWORD(v73); /*0x735d77*/
      v71 = (double)v63; /*0x735d81*/
      v72[0] = (double)v84; /*0x735d8c*/
      v40 = Math::SinCos(v73); /*0x735d90*/
      LODWORD(v72[0]) = Math::RoundToInt(v72[0] - v40 * v71); /*0x735da8*/
      v41 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v39, LODWORD(v73)))); /*0x735dac*/
      v42 = Math::RoundToInt(v41 * v71 + (double)v83); /*0x735dbc*/
      Coord::Subtract(&v77, v42, SLODWORD(v72[0]), v38); /*0x735dcc*/
      v44 = v37 & 0x80000001; /*0x735ddd*/
      v43 = v44 == 0; /*0x735ddd*/
      v74 = (int)v77; /*0x735de3*/
      v75 = Block; /*0x735de7*/
      v76 = v79; /*0x735deb*/
      if ( v44 < 0 ) /*0x735def*/
        v43 = (((_BYTE)v44 - 1) | 0xFFFFFFFE) == -1; /*0x735df5*/
      if ( v43 ) /*0x735df6*/
        v45 = 256.0; /*0x735e00*/
      else
        v45 = 362.0386719675124; /*0x735df8*/
      v46 = Math::RoundToInt(v45); /*0x735e14*/
      v76 = v46; /*0x735e1d*/
      (*(void (__fastcall **)(int *, _DWORD, int *))(*this + 436))(this, HIDWORD(v46), &v74); /*0x735e28*/
      return; /*0x735e35*/
    }
    v14 = *this; /*0x735b3c*/
    v15 = *((_BYTE *)this + 1669) + 1; /*0x735b3e*/
    *((_BYTE *)this + 1669) = v15; /*0x735b44*/
    v16 = v5[v15 + 12]; /*0x735b4c*/
    (*(void (__thiscall **)(int *, int *))(v14 + 436))(this, this + 346); /*0x735b58*/
    if ( v16 != -1 ) /*0x735b64*/
    {
      v17 = Coord::Subtract( /*0x735b92*/
              &v83,
              MEMORY[0x89F6D8][2 * (v16 & 7)] + *v3,
              *(this + 347) + MEMORY[0x89F6DC][2 * (v16 & 7)],
              *(this + 348));
      v74 = *v17; /*0x735b99*/
      v75 = (void *)v17[1]; /*0x735ba5*/
      v76 = v17[2]; /*0x735bb2*/
      v18 = Coord::To_Cell(&MEMORY[0x87F7E8], this + 346); /*0x735bb6*/
      Coords = CellClass::GetCoords(v18, (int *)&v73); /*0x735bc2*/
      v20 = Coord::To_Cell(&MEMORY[0x87F7E8], &v74); /*0x735bd3*/
      v21 = CellClass::GetCoords(v20, (int *)v72); /*0x735bda*/
      v22 = *v21 - *Coords + *v3; /*0x735bf2*/
      v23 = v21[1] - Coords[1] + *(this + 347); /*0x735bf7*/
      v24 = *(this + 348); /*0x735bf9*/
      *v3 = v22; /*0x735bfc*/
      *(this + 347) = v23; /*0x735c00*/
      *(this + 348) = v24; /*0x735c07*/
      *(this + 348) += v68; /*0x735c16*/
      v25 = (int *)(*(int (__thiscall **)(int *, int *))(*this + 72))(this, &v83); /*0x735c21*/
      v26 = (__int16)*(_DWORD *)Cell::GetHeight(v72, v25, this + 346); /*0x735c36*/
      v83 = *(this + 39); /*0x735c3b*/
      v84 = this->owningHouseIndex; /*0x735c42*/
      v27 = *(this + 41); /*0x735c4a*/
      LODWORD(v72[0]) = v63 - v69; /*0x735c5c*/
      v73 = (double)(v26 - 0x3FFF) * -0.00009587672516830327; /*0x735c6e*/
      v28 = HIDWORD(v73); /*0x735c76*/
      v64 = (double)(v63 - v69); /*0x735c80*/
      v70 = (double)v84; /*0x735c8b*/
      v29 = Math::SinCos(v73); /*0x735c8f*/
      LODWORD(v70) = Math::RoundToInt(v70 - v29 * v64); /*0x735ca7*/
      v30 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v28, LODWORD(v73)))); /*0x735cab*/
      v31 = Math::RoundToInt(v30 * v64 + (double)v83); /*0x735cbb*/
      Coord::Subtract(&v74, v31, SLODWORD(v70), v27); /*0x735ccb*/
      v33 = v16 & 0x80000001; /*0x735cdc*/
      v32 = v33 == 0; /*0x735cdc*/
      v77 = (void **)v74; /*0x735ce2*/
      Block = v75; /*0x735ce6*/
      v79 = v76; /*0x735cea*/
      if ( v33 < 0 ) /*0x735cee*/
        v32 = (((_BYTE)v33 - 1) | 0xFFFFFFFE) == -1; /*0x735cf4*/
      if ( v32 ) /*0x735cf5*/
        v34 = 256.0; /*0x735cff*/
      else
        v34 = 362.0386719675124; /*0x735cf7*/
      v35 = Math::RoundToInt(v34); /*0x735d13*/
      v36 = *this; /*0x735d18*/
      v79 = v35; /*0x735d1a*/
      (*(void (__thiscall **)(int *, void ***))(v36 + 436))(this, &v77); /*0x735d27*/
      return; /*0x735d34*/
    }
  }
  v83 = *(this + 39); /*0x735e40*/
  v84 = this->owningHouseIndex; /*0x735e4c*/
  v85 = *(this + 41); /*0x735e58*/
  v47 = Coord::To_Cell(&MEMORY[0x87F7E8], &v83); /*0x735e64*/
  v48 = v47[57]; /*0x735e66*/
  if ( v48 ) /*0x735e6e*/
  {
    ObjectVector::Construct(&v77, 0, 0); /*0x735e7c*/
    v49 = v79; /*0x735e81*/
    v50 = 10; /*0x735e85*/
    v77 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x735e8c*/
    v82 = 10; /*0x735e94*/
    v81 = 0; /*0x735e98*/
    while ( 1 ) /*0x735ea2*/
    {
      if ( v81 < v49 ) /*0x735ea6*/
        goto LABEL_24; /*0x735ea6*/
      if ( (BYTE1(v80) || !v49) && v50 > 0 ) /*0x735eb6*/
        break; /*0x735eb6*/
LABEL_26:
      v48 = *(_DWORD *)(v48 + 48); /*0x735ee1*/
      if ( !v48 ) /*0x735ee6*/
      {
        for ( i = 0; i < v81; ++i ) /*0x735ef0*/
        {
          v53 = (_DWORD *)*((_DWORD *)Block + i); /*0x735ef6*/
          if ( (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 1 /*0x735f0f*/
            || (*(int (__thiscall **)(_DWORD *))(*v53 + 44))(v53) == 15 )
          {
            if ( !v53[413] ) /*0x735f11*/
              WinAPI::Wrapper(-2147467261); /*0x735f1e*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)v53[413] + 16))(v53[413]) ) /*0x735f2c*/
            {
              v54 = *v53; /*0x735f33*/
              v83 = 0; /*0x735f40*/
              v84 = 0; /*0x735f47*/
              v85 = 0; /*0x735f4e*/
              (*(void (__thiscall **)(_DWORD *, int *, int, int))(v54 + 372))(v53, &v83, 1, 1); /*0x735f55*/
            }
          }
        }
        (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1348))(this, 0, 0); /*0x735f6a*/
        v77 = &VectorClass<ObjectClass *>::`vftable'; /*0x735f74*/
        if ( Block && BYTE1(v80) ) /*0x735f8a*/
          __3_YAXPAX_Z(Block); /*0x735f91*/
        return; /*0x735fa0*/
      }
      v50 = v82; /*0x735e9e*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v50 + v49, 0) ) /*0x735ec4*/
    {
LABEL_24:
      v51 = v81++; /*0x735ecb*/
      *((_DWORD *)Block + v51) = v48; /*0x735eda*/
    }
    v49 = v79; /*0x735edd*/
    goto LABEL_26; /*0x735edd*/
  }
  v55 = *(this + 348); /*0x735fb4*/
  LODWORD(v72[0]) = *(_DWORD *)(*((_DWORD *)MEMORY[0x8B413C] + *((char *)this + 1668)) + 40); /*0x735fba*/
  v85 = v55; /*0x735fbe*/
  v84 = (SWORD1(v72[0]) << 8) + 128; /*0x735fdb*/
  v83 = (SLOWORD(v72[0]) << 8) + 128; /*0x735fe3*/
  (*(void (__thiscall **)(int *, int *))(*this + 436))(this, &v83); /*0x735fec*/
  v56 = *this; /*0x735ff2*/
  *((_BYTE *)this + 1668) = -1; /*0x735ff8*/
  (*(void (__thiscall **)(int *, int))(v56 + 292))(this, 1); /*0x735fff*/
  if ( (_DWORD *)*(this + 361) == v47 ) /*0x73600b*/
  {
    v57 = *this; /*0x73600d*/
    v77 = 0; /*0x73601c*/
    Block = 0; /*0x736020*/
    v79 = 0; /*0x736024*/
    (*(void (__thiscall **)(int *, void ***, int, int))(v57 + 372))(this, &v77, 1, 1); /*0x736028*/
  }
  v58 = *this; /*0x736032*/
  *((_BYTE *)this + 1675) = 1; /*0x736038*/
  (*(void (__thiscall **)(int *, int))(v58 + 396))(this, 2); /*0x73603f*/
  (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1348))(this, 0, 1072693248); /*0x73604f*/
  v59 = (void *)this->owningHouseIndex; /*0x736057*/
  v60 = *(this + 41); /*0x73605a*/
  v77 = (void **)*(this + 39); /*0x73605d*/
  Block = v59; /*0x736065*/
  v79 = v60; /*0x73606f*/
  v61 = (__int16 *)Coord::To_Cell(&MEMORY[0x87F7E8], &v77); /*0x736073*/
  Type = InfantryClass::GetType(v61); /*0x73607a*/
  if ( Type ) /*0x736081*/
  {
    LOWORD(v72[0]) = (((unsigned __int16)*(_DWORD *)(Type + 44) << 13) - 24577) & 0xE000; /*0x7360a0*/
    FacingClass::Set_SyncLog(v72); /*0x7360a5*/
  }
}


// ==== 0x00736579  InfantryClass::UpdateBehavior  this=InfantryClass  sig=csp ====
// positive sp value has been detected, the output may be wrong!
char __usercall InfantryClass::UpdateBehavior@<al>(int a1@<eax>, int a2@<ecx>, int a3@<ebx>, _BYTE *a4@<esi>, int a5)
{
  void **v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // edi
  int v13; // ecx
  void *v14; // eax
  _DWORD *v15; // eax
  _WORD *v16; // eax
  __int16 v17; // di
  __int16 v18; // bx
  _DWORD *v19; // eax
  _DWORD *v20; // edi
  int v21; // ebx
  __int16 *PlacementCellsAlt; // eax
  void *v23; // eax
  int v25; // [esp-2Eh] [ebp-40h] BYREF
  _DWORD v26[2]; // [esp-26h] [ebp-38h] BYREF
  int *v27; // [esp-1Eh] [ebp-30h]
  _DWORD v28[2]; // [esp-1Ah] [ebp-2Ch] BYREF
  _DWORD v29[4]; // [esp-12h] [ebp-24h] BYREF
  int v30[2]; // [esp-2h] [ebp-14h] BYREF
  int v31; // [esp+6h] [ebp-Ch] BYREF
  int v32; // [esp+Ah] [ebp-8h] BYREF
  int v33; // [esp+Eh] [ebp-4h]
  int vars0; // [esp+12h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+16h] [ebp+4h]

  v30[0] = a2; /*0x73657d*/
  v30[1] = a3; /*0x736581*/
  v31 = a1; /*0x736585*/
  v5 = (void **)__2_YAPAXI_Z(v27); /*0x736589*/
  if ( v5 ) /*0x736593*/
    AnimClass::ctor(v5, *(void **)(MEMORY[0x87F7E8][7806] + 148), v30, 0, 1, (void *)0x600, 0, 0); /*0x7365b6*/
  LOBYTE(v6) = a4[144]; /*0x7365bb*/
  if ( (_BYTE)v6 ) /*0x7365c3*/
  {
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) != 10 ) /*0x7365d6*/
      a4[1746] = 0; /*0x7365d8*/
    UpdateTechnoFiring((#377 *)a4); /*0x7365e1*/
    UnitClass::UpdateRotation_TurretFacing_EMP((int)a4); /*0x7365e8*/
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) == 5 /*0x73662d*/
      && (v32 = *((_DWORD *)a4 + 39),
          v7 = *((_DWORD *)a4 + 40),
          v27 = &v32,
          v33 = v7,
          vars0 = *((_DWORD *)a4 + 41),
          !Tactical::IsCellVisible(MEMORY[0x87F7E8], &v32))
      && a4[981] )
    {
      v8 = *((_DWORD *)a4 + 373); /*0x736637*/
      if ( v8 ) /*0x73663f*/
        *(_BYTE *)(v8 + 130) = 1; /*0x736641*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 928))(a4); /*0x73664c*/
      LOBYTE(v6) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 248))(a4); /*0x736656*/
    }
    else
    {
      v9 = *((_DWORD *)a4 + 433); /*0x736664*/
      if ( *(_BYTE *)(v9 + 3608) || *(_BYTE *)(v9 + 3609) ) /*0x736674*/
        UpdateInfantryIdleWander((int *)a4); /*0x736680*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 1060))(a4); /*0x736689*/
      if ( *(int *)(*((_DWORD *)a4 + 433) + 1504) > 0 /*0x7366ce*/
        && !Flag::CheckNone(a4 + 848)
        && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 388))(a4) != 16
        && (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 628))(a4, 17) != 1 )
      {
        Timer::StartDouble(a4 + 848, *(double *)(*((_DWORD *)a4 + 433) + 968)); /*0x7366e6*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 512))(a4) ) /*0x7366ef*/
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 492))(a4); /*0x7366fd*/
      if ( *((_DWORD *)a4 + 136) == 2 && *((_DWORD *)a4 + 435) != -1 ) /*0x736713*/
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 252))(a4); /*0x736719*/
      if ( (dword_A8ED54[12] & 0xF) == 0 ) /*0x736726*/
      {
        v10 = *((_DWORD *)a4 + 43); /*0x73672c*/
        if ( (v10 == 11 || v10 == 5) /*0x73675a*/
          && !(unsigned __int8)House::IsCurrentPlayer(*((#375 **)a4 + 135))
          && *((_DWORD *)a4 + 45) == -1 )
        {
          v11 = *((_DWORD *)a4 + 433); /*0x736760*/
          if ( *((_DWORD *)a4 + 27) < *(_DWORD *)(v11 + 160) /*0x73679a*/
            && (!*((_DWORD *)a4 + 134) || *((_DWORD *)a4 + 43) == 11)
            && !*(_BYTE *)(v11 + 3598)
            && !*(_BYTE *)(v11 + 3599) )
          {
            v12 = globalHelper_055DD0(*((_DWORD *)a4 + 135), a4); /*0x7367b1*/
            if ( v12 ) /*0x7367b5*/
            {
              if ( !*((_DWORD *)a4 + 134) ) /*0x7367b7*/
              {
                v31 = *((_DWORD *)a4 + 39); /*0x7367cd*/
                v13 = *((_DWORD *)a4 + 40); /*0x7367d5*/
                v26[1] = &v31; /*0x7367d8*/
                v32 = v13; /*0x7367d9*/
                v33 = *((_DWORD *)a4 + 41); /*0x7367e5*/
                v14 = Coord::To_Cell(MEMORY[0x87F7E8], &v31); /*0x7367e9*/
                TechnoClass::SetFocus(a4, (int)v14); /*0x7367f1*/
              }
              (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a4 + 488))(a4, 7, 0); /*0x7367fe*/
              (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a4 + 968))(a4, 0); /*0x73680a*/
              (*(void (__thiscall **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a4 + 1152))(a4, v12, 1); /*0x736817*/
            }
          }
        }
      }
      v6 = (_DWORD *)*((_DWORD *)a4 + 433); /*0x73681d*/
      if ( *((_BYTE *)v6 + 3598) ) /*0x736823*/
      {
        LOBYTE(v6) = House::IsCurrentPlayer(*((#375 **)a4 + 135)); /*0x736837*/
        if ( !(_BYTE)v6 && dword_A8ED54[12] - *((_DWORD *)a4 + 48) > 300 ) /*0x736858*/
        {
          if ( !*((_DWORD *)a4 + 413) ) /*0x73685e*/
            WinAPI::Wrapper(-2147467261); /*0x73686d*/
          LOBYTE(v6) = (*(int (__cdecl **)(_DWORD))(**((_DWORD **)a4 + 413) + 16))(*((_DWORD *)a4 + 413)); /*0x73687b*/
          if ( !(_BYTE)v6 ) /*0x736880*/
          {
            v29[0] = *((_DWORD *)a4 + 39); /*0x736890*/
            v29[1] = *((_DWORD *)a4 + 40); /*0x7368a1*/
            v29[2] = *((_DWORD *)a4 + 41); /*0x7368a8*/
            v15 = Coord::To_Cell(MEMORY[0x87F7E8], v29); /*0x7368ac*/
            v6 = Cell::IsBridge(v15); /*0x7368b3*/
            if ( v6 ) /*0x7368ba*/
            {
              if ( *(_BYTE *)(v6[328] + 5819) ) /*0x7368c6*/
              {
                v16 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v6 + 440))(v6, v26); /*0x7368dd*/
                v17 = *v16 + 3; /*0x7368f0*/
                v18 = v16[1] + 1; /*0x7368f7*/
                v6 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)a4 + 440))(a4, v26); /*0x7368f9*/
                if ( *(_WORD *)v6 == v17 && *((_WORD *)v6 + 1) == v18 ) /*0x736908*/
                {
                  v28[0] = vars0; /*0x736913*/
                  v28[1] = retaddr; /*0x73691b*/
                  v29[0] = a5; /*0x736925*/
                  v19 = Coord::To_Cell(MEMORY[0x87F7E8], v28); /*0x736929*/
                  v20 = Cell::IsBridge(v19); /*0x736937*/
                  if ( Team::AllMembersValid((int *)a4) ) /*0x736939*/
                    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a4 + 628))(a4, 3); /*0x736948*/
                  v21 = *(_DWORD *)a4; /*0x73694e*/
                  PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt(a4, &v25, (int)v20); /*0x73695a*/
                  v23 = CellCoord::To_CellObj(MEMORY[0x87F7E8], PlacementCellsAlt); /*0x736965*/
                  (*(void (__thiscall **)(_BYTE *, void *))(v21 + 1152))(a4, v23); /*0x73696d*/
                  LOBYTE(v6) = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a4 + 488))(a4, 2, 1); /*0x73697b*/
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)v6; /*0x736663*/
}


// ==== 0x00736990  UnitClass::UpdateRotation_TurretFacing_EMP  this=UnitClass  sig=csp ====
char __thiscall UnitClass::UpdateRotation_TurretFacing_EMP(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  bool v7; // al
  int v8; // edi
  bool v9; // cl
  _WORD *v10; // eax
  int v11; // eax
  _WORD *Value; // [esp-4h] [ebp-14h]
  int v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 692); /*0x736997*/
  if ( v2 && !*(_BYTE *)(this + 1711) ) /*0x7369a5*/
  {
    v3 = *ObjectClass::CalcTargetFacing((void *)this, &v15, v2); /*0x7369c0*/
    v4 = *(_DWORD *)(this + 1732); /*0x7369c2*/
    v14 = v3; /*0x7369c8*/
    if ( *(_BYTE *)(v4 + 3233) ) /*0x7369cc*/
    {
      v5 = (*(int (__thiscall **)(int))(this->__pad_3F4)(this); /*0x7369e0*/
      if ( IsNonNullPtr((_DWORD *)v5) && !*(_BYTE *)(*(_DWORD *)v5 + 299) ) /*0x7369f4*/
      {
        if ( *(_BYTE *)(v5 + 24) ) /*0x736a02*/
        {
          Value = ProgressTimer::GetValue((_WORD *)(this + 904), &v15); /*0x736a19*/
          FacingClass::Update((char *)(this + 928), Value); /*0x736a20*/
        }
        else
        {
          FacingClass::Update((char *)(this + 928), &v14); /*0x736a2d*/
        }
      }
    }
    else if ( *(_DWORD *)(v4 + 1660) == 1 && !*(_DWORD *)(this + 1444) ) /*0x736a38*/
    {
      if ( !*(_DWORD *)(this + 1652) ) /*0x736a42*/
        WinAPI::Wrapper(-2147467261); /*0x736a51*/
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) /*0x736a80*/
        && *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 904), &v15) == (_WORD)v14 )
      {
        FacingClass::Update((char *)(this + 904), &v14); /*0x736a89*/
      }
    }
  }
  v6 = *(_DWORD *)(this + 1732); /*0x736a8e*/
  if ( *(_BYTE *)(v6 + 3361) ) /*0x736a95*/
  {
    LOWORD(v14) = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 928), &v15) >> 7) + 1) >> 1) /*0x736acb*/
                 + 8) << 8;
    FacingClass::Update((char *)(this + 928), &v14); /*0x736ad0*/
    goto LABEL_38; /*0x736ad0*/
  }
  *(_BYTE *)(this + 1711) = 0; /*0x736ad5*/
  if ( *(_BYTE *)(v6 + 3233) ) /*0x736adc*/
  {
    if ( TimerClass::Active(this + 928) ) /*0x736af2*/
    {
      if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3361) ) /*0x736b01*/
        *(_BYTE *)(this + 1711) = TimerClass::Active(this + 928); /*0x736b16*/
    }
    else if ( !*(_DWORD *)(this + 692) ) /*0x736b21*/
    {
      v7 = dword_A8ED54[12] - *(_DWORD *)(this + 288) >= *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3588) + 5; /*0x736b52*/
      if ( *(_DWORD *)(this + 740) ) /*0x736b54*/
        v7 = 0; /*0x736b5e*/
      if ( (!*(_BYTE *)(*(_DWORD *)(this + 1732) + 3603) || !*(_BYTE *)(this + 1760)) && v7 ) /*0x736b7c*/
      {
        v8 = (*(int (__thiscall **)(int))(this->__pad_3F4)(this); /*0x736b88*/
        v9 = IsNonNullPtr((_DWORD *)v8) && *(_BYTE *)(v8 + 24); /*0x736b9d*/
        if ( !*(_DWORD *)(this + 1444) || v9 ) /*0x736baf*/
        {
          v10 = ProgressTimer::GetValue((_WORD *)(this + 904), &v15); /*0x736bd5*/
        }
        else
        {
          if ( *(_BYTE *)(this + 1709) ) /*0x736bb1*/
            goto LABEL_38; /*0x736bb9*/
          v10 = ObjectClass::CalcTargetFacing((void *)this, &v15, *(_DWORD *)(this + 1444)); /*0x736bc3*/
        }
        FacingClass::Update((char *)(this + 928), v10); /*0x736bdd*/
      }
    }
  }
LABEL_38:
  LOBYTE(v11) = *(_BYTE *)(*(_DWORD *)(this + 1732) + 3233); /*0x736be2*/
  if ( (_BYTE)v11 ) /*0x736bf1*/
  {
    v11 = TimerClass::Active(this + 928); /*0x736bfe*/
    *(_DWORD *)(this + 1184) = v11; /*0x736c03*/
  }
  return v11; /*0x736c09*/
}


// ==== 0x00736C10  ObjectClass::method_736C10  this=ObjectClass  sig=csp ====
char __thiscall sub_736C10(_DWORD *this)
{
  int v2; // eax
  _DWORD v4[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(_DWORD *))(*this + 388))(this) != 5 ) /*0x736c21*/
    return 0; /*0x736c21*/
  v4[0] = *(this + 39); /*0x736c2f*/
  v4[1] = this->q0A0; /*0x736c3b*/
  v4[2] = this->q0A4; /*0x736c42*/
  if ( Tactical::IsCellVisible(&MEMORY[0x87F7E8], v4) || !*((_BYTE *)this + 981) ) /*0x736c54*/
    return 0; /*0x736c8a*/
  v2 = *(this + 373); /*0x736c5e*/
  if ( v2 ) /*0x736c66*/
    *(_BYTE *)(v2 + 130) = 1; /*0x736c68*/
  (*(void (__thiscall **)(_DWORD *))(*this + 928))(this); /*0x736c73*/
  (*(void (__thiscall **)(_DWORD *))(*this + 248))(this); /*0x736c7d*/
  return 1; /*0x736c85*/
}


// ==== 0x00736CA0  TechnoClass::UpdateUnitAnimation  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::UpdateUnitAnimation(#377 *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v7; // [esp+Ch] [ebp-8h]

  if ( !*(_BYTE *)(this->q6C4 + 1710) ) /*0x736cad*/
  {
    if ( !this->q674 ) /*0x736cbb*/
      WinAPI::Wrapper(-2147467261); /*0x736cca*/
    if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(this->q674) ) /*0x736cd8*/
    {
      v2 = *((_DWORD *)this + 127); /*0x736cdf*/
      v3 = *((_DWORD *)this + 129); /*0x736ce5*/
      if ( v2 != -1 ) /*0x736cf4*/
      {
        if ( (int)MEMORY[0xA8ED84] - v2 >= v3 ) /*0x736cfc*/
          return TechnoClass::StepAnimFrame(this); /*0x736cfc*/
        v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x736cfe*/
      }
      if ( v3 > 0 ) /*0x736d02*/
      {
        v4 = *((_DWORD *)this + 127); /*0x736d04*/
        v5 = *((_DWORD *)this + 129); /*0x736d0a*/
        if ( v4 != -1 ) /*0x736d13*/
        {
          if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x736d1b*/
            v5 = 0; /*0x736d21*/
          else
            v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x736d1d*/
        }
        *((_DWORD *)this + 127) = MEMORY[0xA8ED84]; /*0x736d2a*/
        this->q200 = v7; /*0x736d30*/
        *((_DWORD *)this + 129) = v5 + 1; /*0x736d36*/
      }
    }
  }
  return TechnoClass::StepAnimFrame(this); /*0x736d43*/
}


// ==== 0x00736D50  TechnoClass::IsC4AnimationActive  this=TechnoClass  sig=csp ====
bool __thiscall TechnoClass::sub_736D50(int this)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v7; // esi
  void *v8; // eax
  _DWORD v9[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 1732); /*0x736d56*/
  if ( *(_BYTE *)(v2 + 3602) ) /*0x736d5c*/
    return 1; /*0x736d66*/
  v4 = *(_DWORD *)(v2 + 1028); /*0x736d6d*/
  if ( !v4 ) /*0x736d75*/
    return 0; /*0x736d75*/
  if ( !*(_BYTE *)(v4 + 5828) ) /*0x736d77*/
    return 0; /*0x736d77*/
  if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x736d87*/
    return 0; /*0x736d87*/
  v5 = *(_DWORD *)(this + 692); /*0x736d90*/
  if ( !v5 ) /*0x736d98*/
    return 0; /*0x736d98*/
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 12))(v5 + 4) - 1 ) /*0x736da4*/
    return 0; /*0x736daf*/
  v7 = (_DWORD *)(this + 156); /*0x736db6*/
  v9[0] = *v7; /*0x736dbe*/
  v9[1] = v7[1]; /*0x736dca*/
  v9[2] = v7[2]; /*0x736dd1*/
  v8 = Coord::To_Cell(&MEMORY[0x87F7E8], v9); /*0x736dda*/
  return BuildingClass::CheckC4Active((int)v8) != 0; /*0x736d68*/
}


// ==== 0x00736DF0  ObjectClass::UpdateTechnoFiring  this=UnitClass  sig=csp ====
int __thiscall UpdateTechnoFiring(#377 *this)
{
  ObjectClass *v2; // edi
  int v3; // eax
  int v4; // ebp
  int result; // eax
  BuildingClass *v6; // edi
  FacingStruct *v7; // eax
  FacingStruct *v8; // eax
  int *v9; // eax
  int *v10; // eax
  _WORD *WeaponType; // eax
  _DWORD *v12; // ecx
  int v13; // [esp+14h] [ebp-1Ch] BYREF
  int v14; // [esp+18h] [ebp-18h] BYREF
  int v15; // [esp+1Ch] [ebp-14h] BYREF
  char v16[8]; // [esp+20h] [ebp-10h] BYREF
  int v17; // [esp+28h] [ebp-8h]

  if ( this->q2B4 && *(_DWORD *)(*(int (__thiscall **)(#377 *, _DWORD))(this->q3F8)(this, 0) ) /*0x736e10*/
  {
    v2 = (ObjectClass *)(*(int (__thiscall **)(#377 *, _DWORD))(this->turretRecoil)(this, this->q2B4); /*0x736e2c*/
    v3 = (*(int (__thiscall **)(#377 *, _DWORD, ObjectClass *, int))(*(_DWORD *)this + 960))( /*0x736e3a*/
           this,
           this->q2B4,
           v2,
           1);
    v4 = v3; /*0x736e40*/
    if ( (!v3 || v3 == 2) && (*(unsigned __int8 (__thiscall **)(#377 *))(*(_DWORD *)this + 1252))(this) ) /*0x736e4f*/
      return (*(int (__thiscall **)(#377 *, int, _DWORD))(*(_DWORD *)this + 488))(this, 16, 0); /*0x736e6d*/
    switch ( v4 ) /*0x736e77*/
    {
      case 0: /*0x736e77*/
        v7 = (FacingStruct *)this->Type; /*0x736ee9*/
        if ( !LOBYTE(v7[150].Value.Value) ) /*0x736eef*/
          *((_BYTE *)this + 1677) = 0; /*0x736ef9*/
        if ( BYTE1(v7[150].Timer.StartTime) || LOBYTE(v7[150].Timer.StartTime) ) /*0x736f0a*/
        {
          this->radioContact = *(_DWORD *)&stru_830620.__pad_579C[4 /*0x736f3f*/
                                                                    * (((((unsigned int)*ObjectClass::CalcTargetFacing(
                                                                                           this,
                                                                                           (IUnknown *)&v13,
                                                                                           *((ObjectClass **)this + 173)) >> 12)
                                                                       + 1) >> 1)
                                                                     & 7)
                                                                    + 64244];
          this->radioCommand = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x736f4a*/
          this->radioTimer = v17; /*0x736f55*/
          this->q10C = 5; /*0x736f58*/
          this->__pad_108 = 5; /*0x736f5e*/
        }
        (*(void (__thiscall **)(#377 *, _DWORD, ObjectClass *))(this->audioController5)( /*0x736f6d*/
          this,
          this->q2B4,
          v2);
        break; /*0x736f73*/
      case 2: /*0x736e77*/
        v8 = (FacingStruct *)this->Type; /*0x736f78*/
        if ( HIBYTE(v8[150].Value.Value) || !BYTE1(v8[134].Timer.TimeLeft) ) /*0x736f88*/
        {
          if ( !this->FootClass_field_5A4 ) /*0x736fb6*/
          {
            if ( !this->Locomotor ) /*0x736fc4*/
              WinAPI::Wrapper(-2147467261); /*0x736fd3*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)this + 413) + 16))(this->Locomotor) ) /*0x736fe1*/
            {
              v10 = ObjectClass::CalcTargetFacing(this, (IUnknown *)&v15, *((ObjectClass **)this + 173)); /*0x736ffc*/
              FacingClass::Update((char *)this + 904, v10); /*0x737004*/
              WeaponType = TechnoClass::GetWeaponType((_DWORD *)this + 226, (ObjectClass *)v16); /*0x737010*/
              FacingClass::Update((char *)this + 928, WeaponType); /*0x73701c*/
            }
          }
        }
        else
        {
          v9 = ObjectClass::CalcTargetFacing(this, (IUnknown *)&v14, *((ObjectClass **)this + 173)); /*0x736fa0*/
          FacingClass::Update((char *)this + 928, v9); /*0x736fac*/
        }
        break; /*0x736fb1*/
      case 5: /*0x736e77*/
        if ( TechnoClass::GetValue(this, v2) < 0 ) /*0x736e88*/
        {
          v6 = (BuildingClass *)this->q2B4; /*0x736e8e*/
          if ( !v6 /*0x736ec1*/
            || (v6->abstractFlags & 2) == 0
            || (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6->__pad_0 + 44))(this->q2B4) != 1
            || BuildingClass::GetHealthRatio((int *)v6->__pad_0) >= *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108]
                                                                              + 5880) )
          {
            (*(void (__thiscall **)(#377 *, _DWORD))(this->audioHandle4)(this, 0); /*0x736ecd*/
          }
        }
        break; /*0x736ed3*/
      case 6: /*0x736e77*/
        v12 = (_DWORD *)*((_DWORD *)this + 180); /*0x737054*/
        if ( v12 ) /*0x73705c*/
          UnitClass::ProcessIdleOrders(v12); /*0x73705e*/
        break; /*0x73705e*/
      case 8: /*0x736e77*/
      case 11: /*0x736e77*/
        *((_BYTE *)this + 1677) = 0; /*0x73704b*/
        break; /*0x737052*/
      case 9: /*0x736e77*/
        *((_BYTE *)this + 1677) = 0; /*0x73702d*/
        if ( (unsigned __int8)TechnoClass::ValidateTarget(this) ) /*0x737034*/
          (*(void (__thiscall **)(#377 *, _DWORD))(*(_DWORD *)this + 1116))(this, 0); /*0x737043*/
        break; /*0x737049*/
      default:
        break;
    }
    if ( *(_BYTE *)(this->Type + 3285) && (!v4 || v4 == 3 || v4 == 2 || v4 == 4) ) /*0x737084*/
    {
      TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, 1); /*0x73708a*/
    }
    else if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3285) ) /*0x73709b*/
    {
      TechnoClass::DrainAmmo((char *)this, (BuildingClass *)1); /*0x7370a9*/
    }
    result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x7370b2*/
    if ( *(_BYTE *)(result + 3285) ) /*0x7370b8*/
    {
      result = TechnoClass::GetMember81(this); /*0x7370c4*/
      if ( result > 0 ) /*0x7370cb*/
      {
        result = this->ammoReloadTimer + 1; /*0x7370d4*/
        this->ammoReloadTimer = result; /*0x7370d5*/
      }
      return result; /*0x7370e0*/
    }
    if ( v4 ) /*0x7370e3*/
    {
      if ( v4 == 3 ) /*0x7370e8*/
      {
        result = this->ammoReloadTimer + 1; /*0x7370f1*/
        this->ammoReloadTimer = result; /*0x7370f2*/
      }
      return result; /*0x7370fd*/
    }
LABEL_52:
    ++this->ammoReloadTimer; /*0x73713a*/
    return result; /*0x73713a*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(#377 *))(this->hasParachute)(this) + 3285) ) /*0x737108*/
    TechnoClass::DrainAmmo((char *)this, (BuildingClass *)1); /*0x737116*/
  result = (*(int (__thiscall **)(#377 *))(this->hasParachute)(this); /*0x73711f*/
  if ( *(_BYTE *)(result + 3285) ) /*0x737125*/
  {
    result = TechnoClass::GetMember81(this); /*0x737131*/
    if ( result > 0 ) /*0x737138*/
      goto LABEL_52; /*0x737138*/
  }
  return result; /*0x736e67*/
}


// ==== 0x00737180  ObjectClass::UpdateInfantryIdleWander  this=TechnoClass  sig=csp ====
int __thiscall UpdateInfantryIdleWander(int *this)
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  int v5; // et2
  int v6; // eax
  char v7; // bl
  int v8; // ebp
  int v9; // eax
  __int16 v10; // dx
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // edi
  int v14; // edx
  __int16 v15; // cx
  void *v16; // eax
  int v17; // ebp
  void *v18; // ebx
  int LandHeightObjectClass; // eax
  void *v20; // [esp-8h] [ebp-30h]
  int v21; // [esp+10h] [ebp-18h] BYREF
  int v22; // [esp+14h] [ebp-14h]
  __int16 v23[4]; // [esp+18h] [ebp-10h] BYREF
  int v24; // [esp+20h] [ebp-8h]

  v2 = *(_DWORD *)(*(int (__thiscall **)(int *, __int16 *))(*this + 440))(this, v23); /*0x737198*/
  v3 = *(this + 62); /*0x73719a*/
  v21 = v2; /*0x7371a0*/
  if ( v3 >= 90 ) /*0x7371a8*/
  {
    v5 = v3 % 5; /*0x7371af*/
    result = v3 / 5; /*0x7371af*/
    if ( v5 == 4 ) /*0x7371b4*/
    {
      *(this + 62) = 30 * Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x7371e3*/
      this->q040 = (int)MEMORY[0xA8ED84]; /*0x7371ee*/
      result = v24; /*0x7371f0*/
      *(this + 67) = 1; /*0x7371f4*/
      *(this + 65) = result; /*0x7371fb*/
      *(this + 66) = 1; /*0x737200*/
    }
    return result; /*0x737206*/
  }
  if ( v3 % 30 == 29 ) /*0x737211*/
    *(this + 62) = 30 * Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x737230*/
  this->q040 = (int)MEMORY[0xA8ED84]; /*0x737246*/
  v6 = v24; /*0x737248*/
  *(this + 67) = 1; /*0x73724c*/
  *(this + 65) = v6; /*0x737252*/
  *(this + 66) = 1; /*0x737255*/
  if ( !*(this + 413) ) /*0x737258*/
    WinAPI::Wrapper(-2147467261); /*0x737267*/
  result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)); /*0x737275*/
  if ( !(_BYTE)result ) /*0x73727a*/
  {
    if ( *(_BYTE *)(*(this + 433) + 3608) ) /*0x737286*/
    {
      v7 = 7; /*0x737290*/
      v8 = 0; /*0x737295*/
      while ( 1 ) /*0x73729d*/
      {
        v7 = (v7 + 1) & 7; /*0x73729d*/
        v9 = v7 & 7; /*0x7372a2*/
        v10 = HIWORD(v21) + HIWORD(MEMORY[0x89F688][v9]); /*0x7372b5*/
        LOWORD(v22) = LOWORD(MEMORY[0x89F688][v9]) + v21; /*0x7372c1*/
        HIWORD(v22) = v10; /*0x7372ca*/
        *(_DWORD *)v23 = v22; /*0x7372d9*/
        v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v23); /*0x7372dd*/
        v12 = (_DWORD *)v11[57]; /*0x7372e2*/
        if ( v12 ) /*0x7372ea*/
        {
          if ( (*(int (__thiscall **)(_DWORD))(*v12 + 44))(v11[57]) == 1 && *(_BYTE *)(v12[433] + 3608) ) /*0x7372fe*/
            break; /*0x7372fe*/
        }
        if ( ++v8 >= 8 ) /*0x73730c*/
          goto LABEL_15; /*0x73730c*/
      }
      result = v12[361]; /*0x73734b*/
      if ( !result ) /*0x737353*/
      {
        result = v12[173]; /*0x737355*/
        if ( !result ) /*0x73735d*/
        {
          result = (*(int (__thiscall **)(_DWORD *, int *, int))(*v12 + 1152))(v12, this, 1); /*0x737366*/
LABEL_23:
          *(this + 437) = -1; /*0x73736c*/
        }
      }
    }
    else
    {
LABEL_15:
      result = *(this + 361); /*0x73730e*/
      if ( !result ) /*0x737316*/
      {
        result = *(this + 173); /*0x737318*/
        if ( !result ) /*0x737320*/
        {
          if ( *(this + 437) == -1 || !Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2) ) /*0x73733a*/
          {
            v13 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x737393*/
            *(this + 437) = v13; /*0x737395*/
          }
          else
          {
            v13 = *(this + 437); /*0x737343*/
          }
          v14 = v13 & 7; /*0x7373a2*/
          v15 = LOWORD(MEMORY[0x89F688][v14]) + v21; /*0x7373a5*/
          LOWORD(v14) = HIWORD(MEMORY[0x89F688][v14]); /*0x7373b4*/
          LOWORD(v22) = v15; /*0x7373bc*/
          HIWORD(v22) = HIWORD(v21) + v14; /*0x7373d0*/
          *(_DWORD *)v23 = v22; /*0x7373d9*/
          v16 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v23); /*0x7373dd*/
          v17 = *this; /*0x7373e2*/
          v18 = v16; /*0x7373f0*/
          v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21); /*0x7373f7*/
          LandHeightObjectClass = ObjectClass::GetLandHeight(this); /*0x7373fa*/
          result = (*(int (__thiscall **)(int *, void *, int, int, void *, int))(v17 + 428))( /*0x737404*/
                     this,
                     v18,
                     v13,
                     LandHeightObjectClass,
                     v20,
                     1);
          if ( !result ) /*0x73740c*/
            return (*(int (__thiscall **)(int *, void *, int))(*this + 1152))(this, v18, 1); /*0x737419*/
          goto LABEL_23; /*0x73740c*/
        }
      }
    }
  }
  return result; /*0x7371dd*/
}


// ==== 0x00737430  UnitClass::MissionDispatch  this=int  sig=csp ====
int __thiscall UnitClass::MissionDispatch(int this, int *a2, int a3, _DWORD *a4)
{
  int v4; // ebp
  int result; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int Member; // edi
  int v11; // edi
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // ebp
  int v15; // eax
  int TileIndex; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  double v24; // [esp+10h] [ebp-24h]
  int v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+18h] [ebp-1Ch] BYREF
  int v27; // [esp+1Ch] [ebp-18h] BYREF
  double v28; // [esp+20h] [ebp-14h]
  _DWORD v29[3]; // [esp+28h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h] BYREF
  int v31; // [esp+3Ch] [ebp+8h]
  int v32; // [esp+40h] [ebp+Ch]

  v4 = a3; /*0x737435*/
  switch ( a3 )
  {
    case 3:
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 12 ) /*0x737b21*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 5, 0); /*0x737b2b*/
      FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x737b3e*/
      return 1; /*0x737b46*/
    case 7:
      FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x737517*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x737524*/
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x737530*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 488))(this, 0, 0); /*0x73753e*/
      FootClass::ClearSomeVector((_DWORD *)this); /*0x737546*/
      if ( !*(_BYTE *)(this + 1048) || !Team::GetMember((_DWORD *)this, 0) ) /*0x737559*/
      {
        (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 2, a2); /*0x737569*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 24); /*0x737575*/
      }
      return 1; /*0x737587*/
    case 14:
      if ( !*(_DWORD *)(this + 1652) ) /*0x7377d8*/
        WinAPI::Wrapper(-2147467261); /*0x7377e7*/
      if ( ((*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) /*0x73780d*/
         || *(_DWORD *)(this + 1444))
        && *(_DWORD *)(this + 172) == 2 )
      {
        goto LABEL_54; /*0x73780d*/
      }
      if ( (int *)Team::GetMember((_DWORD *)this, 0) != a2 ) /*0x737829*/
      {
        v25 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x737841*/
        v12 = HouseClass::SumPowerDrain((int *)(this + 276)); /*0x737845*/
        v13 = *a2; /*0x73784a*/
        v28 = (double)v12; /*0x737856*/
        if ( (double)v25 < v28 + *(double *)((*(int (__thiscall **)(int *))(v13 + 132))(a2) + 896) /*0x737898*/
          || *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732)
                                                                                           + 904) )
        {
          goto LABEL_54; /*0x737898*/
        }
        if ( !Team::AllMembersValid((int *)this) ) /*0x7378a0*/
          (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 2, a2); /*0x7378b0*/
      }
      if ( *(_DWORD *)(this + 1444) ) /*0x7378b6*/
        goto LABEL_69; /*0x7378be*/
      retaddr = *(_UNKNOWN **)(*(int (__thiscall **)(int))(*(_DWORD *)this + 440))(this); /*0x7378df*/
      v14 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&retaddr); /*0x7378ee*/
      v15 = (*(int (__thiscall **)(int *, _DWORD))(*a2 + 132))(a2, 0); /*0x7378f0*/
      TileIndex = MapClass::GetTileIndex( /*0x73790e*/
                    MEMORY[0x87F7E8],
                    (__int16 *)(this + 1372),
                    *(_DWORD *)(v15 + 1460),
                    (char)&v27);
      v17 = -1; /*0x737910*/
      if ( a2 && (a2[5] & 4) != 0 ) /*0x73791b*/
      {
        v18 = (*(int (__thiscall **)(int *))(*a2 + 132))(a2); /*0x737923*/
        v17 = MapClass::GetTileIndex(MEMORY[0x87F7E8], (__int16 *)a2 + 686, *(_DWORD *)(v18 + 1460), 0); /*0x73793c*/
      }
      if ( TileIndex == v17 && (*(_DWORD *)(this + 1444) || v14[59] != 2) ) /*0x737972*/
      {
        v4 = a3; /*0x737990*/
LABEL_69:
        if ( *(int *)(*(_DWORD *)(this + 1732) + 1504) <= 0 ) /*0x7379a2*/
          return FootClass::MissionDispatch((int *)this, a2, v4, a4); /*0x7379a2*/
        v31 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x7379ae*/
        v19 = HouseClass::SumPowerDrain((int *)(this + 276)); /*0x7379b2*/
        v20 = *a2; /*0x7379b7*/
        v28 = (double)v19; /*0x7379c3*/
        v21 = (*(int (__thiscall **)(int *))(v20 + 132))(a2); /*0x7379c7*/
        if ( (double)v31 < v28 + *(double *)(v21 + 896) /*0x737a09*/
          || *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732)
                                                                                           + 904) )
        {
          return FootClass::MissionDispatch((int *)this, a2, v4, a4); /*0x737a09*/
        }
        FootClass::MissionDispatch((int *)this, a2, v4, a4); /*0x737a18*/
        if ( !*(_DWORD *)(this + 1652) ) /*0x737a1d*/
          WinAPI::Wrapper(-2147467261); /*0x737a2c*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) /*0x737a65*/
          && !*(_BYTE *)(this + 1711)
          && !*(_BYTE *)(this + 1048)
          && (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 19, a2) == 1 )
        {
          *a4 = this; /*0x737a67*/
          if ( (*(int (__thiscall **)(int, int, _DWORD *, int *))(*(_DWORD *)this + 636))(this, 18, a4, a2) != 1 ) /*0x737a7a*/
            (*(void (__thiscall **)(int, int, int *))(*(_DWORD *)this + 632))(this, 3, a2); /*0x737a83*/
        }
        result = 1; /*0x737a8c*/
      }
      else
      {
        (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)this + 1152))(this, a2, 1); /*0x73794c*/
        result = 14; /*0x737955*/
      }
      break; /*0x737a95*/
    case 15:
      if ( !*(_DWORD *)(*(_DWORD *)(this + 1732) + 1504) /*0x7375ad*/
        || !a2
        || !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)a2) )
      {
        goto LABEL_28; /*0x7375b4*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 468))(this) ) /*0x7375ba*/
      {
        result = 0; /*0x7375c7*/
      }
      else
      {
        v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 444))(this); /*0x7375d4*/
        if ( Cell::IsBridge(v8) ) /*0x7375dc*/
        {
          result = 0; /*0x7375e8*/
        }
        else if ( BuildingClass::IsBeingRepairedOrCaptured((int)a2) /*0x737616*/
               || (a2[5] & 4) != 0 && a2[421]
               || (v9 = (_DWORD *)a2[175]) != 0 && CellClass::HasContent(v9) )
        {
LABEL_28:
          result = 0; /*0x73761f*/
        }
        else
        {
          v32 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x73763d*/
          v24 = (double)HouseClass::SumPowerDrain((int *)(this + 276)); /*0x737652*/
          if ( (double)v32 < v24 + *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896) /*0x737698*/
            || *(double *)((*(int (__thiscall **)(int *))(*a2 + 132))(a2) + 896) > *(double *)(*(_DWORD *)(this + 1732)
                                                                                             + 904) )
          {
LABEL_54:
            result = 10; /*0x73780f*/
          }
          else
          {
            result = 1; /*0x7376a1*/
          }
        }
      }
      break; /*0x7375cd*/
    case 21:
      v11 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1504); /*0x73779b*/
      if ( HouseClass::SumPowerDrain((int *)(this + 276)) == v11 ) /*0x7377a8*/
        Timer::StartDouble((_BYTE *)(this + 848), *(double *)(*(_DWORD *)(this + 1732) + 968)); /*0x7377c4*/
      return 5; /*0x7377d5*/
    case 22:
      FootClass::MissionDispatch((int *)this, a2, a3, a4); /*0x7376ba*/
      if ( *(_BYTE *)(this + 1711) || *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 904), &v26) == 0x4000 ) /*0x7376de*/
      {
        if ( !*(_DWORD *)(this + 1652) ) /*0x73771b*/
          WinAPI::Wrapper(-2147467261); /*0x73772a*/
        if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(this + 1652) + 16))(*(_DWORD *)(this + 1652)) ) /*0x737738*/
        {
          Member = Team::GetMember((_DWORD *)this, 0); /*0x737748*/
          if ( *(_BYTE *)(this + 1048) ) /*0x73774a*/
          {
            if ( Member /*0x737771*/
              && (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6
              && (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7 )
            {
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 632))(this, 21, Member); /*0x73777a*/
            }
          }
        }
        return 1; /*0x737783*/
      }
      else
      {
        LOWORD(a2) = 0x4000; /*0x7376e6*/
        if ( !*(_DWORD *)(this + 1652) ) /*0x7376e0*/
          WinAPI::Wrapper(-2147467261); /*0x7376f6*/
        (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)(this + 1652) + 76))(*(_DWORD *)(this + 1652), a2); /*0x737709*/
        return 1; /*0x73770f*/
      }
    case 23:
      v22 = *(_DWORD *)(this + 1732); /*0x737a98*/
      if ( *(_BYTE *)(v22 + 3598) || *(_BYTE *)(v22 + 3599) ) /*0x737aa8*/
      {
        if ( *(_BYTE *)(this + 1745) ) /*0x737ab2*/
        {
          v23 = *(_DWORD *)this; /*0x737abc*/
          *(_BYTE *)(this + 1745) = 0; /*0x737ac9*/
          (*(void (__thiscall **)(int, int *, int, _DWORD))(v23 + 372))(this, &dword_A8ED54[145573], 1, 0); /*0x737ad0*/
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, 10, 0); /*0x737ade*/
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 512))(this) ) /*0x737ae8*/
            (*(void (__thiscall **)(int))(*(_DWORD *)this + 492))(this); /*0x737af6*/
        }
      }
      return FootClass::MissionDispatch((int *)this, a2, v4, a4); /*0x737af6*/
    case 36:
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 468))(this) ) /*0x737460*/
        return 0; /*0x73746d*/
      v7 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this + 76))(this, v29, 0); /*0x737481*/
      if ( (*((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], v7) + 80) & 0x100) != 0 /*0x7374a0*/
        && !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 188))(this, 0) )
      {
        return 10; /*0x7374ad*/
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 16 ) /*0x7374c6*/
        return 10; /*0x7374cb*/
      if ( *(_BYTE *)(this + 1048) ) /*0x7374d7*/
        return 10; /*0x7374e4*/
      return *(_BYTE *)(this + 1668) != 0xFF ? 10 : 1;
    default:
      return FootClass::MissionDispatch((int *)this, a2, v4, a4); /*0x737b11*/
  }
  return result; /*0x73746a*/
}


// ==== 0x00737BA0  TechnoClass::DispatchPlayerInput  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::DispatchPlayerInput(int this, InfantryClass *aP1, int a3)
{
  char v3; // bl
  __int16 v5; // cx
  int v6; // eax
  IUnknown *v7; // eax
  IUnknown *v9; // eax
  int v10; // [esp+Ch] [ebp-8h]

  v3 = a3; /*0x737ba8*/
  if ( !FootClass::DispatchInput((double *)this, aP1, a3) ) /*0x737bb1*/
    return 0; /*0x737c7f*/
  LOBYTE(v5) = 0; /*0x737bbe*/
  HIBYTE(v5) = v3; /*0x737bc4*/
  LOWORD(a3) = v5; /*0x737bc7*/
  FacingClass::Set_SyncLog((char *)(this + 928), &a3); /*0x737bd2*/
  if ( *(_BYTE *)(this + 978) && !*(_BYTE *)(this + 981) ) /*0x737be3*/
    *(_DWORD *)(this + 544) = 2; /*0x737beb*/
  v6 = *(_DWORD *)(this + 1732); /*0x737bf5*/
  if ( *(_BYTE *)(v6 + 3608) || *(_BYTE *)(v6 + 3609) ) /*0x737c03*/
  {
    *(_DWORD *)(this + 248) = Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)0x1D); /*0x737c4c*/
    v9 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x737c52*/
    *(_DWORD *)(this + 268) = 1; /*0x737c62*/
    *(_DWORD *)(this + 256) = v9; /*0x737c69*/
    *(_DWORD *)(this + 260) = v10; /*0x737c70*/
    *(_DWORD *)(this + 264) = 1; /*0x737c75*/
    return 1; /*0x737c73*/
  }
  else
  {
    *(_DWORD *)(this + 248) = 0; /*0x737c0b*/
    v7 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x737c11*/
    *(_DWORD *)(this + 268) = 0; /*0x737c1c*/
    *(_DWORD *)(this + 256) = v7; /*0x737c24*/
    *(_DWORD *)(this + 260) = v10; /*0x737c2a*/
    *(_DWORD *)(this + 264) = 0; /*0x737c2f*/
    return 1; /*0x737c2d*/
  }
}


// ==== 0x00737C90  UnitClass::OnUnderAttack  this=int  sig=csp ====
#375 *__userpurge UnitClass::OnUnderAttack@<eax>(
        int *a1@<ecx>,
        int a2@<ebp>,
        _DWORD *Member@<edi>,
        int *a4,
        int a5,
        int a6,
        _BYTE *a7,
        int a8,
        int a9,
        #375 *a10)
{
  int v11; // ebx
  _DWORD *v12; // eax
  #375 *result; // eax
  _BYTE *v14; // ebx
  int v15; // edi
  int *v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // edx
  void **v20; // eax
  void **v21; // eax
  int v22; // edx
  int v23; // ebp
  int v24; // edi
  int *v25; // eax
  int v26; // ebx
  void *v27; // eax
  int v28; // eax
  bool v29; // bl
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // edx
  char v35; // al
  int *v36; // eax
  _DWORD *Value; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // eax
  _DWORD *v44; // edi
  int v45; // edx
  _DWORD *v46; // ecx
  int v47; // eax
  int v48; // eax
  __int16 *v49; // eax
  int v50; // eax
  _DWORD *v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // edi
  int v55; // ebp
  int v56; // [esp+2Ah] [ebp-4Ch]
  char v58; // [esp+45h] [ebp-31h]
  int v59; // [esp+46h] [ebp-30h] BYREF
  int v60; // [esp+4Ah] [ebp-2Ch] BYREF
  int v61; // [esp+4Eh] [ebp-28h]
  int v62; // [esp+52h] [ebp-24h] BYREF
  int v63; // [esp+56h] [ebp-20h]
  int v64; // [esp+5Ah] [ebp-1Ch]
  int v65; // [esp+62h] [ebp-14h] BYREF
  _BYTE v66[4]; // [esp+6Ah] [ebp-Ch] BYREF
  int v67; // [esp+6Eh] [ebp-8h] BYREF

  if ( !*((_BYTE *)a1 + 131) || (v58 = 1, !(unsigned __int8)House::IsHumanPlayer((#375 *)a1[135])) ) /*0x737ca8*/
    v58 = 0; /*0x737cb6*/
  v11 = a8; /*0x737cbb*/
  if ( !(_BYTE)a8 ) /*0x737cc1*/
  {
    Member = (_DWORD *)Team::GetMember(a1, 0); /*0x737ccc*/
    if ( Member ) /*0x737cd0*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) == 6 ) /*0x737cdc*/
      {
        if ( *(_BYTE *)(Member[328] + 5821) ) /*0x737ce4*/
        {
          v59 = a1[39]; /*0x737cfa*/
          v60 = a1[40]; /*0x737d06*/
          v61 = a1[41]; /*0x737d12*/
          v12 = Coord::To_Cell(MEMORY[0x87F7E8], &v59); /*0x737d16*/
          if ( Cell::IsBridge(v12) == Member ) /*0x737d24*/
            return 0; /*0x737d2e*/
        }
      }
    }
  }
  v56 = v11; /*0x737d47*/
  v14 = a7; /*0x737d48*/
  result = (#375 *)FootClass::ProcessDeploy(a1, (int)Member, a4, a5, a6, (int)a7, v56, a9, a10); /*0x737d52*/
  a10 = result; /*0x737d5a*/
  if ( result != (#375 *)5 )
  {
    if ( result != (#375 *)4 ) /*0x737d6d*/
    {
      if ( result ) /*0x7384bb*/
      {
        if ( *(_BYTE *)(a1[433] + 3598) ) /*0x7384c3*/
        {
          if ( a1[135] == MEMORY[0x87F7E8][528729] ) /*0x7384da*/
          {
            v51 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, _DWORD))(*a1 + 76))(a1, v66, 0); /*0x7384e7*/
            LOWORD(a8) = *v51 / 256; /*0x7384fa*/
            HIWORD(a8) = v51[1] / 256; /*0x738513*/
            if ( CreateTriggerClassIfFarEnough(4, a8, a8) ) /*0x73851d*/
              VoxClass::FindAndPlay(g_Str_EVA_OreMinerUnderAttack, -1); /*0x738530*/
          }
        }
      }
      if ( !a1[373] /*0x738573*/
        && v14
        && !*((_BYTE *)a1 + 1048)
        && !Object::IsAlliedWithObjectHouse((_DWORD *)a1[135], (int)v14)
        && !(unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) )
      {
        if ( UnitClass::CanCrushTarget((int)a1, v14) ) /*0x738583*/
        {
          (*(void (__thiscall **)(int *, _BYTE *, int))(*a1 + 1152))(a1, v14, 1); /*0x738593*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*a1 + 488))(a1, 2, 0); /*0x7385a1*/
          return a10; /*0x7385b2*/
        }
        v52 = a1[433]; /*0x7385b5*/
        if ( (*(_BYTE *)(v52 + 3598) || *(_BYTE *)(v52 + 3599)) /*0x7385fd*/
          && (*(int (__thiscall **)(int *))(*a1 + 696))(a1) > 0
          && BuildingClass::GetHealthRatio(a1) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888) )
        {
          v53 = a1[433]; /*0x7385ff*/
          v54 = 0; /*0x738605*/
          if ( *(int *)(v53 + 1016) > 0 ) /*0x73860f*/
          {
            while ( 1 ) /*0x738629*/
            {
              v55 = (*(int (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a1 + 1328))( /*0x738629*/
                      a1,
                      *(_DWORD *)(*(_DWORD *)(v53 + 1004) + 4 * v54),
                      0,
                      0);
              if ( v55 ) /*0x73862d*/
                break; /*0x73862d*/
              v53 = a1[433]; /*0x73862f*/
              if ( ++v54 >= *(_DWORD *)(v53 + 1016) ) /*0x73863c*/
                return a10; /*0x73863c*/
            }
            if ( !Array::Contains(a1, v55) && (*(int (__thiscall **)(int *, int, int))(*a1 + 632))(a1, 2, v55) == 1 ) /*0x73865e*/
              (*(void (__thiscall **)(int *, int, _DWORD))(*a1 + 488))(a1, 7, 0); /*0x738668*/
          }
        }
      }
      return a10; /*0x738668*/
    }
    v15 = a1[185]; /*0x737d73*/
    if ( v15 )
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 44))(a1[185]) == 6 ? (int *)v15 : 0;
      BuildingClass::UpdateDamageAnim(v16); /*0x737d97*/
    }
    v17 = a1[433]; /*0x737d9c*/
    if ( *(int *)(v17 + 3616) <= 0 ) /*0x737daf*/
    {
      if ( !*(_BYTE *)(v17 + 3278) /*0x737e2a*/
        || *(_BYTE *)(v17 + 3433)
        || *(_BYTE *)(v17 + 3479)
        || *(double *)(v17 + 880) < *(double *)(MEMORY[0x87F7E8][7806] + 1584)
        || *(_DWORD *)((*(int (__thiscall **)(int *))(*a1 + 444))(a1) + 236) != 2
        || *((_BYTE *)a1 + 625) )
      {
        (*(void (__thiscall **)(int *, _BYTE *))(*a1 + 952))(a1, v14); /*0x737e68*/
        if ( (*(int (__thiscall **)(int *))(*a1 + 456))(a1) <= 10 /*0x737ec0*/
          && *((_BYTE *)a1 + 143)
          && (v15 = (int)(a1 + 39),
              v59 = a1[39],
              v60 = a1[40],
              v61 = a1[41],
              *((_DWORD *)Coord::To_Cell(MEMORY[0x87F7E8], &v59) + 59) == 2) )
        {
          v20 = (void **)__2_YAPAXI_Z(456); /*0x737ecb*/
          if ( v20 ) /*0x737ed5*/
          {
            v59 = *(_DWORD *)v15; /*0x737ee6*/
            v60 = a1[40]; /*0x737eef*/
            v61 = a1[41]; /*0x737efb*/
            AnimClass::ctor(v20, *(void **)(MEMORY[0x87F7E8][7806] + 148), &v59, 0, 1, (void *)0x600, 0, 0); /*0x737f0e*/
          }
          v21 = (void **)__2_YAPAXI_Z(456); /*0x737f18*/
          if ( v21 ) /*0x737f22*/
          {
            v22 = *(_DWORD *)v15; /*0x737f24*/
            v23 = a1[40]; /*0x737f26*/
            v24 = a1[41]; /*0x737f29*/
            v59 = v22; /*0x737f30*/
            v15 = v24 + 5; /*0x737f48*/
            v60 = v23; /*0x737f4b*/
            v61 = v15; /*0x737f4f*/
            AnimClass::ctor( /*0x737f66*/
              v21,
              *(void **)(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 3012) + 4 * *(_DWORD *)(MEMORY[0x87F7E8][7806] + 3024) - 4),
              &v59,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          TechnoClass::CreateDeathAnim((int)a1); /*0x737f6f*/
        }
      }
      else
      {
        (*(void (__thiscall **)(int *, _BYTE *))(*a1 + 952))(a1, v14); /*0x737e39*/
        v19 = *a1; /*0x737e3f*/
        a1[27] = 1; /*0x737e43*/
        *((_BYTE *)a1 + 144) = 1; /*0x737e4a*/
        *((_BYTE *)a1 + 973) = 1; /*0x737e51*/
        (*(void (__thiscall **)(int *))(v19 + 928))(a1); /*0x737e58*/
      }
    }
    else
    {
      if ( a1[438] == -1 ) /*0x737db8*/
      {
        v18 = *a1; /*0x737dba*/
        a1[438] = 0; /*0x737dbf*/
        (*(void (__thiscall **)(int *, _BYTE *))(v18 + 952))(a1, v14); /*0x737dc9*/
      }
      a1[27] = 1; /*0x737dcf*/
      *((_BYTE *)a1 + 144) = 1; /*0x737dd6*/
    }
    (*(void (__thiscall **)(int *, _DWORD))(*a1 + 292))(a1, 0); /*0x737f7a*/
    if ( *(_BYTE *)(a1[433] + 1508) ) /*0x737f86*/
      TechnoClass::MarkPassengersAsExited(a1); /*0x737f92*/
    if ( (*(int (__thiscall **)(int *))(*a1 + 456))(a1) > 208 ) /*0x737fa6*/
      TechnoClass::CleanupAll(a1, (int)v14); /*0x737fab*/
    if ( !*(_BYTE *)(a1[433] + 3477) && a1[70] ) /*0x737fc4*/
    {
      do /*0x7381ae*/
      {
        v25 = (int *)FootClass::PopAndProcess(a1); /*0x737fd4*/
        v15 = (int)v25; /*0x737fd9*/
        if ( !v25 ) /*0x737fdd*/
          break; /*0x737fdd*/
        v26 = *v25; /*0x737fe9*/
        v62 = a1[39]; /*0x737ff7*/
        v63 = a1[40]; /*0x738003*/
        v64 = a1[41]; /*0x73800a*/
        v27 = Coord::To_Cell(MEMORY[0x87F7E8], &v62); /*0x738013*/
        v28 = (*(int (__thiscall **)(int, void *, int, int, _DWORD, int, int))(v26 + 428))(v15, v27, -1, -1, 0, 1, a2); /*0x73801b*/
        v29 = !v28 || v28 == 2; /*0x73802e*/
        ++MEMORY[0x87F7E8][539633]; /*0x738036*/
        *(_BYTE *)(v15 + 140) = *((_BYTE *)a1 + 140); /*0x738041*/
        v30 = a1[39]; /*0x73804a*/
        v31 = a1[41]; /*0x73804d*/
        v61 = a1[40]; /*0x738050*/
        v32 = *a1; /*0x738054*/
        v60 = v30; /*0x738056*/
        v62 = v31; /*0x73805c*/
        v33 = (*(int (__thiscall **)(int *))(v32 + 444))(a1); /*0x738060*/
        v34 = *(_DWORD *)((*(int (__thiscall **)(int, int *))(*(_DWORD *)v33 + 72))(v33, &v65) + 8); /*0x738072*/
        v35 = *((_BYTE *)a1 + 140); /*0x738075*/
        v62 = v34; /*0x73807d*/
        if ( v35 ) /*0x738081*/
        {
          v36 = (int *)(*(int (__thiscall **)(int *, int *))(*a1 + 88))(a1, &v67); /*0x73808c*/
          v60 = *v36; /*0x738091*/
          v61 = v36[1]; /*0x738098*/
          v62 = v36[2]; /*0x73809f*/
        }
        if ( (_BYTE)a9 /*0x7380ec*/
          || *((_BYTE *)a1 + 143)
          || !v29
          || (Value = ProgressTimer::GetValue((_WORD *)a1 + 452, &a7),
              !(*(unsigned __int8 (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v15 + 216))(
                 v15,
                 &v60,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          a2 = a8; /*0x73818e*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 224))(v15); /*0x738191*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 248))(v15); /*0x73819b*/
        }
        else
        {
          *(_DWORD *)(v15 + 284) = 0; /*0x7380fa*/
          if ( *(_BYTE *)(a1[433] + 1508) && a1[135] != *(_DWORD *)(v15 + 540) ) /*0x738122*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v15 + 968))(v15, 0); /*0x73812a*/
          a2 = 0; /*0x738132*/
          (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v15 + 372))(v15, &dword_A8ED54[145573], 1); /*0x73813d*/
          if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(v15 + 540)) ) /*0x738149*/
          {
            v38 = a1[373]; /*0x738152*/
            if ( v38 ) /*0x73815a*/
              TeamClass::AddMember(v38, v15, 0); /*0x73815f*/
            else
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 488))(v15, 15, 0); /*0x73816e*/
          }
          if ( v58 ) /*0x73817a*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 332))(v15); /*0x738180*/
        }
        --MEMORY[0x87F7E8][539633]; /*0x7381a8*/
      }
      while ( a1[70] ); /*0x7381ae*/
    }
    if ( a1[206] != -1 ) /*0x7381c7*/
      goto LABEL_67; /*0x7381c7*/
    if ( (_BYTE)a9 ) /*0x7381cf*/
      goto LABEL_83; /*0x7381cf*/
    v39 = a1[433]; /*0x7381d5*/
    if ( !*(_BYTE *)(v39 + 3277) ) /*0x7381db*/
      goto LABEL_83; /*0x7381db*/
    if ( *(_DWORD *)(v39 + 1504) ) /*0x7381e9*/
      goto LABEL_83; /*0x7381e9*/
    a8 = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2147483646); /*0x738214*/
    if ( (double)a8 * 4.656612877414201e-10 >= *(double *)(MEMORY[0x87F7E8][7806] + 1472) ) /*0x73822d*/
      goto LABEL_83; /*0x73822d*/
    if ( a1[206] == -1 ) /*0x738239*/
    {
      v42 = (*(int (__thiscall **)(int *))(*a1 + 780))(a1); /*0x738273*/
      if ( !v42 ) /*0x738277*/
        goto LABEL_83; /*0x738277*/
      v43 = __2_YAPAXI_Z(1776); /*0x738282*/
      if ( !v43 ) /*0x73828c*/
        goto LABEL_83; /*0x73828c*/
      v41 = InfantryClass::Construct(v43, v42, v42, (#37 *)a1[135]); /*0x73829c*/
    }
    else
    {
LABEL_67:
      v40 = __2_YAPAXI_Z(1776); /*0x738240*/
      if ( !v40 ) /*0x73824a*/
        goto LABEL_83; /*0x73824a*/
      v41 = InfantryClass::Construct(v40, v15, *(_DWORD *)(MEMORY[0x87F7E8][539353] + 4 * a1[206]), (#37 *)a1[135]); /*0x738267*/
    }
    v44 = (_DWORD *)v41; /*0x7382a1*/
    if ( v41 ) /*0x7382a5*/
    {
      *(_BYTE *)(v41 + 140) = *((_BYTE *)a1 + 140); /*0x7382b7*/
      v62 = a1[39]; /*0x7382c1*/
      v63 = a1[40]; /*0x7382ca*/
      v45 = *(_DWORD *)v41; /*0x7382ce*/
      v64 = a1[41]; /*0x7382d3*/
      if ( (*(unsigned __int8 (__thiscall **)(int, int *, _DWORD, int))(v45 + 216))(v41, &v62, 0, a2) ) /*0x7382dc*/
      {
        v44[27] = Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 5, *(_DWORD *)(v44[432] + 160) / 2); /*0x73830f*/
        (*(void (__thiscall **)(_DWORD *, int *, int, _DWORD))(*v44 + 372))(v44, &dword_A8ED54[145573], 1, 0); /*0x73831f*/
        if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)a1[135]) ) /*0x73832b*/
          (*(void (__thiscall **)(_DWORD *, int))(*v44 + 488))(v44, 5); /*0x73834c*/
        else
          (*(void (__thiscall **)(_DWORD *, int))(*v44 + 488))(v44, 15); /*0x73833c*/
        if ( v58 ) /*0x738358*/
          (*(void (__thiscall **)(_DWORD *))(*v44 + 332))(v44); /*0x73835e*/
        v46 = (_DWORD *)a1[13]; /*0x738364*/
        if ( v46 && TechnoClass::HasAnyMission(v46) ) /*0x73836b*/
          ObjectClass::SetReference(v44, a1[13]); /*0x73837a*/
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, int))(*v44 + 32))(v44, 1); /*0x738387*/
      }
    }
LABEL_83:
    v47 = a1[433]; /*0x73838a*/
    if ( *(_BYTE *)(v47 + 3610) /*0x7383c6*/
      && (*(_BYTE *)(MEMORY[0x87F7E8][536210] + 13489) && !*(_BYTE *)(v47 + 3220)
       || *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13477) && *(_BYTE *)(v47 + 3220)) )
    {
      v48 = *a1; /*0x7383f5*/
      a8 = 0; /*0x7383fa*/
      v49 = (__int16 *)(*(int (__thiscall **)(int *, _BYTE **))(v48 + 440))(a1, &a7); /*0x73840a*/
      v50 = *LayerClass::Pathfinding_Find( /*0x738423*/
               MEMORY[0x87F7E8],
               (int)&a9,
               &a9,
               v49,
               1,
               -1,
               0,
               0,
               1,
               1,
               1,
               0,
               0,
               1,
               (__int16 *)&a8,
               0,
               0);
      a8 = v50; /*0x73842c*/
      if ( v50 != dword_A8ED54[145561] ) /*0x738430*/
      {
        if ( BYTE1(MEMORY[0x87F7E8][536222]) ) /*0x738448*/
          BuildingClass::SearchPlacement(MEMORY[0x87F7E8], v50, 20); /*0x738452*/
      }
    }
    if ( *(_BYTE *)(a1[433] + 3477) ) /*0x73845d*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*a1 + 988))(a1, 0) ) /*0x73846d*/
      {
LABEL_93:
        (*(void (__thiscall **)(int *))(*a1 + 248))(a1); /*0x73847b*/
        return a10; /*0x738490*/
      }
    }
    else if ( !*((_BYTE *)a1 + 973) ) /*0x738493*/
    {
      goto LABEL_93; /*0x73849b*/
    }
    return a10; /*0x73866e*/
  }
  return result; /*0x737d26*/
}


// ==== 0x00738680  TechnoClass::CreateDeathAnim  this=ObjectClass  sig=csp ====
AnimClass *__thiscall TechnoClass::CreateDeathAnim(int this)
{
  unsigned int v2; // eax
  AnimClass *v3; // ecx
  CoordStruct *v4; // edi
  AnimClass *v5; // eax
  void **v6; // eax
  int v7; // edi
  int v8; // ebx
  double v9; // st7
  AnimClass *result; // eax
  CoordStruct *v14; // edi
  int v12; // esi
  int i; // [esp+8h] [ebp-10h]
  ObjectClass *v17; // [esp+Ch] [ebp-Ch] BYREF
  int aP2_4; // [esp+10h] [ebp-8h]
  int aP2_8; // [esp+14h] [ebp-4h]

  if ( *(int *)(*(_DWORD *)(this + 1732) + 1852) > 0 ) /*0x738695*/
  {
    v2 = Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)); /*0x7386a7*/
    v3 = *(AnimClass **)(this + 1732); /*0x7386ac*/
    v4 = *(CoordStruct **)(*(_DWORD *)&v3->__pad_6A8[136] + 4 * (v2 % *(_DWORD *)&v3->__pad_6A8[148])); /*0x7386c0*/
    if ( v3->__pad_CD2[67] || TechnoClass::HasVoiceResponse((TechnoClass *)this, 10) ) /*0x7386d1*/
    {
      v5 = *(AnimClass **)(this + 1732); /*0x7386da*/
      if ( *(_DWORD *)&v5->__pad_41C[616] == -1 || *(int *)(this + 764) > 0 ) /*0x7386f1*/
        v4 = *(CoordStruct **)(*(_DWORD *)&v5->__pad_6A8[136] + 4 * *(_DWORD *)&v5->__pad_6A8[148] - 4); /*0x7386ff*/
    }
    v6 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x738708*/
    if ( v6 ) /*0x738712*/
    {
      v17 = *(ObjectClass **)(this + 156); /*0x738727*/
      aP2_4 = *(_DWORD *)(this + 160); /*0x738730*/
      aP2_8 = *(_DWORD *)(this + 164); /*0x73873c*/
      AnimClass::ctor(v6, v4, (CoordStruct *)&v17, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x738743*/
    }
    if ( Float4::Sum((float *)(this + 828)) > 0.0 ) /*0x738761*/
    {
      if ( *(_BYTE *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6117) ) /*0x738768*/
      {
        if ( (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x800) == 0 ) /*0x73877d*/
        {
          v7 = 0; /*0x738784*/
          for ( i = 0; v7 < *(int *)&stru_B05488.__pad_579C[18644]; ++v7 ) /*0x738790*/
          {
            v8 = *(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * v7; /*0x73879c*/
            v9 = FloatArray::Get((float *)(this + 828), (BuildingClass *)v7); /*0x73879f*/
            i = Math::RoundToInt(v9 * (double)*(int *)(*(_DWORD *)v8 + 188) + (double)i); /*0x7387b5*/
          }
        }
      }
    }
    if ( *(_DWORD *)(*(_DWORD *)(this + 1732) + 160) > *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1480) ) /*0x7387df*/
      nullsub_51(); /*0x7387fc*/
  }
  result = *(AnimClass **)(this + 1732); /*0x738801*/
  if ( *(int *)&result->__pad_6A8[176] > 0 ) /*0x73880f*/
  {
    v14 = *(CoordStruct **)(*(_DWORD *)(*(_DWORD *)(this + 1732) + 1868) /*0x73883b*/
                          + 4
                          * ((unsigned int)Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))
                           % *(_DWORD *)(*(_DWORD *)(this + 1732) + 1880)));
    result = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x73883e*/
    if ( result ) /*0x738848*/
    {
      v12 = this + 156; /*0x73884a*/
      v17 = *(ObjectClass **)v12; /*0x73885d*/
      aP2_4 = *(_DWORD *)(v12 + 4); /*0x738866*/
      aP2_8 = *(_DWORD *)(v12 + 8); /*0x738872*/
      return AnimClass::ctor((void **)result, v14, (CoordStruct *)&v17, 0, (CoordStruct *)1, (void *)0x600, 0, 0); /*0x738879*/
    }
  }
  return result; /*0x73887e*/
}


// ==== 0x00738890  TechnoClass::ValidateMoveType  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ValidateMoveType(int *this, int arg0, int *a2, int a4)
{
  int v5; // eax
  int v6; // ecx

  v5 = (*(int (__thiscall **)(int *, int *, int))(*this + 116))(this, a2, a4); /*0x7388a1*/
  v6 = arg0; /*0x7388a4*/
  if ( arg0 != v5 ) /*0x7388aa*/
  {
    v6 = v5; /*0x7388af*/
    if ( v5 == 3 ) /*0x7388b1*/
    {
      v6 = 1; /*0x7388bf*/
      goto LABEL_10; /*0x7388c4*/
    }
    if ( v5 == 9 || v5 == 16 ) /*0x7388bb*/
      goto LABEL_9; /*0x7388bb*/
  }
  if ( v6 == 27 || v6 == 29 ) /*0x7388ce*/
LABEL_9:
    v6 = 5; /*0x7388d0*/
LABEL_10:
  if ( a2 == this && (v6 == 2 || v6 == 5) ) /*0x7388e1*/
    return 0; /*0x7388e5*/
  if ( *((_BYTE *)this + 664) ) /*0x7388eb*/
    return 0; /*0x7388f7*/
  return FootClass::ValidateMove(this, (FootClass *)v6, a2, a4); /*0x7388e3*/
}


// ==== 0x00738910  TechnoClass::SpawnInfantryFromBuilding  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::SpawnInfantryFromBuilding(
        _BYTE *this,
        FootClass *aP1,
        FootClass *aP2,
        FootClass *aP3,
        FootClass *aP4)
{
  if ( this->q6E0 /*0x738933*/
    && (*(int (__thiscall **)(_BYTE *, FootClass *, _DWORD, FootClass *))(this->estimatedHealth)(this, aP2, 0, aP4) == 2 )
  {
    return 0; /*0x738937*/
  }
  if ( *(this + 664) ) /*0x73893d*/
    return 0; /*0x738949*/
  return ObjectClass::SpawnInfantry(this, aP1, aP2, aP3, aP4); /*0x738935*/
}


// ==== 0x00738970  FootClass::RespondToDestruction  this=int  sig=csp ====
char __thiscall FootClass::RespondToDestruction(int this, InfantryClass *aP1, int a3)
{
  char v4; // bl
  char v6; // al
  _DWORD *v7; // edx
  __int16 *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  _DWORD *Member; // edi
  _DWORD *v15; // eax
  int v16; // eax
  _DWORD v18[3]; // [esp+10h] [ebp-Ch] BYREF

  v4 = (char)aP1; /*0x738978*/
  v6 = FootClass::ValidatePlacement((_DWORD **)this, aP1, a3); /*0x738983*/
  v7 = *(_DWORD **)this; /*0x738988*/
  LOBYTE(a3) = v6; /*0x73898c*/
  if ( ((unsigned __int8 (__thiscall *)(int))v7[299])(this) /*0x7389ab*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 28 )
  {
    return a3; /*0x7389ab*/
  }
  if ( *(_DWORD *)(this + 684) ) /*0x7389b1*/
    TechnoClass::EjectPassengers((int *)this, 1); /*0x7389bf*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 2 && !*(_DWORD *)(this + 1444) ) /*0x7389d3*/
  {
    v8 = (__int16 *)(*(int (__thiscall **)(int, InfantryClass **))(*(_DWORD *)this + 440))(this, &aP1); /*0x7389e6*/
    v9 = (*v8 << 8) + 128; /*0x738a01*/
    v10 = (v8[1] << 8) + 128; /*0x738a0d*/
    if ( *(_DWORD *)(this + 156) == v9 && *(_DWORD *)(this + 160) == v10 && !*(_DWORD *)(this + 164) ) /*0x738a14*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 628))(this, 3); /*0x738a27*/
  }
  InfantryClass::ProcessExitQueue((int *)this); /*0x738a2f*/
  if ( *(_DWORD *)(this + 1444) )
  {
    v11 = 2; /*0x738a3e*/
  }
  else
  {
    v12 = *(_DWORD *)(this + 1732); /*0x738a48*/
    if ( *(_BYTE *)(v12 + 3598) || *(_BYTE *)(v12 + 3599) )
    {
      if ( Team::AllMembersValid((int *)this) ) /*0x738bda*/
        return a3; /*0x738bda*/
      v11 = 10; /*0x738bf1*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 10 || *(_DWORD *)(this + 180) == 10 ) /*0x738c04*/
        return a3; /*0x738c04*/
      if ( !v4 )
      {
        if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) )
        {
          v18[0] = *(_DWORD *)(this + 156); /*0x738c29*/
          v18[1] = *(_DWORD *)(this + 160); /*0x738c3a*/
          v18[2] = *(_DWORD *)(this + 164); /*0x738c41*/
          if ( *((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v18) + 59) != (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3598) != 0
                                                                                                  ? 5
                                                                                                  : 11) )
            v11 = 5; /*0x738c6a*/
        }
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x738c75*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x738c83*/
    }
    else if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) ) /*0x738a6e*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 5 /*0x738b5c*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 11
        || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) != -1
        && (MissionClass::GetMissionControl((_DWORD *)this)[7] || MissionClass::GetMissionControl((_DWORD *)this)[5]) )
      {
        return a3; /*0x738b61*/
      }
      if ( *(_DWORD *)(*(_DWORD *)(this + 540) + 588) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5184) /*0x738c8e*/
        && !TechnoClass::HasVoiceResponse((TechnoClass *)this, 16)
        && !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3385)
        || *(_DWORD *)(this + 1492)
        || *(_DWORD *)(this + 732)
        || *(_DWORD *)(this + 728)
        || (v11 = 11, *(_DWORD *)(this + 740)) )
      {
        v11 = 5; /*0x738c98*/
      }
    }
    else if ( *(_BYTE *)(this + 980) /*0x738aa0*/
           && *(int *)(*(_DWORD *)(this + 1732) + 1504) > 0
           && *(_DWORD *)(this + 280)
           && !*(_DWORD *)(this + 1492) )
    {
      v11 = 16; /*0x738aaa*/
    }
    else
    {
      if ( *(_BYTE *)(this + 1676) ) /*0x738ab4*/
        return a3; /*0x738ab4*/
      v13 = *(_DWORD *)(this + 172); /*0x738ac2*/
      if ( v13 == 16 ) /*0x738acb*/
      {
        if ( *(_DWORD *)(*(_DWORD *)(this + 1732) + 1028) ) /*0x738ad3*/
          return a3; /*0x738ad3*/
      }
      if ( v13 == 11 ) /*0x738ae4*/
        return a3; /*0x738ae4*/
      v11 = 5; /*0x738af0*/
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0); /*0x738af5*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this + 1152))(this, 0, 1); /*0x738b03*/
    }
  }
  Member = (_DWORD *)Team::GetMember((_DWORD *)this, 0); /*0x738ca6*/
  if ( *(_DWORD *)(this + 172) != 7
    || !Member
    || (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) != 6
    || !*(_BYTE *)(*((*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) == 6 ? Member + 328 : (_DWORD *)1312)
                 + 5803)
    || (v15 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 444))(this), Cell::IsBridge(v15) == Member) )
  {
    v16 = *(_DWORD *)(this + 172); /*0x738cfa*/
    if ( v16 != 25 && v16 != 11 && v16 != 16 && v16 != 9 ) /*0x738d12*/
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 488))(this, v11, 0); /*0x738d1b*/
  }
  return a3; /*0x738d25*/
}


// ==== 0x00738D30  UnitClass::DeployToBuilding  this=TechnoClass  sig=csp ====
char __thiscall UnitClass_DeployToBuilding(_DWORD *this)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  int *v7; // eax
  int v8; // edx
  _DWORD *BuildableFromArray; // eax
  int v10; // edi
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // eax
  int v14; // edi
  int v15; // eax
  int FoundationHeight; // eax
  int v17; // edi
  void *v18; // eax
  int *v19; // edi
  _WORD *v20; // eax
  __int16 v21; // cx
  int v22; // ecx
  int v23; // edi
  void *v24; // eax
  int v25; // [esp-1Ch] [ebp-50h]
  int v26; // [esp+14h] [ebp-20h] BYREF
  int v27; // [esp+18h] [ebp-1Ch] BYREF
  int v28; // [esp+1Ch] [ebp-18h] BYREF
  int v29; // [esp+20h] [ebp-14h] BYREF
  _BYTE v30[4]; // [esp+24h] [ebp-10h] BYREF
  _BYTE v31[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(this->q6C4 + 1028) ) /*0x738d41*/
    return 1; /*0x738d52*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 292))(this, 0); /*0x738d58*/
  v3 = 0; /*0x738d64*/
  v4 = MEMORY[0x8871E0]->CanDetonateTimeBomb[1]; /*0x738d66*/
  if ( v4 <= 0 ) /*0x738d6e*/
    goto LABEL_7; /*0x738d6e*/
  v5 = (_DWORD *)MEMORY[0x8871E0]->IvanWarhead[2]; /*0x738d76*/
  while ( *v5 != *(_DWORD *)(this->q6C4 + 1028) ) /*0x738d84*/
  {
    ++v3; /*0x738d8a*/
    ++v5; /*0x738d8b*/
    if ( v3 >= v4 ) /*0x738d90*/
      goto LABEL_7; /*0x738d90*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 60))(this) + 497) ) /*0x738e33*/
  {
    if ( !*(this + 361) ) /*0x738e3f*/
    {
      v27 = 0; /*0x738e51*/
      BuildableFromArray = (_DWORD *)HouseClass::FirstBuildableFromArray(&MEMORY[0x8871E0]->NukeProjectile[2]); /*0x738e68*/
      v10 = BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 1; /*0x738e8a*/
      v11 = HouseClass::FirstBuildableFromArray(&MEMORY[0x8871E0]->NukeProjectile[2]); /*0x738e8b*/
      v25 = BuildingTypeClass::GetFoundationHeight(v11, 0) + 1; /*0x738ea6*/
      v12 = ((__int64 (__thiscall *)(_DWORD *, int *))*(_DWORD *)(*this + 440))(this, &v29); /*0x738eb7*/
      v26 = *LayerClass::Pathfinding_Find( /*0x738ee0*/
               &MEMORY[0x87F7E8],
               SHIDWORD(v12),
               &v28,
               (__int16 *)v12,
               5,
               -1,
               0,
               0,
               v10,
               v25,
               0,
               0,
               0,
               1,
               (__int16 *)&v27,
               0,
               0);
      v27 = 0; /*0x738ee4*/
      v13 = (_DWORD *)HouseClass::FirstBuildableFromArray(&MEMORY[0x8871E0]->IvanWarhead[1]); /*0x738eee*/
      v14 = BuildingTypeClass::GetFoundationWidth(v13) + 1; /*0x738f10*/
      v15 = HouseClass::FirstBuildableFromArray(&MEMORY[0x8871E0]->IvanWarhead[1]); /*0x738f11*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(v15, 0); /*0x738f18*/
      v26 = *LayerClass::Pathfinding_Find( /*0x738f4e*/
               &MEMORY[0x87F7E8],
               (int)&v27,
               &v29,
               (__int16 *)&v26,
               1,
               -1,
               0,
               0,
               v14,
               FoundationHeight + 1,
               0,
               0,
               0,
               1,
               (__int16 *)&v27,
               0,
               0);
      if ( v26 != dword_B1CFB8 ) /*0x738f52*/
      {
        v17 = *this; /*0x738f62*/
        v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x738f70*/
        (*(void (__thiscall **)(_DWORD *, void *, int))(v17 + 1152))(this, v18, 1); /*0x738f78*/
      }
      *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 60))(this) + 497) = 0; /*0x738f85*/
    }
  }
  else
  {
LABEL_7:
    if ( !*(this + 361) ) /*0x738d92*/
    {
      v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 72))(this, v31); /*0x738da7*/
      LOWORD(v27) = *v6 / 256; /*0x738dbf*/
      HIWORD(v27) = v6[1] / 256; /*0x738dd7*/
      v26 = v27; /*0x738de4*/
      v7 = CellStruct::Add(&v26, &v29, &MEMORY[0x89F6A4]); /*0x738de9*/
      v8 = this->q6C4; /*0x738df0*/
      v28 = *v7; /*0x738df6*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v8 + 1028) + 168))( /*0x738e08*/
             *(_DWORD *)(v8 + 1028),
             &v28,
             0) )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 1); /*0x738e1c*/
        return 1; /*0x738e2b*/
      }
      if ( !*(this + 361) ) /*0x738f90*/
      {
        if ( (unk_B1CF9D & 1) == 0 ) /*0x738fa3*/
        {
          unk_B1D010 = -65536; /*0x738fbf*/
          unk_B1CF9D |= 1u; /*0x738fca*/
          unk_B1D014 = -131072; /*0x738fde*/
          unk_B1D018 = -131071; /*0x738ffc*/
          unk_B1D01C = -65537; /*0x73900f*/
          unk_B1D020 = -196608; /*0x739022*/
          unk_B1D024 = -196607; /*0x739035*/
          unk_B1D028 = -131073; /*0x739048*/
          unk_B1D02C = -196606; /*0x739065*/
          unk_B1D030 = -131074; /*0x73907b*/
          unk_B1D034 = -262144; /*0x739091*/
          unk_B1D038 = -262143; /*0x7390a7*/
          unk_B1D03C = -196609; /*0x7390bd*/
          unk_B1D040 = -262142; /*0x7390d3*/
          unk_B1D044 = -196610; /*0x7390e9*/
          unk_B1D048 = 0x10000; /*0x7390fd*/
          unk_B1D04C = 0x20000; /*0x739111*/
          unk_B1D050 = 131073; /*0x739125*/
          unk_B1D054 = 196607; /*0x739139*/
          unk_B1D058 = 196608; /*0x73914a*/
          unk_B1D05C = 196609; /*0x739160*/
          unk_B1D060 = 0x3FFFF; /*0x739176*/
          unk_B1D064 = 196610; /*0x73918c*/
          unk_B1D068 = 262142; /*0x7391a2*/
          unk_B1D06C = 0x40000; /*0x7391b8*/
          unk_B1D070 = 262145; /*0x7391ce*/
          unk_B1D074 = 327679; /*0x7391e4*/
          unk_B1D078 = 262146; /*0x7391fa*/
          unk_B1D07C = 327678; /*0x739210*/
          unk_B1D084 = 65534; /*0x739239*/
          unk_B1D088 = 65533; /*0x73924f*/
          unk_B1D08C = 65532; /*0x73927a*/
          unk_B1D090 = 1; /*0x739290*/
          v27 = 4; /*0x739296*/
          unk_B1D080 = 0xFFFF; /*0x7392ab*/
          unk_B1D094 = 2; /*0x7392b1*/
          unk_B1D098 = 3; /*0x7392b6*/
          unk_B1D09C = 4; /*0x7392bc*/
          atexit(nullsub_248); /*0x7392c2*/
        }
        v19 = &unk_B1D010; /*0x7392ca*/
        while ( 1 ) /*0x7392d8*/
        {
          v20 = (_WORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 440))(this, v30); /*0x7392d8*/
          v21 = v20[1] + *((_WORD *)v19 + 1); /*0x7392e8*/
          LOWORD(v27) = *v20 + *(_WORD *)v19; /*0x7392ed*/
          HIWORD(v27) = v21; /*0x7392f8*/
          v29 = v27; /*0x739308*/
          LOWORD(v26) = MEMORY[0x89F6A4] + v27; /*0x73930e*/
          HIWORD(v26) = HIWORD(MEMORY[0x89F6A4]) + v21; /*0x739313*/
          v22 = this->q6C4; /*0x73931c*/
          v28 = v26; /*0x739322*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v22 + 1028) + 168))( /*0x739333*/
                 *(_DWORD *)(v22 + 1028),
                 &v28,
                 0) )
          {
            break; /*0x739333*/
          }
          if ( (int)++v19 >= (int)&unk_B1D0A0 ) /*0x739346*/
            goto LABEL_23; /*0x739346*/
        }
        v23 = *this; /*0x73934a*/
        v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v29); /*0x739358*/
        (*(void (__thiscall **)(_DWORD *, void *, int))(v23 + 1152))(this, v24, 1); /*0x739360*/
      }
    }
  }
LABEL_23:
  (*(void (__thiscall **)(_DWORD *, int))(*this + 292))(this, 1); /*0x739366*/
  if ( !*(this + 361) && !(unsigned __int8)House::IsCurrentPlayer((#375 *)this->Owner) ) /*0x739380*/
    (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD))(*this + 372))(this, &unk_B1CFE8, 0, 0); /*0x739394*/
  return 0; /*0x738d49*/
}


// ==== 0x007393B0  nullsub_248  this=-  sig=ida-proto ====
void __cdecl nullsub_248()
{
  ; /*0x7393b0*/
}


// ==== 0x007393C0  TechnoClass::Deploy  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass_Deploy(int *this)
{
  int v2; // edi
  int *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  int v8; // ebx
  int v9; // eax
  __int16 v10; // dx
  void *v11; // eax
  int v12; // eax
  int *v13; // ebx
  int v14; // eax
  int *v15; // esi
  int v16; // ecx
  #375 *v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // ecx
  int v23; // esi
  double HealthRatio; // st7
  __int64 v25; // rax
  int v26; // ecx
  char v27; // al
  int v28; // edx
  int v29; // eax
  char v30; // [esp+54h] [ebp-16h]
  char v31; // [esp+55h] [ebp-15h]
  int v32; // [esp+56h] [ebp-14h] BYREF
  int v33; // [esp+5Ah] [ebp-10h] BYREF
  int v34; // [esp+5Eh] [ebp-Ch] BYREF
  int v35; // [esp+62h] [ebp-8h]
  int v36; // [esp+66h] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 788))(this) ) /*0x7393d4*/
  {
LABEL_74:
    *((_BYTE *)this + 1676) = 0; /*0x739aa7*/
    return 0; /*0x739ab1*/
  }
  v2 = 0; /*0x7393e0*/
  if ( *(this + 361) ) /*0x7393da*/
    return 0; /*0x7393da*/
  if ( !*(this + 413) ) /*0x7393ea*/
    WinAPI::Wrapper(-2147467261); /*0x7393f7*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) /*0x739416*/
    || !*(_DWORD *)(*(this + 433) + 1028) )
  {
    return 0; /*0x73941c*/
  }
  (*(void (__thiscall **)(int *, _DWORD))(*this + 292))(this, 0); /*0x739428*/
  if ( !*(this + 413) ) /*0x73942e*/
    WinAPI::Wrapper(-2147467261); /*0x73943b*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 413) + 156))(*(this + 413), 0); /*0x73944a*/
  v3 = (int *)(*(int (__thiscall **)(int *, int *))(*this + 440))(this, &v33); /*0x73945a*/
  v4 = *(this + 433); /*0x739460*/
  v5 = *v3; /*0x739466*/
  v33 = *v3; /*0x739468*/
  if ( BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v4 + 1028)) > 2 /*0x739491*/
    || BuildingTypeClass::GetFoundationHeight(*(_DWORD *)(*(this + 433) + 1028), 0) > 2 )
  {
    LOWORD(v32) = MEMORY[0x89F6A4] + v5; /*0x7394ac*/
    HIWORD(v32) = HIWORD(MEMORY[0x89F6A4]) + HIWORD(v33); /*0x7394b1*/
  }
  else
  {
    v32 = v5; /*0x739493*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(*(this + 433) + 1028) + 168))( /*0x7394d2*/
          *(_DWORD *)(*(this + 433) + 1028),
          &v32,
          0) )
  {
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)*(this + 135)) && !*(_BYTE *)(*(this + 433) + 1516) ) /*0x7394f5*/
      VoxClass::FindAndPlay(g_Str_EVA_CannotDeployHere, -1); /*0x73950a*/
    if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) ) /*0x739515*/
      BuildingClass::ApplyFoundationDamage(&v32, (#375 *)*(this + 135)); /*0x739536*/
    if ( !*(this + 413) ) /*0x73953b*/
      WinAPI::Wrapper(-2147467261); /*0x739548*/
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*(this + 413) + 156))(*(this + 413), 1); /*0x739558*/
    (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1); /*0x739565*/
    v6 = *this; /*0x73956b*/
    *((_BYTE *)this + 1676) = 0; /*0x739573*/
    (*(void (__thiscall **)(int *, int, _DWORD))(v6 + 488))(this, 5, 0); /*0x73957a*/
    return 0; /*0x739589*/
  }
  if ( !*(this + 413) ) /*0x73958a*/
    WinAPI::Wrapper(-2147467261); /*0x739597*/
  (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*(this + 413) + 156))(*(this + 413), 1); /*0x7395a7*/
  (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1); /*0x7395b4*/
  v8 = BuildingClass::processPowerState(*(_DWORD *)(*(this + 433) + 1028)); /*0x7395cf*/
  if ( (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, &v33) >> 7) + 1) >> 1) != v8 ) /*0x7395ed*/
  {
    if ( !*(this + 413) ) /*0x7395ef*/
      WinAPI::Wrapper(-2147467261); /*0x7395fc*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 128))(*(this + 413)) ) /*0x73960a*/
    {
      v9 = *(this + 413); /*0x739614*/
      LOBYTE(v10) = 0; /*0x73961a*/
      HIBYTE(v10) = v8; /*0x73961c*/
      LOWORD(v33) = v10; /*0x739620*/
      if ( !v9 ) /*0x739625*/
        WinAPI::Wrapper(-2147467261); /*0x73962c*/
      (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*(this + 413) + 76))(*(this + 413), v33); /*0x73963f*/
    }
    (*(void (__thiscall **)(int *, int))(*this + 628))(this, 3); /*0x739649*/
    *((_BYTE *)this + 1676) = 1; /*0x739650*/
    return 1; /*0x73965f*/
  }
  v30 = *((_BYTE *)this + 131); /*0x739669*/
  (*(void (__thiscall **)(int *, _DWORD))(*this + 292))(this, 0); /*0x739670*/
  if ( !*(this + 413) ) /*0x739676*/
    WinAPI::Wrapper(-2147467261); /*0x739683*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 413) + 156))(*(this + 413), 0); /*0x739692*/
  v11 = __2_YAPAXI_Z(0x720u); /*0x73969d*/
  if ( !v11 /*0x7396cc*/
    || (v12 = BuildingClass::Construct((int)v11, *(_DWORD *)(*(this + 433) + 1028), *(this + 135)),
        (v13 = (int *)v12) == 0) )
  {
LABEL_71:
    if ( !*(this + 413) ) /*0x739a77*/
      WinAPI::Wrapper(-2147467261); /*0x739a84*/
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*(this + 413) + 156))(*(this + 413), 1); /*0x739a94*/
    (*(void (__thiscall **)(int *, int))(*this + 292))(this, 1); /*0x739aa1*/
    goto LABEL_74; /*0x739aa1*/
  }
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 18, 0); /*0x7396d9*/
  v14 = *v13; /*0x7396e9*/
  v36 = 0; /*0x7396f5*/
  v34 = ((__int16)v32 << 8) + 128; /*0x7396f9*/
  v35 = (SHIWORD(v32) << 8) + 128; /*0x73970d*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, int *, _DWORD))(v14 + 216))(v13, &v34, 0) ) /*0x739719*/
  {
    (*(void (__thiscall **)(int *, int))(*v13 + 32))(v13, 1); /*0x739a74*/
    goto LABEL_71; /*0x739a74*/
  }
  (*(void (__thiscall **)(int *, int))(*this + 628))(this, 3); /*0x739726*/
  if ( MEMORY[0xA8EC88] > 0 ) /*0x739733*/
  {
    do /*0x7397c0*/
    {
      v15 = (int *)*((_DWORD *)MEMORY[0xA8EC7C] + v2); /*0x73973e*/
      v16 = v15[173]; /*0x739741*/
      if ( v16 /*0x73976d*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 44))(v16) == 1
        && (int *)v15[173] == this
        && *((_BYTE *)v15 + 144)
        && v15 != this
        && v15 != v13 )
      {
        if ( *(_BYTE *)(v13[328] + 5817) /*0x739795*/
          && (*(int (__thiscall **)(int *))(*v15 + 44))(v15) == 15
          && *(_BYTE *)((*(int (__thiscall **)(int *))(*v15 + 132))(v15) + 3782) )
        {
          (*(void (__thiscall **)(int *, _DWORD))(*v15 + 968))(v15, 0); /*0x7397a5*/
        }
        else
        {
          (*(void (__thiscall **)(int *, int *))(*v15 + 968))(v15, v13); /*0x7397b2*/
        }
      }
      ++v2; /*0x7397bd*/
    }
    while ( v2 < MEMORY[0xA8EC88] ); /*0x7397c0*/
  }
  v13[133] = *(this + 133); /*0x7397cc*/
  v17 = (#375 *)v13[135]; /*0x7397d8*/
  v13[84] = this->q054; /*0x7397de*/
  if ( !(unsigned __int8)House::IsHumanPlayer(v17) ) /*0x7397e4*/
  {
    *((_BYTE *)v13 + 1738) = 1; /*0x7397ed*/
    *((_BYTE *)v13 + 1739) = 1; /*0x7397f4*/
  }
  v18 = v13[328]; /*0x7397fb*/
  if ( *(_BYTE *)(v18 + 5834) || *(_BYTE *)(v18 + 5828) ) /*0x73980b*/
  {
    LOWORD(v33) = 0x4000; /*0x739820*/
    FacingClass::Set_SyncLog(&v33); /*0x739827*/
  }
  (*(void (__thiscall **)(int *, _DWORD))(*v13 + 968))(v13, *(this + 173)); /*0x739837*/
  (*(void (__thiscall **)(int *, _DWORD))(*v13 + 408))(v13, *(this + 135)); /*0x739848*/
  *((_BYTE *)v13 + 1757) = 1; /*0x73984e*/
  if ( !(unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) /*0x739883*/
    && *(_BYTE *)(v13[328] + 5817)
    && MEMORY[0xA8B238] )
  {
    v19 = v13[39]; /*0x73988f*/
    v20 = v13[40]; /*0x739895*/
    v36 = v13[41]; /*0x73989b*/
    LOWORD(v33) = v19 / 256; /*0x7398ab*/
    v21 = v20; /*0x7398b2*/
    v22 = (_DWORD *)*(this + 135); /*0x7398b9*/
    HIWORD(v33) = v21 / 256; /*0x7398c4*/
    v23 = v33; /*0x7398c9*/
    HouseClass::SetMapSeed(v22, v33); /*0x7398ce*/
    TechnoClass::checkBuildLimit(*(this + 135)); /*0x7398d9*/
    *(_DWORD *)(*(_DWORD *)(*(this + 135) + 22280) + 4) = v23; /*0x7398ea*/
    *(_DWORD *)(*(this + 135) + 22352) = v23; /*0x7398f3*/
    *(_BYTE *)(*(this + 135) + 494) = 1; /*0x7398ff*/
    *(_BYTE *)(*(this + 135) + 498) = 1; /*0x73990c*/
    *(_BYTE *)(*(this + 135) + 499) = 1; /*0x739919*/
    TechnoClass::FindDeployDestination(*(this + 135)); /*0x739926*/
  }
  HealthRatio = BuildingClass::GetHealthRatio(this); /*0x73992d*/
  v25 = Math::RoundToInt(HealthRatio * (double)*(int *)(v13[328] + 160)); /*0x73993e*/
  v13[27] = v25; /*0x739946*/
  if ( (int)v25 <= 1 ) /*0x739949*/
    LODWORD(v25) = 1; /*0x73994b*/
  v13[27] = v25; /*0x739950*/
  v13[28] = v25; /*0x739953*/
  v26 = *(this + 182); /*0x739956*/
  if ( v26 ) /*0x73995e*/
  {
    TechnoClass::RefreshDeployOccupierState(v26, HIDWORD(v25)); /*0x739960*/
    SlaveManagerClass::SetOwner(v13); /*0x73996c*/
  }
  qmemcpy(v13 + 311, this + 311, 0x1Cu); /*0x739984*/
  SetAudioSource((int)(this + 311), 0, 0); /*0x7399a4*/
  this->q13C = -1; /*0x7399ac*/
  *(this + 317) = -1; /*0x7399b2*/
  v27 = g_MoveFeedback; /*0x7399b8*/
  g_MoveFeedback = 0; /*0x7399bd*/
  v31 = v27; /*0x7399c4*/
  if ( v30 ) /*0x7399ce*/
    (*(void (__thiscall **)(int *))(*v13 + 332))(v13); /*0x7399d4*/
  g_MoveFeedback = v31; /*0x7399e0*/
  (*(void (__thiscall **)(int *))(*this + 928))(this); /*0x7399e8*/
  if ( *(this + 13) ) /*0x7399ee*/
  {
    ObjectClass::SetReference(v13, *(this + 13)); /*0x7399f8*/
    --*(_DWORD *)(*(this + 13) + 44); /*0x739a04*/
    *(this + 13) = 0; /*0x739a07*/
  }
  if ( *(_DWORD *)((*(int (__thiscall **)(int *))(*this + 132))(this) + 1388) != -1 ) /*0x739a1f*/
  {
    v34 = *(this + 39); /*0x739a2f*/
    v28 = *this; /*0x739a33*/
    v35 = this->owningHouseIndex; /*0x739a39*/
    v36 = *(this + 41); /*0x739a40*/
    v29 = (*(int (__thiscall **)(int *))(v28 + 132))(this); /*0x739a46*/
    StartAudioControllerAt(*(_DWORD *)(v29 + 1388), (int)&v34, 0); /*0x739a54*/
  }
  (*(void (__thiscall **)(int *))(*this + 248))(this); /*0x739a5e*/
  return 1; /*0x739580*/
}


// ==== 0x00739AC0  UnitClass::SimpleDeployerDeploy  this=IUnknown  sig=csp ====
char __thiscall UnitClass::SimpleDeployerDeploy(int *this)
{
  int v2; // eax
  int v3; // eax
  void **v4; // eax
  void **v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v12; // [esp+4h] [ebp-Ch] BYREF
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  v2 = *(this + 433); /*0x739ac6*/
  if ( *(_BYTE *)(v2 + 3603) ) /*0x739acc*/
  {
    if ( (*(int (__thiscall **)(int *))(*this + 456))(this) <= 0 /*0x739af2*/
      || (v2 = (*(int (__thiscall **)(int *))(*this + 132))(this), *(_BYTE *)(v2 + 1709)) )
    {
      LOBYTE(v2) = *((_BYTE *)this + 1760); /*0x739b00*/
      if ( !(_BYTE)v2 ) /*0x739b08*/
      {
        if ( !*((_BYTE *)this + 308) && (*(int (__thiscall **)(int *))(*this + 456))(this) > 0 ) /*0x739b2a*/
          *((_BYTE *)this + 308) = 1; /*0x739b2c*/
        if ( *((_BYTE *)this + 1761) && (v3 = this->q04C) != 0 ) /*0x739b44*/
        {
          if ( *(this + 62) >= *(_DWORD *)(*(_DWORD *)(v3 + 200) + 704) + *(_DWORD *)(*(_DWORD *)(v3 + 200) + 692) - 1 ) /*0x739b64*/
            *((_WORD *)this + 880) = 1; /*0x739b6a*/
        }
        else if ( !*((_BYTE *)this + 308) ) /*0x739b7c*/
        {
          if ( *(_DWORD *)(*(this + 433) + 1724) ) /*0x739b90*/
          {
            if ( !this->q04C ) /*0x739b9e*/
            {
              v4 = (void **)__2_YAPAXI_Z(456); /*0x739bad*/
              if ( v4 ) /*0x739bb7*/
              {
                v12 = *(this + 39); /*0x739bcb*/
                v13 = this->q028; /*0x739bd4*/
                v14 = *(this + 41); /*0x739be0*/
                v5 = AnimClass::ctor(v4, *(void **)(*(this + 433) + 1724), &v12, 0, 1, (void *)0x600, 0, 0); /*0x739bf3*/
              }
              else
              {
                v5 = 0; /*0x739bfa*/
              }
              this->q04C = (int)v5; /*0x739bff*/
              BuildingClass::AimTurret(v5, this); /*0x739c05*/
              *(_DWORD *)(this->q04C + 212) = (*(int (__thiscall **)(int *))(*this + 484))(this); /*0x739c1a*/
            }
            v6 = this->q04C; /*0x739c20*/
            *(this + 62) = *(_DWORD *)(*(_DWORD *)(v6 + 200) + 692); /*0x739c32*/
            v7 = dword_A8ED54[12]; /*0x739c3e*/
            v8 = *(_DWORD *)(*(_DWORD *)(v6 + 200) + 688); /*0x739c44*/
            *(this + 67) = v8; /*0x739c50*/
            *(this + 64) = v7; /*0x739c56*/
            this->q041 = v13; /*0x739c5c*/
            *(this + 66) = v8; /*0x739c5f*/
            *((_BYTE *)this + 1761) = 1; /*0x739c62*/
          }
          else
          {
            *((_BYTE *)this + 1760) = 1; /*0x739c6a*/
          }
        }
        v2 = (*(int (__thiscall **)(int *))(*this + 132))(this); /*0x739c74*/
        if ( *(_DWORD *)(v2 + 1388) != -1 ) /*0x739c84*/
        {
          v12 = *(this + 39); /*0x739c95*/
          v13 = this->q028; /*0x739c9e*/
          v9 = *this; /*0x739ca2*/
          v14 = *(this + 41); /*0x739ca7*/
          v10 = (*(int (__thiscall **)(int *))(v9 + 132))(this); /*0x739cab*/
          LOBYTE(v2) = StartAudioControllerAt(*(_DWORD *)(v10 + 1388), (int)&v12, 0); /*0x739cb9*/
        }
      }
    }
  }
  return v2; /*0x739cbf*/
}


// ==== 0x00739CD0  UnitClass::SimpleDeployerUndeploy  this=UnitClass  sig=csp ====
char __thiscall UnitClass::SimpleDeployerUndeploy(int *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // edi
  __int16 *PlacementCellsAlt; // eax
  void *v7; // eax
  void **v8; // eax
  void **v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  LOBYTE(v2) = *((_BYTE *)this + 1760); /*0x739cd7*/
  if ( (_BYTE)v2 ) /*0x739cdf*/
  {
    if ( *((_BYTE *)this + 1762) && (v3 = this->__pad_04C) != 0 ) /*0x739cf7*/
    {
      if ( *(this + 62) >= *(_DWORD *)(*(_DWORD *)(v3 + 200) + 704) + *(_DWORD *)(*(_DWORD *)(v3 + 200) + 692) - 2 ) /*0x739d17*/
      {
        v4 = *this; /*0x739d1d*/
        *((_BYTE *)this + 1760) = 0; /*0x739d21*/
        *((_BYTE *)this + 1762) = 0; /*0x739d28*/
        if ( *(_BYTE *)((*(int (__thiscall **)(int *))(v4 + 132))(this) + 1709) ) /*0x739d35*/
        {
          v5 = *this; /*0x739d43*/
          PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v16, (int)this); /*0x739d4f*/
          v7 = CellCoord::To_CellObj(MEMORY[0x87F7E8], PlacementCellsAlt); /*0x739d5a*/
          (*(void (__thiscall **)(int *, void *, int))(v5 + 1152))(this, v7, 1); /*0x739d62*/
        }
      }
    }
    else if ( *(_DWORD *)(*(this + 433) + 1724) ) /*0x739d73*/
    {
      if ( !this->__pad_04C ) /*0x739d81*/
      {
        v8 = (void **)__2_YAPAXI_Z(456); /*0x739d90*/
        if ( v8 ) /*0x739d9a*/
        {
          v17 = *(this + 39); /*0x739daf*/
          v18 = this->owningHouseIndex; /*0x739db8*/
          v19 = *(this + 41); /*0x739dc4*/
          v9 = AnimClass::ctor(v8, *(void **)(*(this + 433) + 1724), &v17, 0, 1, (void *)0x600, 0, 1); /*0x739dd7*/
        }
        else
        {
          v9 = 0; /*0x739dde*/
        }
        this->__pad_04C = (int)v9; /*0x739de3*/
        BuildingClass::AimTurret(v9, this); /*0x739de9*/
        *(_DWORD *)(this->__pad_04C + 212) = (*(int (__thiscall **)(int *))(*this + 484))(this); /*0x739dfe*/
      }
      v10 = this->__pad_04C; /*0x739e04*/
      *(this + 62) = *(_DWORD *)(*(_DWORD *)(v10 + 200) + 692); /*0x739e16*/
      v11 = dword_A8ED54[12]; /*0x739e22*/
      v12 = *(_DWORD *)(*(_DWORD *)(v10 + 200) + 688); /*0x739e28*/
      *(this + 67) = v12; /*0x739e34*/
      this->__pad_040 = v11; /*0x739e3a*/
      *(this + 65) = v18; /*0x739e40*/
      *(this + 66) = v12; /*0x739e43*/
      *((_BYTE *)this + 1762) = 1; /*0x739e46*/
    }
    else
    {
      *((_BYTE *)this + 1760) = 0; /*0x739e4f*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 196))(this) ) /*0x739e5a*/
      (*(void (__thiscall **)(int *))(*this + 1136))(this); /*0x739e68*/
    v2 = (*(int (__thiscall **)(int *))(*this + 132))(this); /*0x739e72*/
    if ( *(_DWORD *)(v2 + 1392) != -1 ) /*0x739e7f*/
    {
      v17 = *(this + 39); /*0x739e8f*/
      v18 = this->owningHouseIndex; /*0x739e98*/
      v13 = *this; /*0x739e9c*/
      v19 = *(this + 41); /*0x739ea1*/
      v14 = (*(int (__thiscall **)(int *))(v13 + 132))(this); /*0x739ea5*/
      LOBYTE(v2) = StartAudioControllerAt(*(_DWORD *)(v14 + 1392), (int)&v17, 0); /*0x739eb3*/
    }
  }
  return v2; /*0x739eb8*/
}


// ==== 0x00739EC0  BuildingClass::ProcessSell  this=BuildingClass  sig=csp ====
char __userpurge BuildingClass::ProcessSell@<al>(int a1@<ecx>, int *a2@<edi>, int a3, int a4, char a5)
{
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  void **v10; // ecx
  int v11; // edx
  int v12; // esi
  unsigned int v13; // eax
  int v14; // edx
  int v15; // esi
  unsigned int v16; // eax
  int v17; // eax
  int *v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // edx
  void **v25; // ecx
  int v26; // eax
  BOOL v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  int v31; // esi
  int v32; // edi
  _DWORD *v33; // eax
  int v34; // kr04_4
  __int64 v35; // rax
  int (__stdcall ***v36)(_DWORD, void *, int *); // eax
  int v37; // esi
  int v38; // eax
  int v39; // edi
  int v40; // ecx
  _DWORD *v41; // edi
  int *v42; // esi
  bool v43; // zf
  _DWORD *v44; // eax
  _DWORD *v45; // esi
  _DWORD *v46; // eax
  int v47; // eax
  _DWORD *v48; // eax
  void **Building; // esi
  _DWORD *v50; // eax
  _DWORD *v51; // eax
  _WORD *v52; // edi
  _WORD *v53; // eax
  int v54; // eax
  _DWORD *v55; // eax
  int v56; // ecx
  int v57; // ecx
  bool v58; // bl
  int v59; // eax
  int v60; // ecx
  _DWORD *v61; // eax
  int v62; // eax
  _DWORD *v63; // edi
  _DWORD *v64; // eax
  int v65; // eax
  int v66; // esi
  _DWORD *v67; // esi
  int v68; // eax
  int **v69; // ecx
  int v70; // esi
  void *v71; // eax
  void *v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  int v76; // edx
  _DWORD *v77; // eax
  int v78; // eax
  int *v79; // edi
  int v80; // ecx
  int v81; // eax
  int v82; // esi
  int v83; // eax
  int v84; // esi
  int v85; // eax
  _DWORD *v86; // esi
  int v87; // ebx
  void **v88; // esi
  int v89; // eax
  int v90; // eax
  void *WarheadVersusMultiplier; // eax
  int v92; // esi
  int v93; // edi
  int *v94; // eax
  _DWORD *v95; // edi
  int v96; // eax
  int v97; // esi
  int v98; // eax
  double v99; // st7
  int v100; // esi
  int v101; // eax
  void *v103; // [esp+98h] [ebp-48h]
  char v104; // [esp+9Ch] [ebp-44h]
  char v105; // [esp+9Ch] [ebp-44h]
  int v106; // [esp+A0h] [ebp-40h]
  _DWORD *v107; // [esp+A4h] [ebp-3Ch]
  int v108; // [esp+B0h] [ebp-30h] BYREF
  _DWORD *Member; // [esp+B4h] [ebp-2Ch] BYREF
  int v110; // [esp+B8h] [ebp-28h] BYREF
  int v111; // [esp+BCh] [ebp-24h] BYREF
  int v112; // [esp+C4h] [ebp-1Ch] BYREF
  int v113; // [esp+C8h] [ebp-18h]
  int v114; // [esp+CCh] [ebp-14h]
  int v115; // [esp+D0h] [ebp-10h] BYREF
  int v116; // [esp+D4h] [ebp-Ch]
  int v117; // [esp+D8h] [ebp-8h]

  v111 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 440))(a1, &v110); /*0x739ee2*/
  if ( a3 == 2 || !a3 ) /*0x739eea*/
  {
    if ( *(_BYTE *)(a1 + 1676) ) /*0x739eec*/
    {
      TechnoClass::Deploy((int *)a1); /*0x739ef8*/
      LOBYTE(v6) = *(_BYTE *)(a1 + 144); /*0x739efd*/
      if ( !(_BYTE)v6 ) /*0x739f05*/
        return v6; /*0x739f05*/
    }
  }
  if ( a3 != 2 ) /*0x739f0e*/
  {
LABEL_202:
    v95 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v111); /*0x73afd4*/
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3368) || TechnoTypeClass::HasVoiceResponse((float *)a1, 17) ) /*0x73aff9*/
    {
      v96 = v95[17]; /*0x73b002*/
      if ( v96 != -1 ) /*0x73b008*/
      {
        v97 = *(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * v96); /*0x73b010*/
        if ( *(_BYTE *)(v97 + 557) || *(_BYTE *)(v97 + 680) && *(_DWORD *)(*(_DWORD *)(a1 + 1732) + 1460) == 12 ) /*0x73b034*/
        {
          v98 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 72))(a1, &v115); /*0x73b042*/
          StartAudioControllerAt(*(_DWORD *)(v97 + 496), v98, 0); /*0x73b04d*/
          BuildingClass::SellEffects((int)v95, -1); /*0x73b056*/
          v99 = *(float *)(a1 + 820) + 0.02; /*0x73b061*/
          *(_BYTE *)(a1 + 1717) = 0; /*0x73b067*/
          *(float *)(a1 + 820) = v99; /*0x73b06e*/
        }
      }
    }
    v100 = *(_DWORD *)a1; /*0x73b074*/
    v101 = (*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)a1 + 440))(a1, &v110, 0); /*0x73b080*/
    (*(void (__thiscall **)(int, int))(v100 + 1332))(a1, v101); /*0x73b089*/
    LOBYTE(v6) = *(_BYTE *)(a1 + 144); /*0x73b08f*/
    if ( (_BYTE)v6 ) /*0x73b097*/
      LOBYTE(v6) = FootClass::UpdateAI((__int16 *)a1, a1, (int)v95, a3); /*0x73b0a0*/
    return v6; /*0x73b0a0*/
  }
  Member = (_DWORD *)Team::GetMember((_DWORD *)a1, 0); /*0x739f1d*/
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 1040) ) /*0x739f27*/
  {
    if ( !HouseClass::GainedPoweredCenter(*(_DWORD **)(a1 + 540), *(_DWORD *)(a1 + 1732)) ) /*0x739f38*/
    {
      v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1); /*0x739f46*/
      if ( !Cell::IsBridge(v7) ) /*0x739f4e*/
        TechnoClass::Deactivate((_DWORD *)a1); /*0x739f59*/
    }
  }
  v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1); /*0x739f63*/
  v9 = (int)Cell::IsBridge(v8); /*0x739f70*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 9 ) /*0x739f80*/
  {
    if ( !v9 ) /*0x739f88*/
      goto LABEL_47; /*0x739f88*/
    if ( v9 == *(_DWORD *)(a1 + 1444) || v9 == *(_DWORD *)(a1 + 692) ) /*0x739f9c*/
    {
      v10 = *(void ***)(v9 + 52); /*0x739fa2*/
      if ( v10 ) /*0x739fa7*/
        TeamClass::Update_0(v10, 1, a1, dword_A8ED54[145561], 0, 0); /*0x739fb7*/
      if ( *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1228) > 0 /*0x739fdc*/
        && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(a1 + 540)) )
      {
        v112 = *(_DWORD *)(a1 + 156); /*0x739ff1*/
        v11 = *(_DWORD *)a1; /*0x739ff5*/
        v113 = *(_DWORD *)(a1 + 160); /*0x739ffb*/
        v114 = *(_DWORD *)(a1 + 164); /*0x73a002*/
        v12 = (*(int (__thiscall **)(int))(v11 + 132))(a1) + 1212; /*0x73a015*/
        v13 = Random::State(&MEMORY[0x87F7E8][7400]); /*0x73a01b*/
        a2 = &v112; /*0x73a022*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v12 + 4) + 4 * (v13 % *(_DWORD *)(v12 + 16))), (int)&v112, 0); /*0x73a033*/
      }
      if ( *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1312) > 0 ) /*0x73a050*/
      {
        v112 = *(_DWORD *)(a1 + 156); /*0x73a05e*/
        v113 = *(_DWORD *)(a1 + 160); /*0x73a067*/
        v14 = *(_DWORD *)a1; /*0x73a06b*/
        v114 = *(_DWORD *)(a1 + 164); /*0x73a071*/
        v15 = (*(int (__thiscall **)(int))(v14 + 132))(a1) + 1296; /*0x73a082*/
        v16 = Random::State(&MEMORY[0x87F7E8][7400]); /*0x73a088*/
        a2 = &v112; /*0x73a08f*/
        StartAudioControllerAt(*(_DWORD *)(*(_DWORD *)(v15 + 4) + 4 * (v16 % *(_DWORD *)(v15 + 16))), (int)&v112, 0); /*0x73a0a0*/
      }
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 700))(a1); /*0x73a0aa*/
      HouseClass::AddPower(*(_DWORD **)(v9 + 540), v17); /*0x73a0b7*/
      while ( *(_DWORD *)(a1 + 280) ) /*0x73a0bc*/
      {
        v18 = (int *)FootClass::PopAndProcess((_DWORD *)a1); /*0x73a0c8*/
        a2 = v18; /*0x73a0cd*/
        if ( v18 ) /*0x73a0d1*/
        {
          if ( v18[70] ) /*0x73a0d3*/
          {
            do /*0x73a10a*/
            {
              v19 = FootClass::PopAndProcess(a2); /*0x73a0e4*/
              if ( v19 ) /*0x73a0e8*/
              {
                v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 700))(v19); /*0x73a0ee*/
                HouseClass::AddPower(*(_DWORD **)(v9 + 540), v20); /*0x73a0fb*/
                (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 248))(v19); /*0x73a104*/
              }
            }
            while ( a2[70] ); /*0x73a10a*/
          }
          v21 = (*(int (__thiscall **)(int *))(*a2 + 700))(a2); /*0x73a118*/
          HouseClass::AddPower(*(_DWORD **)(v9 + 540), v21); /*0x73a125*/
          (*(void (__thiscall **)(int *))(*a2 + 248))(a2); /*0x73a12e*/
        }
      }
      v22 = *(_DWORD *)(a1 + 1684); /*0x73a13e*/
      if ( v22 ) /*0x73a146*/
      {
        v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 700))(v22); /*0x73a14a*/
        HouseClass::AddPower(*(_DWORD **)(v9 + 540), v23); /*0x73a157*/
        v24 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 1684) + 1692) + 44); /*0x73a172*/
        *v24 = dword_A8ED54[12]; /*0x73a175*/
        v24[1] = v116; /*0x73a17b*/
        v24[2] = 50; /*0x73a17e*/
        BuildingClass::Deploy(*(_DWORD *)(*(_DWORD *)(a1 + 1684) + 1692), a1, (int)a2); /*0x73a18d*/
      }
      v25 = *(void ***)(a1 + 52); /*0x73a192*/
      if ( v25 ) /*0x73a197*/
        TeamClass::Update_0(v25, 48, a1, dword_A8ED54[145561], 0, 0); /*0x73a1a7*/
      if ( *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5805) ) /*0x73a1b2*/
      {
        v26 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 72))(a1, &v115); /*0x73a1c8*/
        StartAudioControllerAt(*(_DWORD *)(MEMORY[0x87F7E8][7806] + 616), v26, 0); /*0x73a1d9*/
        if ( *(_DWORD *)(v9 + 1384) ) /*0x73a1de*/
        {
          BuildingClass::ClearAnims((int *)v9, 3); /*0x73a1ec*/
          v27 = BuildingClass::GetHealthRatio((int *)v9) <= *(double *)(MEMORY[0x87F7E8][7806] + 5888); /*0x73a209*/
          BuildingClass::PlayUpgradeAnim((_DWORD *)v9, 10, v27, 0, 0); /*0x73a21d*/
        }
      }
      LOBYTE(v6) = (*(char (__thiscall **)(int))(*(_DWORD *)a1 + 248))(a1); /*0x73a227*/
      return v6; /*0x73a234*/
    }
  }
  if ( v9 /*0x73a26d*/
    && *(_BYTE *)(*(_DWORD *)(v9 + 1312) + 5806)
    && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 7
    && *(_DWORD *)(a1 + 1444) == v9 )
  {
    if ( (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 632))(a1, 15, v9) == 1 ) /*0x73a284*/
    {
      TechnoClass::SetFocus((_DWORD *)a1, 0); /*0x73a28e*/
      *(_BYTE *)(a1 + 140) = 0; /*0x73a297*/
      *(_DWORD *)(a1 + 196) = 0; /*0x73a29e*/
      TechnoClass::SetMember81((_DWORD *)a1, 0); /*0x73a2a8*/
      TechnoClass::SetSpread((_DWORD *)a1, 0); /*0x73a2b1*/
      v28 = *(_DWORD *)(a1 + 704); /*0x73a2b6*/
      if ( v28 ) /*0x73a2be*/
      {
        v29 = *(_DWORD **)(v28 + 700); /*0x73a2c0*/
        if ( v29 ) /*0x73a2c8*/
          CaptureManagerClass::FreeUnit(v29, v9, a1, (_DWORD *)a1, v106, v107); /*0x73a2cd*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 212))(a1); /*0x73a2d7*/
      CellClass::AddObject((_DWORD *)(v9 + 276), (_DWORD *)a1); /*0x73a2e4*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 284))(a1); /*0x73a2ee*/
      v6 = *(_DWORD *)(*(_DWORD *)(v9 + 1312) + 3816); /*0x73a2fa*/
      if ( v6 > 0 ) /*0x73a302*/
        *(_BYTE *)(*(_DWORD *)(v9 + 540) + 22392) = 1; /*0x73a30e*/
      return v6; /*0x73a31c*/
    }
LABEL_105:
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1152))(a1, 0, 1); /*0x73a796*/
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 5, 0); /*0x73a7ae*/
    LOBYTE(v6) = (*(char (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 372))(a1, &dword_A8ED54[145573], 1, 1); /*0x73a7c2*/
    return v6; /*0x73a7cf*/
  }
LABEL_47:
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 7 /*0x73a33d*/
    || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 25 )
  {
    if ( Member ) /*0x73a349*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) == 6 ) /*0x73a359*/
      {
        v30 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 72))(a1, &v115); /*0x73a369*/
        v31 = ((__int16)(*v30 / 256) << 8) + 128; /*0x73a3a5*/
        v32 = ((__int16)(v30[1] / 256) << 8) + 128; /*0x73a3ab*/
        v33 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, int))(*Member + 168))(Member, &v115, a1); /*0x73a3b1*/
        v34 = v33[1]; /*0x73a3d3*/
        v35 = ((__int16)(*v33 / 256) << 8) + 128; /*0x73a3e6*/
        v9 = (BYTE4(v35) + (int)v35) >> 8; /*0x73a41f*/
        if ( (unsigned __int16)(v31 / 256) == (_WORD)v9 /*0x73a437*/
          && (unsigned __int16)(v32 / 256) == (unsigned __int16)((((__int16)(v34 / 256) << 8) + 128) / 256) )
        {
          v36 = *(int (__stdcall ****)(_DWORD, void *, int *))(a1 + 1652); /*0x73a43d*/
          v108 = 0; /*0x73a443*/
          if ( !v36 ) /*0x73a44d*/
            goto LABEL_61; /*0x73a44d*/
          v37 = (**v36)(v36, &unk_818858, &v110); /*0x73a45e*/
          if ( v37 >= 0 ) /*0x73a462*/
          {
            v39 = v110; /*0x73a471*/
            ComPtr::Release_Alt(&v108); /*0x73a479*/
            v38 = v39; /*0x73a47e*/
          }
          else
          {
            ComPtr::Release_Alt(&v108); /*0x73a468*/
            v38 = 0; /*0x73a46d*/
          }
          v108 = v38; /*0x73a482*/
          if ( v37 < 0 && v37 != -2147467262 ) /*0x73a48e*/
            WinAPI::Wrapper(v37); /*0x73a491*/
          if ( !v38 ) /*0x73a49c*/
LABEL_61:
            WinAPI::Wrapper(-2147467261); /*0x73a4a3*/
          (*(void (__stdcall **)(int, int *))(*(_DWORD *)v38 + 12))(v38, &v115); /*0x73a4b4*/
          v40 = 4; /*0x73a4b7*/
          v41 = &stru_7E9A40; /*0x73a4bc*/
          v42 = &v115; /*0x73a4c1*/
          v43 = 1; /*0x73a4c5*/
          v44 = Member; /*0x73a4c7*/
          do /*0x73a4cb*/
          {
            if ( !v40 ) /*0x73a4cb*/
              break; /*0x73a4cb*/
            v43 = *v42++ == *v41++; /*0x73a4cb*/
            --v40; /*0x73a4cb*/
          }
          while ( v43 ); /*0x73a4cb*/
          if ( v43 && *(_BYTE *)(Member[328] + 5801) && !*(_DWORD *)(a1 + 1444) ) /*0x73a4df*/
            *(_DWORD *)(a1 + 1444) = Member; /*0x73a4e9*/
          if ( v44 == *(_DWORD **)(a1 + 1444) ) /*0x73a4f5*/
          {
            FootClass::UpdateAI((__int16 *)a1, a1, (int)v41, 2); /*0x73a4fb*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 21); /*0x73a507*/
            if ( !*(_DWORD *)(a1 + 1652) ) /*0x73a50d*/
              WinAPI::Wrapper(-2147467261); /*0x73a51c*/
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 92))(*(_DWORD *)(a1 + 1652)); /*0x73a52b*/
            LOBYTE(v6) = v108; /*0x73a52e*/
            if ( v108 ) /*0x73a534*/
              LOBYTE(v6) = (*(char (__stdcall **)(int))(*(_DWORD *)v108 + 8))(v108); /*0x73a53d*/
            return v6; /*0x73a547*/
          }
          if ( v108 ) /*0x73a550*/
            (*(void (__stdcall **)(int))(*(_DWORD *)v108 + 8))(v108); /*0x73a555*/
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 1048) ) /*0x73a558*/
  {
    v45 = Member; /*0x73a566*/
    if ( Member ) /*0x73a56c*/
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*Member + 44))(Member) == 6 /*0x73a588*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 7 )
      {
        Member = (_DWORD *)(v111 - 0x10000); /*0x73a599*/
        v110 = v111 - 0x10000; /*0x73a5ac*/
        v46 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v110); /*0x73a5b0*/
        if ( v45 == Cell::IsBridge(v46) ) /*0x73a5be*/
        {
          v47 = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 632))(a1, 21, v45) - 1; /*0x73a5ce*/
          if ( v47 ) /*0x73a5cf*/
          {
            if ( v47 != 4 ) /*0x73a5d4*/
              (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)a1 + 372))(a1, &dword_A8ED54[145573], 1, 0); /*0x73a5e4*/
          }
        }
      }
    }
  }
  v48 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1); /*0x73a5ef*/
  Building = (void **)Cell::IsBridge(v48); /*0x73a5fc*/
  if ( !Building ) /*0x73a600*/
  {
    v104 = *(_BYTE *)(a1 + 140); /*0x73a60b*/
    v50 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1); /*0x73a60e*/
    Building = (void **)PlacementList::FindByType(v50, v104); /*0x73a61b*/
    if ( !Building ) /*0x73a61f*/
    {
      v105 = *(_BYTE *)(a1 + 140); /*0x73a62a*/
      v51 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1); /*0x73a62d*/
      Building = (void **)CellClass::FindBuilding(v51, v105); /*0x73a63a*/
    }
  }
  if ( Building == (void **)a1 ) /*0x73a63e*/
    Building = (void **)AbstractClass::IsTechnoType(Building[12]); /*0x73a648*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) != 7
    || !Building
    || Building == (void **)a1
    || (v52 = (_WORD *)(*((int (__thiscall **)(void **, int *))*Building + 110))(Building, &v110),
        v53 = (_WORD *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)a1 + 440))(a1, &Member),
        *v53 != *v52)
    || v53[1] != v52[1]
    || !Array::Contains((int *)a1, (int)Building)
    || *(int *)((*((int (__thiscall **)(void **))*Building + 33))(Building) + 1504) <= 0 )
  {
    if ( !*(_BYTE *)(a1 + 1048) /*0x73a826*/
      || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 7
      && (!AbstractClass::IsTechnoType(*(void **)(a1 + 1444))
       || Team::GetMember((_DWORD *)a1, 0) == *(_DWORD *)(a1 + 1444))
      || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 16 )
    {
      goto LABEL_159; /*0x73a826*/
    }
    v57 = *(_DWORD *)(a1 + 1444); /*0x73a82c*/
    v58 = v57 == 0; /*0x73a834*/
    if ( v57 ) /*0x73a839*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v57 + 44))(v57) == 11 ) /*0x73a843*/
      {
        v59 = *(_DWORD *)(a1 + 156); /*0x73a84d*/
        v60 = *(_DWORD *)(a1 + 160); /*0x73a84f*/
        v117 = *(_DWORD *)(a1 + 164); /*0x73a855*/
        if ( *(_WORD *)(*(_DWORD *)(a1 + 1444) + 36) == (unsigned __int16)(v59 / 256) /*0x73a887*/
          && *(_WORD *)(*(_DWORD *)(a1 + 1444) + 38) == (unsigned __int16)(v60 / 256) )
        {
          v58 = 1; /*0x73a889*/
        }
      }
    }
    v112 = *(_DWORD *)(a1 + 156); /*0x73a897*/
    v113 = *(_DWORD *)(a1 + 160); /*0x73a8a8*/
    v114 = *(_DWORD *)(a1 + 164); /*0x73a8af*/
    v61 = Coord::To_Cell(MEMORY[0x87F7E8], &v112); /*0x73a8b3*/
    if ( !Cell::IsBridge(v61) || v58 )
    {
      v62 = Team::GetMember((_DWORD *)a1, 0); /*0x73a8cf*/
      v63 = (_DWORD *)v62; /*0x73a8d6*/
      if ( v58
        || !v62
        || (*(int (__thiscall **)(int))(*(_DWORD *)v62 + 44))(v62) != 6
        || !*(_BYTE *)(v63[328] + 5821)
        || (v112 = *(_DWORD *)(a1 + 156),
            v113 = *(_DWORD *)(a1 + 160),
            v114 = *(_DWORD *)(a1 + 164),
            v64 = Coord::To_Cell(MEMORY[0x87F7E8], &v112),
            Cell::IsBridge(v64) != v63) )
      {
        v65 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 8); /*0x73a93d*/
        if ( v65 == 23 )
        {
          if ( *(_DWORD *)(a1 + 1444) ) /*0x73a94c*/
          {
            v66 = *(_DWORD *)(a1 + 1444); /*0x73a956*/
            if ( v66 != (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) ) /*0x73a965*/
            {
              if ( v66 && (*(_BYTE *)(v66 + 20) & 1) != 0 ) /*0x73a973*/
                (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 632))(a1, 14, v66); /*0x73a981*/
              goto LABEL_154; /*0x73a987*/
            }
          }
          if ( v63 )
            v67 = (*(int (__thiscall **)(_DWORD *))(*v63 + 44))(v63) == 6 ? v63 : 0;
          else
            v67 = 0; /*0x73a990*/
          v68 = *(_DWORD *)(a1 + 1732); /*0x73a9a8*/
          if ( *(_BYTE *)(v68 + 3598) || *(_BYTE *)(v68 + 3599) ) /*0x73a9bc*/
          {
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 488))(a1, 10, 1); /*0x73aaef*/
            goto LABEL_154; /*0x73aaf5*/
          }
          v69 = *(int ***)(a1 + 728); /*0x73a9ca*/
          if ( v69 ) /*0x73a9d2*/
          {
            BuildingClass::InitBuildLimit(v69); /*0x73a9d4*/
            goto LABEL_154; /*0x73a9d9*/
          }
          if ( !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(a1 + 540)) && v67 && *(_BYTE *)(v67[328] + 5821) ) /*0x73a9ff*/
          {
            Member = (_DWORD *)*BuildingPlacement::FindPosition(&v110, (_DWORD *)a1); /*0x73aa27*/
            if ( Member != (_DWORD *)dword_A8ED54[145561] ) /*0x73aa2b*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 2, 0); /*0x73aa48*/
              v70 = *(_DWORD *)a1; /*0x73aa4e*/
              v71 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&Member); /*0x73aa5d*/
              (*(void (__thiscall **)(int, void *, int))(v70 + 1152))(a1, v71, 1); /*0x73aa65*/
              (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 492))(a1); /*0x73aa70*/
              v72 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&Member); /*0x73aa80*/
              TechnoClass::SetFocus((_DWORD *)a1, (int)v72); /*0x73aa88*/
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 11, 0); /*0x73aa96*/
              goto LABEL_154; /*0x73aa9c*/
            }
LABEL_151:
            TechnoClass::SetFocus((_DWORD *)a1, 0); /*0x73ab43*/
            goto LABEL_154; /*0x73ab4c*/
          }
          v73 = *(_DWORD *)(a1 + 536); /*0x73aaa1*/
          if ( !v73 || v73 == *(_DWORD *)(a1 + 1444) ) /*0x73aab1*/
          {
            FootClass::ClearPathIndex((_DWORD *)a1); /*0x73aac8*/
            (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)a1 + 372))(a1, &dword_A8ED54[145573], 1, 0); /*0x73aadb*/
          }
          else
          {
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 1152))(a1, v73, 1); /*0x73aabb*/
          }
        }
        else if ( v65 != 10 ) /*0x73aafa*/
        {
          v74 = *(_DWORD *)(a1 + 1732); /*0x73aafc*/
          if ( *(_BYTE *)(v74 + 3598) || *(_BYTE *)(v74 + 3599) ) /*0x73ab0c*/
          {
            if ( !*(_DWORD *)(a1 + 536) ) /*0x73ab1e*/
            {
              if ( !*(_DWORD *)(a1 + 1444) ) /*0x73ab4e*/
                (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)a1 + 372))(a1, &dword_A8ED54[145573], 1, 0); /*0x73ab66*/
              goto LABEL_154; /*0x73ab66*/
            }
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 488))(a1, 10, 0); /*0x73ab29*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1152))(a1, *(_DWORD *)(a1 + 536), 1); /*0x73ab3d*/
            goto LABEL_151; /*0x73ab3d*/
          }
        }
      }
    }
LABEL_154:
    v75 = *(_DWORD *)(a1 + 160); /*0x73ab6c*/
    v76 = *(_DWORD *)(a1 + 164); /*0x73ab78*/
    v112 = *(_DWORD *)(a1 + 156); /*0x73ab7e*/
    v113 = v75; /*0x73ab86*/
    v114 = v76; /*0x73ab90*/
    v77 = Coord::To_Cell(MEMORY[0x87F7E8], &v112); /*0x73ab94*/
    if ( Cell::IsBridge(v77) && !*(_DWORD *)(a1 + 1444) && !*(_DWORD *)(a1 + 1468) && !*(_DWORD *)(a1 + 1432) ) /*0x73abb8*/
      (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 372))(a1, &dword_A8ED54[145573], 1, 1); /*0x73abd0*/
LABEL_159:
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) == 5 ) /*0x73abe4*/
    {
      v112 = *(_DWORD *)(a1 + 156); /*0x73abf2*/
      v113 = *(_DWORD *)(a1 + 160); /*0x73abfe*/
      v114 = *(_DWORD *)(a1 + 164); /*0x73ac05*/
      if ( !Tactical::IsCellVisible(MEMORY[0x87F7E8], &v112) ) /*0x73ac0e*/
      {
        if ( *(_BYTE *)(a1 + 981) ) /*0x73ac17*/
        {
          v78 = *(_DWORD *)(a1 + 1492); /*0x73ac21*/
          if ( v78 ) /*0x73ac29*/
            *(_BYTE *)(v78 + 130) = 1; /*0x73ac2b*/
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 928))(a1); /*0x73ac37*/
          LOBYTE(v6) = (*(char (__thiscall **)(int))(*(_DWORD *)a1 + 248))(a1); /*0x73ac42*/
          return v6; /*0x73ac4f*/
        }
      }
    }
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1164))(a1, 0, 0, 0, 0); /*0x73ac5f*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1160))(a1, 0, 0, 0, 0, 0); /*0x73ac74*/
    v79 = (int *)(a1 + 156); /*0x73ac7a*/
    v112 = *(_DWORD *)(a1 + 156); /*0x73ac86*/
    v80 = *(_DWORD *)(a1 + 608); /*0x73ac8a*/
    v113 = *(_DWORD *)(a1 + 160); /*0x73ac96*/
    v114 = *(_DWORD *)(a1 + 164); /*0x73acaa*/
    MapClass::RevealArea2(MEMORY[0x87F7E8], &v112, 0, v80 + 3, 0); /*0x73acae*/
    if ( !*(_BYTE *)(a1 + 1745) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 512))(a1) ) /*0x73acc2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 492))(a1); /*0x73acd1*/
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3598) ) /*0x73acdd*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) != 16 /*0x73ad09*/
        && *(_DWORD *)(a1 + 172) != 7
        && *(_DWORD *)(a1 + 180) != 7
        && !*(_BYTE *)(a1 + 1745) )
      {
        v81 = Team::GetMember((_DWORD *)a1, 0); /*0x73ad17*/
        v82 = v81; /*0x73ad1c*/
        if ( v81 ) /*0x73ad20*/
        {
          if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v81 + 4) + 12))(v81 + 4) == 6 /*0x73ad37*/
            && *(_BYTE *)(*(_DWORD *)(v82 + 1312) + 5819) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 3); /*0x73ad48*/
          }
        }
      }
    }
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 1732) + 3599) ) /*0x73ad54*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 388))(a1) != 16 /*0x73ad85*/
        && *(_DWORD *)(a1 + 172) != 7
        && *(_DWORD *)(a1 + 180) != 7
        && !*(_BYTE *)(a1 + 1745) )
      {
        v83 = Team::GetMember((_DWORD *)a1, 0); /*0x73ad93*/
        v84 = v83; /*0x73ad98*/
        if ( v83 ) /*0x73ad9c*/
        {
          if ( (*(int (__stdcall **)(int))(*(_DWORD *)(v83 + 4) + 12))(v83 + 4) == 6 /*0x73adb3*/
            && *(_BYTE *)(*(_DWORD *)(v84 + 1312) + 5820) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 3); /*0x73adc4*/
          }
        }
      }
    }
    if ( !*(_DWORD *)(a1 + 1444) && *(_DWORD *)(a1 + 1504) == -1 && !*(_BYTE *)(*(_DWORD *)(a1 + 1732) + 1710) ) /*0x73ade3*/
    {
      v85 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 792))(a1, 1); /*0x73adf4*/
      *(_DWORD *)(a1 + 748) = dword_A8ED54[12]; /*0x73ae0f*/
      *(_DWORD *)(a1 + 752) = v116; /*0x73ae15*/
      *(_DWORD *)(a1 + 756) = v85 / 4; /*0x73ae18*/
    }
    v112 = *v79; /*0x73ae1f*/
    v113 = *(_DWORD *)(a1 + 160); /*0x73ae2b*/
    v114 = *(_DWORD *)(a1 + 164); /*0x73ae37*/
    v86 = Coord::To_Cell(MEMORY[0x87F7E8], &v112); /*0x73ae40*/
    v87 = v86[59]; /*0x73ae4a*/
    if ( !*(_DWORD *)(a1 + 1652) ) /*0x73ae42*/
      WinAPI::Wrapper(-2147467261); /*0x73ae57*/
    if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 16))(*(_DWORD *)(a1 + 1652)) /*0x73aea6*/
      && (*(int (__thiscall **)(int, _DWORD *, int, int, _DWORD, int))(*(_DWORD *)a1 + 428))(a1, v86, -1, -1, 0, 1) == 7
      && (!*(_BYTE *)(a1 + 140) || (v86[80] & 0x100) == 0)
      && !*(_BYTE *)(a1 + 973) )
    {
      if ( *(_DWORD *)(a1 + 172) != 7 ) /*0x73aebb*/
      {
        v88 = (void **)__2_YAPAXI_Z(456); /*0x73aecb*/
        if ( v88 ) /*0x73aed2*/
        {
          v112 = *v79; /*0x73aedd*/
          v113 = *(_DWORD *)(a1 + 160); /*0x73aee6*/
          v89 = *(_DWORD *)(a1 + 164); /*0x73aeec*/
          v115 = *v79; /*0x73aeef*/
          v114 = v89; /*0x73aef3*/
          v116 = *(_DWORD *)(a1 + 160); /*0x73aefa*/
          v90 = *v79; /*0x73aefe*/
          v117 = *(_DWORD *)(a1 + 164); /*0x73af05*/
          v103 = (void *)Return::HRESULT_Fail(v90, *(_DWORD *)(a1 + 160), *(_DWORD *)(a1 + 164)); /*0x73af1c*/
          WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x73af3f*/
                                              *(_DWORD *)(a1 + 108),
                                              *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008),
                                              v87,
                                              &v115);
          AnimClass::ctor(v88, WarheadVersusMultiplier, &v112, 0, 1, (void *)0x2600, v103, 0); /*0x73af47*/
        }
        v92 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008); /*0x73af5c*/
        v93 = *(_DWORD *)(a1 + 108); /*0x73af62*/
        v94 = (int *)(*(int (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)a1 + 72))(a1, &v115, 0, 0); /*0x73af6f*/
        CreateSmokeEffectAt(v93, v92, *v94, v94[1], v94[2], v106, (int)v107); /*0x73af8b*/
        LOBYTE(v6) = (*(char (__thiscall **)(int, char *, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 364))( /*0x73afb0*/
                       a1,
                       &a5,
                       0,
                       *(_DWORD *)(MEMORY[0x87F7E8][7806] + 4008),
                       0,
                       1);
        return v6; /*0x73afbd*/
      }
      (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 372))(a1, &dword_A8ED54[145573], 1, 1); /*0x73afce*/
    }
    goto LABEL_202; /*0x73afce*/
  }
  if ( (*(int (__thiscall **)(int, int, void **))(*(_DWORD *)a1 + 632))(a1, 15, Building) != 1 ) /*0x73a6e2*/
    goto LABEL_105; /*0x73a6e2*/
  TechnoClass::SetFocus((_DWORD *)a1, 0); /*0x73a6ec*/
  *(_BYTE *)(a1 + 140) = 0; /*0x73a6f5*/
  *(_DWORD *)(a1 + 196) = 0; /*0x73a6fc*/
  TechnoClass::SetMember81((_DWORD *)a1, 0); /*0x73a706*/
  TechnoClass::SetSpread((_DWORD *)a1, 0); /*0x73a70f*/
  v54 = *(_DWORD *)(a1 + 704); /*0x73a714*/
  if ( v54 ) /*0x73a71c*/
  {
    v55 = *(_DWORD **)(v54 + 700); /*0x73a71e*/
    if ( v55 ) /*0x73a726*/
      CaptureManagerClass::FreeUnit(v55, v9, a1, (_DWORD *)a1, v106, v107); /*0x73a72b*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 212))(a1); /*0x73a735*/
  (*((void (__thiscall **)(void **, int))*Building + 229))(Building, a1); /*0x73a740*/
  if ( *(_BYTE *)((*((int (__thiscall **)(void **))*Building + 33))(Building) + 1508) ) /*0x73a750*/
    TechnoClass::EnteredOpenTopped(a1); /*0x73a75d*/
  v56 = *(_DWORD *)(a1 + 1732); /*0x73a762*/
  *(_DWORD *)(a1 + 284) = Building; /*0x73a768*/
  if ( *(_BYTE *)(v56 + 1508) ) /*0x73a76e*/
    CCINIClass::IterateNodes((_DWORD *)a1, 0); /*0x73a77c*/
  LOBYTE(v6) = (*(char (__thiscall **)(int))(*(_DWORD *)a1 + 284))(a1); /*0x73a786*/
  return v6; /*0x73a22d*/
}


// ==== 0x0073B0B0  TechnoClass::ShouldSkipOccupierDraw  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ShouldSkipOccupierDraw(void *this, int a2, ObjectClass *aP2, int a4)
{
  _DWORD *v5; // esi
  _BYTE *v6; // esi

  if ( *((_BYTE *)this + 1048) /*0x73b114*/
    && (v5 = (_DWORD *)Array::Get(this, 0), (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 6)
    && ((*(int (__thiscall **)(_DWORD *))(*v5 + 388))(v5) == 16 || v5[45] == 16)
    && ((v6 = v5 + 212, Window::IsVisible(v6))
     || BuildingClass::CheckFlag24(v6)
     || BuildingClass::CheckPowerFlags(v6)
     || Flag::CheckNone(v6)) )
  {
    return 0; /*0x73b11e*/
  }
  else
  {
    return ObjectClass::CalcDrawRect((#374 *)this); /*0x73b132*/
  }
}


// ==== 0x0073B140  TechnoClass::RenderTechnoSHP  this=TechnoClass  sig=csp ====
char TechnoClass::RenderTechnoSHP(
        int *a0,
        int *a1,
        int *a2,
        HouseClass *aP3,
        HouseClass *aP4,
        int a6,
        int a7,
        TechnoClass *aP7,
        TechnoClass *aP8,
        int a10,
        int a11)
{
  TechnoClass *v11; // ecx
  TechnoClass *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  char v15; // bl
  HouseClass *Array; // edi
  int v17; // edi
  XSurface *SHPFrame; // edi
  XSurface *v18; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v26; // eax
  int eax26a; // eax
  TechnoClass *v27; // [esp-Ch] [ebp-58h]
  TechnoClass *v28; // [esp-Ch] [ebp-58h]
  XSurface *v30; // [esp-8h] [ebp-54h]
  TechnoClass *v31; // [esp-8h] [ebp-54h]
  AbstractClass *_FFFFFFFC; // [esp-4h] [ebp-50h]
  AbstractClass *v32; // [esp-4h] [ebp-50h]
  AbstractClass *v34; // [esp+0h] [ebp-4Ch]
  int v35; // [esp+4h] [ebp-48h]
  int v36; // [esp+14h] [ebp-38h]
  int v37; // [esp+14h] [ebp-38h]
  int v38; // [esp+18h] [ebp-34h] BYREF
  int v39; // [esp+1Ch] [ebp-30h] BYREF
  XSurface aP6; // [esp+20h] [ebp-2Ch] BYREF
  XSurface v41; // [esp+30h] [ebp-1Ch] BYREF
  _BYTE v42[12]; // [esp+40h] [ebp-Ch] BYREF

  v12 = v11; /*0x73b146*/
  v13 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, int *))(*(_DWORD *)v11->__pad_0 + 72))(v11, &v39); /*0x73b152*/
  LOWORD(v36) = *v13 / 256; /*0x73b165*/
  HIWORD(v36) = v13[1] / 256; /*0x73b17e*/
  v38 = v36; /*0x73b18b*/
  v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38); /*0x73b190*/
  if ( CellClass::QuickPassable(v14) ) /*0x73b197*/
    aP8 = 0; /*0x73b1a0*/
  v15 = 0; /*0x73b1ae*/
  if ( *(_BYTE *)(v12[1].ironTintTimer[2] + 3606) ) /*0x73b1b0*/
  {
    if ( TechnoClass::CheckTargetCell(v12) && !TechnoClass::ScanNeighborCells(v12) /*0x73b1fb*/
      || (Array = (HouseClass *)Array::Get(v12, 0), *(_DWORD *)&v12[1].hasParachute)
      && Array
      && (*(int (__thiscall **)(HouseClass *))(*(_DWORD *)Array->__pad_0 + 44))(Array) == 6
      && *(_BYTE *)(Array->builtInfantryTypes[126] + 5821) )
    {
      v15 = 1; /*0x73b205*/
    }
  }
  v37 = 0; /*0x73b20f*/
  v17 = 10240; /*0x73b217*/
  switch ( (*(int (__thiscall **)(TechnoClass *, _DWORD, _DWORD))(*(_DWORD *)v12->__pad_0 + 104))(v12, 0, 0) ) /*0x73b225*/
  {
    case 1: /*0x73b225*/
      v17 = 10242; /*0x73b22c*/
      break; /*0x73b231*/
    case 2: /*0x73b225*/
    case 3: /*0x73b225*/
      v17 = 10244; /*0x73b233*/
      break; /*0x73b238*/
    case 4: /*0x73b225*/
      v17 = 10250; /*0x73b240*/
      if ( v12->cloakState ) /*0x73b23a*/
        v17 = 10252; /*0x73b249*/
      v37 = TechnoClass::CalcOffsetFacing((int)v12); /*0x73b255*/
      break; /*0x73b255*/
    default:
      break;
  }
  if ( (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 468))(v12) /*0x73b26b*/
    || (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 472))(v12) )
  {
    v17 |= 4u; /*0x73b275*/
  }
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v12->focus) /*0x73b28b*/
    && (*(unsigned __int8 (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 196))(v12) )
  {
    v17 = (*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v12->__pad_0 + 1084))(v12, v17); /*0x73b2a0*/
  }
  SHPFrame = (XSurface *)BuildingClass::GetSHPFrame( /*0x73b2d3*/
                           *(_DWORD **)(*(_DWORD *)(stru_B05488.field_4C + 4 * *((_DWORD *)v12->focus + 22549)) + 780),
                           (ConvertClass *)v17);
  aP6.LockCount = (int)a1 + *(_DWORD *)::aP6.__pad_0 - 128; /*0x73b2dd*/
  *(_DWORD *)v41.__pad_0 = (char *)a2 + ::aP6.Width - 128; /*0x73b2eb*/
  v41.Width = ::aP6.Height; /*0x73b2f6*/
  v41.Height = ::aP6.LockCount; /*0x73b2fa*/
  if ( v15 && ::aP6.LockCount > 16 ) /*0x73b307*/
  {
    v18 = (XSurface *)aP7; /*0x73b30d*/
    v39 = *(_DWORD *)::aP6.__pad_0; /*0x73b311*/
    aP6.Width = ::aP6.Height; /*0x73b319*/
    v41.Height = ::aP6.LockCount - 16; /*0x73b329*/
    aP6.Height = ::aP6.LockCount - 16; /*0x73b32d*/
    v20 = *(_DWORD *)v12->__pad_0; /*0x73b331*/
    _FFFFFFFC = (AbstractClass *)aP8; /*0x73b333*/
    *(_DWORD *)aP6.__pad_0 = ::aP6.Width; /*0x73b339*/
    v30 = (XSurface *)((*(int (__thiscall **)(TechnoClass *, _DWORD, TechnoClass *))(v20 + 748))(v12, 0, aP7) - 5); /*0x73b34a*/
    v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b35a*/
    BlitterCopySHP( /*0x73b377*/
      (XSurface *)a1,
      (XSurface *)&aP4,
      &v41,
      *(XSurface **)&stru_87C374.__pad_579C[22532],
      v21,
      (XSurface *)&v42[4],
      (XSurface *)&aP6.Width,
      SHPFrame,
      v30,
      (int)_FFFFFFFC,
      v37,
      v35);
    v22 = v41.LockCount + v41.Width; /*0x73b388*/
    v23 = v41.LockCount + aP6.Width; /*0x73b38a*/
    v41.LockCount = 16; /*0x73b391*/
    aP6.LockCount = 16; /*0x73b395*/
    v41.Width = v22; /*0x73b39d*/
    aP6.Width = v23; /*0x73b3a6*/
    v34 = (AbstractClass *)a10; /*0x73b3ac*/
    v27 = (TechnoClass *)(*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 748))(v12); /*0x73b3be*/
    v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b3cc*/
    return BlitterCopySHP( /*0x73b3e5*/
             (XSurface *)a1,
             (XSurface *)&aP3,
             (XSurface *)&aP6.LockCount,
             *(XSurface **)&stru_87C374.__pad_579C[22532],
             v24,
             (XSurface *)v42,
             &aP6,
             SHPFrame,
             (XSurface *)v27,
             2,
             (int)v18,
             (int)v34);
  }
  else
  {
    v32 = (AbstractClass *)aP8; /*0x73b403*/
    v31 = aP7; /*0x73b404*/
    v26 = (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v12->__pad_0 + 752))(v12); /*0x73b407*/
    v28 = (TechnoClass *)(*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v12->__pad_0 + 748))(v12, v26); /*0x73b41e*/
    eax26a = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))(*(_DWORD *)&stru_87C374.__pad_579C[22532]); /*0x73b42c*/
    return BlitterCopySHP( /*0x73b446*/
             (XSurface *)a0,
             (XSurface *)&aP3,
             (XSurface *)&aP6.LockCount,
             *(XSurface **)&stru_87C374.__pad_579C[22532],
             eax26a,
             (XSurface *)v42,
             &::aP6,
             SHPFrame,
             (XSurface *)v28,
             (int)v31,
             (int)v32,
             v37);
  }
}


// ==== 0x0073B470  TechnoClass::DrawVoxel  this=TechnoClass  sig=csp ====
int __userpurge TechnoClass::DrawVoxel@<eax>(
        _DWORD *ecx0@<ecx>,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        BuildingTypeClass *started,
        int a8,
        int a9)
{
  int v10; // ebx
  int v11; // edx
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  const void *v15; // eax
  ObjectClass *v16; // eax
  int v17; // esi
  int v18; // edi
  float *v19; // eax
  int v20; // edi
  float *inited; // eax
  TechnoClass *v22; // esi
  unsigned int v23; // esi
  double v24; // st7
  int v25; // edi
  float *v26; // eax
  float *v27; // eax
  int v28; // eax
  int v29; // ecx
  size_t v30; // eax
  size_t v31; // eax
  bool v32; // al
  ParticleSystemClass *v33; // esi
  float *v34; // eax
  float *v35; // eax
  ObjectClass *v36; // esi
  TechnoClass *v37; // edi
  BuildingTypeClass *v38; // edi
  TechnoClass *v39; // esi
  __int16 v40; // ax
  int v41; // edi
  int *v42; // eax
  BuildingTypeClass *v43; // eax
  int v44; // edx
  BuildingTypeClass *v45; // esi
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // edx
  int v50; // ecx
  int v51; // esi
  int v52; // esi
  int v53; // esi
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  int v60; // edx
  int v61; // ecx
  AbstractClass *v62; // esi
  ObjectClass *v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  const void *v67; // eax
  int *v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // edi
  VectorClass *v72; // esi
  void *v73; // eax
  int v74; // eax
  int v75; // eax
  bool v76; // cc
  int v77; // eax
  int v78; // esi
  int v79; // eax
  float *v80; // eax
  int v81; // esi
  int v82; // eax
  float *v83; // eax
  float *v85; // [esp+E4h] [ebp-1D8h]
  float *v86; // [esp+E4h] [ebp-1D8h]
  float *v87; // [esp+E8h] [ebp-1D4h]
  float *v88; // [esp+E8h] [ebp-1D4h]
  BuildingTypeClass *v89; // [esp+ECh] [ebp-1D0h]
  BuildingTypeClass *v90; // [esp+ECh] [ebp-1D0h]
  int v91; // [esp+ECh] [ebp-1D0h]
  int v92; // [esp+ECh] [ebp-1D0h]
  int v93; // [esp+F0h] [ebp-1CCh]
  int v94; // [esp+F0h] [ebp-1CCh]
  float aP1; // [esp+F4h] [ebp-1C8h]
  float aP1a; // [esp+F4h] [ebp-1C8h]
  float aP1b; // [esp+F4h] [ebp-1C8h]
  int aP1c; // [esp+F4h] [ebp-1C8h]
  float aP1d; // [esp+F4h] [ebp-1C8h]
  float aP1e; // [esp+F4h] [ebp-1C8h]
  float aP1f; // [esp+F4h] [ebp-1C8h]
  int aP1g; // [esp+F4h] [ebp-1C8h]
  float aP1_4; // [esp+F8h] [ebp-1C4h]
  float v104; // [esp+FCh] [ebp-1C0h]
  bool v105; // [esp+109h] [ebp-1B3h]
  char v106; // [esp+109h] [ebp-1B3h]
  char v107; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v108; // [esp+109h] [ebp-1B3h]
  unsigned __int8 v109; // [esp+109h] [ebp-1B3h]
  char v110; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v111; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v112; // [esp+10Ah] [ebp-1B2h]
  unsigned __int8 v113; // [esp+10Bh] [ebp-1B1h]
  unsigned __int8 v114; // [esp+10Bh] [ebp-1B1h]
  TechnoClass *aP3; // [esp+10Ch] [ebp-1B0h] BYREF
  ObjectClass *v116; // [esp+110h] [ebp-1ACh] BYREF
  int v117; // [esp+114h] [ebp-1A8h] BYREF
  double v118; // [esp+118h] [ebp-1A4h] BYREF
  float v119; // [esp+120h] [ebp-19Ch]
  TechnoClass *v120; // [esp+124h] [ebp-198h]
  __int64 v121; // [esp+128h] [ebp-194h] BYREF
  int v122; // [esp+130h] [ebp-18Ch] BYREF
  double v123; // [esp+134h] [ebp-188h] BYREF
  float v124; // [esp+13Ch] [ebp-180h]
  int v125; // [esp+144h] [ebp-178h]
  int v126; // [esp+148h] [ebp-174h] BYREF
  int v127; // [esp+14Ch] [ebp-170h]
  int v128; // [esp+150h] [ebp-16Ch]
  int v129; // [esp+154h] [ebp-168h]
  int v130; // [esp+158h] [ebp-164h] BYREF
  int v131; // [esp+15Ch] [ebp-160h]
  int v132; // [esp+160h] [ebp-15Ch] BYREF
  int v133; // [esp+164h] [ebp-158h] BYREF
  _DWORD a1[2]; // [esp+168h] [ebp-154h] BYREF
  int GroundHeight; // [esp+170h] [ebp-14Ch]
  float v136; // [esp+174h] [ebp-148h] BYREF
  float v137; // [esp+178h] [ebp-144h]
  float v138; // [esp+17Ch] [ebp-140h]
  int v139; // [esp+180h] [ebp-13Ch]
  int v140; // [esp+184h] [ebp-138h]
  AbstractClass *v141; // [esp+188h] [ebp-134h]
  float v142[12]; // [esp+18Ch] [ebp-130h] BYREF
  _DWORD v143[4]; // [esp+1BCh] [ebp-100h] BYREF
  _BYTE v144[48]; // [esp+1CCh] [ebp-F0h] BYREF
  float v145[12]; // [esp+1FCh] [ebp-C0h] BYREF
  _BYTE v146[48]; // [esp+22Ch] [ebp-90h] BYREF
  float v147[12]; // [esp+25Ch] [ebp-60h] BYREF
  float v148[12]; // [esp+28Ch] [ebp-30h] BYREF

  v121 = a2;
  v10 = ecx0[433];
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*ecx0 + 1088))(ecx0, HouseClass_Player.field_0) )
    v10 = (*(int (__thiscall **)(_DWORD *, int))(*ecx0 + 204))(ecx0, 1);
  if ( *((_BYTE *)ecx0 + 1760) && *(_DWORD *)(ecx0[433] + 1720) )
    v10 = *(_DWORD *)(ecx0[433] + 1720);
  v11 = ecx0[334] % *(_DWORD *)(*(_DWORD *)(v10 + 180) + 8);
  v122 = 0;
  v125 = v11;
  if ( !v11 )
  {
    v12 = *(_DWORD *)(v10 + 188);
    if ( !v12 )
      goto LABEL_10;
    v11 = ecx0[82] % *(_DWORD *)(v12 + 8);
  }
  v122 = v11;
LABEL_10:
  v131 = a4;
  v130 = a3;
  v141 = *(AbstractClass **)&stru_87C374.__pad_579C[22532];
  v132 = a5;
  v133 = a6;
  v121 = 0x8000000080LL;
  aP3 = 0;
  *(_DWORD *)&stru_87C374.__pad_579C[22532] = dword_B1D13C;
  v13 = (int *)(*(int (__thiscall **)(_DWORD *, float *))(*dword_B1D13C + 120))(dword_B1D13C, &v136);
  v130 = *v13;
  v131 = v13[1];
  v132 = v13[2];
  v14 = v13[3];
  *((_BYTE *)ecx0 + 1747) = 1;
  v133 = v14;
  aP3 = (TechnoClass *)((stru_87C374.__pad_579C[22792] != 0) - 1);
  if ( !ecx0[413] )
    WinAPI::Wrapper(-2147467261);
  v15 = (const void *)(*(int (__stdcall **)(_DWORD, float *, TechnoClass **))(*(_DWORD *)ecx0[413] + 36))(
                        ecx0[413],
                        v145,
                        &aP3);
  Transform::Copy(v144, v15);
  v16 = (ObjectClass *)aP3;
  qmemcpy(v142, v144, sizeof(v142));
  v17 = v125;
  if ( aP3 != (TechnoClass *)-1 )
  {
    v16 = (ObjectClass *)(v125 & 0x1F | (32 * (_DWORD)aP3));
    aP3 = (TechnoClass *)v16;
  }
  v126 = v130;
  v140 = ((int)v16 >> 5) & 0x3FF;
  v128 = v132;
  v127 = v131;
  v129 = v133;
  *(_DWORD *)aP6.__pad_0 = xmmword_B1CFA8;
  aP6.Width = DWORD1(xmmword_B1CFA8);
  aP6.Height = DWORD2(xmmword_B1CFA8);
  aP6.LockCount = HIDWORD(xmmword_B1CFA8);
  if ( !*(_BYTE *)(ecx0[433] + 488) || SpawnManagerClass::CountDockedSpawns((int *)ecx0[180]) )
  {
    v20 = *ecx0;
    v90 = started;
    inited = (float *)AudioConfig::InitDefault(v144);
    v88 = MultiplyMatrix3x4((ObjectClass *)v145, inited, v142);
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, float *, BuildingTypeClass *, int, _DWORD))(v20 + 1296))(
      ecx0,
      v10 + 176,
      v17,
      aP3,
      v10 + 580,
      &v126,
      &v121,
      v88,
      v90,
      10240,
      0);
  }
  else
  {
    v89 = started;
    aP3 = (TechnoClass *)((unsigned int)aP3 | 0x10000);
    v18 = *ecx0;
    v19 = (float *)AudioConfig::InitDefault(v144);
    v87 = MultiplyMatrix3x4((ObjectClass *)v145, v19, v142);
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, float *, BuildingTypeClass *, int, _DWORD))(v18 + 1296))(
      ecx0,
      v10 + 184,
      v17,
      aP3,
      v10 + 580,
      &v126,
      &v121,
      v87,
      v89,
      10240,
      0);
  }
  v22 = aP3;
  v120 = aP3;
  if ( aP3 != (TechnoClass *)-1 )
  {
    v23 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v116) >> 10) + 1) >> 1) & 0x1F
        | (unsigned int)v22 & 0xFFFFFFE0;
    if ( !*(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*ecx0 + 132))(ecx0) + 1824) )
      v23 &= 0xFFFFFC1F;
    v22 = (TechnoClass *)(((unsigned __int8)v122 << 16) | v23);
    v120 = v22;
  }
  if ( !*(_BYTE *)(v10 + 3233) && (!TechnoClass::OwnerHasPower(ecx0) || !TechnoClass::checkEMPState(ecx0)) )
  {
    if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
    {
      v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 440, (IUnknown *)&v117) >> 10)
                                            + 1) >> 1)
                            & 0x1F)
                           - 8);
      v24 = (double)(int)v116 * -0.1963495408493621;
      v118 = v24;
      TechnoClass::CalcFacingFromMatrix((IUnknown *)v142);
      aP1 = -(v118 - v24);
      ((void (__thiscall *)(float *, float))Matrix3D::RotateZ)(v142, aP1);
      aP1a = (double)*(int *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*ecx0 + 1016))(ecx0, 0) + 12) * unk_B1D008;
      aP1b = (double)*(int *)((*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*ecx0 + 1016))(
                                ecx0,
                                0,
                                0,
                                LODWORD(aP1a))
                            + 4)
           * unk_B1D008;
      Vector::MatrixMulVectorMath(&v142[2], aP1b, aP1_4, v104);
      v25 = *ecx0;
      v104 = 0.0;
      aP1_4 = 0.0;
      aP1c = a9;
      v26 = (float *)AudioConfig::InitDefault(&v144[8]);
      v27 = MultiplyMatrix3x4((ObjectClass *)&v145[2], v26, &v142[2]);
      (*(void (__thiscall **)(_DWORD *, int, int, _DWORD, int, int *, int *, float *, int))(v25 + 1296))(
        ecx0,
        v10 + 192,
        v127,
        HIDWORD(v121),
        v10 + 640,
        &v132,
        &v122,
        v27,
        aP1c);
    }
    goto LABEL_81;
  }
  v117 = 0;
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(_BYTE *)(ecx0[433] + 3285) )
  {
    if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
    {
      v110 = 1;
      goto LABEL_37;
    }
LABEL_36:
    v110 = 0;
    goto LABEL_37;
  }
  v28 = TechnoClass::applyEMPulseDamage(ecx0);
  v117 = v28;
  v22 = (TechnoClass *)((v28 << 24) | (unsigned int)v22);
  v29 = *(_DWORD *)(v10 + 8 * v28 + 344);
  v120 = v22;
  if ( !v29 || !*(_DWORD *)(v10 + 8 * v28 + 348) )
    goto LABEL_36;
  v110 = 1;
LABEL_37:
  v116 = (ObjectClass *)v22;
  if ( v22 == (TechnoClass *)-1 || v10 == -600 )
  {
    v105 = 0;
    goto LABEL_46;
  }
  if ( !*(_DWORD *)(v10 + 604) )
    goto LABEL_44;
  if ( !TechnoClass::processIronCurtainExpiry((_DWORD *)(v10 + 600), (IUnknown *)&v116) )
  {
    v30 = SortedStateVector::BinarySearch((char **)(v10 + 600), (IUnknown *)&v116);
    if ( v30 )
    {
      *(_DWORD *)(v10 + 616) = v30;
      goto LABEL_43;
    }
LABEL_44:
    v105 = unk_B78824 != 0;
    goto LABEL_46;
  }
LABEL_43:
  v105 = *(_DWORD *)(*(_DWORD *)(v10 + 616) + 4) != 0;
LABEL_46:
  if ( !v110 || (v116 = (ObjectClass *)v22, v22 == (TechnoClass *)-1) || v10 == -640 )
  {
    v32 = 0;
    goto LABEL_56;
  }
  if ( !*(_DWORD *)(v10 + 644) )
    goto LABEL_54;
  if ( !TechnoClass::processIronCurtainExpiry((_DWORD *)(v10 + 640), (IUnknown *)&v116) )
  {
    v31 = SortedStateVector::BinarySearch((char **)(v10 + 640), (IUnknown *)&v116);
    if ( v31 )
    {
      *(_DWORD *)(v10 + 656) = v31;
      goto LABEL_53;
    }
LABEL_54:
    v32 = unk_B78824 != 0;
    goto LABEL_56;
  }
LABEL_53:
  v32 = *(_DWORD *)(*(_DWORD *)(v10 + 656) + 4) != 0;
LABEL_56:
  if ( v105 && (!v110 || v32) )
  {
    qmemcpy(v144, v142, sizeof(v144));
    v33 = (ParticleSystemClass *)v142;
  }
  else
  {
    aP1d = (double)*(int *)(v10 + 1824) * unk_B1D008;
    Matrix3x4::Translate(v142, (ParticleSystemClass *)LODWORD(aP1d));
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    v123 = (double)(int)v116 * -0.1963495408493621;
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 452, (IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1e = v123 - (double)(int)v116 * -0.1963495408493621;
    ((void (__thiscall *)(float *, float))Matrix2D::Rotate)(v142, aP1e);
    *(float *)&v118 = -v142[3];
    v137 = v142[7];
    qmemcpy(v145, v142, sizeof(v145));
    v138 = v142[11];
    *((float *)&v118 + 1) = -v142[7];
    v136 = v142[3];
    v123 = v118;
    v119 = -v142[11];
    v124 = v119;
    Matrix3x3::Multiply(v145, (float *)&v123);
    v116 = (ObjectClass *)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 440, (IUnknown *)&v118) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8);
    aP1f = -((double)(int)v116 * -0.1963495408493621);
    ((void (__thiscall *)(float *, float))Matrix3D::RotateZ)(v145, aP1f);
    Matrix3x3::Multiply(v145, &v136);
    v34 = (float *)AudioConfig::InitDefault(v148);
    qmemcpy(v144, MultiplyMatrix3x4((ObjectClass *)v147, v34, v142), sizeof(v144));
    v35 = (float *)AudioConfig::InitDefault(v147);
    v33 = (ParticleSystemClass *)MultiplyMatrix3x4((ObjectClass *)v148, v35, v145);
  }
  qmemcpy(v146, v33, sizeof(v146));
  if ( !TechnoClass::OwnerHasPower(ecx0) || *(_BYTE *)(ecx0[433] + 3285) )
  {
    if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v107 = 0;
      if ( *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
          ecx0,
          v10 + 192,
          0,
          v120,
          v10 + 640,
          &v130,
          &v121,
          v146,
          started,
          10240,
          0);
    }
    else
    {
      v107 = 1;
    }
    v38 = started;
    v39 = v120;
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
      ecx0,
      v10 + 184,
      v122,
      v120,
      v10 + 600,
      &v130,
      &v121,
      v144,
      started,
      10240,
      0);
    if ( v107 && *(_DWORD *)(v10 + 192) && *(_DWORD *)(v10 + 196) )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
        ecx0,
        v10 + 192,
        0,
        v39,
        v10 + 640,
        &v130,
        &v121,
        v146,
        v38,
        10240,
        0);
  }
  else
  {
    if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)&v118) >> 13) + 1) >> 1) & 3) == 0
      || (((unsigned int)((*ProgressTimer::GetValue((_WORD *)ecx0 + 464, (IUnknown *)a1) >> 13) + 1) >> 1) & 3) == 3 )
    {
      v106 = 0;
      if ( v110 )
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
          ecx0,
          v10 + 8 * v117 + 344,
          0,
          v120,
          v10 + 640,
          &v130,
          &v121,
          v146,
          started,
          10240,
          0);
    }
    else
    {
      v106 = 1;
    }
    v36 = (ObjectClass *)v117;
    v37 = v120;
    (*(void (__thiscall **)(_DWORD *, int, int, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
      ecx0,
      v10 + 8 * v117 + 200,
      v125,
      v120,
      v10 + 600,
      &v130,
      &v121,
      v144,
      started,
      10240,
      0);
    if ( v106 && v110 )
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, TechnoClass *, int, int *, __int64 *, _BYTE *, BuildingTypeClass *, int, _DWORD))(*ecx0 + 1296))(
        ecx0,
        v10 + 8 * (_DWORD)v36 + 344,
        0,
        v37,
        v10 + 640,
        &v130,
        &v121,
        v146,
        started,
        10240,
        0);
  }
LABEL_81:
  v127 = a4;
  v40 = *((_WORD *)ecx0 + 485);
  v128 = a5;
  v126 = a3;
  v129 = a6;
  if ( v40 <= 0 )
  {
    if ( *((_BYTE *)ecx0 + 973) )
      *((_WORD *)ecx0 + 485) = LOWORD(aP6.LockCount)
                             + WORD2(a2)
                             + *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180)
                             + LOWORD(aP6.Width)
                             - 128;
  }
  else
  {
    v41 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22548] + 180);
    v136 = 0.0;
    v139 = v40 - v41;
    v137 = 0.0;
    v138 = *(float *)&stru_87C374.__pad_579C[21656];
    v42 = ClipRectIntersection((IUnknown *)&v123, (IUnknown *)&v126, (IUnknown *)&v136, 0, 0);
    v126 = *v42;
    v127 = v42[1];
    v128 = v42[2];
    v129 = v42[3];
  }
  v43 = (BuildingTypeClass *)(*(int (__thiscall **)(_DWORD *, BuildingTypeClass *))(*ecx0 + 1124))(ecx0, started);
  v44 = *ecx0;
  v45 = v43;
  started = v43;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v44 + 352))(ecx0, LODWORD(aP1_4), LODWORD(v104)) )
  {
    started = Techno::StartInvulnerability(ecx0, v45);
    v46 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6312);
    v47 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v46;
    v113 = *(_BYTE *)(v46 + v47 + 6260);
    v111 = *(_BYTE *)(v46 + v47 + 4174 + 2087);
    v108 = *(_BYTE *)(v46 + v47 + 6262);
    v48 = DDraw::GetStatus() - 1;
    if ( v48 )
    {
      if ( --v48 )
      {
        v52 = a8;
        goto LABEL_92;
      }
      LOWORD(v50) = v113;
      LOWORD(v49) = v111;
      v50 = v108 | (32 * (v49 | (v50 << 6)));
      v51 = v50 | a8;
    }
    else
    {
      v51 = a8;
    }
    LOWORD(v48) = v113;
    LOWORD(v49) = v111 >> 1;
    LOWORD(v50) = v108;
    v48 *= 32;
    v49 = v50 | ((v48 | v49) << 6);
    v52 = v49 | v51;
LABEL_92:
    LOWORD(v50) = v108;
    LOWORD(v49) = v111 >> 1;
    LOWORD(v48) = v113;
    v53 = v50 | (32 * ((32 * v48) | v49)) | v52;
    goto LABEL_94;
  }
  v53 = a8;
LABEL_94:
  if ( !*((_BYTE *)ecx0 + 664) )
    goto LABEL_102;
  v54 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6316);
  v55 = v54 + *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v54;
  v114 = *(_BYTE *)(v55 + 6260);
  v112 = *(_BYTE *)(v55 + 6262);
  v109 = *(_BYTE *)(v54 + *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2 * v54 + 4174 + 2087);
  v56 = DDraw::GetStatus() - 1;
  if ( v56 )
  {
    v59 = v56 - 1;
    if ( v59 )
    {
      LOBYTE(v59) = v109;
      goto LABEL_101;
    }
    LOWORD(v57) = v114;
    v59 = v109;
    LOWORD(v58) = v109;
    v60 = v58 | (v57 << 6);
    LOWORD(v58) = v112;
    v57 = v58 | (32 * v60);
    v53 |= v57;
  }
  else
  {
    v59 = v109;
  }
  LOWORD(v58) = (unsigned __int8)v59 >> 1;
  LOWORD(v57) = v114;
  v57 *= 32;
  v61 = v57 | v58;
  LOWORD(v57) = v112;
  v58 = v57 | (v61 << 6);
  v53 |= v58;
LABEL_101:
  LOWORD(v58) = v114;
  LOWORD(v57) = v112;
  LOWORD(v59) = (unsigned __int8)v59 >> 1;
  v53 |= v57 | (32 * ((32 * v58) | v59));
LABEL_102:
  if ( UnitClass::IsDeactivated(ecx0) )
    started = (BuildingTypeClass *)((int)started / 2);
  aP1g = v53;
  v62 = v141;
  (*(void (__thiscall **)(_DWORD *, AbstractClass *, _DWORD, _DWORD, int, int, int, int, BuildingTypeClass *, int))(*ecx0 + 1372))(
    ecx0,
    v141,
    a2,
    HIDWORD(a2),
    v126,
    v127,
    v128,
    v129,
    started,
    aP1g);
  v143[1] = aP6.Width;
  v63 = *(ObjectClass **)&stru_87C374.__pad_579C[22532];
  *(_DWORD *)&stru_87C374.__pad_579C[22532] = v62;
  v116 = v63;
  LOBYTE(v63) = *((_BYTE *)ecx0 + 973);
  v143[0] = *(_DWORD *)aP6.__pad_0;
  v143[2] = aP6.Height;
  v143[3] = aP6.LockCount;
  *((_BYTE *)ecx0 + 1747) = 0;
  if ( !(_BYTE)v63 )
  {
    v64 = ecx0[433];
    v118 = *(double *)&a2;
    if ( *(_BYTE *)(v64 + 3434) || (v65 = *(_DWORD *)(v64 + 1660), v65 == 1) || v65 == 2 )
    {
      aP3 = (TechnoClass *)v140;
    }
    else
    {
      aP3 = (TechnoClass *)(32 * v140);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      v66 = (*(int (__stdcall **)(_DWORD, double *))(*(_DWORD *)ecx0[413] + 48))(ecx0[413], &v123);
      aP3 = (TechnoClass *)(((unsigned __int8)*(_DWORD *)(v66 + 4) - 16) & 0x1F | (unsigned int)aP3);
    }
    if ( !ecx0[413] )
      WinAPI::Wrapper(-2147467261);
    v67 = (const void *)(*(int (__stdcall **)(_DWORD, float *, TechnoClass **))(*(_DWORD *)ecx0[413] + 40))(
                          ecx0[413],
                          v147,
                          &aP3);
    Transform::Copy(v144, v67);
    qmemcpy(v142, v144, sizeof(v142));
    if ( *(_BYTE *)(v10 + 3367) )
    {
      a1[0] = ecx0[39];
      a1[1] = ecx0[40];
      GroundHeight = ecx0[41];
      GroundHeight = Cell::GetGroundHeight((IUnknown *)a1);
      Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], a1, (IUnknown *)&v118);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      v68 = (int *)(*(int (__stdcall **)(_DWORD, double *))(*(_DWORD *)ecx0[413] + 48))(ecx0[413], &v123);
      v69 = *v68;
      v70 = v68[1];
      LODWORD(v118) += v69;
      HIDWORD(v118) += v70;
    }
    if ( *((_BYTE *)ecx0 + 1060) )
      HIDWORD(v118) -= 14;
    v71 = (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0);
    v136 = *((float *)ecx0 + 39);
    v137 = *((float *)ecx0 + 40);
    v138 = *((float *)ecx0 + 41);
    v72 = (VectorClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v136);
    if ( *((_BYTE *)ecx0 + 1060) )
    {
      if ( !*((_BYTE *)ecx0 + 140) && v71 >= unk_B1D0AC )
      {
        v73 = v72[20].vtable0;
        if ( ((unsigned __int16)v73 & 0x100) != 0
          && ((BYTE1(v73) & 8) != 0 && (*((_DWORD *)Cell::GetNeighbourContent(v72, 0) + 80) & 0x100) != 0
           || ((int)v72[20].vtable0 & 0x800) == 0 && (*((_DWORD *)Cell::GetNeighbourContent(v72, 6u) + 80) & 0x100) != 0) )
        {
          HIDWORD(v118) -= 60;
        }
      }
    }
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*ecx0 + 84))(ecx0) )
    {
      v117 = 0;
    }
    else
    {
      v74 = ecx0[433];
      v117 = (int)v116;
      if ( *(_BYTE *)(v74 + 3434) || (v75 = *(_DWORD *)(v74 + 1660), v75 == 1) || v75 == 2 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0) > 0 )
          aP3 = (TechnoClass *)-1;
        else
          aP3 = (TechnoClass *)((unsigned int)aP3 | 0x80000000);
      }
    }
    v76 = (*(int (__thiscall **)(_DWORD *))(*ecx0 + 456))(ecx0) <= 0;
    v77 = ecx0[413];
    if ( v76 )
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      v81 = ecx0[413];
      v82 = (*(int (__stdcall **)(int))(*(_DWORD *)v81 + 48))(v81);
      v94 = *(_DWORD *)(*(int (__stdcall **)(int, int *, _DWORD))(*(_DWORD *)v81 + 48))(
                         v81,
                         &v133,
                         *(_DWORD *)(v82 + 4));
      v92 = v117;
      v83 = (float *)AudioConfig::InitDefault(v147);
      v86 = MultiplyMatrix3x4((ObjectClass *)v148, v83, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (_BYTE **)(v10 + 176),
        *(_DWORD *)(v10 + 2044),
        aP3,
        v10 + 620,
        (int)&a3,
        (TechnoClass *)&v118,
        (int)v86,
        1u,
        v92,
        v94,
        (int)&v123);
    }
    else
    {
      if ( !v77 )
        WinAPI::Wrapper(-2147467261);
      if ( !ecx0[413] )
        WinAPI::Wrapper(-2147467261);
      v78 = ecx0[413];
      v79 = (*(int (__stdcall **)(int))(*(_DWORD *)v78 + 48))(v78);
      v93 = *(_DWORD *)(*(int (__stdcall **)(int, int *, int))(*(_DWORD *)v78 + 48))(
                         v78,
                         &v133,
                         *(_DWORD *)(v79 + 4) + 1);
      v91 = v117;
      v80 = (float *)AudioConfig::InitDefault(v147);
      v85 = MultiplyMatrix3x4((ObjectClass *)v148, v80, v142);
      TechnoClass::QueueDrawVoiceResponse(
        ecx0,
        (_BYTE **)(v10 + 176),
        *(_DWORD *)(v10 + 2044),
        aP3,
        v10 + 620,
        (int)&a3,
        (TechnoClass *)&v118,
        (int)v85,
        1u,
        v91,
        v93,
        (int)&v123);
    }
  }
  return (*(int (__thiscall **)(ObjectClass *, _DWORD *, _DWORD))(*(_DWORD *)v116->__pad_0 + 20))(v116, v143, 0);
}


// ==== 0x0073C5F0  VoxelClass::RenderObject  this=int  sig=csp ====
int __userpurge VoxelClass::RenderObject@<eax>(_BYTE *a1@<ecx>, int a2, int a3, int a4, ConvertClass aP5)
{
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edx
  char v16; // cl
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // edx
  int v21; // eax
  const void *v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // dx
  int v26; // esi
  int v27; // ebx
  float *inited; // eax
  float *v29; // eax
  _DWORD *Value; // eax
  int v31; // edi
  float *v32; // eax
  float *v33; // eax
  int v34; // eax
  ObjectClass *v42; // esi
  int result; // eax
  int v37; // esi
  int v38; // eax
  float aP1; // [esp+B8h] [ebp-12Ch]
  float aP1a; // [esp+B8h] [ebp-12Ch]
  ParticleSystemClass *aP1b; // [esp+B8h] [ebp-12Ch]
  ParticleSystemClass *aP1c; // [esp+B8h] [ebp-12Ch]
  float aP1d; // [esp+B8h] [ebp-12Ch]
  ConvertClass *v44; // [esp+BCh] [ebp-128h]
  char v45; // [esp+CFh] [ebp-115h]
  float v46; // [esp+D0h] [ebp-114h]
  double v47; // [esp+D4h] [ebp-110h] BYREF
  float v48; // [esp+DCh] [ebp-108h]
  DirStruct desiredFacing; // [esp+E0h] [ebp-104h] BYREF
  int v50; // [esp+E4h] [ebp-100h] BYREF
  double v51; // [esp+E8h] [ebp-FCh]
  float v52; // [esp+F0h] [ebp-F4h]
  ObjectClass *v53; // [esp+F4h] [ebp-F0h] BYREF
  int v54; // [esp+F8h] [ebp-ECh]
  _DWORD v55[2]; // [esp+FCh] [ebp-E8h] BYREF
  int v56; // [esp+104h] [ebp-E0h]
  int v57; // [esp+108h] [ebp-DCh] BYREF
  _DWORD v58[4]; // [esp+10Ch] [ebp-D8h] BYREF
  int v59; // [esp+11Ch] [ebp-C8h] BYREF
  float v60[3]; // [esp+120h] [ebp-C4h] BYREF
  int v61; // [esp+12Ch] [ebp-B8h] BYREF
  _DWORD v62[3]; // [esp+130h] [ebp-B4h] BYREF
  _BYTE v63[168]; // [esp+13Ch] [ebp-A8h] BYREF

  v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 108))(a1); /*0x73c5ff*/
  v7 = *((_DWORD *)a1 + 433); /*0x73c602*/
  v8 = v6; /*0x73c608*/
  v54 = v6; /*0x73c60a*/
  v45 = 1; /*0x73c60e*/
  if ( *(_DWORD *)(v7 + 3644) != 8 || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 196))(a1) ) /*0x73c621*/
    v9 = 0; /*0x73c649*/
  else
    v9 = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 452, (IUnknown *)&v53) >> 12) + 1) >> 1) /*0x73c644*/
        + 1)
       & 7;
  v10 = *((_DWORD *)a1 + 432); /*0x73c64b*/
  if ( v10 >= 0 ) /*0x73c653*/
  {
    v11 = *((_DWORD *)a1 + 433); /*0x73c655*/
    v9 = v10 / 2 + *(_DWORD *)(v11 + 3632) + v9 * *(char *)(v11 + 3677); /*0x73c672*/
    goto LABEL_21; /*0x73c674*/
  }
  if ( !*((_DWORD *)a1 + 413) ) /*0x73c679*/
    WinAPI::Wrapper(-2147467261); /*0x73c688*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)a1 + 413) + 16))(*((_DWORD *)a1 + 413)) /*0x73c6a3*/
    || (v11 = *((_DWORD *)a1 + 433), *(_DWORD *)(v11 + 664)) )
  {
    v11 = *((_DWORD *)a1 + 433); /*0x73c702*/
    v15 = v9 * *(char *)(v11 + 3676) + *((_DWORD *)a1 + 334) % *(char *)(v11 + 3676); /*0x73c71b*/
LABEL_20:
    v9 = *(_DWORD *)(v11 + 3628) + v15; /*0x73c71d*/
    goto LABEL_21; /*0x73c723*/
  }
  v12 = *((_DWORD *)a1 + 438); /*0x73c6ad*/
  if ( v12 < 0 ) /*0x73c6b5*/
  {
    if ( !a1[1718] ) /*0x73c6dd*/
      goto LABEL_21; /*0x73c6dd*/
    v14 = *(_DWORD *)(v11 + 3612); /*0x73c6df*/
    if ( v14 ) /*0x73c6e7*/
    {
      v9 = *(_DWORD *)(v11 + 3624) + v9 * v14; /*0x73c6fe*/
      goto LABEL_21; /*0x73c700*/
    }
    v15 = v9 * *(char *)(v11 + 3676); /*0x73c6f0*/
    goto LABEL_20; /*0x73c6f3*/
  }
  v13 = v12 / *(_DWORD *)(v11 + 3620); /*0x73c6b8*/
  if ( v13 >= *(_DWORD *)(v11 + 3616) - 1 ) /*0x73c6cd*/
    v13 = *(_DWORD *)(v11 + 3616) - 1; /*0x73c6cf*/
  v9 = v13 + *(_DWORD *)(v11 + 3636); /*0x73c6d1*/
LABEL_21:
  if ( *(_BYTE *)(v11 + 3233) ) /*0x73c725*/
  {
    v16 = a1[1060]; /*0x73c73a*/
    v56 = a2; /*0x73c740*/
    v57 = a3; /*0x73c74d*/
    if ( v16 ) /*0x73c751*/
      v57 = a3 - 14; /*0x73c756*/
    v17 = *(__int16 *)(v8 + 6); /*0x73c762*/
    v18 = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 748))(a1, 0); /*0x73c772*/
    DrawToSurfaceSHP( /*0x73c7a7*/
      *(int *)&stru_87C374.__pad_579C[22532],
      *(int *)&stru_87C374.__pad_14B0[7840],
      (ConvertClass *)v8,
      v9 + v17 / 2,
      (ConvertClass *)&v57,
      &aP5,
      (ConvertClass *)0x2E01,
      0,
      v18 - 2,
      (ConvertClass *)0x3E8,
      0,
      0,
      0,
      0,
      0,
      v44);
    v54 = *(_DWORD *)&stru_87C374.__pad_579C[22532]; /*0x73c7bd*/
    *(_DWORD *)&stru_87C374.__pad_579C[22532] = dword_B1D13C; /*0x73c7c3*/
    v56 = 128; /*0x73c7c9*/
    v55[1] = 128; /*0x73c7cd*/
    v19 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*dword_B1D13C + 120))(dword_B1D13C, v62); /*0x73c7d8*/
    v58[0] = *v19; /*0x73c7dd*/
    v58[1] = v19[1]; /*0x73c7e4*/
    v58[2] = v19[2]; /*0x73c7eb*/
    v20 = v19[3]; /*0x73c7ef*/
    a1[1747] = 1; /*0x73c7f2*/
    v58[3] = v20; /*0x73c804*/
    aP6 = (XSurface)xmmword_B1CFA8; /*0x73c80e*/
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) ) /*0x73c83d*/
    {
      v21 = *((_DWORD *)a1 + 413); /*0x73c848*/
      v59 = -1; /*0x73c84e*/
      if ( !v21 ) /*0x73c858*/
        WinAPI::Wrapper(-2147467261); /*0x73c85f*/
      v22 = (const void *)(*(int (__stdcall **)(_DWORD, _BYTE *, int *))(**((_DWORD **)a1 + 413) + 36))( /*0x73c87a*/
                            *((_DWORD *)a1 + 413),
                            &v63[120],
                            &v59);
      Transform::Copy(v63, v22); /*0x73c885*/
      aP1 = (float)(*(_DWORD *)(*((_DWORD *)a1 + 433) + 1824) / 8); /*0x73c8af*/
      Matrix3x4::Translate((float *)v63, (ParticleSystemClass *)LODWORD(aP1)); /*0x73c8b2*/
      v47 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&desiredFacing) >> 10) /*0x73c8ee*/
                                         + 1) >> 1)
                         & 0x1F)
                        - 8)
          * -0.1963495408493621;
      aP1a = v47 /*0x73c91f*/
           - (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 452, (IUnknown *)&v50) >> 10) + 1) >> 1)
                          & 0x1F)
                         - 8)
           * -0.1963495408493621;
      Matrix2D::Rotate((float *)v63, (AbstractClass *)LODWORD(aP1a)); /*0x73c922*/
      v61 = *(_DWORD *)&v63[12]; /*0x73c967*/
      qmemcpy(&v63[48], v63, 0x30u); /*0x73c96d*/
      v62[1] = *(_DWORD *)&v63[44]; /*0x73c973*/
      *(float *)&v51 = -*(float *)&v63[12]; /*0x73c977*/
      v62[0] = *(_DWORD *)&v63[28]; /*0x73c97f*/
      *((float *)&v51 + 1) = -*(float *)&v63[28]; /*0x73c989*/
      v47 = v51; /*0x73c995*/
      v52 = -*(float *)&v63[44]; /*0x73c99b*/
      v48 = v52; /*0x73c9b3*/
      Matrix3x3::Multiply((float *)&v63[48], (float *)&v47); /*0x73c9b7*/
      if ( *((_DWORD *)a1 + 252) ) /*0x73c9bc*/
      {
        *(float *)&aP1b = -*((float *)a1 + 251); /*0x73c9d6*/
        Matrix3x4::Translate((float *)v63, aP1b); /*0x73c9d9*/
      }
      v46 = (float)(*(_DWORD *)((*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 12) / -8); /*0x73ca08*/
      desiredFacing = (DirStruct)(*(_DWORD *)((*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 1016))(a1, 0) + 4) /*0x73ca30*/
                                / -8);
      v60[2] = v46; /*0x73ca3c*/
      v60[1] = 0.0; /*0x73ca40*/
      HIDWORD(v51) = 0; /*0x73ca44*/
      *(float *)&v47 = (float)(int)desiredFacing; /*0x73ca50*/
      *(float *)&v51 = -*(float *)&v47; /*0x73ca62*/
      v60[0] = *(float *)&v47; /*0x73ca6c*/
      v52 = -v46; /*0x73ca74*/
      *(_QWORD *)&v47 = LODWORD(v51); /*0x73ca7c*/
      v48 = v52; /*0x73ca84*/
      Matrix3x3::Multiply((float *)&v63[48], (float *)&v47); /*0x73ca90*/
      v23 = *(_DWORD *)a1; /*0x73ca95*/
      qmemcpy(&v63[96], a1 + 880, 0x18u); /*0x73caaa*/
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(_BYTE *, _DWORD))(v23 + 1016))(a1, 0) + 160) + 670) ) /*0x73cabe*/
      {
        v24 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue(&v63[96], (IUnknown *)&v50) >> 7) + 1) >> 1); /*0x73cae1*/
        if ( v24 <= 64 || v24 > 128 ) /*0x73caf0*/
          v24 = (64 - v24) / 3 + 64; /*0x73cb1a*/
        else
          LOBYTE(v24) = (char)(v24 - 64) / 3 + 64; /*0x73cb01*/
        LOBYTE(v25) = 0; /*0x73cb1e*/
        HIBYTE(v25) = v24; /*0x73cb27*/
        desiredFacing.Value = v25; /*0x73cb2e*/
        FacingClass::Set_SyncLog((FacingClass *)&v63[96], &desiredFacing); /*0x73cb33*/
      }
      if ( *((_DWORD *)a1 + 260) ) /*0x73cb38*/
      {
        *(float *)&aP1c = -*((float *)a1 + 259); /*0x73cb52*/
        Matrix3x4::Translate((float *)&v63[48], aP1c); /*0x73cb55*/
      }
      desiredFacing = (DirStruct)((((unsigned int)((*ProgressTimer::GetValue(&v63[96], (IUnknown *)&v50) >> 10) + 1) >> 1) /*0x73cb81*/
                                 & 0x1F)
                                - 8);
      aP1d = -((double)*(int *)&desiredFacing * -0.1963495408493621); /*0x73cb91*/
      Matrix3D::RotateZ((float *)&v63[48], (AbstractClass *)LODWORD(aP1d)); /*0x73cb94*/
      Matrix3x3::Multiply((float *)&v63[48], v60); /*0x73cba5*/
      Matrix3x3::Multiply((float *)&v63[48], (float *)&v61); /*0x73cbb6*/
      if ( (((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&v50) >> 13) + 1) >> 1) & 3) == 0 /*0x73cbf8*/
        || (v45 = 1,
            (((unsigned int)((*ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&desiredFacing) >> 13) + 1) >> 1)
           & 3) == 3) )
      {
        v45 = 0; /*0x73cbfa*/
      }
      v8 = v54; /*0x73cbff*/
    }
    v26 = *(_DWORD *)&aP5.__pad_6[6]; /*0x73cc03*/
    (*(void (__thiscall **)(_BYTE *, int, int, _DWORD *, _DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 1292))( /*0x73cc36*/
      a1,
      v8,
      v9,
      v55,
      v58,
      0,
      256,
      0,
      0,
      0,
      *(_DWORD *)&aP5.__pad_6[6],
      0,
      0,
      0,
      0,
      0,
      10240);
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) && !v45 ) /*0x73cc59*/
    {
      v27 = *(_DWORD *)a1; /*0x73cc5b*/
      inited = (float *)AudioConfig::InitDefault(&v63[120]); /*0x73cc75*/
      v29 = MultiplyMatrix3x4((ObjectClass *)v63, inited, (float *)&v63[48]); /*0x73cc83*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD, int, _DWORD, _DWORD *, _DWORD *, float *, int, int, _DWORD))(v27 + 1296))( /*0x73cca8*/
        a1,
        *((_DWORD *)a1 + 433) + 192,
        0,
        -1,
        0,
        v58,
        v55,
        v29,
        v26,
        10240,
        0);
    }
    Value = ProgressTimer::GetValue((_WORD *)a1 + 464, (IUnknown *)&v50); /*0x73ccb9*/
    (*(void (__thiscall **)(_BYTE *, int, unsigned int, _DWORD *, _DWORD *, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 1292))( /*0x73cd08*/
      a1,
      v8,
      (((((unsigned int)((*Value >> 10) + 1) >> 1) & 0x1F) + 4) & 0x1F) + 8 * *(char *)(*((_DWORD *)a1 + 433) + 3676),
      v55,
      v58,
      0,
      256,
      0,
      0,
      0,
      v26,
      0,
      0,
      0,
      0,
      0,
      10272);
    if ( *(_DWORD *)(*((_DWORD *)a1 + 433) + 192) && *(_DWORD *)(*((_DWORD *)a1 + 433) + 196) ) /*0x73cd1e*/
    {
      if ( v45 ) /*0x73cd2b*/
      {
        v31 = *(_DWORD *)a1; /*0x73cd2d*/
        v32 = (float *)AudioConfig::InitDefault(&v63[120]); /*0x73cd47*/
        v33 = MultiplyMatrix3x4((ObjectClass *)v63, v32, (float *)&v63[48]); /*0x73cd55*/
        (*(void (__thiscall **)(_BYTE *, int, _DWORD, int, _DWORD, _DWORD *, _DWORD *, float *, int, int, _DWORD))(v31 + 1296))( /*0x73cd7a*/
          a1,
          *((_DWORD *)a1 + 433) + 192,
          0,
          -1,
          0,
          v58,
          v55,
          v33,
          v26,
          10272,
          0);
      }
    }
    v34 = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 1124))(a1, v26); /*0x73cd86*/
    v42 = v53; /*0x73cd93*/
    (*(void (__thiscall **)(_BYTE *, ObjectClass *, int, int, int, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 1372))( /*0x73cddb*/
      a1,
      v53,
      a2,
      a3,
      a4,
      *(_DWORD *)aP5.__pad_0,
      *(_DWORD *)&aP5.field_2[2],
      *(_DWORD *)&aP5.__pad_6[2],
      v34,
      *(_DWORD *)&aP5.__pad_6[10]);
    result = (*(int (__thiscall **)(_DWORD, XSurface *, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 20))( /*0x73cdf0*/
               *(_DWORD *)&stru_87C374.__pad_579C[22532],
               &aP6,
               0);
    *(_DWORD *)&stru_87C374.__pad_579C[22532] = v42; /*0x73cdf3*/
    a1[1747] = 0; /*0x73cdf9*/
  }
  else if ( *(_BYTE *)(v11 + 3606) && TechnoClass::CheckTargetCell(a1) && !TechnoClass::ScanNeighborCells(a1) ) /*0x73ce24*/
  {
    return (*(int (__thiscall **)(_BYTE *, int, int, int *, int *, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1292))( /*0x73ce5e*/
             a1,
             v8,
             v9,
             &a2,
             &a4,
             0,
             256,
             -16,
             0,
             0,
             *(_DWORD *)&aP5.__pad_6[6],
             0,
             0,
             0,
             0,
             0,
             0);
  }
  else
  {
    v37 = *(_DWORD *)a1; /*0x73ce75*/
    v38 = (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 752))( /*0x73ce89*/
            a1,
            0,
            *(_DWORD *)&aP5.__pad_6[6],
            0,
            0,
            0,
            0,
            0,
            0);
    return (*(int (__thiscall **)(_BYTE *, int, int, char *, char *, _DWORD, int, _DWORD, int))(v37 + 1292))( /*0x73cead*/
             a1,
             v8,
             v9,
             &aP5.__pad_6[14],
             &aP5.__pad_6[22],
             0,
             256,
             0,
             v38);
  }
  return result; /*0x73ce00*/
}


// ==== 0x0073CEC0  TechnoClass::Draw  this=TechnoClass  sig=csp ====
char __fastcall TechnoClass::Draw(int *this, IUnknown *a2, Tactical **aP10, ConvertClass *aP5)
{
  Tactical *v4; // ebx
  AbstractClass *v6; // edi
  char v7; // al
  int *v8; // eax
  int v9; // edx
  int v10; // eax
  int ebx8; // ebx
  VectorClass *v11; // edi
  void *v13; // eax
  int v14; // edi
  Tactical **v15; // ebp
  int v16; // edi
  Tactical **ebp29; // ebp
  AbstractClass *v17; // edx
  unsigned int v19; // edi
  int *v20; // ebx
  int v21; // edi
  double v22; // st7
  double v23; // st7
  unsigned int v24; // edi
  int v25; // eax
  ConvertClass *ebx37; // ebx
  AbstractClass *v26; // eax
  int referenceCount; // eax
  AbstractClass *v28; // edi
  int v30; // edx
  int v31; // edi
  int v32; // edx
  ConvertClass *v33; // eax
  int v34; // edx
  unsigned int v36; // [esp-30h] [ebp-84h]
  ConvertClass *v37; // [esp-14h] [ebp-68h]
  int v38; // [esp+14h] [ebp-40h] BYREF
  double v39; // [esp+18h] [ebp-3Ch] BYREF
  Tactical *v40; // [esp+20h] [ebp-34h]
  AbstractClass *v41; // [esp+24h] [ebp-30h]
  double a1; // [esp+28h] [ebp-2Ch] BYREF
  int v43; // [esp+30h] [ebp-24h]
  _DWORD v44[2]; // [esp+34h] [ebp-20h] BYREF
  _DWORD v45[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v46[3]; // [esp+48h] [ebp-Ch] BYREF

  if ( (unk_B1CF9C & 1) == 0 ) /*0x73ced0*/
  {
    LOBYTE(a2) = 0; /*0x73ced4*/
    unk_B1CF9C |= 1u; /*0x73cedb*/
    dword_B1CF98 = (ConvertClass *)SearchMIXFile(&stru_830620.__pad_579C[64328], a2); /*0x73cee5*/
  }
  v4 = *aP10; /*0x73ceee*/
  v6 = (AbstractClass *)((char *)aP10[1] - *((char *)this + 1716)); /*0x73cefa*/
  v7 = *((_BYTE *)this + 1060); /*0x73cefc*/
  v40 = v4; /*0x73cf04*/
  v41 = v6; /*0x73cf08*/
  v44[0] = v4; /*0x73cf0c*/
  v44[1] = v6; /*0x73cf10*/
  if ( v7 ) /*0x73cf14*/
  {
    v6 = (AbstractClass *)((char *)v6 + 14); /*0x73cf16*/
    v41 = v6; /*0x73cf19*/
  }
  v8 = (int *)(*(int (__thiscall **)(int *, Tactical ***))(*this + 440))(this, &aP10); /*0x73cf26*/
  v9 = *this; /*0x73cf2e*/
  v38 = *v8; /*0x73cf30*/
  v10 = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(v9 + 104))(this, 0, 0); /*0x73cf3a*/
  if ( v10 == 5 ) /*0x73cf40*/
    return v10; /*0x73cf40*/
  LOBYTE(v10) = *((_BYTE *)this + 1761); /*0x73cf46*/
  if ( (_BYTE)v10 ) /*0x73cf4e*/
    return v10; /*0x73cf4e*/
  LOBYTE(v10) = *((_BYTE *)this + 1762); /*0x73cf54*/
  if ( (_BYTE)v10 ) /*0x73cf5c*/
    return v10; /*0x73cf5c*/
  TacticalClass::AddToDrawQueue( /*0x73cf6b*/
    *(_DWORD **)&stru_87C374.__pad_579C[22548],
    (AbstractClass *)this,
    (AbstractClass *)v4,
    (MouseClass *)v6);
  ebx8 = (*(int (__thiscall **)(int *))(*this + 456))(this); /*0x73cf80*/
  v45[0] = *(this + 39); /*0x73cf84*/
  v45[1] = this->owningHouseIndex; /*0x73cf90*/
  v45[2] = *(this + 41); /*0x73cf97*/
  v11 = (VectorClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v45); /*0x73cfa5*/
  if ( *((_BYTE *)this + 140) ) /*0x73cfa7*/
  {
    if ( ebx8 < 0 ) /*0x73cfc3*/
      goto LABEL_25; /*0x73cfc3*/
  }
  else if ( ebx8 < unk_B1D0AC ) /*0x73cfb7*/
  {
LABEL_25:
    v16 = 0; /*0x73d078*/
    if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38) + 80) & 0x10000) != 0 /*0x73d099*/
      && !(*(unsigned __int8 (__thiscall **)(int *))(*this + 84))(this) )
    {
      v16 = -500; /*0x73d0a0*/
    }
    aP10 = (Tactical **)(v16 + *((__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38) + 133)); /*0x73d0bd*/
    v15 = aP10; /*0x73d0c1*/
    goto LABEL_29; /*0x73d0c1*/
  }
  v13 = v11[20].vtable0; /*0x73cfc9*/
  if ( ((unsigned __int16)v13 & 0x100) == 0 /*0x73d00c*/
    || ((BYTE1(v13) & 8) == 0 || (*((_DWORD *)Cell::GetNeighbourContent(v11, 0) + 80) & 0x100) == 0)
    && (((int)v11[20].vtable0 & 0x800) != 0 || (*((_DWORD *)Cell::GetNeighbourContent(v11, 6u) + 80) & 0x100) == 0) )
  {
    goto LABEL_25; /*0x73d00c*/
  }
  if ( LightningStorm::IsActive() ) /*0x73d00e*/
  {
    v14 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13660); /*0x73d01c*/
  }
  else if ( PsyDom::IsActive() ) /*0x73d024*/
  {
    v14 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13712); /*0x73d033*/
  }
  else if ( NukeFlash::IsActive() ) /*0x73d03b*/
  {
    v14 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13684); /*0x73d04a*/
  }
  else
  {
    v14 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13636); /*0x73d057*/
  }
  v15 = (Tactical **)(*((__int16 *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v38) + 133) + 4 * v14); /*0x73d073*/
LABEL_29:
  ebp29 = (Tactical **)((char *)v15 + *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6100)); /*0x73d0c3*/
  v17 = (AbstractClass *)*(this + 433); /*0x73d0d1*/
  aP10 = ebp29; /*0x73d0d7*/
  if ( !BYTE2(v17[99].NeedsSaveOrLink) || !*((_BYTE *)this + 1746) ) /*0x73d0e9*/
    goto LABEL_39; /*0x73d0e9*/
  if ( !*(this + 413) ) /*0x73d0f7*/
    WinAPI::Wrapper(-2147467261); /*0x73d106*/
  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 128))(*(this + 413)) ) /*0x73d114*/
  {
    v19 = (unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v39) >> 12) + 1) >> 1 << 13; /*0x73d145*/
    v20 = (int *)(*(int (__thiscall **)(int *, int *))(*this + 172))(this, v46); /*0x73d157*/
    LODWORD(v39) = (__int16)v19 - 0x3FFF; /*0x73d159*/
    v21 = v20[2]; /*0x73d161*/
    a1 = (double)SLODWORD(v39) * -0.00009587672516830327; /*0x73d16a*/
    v39 = (double)v20[1]; /*0x73d17b*/
    v22 = Math::SinCos((IUnknown *)LODWORD(a1)); /*0x73d17f*/
    LODWORD(v39) = Math::RoundToInt(v39 - v22 * 30.0); /*0x73d197*/
    v23 = Math::ArcTan2((IUnknown *)LODWORD(a1)); /*0x73d1a1*/
    LODWORD(a1) = Math::RoundToInt(v23 * 30.0 + (double)*v20); /*0x73d1ba*/
    HIDWORD(a1) = LODWORD(v39); /*0x73d1c6*/
    v43 = v21; /*0x73d1d2*/
    Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], &a1, (IUnknown *)v45); /*0x73d1d6*/
    v24 = 7 - (((unsigned int)((*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v39) >> 12) + 1) >> 1) & 7); /*0x73d1fd*/
    if ( *(this + 158) /*0x73d219*/
      || (*(unsigned __int8 (__thiscall **)(int *))(*this + 468))(this)
      || (*(unsigned __int8 (__thiscall **)(int *))(*this + 472))(this) )
    {
      ebx37 = aP5; /*0x73d28e*/
      ebp29 = aP10; /*0x73d292*/
    }
    else
    {
      v37 = (ConvertClass *)aP10; /*0x73d232*/
      v25 = (*(int (__thiscall **)(int *))(*this + 748))(this); /*0x73d236*/
      ebx37 = aP5; /*0x73d23c*/
      DrawToSurfaceSHP( /*0x73d283*/
        *(int *)&stru_87C374.__pad_579C[22532],
        *(int *)&stru_87C374.__pad_14B0[7836],
        dword_B1CF98,
        15 * v24 + (*(_DWORD *)&HouseClass_Player.__pad_5568[23248] + *(this + 334)) % 15,
        (ConvertClass *)v45,
        aP5,
        (ConvertClass *)0x2A00,
        0,
        v25 - 2,
        0,
        v37,
        0,
        0,
        0,
        0,
        0);
      ebp29 = aP10; /*0x73d288*/
    }
  }
  else
  {
LABEL_39:
    ebx37 = aP5; /*0x73d298*/
  }
  v26 = (AbstractClass *)*(this + 433); /*0x73d29c*/
  aP5 = (ConvertClass *)v26; /*0x73d2a2*/
  if ( BYTE2(v26[99].NeedsSaveOrLink) ) /*0x73d2a6*/
  {
    if ( *((_BYTE *)this + 1745) ) /*0x73d2b0*/
    {
      referenceCount = v26[47].referenceCount; /*0x73d2ba*/
      if ( referenceCount ) /*0x73d2c2*/
        *(this + 433) = referenceCount; /*0x73d2c4*/
    }
  }
  v28 = (AbstractClass *)*(this + 433); /*0x73d2d1*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(*this + 1088))(this, HouseClass_Player.field_0) ) /*0x73d2da*/
    v28 = (AbstractClass *)(*(int (__thiscall **)(int *, int))(*this + 204))(this, 1); /*0x73d2f0*/
  if ( *((_BYTE *)this + 1760) && *(_DWORD *)(*(this + 433) + 1720) ) /*0x73d302*/
    v28 = *(AbstractClass **)(*(this + 433) + 1720); /*0x73d30c*/
  if ( *((_BYTE *)this + 1668) == 0xFF ) /*0x73d315*/
  {
    if ( BYTE2(v28[15].nextArrayIndex) ) /*0x73d317*/
    {
      if ( v28[4].NeedsSaveOrLink ) /*0x73d321*/
        (*(void (__thiscall **)(int *, Tactical *, AbstractClass *, _DWORD, _DWORD, _DWORD, _DWORD, Tactical **, _DWORD))(*this + 1364))( /*0x73d359*/
          this,
          v40,
          v41,
          *(_DWORD *)ebx37->__pad_0,
          *(_DWORD *)&ebx37->field_2[2],
          *(_DWORD *)&ebx37->__pad_6[2],
          *(_DWORD *)&ebx37->__pad_6[6],
          ebp29,
          0);
    }
    else
    {
      (*(void (__thiscall **)(int *, Tactical *, AbstractClass *, _DWORD, _DWORD, _DWORD, _DWORD, Tactical **, _DWORD))(*this + 1368))( /*0x73d38f*/
        this,
        v40,
        v41,
        *(_DWORD *)ebx37->__pad_0,
        *(_DWORD *)&ebx37->field_2[2],
        *(_DWORD *)&ebx37->__pad_6[2],
        *(_DWORD *)&ebx37->__pad_6[6],
        ebp29,
        0);
    }
  }
  v30 = *(this + 435); /*0x73d395*/
  *(this + 433) = (int)aP5; /*0x73d3a2*/
  if ( v30 != -1 ) /*0x73d3a8*/
  {
    v31 = stru_B05488.field_4C + 4 * *(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v30] + 90196); /*0x73d3dc*/
    v32 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] % 14; /*0x73d3e5*/
    v36 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] % 14; /*0x73d3ec*/
    LOBYTE(v32) = 0; /*0x73d3ed*/
    v33 = (ConvertClass *)SearchMIXFile(&stru_830620.__pad_579C[64316], (IUnknown *)v32); /*0x73d3ef*/
    DrawToSurfaceSHP( /*0x73d403*/
      *(int *)&stru_87C374.__pad_579C[22532],
      *(_DWORD *)(*(_DWORD *)v31 + 780),
      v33,
      v36,
      (ConvertClass *)v44,
      ebx37,
      (ConvertClass *)0xA00,
      0,
      0,
      0,
      (ConvertClass *)ebp29,
      0,
      0,
      0,
      0,
      0);
  }
  AbstractClass::COMStub_Return0_69((Tactical *)v44, (AbstractClass *)ebx37); /*0x73d410*/
  v34 = *(this + 239); /*0x73d415*/
  v10 = *(this + 241); /*0x73d41b*/
  if ( v34 != -1 ) /*0x73d424*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v34 >= v10 ) /*0x73d430*/
      return v10; /*0x73d430*/
    v10 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v34; /*0x73d432*/
  }
  if ( v10 ) /*0x73d436*/
    LOBYTE(v10) = TechnoClass::DrawTargetLine(this); /*0x73d43a*/
  return v10; /*0x73d43f*/
}


// ==== 0x0073D450  UnitClass::ProcessResourceHarvesting  this=TechnoClass  sig=csp ====
char __thiscall sub_73D450(void *this)
{
  __int16 *v2; // ebp
  int v4; // eax
  int v5; // ebx
  double v6; // st7
  int v7; // eax
  int v8; // eax
  #72 *v9; // eax
  float v10; // [esp+0h] [ebp-28h]
  float v11; // [esp+18h] [ebp-10h]
  float v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+24h] [ebp-4h]

  v14 = *((_DWORD *)this + 39); /*0x73d465*/
  v15 = this->locationY; /*0x73d476*/
  v16 = this->locationZ; /*0x73d47d*/
  v2 = (__int16 *)Coord::To_Cell(MEMORY[0x87F7E8], &v14); /*0x73d486*/
  if ( *((_DWORD *)this + 361) ) /*0x73d488*/
    return 1; /*0x73d49d*/
  if ( *(_BYTE *)(this->q6C4 + 3598) /*0x73d4d4*/
    && ((double (__thiscall *)(void *))*(_DWORD *)(this->q2B4)(this) < 1.0
    && *((_DWORD *)v2 + 59) == 5 )
  {
    if ( *(_BYTE *)(this->q6C4 + 3599) ) /*0x73d4e0*/
    {
      Helper_486E30(v2); /*0x73d4ec*/
      Float::Accumulate((float *)this + 207, 1.0, 0); /*0x73d4fd*/
      this->q0F8 = 0; /*0x73d502*/
      v4 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5408); /*0x73d515*/
      this->q100 = dword_A8ED54[12]; /*0x73d523*/
      v4 *= 3; /*0x73d529*/
      this->currentTurretNumber = v15; /*0x73d52c*/
      this->q108 = v4; /*0x73d52f*/
      this->turretChargeTimer = v4; /*0x73d532*/
      return 1; /*0x73d540*/
    }
    v5 = BuildingClass::FindByCellHash(v2); /*0x73d554*/
    v11 = (float)*(int *)(this->q6C4 + 2048); /*0x73d55c*/
    if ( v11 - Float4::Sum((float *)this + 207) <= 1.0 ) /*0x73d574*/
    {
      v12 = (float)*(int *)(this->q6C4 + 2048); /*0x73d58c*/
      v6 = v12 - Float4::Sum((float *)this + 207); /*0x73d595*/
    }
    else
    {
      v6 = 1.0; /*0x73d576*/
    }
    v7 = Math::RoundToInt(v6); /*0x73d599*/
    v13 = CellClass::ReduceTiberium((int)v2, v7); /*0x73d5a8*/
    if ( v13 > 0 ) /*0x73d5ac*/
    {
      v10 = (float)v13; /*0x73d5b6*/
      Float::Accumulate((float *)this + 207, v10, v5); /*0x73d5b9*/
      this->q0F8 = 0; /*0x73d5be*/
      v8 = *(_DWORD *)(MEMORY[0x87F7E8][7806] + 5408); /*0x73d5d5*/
      this->q100 = dword_A8ED54[12]; /*0x73d5e1*/
      this->currentTurretNumber = v15; /*0x73d5e9*/
      this->q108 = v8; /*0x73d5ec*/
      this->turretChargeTimer = v8; /*0x73d5ef*/
      return 1; /*0x73d5fd*/
    }
  }
  else
  {
    this->q0F8 = 0; /*0x73d5fe*/
    v9 = (#72 *)dword_A8ED54[12]; /*0x73d604*/
    this->turretChargeTimer = 0; /*0x73d611*/
    this->q100 = v9; /*0x73d617*/
    this->currentTurretNumber = v15; /*0x73d61d*/
    this->q108 = 0; /*0x73d620*/
  }
  return 0; /*0x73d494*/
}


// ==== 0x0073D630  FactoryClass::CompleteProduction  this=int  sig=csp ====
int __thiscall FactoryClass::CompleteProduction(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  ObjectClass *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v10; // eax
  BuildingTypeClass *v11; // eax
  IUnknown *v12; // eax
  AbstractClass **v13; // eax
  BuildingTypeClass *v14; // edi
  void *v15; // eax
  int v16; // edi
  __int16 v17; // bx
  IUnknown *v18; // eax
  TechnoClass *v19; // edi
  MouseClass *v20; // eax
  unsigned int v21; // ebp
  int v22; // ebp
  _WORD *v23; // eax
  __int16 v24; // bx
  __int16 v25; // cx
  __int16 v26; // cx
  int v27; // ebx
  void *v28; // eax
  int v29; // eax
  int v30; // ebx
  void *v31; // eax
  BuildingTypeClass *v32; // eax
  int v33; // edx
  int *v34; // eax
  int v35; // edx
  int v36; // eax
  void *v37; // eax
  MouseClass *v38; // ebx
  int v39; // eax
  char v40; // al
  int v41; // eax
  IUnknown *v42; // ebx
  void *v43; // eax
  int v44; // ecx
  BuildingTypeClass *v45; // edx
  int v46; // eax
  BuildingTypeClass *v47; // edi
  __int16 *v48; // eax
  void *v49; // eax
  int v50; // eax
  char *v51; // eax
  int v52; // esi
  IUnknown *v53; // eax
  IUnknown *v54; // eax
  _WORD *v55; // eax
  __int16 v56; // dx
  _DWORD *v57; // eax
  AbstractClass *v58; // eax
  AbstractClass *v59; // edi
  BOOL v60; // eax
  IUnknown *v61; // eax
  int v62; // eax
  __int16 *v63; // eax
  __int16 v64; // dx
  _DWORD *v65; // eax
  _DWORD *v66; // eax
  IUnknown *v67; // eax
  int v68; // eax
  char *v69; // eax
  BuildingTypeClass *v70; // esi
  int v71; // eax
  _WORD *v72; // eax
  __int16 v73; // dx
  _DWORD *v74; // eax
  AbstractClass *v75; // edi
  char *MissionControl; // eax
  BOOL v77; // eax
  BuildingClass *FloatPositive; // ebp
  int v79; // ebx
  char v80; // cl
  AbstractClass *v81; // eax
  double v82; // st7
  int v83; // eax
  BOOL v84; // eax
  int v85; // eax
  BOOL v86; // eax
  int LandHeight; // [esp+26h] [ebp-8Ch]
  int v88; // [esp+26h] [ebp-8Ch]
  BuildingTypeClass *v89; // [esp+32h] [ebp-80h]
  char v90; // [esp+36h] [ebp-7Ch]
  char v91; // [esp+44h] [ebp-6Eh]
  bool v92; // [esp+45h] [ebp-6Dh]
  BuildingTypeClass *v93; // [esp+46h] [ebp-6Ch] BYREF
  MouseClass *v94; // [esp+4Ah] [ebp-68h] BYREF
  int v95; // [esp+4Eh] [ebp-64h] BYREF
  int v96; // [esp+52h] [ebp-60h] BYREF
  BuildingTypeClass *v97; // [esp+56h] [ebp-5Ch]
  AbstractClass *v98; // [esp+5Ah] [ebp-58h]
  AbstractClass *v99; // [esp+5Eh] [ebp-54h] BYREF
  AbstractClass *v100; // [esp+62h] [ebp-50h] BYREF
  AbstractClass *v101; // [esp+66h] [ebp-4Ch] BYREF
  char v102[4]; // [esp+6Ah] [ebp-48h] BYREF
  char v103[8]; // [esp+6Eh] [ebp-44h] BYREF
  MouseClass *v104; // [esp+76h] [ebp-3Ch] BYREF
  MouseClass *v105; // [esp+7Ah] [ebp-38h] BYREF
  int v106; // [esp+7Eh] [ebp-34h] BYREF
  int v107; // [esp+82h] [ebp-30h] BYREF
  int v108; // [esp+86h] [ebp-2Ch]
  int v109; // [esp+8Ah] [ebp-28h]
  _DWORD a1[3]; // [esp+8Eh] [ebp-24h] BYREF
  int v111[4]; // [esp+9Ah] [ebp-18h] BYREF
  int v112; // [esp+AAh] [ebp-8h] BYREF

  if ( *(this + 185) )
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 444))(this);
    if ( Cell::IsBridge(v2) )
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 444))(this);
      v4 = (ObjectClass *)Cell::IsBridge(v3);
      BuildingClass::EmptyBunker(v4);
    }
    goto LABEL_4;
  }
  v8 = *(this + 433);
  if ( *(int *)(v8 + 1504) <= 0 )
  {
    if ( *(_BYTE *)(v8 + 1708) && !*(_BYTE *)(v8 + 3603) )
    {
      v47 = (BuildingTypeClass *)*this;
      v48 = (__int16 *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &v106);
      v49 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v48);
      (*(void (__thiscall **)(_DWORD *, void *))&v47->DebrisTypes[180])(this, v49);
      if ( !(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, int))(*this + 960))(this, *(this + 173), 0, 1) )
        (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 972))(this, *(this + 173), 0);
      return Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2) + 14;
    }
LABEL_4:
    v5 = *(this + 433);
    if ( *(_BYTE *)(v5 + 3598) || *(_BYTE *)(v5 + 3599) )
    {
      if ( Team::AllMembersValid(this) )
      {
        if ( (((unsigned __int16)(*ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v106) >> 7) + 1) & 0x1FE) != 0x80 )
        {
          if ( !*((_BYTE *)this + 1711) )
          {
            v53 = (IUnknown *)*(this + 413);
            LOWORD(v101) = 0x4000;
            if ( !v53 )
              WinAPI::Wrapper(-2147467261);
            (*(void (__stdcall **)(_DWORD, AbstractClass *))(*(_DWORD *)*(this + 413) + 76))(*(this + 413), v101);
          }
          return 5;
        }
        if ( !*((_BYTE *)this + 1745) )
        {
          *(this + 62) = 0;
          *((_BYTE *)this + 1745) = 1;
          v54 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
          *(this + 67) = 1;
          *(this + 64) = v54;
          *(this + 65) = v112;
          *(this + 66) = 1;
          if ( *(_BYTE *)(*(this + 433) + 3598) )
          {
            v55 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &v106);
            v56 = *(_WORD *)&stru_89E138.__pad_14B0[186] + v55[1];
            LOWORD(v100) = *v55 + *(_WORD *)&stru_89E138.__pad_14B0[184];
            HIWORD(v100) = v56;
            v101 = v100;
            v57 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v101);
            v58 = (AbstractClass *)Cell::IsBridge(v57);
            v59 = v58;
            if ( v58 )
            {
              v60 = BuildingClass::GetHealthRatio((int *)v58->__pad_0) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                                    + 5888);
              BuildingClass::PlayUpgradeAnim((ObjectClass *)v59, (IUnknown *)7, (IUnknown *)v60, 0, 0);
            }
          }
          *(this + 47) = 3;
          goto LABEL_150;
        }
        if ( *(this + 47) == 3 )
        {
          v72 = (_WORD *)(*(int (__thiscall **)(_DWORD *, MouseClass **))(*this + 440))(this, &v105);
          v73 = *(_WORD *)&stru_89E138.__pad_14B0[186] + v72[1];
          LOWORD(v100) = *(_WORD *)&stru_89E138.__pad_14B0[184] + *v72;
          HIWORD(v100) = v73;
          v99 = v100;
          v74 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v99);
          v75 = (AbstractClass *)Cell::IsBridge(v74);
          if ( !v75 )
          {
            if ( Team::AllMembersValid(this) )
              (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
            (*(void (__thiscall **)(_DWORD *, int, int))(*this + 488))(this, 10, 1);
            MissionControl = MissionClass::GetMissionControl(this);
            v70 = (BuildingTypeClass *)Math::RoundToInt(*((double *)MissionControl + 2) * 900.0);
            v71 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2);
            return (int)v70 + v71;
          }
          if ( *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5416) * 900.0 <= (double)(int)*(this + 62) )
          {
            (*(void (__thiscall **)(AbstractClass *))(*(_DWORD *)v75->__pad_0 + 1128))(v75);
            if ( !*(_DWORD *)&v75[39].__pad_0[8] )
            {
              v77 = BuildingClass::GetHealthRatio((int *)v75->__pad_0) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                                    + 5888);
              BuildingClass::PlayUpgradeAnim((ObjectClass *)v75, (IUnknown *)0xA, (IUnknown *)v77, 0, 0);
            }
            FloatPositive = (BuildingClass *)FirstFloatPositive((float *)this + 207);
            v79 = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v75->__pad_0 + 60))(v75);
            v80 = *(_BYTE *)(v79 + 492);
            v81 = *(AbstractClass **)(v79 + 21388);
            v100 = v81;
            if ( !v80 && *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
              v100 = (AbstractClass *)((char *)v81
                                     + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4900)
                                                 + 4 * *(_DWORD *)(v79 + 388)));
            if ( FloatPositive == (BuildingClass *)-1 )
              v94 = 0;
            else
              *(float *)&v94 = FloatArray::Get((float *)this + 207, FloatPositive);
            *(float *)&v100 = (double)(int)v100
                            * *(float *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3900)
                            * *(float *)&v94;
            if ( FloatPositive == (BuildingClass *)-1
              || (v82 = Float::SubtractClamped((float *)this + 207, (BuildingTypeClass *)v94, (IUnknown *)FloatPositive),
                  *(float *)&v94 = v82,
                  v82 <= 0.0) )
            {
              if ( *(_BYTE *)(v75[36].uniqueId + 5819) )
              {
                v84 = BuildingClass::GetHealthRatio((int *)v75->__pad_0) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                                      + 5888);
                BuildingClass::PlayUpgradeAnim((ObjectClass *)v75, (IUnknown *)8, (IUnknown *)v84, 0, 0);
              }
              *(this + 47) = 4;
              if ( *(_DWORD *)&v75[39].__pad_0[8] )
                BuildingClass::ClearAnims((int *)v75->__pad_0, (TechnoClass *)0xA);
            }
            else if ( *(_BYTE *)(*(this + 433) + 3599) )
            {
              v83 = Math::RoundToInt(*(float *)&v94);
              FactoryClass::AccumulateCreditsProgress((float *)*(this + 135), v83, (int)FloatPositive);
              *(this + 62) = 0;
            }
            else
            {
              HouseClass::GiveTiberium_Storage((_DWORD *)v79, (AbstractClass *)v94, FloatPositive);
              if ( *(float *)&v100 > 0.0 )
                HouseClass::GiveTiberium_Storage((_DWORD *)v79, v100, FloatPositive);
              *(this + 62) = 0;
            }
          }
          if ( *(this + 361) )
          {
            v85 = *(this + 45);
            if ( v85 != -1 && v85 != 10 )
            {
              if ( *(_BYTE *)(v75[36].uniqueId + 5819) )
              {
                v86 = BuildingClass::GetHealthRatio((int *)v75->__pad_0) <= *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                                      + 5888);
                BuildingClass::PlayUpgradeAnim((ObjectClass *)v75, (IUnknown *)8, (IUnknown *)v86, 0, 0);
              }
              *(this + 47) = 4;
              if ( *(_DWORD *)&v75[39].__pad_0[8] )
                BuildingClass::ClearAnims((int *)v75->__pad_0, (TechnoClass *)0xA);
            }
          }
        }
        else
        {
          if ( *(this + 47) != 4 )
            goto LABEL_150;
          if ( *(_BYTE *)(*(this + 433) + 3599) )
          {
            v61 = (IUnknown *)*(this + 361);
            *((_BYTE *)this + 1745) = 0;
            if ( !v61 || (v62 = *(this + 45), v62 == -1) || v62 == 10 )
            {
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 10, 0);
              if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 512))(this) )
                goto LABEL_150;
              if ( Team::AllMembersValid(this) )
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
            }
            else
            {
              if ( !*(this + 413) )
                WinAPI::Wrapper(-2147467261);
              if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
                (*(void (__thiscall **)(_DWORD *))(*this + 1280))(this);
              if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 512))(this) )
                goto LABEL_150;
            }
            (*(void (__thiscall **)(_DWORD *))(*this + 492))(this);
            goto LABEL_150;
          }
          v63 = (__int16 *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 440))(this, &v106);
          v64 = *v63;
          LOWORD(v63) = *(_WORD *)&stru_89E138.__pad_14B0[186] + v63[1];
          LOWORD(v100) = *(_WORD *)&stru_89E138.__pad_14B0[184] + v64;
          HIWORD(v100) = (_WORD)v63;
          v101 = v100;
          v65 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v101);
          v66 = Cell::IsBridge(v65);
          if ( !v66 || !*(_BYTE *)(v66[328] + 5819) || !v66[351] )
          {
            v67 = (IUnknown *)*(this + 361);
            *((_BYTE *)this + 1745) = 0;
            if ( !v67 || (v68 = *(this + 45), v68 == -1) || v68 == 10 )
            {
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 10, 0);
              if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 512))(this) )
                goto LABEL_150;
              if ( Team::AllMembersValid(this) )
                (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
            }
            else
            {
              if ( !*(this + 413) )
                WinAPI::Wrapper(-2147467261);
              if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
                (*(void (__thiscall **)(_DWORD *))(*this + 1280))(this);
              if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 512))(this) )
                goto LABEL_150;
            }
            (*(void (__thiscall **)(_DWORD *))(*this + 492))(this);
            goto LABEL_150;
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1);
        *((_BYTE *)this + 1745) = 0;
        if ( !*(this + 413) )
          WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
          (*(void (__thiscall **)(_DWORD *))(*this + 1280))(this);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 512))(this) )
        {
          (*(void (__thiscall **)(_DWORD *))(*this + 492))(this);
          return 1;
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(v5 + 1028) )
      {
        v6 = *(this + 47);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
            {
              if ( *((_BYTE *)this + 1676) )
              {
                if ( !TechnoClass::Deploy(this) )
                {
                  if ( *(this + 361) )
                    *((_BYTE *)this + 1676) = 0;
                }
              }
              else
              {
                (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 1156))(this, 0, 1);
                (*(void (__thiscall **)(_DWORD *))(*this + 492))(this);
              }
            }
LABEL_90:
            v51 = MissionClass::GetMissionControl(this);
            v52 = Math::RoundToInt(*((double *)v51 + 2) * 900.0);
            return v52
                 + Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2);
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int))(*this + 628))(this, 3);
          *(this + 376) = -1;
          *(this + 47) = 1;
        }
        if ( !*(this + 413) )
          WinAPI::Wrapper(-2147467261);
        if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
        {
          v50 = *(this + 45);
          if ( v50 != -1 && v50 != 16 )
            (*(void (__thiscall **)(_DWORD *))(*this + 492))(this);
        }
        else
        {
          TechnoClass::Deploy(this);
          if ( *((_BYTE *)this + 144) )
          {
            if ( *((_BYTE *)this + 1676) )
            {
              *(this + 47) = 2;
            }
            else if ( (unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135))
                   || !*(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
            {
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 5, 0);
            }
            else
            {
              (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 15, 0);
            }
          }
        }
        goto LABEL_90;
      }
      if ( !*(_BYTE *)(v5 + 3603) )
        return AbstractClass::COMStub_143();
      if ( *((_BYTE *)this + 1760) )
        UnitClass::SimpleDeployerUndeploy(this);
      else
        UnitClass::SimpleDeployerDeploy(this);
      if ( !*((_BYTE *)this + 1761) && !*((_BYTE *)this + 1762) && !*((_BYTE *)this + 308) )
      {
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 5, 0);
        (*(void (__thiscall **)(_DWORD *))(*this + 492))(this);
        return AbstractClass::COMStub_143();
      }
    }
    return 1;
  }
  switch ( *(this + 47) )
  {
    case 0:
      if ( !*(this + 413) )
        WinAPI::Wrapper(-2147467261);
      if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)*(this + 413) + 16))(*(this + 413)) )
        return 10;
      v100 = *(AbstractClass **)(*(int (__thiscall **)(_DWORD *, char *))(*this + 440))(this, v102);
      v10 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v100);
      if ( !*(this + 361) && v10[59] == 2 )
      {
        v11 = (BuildingTypeClass *)*this;
        v95 = 0;
        v12 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, char *, int, int))&v11->__pad_14D[107])(this, v103, 2, -1);
        v13 = (AbstractClass **)LayerClass::Pathfinding_Find(
                                  (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                  (IUnknown *)&v105,
                                  (IUnknown *)&v105,
                                  v12,
                                  0,
                                  0,
                                  (IUnknown *)1,
                                  (IUnknown *)1,
                                  0,
                                  0,
                                  0,
                                  (IUnknown *)1,
                                  (IUnknown *)&v95,
                                  0,
                                  0,
                                  (MouseClass *)v89,
                                  v90);
        v14 = (BuildingTypeClass *)*this;
        v100 = *v13;
        v15 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v100);
        (*(void (__thiscall **)(_DWORD *, void *, int))&v14->DebrisTypes[364])(this, v15, 1);
        return 10;
      }
      v16 = *(this + 69);
      v17 = (*(int (__thiscall **)(_DWORD *, _DWORD, int *))(*this + 772))(this, 0, &v96);
      if ( !v16 || v96 == dword_B1CFB8 )
      {
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 5, 0);
        goto LABEL_150;
      }
      if ( TechnoClass::OwnerHasPower(this) )
        *(this + 441) = v16 != 1;
      v18 = (IUnknown *)*(this + 413);
      LOWORD(v98) = v17 << 13;
      if ( !v18 )
        WinAPI::Wrapper(-2147467261);
      (*(void (__stdcall **)(_DWORD, AbstractClass *))(*(_DWORD *)*(this + 413) + 76))(*(this + 413), v98);
      *(this + 47) = 1;
      return 1;
    case 1:
      if ( *((_BYTE *)this + 1711) )
        goto LABEL_150;
      *(this + 47) = 3;
      return 1;
    case 3:
      if ( *(this + 69) <= *(this + 441) )
      {
        *(this + 47) = 4;
        goto LABEL_150;
      }
      v19 = (TechnoClass *)FootClass::PopAndProcess(this);
      if ( !v19 )
        goto LABEL_150;
      v91 = 1;
      LOWORD(v100) = *(_WORD *)ProgressTimer::GetValue((_WORD *)this + 452, (IUnknown *)&v104) + 0x7FFF;
      LOBYTE(v20) = 0;
      v21 = (((unsigned int)v100 >> 12) + 1) >> 1;
      v94 = 0;
      v101 = (AbstractClass *)v21;
      break;
    case 4:
      (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 488))(this, 5, 0);
      *((_BYTE *)this + 184) = 1;
      goto LABEL_150;
    default:
      goto LABEL_150;
  }
  while ( 1 )
  {
    v22 = ((_BYTE)v20 + (_BYTE)v21) & 7;
    v23 = (_WORD *)(*(int (__thiscall **)(_DWORD *, MouseClass **))(*this + 440))(this, &v105);
    v24 = v23[1] + *(_WORD *)&stru_89E138.__pad_14B0[4 * (v22 & 7) + 162];
    LOWORD(v97) = *(_WORD *)&stru_89E138.__pad_14B0[4 * (v22 & 7) + 160] + *v23;
    v25 = *(_WORD *)&stru_89E138.__pad_14B0[4 * (v22 & 7) + 160] + (_WORD)v97;
    HIWORD(v97) = v24;
    LOWORD(v98) = v25;
    v26 = v24 + *(_WORD *)&stru_89E138.__pad_14B0[4 * (v22 & 7) + 162];
    v27 = *(_DWORD *)v19->__pad_0;
    HIWORD(v98) = v26;
    v93 = v97;
    v100 = v98;
    LandHeight = ObjectClass::GetLandHeight(this);
    v28 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v100);
    v29 = (*(int (__thiscall **)(TechnoClass *, void *, int, int, _DWORD, int))(v27 + 428))(
            v19,
            v28,
            v22,
            LandHeight,
            0,
            1);
    v30 = *(_DWORD *)v19->__pad_0;
    v92 = v29 == 0;
    v88 = ObjectClass::GetLandHeight(this);
    v31 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v93);
    if ( !(*(int (__thiscall **)(TechnoClass *, void *, int, int, _DWORD, int))(v30 + 428))(v19, v31, v22, v88, 0, 1) )
      break;
    if ( !v91 )
      goto LABEL_41;
LABEL_45:
    v32 = (BuildingTypeClass *)v94;
    if ( v94 == (MouseClass *)7 )
    {
      v32 = 0;
      v91 = 0;
    }
LABEL_42:
    v20 = (MouseClass *)&v32->vtable0[1];
    v94 = v20;
    if ( (int)v20 >= 8 )
      goto LABEL_63;
    LOBYTE(v21) = (_BYTE)v101;
  }
  if ( !v92 && v91 )
    goto LABEL_45;
  if ( (*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v93) + 80) & 0x100) != 0 )
  {
LABEL_41:
    v32 = (BuildingTypeClass *)v94;
    goto LABEL_42;
  }
  ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
  v109 = 0;
  v33 = *(_DWORD *)v19->__pad_0;
  v108 = (SHIWORD(v93) << 8) + 128;
  v107 = ((__int16)v93 << 8) + 128;
  if ( (*(int (__thiscall **)(TechnoClass *))(v33 + 44))(v19) == 15 )
  {
    v34 = ObjectPlacement::CalcPosition_Wrapper((MouseClass *)v111, (IUnknown *)&v107, 0);
    v107 = *v34;
    v108 = v34[1];
    v35 = v34[2];
  }
  else
  {
    v99 = 0;
    v36 = (*(int (__thiscall **)(TechnoClass *, int))(*(_DWORD *)v19->__pad_0 + 132))(v19, -1);
    v94 = (MouseClass *)*LayerClass::Pathfinding_Find(
                           (IUnknown *)&stru_87C374.__pad_14B0[8132],
                           (IUnknown *)&v94,
                           (IUnknown *)&v107,
                           (IUnknown *)&v94,
                           *(IUnknown **)(v36 + 1660),
                           0,
                           0,
                           (IUnknown *)1,
                           (IUnknown *)1,
                           0,
                           0,
                           0,
                           (IUnknown *)1,
                           (IUnknown *)&v99,
                           0,
                           0,
                           (char)v89);
    v37 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v94);
    v38 = (MouseClass *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v37 + 72))(v37, &v112);
    v39 = ((__int16)((int)v38->field_4 / 256) << 8) + 128;
    v35 = 0;
    v107 = ((__int16)(v38->field_0 / 256) << 8) + 128;
    v108 = v39;
  }
  LOWORD(v101) = (_WORD)v22 << 13;
  v109 = v35;
  v40 = (*(int (__thiscall **)(TechnoClass *, int *, _DWORD))(*(_DWORD *)v19->__pad_0 + 216))(
          v19,
          &v107,
          (unsigned __int8)((((unsigned int)v101 >> 7) + 1) >> 1));
  --*(_DWORD *)&HouseClass_Player.__pad_5568[21752];
  if ( !v40 )
  {
LABEL_63:
    CellClass::AddObject(this + 69, (IUnknown *)v19);
    if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*this + 132))(this) + 2053) )
      (*(void (__thiscall **)(_DWORD *, TechnoClass *))(*this + 1236))(this, v19);
    (*(void (__thiscall **)(TechnoClass *))(*(_DWORD *)v19->__pad_0 + 284))(v19);
    goto LABEL_150;
  }
  if ( *(_BYTE *)(*(this + 433) + 1508) )
    TechnoClass::ExitedOpenTopped(v19);
  if ( *(_BYTE *)(*(this + 433) + 1508) && (void *)*(this + 135) != v19->focus )
    (*(void (__thiscall **)(TechnoClass *, _DWORD))(*(_DWORD *)v19->__pad_0 + 968))(v19, 0);
  v41 = *(_DWORD *)v19->__pad_0;
  *(_DWORD *)&v19->__pad_115[7] = 0;
  (*(void (__thiscall **)(TechnoClass *, int, _DWORD, BuildingTypeClass *))(v41 + 488))(v19, 2, 0, v89);
  v42 = *(IUnknown **)v19->__pad_0;
  if ( BYTE2(v93) )
    v43 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v101);
  else
    v43 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v94);
  (*(void (__thiscall **)(TechnoClass *, void *))&v42->__pad_430[80])(v19, v43);
  v44 = *(this + 373);
  if ( v44 )
    TeamClass::AddMember(v44, (IUnknown *)v19, 0);
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *, int))(*this + 132))(this, 1) + 1384) != -1 )
  {
    a1[0] = *(this + 39);
    a1[1] = *(this + 40);
    v45 = (BuildingTypeClass *)*this;
    a1[2] = *(this + 41);
    v46 = (*(int (__thiscall **)(_DWORD *))&v45->Name[32])(this);
    PlayAudioAt2(*(IUnknown **)(v46 + 1384), a1, 0);
  }
LABEL_150:
  v69 = MissionClass::GetMissionControl(this);
  v70 = (BuildingTypeClass *)Math::RoundToInt(*((double *)v69 + 2) * 900.0);
  v71 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2);
  return (int)v70 + v71;
}


// ==== 0x0073E5E0  VoxelTypeClass::ReadINI  this=int  sig=csp ====
int __thiscall VoxelTypeClass::ReadINI(int *this)
{
  int v2; // eax
  _DWORD *v3; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  char v8; // bl
  int v9; // eax
  int v10; // eax
  char v11; // bl
  int v12; // eax
  int (__stdcall ***Checked)(_DWORD, void *, TechnoClass **); // eax
  int v14; // esi
  TechnoClass *v15; // eax
  TechnoClass *v16; // edi
  IUnknown *v17; // eax
  int v18; // eax
  int v19; // eax
  IUnknown *v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int *v24; // eax
  IUnknown *v25; // eax
  char v26; // al
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // edi
  _DWORD *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  double v34; // st7
  int v35; // eax
  int v36; // esi
  _DWORD *v37; // edi
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  double v43; // st7
  int v44; // ecx
  int v45; // esi
  int v46; // eax
  BuildingTypeClass *v47; // edi
  int v48; // esi
  void *v49; // eax
  _DWORD *v50; // edi
  _DWORD *v51; // eax
  int v52; // ecx
  int v53; // edx
  int v54; // eax
  double v55; // st7
  _DWORD *v56; // eax
  IUnknown *v57; // eax
  int v58; // ecx
  int v59; // esi
  __int16 *PlacementCellsAlt; // eax
  void *v61; // eax
  char *MissionControl; // eax
  IUnknown *v63; // esi
  TechnoClass *v64; // [esp+4Ch] [ebp-54h] BYREF
  TechnoClass *aP2; // [esp+50h] [ebp-50h]
  int v66; // [esp+54h] [ebp-4Ch] BYREF
  TechnoClass *v67; // [esp+58h] [ebp-48h] BYREF
  char v68[4]; // [esp+5Ch] [ebp-44h] BYREF
  char v69[4]; // [esp+60h] [ebp-40h] BYREF
  int v70; // [esp+64h] [ebp-3Ch] BYREF
  int v71; // [esp+68h] [ebp-38h] BYREF
  int v72; // [esp+6Ch] [ebp-34h]
  int v73; // [esp+70h] [ebp-30h]
  int v74; // [esp+74h] [ebp-2Ch]
  int v75; // [esp+78h] [ebp-28h] BYREF
  int v76; // [esp+7Ch] [ebp-24h]
  int v77; // [esp+80h] [ebp-20h]
  _BYTE v78[12]; // [esp+84h] [ebp-1Ch] BYREF
  _BYTE v79[8]; // [esp+90h] [ebp-10h] BYREF
  int v80; // [esp+98h] [ebp-8h]

  v2 = *(this + 433); /*0x73e5e9*/
  if ( *(_BYTE *)(v2 + 1517) && *(_BYTE *)(v2 + 1516) && (v3 = (_DWORD *)*(this + 182)) != 0 ) /*0x73e60b*/
  {
    BuildingClass::ProcessEnterUnit(v3); /*0x73e60d*/
  }
  else
  {
    if ( !*(_BYTE *)(v2 + 3598) && !*(_BYTE *)(v2 + 3599) ) /*0x73e621*/
      return 450; /*0x73e637*/
    if ( !*(_DWORD *)(v2 + 1016) && !(unsigned __int8)House::IsCurrentPlayer((#375 *)*(this + 135)) /*0x73e67d*/
      || (v5 = *(this + 433), v6 = 0, *(int *)(v5 + 1016) <= 0) )
    {
LABEL_10:
      (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 5, 0); /*0x73e651*/
      return 1; /*0x73e66c*/
    }
    while ( DynamicVector::GetOrGrow( /*0x73e6a2*/
              (_DWORD *)(*(this + 135) + 21760),
              *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)(v5 + 1004) + 4 * v6) + 3576)) <= 0 )
    {
      v5 = *(this + 433); /*0x73e6a4*/
      if ( ++v6 >= *(_DWORD *)(v5 + 1016) ) /*0x73e6b1*/
        goto LABEL_10; /*0x73e6b1*/
    }
    v7 = *(this + 433); /*0x73e6cf*/
    v8 = *(_BYTE *)(v7 + 3284); /*0x73e6de*/
    switch ( *(this + 47) ) /*0x73e6ea*/
    {
      case 0: /*0x73e6ea*/
        if ( !*(_BYTE *)(v7 + 3599) && ((double (__thiscall *)(int *))*(_DWORD *)(*this + 692))(this) >= 1.0 ) /*0x73e711*/
        {
          *(this + 47) = 2; /*0x73e714*/
          return 1; /*0x73e729*/
        }
        v9 = *(this + 134); /*0x73e72a*/
        LOBYTE(aP2) = 1; /*0x73e730*/
        if ( v9 ) /*0x73e737*/
        {
          (*(void (__thiscall **)(int *, int, int))(*this + 1152))(this, v9, 1); /*0x73e741*/
          TechnoClass::SetFocus(this, 0); /*0x73e74b*/
          LOBYTE(aP2) = 0; /*0x73e750*/
        }
        v10 = *(this + 433); /*0x73e755*/
        *((_BYTE *)this + 1746) = 0; /*0x73e75b*/
        if ( *(_BYTE *)(v10 + 3599) ) /*0x73e762*/
        {
          v11 = FootClass::MoveToWeed(this, *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6012) / 256); /*0x73e78c*/
        }
        else
        {
          v12 = *(this + 413); /*0x73e793*/
          v64 = 0; /*0x73e7a1*/
          if ( !v12 ) /*0x73e7a9*/
            goto LABEL_31; /*0x73e7a9*/
          Checked = (int (__stdcall ***)(_DWORD, void *, TechnoClass **))Stream::GetChecked(this + 413); /*0x73e7ab*/
          v14 = (**Checked)(Checked, &unk_818858, &v67); /*0x73e7bf*/
          if ( v14 >= 0 ) /*0x73e7c3*/
          {
            v16 = v67; /*0x73e7d2*/
            ComPtr::Release_Alt((int *)&v64); /*0x73e7da*/
            v15 = v16; /*0x73e7df*/
          }
          else
          {
            ComPtr::Release_Alt((int *)&v64); /*0x73e7c9*/
            v15 = 0; /*0x73e7ce*/
          }
          v64 = v15; /*0x73e7e3*/
          if ( v14 < 0 && v14 != -2147467262 ) /*0x73e7ef*/
            WinAPI::Wrapper(v14); /*0x73e7f2*/
          if ( !v15 ) /*0x73e7fd*/
LABEL_31:
            WinAPI::Wrapper(-2147467261); /*0x73e804*/
          (*(void (__stdcall **)(TechnoClass *, _BYTE *))(*(_DWORD *)v15->__pad_0 + 12))(v15, v79); /*0x73e815*/
          if ( !memcmp(v79, &g_CLSID_HoverLocomotion, 0x10u) && *(this + 361) ) /*0x73e82c*/
            (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x73e83e*/
          v11 = FootClass::MoveToTiberium( /*0x73e869*/
                  this,
                  *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6012) / 256,
                  aP2);
          if ( v64 ) /*0x73e871*/
            (*(void (__stdcall **)(TechnoClass *))(*(_DWORD *)v64->__pad_0 + 8))(v64); /*0x73e876*/
        }
        if ( v11 ) /*0x73e87b*/
        {
          *((_BYTE *)this + 1746) = 1; /*0x73e87d*/
          v17 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x73e884*/
          *(this + 67) = 2; /*0x73e894*/
          *(this + 64) = (int)v17; /*0x73e89b*/
          *(this + 65) = v76; /*0x73e8a2*/
          *(this + 66) = 2; /*0x73e8aa*/
          *(this + 62) = 0; /*0x73e8ad*/
          *(this + 47) = 1; /*0x73e8b7*/
          return 1; /*0x73e8c2*/
        }
        if ( *(this + 361) ) /*0x73e8c3*/
        {
          *((_BYTE *)this + 976) = 0; /*0x73e925*/
          break; /*0x73e92c*/
        }
        v18 = *(this + 134); /*0x73e8cd*/
        if ( v18 ) /*0x73e8d5*/
        {
          (*(void (__thiscall **)(int *, int, int))(*this + 1152))(this, v18, 1); /*0x73e8df*/
          break; /*0x73e8e5*/
        }
        v19 = *(this + 433); /*0x73e8ea*/
        *(this + 47) = 4; /*0x73e8f0*/
        *((_BYTE *)this + 976) = 1; /*0x73e8fa*/
        if ( *(_BYTE *)(v19 + 3598) ) /*0x73e901*/
          *(_BYTE *)(*(this + 135) + 578) = 1; /*0x73e911*/
        return 105; /*0x73e924*/
      case 1: /*0x73e6ea*/
        if ( !*(this + 67) ) /*0x73e931*/
        {
          *(this + 62) = 0; /*0x73e93b*/
          v20 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x73e94b*/
          v21 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5408); /*0x73e951*/
          *(this + 67) = v21; /*0x73e95d*/
          *(this + 64) = (int)v20; /*0x73e963*/
          *(this + 65) = v76; /*0x73e969*/
          *(this + 66) = v21; /*0x73e96c*/
        }
        if ( *(this + 62) < 9 ) /*0x73e976*/
          return 1; /*0x73e97b*/
        if ( UnitClass::ProcessResourceHarvesting(this) ) /*0x73e987*/
          return 1; /*0x73ee99*/
        v22 = *(this + 433); /*0x73e994*/
        *((_BYTE *)this + 1746) = 0; /*0x73e99a*/
        if ( *(_BYTE *)(v22 + 3598) && ((double (__thiscall *)(int *))*(_DWORD *)(*this + 692))(this) == 1.0 ) /*0x73e9c4*/
        {
          v23 = *(this + 433); /*0x73e9ca*/
          *(this + 47) = 2; /*0x73e9d0*/
          if ( *(_BYTE *)(v23 + 3598) ) /*0x73e9da*/
            v24 = (int *)(*(int (__thiscall **)(int *, char *, int, _DWORD))(*this + 824))( /*0x73ea09*/
                           this,
                           v68,
                           *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6008) / 256,
                           0);
          else
            v24 = BuildingClass::Validate( /*0x73ea31*/
                    this,
                    (TechnoClass *)v69,
                    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6008) / 256);
          v64 = (TechnoClass *)*v24; /*0x73ea3f*/
          if ( v64 == (TechnoClass *)dword_B1CFB8 ) /*0x73ea43*/
          {
            TechnoClass::SetFocus(this, 0); /*0x73ea7b*/
          }
          else
          {
            v25 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v64); /*0x73ea5d*/
            TechnoClass::SetFocus(this, v25); /*0x73ea65*/
          }
          return 1; /*0x73ea83*/
        }
        else
        {
          if ( *(_BYTE *)(*(this + 433) + 3598) ) /*0x73ea93*/
            v26 = FootClass::MoveToTiberium( /*0x73eab9*/
                    this,
                    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6008) / 256,
                    0);
          else
            v26 = FootClass::MoveToWeed(this, *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6008) / 256); /*0x73eadb*/
          if ( v26 || *(this + 361) ) /*0x73eae4*/
          {
            *(this + 47) = 1; /*0x73eb0f*/
            *((_BYTE *)this + 1746) = 1; /*0x73eb19*/
            return 1; /*0x73eb22*/
          }
          else
          {
            TechnoClass::SetFocus(this, 0); /*0x73eaf2*/
            *(this + 47) = 2; /*0x73eaf8*/
            return 1; /*0x73eb04*/
          }
        }
      case 2: /*0x73e6ea*/
        if ( *(this + 361) /*0x73eb49*/
          && v8
          && (*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1320))(this, v7 + 1000, 0, 0) )
        {
          FootClass::ClearPathIndex(this); /*0x73eb55*/
        }
        if ( *(this + 361) ) /*0x73eb5a*/
          break; /*0x73eb62*/
        v27 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD))(*this + 1320))(this, *(this + 433) + 1000, 0, 0); /*0x73eb7e*/
        v28 = v27; /*0x73eb86*/
        if ( v8 ) /*0x73eb88*/
        {
          if ( !v27 ) /*0x73edc2*/
            goto LABEL_75; /*0x73edc2*/
          v50 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v27 + 72))(v27, v79); /*0x73edd7*/
          v51 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v78); /*0x73ede0*/
          v52 = *v51 - *v50; /*0x73ede7*/
          v53 = v51[1]; /*0x73ede9*/
          v54 = v51[2]; /*0x73edec*/
          v72 = v52; /*0x73edef*/
          v73 = v53 - v50[1]; /*0x73edff*/
          v74 = v54 - v50[2]; /*0x73ee0c*/
          v55 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x73ee2d*/
                                              (double)v74 * (double)v74
                                            + (double)v73 * (double)v73
                                            + (double)v72 * (double)v72));
          if ( (int)Math::RoundToInt(v55) > *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3452) << 8 ) /*0x73ee4b*/
            goto LABEL_75; /*0x73ee4b*/
        }
        else
        {
          if ( !v27 ) /*0x73eb90*/
            goto LABEL_75; /*0x73eb90*/
          v29 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v27 + 72))(v27, v78); /*0x73eba5*/
          v30 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v79); /*0x73ebae*/
          v31 = *v30 - *v29; /*0x73ebb5*/
          v32 = v30[1]; /*0x73ebb7*/
          v33 = v30[2]; /*0x73ebba*/
          v72 = v31; /*0x73ebbd*/
          v73 = v32 - v29[1]; /*0x73ebcd*/
          v74 = v33 - v29[2]; /*0x73ebda*/
          v34 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x73ebfb*/
                                              (double)v74 * (double)v74
                                            + (double)v73 * (double)v73
                                            + (double)v72 * (double)v72));
          if ( (int)Math::RoundToInt(v34) > *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3448) << 8 ) /*0x73ec19*/
            goto LABEL_75; /*0x73ec19*/
        }
        if ( (*(int (__thiscall **)(int *, int, int))(*this + 632))(this, 2, v28) == 1 ) /*0x73ee62*/
        {
          *(this + 47) = 3; /*0x73ee68*/
          break; /*0x73ee72*/
        }
LABEL_75:
        ++*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x73ec1f*/
        v35 = (*(int (__thiscall **)(int *, int, _DWORD, int))(*this + 1320))(this, *(this + 433) + 1000, 0, 1); /*0x73ec41*/
        v36 = v35; /*0x73ec4d*/
        --*(_DWORD *)&HouseClass_Player.__pad_5568[21752]; /*0x73ec52*/
        if ( v35 ) /*0x73ec58*/
        {
          v37 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v35 + 72))(v35, v79); /*0x73ec6d*/
          v38 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 72))(this, v78); /*0x73ec76*/
          v39 = *v38 - *v37; /*0x73ec7d*/
          v40 = v38[1]; /*0x73ec7f*/
          v41 = v38[2]; /*0x73ec82*/
          v72 = v39; /*0x73ec85*/
          v42 = v37[2]; /*0x73ec91*/
          v73 = v40 - v37[1]; /*0x73ec94*/
          v74 = v41 - v42; /*0x73ec9e*/
          v43 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64( /*0x73ecc3*/
                                              (double)v72 * (double)v72
                                            + (double)(v41 - v42) * (double)(v41 - v42)
                                            + (double)v73 * (double)v73));
          if ( (int)Math::RoundToInt(v43) > 768 || v8 ) /*0x73ecd9*/
          {
            v44 = v36 + 156; /*0x73ecdf*/
            v45 = *(_DWORD *)(v36 + 1312); /*0x73ece5*/
            v46 = *(_DWORD *)v44; /*0x73eceb*/
            v47 = *(BuildingTypeClass **)(v44 + 4); /*0x73eced*/
            v80 = *(_DWORD *)(v44 + 8); /*0x73ecf3*/
            LOWORD(aP2) = v46 / 256; /*0x73ed13*/
            HIWORD(aP2) = (int)v47 / 256; /*0x73ed18*/
            v64 = aP2; /*0x73ed21*/
            LOWORD(v64) = (_WORD)aP2 + *(_WORD *)(v45 + 5656); /*0x73ed2f*/
            HIWORD(v64) = *(_WORD *)(v45 + 5660) + HIWORD(aP2); /*0x73ed3b*/
            v66 = 0; /*0x73ed6b*/
            v64 = (TechnoClass *)*LayerClass::Pathfinding_Find( /*0x73ed7f*/
                                    (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                    (IUnknown *)&v66,
                                    (IUnknown *)&v70,
                                    (IUnknown *)&v64,
                                    (IUnknown *)2,
                                    (IUnknown *)0xFFFFFFFF,
                                    0,
                                    0,
                                    (IUnknown *)1,
                                    (IUnknown *)1,
                                    0,
                                    0,
                                    0,
                                    (IUnknown *)1,
                                    (IUnknown *)&v66,
                                    0,
                                    0);
            if ( v64 == (TechnoClass *)dword_B1CFB8 ) /*0x73ed8a*/
            {
              (*(void (__thiscall **)(int *, _DWORD, int))(*this + 1152))(this, 0, 1); /*0x73ee7f*/
            }
            else
            {
              v48 = *this; /*0x73ed9e*/
              v49 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v64); /*0x73edad*/
              (*(void (__thiscall **)(int *, void *, int))(v48 + 1152))(this, v49, 1); /*0x73edb5*/
            }
          }
        }
        break; /*0x73ee85*/
      case 3: /*0x73e6ea*/
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 7, 0); /*0x73ee93*/
        return 1; /*0x73ee93*/
      case 4: /*0x73e6ea*/
        if ( *((_BYTE *)this + 976) ) /*0x73eea6*/
        {
          if ( (*(int (__thiscall **)(int *, int, _DWORD, int))(*this + 1320))( /*0x73eec6*/
                 this,
                 *(_DWORD *)&stru_87C374.__pad_579C[22224] + 2128,
                 0,
                 1) )
          {
            (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 20, 0); /*0x73eed9*/
          }
          else
          {
            (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 15, 0); /*0x73eeea*/
          }
        }
        v75 = *(this + 39); /*0x73eefc*/
        v76 = *(this + 40); /*0x73ef08*/
        v77 = *(this + 41); /*0x73ef0f*/
        v56 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v75); /*0x73ef18*/
        v57 = (IUnknown *)Cell::IsBridge(v56); /*0x73ef1f*/
        if ( v57 ) /*0x73ef26*/
        {
          v58 = v57->field_520; /*0x73ef28*/
          if ( *(_BYTE *)(v58 + 5819) || *(_BYTE *)(v58 + 5820) ) /*0x73ef38*/
          {
            v59 = *this; /*0x73ef42*/
            PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, (IUnknown *)&v71, v57); /*0x73ef4f*/
            v61 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], PlacementCellsAlt); /*0x73ef5a*/
            (*(void (__thiscall **)(int *, void *, int))(v59 + 1152))(this, v61, 1); /*0x73ef62*/
          }
        }
        (*(void (__thiscall **)(int *, int, _DWORD))(*this + 488))(this, 5, 0); /*0x73ef71*/
        break; /*0x73ef71*/
      default:
        break;
    }
  }
  MissionControl = MissionClass::GetMissionControl(this); /*0x73ef77*/
  v63 = (IUnknown *)Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x73ef8c*/
  return (int)v63 + Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)2); /*0x73e62b*/
}


// ==== 0x0073EFC0  TechnoClass::DeployIntoBuilding  this=TechnoClass  sig=csp ====
int __thiscall TechnoClass::sub_73EFC0(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  _DWORD *v5; // ecx
  int v6; // eax
  char *MissionControl; // eax
  int v8; // esi

  v2 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 1028); /*0x73efca*/
  if ( !v2 ) /*0x73efd2*/
    return InfantryClass::ProcessDeploy((#375 **)this); /*0x73efd2*/
  v3 = 0; /*0x73efde*/
  v4 = MEMORY[0x8871E0]->CanDetonateTimeBomb[1]; /*0x73efe0*/
  if ( v4 > 0 ) /*0x73efe8*/
  {
    v5 = (_DWORD *)MEMORY[0x8871E0]->IvanWarhead[2]; /*0x73efea*/
    while ( *v5 != v2 ) /*0x73eff2*/
    {
      ++v3; /*0x73eff4*/
      ++v5; /*0x73eff5*/
      if ( v3 >= v4 ) /*0x73effa*/
        goto LABEL_6; /*0x73effa*/
    }
    goto LABEL_8; /*0x73eff2*/
  }
LABEL_6:
  if ( !*(_DWORD *)(this + 692) && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540)) ) /*0x73f00c*/
    return InfantryClass::ProcessDeploy((#375 **)this); /*0x73f08c*/
LABEL_8:
  v6 = *(_DWORD *)(this + 188); /*0x73f015*/
  if ( v6 ) /*0x73f01e*/
  {
    if ( v6 == 1 && !*(_BYTE *)(this + 1676) ) /*0x73f023*/
      *(_DWORD *)(this + 188) = 0; /*0x73f02d*/
  }
  else if ( UnitClass::DeployToBuilding((_DWORD *)this) && TechnoClass::Deploy((int *)this) ) /*0x73f046*/
  {
    *(_DWORD *)(this + 188) = 1; /*0x73f04f*/
  }
  MissionControl = MissionClass::GetMissionControl((_DWORD *)this); /*0x73f05b*/
  v8 = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x73f07e*/
  return v8 + Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 2); /*0x73f087*/
}


// ==== 0x0073F0A0  UnitClass::EvaluateTarget  this=int  sig=csp ====
int __thiscall UnitClass::EvaluateTarget(int this, int a2, int a3, int a4, int a5, char a6)
{
  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  int Type; // esi
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  __int16 *NeighbourContent; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  bool v24; // al
  int v25; // ebp
  int v26; // edi
  int v27; // eax
  int v28; // esi
  int v29; // eax
  _BYTE *v30; // esi
  int v31; // eax
  int v32; // ecx
  _WORD *v33; // edi
  _WORD *v34; // eax
  _DWORD *v35; // eax
  int v36; // eax
  _BYTE *v37; // eax
  _BYTE *v38; // eax
  int v39; // ecx
  __int16 v40; // dx
  _DWORD *v41; // eax
  int v42; // eax
  unsigned int v43; // ebp
  __int16 v44; // cx
  int v45; // eax
  int v46; // edx
  unsigned int v47; // edi
  double v48; // st7
  _DWORD *v49; // edi
  _DWORD *v50; // eax
  int v51; // ecx
  int v52; // edx
  int v53; // eax
  int v54; // ecx
  double v55; // st7
  _BYTE *v56; // edi
  _DWORD *v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  _BYTE *Building; // eax
  bool v63; // [esp+47h] [ebp-7Dh] BYREF
  char v64; // [esp+48h] [ebp-7Ch]
  bool v65; // [esp+49h] [ebp-7Bh]
  char v66; // [esp+4Ah] [ebp-7Ah]
  char v67; // [esp+4Bh] [ebp-79h]
  int v68; // [esp+4Ch] [ebp-78h]
  int v69; // [esp+50h] [ebp-74h]
  int v70; // [esp+54h] [ebp-70h]
  _BYTE *v71; // [esp+58h] [ebp-6Ch]
  _BYTE *v72; // [esp+5Ch] [ebp-68h] BYREF
  int v73; // [esp+60h] [ebp-64h] BYREF
  unsigned int v74; // [esp+64h] [ebp-60h]
  unsigned int v75; // [esp+68h] [ebp-5Ch]
  int v76; // [esp+6Ch] [ebp-58h] BYREF
  int v77; // [esp+70h] [ebp-54h] BYREF
  int v78; // [esp+74h] [ebp-50h] BYREF
  int v79; // [esp+78h] [ebp-4Ch] BYREF
  int v80; // [esp+7Ch] [ebp-48h]
  int v81; // [esp+80h] [ebp-44h]
  int v82; // [esp+84h] [ebp-40h]
  int v83; // [esp+88h] [ebp-3Ch]
  int v84; // [esp+8Ch] [ebp-38h]
  int v85; // [esp+90h] [ebp-34h]
  int v86; // [esp+94h] [ebp-30h]
  int v87; // [esp+98h] [ebp-2Ch]
  int v88; // [esp+9Ch] [ebp-28h]
  _BYTE v89[12]; // [esp+A0h] [ebp-24h] BYREF
  _BYTE v90[12]; // [esp+ACh] [ebp-18h] BYREF
  _BYTE v91[12]; // [esp+B8h] [ebp-Ch] BYREF

  v63 = (*(_DWORD *)(a2 + 320) & 0x100) != 0 /*0x73f0e1*/
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)((HIDWORD(v7) ^ v7) - HIDWORD(v7)) > 1));
  v8 = *(_DWORD *)(a2 + 84); /*0x73f0f3*/
  v64 = *(_BYTE *)(a2 + 292); /*0x73f0f6*/
  v9 = (*(_DWORD *)(a2 + 292) & 0x20) != 0; /*0x73f103*/
  v69 = v8; /*0x73f105*/
  v65 = v9; /*0x73f109*/
  Type = InfantryClass::GetType((__int16 *)a2); /*0x73f112*/
  v11 = *(_DWORD *)(*(_DWORD *)(this + 1732) + 3580); /*0x73f11a*/
  if ( v11 == -1 ) /*0x73f123*/
    goto LABEL_26; /*0x73f123*/
  v12 = *(_DWORD *)(a2 + 236); /*0x73f130*/
  if ( v12 != 10 ) /*0x73f139*/
    goto LABEL_19; /*0x73f139*/
  v13 = *(_DWORD *)(MEMORY[0x87F7E8][539985] + 4 * *(_DWORD *)(a2 + 56)); /*0x73f14a*/
  v14 = *(_DWORD *)(v13 + 740); /*0x73f14d*/
  if ( v14 == 5 && *(_DWORD *)(v13 + 744) == 3 || v14 == 4 && *(_DWORD *)(v13 + 744) == 3 ) /*0x73f16d*/
  {
    if ( *(_BYTE *)(a2 + 282) != 2 ) /*0x73f17d*/
      return 7; /*0x73f18e*/
    goto LABEL_19; /*0x73f17d*/
  }
  if ( v14 != 3 || *(_DWORD *)(v13 + 744) != 4 && *(_DWORD *)(v13 + 744) != 5 ) /*0x73f1aa*/
  {
LABEL_19:
    v16 = a2; /*0x73f1ce*/
    goto LABEL_20; /*0x73f1ce*/
  }
  v16 = a2; /*0x73f1ac*/
  if ( *(_BYTE *)(a2 + 282) != 6 ) /*0x73f1ba*/
    return 7; /*0x73f1cb*/
LABEL_20:
  if ( v12 != v11 && v12 != 10 ) /*0x73f1dc*/
  {
    v17 = *(_DWORD *)(v16 + 68); /*0x73f1de*/
    if ( v17 < 237 || v17 > 238 || a4 == *(char *)(v16 + 283) ) /*0x73f1fd*/
      return 7; /*0x73f20e*/
  }
LABEL_26:
  if ( a3 == 8 ) /*0x73f21b*/
  {
    if ( Type && *(_DWORD *)(Type + 40) ) /*0x73f22b*/
      return 0; /*0x73f22f*/
    return 7; /*0x73f22f*/
  }
  if ( Type ) /*0x73f24d*/
  {
    v18 = abs32(a3 - *(_DWORD *)(Type + 44)); /*0x73f259*/
    if ( v18 > 2 && v18 < 6 && a3 != -1 ) /*0x73f268*/
      return 7; /*0x73f279*/
  }
  NeighbourContent = (__int16 *)Cell::GetNeighbourContent((_DWORD *)a2, ((_BYTE)a3 - 4) & 7); /*0x73f28a*/
  v20 = InfantryClass::GetType(NeighbourContent); /*0x73f296*/
  if ( v20 ) /*0x73f29a*/
  {
    v21 = abs32((((_BYTE)a3 - 4) & 7) - *(_DWORD *)(v20 + 44)); /*0x73f2a6*/
    if ( v21 > 2 && v21 < 6 && a3 != -1 ) /*0x73f2b5*/
      return 7; /*0x73f2c6*/
  }
  v22 = a5; /*0x73f2c9*/
  result = (*(int (__thiscall **)(int, int, int, int *, bool *, int))(*(_DWORD *)this + 432))( /*0x73f2eb*/
             this,
             a2,
             a3,
             &a4,
             &v63,
             a5);
  if ( result != 7 )
  {
    v23 = a4; /*0x73f303*/
    if ( a4 != -1 && (*(_DWORD *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 ) /*0x73f32a*/
    {
      v64 = *(_BYTE *)(a2 + 296); /*0x73f332*/
      v24 = (*(_DWORD *)(a2 + 296) & 0x20) != 0; /*0x73f342*/
      v69 = *(_DWORD *)(a2 + 88); /*0x73f344*/
      v65 = v24; /*0x73f348*/
    }
    if ( !MEMORY[0x87F7E8][539633] ) /*0x73f353*/
    {
      if ( !Type::CheckAmbiguity(MEMORY[0x87F7E8], a2, 1) /*0x73f37b*/
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 800))(this)
        && *(_BYTE *)(this + 981) )
      {
        return 7; /*0x73f394*/
      }
      v23 = a4; /*0x73f397*/
    }
    result = FootClass::Destru_vt107((_DWORD *)this, a2, a3, v23, v22, a6); /*0x73f3b3*/
    v25 = result; /*0x73f3b8*/
    v68 = result; /*0x73f3bd*/
    if ( result != 7 )
    {
      v26 = a2; /*0x73f3d0*/
      v27 = *(_DWORD *)(a2 + 68); /*0x73f3d7*/
      if ( v27 != -1 ) /*0x73f3dd*/
      {
        v28 = *(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * v27); /*0x73f3e9*/
        if ( *(_BYTE *)(v28 + 682) /*0x73f40c*/
          && !(unsigned __int8)House::IsCurrentPlayer(*(#375 **)(this + 540))
          && !MEMORY[0x87F7E8][536212] )
        {
          return 7; /*0x73f41d*/
        }
        if ( *(_BYTE *)(v28 + 680) ) /*0x73f420*/
        {
          if ( *(_BYTE *)(v28 + 557) /*0x73f46c*/
            && (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
            || *(_BYTE *)(v28 + 680) && *(_DWORD *)(*(_DWORD *)(this + 1732) + 1460) == 12 )
          {
            if ( !HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80)) ) /*0x73f47f*/
              goto LABEL_74; /*0x73f47f*/
            goto LABEL_71; /*0x73f47f*/
          }
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) ) /*0x73f48f*/
            return 7; /*0x73f48f*/
          v29 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) + 172); /*0x73f4a3*/
          if ( !*(_BYTE *)(v29 + 324) && (!*(_BYTE *)(v29 + 327) || *(_DWORD *)(v28 + 156) != 6) ) /*0x73f4c4*/
            return 7; /*0x73f4d5*/
          if ( HouseClass::IsAllied(*(_DWORD **)(this + 540), *(_DWORD *)(a2 + 80)) ) /*0x73f4e2*/
          {
LABEL_71:
            if ( v25 >= 4 ) /*0x73f4ee*/
              goto LABEL_74; /*0x73f4ee*/
            v25 = 4; /*0x73f4f0*/
            goto LABEL_73; /*0x73f4f0*/
          }
          if ( v25 < 5 ) /*0x73f511*/
          {
            v25 = 5; /*0x73f513*/
LABEL_73:
            v68 = v25; /*0x73f4f5*/
          }
        }
      }
LABEL_74:
      v67 = 0; /*0x73f4f9*/
      if ( v63 ) /*0x73f504*/
        v30 = *(_BYTE **)(a2 + 232); /*0x73f506*/
      else
        v30 = *(_BYTE **)(a2 + 228); /*0x73f51a*/
      if ( v30 )
      {
        while ( 1 )
        {
          if ( (_BYTE *)this == v30 ) /*0x73f52a*/
          {
            v65 = 0; /*0x73fc14*/
            v64 &= ~0x20u; /*0x73fc1b*/
            goto LABEL_153; /*0x73fc1f*/
          }
          v31 = *(_DWORD *)(this + 1692); /*0x73f530*/
          if ( v31 ) /*0x73f538*/
          {
            v32 = *(_DWORD *)(v31 + 40); /*0x73f53a*/
            if ( v32 ) /*0x73f53f*/
            {
              v33 = (_WORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v32 + 440))(v32, &v76); /*0x73f550*/
              v34 = (_WORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v30 + 440))(v30, &v77); /*0x73f559*/
              if ( *v34 == *v33 && v34[1] == v33[1] ) /*0x73f56f*/
                return 0; /*0x73f56f*/
              v26 = a2; /*0x73f575*/
            }
          }
          if ( Array::Contains((int *)this, (v30[20] & 1) != 0 ? (unsigned int)v30 : 0)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6
            && !UnitClass::IsCellBlockedByBridge(v30, (_DWORD *)v26) )
          {
            goto LABEL_153; /*0x73f5a2*/
          }
          if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3608) /*0x73f5d1*/
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 1
            && *(_BYTE *)(*((_DWORD *)v30 + 433) + 3608) )
          {
            return 0; /*0x73f5d9*/
          }
          if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6 ) /*0x73f5e9*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7 /*0x73f653*/
              && v30 == *(_BYTE **)(this + 1444)
              && *(_BYTE *)(*((_DWORD *)v30 + 328) + 5806)
              && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 468))(v30)
              || (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 9
              && v30 == *(_BYTE **)(this + 1444)
              && *(_BYTE *)(*((_DWORD *)v30 + 328) + 5805)
              && !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 468))(v30) )
            {
              return 0; /*0x73f65b*/
            }
            if ( *(_BYTE *)(*((_DWORD *)v30 + 328) + 5805) ) /*0x73f667*/
            {
              v35 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v89); /*0x73f67a*/
              LOWORD(v70) = *v35 / 256; /*0x73f68d*/
              HIWORD(v70) = v35[1] / 256; /*0x73f6a5*/
              v73 = v70; /*0x73f6ae*/
              v36 = *((_DWORD *)CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v73) + 57); /*0x73f6bd*/
              if ( v36 ) /*0x73f6c5*/
              {
                while ( (_BYTE *)v36 != v30 ) /*0x73f6c9*/
                {
                  v36 = *(_DWORD *)(v36 + 48); /*0x73f6cf*/
                  if ( !v36 ) /*0x73f6d4*/
                    goto LABEL_105; /*0x73f6d4*/
                }
                return 0; /*0x73f248*/
              }
            }
LABEL_105:
            v37 = (_BYTE *)*((_DWORD *)v30 + 328); /*0x73f6d6*/
            if ( v37[5815] ) /*0x73f6dc*/
            {
              if ( !BuildingClass::IsPoweredOn(v30) ) /*0x73f6e8*/
              {
                if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v30 + 135), *(#375 **)(this + 540)) ) /*0x73f702*/
                {
                  if ( v25 < 3 ) /*0x73f70e*/
                  {
                    v25 = 3; /*0x73f714*/
                    v68 = 3; /*0x73f719*/
                  }
                }
                else
                {
                  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 684))(this) ) /*0x73f72e*/
                    return 7; /*0x73f72e*/
                  if ( v25 < 5 ) /*0x73f737*/
                  {
                    v25 = 5; /*0x73f73d*/
                    v68 = 5; /*0x73f742*/
                  }
                }
              }
              goto LABEL_153; /*0x73f71d*/
            }
            if ( (v37[5801] || v37[5803]) /*0x73f76d*/
              && Cell::IsBridge((_DWORD *)v26) == (_DWORD *)v30
              && !UnitClass::IsCellBlockedByBridge(v30, (_DWORD *)v26) )
            {
              goto LABEL_153; /*0x73f76d*/
            }
            v38 = (_BYTE *)*((_DWORD *)v30 + 328); /*0x73f77a*/
            if ( v38[5889] ) /*0x73f780*/
              goto LABEL_153; /*0x73f780*/
            if ( v38[5823] ) /*0x73f78e*/
            {
              v39 = *((_DWORD *)v30 + 390); /*0x73f798*/
              if ( v39 == 12 || v39 == 8 ) /*0x73f7aa*/
                goto LABEL_153; /*0x73f7aa*/
            }
            if ( v38[5824] ) /*0x73f7b0*/
            {
              if ( *(_BYTE *)(*((_DWORD *)v30 + 135) + 506) ) /*0x73f7c0*/
                return 7; /*0x73f7c8*/
              goto LABEL_153; /*0x73f7c8*/
            }
            if ( v38[5488] ) /*0x73f7d3*/
            {
              v40 = HIWORD(MEMORY[0x87F7E8][32682]) + *(_WORD *)(v26 + 38); /*0x73f7ec*/
              LOWORD(v71) = LOWORD(MEMORY[0x87F7E8][32682]) + *(_WORD *)(v26 + 36); /*0x73f7f3*/
              HIWORD(v71) = v40; /*0x73f7fc*/
              v72 = v71; /*0x73f80b*/
              v41 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v72); /*0x73f80f*/
              if ( Cell::IsBridge(v41) != (_DWORD *)v30 ) /*0x73f81d*/
                goto LABEL_153; /*0x73f81d*/
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 7 /*0x73f844*/
            && v30 == *(_BYTE **)(this + 1444)
            && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 1 )
          {
            return 0; /*0x73f844*/
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 388))(this) == 11 && *(_BYTE **)(this + 536) == v30 ) /*0x73f85f*/
            return 7; /*0x73f85f*/
          if ( (v30[20] & 4) == 0 ) /*0x73f869*/
            break; /*0x73f869*/
          v42 = *((_DWORD *)v30 + 361); /*0x73f86b*/
          v72 = v30; /*0x73f871*/
          if ( !v42 && !TimerClass::Active((int)(v30 + 904)) ) /*0x73f87f*/
          {
            if ( !*((_DWORD *)v30 + 413) ) /*0x73f888*/
              WinAPI::Wrapper(-2147467261); /*0x73f897*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)v30 + 413) + 16))(*((_DWORD *)v30 + 413)) ) /*0x73f8aa*/
              goto LABEL_139; /*0x73f8aa*/
          }
          v66 = 1; /*0x73f8ac*/
LABEL_140:
          if ( Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v30) ) /*0x73f8c7*/
          {
            if ( v66 ) /*0x73f8da*/
            {
              v43 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 904), &v78) >> 12) + 1) >> 1) & 7; /*0x73f903*/
              v44 = *(_WORD *)ProgressTimer::GetValue((_WORD *)v30 + 452, &v79) + 0x7FFF; /*0x73f914*/
              v45 = *((_DWORD *)v30 + 39); /*0x73f91c*/
              LOWORD(v74) = v44; /*0x73f91e*/
              v86 = v45; /*0x73f923*/
              v87 = *((_DWORD *)v30 + 40); /*0x73f938*/
              v46 = *((_DWORD *)v30 + 41); /*0x73f93e*/
              v83 = *(_DWORD *)(this + 156); /*0x73f941*/
              v88 = v46; /*0x73f949*/
              v84 = *(_DWORD *)(this + 160); /*0x73f950*/
              v85 = *(_DWORD *)(this + 164); /*0x73f95e*/
              v47 = (((v74 >> 12) + 1) >> 1) & 7; /*0x73f96c*/
              v48 = Math::CalcAngle((double)v84 - (double)v87, (double)v45 - (double)v83); /*0x73f976*/
              LOWORD(v75) = Math::RoundToInt((v48 - 1.570796326794897) * -10430.06004058427); /*0x73f991*/
              if ( v43 == v47 ) /*0x73f996*/
              {
                v49 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v30 + 72))(v30, v90); /*0x73f9aa*/
                v50 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 72))(this, v91); /*0x73f9b6*/
                v51 = *v50 - *v49; /*0x73f9bd*/
                v52 = v50[1]; /*0x73f9bf*/
                v53 = v50[2]; /*0x73f9c2*/
                v80 = v51; /*0x73f9c5*/
                v54 = v49[2]; /*0x73f9d1*/
                v81 = v52 - v49[1]; /*0x73f9d4*/
                v82 = v53 - v54; /*0x73f9de*/
                v55 = Math::Sqrt( /*0x73fa03*/
                        (double)v80 * (double)v80
                      + (double)(v53 - v54) * (double)(v53 - v54)
                      + (double)v81 * (double)v81);
                if ( (int)Math::RoundToInt(v55) <= 511 && ((((v75 >> 12) + 1) >> 1) & 7) == v43 ) /*0x73fa26*/
                  return 7; /*0x73fa26*/
              }
              v56 = v72; /*0x73fa2c*/
              if ( v72[1718] && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v72 + 44))(v72) != 15 ) /*0x73fa44*/
                goto LABEL_150; /*0x73fa44*/
              if ( !*((_DWORD *)v56 + 413) ) /*0x73fa46*/
                WinAPI::Wrapper(-2147467261); /*0x73fa55*/
              if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**((_DWORD **)v56 + 413) + 164))(*((_DWORD *)v56 + 413)) ) /*0x73fa63*/
              {
LABEL_150:
                if ( v68 < 2 ) /*0x73fa72*/
                  v68 = 2; /*0x73fa74*/
              }
            }
            else
            {
              if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30) == 6 ) /*0x73fae9*/
                return 7; /*0x73fae9*/
              if ( v25 < 6 ) /*0x73faf2*/
              {
                v25 = 6; /*0x73faf4*/
                v68 = 6; /*0x73faf9*/
                goto LABEL_153; /*0x73fafd*/
              }
            }
          }
          else
          {
            v57 = AbstractClass::IsTechno(v30); /*0x73fb01*/
            if ( v57 && v57[136] == 2 ) /*0x73fb11*/
            {
              if ( v25 < 1 ) /*0x73fb16*/
              {
                v25 = 1; /*0x73fb1c*/
                v68 = 1; /*0x73fb21*/
                goto LABEL_153; /*0x73fb25*/
              }
            }
            else if ( (*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) /*0x73fb4a*/
                    || TechnoTypeClass::HasVoiceResponse((float *)this, 17))
                   && ObjectClass::IsCrushable(v30, (_DWORD **)this) )
            {
              if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(this + 540), (int)v30) ) /*0x73fb5a*/
              {
                v67 = 1; /*0x73fb67*/
                goto LABEL_153; /*0x73fb6c*/
              }
            }
            else
            {
              if ( !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0) /*0x73fb90*/
                && !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3220) )
              {
                return 7; /*0x73fb90*/
              }
              v58 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 44))(v30); /*0x73fb9a*/
              if ( v58 == 6 ) /*0x73fba0*/
              {
                if ( *(_BYTE *)(*((_DWORD *)v30 + 328) + 5814) ) /*0x73fc00*/
                  return 7; /*0x73fc08*/
              }
              else if ( v58 == 36 ) /*0x73fba5*/
              {
                v59 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 740))(this, v30); /*0x73fbac*/
                v60 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1016))(this, v59); /*0x73fbbd*/
                if ( !v60 ) /*0x73fbc1*/
                  return 7; /*0x73fbc1*/
                v61 = *(_DWORD *)(v60 + 172); /*0x73fbc7*/
                if ( !v61 || !*(_BYTE *)(v61 + 327) ) /*0x73fbd5*/
                  return 7; /*0x73fbdd*/
              }
              if ( v25 < 5 ) /*0x73fbe6*/
              {
                v25 = 5; /*0x73fbec*/
                v68 = 5; /*0x73fbf1*/
                goto LABEL_153; /*0x73fbf5*/
              }
            }
          }
          v25 = v68; /*0x73fa7c*/
          v26 = a2; /*0x73fa80*/
LABEL_153:
          v30 = (_BYTE *)*((_DWORD *)v30 + 12); /*0x73fa87*/
          if ( !v30 ) /*0x73fa8c*/
            goto LABEL_154; /*0x73fa8c*/
        }
        v72 = 0; /*0x73f8b3*/
LABEL_139:
        v66 = 0; /*0x73f8bb*/
        goto LABEL_140; /*0x73f8bb*/
      }
LABEL_154:
      if ( !v63 /*0x73fac7*/
        && *(float *)&MEMORY[0x87F7E8][9 * *(_DWORD *)(v26 + 236) + 31894 + *(_DWORD *)(*(_DWORD *)(this + 1732) + 1660)] == 0.0 )
      {
        return 7; /*0x73fadc*/
      }
      if ( !v25 ) /*0x73fc26*/
      {
        if ( v67 ) /*0x73fc32*/
        {
          if ( v65 ) /*0x73fcfc*/
          {
            if ( !CellClass::FindBuilding((_DWORD *)v26, 0) ) /*0x73fd02*/
              return 2; /*0x73fd02*/
            Building = CellClass::FindBuilding((_DWORD *)v26, 0); /*0x73fd10*/
            if ( !ObjectClass::IsCrushable(Building, (_DWORD **)this) ) /*0x73fd17*/
              return 2; /*0x73fd2f*/
          }
        }
        else if ( (v64 & 0x3F) != 0 ) /*0x73fc3d*/
        {
          if ( v65 || v69 != -1 && HouseClass::IsAllied(*(_DWORD **)(this + 540), v69) ) /*0x73fc5f*/
          {
            return 2; /*0x73fd32*/
          }
          else if ( !*(_BYTE *)(*(_DWORD *)(this + 1732) + 3368) /*0x73fc84*/
                 && !TechnoTypeClass::HasVoiceResponse((float *)this, 17) )
          {
            if ( *(_BYTE *)(*(_DWORD *)(this + 1732) + 3220) /*0x73fcc6*/
              || *(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(this, 0)
              && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1016))(
                                                     this,
                                                     0)
                                      + 160)
                          + 677) )
            {
              return 5; /*0x73fcf3*/
            }
            return 7; /*0x73fcdf*/
          }
        }
      }
      return v25; /*0x73fd38*/
    }
  }
  return result; /*0x73f17f*/
}

