#include <iostream>
#include <algorithm>

using namespace std;

class Warrior {
    public:
        int power, defense, HP;

        Warrior(int power, int defense, int HP) {
            this->power = power;
            this->defense = defense;
            this->HP = HP;
        }

        void attack(Warrior &enemy) {
            if (enemy.HP > 0 && this->HP > 0) {
                enemy.HP = max(0, enemy.HP - max(0, this->power - enemy.defense));
            }
            if (enemy.HP == 0) {
                cout << "Enemy died" << endl;
            }
        }
};

int main() {
    Warrior WarriorA = Warrior(100, 50, 80);
    Warrior WarriorB = Warrior(60, 80, 120);
    cout << "=== Before Attack ===" << endl;
    cout << "Warrior A HP = " << WarriorA.HP << endl;
    cout << "Warrior B HP = " << WarriorB.HP << endl;
    WarriorA.attack(WarriorB);
    WarriorB.attack(WarriorA);
    cout << "=== After Attack ===" << endl;
    cout << "Warrior A HP = " << WarriorA.HP << endl;
    cout << "Warrior B HP = " << WarriorB.HP << endl;

    return 0;
}