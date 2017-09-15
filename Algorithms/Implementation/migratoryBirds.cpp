#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    vector<int> counts = { 0, 0, 0, 0, 0, 0 };
    for(int i = 0; i < n; i++) {
        counts[ar[i] - 1]++;
    }
    return max_element(counts.begin(), counts.end()) - counts.begin() + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

