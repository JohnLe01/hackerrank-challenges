#include <iostream>
#include <vector>

using namespace std;

vector < int > getRecord(vector < int > s){
    int brokeBest = 0;
    int brokeWorst = 0;
    int lowestScore;
    int highestScore;
    for(int i = 0; i < s.size(); i++) {
        if(i == 0) {
            lowestScore = s[i];
            highestScore = s[i];
        }
        
        if(s[i] > highestScore) {
            highestScore = s[i];
            brokeBest++;
        } else if(s[i] < lowestScore) {
            lowestScore = s[i];
            brokeWorst++;
        }
    }
    vector<int> result = { brokeBest, brokeWorst };
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
