#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please insert number : ";
    cin >> n;
    int product = 1;
    int i = 1;
    while (i <= n) {
        product = product * i;
        i = i + 1;
    }
    cout << product << endl;
    return 0;
}