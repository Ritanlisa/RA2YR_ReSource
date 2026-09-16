
import idaapi, idc
til = idaapi.get_idati()
try:
    idaapi.del_named_type(til, 'BulletTypeClass', idaapi.NTF_TYPE)
except Exception:
    pass
n = idc.parse_decls("""struct BulletTypeClass {
int vtable0;
int vtable1;
int vtable2;
int vtable3;
int uniqueId;
int abstractFlags;
int nextArrayIndex;
int referenceCount;
void *NeedsSaveOrLink; /* gamemd::UnitClass* */
int BarrelVoxel;
int ChargerTurrets_0x12_;
int ChargerBarrels_0x12_;
char __pad_30[12];
char zero_3C; /* uint8_t */
char UINameLabel[32]; /* char */
char AnimHigh[4]; /* bytes */
char __pad_61[3];
char Name[49]; /* char */
char __tail_95[3]; /* bytes */
char __pad_98[3];
char unused_9B; /* uint8_t */
int Armor[1]; /* Armor */
int Strength;
void *Image; /* SHPStruct* */
char ImageAllocated; /* bool */
char align_A9[3]; /* uint8_t */
void *AlphaImage; /* SHPStruct* */
int MainVoxel[1]; /* VoxelStruct */
int TurretVoxel[1]; /* VoxelStruct */
int BarrelVoxel_2[1]; /* VoxelStruct */
int ChargerTurrets[18]; /* VoxelStruct */
int ChargerBarrels[18]; /* VoxelStruct */
char NoSpawnAlt; /* bool */
char __pad_14D[156];
char align_1E9[3]; /* uint8_t */
int MaxDimension;
int CrushSound;
int AmbientSound;
char ImageFile[25]; /* char */
char AlternateArcticArt; /* bool */
char ArcticArtInUse; /* bool */
char AlphaImageFile[25]; /* char */
char Theater; /* bool */
char Crushable; /* bool */
char Bombable; /* bool */
char RadarInvisible; /* bool */
char Selectable; /* bool */
char LegalTarget; /* bool */
char Insignificant; /* bool */
char Immune; /* bool */
char IsLogic; /* bool */
char AllowCellContent; /* bool */
char Voxel; /* bool */
char NewTheater; /* bool */
char HasRadialIndicator; /* bool */
char IgnoresFirestorm; /* bool */
char UseLineTrail; /* bool */
char LineTrailColor[3]; /* ColorStruct */
char align_23E[2]; /* uint8_t */
int LineTrailColorDecrement;
int VoxelCaches[20]; /* SomeVoxelCache */
char airburst; /* bool */
char floater; /* bool */
char subjectToCliffs; /* bool */
char subjectToElevation; /* bool */
char subjectToWalls; /* bool */
char veryHigh; /* bool */
char shadow; /* bool */
char arcing; /* bool */
char dropping; /* bool */
char level; /* bool */
char inviso; /* bool */
char proximity; /* bool */
char ranged; /* bool */
char noRotate; /* bool */
char inaccurate; /* bool */
char flakScatter; /* bool */
char AA; /* bool */
char AG; /* bool */
char degenerates; /* bool */
char bouncy; /* bool */
char animPalette; /* bool */
char firersPalette; /* bool */
char field_2AA[2]; /* bytes */
  int cluster;
  void *airburstWeapon;
  void *shrapnelWeapon;
  int shrapnelCount;
  int detonationAltitude;
  char vertical;
  char __pad_2C1[7];
  double elasticity;
  int acceleration;
  int Color;
  void *trailer;
  int rot;
  int courseLockDuration;
  int spawnDelay;
  int scaledSpawnDelay;
  char scalable;
  char __pad_2ED[3];
  int arm;
  char animLow;
  char animHigh;
  char animRate;
  char flat;
};
""", 0)
t = idaapi.tinfo_t()
t.get_named_type(til, 'BulletTypeClass')
udt = idaapi.udt_type_data_t()
t.get_udt_details(udt)
print('parse:', n, 'size:', t.get_size(), 'members:', udt.size())
for i in range(udt.size()):
    mm = udt[i]
    off = mm.offset // 8
    if off >= 655:
        print(off, mm.name, mm.type.dstr())
