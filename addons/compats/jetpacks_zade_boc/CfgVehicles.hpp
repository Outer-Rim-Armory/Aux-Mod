class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class zade_boc_onChest {
                    condition = QUOTE(!(missionNamespace getVariable [ARR_2('zade_boc_disabled',false)]) && !(backpack _player isEqualTo '') && ([_player] call zade_boc_fnc_chestpack isEqualTo '') && !(_player call BNA_KC_Jetpacks_fnc_hasJetpack));
                };
                class zade_boc_onBack: zade_boc_onChest {
                    condition = QUOTE(!(missionNamespace getVariable [ARR_2('zade_boc_disabled',false)]) && (backpack _player isEqualTo '') && !([_player] call zade_boc_fnc_chestpack isEqualTo '') && !(_player call BNA_KC_Jetpacks_fnc_hasJetpack));
                };
                class zade_boc_swap: zade_boc_onChest {
                    condition = QUOTE(!(missionNamespace getVariable [ARR_2('zade_boc_disabled',false)]) && !(backpack _player isEqualTo '') && !([_player] call zade_boc_fnc_chestpack isEqualTo '') && !(_player call BNA_KC_Jetpacks_fnc_hasJetpack));
                };
            };
        };
    };
};