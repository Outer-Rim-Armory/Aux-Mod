class CLASS(Vest_Airborne_CT) {
    model = QCLASS(Vests_Airborne);
    camo = "CT";
};
class CLASS(Vest_Airborne_CS): CLASS(Vest_Airborne_CT) { camo = "CS"; };
class CLASS(Vest_Airborne_WO): CLASS(Vest_Airborne_CT) { camo = "Officer"; };

class CLASS(Vest_Airborne_CT_Light): CLASS(Vest_Airborne_CT) { camo = "CT_Light"; };
class CLASS(Vest_Airborne_CS_Light): CLASS(Vest_Airborne_CT) { camo = "CS_Light"; };

class CLASS(Vest_Airborne_LifeSaver) {
    model = QCLASS(Vests_Airborne_Medic);
    camo = "Trooper";
};
class CLASS(Vest_Airborne_LifeSaverNCO): CLASS(Vest_Airborne_LifeSaver) { camo = "NCO"; };