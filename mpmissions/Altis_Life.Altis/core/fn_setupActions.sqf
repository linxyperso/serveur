#include "..\script_macros.hpp"
/*
	File: fn_setupActions.sqf

	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {

    case west: {
		//Call backup
		life_actions pushBack (player addAction["<t color='#ADFF2F'>Demande de renforts</t>",life_fnc_callbackup,"",0,FALSE,FALSE,""]);
        //montrer plaque
        life_actions = life_actions + [player addAction["<t color='#00FF00'>Insigne de gendarme</t>",life_fnc_copShowLicense,"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" && player distance cursorTarget < 10']];
        //entrer dans un vehicule meme verouillé
		life_actions = life_actions + [player addAction["<t color='#f20c0c'>Monter en conducteur</t>",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']];
		life_actions = life_actions + [player addAction["<t color='#f20c0c'>Monter en passager</t>",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 5']]; 
		life_actions = life_actions + [player addAction["<t color='#f20c0c'>Descendre</t>",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
        //Saisir Objet
		if(EQUAL(LIFE_SETTINGS(getNumber,"cops_seizeItems"),1)) then {
			life_actions = [player addAction[localize "STR_pAct_SeizeItems",'    deleteVehicle cursorTarget;   ',"",1,false,false,"",'cursorTarget isKindOf "WeaponHolder"']];
		};
	};

	case civilian: {
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
        //passeport
        life_actions = life_actions + [player addAction["<t color='#00FF00'>Présenter le passeport</t>",life_fnc_civPasseport,"",1,false,true,"",' 
        playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && player distance cursorTarget < 10']];
	};
};