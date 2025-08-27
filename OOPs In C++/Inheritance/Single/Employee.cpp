//Single Inheritance in C++
#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    void setName(string n) { name = n; }
};

class Manager : public Employee {
public:
    void display() { cout << "Manager: " << name << endl; }
};

int main() {
    Manager m;
    m.setName("Rahul");
    m.display();
    return 0;
}