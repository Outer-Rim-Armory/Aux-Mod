class CfgVehicles {
    class CLASS(Jetpack_JT12);
    class GVAR(jetpack_hussarWings): CLASS(Jetpack_JT12) {
        displayName = "[KC] Hussar Wings";

        model = "\3as\3as_Characters\Clones\Backpacks\3as_Hussar_Wings.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\3AS\3AS_Characters\Clones\Backpacks\data\Wings\Hussar_Wings_co.paa"};
        picture = "\3AS\3AS_Characters\Clones\Backpacks\Data\UI\Wings_Icon_UI_ca.paa";

        EGVAR(jetpacks,effectPoints)[] = {};
        EGVAR(jetpacks,effectSound) = "";
        EGVAR(jetpacks,lightColor)[] = {0, 0, 0};
    };

    class GVAR(cloneJetpack_stachePack): CLASS(Jetpack_JT12) {
        displayName = "[KC] JT-12 Stache Pack";

        EGVAR(jetpacks,fuel) = 50;
        EGVAR(jetpacks,speed) = 380;
    };


};
