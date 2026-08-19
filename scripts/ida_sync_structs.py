# IDA Struct Sync Script — applies header renames to IDA database
# Creates missing struct types and updates field names in existing ones

import idaapi, idautils

def declare_or_update(name, members, vtable_addr=None):
    """Declare a C struct type in IDA's type library"""
    # Build C struct declaration
    lines = [f"struct {name} {{"]
    
    # vtable pointer first (if class has vtable)
    if vtable_addr:
        lines.append(f"    void* vtable;")
    
    for offset, member_type, member_name in members:
        lines.append(f"    {member_type} {member_name};  // +0x{offset:X}")
    
    lines.append("};")
    
    decl = "\n".join(lines)
    
    # Declare in IDA
    try:
        tif = idaapi.tinfo_t()
        if tif.get_named_type(None, name):
            print(f"  [EXISTS] {name} — will update fields")
            # For existing types, we'll rename fields individually
            return "exists"
        else:
            # Parse and declare
            ok = idaapi.parse_decl(tif, None, decl, idaapi.PT_TYP)
            if ok:
                tif.set_named_type(None, name, idaapi.NTF_REPLACE)
                print(f"  [CREATED] {name} ({len(members)} fields)")
                return "created"
            else:
                print(f"  [FAILED] {name} — parse error")
                return "failed"
    except Exception as e:
        print(f"  [ERROR] {name}: {e}")
        return "error"

# ============ DATA FROM OUR HEADERS ============

# PowerClass members (offset relative to PowerClass, not absolute)
power_members = [
    (0x00, "int32_t", "powerOutput"),
    (0x04, "int32_t", "powerDrain"),
    (0x08, "bool", "isBlackout"),
    (0x0C, "int32_t", "blackoutTimer"),
    (0x10, "int32_t", "powerOutputLast"),
    (0x14, "int32_t", "powerBarAnimationTimer"),
    (0x18, "int32_t", "powerBarTargetWidth"),
    (0x1C, "int32_t", "powerBarCurrentWidth"),
    (0x20, "int32_t", "powerBarAnimStep"),
    (0x24, "bool", "lowPowerBeepPlayed"),
]

tab_members = [
    (0x00, "int32_t", "tabData_targetValue"),
    (0x04, "int32_t", "tabData_lastValue"),
    (0x08, "bool", "tabData_needsRedraw"),
    (0x09, "bool", "tabData_valueIncreased"),
    (0x0A, "bool", "tabData_valueChanged"),
    (0x0C, "int32_t", "tabData_valueDelta"),
    (0x10, "int32_t", "flashTimer"),
    (0x14, "int32_t", "insufficientFundsBlinkTimer"),
    (0x18, "uint8_t", "tabIndex"),
    (0x19, "bool", "missionTimerPinged"),
    (0x1A, "uint8_t", "columnState"),
]

tooltip_members = [
    (0x00, "bool", "isVisible"),
    (0x04, "int32_t", "position_x"),
    (0x08, "int32_t", "position_y"),
    (0x0C, "wchar_t*", "toolTipText"),
    (0x10, "int32_t", "duration"),
    (0x14, "int32_t", "displayTimer"),
    (0x18, "wchar_t[256]", "textBuffer"),
]

message_list_members = [
    (0x00, "int32_t", "messageCount"),
    (0x04, "int32_t", "maxMessageCount"),
    (0x08, "int32_t", "scrollOffset"),
    (0x0C, "int32_t", "textColorIndex"),
    (0x10, "int32_t", "displayDuration"),
    (0x14, "int32_t", "messageTimer"),
    (0x18, "int32_t", "messageRect_left"),
    (0x1C, "int32_t", "messageRect_top"),
    (0x20, "int32_t", "messageRect_right"),
    (0x24, "int32_t", "messageRect_bottom"),
    (0x28, "bool", "isScrolling"),
]

winsock_members = [
    (0x00, "uint32_t", "socket"),
    (0x04, "bool", "initialized"),
    (0x08, "uint16_t", "boundPort"),
    (0x0C, "uint32_t", "localAddress"),
    (0x10, "bool", "nonBlocking"),
    (0x14, "uint32_t", "multicastGroup"),
]

ipx_interface_members = [
    (0x00, "uint32_t", "socket"),
    (0x04, "bool", "initialized"),
    (0x08, "uint16_t", "boundSocket"),
    (0x0C, "uint32_t", "localNetwork"),
    (0x10, "uint8_t[6]", "localNode"),
    (0x18, "uint32_t", "destNetwork"),
    (0x1C, "uint8_t[6]", "destNode"),
    (0x24, "uint16_t", "destSocket"),
]

udp_interface_members = [
    (0x00, "uint32_t", "socket"),
    (0x04, "bool", "initialized"),
    (0x08, "uint16_t", "boundPort"),
    (0x0C, "bool", "broadcastEnabled"),
]

wwmouse_members = [
    (0x00, "void*", "image"),
    (0x04, "int32_t", "imageFrameIndex"),
    (0x08, "uint32_t", "refCount"),
    (0x0C, "uint8_t", "surfaceState"),
    (0x0D, "uint8_t", "cursorVisible"),
    (0x0E, "uint8_t", "cursorLocked"),
    (0x0F, "uint8_t", "redrawFlag"),
    (0x10, "uint32_t", "frameCounter"),
    (0x14, "uint32_t", "lastFrameTime"),
    (0x18, "int32_t", "position_x"),
    (0x1C, "int32_t", "position_y"),
    (0x20, "void*", "surface"),
    (0x24, "uint32_t", "hWnd"),
    (0x28, "int32_t", "cursorRect_left"),
    (0x2C, "int32_t", "cursorRect_top"),
    (0x30, "int32_t", "cursorRect_right"),
    (0x34, "int32_t", "cursorRect_bottom"),
    (0x38, "int32_t", "hotspotOffset_x"),
    (0x3C, "int32_t", "hotspotOffset_y"),
    (0x44, "uint32_t", "savedCursorX"),
    (0x48, "int32_t", "dirtyRect_left"),
    (0x4C, "int32_t", "dirtyRect_top"),
    (0x50, "int32_t", "dirtyRect_right"),
    (0x54, "int32_t", "dirtyRect_bottom"),
    (0x58, "uint32_t", "savedCursorY"),
]

sidebar_members = [
    (0x5394-0x5394, "int32_t", "tabProductionFlashTimer"),
    (0x5398-0x5394, "int32_t", "tabProductionFlashState"),
    (0x539C-0x5394, "int32_t", "activeTabIndex"),
    (0x53A0-0x5394, "int32_t", "scrollOffset"),
    (0x53A4-0x5394, "bool", "hideObjectNameInTooltip"),
    (0x53A5-0x5394, "bool", "isScrolling"),
    (0x53A6-0x5394, "bool", "sidebarNeedsRedraw"),
    (0x53A7-0x5394, "bool", "sidebarBackgroundNeedsRedraw"),
    (0x53A8-0x5394, "bool", "needsRedrawAll"),
]

ipx_conn_members = [
    (0x00, "uint32_t", "socket"),
    (0x04, "uint32_t[3]", "remoteAddress"),
    (0x10, "uint16_t", "remoteSocket"),
    (0x14, "bool", "packetSequence"),
    (0x18, "bool", "isBroadcast"),
]

ipx_manager_members = [
    (0x00, "uint32_t", "socket"),
    (0x04, "bool", "initialized"),
    (0x05, "bool", "active"),
    (0x08, "int32_t", "maxPlayers"),
    (0x0C, "int32_t", "frameSendRate"),
    (0x10, "int32_t", "frameReceiveRate"),
    (0x14, "int32_t", "sendInterval"),
    (0x18, "int32_t", "maxPlayersCopy"),
    (0x1C, "int32_t", "receiveInterval"),
    (0x20, "uint16_t", "listenPort"),
    (0x22, "uint16_t", "gamePort"),
    (0x24, "int32_t", "sessionHandle"),
    (0x28, "void*[7]", "connectionPtrs"),
    (0x44, "int32_t", "connectionCount"),
    (0x48, "int32_t", "activeSessionCount"),
    (0x4C, "void*", "firstConnection"),
    (0x50, "void*", "pendingConnection"),
    (0x54, "int32_t", "pendingAckCount"),
    (0x58, "int32_t", "maxReconnectAttempts"),
    (0x5C, "int32_t", "hostPlayerIndex"),
    (0x60, "int32_t", "connectionTimeout"),
]

# Main execution
print("=== IDA Struct Sync ===")
print(f"Processing IDA database...\n")

results = {"created": 0, "exists": 0, "failed": 0}

# Declare all missing types
all_structs = {
    "PowerClass": (power_members, 0x7EFF60),
    "TabClass": (tab_members, None),
    "ToolTipManager": (tooltip_members, 0x7F57B0),
    "MessageListClass": (message_list_members, None),
    "WinsockInterfaceClass": (winsock_members, None),
    "IPXInterfaceClass": (ipx_interface_members, None),
    "UDPInterfaceClass": (udp_interface_members, None),
    "WWMouseClass": (wwmouse_members, 0x7F7B30),
    "SidebarClass_New": (sidebar_members, None),
    "IPXConnClass": (ipx_conn_members, None),
    "IPXManagerClass": (ipx_manager_members, None),
}

for name, (members, vtable) in all_structs.items():
    result = declare_or_update(name, members, vtable)
    results[result] += 1

print(f"\nResults: {results['created']} created, {results['exists']} existing, {results['failed']} failed")
print("Done.")
