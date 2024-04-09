class CLASS(Vest_Basic) {
    model = QCLASS(Vests_Infantry);
    type = "Basic";
    style = "Standard";
};

class CLASS(Vest_Holster): CLASS(Vest_Basic) { type = "Holster"; };
class CLASS(Vest_Assault): CLASS(Vest_Basic) { type = "Assault"; };
class CLASS(Vest_Grenadier): CLASS(Vest_Basic) { type = "Grenadier"; };
class CLASS(Vest_Heavy): CLASS(Vest_Basic) { type = "Heavy"; };
class CLASS(Vest_Specialist): CLASS(Vest_Basic) { type = "Specialist"; };
class CLASS(Vest_Recon): CLASS(Vest_Basic) { type = "Recon"; };
class CLASS(Vest_Recon_Survival): CLASS(Vest_Basic) { type = "Recon_Survival"; };
class CLASS(Vest_Hazard): CLASS(Vest_Basic) { type = "Hazard"; };
class CLASS(Vest_Kama): CLASS(Vest_Basic) { type = "Kama"; };
class CLASS(Vest_Tactical_Commander): CLASS(Vest_Basic) { type = "Tactical_Commander"; };

class CLASS(Vest_Heavy_v2): CLASS(Vest_Heavy) { style = "V2"; };

class CLASS(Vest_CLC) {
    model = QCLASS(Vests_Infantry_Ranked);
    rank = "CLC";
};
class CLASS(Vest_CPL): CLASS(Vest_CLC) { rank = "CPL"; };
class CLASS(Vest_CS): CLASS(Vest_CLC) { rank = "CS"; };
class CLASS(Vest_CSS): CLASS(Vest_CLC) { rank = "CSS"; };
class CLASS(Vest_CSFC): CLASS(Vest_CLC) { rank = "CSFC"; };
class CLASS(Vest_CSM): CLASS(Vest_CLC) { rank = "CSM"; };
class CLASS(Vest_Officer): CLASS(Vest_CLC) { rank = "Officer"; };
class CLASS(Vest_WO): CLASS(Vest_CLC) { rank = "WO"; };
class CLASS(Vest_Commander): CLASS(Vest_CLC) { rank = "CMD"; };

class CLASS(Vest_Officer_v2): CLASS(Vest_Officer) { style = "V2"; };
class CLASS(Vest_Commander_v2): CLASS(Vest_Commander) { style = "V2"; };

class CLASS(Vest_Medic) {
    model = QCLASS(Vests_Infantry_Medic);
    rank = "Medic";
    style = "Standard";
};
class CLASS(Vest_MedicSenior): CLASS(Vest_Medic) { rank = "Senior"; };
class CLASS(Vest_MedicPlatoon): CLASS(Vest_Medic) { rank = "Platoon"; };

class CLASS(Vest_Medic_v2): CLASS(Vest_Medic) { style = "V2"; };
class CLASS(Vest_MedicSenior_v2): CLASS(Vest_MedicSenior) { style = "V2"; };