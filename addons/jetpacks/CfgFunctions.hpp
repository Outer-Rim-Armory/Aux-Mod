// TODO: Move to PREP
class CfgFunctions
{
    class BNAKC_Jetpacks
    {
        class Main
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Main";
            class jetpack {};
            class frameHandler {};
            class effectHandler {};
            class deleteEffects {};
            class soundHandler {};
            class fuelHandler {};
        };

        class JetDialog
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\JetDialog";
            class jetDialogOnLoad {};
            class jetDialogUpdateFuelLevel {};
            class shouldShowJetDialog {};
            class jetDialogShowHide {};
            class jetDialogShowHideCreateHandlers {};
        };

        class Utils
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Utils";
            class hasJetpack {};
            class canUseJetpack {};
            class getJetpackFuel {};
            class playErrorSound {};
        };

        class Fuel
        {
            file = "BNA_KC_Gear\Jetpacks\Data\Functions\Refuel";
            class setJetpackFuel {};
            class addRefuelActions {};

            class refuelFromBody {};
            class canRefuelFromBody {};
            class refuelOtherPlayer {};
            class canRefuelOtherPlayer {};

            class addJetpackNameIcon {};

            class getFuelCan {};
        };
    };
};