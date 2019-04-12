# Void* by /u/dnlglsn

I have been working on a changeable and easily modifiable split keyboard for
about 1.5 years. I've been through many iterations and prototype PCBs, and
finally got to the point of producing the first real batch of PCBs.

Imgur Album: https://imgur.com/a/WP2pgiz

### Supported Layouts

http://www.keyboard-layout-editor.com/#/gists/396ea4610bedcd2d3a1302b5780d3cfe

Each of the ghosted keys can also be removed, allowing the keyboard to anything
from a 60% to a 90% keyboard. It also has ISO and stepped tab key support.

### QMK Layout Folder Reference

There are multiple layouts available for this keyboard. To figure out what
layout you want to use, visit the Keyboard Layout Editor link at:
http://www.keyboard-layout-editor.com/#/gists/396ea4610bedcd2d3a1302b5780d3cfe

Then, use the combinations of color section options to choose which layout to
flash to the controller.

For example: Blue B (bB), Red ANSI (rANSI), Purple D (pD), Orange B (oB), and
Yellow B (yB) would be the layout: `bB_rANSI_pD_gD_oB_yB`. To flash the layout
using `avrdude`, use the command:

```bash
make dnlglsn/voidstar/v1:bB_rANSI_pD_gD_oB_yB:avrdude
```
