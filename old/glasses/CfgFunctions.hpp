class CfgFunctions {

	class DPSO_Glasses {

		tag = "DPSO_glasses";

		class Glasses {
			file = "\z\dpso\addons\glasses\functions";
			class initialize {};
			class initSettings {};
		};

		class Blindfold {
			file = "\z\dpso\addons\glasses\functions\blindfold";
			class blindfold_canPutOn {};
			class blindfold_canRemove {};
			class blindfold_doPutOn {};
			class blindfold_doRemove {};
		};

	};

};
