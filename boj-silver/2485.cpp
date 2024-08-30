#include <iostream>
#include <vector>
using namespace std;

int getGreatestCommonDivisor(int a, int b) {
    if (b == 0) { return a; }
    if (b > a) { return getGreatestCommonDivisor(b, a); }
    return getGreatestCommonDivisor(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> treeGap;
    int f;
    cin >> f;
    for (int t, i = 0; i < n - 1; cin >> t, treeGap.push_back(t - f), ++i, f = t);
    
    int subGcd = getGreatestCommonDivisor(treeGap.at(0), treeGap.at(1));
    for (vector<int>::iterator i = treeGap.begin() + 1; i != treeGap.end(); ++i) {
        subGcd = getGreatestCommonDivisor(subGcd, *i);
    }

    int result = 0;
    for (auto tree : treeGap) {
        result += tree;
    }
    result /= subGcd;
    result -= (n - 1);

    cout << result;

    return 0;
}