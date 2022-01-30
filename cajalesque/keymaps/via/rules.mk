# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina

EXTRAKEY_ENABLE 	= yes
NKRO_ENABLE 		= yes
RGBLIGHT_ENABLE = yes
# RGBLIGHT_MATRIX_ENABLE = yes
# RGB_MATRIX_DRIVER = WS2812
VIA_ENABLE = yes
