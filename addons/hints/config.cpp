#include "script_component.hpp"


class CfgPatches {

	class DPSO_Hints {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"DPSO_MAIN"
		};
		units[] = {};
		weapons[] = {};
		author = AUTHOR;
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
