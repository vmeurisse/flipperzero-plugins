# Flipper plugins

Application collection for the [official flipper zero firmware](https://github.com/flipperdevices/flipperzero-firmware).

Note that I'am not the author of these apps. I just ported them to the official firmware and compiled them.

## Installation instructions

**You need to have an official firmware ≥ 0.67.2.**

Go to the [releases](https://github.com/vmeurisse/flipperzero-plugins/releases), download apps.zip and extract it in your SD card.

## Build instructions

- Clone the [official flipper zero firmware](https://github.com/flipperdevices/flipperzero-firmware)
- Add the content of this repo to the `applications_user` folder
- Follow [official instructions](https://github.com/flipperdevices/flipperzero-firmware/blob/dev/documentation/AppsOnSDCard.md)

### Calculator

To build the calculator app, you need to comment the line `"-Werror",` in file `site_scons/cc.scons`.
