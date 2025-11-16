__COUNTER_RESET__
class GVAR(weapons) {
    class DC15A {
        label = "DC-15A";
        order = __COUNTER__;
        weapon = QCLASS(DC15A);
        magazines[] = {
            {QCLASS(Mag_60Rnd_DC15A), 10}
        };
    };

    class DC15S {
        label = "DC-15S";
        order = __COUNTER__;
        weapon = QCLASS(DC15S);
        magazines[] = {
            {QCLASS(Mag_80Rnd_DC15S), 10}
        };
    };

    class DC15C {
        label = "DC-15C";
        order = __COUNTER__;
        weapon = QCLASS(DC15C);
        magazines[] = {
            {QCLASS(Mag_40Rnd_DC15C), 10}
        };
    };
};
