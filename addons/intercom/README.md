# Vehicle Intercoms
Small utilities and additions to the intercom system provided by Task Force Arrowhead Radio Beta.

## External Wirless Intercom
TFAR adds the ability for certain helmets to be able to connect with vehicle intercoms wirelessly. The Keeli Company aux mod adds the ability to change what intercom to connect to. TFAR by default will only connect the player to the cargo intercom.

### Support
In order to properly get the intercom channel for each ACE interaction, an extra property has been added to each `ACE_SelfAction` class. This is required because the channel id can not always be gotten from or assumed from the class name.

To specify the channel id for an intercom action, set `BNA_KC_intercom_channelId` equal to the channel id for that intercom channel.

Example:
```cpp
class TFAR_IntercomChannel {
    displayName = "Intercom Channel";
    condition = "true";
    statement = "";

    class TFAR_IntercomChannel_disabled {
        BNA_KC_intercom_channelId = -1;
        displayName="Disabled";
        condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
        statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
    };
};
```

## Auto-Intercom Setter
When boarding a vehicle, your intercom will be automatically set to the corresponding channel: "crew" for drivers, gunners, and commanders and "cargo" for anything else. This can be toggled per player in the CBA settings menu.