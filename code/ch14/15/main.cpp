#include <iostream>
#include <math.h>

using namespace std;

class Tree {
    public:
        double height, width, generatedMoney;

        Tree(double height, double width, double generatedMoney) {
            this->height = height;
            this->width = width;
            this->generatedMoney = generatedMoney;
        }

        void feedA() {
            this->generatedMoney = this->generatedMoney - 10;
            this->width = this->width + 12;
        }

        void feedB() {
            this->generatedMoney = this->generatedMoney - 8;
            this->height = this->height + 10;
        }

        void sell() {
            this->generatedMoney = this->generatedMoney + this->width * pow(this->height, 0.8);
            printf("Width = %.0f, Height = %.0f\n", this->width, this->height);
            printf("Generated money = %f\n",this->generatedMoney);
        }
};

int main() {
    Tree treeA = Tree(10, 10, 1000);
    treeA.feedA();
    treeA.feedB();
    treeA.sell();

    return 0;
}