// TODO: Move to script_macros.hpp and update names
// Window sizes, measured in % of screen size
#define WINDOW_WIDTH 0.025
#define WINDOW_HEIGHT 0.3

#define WINDOW_X 0.95
#define WINDOW_Y 0.5

// Center display formula - displays in center of screen
// _x = (safeZoneX + (safeZoneWAbs / 2)) - (WINDOW_X / 2);
// _y = (safeZoneY + (safeZoneH / 2)) - (WINDOW_Y / 2);

class RscTitles
{
    class RscPicture;

    class CLASS(Jet_Dialog) // TODO: Renamed to GVAR(FuelDisplay)
    {
        // See https://community.bistudio.com/wiki/Arma:_GUI_Configuration#HUDs

        // Custom HUD element for jetpack fuel
        idd = 8000; // Custom id, should be unique
        // enableSimulation = 1; // ?
        movingEnable = TRUE; // Allow the player to move the display in the "Customize Layout" menu
        duration = 9.9999998e+010; // Make menu last "forever", will be closed if jetpack is removed

        // 0.5 second fate in/out
        fadeIn = 0.5;
        fadeOut = 0.5;

        onLoad = "[_this] call BNAKC_Jetpacks_fnc_jetDialogOnLoad;"; // Code to run when loaded
        onUnload = ""; // Same thing but when unloaded

        // List of all the UI elements
        controls[] =
        {
            "background",
            "fuel"
        };

        // See https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Controls
        class background: RscPicture
        {
            idc = 9000; // Id for this control
            moving = 1; // Control will be moved when the display is dragged

            text = "#(argb,8,8,3)color(0,0,0,0.7)"; // Procedural texture - https://community.bistudio.com/wiki/Procedural_Textures

            // Control size
            w = WINDOW_WIDTH;
            h = WINDOW_HEIGHT;

            // Control position
            x = QUOTE(profileNamespace getVariable [ARR_2('IGUI_BNA_KC_Jet_Grid_jetpackFuel_X',safeZoneX + WINDOW_X * safeZoneW)]); // Near the right side of the screen
            y = QUOTE(profileNamespace getVariable [ARR_2('IGUI_BNA_KC_Jet_Grid_jetpackFuel_Y',(safeZoneY + (safeZoneH / 2)) - (WINDOW_HEIGHT / 2))]); // Centers the bar vertically
        };

        class fuel: RscPicture
        {
            idc = 9001; // Id for this control
            moving = 1; // Control will be moved when the display is dragged

            text = "#(argb,8,8,3)color(1,1,1,0.7)";

            #define FUEL_WIDTH WINDOW_WIDTH * 0.5// 50% width of background
            #define FUEL_HEIGHT WINDOW_HEIGHT * 0.95// 95% height of background

            // Control size
            w = FUEL_WIDTH;
            h = FUEL_HEIGHT;

            // Control position
            x = QUOTE((profileNamespace getVariable [ARR_2('IGUI_BNA_KC_Jet_Grid_jetpackFuel_X',safeZoneX + WINDOW_X * safeZoneW)]) + ((WINDOW_WIDTH / 2) - (FUEL_WIDTH / 2)));
            y = QUOTE((profileNamespace getVariable [ARR_2('IGUI_BNA_KC_Jet_Grid_jetpackFuel_Y',(safeZoneY + (safeZoneH / 2)) - (WINDOW_HEIGHT / 2))]) + ((WINDOW_HEIGHT / 2) - (FUEL_HEIGHT / 2)));
        };
    };
};


// UI Grids, used to let the player move the jetpack hud element
class CfgUIGrids
{
    class IGUI
    {
        class Variables
        {
            class CLASS(Grid_jetpackFuel)
            {
                // Variable for saving the position of the UI control
                displayName = "Jetpack Fuel";
                description = "Fuel display for jetpacks";
                preview = "\BNA_KC_Gear\Jetpacks\Data\Textures\UI\BNA_KC_Jet_Dialog_Preview.paa";
                saveToProfile[] = {0, 1};
                /*
                0: Save X coordinate
                1: Save Y coordinate
                2: Save width (if resizing is allowed)
                3: Save height (if resizing is allowed)
                */
            };
        };

        class Presets
        {
            class Arma3
            {
                class Variables
                {
                    // Default values (roughly on the right side of the screen)
                    CLASS(Grid_jetpackFuel)[]=
                    {

                        {
                            "safeZoneX + 0.95 * safeZoneW",
                            "(safeZoneY + (safeZoneH / 2)) - (0.3 / 2)",
                            0.025,
                            0.3
                        },
                        "(((safezoneW / safezoneH) min 1.2) / 40)",
                        "((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)"
                    };
                };
            };
        };
    };
};