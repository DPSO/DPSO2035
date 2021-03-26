#include "script_component.hpp"


class CfgPatches {

	class DPSO_MainMenu {
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
#include "CfgAddons.hpp"
#include "CfgCommands.hpp"

#include "gui\versionInfo.hpp"
