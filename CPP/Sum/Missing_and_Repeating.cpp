#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> grid = {{1,2,3},{1,4,5},{6,7,8}};
    unordered_set<int> s;

    int n = grid.size();
    int a = -1, b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];
            }
            s.insert(grid[i][j]);
        }
    }

    int correct_sum = (n * n * (n * n + 1)) / 2;

    int sum = 0;
    for (int x : s) {
        sum += x;
    }

    b = correct_sum - sum;

    cout << "Repeating: " << a << endl;
    cout << "Missing: " << b << endl;
}
