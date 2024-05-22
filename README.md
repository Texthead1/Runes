# Runes

A skylanders figure editor.

It is not yet ready for public use.

# Building

## Windows

Requires MSYS2, use MINGW64 and not UCRT64.

Dependencies:
* Qt 6.7.0
* yaml-cpp, can be installed with `pacman -S mingw-w64-x86_64-yaml-cpp`

Compiling:
* Run `qmake "CONFIG+=debug"` (`qmake` for release) and `make` to compile
* Run `windeployqt debug` (`windeployqt release` for release) to include the Qt binaries

## Usage

Requires a salt.txt file in the Resources folder, its contents should be the salt used in the MD5 hash that generates the encryption key.

`Runes <Path to encrypted dump file>`