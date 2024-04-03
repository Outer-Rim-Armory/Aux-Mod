class CfgVehicles {
    class CLASS(Gonk_Base);
    class CLASS(Gonk_Uniforms): CLASS(Gonk_Base) {
        SCOPE_PUBLIC;
        displayName = "Uniform Dispenser";

        class UserActions {
            class ChangeMenu_Uniforms {
                displayName = "<t color='#FFFFFF'>View Rank Uniforms</t>";

                position = "camera";
                radius = 3;
                onlyForPlayer = TRUE;

                hideOnUse = FALSE;
                priority = 100;

                condition = QUOTE(UNIFORMMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE(UNIFORMMENU_SETPAGE(UNIFORMMENU_PAGE_RANKUNIFORMS););
            };

            class ChangeMenu_Helmets: ChangeMenu_Uniforms {
                priority = 99;
                displayName = "<t color='#FFFFFF'>View Helmets</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE(UNIFORMMENU_SETPAGE(UNIFORMMENU_PAGE_DETACHMENTHELMETS));
            };

            class Arsenal_Customize: ChangeMenu_Uniforms {
                priority = 98;
                displayName = "<t color='#FFFFFF'>Customize Loadout</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE == MENU_PAGE_HOME);
                statement = QUOTE('customize' call FUNC(openArsenal));
            };

            class ChangeMenu_Home: ChangeMenu_Uniforms {
                displayName = "<t font='RobotoCondensedBold' color='#FFFFFF'>Home</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE != MENU_PAGE_HOME);
                statement = QUOTE(UNIFORMMENU_SETPAGE(nil));
            };

            class DetachmentHelmet_Tanker: ChangeMenu_Uniforms {
                displayName = "<t color='#FFFFFF'>Grab Crew Helmet</t>";
                condition = QUOTE(UNIFORMMENU_GETPAGE == UNIFORMMENU_PAGE_DETACHMENTHELMETS);
                statement = QUOTE(ace_player addHeadgear QQCLASS(Helmet_Phase2_Tanker_CT));
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