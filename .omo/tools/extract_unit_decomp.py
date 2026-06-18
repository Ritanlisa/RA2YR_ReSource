#!/usr/bin/env python3
import os

c_path = r'D:\RA2YR_ReSource\decompile-results\gamemd.exe.c'
output_dir = r'D:\RA2YR_ReSource\.omo\evidence\unit_decompilations'
os.makedirs(output_dir, exist_ok=True)

print("Reading gamemd.exe.c...")
with open(c_path, 'r', encoding='utf-8', errors='replace') as f:
    content = f.read()
print("  %d bytes read" % len(content))

addrs = [
    ('73D450', 'ProcessResourceHarvesting'),
    ('4C2C10', 'updateHarvesting'),
    ('6B4BE0', 'UnloadPassengers'),
    ('6B7230', 'ProcessExitQueue'),
    ('6B6080', 'CreateUnloadPlacementCraters'),
    ('54E3B0', 'GetExitCell'),
    ('7192F0', 'Deploy'),
    ('738D30', 'DeployToBuilding'),
    ('739AC0', 'SimpleDeployerDeploy'),
    ('739CD0', 'SimpleDeployerUndeploy'),
    ('737430', 'MissionDispatch'),
    ('7359F0', 'CalcMoveTarget'),
    ('741970', 'AssignDestination_SyncLog'),
    ('7414E0', 'ApproachTarget_DisallowMoving'),
    ('736990', 'UpdateRotation_TurretFacing_EMP'),
    ('743A50', 'Scatter'),
    ('458A00', 'IsCellBlockedByBridge'),
    ('4D03D0', 'CompareCoordinateMagnitude'),
    ('7178B0', 'processEnterTarget'),
    ('7468C0', 'CheckForNearbyEnemies'),
    ('737C90', 'OnUnderAttack'),
    ('70DC70', 'SetTurret'),
    ('73F0A0', 'EvaluateTarget'),
    ('7438F0', 'CanCrushTarget'),
    ('70FBD0', 'IsDeactivated'),
    ('6B4A50', 'Create'),
    ('6B4C80', 'ReadINI'),
    ('6B4FA0', 'DestroySmudge'),
    ('735780', 'Destructor'),
    ('744470', 'LoadFromStream'),
    ('6B4EA0', 'SaveLoadData'),
    ('6B4F00', 'SaveState'),
    ('744640', 'PowerDrainUpdate'),
    ('746810', 'PerFrameUpdate'),
    ('7446E0', 'HandleTargetDestroyed'),
    ('6B4F20', 'CheckStatus'),
    ('6B7C60', 'ClearTargetRef'),
    ('6B7BB0', 'ProcessIdleOrders'),
    ('6B4F30', 'StubReturn176'),
    ('6B4F40', 'StubReturn29'),
    ('4D4280', 'ApproachEvaluate'),
]

results = {}
for addr, name in addrs:
    marker = '//----- (00%s)' % addr
    idx = content.find(marker)
    if idx == -1:
        results[addr] = {'name': name, 'error': 'Marker not found'}
        continue
    pre_content = content[:idx]
    line_num = pre_content.count('\n') + 1
    brace_start = content.find('{', idx)
    if brace_start == -1:
        results[addr] = {'name': name, 'error': 'Opening brace not found'}
        continue
    func_start = idx
    depth = 0
    pos = brace_start
    while pos < len(content):
        c = content[pos]
        if c == '{': depth += 1
        elif c == '}':
            depth -= 1
            if depth == 0: break
        pos += 1
    else:
        results[addr] = {'name': name, 'error': 'Closing brace not found'}
        continue
    func_end = pos + 1
    func_code = content[func_start:func_end]
    out_path = os.path.join(output_dir, '%s_%s.txt' % (addr, name))
    with open(out_path, 'w', encoding='utf-8') as outf:
        outf.write('// Original function at 0x%s (%s)\n' % (addr, name))
        outf.write('// Line %d in gamemd.exe.c\n' % line_num)
        outf.write('// Size: %d bytes\n\n' % (func_end - func_start))
        outf.write(func_code)
    results[addr] = {'name': name, 'line': line_num, 'size': func_end - func_start, 'file': '%s_%s.txt' % (addr, name)}

ok_count = sum(1 for r in results.values() if 'error' not in r)
print('\n=== Extracted %d/%d functions ===' % (ok_count, len(addrs)))
for addr in sorted(results.keys()):
    info = results[addr]
    if 'error' in info:
        print('  0x%s (%40s): ERROR - %s' % (addr, info['name'], info['error']))
    else:
        print('  0x%s (%40s): OK - %6d bytes (line %d)' % (addr, info['name'], info['size'], info['line']))

combined_path = os.path.join(output_dir, 'ALL_UNIT_FUNCTIONS.txt')
with open(combined_path, 'w', encoding='utf-8') as f:
    for addr in sorted(results.keys()):
        info = results[addr]
        if 'error' in info:
            f.write('\n%s\n# 0x%s (%s): ERROR - %s\n%s\n\n' % ('#'*72, addr, info['name'], info['error'], '#'*72))
        else:
            f.write('\n%s\n# 0x%s (%s) - %d bytes\n# Source: line %d in gamemd.exe.c\n%s\n\n' % ('#'*72, addr, info['name'], info['size'], info['line'], '#'*72))
            filepath = os.path.join(output_dir, info['file'])
            with open(filepath, 'r', encoding='utf-8') as inf:
                f.write(inf.read())
            f.write('\n')

print('\nCombined output: %s' % combined_path)
