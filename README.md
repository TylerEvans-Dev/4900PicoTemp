# Pico Temaplte

Here is a template for with the PICO W. without a testing network.


## windows specific code

using windows is horrid and a mistake however, I will include how to do this

open up power shell and download wsl
``` wsl --install  ```

## once in WSL
use this command to get into the home dir.
```cd ~ ```

use the following command to install the dep for the pico. this will require you to enter your password to
install the dep.
```sudo apt-get install cmake g++ gcc-arm-none-eabi -y```

now copy the dir

``` git clone --recursive https://github.com/TylerEvans-Dev/4900PicoTemp.git  ```

# making the build files
run the shell scrpit
bash b.sh

and then hold the pico bootsel plug in the pico via usb it will show up on windows file explorer find the ubuntu file
go into home and then the file for the template file last of all go into build, and drag and drop the robo.uf2 file
in the pico directory.

the pico will now start the code!
thanks,
~Tyler.
