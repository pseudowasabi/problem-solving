#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, N, sum;
    cin >> X >> N;
    for(sum = 0;N>0;--N) {
        int a, b;
        cin >> a >> b;
        sum += a * b;
    }
    cout << (X == sum ? "Yes" : "No");
    
    return 0;
}