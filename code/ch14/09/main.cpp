#include <iostream>

using namespace std;

class USDTHB {
    public:
        double amount;
        string currency;

        USDTHB(double amount, string currency) {
            this->amount = amount;
            this->currency = currency;
        }

        double toUSD() {
            if (this->currency == "THB") {
                this->currency = "USD";
                this->amount = this->amount / 30;
                return this->amount / 30;
            }
            else {
                return this->amount;
            }
        }

        double toTHB() {
            if (this->currency == "USD") {
                this->currency = "THB";
                this->amount = this->amount * 30;
                return this->amount * 30;
            }
            else {
                return this->amount;
            }
        }
};

int main() {
    USDTHB money = USDTHB(30000, "USD");
    cout << money.amount << " " + money.currency << endl;
    money.toTHB();
    cout << money.amount << " " + money.currency << endl;
    money.toUSD();
    cout << money.amount << " " + money.currency << endl;

    return 0;
}