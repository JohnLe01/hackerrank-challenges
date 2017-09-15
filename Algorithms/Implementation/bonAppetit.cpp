#include <iostream>
#include <vector>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    int bActual = 0;
    for(int i = 0; i < n; i++) {
        if(i != k) {
            bActual += ar[i];
        }
    }
    return bActual / 2;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if(b - result > 0) {
        cout << b - result << endl;
    } else {
        cout << "Bon Appetit" << endl;
    }
    return 0;
}

