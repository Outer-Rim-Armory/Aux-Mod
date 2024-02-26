// Window sizes, measured in % of screen size
#define WINDOW_WIDTH 0.025
#define WINDOW_HEIGHT 0.3

#define WINDOW_X 0.95
#define WINDOW_Y 0.5

class GVAR(RscFuelDisplay)
{
    // See https://community.bistudio.com/wiki/Arma:_GUI_Configuration#HUDs

    idd = 8000;
    movingEnable = TRUE;
    duration = 9.9999998e+010;

    fadeIn = 0.5;
    fadeOut = 0.5;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(RscFuelDisplay),_this select 0)];);
    onUnload = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(RscFuelDisplay),nil)]);

    // List of all the UI elements
    controls[] =
    {
        "background",
        "fuel"
    };

    // See https://community.bistudio.com/wiki/Arma:_GUI_Configuration#Controls
    class background: RscPicture
    {
        idc = 9000;
        moving = TRUE;

        text = "#(argb,8,8,3)color(0,0,0,0.7)";

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