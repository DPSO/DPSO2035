if (isDedicated) exitWith {};

if (hasInterface) then {
    player setVariable ["canUseSSScas",true,true];
    player setVariable ["canUseSSStrans",true,true];
    player setVariable ["canUseSSSarty",true,true];
    player setUnitTrait ["UAVHacker",true];


    player setVariable ["ace_medical_medicclass",0, true];
    player setVariable ["ACE_isEOD",0, true];
    player setVariable ["ace_isEngineer",0, true];

    player setUnitTrait ["LoadCoef",.6];
    player setVariable ["ace_advanced_fatigue_performanceFactor",1.75, true];

};

echo "Communications";
