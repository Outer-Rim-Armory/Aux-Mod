class CfgVehicles {
    class B_MBT_01_base_F;
    class B_MBT_01_cannon_F: B_MBT_01_base_F {
        class Turrets;
    };
    class OPTRE_M808B_base: B_MBT_01_cannon_F {
        class Turrets: Turrets {
            class MainTurret;
            class CargoTurret1;
            class CargoTurret2;
            class CargoTurret3;
            class CargoTurret4;
            class CargoTurret5;
            class CargoTurret6;
            class CargoTurret7;
            class CargoTurret8;
        };
        class AnimationSources {
            class muzzle_rot_cannon;
            class recoil_source;
            class muzzle_rot_coax;
        };
    };
    class OPTRE_M808B_UNSC: OPTRE_M808B_base {
        class ACE_SelfActions;
    };
    class CLASS(Plesioth_Base): OPTRE_M808B_UNSC {
        SCOPE_PRIVATE;
        author = AUTHOR;

        editorSubcategory = QEDSUBCAT(Tanks);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Plesioth_Tan);

        displayName = "Plesioth";

        hiddenSelectionsTextures[] = {
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\det_3_desert_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\mine_roller_desert_co.paa"
        };

        textureList[] = {"TechnoUnion", 1, "EPF", 0};
        class TextureSources {
            class TechnoUnion {
                author = "Article 2 Studios";
                displayName = "Techno Union";
                factions[] = {QFACTION(TU)};
                textures[] = {
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\det_3_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\mine_roller_desert_co.paa"
                };
            };
            class EPF: TechnoUnion {
                displayName = "El President Forces";
                factions[] = {QFACTION(EPF)};
                textures[] = {
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_lopo_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"
                };
            };
            class BS: TechnoUnion {
                displayName = "Black Suns Crime Syndicate";
                factions[] = {QFACTION(BS)};
                textures[] = {
                    "OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_base_black_co.paa",
                    "OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_tur_black_co.paa",
                    "OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\det_3_black_co.paa",
                    "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
                    "OPTRE_Vehicles_Tracked\Scorpion\data\texture\Scorp_net_wood_ca.paa",
                    "OPTRE_Vehicles_Tracked\Scorpion\data\texture\Scorp_net_wood_ca.paa",
                    "OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\mine_roller_black_co.paa"
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {};
            class CargoTurret1: CargoTurret1 {};
            class CargoTurret2: CargoTurret2 {};
            class CargoTurret3: CargoTurret3 {};
            class CargoTurret4: CargoTurret4 {};
            class CargoTurret5: CargoTurret5 {};
            class CargoTurret6: CargoTurret6 {};
            class CargoTurret7: CargoTurret7 {};
            class CargoTurret8: CargoTurret8 {};
        };

        class AnimationSources: AnimationSources {
            class muzzle_rot_cannon: muzzle_rot_cannon {
                weapon = "OPTRE_90mm_M512";
            };
            class recoil_source: recoil_source {
                weapon = "OPTRE_90mm_M512";
            };
            class muzzle_rot_coax: muzzle_rot_coax {
                weapon = "OPTRE_M247T_Coax";
            };
        };
    };
};