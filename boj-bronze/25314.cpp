#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    for(N=N/4;N>0;--N) {
        cout << "long ";
    }
    cout << "int";
    
    return 0;
}