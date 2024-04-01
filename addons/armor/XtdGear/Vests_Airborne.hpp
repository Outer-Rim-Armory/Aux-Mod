class CLASS(Vest_Airborne_CT) {
    model = QCLASS(Vests_Airborne);
    rank = "CT";
};

class CLASS(Vest_Airborne_CS): CLASS(Vest_Airborne_CT) { rank = "CS"; };
class CLASS(Vest_Airborne_WO): CLASS(Vest_Airborne_CT) { rank = "Officer"; };
class CLASS(Vest_Airborne_CT_Light): CLASS(Vest_Airborne_CT) { rank = "CT_Light"; };
class CLASS(Vest_Airborne_CS_Light): CLASS(Vest_Airborne_CT) { rank = "CS_Light"; };

class CLASS(Vest_Airborne_LifeSaver) {
    model = QCLASS(Vests_Airborne_Medic);
    rank = "Trooper";
};

class CLASS(Vest_Airborne_LifeSaverNCO): CLASS(Vest_Airborne_LifeSaver) { rank = "NCO"; };