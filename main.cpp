#include <iostream>
//#include "Shape.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

Shape* get_random_shape() {
    int random_int = rand() % 2;

    if (random_int == 0) {
        return new Circle(5,5,20);
    } else {
        return new Square(10, 10, 20);
    }
}

class Test {
    int a;
    int b;
    double c;
    bool d;
    int e;

public:
    Test(int a, int b, double c, bool d, int e): a(a), b(b), c(c), d(d), e(e) { }
};

int main() {
//
//    srand(time(NULL));
//
//    Circle c(5, 5, 20);
//    Square s(10, 10, 30);
//
//    Shape* sp = &s;
//
//    sp->describe_object();

//    приведение типов
// статическое приведение типов static cast
// Игнорируется тип изначально созданного объекта
//    cout << "Radius" << static_cast<Circle*>(sp)->get_radius() << endl;

//    динамическое приведение типов dynemic cast
// Не игнорирует тип изначально созданного объекта
//    Circle* cp = dynamic_cast<Circle*>(sp);
//
//    if (cp) {
//        cout << "Radius" << cp->get_radius() << endl;
//    } else {
//        cout << "This shape isn't cicle" << endl;
//    }


    Test* ptr_test = new Test(2,3,5, true,8);
    int* b = ((int*) ptr_test) + 1;
    double* c =   (double*) (b + 1);
    bool* d = (bool*) (c + 1);
    int* e = ((int*)d)+1;

    cout << "d(1 - true, 0 - false) = " << *d << endl;
    cout << "e = " << *e << endl;
    return 0;
}
