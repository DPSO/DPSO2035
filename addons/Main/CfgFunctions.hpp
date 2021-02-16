
class DPSO_Main {

	tag = "DPSO";
	class Main {

		file = "z\dpso\Addons\Main\Functions\DPSO";
		class AddCueCards {};
		class ArsenalLoadSave {};
		class Diary {};
		class DynamicSim {};
		class DynamicGroups {};
		class Earplugs {};
		class FlipVehicle {};
		class LockCamVehicle {};
		class Logs {};
		class PilotCheck {};
		class QSRepackMags {};
		class TFARSettings {PostInit = 1;};
		class VanillaFatigue {};
		class FindReplaceString {};
		class FindInArrayMap {};
		class voyagerCompass {};
		class clientRepackMagazines {};
		class SafePos {};
		class GetKeys {};
		class GetValues {};
		class DLog {};
		class ObjectsMapper {};
        // class IntLight {};
		class noneg {};
		class novoice { postInit = 1; };
		class advancedSlingLoadingInit { postInit = 1; };
		class advancedTowingInit { postInit = 1; };
	};
};


class CHVD
{
	tag = "CHVD";
	class script
	{
		file = "z\dpso\Addons\Main\Functions\CHVD";
		class onSliderChange {};
		class onLBSelChanged {};
		class onLBSelChanged_syncmode {};
		class onEBinput {};
		class onEBterrainInput {};
		class onEBinput_syncmode {};
		class selTerrainQuality {};
		class updateTerrain {};
		class updateSettings {};
		class updateVehType {};
		class fovViewDistance {};
		class UAVstatus {};
		class openDialog {};
		class localize {};
		class trueZoom {};
		class keyDown {};
		class keyDownTerrain {};
		class init {};
	};
};

class YAINA_F {
	tag = "YAINA_F";

	class General {
		file = "z\dpso\Addons\Main\Functions\YAINA\General";
		class crewNames {};
		class formatDuration {};
		class showFPS {};
		class log {};
		class hintC {};
		class hideTerrainObjects {};
		class GetFunctions {};
    };
};
