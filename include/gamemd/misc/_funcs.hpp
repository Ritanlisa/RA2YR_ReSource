// Auto-generated from tools/functions_by_module.json
// Module: misc+network, namespace: gamemd
// 370 functions: 92 member (31 classes), 278 global/static

#pragma once

#include <windows.h>

// Forward declarations
class AbstractClass;
class AircraftClass;
class Audio;
class Audio3D;
class AudioCodec;
class AudioController;
class AudioFrame;
class AudioIndex;
class AudioQueue;
class AudioSettings;
class AudioStream;
class AudioTimer;
class BuildingClass;
class CellClass;
class Connection;
class ConnectionPointClass;
class CoordStruct;
class HouseClass;
class HouseTypeClass;
class ILocomotion;
class InfantryClass;
class LocomotionClass;
class Locomotor;
class Mission;
class Movement;
class Multiplayer;
class Network;
class NetworkGameSetup;
class NetworkLobby;
class NetworkOptions;
class NetworkScore;
class NetworkSettings;
class NetworkShare;
class ObjectClass;
class RepeatableTimer;
class Rules;
class RulesClass;
class Session;
class SessionClass;
class SuperWeapon;
class SuperWeaponClass;
class SuperWeaponType;
class SuperWeaponTypeClass;
class TechnoClass;
class ThemeClass;
class UnitClass;
class VocClass;
class Voxel;
class VoxelAnim;
class VoxelAnimClass;
class VoxelAnimTypeClass;
class VoxelModel;
class WDT;
class WarheadTypeClass;
class WatchdogTimer;
class Winsock;
class WinsockInterfaceClass;

namespace gamemd {

// === AudioIndex ===
// 1 member function(s)
unsigned int* AudioIndex::GetSampleInformation(); // 0x401640

// === AudioStream ===
// 4 member function(s)
int AudioStream::CheckFormatChanged(); // 0x402800
void AudioStream::CleanupChannels(); // 0x404E70
int AudioStream::UpdateTimers(); // 0x404FD0
int AudioStream::UpdateCountdowners(); // 0x405040

// === AudioQueue ===
// 9 member function(s)
int AudioQueue::PreallocateChannels(); // 0x403530
int AudioQueue::FindBestChannel(); // 0x4035F0
int AudioQueue::DeactivateAllMatching(); // 0x403770
int AudioQueue::IsEmpty(); // 0x407B40
int AudioQueue::IsNotEmpty(); // 0x407B50
int AudioQueue::HaltVoices(); // 0x4081A0
int* AudioQueue::IncrementPriority(); // 0x408200
int AudioQueue::ReleaseBuffers(); // 0x408270
int AudioQueue::DrainAll(); // 0x750FA0

// === Audio ===
// 6 member function(s)
BOOL Audio::ApplyFormatFlags(); // 0x406870
void Audio::Shutdown(); // 0x406D40
BOOL Audio::IsSoundEnabled(); // 0x407000
int Audio::Callback(); // 0x4093B0
void* Audio::LoadSoundINI(); // 0x7513F0
int Audio::IsPlaying(); // 0x7529E0

// === AudioTimer ===
// 1 member function(s)
int* AudioTimer::DecrementAll(); // 0x408230

// === AudioController ===
// 2 member function(s)
int AudioController::LoadThemeBank(); // 0x409DE0
void AudioController::GetVolume(); // 0x72D170

// === RulesClass ===
// 2 member function(s)
double RulesClass::GetFiringDistance(); // 0x48ACF0
int RulesClass::LoadTypeList(); // 0x67BDD0

// === VoxelAnimClass ===
// 3 member function(s)
unsigned int VoxelAnimClass::ProcessFrame(); // 0x4CAF20
int VoxelAnimClass::SaveLoad_Prefix_0(); // 0x74AA10
int VoxelAnimClass::ddtor(); // 0x74AAD0

// === Audio3D ===
// 1 member function(s)
float* Audio3D::ComputeRotation(); // 0x55A7D0

// === AudioSettings ===
// 1 member function(s)
int AudioSettings::DlgProc(); // 0x6B6300

// === SuperWeaponClass ===
// 2 member function(s)
long SuperWeaponClass::ProcessCharged(); // 0x6C5640
int SuperWeaponClass::UpdateAll(); // 0x6DA740

// === SuperWeaponTypeClass ===
// 3 member function(s)
int SuperWeaponTypeClass::SD_vt03(); // 0x6CE7C0
int SuperWeaponTypeClass::SaveLoad_Prefix(); // 0x6CE800
int SuperWeaponTypeClass::SaveLoad_Prefix_0(); // 0x6CE8D0

// === VoxelAnimTypeClass ===
// 4 member function(s)
char VoxelAnimTypeClass::LoadFromINI(); // 0x74B050
int VoxelAnimTypeClass::GetClassIdentifier(); // 0x74B7D0
int VoxelAnimTypeClass::SaveLoad_Prefix(); // 0x74B810
int VoxelAnimTypeClass::SaveLoad_Prefix_0(); // 0x74B8D0

// === VocClass ===
// 1 member function(s)
char* VocClass::GetSampleNameByIndex(); // 0x751590

// === ThemeClass ===
// 2 member function(s)
int ThemeClass::ClearQueues(); // 0x752370
void ThemeClass::GetField(); // 0x752AB0

// === AudioFrame ===
// 1 member function(s)
int AudioFrame::CounterInc(); // 0x7535B0

// === Voxel ===
// 3 member function(s)
int Voxel::SetProjectionAngle(); // 0x754C00
int Voxel::Projection_Setup(); // 0x754CB0
int Voxel::InitDistanceTable(); // 0x75F020

// === VoxelModel ===
// 2 member function(s)
char VoxelModel::LoadVXLHeader(); // 0x756DD0
char VoxelModel::ParseSectionData(); // 0x756F80

// === VoxelAnim ===
// 1 member function(s)
char VoxelAnim::ComputeTransform(); // 0x7586F0

// === WarheadTypeClass ===
// 4 member function(s)
int WarheadTypeClass::vt[03](); // 0x75E080
int WarheadTypeClass::SaveLoad_Prefix(); // 0x75E0C0
int WarheadTypeClass::SaveLoad_Prefix_0(); // 0x75E2C0
char WarheadTypeClass::ReadINI(); // 0x772080

// === AudioCodec ===
// 1 member function(s)
char* AudioCodec::Decode(); // 0x7C81DB

// === Network ===
// 16 member function(s)
char Network::Dispatch(); // 0x48D1E0
char Network::Init(); // 0x52F3F0
char Network::QueryAddress(); // 0x5D90E0
short Network::WaitForPacket(); // 0x5D9220
int Network::ShutdownInterface(); // 0x5DA720
int Network::InitPlayerSlots(); // 0x5E8B60
int Network::CleanupOnDisconnect(); // 0x5F0040
char Network::AddFrameEvent(); // 0x6471A0
void Network::QueueProcessingLoop(); // 0x6475F0
int Network::ProcessEventList(); // 0x64C380
char Network::RecordEvent(); // 0x6521C0
int Network::SendUnreachable(); // 0x6523A0
wchar_t* Network::ProcessAddressChange(); // 0x6640E0
int Network::GetMaxPacketSize(); // 0x74FD20
char Network::IsLobbyFeature(); // 0x77D970
void Network::SyncPlayerList(); // 0x792F10

// === ConnectionPointClass ===
// 7 member function(s)
long ConnectionPointClass::AddRef(); // 0x4A0520
long ConnectionPointClass::Release(); // 0x4A0540
int ConnectionPointClass::ddtor(); // 0x4A05D0
int ConnectionPointClass::Advise(); // 0x4A0610
int ConnectionPointClass::Unadvise(); // 0x4A0630
int ConnectionPointClass::EnumConnections(); // 0x4A0700
int ConnectionPointClass::GetConnectionInterface(); // 0x4A0760

// === NetworkOptions ===
// 1 member function(s)
int NetworkOptions::DlgProc(); // 0x560480

// === NetworkGameSetup ===
// 1 member function(s)
int NetworkGameSetup::DlgProc(); // 0x5B7970

// === NetworkLobby ===
// 7 member function(s)
int NetworkLobby::GetPlayerCount(); // 0x5DA080
int NetworkLobby::UpdatePlayerList(); // 0x5DB9B0
char NetworkLobby::CreateGame(); // 0x5DC350
int NetworkLobby::DlgProc(); // 0x5DE520
char NetworkLobby::MessageHandler(); // 0x5E00B0
bool NetworkLobby::CheckMinPlayers(); // 0x5E9510
char NetworkLobby::FillOptionCombo(); // 0x5EE3A0

// === NetworkSettings ===
// 1 member function(s)
int NetworkSettings::DlgProc(); // 0x5DDBD0

// === NetworkShare ===
// 1 member function(s)
int NetworkShare::GetField(); // 0x5E8DA0

// === NetworkScore ===
// 1 member function(s)
int NetworkScore::DlgProc(); // 0x64AE50

// === SessionClass ===
// 2 member function(s)
unsigned int SessionClass::GetPlayerColorScheme(); // 0x69A310
void SessionClass::BuildLaunchString(); // 0x78F000

// === WinsockInterfaceClass ===
// 1 member function(s)
int WinsockInterfaceClass::Destru_vt16(); // 0x7B2770

// === Global & Static Functions ===
// 278 function(s)

unsigned long AudioStreamThreadProc(); // 0x4095B0
short MoveCoordByDirection(); // 0x40ACD0
unsigned int* WalkPathClassPath(); // 0x429780
char WalkLineOfSight(); // 0x42BE20
char DriveControlCD(); // 0x47A920
void RemoveTarget(); // 0x4A9770
char DispatchSelectionWaypointMove(); // 0x4AE750
int JumpjetLocomotionClass::sub_4AF610(); // 0x4AF610
HRESULT DriveLocomotionClass::BeginMove(); // 0x4AF780
HRESULT DriveLocomotionClass::LoadFromStream(); // 0x4AF800
int JumpjetLocomotionClass::sub_4AF8E0(); // 0x4AF8E0
int JumpjetLocomotionClass::sub_4AF930(); // 0x4AF930
bool JumpjetLocomotionClass::sub_4AF970(); // 0x4AF970
unsigned int* JumpjetLocomotionClass::sub_4AFB40(); // 0x4AFB40
bool JumpjetLocomotionClass::sub_4AFB80(); // 0x4AFB80
bool JumpjetLocomotionClass::sub_4AFC20(); // 0x4AFC20
unsigned int* JumpjetLocomotionClass::sub_4AFC90(); // 0x4AFC90
unsigned int* JumpjetLocomotionClass::sub_4AFCC0(); // 0x4AFCC0
unsigned int* JumpjetLocomotionClass::sub_4AFD40(); // 0x4AFD40
int JumpjetLocomotionClass::sub_4AFE00(); // 0x4AFE00
float* JumpjetLocomotionClass::ComputeVoxelTransform(); // 0x4AFF60
float* JumpjetLocomotionClass::sub_4B0410(); // 0x4B0410
int JumpjetLocomotionClass::sub_4B04D0(); // 0x4B04D0
char ProcessJumpjetMotion(); // 0x4B0500
char JumpjetLocomotionClass::SetWaypointTarget(); // 0x4B0C40
char JumpjetLocomotionClass::sub_4B0EF0(); // 0x4B0EF0
int JumpjetLocomotionClass::sub_4B4820(); // 0x4B4820
int DriveLocomotionClass::ddtor(); // 0x4B4830
int JumpjetLocomotionClass::sub_4B4880(); // 0x4B4880
char JumpjetLocomotionClass::sub_4B48D0(); // 0x4B48D0
bool JumpjetLocomotionClass::IsAtDestination(); // 0x4B4920
char JumpjetLocomotionClass::sub_4B4B00(); // 0x4B4B00
int JumpjetLocomotionClass::sub_4B4BE0(); // 0x4B4BE0
int JumpjetLocomotionClass::sub_4B4BF0(); // 0x4B4BF0
int JumpjetLocomotionClass::sub_4B4C00(); // 0x4B4C00
int JumpjetLocomotionClass::sub_4B4C10(); // 0x4B4C10
int JumpjetLocomotionClass::sub_4B4C20(); // 0x4B4C20
long DriveLocomotionClass::AddRef(); // 0x4B4CB0
long DriveLocomotionClass::Release(); // 0x4B4CC0
BOOL JumpjetLocomotionClass::sub_4B4CD0(); // 0x4B4CD0
int JumpjetLocomotionClass::sub_4B4D90(); // 0x4B4D90
long JumpjetLocomotionClass::sub_4B4DA0(); // 0x4B4DA0
long JumpjetLocomotionClass::sub_4B4DB0(); // 0x4B4DB0
unsigned int* JumpjetLocomotionClass::sub_4B5B40(); // 0x4B5B40
char DroppodLocomotionClass::ILoco_Process(); // 0x4B5B70
void** JumpjetLocomotionClass::UpdateMovementPosition(); // 0x4B6040
int DropPodLocomotionClass::ddtor(); // 0x4B6200
HRESULT DropPodLocomotionClass::BeginMove(); // 0x4B6240
HRESULT DropPodLocomotionClass::UpdateMovement(); // 0x4B62C0
int JumpjetLocomotionClass::sub_4B63B0(); // 0x4B63B0
int JumpjetLocomotionClass::sub_4B6400(); // 0x4B6400
bool JumpjetLocomotionClass::sub_4B6440(); // 0x4B6440
int JumpjetLocomotionClass::sub_4B64D0(); // 0x4B64D0
int JumpjetLocomotionClass::sub_4B64E0(); // 0x4B64E0
BOOL JumpjetLocomotionClass::sub_4B65F0(); // 0x4B65F0
int JumpjetLocomotionClass::Thunk_VtableDispatch4(); // 0x4B6610
long DropPodLocomotionClass::AddRef(); // 0x4B66A0
long DropPodLocomotionClass::Release(); // 0x4B66B0
BOOL JumpjetLocomotionClass::sub_4B66C0(); // 0x4B66C0
int JumpjetLocomotionClass::sub_4B6740(); // 0x4B6740
long JumpjetLocomotionClass::sub_4B6750(); // 0x4B6750
long JumpjetLocomotionClass::sub_4B6760(); // 0x4B6760
int JumpjetLocomotionClass::sub_4B6770(); // 0x4B6770
long JumpjetLocomotionClass::sub_4B6780(); // 0x4B6780
long JumpjetLocomotionClass::sub_4B6790(); // 0x4B6790
wchar_t* LocomotionClass::UpdateAll(); // 0x4C54A0
int JumpjetLocomotionClass::sub_4CCA20(); // 0x4CCA20
BOOL JumpjetLocomotionClass::sub_4CCA90(); // 0x4CCA90
bool JumpjetLocomotionClass::sub_4CCAC0(); // 0x4CCAC0
unsigned int* JumpjetLocomotionClass::sub_4CCAE0(); // 0x4CCAE0
char JumpjetLocomotionClass::ProcessLocomotionStep(); // 0x4CCB40
char JumpjetLocomotionClass::UpdateFootLocomotion(); // 0x4CCC80
char JumpjetLocomotionClass::ComputeMoveToPosition(); // 0x4CCFD0
float* JumpjetLocomotionClass::ComputeRotationMatrix(); // 0x4CF610
unsigned int* JumpjetLocomotionClass::CalculateBobOffset(); // 0x4CF830
unsigned int* JumpjetLocomotionClass::sub_4CF940(); // 0x4CF940
float* JumpjetLocomotionClass::ComputeVoxelMatrix(); // 0x4CFB00
char JumpjetLocomotionClass::sub_4CFC10(); // 0x4CFC10
int FlyLocomotionClass::ddtor(); // 0x4CFC80
int FlyLocomotionClass::BeginMove(); // 0x4CFCC0
int JumpjetLocomotionClass::sub_4CFCF0(); // 0x4CFCF0
int JumpjetLocomotionClass::sub_4CFD20(); // 0x4CFD20
char JumpjetLocomotionClass::sub_4CFD90(); // 0x4CFD90
bool JumpjetLocomotionClass::sub_4CFDA0(); // 0x4CFDA0
long long JumpjetLocomotionClass::sub_4CFE20(); // 0x4CFE20
int JumpjetLocomotionClass::sub_4CFE50(); // 0x4CFE50
void FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(); // 0x4CFE80
int JumpjetLocomotionClass::GetInterface(); // 0x4D0510
long JumpjetLocomotionClass::GetInterface2(); // 0x4D0520
long JumpjetLocomotionClass::Stub2(); // 0x4D0530
char FootClass::MovementStep(); // 0x4D3920
char FootClass::MovementAI(); // 0x4DA530
void*** AbstractClass::RemoveObjectFromHouse(); // 0x4FB9B0
float* JumpjetLocomotionClass::sub_5142A0(); // 0x5142A0
BOOL JumpjetLocomotionClass::sub_514C30(); // 0x514C30
BOOL JumpjetLocomotionClass::sub_514C80(); // 0x514C80
unsigned int* JumpjetLocomotionClass::sub_514CB0(); // 0x514CB0
unsigned int* JumpjetLocomotionClass::sub_514D10(); // 0x514D10
unsigned int* JumpjetLocomotionClass::SetMovementTarget(); // 0x514D90
unsigned int* JumpjetLocomotionClass::sub_516320(); // 0x516320
char JumpjetLocomotionClass::sub_516370(); // 0x516370
int JumpjetLocomotionClass::sub_516BF0(); // 0x516BF0
bool JumpjetLocomotionClass::sub_516C70(); // 0x516C70
char JumpjetLocomotionClass::TryMoveToAdjacentCell(); // 0x516E10
char JumpjetLocomotionClass::sub_516FC0(); // 0x516FC0
int HoverLocomotionClass::ddtor(); // 0x517070
int HoverLocomotionClass::BeginMove(); // 0x5170B0
int JumpjetLocomotionClass::sub_517100(); // 0x517100
int JumpjetLocomotionClass::sub_5171C0(); // 0x5171C0
bool JumpjetLocomotionClass::sub_517210(); // 0x517210
int JumpjetLocomotionClass::InitMovementParams(); // 0x54AD30
char JumpjetLocomotionClass::sub_54AE50(); // 0x54AE50
unsigned int* JumpjetLocomotionClass::sub_54AE60(); // 0x54AE60
char JumpjetLocomotionClass::DispatchLocomotion(); // 0x54AEC0
int JumpjetLocomotionClass::SmoothObjectPlacement(); // 0x54B1C0
int JumpjetLocomotionClass::MoveToDestination(); // 0x54B4D0
char JumpjetLocomotionClass::sub_54B6E0(); // 0x54B6E0
int JumpjetLocomotionClass::GetClassIdentifier(); // 0x54B710
HRESULT JumpjetLocomotionClass::InitClass(); // 0x54B750
HRESULT JumpjetLocomotionClass::LoadFromStream(); // 0x54B7E0
int JumpjetLocomotionClass::sub_54B8D0(); // 0x54B8D0
bool JumpjetLocomotionClass::sub_54D0D0(); // 0x54D0D0
char JumpjetLocomotionClass::sub_54D930(); // 0x54D930
unsigned int* JumpjetLocomotionClass::sub_54D9B0(); // 0x54D9B0
int JumpjetLocomotionClass::sub_54DA00(); // 0x54DA00
int JumpjetLocomotionClass::sub_54DA50(); // 0x54DA50
bool JumpjetLocomotionClass::sub_54DB00(); // 0x54DB00
int JumpjetLocomotionClass::sub_54DB50(); // 0x54DB50
float* JumpjetLocomotionClass::ComputeMovementTransform(); // 0x54DCC0
long JumpjetLocomotionClass::AddRef(); // 0x54DF50
long JumpjetLocomotionClass::Release(); // 0x54DF60
BOOL JumpjetLocomotionClass::sub_54DF70(); // 0x54DF70
int JumpjetLocomotionClass::sub_54DFF0(); // 0x54DFF0
long JumpjetLocomotionClass::sub_54E000(); // 0x54E000
long JumpjetLocomotionClass::sub_54E010(); // 0x54E010
int JumpjetLocomotionClass::sub_54E020(); // 0x54E020
long JumpjetLocomotionClass::sub_54E030(); // 0x54E030
long JumpjetLocomotionClass::sub_54E040(); // 0x54E040
int JumpjetLocomotionClass::CheckState(); // 0x55ABB0
unsigned int* JumpjetLocomotionClass::sub_55AC70(); // 0x55AC70
void Array::RemoveItemByValue(); // 0x55B880
char JumpjetLocomotionClass::sub_5AFF70(); // 0x5AFF70
unsigned int* JumpjetLocomotionClass::sub_5AFF80(); // 0x5AFF80
unsigned int* JumpjetLocomotionClass::sub_5AFFE0(); // 0x5AFFE0
int JumpjetLocomotionClass::sub_5B0060(); // 0x5B0060
int JumpjetLocomotionClass::sub_5B0080(); // 0x5B0080
int JumpjetLocomotionClass::sub_5B0120(); // 0x5B0120
char JumpjetLocomotionClass::sub_5B0170(); // 0x5B0170
int JumpjetLocomotionClass::sub_5B01A0(); // 0x5B01A0
int MechLocomotionClass::ddtor(); // 0x5B1960
int MechLocomotionClass::BeginMove(); // 0x5B19A0
int JumpjetLocomotionClass::sub_5B19D0(); // 0x5B19D0
bool JumpjetLocomotionClass::sub_5B19E0(); // 0x5B19E0
int JumpjetLocomotionClass::sub_5B1A50(); // 0x5B1A50
bool JumpjetLocomotionClass::sub_5B1AA0(); // 0x5B1AA0
long long Movement::CalcVelocity(); // 0x5B20F0
char MoveScriptTypeClassToWaypoint(); // 0x65E010
BOOL JumpjetLocomotionClass::sub_661F50(); // 0x661F50
bool JumpjetLocomotionClass::sub_661F90(); // 0x661F90
unsigned int* JumpjetLocomotionClass::sub_661FB0(); // 0x661FB0
int JumpjetLocomotionClass::sub_6632E0(); // 0x6632E0
int RocketLocomotionClass::ddtor(); // 0x6633D0
int RocketLocomotionClass::BeginMove(); // 0x663410
int JumpjetLocomotionClass::sub_663460(); // 0x663460
float* JumpjetLocomotionClass::ComputePitchYaw(); // 0x663470
int JumpjetLocomotionClass::sub_69ED20(); // 0x69ED20
HRESULT ShipLocomotionClass::BeginMove(); // 0x69EE90
HRESULT ShipLocomotionClass::LoadFromStream(); // 0x69EF10
int JumpjetLocomotionClass::sub_69EFF0(); // 0x69EFF0
int JumpjetLocomotionClass::sub_69F040(); // 0x69F040
bool JumpjetLocomotionClass::sub_69F080(); // 0x69F080
unsigned int* JumpjetLocomotionClass::sub_69F250(); // 0x69F250
bool JumpjetLocomotionClass::sub_69F290(); // 0x69F290
bool JumpjetLocomotionClass::sub_69F330(); // 0x69F330
unsigned int* JumpjetLocomotionClass::sub_69F3A0(); // 0x69F3A0
unsigned int* JumpjetLocomotionClass::sub_69F3D0(); // 0x69F3D0
unsigned int* JumpjetLocomotionClass::sub_69F450(); // 0x69F450
int JumpjetLocomotionClass::sub_69F510(); // 0x69F510
float* JumpjetLocomotionClass::ComputeVoxelTransform2(); // 0x69F670
float* JumpjetLocomotionClass::sub_69FB20(); // 0x69FB20
int JumpjetLocomotionClass::sub_69FBE0(); // 0x69FBE0
char WalkLocomotionClass::SetWaypointTarget(); // 0x6A0310
char JumpjetLocomotionClass::sub_6A05C0(); // 0x6A05C0
int JumpjetLocomotionClass::sub_6A3E50(); // 0x6A3E50
int ShipLocomotionClass::ddtor(); // 0x6A3E60
int JumpjetLocomotionClass::sub_6A3EB0(); // 0x6A3EB0
char JumpjetLocomotionClass::sub_6A3F00(); // 0x6A3F00
bool WalkLocomotionClass::IsAtDestination(); // 0x6A3F50
char JumpjetLocomotionClass::sub_6A4130(); // 0x6A4130
int JumpjetLocomotionClass::sub_6A4210(); // 0x6A4210
int JumpjetLocomotionClass::sub_6A4220(); // 0x6A4220
int JumpjetLocomotionClass::sub_6A4230(); // 0x6A4230
int JumpjetLocomotionClass::sub_6A4240(); // 0x6A4240
int JumpjetLocomotionClass::sub_6A4250(); // 0x6A4250
long ShipLocomotionClass::AddRef(); // 0x6A4260
long ShipLocomotionClass::Release(); // 0x6A4270
BOOL JumpjetLocomotionClass::sub_6A4280(); // 0x6A4280
int JumpjetLocomotionClass::sub_6A4300(); // 0x6A4300
long JumpjetLocomotionClass::sub_6A4310(); // 0x6A4310
long JumpjetLocomotionClass::sub_6A4320(); // 0x6A4320
int SwizzleManagerClass::Remove(); // 0x6CF4D0
int* TacticalClass::AdjustForZShapeMove(); // 0x6D1FE0
void FootClass::FootClass_ImbueLocomotor(); // 0x710000
bool JumpjetLocomotionClass::sub_718080(); // 0x718080
unsigned int* JumpjetLocomotionClass::sub_7180A0(); // 0x7180A0
unsigned int* JumpjetLocomotionClass::ProcessFactoryExit(); // 0x718100
int JumpjetLocomotionClass::sub_718230(); // 0x718230
char JumpjetLocomotionClass::sub_7192C0(); // 0x7192C0
int JumpjetLocomotionClass::sub_719BF0(); // 0x719BF0
int JumpjetLocomotionClass::sub_719C60(); // 0x719C60
HRESULT JumpjetLocomotionClass::sub_719CA0(); // 0x719CA0
HRESULT JumpjetLocomotionClass::sub_719D40(); // 0x719D40
int JumpjetLocomotionClass::sub_719E20(); // 0x719E20
int JumpjetLocomotionClass::UpdateAltitude(); // 0x719E30
int JumpjetLocomotionClass::sub_719E90(); // 0x719E90
int JumpjetLocomotionClass::sub_719EE0(); // 0x719EE0
bool JumpjetLocomotionClass::sub_719F30(); // 0x719F30
int JumpjetLocomotionClass::sub_719F80(); // 0x719F80
int JumpjetLocomotionClass::sub_71A090(); // 0x71A090
BOOL JumpjetLocomotionClass::sub_71A100(); // 0x71A100
int JumpjetLocomotionClass::sub_71A160(); // 0x71A160
long JumpjetLocomotionClass::sub_71A170(); // 0x71A170
long JumpjetLocomotionClass::sub_71A180(); // 0x71A180
int JumpjetLocomotionClass::sub_71A190(); // 0x71A190
long JumpjetLocomotionClass::sub_71A1A0(); // 0x71A1A0
long JumpjetLocomotionClass::sub_71A1B0(); // 0x71A1B0
bool JumpjetLocomotionClass::sub_728A50(); // 0x728A50
char JumpjetLocomotionClass::sub_728A60(); // 0x728A60
unsigned int* JumpjetLocomotionClass::sub_728A90(); // 0x728A90
int JumpjetLocomotionClass::SyncMovementPosition(); // 0x728AF0
void TunnelLocomotionClass::ProcessFormationPosition(); // 0x728C00
int JumpjetLocomotionClass::sub_7291D0(); // 0x7291D0
void* JumpjetLocomotionClass::ComputeTurretTransform(); // 0x729B40
int JumpjetLocomotionClass::ComputeBounceHeight(); // 0x729E50
int JumpjetLocomotionClass::sub_72A020(); // 0x72A020
bool JumpjetLocomotionClass::sub_72A060(); // 0x72A060
char JumpjetLocomotionClass::sub_72A0E0(); // 0x72A0E0
int TunnelLocomotionClass::ddtor(); // 0x72A110
int TunnelLocomotionClass::BeginMove(); // 0x72A150
int JumpjetLocomotionClass::sub_72A1A0(); // 0x72A1A0
int JumpjetLocomotionClass::sub_72A1C0(); // 0x72A1C0
BOOL JumpjetLocomotionClass::sub_72A1E0(); // 0x72A1E0
char JumpjetLocomotionClass::sub_75AB30(); // 0x75AB30
bool JumpjetLocomotionClass::sub_75AB40(); // 0x75AB40
unsigned int* JumpjetLocomotionClass::sub_75ABA0(); // 0x75ABA0
unsigned int* JumpjetLocomotionClass::sub_75AC00(); // 0x75AC00
int JumpjetLocomotionClass::sub_75AC80(); // 0x75AC80
char JumpjetLocomotionClass::sub_75ACB0(); // 0x75ACB0
int JumpjetLocomotionClass::sub_75ADA0(); // 0x75ADA0
char JumpjetLocomotionClass::sub_75AE00(); // 0x75AE00
int JumpjetLocomotionClass::sub_75AE30(); // 0x75AE30
int WalkLocomotionClass::ddtor(); // 0x75C640
HRESULT WalkLocomotionClass::BeginMove(); // 0x75C680
HRESULT WalkLocomotionClass::LoadFromStream(); // 0x75C700
int JumpjetLocomotionClass::sub_75C7E0(); // 0x75C7E0
int JumpjetLocomotionClass::sub_75C850(); // 0x75C850
int JumpjetLocomotionClass::sub_75C8A0(); // 0x75C8A0
bool JumpjetLocomotionClass::sub_75C8E0(); // 0x75C8E0
int JumpjetLocomotionClass::sub_75C920(); // 0x75C920
int JumpjetLocomotionClass::sub_75CA30(); // 0x75CA30
bool JumpjetLocomotionClass::sub_75CA80(); // 0x75CA80
char JumpjetLocomotionClass::sub_75CB20(); // 0x75CB20
unsigned int* JumpjetLocomotionClass::sub_75CB30(); // 0x75CB30
long WalkLocomotionClass::AddRef(); // 0x75CB80
long WalkLocomotionClass::Release(); // 0x75CB90
BOOL JumpjetLocomotionClass::sub_75CBA0(); // 0x75CBA0
int JumpjetLocomotionClass::sub_75CBC0(); // 0x75CBC0
int JumpjetLocomotionClass::sub_75CC30(); // 0x75CC30
long JumpjetLocomotionClass::sub_75CC40(); // 0x75CC40
long JumpjetLocomotionClass::sub_75CC50(); // 0x75CC50
int JumpjetLocomotionClass::sub_75CC60(); // 0x75CC60
long JumpjetLocomotionClass::sub_75CC70(); // 0x75CC70
long JumpjetLocomotionClass::sub_75CC80(); // 0x75CC80
void RemoveWOLPlayerLogin(); // 0x79CBA0
int _remove(); // 0x7CD42B
int NetworkLobbyPaintProc(); // 0x61D6D0
int NetworkSettingsDlgProc(); // 0x631760
int NetworkLobbyWOL(); // 0x787770

} // namespace gamemd