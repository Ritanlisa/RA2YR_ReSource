#include "network/network_ext.hpp"

namespace gamemd {

// --- IPXGlobalConnClass ---

void IPXGlobalConnClass::Flush() {}
void IPXGlobalConnClass::GetQueueSize() {}
void IPXGlobalConnClass::ConnectToHost() {}
void IPXGlobalConnClass::Disconnect() {}
void IPXGlobalConnClass::GetAddress() {}

// --- Modem ---

void Modem::EnumerateDevices() {}
void Modem::CheckStatus() {}
void Modem::DetectAndConnect() {}
void Modem::OpenPort() {}

// --- ModemGame ---

void ModemGame::AdvanceTauntCommand() {}
void ModemGame::UpdatePlayerNameAndColor() {}
void ModemGame::ProcessPacket() {}
void ModemGame::ReceiveMapPreview() {}
void ModemGame::RenderPaletteImage() {}

// --- ModemGuest ---

void ModemGuest::Dialog() {}
void ModemGuest::InitDialog() {}
void ModemGuest::UpdateGuestPlayerInfo() {}
void ModemGuest::ProcessPacket() {}

// --- ModemHost ---

void ModemHost::Dialog() {}
void ModemHost::InitDialog() {}
void ModemHost::StartGame() {}

// --- MultiplayerBattleTeam ---

void MultiplayerBattleTeam::AddRef() {}
void MultiplayerBattleTeam::Release() {}
void MultiplayerBattleTeam::QueryInterface() {}

// --- MultiplayerConfig ---

void MultiplayerConfig::Cleanup() {}

// --- MultiplayerLobby ---

void MultiplayerLobby::FillSlots() {}

// --- MultiplayerModeVector ---

void MultiplayerModeVector::Destruct() {}

// --- MultiplayerModeVector2 ---

void MultiplayerModeVector2::Destruct() {}

// --- MultiplayerObserverTeam ---

void MultiplayerObserverTeam::AddRef() {}
void MultiplayerObserverTeam::QueryInterface() {}

// --- MultiplayerSiegeAttackerTeam ---

void MultiplayerSiegeAttackerTeam::QueryInterface() {}

// --- MultiplayerSiegeDefenderTeam ---

void MultiplayerSiegeDefenderTeam::AddRef() {}
void MultiplayerSiegeDefenderTeam::QueryInterface() {}

// --- MultiplayerTeam ---

void MultiplayerTeam::Constructor() {}
void MultiplayerTeam::Destructor() {}

// --- MultiplayerTeamVector ---

void MultiplayerTeamVector::Destruct() {}

// --- MultiplayerTeam_Destru ---

void MultiplayerTeam_Destru::QueryInterface() {}

// --- NetworkBuffer ---

void NetworkBuffer::GetField() {}
void NetworkBuffer::UpdateWindow() {}
void NetworkBuffer::GetField2() {}
void NetworkBuffer::GetField3() {}

// --- NetworkDialog ---

void NetworkDialog::InitModemSettings() {}
void NetworkDialog::Dispatch() {}
void NetworkDialog::UpdateListBox() {}

// --- NetworkEventClass ---

void NetworkEventClass::Process() {}

// --- NetworkEventQueueClass ---

void NetworkEventQueueClass::WaitForResponse() {}

// --- NetworkGameSetup ---

void NetworkGameSetup::DlgProc() {}
void NetworkGameSetup::ReadRulesInitConfig() {}
void NetworkGameSetup::ReadRulesBases() {}
void NetworkGameSetup::ReadRulesAlliesAllowed() {}
void NetworkGameSetup::ReadRulesEngineerCount() {}

// --- NetworkID ---

void NetworkID::Assign() {}
void NetworkID::Compare() {}

// --- NetworkManager ---

void NetworkManager::SetPlayerAddress() {}
void NetworkManager::RemovePlayer() {}

// --- NetworkOptions ---

void NetworkOptions::DlgProc() {}
void NetworkOptions::ApplySettings() {}

// --- NetworkScore ---

void NetworkScore::DlgProc() {}

// --- NetworkSession ---

void NetworkSession::ResetState() {}
void NetworkSession::IsPlayerInGame() {}

// --- NetworkSettings ---

void NetworkSettings::DlgProc() {}

// --- NetworkShare ---

void NetworkShare::GetField() {}

// --- UDPInterfaceClass_Destru ---

void UDPInterfaceClass_Destru::GetQueueSize() {}
void UDPInterfaceClass_Destru::Flush() {}
void UDPInterfaceClass_Destru::Send() {}
void UDPInterfaceClass_Destru::SetAddress() {}
void UDPInterfaceClass_Destru::GetAddress() {}

// --- WOLGameClass ---

void WOLGameClass::ParseChatMessage() {}

// --- WOLGameList ---

void WOLGameList::UpdatePlayerStats() {}
void WOLGameList::Check() {}
void WOLGameList::PopulateLobbyLists() {}
void WOLGameList::EnsureCapacity() {}
void WOLGameList::GrowBuffer() {}

// --- WOLLogin ---

void WOLLogin::DlgProc() {}

// --- WOLOption ---

void WOLOption::SetValue() {}

// --- WOLPersona ---

void WOLPersona::FormatDateTime() {}

// --- WOLobby ---

void WOLobby::FindPlayerIndex() {}
void WOLobby::BuildStateList() {}
void WOLobby::BuildPlayerList() {}
void WOLobby::DlgProc() {}
void WOLobby::FormatLatencyText() {}

} // namespace gamemd
