#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function (can be overridden)
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding base class function
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;   // Base class pointer

    a = new Dog();
    a->sound();   // Output: Dog barks

    a = new Cat();
    a->sound();   // Output: Cat meows

    return 0;
}
