#include <iostream>
#include <algorithm>

using namespace std;

class Businessman {
    public:
        int HP, money, happiness;

        Businessman(int HP, int money, int happiness) {
            this->HP = HP;
            this->money = money;
            this->happiness = happiness;
        }

        void work() {
            this->money = this->money + 20;
            this->happiness = this->happiness + 10;
            this->HP = this->HP - 10;
        }

        void sleep() {
            this->money = this->money - 10;
            this->HP = this->HP + 20;
            this->happiness = this->happiness + 10;
        }

        void play() {
            this->happiness = this->happiness + 20;
            this->HP = this->HP - 10;
            this->money = this->money - 10;
        }

        void report() {
            printf("HP = %d, Money = %d, Happiness = %d\n", this->HP, this->money, this->happiness);
        }
};

int main() {
    Businessman John = Businessman(100, 100, 100);
    John.report();
    John.work();
    John.report();
    John.play();
    John.report();
    John.sleep();
    John.report();

    return 0;
}