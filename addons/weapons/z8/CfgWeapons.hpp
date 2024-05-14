class CfgWeapons {
    class Launcher_base_F;
    class 3AS_Chaingun: Launcher_base_F {
        class FullAuto;
    };
    class CLASS(Z8_base): 3AS_Chaingun {
        SCOPE_PRIVATE;
        author = AUTHOR;

        baseWeapon = QCLASS(Z8_base);
        picture = QPATHTOF(z8\data\ui\Z8_ca.paa);

        modes[] = {"FullAuto", "Overcharge"};
        magazines[] = {QCLASS(mag_1200rnd_Z8)};

        JLTS_hasElectronics = TRUE;
        JLTS_hasEMPProtection = FALSE;

        // Enable "buddy reloading"
        ace_reloadlaunchers_enabled = TRUE;

        class FullAuto: FullAuto {
            class StandardSound {
                soundSetShot[] = {QCLASS(soundSet_Z8_shot)};
            };
        };

        class Overcharge: FullAuto {
            displayName = "Overcharge";
            burst = 25;
            reloadTime = 0.015;
            textureType = "fastAuto";
        };
    };

    class CLASS(Z8): CLASS(Z8_base) {
        SCOPE_PUBLIC;

        displayName = "[KC] Z-8";
        baseWeapon = QCLASS(Z8);

        JLTS_friedItem = QCLASS(Z8_fried);
    };

    class CLASS(Z8_fried): CLASS(Z8) {
        SCOPE_HIDDEN;

        displayName = "[KC] Z-8 (Fried)";
        descriptionShort = "The circuits of the weapon have<br/>been fried by an EMP blast.";
        picture = QPATHTOF(z8\data\ui\Z8_fried_ca.paa);

        JLTS_isFried = TRUE;
        magazines[] = {};
    };
};