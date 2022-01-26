#include <iostream>
#include <vector>

using namespace std;

int main() {
    int sumPrime = 0;
    int countPrime = 0;
    vector<int> array2;
    for (int i = 1; i <= 25; i++) {
        array2.push_back(i);
    }
    for (int i = 0; i < array2.size(); i++) {
        int count = 0;
        for (int j = 1; j <= array2[i]; j++) {
            if (array2[i] % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            sumPrime += array2[i];
            countPrime++;
        }
    }
    double mean = (double)sumPrime / countPrime;
    cout << mean << endl;
    return 0;
}