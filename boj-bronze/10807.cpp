#include <iostream>
#include <cstring>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numCount[201];
    memset(numCount, 0, sizeof(numCount));

    int N;
    cin >> N;
    for(int i;N>0;--N) {
        cin >> i;
        numCount[i + 100]++;
    }
    cin >> N;
    cout << numCount[N + 100];
    
    return 0;
}