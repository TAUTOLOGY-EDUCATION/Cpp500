#include <iostream>

using namespace std;

class ComplexNumber {
    public:
        int r, i;

        ComplexNumber(int r, int i) {
            this->r = r;
            this->i = i;
        }

        void getValue() {
            cout << this->r << "+" << this->i << "i";
        }
};

int main() {
    ComplexNumber Z = ComplexNumber(2, 4);
    Z.getValue();

    return 0;
}