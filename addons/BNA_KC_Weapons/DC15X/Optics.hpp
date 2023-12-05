class optic_LRPS;
class InventoryOpticsItem_Base_F;
class jlts_dc15x_scope: optic_LRPS
{
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class Snip;
        };
    };
};
class BNA_KC_DC15X_Scope: jlts_dc15x_scope
{
    author = "DartRuffian and SweMonkey";
    displayName = "[KC] DC-15X Scope";
    class ItemInfo: ItemInfo
    {
        class OpticsModes: OpticsModes
        {
            class Snip: Snip
            {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {0};
            };
        };
    };
};