#include "CfgPatches.hpp"
#include "\BNA_KC_Gear\Macros.hpp"


class CfgUnitInsignia
{
    class BNA_KC_Kamino_Cloner
    {
        author = "SweMonkey and DartRuffian";
        displayName = "[KC] Kaminoan Cloner";
        texture = "\BNA_KC_Gear\Insignias\Data\Textures\Kaminoan_Cloner.paa";
    };

    class BNA_KC_Kamino_Trainer: BNA_KC_Kamino_Cloner
    {
        displayName = "[KC] Kaminoan Trainer";
        texture = "\BNA_KC_Gear\Insignias\Data\Textures\Kaminoan_Trainer.paa";
    };

    class BNA_KC_CloneForce99: BNA_KC_Kamino_Cloner
    {
        displayName = "[KC] Clone Force 99";
        texture = "\BNA_KC_Gear\Insignias\Data\Textures\CF_99.paa";
    };
};