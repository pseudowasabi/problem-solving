#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<int, int> recursion(string s, int l, int r, int depth) {
    if(l >= r) return make_pair(1, depth);
    else if(s[l] != s[r]) return make_pair(0, depth);
    else return recursion(s, l+1, r-1, depth + 1);
}

pair<int, int> isPalindrome(string s) {
    return recursion(s, 0, s.length() - 1, 1);
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