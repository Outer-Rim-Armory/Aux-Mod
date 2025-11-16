class CLASS(cloneBackpack_commando) {
    model = QCLASS(cloneBackpacks_Commando);
    type = "Basic";
};

class CLASS(cloneBackpack_commando_EOD): CLASS(cloneBackpack_commando) {
    type = "EOD";
};

class CLASS(cloneBackpack_commando_RTO): CLASS(cloneBackpack_commando) {
    type = "Radio";
};

class CLASS(cloneBackpack_commando_Tech): CLASS(cloneBackpack_commando) {
    type = "Tech";
};
