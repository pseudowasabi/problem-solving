#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int basket[N + 1];
    for(int i = 1; i <= N; ++i) {
        basket[i] = i;
    }

    for(int i, j, localSum; M > 0; --M) {
        cin >> i >> j;
        localSum = basket[i] + basket[j];
        basket[i] = localSum - basket[i];
        basket[j] = localSum - basket[i];
    }

    for(int i = 1; i <= N; ++i) {
        cout << basket[i] << ' ';
    }
    
    return 0;
}