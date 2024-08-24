#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

void init(map<char, int>& digitMap) {
    for (int i = 0; i < 10; ++i) {
        digitMap.insert(make_pair(i + '0', i));
    }
    for (int i = 'A'; i <= 'Z'; ++i) {
        digitMap.insert(make_pair(i, i - 'A' + 10));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<char, int> digitMap;
    init(digitMap);

    string n;
    int b;
    cin >> n >> b;

    reverse(n.begin(), n.end());

    int idx, sum;
    idx = sum = 0;
    for (auto i : n) {
        sum += digitMap.find(i)->second * pow(b, idx);
        idx ++;
    }

    cout << sum;

    return 0;
}