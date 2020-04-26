#ifndef TETRISWINDOW_H
#define TETRISWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE
class TetrisBoard;

class TetrisWindow : public QWidget {
    Q_OBJECT

public:
    TetrisWindow(QWidget *parent = nullptr);

private:
    QLabel *createLabel(const QString &text);

    TetrisBoard *board;
    QLabel *nextPieceLabel;
    QLCDNumber *scoreLcd;
    QLCDNumber *levelLcd;
    QLCDNumber *linesLcd;
    QPushButton *startButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;
};

#endif // TETRISWINDOW_H
