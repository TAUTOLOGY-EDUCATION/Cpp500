#include <iostream>

using namespace std;

int main() {
    double sumPos = 0;
    double sumNeg = 0;
    for (int i = 0; i < 5; i++) {
        double num;
        cout << "Please insert num" << i + 1 << ": ";
        cin >> num;
        if (num > 0)
            sumPos += num;
        else if (num < 0)
            sumNeg += num;
    }
    cout << "sum positive = " << sumPos << endl;
    cout << "sum negative = " << sumNeg << endl;
    return 0;
}