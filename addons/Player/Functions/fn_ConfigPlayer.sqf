/*
Function: DPSO_fnc_ConfigPlayer

name:
	Used to configure basic player attributes and equipment.

Arguments:
	_unit - Player the setup is applied to. <OBJECT>
	_Section - The Section the Player is in. <STRING>
	_Traits - Which Traits the player has, can be more than one. <ARRAY>
	_Loadout - Name of Loadout to call. Changes player equipment to Loadout from DPSO Fundamentals. <STRING>

Examples:
	(begin example)
		[this] call DPSO_fnc_ConfigPlayer;
		[this, "1 Section"] call DPSO_fnc_ConfigPlayer;
		[this, "ds999", ["Pilot"]] call DPSO_fnc_ConfigPlayer;
		[this, "ds990", ["Pilot", "Mission Maker"]] call DPSO_fnc_ConfigPlayer;
		[this, "ds999", ["Pilot"], "3CB Pilot"] call DPSO_fnc_ConfigPlayer;
	(end)

Author:
	MitchJC
*/

params [
	"_unit",
	["_Section", "Support"],
	["_Traits", []],
	["_Loadout", []]
];

if (_Section isEqualto -1) exitwith {};

call {
	if (_Section isEqualto 0) exitwith {_Section = "ds990"};
	if (_Section isEqualto 1) exitwith {_Section = "da997"};
	if (_Section isEqualto 2) exitwith {_Section = "da992"};
	if (_Section isEqualto 3) exitwith {_Section = "da993"};
	if (_Section isEqualto 4) exitwith {_Section = "ds994"};
	if (_Section isEqualto 5) exitwith {_Section = "da995"};
	if (_Section isEqualto 6) exitwith {_Section = "da996"};
	if (_Section isEqualto 7) exitwith {_Section = "ds997"};
	if (_Section isEqualto 8) exitwith {_Section = "da998"};
	if (_Section isEqualto 9) exitwith {_Section = "ds999"};
	if (_Section isEqualto 10) exitwith {_Section = "bolo"};
};

if (local _unit) then {
    	//========== Trait Config
	private _TraitsArray = call {
		if ((typeName _Traits) isEqualTo "STRING") exitWith { [_Traits]};
		_Traits
	};

	if !(_TraitsArray isEqualTo []) then {
		{
			_unit setUnitTrait [_x, true, true];
		} forEach _TraitsArray;
	};
	//========ACE Player Traits
	if (isClass (configFile >> "CfgPatches" >> "ace_main")) then {

		_unit setvariable ["ace_advanced_fatigue_performanceFactor",2.0,true];

		if (_unit getunittrait "Medic") then { _unit setVariable ["ace_medical_medicClass", 1, true]};
		if (_unit getunittrait "Doctor") then { _unit setVariable ["ace_medical_medicClass", 2, true]};
		if (_unit getunittrait "Engineer") then { _unit setVariable ["ace_isEngineer", 1, true]};
		if (_unit getunittrait "Adv Engineer") then { _unit setVariable ["ace_isEngineer", 2, true]};
	};

	//========== Loadout Config
	if !(_Loadout isEqualto []) then {
		[_unit, _Loadout] call DPSO_fnc_Loadouts;
	};

	//=========== Patches
	[_unit, _Section] call DPSO_fnc_Patches;

    //=========== Set Section
	_unit setVariable ["DPSO_Section", _Section, true];

};
