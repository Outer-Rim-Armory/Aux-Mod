// TODO: Move to PREP
class CfgFunctions
{
    class BNAKC_Jetpacks
    {
        class Main
        {
            file = "\ORA\BNA_KC\addons\jetpacks\Data\Functions\Main";
            class jetpack {};
            class frameHandler {};
            class effectHandler {};
            class deleteEffects {};
            class soundHandler {};
            class fuelHandler {};
        };

        class JetDialog
        {
            file = "\ORA\BNA_KC\addons\jetpacks\Data\Functions\JetDialog";
            class jetDialogUpdateFuelLevel {};
            class shouldShowJetDialog {};
            class jetDialogShowHide {};
            class jetDialogShowHideCreateHandlers {};
        };

        class Utils
        {
            file = "\ORA\BNA_KC\addons\jetpacks\Data\Functions\Utils";
            class hasJetpack {};
            class canUseJetpack {};
            class getJetpackFuel {};
            class playErrorSound {};
        };

        class Fuel
        {
            file = "\ORA\BNA_KC\addons\jetpacks\Data\Functions\Refuel";
            class setJetpackFuel {};
            class addRefuelActions {};

            class refuelFromBody {};
            class canRefuelFromBody {};
            class refuelOtherPlayer {};
            class canRefuelOtherPlayer {};

            class getFuelCan {};
        };
    };
};