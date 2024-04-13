class CfgWeapons {
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    class CLASS(Mortar_M190_Carry): Launcher_Base_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        displayName = "[KC] Model 190 Mortar System";
        picture = "\ls_weapons\_ui\rps6_ca.paa";
        drySound[] = {};

        model = "\ls_vehicles_ground\mortar\ls_ground_mortar_alternateCarry.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\ls_vehicles_ground\mortar\data\republic_co.paa"};

        mass = 300;
        class ACE_CSW {
            // See https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework.html#22-carryable-tripod
            deploy = QCLASS(Mortar_M190);
            type = "mount";

            displayName = "M-190 Mortar System";

            deployTime = 1;
            pickupTime = 1;
        };

        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot {
                iconScale = 0.1;
            };
        };
    };

    class CLASS(Mortar_M190_Turret);
    class CLASS(Mortar_M190_ProxyWeapon): CLASS(Mortar_M190_Turret) {
        magazineReloadTime = 0.5;
    };
};
