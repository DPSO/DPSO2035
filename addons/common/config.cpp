#include "script_component.hpp"

class CfgPatches {

	class DPSO_Common {
		name = COMPONENT_NAME;
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"dpso_MAIN"
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
#include "CfgSounds.hpp"
