#include <iostream>
#include <vector>

using namespace std;

vector < int > solve(vector < int > grades){
    vector<int> results;
    for(int grade: grades) {
        int nextMultipleOf5 = ((grade + 5) / 5) * 5;
        if(grade < 38) {
            results.push_back(grade);
        } else if ((nextMultipleOf5 - grade) < 3) {
            results.push_back(nextMultipleOf5);
        } else {
            results.push_back(grade);
        }
    }
    return results;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    

    return 0;
}

