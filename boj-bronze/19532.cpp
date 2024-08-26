#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    bool endFlag = false;
    for (int x = -999; x <= 999 && !endFlag; ++x) {
        for (int y = -999; y <= 999 && !endFlag; ++y) {
            if (a * x + b * y == c && d * x + e * y == f) {
                cout << x << " " << y;
                endFlag = true;
            }
        }
    }
    
    return 0;
}