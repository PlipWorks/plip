# MCU name
# MCU = at90usb646

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
# BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable

# LTO_ENABLE = yes
# BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
# NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = yes
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE = no

ENCODER_MAP_ENABLE = yes