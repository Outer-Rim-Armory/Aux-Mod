class CLASS(Helmet_BARC_Base) {
    model = QCLASS(Helmets_BARC);
    rank = "Base";
};

class CLASS(Helmet_BARC_CT): CLASS(Helmet_BARC_Base) { rank = "CT"; };
