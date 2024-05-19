class CfgWeapons {
    class CLASS(mandalorianArmor_helmet_traditional);
    class CLASS(mandalorianArmor_helmet_deathwatch): CLASS(mandalorianArmor_helmet_traditional) {
        SCOPE_PUBLIC;
        displayName = "[DW] Deathwatch Soldier Helmet";
        hiddenSelectionsTextures[] = {
            "\z\tgf\addons\helmets\traditional\data\camo1_co.paa",
            "\z\tgf\addons\helmets\traditional\data\camo2_co.paa"
        };
    };

    class CLASS(mandalorianArmor_helmet_deathwatch_PreVizsla): CLASS(mandalorianArmor_helmet_deathwatch) {
        displayName = "[KC] Deathwatch Soldier Helmet ('Pre Vizsla')";
        // hiddenSelectionsTextures[] = {
        //     QPATHTOF(deathwatch\data\helmets\traditional\PreVizsla_camo1_co.paa),
        //     QPATHTOF(deathwatch\data\helmets\traditional\PreVizsla_camo2_co.paa)
        // };
    };
};