"""Generate header additions and implementation stubs for FootClass and TechnoClass."""
import json

with open('D:/RA2YR_ReSource/injectFunctionTest/functions.json', 'r', encoding='utf-8') as f:
    data = json.load(f)

funcs = data['functions']
target_classes = {'FootClass', 'TechnoClass'}

# Already-existing methods in headers (don't regenerate)
EXISTING_FOOT = {
    'MovementAI', 'Mission_Move', 'Mission_Attack', 'Mission_Guard', 'Mission_Hunt',
    'MoveTo', 'StopMoving', 'Destroyed', 'ChronoWarpTo', 'Panic', 'UnPanic',
    'GetCurrentSpeed', 'SetSpeedPercentage', 'onBuildingPlacement', 'ReceiveGunner',
    'RemoveGunner', 'IsLeavingMap', 'canMove', 'onProductionComplete', 'onCellEntry',
    'processSuperWeapon', 'getMoveCoords', 'onMoveStart', 'canStop', 'canRecruitTeamMember',
    'Draw_A_SHP', 'Draw_A_VXL', 'onDrawComplete', 'PlayIdleAnim', 'getMovementMode',
    'getPathDistance', 'getPathCost', 'isAreaClear', 'onAreaEntry', 'getWaypointData',
    'onWaypointReached', 'onPathComplete', 'onMovementDone', 'canEnterCell',
    'FootClass_ImbueLocomotor', 'Construct', 'Destruct', 'Process'
}

EXISTING_TECHNO = {
    'GetFireErrorWithoutRange', 'GetFireError', 'Fire', 'IsCloseEnoughToAttack',
    'SelectAutoTarget', 'SetTarget', 'Guard', 'Cloak', 'Uncloak', 'SelectWeapon',
    'DecreaseAmmo', 'Reload', 'UpdateCloak', 'CreateGap', 'DestroyGap', 'UpdateSight',
    'RadarTrackingStart', 'RadarTrackingStop', 'RadarTrackingFlash', 'RadarTrackingUpdate',
    'SmokeupdateLogic', 'AddPassenger', 'CanDeploySlashUnload', 'CreateUnit', 'SetDestination',
    'EnterGrinder', 'EnterBioReactor', 'EnterTankBunker', 'EnterBattleBunker', 'GarrisonStructure',
    'isUnitfactory', 'isCloakable', 'canScatter', 'belongsToATeam', 'shouldSelfHealOneStep',
    'isVoxel', 'canSelfRepair', 'shouldBeCloaked', 'shouldNotBeCloaked', 'getFacing',
    'isArmed', 'onSpawnComplete', 'getStoragePercentage', 'getPipFillLevel', 'getRefund',
    'getThreatValue', 'canBeAttacked', 'getSpecialValue', 'canCrush', 'getCrewCount',
    'getAntiAirValue', 'getAntiArmorValue', 'getAntiInfantryValue', 'gotHijacked',
    'selectNavalTargeting', 'getZAdjustment', 'GetZGradient', 'GetSomeCellStruct',
    'SetSomeCellStruct', 'getOccupiedCell', 'getTurretCoords', 'getWeaponRangeValue',
    'GetRealFacing', 'GetCrew', 'isInAirAlt', 'GetROF', 'GetGuardRange', 'canEnterTransport',
    'IsRadarVisible', 'IsSensorVisibleToPlayer', 'IsSensorVisibleToHouse', 'IsEngineer',
    'ProceedToNextPlanningWaypoint', 'ScanForTiberium', 'isPowerOnline', 'QueueVoice',
    'VoiceEnter', 'VoiceHarvest', 'VoiceSelect', 'VoiceCapture', 'VoiceMove', 'VoiceDeploy',
    'VoiceAttack', 'ClickedEvent', 'ClickedMission', 'isUnderEmp', 'isParalyzed', 'canCheer',
    'Cheer', 'GetDefaultSpeed', 'CanDisguiseAs', 'TargetAndEstimateDamage', 'getDamageReduction',
    'TriggersCellInset', 'IsCloseEnough', 'IsCloseEnoughToAttackCoords', 'getSightRange',
    'SetOwningHouse', 'onHouseChange', 'Crash', 'isAreaFire', 'isNotSprayAttack', 'canAct',
    'isNotSprayAttack2', 'GetDeployWeapon', 'GetTurretWeapon', 'GetWeapon', 'hasTurret',
    'canOccupyFire', 'getOccupyRangeBonus', 'getOccupantCount', 'OnFinishRepair',
    'onBridgeRepair', 'Sensed', 'onReloadComplete', 'GetTargetCoords', 'IsNotWarpingIn',
    'canChronoShift', 'DrawActionLines', 'GetDisguiseFlags', 'isClearlyVisibleTo',
    'drawSelectionBox', 'onSelect', 'DrawHealthBar', 'DrawPipScalePips', 'DrawVeterancyPips',
    'DrawExtraInfo', 'getSight', 'UpdateRefinerySmokeSystems', 'DisguiseAs', 'ClearDisguise',
    'IsItTimeForIdleActionYet', 'UpdateIdleAction', 'onDamage', 'canRecruit', 'onPlacement',
    'onRadarEvent', 'onSpawn', 'canSpawn', 'isSpawning', 'getSpawnCount', 'getSpawnCoords',
    'processSpawn', 'canAttackOnTheMove', 'canTarget', 'selectTarget', 'onTargetChange',
    'canFire', 'GetIonCannonValue', 'SmokeUpdate', 'Update', 'Constructor', 'DTOR',
    'TechnoClass', 'ProcessEvent', 'RadioClass'
}

def guess_sig(name, size):
    """Guess return type and params from function name and size."""
    nl = name.lower()
    # Stubs
    if size <= 3:
        if 'false' in nl or 'stubreturnfalse' in nl:
            return 'bool', '()', 'return false'
        elif 'void' in nl or 'stubreturnvoid' in nl:
            return 'void', '()', ''
        elif 'return0' in nl or 'stubreturn0' in nl:
            return 'int', '()', 'return 0'
        else:
            return 'void', '()', ''
    
    # Getters
    if name.startswith('Get') or name.startswith('get'):
        return 'int', '() const', 'return 0'
    if name.startswith('Is') or name.startswith('Has') or name.startswith('Can') or name.startswith('Should') or name.startswith('Are'):
        return 'bool', '() const', 'return false'
    if name.startswith('Check'):
        return 'bool', '() const', 'return false'
    if name.startswith('Find'):
        return 'int', '()', 'return -1'
    
    # Actions
    if 'Destruct' in name or 'DTOR' in name or 'Constructor' in name:
        return 'void', '()', ''
    if 'Mission_' in name:
        return 'int', '()', 'return 0'
    if name.startswith('Process') or name.startswith('Update'):
        return 'void', '()', ''
    if name.startswith('Set') or name.startswith('Clear') or name.startswith('Compute') or name.startswith('Calculate'):
        return 'void', '()', ''
    if name.startswith('Create'):
        return 'bool', '()', 'return false'
    if name.startswith('Fire'):
        return 'void', '()', ''
    if name.startswith('Deploy') or name.startswith('Activate') or name.startswith('Deactivate'):
        return 'bool', '()', 'return false'
    if name.startswith('Scan'):
        return 'void', '()', ''
    if name.startswith('Draw') or name.startswith('Render'):
        return 'void', '()', ''
    if name.startswith('Cleanup') or name.startswith('Clear'):
        return 'void', '()', ''
    
    # Default
    return 'int', '()', 'return 0'

# Generate header lines
foot_decls = []
tech_decls = []
foot_impls = []
tech_impls = []

for f in funcs:
    cn = f.get('call', {}).get('class_name', '')
    cat = f.get('category', '')
    if cn not in target_classes or cat in ('menu', 'rendering'):
        continue
    
    name = f['call'].get('method_name', '')
    sz = f['size']
    addr = f['address']
    
    existing = EXISTING_FOOT if cn == 'FootClass' else EXISTING_TECHNO
    if name in existing:
        continue
    
    ret, params, body = guess_sig(name, sz)
    
    # Header declaration
    if ret == 'void':
        decl = f'    virtual void {name}{params} {{}}'
    elif ret == 'bool':
        if 'false' in body:
            decl = f'    virtual bool {name}{params} {{ return false; }}'
        elif 'true' in body:
            decl = f'    virtual bool {name}{params} {{ return true; }}'
        else:
            decl = f'    virtual bool {name}{params} {{ return false; }}'
    elif ret == 'int':
        if 'return 0' in body:
            decl = f'    virtual int {name}{params} {{ return 0; }}'
        elif 'return -1' in body:
            decl = f'    virtual int {name}{params} {{ return -1; }}'
        else:
            decl = f'    virtual int {name}{params} {{ return 0; }}'
    else:
        decl = f'    virtual {ret} {name}{params} {{ return {body.split()[-1].rstrip(";")}; }}'
    
    # Implementation (for .cpp file, only for non-trivial functions)
    if sz <= 10:
        # Stubs don't need separate impl
        impl = None
    else:
        if ret == 'void':
            impl = f'void {cn}::{name}{params} {{\n    // IDA: {addr}, {sz}B\n}}'
        elif ret == 'bool':
            impl = f'bool {cn}::{name}{params} {{\n    // IDA: {addr}, {sz}B\n    return false;\n}}'
        else:
            impl = f'int {cn}::{name}{params} {{\n    // IDA: {addr}, {sz}B\n    return 0;\n}}'
    
    if cn == 'FootClass':
        foot_decls.append(decl)
        if impl:
            foot_impls.append(impl)
    else:
        tech_decls.append(decl)
        if impl:
            tech_impls.append(impl)

# Write header additions
with open('D:/RA2YR_ReSource/.omo/foot_hpp_add.txt', 'w') as f:
    f.write('\n'.join(foot_decls))
with open('D:/RA2YR_ReSource/.omo/tech_hpp_add.txt', 'w') as f:
    f.write('\n'.join(tech_decls))

# Write implementation additions
with open('D:/RA2YR_ReSource/.omo/foot_cpp_add.txt', 'w') as f:
    f.write('\n\n'.join(foot_impls))
with open('D:/RA2YR_ReSource/.omo/tech_cpp_add.txt', 'w') as f:
    f.write('\n\n'.join(tech_impls))

print(f'Generated:')
print(f'  FootClass: {len(foot_decls)} header decls, {len(foot_impls)} impls')
print(f'  TechnoClass: {len(tech_decls)} header decls, {len(tech_impls)} impls')
