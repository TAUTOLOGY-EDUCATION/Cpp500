#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> array1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = array1.size();
    int number;
    cout << "Please insert number: ";
    cin >> number;
    if (n > number) {
        cout << ">" << endl;
    }
    else if (n < number) {
        cout << "<" << endl;
    }
    else {
        cout << "=" << endl;
    }
    return 0;
}