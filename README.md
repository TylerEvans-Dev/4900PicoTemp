# Pico Temaplte

Here is a template for with the PICO W. without a testing network.
To use download the pico tool chain from vscode extenstion this will include several files
Addtionally the picotool lib
to use the temp
in terminal use git clone below or use download the file

``` git clone --recersive {link to git hub found on the top right} ```

## to use the lib

Once all the files have been downloaded to use the program type

```cmake -B build -S . ```
once the build file has been made
To get the autocomlpetion feature navigate into the build build and type
```cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..```

then hold the bootsel button connect the pico device to your computer
to use the device one can either drag and drop the elf file in the build folder
or one can use this command
```picotool load build/robo.elf && picotool reboot -f```
