class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgAmmo
{

	/////////     Ammo     //////////

	class B_20mm;
	class 20mm_AP: B_20mm
	{
		hit = 45;
		indirectHit = 10;
		indirectHitRange = 2;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 3.5;
		airFriction = -0.00077;
		caliber = 2.33;
		timeToLive = 12;
	};

	/////////     Hydra     //////////

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
		model="z\tato\addons\h1_hydra\275\M151_wep";
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
		maxSpeed = 350;
		thrustTime = 0.6;
		thrust=840;
		fuseDistance=75;
		airFriction=0.1;
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
		model="z\tato\addons\h1_hydra\275\M151_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M151.p3d";
		explosionEffects="GrenadeExplosion";
		hit=60;
		indirectHit=40;
		indirectHitRange=13;
	};
	class 275_m229: 275_base
	{
		model="z\tato\addons\h1_hydra\275\M229_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M229.p3d";
		explosionEffects="GrenadeExplosion";
		hit=100;
		indirectHit=66;
		indirectHitRange=20;
		suppressionRadiusHit=20;
	};
	class 275_m247: 275_base
	{
		model="z\tato\addons\h1_hydra\275\M247_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M247.p3d";
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
	class 275_m255a1: 275_base 
    {
        model="z\tato\addons\h1_hydra\275\M255A1_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M255A1.p3d";
		CraterEffects="ATMissileCrater";
		explosionEffects="";
		maxSpeed=350;
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionAmmo="flechet";
		submunitionConeType[]=
		{
			"randomcenter",
			100
		};
		submunitionConeAngle=12;
		triggerDistance=200;
		submunitionInitSpeed=500;
		deleteParentWhenTriggered=1;
		soundHit1[]=
		{
			"A3\sounds_f\dummysound",
			2.5118864,
			1,
			5
		};
		multiSoundHit[]=
		{
			"soundHit1",
			1
		};
		aiAmmoUsageFlags="64+128";
		cost=100;
    };
	class 275_m257: 275_base 
    {
        model="z\tato\addons\h1_hydra\275\M257_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M257.p3d";
		CraterEffects="ATMissileCrater";
		explosionEffects="";
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		submunitionAmmo="m257_flare";
		submunitionCount=1;
		submunitionConeAngle=0;
		deleteParentWhenTriggered=1;
		triggerTime=1.5;
		maxSpeed=350;
		soundHit1[]=
		{
			"A3\sounds_f\dummysound",
			2.5118864,
			1,
			5
		};
		multiSoundHit[]=
		{
			"soundHit1",
			1
		};
		aiAmmoUsageFlags="1";
		allowAgainstInfantry=0;
    };
	class 275_m261: 275_base 
    {
       	model="z\tato\addons\h1_hydra\275\M261_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M261.p3d";
		explosionEffects="GrenadeExplosion";
		maxSpeed=350;
		hit=30;
		indirectHit=5;
		indirectHitRange=5;
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionAmmo="m73mpsm";
		submunitionConeType[]=
		{
			"randomcenter",
			9
		};
		submunitionConeAngle=2;
		triggerDistance=500;
		submunitionInitSpeed=500;
		deleteParentWhenTriggered=1;
		aiAmmoUsageFlags="64+128";
		cost=100;
    };
    class 275_m278: 275_base 
    {
        model="z\tato\addons\h1_hydra\275\M278_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M278.p3d";
        CraterEffects               = "ATMissileCrater";
        submunitionAmmo             = "m278_flare";
        submunitionCount            = 1;
        submunitionConeAngle        = 0;
        deleteParentWhenTriggered   = 1;
        triggerTime                 = 5.4;
        soundHit1[]                 = {"A3\sounds_f\dummysound",2.5118864,1,5};
        multiSoundHit[]             = {"soundHit1",1};
        aiAmmoUsageFlags            = "1";
        allowAgainstInfantry        = 0;
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
		model="z\tato\addons\h1_hydra\275\M151_apkws_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M151_apkws.p3d";
		simulation = "shotMissile";
		effectsMissileInit="MissileDAR1";
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		maverickWeaponIndexOffset = 0;
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 15;
		cost = 80;
		maxSpeed = 350;
		thrustTime = 1.07;
		thrust=840;
		airFriction=0.1;
		sideAirFriction = 0.2;
		timeToLive = 60;
		fuseDistance = 40;
		whistleDist = 24;
		maneuvrability = 15;
		missileLockMaxDistance = 3500;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 680;
		missileLockCone = 10;
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
			seekerAngle = 20;
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
		model="z\tato\addons\h1_hydra\275\M151_apkws_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M151_apkws.p3d";
		explosionEffects="GrenadeExplosion";
		hit=60;
		indirectHit=40;
		indirectHitRange=13;
	};
	class 275_m229_apkws: 275_apkws_base
	{
		model="z\tato\addons\h1_hydra\275\M229_apkws_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M229_apkws.p3d";
		explosionEffects="GrenadeExplosion";
		hit=100;
		indirectHit=66;
		indirectHitRange=20;
		suppressionRadiusHit=20;
	};
	class 275_m247_apkws : 275_apkws_base
	{
		model="z\tato\addons\h1_hydra\275\M247_apkws_wep.p3d";
		proxyShape="z\tato\addons\h1_hydra\275\M247_apkws.p3d";
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

	/////////     Hellfire     //////////
	
	class Missile_AGM_02_F: MissileBase
	{
		class Components
		{
			class SensorsManagerComponent;
		};
		class EventHandlers;
	};
	class agm114base: Missile_AGM_02_F
	{
		ace_frag_enabled=0;
		ace_frag_skip=1;
		irLock=1;
		laserLock=0;
		airLock=0;
		maxSpeed=166;
		simulationStep=0.0049999999;
		airFriction=0.029999999;
		sideAirFriction=0.15000001;
		initTime=0;
		thrustTime=3;
		thrust=199;
		fuseDistance=100;
		manualControl=0;
		maxControlRange=8000;
		trackOversteer=1;
		trackLead=1;
		maneuvrability=21;
		timeToLive=70;
		cmImmunity=0.97000003;
		aiAmmoUsageFlags="64+128+512";
		allowAgainstInfantry=1;
		cost=1000;
		minRange=300;
		minRangeProbab=0.69999999;
		midRange=3500;
		midRangeProbab=1;
		maxRange=8000;
		maxRangeProbab=0.80000001;
		submunitionAmmo="9KG_Tandem";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		muzzleEffect="BIS_fnc_effectFiredHeliRocket";
		effectsMissileInit="MissileDAR1";
		explosionEffects="BombExplosion";
		whistledist=300;
		missileLockMaxDistance=8000;
		missileLockMinDistance=200;
		missileLockMaxSpeed=56;
		missileLockCone=90;
		missileKeepLockedCone=90;
		lockSeekRadius=2000;
		autoSeekTarget=0;
		weaponLockSystem="4 + 8";
		maneuvDependsOnSpeedCoef=0.017999999;
		flightProfiles[]=
		{
			"TopDown",
			"LoalDistance",
			"Cruise"
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendAngle=39;
			ascendHeight=360;
			minDistance=600;
			descendDistance=700;
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent=500;
		};
		class Cruise
		{
			preferredFlightAltitude=500;
			lockDistanceToTarget=1000;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=500;
							maxRange=8000;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=8000;
						};
						typeRecognitionDistance=-1;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=-1;
						maxFogSeeThrough=0.80000001;
						minTrackableSpeed=0;
						maxTrackableSpeed=56;
						minTrackableATL=-1;
						maxTrackableATL=1000;
					};
				};
			};
		};
		class CamShakeExplode
		{
			power=22;
			duration=2;
			frequency=20;
			distance=163.905;
		};
		class CamShakeHit
		{
			power=110;
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
			power=4;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class agm114k:agm114base
	{
		model="z\tato\addons\h1_hellfire\hellfire\agm114k";
		proxyShape="z\tato\addons\h1_hellfire\hellfire\agm114k";
		aiAmmoUsageFlags="64+128+512";
		allowAgainstInfantry=1;
		cost=1000;
		hit=600;
		indirectHit=200;
		indirectHitRange=4;
		laserLock=1;
		airLock=0;
		irlock=0;
		nvLock=0;
		missileLockMaxDistance=8000;
		missileLockMinDistance=300;
		missileLockMaxSpeed=56;
		missileLockCone=90;
		missileKeepLockedCone=90;
		missileManualControlCone=90;
		weaponLockSystem="4";
		weaponType="missileAT";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange=300;
							maxRange=7000;
						};
						class GroundTarget
						{
							minRange=300;
							maxRange=7000;
						};
						angleRangeHorizontal=30;
						angleRangeVertical=50;
						typeRecognitionDistance=-1;
						maxGroundNoiseDistance=0;
						maxFogSeeThrough=0.30000001;
						allowsMarking=1;
					};
				};
			};
		};
	};
	class agm114n: agm114k
	{
		model="z\tato\addons\h1_hellfire\hellfire\agm114k";
		proxyShape="z\tato\addons\h1_hellfire\hellfire\agm114k";
		hit=200;
		indirecthit=200;
		indirecthitrange=12;
		explosionEffects="BombExplosion";
		submunitionAmmo="";
		cost=700;
	};

	/////////     Submunitions     //////////

	class GrenadeBase;
	class FlareCore;
	class B_9x21_Ball;
	class ammo_Penetrator_Base;

	class 9KG_Tandem: ammo_Penetrator_Base
	{
		caliber=60;
		warheadName="TandemHEAT";
		hit=1650;
	};
	class m73mpsm: GrenadeBase
    {
        ace_frag_enabled            = 1;
        ace_frag_skip               = 0;

        soundsetexplosion[]         = {"fza_small_explosion_soundset", "fza_he_explosion_stereo_soundset", "fza_small_explosion_reverb_soundset"};
        simulation                  = "shotShell";
        model                       = "\A3\weapons_f\ammo\UGL_slug"; //M73 model needed.
        explosionEffects            = "ExploAmmoExplosion";
        CraterEffects               = "ExploAmmoCrater";
        muzzleEffect                = "";
        hit                         = 30;
        indirectHit                 = 15;
        indirectHitRange            = 20;
        visibleFire                 = 1;
        audibleFire                 = 30;
        visibleFireTime             = 3;
        dangerRadiusHit             = 60;
        suppressionRadiusHit        = 30;
        explosive                   = 1;
        deflecting                  = 0;
        airFriction                 = -0.001;
        fuseDistance                = 30;
        whistleDist                 = 16;
        typicalSpeed                = 300;
        caliber                     = 3.7;
        soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
        soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
        soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
        soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
        multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
    };
    class m257_flare: FlareCore
    {
        timeToLive                  = 100;
        model                       = "\A3\Weapons_F\Ammo\UGL_Flare";
        lightColor[]                = {1,0.8,0.7,0.5};
        smokeColor[]                = {1,1,1,0.4};
        effectFlare                 = "CounterMeasureFlare";
        brightness                  = 0.1;
        size                        = 3;
        triggerTime                 = 0.25;
        triggerSpeedCoef            = 1;
        audibleFire                 = 20;
        intensity                   = 1000000;
    };
    class m278_flare: m257_flare
    {
        irLight                     = 1;
        intensity                   = 300000;
    };
    class flechet: B_9x21_Ball
    {
        ace_frag_enabled            = 0;
        ace_frag_skip               = 1;
        
        hit                         = 6;
        indirectHit                 = 6;
        indirectHitRange            = 4;
        deflecting                  = 0;
        fuseDistance                = 50;
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

	//M197
	class VehicleMagazine;
	class 750Rnd_20mm: VehicleMagazine
	{
		scope = 2;
		displayname = "20x102mm PGU-28/B SAPHEI";
		displaynameshort = "SAPHEI";
		ammo = "20mm_AP";
		count = 750;
		initSpeed = 1036;
		maxLeadSpeed = 200;
		tracersEvery = 0;
		nameSound = "cannon";
	};
	
	//Rockets
	class 6Rnd_Missile_AGM_02_F;
	////LAU61C/A
	class lau61ca_m151_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m151";
		displayName="M151 LAU-61C/A";
		descriptionShort="The M151 warhead is a 10 pound warhead with a pre-fragmented shell. It is effective against light armored vehicles and personnel. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m151_zoneC: lau61ca_m151_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneC.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m229_zoneC: lau61ca_m229_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneC.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m247_zoneC: lau61ca_m247_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ca_m255a1_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m255a1";
		displayName="M255A1 LAU-61C/A";
		descriptionShort="The M255 warhead is a submunition rocket with over 1000 60 grain flechettes. These are effective against personnel with moderate effectiveness against unarmored vehicles. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ca_m255a1_wep";
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
	class lau61ca_m255a1_zoneB: lau61ca_m255a1_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m255a1_zoneC: lau61ca_m255a1_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ca_m257_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m257";
		displayName="M257 LAU-61C/A";
		descriptionShort="The M257 is an illumination warhead containing a parachute flare. It can illuminate an area of a square kilometer for approximately 100 seconds. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 3.5km.";
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ca_m257_wep";
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
	class lau61ca_m257_zoneB: lau61ca_m257_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m257_zoneC: lau61ca_m257_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ca_m261_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m261";
		displayName="M261 LAU-61C/A";
		descriptionShort="The M261 warhead is a submunition rocket with 9 parachute-retarded munitions. These are effective against both personnel and light armored vehicles. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ca_m261_wep";
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
	class lau61ca_m261_zoneB: lau61ca_m261_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m261_zoneC: lau61ca_m261_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneC.p3d";
		hardpoints[]=
		{
			"zone_C"
		};
		count=3;
		weight=44.419998;
	};

	class lau61ca_m278_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m278";
		displayName="M278 LAU-61C/A";
		descriptionShort="The M257 is an illumination warhead containing a IR parachute flare. It can illuminate an area of a square kilometer for approximately 100 seconds. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 3.5km.";
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau61ca_m278_wep";
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
	class lau61ca_m278_zoneB: lau61ca_m278_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ca_m278_zoneC: lau61ca_m278_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ca_zoneC.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ga_m151_zoneC: lau61ga_m151_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneC.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ga_m229_zoneC: lau61ga_m229_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneC.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};
	class lau61ga_m247_zoneC: lau61ga_m247_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau61ga_zoneC.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneB.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneB.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};

	class lau68da_m255a1_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m255a1";
		displayName="M255A1 LAU-68D/A";
		descriptionShort="The M255 warhead is a submunition rocket with over 1000 60 grain flechettes. These are effective against personnel with moderate effectiveness against unarmored vehicles. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68da_m255a1_wep";
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
	class lau68da_m255a1_zoneB: lau68da_m255a1_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};

	class lau68da_m257_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m257";
		displayName="M257 LAU-68D/A";
		descriptionShort="The M257 is an illumination warhead containing a parachute flare. It can illuminate an area of a square kilometer for approximately 100 seconds. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 3.5km.";
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68da_m257_wep";
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
	class lau68da_m257_zoneB: lau68da_m257_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};

	class lau68da_m261_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m261";
		displayName="M261 LAU-68D/A";
		descriptionShort="The M261 warhead is a submunition rocket with 9 parachute-retarded munitions. These are effective against both personnel and light armored vehicles. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68da_m261_wep";
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
	class lau68da_m261_zoneB: lau68da_m261_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};

	class lau68da_m278_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m278";
		displayName="M278 LAU-61C/A";
		descriptionShort="The M257 is an illumination warhead containing a IR parachute flare. It can illuminate an area of a square kilometer for approximately 100 seconds. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 3.5km.";
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneA.p3d";
		count=12;
		hardpoints[]=
		{
			"zone_A"
		};
		pylonWeapon="lau68da_m278_wep";
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
	class lau68da_m278_zoneB: lau68da_m278_zoneA
	{
		model="z\tato\addons\h1_hydra\pylons\lau68da_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=4;
		weight=51.57;
	};

	////LAU68F/A
	class lau68fa_m151_zoneA: 6Rnd_Missile_AGM_02_F
	{
		ammo="275_m151_apkws";
		displayName="M151 APKWS LAU-68F/A";
		descriptionShort="The M151 warhead is a 10 pound warhead with a pre-fragmented shell. It is effective against light armored vehicles and personnel. It is mounted to a Mark 66 Mod 6 rocket motor with an effective range of 5km.";
		model="z\tato\addons\h1_hydra\pylons\lau68fa_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68fa_zoneB.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68fa_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68fa_zoneB.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68fa_zoneA.p3d";
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
		model="z\tato\addons\h1_hydra\pylons\lau68fa_zoneB.p3d";
		hardpoints[]=
		{
			"zone_B"
		};
		count=3;
		weight=32.12;
	};

	//Hellfire
	///114K
	class agm114k_ll: 6Rnd_Missile_AGM_02_F
	{
		descriptionShort="Semi-active laser guided missile with an effective range out to 7km. This is the most advanced model of all the laser guided HELLFIRES available.";
		ammo="agm114k";
		model="z\tato\addons\h1_hellfire\pylons\rail_ll.p3d";
		displayName="AGM-114K";
		count=1;
		hardpoints[]=
		{
			"agm114_ll"
		};
		pylonWeapon="agm114k_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			3.1622801,
			1
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=62.990002;
	};
	class agm114k_lr: agm114k_ll
	{
		model="z\tato\addons\h1_hellfire\pylons\rail_lr.p3d";
		hardpoints[]=
		{
			"agm114_lr"
		};
	};
	class agm114k_ul: agm114k_ll
	{
		model="z\tato\addons\h1_hellfire\pylons\rail_ul.p3d";
		hardpoints[]=
		{
			"agm114_ul"
		};
	};
	class agm114k_ur: agm114k_ll
	{
		model="z\tato\addons\h1_hellfire\pylons\rail_ur.p3d";
		hardpoints[]=
		{
			"agm114_ur"
		};
	};

	///114N
	class agm114n_ll: 6Rnd_Missile_AGM_02_F
	{
		descriptionShort="Semi-active laser guided missile with an effective range out to 7km with a thermobaric warhead. It is very deadly when used against hardened targets.";
		ammo="agm114n";
		model="z\tato\addons\h1_hellfire\pylons\rail_ll.p3d";
		displayName="AGM-114N";
		count=1;
		hardpoints[]=
		{
			"agm114_ll"
		};
		pylonWeapon="agm114n_wep";
		muzzlePos="muzzlepos";
		muzzleEnd="muzzleend";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			3.1622801,
			1
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1
		};
		weight=62.990002;
	};
	class agm114n_lr: agm114n_ll
	{
		model="z\tato\addons\h1_hellfire\pylons\rail_lr.p3d";
		hardpoints[]=
		{
			"agm114_lr"
		};
	};
	class agm114n_ul: agm114n_ll
	{
		model="z\tato\addons\h1_hellfire\pylons\rail_ul.p3d";
		hardpoints[]=
		{
			"agm114_ul"
		};
	};
	class agm114n_ur: agm114n_ll
	{
		model="z\tato\addons\h1_hellfire\pylons\rail_ur.p3d";
		hardpoints[]=
		{
			"agm114_ur"
		};
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
					"z\tato\addons\h1_sounds\sounds\m134\m134",
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
					"z\tato\addons\h1_sounds\sounds\m134\m134",
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
					"z\tato\addons\h1_sounds\sounds\m134\m134",
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
					"z\tato\addons\h1_sounds\sounds\m134\m134",
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
					"z\tato\addons\h1_sounds\sounds\m134\m134",
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

	// M197
	class gatling_30mm;
	class m197: gatling_30mm
	{
		aiDispersionCoefX = 2;
		scope = 1;
		cursor = "mg";
		cursorAim = "EmptyCursor";
		cursorSize = 0;
		muzzles[] = {"this"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "machinegun";
				directionName = "machinegun_end";
			};
		};
		displayName = "M197";
		ballisticsComputer = 16;
		autoFire = 1;
		nameSound = "cannon";
		magazines[] = {"750Rnd_20mm"};
		canLock = 2;
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			displayName = "M197";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			reloadTime = 0.06;
			dispersion = 0.0085;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 200;
			midRangeProbab = 0.88;
			maxRange = 500;
			maxRangeProbab = 0.34;
		};
		class short: close
		{
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.35;
			midRange = 600;
			midRangeProbab = 0.88;
			maxRange = 800;
			maxRangeProbab = 0.34;
		};
		class medium: close
		{
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 700;
			minRangeProbab = 0.05;
			midRange = 900;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			burstRangeMax = 9;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1400;
			maxRangeProbab = 0.01;
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
		class Far_AI: Far_AI
		{
			displayName="M151 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="M229 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="M247 HEAT";
		};
	};
	class lau61ca_m255a1_wep: hydra70
	{
		scope=1;
		displayName="M255A1 (LAU-61C/A)";
		magazines[]=
		{
			"lau61ca_m255a1_zoneA",
			"lau61ca_m255a1_zoneB",
			"lau61ca_m255a1_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M255A1 FLCT";
		};
	};
	class lau61ca_m257_wep: hydra70
	{
		scope=1;
		displayName="M257 (LAU-61C/A)";
		magazines[]=
		{
			"lau61ca_m257_zoneA",
			"lau61ca_m257_zoneB",
			"lau61ca_m257_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M57 FLARE";
		};
	};
	class lau61ca_m261_wep: hydra70
	{
		scope=1;
		displayName="M261 (LAU-61C/A)";
		magazines[]=
		{
			"lau61ca_m261_zoneA",
			"lau61ca_m261_zoneB",
			"lau61ca_m261_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M261 MPSM";
		};
	};
	class lau61ca_m278_wep: hydra70
	{
		scope=1;
		displayName="M278 (LAU-61C/A)";
		magazines[]=
		{
			"lau61ca_m278_zoneA",
			"lau61ca_m278_zoneB",
			"lau61ca_m278_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M278 IR FLARE";
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
		class Far_AI: Far_AI
		{
			displayName="APKWS M151 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="APKWS M229 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="APKWS M247 HEAT";
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
		class Far_AI: Far_AI
		{
			displayName="M151 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="M229 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="M247 HEAT";
		};
	};
	class lau68da_m255a1_wep: hydra70
	{
		scope=1;
		displayName="M255A1 (LAU-68D/A)";
		magazines[]=
		{
			"lau68da_m255a1_zoneA",
			"lau68da_m255a1_zoneB",
			"lau68da_m255a1_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M255A1 FLCT";
		};
	};
	class lau68da_m257_wep: hydra70
	{
		scope=1;
		displayName="M257 (LAU-68D/A)";
		magazines[]=
		{
			"lau68da_m257_zoneA",
			"lau68da_m257_zoneB",
			"lau68da_m257_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M257 FLARE";
		};
	};
	class lau68da_m261_wep: hydra70
	{
		scope=1;
		displayName="M261 (LAU-68D/A)";
		magazines[]=
		{
			"lau68da_m261_zoneA",
			"lau68da_m261_zoneB",
			"lau68da_m261_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M261 MPSM";
		};
	};
	class lau68da_m278_wep: hydra70
	{
		scope=1;
		displayName="M278 (LAU-68D/A)";
		magazines[]=
		{
			"lau68da_m278_zoneA",
			"lau68da_m278_zoneB",
			"lau68da_m278_zoneC"
		};
		class Far_AI: Far_AI
		{
			displayName="M278 IR FLARE";
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
		class Far_AI: Far_AI
		{
			displayName="APKWS M151 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="APKWS M229 HEDP";
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
		class Far_AI: Far_AI
		{
			displayName="APKWS M247 HEAT";
		};
	};

	//Hellfire
	class MissileLauncher;
	class hellfire: MissileLauncher
	{
		scope=0;
		displayName="AGM-114";
		magazines[]={};
		holdsterAnimValue=3;
		reloadTime=0.1;
		magazineReloadTime=0.1;
		showAimCursorInternal=0;
		textureType="semi";
		weaponLockDelay=0;
		weaponLockSystem=4;
		cmImmunity=0.89999998;
		lockedtargetsound[]=
		{
			"",
			1,
			1
		};
		lockingtargetsound[]=
		{
			"",
			1,
			1
		};
		sounds[]=
		{
			"StandardSound"
		};
		modes[]=
		{
			"TopDown",
			"LoalDistance",
			"Cruise"
		};
		class TopDown: MissileLauncher
		{
			textureType="topDown";
			displayName="LOAL-Lo";
			reloadTime=0.1;
			magazineReloadTime=0.1;
			sounds[]=
			{
				"StandardSound"
			};
			lockedtargetsound[]=
			{
				"",
				1,
				1
			};
			lockingtargetsound[]=
			{
				"",
				1,
				1
			};
			minRange=360;
			minRangeProbab=0.40000001;
			midRange=1500;
			midRangeProbab=1;
			maxRange=8000;
			maxRangeProbab=0.94999999;
		};
		class LoalDistance: TopDown
		{
			displayName="LOAL-DIR";
			textureType="semi";
		};
		class Cruise: TopDown
		{
			displayName="LOAL-HI";
			textureType="terrain";
		};
	};
	class agm114k_wep: hellfire
	{
		scope=1;
		displayName="AGM-114K";
		magazines[]=
		{
			"agm114k_ll",
			"agm114k_lr",
			"agm114k_ul",
			"agm114k_ur"
		};
	};
	class agm114n_wep: hellfire
	{
		scope=1;
		displayName="AGM-114N";
		magazines[]=
		{
			"agm114n_ll",
			"agm114n_lr",
			"agm114n_ul",
			"agm114n_ur"
		};
	};
};