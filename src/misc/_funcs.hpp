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
unsigned int* AudioIndex::GetSampleInformation(); // IDA: 0x401640

// === AudioStream ===
// 4 member function(s)
int AudioStream::CheckFormatChanged(); // IDA: 0x402800
void AudioStream::CleanupChannels(); // IDA: 0x404e70
int AudioStream::UpdateTimers(); // IDA: 0x404fd0
int AudioStream::UpdateCountdowners(); // IDA: 0x405040

// === AudioQueue ===
// 9 member function(s)
int AudioQueue::PreallocateChannels(); // IDA: 0x403530
int AudioQueue::FindBestChannel(); // IDA: 0x4035f0
int AudioQueue::DeactivateAllMatching(); // IDA: 0x403770
int AudioQueue::IsEmpty(); // IDA: 0x407b40
int AudioQueue::IsNotEmpty(); // IDA: 0x407b50
int AudioQueue::HaltVoices(); // IDA: 0x4081a0
int* AudioQueue::IncrementPriority(); // IDA: 0x408200
int AudioQueue::ReleaseBuffers(); // IDA: 0x408270
int AudioQueue::DrainAll(); // IDA: 0x750fa0

// === Audio ===
// 6 member function(s)
BOOL Audio::ApplyFormatFlags(); // IDA: 0x406870
void Audio::Shutdown(); // IDA: 0x406d40
BOOL Audio::IsSoundEnabled(); // IDA: 0x407000
int Audio::Callback(); // IDA: 0x4093b0
void* Audio::LoadSoundINI(); // IDA: 0x7513f0
int Audio::IsPlaying(); // IDA: 0x7529e0

// === AudioTimer ===
// 1 member function(s)
int* AudioTimer::DecrementAll(); // IDA: 0x408230

// === AudioController ===
// 2 member function(s)
int AudioController::LoadThemeBank(); // IDA: 0x409de0
void AudioController::GetVolume(); // IDA: 0x72d170

// === RulesClass ===
// 2 member function(s)
double RulesClass::GetFiringDistance(); // IDA: 0x48acf0
int RulesClass::LoadTypeList(); // IDA: 0x67bdd0

// === VoxelAnimClass ===
// 3 member function(s)
unsigned int VoxelAnimClass::ProcessFrame(); // IDA: 0x4caf20
int VoxelAnimClass::SaveLoad_Prefix_0(); // IDA: 0x74aa10
int VoxelAnimClass::ddtor(); // IDA: 0x74aad0

// === Audio3D ===
// 1 member function(s)
float* Audio3D::ComputeRotation(); // IDA: 0x55a7d0

// === AudioSettings ===
// 1 member function(s)
int AudioSettings::DlgProc(); // IDA: 0x6b6300

// === SuperWeaponClass ===
// 2 member function(s)
long SuperWeaponClass::ProcessCharged(); // IDA: 0x6c5640
int SuperWeaponClass::UpdateAll(); // IDA: 0x6da740

// === SuperWeaponTypeClass ===
// 3 member function(s)
int SuperWeaponTypeClass::SD_vt03(); // IDA: 0x6ce7c0
int SuperWeaponTypeClass::SaveLoad_Prefix(); // IDA: 0x6ce800
int SuperWeaponTypeClass::SaveLoad_Prefix_0(); // IDA: 0x6ce8d0

// === VoxelAnimTypeClass ===
// 4 member function(s)
char VoxelAnimTypeClass::LoadFromINI(); // IDA: 0x74b050
int VoxelAnimTypeClass::GetClassIdentifier(); // IDA: 0x74b7d0
int VoxelAnimTypeClass::SaveLoad_Prefix(); // IDA: 0x74b810
int VoxelAnimTypeClass::SaveLoad_Prefix_0(); // IDA: 0x74b8d0

// === VocClass ===
// 1 member function(s)
char* VocClass::GetSampleNameByIndex(); // IDA: 0x751590

// === ThemeClass ===
// 2 member function(s)
int ThemeClass::ClearQueues(); // IDA: 0x752370
void ThemeClass::GetField(); // IDA: 0x752ab0

// === AudioFrame ===
// 1 member function(s)
int AudioFrame::CounterInc(); // IDA: 0x7535b0

// === Voxel ===
// 3 member function(s)
int Voxel::SetProjectionAngle(); // IDA: 0x754c00
int Voxel::Projection_Setup(); // IDA: 0x754cb0
int Voxel::InitDistanceTable(); // IDA: 0x75f020

// === VoxelModel ===
// 2 member function(s)
char VoxelModel::LoadVXLHeader(); // IDA: 0x756dd0
char VoxelModel::ParseSectionData(); // IDA: 0x756f80

// === VoxelAnim ===
// 1 member function(s)
char VoxelAnim::ComputeTransform(); // IDA: 0x7586f0

// === WarheadTypeClass ===
// 4 member function(s)
int WarheadTypeClass::vt[03](); // IDA: 0x75e080
int WarheadTypeClass::SaveLoad_Prefix(); // IDA: 0x75e0c0
int WarheadTypeClass::SaveLoad_Prefix_0(); // IDA: 0x75e2c0
char WarheadTypeClass::ReadINI(); // IDA: 0x772080

// === AudioCodec ===
// 1 member function(s)
char* AudioCodec::Decode(); // IDA: 0x7c81db

// === Network ===
// 16 member function(s)
char Network::Dispatch(); // IDA: 0x48d1e0
char Network::Init(); // IDA: 0x52f3f0
char Network::QueryAddress(); // IDA: 0x5d90e0
short Network::WaitForPacket(); // IDA: 0x5d9220
int Network::ShutdownInterface(); // IDA: 0x5da720
int Network::InitPlayerSlots(); // IDA: 0x5e8b60
int Network::CleanupOnDisconnect(); // IDA: 0x5f0040
char Network::AddFrameEvent(); // IDA: 0x6471a0
void Network::QueueProcessingLoop(); // IDA: 0x6475f0
int Network::ProcessEventList(); // IDA: 0x64c380
char Network::RecordEvent(); // IDA: 0x6521c0
int Network::SendUnreachable(); // IDA: 0x6523a0
wchar_t* Network::ProcessAddressChange(); // IDA: 0x6640e0
int Network::GetMaxPacketSize(); // IDA: 0x74fd20
char Network::IsLobbyFeature(); // IDA: 0x77d970
void Network::SyncPlayerList(); // IDA: 0x792f10

// === ConnectionPointClass ===
// 7 member function(s)
long ConnectionPointClass::AddRef(); // IDA: 0x4a0520
long ConnectionPointClass::Release(); // IDA: 0x4a0540
int ConnectionPointClass::ddtor(); // IDA: 0x4a05d0
int ConnectionPointClass::Advise(); // IDA: 0x4a0610
int ConnectionPointClass::Unadvise(); // IDA: 0x4a0630
int ConnectionPointClass::EnumConnections(); // IDA: 0x4a0700
int ConnectionPointClass::GetConnectionInterface(); // IDA: 0x4a0760

// === NetworkOptions ===
// 1 member function(s)
int NetworkOptions::DlgProc(); // IDA: 0x560480

// === NetworkGameSetup ===
// 1 member function(s)
int NetworkGameSetup::DlgProc(); // IDA: 0x5b7970

// === NetworkLobby ===
// 7 member function(s)
int NetworkLobby::GetPlayerCount(); // IDA: 0x5da080
int NetworkLobby::UpdatePlayerList(); // IDA: 0x5db9b0
char NetworkLobby::CreateGame(); // IDA: 0x5dc350
int NetworkLobby::DlgProc(); // IDA: 0x5de520
char NetworkLobby::MessageHandler(); // IDA: 0x5e00b0
bool NetworkLobby::CheckMinPlayers(); // IDA: 0x5e9510
char NetworkLobby::FillOptionCombo(); // IDA: 0x5ee3a0

// === NetworkSettings ===
// 1 member function(s)
int NetworkSettings::DlgProc(); // IDA: 0x5ddbd0

// === NetworkShare ===
// 1 member function(s)
int NetworkShare::GetField(); // IDA: 0x5e8da0

// === NetworkScore ===
// 1 member function(s)
int NetworkScore::DlgProc(); // IDA: 0x64ae50

// === SessionClass ===
// 2 member function(s)
unsigned int SessionClass::GetPlayerColorScheme(); // IDA: 0x69a310
void SessionClass::BuildLaunchString(); // IDA: 0x78f000

// === WinsockInterfaceClass ===
// 1 member function(s)
int WinsockInterfaceClass::Destru_vt16(); // IDA: 0x7b2770

// === Global & Static Functions ===
// 278 function(s)

unsigned long AudioStreamThreadProc(); // IDA: 0x4095b0
short MoveCoordByDirection(); // IDA: 0x40acd0
unsigned int* WalkPathClassPath(); // IDA: 0x429780
char WalkLineOfSight(); // IDA: 0x42be20
char DriveControlCD(); // IDA: 0x47a920
void RemoveTarget(); // IDA: 0x4a9770
char DispatchSelectionWaypointMove(); // IDA: 0x4ae750
int JumpjetLocomotionClass::sub_4AF610(); // IDA: 0x4af610
HRESULT DriveLocomotionClass::BeginMove(); // IDA: 0x4af780
HRESULT DriveLocomotionClass::LoadFromStream(); // IDA: 0x4af800
int JumpjetLocomotionClass::sub_4AF8E0(); // IDA: 0x4af8e0
int JumpjetLocomotionClass::sub_4AF930(); // IDA: 0x4af930
bool JumpjetLocomotionClass::sub_4AF970(); // IDA: 0x4af970
unsigned int* JumpjetLocomotionClass::sub_4AFB40(); // IDA: 0x4afb40
bool JumpjetLocomotionClass::sub_4AFB80(); // IDA: 0x4afb80
bool JumpjetLocomotionClass::sub_4AFC20(); // IDA: 0x4afc20
unsigned int* JumpjetLocomotionClass::sub_4AFC90(); // IDA: 0x4afc90
unsigned int* JumpjetLocomotionClass::sub_4AFCC0(); // IDA: 0x4afcc0
unsigned int* JumpjetLocomotionClass::sub_4AFD40(); // IDA: 0x4afd40
int JumpjetLocomotionClass::sub_4AFE00(); // IDA: 0x4afe00
float* JumpjetLocomotionClass::ComputeVoxelTransform(); // IDA: 0x4aff60
float* JumpjetLocomotionClass::sub_4B0410(); // IDA: 0x4b0410
int JumpjetLocomotionClass::sub_4B04D0(); // IDA: 0x4b04d0
char ProcessJumpjetMotion(); // IDA: 0x4b0500
char JumpjetLocomotionClass::SetWaypointTarget(); // IDA: 0x4b0c40
char JumpjetLocomotionClass::sub_4B0EF0(); // IDA: 0x4b0ef0
int JumpjetLocomotionClass::sub_4B4820(); // IDA: 0x4b4820
int DriveLocomotionClass::ddtor(); // IDA: 0x4b4830
int JumpjetLocomotionClass::sub_4B4880(); // IDA: 0x4b4880
char JumpjetLocomotionClass::sub_4B48D0(); // IDA: 0x4b48d0
bool JumpjetLocomotionClass::IsAtDestination(); // IDA: 0x4b4920
char JumpjetLocomotionClass::sub_4B4B00(); // IDA: 0x4b4b00
int JumpjetLocomotionClass::sub_4B4BE0(); // IDA: 0x4b4be0
int JumpjetLocomotionClass::sub_4B4BF0(); // IDA: 0x4b4bf0
int JumpjetLocomotionClass::sub_4B4C00(); // IDA: 0x4b4c00
int JumpjetLocomotionClass::sub_4B4C10(); // IDA: 0x4b4c10
int JumpjetLocomotionClass::sub_4B4C20(); // IDA: 0x4b4c20
long DriveLocomotionClass::AddRef(); // IDA: 0x4b4cb0
long DriveLocomotionClass::Release(); // IDA: 0x4b4cc0
BOOL JumpjetLocomotionClass::sub_4B4CD0(); // IDA: 0x4b4cd0
int JumpjetLocomotionClass::sub_4B4D90(); // IDA: 0x4b4d90
long JumpjetLocomotionClass::sub_4B4DA0(); // IDA: 0x4b4da0
long JumpjetLocomotionClass::sub_4B4DB0(); // IDA: 0x4b4db0
unsigned int* JumpjetLocomotionClass::sub_4B5B40(); // IDA: 0x4b5b40
char DroppodLocomotionClass::ILoco_Process(); // IDA: 0x4b5b70
void** JumpjetLocomotionClass::UpdateMovementPosition(); // IDA: 0x4b6040
int DropPodLocomotionClass::ddtor(); // IDA: 0x4b6200
HRESULT DropPodLocomotionClass::BeginMove(); // IDA: 0x4b6240
HRESULT DropPodLocomotionClass::UpdateMovement(); // IDA: 0x4b62c0
int JumpjetLocomotionClass::sub_4B63B0(); // IDA: 0x4b63b0
int JumpjetLocomotionClass::sub_4B6400(); // IDA: 0x4b6400
bool JumpjetLocomotionClass::sub_4B6440(); // IDA: 0x4b6440
int JumpjetLocomotionClass::sub_4B64D0(); // IDA: 0x4b64d0
int JumpjetLocomotionClass::sub_4B64E0(); // IDA: 0x4b64e0
BOOL JumpjetLocomotionClass::sub_4B65F0(); // IDA: 0x4b65f0
int JumpjetLocomotionClass::Thunk_VtableDispatch4(); // IDA: 0x4b6610
long DropPodLocomotionClass::AddRef(); // IDA: 0x4b66a0
long DropPodLocomotionClass::Release(); // IDA: 0x4b66b0
BOOL JumpjetLocomotionClass::sub_4B66C0(); // IDA: 0x4b66c0
int JumpjetLocomotionClass::sub_4B6740(); // IDA: 0x4b6740
long JumpjetLocomotionClass::sub_4B6750(); // IDA: 0x4b6750
long JumpjetLocomotionClass::sub_4B6760(); // IDA: 0x4b6760
int JumpjetLocomotionClass::sub_4B6770(); // IDA: 0x4b6770
long JumpjetLocomotionClass::sub_4B6780(); // IDA: 0x4b6780
long JumpjetLocomotionClass::sub_4B6790(); // IDA: 0x4b6790
wchar_t* LocomotionClass::UpdateAll(); // IDA: 0x4c54a0
int JumpjetLocomotionClass::sub_4CCA20(); // IDA: 0x4cca20
BOOL JumpjetLocomotionClass::sub_4CCA90(); // IDA: 0x4cca90
bool JumpjetLocomotionClass::sub_4CCAC0(); // IDA: 0x4ccac0
unsigned int* JumpjetLocomotionClass::sub_4CCAE0(); // IDA: 0x4ccae0
char JumpjetLocomotionClass::ProcessLocomotionStep(); // IDA: 0x4ccb40
char JumpjetLocomotionClass::UpdateFootLocomotion(); // IDA: 0x4ccc80
char JumpjetLocomotionClass::ComputeMoveToPosition(); // IDA: 0x4ccfd0
float* JumpjetLocomotionClass::ComputeRotationMatrix(); // IDA: 0x4cf610
unsigned int* JumpjetLocomotionClass::CalculateBobOffset(); // IDA: 0x4cf830
unsigned int* JumpjetLocomotionClass::sub_4CF940(); // IDA: 0x4cf940
float* JumpjetLocomotionClass::ComputeVoxelMatrix(); // IDA: 0x4cfb00
char JumpjetLocomotionClass::sub_4CFC10(); // IDA: 0x4cfc10
int FlyLocomotionClass::ddtor(); // IDA: 0x4cfc80
int FlyLocomotionClass::BeginMove(); // IDA: 0x4cfcc0
int JumpjetLocomotionClass::sub_4CFCF0(); // IDA: 0x4cfcf0
int JumpjetLocomotionClass::sub_4CFD20(); // IDA: 0x4cfd20
char JumpjetLocomotionClass::sub_4CFD90(); // IDA: 0x4cfd90
bool JumpjetLocomotionClass::sub_4CFDA0(); // IDA: 0x4cfda0
long long JumpjetLocomotionClass::sub_4CFE20(); // IDA: 0x4cfe20
int JumpjetLocomotionClass::sub_4CFE50(); // IDA: 0x4cfe50
void FlyLocomotionClass::ILocomotion_AcquireHunterSeekerTarget(); // IDA: 0x4cfe80
int JumpjetLocomotionClass::GetInterface(); // IDA: 0x4d0510
long JumpjetLocomotionClass::GetInterface2(); // IDA: 0x4d0520
long JumpjetLocomotionClass::Stub2(); // IDA: 0x4d0530
char FootClass::MovementStep(); // IDA: 0x4d3920
char FootClass::MovementAI(); // IDA: 0x4da530
void*** AbstractClass::RemoveObjectFromHouse(); // IDA: 0x4fb9b0
float* JumpjetLocomotionClass::sub_5142A0(); // IDA: 0x5142a0
BOOL JumpjetLocomotionClass::sub_514C30(); // IDA: 0x514c30
BOOL JumpjetLocomotionClass::sub_514C80(); // IDA: 0x514c80
unsigned int* JumpjetLocomotionClass::sub_514CB0(); // IDA: 0x514cb0
unsigned int* JumpjetLocomotionClass::sub_514D10(); // IDA: 0x514d10
unsigned int* JumpjetLocomotionClass::SetMovementTarget(); // IDA: 0x514d90
unsigned int* JumpjetLocomotionClass::sub_516320(); // IDA: 0x516320
char JumpjetLocomotionClass::sub_516370(); // IDA: 0x516370
int JumpjetLocomotionClass::sub_516BF0(); // IDA: 0x516bf0
bool JumpjetLocomotionClass::sub_516C70(); // IDA: 0x516c70
char JumpjetLocomotionClass::TryMoveToAdjacentCell(); // IDA: 0x516e10
char JumpjetLocomotionClass::sub_516FC0(); // IDA: 0x516fc0
int HoverLocomotionClass::ddtor(); // IDA: 0x517070
int HoverLocomotionClass::BeginMove(); // IDA: 0x5170b0
int JumpjetLocomotionClass::sub_517100(); // IDA: 0x517100
int JumpjetLocomotionClass::sub_5171C0(); // IDA: 0x5171c0
bool JumpjetLocomotionClass::sub_517210(); // IDA: 0x517210
int JumpjetLocomotionClass::InitMovementParams(); // IDA: 0x54ad30
char JumpjetLocomotionClass::sub_54AE50(); // IDA: 0x54ae50
unsigned int* JumpjetLocomotionClass::sub_54AE60(); // IDA: 0x54ae60
char JumpjetLocomotionClass::DispatchLocomotion(); // IDA: 0x54aec0
int JumpjetLocomotionClass::SmoothObjectPlacement(); // IDA: 0x54b1c0
int JumpjetLocomotionClass::MoveToDestination(); // IDA: 0x54b4d0
char JumpjetLocomotionClass::sub_54B6E0(); // IDA: 0x54b6e0
int JumpjetLocomotionClass::GetClassIdentifier(); // IDA: 0x54b710
HRESULT JumpjetLocomotionClass::InitClass(); // IDA: 0x54b750
HRESULT JumpjetLocomotionClass::LoadFromStream(); // IDA: 0x54b7e0
int JumpjetLocomotionClass::sub_54B8D0(); // IDA: 0x54b8d0
bool JumpjetLocomotionClass::sub_54D0D0(); // IDA: 0x54d0d0
char JumpjetLocomotionClass::sub_54D930(); // IDA: 0x54d930
unsigned int* JumpjetLocomotionClass::sub_54D9B0(); // IDA: 0x54d9b0
int JumpjetLocomotionClass::sub_54DA00(); // IDA: 0x54da00
int JumpjetLocomotionClass::sub_54DA50(); // IDA: 0x54da50
bool JumpjetLocomotionClass::sub_54DB00(); // IDA: 0x54db00
int JumpjetLocomotionClass::sub_54DB50(); // IDA: 0x54db50
float* JumpjetLocomotionClass::ComputeMovementTransform(); // IDA: 0x54dcc0
long JumpjetLocomotionClass::AddRef(); // IDA: 0x54df50
long JumpjetLocomotionClass::Release(); // IDA: 0x54df60
BOOL JumpjetLocomotionClass::sub_54DF70(); // IDA: 0x54df70
int JumpjetLocomotionClass::sub_54DFF0(); // IDA: 0x54dff0
long JumpjetLocomotionClass::sub_54E000(); // IDA: 0x54e000
long JumpjetLocomotionClass::sub_54E010(); // IDA: 0x54e010
int JumpjetLocomotionClass::sub_54E020(); // IDA: 0x54e020
long JumpjetLocomotionClass::sub_54E030(); // IDA: 0x54e030
long JumpjetLocomotionClass::sub_54E040(); // IDA: 0x54e040
int JumpjetLocomotionClass::CheckState(); // IDA: 0x55abb0
unsigned int* JumpjetLocomotionClass::sub_55AC70(); // IDA: 0x55ac70
void Array::RemoveItemByValue(); // IDA: 0x55b880
char JumpjetLocomotionClass::sub_5AFF70(); // IDA: 0x5aff70
unsigned int* JumpjetLocomotionClass::sub_5AFF80(); // IDA: 0x5aff80
unsigned int* JumpjetLocomotionClass::sub_5AFFE0(); // IDA: 0x5affe0
int JumpjetLocomotionClass::sub_5B0060(); // IDA: 0x5b0060
int JumpjetLocomotionClass::sub_5B0080(); // IDA: 0x5b0080
int JumpjetLocomotionClass::sub_5B0120(); // IDA: 0x5b0120
char JumpjetLocomotionClass::sub_5B0170(); // IDA: 0x5b0170
int JumpjetLocomotionClass::sub_5B01A0(); // IDA: 0x5b01a0
int MechLocomotionClass::ddtor(); // IDA: 0x5b1960
int MechLocomotionClass::BeginMove(); // IDA: 0x5b19a0
int JumpjetLocomotionClass::sub_5B19D0(); // IDA: 0x5b19d0
bool JumpjetLocomotionClass::sub_5B19E0(); // IDA: 0x5b19e0
int JumpjetLocomotionClass::sub_5B1A50(); // IDA: 0x5b1a50
bool JumpjetLocomotionClass::sub_5B1AA0(); // IDA: 0x5b1aa0
long long Movement::CalcVelocity(); // IDA: 0x5b20f0
char MoveScriptTypeClassToWaypoint(); // IDA: 0x65e010
BOOL JumpjetLocomotionClass::sub_661F50(); // IDA: 0x661f50
bool JumpjetLocomotionClass::sub_661F90(); // IDA: 0x661f90
unsigned int* JumpjetLocomotionClass::sub_661FB0(); // IDA: 0x661fb0
int JumpjetLocomotionClass::sub_6632E0(); // IDA: 0x6632e0
int RocketLocomotionClass::ddtor(); // IDA: 0x6633d0
int RocketLocomotionClass::BeginMove(); // IDA: 0x663410
int JumpjetLocomotionClass::sub_663460(); // IDA: 0x663460
float* JumpjetLocomotionClass::ComputePitchYaw(); // IDA: 0x663470
int JumpjetLocomotionClass::sub_69ED20(); // IDA: 0x69ed20
HRESULT ShipLocomotionClass::BeginMove(); // IDA: 0x69ee90
HRESULT ShipLocomotionClass::LoadFromStream(); // IDA: 0x69ef10
int JumpjetLocomotionClass::sub_69EFF0(); // IDA: 0x69eff0
int JumpjetLocomotionClass::sub_69F040(); // IDA: 0x69f040
bool JumpjetLocomotionClass::sub_69F080(); // IDA: 0x69f080
unsigned int* JumpjetLocomotionClass::sub_69F250(); // IDA: 0x69f250
bool JumpjetLocomotionClass::sub_69F290(); // IDA: 0x69f290
bool JumpjetLocomotionClass::sub_69F330(); // IDA: 0x69f330
unsigned int* JumpjetLocomotionClass::sub_69F3A0(); // IDA: 0x69f3a0
unsigned int* JumpjetLocomotionClass::sub_69F3D0(); // IDA: 0x69f3d0
unsigned int* JumpjetLocomotionClass::sub_69F450(); // IDA: 0x69f450
int JumpjetLocomotionClass::sub_69F510(); // IDA: 0x69f510
float* JumpjetLocomotionClass::ComputeVoxelTransform2(); // IDA: 0x69f670
float* JumpjetLocomotionClass::sub_69FB20(); // IDA: 0x69fb20
int JumpjetLocomotionClass::sub_69FBE0(); // IDA: 0x69fbe0
char WalkLocomotionClass::SetWaypointTarget(); // IDA: 0x6a0310
char JumpjetLocomotionClass::sub_6A05C0(); // IDA: 0x6a05c0
int JumpjetLocomotionClass::sub_6A3E50(); // IDA: 0x6a3e50
int ShipLocomotionClass::ddtor(); // IDA: 0x6a3e60
int JumpjetLocomotionClass::sub_6A3EB0(); // IDA: 0x6a3eb0
char JumpjetLocomotionClass::sub_6A3F00(); // IDA: 0x6a3f00
bool WalkLocomotionClass::IsAtDestination(); // IDA: 0x6a3f50
char JumpjetLocomotionClass::sub_6A4130(); // IDA: 0x6a4130
int JumpjetLocomotionClass::sub_6A4210(); // IDA: 0x6a4210
int JumpjetLocomotionClass::sub_6A4220(); // IDA: 0x6a4220
int JumpjetLocomotionClass::sub_6A4230(); // IDA: 0x6a4230
int JumpjetLocomotionClass::sub_6A4240(); // IDA: 0x6a4240
int JumpjetLocomotionClass::sub_6A4250(); // IDA: 0x6a4250
long ShipLocomotionClass::AddRef(); // IDA: 0x6a4260
long ShipLocomotionClass::Release(); // IDA: 0x6a4270
BOOL JumpjetLocomotionClass::sub_6A4280(); // IDA: 0x6a4280
int JumpjetLocomotionClass::sub_6A4300(); // IDA: 0x6a4300
long JumpjetLocomotionClass::sub_6A4310(); // IDA: 0x6a4310
long JumpjetLocomotionClass::sub_6A4320(); // IDA: 0x6a4320
int SwizzleManagerClass::Remove(); // IDA: 0x6cf4d0
int* TacticalClass::AdjustForZShapeMove(); // IDA: 0x6d1fe0
void FootClass::FootClass_ImbueLocomotor(); // IDA: 0x710000
bool JumpjetLocomotionClass::sub_718080(); // IDA: 0x718080
unsigned int* JumpjetLocomotionClass::sub_7180A0(); // IDA: 0x7180a0
unsigned int* JumpjetLocomotionClass::ProcessFactoryExit(); // IDA: 0x718100
int JumpjetLocomotionClass::sub_718230(); // IDA: 0x718230
char JumpjetLocomotionClass::sub_7192C0(); // IDA: 0x7192c0
int JumpjetLocomotionClass::sub_719BF0(); // IDA: 0x719bf0
int JumpjetLocomotionClass::sub_719C60(); // IDA: 0x719c60
HRESULT JumpjetLocomotionClass::sub_719CA0(); // IDA: 0x719ca0
HRESULT JumpjetLocomotionClass::sub_719D40(); // IDA: 0x719d40
int JumpjetLocomotionClass::sub_719E20(); // IDA: 0x719e20
int JumpjetLocomotionClass::UpdateAltitude(); // IDA: 0x719e30
int JumpjetLocomotionClass::sub_719E90(); // IDA: 0x719e90
int JumpjetLocomotionClass::sub_719EE0(); // IDA: 0x719ee0
bool JumpjetLocomotionClass::sub_719F30(); // IDA: 0x719f30
int JumpjetLocomotionClass::sub_719F80(); // IDA: 0x719f80
int JumpjetLocomotionClass::sub_71A090(); // IDA: 0x71a090
BOOL JumpjetLocomotionClass::sub_71A100(); // IDA: 0x71a100
int JumpjetLocomotionClass::sub_71A160(); // IDA: 0x71a160
long JumpjetLocomotionClass::sub_71A170(); // IDA: 0x71a170
long JumpjetLocomotionClass::sub_71A180(); // IDA: 0x71a180
int JumpjetLocomotionClass::sub_71A190(); // IDA: 0x71a190
long JumpjetLocomotionClass::sub_71A1A0(); // IDA: 0x71a1a0
long JumpjetLocomotionClass::sub_71A1B0(); // IDA: 0x71a1b0
bool JumpjetLocomotionClass::sub_728A50(); // IDA: 0x728a50
char JumpjetLocomotionClass::sub_728A60(); // IDA: 0x728a60
unsigned int* JumpjetLocomotionClass::sub_728A90(); // IDA: 0x728a90
int JumpjetLocomotionClass::SyncMovementPosition(); // IDA: 0x728af0
void TunnelLocomotionClass::ProcessFormationPosition(); // IDA: 0x728c00
int JumpjetLocomotionClass::sub_7291D0(); // IDA: 0x7291d0
void* JumpjetLocomotionClass::ComputeTurretTransform(); // IDA: 0x729b40
int JumpjetLocomotionClass::ComputeBounceHeight(); // IDA: 0x729e50
int JumpjetLocomotionClass::sub_72A020(); // IDA: 0x72a020
bool JumpjetLocomotionClass::sub_72A060(); // IDA: 0x72a060
char JumpjetLocomotionClass::sub_72A0E0(); // IDA: 0x72a0e0
int TunnelLocomotionClass::ddtor(); // IDA: 0x72a110
int TunnelLocomotionClass::BeginMove(); // IDA: 0x72a150
int JumpjetLocomotionClass::sub_72A1A0(); // IDA: 0x72a1a0
int JumpjetLocomotionClass::sub_72A1C0(); // IDA: 0x72a1c0
BOOL JumpjetLocomotionClass::sub_72A1E0(); // IDA: 0x72a1e0
char JumpjetLocomotionClass::sub_75AB30(); // IDA: 0x75ab30
bool JumpjetLocomotionClass::sub_75AB40(); // IDA: 0x75ab40
unsigned int* JumpjetLocomotionClass::sub_75ABA0(); // IDA: 0x75aba0
unsigned int* JumpjetLocomotionClass::sub_75AC00(); // IDA: 0x75ac00
int JumpjetLocomotionClass::sub_75AC80(); // IDA: 0x75ac80
char JumpjetLocomotionClass::sub_75ACB0(); // IDA: 0x75acb0
int JumpjetLocomotionClass::sub_75ADA0(); // IDA: 0x75ada0
char JumpjetLocomotionClass::sub_75AE00(); // IDA: 0x75ae00
int JumpjetLocomotionClass::sub_75AE30(); // IDA: 0x75ae30
int WalkLocomotionClass::ddtor(); // IDA: 0x75c640
HRESULT WalkLocomotionClass::BeginMove(); // IDA: 0x75c680
HRESULT WalkLocomotionClass::LoadFromStream(); // IDA: 0x75c700
int JumpjetLocomotionClass::sub_75C7E0(); // IDA: 0x75c7e0
int JumpjetLocomotionClass::sub_75C850(); // IDA: 0x75c850
int JumpjetLocomotionClass::sub_75C8A0(); // IDA: 0x75c8a0
bool JumpjetLocomotionClass::sub_75C8E0(); // IDA: 0x75c8e0
int JumpjetLocomotionClass::sub_75C920(); // IDA: 0x75c920
int JumpjetLocomotionClass::sub_75CA30(); // IDA: 0x75ca30
bool JumpjetLocomotionClass::sub_75CA80(); // IDA: 0x75ca80
char JumpjetLocomotionClass::sub_75CB20(); // IDA: 0x75cb20
unsigned int* JumpjetLocomotionClass::sub_75CB30(); // IDA: 0x75cb30
long WalkLocomotionClass::AddRef(); // IDA: 0x75cb80
long WalkLocomotionClass::Release(); // IDA: 0x75cb90
BOOL JumpjetLocomotionClass::sub_75CBA0(); // IDA: 0x75cba0
int JumpjetLocomotionClass::sub_75CBC0(); // IDA: 0x75cbc0
int JumpjetLocomotionClass::sub_75CC30(); // IDA: 0x75cc30
long JumpjetLocomotionClass::sub_75CC40(); // IDA: 0x75cc40
long JumpjetLocomotionClass::sub_75CC50(); // IDA: 0x75cc50
int JumpjetLocomotionClass::sub_75CC60(); // IDA: 0x75cc60
long JumpjetLocomotionClass::sub_75CC70(); // IDA: 0x75cc70
long JumpjetLocomotionClass::sub_75CC80(); // IDA: 0x75cc80
void RemoveWOLPlayerLogin(); // IDA: 0x79cba0
int _remove(); // IDA: 0x7cd42b
int NetworkLobbyPaintProc(); // IDA: 0x61d6d0
int NetworkSettingsDlgProc(); // IDA: 0x631760
int NetworkLobbyWOL(); // IDA: 0x787770

} // namespace gamemd