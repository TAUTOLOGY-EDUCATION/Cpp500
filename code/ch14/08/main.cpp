#include <iostream>
#include <vector>

using namespace std;

class Stats {
    public:
        vector<int> data;

        Stats(vector<int> data) {
            this->data = data;
        }

        double mean() {
            double sum = 0;
            for(double i : this->data) {
                sum = sum + i;
            }
            return sum / this->data.size();   
        }

        double min() {
            double min = this->data[0];
            for(double i : this->data) {
                if(i < min) {
                    min = i;
                }
            }
            return min;
        }

        double max() {
            double max = this->data[0];
            for(double i : this->data) {
                if(i > max) {
                    max = i;
                }
            }
            return max;
        }

        void summary() {
            cout << "Mean : " << this->mean() << endl;
            cout << "Min : " << this->min() << endl;
            cout << "Max : " << this->max() << endl;
        }
};

int main() {
    vector<int> A {1, 3, 5, 7, 9, 11};
    Stats stat_A = Stats(A);
    stat_A.summary();

    return 0;
}