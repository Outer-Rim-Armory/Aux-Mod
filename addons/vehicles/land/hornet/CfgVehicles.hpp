class CfgVehicles {
    class O_LSV_02_unarmed_F;
    class CLASS(Hornet_Unarmed): O_LSV_02_unarmed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_Unarmed);

        displayName = "01: Hornet Strike Vehicle";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\Body_CamoKC_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"CamoKC", 1, "CamoGrey", 0};
        class TextureSources {
            class CamoKC {
                author = AUTHOR;
                displayName = "Brown Camo";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_CamoKC_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
            class CamoGrey: CamoKC {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_CamoGrey_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON;
    };

    class CLASS(Hornet_Unarmed_Carnage): O_LSV_02_unarmed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_Unarmed);

        displayName = "04: Hornet Strike Vehicle (Carnage)";
        crew = QCLASS(cloneCommando_unit);
        typicalCargo[] = {QCLASS(cloneCommando_unit)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Carnage)};

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\Body_Carnage_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"Carnage", 1};
        class TextureSources {
            class Carnage {
                displayName = "Carnage";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_Carnage_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON;
    };

    class CLASS(Hornet_Unarmed_Ceremonial): O_LSV_02_unarmed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_Unarmed);

        displayName = "04: Hornet Strike Vehicle (Ceremonial)";
        crew = QCLASS(Unit_Phase2_Ceremonial_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Ceremonial_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Body_CO.paa),
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Wheels_CO.paa),
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Interior_CO.paa),
        };
        textureList[] = {"Ceremonial", 1};
        class TextureSources {
            class Ceremonial {
                displayName = "Ceremonial";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Body_CO.paa),
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Wheels_CO.paa),
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Interior_CO.paa),
                };
            };
        };

        INVENTORY_VEHICLE_RECON;
    };

    class Car_F;
    class LSV_02_base_F: Car_F {
        class AnimationSources;
        class Turrets;
    };
    class LSV_02_armed_base_F: LSV_02_base_F {
        class Turrets: Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_armed_F: LSV_02_armed_base_F {};
    class CLASS(Hornet_MG): O_LSV_02_armed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_MG);

        displayName = "02: Hornet Strike Vehicle (MG)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\Body_CamoKC_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"BrownCamo", 1, "GreyCamo", 0};
        class TextureSources {
            class CamoKC {
                author = AUTHOR;
                displayName = "Brown Camo";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_CamoKC_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
            class CamoGrey: CamoKC {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_CamoGrey_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(MachineGun_Hornet)};
                magazines[] = {
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax)
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources {
            class Minigun {
                source = "revolving";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_hide {
                source = "reload";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(MachineGun_Hornet);
            };
        };
    };

    class CLASS(Hornet_MG_Carnage): O_LSV_02_armed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_MG);

        displayName = "05: Hornet Strike Vehicle (MG, Carnage)";
        crew = QCLASS(cloneCommando_unit);
        typicalCargo[] = {QCLASS(cloneCommando_unit)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Carnage)};

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\Body_Carnage_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
        };
        textureList[] = {"Carnage", 1};
        class TextureSources {
            class Carnage {
                displayName = "Carnage";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_Carnage_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(MachineGun_Hornet)};
                magazines[] = {
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax)
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources {
            class Minigun {
                source = "revolving";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_hide {
                source = "reload";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(MachineGun_Hornet);
            };
        };
    };

    class CLASS(Hornet_MG_Ceremonial): O_LSV_02_armed_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_MG);

        displayName = "05: Hornet Strike Vehicle (MG, Ceremonial)";
        crew = QCLASS(Unit_Phase2_Ceremonial_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Ceremonial_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Body_CO.paa),
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Wheels_CO.paa),
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Interior_CO.paa),
        };
        textureList[] = {"Ceremonial", 1};
        class TextureSources {
            class Ceremonial {
                displayName = "Ceremonial";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Body_CO.paa),
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Wheels_CO.paa),
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Interior_CO.paa),
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(MachineGun_Hornet)};
                magazines[] = {
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax),
                    QCLASS(Mag_1000Rnd_Coax)
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources {
            class Minigun {
                source = "revolving";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_hide {
                source = "reload";
                weapon = QCLASS(MachineGun_Hornet);
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(MachineGun_Hornet);
            };
        };
    };
    class CLASS(Hornet_Armed): CLASS(Hornet_MG) {
        SCOPE_HIDDEN;
    };

    class LSV_02_AT_base_F: LSV_02_base_F {
        class AnimationSources;
        class Turrets: Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_AT_F: LSV_02_AT_base_F {};
    class CLASS(Hornet_AT): O_LSV_02_AT_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_AT);

        displayName = "03: Hornet Strike Vehicle (AT)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\Body_CamoKC_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
        };
        textureList[] = {"BrownCamo", 1, "GreyCamo", 0};
        class TextureSources {
            class BrownCamo {
                author = AUTHOR;
                displayName = "Brown Camo";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_CamoKC_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
            class GreyCamo: BrownCamo {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_CamoGrey_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class AnimationSources: AnimationSources {
            class VoronaMuzzle_reload {
                source = "reload";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_reloadMagazine {
                source = "reloadMagazine";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_revolving {
                source = "revolving";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(Launcher_Hornet);
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Launcher_Hornet)};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };

    class CLASS(Hornet_AT_Carnage): O_LSV_02_AT_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_AT);

        displayName = "06: Hornet Strike Vehicle (AT, Carnage)";
        crew = QCLASS(cloneCommando_unit);
        typicalCargo[] = {QCLASS(cloneCommando_unit)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Carnage)};

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\Body_Carnage_co.paa),
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
        };
        textureList[] = {"Carnage", 0};
        class TextureSources {
            class Carnage {
                displayName = "Carnage";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\Body_Carnage_co.paa),
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class AnimationSources: AnimationSources {
            class VoronaMuzzle_reload {
                source = "reload";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_reloadMagazine {
                source = "reloadMagazine";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_revolving {
                source = "revolving";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(Launcher_Hornet);
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Launcher_Hornet)};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };

    class CLASS(Hornet_AT_Ceremonial): O_LSV_02_AT_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Hornet_AT);

        displayName = "06: Hornet Strike Vehicle (AT, Ceremonial)";
        crew = QCLASS(Unit_Phase2_Ceremonial_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Ceremonial_CT)};
        side = BLUFOR;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Body_CO.paa),
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Wheels_CO.paa),
            QPATHTOF(land\hornet\data\textures\KC_Hornet_Interior_CO.paa),
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
            QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
        };
        textureList[] = {"Carnage", 0};
        class TextureSources {
            class Carnage {
                displayName = "Carnage";
                textures[] = {
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Body_CO.paa),
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Wheels_CO.paa),
                    QPATHTOF(land\hornet\data\textures\KC_Hornet_Interior_CO.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa),
                    QPATHTOF(land\hornet\data\textures\Launcher_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_RECON;

        class AnimationSources: AnimationSources {
            class VoronaMuzzle_reload {
                source = "reload";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_reloadMagazine {
                source = "reloadMagazine";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_revolving {
                source = "revolving";
                weapon = QCLASS(Launcher_Hornet);
            };
            class VoronaMuzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(Launcher_Hornet);
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Launcher_Hornet)};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };
};
