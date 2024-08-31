#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> stack;
    int n;
    cin >> n;
    
    for (int c, p; n > 0; --n) {
        cin >> c;
        switch(c) {
        case 1:
            cin >> p;
            stack.push_back(p);
            break;
        case 2:
            if (stack.begin() != stack.end()) {
                cout << *(stack.end() - 1) << '\n';
                stack.pop_back();
            } else {
                cout << -1 << '\n';
            }
            break;
        case 3:
            cout << stack.size() << '\n';
            break;
        case 4:
            cout << (stack.size() == 0 ? 1 : 0) << '\n';
            break;
        case 5:
            if (stack.begin() != stack.end()) {
                cout << *(stack.end() - 1) << '\n';
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