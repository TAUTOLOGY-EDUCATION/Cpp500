#include <iostream>
#include <algorithm>

using namespace std;

class Point {
    public:
        int x, y;

        Point(int x, int y) {
            this->x = x;
            this->y = y;
            printf("Current position : (%d, %d)\n", this->x, this->y);
        }

        void moveUp(int d) {
            this->y = this->y + d;
            printf("Current position : (%d, %d)\n", this->x, this->y);
        }

        void moveDown(int d) {
            this->y = this->y - d;
            printf("Current position : (%d, %d)\n", this->x, this->y);
        }

        void moveLeft(int d) {
            this->x = this->x - d;
            printf("Current position : (%d, %d)\n", this->x, this->y);
        }

        void moveRight(int d) {
            this->x = this->x + d;
            printf("Current position : (%d, %d)\n", this->x, this->y);
        }
};

int main() {
    Point A = Point(0, 0);
    A.moveUp(20);
    A.moveLeft(23);
    A.moveDown(65);
    A.moveRight(50);

    return 0;
}