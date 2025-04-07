# PNWKeyboards: Splitology by /u/dnlglsn

### Prerequisites

Install compilation tools:
```bash
sudo apt install avr-libc gcc-avr avrdude
```

Add your user to the group which can modify the USB stuff
```bash
sudo usermod -aG tty $(whoami)
sudo usermod -aG dialout $(whoami)
newgrp tty
newgrp dialout
```

### Compile and Flash

```bash
make dnlglsn/splitology/v1/pro_micro_v1:mine:avrdude
```

If you run into issues on Linux about "butterfly programmer" failing, try
stopping the modem manager service. `sudo service ModemManager stop`
