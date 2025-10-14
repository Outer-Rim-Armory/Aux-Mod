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

    #define FLAG_CARRIER(type,name) \
        class DOUBLES(BNA_KC_carrierFlag,type): BNA_KC_carrierFlag_base { \
            scope = 1; \
            author = AUTHOR; \
            displayName = QUOTE(name); \
            editorPreview = "\ls\core\addons\compat_ace_flags\data\ui\editorPreviews\ls_carrierFlag_republic.jpg"; \
        }


    class ace_flags_carrier_white;
    class BNA_KC_carrierFlag_base: ace_flags_carrier_white  {
        scope = 0;
        scopeCurator = 0;
        author = AUTHOR;

        editorCategory = QEDCAT(Objects);
        editorSubcategory = QEDSUBCAT(Flags);
    };

    FLAG_CARRIER(kc,Keeli Company Flag);
    FLAG_CARRIER(kcmed,Keeli Medics Flag);

};
