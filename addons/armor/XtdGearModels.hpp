class XtdGearModels {
    class CLASS(Rank_Base) {
        label = "";
        author = AUTHOR;
        options[] = {"rank"};

        class rank {
            label = "Rank";
            alwaysSelectable = TRUE;
            changeInGame = FALSE;
            values[] = {};
        };

        XTDMODELS_CAMO;

        class style: rank {
            label = "Style";
            alwaysSelectable  = FALSE;

            class Standard { label = "Standard"; };
            class Legacy { label = "Legacy"; };
            class V2 { label = "V2"; };
            class V3 { label = "V3"; };
            class V4 { label = "V4"; };
        };
    };

    class CfgWeapons {
        class CLASS(Helmets_Phase1): CLASS(Rank_Base) {
            label = "Helmets (P1)";
            options[] = {"rank", "camo", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CR",
                    "CT",
                    "SCT",
                    "VCT",
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CMS",
                    "CSM",
                    "WO",
                    "WO2",
                    "WO3",
                    "CL",
                    "CL1"
                };

                class Base { label = "Base"; };
                class CR { label = "CR"; };
                class CT { label = "CT"; };
                class SCT { label = "SCT"; };
                class VCT { label = "VCT"; };
                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CMS { label = "CMS"; };
                class CSM { label = "CSM"; };
                class WO { label = "WO"; };
                class WO2 { label = "WO2"; };
                class WO3 { label = "WO3"; };
                class CL { label = "CL"; };
                class CL1 { label = "CL1"; };
            };

            class style: style {
                values[] = {"Standard", "V2", "V3", "V4"};
            };
        };

        class CLASS(Helmets_Phase1_Geonosis): CLASS(Rank_Base) {
            label = "Helmets (Geonosis)";

            class rank: rank {
                values[] = {
                    "Trooper",
                    "NCO",
                    "Officer",
                    "Captain",
                    "Commander"
                };

                class Trooper { label = "Trooper"; };
                class NCO { label = "NCO"; };
                class Officer { label = "Officer"; };
                class Captain { label = "Captain"; };
                class Commander { label = "Commander"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase1): CLASS(Rank_Base) {
            label = "Pilot Helmets (P1)";

            class rank: rank {
                values[] = {
                    "Base",
                    "CXA"
                };

                class Base { label = "Base"; };
                class CXA { label = "CXA"; };
            };
        };

        class CLASS(Helmets_Tanker_Phase1): CLASS(Rank_Base) {
            label = "Tanker Helmets (P1)";
            options[] = {"rank", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };

            class style: style {
                values[] = {"Standard", "V2"};
            };
        };

        class CLASS(Helmets_Phase2): CLASS(Rank_Base) {
            label = "Helmets (P2)";
            options[] = {"rank", "camo", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CR",
                    "CT",
                    "SCT",
                    "VCT",
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CMS",
                    "CSM",
                    "WO",
                    "WO2",
                    "WO3",
                    "CL",
                    "CL1"
                };

                class Base { label = "Base"; };
                class CR { label = "CR"; };
                class CT { label = "CT"; };
                class SCT { label = "SCT"; };
                class VCT { label = "VCT"; };
                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CMS { label = "CMS"; };
                class CSM { label = "CSM"; };
                class WO { label = "WO"; };
                class WO2 { label = "WO2"; };
                class WO3 { label = "WO3"; };
                class CL { label = "CL"; };
                class CL1 { label = "CL1"; };
            };

            class style: style {
                values[] = {"Standard", "V2", "Legacy"};
            };
        };

        class CLASS(Helmets_Insulated_Phase2): CLASS(Rank_Base) {
            label = "Insulated Helmets (P2)";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Helmets_Pilot_Phase2): CLASS(Rank_Base) {
            label = "Pilot Helmets (P2)";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CXA",
                    "CXE"
                };

                class Base { label = "Base"; };
                class CXA { label = "CXA"; };
                class CXE { label = "CXE"; };
            };
        };

        class CLASS(Helmets_Tanker_Phase2): CLASS(Rank_Base) {
            label = "Tanker Helmets (P2)";
            options[] = {"rank", "camo", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };

            class style: style {
                values[] = {"Standard", "V2"};
            };
        };

        class CLASS(Helmets_Airborne): CLASS(Rank_Base) {
            label = "Airborne Helmets";
            options[] = {"rank", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT",
                    "Axel"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
                class Axel { label = "Axel"; };
            };

            class style: style {
                values[] = {"Standard", "V2"};
            };
        };

        class CLASS(Helmets_Engineer): CLASS(Rank_Base) {
            label = "Engineer Helmets";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Helmets_ARC): CLASS(Rank_Base) {
            label = "ARC Helmets";
            options[] = {"rank", "camo", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT",
                    "NightShade"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
                class NightShade { label = "NightShade"; };
            };

            class camo: camo {
                values[] = {"Brown", "Grey", "Night"};
            };

            class style: style {
                values[] = {"Standard", "Legacy"};
            };
        };

        class CLASS(Helmets_ARF): CLASS(Rank_Base) {
            label = "ARF Helmets";
            options[] = {"rank", "camo", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };

            class style: style {
                values[] = {"Standard", "Legacy"};
            };
        };

        class CLASS(Helmets_BARC): CLASS(Rank_Base) {
            label = "BARC Helmets";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_Ranks_Infantry): CLASS(Rank_Base) {
            label = "Infantry Rank Uniforms";
            options[] = {"rank", "camo", "style"};

            class rank: rank {
                values[] = {
                    "Base",
                    "CR",
                    "CT",
                    "SCT",
                    "VCT",
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CMS",
                    "CSM",
                    "WO",
                    "WO2",
                    "WO3",
                    "CL",
                    "CL1"
                };

                class Base { label = "Base"; };
                class CR { label = "CR"; };
                class CT { label = "CT"; };
                class SCT { label = "SCT"; };
                class VCT { label = "VCT"; };
                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CMS { label = "CMS"; };
                class CSM { label = "CSM"; };
                class WO { label = "WO"; };
                class WO2 { label = "WO2"; };
                class WO3 { label = "WO3"; };
                class CL { label = "CL"; };
                class CL1 { label = "CL1"; };
            };

            class style: style {
                values[] = {"Standard", "Legacy"};
            };
        };

        class CLASS(Uniforms_Ranks_Geonosis): CLASS(Rank_Base) {
            label = "Geonosis Rank Uniforms";

            class rank: rank {
                values[] = {
                    "Trooper",
                    "NCO",
                    "Officer",
                    "Captain",
                    "Commander"
                };

                class Trooper { label = "Trooper"; };
                class NCO { label = "NCO"; };
                class Officer { label = "Officer"; };
                class Captain { label = "Captain"; };
                class Commander { label = "Commander"; };
            };
        };

        class CLASS(Uniforms_Insulated_Phase2): CLASS(Rank_Base) {
            label = "Insulated Uniforms (P2)";

            class rank: rank {
                values[] = {
                    "Base",
                    "CT"
                };

                class Base { label = "Base"; };
                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_Pilot): CLASS(Rank_Base) {
            label = "Pilot Uniforms";

            class rank: rank {
                values[] = {
                    "CXA",
                    "CXE"
                };

                class CXA { label = "CXA"; };
                class CXE { label = "CXE"; };
            };
        };

        class CLASS(Uniforms_Tanker): CLASS(Rank_Base) {
            label = "Tanker Uniforms";

            class rank: rank {
                values[] = {
                    "CT"
                };

                class CT { label = "CT"; };
            };
        };

        class CLASS(Uniforms_ARC): CLASS(Rank_Base) {
            label = "ARC Uniforms";
            options[] = {"rank", "camo"};

            class rank: rank {
                values[] = {
                    "CT",
                    "NightShade"
                };

                class CT { label = "CT"; };
                class NightShade { label = "NightShade"; };
            };

            class camo: camo {
                values[] = {"Night"};
            };
        };

        class CLASS(Uniforms_ARF): CLASS(Rank_Base) {
            label = "ARF Uniforms";

            class rank: rank {
                values[] = {
                    "CT"
                };

                class CT { label = "CT"; };
            };
        };

        class CLASS(Vests_Infantry): CLASS(Rank_Base) {
            label = "Infantry Vests";
            options[] = {"type", "style"};

            class type: rank {
                label = "Type";
                values[] = {
                    "Basic",
                    "Holster",
                    "Assault",
                    "Grenadier",
                    "Heavy",
                    "Specialist",
                    "Recon",
                    "Recon_Survival",
                    "Hazard",
                    "Kama",
                    "Tactical_Commander"
                };

                class Basic { label = "Basic"; };
                class Holster { label = "Holster"; };
                class Assault { label = "Assault"; };
                class Grenadier { label = "Grenadier"; };
                class Heavy { label = "Heavy"; };
                class Specialist { label = "Specialist"; };
                class Recon { label = "Recon"; };
                class Recon_Survival { label = "Survival"; };
                class Hazard { label = "Hazard"; };
                class Kama { label = "Kama"; };
                class Tactical_Commander { label = "Tactical Commander"; };
            };

            class style: style {
                values[] = {"Standard", "V2"};
            };
        };

        class CLASS(Vests_Infantry_Ranked): CLASS(Rank_Base) {
            label = "Infantry Ranked Vests";
            options[] = {"rank", "style"};

            class rank: rank {
                values[] = {
                    "CLC",
                    "CPL",
                    "CS",
                    "CSS",
                    "CSFC",
                    "CSM",
                    "Officer",
                    "WO",
                    "CMD"
                };

                class CLC { label = "CLC"; };
                class CPL { label = "CPL"; };
                class CS { label = "CS"; };
                class CSS { label = "CSS"; };
                class CSFC { label = "CSFC"; };
                class CSM { label = "CSM"; };
                class Officer { label = "Officer"; };
                class WO { label = "WO"; };
                class CMD { label = "CMD"; };
            };

            class style: style {
                values[] = {"Standard", "V2"};
            };
        };

        class CLASS(Vests_Infantry_Medic): CLASS(Rank_Base) {
            label = "Infantry Medic Vests";
            options[] = {"rank", "style"};

            class rank: rank {
                values[] = {
                    "Medic",
                    "Senior",
                    "Platoon"
                };

                class Medic { label = "Medic"; };
                class Senior { label = "Senior"; };
                class Platoon { label = "Platoon"; };
            };

            class style: style {
                values[] = {"Standard", "V2"};
            };
        };

        class CLASS(Vests_Airborne): CLASS(Rank_Base) {
            label = "Airborne Vests";
            options[] = {"rank", "style"};

            class rank: rank {
                values[] = {
                    "CT",
                    "CS",
                    "WO"
                };

                class CT { label = "Trooper"; };
                class CS { label = "NCO"; };
                class WO { label = "Officer"; };
            };

            class style: style {
                values[] = {"Standard", "Light"};

                class Light { label = "Light"; };
            };
        };

        class CLASS(Vests_Airborne_Medic): CLASS(Rank_Base) {
            label = "Airborne Medic Vests";

            class rank: rank {
                values[] = {
                    "CT",
                    "CS"
                };

                class CT { label = "Trooper"; };
                class CS { label = "NCO"; };
            };
        };

        class CLASS(Vests_Engineer): CLASS(Rank_Base) {
            label = "Engineer Vests";

            class rank: rank {
                changeInGame = FALSE;
                values[] = {
                    "CT",
                    "CS",
                    "Officer"
                };

                class CT { label = "Trooper"; };
                class CS { label = "NCO"; };
                class Officer { label = "Officer"; };
            };
        };

        class CLASS(Vests_Tanker): CLASS(Rank_Base) {
            label = "Tanker Vests";

            class rank: rank {
                changeInGame = FALSE;
                values[] = {
                    "CT",
                    "CS",
                    "WO"
                };

                class CT { label = "Trooper"; };
                class CS { label = "NCO"; };
                class WO { label = "Officer"; };
            };
        };

        class CLASS(Vests_ARC): CLASS(Rank_Base) {
            label = "ARC Vests";

            class rank: rank {
                values[] = {
                    "Trooper",
                    "Alternate",
                    "Light",
                    "NightShade",
                    "GEO_Officer",
                    "GEO_Captain"
                };

                class Trooper { label = "Trooper"; };
                class Alternate { label = "Alternate"; };
                class Light { label = "Light"; };
                class NightShade { label = "NightShade"; };
                class GEO_Officer { label = "GEO Officer"; };
                class GEO_Captain { label = "GEO Captain"; };
            };
        };

        class CLASS(Vests_Commando): CLASS(Rank_Base) {
            label = "Commando Vests";
            options[] = {"type"};

            class type: rank {
                label = "Type";
                values[] = {
                    "Basic",
                    "SL",
                    "EOD",
                    "Sniper",
                    "Tech"
                };

                class Basic { label = "Basic"; };
                class SL { label = "SL"; };
                class EOD { label = "EOD"; };
                class Sniper { label = "Sniper"; };
                class Tech { label = "Tech"; };
            };
        };
    };

    class CfgVehicles {
        class CLASS(Backpacks): CLASS(Rank_Base) {
            label = "Backpacks";
            options[] = {"type", "style"};

            class type: rank {
                values[] = {
                    "Basic",
                    "Heavy",
                    "Radio",
                    "RadioMini"
                };

                class Basic { label = "Basic"; };
                class Heavy { label = "Heavy"; };
                class Radio { label = "Radio"; };
                class RadioMini { label = "Radio Mini"; };
            };

            class style: style {
                values[] = {"Standard", "KeeliCompany", "Invisible"};

                class KeeliCompany: Standard { label = "KC"; };
                class Invisible: Standard { label = "Invisible"; };
            };
        };

        class CLASS(Backpacks_Medic): CLASS(Backpacks) {
            label = "Medic Backpacks";

            class type: type {
                values[] = {
                    "Basic",
                    "Heavy",
                    "Radio"
                };
            };

            class style: style {
                values[] = {"Standard", "KeeliCompany"};
            };
        };

        class CLASS(cloneBackpacks_Commando): CLASS(Backpacks) {
            label = "Commando Backpacks";
            options[] = {"type"};

            class type: type {
                values[] = {
                    "Basic",
                    "EOD",
                    "Radio",
                    "Tech"
                };

                class EOD { label = "EOD"; };
                class Tech { label = "Tech"; };
            };
        };
    };
};