#include <iostream>

using namespace std;

class Dog {
    public:
        string breed, color;
        double height, weight;

        Dog(string breed, string color, double height, double weight) {
            this->breed = breed;
            this->color = color;
            this->height = height;
            this->weight = weight;
        }

        void growth() {
            this->height = this->height * 1.1;
            this->weight = this->weight * 1.1;
        }
};

int main() {
    Dog dog_A = Dog("Jack Russell Terrier", "White", 30, 7);
    dog_A.growth();
    cout << "height = " << dog_A.height << endl;
    cout << "weight = " << dog_A.weight << endl;

    return 0;
}