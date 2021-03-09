#include "script_component.hpp"
/*
 * Author: YonV
 * Tests Dynamic Simulation value.
 *
 * Arguments:
 * Attribute Control <CONTROL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call DPSO_mission_autotest_fnc_testdynsim
 *
 * Public: No
 */

private _value = getText (missionConfigFile >> "DynamicSimulation" >> "enable");



if (_value == "" || {_value == "1"}) then {
    (_this controlsGroupCtrl CTRL_PICTURE) ctrlSetText ERROR_PICTURE;
} else {
    if (_value != "0") then {
        (_this controlsGroupCtrl CTRL_PICTURE) ctrlSetText PASS_PICTURE;
    };
};
