# D1P: The Morse code key(board)!
<img src="d1p_flowers.jpg" width="500">

## A few things to note

1. Before disassembling the D1P, turn off the LEDs because the bare LEDs are very bright.
2. Before disassembling the D1P, unplug the keyboard so that the switch leads don't short anything.
3. When shorting the Reset and Ground pads while flashing, don't touch any other exposed pads on the D1P.
4. While reassembling, orient the plate such that the corner without the notch is on the bottom left.

## How to flash the D1P

This is for those of you who want to update the firmware on the D1P or change the functionality of the D1P (i.e. don't want to use Morse code).
<details>
  <summary>Click here to learn how to flash the D1P!</summary><hr>
  
1. Download the files from this repository.
2. Download QMK Toolbox from [the Github](https://github.com/qmk/qmk_toolbox/releases) for your specific OS (e.g. MacOS, Windows).
3. Grab your D1P, plug it into your computer, **turn off the D1P LEDs**. If you have not yet flashed the D1P, use ```..-..-``` to turn off the LEDs. Unplug your D1P.
<img src="tutorial_img/flash_img/flash3.jpg" width="500">

4. Open QMK Toolbox.  
<img src="tutorial_img/flash_img/flash4.png" width="700">

5. Under the **MCU (AVR only)** dropdown in the top right corner, select **ATMega32u2**.  
<img src="tutorial_img/flash_img/flash5.png" width="700">

6. Check the **Auto-Flash** box in the top right.  
<img src="tutorial_img/flash_img/flash6.png" width="700">

7. To the right of the **Local file** dropdown, click the **Open** button.    
<img src="tutorial_img/flash_img/flash7a.png" width="700">

Navigate to and select one of the hex files from this repository.  
<img src="tutorial_img/flash_img/flash7b.png" width="700">

### There are two ways to do this next part. Try option 1 first, if that fails, try option 2.
#### Option 1
8. While holding down the switch on the D1P, plug it into your computer, hold the switch for at least 3 seconds, then let go.  
<img src="tutorial_img/flash_img/flash8a.jpg" width="500">

9. QMK Toolbox should automatically detect that the D1P is in DFU mode and flash your D1P.  
<img src="tutorial_img/flash_img/flash10.png" width="700">
  
If you see something similar in your QMK Toolbox console, then you're done! Otherwise try Option 2.

#### Option 2
8. Remove the keycap, switch, and plate from the D1P. Plug in the D1P and orient it such that the USB cable leads away from you.  
<img src="tutorial_img/flash_img/flash8.jpg" width="500">

9. Using a pair of metal tweezers or a bent paperclip, touch the two pads in the bottom left corner of the circuit board where it says "Short Pads to Reset" for at least 3 seconds, then let go.  
<img src="tutorial_img/flash_img/flash9.jpg" width="500">

10. QMK Toolbox should automatically detect that the D1P is in DFU mode and flash your D1P.  
<img src="tutorial_img/flash_img/flash10.png" width="700">

Done!
</details>
  
## VIA Tutorial
For those of you who want to be able to change the D1P keymap on the fly, use VIA!
<details>
  <summary>Click here for the VIA tutorial!</summary><hr>
  
To use the D1P with VIA, you need to set up a few things.

1. Flash the D1P with the VIA hex file using the **How to flash the D1P** tutorial.
2. Download VIA from [VIA's website](https://caniusevia.com/) for your specific OS (e.g. MacOS, Windows).
3. Open VIA and navigate to the **Settings** tab.
<img src="tutorial_img/via_img/via3.png" width="700">

4. Toggle the **Show Design tab** switch to the on position.
<img src="tutorial_img/via_img/via4.png" width="700">

5. Navigate to the **Design** tab.
<img src="tutorial_img/via_img/via5.png" width="700">

6. Click on the **Load** button.
<img src="tutorial_img/via_img/via6.png" width="700">

7. Upload the d1p.json file.  
<img src="tutorial_img/via_img/via7.png" width="700">


8. Once the upload is complete, navigate to the **Configure** tab.
<img src="tutorial_img/via_img/via8.png" width="700">

If you have another VIA compatible keyboard, you may not see the D1P configuration page. Use the arrows in the top right to navigate to the D1P.  

<img src="tutorial_img/via_img/via8a.png" width="700">


9. Here, you can modify the D1P keymap without having to flash the board.
<img src="tutorial_img/via_img/via9.png" width="700">

Enjoy!
</details>
