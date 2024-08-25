#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;

    if (x + y + z != 180) {
        cout << "Error";
    } else if (x == y && y == z) {
        cout << "Equilateral";
    } else if (x == y || y == z || z == x) {
        cout << "Isosceles";
    } else {
        cout << "Scalene";
    }
    
    return 0;
}