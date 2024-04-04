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
            class ChangeMenu_Home {
                displayName = "<t color='#FFFFFF' font='RobotoCondensedBold'>Home</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 100;

                condition = QUOTE(LOADOUTMENU_GETPAGE != MENU_PAGE_HOME);
                statement = QUOTE(LOADOUTMENU_SETPAGE(nil));
            };

            class Arsenal_Attachments: ChangeMenu_Home {
                displayName = "<t color='#FFFFFF'>Weapon Attachments</t>";
                priority = 99;

                condition = QUOTE(LOADOUTMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE('attachments' call FUNC(openArsenal));
            };

            class Add_Radio: ChangeMenu_Home {
                displayName = "<t color='#FFFFFF'>Add Radio</t>";
                priority = 0;

                condition = QUOTE(LOADOUTMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE(ace_player linkItem 'SWLB_comlink');
            };
        };
    };
};