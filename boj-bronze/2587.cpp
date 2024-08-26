#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;
    vector<int> v;
    for (int i = 0, t; i < 5; ++i) {
        cin >> t;
        v.push_back(t);
        sum += t;
    }
    sort(v.begin(), v.end());

    cout << sum / 5 << '\n' << v.at(2);
    
    return 0;
}