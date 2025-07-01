class CLASS(Backpack_Medic_Base) {
    model = QCLASS(Backpacks_Medic);
    type = "Basic";
    style = "Standard";
};

class CLASS(Backpack_Medic): CLASS(Backpack_Medic_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Medic_Heavy_Base): CLASS(Backpack_Medic_Base) {
    type = "Heavy";
};

class CLASS(Backpack_Medic_Heavy): CLASS(Backpack_Medic_Heavy_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Medic_Radio_Base): CLASS(Backpack_Medic_Base) {
    type = "Radio";
};

class CLASS(Backpack_Medic_Radio): CLASS(Backpack_Medic_Radio_Base) {
    style = "KeeliCompany";
};
