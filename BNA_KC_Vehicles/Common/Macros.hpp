#include "..\..\BNA_KC_Gear\Macros.hpp"

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

#define SPECIAL_LOAD class SpecialLoadVehicle \
{ \
    displayName = "Load Vehicle (Custom)"; \
    displayNameDefault = "<img size=2 image='\a3\ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa'>"; \
    position = "pilotview"; \
    radius = 30; \
    onlyForPlayer = 0; \
    hideOnUse = 1; \
    priority = 5; \
    condition = QUOTE(this call BNAKC_fnc_canSpecialLoad); \
    statement = QUOTE(this call BNAKC_fnc_specialLoad); \
};

#define INVENTORY_VEHICLE_MEDICAL class TransportWeapons {}; \
class TransportMagazines \
{ \
    class _xx_3AS_SmokePurple \
    { \
        magazine = "3AS_SmokePurple"; \
        count = 1; \
    }; \
    class _xx_SquadShieldMagazine \
    { \
        magazine = "SquadShieldMagazine"; \
        count = 1; \
    }; \
}; \
class TransportBackpacks {}; \
class TransportItems \
{ \
    class _xx_ACE_elasticBandage \
    { \
        name = "ACE_elasticBandage"; \
        count = 30; \
    }; \
    class _xx_ACE_packingBandage \
    { \
        name = "ACE_packingBandage"; \
        count = 20; \
    }; \
    class _xx_ACE_quickclot \
    { \
        name = "ACE_quickclot"; \
        count = 15; \
    }; \
    class _xx_ACE_salineIV \
    { \
        name = "ACE_salineIV"; \
        count = 1; \
    }; \
    class _xx_ACE_salineIV_500 \
    { \
        name = "ACE_salineIV_500"; \
        count = 1; \
    }; \
    class _xx_ACE_salineIV_250 \
    { \
        name = "ACE_salineIV_250"; \
        count = 2; \
    }; \
    class _xx_ACE_morphine \
    { \
        name = "ACE_morphine"; \
        count = 2; \
    }; \
    class _xx_ACE_epinephrine \
    { \
        name = "ACE_epinephrine"; \
        count = 2; \
    }; \
    class _xx_RD501_Painkiller \
    { \
        name = "RD501_Painkiller"; \
        count = 5; \
    }; \
    class _xx_ACE_tourniquet \
    { \
        name = "ACE_tourniquet"; \
        count = 6; \
    }; \
    class _xx_ACE_Splint \
    { \
        name = "ACE_Splint"; \
        count = 1; \
    }; \
};