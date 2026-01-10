#include <iostream>
#include <vector>
using namespace std;

// Binary search in 2D matrix
void binary(vector<vector<int>> &v, int target) {
    int rows = v.size();
    int cols = v[0].size();

    int low = 0, high = rows * cols - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int row = mid / cols;
        int col = mid % cols;

        if (v[row][col] == target) {
            cout << target << " found at: (" << row+1 << ", " << col+1 << ")" << endl;
            return;
        }
        else if (v[row][col] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << "Target not found" << endl;
}

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 6;
    binary(v, target);

    return 0;
}
