#include "..\..\script_macros.hpp"
/*
    File: fn_AdminDestroy.sqf
    Author: ImSuyken

    Description: Disable restrain on admin
*/

if(FETCH_CONST(life_adminlevel) < 3) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

[] spawn {
while {dialog} do {
closeDialog 0;
sleep 0.01;
};
};

    cursorTarget setDamage 1;