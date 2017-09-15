#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

bool evenlyDivide(vector<int> v, int dividend) {
    for(int val : v) {
        if((dividend % val) != 0) return 0;
    }
    return 1;
}

bool evenlyDivides(int divisor, vector<int> v) {
    for(int val: v) {
        if((val % divisor) != 0) return 0;
    }
    return 1;
}

int getTotalX(vector <int> a, vector <int> b) {
    int aLcm = accumulate(begin(a), end(a), *begin(a), lcm);
    int bGcd = accumulate(begin(b), begin(b), *begin(b), gcd);
    int totalX = 0;
    for(int i = aLcm; i <= bGcd; i += aLcm) {
        if(evenlyDivide(a, i) && evenlyDivides(i, b)) {
            totalX++;
        }
    }
    return totalX;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

