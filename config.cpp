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
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		GAU21Gunner="GAU21Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class GAU21Gunner: Crew
		{
			file="h1\anim\GAU21Gunner.rtm";
			interpolateTo[]=
			{
				"GAU21Gunner",
				1
			};
		};
	};
};
class CfgFontFamilies
{
	class ArchimotoRoundedThin
	{
		fonts[]= {"\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin6","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin7","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin8","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin9","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin10","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin11","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin12","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin13","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin14","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin15","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin16","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin17","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin18","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin19","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin20","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin21","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin22","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin23","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin24","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin25","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin26","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin27","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin28","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin29","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin30","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin31","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin34","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin35","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin37","\h1\Font\ArchimotoRoundedThin\ArchimotoRoundedThin46"};
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
};

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
class cfgsoundcurves
{
	class uh1y_helicopter_fadeout_volumecurve
	{
		points[] = {{0,1},{1,0}};
	};
	class uh1y_helicopter_volumecurve
	{
		points[] = {{0,0.99},{0.1,0.75},{0.2,0.6},{0.3,0.55},{0.4,0.45},{0.5,0.4},{0.6,0.25},{0.7,0.175},{0.8,0.125},{0.9,0.1},{1,0.0}};
	};
	
};	
class cfgsound3dprocessors
{
	class uh1y_helicopter_basic_processorcurve
	{
		points[] = {{0,1},{0.1,0.97},{0.2,0.95},{0.3,0.85},{0.4,0.71},{0.5,0.52},{0.6,0.32},{0.7,0.18},{0.8,0.1},{0.9,0.03},{1,0}};
	};
	class uh1y_helicopter_3dprocessor
	{
		type = "panner";
		innerrange = 1;
		range = 50;
		rangecurve = "uh1y_helicopter_basic_processorcurve";
	};
	class uh1y_helicopter_vehicleint_middle_3dprocessingtype
	{
		type = "surround_panner";
		radius = 10;
		reference = "vehicle";
		volumefrontleft = 1;
		volumefrontright = 1;
		volumebackleft = 1;
		volumebackright = 1;
	};
	class uh1y_helicopter_rotor_3dprocessingtype
	{
		type = "panner";
		innerrange = 10;
		range = 400;
		rangecurve[] = {{0,1},{150,0.2},{200,0.15},{400,0}};
	};
	class uh1y_helicopter_distantrotor_3dprocessingtype
	{
		type = "panner";
		innerrange = 50;
		range = 600;
		rangecurve = "uh1y_helicopter_basic_volumecurve";
	};
};
class cfgdistancefilters
{
	class uh1y_helicopter_basic_lowpass_filter
	{
		type="lowpassfilter";
		mincutofffrequency=50;
		qfactor=1;
		innerrange=0.5;
		range=500;
		powerfactor=96;
	};
	class uh1y_helicopter_lowpass_filter
	{
		type = "lowpassfilter";
		mincutofffrequency = 1500;
		qfactor = 0.25;
		innerrange = 150;
		range = 1500;
		powerfactor = 32;
	};
};	

class cfgSoundSets /////////////////////////////////////////////////////////////////////////
{
	class uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_engineext_soundshader"};
		sound3dprocessingtype = "uh1y_helicopter_3dprocessor";
		distancefilter = "uh1y_helicopter_lowpass_filter";
		volumecurve = "uh1y_helicopter_volumecurve";
		volumefactor = 0.85;
		spatial = 1;
		loop = 1;
		shape = "uh1y_helicopter_back";
		occlusionfactor = 0.33;
		obstructionfactor = 0.33;
	};
	class uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_engineint_soundshader"};
		distancefilter = "uh1y_helicopter_lowpass_filter";
		volumecurve = "uh1y_helicopter_basic_lowpass_filter";
		volumefactor = 1;
		spatial = 0;
		loop = 1;
		sound3dprocessingtype = "uh1y_helicopter_vehicleint_middle_3dprocessingtype";
	};
	class uh1y_helicopter_rotorext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_rotorext_soundshader"};
		distancefilter = "uh1y_helicopter_lowpass_filter";
		volumecurve = "uh1y_helicopter_volumecurve";
		spatial = 1;
		loop = 1;
		occlusionfactor = 0.33;
		obstructionfactor = 0.33;
		volumefactor = 0.95;
		shape = "uh1y_helicopter_front";
		sound3dprocessingtype = "uh1y_helicopter_rotor_3dprocessingtype";
	};
	class uh1y_helicopter_rotorint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_rotorint_soundshader"};
		distancefilter = "uh1y_helicopter_lowpass_filter";
		volumecurve = "uh1y_helicopter_basic_lowpass_filter";
		volumefactor = 1;
		spatial = 0;
		loop = 1;
		sound3dprocessingtype = "uh1y_helicopter_vehicleint_back_3dprocessingtype";
	};
	class uh1y_helicopter_rotordistance_soundset
	{
		soundshaders[] = {"uh1y_helicopter_rotordistance_soundshader"};
		distancefilter = "uh1y_helicopter_lowpass_filter";
		volumecurve = "uh1y_helicopter_volumecurve";
		spatial = 1;
		loop = 1;
		occlusionfactor = 0.33;
		obstructionfactor = 0.33;
		sound3dprocessingtype = "uh1y_helicopter_distantrotor_3dprocessingtype";
		volumefactor = 0.95;
		shape = "uh1y_helicopter_rotor_front";
	};
	class uh1y_helicopter_enginedistance_soundset
	{
		soundshaders[] = {"uh1y_helicopter_enginedistance_soundshader"};
		distancefilter = "uh1y_helicopter_lowpass_filter";
		volumecurve = "uh1y_helicopter_volumecurve";
		spatial = 1;
		loop = 1;
		occlusionfactor = 0.33;
		obstructionfactor = 0.33;
		sound3dprocessingtype = "uh1y_helicopter_distantrotor_3dprocessingtype";
		volumefactor = 0.95;
		shape = "uh1y_helicopter_turbine_back";
	};
	class uh1y_helicopter_gstress_soundset
	{
		soundshaders[] = {"uh1y_helicopter_gstress_soundshader"};
		sound3dprocessingtype = "vehicleint_middle_3dprocessingtype";
		distancefilter = "uh1y_helicopter_basic_lowpass_filter";
		volumecurve = "uh1y_helicopter_fadeout_volumecurve";
		volumefactor = 1;
		spatial = 0;
		loop = 1;
	};
	class uh1y_helicopter_transmissiondamageext_phase1_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_transmissiondamageext_phase1_soundshader"};
	};
	class uh1y_helicopter_transmissiondamageext_phase2_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_transmissiondamageext_phase2_soundshader"};
	};
	class uh1y_helicopter_transmissiondamageint_phase1_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_transmissiondamageint_phase1_soundshader"};
	};
	class uh1y_helicopter_transmissiondamageint_phase2_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_transmissiondamageint_phase2_soundshader"};
	};
	class uh1y_helicopter_damagealarmint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_damagealarmint_soundshader"};
	};
	class uh1y_helicopter_rotorlowalarmint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_rotorlowalarmint_soundshader"};
	};
	class uh1y_helicopter_scrublandint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_scrublandint_soundshader"};
	};
	class uh1y_helicopter_scrublandext_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_scrublandext_soundshader"};
	};
	class uh1y_helicopter_scrubbuildingint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_scrubbuildingint_soundshader"};
	};
	class uh1y_helicopter_scrubbuildingext_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_scrubbuildingext_soundshader"};
	};
	class uh1y_helicopter_scrubtreeint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_scrubtreeint_soundshader"};
	};
	class uh1y_helicopter_scrubtreeext_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_scrubtreeext_soundshader"};
	};
	class uh1y_helicopter_slingloaddownext_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_slingloaddownext_soundshader"};
	};
	class uh1y_helicopter_slingloadupext_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_slingloadupext_soundshader"};
	};
	class uh1y_helicopter_slingloaddownint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_slingloaddownint_soundshader"};
	};
	class uh1y_helicopter_slingloadupint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_slingloadupint_soundshader"};
	};
	class uh1y_helicopter_rainext_soundset: uh1y_helicopter_engineext_soundset
	{
		soundshaders[] = {"uh1y_helicopter_rainext_soundshader"};
	};
	class uh1y_helicopter_rainint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_rainint_soundshader"};
	};
	class uh1y_helicopter_windint_soundset: uh1y_helicopter_engineint_soundset
	{
		soundshaders[] = {"uh1y_helicopter_windint_soundshader"};
		volumefactor = 0.25;
	};
};	
class cfgSoundShaders /////////////////////////////////////////////////////////////////////
{
	class uh1y_helicopter_engineext_soundshader
	{
		samples[] = {{"\h1\sounds\turbine_ext_close.ogg",1}};
		frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
		volume = "1*(0 max (rotorspeed-0.15))*(1 + rotorthrust)";
		range = 450;
		rangecurve[] = {{0,1},{200,1},{450,0}};
	};
	class uh1y_helicopter_engineint_soundshader
	{
		samples[] = {{"\h1\sounds\turbine_int.ogg",1}};
		frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
		volume = "1*((rotorspeed-0.75)*3)";
		range = 50;
	};
	class uh1y_helicopter_rotorext_soundshader
	{
		samples[] = {{"\h1\sounds\rotor_ext_close.ogg",1}};
		frequency = "rotorspeed * (1-rotorthrust/15) * 1";
		volume = "1*(0 max (rotorspeed-0.25))*(1 + rotorthrust)";
		range = 875;
		rangecurve[] = {{0,1},{100,1},{425,1},{875,0}};
	};
	class uh1y_helicopter_rotorint_soundshader
	{
		samples[] = {{"\h1\sounds\rotor_int.ogg",1}};
		frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
		volume = "1*engineon * (gmeterz factor[1, 1.75])*((rotorspeed-0.75)*3)";
		range = 50;
	};
	class uh1y_helicopter_rotordistance_soundshader
	{
		samples[] = {{"\h1\sounds\rotor_ext_distance.ogg",1}};
		frequency = "rotorspeed * (1-rotorthrust/15) * 1";
		volume = "1*(0 max (rotorspeed-0.1))*(1 + rotorthrust)";
		range = 3500;
		rangecurve[] = {{0,0},{875,1},{3500,0}};
	};
	class uh1y_helicopter_enginedistance_soundshader
	{
		samples[] = {{"\h1\sounds\turbine_ext_distance.ogg",1}};
		frequency = "rotorspeed * (1-rotorthrust/15) * 1.25";
		volume = "((rotorspeed-0.72)*4)";
		range = 1800;
		rangecurve[] = {{0,0},{450,1},{1800,0}};
	};
	class uh1y_helicopter_transmissiondamageext_phase1_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_ext_1",1}};
		frequency = "0.66 + rotorspeed / 3";
		volume = " (transmissiondamage factor [0.3, 0.35]) * (transmissiondamage factor [0.5, 0.45]) * (rotorspeed factor [0.2, 0.5])";
		range = 100;
	};
	class uh1y_helicopter_transmissiondamageext_phase2_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_ext_2",1}};
		frequency = "0.66 + rotorspeed / 3";
		volume = " (transmissiondamage factor [0.45, 0.5]) * (rotorspeed factor [0.2, 0.5])";
		range = 100;
	};
	class uh1y_helicopter_transmissiondamageint_phase1_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_int_1",1}};
		frequency = "0.66 + rotorspeed / 3";
		volume = "(1 - campos) * (transmissiondamage factor [0.3, 0.35]) * (transmissiondamage factor [0.5, 0.45]) * (rotorspeed factor [0.2, 0.5])";
		range = 100;
	};
	class uh1y_helicopter_transmissiondamageint_phase2_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_damage_transmission_int_2",1}};
		frequency = "0.66 + rotorspeed / 3";
		volume = "(1 - campos) * (transmissiondamage factor [0.45, 0.5]) * (rotorspeed factor [0.2, 0.5])";
		range = 100;
	};
	class uh1y_helicopter_damagealarmint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_alarm_opfor",1}};
		frequency = 1;
		volume = "0.5*engineon * (1 - campos) * ( 1 - ((transmissiondamage factor [0.61, 0.60]) * (motordamage factor [0.61, 0.60]) * (rotordamage factor [0.51, 0.50]))) * (rotorspeed factor [0.0, 0.001])";
		range = 10;
	};
	class uh1y_helicopter_damagealarmext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_alarm_opfor",1}};
		frequency = 1;
		volume = "0";
		range = 50;
	};
	class uh1y_helicopter_rotorlowalarmint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_alarm_rotor_low",1}};
		frequency = 1;
		volume = "0.5*engineon * (1 - campos) * (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		range = 100;
	};
	class uh1y_helicopter_rotorlowalarmext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\heli_alarm_rotor_low",1}};
		frequency = 1;
		volume = "engineon *  (rotorspeed factor [0.9, 0.8999]) * (rotorspeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		range = 100;
	};
	class uh1y_helicopter_scrublandint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\scrublandint_open",1}};
		frequency = 1;
		volume = "2 *  (scrubland factor[0.02, 0.05])";
		range = 100;
	};
	class uh1y_helicopter_scrublandext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\scrublandext",1}};
		frequency = 1;
		volume = " (scrubland factor[0.02, 0.05])";
		range = 100;
	};
	class uh1y_helicopter_scrubbuildingint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\scrubbuildingint",1}};
		frequency = 1;
		volume = "2 * (1 - campos) * (scrubbuilding factor[0.02, 0.05])";
		range = 100;
	};
	class uh1y_helicopter_scrubbuildingext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\scrubbuildingext",1}};
		frequency = 1;
		volume = " (scrubbuilding factor[0.02, 0.05])";
		range = 100;
	};
	class uh1y_helicopter_scrubtreeint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\scrubtreeext",1}};
		frequency = 1;
		volume = "(1 - campos) * ((scrubtree) factor [0, 0.01])";
		range = 100;
	};
	class uh1y_helicopter_scrubtreeext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\scrubtreeext",1}};
		frequency = 1;
		volume = " ((scrubtree) factor [0, 0.01])";
		range = 100;
	};
	class uh1y_helicopter_slingloaddownext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\sl_enginedownext",1}};
		frequency = 1;
		volume = "(slingloadactive factor [0,-1])";
		range = 100;
	};
	class uh1y_helicopter_slingloadupext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\sl_engineupext",1}};
		frequency = 1;
		volume = "(slingloadactive factor [0,1])";
		range = 100;
	};
	class uh1y_helicopter_slingloaddownint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\sl_enginedownint",1}};
		frequency = 1;
		volume = "(slingloadactive factor [0,-1])";
		range = 100;
	};
	class uh1y_helicopter_slingloadupint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\sl_engineupint",1}};
		frequency = 1;
		volume = "(slingloadactive factor [0,1])";
		range = 100;
	};
	class uh1y_helicopter_rainext_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\noises\rain1_ext",1}};
		frequency = 1;
		volume = " (rain - rotorspeed/2) * 1";
		range = 50;
	};
	class uh1y_helicopter_rainint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\noises\rain1_int",1}};
		frequency = 1;
		volume = "(rain - rotorspeed/2)*2";
		range = 10;
	};
	class uh1y_helicopter_windint_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\air\noises\wind_open_int",1}};
		frequency = 1;
		volume = "0.7*(speed factor[15, 100])*(speed factor[15, 100])";
		range = 100;
	};
	class uh1y_helicopter_gstress_soundshader
	{
		samples[] = {{"a3\sounds_f\vehicles\noises\vehicle_stress2b",1}};
		frequency = 1;
		volume = "0.35*engineon *  ((gmeterz factor[1.5, 2.5]) + (gmeterz factor[0.5, -0.5]))";
		range = 100;
	};
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
		altFullForce = 1500;
		altNoForce = 4000;
		maxSpeed = 300;
		mainBladeRadius = 8;
		liftForceCoef = 1.1;
		bodyFrictionCoef = 0.69999999;
		cyclicAsideForceCoef = 0.5;
		cyclicForwardForceCoef = 0.60000002;
		backRotorForceCoef = 0.80000001;

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

		// Maneuvering and Controls
		turnCoef = 4;
		terrainCoef = 1;
		damperSize = 1;
		damperForce = 10;
		damperDamping = 100;
		wheelWeight = 30;
		minOmega = 0;
		maxOmega = 2000;
		MainRotorSpeed = 0.5;
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
		cargoAction[] = {
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

		class vtx_templateFLIR
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
		cargoProxyIndexes[] = {5};
		getInProxyOrder[] = {1,2,3,4,5,6,7};
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
			class Kimi_HUD_1 
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.082,0.408,0.039,0.5};
				font = "ArchimotoRoundedThin";
				enableParallax = 0;
				class Bones 
				{
					class GunnerAim 
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5, 0.9 - 0.04 + 0.012};
						pos10[] = {0.5 + 0.0111, 0.9 - 0.04 + 0.012 + 0.0133};
					};				
					class Target 
					{
						source = "target";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.85, 0.85};
					};				
					class Velocity 
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.65, 0.65};
					};				
					class Velocity_slip 
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.845};
						pos10[] = {0.53, 0.845};
					};					
					class VspeedBone 
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1.9685;
						min = -20;
						max = 20;
						minPos[] = {0.93, 0.2};
						maxPos[] = {0.93, 0.8};
					};				
					class RadarAltitudeBone 
					{
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						min = 0;
						max = 200;
						minPos[] = {0.965, 0.2};
						maxPos[] = {0.965, 0.8};
					};					
					class HorizonBankRot 
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};					
					class ForwardVec 
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.25, 0.25};
					};				
					class WeaponAim 
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.75, 0.75};
					};					
					class Level0 
					{
						type = "horizon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.78, 0.78};
						angle = 0;
					};					
					class LevelP5 : Level0 
					{
						angle = 5;
					};				
					class LevelM5 : Level0 
					{
						angle = -5;
					};					
					class LevelP10 : Level0 
					{
						angle = 10;
					};				
					class LevelM10 : Level0 
					{
						angle = -10;
					};					
					class LevelP15 : Level0 
					{
						angle = 15;
					};				
					class LevelM15 : Level0 
					{
						angle = -15;
					};					
					class LevelP20 : Level0 
					{
						angle = 20;
					};					
					class LevelM20 : Level0 
					{
						angle = -20;
					};					
					class LevelP25 : Level0 
					{
						angle = 25;
					};					
					class LevelM25 : Level0 
					{
						angle = -25;
					};				
					class LevelP30 : Level0 
					{
						angle = 30;
					};					
					class LevelM30 : Level0 
					{
						angle = -30;
					};					
					class LevelP35 : Level0 
					{
						angle = 35;
					};					
					class LevelM35 : Level0 
					{
						angle = -35;
					};					
					class LevelP40 : Level0 
					{
						angle = 40;
					};				
					class LevelM40 : Level0 
					{
						angle = -40;
					};					
					class LevelP45 : Level0 
					{
						angle = 45;
					};					
					class LevelM45 : Level0 
					{
						angle = -45;
					};				
					class LevelP50 : Level0 
					{
						angle = 50;
					};					
					class LevelM50 : Level0 
					{
						angle = -50;
					};
				};				
				class Draw 
				{
					color[] = {0.18, 1, 0.18};
					alpha = 1;
					condition = "on";				
					class Horizont 
					{
						clipTL[] = {0.15, 0.15};
						clipBR[] = {0.85, 0.85};					
						class Dimmed 
						{
							class Level0 
							{
								type = "line";
								points[] = {{"Level0", {-0.42, 0}, 1}, {"Level0", {-0.38, 0}, 1}, {}, {"Level0", {-0.37, 0}, 1}, {"Level0", {-0.33, 0}, 1}, {}, {"Level0", {-0.32, 0}, 1}, {"Level0", {-0.28, 0}, 1}, {}, {"Level0", {-0.27, 0}, 1}, {"Level0", {-0.23, 0}, 1}, {}, {"Level0", {-0.22, 0}, 1}, {"Level0", {-0.18, 0}, 1}, {}, {"Level0", {-0.17, 0}, 1}, {"Level0", {-0.13, 0}, 1}, {}, {"Level0", {-0.12, 0}, 1}, {"Level0", {-0.08, 0}, 1}, {}, {"Level0", {0.42, 0}, 1}, {"Level0", {0.38, 0}, 1}, {}, {"Level0", {0.37, 0}, 1}, {"Level0", {0.33, 0}, 1}, {}, {"Level0", {0.32, 0}, 1}, {"Level0", {0.28, 0}, 1}, {}, {"Level0", {0.27, 0}, 1}, {"Level0", {0.23, 0}, 1}, {}, {"Level0", {0.22, 0}, 1}, {"Level0", {0.18, 0}, 1}, {}, {"Level0", {0.17, 0}, 1}, {"Level0", {0.13, 0}, 1}, {}, {"Level0", {0.12, 0}, 1}, {"Level0", {0.08, 0}, 1}};
							};							
							class LevelM10 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelM10", {-0.2, -0.03}, 1}, {"LevelM10", {-0.2, 0}, 1}, {"LevelM10", {-0.15, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.05, 0}, 1}, {}, {"LevelM10", {0.05, 0}, 1}, {"LevelM10", {0.1, 0}, 1}, {}, {"LevelM10", {0.15, 0}, 1}, {"LevelM10", {0.2, 0}, 1}, {"LevelM10", {0.2, -0.03}, 1}};
							};							
							class VALM_1_10 
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10", {-0.22, -0.085}, 1};
								right[] = {"LevelM10", {-0.17, -0.085}, 1};
								down[] = {"LevelM10", {-0.22, -0.035}, 1};
							};							
							class VALM_2_10 : VALM_1_10 
							{
								align = "right";
								pos[] = {"LevelM10", {0.22, -0.085}, 1};
								right[] = {"LevelM10", {0.27, -0.085}, 1};
								down[] = {"LevelM10", {0.22, -0.035}, 1};
							};							
							class LevelP10 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelP10", {-0.2, 0.03}, 1}, {"LevelP10", {-0.2, 0}, 1}, {"LevelP10", {-0.05, 0}, 1}, {}, {"LevelP10", {0.05, 0}, 1}, {"LevelP10", {0.2, 0}, 1}, {"LevelP10", {0.2, 0.03}, 1}};
							};							
							class VALP_1_10 
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10", {-0.22, 0.035}, 1};
								right[] = {"LevelP10", {-0.17, 0.035}, 1};
								down[] = {"LevelP10", {-0.22, 0.085}, 1};
							};						
							class VALP_2_10 : VALP_1_10 
							{
								align = "right";
								pos[] = {"LevelP10", {0.22, 0.035}, 1};
								right[] = {"LevelP10", {0.27, 0.035}, 1};
								down[] = {"LevelP10", {0.22, 0.085}, 1};
							};							
							class LevelM20 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelM20", {-0.2, -0.03}, 1}, {"LevelM20", {-0.2, 0}, 1}, {"LevelM20", {-0.15, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.05, 0}, 1}, {}, {"LevelM20", {0.05, 0}, 1}, {"LevelM20", {0.1, 0}, 1}, {}, {"LevelM20", {0.15, 0}, 1}, {"LevelM20", {0.2, 0}, 1}, {"LevelM20", {0.2, -0.03}, 1}};
							};							
							class VALM_1_20 
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20", {-0.22, -0.085}, 1};
								right[] = {"LevelM20", {-0.17, -0.085}, 1};
								down[] = {"LevelM20", {-0.22, -0.035}, 1};
							};							
							class VALM_2_20 : VALM_1_20 
							{
								align = "right";
								pos[] = {"LevelM20", {0.22, -0.085}, 1};
								right[] = {"LevelM20", {0.27, -0.085}, 1};
								down[] = {"LevelM20", {0.22, -0.035}, 1};
							};						
							class LevelP20 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelP20", {-0.2, 0.03}, 1}, {"LevelP20", {-0.2, 0}, 1}, {"LevelP20", {-0.05, 0}, 1}, {}, {"LevelP20", {0.05, 0}, 1}, {"LevelP20", {0.2, 0}, 1}, {"LevelP20", {0.2, 0.03}, 1}};
							};						
							class VALP_1_20 
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20", {-0.22, 0.035}, 1};
								right[] = {"LevelP20", {-0.17, 0.035}, 1};
								down[] = {"LevelP20", {-0.22, 0.085}, 1};
							};						
							class VALP_2_20 : VALP_1_20 
							{
								align = "right";
								pos[] = {"LevelP20", {0.22, 0.035}, 1};
								right[] = {"LevelP20", {0.27, 0.035}, 1};
								down[] = {"LevelP20", {0.22, 0.085}, 1};
							};							
							class LevelM30 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelM30", {-0.2, -0.03}, 1}, {"LevelM30", {-0.2, 0}, 1}, {"LevelM30", {-0.15, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.05, 0}, 1}, {}, {"LevelM30", {0.05, 0}, 1}, {"LevelM30", {0.1, 0}, 1}, {}, {"LevelM30", {0.15, 0}, 1}, {"LevelM30", {0.2, 0}, 1}, {"LevelM30", {0.2, -0.03}, 1}};
							};							
							class VALM_1_30 
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30", {-0.22, -0.085}, 1};
								right[] = {"LevelM30", {-0.17, -0.085}, 1};
								down[] = {"LevelM30", {-0.22, -0.035}, 1};
							};							
							class VALM_2_30 : VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30", {0.22, -0.085}, 1};
								right[] = {"LevelM30", {0.27, -0.085}, 1};
								down[] = {"LevelM30", {0.22, -0.035}, 1};
							};							
							class LevelP30 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelP30", {-0.2, 0.03}, 1}, {"LevelP30", {-0.2, 0}, 1}, {"LevelP30", {-0.05, 0}, 1}, {}, {"LevelP30", {0.05, 0}, 1}, {"LevelP30", {0.2, 0}, 1}, {"LevelP30", {0.2, 0.03}, 1}};
							};						
							class VALP_1_30 
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30", {-0.22, 0.035}, 1};
								right[] = {"LevelP30", {-0.17, 0.035}, 1};
								down[] = {"LevelP30", {-0.22, 0.085}, 1};
							};							
							class VALP_2_30 : VALP_1_30 
							{
								align = "right";
								pos[] = {"LevelP30", {0.22, 0.035}, 1};
								right[] = {"LevelP30", {0.27, 0.035}, 1};
								down[] = {"LevelP30", {0.22, 0.085}, 1};
							};							
							class LevelM40 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelM40", {-0.2, -0.03}, 1}, {"LevelM40", {-0.2, 0}, 1}, {"LevelM40", {-0.15, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.05, 0}, 1}, {}, {"LevelM40", {0.05, 0}, 1}, {"LevelM40", {0.1, 0}, 1}, {}, {"LevelM40", {0.15, 0}, 1}, {"LevelM40", {0.2, 0}, 1}, {"LevelM40", {0.2, -0.03}, 1}};
							};							
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40", {-0.22, -0.085}, 1};
								right[] = {"LevelM40", {-0.17, -0.085}, 1};
								down[] = {"LevelM40", {-0.22, -0.035}, 1};
							};							
							class VALM_2_40 : VALM_1_40 
							{
								align = "right";
								pos[] = {"LevelM40", {0.22, -0.085}, 1};
								right[] = {"LevelM40", {0.27, -0.085}, 1};
								down[] = {"LevelM40", {0.22, -0.035}, 1};
							};							
							class LevelP40 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelP40", {-0.2, 0.03}, 1}, {"LevelP40", {-0.2, 0}, 1}, {"LevelP40", {-0.05, 0}, 1}, {}, {"LevelP40", {0.05, 0}, 1}, {"LevelP40", {0.2, 0}, 1}, {"LevelP40", {0.2, 0.03}, 1}};
							};							
							class VALP_1_40 
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40", {-0.22, 0.035}, 1};
								right[] = {"LevelP40", {-0.17, 0.035}, 1};
								down[] = {"LevelP40", {-0.22, 0.085}, 1};
							};						
							class VALP_2_40 : VALP_1_40 
							{
								align = "right";
								pos[] = {"LevelP40", {0.22, 0.035}, 1};
								right[] = {"LevelP40", {0.27, 0.035}, 1};
								down[] = {"LevelP40", {0.22, 0.085}, 1};
							};							
							class LevelM50 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelM50", {-0.2, -0.03}, 1}, {"LevelM50", {-0.2, 0}, 1}, {"LevelM50", {-0.15, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.05, 0}, 1}, {}, {"LevelM50", {0.05, 0}, 1}, {"LevelM50", {0.1, 0}, 1}, {}, {"LevelM50", {0.15, 0}, 1}, {"LevelM50", {0.2, 0}, 1}, {"LevelM50", {0.2, -0.03}, 1}};
							};							
							class VALM_1_50 
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50", {-0.22, -0.085}, 1};
								right[] = {"LevelM50", {-0.17, -0.085}, 1};
								down[] = {"LevelM50", {-0.22, -0.035}, 1};
							};							
							class VALM_2_50 : VALM_1_50 
							{
								align = "right";
								pos[] = {"LevelM50", {0.22, -0.085}, 1};
								right[] = {"LevelM50", {0.27, -0.085}, 1};
								down[] = {"LevelM50", {0.22, -0.035}, 1};
							};						
							class LevelP50 : Level0 
							{
								type = "line";
								width = 3;
								points[] = {{"LevelP50", {-0.2, 0.03}, 1}, {"LevelP50", {-0.2, 0}, 1}, {"LevelP50", {-0.05, 0}, 1}, {}, {"LevelP50", {0.05, 0}, 1}, {"LevelP50", {0.2, 0}, 1}, {"LevelP50", {0.2, 0.03}, 1}};
							};							
							class VALP_1_50 
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50", {-0.22, 0.035}, 1};
								right[] = {"LevelP50", {-0.17, 0.035}, 1};
								down[] = {"LevelP50", {-0.22, 0.085}, 1};
							};							
							class VALP_2_50 : VALP_1_50 
							{
								align = "right";
								pos[] = {"LevelP50", {0.22, 0.035}, 1};
								right[] = {"LevelP50", {0.27, 0.035}, 1};
								down[] = {"LevelP50", {0.22, 0.085}, 1};
							};
						};
					};					
					class HorizonBankRot 
					{
						type = "line";
						width = 3;
						points[] = {{"HorizonBankRot", {0, 0.25}, 1}, {"HorizonBankRot", {-0.01, 0.23}, 1}, {"HorizonBankRot", {0.01, 0.23}, 1}, {"HorizonBankRot", {0, 0.25}, 1}};
					};					
					class Static_HBOX 
					{
						clipTL[] = {0, 1};
						clipBR[] = {1, 0};
						type = "line";
						width = 5;
						points[] = {{{0.5-0.1, 0.9-0.04}, 1}, {{0.5-0.1, 0.9+0.04}, 1}, {{0.5+0.1, 0.9+0.04}, 1}, {{0.5+0.1, 0.9-0.04}, 1}, {{0.5-0.1, 0.9-0.04}, 1}, {}, {{0.5-0.1, 0.9-0.04+0.012}, 1}, {{0.5-0.092, 0.9-0.04+0.012}, 1}, {}, {{0.5+0.1, 0.9-0.04+0.012}, 1}, {{0.5+0.092, 0.9-0.04+0.012}, 1}, {}, {{0.5, 0.9-0.04}, 1}, {{0.5, 0.9-0.032}, 1}, {}, {{0.5, 0.9+0.04}, 1}, {{0.5, 0.9+0.032}, 1}, {}};
					};				
					class Gunner_HAD 
					{
						type = "line";
						width = 6;
						points[] = {{"GunnerAim", {-0.015, -0.008}, 1}, {"GunnerAim", {-0.015, 0.008}, 1}, {"GunnerAim", {0.015, 0.008}, 1}, {"GunnerAim", {0.015, -0.008}, 1}, {"GunnerAim", {-0.015, -0.008}, 1}};
					};					
					class Slip_ball_group 
					{
						class Slip_bars 
						{
							type = "line";
							width = 4;
							points[] = {{{0.5-0.018, 0.9-0.04}, 1}, {{0.5-0.018, 0.9-0.075}, 1}, {}, {{0.5+0.018, 0.9-0.04}, 1}, {{0.5+0.018, 0.9-0.075}, 1}};
						};						
						class Slip_ball 
						{
							type = "line";
							width = 6;
							points[] = {{"Velocity_slip", 1, {0 * 0.75, -0.02 * 0.75}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.75, -0.01732 * 0.75}, 1}, {"Velocity_slip", 1, {0.01732 * 0.75, -0.0099999998 * 0.75}, 1}, {"Velocity_slip", 1, {0.02 * 0.75, 0 * 0.75}, 1}, {"Velocity_slip", 1, {0.01732 * 0.75, 0.0099999998 * 0.75}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.75, 0.01732 * 0.75}, 1}, {"Velocity_slip", 1, {0 * 0.75, 0.02 * 0.75}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.75, 0.01732 * 0.75}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.75, 0.0099999998 * 0.75}, 1}, {"Velocity_slip", 1, {-0.02 * 0.75, 0 * 0.75}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.75, -0.0099999998 * 0.75}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.75, -0.01732 * 0.75}, 1}, {"Velocity_slip", 1, {0 * 0.75, -0.02 * 0.75}, 1}, {}, {"Velocity_slip", 1, {0 * 0.6, -0.02 * 0.6}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.6, -0.01732 * 0.6}, 1}, {"Velocity_slip", 1, {0.01732 * 0.6, -0.0099999998 * 0.6}, 1}, {"Velocity_slip", 1, {0.02 * 0.6, 0 * 0.6}, 1}, {"Velocity_slip", 1, {0.01732 * 0.6, 0.0099999998 * 0.6}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.6, 0.01732 * 0.6}, 1}, {"Velocity_slip", 1, {0 * 0.6, 0.02 * 0.6}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.6, 0.01732 * 0.6}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.6, 0.0099999998 * 0.6}, 1}, {"Velocity_slip", 1, {-0.02 * 0.6, 0 * 0.6}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.6, -0.0099999998 * 0.6}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.6, -0.01732 * 0.6}, 1}, {"Velocity_slip", 1, {0 * 0.6, -0.02 * 0.6}, 1}, {}, {"Velocity_slip", 1, {0 * 0.5, -0.02 * 0.5}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.5, -0.01732 * 0.5}, 1}, {"Velocity_slip", 1, {0.01732 * 0.5, -0.0099999998 * 0.5}, 1}, {"Velocity_slip", 1, {0.02 * 0.5, 0 * 0.5}, 1}, {"Velocity_slip", 1, {0.01732 * 0.5, 0.0099999998 * 0.5}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.5, 0.01732 * 0.5}, 1}, {"Velocity_slip", 1, {0 * 0.5, 0.02 * 0.5}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.5, 0.01732 * 0.5}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.5, 0.0099999998 * 0.5}, 1}, {"Velocity_slip", 1, {-0.02 * 0.5, 0 * 0.5}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.5, -0.0099999998 * 0.5}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.5, -0.01732 * 0.5}, 1}, {"Velocity_slip", 1, {0 * 0.5, -0.02 * 0.5}, 1}, {}, {"Velocity_slip", 1, {0 * 0.4, -0.02 * 0.4}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.4, -0.01732 * 0.4}, 1}, {"Velocity_slip", 1, {0.01732 * 0.4, -0.0099999998 * 0.4}, 1}, {"Velocity_slip", 1, {0.02 * 0.4, 0 * 0.4}, 1}, {"Velocity_slip", 1, {0.01732 * 0.4, 0.0099999998 * 0.4}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.4, 0.01732 * 0.4}, 1}, {"Velocity_slip", 1, {0 * 0.4, 0.02 * 0.4}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.4, 0.01732 * 0.4}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.4, 0.0099999998 * 0.4}, 1}, {"Velocity_slip", 1, {-0.02 * 0.4, 0 * 0.4}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.4, -0.0099999998 * 0.4}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.4, -0.01732 * 0.4}, 1}, {"Velocity_slip", 1, {0 * 0.4, -0.02 * 0.4}, 1}, {}, {"Velocity_slip", 1, {0 * 0.30, -0.02 * 0.30}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.30, -0.01732 * 0.30}, 1}, {"Velocity_slip", 1, {0.01732 * 0.30, -0.0099999998 * 0.30}, 1}, {"Velocity_slip", 1, {0.02 * 0.30, 0 * 0.30}, 1}, {"Velocity_slip", 1, {0.01732 * 0.30, 0.0099999998 * 0.30}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.30, 0.01732 * 0.30}, 1}, {"Velocity_slip", 1, {0 * 0.30, 0.02 * 0.30}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.30, 0.01732 * 0.30}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.30, 0.0099999998 * 0.30}, 1}, {"Velocity_slip", 1, {-0.02 * 0.30, 0 * 0.30}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.30, -0.0099999998 * 0.30}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.30, -0.01732 * 0.30}, 1}, {"Velocity_slip", 1, {0 * 0.30, -0.02 * 0.30}, 1}, {}, {"Velocity_slip", 1, {0 * 0.20, -0.02 * 0.20}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.20, -0.01732 * 0.20}, 1}, {"Velocity_slip", 1, {0.01732 * 0.20, -0.0099999998 * 0.20}, 1}, {"Velocity_slip", 1, {0.02 * 0.20, 0 * 0.20}, 1}, {"Velocity_slip", 1, {0.01732 * 0.20, 0.0099999998 * 0.20}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.20, 0.01732 * 0.20}, 1}, {"Velocity_slip", 1, {0 * 0.20, 0.02 * 0.20}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.20, 0.01732 * 0.20}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.20, 0.0099999998 * 0.20}, 1}, {"Velocity_slip", 1, {-0.02 * 0.20, 0 * 0.20}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.20, -0.0099999998 * 0.20}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.20, -0.01732 * 0.20}, 1}, {"Velocity_slip", 1, {0 * 0.20, -0.02 * 0.20}, 1}, {}, {"Velocity_slip", 1, {0 * 0.1, -0.02 * 0.1}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.1, -0.01732 * 0.1}, 1}, {"Velocity_slip", 1, {0.01732 * 0.1, -0.0099999998 * 0.1}, 1}, {"Velocity_slip", 1, {0.02 * 0.1, 0 * 0.1}, 1}, {"Velocity_slip", 1, {0.01732 * 0.1, 0.0099999998 * 0.1}, 1}, {"Velocity_slip", 1, {0.0099999998 * 0.1, 0.01732 * 0.1}, 1}, {"Velocity_slip", 1, {0 * 0.1, 0.02 * 0.1}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.1, 0.01732 * 0.1}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.1, 0.0099999998 * 0.1}, 1}, {"Velocity_slip", 1, {-0.02 * 0.1, 0 * 0.1}, 1}, {"Velocity_slip", 1, {-0.01732 * 0.1, -0.0099999998 * 0.1}, 1}, {"Velocity_slip", 1, {-0.0099999998 * 0.1, -0.01732 * 0.1}, 1}, {"Velocity_slip", 1, {0 * 0.1, -0.02 * 0.1}, 1}};
						};
					};				
					class Centerline 
					{
						type = "line";
						width = 5;
						points[] = {{{0.5, 0.48}, 1}, {{0.5, 0.45}, 1}, {}, {{0.5, 0.52}, 1}, {{0.5, 0.55}, 1}, {}, {{0.48, 0.5}, 1}, {{0.45, 0.5}, 1}, {}, {{0.52, 0.5}, 1}, {{0.55, 0.5}, 1}, {}};
					};				
					class WeaponName 
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.61, 0.86}, 1};
						right[] = {{0.65, 0.86}, 1};
						down[] = {{0.61, 0.9}, 1};
					};				
					class Ammo_GUN 
					{
						type = "group";
						condition = "mgun";						
						class Ammo_count_GUN 
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61, 0.89}, 1};
							right[] = {{0.65, 0.89}, 1};
							down[] = {{0.61, 0.93}, 1};
						};
					};					
					class Ammo_RKT 
					{
						type = "group";
						condition = "rocket";					
						class Ammo_count_RKT 
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61, 0.89}, 1};
							right[] = {{0.65, 0.89}, 1};
							down[] = {{0.61, 0.93}, 1};
						};
					};					
					class Ammo_AGM 
					{
						type = "group";
						condition = "AAmissile";					
						class Ammo_count_AGM 
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61, 0.89}, 1};
							right[] = {{0.65, 0.89}, 1};
							down[] = {{0.61, 0.93}, 1};
						};
					};					
					class Ammo_AAM 
					{
						type = "group";
						condition = "ATmissile";						
						class Ammo_count_AAM 
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61, 0.89}, 1};
							right[] = {{0.65, 0.89}, 1};
							down[] = {{0.61, 0.93}, 1};
						};
					};					
					class Ammo_Bomb 
					{
						type = "group";
						condition = "Bomb";						
						class Ammo_count_Bomb 
						{
							type = "text";
							source = "ammo";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.61, 0.89}, 1};
							right[] = {{0.65, 0.89}, 1};
							down[] = {{0.61, 0.93}, 1};
						};
					};					
					class LightsGroup 
					{
						type = "group";
						condition = "lights";						
						class LightsText 
						{
							type = "text";
							source = "static";
							text = LIGHTS;
							align = "right";
							scale = 1;
							pos[] = {{0.03, 0.53 + 0.055}, 1};
							right[] = {{0.07, 0.53 + 0.055}, 1};
							down[] = {{0.03, 0.53 + 0.095}, 1};
						};
					};				
					class CollisionLightsGroup 
					{
						type = "group";
						condition = "collisionlights";						
						class CollisionLightsText 
						{
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.03, 0.53 + 0.105}, 1};
							right[] = {{0.07, 0.53 + 0.105}, 1};
							down[] = {{0.03, 0.53 + 0.145}, 1};
						};
					};					
					class ATMissileTOFGroup 
					{
						condition = "ATmissile";
						type = "group";						
						class TOFtext 
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61, 0.92}, 1};
							right[] = {{0.65, 0.92}, 1};
							down[] = {{0.61, 0.96}, 1};
						};						
						class TOFnumber 
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69, 0.92}, 1};
							right[] = {{0.73, 0.92}, 1};
							down[] = {{0.69, 0.96}, 1};
						};
					};					
					class LaserTOFGroup 
					{
						condition = "Bomb";
						type = "group";					
						class TOFtext 
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61, 0.92}, 1};
							right[] = {{0.65, 0.92}, 1};
							down[] = {{0.61, 0.96}, 1};
						};						
						class TOFnumber 
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69, 0.92}, 1};
							right[] = {{0.73, 0.92}, 1};
							down[] = {{0.69, 0.96}, 1};
						};
					};				
					class RocketTOFGroup 
					{
						condition = "Rocket";
						type = "group";						
						class TOFtext 
						{
							type = "text";
							align = "right";
							source = "static";
							text = "TOF=";
							scale = 1;
							pos[] = {{0.61, 0.92}, 1};
							right[] = {{0.65, 0.92}, 1};
							down[] = {{0.61, 0.96}, 1};
						};						
						class TOFnumber 
						{
							type = "text";
							source = "targetDist";
							sourcescale = 0.0025;
							align = "right";
							scale = 1;
							pos[] = {{0.69, 0.92}, 1};
							right[] = {{0.73, 0.92}, 1};
							down[] = {{0.69, 0.96}, 1};
						};
					};				
					class RangeNumber 
					{
						type = "text";
						source = "targetDist";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.39, 0.89}, 1};
						right[] = {{0.43, 0.89}, 1};
						down[] = {{0.39, 0.93}, 1};
					};				
					class RangeText 
					{
						type = "text";
						source = "static";
						text = RNG;
						align = "left";
						scale = 1;
						pos[] = {{0.39, 0.86}, 1};
						right[] = {{0.43, 0.86}, 1};
						down[] = {{0.39, 0.9}, 1};
					};					
					class SpeedNumber 
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 1.94384;
						pos[] = {{0.03, 0.475}, 1};
						right[] = {{0.08, 0.475}, 1};
						down[] = {{0.03, 0.525}, 1};
					};					
					class TorqueNumber 
					{
						condition = "simulRTD";						
						class Torque_number 
						{
							type = "text";
							align = "left";
							scale = 1;
							source = "rtdRotorTorque";
							sourceScale = 290;
							pos[] = {{0.065, 0.175}, 1};
							right[] = {{0.115, 0.175}, 1};
							down[] = {{0.065, 0.225}, 1};
						};						
						class Torquetext 
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{0.07, 0.175}, 1};
							right[] = {{0.12, 0.175}, 1};
							down[] = {{0.07, 0.225}, 1};
						};
					};					
					class AltNumber : SpeedNumber 
					{
						align = "right";
						source = "altitudeAGL";
						sourceScale = 3.28084;
						pos[] = {{0.83, 0.475}, 1};
						right[] = {{0.88, 0.475}, 1};
						down[] = {{0.83, 0.525}, 1};
					};					
					class ASLNumber 
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 3.28084;
						align = "right";
						scale = 1;
						pos[] = {{0.835, 0.18}, 1};
						right[] = {{0.875, 0.18}, 1};
						down[] = {{0.835, 0.22}, 1};
					};				
					class VspeedScalePosta 
					{
						type = "line";
						width = 5;
						points[] = {{{0.98, 0.2}, 1}, {{1, 0.2}, 1}, {}, {{0.93, 0.2}, 1}, {{0.95, 0.2}, 1}, {}, {{0.98, 0.35}, 1}, {{1, 0.35}, 1}, {}, {{0.93, 0.35}, 1}, {{0.95, 0.35}, 1}, {}, {{0.94, 0.38}, 1}, {{0.95, 0.38}, 1}, {}, {{0.94, 0.41}, 1}, {{0.95, 0.41}, 1}, {}, {{0.94, 0.44}, 1}, {{0.95, 0.44}, 1}, {}, {{0.94, 0.47}, 1}, {{0.95, 0.47}, 1}, {}, {{0.98, 0.5}, 1}, {{1, 0.5}, 1}, {}, {{0.93, 0.5}, 1}, {{0.95, 0.5}, 1}, {}, {{0.94, 0.53}, 1}, {{0.95, 0.53}, 1}, {}, {{0.94, 0.56}, 1}, {{0.95, 0.56}, 1}, {}, {{0.94, 0.59}, 1}, {{0.95, 0.59}, 1}, {}, {{0.94, 0.62}, 1}, {{0.95, 0.62}, 1}, {}, {{0.98, 0.65}, 1}, {{1, 0.65}, 1}, {}, {{0.93, 0.65}, 1}, {{0.95, 0.65}, 1}, {}, {{0.99, 0.68}, 1}, {{0.98, 0.68}, 1}, {}, {{0.99, 0.71}, 1}, {{0.98, 0.71}, 1}, {}, {{0.99, 0.74}, 1}, {{0.98, 0.74}, 1}, {}, {{0.99, 0.77}, 1}, {{0.98, 0.77}, 1}, {}, {{0.98, 0.8}, 1}, {{1, 0.8}, 1}, {}, {{0.93, 0.8}, 1}, {{0.95, 0.8}, 1}, {}};
					};					
					class RadarAltitudeBand 
					{
						clipTL[] = {0, 0.2};
						clipBR[] = {1, 0.8};
						hideValue = 201;						
						class radarbanda 
						{
							type = "line";
							width = 17;
							points[] = {{"RadarAltitudeBone", {0, 0}, 1}, {"RadarAltitudeBone", {0, 0.6}, 1}};
						};
					};				
					class VspeedBand 
					{
						type = "line";
						width = 3;
						points[] = {{"VspeedBone", {-0.01, 0}, 1}, {"VspeedBone", {-0.025, -0.015}, 1}, {"VspeedBone", {-0.025, 0.015}, 1}, {"VspeedBone", {-0.01, 0}, 1}, {}};
					};					
					class HeadingNumber : SpeedNumber 
					{
						source = "heading";
						sourceScale = 1;
						align = "center";
						pos[] = {{0.5, 0.01}, 1};
						right[] = {{0.56, 0.01}, 1};
						down[] = {{0.5, 0.06}, 1};
					};					
					class Center_box 
					{
						type = "line";
						width = 3;
						points[] = {{{0.44, 0.005}, 1}, {{0.44 + 0.12, 0.005}, 1}, {{0.44 + 0.12, 0.005 + 0.06}, 1}, {{0.44, 0.005 + 0.06}, 1}, {{0.44, 0.005}, 1}};
					};					
					class HeadingArrow 
					{
						type = "line";
						width = 7;
						points[] = {{{0.5, 0.128 + 0.03}, 1}, {{0.5, 0.128}, 1}};
					};					
					class HeadingScale 
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 5;
						top = 0.12;
						center = 0.5;
						bottom = 0.88;
						lineXleft = 0.03 + 0.085;
						lineYright = 0.02 + 0.085;
						lineXleftMajor = 0.04 + 0.085;
						lineYrightMajor = 0.02 + 0.085;
						majorLineEach = 3;
						numberEach = 3;
						step = 10;
						stepSize = 0.05;
						align = "center";
						scale = 1;
						pos[] = {0.119, 0.0 + 0.065};
						right[] = {0.159, 0.0 + 0.065};
						down[] = {0.119, 0.04 + 0.065};
					};					
					class Fuel_Text 
					{
						type = "text";
						source = "static";
						text = "Fuel";
						align = "right";
						scale = 1;
						pos[] = {{0.03, 0.9}, 1};
						right[] = {{0.07, 0.9}, 1};
						down[] = {{0.03, 0.94}, 1};
					};					
					class Fuel_Number 
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {{0.1, 0.9}, 1};
						right[] = {{0.14, 0.9}, 1};
						down[] = {{0.1, 0.94}, 1};
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04, 0.04, 0.1};
				helmetRight[] = {0.08, 0, 0};
				helmetDown[] = {0, -0.08, 0};
			};			
			class Kimi_HUD_2 
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.082,0.408,0.039,0.5};
				font = "ArchimotoRoundedThin";
				enableParallax = 0;				
				class Bones 
				{
					class Velocity 
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.75, 0.75};
					};				
					class ForwardVec1 
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.25, 0.25};
					};					
					class ForwardVec 
					{
						type = "vector";
						source = "forward";
						pos0[] = {0, 0};
						pos10[] = {0.253, 0.253};
					};					
					class WeaponAim 
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.753, 0.753};
					};					
					class WeaponAim1 
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0, 0};
						pos10[] = {0.253, 0.23};
					};				
					class Target 
					{
						type = "vector";
						source = "target";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.753, 0.753};
					};					
					class RadarContact 
					{
						type = "fixed";
						pos[] = {0, 0};
					};
				};				
				class Draw 
				{
					color[] = {0.18, 1, 0.18};
					alpha = 1;
					condition = "on";					
					class PlaneMovementCrosshair 
					{
						type = "line";
						width = 7;
						points[] = {{"ForwardVec1", 1, "Velocity", 1, {0, -0.02}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0.01, -0.01732}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0.01732, -0.01}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0.02, 0}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0.01732, 0.01}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0.01, 0.01732}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0, 0.02}, 1}, {"ForwardVec1", 1, "Velocity", 1, {-0.01, 0.01732}, 1}, {"ForwardVec1", 1, "Velocity", 1, {-0.01732, 0.01}, 1}, {"ForwardVec1", 1, "Velocity", 1, {-0.02, 0}, 1}, {"ForwardVec1", 1, "Velocity", 1, {-0.01732, -0.01}, 1}, {"ForwardVec1", 1, "Velocity", 1, {-0.01, -0.01732}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0, -0.02}, 1}, {}, {"ForwardVec1", 1, "Velocity", 1, {0.04, 0}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0.02, 0}, 1}, {}, {"ForwardVec1", 1, "Velocity", 1, {-0.04, 0}, 1}, {"ForwardVec1", 1, "Velocity", 1, {-0.02, 0}, 1}, {}, {"ForwardVec1", 1, "Velocity", 1, {0, -0.04}, 1}, {"ForwardVec1", 1, "Velocity", 1, {0, -0.02}, 1}};
					};					
					class Gunner_AIM 
					{
						type = "group";						
						class Circle 
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec", 1, "WeaponAim", 1, {0, -0.015}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0, -0.03}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0, -0.0325}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0, -0.0475}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0, 0.015}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0, 0.03}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0, 0.0325}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0, 0.0475}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {-0.015, 0}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.03, 0}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0325, 0}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0475, 0}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0.015, 0}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.03, 0}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0.0325, 0}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0475, 0}, 1}};
						};
					};					
					class GunCross 
					{
						condition = "mgun";						
						class Circle 
						{
							type = "line";
							width = 9;
							points[] = {{"ForwardVec", 1, "WeaponAim", 1, {0, -0.05}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0, -0.015}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0, 0.015}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0, 0.05}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {-0.05, 0}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.015, 0}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0.015, 0}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.05, 0}, 1}, {}};
						};
					};					
					class RocketCross 
					{
						condition = "rocket";
						width = 6;						
						class Circle 
						{
							type = "line";
							width = 6;
							points[] = {{"ForwardVec", 1, "WeaponAim", 1, {-0.05, -0.08}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.05, -0.08}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0, -0.08}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0, 0.08}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {-0.05, 0.08}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.05, 0.08}, 1}, {}};
						};
					};					
					class AT_Aim 
					{
						condition = "ATmissile";
						width = 2;						
						class Circle 
						{
							type = "line";
							width = 2;
							points[] = {{"ForwardVec", 1, "WeaponAim", 1, {-0.1, -0.1}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1, -0.1}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1, 0.1}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1, 0.1}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1, -0.1}, 1}};
						};
					};					
					class AA_aim 
					{
						condition = "AAmissile";						
						class Circle 
						{
							type = "line";
							width = 2.5;
							points[] = {{"ForwardVec", 1, "WeaponAim", 1, {0 / 4, -0.248559 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0434 / 4, -0.244781 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0855 / 4, -0.233571 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.125 / 4, -0.215252 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1607 / 4, -0.190396 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1915 / 4, -0.159774 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2165 / 4, -0.12428 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.234925 / 4, -0.0850072 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2462 / 4, -0.0431499 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.25 / 4, 0 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2462 / 4, 0.0431499 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.234925 / 4, 0.0850072 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2165 / 4, 0.12428 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1915 / 4, 0.159774 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1607 / 4, 0.190396 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.125 / 4, 0.215252 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0855 / 4, 0.233571 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0434 / 4, 0.244781 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0 / 4, 0.248559 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0434 / 4, 0.244781 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0855 / 4, 0.233571 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.125 / 4, 0.215252 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1607 / 4, 0.190396 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1915 / 4, 0.159774 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2165 / 4, 0.12428 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.234925 / 4, 0.0850072 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2462 / 4, 0.0431499 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.25 / 4, 0 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2462 / 4, -0.0431499 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.234925 / 4, -0.0850072 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2165 / 4, -0.12428 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1915 / 4, -0.159774 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1607 / 4, -0.190396 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.125 / 4, -0.215252 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0855 / 4, -0.233571 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0434 / 4, -0.244781 / 4}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0 / 4, -0.248559 / 4}, 1}, {}, {"ForwardVec", 1, "WeaponAim", 1, {0 / 2, -0.248559 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0434 / 2, -0.244781 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0855 / 2, -0.233571 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.125 / 2, -0.215252 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1607 / 2, -0.190396 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1915 / 2, -0.159774 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2165 / 2, -0.12428 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.234925 / 2, -0.0850072 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2462 / 2, -0.0431499 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.25 / 2, 0 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2462 / 2, 0.0431499 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.234925 / 2, 0.0850072 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.2165 / 2, 0.12428 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1915 / 2, 0.159774 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.1607 / 2, 0.190396 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.125 / 2, 0.215252 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0855 / 2, 0.233571 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0.0434 / 2, 0.244781 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0 / 2, 0.248559 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0434 / 2, 0.244781 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0855 / 2, 0.233571 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.125 / 2, 0.215252 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1607 / 2, 0.190396 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1915 / 2, 0.159774 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2165 / 2, 0.12428 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.234925 / 2, 0.0850072 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2462 / 2, 0.0431499 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.25 / 2, 0 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2462 / 2, -0.0431499 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.234925 / 2, -0.0850072 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.2165 / 2, -0.12428 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1915 / 2, -0.159774 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.1607 / 2, -0.190396 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.125 / 2, -0.215252 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0855 / 2, -0.233571 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {-0.0434 / 2, -0.244781 / 2}, 1}, {"ForwardVec", 1, "WeaponAim", 1, {0 / 2, -0.248559 / 2}, 1}};
						};
					};					
					class TargetACQ 
					{
						type = "line";
						width = 2;
						points[] = {{"ForwardVec", 1, "target", {0, -0.06}, 1}, {"ForwardVec", 1, "target", {0, -0.055}, 1}, {}, {"ForwardVec", 1, "target", {0, -0.05}, 1}, {"ForwardVec", 1, "target", {0, -0.045}, 1}, {}, {"ForwardVec", 1, "target", {0, -0.04}, 1}, {"ForwardVec", 1, "target", {0, -0.035}, 1}, {}, {"ForwardVec", 1, "target", {0, -0.03}, 1}, {"ForwardVec", 1, "target", {0, -0.025}, 1}, {}, {"ForwardVec", 1, "target", {0, -0.02}, 1}, {"ForwardVec", 1, "target", {0, -0.015}, 1}, {}, {"ForwardVec", 1, "target", {0, -0.01}, 1}, {"ForwardVec", 1, "target", {0, -0.005}, 1}, {}, {"ForwardVec", 1, "target", {0, 0}, 1}, {"ForwardVec", 1, "target", {0, 0}, 1}, {}, {"ForwardVec", 1, "target", {0, 0.06}, 1}, {"ForwardVec", 1, "target", {0, 0.055}, 1}, {}, {"ForwardVec", 1, "target", {0, 0.05}, 1}, {"ForwardVec", 1, "target", {0, 0.045}, 1}, {}, {"ForwardVec", 1, "target", {0, 0.04}, 1}, {"ForwardVec", 1, "target", {0, 0.035}, 1}, {}, {"ForwardVec", 1, "target", {0, 0.03}, 1}, {"ForwardVec", 1, "target", {0, 0.025}, 1}, {}, {"ForwardVec", 1, "target", {0, 0.02}, 1}, {"ForwardVec", 1, "target", {0, 0.015}, 1}, {}, {"ForwardVec", 1, "target", {0, 0.01}, 1}, {"ForwardVec", 1, "target", {0, 0.005}, 1}, {}, {"ForwardVec", 1, "target", {-0.06, 0}, 1}, {"ForwardVec", 1, "target", {-0.055, 0}, 1}, {}, {"ForwardVec", 1, "target", {-0.05, 0}, 1}, {"ForwardVec", 1, "target", {-0.045, 0}, 1}, {}, {"ForwardVec", 1, "target", {-0.04, 0}, 1}, {"ForwardVec", 1, "target", {-0.035, 0}, 1}, {}, {"ForwardVec", 1, "target", {-0.03, 0}, 1}, {"ForwardVec", 1, "target", {-0.025, 0}, 1}, {}, {"ForwardVec", 1, "target", {-0.02, 0}, 1}, {"ForwardVec", 1, "target", {-0.015, 0}, 1}, {}, {"ForwardVec", 1, "target", {-0.01, 0}, 1}, {"ForwardVec", 1, "target", {-0.005, 0}, 1}, {}, {"ForwardVec", 1, "target", {0.06, 0}, 1}, {"ForwardVec", 1, "target", {0.055, 0}, 1}, {}, {"ForwardVec", 1, "target", {0.05, 0}, 1}, {"ForwardVec", 1, "target", {0.045, 0}, 1}, {}, {"ForwardVec", 1, "target", {0.04, 0}, 1}, {"ForwardVec", 1, "target", {0.035, 0}, 1}, {}, {"ForwardVec", 1, "target", {0.03, 0}, 1}, {"ForwardVec", 1, "target", {0.025, 0}, 1}, {}, {"ForwardVec", 1, "target", {0.02, 0}, 1}, {"ForwardVec", 1, "target", {0.015, 0}, 1}, {}, {"ForwardVec", 1, "target", {0.01, 0}, 1}, {"ForwardVec", 1, "target", {0.005, 0}, 1}, {}};
					};					

				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.035, 0.035, 0.1};
				helmetRight[] = {0.07, 0, 0};
				helmetDown[] = {0, -0.07, 0};
			};

			
		};
		class AnimationSources: AnimationSources
		{
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
				animPeriod=10;
				initPhase=0;
			};
			class rotor_blade_1_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_2_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_3_pitch
			{
				source="collective";
				animPeriod=0.1;
				initPhase=1;
			};
			class rotor_blade_4_pitch
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
			class MainTurret: MainTurret
			{
			};
			class GAU21_Left: MainTurret
			{
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
				gunnerAction="GAU21Gunner";
				gunnerInAction="GAU21Gunner";

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
				gunnerLeftHandAnimName="GAU21_ELEV_L";
				gunnerRightHandAnimName= "GAU21_ELEV_L";
				gunnerLeftLegAnimName="GAU21_GunnerL_Legs";
				gunnerRightLegAnimName= "GAU21_GunnerL_Legs";
				primaryGunner=0;
				memoryPointGun="GAU21L_End";
				memoryPointGunnerOptics="gunnerview_3";
				memoryPointsGetInGunner = "pos side 4";
				memoryPointsGetInGunnerDir = "pos side 4 dir";
			};
			class M134_Right: MainTurret
			{
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
			class CargoTurret_05: CargoTurret_04
			{
				gunnerName = "Passenger (Left Bench 3)";
				memoryPointsGetInGunner="pos side 2";
				memoryPointsGetInGunnerDir="pos side 2 dir";
				proxyIndex = 7;
				maxTurn = 3;
				minTurn = -55;
			};


			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="UH60_Pilot";
				gunnerInAction="UH60_Pilot";
				canHideGunner=0;
				viewGunnerInExternal=1;
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				selectionFireAnim="";
				preciseGetInOut=1;
				GunnerDoor="Door_LF";
				proxyIndex=2;
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
				body = "tgp_turet";
				gun = "tgp_ball";

				// Animation source
				animationSourceBody="tgp_turett";
				animationSourceGun="tgp_ball";
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
				memoryPointGunnerOptics = "commanderview";
				gunBeg="gun_end";
				gunEnd="gun_begin";
				gunnerUsesPilotView = false;
				turretFollowFreeLook = 0;
				class ViewGunner
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initAngleY = 0;
					minFov = 0.25;
					maxFov = 0.9;
					initFov = 0.75;
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
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
	};
};