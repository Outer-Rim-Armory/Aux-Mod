class CLASS(Backpack_Base) {
    model = QCLASS(Backpacks);
    type = "Basic";
    style = "Standard";
};

class CLASS(Backpack): CLASS(Backpack_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Invis): CLASS(Backpack_Base) {
    style = "Invisible";
};

class CLASS(Backpack_Heavy_Base): CLASS(Backpack_Base) {
    type = "Heavy";
};

class CLASS(Backpack_Heavy): CLASS(Backpack_Heavy_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Radio_Base): CLASS(Backpack_Base) {
    type = "Radio";
};

class CLASS(Backpack_Radio): CLASS(Backpack_Radio_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Radio_Invis): CLASS(Backpack_Radio_Base) {
    style = "Invisible";
};

class CLASS(Backpack_Radio_Mini_Base): CLASS(Backpack_Base) {
    type = "RadioMini";
};

class CLASS(Backpack_Radio_Mini): CLASS(Backpack_Radio_Mini_Base) {
    style = "KeeliCompany";
};