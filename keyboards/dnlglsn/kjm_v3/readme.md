Old:
```bash
make dnlglsn/voidstar:default:avrdude
```

New:
```bash
qmk compile -kb dnlglsn/voidstar -km default
qmk flash -kb dnlglsn/voidstar -km default
```
