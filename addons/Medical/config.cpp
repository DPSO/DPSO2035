#include "script_component.hpp"


class CfgPatches {

	class DPSO_medical {
		author = AUTHOR;
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			"DPSO_MAIN",
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

class ace_medical_replacementItems {
    ItemType_401[] = {{"ACE_fieldDressing",2},{"kat_Painkiller",1},{"ACE_tourniquet",2}};
    ItemType_619[] = {{"ACE_fieldDressing",4},{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_salineIV_500",3},{"ACE_tourniquet",2},{"ACE_splint",2}};
};