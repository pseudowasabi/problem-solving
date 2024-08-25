#include <iostream>
#include <utility>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> minPoint, maxPoint;

    minPoint.first = minPoint.second = 10001;
    maxPoint.first = maxPoint.second = -10001;

    int n;
    cin >> n;

    for (int x, y; n > 0; --n) {
        cin >> x >> y;
        
        minPoint.first = x < minPoint.first ? x : minPoint.first;
        minPoint.second = y < minPoint.second ? y : minPoint.second;
        maxPoint.first = x > maxPoint.first ? x : maxPoint.first;
        maxPoint.second = y > maxPoint.second ? y : maxPoint.second;
    }

    cout << (maxPoint.first - minPoint.first) * (maxPoint.second - minPoint.second);
    
    return 0;
}