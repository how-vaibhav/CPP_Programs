#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) { length = l; }

    // Friend function declaration
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b1(10);
    printLength(b1);   // Can access private member
    return 0;
}
