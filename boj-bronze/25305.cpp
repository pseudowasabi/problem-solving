#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    vector<int> v;

    cin >> n >> k;
    for (int i = 0, t; i < n; ++i) {
        cin >> t;
        v.push_back(t);
    }
    sort(v.rbegin(), v.rend());

    cout << v.at(k - 1);
    
    return 0;
}