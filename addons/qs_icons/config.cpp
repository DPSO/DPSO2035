#include "script_component.hpp"

class CfgPatches
{
	class DPSO_QSIcons
	{
		author = "AUTHOR";
		name = COMPONENT_NAME;
		url = URL;
		units[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredaddons[] = {"A3_UI_F","cba_main","cba_xeh"};

		authors[] = {"MitchJC"};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers {
    class DPSO_QSIcons_Event {
        init = "call compile preprocessFileLineNumbers 'z\dpso\addons\qs_icons\XEH_preInit.sqf'";
    };
};

class CfgFunctions {
    #include "cfgFunctions.hpp"
};
