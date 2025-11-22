#include <iostream>
using namespace std;

class Math {
public:
    // Function with 2 int parameters
    int add(int a, int b) {
        return a + b;
    }

    // Function with 3 int parameters (overloaded)
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function with double parameters (overloaded)
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;

    cout << "Add 2 numbers (int): " << m.add(5, 10) << endl;       // 15
    cout << "Add 3 numbers (int): " << m.add(5, 10, 15) << endl;   // 30
    cout << "Add 2 numbers (double): " << m.add(5.5, 2.3) << endl; // 7.8

    return 0;
}
