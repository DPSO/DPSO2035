/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\z\dpso\addons\medical\supplies\functions\fn_doUnpackmopp.sqf
 *	by Ojemineh
 *
 *	unpack medical supplies
 *
 *	Arguments:
 *	0: unit - <OBJECT>
 *
 *	Return:
 *	nothing
 *
 *	Example:
 *	[player] call DPSO_medical_supplies_fnc_doUnpackmopp;
 *
 */

// -------------------------------------------------------------------------------------------------

private ["_unit"];

_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// -------------------------------------------------------------------------------------------------

if (isNull _unit) exitWith {};

// -------------------------------------------------------------------------------------------------

[_unit] spawn {

	params ["_unit"];

	_unit playAction "Gear";

	if (vehicle _unit != _unit) then {
		playSound "DPSO_Medical_mopp_Open_1";
	} else {
		private _pitch = random [0.6, 1, 1.4];
		[_unit, "DPSO_Medical_mopp_Open_1", [], 30, 1000, -1, _pitch] call DPSO_fnc_play3dSound;
	};

	DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS = false;
	DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE = false;

	[
		2,
		[],
		{ DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS = true; },
		{ DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE = true; },
		localize "STR_DPSO_Medical_Supplies_Progress_mopp",
		{true},
		["isNotInside", "isNotSitting", "isNotSwimming"]
	] call ACE_common_fnc_progressBar;

	waitUntil {if ((DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS) || (DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE)) exitWith {true}; false};

	if (DPSO_MEDICAL_SUPPLIES_UNPACK_SUCCESS) exitWith {

		_unit removeItem "DPSO_mopp";

		private _order = [2,1];
		private _overflow = true;

			[_unit, "U_B_CBRN_Suit_01_MTP_F",1, _order, _overflow] call DPSO_fnc_addItem;
			[_unit, "DPSO_Respirator_Black",1, _order, _overflow] call DPSO_fnc_addItem;
			[_unit, "ACE_adenosine",4, _order, _overflow] call DPSO_fnc_addItem;


		//[_unit, "MedicalGarbage_01_moppKit_F"] call DPSO_fnc_createLitter;

		_unit playActionNow "Stand";

	};

	if (DPSO_MEDICAL_SUPPLIES_UNPACK_FAILURE) exitWith {

		[_unit, "DPSO_Medical_mopp_Open_1"] call DPSO_fnc_stop3dSound;

		_unit playActionNow "Stand";

	};

};
