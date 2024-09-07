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

    int firstAppeared = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a >> b;

        if (a == b) {
            continue;
        }

        if (a.compare("ChongChong")) {
            if (nameToIndex.find(a) != nameToIndex.end()) {
                aIndex = nameToIndex.find(a)->second;
            } else {
                nameToIndex.insert(make_pair(a, ++indexCount));
                aIndex = indexCount;
            }
        } else {
            firstAppeared = firstAppeared == -1 ? i + 1 : firstAppeared;
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
            firstAppeared = firstAppeared == -1 ? i + 1 : firstAppeared;
            bIndex = 0;
        }
        
        matrix[aIndex][bIndex] = matrix[bIndex][aIndex] = i + 1;
    }

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         cout << matrix[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    // for (auto i : nameToIndex) {
    //     cout << i.first << ' ' << i.second << '\n';
    // }

    // cout << "first appeared: " << firstAppeared << '\n';

    int numberOfPeople = nameToIndex.size() + 1;
    for (int i = 0; i < numberOfPeople; ++i) {
        for (int j = 0; j < numberOfPeople; ++j) {
            matrix[i][j] = matrix[i][j] < firstAppeared ? 0 : matrix[i][j];
        }
    }

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         cout << matrix[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    queue<int> nextSearchTarget;
    nextSearchTarget.push(0);


    // cout << numberOfPeople << '\n';


    int alreadyChecked[numberOfPeople];
    memset(alreadyChecked, 0, sizeof(alreadyChecked));

    alreadyChecked[0] = 1;
    int result = 1;

    while (!nextSearchTarget.empty()) {
        for (int i = 0; i < numberOfPeople; ++i) {
            if (matrix[nextSearchTarget.front()][i] > 0 && alreadyChecked[i] != 1) {
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