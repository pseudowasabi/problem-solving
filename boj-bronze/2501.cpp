#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int c, d; c = d = 0;
    bool flag = false;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            d = i;
            c++;

            if (c == k) {
                flag = true;
                break;
            }
        }
    }

    cout << (flag ? d : 0);
    
    return 0;
}