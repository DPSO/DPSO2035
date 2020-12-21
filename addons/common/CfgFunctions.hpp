class CfgFunctions {

	class DPSO_Common {

		tag = "DPSO_common";

		class Common {
			file = "z\dpso\addons\common\functions";
			class initialize {};
			class initSettings {};
		};

	};

	class DPSO_Functions {

		tag = "DPSO";

		class Addons {
			file = "z\dpso\addons\common\functions\addons";
			class getAddonAuthor {};
			class getAddonAuthors {};
			class getAddonName {};
			class getAddonRequiredAddons {};
			class getAddonRequiredVersion {};
			class getAddonUnits {};
			class getAddonURL {};
			class getAddonVersion {};
			class getAddonVersionArray {};
			class getAddonVersionString {};
			class getAddonWeapons {};
			class isAddon {};
		};

		class Common {
			file = "z\dpso\addons\common\functions\common";
			class addItem {};
			class attachToRel {};
			class createLitter {};
			class createLitterServer {};
			class getUnitInsignia {};
			class isAdmin {};
			class isCurator {};
			class isInBuilding {};
			class screenshot {};
			class setUnitInsignia {};
		};

		class Diagnostic {
			file = "z\dpso\addons\common\functions\diagnostics";
			class diagLog {};
			class diagLogGlobal {};
			class diagLogServer {};
			class isDebug {};
			class log {};
			class logGlobal {};
			class logServer {};
		};

		class SafeMode {
			file = "z\dpso\addons\common\functions\safemode";
			class weaponFiremodeSound {};
			class weaponLock {};
			class weaponUnlock {};
		};

		class Settings {
			file = "z\dpso\addons\common\functions\settings";
			class getKeybindString {};
			class needRestart {};
			class needRestartLocal {};
		};
	};

};
