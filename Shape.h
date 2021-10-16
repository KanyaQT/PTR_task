//
// Created by Alex Denisov on 16.10.2021.
//

#ifndef LESSON_16_10_21_SHAPE_H
#define LESSON_16_10_21_SHAPE_H

using namespace std;

class Shape {
public:
    virtual ~Shape() = default;

    virtual double get_surface() = 0;

    virtual void describe_object() = 0;

};

#endif //LESSON_16_10_21_SHAPE_H
