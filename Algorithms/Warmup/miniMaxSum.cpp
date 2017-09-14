#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    long minSum = 0;
    long maxSum = 0;
    for(int i = 0; i < 5; i++) {
        long currentSum = 0;
        for(int j = 0; j < 5; j++) {
            if(j == i) {
                continue;
            } else {
                currentSum += arr[j];
            }
        }
        if(i == 0) {
            minSum = currentSum;
            maxSum = currentSum;
        } else {
            if(currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if(currentSum < minSum) {
                minSum = currentSum;
            }
        }
    }
    cout << minSum << ' ' << maxSum;
    return 0;
}

