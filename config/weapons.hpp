class CfgAmmo
{
	class MissileBase;
	class 275_base: MissileBase
	{
		ace_frag_enabled=0;
		ace_frag_skip=1;
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
		maxSpeed=840;
		thrustTime=2;
		thrust=840;
		fuseDistance=75;
		airFriction=0.1;
		sideAirFriction=0.0040000002;
		timeToLive=15;
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
		model="\h1\weapons\m151_wep.p3d";
		proxyShape="\h1\weapons\m151.p3d";
		hit = 600;
		indirectHit = 50;
		indirectHitRange = 15;
		cost = 500;
		maxSpeed = 720;
		irLock = 0;
		laserLock = 1;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 64";
		maxControlRange = 5000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 50;
		simulationStep = 0.01;
		airFriction = 0.1;
		sideAirFriction = 0.16;
		initTime = 0.002;
		thrust = 1060;
		thrustTime = 0.69;
		fuseDistance = 5;
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile2";
		whistleDist = 4;
		muzzleEffect = "";
		timeToLive = 60;
		weaponLockSystem = "2 + 16";
		manualControl = 0;
		cameraViewAvailable = 0;
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
		missileLockCone = 180;
		missileKeepLockedCone = 180;
		missileLockMaxDistance = 5000;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 550;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class SomeRadarSensorComponent
					{
						componentType = "LaserSensorComponent";
						class AirTarget      // ranges for targets with sky background
						{
							minRange = 10;         //minimum possible range in meters  
							maxRange = 5000;       //maximum possible range in meters                 
							objectDistanceLimitCoef = -1;    //range not limited by obj. view distance
							viewDistanceLimitCoef = -1;      //range not limited by view distance           
						};
						class GroundTarget      // ranges for targets with ground background                           
						{
							minRange = 10;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 5000; // distance how far the target type gets recognized                                          
						angleRangeHorizontal = 180;     // sensor azimuth coverage in degrees         
						angleRangeVertical = 240;       // sensor elevation coverage in degrees       
						groundNoiseDistanceCoef = -1;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = -1;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = -1;        // target speed in km/h above which the target will start to become visible           
						maxSpeedThreshold = -1;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold         
					};
				};
			};
		};
        class ace_missileguidance {
            enabled = 1; // Enable missile guidance (0-disabled, 1-enabled)

            minDeflection = 0.00025;  // Minimum flap deflection for guidance
            maxDeflection = 0.001;  // Maximum flap deflection for guidance
            incDeflection = 0.0005;  // The increment in which deflection adjusts

            canVanillaLock = 0;  // Enable vanilla lock, only applicable to non-cadet modes, 'recruit' always uses vanilla locking (0-disabled, 1-enabled)

            defaultSeekerType = "SALH";  // Default seeker type
            seekerTypes[] = {"SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS"};  // Seeker types available

            defaultSeekerLockMode = "LOBL";  // Default seeker lock mode
            seekerLockModes[] = {"LOAL", "LOBL"};  // Seeker lock modes available

            seekerAngle = 90;  // Angle in front of the missile which can be searched
            seekerAccuracy = 1;  // Seeker accuracy multiplier

            seekerMinRange = 1;  // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 2500;  // Maximum from the missile which the seeker can visually search

            defaultAttackProfile = "DIR";  // Default attack profile
            attackProfiles[] = {"LIN", "DIR", "MID", "HI"};  // Attack profiles available
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