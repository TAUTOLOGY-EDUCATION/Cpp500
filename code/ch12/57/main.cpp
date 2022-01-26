#include <iostream>
#include <vector>

using namespace std;

void print(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << a[i];
    }
    cout << "]";
}

void print2d(auto a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << ", ";
        }
        print(a[i]);
    }
    cout << "]";
}

int main() {
    vector<vector<int> > matrix1 {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int> > matrix2 {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int nRows = matrix1.size();
    int nColumns = matrix1[0].size();
    vector<vector<int> > sumMatrix {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    for (int r = 0; r < nRows; r++) {
        for (int c = 0; c < nColumns; c++) {
            sumMatrix[r][c] = matrix1[r][c] * matrix2[r][c];
        }
    }
    print2d(sumMatrix);
    return 0;
}