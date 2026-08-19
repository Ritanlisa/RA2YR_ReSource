#!/usr/bin/env python3
"""
Final merge: combine v5 (instance classes from constructors) + build_member_lookup.py (type classes)
"""
import json, sys
from pathlib import Path
from collections import OrderedDict

ROOT = Path(__file__).parent.parent

# First, run build_member_lookup.py to get type classes
# Then merge with v5 instance classes

def main():
    # Load type classes from build_member_lookup.py output
    # Re-run the fixed build_member_lookup.py
    import subprocess
    result = subprocess.run([sys.executable, str(ROOT / "tools" / "build_member_lookup.py")],
                           capture_output=True, text=True)
    
    with open(ROOT / "tools" / "member_lookup.json", 'r', encoding='utf-8') as f:
        type_data = json.load(f)
    
    # Now run v5 to get instance classes
    # Use the v5 module directly
    sys.path.insert(0, str(ROOT / "tools"))
    
    # Build v5 instance lookup manually
    ALL_MEMBERS = {
        "AbstractClass": {
            0x00: {"name":"vfptr_0", "type":"void*", "size":4},
            0x04: {"name":"vfptr_1", "type":"void*", "size":4},
            0x08: {"name":"vfptr_2", "type":"void*", "size":4},
            0x0C: {"name":"vfptr_3", "type":"void*", "size":4},
            0x10: {"name":"uniqueId", "type":"uint32_t", "size":4},
            0x14: {"name":"abstractFlags", "type":"uint32_t", "size":4},
            0x18: {"name":"nextArrayIndex", "type":"uint32_t", "size":4},
            0x1C: {"name":"referenceCount", "type":"int32_t", "size":4},
            0x20: {"name":"needsSave", "type":"bool", "size":1},
        },
        "ObjectClass": {
            0x24: {"name":"objectTypeFlags", "type":"uint32_t", "size":4},
            0x28: {"name":"owningHouseIndex", "type":"uint32_t", "size":4},
            0x2C: {"name":"fallRate", "type":"int32_t", "size":4},
            0x30: {"name":"nextObject", "type":"ObjectClass*", "size":4},
            0x34: {"name":"attachedTag", "type":"TagClass*", "size":4},
            0x38: {"name":"attachedBomb", "type":"BombClass*", "size":4},
            0x3C: {"name":"ambientSoundController", "type":"AudioController", "size":20},
            0x50: {"name":"customSound_controller", "type":"AudioController", "size":20},
            0x64: {"name":"customSound", "type":"int32_t", "size":4},
            0x68: {"name":"bombVisible", "type":"bool", "size":1},
            0x69: {"name":"__pad_69", "type":"uint8_t[3]", "size":3},
            0x6C: {"name":"health", "type":"int32_t", "size":4},
            0x70: {"name":"estimatedHealth", "type":"int32_t", "size":4},
            0x74: {"name":"isOnMap", "type":"bool", "size":1},
            0x75: {"name":"__pad_75", "type":"uint8_t[3]", "size":3},
            0x78: {"name":"spawnStatus", "type":"uint32_t", "size":4},
            0x7C: {"name":"visibilityFlags", "type":"uint32_t", "size":4},
            0x80: {"name":"needsRedraw", "type":"bool", "size":1},
            0x81: {"name":"inLimbo", "type":"bool", "size":1},
            0x82: {"name":"inOpenToppedTransport", "type":"bool", "size":1},
            0x83: {"name":"isSelected", "type":"bool", "size":1},
            0x84: {"name":"hasParachute", "type":"bool", "size":1},
            0x85: {"name":"__pad_85", "type":"uint8_t[3]", "size":3},
            0x88: {"name":"parachute", "type":"AnimClass*", "size":4},
            0x8C: {"name":"onBridge", "type":"bool", "size":1},
            0x8D: {"name":"isFallingDown", "type":"bool", "size":1},
            0x8E: {"name":"wasFallingDown", "type":"bool", "size":1},
            0x8F: {"name":"isBomb", "type":"bool", "size":1},
            0x90: {"name":"isAliveFlag", "type":"bool", "size":1},
            0x91: {"name":"__pad_91", "type":"uint8_t[3]", "size":3},
            0x94: {"name":"lastLayer", "type":"uint32_t", "size":4},
            0x98: {"name":"isInLogic", "type":"bool", "size":1},
            0x99: {"name":"isVisible", "type":"bool", "size":1},
            0x9A: {"name":"__pad_9A", "type":"uint8_t[2]", "size":2},
            0x9C: {"name":"location", "type":"CoordStruct", "size":12},
            0xA8: {"name":"lineTrailer", "type":"LineTrail*", "size":4},
        },
        "MissionClass": {
            0xAC: {"name":"currentMission", "type":"Mission", "size":4},
            0xB0: {"name":"suspendedMission", "type":"Mission", "size":4},
            0xB4: {"name":"queuedMission", "type":"Mission", "size":4},
            0xB8: {"name":"missionQueued", "type":"bool", "size":1},
            0xB9: {"name":"__pad_B9", "type":"uint8_t[3]", "size":3},
            0xBC: {"name":"missionStatus", "type":"int32_t", "size":4},
            0xC0: {"name":"missionStartTime", "type":"int32_t", "size":4},
            0xC4: {"name":"missionData", "type":"uint32_t", "size":4},
            0xC8: {"name":"missionTimer", "type":"TimerStruct", "size":12},
        },
        "RadioClass": {
            0xD4: {"name":"lastCommands", "type":"int32_t[3]", "size":12},
            0xE0: {"name":"radioLinks", "type":"DynamicVectorClass<TechnoClass*>", "size":24},
            0xF8: {"name":"radioContact", "type":"TechnoClass*", "size":4},
            0xFC: {"name":"radioOperator", "type":"TechnoClass*", "size":4},
            0x100: {"name":"radioCommand", "type":"int32_t", "size":4},
            0x104: {"name":"radioTimer", "type":"TimerStruct", "size":12},
            0x110: {"name":"radioQueue", "type":"int32_t[10]", "size":40},
            0x138: {"name":"radioQueueCount", "type":"int32_t", "size":4},
        },
        "TechnoClass": {
            0x1A8: {"name":"flashing", "type":"FlashData", "size":8},
            0x1B0: {"name":"animation", "type":"ProgressTimer", "size":8},
            0x1B8: {"name":"passengers", "type":"PassengersClass", "size":8},
            0x1C0: {"name":"transporter", "type":"TechnoClass*", "size":4},
            0x1C4: {"name":"turretChargeTimer", "type":"int32_t", "size":4},
            0x1C8: {"name":"currentTurretNumber", "type":"int32_t", "size":4},
            0x1CC: {"name":"secondaryTurretIndex", "type":"int32_t", "size":4},
            0x1D0: {"name":"behindAnim", "type":"AnimClass*", "size":4},
            0x1D4: {"name":"deployAnim", "type":"AnimClass*", "size":4},
            0x1D8: {"name":"inAirFlag", "type":"bool", "size":1},
            0x224: {"name":"spawnManager", "type":"SpawnManagerClass*", "size":4},
            0x22C: {"name":"spawnOwner", "type":"TechnoClass*", "size":4},
            0x234: {"name":"slaveManager", "type":"SlaveManagerClass*", "size":4},
            0x23C: {"name":"originalOwnerHouse", "type":"HouseClass*", "size":4},
            0x244: {"name":"pitchAngle", "type":"float", "size":4},
            0x248: {"name":"diskLaserTimer", "type":"TimerStruct", "size":12},
            0x254: {"name":"diskLaserChargeState", "type":"uint32_t", "size":4},
            0x258: {"name":"ammo", "type":"int32_t", "size":4},
            0x25C: {"name":"unitValue", "type":"int32_t", "size":4},
            0x260: {"name":"fireParticles", "type":"ParticleSystemClass*", "size":4},
            0x264: {"name":"sparkParticles", "type":"ParticleSystemClass*", "size":4},
            0x268: {"name":"ambientParticles", "type":"ParticleSystemClass*", "size":4},
            0x26C: {"name":"damageParticles", "type":"ParticleSystemClass*", "size":4},
            0x270: {"name":"railgunParticles", "type":"ParticleSystemClass*", "size":4},
            0x274: {"name":"auxParticles1", "type":"ParticleSystemClass*", "size":4},
            0x278: {"name":"auxParticles2", "type":"ParticleSystemClass*", "size":4},
            0x27C: {"name":"firingParticles", "type":"ParticleSystemClass*", "size":4},
            0x280: {"name":"waveEffect", "type":"WaveClass*", "size":4},
            0x284: {"name":"tiltSidewaysAngle", "type":"float", "size":4},
            0x288: {"name":"tiltForwardsAngle", "type":"float", "size":4},
            0x28C: {"name":"tiltSidewaysRate", "type":"float", "size":4},
            0x290: {"name":"tiltForwardsRate", "type":"float", "size":4},
            0x294: {"name":"hijackerInfantryType", "type":"int32_t", "size":4},
            0x298: {"name":"storedTiberium", "type":"OwnedTiberiumStruct", "size":16},
            0x2A8: {"name":"tiberiumCollectionState", "type":"uint32_t", "size":4},
            0x2AC: {"name":"unloadTimer", "type":"TransitionTimer", "size":12},
            0x2B8: {"name":"barrelFacing", "type":"FacingStruct", "size":4},
            0x2BC: {"name":"facing", "type":"FacingStruct", "size":4},
            0x2C0: {"name":"turretFacing", "type":"FacingStruct", "size":4},
            0x2C4: {"name":"currentBurstIndex", "type":"int32_t", "size":4},
            0x2C8: {"name":"target_laser_timer", "type":"TimerStruct", "size":12},
            0x2D4: {"name":"targetLaserOpacity", "type":"int16_t", "size":2},
            0x2D6: {"name":"targetLaserFlags", "type":"uint16_t", "size":2},
            0x2D8: {"name":"isCountedAsOwned", "type":"bool", "size":1},
            0x2D9: {"name":"isSinking", "type":"bool", "size":1},
            0x2DA: {"name":"wasAlreadySinking", "type":"bool", "size":1},
            0x2DB: {"name":"isReceivingDamageEffect", "type":"bool", "size":1},
            0x2DC: {"name":"isPlayingDamageSound", "type":"bool", "size":1},
            0x2DD: {"name":"hasBeenAttacked", "type":"bool", "size":1},
            0x2DE: {"name":"isCloakableFlag", "type":"bool", "size":1},
            0x2DF: {"name":"isPrimaryFactory", "type":"bool", "size":1},
            0x2E0: {"name":"isSpawned", "type":"bool", "size":1},  # constructor says 0x228, header layout differs
            0x2E1: {"name":"isInPlayfield", "type":"bool", "size":1},
            0x2E4: {"name":"turretRecoil", "type":"RecoilData", "size":24},
            0x2FC: {"name":"barrelRecoil", "type":"RecoilData", "size":24},
            0x314: {"name":"isTurretLocked", "type":"bool", "size":1},
            0x315: {"name":"isBarrelLocked", "type":"bool", "size":1},
            0x316: {"name":"isHumanControlled", "type":"bool", "size":1},
            0x317: {"name":"isDiscoveredByPlayer", "type":"bool", "size":1},
            0x318: {"name":"isDiscoveredByComputer", "type":"bool", "size":1},
            0x319: {"name":"isSelectedByPlayer", "type":"bool", "size":1},
            0x31A: {"name":"isUnderCursor", "type":"bool", "size":1},
            0x31B: {"name":"isCommandLineTarget", "type":"bool", "size":1},
            0x31C: {"name":"sightRangeBonus", "type":"char", "size":1},
            0x31D: {"name":"isRecruitableByAlly", "type":"bool", "size":1},
            0x31E: {"name":"isRecruitableByEnemy", "type":"bool", "size":1},
            0x31F: {"name":"isRadarTracked", "type":"bool", "size":1},
            0x320: {"name":"isOnCarryall", "type":"bool", "size":1},
            0x321: {"name":"isCrashing", "type":"bool", "size":1},
            0x322: {"name":"wasAlreadyCrashing", "type":"bool", "size":1},
            0x323: {"name":"isBeingManipulated", "type":"bool", "size":1},
            0x324: {"name":"manipulatedByUnit", "type":"TechnoClass*", "size":4},
            0x328: {"name":"chronoWarpedByHouse", "type":"HouseClass*", "size":4},
            0x32C: {"name":"isChronoImmuneFlag", "type":"bool", "size":1},
            0x32D: {"name":"isEMPImmune", "type":"bool", "size":1},
            0x32E: {"name":"isRadiationImmune", "type":"bool", "size":1},
            0x330: {"name":"previousTeam", "type":"TeamClass*", "size":4},
            0x334: {"name":"isCountedAsOwned_special", "type":"bool", "size":1},
            0x335: {"name":"isAbsorbed", "type":"bool", "size":1},
            0x336: {"name":"isGrindingInProgress", "type":"bool", "size":1},
            0x338: {"name":"grindingAnimHandle", "type":"uint32_t", "size":4},
            0x33C: {"name":"currentTargetThreatValues", "type":"DynamicVectorClass<int32_t>", "size":24},
            0x354: {"name":"currentTargets", "type":"DynamicVectorClass<AbstractClass*>", "size":24},
            0x36C: {"name":"attackedTargets", "type":"DynamicVectorClass<AbstractClass*>", "size":24},
            0x384: {"name":"audioController3", "type":"AudioController", "size":28},
            0x3A0: {"name":"audioLoopIndex3", "type":"uint32_t", "size":4},
            0x3A4: {"name":"audioVolume3", "type":"uint32_t", "size":4},
            0x3A8: {"name":"audioController4", "type":"AudioController", "size":28},
            0x3C4: {"name":"isAudio4Active", "type":"bool", "size":1},
            0x3C8: {"name":"audioHandle4", "type":"uint32_t", "size":4},
            0x3CC: {"name":"audioController5", "type":"AudioController", "size":28},
            0x3E8: {"name":"isAudio5Active", "type":"bool", "size":1},
            0x3EC: {"name":"audioHandle5", "type":"uint32_t", "size":4},
            0x3F0: {"name":"audioController6", "type":"AudioController", "size":28},
            0x40C: {"name":"queuedVoiceIndex", "type":"uint32_t", "size":4},
            0x410: {"name":"voiceFlags", "type":"uint32_t", "size":4},
            0x414: {"name":"isVoiceOverride", "type":"bool", "size":1},
            0x418: {"name":"voiceHandle", "type":"uint32_t", "size":4},
            0x41C: {"name":"voiceVolumeModifier", "type":"uint32_t", "size":4},
            0x420: {"name":"empLockRemaining", "type":"uint32_t", "size":4},
            0x424: {"name":"threatPosed", "type":"uint32_t", "size":4},
            0x428: {"name":"shouldLoseTarget", "type":"uint32_t", "size":4},
            0x42C: {"name":"firingRadBeam", "type":"RadBeam*", "size":4},
            0x430: {"name":"planningToken", "type":"PlanningTokenClass*", "size":4},
            0x434: {"name":"disguiseAsType", "type":"ObjectTypeClass*", "size":4},
            0x438: {"name":"isDisguisedFlag_as_house", "type":"HouseClass*", "size":4},
        },
        "FootClass": {
            0x520: {"name":"FootClass_field_520", "type":"int32_t", "size":4},
            0x524: {"name":"FootClass_field_524", "type":"int16_t", "size":2},
            0x526: {"name":"FootClass_field_526", "type":"int16_t", "size":2},
            0x528: {"name":"FootClass_field_528", "type":"int16_t", "size":2},
            0x52A: {"name":"FootClass_field_52A", "type":"int16_t", "size":2},
            0x52C: {"name":"FootClass_field_52C", "type":"int16_t", "size":2},
            0x52E: {"name":"FootClass_field_52E", "type":"int16_t", "size":2},
            0x530: {"name":"FootClass_field_530", "type":"int32_t", "size":4},
            0x534: {"name":"FootClass_field_534", "type":"int32_t", "size":4},
            0x538: {"name":"FootClass_field_538", "type":"int32_t", "size":4},
            0x53C: {"name":"FootClass_field_53C", "type":"bool", "size":1},
            0x540: {"name":"FootClass_field_540", "type":"int32_t", "size":4},
            0x558: {"name":"FootClass_field_558", "type":"int16_t", "size":2},
            0x55A: {"name":"FootClass_field_55A", "type":"int16_t", "size":2},
            0x55C: {"name":"FootClass_field_55C", "type":"int16_t", "size":2},
            0x55E: {"name":"FootClass_field_55E", "type":"int16_t", "size":2},
            0x560: {"name":"FootClass_field_560", "type":"int16_t", "size":2},
            0x562: {"name":"FootClass_field_562", "type":"int16_t", "size":2},
            0x564: {"name":"FootClass_field_564", "type":"int16_t", "size":2},
            0x566: {"name":"FootClass_field_566", "type":"int16_t", "size":2},
            0x568: {"name":"FootClass_field_568", "type":"int32_t", "size":4},
            0x56C: {"name":"FootClass_field_56C", "type":"int32_t", "size":4},
            0x570: {"name":"FootClass_field_570", "type":"int32_t", "size":4},
            0x578: {"name":"FootClass_field_578", "type":"int32_t", "size":4},
            0x57C: {"name":"FootClass_field_57C", "type":"int32_t", "size":4},
            0x580: {"name":"FootClass_field_580", "type":"int32_t", "size":4},
            0x584: {"name":"FootClass_field_584", "type":"float", "size":4},
            0x588: {"name":"FootClass_DVC_588", "type":"DynamicVectorClass<AbstractClass*>", "size":24},
            0x5A0: {"name":"FootClass_field_5A0", "type":"int32_t", "size":4},
            0x5A4: {"name":"FootClass_field_5A4", "type":"int32_t", "size":4},
            0x5A8: {"name":"FootClass_field_5A8", "type":"int32_t", "size":4},
            0x5AC: {"name":"FootClass_DVC_5AC", "type":"DynamicVectorClass<AbstractClass*>", "size":24},
            0x5C4: {"name":"FootClass_field_5C4", "type":"int32_t", "size":4},
            0x5C8: {"name":"FootClass_field_5C8", "type":"int32_t", "size":4},
            0x5CC: {"name":"FootClass_field_5CC", "type":"int32_t", "size":4},
            0x5D0: {"name":"FootClass_field_5D0", "type":"bool", "size":1},
            0x5D4: {"name":"FootClass_field_5D4", "type":"int32_t", "size":4},
            0x5D8: {"name":"FootClass_field_5D8", "type":"int32_t", "size":4},
            0x5DC: {"name":"FootClass_field_5DC", "type":"int32_t", "size":4},
            0x640: {"name":"FootClass_field_640", "type":"int32_t", "size":4},
            0x644: {"name":"FootClass_field_644", "type":"int32_t", "size":4},
            0x648: {"name":"FootClass_field_648", "type":"int32_t", "size":4},
            0x64C: {"name":"FootClass_field_64C", "type":"int32_t", "size":4},
            0x650: {"name":"FootClass_field_650", "type":"int32_t", "size":4},
            0x654: {"name":"FootClass_field_654", "type":"int32_t", "size":4},
            0x658: {"name":"FootClass_field_658", "type":"int32_t", "size":4},
            0x65C: {"name":"FootClass_field_65C", "type":"int32_t", "size":4},
            0x660: {"name":"FootClass_field_660", "type":"int32_t", "size":4},
            0x664: {"name":"FootClass_field_664", "type":"int32_t", "size":4},
            0x668: {"name":"FootClass_field_668", "type":"int32_t", "size":4},
            0x66C: {"name":"FootClass_field_66C", "type":"int32_t", "size":4},
            0x670: {"name":"FootClass_field_670", "type":"int32_t", "size":4},
            0x674: {"name":"Locomotor", "type":"ILocomotion*", "size":4},
            0x678: {"name":"Locomotor_ptr", "type":"LocomotionClass*", "size":4},
            0x67C: {"name":"IsDeploying", "type":"bool", "size":1},
            0x680: {"name":"FootClass_field_680", "type":"int32_t", "size":4},
            0x684: {"name":"FootClass_field_684", "type":"int32_t", "size":4},
            0x688: {"name":"FootClass_bools_688", "type":"bool[14]", "size":14},
            0x694: {"name":"FootClass_field_694", "type":"int32_t", "size":4},
            0x698: {"name":"FootClass_field_698", "type":"int32_t", "size":4},
            0x69C: {"name":"FootClass_field_69C", "type":"int32_t", "size":4},
            0x6A0: {"name":"FootClass_field_6A0", "type":"int32_t", "size":4},
            0x6A4: {"name":"FootClass_field_6A4", "type":"int32_t", "size":4},
            0x6A8: {"name":"FootClass_bools_6A8", "type":"bool[8]", "size":8},
            0x6B0: {"name":"FootClass_field_6B0", "type":"bool", "size":1},
            0x6B1: {"name":"FootClass_field_6B1", "type":"bool", "size":1},
            0x6B2: {"name":"FootClass_field_6B2", "type":"bool", "size":1},
            0x6B3: {"name":"FootClass_field_6B3", "type":"bool", "size":1},
            0x6B4: {"name":"FootClass_field_6B4", "type":"bool", "size":1},
            0x6B5: {"name":"FootClass_field_6B5", "type":"bool", "size":1},
            0x6B6: {"name":"FootClass_field_6B6", "type":"bool", "size":1},
            0x6B7: {"name":"FootClass_field_6B7", "type":"bool", "size":1},
            0x6B8: {"name":"FootClass_field_6B8", "type":"bool", "size":1},
            0x6B9: {"name":"FootClass_field_6B9", "type":"bool", "size":1},
            0x6BA: {"name":"FootClass_field_6BA", "type":"bool", "size":1},
            0x6BB: {"name":"FootClass_field_6BB", "type":"bool", "size":1},
            0x6BC: {"name":"FootClass_field_6BC", "type":"bool", "size":1},
            0x6BD: {"name":"FootClass_field_6BD", "type":"bool", "size":1},
            0x6BE: {"name":"FootClass_field_6BE", "type":"bool", "size":1},
            0x6BF: {"name":"FootClass_field_6BF", "type":"bool", "size":1},
        },
        "UnitClass": {
            0x6C0: {"name":"UnitClass_field_int_6C0", "type":"int32_t", "size":4},
            0x6C4: {"name":"Type", "type":"UnitTypeClass*", "size":4},
            0x6C8: {"name":"FollowerCar", "type":"UnitClass*", "size":4},
            0x6CC: {"name":"FlagHouseIndex", "type":"int32_t", "size":4},
            0x6D0: {"name":"HasFollowerCar", "type":"bool", "size":1},
            0x6D1: {"name":"Unloading", "type":"bool", "size":1},
            0x6D2: {"name":"UnitClass_field_bool_6D2", "type":"bool", "size":1},
            0x6D3: {"name":"TerrainPalette", "type":"bool", "size":1},
            0x6D4: {"name":"UnitClass_field_int_6D4", "type":"int32_t", "size":4},
            0x6D8: {"name":"DeathFrameCounter", "type":"int32_t", "size":4},
            0x6DC: {"name":"ElectricBolt", "type":"EBolt*", "size":4},
            0x6E0: {"name":"Deployed", "type":"bool", "size":1},
            0x6E1: {"name":"Deploying", "type":"bool", "size":1},
            0x6E2: {"name":"Undeploying", "type":"bool", "size":1},
            0x6E4: {"name":"NonPassengerCount", "type":"int32_t", "size":4},
            0x6E8: {"name":"ToolTipText", "type":"wchar_t[0x100]", "size":512},
        },
    }
    
    PARENTS = {
        "AbstractClass": [],
        "ObjectClass": ["AbstractClass"],
        "MissionClass": ["ObjectClass"],
        "RadioClass": ["MissionClass"],
        "TechnoClass": ["RadioClass"],
        "FootClass": ["TechnoClass"],
        "UnitClass": ["FootClass"],
        "InfantryClass": ["FootClass"],
        "AircraftClass": ["FootClass"],
        "BuildingClass": ["TechnoClass"],
    }
    
    def build_class(cls_name):
        members = OrderedDict()
        def collect(cn, visited):
            if cn in visited:
                return
            visited.add(cn)
            if cn in ALL_MEMBERS:
                for off, info in ALL_MEMBERS[cn].items():
                    off_str = str(off)
                    if off_str not in members:
                        entry = {"name": info["name"], "type": info["type"]}
                        if cn != cls_name:
                            entry["inherited_from"] = cn
                        members[off_str] = entry
            for parent in PARENTS.get(cn, []):
                collect(parent, visited)
        collect(cls_name, set())
        return members
    
    # Build instance classes
    output = OrderedDict()
    for cls_name in ["AbstractClass", "ObjectClass", "MissionClass", "RadioClass",
                      "TechnoClass", "FootClass", "UnitClass", "InfantryClass",
                      "AircraftClass", "BuildingClass"]:
        output[cls_name] = build_class(cls_name)
    
    # Copy type classes from build_member_lookup.py output
    for cls_name in ["AbstractTypeClass", "ObjectTypeClass", "TechnoTypeClass",
                      "UnitTypeClass", "BuildingTypeClass", "InfantryTypeClass",
                      "AircraftTypeClass", "WarheadTypeClass", "AnimTypeClass",
                      "ParticleTypeClass", "ParticleSystemTypeClass", "SuperWeaponTypeClass",
                      "BulletTypeClass", "VoxelAnimTypeClass", "CampaignClass",
                      "HouseTypeClass", "SideClass", "OverlayTypeClass", "SmudgeTypeClass",
                      "TerrainTypeClass", "TiberiumClass", "WaveClass",
                      "WeaponTypeClass"]:
        if cls_name in type_data:
            output[cls_name] = type_data[cls_name]
    
    outpath = ROOT / "tools" / "member_lookup.json"
    with open(outpath, 'w', encoding='utf-8') as f:
        json.dump(output, f, indent=2, ensure_ascii=False)
    
    for cn in output:
        print(f"  {cn}: {len(output[cn])} members", file=sys.stderr)
    
    return 0

if __name__ == "__main__":
    sys.exit(main())
