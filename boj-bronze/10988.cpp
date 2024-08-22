#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    cin >> word;

    string::iterator i = word.begin();
    string::reverse_iterator j = word.rbegin();

    bool isPalindrome = true;

    for(; i != word.end(); i++, j++) {
        if(*i != *j) {
            isPalindrome = false;
        }
    }

    cout << (isPalindrome ? 1 : 0);

    return 0;
}