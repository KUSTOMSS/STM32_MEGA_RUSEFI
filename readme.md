Rusefi working on STM32_mega project:
https://github.com/pazi88/STM32_mega

It's tested on M52 P&P --> https://github.com/pazi88/Speeduino-M5x-PCBs/tree/master/m52_PnP

HOW TO:
1. Replace STM32F407VET6 to STM32F407VGT6.
2. Click Actions (https://github.com/KUSTOMSS/STM32_MEGA_PAZI88_RUSEFI/actions)
3. Click last workflow run with green flag.
4. Download rusefi_bundle_STM32_MEGA_xxxx-xx-xx.zip.zip
5. Unpack all and run rusefi_updater.exe
6. Turn your STM32_MEGA to DFU with boot button
7. Click Update Firmware and wait
8. In TunerStudioMS use rusefi_STM32_MEGA.ini

You can Desolder SPI Flash and use this pins to MAX31855/MAX31856 for reading EGT
