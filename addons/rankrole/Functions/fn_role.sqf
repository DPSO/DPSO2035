/*
 * Argument:
 * 0: Action name <STRING>
 * 1: Name of the action shown in the menu <STRING>
 * 2: Icon <STRING>
 * 3: Statement <CODE>
 * 4: Condition <CODE>
 * 5: Insert children code <CODE> (Optional)
 * 6: Action parameters <ANY> (Optional)
 * 7: Position (Position array, Position code or Selection Name) <ARRAY>, <CODE> or <STRING> (Optional)
 * 8: Distance <NUMBER> (Optional)
 * 9: Other parameters [showDisabled,enableInside,canCollapse,runOnHover,doNotCheckLOS] <ARRAY> (Optional)
 * 10: Modifier function <CODE> (Optional)
 */

/*
 * Argument:
 * 0: Object the action should be assigned to <OBJECT>
 * 1: Type of action, 0 for actions, 1 for self-actions <NUMBER>
 * 2: Parent path of the new action <ARRAY> (Example: `["ACE_SelfActions", "ACE_Equipment"]`)
 * 3: Action <ARRAY>
 */




if (isDedicated) exitWith {};

if (hasInterface) then {
    player setVariable ["canUseSSScas",false,true];
    player setVariable ["canUseSSStrans",false,true];
    player setVariable ["canUseSSSarty",false,true];
    player setUnitTrait ["UAVHacker",false];
    player setVariable ["ACE_isEOD",0, true];
    player setVariable ["ace_isEngineer",0, true];
    player setVariable ["ace_medical_medicclass",0, true];
    player setUnitTrait ["LoadCoef",.5];
    player setVariable ["ace_advanced_fatigue_performanceFactor",2, true];
};

private _dpsoisis = player getVariable "dpsoisis";

call {
	if (_dpsoisis isEqualto 0) exitwith {_isis = "Weapons"};
	if (_dpsoisis isEqualto 1) exitwith {_isis = "Communications"};
	if (_dpsoisis isEqualto 2) exitwith {_isis = "Medic"};
	if (_dpsoisis isEqualto 3) exitwith {_isis = "Engineer"};
};


private _DPSOis = [
	"DPSOis",
	"What am I " + _isis,
	"",
	{
        echo _isis;
    },
	{true},
	{},
	[_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _DPSOis] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _DPSOmakecom = [
	"DPSOmakecom",
	"Communications",
	"",
	{
		player call dpso_rankrole_fnc_makecom;
	},
	{true},
	{},
	[_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _DPSOmakecom] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _DPSOmakeeng = [
    "DPSOmakeeng",
	"Engineer",
	"",
	{
		player call dpso_rankrole_fnc_makeeng;
	},
	{true},
	{},
	[_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _DPSOmakeeng] call ACE_interact_menu_fnc_addActionToObject;

////////////////////////////////////////////////////////////////////////////////////////////////
private _DPSOmakemed = [
    "DPSOmakemed",
	"Medic",
	"",
	{
		player call dpso_rankrole_fnc_makemed;
	},
	{true},
	{},
	[_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _DPSOmakemed] call ACE_interact_menu_fnc_addActionToObject;


////////////////////////////////////////////////////////////////////////////////////////////////
private _DPSOmakewep = [
    "DPSOmakewep",
	"Weapons",
	"",
	{
		player call dpso_rankrole_fnc_makewep;
	},
	{true},
	{},
	[_area]
] call ACE_interact_menu_fnc_createAction;

[this, 0, ["ACE_MainActions"], _DPSOmakewep] call ACE_interact_menu_fnc_addActionToObject;



