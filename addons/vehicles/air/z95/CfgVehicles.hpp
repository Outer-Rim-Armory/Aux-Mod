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

        hiddenselections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = {"3AS\3AS_Z95\Data\orange_co.paa","3AS\3AS_Z95\Data\cockpit_co.paa","3AS\3AS_Z95\data\glass\glass_ca"};

        cabinOpenSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 10, 1, 40};
        cabinCloseSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 10, 1, 40};
    };
};