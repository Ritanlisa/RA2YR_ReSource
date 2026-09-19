#include "misc_ext.hpp"

namespace gamemd
{

// 0x41e500
void AITriggerTypeClass::GetClassIdentifier()
{
}

// 0x41e540
void AITriggerTypeClass::LoadTypeData()
{
}

// 0x41e5c0
void AITriggerTypeClass::SaveToINI()
{
}

// 0x41e5e0
void AITriggerTypeClass::ProcessPower()
{
}

// 0x41eaf0
void AITriggerTypeClass::EnemyHouseOwns()
{
}

// 0x426750
void AnimFile::AddRef()
{
}

// 0x426790
void AnimFile::Release()
{
}

// 0x426a50
void AnimFile::Load()
{
}

// 0x426a90
void AnimFile::ddtor()
{
}

// 0x426dd0
void AnimFile::Check()
{
}

// 0x523d00
void AnimSequence::Parse()
{
}

// 0x67a470
void AnimTypeList::Constructor()
{
}

// 0x525680
void AnimTypeVector::Constructor()
{
}

// 0x595710
void CSFClass::CopyString()
{
}

// 0x6977c0
void CSFClass::LoadMissingStrings()
{
}

// 0x7346a0
void CSFClass::LoadFile()
{
}

// 0x472140
void CaptureManager::FreeAll()
{
}

// 0x53bad0
void ChronoScreen::IsActive()
{
}

// 0x5c5120
void CoopCampaignVector::Seek()
{
}

// 0x5c55f0
void CoopCampaignVector::AddRef()
{
}

// 0x5c5630
void CoopCampaignVector::Release()
{
}

// 0x5c56e0
void CoopCampaignVector::ddtor()
{
    if ( this->Items && this->IsAllocated )
    {
        operator delete(this->Items);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}

// 0x5c5710
void CoopCampaignVector::Read()
{
}

// 0x437f10
void Coord2D::Add()
{
}

// 0x487f20
void Coord2D::Sub()
{
}

// 0x437090
void Coord3D::Set()
{
}

// 0x459f60
void Coord3D::Equals()
{
}

// 0x6ce240
void Coord3D::Add()
{
}

// 0x403870
void CoordBounds::Constructor()
{
}

// 0x4a94f0
void CoordList::GetBounds()
{
}

// 0x561910
void CoordinateTables::Init()
{
}

// 0x7493b0
void DamageAnimClass::Constructor()
{
}

// 0x4c58c0
void EMPulseClass::IterateCellsInRadius()
{
}

// 0x4c59a0
void EMPulseClass::Stat()
{
}

// 0x4c59f0
int EMPulseClass::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = -1205482718;
    a2[1] = 298983438;
    a2[2] = 1610656159;
    a2[3] = 1490328072;
    return 0;
}

// 0x4c5a30
void EMPulseClass::Write()
{
}

// 0x4c5a80
void EMPulseClass::Seek()
{
}

// 0x53cbe0
void ExplosionClass::ProcessFrame()
{
}

// 0x6263d0
void FileExtension::MapHandler()
{
}

// 0x628240
void FileExtension::Constructor()
{
}

// 0x628d10
void FileExtension::CheckExtensionMatch()
{
}

// 0x628dd0
void FileExtension::Check()
{
}

// 0x47b0c0
void FileFind::Next()
{
}

// 0x47b130
void FileFind::CloseHandle()
{
}

// 0x5bbed0
void FileFind::Close()
{
}

// 0x5bbee0
void FileFind::ReleaseAllHandles()
{
}

// 0x477790
void FilePipe::QueryInterface()
{
}

// 0x7ba420
void FilePipe::Destructor()
{
}

// 0x7ba450
void FilePipe::Release()
{
}

// 0x7ba480
void FilePipe::Read()
{
}

// 0x525a10
void FileStraw::Open()
{
}

// 0x7ba590
void FileStraw::Destructor()
{
}

// 0x477770
void FileStraw_Destru::QueryInterface()
{
}

// 0x7ba530
void FileStraw_Destru::Release()
{
}

// 0x730100
void FileTree::CleanupAll()
{
}

// 0x69e500
void FileTreeNode::Destroy()
{
}

// 0x512ae0
void InfantryTypeVector::QueryInterface()
{
}

// 0x512c80
void InfantryTypeVector::Release()
{
}

// 0x512d60
void InfantryTypeVector::AddType()
{
}

// 0x512da0
void InfantryTypeVector::Remove()
{
}

// 0x512dc0
void InfantryTypeVector::Construct()
{
}

// 0x6d1eb0
void IsoCoord::ToPixel()
{
}

// 0x6d62e0
void IsoCoord::ToScreenOffset()
{
}

// 0x748750
void IsoTile::Decode16Bit()
{
}

// 0x748c30
void IsoTile::Decode8BitV2()
{
}

// 0x7c39c0
void IsoTile::Decode16BitV2()
{
}

// 0x7c3eb0
void IsoTile::Decode8Bit()
{
}

// 0x544a70
void IsometricTileTypeClass::CleanupMembers()
{
}

// 0x544cb0
void IsometricTileTypeClass::LoadTileFileData()
{
}

// 0x549aa0
void IsometricTileTypeClass::GetTerrainType()
{
}

// 0x549ae0
void IsometricTileTypeClass::GetHeight()
{
}

// 0x549b50
void IsometricTileTypeClass::vt_entry_6C()
{
}

// 0x4c1f20
void Lightning::Draw()
{
}

// 0x6b5240
void MapCoords::Init()
{
}

// 0x45b1c0
void MapData::InitHeights()
{
}

// 0x69a3b0
void MapFile::LoadDescription()
{
}

// 0x69c500
void MapFile::ddtor()
{
    int v2 = this->Items;
    this->Count16 = 0;
    if ( v2 && this->IsAllocated )
    {
        int v3 = *(v2 - 4);
        void *v4 = (void *)(v2 - 4);
        void **v5 = (void **)(v2 + 4 * v3);
        int v6 = v3 - 1;
        if ( v6 >= 0 )
        {
            int v7 = v6 + 1;
            do
            {
                DeleteAndZero(--v5);
                --v7;
            }
            while ( v7 );
        }
        OperatorDelete(v4);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}

// 0x69c560
void MapFile::Write()
{
}

// 0x69cbc0
void MapFile::Release()
{
}

// 0x69cd00
void MapFile::Read()
{
}

// 0x5d63e0
void MapPreview::Check()
{
}

// 0x5e7eb0
void MapPreview::Upload()
{
}

// 0x595740
void MapResourceClass::Constructor()
{
}

// 0x56d100
void MapSeed::CheckTileMatch()
{
}

// 0x58b7d0
void MapSeed::IsInitialized()
{
}

// 0x5910f0
void MapSeed::PlaceCityBlock()
{
}

// 0x591d80
void MapSeed::PlaceCityBuildings()
{
}

// 0x593550
void MapSeed::PlaceCityBlock2()
{
}

// 0x595680
void MapSeedClass::Constructor()
{
}

// 0x597760
void MapSeedClass::Release()
{
}

// 0x597a30
void MapSeedClass::AddRef()
{
}

// 0x597d50
bool MapSeedClass::ddtor(char* lpFileName)
{
    return LoadOptions::ddtor(lpFileName);
}

// 0x597f80
void MapSeedClass::Generate()
{
}

// 0x767740
void MapSizeGameOption_WorldDominationTour::Read()
{
}

// 0x767800
int MapSizeGameOption_WorldDominationTour::ddtor(MapSizeOptStub **a2)
{
    return DataGlobal_848628[4 * a2[1]->mszByte18 + a2[1]->mszByte19];
}

// 0x7678c0
void MapSizeGameOption_WorldDominationTour::QueryInterface()
{
}

// 0x769c00
void Map_WorldDominationTour::QueryInterface()
{
}

// 0x5ae5e0
void Matrix::Copy12Float()
{
}

// 0x5bd730
void Matrix::Scale()
{
}

// 0x5af1a0
void Matrix2D::Rotate()
{
}

// 0x5ae8f0
void Matrix3x3::Multiply()
{
}

// 0x5ae9b0
void Matrix3x3::ApplyCol0()
{
}

// 0x5ae9e0
void Matrix3x3::ApplyCol1()
{
}

// 0x5aef60
void Matrix3x3::RotateX()
{
}

// 0x5af4d0
void Matrix3x3::TransformPoint()
{
}

// 0x47c4d0
void PlacementList::FindByID()
{
}

// 0x47ebf0
void PlacementList::FindByType()
{
}

// 0x6370b0
void PlanningNodeClass::CleanupAll()
{
}

// 0x63ebd0
void PlanningNodeClass::RemoveFromArray()
{
}

// 0x658890
void RadarHashVector::Clear()
{
}

// 0x6588c0
void RadarHashVector::GetCount()
{
}

// 0x6588e0
void RadarHashVector::Seek()
{
}

// 0x658910
void RadarHashVector::AddRef()
{
}

// 0x658970
void RadarHashVector::Release()
{
}

// 0x690c00
void ScoreAnimClass::AdvanceFrame()
{
}

// 0x690d60
void ScoreAnimClass::AnimateText()
{
}

// 0x690f70
void ScoreAnimClass::AddRef()
{
}

// 0x690fc0
void ScoreAnimClass::Release()
{
}

// 0x690fe0
void ScoreAnimClass::Constructor_ScoreAnimClass()
{
}

// 0x542620
void ScoreBoard::Render()
{
}

// 0x5cd3c0
void ScoreClass::SetState()
{
}

// 0x6907a0
void ScoreFontClass::Release()
{
}

// 0x6907e0
void ScoreFontClass::AddRef()
{
}

// 0x691040
void ScoreFontClass::QueryInterface()
{
}

// 0x691100
void ScoreFontClass::Constructor_ScoreFontClass()
{
}

// 0x68cd20
void ScoreScreen::Display()
{
}

// 0x68ec00
void ScoreScreen::Check()
{
}

// 0x68ef20
void ScoreScreen::AccumulateScoreStats()
{
}

// 0x68f9b0
void ScoreScreen::DisplayTimeText()
{
}

// 0x690640
void ScoreScreen::LoadAudio()
{
}

// 0x691970
void ScoreScreenClass::ProcessFrame()
{
}

// 0x76ea20
void ScoreText::ShowAlt()
{
}

// 0x76eaf0
void ScoreText::Show()
{
}

// 0x567230
void ShroudClass::UpdateVisibility()
{
}

// 0x577ab0
void ShroudClass::Reset()
{
}

// 0x6b8880
void SpawnControlVector::Constructor()
{
}

// 0x510500
void SuperClassVector::Construct()
{
}

// 0x539890
void SuperWeaponClass::LoadFromSaveStream()
{
}

// 0x6c5640
void SuperWeaponClass::ProcessCharged()
{
}

// 0x6da740
void SuperWeaponClass::UpdateAll()
{
}

// 0x6e38f0
void SuperWeaponClass::CreateChemLauncher()
{
}

// 0x773030
void SuperWeaponClass::FindByName()
{
}

// 0x6c39c0
void TClassFactory_AnimClass::AddRef()
{
}

// 0x6c39e0
void TClassFactory_AnimClass::GetClassName()
{
}

// 0x6c3a10
int TClassFactory_AnimClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x1c8u);
    if ( !v2 )
        return -2147024882;
    void *v6 = AnimClass::SimpleCtor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c3a90
void TClassFactory_AnimClass::GetSize()
{
}

// 0x6c5040
void TClassFactory_BulletClass::AddRef()
{
}

// 0x6c5060
void TClassFactory_BulletClass::GetClassName()
{
}

// 0x6c5090
int TClassFactory_BulletClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x160u);
    if ( !v2 )
        return -2147024882;
    void *v6 = BulletClass::BulletClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c5110
void TClassFactory_BulletClass::GetSize()
{
}

// 0x6c00c0
void TClassFactory_CampaignClass::AddRefCOM()
{
}

// 0x6c00e0
void TClassFactory_CampaignClass::Release()
{
}

// 0x6c0110
void TClassFactory_CampaignClass::CreateInstanceCOM()
{
}

// 0x6c0190
void TClassFactory_CampaignClass::AdjustRefCOM()
{
}

// 0x6c0240
void TClassFactory_CampaignClass::AddRef()
{
}

// 0x6bf940
void TClassFactory_CellClass::AddRef()
{
}

// 0x6bf960
void TClassFactory_CellClass::GetClassName()
{
}

// 0x6bf990
int TClassFactory_CellClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x148u);
    if ( !v2 )
        return -2147024882;
    void *v6 = CellClass::Construct(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6bfa10
void TClassFactory_CellClass::GetSize()
{
}

// 0x6bfac0
void TClassFactory_EMPulseClass::AddRef()
{
}

// 0x6bfae0
void TClassFactory_EMPulseClass::GetClassName()
{
}

// 0x6bfb10
int TClassFactory_EMPulseClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x34u);
    if ( !v2 )
        return -2147024882;
    void *v6 = Helper_4C5370(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6bfb90
void TClassFactory_EMPulseClass::GetSize()
{
}

// 0x50e830
void TeamTypeVector::CopyConstruct()
{
}

// 0x4e01e0
void AbstractClassVector::Seek()
{
}

// 0x4e02d0
void AbstractClassVector::QueryInterface()
{
}

// 0x4e0320
void AbstractClassVector::AddRef()
{
}

// 0x4e0360
void AbstractClassVector::Release()
{
}

// 0x4e0410
void AbstractClassVector::ddtor()
{
    if ( this->Items && this->IsAllocated )
    {
        operator delete(this->Items);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}

// 0x53cb10
void ActionQueue::PushEntry()
{
}

// 0x5bddc0
void Actions::Reset()
{
}

// 0x412b40
void AircraftTrackerClass::FillCurrentVector()
{
}

// 0x513990
void AircraftTypeVector::Constructor()
{
}

// 0x420960
void AlphaShapeClass::CTOR()
{
}

// 0x420af0
void AlphaShapeClass::Constructor()
{
}

// 0x420d40
void AlphaShapeClass::SD_vt03()
{
}

// 0x420d80
void AlphaShapeClass::SD_vt11()
{
}

// 0x420d90
void AlphaShapeClass::SD_vt12()
{
}

// 0x5106e0
void AngerVector::Construct()
{
}

// 0x5f3320
void AppState::CallMethod()
{
}

// 0x7492b0
void ArcTan::Update()
{
}

// 0x4753f0
void ArmorType::FindIndex()
{
}

// 0x772a50
void ArmorType::LookupByName()
{
}

// 0x5cc760
void ArtConfig::loadConfig()
{
}

// 0x7681e0
void ArtConfig::ReadLayout()
{
}

// 0x768f50
void ArtConfig::ParseLayoutEntry()
{
}

// 0x7691e0
void ArtConfig::saveConfig()
{
}

// 0x76fb90
void ArtConfig::resetConfig()
{
}

// 0x534e50
void AssetClass::ReleaseAndReload()
{
}

// 0x69e100
void BTree::DeleteSubtree()
{
}

// 0x42f9c0
void BaseNodeClass_Vector::Release()
{
}

// 0x42fab0
void BaseNodeClass_Vector::ddtor()
{
    if ( this->Items && this->IsAllocated )
    {
        operator delete(this->Items);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}

// 0x42fae0
void BaseNodeClass_Vector::Read()
{
}

// 0x42fb30
void BaseNodeClass_Vector::Write()
{
}

// 0x42fb50
void BaseNodeClass_Vector::QueryInterface()
{
}

// 0x5c6fe0
void BigInt::ArrayArithmetic()
{
}

// 0x632740
void BigInt::DecryptBlock()
{
}

// 0x632870
void BigInt::RSAOperation()
{
}

// 0x632bc0
void BigInt::Compare()
{
}

// 0x433180
void BinkMovieClass::SetPosition()
{
}

// 0x4333f0
void BinkMovieClass::RenderFrameToSurface()
{
}

// 0x4335e0
void BinkMovieClass::AllocateRenderSurface()
{
}

// 0x4336c0
void BinkMovieClass::ReleaseRenderSurface()
{
}

// 0x433770
void BinkMovieClass::OpenFile()
{
}

// 0x438000
void BlowPipe::Draw()
{
}

// 0x438030
void BlowPipe::DrawAlt()
{
}

// 0x438060
void BlowPipe::AddRef()
{
}

// 0x4380a0
void BlowPipe::Read()
{
}

// 0x632f90
void BlowPipe::QueryInterface()
{
}

// 0x438210
void BlowStraw::Get()
{
}

// 0x5b45c0
void BlowStraw::QueryInterface()
{
}

// 0x5b4630
void BlowStraw::Constructor_MixFileClass()
{
}

// 0x510920
void BoolVector::Construct()
{
}

// 0x42e820
void BridgeClass::GetCellData()
{
}

// 0x50e450
void BuildLocation::InitCandidate()
{
}

// 0x510860
void BuildLocationVector::Grow()
{
}

// 0x6301a0
int C07EFB9C::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = 237448648;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

// 0x645620
int C07F0188::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = 1883112523;
    a2[1] = 298979249;
    a2[2] = 1610642049;
    a2[3] = -1252326136;
    return 0;
}

// 0x744600
void C07F5C70::Write()
{
}

// 0x746dd0
void C07F5C70::StubReturn2280()
{
}

// 0x746de0
int C07F5C70::ddtor(int a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = 237448650;
    a2[1] = 298949647;
    a2[2] = -1610610249;
    a2[3] = -777003740;
    return 0;
}

// 0x746e20
void C07F5C70::StubReturn1()
{
}

// 0x746e80
void C07F5C70::Seek()
{
}

// 0x478ba0
void CCToolTip::CalculatePopupPosition()
{
}

// 0x478db0
void CCToolTip::Release()
{
}

// 0x478e10
void CCToolTip::Draw1()
{
}

// 0x478e30
void CCToolTip::Draw2()
{
}

// 0x479050
void CCToolTip::Show()
{
}

// 0x7a41c0
void CChatEventSink::HandleServerList()
{
}

// 0x7a5890
void CChatEventSink::HandleChatEvent()
{
}

// 0x7a7110
void CChatEventSink::HandleChannelJoin()
{
}

// 0x7a8260
void CChatEventSink::HandleLobbyPlayerUpdate()
{
}

// 0x7a9970
void CChatEventSink::HandleUserSearch()
{
}

// 0x47a3f0
void CDROM::DeviceIoControl()
{
}

// 0x47a6f0
void CDROM::LockVolume()
{
}

// 0x473920
void CarryoverClass::QueryInterface()
{
}

// 0x5ad570
void CellClassVector::Destruct()
{
}

// 0x5657a0
void CellCoord::To_CellObj()
{
}

// 0x4863d0
void CellLand::IsBuildable()
{
}

// 0x578100
void CellSystem::UpdateVisibility()
{
}

// 0x433c90
void Char::Swap()
{
}

// 0x55e420
void Chat::ProcessMessages()
{
}

// 0x5d4390
void Chat::RefreshMessagePositions()
{
}

// 0x79db50
void ChatDialog::DlgProc()
{
}

// 0x6b9740
void ChatEvent::ProcessStrings()
{
}

// 0x6bee40
void ClassFactory_CStream::Construct()
{
}

// 0x6befc0
void ClassFactory_Wave::Construct()
{
}

// 0x579010
void Cliff::ProcessTransitions()
{
}

// 0x76b080
void ComStreamClass::initStream()
{
}

// 0x76b090
void ComStreamClass::closeStream()
{
}

// 0x7a2fe0
void ComStreamClass::SetSize()
{
}

// 0x7a30d0
void ComStreamClass::Read()
{
}

// 0x7a3b30
void ComStreamClass::Commit()
{
}

// 0x55c350
void Compression::Read()
{
}

// 0x653810
void Conditions::CheckResult()
{
}

// 0x653830
void Conditions::CheckResult3()
{
}

// 0x7667a0
void Conflict_WorldDominationTour::QueryInterface()
{
}

// 0x4a04b0
void ConnectionPointClass::QueryInterface()
{
}

// 0x4a0520
void ConnectionPointClass::AddRef()
{
}

// 0x4a0540
void ConnectionPointClass::Release()
{
}

// 0x4a05d0
int ConnectionPointClass::ddtor(_DWORD *a1, _DWORD *a2)
{
    if ( !a2 )
        return -2147467261;
    *a2 = a1[1];
    a2[1] = a1[2];
    a2[2] = a1[3];
    a2[3] = a1[4];
    return 0;
}

// 0x4a0610
void ConnectionPointClass::Advise()
{
}

// 0x5105f0
void ConnectionPointVector::Construct()
{
}

// 0x481a00
void CrateClass::ProcessPickup()
{
}

// 0x56bbe0
void CrateClass::Update()
{
}

// 0x56bd40
void CrateClass::FindPlacement()
{
}

// 0x72dae0
void CreatureClass::GetManager()
{
}

// 0x632aa0
void Crypto::DecodeByte()
{
}

// 0x4072c0
void DListNode::Init()
{
}

// 0x4072d0
void DListNode::InitEmpty()
{
}

// 0x4a53b0
void Dial8Class::Constructor()
{
}

// 0x4a5660
void Dial8Class::SetValue()
{
}

// 0x4a57b0
void Dial8Class::GetValue()
{
}

// 0x4a59a0
void Dial8Class::QueryInterface()
{
}

// 0x4a71a0
void DiskLaserClass::Fire()
{
}

// 0x4a7340
void DiskLaserClass::Update()
{
}

// 0x4a7900
void DiskLaserClass::PointerGotInvalid()
{
}

// 0x4a7b80
void DiskLaserClass::Stat()
{
}

// 0x48dd50
void DiskSpace::CheckAvailable()
{
}

// 0x510970
void DistributionVector_BuildingType::Construct()
{
}

// 0x4129c0
void DynamicArray::AddFromList()
{
}

// 0x6249a0
void DynamicArray::Resize()
{
}

// 0x625440
void DynamicArray::ShrinkCapacity()
{
}

// 0x7acd60
void DynamicArray::Remove()
{
}

// 0x7ad9d0
void DynamicArray::Grow()
{
}

// 0x7aca00
void DynamicClass::Insert()
{
}

// 0x7ace30
void DynamicStringArray::Get()
{
}

// 0x628070
void DynamicVectorArray::Constructor()
{
}

// 0x46f5e0
void ErrorCode::Map()
{
}

// 0x7d2f41
void Exception::Destructor()
{
}

// 0x4c85e0
void ExceptionHandler::GenerateReport()
{
}

// 0x434110
void Field::Int_Set()
{
}

// 0x420270
void FractalNoise::Release()
{
}

// 0x41c430
void Function::Method_41C430()
{
}

// 0x424ca0
void Function::Method_424CA0()
{
}

// 0x46b260
void Function::Method_46B260()
{
}

// 0x4b4d60
void Function::Method_4B4D60()
{
}

// 0x6342d0
void Function::Method_6342D0()
{
}

// 0x4e5ac0
void GDlg::LoadLetterStrings()
{
}

// 0x4e2580
void GaugeClass::SetValue()
{
}

// 0x4e25a0
void GaugeClass::GetValue()
{
}

// 0x4e25d0
void GaugeClass::GetRange()
{
}

// 0x4e2650
void GaugeClass::SetColor()
{
}

// 0x4e29a0
void GaugeClass::SetRange()
{
}

// 0x40cc10
void GenericVector::StubReturnFalse()
{
}

// 0x40ce50
void GenericVector::Resize()
{
}

// 0x50ea90
void GenericVector::Resize2()
{
}

// 0x422b20
void GlobalArray::FindString()
{
}

// 0x5f7640
void GlobalInit::RegisterSingleton()
{
}

// 0x71de40
void GlobalInit::SingletonGetter()
{
}

// 0x61e700
void GroupLabel::WndProc()
{
}

// 0x759540
void HVAAnimation::LoadFromFile()
{
}

// 0x759670
void HVAAnimation::ParseFrames()
{
}

// 0x5ad870
void Heap::SiftDown()
{
}

// 0x5654a0
void HexCoord::Convert()
{
}

// 0x767c10
void History_WorldDominationTour::QueryInterface()
{
}

// 0x4016f0
void IDXContainer::LoadSample()
{
}

// 0x49e8e0
void INISectionList::Constructor()
{
}

// 0x7c89f2
void ImageList::DragEnter()
{
}

// 0x7c89f8
void ImageList::BeginDrag()
{
}

// 0x7c89fe
void ImageList::Destroy()
{
}

// 0x7c8a04
void ImageList::EndDrag()
{
}

// 0x7c8a0a
void ImageList::DragMove()
{
}

// 0x645c30
void Int4::Set()
{
}

// 0x645c50
void Int4::Set2()
{
}

// 0x517310
void Int64::Equal()
{
}

// 0x477b10
void IntDynamicVector::QueryInterface()
{
}

// 0x717bd0
void IntDynamicVector::Construct()
{
}

// 0x477b60
void IntVector::Copy()
{
}

// 0x49f9d0
void IntVector::Destructor()
{
}

// 0x69adf0
void IsRandMap::Sed()
{
}

// 0x69ae70
void IsRandMap::Sed2()
{
}

// 0x52aec0
void KeyValuePair::Init()
{
}

// 0x41cef0
void KeywordClass::FindOrCreate()
{
}

// 0x524cb0
void KeywordType::FindOrCreate2()
{
}

// 0x5520a0
void LCW::Compress()
{
}

// 0x552490
void LCW::DecompressReader()
{
}

// 0x55c7c0
void LCW::Decompress()
{
}

// 0x551ff0
void LCWPipe::Constructor()
{
}

void LCWPipe::Destructor()
{
}

// 0x5522d0
void LCWPipe_Destru::AddRef()
{
}

// 0x552390
void LCWPipe_Destru::QueryInterface()
{
}

// 0x5523e0
void LCWStraw::Constructor()
{
}

void LCWStraw::Destructor()
{
}

// 0x5525f0
void LCWStraw_Destru::QueryInterface()
{
}

// 0x55c2b0
void LZOPipe::Constructor()
{
}

// 0x55c310
void LZOPipe::Destructor()
{
}

// 0x55c5e0
void LZOPipe_Destru::AddRef()
{
}

// 0x55c6d0
void LZOPipe_Destru::QueryInterface()
{
}

// 0x55c720
void LZOStraw::Constructor()
{
}

// 0x55c780
void LZOStraw::Destructor()
{
}

// 0x55c990
void LZOStraw_Destru::QueryInterface()
{
}

// 0x46fa20
void Lobby::UpdateReadyIcons()
{
}

// 0x46fac0
void Lobby::SetupAllFactionSlots()
{
}

// 0x46fb50
void Lobby::EnableStartButton()
{
}

// 0x4e4820
void Lobby::FillPlayerFactions()
{
}

// 0x4e5310
void Lobby::InvalidateFactionCombos()
{
}

// 0x4a8d50
void MIXClass::CopyHeader()
{
}

// 0x5c9470
void MPCombatTeam::Constructor()
{
}

// 0x5cae10
void MPCombatTeam::MPTeam()
{
}

// 0x5caeb0
void MPCombatTeam::Constructor2()
{
}

// 0x5d8d10
void MPCombatTeam::AddToList()
{
}

// 0x5c9b10
void MPScore::DlgProc()
{
}

// 0x5cb840
void MSAnim::GetField()
{
}

// 0x5cb860
void MSAnim::SetField()
{
}

// 0x5cc6a0
void MSAnim::Reset()
{
}

// 0x5cc850
void MSBinkAnim::Pause()
{
}

// 0x5cc880
void MSBinkAnim::Stop()
{
}

// 0x5cc8a0
void MSBinkAnim::Load()
{
}

// 0x5cc970
void MSBinkAnim::Play()
{
}

// 0x5cec70
void MSBinkAnim::QueryInterface()
{
}

// 0x5cd330
void MSBitPrintAnim::Construct()
{
}

// 0x5cd3d0
void MSBitPrintAnim::Update()
{
}

// 0x5cd400
void MSBitPrintAnim::Stub()
{
}

// 0x5cd410
void MSBitPrintAnim::SetText()
{
}

// 0x5cd4d0
void MSBitPrintAnim::Draw()
{
}

// 0x5cf8e0
void MSChoiceClass::LoadFromINI()
{
}

// 0x5d0290
void MSChoiceClass::DeleteAndZero()
{
}

// 0x5ae4c0
void MSEngine_Destru::CheckStringNotEmpty()
{
}

// 0x5ae590
void MSEngine_Destru::StubReturnFalse()
{
}

// 0x5ae5a0
void MSEngine_Destru::DestroyComposite()
{
}

// 0x5d26f0
void MSEngine_Destru::Release()
{
}

// 0x5d2700
void MSEngine_Destru::QueryInterface()
{
}

// 0x5d2e30
void MSFont::Constructor_MSFont()
{
}

// 0x5d3170
void MSFont::Release()
{
}

// 0x5d31d0
void MSFont::AddRef()
{
}

// 0x5d3250
void MSFont::Create()
{
}

// 0x5d3330
void MSFont::ddtor()
{
}

// 0x5cb880
void MSOverlayAnim::Load()
{
}

// 0x5cbb80
void MSOverlayAnim::Draw()
{
}

// 0x5cbcb0
void MSOverlayAnim::Update()
{
}

// 0x5cc250
void MSOverlayAnim::Init()
{
}

// 0x5ceac0
void MSOverlayAnim::AddRef()
{
}

// 0x5ce640
void MSPCXAnim::Construct()
{
}

// 0x5ce7d0
void MSPCXAnim::Load()
{
}

// 0x5ce8c0
void MSPCXAnim::Draw()
{
}

// 0x5cea40
void MSPCXAnim::SetPalette()
{
}

// 0x5cea80
void MSPCXAnim::GetFrame()
{
}

// 0x5cdc50
void MSPrintAnim::SetText()
{
}

// 0x5cdee0
void MSPrintAnim::Draw()
{
}

// 0x5ce2b0
void MSPrintAnim::Update()
{
}

// 0x5ce300
void MSPrintAnim::Clear()
{
}

// 0x5ced40
void MSPrintAnim::QueryInterface()
{
}

// 0x76ebe0
void MSSfxClass::FindByName()
{
}

// 0x5cb6d0
void MSShapeAnim::Constructor()
{
}

// 0x5cebd0
void MSShapeAnim::Destruct()
{
}

// 0x5cca20
void MSVQAnim::Construct()
{
}

// 0x5ccc30
void MSVQAnim::ConstructMSVQAnimHidden()
{
}

// 0x5cce90
void MSVQAnim::Load()
{
}

// 0x5cd0e0
void MSVQAnim::Play()
{
}

// 0x5cd240
void MSVQAnim::Stop()
{
}

// 0x5c9430
void Megawealth::ProcessTick()
{
}

// 0x5c9440
void Megawealth::QueryInterface()
{
}

// 0x753c70
void Miles::DriverGet()
{
}

// 0x641140
void MiniMap::Render()
{
}

// 0x6418b0
void MiniMap::SavePreviewToINI()
{
}

// 0x5c23b0
void MovieClass::ReadConfig()
{
}

// 0x5c3ec0
void MovieClass::Create()
{
}

// 0x759940
void MovieClass::RenderLoop()
{
}

// 0x759f70
void MovieClass::GetWidth()
{
}

// 0x759f80
void MovieClass::GetHeight()
{
}

// 0x5bff00
void MovieContext::Cleanup()
{
}

// 0x5ef0b0
void MultiMissionVector::Constructor()
{
}

// 0x64dea0
void Multiplay::LogToSYNC_NOMPDEBUG()
{
}

// 0x4cb700
void NetMessage::Pack4()
{
}

// 0x4cb830
void NetMessage::Pack()
{
}

// 0x43a540
void NeuronClass::Fire()
{
}

// 0x43a5b0
void NeuronClass::Update()
{
}

// 0x43a9a0
void NeuronClass::StubReturn60()
{
}

// 0x43a9b0
void NeuronClass::StubReturn56()
{
}

// 0x4f3b10
void NullGuard::Call()
{
}

// 0x5d3a40
void ObjectManager::InitMessageList()
{
}

// 0x697840
void ObjectManager::CleanupArrays()
{
}

// 0x481180
void ObjectPlacement::CalcPosition()
{
}

// 0x4aca10
void ObjectPlacement::CalcPosition_Wrapper()
{
}

// 0x6cf240
void ObjectPtr::RegisterForTracking()
{
}

// 0x40cd10
void ObjectVector::Release()
{
}

// 0x40cdc0
void ObjectVector::ddtor()
{
    if ( this->Items && this->IsAllocated )
    {
        operator delete(this->Items);
        this->Items = 0;
    }
    this->IsAllocated = 0;
    this->Capacity = 0;
}

// 0x40cdf0
void ObjectVector::Add()
{
}

// 0x40ce30
void ObjectVector::Remove()
{
}

// 0x40cf30
void ObjectVector::QueryInterface()
{
}

// 0x5d6890
void ObserverClass::FindStartingCell()
{
}

// 0x4f1aa0
void OptionQueue::PushEntry()
{
}

// 0x71af20
void OreManagerClass::AssignMinerToRefinery()
{
}

// 0x624130
void OwnerDrawControl::InitVtable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall OwnerDrawControl::InitVtable(DialogControl_OwnerDraw *this)
{
  this->vfptr = &OwnerDraw::DialogControl::`vftable'; /*0x624130*/
}

// 0x633050
void PKStrawClass::Initialize()
{
}

// 0x6330c0
void PKStrawClass::RelayBlowfishKey()
{
}

// 0x633110
void PKStrawClass::SetSource()
{
}

// 0x48b570
void PacketQueue::ExtractEntry()
{
}

// 0x48b890
void PacketQueue::ReleaseEntry()
{
}

// 0x5355d0
void Performance::Profile()
{
}

// 0x5cafc0
void Performance::MeasureTicks()
{
}

// 0x631060
void PhoneEditor::PopulateList()
{
}

// 0x55af60
void PingPongBuffer::GetWriteOffset()
{
}

// 0x4aec80
void Pipe::QueryInterface()
{
}

// 0x631c80
void Pipe::Dtor()
{
}

// 0x631cc0
void Pipe::SetDelegate()
{
}

// 0x7b7d80
void Pipe::GetField()
{
}

// 0x63a230
void PlanManager::Notify()
{
}

// 0x63f850
void PowerBar::CalcFill()
{
}

// 0x63f960
void PowerBar::ComputeFill()
{
}

// 0x641ee0
void PreviewClass::ReadPreview()
{
}

// 0x689d30
void PreviewClass::RenderMapPreview()
{
}

// 0x5d4400
void PriQueue::GetItemPtr()
{
}

// 0x6d4b50
void PrintTimerOnTactical::Start()
{
}

// 0x5ac960
void PriorityQueue::Pop()
{
}

// 0x5d1c20
void PriorityQueue::Add()
{
}

// 0x4c9ea0
void ProductionClass::StartTimer()
{
}

// 0x4ca1a0
void ProductionQueue::CompleteOrCancel()
{
}

// 0x659ac0
void ProjectileTrail::ComputeRenderData()
{
}

// 0x433c70
void Property::Set()
{
}

// 0x726910
void Property::GetField11()
{
}

// 0x6d09c0
void PushCommandClass::Execute()
{
}

// 0x4a51f0
void RateScaler::Init()
{
}

// 0x4737f0
void ReinforcementClass::CreateObject()
{
}

// 0x4cb890
void ResultNode::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall ResultNode::Init(CCINIClass *this)
{
  __3_YAXPAX_Z((void *)this->headNode[1]); /*0x4cb897*/
  this->headNode[1] = 0; /*0x4cb89f*/
}

// 0x625ab0
void ResultNode::CleanupList()
{
}

// 0x642c20
void SHPClass::Load()
{
}

// 0x5c0eb0
void SafeDelete::Conditional()
{
}

// 0x7b7040
void SafeDelete::Ptr()
{
}

// 0x5ac340
void Scalar::Dtor()
{
}

// 0x7ad310
void ScalarDtor::DeleteAndZero()
{
}

// 0x510780
void ScoutVector::Construct()
{
}

// 0x660b80
void ScriptActionQueue::PushNext()
{
}

// 0x63eb80
void ScriptActionVector::PushBack()
{
}

// 0x6378b0
void ScriptQueue::PushEntry()
{
}

// 0x774950
void SerialPort::Close()
{
}

// 0x69de00
void ShapeButton::SetShape()
{
}

// 0x69deb0
void ShapeButton::Draw()
{
}

// 0x69dcf0
void ShapeButtonClass::Init()
{
}

// 0x69dd30
void ShapeButtonClass::Constructor()
{
}

// 0x69ddc0
void ShapeButtonClass::Destructor()
{
}

// 0x4b57f0
void ShapeButtonClass_Destru::QueryInterface()
{
}

// 0x72fbc0
void Sides::MixFileYuriFiles3()
{
}

// 0x624110
void SimpleDialogControl::Constructor()
{
}

// 0x6b1ab0
void SlaveControlVector::Constructor()
{
}

// 0x67c280
void SmudgeTypeList::Copy()
{
}

// 0x67aeb0
void SmudgeTypeVector::Release()
{
}

// 0x67af90
void SmudgeTypeVector::AddSmudge()
{
}

// 0x67afd0
void SmudgeTypeVector::Remove()
{
}

// 0x67aff0
void SmudgeTypeVector::Construct()
{
}

// 0x67b100
void SmudgeTypeVector::Add()
{
}

// 0x42d570
void SortedArray::GetIndex()
{
}

// 0x52b170
void SortedArray::Find()
{
}

// 0x52b210
void SortedArray::BinarySearch2()
{
}

// 0x52b430
void SortedArray::FindValue()
{
}

// 0x52b600
void SortedArray::CheckCache()
{
}

// 0x7107e0
void SortedStateVector::BinarySearch()
{
}

// 0x55f6e0
void SortedVector::BinarySearch()
{
}

// 0x7314c0
void SquadClass::SelectAllMembers()
{
}

// 0x731840
void SquadClass::ProcessMove()
{
}

// 0x4e4230
void StartCombo::IDToIndex()
{
}

// 0x510690
void StartingTechnoVector::Construct()
{
}

// 0x76f6c0
void State_WorldDominationTour::QueryInterface()
{
}

// 0x43ae10
void StaticButtonClass::ReleaseBuffer()
{
}

// 0x6c6640
void StaticButtonClass::SetText()
{
}

// 0x6c6680
void StaticButtonClass::Draw()
{
}

// 0x6c6740
void StaticButtonClass::HitTest()
{
}

// 0x6c67f0
void StaticButtonClass::OnClick()
{
}

// 0x7af2a0
void StaticString::Factory()
{
}

// 0x4aec10
void Straw::QueryInterface()
{
}

// 0x6c9850
void Straw::Dtor()
{
}

// 0x581f90
void Subzone::BuildGraph()
{
}

// 0x589100
void Subzone::Constructor()
{
}

// 0x58a500
void Subzone::CopyDataFrom()
{
}

// 0x40b070
void SubzoneConnectionVector::Destruct()
{
}

// 0x588d60
void SubzoneConnectionVector::ClearAndFree()
{
}

// 0x589c10
void SubzoneConnectionVector::FindByCoord()
{
}

// 0x58b070
void SubzoneHashVector::Construct()
{
}

// 0x58a5b0
void SubzoneTrackingVector::Destruct()
{
}

// 0x55aac0
void SwizzleManager::SaveLoad()
{
}

// 0x6cf230
void SwizzleManager::ConvertWrapper()
{
}

// 0x6cf0f0
void SwizzleManagerClass::Register()
{
}

// 0x6cf2c0
void SwizzleManagerClass::Here_I_Am()
{
}

// 0x6cf350
void SwizzleManagerClass::ConvertNodes()
{
}

// 0x6cf410
void SwizzleManagerClass::Clear()
{
}

// 0x6cf430
void SwizzleManagerClass::Process()
{
}

// 0x6234b0
void SymbolTable::Rebuild()
{
}

// 0x624530
void SymbolTable::Insert()
{
}

// 0x7315a0
void TAction::CenterOnStartCoords()
{
}

// 0x6c5c40
void TClassFactory_AITriggerTypeClass::AddRef()
{
}

// 0x6c5c60
void TClassFactory_AITriggerTypeClass::GetClassName()
{
}

// 0x6c5c90
void TClassFactory_AITriggerTypeClass::GetClassIdentifier()
{
}

// 0x6c5d10
void TClassFactory_AITriggerTypeClass::GetSize()
{
}

// 0x6c36c0
void TClassFactory_AircraftClass::AddRef()
{
}

// 0x6c36e0
void TClassFactory_AircraftClass::GetClassName()
{
}

// 0x6c3710
int TClassFactory_AircraftClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(1752u);
    if ( !v2 )
        return -2147024882;
    void *v6 = AircraftClass::Construct(v2, 0, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c3790
void TClassFactory_AircraftClass::GetSize()
{
}

// 0x6c2ac0
void TClassFactory_AircraftTypeClass::AddRef()
{
}

// 0x6c2ae0
void TClassFactory_AircraftTypeClass::GetClassName()
{
}

// 0x6c2b10
void TClassFactory_AircraftTypeClass::GetClassIdentifier()
{
}

// 0x6c2b90
void TClassFactory_AircraftTypeClass::GetSize()
{
}

// 0x6c0840
void TClassFactory_AirstrikeClass::AddRef()
{
}

// 0x6c0860
void TClassFactory_AirstrikeClass::GetClassName()
{
}

// 0x6c0890
int TClassFactory_AirstrikeClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(96u);
    if ( !v2 )
        return -2147024882;
    void *v6 = AbstractClass::Create(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0910
void TClassFactory_AirstrikeClass::GetSize()
{
}

// 0x6c60c0
void TClassFactory_AlphaShapeClass::AddRef()
{
}

// 0x6c60e0
void TClassFactory_AlphaShapeClass::GetClassName()
{
}

// 0x6c6110
int TClassFactory_AlphaShapeClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x40u);
    if ( !v2 )
        return -2147024882;
    void *v6 = AlphaShapeClass::Constructor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c6190
void TClassFactory_AlphaShapeClass::GetSize()
{
}

// 0x6c3b40
void TClassFactory_AnimTypeClass::AddRef()
{
}

// 0x6c3b60
void TClassFactory_AnimTypeClass::GetClassName()
{
}

// 0x6c3b90
void TClassFactory_AnimTypeClass::GetClassIdentifier()
{
}

// 0x6c3c10
void TClassFactory_AnimTypeClass::GetSize()
{
}

// 0x6c1140
void TClassFactory_BombClass::AddRef()
{
}

// 0x6c1160
void TClassFactory_BombClass::GetClassName()
{
}

// 0x6c1190
int TClassFactory_BombClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x5cu);
    if ( !v2 )
        return -2147024882;
    void *v6 = BombClass::AbstractClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1210
void TClassFactory_BombClass::GetSize()
{
}

// 0x6c3540
void TClassFactory_BuildingClass::AddRef()
{
}

// 0x6c3560
void TClassFactory_BuildingClass::GetClassName()
{
}

// 0x6c3590
int TClassFactory_BuildingClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(1824u);
    if ( !v2 )
        return -2147024882;
    void *v6 = BuildingClass::Construct(v2, 0, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c3610
void TClassFactory_BuildingClass::GetSize()
{
}

// 0x6c03c0
void TClassFactory_BuildingLightClass::AddRef()
{
}

// 0x6c03e0
void TClassFactory_BuildingLightClass::GetClassName()
{
}

// 0x6c0410
int TClassFactory_BuildingLightClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(232u);
    if ( !v2 )
        return -2147024882;
    void *v6 = BuildingLightClass::CTOR(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0490
void TClassFactory_BuildingLightClass::GetSize()
{
}

// 0x6c2940
void TClassFactory_BuildingTypeClass::AddRef()
{
}

// 0x6c2960
void TClassFactory_BuildingTypeClass::GetClassName()
{
}

// 0x6c2990
void TClassFactory_BuildingTypeClass::GetClassIdentifier()
{
}

// 0x6c2a10
void TClassFactory_BuildingTypeClass::GetSize()
{
}

// 0x6c2dc0
void TClassFactory_BulletTypeClass::AddRef()
{
}

// 0x6c2de0
void TClassFactory_BulletTypeClass::GetClassName()
{
}

// 0x6c2e10
void TClassFactory_BulletTypeClass::GetClassIdentifier()
{
}

// 0x6c2e90
void TClassFactory_BulletTypeClass::GetSize()
{
}

// 0x6c0cc0
void TClassFactory_CaptureManagerClass::AddRef()
{
}

// 0x6c0ce0
void TClassFactory_CaptureManagerClass::GetClassName()
{
}

// 0x6c0d10
int TClassFactory_CaptureManagerClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x50u);
    if ( !v2 )
        return -2147024882;
    void *v6 = SmallFunc_471890(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0d90
void TClassFactory_CaptureManagerClass::GetSize()
{
}

// 0x6c0e40
void TClassFactory_DiskLaserClass::AddRef()
{
}

// 0x6c0e60
void TClassFactory_DiskLaserClass::GetClassName()
{
}

// 0x6c0e90
int TClassFactory_DiskLaserClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x40u);
    if ( !v2 )
        return -2147024882;
    void *v6 = DiskLaserClass::DiskLaserClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0f10
void TClassFactory_DiskLaserClass::GetSize()
{
}

// 0x6c3fc0
void TClassFactory_DriveLocomotionClass::AddRef()
{
}

// 0x6c3fe0
void TClassFactory_DriveLocomotionClass::GetClassName()
{
}

// 0x6c4010
int TClassFactory_DriveLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x70u);
    if ( !v2 )
        return -2147024882;
    void *v6 = LocomotionClass::Initialize(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4090
void TClassFactory_DriveLocomotionClass::GetSize()
{
}

// 0x6c48c0
void TClassFactory_DropPodLocomotionClass::AddRef()
{
}

// 0x6c48e0
void TClassFactory_DropPodLocomotionClass::GetClassName()
{
}

// 0x6c4910
int TClassFactory_DropPodLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x30u);
    if ( !v2 )
        return -2147024882;
    void *v6 = SmallFunc_4B5AB0(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4990
void TClassFactory_DropPodLocomotionClass::GetSize()
{
}

// 0x6c51c0
void TClassFactory_FactoryClass::AddRef()
{
}

// 0x6c51e0
void TClassFactory_FactoryClass::GetClassName()
{
}

// 0x6c5210
int TClassFactory_FactoryClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x74u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TeamTypeClass::Construct(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c5290
void TClassFactory_FactoryClass::GetSize()
{
}

// 0x6c4a40
void TClassFactory_FlyLocomotionClass::AddRef()
{
}

// 0x6c4a60
void TClassFactory_FlyLocomotionClass::GetClassName()
{
}

// 0x6c4a90
int TClassFactory_FlyLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x60u);
    if ( !v2 )
        return -2147024882;
    void *v6 = FlyLocomotionClass::LocomotionClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4b10
void TClassFactory_FlyLocomotionClass::GetSize()
{
}

// 0x6c5f40
void TClassFactory_FoggedObjectClass::AddRef()
{
}

// 0x6c5f60
void TClassFactory_FoggedObjectClass::GetClassName()
{
}

// 0x6c5f90
int TClassFactory_FoggedObjectClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x78u);
    if ( !v2 )
        return -2147024882;
    void *v6 = ObjectClass::Construct(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c6010
void TClassFactory_FoggedObjectClass::GetSize()
{
}

// 0x6c3e40
void TClassFactory_HouseClass::AddRef()
{
}

// 0x6c3e60
void TClassFactory_HouseClass::GetClassName()
{
}

// 0x6c3e90
int TClassFactory_HouseClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x160B8u);
    if ( !v2 )
        return -2147024882;
    void *v6 = HouseClass::Construct(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c3f10
void TClassFactory_HouseClass::GetSize()
{
}

// 0x6c3cc0
void TClassFactory_HouseTypeClass::AddRef()
{
}

// 0x6c3ce0
void TClassFactory_HouseTypeClass::GetClassName()
{
}

// 0x6c3d10
void TClassFactory_HouseTypeClass::GetClassIdentifier()
{
}

// 0x6c3d90
void TClassFactory_HouseTypeClass::GetSize()
{
}

// 0x6c42c0
void TClassFactory_HoverLocomotionClass::AddRef()
{
}

// 0x6c42e0
void TClassFactory_HoverLocomotionClass::GetClassName()
{
}

// 0x6c4310
int TClassFactory_HoverLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x78u);
    if ( !v2 )
        return -2147024882;
    void *v6 = LocomotionClass::ProcessData(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4390
void TClassFactory_HoverLocomotionClass::GetSize()
{
}

// 0x6c3840
void TClassFactory_InfantryClass::AddRef()
{
}

// 0x6c3860
void TClassFactory_InfantryClass::GetClassName()
{
}

// 0x6c3890
int TClassFactory_InfantryClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(1776u);
    if ( !v2 )
        return -2147024882;
    void *v6 = InfantryClass::Construct(v2, 0, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c3910
void TClassFactory_InfantryClass::GetSize()
{
}

// 0x6c2c40
void TClassFactory_InfantryTypeClass::AddRef()
{
}

// 0x6c2c60
void TClassFactory_InfantryTypeClass::GetClassName()
{
}

// 0x6c2c90
void TClassFactory_InfantryTypeClass::GetClassIdentifier()
{
}

// 0x6c2d10
void TClassFactory_InfantryTypeClass::GetSize()
{
}

// 0x6c2f40
void TClassFactory_IsometricTileTypeClass::AddRef()
{
}

// 0x6c2f60
void TClassFactory_IsometricTileTypeClass::GetClassName()
{
}

// 0x6c2f90
void TClassFactory_IsometricTileTypeClass::GetClassIdentifier()
{
}

// 0x6c3010
void TClassFactory_IsometricTileTypeClass::GetSize()
{
}

// 0x6c4140
void TClassFactory_JumpjetLocomotionClass::AddRef()
{
}

// 0x6c4160
void TClassFactory_JumpjetLocomotionClass::GetClassName()
{
}

// 0x6c4190
int TClassFactory_JumpjetLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x98u);
    if ( !v2 )
        return -2147024882;
    void *v6 = LocomotionClass::Update(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4210
void TClassFactory_JumpjetLocomotionClass::GetSize()
{
}

// 0x6bfc40
void TClassFactory_LightSourceClass::AddRef()
{
}

// 0x6bfc60
void TClassFactory_LightSourceClass::GetClassName()
{
}

// 0x6bfc90
int TClassFactory_LightSourceClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x4cu);
    if ( !v2 )
        return -2147024882;
    void *v6 = LightSourceClass::Constructor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6bfd10
void TClassFactory_LightSourceClass::GetSize()
{
}

// 0x6c5dc0
void TClassFactory_NeuronClass::AddRef()
{
}

// 0x6c5de0
void TClassFactory_NeuronClass::GetClassName()
{
}

// 0x6c5e10
int TClassFactory_NeuronClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x38u);
    if ( !v2 )
        return -2147024882;
    void *v6 = NeuronClass::NeuronClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c5e90
void TClassFactory_NeuronClass::GetSize()
{
}

// 0x6c30c0
void TClassFactory_OverlayTypeClass::AddRef()
{
}

// 0x6c30e0
void TClassFactory_OverlayTypeClass::GetClassName()
{
}

// 0x6c3110
void TClassFactory_OverlayTypeClass::GetClassIdentifier()
{
}

// 0x6c3190
void TClassFactory_OverlayTypeClass::GetSize()
{
}

// 0x6c0fc0
void TClassFactory_ParasiteClass::AddRef()
{
}

// 0x6c0fe0
void TClassFactory_ParasiteClass::GetClassName()
{
}

// 0x6c1010
int TClassFactory_ParasiteClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x58u);
    if ( !v2 )
        return -2147024882;
    void *v6 = ParasiteClass::Constructor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1090
void TClassFactory_ParasiteClass::GetSize()
{
}

// 0x6c5660
void TClassFactory_ParticleClass::GetClassName()
{
}

// 0x6c5690
int TClassFactory_ParticleClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x138u);
    if ( !v2 )
        return -2147024882;
    void *v6 = ObjectClass::ProcessUpdate(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c5710
void TClassFactory_ParticleClass::GetSize()
{
}

// 0x6c5940
void TClassFactory_ParticleSystemClass::AddRef()
{
}

// 0x6c5960
void TClassFactory_ParticleSystemClass::GetClassName()
{
}

// 0x6c5990
int TClassFactory_ParticleSystemClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x100u);
    if ( !v2 )
        return -2147024882;
    void *v6 = ParticleClass::ProcessCreation(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c5a10
void TClassFactory_ParticleSystemClass::GetSize()
{
}

// 0x6c5ac0
void TClassFactory_ParticleSystemTypeClass::AddRef()
{
}

// 0x6c5ae0
void TClassFactory_ParticleSystemTypeClass::GetClassName()
{
}

// 0x6c5b10
void TClassFactory_ParticleSystemTypeClass::GetClassIdentifier()
{
}

// 0x6c5b90
void TClassFactory_ParticleSystemTypeClass::GetSize()
{
}

// 0x6c57c0
void TClassFactory_ParticleTypeClass::AddRef()
{
}

// 0x6c57e0
void TClassFactory_ParticleTypeClass::GetClassName()
{
}

// 0x6c5810
void TClassFactory_ParticleTypeClass::GetClassIdentifier()
{
}

// 0x6c5890
void TClassFactory_ParticleTypeClass::GetSize()
{
}

// 0x6c12c0
void TClassFactory_RadSiteClass::AddRef()
{
}

// 0x6c12e0
void TClassFactory_RadSiteClass::GetClassName()
{
}

// 0x6c1310
int TClassFactory_RadSiteClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x74u);
    if ( !v2 )
        return -2147024882;
    void *v6 = RadSiteClass::RadSiteClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1390
void TClassFactory_RadSiteClass::GetSize()
{
}

// 0x6c4440
void TClassFactory_RocketLocomotionClass::AddRef()
{
}

// 0x6c4460
void TClassFactory_RocketLocomotionClass::GetClassName()
{
}

// 0x6c4490
int TClassFactory_RocketLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x60u);
    if ( !v2 )
        return -2147024882;
    void *v6 = RocketLocomotionClass::RocketLocomotionClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4510
void TClassFactory_RocketLocomotionClass::GetSize()
{
}

// 0x6c1d40
void TClassFactory_ScriptClass::AddRef()
{
}

// 0x6c1d60
void TClassFactory_ScriptClass::GetClassName()
{
}

// 0x6c1d90
int TClassFactory_ScriptClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(48u);
    if ( !v2 )
        return -2147024882;
    void *v6 = ScriptClass::Construct(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1e10
void TClassFactory_ScriptClass::GetSize()
{
}

// 0x6c1ec0
void TClassFactory_ScriptTypeClass::AddRef()
{
}

// 0x6c1ee0
void TClassFactory_ScriptTypeClass::GetClassName()
{
}

// 0x6c1f10
void TClassFactory_ScriptTypeClass::GetClassIdentifier()
{
}

// 0x6c1f90
void TClassFactory_ScriptTypeClass::GetSize()
{
}

// 0x6c4ec0
void TClassFactory_ShipLocomotionClass::AddRef()
{
}

// 0x6c4ee0
void TClassFactory_ShipLocomotionClass::GetClassName()
{
}

// 0x6c4f10
int TClassFactory_ShipLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x70u);
    if ( !v2 )
        return -2147024882;
    void *v6 = LocomotionClass::Process(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4f90
void TClassFactory_ShipLocomotionClass::GetSize()
{
}

// 0x6bfdc0
void TClassFactory_SideClass::AddRef()
{
}

// 0x6bfde0
void TClassFactory_SideClass::GetClassName()
{
}

// 0x6bfe10
int TClassFactory_SideClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(180u);
    if ( !v2 )
        return -2147024882;
    void *v6 = SideClass::Construct(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6bfe90
void TClassFactory_SideClass::GetSize()
{
}

// 0x6c0b40
void TClassFactory_SlaveManagerClass::AddRef()
{
}

// 0x6c0b60
void TClassFactory_SlaveManagerClass::GetClassName()
{
}

// 0x6c0b90
int TClassFactory_SlaveManagerClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x64u);
    if ( !v2 )
        return -2147024882;
    void *v6 = SlaveManagerClass::Constructor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0c10
void TClassFactory_SlaveManagerClass::GetSize()
{
}

// 0x6c3240
void TClassFactory_SmudgeTypeClass::AddRef()
{
}

// 0x6c3260
void TClassFactory_SmudgeTypeClass::GetClassName()
{
}

// 0x6c3290
void TClassFactory_SmudgeTypeClass::GetClassIdentifier()
{
}

// 0x6c3310
void TClassFactory_SmudgeTypeClass::GetSize()
{
}

// 0x6c09c0
void TClassFactory_SpawnManagerClass::AddRef()
{
}

// 0x6c09e0
void TClassFactory_SpawnManagerClass::GetClassName()
{
}

// 0x6c0a10
int TClassFactory_SpawnManagerClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x74u);
    if ( !v2 )
        return -2147024882;
    void *v6 = SpawnManagerClass::Constructor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0a90
void TClassFactory_SpawnManagerClass::GetSize()
{
}

// 0x6c18c0
void TClassFactory_TActionClass::AddRef()
{
}

// 0x6c18e0
void TClassFactory_TActionClass::GetClassName()
{
}

// 0x6c1910
int TClassFactory_TActionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x94u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TActionClass::ctor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1990
void TClassFactory_TActionClass::GetSize()
{
}

// 0x6c1440
void TClassFactory_TEventClass::AddRef()
{
}

// 0x6c1460
void TClassFactory_TEventClass::GetClassName()
{
}

// 0x6c1490
int TClassFactory_TEventClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x58u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TActionClass::TActionClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1510
void TClassFactory_TEventClass::GetSize()
{
}

// 0x6c2040
void TClassFactory_TagClass::AddRef()
{
}

// 0x6c2060
void TClassFactory_TagClass::GetClassName()
{
}

// 0x6c2090
int TClassFactory_TagClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(56u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TeknoClass::GetType(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c2110
void TClassFactory_TagClass::GetSize()
{
}

// 0x6c21c0
void TClassFactory_TagTypeClass::AddRef()
{
}

// 0x6c21e0
void TClassFactory_TagTypeClass::GetClassName()
{
}

// 0x6c2210
void TClassFactory_TagTypeClass::GetClassIdentifier()
{
}

// 0x6c2290
void TClassFactory_TagTypeClass::GetSize()
{
}

// 0x6c2640
void TClassFactory_TaskForceClass::AddRef()
{
}

// 0x6c2660
void TClassFactory_TaskForceClass::GetClassName()
{
}

// 0x6c2690
int TClassFactory_TaskForceClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(212u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TaskForceClass::Construct(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c2710
void TClassFactory_TaskForceClass::GetSize()
{
}

// 0x6c2340
void TClassFactory_TeamClass::AddRef()
{
}

// 0x6c2360
void TClassFactory_TeamClass::GetClassName()
{
}

// 0x6c2390
int TClassFactory_TeamClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(160u);
    if ( !v2 )
        return -2147024882;
    void *v6 = MissionClass::Construct(v2, 0, 0, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c2410
void TClassFactory_TeamClass::GetSize()
{
}

// 0x6c24c0
void TClassFactory_TeamTypeClass::AddRef()
{
}

// 0x6c24e0
void TClassFactory_TeamTypeClass::GetClassName()
{
}

// 0x6c2510
void TClassFactory_TeamTypeClass::GetClassIdentifier()
{
}

// 0x6c2590
void TClassFactory_TeamTypeClass::GetSize()
{
}

// 0x6c4bc0
void TClassFactory_TeleportLocomotionClass::AddRef()
{
}

// 0x6c4be0
void TClassFactory_TeleportLocomotionClass::GetClassName()
{
}

// 0x6c4c10
int TClassFactory_TeleportLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x4cu);
    if ( !v2 )
        return -2147024882;
    void *v6 = TeleportLocomotionClass::TeleportLocomotionClass(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4c90
void TClassFactory_TeleportLocomotionClass::GetSize()
{
}

// 0x6c06c0
void TClassFactory_TemporalClass::AddRef()
{
}

// 0x6c06e0
void TClassFactory_TemporalClass::GetClassName()
{
}

// 0x6c0710
int TClassFactory_TemporalClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x50u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TemporalClass::Constructor(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0790
void TClassFactory_TemporalClass::GetSize()
{
}

// 0x6bff40
void TClassFactory_TiberiumClass::AddRef()
{
}

// 0x6bff60
void TClassFactory_TiberiumClass::GetClassName()
{
}

// 0x6bff90
int TClassFactory_TiberiumClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(296u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TiberiumClass::TiberiumClass(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0010
void TClassFactory_TiberiumClass::GetSize()
{
}

// 0x6c1a40
void TClassFactory_TriggerClass::AddRef()
{
}

// 0x6c1a60
void TClassFactory_TriggerClass::GetClassName()
{
}

// 0x6c1a90
int TClassFactory_TriggerClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(72u);
    if ( !v2 )
        return -2147024882;
    void *v6 = TriggerClass::Construct(v2, 0);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1b10
void TClassFactory_TriggerClass::GetSize()
{
}

// 0x6c1bc0
void TClassFactory_TriggerTypeClass::AddRef()
{
}

// 0x6c1be0
void TClassFactory_TriggerTypeClass::GetClassName()
{
}

// 0x6c1c10
void TClassFactory_TriggerTypeClass::GetClassIdentifier()
{
}

// 0x6c1c90
void TClassFactory_TriggerTypeClass::GetSize()
{
}

// 0x6c45c0
void TClassFactory_TunnelLocomotionClass::AddRef()
{
}

// 0x6c45e0
void TClassFactory_TunnelLocomotionClass::GetClassName()
{
}

// 0x6c4610
int TClassFactory_TunnelLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x3cu);
    if ( !v2 )
        return -2147024882;
    void *v6 = SmallFunc_728A00(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4690
void TClassFactory_TunnelLocomotionClass::GetSize()
{
}

// 0x6c33c0
void TClassFactory_UnitClass::AddRef()
{
}

// 0x6c33e0
void TClassFactory_UnitClass::GetClassName()
{
}

// 0x6c3410
int TClassFactory_UnitClass::ddtor(int *a2, int a3)
{
    int v1 = a2[1];
    int v2;
    if ( a3 )
        v2 = v1 + 1;
    else
        v2 = v1 - 1;
    a2[1] = v2;
    return 0;
}

// 0x6c3490
void TClassFactory_UnitClass::GetSize()
{
}

// 0x6c27c0
void TClassFactory_UnitTypeClass::AddRef()
{
}

// 0x6c27e0
void TClassFactory_UnitTypeClass::GetClassName()
{
}

// 0x6c2810
void TClassFactory_UnitTypeClass::GetClassIdentifier()
{
}

// 0x6c2890
void TClassFactory_UnitTypeClass::GetSize()
{
}

// 0x6c1740
void TClassFactory_VoxelAnimClass::AddRef()
{
}

// 0x6c1760
void TClassFactory_VoxelAnimClass::GetClassName()
{
}

// 0x6c1790
int TClassFactory_VoxelAnimClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x148u);
    if ( !v2 )
        return -2147024882;
    void *v6 = ObjectClass::Initialize(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c1810
void TClassFactory_VoxelAnimClass::GetSize()
{
}

// 0x6c15c0
void TClassFactory_VoxelAnimTypeClass::AddRef()
{
}

// 0x6c15e0
void TClassFactory_VoxelAnimTypeClass::GetClassName()
{
}

// 0x6c1610
void TClassFactory_VoxelAnimTypeClass::GetClassIdentifier()
{
}

// 0x6c1690
void TClassFactory_VoxelAnimTypeClass::GetSize()
{
}

// 0x6c4740
void TClassFactory_WalkLocomotionClass::AddRef()
{
}

// 0x6c4760
void TClassFactory_WalkLocomotionClass::GetClassName()
{
}

// 0x6c4790
int TClassFactory_WalkLocomotionClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x3cu);
    if ( !v2 )
        return -2147024882;
    void *v6 = VoxelAnimClass::Reset(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c4810
void TClassFactory_WalkLocomotionClass::GetSize()
{
}

// 0x6c5340
void TClassFactory_WarheadTypeClass::AddRef()
{
}

// 0x6c5360
void TClassFactory_WarheadTypeClass::GetClassName()
{
}

// 0x6c5390
void TClassFactory_WarheadTypeClass::GetClassIdentifier()
{
}

// 0x6c5410
void TClassFactory_WarheadTypeClass::GetSize()
{
}

// 0x6c0540
void TClassFactory_WaypointPathClass::AddRef()
{
}

// 0x6c0560
void TClassFactory_WaypointPathClass::GetClassName()
{
}

// 0x6c0590
int TClassFactory_WaypointPathClass::ddtor(void *a2, int a3, _DWORD *a4)
{
    _DWORD *v8 = a4;
    if ( !v8 )
        return -2147024809;
    *v8 = 0;
    if ( a2 )
        return -2147221232;
    void *v2 = OperatorNew(0x40u);
    if ( !v2 )
        return -2147024882;
    void *v6 = WaypointPathClass::Init(v2);
    if ( !v6 )
        return -2147024882;
    int v5 = v6->vtQI(a3, v8);
    if ( v5 < 0 )
        v6->vtRel(1);
    return v5;
}

// 0x6c0610
void TClassFactory_WaypointPathClass::GetSize()
{
}

// 0x6c54c0
void TClassFactory_WeaponTypeClass::AddRef()
{
}

// 0x6c54e0
void TClassFactory_WeaponTypeClass::GetClassName()
{
}

// 0x6c5510
void TClassFactory_WeaponTypeClass::GetClassIdentifier()
{
}

// 0x6c5590
void TClassFactory_WeaponTypeClass::GetSize()
{
}

// 0x510640
void TagClassVector::Construct()
{
}

// 0x4a9720
void Targeting::Readd()
{
}

// 0x6b7100
void TaskManager::Update()
{
}

// 0x4cabf0
void TechnoTypeVector::Constructor()
{
}

// 0x68c200
void TechnoTypeVector::Construct()
{
}

// 0x6e4de0
void TeknoClass::GetType()
{
}

// 0x67b370
void TerrainTypeVector::Construct()
{
}

// 0x770020
void Territory_WorldDominationTour::QueryInterface()
{
}

// 0x545000
void TheatreClass::InitView()
{
}

// 0x58bdc0
void TileData::Constructor()
{
}

// 0x58c070
void TileNode::Cleanup()
{
}

// 0x58d0a0
void TileSystem::LookupMapTile()
{
}

// 0x58d620
void TileSystem::BuildNodes()
{
}

// 0x58e5d0
void TileSystem::AnalyzeTileConnectivity()
{
}

// 0x5ad740
void TileSystem::Constructor()
{
}

// 0x589c50
void TileVector::PushBack()
{
}

// 0x4b5810
void ToggleClass::QueryInterface()
{
}

// 0x723e60
void ToggleClass::Construct()
{
}

// 0x536fa0
void ToggleRepairModeCommandClass::Execute()
{
}

// 0x43a0b0
void Triple::Set()
{
}

// 0x67a740
void UnitTypeList::Constructor()
{
}

// 0x512b30
void UnitTypeVector::QueryInterface()
{
}

// 0x513050
void UnitTypeVector::Release()
{
}

// 0x513130
void UnitTypeVector::Add()
{
}

// 0x513170
void UnitTypeVector::Remove()
{
}

// 0x513190
void UnitTypeVector::Construct()
{
}

// 0x759c30
void VQAClass::AdvanceFrame()
{
}

// 0x74dc00
void VeinholeClass::SelectGrowthPosition()
{
}

// 0x74fff0
void VeinholeClass::GetState()
{
}

// 0x74c420
void VeinholeMonsterClass::Construct()
{
}

// 0x74c5b0
void VeinholeMonsterClass::Constructor()
{
}

// 0x74ce50
void VeinholeMonsterClass::UpdateGrowth()
{
}

// 0x74d5d0
void VeinholeMonsterClass::ProcessExpansion()
{
}

// 0x74e930
void VeinholeMonsterClass::PlaceGrowth()
{
}

// 0x74f760
void VersionInfo::Read()
{
}

// 0x692b60
void Viewport::ProcessScroll()
{
}

// 0x753e00
void Viewport::Clear()
{
}

// 0x407510
void VtableStub::Push_407510()
{
}

// 0x425270
void VtableStub::Method_425270()
{
}

// 0x477740
void VtableStub::Method_477740()
{
}

// 0x5175d0
void VtableStub::Method_5175D0()
{
}

// 0x55cbf0
void VtableStub::Method_55CBF0()
{
}

// 0x76f600
void WDTClass::GetCellType()
{
}

// 0x76f670
void WDTClass::CountCellType()
{
}

// 0x7693f0
void WDTGame::ToggleTeamMode()
{
}

// 0x76d180
void WDTGame::ProcessTerritorySelection()
{
}

// 0x76e4f0
void WDTGame::ReviewHistory()
{
}

// 0x76f030
void WDTGame::Constructor()
{
}

// 0x76bfa0
void WDTObject::GetSize()
{
}

// 0x76ff30
void WDTObject::GetAndClearFlag()
{
}

// 0x76afc0
void WDTState::Constructor_WDTState()
{
}

// 0x76b6f0
void WDTState::QueryInterface()
{
}

// 0x7693a0
void WDTSurface::ToggleState()
{
}

// 0x769440
void WDTSurface::PointInRect()
{
}

// 0x7b6970
void WString::Append()
{
}

// 0x7b6f40
void WString::TrimRight()
{
}

// 0x5a9a70
void WaypointPath::Constructor()
{
}

// 0x7cbb76
void WideChar::ToLong()
{
}

// 0x7dc720
void WinAPI::Wrapper()
{
}

// 0x774120
void WinModemClass::Construct()
{
}

// 0x774410
void WinModemClass::AddRef()
{
}

// 0x7748a0
void WinModemClass::Release()
{
}

// 0x7748b0
void WinModemClass::GetClassIdentifier()
{
}

// 0x774900
void WinModemClass::Init()
{
}

// 0x7ac5d0
void WonlineStringDialogControl::QueryInterface()
{
}

// 0x42dd60
void WordVector::Constructor()
{
}

// 0x6d2070
void World::ToScreen()
{
}

// 0x7680c0
void WorldDomination::SetupTerritoryNodes()
{
}

// 0x53d580
void ZBuffer::RenderSprite()
{
}

// 0x58a3d0
void ZoneConnectionVector::Destruct()
{
}

// legal stubs for misc_ext.hpp cleanups (build-redline session)
// 0x41C430 numeric-name legalized
// 0x424CA0 numeric-name legalized
// 0x46B260 numeric-name legalized
// 0x4B4D60 numeric-name legalized
// 0x6342D0 numeric-name legalized
// 0x425270 numeric-name legalized
// 0x477740 numeric-name legalized
// 0x5175D0 numeric-name legalized
// 0x55CBF0 numeric-name legalized
// 0x543780 constructor placeholder
IsometricTileClass::IsometricTileClass() {}
// 0x4A7A30 constructor placeholder
DiskLaserClass::DiskLaserClass() {}
// 0x43A350 constructor placeholder
NeuronClass::NeuronClass() {}

WorldDominationTour::WorldDominationTour() {}
} // namespace gamemd
