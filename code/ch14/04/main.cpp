#include <iostream>
#include <math.h>

using namespace std;

class Circle {
    public:
        double radius;

        Circle(double radius) {
            this->radius = radius;
        }

        double getArea() {
            return M_PI * this->radius * this->radius;
        }

        double getPerimeter() {
            return 2 * M_PI * this->radius;
        }
};

int main() {
    Circle circle_A = Circle(32);
    Circle circle_B = Circle(16);
    cout << "Area Circle A : " << circle_A.getArea() << endl;
    cout << "Perimeter Circle A : " << circle_A.getPerimeter() << endl;
    cout << "Area Circle B : " << circle_B.getArea() << endl;
    cout << "Perimeter Circle B : " << circle_B.getPerimeter() << endl;

    return 0;
}