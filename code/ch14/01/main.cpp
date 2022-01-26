#include <iostream>

using namespace std;

class People {
    public:
        string name;
        int age;

        People(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void introduce() {
            cout << "My name is " << this->name << ". ";
            cout << "I'm  " << this->age << " years old.";
        }
};

int main() {
    People John = People("John", 23);
    John.introduce();

    return 0;
}