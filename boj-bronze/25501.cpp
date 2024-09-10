#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (string s; t > 0; --t) {
        cin >> s;

        string s2 = s;
        reverse(s2.begin(), s2.end());

        if (!s.compare(s2)) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }

        cout << '\n';
    }
    
    return 0;
}