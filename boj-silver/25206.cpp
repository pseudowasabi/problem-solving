#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

void init(map<string, float>& scoreByGrade) {
    scoreByGrade.insert({"A+", 4.5f});
    scoreByGrade.insert({"A0", 4.0f});
    scoreByGrade.insert({"B+", 3.5f});
    scoreByGrade.insert({"B0", 3.0f});
    scoreByGrade.insert({"C+", 2.5f});
    scoreByGrade.insert({"C0", 2.0f});
    scoreByGrade.insert({"D+", 1.5f});
    scoreByGrade.insert({"D0", 1.0f});
    scoreByGrade.insert({"F" , 0.0f});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, float> scoreByGrade;
    init(scoreByGrade);
    
    float scoreSum, divisor;
    scoreSum = divisor = 0.0f;

    for(int i = 0; i < 20; ++i) {
        string _, grade;
        float credit;
        cin >> _ >> credit >> grade;
        if(!grade.compare("P")) {
            continue;
        }
        divisor += credit;
        scoreSum += credit * scoreByGrade.find(grade)->second;
    }

    cout << showpoint << setprecision(6) << scoreSum / divisor;

    return 0;
}