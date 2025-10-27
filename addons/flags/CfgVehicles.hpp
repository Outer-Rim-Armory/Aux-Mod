class CfgVehicles {


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
     // File name (flag_XXXX_ca.paa), Item name

    FLAG_CARRIER(kc,Keeli Company Flag);
    FLAG_CARRIER(kc_med,Keeli Medics Flag);

};
