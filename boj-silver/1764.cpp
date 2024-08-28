#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    set<string> notSeen;
    set<string> result;

    string name;
    for (int i = 0; i < n; ++i) {
        cin >> name;
        notSeen.insert(name);
    }

    for (int i = 0; i < m; ++i) {
        cin >> name;
        if (notSeen.find(name) != notSeen.end()) {
            result.insert(name);
        }
    }

    cout << result.size() << '\n';
    for (auto name : result) {
        cout << name << '\n';
    }
    
    return 0;
}