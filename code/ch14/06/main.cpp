#include <iostream>

using namespace std;

class Car {
    public:
        string brand, model, year, color;

        Car(string brand, string model, string year, string color) {
            this->brand = brand;
            this->model = model;
            this->year = year;
            this->color = color;
        }

        void newColor(string color) {
            this->color = color;
        }
};

int main() {
    Car car_A = Car("Honda", "Civic", "2019", "Black");
    car_A.newColor("Red");
    cout << "color = " << car_A.color;

    return 0;
}