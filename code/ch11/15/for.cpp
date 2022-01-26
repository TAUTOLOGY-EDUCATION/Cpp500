#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cout << "Please insert number : ";
    cin >> n;
    double sumx = 0;
    for (int i = 1; i <= n; i++) {
        sumx = sumx + 1.0 / pow(i, 2);
    }
    double pi = sqrt((6 * sumx));
    cout << pi << endl;
    return 0;
}