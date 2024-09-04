#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;
    set<string> chattedUsers;

    cin >> n;
    for (string log; n > 0; --n) {
        cin >> log;
        if (!log.compare("ENTER")) {
            count += chattedUsers.size();
            chattedUsers.clear();
        } else {
            chattedUsers.insert(log);
        }
    }
    
    count += chattedUsers.size();
    cout << count;
    
    return 0;
}