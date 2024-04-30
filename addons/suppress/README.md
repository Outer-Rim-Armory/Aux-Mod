# Suppression
Suppression effects to make players think twice before sticking their head out from behind cover. Makes it harder for a player to focus on avoiding getting shot.

Forked from [SzwedzikPL's Simple Suppress](https://github.com/SzwedzikPL/SimpleSuppress).

## Settings
### Enabled
Default Value: **True**

Global setting for enabling or disabling suppression effects for all players.
> Added since Simple Suppress on its own does not feature a toggle setting, and not every group may want this feature from the Keeli Company aux mod.

### Overlay Opacity
Default Value: **0.96**

The opacity of the "overlay" texture from suppression. Setting to 0 essentially disables suppression effects.

### Overlay Texture
Default Value: **Medium**

Which texture to use for the suppression overlay, there is a light, medium, and dark variant.

### Overlay Fadeout Time
Default Value: **10**

The amount of time in seconds it takes for the overlay effect to fade completely.

### Projectile Max Distance
Default Value: **9**

The distance in meters that a bullet will suppress someone.

### Shooter Min Distance
Default Value: **0**

Minimum distance from shooter in meters. This option can be used to disable effect in CQB situations, 0 to disable min distance.

### Check Line of Sight
Default Value: **False**

When enabled, checks line of sight between player's eyes and passing projectile, ignoring projectiles passing behind cover, walls etc.