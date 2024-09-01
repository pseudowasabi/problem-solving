#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> stack;

    int count = 1;
    
    for (int t; n > 0; --n) {
        cin >> t;

        if (t != count) {
            stack.push_back(t);
        } else {
            count++;
        }

        while (!stack.empty() && *stack.rbegin() == count) {
            count++;
            stack.pop_back();
        }
    }

    for (; !stack.empty(); ) {
        if (*stack.rbegin() == count) {
            count++;
            stack.pop_back();
        } else {
            cout << "Sad";
            return 0;
        }
    }

    cout << "Nice";
    return 0;
}