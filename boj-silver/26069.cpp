#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    set<string> chongChongDance;
    bool startFlag = false;

    cin >> n;
    for (string a, b; n > 0; --n) {
        cin >> a >> b;
        if (!startFlag && (!a.compare("ChongChong") || !b.compare("ChongChong"))) {
            startFlag = true;
            chongChongDance.insert(a); chongChongDance.insert(b);
            continue;
        }
        if(startFlag) {
            if (chongChongDance.find(a) != chongChongDance.end() || chongChongDance.find(b) != chongChongDance.end()) {
                chongChongDance.insert(a); chongChongDance.insert(b);
            }
        }
    }

    cout << chongChongDance.size();
    
    return 0;
}