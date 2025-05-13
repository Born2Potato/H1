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
  class uh1y_helicopter_basic_processorcurve
	{
		points[] = {{0,1},{0.1,0.97},{0.2,0.95},{0.3,0.85},{0.4,0.71},{0.5,0.52},{0.6,0.32},{0.7,0.18},{0.8,0.1},{0.9,0.03},{1,0}};
	};
};	
class cfgsound3dprocessors
{
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

class cfgSoundSets
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
class cfgSoundShaders 
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