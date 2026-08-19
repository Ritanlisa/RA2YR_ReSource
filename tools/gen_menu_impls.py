"""
Convert IDA decompilations to compilable C++ and integrate into source files.
"""
import json
import re
import os

# Load decompilations
with open('.omo/evidence/menu_decompilations.json', 'r', encoding='utf-8') as f:
    decomp_data = json.load(f)

# Load functions.json
with open('injectFunctionTest/functions.json', 'r', encoding='utf-8') as f:
    funcs_data = json.load(f)

def clean_pseudocode(name, pseudo, func_info):
    """Transform IDA pseudocode into compilable C++."""
    if not pseudo:
        return "// No decompilation available\nvoid stub() {}"
    
    lines = pseudo.split('\n')
    result = []
    
    for line in lines:
        stripped = line.strip()
        
        # Skip empty lines and local var comments
        if not stripped:
            result.append('')
            continue
        
        # Skip local variable declarations (they'll be regenerated)
        if re.match(r'^\w+ \w+; // (eax|ebx|ecx|edx|esi|edi|ebp|esp)', stripped):
            continue
        # Skip stack offset comments
        if re.match(r'^\w+ \w+\[', stripped) and '// [' in stripped:
            continue
        
        # Cleanup transformations
        cleaned = stripped
        
        # Replace IDA types
        cleaned = re.sub(r'_DWORD\s*\*', 'uint32_t*', cleaned)
        cleaned = re.sub(r'\(_DWORD\s*\*\)', '(uint32_t*)', cleaned)
        cleaned = re.sub(r'\(_DWORD\s*\)', '(uint32_t)', cleaned)
        cleaned = re.sub(r'__int16', 'int16_t', cleaned)
        cleaned = re.sub(r'__int8', 'int8_t', cleaned)
        cleaned = re.sub(r'unsigned __int8', 'uint8_t', cleaned)
        cleaned = re.sub(r'unsigned __int8\s*\*', 'uint8_t*', cleaned)
        cleaned = re.sub(r'\(unsigned __int8\s*\*\)', '(uint8_t*)', cleaned)
        cleaned = re.sub(r'__int64', 'int64_t', cleaned)
        cleaned = re.sub(r'unsigned __int64', 'uint64_t', cleaned)
        cleaned = re.sub(r'unsigned int', 'uint32_t', cleaned)
        
        # Replace __thiscall, __stdcall, __cdecl in function sigs (keep for now as comments)
        # Remove calling convention from inline casts
        cleaned = re.sub(r'__thiscall\s+', '', cleaned)
        cleaned = re.sub(r'__stdcall\s+', '', cleaned)
        cleaned = re.sub(r'__cdecl\s+', '', cleaned)
        cleaned = re.sub(r'__fastcall\s+', '', cleaned)
        
        # Replace bool/char types
        cleaned = re.sub(r'\bchar\s*\*', 'char*', cleaned)
        cleaned = re.sub(r'\bchar\b(?!\*)', 'int8_t', cleaned)
        cleaned = re.sub(r'\b_BYTE\b', 'uint8_t', cleaned)
        cleaned = re.sub(r'\b_BOOL1\b', 'bool', cleaned)
        cleaned = re.sub(r'\b_BOOL4\b', 'bool', cleaned)
        
        # Replace void* casts
        cleaned = re.sub(r'\(const void\s*\*\)', '(const void*)', cleaned)
        cleaned = re.sub(r'\(void\s*\*\)', '(void*)', cleaned)
        
        # Fix strcmp
        cleaned = cleaned.replace('_strcmpi(', '_stricmp(')
        cleaned = cleaned.replace('_strcmp(', 'strcmp(')
        cleaned = cleaned.replace('_strncpy(', 'strncpy(')
        cleaned = cleaned.replace('_memset(', 'memset(')
        cleaned = cleaned.replace('_memcpy(', 'memcpy(')
        cleaned = cleaned.replace('_sprintf(', 'sprintf(')
        cleaned = cleaned.replace('_strlen(', 'strlen(')
        cleaned = cleaned.replace('_strcpy(', 'strcpy(')
        
        # Fix IDA inline function call syntax: (*(type)(ptr))(args) 
        # Replace with proper cast-and-call pattern
        cleaned = re.sub(
            r'\(\*\((int\s*\(.*?\)\s*\*)\)\(([^)]+)\)\)\(([^)]*)\)',
            r'((\1)(\2))(\3)',
            cleaned
        )
        
        # Remove // [esp+...] [ebp-...] comments
        cleaned = re.sub(r'\s*//\s*\[esp[^\]]*\]', '', cleaned)
        cleaned = re.sub(r'\s*//\s*\[ebp[^\]]*\]', '', cleaned)
        cleaned = re.sub(r'\s*//\s*BYREF\s*$', '', cleaned)
        
        # Remove /*0x...*/ comments at end of lines
        cleaned = re.sub(r'\s*/\*0x[0-9A-Fa-f]+\*/\s*$', '', cleaned)
        
        # Fix `vftable' references (IDA quirk)
        cleaned = cleaned.replace("`vftable'", "vftable")
        
        # Fix this pointer (C++ keyword conflict)
        cleaned = re.sub(r'\(char\s*\*\s*\)this', '(char*)(uintptr_t)self', cleaned)
        cleaned = re.sub(r'\bthis\b', 'self', cleaned)
        
        result.append(cleaned)
    
    # Build function body
    body = '\n'.join(result)
    
    # If the decomp says returns but function ends without return, add one
    if 'return' not in body.split('{')[-1] and '}' in body:
        # Check if function should return something
        first_line = result[0] if result else ''
        if 'int ' in first_line or 'bool ' in first_line:
            body = body.rstrip('}') + '  return 0;\n}'
        elif 'void ' in first_line:
            pass  # void is fine
    
    # Wrap in namespace if needed
    # Add guard for decl
    return body


# Now process all functions
output_files = {}  # file_path -> list of (name, code)

# Categorize functions by their naming convention to determine output files
file_mapping = {
    'CampaignClass': 'src/core/campaign_class.cpp',
    'CampaignSelect': 'src/core/campaign_select.cpp',
    'CampaignScore': 'src/core/campaign_score.cpp',
    'CampaignScreen': 'src/core/campaign_screen.cpp',
    'CampaignMenu': 'src/core/campaign_menu.cpp',
    'Campaign_WorldDominationTour': 'src/core/campaign_wdt.cpp',
    'CampaignProperties_WorldDominationTour': 'src/core/campaign_wdt.cpp',
    'CampaignCoop': 'src/core/campaign_coop.cpp',
    'CoopCampaignVector': 'src/core/campaign_coop.cpp',
    'CampaignConstructorW': 'src/core/campaign_class.cpp',
    'GadgetGrid': 'src/ui/gadget_grid.cpp',
    'GadgetClass': 'src/ui/gadget_class.cpp',
    'DialogControl': 'src/ui/dialog_control.cpp',
    'DialogClass': 'src/ui/dialog_class.cpp',
    'DialogQueue': 'src/ui/dialog_queue.cpp',
    'GraphicMenu': 'src/ui/graphic_menu.cpp',
    'GraphicMenuItem': 'src/ui/graphic_menu.cpp',
    'GraphicMenuAnimItem': 'src/ui/graphic_menu.cpp',
    'GraphicMenuImageItem': 'src/ui/graphic_menu.cpp',
    'GraphicMenuShortcutItem': 'src/ui/graphic_menu.cpp',
    'GraphicMenuItem_Destru': 'src/ui/graphic_menu.cpp',
    'MainMenu': 'src/core/menu_select.cpp',
    'MenuSelect': 'src/core/menu_select.cpp',
    'Menu': 'src/core/menu_select.cpp',
    'Credits': 'src/core/credits.cpp',
    'CreditsScreen': 'src/core/credits.cpp',
    'CreditsPower': 'src/core/credits_power.cpp',
    'MultiplayerSiege': 'src/network/multiplayer_siege.cpp',
    'MultiplayerSiegeDefenderTeam': 'src/network/multiplayer_siege.cpp',
    'MultiplayerBattleTeam': 'src/network/multiplayer_battle.cpp',
    'MultiplayerObserverTeam': 'src/network/multiplayer_observer.cpp',
    'MultiplayerTeam': 'src/network/multiplayer_team.cpp',
    'MultiplayerTeamVector': 'src/network/multiplayer_team.cpp',
    'MultiplayerModeVector': 'src/network/multiplayer_mode.cpp',
    'MultiplayerModeVector2': 'src/network/multiplayer_mode.cpp',
    'MultiplayerGameMode': 'src/network/multiplayer_mode.cpp',
    'Multiplayer': 'src/network/multiplayer.cpp',
    'Network': 'src/network/network.cpp',
    'NetworkDialog': 'src/network/network_dialog.cpp',
    'ModemGuest': 'src/network/modem.cpp',
    'ModemHost': 'src/network/modem.cpp',
    'PlayerSlot': 'src/ui/player_slot.cpp',
    'SkirmishMapGen': 'src/core/skirmish_mapgen.cpp',
    'SkirmishSetup': 'src/core/skirmish_setup.cpp',
    'SkirmishDialogProc': 'src/core/skirmish_dialog.cpp',
    'SkirmishVector': 'src/core/skirmish.cpp',
    'SaveLoadDialog': 'src/core/save_load.cpp',
    'LoadSaveDialog': 'src/core/save_load.cpp',
    'Options': 'src/core/options.cpp',
    'VideoSettingsDialogP': 'src/core/options.cpp',
    'GameSetupDialogProc': 'src/core/game_setup.cpp',
    'PhoneEditorDialogPro': 'src/core/phone_editor.cpp',
    'WebBrowser': 'src/ui/web_browser.cpp',
    'WonlineStringDialogControl': 'src/ui/wonline_dialog.cpp',
    'WOLLoginDialogProc': 'src/ui/wol_login.cpp',
    'ChatDialog': 'src/ui/chat_dialog.cpp',
    'AITriggerTypeClass': 'src/team/ai_trigger_type.cpp',
    'VectorClass_ptr_CampaignClass': 'src/core/campaign_vector.cpp',
    'VectorClass_ptr_MultiplayerTeam': 'src/network/multiplayer_team_vector.cpp',
    'Game': 'src/core/game.cpp',
    'GameInit': 'src/core/init_game.cpp',
    'GameModeDlgProcMulti': 'src/core/init_game.cpp',
    'RulesClass': 'src/misc/rules_class.cpp',
    'ScenarioClass': 'src/system/scenario_class.cpp',
    'MouseClass': 'src/ui/mouse.cpp',
    'Control': 'src/ui/control.cpp',
    'Gadget': 'src/ui/gadget.cpp',
    'SimpleDialogControl': 'src/ui/simple_dialog.cpp',
}

processed = 0
skipped_small = 0
for name, info in decomp_data.items():
    if 'error' in info:
        continue
    
    pseudo = info.get('pseudocode', '')
    size = info.get('size', 0)
    addr_hex = info.get('addr_hex', '')
    
    # Determine output file
    output_file = None
    for prefix, filepath in file_mapping.items():
        if name.startswith(prefix):
            output_file = filepath
            break
    
    if not output_file:
        # General menu functions go to menu_globals.cpp
        output_file = 'src/core/menu_globals.cpp'
    
    if output_file not in output_files:
        output_files[output_file] = []
    
    cleaned = clean_pseudocode(name, pseudo, info)
    
    # Add function marker comment
    marker = f"// IDA: {name} @ {addr_hex} ({size}B)"
    
    output_files[output_file].append((marker, name, cleaned, addr_hex, size))
    processed += 1

print(f"Processed {processed} functions into {len(output_files)} files")
for fpath, funcs in sorted(output_files.items()):
    print(f"  {fpath}: {len(funcs)} functions")

# Now write the output files
# For each file, we need to create proper C++ with includes
for fpath, funcs in sorted(output_files.items()):
    # Only write files that don't exist (or append to menu_select.cpp)
    if os.path.exists(fpath):
        print(f"  SKIP {fpath} (exists) - would need merge logic")
        continue
    
    # Create directory if needed
    os.makedirs(os.path.dirname(fpath), exist_ok=True)
    
    with open(fpath, 'w', encoding='utf-8') as f:
        f.write('#include <cstdint>\n')
        f.write('#include <cstring>\n')
        f.write('#include <windows.h>\n')
        f.write('#include "core/reverse_marker.hpp"\n\n')
        f.write('namespace gamemd {\n\n')
        
        for marker, name, code, addr, size in funcs:
            f.write(f'{marker}\n')
            f.write(f'REVERSE({addr}, "{name}: IDA decompilation", "None")\n')
            f.write(code)
            f.write('\n\n')
        
        f.write('} // namespace gamemd\n')
    
    print(f"  WROTE {fpath} ({len(funcs)} functions)")

# Summary
print(f"\n=== Summary ===")
print(f"Total decompilations: {len(decomp_data)}")
print(f"Processed: {processed}")
print(f"New files created: {len(output_files)}")
