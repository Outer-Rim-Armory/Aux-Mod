#define INTERACTION_HUD_CHANGER class LS_HUD_Changer \
{ \
    displayName = "Change HUD Color"; \
    condition = QUOTE(ace_player == currentPilot (_this#0) and isEngineOn (_this#0)); \
    exceptions[] = {"isNotInside"}; \
    icon = "\ls_data\icons\hud\colorWheel.paa"; \
    class HUD_White \
    { \
        displayName = "White"; \
        condition = "true"; \
        exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"}; \
        runOnHover = TRUE; \
        statement = QUOTE([ARR_5(1,1,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#FFFFFF')]); \
    }; \
    class HUD_Black: HUD_White \
    { \
        displayName = "Black"; \
        statement = QUOTE([ARR_5(0,0,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#000000')]); \
    }; \
    class HUD_Blue: HUD_White \
    { \
        displayName = "Blue"; \
        statement = QUOTE([ARR_5(0,0,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#0000FF')]); \
    }; \
    class HUD_Purple: HUD_White \
    { \
        displayName = "Purple"; \
        statement = QUOTE([ARR_5(0.5,0,0.5,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#800080')]); \
    }; \
    class HUD_Red: HUD_White \
    { \
        displayName = "Red"; \
        statement = QUOTE([ARR_5(1,0,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#FF0000')]); \
    }; \
    class HUD_Orange: HUD_White \
    { \
        displayName = "Orange"; \
        statement = QUOTE([ARR_5(1,0.5,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#FF8000')]); \
    }; \
    class HUD_Yellow: HUD_White \
    { \
        displayName = "Yellow"; \
        statement = QUOTE([ARR_5(1,1,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#FFFF00')]); \
    }; \
    class HUD_Green: HUD_White \
    { \
        displayName = "Green"; \
        statement = QUOTE([ARR_5(0,1,0,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#00FF00')]); \
    }; \
    class HUD_Cyan: HUD_White \
    { \
        displayName = "Cyan"; \
        statement = QUOTE([ARR_5(0,1,1,1,_this#0)] call ls_utility_fnc_hudColorChange); \
        modifierFunction = QUOTE(_this#3#2 set [ARR_2(1,'#00FFFF')]); \
    }; \
    class HUD_Clear: HUD_White \
    { \
        displayName = "No Hud"; \
        icon = "ls_data\icons\hud\noHud.paa"; \
        statement = QUOTE([ARR_5(0,0,0,0,_this#0)] call ls_utility_fnc_hudColorChange); \
    }; \
}

#define INTERACTION_SHIELD_ACTIONS class Shield \
{ \
    displayName = "Shield Health: %1"; \
    condition = "true"; \
    statement = ""; \
    modifierFunction = QUOTE(_this call FUNC(shieldActionModifier)); \
    runOnHover = FALSE; \

    class Activate \
    { \
        displayName = "Activate Shield"; \
        condition = QUOTE(!(_this#0 getVariable [ARR_2(QQGVAR(shieldActive),false)]) and ace_player isEqualTo driver (_this#0) and !(_this#0 getVariable [ARR_2(QQGVAR(shieldRecharging),false)])); \
        statement = QUOTE(_this#0 call FUNC(activateShield)); \
    }; \
    class Deactivate \
    { \
        displayName = "Deactivate Shield"; \
        condition = QUOTE(_this#0 getVariable [ARR_2(QQGVAR(shieldActive),false)] and ace_player isEqualTo driver (_this#0)); \
        statement = QUOTE(_this#0 call FUNC(deactivateShield)); \
    }; \
}