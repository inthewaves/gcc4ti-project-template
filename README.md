# GCC4TI Project Template
A CLion project template for use in building programs for TI-89(T), TI-92+ and TI-V200 calculators using
the GCC4TI/TIGCC SDK.

## Prerequisites
- CLion
- [TIGCC](http://tigcc.ticalc.org/linux.html) or [GCC4TI](https://github.com/debrouxl/gcc4ti), with 
environmental variables set up.
- (Optional) [TiEmu](http://lpg.ticalc.org/prj_tiemu/index.html), an emulator for TI-89/92/92+/V200PLT.
Either use your own ROMs or use one of TiEmu's free PedRoms

## Using the template
Clone the repo and use it as a CLion project.

We use `include_directories($ENV{TIGCC}/include/c)` in `CMakeLists.txt` to include the TIGCC libraries. Make sure you have environmental variables set up for GCC4TI/TIGCC, i.e. `TIGCC=/usr/local/share/gcc4ti` or `TIGCC=/usr/local/tigcc`. If you are unable to do that, then edit the line so that it points to the
appropriate location.

An example CLion `workspace.xml` is provided in the form of `workspace-example-xml` with custom run 
configurations for GCC4TI and TiEmu. It provides GCC4TI and TiEmu run configurations for Linux, running
GCC4TI from `/usr/local/share/gcc4ti/bin/tigcc` and TiEmufrom `/usr/bin/tiemu` (TiEmu configuration is 
based on a Debian 9 Linux package installation).

To compile, look at the top-right area and make sure the TiEmu build application is used. In the **Run**
menu, it should say **Run 'TiEmu'**. 

Compile by going to **Run -> Run 'TiEmu'**, pressing the green play button around the top-right area, or
using the hotkey `SHIFT+F10`. This TiEmu run configuration will first run the TIGCC/GCC4TI configuration 
to build the calculator executable files. It runs GCC4TI from `/usr/local/share/gcc4ti/bin/tigcc`. 
It builds this using the command
```bash
tigcc -O2 hello.c
```
where the `-O2` switch turns on optimization as advised by the TIGCC docs.

Then TiEmu will be loaded from `/usr/bin/tiemu` (based on a Debian 9 Linux package installation).
Manually load a ROM. When the emulator loads, right click the calculator and go to **Send a file to 
TiEmu** or use its hotkey `F10`. Then navigate to the project folder and select the appropriate calculator
executable to send to the emulator.

After that, press HOME on the calculator, type in `hello()`, and press enter to see the test program.


