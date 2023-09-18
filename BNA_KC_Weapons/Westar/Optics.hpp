class ItemCore;
class InventoryOpticsItem_Base_F;
class 3AS_Optic_Scope_WestarM5: ItemCore
{
    class ItemInfo: InventoryOpticsItem_Base_F
    {
        class OpticsModes
        {
            class 3AS_Scope_Optics;
            class 3AS_OverSights_Optic;
        };
    };
};
class BNA_KC_WestarM5_Scope: 3AS_Optic_Scope_WestarM5
{
    displayName = "[KC] Westar-M5 Long Scope";
    class ItemInfo: ItemInfo
    {
        class OpticsModes: OpticsModes
        {
            class Scope_Optics: 3AS_Scope_Optics
            {
                visionMode[] = {"Normal", "NVG", "TI"};
                thermalMode[] = {0};
            };
            class OverSights_Optic: 3AS_OverSights_Optic {};
        };
    };
};