#include "script_component.hpp"


class CfgPatches {

	class DPSO_Hints {
		name = COMPONENT_NAME;
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"dpso_MAIN"
		};
		units[] = {};
		weapons[] = {};
		author = "$STR_DPSO_Hints_Author";
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};

};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"

#include "gui\RscHint.hpp"
