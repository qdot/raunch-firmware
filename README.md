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

# Disclaimer

The raunch project is in no way affiliated with Fleshlight, Kiiroo, or
any of their partners. The documentation and libraries here have been
produced via clean room reverse engineering methods, and are provided
with no guarantees, as outlined by the license agreement. Usage of
these libraries and information is in no way condoned by
aforementioned companies, and may void the warranty of your toy.

# License

All original code and documentation is covered under the following BSD
license:

    Copyright (c) 2016, Metafetish
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
        * Redistributions of source code must retain the above copyright
          notice, this list of conditions and the following disclaimer.
        * Redistributions in binary form must reproduce the above copyright
          notice, this list of conditions and the following disclaimer in the
          documentation and/or other materials provided with the distribution.
        * Neither the name of the project nor the names of its
          contributors may be used to endorse or promote products
          derived from this software without specific prior written
          permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
    CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
    BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
    FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
    TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
    USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
    DAMAGE.
