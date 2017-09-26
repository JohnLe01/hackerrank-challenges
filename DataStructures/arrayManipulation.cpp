#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long int> init_vect(n+1,0);
    long int max = 0, x = 0;

    for(int a0 = 0; a0 < m; a0++) {
        int a;
        int b;
        int k;
        cin >> a >> b >> k;
        init_vect[a] += k;
        if((b+1) <= n) init_vect[b+1] -= k;
    }

    for(int i = 1; i <= n; i++) {
        x += init_vect[i];
        if(max < x) max = x;
    }

    cout << max;
    return 0;
}

