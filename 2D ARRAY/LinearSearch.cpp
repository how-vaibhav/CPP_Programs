#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<vector<int>> mat(3, vector<int>(3)); 
    int key = 21;

    cout << "Enter the matrix:\n";

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(key == mat[i][j]) {
                pair<int, int> pos = {i, j};
                cout << "Key found at (" << pos.first << ", " << pos.second << ")";
                return 0;
            }
        }
    }

    cout << "Key not found";
    return 0;
}
