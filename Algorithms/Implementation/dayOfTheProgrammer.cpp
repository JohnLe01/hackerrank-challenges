#include <iostream>
#include <vector>

using namespace std;

string solve(int year){
    int febDays;
    if(year <= 1917) {
       febDays = year % 4 ? 28: 29; 
    } else if (year > 1918) {
        febDays = !(year % 400) || (!(year % 4) && (year % 100)) ? 29: 28;
    } else {
        febDays = 15;
    }
    return to_string(256 - (febDays + 215)) + ".09." + to_string(year);
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}

