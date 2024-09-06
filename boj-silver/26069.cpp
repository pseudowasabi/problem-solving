#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <cstring>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, indexCount = 0;
    map<string, int> nameToIndex;

    cin >> n;
    int matrix[2 * n][2 * n];
    memset(matrix, 0, sizeof(matrix));

    string a, b;
    int aIndex, bIndex;

    bool startFlag = false;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;

        if (!startFlag && (!a.compare("ChongChong") || !b.compare("ChongChong")) && a.compare(b)) {
            startFlag = true;
        }

        if (startFlag) {
            if (a.compare("ChongChong")) {
                if (nameToIndex.find(a) != nameToIndex.end()) {
                    aIndex = nameToIndex.find(a)->second;
                } else {
                    nameToIndex.insert(make_pair(a, ++indexCount));
                    aIndex = indexCount;
                }
            } else {
                aIndex = 0;
            }
            if (b.compare("ChongChong")) {
                if (nameToIndex.find(b) != nameToIndex.end()) {
                    bIndex = nameToIndex.find(b)->second;
                } else {
                    nameToIndex.insert(make_pair(b, ++indexCount));
                    bIndex = indexCount;
                }
            } else {
                bIndex = 0;
            }
            
            matrix[aIndex][bIndex] = matrix[bIndex][aIndex] = 1;
        }
    }

    queue<int> nextSearchTarget;
    nextSearchTarget.push(0);

    int numberOfPeople = indexCount + 1;
    int alreadyChecked[numberOfPeople];
    memset(alreadyChecked, 0, sizeof(alreadyChecked));

    alreadyChecked[0] = 1;
    int result = 1;

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         cout << matrix[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    // cout << numberOfPeople << '\n';

    while (!nextSearchTarget.empty()) {
        for (int i = 0; i < numberOfPeople; ++i) {
            if (matrix[nextSearchTarget.front()][i] == 1 && alreadyChecked[i] != 1) {
                alreadyChecked[i] = 1;
                nextSearchTarget.push(i);
                // cout << nextSearchTarget.front() << ' ' << i << '\n';
                result++;
            }
        }
        nextSearchTarget.pop();
    }

    cout << result;
    
    return 0;
}