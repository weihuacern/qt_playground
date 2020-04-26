#include "tetrispiece.h"

#include <QtCore>

void TetrisPiece::setRandomShape() {
    setShape(TetrisShape(QRandomGenerator::global()->bounded(7) + 1));
}

void TetrisPiece::setShape(TetrisShape shape) {
    static constexpr int coordinatesTable[8][nP][nD] = {
        { { 0, 0 },   { 0, 0 },   { 0, 0 },   { 0, 0 } },
        { { 0, -1 },  { 0, 0 },   { -1, 0 },  { -1, 1 } },
        { { 0, -1 },  { 0, 0 },   { 1, 0 },   { 1, 1 } },
        { { 0, -1 },  { 0, 0 },   { 0, 1 },   { 0, 2 } },
        { { -1, 0 },  { 0, 0 },   { 1, 0 },   { 0, 1 } },
        { { 0, 0 },   { 1, 0 },   { 0, 1 },   { 1, 1 } },
        { { -1, -1 }, { 0, -1 },  { 0, 0 },   { 0, 1 } },
        { { 1, -1 },  { 0, -1 },  { 0, 0 },   { 0, 1 } }
    };

    for (int i = 0; i < nP; i++) {
        for (int j = 0; j < nD; j++) {
            coordinates[i][j] = coordinatesTable[shape][i][j];
        }
    }
    pieceShape = shape;
}

int TetrisPiece::minX() const {
    int min = coordinates[0][0];
    for (int i = 1; i < nP; i++) {
        min = qMin(min, coordinates[i][0]);
    }
    return min;
}

int TetrisPiece::maxX() const {
    int max = coordinates[0][0];
    for (int i = 1; i < nP; i++) {
        max = qMax(max, coordinates[i][0]);
    }
    return max;
}

int TetrisPiece::minY() const {
    int min = coordinates[0][1];
    for (int i = 1; i < nP; i++) {
        min = qMin(min, coordinates[i][1]);
    }
    return min;
}

int TetrisPiece::maxY() const {
    int max = coordinates[0][1];
    for (int i = 1; i < nP; i++) {
        max = qMax(max, coordinates[i][1]);
    }
    return max;
}

TetrisPiece TetrisPiece::rotatedLeft() const {
    if (pieceShape == SquareShape) {
        return *this;
    }

    TetrisPiece result;
    result.pieceShape = pieceShape;
    for (int i = 0; i < nP; ++i) {
        result.setX(i, y(i));
        result.setY(i, -x(i));
    }
    return result;
}

TetrisPiece TetrisPiece::rotatedRight() const {
    if (pieceShape == SquareShape)
        return *this;

    TetrisPiece result;
    result.pieceShape = pieceShape;
    for (int i = 0; i < nP; ++i) {
        result.setX(i, -y(i));
        result.setY(i, x(i));
    }
    return result;
}
