class CfgVehicles {
    class ACE_SelfActions;
    class UserActions;
    class OPTRE_M313_UNSC;
    class CLASS(Zillo_Base): OPTRE_M313_UNSC {
        SCOPE_PRIVATE;
        author = AUTHOR;
        displayName = "[KC] Zillo Heavy Hauler (Base)";
        faction = QFACTION(KC);
        editorSubcategory = QEDSUBCAT(APCs);
        crew = QCLASS(Unit_Phase2_CT_Engineer);
        ace_cargo_space = 20;
        fuelCapacity = 12000;
        ace_refuel_canReceive = 1;
        ace_refuel_flowRate = 2;
        ace_refuel_fuelCapacity = 120000;
        hiddenSelections[] = {
            "camo_consoles",
            "camo_exterior",
            "camo_flooring",
            "camo_hull",
            "camo_interior",
            "camo_tracks",
            "camo_tracks2"
        };
        hiddenSelectionsTextures[] = {
            QPATHTOF(land\zillo\data\textures\standard\consoles_co.paa),
            QPATHTOF(land\zillo\data\textures\standard\exterior_details_co.paa),
            QPATHTOF(land\zillo\data\textures\standard\flooring_co.paa),
            QPATHTOF(land\zillo\data\textures\standard\hull_co.paa),
            QPATHTOF(land\zillo\data\textures\standard\interior_co.paa),
            QPATHTOF(land\zillo\data\textures\standard\tracks_co.paa),
            QPATHTOF(land\zillo\data\textures\standard\tracks2_co.paa),
        };
        textureList[] = {"Keeli Company", 1, "Gray", 0};
        class TextureSources {
            class KeeliCompany {
                author = "KC Aux Team";
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\zillo\data\textures\standard\consoles_co.paa),
                    QPATHTOF(land\zillo\data\textures\standard\exterior_details_co.paa),
                    QPATHTOF(land\zillo\data\textures\standard\flooring_co.paa),
                    QPATHTOF(land\zillo\data\textures\standard\hull_co.paa),
                    QPATHTOF(land\zillo\data\textures\standard\interior_co.paa),
                    QPATHTOF(land\zillo\data\textures\standard\tracks_co.paa),
                    QPATHTOF(land\zillo\data\textures\standard\tracks2_co.paa),
                };
            };
            class Gray: KeeliCompany {
                author = "KC Aux Team";
                displayName = "Gray";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\zillo\data\textures\gray\consoles_co.paa),
                    QPATHTOF(land\zillo\data\textures\gray\exterior_details_co.paa),
                    QPATHTOF(land\zillo\data\textures\gray\flooring_co.paa),
                    QPATHTOF(land\zillo\data\textures\gray\hull_co.paa),
                    QPATHTOF(land\zillo\data\textures\gray\interior_co.paa),
                    QPATHTOF(land\zillo\data\textures\gray\tracks_co.paa),
                    QPATHTOF(land\zillo\data\textures\gray\tracks2_co.paa),
                };
            };
        };
        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;
        };
        class UserActions: UserActions
        {
            VS_REPAIRMODE
            VS_CITADELSHIELD
        };
    };
    class CLASS(Zillo): CLASS(Zillo_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Zillo Heavy Hauler";
    };
};
