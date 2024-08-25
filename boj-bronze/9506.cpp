#include <iostream>
#include <vector>
using namespace std;

bool getDivisorsAndCheckPerfection(int n, vector<int>& divisors) {
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    int sum = 0;
    for (auto i : divisors) {
        sum += i;
    }
    return n == sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int n; ;) {
        cin >> n;
        if (n == -1) {
            break;
        }

        vector<int> divisors;
        bool isPerfect = getDivisorsAndCheckPerfection(n, divisors);

        if (isPerfect) {
            cout << n << " = ";
            for (vector<int>::iterator i = divisors.begin(); i != divisors.end(); i++) {
                cout << *i << (i != (divisors.end() - 1) ? " + " : "");
            }
        } else {
            cout << n << " is NOT perfect.";
        }
        cout << '\n';
    }
    
    return 0;
}