#include <iostream>
#include <set>
#include <cmath>
#include <cstring>
#include <utility>
using namespace std;

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

void init(int primeNumbers[]) {

    for (int i = 2; i < 1'000'000; ++i) {
        int t = static_cast<int>(sqrt(static_cast<double>(i)));
        bool isPrime = true;

        for (int j = 2; j <= t; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeNumbers[i] = 1;
        }
    }
}

int getNumberOfCasesOfGoldbachPartition(int primeNumbers[], int n) {

    set<pair<int, int>> resultSet;

    for (int i = 2; i < n; ++i) {
        if (primeNumbers[i] == 1 && primeNumbers[n - i] == 1) {
            resultSet.insert(make_pair(min(i, n - i), max(i, n - i)));
        }
    }

    return resultSet.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int primeNumbers[1'000'000 + 1];
    memset(primeNumbers, 0, sizeof(primeNumbers));

    init(primeNumbers);

    int t;
    cin >> t;

    for (int n; t > 0; --t) {
        cin >> n;
        cout << getNumberOfCasesOfGoldbachPartition(primeNumbers, n) << '\n';
    }
    
    return 0;
}