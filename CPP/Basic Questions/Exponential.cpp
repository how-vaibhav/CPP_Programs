#include<iostream>
using namespace std;

int main() {
    // To find x^n using binary exponentiation
    // Time complexity: O(log n)

    double x = 2;
    int n = -1;

    long long binForm = n;
    if (n < 0) {                 // for case of :   x^-n  ==  (1/x)^n
        x = 1.0 / x;
        binForm = -binForm;
    }

    double ans = 1.0;

    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

    cout << ans << endl;
    return 0;
}
