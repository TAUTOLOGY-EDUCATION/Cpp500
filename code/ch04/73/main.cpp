#include <iostream>
#include <array>

using namespace std;

int main() {
    string array1[] = {"America", "Brazil", "China", "Dominican", "Egypt"};
    int length = end(array1) - begin(array1);
    cout << array1[length - 2] << endl;
    return 0;
}