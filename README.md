# raunch-firmware - Open Source Firmware for the Fleshlight Launch

The Fleshlight launch 

# Retreiving The Stock Firmware

To retreive the stock firmware, visit the following URL:

http://feel-technologies.com/firmware

This URL contains a JSON file that lists the URLs for Kiiroo toys, as
well as the Fleshlight Launch. The Launch firmware will be
unencrypted, in Intel Hex format.

# Making The Firmware Readable

To turn the firmware from Intel Hex into binary, use objcopy.

```
objcopy -I ihex Launch_V1.2.hex -O binary Launch_V1.2.bin
```

From there, the file can be disassembled using your favorite
PIC-compatible disassembler.

# Hardware Information

The Fleshlight Launch uses
a
[PIC24FJ64 CPU](http://www.microchip.com/wwwproducts/en/PIC24FJ64GA004).
