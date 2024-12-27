# esp-idf-devcontainer-example

The example of ESP-IDF development environment in Dev Container

## Usage

### Connect ESP32 device

If you want to connect and flash ESP32 via USB, attach and mount the USB device to the container.
Change to uncomment the following line in devcontainer.json.

[**devcontainer.json**](.devcontainer/devcontainer.json)

```diff
--	// "runArgs": ["--device=/dev/ttyUSB0:/dev/ttyUSB0"],
++	"runArgs": ["--device=/dev/ttyUSB0:/dev/ttyUSB0"],
```

"Reopen in Container" in Visual Studio Code.

### Build

You can use `idf.py` via `idf` command.

```bash
$ idf build
Executing action: all (aliases: build)
Running ninja in directory /workspaces/esp-idf-devcontainer-example/build

~~~

Project build complete. To flash, run:
 idf.py flash
or
 idf.py -p PORT flash
or
 python -m esptool --chip esp32 -b 460800 --before default_reset --after hard_reset write_flash --flash_mode dio --flash_size 2MB --flash_freq 40m 0x1000 build/bootloader/bootloader.bin 0x8000 build/partition_table/partition-table.bin 0x10000 build/main.bin
or from the "/workspaces/esp-idf-devcontainer-example/build" directory
 python -m esptool --chip esp32 -b 460800 --before default_reset --after hard_reset write_flash "@flash_args"
```

### Flash

You can use `idf` command to flash and monitor.

```bash
$ idf flash monitor
Executing action: flash
Serial port /dev/ttyUSB0
Connecting.......
Detecting chip type... Unsupported detection protocol, switching and trying again...
Connecting....
Detecting chip type... ESP32
Running ninja in directory /workspaces/esp-idf-devcontainer-example/build

~~~

I (324) heap_init: Initializing. RAM available for dynamic allocation:
I (331) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM
I (337) heap_init: At 3FFB43F8 len 0002BC08 (175 KiB): DRAM
I (343) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (349) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (356) heap_init: At 4008CC90 len 00013370 (76 KiB): IRAM
I (364) spi_flash: detected chip: gd
I (366) spi_flash: flash io: dio
W (370) spi_flash: Detected size(4096k) larger than the size in the binary image header(2048k). Using the size in the binary image header.
I (387) main_task: Started on CPU0
I (397) main_task: Calling app_main()
Hello, world!
```

## Environments

- Visual Studio Code(Dev Container)
- [ESP-IDF](https://github.com/espressif/esp-idf) v5.3.2
- [usbipd-win](https://github.com/dorssel/usbipd-win)(Windows)

Can't use in MacOS.

## References

- [Developing inside a Container using Visual Studio Code Remote Development](https://code.visualstudio.com/docs/devcontainers/containers)
- [Standard Toolchain Setup for Linux and macOS - ESP32 - — ESP-IDF Programming Guide v5.3.2 documentation](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/linux-macos-setup.html)
- [Connect USB devices| Microsoft Learn](https://learn.microsoft.com/windows/wsl/connect-usb)

## License

[MIT License](LICENSE)

## Author

[toms74209200](<https://github.com/toms74209200>)