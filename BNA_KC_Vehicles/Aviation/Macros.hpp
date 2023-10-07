#define HUD_CHANGER class LS_HUD_Changer \
{ \
    displayName = "Change HUD Color"; \
    condition = "ace_player == currentPilot (_this#0) and isEngineOn (_this#0)"; \
    exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"}; \
    icon = "\ls_data\icons\hud\colorWheel.paa"; \
    class HUD_White \
    { \
        displayName = "White"; \
        condition = "ace_player == currentPilot (_this#0) and isEngineOn (_this#0)"; \
        exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"}; \
        runOnHover = 1; \
        statement = "[1, 1, 1, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#FFFFFF']"; \
    }; \
    class HUD_Black: HUD_White \
    { \
        displayName = "Black"; \
        statement = "[0, 0, 0, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#000000']"; \
    }; \
    class HUD_Blue: HUD_White \
    { \
        displayName = "Blue"; \
        statement = "[0, 0, 1, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#0000FF']"; \
    }; \
    class HUD_Purple: HUD_White \
    { \
        displayName = "Purple"; \
        statement = "[0.5, 0, 0.5, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#800080']"; \
    }; \
    class HUD_Red: HUD_White \
    { \
        displayName = "Red"; \
        statement = "[1, 0, 0, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#FF0000']"; \
    }; \
    class HUD_Orange: HUD_White \
    { \
        displayName = "Orange"; \
        statement = "[1, 0.5, 0, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#FF8000']"; \
    }; \
    class HUD_Yellow: HUD_White \
    { \
        displayName = "Yellow"; \
        statement = "[1, 1, 0, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#FFFF00']"; \
    }; \
    class HUD_Green: HUD_White \
    { \
        displayName = "Green"; \
        statement = "[0, 1, 0, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#00FF00']"; \
    }; \
    class HUD_Cyan: HUD_White \
    { \
        displayName = "Cyan"; \
        statement = "[0, 1, 1, 1, _this#0] call ls_utility_fnc_hudColorChange"; \
        modifierFunction = "_this#3#2 set [1, '#00FFFF']"; \
    }; \
    class HUD_Clear: HUD_White \
    { \
        displayName = "No Hud"; \
        icon = "ls_data\icons\hud\noHud.paa"; \
        statement = "[0, 0, 0, 0, _this#0] call ls_utility_fnc_hudColorChange"; \
    }; \
};