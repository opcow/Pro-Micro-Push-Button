# 3D Printable Pro Micro Based Push Button

This is a single pushbutton. You could use it as a push to talk button, a jump button for games that are playable with 1 button (e.g. I use it for the game Geometry Dash), or whatever. The button can emulate any combination of keyboard key, mouse button, and game controller button inputs.

This design fits my Chinese Pro Micro knockoff perfectly, but may not fit every board as well. A step file of the assembly is included for easy modification.

I print the conical cap pointy end down using a brim for bed adhesion. Supports are not needed for any parts.

I use Cura's dynamic quality at 0.16 layer height. This setting adjusts the layer height based on model detail. If your slicer doesn't offer this functionality, you might want to use a finer print setting for better fitting threads. I've found that my threads fit best using Cura and also work well using PrusaSlicer. ideaMaker didn't make good threads in my tests, but YMMV. I didn't test any other slicers.

Non-printable parts needed:

* [Pro Micro Arduino microcontroller](https://deskthority.net/wiki/Arduino_Pro_Micro).
* A bit of wire.
* 1 micro switch

I use the kind of micro switch found in a computer mouse. A mounting adapter for this kind of switch is included. A momentary pushbutton could be used as well by making an adapter with, for example, a round 16 mm hole. Import the included step file into your CAD software to make your own button/switch adapter.

STL files are included for a cyclindrical Pro Micro case sans the lower threads for the lower cap. This was left over from the prototype design, but I left it in as someone may find it useful. The upper pieces are compatible if you don't care about the lower cap witch serves as a longer grip and captures the USB cable, but is optional. The lower ring can also be used is place of the lower cap.

![image-01](https://raw.githubusercontent.com/opcow/Pro-Micro-Push-Button/main/Pro%20Micro%20Button.png)
