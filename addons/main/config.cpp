#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"}; // include external addons here that your whole mod depends on and have your other addons require this one.
        authors[] = {"Tato"}; // sub array of authors, considered for the specific addon
        author = "Tato"; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };
};

// information on the whole mod (only needed once)
class CfgMods {
    class PREFIX {
        dir = "@TATO_H1";
        name = "Tato H-1";

        author = "Tato";                    // probably shown somewhere in the mods menu, but probably ignored by CBA/HEMTT

        picture         = "logo_tato_ca.paa";       // Picture displayed from the expansions menu. Optimal size is 2048x1024
        hideName        = "false";              // Hide the extension name in main menu and extension menu
        hidePicture     = "false";              // Hide the extension picture in the extension menu

        action          = "https://github.com/Born2Potato/H1"; // Website URL, that can accessed from the expansions menu
        actionName      = "GitHub";              // label of button/tooltip in extension menu
        description     = "UH-1Y Venom"; // Probably in context with action

        // Color used for DLC stripes and backgrounds (RGBA)
        dlcColor[] = {1, 0.0, 0.86, 1};
    };
};
// Configs go here
