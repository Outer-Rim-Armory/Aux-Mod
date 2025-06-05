class CfgSFX
{
	class BNA_KC_SFX_Deploy
	{
	    sound0[] = {"BNA_KC_Vehicle_Skills\data\audio\Deploy.wss",1,1,50,1,0,0,0};
	    sounds[] = {"sound0"};
	    titles[] = {};
	    empty[] = {"",0,0,0,0,0,0,0};
	};
	class BNA_KC_SFX_Undeploy: BNA_KC_SFX_Deploy
	{
		sound0[] = {"BNA_KC_Vehicle_Skills\data\audio\Undeploy.wss",1,1,50,1,0,0,0};
	};
	class BNA_KC_SFX_HealLoop: BNA_KC_SFX_Deploy
	{
		sound0[] = {"BNA_KC_Vehicle_Skills\data\audio\Heal_Loop.wss",60,1,50,1,0,0,0};
	};
	class BNA_KC_SFX_RepairLoop: BNA_KC_SFX_Deploy
	{
		sound0[] = {"BNA_KC_Vehicle_Skills\data\audio\Repair_Loop.wss",60,1,50,1,0,0,0};
	};
};