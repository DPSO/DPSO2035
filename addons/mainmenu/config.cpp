#include "script_component.hpp"


class CfgPatches {

	class DPSO_MainMenu {
		name = "$STR_DPSO_MainMenu_Title";
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"dpso_MAIN"
		};
		units[] = {};
		weapons[] = {};
		author = "$STR_DPSO_MainMenu_Author";
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
