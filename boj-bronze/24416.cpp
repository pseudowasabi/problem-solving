#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> fibonacci;
    fibonacci.push_back(0);
    fibonacci.push_back(1);
    fibonacci.push_back(1);
    for (int i = 3; i <= 40; ++i) {
        fibonacci.push_back(fibonacci.at(i - 1) + fibonacci.at(i - 2));
    }
    
    cout << fibonacci.at(n) << ' ' << n - 2;
    
    return 0;
}