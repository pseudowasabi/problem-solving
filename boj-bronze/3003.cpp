#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int chessComponents[] = {1, 1, 2, 2, 2, 8};
    for(int i = 0, c; i < 6; ++i) {
        cin >> c;
        cout << chessComponents[i] - c << ' ';
    }

    return 0;
}