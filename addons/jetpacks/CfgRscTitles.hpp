// TODO: Move to script_macros.hpp and update names
// Window sizes, measured in % of screen size
#define WINDOW_WIDTH 0.025
#define WINDOW_HEIGHT 0.3

#define WINDOW_X 0.95
#define WINDOW_Y 0.5

// Center display formula - displays in center of screen
// _x = (safeZoneX + (safeZoneWAbs / 2)) - (WINDOW_X / 2);
// _y = (safeZoneY + (safeZoneH / 2)) - (WINDOW_Y / 2);

class RscTitles
{
    #include "\ORA\BNA_KC\addons\core\ui\BaseControls.hpp"
    #include "ui\RscFuelDisplay.hpp"
};