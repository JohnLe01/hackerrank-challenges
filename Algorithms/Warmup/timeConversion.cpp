#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s) {
    int hh = stoi(s.substr(0,2));
    int mm = stoi(s.substr(3,2));
    if(s.substr(8,2).compare("PM") == 0) {
        if(hh != 12 || (hh <= 11 && mm <= 59)) {
            hh += 12;
        }
        return to_string(hh) + s.substr(2,6);
    } else {
        if(hh == 12 && mm <= 59) {
            hh -= 12;
            return "0" + to_string(hh) + s.substr(2,6);
        }
    }
    return s.substr(0,8);
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}

