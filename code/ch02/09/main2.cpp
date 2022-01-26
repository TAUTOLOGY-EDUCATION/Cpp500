#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    string name = "John";
    printf("My name is \"");
    printf(name.c_str());
    printf("\"");
    return 0;
}