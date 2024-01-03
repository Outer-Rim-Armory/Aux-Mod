#define DEPLOYABLES_DEPLOY_ANIMATION_DURATION 0.925

#define MENU_PAGE_HOME 0
#define UNIFORMMENU_PAGE_RANKUNIFORMS 1
#define UNIFORMMENU_PAGE_DETACHMENTHELMETS 2
#define UNIFORMMENU_GETPAGE ace_player getVariable [QQGVAR(UniformMenu_Page), MENU_PAGE_HOME]
#define UNIFORMMENU_SETPAGE(var1) ace_player getVariable [QQGVAR(UniformMenu_Page), var1]

#define LOADOUTMENU_GETPAGE ace_player getVariable [QQGVAR(LoadoutMenu_Page), MENU_PAGE_HOME]
#define LOADOUTMENU_SETPAGE(var1) ace_player getVariable [QQGVAR(LoadoutMenu_Page), var1]