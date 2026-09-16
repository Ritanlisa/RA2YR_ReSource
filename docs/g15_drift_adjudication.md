# G15 漂移族 ctor 裁决记录（2026-09-16 会话）

## 二进制 sizeof 权威值（live IDA vtable slot-12 `mov eax,imm;ret` = GetObjectSize 范式）

| 类 | 二进制 | 修复前 class_layouts | 处置 |
|---|---|---|---|
| BuildingClass | 1824 | 1856 | DEFER：链 2092 溢出（G13 争议区直系） |
| BulletTypeClass | 760 | 756 | DEFER：YRpp 头尾部不完整（744-759 缺成员）+ Elasticity 声明 double 实为 float（ctor dword@716=0x3FE00000）；需 INI 考古 |
| CampaignClass | 928 | 812 | DEFER：链=928 吻合但零 ctor 锚 + 解析存疑（wchar_t 尺寸） |
| CellClass | 328 | 328 | REBUILT（til+四源） |
| FactoryClass | 116 | 116 | DEFER：链=116=真值但零锚 |
| FlyLocomotionClass | 96 | 96 | DEFER：链=96=真值但零锚 |
| GadgetClass | — | 28 | NO-SIZE-ORACLE（无神谕/无头） |
| HouseClass | — | 90280 | NO-SIZE-ORACLE（无神谕/无头） |
| JumpjetLocomotionClass | 152 | 204 | REBUILT（til+四源） |
| LocomotionClass | — | 24 | NO-SIZE-ORACLE（无神谕/无头） |
| ObjectClass | — | 172 | NO-SIZE-ORACLE（无神谕/无头） |
| RadSiteClass | 116 | 108 | REBUILT（til+四源） |
| RocketLocomotionClass | 96 | 96 | DEFER：链=96=真值但零锚 |
| ScriptTypeClass | 564 | 448 | DEFER：链 568 溢出 4 字节 |
| SmudgeTypeClass | 676 | 672 | REBUILT（til+四源） |
| Surface | — | 12 | NO-SIZE-ORACLE（无神谕/无头） |
| TeleportLocomotionClass | 76 | 76 | DEFER：链 72 缺 4 |
| TerrainClass | 224 | 224 | DEFER：链 200 缺 24（YRpp 头缺成员） |
| TerrainTypeClass | 700 | 696 | REBUILT（til+四源） |
| TiberiumClass | 296 | 296 | DEFER：链 220 缺 76（YRpp 头缺成员） |
| TriggerTypeClass | 180 | 180 | REBUILT（til+四源） |
| WaveClass | 576 | 480 | DEFER：链 536 缺 40（YRpp 头缺成员） |
| WeaponTypeClass | 352 | 276 | REBUILT（til+四源） |

## 根因（四 bug，全部修复于 .omo/g14_a1_yrpp.py）

1. parse_header 尾注释含 `(` 的成员行被当方法调用丢弃（`int Range; // int(256*ini value)` → Range/MinimumRange 丢失，-8 链漂移；57 行/15+ 头受影响）
2. til `ColorStruct` 是 88B 误名结构（真身 3B R,G,B packed）→ 每处 -85 漂移；23 头受影响。88B 假体在 til 无成员引用（惰性）
3. PROP_RE 类型组不允许 `*`（`DECLARE_PROPERTY(TypeList<AnimTypeClass*>, Anim)` 整行丢失 → -28 漂移）
4. align() 对 3B 组合体按 4 对齐（MSVC 自然对齐=最大成员对齐；ColorStruct 全 BYTE → 对齐 1，ctor 288-291 连续写零证明 packed）

## WeaponTypeClass 定案布局（own 区 152..348，ctor 13 锚逐点验证）

152 AmbientDamage/156 Burst/160 Projectile/164 Damage/168 Speed/172 Warhead/176 ROF/180 Range/184 MinimumRange/
188 Report(TypeList int 28B)/216 DownReport/244 Anim(TypeList AnimTypeClass*)/272 OccupantAnim/276 AssaultAnim/280 OpenToppedAnim/284 AttachedParticleSystem/
288/291/294 Laser 颜色 x3（3B packed）/297-315 bool x19/316 DisguiseFakeBlinkTime/320-341 bool x22（334=char LaserDuration 默认 10）/344 RadLevel/348 IsMagBeam → 352

TypeList T = 28B（VectorClass 16 + count/cap=10 默认/delta）；锚证：VectorClass::Construct(this+47=188 / 54=216)、AnimTypeVector(this+61=244)

## 修复写回范围（四源）

- IDA til：6 类 struct 重声明（尺寸 352/700/116/180/676/152 全对），已 idb_save
- tools/class_layouts.json + tools/member_lookup.json（绝对坐标重建）+ signals._member_by_name + .omo/g13_til_live.json
- OO refresh：rewritten 4,551 / unmapped 5,523；括号净 delta 0；注解 1 missing（IsCrushable 旧账）/一致性 91/7 基线维持

## 消费注意

- ml 中 WeaponType/BulletType/TerrainType 等 TypeClass 族原为 own 相对坐标污染（与 TechnoClass/CellClass 的绝对坐标两种口径并存）——本次 6 类统一为绝对坐标
- BulletType/SmudgeType 的 g15_drift_ctors.json installer 含错身份函数（写入 2236+ 超对象界），使用前必须按尺寸过滤
- Jumpjet 旧 til 的 CurrentState.Players 渲染是错误模型产物，refresh 后该点位回归 raw 偏移（84）——State 子结构语义名属后续 A1