
[
    QGVAR(overlayOpacity),
    "SLIDER",
    [LSTRING(overlayOpacity_name), LSTRING(overlayOpacity_tooltip)],
    [QUOTE(MOD_NAME), LSTRING(category_displayName)],
    [0, 1, 0.96, 2],
    true,
    {
      private _display = uiNamespace getVariable [QGVAR(overlay), displayNull];
      if (isNull _display) exitWith {};
      private _overlayCtrl = _display displayCtrl IDC_OVERLAY;
      _overlayCtrl ctrlSetTextColor [0, 0, 0, _this];
      _overlayCtrl ctrlCommit 0;
    },
    false
] call CBA_fnc_addSetting;

[
    QGVAR(overlayTexture),
    "LIST",
    [LSTRING(overlayTexture_name), LSTRING(overlayTexture_tooltip)],
    [QUOTE(MOD_NAME), LSTRING(category_displayName)],
    [[0, 1, 2], [LSTRING(overlayTexture_light), LSTRING(overlayTexture_medium), LSTRING(overlayTexture_dark)], 1],
    true,
    {
      private _display = uiNamespace getVariable [QGVAR(overlay), displayNull];
      if (isNull _display) exitWith {};
      private _overlayCtrl = _display displayCtrl IDC_OVERLAY;
      _overlayCtrl ctrlSetText (OVERLAYS_LIST select _this);
      _overlayCtrl ctrlCommit 0;
    },
    false
] call CBA_fnc_addSetting;

[
    QGVAR(overlayFadeoutTime),
    "SLIDER",
    [LSTRING(overlayFadeoutTime_name), LSTRING(overlayFadeoutTime_tooltip)],
    [QUOTE(MOD_NAME), LSTRING(category_displayName)],
    [1,30,10,1],
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(projectileMaxDistance),
    "SLIDER",
    [LSTRING(projectileMaxDistance_name), LSTRING(projectileMaxDistance_tooltip)],
    [QUOTE(MOD_NAME), LSTRING(category_displayName)],
    [1,10,9,2],
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(shooterMinDistance),
    "SLIDER",
    [LSTRING(shooterMinDistance_name), LSTRING(shooterMinDistance_tooltip)],
    [QUOTE(MOD_NAME), LSTRING(category_displayName)],
    [0,50,0,2],
    true,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(checkLOS),
    "CHECKBOX",
    [LSTRING(checkLOS_name), LSTRING(checkLOS_tooltip)],
    [QUOTE(MOD_NAME), LSTRING(category_displayName)],
    false,
    true,
    {},
    false
] call CBA_fnc_addSetting;
