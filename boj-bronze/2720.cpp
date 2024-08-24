#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    cin >> n;
    for (int cents; n > 0; --n) {
        cin >> cents;

        cout << cents / 25 << ' ';
        cents %= 25;

        cout << cents / 10 << ' ';
        cents %= 10;

        cout << cents / 5 << ' ';
        cents %= 5;

        cout << cents << '\n';
    }
    
    return 0;
}