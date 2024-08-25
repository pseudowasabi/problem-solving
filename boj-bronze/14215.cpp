#include <iostream>
using namespace std;

bool isTriangle(int a, int b, int c) {
    return a + b > c && b + c > a && c + a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int maxLength = 0;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                if (isTriangle(i, j, k)) {
                    maxLength = i + j + k > maxLength ? i + j + k : maxLength;
                }
            }
        }
    }

    cout << maxLength;
    
    return 0;
}