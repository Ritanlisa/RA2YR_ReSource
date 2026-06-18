#pragma once

// Auto-generated from tools/functions_by_module.json (render+ui module)
// 329 functions total: 155 member (80 classes) + 174 global

namespace gamemd {

class AircraftClass;
class BinkMovie;
class BinkMovieClass;
class BlitTransLucent25Alpha_ushort;
class BlitTransXlatAlphaZRead_ushort;
class ButtonOwnerDraw;
class CCToolTip;
class CDROM;
class CStreamClass;
class Campaign;
class CampaignClass;
class CampaignMenu;
class CampaignScore;
class CampaignScreen;
class CampaignSelect;
class CaptureManagerClass;
class ChatDialog;
class ComboBoxOwnerDraw;
class Commands;
class Credits;
class CreditsPower;
class CreditsScreen;
class DDraw;
class DSurface;
class Dialog;
class DialogClass;
class Display;
class DisplayClass;
class FontRenderer;
class GadgetClass;
class Game;
class GameSetup;
class InfantryClass;
class JumpjetLocomotionClass;
class LoadScreen;
class MSFrameAnim;
class MainMenu;
class Mouse;
class MouseClass;
class MultiplayerBattleTeam;
class MultiplayerConfig;
class MultiplayerGameMode;
class MultiplayerObserverTeam;
class MultiplayerSiege;
class MultiplayerSiegeDefenderTeam;
class Network;
class ObjectClass;
class Options;
class Palette;
class ParticleClass;
class Power;
class PowerBar;
class PowerClass;
class RadarClass;
class Render;
class ScoreScreen;
class Screen;
class ScreenCapture;
class ScreenCaptureCommandClass;
class ScreenEffect;
class Sidebar;
class SidebarClass;
class Skirmish;
class SkirmishDialog;
class SkirmishMapGen;
class SkirmishSetup;
class Surface;
class TabClass;
class TabControl;
class Tactical;
class TacticalClass;
class TechnoClass;
class TextRenderer;
class ToolTipManager;
class Voxel;
class VoxelClass;
class VoxelModel;
class VoxelRenderer;
class WonlineStringDialogControl_28;
class XSurface;

// ============================================================
// Member functions
// ============================================================

// --- AircraftClass ---
// AircraftClass::Draw;  // IDA: 0x4144B0

// --- BinkMovie ---
// BinkMovie::HandleKeyboard;  // IDA: 0x6033F0
// BinkMovie::WndProc;  // IDA: 0x6153E0

// --- BinkMovieClass ---
// BinkMovieClass::AllocateRenderSurface;  // IDA: 0x4335E0
// BinkMovieClass::ReleaseRenderSurface;  // IDA: 0x4336C0
// BinkMovieClass::OpenFile;  // IDA: 0x433770

// --- BlitTransLucent25Alpha_ushort ---
// BlitTransLucent25Alpha_ushort::sub_494490;  // IDA: 0x494490

// --- BlitTransXlatAlphaZRead_ushort ---
// BlitTransXlatAlphaZRead_ushort::sub_494590;  // IDA: 0x494590

// --- ButtonOwnerDraw ---
// ButtonOwnerDraw::DlgProc;  // IDA: 0x616980

// --- CCToolTip ---
// CCToolTip::Draw2;  // IDA: 0x478E30

// --- CDROM ---
// CDROM::LockVolume;  // IDA: 0x47A6F0

// --- CStreamClass ---
// CStreamClass::LockRegion;  // IDA: 0x4A2F80
// CStreamClass::UnlockRegion;  // IDA: 0x4A2FC0

// --- Campaign ---
// Campaign::Screen;  // IDA: 0x60D380

// --- CampaignClass ---
// CampaignClass::ddtor;  // IDA: 0x46CF80
// CampaignClass::Write;  // IDA: 0x46D000
// CampaignClass::Seek;  // IDA: 0x46D050

// --- CampaignMenu ---
// CampaignMenu::DlgProc;  // IDA: 0x52D640

// --- CampaignScore ---
// CampaignScore::DialogProc;  // IDA: 0x46DFD0
// CampaignScore::ProcessScreen;  // IDA: 0x46FC00
// CampaignScore::sub_471420;  // IDA: 0x471420

// --- CampaignScreen ---
// CampaignScreen::Init;  // IDA: 0x470D30

// --- CampaignSelect ---
// CampaignSelect::DlgProc;  // IDA: 0x52EC00

// --- CaptureManagerClass ---
// CaptureManagerClass::DrawLinks;  // IDA: 0x472160

// --- ChatDialog ---
// ChatDialog::DlgProc;  // IDA: 0x79DB50

// --- ComboBoxOwnerDraw ---
// ComboBoxOwnerDraw::DlgProc;  // IDA: 0x610CA0

// --- Commands ---
// Commands::Execute;  // IDA: 0x537A90

// --- Credits ---
// Credits::Screen;  // IDA: 0x52CB90

// --- CreditsPower ---
// CreditsPower::Display;  // IDA: 0x4C3E30

// --- CreditsScreen ---
// CreditsScreen::DlgProc;  // IDA: 0x531A00

// --- DDraw ---
// DDraw::LogError;  // IDA: 0x4A3DD0
// DDraw::CapabilityCheck;  // IDA: 0x4A3E40
// DDraw::CheckCapabilities;  // IDA: 0x4A4620
// DDraw::WaitForIdle;  // IDA: 0x4A4830
// DDraw::CleanupSurfaces;  // IDA: 0x4C19B0

// --- DSurface ---
// DSurface::ConstructFromHandle;  // IDA: 0x4BA480
// DSurface::BlitStretch;  // IDA: 0x4BBB00
// DSurface::DrawLineModulated;  // IDA: 0x4BBCA0
// DSurface::DrawLineZBuf;  // IDA: 0x4BFD30
// DSurface::Flip2;  // IDA: 0x5D1E50
// DSurface::FillRectWithColor;  // IDA: 0x621B80

// --- Dialog ---
// Dialog::ShowMessageBox;  // IDA: 0x5D3490
// Dialog::MessageLoop;  // IDA: 0x5D4D50
// Dialog::FindGameUI;  // IDA: 0x5E26C0
// Dialog::ShowMessage;  // IDA: 0x5E2700
// Dialog::ShowStatusText;  // IDA: 0x5E2790
// Dialog::CheckButtonState;  // IDA: 0x5F3450
// Dialog::MapControlToAction;  // IDA: 0x606800
// Dialog::HandleTabKey;  // IDA: 0x60A330
// Dialog::DispatchEvent;  // IDA: 0x60A5B0
// Dialog::SubclassEditControl;  // IDA: 0x60F320
// Dialog::InitWindow;  // IDA: 0x60F760
// Dialog::InitializeControls;  // IDA: 0x60F9A0
// Dialog::TabControlPaint;  // IDA: 0x6137D0
// Dialog::PumpMessages;  // IDA: 0x623120
// Dialog::UpdateGameUI;  // IDA: 0x77D820
// Dialog::CloseAll;  // IDA: 0x799D10

// --- DialogClass ---
// DialogClass::RegisterWinClasses;  // IDA: 0x60D450
// DialogClass::Reposition;  // IDA: 0x775BC0

// --- Display ---
// Display::CalculateDefaultSize;  // IDA: 0x5D5A20

// --- DisplayClass ---
// DisplayClass::SetCoordVisible;  // IDA: 0x4A9840
// DisplayClass::Render;  // IDA: 0x4AE6B0
// DisplayClass::SetSurface;  // IDA: 0x4AE6F0
// DisplayClass::GetSurface;  // IDA: 0x4AE720

// --- FontRenderer ---
// FontRenderer::DrawText;  // IDA: 0x434B90

// --- GadgetClass ---
// GadgetClass::FindByWindow;  // IDA: 0x60AAB0

// --- Game ---
// Game::SendCampaignOptions;  // IDA: 0x46D4A0

// --- GameSetup ---
// GameSetup::DisplayPlayers;  // IDA: 0x5DAFE0

// --- InfantryClass ---
// InfantryClass::Draw;  // IDA: 0x518F90

// --- JumpjetLocomotionClass ---
// JumpjetLocomotionClass::IsBridgeBlocking;  // IDA: 0x516CA0

// --- LoadScreen ---
// LoadScreen::RenderLoop;  // IDA: 0x4B6C30
// LoadScreen::Render;  // IDA: 0x643AE0

// --- MSFrameAnim ---
// MSFrameAnim::Draw;  // IDA: 0x767EF0

// --- MainMenu ---
// MainMenu::Screen;  // IDA: 0x531CC0
// MainMenu::DlgProc;  // IDA: 0x531F60

// --- Mouse ---
// Mouse::IsButtonDown;  // IDA: 0x54F5C0
// Mouse::HideWindow;  // IDA: 0x5BC400

// --- MouseClass ---
// MouseClass::ToggleContextGadget;  // IDA: 0x6D1770
// MouseClass::LoadCursors;  // IDA: 0x72DDB0

// --- MultiplayerBattleTeam ---
// MultiplayerBattleTeam::AddRef;  // IDA: 0x5C1090

// --- MultiplayerConfig ---
// MultiplayerConfig::Cleanup;  // IDA: 0x5D5B20

// --- MultiplayerGameMode ---
// MultiplayerGameMode::GetFirst;  // IDA: 0x5D5E10
// MultiplayerGameMode::ListGet;  // IDA: 0x5D5ED0

// --- MultiplayerObserverTeam ---
// MultiplayerObserverTeam::AddRef;  // IDA: 0x5C94C0

// --- MultiplayerSiege ---
// MultiplayerSiege::Read;  // IDA: 0x5CA680
// MultiplayerSiege::Write;  // IDA: 0x5CA6D0
// MultiplayerSiege::CheckStatus;  // IDA: 0x5CA9B0
// MultiplayerSiege::GetResult;  // IDA: 0x5CAAC0

// --- MultiplayerSiegeDefenderTeam ---
// MultiplayerSiegeDefenderTeam::AddRef;  // IDA: 0x5CAE70

// --- Network ---
// Network::ModemConnectionDialog;  // IDA: 0x5EF4E0
// Network::IsMultiplayerActive;  // IDA: 0x77D940

// --- ObjectClass ---
// ObjectClass::ToggleSidebarDisplay;  // IDA: 0x6A7D70

// --- Options ---
// Options::Screen_Dialog;  // IDA: 0x55FC80
// Options::DialogProc;  // IDA: 0x618D40

// --- Palette ---
// Palette::Preview_Generate;  // IDA: 0x642130

// --- ParticleClass ---
// ParticleClass::CheckDrawFlags;  // IDA: 0x62D710

// --- Power ---
// Power::TimerProcess;  // IDA: 0x4A1D50

// --- PowerBar ---
// PowerBar::CalcFill;  // IDA: 0x63F850
// PowerBar::ComputeFill;  // IDA: 0x63F960

// --- PowerClass ---
// PowerClass::CheckLow;  // IDA: 0x63F7E0

// --- RadarClass ---
// RadarClass::RecreateSurface;  // IDA: 0x654650

// --- Render ---
// Render::DrawLine;  // IDA: 0x705270
// Render::DrawTileBitmap;  // IDA: 0x7C7371

// --- ScoreScreen ---
// ScoreScreen::DrawSHPBackground;  // IDA: 0x778210

// --- Screen ---
// Screen::Capture;  // IDA: 0x52FEC0

// --- ScreenCapture ---
// ScreenCapture::Frame;  // IDA: 0x55CC20

// --- ScreenCaptureCommandClass ---
// ScreenCaptureCommandClass::ddtor;  // IDA: 0x537B60
// ScreenCaptureCommandClass::Release;  // IDA: 0x537B80
// ScreenCaptureCommandClass::Execute;  // IDA: 0x537BA0

// --- ScreenEffect ---
// ScreenEffect::UpdateBob;  // IDA: 0x7772A0

// --- Sidebar ---
// Sidebar::UpdateProductionDisplay;  // IDA: 0x6A9540

// --- SidebarClass ---
// SidebarClass::CreateScrollButtons;  // IDA: 0x653010
// SidebarClass::InitPositions;  // IDA: 0x6A5090
// SidebarClass::CalcBounds;  // IDA: 0x6A5130
// SidebarClass::LoadAssets;  // IDA: 0x6A5840
// SidebarClass::LoadResources;  // IDA: 0x6ABD30

// --- Skirmish ---
// Skirmish::Setup_DlgProc;  // IDA: 0x6AE3F0

// --- SkirmishDialog ---
// SkirmishDialog::Show;  // IDA: 0x5E68A0

// --- SkirmishMapGen ---
// SkirmishMapGen::DlgProc;  // IDA: 0x596300

// --- SkirmishSetup ---
// SkirmishSetup::DlgProc;  // IDA: 0x5E6920

// --- Surface ---
// Surface::TileBlit;  // IDA: 0x6BA3E0
// Surface::BlitTransparent;  // IDA: 0x6BA580
// Surface::AlphaBlend;  // IDA: 0x6BA690

// --- TabClass ---
// TabClass::DrawPower;  // IDA: 0x658330

// --- TabControl ---
// TabControl::WndProc;  // IDA: 0x612B70
// TabControl::DlgProc;  // IDA: 0x61D950

// --- Tactical ---
// Tactical::Radar_Render;  // IDA: 0x640A40

// --- TacticalClass ---
// TacticalClass::RenderFrame;  // IDA: 0x4F45B0
// TacticalClass::PixelToCellCheck;  // IDA: 0x653760
// TacticalClass::DrawPlacementCircles;  // IDA: 0x6DBE20

// --- TechnoClass ---
// TechnoClass::DrawAirstrikeFlare_SetContext;  // IDA: 0x705860
// TechnoClass::RenderTechnoSHP;  // IDA: 0x73B140
// TechnoClass::DrawVoxel;  // IDA: 0x73B470

// --- TextRenderer ---
// TextRenderer::Printf;  // IDA: 0x4A60E0
// TextRenderer::DrawText;  // IDA: 0x4A61C0
// TextRenderer::RenderCentered;  // IDA: 0x4B96A0
// TextRenderer::MeasureBuilding2;  // IDA: 0x642EF0

// --- ToolTipManager ---
// ToolTipManager::Read;  // IDA: 0x724BB0

// --- Voxel ---
// Voxel::FacePixelBuffer;  // IDA: 0x7DF9C0
// Voxel::FacePixelBufferEx;  // IDA: 0x7DFAE0
// Voxel::FacePixelBuffer3;  // IDA: 0x7DFC00

// --- VoxelClass ---
// VoxelClass::RenderObject;  // IDA: 0x73C5F0

// --- VoxelModel ---
// VoxelModel::BuildDrawList;  // IDA: 0x755B30

// --- VoxelRenderer ---
// VoxelRenderer::DrawSection;  // IDA: 0x7575A0
// VoxelRenderer::DrawSectionLines;  // IDA: 0x757790
// VoxelRenderer::ProcessVoxelData;  // IDA: 0x757E70
// VoxelRenderer::RenderFrame;  // IDA: 0x758030
// VoxelRenderer::ClearDepth;  // IDA: 0x758880

// --- WonlineStringDialogControl[28] ---
// WonlineStringDialogControl[28]::Draw;  // IDA: 0x7AD580
// WonlineStringDialogControl[28]::ddtor;  // IDA: 0x7AD440
// WonlineStringDialogControl[28]::Read;  // IDA: 0x7AD460
// WonlineStringDialogControl[28]::Write;  // IDA: 0x7AD480
// WonlineStringDialogControl[28]::AddRef;  // IDA: 0x7AD620
// WonlineStringDialogControl[28]::Release;  // IDA: 0x7AD640

// --- XSurface ---
// XSurface::vt_entry_40;  // IDA: 0x410600

// ============================================================
// Global / free functions
// ============================================================

// AllocateSurfaceScreenSurfaces();  // IDA: 0x533FD0
// BaseDialogProc();  // IDA: 0x622B50
// BlendMinimapPixel();  // IDA: 0x4BF650
// BlitterCopySHP();  // IDA: 0x4373B0
// BlitterCopySimpleSHP();  // IDA: 0x437350
// BlitterDrawSHP();  // IDA: 0x4AF2A0
// BlitterRLEBlitSHP();  // IDA: 0x437A10
// CacheDialogInvalidate();  // IDA: 0x603D30
// CacheRenderedText();  // IDA: 0x775DB0
// CalcSurfaceBlitRects();  // IDA: 0x7BC040
// CleanupCampaignResources();  // IDA: 0x5F0070
// CloseDialog();  // IDA: 0x7757E0
// ControlDialogHandler();  // IDA: 0x608500
// CopySHPFrameToSurface();  // IDA: 0x7483B0
// CreateDialog();  // IDA: 0x622650
// CreateDialogIndirect();  // IDA: 0x775700
// CreateSurfaceClassPrimary();  // IDA: 0x544E70
// CtlDialogColorHandler();  // IDA: 0x6015E0
// DecodeBitmapRGB();  // IDA: 0x42FE50
// DecodeBlockLCW();  // IDA: 0x55C0E0
// DestroyDialogChildWindow();  // IDA: 0x610570
// DialogFunc();  // IDA: 0x4C83E0
// DialogSkirmishFunc_UpdateMultiEngineer();  // IDA: 0x6ACEE0
// DisableCampaignSlots();  // IDA: 0x5EBC00
// DispatchDialogControlAction();  // IDA: 0x6035F0
// DisplayBuildingInfoPanel();  // IDA: 0x4B9890
// DisplayRankingsThunkWOL();  // IDA: 0x785360
// DlgSkirmishMenuProc();  // IDA: 0x6040B0
// DrawAffineTexture();  // IDA: 0x6B8F00
// DrawBuildingTilesSHP();  // IDA: 0x4A5A50
// DrawDialogGradient();  // IDA: 0x6208F0
// DrawDialogText();  // IDA: 0x5E2820
// DrawHUD();  // IDA: 0x55F1E0
// DrawIsoTile();  // IDA: 0x5A7FA0
// DrawPowerBarForPlayers();  // IDA: 0x658640
// DrawScoreScreenStats();  // IDA: 0x72E2D0
// DrawScrollArrowUI();  // IDA: 0x620720
// DrawSidebarCreditsTimer();  // IDA: 0x4A2370
// DrawSurfaceLineAlpha();  // IDA: 0x620050
// DrawTacticalFillScanline();  // IDA: 0x63D910
// DrawTacticalLaserLine();  // IDA: 0x704E40
// DrawTacticalLine2D();  // IDA: 0x63D810
// DrawTacticalLine3D();  // IDA: 0x6F5EF0
// DrawTacticalMapLine();  // IDA: 0x7049C0
// DrawTacticalWaypoint();  // IDA: 0x63D630
// DrawTechnoDeployCircle();  // IDA: 0x456980
// DrawTextRendererMultiline();  // IDA: 0x623880
// DrawTextRendererTextAligned();  // IDA: 0x6211D0
// DrawTile4x4Block();  // IDA: 0x7C4730
// DrawTileBlock16BPP();  // IDA: 0x7C4B80
// DrawTileBlock2();  // IDA: 0x7C53A0
// DrawTileBlock2Sub();  // IDA: 0x7C57D0
// DrawTileBlock8BPP();  // IDA: 0x7C4F90
// DrawToSurfaceSHP();  // IDA: 0x4AED70
// DrawUnitExperiencePopup();  // IDA: 0x7336C0
// EncodeBitmapRGB();  // IDA: 0x42FD30
// ExchangeMultiplayerGameInfo();  // IDA: 0x5E7920
// FadePalette();  // IDA: 0x4A3C30
// FillRectangle();  // IDA: 0x4A6500
// FilterDialogButtonAction();  // IDA: 0x609E20
// FormatHotkeyDisplayString();  // IDA: 0x61EF70
// FormatWOLPlayerInfoForDisplay();  // IDA: 0x780E30
// GameListRenderWOL();  // IDA: 0x781480
// GameModeDlgProcMultiplayer();  // IDA: 0x7988C0
// GameOptionsScreenWOL();  // IDA: 0x79F140
// GameSetupDialogProc();  // IDA: 0x5B4B10
// GetComboBoxSelectedRaw();  // IDA: 0x4E4E20
// GetComboBoxSelectedRaw2();  // IDA: 0x4E6030
// GetDialogControlSHP();  // IDA: 0x603870
// GetDialogDefaultButton();  // IDA: 0x609730
// GetDialogText();  // IDA: 0x623E40
// GetSkirmishMenuOwnerName();  // IDA: 0x604060
// HideSkirmishSpawnLocations();  // IDA: 0x6AE080
// HitDialogTest();  // IDA: 0x776490
// InitDialogCountryIcons();  // IDA: 0x61F210
// InitSkirmishDialogControls();  // IDA: 0x5E3010
// InitSkirmishSettings();  // IDA: 0x6C87F0
// InitializeDialogControls();  // IDA: 0x60F4B0
// IntersectSurfaceRects();  // IDA: 0x7BBE20
// IsDialogControlHidden();  // IDA: 0x602DD0
// IsDialogControlVisible();  // IDA: 0x608CD0
// IsDialogWindowClass();  // IDA: 0x603AA0
// IsMessageDialog();  // IDA: 0x53E730
// IsValidActionDialog();  // IDA: 0x602490
// LoadCampaignMissionData();  // IDA: 0x603040
// LoadFromINIGraphicMenu();  // IDA: 0x4F1CA0
// LoadMultiplayerModesList();  // IDA: 0x5D7590
// LoadPaletteFromFile();  // IDA: 0x6B9D00
// LoadPaletteSimple();  // IDA: 0x72ADE0
// MapSkirmishDialogPlayerToControl();  // IDA: 0x4E48E0
// MessageDialogLoopAlt();  // IDA: 0x7759E0
// NavigateDialogTab();  // IDA: 0x600C70
// ObfuscateDataBlock();  // IDA: 0x7E0170
// ParseINIAnimGadgetDefinition();  // IDA: 0x4F2C70
// ParseINIGadgetDefinition();  // IDA: 0x4F3140
// PhoneEditorDialogProc();  // IDA: 0x630C10
// PlayerSkirmishSlotHandler();  // IDA: 0x5EC9F0
// RenderAudioVideoFrame();  // IDA: 0x7C2590
// RenderBuilding();  // IDA: 0x63B150
// RenderChronosphereScreenEffect();  // IDA: 0x53BBA0
// RenderCreditsScreen();  // IDA: 0x72F540
// RenderDialogSurface();  // IDA: 0x61ECA0
// RenderFogOfWar();  // IDA: 0x47EFE0
// RenderFogOfWarOverlay();  // IDA: 0x47F250
// RenderGadgetClassAnimation();  // IDA: 0x6071E0
// RenderMovieFrame();  // IDA: 0x5BFF60
// RenderScoreScreen();  // IDA: 0x72E450
// RenderScoreboardSidebar();  // IDA: 0x653FA0
// RenderScriptActionHighlight();  // IDA: 0x63B2F0
// RenderTechnoClassVoxel();  // IDA: 0x706ED0
// RenderTextLabel();  // IDA: 0x4A5EB0
// RenderTextLabelWordWrap();  // IDA: 0x4A6360
// RenderVoxels();  // IDA: 0x757120
// RepositionDialogControls();  // IDA: 0x60C0C0
// ResizeDialogAndEnum();  // IDA: 0x60C4A0
// RunDialog();  // IDA: 0x6241F0
// SaveMultiplayerLobbySettings();  // IDA: 0x5ED400
// ScreenDialogToClient();  // IDA: 0x775690
// ScreenDlgProcOptions();  // IDA: 0x55FDB0
// SendMultiplayerStartSignal();  // IDA: 0x5E3AB0
// SetDialogActiveFlag();  // IDA: 0x606740
// SetDialogParent();  // IDA: 0x777080
// SetDialogPlayerName();  // IDA: 0x5E2EF0
// Setup2DlgProcMultiplayer();  // IDA: 0x7983E0
// SetupDialog();  // IDA: 0x622820
// SetupDialogRenderBuffer();  // IDA: 0x6214B0
// SetupLobbyPlayerSlotDialog();  // IDA: 0x4E5E20
// SetupMultiplayerLobbyPlayers();  // IDA: 0x5ED5A0
// SetupMultiplayerLobbyScreen();  // IDA: 0x5EC3A0
// SetupNetworkLobbyDialog();  // IDA: 0x5E3D10
// SetupSkirmishDialogPlayerSlot();  // IDA: 0x4E3CE0
// SetupSkirmishPlayerSlots();  // IDA: 0x5E9E70
// SetupSkirmishSpawnLocationEntry();  // IDA: 0x6ADC20
// SetupSkirmishSpawnLocations();  // IDA: 0x4E49A0
// ShowAudioSettingsDialog();  // IDA: 0x6B6230
// ShowConfirmDialog();  // IDA: 0x5C60D0
// ShowDialogConfirm();  // IDA: 0x5E2CD0
// ShowDiplomacyDialog();  // IDA: 0x6586D0
// ShowGameDialog();  // IDA: 0x4F1840
// ShowHotkeyOptionsDialog();  // IDA: 0x5FBEF0
// ShowSkirmishSetupScreen();  // IDA: 0x6AE2C0
// ShowWOLLobbyDialog();  // IDA: 0x77D840
// SkirmishDialogProc();  // IDA: 0x5DF180
// StartWDTCampaign();  // IDA: 0x7AFB90
// SynchronizeMultiplayerGameStart();  // IDA: 0x5DD8A0
// ToCoordPixel();  // IDA: 0x6339E0
// ToggleDisplayMode();  // IDA: 0x6842F0
// UpdateDeferredLightSurfaces();  // IDA: 0x554D50
// UpdateMultiplayerLobbySlots();  // IDA: 0x5EB7B0
// UpdateMultiplayerPlayerOptions();  // IDA: 0x5DBF50
// UpdateSurfaceAnimations();  // IDA: 0x53AD00
// ValidateDialogControl();  // IDA: 0x601D20
// ValidateDialogEvent();  // IDA: 0x600CA0
// VideoSettingsDialogProc();  // IDA: 0x561400
// VoxelDrawScanline();  // IDA: 0x757BF0
// WOLLoginDialogProc();  // IDA: 0x79D720
// WaitForMultiplayerLoadSync();  // IDA: 0x684370
// WriteCompressionBlock();  // IDA: 0x55BB90
// ___sbh_alloc_block();  // IDA: 0x7CFB13
// ___sbh_find_block();  // IDA: 0x7CF7BD
// ___sbh_free_block();  // IDA: 0x7CF7E8
// ___sbh_resize_block();  // IDA: 0x7CFFC8
// __lock();  // IDA: 0x7CD9F5
// __lock_fhandle();  // IDA: 0x7D96A8
// __lock_file();  // IDA: 0x7CB3F9
// __lock_file2();  // IDA: 0x7CB428
// __lockexit();  // IDA: 0x7CBEC1
// __mtdeletelocks();  // IDA: 0x7CD989
// __mtinitlocks();  // IDA: 0x7CD960
// __unlock();  // IDA: 0x7CDA56
// __unlock_fhandle();  // IDA: 0x7D9707
// __unlock_file();  // IDA: 0x7CB44B
// __unlock_file2();  // IDA: 0x7CB47A
// __unlockexit();  // IDA: 0x7CBECA

} // namespace gamemd