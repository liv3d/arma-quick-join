#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "liv3d / Crowdedlight";
        VERSION_CONFIG;
    };
};

#include "RscDisplayMain.hpp"