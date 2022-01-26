#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> array1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int number;
    cout << "Please insert number: ";
    cin >> number;
    if (find(array1.begin(), array1.end(), number) != array1.end()) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}