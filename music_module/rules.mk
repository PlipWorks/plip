# MCU name
MCU = RP2040 # https://www.reddit.com/r/olkb/comments/xf5eyx/seeed_xiao_and_qmk/

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = rp2040

# Build Options
#   change yes to no to disable
#
LTO_ENABLE = yes

BOOTMAGIC_ENABLE = yes     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no      # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # USB Nkey Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow
MIDI_ENABLE = yes            # MIDI support
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
