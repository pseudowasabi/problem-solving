#include <iostream>
#include <cmath>
using namespace std;

long long getSmallestPrimeNumberGreaterThanGivenNumber(long long n) {
    bool isPrime = false;
    long long c;
    for (c = n; !isPrime; ++c) {
        isPrime = true;
        long long t = static_cast<long long>(sqrt(static_cast<long double>(c)));
        for (long long d = 2ll; d <= t; ++d) {
            if (c % d == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return c - 1ll;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    for (long long n; k > 0; --k) {
        cin >> n;
        if (n == 0 || n == 1ll) {
            cout << 2ll << '\n';
        } else {
            cout << getSmallestPrimeNumberGreaterThanGivenNumber(n) << '\n';
        }
    }
    
    return 0;
}