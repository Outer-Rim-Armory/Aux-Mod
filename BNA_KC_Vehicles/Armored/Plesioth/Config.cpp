#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class B_MBT_01_base_F;
    class B_MBT_01_cannon_F: B_MBT_01_base_F
    {
        class Turrets;
    };
    class OPTRE_M808B_base: B_MBT_01_cannon_F
    {
        class Turrets: Turrets
        {
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
    };
    class OPTRE_M808B_UNSC: OPTRE_M808B_base {};
    class BNA_KC_Plesioth_Base: OPTRE_M808B_UNSC
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeCurator = 0;

        // Editor Attributes
        editorPreview = "\OPTRE_Vehicles_Tracked\Scorpion\data\UI\OPTRE_M808B_UNSC.jpg";

        displayName = "Plesioth";

        hiddenSelectionsTextures[] =
        {
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_lopo_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
            "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"
        };

        textureList[] = {"EPF", 1, "TechnoUnion", 0};
        class TextureSources
        {
            class EPF
            {
                author = "Article 2 Studios";
                displayName = "El President Forces";
                factions[] = {"BNA_KC_OPFOR_EPF"};
                textures[] =
                {
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_lopo_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"
                };
            };
            class TechnoUnion: EPF
            {
                displayName = "Techno Union";
                factions[] = {"BNA_KC_OPFOR_TU"};
                textures[] =
                {
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_base_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_tur_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\det_3_desert_co.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_decals_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\Scorp_net_desert_ca.paa",
                    "\OPTRE_Vehicles_Tracked\Scorpion\data\texture\camo\mine_roller_desert_co.paa"
                };
            };
        };

        class Turrets: Turrets
        {
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
    };
};