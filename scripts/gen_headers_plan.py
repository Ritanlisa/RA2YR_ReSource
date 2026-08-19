"""
Batch header generator for HIGH priority MISSING classes.
Creates full class definitions with IDA-extracted member layouts.
"""
import json, os, sys

with open('D:/RA2YR_ReSource/scripts/ida_class_coverage.json') as f:
    data = json.load(f)

high = [m for m in data['MISSING'] if m.get('priority') == 'HIGH']
high.sort(key=lambda x: -x['method_count'])

# Manual mapping: IDA name -> name collisions / existing
# Classes already defined under different names:
SKIP_NAMES = {
    'BinkMovie': 'BinkMovieHandle',  # in movie.hpp
    'SuperWeapon': 'SuperClass',      # in super_weapon.hpp
    'Movie': 'MoviePlayer',           # in movie.hpp
}

# Classes that naturally group together
COMMAND_CLASSES = [
    'SelectTeamCommand', 'AddTeamCommand', 'TauntCommandClass',
    'PageUserCommandClass', 'DeleteCommandClass', 'CenterTeamCommand',
    'ScreenCaptureCommandClass', 'CursorPositionCommandClass',
    'Commands'
]

# Class category → target header file
CLASS_GROUPS = {
    # Audio system
    'audio': {
        'classes': ['AudioMixer', 'AudioSettings', 'Voice', 'Mixer', 
                     'ThemeClass', 'Theme', 'ThemeManager'],
        'header': 'src/misc/audio_ext.hpp',
        'includes': ['"misc/audio.hpp"']
    },
    # Command classes
    'commands': {
        'classes': COMMAND_CLASSES,
        'header': 'src/ui/command_ext.hpp',
        'includes': ['"ui/command_class.hpp"']
    },
    # Hash/crypto
    'hash': {
        'classes': ['HashTable', 'Hash', 'SHA1', 'CRC32'],
        'header': 'src/core/hash_table.hpp',
        'includes': ['<cstdint>', '<functional>']
    },
    # Game systems
    'game': {
        'classes': ['LoadGame', 'Skirmish', 'GameOption', 'GameMode', 
                     'GameSettings', 'SkirmishSetup', 'SyncDelay', 
                     'GameLoop', 'CopyProtection'],
        'header': 'src/system/game_systems.hpp',
        'includes': ['<cstdint>']
    },
    # Movement/combat
    'movement': {
        'classes': ['MoveFeedback', 'MovementAI', 'Movement'],
        'header': 'src/misc/movement_ext.hpp',
        'includes': ['"misc/locomotion.hpp"']
    },
    # Network
    'network': {
        'classes': ['MultiplayerSiege', 'Multiplayer', 'WOL', 'NetworkAddress',
                     'Socket', 'MultiplayerManBattle'],
        'header': 'src/network/network_ext.hpp',
        'includes': ['"network/multiplayer.hpp"']
    },
    # Rendering
    'render': {
        'classes': ['TacticalMap', 'DDraw', 'Palette', 'Color', 'Screen',
                     'Camera', 'Render', 'FogOfWar', 'Frame', 'Draw',
                     'ScrollClass', 'Bounds', 'Transform', 'VoxelPaletteClass',
                     'Animation', 'BuildingAnim'],
        'header': 'src/render/render_ext.hpp',
        'includes': ['"render/display.hpp"', '"render/palette.hpp"']
    },
    # Streams / I/O
    'stream': {
        'classes': ['StreamClass', 'Stream', 'Buffer', 'AsyncIO', 'IStream',
                     'BulkData', 'Block', 'Byte', 'TextBuffer'],
        'header': 'src/core/stream_ext.hpp',
        'includes': ['<cstdint>']
    },
    # UI / dialogs
    'ui': {
        'classes': ['Control', 'Text', 'Font', 'BitTextClass', 'Window',
                     'MainMenu', 'Menu', 'CreditsScreen', 'Credits', 
                     'CampaignScreen', 'Diplomacy', 'Progress', 'KeyboardConfig',
                     'HotkeyOptions', 'LinkClass', 'Input'],
        'header': 'src/ui/ui_ext.hpp',
        'includes': ['<cstdint>', '"core/enums.hpp"']
    },
    # Random / utility
    'utility': {
        'classes': ['Delegate', 'Struct', 'Count', 'Rect', 'COM', 'RefCount',
                     'Helper', 'Compare', 'Value', 'Return',
                     'EventQueue', 'Event_Dispatch', 'Selection', 'Player',
                     'FrameTimer', 'Time', 'Float', 'Config', 'Settings',
                     'Init', 'Process', 'Main', 'Stub', 'Type',
                     'unknown', 'WinMain'],
        'header': 'src/core/utility_ext.hpp',
        'includes': ['<cstdint>', '"core/enums.hpp"']
    },
    # Misc game mechanics
    'misc': {
        'classes': ['Warhead', 'DamageArea', 'UnholyAlliance', 'Weapon',
                     'Turret', 'DropPod', 'Carryall', 'Locomotor', 'Explosion',
                     'BINK', 'CSF', 'CaptureManager', 'Queue',
                     'AI', 'Isometric', 'Shroud', 'GUID', 'CoordStruct',
                     'TriggerActionQueue', 'AnimSystem', 'TClassFactory_MechLocomotionClass',
                     'BuildingLoadQueue', 'Matrix3x4', 'InputManager_ProcessEvents'],
        'header': 'src/misc/misc_ext.hpp',
        'includes': ['<cstdint>', '"core/enums.hpp"', '"core/math.hpp"']
    },
}

# Verification
all_grouped = set()
for g, info in CLASS_GROUPS.items():
    all_grouped.update(info['classes'])

remaining = [m for m in high if m['ida_name'] not in SKIP_NAMES and m['ida_name'] not in all_grouped]
if remaining:
    print(f"UNGROUPED classes: {len(remaining)}")
    for m in remaining:
        print(f"  {m['ida_name']} ({m['method_count']} methods)")

print(f"\nTotal HIGH: {len(high)}")
print(f"Skip: {len(SKIP_NAMES)}")
print(f"Grouped: {len(all_grouped)}")
print(f"Ungrouped: {len(remaining)}")
print(f"Groups: {len(CLASS_GROUPS)} → {sum(len(v['classes']) for v in CLASS_GROUPS.values())} classes in {len(CLASS_GROUPS)} files")
