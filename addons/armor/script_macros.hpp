#define CLONE_LINKED_ITEMS_RADIO LINKED_ITEMS, "SWLB_Comlink"

#define XTDMODELS_CAMO class camo { \
    label = "Camo"; \
    changeInGame = FALSE; \
    values[] = {"Brown", "Grey", "Worn", "Empire"}; \
    class Brown { \
        label = "Brown"; \
        image = QPATHTOEF(core,data\ui\CamoBrown_co.paa); \
    }; \
    class Grey { \
        label = "Grey"; \
        image = QPATHTOEF(core,data\ui\CamoGrey_co.paa); \
    }; \
    class Night { \
        label = "Night"; \
        image = "#(rgb,8,8,3)color(0.141,0.141,0.141,1)"; \
    }; \
    class Worn { \
        label = "Worn"; \
    }; \
    class Empire { \
        label = "Empire"; \
        image = "#(rgb,170,170,170)color(0.6,0.6,0.6,1)"; \
    }; \
}
