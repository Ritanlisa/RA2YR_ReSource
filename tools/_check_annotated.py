import json
d = json.load(open('tools/ida_match_results.json','r'))
check = ['misc\\locomotion.hpp', 'type\\object_type.hpp', 'render\\voxel.hpp',
         'entity\\voxel.hpp', 'type\\abstract_type.hpp', 'structure\\building.hpp',
         'core\\vector.hpp', 'object\\foot.hpp', 'type\\building_type.hpp']
for f in check:
    found = False
    for k,v in d['results'].items():
        if v['hpp_file'] == f or v['hpp_file'].replace('\\\\','\\') == f:
            print(f"{f}: conf={v['final_confidence']}, line={v['hpp_line']}")
            found = True
            break
    if not found:
        print(f"{f}: NOT in match results")
