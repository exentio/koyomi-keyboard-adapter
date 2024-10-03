# Project Koyomi keyboard adapter

Firmware used in conjunction with custom boards.  
Currently only supports the JIS layout keyboard, but porting to other layouts
should be trivial.  
Some variants may come with missing features, check the hardware info.  

* Keyboard Maintainer: [Exentio Kawasaki](https://github.com/Exentio)

Make example for this keyboard (after setting up your build environment):

    make koyomi:rp2040

Flashing example for this keyboard:

    make koyomi:rp2040:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Pull down reset pin twice to enter bootloader mode. Copy the built uf2 file to the device by dragging the file to the new USB disk.
