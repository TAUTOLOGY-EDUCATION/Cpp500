#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cashier {
    public:
        vector<string> products;

        Cashier(vector<string> products) {
            this->products = products;
        }

        void recommend() {
            cout << "We have ";
            for (int i = 0; i < this->products.size(); i++) {
                if (i > 0) {
                    cout << ", ";
                }
                cout << products[i];
            }
            cout << ".";
        }
};

int main() {
    vector<string> A {"apple", "banana", "orange"};
    Cashier cashier = Cashier(A);
    cashier.recommend();

    return 0;
}