class GVAR(RscFuelDisplay) {
    idd = IDD_FUELDISPLAY;
    movingEnable = TRUE;
    duration = 9.9999998e+010;

    fadeIn = 0.5;
    fadeOut = 0.5;

    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(RscFuelDisplay),_this select 0)];);
    onUnload = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(RscFuelDisplay),nil)]);

    controls[] = {
        "Background",
        "Fuel"
    };

    class Background: RscPicture {
        idc = IDC_FUELDISPLAY_BACKGROUND;
        text = "#(argb,8,8,3)color(0,0,0,0.7)";

        x = QUOTE(profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_fuelDisplay_X),safeZoneX + FUELDISPLAY_X * safeZoneW)]);
        y = QUOTE(profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_fuelDisplay_Y),(safeZoneY + (safeZoneH / 2)) - (FUELDISPLAY_H / 2))]);
        w = FUELDISPLAY_W;
        h = FUELDISPLAY_H;
    };

    class Fuel: RscPicture {
        idc = IDC_FUELDISPLAY_FUEL;
        text = "#(argb,8,8,3)color(1,1,1,0.7)";

        x = QUOTE((profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_fuelDisplay_X),safeZoneX + FUELDISPLAY_X * safeZoneW)]) + ((FUELDISPLAY_W / 2) - (FUELDISPLAY_FUEL_W / 2)));
        y = QUOTE((profileNamespace getVariable [ARR_2(QQIGUI_GVAR(Grid_fuelDisplay_Y),(safeZoneY + (safeZoneH / 2)) - (FUELDISPLAY_H / 2))]) + ((FUELDISPLAY_H / 2) - (FUELDISPLAY_FUEL_H / 2)));
        w = FUELDISPLAY_FUEL_W;
        h = FUELDISPLAY_FUEL_H;
    };
};