class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class GVAR(switchExternalChannel) {
                displayName = "Switch External Intercom Channel";
                condition = QUOTE(!isNull (_player getVariable [ARR_2('TFAR_externalIntercomVehicle',objNull)]));
                statement = "";
                insertChildren = QUOTE(_player call FUNC(external_insertChildren));
            };
        };
    };
};