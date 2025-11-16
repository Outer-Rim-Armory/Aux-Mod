class CfgVehicles {
    class CLASS(Gonk_Base);
    class CLASS(Gonk_Uniforms): CLASS(Gonk_Base) {
        SCOPE_PUBLIC;
        displayName = "Uniform Dispenser";

        class UserActions {
            class Arsenal_Customize {
                displayName = "<t color='#FFFFFF'>Customize Loadout</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 0;

                condition = QUOTE(GVAR(rankPage) == MENU_PAGE_HOME);
                statement = QUOTE('customize' call FUNC(openArsenal));
            };
        };
    };

    class CLASS(Gonk_Loadouts): CLASS(Gonk_Base) {
        SCOPE_PUBLIC;
        displayName = "Loadouts Gonk";

        class UserActions {
            class Arsenal_Attachments {
                displayName = "<t color='#FFFFFF'>Weapon Attachments</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 1;

                condition = QUOTE(GVAR(loadoutPage) == MENU_PAGE_HOME);
                statement = QUOTE('attachments' call FUNC(openArsenal));
            };

            class Add_Radio: Arsenal_Attachments {
                displayName = "<t color='#FFFFFF'>Add Radio</t>";
                priority = 0;

                statement = QUOTE(ace_player linkItem 'ls_radios_cwp8');
            };
        };
    };
};
