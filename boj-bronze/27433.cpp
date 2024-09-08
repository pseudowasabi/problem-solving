#include <iostream>
using namespace std;

long long getFactorial(long long n) {
    if (n == 0L) {
        return 1L;
    }
    return n * getFactorial(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    cout << getFactorial(n);
    
    return 0;
}