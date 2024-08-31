#include <iostream>
#include <string>
using namespace std;

void Replace(string a) {
    string result = "";
    for (char digit : a) {
        if (digit == '0') {
            result += '5';
        } else {
            result += digit;
        }
    }
    cout << result;
}

int main() {
    string n;
    cin >> n;
    Replace(n);
    return 0;
}
