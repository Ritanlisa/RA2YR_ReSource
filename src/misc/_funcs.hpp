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

// All relocatable declarations were moved to class bodies / src/_generated/global_funcs.hpp by tools/move_funcs_decls.py.
// Residual declarations below could not be relocated (invalid name / no class / collision):

// int AudioStream::CheckFormatChanged(); // 0x402800
// void AudioStream::CleanupChannels(); // 0x404E70
// int AudioStream::UpdateTimers(); // 0x404FD0
// int AudioStream::UpdateCountdowners(); // 0x405040
// int AudioQueue::PreallocateChannels(); // 0x403530
// int AudioQueue::FindBestChannel(); // 0x4035F0
// int AudioQueue::DeactivateAllMatching(); // 0x403770
// int AudioQueue::IsEmpty(); // 0x407B40
// int AudioQueue::IsNotEmpty(); // 0x407B50
// int AudioQueue::HaltVoices(); // 0x4081A0
// int* AudioQueue::IncrementPriority(); // 0x408200
// int AudioQueue::ReleaseBuffers(); // 0x408270
// int AudioQueue::DrainAll(); // 0x750FA0
// BOOL Audio::ApplyFormatFlags(); // 0x406870
// void Audio::Shutdown(); // 0x406D40
// BOOL Audio::IsSoundEnabled(); // 0x407000
// int Audio::IsPlaying(); // 0x7529E0
// int VoxelAnimClass::ddtor(); // 0x74AAD0
// int SuperWeaponTypeClass::SD_vt03(); // 0x6CE7C0
// int Voxel::Projection_Setup(); // 0x754CB0
// int Voxel::InitDistanceTable(); // 0x75F020
// int WarheadTypeClass::vt[03](); // 0x75E080
// char Network::Dispatch(); // 0x48D1E0
// char Network::Init(); // 0x52F3F0
// char Network::QueryAddress(); // 0x5D90E0
// short Network::WaitForPacket(); // 0x5D9220
// int Network::ShutdownInterface(); // 0x5DA720
// int Network::InitPlayerSlots(); // 0x5E8B60
// int Network::CleanupOnDisconnect(); // 0x5F0040
// char Network::AddFrameEvent(); // 0x6471A0
// void Network::QueueProcessingLoop(); // 0x6475F0
// int Network::ProcessEventList(); // 0x64C380
// char Network::RecordEvent(); // 0x6521C0
// int Network::SendUnreachable(); // 0x6523A0
// wchar_t* Network::ProcessAddressChange(); // 0x6640E0
// int Network::GetMaxPacketSize(); // 0x74FD20
// char Network::IsLobbyFeature(); // 0x77D970
// void Network::SyncPlayerList(); // 0x792F10
// int ConnectionPointClass::GetConnectionInterface(); // 0x4A0760
// int NetworkLobby::GetPlayerCount(); // 0x5DA080
// int NetworkLobby::UpdatePlayerList(); // 0x5DB9B0
// char NetworkLobby::CreateGame(); // 0x5DC350
// int NetworkLobby::DlgProc(); // 0x5DE520
// char NetworkLobby::MessageHandler(); // 0x5E00B0
// bool NetworkLobby::CheckMinPlayers(); // 0x5E9510
// char NetworkLobby::FillOptionCombo(); // 0x5EE3A0
// int WinsockInterfaceClass::Destru_vt16(); // 0x7B2770
// int JumpjetLocomotionClass::LoadLocomotionFromStream(); // 0x4AF610
// bool JumpjetLocomotionClass::StubReturnTrue(); // 0x4AFB80
// int DriveLocomotionClass::ddtor(); // 0x4B4830
// int JumpjetLocomotionClass::DispatchCheckState(); // 0x4B4880
// char DroppodLocomotionClass::ILoco_Process(); // 0x4B5B70
// int DropPodLocomotionClass::ddtor(); // 0x4B6200
// int JumpjetLocomotionClass::Thunk_VtableDispatch4(); // 0x4B6610
// bool JumpjetLocomotionClass::ComputeFloatExpression_0(); // 0x4CCAC0
// int FlyLocomotionClass::ddtor(); // 0x4CFC80
// int HoverLocomotionClass::ddtor(); // 0x517070
// int JumpjetLocomotionClass::InitMovementParams(); // 0x54AD30
// int JumpjetLocomotionClass::ConvertCoordToCell_0(); // 0x54B8D0
// int JumpjetLocomotionClass::CheckState(); // 0x55ABB0
// void Array::RemoveItemByValue(); // 0x55B880
// char JumpjetLocomotionClass::SmallStub_5AFF70(); // 0x5AFF70
// unsigned int* JumpjetLocomotionClass::GetRenderCoordinate_0(); // 0x5AFFE0
// int MechLocomotionClass::ddtor(); // 0x5B1960
// int MechLocomotionClass::BeginMove(); // 0x5B19A0
// bool JumpjetLocomotionClass::StubReturnTrue_4(); // 0x5B19E0
// int JumpjetLocomotionClass::DispatchVirtualCall_5(); // 0x5B1A50
// bool JumpjetLocomotionClass::IsPositionWithinThreshold_0(); // 0x5B1AA0
// bool JumpjetLocomotionClass::CheckCompositeState_0(); // 0x661F90
// int RocketLocomotionClass::ddtor(); // 0x6633D0
// int JumpjetLocomotionClass::LoadLocomotionFromStream_2(); // 0x69ED20
// HRESULT ShipLocomotionClass::LoadFromStream(); // 0x69EF10
// int JumpjetLocomotionClass::StubReturnZero_13(); // 0x69F040
// bool JumpjetLocomotionClass::CheckPiggybackState_0(); // 0x69F080
// int ShipLocomotionClass::ddtor(); // 0x6A3E60
// bool JumpjetLocomotionClass::ShortFunc_718080(); // 0x718080
// unsigned int* JumpjetLocomotionClass::GetCoordinateConditional(); // 0x7180A0
// unsigned int* JumpjetLocomotionClass::ProcessFactoryExit(); // 0x718100
// int JumpjetLocomotionClass::ResetMovementState(); // 0x718230
// bool JumpjetLocomotionClass::ShortFunc_728A50(); // 0x728A50
// int JumpjetLocomotionClass::SyncMovementPosition(); // 0x728AF0
// void TunnelLocomotionClass::ProcessFormationPosition(); // 0x728C00
// int JumpjetLocomotionClass::StubReturnZero_21(); // 0x7291D0
// void* JumpjetLocomotionClass::ComputeTurretTransform(); // 0x729B40
// int TunnelLocomotionClass::ddtor(); // 0x72A110
// bool JumpjetLocomotionClass::ComputeFloatExpression_4(); // 0x75AB40
// unsigned int* JumpjetLocomotionClass::GetRenderCoordinate_2(); // 0x75AC00
// int JumpjetLocomotionClass::DispatchVirtualCall_9(); // 0x75AE30
// int WalkLocomotionClass::ddtor(); // 0x75C640


} // namespace gamemd
