class CfgPatches
{
    class BNA_KC_Patches_JetpacksOnChest
    {
        addonRootClass= "BNA_KC_Gear";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "A3_Characters_F",
                // CAManBase
            "BNA_KC_Gear_Jetpacks",
                // Jetpacks, this patch isn't needed if not loaded
            "zade_boc"
                // Backpack on Chest
        };
        units[] = {};
        weapons[] = {};
        skipWhenMissingDependencies = 1;
    };
};


class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
            class ACE_Equipment
            {
                class zade_boc_onChest
                {
                    condition="!(missionNamespace getVariable ['zade_boc_disabled',false]) && !(backpack _player isEqualTo '') && ([_player] call zade_boc_fnc_chestpack isEqualTo '') && !(_player call BNAKC_Jetpacks_fnc_hasJetpack)";
                };
                class zade_boc_onBack: zade_boc_onChest
                {
                    condition="!(missionNamespace getVariable ['zade_boc_disabled',false]) && (backpack _player isEqualTo '') && !([_player] call zade_boc_fnc_chestpack isEqualTo '') && !(_player call BNAKC_Jetpacks_fnc_hasJetpack)";
                };
                class zade_boc_swap: zade_boc_onChest
                {
                    condition="!(missionNamespace getVariable ['zade_boc_disabled',false]) && !(backpack _player isEqualTo '') && !([_player] call zade_boc_fnc_chestpack isEqualTo '') && !(_player call BNAKC_Jetpacks_fnc_hasJetpack)";
                };
            };
        };
    };
};