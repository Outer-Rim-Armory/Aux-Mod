class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(MarkSelf) {
                displayName = "Mark Self";
                icon = "";

                exceptions[] = {"notOnMap"};
                condition = QUOTE(GVAR(showMarkSelfAction));
                statement = QUOTE([] call FUNC(markSelf));
                modifierFunction = QUOTE(_this call FUNC(modifyInteraction));
                insertChildren = QUOTE(_this call FUNC(insertChildren));
            };
        };
    };
};
