#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    set<int> setA, setB;
    for (int i = 0, _; i < a; ++i) {
        cin >> _;
        setA.insert(_);
    }
    for (int i = 0, _; i < b; ++i) {
        cin >> _;
        setB.insert(_);
    }

    set<int>::iterator i = setA.begin();
    set<int>::iterator j = setB.begin();

    int count = 0;
    for (; i != setA.end() && j != setB.end();) {
        if (*i == *j) {
            i++, j++;
        } else if (*i > *j) {
            count++;
            j++;
        } else {
            count++;
            i++;
        }
    }

    for (; i != setA.end(); count++, i++);
    for (; j != setB.end(); count++, j++);

    cout << count;
    
    return 0;
}