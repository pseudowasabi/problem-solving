#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int basket[N + 1];
    memset(basket, 0, sizeof(basket));

    for(int i,j,k;M>0;--M) {
        cin >> i >> j >> k;
        for(;i<=j;++i) {
            basket[i] = k;
        }
    }
    for(int i=1;i<=N;++i) {
        cout << basket[i] << ' ';
    }
    
    return 0;
}