#include <iostream>
#include <algorithm>

using namespace std;

class Driver {
    public:
        int HP, generatedMoney;

        Driver(int HP, int generatedMoney) {
            this->HP = HP;
            this->generatedMoney = generatedMoney;
        }

        void drive() {
            this->HP = this->HP - 10;
            this->generatedMoney = this->generatedMoney + 10;
        }

        void care() {
            this->HP = this->HP + 10;
            this->generatedMoney = this->generatedMoney - 10;
        }

        void report() {
            printf("HP = %d, Generated Money = %d\n", this->HP, this->generatedMoney);
        }
};

int main() {
    Driver driverA = Driver(100, 100);
    driverA.drive();
    driverA.report();
    driverA.care();
    driverA.report();

    return 0;
}