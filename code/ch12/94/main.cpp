#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> array1 {1, 3, 7, 9, 2, 7, 5, 1, 8};
    sort(array1.begin(), array1.end());
    int n = array1.size();
    double median;
    if (n % 2 == 1) {
        int pos = (n - 1) / 2;
        median = array1[pos];
    }
    else {
        int pos = n / 2;
        median = (array1[pos - 1] + array1[pos]) / 2.0;
    }
    cout << median << endl;
    return 0;
}
