#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please insert number : ";
    cin >> n;
    double sumx = 0;
    int i = 1;
    while (i <= n) {
        sumx = sumx + 1.0 / i;
        i = i + 1;
    }
    cout << sumx << endl;
    return 0;
}