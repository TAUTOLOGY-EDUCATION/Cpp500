#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cout << "Please insert number : ";
    cin >> n;
    double sumx = 0;
    int i = 1;
    while (i <= n) {
        sumx = sumx + 1.0 / pow(i, 2);
        i = i + 1;
    }
    double pi = sqrt((6 * sumx));
    cout << pi << endl;
    return 0;
}