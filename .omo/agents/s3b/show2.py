import sys
for f,ln in [(r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_f1\part_00\UnitClass_426ed0.cpp',45),
             (r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_f1\part_00\TechnoClass.cpp',161),
             (r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_f1\part_00\BuildingClass.cpp',52),
             (r'D:\RA2YR_ReSource\.omo\decomp_batch\s3b\probe_f1\part_00\ObjectClass_42cf80.cpp',111)]:
    L=open(f,encoding='utf-8',errors='replace').readlines()
    print('='*80); print(f, ln)
    for i in range(max(0,ln-5), min(len(L), ln+3)):
        print(('>>' if i==ln-1 else '  ')+L[i].rstrip()[:180])
