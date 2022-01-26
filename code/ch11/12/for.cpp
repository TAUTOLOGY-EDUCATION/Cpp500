#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please insert number : ";
    cin >> n;
    int product = 1;
    for (int i = 1; i <= n; i++) {
        product = product * i;
    }
    cout << product << endl;
    return 0;
}