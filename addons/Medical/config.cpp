#include "script_component.hpp"


class CfgPatches {

	class DPSO_medical {
		author = AUTHOR;
		requiredVersion = DPSO_REQUIRED_VERSION;
		requiredAddons[] = {
			"dpso_MAIN",
            "ace_arsenal",
            "cba_main",
            "ace_medical",
            "ace_medical_ai",
            "ace_medical_blood",
            "ace_medical_damage",
            "ace_medical_engine",
            "ace_medical_feedback",
            "ace_medical_gui",
            "ace_medical_statemachine",
            "ace_medical_status",
            "ace_medical_treatment",
            "ace_medical_vitals"
		};
		units[] = {};
		weapons[] = {};
		authors[] = {
			"O. Jemineh"
		};
		url = URL;
		VERSION_CONFIG;
	};

};

#include "CfgEventHandlers.hpp"
#include "CfgFunctions.hpp"
