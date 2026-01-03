class CfgVehicles {
    class 3AS_Z95_Republic;
    class CLASS(Z95): 3AS_Z95_Republic {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);

        displayName = "Z-95 Headhunter";
        crew = QCLASS(Unit_Phase2_CXA);
        typicalCargo[] = {QCLASS(Unit_Phase2_CXA)};

        weapons[] = {
            "3AS_Z95_Light_Cannon",
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
            };
        magazines[] = {
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "3AS_Z95_750Rnd_Light_shells",
            "120Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine",
            "120Rnd_CMFlare_Chaff_Magazine"
        };

        hiddenselections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {
            "3AS\3AS_Z95\Data\orange_co.paa",
            "3AS\3AS_Z95\Data\cockpit_co.paa",
            "3AS\3AS_Z95\data\glass\glass_ca"
            };
        textureList[] = {"Standard", 0, "Orange", 1, "Blue", 0, "Green", 0, "Yellow", 0, "Empire", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "01: Republic";
                factions[] = {};
                textures[] = {
                    "3AS\3AS_Z95\Data\body_co.paa",
                    "3AS\3AS_Z95\Data\cockpit_co.paa",
                    "3AS\3AS_Z95\data\glass\glass_ca"
                };
            };
            class Orange: Standard {
                author = "3rd Army Studios";
                displayName = "02: Orange";
                factions[] = {};
                textures[] = {
                    "3AS\3AS_Z95\Data\orange_co.paa",
                    "3AS\3AS_Z95\Data\cockpit_co.paa",
                    "3AS\3AS_Z95\data\glass\glass_ca"
                };
            };
            class Blue: Standard {
                displayName = "03: Blue";
                textures[] = {
                    "3AS\3AS_Z95\Data\blue_co.paa",
                    "3AS\3AS_Z95\Data\cockpit_co.paa",
                    "3AS\3AS_Z95\data\glass\glass_ca"
                };
            };
            class Green: Standard {
                displayName = "04: Green";
                textures[] = {
                    "3AS\3AS_Z95\Data\green_co.paa",
                    "3AS\3AS_Z95\Data\cockpit_co.paa",
                    "3AS\3AS_Z95\data\glass\glass_ca"
                };
            };
            class Yellow: Standard {
                displayName = "05: Yellow";
                textures[] = {
                    "3AS\3AS_Z95\Data\yellow_co.paa",
                    "3AS\3AS_Z95\Data\cockpit_co.paa",
                    "3AS\3AS_Z95\data\glass\glass_ca"
                };
            };
            class Empire: Standard {
                displayName = "06: Empire";
                textures[] = {
                    QPATHTOF(air\z95\data\textures\Empire_body_co.paa),
                    "3AS\3AS_Z95\Data\cockpit_co.paa",
                    "3AS\3AS_Z95\data\glass\glass_ca"
                };
            };
        };

        cabinOpenSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 10, 1, 40};
        cabinCloseSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 10, 1, 40};
    };
};
