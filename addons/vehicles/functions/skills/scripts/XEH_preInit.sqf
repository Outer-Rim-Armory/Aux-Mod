//CCP
[
    "BNA_KC_vehicles_areaHealRadius_M","SLIDER",
    ["Heal Units - Area of Effect", "Heal units within vehicle's radius."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 30, 15, 0]
] call CBA_fnc_addSetting;
[
    "BNA_KC_vehicles_areaHealRate_M","SLIDER",
    ["Heal Units - Time Delay", "Time Delay between heal."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 60, 0.5, 0]
] call CBA_fnc_addSetting;
[
    "BNA_KC_vehicles_healAmount_M","SLIDER",
    ["Heal Units - Amount", "Healing amount receives."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 1, 0.01, 1]
] call CBA_fnc_addSetting;
[
    "BNA_KC_vehicles_fuelHealConsumption_M","SLIDER",
    ["Heal Units - Fuel Consumption ", "Fuel consumption per heal."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 1, 0.001, 1]
] call CBA_fnc_addSetting;


//Repair Module
[
    "BNA_KC_vehicles_areaHealRadius_E","SLIDER",
    ["Repair Vehicles - Area of Effect", "All vehicles within the vehicle's radius will get repaired."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 30, 20, 0]
] call CBA_fnc_addSetting;

//Repair Module
[
    "BNA_KC_vehicles_areaHealRate_E","SLIDER",
    ["Repair Vehicles - Time Delay", "Seconds delay between repair."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 60, 2, 0]
] call CBA_fnc_addSetting;
[
    "BNA_KC_vehicles_healAmount_E","SLIDER",
    ["Repair Vehicles - Amount", "Damage deduction per repair."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 1, 0.1, 1]
] call CBA_fnc_addSetting;
[
    "BNA_KC_vehicles_fuelRepairConsumption_E","SLIDER",
    ["Repair Vehicles - Fuel Consumption ", "Consumption of fuel between repairs."],
    ["Keeli Company Auxillary Mod", "Vehicles"],
    [0, 1, 0.001, 1]
] call CBA_fnc_addSetting;


//Assault Shield
[
    "BNA_KC_vehicles_areaShieldRadius_E","SLIDER",
    ["Assault Shield - Area of Effect", "All units within the vehicle's radius will not received any damage."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 30, 15, 0]
] call CBA_fnc_addSetting;
[
    "BNA_KC_vehicles_fuelShieldConsumption_E","SLIDER",
    ["Assault Shield - Fuel Consumption", "Consumption of fuel per second."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 1, 0.001, 1]
] call CBA_fnc_addSetting;

//Squad Shield
[
    "BNA_KC_vehicles_areaSquadShieldRadius_E","SLIDER",
    ["Squad Shield - Area of Effect", "All units within the vehicle's radius will not received any damage."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 30, 15, 0]
] call CBA_fnc_addSetting;
[
    "BNA_KC_vehicles_fuelSquadShieldConsumption_E","SLIDER",
    ["Squad Shield - Fuel Consumption", "Consumption of fuel per second."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 1, 0.001, 1]
] call CBA_fnc_addSetting;
//Citadel
[
    "BNA_KC_vehicles_fuelCitadelConsumption","SLIDER",
    ["Citadel Shield - Fuel Consumption", "Consumption of fuel per second."],
    ["Keeli Company Auxillary Mod", "Vehicle Skills"],
    [0, 1, 0.001, 1]
] call CBA_fnc_addSetting;
