#include "script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    _playerUID = getplayerUID player;


    switch (true) do {
        case (_playerUID in Roles_pilot) : {
            player setUnitTrait ["Pilot", true, true];
            [ format [hint_DPSO_default, "Pilot"] ] call dpso_fnc_hint;
        };
    };
    switch (true) do {
        case (_playerUID in Roles_medic) : {
            player setVariable ["ace_medical_medicclass", 1, true];
            [ format [hint_DPSO_default, "Medic"] ] call dpso_fnc_hint;
        };
    };
    switch (true) do {
        case (_playerUID in Roles_srmedic) : {
            player setVariable ["ace_medical_medicclass", 2, true];
            [ format [hint_DPSO_default, "DR!"] ] call dpso_fnc_hint;
        };
    };
    switch (true) do {
        case (_playerUID in Roles_eng) : {
            player setVariable ["ACE_isEOD", true, true];
            player setVariable ["ace_isEngineer", 1, true];
            [ format [hint_DPSO_default, "Engineer"] ] call dpso_fnc_hint;
        };
    };
        switch (true) do {
        case (_playerUID in Roles_sreng) : {
            player setVariable ["ACE_isEOD", true, true];
            player setVariable ["ace_isEngineer", 2, true];
            [ format [hint_DPSO_default, "Advance Engineer"] ] call dpso_fnc_hint;
        };
    };
    switch (true) do {
        case (_playerUID in Roles_comm) : {
            player setVariable ["canUseSSScas", true, true];
            player setVariable ["canUseSSstrans", true, true];
            player setVariable ["canUseSSSarty", true, true];
            player setUnitTrait ["UAVHacker", true];
            [ format [hint_DPSO_default, "Communications"] ] call dpso_fnc_hint;
        };
    };
};

