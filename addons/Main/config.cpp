#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        author = AUTHOR;
		name = COMPONENT_NAME;
        url = URL;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        /* Require CBA and all components below */
        requiredAddons[] = {
			"A3_UI_F",
			"cba_main",
			"cba_xeh",
			"cba_ui",
            "cba_jr"
		};
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class DPSO_Main_Event {
        init = "call compile preprocessFileLineNumbers 'z\dpso\addons\main\XEH_preInit.sqf'";
		
    };
	class No_Neg_Rating {
        init = "[] call DPSO_fnc_noneg";
    };
};


class CfgFactionClasses {    
    class NO_CATEGORY;

    class DPSO: NO_CATEGORY
    {
        displayName = PREFIX;
    };
    class PREFIX: NO_CATEGORY {
        displayName = PREFIX;
    };
    class DPSO_Modules: NO_CATEGORY
	{
		displayName = PREFIX;
	};
    class dpso: NO_CATEGORY {
        displayName = PREFIX;
        priority = 2;
        side = 7;
    };
    class DPSO_Faction: NO_CATEGORY {
		displayName = PREFIX; //Faction name in-game
		icon = LOGO_PATH;
		priority = 0;
		side = 1; // 1 Blufor 2 opfor 3 independant i think.
	};
	class CLASS(IND) {
        displayName = PREFIX;
        icon = LOGO_PATH;
        side = 2;
        priority = 2;
    };
};

class CfgVehicleClasses {
    class PREFIX##_Vehicles {
        displayName = PREFIX;
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

