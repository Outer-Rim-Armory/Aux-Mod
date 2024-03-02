# Music

This is a general description on how to add music, sounds, and sound effects to Arma in the Keeli Company Auxillary mod.

## Music
Music tracks are defined in the `CfgMusic` class, which is located in the `CfgMusic.hpp` file in this addon. Music classes are defined in `CfgMusicClasses.hpp` and function as categories for music tracks.

### Steps
1. Download the music track you'd like to add and convert it to a `.ogg` file.
   - If downloading from YouTube, you can use [Loader.to](https://en.loader.to/4) to download the video to an `.ogg` directly.
2. Place the `.ogg` music track into the `addons\music\data\music` folder.
3. Rename the file to `TAG_MusicName.ogg`
   - The "tag" is just an identifier for where the music comes from.
   - For example, songs from "Attack on Titan" are shortened to `AoT_MusicName`.
4. Now that your music file is set up, go to `CfgMusic.hpp` and find the category for the music you're adding. If it does not exist, just add a comment (a line beginning with `//`) and create one.

Here's an example of a category with a music track.
```cpp
// Minecraft
MUSIC(MC_Sweden,"[MC] Sweden",575,VideoGames);
```

5. For simplicity, a macro has been set up to define music classes based on input, this makes it easier and faster to add music.
   1. The first value is the name of the music track without the file extension. __It must match.__
   2. Second is the name of the music track in-game, it should have tag and song name in quotes.
   3. Third is the length of the song in seconds. If it's incorrect, it will likely have issues when played in game.
   4. Fourth is the music category the song belongs to. These are defined in `CfgMusicClasses.hpp`, just include the shortned name, `StarWars`, `VideoGames`, `Other`, etc.