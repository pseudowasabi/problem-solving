#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    set<string> inOfficeGiggler;
    
    cin >> n;
    for (string name, status; n > 0; --n) {
        cin >> name >> status;
        if (!status.compare("enter")) {
            inOfficeGiggler.insert(name);
        } else {
            inOfficeGiggler.erase(name);
        }
    }
    
    for (set<string>::reverse_iterator i = inOfficeGiggler.rbegin(); i != inOfficeGiggler.rend(); i++) {
        cout << *i << '\n';
    }
    
    return 0;
}