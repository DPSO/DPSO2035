// Naming pattern: SleeveType_Camo_Pattern
// Combat DPSO - Long Sleeves
class CLASS(Uniform_Combat_LS_DPSO_ATX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Tyrone";
    displayName = CSTRING(Uniform_Combat_LS_DPSO_ATX);
    picture = QPATHTOF(UI\uniform_combat_ls_DPSO_atx.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_LS_DPSO_ATX);
    };
};
class CLASS(Uniform_Combat_LS_DPSO_AUX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Tyrone";
    displayName = CSTRING(Uniform_Combat_LS_DPSO_AUX);
    picture = QPATHTOF(UI\uniform_combat_ls_DPSO_aux.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_LS_DPSO_AUX);
    };
};
class CLASS(Uniform_Combat_LS_DPSO_IX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Tyrone";
    displayName = CSTRING(Uniform_Combat_LS_DPSO_IX);
    picture = QPATHTOF(UI\uniform_combat_ls_DPSO_ix.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_LS_DPSO_IX);
    };
};
class CLASS(Uniform_Combat_LS_DPSO_LEX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Tyrone";
    displayName = CSTRING(Uniform_Combat_LS_DPSO_LEX);
    picture = QPATHTOF(UI\uniform_combat_ls_DPSO_lex.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_LS_DPSO_LEX);
    };
};
