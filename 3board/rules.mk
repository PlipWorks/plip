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

BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE  = yes
EXTRAKEY_ENABLE  = yes
NKRO_ENABLE 	 = yes
COMBO_ENABLE 	 = no
RGBLIGHT_ENABLE  = no
ENCODER_ENABLE   = no
