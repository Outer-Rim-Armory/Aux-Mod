class Cfg3DEN
{
    class Object
    {
        class AttributeCategories
        {
            class BNA_KC
            {
                displayName = "Keeli Company Aux";
                collapsed = 1;
                class Attributes
                {
                    class BNA_KC_isJetpackRefuelStation
                    {
                        displayName = "Jetpack Refuel Station";
                        tooltip = "Set if the object should act as a jetpack refuel station";
                        property = "BNA_KC_isJetpackRefuelStationID";

                        control = "CheckboxNumber";
                        defaultValue = 0;

                        condition = "objectHasInventoryCargo";
                        expression = "[_this, _value] call BNAKC_Jetpacks_fnc_addRefuelActions";
                    };
                };
            };
        };
    };
};