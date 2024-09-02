#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    deque<int> deq;
    for (int c, p; n > 0; --n) {
        cin >> c;

        switch (c) {
        case 1:
            cin >> p;
            deq.push_front(p);
            break;
        case 2:
            cin >> p;
            deq.push_back(p);
            break;
        case 3:
            if (!deq.empty()) {
                cout << deq.front() << '\n';
                deq.pop_front();
            } else {
                cout << -1 << '\n';
            }
            break;
        case 4:
            if (!deq.empty()) {
                cout << deq.back() << '\n';
                deq.pop_back();
            } else {
                cout << -1 << '\n';
            }
            break;
        case 5:
            cout << deq.size() << '\n';
            break;
        case 6:
            cout << (deq.empty() ? 1 : 0) << '\n';
            break;
        case 7:
            if (!deq.empty()) {
                cout << deq.front() << '\n';
            } else {
                cout << -1 << '\n';
            }
            break;
        case 8:
            if (!deq.empty()) {
                cout << deq.back() << '\n';
            } else {
                cout << -1 << '\n';
            }
            break;
        default:
            cout << "error";
        }
    }
    
    return 0;
}