#include <iostream>
#include <algorithm>
using namespace std;


int minSwaps(int arr[], int n) {
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++) {
        arrPos[i] = {arr[i], i};
    }

    sort(arrPos, arrPos + n);

    bool visited[n];
    fill(visited, visited + n, false);

    int swaps = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] || arrPos[i].second == i)
            continue;

        int cycle_size = 0;
        int j = i;
        while (!visited[j]) {
            visited[j] = true;
            j = arrPos[j].second;
            cycle_size++;
        }

        if (cycle_size > 0) {
            swaps += (cycle_size - 1);
        }
    }

    return swaps;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << minSwaps(arr, n) << endl;

    return 0;
}

