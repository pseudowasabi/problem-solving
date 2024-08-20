#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int basket[2][N + 1];
    for(int i = 1; i <= N; ++i) {
        basket[0][i] = i;
    }

    for(int i, j; M > 0; --M) {
        memcpy(&basket[1], &basket[0], sizeof(int) * (N + 1));

        cin >> i >> j;
        for(int k = i;k <= j;++k) {
            basket[1][k] = basket[0][j - (k - i)];
        }

        memcpy(&basket[0], &basket[1], sizeof(int) * (N + 1));
    }

    for(int i = 1; i <= N; ++i) {
        cout << basket[0][i] << ' ';
    }
    
    return 0;
}