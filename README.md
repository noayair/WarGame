## namespace Wargame:

board:
A board representing a board game with soldiers.

soldier:

Each player has several different types of soldiers, each type of soldier has different abilities.
Has fields of location on board ,player number, health points, and damage points .Also has act and move functions.

inheritors:

* FootSoldier - legs - can go one slot in any direction. Shoots at the enemy soldier closest to him (if there are any - he shoots one of them arbitrarily).

* FootCommander - Like my feet, but when he moves, not only does he shoot but all the foot soldiers of that player shoot.

* Sniper - sniper - can go one slot in any direction. Shoots at the enemy’s strongest soldier - the one who has the most health points (if there are a few - he chooses one of them arbitrarily).

* SniperCommander - Like a sniper, but when he moves, not only does he shoot but all of the same sniper's shoot.

* Paramedic - a medic - can go one slot in any direction. Does not fire at all, but only heals all the soldiers of the same player who are in the slot next to him (returns their number of health points to the starting number).

* ParamedicCommander - Like a medic, but when he moves, all the player's medics heal the soldiers who are near them.

