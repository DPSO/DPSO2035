#include "script_component.hpp"

if !(hasInterface) exitWith {};

[{
        (alive player)
}, {

    // Fixing warning spam from ambientLife. Also, if I hear "Look a bunny!" one more bloody time...
        enableEnvironment [false, true];

    // Shut the hell up  - Mute Orders and Reports
        {_x setSpeaker "NoVoice"} forEach playableUnits;

        enableSentences false;

        player call DPSO_fnc_PlayerAddActions;

        [ format [hint_DPSO_default, "The freqs have been freqed, and frequed good they have"] ] call dpso_fnc_hint;

        //=========== Rank role
        player call DPSO_rank_fnc_rank;
        player call DPSO_role_fnc_role;

        //=========== Patches
       // [player, _DPSO_Section] call DPSO_fnc_Patches;

        [ format [hint_DPSO_default, "Hooah"] ] call dpso_fnc_hint;
},[player]] call CBA_fnc_waitUntilAndExecute;
