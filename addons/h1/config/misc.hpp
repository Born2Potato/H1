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