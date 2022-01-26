#include <iostream>

using namespace std;

int main() {
    int array2[] = {100, 101, 102, 103, 104};
    int length = end(array2) - begin(array2);
    cout << array2[length - 3] << endl;
    return 0;
}