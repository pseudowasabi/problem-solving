#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    string names[n];
    map<string, int> mapOfNames;
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
        mapOfNames.insert(make_pair(names[i], i + 1));
    }

    string target;
    for (int i = 0; i < m; ++i) {
        cin >> target;
        if (target.at(0) - '0' >= 0 && target.at(0) - '0' <= 9) {
            cout << names[stoi(target) - 1] << '\n';
        } else {
            cout << mapOfNames.find(target)->second << '\n';
        }
    }
    
    return 0;
}