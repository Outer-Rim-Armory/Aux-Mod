# Chat Wheel
A custom Chat Wheel for Arma using the vanilla "Commanding menu" for user input. Features configurable voice lines for saying certain messages or performing certain actions.

## Usage
To open the Chat Wheel, you'll first need to set a keybind for the "Open Menu" action. This can be done by:
1. Pausing the game.
2. Clicking "Controls"
3. Clicking "Configure Addons"
4. Finding "Keeli Company Auxillary Mod"
5. Clicking the "Open Menu" action under "Chat Wheel Menu"

Once set, pressing this keybind will open a menu with several message options. You can scroll through these messages with the scroll wheel and select an option by pressing <kbd>Space</kbd> or <kbd>Enter</kbd>. Some of these messages will open another menu with more options to select from.

## Tags
A unique feature of the Chat Wheel are [tags], these are special parts of a message that will be replaced with some kind of code output. For example, [weapon] will be replaced with the name of your currently held weapon.

For a full list of tags, launch a mission and open the map. You will see a "Chat Wheel Tags" entry in the top left. Here you can see an example of each tag.

## Settings
### Custom Message 1-4
Default Value: **Default**

There are four "Custom Message" settings, these allow you to customize four of the messages displayed in the Chat Wheel with whatever text you'd like. These messages do support [tags], including voice line tags.

### Enable Automated Messages
Default Value: **True**

This is a toggle for automated messages, this includes throwing grenades, other players falling unconscious (when using ACE Medical), etc.

### Unconscious Messages
Default Value: **True**

This is a setting specifically for the unconscious messages listed previously. This setting will only appear when ACE Medical is loaded.

### Voice Lines Radius
Default Value: **30**

Maximum radius (in meters) that voice lines can be heard from.

### Voice Lines Volume
Default Value: **3.0**

Volume used for voice lines.

### Enable Custom Voicelines
Default Value: **True**

Toggle for allowing custom voice lines to play.

### Custom Voicelines Cooldown
Default Value: **3**

Minimum time between playing voice lines for actions.

## Keybinds
### Open Menu
Default Keybind: **Unbound**

Opens the Chat Wheel menu.