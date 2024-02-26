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
        x = QUOTE(profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_jetpackFuel_X),safeZoneX + WINDOW_X * safeZoneW)]); // Near the right side of the screen
        y = QUOTE(profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_jetpackFuel_Y),(safeZoneY + (safeZoneH / 2)) - (WINDOW_HEIGHT / 2))]); // Centers the bar vertically
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
        x = QUOTE((profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_jetpackFuel_X),safeZoneX + WINDOW_X * safeZoneW)]) + ((WINDOW_WIDTH / 2) - (FUEL_WIDTH / 2)));
        y = QUOTE((profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_jetpackFuel_Y),(safeZoneY + (safeZoneH / 2)) - (WINDOW_HEIGHT / 2))]) + ((WINDOW_HEIGHT / 2) - (FUEL_HEIGHT / 2)));
    };
};