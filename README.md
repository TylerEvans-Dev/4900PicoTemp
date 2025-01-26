# Pico Temaplte

Here is a template for with the PICO W. without a testing network.
To use download the pico tool chain from vscode extenstion this will include several files
Addtionally the picotool lib
to use the temp
in terminal use git clone below or use download the file

``` git clone --recursive {link to git hub found on the top right} ```

## windows specific code

using windows is horrid and a mistake however, I will include how to do this

open up power shell and download wsl
``` wsl --install  ```

once the file system is installed download the following things with this command
```sudo apt cmake build-essential libusb-1.0-dev gcc-arm-none-eabi g++ -y ```
what it installs is the cmake, build essentail and gcc-arm and g++ features needed for compiling

### Recomendation

when using WSL it will be slow so in wsl navigate to your user profile in wsl by
2 times ``` cd ../../mnt/c/Users/{ENTER YOUR PROFILE NAME} ```

then use the following command
```nano .wslconfig```

add the following to your file any of it can be configured to be used
with your system depending on your hardware.

```
[wsl2]
memory = 8GB #this is the ram amount here
processors =3 #this is the number of processors
swap 2GB #this is the ram swap really helps!

```
use control x and control s and it wil save the file

navigate back to your system folder

```cd ~```

then navigate to the project you cloned

## to use the lib

Once all the files have been downloaded to use the program type

```cmake -B build -S . ```
once the build file has been made
To get the autocomlpetion feature navigate into the build build and type
```cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..```
then navigate into the build folder

type

```make```

and then hold the pico bootsel plug in via usb it will show up on windows file explorer find the ubuntu file
go into home and then the file for the template file last of all go into build, and drag and drop the robo.uf2 file
in the pico directory.

the pico will now start the code!
