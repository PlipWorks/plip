# MCU name
MCU = atmega32u2

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

EXTRAKEY_ENABLE 	= yes
NKRO_ENABLE 		= yes
COMBO_ENABLE = yes
RGBLIGHT_ENABLE = yes
BOOTMAGIC_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
LTO_ENABLE = yes
QMK_SETTINGS = no
TAP_DANCE_ENABLE = no
