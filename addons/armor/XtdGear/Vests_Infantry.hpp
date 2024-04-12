class CLASS(Vest_Basic) {
    model = QCLASS(Vests_Infantry);
    camo = "Basic";
};

class CLASS(Vest_Holster): CLASS(Vest_Basic) { camo = "Holster"; };
class CLASS(Vest_Assault): CLASS(Vest_Basic) { camo = "Assault"; };
class CLASS(Vest_Grenadier): CLASS(Vest_Basic) { camo = "Grenadier"; };
class CLASS(Vest_Heavy): CLASS(Vest_Basic) { camo = "Heavy"; };
class CLASS(Vest_Heavy_v2): CLASS(Vest_Heavy) { camo = "Heavy_v2"; };
class CLASS(Vest_Specialist): CLASS(Vest_Basic) { camo = "Specialist"; };
class CLASS(Vest_Recon): CLASS(Vest_Basic) { camo = "Recon"; };
class CLASS(Vest_Recon_Survival): CLASS(Vest_Basic) { camo = "Recon_Survival"; };
class CLASS(Vest_Hazard): CLASS(Vest_Basic) { camo = "Hazard"; };
class CLASS(Vest_Kama): CLASS(Vest_Basic) { camo = "Kama"; };
class CLASS(Vest_Tactical_Commander): CLASS(Vest_Basic) { camo = "Tactical_Commander"; };

class CLASS(Vest_CLC) {
    model = QCLASS(Vests_Infantry_Ranked);
    camo = "CLC";
};
class CLASS(Vest_CPL): CLASS(Vest_CLC) { camo = "CPL"; };
class CLASS(Vest_CS): CLASS(Vest_CLC) { camo = "CS"; };
class CLASS(Vest_CSS): CLASS(Vest_CLC) { camo = "CSS"; };
class CLASS(Vest_CSFC): CLASS(Vest_CLC) { camo = "CSFC"; };
class CLASS(Vest_CSM): CLASS(Vest_CLC) { camo = "CSM"; };
class CLASS(Vest_Officer): CLASS(Vest_CLC) { camo = "Officer"; };
class CLASS(Vest_Officer_v2): CLASS(Vest_CLC) { camo = "Officer_v2"; };
class CLASS(Vest_WO): CLASS(Vest_CLC) { camo = "WO"; };
class CLASS(Vest_Commander): CLASS(Vest_CLC) { camo = "CMD"; };
class CLASS(Vest_Commander_v2): CLASS(Vest_CLC) { camo = "CMD_v2"; };

class CLASS(Vest_Medic) {
    model = QCLASS(Vests_Infantry_Medic);
    camo = "Medic";
};
class CLASS(Vest_MedicSenior): CLASS(Vest_Medic) { camo = "Senior"; };
class CLASS(Vest_Medic_v2): CLASS(Vest_Medic) { camo = "Medic_v2"; };
class CLASS(Vest_MedicSenior_v2): CLASS(Vest_Medic) { camo = "Senior_v2"; };
class CLASS(Vest_MedicPlatoon): CLASS(Vest_Medic) { camo = "Platoon"; };