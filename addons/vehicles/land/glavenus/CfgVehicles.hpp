class CfgVehicles {
    class O_MRAP_02_F;
    class CLASS(Glavenus_Unarmed): O_MRAP_02_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Glavenus_Unarmed);

        displayName = "Glavenus (Unarmed)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources {
            class KeeliCompany {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body2_co.paa),
                    QPATHTOF(data\csatTurret\KeeliCompanyWhite_Turret_co.paa)
                };
            };
            class CamoKC: KeeliCompany {
                displayName = "Keeli Company Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC_Turret_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoBrown_Turret_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoGrey_Turret_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_GLAVTRANS(2);
    };

    class CLASS(Glavenus_Medic): CLASS(Glavenus_Unarmed) {
        displayName = "Glavenus (Medic)";
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Glavenus_Medic);

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};
        attendant = 1;

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\glavenus\data\textures\Medic\Body_co.paa),
            QPATHTOF(land\glavenus\data\textures\Medic\Body2_co.paa),
            ""
        };
        textureList[] = {};
        class TextureSources {};

        INVENTORY_VEHICLE_GLAVMED(2);
    };

    class Car;
    class Car_F: Car {
        class Turrets;
    };
    class MRAP_02_base_F: Car_F {};
    class MRAP_02_hmg_base_F: MRAP_02_base_F {
        class AnimationSources;
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F {};
    class CLASS(Glavenus_HMG): O_MRAP_02_hmg_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Glavenus_HMG);

        displayName = "Glavenus (HMG)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources {
            class KeeliCompany {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body2_co.paa),
                    QPATHTOF(data\csatTurret\KeeliCompanyWhite_Turret_co.paa)
                };
            };
            class CamoKC: KeeliCompany {
                displayName = "Keeli Company Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC_Turret_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoBrown_Turret_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoGrey_Turret_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_GLAVTRANS(2);

        class AnimationSources: AnimationSources {
            class muzzle_hide {
                source = "reload";
                weapon = QCLASS(Coax_Reek);
            };
            class muzzle_rot {
                source = "ammorandom";
                weapon = QCLASS(Coax_Reek);
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                weapons[] = {QCLASS(Coax_Reek)};
                magazines[] = {
                    QCLASS(MAG_1000Rnd_Coax),
                    QCLASS(MAG_1000Rnd_Coax),
                    QCLASS(MAG_1000Rnd_Coax)
                };
            };
        };
    };

    class O_MRAP_02_gmg_F;
    class CLASS(Glavenus_GMG): O_MRAP_02_gmg_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Cars);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,Glavenus_HMG);

        displayName = "Glavenus (GMG)";
        crew = QCLASS(Unit_Phase2_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_CT)};
        side = BLUFOR;

        weapons[] = {QCLASS(Horn_Glavenus), "SmokeLauncher"};

        hiddenSelectionsTextures[] = {};
        textureList[] = {"KeeliCompany", 1, "CamoKC", 0, "CamoBrown", 0, "CamoGrey", 0};
        class TextureSources {
            class KeeliCompany {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\KeeliCompany\Body2_co.paa),
                    QPATHTOF(data\csatTurret\KeeliCompanyWhite_Turret_co.paa)
                };
            };
            class CamoKC: KeeliCompany {
                displayName = "Keeli Company Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoKC\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoKC_Turret_co.paa)
                };
            };
            class CamoBrown: KeeliCompany {
                displayName = "Brown Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoBrown\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoBrown_Turret_co.paa)
                };
            };
            class CamoGrey: KeeliCompany {
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\glavenus\data\textures\CamoGrey\Body2_co.paa),
                    QPATHTOF(data\csatTurret\CamoGrey_Turret_co.paa)
                };
            };
        };

        INVENTORY_VEHICLE_GLAVTRANS(2);
    };
};