# raunch-firmware - Open Source Firmware for the Fleshlight Launch

The Fleshlight Launch comes with some basic features. However, the
firmware loading process is known, and the firmware is publically
distributed and unencrypted. Time to make it better!

This repository will contain annotations for unwinding the
disassembled firmware, as well as new firmware for implementing
features like on-board effects, better positional feedback, and
whatever other stupid stuff we can come up with.

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
