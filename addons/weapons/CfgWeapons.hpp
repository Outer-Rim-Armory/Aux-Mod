class CfgWeapons
{
    class JLTS_stun_muzzle;
    class CLASS(Muzzle_Stun): JLTS_stun_muzzle
    {
        displayName = "Stun";
        magazines[] =
        {
            "Aux12thFleet_Mag_StunShort",
            "Aux12thFleet_Mag_StunLong"
        };
        magazineWell[] = {};
    };
};