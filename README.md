# Qt Playground

## Dev environment setup

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

## Examples

### Notepad

![Notepad screenshot](notepad/notepad-ss.png?raw=true "Notepad screenshot")
