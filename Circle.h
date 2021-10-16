//
// Created by Alex Denisov on 16.10.2021.
//

#ifndef LESSON_16_10_21_CIRCLE_H
#define LESSON_16_10_21_CIRCLE_H

#include <stdio.h>
#include "Shape.h"

#include <math.h>

using namespace std;

class Circle: public Shape {
    double x;
    double y;
    double r;

public:

    Circle(double x, double y, double r): x(x), y(y), r(r) { }

    double get_surface() override {
        return M_PI * pow(r, 2);
    }

    void describe_object() override {
        cout << "This is circle with center in O( " << x << "; " << y << ") with radius " << r << endl;
    }

    double get_radius() {
        return r;
    }
};

#endif //LESSON_16_10_21_CIRCLE_H
