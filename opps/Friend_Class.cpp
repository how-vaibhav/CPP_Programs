#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) { horsepower = hp; }

    // Declare Car as friend class
    friend class Car;
};

class Car {
public:
    void showEnginePower(Engine e) {
        cout << "Engine Horsepower: " << e.horsepower << endl;  // Accessing private member
    }
};

int main() {
    Engine e1(250);
    Car c1;
    c1.showEnginePower(e1);
    return 0;
}
