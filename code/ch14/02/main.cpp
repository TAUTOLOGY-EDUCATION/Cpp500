#include <iostream>

using namespace std;

class Human {
    public:
        string name;
        int age;

        Human(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void aging(int years) {
            cout << "Before : " << this->age << " years old" << endl;
            this->age = this->age + years;
            cout << "After : " << this->age << " years old" << endl;
        }
};

int main() {
    Human John = Human("John", 23);
    John.aging(10);

    return 0;
}