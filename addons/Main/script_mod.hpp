#include "\z\dpso\addons\Main\script_version.hpp"
#include "\z\ace\addons\main\script_macros.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"


#include "script_version.hpp"

#define ACE_PREFIX ace

#undef MAINPREFIX

#define MAINPREFIX z
#define PREFIX dpso
#define SUBPREFIX addons

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(DPSO - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(DPSO - COMPONENT)
#endif

#define DPSO_VERSION     MAJOR.MINOR.PATCHLVL
#define DPSO_VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define DPSO_VERSION_AR  MAJOR,MINOR,PATCHLVL,BUILD

#define AUTHOR "Dropping Purple Smoke"
#define LOGO_PATH "\z\dpso\addons\media\images\logo_sm_ca.paa"
#define DPSO_REQUIRED_VERSION 1.86
#define REQUIRED_CBA_VERSION {3,14,0}
#define REQUIRED_ACE_VERSION {3,13,1}

#define URL https://armadocs.purplesmoke.info/
#define NAME "DPSO"

#define DPSO_TAG DPSO

#define DPSO_FACTION DPSO_Faction

#ifdef DISABLE_COMPILE_CACHE
    #define LINKFUNC(x) {_this call FUNC(x)}
#else
    #define LINKFUNC(x) FUNC(x)
#endif

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}


// ACE3 reference macros
#define ACE_PREFIX ace
#define ACE_ADDON(module) DOUBLES(ACE_PREFIX,module)

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))

#define ACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define DACEFUNC(var1,var2) TRIPLES(DOUBLES(ACE_PREFIX,var1),fnc,var2)
#define QACEFUNC(var1,var2) QUOTE(DACEFUNC(var1,var2))

#define ACECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,var1),var2))
#define ACELSTRING(var1,var2) QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,var1),var2))

// AFM macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// Internal
/* #define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3 */
#define ADDON DOUBLES(PREFIX,COMPONENT)

// Main
#define QUOTE(var1) #var1
#define DPSO_VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCHLVL.BUILD); versionAr[] = {MAJOR,MINOR,PATCHLVL,BUILD}

// Path
//#define PATHTOF_SYS(var1,var2,var3) \MAINPREFIX\##var1\SUBPREFIX\##var2\##var3
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))

// Class
#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(DOUBLES(PREFIX,var1))

// Stringtable
#define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
#define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))


#define MACRO_ADDWEAPON(WEAPON,COUNT) \
    class _xx_##WEAPON { \
        weapon = #WEAPON; \
        count = COUNT; \
    }

#define MACRO_ADDITEM(ITEM,COUNT) \
    class _xx_##ITEM { \
        name = #ITEM; \
        count = COUNT; \
    }

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) \
    class _xx_##MAGAZINE { \
        magazine = #MAGAZINE; \
        count = COUNT; \
    }

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) \
    class _xx_##BACKPACK { \
        backpack = #BACKPACK; \
        count = COUNT; \
    }

#define MACRO_LANDVEHICLE_CARGO \
    class TransportBackpacks {}; \
    class TransportItems { \
        MACRO_ADDITEM(FirstAidKit,8); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(SmokeShell,6); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(SmokeShellRed,2); \
    }; \
    class TransportWeapons {};

#define MACRO_AIRVEHICLE_CARGO \
    class TransportBackpacks { \
        MACRO_ADDBACKPACK(B_Parachute,2); \
    }; \
    class TransportItems { \
        MACRO_ADDITEM(FirstAidKit,8); \
        MACRO_ADDITEM(ItemGPS,1); \
        MACRO_ADDITEM(ToolKit,1); \
    }; \
    class TransportMagazines { \
        MACRO_ADDMAGAZINE(SmokeShell,6); \
        MACRO_ADDMAGAZINE(SmokeShellBlue,2); \
        MACRO_ADDMAGAZINE(SmokeShellRed,2); \
    }; \
    class TransportWeapons {};


#include "script_macros.hpp"
