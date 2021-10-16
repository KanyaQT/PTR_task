//
// Created by Alex Denisov on 16.10.2021.
//

#ifndef LESSON_16_10_21_SQUARE_H
#define LESSON_16_10_21_SQUARE_H

#include <stdio.h>
#include "Shape.h"

using namespace std;

class Square: public Shape {
    double x;
    double y;
    double side_length;

public:

    Square(double x, double y, double side_length)
    : x(x), y(y), side_length(side_length) { }

    double get_surface() {
        return side_length * side_length;
    }

    void describe_object() override {
        cout << "This is square starting at (" << x << "; " << y << ") "
        << " with length: " << side_length << endl;
    }
};
#endif //LESSON_16_10_21_SQUARE_H
