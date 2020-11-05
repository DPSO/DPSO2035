class CfgFunctions {

	class DPSO_Gear {

		tag = "DPSO_gear";

		class Gear {
			file = "\z\dpso\addons\gear\functions";
			class initialize {};
			class initSettings {};
		};

		class Common {
			file = "\z\dpso\addons\gear\functions\common";
			class initPlayer {};
			class removeAll {};
			class restore {};
			class set {};
			class store {};
		};

		class Load {
			file = "\z\dpso\addons\gear\functions\load";
			class load {};
			class load_loadout {};
			class load_properties {};
		};

	};

};
