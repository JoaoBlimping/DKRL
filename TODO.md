# How the levels will be stored and that.
Ok I think I will probably have to have two layers of things so that it won't look too munted. Both layers will contain
tiles, since having a million tree objects or whatever would be pretty rubbish.
yeah that will work ok. I guess the tiles on the higher level will probably not be the same ones as on the bottom, but a
byte will fit them easily anyway.

# Gameplay
Standard melee and ranged weapons with different kinds of guns firing different kinds of ammo. Naturally
weapons and armor can have unique stats or even be parts of a special set.
I also want to add a lot of different potions and scrolls which all need to be identified, and have weird
effects. I like it when you are about to die and you somehow survive by using a bunch of weird scrolls and stuff.
The aim of the game is to get keys off the bosses at the bottom of each level. when you have all of them you can go
fight King K.rool and then when you beat him you win.

# Levels
Ok, so I reckon you'll have the DK island as a kinda hub world, with each level being a dungeon going down from that.
to start with I think I'll cut out some levels so I can make it quicker.
- **Jungle Japes**
- **Angry Aztec**
- Frantic Factory
- Gloomy Galleon
- **Fungi Forest**
- **Crystal Caves**
- Creepy Castle
- **Hideout Helm**


#flow of game
In order to be able to do everything lazily but still have it not be weird, I will have a ui thread and a game thread, and
the game thread will be allowed to block if it wants to. yeah that should work.
