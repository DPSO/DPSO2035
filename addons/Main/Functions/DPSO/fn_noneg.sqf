/*
Function: DPSO_fnc_noneg

Description:
	

Arguments:
	null

Return Values:
	null

Examples:
    Nothing to see here

Author:
	YonV
*/

if (isClass (configFile >> "CfgPatches" >> "ace_interaction")) exitWith {};


0 = [] spawn {
    waitUntil { !isNull player };
    player addEventHandler ["HandleRating", {
        params ["_unit", "_rating"];
        _rating max 0;
    }];
};
