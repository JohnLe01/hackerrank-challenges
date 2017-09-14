#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int numberOfSpaces = n - i;
        cout << string(numberOfSpaces, ' ');
        for(int j = 0; j < i; j++) {
            cout << "#";
        }
        cout << '\n';
    }
    return 0;
}

