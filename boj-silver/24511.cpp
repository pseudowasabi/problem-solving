#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> queuestack;
    for (int i = 0, t; i < n; ++i) {
        cin >> t;
        queuestack.push_back(t);
    }
    deque<int> deq;
    for(int i = 0, t; i < n; ++i) {
        cin >> t;
        if (queuestack.at(i) == 0) {
            deq.push_back(t);
        }
    }

    int m;
    cin >> m;
    for (int i = 0, t; i < m; ++i) {
        cin >> t;
        deq.push_front(t);
        cout << deq.back() << ' ';
        deq.pop_back();
    }
    
    return 0;
}