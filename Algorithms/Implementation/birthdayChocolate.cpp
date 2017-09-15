#include <iostream>
#include <vector>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int totalNumberOfWays = 0;
    for(int i = 0; i < s.size(); i++) {
        int sum = 0;
        for(int j = 0; j < m; j++) {
           int index = i + j;
           sum += s[index];
        }
        if(sum == d) {
            totalNumberOfWays++;
        }
    }
    return totalNumberOfWays;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

