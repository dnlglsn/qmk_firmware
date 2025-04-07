MCU = atmega32u4
F_CPU = 8000000
ARCH = AVR8
F_USB = $(F_CPU)
BOOTLOADER = caterina # caterina for Adafruit Feather 32u4 Bluefruit
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes # Audio control and System control(+450)

# If you snap off a row/column and want to use RGB LEDs, turn this on.
# https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgblight.md
RGBLIGHT_ENABLE = no

# Since we are using an Adafruit Feather 32u4 Bluefruit LE
# https://www.adafruit.com/product/2829
# https://learn.adafruit.com/adafruit-feather-32u4-bluefruit-le
BLUETOOTH = AdafruitBLE

# When a new version is released, update the version.
BLUETOOTH_ENABLE = yes
DEFAULT_FOLDER = dnlglsn/voidstar/v4/feather_32u4_v1
