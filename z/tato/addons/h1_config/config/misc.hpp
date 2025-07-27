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
			file="z\tato\addons\h1_uh1y\anim\GAU21Gunner.rtm";
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
	class HornetDisplay
	{
		fonts[]= {"z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay6","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay7","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay8","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay9","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay10","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay11","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay12","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay13","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay14","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay15","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay16","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay17","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay18","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay19","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay20","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay21","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay22","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay23","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay24","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay25","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay26","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay27","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay28","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay29","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay30","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay31","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay34","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay35","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay37","z\tato\addons\h1_ui\Font\HornetDisplay\HornetDisplay46"};
	};
};