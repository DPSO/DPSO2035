#include "script_component.hpp"


class CfgPatches {
	
	class DPSO_Gear {
		name = "$STR_DPSO_Gear_Title";
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		author = "$STR_DPSO_Gear_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};
	
};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
