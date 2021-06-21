#include "script_component.hpp"

class CfgPatches {
    class Arcadian {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(Arcadian_I_Black),
            QCLASS(Arcadian_B_Black),
            QCLASS(Arcadian_I_Tan),
            QCLASS(Arcadian_B_Tan),
            QCLASS(Arcadian_I_Green),
            QCLASS(Arcadian_B_Green),
            QCLASS(Arcadian_I_Grey),
            QCLASS(Arcadian_B_Grey),
            QCLASS(Arcadian_Armed_I_Black),
            QCLASS(Arcadian_Armed_B_Black),
            QCLASS(Arcadian_Armed_I_Tan),
            QCLASS(Arcadian_Armed_B_Tan),
            QCLASS(Arcadian_Armed_I_Green),
            QCLASS(Arcadian_Armed_B_Green),
            QCLASS(Arcadian_Armed_I_Grey),
            QCLASS(Arcadian_Armed_B_Grey)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"DPSO_main", "CUP_Wheeled_SUV"};
        author = AUTHOR;
        authors[] = {"TyroneMF", "GilleeDoo"};
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
