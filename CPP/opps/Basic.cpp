#include <iostream>  // for cout and cin
using namespace std;

// Defining a class named 'Car'
class Car {
    // Private members (cannot be accessed directly outside the class)
    private:
        string brand;
        int year;

    // Public members (can be accessed from outside)
    public:
        // Function to set values
        void setData(string b, int y) {
            brand = b;   // assigning parameter value to data member
            year = y;
        }

        // Function to display values
        void displayData() {
            cout << "Car Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
};

int main() {
    Car myCar;  // Creating an object of class Car

    // Setting data for the object
    myCar.setData("Toyota", 2020);

    // Displaying data
    myCar.displayData();

    return 0;
}
