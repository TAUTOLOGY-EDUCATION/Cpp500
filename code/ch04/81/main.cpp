#include <iostream>

using namespace std;

int main() {
    string array3[] = {"one", "two", "three", "four", "five"};
    int length = end(array3) - begin(array3);
    cout << length << endl;
    return 0;
}