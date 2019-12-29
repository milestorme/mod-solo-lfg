# mod-solo-lfg

## Description

Solo LFG Module for Azerothcore.


## Installation

```
0. Go inside your /modules/ folder
1. git clone https://github.com/Artanisx/mod-solo-lfg.git
2. Apply lfg-solo.patch to your core.
    a. In order to do this, please go to the root /azerothcore-wotlk of your installation.
    b. Then do git apply modules/mod-solo-lfg/lfg-solo.patch (make sure the path is indeed pointing to your lfg-solo.patch file)
3. Re-run cmake and launch a clean build of AzerothCore.
    a. Go to your root folder and  ./bin/acore-docker-build
    b. Then do a docker-compose up
```

## Edit module configuration (optional)

If you need to change the module configuration, go to your server configuration folder (where your `worldserver` or `worldserver.exe` is)
rename the file SoloLfg.conf.dist to SoloLfg.conf and edit it.


## Credits
*  [Micrah/Milestorme: Module Creator](https://github.com/milestorme).
*  [Conan513:](https://github.com/conan513).
*  [Artanisx](https://github.com/Artanisx). - Update for Docker installations.
