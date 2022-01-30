# Welcome to the PLIP keyboard repo
Here, you'll find the files required for compiling QMK firmware for your PLIP-designed keyboards.  
You'll also sometimes find KiCAD files and CAD models if we've decided to open-source them.

## How to use

#### Pre-requisite: Study up on how to compile and flash QMK firmware. [Here is a good starting point.](https://docs.qmk.fm/)

1. Clone this repository into your **qmk/qmk_firmware/keyboard/** folder.
2. Each keyboard folder will have the .hex file of each keymap for that keyboard.  
However, feel free to re-compile the firmware with your version of QMK.  
Example: If you want to compile the VIA firmware for the D1P, you would run: ``` qmk compile -kb plip/d1p -km via ```.
3. Flash your keyboard with QMK Toolbox.
4. Done!

#### Links to flashing/configuration/other tools

[Download QMK Toolbox here](https://github.com/qmk/qmk_toolbox/releases)  
[Download VIA here](https://caniusevia.com/)  
[Download Vial here](https://get.vial.today/)  
