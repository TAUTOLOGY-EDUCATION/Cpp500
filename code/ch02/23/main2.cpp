#include <stdio.h>

using namespace std;

int main() {
    int a = 2;
    int b = 3;
    int c = 5;
    printf("%d*(%d + %d) = %d*%d + %d*%d", a, b, c, a, b, a, c);
    return 0;
}