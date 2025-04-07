# Void* by /u/dnlglsn

I have been working on a changeable and easily modifiable split keyboard for
about 1.5 years. I've been through many iterations and prototype PCBs and
finally got to the point of producing the first real batch of PCBs.

I created the keyboard with the idea of re-usability and modification as
primary features. I moved the controller to a daughter board and added a
standard PCB pin interface from the main board to the daughter board, allowing
someone to rapidly prototype new and inventive controllers and firmware or to
change the controller from a wired to a wireless controller easily.

Each key also uses a Kailh hotswap socket, allowing a user to try many
different switches easily without the need to buy another PCB.

The firmware is QMK and a fork of the repository is available on my Github:
https://github.com/dnlglsn/qmk_firmware/tree/dnlglsn/voidstar

Imgur Album: https://imgur.com/a/WP2pgiz

### Supported Layouts

http://www.keyboard-layout-editor.com/#/gists/396ea4610bedcd2d3a1302b5780d3cfe

Each of the ghosted keys can also be removed, allowing the keyboard to be
anything from a 60% to a 90% keyboard. It also has ISO and stepped tab key
support.

### QMK Layout Folder Reference

There are multiple layouts available for this keyboard. To figure out what
layout you want to use, visit the Keyboard Layout Editor link at:
http://www.keyboard-layout-editor.com/#/gists/396ea4610bedcd2d3a1302b5780d3cfe

Then, use the combinations of color section options to choose which layout to
flash to the controller.

For example: Blue A (bA), Red ANSI (rA), Purple C (pC), Green D (gD),
Orange A (oA), and Yellow C (yC) would be the layout: `bA_rA_pC_gD_oA_yC`. To
flash a v2 layout using `avrdude` for a Pro Micro daughter board, use the
command:

```bash
make dnlglsn/voidstar/v4/pro_micro_v1:bA_rA_pC_gD_oA_yC:avrdude
make dnlglsn/voidstar/v4/pro_micro_v1:bA_rA_pC_gD_oBE_yB:avrdude
```

> If you run into issues on Linux about "butterfly programmer" failing, try
stopping the modem manager service. `sudo service ModemManager stop`

To flash a v4 layout using a v4 Teensy 2.0 daughter board, first install the
Teensy 2.0 cli tool.

https://www.pjrc.com/teensy/loader_cli.html
```bash
sudo apt install teensy-loader-cli
```
and then use these commands:

```bash
make dnlglsn/voidstar/v4/teensy_2.0_v1:bA_rA_pC_gD_oA_yC
teensy_loader_cli -mmcu=atmega32u4 -w dnlglsn_voidstar_v4_teensy_2.0_v1_bA_rA_pC_gD_oA_yC.hex
```
