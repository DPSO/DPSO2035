#include "script_component.hpp"

class CfgPatches
{
	class DPSO_Modules
	{
		author = AUTHOR;
		name = COMPONENT_NAME;
		url = URL;
		units[] = {};
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"A3_UI_F",
			"cba_main",
			"cba_xeh",
			"cba_ui",
            "cba_jr"
		};
		version = DPSO_VERSION;
		authors[] = {"YonV"};
		weapons[] = {};
	};
	class ADDON
	{
		author = AUTHOR;
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {};
        versionDesc = "$STR_DPSO_Addon_Title";
        DPSO_VERSION_CONFIG;
	};
};


class Extended_PreInit_EventHandlers {
    class DPSO_Main_Event {
        init = "call compile preprocessFileLineNumbers 'z\dpso\Addons\Main\XEH_preInit.sqf'";
		
    };
	class No_Neg_Rating {
        init = "[] call DPSO_fnc_noneg";
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class DPSO_Modules: NO_CATEGORY
	{
		displayName = "DPSO";
	};
    class dpso: NO_CATEGORY {
        displayName = "DPSO";
        priority = 2;
        side = 7;
    };
    class DPSO_Faction: NO_CATEGORY {
		displayName = "DPSO"; //Faction name in-game
		icon = LOGO_PATH;
		priority = 0;
		side = 1; // 1 Blufor 2 opfor 3 independant i think.
	};
	class QIPBFT: NO_CATEGORY {
        displayName = "DPSO QIPBFT";
        priority = 2;
        side = 7;
    };
	class CLASS(IND) {
        displayName = "DPSO";
        icon = LOGO_PATH;
        side = 2;
        priority = 2;
    };
};

class CfgFunctions {
    #include "cfgFunctions.hpp"
};

#include "Dialogs\CfgDisplays.hpp"
#include "CfgRespawnTemplates.hpp"
#include "CfgMarkers.hpp"
#include "CfgEden.hpp"
#include "CfgSettings.hpp"
#include "CfgVehicleClasses.hpp"
//#include "displayEden.hpp"
#include "CfgWorlds.hpp"
#include "Functions\CHVD\dialog.hpp"
#include "Functions\YAINA\General\crewNamesTitles.hpp"


class CfgNetworkMessages
{
	class AdvancedTowingRemoteExecClient
	{
		module = "AdvancedTowing";
		parameters[] = {"ARRAY","STRING","OBJECT","BOOL"};
	};
	
	class AdvancedTowingRemoteExecServer
	{
		module = "AdvancedTowing";
		parameters[] = {"ARRAY","STRING","BOOL"};
	};
	class AdvancedSlingLoadingRemoteExecClient
	{
		module = "AdvancedSlingLoading";
		parameters[] = {"ARRAY","STRING","OBJECT","BOOL"};
	};
	
	class AdvancedSlingLoadingRemoteExecServer
	{
		module = "AdvancedSlingLoading";
		parameters[] = {"ARRAY","STRING","BOOL"};
	};
};



class CfgScriptPaths
{
	DPSODisplays="z\dpso\addons\main\Scripts\UI\Displays\";
};

