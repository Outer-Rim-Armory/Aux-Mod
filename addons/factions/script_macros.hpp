#define SC_VEST_ARMOR_FULL 62
#define SC_VEST_ARMOR_LIGHT 15
#define SC_VEST_ARMOR_MEDIUM 20
#define SC_VEST_ARMOR_HEAVY 25

#define SC_VEST_HITPOINTS_FULL class HitpointsProtectionInfo { \
    class Abdomen { \
        armor = 14; \
        hitpointName = "HitAbdomen"; \
        passThrough = 0.3; \
    }; \
    class Arms { \
        armor = 6; \
        hitpointName = "HitArms"; \
        passThrough = 0.5; \
    }; \
    class Body { \
        hitpointName = "HitBody"; \
        passThrough = 0.6; \
    }; \
    class Chest { \
        armor = SC_VEST_ARMOR_FULL; \
        hitpointName = "HitChest"; \
        passThrough = 0.6; \
    }; \
    class Diaphragm { \
        armor = SC_VEST_ARMOR_FULL; \
        hitpointName = "HitDiaphragm"; \
        passThrough = 0.6; \
    }; \
    class Legs { \
        armor = 6; \
        hitpointName = "HitLegs"; \
        passThrough = 0.5; \
    }; \
    class Neck { \
        armor = 8; \
        hitpointName = "HitNeck"; \
        passThrough = 0.5; \
    }; \
    class Pelvis { \
        armor = 14; \
        hitpointName = "HitPelvis"; \
        passThrough = 0.3; \
    }; \
}

#define SC_VEST_HITPOINTS_LIGHT class HitpointsProtectionInfo { \
    class Abdomen { \
        armor = 14; \
        hitpointName = "HitAbdomen"; \
        passThrough = 0.3; \
    }; \
    class Arms { \
        armor = 6; \
        hitpointName = "HitArms"; \
        passThrough = 0.5; \
    }; \
    class Body { \
        hitpointName = "HitBody"; \
        passThrough = 0.6; \
    }; \
    class Chest { \
        armor = SC_VEST_ARMOR_LIGHT; \
        hitpointName = "HitChest"; \
        passThrough = 0.6; \
    }; \
    class Diaphragm { \
        armor = SC_VEST_ARMOR_LIGHT; \
        hitpointName = "HitDiaphragm"; \
        passThrough = 0.6; \
    }; \
    class Legs { \
        armor = 6; \
        hitpointName = "HitLegs"; \
        passThrough = 0.5; \
    }; \
    class Neck { \
        armor = 8; \
        hitpointName = "HitNeck"; \
        passThrough = 0.5; \
    }; \
    class Pelvis { \
        armor = 14; \
        hitpointName = "HitPelvis"; \
        passThrough = 0.3; \
    }; \
}

#define SC_VEST_HITPOINTS_MEDIUM class HitpointsProtectionInfo { \
    class Abdomen { \
        armor = 14; \
        hitpointName = "HitAbdomen"; \
        passThrough = 0.3; \
    }; \
    class Arms { \
        armor = 6; \
        hitpointName = "HitArms"; \
        passThrough = 0.5; \
    }; \
    class Body { \
        hitpointName = "HitBody"; \
        passThrough = 0.6; \
    }; \
    class Chest { \
        armor = SC_VEST_ARMOR_MEDIUM; \
        hitpointName = "HitChest"; \
        passThrough = 0.6; \
    }; \
    class Diaphragm { \
        armor = SC_VEST_ARMOR_MEDIUM; \
        hitpointName = "HitDiaphragm"; \
        passThrough = 0.6; \
    }; \
    class Legs { \
        armor = 6; \
        hitpointName = "HitLegs"; \
        passThrough = 0.5; \
    }; \
    class Neck { \
        armor = 8; \
        hitpointName = "HitNeck"; \
        passThrough = 0.5; \
    }; \
    class Pelvis { \
        armor = 14; \
        hitpointName = "HitPelvis"; \
        passThrough = 0.3; \
    }; \
}

#define SC_VEST_HITPOINTS_HEAVY class HitpointsProtectionInfo { \
    class Abdomen { \
        armor = 14; \
        hitpointName = "HitAbdomen"; \
        passThrough = 0.3; \
    }; \
    class Arms { \
        armor = 6; \
        hitpointName = "HitArms"; \
        passThrough = 0.5; \
    }; \
    class Body { \
        hitpointName = "HitBody"; \
        passThrough = 0.6; \
    }; \
    class Chest { \
        armor = SC_VEST_ARMOR_HEAVY; \
        hitpointName = "HitChest"; \
        passThrough = 0.6; \
    }; \
    class Diaphragm { \
        armor = SC_VEST_ARMOR_HEAVY; \
        hitpointName = "HitDiaphragm"; \
        passThrough = 0.6; \
    }; \
    class Legs { \
        armor = 6; \
        hitpointName = "HitLegs"; \
        passThrough = 0.5; \
    }; \
    class Neck { \
        armor = 8; \
        hitpointName = "HitNeck"; \
        passThrough = 0.5; \
    }; \
    class Pelvis { \
        armor = 14; \
        hitpointName = "HitPelvis"; \
        passThrough = 0.3; \
    }; \
}