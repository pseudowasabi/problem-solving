#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void init(map<int, char>& digitMap) {
    for (int i = 0; i < 10; ++i) {
        digitMap.insert(make_pair(i, i + '0'));
    }
    for (int i = 10; i < 36; ++i) {
        digitMap.insert(make_pair(i, i - 10 + 'A'));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, char> digitMap;
    init(digitMap);

    int n, b;
    cin >> n >> b;

    string result;

    for (int i; n > 0;) {
        i = n % b;

        result += digitMap.find(i)->second;
        n /= b;
    }

    reverse(result.begin(), result.end());

    cout << result;
    
    return 0;
}