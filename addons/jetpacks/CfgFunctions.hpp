// TODO: Move to PREP
class CfgFunctions {
    class BNA_KC_Jetpacks {
        class Main {
            file = "\ORA\BNA_KC\addons\jetpacks\Data\Functions\Main";
            class jetpack {};
            class frameHandler {};
            class effectHandler {};
            class soundHandler {};
            class fuelHandler {};
        };

        class Fuel {
            file = "\ORA\BNA_KC\addons\jetpacks\Data\Functions\Refuel";
            class refuelFromBody {};
            class refuelOtherPlayer {};
        };
    };
};