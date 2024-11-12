#define SHIELD_HEALTH_DEFAULT 20
#define SHIELD_REGEN_DELAY_DEFAULT 10
#define SHIELD_REGEN_AMOUNT_DEFAULT 1
#define SHIELD_HIT_SOUND_COOLDOWN 0.3

#define SHIELD_DAMAGE_COLOR_SCALE ["#FF0000", "#FF4400", "#FF7D16", "#FF9916", "#FCB121", "#FFD52C", "#FFEC4D", "#FFFF7E", "#FFFFFF"]

#define SHIELD_TOGGLE class GVAR(toggle) { \
    displayName = "Shield Health: %1"; \
    condition = "true"; \
    statement = ""; \
    modifierFunction = QUOTE(call FUNC(modifyInteraction)); \
    class Activate { \
        displayName = "Activate Shield"; \
        condition = QUOTE(ace_player call FUNC(canActivate)); \
        statement = QUOTE(call FUNC(activate)); \
    }; \
    class Deactivate { \
        displayName = "Deactivate Shield"; \
        condition = QUOTE(ace_player call FUNC(canDeactivate)); \
        statement = QUOTE(call FUNC(deactivate)); \
    }; \
}
