#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    map<string, int> map1 = {{"Brazil", 35000}, {"China", 24000}, {"Germany", 42000}, {"Japan", 53000}, {"Sweden", 17000}};
    vector<int> array1;
    for (auto it = map1.begin(); it != map1.end(); it++) {
        array1.push_back(it->second);
    }
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
