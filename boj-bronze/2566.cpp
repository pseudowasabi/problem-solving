#include <iostream>
using namespace std;

class MaxValuesWithPoints {
public:
    MaxValuesWithPoints() {
       x = y = max = 0;
    }
    int x, y, max;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[9][9];
    MaxValuesWithPoints mvwp;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] > mvwp.max) {
                mvwp.max = matrix[i][j];
                mvwp.x = i;
                mvwp.y = j;
            }
        }
    }

    cout << mvwp.max << '\n' << mvwp.x + 1 << ' ' << mvwp.y + 1;
    
    return 0;
}