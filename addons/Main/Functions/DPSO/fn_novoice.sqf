/*
Function: DPSO_fnc_novoice

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


if (isClass (configFile >> "CfgVoice" >> "ACE_NoVoice")) exitWith {};
if (!hasInterface) exitWith {};

0 = [] spawn {
    waitUntil { !isNull player };
    [player, {
        _this setSpeaker "NoVoice";
        _this addEventHandler ["Respawn", {
            params ["_unit", "_corpse"];
            _unit setSpeaker "NoVoice";
        }];
    }] remoteExec ["call", 0, player];
};
