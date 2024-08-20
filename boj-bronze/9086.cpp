#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    
    for(string word; T > 0; --T) {
        cin >> word;
        cout << word.front() << word.back() << '\n';
    }
    
    return 0;
}