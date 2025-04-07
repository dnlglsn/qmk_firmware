MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
BOOTLOADER = caterina # caterina for Pro Micro
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes # Audio control and System control(+450)

# If you snap off a row/column and want to use RGB LEDs, turn this on.
# https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgblight.md
RGBLIGHT_ENABLE = no

# When a new version is released, update the version.
DEFAULT_FOLDER = dnlglsn/splitology/v1/pro_micro_v1
