# GxLiquidDrive.lv2
Liquid Drive provides a tonal response with a warm mild to aggressive overdrive, which can do anything from Blues to Hard Rock

![GxLiquidDrive](https://raw.githubusercontent.com/brummer10/GxLiquidDrive.lv2/master/GxLiquidDrive.png)


###### BUILD DEPENDENCY’S 

the following packages are needed to build GxLiquidDrive:

- libc6-dev
- libcairo2-dev
- libx11-dev
- x11proto-dev
- lv2-dev

note that those packages could have different, but similar names 
on different distributions. There is no configure script, 
make will simply fail when one of those packages isn't found.

## BUILD 

$ make install

will install into ~/.lv2

$ sudo make install

will install into /usr/lib/lv2

