#include <iostream>
using namespace std;

int main() {
    int numerator, denominator, result;

    cout << "Enter numerator : ";
    cin >> numerator;
    cout << "Enter denominator : ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw denominator;  // throwing the cause of error
        }

        result = numerator / denominator;
        cout << "\nRESULT IS : " << result << endl;
    }
    catch (int num) {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    return 0;
}
