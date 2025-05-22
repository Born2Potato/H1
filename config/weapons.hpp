class CfgAmmo
{
	
	class MissileCore;
	class MissileBase: MissileCore
	{
		class Components;
	};
	class 275_base: MissileBase
	{
		ACE_damageType = "explosive";
		ace_frag_enabled = 1;
		ace_frag_metal = 2900;
		ace_frag_charge = 1000;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = "1/2";
		ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};
		model="\h1\weapons\m151_wep";
		effectsMissileInit="MissileDAR1";
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		hit=60;
		indirectHit=20;
		indirectHitRange=10;
		manualControl=0;
		maxControlRange=0;
		maneuvrability=0;
		airLock=0;
		irLock=0;
		laserLock=0;
		nvLock=0;
		weaponLockSystem=0;
		cmimmunity=1;
		aiAmmoUsageFlags="128+512";
		allowAgainstInfantry=1;
		cost=75;
		aiRateOfFire=0.30000001;
		aiRateOfFireDistance=0;
		weaponType="rocket";
		suppressionRadiusHit=15;
		dangerRadiusHit=40;
		initTime=0.02;
		maxSpeed = 250;
		thrustTime = 0.4;
		thrust=840;
		fuseDistance=75;
		airFriction=0.05;
		sideAirFriction=0.0040000002;
		timeToLive=60;
		whistleDist=24;
		class CamShakeExplode
		{
			power=16;
			duration=1.8;
			frequency=20;
			distance=191.554;
		};
		class CamShakeHit
		{
			power=80;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.9907;
			duration=1.8;
			frequency=20;
			distance=71.554199;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class 275_m151: 275_base
	{
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m151.p3d";
		explosionEffects="GrenadeExplosion";
		hit=60;
		indirectHit=40;
		indirectHitRange=13;
	};
	class 275_m229: 275_base
	{
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m229.p3d";
		explosionEffects="GrenadeExplosion";
		hit=100;
		indirectHit=66;
		indirectHitRange=20;
		suppressionRadiusHit=20;
	};
	class 275_m247: 275_base
	{
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m247.p3d";
		hit = 800;
		indirectHit = 120;
		indirectHitRange = 30;
		submunitionAmmo = "ammo_Penetrator_PG7";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};

	class 275_apkws_base : MissileBase
	{
		ACE_damageType = "explosive";
		ace_frag_enabled = 1;
		ace_frag_metal = 2900;
		ace_frag_charge = 1000;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = "1/2";
		ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m151.p3d";
		simulation = "shotMissile";
		effectsMissileInit="MissileDAR1";
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		maverickWeaponIndexOffset = 0;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 15;
		cost = 80;
		maxSpeed = 250;
		thrustTime = 0.4;
		thrust=840;
		airFriction=0.05;
		sideAirFriction = 0.2;
		timeToLive = 60;
		fuseDistance = 40;
		whistleDist = 24;
		maneuvrability = 15;
		missileLockMaxDistance = 3500;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 680;
		missileLockCone = 50;
		class CamShakeExplode
		{
			power=16;
			duration=1.8;
			frequency=20;
			distance=191.554;
		};
		class CamShakeHit
		{
			power=80;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=2.9907;
			duration=1.8;
			frequency=20;
			distance=71.554199;
		};
		class CamShakePlayerFire
		{
			power=2;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class SomeRadarSensorComponent
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 3000;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 1000;
						angleRangeHorizontal = 60;
						angleRangeVertical = 60;
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 250;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 45;
					};
				};
			};
		};
		class ACE_MissileGuidance
		{
			enabled = 1;
			canVanillaLock = 1;
			minDeflection = 0.001;
			maxDeflection = 0.003;
			incDeflection = 0.0005;
			defaultSeekerType = "SALH";
			seekerTypes[] = {"SALH"};
			defaultSeekerLockMode = "LOAL";
			seekerLockModes[] = {"LOAL"};
			seekLastTargetPos = 1;
			seekerAngle = 45;
			seekerAccuracy = 1;
			seekerIntercept = 1;
			seekerMinRange = 1;
			seekerMaxRange = 7000;
			defaultAttackProfile = "DIR";
			attackProfiles[] = {"DIR","LIN"};
		};		
		
	};
	class 275_m151_apkws: 275_apkws_base
	{
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m151.p3d";
		explosionEffects="GrenadeExplosion";
		hit=60;
		indirectHit=40;
		indirectHitRange=13;
	};
	class 275_m229_apkws: 275_apkws_base
	{
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m229.p3d";
		explosionEffects="GrenadeExplosion";
		hit=100;
		indirectHit=66;
		indirectHitRange=20;
		suppressionRadiusHit=20;
	};
	class 275_m247_apkws : 275_apkws_base
	{
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m247.p3d";
		maverickWeaponIndexOffset = 12;
		maverickweapon = 1;
		warheadName = "HEAT";
		cost = 500;
		hit = 800;
		indirectHit = 120;
		indirectHitRange = 30;
		submunitionAmmo = "ammo_Penetrator_PG7";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;	
		
	};	
};	
class CfgMagazines
{
		//GAU-21
	class 100Rnd_127x99_mag_Tracer_Red;
	class 600Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag_Tracer_Red
	{
		count=600;
		tracersEvery=5;
	};
	//GAU-17
	class 2000Rnd_65x39_Belt_Tracer_Red;
	class 4000Rnd_762x51_Belt_Tracer_Red: 2000Rnd_65x39_Belt_Tracer_Red
	{
		count=4000;
		tracersEvery=5;
	};
	//Rockets
	class 6Rnd_Missile_AGM_02_F;
	////LAU61C/A
	class lau61ca_m151_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m151";
		displayName="M151 LAU-61C/A";
		descriptionShort="The M151 warhead is a 10 pound warhead with a pre-fragmented shell. It is effective against light armored vehicles and personnel. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="\h1\weapons\pylons\lau61ca_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ca_m151_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=128.48;
	};
	class lau61ca_m151_zoneB: lau61ca_m151_zoneA
	{
		model="\h1\weapons\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m151_zoneC: lau61ca_m151_zoneA
	{
		model="\h1\weapons\pylons\lau61ca_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ca_m229_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m229";
		displayName="M229 LAU-61C/A";
		descriptionShort="The M229 warhead is a 17 pound warhead with a pre-fragmented shell. It is more effective against heavier armored vehicles and personnel than the M229 at a cost of slightly reduced range. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau61ca_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ca_m229_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=128.48;
	};
	class lau61ca_m229_zoneB: lau61ca_m229_zoneA
	{
		model="\h1\weapons\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m229_zoneC: lau61ca_m229_zoneA
	{
		model="\h1\weapons\pylons\lau61ca_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ca_m247_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m247";
		displayName="M247 LAU-61C/A";
		descriptionShort="The M247 warhead is a 17 pound warhead with a shaped-charge and pre-fragmented shell. It is more effective against fortified positions and armored vehicles at a cost of reduced blast radius. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau61ca_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ca_m247_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=128.48;
	};
	class lau61ca_m247_zoneB: lau61ca_m247_zoneA
	{
		model="\h1\weapons\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m247_zoneC: lau61ca_m247_zoneA
	{
		model="\h1\weapons\pylons\lau61ca_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	////LAU61G/A
	class lau61ga_m151_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m151_apkws";
		displayName="M151 APKWS LAU-61G/A";
		descriptionShort="The M151 warhead is a 10 pound warhead with a pre-fragmented shell. It is effective against light armored vehicles and personnel. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="\h1\weapons\pylons\lau61ga_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ga_m151_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=128.48;
	};
	class lau61ga_m151_zoneB: lau61ga_m151_zoneA
	{
		model="\h1\weapons\pylons\lau61ga_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ga_m151_zoneC: lau61ga_m151_zoneA
	{
		model="\h1\weapons\pylons\lau61ga_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ga_m229_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m229_apkws";
		displayName="M229 APKWS LAU-61G/A";
		descriptionShort="The M229 warhead is a 17 pound warhead with a pre-fragmented shell. It is more effective against heavier armored vehicles and personnel than the M229 at a cost of slightly reduced range. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau61ga_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ga_m229_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=128.48;
	};
	class lau61ga_m229_zoneB: lau61ga_m229_zoneA
	{
		model="\h1\weapons\pylons\lau61ga_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ga_m229_zoneC: lau61ga_m229_zoneA
	{
		model="\h1\weapons\pylons\lau61ga_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ga_m247_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m247_apkws";
		displayName="M247 APKWS LAU-61G/A";
		descriptionShort="The M247 warhead is a 17 pound warhead with a shaped-charge and pre-fragmented shell. It is more effective against fortified positions and armored vehicles at a cost of reduced blast radius. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau61ga_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ga_m247_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=128.48;
	};
	class lau61ga_m247_zoneB: lau61ga_m247_zoneA
	{
		model="\h1\weapons\pylons\lau61ga_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ga_m247_zoneC: lau61ga_m247_zoneA
	{
		model="\h1\weapons\pylons\lau61ga_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};
	
	////LAU68D/A
	class lau68da_m151_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m151";
		displayName="M151 LAU-68D/A";
		descriptionShort="The M151 warhead is a 10 pound warhead with a pre-fragmented shell. It is effective against light armored vehicles and personnel. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="\h1\weapons\pylons\lau68da_zoneA.p3d";
		count=4;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68da_m151_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=42.82;
	};
	class lau68da_m151_zoneB: lau68da_m151_zoneA
	{
		model="\h1\weapons\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};

	class lau68da_m229_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m229";
		displayName="M229 LAU-68D/A";
		descriptionShort="The M229 warhead is a 17 pound warhead with a pre-fragmented shell. It is more effective against heavier armored vehicles and personnel than the M229 at a cost of slightly reduced range. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau68da_zoneA.p3d";
		count=4;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68da_m229_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=42.82;
	};
	class lau68da_m229_zoneB: lau68da_m229_zoneA
	{
		model="\h1\weapons\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};

	class lau68da_m247_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m247";
		displayName="M247 LAU-68D/A";
		descriptionShort="The M247 warhead is a 17 pound warhead with a shaped-charge and pre-fragmented shell. It is more effective against fortified positions and armored vehicles at a cost of reduced blast radius. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau68da_zoneA.p3d";
		count=4;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68da_m247_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=42.82;
	};
	class lau68da_m247_zoneB: lau68da_m247_zoneA
	{
		model="\h1\weapons\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};

	////LAU68F/A
	class lau68fa_m151_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m151_apkws";
		displayName="M151 APKWS LAU-68F/A";
		descriptionShort="The M151 warhead is a 10 pound warhead with a pre-fragmented shell. It is effective against light armored vehicles and personnel. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="\h1\weapons\pylons\lau68fa_zoneA.p3d";
		count=4;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68fa_m151_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=42.82;
	};
	class lau68fa_m151_zoneB: lau68fa_m151_zoneA
	{
		model="\h1\weapons\pylons\lau68fa_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};

	class lau68fa_m229_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m229_apkws";
		displayName="M229 APKWS LAU-68F/A";
		descriptionShort="The M229 warhead is a 17 pound warhead with a pre-fragmented shell. It is more effective against heavier armored vehicles and personnel than the M229 at a cost of slightly reduced range. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau68fa_zoneA.p3d";
		count=4;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68fa_m229_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=42.82;
	};
	class lau68fa_m229_zoneB: lau68fa_m229_zoneA
	{
		model="\h1\weapons\pylons\lau68fa_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};

	class lau68fa_m247_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m247_apkws";
		displayName="M247 APKWS LAU-68F/A";
		descriptionShort="The M247 warhead is a 17 pound warhead with a shaped-charge and pre-fragmented shell. It is more effective against fortified positions and armored vehicles at a cost of reduced blast radius. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 4.5km.";
		model="\h1\weapons\pylons\lau68fa_zoneA.p3d";
		count=4;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68fa_m247_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\weapons\rockets\explosion_missile_01",
			1,
			1,
			1200
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=42.82;
	};
	class lau68fa_m247_zoneB: lau68fa_m247_zoneA
	{
		model="\h1\weapons\pylons\lau68fa_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};
};
class CfgWeapons
{
	// M3M GAU-21
	class HMG_01;
	class HMG_M2: HMG_01
	{
		class manual;
	};
	class M3M_GAU21: HMG_M2
	{
		displayName="GAU-21";
		magazines[]=
		{
			"600Rnd_127x99_mag_Tracer_Red"
		};
		class manual: manual
		{
			reloadTime=0.054499999;
		};
		class GunParticles
		{
			class effect1
			{
				positionName="GAU21L_End";
				directionName="GAU21L_Beg";
				effectName="MachineGunCloud";
			};
			class effect2
			{
				positionName="GAU21L_eject_pos";
				directionName="GAU21L_eject_dir";
				effectName="MachineGunEject";
			};
			class effect3
			{
				positionName="GAU21L_eject_pos";
				directionName="GAU21L_eject_dir";
				effectName="MachineGunCartridge2";
			};
		};
	};
	// M134 GAU-17
	class LMG_Minigun;
	class LMG_Minigun_Transport: LMG_Minigun
	{
		class manual;
		class far;
		class medium;
		class close;
		class short;
	};
	class M134_GAU17: LMG_Minigun_Transport
	{
		magazines[]=
		{
			"4000Rnd_762x51_Belt_Tracer_Red"
		};
		class gunParticles
		{
			class effect1
			{
				positionName="cartridge_pos";
				directionName="cartridge_dir";
				effectName="MachineGunCartridge1";
			};
			class effect2
			{
				positionName="muzzle_1";
				directionName="chamber_1";
				effectName="MachineGun1";
			};
		};
		class manual: manual
		{
			reloadTime=0.015;
			dispersion=0.0099999998;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"h1\sounds\m134\m134",
					20,
					0.89999998,
					1500,
					{25704,27159}
				};
				soundBegin[]=
				{
					"begin1",
					10
				};
			};
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=20;
			soundContinuous=1;
			autoFire=1;
		};
		class far: far
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"h1\sounds\m134\m134",
					20,
					0.89999998,
					1500,
					{25704,27159}
				};
				soundBegin[]=
				{
					"begin1",
					10
				};
			};
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=20;
			soundContinuous=1;
			autoFire=1;
		};
		class medium: medium
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"h1\sounds\m134\m134",
					20,
					0.89999998,
					1500,
					{25704,27159}
				};
				soundBegin[]=
				{
					"begin1",
					10
				};
			};
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=20;
			soundContinuous=1;
			autoFire=1;
		};
		class close: close
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"h1\sounds\m134\m134",
					20,
					0.89999998,
					1500,
					{25704,27159}
				};
				soundBegin[]=
				{
					"begin1",
					10
				};
			};
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=20;
			soundContinuous=1;
			autoFire=1;
		};
		class short: short
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"h1\sounds\m134\m134",
					20,
					0.89999998,
					1500,
					{25704,27159}
				};
				soundBegin[]=
				{
					"begin1",
					10
				};
			};
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=20;
			soundContinuous=1;
			autoFire=1;
		};
	};
	//Rockets
	class RocketPods;
	class hydra70: RocketPods
	{
		scope=0;
		displayName="Rockets";
		magazines[]={};
		modes[]=
		{
			"Single",
			"Far_AI",
			"Medium_AI"
		};
		canLock=0;
		weaponLockDelay=0;
		cursor="EmptyCursor";
		cursorAim="rocket";
		holdsterAnimValue=3;
		weight=80;
		useAction=0;
		useActionTitle="";
		class Far_AI: RocketPods
		{
			displayName="LAU-61C/A";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound{};
			autoFire=0;
			reloadTime=0.090000004;
			dispersion=0.079999998;
			showToPlayer=0;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.69999999;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=3200;
			maxRangeProbab=0.1;
		};
		class Medium_AI: Far_AI
		{
			showToPlayer=0;
			aiRateOfFire=3;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.1;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1200;
			maxRangeProbab=0.75;
		};
		class Single: RocketPods
		{
			displayName="LAU-61C/A";
			soundContinuous=0;
			autoFire=0;
			reloadTime=0.090000004;
			dispersion=0.015;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound{};
			textureType="semi";
		};
	};
	class lau61ca_m151_wep: hydra70
	{
		scope=1;
		displayName="M151 (LAU-61C/A)";
		magazines[]=
		{
			"lau61ca_m151_zoneA",
			"lau61ca_m151_zoneB",
			"lau61ca_m151_zoneC"
		};
	};
	class lau61ca_m229_wep: hydra70
	{
		scope=1;
		displayName="M229 (LAU-61C/A)";
		magazines[]=
		{
			"lau61ca_m229_zoneA",
			"lau61ca_m229_zoneB",
			"lau61ca_m229_zoneC"
		};
	};
	class lau61ca_m247_wep: hydra70
	{
		scope=1;
		displayName="M247 (LAU-61C/A)";
		magazines[]=
		{
			"lau61ca_m247_zoneA",
			"lau61ca_m247_zoneB",
			"lau61ca_m247_zoneC"
		};
	};

	class lau61ga_m151_wep: hydra70
	{
		scope=1;
		displayName="M151 APKWS (LAU-61G/A)";
		magazines[]=
		{
			"lau61ga_m151_zoneA",
			"lau61ga_m151_zoneB",
			"lau61ga_m151_zoneC"
		};
	};
	class lau61ga_m229_wep: hydra70
	{
		scope=1;
		displayName="M229 APKWS (LAU-61G/A)";
		magazines[]=
		{
			"lau61ga_m229_zoneA",
			"lau61ga_m229_zoneB",
			"lau61ga_m229_zoneC"
		};
	};
	class lau61ga_m247_wep: hydra70
	{
		scope=1;
		displayName="M247 APKWS (LAU-61G/A)";
		magazines[]=
		{
			"lau61ga_m247_zoneA",
			"lau61ga_m247_zoneB",
			"lau61ga_m247_zoneC"
		};
	};

	class lau68da_m151_wep: hydra70
	{
		scope=1;
		displayName="M151 (LAU-68D/A)";
		magazines[]=
		{
			"lau68da_m151_zoneA",
			"lau68da_m151_zoneB"
		};
	};
	class lau68da_m229_wep: hydra70
	{
		scope=1;
		displayName="M229 (LAU-68D/A)";
		magazines[]=
		{
			"lau68da_m229_zoneA",
			"lau68da_m229_zoneB"
		};
	};
	class lau68da_m247_wep: hydra70
	{
		scope=1;
		displayName="M247 (LAU-68D/A)";
		magazines[]=
		{
			"lau68da_m247_zoneA",
			"lau68da_m247_zoneB"
		};
	};

	class lau68fa_m151_wep: hydra70
	{
		scope=1;
		displayName="M151 APKWS (LAU-68F/A)";
		magazines[]=
		{
			"lau68fa_m151_zoneA",
			"lau68fa_m151_zoneB"
		};
	};
	class lau68fa_m229_wep: hydra70
	{
		scope=1;
		displayName="M229 APKWS (LAU-68F/A)";
		magazines[]=
		{
			"lau68fa_m229_zoneA",
			"lau68fa_m229_zoneB"
		};
	};
	class lau68fa_m247_wep: hydra70
	{
		scope=1;
		displayName="M247 APKWS (LAU-68F/A)";
		magazines[]=
		{
			"lau68fa_m247_zoneA",
			"lau68fa_m247_zoneB"
		};
	};
};