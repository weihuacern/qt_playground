#ifndef TETRISPIECE_H
#define TETRISPIECE_H

#include <QVector>

enum TetrisShape {
    NoShape, ZShape, SShape,
    LineShape, TShape, SquareShape,
    LShape, MirroredLShape
};

class TetrisPiece {
public:
    TetrisPiece() {
        setShape(NoShape);
    }

    void setRandomShape();
    void setShape(TetrisShape shape);
    TetrisShape shape() const {
        return pieceShape;
    }
    int x(int index) const {
        return coordinates[index][0];
    }
    int y(int index) const {
        return coordinates[index][1];
    }
    int minX() const;
    int maxX() const;
    int minY() const;
    int maxY() const;
    TetrisPiece rotatedLeft() const;
    TetrisPiece rotatedRight() const;

private:
    void setX(int index, int x) {
        coordinates[index][0] = x;
    }
    void setY(int index, int y) {
        coordinates[index][1] = y;
    }
    TetrisShape pieceShape;
    static const int nP = 4, nD = 2; // Dimention of coordinates, always 4 points with 2 dimension
    int coordinates[nP][nD];
};

#endif // TETRISPIECE_H
