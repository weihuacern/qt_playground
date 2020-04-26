# Qt Playground

## Development environment setup

### MacOS

- First, install qt and qt-creator with homebrew:

```bash
brew install qt
brew cask install qt-creator
```

- Then, check if installation is successful (qt, 5.14.1; qt-creator, 4.12.0):

```bash
brew info qt
brew cask info qt-creator
```

- Finally, configure qt-creator with qmake path:
Perferences -> Kits -> Qt Version -> Add -> Shift + Command + g with qmake path (/usr/local/Cellar/qt/5.14.1/bin/qmake)

### Ubuntu 18.04

- First install qt and qt-creator with apt:

```bash
sudo apt install qt5-default
sudo apt install build-essential
sudo apt install qtcreator
```

- Then, check if installation is successful (qt, 5.9.5+dfsg-0ubuntu2.5; qt-creator, 4.5.2-3ubuntu2):

```bash
sudo apt show qt5-default
sudo apt show qtcreator
```

- Finally, configure qt-creator with qmake path:
Tools -> Options... -> Build and Run -> Qt Versions

## Examples

### Notepad

![Notepad screenshot](notepad/notepad-ss.png?raw=true "Notepad screenshot")

### Tetris
