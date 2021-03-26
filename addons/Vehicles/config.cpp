#include "script_component.hpp"

class CfgPatches
{
	class DPSO_Vehicles
	{
		author = AUTHOR;
		 name = COMPONENT_NAME;
		url = URL;
		units[] = {
            QCLASS(Heli_I_MH6_Blue),
            QCLASS(Heli_B_MH6_Blue),
            QCLASS(Offroad_I_Black),
            QCLASS(Offroad_B_Black),
            QCLASS(Offroad_I_Armed_Black),
            QCLASS(Offroad_B_Armed_Black),
            QCLASS(Polaris_I_Black),
            QCLASS(Polaris_B_Black),
            QCLASS(Polaris_I_Armed_Black),
            QCLASS(Polaris_B_Armed_Black),
            QCLASS(Polaris_I_AT_Black),
            QCLASS(Polaris_B_AT_Black),
            QCLASS(Polaris_I_Tan),
            QCLASS(Polaris_B_Tan),
            QCLASS(Polaris_I_Armed_Tan),
            QCLASS(Polaris_B_Armed_Tan),
            QCLASS(Polaris_I_AT_Tan),
            QCLASS(Polaris_B_AT_Tan),
            QCLASS(Polaris_I_Green),
            QCLASS(Polaris_B_Green),
            QCLASS(Polaris_I_Armed_Green),
            QCLASS(Polaris_B_Armed_Green),
            QCLASS(Polaris_I_AT_Green),
            QCLASS(Polaris_B_AT_Green)
        };
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
		version = VERSION;
		authors[] = {"MitchJC"};
		weapons[] = {};
	};
};

#include "CfgVehicles.hpp"

class CfgFunctions {

    #include "cfgFunctions.hpp"
};