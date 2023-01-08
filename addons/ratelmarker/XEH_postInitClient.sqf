#include "script_component.hpp"

// Exit on Headless
if (!hasInterface) exitWith {};

// Add Keybind
["DPSO", QGVAR(OpenRatelMarker), LLSTRING(Open), {
    if ([vehicle ACE_player] call FUNC(canUseMarkerMenu)) then {
        call FUNC(createMarkerMenu);
    };
    false
}, {false}, [19, [true, true, true]], false] call CBA_fnc_addKeybind; // Ctrl+Alt+Shift+R

["DPSO", QGVAR(CreateQRM), LLSTRING(QRM_Create), {
    if ([vehicle ace_player] call FUNC(canUseMarkerMenu)) then {
        call FUNC(prepareQRM);
    };
    false
}, ""] call CBA_fnc_addKeybind;

// Client EH
[QGVAR(created), FUNC(createMarker)] call CBA_fnc_addEventHandler;
