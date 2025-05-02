// #include "GUIBase.hpp"
class RscActivePicture;
class RscActivePictureKeepAspect;
class RscActiveText;
class RscButton;
class RscButtonMenu;
class RscButtonMenuCancel;
class RscButtonMenuOK;
class RscButtonMenuSteam;
class RscButtonTextOnly;
class RscCheckBox;
class RscCombo;
class RscControlsGroup;
class RscControlsGroupNoHScrollbars;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoVScrollbars;
class RscEdit;
class RscFrame;
class RscHTML;
class RscLine;
class RscListBox;
class RscListNBox;
class RscMapControl;
class RscMapControlEmpty;
class RscObject;
class RscPicture;
class RscPictureKeepAspect;
class RscProgress;
class RscShortcutButton;
class RscSlider;
class RscStructuredText;
class RscText;
class RscToolbox;
class RscTree;
class RscVideo;
class RscXListBox;
class RscXSliderH;
class Scrollbar;

//Excotic Base Controls
class CA_Back;
class CA_Black_Back;
class CA_Logo;
class CA_Logo_Small;
class CA_Mainback;
class CA_Ok;
class CA_Ok_image;
class CA_Ok_image2;
class CA_Ok_text;
class CA_RscButton;
class CA_RscButton_dialog;
class CA_Title;
class CA_Title_Back;
class ctrlActivePicture;
class ctrlActivePictureKeepAspect;
class ctrlActiveText;
class ctrlButton;
class ctrlButtonCancel;
class ctrlButtonClose;
class ctrlButtonCollapseAll;
class ctrlButtonExpandAll;
class ctrlButtonFilter;
class ctrlButtonOK;
class ctrlButtonPicture;
class ctrlButtonPictureKeepAspect;
class ctrlButtonSearch;
class ctrlButtonToolbar;
class ctrlCheckbox;
class ctrlCheckboxBaseline;
class ctrlCheckboxes;
class ctrlCheckboxesCheckbox;
class ctrlCheckboxToolbar;
class ctrlCombo;
class ctrlComboToolbar;
class ctrlControlsGroup;
class ctrlControlsGroupNoHScrollbars;
class ctrlControlsGroupNoScrollbars;
class ctrlControlsGroupNoVScrollbars;
class ctrlDefault;
class ctrlDefaultButton;
class ctrlDefaultText;
class ctrlEdit;
class ctrlEditMulti;
class ctrlHTML;
class ctrlListbox;
class ctrlListNBox;
class ctrlMap;
class ctrlMapEmpty;
class ctrlMapMain;
class ctrlMenu;
class ctrlMenuStrip;
class ctrlProgress;
class ctrlShortcutButton;
class ctrlShortcutButtonCancel;
class ctrlShortcutButtonOK;
class ctrlShortcutButtonSteam;
class ctrlSliderH;
class ctrlSliderV;
class ctrlStatic;
class ctrlStaticBackground;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;
class ctrlStaticFooter;
class ctrlStaticFrame;
class ctrlStaticLine;
class ctrlStaticMulti;
class ctrlStaticOverlay;
class ctrlStaticPicture;
class ctrlStaticPictureKeepAspect;
class ctrlStaticPictureTile;
class ctrlStaticTitle;
class ctrlStructuredText;
class ctrlToolbox;
class ctrlToolboxPicture;
class ctrlToolboxPictureKeepAspect;
class ctrlTree;
class ctrlXListbox;
class ctrlXSliderH;
class ctrlXSliderV;
class RscBackground;
class RscBackgroundGUI;
class RscBackgroundGUIBottom;
class RscBackgroundGUIDark;
class RscBackgroundGUILeft;
class RscBackgroundGUIRight;
class RscBackgroundGUITop;
class RscBackgroundLogo;
class RscBackgroundStripeBottom;
class RscBackgroundStripeTop;
class RscButtonAlarm;
class RscButtonArsenal;
class RscButtonCall;
class RscButtonDetector;
class RscButtonDiaryMenu;
class RscButtonEditor;
class RscButtonMenuBIKI;
class RscButtonMenuMain;
class RscButtonNoColor;
class RscButtonSearch;
class RscButtonSmall;
class RscButtonTestCentered;
class RscColorPicker;
class RscDisplayDebriefing_ListGroup;
class RscDisplayDebriefing_RscTextMultiline;
class RscDisplaySingleMission_ChallengeOverviewGroup;
class RscEditMulti;
class RscEditMultiReadOnly;
class RscEditReadOnly;
class RscFeedback;
class RscGearShortcutButton;
class RscHiddenButton;
class RscIGProgress;
class RscIGText;
class RscIGUIListBox;
class RscIGUIListNBox;
class RscIGUIShortcutButton;
class RscIGUIText;
class RscIGUIValue;
class RscInterlacingScreen;
class RscLadderPicture;
class RscListBoxKeys;
class RscListBoxMulti;
class RscLoadingText;
class RscMapSignalBackground;
class RscMapSignalPicture;
class RscMapSignalText;
class RscOpticsText;
class RscOpticsValue;
class RscPictureAllowPixelSplit;
class RscPictureKeepAspectAllowPixelSplit;
class RscProgressNotFreeze;
class RscShortcutButtonMain;
class RscSliderH;
class RscTextMulti;
class RscTextNoShadow;
class RscTextSmall;
class RscTitle;
class RscToolboxButton;
class RscTrafficLight;
class RscTreeMulti;
class RscTreeSearch;
class RscVideoKeepAspect;
class RscVignette;

class RscDisplayEmpty;
class JRY_mapCtrl_Mortar: RscControlsGroupNoScrollbars
{
	idc = 1112350;
	x = 0;
	y = 0;
	w = "11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	h = "8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class controls
	{
		class Background: RscText
		{
			onLoad = "(_this # 0) ctrlEnable false;";
			idc = 1000;
			x = 0;
			y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "5.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.7};
		};
		class Title: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			idc = 1001;
			text = "Mortar Strike";
			x = 0;
			y = 0;
			w = "11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class AmmoTxt: RscStructuredText
		{
			colorBackground[] = {0,0,0,0.7};
			// idc = 1100;
			text = "Ammo ";
			x = 0.01;
			y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Ammo: RscCombo
		{
			onLBSelChanged = "_ctrl = _this # 0; _display = ctrlParent _ctrl; _colorTxt = _display displayCtrl 654321; _color = _display displayCtrl 104;  if ((_this # 1) == 1) then { _colorTxt ctrlSetTextColor [1,1,1,1]; {_color lbAdd _x;}forEach ['Blue','Green','Red','Purple','Yellow']; _color lbSetCurSel 0;_color ctrlEnable true;}else { _colorTxt ctrlSetTextColor [1,1,1,0.6]; lbClear _color; _color ctrlEnable false;};";
			idc = 103;
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ShotsTxt: AmmoTxt
		{
			text = "Shots ";
			y = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Shots: RscXListbox
		{
			idc = 4654321;
			sizeEx = "3 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ColorTxt: AmmoTxt
		{
			idc = 654321;
			onLoad = "(_this # 0) ctrlSetTextColor [1,1,1,0.6];";
			text = "Color ";
			y = "3.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Color: RscCombo
		{
			onLoad = "(_this # 0) ctrlEnable false;";
			idc = 104;
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "3.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SpreadTxt: AmmoTxt
		{
			text = "Spread ";
			y = "4.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Spread: ctrlToolbox
		{
			onCheckBoxesSelChanged = "_ctrl = (_this # 0); _ctrlVal = (_this # 1); uiNamespace setVariable ['BNA_KC_CtrlSpread',_ctrlVal];";
			idc = 1231321;
			columns = 2;
			strings[] = {"Enable","Disable"};
			values[] = {0,1};
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "4.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			sizeEx = "3 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
		};
		class ButtonMenuOK: RscButtonMenuOK
		{
			idc = 9946432;
			x = 0;
			y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonMenuCancel: RscButtonMenuCancel
		{
			onButtonClick = "_display = ctrlParent (_this # 0); if ('BNA_KC_Marker_Datapad' in allMapMarkers) then {deleteMarker 'BNA_KC_Marker_Datapad';}; ctrlDelete (_display displayCtrl 1112350); ";
			x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class JRY_mapCtrl_AVArtillery: JRY_mapCtrl_Mortar
{
	class controls
	{
		class Background: RscText
		{
			onLoad = "(_this # 0) ctrlEnable false;";
			idc = 1000;
			x = 0;
			y = "1.2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "5.7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0,0,0,0.7};
		};
		class Title: RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			idc = 1001;
			text = "AV-7 Artillery Strike";
			x = 0;
			y = 0;
			w = "11 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ShotsTxt: RscStructuredText
		{
			colorBackground[] = {0,0,0,0.7};
			text = "Shots ";
			x = 0.01;
			y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "3 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Shots: RscXListbox
		{
			idc = 4654321;
			sizeEx = "3 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class SpreadTxt: ShotsTxt
		{
			text = "Spread ";
			y = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class Spread: ctrlToolbox
		{
			onCheckBoxesSelChanged = "_ctrl = (_this # 0); _ctrlVal = (_this # 1); uiNamespace setVariable ['BNA_KC_CtrlSpread',_ctrlVal];";
			idc = 1231321;
			columns = 2;
			strings[] = {"Enable","Disable"};
			values[] = {0,1};
			x = "3.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "2.6 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "6.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonMenuOK: RscButtonMenuOK
		{
			idc = 9946432;
			x = 0;
			y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "4.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class ButtonMenuCancel: RscButtonMenuCancel
		{
			onButtonClick = "_display = ctrlParent (_this # 0); if ('BNA_KC_Marker_Datapad' in allMapMarkers) then {deleteMarker 'BNA_KC_Marker_Datapad';}; ctrlDelete (_display displayCtrl 1112350); ";
			x = "6 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			y = "7 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			w = "5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};

class JRYMap: RscDisplayEmpty
{
	class controlsBackground
	{
		class JRYMapControl: RscMapControl
		{
			onLoad = "(_this # 0) ctrlSetPosition [0,0,1,1]; (_this # 0) ctrlCommit 0;";
			onMouseButtonDblClick = "(_this # 0) call BNA_KC_vehicles_fnc_guiDataPad;";
		};
	};
	class controls{};
};