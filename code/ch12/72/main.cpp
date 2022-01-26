#include <iostream>
#include <vector>
#include <map>
#include <math.h>

using namespace std;

void print(auto a) {
    for (auto pair: a) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

int main() {
    vector<double> array1;
    int n;
    cout << "Please insert n: ";
    cin >> n;
    double sumx = 0;
    for (int i = 0; i < n; i++) {
        double numeric;
        cout << "Please insert numeric: ";
        cin >> numeric;
        array1.push_back(numeric);
        sumx += numeric;
    }
    double mean = sumx / n;
    double var = 0;
    for (int i = 0; i < n; i++) {
        var = var + (array1[i] - mean) * (array1[i] - mean);
    }
    var /= n;
    map<string, double> map1;
    map1["mean"] = mean;
    map1["variance"] = var;
    print(map1);
    return 0;
}