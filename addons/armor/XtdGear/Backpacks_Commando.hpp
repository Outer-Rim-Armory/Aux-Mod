class CLASS(Backack_Commando) {
    model = QCLASS(Backpacks_Commando);
    type = "Basic";
};

class CLASS(Backack_Commando_EOD): CLASS(Backack_Commando) {
    type = "EOD";
};

class CLASS(Backack_Commando_RTO): CLASS(Backack_Commando) {
    type = "Radio";
};

class CLASS(Backack_Commando_Tech): CLASS(Backack_Commando) {
    type = "Tech";
};