class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class PREFIX {
                displayName = "Keeli Company Aux";
                collapsed = TRUE;
                class Attributes {
                    class GVAR(isRefuelStation) {
                        displayName = "Jetpack Refuel Station";
                        tooltip = "Set if the object should act as a jetpack refuel station.";
                        property = QGVAR(isRefuelStationID);

                        control = "CheckboxNumber";
                        defaultValue = FALSE;

                        condition = "objectHasInventoryCargo";
                        expression = QUOTE([ARR_2(_this,_value)] call FUNC(addRefuelAction));
                    };
                };
            };
        };
    };
};
