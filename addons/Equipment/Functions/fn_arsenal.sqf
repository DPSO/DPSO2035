/*
Arguments:
0: items only misc items <ARRAY of STRING>
1: tooltip <STRING> (Optional)
2: picture path <STRING> (Optional)
3: override a spezific button (0-9) <NUMBER> (Optional)

Return Value:
successful: number of the slot; error: -1 <NUMBER>

Example:

call DPSO_fnc_arsenal;

Public: Yes
*/

[
    ["TFAR_anprc152","TFAR_anprc154","ItemGPS","ALIVE_Tablet","TFAR_rf7800str","TFAR_anprc148jem","ItemAndroid","ACE_microDAGR","ACE_DAGR","ItemcTabHCam","ItemMicroDAGR","ItemcTab","ACE_ATragMX","ACE_DAGR","ACE_HuntIR_monitor","ACE_Kestrel4500","ACE_microDAGR"],
    "Tech",
    "\z\ace\addons\arsenal\data\iconPublic.paa"
] call ace_arsenal_fnc_addRightPanelButton;

[
    ["kat_aatKit","kat_accuvac","DPSO_mopp","kat_larynx","kat_Painkiller","kat_guedel","ACE_adenosine","kat_X_AED","kat_AED","ACE_fieldDressing","ACE_elasticBandage","ACE_packingBandage","ACE_quikclot","kat_crossPanel","kat_bloodIV_O","kat_bloodIV_A","kat_bloodIV_AB","kat_bloodIV_B","kat_bloodIV_A_250","kat_bloodIV_O_250","kat_bloodIV_AB_250","kat_bloodIV_B_250","kat_bloodIV_O_500","kat_bloodIV_A_500","kat_bloodIV_AB_500","kat_bloodIV_B_500","ACE_bodyBag","DPSO_FirstAid","kat_chestSeal","DPSO_MedicArea","ACE_epinephrine","DPSO_MedicKit","ACE_morphine","kat_Pulseoximeter","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_personalAidKit","ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500","DPSO_Stethoscope","ACE_surgicalKit","ACE_tourniquet","ACE_splint"],
    "Medical",
    "\z\ace\addons\medical_gui\data\categories\medication.paa"
] call ace_arsenal_fnc_addRightPanelButton;

[
    ["ACE_SpraypaintBlack","ACE_SpraypaintBlue","ACE_SpraypaintGreen","ACE_SpraypaintRed"],
    "Paint",
    "\z\ace\addons\arsenal\data\iconCustom.paa"
] call ace_arsenal_fnc_addRightPanelButton;
