#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    if (a1 - c > 0) {
        cout << 0;
    } else if (a1 - c < 0) {
        double d = a0 / (c - a1);
        if (n0 >= d) {
            cout << 1;
        } else {
            cout << 0;
        }
    } else {
        if (a0 <= 0) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    
    return 0;
}