# D1P: The Morse code key(board)!
![d1p_flowers](d1p_flowers.jpg)

## A few things to note

1. Before disassembling the D1P, turn off the LEDs because the bare LEDs are very bright.
2. Before disassembling the D1P, unplug the keyboard so that the switch leads don't short anything.
3. When shorting the Reset and Ground pads while flashing, don't touch any other exposed pads on the D1P.
4. While reassembling, orient the plate such that the corner without the notch is on the bottom left.

## How to flash the D1P

This is for those of you who want to update the firmware on the D1P or change the functionality of the D1P (i.e. don't want to use Morse code).

1. Download the files from this repository.
2. Download QMK Toolbox from [the Github](https://github.com/qmk/qmk_toolbox/releases) for your specific OS (e.g. MacOS, Windows).
3. Grab your D1P, plug it into your computer, **turn off the D1P LEDs**. If you have not yet flashed the D1P, use "..-..-" to turn off the LEDs. Unplug your D1P.  
![flash3](tutorial_img/flash_img/flash3.jpg)
4. Open QMK Toolbox.  
![flash4](tutorial_img/flash_img/flash4.png)
5. Under the **MCU (AVR only)** dropdown in the top right corner, select **ATMega32u2**.  
![flash5](tutorial_img/flash_img/flash5.png)
6. Check the **Auto-Flash** box in the top right.  
![flash6](tutorial_img/flash_img/flash6.png)
7. To the right of the **Local file** dropdown, click the **Open** button.    
![flash7a](tutorial_img/flash_img/flash7a.png)  
Navigate to and select one of the hex files from this repository.  
![flash7b](tutorial_img/flash_img/flash7b.png)
8. Remove the keycap, switch, and plate from the D1P. Plug in the D1P and orient it such that the USB cable leads away from you.  
![flash8](tutorial_img/flash_img/flash8.jpg)
9. Using a pair of metal tweezers or a bent paperclip, touch the two pads in the bottom left corner of the circuit board where it says "Short Pads to Reset".  
![flash9](tutorial_img/flash_img/flash9.jpg)
10. QMK Toolbox should automatically detect that the D1P is in DFU mode and flash your D1P.  
![flash10](tutorial_img/flash_img/flash10.png)
## VIA Tutorial
For those of you who want to be able to change the D1P keymap on the fly, use VIA!

To use the D1P with VIA, you need to set up a few things.

1. Flash the D1P with the VIA hex file using the **How to flash the D1P** tutorial.
2. Download VIA from [VIA's website](https://caniusevia.com/) for your specific OS (e.g. MacOS, Windows).
3. Open VIA and navigate to the **Settings** tab. ![via3](tutorial_img/via_img/via3.png)
4. Toggle the **Show Design tab** switch to the on position. ![via4](tutorial_img/via_img/via4.png)
5. Navigate to the **Design** tab. ![via5](tutorial_img/via_img/via5.png)
6. Click on the **Load** button. ![via6](tutorial_img/via_img/via6.png)
7. Upload the d1p.json file.  
![via7](tutorial_img/via_img/via7.png)
8. Once the upload is complete, navigate to the **Configure** tab. ![via8](tutorial_img/via_img/via8.png) If you have another VIA compatible keyboard, you may not see the D1P configuration page. Use the arrows in the top right to navigate to the D1P. ![via8a](tutorial_img/via_img/via8a.png)
9. Here, you can modify the D1P keymap without having to flash the board. ![via9](tutorial_img/via_img/via9.png)
