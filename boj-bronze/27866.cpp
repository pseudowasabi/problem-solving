#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    cin >> word;

    int index;
    cin >> index;

    cout << word.at(index - 1);
    
    return 0;
}