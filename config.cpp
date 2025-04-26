class CfgPatches 
{
	class h1 
	{
		units[] = {"uh1y"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Air_F", "A3_Weapons_F", "A3_Soft_F", "A3_data_F", "A3_Characters_F"};
	};
};
#include "config\misc.hpp"
#include "config\weapons.hpp"
#include "config\sounds.hpp"

class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles
{
	class AllVehicles;
	class Air: AllVehicles
	{
		class NewTurret;
		class ViewPilot;
	};	
	class Helicopter: Air
	{
		class Turrets;
		class MainTurret;
        class NewTurret;
        class AnimationSources;
        class HitPoints;
        class ViewPilot;
        class ViewOptics; 
		class CopilotTurret;       
	};
	class Helicopter_Base_F: Helicopter
    {
        class Turrets;    
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class Components;		
	};
	class uh1y_base: Helicopter_Base_F
	{
		// General Information
		features = "Slingload: Slingloads up to 2000kg";
		faction = "BLU_F";
		model = "\h1\uh1y_venom.p3d";
		picture = "\h1\data\icon_uh1y.paa";
		icon = "\h1\data\icon_uh1y.paa";
		mapSize = 15;
		simulation = "helicopterRTD";
		class Library { libTextDesc = "UH1Y"; };

		// Flight Characteristics
		selectionHRotorStill = "Mrotor_static";
		selectionHRotorMove = "Mrotor_blur";
		selectionVRotorStill = "Trotor_static";
		selectionVRotorMove = "Trotor_blur";
		altFullForce = 1500;
		altNoForce = 4000;
		maxSpeed = 300;
		mainBladeRadius = 8;
		liftForceCoef = 1.1;
		bodyFrictionCoef = 0.69999999;
		cyclicAsideForceCoef = 1.8; //0.5;
		cyclicForwardForceCoef = 5; //0.60000002;
		backRotorForceCoef = 3; //0.80000001;

		// RotorLib Flight Model Properties
		class RotorLibHelicopterProperties
		{
			RTDconfig = "z\vtx\addons\uh60_fd\config\RTD_UH60M_Keplager.xml";
			autoHoverCorrection[] = {3, 2.8, 0};
			defaultCollective = 0.49000001;
			maxHorizontalStabilizerLeftStress = 8000;
			maxHorizontalStabilizerRightStress = 8000;
			maxVerticalStabilizerStress = 4000;
			stressDamagePerSec = 0.0033333332;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxTorque = 12000;
			maxMainRotorStress = 225000;
			maxTailRotorStress = 225000;
			retreatBladeStallWarningSpeed = 83;
		};

		// Pilot Camera
		memoryPointDriverOptics="pilotcamera_tgp_pos";
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="TRK COR";
					initAngleX=0;
					minAngleX=-360;
					maxAngleX=360;
					initAngleY=0;
					minAngleY=-15;
					maxAngleY=85;
					initFov=0.30000001;
					minFov=0.30000001;
					maxFov=0.30000001;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					directionStabilized=1;
					horizontallyStabilized=1;
					gunnerOpticsModel="\A3\Weapons_F\empty";
					opticsPPEffects[]=
					{
						"OpticsCHAbera3",
						"OpticsBlur3"
					};
					gunnerOpticsEffect[]=
					{
						"TankCommanderOptics2"
					};
				};
				class WideT: Wide
				{
					initFov=0.2;
					minFov=0.2;
					maxFov=0.2;
					gunnerOpticsModel="\A3\Weapons_F\empty";
				};
				class MediumT: WideT
				{
					initFov=0.1;
					minFov=0.1;
					maxFov=0.1;
					gunnerOpticsModel="\A3\Weapons_F\empty";
				};
				class NarrowT: WideT
				{
					initFov=0.022;
					minFov=0.022;
					maxFov=0.022;
					gunnerOpticsModel="\A3\Weapons_F\empty";
				};
				class NarrowT2: WideT
				{
					initFov=0.0092000002;
					minFov=0.0092000002;
					maxFov=0.0092000002;
					gunnerOpticsModel="\A3\Weapons_F\empty";
				};
			};
			stabilizedInAxes=3;
			minElev=-40;
			maxElev=90;
			initElev=0;
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};

		// Maneuvering and Controls
		turnCoef = 4;
		terrainCoef = 1;
		damperSize = 1;
		damperForce = 10;
		damperDamping = 100;
		wheelWeight = 30;
		minOmega = 0;
		maxOmega = 2000;
		MainRotorSpeed = 1.5;
		backRotorSpeed = 3;

		// Defense Systems
		armor = 40;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		memoryPointCM[] = {"flare_launcher1", "flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir", "flare_launcher2_dir"};
		radarType = 4;
		threat[] = {0.8, 1, 0.6};
		LockDetectionSystem = 1 + 2 + 4 + 8;
		incomingMissileDetectionSystem = 16;
		laserScanner = 1;

		// Crew & Cargo
		transportSoldier = 4;
		cargoCanEject = 1;
		driverCanEject = 1;
		cargoAction[] = 
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanleft",
			"passenger_generic01_leanright",
			"passenger_generic01_foldhands",
			"passenger_mantisrear",
			"passenger_mantisrear",
			"passenger_generic01_foldhands"
		};
		cargoIsCoDriver[] = {false, false, false, false, false, false};
		driverCanSee = 31;
		gunnerCanSee = 31;
		transportAmmo = 200;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 10;

		// Slingload
		slingLoadMaxCargoMass = 2000;
		ace_fastroping_enabled = 1;
		ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};

		// Miscellaneous
		fuelCapacity = 400;
		fuelConsumptionRate = 0.126;
		maxFordingDepth = 0.75;
		memoryPointsGetInCargo[] = {"pos codriver", "pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir"};
		driverAction = "pilot_Heli_Transport_01";
		driverInAction = "pilot_Heli_Light_03_Enter";
		driveOnComponent[] = {"Skids"};
		hideWeaponsCargo = 1;

		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 0;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 20;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 2;
			};
		};
		initCargoAngleY = +10; 
		minCargoAngleY = -60;
		maxCargoAngleY = +120;
		minFireTime = 30;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1,2,3,4};
		class ViewPilot: ViewPilot
		{
			initFov=1;
			minFov=0.30000001;
			maxFov=1.2;
			initAngleX=-10;
			minAngleX=-75;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-170;
			maxAngleY=170;
			minMoveX=-0.30000001;
			maxMoveX=0.30000001;
			minMoveY=-0.025;
			maxMoveY=0.1;
			minMoveZ=-0.30000001;
			maxMoveZ=0.30000001;
			speedZoomMaxSpeed=0;
			speedZoomMaxFOV=1;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class MarkerLights 
		{
			class WhiteTail
			{
				name="light_white_tail";
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
        blinking=0;
				intensity=50;
				drawLightSize=0.05;
				drawLightCenterSize=0.039999999;
			};
			class RedPos
			{
				name="light_pos";
				color[]={1,0,0,1};
				ambient[]={0.029999999,0.023,0.0055999998,1};
				brightness=0.029999999;
				blinking=1;
				useFlare=1;
				flaresize=3;
				intensity=500;
				dayLight=0;
				drawLight=1;
				drawLightCenterSize=0.079999998;
				drawLightSize=1;
				blinkingPattern[]={0.050000001,1.3};
			};
			class RedUp
			{
				name="light_red_up";
				color[]={1,0,0,1};
				ambient[]={0.003,0.029999999,0.003,1};
				brightness=0.050000001;
				blinking=0;
				useFlare=1;
				flaresize=0.75;
				intensity=50;
				dayLight=0;
				drawLight=1;
				drawLightCenterSize=0.079999998;
				drawLightSize=0.5;
			};
			class GreenUp
			{
				name="light_green_up";
				color[]={0.029999999,0.30000001,0.029999999,1};
				ambient[]={0.003,0.029999999,0.003,1};
				brightness=0.050000001;
				blinking=0;
				useFlare=1;
				flaresize=0.75;
				intensity=50;
				dayLight=0;
				drawLight=1;
				drawLightCenterSize=0.079999998;
				drawLightSize=0.5;
			};
			class RedDown
			{
				name="light_red_down";
				color[]={1,0,0,1};
				ambient[]={0.003,0.029999999,0.003,1};
				brightness=0.050000001;
				blinking=0;
				useFlare=1;
				flaresize=0.75;
				intensity=50;
				dayLight=0;
				drawLight=1;
				drawLightCenterSize=0.079999998;
				drawLightSize=0.5;
			};
			class GreenDown
			{
				name="light_green_down";
				color[]={0.029999999,0.30000001,0.029999999,1};
				ambient[]={0.003,0.029999999,0.003,1};
				brightness=0.050000001;
				blinking=0;
				useFlare=1;
				flaresize=0.75;
				intensity=50;
				dayLight=0;
				drawLight=1;
				drawLightCenterSize=0.079999998;
				drawLightSize=0.5;
			};
		};
		class Reflectors
		{
			class Middle
			{
				color[] = {7000, 7500, 10000, 1};
				ambient[] = {100, 100, 100, 0};
				position = "svetlo";
				direction = "svetlo konec";
				hitpoint = "svetlo";
				selection = "svetlo";
				size = 1;
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 0;
				FlareSize = 6;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
				};
			};
		};
		dammageHalf[] = {};	
		dammageFull[] = {};	
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"h1\data\Mat\uh1y_sklo.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"h1\data\Mat\uh1y_sklo_in.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"h1\data\Mat\uh1y_ext.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat",

				"h1\data\Mat\launcher.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",

				"h1\data\Mat\uh1y_cockpit.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat"
			};
		};
		attenuationEffectType = "OpenHeliAttenuation";
		soundGetIn[] = {"h1\sounds\heli_door_01",db-10,1};
		soundGetOut[] = {"h1\sounds\heli_door_01",db-10,1, 40};
		soundEnviron[] = {"", db-30, 1.0};
		soundDammage[] = {"h1\sounds\alarm_loop1", db-10, 1};
		soundEngineOnInt[] = {"h1\sounds\int-start-final", db-7, 1.0};
		soundEngineOnExt[] = {"h1\sounds\ext-motor-start", db-7, 1.0, 700};
		soundEngineOffInt[] =  {"h1\sounds\int-stop-final", db-7, 1.0};
		soundEngineOffExt[] =  {"h1\sounds\ext-motor-stop", db-7, 1.0, 700};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",0.1,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",0.1,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};		
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_open_1",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",2.5118864,1.0,150};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1.0,1.0,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open",1.0,1.0,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.7782794,1.0,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1",1.7782794,1.0,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1.0,1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.0,1.0,80};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\dummysound",1.0,1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.0,1.0,80};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1.0,1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1.0,1.0,80};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1.0,1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1.0,1.0,80};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class sounds
		{
			class engineext
			{
				sound[] = {"\h1\sounds\turbine_ext_close.ogg",1.4,1.0,400};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorext
			{
				sound[] = {"\h1\sounds\rotor_ext_close.ogg",1.0,1.0,700};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class engineextdist
			{
				sound[] = {"\h1\sounds\turbine_ext_distance.ogg",1,1.0,1000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "campos*((rotorspeed-0.72)*4)";
			};
			class rotorextdist
			{
				sound[] = {"\h1\sounds\rotor_ext_distance.ogg",1.0,1.0,3000};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class rotornoiseext
			{
				sound[] = {"\h1\sounds\rotor_ext_distance.ogg",0,1,0};
				frequency = "rotorspeed* 1";
				volume = "campos * (rotorthrust factor [0.7, 0.9])";
				cone[] = {0.7,1.3,1.0,0};
			};
			class engineint
			{
				sound[] = {"\h1\sounds\turbine_int.ogg",1.0,1.0};
				frequency = "1";
				volume = "(1-campos)*((rotorspeed-0.75)*3)";
			};
			class rotorint
			{
				sound[] = {"\h1\sounds\rotor_int.ogg",0.5011872,1.0};
				frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
				volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
			};
			soundsetsint[] = {"uh1y_helicopter_engineint_soundset","uh1y_helicopter_rotorint_soundset","uh1y_helicopter_transmissiondamageint_phase1_soundset","uh1y_helicopter_transmissiondamageint_phase2_soundset","uh1y_helicopter_damagealarmint_soundset","uh1y_helicopter_rotorlowalarmint_soundset","uh1y_helicopter_scrublandint_soundset","uh1y_helicopter_scrubbuildingint_soundset","uh1y_helicopter_scrubtreeint_soundset","uh1y_helicopter_slingloaddownint_soundset","uh1y_helicopter_slingloadupint_soundset","uh1y_helicopter_rainint_soundset","uh1y_helicopter_windint_soundset","uh1y_helicopter_gstress_soundset"};
			soundsetsext[] = {"uh1y_helicopter_engineext_soundset","uh1y_helicopter_rotorext_soundset","uh1y_helicopter_rotordistance_soundset","uh1y_helicopter_enginedistance_soundset","uh1y_helicopter_transmissiondamageext_phase1_soundset","uh1y_helicopter_transmissiondamageext_phase2_soundset","uh1y_helicopter_scrublandext_soundset","uh1y_helicopter_scrubbuildingext_soundset","uh1y_helicopter_scrubtreeext_soundset","uh1y_helicopter_slingloaddownext_soundset","uh1y_helicopter_slingloadupext_soundset","uh1y_helicopter_rainext_soundset"};
		};
		class soundsext
		{
			class soundevents{};
			class sounds
			{
				class engineext
				{
					sound[] = {"\h1\sounds\turbine_ext_close.ogg",1.4,1.0,400};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorext
				{
					sound[] = {"\h1\sounds\rotor_ext_close.ogg",1.0,1.0,700};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class engineextdist
				{
					sound[] = {"\h1\sounds\turbine_ext_distance.ogg",1,1.0,1000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "campos*((rotorspeed-0.72)*4)";
				};
				class rotorextdist
				{
					sound[] = {"\h1\sounds\rotor_ext_distance.ogg",1.0,1.0,3000};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "1*campos*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class rotornoiseext
				{
					sound[] = {"\h1\sounds\rotor_ext_distance.ogg",0,1,0};
					frequency = "rotorspeed* 1";
					volume = "campos * (rotorthrust factor [0.7, 0.9])";
					cone[] = {0.7,1.3,1.0,0};
				};
				class engineint
				{
					sound[] = {"\h1\sounds\turbine_int.ogg",1.0,1.0};
					frequency = "1";
					volume = "(1-campos)*((rotorspeed-0.75)*3)";
				};
				class rotorint
				{
					sound[] = {"\h1\sounds\rotor_int.ogg",0.5011872,1.0};
					frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
					volume = "(1-campos)*(0 max (rotorspeed-0.5))*(1 + rotorthrust)";
				};
				soundsetsint[] = {"uh1y_helicopter_engineint_soundset","uh1y_helicopter_rotorint_soundset","uh1y_helicopter_transmissiondamageint_phase1_soundset","uh1y_helicopter_transmissiondamageint_phase2_soundset","uh1y_helicopter_damagealarmint_soundset","uh1y_helicopter_rotorlowalarmint_soundset","uh1y_helicopter_scrublandint_soundset","uh1y_helicopter_scrubbuildingint_soundset","uh1y_helicopter_scrubtreeint_soundset","uh1y_helicopter_slingloaddownint_soundset","uh1y_helicopter_slingloadupint_soundset","uh1y_helicopter_rainint_soundset","uh1y_helicopter_windint_soundset","uh1y_helicopter_gstress_soundset"};
				soundsetsext[] = {"uh1y_helicopter_engineext_soundset","uh1y_helicopter_rotorext_soundset","uh1y_helicopter_rotordistance_soundset","uh1y_helicopter_enginedistance_soundset","uh1y_helicopter_tailrotor_soundset","uh1y_helicopter_transmissiondamageext_phase1_soundset","uh1y_helicopter_transmissiondamageext_phase2_soundset","uh1y_helicopter_scrublandext_soundset","uh1y_helicopter_scrubbuildingext_soundset","uh1y_helicopter_scrubtreeext_soundset","uh1y_helicopter_slingloaddownext_soundset","uh1y_helicopter_slingloadupext_soundset","uh1y_helicopter_rainext_soundset"};
			};
		};
		class RenderTargets
		{
			class MFD1
			{
				renderTarget = "rendertarget0";
				class View01
				{
					pointPosition = "z_flir_pos";
					pointDirection = "z_flir_dir";
					renderQuality = 2;
					renderVisionMode = 2;
					fov = 0.093;
				};
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				class Bones {};
				class Draw {};
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				font = "ArchimotoRoundedThin";
				color[] = {0.082,0.408,0.039,0.5};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {0, 0, 0};
				helmetRight[] = {0, 0, 0};
				helmetDown[] = {0, 0, 0};
			};	
      		#include "config\MFD\kimi.hpp"		
		};
		class AnimationSources: AnimationSources
		{
			//TGP
			class tgp_direction
			{
				source="user";
				animPeriod=1;
				initPhase="rad 180";
			};
			class tgp_elevation
			{
				source="user";
				animPeriod=1;
				initPhase="rad 80";
			};

			//////////     Doors     //////////
			class Door_FL_Hide
			{
				displayName="Hide FL doors";
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_FR_Hide
			{
				displayName="Hide FR doors";
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_ML_Hide
			{
				displayName="Hide ML doors";
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_MR_Hide
			{
				displayName="Hide MR doors";
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_BL_Hide
			{
				displayName="Hide BL doors";
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_BR_Hide
			{
				displayName="Hide BR doors";
				source="user";
				animPeriod=1;
				initPhase=0;
			};

			//////////     Rotors     //////////

			class engineRPM
			{
				source="rpm";
				minValue=0;
				maxValue=1;      
				animPeriod=0.1;
				initPhase=0;
			};

			//////Static//////

			class rotor_blade_static_1_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_static_2_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_static_3_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_static_4_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			
			//////blur//////

			class rotor_blade_blur_1_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_blur_2_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_blur_3_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_blur_4_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};

			class rotor_blade_blur_1_flap
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_blur_2_flap
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_blur_3_flap
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_blur_4_flap
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};


			class FormationLights
			{
				AnimPeriod=1;
				source="user";
				InitPhase=1;
			};
			class CockpitBacklights
			{
				AnimPeriod=1;
				source="user";
				InitPhase=1;
			};
			class Muzzle_Flash_GAU21_L
			{
				source="reload";
				weapon="M3M_GAU21";
			};
			class Muzzle_Flash_M134
			{
				source="ammoRandom";
				weapon="M134_GAU17";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
      class CopilotTurret: mainTurret
			{
        		primaryObserver = 0;
				primaryGunner = 1;
				primary = 1;
				playerPosition = 0;
				isCopilot = 1;
				usePiP=1;

				CanEject=0;
       			gunnerType = "B_helipilot_F";
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Light_03_Enter";
        		gunnerName = "Copilot";
				canHideGunner=0;
				viewGunnerInExternal=1;
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				selectionFireAnim="";
				preciseGetInOut=1;
				GunnerDoor="Door_LF";
				proxyIndex=20;
				commanding=-1;
				
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				// Animation class
				body = "tgp_direction";
				gun = "tgp_elevation";

				// Animation source
				animationSourceBody="tgp_direction";
				animationSourceGun="tgp_elevation";
        
				stabilizedInAxes = 3;
				minElev = -180;
				maxElev = 40;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minFov = 0.25;
				maxFov = 0.9;
				initFov = 0.75;
				memoryPointGunnerOptics = "tgp_cam_pos";
				gunBeg="tgp_cam_dir";
				gunEnd="tgp_cam_pos";
				gunnerUsesPilotView = false;
				turretFollowFreeLook = 0;
				class ViewGunner
				{
					initFov=1;
					minFov=0.30000001;
					maxFov=1.2;
					initAngleX=-10;
					minAngleX=-75;
					maxAngleX=85;
					initAngleY=0;
					minAngleY=-170;
					maxAngleY=170;
					minMoveX=-0.30000001;
					maxMoveX=0.30000001;
					minMoveY=-0.025;
					maxMoveY=0.1;
					minMoveZ=-0.30000001;
					maxMoveZ=0.30000001;
					speedZoomMaxSpeed=0;
					speedZoomMaxFOV=1;
					};
							class OpticsIn
							{
								class Wide
								{
									opticsDisplayName = "TRK COR";
									initAngleX = 0;
									minAngleX = -360;
									maxAngleX = 360;
									initAngleY = 0;
									minAngleY = -15;
									maxAngleY = 85;
									initFov = 0.3;
									minFov = 0.3;
									maxFov = 0.3;
									visionMode[] = {"Normal","NVG","Ti"};
									thermalMode[] = {0};
									directionStabilized = 1;
									horizontallyStabilized = 1;
									gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
									opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
									gunnerOpticsEffect[] = {"TankCommanderOptics2"};
								};
								class WideT: Wide
								{
									initFov = 0.2;
									minFov = 0.2;
									maxFov = 0.2;
									gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
								};
								class MediumT: WideT
								{
									initFov = 0.1;
									minFov = 0.1;
									maxFov = 0.1;
									gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
								};
								class NarrowT: WideT
								{
									initFov = 0.022;
									minFov = 0.022;
									maxFov = 0.022;
									gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
								};
								class NarrowT2: WideT
								{
									initFov = 0.0092;
									minFov = 0.0092;
									maxFov = 0.0092;
									gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
								};
							};
						};

			class mainTurret: mainTurret
			{
       			 gunnerType = "B_helicrew_F";
				body="GAU21L_Dir";
				gun="GAU21L_Elev";
				animationSourceBody="GAU21L_Dir";
				animationSourceGun="GAU21L_Elev";
				weapons[]=
				{
					"M3M_GAU21"
				};
				magazines[]=
				{
					"600Rnd_127x99_mag_Tracer_Red"
				};
				stabilizedInAxes=0;
				selectionFireAnim="zasleh_2";
				proxyIndex=2;
				turretAxis="axis_gau21_dir_L";
				gunAxis="axis_gau21_elev_L";
				gunnerName="Left GAU21 Gunner";
				commanding=-3;
				canHideGunner=0;
				gunnerOutOpticsModel="\A3\Weapons_F\empty.p3d";
				memoryPointGunnerOutOptics="gunnerview_3";
				LODTurnedIn=1;
				LODTurnedOut=1;
        		gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				//gunnerAction="GAU21Gunner";
				//gunnerInAction="GAU21Gunner";

				minElev=-60; 
				maxElev=30; 
				initElev=3;
				minTurn=180; 
				maxTurn=5; 
				initTurn=0;

				class TurnIn
				{
					limitsArrayTop[]=
					{
						{10,142},
						{10,-16}
					};
					limitsArrayBottom[]=
					{
						{-7.61484,13.8006},
						{-36.736099,12.9635},
						{-80.010201,34.654499},
						{-69.996101,155.202}
					};
				};
				class TurnOut: TurnIn
				{
				};
				gunBeg="GAU21L_End"; //gunBeg=endpoint of the gun
				gunEnd="GAU21L_Beg"; //gunEnd=chamber of the gun
				//gunnerLeftHandAnimName="GAU21_ELEV_L";
				//gunnerRightHandAnimName= "GAU21_ELEV_L";
				//gunnerLeftLegAnimName="GAU21_GunnerL_Legs";
				//gunnerRightLegAnimName= "GAU21_GunnerL_Legs";
				primaryGunner=0;
				memoryPointGun="GAU21L_End";
				memoryPointGunnerOptics="gunnerview_3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side 4 dir";
			};
			class M134_Right: MainTurret
			{
        		gunnerType = "B_helicrew_F";
				isCopilot=0;
				body="Turret2";
				gun="Gun_2";

				minElev=-60;
				maxElev=30;
				initElev=3;
				minTurn=-180;
				maxTurn=5;
				initTurn=-0;

				soundServo[]=
				{
					"db-40",
					1
				};
				animationSourceHatch="";
				animationSourceBody="Turret_2";
				animationSourceGun="Gun_2";
				stabilizedInAxes=0;
				gunBeg="muzzle_2";
				gunEnd="chamber_2";
				weapons[]=
				{
					"M134_GAU17"
				};
				magazines[]=
				{
					"4000Rnd_762x51_Belt_Tracer_Red"
				};
				gunnerName="Right M134 Gunner";
				memoryPointGun="machinegun_2";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				memoryPointsGetInGunner="pos side 3";
				memoryPointsGetInGunnerDir="pos side 3 dir";
				commanding=-3;
				primaryGunner=0;
				selectionFireAnim="zasleh_1";
				proxyIndex=1;
				gunnerCompartments="Compartment2";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerInAction="passenger_bench_1";

				memoryPointsGetInGunner="pos side 1";
				memoryPointsGetInGunnerDir="pos side 1 dir";
				gunnerName = "Passenger (Right Bench 1)";
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics="";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -45;
				maxTurn = -48;
				minTurn = -104;
				isPersonTurret = 1;
				gunnerUsesPilotView = 1;
				selectionFireAnim="";
				gunnerCanEject=1;
				cantCreateAI=1;
				commanding=-1;

				playerPosition = 1;
				soundAttenuationTurret = "HeliAttenuationRamp";
				disableSoundAttenuation = 0;
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Right Bench 2)";
				memoryPointsGetInGunner="pos side 1";
				memoryPointsGetInGunnerDir="pos side 1 dir";
				proxyIndex = 3;
				maxTurn = 47;
				minTurn = 22;
			};
			class CargoTurret_03: CargoTurret_01
			{
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side 2 dir";
				gunnerName = "Passenger (Left Bench 1)";
				proxyIndex = 2;
				maxTurn = 104;
				minTurn = 58;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerName = "Passenger (Left Bench 2)";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side 2 dir";
				proxyIndex = 4;
				maxTurn = -16;
				minTurn = -40;
			};
			/*class CargoTurret_05: CargoTurret_04
			{
				gunnerName = "Passenger (Left Bench 3)";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side 2 dir";
				proxyIndex = 7;
				maxTurn = 3;
				minTurn = -55;
			};*/
    };

		class UserActions
		{
			///Formation Markers
			class Formation_markers_on
			{
				displayName="Formation Lights On";
				position="pilot";
				priority=4;
				radius=20;
				showWindow=0;
				hideOnUse=1;
				onlyforplayer=1;
				condition="player in this and this animationPhase ""FormationLights"" > 0.5";
				statement="this animate [""FormationLights"",0];";
			};
			class Formation_markers_off
			{
				displayName="Formation Lights Off";
				position="pilot";
				priority=4;
				radius=20;
				showWindow=0;
				hideOnUse=1;
				onlyforplayer=1;
				condition="player in this and this animationPhase ""FormationLights"" < 0.5";
				statement="this animate [""FormationLights"",1];";
			};

			///Cockpit Backlight
			class Cockpit_Backlight_on
			{
				displayName="Cockpit Backlight On";
				position="pilot";
				priority=4;
				radius=20;
				showWindow=0;
				hideOnUse=1;
				onlyforplayer=1;
				condition="player in this and this animationPhase ""CockpitBacklights"" > 0.5";
				statement="this animate [""CockpitBacklights"",0];";
			};
			class Cockpit_Backlight_off
			{
				displayName="Cockpit Backlight Off";
				position="pilot";
				priority=4;
				radius=20;
				showWindow=0;
				hideOnUse=1;
				onlyforplayer=1;
				condition="player in this and this animationPhase ""CockpitBacklights"" < 0.5";
				statement="this animate [""CockpitBacklights"",1];";
			};
		};
	};
  
	class uh1y: uh1y_base
	{
		scope = 2;
		Side=1;
		Faction="BLU_F";
		displayName = "UH-1Y Venom";
		crew = "B_Helipilot_F";
    	typicalCargo[]=
		{
			"B_helicrew_F",
			"B_helicrew_F"
		};
	};
};