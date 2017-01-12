# VR Cornhole
Game Time Baby

## Things you'll need
- A Windows 64-bit PC
- [Unreal Engine](https://www.unrealengine.com/download) with engine 4.14 or greater installed
- [Substance Plugin](https://www.unrealengine.com/marketplace/substance-plugin) installed (installed automatically upon project launch)
- An [HTC Vive Headset](https://www.vive.com/us/) installed and running properly

You will have to create an account with Epic Games in order to use and develop un the Unreal Engine. Once you have that you can use the Epic Game Launcher to download, install and launch any and all versions of the Unreal Engine as needed.

From there, you can open this project, within the launcher.

## Anatomy of this project

The project is broken down into several folders, based on the file types, which are more or less self explanatory. Some notable mentions:

- Blueprints: All Game Logic and Classes can be found here. Everything that makes the game tick.
- Enums: Only one file here, which is a simple list of discrete states that the game can be in. More on this later.
- GameModes: The game can be in three modes: It starts in menu mode, while the user makes selections and isn't really "playing", "multiplayer mode" or "Party mode".
- Maps: Holds the 3 main maps (or levels) that used in the game. One for the background in the main menu, one for the multiplayer arena, and one for the Party Mode.
- User Interfaces: All UMG (Unreal Motion Graphics) Widgets used in the UI.
- StarterContent: Some content shipped with the Unreal Engine used sparringly in the game.

