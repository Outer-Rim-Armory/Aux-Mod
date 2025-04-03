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
    ["Heal Units - Amount", format ["Healing amount receives.%1ACE Medical System(Healing capabilities):%2• Unconscious%3• Fire Damage%4• Tourniquets%5• Occluded Medications%6• Open Wounds%7• Bandage Wounds%8• Stitched Wounds%9• Limp%10• Fractures%11• Heart Rate%12• Blood Pressure%13• Peripheral Resistance%14• SPO2%15• Oxygen Demand%16• Body Part Damage%17• Hemorrhage%18• Pain%19• Pain Suppress%20• Blood Volume%21%22%23",endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl,endl]],
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

