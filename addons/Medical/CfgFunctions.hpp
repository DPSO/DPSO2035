class CfgFunctions {

	class DPSO_Medical {

		tag = "DPSO_medical";

		class Medical {
			file = "z\dpso\addons\medical\functions";
			class initialize {};
			class initSettings {};
		};

	};

	class DPSO_Medical_ACE_Medical {

		tag = "ace_medical";

		class ace_medical {
			file = "z\dpso\addons\medical\functions\ace_medical";
			class actionCheckBloodPressureLocal {};
			class actionCheckPulseLocal {};
			class actionCheckResponse {};
			class actionDiagnose {};
			class actionRemoveTourniquet {};
			class itemCheck {};
			class playInjuredSound {};
			class treatment {};
			class useItem {};
		};

	};

	class DPSO_Medical_ACE_Medical_Menu {

		tag = "ace_medical_menu";

		class ace_medical_menu {
			file = "z\dpso\addons\medical\functions\ace_medical_menu";
			class updateActivityLog {};
			class updateQuickViewLog {};
		};

	};

	class adv_aceCPR_ace_medical {

		tag = "ace_medical";

		class ace_medical {
			class actionCheckPulseLocal { file = "z\dpso\addons\medical\functions\ace_medical\fn_actionCheckPulseLocal.sqf"; };
		};

	};

	class adv_aceSplint {

		tag = "adv_aceSplint";

		class init {
			class checkLimbs { file = "z\dpso\addons\medical\functions\adv_splint\fn_checkLimbs.sqf"; };
		};

	};

};
