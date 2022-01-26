#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please insert number : ";
    cin >> n;
    int sumx = 0;
    for (int i = 1; i <= n; i++) {
        sumx = sumx + i;
    }
    cout << sumx << endl;
    return 0;
}