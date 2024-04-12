class CfgVehicles {
    class APC_Wheeled_01_base_F;
    class 3AS_ATAP_Base: APC_Wheeled_01_base_F {
        class ACE_SelfActions;
        class UserActions;
    };
    class CLASS(ATAP): 3AS_ATAP_Base {
        SCOPE_PUBLIC;
        author = AUTHOR;

        faction = QCLASS(Faction_KC);
        editorSubcategory = QCLASS(EdSubCat_Walkers);
        editorPreview = EEDITOR_PREVIEW(vehicles\land\SUBCOMPONENT,ATAP);

        displayName = "AT-AP";
        crew = QCLASS(Unit_Phase2_Tanker_CT);
        typicalCargo[] = {QCLASS(Unit_Phase2_Tanker_CT)};

        hiddenSelectionsTextures[] = {
            QPATHTOF(land\atap\data\textures\KeeliCompany\Body_co.paa),
            QPATHTOF(land\atap\data\textures\KeeliCompany\Weapons_co.paa),
            QPATHTOF(land\atap\data\textures\KeeliCompany\Legs_co.paa)
        };

        textureList[] = {"Standard", 0, "KeeliCompany", 1, "CamoGrey", 0};
        class TextureSources {
            class Standard {
                author = "3rd Army Studios";
                displayName = "Standard";
                factions[] = {};
                textures[] = {
                    "\3as\3AS_ATAP\data\Hull_CO.paa",
                    "\3as\3AS_ATAP\data\weapons and decals_CO.paa",
                    "\3as\3AS_ATAP\data\legs_CO.paa"
                };
            };
            class KeeliCompany: Standard {
                author = AUTHOR;
                displayName = "Keeli Company";
                factions[] = {};
                textures[] = {
                    QPATHTOF(land\atap\data\textures\KeeliCompany\Body_co.paa),
                    QPATHTOF(land\atap\data\textures\KeeliCompany\Weapons_co.paa),
                    QPATHTOF(land\atap\data\textures\KeeliCompany\Legs_co.paa)
                };
            };
            class CamoGrey: Standard {
                author = AUTHOR;
                displayName = "Grey Camo";
                textures[] = {
                    QPATHTOF(land\atap\data\textures\CamoGrey\Body_co.paa),
                    QPATHTOF(land\atap\data\textures\CamoGrey\Weapons_co.paa),
                    QPATHTOF(land\atap\data\textures\CamoGrey\Legs_co.paa)
                };
            };
        };

        class ACE_SelfActions: ACE_SelfActions {
            AI_CREW_SPAWNER;

            INTERCOM_START;
                INTERCOM_DISABLED;
                INTERCOM_CREW;
            INTERCOM_END;
        };

        class UserActions: UserActions {
            class PlayAlarm {
                displayName = "<t font='RobotoCondensedBold' color='#FFFFFF'>Play Alarm</t>";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\portraitSound_ca.paa'>";

                position = "pilotview";
                radius = 30;
                onlyForPlayer = FALSE;

                hideOnUse = TRUE;
                priority = 5;

                condition = QUOTE(ace_player == currentPilot this;);
                statement = QUOTE(playSound3D [ARR_7(QQPATHTOF(sounds\data\audio\atte\Alarm.ogg),objNull,false,getPosASL this,5,1,100)];);
            };
        };

        INVENTORY_VEHICLE_BASE(4);
    };
};