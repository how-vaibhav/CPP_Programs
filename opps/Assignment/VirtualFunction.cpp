#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() { cout << "Drawing shape"; }
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing circle"; }
};

class Square : public Shape {
public:
    void draw() override { cout << "Drawing square"; }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    s1->draw();  // → Drawing circle
    s2->draw();  // → Drawing square

    delete s1;
    delete s2;
}
