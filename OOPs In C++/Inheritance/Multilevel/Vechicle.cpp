//Multilevel Inheritance in C++
#include <iostream>
using namespace std;

class Vehicle {
public:
    void type() { cout << "This is a Vehicle" << endl; }
};

class Car : public Vehicle {
public:
    void wheels() { cout << "Car has 4 wheels" << endl; }
};

class SportsCar : public Car {
public:
    void speed() { cout << "SportsCar is very fast" << endl; }
};

int main() {
    SportsCar sc;
    sc.type();
    sc.wheels();
    sc.speed();
    return 0;
}