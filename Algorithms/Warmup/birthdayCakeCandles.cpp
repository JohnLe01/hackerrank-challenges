#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int max_height = *max_element(begin(ar), end(ar));
    int candles = 0;
    for(int i = 0; i < n; i++) {
        if(ar[i] == max_height) {
            candles++;
        }
    }
    return candles;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

