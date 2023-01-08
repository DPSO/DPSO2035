#include "script_component.hpp"
if (isDedicated) exitwith {};

if (hasinterface) then {
    _playerUID = getplayerUID player;

    switch (true) do {
        case (_playerUID in ranks_corporal) : {
            player setRank "CORPORAL";
            [ format [hint_DPSO_default, "CORPORAL"] ] call dpso_fnc_hint;
        };
        case (_playerUID in ranks_sergeant) : {
            player setRank "SERGEANT";
            [ format [hint_DPSO_default, "SERGEANT"] ] call dpso_fnc_hint;
        };
        case (_playerUID in ranks_lieutenant) : {
            player setRank "LIEUTENANT";
            [ format [hint_DPSO_default, "LIEUTENANT"] ] call dpso_fnc_hint;
        };
        case (_playerUID in ranks_captain) : {
            player setRank "CAPTAIN";
            [ format [hint_DPSO_default, "CAPTAIN"] ] call dpso_fnc_hint;
        };
        case (_playerUID in ranks_major) : {
            player setRank "MAJOR";
            [ format [hint_DPSO_default, "MAJOR"] ] call dpso_fnc_hint;
        };
        case (_playerUID in ranks_colonel) : {
            player setRank "COLONEL";
            [ format [hint_DPSO_default, "COLONEL"] ] call dpso_fnc_hint;
        };
        default {
            player setRank "PRIVATE";
        };
    };
};
