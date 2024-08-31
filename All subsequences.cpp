#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void subsequences(char *in, char *out, int i, int j) {
    // Base case
    if (in[i] == '\0') {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // Recursive case
    // 1. Ignore the ith character
    subsequences(in, out, i + 1, j);

    // 2. Take the ith character
    out[j] = in[i];
    subsequences(in, out, i + 1, j + 1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char in[100];
        cin >> in;
        char out[100];
        subsequences(in, out, 0, 0);
    }
    return 0;
}
