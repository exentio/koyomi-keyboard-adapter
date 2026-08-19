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

---

### Forking guidelines
I hope that this design will inspire people to work on similar projects, and
that they'll be used as references to learn how to work on similar projects!  
If you want to make any contribution, you're welcome to fork and send a pull
request, as long as LLMs are not directly involved and you understand your
changes!  

You're also welcome to make changes to any part of this project to implement
different design choices, without having to send a pull request; however, if
your fork takes a completely different direction from Koyomi and breaks
compatibility, I kindly ask you to drop the name "Koyomi" from your project.
Please also remove every art on the PCB, if possible (wouldn't make sense to
have my face on a completely different project anyway).  
This can't and won't be enforced, so I'm just asking informally to please
respect this request, if you want to use my designs.  

### Commercial use
I purposely decided to allow commercial use for this project for two reasons: I
would be happy if modernized Vaio Ps and Koyomi were to be used in professional
contexts, and to let people distribute PCBs so everyone can build their own,
without having to sell parts myself, which is not something I can handle.  

If you plan to sell boards and parts, I only have these simple requests:  
- Please make them reasonably affordable and don't mark them up absurdly, I
want this project to be approachable from every point of view.  
- If you're profiting from reselling my designs, please donate something back
to the people who made the designs you're selling.  
- Don't remove any drawings/art on the PCBs, but you're allowed to add your own.  

None of these can and will be enforced, so I'm just asking you to respect the
time and hard work the other contributors and I have poured into designing
Koyomi.
