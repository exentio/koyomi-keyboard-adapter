# Project Koyomi keyboard adapter

Firmware used in conjunction with a custom board based on the RP2040.  
Currently only supports the JIS layout keyboard, but porting to other layouts
should be trivial.  
Extra buttons not implemented yet.  

* Keyboard Maintainer: [Exentio Kawasaki](https://github.com/Exentio)

Make example for this keyboard (after setting up your build environment):

    make koyomi:default

Flashing example for this keyboard:

    make koyomi:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Double-tap reset to enter bootloader mode. Copy the built uf2 file to the device by dragging the file to the new USB disk.