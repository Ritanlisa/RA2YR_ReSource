import json

with open(r'D:\RA2YR_ReSource\.omo\evidence\infantry_decompilations.json') as f:
    data = json.load(f)

groups = {
    'Deploy': ['ProcessDeployAction','ProcessIdleDeploy','CanInitiateDeploy','CanDeployAtCell','CheckDeployPath','CreateDeployLocomotor','StartBombDeploy','IsBombDeployMission','DeployAnimation','ComputeDeploySpeedFactor','GetDeployWeaponIndex','updateDeployAnimation'],
    'Combat': ['FireAtTargetPos','FireWeaponWithCleanup','GetFireError','CanAttackTarget','ProcessIdleAction','ProcessAnimation','GetIdleTimer'],
    'Movement': ['CanMoveFreely','CanMoveThroughCell','MoveToCell','CancelMovement','CalcMoveTarget','FindMoveTarget','FindNearbyCell','FindPathToBuilding','EnterBuilding','ProcessEnterOrRepair','CanEnterBuilding','FindIdleMovePosition','FindIdleAITarget'],
}
addrs = {
    'ProcessDeployAction':'0x51D6F0','ProcessIdleDeploy':'0x5200B0','CanInitiateDeploy':'0x521B60','CanDeployAtCell':'0x5221D0','CheckDeployPath':'0x521EB0','CreateDeployLocomotor':'0x522FE0','StartBombDeploy':'0x522C00','IsBombDeployMission':'0x5228D0','DeployAnimation':'0x514310','ComputeDeploySpeedFactor':'0x521D80','GetDeployWeaponIndex':'0x5218E0','updateDeployAnimation':'0x4598A0',
    'FireAtTargetPos':'0x522600','FireWeaponWithCleanup':'0x51DF60','GetFireError':'0x51C8B0','CanAttackTarget':'0x5227F0','ProcessIdleAction':'0x51CDB0','ProcessAnimation':'0x5239D0','GetIdleTimer':'0x521320',
    'CanMoveFreely':'0x5216D0','CanMoveThroughCell':'0x484D60','MoveToCell':'0x51DFF0','CancelMovement':'0x51DF10','CalcMoveTarget':'0x51B350','FindMoveTarget':'0x51D0D0','FindNearbyCell':'0x418E20','FindPathToBuilding':'0x51F330','EnterBuilding':'0x51F3E0','ProcessEnterOrRepair':'0x51F540','CanEnterBuilding':'0x522BC0','FindIdleMovePosition':'0x51F620','FindIdleAITarget':'0x51F640',
}

print('='*90)
print('  INFANTRY DECOMPILATION RESULTS — Full Pseudocode')
print('='*90)

for gname, names in groups.items():
    print(f'\n  === Group {gname} ===')
    for n in names:
        a = addrs[n]
        entry = data.get(a, {})
        code = entry.get('code', '')
        err = entry.get('error', '')
        print(f'\n{"-"*90}')
        print(f'  {n} @ {a}  |  {len(code)} chars')
        print(f'{"-"*90}')
        if code:
            # Print first line (prototype)
            lines = code.split('\n')
            print(f'  Prototype: {lines[0] if lines else "?"}')
            print()
            # Print full code (truncate per-function to avoid overflow)
            if len(code) > 8000:
                print(code[:8000])
                print(f'\n  ... [{len(code)} total chars - full code in decompilations.json]')
            else:
                print(code)
        else:
            print(f'  ERROR: {err}')
