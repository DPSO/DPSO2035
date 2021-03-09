class Extended_PreInit_EventHandlers {
	
	class DPSO_Common_EH_initSettings {
		init = "call DPSO_common_fnc_initSettings";
	};
	class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
	
};

class Extended_PostInit_EventHandlers {
	
	class DPSO_Common_EH_initialize {
		init = "call DPSO_common_fnc_initialize";
	};
	class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
        disableModuload = true;
    };
	
};
