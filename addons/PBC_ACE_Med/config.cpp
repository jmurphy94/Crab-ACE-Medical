class CfgPatches {
    class PBC_ACE_Med {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "ace_medical_treatment"
        };
        author = "pbcrazy";
        authors[] = {"pbcrazy"};
    };
};

class ace_medical_replacementItems {
    ItemType_401[] = {
        {"ACE_fieldDressing", 2},
		{"ACE_packingBandage", 4},
		{"ACE_elasticBandage", 4},
		{"ACE_quikClot", 1},
        {"ACE_morphine", 2},
		{"ACE_epinephrine", 1},
        {"ACE_tourniquet", 2},
		{"ACE_splint", 1},
		{"ACE_EarPlugs", 1}
    };
    ItemType_619[] = {
        {"ACE_fieldDressing", 6},
        {"ACE_packingBandage", 10},
		{"ACE_elasticBandage", 10},
		{"ACE_quikClot", 4},
        {"ACE_epinephrine", 4},
        {"ACE_morphine", 8},
		{"ACE_adenosine", 2},
        {"ACE_salineIV_500", 4},
		{"ACE_salineIV_250", 2},
        {"ACE_tourniquet", 4},
        {"ACE_splint", 2},
		{"ACE_surgicalKit", 1},
		{"ACE_bodyBag", 2}
    };
    ACE_atropine[] = {
        {"ACE_adenosine", 1}
    };
};