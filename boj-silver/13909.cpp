#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n;
    cin >> n;
    cout << static_cast<int>(sqrt(n));
    
    return 0;
}