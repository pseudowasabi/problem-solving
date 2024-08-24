#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int matrix[100 + 1][100 + 1];
    memset(matrix, 0, sizeof(matrix));

    cin >> N;
    for (int x, y; N > 0; --N) {
        cin >> x >> y;

        for (int i = x; i < x + 10; ++i) {
            for (int j = y; j < y + 10; ++j) {
                matrix[i][j] = 1;
            }
        }
    }

    int coloredArea = 0;
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            coloredArea += matrix[i][j];
        }
    }

    cout << coloredArea;

    return 0;
}

// Q. How about using the principle of inclusion-exclusion?
// A. Impossible, since the approximate time complexity in the worst case is pow(2, 100).