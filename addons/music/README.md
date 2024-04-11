# Music

#### | [Music](https://github.com/Outer-Rim-Armory/Aux-Mod/tree/docs/music-readme/addons/music#music-1) | [Sound Effects](https://github.com/Outer-Rim-Armory/Aux-Mod/tree/docs/music-readme/addons/music#ambient-sounds) |


This is a general description on how to add music, sounds, and sound effects to Arma in the Keeli Company Auxillary mod.

"Important" audio files like music, ambient sounds, etc. should be `.ogg` files. They allow for higher quality compared to other file types, like Arma's `.wss` file.

The first step to adding your sound effect is downloading it and converting it to an `.ogg` file. If you are downloading it from YouTube, you can use [Loader.to](https://en.loader.to/4) to download the video to an `.ogg` directly.

## Music
Music tracks are defined in the `CfgMusic` class, which is located in the `CfgMusic.hpp` file in this addon. Music classes are defined in `CfgMusicClasses.hpp` and function as categories for music tracks.

### Steps
1. Place the `.ogg` music track into the `addons\music\data\music` folder.
2. Rename the file to `TAG_MusicName.ogg`
   - The "tag" is just an identifier for where the music comes from.
   - For example, songs from "Attack on Titan" are shortened to `AoT_MusicName`.
3. Now that your music file is set up, go to `CfgMusic.hpp` and find the category for the music you're adding. If it does not exist, just add a comment (a line beginning with `//`) and create one.

Here's an example of a category with a music track.
```cpp
// Minecraft
MUSIC(MC_Sweden,"[MC] Sweden",575,VideoGames);
```

4. For simplicity, a macro has been set up to define music classes based on input, this makes it easier and faster to add music.
   1. The first value is the name of the music track without the file extension. __It must match.__
   2. Second is the name of the music track in-game, it should have tag and song name in quotes.
   3. Third is the length of the song in seconds. If it's incorrect, it will likely have issues when played in game.
   4. Fourth is the music category the song belongs to. These are defined in `CfgMusicClasses.hpp`, just include the shortned name, `StarWars`, `VideoGames`, `Other`, etc.

## Ambient Sounds

"Ambient sounds" as we use them can be played with the "Play Sound" module in Zeus, but can be tricky to set up since they require three different classes to be made for them to work properly.

### Steps
1. Place your `.ogg` file in `addons\music\data\ambience`
2. The name is not as specific as it is for music, most names will work but try to keep them similarly named.
3. Go to `CfgSounds.hpp` and use the `SOUND` macro to set up your sound effect.
   1. First value is the name of the sound without the file extension. **It must match.**__**
   2. Second is the name of the sound effect in-game, it should be in quotes.
   3. Third is the subtitles that will play when the sound is used.
4. Go to `CfgSFX.hpp` and use the `SOUND_FX` macro.
   1. First value is the name of the sound without the file extenstion. **This should match the name in `CfgSounds`.**
   2. Second is the name of the sound in-game, this is what is shown in the "Play Sound" module, it should start with "[KC]" and be in quotes.
   3. Third is the range in meters that the sound can be heard from, the most common range is 100 meters.
5. Go to `CfgVehicles.hpp` and use the `SOUND_OBJ` macro.
   1. First value is the name of the sound without the file extenstion. **This should match the name in `CfgSounds`.**
   2. Second is the name of the sound in-game, it should begin with "[KC]" and be in quotes.