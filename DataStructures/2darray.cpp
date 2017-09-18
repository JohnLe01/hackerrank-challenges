#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int max = INT_MIN;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int topHourglass = arr[j][i] + arr[j][i+1] + arr[j][i+2];
            int midHourglass = arr[j+1][i+1];
            int botHourglass = arr[j+2][i] + arr[j+2][i+1] + arr[j+2][i+2];
            int sum = topHourglass + midHourglass + botHourglass;
            if(sum > max) {
                max = sum;
            }
        }
    }
    cout << max << endl;

    return 0;
}

