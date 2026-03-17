class CfgVehicles {
    class HMCS;
    class CLASS(Krayt_Base): HMCS {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(Mechs);
        faction = QFACTION(KC);

        displayName = "Krayt (Base)";

        hiddenSelections[] = {"hm_01","hm_02","hm_03","hm_glass","hmguns","hm_clan","hm_clanAlt","hm_clanText","hm_insignia","hm_number"};
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\krayt\data\textures\Reeker_HM_1_co.paa),
            QPATHTOF(land\krayt\data\textures\Reeker_HM_2_co.paa),
            QPATHTOF(land\krayt\data\textures\Reeker_HM_3_co.paa),
            "HMCS\tex\hm_glass\hm_glass_vw1_ca.paa",
            QPATHTOF(land\krayt\data\textures\Reeker_HMGuns_01_co.paa),
            "",
            "",
            "",
            "",
            ""
        };
    };

    class CLASS(Krayt): CLASS(Krayt_Base) {
        SCOPE_PUBLIC;

        displayName = "Krayt";

        class UserActions {
            VS_SQUADSHIELD
            VS_CITADELSHIELD
        };

        tf_range = 45000; // 1.5x range
    };
};
