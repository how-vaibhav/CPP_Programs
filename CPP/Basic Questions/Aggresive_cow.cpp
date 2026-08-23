#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValied(vector<int> stalls, int mid, int cows) {
    int currCow = 1; // First cow at first stall
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= mid) {
            currCow++;
            lastPos = stalls[i];
        }
        if (currCow >= cows) return true;
    }
    return false;
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int cows = 3;

    sort(stalls.begin(), stalls.end());
    int st = 1, end = stalls.back() - stalls.front();
    int ans = 0;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValied(stalls, mid, cows)) {
            ans = mid;     // possible answer
            st = mid + 1;  // try larger distance
        } else {
            end = mid - 1; // try smaller distance
        }
    }

    cout << "Maximum possible minimum distance between cows are: " << ans;
    return 0;
}
