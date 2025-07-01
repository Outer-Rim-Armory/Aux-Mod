class CfgVehicles {
    class 3AS_Delta7_F;
    class CLASS(Delta7): 3AS_Delta7_F {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(Planes);

        displayName = "Delta-7";
        crew = QCLASS(Unit_Jedi_Commander);
        typicalCargo[] = {QCLASS(Unit_Jedi_Commander)};

        hiddenselections[] = {"camo","camo1","camo2","camo3"};
        hiddenSelectionsTextures[] = {
            "3AS\3AS_Delta7\data\Textures\Delta7_Hull_Orange_co.paa",
            "3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa",
            "3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa",
            "3as\3as_delta7\data\delta7_interfaces_ca.paa"
            };

        cabinOpenSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 1.77828 , 1, 40};
        cabinOpenSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Open.wss), 10, 1, 40};
        cabinCloseSound[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 1.77828, 1, 40};
        cabinCloseSoundInternal[] = {QPATHTOF(sounds\data\audio\arc170\Canopy_Close.wss), 10, 1, 40};
    };
};
