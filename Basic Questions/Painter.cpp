#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool isValid(const vector<int>& boards, int painters, int mid) {
    int usedPainters = 1;
    int currentLoad = 0;

    for (int len : boards) {
        if (len > mid) return false;
        if (currentLoad + len <= mid) {
            currentLoad += len;
        } else {
            usedPainters++;
            currentLoad = len;
        }
    }
    return usedPainters <= painters;
}

int main() {
    vector<int> boards = {1, 2, 3, 4};
    int painters = 4;

    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isValid(boards, painters, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "Minimum time to paint all the portraits is: " << ans << endl;
    return 0;
}
