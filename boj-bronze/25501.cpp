#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<int, int> recursion(string s, int l, int r) {
    
    int depth = 1;
    int isPal = 1;
    for (; l < r;) {
        if (s[l] != s[r]) {
            isPal = 0;
            break;
        }
        l++; r--;
        depth++;
    }

    return make_pair(isPal, depth);
}

pair<int, int> isPalindrome(string s) {
    return recursion(s, 0, s.length() - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (string s; t > 0; --t) {
        cin >> s;

        pair<int, int> result = isPalindrome(s);
        cout << result.first << ' ' << result.second << '\n';
    }
    
    return 0;
}