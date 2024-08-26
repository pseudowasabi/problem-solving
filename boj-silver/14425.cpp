#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    set<string> s;

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string _;
        cin >> _;
        s.insert(_);
    }

    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        string _;
        cin >> _;
        if (s.find(_) != s.end()) {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}