#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float positiveNumbers = 0.0;
    float negativeNumbers = 0.0;
    float zeros = 0.0;
    
    for(int num: arr) {
        if(num > 0) {
            positiveNumbers += 1.0;
        } else if (num < 0) {
            negativeNumbers += 1.0;
        } else {
            zeros += 1.0;
        }
    }
    
    cout << positiveNumbers / n << '\n';
    cout << negativeNumbers / n << '\n';
    cout << zeros / n << '\n';
    return 0;
}

