#include <iostream>
#include <vector>

using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    long long sum = 0;
    for(long num: ar) {
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}

