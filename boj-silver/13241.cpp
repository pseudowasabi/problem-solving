#include <iostream>
using namespace std;

long long min(long long a, long long b) { return a < b ? a : b; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    cin >> a >> b;

    long long result = 1ll;
    for (long long i = 2ll, t = min(a, b); i <= t; ++i) {
        while (a % i == 0 && b % i == 0) {
            result *= i;
            a /= i;
            b /= i;
        }
    }

    result *= a;
    result *= b;

    cout << result;

    return 0;
}