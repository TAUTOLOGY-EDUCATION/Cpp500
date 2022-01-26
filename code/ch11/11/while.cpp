#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please insert number : ";
    cin >> n;
    int sumx = 0;
    int i = 1;
    while (i <= n) {
        sumx = sumx + i;
        i = i + 1;
    }
    cout << sumx << endl;
    return 0;
}