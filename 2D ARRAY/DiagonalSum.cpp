#include <iostream>
using namespace std;

/*
  Function to calculate the sum of
  primary and secondary diagonals of a square matrix
*/
int diagonalSum(int mat[][4], int n) {   // Time Complexity: O(n)

    int sum = 0;   // To store diagonal sum

    // Loop through each row
    for (int i = 0; i < n; i++) {

        // Add primary diagonal element
        // Condition: row index == column index
        sum += mat[i][i];

        // Add secondary diagonal element
        // Condition: row index + column index = n - 1
        // Avoid double-counting the center element
        if (i != n - i - 1) {
            sum += mat[i][n - i - 1];
        }
    }

    return sum;   // Return total diagonal sum
}

int main() {

    // Declare and initialize a 4x4 matrix
    int matrix[4][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n = 4;   // Size of matrix

    // Call the function and print the result
    cout << "Sum of all diagonal elements = "
         << diagonalSum(matrix, n);

    return 0;
}
