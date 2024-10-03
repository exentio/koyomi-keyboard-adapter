# Project Koyomi - keyboard adapter boards

Adapter boards for the Vaio P keyboard, made from the reverse engineering for
Project Koyomi, read [this blog post](https://blog.exentio.sexy/2024/04/25/project-koyomi-update-2.html)
for more.  
Consider these reference designs, you can use them in hand-wired builds, to
test other keyboard variations, or for use in your own projects!  

**⚠️ WARNING: at the moment of writing, the boards haven't been tested.**  
**I'm also planning a major redesign using the RP2354B.**

The boards come in two variants, one with the RP2040 running the QMK firmware,
and another using the RP2354A with currently no firmware (waiting for QMK
support).  
For the RP2040 board, you can find the necessary build files in the
`qmk-firmware` folder. Once the board is made and tested and all the features 
are added (the extra keys are missing), it'll be pushed to the mainstream QMK
repo.  
The only supported layout for now is the JIS (Japanese) one on the first gen
Vaio P, but it's merely a matter of reversing the matrix and changing the pins
and layouts in the QMK config as necessary.  

Since the adapter's only concern is the keyboard, a header breaks out the
following:  
+ Lid detection sensor
+ Power switch
+ Power LED
+ Charging LED
+ Standby LED
+ WiFi switch
+ WiFi LED
+ Disk activity LED
+ Scroll lock LED (due to lack of GPIOs)

The keyboard connector is made by Panasonic, and the model number is
`AXK750147G`, bear in mind that the connector can connect in both ways, check
the GND connections marked on the board, the darkest traces on the keyboard
connector lead to GND.  
