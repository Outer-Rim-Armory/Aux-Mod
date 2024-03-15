# Vehicle Shields

Adds a vehicle shields system that can be added to any vehicle via the vehicle's config.

## Usage
A vehicle's shield is usually activated by the current pilot in an ACE interaction. This ACE interaction will display the shield's current health and have an action to enable or disable the shield.

While activated, the shield will take all damage that would be dealt to the vehicle. If the shield takes enough damage to be destroyed, the vehicle will take any remaining damage not absorbed by the shield. When the shield takes damage, an indicator with shield's remaining health will be displayed.

## Recharging
Each vehicle's shield will take a varying amount of time to start to automatically recharge. For example, the ARC-170 will attempt the recharge its shield every 10 seconds. If the ARC-170's shield has not been hit within the past 10 seconds, the shield will recharge some amount of health.

Some vehicles can also have their shields recharged externally by ground crew while landed. A ground crew member will need to be Engineer trained and have a toolkit to begin recharging the vehicle's shield. The vehicle must remain grounded while recharging. The ACE interaction point(s) to recharge the vehicle's shield will vary by vehicle.