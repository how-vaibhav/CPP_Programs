#include <iostream>
#include <vector>
using namespace std;

int main() {
    

    vector<vector<int>> mat = {
        {1, 2, 3, 4,1,1,1,1},
        {5, 6, 7, 8,1,1,1,1},
        {9, 10, 11, 12,1,1,1,1},
        {13, 14, 15, 16,1,1,1,1}
    };
    int row = mat.size() , col= mat[0].size();

    int srow = 0, scol = 0;
    int erow = row - 1, ecol = col - 1;

    while (srow <= erow && scol <= ecol) {

        // top row
        for (int j = scol; j <= ecol; j++) {
            cout << mat[srow][j] << " -> ";
        }

        // right column
        for (int i = srow + 1; i <= erow; i++) {
            cout << mat[i][ecol] << " -> ";
        }

        // bottom row (only if different row)
        if (srow < erow) {
            for (int j = ecol - 1; j >= scol; j--) {
                
                cout << mat[erow][j] << " -> ";
            }
        }

        // left column (only if different column)
        if (scol < ecol) {
            for (int i = erow - 1; i > srow; i--) {
                cout << mat[i][scol] << " -> ";
            }
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}
