#include <iostream>
#include <map>
#include <utility>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    string word;
    map<string, int> wordCount;
    multimap<int, string> wordCount2;

    for (int i = 0; i < n; ++i) {
        cin >> word;
        if (word.length() < m) {
            continue;
        }
        try {
            wordCount.at(word)++;
        } catch (const exception& e) {
            wordCount.insert(make_pair(word, 1));
        }
    }

    set<int> frequency;
    for (auto word : wordCount) {
        wordCount2.insert(make_pair(word.second, word.first));
        frequency.insert(word.second);
    }

    // for (multimap<int, string>::reverse_iterator i = wordCount2.rbegin(); i != wordCount2.rend(); ++i) {
    //     cout << i->first << ' ' << i->second << '\n';
    // }

    vector<set<string>> wordByLength;
    for (int i = 0; i < 10; ++i) {
        set<string> _;
        wordByLength.push_back(_);
    }

    for (set<int>::reverse_iterator f = frequency.rbegin(); f != frequency.rend(); ++f) {
        auto itr = wordCount2.equal_range(*f);
        // cout << *f << '\n';

        for (int i = 0; i < 10; ++i) {
            wordByLength.at(i).clear();
        }

        for (auto i = itr.first; i != itr.second; ++i) {
            // cout << i->first << ' ' << i->second << '\n';
            wordByLength.at(i->second.size() - 1).insert(i->second);
        }

        for (int i = 10 - 1; i >= 0; --i) {
            for (set<string>::iterator s = wordByLength.at(i).begin(); s != wordByLength.at(i).end(); ++s) {
                // cout << *f << ' ' << i << ' ' << *s << '\n';
                cout << *s << '\n';
            }
        }
    }
    
    return 0;
}