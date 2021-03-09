class CfgPatches {
  class dpso_suppression {
    units[] = {};
    weapons[] = {};
    requiredVersion = DPSO_REQUIRED_VERSION;
    requiredAddons[] = {
        "A3_Functions_F"
    };
     DPSO_version = DPSO_VERSION;
    versionStr = DPSO_VERSION_STR;
    author = "nkenny";
        url = URL;
  };
};

class CfgBrains {
    class DefaultSoldierBrain {
        class Components {
            class AIBrainSuppressionComponent {
                worstDecreaseTime = 25.0;   // in seconds for 0.0 skill
                bestDecreaseTime = 4.0;     // in seconds for 1.0 skill
                causeExplosionWeight = 1.5; // 
            };
            class AIBrainAimingErrorComponent {
                worstDecreaseTime	= 3.5; // how long (in seconds) it should take 0.0 skilled soldier to stabilize the aim completely 
                bestDecreaseTime = 0.6; // how long (in seconds) it should take 1.0 skilled soldier to stabilize the aim completely
                turningInfluence = 1.2; // importance of turning in algorithm, multiplier
            };
        };
    };
};

