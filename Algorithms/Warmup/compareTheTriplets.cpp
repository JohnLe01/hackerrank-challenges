#include <iostream>
#include <vector>

using namespace std;

vector < int > solve(vector<int> a, vector<int> b) {
    int bobScore = 0;
    int aliceScore = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] > b[i]) {
            aliceScore++;
        } else if (a[i] < b[i]) {
            bobScore++;
        }
    }
    vector<int> result = {aliceScore, bobScore};
    return result;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector<int> a = {a0, a1, a2};
    vector<int> b = {b0, b1, b2};
    vector < int > result = solve(a, b);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}

