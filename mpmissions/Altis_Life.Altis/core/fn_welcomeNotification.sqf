/*
	File: fn_welcomeNotification.sqf
	Author:

	Description:
	Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayctrl 2400;
_textSpoiler = _display displayctrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\sglogo.jpg' /></t><br /><br />";
_message = _message + "Liens utiles ( cliquez sur les liens pour ouvrir votre navigateur )<br /><br />";
_message = _message + " <a href='http://www.stark-gaming.com/' color='#56BDD6'>Stark-Gaming</a> -- Regarder notre site web pour les dernières nouvelles et mises à jour.<br /><br />";
_message = _message + "Teamspeak 3: ts02.omgserv.com:10020  <br /><br />";
_message = _message + "Commandes utiles :<br /><br />";
_message = _message + "Recolter/autres : Touche Windows<br /><br />";
_message = _message + "Ranger/Sortir arme : Maj + H<br /><br />";
_message = _message + "Menotter : Maj + R<br /><br />";
_message = _message + "Assomer : Maj + G<br /><br />";
_message = _message + "Boule Quies : Maj + O<br /><br />";
_message = _message + "Main sur la tete : Maj + B<br /><br />";
_message = _message + "Tous les ATM sont utilisable avec la touche windows.<br /><br />";
_message = _message + "Toute l'equipe de Stark-Gaming vous souhaites un bon jeu sur notre serveur!<br /><br />";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlcommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
