/*
 * enums.h
 *
 *  Created on: Oct 7, 2016
 *      Author: nullifiedcat
 */

#ifndef ENUMS_H_
#define ENUMS_H_

enum cond {
	zoomed = (1 << 1),
	cloaked = (1 << 4),
	uber = (1 << 5),
	taunting = (1 << 7),
	uber_expiration = (1 << 8),
	kritzkrieg = (1 << 11),
	dead_ringer = (1 << 13),
	bonk = (1 << 14),
	stunned = (1 << 15),
	buff_banner = (1 << 16),
	mini_crit = (1 << 19),
	on_fire = (1 << 22),
	jarate = (1 << 24),
	backup = (1 << 26),
	milk = (1 << 27),
	quickfix_uber = (1 << 28),
	concheror = (1 << 29),
	marked = (1 << 30)
};

enum cond_ex {
	halloween_crit = (1 << 1),
	canteen_crit = (1 << 2),
	hype = (1 << 4),
	first_blood_crit = (1 << 5),
	winning_crit = (1 << 6),
	intelligence_crit = (1 << 7),
	on_kill_crit = (1 << 8),
	phlog_crit = (1 << 12),
	phlog_uber = (1 << 13),
	gru_marked = (1 << 16),
	hidden_uber = (1 << 19),
	canteen_uber = (1 << 20),
	misc_crit = (1 << 24),
	misc_uber = (1 << 25),
	vacc_bullet = (1 << 26),
	vacc_blast = (1 << 27),
	vacc_fire = (1 << 28),
	vacc_pbullet = (1 << 29),
	vacc_pblast = (1 << 30),
	vacc_pfire = (1 << 31)
};

enum cond_ex2 {
	cloak_spell = (1 << 0),
	cloak_spell_fading = (1 << 2),
	immunity_bullet = (1 << 3),
	immunity_blast = (1 << 4),
	immunity_fire = (1 << 5),
	buddha = (1 << 6),
	minify_spell = (1 << 8),
	healing_spell = (1 << 9),
	minify_spell_size = (1 << 11),
	base_jumping = (1 << 16),
	rocket_jumping = (1 << 17),
	powerup_generic = (1 << 25),
	powerup_strength = (1 << 26),
	powerup_haste = (1 << 27),
	powerup_regen = (1 << 28),
	powerup_resistance = (1 << 29),
	powerup_vampire = (1 << 30),
	powerup_reflect = (1 << 31)
};

enum cond_ex3 {
	powerup_precision = (1 << 0),
	powerup_agility = (1 << 1),
	grappling = (1 << 2),
	powerup_knockout = (1 << 7),
	powerup_revenge = (1 << 8),
	powerup_crit = (1 << 9),
	powerup_king = (1 << 13),
	powerup_plague = (1 << 14),
	powerup_supernova = (1 << 15),
	airblasted = (1 << 19)
};

enum powerup_type {
	not_powerup = -1,
	strength,
	resistance,
	vampire,
	reflect,
	haste,
	regeneration,
	precision,
	agility,
	knockout,
	king,
	plague,
	supernova,
	crits,
	POWERUP_COUNT
};

enum powerup_owner {
	neutral = 0,
	red = 1,
	blue = 2
};

enum item_type {
	item_null = -1,
	item_medkit_small,
	item_medkit_medium,
	item_medkit_large,
	item_ammo_small,
	item_ammo_medium,
	item_ammo_large,
	item_mp_strength,
	item_mp_resistance,
	item_mp_vampire,
	item_mp_reflect,
	item_mp_haste,
	item_mp_regeneration,
	item_mp_precision,
	item_mp_agility,
	item_mp_knockout,
	item_mp_king,
	item_mp_plague,
	item_mp_supernova,
	item_mp_crit,
	item_mp_uber, /* this exists for some reason */
	item_mp_warlock, /* never seen that powerup, but the model exists */
	item_mp_thorns /* and this one */
};

enum pack_type {
	not_pack = -1,
	small,
	medium,
	large,
	PACK_COUNT
};

enum entities {
	E_PLAYER = 241
};

enum ClassID {
	CTFWearableLevelableItem = 326,
	CTFWearableDemoShield = 324,
	CTFBaseRocket = 184,
	CTFWeaponBaseMerasmusGrenade = 313,
	CTFWeaponBaseMelee = 312,
	CTFWeaponBaseGun = 311,
	CTFWeaponBaseGrenadeProj = 310,
	CTFWeaponBase = 309,
	CTFWearableRobotArm = 327,
	CTFRobotArm = 277,
	CTFWrench = 329,
	CTFProjectile_ThrowableBreadMonster = 269,
	CTFProjectile_ThrowableBrick = 270,
	CTFProjectile_ThrowableRepel = 271,
	CTFProjectile_Throwable = 268,
	CTFThrowable = 307,
	CTFSyringeGun = 303,
	CTFKatana = 219,
	CTFSword = 302,
	CSniperDot = 117,
	CTFSniperRifleClassic = 296,
	CTFSniperRifleDecap = 297,
	CTFSniperRifle = 295,
	CTFChargedSMG = 194,
	CTFSMG = 294,
	CTFShovel = 293,
	CTFShotgunBuildingRescue = 292,
	CTFPEPBrawlerBlaster = 235,
	CTFSodaPopper = 298,
	CTFShotgun_Revenge = 290,
	CTFScatterGun = 286,
	CTFShotgun_Pyro = 289,
	CTFShotgun_HWG = 288,
	CTFShotgun_Soldier = 291,
	CTFShotgun = 287,
	CTFCrossbow = 198,
	CTFRocketLauncher_Mortar = 285,
	CTFRocketLauncher_AirStrike = 283,
	CTFRocketLauncher_DirectHit = 284,
	CTFRocketLauncher = 282,
	CTFRevolver = 276,
	CTFDRGPomson = 199,
	CTFRaygun = 274,
	CTFPistol_ScoutSecondary = 240,
	CTFPistol_ScoutPrimary = 239,
	CTFPistol_Scout = 238,
	CTFPistol = 237,
	CTFPipebombLauncher = 236,
	CTFWeaponPDA_Spy = 319,
	CTFWeaponPDA_Engineer_Destroy = 318,
	CTFWeaponPDA_Engineer_Build = 317,
	CTFWeaponPDAExpansion_Teleporter = 321,
	CTFWeaponPDAExpansion_Dispenser = 320,
	CTFWeaponPDA = 316,
	CTFParticleCannon = 233,
	CTFParachute_Secondary = 232,
	CTFParachute_Primary = 231,
	CTFParachute = 230,
	CTFMinigun = 228,
	CTFMedigunShield = 225,
	CWeaponMedigun = 337,
	CTFMechanicalArm = 224,
	CTFLunchBox_Drink = 223,
	CTFLunchBox = 222,
	CLaserDot = 78,
	CTFLaserPointer = 221,
	CTFKnife = 220,
	CTFProjectile_Cleaver = 246,
	CTFProjectile_JarMilk = 253,
	CTFProjectile_Jar = 252,
	CTFCleaver = 195,
	CTFJarMilk = 218,
	CTFJar = 217,
	CTFWeaponInvis = 315,
	CTFCannon = 193,
	CTFGrenadeLauncher = 211,
	CTFGrenadePipebombProjectile = 212,
	CTFGrapplingHook = 210,
	CTFFlareGun_Revenge = 206,
	CTFFlareGun = 205,
	CTFFlameRocket = 203,
	CTFFlameThrower = 204,
	CTFFists = 202,
	CTFFireAxe = 201,
	CTFCompoundBow = 197,
	CTFClub = 196,
	CTFBuffItem = 192,
	CTFStickBomb = 300,
	CTFBottle = 191,
	CTFBonesaw = 189,
	CTFBall_Ornament = 181,
	CTFStunBall = 301,
	CTFBat_Giftwrap = 187,
	CTFBat_Wood = 188,
	CTFBat_Fish = 186,
	CTFBat = 185,
	CTFProjectile_EnergyRing = 248,
	CTFDroppedWeapon = 200,
	CTFWeaponSapper = 322,
	CTFWeaponBuilder = 314,
	C_TFWeaponBuilder = 0,
	CTFProjectile_Rocket = 254,
	CTFProjectile_Flare = 249,
	CTFProjectile_EnergyBall = 247,
	CTFProjectile_GrapplingHook = 250,
	CTFProjectile_HealingBolt = 251,
	CTFProjectile_Arrow = 245,
	CMannVsMachineStats = 80,
	CTFTankBoss = 304,
	CTFBaseBoss = 182,
	CBossAlpha = 0,
	NextBotCombatCharacter = 342,
	CTFProjectile_SpellKartBats = 258,
	CTFProjectile_SpellKartOrb = 259,
	CTFHellZap = 215,
	CTFProjectile_SpellLightningOrb = 260,
	CTFProjectile_SpellTransposeTeleport = 267,
	CTFProjectile_SpellMeteorShower = 261,
	CTFProjectile_SpellSpawnBoss = 264,
	CTFProjectile_SpellMirv = 262,
	CTFProjectile_SpellPumpkin = 263,
	CTFProjectile_SpellSpawnHorde = 265,
	CTFProjectile_SpellSpawnZombie = 266,
	CTFProjectile_SpellBats = 256,
	CTFProjectile_SpellFireball = 257,
	CTFSpellBook = 299,
	CHightower_TeleportVortex = 74,
	CTeleportVortex = 159,
	CZombie = 339,
	CMerasmusDancer = 83,
	CMerasmus = 82,
	CHeadlessHatman = 73,
	CEyeballBoss = 48,
	CTFBotHintEngineerNest = 190,
	CBotNPCMinion = 0,
	CBotNPC = 0,
	CPasstimeGun = 94,
	CTFViewModel = 308,
	CRobotDispenser = 111,
	CTFRobotDestruction_Robot = 278,
	CTFReviveMarker = 275,
	CTFPumpkinBomb = 272,
	CTFBaseProjectile = 183,
	CBaseObjectUpgrade = 11,
	CTFRobotDestructionLogic = 281,
	CTFRobotDestruction_RobotGroup = 279,
	CTFRobotDestruction_RobotSpawn = 280,
	CTFPlayerDestructionLogic = 242,
	CPlayerDestructionDispenser = 101,
	CTFMinigameLogic = 227,
	CTFHalloweenMinigame_FallingPlatforms = 214,
	CTFHalloweenMinigame = 213,
	CTFMiniGame = 226,
	CTFPowerupBottle = 244,
	CTFItem = 216,
	CHalloweenSoulPack = 71,
	CTFGenericBomb = 208,
	CBonusRoundLogic = 23,
	CTFGameRulesProxy = 207,
	CTETFParticleEffect = 178,
	CTETFExplosion = 177,
	CTETFBlood = 176,
	CHalloweenGiftPickup = 69,
	CBonusDuckPickup = 21,
	CHalloweenPickup = 70,
	CCaptureFlagReturnIcon = 27,
	CCaptureFlag = 26,
	CBonusPack = 22,
	CTFTeam = 306,
	CTFTauntProp = 305,
	CTFPlayerResource = 243,
	CTFPlayer = 241,
	CTFRagdoll = 273,
	CTEPlayerAnimEvent = 164,
	CTFPasstimeLogic = 234,
	CPasstimeBall = 93,
	CTFObjectiveResource = 229,
	CTFGlow = 209,
	CTEFireBullets = 151,
	CTFBuffBanner = 0,
	CTFAmmoPack = 180,
	CObjectTeleporter = 89,
	CObjectSentrygun = 88,
	CTFProjectile_SentryRocket = 255,
	CObjectSapper = 87,
	CObjectCartDispenser = 85,
	CObjectDispenser = 86,
	CMonsterResource = 84,
	CFuncRespawnRoomVisualizer = 64,
	CFuncRespawnRoom = 63,
	CFuncPasstimeGoal = 61,
	CFuncForceField = 57,
	CCaptureZone = 28,
	CCurrencyPack = 31,
	CBaseObject = 10,
	CTestTraceline = 175,
	CTEWorldDecal = 179,
	CTESpriteSpray = 173,
	CTESprite = 172,
	CTESparks = 171,
	CTESmoke = 170,
	CTEShowLine = 168,
	CTEProjectedDecal = 166,
	CTEPlayerDecal = 165,
	CTEPhysicsProp = 163,
	CTEParticleSystem = 162,
	CTEMuzzleFlash = 161,
	CTELargeFunnel = 158,
	CTEKillPlayerAttachments = 157,
	CTEImpact = 156,
	CTEGlowSprite = 155,
	CTEShatterSurface = 167,
	CTEFootprintDecal = 153,
	CTEFizz = 152,
	CTEExplosion = 150,
	CTEEnergySplash = 149,
	CTEEffectDispatch = 148,
	CTEDynamicLight = 147,
	CTEDecal = 145,
	CTEClientProjectile = 144,
	CTEBubbleTrail = 143,
	CTEBubbles = 142,
	CTEBSPDecal = 141,
	CTEBreakModel = 140,
	CTEBloodStream = 139,
	CTEBloodSprite = 138,
	CTEBeamSpline = 137,
	CTEBeamRingPoint = 136,
	CTEBeamRing = 135,
	CTEBeamPoints = 134,
	CTEBeamLaser = 133,
	CTEBeamFollow = 132,
	CTEBeamEnts = 131,
	CTEBeamEntPoint = 130,
	CTEBaseBeam = 129,
	CTEArmorRicochet = 128,
	CTEMetalSparks = 160,
	CSteamJet = 122,
	CSmokeStack = 116,
	DustTrail = 340,
	CFireTrail = 50,
	SporeTrail = 347,
	SporeExplosion = 346,
	RocketTrail = 344,
	SmokeTrail = 345,
	CPropVehicleDriveable = 107,
	ParticleSmokeGrenade = 343,
	CParticleFire = 90,
	MovieExplosion = 341,
	CTEGaussExplosion = 154,
	CEnvQuadraticBeam = 43,
	CEmbers = 36,
	CEnvWind = 47,
	CPrecipitation = 106,
	CBaseTempEntity = 17,
	CWeaponIFMSteadyCam = 336,
	CWeaponIFMBaseCamera = 335,
	CWeaponIFMBase = 334,
	CTFWearableVM = 328,
	CTFWearable = 323,
	CTFWearableItem = 325,
	CEconWearable = 35,
	CBaseAttributableItem = 3,
	CEconEntity = 34,
	CHandleTest = 72,
	CTeamplayRoundBasedRulesProxy = 125,
	CTeamRoundTimer = 126,
	CSpriteTrail = 121,
	CSpriteOriented = 120,
	CSprite = 119,
	CRagdollPropAttached = 110,
	CRagdollProp = 109,
	CPoseController = 105,
	CGameRulesProxy = 68,
	CInfoLadderDismount = 75,
	CFuncLadder = 58,
	CEnvDetailController = 40,
	CWorld = 338,
	CWaterLODControl = 333,
	CWaterBullet = 332,
	CVoteController = 331,
	CVGuiScreen = 330,
	CPropJeep = 0,
	CPropVehicleChoreoGeneric = 0,
	CTest_ProxyToggle_Networkable = 174,
	CTesla = 169,
	CTeamTrainWatcher = 127,
	CBaseTeamObjectiveResource = 16,
	CTeam = 124,
	CSun = 123,
	CParticlePerformanceMonitor = 91,
	CSpotlightEnd = 118,
	CSlideshowDisplay = 115,
	CShadowControl = 114,
	CSceneEntity = 113,
	CRopeKeyframe = 112,
	CRagdollManager = 108,
	CPhysicsPropMultiplayer = 98,
	CPhysBoxMultiplayer = 96,
	CBasePropDoor = 15,
	CDynamicProp = 33,
	CPointCommentaryNode = 104,
	CPointCamera = 103,
	CPlayerResource = 102,
	CPlasma = 100,
	CPhysMagnet = 99,
	CPhysicsProp = 97,
	CPhysBox = 95,
	CParticleSystem = 92,
	CMaterialModifyControl = 81,
	CLightGlow = 79,
	CInfoOverlayAccessor = 77,
	CFuncTrackTrain = 67,
	CFuncSmokeVolume = 66,
	CFuncRotating = 65,
	CFuncReflectiveGlass = 62,
	CFuncOccluder = 60,
	CFuncMonitor = 59,
	CFunc_LOD = 54,
	CTEDust = 146,
	CFunc_Dust = 53,
	CFuncConveyor = 56,
	CBreakableSurface = 25,
	CFuncAreaPortalWindow = 55,
	CFish = 51,
	CEntityFlame = 38,
	CFireSmoke = 49,
	CEnvTonemapController = 46,
	CEnvScreenEffect = 44,
	CEnvScreenOverlay = 45,
	CEnvProjectedTexture = 42,
	CEnvParticleScript = 41,
	CFogController = 52,
	CEntityParticleTrail = 39,
	CEntityDissolve = 37,
	CDynamicLight = 32,
	CColorCorrectionVolume = 30,
	CColorCorrection = 29,
	CBreakableProp = 24,
	CBasePlayer = 13,
	CBaseFlex = 8,
	CBaseEntity = 7,
	CBaseDoor = 6,
	CBaseCombatCharacter = 4,
	CBaseAnimatingOverlay = 2,
	CBoneFollower = 20,
	CBaseAnimating = 1,
	CInfoLightingRelative = 76,
	CAI_BaseNPC = 0,
	CBeam = 19,
	CBaseViewModel = 18,
	CBaseProjectile = 14,
	CBaseParticleEntity = 12,
	CBaseGrenade = 9,
	CBaseCombatWeapon = 5
};

enum tf_class {
	tf_scout = 1,
	tf_sniper,
	tf_soldier,
	tf_demoman,
	tf_medic,
	tf_heavy,
	tf_pyro,
	tf_spy,
	tf_engineer
};

enum hitbox {
	hb_head = 0
};

enum weapons {
	WP_SNIPERRIFLE = 295,
	WP_ROCKET_LAUNCHER = 282,
	WP_DIRECT_HIT = 284,
	WP_GRENADE_LAUNCHER = 211,
	WP_HUNTSMAN = 197,
	WP_SANDMAN = 188,
	WP_FLAREGUN = 205
};

#endif /* ENUMS_H_ */
