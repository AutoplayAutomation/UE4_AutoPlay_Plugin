# Getting Started!

Contact: autoplay.automation@gmail.com

https://www.youtube.com/watch?v=YS8msXrFwZA

Let's try to build first game with plugin enabled (Current version works only on mobile devices (Android, iOS)).

 - Download AutoPlay Plugin for you Unreal Engine version. [Link](https://github.com/AutoplayAutomation/UE4_AutoPlay_Plugin/tree/master/Plugin)
 - Place Plugin to Engine/Plugins Folder "*/[UE4 Root]/Engine/Plugins/AutoPlay/*". Precompiled plugin works only like engine plugin.
 - Start Unreal Engine Editor
 - Create new Mobile C++ / Puzzle Project
		![Create puzzle c++ game](https://github.com/AutoplayAutomation/UE4_AutoPlay_Plugin/blob/master/Documentation/images/create_puzzle.png)
 - In Unreal Editor open Edit->Plugins
 - Check AutoPlay active then confirm restart editor
 ![Activate plugin](https://github.com/AutoplayAutomation/UE4_AutoPlay_Plugin/blob/master/Documentation/images/plugin.png)
 - Plugin works only with **DEVELOPMENT** build, be care about this. Go to  Edit->Project Settings->Project->Packaging->Build Configuration and select Development
 ![set build to Development](https://github.com/AutoplayAutomation/UE4_AutoPlay_Plugin/blob/master/Documentation/images/development.png)
 - Configure Android SDK, iOS provisioning, etc
 - Now Package your game.

Finally after start game you should see AutoPlay logo. Enjoy! 

![enter image description here](https://github.com/AutoplayAutomation/UE4_AutoPlay_Plugin/blob/master/Documentation/images/logo.png)
