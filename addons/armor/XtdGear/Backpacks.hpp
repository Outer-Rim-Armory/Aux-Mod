class CLASS(cloneBackpack_standard) {
    model = QCLASS(Backpacks);
    type = "Basic";
    style = "Standard";
};

class CLASS(Backpack): CLASS(cloneBackpack_standard) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Invis): CLASS(cloneBackpack_standard) {
    style = "Invisible";
};

class CLASS(Backpack_Heavy_Base): CLASS(cloneBackpack_standard) {
    type = "Heavy";
};

class CLASS(Backpack_Heavy): CLASS(Backpack_Heavy_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_EOD_Base): CLASS(Backpack_EOD_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Radio_Base): CLASS(cloneBackpack_standard) {
    type = "Radio";
};

class CLASS(Backpack_Radio): CLASS(Backpack_Radio_Base) {
    style = "KeeliCompany";
};

class CLASS(Backpack_Radio_Invis): CLASS(Backpack_Radio_Base) {
    style = "Invisible";
};

class CLASS(Backpack_Radio_Mini_Base): CLASS(cloneBackpack_standard) {
    type = "RadioMini";
};

class CLASS(Backpack_Radio_Mini): CLASS(Backpack_Radio_Mini_Base) {
    style = "KeeliCompany";
};