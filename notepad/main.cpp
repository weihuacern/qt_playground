#include <QApplication>

#include "notepad.h"

int main(int argc, char *argv[]) {
    QApplication notepadApp(argc, argv);
    Notepad notepad;
    notepad.show();
    return notepadApp.exec();
}
